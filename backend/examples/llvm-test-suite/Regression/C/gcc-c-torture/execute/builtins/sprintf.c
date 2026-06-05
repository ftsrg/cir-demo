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

/* Copyright (C) 2003  Free Software Foundation.

   Test sprintf optimizations don't break anything and return the
   correct results.

   Written by Roger Sayle, June 22, 2003.  */

static char buffer[32];

extern void abort ();
typedef __SIZE_TYPE__ size_t;
extern int sprintf(char*, const char*, ...);
extern void *memset(void*, int, size_t);
extern int memcmp(const void*, const void*, size_t);

void test1()
{
  sprintf(buffer,"foo");
}

int test2()
{
  return sprintf(buffer,"foo");
}

void test3()
{
  sprintf(buffer,"%s","bar");
}

int test4()
{
  return sprintf(buffer,"%s","bar");
}

void test5(char *ptr)
{
  sprintf(buffer,"%s",ptr);
}


void
main_test (void)
{
  memset (buffer, 'A', 32);
  test1 ();
  if (memcmp(buffer, "foo", 4) || buffer[4] != 'A')
    abort ();

  memset (buffer, 'A', 32);
  if (test2 () != 3)
    abort ();
  if (memcmp(buffer, "foo", 4) || buffer[4] != 'A')
    abort ();

  memset (buffer, 'A', 32);
  test3 ();
  if (memcmp(buffer, "bar", 4) || buffer[4] != 'A')
    abort ();

  memset (buffer, 'A', 32);
  if (test4 () != 3)
    abort ();
  if (memcmp(buffer, "bar", 4) || buffer[4] != 'A')
    abort ();

  memset (buffer, 'A', 32);
  test5 ("barf");
  if (memcmp(buffer, "barf", 5) || buffer[5] != 'A')
    abort ();
}
