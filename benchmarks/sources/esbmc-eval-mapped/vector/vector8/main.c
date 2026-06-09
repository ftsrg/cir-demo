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
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ { char* _M_current; };
struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___ { char* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_char____void_ { char* _M_first; char** _M_cur; };
struct std___Vector_base_char__std__allocator_char_____Vector_impl_data { char* _M_start; char* _M_finish; char* _M_end_of_storage; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std__initializer_list_char_ { char* _M_array; unsigned long _M_len; };
struct std___Vector_base_char__std__allocator_char_____Vector_impl { struct std___Vector_base_char__std__allocator_char_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_char__std__allocator_char__ { struct std___Vector_base_char__std__allocator_char_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_char__std__allocator_char__ { struct std___Vector_base_char__std__allocator_char__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[25] = "The first character is: ";
char _str_1[49] = "cannot create std::vector larger than max_size()";
char _str_2[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIcSaIcEE5frontEv[37] = "reference std::vector<char>::front()";
char _str_3[15] = "!this->empty()";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__vector_char__std__allocator_char__ letters2;
  struct std__initializer_list_char_ agg_tmp03;
  char ref_tmp04[6];
  struct std__allocator_char_ ref_tmp15;
  int c6 = 0;
  __retval1 = c6;
  char* cast7 = (char*)&(ref_tmp04);
  char c8 = 111;
  *cast7 = c8;
  long c9 = 1;
  char* ptr10 = &(cast7)[c9];
  char c11 = 109;
  *ptr10 = c11;
  long c12 = 2;
  char* ptr13 = &(cast7)[c12];
  char c14 = 103;
  *ptr13 = c14;
  long c15 = 3;
  char* ptr16 = &(cast7)[c15];
  char c17 = 119;
  *ptr16 = c17;
  long c18 = 4;
  char* ptr19 = &(cast7)[c18];
  char c20 = 116;
  *ptr19 = c20;
  long c21 = 5;
  char* ptr22 = &(cast7)[c21];
  char c23 = 102;
  *ptr22 = c23;
  char** cast24 = (char**)&(agg_tmp03._M_array);
  *cast24 = ref_tmp04;
  unsigned long c25 = 6;
  agg_tmp03._M_len = c25;
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    struct std__initializer_list_char_ t26 = agg_tmp03;
    // externalized std:: op: std::vector<char, std::allocator<char> >::vector(std::initializer_list<char>, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&letters2, sizeof(letters2));
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
  }
      _Bool std27;
      __VERIFIER_nondet_memory(&std27, sizeof(std27));
      _Bool u28 = !std27;
      if (u28) {
        char* cast29 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* std30;
        __VERIFIER_nondet_memory(&std30, sizeof(std30));
        char* std31;
        __VERIFIER_nondet_memory(&std31, sizeof(std31));
        char t32 = *std31;
        struct std__basic_ostream_char__std__char_traits_char__* std33;
        __VERIFIER_nondet_memory(&std33, sizeof(std33));
        struct std__basic_ostream_char__std__char_traits_char__* std34;
        __VERIFIER_nondet_memory(&std34, sizeof(std34));
      }
  {
    // externalized std:: op: std::vector<char, std::allocator<char> >::~vector()
    __VERIFIER_nondet_memory(&letters2, sizeof(letters2));
  }
  int t35 = __retval1;
  return t35;
}

