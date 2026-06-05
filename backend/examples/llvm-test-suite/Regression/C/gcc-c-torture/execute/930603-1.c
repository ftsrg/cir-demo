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

float fx (x)
     float x;
{
  return 1.0 + 3.0 / (2.302585093 * x);
}

main ()
{
  float fx (), inita (), initc (), a, b, c;
  a = inita ();
  c = initc ();
  f ();
  b = fx (c) + a;
  f ();
  if (a != 3.0 || b < 4.3257 || b > 4.3258 || c != 4.0)
    abort ();
  exit (0);
}

float inita () { return 3.0; }
float initc () { return 4.0; }
f () {}
