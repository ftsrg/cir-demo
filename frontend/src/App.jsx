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

import React, { useEffect, useRef, useState } from 'react'
import Split from 'react-split'
import Editor from './components/Editor'
import OutputTabs from './components/OutputTabs'
import { AppBar, Toolbar, Button, Box, Typography, Popover, Select, MenuItem } from '@mui/material'
import FolderOpenIcon from '@mui/icons-material/FolderOpen'
import ExampleTree from './components/ExampleTree'
import axios from 'axios'

const API_ROOT = import.meta.env.VITE_API_ROOT ? import.meta.env.VITE_API_ROOT + '/' : ''
const API_USER = import.meta.env.VITE_API_USER || ''
const API_PASSWORD = import.meta.env.VITE_API_PASSWORD || ''

const api = axios.create({
  baseURL: API_ROOT,
  ...(API_USER ? { auth: { username: API_USER, password: API_PASSWORD } } : {})
})

api.interceptors.response.use(
  (resp) => resp,
  (err) => {
    console.error('API error', {
      url: err?.config?.url,
      method: err?.config?.method,
      status: err?.response?.status
    })
    return Promise.reject(err)
  }
)

export default function App() {
  const [examples, setExamples] = useState([])
  const [selectedExample, setSelectedExample] = useState('')
  const [code, setCode] = useState('// select an example or start typing...')
  const [outputs, setOutputs] = useState({ llvm: '', clang: '', flat_clang: '', xcfa: '', c: '', c_best: '', comparison: {} })
  const [clangVersion, setClangVersion] = useState('')
  const [position, setPosition] = useState({ line: 1, column: 1 })

  useEffect(() => {
    api.get('api/examples').then(r => setExamples(r.data || [])).catch(() => {})
    api.get('api/clang-version').then(r => setClangVersion(r.data.version || 'unknown')).catch(() => {})
  }, [])

  useEffect(() => {
    if (selectedExample) {
      api.get(`api/examples/${selectedExample}`).then(r => setCode(r.data.content || '')).catch(() => {})
    }
  }, [selectedExample])

  const [language, setLanguage] = useState('cpp')
  const [examplesAnchor, setExamplesAnchor] = useState(null)
  const openExamples = Boolean(examplesAnchor)
  const onOpenExamples = (e) => setExamplesAnchor(e.currentTarget)
  const onCloseExamples = () => setExamplesAnchor(null)
  const onSelectExample = (path) => { setSelectedExample(path); onCloseExamples(); }

  const onGenerate = async () => {
    const resp = await api.post('api/generate', { code, language })
    // Ensure missing keys are present to avoid undefined in OutputTabs
    const data = resp.data || {}
    setOutputs({
      llvm: data.llvm || '',
      clang: data.clang || '',
      flat_clang: data.flat_clang || '',
      xcfa: data.xcfa || '',
      c: data.c || '',
      c_best: data.c_best || '',
      comparison: data.comparison || {}
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
          <Box sx={{ display: 'flex', alignItems: 'center', gap: 1 }}>
            <Select
              value={language}
              onChange={(e) => setLanguage(e.target.value)}
              size="small"
              variant="outlined"
              sx={{ color: 'inherit', '.MuiOutlinedInput-notchedOutline': { borderColor: 'rgba(255,255,255,0.5)' }, '.MuiSvgIcon-root': { color: 'inherit' }, fontSize: 14, height: 32 }}
            >
              <MenuItem value="cpp">C++</MenuItem>
              <MenuItem value="c">C</MenuItem>
            </Select>
            <Button color="inherit" onClick={onGenerate}>Generate</Button>
          </Box>
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
