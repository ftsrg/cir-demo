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

long long acc;

addhi (short a)
{
  acc += (long long) a << 32;
}

subhi (short a)
{
  acc -= (long long) a << 32;
}

main ()
{
  acc = 0xffff00000000ll;
  addhi (1);
  if (acc != 0x1000000000000ll)
    abort ();
  subhi (1);
  if (acc != 0xffff00000000ll)
    abort ();
  exit (0);
}
