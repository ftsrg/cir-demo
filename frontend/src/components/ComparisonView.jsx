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

import React, { useEffect, useMemo, useRef } from 'react'
import Split from 'react-split'
import * as monaco from 'monaco-editor'
import { Box, Typography } from '@mui/material'

// The three linked views, in display order. `id` selects the line fields from
// each trace mapping; `cls` is the decoration CSS class.
const VIEWS = [
  { id: 'src', title: 'Source', language: 'cpp', cls: 'cmp-highlight-src' },
  { id: 'mlir', title: 'CIR', language: 'plaintext', cls: 'cmp-highlight-mlir' },
  { id: 'c', title: 'C', language: 'cpp', cls: 'cmp-highlight-c' }
]

export default function ComparisonView({ data = {} }) {
  const srcText = data?.source || ''
  const mlirText = data?.mlir || ''
  const cText = data?.c || ''
  const mappings = Array.isArray(data?.mappings) ? data.mappings : []

  const text = { src: srcText, mlir: mlirText, c: cText }

  // Container + editor refs, keyed by view id.
  const containerRefs = { src: useRef(null), mlir: useRef(null), c: useRef(null) }
  const editorRefs = useRef({ src: null, mlir: null, c: null })
  const decorRefs = useRef({ src: [], mlir: [], c: [] })

  // Each "group" links the lines that belong to one mapped operation across the
  // three views. From the groups we build, per view, a lookup from a line
  // number to the groups that touch it.
  const linkage = useMemo(() => {
    const groups = []
    for (const m of mappings) {
      const src = Number.isInteger(m.srcStartLine) ? [m.srcStartLine] : []
      const mlir = Number.isInteger(m.mlirStartLine) ? [m.mlirStartLine] : []
      const c = []
      if (Number.isInteger(m.cStartLine) && Number.isInteger(m.cEndLine) && m.cStartLine <= m.cEndLine) {
        for (let l = m.cStartLine; l <= m.cEndLine; l += 1) c.push(l)
      }
      if (src.length || mlir.length || c.length) groups.push({ src, mlir, c })
    }
    // lineToGroups[viewId] = Map(line -> Set(groupIndex))
    const lineToGroups = { src: new Map(), mlir: new Map(), c: new Map() }
    groups.forEach((g, gi) => {
      for (const v of VIEWS) {
        for (const line of g[v.id]) {
          if (!lineToGroups[v.id].has(line)) lineToGroups[v.id].set(line, new Set())
          lineToGroups[v.id].get(line).add(gi)
        }
      }
    })
    return { groups, lineToGroups }
  }, [mappings])

  // Keep the latest linkage in a ref so the (once-registered) Monaco event
  // handlers always read current data instead of the value captured at mount.
  const linkageRef = useRef(linkage)
  useEffect(() => { linkageRef.current = linkage }, [linkage])

  useEffect(() => {
    const common = {
      readOnly: true,
      automaticLayout: true,
      minimap: { enabled: false },
      theme: 'vs-dark',
      fontSize: 12,
      lineHeight: 18,
      scrollBeyondLastLine: false
    }
    for (const v of VIEWS) {
      if (!containerRefs[v.id].current) continue
      editorRefs.current[v.id] = monaco.editor.create(containerRefs[v.id].current, {
        ...common, value: text[v.id], language: v.language
      })
    }

    const setDecorations = (viewId, lines) => {
      const editor = editorRefs.current[viewId]
      if (!editor) return
      const cls = VIEWS.find(v => v.id === viewId).cls
      const decos = lines.map(line => ({
        range: new monaco.Range(line, 1, line, 1),
        options: { isWholeLine: true, className: cls }
      }))
      decorRefs.current[viewId] = editor.deltaDecorations(decorRefs.current[viewId], decos)
    }

    const clearAll = () => { for (const v of VIEWS) setDecorations(v.id, []) }

    // Given a hovered (view, line), highlight every linked line in all views.
    const highlightFrom = (viewId, line) => {
      const { groups, lineToGroups } = linkageRef.current
      const gidx = lineToGroups[viewId].get(line)
      if (!gidx) { clearAll(); return }
      const lines = { src: new Set(), mlir: new Set(), c: new Set() }
      for (const gi of gidx) {
        for (const v of VIEWS) groups[gi][v.id].forEach(l => lines[v.id].add(l))
      }
      for (const v of VIEWS) setDecorations(v.id, [...lines[v.id]])
    }

    // On click, scroll the other two views to the first linked line.
    const revealFrom = (viewId, line) => {
      const { groups, lineToGroups } = linkageRef.current
      const gidx = lineToGroups[viewId].get(line)
      if (!gidx) return
      const first = groups[[...gidx][0]]
      for (const v of VIEWS) {
        if (v.id === viewId) continue
        const target = first[v.id][0]
        if (target && editorRefs.current[v.id]) {
          editorRefs.current[v.id].revealLineInCenter(target, monaco.editor.ScrollType.Smooth)
        }
      }
    }

    const subs = []
    for (const v of VIEWS) {
      const editor = editorRefs.current[v.id]
      if (!editor) continue
      subs.push(editor.onMouseMove(e => {
        const line = e?.target?.position?.lineNumber
        if (line) highlightFrom(v.id, line)
      }))
      subs.push(editor.onMouseLeave(() => clearAll()))
      subs.push(editor.onMouseDown(e => {
        const line = e?.target?.position?.lineNumber
        if (line) revealFrom(v.id, line)
      }))
    }

    return () => {
      subs.forEach(s => s.dispose())
      for (const v of VIEWS) {
        if (editorRefs.current[v.id]) editorRefs.current[v.id].dispose()
        editorRefs.current[v.id] = null
      }
    }
  }, [])

  // Push new text into the existing models when the data changes.
  useEffect(() => {
    for (const v of VIEWS) {
      const model = editorRefs.current[v.id]?.getModel()
      if (model && model.getValue() !== text[v.id]) model.setValue(text[v.id])
    }
  }, [srcText, mlirText, cText])

  if (!srcText && !mlirText && !cText) {
    return <Typography sx={{ color: '#9aa4b2', fontSize: 12 }}>no comparison data generated yet</Typography>
  }

  return (
    <Box sx={{ height: '100%', display: 'flex', flexDirection: 'column', minHeight: 0 }}>
      <Box sx={{ display: 'flex', justifyContent: 'space-between', px: 1, py: 0.5, color: '#9aa4b2', fontSize: 11 }}>
        <span>Hover to highlight mapped lines across source, CIR and C; click to scroll the others to the match.</span>
        <span>{mappings.length} mapped operations</span>
      </Box>
      <Box sx={{ flex: 1, minHeight: 0 }}>
        <Split sizes={[34, 33, 33]} minSize={120} gutterSize={6} gutterAlign="center" className="split" style={{ display: 'flex', width: '100%', height: '100%' }}>
          {VIEWS.map(v => (
            <div key={v.id} style={{ width: '100%', height: '100%', minHeight: 0, display: 'flex', flexDirection: 'column' }}>
              <div style={{ color: '#9aa4b2', fontSize: 10, padding: '2px 6px' }}>{v.title}</div>
              <div ref={containerRefs[v.id]} style={{ width: '100%', flex: 1, minHeight: 0 }} />
            </div>
          ))}
        </Split>
      </Box>
    </Box>
  )
}
