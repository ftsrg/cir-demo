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

long double
f (d, i)
     long double d;
     int i;
{
  long double e;

  d = -d;
  e = d;
  if (i == 1)
    d *= 2;
  d -= e * d;
  d -= e * d;
  d -= e * d;
  d -= e * d;
  d -= e * d;
  return d;
}

main ()
{
  if (! (int) (f (2.0L, 1)))
    abort ();
  exit (0);
}
