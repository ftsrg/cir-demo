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

/* PR middle-end/37931 */

extern void abort (void);

int
foo (int a, unsigned int b)
{
  return (a | 1) & (b | 1);
}

int
main (void)
{
  if (foo (6, 0xc6) != 7)
    abort ();
  if (foo (0x80, 0xc1) != 0x81)
    abort ();
  if (foo (4, 4) != 5)
    abort ();
  if (foo (5, 4) != 5)
    abort ();
  return 0;
}
