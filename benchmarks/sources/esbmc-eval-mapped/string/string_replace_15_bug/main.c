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
struct std__less_const_char___ { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__ctype_char_;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

char _str[23] = "this is a test string.";
char _str_1[10] = "n example";
char _str_2[14] = "sample phrase";
char _str_3[8] = "useful.";
char _str_4[27] = "this is an example string.";
char _str_5[36] = "str != \"this is an example string.\"";
char _str_6[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_replace_15_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_7[27] = "this is an example phrase.";
char _str_8[36] = "str != \"this is an example phrase.\"";
char _str_9[9] = "just all";
char _str_10[23] = "this is just a phrase.";
char _str_11[32] = "str != \"this is just a phrase.\"";
char _str_12[8] = "a short";
char _str_13[24] = "this is a short phrase.";
char _str_14[33] = "str != \"this is a short phrase.\"";
char _str_15[26] = "this is a short phrase!!!";
char _str_16[35] = "str != \"this is a short phrase!!!\"";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_17[50] = "basic_string: construction from null is not valid";
char _str_18[24] = "basic_string::_M_create";
char _str_19[22] = "basic_string::replace";
char _str_20[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_21[25] = "basic_string::_M_replace";
char _str_22[29] = "basic_string::_M_replace_aux";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ base2;
  struct std__allocator_char_ ref_tmp03;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str24;
  struct std__allocator_char_ ref_tmp15;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str36;
  struct std__allocator_char_ ref_tmp27;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str48;
  struct std__allocator_char_ ref_tmp39;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str10;
  int c11 = 0;
  __retval1 = c11;
  char* cast12 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&base2, sizeof(base2));
    __VERIFIER_nondet_memory(cast12, sizeof(*cast12));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    char* cast13 = (char*)&(_str_1);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&str24, sizeof(str24));
      __VERIFIER_nondet_memory(cast13, sizeof(*cast13));
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    }
      char* cast14 = (char*)&(_str_2);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&str36, sizeof(str36));
        __VERIFIER_nondet_memory(cast14, sizeof(*cast14));
        __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      }
        char* cast15 = (char*)&(_str_3);
        // externalized std:: op: std::allocator<char>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
          __VERIFIER_nondet_memory(&str48, sizeof(str48));
          __VERIFIER_nondet_memory(cast15, sizeof(*cast15));
          __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
        {
          // externalized std:: op: std::allocator<char>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
        }
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
          __VERIFIER_nondet_memory(&str10, sizeof(str10));
          __VERIFIER_nondet_memory(&base2, sizeof(base2));
            unsigned long c16 = 9;
            unsigned long c17 = 5;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std18;
            __VERIFIER_nondet_memory(&std18, sizeof(std18));
            char* cast19 = (char*)&(_str_4);
            _Bool std20;
            __VERIFIER_nondet_memory(&std20, sizeof(std20));
            _Bool u21 = !std20;
            if (u21) {
            } else {
              char* cast22 = (char*)&(_str_5);
              char* c23 = _str_6;
              unsigned int c24 = 28;
              char* cast25 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast22, c23, c24, cast25);
            }
            unsigned long c26 = 19;
            unsigned long c27 = 6;
            unsigned long c28 = 7;
            unsigned long c29 = 6;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std30;
            __VERIFIER_nondet_memory(&std30, sizeof(std30));
            char* cast31 = (char*)&(_str_7);
            _Bool std32;
            __VERIFIER_nondet_memory(&std32, sizeof(std32));
            _Bool u33 = !std32;
            if (u33) {
            } else {
              char* cast34 = (char*)&(_str_8);
              char* c35 = _str_6;
              unsigned int c36 = 31;
              char* cast37 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast34, c35, c36, cast37);
            }
            unsigned long c38 = 8;
            unsigned long c39 = 10;
            char* cast40 = (char*)&(_str_9);
            unsigned long c41 = 6;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std42;
            __VERIFIER_nondet_memory(&std42, sizeof(std42));
            char* cast43 = (char*)&(_str_10);
            _Bool std44;
            __VERIFIER_nondet_memory(&std44, sizeof(std44));
            _Bool u45 = !std44;
            if (u45) {
            } else {
              char* cast46 = (char*)&(_str_11);
              char* c47 = _str_6;
              unsigned int c48 = 34;
              char* cast49 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast46, c47, c48, cast49);
            }
            unsigned long c50 = 8;
            unsigned long c51 = 6;
            char* cast52 = (char*)&(_str_12);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std53;
            __VERIFIER_nondet_memory(&std53, sizeof(std53));
            char* cast54 = (char*)&(_str_13);
            _Bool std55;
            __VERIFIER_nondet_memory(&std55, sizeof(std55));
            _Bool u56 = !std55;
            if (u56) {
            } else {
              char* cast57 = (char*)&(_str_14);
              char* c58 = _str_6;
              unsigned int c59 = 37;
              char* cast60 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast57, c58, c59, cast60);
            }
            unsigned long c61 = 22;
            unsigned long c62 = 1;
            unsigned long c63 = 3;
            char c64 = 33;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std65;
            __VERIFIER_nondet_memory(&std65, sizeof(std65));
            char* cast66 = (char*)&(_str_15);
            _Bool std67;
            __VERIFIER_nondet_memory(&std67, sizeof(std67));
            _Bool u68 = !std67;
            if (u68) {
            } else {
              char* cast69 = (char*)&(_str_16);
              char* c70 = _str_6;
              unsigned int c71 = 40;
              char* cast72 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast69, c70, c71, cast72);
            }
            struct std__basic_ostream_char__std__char_traits_char__* std73;
            __VERIFIER_nondet_memory(&std73, sizeof(std73));
            struct std__basic_ostream_char__std__char_traits_char__* std74;
            __VERIFIER_nondet_memory(&std74, sizeof(std74));
            int c75 = 0;
            __retval1 = c75;
            int t76 = __retval1;
            int ret_val77 = t76;
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&str10, sizeof(str10));
            }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&str48, sizeof(str48));
            }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&str36, sizeof(str36));
            }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&str24, sizeof(str24));
            }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&base2, sizeof(base2));
            }
            return ret_val77;
  int t78 = __retval1;
  return t78;
}

