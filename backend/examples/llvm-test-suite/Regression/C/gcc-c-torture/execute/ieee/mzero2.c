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

/* Test IEEE +0/-0 rules */

static double pzero = +0.0;
static double nzero = -0.0;
static double pinf  = +1.0 / 0.0;
static double ninf  = -1.0 / 0.0;
static double nan   =  0.0 / 0.0;

void
expect (double value, double expected)
{
  if (expected != expected)	/* expected value is Not a number */
    {
      if (value == value)	/* actual value is a number */
	abort ();
    }

  else if (value != value)
    abort ();			/* actual value is a NaN */

  else if (memcmp ((void *)&value, (void *)&expected, sizeof (double)) != 0)
    abort ();			/* values don't match */
}

main ()
{
  expect (pzero + pzero, pzero);
  expect (pzero + nzero, pzero);
  expect (nzero + pzero, pzero);
  expect (nzero + nzero, nzero);

  expect (pzero - pzero, pzero);
  expect (pzero - nzero, pzero);
  expect (nzero - pzero, nzero);
  expect (nzero - nzero, pzero);

  expect (pzero * pzero, pzero);
  expect (pzero * nzero, nzero);
  expect (nzero * pzero, nzero);
  expect (nzero * nzero, pzero);

  expect (+1.00 * pzero, pzero);
  expect (-1.00 * pzero, nzero);
  expect (+1.00 * nzero, nzero);
  expect (-1.00 * nzero, pzero);

#ifndef _TMS320C6700
  /* C6X floating point division is implemented using reciprocals.  */
  expect (pzero / pzero, nan);
  expect (pzero / nzero, nan);
  expect (nzero / pzero, nan);
  expect (nzero / nzero, nan);

  expect (+1.00 / pzero, pinf);
  expect (-1.00 / pzero, ninf);
  expect (+1.00 / nzero, ninf);
  expect (-1.00 / nzero, pinf);
#endif

  exit (0);
}
