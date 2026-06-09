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

int __const_main_myints[5] = {10, 20, 30, 30, 20};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "myvector[4] != 99";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm84/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[19] = "myvector contains:";
char _str_3[2] = " ";
char _str_4[49] = "cannot create std::vector larger than max_size()";
char _str_5[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[19] = "__n < this->size()";
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
_Bool bool___gnu_cxx____ops___Iter_equals_val_int_const___operator___int__(struct __gnu_cxx____ops___Iter_equals_val_const_int_* p0, int* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____replace_copy_if_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equals_val_int_const___int_(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____ops___Iter_equals_val_const_int_ p3, int* p4);
void __gnu_cxx____ops___Iter_equals_val_int_const____Iter_equals_val(struct __gnu_cxx____ops___Iter_equals_val_const_int_* p0, int* p1);
struct __gnu_cxx____ops___Iter_equals_val_const_int_ __gnu_cxx____ops___Iter_equals_val_int_const____gnu_cxx____ops____iter_equals_val_int_const_(int* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__replace_copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, int* p3, int* p4);
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

// function: _ZN9__gnu_cxx5__ops16_Iter_equals_valIKiEclIPiEEbT_
_Bool bool___gnu_cxx____ops___Iter_equals_val_int_const___operator___int__(struct __gnu_cxx____ops___Iter_equals_val_const_int_* v23, int* v24) {
bb25:
  struct __gnu_cxx____ops___Iter_equals_val_const_int_* this26;
  int* __it27;
  _Bool __retval28;
  this26 = v23;
  __it27 = v24;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_* t29 = this26;
  int* t30 = __it27;
  int t31 = *t30;
  int* t32 = t29->_M_value;
  int t33 = *t32;
  _Bool c34 = ((t31 == t33)) ? 1 : 0;
  __retval28 = c34;
  _Bool t35 = __retval28;
  return t35;
}

// function: _ZSt17__replace_copy_ifIPiN9__gnu_cxx17__normal_iteratorIS0_St6vectorIiSaIiEEEENS1_5__ops16_Iter_equals_valIKiEEiET0_T_SC_SB_T1_RKT2_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____replace_copy_if_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equals_val_int_const___int_(int* v36, int* v37, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v38, struct __gnu_cxx____ops___Iter_equals_val_const_int_ v39, int* v40) {
bb41:
  int* __first42;
  int* __last43;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result44;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ __pred45;
  int* __new_value46;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval47;
  __first42 = v36;
  __last43 = v37;
  __result44 = v38;
  __pred45 = v39;
  __new_value46 = v40;
    while (1) {
      int* t49 = __first42;
      int* t50 = __last43;
      _Bool c51 = ((t49 != t50)) ? 1 : 0;
      if (!c51) break;
        int* t52 = __first42;
        _Bool r53 = bool___gnu_cxx____ops___Iter_equals_val_int_const___operator___int__(&__pred45, t52);
        if (r53) {
          int* t54 = __new_value46;
          int t55 = *t54;
          int* r56 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result44);
          *r56 = t55;
        } else {
          int* t57 = __first42;
          int t58 = *t57;
          int* r59 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result44);
          *r59 = t58;
        }
    for_step48: ;
      int* t60 = __first42;
      int c61 = 1;
      int* ptr62 = &(t60)[c61];
      __first42 = ptr62;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r63 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__result44);
    }
  __retval47 = __result44; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t64 = __retval47;
  return t64;
}

// function: _ZN9__gnu_cxx5__ops16_Iter_equals_valIKiEC2ERS2_
void __gnu_cxx____ops___Iter_equals_val_int_const____Iter_equals_val(struct __gnu_cxx____ops___Iter_equals_val_const_int_* v65, int* v66) {
bb67:
  struct __gnu_cxx____ops___Iter_equals_val_const_int_* this68;
  int* __value69;
  this68 = v65;
  __value69 = v66;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_* t70 = this68;
  int* t71 = __value69;
  t70->_M_value = t71;
  return;
}

// function: _ZN9__gnu_cxx5__ops17__iter_equals_valIKiEENS0_16_Iter_equals_valIT_EERS4_
struct __gnu_cxx____ops___Iter_equals_val_const_int_ __gnu_cxx____ops___Iter_equals_val_int_const____gnu_cxx____ops____iter_equals_val_int_const_(int* v72) {
bb73:
  int* __val74;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ __retval75;
  __val74 = v72;
  int* t76 = __val74;
  __gnu_cxx____ops___Iter_equals_val_int_const____Iter_equals_val(&__retval75, t76);
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ t77 = __retval75;
  return t77;
}

// function: _ZSt12replace_copyIPiN9__gnu_cxx17__normal_iteratorIS0_St6vectorIiSaIiEEEEiET0_T_S8_S7_RKT1_SB_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__replace_copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(int* v78, int* v79, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v80, int* v81, int* v82) {
bb83:
  int* __first84;
  int* __last85;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result86;
  int* __old_value87;
  int* __new_value88;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval89;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp090;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ agg_tmp191;
  __first84 = v78;
  __last85 = v79;
  __result86 = v80;
  __old_value87 = v81;
  __new_value88 = v82;
  int* t92 = __first84;
  int* t93 = __last85;
  agg_tmp090 = __result86; // copy
  int* t94 = __old_value87;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ r95 = __gnu_cxx____ops___Iter_equals_val_int_const____gnu_cxx____ops____iter_equals_val_int_const_(t94);
  agg_tmp191 = r95;
  int* t96 = __new_value88;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t97 = agg_tmp090;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ t98 = agg_tmp191;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r99 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____replace_copy_if_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equals_val_int_const___int_(t92, t93, t97, t98, t96);
  __retval89 = r99;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t100 = __retval89;
  return t100;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v101, int** v102) {
bb103:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this104;
  int** __i105;
  this104 = v101;
  __i105 = v102;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t106 = this104;
  int** t107 = __i105;
  int* t108 = *t107;
  t106->_M_current = t108;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v109) {
bb110:
  struct std__vector_int__std__allocator_int__* this111;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval112;
  this111 = v109;
  struct std__vector_int__std__allocator_int__* t113 = this111;
  struct std___Vector_base_int__std__allocator_int__* base114 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t113 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base115 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base114->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval112, &base115->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t116 = __retval112;
  return t116;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v117) {
bb118:
  struct std__vector_int__std__allocator_int__* this119;
  unsigned long __retval120;
  long __dif121;
  this119 = v117;
  struct std__vector_int__std__allocator_int__* t122 = this119;
  struct std___Vector_base_int__std__allocator_int__* base123 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t122 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base124 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base123->_M_impl) + 0);
  int* t125 = base124->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base126 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t122 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base127 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base126->_M_impl) + 0);
  int* t128 = base127->_M_start;
  long diff129 = t125 - t128;
  __dif121 = diff129;
    long t130 = __dif121;
    long c131 = 0;
    _Bool c132 = ((t130 < c131)) ? 1 : 0;
    if (c132) {
      __builtin_unreachable();
    }
  long t133 = __dif121;
  unsigned long cast134 = (unsigned long)t133;
  __retval120 = cast134;
  unsigned long t135 = __retval120;
  return t135;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v136, unsigned long v137) {
bb138:
  struct std__vector_int__std__allocator_int__* this139;
  unsigned long __n140;
  int* __retval141;
  this139 = v136;
  __n140 = v137;
  struct std__vector_int__std__allocator_int__* t142 = this139;
    do {
          unsigned long t143 = __n140;
          unsigned long r144 = std__vector_int__std__allocator_int_____size___const(t142);
          _Bool c145 = ((t143 < r144)) ? 1 : 0;
          _Bool u146 = !c145;
          if (u146) {
            char* cast147 = (char*)&(_str_5);
            int c148 = 1263;
            char* cast149 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast150 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast147, c148, cast149, cast150);
          }
      _Bool c151 = 0;
      if (!c151) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base152 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t142 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base153 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base152->_M_impl) + 0);
  int* t154 = base153->_M_start;
  unsigned long t155 = __n140;
  int* ptr156 = &(t154)[t155];
  __retval141 = ptr156;
  int* t157 = __retval141;
  return t157;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v158, int v159) {
bb160:
  int __a161;
  int __b162;
  int __retval163;
  __a161 = v158;
  __b162 = v159;
  int t164 = __a161;
  int t165 = __b162;
  int b166 = t164 | t165;
  __retval163 = b166;
  int t167 = __retval163;
  return t167;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v168) {
bb169:
  struct std__basic_ios_char__std__char_traits_char__* this170;
  int __retval171;
  this170 = v168;
  struct std__basic_ios_char__std__char_traits_char__* t172 = this170;
  struct std__ios_base* base173 = (struct std__ios_base*)((char *)t172 + 0);
  int t174 = base173->_M_streambuf_state;
  __retval171 = t174;
  int t175 = __retval171;
  return t175;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v176, int v177) {
bb178:
  struct std__basic_ios_char__std__char_traits_char__* this179;
  int __state180;
  this179 = v176;
  __state180 = v177;
  struct std__basic_ios_char__std__char_traits_char__* t181 = this179;
  int r182 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t181);
  int t183 = __state180;
  int r184 = std__operator_(r182, t183);
  std__basic_ios_char__std__char_traits_char_____clear(t181, r184);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v185, char* v186) {
bb187:
  char* __c1188;
  char* __c2189;
  _Bool __retval190;
  __c1188 = v185;
  __c2189 = v186;
  char* t191 = __c1188;
  char t192 = *t191;
  int cast193 = (int)t192;
  char* t194 = __c2189;
  char t195 = *t194;
  int cast196 = (int)t195;
  _Bool c197 = ((cast193 == cast196)) ? 1 : 0;
  __retval190 = c197;
  _Bool t198 = __retval190;
  return t198;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v199) {
bb200:
  char* __p201;
  unsigned long __retval202;
  unsigned long __i203;
  __p201 = v199;
  unsigned long c204 = 0;
  __i203 = c204;
    char ref_tmp0205;
    while (1) {
      unsigned long t206 = __i203;
      char* t207 = __p201;
      char* ptr208 = &(t207)[t206];
      char c209 = 0;
      ref_tmp0205 = c209;
      _Bool r210 = __gnu_cxx__char_traits_char___eq(ptr208, &ref_tmp0205);
      _Bool u211 = !r210;
      if (!u211) break;
      unsigned long t212 = __i203;
      unsigned long u213 = t212 + 1;
      __i203 = u213;
    }
  unsigned long t214 = __i203;
  __retval202 = t214;
  unsigned long t215 = __retval202;
  return t215;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v216) {
bb217:
  char* __s218;
  unsigned long __retval219;
  __s218 = v216;
    _Bool r220 = std____is_constant_evaluated();
    if (r220) {
      char* t221 = __s218;
      unsigned long r222 = __gnu_cxx__char_traits_char___length(t221);
      __retval219 = r222;
      unsigned long t223 = __retval219;
      return t223;
    }
  char* t224 = __s218;
  unsigned long r225 = strlen(t224);
  __retval219 = r225;
  unsigned long t226 = __retval219;
  return t226;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v227, char* v228) {
bb229:
  struct std__basic_ostream_char__std__char_traits_char__* __out230;
  char* __s231;
  struct std__basic_ostream_char__std__char_traits_char__* __retval232;
  __out230 = v227;
  __s231 = v228;
    char* t233 = __s231;
    _Bool cast234 = (_Bool)t233;
    _Bool u235 = !cast234;
    if (u235) {
      struct std__basic_ostream_char__std__char_traits_char__* t236 = __out230;
      void** v237 = (void**)t236;
      void* v238 = *((void**)v237);
      unsigned char* cast239 = (unsigned char*)v238;
      long c240 = -24;
      unsigned char* ptr241 = &(cast239)[c240];
      long* cast242 = (long*)ptr241;
      long t243 = *cast242;
      unsigned char* cast244 = (unsigned char*)t236;
      unsigned char* ptr245 = &(cast244)[t243];
      struct std__basic_ostream_char__std__char_traits_char__* cast246 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr245;
      struct std__basic_ios_char__std__char_traits_char__* cast247 = (struct std__basic_ios_char__std__char_traits_char__*)cast246;
      int t248 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast247, t248);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t249 = __out230;
      char* t250 = __s231;
      char* t251 = __s231;
      unsigned long r252 = std__char_traits_char___length(t251);
      long cast253 = (long)r252;
      struct std__basic_ostream_char__std__char_traits_char__* r254 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t249, t250, cast253);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t255 = __out230;
  __retval232 = t255;
  struct std__basic_ostream_char__std__char_traits_char__* t256 = __retval232;
  return t256;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v257) {
bb258:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this259;
  int** __retval260;
  this259 = v257;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t261 = this259;
  __retval260 = &t261->_M_current;
  int** t262 = __retval260;
  return t262;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v263, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v264) {
bb265:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs266;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs267;
  _Bool __retval268;
  __lhs266 = v263;
  __rhs267 = v264;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t269 = __lhs266;
  int** r270 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t269);
  int* t271 = *r270;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t272 = __rhs267;
  int** r273 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t272);
  int* t274 = *r273;
  _Bool c275 = ((t271 == t274)) ? 1 : 0;
  __retval268 = c275;
  _Bool t276 = __retval268;
  return t276;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v277) {
bb278:
  struct std__vector_int__std__allocator_int__* this279;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval280;
  this279 = v277;
  struct std__vector_int__std__allocator_int__* t281 = this279;
  struct std___Vector_base_int__std__allocator_int__* base282 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t281 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base283 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base282->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval280, &base283->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t284 = __retval280;
  return t284;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v285) {
bb286:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this287;
  int* __retval288;
  this287 = v285;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t289 = this287;
  int* t290 = t289->_M_current;
  __retval288 = t290;
  int* t291 = __retval288;
  return t291;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v292) {
bb293:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this294;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval295;
  this294 = v292;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t296 = this294;
  int* t297 = t296->_M_current;
  int c298 = 1;
  int* ptr299 = &(t297)[c298];
  t296->_M_current = ptr299;
  __retval295 = t296;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t300 = __retval295;
  return t300;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v301, void* v302) {
bb303:
  struct std__basic_ostream_char__std__char_traits_char__* this304;
  void* __pf305;
  struct std__basic_ostream_char__std__char_traits_char__* __retval306;
  this304 = v301;
  __pf305 = v302;
  struct std__basic_ostream_char__std__char_traits_char__* t307 = this304;
  void* t308 = __pf305;
  struct std__basic_ostream_char__std__char_traits_char__* r309 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t308)(t307);
  __retval306 = r309;
  struct std__basic_ostream_char__std__char_traits_char__* t310 = __retval306;
  return t310;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v311) {
bb312:
  struct std__basic_ostream_char__std__char_traits_char__* __os313;
  struct std__basic_ostream_char__std__char_traits_char__* __retval314;
  __os313 = v311;
  struct std__basic_ostream_char__std__char_traits_char__* t315 = __os313;
  struct std__basic_ostream_char__std__char_traits_char__* r316 = std__ostream__flush(t315);
  __retval314 = r316;
  struct std__basic_ostream_char__std__char_traits_char__* t317 = __retval314;
  return t317;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v318) {
bb319:
  struct std__ctype_char_* __f320;
  struct std__ctype_char_* __retval321;
  __f320 = v318;
    struct std__ctype_char_* t322 = __f320;
    _Bool cast323 = (_Bool)t322;
    _Bool u324 = !cast323;
    if (u324) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t325 = __f320;
  __retval321 = t325;
  struct std__ctype_char_* t326 = __retval321;
  return t326;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v327, char v328) {
bb329:
  struct std__ctype_char_* this330;
  char __c331;
  char __retval332;
  this330 = v327;
  __c331 = v328;
  struct std__ctype_char_* t333 = this330;
    char t334 = t333->_M_widen_ok;
    _Bool cast335 = (_Bool)t334;
    if (cast335) {
      char t336 = __c331;
      unsigned char cast337 = (unsigned char)t336;
      unsigned long cast338 = (unsigned long)cast337;
      char t339 = t333->_M_widen[cast338];
      __retval332 = t339;
      char t340 = __retval332;
      return t340;
    }
  std__ctype_char____M_widen_init___const(t333);
  char t341 = __c331;
  void** v342 = (void**)t333;
  void* v343 = *((void**)v342);
  char vcall346 = (char)__VERIFIER_virtual_call_char_char(t333, 6, t341);
  __retval332 = vcall346;
  char t347 = __retval332;
  return t347;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v348, char v349) {
bb350:
  struct std__basic_ios_char__std__char_traits_char__* this351;
  char __c352;
  char __retval353;
  this351 = v348;
  __c352 = v349;
  struct std__basic_ios_char__std__char_traits_char__* t354 = this351;
  struct std__ctype_char_* t355 = t354->_M_ctype;
  struct std__ctype_char_* r356 = std__ctype_char__const__std____check_facet_std__ctype_char___(t355);
  char t357 = __c352;
  char r358 = std__ctype_char___widen_char__const(r356, t357);
  __retval353 = r358;
  char t359 = __retval353;
  return t359;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v360) {
bb361:
  struct std__basic_ostream_char__std__char_traits_char__* __os362;
  struct std__basic_ostream_char__std__char_traits_char__* __retval363;
  __os362 = v360;
  struct std__basic_ostream_char__std__char_traits_char__* t364 = __os362;
  struct std__basic_ostream_char__std__char_traits_char__* t365 = __os362;
  void** v366 = (void**)t365;
  void* v367 = *((void**)v366);
  unsigned char* cast368 = (unsigned char*)v367;
  long c369 = -24;
  unsigned char* ptr370 = &(cast368)[c369];
  long* cast371 = (long*)ptr370;
  long t372 = *cast371;
  unsigned char* cast373 = (unsigned char*)t365;
  unsigned char* ptr374 = &(cast373)[t372];
  struct std__basic_ostream_char__std__char_traits_char__* cast375 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr374;
  struct std__basic_ios_char__std__char_traits_char__* cast376 = (struct std__basic_ios_char__std__char_traits_char__*)cast375;
  char c377 = 10;
  char r378 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast376, c377);
  struct std__basic_ostream_char__std__char_traits_char__* r379 = std__ostream__put(t364, r378);
  struct std__basic_ostream_char__std__char_traits_char__* r380 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r379);
  __retval363 = r380;
  struct std__basic_ostream_char__std__char_traits_char__* t381 = __retval363;
  return t381;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v382) {
bb383:
  struct std__vector_int__std__allocator_int__* this384;
  this384 = v382;
  struct std__vector_int__std__allocator_int__* t385 = this384;
    struct std___Vector_base_int__std__allocator_int__* base386 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t385 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base387 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base386->_M_impl) + 0);
    int* t388 = base387->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base389 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t385 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base390 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base389->_M_impl) + 0);
    int* t391 = base390->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base392 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t385 + 0);
    struct std__allocator_int_* r393 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base392);
    void_std___Destroy_int___int_(t388, t391, r393);
  {
    struct std___Vector_base_int__std__allocator_int__* base394 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t385 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base394);
  }
  return;
}

// function: main
int main() {
bb395:
  int __retval396;
  int myints397[5];
  struct std__vector_int__std__allocator_int__ myvector398;
  struct std__allocator_int_ ref_tmp0399;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0400;
  int ref_tmp1401;
  int ref_tmp2402;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1403;
  int c404 = 0;
  __retval396 = c404;
  // array copy
  __builtin_memcpy(myints397, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
  unsigned long c405 = 5;
  std__allocator_int___allocator_2(&ref_tmp0399);
    std__vector_int__std__allocator_int_____vector(&myvector398, c405, &ref_tmp0399);
  {
    std__allocator_int____allocator(&ref_tmp0399);
  }
    int* cast406 = (int*)&(myints397);
    int* cast407 = (int*)&(myints397);
    int c408 = 5;
    int* ptr409 = &(cast407)[c408];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r410 = std__vector_int__std__allocator_int_____begin(&myvector398);
    agg_tmp0400 = r410;
    int c411 = 20;
    ref_tmp1401 = c411;
    int c412 = 99;
    ref_tmp2402 = c412;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t413 = agg_tmp0400;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r414 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__replace_copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(cast406, ptr409, t413, &ref_tmp1401, &ref_tmp2402);
    agg_tmp1403 = r414;
    unsigned long c415 = 4;
    int* r416 = std__vector_int__std__allocator_int_____operator__(&myvector398, c415);
    int t417 = *r416;
    int c418 = 99;
    _Bool c419 = ((t417 != c418)) ? 1 : 0;
    if (c419) {
    } else {
      char* cast420 = (char*)&(_str);
      char* c421 = _str_1;
      unsigned int c422 = 21;
      char* cast423 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast420, c421, c422, cast423);
    }
    char* cast424 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r425 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast424);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it426;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3427;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r428 = std__vector_int__std__allocator_int_____begin(&myvector398);
      it426 = r428;
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r430 = std__vector_int__std__allocator_int_____end(&myvector398);
        ref_tmp3427 = r430;
        _Bool r431 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it426, &ref_tmp3427);
        _Bool u432 = !r431;
        if (!u432) break;
        char* cast433 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r434 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast433);
        int* r435 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it426);
        int t436 = *r435;
        struct std__basic_ostream_char__std__char_traits_char__* r437 = std__ostream__operator__(r434, t436);
      for_step429: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r438 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&it426);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r439 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c440 = 0;
    __retval396 = c440;
    int t441 = __retval396;
    int ret_val442 = t441;
    {
      std__vector_int__std__allocator_int______vector(&myvector398);
    }
    return ret_val442;
  int t443 = __retval396;
  return t443;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v444) {
bb445:
  struct std____new_allocator_int_* this446;
  this446 = v444;
  struct std____new_allocator_int_* t447 = this446;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v448, unsigned long* v449) {
bb450:
  unsigned long* __a451;
  unsigned long* __b452;
  unsigned long* __retval453;
  __a451 = v448;
  __b452 = v449;
    unsigned long* t454 = __b452;
    unsigned long t455 = *t454;
    unsigned long* t456 = __a451;
    unsigned long t457 = *t456;
    _Bool c458 = ((t455 < t457)) ? 1 : 0;
    if (c458) {
      unsigned long* t459 = __b452;
      __retval453 = t459;
      unsigned long* t460 = __retval453;
      return t460;
    }
  unsigned long* t461 = __a451;
  __retval453 = t461;
  unsigned long* t462 = __retval453;
  return t462;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v463) {
bb464:
  struct std__allocator_int_* __a465;
  unsigned long __retval466;
  unsigned long __diffmax467;
  unsigned long __allocmax468;
  __a465 = v463;
  unsigned long c469 = 2305843009213693951;
  __diffmax467 = c469;
  unsigned long c470 = 4611686018427387903;
  __allocmax468 = c470;
  unsigned long* r471 = unsigned_long_const__std__min_unsigned_long_(&__diffmax467, &__allocmax468);
  unsigned long t472 = *r471;
  __retval466 = t472;
  unsigned long t473 = __retval466;
  return t473;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v474, struct std__allocator_int_* v475) {
bb476:
  struct std__allocator_int_* this477;
  struct std__allocator_int_* __a478;
  this477 = v474;
  __a478 = v475;
  struct std__allocator_int_* t479 = this477;
  struct std____new_allocator_int_* base480 = (struct std____new_allocator_int_*)((char *)t479 + 0);
  struct std__allocator_int_* t481 = __a478;
  struct std____new_allocator_int_* base482 = (struct std____new_allocator_int_*)((char *)t481 + 0);
  std____new_allocator_int_____new_allocator(base480, base482);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v483, struct std__allocator_int_* v484) {
bb485:
  unsigned long __n486;
  struct std__allocator_int_* __a487;
  unsigned long __retval488;
  __n486 = v483;
  __a487 = v484;
    struct std__allocator_int_ ref_tmp0489;
    _Bool tmp_exprcleanup490;
    unsigned long t491 = __n486;
    struct std__allocator_int_* t492 = __a487;
    std__allocator_int___allocator(&ref_tmp0489, t492);
      unsigned long r493 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0489);
      _Bool c494 = ((t491 > r493)) ? 1 : 0;
      tmp_exprcleanup490 = c494;
    {
      std__allocator_int____allocator(&ref_tmp0489);
    }
    _Bool t495 = tmp_exprcleanup490;
    if (t495) {
      char* cast496 = (char*)&(_str_4);
      std____throw_length_error(cast496);
    }
  unsigned long t497 = __n486;
  __retval488 = t497;
  unsigned long t498 = __retval488;
  return t498;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v499, struct std__allocator_int_* v500) {
bb501:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this502;
  struct std__allocator_int_* __a503;
  this502 = v499;
  __a503 = v500;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t504 = this502;
  struct std__allocator_int_* base505 = (struct std__allocator_int_*)((char *)t504 + 0);
  struct std__allocator_int_* t506 = __a503;
  std__allocator_int___allocator(base505, t506);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base507 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t504 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base507);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb508:
  _Bool __retval509;
    _Bool c510 = 0;
    __retval509 = c510;
    _Bool t511 = __retval509;
    return t511;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v512) {
bb513:
  struct std____new_allocator_int_* this514;
  unsigned long __retval515;
  this514 = v512;
  struct std____new_allocator_int_* t516 = this514;
  unsigned long c517 = 9223372036854775807;
  unsigned long c518 = 4;
  unsigned long b519 = c517 / c518;
  __retval515 = b519;
  unsigned long t520 = __retval515;
  return t520;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v521, unsigned long v522, void* v523) {
bb524:
  struct std____new_allocator_int_* this525;
  unsigned long __n526;
  void* unnamed527;
  int* __retval528;
  this525 = v521;
  __n526 = v522;
  unnamed527 = v523;
  struct std____new_allocator_int_* t529 = this525;
    unsigned long t530 = __n526;
    unsigned long r531 = std____new_allocator_int____M_max_size___const(t529);
    _Bool c532 = ((t530 > r531)) ? 1 : 0;
    if (c532) {
        unsigned long t533 = __n526;
        unsigned long c534 = -1;
        unsigned long c535 = 4;
        unsigned long b536 = c534 / c535;
        _Bool c537 = ((t533 > b536)) ? 1 : 0;
        if (c537) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c538 = 4;
    unsigned long c539 = 16;
    _Bool c540 = ((c538 > c539)) ? 1 : 0;
    if (c540) {
      unsigned long __al541;
      unsigned long c542 = 4;
      __al541 = c542;
      unsigned long t543 = __n526;
      unsigned long c544 = 4;
      unsigned long b545 = t543 * c544;
      unsigned long t546 = __al541;
      void* r547 = operator_new_2(b545, t546);
      int* cast548 = (int*)r547;
      __retval528 = cast548;
      int* t549 = __retval528;
      return t549;
    }
  unsigned long t550 = __n526;
  unsigned long c551 = 4;
  unsigned long b552 = t550 * c551;
  void* r553 = operator_new(b552);
  int* cast554 = (int*)r553;
  __retval528 = cast554;
  int* t555 = __retval528;
  return t555;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v556, unsigned long v557) {
bb558:
  struct std__allocator_int_* this559;
  unsigned long __n560;
  int* __retval561;
  this559 = v556;
  __n560 = v557;
  struct std__allocator_int_* t562 = this559;
    _Bool r563 = std____is_constant_evaluated();
    if (r563) {
        unsigned long t564 = __n560;
        unsigned long c565 = 4;
        unsigned long ovr566;
        _Bool ovf567 = __builtin_mul_overflow(t564, c565, &ovr566);
        __n560 = ovr566;
        if (ovf567) {
          std____throw_bad_array_new_length();
        }
      unsigned long t568 = __n560;
      void* r569 = operator_new(t568);
      int* cast570 = (int*)r569;
      __retval561 = cast570;
      int* t571 = __retval561;
      return t571;
    }
  struct std____new_allocator_int_* base572 = (struct std____new_allocator_int_*)((char *)t562 + 0);
  unsigned long t573 = __n560;
  void* c574 = ((void*)0);
  int* r575 = std____new_allocator_int___allocate(base572, t573, c574);
  __retval561 = r575;
  int* t576 = __retval561;
  return t576;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v577, unsigned long v578) {
bb579:
  struct std__allocator_int_* __a580;
  unsigned long __n581;
  int* __retval582;
  __a580 = v577;
  __n581 = v578;
  struct std__allocator_int_* t583 = __a580;
  unsigned long t584 = __n581;
  int* r585 = std__allocator_int___allocate(t583, t584);
  __retval582 = r585;
  int* t586 = __retval582;
  return t586;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v587, unsigned long v588) {
bb589:
  struct std___Vector_base_int__std__allocator_int__* this590;
  unsigned long __n591;
  int* __retval592;
  this590 = v587;
  __n591 = v588;
  struct std___Vector_base_int__std__allocator_int__* t593 = this590;
  unsigned long t594 = __n591;
  unsigned long c595 = 0;
  _Bool c596 = ((t594 != c595)) ? 1 : 0;
  int* ternary597;
  if (c596) {
    struct std__allocator_int_* base598 = (struct std__allocator_int_*)((char *)&(t593->_M_impl) + 0);
    unsigned long t599 = __n591;
    int* r600 = std__allocator_traits_std__allocator_int_____allocate(base598, t599);
    ternary597 = (int*)r600;
  } else {
    int* c601 = ((void*)0);
    ternary597 = (int*)c601;
  }
  __retval592 = ternary597;
  int* t602 = __retval592;
  return t602;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v603, unsigned long v604) {
bb605:
  struct std___Vector_base_int__std__allocator_int__* this606;
  unsigned long __n607;
  this606 = v603;
  __n607 = v604;
  struct std___Vector_base_int__std__allocator_int__* t608 = this606;
  unsigned long t609 = __n607;
  int* r610 = std___Vector_base_int__std__allocator_int______M_allocate(t608, t609);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base611 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t608->_M_impl) + 0);
  base611->_M_start = r610;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base612 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t608->_M_impl) + 0);
  int* t613 = base612->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base614 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t608->_M_impl) + 0);
  base614->_M_finish = t613;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base615 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t608->_M_impl) + 0);
  int* t616 = base615->_M_start;
  unsigned long t617 = __n607;
  int* ptr618 = &(t616)[t617];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base619 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t608->_M_impl) + 0);
  base619->_M_end_of_storage = ptr618;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v620) {
bb621:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this622;
  this622 = v620;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t623 = this622;
  {
    struct std__allocator_int_* base624 = (struct std__allocator_int_*)((char *)t623 + 0);
    std__allocator_int____allocator(base624);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v625, unsigned long v626, struct std__allocator_int_* v627) {
bb628:
  struct std___Vector_base_int__std__allocator_int__* this629;
  unsigned long __n630;
  struct std__allocator_int_* __a631;
  this629 = v625;
  __n630 = v626;
  __a631 = v627;
  struct std___Vector_base_int__std__allocator_int__* t632 = this629;
  struct std__allocator_int_* t633 = __a631;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t632->_M_impl, t633);
    unsigned long t634 = __n630;
    std___Vector_base_int__std__allocator_int______M_create_storage(t632, t634);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb635:
  _Bool __retval636;
    _Bool c637 = 0;
    __retval636 = c637;
    _Bool t638 = __retval636;
    return t638;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v639, int** v640) {
bb641:
  struct std___UninitDestroyGuard_int____void_* this642;
  int** __first643;
  this642 = v639;
  __first643 = v640;
  struct std___UninitDestroyGuard_int____void_* t644 = this642;
  int** t645 = __first643;
  int* t646 = *t645;
  t644->_M_first = t646;
  int** t647 = __first643;
  t644->_M_cur = t647;
  return;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v648) {
bb649:
  int* __location650;
  int* __retval651;
  void* __loc652;
  __location650 = v648;
  int* t653 = __location650;
  void* cast654 = (void*)t653;
  __loc652 = cast654;
    void* t655 = __loc652;
    int* cast656 = (int*)t655;
    int c657 = 0;
    *cast656 = c657;
    __retval651 = cast656;
    int* t658 = __retval651;
    return t658;
  abort();
}

// function: _ZSt10_ConstructIiJEEvPT_DpOT0_
void void_std___Construct_int_(int* v659) {
bb660:
  int* __p661;
  __p661 = v659;
    _Bool r662 = std____is_constant_evaluated();
    if (r662) {
      int* t663 = __p661;
      int* r664 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t663);
      return;
    }
  int* t665 = __p661;
  void* cast666 = (void*)t665;
  int* cast667 = (int*)cast666;
  int c668 = 0;
  *cast667 = c668;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v669) {
bb670:
  struct std___UninitDestroyGuard_int____void_* this671;
  this671 = v669;
  struct std___UninitDestroyGuard_int____void_* t672 = this671;
  int** c673 = ((void*)0);
  t672->_M_cur = c673;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v674) {
bb675:
  struct std___UninitDestroyGuard_int____void_* this676;
  this676 = v674;
  struct std___UninitDestroyGuard_int____void_* t677 = this676;
    int** t678 = t677->_M_cur;
    int** c679 = ((void*)0);
    _Bool c680 = ((t678 != c679)) ? 1 : 0;
    if (c680) {
      int* t681 = t677->_M_first;
      int** t682 = t677->_M_cur;
      int* t683 = *t682;
      void_std___Destroy_int__(t681, t683);
    }
  return;
}

// function: _ZNSt27__uninitialized_default_n_1ILb0EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* v684, unsigned long v685) {
bb686:
  int* __first687;
  unsigned long __n688;
  int* __retval689;
  struct std___UninitDestroyGuard_int____void_ __guard690;
  __first687 = v684;
  __n688 = v685;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard690, &__first687);
      while (1) {
        unsigned long t692 = __n688;
        unsigned long c693 = 0;
        _Bool c694 = ((t692 > c693)) ? 1 : 0;
        if (!c694) break;
        int* t695 = __first687;
        void_std___Construct_int_(t695);
      for_step691: ;
        unsigned long t696 = __n688;
        unsigned long u697 = t696 - 1;
        __n688 = u697;
        int* t698 = __first687;
        int c699 = 1;
        int* ptr700 = &(t698)[c699];
        __first687 = ptr700;
      }
    std___UninitDestroyGuard_int___void___release(&__guard690);
    int* t701 = __first687;
    __retval689 = t701;
    int* t702 = __retval689;
    int* ret_val703 = t702;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard690);
    }
    return ret_val703;
  abort();
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v704, int* v705, int* v706) {
bb707:
  int* __first708;
  int* __last709;
  int* __value710;
  _Bool __load_outside_loop711;
  int __val712;
  __first708 = v704;
  __last709 = v705;
  __value710 = v706;
  _Bool c713 = 1;
  __load_outside_loop711 = c713;
  int* t714 = __value710;
  int t715 = *t714;
  __val712 = t715;
    while (1) {
      int* t717 = __first708;
      int* t718 = __last709;
      _Bool c719 = ((t717 != t718)) ? 1 : 0;
      if (!c719) break;
      int t720 = __val712;
      int* t721 = __first708;
      *t721 = t720;
    for_step716: ;
      int* t722 = __first708;
      int c723 = 1;
      int* ptr724 = &(t722)[c723];
      __first708 = ptr724;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v725, int* v726, int* v727) {
bb728:
  int* __first729;
  int* __last730;
  int* __value731;
  __first729 = v725;
  __last730 = v726;
  __value731 = v727;
  int* t732 = __first729;
  int* t733 = __last730;
  int* t734 = __value731;
  void_std____fill_a1_int___int_(t732, t733, t734);
  return;
}

// function: _ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag
int* int__std____fill_n_a_int___unsigned_long__int_(int* v735, unsigned long v736, int* v737, struct std__random_access_iterator_tag v738) {
bb739:
  int* __first740;
  unsigned long __n741;
  int* __value742;
  struct std__random_access_iterator_tag unnamed743;
  int* __retval744;
  __first740 = v735;
  __n741 = v736;
  __value742 = v737;
  unnamed743 = v738;
    unsigned long t745 = __n741;
    unsigned long c746 = 0;
    _Bool c747 = ((t745 <= c746)) ? 1 : 0;
    if (c747) {
      int* t748 = __first740;
      __retval744 = t748;
      int* t749 = __retval744;
      return t749;
    }
  int* t750 = __first740;
  int* t751 = __first740;
  unsigned long t752 = __n741;
  int* ptr753 = &(t751)[t752];
  int* t754 = __value742;
  void_std____fill_a_int___int_(t750, ptr753, t754);
  int* t755 = __first740;
  unsigned long t756 = __n741;
  int* ptr757 = &(t755)[t756];
  __retval744 = ptr757;
  int* t758 = __retval744;
  return t758;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer(unsigned long v759) {
bb760:
  unsigned long __n761;
  unsigned long __retval762;
  __n761 = v759;
  unsigned long t763 = __n761;
  __retval762 = t763;
  unsigned long t764 = __retval762;
  return t764;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v765) {
bb766:
  int** unnamed767;
  struct std__random_access_iterator_tag __retval768;
  unnamed767 = v765;
  struct std__random_access_iterator_tag t769 = __retval768;
  return t769;
}

// function: _ZSt6fill_nIPimiET_S1_T0_RKT1_
int* int__std__fill_n_int___unsigned_long__int_(int* v770, unsigned long v771, int* v772) {
bb773:
  int* __first774;
  unsigned long __n775;
  int* __value776;
  int* __retval777;
  struct std__random_access_iterator_tag agg_tmp0778;
  __first774 = v770;
  __n775 = v771;
  __value776 = v772;
  int* t779 = __first774;
  unsigned long t780 = __n775;
  unsigned long r781 = std____size_to_integer(t780);
  int* t782 = __value776;
  struct std__random_access_iterator_tag r783 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first774);
  agg_tmp0778 = r783;
  struct std__random_access_iterator_tag t784 = agg_tmp0778;
  int* r785 = int__std____fill_n_a_int___unsigned_long__int_(t779, r781, t782, t784);
  __retval777 = r785;
  int* t786 = __retval777;
  return t786;
}

// function: _ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* v787, unsigned long v788) {
bb789:
  int* __first790;
  unsigned long __n791;
  int* __retval792;
  __first790 = v787;
  __n791 = v788;
    unsigned long t793 = __n791;
    unsigned long c794 = 0;
    _Bool c795 = ((t793 > c794)) ? 1 : 0;
    if (c795) {
      int* __val796;
      int* t797 = __first790;
      __val796 = t797;
      int* t798 = __val796;
      void_std___Construct_int_(t798);
      int* t799 = __first790;
      int c800 = 1;
      int* ptr801 = &(t799)[c800];
      __first790 = ptr801;
      int* t802 = __first790;
      unsigned long t803 = __n791;
      unsigned long c804 = 1;
      unsigned long b805 = t803 - c804;
      int* t806 = __val796;
      int* r807 = int__std__fill_n_int___unsigned_long__int_(t802, b805, t806);
      __first790 = r807;
    }
  int* t808 = __first790;
  __retval792 = t808;
  int* t809 = __retval792;
  return t809;
}

// function: _ZSt25__uninitialized_default_nIPimET_S1_T0_
int* int__std____uninitialized_default_n_int___unsigned_long_(int* v810, unsigned long v811) {
bb812:
  int* __first813;
  unsigned long __n814;
  int* __retval815;
  _Bool __can_fill816;
  __first813 = v810;
  __n814 = v811;
    _Bool r817 = std__is_constant_evaluated();
    if (r817) {
      int* t818 = __first813;
      unsigned long t819 = __n814;
      int* r820 = int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(t818, t819);
      __retval815 = r820;
      int* t821 = __retval815;
      return t821;
    }
  _Bool c822 = 1;
  __can_fill816 = c822;
  int* t823 = __first813;
  unsigned long t824 = __n814;
  int* r825 = int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(t823, t824);
  __retval815 = r825;
  int* t826 = __retval815;
  return t826;
}

// function: _ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* v827, unsigned long v828, struct std__allocator_int_* v829) {
bb830:
  int* __first831;
  unsigned long __n832;
  struct std__allocator_int_* unnamed833;
  int* __retval834;
  __first831 = v827;
  __n832 = v828;
  unnamed833 = v829;
  int* t835 = __first831;
  unsigned long t836 = __n832;
  int* r837 = int__std____uninitialized_default_n_int___unsigned_long_(t835, t836);
  __retval834 = r837;
  int* t838 = __retval834;
  return t838;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v839) {
bb840:
  struct std___Vector_base_int__std__allocator_int__* this841;
  struct std__allocator_int_* __retval842;
  this841 = v839;
  struct std___Vector_base_int__std__allocator_int__* t843 = this841;
  struct std__allocator_int_* base844 = (struct std__allocator_int_*)((char *)&(t843->_M_impl) + 0);
  __retval842 = base844;
  struct std__allocator_int_* t845 = __retval842;
  return t845;
}

// function: _ZNSt6vectorIiSaIiEE21_M_default_initializeEm
void std__vector_int__std__allocator_int______M_default_initialize(struct std__vector_int__std__allocator_int__* v846, unsigned long v847) {
bb848:
  struct std__vector_int__std__allocator_int__* this849;
  unsigned long __n850;
  this849 = v846;
  __n850 = v847;
  struct std__vector_int__std__allocator_int__* t851 = this849;
  struct std___Vector_base_int__std__allocator_int__* base852 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t851 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base853 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base852->_M_impl) + 0);
  int* t854 = base853->_M_start;
  unsigned long t855 = __n850;
  struct std___Vector_base_int__std__allocator_int__* base856 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t851 + 0);
  struct std__allocator_int_* r857 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base856);
  int* r858 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(t854, t855, r857);
  struct std___Vector_base_int__std__allocator_int__* base859 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t851 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base860 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base859->_M_impl) + 0);
  base860->_M_finish = r858;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v861, int* v862, unsigned long v863) {
bb864:
  struct std____new_allocator_int_* this865;
  int* __p866;
  unsigned long __n867;
  this865 = v861;
  __p866 = v862;
  __n867 = v863;
  struct std____new_allocator_int_* t868 = this865;
    unsigned long c869 = 4;
    unsigned long c870 = 16;
    _Bool c871 = ((c869 > c870)) ? 1 : 0;
    if (c871) {
      int* t872 = __p866;
      void* cast873 = (void*)t872;
      unsigned long t874 = __n867;
      unsigned long c875 = 4;
      unsigned long b876 = t874 * c875;
      unsigned long c877 = 4;
      operator_delete_3(cast873, b876, c877);
      return;
    }
  int* t878 = __p866;
  void* cast879 = (void*)t878;
  unsigned long t880 = __n867;
  unsigned long c881 = 4;
  unsigned long b882 = t880 * c881;
  operator_delete_2(cast879, b882);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v883, int* v884, unsigned long v885) {
bb886:
  struct std__allocator_int_* this887;
  int* __p888;
  unsigned long __n889;
  this887 = v883;
  __p888 = v884;
  __n889 = v885;
  struct std__allocator_int_* t890 = this887;
    _Bool r891 = std____is_constant_evaluated();
    if (r891) {
      int* t892 = __p888;
      void* cast893 = (void*)t892;
      operator_delete(cast893);
      return;
    }
  struct std____new_allocator_int_* base894 = (struct std____new_allocator_int_*)((char *)t890 + 0);
  int* t895 = __p888;
  unsigned long t896 = __n889;
  std____new_allocator_int___deallocate(base894, t895, t896);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v897, int* v898, unsigned long v899) {
bb900:
  struct std__allocator_int_* __a901;
  int* __p902;
  unsigned long __n903;
  __a901 = v897;
  __p902 = v898;
  __n903 = v899;
  struct std__allocator_int_* t904 = __a901;
  int* t905 = __p902;
  unsigned long t906 = __n903;
  std__allocator_int___deallocate(t904, t905, t906);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v907, int* v908, unsigned long v909) {
bb910:
  struct std___Vector_base_int__std__allocator_int__* this911;
  int* __p912;
  unsigned long __n913;
  this911 = v907;
  __p912 = v908;
  __n913 = v909;
  struct std___Vector_base_int__std__allocator_int__* t914 = this911;
    int* t915 = __p912;
    _Bool cast916 = (_Bool)t915;
    if (cast916) {
      struct std__allocator_int_* base917 = (struct std__allocator_int_*)((char *)&(t914->_M_impl) + 0);
      int* t918 = __p912;
      unsigned long t919 = __n913;
      std__allocator_traits_std__allocator_int_____deallocate(base917, t918, t919);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v920) {
bb921:
  struct std___Vector_base_int__std__allocator_int__* this922;
  this922 = v920;
  struct std___Vector_base_int__std__allocator_int__* t923 = this922;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base924 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t923->_M_impl) + 0);
    int* t925 = base924->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base926 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t923->_M_impl) + 0);
    int* t927 = base926->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base928 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t923->_M_impl) + 0);
    int* t929 = base928->_M_start;
    long diff930 = t927 - t929;
    unsigned long cast931 = (unsigned long)diff930;
    std___Vector_base_int__std__allocator_int______M_deallocate(t923, t925, cast931);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t923->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v932, struct std____new_allocator_int_* v933) {
bb934:
  struct std____new_allocator_int_* this935;
  struct std____new_allocator_int_* unnamed936;
  this935 = v932;
  unnamed936 = v933;
  struct std____new_allocator_int_* t937 = this935;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v938) {
bb939:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this940;
  this940 = v938;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t941 = this940;
  int* c942 = ((void*)0);
  t941->_M_start = c942;
  int* c943 = ((void*)0);
  t941->_M_finish = c943;
  int* c944 = ((void*)0);
  t941->_M_end_of_storage = c944;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v945) {
bb946:
  int* __location947;
  __location947 = v945;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v948, int* v949) {
bb950:
  int* __first951;
  int* __last952;
  __first951 = v948;
  __last952 = v949;
      _Bool r953 = std____is_constant_evaluated();
      if (r953) {
          while (1) {
            int* t955 = __first951;
            int* t956 = __last952;
            _Bool c957 = ((t955 != t956)) ? 1 : 0;
            if (!c957) break;
            int* t958 = __first951;
            void_std__destroy_at_int_(t958);
          for_step954: ;
            int* t959 = __first951;
            int c960 = 1;
            int* ptr961 = &(t959)[c960];
            __first951 = ptr961;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v962, int* v963, struct std__allocator_int_* v964) {
bb965:
  int* __first966;
  int* __last967;
  struct std__allocator_int_* unnamed968;
  __first966 = v962;
  __last967 = v963;
  unnamed968 = v964;
  int* t969 = __first966;
  int* t970 = __last967;
  void_std___Destroy_int__(t969, t970);
  return;
}

