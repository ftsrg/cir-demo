/*
 * Copyright 2025 Budapest University of Technology and Economics
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

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
        } else if (ent.isFile() && (ent.name.endsWith('.cpp') || ent.name.endsWith('.c'))) {
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

function generatedMlirCandidates(sourcePath) {
  return [
    `${sourcePath}.mlir`,
    sourcePath.replace(/\.(c|cc|cpp|cxx)$/i, '.mlir')
  ];
}

function statSafeSync(candidate) {
  try {
    return fsSync.statSync(candidate);
  } catch (_) {
    return null;
  }
}

const TOOLCHAIN_ROOT = path.join(__dirname, '..', 'bin');
const CLANG_BIN = path.join(TOOLCHAIN_ROOT, 'bin', 'clang');
const CIR_OPT_BIN = path.join(TOOLCHAIN_ROOT, 'bin', 'cir-opt');
console.log(`Using CIR toolchain from ${TOOLCHAIN_ROOT}`);
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

function buildComparisonPayload(mlirText, cText, traceEntries) {
  const mlir = String(mlirText || '');
  const c = String(cText || '');
  const entries = Array.isArray(traceEntries) ? traceEntries : [];
  const mappings = entries.map((entry, idx) => ({
    index: typeof entry.index === 'number' ? entry.index : idx,
    opName: entry.opName || '',
    mapped: Boolean(entry.mapped),
    inputText: entry.inputText || '',
    outputText: entry.outputText || '',
    mlirStartLine: Number.isInteger(entry.mlirStartLine) ? entry.mlirStartLine : null,
    mlirEndLine: Number.isInteger(entry.mlirEndLine) ? entry.mlirEndLine : null,
    cStartLine: Number.isInteger(entry.cStartLine) ? entry.cStartLine : null,
    cEndLine: Number.isInteger(entry.cEndLine) ? entry.cEndLine : null
  }));

  return { mlir, c, mappings };
}

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

// generation endpoint: runs clang to produce LLVM IR and CIR, then flattens CIR with cir-opt
app.post('/api/generate', async (req, res) => {
  const code = req.body.code || '';
  const language = req.body.language === 'c' ? 'c' : 'cpp';
  const ext = language === 'c' ? 'c' : 'cpp';
  const tmpDir = path.join(__dirname, '..', 'tmp');
  await fs.mkdir(tmpDir, { recursive: true });
  const base = `input-${Date.now()}`;
  const tmpFile = path.join(tmpDir, `${base}.${ext}`);
  const tmpFileCir = path.join(tmpDir, `${base}.cir.${ext}`);
  const cirMlirPath = path.join(tmpDir, `${base}.cir.mlir`);
  await fs.writeFile(tmpFile, code, 'utf8');
  // write a dedicated CIR copy and a dedicated output path for the emitted CIR
  await fs.writeFile(tmpFileCir, code, 'utf8');

  // Prepare commands
  // LLVM IR: clang -S -emit-llvm <file> -o -
  const llvmArgs = ['-S', '-emit-llvm', tmpFile, '-o', '-'];

  // Clang IR (CIR): clang <file> -Xclang -emit-cir -S -o <file>
  const clangIrArgs = [tmpFileCir, '-Xclang', '-emit-cir', '-S', '-o', cirMlirPath];

  // LLVM IR and CIR generation are independent; flattening depends on the CIR output.
  const filesToCleanup = [tmpFile, tmpFileCir, cirMlirPath];
  try {
    const [llvmOut, clangOut] = await Promise.all([
      execFileAsync(CLANG_BIN, llvmArgs),
      execFileAsync(CLANG_BIN, clangIrArgs)
    ]);

    let flatOut = { stdout: '', stderr: '', code: 0 };

    // Read the generated CIR file. Keep a fallback probe for toolchains that ignore -o.
    const cirCandidates = [cirMlirPath, ...generatedMlirCandidates(tmpFileCir)];
    let resolvedCirMlirPath = null;

    for (const cand of cirCandidates) {
      try {
        const exists = await fs.stat(cand).then(s => s.isFile()).catch(() => false);
        if (exists) {
          const data = await fs.readFile(cand, 'utf8').catch(() => '');
          if (clangOut && typeof clangOut === 'object') clangOut.stdout = (data || '') + (clangOut.stdout || '');
          if (!filesToCleanup.includes(cand)) filesToCleanup.push(cand);
          resolvedCirMlirPath = cand;
          break;
        }
      } catch (_) {}
    }

    if (resolvedCirMlirPath) {
      const flatMlirPath = path.join(tmpDir, `${base}.flat.mlir`);
      filesToCleanup.push(flatMlirPath);

      if (statSafeSync(CIR_OPT_BIN)?.isFile()) {
        flatOut = await execFileAsync(CIR_OPT_BIN, [resolvedCirMlirPath, '-cir-flatten-cfg', '-o', flatMlirPath]);
        try {
          const flatExists = await fs.stat(flatMlirPath).then(s => s.isFile()).catch(() => false);
          if (flatExists) {
            const data = await fs.readFile(flatMlirPath, 'utf8').catch(() => '');
            flatOut.stdout = (data || '') + (flatOut.stdout || '');
          }
        } catch (_) {}
      } else {
        flatOut = {
          stdout: '',
          stderr: `cir-opt not found at ${CIR_OPT_BIN}`,
          code: 1,
          error: `cir-opt not found at ${CIR_OPT_BIN}`
        };
      }
    } else {
      flatOut = {
        stdout: '',
        stderr: 'clang did not produce a CIR .mlir file to flatten',
        code: clangOut.code === 0 ? 1 : clangOut.code,
        error: 'missing CIR .mlir output'
      };
    }

  const xcfaMapperBin = path.join(__dirname, '..', '..', 'xcfa-mapper', 'build', 'xcfa-mapper');
  // Structured outputs matching other tasks: { stdout, stderr, code }
  const cOutputs = { c: { stdout: '', stderr: '', code: 0 }, c_best: { stdout: '', stderr: '', code: 0 } };
  let strictTrace = [];
  let bestTrace = [];
  try {
    // If flatOut.stdout contains the CIR text, write it to a temp file and run mapper.
    if (flatOut && flatOut.stdout && flatOut.stdout.length > 0) {
      const mlirPath = path.join(tmpDir, `${base}.mlir`);
      await fs.writeFile(mlirPath, flatOut.stdout, 'utf8');
      filesToCleanup.push(mlirPath);

      const outC = path.join(tmpDir, `${base}.c`);
      const outCBest = path.join(tmpDir, `${base}.best.c`);
      const outTrace = path.join(tmpDir, `${base}.trace.json`);
      const outTraceBest = path.join(tmpDir, `${base}.best.trace.json`);
      // Run strict mapper
      const mapStrict = await execFileAsync(xcfaMapperBin, ['--monitor-json', outTrace, mlirPath, outC]);
      cOutputs.c.code = (mapStrict && typeof mapStrict.code !== 'undefined') ? mapStrict.code : 1;
      cOutputs.c.stderr = (mapStrict && mapStrict.stderr) ? mapStrict.stderr : '';
      if (mapStrict && mapStrict.code === 0) {
        try { cOutputs.c.stdout = await fs.readFile(outC, 'utf8'); filesToCleanup.push(outC); } catch (_) { cOutputs.c.stdout = ''; }
      }
      try {
        const strictJson = await fs.readFile(outTrace, 'utf8');
        const parsed = JSON.parse(strictJson);
        strictTrace = Array.isArray(parsed.operationTrace) ? parsed.operationTrace : [];
        filesToCleanup.push(outTrace);
      } catch (_) {}

      // Run best-effort mapper
      const mapBest = await execFileAsync(xcfaMapperBin, ['--best-effort', '--monitor-json', outTraceBest, mlirPath, outCBest]);
      cOutputs.c_best.code = (mapBest && typeof mapBest.code !== 'undefined') ? mapBest.code : 1;
      cOutputs.c_best.stderr = (mapBest && mapBest.stderr) ? mapBest.stderr : '';
      if (mapBest && mapBest.code === 0) {
        try { cOutputs.c_best.stdout = await fs.readFile(outCBest, 'utf8'); filesToCleanup.push(outCBest); } catch (_) { cOutputs.c_best.stdout = ''; }
      }
      try {
        const bestJson = await fs.readFile(outTraceBest, 'utf8');
        const parsed = JSON.parse(bestJson);
        bestTrace = Array.isArray(parsed.operationTrace) ? parsed.operationTrace : [];
        filesToCleanup.push(outTraceBest);
      } catch (_) {}
    } else {
      console.debug('Skipping xcfa-mapper: no flattened CIR output available');
    }
  } catch (err) {
    console.debug('xcfa-mapper run failed:', String(err));
  }

  const thetaBin = path.join(__dirname, '..', '..', 'Theta', 'theta-start.sh');
  const xcfa = { stdout: '', stderr: '', code: 0 };
  try {
    // If flatOut.stdout contains the CIR text, write it to a temp file and run mapper.
    if (cOutputs.c_best && cOutputs.c_best.stdout && cOutputs.c_best.stdout.length > 0) {
      const cPath = path.join(tmpDir, `${base}_theta-input.c`);
      await fs.writeFile(cPath, cOutputs.c_best.stdout, 'utf8');
      filesToCleanup.push(cPath);

      const outXCFA = path.join(tmpDir, `xcfa.dot`);
      // Run Theta mapper
      const thetaArgs = [cPath, '--output-directory', tmpDir, '--enable-xcfa-serialization', "--lbe", "NO_LBE", "--domain", "PRED_CART"];
      const thetaRun = await execFileAsync(thetaBin, thetaArgs);
      xcfa.code = (thetaRun && typeof thetaRun.code !== 'undefined') ? thetaRun.code : 1;
      xcfa.stderr = ((thetaRun && thetaRun.stderr) ? thetaRun.stderr : '') + ((thetaRun && thetaRun.stdout) ? thetaRun.stdout : '');
      if (thetaRun) {
        try { xcfa.stdout = await fs.readFile(outXCFA, 'utf8'); } catch (_) { xcfa.stdout = ''; }
      }

    } else {
      console.debug('Skipping xcfa-mapper: no flattened CIR output available');
    }
  } catch (err) {
    console.debug('Theta run failed:', String(err));
  }

  // log short summaries for debugging
  console.debug('generate results:', {
    llvm: { code: llvmOut.code, stderrLength: (llvmOut.stderr || '').length, stdoutLength: (llvmOut.stdout || '').length },
    clang: { code: clangOut.code, stderrLength: (clangOut.stderr || '').length, stdoutLength: (clangOut.stdout || '').length },
    flat_clang: { code: flatOut.code, stderrLength: (flatOut.stderr || '').length, stdoutLength: (flatOut.stdout || '').length },
    c: { code: cOutputs.c.code, stderrLength: (cOutputs.c.stderr || '').length, stdoutLength: (cOutputs.c.stdout || '').length },
    c_best: { code: cOutputs.c_best.code, stderrLength: (cOutputs.c_best.stderr || '').length, stdoutLength: (cOutputs.c_best.stdout || '').length },
    xcfa: { code: xcfa.code, stderrLength: (xcfa.stderr || '').length, stdoutLength: (xcfa.stdout || '').length }
  });

  let comparison = { mlir: flatOut?.stdout || '', c: '', mappings: [] };
  if (cOutputs.c && cOutputs.c.code === 0 && cOutputs.c.stdout) {
    comparison = buildComparisonPayload(flatOut?.stdout || '', cOutputs.c.stdout, strictTrace);
  } else if (cOutputs.c_best && cOutputs.c_best.code === 0 && cOutputs.c_best.stdout) {
    comparison = buildComparisonPayload(flatOut?.stdout || '', cOutputs.c_best.stdout, bestTrace);
  }

  res.json({ llvm: llvmOut, clang: clangOut, flat_clang: flatOut, xcfa: xcfa, c: cOutputs.c, c_best: cOutputs.c_best, comparison });
  } finally {
    // best-effort cleanup of temp and generated files
    for (const file of filesToCleanup) {
      try { await fs.unlink(file); } catch (_) {}
    }
  }
});

const PORT = process.env.PORT || 5173;
app.listen(PORT, () => console.log(`backend listening on ${PORT}`));
