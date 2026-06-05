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

void
fn_4parms (unsigned char a, long *b, long *c, unsigned int *d)
{
  if (*b != 1 || *c != 2 || *d != 3)
    abort ();
}

int
main ()
{
  unsigned char a = 0;
  unsigned long b = 1, c = 2;
  unsigned int d = 3;

  fn_4parms (a, &b, &c, &d);
  return 0;
}
