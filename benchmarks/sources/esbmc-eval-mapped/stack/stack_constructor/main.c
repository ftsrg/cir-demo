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
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Deque_iterator_int__int____int___ { int* _M_cur; int* _M_first; int* _M_last; int** _M_node; };
struct std___Deque_iterator_int_int___int___ { int* _M_cur; int* _M_first; int* _M_last; int** _M_node; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_ { struct std___Deque_iterator_int__int____int___ _M_first; struct std___Deque_iterator_int__int____int___* _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std____new_allocator_int___;
struct std__allocator_int_ { unsigned char __field0; };
struct std__allocator_int___ { unsigned char __field0; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl_data { int** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_int__int____int___ _M_start; struct std___Deque_iterator_int__int____int___ _M_finish; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Deque_base_int__std__allocator_int_____Deque_impl { struct std___Deque_base_int__std__allocator_int_____Deque_impl_data __field0; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };
struct std___Deque_base_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int_____Deque_impl _M_impl; };
struct std__deque_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int__ __field0; };
struct std__stack_int__std__deque_int__std__allocator_int___ { struct std__deque_int__std__allocator_int__ c; };
struct std__stack_int__std__vector_int__std__allocator_int___ { struct std__vector_int__std__allocator_int__ c; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "first.size() == 0";
char _str_1[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stack/stack_constructor/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[19] = "second.size() == 3";
char _str_3[18] = "third.size() == 0";
char _str_4[19] = "fourth.size() == 2";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[16] = "size of first: ";
char _str_6[17] = "size of second: ";
char _str_7[16] = "size of third: ";
char _str_8[17] = "size of fourth: ";
char _str_9[49] = "cannot create std::vector larger than max_size()";
char _str_10[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_11[9] = "__n >= 0";
char _str_12[48] = "cannot create std::deque larger than max_size()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__deque_int__std__allocator_int__ mydeque2;
  int ref_tmp03;
  struct std__allocator_int_ ref_tmp14;
  struct std__vector_int__std__allocator_int__ myvector5;
  int ref_tmp26;
  struct std__allocator_int_ ref_tmp37;
  struct std__stack_int__std__deque_int__std__allocator_int___ first8;
  struct std__stack_int__std__deque_int__std__allocator_int___ second9;
  struct std__stack_int__std__vector_int__std__allocator_int___ third10;
  struct std__stack_int__std__vector_int__std__allocator_int___ fourth11;
  int c12 = 0;
  __retval1 = c12;
  unsigned long c13 = 3;
  int c14 = 100;
  ref_tmp03 = c14;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
    // externalized std:: op: std::deque<int, std::allocator<int> >::deque(unsigned long, int const&, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
  }
    unsigned long c15 = 2;
    int c16 = 200;
    ref_tmp26 = c16;
    // externalized std:: op: std::allocator<int>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp37, sizeof(ref_tmp37));
      // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, int const&, std::allocator<int> const&)
      __VERIFIER_nondet_memory(&myvector5, sizeof(myvector5));
      __VERIFIER_nondet_memory(&ref_tmp26, sizeof(ref_tmp26));
      __VERIFIER_nondet_memory(&ref_tmp37, sizeof(ref_tmp37));
    {
      // externalized std:: op: std::allocator<int>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp37, sizeof(ref_tmp37));
    }
      // externalized std:: op: std::stack<int, std::deque<int, std::allocator<int> > >::stack<std::deque<int, std::allocator<int> >, void>()
      __VERIFIER_nondet_memory(&first8, sizeof(first8));
        // externalized std:: op: std::stack<int, std::deque<int, std::allocator<int> > >::stack(std::deque<int, std::allocator<int> > const&)
        __VERIFIER_nondet_memory(&second9, sizeof(second9));
        __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
          // externalized std:: op: std::stack<int, std::vector<int, std::allocator<int> > >::stack<std::vector<int, std::allocator<int> >, void>()
          __VERIFIER_nondet_memory(&third10, sizeof(third10));
            // externalized std:: op: std::stack<int, std::vector<int, std::allocator<int> > >::stack(std::vector<int, std::allocator<int> > const&)
            __VERIFIER_nondet_memory(&fourth11, sizeof(fourth11));
            __VERIFIER_nondet_memory(&myvector5, sizeof(myvector5));
              unsigned long std17 = __VERIFIER_nondet_unsigned_long();
              unsigned long c18 = 0;
              _Bool c19 = ((std17 == c18)) ? 1 : 0;
              if (c19) {
              } else {
                char* cast20 = (char*)&(_str);
                char* c21 = _str_1;
                unsigned int c22 = 27;
                char* cast23 = (char*)&(__PRETTY_FUNCTION___main);
                __assert_fail(cast20, c21, c22, cast23);
              }
              unsigned long std24 = __VERIFIER_nondet_unsigned_long();
              unsigned long c25 = 3;
              _Bool c26 = ((std24 == c25)) ? 1 : 0;
              if (c26) {
              } else {
                char* cast27 = (char*)&(_str_2);
                char* c28 = _str_1;
                unsigned int c29 = 28;
                char* cast30 = (char*)&(__PRETTY_FUNCTION___main);
                __assert_fail(cast27, c28, c29, cast30);
              }
              unsigned long std31 = __VERIFIER_nondet_unsigned_long();
              unsigned long c32 = 0;
              _Bool c33 = ((std31 == c32)) ? 1 : 0;
              if (c33) {
              } else {
                char* cast34 = (char*)&(_str_3);
                char* c35 = _str_1;
                unsigned int c36 = 29;
                char* cast37 = (char*)&(__PRETTY_FUNCTION___main);
                __assert_fail(cast34, c35, c36, cast37);
              }
              unsigned long std38 = __VERIFIER_nondet_unsigned_long();
              unsigned long c39 = 2;
              _Bool c40 = ((std38 == c39)) ? 1 : 0;
              if (c40) {
              } else {
                char* cast41 = (char*)&(_str_4);
                char* c42 = _str_1;
                unsigned int c43 = 30;
                char* cast44 = (char*)&(__PRETTY_FUNCTION___main);
                __assert_fail(cast41, c42, c43, cast44);
              }
              char* cast45 = (char*)&(_str_5);
              struct std__basic_ostream_char__std__char_traits_char__* std46;
              __VERIFIER_nondet_memory(&std46, sizeof(std46));
              unsigned long std47 = __VERIFIER_nondet_unsigned_long();
              int cast48 = (int)std47;
              struct std__basic_ostream_char__std__char_traits_char__* std49;
              __VERIFIER_nondet_memory(&std49, sizeof(std49));
              struct std__basic_ostream_char__std__char_traits_char__* std50;
              __VERIFIER_nondet_memory(&std50, sizeof(std50));
              char* cast51 = (char*)&(_str_6);
              struct std__basic_ostream_char__std__char_traits_char__* std52;
              __VERIFIER_nondet_memory(&std52, sizeof(std52));
              unsigned long std53 = __VERIFIER_nondet_unsigned_long();
              int cast54 = (int)std53;
              struct std__basic_ostream_char__std__char_traits_char__* std55;
              __VERIFIER_nondet_memory(&std55, sizeof(std55));
              struct std__basic_ostream_char__std__char_traits_char__* std56;
              __VERIFIER_nondet_memory(&std56, sizeof(std56));
              char* cast57 = (char*)&(_str_7);
              struct std__basic_ostream_char__std__char_traits_char__* std58;
              __VERIFIER_nondet_memory(&std58, sizeof(std58));
              unsigned long std59 = __VERIFIER_nondet_unsigned_long();
              int cast60 = (int)std59;
              struct std__basic_ostream_char__std__char_traits_char__* std61;
              __VERIFIER_nondet_memory(&std61, sizeof(std61));
              struct std__basic_ostream_char__std__char_traits_char__* std62;
              __VERIFIER_nondet_memory(&std62, sizeof(std62));
              char* cast63 = (char*)&(_str_8);
              struct std__basic_ostream_char__std__char_traits_char__* std64;
              __VERIFIER_nondet_memory(&std64, sizeof(std64));
              unsigned long std65 = __VERIFIER_nondet_unsigned_long();
              int cast66 = (int)std65;
              struct std__basic_ostream_char__std__char_traits_char__* std67;
              __VERIFIER_nondet_memory(&std67, sizeof(std67));
              struct std__basic_ostream_char__std__char_traits_char__* std68;
              __VERIFIER_nondet_memory(&std68, sizeof(std68));
              int c69 = 0;
              __retval1 = c69;
              int t70 = __retval1;
              int ret_val71 = t70;
              {
                // externalized std:: op: std::stack<int, std::vector<int, std::allocator<int> > >::~stack()
                __VERIFIER_nondet_memory(&fourth11, sizeof(fourth11));
              }
              {
                // externalized std:: op: std::stack<int, std::vector<int, std::allocator<int> > >::~stack()
                __VERIFIER_nondet_memory(&third10, sizeof(third10));
              }
              {
                // externalized std:: op: std::stack<int, std::deque<int, std::allocator<int> > >::~stack()
                __VERIFIER_nondet_memory(&second9, sizeof(second9));
              }
              {
                // externalized std:: op: std::stack<int, std::deque<int, std::allocator<int> > >::~stack()
                __VERIFIER_nondet_memory(&first8, sizeof(first8));
              }
              {
                // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
                __VERIFIER_nondet_memory(&myvector5, sizeof(myvector5));
              }
              {
                // externalized std:: op: std::deque<int, std::allocator<int> >::~deque()
                __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
              }
              return ret_val71;
  int t72 = __retval1;
  return t72;
}

