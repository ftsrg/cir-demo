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

/* Verify that structure return doesn't invoke memcpy on
   overlapping objects.  */

extern void abort (void);

struct S {
  char stuff[1024];
};

union U {
  struct {
    int space;
    struct S s;
  } a;
  struct {
    struct S s;
    int space;
  } b;
};

struct S f(struct S *);
void g(union U *);

void main_test(void)
{
  union U u;
  u.b.s = f(&u.a.s);
  u.a.s = f(&u.b.s);
  g(&u);
}
