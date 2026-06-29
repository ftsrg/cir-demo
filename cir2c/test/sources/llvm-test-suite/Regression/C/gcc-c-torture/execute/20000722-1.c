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

struct s { char *p; int t; };

extern void bar (void);
extern void foo (struct s *);

int main(void)
{
  bar ();
  bar ();
  exit (0);
}

void
bar (void)
{
  foo (& (struct s) { "hi", 1 });
}

void foo (struct s *p)
{
  if (p->t != 1)
    abort();
  p->t = 2;
}
