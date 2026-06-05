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

#include <stdio.h>
#include <stdlib.h>

#define PLANE_SIZE 50
static char plane[PLANE_SIZE];

void fill() {
  /* Fill the plane with the bit mask for remainders */
  unsigned i;
  for (i = 0; i < PLANE_SIZE; ++i ) {
    plane[i] = 0;
    if (i % 17 == 0)
      plane[i] |= 128;
    if (i % 13 == 0)
      plane[i] |= 64;
    if (i % 11 == 0)
      plane[i] |= 32;
    if (i % 7 == 0)
      plane[i] |= 16;
    if (i % 5 == 0)
      plane[i] |= 8;
    if (i % 3 == 0)
      plane[i] |= 4;
    if (i % 2 == 0)
      plane[i] |= 2;
    plane[i] |= 1;
  }
}

int
main(int argc, char **argv)
{
  unsigned i;

  fill();

  for (i = 0; i < PLANE_SIZE; i++) {
    if (plane[i] & 0x10)
        printf("%d ", i);
  }
  printf("\n");

  return 0;
}
