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

/* PR rtl-optimization/45912 */

extern void abort (void);

static void* __attribute__((noinline,noclone))
get_addr_base_and_unit_offset (void *base, long long *i)
{
  *i = 0;
  return base;
}

static void* __attribute__((noinline,noclone))
build_int_cst (void *base, long long offset)
{
  if (offset != 4)
    abort ();

  return base;
}

static void* __attribute__((noinline,noclone))
build_ref_for_offset (void *base, long long offset)
{
  long long base_offset;
  base = get_addr_base_and_unit_offset (base, &base_offset);
  return build_int_cst (base, base_offset + offset / 8);
}

int
main (void)
{
  void *ret = build_ref_for_offset ((void *)0, 32);
  if (ret != (void *)0)
    abort ();
  return 0;
}
