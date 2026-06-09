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
struct __gnu_cxx____aligned_membuf_int_ { unsigned char _M_storage[4]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___List_const_iterator_int_ { struct std____detail___List_node_base* _M_node; };
struct std___List_iterator_int_ { struct std____detail___List_node_base* _M_node; };
struct std____allocated_ptr_std__allocator_std___List_node_int___ { struct std__allocator_std___List_node_int__* _M_alloc; struct std___List_node_int_* _M_ptr; };
struct std____detail___List_node_base { struct std____detail___List_node_base* _M_next; struct std____detail___List_node_base* _M_prev; };
struct std____detail___List_size { unsigned long _M_size; };
struct std____false_type { unsigned char __field0; };
struct std____new_allocator_int_;
struct std____new_allocator_std___List_node_int__;
struct std__allocator_int_ { unsigned char __field0; };
struct std__allocator_std___List_node_int__ { unsigned char __field0; };
struct std___List_node_int_;
struct std____allocated_obj_std__allocator_std___List_node_int___ { struct std____allocated_ptr_std__allocator_std___List_node_int___ __field0; };
struct std____detail___List_node_header { struct std____detail___List_node_base __field0; struct std____detail___List_size __field1; };
struct std__ctype_char_;
struct std__ios_base;
struct std____cxx11___List_base_int__std__allocator_int_____List_impl { struct std____detail___List_node_header _M_node; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std____cxx11___List_base_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int_____List_impl _M_impl; };
struct std____cxx11__list_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int__ __field0; };

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[17] = "first == second1";
char _str_1[102] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_swap/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[17] = "second == first1";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[16] = "first contains:";
char _str_4[2] = " ";
char _str_5[18] = "\nsecond contains:";
char _str_6[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv[75] = "reference std::list<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_7[15] = "!this->empty()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__list_int__std__allocator_int__ first2;
  int ref_tmp03;
  struct std__allocator_int_ ref_tmp14;
  struct std____cxx11__list_int__std__allocator_int__ second5;
  int ref_tmp26;
  struct std__allocator_int_ ref_tmp37;
  struct std____cxx11__list_int__std__allocator_int__ first18;
  struct std____cxx11__list_int__std__allocator_int__ second19;
  struct std___List_iterator_int_ it10;
  int c11 = 0;
  __retval1 = c11;
  unsigned long c12 = 3;
  int c13 = 100;
  ref_tmp03 = c13;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list(unsigned long, int const&, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&first2, sizeof(first2));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
  }
    unsigned long c14 = 5;
    int c15 = 200;
    ref_tmp26 = c15;
    // externalized std:: op: std::allocator<int>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp37, sizeof(ref_tmp37));
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list(unsigned long, int const&, std::allocator<int> const&)
      __VERIFIER_nondet_memory(&second5, sizeof(second5));
      __VERIFIER_nondet_memory(&ref_tmp26, sizeof(ref_tmp26));
      __VERIFIER_nondet_memory(&ref_tmp37, sizeof(ref_tmp37));
    {
      // externalized std:: op: std::allocator<int>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp37, sizeof(ref_tmp37));
    }
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list(std::__cxx11::list<int, std::allocator<int> > const&)
      __VERIFIER_nondet_memory(&first18, sizeof(first18));
      __VERIFIER_nondet_memory(&first2, sizeof(first2));
        // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list(std::__cxx11::list<int, std::allocator<int> > const&)
        __VERIFIER_nondet_memory(&second19, sizeof(second19));
        __VERIFIER_nondet_memory(&second5, sizeof(second5));
          // externalized std:: op: std::_List_iterator<int>::_List_iterator()
          __VERIFIER_nondet_memory(&it10, sizeof(it10));
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::swap(std::__cxx11::list<int, std::allocator<int> >&)
          __VERIFIER_nondet_memory(&first2, sizeof(first2));
          __VERIFIER_nondet_memory(&second5, sizeof(second5));
          _Bool std16;
          __VERIFIER_nondet_memory(&std16, sizeof(std16));
          if (std16) {
          } else {
            char* cast17 = (char*)&(_str);
            char* c18 = _str_1;
            unsigned int c19 = 23;
            char* cast20 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast17, c18, c19, cast20);
          }
          _Bool std21;
          __VERIFIER_nondet_memory(&std21, sizeof(std21));
          if (std21) {
          } else {
            char* cast22 = (char*)&(_str_2);
            char* c23 = _str_1;
            unsigned int c24 = 24;
            char* cast25 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast22, c23, c24, cast25);
          }
          char* cast26 = (char*)&(_str_3);
          struct std__basic_ostream_char__std__char_traits_char__* std27;
          __VERIFIER_nondet_memory(&std27, sizeof(std27));
            struct std___List_iterator_int_ ref_tmp428;
            struct std___List_iterator_int_ ref_tmp529;
            struct std___List_iterator_int_ agg_tmp030;
            struct std___List_iterator_int_ std31;
            __VERIFIER_nondet_memory(&std31, sizeof(std31));
            ref_tmp428 = std31;
            struct std___List_iterator_int_* std32;
            __VERIFIER_nondet_memory(&std32, sizeof(std32));
            while (1) {
              struct std___List_iterator_int_ std34;
              __VERIFIER_nondet_memory(&std34, sizeof(std34));
              ref_tmp529 = std34;
              _Bool std35;
              __VERIFIER_nondet_memory(&std35, sizeof(std35));
              _Bool u36 = !std35;
              if (!u36) break;
              char* cast37 = (char*)&(_str_4);
              struct std__basic_ostream_char__std__char_traits_char__* std38;
              __VERIFIER_nondet_memory(&std38, sizeof(std38));
              int* std39;
              __VERIFIER_nondet_memory(&std39, sizeof(std39));
              int t40 = *std39;
              struct std__basic_ostream_char__std__char_traits_char__* std41;
              __VERIFIER_nondet_memory(&std41, sizeof(std41));
            for_step33: ;
              int c42 = 0;
              struct std___List_iterator_int_ std43;
              __VERIFIER_nondet_memory(&std43, sizeof(std43));
              agg_tmp030 = std43;
            }
          char* cast44 = (char*)&(_str_5);
          struct std__basic_ostream_char__std__char_traits_char__* std45;
          __VERIFIER_nondet_memory(&std45, sizeof(std45));
            struct std___List_iterator_int_ ref_tmp646;
            struct std___List_iterator_int_ ref_tmp747;
            struct std___List_iterator_int_ agg_tmp148;
            struct std___List_iterator_int_ std49;
            __VERIFIER_nondet_memory(&std49, sizeof(std49));
            ref_tmp646 = std49;
            struct std___List_iterator_int_* std50;
            __VERIFIER_nondet_memory(&std50, sizeof(std50));
            while (1) {
              struct std___List_iterator_int_ std52;
              __VERIFIER_nondet_memory(&std52, sizeof(std52));
              ref_tmp747 = std52;
              _Bool std53;
              __VERIFIER_nondet_memory(&std53, sizeof(std53));
              _Bool u54 = !std53;
              if (!u54) break;
              char* cast55 = (char*)&(_str_4);
              struct std__basic_ostream_char__std__char_traits_char__* std56;
              __VERIFIER_nondet_memory(&std56, sizeof(std56));
              int* std57;
              __VERIFIER_nondet_memory(&std57, sizeof(std57));
              int t58 = *std57;
              struct std__basic_ostream_char__std__char_traits_char__* std59;
              __VERIFIER_nondet_memory(&std59, sizeof(std59));
            for_step51: ;
              int c60 = 0;
              struct std___List_iterator_int_ std61;
              __VERIFIER_nondet_memory(&std61, sizeof(std61));
              agg_tmp148 = std61;
            }
          struct std__basic_ostream_char__std__char_traits_char__* std62;
          __VERIFIER_nondet_memory(&std62, sizeof(std62));
          int c63 = 0;
          __retval1 = c63;
          int t64 = __retval1;
          int ret_val65 = t64;
          {
            // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
            __VERIFIER_nondet_memory(&second19, sizeof(second19));
          }
          {
            // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
            __VERIFIER_nondet_memory(&first18, sizeof(first18));
          }
          {
            // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
            __VERIFIER_nondet_memory(&second5, sizeof(second5));
          }
          {
            // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
            __VERIFIER_nondet_memory(&first2, sizeof(first2));
          }
          return ret_val65;
  int t66 = __retval1;
  return t66;
}

