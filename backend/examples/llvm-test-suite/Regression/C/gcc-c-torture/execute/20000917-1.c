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

/* This bug exists in gcc-2.95, egcs-1.1.2, gcc-2.7.2 and probably
   every other version as well.  */

typedef struct int3 { int a, b, c; } int3;

int3
one (void)
{
  return (int3) { 1, 1, 1 };
}

int3
zero (void)
{
  return (int3) { 0, 0, 0 };
}

int
main (void)
{
  int3 a;

  /* gcc allocates a temporary for the inner expression statement
     to store the return value of `one'.

     gcc frees the temporaries for the inner expression statement.

     gcc realloates the same temporary slot to store the return
     value of `zero'.

     gcc expands the call to zero ahead of the expansion of the
     statement expressions.  The temporary gets the value of `zero'.

     gcc expands statement expressions and the stale temporary is
     clobbered with the value of `one'.  The bad value is copied from
     the temporary into *&a.  */

  *({ ({ one (); &a; }); }) = zero ();
  if (a.a && a.b && a.c)
    abort ();
  exit (0);
}
