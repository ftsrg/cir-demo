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

/* PR c/49644 */

extern void abort (void);

int
main ()
{
  _Complex double a[12], *c = a, s = 3.0 + 1.0i;
  double b[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 }, *d = b;
  int i;
  for (i = 0; i < 6; i++)
    *c++ = *d++ * s;
  if (c != a + 6 || d != b + 6)
    abort ();
  return 0;
}
