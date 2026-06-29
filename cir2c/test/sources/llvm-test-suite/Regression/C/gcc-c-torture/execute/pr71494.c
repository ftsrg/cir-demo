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

/* PR middle-end/71494 */
/* { dg-require-effective-target label_values } */

int
main ()
{
  void *label = &&out;
  int i = 0;
  void test (void)
  {
    label = &&out2;
    goto *label;
   out2:;
    i++;
  }
  goto *label;
 out:
  i += 2;
  test ();
  if (i != 3)
    __builtin_abort ();
  return 0;
}
