import React, { useState } from 'react'
import { Tabs, Tab, Box, Typography, IconButton, Collapse } from '@mui/material'
import ExpandLess from '@mui/icons-material/ExpandLess'
import ExpandMore from '@mui/icons-material/ExpandMore'

export default function OutputTabs({ outputs = {} }) {
  const [tab, setTab] = useState(0)
  const [stderrOpen, setStderrOpen] = useState(true)
  const keys = ['llvm', 'clang', 'flat_clang', 'c', 'c_best', 'xcfa']
  const active = outputs[keys[tab]]

  // helper to extract stdout/stderr for structured outputs
  const getStdout = obj => (obj ? (typeof obj === 'string' ? obj : obj.stdout || '') : '')
  const getStderr = obj => (obj ? (typeof obj === 'string' ? '' : obj.stderr || '') : '')

  return (
    <Box sx={{ height: '100%', display: 'flex', flexDirection: 'column', minHeight: 0 }}>
      <Tabs
        value={tab}
        onChange={(e, v) => setTab(v)}
        sx={{
          minHeight: 36,
          backgroundColor: '#0b3a66',
          '& .MuiTabs-indicator': { backgroundColor: '#82b1ff', height: 2 },
          '& .MuiTab-root': { minHeight: 36, textTransform: 'none', color: '#cfd8e6' },
          '& .MuiTab-root.Mui-selected': { color: '#ffffff' }
        }}
      >
          <Tab label="LLVM IR" />
          <Tab label="Clang IR" />
          <Tab label="Flat Clang IR" />
          <Tab label="C" />
          <Tab label="C (best effort)" />
          <Tab label="XCFA" />
      </Tabs>

  <Box sx={{ p: 1, flex: 1, display: 'flex', flexDirection: 'column', bgcolor: '#0f1115', color: '#ddd', fontFamily: 'monospace', fontSize: 12, minHeight: 0 }}>
        <Box sx={{ flex: 1, overflow: 'auto', minHeight: 0 }}>
          {getStderr(active) ? (
            <Box sx={{ mb: 1, p: 1, backgroundColor: '#2b0000', border: '1px solid #550000', borderRadius: 1 }}>
              <Box sx={{ display: 'flex', alignItems: 'center', justifyContent: 'space-between' }}>
                <Typography sx={{ color: '#ffd6d6', fontSize: 13, fontFamily: 'monospace' }}>stderr:</Typography>
                <IconButton size="small" onClick={() => setStderrOpen(v => !v)} sx={{ color: '#ffd6d6' }}>
                  {stderrOpen ? <ExpandLess fontSize="small" /> : <ExpandMore fontSize="small" />}
                </IconButton>
              </Box>
              <Collapse in={stderrOpen} timeout="auto">
                <pre className="output-pre" style={{ color: '#ffd6d6', whiteSpace: 'pre-wrap' }}>{getStderr(active)}</pre>
              </Collapse>
            </Box>
          ) : null}

          <pre className="output-pre">{getStdout(active) || `no ${keys[tab]} generated yet`}</pre>
        </Box>
      </Box>
    </Box>
  )
}
