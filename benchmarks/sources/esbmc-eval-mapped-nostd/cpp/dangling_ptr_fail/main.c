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
struct Foo { int value; };

char _str[13] = "Executing...";
extern int printf(char* p0, ...);
void Foo__Execute(struct Foo* p0);
void Foo__Increment(struct Foo* p0);
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
void Foo__Foo(struct Foo* p0);
void operator_delete(void* p0, unsigned long p1) { free(p0); }
int main();

// function: _ZN3Foo7ExecuteEv
void Foo__Execute(struct Foo* v0) {
bb1:
  struct Foo* this2;
  this2 = v0;
  struct Foo* t3 = this2;
  char* cast4 = (char*)&(_str);
  int r5 = printf(cast4);
  return;
}

// function: _ZN3Foo9IncrementEv
void Foo__Increment(struct Foo* v6) {
bb7:
  struct Foo* this8;
  this8 = v6;
  struct Foo* t9 = this8;
  int t10 = t9->value;
  int u11 = t10 + 1;
  t9->value = u11;
  return;
}

// function: _ZN3FooC2Ev
void Foo__Foo(struct Foo* v12) {
bb13:
  struct Foo* this14;
  this14 = v12;
  struct Foo* t15 = this14;
  int c16 = 0;
  t15->value = c16;
  return;
}

// function: main
int main() {
bb17:
  int __retval18;
  struct Foo* foo19;
  struct Foo* __new_result20;
  int c21 = 0;
  __retval18 = c21;
  unsigned long c22 = 4;
  void* r23 = operator_new(c22);
    struct Foo* cast24 = (struct Foo*)r23;
    __new_result20 = cast24;
    Foo__Foo(cast24);
  struct Foo* t25 = __new_result20;
  foo19 = t25;
  struct Foo* t26 = foo19;
  struct Foo* c27 = ((void*)0);
  _Bool c28 = ((t26 != c27)) ? 1 : 0;
  if (c28) {
    {
      void* cast29 = (void*)t26;
      unsigned long c30 = 4;
      operator_delete(cast29, c30);
    }
  }
  struct Foo* t31 = foo19;
  Foo__Increment(t31);
  struct Foo* t32 = foo19;
  Foo__Execute(t32);
  int c33 = 0;
  __retval18 = c33;
  int t34 = __retval18;
  return t34;
}

