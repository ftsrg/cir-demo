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

/* { dg-require-effective-target label_values } */

int
x (int i)
{
  static const void *j[] = {&& x, && y, && z};

  goto *j[i];

 x: return 2;
 y: return 3;
 z: return 5;
}

int
main (void)
{
  if (   x (0) != 2
      || x (1) != 3
      || x (2) != 5)
    abort ();

  exit (0);
}
