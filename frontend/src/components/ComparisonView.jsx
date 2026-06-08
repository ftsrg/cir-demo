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

// The linked views rendered inside the comparison tab, in display order. `id`
// selects the line fields from each trace mapping; `cls` is the decoration CSS
// class. The source is *not* rendered here — its highlight is pushed up to the
// main editor in the leftmost pane (see onSrcHighlight / onSrcReveal).
const VIEWS = [
  { id: 'mlir', title: 'CIR', language: 'plaintext', cls: 'cmp-highlight-mlir' },
  { id: 'c', title: 'C', language: 'cpp', cls: 'cmp-highlight-c' }
]

// All ids tracked in a mapping group, including the source line that lives in
// the main editor rather than in one of the VIEWS above.
const GROUP_IDS = ['src', 'mlir', 'c']

export default function ComparisonView({ data = {}, onSrcHighlight = () => {}, onSrcReveal = () => {} }) {
  const mlirText = data?.mlir || ''
  const cText = data?.c || ''
  const mappings = Array.isArray(data?.mappings) ? data.mappings : []

  const text = { mlir: mlirText, c: cText }

  // Container + editor refs, keyed by view id.
  const containerRefs = { mlir: useRef(null), c: useRef(null) }
  const editorRefs = useRef({ mlir: null, c: null })
  const decorRefs = useRef({ mlir: [], c: [] })

  // The source highlight/reveal callbacks are recreated on each App render, so
  // keep them in a ref for the once-registered Monaco handlers to read.
  const cbRef = useRef({ onSrcHighlight, onSrcReveal })
  useEffect(() => { cbRef.current = { onSrcHighlight, onSrcReveal } }, [onSrcHighlight, onSrcReveal])

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
    // lineToGroups[viewId] = Map(line -> Set(groupIndex)); only the hoverable
    // views (CIR, C) need a reverse index — the source is never hovered here.
    const lineToGroups = { mlir: new Map(), c: new Map() }
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

    const clearAll = () => {
      for (const v of VIEWS) setDecorations(v.id, [])
      cbRef.current.onSrcHighlight([])
    }

    // Given a hovered (view, line), highlight every linked line: the CIR/C lines
    // here, and the source lines in the main editor on the left.
    const highlightFrom = (viewId, line) => {
      const { groups, lineToGroups } = linkageRef.current
      const gidx = lineToGroups[viewId].get(line)
      if (!gidx) { clearAll(); return }
      const lines = { src: new Set(), mlir: new Set(), c: new Set() }
      for (const gi of gidx) {
        for (const id of GROUP_IDS) groups[gi][id].forEach(l => lines[id].add(l))
      }
      for (const v of VIEWS) setDecorations(v.id, [...lines[v.id]])
      cbRef.current.onSrcHighlight([...lines.src])
    }

    // On click, scroll the other view here, and the main source editor, to the
    // first linked line.
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
      const srcTarget = first.src[0]
      if (srcTarget) cbRef.current.onSrcReveal(srcTarget)
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
      // Don't leave a stale highlight in the main editor after this tab unmounts.
      cbRef.current.onSrcHighlight([])
    }
  }, [])

  // Push new text into the existing models when the data changes.
  useEffect(() => {
    for (const v of VIEWS) {
      const model = editorRefs.current[v.id]?.getModel()
      if (model && model.getValue() !== text[v.id]) model.setValue(text[v.id])
    }
  }, [mlirText, cText])

  // Always render the editor containers so the create-on-mount effect above can
  // attach to them; otherwise the editors are never created on first load and
  // only appear after a tab switch forces a remount. The empty state is shown
  // as an overlay instead of replacing the layout.
  const hasData = Boolean(mlirText || cText)

  return (
    <Box sx={{ height: '100%', display: 'flex', flexDirection: 'column', minHeight: 0 }}>
      <Box sx={{ display: 'flex', justifyContent: 'space-between', px: 1, py: 0.5, color: '#9aa4b2', fontSize: 11 }}>
        <span>Hover over CIR or C to highlight the mapped source line on the left and across the views; click to scroll to the match.</span>
        <span>{mappings.length} mapped operations</span>
      </Box>
      <Box sx={{ flex: 1, minHeight: 0, position: 'relative' }}>
        {!hasData && (
          <Box sx={{ position: 'absolute', inset: 0, display: 'flex', alignItems: 'center', justifyContent: 'center', zIndex: 1, bgcolor: '#0f1115' }}>
            <Typography sx={{ color: '#9aa4b2', fontSize: 12 }}>no comparison data generated yet</Typography>
          </Box>
        )}
        <Split sizes={[50, 50]} minSize={120} gutterSize={6} gutterAlign="center" className="split" style={{ display: 'flex', width: '100%', height: '100%' }}>
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
