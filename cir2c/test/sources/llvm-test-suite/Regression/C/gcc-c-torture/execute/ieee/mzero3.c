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

/* Copyright (C) 2002  Free Software Foundation.
   by Hans-Peter Nilsson  <hp@bitrange.com>, derived from mzero2.c

   In the MMIX port, negdf2 was bogusly expanding -x into 0 - x.  */

double nzerod = -0.0;
float nzerof = -0.0;
double zerod = 0.0;
float zerof = 0.0;

void expectd (double, double);
void expectf (float, float);
double negd (double);
float negf (float);

main ()
{
  expectd (negd (zerod), nzerod);
  expectf (negf (zerof), nzerof);
  expectd (negd (nzerod), zerod);
  expectf (negf (nzerof), zerof);
  exit (0);
}

void
expectd (double value, double expected)
{
  if (value != expected
      || memcmp ((void *)&value, (void *) &expected, sizeof (double)) != 0)
    abort ();
}

void
expectf (float value, float expected)
{
  if (value != expected
      || memcmp ((void *)&value, (void *) &expected, sizeof (float)) != 0)
    abort ();
}

double
negd (double v)
{
  return -v;
}

float
negf (float v)
{
  return -v;
}
