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

#define ABORT() do { __builtin_printf("assert.\n");  __builtin_abort (); }while(0)
int f(int a) __attribute__((noinline));
int f(int a)
{
  int fem_key_src;
  int D2930 = a & 4294967291;
  fem_key_src = a == 6 ? 0 : 15;
  fem_key_src = D2930 != 1 ? fem_key_src : 0;
  return fem_key_src;
}

int main(void)
{
  if (f(0) != 15)
    ABORT ();
  if (f(1) != 0)
    ABORT ();
  if (f(6) != 0)
    ABORT ();
  if (f(5) != 0)
    ABORT ();
  if (f(15) != 15)
    ABORT ();
  return 0;
}
