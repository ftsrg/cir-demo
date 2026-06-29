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

/* { dg-require-effective-target int32plus } */
#pragma pack(1)
struct S
{
  int f0:15;
  int f1:29;
};

int e = 1, i;
static struct S d[6];

int
main (void)
{
  if (e)
    {
      d[i].f0 = 1;
      d[i].f1 = 1;
    }
  if (d[0].f1 != 1)
    __builtin_abort ();
  return 0;
}
