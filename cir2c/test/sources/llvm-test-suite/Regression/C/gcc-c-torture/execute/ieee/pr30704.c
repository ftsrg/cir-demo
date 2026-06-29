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

/* PR middle-end/30704 */

typedef __SIZE_TYPE__ size_t;
extern void abort (void);
extern int memcmp (const void *, const void *, size_t);
extern void *memcpy (void *, const void *, size_t);

long long
f1 (void)
{
  long long t;
  double d = 0x0.fffffffffffff000p-1022;
  memcpy (&t, &d, sizeof (long long));
  return t;
}

double
f2 (void)
{
  long long t = 0x000fedcba9876543LL;
  double d;
  memcpy (&d, &t, sizeof (long long));
  return d;
}

int
main ()
{
  union
  {
    long long ll;
    double d;
  } u;

  if (sizeof (long long) != sizeof (double) || __DBL_MIN_EXP__ != -1021)
    return 0;

  u.ll = f1 ();
  if (u.d != 0x0.fffffffffffff000p-1022)
    abort ();

  u.d = f2 ();
  if (u.ll != 0x000fedcba9876543LL)
    abort ();

  double b = 234.0;
  long long c;
  double d = b;
  memcpy (&c, &b, sizeof (double));
  long long e = c;
  if (memcmp (&e, &d, sizeof (double)) != 0)
    abort ();

  return 0;
}
