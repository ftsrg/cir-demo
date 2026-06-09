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
struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__ { struct std___Deque_iterator_int__int____int___ _M_first; struct std___Deque_iterator_int__int____int___* _M_cur; struct std__allocator_int_* _M_alloc; };
struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_ { struct std___Deque_iterator_int__int____int___ _M_first; struct std___Deque_iterator_int__int____int___* _M_cur; };
struct std____detail____move_iter_cat_std___Deque_iterator_int__int____int____;
struct std____new_allocator_int_;
struct std____new_allocator_int___;
struct std__allocator_int_;
struct std__allocator_int___ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__move_iterator_std___Deque_iterator_int__int____int____ { struct std___Deque_iterator_int__int____int___ _M_current; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____imove___IterMove { unsigned char __field0; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl_data { int** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_int__int____int___ _M_start; struct std___Deque_iterator_int__int____int___ _M_finish; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Deque_base_int__std__allocator_int_____Deque_impl { struct std___Deque_base_int__std__allocator_int_____Deque_impl_data __field0; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std___Deque_base_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int_____Deque_impl _M_impl; };
struct std__deque_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int__ __field0; };

int __const_main_myints[3] = {1776, 7, 4};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "first.size() == 7";
char _str_1[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_assign_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[16] = "first[6] != 100";
char _str_3[19] = "second.size() == 5";
char _str_4[17] = "second[4] != 100";
char _str_5[18] = "third.size() == 3";
char _str_6[14] = "third[2] != 4";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_7[16] = "Size of first: ";
char _str_8[17] = "Size of second: ";
char _str_9[16] = "Size of third: ";
char _str_10[32] = "deque::_M_new_elements_at_front";
char _str_11[31] = "deque::_M_new_elements_at_back";
struct std__ranges____imove___IterMove _ZNSt6ranges4_Cpo9iter_moveE;
char _str_12[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEEixEm[91] = "reference std::deque<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_13[19] = "__n < this->size()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__deque_int__std__allocator_int__ first2;
  struct std__deque_int__std__allocator_int__ second3;
  struct std__deque_int__std__allocator_int__ third4;
  int ref_tmp05;
  struct std___Deque_iterator_int__int____int___ it6;
  struct std___Deque_iterator_int__int____int___ ref_tmp17;
  struct std___Deque_iterator_int__int____int___ ref_tmp28;
  struct std___Deque_iterator_int__int____int___ agg_tmp09;
  struct std___Deque_iterator_int__int____int___ agg_tmp110;
  struct std___Deque_iterator_int__int____int___ ref_tmp311;
  int myints12[3];
  int c13 = 0;
  __retval1 = c13;
  // externalized std:: op: std::deque<int, std::allocator<int> >::deque()
  __VERIFIER_nondet_memory(&first2, sizeof(first2));
    // externalized std:: op: std::deque<int, std::allocator<int> >::deque()
    __VERIFIER_nondet_memory(&second3, sizeof(second3));
      // externalized std:: op: std::deque<int, std::allocator<int> >::deque()
      __VERIFIER_nondet_memory(&third4, sizeof(third4));
        unsigned long c14 = 7;
        int c15 = 100;
        ref_tmp05 = c15;
        // externalized std:: op: std::deque<int, std::allocator<int> >::assign(unsigned long, int const&)
        __VERIFIER_nondet_memory(&first2, sizeof(first2));
        __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
        unsigned long std16 = __VERIFIER_nondet_unsigned_long();
        unsigned long c17 = 7;
        _Bool c18 = ((std16 == c17)) ? 1 : 0;
        if (c18) {
        } else {
          char* cast19 = (char*)&(_str);
          char* c20 = _str_1;
          unsigned int c21 = 22;
          char* cast22 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast19, c20, c21, cast22);
        }
        unsigned long c23 = 6;
        int* std24;
        __VERIFIER_nondet_memory(&std24, sizeof(std24));
        int t25 = *std24;
        int c26 = 100;
        _Bool c27 = ((t25 != c26)) ? 1 : 0;
        if (c27) {
        } else {
          char* cast28 = (char*)&(_str_2);
          char* c29 = _str_1;
          unsigned int c30 = 23;
          char* cast31 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast28, c29, c30, cast31);
        }
        // externalized std:: op: std::_Deque_iterator<int, int&, int*>::_Deque_iterator()
        __VERIFIER_nondet_memory(&it6, sizeof(it6));
        struct std___Deque_iterator_int__int____int___ std32;
        __VERIFIER_nondet_memory(&std32, sizeof(std32));
        ref_tmp28 = std32;
        long c33 = 1;
        struct std___Deque_iterator_int__int____int___ std34;
        __VERIFIER_nondet_memory(&std34, sizeof(std34));
        ref_tmp17 = std34;
        struct std___Deque_iterator_int__int____int___* std35;
        __VERIFIER_nondet_memory(&std35, sizeof(std35));
        // externalized std:: op: std::_Deque_iterator<int, int&, int*>::_Deque_iterator(std::_Deque_iterator<int, int&, int*> const&)
        __VERIFIER_nondet_memory(&agg_tmp09, sizeof(agg_tmp09));
        __VERIFIER_nondet_memory(&it6, sizeof(it6));
        struct std___Deque_iterator_int__int____int___ std36;
        __VERIFIER_nondet_memory(&std36, sizeof(std36));
        ref_tmp311 = std36;
        long c37 = 1;
        struct std___Deque_iterator_int__int____int___ std38;
        __VERIFIER_nondet_memory(&std38, sizeof(std38));
        agg_tmp110 = std38;
        struct std___Deque_iterator_int__int____int___ t39 = agg_tmp09;
        struct std___Deque_iterator_int__int____int___ t40 = agg_tmp110;
        // externalized std:: op: void std::deque<int, std::allocator<int> >::assign<std::_Deque_iterator<int, int&, int*>, void>(std::_Deque_iterator<int, int&, int*>, std::_Deque_iterator<int, int&, int*>)
        __VERIFIER_nondet_memory(&second3, sizeof(second3));
        unsigned long std41 = __VERIFIER_nondet_unsigned_long();
        unsigned long c42 = 5;
        _Bool c43 = ((std41 == c42)) ? 1 : 0;
        if (c43) {
        } else {
          char* cast44 = (char*)&(_str_3);
          char* c45 = _str_1;
          unsigned int c46 = 29;
          char* cast47 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast44, c45, c46, cast47);
        }
        unsigned long c48 = 4;
        int* std49;
        __VERIFIER_nondet_memory(&std49, sizeof(std49));
        int t50 = *std49;
        int c51 = 100;
        _Bool c52 = ((t50 != c51)) ? 1 : 0;
        if (c52) {
        } else {
          char* cast53 = (char*)&(_str_4);
          char* c54 = _str_1;
          unsigned int c55 = 30;
          char* cast56 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast53, c54, c55, cast56);
        }
        // array copy
        __builtin_memcpy(myints12, __const_main_myints, (unsigned long)3 * sizeof(__const_main_myints[0]));
        int* cast57 = (int*)&(myints12);
        int* cast58 = (int*)&(myints12);
        int c59 = 3;
        int* ptr60 = &(cast58)[c59];
        // externalized std:: op: void std::deque<int, std::allocator<int> >::assign<int*, void>(int*, int*)
        __VERIFIER_nondet_memory(&third4, sizeof(third4));
        __VERIFIER_nondet_memory(cast57, sizeof(*cast57));
        __VERIFIER_nondet_memory(ptr60, sizeof(*ptr60));
        unsigned long std61 = __VERIFIER_nondet_unsigned_long();
        unsigned long c62 = 3;
        _Bool c63 = ((std61 == c62)) ? 1 : 0;
        if (c63) {
        } else {
          char* cast64 = (char*)&(_str_5);
          char* c65 = _str_1;
          unsigned int c66 = 34;
          char* cast67 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast64, c65, c66, cast67);
        }
        unsigned long c68 = 2;
        int* std69;
        __VERIFIER_nondet_memory(&std69, sizeof(std69));
        int t70 = *std69;
        int c71 = 4;
        _Bool c72 = ((t70 != c71)) ? 1 : 0;
        if (c72) {
        } else {
          char* cast73 = (char*)&(_str_6);
          char* c74 = _str_1;
          unsigned int c75 = 35;
          char* cast76 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast73, c74, c75, cast76);
        }
        char* cast77 = (char*)&(_str_7);
        struct std__basic_ostream_char__std__char_traits_char__* std78;
        __VERIFIER_nondet_memory(&std78, sizeof(std78));
        unsigned long std79 = __VERIFIER_nondet_unsigned_long();
        int cast80 = (int)std79;
        struct std__basic_ostream_char__std__char_traits_char__* std81;
        __VERIFIER_nondet_memory(&std81, sizeof(std81));
        struct std__basic_ostream_char__std__char_traits_char__* std82;
        __VERIFIER_nondet_memory(&std82, sizeof(std82));
        char* cast83 = (char*)&(_str_8);
        struct std__basic_ostream_char__std__char_traits_char__* std84;
        __VERIFIER_nondet_memory(&std84, sizeof(std84));
        unsigned long std85 = __VERIFIER_nondet_unsigned_long();
        int cast86 = (int)std85;
        struct std__basic_ostream_char__std__char_traits_char__* std87;
        __VERIFIER_nondet_memory(&std87, sizeof(std87));
        struct std__basic_ostream_char__std__char_traits_char__* std88;
        __VERIFIER_nondet_memory(&std88, sizeof(std88));
        char* cast89 = (char*)&(_str_9);
        struct std__basic_ostream_char__std__char_traits_char__* std90;
        __VERIFIER_nondet_memory(&std90, sizeof(std90));
        unsigned long std91 = __VERIFIER_nondet_unsigned_long();
        int cast92 = (int)std91;
        struct std__basic_ostream_char__std__char_traits_char__* std93;
        __VERIFIER_nondet_memory(&std93, sizeof(std93));
        struct std__basic_ostream_char__std__char_traits_char__* std94;
        __VERIFIER_nondet_memory(&std94, sizeof(std94));
        int c95 = 0;
        __retval1 = c95;
        int t96 = __retval1;
        int ret_val97 = t96;
        {
          // externalized std:: op: std::deque<int, std::allocator<int> >::~deque()
          __VERIFIER_nondet_memory(&third4, sizeof(third4));
        }
        {
          // externalized std:: op: std::deque<int, std::allocator<int> >::~deque()
          __VERIFIER_nondet_memory(&second3, sizeof(second3));
        }
        {
          // externalized std:: op: std::deque<int, std::allocator<int> >::~deque()
          __VERIFIER_nondet_memory(&first2, sizeof(first2));
        }
        return ret_val97;
  int t98 = __retval1;
  return t98;
}

