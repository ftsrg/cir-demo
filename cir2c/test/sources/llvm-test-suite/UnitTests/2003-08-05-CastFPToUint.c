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
 * This test checks conversions from floating point values to small
 * unsigned integer values.  Conversions to uint32_t need special handling
 * on Sparc V9, which only has FP-to-int32_t and FP-to-int64_t instructions.
 */

#include <stdlib.h>
#include <stdio.h>

static double getDC(), getDS(), getDI();

int
main(int argc, char** argv) {
  double DC = getDC();
  double DS = getDS();
  double DI = getDI();
  unsigned char  uc = (unsigned char ) DC;
  unsigned short us = (unsigned short) DS;
  unsigned int   ui = (unsigned int  ) DI;
  printf("DC = %lf, DS = %lf, DI = %lf\n", DC, DS, DI);
  printf("uc = %u, us = %u, ui = %u\n", uc, us, ui);
  return 0;
}

static double getDC() { return (double) ((1L  <<  8) - 16L ); }
static double getDS() { return (double) ((1LL << 16) - 16L ); }
static double getDI() { return (double) ((1LL << 32) - 16LL); }
