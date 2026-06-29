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

#include "helpers.h"

#define ARRAYSIZE 100000
double TheArray[ARRAYSIZE] __attribute__((aligned));

#define ProcessArray(VECTY) {     \
  VECTY V = (VECTY)((v4i32){0,0,0,0}); \
  VECTY *AP = (VECTY*)TheArray;   \
  IV vu;                          \
  for (j = 0; j < 1000; ++j) \
  for (i = 0; i != sizeof(TheArray)/sizeof(VECTY); ++i) \
    V *= AP[i];    \
  vu.V = (v4i32)V;        \
  printIV(&vu);    \
}


int main(int argc, char **Argv) {
  unsigned i, j;
  for (i = 0; i < ARRAYSIZE; ++i)
    TheArray[i] = i*12.345;

  ProcessArray(v16i8);
  ProcessArray(v8i16);
  ProcessArray(v4i32);
  ProcessArray(v2i64);
  
  // These break native gcc.  :(
#if 0
  ProcessArray(v4f32);
  ProcessArray(v2f64);
#endif
  return 0;
}

