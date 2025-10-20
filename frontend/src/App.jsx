import React, { useEffect, useRef, useState } from 'react'
import Split from 'react-split'
import Editor from './components/Editor'
import OutputTabs from './components/OutputTabs'
import { AppBar, Toolbar, Button, Select, MenuItem, Box, Typography } from '@mui/material'
import axios from 'axios'

const API_ROOT = import.meta.env.VITE_API_ROOT || 'http://localhost:5173'

export default function App() {
  const [examples, setExamples] = useState([])
  const [selectedExample, setSelectedExample] = useState('')
  const [code, setCode] = useState('// select an example or start typing...')
  const [outputs, setOutputs] = useState({ llvm: '', clang: '', flat_clang: '', xcfa: '' })
  const [clangVersion, setClangVersion] = useState('')
  const [position, setPosition] = useState({ line: 1, column: 1 })

  useEffect(() => {
    axios.get(`${API_ROOT}/api/examples`).then(r => setExamples(r.data || []))
    axios.get(`${API_ROOT}/api/clang-version`).then(r => setClangVersion(r.data.version || 'unknown'))
  }, [])

  useEffect(() => {
    if (selectedExample) {
      axios.get(`${API_ROOT}/api/examples/${selectedExample}`).then(r => setCode(r.data.content || ''))
    }
  }, [selectedExample])

  const onGenerate = async () => {
    const resp = await axios.post(`${API_ROOT}/api/generate`, { code })
    setOutputs(resp.data || {})
  }

  return (
    <Box sx={{ height: '100vh', display: 'flex', flexDirection: 'column' }}>
      <AppBar position="static" className="app-toolbar" elevation={0}>
        <Toolbar>
          <Box sx={{ flex: 1, display: 'flex', alignItems: 'center', gap: 2 }}>
            <Typography variant="h6" sx={{ fontSize: 16 }}>CIR Demo</Typography>
            <Select value={selectedExample} onChange={e => setSelectedExample(e.target.value)} displayEmpty size="small">
              <MenuItem value="">Examples</MenuItem>
              {examples.map(ex => <MenuItem key={ex} value={ex}>{ex}</MenuItem>)}
            </Select>
          </Box>
          <Button color="inherit" onClick={onGenerate}>Generate</Button>
        </Toolbar>
      </AppBar>

      <Box sx={{ flex: 1, display: 'flex', minHeight: 0 }}>
        <Split sizes={[50, 50]} minSize={200} gutterSize={8} gutterAlign="center" className="split" style={{ display: 'flex', width: '100%', height: '100%' }}>
          <div style={{ width: '100%', height: '100%' }}>
            <Editor code={code} onChange={setCode} onPositionChange={setPosition} />
          </div>
          <div style={{ width: '100%', height: '100%' }}>
              <div className="no-focus-outline" style={{ height: '100%' }}>
              <OutputTabs outputs={outputs} />
            </div>
          </div>
        </Split>
      </Box>

      <Box component="footer" className="footer" sx={{ display: 'flex', justifyContent: 'space-between', alignItems: 'center' }}>
        <Typography variant="caption">Using clang: {clangVersion}</Typography>
        <Typography variant="caption">Ln {position.line}, Col {position.column}</Typography>
      </Box>
    </Box>
  )
}
