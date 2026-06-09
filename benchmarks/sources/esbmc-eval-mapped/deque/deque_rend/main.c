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
struct std____cmp_cat____unspec { unsigned char __field0; };
struct std____new_allocator_int_;
struct std____new_allocator_int___;
struct std__allocator_int_;
struct std__allocator_int___ { unsigned char __field0; };
struct std__iterator_std__random_access_iterator_tag__int__long__int____int___;
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__reverse_iterator_std___Deque_iterator_int__int____int____ { struct std___Deque_iterator_int__int____int___ current; };
struct std__strong_ordering { char _M_value; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl_data { int** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_int__int____int___ _M_start; struct std___Deque_iterator_int__int____int___ _M_finish; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Deque_base_int__std__allocator_int_____Deque_impl { struct std___Deque_base_int__std__allocator_int_____Deque_impl_data __field0; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std___Deque_base_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int_____Deque_impl _M_impl; };
struct std__deque_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int__ __field0; };

struct std____cmp_cat____unspec __const_main_agg_tmp1;
struct std____cmp_cat____unspec __const__ZStssRKSt15_Deque_iteratorIiRiPiES4__agg_tmp1;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[18] = "mydeque contains:";
char _str_1[2] = " ";
char _str_2[22] = "rit == mydeque.rend()";
char _str_3[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_rend/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[48] = "cannot create std::deque larger than max_size()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__deque_int__std__allocator_int__ mydeque2;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____ rit3;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____ ref_tmp04;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____ ref_tmp25;
  int c6 = 0;
  __retval1 = c6;
  // externalized std:: op: std::deque<int, std::allocator<int> >::deque()
  __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
    // externalized std:: op: std::reverse_iterator<std::_Deque_iterator<int, int&, int*> >::reverse_iterator()
    __VERIFIER_nondet_memory(&rit3, sizeof(rit3));
      int i7;
      int c8 = 1;
      i7 = c8;
      while (1) {
        int t10 = i7;
        int c11 = 5;
        _Bool c12 = ((t10 <= c11)) ? 1 : 0;
        if (!c12) break;
        // externalized std:: op: std::deque<int, std::allocator<int> >::push_back(int const&)
        __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
        __VERIFIER_nondet_memory(&i7, sizeof(i7));
      for_step9: ;
        int t13 = i7;
        int u14 = t13 + 1;
        i7 = u14;
      }
    char* cast15 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std16;
    __VERIFIER_nondet_memory(&std16, sizeof(std16));
    struct std__reverse_iterator_std___Deque_iterator_int__int____int____ std17;
    __VERIFIER_nondet_memory(&std17, sizeof(std17));
    ref_tmp04 = std17;
    struct std__reverse_iterator_std___Deque_iterator_int__int____int____* std18;
    __VERIFIER_nondet_memory(&std18, sizeof(std18));
      struct std__strong_ordering agg_tmp019;
      struct std__reverse_iterator_std___Deque_iterator_int__int____int____ ref_tmp120;
      struct std____cmp_cat____unspec agg_tmp121;
      while (1) {
        struct std__reverse_iterator_std___Deque_iterator_int__int____int____ std22;
        __VERIFIER_nondet_memory(&std22, sizeof(std22));
        ref_tmp120 = std22;
        struct std__strong_ordering std23;
        __VERIFIER_nondet_memory(&std23, sizeof(std23));
        agg_tmp019 = std23;
        agg_tmp121 = *&__const_main_agg_tmp1; // copy
        struct std__strong_ordering t24 = agg_tmp019;
        struct std____cmp_cat____unspec t25 = agg_tmp121;
        _Bool std26;
        __VERIFIER_nondet_memory(&std26, sizeof(std26));
        if (!std26) break;
          char* cast27 = (char*)&(_str_1);
          struct std__basic_ostream_char__std__char_traits_char__* std28;
          __VERIFIER_nondet_memory(&std28, sizeof(std28));
          int* std29;
          __VERIFIER_nondet_memory(&std29, sizeof(std29));
          int t30 = *std29;
          struct std__basic_ostream_char__std__char_traits_char__* std31;
          __VERIFIER_nondet_memory(&std31, sizeof(std31));
          struct std__reverse_iterator_std___Deque_iterator_int__int____int____* std32;
          __VERIFIER_nondet_memory(&std32, sizeof(std32));
      }
    struct std__reverse_iterator_std___Deque_iterator_int__int____int____ std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    ref_tmp25 = std33;
    _Bool std34;
    __VERIFIER_nondet_memory(&std34, sizeof(std34));
    if (std34) {
    } else {
      char* cast35 = (char*)&(_str_2);
      char* c36 = _str_3;
      unsigned int c37 = 30;
      char* cast38 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast35, c36, c37, cast38);
    }
    struct std__basic_ostream_char__std__char_traits_char__* std39;
    __VERIFIER_nondet_memory(&std39, sizeof(std39));
    int c40 = 0;
    __retval1 = c40;
    int t41 = __retval1;
    int ret_val42 = t41;
    {
      // externalized std:: op: std::deque<int, std::allocator<int> >::~deque()
      __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
    }
    return ret_val42;
  int t43 = __retval1;
  return t43;
}

