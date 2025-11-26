import React, { useEffect, useRef, useState } from 'react'
import Split from 'react-split'
import Editor from './components/Editor'
import OutputTabs from './components/OutputTabs'
import { AppBar, Toolbar, Button, Box, Typography, Popover } from '@mui/material'
import FolderOpenIcon from '@mui/icons-material/FolderOpen'
import ExampleTree from './components/ExampleTree'
import axios from 'axios'

const API_ROOT = import.meta.env.VITE_API_ROOT ? import.meta.env.VITE_API_ROOT + '/' : ''

export default function App() {
  const [examples, setExamples] = useState([])
  const [selectedExample, setSelectedExample] = useState('')
  const [code, setCode] = useState('// select an example or start typing...')
  const [outputs, setOutputs] = useState({ llvm: '', clang: '', flat_clang: '', xcfa: '', c: '', c_best: '' })
  const [clangVersion, setClangVersion] = useState('')
  const [position, setPosition] = useState({ line: 1, column: 1 })

  useEffect(() => {
    axios.get(`${API_ROOT}api/examples`).then(r => setExamples(r.data || []))
    axios.get(`${API_ROOT}api/clang-version`).then(r => setClangVersion(r.data.version || 'unknown'))
  }, [])

  useEffect(() => {
    if (selectedExample) {
      axios.get(`${API_ROOT}api/examples/${selectedExample}`).then(r => setCode(r.data.content || ''))
    }
  }, [selectedExample])

  const [examplesAnchor, setExamplesAnchor] = useState(null)
  const openExamples = Boolean(examplesAnchor)
  const onOpenExamples = (e) => setExamplesAnchor(e.currentTarget)
  const onCloseExamples = () => setExamplesAnchor(null)
  const onSelectExample = (path) => { setSelectedExample(path); onCloseExamples(); }

  const onGenerate = async () => {
    const resp = await axios.post(`${API_ROOT}api/generate`, { code })
    // Ensure missing keys are present to avoid undefined in OutputTabs
    const data = resp.data || {}
    setOutputs({
      llvm: data.llvm || '',
      clang: data.clang || '',
      flat_clang: data.flat_clang || '',
      xcfa: data.xcfa || '',
      c: data.c || '',
      c_best: data.c_best || ''
    })
  }

  return (
    <Box sx={{ height: '100vh', display: 'flex', flexDirection: 'column' }}>
      <AppBar position="static" className="app-toolbar" elevation={0}>
        <Toolbar>
          <Box sx={{ flex: 1, display: 'flex', alignItems: 'center', gap: 2 }}>
            <Typography variant="h6" sx={{ fontSize: 16 }}>CIR Demo</Typography>
            <Button
              size="small"
              color="inherit"
              startIcon={<FolderOpenIcon />}
              onClick={onOpenExamples}
              aria-label="examples"
            >
              Examples
            </Button>
            <Popover open={openExamples} anchorEl={examplesAnchor} onClose={onCloseExamples} anchorOrigin={{ vertical: 'bottom', horizontal: 'left' }}>
              <Box sx={{ width: 360 }}>
                <ExampleTree examples={examples} onSelect={onSelectExample} />
              </Box>
            </Popover>
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
