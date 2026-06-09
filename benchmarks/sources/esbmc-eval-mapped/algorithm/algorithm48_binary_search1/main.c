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
// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____ops___Iter_comp_val_bool_____int__int__ { void* _M_comp; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints1[9] = {1, 1, 2, 2, 3, 3, 4, 4, 5};
int __const_main_myints[9] = {1, 2, 3, 4, 5, 4, 3, 2, 1};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[20] = "looking for a 3... ";
char _str_1[51] = "!binary_search (v.begin(), v.end(), 6, myfunction)";
char _str_2[124] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm48_binary_search1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_3[49] = "cannot create std::vector larger than max_size()";
_Bool myfunction(int p0, int p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z10myfunctionii
_Bool myfunction(int v0, int v1) {
bb2:
  int i3;
  int j4;
  _Bool __retval5;
  i3 = v0;
  j4 = v1;
  int t6 = i3;
  int t7 = j4;
  _Bool c8 = ((t6 < t7)) ? 1 : 0;
  __retval5 = c8;
  _Bool t9 = __retval5;
  return t9;
}

// function: main
int main() {
bb10:
  int __retval11;
  int myints12[9];
  int myints113[9];
  struct std__vector_int__std__allocator_int__ v14;
  struct std__allocator_int_ ref_tmp015;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it16;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp017;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp118;
  int ref_tmp119;
  int c20 = 0;
  __retval11 = c20;
  // array copy
  __builtin_memcpy(myints12, __const_main_myints, (unsigned long)9 * sizeof(__const_main_myints[0]));
  // array copy
  __builtin_memcpy(myints113, __const_main_myints1, (unsigned long)9 * sizeof(__const_main_myints1[0]));
  int* cast21 = (int*)&(myints12);
  int* cast22 = (int*)&(myints12);
  int c23 = 9;
  int* ptr24 = &(cast22)[c23];
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp015, sizeof(ref_tmp015));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&v14, sizeof(v14));
    __VERIFIER_nondet_memory(cast21, sizeof(*cast21));
    __VERIFIER_nondet_memory(ptr24, sizeof(*ptr24));
    __VERIFIER_nondet_memory(&ref_tmp015, sizeof(ref_tmp015));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp015, sizeof(ref_tmp015));
  }
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it16, sizeof(it16));
    int* cast25 = (int*)&(myints113);
    int* cast26 = (int*)&(myints113);
    int c27 = 9;
    int* ptr28 = &(cast26)[c27];
    // externalized std:: op: void std::vector<int, std::allocator<int> >::assign<int*, void>(int*, int*)
    __VERIFIER_nondet_memory(&v14, sizeof(v14));
    __VERIFIER_nondet_memory(cast25, sizeof(*cast25));
    __VERIFIER_nondet_memory(ptr28, sizeof(*ptr28));
    char* cast29 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    agg_tmp017 = std31;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    agg_tmp118 = std32;
    int c33 = 6;
    ref_tmp119 = c33;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t34 = agg_tmp017;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t35 = agg_tmp118;
    _Bool std36;
    __VERIFIER_nondet_memory(&std36, sizeof(std36));
    _Bool u37 = !std36;
    if (u37) {
    } else {
      char* cast38 = (char*)&(_str_1);
      char* c39 = _str_2;
      unsigned int c40 = 37;
      char* cast41 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast38, c39, c40, cast41);
    }
    int c42 = 0;
    __retval11 = c42;
    int t43 = __retval11;
    int ret_val44 = t43;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&v14, sizeof(v14));
    }
    return ret_val44;
  int t45 = __retval11;
  return t45;
}

