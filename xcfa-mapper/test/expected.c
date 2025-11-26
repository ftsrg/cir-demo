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

/* Expected C output (approximate) for sample.mlir */
int __VERIFIER_nondet_int();
void __VERIFIER_reach_error();

int main() {
  int __retval;
  int i;
  int c0 = __VERIFIER_nondet_int();
  i = c0;
  // block
  int t0 = i;
  int c1 = 0;
  int c2 = (t0 < c1) ? 1 : 0;
  if (c2) {
    // ... inner blocks ...
    int t1 = i;
    int c3 = 1;
    int c4 = (t1 > c3) ? 1 : 0;
    if (c4) {
      __VERIFIER_reach_error();
    }
  }
  return __retval;
}
