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
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_;
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[19] = "myvector contains:";
char _str_1[2] = " ";
char _str_2[26] = "vector::_M_realloc_append";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__vector_int__std__allocator_int__ myvector2;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it3;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp04;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp15;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp06;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp27;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp38;
  int c9 = 0;
  __retval1 = c9;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
      int i10;
      int c11 = 1;
      i10 = c11;
      while (1) {
        int t13 = i10;
        int c14 = 10;
        _Bool c15 = ((t13 < c14)) ? 1 : 0;
        if (!c15) break;
        // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int const&)
        __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
        __VERIFIER_nondet_memory(&i10, sizeof(i10));
      for_step12: ;
        int t16 = i10;
        int u17 = t16 + 1;
        i10 = u17;
      }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std18;
    __VERIFIER_nondet_memory(&std18, sizeof(std18));
    agg_tmp04 = std18;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std19;
    __VERIFIER_nondet_memory(&std19, sizeof(std19));
    ref_tmp06 = std19;
    long c20 = 3;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std21;
    __VERIFIER_nondet_memory(&std21, sizeof(std21));
    agg_tmp15 = std21;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std22;
    __VERIFIER_nondet_memory(&std22, sizeof(std22));
    agg_tmp27 = std22;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t23 = agg_tmp04;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t24 = agg_tmp15;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t25 = agg_tmp27;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    agg_tmp38 = std26;
    char* cast27 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp129;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp230;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std31;
      __VERIFIER_nondet_memory(&std31, sizeof(std31));
      ref_tmp129 = std31;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std32;
      __VERIFIER_nondet_memory(&std32, sizeof(std32));
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std34;
        __VERIFIER_nondet_memory(&std34, sizeof(std34));
        ref_tmp230 = std34;
        _Bool std35;
        __VERIFIER_nondet_memory(&std35, sizeof(std35));
        _Bool u36 = !std35;
        if (!u36) break;
        char* cast37 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std38;
        __VERIFIER_nondet_memory(&std38, sizeof(std38));
        int* std39;
        __VERIFIER_nondet_memory(&std39, sizeof(std39));
        int t40 = *std39;
        struct std__basic_ostream_char__std__char_traits_char__* std41;
        __VERIFIER_nondet_memory(&std41, sizeof(std41));
      for_step33: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std42;
        __VERIFIER_nondet_memory(&std42, sizeof(std42));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std43;
    __VERIFIER_nondet_memory(&std43, sizeof(std43));
    int c44 = 0;
    __retval1 = c44;
    int t45 = __retval1;
    int ret_val46 = t45;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    }
    return ret_val46;
  int t47 = __retval1;
  return t47;
}

