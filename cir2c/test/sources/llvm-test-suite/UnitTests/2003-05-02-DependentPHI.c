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

#include <stdio.h>

typedef struct List {
  struct List *Next;
  int Data;
} List;

List Node0 = {0, 5};
List Node1 = {&Node0, 4};
List Node2 = {&Node1, 3};
List Node3 = {&Node2, 2};
List Node4 = {&Node3, 1};
List Node5 = {&Node4, 0};


int main() {
    List *PrevL, *CurL;
    for (PrevL = 0, CurL = &Node5; CurL; PrevL = CurL, CurL = CurL->Next) {
	printf("%d %d\n", CurL->Data, PrevL ? PrevL->Data : -1);
    }
    return 0;
}

