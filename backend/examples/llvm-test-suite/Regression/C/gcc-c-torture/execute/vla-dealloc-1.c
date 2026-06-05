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

/* VLAs should be deallocated on a jump to before their definition,
   including a jump to a label in an inner scope.  PR 19771.  */
/* { dg-require-effective-target alloca } */

#if (__SIZEOF_INT__ <= 2)
#define LIMIT 10000
#else
#define LIMIT 1000000
#endif

void *volatile p;

int
main (void)
{
  int n = 0;
  if (0)
    {
    lab:;
    }
  int x[n % 1000 + 1];
  x[0] = 1;
  x[n % 1000] = 2;
  p = x;
  n++;
  if (n < LIMIT)
    goto lab;
  return 0;
}
