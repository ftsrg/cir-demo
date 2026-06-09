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
struct is_odd { unsigned char __field0; };
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
char _str_1[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/template/list_remove_if_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[10] = "*it != 17";
char _str_3[19] = "mylist.size() != 2";
char _str_4[10] = "*it != 20";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[17] = "mylist contains:";
char _str_6[2] = " ";
char _str_7[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv[75] = "reference std::list<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_8[15] = "!this->empty()";
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
  struct is_odd agg_tmp016;
  struct std___List_iterator_int_ ref_tmp217;
  struct std___List_iterator_int_ agg_tmp118;
  int c19 = 0;
  __retval10 = c19;
  // array copy
  __builtin_memcpy(myints11, __const_main_myints, (unsigned long)8 * sizeof(__const_main_myints[0]));
  int* cast20 = (int*)&(myints11);
  int* cast21 = (int*)&(myints11);
  int c22 = 8;
  int* ptr23 = &(cast21)[c22];
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp013, sizeof(ref_tmp013));
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list<int*, void>(int*, int*, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&mylist12, sizeof(mylist12));
    __VERIFIER_nondet_memory(cast20, sizeof(*cast20));
    __VERIFIER_nondet_memory(ptr23, sizeof(*ptr23));
    __VERIFIER_nondet_memory(&ref_tmp013, sizeof(ref_tmp013));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp013, sizeof(ref_tmp013));
  }
    // externalized std:: op: std::_List_iterator<int>::_List_iterator()
    __VERIFIER_nondet_memory(&it14, sizeof(it14));
    unsigned long std24 = __VERIFIER_nondet_unsigned_long();
    unsigned long std25 = __VERIFIER_nondet_unsigned_long();
    unsigned long c26 = 5;
    _Bool c27 = ((std25 != c26)) ? 1 : 0;
    if (c27) {
    } else {
      char* cast28 = (char*)&(_str);
      char* c29 = _str_1;
      unsigned int c30 = 31;
      char* cast31 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast28, c29, c30, cast31);
    }
    struct std___List_iterator_int_ std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    ref_tmp115 = std32;
    struct std___List_iterator_int_* std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    int c34 = 2;
    // externalized std:: op: void std::advance<std::_List_iterator<int>, int>(std::_List_iterator<int>&, int)
    __VERIFIER_nondet_memory(&it14, sizeof(it14));
    int* std35;
    __VERIFIER_nondet_memory(&std35, sizeof(std35));
    int t36 = *std35;
    int c37 = 17;
    _Bool c38 = ((t36 != c37)) ? 1 : 0;
    if (c38) {
    } else {
      char* cast39 = (char*)&(_str_2);
      char* c40 = _str_1;
      unsigned int c41 = 34;
      char* cast42 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast39, c40, c41, cast42);
    }
    struct is_odd t43 = agg_tmp016;
    unsigned long std44 = __VERIFIER_nondet_unsigned_long();
    unsigned long std45 = __VERIFIER_nondet_unsigned_long();
    unsigned long c46 = 2;
    _Bool c47 = ((std45 != c46)) ? 1 : 0;
    if (c47) {
    } else {
      char* cast48 = (char*)&(_str_3);
      char* c49 = _str_1;
      unsigned int c50 = 37;
      char* cast51 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast48, c49, c50, cast51);
    }
    struct std___List_iterator_int_ std52;
    __VERIFIER_nondet_memory(&std52, sizeof(std52));
    ref_tmp217 = std52;
    struct std___List_iterator_int_* std53;
    __VERIFIER_nondet_memory(&std53, sizeof(std53));
    int c54 = 0;
    struct std___List_iterator_int_ std55;
    __VERIFIER_nondet_memory(&std55, sizeof(std55));
    agg_tmp118 = std55;
    int* std56;
    __VERIFIER_nondet_memory(&std56, sizeof(std56));
    int t57 = *std56;
    int c58 = 20;
    _Bool c59 = ((t57 != c58)) ? 1 : 0;
    if (c59) {
    } else {
      char* cast60 = (char*)&(_str_4);
      char* c61 = _str_1;
      unsigned int c62 = 40;
      char* cast63 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast60, c61, c62, cast63);
    }
    char* cast64 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* std65;
    __VERIFIER_nondet_memory(&std65, sizeof(std65));
      struct std___List_iterator_int_ it66;
      struct std___List_iterator_int_ ref_tmp367;
      struct std___List_iterator_int_ std68;
      __VERIFIER_nondet_memory(&std68, sizeof(std68));
      it66 = std68;
      while (1) {
        struct std___List_iterator_int_ std70;
        __VERIFIER_nondet_memory(&std70, sizeof(std70));
        ref_tmp367 = std70;
        _Bool std71;
        __VERIFIER_nondet_memory(&std71, sizeof(std71));
        _Bool u72 = !std71;
        if (!u72) break;
        char* cast73 = (char*)&(_str_6);
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
    __retval10 = c80;
    int t81 = __retval10;
    int ret_val82 = t81;
    {
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
      __VERIFIER_nondet_memory(&mylist12, sizeof(mylist12));
    }
    return ret_val82;
  int t83 = __retval10;
  return t83;
}

