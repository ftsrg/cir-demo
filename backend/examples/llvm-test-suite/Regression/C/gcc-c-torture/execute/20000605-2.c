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

struct F { int i; };

void f1(struct F *x, struct F *y)
{
  int timeout = 0;
  for (; ((const struct F*)x)->i < y->i ; x->i++)
    if (++timeout > 5)
      abort ();
}

main()
{
  struct F x, y;
  x.i = 0;
  y.i = 1;
  f1 (&x, &y);
  exit (0);
}
