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
struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___ { double* _M_current; };
struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ { double* _M_current; };
struct __gnu_cxx____normal_iterator_double____void_ { double* _M_current; };
struct __gnu_cxx____ops___Iter_comp_iter_std__less_double__ { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_comp_val_std__less_double__ { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Vector_base_double__std__allocator_double_____Vector_impl_data { double* _M_start; double* _M_finish; double* _M_end_of_storage; };
struct std____new_allocator_double_;
struct std__allocator_double_;
struct std__less_double_ { unsigned char __field0; };
struct std__vector_double__std__allocator_double_____Guard_alloc { double* _M_storage; unsigned long _M_len; struct std___Vector_base_double__std__allocator_double__* _M_vect; };
struct std___Vector_base_double__std__allocator_double_____Vector_impl { struct std___Vector_base_double__std__allocator_double_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_double__std__allocator_double__ { struct std___Vector_base_double__std__allocator_double_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_double__std__allocator_double__ { struct std___Vector_base_double__std__allocator_double__ __field0; };
struct std__priority_queue_double__std__vector_double__std__allocator_double____std__less_double__ { struct std__vector_double__std__allocator_double__ c; unsigned char __field1[8]; } __attribute__((packed));

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[26] = "Popping from priorities: ";
char _str_1[26] = "vector::_M_realloc_append";
char _str_2[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIdSaIdEE4backEv[86] = "reference std::vector<double>::back() [_Tp = double, _Alloc = std::allocator<double>]";
char _str_3[15] = "!this->empty()";
char _str_4[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_queue.h";
char __PRETTY_FUNCTION____ZNKSt14priority_queueIdSt6vectorIdSaIdEESt4lessIdEE3topEv[135] = "const_reference std::priority_queue<double>::top() const [_Tp = double, _Sequence = std::vector<double>, _Compare = std::less<double>]";
char __PRETTY_FUNCTION____ZNKSt6vectorIdSaIdEE5frontEv[99] = "const_reference std::vector<double>::front() const [_Tp = double, _Alloc = std::allocator<double>]";
char __PRETTY_FUNCTION____ZNSt14priority_queueIdSt6vectorIdSaIdEESt4lessIdEE3popEv[118] = "void std::priority_queue<double>::pop() [_Tp = double, _Sequence = std::vector<double>, _Compare = std::less<double>]";
char _str_5[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_heap.h";
char __PRETTY_FUNCTION____ZSt8pop_heapIN9__gnu_cxx17__normal_iteratorIPdSt6vectorIdSaIdEEEESt4lessIdEEvT_S9_T0_[191] = "void std::pop_heap(_RandomAccessIterator, _RandomAccessIterator, _Compare) [_RandomAccessIterator = __gnu_cxx::__normal_iterator<double *, std::vector<double>>, _Compare = std::less<double>]";
char _str_6[18] = "__first != __last";
char __PRETTY_FUNCTION____ZNSt6vectorIdSaIdEE8pop_backEv[85] = "void std::vector<double>::pop_back() [_Tp = double, _Alloc = std::allocator<double>]";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__priority_queue_double__std__vector_double__std__allocator_double____std__less_double__ priorities2;
  double ref_tmp03;
  double ref_tmp14;
  double ref_tmp25;
  int c6 = 0;
  __retval1 = c6;
  // externalized std:: op: std::priority_queue<double, std::vector<double, std::allocator<double> >, std::less<double> >::priority_queue<std::vector<double, std::allocator<double> >, void>()
  __VERIFIER_nondet_memory(&priorities2, sizeof(priorities2));
    double c7 = 0x1.999999999999ap1;
    ref_tmp03 = c7;
    // externalized std:: op: std::priority_queue<double, std::vector<double, std::allocator<double> >, std::less<double> >::push(double&&)
    __VERIFIER_nondet_memory(&priorities2, sizeof(priorities2));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    double c8 = 0x1.399999999999ap3;
    ref_tmp14 = c8;
    // externalized std:: op: std::priority_queue<double, std::vector<double, std::allocator<double> >, std::less<double> >::push(double&&)
    __VERIFIER_nondet_memory(&priorities2, sizeof(priorities2));
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
    double c9 = 0x1.599999999999ap2;
    ref_tmp25 = c9;
    // externalized std:: op: std::priority_queue<double, std::vector<double, std::allocator<double> >, std::less<double> >::push(double&&)
    __VERIFIER_nondet_memory(&priorities2, sizeof(priorities2));
    __VERIFIER_nondet_memory(&ref_tmp25, sizeof(ref_tmp25));
    char* cast10 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std11;
    __VERIFIER_nondet_memory(&std11, sizeof(std11));
      while (1) {
        _Bool std12;
        __VERIFIER_nondet_memory(&std12, sizeof(std12));
        _Bool u13 = !std12;
        if (!u13) break;
          double* std14;
          __VERIFIER_nondet_memory(&std14, sizeof(std14));
          double t15 = *std14;
          struct std__basic_ostream_char__std__char_traits_char__* std16;
          __VERIFIER_nondet_memory(&std16, sizeof(std16));
          char c17 = 32;
          struct std__basic_ostream_char__std__char_traits_char__* std18;
          __VERIFIER_nondet_memory(&std18, sizeof(std18));
          // externalized std:: op: std::priority_queue<double, std::vector<double, std::allocator<double> >, std::less<double> >::pop()
          __VERIFIER_nondet_memory(&priorities2, sizeof(priorities2));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std19;
    __VERIFIER_nondet_memory(&std19, sizeof(std19));
    int c20 = 0;
    __retval1 = c20;
    int t21 = __retval1;
    int ret_val22 = t21;
    {
      // externalized std:: op: std::priority_queue<double, std::vector<double, std::allocator<double> >, std::less<double> >::~priority_queue()
      __VERIFIER_nondet_memory(&priorities2, sizeof(priorities2));
    }
    return ret_val22;
  int t23 = __retval1;
  return t23;
}

