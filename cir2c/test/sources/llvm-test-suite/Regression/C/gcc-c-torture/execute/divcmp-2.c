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

int test1(int x)
{
  return x/10 == 2;
}

int test2(int x)
{
  return x/10 == 0;
}

int test3(int x)
{
  return x/10 == -2;
}

int test4(int x)
{
  return x/-10 == 2;
}

int test5(int x)
{
  return x/-10 == 0;
}

int test6(int x)
{
  return x/-10 == -2;
}


int main()
{
  if (test1(19) != 0)
    abort ();
  if (test1(20) != 1)
    abort ();
  if (test1(29) != 1)
    abort ();
  if (test1(30) != 0)
    abort ();

  if (test2(-10) != 0)
    abort ();
  if (test2(-9) != 1)
    abort ();
  if (test2(9) != 1)
    abort ();
  if (test2(10) != 0)
    abort ();

  if (test3(-30) != 0)
    abort ();
  if (test3(-29) != 1)
    abort ();
  if (test3(-20) != 1)
    abort ();
  if (test3(-19) != 0)
    abort ();

  if (test4(-30) != 0)
    abort ();
  if (test4(-29) != 1)
    abort ();
  if (test4(-20) != 1)
    abort ();
  if (test4(-19) != 0)
    abort ();

  if (test5(-10) != 0)
    abort ();
  if (test5(-9) != 1)
    abort ();
  if (test5(9) != 1)
    abort ();
  if (test5(10) != 0)
    abort ();

  if (test6(19) != 0)
    abort ();
  if (test6(20) != 1)
    abort ();
  if (test6(29) != 1)
    abort ();
  if (test6(30) != 0)
    abort ();

  return 0;
}
