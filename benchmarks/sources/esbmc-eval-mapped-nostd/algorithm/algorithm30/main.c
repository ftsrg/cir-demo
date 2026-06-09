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
struct __gnu_cxx____ops___Iter_pred_bool_____int__ { void* _M_pred; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
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

int __const_main_myints[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[17] = "myvector[0] == 2";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm30/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[17] = "myvector[1] == 4";
char _str_3[17] = "myvector[2] == 6";
char _str_4[17] = "myvector[3] == 8";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[19] = "myvector contains:";
char _str_6[2] = " ";
char _str_7[49] = "cannot create std::vector larger than max_size()";
char _str_8[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_9[19] = "__n < this->size()";
_Bool IsOdd(int p0);
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool bool___gnu_cxx____ops___Iter_pred_bool_____int____operator___int__(struct __gnu_cxx____ops___Iter_pred_bool_____int__* p0, int* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____remove_copy_if_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool_____int_____int___int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool____(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____ops___Iter_pred_bool_____int__ p3);
void __gnu_cxx____ops___Iter_pred_bool_____int_____Iter_pred_bool____(struct __gnu_cxx____ops___Iter_pred_bool_____int__* p0, void* p1);
struct __gnu_cxx____ops___Iter_pred_bool_____int__ __gnu_cxx____ops___Iter_pred_bool_____int_____gnu_cxx____ops____pred_iter_bool_____int___bool____(void* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__remove_copy_if_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int___int___int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, void* p3);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
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

// function: _Z5IsOddi
_Bool IsOdd(int v0) {
bb1:
  int i2;
  _Bool __retval3;
  i2 = v0;
  int t4 = i2;
  int c5 = 2;
  int b6 = t4 % c5;
  int c7 = 1;
  _Bool c8 = ((b6 == c7)) ? 1 : 0;
  __retval3 = c8;
  _Bool t9 = __retval3;
  return t9;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator_2(struct std__allocator_int_* v10) {
bb11:
  struct std__allocator_int_* this12;
  this12 = v10;
  struct std__allocator_int_* t13 = this12;
  struct std____new_allocator_int_* base14 = (struct std____new_allocator_int_*)((char *)t13 + 0);
  std____new_allocator_int_____new_allocator_2(base14);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2EmRKS0_
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v15, unsigned long v16, struct std__allocator_int_* v17) {
bb18:
  struct std__vector_int__std__allocator_int__* this19;
  unsigned long __n20;
  struct std__allocator_int_* __a21;
  this19 = v15;
  __n20 = v16;
  __a21 = v17;
  struct std__vector_int__std__allocator_int__* t22 = this19;
  struct std___Vector_base_int__std__allocator_int__* base23 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t22 + 0);
  unsigned long t24 = __n20;
  struct std__allocator_int_* t25 = __a21;
  unsigned long r26 = std__vector_int__std__allocator_int______S_check_init_len(t24, t25);
  struct std__allocator_int_* t27 = __a21;
  std___Vector_base_int__std__allocator_int______Vector_base(base23, r26, t27);
    unsigned long t28 = __n20;
    std__vector_int__std__allocator_int______M_default_initialize(t22, t28);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v29) {
bb30:
  struct std__allocator_int_* this31;
  this31 = v29;
  struct std__allocator_int_* t32 = this31;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v33) {
bb34:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this35;
  this35 = v33;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t36 = this35;
  int* c37 = ((void*)0);
  t36->_M_current = c37;
  return;
}

// function: _ZN9__gnu_cxx5__ops10_Iter_predIPFbiEEclIPiEEbT_
_Bool bool___gnu_cxx____ops___Iter_pred_bool_____int____operator___int__(struct __gnu_cxx____ops___Iter_pred_bool_____int__* v38, int* v39) {
bb40:
  struct __gnu_cxx____ops___Iter_pred_bool_____int__* this41;
  int* __it42;
  _Bool __retval43;
  this41 = v38;
  __it42 = v39;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__* t44 = this41;
  void* t45 = t44->_M_pred;
  int* t46 = __it42;
  int t47 = *t46;
  _Bool r48 = ((_Bool (*)(int))t45)(t47);
  __retval43 = r48;
  _Bool t49 = __retval43;
  return t49;
}

// function: _ZSt16__remove_copy_ifIPiN9__gnu_cxx17__normal_iteratorIS0_St6vectorIiSaIiEEEENS1_5__ops10_Iter_predIPFbiEEEET0_T_SD_SC_T1_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____remove_copy_if_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool_____int_____int___int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool____(int* v50, int* v51, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v52, struct __gnu_cxx____ops___Iter_pred_bool_____int__ v53) {
bb54:
  int* __first55;
  int* __last56;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result57;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ __pred58;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval59;
  __first55 = v50;
  __last56 = v51;
  __result57 = v52;
  __pred58 = v53;
    while (1) {
      int* t61 = __first55;
      int* t62 = __last56;
      _Bool c63 = ((t61 != t62)) ? 1 : 0;
      if (!c63) break;
        int* t64 = __first55;
        _Bool r65 = bool___gnu_cxx____ops___Iter_pred_bool_____int____operator___int__(&__pred58, t64);
        _Bool u66 = !r65;
        if (u66) {
          int* t67 = __first55;
          int t68 = *t67;
          int* r69 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result57);
          *r69 = t68;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r70 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__result57);
        }
    for_step60: ;
      int* t71 = __first55;
      int c72 = 1;
      int* ptr73 = &(t71)[c72];
      __first55 = ptr73;
    }
  __retval59 = __result57; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t74 = __retval59;
  return t74;
}

// function: _ZN9__gnu_cxx5__ops10_Iter_predIPFbiEEC2ES3_
void __gnu_cxx____ops___Iter_pred_bool_____int_____Iter_pred_bool____(struct __gnu_cxx____ops___Iter_pred_bool_____int__* v75, void* v76) {
bb77:
  struct __gnu_cxx____ops___Iter_pred_bool_____int__* this78;
  void* __pred79;
  this78 = v75;
  __pred79 = v76;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__* t80 = this78;
  void* t81 = __pred79;
  t80->_M_pred = t81;
  return;
}

// function: _ZN9__gnu_cxx5__ops11__pred_iterIPFbiEEENS0_10_Iter_predIT_EES5_
struct __gnu_cxx____ops___Iter_pred_bool_____int__ __gnu_cxx____ops___Iter_pred_bool_____int_____gnu_cxx____ops____pred_iter_bool_____int___bool____(void* v82) {
bb83:
  void* __pred84;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ __retval85;
  __pred84 = v82;
  void* t86 = __pred84;
  __gnu_cxx____ops___Iter_pred_bool_____int_____Iter_pred_bool____(&__retval85, t86);
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ t87 = __retval85;
  return t87;
}

// function: _ZSt14remove_copy_ifIPiN9__gnu_cxx17__normal_iteratorIS0_St6vectorIiSaIiEEEEPFbiEET0_T_SA_S9_T1_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__remove_copy_if_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int___int___int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(int* v88, int* v89, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v90, void* v91) {
bb92:
  int* __first93;
  int* __last94;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result95;
  void* __pred96;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval97;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp098;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ agg_tmp199;
  __first93 = v88;
  __last94 = v89;
  __result95 = v90;
  __pred96 = v91;
  int* t100 = __first93;
  int* t101 = __last94;
  agg_tmp098 = __result95; // copy
  void* t102 = __pred96;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ r103 = __gnu_cxx____ops___Iter_pred_bool_____int_____gnu_cxx____ops____pred_iter_bool_____int___bool____(t102);
  agg_tmp199 = r103;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t104 = agg_tmp098;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ t105 = agg_tmp199;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r106 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____remove_copy_if_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool_____int_____int___int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool____(t100, t101, t104, t105);
  __retval97 = r106;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t107 = __retval97;
  return t107;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v108, int** v109) {
bb110:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this111;
  int** __i112;
  this111 = v108;
  __i112 = v109;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t113 = this111;
  int** t114 = __i112;
  int* t115 = *t114;
  t113->_M_current = t115;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v116) {
bb117:
  struct std__vector_int__std__allocator_int__* this118;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval119;
  this118 = v116;
  struct std__vector_int__std__allocator_int__* t120 = this118;
  struct std___Vector_base_int__std__allocator_int__* base121 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t120 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base122 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base121->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval119, &base122->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t123 = __retval119;
  return t123;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v124) {
bb125:
  struct std__vector_int__std__allocator_int__* this126;
  unsigned long __retval127;
  long __dif128;
  this126 = v124;
  struct std__vector_int__std__allocator_int__* t129 = this126;
  struct std___Vector_base_int__std__allocator_int__* base130 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t129 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base131 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base130->_M_impl) + 0);
  int* t132 = base131->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base133 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t129 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base134 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base133->_M_impl) + 0);
  int* t135 = base134->_M_start;
  long diff136 = t132 - t135;
  __dif128 = diff136;
    long t137 = __dif128;
    long c138 = 0;
    _Bool c139 = ((t137 < c138)) ? 1 : 0;
    if (c139) {
      __builtin_unreachable();
    }
  long t140 = __dif128;
  unsigned long cast141 = (unsigned long)t140;
  __retval127 = cast141;
  unsigned long t142 = __retval127;
  return t142;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v143, unsigned long v144) {
bb145:
  struct std__vector_int__std__allocator_int__* this146;
  unsigned long __n147;
  int* __retval148;
  this146 = v143;
  __n147 = v144;
  struct std__vector_int__std__allocator_int__* t149 = this146;
    do {
          unsigned long t150 = __n147;
          unsigned long r151 = std__vector_int__std__allocator_int_____size___const(t149);
          _Bool c152 = ((t150 < r151)) ? 1 : 0;
          _Bool u153 = !c152;
          if (u153) {
            char* cast154 = (char*)&(_str_8);
            int c155 = 1263;
            char* cast156 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast157 = (char*)&(_str_9);
            std____glibcxx_assert_fail(cast154, c155, cast156, cast157);
          }
      _Bool c158 = 0;
      if (!c158) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base159 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t149 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base160 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base159->_M_impl) + 0);
  int* t161 = base160->_M_start;
  unsigned long t162 = __n147;
  int* ptr163 = &(t161)[t162];
  __retval148 = ptr163;
  int* t164 = __retval148;
  return t164;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v165, int v166) {
bb167:
  int __a168;
  int __b169;
  int __retval170;
  __a168 = v165;
  __b169 = v166;
  int t171 = __a168;
  int t172 = __b169;
  int b173 = t171 | t172;
  __retval170 = b173;
  int t174 = __retval170;
  return t174;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v175) {
bb176:
  struct std__basic_ios_char__std__char_traits_char__* this177;
  int __retval178;
  this177 = v175;
  struct std__basic_ios_char__std__char_traits_char__* t179 = this177;
  struct std__ios_base* base180 = (struct std__ios_base*)((char *)t179 + 0);
  int t181 = base180->_M_streambuf_state;
  __retval178 = t181;
  int t182 = __retval178;
  return t182;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v183, int v184) {
bb185:
  struct std__basic_ios_char__std__char_traits_char__* this186;
  int __state187;
  this186 = v183;
  __state187 = v184;
  struct std__basic_ios_char__std__char_traits_char__* t188 = this186;
  int r189 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t188);
  int t190 = __state187;
  int r191 = std__operator_(r189, t190);
  std__basic_ios_char__std__char_traits_char_____clear(t188, r191);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v192, char* v193) {
bb194:
  char* __c1195;
  char* __c2196;
  _Bool __retval197;
  __c1195 = v192;
  __c2196 = v193;
  char* t198 = __c1195;
  char t199 = *t198;
  int cast200 = (int)t199;
  char* t201 = __c2196;
  char t202 = *t201;
  int cast203 = (int)t202;
  _Bool c204 = ((cast200 == cast203)) ? 1 : 0;
  __retval197 = c204;
  _Bool t205 = __retval197;
  return t205;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v206) {
bb207:
  char* __p208;
  unsigned long __retval209;
  unsigned long __i210;
  __p208 = v206;
  unsigned long c211 = 0;
  __i210 = c211;
    char ref_tmp0212;
    while (1) {
      unsigned long t213 = __i210;
      char* t214 = __p208;
      char* ptr215 = &(t214)[t213];
      char c216 = 0;
      ref_tmp0212 = c216;
      _Bool r217 = __gnu_cxx__char_traits_char___eq(ptr215, &ref_tmp0212);
      _Bool u218 = !r217;
      if (!u218) break;
      unsigned long t219 = __i210;
      unsigned long u220 = t219 + 1;
      __i210 = u220;
    }
  unsigned long t221 = __i210;
  __retval209 = t221;
  unsigned long t222 = __retval209;
  return t222;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v223) {
bb224:
  char* __s225;
  unsigned long __retval226;
  __s225 = v223;
    _Bool r227 = std____is_constant_evaluated();
    if (r227) {
      char* t228 = __s225;
      unsigned long r229 = __gnu_cxx__char_traits_char___length(t228);
      __retval226 = r229;
      unsigned long t230 = __retval226;
      return t230;
    }
  char* t231 = __s225;
  unsigned long r232 = strlen(t231);
  __retval226 = r232;
  unsigned long t233 = __retval226;
  return t233;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v234, char* v235) {
bb236:
  struct std__basic_ostream_char__std__char_traits_char__* __out237;
  char* __s238;
  struct std__basic_ostream_char__std__char_traits_char__* __retval239;
  __out237 = v234;
  __s238 = v235;
    char* t240 = __s238;
    _Bool cast241 = (_Bool)t240;
    _Bool u242 = !cast241;
    if (u242) {
      struct std__basic_ostream_char__std__char_traits_char__* t243 = __out237;
      void** v244 = (void**)t243;
      void* v245 = *((void**)v244);
      unsigned char* cast246 = (unsigned char*)v245;
      long c247 = -24;
      unsigned char* ptr248 = &(cast246)[c247];
      long* cast249 = (long*)ptr248;
      long t250 = *cast249;
      unsigned char* cast251 = (unsigned char*)t243;
      unsigned char* ptr252 = &(cast251)[t250];
      struct std__basic_ostream_char__std__char_traits_char__* cast253 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr252;
      struct std__basic_ios_char__std__char_traits_char__* cast254 = (struct std__basic_ios_char__std__char_traits_char__*)cast253;
      int t255 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast254, t255);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t256 = __out237;
      char* t257 = __s238;
      char* t258 = __s238;
      unsigned long r259 = std__char_traits_char___length(t258);
      long cast260 = (long)r259;
      struct std__basic_ostream_char__std__char_traits_char__* r261 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t256, t257, cast260);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t262 = __out237;
  __retval239 = t262;
  struct std__basic_ostream_char__std__char_traits_char__* t263 = __retval239;
  return t263;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v264, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v265) {
bb266:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this267;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed268;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval269;
  this267 = v264;
  unnamed268 = v265;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t270 = this267;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t271 = unnamed268;
  int* t272 = t271->_M_current;
  t270->_M_current = t272;
  __retval269 = t270;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t273 = __retval269;
  return t273;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v274) {
bb275:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this276;
  int** __retval277;
  this276 = v274;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t278 = this276;
  __retval277 = &t278->_M_current;
  int** t279 = __retval277;
  return t279;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v280, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v281) {
bb282:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs283;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs284;
  _Bool __retval285;
  __lhs283 = v280;
  __rhs284 = v281;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t286 = __lhs283;
  int** r287 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t286);
  int* t288 = *r287;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t289 = __rhs284;
  int** r290 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t289);
  int* t291 = *r290;
  _Bool c292 = ((t288 == t291)) ? 1 : 0;
  __retval285 = c292;
  _Bool t293 = __retval285;
  return t293;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v294) {
bb295:
  struct std__vector_int__std__allocator_int__* this296;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval297;
  this296 = v294;
  struct std__vector_int__std__allocator_int__* t298 = this296;
  struct std___Vector_base_int__std__allocator_int__* base299 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t298 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base300 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base299->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval297, &base300->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t301 = __retval297;
  return t301;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v302) {
bb303:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this304;
  int* __retval305;
  this304 = v302;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t306 = this304;
  int* t307 = t306->_M_current;
  __retval305 = t307;
  int* t308 = __retval305;
  return t308;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v309) {
bb310:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this311;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval312;
  this311 = v309;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t313 = this311;
  int* t314 = t313->_M_current;
  int c315 = 1;
  int* ptr316 = &(t314)[c315];
  t313->_M_current = ptr316;
  __retval312 = t313;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t317 = __retval312;
  return t317;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v318, void* v319) {
bb320:
  struct std__basic_ostream_char__std__char_traits_char__* this321;
  void* __pf322;
  struct std__basic_ostream_char__std__char_traits_char__* __retval323;
  this321 = v318;
  __pf322 = v319;
  struct std__basic_ostream_char__std__char_traits_char__* t324 = this321;
  void* t325 = __pf322;
  struct std__basic_ostream_char__std__char_traits_char__* r326 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t325)(t324);
  __retval323 = r326;
  struct std__basic_ostream_char__std__char_traits_char__* t327 = __retval323;
  return t327;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v328) {
bb329:
  struct std__basic_ostream_char__std__char_traits_char__* __os330;
  struct std__basic_ostream_char__std__char_traits_char__* __retval331;
  __os330 = v328;
  struct std__basic_ostream_char__std__char_traits_char__* t332 = __os330;
  struct std__basic_ostream_char__std__char_traits_char__* r333 = std__ostream__flush(t332);
  __retval331 = r333;
  struct std__basic_ostream_char__std__char_traits_char__* t334 = __retval331;
  return t334;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v335) {
bb336:
  struct std__ctype_char_* __f337;
  struct std__ctype_char_* __retval338;
  __f337 = v335;
    struct std__ctype_char_* t339 = __f337;
    _Bool cast340 = (_Bool)t339;
    _Bool u341 = !cast340;
    if (u341) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t342 = __f337;
  __retval338 = t342;
  struct std__ctype_char_* t343 = __retval338;
  return t343;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v344, char v345) {
bb346:
  struct std__ctype_char_* this347;
  char __c348;
  char __retval349;
  this347 = v344;
  __c348 = v345;
  struct std__ctype_char_* t350 = this347;
    char t351 = t350->_M_widen_ok;
    _Bool cast352 = (_Bool)t351;
    if (cast352) {
      char t353 = __c348;
      unsigned char cast354 = (unsigned char)t353;
      unsigned long cast355 = (unsigned long)cast354;
      char t356 = t350->_M_widen[cast355];
      __retval349 = t356;
      char t357 = __retval349;
      return t357;
    }
  std__ctype_char____M_widen_init___const(t350);
  char t358 = __c348;
  void** v359 = (void**)t350;
  void* v360 = *((void**)v359);
  char vcall363 = (char)__VERIFIER_virtual_call_char_char(t350, 6, t358);
  __retval349 = vcall363;
  char t364 = __retval349;
  return t364;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v365, char v366) {
bb367:
  struct std__basic_ios_char__std__char_traits_char__* this368;
  char __c369;
  char __retval370;
  this368 = v365;
  __c369 = v366;
  struct std__basic_ios_char__std__char_traits_char__* t371 = this368;
  struct std__ctype_char_* t372 = t371->_M_ctype;
  struct std__ctype_char_* r373 = std__ctype_char__const__std____check_facet_std__ctype_char___(t372);
  char t374 = __c369;
  char r375 = std__ctype_char___widen_char__const(r373, t374);
  __retval370 = r375;
  char t376 = __retval370;
  return t376;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v377) {
bb378:
  struct std__basic_ostream_char__std__char_traits_char__* __os379;
  struct std__basic_ostream_char__std__char_traits_char__* __retval380;
  __os379 = v377;
  struct std__basic_ostream_char__std__char_traits_char__* t381 = __os379;
  struct std__basic_ostream_char__std__char_traits_char__* t382 = __os379;
  void** v383 = (void**)t382;
  void* v384 = *((void**)v383);
  unsigned char* cast385 = (unsigned char*)v384;
  long c386 = -24;
  unsigned char* ptr387 = &(cast385)[c386];
  long* cast388 = (long*)ptr387;
  long t389 = *cast388;
  unsigned char* cast390 = (unsigned char*)t382;
  unsigned char* ptr391 = &(cast390)[t389];
  struct std__basic_ostream_char__std__char_traits_char__* cast392 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr391;
  struct std__basic_ios_char__std__char_traits_char__* cast393 = (struct std__basic_ios_char__std__char_traits_char__*)cast392;
  char c394 = 10;
  char r395 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast393, c394);
  struct std__basic_ostream_char__std__char_traits_char__* r396 = std__ostream__put(t381, r395);
  struct std__basic_ostream_char__std__char_traits_char__* r397 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r396);
  __retval380 = r397;
  struct std__basic_ostream_char__std__char_traits_char__* t398 = __retval380;
  return t398;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v399) {
bb400:
  struct std__vector_int__std__allocator_int__* this401;
  this401 = v399;
  struct std__vector_int__std__allocator_int__* t402 = this401;
    struct std___Vector_base_int__std__allocator_int__* base403 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t402 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base404 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base403->_M_impl) + 0);
    int* t405 = base404->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base406 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t402 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base407 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base406->_M_impl) + 0);
    int* t408 = base407->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base409 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t402 + 0);
    struct std__allocator_int_* r410 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base409);
    void_std___Destroy_int___int_(t405, t408, r410);
  {
    struct std___Vector_base_int__std__allocator_int__* base411 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t402 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base411);
  }
  return;
}

// function: main
int main() {
bb412:
  int __retval413;
  int myints414[9];
  struct std__vector_int__std__allocator_int__ myvector415;
  struct std__allocator_int_ ref_tmp0416;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it417;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0418;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1419;
  int c420 = 0;
  __retval413 = c420;
  // array copy
  __builtin_memcpy(myints414, __const_main_myints, (unsigned long)9 * sizeof(__const_main_myints[0]));
  unsigned long c421 = 9;
  std__allocator_int___allocator_2(&ref_tmp0416);
    std__vector_int__std__allocator_int_____vector(&myvector415, c421, &ref_tmp0416);
  {
    std__allocator_int____allocator(&ref_tmp0416);
  }
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it417);
    int* cast422 = (int*)&(myints414);
    int* cast423 = (int*)&(myints414);
    int c424 = 9;
    int* ptr425 = &(cast423)[c424];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r426 = std__vector_int__std__allocator_int_____begin(&myvector415);
    agg_tmp0418 = r426;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t427 = agg_tmp0418;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r428 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__remove_copy_if_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int___int___int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(cast422, ptr425, t427, &IsOdd);
    agg_tmp1419 = r428;
    unsigned long c429 = 0;
    int* r430 = std__vector_int__std__allocator_int_____operator__(&myvector415, c429);
    int t431 = *r430;
    int c432 = 2;
    _Bool c433 = ((t431 == c432)) ? 1 : 0;
    if (c433) {
    } else {
      char* cast434 = (char*)&(_str);
      char* c435 = _str_1;
      unsigned int c436 = 23;
      char* cast437 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast434, c435, c436, cast437);
    }
    unsigned long c438 = 1;
    int* r439 = std__vector_int__std__allocator_int_____operator__(&myvector415, c438);
    int t440 = *r439;
    int c441 = 4;
    _Bool c442 = ((t440 == c441)) ? 1 : 0;
    if (c442) {
    } else {
      char* cast443 = (char*)&(_str_2);
      char* c444 = _str_1;
      unsigned int c445 = 24;
      char* cast446 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast443, c444, c445, cast446);
    }
    unsigned long c447 = 2;
    int* r448 = std__vector_int__std__allocator_int_____operator__(&myvector415, c447);
    int t449 = *r448;
    int c450 = 6;
    _Bool c451 = ((t449 == c450)) ? 1 : 0;
    if (c451) {
    } else {
      char* cast452 = (char*)&(_str_3);
      char* c453 = _str_1;
      unsigned int c454 = 25;
      char* cast455 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast452, c453, c454, cast455);
    }
    unsigned long c456 = 3;
    int* r457 = std__vector_int__std__allocator_int_____operator__(&myvector415, c456);
    int t458 = *r457;
    int c459 = 8;
    _Bool c460 = ((t458 == c459)) ? 1 : 0;
    if (c460) {
    } else {
      char* cast461 = (char*)&(_str_4);
      char* c462 = _str_1;
      unsigned int c463 = 26;
      char* cast464 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast461, c462, c463, cast464);
    }
    char* cast465 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* r466 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast465);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1467;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2468;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r469 = std__vector_int__std__allocator_int_____begin(&myvector415);
      ref_tmp1467 = r469;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r470 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it417, &ref_tmp1467);
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r472 = std__vector_int__std__allocator_int_____end(&myvector415);
        ref_tmp2468 = r472;
        _Bool r473 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it417, &ref_tmp2468);
        _Bool u474 = !r473;
        if (!u474) break;
        char* cast475 = (char*)&(_str_6);
        struct std__basic_ostream_char__std__char_traits_char__* r476 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast475);
        int* r477 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it417);
        int t478 = *r477;
        struct std__basic_ostream_char__std__char_traits_char__* r479 = std__ostream__operator__(r476, t478);
      for_step471: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r480 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&it417);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r481 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c482 = 0;
    __retval413 = c482;
    int t483 = __retval413;
    int ret_val484 = t483;
    {
      std__vector_int__std__allocator_int______vector(&myvector415);
    }
    return ret_val484;
  int t485 = __retval413;
  return t485;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v486) {
bb487:
  struct std____new_allocator_int_* this488;
  this488 = v486;
  struct std____new_allocator_int_* t489 = this488;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v490, unsigned long* v491) {
bb492:
  unsigned long* __a493;
  unsigned long* __b494;
  unsigned long* __retval495;
  __a493 = v490;
  __b494 = v491;
    unsigned long* t496 = __b494;
    unsigned long t497 = *t496;
    unsigned long* t498 = __a493;
    unsigned long t499 = *t498;
    _Bool c500 = ((t497 < t499)) ? 1 : 0;
    if (c500) {
      unsigned long* t501 = __b494;
      __retval495 = t501;
      unsigned long* t502 = __retval495;
      return t502;
    }
  unsigned long* t503 = __a493;
  __retval495 = t503;
  unsigned long* t504 = __retval495;
  return t504;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v505) {
bb506:
  struct std__allocator_int_* __a507;
  unsigned long __retval508;
  unsigned long __diffmax509;
  unsigned long __allocmax510;
  __a507 = v505;
  unsigned long c511 = 2305843009213693951;
  __diffmax509 = c511;
  unsigned long c512 = 4611686018427387903;
  __allocmax510 = c512;
  unsigned long* r513 = unsigned_long_const__std__min_unsigned_long_(&__diffmax509, &__allocmax510);
  unsigned long t514 = *r513;
  __retval508 = t514;
  unsigned long t515 = __retval508;
  return t515;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v516, struct std__allocator_int_* v517) {
bb518:
  struct std__allocator_int_* this519;
  struct std__allocator_int_* __a520;
  this519 = v516;
  __a520 = v517;
  struct std__allocator_int_* t521 = this519;
  struct std____new_allocator_int_* base522 = (struct std____new_allocator_int_*)((char *)t521 + 0);
  struct std__allocator_int_* t523 = __a520;
  struct std____new_allocator_int_* base524 = (struct std____new_allocator_int_*)((char *)t523 + 0);
  std____new_allocator_int_____new_allocator(base522, base524);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v525, struct std__allocator_int_* v526) {
bb527:
  unsigned long __n528;
  struct std__allocator_int_* __a529;
  unsigned long __retval530;
  __n528 = v525;
  __a529 = v526;
    struct std__allocator_int_ ref_tmp0531;
    _Bool tmp_exprcleanup532;
    unsigned long t533 = __n528;
    struct std__allocator_int_* t534 = __a529;
    std__allocator_int___allocator(&ref_tmp0531, t534);
      unsigned long r535 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0531);
      _Bool c536 = ((t533 > r535)) ? 1 : 0;
      tmp_exprcleanup532 = c536;
    {
      std__allocator_int____allocator(&ref_tmp0531);
    }
    _Bool t537 = tmp_exprcleanup532;
    if (t537) {
      char* cast538 = (char*)&(_str_7);
      std____throw_length_error(cast538);
    }
  unsigned long t539 = __n528;
  __retval530 = t539;
  unsigned long t540 = __retval530;
  return t540;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v541, struct std__allocator_int_* v542) {
bb543:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this544;
  struct std__allocator_int_* __a545;
  this544 = v541;
  __a545 = v542;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t546 = this544;
  struct std__allocator_int_* base547 = (struct std__allocator_int_*)((char *)t546 + 0);
  struct std__allocator_int_* t548 = __a545;
  std__allocator_int___allocator(base547, t548);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base549 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t546 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base549);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb550:
  _Bool __retval551;
    _Bool c552 = 0;
    __retval551 = c552;
    _Bool t553 = __retval551;
    return t553;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v554) {
bb555:
  struct std____new_allocator_int_* this556;
  unsigned long __retval557;
  this556 = v554;
  struct std____new_allocator_int_* t558 = this556;
  unsigned long c559 = 9223372036854775807;
  unsigned long c560 = 4;
  unsigned long b561 = c559 / c560;
  __retval557 = b561;
  unsigned long t562 = __retval557;
  return t562;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v563, unsigned long v564, void* v565) {
bb566:
  struct std____new_allocator_int_* this567;
  unsigned long __n568;
  void* unnamed569;
  int* __retval570;
  this567 = v563;
  __n568 = v564;
  unnamed569 = v565;
  struct std____new_allocator_int_* t571 = this567;
    unsigned long t572 = __n568;
    unsigned long r573 = std____new_allocator_int____M_max_size___const(t571);
    _Bool c574 = ((t572 > r573)) ? 1 : 0;
    if (c574) {
        unsigned long t575 = __n568;
        unsigned long c576 = -1;
        unsigned long c577 = 4;
        unsigned long b578 = c576 / c577;
        _Bool c579 = ((t575 > b578)) ? 1 : 0;
        if (c579) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c580 = 4;
    unsigned long c581 = 16;
    _Bool c582 = ((c580 > c581)) ? 1 : 0;
    if (c582) {
      unsigned long __al583;
      unsigned long c584 = 4;
      __al583 = c584;
      unsigned long t585 = __n568;
      unsigned long c586 = 4;
      unsigned long b587 = t585 * c586;
      unsigned long t588 = __al583;
      void* r589 = operator_new_2(b587, t588);
      int* cast590 = (int*)r589;
      __retval570 = cast590;
      int* t591 = __retval570;
      return t591;
    }
  unsigned long t592 = __n568;
  unsigned long c593 = 4;
  unsigned long b594 = t592 * c593;
  void* r595 = operator_new(b594);
  int* cast596 = (int*)r595;
  __retval570 = cast596;
  int* t597 = __retval570;
  return t597;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v598, unsigned long v599) {
bb600:
  struct std__allocator_int_* this601;
  unsigned long __n602;
  int* __retval603;
  this601 = v598;
  __n602 = v599;
  struct std__allocator_int_* t604 = this601;
    _Bool r605 = std____is_constant_evaluated();
    if (r605) {
        unsigned long t606 = __n602;
        unsigned long c607 = 4;
        unsigned long ovr608;
        _Bool ovf609 = __builtin_mul_overflow(t606, c607, &ovr608);
        __n602 = ovr608;
        if (ovf609) {
          std____throw_bad_array_new_length();
        }
      unsigned long t610 = __n602;
      void* r611 = operator_new(t610);
      int* cast612 = (int*)r611;
      __retval603 = cast612;
      int* t613 = __retval603;
      return t613;
    }
  struct std____new_allocator_int_* base614 = (struct std____new_allocator_int_*)((char *)t604 + 0);
  unsigned long t615 = __n602;
  void* c616 = ((void*)0);
  int* r617 = std____new_allocator_int___allocate(base614, t615, c616);
  __retval603 = r617;
  int* t618 = __retval603;
  return t618;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v619, unsigned long v620) {
bb621:
  struct std__allocator_int_* __a622;
  unsigned long __n623;
  int* __retval624;
  __a622 = v619;
  __n623 = v620;
  struct std__allocator_int_* t625 = __a622;
  unsigned long t626 = __n623;
  int* r627 = std__allocator_int___allocate(t625, t626);
  __retval624 = r627;
  int* t628 = __retval624;
  return t628;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v629, unsigned long v630) {
bb631:
  struct std___Vector_base_int__std__allocator_int__* this632;
  unsigned long __n633;
  int* __retval634;
  this632 = v629;
  __n633 = v630;
  struct std___Vector_base_int__std__allocator_int__* t635 = this632;
  unsigned long t636 = __n633;
  unsigned long c637 = 0;
  _Bool c638 = ((t636 != c637)) ? 1 : 0;
  int* ternary639;
  if (c638) {
    struct std__allocator_int_* base640 = (struct std__allocator_int_*)((char *)&(t635->_M_impl) + 0);
    unsigned long t641 = __n633;
    int* r642 = std__allocator_traits_std__allocator_int_____allocate(base640, t641);
    ternary639 = (int*)r642;
  } else {
    int* c643 = ((void*)0);
    ternary639 = (int*)c643;
  }
  __retval634 = ternary639;
  int* t644 = __retval634;
  return t644;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v645, unsigned long v646) {
bb647:
  struct std___Vector_base_int__std__allocator_int__* this648;
  unsigned long __n649;
  this648 = v645;
  __n649 = v646;
  struct std___Vector_base_int__std__allocator_int__* t650 = this648;
  unsigned long t651 = __n649;
  int* r652 = std___Vector_base_int__std__allocator_int______M_allocate(t650, t651);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base653 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t650->_M_impl) + 0);
  base653->_M_start = r652;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base654 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t650->_M_impl) + 0);
  int* t655 = base654->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base656 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t650->_M_impl) + 0);
  base656->_M_finish = t655;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base657 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t650->_M_impl) + 0);
  int* t658 = base657->_M_start;
  unsigned long t659 = __n649;
  int* ptr660 = &(t658)[t659];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base661 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t650->_M_impl) + 0);
  base661->_M_end_of_storage = ptr660;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v662) {
bb663:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this664;
  this664 = v662;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t665 = this664;
  {
    struct std__allocator_int_* base666 = (struct std__allocator_int_*)((char *)t665 + 0);
    std__allocator_int____allocator(base666);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v667, unsigned long v668, struct std__allocator_int_* v669) {
bb670:
  struct std___Vector_base_int__std__allocator_int__* this671;
  unsigned long __n672;
  struct std__allocator_int_* __a673;
  this671 = v667;
  __n672 = v668;
  __a673 = v669;
  struct std___Vector_base_int__std__allocator_int__* t674 = this671;
  struct std__allocator_int_* t675 = __a673;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t674->_M_impl, t675);
    unsigned long t676 = __n672;
    std___Vector_base_int__std__allocator_int______M_create_storage(t674, t676);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb677:
  _Bool __retval678;
    _Bool c679 = 0;
    __retval678 = c679;
    _Bool t680 = __retval678;
    return t680;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v681, int** v682) {
bb683:
  struct std___UninitDestroyGuard_int____void_* this684;
  int** __first685;
  this684 = v681;
  __first685 = v682;
  struct std___UninitDestroyGuard_int____void_* t686 = this684;
  int** t687 = __first685;
  int* t688 = *t687;
  t686->_M_first = t688;
  int** t689 = __first685;
  t686->_M_cur = t689;
  return;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v690) {
bb691:
  int* __location692;
  int* __retval693;
  void* __loc694;
  __location692 = v690;
  int* t695 = __location692;
  void* cast696 = (void*)t695;
  __loc694 = cast696;
    void* t697 = __loc694;
    int* cast698 = (int*)t697;
    int c699 = 0;
    *cast698 = c699;
    __retval693 = cast698;
    int* t700 = __retval693;
    return t700;
  abort();
}

// function: _ZSt10_ConstructIiJEEvPT_DpOT0_
void void_std___Construct_int_(int* v701) {
bb702:
  int* __p703;
  __p703 = v701;
    _Bool r704 = std____is_constant_evaluated();
    if (r704) {
      int* t705 = __p703;
      int* r706 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t705);
      return;
    }
  int* t707 = __p703;
  void* cast708 = (void*)t707;
  int* cast709 = (int*)cast708;
  int c710 = 0;
  *cast709 = c710;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v711) {
bb712:
  struct std___UninitDestroyGuard_int____void_* this713;
  this713 = v711;
  struct std___UninitDestroyGuard_int____void_* t714 = this713;
  int** c715 = ((void*)0);
  t714->_M_cur = c715;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v716) {
bb717:
  struct std___UninitDestroyGuard_int____void_* this718;
  this718 = v716;
  struct std___UninitDestroyGuard_int____void_* t719 = this718;
    int** t720 = t719->_M_cur;
    int** c721 = ((void*)0);
    _Bool c722 = ((t720 != c721)) ? 1 : 0;
    if (c722) {
      int* t723 = t719->_M_first;
      int** t724 = t719->_M_cur;
      int* t725 = *t724;
      void_std___Destroy_int__(t723, t725);
    }
  return;
}

// function: _ZNSt27__uninitialized_default_n_1ILb0EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* v726, unsigned long v727) {
bb728:
  int* __first729;
  unsigned long __n730;
  int* __retval731;
  struct std___UninitDestroyGuard_int____void_ __guard732;
  __first729 = v726;
  __n730 = v727;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard732, &__first729);
      while (1) {
        unsigned long t734 = __n730;
        unsigned long c735 = 0;
        _Bool c736 = ((t734 > c735)) ? 1 : 0;
        if (!c736) break;
        int* t737 = __first729;
        void_std___Construct_int_(t737);
      for_step733: ;
        unsigned long t738 = __n730;
        unsigned long u739 = t738 - 1;
        __n730 = u739;
        int* t740 = __first729;
        int c741 = 1;
        int* ptr742 = &(t740)[c741];
        __first729 = ptr742;
      }
    std___UninitDestroyGuard_int___void___release(&__guard732);
    int* t743 = __first729;
    __retval731 = t743;
    int* t744 = __retval731;
    int* ret_val745 = t744;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard732);
    }
    return ret_val745;
  abort();
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v746, int* v747, int* v748) {
bb749:
  int* __first750;
  int* __last751;
  int* __value752;
  _Bool __load_outside_loop753;
  int __val754;
  __first750 = v746;
  __last751 = v747;
  __value752 = v748;
  _Bool c755 = 1;
  __load_outside_loop753 = c755;
  int* t756 = __value752;
  int t757 = *t756;
  __val754 = t757;
    while (1) {
      int* t759 = __first750;
      int* t760 = __last751;
      _Bool c761 = ((t759 != t760)) ? 1 : 0;
      if (!c761) break;
      int t762 = __val754;
      int* t763 = __first750;
      *t763 = t762;
    for_step758: ;
      int* t764 = __first750;
      int c765 = 1;
      int* ptr766 = &(t764)[c765];
      __first750 = ptr766;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v767, int* v768, int* v769) {
bb770:
  int* __first771;
  int* __last772;
  int* __value773;
  __first771 = v767;
  __last772 = v768;
  __value773 = v769;
  int* t774 = __first771;
  int* t775 = __last772;
  int* t776 = __value773;
  void_std____fill_a1_int___int_(t774, t775, t776);
  return;
}

// function: _ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag
int* int__std____fill_n_a_int___unsigned_long__int_(int* v777, unsigned long v778, int* v779, struct std__random_access_iterator_tag v780) {
bb781:
  int* __first782;
  unsigned long __n783;
  int* __value784;
  struct std__random_access_iterator_tag unnamed785;
  int* __retval786;
  __first782 = v777;
  __n783 = v778;
  __value784 = v779;
  unnamed785 = v780;
    unsigned long t787 = __n783;
    unsigned long c788 = 0;
    _Bool c789 = ((t787 <= c788)) ? 1 : 0;
    if (c789) {
      int* t790 = __first782;
      __retval786 = t790;
      int* t791 = __retval786;
      return t791;
    }
  int* t792 = __first782;
  int* t793 = __first782;
  unsigned long t794 = __n783;
  int* ptr795 = &(t793)[t794];
  int* t796 = __value784;
  void_std____fill_a_int___int_(t792, ptr795, t796);
  int* t797 = __first782;
  unsigned long t798 = __n783;
  int* ptr799 = &(t797)[t798];
  __retval786 = ptr799;
  int* t800 = __retval786;
  return t800;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer(unsigned long v801) {
bb802:
  unsigned long __n803;
  unsigned long __retval804;
  __n803 = v801;
  unsigned long t805 = __n803;
  __retval804 = t805;
  unsigned long t806 = __retval804;
  return t806;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v807) {
bb808:
  int** unnamed809;
  struct std__random_access_iterator_tag __retval810;
  unnamed809 = v807;
  struct std__random_access_iterator_tag t811 = __retval810;
  return t811;
}

// function: _ZSt6fill_nIPimiET_S1_T0_RKT1_
int* int__std__fill_n_int___unsigned_long__int_(int* v812, unsigned long v813, int* v814) {
bb815:
  int* __first816;
  unsigned long __n817;
  int* __value818;
  int* __retval819;
  struct std__random_access_iterator_tag agg_tmp0820;
  __first816 = v812;
  __n817 = v813;
  __value818 = v814;
  int* t821 = __first816;
  unsigned long t822 = __n817;
  unsigned long r823 = std____size_to_integer(t822);
  int* t824 = __value818;
  struct std__random_access_iterator_tag r825 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first816);
  agg_tmp0820 = r825;
  struct std__random_access_iterator_tag t826 = agg_tmp0820;
  int* r827 = int__std____fill_n_a_int___unsigned_long__int_(t821, r823, t824, t826);
  __retval819 = r827;
  int* t828 = __retval819;
  return t828;
}

// function: _ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* v829, unsigned long v830) {
bb831:
  int* __first832;
  unsigned long __n833;
  int* __retval834;
  __first832 = v829;
  __n833 = v830;
    unsigned long t835 = __n833;
    unsigned long c836 = 0;
    _Bool c837 = ((t835 > c836)) ? 1 : 0;
    if (c837) {
      int* __val838;
      int* t839 = __first832;
      __val838 = t839;
      int* t840 = __val838;
      void_std___Construct_int_(t840);
      int* t841 = __first832;
      int c842 = 1;
      int* ptr843 = &(t841)[c842];
      __first832 = ptr843;
      int* t844 = __first832;
      unsigned long t845 = __n833;
      unsigned long c846 = 1;
      unsigned long b847 = t845 - c846;
      int* t848 = __val838;
      int* r849 = int__std__fill_n_int___unsigned_long__int_(t844, b847, t848);
      __first832 = r849;
    }
  int* t850 = __first832;
  __retval834 = t850;
  int* t851 = __retval834;
  return t851;
}

// function: _ZSt25__uninitialized_default_nIPimET_S1_T0_
int* int__std____uninitialized_default_n_int___unsigned_long_(int* v852, unsigned long v853) {
bb854:
  int* __first855;
  unsigned long __n856;
  int* __retval857;
  _Bool __can_fill858;
  __first855 = v852;
  __n856 = v853;
    _Bool r859 = std__is_constant_evaluated();
    if (r859) {
      int* t860 = __first855;
      unsigned long t861 = __n856;
      int* r862 = int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(t860, t861);
      __retval857 = r862;
      int* t863 = __retval857;
      return t863;
    }
  _Bool c864 = 1;
  __can_fill858 = c864;
  int* t865 = __first855;
  unsigned long t866 = __n856;
  int* r867 = int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(t865, t866);
  __retval857 = r867;
  int* t868 = __retval857;
  return t868;
}

// function: _ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* v869, unsigned long v870, struct std__allocator_int_* v871) {
bb872:
  int* __first873;
  unsigned long __n874;
  struct std__allocator_int_* unnamed875;
  int* __retval876;
  __first873 = v869;
  __n874 = v870;
  unnamed875 = v871;
  int* t877 = __first873;
  unsigned long t878 = __n874;
  int* r879 = int__std____uninitialized_default_n_int___unsigned_long_(t877, t878);
  __retval876 = r879;
  int* t880 = __retval876;
  return t880;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v881) {
bb882:
  struct std___Vector_base_int__std__allocator_int__* this883;
  struct std__allocator_int_* __retval884;
  this883 = v881;
  struct std___Vector_base_int__std__allocator_int__* t885 = this883;
  struct std__allocator_int_* base886 = (struct std__allocator_int_*)((char *)&(t885->_M_impl) + 0);
  __retval884 = base886;
  struct std__allocator_int_* t887 = __retval884;
  return t887;
}

// function: _ZNSt6vectorIiSaIiEE21_M_default_initializeEm
void std__vector_int__std__allocator_int______M_default_initialize(struct std__vector_int__std__allocator_int__* v888, unsigned long v889) {
bb890:
  struct std__vector_int__std__allocator_int__* this891;
  unsigned long __n892;
  this891 = v888;
  __n892 = v889;
  struct std__vector_int__std__allocator_int__* t893 = this891;
  struct std___Vector_base_int__std__allocator_int__* base894 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t893 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base895 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base894->_M_impl) + 0);
  int* t896 = base895->_M_start;
  unsigned long t897 = __n892;
  struct std___Vector_base_int__std__allocator_int__* base898 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t893 + 0);
  struct std__allocator_int_* r899 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base898);
  int* r900 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(t896, t897, r899);
  struct std___Vector_base_int__std__allocator_int__* base901 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t893 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base902 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base901->_M_impl) + 0);
  base902->_M_finish = r900;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v903, int* v904, unsigned long v905) {
bb906:
  struct std____new_allocator_int_* this907;
  int* __p908;
  unsigned long __n909;
  this907 = v903;
  __p908 = v904;
  __n909 = v905;
  struct std____new_allocator_int_* t910 = this907;
    unsigned long c911 = 4;
    unsigned long c912 = 16;
    _Bool c913 = ((c911 > c912)) ? 1 : 0;
    if (c913) {
      int* t914 = __p908;
      void* cast915 = (void*)t914;
      unsigned long t916 = __n909;
      unsigned long c917 = 4;
      unsigned long b918 = t916 * c917;
      unsigned long c919 = 4;
      operator_delete_3(cast915, b918, c919);
      return;
    }
  int* t920 = __p908;
  void* cast921 = (void*)t920;
  unsigned long t922 = __n909;
  unsigned long c923 = 4;
  unsigned long b924 = t922 * c923;
  operator_delete_2(cast921, b924);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v925, int* v926, unsigned long v927) {
bb928:
  struct std__allocator_int_* this929;
  int* __p930;
  unsigned long __n931;
  this929 = v925;
  __p930 = v926;
  __n931 = v927;
  struct std__allocator_int_* t932 = this929;
    _Bool r933 = std____is_constant_evaluated();
    if (r933) {
      int* t934 = __p930;
      void* cast935 = (void*)t934;
      operator_delete(cast935);
      return;
    }
  struct std____new_allocator_int_* base936 = (struct std____new_allocator_int_*)((char *)t932 + 0);
  int* t937 = __p930;
  unsigned long t938 = __n931;
  std____new_allocator_int___deallocate(base936, t937, t938);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v939, int* v940, unsigned long v941) {
bb942:
  struct std__allocator_int_* __a943;
  int* __p944;
  unsigned long __n945;
  __a943 = v939;
  __p944 = v940;
  __n945 = v941;
  struct std__allocator_int_* t946 = __a943;
  int* t947 = __p944;
  unsigned long t948 = __n945;
  std__allocator_int___deallocate(t946, t947, t948);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v949, int* v950, unsigned long v951) {
bb952:
  struct std___Vector_base_int__std__allocator_int__* this953;
  int* __p954;
  unsigned long __n955;
  this953 = v949;
  __p954 = v950;
  __n955 = v951;
  struct std___Vector_base_int__std__allocator_int__* t956 = this953;
    int* t957 = __p954;
    _Bool cast958 = (_Bool)t957;
    if (cast958) {
      struct std__allocator_int_* base959 = (struct std__allocator_int_*)((char *)&(t956->_M_impl) + 0);
      int* t960 = __p954;
      unsigned long t961 = __n955;
      std__allocator_traits_std__allocator_int_____deallocate(base959, t960, t961);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v962) {
bb963:
  struct std___Vector_base_int__std__allocator_int__* this964;
  this964 = v962;
  struct std___Vector_base_int__std__allocator_int__* t965 = this964;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base966 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t965->_M_impl) + 0);
    int* t967 = base966->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base968 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t965->_M_impl) + 0);
    int* t969 = base968->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base970 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t965->_M_impl) + 0);
    int* t971 = base970->_M_start;
    long diff972 = t969 - t971;
    unsigned long cast973 = (unsigned long)diff972;
    std___Vector_base_int__std__allocator_int______M_deallocate(t965, t967, cast973);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t965->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v974, struct std____new_allocator_int_* v975) {
bb976:
  struct std____new_allocator_int_* this977;
  struct std____new_allocator_int_* unnamed978;
  this977 = v974;
  unnamed978 = v975;
  struct std____new_allocator_int_* t979 = this977;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v980) {
bb981:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this982;
  this982 = v980;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t983 = this982;
  int* c984 = ((void*)0);
  t983->_M_start = c984;
  int* c985 = ((void*)0);
  t983->_M_finish = c985;
  int* c986 = ((void*)0);
  t983->_M_end_of_storage = c986;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v987) {
bb988:
  int* __location989;
  __location989 = v987;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v990, int* v991) {
bb992:
  int* __first993;
  int* __last994;
  __first993 = v990;
  __last994 = v991;
      _Bool r995 = std____is_constant_evaluated();
      if (r995) {
          while (1) {
            int* t997 = __first993;
            int* t998 = __last994;
            _Bool c999 = ((t997 != t998)) ? 1 : 0;
            if (!c999) break;
            int* t1000 = __first993;
            void_std__destroy_at_int_(t1000);
          for_step996: ;
            int* t1001 = __first993;
            int c1002 = 1;
            int* ptr1003 = &(t1001)[c1002];
            __first993 = ptr1003;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1004, int* v1005, struct std__allocator_int_* v1006) {
bb1007:
  int* __first1008;
  int* __last1009;
  struct std__allocator_int_* unnamed1010;
  __first1008 = v1004;
  __last1009 = v1005;
  unnamed1010 = v1006;
  int* t1011 = __first1008;
  int* t1012 = __last1009;
  void_std___Destroy_int__(t1011, t1012);
  return;
}

