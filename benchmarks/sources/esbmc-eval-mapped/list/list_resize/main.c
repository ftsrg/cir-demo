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
struct std____detail___List_node_base { struct std____detail___List_node_base* _M_next; struct std____detail___List_node_base* _M_prev; };
struct std____detail___List_size { unsigned long _M_size; };
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
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[19] = "mylist.size() == 9";
char _str_1[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_resize/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[19] = "mylist.size() == 5";
char _str_3[19] = "mylist.size() == 8";
char _str_4[21] = "mylist.back() == 100";
char _str_5[20] = "mylist.size() == 12";
char _str_6[19] = "mylist.back() == 0";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_7[17] = "mylist contains:";
char _str_8[2] = " ";
char _str_9[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE8pop_backEv[74] = "void std::list<int>::pop_back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_10[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv[75] = "reference std::list<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__list_int__std__allocator_int__ mylist2;
  unsigned int i3;
  int ref_tmp14;
  int c5 = 0;
  __retval1 = c5;
  // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list()
  __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
      int ref_tmp06;
      unsigned int c7 = 1;
      i3 = c7;
      while (1) {
        unsigned int t9 = i3;
        unsigned int c10 = 10;
        _Bool c11 = ((t9 < c10)) ? 1 : 0;
        if (!c11) break;
        unsigned int t12 = i3;
        int cast13 = (int)t12;
        ref_tmp06 = cast13;
        // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_back(int&&)
        __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
        __VERIFIER_nondet_memory(&ref_tmp06, sizeof(ref_tmp06));
      for_step8: ;
        unsigned int t14 = i3;
        unsigned int u15 = t14 + 1;
        i3 = u15;
      }
    unsigned long std16 = __VERIFIER_nondet_unsigned_long();
    unsigned long c17 = 9;
    _Bool c18 = ((std16 == c17)) ? 1 : 0;
    if (c18) {
    } else {
      char* cast19 = (char*)&(_str);
      char* c20 = _str_1;
      unsigned int c21 = 22;
      char* cast22 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast19, c20, c21, cast22);
    }
    unsigned long c23 = 5;
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::resize(unsigned long)
    __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    unsigned long std24 = __VERIFIER_nondet_unsigned_long();
    unsigned long c25 = 5;
    _Bool c26 = ((std24 == c25)) ? 1 : 0;
    if (c26) {
    } else {
      char* cast27 = (char*)&(_str_2);
      char* c28 = _str_1;
      unsigned int c29 = 24;
      char* cast30 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast27, c28, c29, cast30);
    }
    unsigned long c31 = 8;
    int c32 = 100;
    ref_tmp14 = c32;
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::resize(unsigned long, int const&)
    __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
    unsigned long std33 = __VERIFIER_nondet_unsigned_long();
    unsigned long c34 = 8;
    _Bool c35 = ((std33 == c34)) ? 1 : 0;
    if (c35) {
    } else {
      char* cast36 = (char*)&(_str_3);
      char* c37 = _str_1;
      unsigned int c38 = 26;
      char* cast39 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast36, c37, c38, cast39);
    }
    int* std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    int t41 = *std40;
    int c42 = 100;
    _Bool c43 = ((t41 == c42)) ? 1 : 0;
    if (c43) {
    } else {
      char* cast44 = (char*)&(_str_4);
      char* c45 = _str_1;
      unsigned int c46 = 27;
      char* cast47 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast44, c45, c46, cast47);
    }
    unsigned long c48 = 12;
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::resize(unsigned long)
    __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    unsigned long std49 = __VERIFIER_nondet_unsigned_long();
    unsigned long c50 = 12;
    _Bool c51 = ((std49 == c50)) ? 1 : 0;
    if (c51) {
    } else {
      char* cast52 = (char*)&(_str_5);
      char* c53 = _str_1;
      unsigned int c54 = 29;
      char* cast55 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast52, c53, c54, cast55);
    }
    int* std56;
    __VERIFIER_nondet_memory(&std56, sizeof(std56));
    int t57 = *std56;
    int c58 = 0;
    _Bool c59 = ((t57 == c58)) ? 1 : 0;
    if (c59) {
    } else {
      char* cast60 = (char*)&(_str_6);
      char* c61 = _str_1;
      unsigned int c62 = 30;
      char* cast63 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast60, c61, c62, cast63);
    }
    char* cast64 = (char*)&(_str_7);
    struct std__basic_ostream_char__std__char_traits_char__* std65;
    __VERIFIER_nondet_memory(&std65, sizeof(std65));
      struct std___List_iterator_int_ it66;
      struct std___List_iterator_int_ ref_tmp267;
      struct std___List_iterator_int_ std68;
      __VERIFIER_nondet_memory(&std68, sizeof(std68));
      it66 = std68;
      while (1) {
        struct std___List_iterator_int_ std70;
        __VERIFIER_nondet_memory(&std70, sizeof(std70));
        ref_tmp267 = std70;
        _Bool std71;
        __VERIFIER_nondet_memory(&std71, sizeof(std71));
        _Bool u72 = !std71;
        if (!u72) break;
        char* cast73 = (char*)&(_str_8);
        struct std__basic_ostream_char__std__char_traits_char__* std74;
        __VERIFIER_nondet_memory(&std74, sizeof(std74));
        int* std75;
        __VERIFIER_nondet_memory(&std75, sizeof(std75));
        int t76 = *std75;
        struct std__basic_ostream_char__std__char_traits_char__* std77;
        __VERIFIER_nondet_memory(&std77, sizeof(std77));
      for_step69: ;
        struct std___List_iterator_int_* std78;
        __VERIFIER_nondet_memory(&std78, sizeof(std78));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std79;
    __VERIFIER_nondet_memory(&std79, sizeof(std79));
    int c80 = 0;
    __retval1 = c80;
    int t81 = __retval1;
    int ret_val82 = t81;
    {
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
      __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    }
    return ret_val82;
  int t83 = __retval1;
  return t83;
}

