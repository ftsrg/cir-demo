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

/* PR c/7102 */

/* Verify that GCC zero-extends integer constants
   in unsigned binary operations. */

typedef unsigned char u8;

u8 fun(u8 y)
{
  u8 x=((u8)255)/y;
  return x;
}

int main(void)
{
  if (fun((u8)2) != 127)
    abort ();
  return 0;
}
