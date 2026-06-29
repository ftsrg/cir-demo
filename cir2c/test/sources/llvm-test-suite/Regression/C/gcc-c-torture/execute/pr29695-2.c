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

/* PR middle-end/29695 */

extern void abort (void);

int a = 128;
unsigned char b = 128;
long long c = 0x80000000LL;
unsigned int d = 0x80000000;

int
f1 (void)
{
  return (a & 0x80) ? 0x80 : 0;
}

int
f2 (void)
{
  return (b & 0x80) ? 0x80 : 0;
}

int
f3 (void)
{
  return (b & 0x80) ? 0x380 : 0;
}

int
f4 (void)
{
  return (b & 0x80) ? -128 : 0;
}

long long
f5 (void)
{
  return (c & 0x80000000) ? 0x80000000LL : 0LL;
}

long long
f6 (void)
{
  return (d & 0x80000000) ? 0x80000000LL : 0LL;
}

long long
f7 (void)
{
  return (d & 0x80000000) ? 0x380000000LL : 0LL;
}

long long
f8 (void)
{
  return (d & 0x80000000) ? -2147483648LL : 0LL;
}

int
main (void)
{
  if ((char) 128 != -128 || (int) 0x80000000 != -2147483648)
    return 0;
  if (f1 () != 128)
    abort ();
  if (f2 () != 128)
    abort ();
  if (f3 () != 896)
    abort ();
  if (f4 () != -128)
    abort ();
  if (f5 () != 0x80000000LL)
    abort ();
  if (f6 () != 0x80000000LL)
    abort ();
  if (f7 () != 0x380000000LL)
    abort ();
  if (f8 () != -2147483648LL)
    abort ();
  return 0;
}
