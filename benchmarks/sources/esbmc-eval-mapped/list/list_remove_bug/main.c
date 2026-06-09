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
int __const_main_myints[4] = {17, 89, 7, 14};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[19] = "mylist.size() != 3";
char _str_1[108] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_remove_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[9] = "*it != 7";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[17] = "mylist contains:";
char _str_4[2] = " ";
char _str_5[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv[75] = "reference std::list<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[15] = "!this->empty()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  int myints2[4];
  struct std____cxx11__list_int__std__allocator_int__ mylist3;
  struct std__allocator_int_ ref_tmp04;
  struct std___List_iterator_int_ it5;
  int ref_tmp16;
  struct std___List_iterator_int_ ref_tmp27;
  struct std___List_iterator_int_ agg_tmp08;
  int c9 = 0;
  __retval1 = c9;
  // array copy
  __builtin_memcpy(myints2, __const_main_myints, (unsigned long)4 * sizeof(__const_main_myints[0]));
  int* cast10 = (int*)&(myints2);
  int* cast11 = (int*)&(myints2);
  int c12 = 4;
  int* ptr13 = &(cast11)[c12];
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list<int*, void>(int*, int*, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&mylist3, sizeof(mylist3));
    __VERIFIER_nondet_memory(cast10, sizeof(*cast10));
    __VERIFIER_nondet_memory(ptr13, sizeof(*ptr13));
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
  }
    // externalized std:: op: std::_List_iterator<int>::_List_iterator()
    __VERIFIER_nondet_memory(&it5, sizeof(it5));
    int c14 = 89;
    ref_tmp16 = c14;
    unsigned long std15 = __VERIFIER_nondet_unsigned_long();
    unsigned long std16 = __VERIFIER_nondet_unsigned_long();
    unsigned long c17 = 3;
    _Bool c18 = ((std16 != c17)) ? 1 : 0;
    if (c18) {
    } else {
      char* cast19 = (char*)&(_str);
      char* c20 = _str_1;
      unsigned int c21 = 21;
      char* cast22 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast19, c20, c21, cast22);
    }
    struct std___List_iterator_int_ std23;
    __VERIFIER_nondet_memory(&std23, sizeof(std23));
    ref_tmp27 = std23;
    struct std___List_iterator_int_* std24;
    __VERIFIER_nondet_memory(&std24, sizeof(std24));
    int c25 = 0;
    struct std___List_iterator_int_ std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    agg_tmp08 = std26;
    int* std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    int t28 = *std27;
    int c29 = 7;
    _Bool c30 = ((t28 != c29)) ? 1 : 0;
    if (c30) {
    } else {
      char* cast31 = (char*)&(_str_2);
      char* c32 = _str_1;
      unsigned int c33 = 23;
      char* cast34 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast31, c32, c33, cast34);
    }
    char* cast35 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std36;
    __VERIFIER_nondet_memory(&std36, sizeof(std36));
      struct std___List_iterator_int_ it37;
      struct std___List_iterator_int_ ref_tmp338;
      struct std___List_iterator_int_ std39;
      __VERIFIER_nondet_memory(&std39, sizeof(std39));
      it37 = std39;
      while (1) {
        struct std___List_iterator_int_ std41;
        __VERIFIER_nondet_memory(&std41, sizeof(std41));
        ref_tmp338 = std41;
        _Bool std42;
        __VERIFIER_nondet_memory(&std42, sizeof(std42));
        _Bool u43 = !std42;
        if (!u43) break;
        char* cast44 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* std45;
        __VERIFIER_nondet_memory(&std45, sizeof(std45));
        int* std46;
        __VERIFIER_nondet_memory(&std46, sizeof(std46));
        int t47 = *std46;
        struct std__basic_ostream_char__std__char_traits_char__* std48;
        __VERIFIER_nondet_memory(&std48, sizeof(std48));
      for_step40: ;
        struct std___List_iterator_int_* std49;
        __VERIFIER_nondet_memory(&std49, sizeof(std49));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std50;
    __VERIFIER_nondet_memory(&std50, sizeof(std50));
    int c51 = 0;
    __retval1 = c51;
    int t52 = __retval1;
    int ret_val53 = t52;
    {
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
      __VERIFIER_nondet_memory(&mylist3, sizeof(mylist3));
    }
    return ret_val53;
  int t54 = __retval1;
  return t54;
}

