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

/* This exposed a bug in tree-ssa-ccp.c.  Since 'j' and 'i' are never
   defined, CCP was not traversing the edges out of the if(), which caused
   the PHI node for 'k' at the top of the while to only be visited once.
   This ended up causing CCP to think that 'k' was the constant '1'.  */
main()
{
  int i, j, k;

  k = 0;
  while (k < 10)
    {
      k++;
      if (j > i)
	j = 5;
      else
	j =3;
    }

  if (k != 10)
    abort ();

  return 0;
}
