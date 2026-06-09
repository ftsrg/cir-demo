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
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ { char* _M_current; };
struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___ { char* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_char____void_ { char* _M_first; char** _M_cur; };
struct std___Vector_base_char__std__allocator_char_____Vector_impl_data { char* _M_start; char* _M_finish; char* _M_end_of_storage; };
struct std____new_allocator_char_ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std__initializer_list_char_ { char* _M_array; unsigned long _M_len; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std___Vector_base_char__std__allocator_char_____Vector_impl { struct std___Vector_base_char__std__allocator_char_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_char__std__allocator_char__ { struct std___Vector_base_char__std__allocator_char_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_char__std__allocator_char__ { struct std___Vector_base_char__std__allocator_char__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[25] = "The first character is: ";
char _str_1[49] = "cannot create std::vector larger than max_size()";
char _str_2[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIcSaIcEE5frontEv[37] = "reference std::vector<char>::front()";
char _str_3[15] = "!this->empty()";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std__vector_char__std__allocator_char_____vector(struct std__vector_char__std__allocator_char__* p0, struct std__initializer_list_char_ p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
char** __gnu_cxx____normal_iterator_char_const___std__vector_char__std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___* p0);
_Bool _ZN9__gnu_cxxeqIPKcSt6vectorIcSaIcEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___* p1);
void __gnu_cxx____normal_iterator_char_const___std__vector_char__std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___* p0, char** p1);
struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___ std__vector_char__std__allocator_char_____begin___const(struct std__vector_char__std__allocator_char__* p0);
struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___ std__vector_char__std__allocator_char_____end___const(struct std__vector_char__std__allocator_char__* p0);
_Bool std__vector_char__std__allocator_char_____empty___const(struct std__vector_char__std__allocator_char__* p0);
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
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
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
void __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p0, char** p1);
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std__vector_char__std__allocator_char_____begin(struct std__vector_char__std__allocator_char__* p0);
char* __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator____const(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p0);
char* std__vector_char__std__allocator_char_____front(struct std__vector_char__std__allocator_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
void std__vector_char__std__allocator_char______vector(struct std__vector_char__std__allocator_char__* p0);
int main();
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
void std___Vector_base_char__std__allocator_char______Vector_impl___Vector_impl(struct std___Vector_base_char__std__allocator_char_____Vector_impl* p0, struct std__allocator_char_* p1);
void std___Vector_base_char__std__allocator_char______Vector_impl____Vector_impl(struct std___Vector_base_char__std__allocator_char_____Vector_impl* p0);
void std___Vector_base_char__std__allocator_char______Vector_base(struct std___Vector_base_char__std__allocator_char__* p0, struct std__allocator_char_* p1);
_Bool std____is_constant_evaluated();
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* p0, unsigned long p1, void* p2);
char* std__allocator_char___allocate(struct std__allocator_char_* p0, unsigned long p1);
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* p0, unsigned long p1);
char* std___Vector_base_char__std__allocator_char______M_allocate(struct std___Vector_base_char__std__allocator_char__* p0, unsigned long p1);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_char__std__allocator_char______S_max_size(struct std__allocator_char_* p0);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
extern void std____throw_length_error(char* p0);
unsigned long std__vector_char__std__allocator_char______S_check_init_len(unsigned long p0, struct std__allocator_char_* p1);
struct std__allocator_char_* std___Vector_base_char__std__allocator_char______M_get_Tp_allocator(struct std___Vector_base_char__std__allocator_char__* p0);
_Bool std__is_constant_evaluated();
void std___UninitDestroyGuard_char___void____UninitDestroyGuard(struct std___UninitDestroyGuard_char____void_* p0, char** p1);
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* p0, char* p1);
void void_std___Construct_char__char_const__(char* p0, char* p1);
void std___UninitDestroyGuard_char___void___release(struct std___UninitDestroyGuard_char____void_* p0);
void std___UninitDestroyGuard_char___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_char____void_* p0);
char* char__std____do_uninit_copy_char_const___char_const___char__(char* p0, char* p1, char* p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
char* char__std____niter_base_char__(char* p0);
char* char_const__std____niter_base_char_const__(char* p0);
char* char__std__uninitialized_copy_char_const___char__(char* p0, char* p1, char* p2);
char* char__std____uninitialized_copy_a_char_const___char_const___char___char_(char* p0, char* p1, char* p2, struct std__allocator_char_* p3);
void void_std__vector_char__std__allocator_char______M_range_initialize_n_char_const___char_const__(struct std__vector_char__std__allocator_char__* p0, char* p1, char* p2, unsigned long p3);
char* std__initializer_list_char___begin___const(struct std__initializer_list_char_* p0);
char* std__initializer_list_char___end___const(struct std__initializer_list_char_* p0);
unsigned long std__initializer_list_char___size___const(struct std__initializer_list_char_* p0);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_char___deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std___Vector_base_char__std__allocator_char______M_deallocate(struct std___Vector_base_char__std__allocator_char__* p0, char* p1, unsigned long p2);
void std___Vector_base_char__std__allocator_char_______Vector_base(struct std___Vector_base_char__std__allocator_char__* p0);
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
void std___Vector_base_char__std__allocator_char______Vector_impl_data___Vector_impl_data(struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* p0);
void void_std__destroy_at_char_(char* p0);
void void_std___Destroy_char__(char* p0, char* p1);
void void_std___Destroy_char___char_(char* p0, char* p1, struct std__allocator_char_* p2);

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v0) {
bb1:
  struct std__allocator_char_* this2;
  this2 = v0;
  struct std__allocator_char_* t3 = this2;
  struct std____new_allocator_char_* base4 = (struct std____new_allocator_char_*)((char *)t3 + 0);
  std____new_allocator_char_____new_allocator_2(base4);
  return;
}

// function: _ZNSt6vectorIcSaIcEEC2ESt16initializer_listIcERKS0_
void std__vector_char__std__allocator_char_____vector(struct std__vector_char__std__allocator_char__* v5, struct std__initializer_list_char_ v6, struct std__allocator_char_* v7) {
bb8:
  struct std__vector_char__std__allocator_char__* this9;
  struct std__initializer_list_char_ __l10;
  struct std__allocator_char_* __a11;
  this9 = v5;
  __l10 = v6;
  __a11 = v7;
  struct std__vector_char__std__allocator_char__* t12 = this9;
  struct std___Vector_base_char__std__allocator_char__* base13 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t12 + 0);
  struct std__allocator_char_* t14 = __a11;
  std___Vector_base_char__std__allocator_char______Vector_base(base13, t14);
    char* r15 = std__initializer_list_char___begin___const(&__l10);
    char* r16 = std__initializer_list_char___end___const(&__l10);
    unsigned long r17 = std__initializer_list_char___size___const(&__l10);
    void_std__vector_char__std__allocator_char______M_range_initialize_n_char_const___char_const__(t12, r15, r16, r17);
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v18) {
bb19:
  struct std__allocator_char_* this20;
  this20 = v18;
  struct std__allocator_char_* t21 = this20;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKcSt6vectorIcSaIcEEE4baseEv
char** __gnu_cxx____normal_iterator_char_const___std__vector_char__std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___* v22) {
bb23:
  struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___* this24;
  char** __retval25;
  this24 = v22;
  struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___* t26 = this24;
  __retval25 = &t26->_M_current;
  char** t27 = __retval25;
  return t27;
}

// function: _ZN9__gnu_cxxeqIPKcSt6vectorIcSaIcEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPKcSt6vectorIcSaIcEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___* v28, struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___* v29) {
bb30:
  struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___* __lhs31;
  struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___* __rhs32;
  _Bool __retval33;
  __lhs31 = v28;
  __rhs32 = v29;
  struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___* t34 = __lhs31;
  char** r35 = __gnu_cxx____normal_iterator_char_const___std__vector_char__std__allocator_char_______base___const(t34);
  char* t36 = *r35;
  struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___* t37 = __rhs32;
  char** r38 = __gnu_cxx____normal_iterator_char_const___std__vector_char__std__allocator_char_______base___const(t37);
  char* t39 = *r38;
  _Bool c40 = ((t36 == t39)) ? 1 : 0;
  __retval33 = c40;
  _Bool t41 = __retval33;
  return t41;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKcSt6vectorIcSaIcEEEC2ERKS2_
void __gnu_cxx____normal_iterator_char_const___std__vector_char__std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___* v42, char** v43) {
bb44:
  struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___* this45;
  char** __i46;
  this45 = v42;
  __i46 = v43;
  struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___* t47 = this45;
  char** t48 = __i46;
  char* t49 = *t48;
  t47->_M_current = t49;
  return;
}

// function: _ZNKSt6vectorIcSaIcEE5beginEv
struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___ std__vector_char__std__allocator_char_____begin___const(struct std__vector_char__std__allocator_char__* v50) {
bb51:
  struct std__vector_char__std__allocator_char__* this52;
  struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___ __retval53;
  this52 = v50;
  struct std__vector_char__std__allocator_char__* t54 = this52;
  struct std___Vector_base_char__std__allocator_char__* base55 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t54 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base56 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base55->_M_impl) + 0);
  __gnu_cxx____normal_iterator_char_const___std__vector_char__std__allocator_char_________normal_iterator(&__retval53, &base56->_M_start);
  struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___ t57 = __retval53;
  return t57;
}

// function: _ZNKSt6vectorIcSaIcEE3endEv
struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___ std__vector_char__std__allocator_char_____end___const(struct std__vector_char__std__allocator_char__* v58) {
bb59:
  struct std__vector_char__std__allocator_char__* this60;
  struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___ __retval61;
  this60 = v58;
  struct std__vector_char__std__allocator_char__* t62 = this60;
  struct std___Vector_base_char__std__allocator_char__* base63 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t62 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base64 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base63->_M_impl) + 0);
  __gnu_cxx____normal_iterator_char_const___std__vector_char__std__allocator_char_________normal_iterator(&__retval61, &base64->_M_finish);
  struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___ t65 = __retval61;
  return t65;
}

// function: _ZNKSt6vectorIcSaIcEE5emptyEv
_Bool std__vector_char__std__allocator_char_____empty___const(struct std__vector_char__std__allocator_char__* v66) {
bb67:
  struct std__vector_char__std__allocator_char__* this68;
  _Bool __retval69;
  struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___ ref_tmp070;
  struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___ ref_tmp171;
  this68 = v66;
  struct std__vector_char__std__allocator_char__* t72 = this68;
  struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___ r73 = std__vector_char__std__allocator_char_____begin___const(t72);
  ref_tmp070 = r73;
  struct __gnu_cxx____normal_iterator_const_char____std__vector_char__std__allocator_char___ r74 = std__vector_char__std__allocator_char_____end___const(t72);
  ref_tmp171 = r74;
  _Bool r75 = _ZN9__gnu_cxxeqIPKcSt6vectorIcSaIcEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&ref_tmp070, &ref_tmp171);
  __retval69 = r75;
  _Bool t76 = __retval69;
  return t76;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v77) {
bb78:
  struct std__ios_base* this79;
  long __retval80;
  this79 = v77;
  struct std__ios_base* t81 = this79;
  long t82 = t81->_M_width;
  __retval80 = t82;
  long t83 = __retval80;
  return t83;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v84, char v85) {
bb86:
  struct std__basic_ostream_char__std__char_traits_char__* __out87;
  char __c88;
  struct std__basic_ostream_char__std__char_traits_char__* __retval89;
  __out87 = v84;
  __c88 = v85;
    struct std__basic_ostream_char__std__char_traits_char__* t90 = __out87;
    void** v91 = (void**)t90;
    void* v92 = *((void**)v91);
    unsigned char* cast93 = (unsigned char*)v92;
    long c94 = -24;
    unsigned char* ptr95 = &(cast93)[c94];
    long* cast96 = (long*)ptr95;
    long t97 = *cast96;
    unsigned char* cast98 = (unsigned char*)t90;
    unsigned char* ptr99 = &(cast98)[t97];
    struct std__basic_ostream_char__std__char_traits_char__* cast100 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr99;
    struct std__ios_base* cast101 = (struct std__ios_base*)cast100;
    long r102 = std__ios_base__width___const(cast101);
    long c103 = 0;
    _Bool c104 = ((r102 != c103)) ? 1 : 0;
    if (c104) {
      struct std__basic_ostream_char__std__char_traits_char__* t105 = __out87;
      long c106 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r107 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t105, &__c88, c106);
      __retval89 = r107;
      struct std__basic_ostream_char__std__char_traits_char__* t108 = __retval89;
      return t108;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t109 = __out87;
  char t110 = __c88;
  struct std__basic_ostream_char__std__char_traits_char__* r111 = std__ostream__put(t109, t110);
  struct std__basic_ostream_char__std__char_traits_char__* t112 = __out87;
  __retval89 = t112;
  struct std__basic_ostream_char__std__char_traits_char__* t113 = __retval89;
  return t113;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v114, int v115) {
bb116:
  int __a117;
  int __b118;
  int __retval119;
  __a117 = v114;
  __b118 = v115;
  int t120 = __a117;
  int t121 = __b118;
  int b122 = t120 | t121;
  __retval119 = b122;
  int t123 = __retval119;
  return t123;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v124) {
bb125:
  struct std__basic_ios_char__std__char_traits_char__* this126;
  int __retval127;
  this126 = v124;
  struct std__basic_ios_char__std__char_traits_char__* t128 = this126;
  struct std__ios_base* base129 = (struct std__ios_base*)((char *)t128 + 0);
  int t130 = base129->_M_streambuf_state;
  __retval127 = t130;
  int t131 = __retval127;
  return t131;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v132, int v133) {
bb134:
  struct std__basic_ios_char__std__char_traits_char__* this135;
  int __state136;
  this135 = v132;
  __state136 = v133;
  struct std__basic_ios_char__std__char_traits_char__* t137 = this135;
  int r138 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t137);
  int t139 = __state136;
  int r140 = std__operator_(r138, t139);
  std__basic_ios_char__std__char_traits_char_____clear(t137, r140);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v141, char* v142) {
bb143:
  char* __c1144;
  char* __c2145;
  _Bool __retval146;
  __c1144 = v141;
  __c2145 = v142;
  char* t147 = __c1144;
  char t148 = *t147;
  int cast149 = (int)t148;
  char* t150 = __c2145;
  char t151 = *t150;
  int cast152 = (int)t151;
  _Bool c153 = ((cast149 == cast152)) ? 1 : 0;
  __retval146 = c153;
  _Bool t154 = __retval146;
  return t154;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v155) {
bb156:
  char* __p157;
  unsigned long __retval158;
  unsigned long __i159;
  __p157 = v155;
  unsigned long c160 = 0;
  __i159 = c160;
    char ref_tmp0161;
    while (1) {
      unsigned long t162 = __i159;
      char* t163 = __p157;
      char* ptr164 = &(t163)[t162];
      char c165 = 0;
      ref_tmp0161 = c165;
      _Bool r166 = __gnu_cxx__char_traits_char___eq(ptr164, &ref_tmp0161);
      _Bool u167 = !r166;
      if (!u167) break;
      unsigned long t168 = __i159;
      unsigned long u169 = t168 + 1;
      __i159 = u169;
    }
  unsigned long t170 = __i159;
  __retval158 = t170;
  unsigned long t171 = __retval158;
  return t171;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v172) {
bb173:
  char* __s174;
  unsigned long __retval175;
  __s174 = v172;
    _Bool r176 = std____is_constant_evaluated();
    if (r176) {
      char* t177 = __s174;
      unsigned long r178 = __gnu_cxx__char_traits_char___length(t177);
      __retval175 = r178;
      unsigned long t179 = __retval175;
      return t179;
    }
  char* t180 = __s174;
  unsigned long r181 = strlen(t180);
  __retval175 = r181;
  unsigned long t182 = __retval175;
  return t182;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v183, char* v184) {
bb185:
  struct std__basic_ostream_char__std__char_traits_char__* __out186;
  char* __s187;
  struct std__basic_ostream_char__std__char_traits_char__* __retval188;
  __out186 = v183;
  __s187 = v184;
    char* t189 = __s187;
    _Bool cast190 = (_Bool)t189;
    _Bool u191 = !cast190;
    if (u191) {
      struct std__basic_ostream_char__std__char_traits_char__* t192 = __out186;
      void** v193 = (void**)t192;
      void* v194 = *((void**)v193);
      unsigned char* cast195 = (unsigned char*)v194;
      long c196 = -24;
      unsigned char* ptr197 = &(cast195)[c196];
      long* cast198 = (long*)ptr197;
      long t199 = *cast198;
      unsigned char* cast200 = (unsigned char*)t192;
      unsigned char* ptr201 = &(cast200)[t199];
      struct std__basic_ostream_char__std__char_traits_char__* cast202 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr201;
      struct std__basic_ios_char__std__char_traits_char__* cast203 = (struct std__basic_ios_char__std__char_traits_char__*)cast202;
      int t204 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast203, t204);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t205 = __out186;
      char* t206 = __s187;
      char* t207 = __s187;
      unsigned long r208 = std__char_traits_char___length(t207);
      long cast209 = (long)r208;
      struct std__basic_ostream_char__std__char_traits_char__* r210 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t205, t206, cast209);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t211 = __out186;
  __retval188 = t211;
  struct std__basic_ostream_char__std__char_traits_char__* t212 = __retval188;
  return t212;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEC2ERKS1_
void __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v213, char** v214) {
bb215:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* this216;
  char** __i217;
  this216 = v213;
  __i217 = v214;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t218 = this216;
  char** t219 = __i217;
  char* t220 = *t219;
  t218->_M_current = t220;
  return;
}

// function: _ZNSt6vectorIcSaIcEE5beginEv
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std__vector_char__std__allocator_char_____begin(struct std__vector_char__std__allocator_char__* v221) {
bb222:
  struct std__vector_char__std__allocator_char__* this223;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __retval224;
  this223 = v221;
  struct std__vector_char__std__allocator_char__* t225 = this223;
  struct std___Vector_base_char__std__allocator_char__* base226 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t225 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base227 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base226->_M_impl) + 0);
  __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________normal_iterator(&__retval224, &base227->_M_start);
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t228 = __retval224;
  return t228;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEdeEv
char* __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator____const(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v229) {
bb230:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* this231;
  char* __retval232;
  this231 = v229;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t233 = this231;
  char* t234 = t233->_M_current;
  __retval232 = t234;
  char* t235 = __retval232;
  return t235;
}

// function: _ZNSt6vectorIcSaIcEE5frontEv
char* std__vector_char__std__allocator_char_____front(struct std__vector_char__std__allocator_char__* v236) {
bb237:
  struct std__vector_char__std__allocator_char__* this238;
  char* __retval239;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ ref_tmp0240;
  this238 = v236;
  struct std__vector_char__std__allocator_char__* t241 = this238;
    do {
          _Bool r242 = std__vector_char__std__allocator_char_____empty___const(t241);
          if (r242) {
            char* cast243 = (char*)&(_str_2);
            int c244 = 1346;
            char* cast245 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIcSaIcEE5frontEv);
            char* cast246 = (char*)&(_str_3);
            std____glibcxx_assert_fail(cast243, c244, cast245, cast246);
          }
      _Bool c247 = 0;
      if (!c247) break;
    } while (1);
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r248 = std__vector_char__std__allocator_char_____begin(t241);
  ref_tmp0240 = r248;
  char* r249 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator____const(&ref_tmp0240);
  __retval239 = r249;
  char* t250 = __retval239;
  return t250;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v251, void* v252) {
bb253:
  struct std__basic_ostream_char__std__char_traits_char__* this254;
  void* __pf255;
  struct std__basic_ostream_char__std__char_traits_char__* __retval256;
  this254 = v251;
  __pf255 = v252;
  struct std__basic_ostream_char__std__char_traits_char__* t257 = this254;
  void* t258 = __pf255;
  struct std__basic_ostream_char__std__char_traits_char__* r259 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t258)(t257);
  __retval256 = r259;
  struct std__basic_ostream_char__std__char_traits_char__* t260 = __retval256;
  return t260;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v261) {
bb262:
  struct std__basic_ostream_char__std__char_traits_char__* __os263;
  struct std__basic_ostream_char__std__char_traits_char__* __retval264;
  __os263 = v261;
  struct std__basic_ostream_char__std__char_traits_char__* t265 = __os263;
  struct std__basic_ostream_char__std__char_traits_char__* r266 = std__ostream__flush(t265);
  __retval264 = r266;
  struct std__basic_ostream_char__std__char_traits_char__* t267 = __retval264;
  return t267;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v268) {
bb269:
  struct std__ctype_char_* __f270;
  struct std__ctype_char_* __retval271;
  __f270 = v268;
    struct std__ctype_char_* t272 = __f270;
    _Bool cast273 = (_Bool)t272;
    _Bool u274 = !cast273;
    if (u274) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t275 = __f270;
  __retval271 = t275;
  struct std__ctype_char_* t276 = __retval271;
  return t276;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v277, char v278) {
bb279:
  struct std__ctype_char_* this280;
  char __c281;
  char __retval282;
  this280 = v277;
  __c281 = v278;
  struct std__ctype_char_* t283 = this280;
    char t284 = t283->_M_widen_ok;
    _Bool cast285 = (_Bool)t284;
    if (cast285) {
      char t286 = __c281;
      unsigned char cast287 = (unsigned char)t286;
      unsigned long cast288 = (unsigned long)cast287;
      char t289 = t283->_M_widen[cast288];
      __retval282 = t289;
      char t290 = __retval282;
      return t290;
    }
  std__ctype_char____M_widen_init___const(t283);
  char t291 = __c281;
  void** v292 = (void**)t283;
  void* v293 = *((void**)v292);
  char vcall296 = (char)__VERIFIER_virtual_call_char_char(t283, 6, t291);
  __retval282 = vcall296;
  char t297 = __retval282;
  return t297;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v298, char v299) {
bb300:
  struct std__basic_ios_char__std__char_traits_char__* this301;
  char __c302;
  char __retval303;
  this301 = v298;
  __c302 = v299;
  struct std__basic_ios_char__std__char_traits_char__* t304 = this301;
  struct std__ctype_char_* t305 = t304->_M_ctype;
  struct std__ctype_char_* r306 = std__ctype_char__const__std____check_facet_std__ctype_char___(t305);
  char t307 = __c302;
  char r308 = std__ctype_char___widen_char__const(r306, t307);
  __retval303 = r308;
  char t309 = __retval303;
  return t309;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v310) {
bb311:
  struct std__basic_ostream_char__std__char_traits_char__* __os312;
  struct std__basic_ostream_char__std__char_traits_char__* __retval313;
  __os312 = v310;
  struct std__basic_ostream_char__std__char_traits_char__* t314 = __os312;
  struct std__basic_ostream_char__std__char_traits_char__* t315 = __os312;
  void** v316 = (void**)t315;
  void* v317 = *((void**)v316);
  unsigned char* cast318 = (unsigned char*)v317;
  long c319 = -24;
  unsigned char* ptr320 = &(cast318)[c319];
  long* cast321 = (long*)ptr320;
  long t322 = *cast321;
  unsigned char* cast323 = (unsigned char*)t315;
  unsigned char* ptr324 = &(cast323)[t322];
  struct std__basic_ostream_char__std__char_traits_char__* cast325 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr324;
  struct std__basic_ios_char__std__char_traits_char__* cast326 = (struct std__basic_ios_char__std__char_traits_char__*)cast325;
  char c327 = 10;
  char r328 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast326, c327);
  struct std__basic_ostream_char__std__char_traits_char__* r329 = std__ostream__put(t314, r328);
  struct std__basic_ostream_char__std__char_traits_char__* r330 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r329);
  __retval313 = r330;
  struct std__basic_ostream_char__std__char_traits_char__* t331 = __retval313;
  return t331;
}

// function: _ZNSt6vectorIcSaIcEED2Ev
void std__vector_char__std__allocator_char______vector(struct std__vector_char__std__allocator_char__* v332) {
bb333:
  struct std__vector_char__std__allocator_char__* this334;
  this334 = v332;
  struct std__vector_char__std__allocator_char__* t335 = this334;
    struct std___Vector_base_char__std__allocator_char__* base336 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t335 + 0);
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base337 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base336->_M_impl) + 0);
    char* t338 = base337->_M_start;
    struct std___Vector_base_char__std__allocator_char__* base339 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t335 + 0);
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base340 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base339->_M_impl) + 0);
    char* t341 = base340->_M_finish;
    struct std___Vector_base_char__std__allocator_char__* base342 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t335 + 0);
    struct std__allocator_char_* r343 = std___Vector_base_char__std__allocator_char______M_get_Tp_allocator(base342);
    void_std___Destroy_char___char_(t338, t341, r343);
  {
    struct std___Vector_base_char__std__allocator_char__* base344 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t335 + 0);
    std___Vector_base_char__std__allocator_char_______Vector_base(base344);
  }
  return;
}

// function: main
int main() {
bb345:
  int __retval346;
  struct std__vector_char__std__allocator_char__ letters347;
  struct std__initializer_list_char_ agg_tmp0348;
  char ref_tmp0349[6];
  struct std__allocator_char_ ref_tmp1350;
  int c351 = 0;
  __retval346 = c351;
  char* cast352 = (char*)&(ref_tmp0349);
  char c353 = 111;
  *cast352 = c353;
  long c354 = 1;
  char* ptr355 = &(cast352)[c354];
  char c356 = 109;
  *ptr355 = c356;
  long c357 = 2;
  char* ptr358 = &(cast352)[c357];
  char c359 = 103;
  *ptr358 = c359;
  long c360 = 3;
  char* ptr361 = &(cast352)[c360];
  char c362 = 119;
  *ptr361 = c362;
  long c363 = 4;
  char* ptr364 = &(cast352)[c363];
  char c365 = 116;
  *ptr364 = c365;
  long c366 = 5;
  char* ptr367 = &(cast352)[c366];
  char c368 = 102;
  *ptr367 = c368;
  char** cast369 = (char**)&(agg_tmp0348._M_array);
  *cast369 = ref_tmp0349;
  unsigned long c370 = 6;
  agg_tmp0348._M_len = c370;
  std__allocator_char___allocator_2(&ref_tmp1350);
    struct std__initializer_list_char_ t371 = agg_tmp0348;
    std__vector_char__std__allocator_char_____vector(&letters347, t371, &ref_tmp1350);
  {
    std__allocator_char____allocator(&ref_tmp1350);
  }
      _Bool r372 = std__vector_char__std__allocator_char_____empty___const(&letters347);
      _Bool u373 = !r372;
      if (u373) {
        char* cast374 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* r375 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast374);
        char* r376 = std__vector_char__std__allocator_char_____front(&letters347);
        char t377 = *r376;
        struct std__basic_ostream_char__std__char_traits_char__* r378 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r375, t377);
        struct std__basic_ostream_char__std__char_traits_char__* r379 = std__ostream__operator___std__ostream_____(r378, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      }
  {
    std__vector_char__std__allocator_char______vector(&letters347);
  }
  int t380 = __retval346;
  return t380;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v381) {
bb382:
  struct std____new_allocator_char_* this383;
  this383 = v381;
  struct std____new_allocator_char_* t384 = this383;
  return;
}

// function: _ZNSt12_Vector_baseIcSaIcEE12_Vector_implC2ERKS0_
void std___Vector_base_char__std__allocator_char______Vector_impl___Vector_impl(struct std___Vector_base_char__std__allocator_char_____Vector_impl* v385, struct std__allocator_char_* v386) {
bb387:
  struct std___Vector_base_char__std__allocator_char_____Vector_impl* this388;
  struct std__allocator_char_* __a389;
  this388 = v385;
  __a389 = v386;
  struct std___Vector_base_char__std__allocator_char_____Vector_impl* t390 = this388;
  struct std__allocator_char_* base391 = (struct std__allocator_char_*)((char *)t390 + 0);
  struct std__allocator_char_* t392 = __a389;
  std__allocator_char___allocator(base391, t392);
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base393 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)t390 + 0);
    std___Vector_base_char__std__allocator_char______Vector_impl_data___Vector_impl_data(base393);
  return;
}

// function: _ZNSt12_Vector_baseIcSaIcEE12_Vector_implD2Ev
void std___Vector_base_char__std__allocator_char______Vector_impl____Vector_impl(struct std___Vector_base_char__std__allocator_char_____Vector_impl* v394) {
bb395:
  struct std___Vector_base_char__std__allocator_char_____Vector_impl* this396;
  this396 = v394;
  struct std___Vector_base_char__std__allocator_char_____Vector_impl* t397 = this396;
  {
    struct std__allocator_char_* base398 = (struct std__allocator_char_*)((char *)t397 + 0);
    std__allocator_char____allocator(base398);
  }
  return;
}

// function: _ZNSt12_Vector_baseIcSaIcEEC2ERKS0_
void std___Vector_base_char__std__allocator_char______Vector_base(struct std___Vector_base_char__std__allocator_char__* v399, struct std__allocator_char_* v400) {
bb401:
  struct std___Vector_base_char__std__allocator_char__* this402;
  struct std__allocator_char_* __a403;
  this402 = v399;
  __a403 = v400;
  struct std___Vector_base_char__std__allocator_char__* t404 = this402;
  struct std__allocator_char_* t405 = __a403;
  std___Vector_base_char__std__allocator_char______Vector_impl___Vector_impl(&t404->_M_impl, t405);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb406:
  _Bool __retval407;
    _Bool c408 = 0;
    __retval407 = c408;
    _Bool t409 = __retval407;
    return t409;
  abort();
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v410) {
bb411:
  struct std____new_allocator_char_* this412;
  unsigned long __retval413;
  this412 = v410;
  struct std____new_allocator_char_* t414 = this412;
  unsigned long c415 = 9223372036854775807;
  unsigned long c416 = 1;
  unsigned long b417 = c415 / c416;
  __retval413 = b417;
  unsigned long t418 = __retval413;
  return t418;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v419, unsigned long v420, void* v421) {
bb422:
  struct std____new_allocator_char_* this423;
  unsigned long __n424;
  void* unnamed425;
  char* __retval426;
  this423 = v419;
  __n424 = v420;
  unnamed425 = v421;
  struct std____new_allocator_char_* t427 = this423;
    unsigned long t428 = __n424;
    unsigned long r429 = std____new_allocator_char____M_max_size___const(t427);
    _Bool c430 = ((t428 > r429)) ? 1 : 0;
    if (c430) {
        unsigned long t431 = __n424;
        unsigned long c432 = -1;
        unsigned long c433 = 1;
        unsigned long b434 = c432 / c433;
        _Bool c435 = ((t431 > b434)) ? 1 : 0;
        if (c435) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c436 = 1;
    unsigned long c437 = 16;
    _Bool c438 = ((c436 > c437)) ? 1 : 0;
    if (c438) {
      unsigned long __al439;
      unsigned long c440 = 1;
      __al439 = c440;
      unsigned long t441 = __n424;
      unsigned long c442 = 1;
      unsigned long b443 = t441 * c442;
      unsigned long t444 = __al439;
      void* r445 = operator_new_2(b443, t444);
      char* cast446 = (char*)r445;
      __retval426 = cast446;
      char* t447 = __retval426;
      return t447;
    }
  unsigned long t448 = __n424;
  unsigned long c449 = 1;
  unsigned long b450 = t448 * c449;
  void* r451 = operator_new(b450);
  char* cast452 = (char*)r451;
  __retval426 = cast452;
  char* t453 = __retval426;
  return t453;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v454, unsigned long v455) {
bb456:
  struct std__allocator_char_* this457;
  unsigned long __n458;
  char* __retval459;
  this457 = v454;
  __n458 = v455;
  struct std__allocator_char_* t460 = this457;
    _Bool r461 = std____is_constant_evaluated();
    if (r461) {
        unsigned long t462 = __n458;
        unsigned long c463 = 1;
        unsigned long ovr464;
        _Bool ovf465 = __builtin_mul_overflow(t462, c463, &ovr464);
        __n458 = ovr464;
        if (ovf465) {
          std____throw_bad_array_new_length();
        }
      unsigned long t466 = __n458;
      void* r467 = operator_new(t466);
      char* cast468 = (char*)r467;
      __retval459 = cast468;
      char* t469 = __retval459;
      return t469;
    }
  struct std____new_allocator_char_* base470 = (struct std____new_allocator_char_*)((char *)t460 + 0);
  unsigned long t471 = __n458;
  void* c472 = ((void*)0);
  char* r473 = std____new_allocator_char___allocate(base470, t471, c472);
  __retval459 = r473;
  char* t474 = __retval459;
  return t474;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v475, unsigned long v476) {
bb477:
  struct std__allocator_char_* __a478;
  unsigned long __n479;
  char* __retval480;
  __a478 = v475;
  __n479 = v476;
  struct std__allocator_char_* t481 = __a478;
  unsigned long t482 = __n479;
  char* r483 = std__allocator_char___allocate(t481, t482);
  __retval480 = r483;
  char* t484 = __retval480;
  return t484;
}

// function: _ZNSt12_Vector_baseIcSaIcEE11_M_allocateEm
char* std___Vector_base_char__std__allocator_char______M_allocate(struct std___Vector_base_char__std__allocator_char__* v485, unsigned long v486) {
bb487:
  struct std___Vector_base_char__std__allocator_char__* this488;
  unsigned long __n489;
  char* __retval490;
  this488 = v485;
  __n489 = v486;
  struct std___Vector_base_char__std__allocator_char__* t491 = this488;
  unsigned long t492 = __n489;
  unsigned long c493 = 0;
  _Bool c494 = ((t492 != c493)) ? 1 : 0;
  char* ternary495;
  if (c494) {
    struct std__allocator_char_* base496 = (struct std__allocator_char_*)((char *)&(t491->_M_impl) + 0);
    unsigned long t497 = __n489;
    char* r498 = std__allocator_traits_std__allocator_char_____allocate(base496, t497);
    ternary495 = (char*)r498;
  } else {
    char* c499 = ((void*)0);
    ternary495 = (char*)c499;
  }
  __retval490 = ternary495;
  char* t500 = __retval490;
  return t500;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v501, unsigned long* v502) {
bb503:
  unsigned long* __a504;
  unsigned long* __b505;
  unsigned long* __retval506;
  __a504 = v501;
  __b505 = v502;
    unsigned long* t507 = __b505;
    unsigned long t508 = *t507;
    unsigned long* t509 = __a504;
    unsigned long t510 = *t509;
    _Bool c511 = ((t508 < t510)) ? 1 : 0;
    if (c511) {
      unsigned long* t512 = __b505;
      __retval506 = t512;
      unsigned long* t513 = __retval506;
      return t513;
    }
  unsigned long* t514 = __a504;
  __retval506 = t514;
  unsigned long* t515 = __retval506;
  return t515;
}

// function: _ZNSt6vectorIcSaIcEE11_S_max_sizeERKS0_
unsigned long std__vector_char__std__allocator_char______S_max_size(struct std__allocator_char_* v516) {
bb517:
  struct std__allocator_char_* __a518;
  unsigned long __retval519;
  unsigned long __diffmax520;
  unsigned long __allocmax521;
  __a518 = v516;
  unsigned long c522 = 9223372036854775807;
  __diffmax520 = c522;
  unsigned long c523 = -1;
  __allocmax521 = c523;
  unsigned long* r524 = unsigned_long_const__std__min_unsigned_long_(&__diffmax520, &__allocmax521);
  unsigned long t525 = *r524;
  __retval519 = t525;
  unsigned long t526 = __retval519;
  return t526;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v527, struct std__allocator_char_* v528) {
bb529:
  struct std__allocator_char_* this530;
  struct std__allocator_char_* __a531;
  this530 = v527;
  __a531 = v528;
  struct std__allocator_char_* t532 = this530;
  struct std____new_allocator_char_* base533 = (struct std____new_allocator_char_*)((char *)t532 + 0);
  struct std__allocator_char_* t534 = __a531;
  struct std____new_allocator_char_* base535 = (struct std____new_allocator_char_*)((char *)t534 + 0);
  std____new_allocator_char_____new_allocator(base533, base535);
  return;
}

// function: _ZNSt6vectorIcSaIcEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_char__std__allocator_char______S_check_init_len(unsigned long v536, struct std__allocator_char_* v537) {
bb538:
  unsigned long __n539;
  struct std__allocator_char_* __a540;
  unsigned long __retval541;
  __n539 = v536;
  __a540 = v537;
    struct std__allocator_char_ ref_tmp0542;
    _Bool tmp_exprcleanup543;
    unsigned long t544 = __n539;
    struct std__allocator_char_* t545 = __a540;
    std__allocator_char___allocator(&ref_tmp0542, t545);
      unsigned long r546 = std__vector_char__std__allocator_char______S_max_size(&ref_tmp0542);
      _Bool c547 = ((t544 > r546)) ? 1 : 0;
      tmp_exprcleanup543 = c547;
    {
      std__allocator_char____allocator(&ref_tmp0542);
    }
    _Bool t548 = tmp_exprcleanup543;
    if (t548) {
      char* cast549 = (char*)&(_str_1);
      std____throw_length_error(cast549);
    }
  unsigned long t550 = __n539;
  __retval541 = t550;
  unsigned long t551 = __retval541;
  return t551;
}

// function: _ZNSt12_Vector_baseIcSaIcEE19_M_get_Tp_allocatorEv
struct std__allocator_char_* std___Vector_base_char__std__allocator_char______M_get_Tp_allocator(struct std___Vector_base_char__std__allocator_char__* v552) {
bb553:
  struct std___Vector_base_char__std__allocator_char__* this554;
  struct std__allocator_char_* __retval555;
  this554 = v552;
  struct std___Vector_base_char__std__allocator_char__* t556 = this554;
  struct std__allocator_char_* base557 = (struct std__allocator_char_*)((char *)&(t556->_M_impl) + 0);
  __retval555 = base557;
  struct std__allocator_char_* t558 = __retval555;
  return t558;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb559:
  _Bool __retval560;
    _Bool c561 = 0;
    __retval560 = c561;
    _Bool t562 = __retval560;
    return t562;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPcvEC2ERS0_
void std___UninitDestroyGuard_char___void____UninitDestroyGuard(struct std___UninitDestroyGuard_char____void_* v563, char** v564) {
bb565:
  struct std___UninitDestroyGuard_char____void_* this566;
  char** __first567;
  this566 = v563;
  __first567 = v564;
  struct std___UninitDestroyGuard_char____void_* t568 = this566;
  char** t569 = __first567;
  char* t570 = *t569;
  t568->_M_first = t570;
  char** t571 = __first567;
  t568->_M_cur = t571;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v572, char* v573) {
bb574:
  char* __location575;
  char* __args576;
  char* __retval577;
  void* __loc578;
  __location575 = v572;
  __args576 = v573;
  char* t579 = __location575;
  void* cast580 = (void*)t579;
  __loc578 = cast580;
    void* t581 = __loc578;
    char* cast582 = (char*)t581;
    char* t583 = __args576;
    char t584 = *t583;
    *cast582 = t584;
    __retval577 = cast582;
    char* t585 = __retval577;
    return t585;
  abort();
}

// function: _ZSt10_ConstructIcJRKcEEvPT_DpOT0_
void void_std___Construct_char__char_const__(char* v586, char* v587) {
bb588:
  char* __p589;
  char* __args590;
  __p589 = v586;
  __args590 = v587;
    _Bool r591 = std____is_constant_evaluated();
    if (r591) {
      char* t592 = __p589;
      char* t593 = __args590;
      char* r594 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t592, t593);
      return;
    }
  char* t595 = __p589;
  void* cast596 = (void*)t595;
  char* cast597 = (char*)cast596;
  char* t598 = __args590;
  char t599 = *t598;
  *cast597 = t599;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPcvE7releaseEv
void std___UninitDestroyGuard_char___void___release(struct std___UninitDestroyGuard_char____void_* v600) {
bb601:
  struct std___UninitDestroyGuard_char____void_* this602;
  this602 = v600;
  struct std___UninitDestroyGuard_char____void_* t603 = this602;
  char** c604 = ((void*)0);
  t603->_M_cur = c604;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPcvED2Ev
void std___UninitDestroyGuard_char___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_char____void_* v605) {
bb606:
  struct std___UninitDestroyGuard_char____void_* this607;
  this607 = v605;
  struct std___UninitDestroyGuard_char____void_* t608 = this607;
    char** t609 = t608->_M_cur;
    char** c610 = ((void*)0);
    _Bool c611 = ((t609 != c610)) ? 1 : 0;
    if (c611) {
      char* t612 = t608->_M_first;
      char** t613 = t608->_M_cur;
      char* t614 = *t613;
      void_std___Destroy_char__(t612, t614);
    }
  return;
}

// function: _ZSt16__do_uninit_copyIPKcS1_PcET1_T_T0_S3_
char* char__std____do_uninit_copy_char_const___char_const___char__(char* v615, char* v616, char* v617) {
bb618:
  char* __first619;
  char* __last620;
  char* __result621;
  char* __retval622;
  struct std___UninitDestroyGuard_char____void_ __guard623;
  __first619 = v615;
  __last620 = v616;
  __result621 = v617;
  std___UninitDestroyGuard_char___void____UninitDestroyGuard(&__guard623, &__result621);
      while (1) {
        char* t625 = __first619;
        char* t626 = __last620;
        _Bool c627 = ((t625 != t626)) ? 1 : 0;
        if (!c627) break;
        char* t628 = __result621;
        char* t629 = __first619;
        void_std___Construct_char__char_const__(t628, t629);
      for_step624: ;
        char* t630 = __first619;
        int c631 = 1;
        char* ptr632 = &(t630)[c631];
        __first619 = ptr632;
        char* t633 = __result621;
        int c634 = 1;
        char* ptr635 = &(t633)[c634];
        __result621 = ptr635;
      }
    std___UninitDestroyGuard_char___void___release(&__guard623);
    char* t636 = __result621;
    __retval622 = t636;
    char* t637 = __retval622;
    char* ret_val638 = t637;
    {
      std___UninitDestroyGuard_char___void_____UninitDestroyGuard(&__guard623);
    }
    return ret_val638;
  abort();
}

// function: _ZSt12__niter_baseIPcET_S1_
char* char__std____niter_base_char__(char* v639) {
bb640:
  char* __it641;
  char* __retval642;
  __it641 = v639;
  char* t643 = __it641;
  __retval642 = t643;
  char* t644 = __retval642;
  return t644;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v645) {
bb646:
  char* __it647;
  char* __retval648;
  __it647 = v645;
  char* t649 = __it647;
  __retval648 = t649;
  char* t650 = __retval648;
  return t650;
}

// function: _ZSt18uninitialized_copyIPKcPcET0_T_S4_S3_
char* char__std__uninitialized_copy_char_const___char__(char* v651, char* v652, char* v653) {
bb654:
  char* __first655;
  char* __last656;
  char* __result657;
  char* __retval658;
  __first655 = v651;
  __last656 = v652;
  __result657 = v653;
      long __n659;
      char* t660 = __last656;
      char* t661 = __first655;
      long diff662 = t660 - t661;
      __n659 = diff662;
        long t663 = __n659;
        long c664 = 0;
        _Bool c665 = ((t663 > c664)) ? 1 : 0;
        if (c665) {
          char* t666 = __result657;
          char* r667 = char__std____niter_base_char__(t666);
          void* cast668 = (void*)r667;
          char* t669 = __first655;
          char* r670 = char_const__std____niter_base_char_const__(t669);
          void* cast671 = (void*)r670;
          long t672 = __n659;
          unsigned long cast673 = (unsigned long)t672;
          unsigned long c674 = 1;
          unsigned long b675 = cast673 * c674;
          void* r676 = memcpy(cast668, cast671, b675);
          long t677 = __n659;
          char* t678 = __result657;
          char* ptr679 = &(t678)[t677];
          __result657 = ptr679;
        }
      char* t680 = __result657;
      __retval658 = t680;
      char* t681 = __retval658;
      return t681;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPKcS1_PccET1_T_T0_S3_RSaIT2_E
char* char__std____uninitialized_copy_a_char_const___char_const___char___char_(char* v682, char* v683, char* v684, struct std__allocator_char_* v685) {
bb686:
  char* __first687;
  char* __last688;
  char* __result689;
  struct std__allocator_char_* unnamed690;
  char* __retval691;
  __first687 = v682;
  __last688 = v683;
  __result689 = v684;
  unnamed690 = v685;
    _Bool r692 = std__is_constant_evaluated();
    if (r692) {
      char* t693 = __first687;
      char* t694 = __last688;
      char* t695 = __result689;
      char* r696 = char__std____do_uninit_copy_char_const___char_const___char__(t693, t694, t695);
      __retval691 = r696;
      char* t697 = __retval691;
      return t697;
    }
    char* t698 = __first687;
    char* t699 = __last688;
    char* t700 = __result689;
    char* r701 = char__std__uninitialized_copy_char_const___char__(t698, t699, t700);
    __retval691 = r701;
    char* t702 = __retval691;
    return t702;
  abort();
}

// function: _ZNSt6vectorIcSaIcEE21_M_range_initialize_nIPKcS4_EEvT_T0_m
void void_std__vector_char__std__allocator_char______M_range_initialize_n_char_const___char_const__(struct std__vector_char__std__allocator_char__* v703, char* v704, char* v705, unsigned long v706) {
bb707:
  struct std__vector_char__std__allocator_char__* this708;
  char* __first709;
  char* __last710;
  unsigned long __n711;
  char* __start712;
  this708 = v703;
  __first709 = v704;
  __last710 = v705;
  __n711 = v706;
  struct std__vector_char__std__allocator_char__* t713 = this708;
  struct std___Vector_base_char__std__allocator_char__* base714 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t713 + 0);
  unsigned long t715 = __n711;
  struct std___Vector_base_char__std__allocator_char__* base716 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t713 + 0);
  struct std__allocator_char_* r717 = std___Vector_base_char__std__allocator_char______M_get_Tp_allocator(base716);
  unsigned long r718 = std__vector_char__std__allocator_char______S_check_init_len(t715, r717);
  char* r719 = std___Vector_base_char__std__allocator_char______M_allocate(base714, r718);
  __start712 = r719;
  char* t720 = __start712;
  struct std___Vector_base_char__std__allocator_char__* base721 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t713 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base722 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base721->_M_impl) + 0);
  base722->_M_finish = t720;
  struct std___Vector_base_char__std__allocator_char__* base723 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t713 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base724 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base723->_M_impl) + 0);
  base724->_M_start = t720;
  char* t725 = __start712;
  unsigned long t726 = __n711;
  char* ptr727 = &(t725)[t726];
  struct std___Vector_base_char__std__allocator_char__* base728 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t713 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base729 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base728->_M_impl) + 0);
  base729->_M_end_of_storage = ptr727;
  char* t730 = __first709;
  char* t731 = __last710;
  char* t732 = __start712;
  struct std___Vector_base_char__std__allocator_char__* base733 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t713 + 0);
  struct std__allocator_char_* r734 = std___Vector_base_char__std__allocator_char______M_get_Tp_allocator(base733);
  char* r735 = char__std____uninitialized_copy_a_char_const___char_const___char___char_(t730, t731, t732, r734);
  struct std___Vector_base_char__std__allocator_char__* base736 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t713 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base737 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base736->_M_impl) + 0);
  base737->_M_finish = r735;
  return;
}

// function: _ZNKSt16initializer_listIcE5beginEv
char* std__initializer_list_char___begin___const(struct std__initializer_list_char_* v738) {
bb739:
  struct std__initializer_list_char_* this740;
  char* __retval741;
  this740 = v738;
  struct std__initializer_list_char_* t742 = this740;
  char* t743 = t742->_M_array;
  __retval741 = t743;
  char* t744 = __retval741;
  return t744;
}

// function: _ZNKSt16initializer_listIcE3endEv
char* std__initializer_list_char___end___const(struct std__initializer_list_char_* v745) {
bb746:
  struct std__initializer_list_char_* this747;
  char* __retval748;
  this747 = v745;
  struct std__initializer_list_char_* t749 = this747;
  char* r750 = std__initializer_list_char___begin___const(t749);
  unsigned long r751 = std__initializer_list_char___size___const(t749);
  char* ptr752 = &(r750)[r751];
  __retval748 = ptr752;
  char* t753 = __retval748;
  return t753;
}

// function: _ZNKSt16initializer_listIcE4sizeEv
unsigned long std__initializer_list_char___size___const(struct std__initializer_list_char_* v754) {
bb755:
  struct std__initializer_list_char_* this756;
  unsigned long __retval757;
  this756 = v754;
  struct std__initializer_list_char_* t758 = this756;
  unsigned long t759 = t758->_M_len;
  __retval757 = t759;
  unsigned long t760 = __retval757;
  return t760;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v761, char* v762, unsigned long v763) {
bb764:
  struct std____new_allocator_char_* this765;
  char* __p766;
  unsigned long __n767;
  this765 = v761;
  __p766 = v762;
  __n767 = v763;
  struct std____new_allocator_char_* t768 = this765;
    unsigned long c769 = 1;
    unsigned long c770 = 16;
    _Bool c771 = ((c769 > c770)) ? 1 : 0;
    if (c771) {
      char* t772 = __p766;
      void* cast773 = (void*)t772;
      unsigned long t774 = __n767;
      unsigned long c775 = 1;
      unsigned long b776 = t774 * c775;
      unsigned long c777 = 1;
      operator_delete_3(cast773, b776, c777);
      return;
    }
  char* t778 = __p766;
  void* cast779 = (void*)t778;
  unsigned long t780 = __n767;
  unsigned long c781 = 1;
  unsigned long b782 = t780 * c781;
  operator_delete_2(cast779, b782);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v783, char* v784, unsigned long v785) {
bb786:
  struct std__allocator_char_* this787;
  char* __p788;
  unsigned long __n789;
  this787 = v783;
  __p788 = v784;
  __n789 = v785;
  struct std__allocator_char_* t790 = this787;
    _Bool r791 = std____is_constant_evaluated();
    if (r791) {
      char* t792 = __p788;
      void* cast793 = (void*)t792;
      operator_delete(cast793);
      return;
    }
  struct std____new_allocator_char_* base794 = (struct std____new_allocator_char_*)((char *)t790 + 0);
  char* t795 = __p788;
  unsigned long t796 = __n789;
  std____new_allocator_char___deallocate(base794, t795, t796);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v797, char* v798, unsigned long v799) {
bb800:
  struct std__allocator_char_* __a801;
  char* __p802;
  unsigned long __n803;
  __a801 = v797;
  __p802 = v798;
  __n803 = v799;
  struct std__allocator_char_* t804 = __a801;
  char* t805 = __p802;
  unsigned long t806 = __n803;
  std__allocator_char___deallocate(t804, t805, t806);
  return;
}

// function: _ZNSt12_Vector_baseIcSaIcEE13_M_deallocateEPcm
void std___Vector_base_char__std__allocator_char______M_deallocate(struct std___Vector_base_char__std__allocator_char__* v807, char* v808, unsigned long v809) {
bb810:
  struct std___Vector_base_char__std__allocator_char__* this811;
  char* __p812;
  unsigned long __n813;
  this811 = v807;
  __p812 = v808;
  __n813 = v809;
  struct std___Vector_base_char__std__allocator_char__* t814 = this811;
    char* t815 = __p812;
    _Bool cast816 = (_Bool)t815;
    if (cast816) {
      struct std__allocator_char_* base817 = (struct std__allocator_char_*)((char *)&(t814->_M_impl) + 0);
      char* t818 = __p812;
      unsigned long t819 = __n813;
      std__allocator_traits_std__allocator_char_____deallocate(base817, t818, t819);
    }
  return;
}

// function: _ZNSt12_Vector_baseIcSaIcEED2Ev
void std___Vector_base_char__std__allocator_char_______Vector_base(struct std___Vector_base_char__std__allocator_char__* v820) {
bb821:
  struct std___Vector_base_char__std__allocator_char__* this822;
  this822 = v820;
  struct std___Vector_base_char__std__allocator_char__* t823 = this822;
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base824 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(t823->_M_impl) + 0);
    char* t825 = base824->_M_start;
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base826 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(t823->_M_impl) + 0);
    char* t827 = base826->_M_end_of_storage;
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base828 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(t823->_M_impl) + 0);
    char* t829 = base828->_M_start;
    long diff830 = t827 - t829;
    unsigned long cast831 = (unsigned long)diff830;
    std___Vector_base_char__std__allocator_char______M_deallocate(t823, t825, cast831);
  {
    std___Vector_base_char__std__allocator_char______Vector_impl____Vector_impl(&t823->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v832, struct std____new_allocator_char_* v833) {
bb834:
  struct std____new_allocator_char_* this835;
  struct std____new_allocator_char_* unnamed836;
  this835 = v832;
  unnamed836 = v833;
  struct std____new_allocator_char_* t837 = this835;
  return;
}

// function: _ZNSt12_Vector_baseIcSaIcEE17_Vector_impl_dataC2Ev
void std___Vector_base_char__std__allocator_char______Vector_impl_data___Vector_impl_data(struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* v838) {
bb839:
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* this840;
  this840 = v838;
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* t841 = this840;
  char* c842 = ((void*)0);
  t841->_M_start = c842;
  char* c843 = ((void*)0);
  t841->_M_finish = c843;
  char* c844 = ((void*)0);
  t841->_M_end_of_storage = c844;
  return;
}

// function: _ZSt10destroy_atIcEvPT_
void void_std__destroy_at_char_(char* v845) {
bb846:
  char* __location847;
  __location847 = v845;
  return;
}

// function: _ZSt8_DestroyIPcEvT_S1_
void void_std___Destroy_char__(char* v848, char* v849) {
bb850:
  char* __first851;
  char* __last852;
  __first851 = v848;
  __last852 = v849;
      _Bool r853 = std____is_constant_evaluated();
      if (r853) {
          while (1) {
            char* t855 = __first851;
            char* t856 = __last852;
            _Bool c857 = ((t855 != t856)) ? 1 : 0;
            if (!c857) break;
            char* t858 = __first851;
            void_std__destroy_at_char_(t858);
          for_step854: ;
            char* t859 = __first851;
            int c860 = 1;
            char* ptr861 = &(t859)[c860];
            __first851 = ptr861;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPccEvT_S1_RSaIT0_E
void void_std___Destroy_char___char_(char* v862, char* v863, struct std__allocator_char_* v864) {
bb865:
  char* __first866;
  char* __last867;
  struct std__allocator_char_* unnamed868;
  __first866 = v862;
  __last867 = v863;
  unnamed868 = v864;
  char* t869 = __first866;
  char* t870 = __last867;
  void_std___Destroy_char__(t869, t870);
  return;
}

