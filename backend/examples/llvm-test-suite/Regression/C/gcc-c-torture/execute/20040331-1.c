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

/* PR c++/14755 */
extern void abort (void);
extern void exit (int);

int
main (void)
{
#if __INT_MAX__ >= 2147483647
  struct { int count: 31; } s = { 0 };
  while (s.count--)
    abort ();
#elif __INT_MAX__ >= 32767
  struct { int count: 15; } s = { 0 };
  while (s.count--)
    abort ();
#else
  /* Don't bother because __INT_MAX__ is too small.  */
#endif
  exit (0);
}
