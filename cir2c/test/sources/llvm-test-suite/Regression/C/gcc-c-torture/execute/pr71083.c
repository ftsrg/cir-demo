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

__extension__ typedef __UINT32_TYPE__ uint32_t;

struct lock_chain {
  uint32_t irq_context: 2,
    depth: 6,
    base: 24;
};

__attribute__((noinline, noclone))
struct lock_chain * foo (struct lock_chain *chain)
{
  int i;
  for (i = 0; i < 100; i++)
    {
      chain[i+1].base = chain[i].base;
    }
  return chain;
}

struct lock_chain1 {
  char x;
  unsigned short base;
} __attribute__((packed));

__attribute__((noinline, noclone))
struct lock_chain1 * bar (struct lock_chain1 *chain)
{
  int i;
  for (i = 0; i < 100; i++)
    {
      chain[i+1].base = chain[i].base;
    }
  return chain;
}

struct lock_chain test [101];
struct lock_chain1 test1 [101];

int
main ()
{
  foo (test);
  bar (test1);
  return 0;
}
