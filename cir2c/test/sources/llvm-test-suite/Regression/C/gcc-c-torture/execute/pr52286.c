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

/* PR tree-optimization/52286 */

extern void abort (void);

int
main ()
{
#if __SIZEOF_INT__ > 2
  int a, b;
  asm ("" : "=r" (a) : "0" (0));
  b = (~a | 1) & -2038094497;
#else
  long a, b;
  asm ("" : "=r" (a) : "0" (0));
  b = (~a | 1) & -2038094497L;
#endif
  if (b >= 0)
    abort ();
  return 0;
}
