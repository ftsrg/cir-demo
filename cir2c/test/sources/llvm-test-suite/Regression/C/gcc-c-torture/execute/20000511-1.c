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

void f (int value, int expect)
{
  if (value != expect)
    abort ();
}

int main()
{
  int a = 7, b = 6, c = 4, d = 7, e = 2;

  f (a||b%c,   1);
  f (a?b%c:0,  2);
  f (a=b%c,    2);
  f (a*=b%c,   4);
  f (a/=b%c,   2);
  f (a%=b%c,   0);
  f (a+=b%c,   2);
  f (d||c&&e,  1);
  f (d?c&&e:0, 1);
  f (d=c&&e,   1);
  f (d*=c&&e,  1);
  f (d%=c&&e,  0);
  f (d+=c&&e,  1);
  f (d-=c&&e,  0);
  f (d||c||e,  1);
  f (d?c||e:0, 0);
  f (d=c||e,   1);
  f (d*=c||e,  1);
  f (d%=c||e,  0);
  f (d+=c||e,  1);
  f (d-=c||e,  0);
  exit (0);
}
