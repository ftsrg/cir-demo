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

typedef unsigned long long ULL;
ULL back;
ULL hpart, lpart;
ULL
build(long h, long l)
{
  hpart = h;
  hpart <<= 32;
  lpart = l;
  lpart &= 0xFFFFFFFFLL;
  back = hpart | lpart;
  return back;
}

main()
{
  if (build(0, 1) != 0x0000000000000001LL)
    abort();
  if (build(0, 0) != 0x0000000000000000LL)
    abort();
  if (build(0, 0xFFFFFFFF) != 0x00000000FFFFFFFFLL)
    abort();
  if (build(0, 0xFFFFFFFE) != 0x00000000FFFFFFFELL)
    abort();
  if (build(1, 1) != 0x0000000100000001LL)
    abort();
  if (build(1, 0) != 0x0000000100000000LL)
    abort();
  if (build(1, 0xFFFFFFFF) != 0x00000001FFFFFFFFLL)
    abort();
  if (build(1, 0xFFFFFFFE) != 0x00000001FFFFFFFELL)
    abort();
  if (build(0xFFFFFFFF, 1) != 0xFFFFFFFF00000001LL)
    abort();
  if (build(0xFFFFFFFF, 0) != 0xFFFFFFFF00000000LL)
    abort();
  if (build(0xFFFFFFFF, 0xFFFFFFFF) != 0xFFFFFFFFFFFFFFFFLL)
    abort();
  if (build(0xFFFFFFFF, 0xFFFFFFFE) != 0xFFFFFFFFFFFFFFFELL)
    abort();
  exit(0);
}
