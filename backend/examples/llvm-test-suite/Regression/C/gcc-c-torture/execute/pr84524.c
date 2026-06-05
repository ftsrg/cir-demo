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

/* PR target/84524 */

__attribute__((noipa)) void
foo (unsigned short *x)
{
  unsigned short i, v;
  unsigned char j;
  for (i = 0; i < 256; i++)
    {
      v = i << 8;
      for (j = 0; j < 8; j++)
	if (v & 0x8000)
	  v = (v << 1) ^ 0x1021;
	else
	  v = v << 1;
      x[i] = v;
    }
}

int
main ()
{
  unsigned short a[256];

  foo (a);
  for (int i = 0; i < 256; i++)
    {
      unsigned short v = i << 8;
      for (int j = 0; j < 8; j++)
	{
	  asm volatile ("" : "+r" (v));
	  if (v & 0x8000)
	    v = (v << 1) ^ 0x1021;
	  else
	    v = v << 1;
	}
      if (a[i] != v)
	__builtin_abort ();
    }
  return 0;
}
