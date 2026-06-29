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

/* PR tree-optimization/70602 */
/* { dg-require-effective-target int32plus } */

struct __attribute__((packed)) S
{
  int s : 1;
  int t : 20;
};

int a, b, c;

int
main ()
{
  for (; a < 1; a++)
    {
      struct S e[] = { {0, 9}, {0, 9}, {0, 9}, {0, 0}, {0, 9}, {0, 9}, {0, 9},
		       {0, 0}, {0, 9}, {0, 9}, {0, 9}, {0, 0}, {0, 9}, {0, 9},
		       {0, 9}, {0, 0}, {0, 9}, {0, 9}, {0, 9}, {0, 0}, {0, 9} };
      b = b || e[0].s;
      c = e[0].t;
    }
  return 0;
}
