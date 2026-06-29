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
extern void exit (int);

struct B
{
  int x;
  int y;
};

struct A
{
  int z;
  struct B b;
};

struct A
f ()
{
  struct B b = { 0, 1 };
  struct A a = { 2, b };
  return a;
}

int
main (void)
{
  struct A a = f ();
  if (a.z != 2 || a.b.x != 0 || a.b.y != 1)
    abort ();
  exit (0);
}
