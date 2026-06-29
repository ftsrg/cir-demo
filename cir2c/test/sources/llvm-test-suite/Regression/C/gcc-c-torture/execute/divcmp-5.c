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

/* PR middle-end/26561 */

extern void abort(void);

int always_one_1 (int a)
{
  if (a/100 >= -999999999)
    return 1;
  else
    return 0;
}

int always_one_2 (int a)
{
  if (a/100 < -999999999)
    return 0;
  else
    return 1;
}

int main(void)
{
  if (always_one_1 (0) != 1)
    abort ();

  if (always_one_2 (0) != 1)
    abort ();

  return 0;
}
