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

/* PR target/7559
   This testcase was miscompiled on x86-64, because classify_argument
   wrongly computed the offset of nested structure fields.  */

extern void abort (void);

struct A
{
  long x;
};

struct R
{
  struct A a, b;
};

struct R R = { 100, 200 };

void f (struct R r)
{
  if (r.a.x != R.a.x || r.b.x != R.b.x)
    abort ();
}

struct R g (void)
{
  return R;
}

int main (void)
{
  struct R r;
  f(R);
  r = g();
  if (r.a.x != R.a.x || r.b.x != R.b.x)
    abort ();
  return 0;
}
