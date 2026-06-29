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


unsigned char a = 6;
int b, c;

static void
fn1 ()
{
  int i = a > 1 ? 1 : a, j = 6 & (c = a && (b = a));
  int d = 0, e = a, f = ~c, g = b || a;
  unsigned char h = ~a;
  if (a)
    f = j;
  if (h && g)
    d = a;
  i = -~(f * d * h) + c && (e || i) ^ f;
  if (i != 1)
    __builtin_abort ();
}

int
main ()
{
  fn1 ();
  return 0;
}
