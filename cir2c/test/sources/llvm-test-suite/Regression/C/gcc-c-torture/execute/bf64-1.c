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

/* { dg-xfail-if "ABI specifies bitfields cannot exceed 32 bits" { mcore-*-* } } */
struct tmp
{
  long long int pad : 12;
  long long int field : 52;
};

struct tmp2
{
  long long int field : 52;
  long long int pad : 12;
};

struct tmp
sub (struct tmp tmp)
{
  tmp.field |= 0x0008765412345678LL;
  return tmp;
}

struct tmp2
sub2 (struct tmp2 tmp2)
{
  tmp2.field |= 0x0008765412345678LL;
  return tmp2;
}

main()
{
  struct tmp tmp = {0x123, 0xFFF000FFF000FLL};
  struct tmp2 tmp2 = {0xFFF000FFF000FLL, 0x123};

  tmp = sub (tmp);
  tmp2 = sub2 (tmp2);

  if (tmp.pad != 0x123 || tmp.field != 0xFFFFFF541FFF567FLL)
    abort ();
  if (tmp2.pad != 0x123 || tmp2.field != 0xFFFFFF541FFF567FLL)
    abort ();
  exit (0);
}
