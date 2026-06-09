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
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ { char* _M_current; };
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

char _str[15] = "to be question";
char _str_1[5] = "the ";
char _str_2[13] = "or not to be";
char _str_3[19] = "to be the question";
char _str_4[28] = "str != \"to be the question\"";
char _str_5[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_insert_11_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_6[23] = "to be not the question";
char _str_7[32] = "str != \"to be not the question\"";
char _str_8[13] = "that is cool";
char _str_9[31] = "to be not that is the question";
char _str_10[40] = "str != \"to be not that is the question\"";
char _str_11[7] = "to be ";
char _str_12[37] = "to be not to be that is the question";
char _str_13[46] = "str != \"to be not to be that is the question\"";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_14[50] = "basic_string: construction from null is not valid";
char _str_15[24] = "basic_string::_M_create";
char _str_16[22] = "basic_string::replace";
char _str_17[25] = "basic_string::_M_replace";
char _str_18[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_19[21] = "basic_string::insert";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2;
  struct std__allocator_char_ ref_tmp03;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str24;
  struct std__allocator_char_ ref_tmp15;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str36;
  struct std__allocator_char_ ref_tmp27;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ it8;
  int c9 = 0;
  __retval1 = c9;
  char* cast10 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&str2, sizeof(str2));
    __VERIFIER_nondet_memory(cast10, sizeof(*cast10));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    char* cast11 = (char*)&(_str_1);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&str24, sizeof(str24));
      __VERIFIER_nondet_memory(cast11, sizeof(*cast11));
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    }
      char* cast12 = (char*)&(_str_2);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&str36, sizeof(str36));
        __VERIFIER_nondet_memory(cast12, sizeof(*cast12));
        __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      }
        // externalized std:: op: __gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >::__normal_iterator()
        __VERIFIER_nondet_memory(&it8, sizeof(it8));
        unsigned long c13 = 6;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std14;
        __VERIFIER_nondet_memory(&std14, sizeof(std14));
        char* cast15 = (char*)&(_str_3);
        _Bool std16;
        __VERIFIER_nondet_memory(&std16, sizeof(std16));
        _Bool u17 = !std16;
        if (u17) {
        } else {
          char* cast18 = (char*)&(_str_4);
          char* c19 = _str_5;
          unsigned int c20 = 24;
          char* cast21 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast18, c19, c20, cast21);
        }
        unsigned long c22 = 6;
        unsigned long c23 = 3;
        unsigned long c24 = 4;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std25;
        __VERIFIER_nondet_memory(&std25, sizeof(std25));
        char* cast26 = (char*)&(_str_6);
        _Bool std27;
        __VERIFIER_nondet_memory(&std27, sizeof(std27));
        _Bool u28 = !std27;
        if (u28) {
        } else {
          char* cast29 = (char*)&(_str_7);
          char* c30 = _str_5;
          unsigned int c31 = 27;
          char* cast32 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast29, c30, c31, cast32);
        }
        unsigned long c33 = 10;
        char* cast34 = (char*)&(_str_8);
        unsigned long c35 = 8;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std36;
        __VERIFIER_nondet_memory(&std36, sizeof(std36));
        char* cast37 = (char*)&(_str_9);
        _Bool std38;
        __VERIFIER_nondet_memory(&std38, sizeof(std38));
        _Bool u39 = !std38;
        if (u39) {
        } else {
          char* cast40 = (char*)&(_str_10);
          char* c41 = _str_5;
          unsigned int c42 = 30;
          char* cast43 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast40, c41, c42, cast43);
        }
        unsigned long c44 = 10;
        char* cast45 = (char*)&(_str_11);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std46;
        __VERIFIER_nondet_memory(&std46, sizeof(std46));
        char* cast47 = (char*)&(_str_12);
        _Bool std48;
        __VERIFIER_nondet_memory(&std48, sizeof(std48));
        _Bool u49 = !std48;
        if (u49) {
        } else {
          char* cast50 = (char*)&(_str_13);
          char* c51 = _str_5;
          unsigned int c52 = 33;
          char* cast53 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast50, c51, c52, cast53);
        }
        struct std__basic_ostream_char__std__char_traits_char__* std54;
        __VERIFIER_nondet_memory(&std54, sizeof(std54));
        struct std__basic_ostream_char__std__char_traits_char__* std55;
        __VERIFIER_nondet_memory(&std55, sizeof(std55));
        int c56 = 0;
        __retval1 = c56;
        int t57 = __retval1;
        int ret_val58 = t57;
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
          __VERIFIER_nondet_memory(&str2, sizeof(str2));
        }
        return ret_val58;
  int t59 = __retval1;
  return t59;
}

