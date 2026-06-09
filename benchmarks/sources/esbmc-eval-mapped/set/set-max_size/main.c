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
struct std____pair_base_std___Rb_tree_const_iterator_int___bool_;
struct std____pair_base_std___Rb_tree_iterator_int___bool_;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_int__;
struct std__less_int_;
struct std__pair_std___Rb_tree_const_iterator_int___bool_ { struct std___Rb_tree_const_iterator_int_ first; _Bool second; unsigned char __field2[7]; } __attribute__((packed));
struct std__pair_std___Rb_tree_iterator_int___bool_ { struct std___Rb_tree_iterator_int_ first; _Bool second; unsigned char __field2[7]; } __attribute__((packed));
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std__ios_base;
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__set_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[33] = "The set contains 1000 elements.\n";
char _str_1[39] = "The set could not hold 1000 elements.\n";
char _str_2[21] = "myset.size() == 1000";
char _str_3[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-max_size/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  int i2;
  struct std__set_int__std__less_int___std__allocator_int__ myset3;
  int c4 = 0;
  __retval1 = c4;
  // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::set()
  __VERIFIER_nondet_memory(&myset3, sizeof(myset3));
      unsigned long std5 = __VERIFIER_nondet_unsigned_long();
      unsigned long c6 = 1000;
      _Bool c7 = ((std5 > c6)) ? 1 : 0;
      if (c7) {
          struct std__pair_std___Rb_tree_const_iterator_int___bool_ agg_tmp08;
          int c9 = 0;
          i2 = c9;
          while (1) {
            int t11 = i2;
            int c12 = 1000;
            _Bool c13 = ((t11 < c12)) ? 1 : 0;
            if (!c13) break;
            struct std__pair_std___Rb_tree_const_iterator_int___bool_ std14;
            __VERIFIER_nondet_memory(&std14, sizeof(std14));
            agg_tmp08 = std14;
          for_step10: ;
            int t15 = i2;
            int u16 = t15 + 1;
            i2 = u16;
          }
        char* cast17 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* std18;
        __VERIFIER_nondet_memory(&std18, sizeof(std18));
      } else {
        char* cast19 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std20;
        __VERIFIER_nondet_memory(&std20, sizeof(std20));
      }
    unsigned long std21 = __VERIFIER_nondet_unsigned_long();
    unsigned long c22 = 1000;
    _Bool c23 = ((std21 == c22)) ? 1 : 0;
    if (c23) {
    } else {
      char* cast24 = (char*)&(_str_2);
      char* c25 = _str_3;
      unsigned int c26 = 23;
      char* cast27 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast24, c25, c26, cast27);
    }
    int c28 = 0;
    __retval1 = c28;
    int t29 = __retval1;
    int ret_val30 = t29;
    {
      // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::~set()
      __VERIFIER_nondet_memory(&myset3, sizeof(myset3));
    }
    return ret_val30;
  int t31 = __retval1;
  return t31;
}

