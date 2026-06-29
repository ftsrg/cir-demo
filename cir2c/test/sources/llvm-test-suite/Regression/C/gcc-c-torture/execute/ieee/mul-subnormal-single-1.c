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

/* Check that certain subnormal numbers (formerly known as denormalized
   numbers) are rounded to within 0.5 ulp.  PR other/14354.  */

/* This test requires that float and unsigned int are the same size and
   that the sign-bit of the float is at MSB of the unsigned int.  */

#if __INT_MAX__ != 2147483647L
int main () { exit (0); }
#else

union uf
{
  unsigned int u;
  float f;
};

static float
u2f (unsigned int v)
{
  union uf u;
  u.u = v;
  return u.f;
}

static unsigned int
f2u (float v)
{
  union uf u;
  u.f = v;
  return u.u;
}

int ok = 1;

static void
tstmul (unsigned int ux, unsigned int uy, unsigned int ur)
{
  float x = u2f (ux);
  float y = u2f (uy);

  if (f2u (x * y) != ur)
    /* Set a variable rather than aborting here, to simplify tracing when
       several computations are wrong.  */
    ok = 0;
}

/* We don't want to make this const and static, or else we risk inlining
   causing the test to fold as constants at compile-time.  */
struct
{
  unsigned int p1, p2, res;
} expected[] =
  {
    {0xfff, 0x3f800400, 0xfff},
    {0xf, 0x3fc88888, 0x17},
    {0xf, 0x3f844444, 0xf}
  };

int
main ()
{
  unsigned int i;

  for (i = 0; i < sizeof (expected) / sizeof (expected[0]); i++)
    {
      tstmul (expected[i].p1, expected[i].p2, expected[i].res);
      tstmul (expected[i].p2, expected[i].p1, expected[i].res);
    }

  if (!ok)
    abort ();

  exit (0);
}
#endif
