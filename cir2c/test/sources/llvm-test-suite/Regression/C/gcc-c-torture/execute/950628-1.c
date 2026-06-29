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

typedef struct
{
  char hours, day, month;
  short year;
} T;

T g (void)
{
  T now;

  now.hours = 1;
  now.day = 2;
  now.month = 3;
  now.year = 4;
  return now;
}

T f (void)
{
  T virk;

  virk = g ();
  return virk;
}

main ()
{
  if (f ().hours != 1 || f ().day != 2 || f ().month != 3 || f ().year != 4)
    abort ();
  exit (0);
}
