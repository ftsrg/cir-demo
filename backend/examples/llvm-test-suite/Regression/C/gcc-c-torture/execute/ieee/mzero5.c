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

/* Test gcse handling of IEEE 0/-0 rules.  */
static double zero = 0.0;

int
negzero_check (double d)
{
  if (d == 0)
    return !!memcmp ((void *)&zero, (void *)&d, sizeof (double));
  return 0;
}

int
sub (double d, double e)
{
  if (d == 0.0 && e == 0.0
      && negzero_check (d) == 0 && negzero_check (e) == 0)
    return 1;
  else
    return 0;
}

int
main (void)
{
  double minus_zero = -0.0;
  if (sub (minus_zero, 0))
    abort ();
  return 0;
}
