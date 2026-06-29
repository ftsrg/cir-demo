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

#include <emmintrin.h>
#include <stdio.h>

__m128 foo (__v4si a, __v4si b)
{
  return (__m128)__builtin_ia32_packssdw128(a, b);
}

int main (void)
{
  __v4si a = { 0, 0, 0, 0};
  __v4si b = { 0, 0, 0, 0};

  __v16qi c = (__v16qi)foo(a, b);

  if (__builtin_ia32_vec_ext_v4si((__v4si)c, 0) == 0)
    printf("packssdw-1 passed\n");
  else
    printf("packssdw-1 failed\n");

  return 0;
}
