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

/* PR rtl-opt/15289 */

typedef struct { _Complex char a; _Complex char b; } Scc2;

Scc2 s = { 1+2i, 3+4i };

int checkScc2 (Scc2 s)
{
  return s.a != 1+2i || s.b != 3+4i;
}

int main (void)
{
  return checkScc2 (s);
}
