/*
 * Copyright 2025 Budapest University of Technology and Economics
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

/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>
// PR c++/25855
// { dg-do run }

template <typename T>  int qCompare(const T *t1, const T *t2) { return 1; }
template <typename T>  int qCompare(T *t1, T *t2) { return 2; }
template <typename T1, typename T2> int qCompare(const T1 *t1, const T2 *t2) {
  return 3; }
template<> int qCompare(const char *t1, const char *t2) { return 4; }
int main()
{
  if (qCompare("a", "b") != 4)
    assert(0 == (1));
}
