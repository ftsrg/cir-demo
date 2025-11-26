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

import React, { useEffect, useRef } from 'react'
import * as monaco from 'monaco-editor'

export default function Editor({ code, onChange, onPositionChange }) {
  const ref = useRef(null)
  const editorRef = useRef(null)

  useEffect(() => {
    editorRef.current = monaco.editor.create(ref.current, {
      value: code || '',
      language: 'cpp',
      automaticLayout: true,
      theme: 'vs-dark',
      minimap: { enabled: false },
      renderWhitespace: 'none',
      fontSize: 13,
      lineHeight: 20,
      smoothScrolling: true,
      scrollbar: { verticalScrollbarSize: 8, horizontalScrollbarSize: 8 }
    })
    const model = editorRef.current.getModel()
    const sub = model.onDidChangeContent(() => onChange(model.getValue()))
    // cursor position change
    const posSub = editorRef.current.onDidChangeCursorPosition((e) => {
      const p = e.position
      if (onPositionChange) onPositionChange({ line: p.lineNumber, column: p.column })
    })
    return () => {
      sub.dispose()
      posSub.dispose()
      editorRef.current.dispose()
    }
  }, [])

  useEffect(() => {
    const model = editorRef.current && editorRef.current.getModel()
    if (model && model.getValue() !== code) model.setValue(code)
  }, [code])

  return <div ref={ref} style={{ width: '100%', height: '100%' }} />
}
