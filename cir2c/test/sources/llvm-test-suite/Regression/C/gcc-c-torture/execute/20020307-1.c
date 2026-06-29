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

#define MASK(N) ((1UL << (N)) - 1)
#define BITS(N) ((1UL << ((N) - 1)) + 2)

#define FUNC(N) void f##N(long j) { if ((j & MASK(N)) >= BITS(N)) abort();}

FUNC(3)
FUNC(4)
FUNC(5)
FUNC(6)
FUNC(7)
FUNC(8)
FUNC(9)
FUNC(10)
FUNC(11)
FUNC(12)
FUNC(13)
FUNC(14)
FUNC(15)
FUNC(16)
FUNC(17)
FUNC(18)
FUNC(19)
FUNC(20)
FUNC(21)
FUNC(22)
FUNC(23)
FUNC(24)
FUNC(25)
FUNC(26)
FUNC(27)
FUNC(28)
FUNC(29)
FUNC(30)
FUNC(31)

int main ()
{
  f3(0);
  f4(0);
  f5(0);
  f6(0);
  f7(0);
  f8(0);
  f9(0);
  f10(0);
  f11(0);
  f12(0);
  f13(0);
  f14(0);
  f15(0);
  f16(0);
  f17(0);
  f18(0);
  f19(0);
  f20(0);
  f21(0);
  f22(0);
  f23(0);
  f24(0);
  f25(0);
  f26(0);
  f27(0);
  f28(0);
  f29(0);
  f30(0);
  f31(0);

  exit(0);
}
