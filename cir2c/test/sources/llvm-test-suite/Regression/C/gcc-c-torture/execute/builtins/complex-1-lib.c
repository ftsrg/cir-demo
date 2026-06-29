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

extern int inside_main;
extern void abort (void);
#ifdef __OPTIMIZE__
#define ABORT_INSIDE_MAIN do { if (inside_main) abort (); } while (0)
#else
#define ABORT_INSIDE_MAIN do { } while (0)
#endif

static float _Complex
conjf (float _Complex z)
{
  ABORT_INSIDE_MAIN;
  return ~z;
}

static double _Complex
conj (double _Complex z)
{
  ABORT_INSIDE_MAIN;
  return ~z;
}

static long double _Complex
conjl (long double _Complex z)
{
  ABORT_INSIDE_MAIN;
  return ~z;
}

static float
crealf (float _Complex z)
{
  ABORT_INSIDE_MAIN;
  return __real__ z;
}

static double
creal (double _Complex z)
{
  ABORT_INSIDE_MAIN;
  return __real__ z;
}

static long double
creall (long double _Complex z)
{
  ABORT_INSIDE_MAIN;
  return __real__ z;
}

static float
cimagf (float _Complex z)
{
  ABORT_INSIDE_MAIN;
  return __imag__ z;
}

static double
cimag (double _Complex z)
{
  ABORT_INSIDE_MAIN;
  return __imag__ z;
}

static long double
cimagl (long double _Complex z)
{
  ABORT_INSIDE_MAIN;
  return __imag__ z;
}
