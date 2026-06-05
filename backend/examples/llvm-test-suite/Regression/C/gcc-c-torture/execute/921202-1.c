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

/* { dg-require-effective-target untyped_assembly } */
/* { dg-add-options stack_size } */

#ifndef STACK_SIZE
#define	VLEN	2055
#else
#define VLEN ((STACK_SIZE/16) - 1)
#endif
main ()
{
  long dx[VLEN+1];
  long dy[VLEN+1];
  long s1[VLEN];
  int cyx, cyy;
  int i;
  long size;

  for (;;)
    {
      size = VLEN;
      mpn_random2 (s1, size);

      for (i = 0; i < 1; i++)
	;

      dy[size] = 0x12345678;

      for (i = 0; i < 1; i++)
	cyy = mpn_mul_1 (dy, s1, size);

      if (cyx != cyy || mpn_cmp (dx, dy, size + 1) != 0 || dx[size] != 0x12345678)
	{
	  foo ("", 8, cyy); mpn_print (dy, size);
	}
      exxit();
    }
}

foo (){}
mpn_mul_1(){}
mpn_print (){}
mpn_random2(){}
mpn_cmp(){}
exxit(){exit(0);}
