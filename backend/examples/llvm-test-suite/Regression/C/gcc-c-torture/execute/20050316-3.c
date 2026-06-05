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

/* { dg-options "-Wno-psabi" } */
extern void abort (void);

typedef int V2SI __attribute__ ((vector_size (8)));
typedef unsigned int V2USI __attribute__ ((vector_size (8)));
typedef short V2HI __attribute__ ((vector_size (4)));
typedef unsigned int V2UHI __attribute__ ((vector_size (4)));

V2USI
test1 (V2SI x)
{
  return (V2USI) (V2SI) (long long) x;
}

long long
test2 (V2SI x)
{
  return (long long) (V2USI) (V2SI) (long long) x;
}

int
main (void)
{
  if (sizeof (short) != 2 || sizeof (int) != 4 || sizeof (long long) != 8)
    return 0;

  union { V2SI x; int y[2]; V2USI z; long long l; } u;
  V2SI a = { -3, -3 };
  u.z = test1 (a);
  if (u.y[0] != -3 || u.y[1] != -3)
    abort ();

  u.l = test2 (a);
  if (u.y[0] != -3 || u.y[1] != -3)
    abort ();
  return 0;
}
