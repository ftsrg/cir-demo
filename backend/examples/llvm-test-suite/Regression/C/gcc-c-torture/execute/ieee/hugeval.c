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

#include <math.h>

static const double zero =  0.0;
static const double pone =  1.0;
static const double none = -1.0;
static const double pinf =  1.0 / 0.0;
static const double ninf = -1.0 / 0.0;

int
main ()
{
  if (pinf != pone/zero)
    abort ();

  if (ninf != none/zero)
    abort ();

#ifdef HUGE_VAL
  if (HUGE_VAL != pinf)
    abort ();

  if (-HUGE_VAL != ninf)
    abort ();
#endif

  exit (0);
}
