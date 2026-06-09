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
struct std___Identity_int_ { unsigned char __field0; };
struct std___Rb_tree_const_iterator_int_ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* _M_t; };
struct std___Rb_tree_iterator_int_ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_std__less_int__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_int_;
struct std____new_allocator_std___Rb_tree_node_int__;
struct std____pair_base_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_int__;
struct std__less_int_;
struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ { struct std___Rb_tree_iterator_int_ first; struct std___Rb_tree_iterator_int_ second; };
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__multiset_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[10] = "0. size: ";
char _str_1[19] = "myints.size() == 0";
char _str_2[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multiset/multiset-size/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[10] = "1. size: ";
char _str_4[20] = "myints.size() == 10";
char _str_5[10] = "2. size: ";
char _str_6[20] = "myints.size() == 11";
char _str_7[10] = "3. size: ";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__multiset_int__std__less_int___std__allocator_int__ myints2;
  int ref_tmp03;
  struct std___Rb_tree_const_iterator_int_ agg_tmp14;
  int ref_tmp15;
  int c6 = 0;
  __retval1 = c6;
  // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::multiset()
  __VERIFIER_nondet_memory(&myints2, sizeof(myints2));
    char* cast7 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std8;
    __VERIFIER_nondet_memory(&std8, sizeof(std8));
    unsigned long std9 = __VERIFIER_nondet_unsigned_long();
    int cast10 = (int)std9;
    struct std__basic_ostream_char__std__char_traits_char__* std11;
    __VERIFIER_nondet_memory(&std11, sizeof(std11));
    struct std__basic_ostream_char__std__char_traits_char__* std12;
    __VERIFIER_nondet_memory(&std12, sizeof(std12));
    unsigned long std13 = __VERIFIER_nondet_unsigned_long();
    unsigned long c14 = 0;
    _Bool c15 = ((std13 == c14)) ? 1 : 0;
    if (c15) {
    } else {
      char* cast16 = (char*)&(_str_1);
      char* c17 = _str_2;
      unsigned int c18 = 17;
      char* cast19 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast16, c17, c18, cast19);
    }
      int i20;
      struct std___Rb_tree_const_iterator_int_ agg_tmp021;
      int c22 = 0;
      i20 = c22;
      while (1) {
        int t24 = i20;
        int c25 = 10;
        _Bool c26 = ((t24 < c25)) ? 1 : 0;
        if (!c26) break;
        struct std___Rb_tree_const_iterator_int_ std27;
        __VERIFIER_nondet_memory(&std27, sizeof(std27));
        agg_tmp021 = std27;
      for_step23: ;
        int t28 = i20;
        int u29 = t28 + 1;
        i20 = u29;
      }
    char* cast30 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    unsigned long std32 = __VERIFIER_nondet_unsigned_long();
    int cast33 = (int)std32;
    struct std__basic_ostream_char__std__char_traits_char__* std34;
    __VERIFIER_nondet_memory(&std34, sizeof(std34));
    struct std__basic_ostream_char__std__char_traits_char__* std35;
    __VERIFIER_nondet_memory(&std35, sizeof(std35));
    unsigned long std36 = __VERIFIER_nondet_unsigned_long();
    unsigned long c37 = 10;
    _Bool c38 = ((std36 == c37)) ? 1 : 0;
    if (c38) {
    } else {
      char* cast39 = (char*)&(_str_4);
      char* c40 = _str_2;
      unsigned int c41 = 20;
      char* cast42 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast39, c40, c41, cast42);
    }
    int c43 = 100;
    ref_tmp03 = c43;
    struct std___Rb_tree_const_iterator_int_ std44;
    __VERIFIER_nondet_memory(&std44, sizeof(std44));
    agg_tmp14 = std44;
    char* cast45 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* std46;
    __VERIFIER_nondet_memory(&std46, sizeof(std46));
    unsigned long std47 = __VERIFIER_nondet_unsigned_long();
    int cast48 = (int)std47;
    struct std__basic_ostream_char__std__char_traits_char__* std49;
    __VERIFIER_nondet_memory(&std49, sizeof(std49));
    struct std__basic_ostream_char__std__char_traits_char__* std50;
    __VERIFIER_nondet_memory(&std50, sizeof(std50));
    unsigned long std51 = __VERIFIER_nondet_unsigned_long();
    unsigned long c52 = 11;
    _Bool c53 = ((std51 == c52)) ? 1 : 0;
    if (c53) {
    } else {
      char* cast54 = (char*)&(_str_6);
      char* c55 = _str_2;
      unsigned int c56 = 23;
      char* cast57 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast54, c55, c56, cast57);
    }
    int c58 = 5;
    ref_tmp15 = c58;
    unsigned long std59 = __VERIFIER_nondet_unsigned_long();
    char* cast60 = (char*)&(_str_7);
    struct std__basic_ostream_char__std__char_traits_char__* std61;
    __VERIFIER_nondet_memory(&std61, sizeof(std61));
    unsigned long std62 = __VERIFIER_nondet_unsigned_long();
    int cast63 = (int)std62;
    struct std__basic_ostream_char__std__char_traits_char__* std64;
    __VERIFIER_nondet_memory(&std64, sizeof(std64));
    struct std__basic_ostream_char__std__char_traits_char__* std65;
    __VERIFIER_nondet_memory(&std65, sizeof(std65));
    unsigned long std66 = __VERIFIER_nondet_unsigned_long();
    unsigned long c67 = 10;
    _Bool c68 = ((std66 == c67)) ? 1 : 0;
    if (c68) {
    } else {
      char* cast69 = (char*)&(_str_4);
      char* c70 = _str_2;
      unsigned int c71 = 26;
      char* cast72 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast69, c70, c71, cast72);
    }
    int c73 = 0;
    __retval1 = c73;
    int t74 = __retval1;
    int ret_val75 = t74;
    {
      // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::~multiset()
      __VERIFIER_nondet_memory(&myints2, sizeof(myints2));
    }
    return ret_val75;
  int t76 = __retval1;
  return t76;
}

