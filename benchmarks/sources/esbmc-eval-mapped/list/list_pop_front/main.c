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
char _str[22] = "mylist.front() == 100";
char _str_1[107] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_pop_front/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[36] = "Popping out the elements in mylist:";
char _str_3[20] = "mylist.front() == n";
char _str_4[2] = " ";
char _str_5[15] = "mylist.empty()";
char _str_6[26] = "\nFinal size of mylist is ";
char _str_7[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE5frontEv[76] = "reference std::list<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_8[15] = "!this->empty()";
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
  int ref_tmp03;
  int ref_tmp14;
  int ref_tmp25;
  int n6;
  int c7 = 0;
  __retval1 = c7;
  // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list()
  __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    int c8 = 100;
    ref_tmp03 = c8;
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    int c9 = 200;
    ref_tmp14 = c9;
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
    int c10 = 300;
    ref_tmp25 = c10;
    // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    __VERIFIER_nondet_memory(&ref_tmp25, sizeof(ref_tmp25));
    int* std11;
    __VERIFIER_nondet_memory(&std11, sizeof(std11));
    int t12 = *std11;
    int c13 = 100;
    _Bool c14 = ((t12 == c13)) ? 1 : 0;
    if (c14) {
    } else {
      char* cast15 = (char*)&(_str);
      char* c16 = _str_1;
      unsigned int c17 = 20;
      char* cast18 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast15, c16, c17, cast18);
    }
    int c19 = 100;
    n6 = c19;
    char* cast20 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std21;
    __VERIFIER_nondet_memory(&std21, sizeof(std21));
      while (1) {
        _Bool std22;
        __VERIFIER_nondet_memory(&std22, sizeof(std22));
        _Bool u23 = !std22;
        if (!u23) break;
          int* std24;
          __VERIFIER_nondet_memory(&std24, sizeof(std24));
          int t25 = *std24;
          int t26 = n6;
          _Bool c27 = ((t25 == t26)) ? 1 : 0;
          if (c27) {
          } else {
            char* cast28 = (char*)&(_str_3);
            char* c29 = _str_1;
            unsigned int c30 = 27;
            char* cast31 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast28, c29, c30, cast31);
          }
          char* cast32 = (char*)&(_str_4);
          struct std__basic_ostream_char__std__char_traits_char__* std33;
          __VERIFIER_nondet_memory(&std33, sizeof(std33));
          int* std34;
          __VERIFIER_nondet_memory(&std34, sizeof(std34));
          int t35 = *std34;
          struct std__basic_ostream_char__std__char_traits_char__* std36;
          __VERIFIER_nondet_memory(&std36, sizeof(std36));
          // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::pop_front()
          __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
          int c37 = 100;
          int t38 = n6;
          int b39 = t38 + c37;
          n6 = b39;
      }
    _Bool std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    if (std40) {
    } else {
      char* cast41 = (char*)&(_str_5);
      char* c42 = _str_1;
      unsigned int c43 = 32;
      char* cast44 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast41, c42, c43, cast44);
    }
    char* cast45 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* std46;
    __VERIFIER_nondet_memory(&std46, sizeof(std46));
    unsigned long std47 = __VERIFIER_nondet_unsigned_long();
    int cast48 = (int)std47;
    struct std__basic_ostream_char__std__char_traits_char__* std49;
    __VERIFIER_nondet_memory(&std49, sizeof(std49));
    struct std__basic_ostream_char__std__char_traits_char__* std50;
    __VERIFIER_nondet_memory(&std50, sizeof(std50));
    int c51 = 0;
    __retval1 = c51;
    int t52 = __retval1;
    int ret_val53 = t52;
    {
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
      __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    }
    return ret_val53;
  int t54 = __retval1;
  return t54;
}

