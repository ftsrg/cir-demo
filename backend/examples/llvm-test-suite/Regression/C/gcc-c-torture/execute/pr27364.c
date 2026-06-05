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

int f(unsigned number_of_digits_to_use)
{
  if (number_of_digits_to_use >1294)
    return 0;
  return (number_of_digits_to_use * 3321928 / 1000000 + 1) /16;
}

int main(void)
{
  if (f(11) != 2)
    __builtin_abort ();
  exit (0);
}
