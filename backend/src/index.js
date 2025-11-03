const express = require('express');
const path = require('path');
const fs = require('fs').promises;
const fsSync = require('fs');
const cors = require('cors');

const app = express();
app.use(cors());
app.use(express.json());

// Basic auth middleware: read credentials from a JSON file (BASIC_AUTH_FILE env or backend/config/credentials.json)
const BASIC_AUTH_FILE = process.env.BASIC_AUTH_FILE || path.join(__dirname, '..', 'config', 'credentials.json');
function loadCredsSync() {
  try {
    const raw = fsSync.readFileSync(BASIC_AUTH_FILE, 'utf8');
    const parsed = JSON.parse(raw);
    return { username: String(parsed.username || ''), password: String(parsed.password || '') };
  } catch (e) {
    return null;
  }
}

function expressBasicAuth(req, res, next) {
  const creds = loadCredsSync();
  if (!creds || !creds.username) {
    // no credentials configured: deny by default
    res.setHeader('WWW-Authenticate', 'Basic realm="CIR Demo"');
    return res.status(401).send('Unauthorized');
  }
  const auth = req.headers['authorization'];
  if (!auth || !auth.startsWith('Basic ')) {
    res.setHeader('WWW-Authenticate', 'Basic realm="CIR Demo"');
    return res.status(401).send('Unauthorized');
  }
  const token = auth.slice('Basic '.length);
  const decoded = Buffer.from(token, 'base64').toString('utf8');
  const [u, p] = decoded.split(':');
  if (u === creds.username && p === creds.password) return next();
  res.setHeader('WWW-Authenticate', 'Basic realm="CIR Demo"');
  return res.status(401).send('Unauthorized');
}

// apply to API routes
app.use('/api', expressBasicAuth);

const EXAMPLES_DIR = path.join(__dirname, '..', 'examples');

// list example .cpp files recursively under EXAMPLES_DIR
app.get('/api/examples', async (req, res) => {
  try {
    const results = [];
    async function walk(dir, base) {
      const entries = await fs.readdir(dir, { withFileTypes: true });
      for (const ent of entries) {
        const full = path.join(dir, ent.name);
        const rel = base ? path.join(base, ent.name) : ent.name;
        if (ent.isDirectory()) {
          await walk(full, rel);
        } else if (ent.isFile() && ent.name.endsWith('.cpp')) {
          results.push(rel);
        }
      }
    }
    await walk(EXAMPLES_DIR, '');
    res.json(results);
  } catch (err) {
    res.status(500).json({ error: String(err) });
  }
});

// load a specific example (supports nested paths). Use a wildcard route and sanitize.
app.get('/api/examples/*', async (req, res) => {
  try {
    const rel = req.params[0] || '';
    // Prevent path traversal: resolve and ensure it is within EXAMPLES_DIR
    const full = path.join(EXAMPLES_DIR, rel);
    const resolved = path.resolve(full);
    const examplesRoot = path.resolve(EXAMPLES_DIR);
    if (!resolved.startsWith(examplesRoot + path.sep) && resolved !== examplesRoot) {
      return res.status(400).json({ error: 'invalid path' });
    }
    const stat = await fs.stat(resolved);
    if (!stat.isFile()) return res.status(404).json({ error: 'not found' });
    const content = await fs.readFile(resolved, 'utf8');
    res.json({ name: rel, content });
  } catch (err) {
    res.status(500).json({ error: String(err) });
  }
});

// clang binary (the user placed it under backend/bin/bin/clang)
const CLANG_BIN = path.join(__dirname, '..', 'bin', 'bin', 'clang');
const { execFile } = require('child_process');
const execFileAsync = (file, args, opts = {}) => new Promise((resolve) => {
  execFile(file, args, Object.assign({ timeout: 20000, maxBuffer: 50 * 1024 * 1024 }, opts), (err, stdout, stderr) => {
    const out = { stdout: stdout || '', stderr: stderr || '' };
    if (err && err.code !== 0) {
      out.code = err.code || 'ERR';
      out.error = (err.message || String(err));
    } else {
      out.code = 0;
    }
    resolve(out);
  });
});

// clang version endpoint: execute the local clang binary --version
app.get('/api/clang-version', async (req, res) => {
  try {
    const out = await execFileAsync(CLANG_BIN, ['--version']);
    // execFileAsync returns an object { stdout, stderr, code, error? }
    let text = '';
    if (out && typeof out === 'object') {
      text = (out.stdout || '').toString();
      if (!text) text = (out.stderr || '').toString();
      if (out.error && !text) text = String(out.error);
    } else {
      text = String(out || '');
    }
    const first = (text || '').split('\n')[0] || '';
    res.json({ version: first });
  } catch (err) {
    res.json({ version: `error: ${String(err.message || err)}` });
  }
});

// generation endpoint: runs clang to produce LLVM IR, clang IR and flat clang IR
app.post('/api/generate', async (req, res) => {
  const code = req.body.code || '';
  const tmpDir = path.join(__dirname, '..', 'tmp');
  await fs.mkdir(tmpDir, { recursive: true });
  const base = `input-${Date.now()}`;
  const tmpFile = path.join(tmpDir, `${base}.cpp`);
  const tmpFileCir = path.join(tmpDir, `${base}.cir.cpp`);
  const tmpFileFlat = path.join(tmpDir, `${base}.flat.cpp`);
  await fs.writeFile(tmpFile, code, 'utf8');
  // write two copies for the CIR and flat runs (some clang frontends expect source filename)
  await fs.writeFile(tmpFileCir, code, 'utf8');
  await fs.writeFile(tmpFileFlat, code, 'utf8');

  // Prepare commands
  // LLVM IR: clang -S -emit-llvm <file> -o -
  const llvmArgs = ['-S', '-emit-llvm', tmpFile, '-o', '-'];

  // Clang IR (CIR): clang <file> -Xclang -emit-cir -fsyntax-only
  // The CIR frontend writes a .mlir file next to the input file (same basename + .mlir)
  const clangIrArgs = [tmpFileCir, '-Xclang', '-emit-cir', '-fsyntax-only'];

  // Flat Clang IR: clang <file> -Xclang -emit-cir-flat -fsyntax-only
  const clangFlatArgs = [tmpFileFlat, '-Xclang', '-emit-cir-flat', '-fsyntax-only'];

  // Run commands in parallel with guarded promises
  const tasks = {
    llvm: execFileAsync(CLANG_BIN, llvmArgs),
    clang: execFileAsync(CLANG_BIN, clangIrArgs),
    flat_clang: execFileAsync(CLANG_BIN, clangFlatArgs),
  };

  const filesToCleanup = [tmpFile, tmpFileCir, tmpFileFlat];
  try {
    const [llvmOut, clangOut, flatOut] = await Promise.all([tasks.llvm, tasks.clang, tasks.flat_clang]);

    // Read generated CIR files (if any). Some frontends append '.mlir', others replace '.cpp' with '.mlir'.
    const cirCandidates = [ `${tmpFileCir}.mlir`, tmpFileCir.replace(/\.cpp$/i, '.mlir') ];
    const flatCandidates = [ `${tmpFileFlat}.mlir`, tmpFileFlat.replace(/\.cpp$/i, '.mlir') ];

    for (const cand of cirCandidates) {
      try {
        const exists = await fs.stat(cand).then(s => s.isFile()).catch(() => false);
        if (exists) {
          const data = await fs.readFile(cand, 'utf8').catch(() => '');
          if (clangOut && typeof clangOut === 'object') clangOut.stdout = (data || '') + (clangOut.stdout || '');
          filesToCleanup.push(cand);
          break;
        }
      } catch (_) {}
    }

    for (const cand of flatCandidates) {
      try {
        const exists = await fs.stat(cand).then(s => s.isFile()).catch(() => false);
        if (exists) {
          const data = await fs.readFile(cand, 'utf8').catch(() => '');
          if (flatOut && typeof flatOut === 'object') flatOut.stdout = (data || '') + (flatOut.stdout || '');
          filesToCleanup.push(cand);
          break;
        }
      } catch (_) {}
    }

    const xcfa = `// xcfa output placeholder - work in progress\n`;
      // If CIR was produced, try running the xcfa-mapper (strict and best-effort)
      const xcfaMapperBin = path.join(__dirname, '..', '..', 'xcfa-mapper', 'build', 'xcfa-mapper');
      const cOutputs = { c: '', c_best: '' };
      try {
        // If clangOut.stdout contains the CIR text, write it to a temp file and run mapper.
        if (clangOut && clangOut.stdout && clangOut.stdout.length > 0) {
          const mlirPath = path.join(tmpDir, `${base}.mlir`);
          await fs.writeFile(mlirPath, clangOut.stdout, 'utf8');
          filesToCleanup.push(mlirPath);

          const outC = path.join(tmpDir, `${base}.c`);
          const outCBest = path.join(tmpDir, `${base}.best.c`);
          // Run strict mapper
          const mapStrict = await execFileAsync(xcfaMapperBin, [mlirPath, outC]);
          if (mapStrict && mapStrict.code === 0) {
            try { cOutputs.c = await fs.readFile(outC, 'utf8'); filesToCleanup.push(outC); } catch (_) { cOutputs.c = ''; }
          } else {
            // If mapper failed, include stderr text in the c output field for visibility
            cOutputs.c = (mapStrict && mapStrict.stderr) ? mapStrict.stderr : '';
          }

          // Run best-effort mapper
          const mapBest = await execFileAsync(xcfaMapperBin, ['--best-effort', mlirPath, outCBest]);
          if (mapBest && mapBest.code === 0) {
            try { cOutputs.c_best = await fs.readFile(outCBest, 'utf8'); filesToCleanup.push(outCBest); } catch (_) { cOutputs.c_best = ''; }
          } else {
            cOutputs.c_best = (mapBest && mapBest.stderr) ? mapBest.stderr : '';
          }
        }
      } catch (err) {
        console.debug('xcfa-mapper run failed:', String(err));
      }
    // log short summaries for debugging
    console.debug('generate results:', {
      llvm: { code: llvmOut.code, stderrLength: (llvmOut.stderr || '').length, stdoutLength: (llvmOut.stdout || '').length },
      clang: { code: clangOut.code, stderrLength: (clangOut.stderr || '').length, stdoutLength: (clangOut.stdout || '').length },
      flat_clang: { code: flatOut.code, stderrLength: (flatOut.stderr || '').length, stdoutLength: (flatOut.stdout || '').length },
    });

    res.json({ llvm: llvmOut, clang: clangOut, flat_clang: flatOut, xcfa });
  } finally {
    // best-effort cleanup of temp and generated files
    for (const file of filesToCleanup) {
      try { await fs.unlink(file); } catch (_) {}
    }
  }
});

const PORT = process.env.PORT || 5173;
app.listen(PORT, () => console.log(`backend listening on ${PORT}`));
