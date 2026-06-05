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

void abort(void);

int
movegt(int x, int y, long long a)
{
  int i;
  int ret = 0;
  for (i = 0; i < y; i++)
    {
      if (a >= (long long) 0xf000000000000000LL)
	ret = x;
      else
	ret = y;
    }
  return ret;
}

struct test
{
  long long val;
  int ret;
} tests[] = {
  { 0xf000000000000000LL, -1 },
  { 0xefffffffffffffffLL, 1 },
  { 0xf000000000000001LL, -1 },
  { 0x0000000000000000LL, -1 },
  { 0x8000000000000000LL, 1 },
};

int
main()
{
  int i;
  for (i = 0; i < sizeof (tests) / sizeof (tests[0]); i++)
    {
      if (movegt (-1, 1, tests[i].val) != tests[i].ret)
	abort ();
    }
  return 0;
}
