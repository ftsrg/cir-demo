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
struct std___List_iterator_int_ { struct std____detail___List_node_base* _M_node; };
struct std____allocated_ptr_std__allocator_std___List_node_int___ { struct std__allocator_std___List_node_int__* _M_alloc; struct std___List_node_int_* _M_ptr; };
struct std____detail___List_node_base { struct std____detail___List_node_base* _M_next; struct std____detail___List_node_base* _M_prev; };
struct std____detail___List_size { unsigned long _M_size; };
struct std____new_allocator_std___List_node_int__;
struct std__allocator_std___List_node_int__;
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
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[17] = "mylist contains:";
char _str_1[2] = " ";
char _str_2[19] = "mylist.size() == 3";
char _str_3[107] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_clear_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[19] = "mylist.size() != 0";
char _str_5[19] = "mylist.size() == 2";
char _str_6[18] = "\nmylist contains:";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__list_int__std__allocator_int__ mylist2;
  struct std___List_iterator_int_ it3;
  int ref_tmp04;
  int ref_tmp15;
  int ref_tmp26;
  int ref_tmp57;
  int ref_tmp68;
  int c9 = 0;
  __retval1 = c9;
  // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list()
  __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    // externalized std:: op: std::_List_iterator<int>::_List_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    int c10 = 100;
    ref_tmp04 = c10;
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    int c11 = 200;
    ref_tmp15 = c11;
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    int c12 = 300;
    ref_tmp26 = c12;
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    __VERIFIER_nondet_memory(&ref_tmp26, sizeof(ref_tmp26));
    char* cast13 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std14;
    __VERIFIER_nondet_memory(&std14, sizeof(std14));
      struct std___List_iterator_int_ ref_tmp315;
      struct std___List_iterator_int_ ref_tmp416;
      struct std___List_iterator_int_ std17;
      __VERIFIER_nondet_memory(&std17, sizeof(std17));
      ref_tmp315 = std17;
      struct std___List_iterator_int_* std18;
      __VERIFIER_nondet_memory(&std18, sizeof(std18));
      while (1) {
        struct std___List_iterator_int_ std20;
        __VERIFIER_nondet_memory(&std20, sizeof(std20));
        ref_tmp416 = std20;
        _Bool std21;
        __VERIFIER_nondet_memory(&std21, sizeof(std21));
        _Bool u22 = !std21;
        if (!u22) break;
        char* cast23 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std24;
        __VERIFIER_nondet_memory(&std24, sizeof(std24));
        int* std25;
        __VERIFIER_nondet_memory(&std25, sizeof(std25));
        int t26 = *std25;
        struct std__basic_ostream_char__std__char_traits_char__* std27;
        __VERIFIER_nondet_memory(&std27, sizeof(std27));
      for_step19: ;
        struct std___List_iterator_int_* std28;
        __VERIFIER_nondet_memory(&std28, sizeof(std28));
      }
    unsigned long std29 = __VERIFIER_nondet_unsigned_long();
    unsigned long c30 = 3;
    _Bool c31 = ((std29 == c30)) ? 1 : 0;
    if (c31) {
    } else {
      char* cast32 = (char*)&(_str_2);
      char* c33 = _str_3;
      unsigned int c34 = 26;
      char* cast35 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast32, c33, c34, cast35);
    }
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::clear()
    __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    unsigned long std36 = __VERIFIER_nondet_unsigned_long();
    unsigned long c37 = 0;
    _Bool c38 = ((std36 != c37)) ? 1 : 0;
    if (c38) {
    } else {
      char* cast39 = (char*)&(_str_4);
      char* c40 = _str_3;
      unsigned int c41 = 28;
      char* cast42 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast39, c40, c41, cast42);
    }
    int c43 = 1101;
    ref_tmp57 = c43;
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    __VERIFIER_nondet_memory(&ref_tmp57, sizeof(ref_tmp57));
    int c44 = 2202;
    ref_tmp68 = c44;
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    __VERIFIER_nondet_memory(&ref_tmp68, sizeof(ref_tmp68));
    unsigned long std45 = __VERIFIER_nondet_unsigned_long();
    unsigned long c46 = 2;
    _Bool c47 = ((std45 == c46)) ? 1 : 0;
    if (c47) {
    } else {
      char* cast48 = (char*)&(_str_5);
      char* c49 = _str_3;
      unsigned int c50 = 31;
      char* cast51 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast48, c49, c50, cast51);
    }
    char* cast52 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* std53;
    __VERIFIER_nondet_memory(&std53, sizeof(std53));
      struct std___List_iterator_int_ ref_tmp754;
      struct std___List_iterator_int_ ref_tmp855;
      struct std___List_iterator_int_ std56;
      __VERIFIER_nondet_memory(&std56, sizeof(std56));
      ref_tmp754 = std56;
      struct std___List_iterator_int_* std57;
      __VERIFIER_nondet_memory(&std57, sizeof(std57));
      while (1) {
        struct std___List_iterator_int_ std59;
        __VERIFIER_nondet_memory(&std59, sizeof(std59));
        ref_tmp855 = std59;
        _Bool std60;
        __VERIFIER_nondet_memory(&std60, sizeof(std60));
        _Bool u61 = !std60;
        if (!u61) break;
        char* cast62 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std63;
        __VERIFIER_nondet_memory(&std63, sizeof(std63));
        int* std64;
        __VERIFIER_nondet_memory(&std64, sizeof(std64));
        int t65 = *std64;
        struct std__basic_ostream_char__std__char_traits_char__* std66;
        __VERIFIER_nondet_memory(&std66, sizeof(std66));
      for_step58: ;
        struct std___List_iterator_int_* std67;
        __VERIFIER_nondet_memory(&std67, sizeof(std67));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std68;
    __VERIFIER_nondet_memory(&std68, sizeof(std68));
    int c69 = 0;
    __retval1 = c69;
    int t70 = __retval1;
    int ret_val71 = t70;
    {
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
      __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    }
    return ret_val71;
  int t72 = __retval1;
  return t72;
}

