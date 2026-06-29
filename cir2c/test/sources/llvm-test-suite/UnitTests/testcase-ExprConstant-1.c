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

/*
 The test targets function static unsigned AreElementsOfSameArray(QualType
 ObjType,const SubobjectDesignator &A,const SubobjectDesignator &B) and bool
 VisitGenericSelectionExpr(const GenericSelectionExpr *E) in ExprConstant.cpp.
*/
#include <stdint.h>
#include <stdio.h>
#include <inttypes.h>
int main() {
  int32_t x[66];
  int32_t *p;

  x[2] = 5;
  p = &x[5];
  printf("%" PRId32, x[2]);
  if (&x[1] - &x[0] != -2) {
    return 1;
  }
  return 0;
}
