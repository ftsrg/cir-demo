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

p1 (c, f1, s, d1, i, f2, l, d2)
char c; float f1; short s; double d1; int i; float f2; long l; double d2;
{
  printf("%c %f %d %f %d %f %d %f\n", c, f1, s, d1,i, f2, l, d2);
}

void p2 (char c, float f1, short s, double d1, int i, float f2, long l, double d2)
{
  printf("%c %f %d %f %d %f %d %f\n", c, f1, s, d1,i, f2, l, d2);
}

int main(int argc, const char *argv[]) {
  p1 ('a', 4.0, 1, 5.0, 2, 4.0, 3, 5.0);
  p2 ('a', 4.0, 1, 5.0, 2, 4.0, 3, 5.0);
  return 0;
}

