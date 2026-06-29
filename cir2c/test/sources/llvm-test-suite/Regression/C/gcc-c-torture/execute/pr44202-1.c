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

extern __attribute__ ((__noreturn__)) void exit(int);
extern __attribute__ ((__noreturn__)) void abort(void);
__attribute__ ((__noinline__))
int
add512(int a, int *b)
{
  int c = a + 512;
  if (c != 0)
    *b = a;
  return c;
}

__attribute__ ((__noinline__))
int
add513(int a, int *b)
{
  int c = a + 513;
  if (c == 0)
    *b = a;
  return c;
}

int main(void)
{
  int b0 = -1;
  int b1 = -1;
  if (add512(-512, &b0) != 0 || b0 != -1 || add513(-513, &b1) != 0 || b1 != -513)
    abort ();
  exit (0);
}
