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

#define S (sizeof (int))

unsigned int c[624];
void __attribute__((noinline))
bar (void)
{
  unsigned int i;
  /* Obfuscated c[i] = c[i-1] * 2.  */
  for (i = 1; i < 624; ++i)
    *(unsigned int *)((void *)c + (__SIZE_TYPE__)i * S)
	= 2 * *(unsigned int *)((void *)c + ((__SIZE_TYPE__)i +
					     ((__SIZE_TYPE__)-S)/S) * S);
}
extern void abort (void);
int
main()
{
  unsigned int i, j;
  for (i = 0; i < 624; ++i)
    c[i] = 1;
  bar();
  j = 1;
  for (i = 0; i < 624; ++i)
    {
      if (c[i] != j)
	abort ();
      j = j * 2;
    }
  return 0;
}
