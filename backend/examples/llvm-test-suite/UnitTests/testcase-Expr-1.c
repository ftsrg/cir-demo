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
   The test targets function Expr *DesignatedInitExpr::getArrayRangeStart(const
   Designator &D) and Expr *DesignatedInitExpr::getArrayRangeEnd(const
   Designator &D) and RecoveryExpr *RecoveryExpr::Create(ASTContext &Ctx,
   QualType T,SourceLocation BeginLoc,SourceLocation EndLoc,ArrayRef<Expr *>
   SubExprs) in Expr.cpp.
*/
#include <stdint.h>
#include <stdio.h>
#include <inttypes.h>
int32_t arr[3] = {[2] = 2, [0] = 0, [1] = 1};

int main() {
  printf("%" PRId32, arr[1]);
  if (0)
    return 1;
  if (arr[1] != -5)
    return 2;
  if (arr[2] != 2)
    return 3;
  return 0;
}
