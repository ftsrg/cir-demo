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

export default function ComparisonView({ data = {} }) {
  const mlirRef = useRef(null)
  const cRef = useRef(null)
  const mlirEditorRef = useRef(null)
  const cEditorRef = useRef(null)
  const mlirDecorRef = useRef([])
  const cDecorRef = useRef([])

  const mlirText = data?.mlir || ''
  const cText = data?.c || ''
  const mappings = Array.isArray(data?.mappings) ? data.mappings : []

  const maps = useMemo(() => {
    const mlirToC = new Map()
    const cToMlir = new Map()

    for (const mapping of mappings) {
      if (typeof mapping.mlirStartLine !== 'number') continue
      const mLine = mapping.mlirStartLine
      const cStart = typeof mapping.cStartLine === 'number' ? mapping.cStartLine : null
      const cEnd = typeof mapping.cEndLine === 'number' ? mapping.cEndLine : null

      if (!mlirToC.has(mLine)) mlirToC.set(mLine, [])
      if (cStart && cEnd && cStart <= cEnd) {
        mlirToC.get(mLine).push({ startLine: cStart, endLine: cEnd })
        for (let cLine = cStart; cLine <= cEnd; cLine += 1) {
          if (!cToMlir.has(cLine)) cToMlir.set(cLine, new Set())
          cToMlir.get(cLine).add(mLine)
        }
      }
    }

    return { mlirToC, cToMlir }
  }, [mappings])

  useEffect(() => {
    if (!mlirRef.current || !cRef.current) return undefined

    mlirEditorRef.current = monaco.editor.create(mlirRef.current, {
      value: mlirText,
      language: 'plaintext',
      readOnly: true,
      automaticLayout: true,
      minimap: { enabled: false },
      theme: 'vs-dark',
      fontSize: 12,
      lineHeight: 18,
      scrollBeyondLastLine: false
    })

    cEditorRef.current = monaco.editor.create(cRef.current, {
      value: cText,
      language: 'cpp',
      readOnly: true,
      automaticLayout: true,
      minimap: { enabled: false },
      theme: 'vs-dark',
      fontSize: 12,
      lineHeight: 18,
      scrollBeyondLastLine: false
    })

    const clearDecorations = () => {
      if (mlirEditorRef.current) {
        mlirDecorRef.current = mlirEditorRef.current.deltaDecorations(mlirDecorRef.current, [])
      }
      if (cEditorRef.current) {
        cDecorRef.current = cEditorRef.current.deltaDecorations(cDecorRef.current, [])
      }
    }

    const highlightFromMlirLine = (lineNumber) => {
      const cRanges = maps.mlirToC.get(lineNumber) || []

      const mlirDecos = [
        {
          range: new monaco.Range(lineNumber, 1, lineNumber, 1),
          options: { isWholeLine: true, className: 'cmp-highlight-mlir' }
        }
      ]

      const cDecos = cRanges.map((r) => ({
        range: new monaco.Range(r.startLine, 1, r.endLine, 1),
        options: { isWholeLine: true, className: 'cmp-highlight-c' }
      }))

      mlirDecorRef.current = mlirEditorRef.current.deltaDecorations(mlirDecorRef.current, mlirDecos)
      cDecorRef.current = cEditorRef.current.deltaDecorations(cDecorRef.current, cDecos)
    }

    const highlightFromCLine = (lineNumber) => {
      const mlirLines = maps.cToMlir.get(lineNumber) ? Array.from(maps.cToMlir.get(lineNumber)) : []
      const mlirDecos = mlirLines.map((mLine) => ({
        range: new monaco.Range(mLine, 1, mLine, 1),
        options: { isWholeLine: true, className: 'cmp-highlight-mlir' }
      }))

      const cDecos = [
        {
          range: new monaco.Range(lineNumber, 1, lineNumber, 1),
          options: { isWholeLine: true, className: 'cmp-highlight-c' }
        }
      ]

      mlirDecorRef.current = mlirEditorRef.current.deltaDecorations(mlirDecorRef.current, mlirDecos)
      cDecorRef.current = cEditorRef.current.deltaDecorations(cDecorRef.current, cDecos)
    }

    const mlirMoveSub = mlirEditorRef.current.onMouseMove((e) => {
      const line = e?.target?.position?.lineNumber
      if (!line) return
      highlightFromMlirLine(line)
    })
    const mlirLeaveSub = mlirEditorRef.current.onMouseLeave(() => clearDecorations())

    const cMoveSub = cEditorRef.current.onMouseMove((e) => {
      const line = e?.target?.position?.lineNumber
      if (!line) return
      highlightFromCLine(line)
    })
    const cLeaveSub = cEditorRef.current.onMouseLeave(() => clearDecorations())

    return () => {
      mlirMoveSub.dispose()
      mlirLeaveSub.dispose()
      cMoveSub.dispose()
      cLeaveSub.dispose()
      clearDecorations()
      if (mlirEditorRef.current) mlirEditorRef.current.dispose()
      if (cEditorRef.current) cEditorRef.current.dispose()
      mlirEditorRef.current = null
      cEditorRef.current = null
    }
  }, [])

  useEffect(() => {
    const mlirModel = mlirEditorRef.current?.getModel()
    if (mlirModel && mlirModel.getValue() !== mlirText) mlirModel.setValue(mlirText)
    const cModel = cEditorRef.current?.getModel()
    if (cModel && cModel.getValue() !== cText) cModel.setValue(cText)
  }, [mlirText, cText])

  if (!mlirText && !cText) {
    return <Typography sx={{ color: '#9aa4b2', fontSize: 12 }}>no comparison data generated yet</Typography>
  }

  return (
    <Box sx={{ height: '100%', display: 'flex', flexDirection: 'column', minHeight: 0 }}>
      <Box sx={{ display: 'flex', justifyContent: 'space-between', px: 1, py: 0.5, color: '#9aa4b2', fontSize: 11 }}>
        <span>Hover a line on either side to highlight mapped lines.</span>
        <span>{mappings.length} mapped operations</span>
      </Box>
      <Box sx={{ flex: 1, minHeight: 0 }}>
        <Split sizes={[50, 50]} minSize={160} gutterSize={6} gutterAlign="center" className="split" style={{ display: 'flex', width: '100%', height: '100%' }}>
          <div style={{ width: '100%', height: '100%', minHeight: 0 }}>
            <div ref={mlirRef} style={{ width: '100%', height: '100%' }} />
          </div>
          <div style={{ width: '100%', height: '100%', minHeight: 0 }}>
            <div ref={cRef} style={{ width: '100%', height: '100%' }} />
          </div>
        </Split>
      </Box>
    </Box>
  )
}
