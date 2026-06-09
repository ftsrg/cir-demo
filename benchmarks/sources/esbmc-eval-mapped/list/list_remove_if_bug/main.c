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
struct std__bidirectional_iterator_tag { unsigned char __field0; };
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
int __const_main_myints[8] = {15, 36, 7, 17, 20, 39, 4, 1};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[19] = "mylist.size() != 5";
char _str_1[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_remove_if_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[10] = "*it != 17";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[17] = "mylist contains:";
char _str_4[2] = " ";
char _str_5[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv[75] = "reference std::list<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[15] = "!this->empty()";
_Bool single_digit(int* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: _Z12single_digitRKi
_Bool single_digit(int* v0) {
bb1:
  int* value2;
  _Bool __retval3;
  value2 = v0;
  int* t4 = value2;
  int t5 = *t4;
  int c6 = 10;
  _Bool c7 = ((t5 < c6)) ? 1 : 0;
  __retval3 = c7;
  _Bool t8 = __retval3;
  return t8;
}

// function: main
int main() {
bb9:
  int __retval10;
  int myints11[8];
  struct std____cxx11__list_int__std__allocator_int__ mylist12;
  struct std__allocator_int_ ref_tmp013;
  struct std___List_iterator_int_ it14;
  struct std___List_iterator_int_ ref_tmp115;
  int c16 = 0;
  __retval10 = c16;
  // array copy
  __builtin_memcpy(myints11, __const_main_myints, (unsigned long)8 * sizeof(__const_main_myints[0]));
  int* cast17 = (int*)&(myints11);
  int* cast18 = (int*)&(myints11);
  int c19 = 8;
  int* ptr20 = &(cast18)[c19];
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp013, sizeof(ref_tmp013));
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list<int*, void>(int*, int*, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&mylist12, sizeof(mylist12));
    __VERIFIER_nondet_memory(cast17, sizeof(*cast17));
    __VERIFIER_nondet_memory(ptr20, sizeof(*ptr20));
    __VERIFIER_nondet_memory(&ref_tmp013, sizeof(ref_tmp013));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp013, sizeof(ref_tmp013));
  }
    // externalized std:: op: std::_List_iterator<int>::_List_iterator()
    __VERIFIER_nondet_memory(&it14, sizeof(it14));
    unsigned long std21 = __VERIFIER_nondet_unsigned_long();
    unsigned long std22 = __VERIFIER_nondet_unsigned_long();
    unsigned long c23 = 5;
    _Bool c24 = ((std22 != c23)) ? 1 : 0;
    if (c24) {
    } else {
      char* cast25 = (char*)&(_str);
      char* c26 = _str_1;
      unsigned int c27 = 31;
      char* cast28 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast25, c26, c27, cast28);
    }
    struct std___List_iterator_int_ std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    ref_tmp115 = std29;
    struct std___List_iterator_int_* std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
    int c31 = 2;
    // externalized std:: op: void std::advance<std::_List_iterator<int>, int>(std::_List_iterator<int>&, int)
    __VERIFIER_nondet_memory(&it14, sizeof(it14));
    int* std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    int t33 = *std32;
    int c34 = 17;
    _Bool c35 = ((t33 != c34)) ? 1 : 0;
    if (c35) {
    } else {
      char* cast36 = (char*)&(_str_2);
      char* c37 = _str_1;
      unsigned int c38 = 34;
      char* cast39 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast36, c37, c38, cast39);
    }
    char* cast40 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
      struct std___List_iterator_int_ it42;
      struct std___List_iterator_int_ ref_tmp243;
      struct std___List_iterator_int_ std44;
      __VERIFIER_nondet_memory(&std44, sizeof(std44));
      it42 = std44;
      while (1) {
        struct std___List_iterator_int_ std46;
        __VERIFIER_nondet_memory(&std46, sizeof(std46));
        ref_tmp243 = std46;
        _Bool std47;
        __VERIFIER_nondet_memory(&std47, sizeof(std47));
        _Bool u48 = !std47;
        if (!u48) break;
        char* cast49 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* std50;
        __VERIFIER_nondet_memory(&std50, sizeof(std50));
        int* std51;
        __VERIFIER_nondet_memory(&std51, sizeof(std51));
        int t52 = *std51;
        struct std__basic_ostream_char__std__char_traits_char__* std53;
        __VERIFIER_nondet_memory(&std53, sizeof(std53));
      for_step45: ;
        struct std___List_iterator_int_* std54;
        __VERIFIER_nondet_memory(&std54, sizeof(std54));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std55;
    __VERIFIER_nondet_memory(&std55, sizeof(std55));
    int c56 = 0;
    __retval10 = c56;
    int t57 = __retval10;
    int ret_val58 = t57;
    {
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
      __VERIFIER_nondet_memory(&mylist12, sizeof(mylist12));
    }
    return ret_val58;
  int t59 = __retval10;
  return t59;
}

