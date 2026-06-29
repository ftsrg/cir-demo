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

/*
 * This tests that longjmp can jump from a function far down in the
 * calling chain and past other, non-accepting setjmps.
 */
#include <setjmp.h>
#include <stdio.h>

void quux(jmp_buf buf)
{
  printf("Inside quux\n");
  printf("Longjmping from quux: 927\n");
  longjmp(buf, 927);
}

void qux(jmp_buf buf)
{
  jmp_buf local_buf;

  printf("Inside qux\n");

  if (!setjmp(local_buf))
    quux(buf);
  else
    printf("Error: Shouldn't be here in qux\n");
}

void baz(jmp_buf buf)
{
  jmp_buf local_buf;

  printf("Inside baz\n");

  if (!setjmp(local_buf))
    qux(buf);
  else
    printf("Error: Shouldn't be here in baz\n");
}

void bar(jmp_buf buf)
{
  printf("Inside bar\n");
  baz(buf);
}

void foo()
{
  jmp_buf buf;

  printf("Inside foo\n");

  if (!setjmp(buf))
    bar(buf);
  else
    printf("Returning from longjmp into foo\n");
}

int main()
{
  foo();
  return 0;
}
