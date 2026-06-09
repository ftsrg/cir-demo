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
struct mycontainer_char_ { char element; };
struct mycontainer_int_ { int element; };

void mycontainer_int___mycontainer(struct mycontainer_int_* p0, int p1);
void mycontainer_char___mycontainer(struct mycontainer_char_* p0, char p1);
int main();

// function: _ZN11mycontainerIiEC2Ei
void mycontainer_int___mycontainer(struct mycontainer_int_* v0, int v1) {
bb2:
  struct mycontainer_int_* this3;
  int arg4;
  this3 = v0;
  arg4 = v1;
  struct mycontainer_int_* t5 = this3;
  int t6 = arg4;
  t5->element = t6;
  return;
}

// function: _ZN11mycontainerIcEC2Ec
void mycontainer_char___mycontainer(struct mycontainer_char_* v7, char v8) {
bb9:
  struct mycontainer_char_* this10;
  char arg11;
  this10 = v7;
  arg11 = v8;
  struct mycontainer_char_* t12 = this10;
  char t13 = arg11;
  t12->element = t13;
  return;
}

// function: main
int main() {
bb14:
  int __retval15;
  struct mycontainer_int_ myint16;
  struct mycontainer_char_ mychar17;
  int c18 = 0;
  __retval15 = c18;
  int c19 = 7;
  mycontainer_int___mycontainer(&myint16, c19);
  char c20 = 106;
  mycontainer_char___mycontainer(&mychar17, c20);
  int c21 = 0;
  __retval15 = c21;
  int t22 = __retval15;
  return t22;
}

