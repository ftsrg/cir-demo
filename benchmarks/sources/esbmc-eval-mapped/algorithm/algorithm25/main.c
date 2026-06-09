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
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct c_unique { int current; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
struct c_unique UniqueNumber __attribute__((aligned(4)));
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[19] = "myvector contains:";
char _str_1[2] = " ";
char _str_2[17] = "myvector[0] == 1";
char _str_3[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm25/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[17] = "myvector[1] == 2";
char _str_5[17] = "myvector[2] == 3";
char _str_6[17] = "myvector[3] == 4";
char _str_7[20] = "\nmyvector contains:";
char _str_8[49] = "cannot create std::vector larger than max_size()";
char _str_9[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_10[19] = "__n < this->size()";
void c_unique__c_unique(struct c_unique* p0);
void __cxx_global_var_init();
extern int rand();
int RandomNumber();
extern void srand(unsigned int p0);
extern long time(long* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();
__attribute__((constructor)) void _GLOBAL__sub_I_main_cpp();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _ZN8c_uniqueC2Ev
void c_unique__c_unique(struct c_unique* v0) {
bb1:
  struct c_unique* this2;
  this2 = v0;
  struct c_unique* t3 = this2;
  int c4 = 0;
  t3->current = c4;
  return;
}

// function: __cxx_global_var_init
void __cxx_global_var_init() {
bb5:
  c_unique__c_unique(&UniqueNumber);
  return;
}

// function: _Z12RandomNumberv
int RandomNumber() {
bb6:
  int __retval7;
  int r8 = rand();
  int c9 = 100;
  int b10 = r8 % c9;
  __retval7 = b10;
  int t11 = __retval7;
  return t11;
}

// function: main
int main() {
bb12:
  int __retval13;
  struct std__vector_int__std__allocator_int__ myvector14;
  struct std__allocator_int_ ref_tmp015;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it16;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp017;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp118;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp219;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp320;
  struct c_unique agg_tmp421;
  int c22 = 0;
  __retval13 = c22;
  long* c23 = ((void*)0);
  long r24 = time(c23);
  unsigned int cast25 = (unsigned int)r24;
  srand(cast25);
  unsigned long c26 = 8;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp015, sizeof(ref_tmp015));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&myvector14, sizeof(myvector14));
    __VERIFIER_nondet_memory(&ref_tmp015, sizeof(ref_tmp015));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp015, sizeof(ref_tmp015));
  }
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it16, sizeof(it16));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    agg_tmp017 = std27;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    agg_tmp118 = std28;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t29 = agg_tmp017;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t30 = agg_tmp118;
    // externalized std:: op: void std::generate<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, int (*)()>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, int (*)())
    char* cast31 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp133;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp234;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std35;
      __VERIFIER_nondet_memory(&std35, sizeof(std35));
      ref_tmp133 = std35;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std36;
      __VERIFIER_nondet_memory(&std36, sizeof(std36));
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std38;
        __VERIFIER_nondet_memory(&std38, sizeof(std38));
        ref_tmp234 = std38;
        _Bool std39;
        __VERIFIER_nondet_memory(&std39, sizeof(std39));
        _Bool u40 = !std39;
        if (!u40) break;
        char* cast41 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std42;
        __VERIFIER_nondet_memory(&std42, sizeof(std42));
        int* std43;
        __VERIFIER_nondet_memory(&std43, sizeof(std43));
        int t44 = *std43;
        struct std__basic_ostream_char__std__char_traits_char__* std45;
        __VERIFIER_nondet_memory(&std45, sizeof(std45));
      for_step37: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std46;
        __VERIFIER_nondet_memory(&std46, sizeof(std46));
      }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std47;
    __VERIFIER_nondet_memory(&std47, sizeof(std47));
    agg_tmp219 = std47;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std48;
    __VERIFIER_nondet_memory(&std48, sizeof(std48));
    agg_tmp320 = std48;
    agg_tmp421 = *&UniqueNumber; // copy
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t49 = agg_tmp219;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t50 = agg_tmp320;
    struct c_unique t51 = agg_tmp421;
    // externalized std:: op: void std::generate<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, c_unique>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, c_unique)
    unsigned long c52 = 0;
    int* std53;
    __VERIFIER_nondet_memory(&std53, sizeof(std53));
    int t54 = *std53;
    int c55 = 1;
    _Bool c56 = ((t54 == c55)) ? 1 : 0;
    if (c56) {
    } else {
      char* cast57 = (char*)&(_str_2);
      char* c58 = _str_3;
      unsigned int c59 = 42;
      char* cast60 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast57, c58, c59, cast60);
    }
    unsigned long c61 = 1;
    int* std62;
    __VERIFIER_nondet_memory(&std62, sizeof(std62));
    int t63 = *std62;
    int c64 = 2;
    _Bool c65 = ((t63 == c64)) ? 1 : 0;
    if (c65) {
    } else {
      char* cast66 = (char*)&(_str_4);
      char* c67 = _str_3;
      unsigned int c68 = 43;
      char* cast69 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast66, c67, c68, cast69);
    }
    unsigned long c70 = 2;
    int* std71;
    __VERIFIER_nondet_memory(&std71, sizeof(std71));
    int t72 = *std71;
    int c73 = 3;
    _Bool c74 = ((t72 == c73)) ? 1 : 0;
    if (c74) {
    } else {
      char* cast75 = (char*)&(_str_5);
      char* c76 = _str_3;
      unsigned int c77 = 44;
      char* cast78 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast75, c76, c77, cast78);
    }
    unsigned long c79 = 3;
    int* std80;
    __VERIFIER_nondet_memory(&std80, sizeof(std80));
    int t81 = *std80;
    int c82 = 4;
    _Bool c83 = ((t81 == c82)) ? 1 : 0;
    if (c83) {
    } else {
      char* cast84 = (char*)&(_str_6);
      char* c85 = _str_3;
      unsigned int c86 = 45;
      char* cast87 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast84, c85, c86, cast87);
    }
    char* cast88 = (char*)&(_str_7);
    struct std__basic_ostream_char__std__char_traits_char__* std89;
    __VERIFIER_nondet_memory(&std89, sizeof(std89));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp390;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp491;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std92;
      __VERIFIER_nondet_memory(&std92, sizeof(std92));
      ref_tmp390 = std92;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std93;
      __VERIFIER_nondet_memory(&std93, sizeof(std93));
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std95;
        __VERIFIER_nondet_memory(&std95, sizeof(std95));
        ref_tmp491 = std95;
        _Bool std96;
        __VERIFIER_nondet_memory(&std96, sizeof(std96));
        _Bool u97 = !std96;
        if (!u97) break;
        char* cast98 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std99;
        __VERIFIER_nondet_memory(&std99, sizeof(std99));
        int* std100;
        __VERIFIER_nondet_memory(&std100, sizeof(std100));
        int t101 = *std100;
        struct std__basic_ostream_char__std__char_traits_char__* std102;
        __VERIFIER_nondet_memory(&std102, sizeof(std102));
      for_step94: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std103;
        __VERIFIER_nondet_memory(&std103, sizeof(std103));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std104;
    __VERIFIER_nondet_memory(&std104, sizeof(std104));
    int c105 = 0;
    __retval13 = c105;
    int t106 = __retval13;
    int ret_val107 = t106;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector14, sizeof(myvector14));
    }
    return ret_val107;
  int t108 = __retval13;
  return t108;
}

// function: _GLOBAL__sub_I_main.cpp
__attribute__((constructor)) void _GLOBAL__sub_I_main_cpp() {
bb109:
  __cxx_global_var_init();
  return;
}

