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

void test(long double val, int *eval)
{
  long double tmp = 1.0l;
  int i = 0;

  if (val < 0.0l)
    val = -val;

  if (val >= tmp)
    while (tmp < val)
      {
	tmp *= 2.0l;
	if (i++ >= 10)
	  abort ();
      }
  else if (val != 0.0l)
    while (val < tmp)
      {
	tmp /= 2.0l;
	if (i++ >= 10)
	  abort ();
      }

  *eval = i;
}

int main(void)
{
  int eval;

  test(3.0, &eval);
  test(3.5, &eval);
  test(4.0, &eval);
  test(5.0, &eval);
  exit (0);
}
