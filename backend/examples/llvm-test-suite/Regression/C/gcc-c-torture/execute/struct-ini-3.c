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

struct
{
  unsigned int f1:1, f2:1, f3:3, f4:3, f5:2, f6:1, f7:1;
} result = {1, 1, 7, 7, 3, 1, 1};

main ()
{
  if ((result.f3 & ~7) != 0 || (result.f4 & ~7) != 0)
    abort ();
  exit (0);
}
