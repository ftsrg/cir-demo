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

// Struct definitions (auto-parsed)
struct SalesPerson { double __field0[12]; };

extern void SalesPerson__SalesPerson(struct SalesPerson* p0);
extern void SalesPerson__getSalesFromUser(struct SalesPerson* p0);
extern void SalesPerson__printAnnualSales(struct SalesPerson* p0);
int main();

// function: main
int main() {
bb0:
  int __retval1;
  struct SalesPerson s2;
  int c3 = 0;
  __retval1 = c3;
  SalesPerson__SalesPerson(&s2);
  SalesPerson__getSalesFromUser(&s2);
  SalesPerson__printAnnualSales(&s2);
  int c4 = 0;
  __retval1 = c4;
  int t5 = __retval1;
  return t5;
}

