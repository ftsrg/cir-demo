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
char _str[16] = "!mylist.empty()";
char _str_1[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_empty/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[37] = "mylist.empty()&&(mylist.size() == 0)";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[8] = "total: ";
char _str_4[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE5frontEv[76] = "reference std::list<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_5[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE9pop_frontEv[75] = "void std::list<int>::pop_front() [_Tp = int, _Alloc = std::allocator<int>]";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__list_int__std__allocator_int__ mylist2;
  int sum3;
  int c4 = 0;
  __retval1 = c4;
  // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list()
  __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    int c5 = 0;
    sum3 = c5;
      int i6;
      int c7 = 1;
      i6 = c7;
      while (1) {
        int t9 = i6;
        int c10 = 10;
        _Bool c11 = ((t9 <= c10)) ? 1 : 0;
        if (!c11) break;
        // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_back(int const&)
        __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
        __VERIFIER_nondet_memory(&i6, sizeof(i6));
      for_step8: ;
        int t12 = i6;
        int u13 = t12 + 1;
        i6 = u13;
      }
    _Bool std14;
    __VERIFIER_nondet_memory(&std14, sizeof(std14));
    _Bool u15 = !std14;
    if (u15) {
    } else {
      char* cast16 = (char*)&(_str);
      char* c17 = _str_1;
      unsigned int c18 = 21;
      char* cast19 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast16, c17, c18, cast19);
    }
      while (1) {
        _Bool std20;
        __VERIFIER_nondet_memory(&std20, sizeof(std20));
        _Bool u21 = !std20;
        if (!u21) break;
          int* std22;
          __VERIFIER_nondet_memory(&std22, sizeof(std22));
          int t23 = *std22;
          int t24 = sum3;
          int b25 = t24 + t23;
          sum3 = b25;
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::pop_front()
          __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
      }
    _Bool std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    _Bool ternary27;
    if (std26) {
      unsigned long std28 = __VERIFIER_nondet_unsigned_long();
      unsigned long c29 = 0;
      _Bool c30 = ((std28 == c29)) ? 1 : 0;
      ternary27 = (_Bool)c30;
    } else {
      _Bool c31 = 0;
      ternary27 = (_Bool)c31;
    }
    if (ternary27) {
    } else {
      char* cast32 = (char*)&(_str_2);
      char* c33 = _str_1;
      unsigned int c34 = 27;
      char* cast35 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast32, c33, c34, cast35);
    }
    char* cast36 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std37;
    __VERIFIER_nondet_memory(&std37, sizeof(std37));
    int t38 = sum3;
    struct std__basic_ostream_char__std__char_traits_char__* std39;
    __VERIFIER_nondet_memory(&std39, sizeof(std39));
    struct std__basic_ostream_char__std__char_traits_char__* std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    int c41 = 0;
    __retval1 = c41;
    int t42 = __retval1;
    int ret_val43 = t42;
    {
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
      __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    }
    return ret_val43;
  int t44 = __retval1;
  return t44;
}

