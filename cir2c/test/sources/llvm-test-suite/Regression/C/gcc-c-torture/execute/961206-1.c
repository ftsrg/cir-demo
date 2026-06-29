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

int
sub1 (unsigned long long i)
{
  if (i < 0x80000000)
    return 1;
  else
    return 0;
}

int
sub2 (unsigned long long i)
{
  if (i <= 0x7FFFFFFF)
    return 1;
  else
    return 0;
}

int
sub3 (unsigned long long i)
{
  if (i >= 0x80000000)
    return 0;
  else
    return 1;
}

int
sub4 (unsigned long long i)
{
  if (i > 0x7FFFFFFF)
    return 0;
  else
    return 1;
}

main()
{
  if (sub1 (0x80000000ULL))
    abort ();

  if (sub2 (0x80000000ULL))
    abort ();

  if (sub3 (0x80000000ULL))
    abort ();

  if (sub4 (0x80000000ULL))
    abort ();

  exit (0);
}
