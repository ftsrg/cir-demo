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
struct __gnu_cxx____ops___Iter_equals_val_const_int_ { int* _M_value; };
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

int __const_main_myints[8] = {10, 20, 30, 30, 20, 10, 10, 20};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "myvector[0] == 10";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm29/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "myvector[1] == 30";
char _str_3[18] = "myvector[2] == 30";
char _str_4[18] = "myvector[3] == 10";
char _str_5[18] = "myvector[4] == 10";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_6[19] = "myvector contains:";
char _str_7[2] = " ";
char _str_8[49] = "cannot create std::vector larger than max_size()";
char _str_9[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_10[19] = "__n < this->size()";
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool bool___gnu_cxx____ops___Iter_equals_val_int_const___operator___int__(struct __gnu_cxx____ops___Iter_equals_val_const_int_* p0, int* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____remove_copy_if_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equals_val_int_const___(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____ops___Iter_equals_val_const_int_ p3);
void __gnu_cxx____ops___Iter_equals_val_int_const____Iter_equals_val(struct __gnu_cxx____ops___Iter_equals_val_const_int_* p0, int* p1);
struct __gnu_cxx____ops___Iter_equals_val_const_int_ __gnu_cxx____ops___Iter_equals_val_int_const____gnu_cxx____ops____iter_equals_val_int_const_(int* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__remove_copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, int* p3);
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

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator_2(struct std__allocator_int_* v0) {
bb1:
  struct std__allocator_int_* this2;
  this2 = v0;
  struct std__allocator_int_* t3 = this2;
  struct std____new_allocator_int_* base4 = (struct std____new_allocator_int_*)((char *)t3 + 0);
  std____new_allocator_int_____new_allocator_2(base4);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2EmRKS0_
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v5, unsigned long v6, struct std__allocator_int_* v7) {
bb8:
  struct std__vector_int__std__allocator_int__* this9;
  unsigned long __n10;
  struct std__allocator_int_* __a11;
  this9 = v5;
  __n10 = v6;
  __a11 = v7;
  struct std__vector_int__std__allocator_int__* t12 = this9;
  struct std___Vector_base_int__std__allocator_int__* base13 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t12 + 0);
  unsigned long t14 = __n10;
  struct std__allocator_int_* t15 = __a11;
  unsigned long r16 = std__vector_int__std__allocator_int______S_check_init_len(t14, t15);
  struct std__allocator_int_* t17 = __a11;
  std___Vector_base_int__std__allocator_int______Vector_base(base13, r16, t17);
    unsigned long t18 = __n10;
    std__vector_int__std__allocator_int______M_default_initialize(t12, t18);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v19) {
bb20:
  struct std__allocator_int_* this21;
  this21 = v19;
  struct std__allocator_int_* t22 = this21;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v23) {
bb24:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this25;
  this25 = v23;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t26 = this25;
  int* c27 = ((void*)0);
  t26->_M_current = c27;
  return;
}

// function: _ZN9__gnu_cxx5__ops16_Iter_equals_valIKiEclIPiEEbT_
_Bool bool___gnu_cxx____ops___Iter_equals_val_int_const___operator___int__(struct __gnu_cxx____ops___Iter_equals_val_const_int_* v28, int* v29) {
bb30:
  struct __gnu_cxx____ops___Iter_equals_val_const_int_* this31;
  int* __it32;
  _Bool __retval33;
  this31 = v28;
  __it32 = v29;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_* t34 = this31;
  int* t35 = __it32;
  int t36 = *t35;
  int* t37 = t34->_M_value;
  int t38 = *t37;
  _Bool c39 = ((t36 == t38)) ? 1 : 0;
  __retval33 = c39;
  _Bool t40 = __retval33;
  return t40;
}

// function: _ZSt16__remove_copy_ifIPiN9__gnu_cxx17__normal_iteratorIS0_St6vectorIiSaIiEEEENS1_5__ops16_Iter_equals_valIKiEEET0_T_SC_SB_T1_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____remove_copy_if_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equals_val_int_const___(int* v41, int* v42, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v43, struct __gnu_cxx____ops___Iter_equals_val_const_int_ v44) {
bb45:
  int* __first46;
  int* __last47;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result48;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ __pred49;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval50;
  __first46 = v41;
  __last47 = v42;
  __result48 = v43;
  __pred49 = v44;
    while (1) {
      int* t52 = __first46;
      int* t53 = __last47;
      _Bool c54 = ((t52 != t53)) ? 1 : 0;
      if (!c54) break;
        int* t55 = __first46;
        _Bool r56 = bool___gnu_cxx____ops___Iter_equals_val_int_const___operator___int__(&__pred49, t55);
        _Bool u57 = !r56;
        if (u57) {
          int* t58 = __first46;
          int t59 = *t58;
          int* r60 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result48);
          *r60 = t59;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r61 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__result48);
        }
    for_step51: ;
      int* t62 = __first46;
      int c63 = 1;
      int* ptr64 = &(t62)[c63];
      __first46 = ptr64;
    }
  __retval50 = __result48; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t65 = __retval50;
  return t65;
}

// function: _ZN9__gnu_cxx5__ops16_Iter_equals_valIKiEC2ERS2_
void __gnu_cxx____ops___Iter_equals_val_int_const____Iter_equals_val(struct __gnu_cxx____ops___Iter_equals_val_const_int_* v66, int* v67) {
bb68:
  struct __gnu_cxx____ops___Iter_equals_val_const_int_* this69;
  int* __value70;
  this69 = v66;
  __value70 = v67;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_* t71 = this69;
  int* t72 = __value70;
  t71->_M_value = t72;
  return;
}

// function: _ZN9__gnu_cxx5__ops17__iter_equals_valIKiEENS0_16_Iter_equals_valIT_EERS4_
struct __gnu_cxx____ops___Iter_equals_val_const_int_ __gnu_cxx____ops___Iter_equals_val_int_const____gnu_cxx____ops____iter_equals_val_int_const_(int* v73) {
bb74:
  int* __val75;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ __retval76;
  __val75 = v73;
  int* t77 = __val75;
  __gnu_cxx____ops___Iter_equals_val_int_const____Iter_equals_val(&__retval76, t77);
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ t78 = __retval76;
  return t78;
}

// function: _ZSt11remove_copyIPiN9__gnu_cxx17__normal_iteratorIS0_St6vectorIiSaIiEEEEiET0_T_S8_S7_RKT1_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__remove_copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(int* v79, int* v80, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v81, int* v82) {
bb83:
  int* __first84;
  int* __last85;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result86;
  int* __value87;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval88;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp089;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ agg_tmp190;
  __first84 = v79;
  __last85 = v80;
  __result86 = v81;
  __value87 = v82;
  int* t91 = __first84;
  int* t92 = __last85;
  agg_tmp089 = __result86; // copy
  int* t93 = __value87;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ r94 = __gnu_cxx____ops___Iter_equals_val_int_const____gnu_cxx____ops____iter_equals_val_int_const_(t93);
  agg_tmp190 = r94;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t95 = agg_tmp089;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ t96 = agg_tmp190;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r97 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____remove_copy_if_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equals_val_int_const___(t91, t92, t95, t96);
  __retval88 = r97;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t98 = __retval88;
  return t98;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v99, int** v100) {
bb101:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this102;
  int** __i103;
  this102 = v99;
  __i103 = v100;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t104 = this102;
  int** t105 = __i103;
  int* t106 = *t105;
  t104->_M_current = t106;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v107) {
bb108:
  struct std__vector_int__std__allocator_int__* this109;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval110;
  this109 = v107;
  struct std__vector_int__std__allocator_int__* t111 = this109;
  struct std___Vector_base_int__std__allocator_int__* base112 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t111 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base113 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base112->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval110, &base113->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t114 = __retval110;
  return t114;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v115) {
bb116:
  struct std__vector_int__std__allocator_int__* this117;
  unsigned long __retval118;
  long __dif119;
  this117 = v115;
  struct std__vector_int__std__allocator_int__* t120 = this117;
  struct std___Vector_base_int__std__allocator_int__* base121 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t120 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base122 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base121->_M_impl) + 0);
  int* t123 = base122->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base124 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t120 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base125 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base124->_M_impl) + 0);
  int* t126 = base125->_M_start;
  long diff127 = t123 - t126;
  __dif119 = diff127;
    long t128 = __dif119;
    long c129 = 0;
    _Bool c130 = ((t128 < c129)) ? 1 : 0;
    if (c130) {
      __builtin_unreachable();
    }
  long t131 = __dif119;
  unsigned long cast132 = (unsigned long)t131;
  __retval118 = cast132;
  unsigned long t133 = __retval118;
  return t133;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v134, unsigned long v135) {
bb136:
  struct std__vector_int__std__allocator_int__* this137;
  unsigned long __n138;
  int* __retval139;
  this137 = v134;
  __n138 = v135;
  struct std__vector_int__std__allocator_int__* t140 = this137;
    do {
          unsigned long t141 = __n138;
          unsigned long r142 = std__vector_int__std__allocator_int_____size___const(t140);
          _Bool c143 = ((t141 < r142)) ? 1 : 0;
          _Bool u144 = !c143;
          if (u144) {
            char* cast145 = (char*)&(_str_9);
            int c146 = 1263;
            char* cast147 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast148 = (char*)&(_str_10);
            std____glibcxx_assert_fail(cast145, c146, cast147, cast148);
          }
      _Bool c149 = 0;
      if (!c149) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base150 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t140 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base151 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base150->_M_impl) + 0);
  int* t152 = base151->_M_start;
  unsigned long t153 = __n138;
  int* ptr154 = &(t152)[t153];
  __retval139 = ptr154;
  int* t155 = __retval139;
  return t155;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v156, int v157) {
bb158:
  int __a159;
  int __b160;
  int __retval161;
  __a159 = v156;
  __b160 = v157;
  int t162 = __a159;
  int t163 = __b160;
  int b164 = t162 | t163;
  __retval161 = b164;
  int t165 = __retval161;
  return t165;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v166) {
bb167:
  struct std__basic_ios_char__std__char_traits_char__* this168;
  int __retval169;
  this168 = v166;
  struct std__basic_ios_char__std__char_traits_char__* t170 = this168;
  struct std__ios_base* base171 = (struct std__ios_base*)((char *)t170 + 0);
  int t172 = base171->_M_streambuf_state;
  __retval169 = t172;
  int t173 = __retval169;
  return t173;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v174, int v175) {
bb176:
  struct std__basic_ios_char__std__char_traits_char__* this177;
  int __state178;
  this177 = v174;
  __state178 = v175;
  struct std__basic_ios_char__std__char_traits_char__* t179 = this177;
  int r180 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t179);
  int t181 = __state178;
  int r182 = std__operator_(r180, t181);
  std__basic_ios_char__std__char_traits_char_____clear(t179, r182);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v183, char* v184) {
bb185:
  char* __c1186;
  char* __c2187;
  _Bool __retval188;
  __c1186 = v183;
  __c2187 = v184;
  char* t189 = __c1186;
  char t190 = *t189;
  int cast191 = (int)t190;
  char* t192 = __c2187;
  char t193 = *t192;
  int cast194 = (int)t193;
  _Bool c195 = ((cast191 == cast194)) ? 1 : 0;
  __retval188 = c195;
  _Bool t196 = __retval188;
  return t196;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v197) {
bb198:
  char* __p199;
  unsigned long __retval200;
  unsigned long __i201;
  __p199 = v197;
  unsigned long c202 = 0;
  __i201 = c202;
    char ref_tmp0203;
    while (1) {
      unsigned long t204 = __i201;
      char* t205 = __p199;
      char* ptr206 = &(t205)[t204];
      char c207 = 0;
      ref_tmp0203 = c207;
      _Bool r208 = __gnu_cxx__char_traits_char___eq(ptr206, &ref_tmp0203);
      _Bool u209 = !r208;
      if (!u209) break;
      unsigned long t210 = __i201;
      unsigned long u211 = t210 + 1;
      __i201 = u211;
    }
  unsigned long t212 = __i201;
  __retval200 = t212;
  unsigned long t213 = __retval200;
  return t213;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v214) {
bb215:
  char* __s216;
  unsigned long __retval217;
  __s216 = v214;
    _Bool r218 = std____is_constant_evaluated();
    if (r218) {
      char* t219 = __s216;
      unsigned long r220 = __gnu_cxx__char_traits_char___length(t219);
      __retval217 = r220;
      unsigned long t221 = __retval217;
      return t221;
    }
  char* t222 = __s216;
  unsigned long r223 = strlen(t222);
  __retval217 = r223;
  unsigned long t224 = __retval217;
  return t224;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v225, char* v226) {
bb227:
  struct std__basic_ostream_char__std__char_traits_char__* __out228;
  char* __s229;
  struct std__basic_ostream_char__std__char_traits_char__* __retval230;
  __out228 = v225;
  __s229 = v226;
    char* t231 = __s229;
    _Bool cast232 = (_Bool)t231;
    _Bool u233 = !cast232;
    if (u233) {
      struct std__basic_ostream_char__std__char_traits_char__* t234 = __out228;
      void** v235 = (void**)t234;
      void* v236 = *((void**)v235);
      unsigned char* cast237 = (unsigned char*)v236;
      long c238 = -24;
      unsigned char* ptr239 = &(cast237)[c238];
      long* cast240 = (long*)ptr239;
      long t241 = *cast240;
      unsigned char* cast242 = (unsigned char*)t234;
      unsigned char* ptr243 = &(cast242)[t241];
      struct std__basic_ostream_char__std__char_traits_char__* cast244 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr243;
      struct std__basic_ios_char__std__char_traits_char__* cast245 = (struct std__basic_ios_char__std__char_traits_char__*)cast244;
      int t246 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast245, t246);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t247 = __out228;
      char* t248 = __s229;
      char* t249 = __s229;
      unsigned long r250 = std__char_traits_char___length(t249);
      long cast251 = (long)r250;
      struct std__basic_ostream_char__std__char_traits_char__* r252 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t247, t248, cast251);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t253 = __out228;
  __retval230 = t253;
  struct std__basic_ostream_char__std__char_traits_char__* t254 = __retval230;
  return t254;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v255, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v256) {
bb257:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this258;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed259;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval260;
  this258 = v255;
  unnamed259 = v256;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t261 = this258;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t262 = unnamed259;
  int* t263 = t262->_M_current;
  t261->_M_current = t263;
  __retval260 = t261;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t264 = __retval260;
  return t264;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v265) {
bb266:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this267;
  int** __retval268;
  this267 = v265;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t269 = this267;
  __retval268 = &t269->_M_current;
  int** t270 = __retval268;
  return t270;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v271, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v272) {
bb273:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs274;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs275;
  _Bool __retval276;
  __lhs274 = v271;
  __rhs275 = v272;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t277 = __lhs274;
  int** r278 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t277);
  int* t279 = *r278;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t280 = __rhs275;
  int** r281 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t280);
  int* t282 = *r281;
  _Bool c283 = ((t279 == t282)) ? 1 : 0;
  __retval276 = c283;
  _Bool t284 = __retval276;
  return t284;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v285) {
bb286:
  struct std__vector_int__std__allocator_int__* this287;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval288;
  this287 = v285;
  struct std__vector_int__std__allocator_int__* t289 = this287;
  struct std___Vector_base_int__std__allocator_int__* base290 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t289 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base291 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base290->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval288, &base291->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t292 = __retval288;
  return t292;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v293) {
bb294:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this295;
  int* __retval296;
  this295 = v293;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t297 = this295;
  int* t298 = t297->_M_current;
  __retval296 = t298;
  int* t299 = __retval296;
  return t299;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v300) {
bb301:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this302;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval303;
  this302 = v300;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t304 = this302;
  int* t305 = t304->_M_current;
  int c306 = 1;
  int* ptr307 = &(t305)[c306];
  t304->_M_current = ptr307;
  __retval303 = t304;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t308 = __retval303;
  return t308;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v309, void* v310) {
bb311:
  struct std__basic_ostream_char__std__char_traits_char__* this312;
  void* __pf313;
  struct std__basic_ostream_char__std__char_traits_char__* __retval314;
  this312 = v309;
  __pf313 = v310;
  struct std__basic_ostream_char__std__char_traits_char__* t315 = this312;
  void* t316 = __pf313;
  struct std__basic_ostream_char__std__char_traits_char__* r317 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t316)(t315);
  __retval314 = r317;
  struct std__basic_ostream_char__std__char_traits_char__* t318 = __retval314;
  return t318;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v319) {
bb320:
  struct std__basic_ostream_char__std__char_traits_char__* __os321;
  struct std__basic_ostream_char__std__char_traits_char__* __retval322;
  __os321 = v319;
  struct std__basic_ostream_char__std__char_traits_char__* t323 = __os321;
  struct std__basic_ostream_char__std__char_traits_char__* r324 = std__ostream__flush(t323);
  __retval322 = r324;
  struct std__basic_ostream_char__std__char_traits_char__* t325 = __retval322;
  return t325;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v326) {
bb327:
  struct std__ctype_char_* __f328;
  struct std__ctype_char_* __retval329;
  __f328 = v326;
    struct std__ctype_char_* t330 = __f328;
    _Bool cast331 = (_Bool)t330;
    _Bool u332 = !cast331;
    if (u332) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t333 = __f328;
  __retval329 = t333;
  struct std__ctype_char_* t334 = __retval329;
  return t334;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v335, char v336) {
bb337:
  struct std__ctype_char_* this338;
  char __c339;
  char __retval340;
  this338 = v335;
  __c339 = v336;
  struct std__ctype_char_* t341 = this338;
    char t342 = t341->_M_widen_ok;
    _Bool cast343 = (_Bool)t342;
    if (cast343) {
      char t344 = __c339;
      unsigned char cast345 = (unsigned char)t344;
      unsigned long cast346 = (unsigned long)cast345;
      char t347 = t341->_M_widen[cast346];
      __retval340 = t347;
      char t348 = __retval340;
      return t348;
    }
  std__ctype_char____M_widen_init___const(t341);
  char t349 = __c339;
  void** v350 = (void**)t341;
  void* v351 = *((void**)v350);
  char vcall354 = (char)__VERIFIER_virtual_call_char_char(t341, 6, t349);
  __retval340 = vcall354;
  char t355 = __retval340;
  return t355;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v356, char v357) {
bb358:
  struct std__basic_ios_char__std__char_traits_char__* this359;
  char __c360;
  char __retval361;
  this359 = v356;
  __c360 = v357;
  struct std__basic_ios_char__std__char_traits_char__* t362 = this359;
  struct std__ctype_char_* t363 = t362->_M_ctype;
  struct std__ctype_char_* r364 = std__ctype_char__const__std____check_facet_std__ctype_char___(t363);
  char t365 = __c360;
  char r366 = std__ctype_char___widen_char__const(r364, t365);
  __retval361 = r366;
  char t367 = __retval361;
  return t367;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v368) {
bb369:
  struct std__basic_ostream_char__std__char_traits_char__* __os370;
  struct std__basic_ostream_char__std__char_traits_char__* __retval371;
  __os370 = v368;
  struct std__basic_ostream_char__std__char_traits_char__* t372 = __os370;
  struct std__basic_ostream_char__std__char_traits_char__* t373 = __os370;
  void** v374 = (void**)t373;
  void* v375 = *((void**)v374);
  unsigned char* cast376 = (unsigned char*)v375;
  long c377 = -24;
  unsigned char* ptr378 = &(cast376)[c377];
  long* cast379 = (long*)ptr378;
  long t380 = *cast379;
  unsigned char* cast381 = (unsigned char*)t373;
  unsigned char* ptr382 = &(cast381)[t380];
  struct std__basic_ostream_char__std__char_traits_char__* cast383 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr382;
  struct std__basic_ios_char__std__char_traits_char__* cast384 = (struct std__basic_ios_char__std__char_traits_char__*)cast383;
  char c385 = 10;
  char r386 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast384, c385);
  struct std__basic_ostream_char__std__char_traits_char__* r387 = std__ostream__put(t372, r386);
  struct std__basic_ostream_char__std__char_traits_char__* r388 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r387);
  __retval371 = r388;
  struct std__basic_ostream_char__std__char_traits_char__* t389 = __retval371;
  return t389;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v390) {
bb391:
  struct std__vector_int__std__allocator_int__* this392;
  this392 = v390;
  struct std__vector_int__std__allocator_int__* t393 = this392;
    struct std___Vector_base_int__std__allocator_int__* base394 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t393 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base395 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base394->_M_impl) + 0);
    int* t396 = base395->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base397 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t393 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base398 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base397->_M_impl) + 0);
    int* t399 = base398->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base400 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t393 + 0);
    struct std__allocator_int_* r401 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base400);
    void_std___Destroy_int___int_(t396, t399, r401);
  {
    struct std___Vector_base_int__std__allocator_int__* base402 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t393 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base402);
  }
  return;
}

// function: main
int main() {
bb403:
  int __retval404;
  int myints405[8];
  struct std__vector_int__std__allocator_int__ myvector406;
  struct std__allocator_int_ ref_tmp0407;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it408;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0409;
  int ref_tmp1410;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1411;
  int c412 = 0;
  __retval404 = c412;
  // array copy
  __builtin_memcpy(myints405, __const_main_myints, (unsigned long)8 * sizeof(__const_main_myints[0]));
  unsigned long c413 = 8;
  std__allocator_int___allocator_2(&ref_tmp0407);
    std__vector_int__std__allocator_int_____vector(&myvector406, c413, &ref_tmp0407);
  {
    std__allocator_int____allocator(&ref_tmp0407);
  }
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it408);
    int* cast414 = (int*)&(myints405);
    int* cast415 = (int*)&(myints405);
    int c416 = 8;
    int* ptr417 = &(cast415)[c416];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r418 = std__vector_int__std__allocator_int_____begin(&myvector406);
    agg_tmp0409 = r418;
    int c419 = 20;
    ref_tmp1410 = c419;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t420 = agg_tmp0409;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r421 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__remove_copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(cast414, ptr417, t420, &ref_tmp1410);
    agg_tmp1411 = r421;
    unsigned long c422 = 0;
    int* r423 = std__vector_int__std__allocator_int_____operator__(&myvector406, c422);
    int t424 = *r423;
    int c425 = 10;
    _Bool c426 = ((t424 == c425)) ? 1 : 0;
    if (c426) {
    } else {
      char* cast427 = (char*)&(_str);
      char* c428 = _str_1;
      unsigned int c429 = 22;
      char* cast430 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast427, c428, c429, cast430);
    }
    unsigned long c431 = 1;
    int* r432 = std__vector_int__std__allocator_int_____operator__(&myvector406, c431);
    int t433 = *r432;
    int c434 = 30;
    _Bool c435 = ((t433 == c434)) ? 1 : 0;
    if (c435) {
    } else {
      char* cast436 = (char*)&(_str_2);
      char* c437 = _str_1;
      unsigned int c438 = 23;
      char* cast439 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast436, c437, c438, cast439);
    }
    unsigned long c440 = 2;
    int* r441 = std__vector_int__std__allocator_int_____operator__(&myvector406, c440);
    int t442 = *r441;
    int c443 = 30;
    _Bool c444 = ((t442 == c443)) ? 1 : 0;
    if (c444) {
    } else {
      char* cast445 = (char*)&(_str_3);
      char* c446 = _str_1;
      unsigned int c447 = 24;
      char* cast448 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast445, c446, c447, cast448);
    }
    unsigned long c449 = 3;
    int* r450 = std__vector_int__std__allocator_int_____operator__(&myvector406, c449);
    int t451 = *r450;
    int c452 = 10;
    _Bool c453 = ((t451 == c452)) ? 1 : 0;
    if (c453) {
    } else {
      char* cast454 = (char*)&(_str_4);
      char* c455 = _str_1;
      unsigned int c456 = 25;
      char* cast457 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast454, c455, c456, cast457);
    }
    unsigned long c458 = 4;
    int* r459 = std__vector_int__std__allocator_int_____operator__(&myvector406, c458);
    int t460 = *r459;
    int c461 = 10;
    _Bool c462 = ((t460 == c461)) ? 1 : 0;
    if (c462) {
    } else {
      char* cast463 = (char*)&(_str_5);
      char* c464 = _str_1;
      unsigned int c465 = 26;
      char* cast466 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast463, c464, c465, cast466);
    }
    char* cast467 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* r468 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast467);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2469;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3470;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r471 = std__vector_int__std__allocator_int_____begin(&myvector406);
      ref_tmp2469 = r471;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r472 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it408, &ref_tmp2469);
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r474 = std__vector_int__std__allocator_int_____end(&myvector406);
        ref_tmp3470 = r474;
        _Bool r475 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it408, &ref_tmp3470);
        _Bool u476 = !r475;
        if (!u476) break;
        char* cast477 = (char*)&(_str_7);
        struct std__basic_ostream_char__std__char_traits_char__* r478 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast477);
        int* r479 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it408);
        int t480 = *r479;
        struct std__basic_ostream_char__std__char_traits_char__* r481 = std__ostream__operator__(r478, t480);
      for_step473: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r482 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&it408);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r483 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c484 = 0;
    __retval404 = c484;
    int t485 = __retval404;
    int ret_val486 = t485;
    {
      std__vector_int__std__allocator_int______vector(&myvector406);
    }
    return ret_val486;
  int t487 = __retval404;
  return t487;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v488) {
bb489:
  struct std____new_allocator_int_* this490;
  this490 = v488;
  struct std____new_allocator_int_* t491 = this490;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v492, unsigned long* v493) {
bb494:
  unsigned long* __a495;
  unsigned long* __b496;
  unsigned long* __retval497;
  __a495 = v492;
  __b496 = v493;
    unsigned long* t498 = __b496;
    unsigned long t499 = *t498;
    unsigned long* t500 = __a495;
    unsigned long t501 = *t500;
    _Bool c502 = ((t499 < t501)) ? 1 : 0;
    if (c502) {
      unsigned long* t503 = __b496;
      __retval497 = t503;
      unsigned long* t504 = __retval497;
      return t504;
    }
  unsigned long* t505 = __a495;
  __retval497 = t505;
  unsigned long* t506 = __retval497;
  return t506;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v507) {
bb508:
  struct std__allocator_int_* __a509;
  unsigned long __retval510;
  unsigned long __diffmax511;
  unsigned long __allocmax512;
  __a509 = v507;
  unsigned long c513 = 2305843009213693951;
  __diffmax511 = c513;
  unsigned long c514 = 4611686018427387903;
  __allocmax512 = c514;
  unsigned long* r515 = unsigned_long_const__std__min_unsigned_long_(&__diffmax511, &__allocmax512);
  unsigned long t516 = *r515;
  __retval510 = t516;
  unsigned long t517 = __retval510;
  return t517;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v518, struct std__allocator_int_* v519) {
bb520:
  struct std__allocator_int_* this521;
  struct std__allocator_int_* __a522;
  this521 = v518;
  __a522 = v519;
  struct std__allocator_int_* t523 = this521;
  struct std____new_allocator_int_* base524 = (struct std____new_allocator_int_*)((char *)t523 + 0);
  struct std__allocator_int_* t525 = __a522;
  struct std____new_allocator_int_* base526 = (struct std____new_allocator_int_*)((char *)t525 + 0);
  std____new_allocator_int_____new_allocator(base524, base526);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v527, struct std__allocator_int_* v528) {
bb529:
  unsigned long __n530;
  struct std__allocator_int_* __a531;
  unsigned long __retval532;
  __n530 = v527;
  __a531 = v528;
    struct std__allocator_int_ ref_tmp0533;
    _Bool tmp_exprcleanup534;
    unsigned long t535 = __n530;
    struct std__allocator_int_* t536 = __a531;
    std__allocator_int___allocator(&ref_tmp0533, t536);
      unsigned long r537 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0533);
      _Bool c538 = ((t535 > r537)) ? 1 : 0;
      tmp_exprcleanup534 = c538;
    {
      std__allocator_int____allocator(&ref_tmp0533);
    }
    _Bool t539 = tmp_exprcleanup534;
    if (t539) {
      char* cast540 = (char*)&(_str_8);
      std____throw_length_error(cast540);
    }
  unsigned long t541 = __n530;
  __retval532 = t541;
  unsigned long t542 = __retval532;
  return t542;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v543, struct std__allocator_int_* v544) {
bb545:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this546;
  struct std__allocator_int_* __a547;
  this546 = v543;
  __a547 = v544;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t548 = this546;
  struct std__allocator_int_* base549 = (struct std__allocator_int_*)((char *)t548 + 0);
  struct std__allocator_int_* t550 = __a547;
  std__allocator_int___allocator(base549, t550);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base551 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t548 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base551);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb552:
  _Bool __retval553;
    _Bool c554 = 0;
    __retval553 = c554;
    _Bool t555 = __retval553;
    return t555;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v556) {
bb557:
  struct std____new_allocator_int_* this558;
  unsigned long __retval559;
  this558 = v556;
  struct std____new_allocator_int_* t560 = this558;
  unsigned long c561 = 9223372036854775807;
  unsigned long c562 = 4;
  unsigned long b563 = c561 / c562;
  __retval559 = b563;
  unsigned long t564 = __retval559;
  return t564;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v565, unsigned long v566, void* v567) {
bb568:
  struct std____new_allocator_int_* this569;
  unsigned long __n570;
  void* unnamed571;
  int* __retval572;
  this569 = v565;
  __n570 = v566;
  unnamed571 = v567;
  struct std____new_allocator_int_* t573 = this569;
    unsigned long t574 = __n570;
    unsigned long r575 = std____new_allocator_int____M_max_size___const(t573);
    _Bool c576 = ((t574 > r575)) ? 1 : 0;
    if (c576) {
        unsigned long t577 = __n570;
        unsigned long c578 = -1;
        unsigned long c579 = 4;
        unsigned long b580 = c578 / c579;
        _Bool c581 = ((t577 > b580)) ? 1 : 0;
        if (c581) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c582 = 4;
    unsigned long c583 = 16;
    _Bool c584 = ((c582 > c583)) ? 1 : 0;
    if (c584) {
      unsigned long __al585;
      unsigned long c586 = 4;
      __al585 = c586;
      unsigned long t587 = __n570;
      unsigned long c588 = 4;
      unsigned long b589 = t587 * c588;
      unsigned long t590 = __al585;
      void* r591 = operator_new_2(b589, t590);
      int* cast592 = (int*)r591;
      __retval572 = cast592;
      int* t593 = __retval572;
      return t593;
    }
  unsigned long t594 = __n570;
  unsigned long c595 = 4;
  unsigned long b596 = t594 * c595;
  void* r597 = operator_new(b596);
  int* cast598 = (int*)r597;
  __retval572 = cast598;
  int* t599 = __retval572;
  return t599;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v600, unsigned long v601) {
bb602:
  struct std__allocator_int_* this603;
  unsigned long __n604;
  int* __retval605;
  this603 = v600;
  __n604 = v601;
  struct std__allocator_int_* t606 = this603;
    _Bool r607 = std____is_constant_evaluated();
    if (r607) {
        unsigned long t608 = __n604;
        unsigned long c609 = 4;
        unsigned long ovr610;
        _Bool ovf611 = __builtin_mul_overflow(t608, c609, &ovr610);
        __n604 = ovr610;
        if (ovf611) {
          std____throw_bad_array_new_length();
        }
      unsigned long t612 = __n604;
      void* r613 = operator_new(t612);
      int* cast614 = (int*)r613;
      __retval605 = cast614;
      int* t615 = __retval605;
      return t615;
    }
  struct std____new_allocator_int_* base616 = (struct std____new_allocator_int_*)((char *)t606 + 0);
  unsigned long t617 = __n604;
  void* c618 = ((void*)0);
  int* r619 = std____new_allocator_int___allocate(base616, t617, c618);
  __retval605 = r619;
  int* t620 = __retval605;
  return t620;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v621, unsigned long v622) {
bb623:
  struct std__allocator_int_* __a624;
  unsigned long __n625;
  int* __retval626;
  __a624 = v621;
  __n625 = v622;
  struct std__allocator_int_* t627 = __a624;
  unsigned long t628 = __n625;
  int* r629 = std__allocator_int___allocate(t627, t628);
  __retval626 = r629;
  int* t630 = __retval626;
  return t630;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v631, unsigned long v632) {
bb633:
  struct std___Vector_base_int__std__allocator_int__* this634;
  unsigned long __n635;
  int* __retval636;
  this634 = v631;
  __n635 = v632;
  struct std___Vector_base_int__std__allocator_int__* t637 = this634;
  unsigned long t638 = __n635;
  unsigned long c639 = 0;
  _Bool c640 = ((t638 != c639)) ? 1 : 0;
  int* ternary641;
  if (c640) {
    struct std__allocator_int_* base642 = (struct std__allocator_int_*)((char *)&(t637->_M_impl) + 0);
    unsigned long t643 = __n635;
    int* r644 = std__allocator_traits_std__allocator_int_____allocate(base642, t643);
    ternary641 = (int*)r644;
  } else {
    int* c645 = ((void*)0);
    ternary641 = (int*)c645;
  }
  __retval636 = ternary641;
  int* t646 = __retval636;
  return t646;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v647, unsigned long v648) {
bb649:
  struct std___Vector_base_int__std__allocator_int__* this650;
  unsigned long __n651;
  this650 = v647;
  __n651 = v648;
  struct std___Vector_base_int__std__allocator_int__* t652 = this650;
  unsigned long t653 = __n651;
  int* r654 = std___Vector_base_int__std__allocator_int______M_allocate(t652, t653);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base655 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t652->_M_impl) + 0);
  base655->_M_start = r654;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base656 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t652->_M_impl) + 0);
  int* t657 = base656->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base658 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t652->_M_impl) + 0);
  base658->_M_finish = t657;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base659 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t652->_M_impl) + 0);
  int* t660 = base659->_M_start;
  unsigned long t661 = __n651;
  int* ptr662 = &(t660)[t661];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base663 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t652->_M_impl) + 0);
  base663->_M_end_of_storage = ptr662;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v664) {
bb665:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this666;
  this666 = v664;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t667 = this666;
  {
    struct std__allocator_int_* base668 = (struct std__allocator_int_*)((char *)t667 + 0);
    std__allocator_int____allocator(base668);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v669, unsigned long v670, struct std__allocator_int_* v671) {
bb672:
  struct std___Vector_base_int__std__allocator_int__* this673;
  unsigned long __n674;
  struct std__allocator_int_* __a675;
  this673 = v669;
  __n674 = v670;
  __a675 = v671;
  struct std___Vector_base_int__std__allocator_int__* t676 = this673;
  struct std__allocator_int_* t677 = __a675;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t676->_M_impl, t677);
    unsigned long t678 = __n674;
    std___Vector_base_int__std__allocator_int______M_create_storage(t676, t678);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb679:
  _Bool __retval680;
    _Bool c681 = 0;
    __retval680 = c681;
    _Bool t682 = __retval680;
    return t682;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v683, int** v684) {
bb685:
  struct std___UninitDestroyGuard_int____void_* this686;
  int** __first687;
  this686 = v683;
  __first687 = v684;
  struct std___UninitDestroyGuard_int____void_* t688 = this686;
  int** t689 = __first687;
  int* t690 = *t689;
  t688->_M_first = t690;
  int** t691 = __first687;
  t688->_M_cur = t691;
  return;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v692) {
bb693:
  int* __location694;
  int* __retval695;
  void* __loc696;
  __location694 = v692;
  int* t697 = __location694;
  void* cast698 = (void*)t697;
  __loc696 = cast698;
    void* t699 = __loc696;
    int* cast700 = (int*)t699;
    int c701 = 0;
    *cast700 = c701;
    __retval695 = cast700;
    int* t702 = __retval695;
    return t702;
  abort();
}

// function: _ZSt10_ConstructIiJEEvPT_DpOT0_
void void_std___Construct_int_(int* v703) {
bb704:
  int* __p705;
  __p705 = v703;
    _Bool r706 = std____is_constant_evaluated();
    if (r706) {
      int* t707 = __p705;
      int* r708 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t707);
      return;
    }
  int* t709 = __p705;
  void* cast710 = (void*)t709;
  int* cast711 = (int*)cast710;
  int c712 = 0;
  *cast711 = c712;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v713) {
bb714:
  struct std___UninitDestroyGuard_int____void_* this715;
  this715 = v713;
  struct std___UninitDestroyGuard_int____void_* t716 = this715;
  int** c717 = ((void*)0);
  t716->_M_cur = c717;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v718) {
bb719:
  struct std___UninitDestroyGuard_int____void_* this720;
  this720 = v718;
  struct std___UninitDestroyGuard_int____void_* t721 = this720;
    int** t722 = t721->_M_cur;
    int** c723 = ((void*)0);
    _Bool c724 = ((t722 != c723)) ? 1 : 0;
    if (c724) {
      int* t725 = t721->_M_first;
      int** t726 = t721->_M_cur;
      int* t727 = *t726;
      void_std___Destroy_int__(t725, t727);
    }
  return;
}

// function: _ZNSt27__uninitialized_default_n_1ILb0EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* v728, unsigned long v729) {
bb730:
  int* __first731;
  unsigned long __n732;
  int* __retval733;
  struct std___UninitDestroyGuard_int____void_ __guard734;
  __first731 = v728;
  __n732 = v729;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard734, &__first731);
      while (1) {
        unsigned long t736 = __n732;
        unsigned long c737 = 0;
        _Bool c738 = ((t736 > c737)) ? 1 : 0;
        if (!c738) break;
        int* t739 = __first731;
        void_std___Construct_int_(t739);
      for_step735: ;
        unsigned long t740 = __n732;
        unsigned long u741 = t740 - 1;
        __n732 = u741;
        int* t742 = __first731;
        int c743 = 1;
        int* ptr744 = &(t742)[c743];
        __first731 = ptr744;
      }
    std___UninitDestroyGuard_int___void___release(&__guard734);
    int* t745 = __first731;
    __retval733 = t745;
    int* t746 = __retval733;
    int* ret_val747 = t746;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard734);
    }
    return ret_val747;
  abort();
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v748, int* v749, int* v750) {
bb751:
  int* __first752;
  int* __last753;
  int* __value754;
  _Bool __load_outside_loop755;
  int __val756;
  __first752 = v748;
  __last753 = v749;
  __value754 = v750;
  _Bool c757 = 1;
  __load_outside_loop755 = c757;
  int* t758 = __value754;
  int t759 = *t758;
  __val756 = t759;
    while (1) {
      int* t761 = __first752;
      int* t762 = __last753;
      _Bool c763 = ((t761 != t762)) ? 1 : 0;
      if (!c763) break;
      int t764 = __val756;
      int* t765 = __first752;
      *t765 = t764;
    for_step760: ;
      int* t766 = __first752;
      int c767 = 1;
      int* ptr768 = &(t766)[c767];
      __first752 = ptr768;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v769, int* v770, int* v771) {
bb772:
  int* __first773;
  int* __last774;
  int* __value775;
  __first773 = v769;
  __last774 = v770;
  __value775 = v771;
  int* t776 = __first773;
  int* t777 = __last774;
  int* t778 = __value775;
  void_std____fill_a1_int___int_(t776, t777, t778);
  return;
}

// function: _ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag
int* int__std____fill_n_a_int___unsigned_long__int_(int* v779, unsigned long v780, int* v781, struct std__random_access_iterator_tag v782) {
bb783:
  int* __first784;
  unsigned long __n785;
  int* __value786;
  struct std__random_access_iterator_tag unnamed787;
  int* __retval788;
  __first784 = v779;
  __n785 = v780;
  __value786 = v781;
  unnamed787 = v782;
    unsigned long t789 = __n785;
    unsigned long c790 = 0;
    _Bool c791 = ((t789 <= c790)) ? 1 : 0;
    if (c791) {
      int* t792 = __first784;
      __retval788 = t792;
      int* t793 = __retval788;
      return t793;
    }
  int* t794 = __first784;
  int* t795 = __first784;
  unsigned long t796 = __n785;
  int* ptr797 = &(t795)[t796];
  int* t798 = __value786;
  void_std____fill_a_int___int_(t794, ptr797, t798);
  int* t799 = __first784;
  unsigned long t800 = __n785;
  int* ptr801 = &(t799)[t800];
  __retval788 = ptr801;
  int* t802 = __retval788;
  return t802;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer(unsigned long v803) {
bb804:
  unsigned long __n805;
  unsigned long __retval806;
  __n805 = v803;
  unsigned long t807 = __n805;
  __retval806 = t807;
  unsigned long t808 = __retval806;
  return t808;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v809) {
bb810:
  int** unnamed811;
  struct std__random_access_iterator_tag __retval812;
  unnamed811 = v809;
  struct std__random_access_iterator_tag t813 = __retval812;
  return t813;
}

// function: _ZSt6fill_nIPimiET_S1_T0_RKT1_
int* int__std__fill_n_int___unsigned_long__int_(int* v814, unsigned long v815, int* v816) {
bb817:
  int* __first818;
  unsigned long __n819;
  int* __value820;
  int* __retval821;
  struct std__random_access_iterator_tag agg_tmp0822;
  __first818 = v814;
  __n819 = v815;
  __value820 = v816;
  int* t823 = __first818;
  unsigned long t824 = __n819;
  unsigned long r825 = std____size_to_integer(t824);
  int* t826 = __value820;
  struct std__random_access_iterator_tag r827 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first818);
  agg_tmp0822 = r827;
  struct std__random_access_iterator_tag t828 = agg_tmp0822;
  int* r829 = int__std____fill_n_a_int___unsigned_long__int_(t823, r825, t826, t828);
  __retval821 = r829;
  int* t830 = __retval821;
  return t830;
}

// function: _ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* v831, unsigned long v832) {
bb833:
  int* __first834;
  unsigned long __n835;
  int* __retval836;
  __first834 = v831;
  __n835 = v832;
    unsigned long t837 = __n835;
    unsigned long c838 = 0;
    _Bool c839 = ((t837 > c838)) ? 1 : 0;
    if (c839) {
      int* __val840;
      int* t841 = __first834;
      __val840 = t841;
      int* t842 = __val840;
      void_std___Construct_int_(t842);
      int* t843 = __first834;
      int c844 = 1;
      int* ptr845 = &(t843)[c844];
      __first834 = ptr845;
      int* t846 = __first834;
      unsigned long t847 = __n835;
      unsigned long c848 = 1;
      unsigned long b849 = t847 - c848;
      int* t850 = __val840;
      int* r851 = int__std__fill_n_int___unsigned_long__int_(t846, b849, t850);
      __first834 = r851;
    }
  int* t852 = __first834;
  __retval836 = t852;
  int* t853 = __retval836;
  return t853;
}

// function: _ZSt25__uninitialized_default_nIPimET_S1_T0_
int* int__std____uninitialized_default_n_int___unsigned_long_(int* v854, unsigned long v855) {
bb856:
  int* __first857;
  unsigned long __n858;
  int* __retval859;
  _Bool __can_fill860;
  __first857 = v854;
  __n858 = v855;
    _Bool r861 = std__is_constant_evaluated();
    if (r861) {
      int* t862 = __first857;
      unsigned long t863 = __n858;
      int* r864 = int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(t862, t863);
      __retval859 = r864;
      int* t865 = __retval859;
      return t865;
    }
  _Bool c866 = 1;
  __can_fill860 = c866;
  int* t867 = __first857;
  unsigned long t868 = __n858;
  int* r869 = int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(t867, t868);
  __retval859 = r869;
  int* t870 = __retval859;
  return t870;
}

// function: _ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* v871, unsigned long v872, struct std__allocator_int_* v873) {
bb874:
  int* __first875;
  unsigned long __n876;
  struct std__allocator_int_* unnamed877;
  int* __retval878;
  __first875 = v871;
  __n876 = v872;
  unnamed877 = v873;
  int* t879 = __first875;
  unsigned long t880 = __n876;
  int* r881 = int__std____uninitialized_default_n_int___unsigned_long_(t879, t880);
  __retval878 = r881;
  int* t882 = __retval878;
  return t882;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v883) {
bb884:
  struct std___Vector_base_int__std__allocator_int__* this885;
  struct std__allocator_int_* __retval886;
  this885 = v883;
  struct std___Vector_base_int__std__allocator_int__* t887 = this885;
  struct std__allocator_int_* base888 = (struct std__allocator_int_*)((char *)&(t887->_M_impl) + 0);
  __retval886 = base888;
  struct std__allocator_int_* t889 = __retval886;
  return t889;
}

// function: _ZNSt6vectorIiSaIiEE21_M_default_initializeEm
void std__vector_int__std__allocator_int______M_default_initialize(struct std__vector_int__std__allocator_int__* v890, unsigned long v891) {
bb892:
  struct std__vector_int__std__allocator_int__* this893;
  unsigned long __n894;
  this893 = v890;
  __n894 = v891;
  struct std__vector_int__std__allocator_int__* t895 = this893;
  struct std___Vector_base_int__std__allocator_int__* base896 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t895 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base897 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base896->_M_impl) + 0);
  int* t898 = base897->_M_start;
  unsigned long t899 = __n894;
  struct std___Vector_base_int__std__allocator_int__* base900 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t895 + 0);
  struct std__allocator_int_* r901 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base900);
  int* r902 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(t898, t899, r901);
  struct std___Vector_base_int__std__allocator_int__* base903 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t895 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base904 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base903->_M_impl) + 0);
  base904->_M_finish = r902;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v905, int* v906, unsigned long v907) {
bb908:
  struct std____new_allocator_int_* this909;
  int* __p910;
  unsigned long __n911;
  this909 = v905;
  __p910 = v906;
  __n911 = v907;
  struct std____new_allocator_int_* t912 = this909;
    unsigned long c913 = 4;
    unsigned long c914 = 16;
    _Bool c915 = ((c913 > c914)) ? 1 : 0;
    if (c915) {
      int* t916 = __p910;
      void* cast917 = (void*)t916;
      unsigned long t918 = __n911;
      unsigned long c919 = 4;
      unsigned long b920 = t918 * c919;
      unsigned long c921 = 4;
      operator_delete_3(cast917, b920, c921);
      return;
    }
  int* t922 = __p910;
  void* cast923 = (void*)t922;
  unsigned long t924 = __n911;
  unsigned long c925 = 4;
  unsigned long b926 = t924 * c925;
  operator_delete_2(cast923, b926);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v927, int* v928, unsigned long v929) {
bb930:
  struct std__allocator_int_* this931;
  int* __p932;
  unsigned long __n933;
  this931 = v927;
  __p932 = v928;
  __n933 = v929;
  struct std__allocator_int_* t934 = this931;
    _Bool r935 = std____is_constant_evaluated();
    if (r935) {
      int* t936 = __p932;
      void* cast937 = (void*)t936;
      operator_delete(cast937);
      return;
    }
  struct std____new_allocator_int_* base938 = (struct std____new_allocator_int_*)((char *)t934 + 0);
  int* t939 = __p932;
  unsigned long t940 = __n933;
  std____new_allocator_int___deallocate(base938, t939, t940);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v941, int* v942, unsigned long v943) {
bb944:
  struct std__allocator_int_* __a945;
  int* __p946;
  unsigned long __n947;
  __a945 = v941;
  __p946 = v942;
  __n947 = v943;
  struct std__allocator_int_* t948 = __a945;
  int* t949 = __p946;
  unsigned long t950 = __n947;
  std__allocator_int___deallocate(t948, t949, t950);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v951, int* v952, unsigned long v953) {
bb954:
  struct std___Vector_base_int__std__allocator_int__* this955;
  int* __p956;
  unsigned long __n957;
  this955 = v951;
  __p956 = v952;
  __n957 = v953;
  struct std___Vector_base_int__std__allocator_int__* t958 = this955;
    int* t959 = __p956;
    _Bool cast960 = (_Bool)t959;
    if (cast960) {
      struct std__allocator_int_* base961 = (struct std__allocator_int_*)((char *)&(t958->_M_impl) + 0);
      int* t962 = __p956;
      unsigned long t963 = __n957;
      std__allocator_traits_std__allocator_int_____deallocate(base961, t962, t963);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v964) {
bb965:
  struct std___Vector_base_int__std__allocator_int__* this966;
  this966 = v964;
  struct std___Vector_base_int__std__allocator_int__* t967 = this966;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base968 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t967->_M_impl) + 0);
    int* t969 = base968->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base970 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t967->_M_impl) + 0);
    int* t971 = base970->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base972 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t967->_M_impl) + 0);
    int* t973 = base972->_M_start;
    long diff974 = t971 - t973;
    unsigned long cast975 = (unsigned long)diff974;
    std___Vector_base_int__std__allocator_int______M_deallocate(t967, t969, cast975);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t967->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v976, struct std____new_allocator_int_* v977) {
bb978:
  struct std____new_allocator_int_* this979;
  struct std____new_allocator_int_* unnamed980;
  this979 = v976;
  unnamed980 = v977;
  struct std____new_allocator_int_* t981 = this979;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v982) {
bb983:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this984;
  this984 = v982;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t985 = this984;
  int* c986 = ((void*)0);
  t985->_M_start = c986;
  int* c987 = ((void*)0);
  t985->_M_finish = c987;
  int* c988 = ((void*)0);
  t985->_M_end_of_storage = c988;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v989) {
bb990:
  int* __location991;
  __location991 = v989;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v992, int* v993) {
bb994:
  int* __first995;
  int* __last996;
  __first995 = v992;
  __last996 = v993;
      _Bool r997 = std____is_constant_evaluated();
      if (r997) {
          while (1) {
            int* t999 = __first995;
            int* t1000 = __last996;
            _Bool c1001 = ((t999 != t1000)) ? 1 : 0;
            if (!c1001) break;
            int* t1002 = __first995;
            void_std__destroy_at_int_(t1002);
          for_step998: ;
            int* t1003 = __first995;
            int c1004 = 1;
            int* ptr1005 = &(t1003)[c1004];
            __first995 = ptr1005;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1006, int* v1007, struct std__allocator_int_* v1008) {
bb1009:
  int* __first1010;
  int* __last1011;
  struct std__allocator_int_* unnamed1012;
  __first1010 = v1006;
  __last1011 = v1007;
  unnamed1012 = v1008;
  int* t1013 = __first1010;
  int* t1014 = __last1011;
  void_std___Destroy_int__(t1013, t1014);
  return;
}

