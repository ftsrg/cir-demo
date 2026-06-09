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
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[16] = "first[1] == 100";
char _str_1[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/vector57/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[16] = "first contains:";
char _str_3[2] = " ";
char _str_4[18] = "\nsecond contains:";
char _str_5[16] = "first[1] != 200";
char _str_6[49] = "cannot create std::vector larger than max_size()";
char _str_7[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_8[9] = "__n >= 0";
char _str_9[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_10[19] = "__n < this->size()";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4swapERS1_[93] = "void std::vector<int>::swap(vector<_Tp, _Alloc> &) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_11[104] = "_Alloc_traits::propagate_on_container_swap::value || _M_get_Tp_allocator() == __x._M_get_Tp_allocator()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  unsigned int i2;
  struct std__vector_int__std__allocator_int__ first3;
  int ref_tmp04;
  struct std__allocator_int_ ref_tmp15;
  struct std__vector_int__std__allocator_int__ second6;
  int ref_tmp27;
  struct std__allocator_int_ ref_tmp38;
  int c9 = 0;
  __retval1 = c9;
  unsigned long c10 = 3;
  int c11 = 100;
  ref_tmp04 = c11;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, int const&, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&first3, sizeof(first3));
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
  }
    unsigned long c12 = 5;
    int c13 = 200;
    ref_tmp27 = c13;
    // externalized std:: op: std::allocator<int>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp38, sizeof(ref_tmp38));
      // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, int const&, std::allocator<int> const&)
      __VERIFIER_nondet_memory(&second6, sizeof(second6));
      __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      __VERIFIER_nondet_memory(&ref_tmp38, sizeof(ref_tmp38));
    {
      // externalized std:: op: std::allocator<int>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp38, sizeof(ref_tmp38));
    }
      unsigned long c14 = 1;
      int* std15;
      __VERIFIER_nondet_memory(&std15, sizeof(std15));
      int t16 = *std15;
      int c17 = 100;
      _Bool c18 = ((t16 == c17)) ? 1 : 0;
      if (c18) {
      } else {
        char* cast19 = (char*)&(_str);
        char* c20 = _str_1;
        unsigned int c21 = 19;
        char* cast22 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast19, c20, c21, cast22);
      }
      // externalized std:: op: std::vector<int, std::allocator<int> >::swap(std::vector<int, std::allocator<int> >&)
      __VERIFIER_nondet_memory(&first3, sizeof(first3));
      __VERIFIER_nondet_memory(&second6, sizeof(second6));
      char* cast23 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* std24;
      __VERIFIER_nondet_memory(&std24, sizeof(std24));
        unsigned int c25 = 0;
        i2 = c25;
        while (1) {
          unsigned int t27 = i2;
          unsigned long cast28 = (unsigned long)t27;
          unsigned long std29 = __VERIFIER_nondet_unsigned_long();
          _Bool c30 = ((cast28 < std29)) ? 1 : 0;
          if (!c30) break;
          char* cast31 = (char*)&(_str_3);
          struct std__basic_ostream_char__std__char_traits_char__* std32;
          __VERIFIER_nondet_memory(&std32, sizeof(std32));
          unsigned int t33 = i2;
          unsigned long cast34 = (unsigned long)t33;
          int* std35;
          __VERIFIER_nondet_memory(&std35, sizeof(std35));
          int t36 = *std35;
          struct std__basic_ostream_char__std__char_traits_char__* std37;
          __VERIFIER_nondet_memory(&std37, sizeof(std37));
        for_step26: ;
          unsigned int t38 = i2;
          unsigned int u39 = t38 + 1;
          i2 = u39;
        }
      char* cast40 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* std41;
      __VERIFIER_nondet_memory(&std41, sizeof(std41));
        unsigned int c42 = 0;
        i2 = c42;
        while (1) {
          unsigned int t44 = i2;
          unsigned long cast45 = (unsigned long)t44;
          unsigned long std46 = __VERIFIER_nondet_unsigned_long();
          _Bool c47 = ((cast45 < std46)) ? 1 : 0;
          if (!c47) break;
          char* cast48 = (char*)&(_str_3);
          struct std__basic_ostream_char__std__char_traits_char__* std49;
          __VERIFIER_nondet_memory(&std49, sizeof(std49));
          unsigned int t50 = i2;
          unsigned long cast51 = (unsigned long)t50;
          int* std52;
          __VERIFIER_nondet_memory(&std52, sizeof(std52));
          int t53 = *std52;
          struct std__basic_ostream_char__std__char_traits_char__* std54;
          __VERIFIER_nondet_memory(&std54, sizeof(std54));
        for_step43: ;
          unsigned int t55 = i2;
          unsigned int u56 = t55 + 1;
          i2 = u56;
        }
      unsigned long c57 = 1;
      int* std58;
      __VERIFIER_nondet_memory(&std58, sizeof(std58));
      int t59 = *std58;
      int c60 = 200;
      _Bool c61 = ((t59 != c60)) ? 1 : 0;
      if (c61) {
      } else {
        char* cast62 = (char*)&(_str_5);
        char* c63 = _str_1;
        unsigned int c64 = 27;
        char* cast65 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast62, c63, c64, cast65);
      }
      struct std__basic_ostream_char__std__char_traits_char__* std66;
      __VERIFIER_nondet_memory(&std66, sizeof(std66));
      int c67 = 0;
      __retval1 = c67;
      int t68 = __retval1;
      int ret_val69 = t68;
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&second6, sizeof(second6));
      }
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&first3, sizeof(first3));
      }
      return ret_val69;
  int t70 = __retval1;
  return t70;
}

