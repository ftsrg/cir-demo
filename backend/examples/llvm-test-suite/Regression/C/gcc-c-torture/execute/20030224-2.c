/*
 * Copyright 2026 LLVM Project
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

/* Make sure that we don't free any temp stack slots associated with
   initializing marker before we're finished with them.  */

extern void abort();

typedef struct { short v16; } __attribute__((packed)) jint16_t;

struct node {
  jint16_t magic;
  jint16_t nodetype;
  int totlen;
} __attribute__((packed));

struct node node, *node_p = &node;

int main()
{
  struct node marker = {
    .magic = (jint16_t) {0x1985},
    .nodetype = (jint16_t) {0x2003},
    .totlen = node_p->totlen
  };
  if (marker.magic.v16 != 0x1985)
    abort();
  if (marker.nodetype.v16 != 0x2003)
    abort();
  return 0;
}
