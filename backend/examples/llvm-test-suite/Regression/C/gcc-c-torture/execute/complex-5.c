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

float __complex__
p (float __complex__  a, float __complex__  b)
{
  return a + b;
}

float __complex__  x = 1.0 + 14.0 * (1.0fi);
float __complex__  y = 7.0 + 5.0 * (1.0fi);
float __complex__  w = 8.0 + 19.0 * (1.0fi);
float __complex__  z;

main ()
{

  z = p (x,y);
  y = p (x, 1.0f / z);
  if (z != w)
    abort ();
  exit (0);
}
