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

/* PR middle-end/40747 */

extern void abort (void);

int
foo (int i)
{
  return (i < 4 && i >= 0) ? i : 4;
}

int
main ()
{
  if (foo (-1) != 4) abort ();
  if (foo (0) != 0) abort ();
  if (foo (1) != 1) abort ();
  if (foo (2) != 2) abort ();
  if (foo (3) != 3) abort ();
  if (foo (4) != 4) abort ();
  if (foo (5) != 4) abort ();
  return 0;
}
