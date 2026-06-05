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
  union {
    double d;
    unsigned char c[8];
  } d;

  d.d = 1.0/7.0;

  if (sizeof (char) * 8 == sizeof (double))
    {
      if (d.c[0] == 0x92 && d.c[1] == 0x24 && d.c[2] == 0x49 && d.c[3] == 0x92
	  && d.c[4] == 0x24 && d.c[5] == 0x49 && d.c[6] == 0xc2 && d.c[7] == 0x3f)
	exit (0);
      if (d.c[7] == 0x92 && d.c[6] == 0x24 && d.c[5] == 0x49 && d.c[4] == 0x92
	  && d.c[3] == 0x24 && d.c[2] == 0x49 && d.c[1] == 0xc2 && d.c[0] == 0x3f)
	exit (0);
#if defined __arm__ || defined __thumb__
      if (d.c[4] == 0x92 && d.c[5] == 0x24 && d.c[6] == 0x49 && d.c[7] == 0x92
	  && d.c[0] == 0x24 && d.c[1] == 0x49 && d.c[2] == 0xc2 && d.c[3] == 0x3f)
	exit (0);
#endif
      abort ();
    }

  exit (0);
}
