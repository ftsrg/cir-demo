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

/* PR rtl-optimization/78559 */

int g = 20;
int d = 0;

short
fn2 (int p1, int p2)
{
  return p2 >= 2 || 5 >> p2 ? p1 : p1 << p2;
}

int
main ()
{
  int result = 0;
lbl_2582:
  if (g)
    {
      for (int c = -3; c; c++)
        result = fn2 (1, g);
    }
  else
    {
      for (int i = 0; i < 2; i += 2)
        if (d)
          goto lbl_2582;
    }
  if (result != 1)
    __builtin_abort ();
  return 0;
}
