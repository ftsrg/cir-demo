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

/* Extracted from gas.  Incorrectly generated non-pic code at -O0 for
   IA-64, which produces linker errors on some operating systems.  */

struct
{
  int offset;
  struct slot
  {
    int field[6];
  }
  slot[4];
} s;

int
x ()
{
  int toggle = 0;
  int r = s.slot[0].field[!toggle];
  return r;
}

int
main ()
{
  return 0;
}
