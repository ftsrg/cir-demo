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
#include <altivec.h>

__vector unsigned char C_uchar1[2] = {
  { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 },
  { 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35 }
};
__vector unsigned char C_uchar2[2] = {
  { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 },
  { 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35 }
};

void print_vector(__vector unsigned char v) {
  unsigned *vp = (unsigned *)&v;
  printf("%08x%08x%08x%08x\n", vp[0], vp[1], vp[2], vp[3]);
}

int main(int argc, const char * argv[]) {
  C_uchar1[0] = (__vector unsigned char)
                  vec_lvsl(1, (const unsigned char *)&C_uchar1); 
  C_uchar2[0] = (__vector unsigned char)
                  vec_lvsr(1, (const unsigned char *)&C_uchar2); 
  print_vector(C_uchar1[0]);
  print_vector(C_uchar1[1]);
  print_vector(C_uchar2[0]);
  print_vector(C_uchar2[1]);
  return 0;
}
