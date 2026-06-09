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
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_istream_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base9boolalphaE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[26] = "Statistics before input:\n";
char _str_1[19] = "\n\nEnter a string: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_2[25] = "The string entered was: ";
char _str_3[26] = "\nStatistics after input:\n";
char _str_4[28] = "\n\nThe remaining string is: ";
char _str_5[47] = "1234567890abcdefghijklmnopqrstuvwxyz1234567890";
char _str_6[19] = "\n\nstring1 is now: ";
char _str_7[42] = "\n\nStats after resizing by (length + 10):\n";
char _str_8[11] = "capacity: ";
char _str_9[12] = "\nmax size: ";
char _str_10[8] = "\nsize: ";
char _str_11[10] = "\nlength: ";
char _str_12[9] = "\nempty: ";
char _str_13[21] = "basic_string::append";
char _str_14[24] = "basic_string::_M_create";
char _str_15[29] = "basic_string::_M_replace_aux";
void printStatistics(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: _Z15printStatisticsRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
void printStatistics(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v0) {
bb1:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* stringRef2;
  stringRef2 = v0;
  char* cast3 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* std4;
  __VERIFIER_nondet_memory(&std4, sizeof(std4));
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t5 = stringRef2;
  unsigned long std6 = __VERIFIER_nondet_unsigned_long();
  struct std__basic_ostream_char__std__char_traits_char__* std7;
  __VERIFIER_nondet_memory(&std7, sizeof(std7));
  char* cast8 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* std9;
  __VERIFIER_nondet_memory(&std9, sizeof(std9));
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t10 = stringRef2;
  unsigned long std11 = __VERIFIER_nondet_unsigned_long();
  struct std__basic_ostream_char__std__char_traits_char__* std12;
  __VERIFIER_nondet_memory(&std12, sizeof(std12));
  char* cast13 = (char*)&(_str_10);
  struct std__basic_ostream_char__std__char_traits_char__* std14;
  __VERIFIER_nondet_memory(&std14, sizeof(std14));
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t15 = stringRef2;
  unsigned long std16 = __VERIFIER_nondet_unsigned_long();
  struct std__basic_ostream_char__std__char_traits_char__* std17;
  __VERIFIER_nondet_memory(&std17, sizeof(std17));
  char* cast18 = (char*)&(_str_11);
  struct std__basic_ostream_char__std__char_traits_char__* std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t20 = stringRef2;
  unsigned long std21 = __VERIFIER_nondet_unsigned_long();
  struct std__basic_ostream_char__std__char_traits_char__* std22;
  __VERIFIER_nondet_memory(&std22, sizeof(std22));
  char* cast23 = (char*)&(_str_12);
  struct std__basic_ostream_char__std__char_traits_char__* std24;
  __VERIFIER_nondet_memory(&std24, sizeof(std24));
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t25 = stringRef2;
  _Bool std26;
  __VERIFIER_nondet_memory(&std26, sizeof(std26));
  struct std__basic_ostream_char__std__char_traits_char__* std27;
  __VERIFIER_nondet_memory(&std27, sizeof(std27));
  return;
}

// function: main
int main() {
bb28:
  int __retval29;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string130;
  int c31 = 0;
  __retval29 = c31;
  // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
  __VERIFIER_nondet_memory(&string130, sizeof(string130));
    char* cast32 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    struct std__basic_ostream_char__std__char_traits_char__* std34;
    __VERIFIER_nondet_memory(&std34, sizeof(std34));
    printStatistics(&string130);
    char* cast35 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std36;
    __VERIFIER_nondet_memory(&std36, sizeof(std36));
    struct std__basic_istream_char__std__char_traits_char__* std37;
    __VERIFIER_nondet_memory(&std37, sizeof(std37));
    char* cast38 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std39;
    __VERIFIER_nondet_memory(&std39, sizeof(std39));
    struct std__basic_ostream_char__std__char_traits_char__* std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    char* cast41 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    printStatistics(&string130);
    struct std__basic_istream_char__std__char_traits_char__* std43;
    __VERIFIER_nondet_memory(&std43, sizeof(std43));
    char* cast44 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
    struct std__basic_ostream_char__std__char_traits_char__* std46;
    __VERIFIER_nondet_memory(&std46, sizeof(std46));
    struct std__basic_ostream_char__std__char_traits_char__* std47;
    __VERIFIER_nondet_memory(&std47, sizeof(std47));
    printStatistics(&string130);
    char* cast48 = (char*)&(_str_5);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std49;
    __VERIFIER_nondet_memory(&std49, sizeof(std49));
    char* cast50 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* std51;
    __VERIFIER_nondet_memory(&std51, sizeof(std51));
    struct std__basic_ostream_char__std__char_traits_char__* std52;
    __VERIFIER_nondet_memory(&std52, sizeof(std52));
    struct std__basic_ostream_char__std__char_traits_char__* std53;
    __VERIFIER_nondet_memory(&std53, sizeof(std53));
    printStatistics(&string130);
    unsigned long std54 = __VERIFIER_nondet_unsigned_long();
    unsigned long c55 = 10;
    unsigned long b56 = std54 + c55;
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::resize(unsigned long)
    __VERIFIER_nondet_memory(&string130, sizeof(string130));
    char* cast57 = (char*)&(_str_7);
    struct std__basic_ostream_char__std__char_traits_char__* std58;
    __VERIFIER_nondet_memory(&std58, sizeof(std58));
    printStatistics(&string130);
    struct std__basic_ostream_char__std__char_traits_char__* std59;
    __VERIFIER_nondet_memory(&std59, sizeof(std59));
    int c60 = 0;
    __retval29 = c60;
    int t61 = __retval29;
    int ret_val62 = t61;
    {
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
      __VERIFIER_nondet_memory(&string130, sizeof(string130));
    }
    return ret_val62;
  int t63 = __retval29;
  return t63;
}

