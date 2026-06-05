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

unsigned int b;
int c;

signed char
fn1 ()
{
  signed char d;
  for (int i = 0; i < 1; i++)
    d = -15;
  return d;
}

int
main (void)
{
  for (c = 0; c < 1; c++)
    b = 0;
  char e = fn1 ();
  signed char f = e ^ b;
  volatile int g = (int) f;

  if (g != -15)
    __builtin_abort ();

  return 0;
}
