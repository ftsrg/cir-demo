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

#if (__SIZEOF_INT__ == 2)
#define TESTVALUE 0x1234
#else
#define TESTVALUE 0x12345678
#endif
static void
foo (unsigned int x, void *p)
{
  __builtin_memcpy (p, &x, sizeof x);
}

void
bar (int type, void *number)
{
  switch (type)
    {
    case 1:
      foo (TESTVALUE, number);
      break;
    case 7:
      foo (0, number);
      break;
    case 8:
      foo (0, number);
      break;
    case 9:
      foo (0, number);
      break;
    }
}

int
main (void)
{
  unsigned int x;
  bar (1, &x);
  if (x != TESTVALUE)
    __builtin_abort ();
  return 0;
}
