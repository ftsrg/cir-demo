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

typedef unsigned long my_uintptr_t;

int check_a(my_uintptr_t tagged_ptr);

int __attribute__((noinline)) try_a(my_uintptr_t x)
{
  my_uintptr_t heap[2];
  my_uintptr_t *hp = heap;

  hp[0] = x;
  hp[1] = 0;
  return check_a((my_uintptr_t)(void*)((char*)hp + 1));
}

int __attribute__((noinline)) check_a(my_uintptr_t tagged_ptr)
{
  my_uintptr_t *hp = (my_uintptr_t*)(void*)((char*)tagged_ptr - 1);

  if (hp[0] == 42 && hp[1] == 0)
    return 0;
  return -1;
}

int main(void)
{
  if (try_a(42) < 0)
    abort ();
  return 0;
}
