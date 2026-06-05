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

extern void abort (void);

static int inv_J(int a[][2])
{
  int i, j;
  int det = 0.0;
   for (j=0; j<2; ++j)
     det += a[j][0] + a[j][1];
  return det;
}

int foo()
{
  int mat[2][2];
  mat[0][0] = 1;
  mat[0][1] = 2;
  mat[1][0] = 4;
  mat[1][1] = 8;
  return inv_J(mat);
}

int main()
{
  if (foo () != 15)
    abort ();
  return 0;
}
