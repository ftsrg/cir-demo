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

/* PR tree-optimization/79737 */

#if __SIZEOF_INT__ < 4
  __extension__ typedef __INT32_TYPE__ int32_t;
#else
  typedef int int32_t;
#endif

#pragma pack(1)
struct S
{
  int32_t b:18;
  int32_t c:1;
  int32_t d:24;
  int32_t e:15;
  int32_t f:14;
} i;
int g, j, k;
static struct S h;

void
foo ()
{
  for (j = 0; j < 6; j++)
    k = 0;
  for (; k < 3; k++)
    {
      struct S m = { 5, 0, -5, 9, 5 };
      h = m;
      if (g)
	i = m;
      h.e = 0;
    }
}

int
main ()
{
  foo ();
  if (h.e != 0)
    __builtin_abort ();
  return 0;
}
