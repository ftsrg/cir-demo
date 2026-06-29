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

typedef unsigned long long uint64_t;
void f(uint64_t *a, uint64_t aa) __attribute__((noinline));
void f(uint64_t *a, uint64_t aa)
{
  uint64_t new_value = aa;
  uint64_t old_value = *a;
  int bit_size = 32;
    uint64_t mask = (uint64_t)(unsigned)(-1);
    uint64_t tmp = old_value & mask;
    new_value &= mask;
    /* On overflow we need to add 1 in the upper bits */
    if (tmp > new_value)
        new_value += 1ull<<bit_size;
    /* Add in the upper bits from the old value */
    new_value += old_value & ~mask;
    *a = new_value;
}
int main(void)
{
  uint64_t value, new_value, old_value;
  value = 0x100000001;
  old_value = value;
  new_value = (value+1)&(uint64_t)(unsigned)(-1);
  f(&value, new_value);
  if (value != old_value+1)
    __builtin_abort ();
  return 0;
}
