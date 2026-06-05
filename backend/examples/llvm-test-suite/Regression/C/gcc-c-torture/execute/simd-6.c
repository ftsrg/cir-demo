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

extern void abort (void);
extern int memcmp (const void *, const void *, __SIZE_TYPE__);

typedef unsigned char v8qi __attribute__((vector_size(8)));

v8qi foo(v8qi x, v8qi y)
{
  return x * y;
}

int main()
{
  v8qi a = { 1, 2, 3, 4, 5, 6, 7, 8 };
  v8qi b = { 3, 3, 3, 3, 3, 3, 3, 3 };
  v8qi c = { 3, 6, 9, 12, 15, 18, 21, 24 };
  v8qi r;

  r = foo (a, b);
  if (memcmp (&r, &c, 8) != 0)
    abort ();
  return 0;
}
