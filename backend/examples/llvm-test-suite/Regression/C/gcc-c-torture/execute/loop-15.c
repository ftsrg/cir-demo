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

/* Bombed with a segfault on powerpc-linux.  doloop.c generated wrong
   loop count.  */
void
foo (unsigned long *start, unsigned long *end)
{
  while (end > start) 
  {
    *end = *(end - 1);
    --end;
  }
}

int
main (void)
{
  unsigned long a[5];
  int start, end, k;

  for (start = 0; start < 5; start++)
    for (end = 0; end < 5; end++)
      {
	for (k = 0; k < 5; k++)
	  a[k] = k;

	foo (a + start, a + end);

	for (k = 0; k <= start; k++)
	  if (a[k] != k)
	    abort ();

	for (k = start + 1; k <= end; k++)
	  if (a[k] != k - 1)
	    abort ();

	for (k = end + 1; k < 5; k++)
	  if (a[k] != k)
	    abort ();
      }

  return 0;
}
