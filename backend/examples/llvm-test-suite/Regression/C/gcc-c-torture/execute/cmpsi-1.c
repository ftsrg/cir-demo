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

f1 (unsigned int x, unsigned int y)
{
  if (x == 0)
    dummy ();
  x -= y;
  /* 0xfffffff2 < 0x80000000? */
  if (x < ~(~(unsigned int) 0 >> 1))
    abort ();
  return x;
}

f2 (unsigned long int x, unsigned long int y)
{
  if (x == 0)
    dummy ();
  x -= y;
  /* 0xfffffff2 < 0x80000000? */
  if (x < ~(~(unsigned long int) 0 >> 1))
    abort ();
  return x;
}


dummy () {}

main ()
{
  /*      0x7ffffff3			0x80000001 */
  f1 ((~(unsigned int) 0 >> 1) - 12, ~(~(unsigned int) 0 >> 1) + 1);
  f2 ((~(unsigned long int) 0 >> 1) - 12, ~(~(unsigned long int) 0 >> 1) + 1);
  exit (0);
}
