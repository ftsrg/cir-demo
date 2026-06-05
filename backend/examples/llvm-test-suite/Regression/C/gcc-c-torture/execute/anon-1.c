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

/* Copyright (C) 2001 Free Software Foundation, Inc.  */

/* Source: Neil Booth, 4 Nov 2001, derived from PR 2820 - field lookup in
   nested anonymous entities was broken.  */

struct
{
  int x;
  struct
  {
    int a;
    union
    {
      int b;
    };
  };
} foo;

int
main(int argc, char *argv[])
{
  foo.b = 6;
  foo.a = 5;

  if (foo.b != 6)
    abort ();

  return 0;
}
