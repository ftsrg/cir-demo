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
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

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
struct std___Deque_iterator_int__int____int___ { int* _M_cur; int* _M_first; int* _M_last; int** _M_node; };
struct std___Deque_iterator_int_int___int___ { int* _M_cur; int* _M_first; int* _M_last; int** _M_node; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_ { struct std___Deque_iterator_int__int____int___ _M_first; struct std___Deque_iterator_int__int____int___* _M_cur; };
struct std____new_allocator_int_;
struct std____new_allocator_int___;
struct std__allocator_int_ { unsigned char __field0; };
struct std__allocator_int___ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl_data { int** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_int__int____int___ _M_start; struct std___Deque_iterator_int__int____int___ _M_finish; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Deque_base_int__std__allocator_int_____Deque_impl { struct std___Deque_base_int__std__allocator_int_____Deque_impl_data __field0; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std___Deque_base_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int_____Deque_impl _M_impl; };
struct std__deque_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int__ __field0; };

int __const_main_myints[4] = {16, 2, 77, 29};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[16] = "fourth == third";
char _str_1[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_constructor/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "first.size() == 0";
char _str_3[19] = "second.size() == 4";
char _str_4[17] = "second[2] == 100";
char _str_5[16] = "third[0] == 100";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_6[27] = "The contents of fifth are:";
char _str_7[22] = "fifth[i] == myints[i]";
char _str_8[48] = "cannot create std::deque larger than max_size()";
char _str_9[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEEixEm[91] = "reference std::deque<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_10[19] = "__n < this->size()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  unsigned int i2;
  struct std__deque_int__std__allocator_int__ first3;
  struct std__deque_int__std__allocator_int__ second4;
  int ref_tmp05;
  struct std__allocator_int_ ref_tmp16;
  struct std__deque_int__std__allocator_int__ third7;
  struct std___Deque_iterator_int__int____int___ agg_tmp08;
  struct std___Deque_iterator_int__int____int___ agg_tmp19;
  struct std__allocator_int_ ref_tmp210;
  struct std__deque_int__std__allocator_int__ fourth11;
  int myints12[4];
  struct std__deque_int__std__allocator_int__ fifth13;
  struct std__allocator_int_ ref_tmp314;
  int c15 = 0;
  __retval1 = c15;
  // externalized std:: op: std::deque<int, std::allocator<int> >::deque()
  __VERIFIER_nondet_memory(&first3, sizeof(first3));
    unsigned long c16 = 4;
    int c17 = 100;
    ref_tmp05 = c17;
    // externalized std:: op: std::allocator<int>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
      // externalized std:: op: std::deque<int, std::allocator<int> >::deque(unsigned long, int const&, std::allocator<int> const&)
      __VERIFIER_nondet_memory(&second4, sizeof(second4));
      __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
      __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
    {
      // externalized std:: op: std::allocator<int>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
    }
      struct std___Deque_iterator_int__int____int___ std18;
      __VERIFIER_nondet_memory(&std18, sizeof(std18));
      agg_tmp08 = std18;
      struct std___Deque_iterator_int__int____int___ std19;
      __VERIFIER_nondet_memory(&std19, sizeof(std19));
      agg_tmp19 = std19;
      // externalized std:: op: std::allocator<int>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp210, sizeof(ref_tmp210));
        struct std___Deque_iterator_int__int____int___ t20 = agg_tmp08;
        struct std___Deque_iterator_int__int____int___ t21 = agg_tmp19;
        // externalized std:: op: std::deque<int, std::allocator<int> >::deque<std::_Deque_iterator<int, int&, int*>, void>(std::_Deque_iterator<int, int&, int*>, std::_Deque_iterator<int, int&, int*>, std::allocator<int> const&)
        __VERIFIER_nondet_memory(&third7, sizeof(third7));
        __VERIFIER_nondet_memory(&ref_tmp210, sizeof(ref_tmp210));
      {
        // externalized std:: op: std::allocator<int>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp210, sizeof(ref_tmp210));
      }
        // externalized std:: op: std::deque<int, std::allocator<int> >::deque(std::deque<int, std::allocator<int> > const&)
        __VERIFIER_nondet_memory(&fourth11, sizeof(fourth11));
        __VERIFIER_nondet_memory(&third7, sizeof(third7));
          _Bool std22;
          __VERIFIER_nondet_memory(&std22, sizeof(std22));
          if (std22) {
          } else {
            char* cast23 = (char*)&(_str);
            char* c24 = _str_1;
            unsigned int c25 = 24;
            char* cast26 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast23, c24, c25, cast26);
          }
          unsigned long std27 = __VERIFIER_nondet_unsigned_long();
          unsigned long c28 = 0;
          _Bool c29 = ((std27 == c28)) ? 1 : 0;
          if (c29) {
          } else {
            char* cast30 = (char*)&(_str_2);
            char* c31 = _str_1;
            unsigned int c32 = 25;
            char* cast33 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast30, c31, c32, cast33);
          }
          unsigned long std34 = __VERIFIER_nondet_unsigned_long();
          unsigned long c35 = 4;
          _Bool c36 = ((std34 == c35)) ? 1 : 0;
          if (c36) {
          } else {
            char* cast37 = (char*)&(_str_3);
            char* c38 = _str_1;
            unsigned int c39 = 26;
            char* cast40 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast37, c38, c39, cast40);
          }
          unsigned long c41 = 2;
          int* std42;
          __VERIFIER_nondet_memory(&std42, sizeof(std42));
          int t43 = *std42;
          int c44 = 100;
          _Bool c45 = ((t43 == c44)) ? 1 : 0;
          if (c45) {
          } else {
            char* cast46 = (char*)&(_str_4);
            char* c47 = _str_1;
            unsigned int c48 = 27;
            char* cast49 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast46, c47, c48, cast49);
          }
          unsigned long c50 = 0;
          int* std51;
          __VERIFIER_nondet_memory(&std51, sizeof(std51));
          int t52 = *std51;
          int c53 = 100;
          _Bool c54 = ((t52 == c53)) ? 1 : 0;
          if (c54) {
          } else {
            char* cast55 = (char*)&(_str_5);
            char* c56 = _str_1;
            unsigned int c57 = 28;
            char* cast58 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast55, c56, c57, cast58);
          }
          // array copy
          __builtin_memcpy(myints12, __const_main_myints, (unsigned long)4 * sizeof(__const_main_myints[0]));
          int* cast59 = (int*)&(myints12);
          int* cast60 = (int*)&(myints12);
          unsigned long c61 = 16;
          unsigned long c62 = 4;
          unsigned long b63 = c61 / c62;
          int* ptr64 = &(cast60)[b63];
          // externalized std:: op: std::allocator<int>::allocator()
          __VERIFIER_nondet_memory(&ref_tmp314, sizeof(ref_tmp314));
            // externalized std:: op: std::deque<int, std::allocator<int> >::deque<int*, void>(int*, int*, std::allocator<int> const&)
            __VERIFIER_nondet_memory(&fifth13, sizeof(fifth13));
            __VERIFIER_nondet_memory(cast59, sizeof(*cast59));
            __VERIFIER_nondet_memory(ptr64, sizeof(*ptr64));
            __VERIFIER_nondet_memory(&ref_tmp314, sizeof(ref_tmp314));
          {
            // externalized std:: op: std::allocator<int>::~allocator()
            __VERIFIER_nondet_memory(&ref_tmp314, sizeof(ref_tmp314));
          }
            char* cast65 = (char*)&(_str_6);
            struct std__basic_ostream_char__std__char_traits_char__* std66;
            __VERIFIER_nondet_memory(&std66, sizeof(std66));
              unsigned int c67 = 0;
              i2 = c67;
              while (1) {
                unsigned int t69 = i2;
                unsigned long cast70 = (unsigned long)t69;
                unsigned long std71 = __VERIFIER_nondet_unsigned_long();
                _Bool c72 = ((cast70 < std71)) ? 1 : 0;
                if (!c72) break;
                unsigned int t73 = i2;
                unsigned long cast74 = (unsigned long)t73;
                int* std75;
                __VERIFIER_nondet_memory(&std75, sizeof(std75));
                int t76 = *std75;
                unsigned int t77 = i2;
                unsigned long cast78 = (unsigned long)t77;
                int t79 = myints12[cast78];
                _Bool c80 = ((t76 == t79)) ? 1 : 0;
                if (c80) {
                } else {
                  char* cast81 = (char*)&(_str_7);
                  char* c82 = _str_1;
                  unsigned int c83 = 36;
                  char* cast84 = (char*)&(__PRETTY_FUNCTION___main);
                  __assert_fail(cast81, c82, c83, cast84);
                }
              for_step68: ;
                unsigned int t85 = i2;
                unsigned int u86 = t85 + 1;
                i2 = u86;
              }
            struct std__basic_ostream_char__std__char_traits_char__* std87;
            __VERIFIER_nondet_memory(&std87, sizeof(std87));
            int c88 = 0;
            __retval1 = c88;
            int t89 = __retval1;
            int ret_val90 = t89;
            {
              // externalized std:: op: std::deque<int, std::allocator<int> >::~deque()
              __VERIFIER_nondet_memory(&fifth13, sizeof(fifth13));
            }
            {
              // externalized std:: op: std::deque<int, std::allocator<int> >::~deque()
              __VERIFIER_nondet_memory(&fourth11, sizeof(fourth11));
            }
            {
              // externalized std:: op: std::deque<int, std::allocator<int> >::~deque()
              __VERIFIER_nondet_memory(&third7, sizeof(third7));
            }
            {
              // externalized std:: op: std::deque<int, std::allocator<int> >::~deque()
              __VERIFIER_nondet_memory(&second4, sizeof(second4));
            }
            {
              // externalized std:: op: std::deque<int, std::allocator<int> >::~deque()
              __VERIFIER_nondet_memory(&first3, sizeof(first3));
            }
            return ret_val90;
  int t91 = __retval1;
  return t91;
}

