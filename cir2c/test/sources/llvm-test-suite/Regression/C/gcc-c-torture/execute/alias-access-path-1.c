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

/* Test that variable
     int val;
   may hold value of tyope "struct c" which has same size.
   This is valid in GIMPLE memory model.  */

struct a {int val;} a={1},a2;
struct b {struct a a;};
int val;
struct c {struct b b;} *cptr=(void *)&val;

int
main(void)
{
  cptr->b.a=a;
  val = 2;
  a2=cptr->b.a;
  if (a2.val == a.val)
    __builtin_abort ();
}
