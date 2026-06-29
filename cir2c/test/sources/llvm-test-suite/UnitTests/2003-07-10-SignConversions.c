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

/*
 * Test basic conversions between short signed and unsigned values
 * with no function calls and no arithmetic.
 */
#include <stdio.h>

unsigned char getUC() { return 0x80; }

signed   char getSC() { return 0x80; }

int main()
{
  signed   char  SC80 = getSC();
  unsigned char  UC80 = getUC();

  /* source is smaller than dest: both decide */
  unsigned short us  = (unsigned short) SC80;     /* sign-ext then zero-ext */
  unsigned short us2 = (unsigned short) UC80;     /* zero-ext only: NOP! */
           short  s  = (         short) SC80;     /* sign-ext */
           short  s2 = (         short) UC80;     /* zero-extend only : NOP! */
  printf("%d %d --> unsigned: us = %d, us2 = %d\n", SC80, UC80, us, us2);
  printf("%d %d -->   signed:  s = %d,  s2 = %d\n", SC80, UC80,  s,  s2);

  /* source is same size or larger than dest: dest decides */
  unsigned char  uc  = (unsigned char ) SC80;     /* zero-ext */
  unsigned char  uc2 = (unsigned char ) UC80;     /* NOP */
  signed   char  sc  = (signed   char ) SC80;     /* NOP */
  signed   char  sc2 = (signed   char ) UC80;     /* sign-extend */
  printf("%d %d --> unsigned: uc = %d, uc2 = %d\n", SC80, UC80, uc, uc2);
  printf("%d %d -->   signed: sc = %d, sc2 = %d\n", SC80, UC80, sc, sc2);
  return 0;
}
