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

/* { dg-options "-fgnu89-inline" } */

extern void exit (int);
extern void abort (void);

struct s {
  double d;
};

inline struct s
sub (struct s s)
{
  s.d += 1.0;
  return s;
}

int
main ()
{
  struct s t = { 2.0 };
  t = sub (t);
  if (t.d != 3.0)
    abort ();
  exit (0);
}
