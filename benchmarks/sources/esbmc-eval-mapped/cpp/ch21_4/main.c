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
struct __gnu_cxx____aligned_membuf_int_ { unsigned char _M_storage[4]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___List_const_iterator_int_ { struct std____detail___List_node_base* _M_node; };
struct std___List_iterator_int_ { struct std____detail___List_node_base* _M_node; };
struct std____allocated_ptr_std__allocator_std___List_node_int___ { struct std__allocator_std___List_node_int__* _M_alloc; struct std___List_node_int_* _M_ptr; };
struct std____cxx11__list_int__std__allocator_int_____Finalize_merge { struct std____cxx11__list_int__std__allocator_int__* _M_dest; struct std____cxx11__list_int__std__allocator_int__* _M_src; struct std___List_iterator_int_* _M_next; };
struct std____detail___List_node_base { struct std____detail___List_node_base* _M_next; struct std____detail___List_node_base* _M_prev; };
struct std____detail___List_size { unsigned long _M_size; };
struct std____false_type { unsigned char __field0; };
struct std____list___Scratch_list_std____detail___List_node_base_ { struct std____detail___List_node_base __field0; };
struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_int___void_ { unsigned char __field0; };
struct std____new_allocator_int_;
struct std____new_allocator_std___List_node_int__;
struct std__allocator_int_ { unsigned char __field0; };
struct std__allocator_std___List_node_int__ { unsigned char __field0; };
struct std__bidirectional_iterator_tag { unsigned char __field0; };
struct std__input_iterator_tag { unsigned char __field0; };
struct std__iterator_std__output_iterator_tag__void__void__void__void_;
struct std__ostream_iterator_int__char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__* _M_stream; char* _M_string; };
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
int __const_main_array[4] = {2, 6, 4, 8};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[18] = "values contains: ";
char _str_1[33] = "\nvalues after sorting contains: ";
char _str_2[38] = "\nAfter insert, otherValues contains: ";
char _str_3[33] = "\nAfter splice, values contains: ";
char _str_4[31] = "\nAfter sort, values contains: ";
char _str_5[35] = "\nAfter merge:\n   values contains: ";
char _str_6[27] = "\n   otherValues contains: ";
char _str_7[31] = "\nAfter pop_front and pop_back:";
char _str_8[22] = "\n   values contains: ";
char _str_9[33] = "\nAfter unique, values contains: ";
char _str_10[34] = "\nAfter swap:\n   values contains: ";
char _str_11[33] = "\nAfter assign, values contains: ";
char _str_12[32] = "\nAfter merge, values contains: ";
char _str_13[38] = "\nAfter remove( 4 ), values contains: ";
char _str_14[14] = "List is empty";
char _str_15[2] = " ";
char _str_16[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv[75] = "reference std::list<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_17[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE9pop_frontEv[75] = "void std::list<int>::pop_front() [_Tp = int, _Alloc = std::allocator<int>]";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE8pop_backEv[74] = "void std::list<int>::pop_back() [_Tp = int, _Alloc = std::allocator<int>]";
void void_printList_int_(struct std____cxx11__list_int__std__allocator_int__* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: _Z9printListIiEvRKNSt7__cxx114listIT_SaIS2_EEE
void void_printList_int_(struct std____cxx11__list_int__std__allocator_int__* v0) {
bb1:
  struct std____cxx11__list_int__std__allocator_int__* listRef2;
  listRef2 = v0;
    struct std____cxx11__list_int__std__allocator_int__* t3 = listRef2;
    _Bool std4;
    __VERIFIER_nondet_memory(&std4, sizeof(std4));
    if (std4) {
      char* cast5 = (char*)&(_str_14);
      struct std__basic_ostream_char__std__char_traits_char__* std6;
      __VERIFIER_nondet_memory(&std6, sizeof(std6));
    } else {
      struct std__ostream_iterator_int__char__std__char_traits_char__ output7;
      struct std___List_const_iterator_int_ agg_tmp08;
      struct std___List_const_iterator_int_ agg_tmp19;
      struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp210;
      struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp311;
      char* cast12 = (char*)&(_str_15);
      // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream&, char const*)
      __VERIFIER_nondet_memory(&output7, sizeof(output7));
      __VERIFIER_nondet_memory(&_ZSt4cout, sizeof(*&_ZSt4cout));
      __VERIFIER_nondet_memory(cast12, sizeof(*cast12));
      struct std____cxx11__list_int__std__allocator_int__* t13 = listRef2;
      struct std___List_const_iterator_int_ std14;
      __VERIFIER_nondet_memory(&std14, sizeof(std14));
      agg_tmp08 = std14;
      struct std____cxx11__list_int__std__allocator_int__* t15 = listRef2;
      struct std___List_const_iterator_int_ std16;
      __VERIFIER_nondet_memory(&std16, sizeof(std16));
      agg_tmp19 = std16;
      // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
      __VERIFIER_nondet_memory(&agg_tmp210, sizeof(agg_tmp210));
      __VERIFIER_nondet_memory(&output7, sizeof(output7));
      struct std___List_const_iterator_int_ t17 = agg_tmp08;
      struct std___List_const_iterator_int_ t18 = agg_tmp19;
      struct std__ostream_iterator_int__char__std__char_traits_char__ t19 = agg_tmp210;
      struct std__ostream_iterator_int__char__std__char_traits_char__ std20;
      __VERIFIER_nondet_memory(&std20, sizeof(std20));
      agg_tmp311 = std20;
    }
  return;
}

// function: main
int main() {
bb21:
  int __retval22;
  int SIZE23;
  int array24[4];
  struct std____cxx11__list_int__std__allocator_int__ values25;
  struct std____cxx11__list_int__std__allocator_int__ otherValues26;
  int ref_tmp027;
  int ref_tmp128;
  int ref_tmp229;
  int ref_tmp330;
  struct std___List_const_iterator_int_ agg_tmp031;
  struct std___List_iterator_int_ ref_tmp432;
  struct std___List_iterator_int_ agg_tmp133;
  struct std___List_const_iterator_int_ agg_tmp234;
  struct std___List_iterator_int_ ref_tmp535;
  struct std___List_const_iterator_int_ agg_tmp336;
  struct std___List_iterator_int_ ref_tmp637;
  struct std___List_iterator_int_ agg_tmp438;
  struct std___List_iterator_int_ agg_tmp539;
  struct std___List_iterator_int_ agg_tmp640;
  int ref_tmp741;
  int c42 = 0;
  __retval22 = c42;
  int c43 = 4;
  SIZE23 = c43;
  // array copy
  __builtin_memcpy(array24, __const_main_array, (unsigned long)4 * sizeof(__const_main_array[0]));
  // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list()
  __VERIFIER_nondet_memory(&values25, sizeof(values25));
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list()
    __VERIFIER_nondet_memory(&otherValues26, sizeof(otherValues26));
      int c44 = 1;
      ref_tmp027 = c44;
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_front(int&&)
      __VERIFIER_nondet_memory(&values25, sizeof(values25));
      __VERIFIER_nondet_memory(&ref_tmp027, sizeof(ref_tmp027));
      int c45 = 2;
      ref_tmp128 = c45;
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_front(int&&)
      __VERIFIER_nondet_memory(&values25, sizeof(values25));
      __VERIFIER_nondet_memory(&ref_tmp128, sizeof(ref_tmp128));
      int c46 = 4;
      ref_tmp229 = c46;
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_back(int&&)
      __VERIFIER_nondet_memory(&values25, sizeof(values25));
      __VERIFIER_nondet_memory(&ref_tmp229, sizeof(ref_tmp229));
      int c47 = 3;
      ref_tmp330 = c47;
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_back(int&&)
      __VERIFIER_nondet_memory(&values25, sizeof(values25));
      __VERIFIER_nondet_memory(&ref_tmp330, sizeof(ref_tmp330));
      char* cast48 = (char*)&(_str);
      struct std__basic_ostream_char__std__char_traits_char__* std49;
      __VERIFIER_nondet_memory(&std49, sizeof(std49));
      void_printList_int_(&values25);
      if (__cir_exc_active) {
        {
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
          __VERIFIER_nondet_memory(&otherValues26, sizeof(otherValues26));
        }
        {
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
          __VERIFIER_nondet_memory(&values25, sizeof(values25));
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::sort()
      __VERIFIER_nondet_memory(&values25, sizeof(values25));
      char* cast50 = (char*)&(_str_1);
      struct std__basic_ostream_char__std__char_traits_char__* std51;
      __VERIFIER_nondet_memory(&std51, sizeof(std51));
      void_printList_int_(&values25);
      if (__cir_exc_active) {
        {
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
          __VERIFIER_nondet_memory(&otherValues26, sizeof(otherValues26));
        }
        {
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
          __VERIFIER_nondet_memory(&values25, sizeof(values25));
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      struct std___List_iterator_int_ std52;
      __VERIFIER_nondet_memory(&std52, sizeof(std52));
      ref_tmp432 = std52;
      // externalized std:: op: std::_List_const_iterator<int>::_List_const_iterator(std::_List_iterator<int> const&)
      __VERIFIER_nondet_memory(&agg_tmp031, sizeof(agg_tmp031));
      __VERIFIER_nondet_memory(&ref_tmp432, sizeof(ref_tmp432));
      int* cast53 = (int*)&(array24);
      int* cast54 = (int*)&(array24);
      int t55 = SIZE23;
      int* ptr56 = &(cast54)[t55];
      struct std___List_const_iterator_int_ t57 = agg_tmp031;
      struct std___List_iterator_int_ std58;
      __VERIFIER_nondet_memory(&std58, sizeof(std58));
      agg_tmp133 = std58;
      char* cast59 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* std60;
      __VERIFIER_nondet_memory(&std60, sizeof(std60));
      void_printList_int_(&otherValues26);
      if (__cir_exc_active) {
        {
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
          __VERIFIER_nondet_memory(&otherValues26, sizeof(otherValues26));
        }
        {
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
          __VERIFIER_nondet_memory(&values25, sizeof(values25));
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      struct std___List_iterator_int_ std61;
      __VERIFIER_nondet_memory(&std61, sizeof(std61));
      ref_tmp535 = std61;
      // externalized std:: op: std::_List_const_iterator<int>::_List_const_iterator(std::_List_iterator<int> const&)
      __VERIFIER_nondet_memory(&agg_tmp234, sizeof(agg_tmp234));
      __VERIFIER_nondet_memory(&ref_tmp535, sizeof(ref_tmp535));
      struct std___List_const_iterator_int_ t62 = agg_tmp234;
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::splice(std::_List_const_iterator<int>, std::__cxx11::list<int, std::allocator<int> >&)
      __VERIFIER_nondet_memory(&values25, sizeof(values25));
      __VERIFIER_nondet_memory(&otherValues26, sizeof(otherValues26));
      char* cast63 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* std64;
      __VERIFIER_nondet_memory(&std64, sizeof(std64));
      void_printList_int_(&values25);
      if (__cir_exc_active) {
        {
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
          __VERIFIER_nondet_memory(&otherValues26, sizeof(otherValues26));
        }
        {
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
          __VERIFIER_nondet_memory(&values25, sizeof(values25));
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::sort()
      __VERIFIER_nondet_memory(&values25, sizeof(values25));
      char* cast65 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* std66;
      __VERIFIER_nondet_memory(&std66, sizeof(std66));
      void_printList_int_(&values25);
      if (__cir_exc_active) {
        {
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
          __VERIFIER_nondet_memory(&otherValues26, sizeof(otherValues26));
        }
        {
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
          __VERIFIER_nondet_memory(&values25, sizeof(values25));
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      struct std___List_iterator_int_ std67;
      __VERIFIER_nondet_memory(&std67, sizeof(std67));
      ref_tmp637 = std67;
      // externalized std:: op: std::_List_const_iterator<int>::_List_const_iterator(std::_List_iterator<int> const&)
      __VERIFIER_nondet_memory(&agg_tmp336, sizeof(agg_tmp336));
      __VERIFIER_nondet_memory(&ref_tmp637, sizeof(ref_tmp637));
      int* cast68 = (int*)&(array24);
      int* cast69 = (int*)&(array24);
      int t70 = SIZE23;
      int* ptr71 = &(cast69)[t70];
      struct std___List_const_iterator_int_ t72 = agg_tmp336;
      struct std___List_iterator_int_ std73;
      __VERIFIER_nondet_memory(&std73, sizeof(std73));
      agg_tmp438 = std73;
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::sort()
      __VERIFIER_nondet_memory(&otherValues26, sizeof(otherValues26));
      char* cast74 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* std75;
      __VERIFIER_nondet_memory(&std75, sizeof(std75));
      void_printList_int_(&otherValues26);
      if (__cir_exc_active) {
        {
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
          __VERIFIER_nondet_memory(&otherValues26, sizeof(otherValues26));
        }
        {
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
          __VERIFIER_nondet_memory(&values25, sizeof(values25));
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::merge(std::__cxx11::list<int, std::allocator<int> >&)
      __VERIFIER_nondet_memory(&values25, sizeof(values25));
      __VERIFIER_nondet_memory(&otherValues26, sizeof(otherValues26));
      char* cast76 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* std77;
      __VERIFIER_nondet_memory(&std77, sizeof(std77));
      void_printList_int_(&values25);
      if (__cir_exc_active) {
        {
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
          __VERIFIER_nondet_memory(&otherValues26, sizeof(otherValues26));
        }
        {
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
          __VERIFIER_nondet_memory(&values25, sizeof(values25));
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      char* cast78 = (char*)&(_str_6);
      struct std__basic_ostream_char__std__char_traits_char__* std79;
      __VERIFIER_nondet_memory(&std79, sizeof(std79));
      void_printList_int_(&otherValues26);
      if (__cir_exc_active) {
        {
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
          __VERIFIER_nondet_memory(&otherValues26, sizeof(otherValues26));
        }
        {
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
          __VERIFIER_nondet_memory(&values25, sizeof(values25));
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::pop_front()
      __VERIFIER_nondet_memory(&values25, sizeof(values25));
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::pop_back()
      __VERIFIER_nondet_memory(&values25, sizeof(values25));
      char* cast80 = (char*)&(_str_7);
      struct std__basic_ostream_char__std__char_traits_char__* std81;
      __VERIFIER_nondet_memory(&std81, sizeof(std81));
      char* cast82 = (char*)&(_str_8);
      struct std__basic_ostream_char__std__char_traits_char__* std83;
      __VERIFIER_nondet_memory(&std83, sizeof(std83));
      void_printList_int_(&values25);
      if (__cir_exc_active) {
        {
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
          __VERIFIER_nondet_memory(&otherValues26, sizeof(otherValues26));
        }
        {
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
          __VERIFIER_nondet_memory(&values25, sizeof(values25));
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      unsigned long std84 = __VERIFIER_nondet_unsigned_long();
      char* cast85 = (char*)&(_str_9);
      struct std__basic_ostream_char__std__char_traits_char__* std86;
      __VERIFIER_nondet_memory(&std86, sizeof(std86));
      void_printList_int_(&values25);
      if (__cir_exc_active) {
        {
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
          __VERIFIER_nondet_memory(&otherValues26, sizeof(otherValues26));
        }
        {
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
          __VERIFIER_nondet_memory(&values25, sizeof(values25));
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::swap(std::__cxx11::list<int, std::allocator<int> >&)
      __VERIFIER_nondet_memory(&values25, sizeof(values25));
      __VERIFIER_nondet_memory(&otherValues26, sizeof(otherValues26));
      char* cast87 = (char*)&(_str_10);
      struct std__basic_ostream_char__std__char_traits_char__* std88;
      __VERIFIER_nondet_memory(&std88, sizeof(std88));
      void_printList_int_(&values25);
      if (__cir_exc_active) {
        {
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
          __VERIFIER_nondet_memory(&otherValues26, sizeof(otherValues26));
        }
        {
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
          __VERIFIER_nondet_memory(&values25, sizeof(values25));
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      char* cast89 = (char*)&(_str_6);
      struct std__basic_ostream_char__std__char_traits_char__* std90;
      __VERIFIER_nondet_memory(&std90, sizeof(std90));
      void_printList_int_(&otherValues26);
      if (__cir_exc_active) {
        {
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
          __VERIFIER_nondet_memory(&otherValues26, sizeof(otherValues26));
        }
        {
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
          __VERIFIER_nondet_memory(&values25, sizeof(values25));
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      struct std___List_iterator_int_ std91;
      __VERIFIER_nondet_memory(&std91, sizeof(std91));
      agg_tmp539 = std91;
      struct std___List_iterator_int_ std92;
      __VERIFIER_nondet_memory(&std92, sizeof(std92));
      agg_tmp640 = std92;
      struct std___List_iterator_int_ t93 = agg_tmp539;
      struct std___List_iterator_int_ t94 = agg_tmp640;
      // externalized std:: op: void std::__cxx11::list<int, std::allocator<int> >::assign<std::_List_iterator<int>, void>(std::_List_iterator<int>, std::_List_iterator<int>)
      __VERIFIER_nondet_memory(&values25, sizeof(values25));
      char* cast95 = (char*)&(_str_11);
      struct std__basic_ostream_char__std__char_traits_char__* std96;
      __VERIFIER_nondet_memory(&std96, sizeof(std96));
      void_printList_int_(&values25);
      if (__cir_exc_active) {
        {
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
          __VERIFIER_nondet_memory(&otherValues26, sizeof(otherValues26));
        }
        {
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
          __VERIFIER_nondet_memory(&values25, sizeof(values25));
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::merge(std::__cxx11::list<int, std::allocator<int> >&)
      __VERIFIER_nondet_memory(&values25, sizeof(values25));
      __VERIFIER_nondet_memory(&otherValues26, sizeof(otherValues26));
      char* cast97 = (char*)&(_str_12);
      struct std__basic_ostream_char__std__char_traits_char__* std98;
      __VERIFIER_nondet_memory(&std98, sizeof(std98));
      void_printList_int_(&values25);
      if (__cir_exc_active) {
        {
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
          __VERIFIER_nondet_memory(&otherValues26, sizeof(otherValues26));
        }
        {
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
          __VERIFIER_nondet_memory(&values25, sizeof(values25));
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      int c99 = 4;
      ref_tmp741 = c99;
      unsigned long std100 = __VERIFIER_nondet_unsigned_long();
      char* cast101 = (char*)&(_str_13);
      struct std__basic_ostream_char__std__char_traits_char__* std102;
      __VERIFIER_nondet_memory(&std102, sizeof(std102));
      void_printList_int_(&values25);
      if (__cir_exc_active) {
        {
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
          __VERIFIER_nondet_memory(&otherValues26, sizeof(otherValues26));
        }
        {
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
          __VERIFIER_nondet_memory(&values25, sizeof(values25));
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      struct std__basic_ostream_char__std__char_traits_char__* std103;
      __VERIFIER_nondet_memory(&std103, sizeof(std103));
      int c104 = 0;
      __retval22 = c104;
      int t105 = __retval22;
      int ret_val106 = t105;
      {
        // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
        __VERIFIER_nondet_memory(&otherValues26, sizeof(otherValues26));
      }
      {
        // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
        __VERIFIER_nondet_memory(&values25, sizeof(values25));
      }
      return ret_val106;
  int t107 = __retval22;
  return t107;
}

