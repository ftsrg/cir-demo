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

f (double x[2], double y[2])
{
  if (x == y)
    abort ();
}

main ()
{
  struct { int f[3]; double x[1][2]; } tp[4][2];
  int i, j, ki, kj, mi, mj;
  float bdm[4][2][4][2];

  for (i = 0; i < 4; i++)
    for (j = i; j < 4; j++)
      for (ki = 0; ki < 2; ki++)
	for (kj = 0; kj < 2; kj++)
	  if ((j == i) && (ki == kj))
	    bdm[i][ki][j][kj] = 1000.0;
	  else
	    {
	      for (mi = 0; mi < 1; mi++)
		for (mj = 0; mj < 1; mj++)
		  f (tp[i][ki].x[mi], tp[j][kj].x[mj]);
	      bdm[i][ki][j][kj] = 1000.0;
	    }
  exit (0);
}
