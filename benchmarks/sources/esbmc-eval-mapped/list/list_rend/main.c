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
struct std__iterator_std__bidirectional_iterator_tag__int__long__int____int___;
struct std__reverse_iterator_std___List_iterator_int__ { struct std___List_iterator_int_ current; };
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
char _str_1[10] = "*rit == 1";
char _str_2[102] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_rend/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[2] = " ";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__list_int__std__allocator_int__ mylist2;
  struct std__reverse_iterator_std___List_iterator_int__ rit3;
  struct std__reverse_iterator_std___List_iterator_int__ agg_tmp04;
  int c5 = 0;
  __retval1 = c5;
  // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::list()
  __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
      int i6;
      int c7 = 1;
      i6 = c7;
      while (1) {
        int t9 = i6;
        int c10 = 5;
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
    char* cast14 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std15;
    __VERIFIER_nondet_memory(&std15, sizeof(std15));
    struct std__reverse_iterator_std___List_iterator_int__ std16;
    __VERIFIER_nondet_memory(&std16, sizeof(std16));
    rit3 = std16;
    int c17 = 0;
    struct std__reverse_iterator_std___List_iterator_int__ std18;
    __VERIFIER_nondet_memory(&std18, sizeof(std18));
    agg_tmp04 = std18;
    int* std19;
    __VERIFIER_nondet_memory(&std19, sizeof(std19));
    int t20 = *std19;
    int c21 = 1;
    _Bool c22 = ((t20 == c21)) ? 1 : 0;
    if (c22) {
    } else {
      char* cast23 = (char*)&(_str_1);
      char* c24 = _str_2;
      unsigned int c25 = 22;
      char* cast26 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast23, c24, c25, cast26);
    }
      struct std__reverse_iterator_std___List_iterator_int__ ref_tmp027;
      struct std__reverse_iterator_std___List_iterator_int__ ref_tmp128;
      struct std__reverse_iterator_std___List_iterator_int__ std29;
      __VERIFIER_nondet_memory(&std29, sizeof(std29));
      ref_tmp027 = std29;
      struct std__reverse_iterator_std___List_iterator_int__* std30;
      __VERIFIER_nondet_memory(&std30, sizeof(std30));
      while (1) {
        struct std__reverse_iterator_std___List_iterator_int__ std32;
        __VERIFIER_nondet_memory(&std32, sizeof(std32));
        ref_tmp128 = std32;
        _Bool std33;
        __VERIFIER_nondet_memory(&std33, sizeof(std33));
        _Bool u34 = !std33;
        if (!u34) break;
        char* cast35 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std36;
        __VERIFIER_nondet_memory(&std36, sizeof(std36));
        int* std37;
        __VERIFIER_nondet_memory(&std37, sizeof(std37));
        int t38 = *std37;
        struct std__basic_ostream_char__std__char_traits_char__* std39;
        __VERIFIER_nondet_memory(&std39, sizeof(std39));
      for_step31: ;
        struct std__reverse_iterator_std___List_iterator_int__* std40;
        __VERIFIER_nondet_memory(&std40, sizeof(std40));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
    int c42 = 0;
    __retval1 = c42;
    int t43 = __retval1;
    int ret_val44 = t43;
    {
      // externalized std:: op: std::__cxx11::list<int, std::allocator<int> >::~list()
      __VERIFIER_nondet_memory(&mylist2, sizeof(mylist2));
    }
    return ret_val44;
  int t45 = __retval1;
  return t45;
}

