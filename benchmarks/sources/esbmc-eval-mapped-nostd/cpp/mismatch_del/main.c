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

extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new__(unsigned long p0) { return malloc(p0); }
void operator_delete__(void* p0, unsigned long p1) { free(p0); }
void operator_delete(void* p0, unsigned long p1) { free(p0); }
int main();

// function: main
int main() {
bb0:
  int __retval1;
  int* IntArray2;
  int* __new_result3;
  int c4 = 0;
  __retval1 = c4;
  unsigned long c5 = 20;
  void* r6 = operator_new__(c5);
    int* cast7 = (int*)r6;
    __new_result3 = cast7;
  int* t8 = __new_result3;
  IntArray2 = t8;
  int* t9 = IntArray2;
  int* c10 = ((void*)0);
  _Bool c11 = ((t9 != c10)) ? 1 : 0;
  if (c11) {
    {
      void* cast12 = (void*)t9;
      unsigned long c13 = 4;
      operator_delete(cast12, c13);
    }
  }
  int c14 = 0;
  __retval1 = c14;
  int t15 = __retval1;
  return t15;
}

