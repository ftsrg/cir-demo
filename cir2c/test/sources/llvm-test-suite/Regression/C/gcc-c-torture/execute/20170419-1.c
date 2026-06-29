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

/* PR tree-optimization/80426 */
/* Testcase by <ishiura-compiler@ml.kwansei.ac.jp> */

#define INT_MAX 0x7fffffff
#define INT_MIN (-INT_MAX-1)

int x;

int main (void)
{
  volatile int a = 0;
  volatile int b = -INT_MAX;
  int j;

  for(j = 0; j < 18; j += 1) {
    x = ( (a == 0) != (b - (int)(INT_MIN) ) );
  }

  if (x != 0)
    __builtin_abort ();

  return 0;
}
