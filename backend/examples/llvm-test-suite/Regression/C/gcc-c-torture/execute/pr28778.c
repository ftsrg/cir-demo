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

extern void abort(void);
typedef long GLint;
void aglChoosePixelFormat (const GLint *);

void
find (const int *alistp)
{
  const int *blist;
  int list[32];
  if (alistp)
    blist = alistp;
  else
    {
      list[3] = 42;
      blist = list;
    }
  aglChoosePixelFormat ((GLint *) blist);
}

void
aglChoosePixelFormat (const GLint * a)
{
  int *b = (int *) a;
  if (b[3] != 42)
    abort ();
}

int
main (void)
{
  find (0);
  return 0;
}
