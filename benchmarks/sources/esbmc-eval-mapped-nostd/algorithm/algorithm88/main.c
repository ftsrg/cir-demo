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
struct std____new_allocator_int_ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
struct c_unique UniqueNumber __attribute__((aligned(4)));
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[19] = "myvector contains:";
char _str_1[2] = " ";
char _str_2[20] = "myvector[2] == NULL";
char _str_3[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm88/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[20] = "\nmyvector contains:";
char _str_5[49] = "cannot create std::vector larger than max_size()";
char _str_6[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_7[19] = "__n < this->size()";
void c_unique__c_unique(struct c_unique* p0);
void __cxx_global_var_init();
extern int rand();
int RandomNumber();
extern void srand(unsigned int p0);
extern long time(long* p0);
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void void_std__generate___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, void* p2);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
int c_unique__operator__(struct c_unique* p0);
void void_std__generate___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______c_unique_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct c_unique p2);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* p0);
int main();
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
extern void std____throw_length_error(char* p0);
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long p0, struct std__allocator_int_* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0, struct std__allocator_int_* p1);
_Bool std____is_constant_evaluated();
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* p0, unsigned long p1, void* p2);
int* std__allocator_int___allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1);
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1);
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
_Bool std__is_constant_evaluated();
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0, int** p1);
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0);
void void_std___Construct_int_(int* p0);
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* p0);
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0);
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* p0, unsigned long p1);
void void_std____fill_a1_int___int_(int* p0, int* p1, int* p2);
void void_std____fill_a_int___int_(int* p0, int* p1, int* p2);
int* int__std____fill_n_a_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2, struct std__random_access_iterator_tag p3);
unsigned long std____size_to_integer(unsigned long p0);
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** p0);
int* int__std__fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* p0, unsigned long p1);
int* int__std____uninitialized_default_n_int___unsigned_long_(int* p0, unsigned long p1);
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* p0, unsigned long p1, struct std__allocator_int_* p2);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int______M_default_initialize(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0, struct std____new_allocator_int_* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0);
void void_std__destroy_at_int_(int* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
__attribute__((constructor)) void _GLOBAL__sub_I_main_cpp();

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

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator_2(struct std__allocator_int_* v12) {
bb13:
  struct std__allocator_int_* this14;
  this14 = v12;
  struct std__allocator_int_* t15 = this14;
  struct std____new_allocator_int_* base16 = (struct std____new_allocator_int_*)((char *)t15 + 0);
  std____new_allocator_int_____new_allocator_2(base16);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2EmRKS0_
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v17, unsigned long v18, struct std__allocator_int_* v19) {
bb20:
  struct std__vector_int__std__allocator_int__* this21;
  unsigned long __n22;
  struct std__allocator_int_* __a23;
  this21 = v17;
  __n22 = v18;
  __a23 = v19;
  struct std__vector_int__std__allocator_int__* t24 = this21;
  struct std___Vector_base_int__std__allocator_int__* base25 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t24 + 0);
  unsigned long t26 = __n22;
  struct std__allocator_int_* t27 = __a23;
  unsigned long r28 = std__vector_int__std__allocator_int______S_check_init_len(t26, t27);
  struct std__allocator_int_* t29 = __a23;
  std___Vector_base_int__std__allocator_int______Vector_base(base25, r28, t29);
    unsigned long t30 = __n22;
    std__vector_int__std__allocator_int______M_default_initialize(t24, t30);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v31) {
bb32:
  struct std__allocator_int_* this33;
  this33 = v31;
  struct std__allocator_int_* t34 = this33;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v35) {
bb36:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this37;
  this37 = v35;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t38 = this37;
  int* c39 = ((void*)0);
  t38->_M_current = c39;
  return;
}

// function: _ZSt8generateIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEPFivEEvT_S9_T0_
void void_std__generate___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v40, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v41, void* v42) {
bb43:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first44;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last45;
  void* __gen46;
  __first44 = v40;
  __last45 = v41;
  __gen46 = v42;
    while (1) {
      _Bool r48 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first44, &__last45);
      _Bool u49 = !r48;
      if (!u49) break;
      void* t50 = __gen46;
      int r51 = ((int (*)())t50)();
      int* r52 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first44);
      *r52 = r51;
    for_step47: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r53 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first44);
    }
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v54, int** v55) {
bb56:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this57;
  int** __i58;
  this57 = v54;
  __i58 = v55;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t59 = this57;
  int** t60 = __i58;
  int* t61 = *t60;
  t59->_M_current = t61;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v62) {
bb63:
  struct std__vector_int__std__allocator_int__* this64;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval65;
  this64 = v62;
  struct std__vector_int__std__allocator_int__* t66 = this64;
  struct std___Vector_base_int__std__allocator_int__* base67 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t66 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base68 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base67->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval65, &base68->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t69 = __retval65;
  return t69;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v70) {
bb71:
  struct std__vector_int__std__allocator_int__* this72;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval73;
  this72 = v70;
  struct std__vector_int__std__allocator_int__* t74 = this72;
  struct std___Vector_base_int__std__allocator_int__* base75 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t74 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base76 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base75->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval73, &base76->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t77 = __retval73;
  return t77;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v78, int v79) {
bb80:
  int __a81;
  int __b82;
  int __retval83;
  __a81 = v78;
  __b82 = v79;
  int t84 = __a81;
  int t85 = __b82;
  int b86 = t84 | t85;
  __retval83 = b86;
  int t87 = __retval83;
  return t87;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v88) {
bb89:
  struct std__basic_ios_char__std__char_traits_char__* this90;
  int __retval91;
  this90 = v88;
  struct std__basic_ios_char__std__char_traits_char__* t92 = this90;
  struct std__ios_base* base93 = (struct std__ios_base*)((char *)t92 + 0);
  int t94 = base93->_M_streambuf_state;
  __retval91 = t94;
  int t95 = __retval91;
  return t95;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v96, int v97) {
bb98:
  struct std__basic_ios_char__std__char_traits_char__* this99;
  int __state100;
  this99 = v96;
  __state100 = v97;
  struct std__basic_ios_char__std__char_traits_char__* t101 = this99;
  int r102 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t101);
  int t103 = __state100;
  int r104 = std__operator_(r102, t103);
  std__basic_ios_char__std__char_traits_char_____clear(t101, r104);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v105, char* v106) {
bb107:
  char* __c1108;
  char* __c2109;
  _Bool __retval110;
  __c1108 = v105;
  __c2109 = v106;
  char* t111 = __c1108;
  char t112 = *t111;
  int cast113 = (int)t112;
  char* t114 = __c2109;
  char t115 = *t114;
  int cast116 = (int)t115;
  _Bool c117 = ((cast113 == cast116)) ? 1 : 0;
  __retval110 = c117;
  _Bool t118 = __retval110;
  return t118;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v119) {
bb120:
  char* __p121;
  unsigned long __retval122;
  unsigned long __i123;
  __p121 = v119;
  unsigned long c124 = 0;
  __i123 = c124;
    char ref_tmp0125;
    while (1) {
      unsigned long t126 = __i123;
      char* t127 = __p121;
      char* ptr128 = &(t127)[t126];
      char c129 = 0;
      ref_tmp0125 = c129;
      _Bool r130 = __gnu_cxx__char_traits_char___eq(ptr128, &ref_tmp0125);
      _Bool u131 = !r130;
      if (!u131) break;
      unsigned long t132 = __i123;
      unsigned long u133 = t132 + 1;
      __i123 = u133;
    }
  unsigned long t134 = __i123;
  __retval122 = t134;
  unsigned long t135 = __retval122;
  return t135;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v136) {
bb137:
  char* __s138;
  unsigned long __retval139;
  __s138 = v136;
    _Bool r140 = std____is_constant_evaluated();
    if (r140) {
      char* t141 = __s138;
      unsigned long r142 = __gnu_cxx__char_traits_char___length(t141);
      __retval139 = r142;
      unsigned long t143 = __retval139;
      return t143;
    }
  char* t144 = __s138;
  unsigned long r145 = strlen(t144);
  __retval139 = r145;
  unsigned long t146 = __retval139;
  return t146;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v147, char* v148) {
bb149:
  struct std__basic_ostream_char__std__char_traits_char__* __out150;
  char* __s151;
  struct std__basic_ostream_char__std__char_traits_char__* __retval152;
  __out150 = v147;
  __s151 = v148;
    char* t153 = __s151;
    _Bool cast154 = (_Bool)t153;
    _Bool u155 = !cast154;
    if (u155) {
      struct std__basic_ostream_char__std__char_traits_char__* t156 = __out150;
      void** v157 = (void**)t156;
      void* v158 = *((void**)v157);
      unsigned char* cast159 = (unsigned char*)v158;
      long c160 = -24;
      unsigned char* ptr161 = &(cast159)[c160];
      long* cast162 = (long*)ptr161;
      long t163 = *cast162;
      unsigned char* cast164 = (unsigned char*)t156;
      unsigned char* ptr165 = &(cast164)[t163];
      struct std__basic_ostream_char__std__char_traits_char__* cast166 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr165;
      struct std__basic_ios_char__std__char_traits_char__* cast167 = (struct std__basic_ios_char__std__char_traits_char__*)cast166;
      int t168 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast167, t168);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t169 = __out150;
      char* t170 = __s151;
      char* t171 = __s151;
      unsigned long r172 = std__char_traits_char___length(t171);
      long cast173 = (long)r172;
      struct std__basic_ostream_char__std__char_traits_char__* r174 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t169, t170, cast173);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t175 = __out150;
  __retval152 = t175;
  struct std__basic_ostream_char__std__char_traits_char__* t176 = __retval152;
  return t176;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v177, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v178) {
bb179:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this180;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed181;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval182;
  this180 = v177;
  unnamed181 = v178;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t183 = this180;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t184 = unnamed181;
  int* t185 = t184->_M_current;
  t183->_M_current = t185;
  __retval182 = t183;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t186 = __retval182;
  return t186;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v187) {
bb188:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this189;
  int** __retval190;
  this189 = v187;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t191 = this189;
  __retval190 = &t191->_M_current;
  int** t192 = __retval190;
  return t192;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v193, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v194) {
bb195:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs196;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs197;
  _Bool __retval198;
  __lhs196 = v193;
  __rhs197 = v194;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t199 = __lhs196;
  int** r200 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t199);
  int* t201 = *r200;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t202 = __rhs197;
  int** r203 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t202);
  int* t204 = *r203;
  _Bool c205 = ((t201 == t204)) ? 1 : 0;
  __retval198 = c205;
  _Bool t206 = __retval198;
  return t206;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v207) {
bb208:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this209;
  int* __retval210;
  this209 = v207;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t211 = this209;
  int* t212 = t211->_M_current;
  __retval210 = t212;
  int* t213 = __retval210;
  return t213;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v214) {
bb215:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this216;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval217;
  this216 = v214;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t218 = this216;
  int* t219 = t218->_M_current;
  int c220 = 1;
  int* ptr221 = &(t219)[c220];
  t218->_M_current = ptr221;
  __retval217 = t218;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t222 = __retval217;
  return t222;
}

// function: _ZN8c_uniqueclEv
int c_unique__operator__(struct c_unique* v223) {
bb224:
  struct c_unique* this225;
  int __retval226;
  this225 = v223;
  struct c_unique* t227 = this225;
  int t228 = t227->current;
  int u229 = t228 + 1;
  t227->current = u229;
  __retval226 = u229;
  int t230 = __retval226;
  return t230;
}

// function: _ZSt8generateIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEE8c_uniqueEvT_S8_T0_
void void_std__generate___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______c_unique_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v231, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v232, struct c_unique v233) {
bb234:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first235;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last236;
  struct c_unique __gen237;
  __first235 = v231;
  __last236 = v232;
  __gen237 = v233;
    while (1) {
      _Bool r239 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first235, &__last236);
      _Bool u240 = !r239;
      if (!u240) break;
      int r241 = c_unique__operator__(&__gen237);
      int* r242 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first235);
      *r242 = r241;
    for_step238: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r243 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first235);
    }
  return;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v244) {
bb245:
  struct std__vector_int__std__allocator_int__* this246;
  unsigned long __retval247;
  long __dif248;
  this246 = v244;
  struct std__vector_int__std__allocator_int__* t249 = this246;
  struct std___Vector_base_int__std__allocator_int__* base250 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t249 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base251 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base250->_M_impl) + 0);
  int* t252 = base251->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base253 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t249 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base254 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base253->_M_impl) + 0);
  int* t255 = base254->_M_start;
  long diff256 = t252 - t255;
  __dif248 = diff256;
    long t257 = __dif248;
    long c258 = 0;
    _Bool c259 = ((t257 < c258)) ? 1 : 0;
    if (c259) {
      __builtin_unreachable();
    }
  long t260 = __dif248;
  unsigned long cast261 = (unsigned long)t260;
  __retval247 = cast261;
  unsigned long t262 = __retval247;
  return t262;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v263, unsigned long v264) {
bb265:
  struct std__vector_int__std__allocator_int__* this266;
  unsigned long __n267;
  int* __retval268;
  this266 = v263;
  __n267 = v264;
  struct std__vector_int__std__allocator_int__* t269 = this266;
    do {
          unsigned long t270 = __n267;
          unsigned long r271 = std__vector_int__std__allocator_int_____size___const(t269);
          _Bool c272 = ((t270 < r271)) ? 1 : 0;
          _Bool u273 = !c272;
          if (u273) {
            char* cast274 = (char*)&(_str_6);
            int c275 = 1263;
            char* cast276 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast277 = (char*)&(_str_7);
            std____glibcxx_assert_fail(cast274, c275, cast276, cast277);
          }
      _Bool c278 = 0;
      if (!c278) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base279 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t269 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base280 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base279->_M_impl) + 0);
  int* t281 = base280->_M_start;
  unsigned long t282 = __n267;
  int* ptr283 = &(t281)[t282];
  __retval268 = ptr283;
  int* t284 = __retval268;
  return t284;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v285, void* v286) {
bb287:
  struct std__basic_ostream_char__std__char_traits_char__* this288;
  void* __pf289;
  struct std__basic_ostream_char__std__char_traits_char__* __retval290;
  this288 = v285;
  __pf289 = v286;
  struct std__basic_ostream_char__std__char_traits_char__* t291 = this288;
  void* t292 = __pf289;
  struct std__basic_ostream_char__std__char_traits_char__* r293 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t292)(t291);
  __retval290 = r293;
  struct std__basic_ostream_char__std__char_traits_char__* t294 = __retval290;
  return t294;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v295) {
bb296:
  struct std__basic_ostream_char__std__char_traits_char__* __os297;
  struct std__basic_ostream_char__std__char_traits_char__* __retval298;
  __os297 = v295;
  struct std__basic_ostream_char__std__char_traits_char__* t299 = __os297;
  struct std__basic_ostream_char__std__char_traits_char__* r300 = std__ostream__flush(t299);
  __retval298 = r300;
  struct std__basic_ostream_char__std__char_traits_char__* t301 = __retval298;
  return t301;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v302) {
bb303:
  struct std__ctype_char_* __f304;
  struct std__ctype_char_* __retval305;
  __f304 = v302;
    struct std__ctype_char_* t306 = __f304;
    _Bool cast307 = (_Bool)t306;
    _Bool u308 = !cast307;
    if (u308) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t309 = __f304;
  __retval305 = t309;
  struct std__ctype_char_* t310 = __retval305;
  return t310;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v311, char v312) {
bb313:
  struct std__ctype_char_* this314;
  char __c315;
  char __retval316;
  this314 = v311;
  __c315 = v312;
  struct std__ctype_char_* t317 = this314;
    char t318 = t317->_M_widen_ok;
    _Bool cast319 = (_Bool)t318;
    if (cast319) {
      char t320 = __c315;
      unsigned char cast321 = (unsigned char)t320;
      unsigned long cast322 = (unsigned long)cast321;
      char t323 = t317->_M_widen[cast322];
      __retval316 = t323;
      char t324 = __retval316;
      return t324;
    }
  std__ctype_char____M_widen_init___const(t317);
  char t325 = __c315;
  void** v326 = (void**)t317;
  void* v327 = *((void**)v326);
  char vcall330 = (char)__VERIFIER_virtual_call_char_char(t317, 6, t325);
  __retval316 = vcall330;
  char t331 = __retval316;
  return t331;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v332, char v333) {
bb334:
  struct std__basic_ios_char__std__char_traits_char__* this335;
  char __c336;
  char __retval337;
  this335 = v332;
  __c336 = v333;
  struct std__basic_ios_char__std__char_traits_char__* t338 = this335;
  struct std__ctype_char_* t339 = t338->_M_ctype;
  struct std__ctype_char_* r340 = std__ctype_char__const__std____check_facet_std__ctype_char___(t339);
  char t341 = __c336;
  char r342 = std__ctype_char___widen_char__const(r340, t341);
  __retval337 = r342;
  char t343 = __retval337;
  return t343;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v344) {
bb345:
  struct std__basic_ostream_char__std__char_traits_char__* __os346;
  struct std__basic_ostream_char__std__char_traits_char__* __retval347;
  __os346 = v344;
  struct std__basic_ostream_char__std__char_traits_char__* t348 = __os346;
  struct std__basic_ostream_char__std__char_traits_char__* t349 = __os346;
  void** v350 = (void**)t349;
  void* v351 = *((void**)v350);
  unsigned char* cast352 = (unsigned char*)v351;
  long c353 = -24;
  unsigned char* ptr354 = &(cast352)[c353];
  long* cast355 = (long*)ptr354;
  long t356 = *cast355;
  unsigned char* cast357 = (unsigned char*)t349;
  unsigned char* ptr358 = &(cast357)[t356];
  struct std__basic_ostream_char__std__char_traits_char__* cast359 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr358;
  struct std__basic_ios_char__std__char_traits_char__* cast360 = (struct std__basic_ios_char__std__char_traits_char__*)cast359;
  char c361 = 10;
  char r362 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast360, c361);
  struct std__basic_ostream_char__std__char_traits_char__* r363 = std__ostream__put(t348, r362);
  struct std__basic_ostream_char__std__char_traits_char__* r364 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r363);
  __retval347 = r364;
  struct std__basic_ostream_char__std__char_traits_char__* t365 = __retval347;
  return t365;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v366) {
bb367:
  struct std__vector_int__std__allocator_int__* this368;
  this368 = v366;
  struct std__vector_int__std__allocator_int__* t369 = this368;
    struct std___Vector_base_int__std__allocator_int__* base370 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t369 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base371 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base370->_M_impl) + 0);
    int* t372 = base371->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base373 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t369 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base374 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base373->_M_impl) + 0);
    int* t375 = base374->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base376 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t369 + 0);
    struct std__allocator_int_* r377 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base376);
    void_std___Destroy_int___int_(t372, t375, r377);
  {
    struct std___Vector_base_int__std__allocator_int__* base378 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t369 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base378);
  }
  return;
}

// function: main
int main() {
bb379:
  int __retval380;
  struct std__vector_int__std__allocator_int__ myvector381;
  struct std__allocator_int_ ref_tmp0382;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it383;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0384;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1385;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2386;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3387;
  struct c_unique agg_tmp4388;
  int c389 = 0;
  __retval380 = c389;
  long* c390 = ((void*)0);
  long r391 = time(c390);
  unsigned int cast392 = (unsigned int)r391;
  srand(cast392);
  unsigned long c393 = 8;
  std__allocator_int___allocator_2(&ref_tmp0382);
    std__vector_int__std__allocator_int_____vector(&myvector381, c393, &ref_tmp0382);
  {
    std__allocator_int____allocator(&ref_tmp0382);
  }
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it383);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r394 = std__vector_int__std__allocator_int_____begin(&myvector381);
    agg_tmp0384 = r394;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r395 = std__vector_int__std__allocator_int_____end(&myvector381);
    agg_tmp1385 = r395;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t396 = agg_tmp0384;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t397 = agg_tmp1385;
    void_std__generate___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____(t396, t397, &RandomNumber);
    char* cast398 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r399 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast398);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1400;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2401;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r402 = std__vector_int__std__allocator_int_____begin(&myvector381);
      ref_tmp1400 = r402;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r403 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it383, &ref_tmp1400);
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r405 = std__vector_int__std__allocator_int_____end(&myvector381);
        ref_tmp2401 = r405;
        _Bool r406 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it383, &ref_tmp2401);
        _Bool u407 = !r406;
        if (!u407) break;
        char* cast408 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r409 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast408);
        int* r410 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it383);
        int t411 = *r410;
        struct std__basic_ostream_char__std__char_traits_char__* r412 = std__ostream__operator__(r409, t411);
      for_step404: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r413 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&it383);
      }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r414 = std__vector_int__std__allocator_int_____begin(&myvector381);
    agg_tmp2386 = r414;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r415 = std__vector_int__std__allocator_int_____end(&myvector381);
    agg_tmp3387 = r415;
    agg_tmp4388 = *&UniqueNumber; // copy
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t416 = agg_tmp2386;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t417 = agg_tmp3387;
    struct c_unique t418 = agg_tmp4388;
    void_std__generate___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______c_unique_(t416, t417, t418);
    unsigned long c419 = 2;
    int* r420 = std__vector_int__std__allocator_int_____operator__(&myvector381, c419);
    int t421 = *r420;
    long cast422 = (long)t421;
    long c423 = 0;
    _Bool c424 = ((cast422 == c423)) ? 1 : 0;
    if (c424) {
    } else {
      char* cast425 = (char*)&(_str_2);
      char* c426 = _str_3;
      unsigned int c427 = 42;
      char* cast428 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast425, c426, c427, cast428);
    }
    char* cast429 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r430 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast429);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3431;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp4432;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r433 = std__vector_int__std__allocator_int_____begin(&myvector381);
      ref_tmp3431 = r433;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r434 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it383, &ref_tmp3431);
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r436 = std__vector_int__std__allocator_int_____end(&myvector381);
        ref_tmp4432 = r436;
        _Bool r437 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it383, &ref_tmp4432);
        _Bool u438 = !r437;
        if (!u438) break;
        char* cast439 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r440 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast439);
        int* r441 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it383);
        int t442 = *r441;
        struct std__basic_ostream_char__std__char_traits_char__* r443 = std__ostream__operator__(r440, t442);
      for_step435: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r444 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&it383);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r445 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c446 = 0;
    __retval380 = c446;
    int t447 = __retval380;
    int ret_val448 = t447;
    {
      std__vector_int__std__allocator_int______vector(&myvector381);
    }
    return ret_val448;
  int t449 = __retval380;
  return t449;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v450) {
bb451:
  struct std____new_allocator_int_* this452;
  this452 = v450;
  struct std____new_allocator_int_* t453 = this452;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v454, unsigned long* v455) {
bb456:
  unsigned long* __a457;
  unsigned long* __b458;
  unsigned long* __retval459;
  __a457 = v454;
  __b458 = v455;
    unsigned long* t460 = __b458;
    unsigned long t461 = *t460;
    unsigned long* t462 = __a457;
    unsigned long t463 = *t462;
    _Bool c464 = ((t461 < t463)) ? 1 : 0;
    if (c464) {
      unsigned long* t465 = __b458;
      __retval459 = t465;
      unsigned long* t466 = __retval459;
      return t466;
    }
  unsigned long* t467 = __a457;
  __retval459 = t467;
  unsigned long* t468 = __retval459;
  return t468;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v469) {
bb470:
  struct std__allocator_int_* __a471;
  unsigned long __retval472;
  unsigned long __diffmax473;
  unsigned long __allocmax474;
  __a471 = v469;
  unsigned long c475 = 2305843009213693951;
  __diffmax473 = c475;
  unsigned long c476 = 4611686018427387903;
  __allocmax474 = c476;
  unsigned long* r477 = unsigned_long_const__std__min_unsigned_long_(&__diffmax473, &__allocmax474);
  unsigned long t478 = *r477;
  __retval472 = t478;
  unsigned long t479 = __retval472;
  return t479;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v480, struct std__allocator_int_* v481) {
bb482:
  struct std__allocator_int_* this483;
  struct std__allocator_int_* __a484;
  this483 = v480;
  __a484 = v481;
  struct std__allocator_int_* t485 = this483;
  struct std____new_allocator_int_* base486 = (struct std____new_allocator_int_*)((char *)t485 + 0);
  struct std__allocator_int_* t487 = __a484;
  struct std____new_allocator_int_* base488 = (struct std____new_allocator_int_*)((char *)t487 + 0);
  std____new_allocator_int_____new_allocator(base486, base488);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v489, struct std__allocator_int_* v490) {
bb491:
  unsigned long __n492;
  struct std__allocator_int_* __a493;
  unsigned long __retval494;
  __n492 = v489;
  __a493 = v490;
    struct std__allocator_int_ ref_tmp0495;
    _Bool tmp_exprcleanup496;
    unsigned long t497 = __n492;
    struct std__allocator_int_* t498 = __a493;
    std__allocator_int___allocator(&ref_tmp0495, t498);
      unsigned long r499 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0495);
      _Bool c500 = ((t497 > r499)) ? 1 : 0;
      tmp_exprcleanup496 = c500;
    {
      std__allocator_int____allocator(&ref_tmp0495);
    }
    _Bool t501 = tmp_exprcleanup496;
    if (t501) {
      char* cast502 = (char*)&(_str_5);
      std____throw_length_error(cast502);
    }
  unsigned long t503 = __n492;
  __retval494 = t503;
  unsigned long t504 = __retval494;
  return t504;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v505, struct std__allocator_int_* v506) {
bb507:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this508;
  struct std__allocator_int_* __a509;
  this508 = v505;
  __a509 = v506;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t510 = this508;
  struct std__allocator_int_* base511 = (struct std__allocator_int_*)((char *)t510 + 0);
  struct std__allocator_int_* t512 = __a509;
  std__allocator_int___allocator(base511, t512);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base513 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t510 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base513);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb514:
  _Bool __retval515;
    _Bool c516 = 0;
    __retval515 = c516;
    _Bool t517 = __retval515;
    return t517;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v518) {
bb519:
  struct std____new_allocator_int_* this520;
  unsigned long __retval521;
  this520 = v518;
  struct std____new_allocator_int_* t522 = this520;
  unsigned long c523 = 9223372036854775807;
  unsigned long c524 = 4;
  unsigned long b525 = c523 / c524;
  __retval521 = b525;
  unsigned long t526 = __retval521;
  return t526;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v527, unsigned long v528, void* v529) {
bb530:
  struct std____new_allocator_int_* this531;
  unsigned long __n532;
  void* unnamed533;
  int* __retval534;
  this531 = v527;
  __n532 = v528;
  unnamed533 = v529;
  struct std____new_allocator_int_* t535 = this531;
    unsigned long t536 = __n532;
    unsigned long r537 = std____new_allocator_int____M_max_size___const(t535);
    _Bool c538 = ((t536 > r537)) ? 1 : 0;
    if (c538) {
        unsigned long t539 = __n532;
        unsigned long c540 = -1;
        unsigned long c541 = 4;
        unsigned long b542 = c540 / c541;
        _Bool c543 = ((t539 > b542)) ? 1 : 0;
        if (c543) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c544 = 4;
    unsigned long c545 = 16;
    _Bool c546 = ((c544 > c545)) ? 1 : 0;
    if (c546) {
      unsigned long __al547;
      unsigned long c548 = 4;
      __al547 = c548;
      unsigned long t549 = __n532;
      unsigned long c550 = 4;
      unsigned long b551 = t549 * c550;
      unsigned long t552 = __al547;
      void* r553 = operator_new_2(b551, t552);
      int* cast554 = (int*)r553;
      __retval534 = cast554;
      int* t555 = __retval534;
      return t555;
    }
  unsigned long t556 = __n532;
  unsigned long c557 = 4;
  unsigned long b558 = t556 * c557;
  void* r559 = operator_new(b558);
  int* cast560 = (int*)r559;
  __retval534 = cast560;
  int* t561 = __retval534;
  return t561;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v562, unsigned long v563) {
bb564:
  struct std__allocator_int_* this565;
  unsigned long __n566;
  int* __retval567;
  this565 = v562;
  __n566 = v563;
  struct std__allocator_int_* t568 = this565;
    _Bool r569 = std____is_constant_evaluated();
    if (r569) {
        unsigned long t570 = __n566;
        unsigned long c571 = 4;
        unsigned long ovr572;
        _Bool ovf573 = __builtin_mul_overflow(t570, c571, &ovr572);
        __n566 = ovr572;
        if (ovf573) {
          std____throw_bad_array_new_length();
        }
      unsigned long t574 = __n566;
      void* r575 = operator_new(t574);
      int* cast576 = (int*)r575;
      __retval567 = cast576;
      int* t577 = __retval567;
      return t577;
    }
  struct std____new_allocator_int_* base578 = (struct std____new_allocator_int_*)((char *)t568 + 0);
  unsigned long t579 = __n566;
  void* c580 = ((void*)0);
  int* r581 = std____new_allocator_int___allocate(base578, t579, c580);
  __retval567 = r581;
  int* t582 = __retval567;
  return t582;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v583, unsigned long v584) {
bb585:
  struct std__allocator_int_* __a586;
  unsigned long __n587;
  int* __retval588;
  __a586 = v583;
  __n587 = v584;
  struct std__allocator_int_* t589 = __a586;
  unsigned long t590 = __n587;
  int* r591 = std__allocator_int___allocate(t589, t590);
  __retval588 = r591;
  int* t592 = __retval588;
  return t592;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v593, unsigned long v594) {
bb595:
  struct std___Vector_base_int__std__allocator_int__* this596;
  unsigned long __n597;
  int* __retval598;
  this596 = v593;
  __n597 = v594;
  struct std___Vector_base_int__std__allocator_int__* t599 = this596;
  unsigned long t600 = __n597;
  unsigned long c601 = 0;
  _Bool c602 = ((t600 != c601)) ? 1 : 0;
  int* ternary603;
  if (c602) {
    struct std__allocator_int_* base604 = (struct std__allocator_int_*)((char *)&(t599->_M_impl) + 0);
    unsigned long t605 = __n597;
    int* r606 = std__allocator_traits_std__allocator_int_____allocate(base604, t605);
    ternary603 = (int*)r606;
  } else {
    int* c607 = ((void*)0);
    ternary603 = (int*)c607;
  }
  __retval598 = ternary603;
  int* t608 = __retval598;
  return t608;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v609, unsigned long v610) {
bb611:
  struct std___Vector_base_int__std__allocator_int__* this612;
  unsigned long __n613;
  this612 = v609;
  __n613 = v610;
  struct std___Vector_base_int__std__allocator_int__* t614 = this612;
  unsigned long t615 = __n613;
  int* r616 = std___Vector_base_int__std__allocator_int______M_allocate(t614, t615);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base617 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t614->_M_impl) + 0);
  base617->_M_start = r616;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base618 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t614->_M_impl) + 0);
  int* t619 = base618->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base620 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t614->_M_impl) + 0);
  base620->_M_finish = t619;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base621 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t614->_M_impl) + 0);
  int* t622 = base621->_M_start;
  unsigned long t623 = __n613;
  int* ptr624 = &(t622)[t623];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base625 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t614->_M_impl) + 0);
  base625->_M_end_of_storage = ptr624;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v626) {
bb627:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this628;
  this628 = v626;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t629 = this628;
  {
    struct std__allocator_int_* base630 = (struct std__allocator_int_*)((char *)t629 + 0);
    std__allocator_int____allocator(base630);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v631, unsigned long v632, struct std__allocator_int_* v633) {
bb634:
  struct std___Vector_base_int__std__allocator_int__* this635;
  unsigned long __n636;
  struct std__allocator_int_* __a637;
  this635 = v631;
  __n636 = v632;
  __a637 = v633;
  struct std___Vector_base_int__std__allocator_int__* t638 = this635;
  struct std__allocator_int_* t639 = __a637;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t638->_M_impl, t639);
    unsigned long t640 = __n636;
    std___Vector_base_int__std__allocator_int______M_create_storage(t638, t640);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb641:
  _Bool __retval642;
    _Bool c643 = 0;
    __retval642 = c643;
    _Bool t644 = __retval642;
    return t644;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v645, int** v646) {
bb647:
  struct std___UninitDestroyGuard_int____void_* this648;
  int** __first649;
  this648 = v645;
  __first649 = v646;
  struct std___UninitDestroyGuard_int____void_* t650 = this648;
  int** t651 = __first649;
  int* t652 = *t651;
  t650->_M_first = t652;
  int** t653 = __first649;
  t650->_M_cur = t653;
  return;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v654) {
bb655:
  int* __location656;
  int* __retval657;
  void* __loc658;
  __location656 = v654;
  int* t659 = __location656;
  void* cast660 = (void*)t659;
  __loc658 = cast660;
    void* t661 = __loc658;
    int* cast662 = (int*)t661;
    int c663 = 0;
    *cast662 = c663;
    __retval657 = cast662;
    int* t664 = __retval657;
    return t664;
  abort();
}

// function: _ZSt10_ConstructIiJEEvPT_DpOT0_
void void_std___Construct_int_(int* v665) {
bb666:
  int* __p667;
  __p667 = v665;
    _Bool r668 = std____is_constant_evaluated();
    if (r668) {
      int* t669 = __p667;
      int* r670 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t669);
      return;
    }
  int* t671 = __p667;
  void* cast672 = (void*)t671;
  int* cast673 = (int*)cast672;
  int c674 = 0;
  *cast673 = c674;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v675) {
bb676:
  struct std___UninitDestroyGuard_int____void_* this677;
  this677 = v675;
  struct std___UninitDestroyGuard_int____void_* t678 = this677;
  int** c679 = ((void*)0);
  t678->_M_cur = c679;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v680) {
bb681:
  struct std___UninitDestroyGuard_int____void_* this682;
  this682 = v680;
  struct std___UninitDestroyGuard_int____void_* t683 = this682;
    int** t684 = t683->_M_cur;
    int** c685 = ((void*)0);
    _Bool c686 = ((t684 != c685)) ? 1 : 0;
    if (c686) {
      int* t687 = t683->_M_first;
      int** t688 = t683->_M_cur;
      int* t689 = *t688;
      void_std___Destroy_int__(t687, t689);
    }
  return;
}

// function: _ZNSt27__uninitialized_default_n_1ILb0EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* v690, unsigned long v691) {
bb692:
  int* __first693;
  unsigned long __n694;
  int* __retval695;
  struct std___UninitDestroyGuard_int____void_ __guard696;
  __first693 = v690;
  __n694 = v691;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard696, &__first693);
      while (1) {
        unsigned long t698 = __n694;
        unsigned long c699 = 0;
        _Bool c700 = ((t698 > c699)) ? 1 : 0;
        if (!c700) break;
        int* t701 = __first693;
        void_std___Construct_int_(t701);
      for_step697: ;
        unsigned long t702 = __n694;
        unsigned long u703 = t702 - 1;
        __n694 = u703;
        int* t704 = __first693;
        int c705 = 1;
        int* ptr706 = &(t704)[c705];
        __first693 = ptr706;
      }
    std___UninitDestroyGuard_int___void___release(&__guard696);
    int* t707 = __first693;
    __retval695 = t707;
    int* t708 = __retval695;
    int* ret_val709 = t708;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard696);
    }
    return ret_val709;
  abort();
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v710, int* v711, int* v712) {
bb713:
  int* __first714;
  int* __last715;
  int* __value716;
  _Bool __load_outside_loop717;
  int __val718;
  __first714 = v710;
  __last715 = v711;
  __value716 = v712;
  _Bool c719 = 1;
  __load_outside_loop717 = c719;
  int* t720 = __value716;
  int t721 = *t720;
  __val718 = t721;
    while (1) {
      int* t723 = __first714;
      int* t724 = __last715;
      _Bool c725 = ((t723 != t724)) ? 1 : 0;
      if (!c725) break;
      int t726 = __val718;
      int* t727 = __first714;
      *t727 = t726;
    for_step722: ;
      int* t728 = __first714;
      int c729 = 1;
      int* ptr730 = &(t728)[c729];
      __first714 = ptr730;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v731, int* v732, int* v733) {
bb734:
  int* __first735;
  int* __last736;
  int* __value737;
  __first735 = v731;
  __last736 = v732;
  __value737 = v733;
  int* t738 = __first735;
  int* t739 = __last736;
  int* t740 = __value737;
  void_std____fill_a1_int___int_(t738, t739, t740);
  return;
}

// function: _ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag
int* int__std____fill_n_a_int___unsigned_long__int_(int* v741, unsigned long v742, int* v743, struct std__random_access_iterator_tag v744) {
bb745:
  int* __first746;
  unsigned long __n747;
  int* __value748;
  struct std__random_access_iterator_tag unnamed749;
  int* __retval750;
  __first746 = v741;
  __n747 = v742;
  __value748 = v743;
  unnamed749 = v744;
    unsigned long t751 = __n747;
    unsigned long c752 = 0;
    _Bool c753 = ((t751 <= c752)) ? 1 : 0;
    if (c753) {
      int* t754 = __first746;
      __retval750 = t754;
      int* t755 = __retval750;
      return t755;
    }
  int* t756 = __first746;
  int* t757 = __first746;
  unsigned long t758 = __n747;
  int* ptr759 = &(t757)[t758];
  int* t760 = __value748;
  void_std____fill_a_int___int_(t756, ptr759, t760);
  int* t761 = __first746;
  unsigned long t762 = __n747;
  int* ptr763 = &(t761)[t762];
  __retval750 = ptr763;
  int* t764 = __retval750;
  return t764;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer(unsigned long v765) {
bb766:
  unsigned long __n767;
  unsigned long __retval768;
  __n767 = v765;
  unsigned long t769 = __n767;
  __retval768 = t769;
  unsigned long t770 = __retval768;
  return t770;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v771) {
bb772:
  int** unnamed773;
  struct std__random_access_iterator_tag __retval774;
  unnamed773 = v771;
  struct std__random_access_iterator_tag t775 = __retval774;
  return t775;
}

// function: _ZSt6fill_nIPimiET_S1_T0_RKT1_
int* int__std__fill_n_int___unsigned_long__int_(int* v776, unsigned long v777, int* v778) {
bb779:
  int* __first780;
  unsigned long __n781;
  int* __value782;
  int* __retval783;
  struct std__random_access_iterator_tag agg_tmp0784;
  __first780 = v776;
  __n781 = v777;
  __value782 = v778;
  int* t785 = __first780;
  unsigned long t786 = __n781;
  unsigned long r787 = std____size_to_integer(t786);
  int* t788 = __value782;
  struct std__random_access_iterator_tag r789 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first780);
  agg_tmp0784 = r789;
  struct std__random_access_iterator_tag t790 = agg_tmp0784;
  int* r791 = int__std____fill_n_a_int___unsigned_long__int_(t785, r787, t788, t790);
  __retval783 = r791;
  int* t792 = __retval783;
  return t792;
}

// function: _ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* v793, unsigned long v794) {
bb795:
  int* __first796;
  unsigned long __n797;
  int* __retval798;
  __first796 = v793;
  __n797 = v794;
    unsigned long t799 = __n797;
    unsigned long c800 = 0;
    _Bool c801 = ((t799 > c800)) ? 1 : 0;
    if (c801) {
      int* __val802;
      int* t803 = __first796;
      __val802 = t803;
      int* t804 = __val802;
      void_std___Construct_int_(t804);
      int* t805 = __first796;
      int c806 = 1;
      int* ptr807 = &(t805)[c806];
      __first796 = ptr807;
      int* t808 = __first796;
      unsigned long t809 = __n797;
      unsigned long c810 = 1;
      unsigned long b811 = t809 - c810;
      int* t812 = __val802;
      int* r813 = int__std__fill_n_int___unsigned_long__int_(t808, b811, t812);
      __first796 = r813;
    }
  int* t814 = __first796;
  __retval798 = t814;
  int* t815 = __retval798;
  return t815;
}

// function: _ZSt25__uninitialized_default_nIPimET_S1_T0_
int* int__std____uninitialized_default_n_int___unsigned_long_(int* v816, unsigned long v817) {
bb818:
  int* __first819;
  unsigned long __n820;
  int* __retval821;
  _Bool __can_fill822;
  __first819 = v816;
  __n820 = v817;
    _Bool r823 = std__is_constant_evaluated();
    if (r823) {
      int* t824 = __first819;
      unsigned long t825 = __n820;
      int* r826 = int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(t824, t825);
      __retval821 = r826;
      int* t827 = __retval821;
      return t827;
    }
  _Bool c828 = 1;
  __can_fill822 = c828;
  int* t829 = __first819;
  unsigned long t830 = __n820;
  int* r831 = int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(t829, t830);
  __retval821 = r831;
  int* t832 = __retval821;
  return t832;
}

// function: _ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* v833, unsigned long v834, struct std__allocator_int_* v835) {
bb836:
  int* __first837;
  unsigned long __n838;
  struct std__allocator_int_* unnamed839;
  int* __retval840;
  __first837 = v833;
  __n838 = v834;
  unnamed839 = v835;
  int* t841 = __first837;
  unsigned long t842 = __n838;
  int* r843 = int__std____uninitialized_default_n_int___unsigned_long_(t841, t842);
  __retval840 = r843;
  int* t844 = __retval840;
  return t844;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v845) {
bb846:
  struct std___Vector_base_int__std__allocator_int__* this847;
  struct std__allocator_int_* __retval848;
  this847 = v845;
  struct std___Vector_base_int__std__allocator_int__* t849 = this847;
  struct std__allocator_int_* base850 = (struct std__allocator_int_*)((char *)&(t849->_M_impl) + 0);
  __retval848 = base850;
  struct std__allocator_int_* t851 = __retval848;
  return t851;
}

// function: _ZNSt6vectorIiSaIiEE21_M_default_initializeEm
void std__vector_int__std__allocator_int______M_default_initialize(struct std__vector_int__std__allocator_int__* v852, unsigned long v853) {
bb854:
  struct std__vector_int__std__allocator_int__* this855;
  unsigned long __n856;
  this855 = v852;
  __n856 = v853;
  struct std__vector_int__std__allocator_int__* t857 = this855;
  struct std___Vector_base_int__std__allocator_int__* base858 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t857 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base859 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base858->_M_impl) + 0);
  int* t860 = base859->_M_start;
  unsigned long t861 = __n856;
  struct std___Vector_base_int__std__allocator_int__* base862 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t857 + 0);
  struct std__allocator_int_* r863 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base862);
  int* r864 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(t860, t861, r863);
  struct std___Vector_base_int__std__allocator_int__* base865 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t857 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base866 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base865->_M_impl) + 0);
  base866->_M_finish = r864;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v867, int* v868, unsigned long v869) {
bb870:
  struct std____new_allocator_int_* this871;
  int* __p872;
  unsigned long __n873;
  this871 = v867;
  __p872 = v868;
  __n873 = v869;
  struct std____new_allocator_int_* t874 = this871;
    unsigned long c875 = 4;
    unsigned long c876 = 16;
    _Bool c877 = ((c875 > c876)) ? 1 : 0;
    if (c877) {
      int* t878 = __p872;
      void* cast879 = (void*)t878;
      unsigned long t880 = __n873;
      unsigned long c881 = 4;
      unsigned long b882 = t880 * c881;
      unsigned long c883 = 4;
      operator_delete_3(cast879, b882, c883);
      return;
    }
  int* t884 = __p872;
  void* cast885 = (void*)t884;
  unsigned long t886 = __n873;
  unsigned long c887 = 4;
  unsigned long b888 = t886 * c887;
  operator_delete_2(cast885, b888);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v889, int* v890, unsigned long v891) {
bb892:
  struct std__allocator_int_* this893;
  int* __p894;
  unsigned long __n895;
  this893 = v889;
  __p894 = v890;
  __n895 = v891;
  struct std__allocator_int_* t896 = this893;
    _Bool r897 = std____is_constant_evaluated();
    if (r897) {
      int* t898 = __p894;
      void* cast899 = (void*)t898;
      operator_delete(cast899);
      return;
    }
  struct std____new_allocator_int_* base900 = (struct std____new_allocator_int_*)((char *)t896 + 0);
  int* t901 = __p894;
  unsigned long t902 = __n895;
  std____new_allocator_int___deallocate(base900, t901, t902);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v903, int* v904, unsigned long v905) {
bb906:
  struct std__allocator_int_* __a907;
  int* __p908;
  unsigned long __n909;
  __a907 = v903;
  __p908 = v904;
  __n909 = v905;
  struct std__allocator_int_* t910 = __a907;
  int* t911 = __p908;
  unsigned long t912 = __n909;
  std__allocator_int___deallocate(t910, t911, t912);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v913, int* v914, unsigned long v915) {
bb916:
  struct std___Vector_base_int__std__allocator_int__* this917;
  int* __p918;
  unsigned long __n919;
  this917 = v913;
  __p918 = v914;
  __n919 = v915;
  struct std___Vector_base_int__std__allocator_int__* t920 = this917;
    int* t921 = __p918;
    _Bool cast922 = (_Bool)t921;
    if (cast922) {
      struct std__allocator_int_* base923 = (struct std__allocator_int_*)((char *)&(t920->_M_impl) + 0);
      int* t924 = __p918;
      unsigned long t925 = __n919;
      std__allocator_traits_std__allocator_int_____deallocate(base923, t924, t925);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v926) {
bb927:
  struct std___Vector_base_int__std__allocator_int__* this928;
  this928 = v926;
  struct std___Vector_base_int__std__allocator_int__* t929 = this928;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base930 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t929->_M_impl) + 0);
    int* t931 = base930->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base932 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t929->_M_impl) + 0);
    int* t933 = base932->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base934 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t929->_M_impl) + 0);
    int* t935 = base934->_M_start;
    long diff936 = t933 - t935;
    unsigned long cast937 = (unsigned long)diff936;
    std___Vector_base_int__std__allocator_int______M_deallocate(t929, t931, cast937);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t929->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v938, struct std____new_allocator_int_* v939) {
bb940:
  struct std____new_allocator_int_* this941;
  struct std____new_allocator_int_* unnamed942;
  this941 = v938;
  unnamed942 = v939;
  struct std____new_allocator_int_* t943 = this941;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v944) {
bb945:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this946;
  this946 = v944;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t947 = this946;
  int* c948 = ((void*)0);
  t947->_M_start = c948;
  int* c949 = ((void*)0);
  t947->_M_finish = c949;
  int* c950 = ((void*)0);
  t947->_M_end_of_storage = c950;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v951) {
bb952:
  int* __location953;
  __location953 = v951;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v954, int* v955) {
bb956:
  int* __first957;
  int* __last958;
  __first957 = v954;
  __last958 = v955;
      _Bool r959 = std____is_constant_evaluated();
      if (r959) {
          while (1) {
            int* t961 = __first957;
            int* t962 = __last958;
            _Bool c963 = ((t961 != t962)) ? 1 : 0;
            if (!c963) break;
            int* t964 = __first957;
            void_std__destroy_at_int_(t964);
          for_step960: ;
            int* t965 = __first957;
            int c966 = 1;
            int* ptr967 = &(t965)[c966];
            __first957 = ptr967;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v968, int* v969, struct std__allocator_int_* v970) {
bb971:
  int* __first972;
  int* __last973;
  struct std__allocator_int_* unnamed974;
  __first972 = v968;
  __last973 = v969;
  unnamed974 = v970;
  int* t975 = __first972;
  int* t976 = __last973;
  void_std___Destroy_int__(t975, t976);
  return;
}

// function: _GLOBAL__sub_I_main.cpp
__attribute__((constructor)) void _GLOBAL__sub_I_main_cpp() {
bb977:
  __cxx_global_var_init();
  return;
}

