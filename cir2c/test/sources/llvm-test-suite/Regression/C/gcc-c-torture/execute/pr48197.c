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

/* PR c/48197 */

extern void abort (void);
static int y = 0x8000;

int
main ()
{
  unsigned int x = (short)y;
  if (sizeof (0LL) == sizeof (0U))
    return 0;
  if (0LL > (0U ^ (short)-0x8000))
    abort ();
  if (0LL > (0U ^ x))
    abort ();
  if (0LL > (0U ^ (short)y))
    abort ();
  if ((0U ^ (short)-0x8000) < 0LL)
    abort ();
  if ((0U ^ x) < 0LL)
    abort ();
  if ((0U ^ (short)y) < 0LL)
    abort ();
  return 0;
}
