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

extern void abort(void);
// Struct definitions (auto-parsed)
struct std__basic_string_view_char__std__char_traits_char__ { unsigned long _M_len; char* _M_str; };

char _str[14] = "Hello, World!";
void std__basic_string_view_char__std__char_traits_char_____basic_string_view(struct std__basic_string_view_char__std__char_traits_char__* p0, char* p1);
int main();
_Bool std____is_constant_evaluated();
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);

// function: _ZNSt17basic_string_viewIcSt11char_traitsIcEEC2EPKc
void std__basic_string_view_char__std__char_traits_char_____basic_string_view(struct std__basic_string_view_char__std__char_traits_char__* v0, char* v1) {
bb2:
  struct std__basic_string_view_char__std__char_traits_char__* this3;
  char* __str4;
  this3 = v0;
  __str4 = v1;
  struct std__basic_string_view_char__std__char_traits_char__* t5 = this3;
  char* t6 = __str4;
  unsigned long r7 = std__char_traits_char___length(t6);
  t5->_M_len = r7;
  char* t8 = __str4;
  t5->_M_str = t8;
  return;
}

// function: main
int main() {
bb9:
  int __retval10;
  struct std__basic_string_view_char__std__char_traits_char__ message11;
  int c12 = 0;
  __retval10 = c12;
  char* cast13 = (char*)&(_str);
  std__basic_string_view_char__std__char_traits_char_____basic_string_view(&message11, cast13);
  int c14 = 0;
  __retval10 = c14;
  int t15 = __retval10;
  return t15;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb16:
  _Bool __retval17;
    _Bool c18 = 0;
    __retval17 = c18;
    _Bool t19 = __retval17;
    return t19;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v20, char* v21) {
bb22:
  char* __c123;
  char* __c224;
  _Bool __retval25;
  __c123 = v20;
  __c224 = v21;
  char* t26 = __c123;
  char t27 = *t26;
  int cast28 = (int)t27;
  char* t29 = __c224;
  char t30 = *t29;
  int cast31 = (int)t30;
  _Bool c32 = ((cast28 == cast31)) ? 1 : 0;
  __retval25 = c32;
  _Bool t33 = __retval25;
  return t33;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v34) {
bb35:
  char* __p36;
  unsigned long __retval37;
  unsigned long __i38;
  __p36 = v34;
  unsigned long c39 = 0;
  __i38 = c39;
    char ref_tmp040;
    while (1) {
      unsigned long t41 = __i38;
      char* t42 = __p36;
      char* ptr43 = &(t42)[t41];
      char c44 = 0;
      ref_tmp040 = c44;
      _Bool r45 = __gnu_cxx__char_traits_char___eq(ptr43, &ref_tmp040);
      _Bool u46 = !r45;
      if (!u46) break;
      unsigned long t47 = __i38;
      unsigned long u48 = t47 + 1;
      __i38 = u48;
    }
  unsigned long t49 = __i38;
  __retval37 = t49;
  unsigned long t50 = __retval37;
  return t50;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v51) {
bb52:
  char* __s53;
  unsigned long __retval54;
  __s53 = v51;
    _Bool r55 = std____is_constant_evaluated();
    if (r55) {
      char* t56 = __s53;
      unsigned long r57 = __gnu_cxx__char_traits_char___length(t56);
      __retval54 = r57;
      unsigned long t58 = __retval54;
      return t58;
    }
  char* t59 = __s53;
  unsigned long r60 = strlen(t59);
  __retval54 = r60;
  unsigned long t61 = __retval54;
  return t61;
}

