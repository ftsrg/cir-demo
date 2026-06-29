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

extern void abort(void);

int test1(char x)
{
  return x/100 == 3;
}

int test1u(unsigned char x)
{
  return x/100 == 3;
}

int test2(char x)
{
  return x/100 != 3;
}

int test2u(unsigned char x)
{
  return x/100 != 3;
}

int test3(char x)
{
  return x/100 < 3;
}

int test3u(unsigned char x)
{
  return x/100 < 3;
}

int test4(char x)
{
  return x/100 <= 3;
}

int test4u(unsigned char x)
{
  return x/100 <= 3;
}

int test5(char x)
{
  return x/100 > 3;
}

int test5u(unsigned char x)
{
  return x/100 > 3;
}

int test6(char x)
{
  return x/100 >= 3;
}

int test6u(unsigned char x)
{
  return x/100 >= 3;
}


int main()
{
  int c;

  for (c=-128; c<256; c++)
  {
    if (test1(c) != 0)
      abort ();
    if (test1u(c) != 0)
      abort ();
    if (test2(c) != 1)
      abort ();
    if (test2u(c) != 1)
      abort ();
    if (test3(c) != 1)
      abort ();
    if (test3u(c) != 1)
      abort ();
    if (test4(c) != 1)
      abort ();
    if (test4u(c) != 1)
      abort ();
    if (test5(c) != 0)
      abort ();
    if (test5u(c) != 0)
      abort ();
    if (test6(c) != 0)
      abort ();
    if (test6u(c) != 0)
      abort ();
  }
  return 0;
}
