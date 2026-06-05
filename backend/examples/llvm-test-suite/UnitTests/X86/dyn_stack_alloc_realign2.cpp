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

#include <stdio.h>
#include <stdlib.h>

int checkInt(int *I, int Align) {
  *I = 20;
  if ((((size_t)I) & (Align - 1)) != 0) {
    printf("\nUnalign address (%d): %p!\n", Align, I);
    abort();
  }
  return *I;
}

#ifndef ALIGNMENT
#define ALIGNMENT 64
#endif

typedef int aligned __attribute__((aligned(ALIGNMENT)));

void bar(char *p, int size) { __builtin_strncpy(p, "good", size); }

class Base {};

struct A : virtual public Base {
  A() {}
};

struct B {};

__attribute__((noinline))
void foo(int size) {
  aligned Var;
  char *Ptr = (char *)__builtin_alloca(size + 1);
  aligned I;

  // clobber 32-bit base pointer.
  asm volatile("nop" ::"S"(405) :);
  // clobber 64-bit base pointer.
  asm volatile("nop" ::"b"(405) :);
  bar(Ptr, size);
  if (__builtin_strncmp(Ptr, "good", size) != 0) {
    Ptr[size] = '\0';
    printf("Failed: %s != good\n", Ptr);
    abort();
  }

  if (checkInt(&I, __alignof__(I)) != I)
    abort();

  // access argument and local variable.
  asm volatile("movl %0, %1" ::"r"(size), "m"(Var) :);
}

int main() {
  try {
    foo(5);
  } catch (A &a) {
  }
  return 0;
}
