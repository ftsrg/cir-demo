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

/* { dg-xfail-if "can cause stack underflow" { nios2-*-* } } */
/* { dg-require-effective-target untyped_assembly } */
#define INTEGER_ARG  5

extern void abort(void);

static void foo(int arg)
{
  if (arg != INTEGER_ARG)
    abort();
}

static void bar(int arg)
{
  foo(arg);
  __builtin_apply(foo, __builtin_apply_args(), 16);
}

int main(void)
{
  bar(INTEGER_ARG);

  return 0;
}
