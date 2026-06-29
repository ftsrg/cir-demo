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

extern void *memset (void *, int, __SIZE_TYPE__);
extern void abort (void);

struct reg_stat {
  void *last_death;
  void *last_set;
  void *last_set_value;
  int   last_set_label;
  char  last_set_sign_bit_copies;
  int   last_set_mode : 8;
  char  last_set_invalid;
  char sign_bit_copies;
  long nonzero_bits;
};

static struct reg_stat *reg_stat;

void __attribute__((noinline))
init_reg_last (void)
{
  memset (reg_stat, 0, __builtin_offsetof (struct reg_stat, sign_bit_copies));
}

int main (void)
{
  struct reg_stat r;

  reg_stat = &r;
  r.nonzero_bits = -1;
  init_reg_last ();
  if (r.nonzero_bits != -1)
    abort ();
  return 0;
}
