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
const CLANGPP_BIN = path.join(TOOLCHAIN_ROOT, 'bin', 'clang++');
const CIR_OPT_BIN = path.join(TOOLCHAIN_ROOT, 'bin', 'cir-opt');
console.log(`Using CIR toolchain from ${TOOLCHAIN_ROOT}`);
const { execFile } = require('child_process');
const execFileAsync = (file, args, opts = {}) => new Promise((resolve) => {
  execFile(file, args, Object.assign({ timeout: 30000, maxBuffer: 50 * 1024 * 1024 }, opts), (err, stdout, stderr) => {
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

// Build a resolver that maps a 1-based CIR/MLIR line number to the original
// source line it originated from, using the `loc(...)` debug info clang embeds
// in the CIR. Aliases (`#locN = loc("file":L:C)`) and fused locations
// (`#locN = loc(fused[#locA, #locB])`) are resolved to a concrete source line.
function buildMlirToSourceResolver(mlirText) {
  const lines = String(mlirText || '').split('\n');
  const concrete = new Map(); // locName -> source line
  const fused = new Map();     // locName -> [locName]
  for (const line of lines) {
    let m = line.match(/^\s*#(loc\w*)\s*=\s*loc\("[^"]*":(\d+):\d+\)/);
    if (m) { concrete.set(m[1], parseInt(m[2], 10)); continue; }
    m = line.match(/^\s*#(loc\w*)\s*=\s*loc\(fused\[([^\]]*)\]\)/);
    if (m) fused.set(m[1], [...m[2].matchAll(/#(loc\w*)/g)].map(x => x[1]));
  }
  const resolveName = (name, seen) => {
    if (seen.has(name)) return null;
    seen.add(name);
    if (concrete.has(name)) return concrete.get(name);
    for (const child of fused.get(name) || []) {
      const r = resolveName(child, seen);
      if (r) return r;
    }
    return null;
  };
  return (mlirLine) => {
    if (!Number.isInteger(mlirLine) || mlirLine < 1 || mlirLine > lines.length) return null;
    const text = lines[mlirLine - 1];
    let m = text.match(/loc\(#(loc\w*)\)/);
    if (m) return resolveName(m[1], new Set());
    m = text.match(/loc\("[^"]*":(\d+):\d+\)/);
    return m ? parseInt(m[1], 10) : null;
  };
}

function buildComparisonPayload(mlirText, cText, traceEntries, sourceText) {
  const mlir = String(mlirText || '');
  const c = String(cText || '');
  const source = String(sourceText || '');
  const entries = Array.isArray(traceEntries) ? traceEntries : [];
  const mlirToSource = buildMlirToSourceResolver(mlir);
  const mappings = entries.map((entry, idx) => {
    const mlirStartLine = Number.isInteger(entry.mlirStartLine) ? entry.mlirStartLine : null;
    const srcLine = mlirToSource(mlirStartLine);
    return {
      index: typeof entry.index === 'number' ? entry.index : idx,
      opName: entry.opName || '',
      mapped: Boolean(entry.mapped),
      inputText: entry.inputText || '',
      outputText: entry.outputText || '',
      mlirStartLine,
      mlirEndLine: Number.isInteger(entry.mlirEndLine) ? entry.mlirEndLine : null,
      cStartLine: Number.isInteger(entry.cStartLine) ? entry.cStartLine : null,
      cEndLine: Number.isInteger(entry.cEndLine) ? entry.cEndLine : null,
      srcStartLine: srcLine,
      srcEndLine: srcLine
    };
  });

  return { source, mlir, c, mappings };
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

// cir2c version endpoint
app.get('/api/cir2c-version', async (req, res) => {
  try {
    const cir2cBin = path.join(__dirname, '..', '..', 'cir2c', 'build', 'cir2c');
    const out = await execFileAsync(cir2cBin, ['--version']);
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

// generation endpoint: runs clang to produce LLVM IR and CIR, then optionally
// flattens CIR with cir-opt before passing it to cir2c.
// Request body: { code, language, flatten? }
// flatten defaults to false (non-flat/structured CIR path); set to true to run cir-opt -cir-flatten-cfg first.
app.post('/api/generate', async (req, res) => {
  const code = req.body.code || '';
  const language = req.body.language === 'c' ? 'c' : 'cpp';
  // flatten=false (default): skip flattening; cir2c receives structured CIR directly.
  // flatten=true: run cir-opt -cir-flatten-cfg before cir2c.
  const flatten = req.body.flatten === true;
  // Issue #7: externalize all std:: calls by default (--externalize-std).
  const externalizeStd = req.body.externalizeStd !== false;
  const ext = language === 'c' ? 'c' : 'cpp';
  const clangBin = language === 'c' ? CLANG_BIN : CLANGPP_BIN;
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
  // Extra -Wno-error flags allow compilation of files with common legacy C
  // patterns (implicit conversions, etc.) that clang promotes to errors by
  // default but that verifiers can still meaningfully analyse.
  const clangIrArgs = [
    tmpFileCir, '-Xclang', '-emit-cir', '-S', '-o', cirMlirPath,
    '-Xclang', '-fdump-vtable-layouts',
    '-Wno-error=int-conversion',
    '-Wno-error=incompatible-pointer-types',
    '-Wno-error=implicit-function-declaration',
    '-Wno-error=return-type',
    '-Wno-error=implicit-int',
  ];

  // LLVM IR and CIR generation are independent; flattening depends on the CIR output.
  const filesToCleanup = [tmpFile, tmpFileCir, cirMlirPath];
  try {
    const [llvmOut, clangOut] = await Promise.all([
      execFileAsync(clangBin, llvmArgs),
      execFileAsync(clangBin, clangIrArgs)
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

      if (!flatten) {
        // Non-flat mode: use the raw structured CIR directly (no cir-opt step).
        const data = await fs.readFile(resolvedCirMlirPath, 'utf8').catch(() => '');
        flatOut = { stdout: data, stderr: '', code: 0 };
      } else if (statSafeSync(CIR_OPT_BIN)?.isFile()) {
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

  const cir2cBin = path.join(__dirname, '..', '..', 'cir2c', 'build', 'cir2c');
  const cOutput = { stdout: '', stderr: '', code: 0 };
  let trace = [];
  try {
    if (flatOut && flatOut.stdout && flatOut.stdout.length > 0) {
      const mlirPath = path.join(tmpDir, `${base}.mlir`);
      await fs.writeFile(mlirPath, flatOut.stdout, 'utf8');
      filesToCleanup.push(mlirPath);

      const outC = path.join(tmpDir, `${base}.c`);
      const outTrace = path.join(tmpDir, `${base}.trace.json`);
      const mapArgs = ['--monitor-json', outTrace];
      mapArgs.push(externalizeStd ? '--externalize-std' : '--no-externalize-std');
      mapArgs.push(mlirPath, outC);
      const mapResult = await execFileAsync(cir2cBin, mapArgs);
      cOutput.code = (mapResult && typeof mapResult.code !== 'undefined') ? mapResult.code : 1;
      cOutput.stderr = (mapResult && mapResult.stderr) ? mapResult.stderr : '';
      if (mapResult && mapResult.code === 0) {
        try { cOutput.stdout = await fs.readFile(outC, 'utf8'); filesToCleanup.push(outC); } catch (_) { cOutput.stdout = ''; }
      }
      try {
        const traceJson = await fs.readFile(outTrace, 'utf8');
        const parsed = JSON.parse(traceJson);
        trace = Array.isArray(parsed.operationTrace) ? parsed.operationTrace : [];
        filesToCleanup.push(outTrace);
      } catch (_) {}
    } else {
      console.debug('Skipping cir2c: no CIR output available');
    }
  } catch (err) {
    console.debug('cir2c run failed:', String(err));
  }

  const thetaBin = path.join(__dirname, '..', '..', 'Theta', 'theta-start.sh');
  const xcfa = { stdout: '', stderr: '', code: 0 };
  try {
    if (cOutput.stdout && cOutput.stdout.length > 0) {
      const cPath = path.join(tmpDir, `${base}_theta-input.c`);
      await fs.writeFile(cPath, cOutput.stdout, 'utf8');
      filesToCleanup.push(cPath);

      const outXCFA = path.join(tmpDir, `xcfa.dot`);
      // Run Theta mapper
      const thetaArgs = [cPath, '--output-directory', tmpDir, '--enable-xcfa-serialization', "--lbe", "NO_LBE", "--domain", "PRED_CART", "--stacktrace"];
      const thetaRun = await execFileAsync(thetaBin, thetaArgs);
      xcfa.code = (thetaRun && typeof thetaRun.code !== 'undefined') ? thetaRun.code : 1;
      xcfa.stderr = ((thetaRun && thetaRun.stderr) ? thetaRun.stderr : '') + ((thetaRun && thetaRun.stdout) ? thetaRun.stdout : '');
      if (thetaRun) {
        try { xcfa.stdout = await fs.readFile(outXCFA, 'utf8'); } catch (_) { xcfa.stdout = ''; }
      }

    } else {
      console.debug('Skipping cir2c: no flattened CIR output available');
    }
  } catch (err) {
    console.debug('Theta run failed:', String(err));
  }

  // log short summaries for debugging
  console.debug('generate results:', {
    llvm: { code: llvmOut.code, stderrLength: (llvmOut.stderr || '').length, stdoutLength: (llvmOut.stdout || '').length },
    clang: { code: clangOut.code, stderrLength: (clangOut.stderr || '').length, stdoutLength: (clangOut.stdout || '').length },
    flat_clang: { code: flatOut.code, stderrLength: (flatOut.stderr || '').length, stdoutLength: (flatOut.stdout || '').length },
    c: { code: cOutput.code, stderrLength: (cOutput.stderr || '').length, stdoutLength: (cOutput.stdout || '').length },
    xcfa: { code: xcfa.code, stderrLength: (xcfa.stderr || '').length, stdoutLength: (xcfa.stdout || '').length }
  });

  let comparison = { source: code, mlir: flatOut?.stdout || '', c: '', mappings: [] };
  if (cOutput.code === 0 && cOutput.stdout) {
    comparison = buildComparisonPayload(flatOut?.stdout || '', cOutput.stdout, trace, code);
  }

  res.json({ llvm: llvmOut, clang: clangOut, flat_clang: flatOut, xcfa: xcfa, c: cOutput, comparison });
  } finally {
    for (const file of filesToCleanup) {
      try { await fs.unlink(file); } catch (_) {}
    }
  }
});

const PORT = process.env.PORT || 5173;
app.listen(PORT, () => console.log(`backend listening on ${PORT}`));
