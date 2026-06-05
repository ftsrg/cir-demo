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

#include "harness.h"

static void test()
{
  vector signed int va = {-7,11,-13,17};
  vector signed int vb = {0,0,0,128};
  vector signed int evd = {0,0,0,136};

  vector signed int vd = vec_sums (va, vb);

  check (vec_all_eq (vd, evd), "sums");
}
