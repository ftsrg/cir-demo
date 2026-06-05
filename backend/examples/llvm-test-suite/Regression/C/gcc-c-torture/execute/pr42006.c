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

extern void abort (void);

static unsigned int
my_add(unsigned int si1, unsigned int si2)
{
  return (si1 > (50-si2)) ? si1 : (si1 + si2);
}

static unsigned int
my_shift(unsigned int left, unsigned int right)
{
  return  (right > 100) ? left : (left >> right);
}

static int func_4(unsigned int p_6)
{
  int count = 0;
  for (p_6 = 1; p_6 < 3; p_6 = my_add(p_6, 1))
    {
      if (count++ > 1)
	abort ();

      if (my_shift(p_6, p_6))
	return 0;
    }
  return 0;
}

int main(void)
{
  func_4(0);
  return 0;
}
