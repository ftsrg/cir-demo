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

main ()
{
  int i, j, k, l;
  float x[8][2][8][2];

  for (i = 0; i < 8; i++)
    for (j = i; j < 8; j++)
      for (k = 0; k < 2; k++)
	for (l = 0; l < 2; l++)
	  {
	    if ((i == j) && (k == l))
	      x[i][k][j][l] = 0.8;
	    else
	      x[i][k][j][l] = 0.8;
	    if (x[i][k][j][l] < 0.0)
	      abort ();
	  }

  exit (0);
}
