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

int __const__ZN1DILi1EE1fEv_d[2];
int __const__ZN1CILi0EE1fEv_d[2];
int __const__ZN1BILi6EE1fEv_d[2];
int __const__ZN1A1fEv_d[2];
int __const__Z1fv_d[2];
char _str[2] = "0";
char _str_1[112] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/gcc-template-tests/init8/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
int f();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int A__f();
int B_6___f();
int C_0___f();
int D_1___f();
int main();

// function: _Z1fv
int f() {
bb0:
  int __retval1;
  int c2;
  int d3[2];
  int c4 = 2;
  c2 = c4;
  // array copy
  __builtin_memcpy(d3, __const__Z1fv_d, (unsigned long)2 * sizeof(__const__Z1fv_d[0]));
  long c5 = 0;
  int t6 = d3[c5];
  unsigned long cast7 = (unsigned long)t6;
  unsigned long c8 = 8;
  unsigned long b9 = cast7 + c8;
  int cast10 = (int)b9;
  __retval1 = cast10;
  int t11 = __retval1;
  return t11;
}

// function: _ZN1A1fEv
int A__f() {
bb12:
  int __retval13;
  int c14;
  int d15[2];
  int c16 = 2;
  c14 = c16;
  // array copy
  __builtin_memcpy(d15, __const__ZN1A1fEv_d, (unsigned long)2 * sizeof(__const__ZN1A1fEv_d[0]));
  long c17 = 0;
  int t18 = d15[c17];
  unsigned long cast19 = (unsigned long)t18;
  unsigned long c20 = 8;
  unsigned long b21 = cast19 + c20;
  int cast22 = (int)b21;
  __retval13 = cast22;
  int t23 = __retval13;
  return t23;
}

// function: _ZN1BILi6EE1fEv
int B_6___f() {
bb24:
  int __retval25;
  int c26;
  int d27[2];
  int c28 = 2;
  c26 = c28;
  // array copy
  __builtin_memcpy(d27, __const__ZN1BILi6EE1fEv_d, (unsigned long)2 * sizeof(__const__ZN1BILi6EE1fEv_d[0]));
  long c29 = 0;
  int t30 = d27[c29];
  unsigned long cast31 = (unsigned long)t30;
  unsigned long c32 = 8;
  unsigned long b33 = cast31 + c32;
  int cast34 = (int)b33;
  __retval25 = cast34;
  int t35 = __retval25;
  return t35;
}

// function: _ZN1CILi0EE1fEv
int C_0___f() {
bb36:
  int __retval37;
  int c38;
  int d39[2];
  int c40 = 2;
  c38 = c40;
  // array copy
  __builtin_memcpy(d39, __const__ZN1CILi0EE1fEv_d, (unsigned long)2 * sizeof(__const__ZN1CILi0EE1fEv_d[0]));
  long c41 = 0;
  int t42 = d39[c41];
  unsigned long cast43 = (unsigned long)t42;
  unsigned long c44 = 8;
  unsigned long b45 = cast43 + c44;
  int cast46 = (int)b45;
  __retval37 = cast46;
  int t47 = __retval37;
  return t47;
}

// function: _ZN1DILi1EE1fEv
int D_1___f() {
bb48:
  int __retval49;
  int e50;
  int c51;
  int d52[2];
  int c53 = 2;
  e50 = c53;
  int c54 = 2;
  c51 = c54;
  // array copy
  __builtin_memcpy(d52, __const__ZN1DILi1EE1fEv_d, (unsigned long)2 * sizeof(__const__ZN1DILi1EE1fEv_d[0]));
  long c55 = 0;
  int t56 = d52[c55];
  unsigned long cast57 = (unsigned long)t56;
  unsigned long c58 = 8;
  unsigned long b59 = cast57 + c58;
  int cast60 = (int)b59;
  __retval49 = cast60;
  int t61 = __retval49;
  return t61;
}

// function: main
int main() {
bb62:
  int __retval63;
  int v64;
  int c65 = 0;
  __retval63 = c65;
  int r66 = f();
  v64 = r66;
    int t67 = v64;
    unsigned long cast68 = (unsigned long)t67;
    unsigned long c69 = 2;
    unsigned long c70 = 4;
    unsigned long b71 = c69 * c70;
    _Bool c72 = ((cast68 != b71)) ? 1 : 0;
    if (c72) {
      char* cast73 = (char*)&(_str);
      char* c74 = _str_1;
      unsigned int c75 = 66;
      char* cast76 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast73, c74, c75, cast76);
    }
    int t77 = v64;
    int r78 = A__f();
    _Bool c79 = ((t77 != r78)) ? 1 : 0;
    if (c79) {
      char* cast80 = (char*)&(_str);
      char* c81 = _str_1;
      unsigned int c82 = 68;
      char* cast83 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast80, c81, c82, cast83);
    }
    int t84 = v64;
    int r85 = B_6___f();
    _Bool c86 = ((t84 != r85)) ? 1 : 0;
    if (c86) {
      char* cast87 = (char*)&(_str);
      char* c88 = _str_1;
      unsigned int c89 = 70;
      char* cast90 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast87, c88, c89, cast90);
    }
    int t91 = v64;
    int r92 = C_0___f();
    _Bool c93 = ((t91 != r92)) ? 1 : 0;
    if (c93) {
      char* cast94 = (char*)&(_str);
      char* c95 = _str_1;
      unsigned int c96 = 72;
      char* cast97 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast94, c95, c96, cast97);
    }
    int t98 = v64;
    int r99 = D_1___f();
    _Bool c100 = ((t98 != r99)) ? 1 : 0;
    if (c100) {
      char* cast101 = (char*)&(_str);
      char* c102 = _str_1;
      unsigned int c103 = 74;
      char* cast104 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast101, c102, c103, cast104);
    }
  int t105 = __retval63;
  return t105;
}

