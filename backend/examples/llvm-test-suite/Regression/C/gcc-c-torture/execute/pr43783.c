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

/* { dg-skip-if "small alignment" { pdp11-*-* } } */

typedef __attribute__((aligned(16)))
struct {
  unsigned long long w[3];
} UINT192;

UINT192 bid_Kx192[32];

extern void abort (void);

int main()
{
  int i = 0;
  unsigned long x = 0;
  for (i = 0; i < 32; ++i)
    bid_Kx192[i].w[1] = i == 1;
  for (i = 0; i < 32; ++i)
    x += bid_Kx192[1].w[1];
  if (x != 32)
    abort ();
  return 0;
}
