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

/* PR middle-end/50865 */

#define INT64_MIN (-__LONG_LONG_MAX__ - 1)

int
main ()
{
  volatile long long l1 = 1;
  volatile long long l2 = -1;
  volatile long long l3 = -1;

  if ((INT64_MIN % 1LL) != 0)
    __builtin_abort ();
  if ((INT64_MIN % l1) != 0)
    __builtin_abort ();
  if (l2 == -1)
    {
      if ((INT64_MIN % 1LL) != 0)
	__builtin_abort ();
    }
  else if ((INT64_MIN % -l2) != 0)
    __builtin_abort ();
  if ((INT64_MIN % -l3) != 0)
    __builtin_abort ();

  return 0;
}
