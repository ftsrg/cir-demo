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

import React, { useMemo, useState } from 'react'
import { List, ListItemButton, ListItemIcon, ListItemText, Collapse, Box } from '@mui/material'
import FolderIcon from '@mui/icons-material/Folder'
import DescriptionIcon from '@mui/icons-material/Description'
import ExpandLess from '@mui/icons-material/ExpandLess'
import ExpandMore from '@mui/icons-material/ExpandMore'

// build a nested tree object from flat paths
function buildTree(paths) {
  const root = {}
  for (const p of paths) {
    const parts = p.split(/[\\/]/).filter(Boolean)
    let node = root
    for (let i = 0; i < parts.length; i++) {
      const part = parts[i]
      if (!node[part]) node[part] = { __children: {}, __isFile: false }
      if (i === parts.length - 1) node[part].__isFile = true
      node = node[part].__children
    }
  }
  return root
}

function TreeList({ nodeObj, basePath = '', onSelect }) {
  const [openMap, setOpenMap] = useState({})
  const toggle = (key) => setOpenMap(m => ({ ...m, [key]: !m[key] }))

  return (
    <List dense>
      {Object.keys(nodeObj).map((key) => {
        const node = nodeObj[key]
        const fullPath = basePath ? `${basePath}/${key}` : key
        const isLeaf = node.__isFile && Object.keys(node.__children).length === 0
        if (isLeaf) {
          return (
            <ListItemButton key={fullPath} onClick={() => onSelect(fullPath)}>
              <ListItemIcon><DescriptionIcon fontSize="small"/></ListItemIcon>
              <ListItemText primary={key} />
            </ListItemButton>
          )
        }
        const opened = !!openMap[fullPath]
        return (
          <Box key={fullPath}>
            <ListItemButton onClick={() => toggle(fullPath)}>
              <ListItemIcon><FolderIcon fontSize="small"/></ListItemIcon>
              <ListItemText primary={key} />
              {opened ? <ExpandLess /> : <ExpandMore />}
            </ListItemButton>
            <Collapse in={opened} timeout="auto" unmountOnExit>
              <Box sx={{ pl: 2 }}>
                <TreeList nodeObj={node.__children} basePath={fullPath} onSelect={onSelect} />
              </Box>
            </Collapse>
          </Box>
        )
      })}
    </List>
  )
}

export default function ExampleTree({ examples = [], onSelect }) {
  const tree = useMemo(() => buildTree(examples), [examples])
  return (
    <Box sx={{ maxHeight: 360, overflow: 'auto' }}>
      <TreeList nodeObj={tree} onSelect={onSelect} />
    </Box>
  )
}
