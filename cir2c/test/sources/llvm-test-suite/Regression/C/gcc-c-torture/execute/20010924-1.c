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

/* Verify that flexible arrays can be initialized from STRING_CST
   constructors. */

/* Baselines.  */
struct {
  char a1c;
  char *a1p;
} a1 = {
  '4',
  "62"
};

struct {
  char a2c;
  char a2p[2];
} a2 = {
  'v',
  "cq"
};

/* The tests.  */
struct {
  char a3c;
  char a3p[];
} a3 = {
  'o',
  "wx"
};

struct {
  char a4c;
  char a4p[];
} a4 = {
  '9',
  { 'e', 'b' }
};

main()
{
  if (a1.a1c != '4')
    abort();
  if (a1.a1p[0] != '6')
    abort();
  if (a1.a1p[1] != '2')
    abort();
  if (a1.a1p[2] != '\0')
    abort();

  if (a2.a2c != 'v')
    abort();
  if (a2.a2p[0] != 'c')
    abort();
  if (a2.a2p[1] != 'q')
    abort();

  if (a3.a3c != 'o')
    abort();
  if (a3.a3p[0] != 'w')
    abort();
  if (a3.a3p[1] != 'x')
    abort();

  if (a4.a4c != '9')
    abort();
  if (a4.a4p[0] != 'e')
    abort();
  if (a4.a4p[1] != 'b')
    abort();

  return 0;
}
