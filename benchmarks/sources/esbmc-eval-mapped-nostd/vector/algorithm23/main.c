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
char _str[17] = "myvector[3] == 0";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm23/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[17] = "myvector[3] == 5";
char _str_3[17] = "myvector[3] != 8";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[19] = "myvector contains:";
char _str_5[2] = " ";
char _str_6[49] = "cannot create std::vector larger than max_size()";
char _str_7[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_8[19] = "__n < this->size()";
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int p1);
void void_fill_esbmc___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
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
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
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

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v23) {
bb24:
  struct std__vector_int__std__allocator_int__* this25;
  unsigned long __retval26;
  long __dif27;
  this25 = v23;
  struct std__vector_int__std__allocator_int__* t28 = this25;
  struct std___Vector_base_int__std__allocator_int__* base29 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t28 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base30 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base29->_M_impl) + 0);
  int* t31 = base30->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base32 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t28 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base33 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base32->_M_impl) + 0);
  int* t34 = base33->_M_start;
  long diff35 = t31 - t34;
  __dif27 = diff35;
    long t36 = __dif27;
    long c37 = 0;
    _Bool c38 = ((t36 < c37)) ? 1 : 0;
    if (c38) {
      __builtin_unreachable();
    }
  long t39 = __dif27;
  unsigned long cast40 = (unsigned long)t39;
  __retval26 = cast40;
  unsigned long t41 = __retval26;
  return t41;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v42, unsigned long v43) {
bb44:
  struct std__vector_int__std__allocator_int__* this45;
  unsigned long __n46;
  int* __retval47;
  this45 = v42;
  __n46 = v43;
  struct std__vector_int__std__allocator_int__* t48 = this45;
    do {
          unsigned long t49 = __n46;
          unsigned long r50 = std__vector_int__std__allocator_int_____size___const(t48);
          _Bool c51 = ((t49 < r50)) ? 1 : 0;
          _Bool u52 = !c51;
          if (u52) {
            char* cast53 = (char*)&(_str_7);
            int c54 = 1263;
            char* cast55 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast56 = (char*)&(_str_8);
            std____glibcxx_assert_fail(cast53, c54, cast55, cast56);
          }
      _Bool c57 = 0;
      if (!c57) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base58 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t48 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base59 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base58->_M_impl) + 0);
  int* t60 = base59->_M_start;
  unsigned long t61 = __n46;
  int* ptr62 = &(t60)[t61];
  __retval47 = ptr62;
  int* t63 = __retval47;
  return t63;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v64, int v65) {
bb66:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this67;
  int unnamed68;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval69;
  int* ref_tmp070;
  this67 = v64;
  unnamed68 = v65;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t71 = this67;
  int* t72 = t71->_M_current;
  int c73 = 1;
  int* ptr74 = &(t72)[c73];
  t71->_M_current = ptr74;
  ref_tmp070 = t72;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval69, &ref_tmp070);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t75 = __retval69;
  return t75;
}

// function: _Z10fill_esbmcIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEvT_S7_RKT0_
void void_fill_esbmc___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v76, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v77, int* v78) {
bb79:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ first80;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ last81;
  int* val82;
  first80 = v76;
  last81 = v77;
  val82 = v78;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp083;
    while (1) {
      _Bool r84 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&first80, &last81);
      _Bool u85 = !r84;
      if (!u85) break;
      int* t86 = val82;
      int t87 = *t86;
      int c88 = 0;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r89 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&first80, c88);
      ref_tmp083 = r89;
      int* r90 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp083);
      *r90 = t87;
    }
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v91, int** v92) {
bb93:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this94;
  int** __i95;
  this94 = v91;
  __i95 = v92;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t96 = this94;
  int** t97 = __i95;
  int* t98 = *t97;
  t96->_M_current = t98;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v99) {
bb100:
  struct std__vector_int__std__allocator_int__* this101;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval102;
  this101 = v99;
  struct std__vector_int__std__allocator_int__* t103 = this101;
  struct std___Vector_base_int__std__allocator_int__* base104 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t103 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base105 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base104->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval102, &base105->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t106 = __retval102;
  return t106;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v107, long v108) {
bb109:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this110;
  long __n111;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval112;
  int* ref_tmp0113;
  this110 = v107;
  __n111 = v108;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t114 = this110;
  int* t115 = t114->_M_current;
  long t116 = __n111;
  int* ptr117 = &(t115)[t116];
  ref_tmp0113 = ptr117;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval112, &ref_tmp0113);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t118 = __retval112;
  return t118;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v119) {
bb120:
  struct std__vector_int__std__allocator_int__* this121;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval122;
  this121 = v119;
  struct std__vector_int__std__allocator_int__* t123 = this121;
  struct std___Vector_base_int__std__allocator_int__* base124 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t123 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base125 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base124->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval122, &base125->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t126 = __retval122;
  return t126;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmiEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v127, long v128) {
bb129:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this130;
  long __n131;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval132;
  int* ref_tmp0133;
  this130 = v127;
  __n131 = v128;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t134 = this130;
  int* t135 = t134->_M_current;
  long t136 = __n131;
  long u137 = -t136;
  int* ptr138 = &(t135)[u137];
  ref_tmp0133 = ptr138;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval132, &ref_tmp0133);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t139 = __retval132;
  return t139;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v140, int v141) {
bb142:
  int __a143;
  int __b144;
  int __retval145;
  __a143 = v140;
  __b144 = v141;
  int t146 = __a143;
  int t147 = __b144;
  int b148 = t146 | t147;
  __retval145 = b148;
  int t149 = __retval145;
  return t149;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v150) {
bb151:
  struct std__basic_ios_char__std__char_traits_char__* this152;
  int __retval153;
  this152 = v150;
  struct std__basic_ios_char__std__char_traits_char__* t154 = this152;
  struct std__ios_base* base155 = (struct std__ios_base*)((char *)t154 + 0);
  int t156 = base155->_M_streambuf_state;
  __retval153 = t156;
  int t157 = __retval153;
  return t157;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v158, int v159) {
bb160:
  struct std__basic_ios_char__std__char_traits_char__* this161;
  int __state162;
  this161 = v158;
  __state162 = v159;
  struct std__basic_ios_char__std__char_traits_char__* t163 = this161;
  int r164 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t163);
  int t165 = __state162;
  int r166 = std__operator_(r164, t165);
  std__basic_ios_char__std__char_traits_char_____clear(t163, r166);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v167, char* v168) {
bb169:
  char* __c1170;
  char* __c2171;
  _Bool __retval172;
  __c1170 = v167;
  __c2171 = v168;
  char* t173 = __c1170;
  char t174 = *t173;
  int cast175 = (int)t174;
  char* t176 = __c2171;
  char t177 = *t176;
  int cast178 = (int)t177;
  _Bool c179 = ((cast175 == cast178)) ? 1 : 0;
  __retval172 = c179;
  _Bool t180 = __retval172;
  return t180;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v181) {
bb182:
  char* __p183;
  unsigned long __retval184;
  unsigned long __i185;
  __p183 = v181;
  unsigned long c186 = 0;
  __i185 = c186;
    char ref_tmp0187;
    while (1) {
      unsigned long t188 = __i185;
      char* t189 = __p183;
      char* ptr190 = &(t189)[t188];
      char c191 = 0;
      ref_tmp0187 = c191;
      _Bool r192 = __gnu_cxx__char_traits_char___eq(ptr190, &ref_tmp0187);
      _Bool u193 = !r192;
      if (!u193) break;
      unsigned long t194 = __i185;
      unsigned long u195 = t194 + 1;
      __i185 = u195;
    }
  unsigned long t196 = __i185;
  __retval184 = t196;
  unsigned long t197 = __retval184;
  return t197;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v198) {
bb199:
  char* __s200;
  unsigned long __retval201;
  __s200 = v198;
    _Bool r202 = std____is_constant_evaluated();
    if (r202) {
      char* t203 = __s200;
      unsigned long r204 = __gnu_cxx__char_traits_char___length(t203);
      __retval201 = r204;
      unsigned long t205 = __retval201;
      return t205;
    }
  char* t206 = __s200;
  unsigned long r207 = strlen(t206);
  __retval201 = r207;
  unsigned long t208 = __retval201;
  return t208;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v209, char* v210) {
bb211:
  struct std__basic_ostream_char__std__char_traits_char__* __out212;
  char* __s213;
  struct std__basic_ostream_char__std__char_traits_char__* __retval214;
  __out212 = v209;
  __s213 = v210;
    char* t215 = __s213;
    _Bool cast216 = (_Bool)t215;
    _Bool u217 = !cast216;
    if (u217) {
      struct std__basic_ostream_char__std__char_traits_char__* t218 = __out212;
      void** v219 = (void**)t218;
      void* v220 = *((void**)v219);
      unsigned char* cast221 = (unsigned char*)v220;
      long c222 = -24;
      unsigned char* ptr223 = &(cast221)[c222];
      long* cast224 = (long*)ptr223;
      long t225 = *cast224;
      unsigned char* cast226 = (unsigned char*)t218;
      unsigned char* ptr227 = &(cast226)[t225];
      struct std__basic_ostream_char__std__char_traits_char__* cast228 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr227;
      struct std__basic_ios_char__std__char_traits_char__* cast229 = (struct std__basic_ios_char__std__char_traits_char__*)cast228;
      int t230 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast229, t230);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t231 = __out212;
      char* t232 = __s213;
      char* t233 = __s213;
      unsigned long r234 = std__char_traits_char___length(t233);
      long cast235 = (long)r234;
      struct std__basic_ostream_char__std__char_traits_char__* r236 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t231, t232, cast235);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t237 = __out212;
  __retval214 = t237;
  struct std__basic_ostream_char__std__char_traits_char__* t238 = __retval214;
  return t238;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v239) {
bb240:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this241;
  int** __retval242;
  this241 = v239;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t243 = this241;
  __retval242 = &t243->_M_current;
  int** t244 = __retval242;
  return t244;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v245, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v246) {
bb247:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs248;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs249;
  _Bool __retval250;
  __lhs248 = v245;
  __rhs249 = v246;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t251 = __lhs248;
  int** r252 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t251);
  int* t253 = *r252;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t254 = __rhs249;
  int** r255 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t254);
  int* t256 = *r255;
  _Bool c257 = ((t253 == t256)) ? 1 : 0;
  __retval250 = c257;
  _Bool t258 = __retval250;
  return t258;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v259) {
bb260:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this261;
  int* __retval262;
  this261 = v259;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t263 = this261;
  int* t264 = t263->_M_current;
  __retval262 = t264;
  int* t265 = __retval262;
  return t265;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v266) {
bb267:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this268;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval269;
  this268 = v266;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t270 = this268;
  int* t271 = t270->_M_current;
  int c272 = 1;
  int* ptr273 = &(t271)[c272];
  t270->_M_current = ptr273;
  __retval269 = t270;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t274 = __retval269;
  return t274;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v275, void* v276) {
bb277:
  struct std__basic_ostream_char__std__char_traits_char__* this278;
  void* __pf279;
  struct std__basic_ostream_char__std__char_traits_char__* __retval280;
  this278 = v275;
  __pf279 = v276;
  struct std__basic_ostream_char__std__char_traits_char__* t281 = this278;
  void* t282 = __pf279;
  struct std__basic_ostream_char__std__char_traits_char__* r283 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t282)(t281);
  __retval280 = r283;
  struct std__basic_ostream_char__std__char_traits_char__* t284 = __retval280;
  return t284;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v285) {
bb286:
  struct std__basic_ostream_char__std__char_traits_char__* __os287;
  struct std__basic_ostream_char__std__char_traits_char__* __retval288;
  __os287 = v285;
  struct std__basic_ostream_char__std__char_traits_char__* t289 = __os287;
  struct std__basic_ostream_char__std__char_traits_char__* r290 = std__ostream__flush(t289);
  __retval288 = r290;
  struct std__basic_ostream_char__std__char_traits_char__* t291 = __retval288;
  return t291;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v292) {
bb293:
  struct std__ctype_char_* __f294;
  struct std__ctype_char_* __retval295;
  __f294 = v292;
    struct std__ctype_char_* t296 = __f294;
    _Bool cast297 = (_Bool)t296;
    _Bool u298 = !cast297;
    if (u298) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t299 = __f294;
  __retval295 = t299;
  struct std__ctype_char_* t300 = __retval295;
  return t300;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v301, char v302) {
bb303:
  struct std__ctype_char_* this304;
  char __c305;
  char __retval306;
  this304 = v301;
  __c305 = v302;
  struct std__ctype_char_* t307 = this304;
    char t308 = t307->_M_widen_ok;
    _Bool cast309 = (_Bool)t308;
    if (cast309) {
      char t310 = __c305;
      unsigned char cast311 = (unsigned char)t310;
      unsigned long cast312 = (unsigned long)cast311;
      char t313 = t307->_M_widen[cast312];
      __retval306 = t313;
      char t314 = __retval306;
      return t314;
    }
  std__ctype_char____M_widen_init___const(t307);
  char t315 = __c305;
  void** v316 = (void**)t307;
  void* v317 = *((void**)v316);
  char vcall320 = (char)__VERIFIER_virtual_call_char_char(t307, 6, t315);
  __retval306 = vcall320;
  char t321 = __retval306;
  return t321;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v322, char v323) {
bb324:
  struct std__basic_ios_char__std__char_traits_char__* this325;
  char __c326;
  char __retval327;
  this325 = v322;
  __c326 = v323;
  struct std__basic_ios_char__std__char_traits_char__* t328 = this325;
  struct std__ctype_char_* t329 = t328->_M_ctype;
  struct std__ctype_char_* r330 = std__ctype_char__const__std____check_facet_std__ctype_char___(t329);
  char t331 = __c326;
  char r332 = std__ctype_char___widen_char__const(r330, t331);
  __retval327 = r332;
  char t333 = __retval327;
  return t333;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v334) {
bb335:
  struct std__basic_ostream_char__std__char_traits_char__* __os336;
  struct std__basic_ostream_char__std__char_traits_char__* __retval337;
  __os336 = v334;
  struct std__basic_ostream_char__std__char_traits_char__* t338 = __os336;
  struct std__basic_ostream_char__std__char_traits_char__* t339 = __os336;
  void** v340 = (void**)t339;
  void* v341 = *((void**)v340);
  unsigned char* cast342 = (unsigned char*)v341;
  long c343 = -24;
  unsigned char* ptr344 = &(cast342)[c343];
  long* cast345 = (long*)ptr344;
  long t346 = *cast345;
  unsigned char* cast347 = (unsigned char*)t339;
  unsigned char* ptr348 = &(cast347)[t346];
  struct std__basic_ostream_char__std__char_traits_char__* cast349 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr348;
  struct std__basic_ios_char__std__char_traits_char__* cast350 = (struct std__basic_ios_char__std__char_traits_char__*)cast349;
  char c351 = 10;
  char r352 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast350, c351);
  struct std__basic_ostream_char__std__char_traits_char__* r353 = std__ostream__put(t338, r352);
  struct std__basic_ostream_char__std__char_traits_char__* r354 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r353);
  __retval337 = r354;
  struct std__basic_ostream_char__std__char_traits_char__* t355 = __retval337;
  return t355;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v356) {
bb357:
  struct std__vector_int__std__allocator_int__* this358;
  this358 = v356;
  struct std__vector_int__std__allocator_int__* t359 = this358;
    struct std___Vector_base_int__std__allocator_int__* base360 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t359 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base361 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base360->_M_impl) + 0);
    int* t362 = base361->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base363 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t359 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base364 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base363->_M_impl) + 0);
    int* t365 = base364->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base366 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t359 + 0);
    struct std__allocator_int_* r367 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base366);
    void_std___Destroy_int___int_(t362, t365, r367);
  {
    struct std___Vector_base_int__std__allocator_int__* base368 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t359 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base368);
  }
  return;
}

// function: main
int main() {
bb369:
  int __retval370;
  struct std__vector_int__std__allocator_int__ myvector371;
  struct std__allocator_int_ ref_tmp0372;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0373;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1374;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1375;
  int ref_tmp2376;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2377;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3378;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3379;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp4380;
  int ref_tmp5381;
  int c382 = 0;
  __retval370 = c382;
  unsigned long c383 = 8;
  std__allocator_int___allocator_2(&ref_tmp0372);
    std__vector_int__std__allocator_int_____vector(&myvector371, c383, &ref_tmp0372);
  {
    std__allocator_int____allocator(&ref_tmp0372);
  }
    unsigned long c384 = 3;
    int* r385 = std__vector_int__std__allocator_int_____operator__(&myvector371, c384);
    int t386 = *r385;
    int c387 = 0;
    _Bool c388 = ((t386 == c387)) ? 1 : 0;
    if (c388) {
    } else {
      char* cast389 = (char*)&(_str);
      char* c390 = _str_1;
      unsigned int c391 = 22;
      char* cast392 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast389, c390, c391, cast392);
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r393 = std__vector_int__std__allocator_int_____begin(&myvector371);
    agg_tmp0373 = r393;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r394 = std__vector_int__std__allocator_int_____begin(&myvector371);
    ref_tmp1375 = r394;
    long c395 = 4;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r396 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&ref_tmp1375, c395);
    agg_tmp1374 = r396;
    int c397 = 5;
    ref_tmp2376 = c397;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t398 = agg_tmp0373;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t399 = agg_tmp1374;
    void_fill_esbmc___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t398, t399, &ref_tmp2376);
    unsigned long c400 = 3;
    int* r401 = std__vector_int__std__allocator_int_____operator__(&myvector371, c400);
    int t402 = *r401;
    int c403 = 5;
    _Bool c404 = ((t402 == c403)) ? 1 : 0;
    if (c404) {
    } else {
      char* cast405 = (char*)&(_str_2);
      char* c406 = _str_1;
      unsigned int c407 = 24;
      char* cast408 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast405, c406, c407, cast408);
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r409 = std__vector_int__std__allocator_int_____begin(&myvector371);
    ref_tmp3378 = r409;
    long c410 = 3;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r411 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&ref_tmp3378, c410);
    agg_tmp2377 = r411;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r412 = std__vector_int__std__allocator_int_____end(&myvector371);
    ref_tmp4380 = r412;
    long c413 = 2;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r414 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp4380, c413);
    agg_tmp3379 = r414;
    int c415 = 8;
    ref_tmp5381 = c415;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t416 = agg_tmp2377;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t417 = agg_tmp3379;
    void_fill_esbmc___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t416, t417, &ref_tmp5381);
    unsigned long c418 = 3;
    int* r419 = std__vector_int__std__allocator_int_____operator__(&myvector371, c418);
    int t420 = *r419;
    int c421 = 8;
    _Bool c422 = ((t420 != c421)) ? 1 : 0;
    if (c422) {
    } else {
      char* cast423 = (char*)&(_str_3);
      char* c424 = _str_1;
      unsigned int c425 = 26;
      char* cast426 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast423, c424, c425, cast426);
    }
    char* cast427 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r428 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast427);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it429;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp6430;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r431 = std__vector_int__std__allocator_int_____begin(&myvector371);
      it429 = r431;
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r433 = std__vector_int__std__allocator_int_____end(&myvector371);
        ref_tmp6430 = r433;
        _Bool r434 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it429, &ref_tmp6430);
        _Bool u435 = !r434;
        if (!u435) break;
        char* cast436 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* r437 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast436);
        int* r438 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it429);
        int t439 = *r438;
        struct std__basic_ostream_char__std__char_traits_char__* r440 = std__ostream__operator__(r437, t439);
      for_step432: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r441 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&it429);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r442 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c443 = 0;
    __retval370 = c443;
    int t444 = __retval370;
    int ret_val445 = t444;
    {
      std__vector_int__std__allocator_int______vector(&myvector371);
    }
    return ret_val445;
  int t446 = __retval370;
  return t446;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v447) {
bb448:
  struct std____new_allocator_int_* this449;
  this449 = v447;
  struct std____new_allocator_int_* t450 = this449;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v451, unsigned long* v452) {
bb453:
  unsigned long* __a454;
  unsigned long* __b455;
  unsigned long* __retval456;
  __a454 = v451;
  __b455 = v452;
    unsigned long* t457 = __b455;
    unsigned long t458 = *t457;
    unsigned long* t459 = __a454;
    unsigned long t460 = *t459;
    _Bool c461 = ((t458 < t460)) ? 1 : 0;
    if (c461) {
      unsigned long* t462 = __b455;
      __retval456 = t462;
      unsigned long* t463 = __retval456;
      return t463;
    }
  unsigned long* t464 = __a454;
  __retval456 = t464;
  unsigned long* t465 = __retval456;
  return t465;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v466) {
bb467:
  struct std__allocator_int_* __a468;
  unsigned long __retval469;
  unsigned long __diffmax470;
  unsigned long __allocmax471;
  __a468 = v466;
  unsigned long c472 = 2305843009213693951;
  __diffmax470 = c472;
  unsigned long c473 = 4611686018427387903;
  __allocmax471 = c473;
  unsigned long* r474 = unsigned_long_const__std__min_unsigned_long_(&__diffmax470, &__allocmax471);
  unsigned long t475 = *r474;
  __retval469 = t475;
  unsigned long t476 = __retval469;
  return t476;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v477, struct std__allocator_int_* v478) {
bb479:
  struct std__allocator_int_* this480;
  struct std__allocator_int_* __a481;
  this480 = v477;
  __a481 = v478;
  struct std__allocator_int_* t482 = this480;
  struct std____new_allocator_int_* base483 = (struct std____new_allocator_int_*)((char *)t482 + 0);
  struct std__allocator_int_* t484 = __a481;
  struct std____new_allocator_int_* base485 = (struct std____new_allocator_int_*)((char *)t484 + 0);
  std____new_allocator_int_____new_allocator(base483, base485);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v486, struct std__allocator_int_* v487) {
bb488:
  unsigned long __n489;
  struct std__allocator_int_* __a490;
  unsigned long __retval491;
  __n489 = v486;
  __a490 = v487;
    struct std__allocator_int_ ref_tmp0492;
    _Bool tmp_exprcleanup493;
    unsigned long t494 = __n489;
    struct std__allocator_int_* t495 = __a490;
    std__allocator_int___allocator(&ref_tmp0492, t495);
      unsigned long r496 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0492);
      _Bool c497 = ((t494 > r496)) ? 1 : 0;
      tmp_exprcleanup493 = c497;
    {
      std__allocator_int____allocator(&ref_tmp0492);
    }
    _Bool t498 = tmp_exprcleanup493;
    if (t498) {
      char* cast499 = (char*)&(_str_6);
      std____throw_length_error(cast499);
    }
  unsigned long t500 = __n489;
  __retval491 = t500;
  unsigned long t501 = __retval491;
  return t501;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v502, struct std__allocator_int_* v503) {
bb504:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this505;
  struct std__allocator_int_* __a506;
  this505 = v502;
  __a506 = v503;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t507 = this505;
  struct std__allocator_int_* base508 = (struct std__allocator_int_*)((char *)t507 + 0);
  struct std__allocator_int_* t509 = __a506;
  std__allocator_int___allocator(base508, t509);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base510 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t507 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base510);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb511:
  _Bool __retval512;
    _Bool c513 = 0;
    __retval512 = c513;
    _Bool t514 = __retval512;
    return t514;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v515) {
bb516:
  struct std____new_allocator_int_* this517;
  unsigned long __retval518;
  this517 = v515;
  struct std____new_allocator_int_* t519 = this517;
  unsigned long c520 = 9223372036854775807;
  unsigned long c521 = 4;
  unsigned long b522 = c520 / c521;
  __retval518 = b522;
  unsigned long t523 = __retval518;
  return t523;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v524, unsigned long v525, void* v526) {
bb527:
  struct std____new_allocator_int_* this528;
  unsigned long __n529;
  void* unnamed530;
  int* __retval531;
  this528 = v524;
  __n529 = v525;
  unnamed530 = v526;
  struct std____new_allocator_int_* t532 = this528;
    unsigned long t533 = __n529;
    unsigned long r534 = std____new_allocator_int____M_max_size___const(t532);
    _Bool c535 = ((t533 > r534)) ? 1 : 0;
    if (c535) {
        unsigned long t536 = __n529;
        unsigned long c537 = -1;
        unsigned long c538 = 4;
        unsigned long b539 = c537 / c538;
        _Bool c540 = ((t536 > b539)) ? 1 : 0;
        if (c540) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c541 = 4;
    unsigned long c542 = 16;
    _Bool c543 = ((c541 > c542)) ? 1 : 0;
    if (c543) {
      unsigned long __al544;
      unsigned long c545 = 4;
      __al544 = c545;
      unsigned long t546 = __n529;
      unsigned long c547 = 4;
      unsigned long b548 = t546 * c547;
      unsigned long t549 = __al544;
      void* r550 = operator_new_2(b548, t549);
      int* cast551 = (int*)r550;
      __retval531 = cast551;
      int* t552 = __retval531;
      return t552;
    }
  unsigned long t553 = __n529;
  unsigned long c554 = 4;
  unsigned long b555 = t553 * c554;
  void* r556 = operator_new(b555);
  int* cast557 = (int*)r556;
  __retval531 = cast557;
  int* t558 = __retval531;
  return t558;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v559, unsigned long v560) {
bb561:
  struct std__allocator_int_* this562;
  unsigned long __n563;
  int* __retval564;
  this562 = v559;
  __n563 = v560;
  struct std__allocator_int_* t565 = this562;
    _Bool r566 = std____is_constant_evaluated();
    if (r566) {
        unsigned long t567 = __n563;
        unsigned long c568 = 4;
        unsigned long ovr569;
        _Bool ovf570 = __builtin_mul_overflow(t567, c568, &ovr569);
        __n563 = ovr569;
        if (ovf570) {
          std____throw_bad_array_new_length();
        }
      unsigned long t571 = __n563;
      void* r572 = operator_new(t571);
      int* cast573 = (int*)r572;
      __retval564 = cast573;
      int* t574 = __retval564;
      return t574;
    }
  struct std____new_allocator_int_* base575 = (struct std____new_allocator_int_*)((char *)t565 + 0);
  unsigned long t576 = __n563;
  void* c577 = ((void*)0);
  int* r578 = std____new_allocator_int___allocate(base575, t576, c577);
  __retval564 = r578;
  int* t579 = __retval564;
  return t579;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v580, unsigned long v581) {
bb582:
  struct std__allocator_int_* __a583;
  unsigned long __n584;
  int* __retval585;
  __a583 = v580;
  __n584 = v581;
  struct std__allocator_int_* t586 = __a583;
  unsigned long t587 = __n584;
  int* r588 = std__allocator_int___allocate(t586, t587);
  __retval585 = r588;
  int* t589 = __retval585;
  return t589;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v590, unsigned long v591) {
bb592:
  struct std___Vector_base_int__std__allocator_int__* this593;
  unsigned long __n594;
  int* __retval595;
  this593 = v590;
  __n594 = v591;
  struct std___Vector_base_int__std__allocator_int__* t596 = this593;
  unsigned long t597 = __n594;
  unsigned long c598 = 0;
  _Bool c599 = ((t597 != c598)) ? 1 : 0;
  int* ternary600;
  if (c599) {
    struct std__allocator_int_* base601 = (struct std__allocator_int_*)((char *)&(t596->_M_impl) + 0);
    unsigned long t602 = __n594;
    int* r603 = std__allocator_traits_std__allocator_int_____allocate(base601, t602);
    ternary600 = (int*)r603;
  } else {
    int* c604 = ((void*)0);
    ternary600 = (int*)c604;
  }
  __retval595 = ternary600;
  int* t605 = __retval595;
  return t605;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v606, unsigned long v607) {
bb608:
  struct std___Vector_base_int__std__allocator_int__* this609;
  unsigned long __n610;
  this609 = v606;
  __n610 = v607;
  struct std___Vector_base_int__std__allocator_int__* t611 = this609;
  unsigned long t612 = __n610;
  int* r613 = std___Vector_base_int__std__allocator_int______M_allocate(t611, t612);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base614 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t611->_M_impl) + 0);
  base614->_M_start = r613;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base615 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t611->_M_impl) + 0);
  int* t616 = base615->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base617 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t611->_M_impl) + 0);
  base617->_M_finish = t616;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base618 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t611->_M_impl) + 0);
  int* t619 = base618->_M_start;
  unsigned long t620 = __n610;
  int* ptr621 = &(t619)[t620];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base622 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t611->_M_impl) + 0);
  base622->_M_end_of_storage = ptr621;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v623) {
bb624:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this625;
  this625 = v623;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t626 = this625;
  {
    struct std__allocator_int_* base627 = (struct std__allocator_int_*)((char *)t626 + 0);
    std__allocator_int____allocator(base627);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v628, unsigned long v629, struct std__allocator_int_* v630) {
bb631:
  struct std___Vector_base_int__std__allocator_int__* this632;
  unsigned long __n633;
  struct std__allocator_int_* __a634;
  this632 = v628;
  __n633 = v629;
  __a634 = v630;
  struct std___Vector_base_int__std__allocator_int__* t635 = this632;
  struct std__allocator_int_* t636 = __a634;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t635->_M_impl, t636);
    unsigned long t637 = __n633;
    std___Vector_base_int__std__allocator_int______M_create_storage(t635, t637);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb638:
  _Bool __retval639;
    _Bool c640 = 0;
    __retval639 = c640;
    _Bool t641 = __retval639;
    return t641;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v642, int** v643) {
bb644:
  struct std___UninitDestroyGuard_int____void_* this645;
  int** __first646;
  this645 = v642;
  __first646 = v643;
  struct std___UninitDestroyGuard_int____void_* t647 = this645;
  int** t648 = __first646;
  int* t649 = *t648;
  t647->_M_first = t649;
  int** t650 = __first646;
  t647->_M_cur = t650;
  return;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v651) {
bb652:
  int* __location653;
  int* __retval654;
  void* __loc655;
  __location653 = v651;
  int* t656 = __location653;
  void* cast657 = (void*)t656;
  __loc655 = cast657;
    void* t658 = __loc655;
    int* cast659 = (int*)t658;
    int c660 = 0;
    *cast659 = c660;
    __retval654 = cast659;
    int* t661 = __retval654;
    return t661;
  abort();
}

// function: _ZSt10_ConstructIiJEEvPT_DpOT0_
void void_std___Construct_int_(int* v662) {
bb663:
  int* __p664;
  __p664 = v662;
    _Bool r665 = std____is_constant_evaluated();
    if (r665) {
      int* t666 = __p664;
      int* r667 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t666);
      return;
    }
  int* t668 = __p664;
  void* cast669 = (void*)t668;
  int* cast670 = (int*)cast669;
  int c671 = 0;
  *cast670 = c671;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v672) {
bb673:
  struct std___UninitDestroyGuard_int____void_* this674;
  this674 = v672;
  struct std___UninitDestroyGuard_int____void_* t675 = this674;
  int** c676 = ((void*)0);
  t675->_M_cur = c676;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v677) {
bb678:
  struct std___UninitDestroyGuard_int____void_* this679;
  this679 = v677;
  struct std___UninitDestroyGuard_int____void_* t680 = this679;
    int** t681 = t680->_M_cur;
    int** c682 = ((void*)0);
    _Bool c683 = ((t681 != c682)) ? 1 : 0;
    if (c683) {
      int* t684 = t680->_M_first;
      int** t685 = t680->_M_cur;
      int* t686 = *t685;
      void_std___Destroy_int__(t684, t686);
    }
  return;
}

// function: _ZNSt27__uninitialized_default_n_1ILb0EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* v687, unsigned long v688) {
bb689:
  int* __first690;
  unsigned long __n691;
  int* __retval692;
  struct std___UninitDestroyGuard_int____void_ __guard693;
  __first690 = v687;
  __n691 = v688;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard693, &__first690);
      while (1) {
        unsigned long t695 = __n691;
        unsigned long c696 = 0;
        _Bool c697 = ((t695 > c696)) ? 1 : 0;
        if (!c697) break;
        int* t698 = __first690;
        void_std___Construct_int_(t698);
      for_step694: ;
        unsigned long t699 = __n691;
        unsigned long u700 = t699 - 1;
        __n691 = u700;
        int* t701 = __first690;
        int c702 = 1;
        int* ptr703 = &(t701)[c702];
        __first690 = ptr703;
      }
    std___UninitDestroyGuard_int___void___release(&__guard693);
    int* t704 = __first690;
    __retval692 = t704;
    int* t705 = __retval692;
    int* ret_val706 = t705;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard693);
    }
    return ret_val706;
  abort();
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v707, int* v708, int* v709) {
bb710:
  int* __first711;
  int* __last712;
  int* __value713;
  _Bool __load_outside_loop714;
  int __val715;
  __first711 = v707;
  __last712 = v708;
  __value713 = v709;
  _Bool c716 = 1;
  __load_outside_loop714 = c716;
  int* t717 = __value713;
  int t718 = *t717;
  __val715 = t718;
    while (1) {
      int* t720 = __first711;
      int* t721 = __last712;
      _Bool c722 = ((t720 != t721)) ? 1 : 0;
      if (!c722) break;
      int t723 = __val715;
      int* t724 = __first711;
      *t724 = t723;
    for_step719: ;
      int* t725 = __first711;
      int c726 = 1;
      int* ptr727 = &(t725)[c726];
      __first711 = ptr727;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v728, int* v729, int* v730) {
bb731:
  int* __first732;
  int* __last733;
  int* __value734;
  __first732 = v728;
  __last733 = v729;
  __value734 = v730;
  int* t735 = __first732;
  int* t736 = __last733;
  int* t737 = __value734;
  void_std____fill_a1_int___int_(t735, t736, t737);
  return;
}

// function: _ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag
int* int__std____fill_n_a_int___unsigned_long__int_(int* v738, unsigned long v739, int* v740, struct std__random_access_iterator_tag v741) {
bb742:
  int* __first743;
  unsigned long __n744;
  int* __value745;
  struct std__random_access_iterator_tag unnamed746;
  int* __retval747;
  __first743 = v738;
  __n744 = v739;
  __value745 = v740;
  unnamed746 = v741;
    unsigned long t748 = __n744;
    unsigned long c749 = 0;
    _Bool c750 = ((t748 <= c749)) ? 1 : 0;
    if (c750) {
      int* t751 = __first743;
      __retval747 = t751;
      int* t752 = __retval747;
      return t752;
    }
  int* t753 = __first743;
  int* t754 = __first743;
  unsigned long t755 = __n744;
  int* ptr756 = &(t754)[t755];
  int* t757 = __value745;
  void_std____fill_a_int___int_(t753, ptr756, t757);
  int* t758 = __first743;
  unsigned long t759 = __n744;
  int* ptr760 = &(t758)[t759];
  __retval747 = ptr760;
  int* t761 = __retval747;
  return t761;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer(unsigned long v762) {
bb763:
  unsigned long __n764;
  unsigned long __retval765;
  __n764 = v762;
  unsigned long t766 = __n764;
  __retval765 = t766;
  unsigned long t767 = __retval765;
  return t767;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v768) {
bb769:
  int** unnamed770;
  struct std__random_access_iterator_tag __retval771;
  unnamed770 = v768;
  struct std__random_access_iterator_tag t772 = __retval771;
  return t772;
}

// function: _ZSt6fill_nIPimiET_S1_T0_RKT1_
int* int__std__fill_n_int___unsigned_long__int_(int* v773, unsigned long v774, int* v775) {
bb776:
  int* __first777;
  unsigned long __n778;
  int* __value779;
  int* __retval780;
  struct std__random_access_iterator_tag agg_tmp0781;
  __first777 = v773;
  __n778 = v774;
  __value779 = v775;
  int* t782 = __first777;
  unsigned long t783 = __n778;
  unsigned long r784 = std____size_to_integer(t783);
  int* t785 = __value779;
  struct std__random_access_iterator_tag r786 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first777);
  agg_tmp0781 = r786;
  struct std__random_access_iterator_tag t787 = agg_tmp0781;
  int* r788 = int__std____fill_n_a_int___unsigned_long__int_(t782, r784, t785, t787);
  __retval780 = r788;
  int* t789 = __retval780;
  return t789;
}

// function: _ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* v790, unsigned long v791) {
bb792:
  int* __first793;
  unsigned long __n794;
  int* __retval795;
  __first793 = v790;
  __n794 = v791;
    unsigned long t796 = __n794;
    unsigned long c797 = 0;
    _Bool c798 = ((t796 > c797)) ? 1 : 0;
    if (c798) {
      int* __val799;
      int* t800 = __first793;
      __val799 = t800;
      int* t801 = __val799;
      void_std___Construct_int_(t801);
      int* t802 = __first793;
      int c803 = 1;
      int* ptr804 = &(t802)[c803];
      __first793 = ptr804;
      int* t805 = __first793;
      unsigned long t806 = __n794;
      unsigned long c807 = 1;
      unsigned long b808 = t806 - c807;
      int* t809 = __val799;
      int* r810 = int__std__fill_n_int___unsigned_long__int_(t805, b808, t809);
      __first793 = r810;
    }
  int* t811 = __first793;
  __retval795 = t811;
  int* t812 = __retval795;
  return t812;
}

// function: _ZSt25__uninitialized_default_nIPimET_S1_T0_
int* int__std____uninitialized_default_n_int___unsigned_long_(int* v813, unsigned long v814) {
bb815:
  int* __first816;
  unsigned long __n817;
  int* __retval818;
  _Bool __can_fill819;
  __first816 = v813;
  __n817 = v814;
    _Bool r820 = std__is_constant_evaluated();
    if (r820) {
      int* t821 = __first816;
      unsigned long t822 = __n817;
      int* r823 = int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(t821, t822);
      __retval818 = r823;
      int* t824 = __retval818;
      return t824;
    }
  _Bool c825 = 1;
  __can_fill819 = c825;
  int* t826 = __first816;
  unsigned long t827 = __n817;
  int* r828 = int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(t826, t827);
  __retval818 = r828;
  int* t829 = __retval818;
  return t829;
}

// function: _ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* v830, unsigned long v831, struct std__allocator_int_* v832) {
bb833:
  int* __first834;
  unsigned long __n835;
  struct std__allocator_int_* unnamed836;
  int* __retval837;
  __first834 = v830;
  __n835 = v831;
  unnamed836 = v832;
  int* t838 = __first834;
  unsigned long t839 = __n835;
  int* r840 = int__std____uninitialized_default_n_int___unsigned_long_(t838, t839);
  __retval837 = r840;
  int* t841 = __retval837;
  return t841;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v842) {
bb843:
  struct std___Vector_base_int__std__allocator_int__* this844;
  struct std__allocator_int_* __retval845;
  this844 = v842;
  struct std___Vector_base_int__std__allocator_int__* t846 = this844;
  struct std__allocator_int_* base847 = (struct std__allocator_int_*)((char *)&(t846->_M_impl) + 0);
  __retval845 = base847;
  struct std__allocator_int_* t848 = __retval845;
  return t848;
}

// function: _ZNSt6vectorIiSaIiEE21_M_default_initializeEm
void std__vector_int__std__allocator_int______M_default_initialize(struct std__vector_int__std__allocator_int__* v849, unsigned long v850) {
bb851:
  struct std__vector_int__std__allocator_int__* this852;
  unsigned long __n853;
  this852 = v849;
  __n853 = v850;
  struct std__vector_int__std__allocator_int__* t854 = this852;
  struct std___Vector_base_int__std__allocator_int__* base855 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t854 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base856 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base855->_M_impl) + 0);
  int* t857 = base856->_M_start;
  unsigned long t858 = __n853;
  struct std___Vector_base_int__std__allocator_int__* base859 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t854 + 0);
  struct std__allocator_int_* r860 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base859);
  int* r861 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(t857, t858, r860);
  struct std___Vector_base_int__std__allocator_int__* base862 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t854 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base863 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base862->_M_impl) + 0);
  base863->_M_finish = r861;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v864, int* v865, unsigned long v866) {
bb867:
  struct std____new_allocator_int_* this868;
  int* __p869;
  unsigned long __n870;
  this868 = v864;
  __p869 = v865;
  __n870 = v866;
  struct std____new_allocator_int_* t871 = this868;
    unsigned long c872 = 4;
    unsigned long c873 = 16;
    _Bool c874 = ((c872 > c873)) ? 1 : 0;
    if (c874) {
      int* t875 = __p869;
      void* cast876 = (void*)t875;
      unsigned long t877 = __n870;
      unsigned long c878 = 4;
      unsigned long b879 = t877 * c878;
      unsigned long c880 = 4;
      operator_delete_3(cast876, b879, c880);
      return;
    }
  int* t881 = __p869;
  void* cast882 = (void*)t881;
  unsigned long t883 = __n870;
  unsigned long c884 = 4;
  unsigned long b885 = t883 * c884;
  operator_delete_2(cast882, b885);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v886, int* v887, unsigned long v888) {
bb889:
  struct std__allocator_int_* this890;
  int* __p891;
  unsigned long __n892;
  this890 = v886;
  __p891 = v887;
  __n892 = v888;
  struct std__allocator_int_* t893 = this890;
    _Bool r894 = std____is_constant_evaluated();
    if (r894) {
      int* t895 = __p891;
      void* cast896 = (void*)t895;
      operator_delete(cast896);
      return;
    }
  struct std____new_allocator_int_* base897 = (struct std____new_allocator_int_*)((char *)t893 + 0);
  int* t898 = __p891;
  unsigned long t899 = __n892;
  std____new_allocator_int___deallocate(base897, t898, t899);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v900, int* v901, unsigned long v902) {
bb903:
  struct std__allocator_int_* __a904;
  int* __p905;
  unsigned long __n906;
  __a904 = v900;
  __p905 = v901;
  __n906 = v902;
  struct std__allocator_int_* t907 = __a904;
  int* t908 = __p905;
  unsigned long t909 = __n906;
  std__allocator_int___deallocate(t907, t908, t909);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v910, int* v911, unsigned long v912) {
bb913:
  struct std___Vector_base_int__std__allocator_int__* this914;
  int* __p915;
  unsigned long __n916;
  this914 = v910;
  __p915 = v911;
  __n916 = v912;
  struct std___Vector_base_int__std__allocator_int__* t917 = this914;
    int* t918 = __p915;
    _Bool cast919 = (_Bool)t918;
    if (cast919) {
      struct std__allocator_int_* base920 = (struct std__allocator_int_*)((char *)&(t917->_M_impl) + 0);
      int* t921 = __p915;
      unsigned long t922 = __n916;
      std__allocator_traits_std__allocator_int_____deallocate(base920, t921, t922);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v923) {
bb924:
  struct std___Vector_base_int__std__allocator_int__* this925;
  this925 = v923;
  struct std___Vector_base_int__std__allocator_int__* t926 = this925;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base927 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t926->_M_impl) + 0);
    int* t928 = base927->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base929 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t926->_M_impl) + 0);
    int* t930 = base929->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base931 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t926->_M_impl) + 0);
    int* t932 = base931->_M_start;
    long diff933 = t930 - t932;
    unsigned long cast934 = (unsigned long)diff933;
    std___Vector_base_int__std__allocator_int______M_deallocate(t926, t928, cast934);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t926->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v935, struct std____new_allocator_int_* v936) {
bb937:
  struct std____new_allocator_int_* this938;
  struct std____new_allocator_int_* unnamed939;
  this938 = v935;
  unnamed939 = v936;
  struct std____new_allocator_int_* t940 = this938;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v941) {
bb942:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this943;
  this943 = v941;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t944 = this943;
  int* c945 = ((void*)0);
  t944->_M_start = c945;
  int* c946 = ((void*)0);
  t944->_M_finish = c946;
  int* c947 = ((void*)0);
  t944->_M_end_of_storage = c947;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v948) {
bb949:
  int* __location950;
  __location950 = v948;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v951, int* v952) {
bb953:
  int* __first954;
  int* __last955;
  __first954 = v951;
  __last955 = v952;
      _Bool r956 = std____is_constant_evaluated();
      if (r956) {
          while (1) {
            int* t958 = __first954;
            int* t959 = __last955;
            _Bool c960 = ((t958 != t959)) ? 1 : 0;
            if (!c960) break;
            int* t961 = __first954;
            void_std__destroy_at_int_(t961);
          for_step957: ;
            int* t962 = __first954;
            int c963 = 1;
            int* ptr964 = &(t962)[c963];
            __first954 = ptr964;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v965, int* v966, struct std__allocator_int_* v967) {
bb968:
  int* __first969;
  int* __last970;
  struct std__allocator_int_* unnamed971;
  __first969 = v965;
  __last970 = v966;
  unnamed971 = v967;
  int* t972 = __first969;
  int* t973 = __last970;
  void_std___Destroy_int__(t972, t973);
  return;
}

