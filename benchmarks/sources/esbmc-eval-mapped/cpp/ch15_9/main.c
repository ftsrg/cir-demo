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
struct _Guard { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* _M_guarded; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[8] = "STRINGS";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[13] = "string s is ";
char _str_2[43] = "\nstring1 converted to a C-Style string is ";
char _str_3[10] = "\nptr1 is ";
char _str_4[10] = "\nptr2 is ";
char _str_5[50] = "basic_string: construction from null is not valid";
char _str_6[24] = "basic_string::_M_create";
char _str_7[19] = "basic_string::copy";
char _str_8[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new__(unsigned long p0) { return malloc(p0); }
void operator_delete___2(void* p0, unsigned long p1) { free(p0); }
void operator_delete__(void* p0) { free(p0); }
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string12;
  struct std__allocator_char_ ref_tmp03;
  char* ptr14;
  int length5;
  char* ptr26;
  char* __new_result7;
  int c8 = 0;
  __retval1 = c8;
  char* cast9 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&string12, sizeof(string12));
    __VERIFIER_nondet_memory(cast9, sizeof(*cast9));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    char* c10 = ((void*)0);
    ptr14 = c10;
    unsigned long std11 = __VERIFIER_nondet_unsigned_long();
    int cast12 = (int)std11;
    length5 = cast12;
    int t13 = length5;
    int c14 = 1;
    int b15 = t13 + c14;
    unsigned long cast16 = (unsigned long)b15;
    void* r17 = operator_new__(cast16);
      char* cast18 = (char*)r17;
      __new_result7 = cast18;
    char* t19 = __new_result7;
    ptr26 = t19;
    char* t20 = ptr26;
    int t21 = length5;
    unsigned long cast22 = (unsigned long)t21;
    unsigned long c23 = 0;
    unsigned long std24 = __VERIFIER_nondet_unsigned_long();
    char c25 = 0;
    int t26 = length5;
    long cast27 = (long)t26;
    char* t28 = ptr26;
    char* ptr29 = &(t28)[cast27];
    *ptr29 = c25;
    char* cast30 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    struct std__basic_ostream_char__std__char_traits_char__* std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    char* cast33 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std34;
    __VERIFIER_nondet_memory(&std34, sizeof(std34));
    char* std35;
    __VERIFIER_nondet_memory(&std35, sizeof(std35));
    struct std__basic_ostream_char__std__char_traits_char__* std36;
    __VERIFIER_nondet_memory(&std36, sizeof(std36));
    char* cast37 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    char* std39;
    __VERIFIER_nondet_memory(&std39, sizeof(std39));
    ptr14 = std39;
      int i40;
      int c41 = 0;
      i40 = c41;
      while (1) {
        int t43 = i40;
        int t44 = length5;
        _Bool c45 = ((t43 < t44)) ? 1 : 0;
        if (!c45) break;
        char* t46 = ptr14;
        int t47 = i40;
        char* ptr48 = &(t46)[t47];
        char t49 = *ptr48;
        struct std__basic_ostream_char__std__char_traits_char__* std50;
        __VERIFIER_nondet_memory(&std50, sizeof(std50));
      for_step42: ;
        int t51 = i40;
        int u52 = t51 + 1;
        i40 = u52;
      }
    char* cast53 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std54;
    __VERIFIER_nondet_memory(&std54, sizeof(std54));
    char* t55 = ptr26;
    struct std__basic_ostream_char__std__char_traits_char__* std56;
    __VERIFIER_nondet_memory(&std56, sizeof(std56));
    struct std__basic_ostream_char__std__char_traits_char__* std57;
    __VERIFIER_nondet_memory(&std57, sizeof(std57));
    char* t58 = ptr26;
    char* c59 = ((void*)0);
    _Bool c60 = ((t58 != c59)) ? 1 : 0;
    if (c60) {
      void* cast61 = (void*)t58;
      {
        operator_delete__(cast61);
      }
    }
    int c62 = 0;
    __retval1 = c62;
    int t63 = __retval1;
    int ret_val64 = t63;
    {
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
      __VERIFIER_nondet_memory(&string12, sizeof(string12));
    }
    return ret_val64;
  int t65 = __retval1;
  return t65;
}

