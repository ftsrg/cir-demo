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
__attribute__((weak)) double __VERIFIER_virtual_call_double(void* __obj, int __slot) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((double(*)(void*))__fn)(__obj);
}
__attribute__((weak)) struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __VERIFIER_virtual_call_struct_std_cxx11_basic_string_char_std_char_traits_char_std_allocator_char(void* __obj, int __slot) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__(*)(void*))__fn)(__obj);
}
__attribute__((weak)) void __VERIFIER_virtual_call_void(void* __obj, int __slot) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  ((void(*)(void*))__fn)(__obj);
}

// Struct definitions (auto-parsed)
struct Shape { void* __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std___Setprecision { int _M_n; };
struct std___UninitDestroyGuard_Shape_____void_ { struct Shape** _M_first; struct Shape*** _M_cur; };
struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data { struct Shape** _M_start; struct Shape** _M_finish; struct Shape** _M_end_of_storage; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_Shape___ { unsigned char __field0; };
struct std____new_allocator_char_ { unsigned char __field0; };
struct std__allocator_Shape___ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct Point { struct Shape __field0; int __field1; int __field2; };
struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl { struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long _M_precision; long _M_width; int _M_flags; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct Circle { struct Point __field0; double __field1; };
struct Cylinder { struct Circle __field0; double __field1; };
struct std___Vector_base_Shape____std__allocator_Shape____ { struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_Shape____std__allocator_Shape____ { struct std___Vector_base_Shape____std__allocator_Shape____ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base10floatfieldE_const __attribute__((aligned(4))) = 260;
int _ZNSt8ios_base5fixedE_const __attribute__((aligned(4))) = 4;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[3] = ": ";
char _str_1[3] = "\n\n";
char _str_2[34] = "\nVirtual function calls made off ";
char _str_3[23] = "base-class pointers:\n\n";
char _str_4[25] = "base-class references:\n\n";
char _str_5[10] = "\narea is ";
char _str_6[12] = "\nvolume is ";
char _str_7[49] = "cannot create std::vector larger than max_size()";
char _str_8[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIP5ShapeSaIS1_EEixEm[104] = "reference std::vector<Shape *>::operator[](size_type) [_Tp = Shape *, _Alloc = std::allocator<Shape *>]";
char _str_9[19] = "__n < this->size()";
long std__ios_base__precision(struct std__ios_base* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setprecision p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
int* std__operator__(int* p0, int p1);
int std__operator__2(int p0);
int std__operator__4(int p0, int p1);
int* std__operator___2(int* p0, int p1);
int std__operator_(int p0, int p1);
int std__ios_base__setf(struct std__ios_base* p0, int p1, int p2);
struct std__ios_base* std__fixed(struct std__ios_base* p0);
struct std___Setprecision std__setprecision(int p0);
extern void Point__Point(struct Point* p0, int p1, int p2);
extern void Circle__Circle(struct Circle* p0, int p1, int p2, double p3);
extern void Cylinder__Cylinder(struct Cylinder* p0, int p1, int p2, double p3, double p4);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__3(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* p0);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
extern struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ Point__getName_abi_cxx11____const(struct Point* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void Point__print___const(struct Point* p0);
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ Circle__getName_abi_cxx11____const(struct Circle* p0);
extern void Circle__print___const(struct Circle* p0);
extern struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ Cylinder__getName_abi_cxx11____const(struct Cylinder* p0);
extern void Cylinder__print___const(struct Cylinder* p0);
void std__allocator_Shape____allocator_2(struct std__allocator_Shape___* p0);
void std__vector_Shape___std__allocator_Shape______vector(struct std__vector_Shape____std__allocator_Shape____* p0, unsigned long p1, struct std__allocator_Shape___* p2);
void std__allocator_Shape_____allocator(struct std__allocator_Shape___* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
struct Shape** std__vector_Shape___std__allocator_Shape______operator__(struct std__vector_Shape____std__allocator_Shape____* p0, unsigned long p1);
unsigned long std__vector_Shape___std__allocator_Shape______size___const(struct std__vector_Shape____std__allocator_Shape____* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_double_(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
void virtualViaPointer(struct Shape* p0);
void virtualViaReference(struct Shape* p0);
void std__vector_Shape___std__allocator_Shape_______vector(struct std__vector_Shape____std__allocator_Shape____* p0);
int main();
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std____is_constant_evaluated();
extern void *malloc(unsigned long);
extern void free(void*);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_char___deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void std____new_allocator_Shape______new_allocator_2(struct std____new_allocator_Shape___* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_Shape___std__allocator_Shape_______S_max_size(struct std__allocator_Shape___* p0);
void std__allocator_Shape____allocator(struct std__allocator_Shape___* p0, struct std__allocator_Shape___* p1);
extern void std____throw_length_error(char* p0);
unsigned long std__vector_Shape___std__allocator_Shape_______S_check_init_len(unsigned long p0, struct std__allocator_Shape___* p1);
void std___Vector_base_Shape___std__allocator_Shape_______Vector_impl___Vector_impl(struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl* p0, struct std__allocator_Shape___* p1);
extern void std____throw_bad_array_new_length();
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_Shape_____M_max_size___const(struct std____new_allocator_Shape___* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
struct Shape** std____new_allocator_Shape____allocate(struct std____new_allocator_Shape___* p0, unsigned long p1, void* p2);
struct Shape** std__allocator_Shape____allocate(struct std__allocator_Shape___* p0, unsigned long p1);
struct Shape** std__allocator_traits_std__allocator_Shape______allocate(struct std__allocator_Shape___* p0, unsigned long p1);
struct Shape** std___Vector_base_Shape___std__allocator_Shape_______M_allocate(struct std___Vector_base_Shape____std__allocator_Shape____* p0, unsigned long p1);
void std___Vector_base_Shape___std__allocator_Shape_______M_create_storage(struct std___Vector_base_Shape____std__allocator_Shape____* p0, unsigned long p1);
void std___Vector_base_Shape___std__allocator_Shape_______Vector_impl____Vector_impl(struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl* p0);
void std___Vector_base_Shape___std__allocator_Shape_______Vector_base(struct std___Vector_base_Shape____std__allocator_Shape____* p0, unsigned long p1, struct std__allocator_Shape___* p2);
_Bool std__is_constant_evaluated();
void std___UninitDestroyGuard_Shape____void____UninitDestroyGuard(struct std___UninitDestroyGuard_Shape_____void_* p0, struct Shape*** p1);
struct Shape** _ZSt12construct_atIP5ShapeJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(struct Shape** p0);
void void_std___Construct_Shape__(struct Shape** p0);
void std___UninitDestroyGuard_Shape____void___release(struct std___UninitDestroyGuard_Shape_____void_* p0);
void std___UninitDestroyGuard_Shape____void_____UninitDestroyGuard(struct std___UninitDestroyGuard_Shape_____void_* p0);
struct Shape** Shape___std____uninitialized_default_n_1_false_____uninit_default_n_Shape____unsigned_long_(struct Shape** p0, unsigned long p1);
void void_std____fill_a1_Shape____Shape__(struct Shape** p0, struct Shape** p1, struct Shape** p2);
void void_std____fill_a_Shape____Shape__(struct Shape** p0, struct Shape** p1, struct Shape** p2);
struct Shape** Shape___std____fill_n_a_Shape____unsigned_long__Shape__(struct Shape** p0, unsigned long p1, struct Shape** p2, struct std__random_access_iterator_tag p3);
unsigned long std____size_to_integer(unsigned long p0);
struct std__random_access_iterator_tag std__iterator_traits_Shape_____iterator_category_std____iterator_category_Shape___(struct Shape*** p0);
struct Shape** Shape___std__fill_n_Shape____unsigned_long__Shape__(struct Shape** p0, unsigned long p1, struct Shape** p2);
struct Shape** Shape___std____uninitialized_default_n_1_true_____uninit_default_n_Shape____unsigned_long_(struct Shape** p0, unsigned long p1);
struct Shape** Shape___std____uninitialized_default_n_Shape____unsigned_long_(struct Shape** p0, unsigned long p1);
struct Shape** Shape___std____uninitialized_default_n_a_Shape____unsigned_long__Shape__(struct Shape** p0, unsigned long p1, struct std__allocator_Shape___* p2);
struct std__allocator_Shape___* std___Vector_base_Shape___std__allocator_Shape_______M_get_Tp_allocator(struct std___Vector_base_Shape____std__allocator_Shape____* p0);
void std__vector_Shape___std__allocator_Shape_______M_default_initialize(struct std__vector_Shape____std__allocator_Shape____* p0, unsigned long p1);
void std____new_allocator_Shape____deallocate(struct std____new_allocator_Shape___* p0, struct Shape** p1, unsigned long p2);
void std__allocator_Shape____deallocate(struct std__allocator_Shape___* p0, struct Shape** p1, unsigned long p2);
void std__allocator_traits_std__allocator_Shape______deallocate(struct std__allocator_Shape___* p0, struct Shape** p1, unsigned long p2);
void std___Vector_base_Shape___std__allocator_Shape_______M_deallocate(struct std___Vector_base_Shape____std__allocator_Shape____* p0, struct Shape** p1, unsigned long p2);
void std___Vector_base_Shape___std__allocator_Shape________Vector_base(struct std___Vector_base_Shape____std__allocator_Shape____* p0);
void std____new_allocator_Shape______new_allocator(struct std____new_allocator_Shape___* p0, struct std____new_allocator_Shape___* p1);
void std___Vector_base_Shape___std__allocator_Shape_______Vector_impl_data___Vector_impl_data(struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data* p0);
void void_std__destroy_at_Shape__(struct Shape** p0);
void void_std___Destroy_Shape___(struct Shape** p0, struct Shape** p1);
void void_std___Destroy_Shape____Shape__(struct Shape** p0, struct Shape** p1, struct std__allocator_Shape___* p2);

// function: _ZNSt8ios_base9precisionEl
long std__ios_base__precision(struct std__ios_base* v0, long v1) {
bb2:
  struct std__ios_base* this3;
  long __prec4;
  long __retval5;
  long __old6;
  this3 = v0;
  __prec4 = v1;
  struct std__ios_base* t7 = this3;
  long t8 = t7->_M_precision;
  __old6 = t8;
  long t9 = __prec4;
  t7->_M_precision = t9;
  long t10 = __old6;
  __retval5 = t10;
  long t11 = __retval5;
  return t11;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v12, struct std___Setprecision v13) {
bb14:
  struct std__basic_ostream_char__std__char_traits_char__* __os15;
  struct std___Setprecision __f16;
  struct std__basic_ostream_char__std__char_traits_char__* __retval17;
  __os15 = v12;
  __f16 = v13;
  struct std__basic_ostream_char__std__char_traits_char__* t18 = __os15;
  void** v19 = (void**)t18;
  void* v20 = *((void**)v19);
  unsigned char* cast21 = (unsigned char*)v20;
  long c22 = -24;
  unsigned char* ptr23 = &(cast21)[c22];
  long* cast24 = (long*)ptr23;
  long t25 = *cast24;
  unsigned char* cast26 = (unsigned char*)t18;
  unsigned char* ptr27 = &(cast26)[t25];
  struct std__basic_ostream_char__std__char_traits_char__* cast28 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr27;
  struct std__ios_base* cast29 = (struct std__ios_base*)cast28;
  int t30 = __f16._M_n;
  long cast31 = (long)t30;
  long r32 = std__ios_base__precision(cast29, cast31);
  struct std__basic_ostream_char__std__char_traits_char__* t33 = __os15;
  __retval17 = t33;
  struct std__basic_ostream_char__std__char_traits_char__* t34 = __retval17;
  return t34;
}

// function: _ZNSolsEPFRSt8ios_baseS0_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* v35, void* v36) {
bb37:
  struct std__basic_ostream_char__std__char_traits_char__* this38;
  void* __pf39;
  struct std__basic_ostream_char__std__char_traits_char__* __retval40;
  this38 = v35;
  __pf39 = v36;
  struct std__basic_ostream_char__std__char_traits_char__* t41 = this38;
  void* t42 = __pf39;
  void** v43 = (void**)t41;
  void* v44 = *((void**)v43);
  unsigned char* cast45 = (unsigned char*)v44;
  long c46 = -24;
  unsigned char* ptr47 = &(cast45)[c46];
  long* cast48 = (long*)ptr47;
  long t49 = *cast48;
  unsigned char* cast50 = (unsigned char*)t41;
  unsigned char* ptr51 = &(cast50)[t49];
  struct std__basic_ostream_char__std__char_traits_char__* cast52 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr51;
  struct std__ios_base* cast53 = (struct std__ios_base*)cast52;
  struct std__ios_base* r54 = ((struct std__ios_base* (*)(struct std__ios_base*))t42)(cast53);
  __retval40 = t41;
  struct std__basic_ostream_char__std__char_traits_char__* t55 = __retval40;
  return t55;
}

// function: _ZStaNRSt13_Ios_FmtflagsS_
int* std__operator__(int* v56, int v57) {
bb58:
  int* __a59;
  int __b60;
  int* __retval61;
  __a59 = v56;
  __b60 = v57;
  int* t62 = __a59;
  int t63 = *t62;
  int t64 = __b60;
  int r65 = std__operator_(t63, t64);
  int* t66 = __a59;
  *t66 = r65;
  __retval61 = t66;
  int* t67 = __retval61;
  return t67;
}

// function: _ZStcoSt13_Ios_Fmtflags
int std__operator__2(int v68) {
bb69:
  int __a70;
  int __retval71;
  __a70 = v68;
  int t72 = __a70;
  int u73 = ~t72;
  __retval71 = u73;
  int t74 = __retval71;
  return t74;
}

// function: _ZStorSt13_Ios_FmtflagsS_
int std__operator__4(int v75, int v76) {
bb77:
  int __a78;
  int __b79;
  int __retval80;
  __a78 = v75;
  __b79 = v76;
  int t81 = __a78;
  int t82 = __b79;
  int b83 = t81 | t82;
  __retval80 = b83;
  int t84 = __retval80;
  return t84;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* std__operator___2(int* v85, int v86) {
bb87:
  int* __a88;
  int __b89;
  int* __retval90;
  __a88 = v85;
  __b89 = v86;
  int* t91 = __a88;
  int t92 = *t91;
  int t93 = __b89;
  int r94 = std__operator__4(t92, t93);
  int* t95 = __a88;
  *t95 = r94;
  __retval90 = t95;
  int* t96 = __retval90;
  return t96;
}

// function: _ZStanSt13_Ios_FmtflagsS_
int std__operator_(int v97, int v98) {
bb99:
  int __a100;
  int __b101;
  int __retval102;
  __a100 = v97;
  __b101 = v98;
  int t103 = __a100;
  int t104 = __b101;
  int b105 = t103 & t104;
  __retval102 = b105;
  int t106 = __retval102;
  return t106;
}

// function: _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
int std__ios_base__setf(struct std__ios_base* v107, int v108, int v109) {
bb110:
  struct std__ios_base* this111;
  int __fmtfl112;
  int __mask113;
  int __retval114;
  int __old115;
  this111 = v107;
  __fmtfl112 = v108;
  __mask113 = v109;
  struct std__ios_base* t116 = this111;
  int t117 = t116->_M_flags;
  __old115 = t117;
  int t118 = __mask113;
  int r119 = std__operator__2(t118);
  int* r120 = std__operator__(&t116->_M_flags, r119);
  int t121 = __fmtfl112;
  int t122 = __mask113;
  int r123 = std__operator_(t121, t122);
  int* r124 = std__operator___2(&t116->_M_flags, r123);
  int t125 = __old115;
  __retval114 = t125;
  int t126 = __retval114;
  return t126;
}

// function: _ZSt5fixedRSt8ios_base
struct std__ios_base* std__fixed(struct std__ios_base* v127) {
bb128:
  struct std__ios_base* __base129;
  struct std__ios_base* __retval130;
  __base129 = v127;
  struct std__ios_base* t131 = __base129;
  int t132 = _ZNSt8ios_base5fixedE_const;
  int t133 = _ZNSt8ios_base10floatfieldE_const;
  int r134 = std__ios_base__setf(t131, t132, t133);
  struct std__ios_base* t135 = __base129;
  __retval130 = t135;
  struct std__ios_base* t136 = __retval130;
  return t136;
}

// function: _ZSt12setprecisioni
struct std___Setprecision std__setprecision(int v137) {
bb138:
  int __n139;
  struct std___Setprecision __retval140;
  __n139 = v137;
  int t141 = __n139;
  __retval140._M_n = t141;
  struct std___Setprecision t142 = __retval140;
  return t142;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__3(int v143, int v144) {
bb145:
  int __a146;
  int __b147;
  int __retval148;
  __a146 = v143;
  __b147 = v144;
  int t149 = __a146;
  int t150 = __b147;
  int b151 = t149 | t150;
  __retval148 = b151;
  int t152 = __retval148;
  return t152;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v153) {
bb154:
  struct std__basic_ios_char__std__char_traits_char__* this155;
  int __retval156;
  this155 = v153;
  struct std__basic_ios_char__std__char_traits_char__* t157 = this155;
  struct std__ios_base* base158 = (struct std__ios_base*)((char *)t157 + 0);
  int t159 = base158->_M_streambuf_state;
  __retval156 = t159;
  int t160 = __retval156;
  return t160;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v161, int v162) {
bb163:
  struct std__basic_ios_char__std__char_traits_char__* this164;
  int __state165;
  this164 = v161;
  __state165 = v162;
  struct std__basic_ios_char__std__char_traits_char__* t166 = this164;
  int r167 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t166);
  int t168 = __state165;
  int r169 = std__operator__3(r167, t168);
  std__basic_ios_char__std__char_traits_char_____clear(t166, r169);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v170, char* v171) {
bb172:
  char* __c1173;
  char* __c2174;
  _Bool __retval175;
  __c1173 = v170;
  __c2174 = v171;
  char* t176 = __c1173;
  char t177 = *t176;
  int cast178 = (int)t177;
  char* t179 = __c2174;
  char t180 = *t179;
  int cast181 = (int)t180;
  _Bool c182 = ((cast178 == cast181)) ? 1 : 0;
  __retval175 = c182;
  _Bool t183 = __retval175;
  return t183;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v184) {
bb185:
  char* __p186;
  unsigned long __retval187;
  unsigned long __i188;
  __p186 = v184;
  unsigned long c189 = 0;
  __i188 = c189;
    char ref_tmp0190;
    while (1) {
      unsigned long t191 = __i188;
      char* t192 = __p186;
      char* ptr193 = &(t192)[t191];
      char c194 = 0;
      ref_tmp0190 = c194;
      _Bool r195 = __gnu_cxx__char_traits_char___eq(ptr193, &ref_tmp0190);
      _Bool u196 = !r195;
      if (!u196) break;
      unsigned long t197 = __i188;
      unsigned long u198 = t197 + 1;
      __i188 = u198;
    }
  unsigned long t199 = __i188;
  __retval187 = t199;
  unsigned long t200 = __retval187;
  return t200;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v201) {
bb202:
  char* __s203;
  unsigned long __retval204;
  __s203 = v201;
    _Bool r205 = std____is_constant_evaluated();
    if (r205) {
      char* t206 = __s203;
      unsigned long r207 = __gnu_cxx__char_traits_char___length(t206);
      __retval204 = r207;
      unsigned long t208 = __retval204;
      return t208;
    }
  char* t209 = __s203;
  unsigned long r210 = strlen(t209);
  __retval204 = r210;
  unsigned long t211 = __retval204;
  return t211;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v212, char* v213) {
bb214:
  struct std__basic_ostream_char__std__char_traits_char__* __out215;
  char* __s216;
  struct std__basic_ostream_char__std__char_traits_char__* __retval217;
  __out215 = v212;
  __s216 = v213;
    char* t218 = __s216;
    _Bool cast219 = (_Bool)t218;
    _Bool u220 = !cast219;
    if (u220) {
      struct std__basic_ostream_char__std__char_traits_char__* t221 = __out215;
      void** v222 = (void**)t221;
      void* v223 = *((void**)v222);
      unsigned char* cast224 = (unsigned char*)v223;
      long c225 = -24;
      unsigned char* ptr226 = &(cast224)[c225];
      long* cast227 = (long*)ptr226;
      long t228 = *cast227;
      unsigned char* cast229 = (unsigned char*)t221;
      unsigned char* ptr230 = &(cast229)[t228];
      struct std__basic_ostream_char__std__char_traits_char__* cast231 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr230;
      struct std__basic_ios_char__std__char_traits_char__* cast232 = (struct std__basic_ios_char__std__char_traits_char__*)cast231;
      int t233 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast232, t233);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t234 = __out215;
      char* t235 = __s216;
      char* t236 = __s216;
      unsigned long r237 = std__char_traits_char___length(t236);
      long cast238 = (long)r237;
      struct std__basic_ostream_char__std__char_traits_char__* r239 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t234, t235, cast238);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t240 = __out215;
  __retval217 = t240;
  struct std__basic_ostream_char__std__char_traits_char__* t241 = __retval217;
  return t241;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v242) {
bb243:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this244;
  char* __retval245;
  this244 = v242;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t246 = this244;
  char* r247 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t246);
  __retval245 = r247;
  char* t248 = __retval245;
  return t248;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v249) {
bb250:
  struct std__allocator_char_* __a251;
  unsigned long __retval252;
  __a251 = v249;
  unsigned long c253 = -1;
  unsigned long c254 = 1;
  unsigned long b255 = c253 / c254;
  __retval252 = b255;
  unsigned long t256 = __retval252;
  return t256;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v257) {
bb258:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this259;
  struct std__allocator_char_* __retval260;
  this259 = v257;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t261 = this259;
  struct std__allocator_char_* base262 = (struct std__allocator_char_*)((char *)&(t261->_M_dataplus) + 0);
  __retval260 = base262;
  struct std__allocator_char_* t263 = __retval260;
  return t263;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v264) {
bb265:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this266;
  unsigned long __retval267;
  unsigned long __diffmax268;
  unsigned long __allocmax269;
  this266 = v264;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t270 = this266;
  unsigned long c271 = 9223372036854775807;
  __diffmax268 = c271;
  struct std__allocator_char_* r272 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t270);
  unsigned long r273 = std__allocator_traits_std__allocator_char_____max_size(r272);
  __allocmax269 = r273;
  unsigned long* r274 = unsigned_long_const__std__min_unsigned_long_(&__diffmax268, &__allocmax269);
  unsigned long t275 = *r274;
  unsigned long c276 = 1;
  unsigned long b277 = t275 - c276;
  __retval267 = b277;
  unsigned long t278 = __retval267;
  return t278;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v279) {
bb280:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this281;
  unsigned long __retval282;
  unsigned long __sz283;
  this281 = v279;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t284 = this281;
  unsigned long t285 = t284->_M_string_length;
  __sz283 = t285;
    unsigned long t286 = __sz283;
    unsigned long r287 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t284);
    _Bool c288 = ((t286 > r287)) ? 1 : 0;
    if (c288) {
      __builtin_unreachable();
    }
  unsigned long t289 = __sz283;
  __retval282 = t289;
  unsigned long t290 = __retval282;
  return t290;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v291, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v292) {
bb293:
  struct std__basic_ostream_char__std__char_traits_char__* __os294;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str295;
  struct std__basic_ostream_char__std__char_traits_char__* __retval296;
  __os294 = v291;
  __str295 = v292;
  struct std__basic_ostream_char__std__char_traits_char__* t297 = __os294;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t298 = __str295;
  char* r299 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t298);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t300 = __str295;
  unsigned long r301 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t300);
  long cast302 = (long)r301;
  struct std__basic_ostream_char__std__char_traits_char__* r303 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t297, r299, cast302);
  __retval296 = r303;
  struct std__basic_ostream_char__std__char_traits_char__* t304 = __retval296;
  return t304;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v305) {
bb306:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this307;
  this307 = v305;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t308 = this307;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t308);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t308->_M_dataplus);
  }
  return;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v309) {
bb310:
  struct std__ios_base* this311;
  long __retval312;
  this311 = v309;
  struct std__ios_base* t313 = this311;
  long t314 = t313->_M_width;
  __retval312 = t314;
  long t315 = __retval312;
  return t315;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v316, char v317) {
bb318:
  struct std__basic_ostream_char__std__char_traits_char__* __out319;
  char __c320;
  struct std__basic_ostream_char__std__char_traits_char__* __retval321;
  __out319 = v316;
  __c320 = v317;
    struct std__basic_ostream_char__std__char_traits_char__* t322 = __out319;
    void** v323 = (void**)t322;
    void* v324 = *((void**)v323);
    unsigned char* cast325 = (unsigned char*)v324;
    long c326 = -24;
    unsigned char* ptr327 = &(cast325)[c326];
    long* cast328 = (long*)ptr327;
    long t329 = *cast328;
    unsigned char* cast330 = (unsigned char*)t322;
    unsigned char* ptr331 = &(cast330)[t329];
    struct std__basic_ostream_char__std__char_traits_char__* cast332 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr331;
    struct std__ios_base* cast333 = (struct std__ios_base*)cast332;
    long r334 = std__ios_base__width___const(cast333);
    long c335 = 0;
    _Bool c336 = ((r334 != c335)) ? 1 : 0;
    if (c336) {
      struct std__basic_ostream_char__std__char_traits_char__* t337 = __out319;
      long c338 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r339 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t337, &__c320, c338);
      __retval321 = r339;
      struct std__basic_ostream_char__std__char_traits_char__* t340 = __retval321;
      return t340;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t341 = __out319;
  char t342 = __c320;
  struct std__basic_ostream_char__std__char_traits_char__* r343 = std__ostream__put(t341, t342);
  struct std__basic_ostream_char__std__char_traits_char__* t344 = __out319;
  __retval321 = t344;
  struct std__basic_ostream_char__std__char_traits_char__* t345 = __retval321;
  return t345;
}

// function: _ZNSaIP5ShapeEC2Ev
void std__allocator_Shape____allocator_2(struct std__allocator_Shape___* v346) {
bb347:
  struct std__allocator_Shape___* this348;
  this348 = v346;
  struct std__allocator_Shape___* t349 = this348;
  struct std____new_allocator_Shape___* base350 = (struct std____new_allocator_Shape___*)((char *)t349 + 0);
  std____new_allocator_Shape______new_allocator_2(base350);
  return;
}

// function: _ZNSt6vectorIP5ShapeSaIS1_EEC2EmRKS2_
void std__vector_Shape___std__allocator_Shape______vector(struct std__vector_Shape____std__allocator_Shape____* v351, unsigned long v352, struct std__allocator_Shape___* v353) {
bb354:
  struct std__vector_Shape____std__allocator_Shape____* this355;
  unsigned long __n356;
  struct std__allocator_Shape___* __a357;
  this355 = v351;
  __n356 = v352;
  __a357 = v353;
  struct std__vector_Shape____std__allocator_Shape____* t358 = this355;
  struct std___Vector_base_Shape____std__allocator_Shape____* base359 = (struct std___Vector_base_Shape____std__allocator_Shape____*)((char *)t358 + 0);
  unsigned long t360 = __n356;
  struct std__allocator_Shape___* t361 = __a357;
  unsigned long r362 = std__vector_Shape___std__allocator_Shape_______S_check_init_len(t360, t361);
  struct std__allocator_Shape___* t363 = __a357;
  std___Vector_base_Shape___std__allocator_Shape_______Vector_base(base359, r362, t363);
    unsigned long t364 = __n356;
    std__vector_Shape___std__allocator_Shape_______M_default_initialize(t358, t364);
  return;
}

// function: _ZNSaIP5ShapeED2Ev
void std__allocator_Shape_____allocator(struct std__allocator_Shape___* v365) {
bb366:
  struct std__allocator_Shape___* this367;
  this367 = v365;
  struct std__allocator_Shape___* t368 = this367;
  return;
}

// function: _ZNSt6vectorIP5ShapeSaIS1_EEixEm
struct Shape** std__vector_Shape___std__allocator_Shape______operator__(struct std__vector_Shape____std__allocator_Shape____* v369, unsigned long v370) {
bb371:
  struct std__vector_Shape____std__allocator_Shape____* this372;
  unsigned long __n373;
  struct Shape** __retval374;
  this372 = v369;
  __n373 = v370;
  struct std__vector_Shape____std__allocator_Shape____* t375 = this372;
    do {
          unsigned long t376 = __n373;
          unsigned long r377 = std__vector_Shape___std__allocator_Shape______size___const(t375);
          _Bool c378 = ((t376 < r377)) ? 1 : 0;
          _Bool u379 = !c378;
          if (u379) {
            char* cast380 = (char*)&(_str_8);
            int c381 = 1263;
            char* cast382 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIP5ShapeSaIS1_EEixEm);
            char* cast383 = (char*)&(_str_9);
            std____glibcxx_assert_fail(cast380, c381, cast382, cast383);
          }
      _Bool c384 = 0;
      if (!c384) break;
    } while (1);
  struct std___Vector_base_Shape____std__allocator_Shape____* base385 = (struct std___Vector_base_Shape____std__allocator_Shape____*)((char *)t375 + 0);
  struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data* base386 = (struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data*)((char *)&(base385->_M_impl) + 0);
  struct Shape** t387 = base386->_M_start;
  unsigned long t388 = __n373;
  struct Shape** ptr389 = &(t387)[t388];
  __retval374 = ptr389;
  struct Shape** t390 = __retval374;
  return t390;
}

// function: _ZNKSt6vectorIP5ShapeSaIS1_EE4sizeEv
unsigned long std__vector_Shape___std__allocator_Shape______size___const(struct std__vector_Shape____std__allocator_Shape____* v391) {
bb392:
  struct std__vector_Shape____std__allocator_Shape____* this393;
  unsigned long __retval394;
  long __dif395;
  this393 = v391;
  struct std__vector_Shape____std__allocator_Shape____* t396 = this393;
  struct std___Vector_base_Shape____std__allocator_Shape____* base397 = (struct std___Vector_base_Shape____std__allocator_Shape____*)((char *)t396 + 0);
  struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data* base398 = (struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data*)((char *)&(base397->_M_impl) + 0);
  struct Shape** t399 = base398->_M_finish;
  struct std___Vector_base_Shape____std__allocator_Shape____* base400 = (struct std___Vector_base_Shape____std__allocator_Shape____*)((char *)t396 + 0);
  struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data* base401 = (struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data*)((char *)&(base400->_M_impl) + 0);
  struct Shape** t402 = base401->_M_start;
  long diff403 = t399 - t402;
  __dif395 = diff403;
    long t404 = __dif395;
    long c405 = 0;
    _Bool c406 = ((t404 < c405)) ? 1 : 0;
    if (c406) {
      __builtin_unreachable();
    }
  long t407 = __dif395;
  unsigned long cast408 = (unsigned long)t407;
  __retval394 = cast408;
  unsigned long t409 = __retval394;
  return t409;
}

// function: _ZNSolsEd
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v410, double v411) {
bb412:
  struct std__basic_ostream_char__std__char_traits_char__* this413;
  double __f414;
  struct std__basic_ostream_char__std__char_traits_char__* __retval415;
  this413 = v410;
  __f414 = v411;
  struct std__basic_ostream_char__std__char_traits_char__* t416 = this413;
  double t417 = __f414;
  struct std__basic_ostream_char__std__char_traits_char__* r418 = std__ostream__std__ostream___M_insert_double_(t416, t417);
  __retval415 = r418;
  struct std__basic_ostream_char__std__char_traits_char__* t419 = __retval415;
  return t419;
}

// function: _Z17virtualViaPointerPK5Shape
void virtualViaPointer(struct Shape* v420) {
bb421:
  struct Shape* baseClassPtr422;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp0423;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup424;
  baseClassPtr422 = v420;
  struct Shape* t425 = baseClassPtr422;
  void** v426 = (void**)t425;
  void* v427 = *((void**)v426);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ vcall430 = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__)__VERIFIER_virtual_call_struct_std_cxx11_basic_string_char_std_char_traits_char_std_allocator_char(t425, 2);
  ref_tmp0423 = vcall430;
    struct std__basic_ostream_char__std__char_traits_char__* r431 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &ref_tmp0423);
    char* cast432 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r433 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r431, cast432);
    tmp_exprcleanup424 = r433;
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0423);
  }
  struct std__basic_ostream_char__std__char_traits_char__* t434 = tmp_exprcleanup424;
  struct Shape* t435 = baseClassPtr422;
  void** v436 = (void**)t435;
  void* v437 = *((void**)v436);
  __VERIFIER_virtual_call_void(t435, 3);
  char* cast440 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r441 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast440);
  struct Shape* t442 = baseClassPtr422;
  void** v443 = (void**)t442;
  void* v444 = *((void**)v443);
  double vcall447 = (double)__VERIFIER_virtual_call_double(t442, 0);
  struct std__basic_ostream_char__std__char_traits_char__* r448 = std__ostream__operator__(r441, vcall447);
  char* cast449 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* r450 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r448, cast449);
  struct Shape* t451 = baseClassPtr422;
  void** v452 = (void**)t451;
  void* v453 = *((void**)v452);
  double vcall456 = (double)__VERIFIER_virtual_call_double(t451, 1);
  struct std__basic_ostream_char__std__char_traits_char__* r457 = std__ostream__operator__(r450, vcall456);
  char* cast458 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r459 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r457, cast458);
  return;
}

// function: _Z19virtualViaReferenceRK5Shape
void virtualViaReference(struct Shape* v460) {
bb461:
  struct Shape* baseClassRef462;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp0463;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup464;
  baseClassRef462 = v460;
  struct Shape* t465 = baseClassRef462;
  void** v466 = (void**)t465;
  void* v467 = *((void**)v466);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ vcall470 = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__)__VERIFIER_virtual_call_struct_std_cxx11_basic_string_char_std_char_traits_char_std_allocator_char(t465, 2);
  ref_tmp0463 = vcall470;
    struct std__basic_ostream_char__std__char_traits_char__* r471 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &ref_tmp0463);
    char* cast472 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r473 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r471, cast472);
    tmp_exprcleanup464 = r473;
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0463);
  }
  struct std__basic_ostream_char__std__char_traits_char__* t474 = tmp_exprcleanup464;
  struct Shape* t475 = baseClassRef462;
  void** v476 = (void**)t475;
  void* v477 = *((void**)v476);
  __VERIFIER_virtual_call_void(t475, 3);
  char* cast480 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r481 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast480);
  struct Shape* t482 = baseClassRef462;
  void** v483 = (void**)t482;
  void* v484 = *((void**)v483);
  double vcall487 = (double)__VERIFIER_virtual_call_double(t482, 0);
  struct std__basic_ostream_char__std__char_traits_char__* r488 = std__ostream__operator__(r481, vcall487);
  char* cast489 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* r490 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r488, cast489);
  struct Shape* t491 = baseClassRef462;
  void** v492 = (void**)t491;
  void* v493 = *((void**)v492);
  double vcall496 = (double)__VERIFIER_virtual_call_double(t491, 1);
  struct std__basic_ostream_char__std__char_traits_char__* r497 = std__ostream__operator__(r490, vcall496);
  char* cast498 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r499 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r497, cast498);
  return;
}

// function: _ZNSt6vectorIP5ShapeSaIS1_EED2Ev
void std__vector_Shape___std__allocator_Shape_______vector(struct std__vector_Shape____std__allocator_Shape____* v500) {
bb501:
  struct std__vector_Shape____std__allocator_Shape____* this502;
  this502 = v500;
  struct std__vector_Shape____std__allocator_Shape____* t503 = this502;
    struct std___Vector_base_Shape____std__allocator_Shape____* base504 = (struct std___Vector_base_Shape____std__allocator_Shape____*)((char *)t503 + 0);
    struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data* base505 = (struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data*)((char *)&(base504->_M_impl) + 0);
    struct Shape** t506 = base505->_M_start;
    struct std___Vector_base_Shape____std__allocator_Shape____* base507 = (struct std___Vector_base_Shape____std__allocator_Shape____*)((char *)t503 + 0);
    struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data* base508 = (struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data*)((char *)&(base507->_M_impl) + 0);
    struct Shape** t509 = base508->_M_finish;
    struct std___Vector_base_Shape____std__allocator_Shape____* base510 = (struct std___Vector_base_Shape____std__allocator_Shape____*)((char *)t503 + 0);
    struct std__allocator_Shape___* r511 = std___Vector_base_Shape___std__allocator_Shape_______M_get_Tp_allocator(base510);
    void_std___Destroy_Shape____Shape__(t506, t509, r511);
  {
    struct std___Vector_base_Shape____std__allocator_Shape____* base512 = (struct std___Vector_base_Shape____std__allocator_Shape____*)((char *)t503 + 0);
    std___Vector_base_Shape___std__allocator_Shape________Vector_base(base512);
  }
  return;
}

// function: main
int main() {
bb513:
  int __retval514;
  struct std___Setprecision agg_tmp0515;
  struct Point point516;
  struct Circle circle517;
  struct Cylinder cylinder518;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp0519;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup520;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp1521;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup522;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp2523;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup524;
  struct std__vector_Shape____std__allocator_Shape____ shapeVector525;
  struct std__allocator_Shape___ ref_tmp3526;
  int c527 = 0;
  __retval514 = c527;
  struct std__basic_ostream_char__std__char_traits_char__* r528 = std__ostream__operator___std__ios_base_____(&_ZSt4cout, &std__fixed);
  int c529 = 2;
  struct std___Setprecision r530 = std__setprecision(c529);
  agg_tmp0515 = r530;
  struct std___Setprecision t531 = agg_tmp0515;
  struct std__basic_ostream_char__std__char_traits_char__* r532 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r528, t531);
  int c533 = 7;
  int c534 = 11;
  Point__Point(&point516, c533, c534);
  int c535 = 22;
  int c536 = 8;
  double c537 = 0x1.cp1;
  Circle__Circle(&circle517, c535, c536, c537);
  int c538 = 10;
  int c539 = 10;
  double c540 = 0x1.a666666666666p1;
  int c541 = 10;
  double cast542 = (double)c541;
  Cylinder__Cylinder(&cylinder518, c538, c539, c540, cast542);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r543 = Point__getName_abi_cxx11____const(&point516);
  ref_tmp0519 = r543;
    struct std__basic_ostream_char__std__char_traits_char__* r544 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &ref_tmp0519);
    char* cast545 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r546 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r544, cast545);
    tmp_exprcleanup520 = r546;
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0519);
  }
  struct std__basic_ostream_char__std__char_traits_char__* t547 = tmp_exprcleanup520;
  Point__print___const(&point516);
  char c548 = 10;
  struct std__basic_ostream_char__std__char_traits_char__* r549 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(&_ZSt4cout, c548);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r550 = Circle__getName_abi_cxx11____const(&circle517);
  ref_tmp1521 = r550;
    struct std__basic_ostream_char__std__char_traits_char__* r551 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &ref_tmp1521);
    char* cast552 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r553 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r551, cast552);
    tmp_exprcleanup522 = r553;
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp1521);
  }
  struct std__basic_ostream_char__std__char_traits_char__* t554 = tmp_exprcleanup522;
  Circle__print___const(&circle517);
  char c555 = 10;
  struct std__basic_ostream_char__std__char_traits_char__* r556 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(&_ZSt4cout, c555);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r557 = Cylinder__getName_abi_cxx11____const(&cylinder518);
  ref_tmp2523 = r557;
    struct std__basic_ostream_char__std__char_traits_char__* r558 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &ref_tmp2523);
    char* cast559 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r560 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r558, cast559);
    tmp_exprcleanup524 = r560;
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp2523);
  }
  struct std__basic_ostream_char__std__char_traits_char__* t561 = tmp_exprcleanup524;
  Cylinder__print___const(&cylinder518);
  char* cast562 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r563 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast562);
  unsigned long c564 = 3;
  std__allocator_Shape____allocator_2(&ref_tmp3526);
    std__vector_Shape___std__allocator_Shape______vector(&shapeVector525, c564, &ref_tmp3526);
  {
    std__allocator_Shape_____allocator(&ref_tmp3526);
  }
    struct Shape* base565 = (struct Shape*)((char *)&(point516) + 0);
    unsigned long c566 = 0;
    struct Shape** r567 = std__vector_Shape___std__allocator_Shape______operator__(&shapeVector525, c566);
    *r567 = base565;
    struct Shape* base568 = (struct Shape*)((char *)&(circle517) + 0);
    unsigned long c569 = 1;
    struct Shape** r570 = std__vector_Shape___std__allocator_Shape______operator__(&shapeVector525, c569);
    *r570 = base568;
    struct Shape* base571 = (struct Shape*)((char *)&(cylinder518) + 0);
    unsigned long c572 = 2;
    struct Shape** r573 = std__vector_Shape___std__allocator_Shape______operator__(&shapeVector525, c572);
    *r573 = base571;
    char* cast574 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r575 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast574);
    char* cast576 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r577 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r575, cast576);
      int i578;
      int c579 = 0;
      i578 = c579;
      while (1) {
        int t581 = i578;
        unsigned long cast582 = (unsigned long)t581;
        unsigned long r583 = std__vector_Shape___std__allocator_Shape______size___const(&shapeVector525);
        _Bool c584 = ((cast582 < r583)) ? 1 : 0;
        if (!c584) break;
        int t585 = i578;
        unsigned long cast586 = (unsigned long)t585;
        struct Shape** r587 = std__vector_Shape___std__allocator_Shape______operator__(&shapeVector525, cast586);
        struct Shape* t588 = *r587;
        virtualViaPointer(t588);
      for_step580: ;
        int t589 = i578;
        int u590 = t589 + 1;
        i578 = u590;
      }
    char* cast591 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r592 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast591);
    char* cast593 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r594 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r592, cast593);
      int j595;
      int c596 = 0;
      j595 = c596;
      while (1) {
        int t598 = j595;
        unsigned long cast599 = (unsigned long)t598;
        unsigned long r600 = std__vector_Shape___std__allocator_Shape______size___const(&shapeVector525);
        _Bool c601 = ((cast599 < r600)) ? 1 : 0;
        if (!c601) break;
        int t602 = j595;
        unsigned long cast603 = (unsigned long)t602;
        struct Shape** r604 = std__vector_Shape___std__allocator_Shape______operator__(&shapeVector525, cast603);
        struct Shape* t605 = *r604;
        virtualViaReference(t605);
      for_step597: ;
        int t606 = j595;
        int u607 = t606 + 1;
        j595 = u607;
      }
    int c608 = 0;
    __retval514 = c608;
    int t609 = __retval514;
    int ret_val610 = t609;
    {
      std__vector_Shape___std__allocator_Shape_______vector(&shapeVector525);
    }
    return ret_val610;
  int t611 = __retval514;
  return t611;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v612) {
bb613:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this614;
  char* __retval615;
  this614 = v612;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t616 = this614;
  char* t617 = t616->_M_dataplus._M_p;
  __retval615 = t617;
  char* t618 = __retval615;
  return t618;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v619) {
bb620:
  char* __r621;
  char* __retval622;
  __r621 = v619;
  char* t623 = __r621;
  __retval622 = t623;
  char* t624 = __retval622;
  return t624;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v625) {
bb626:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this627;
  char* __retval628;
  this627 = v625;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t629 = this627;
  char* cast630 = (char*)&(t629->field2._M_local_buf);
  char* r631 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast630);
  __retval628 = r631;
  char* t632 = __retval628;
  return t632;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v633) {
bb634:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this635;
  _Bool __retval636;
  this635 = v633;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t637 = this635;
    char* r638 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t637);
    char* r639 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t637);
    _Bool c640 = ((r638 == r639)) ? 1 : 0;
    if (c640) {
        unsigned long t641 = t637->_M_string_length;
        unsigned long c642 = 15;
        _Bool c643 = ((t641 > c642)) ? 1 : 0;
        if (c643) {
          __builtin_unreachable();
        }
      _Bool c644 = 1;
      __retval636 = c644;
      _Bool t645 = __retval636;
      return t645;
    }
  _Bool c646 = 0;
  __retval636 = c646;
  _Bool t647 = __retval636;
  return t647;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb648:
  _Bool __retval649;
    _Bool c650 = 0;
    __retval649 = c650;
    _Bool t651 = __retval649;
    return t651;
  abort();
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v652, char* v653, unsigned long v654) {
bb655:
  struct std____new_allocator_char_* this656;
  char* __p657;
  unsigned long __n658;
  this656 = v652;
  __p657 = v653;
  __n658 = v654;
  struct std____new_allocator_char_* t659 = this656;
    unsigned long c660 = 1;
    unsigned long c661 = 16;
    _Bool c662 = ((c660 > c661)) ? 1 : 0;
    if (c662) {
      char* t663 = __p657;
      void* cast664 = (void*)t663;
      unsigned long t665 = __n658;
      unsigned long c666 = 1;
      unsigned long b667 = t665 * c666;
      unsigned long c668 = 1;
      operator_delete_3(cast664, b667, c668);
      return;
    }
  char* t669 = __p657;
  void* cast670 = (void*)t669;
  unsigned long t671 = __n658;
  unsigned long c672 = 1;
  unsigned long b673 = t671 * c672;
  operator_delete_2(cast670, b673);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v674, char* v675, unsigned long v676) {
bb677:
  struct std__allocator_char_* this678;
  char* __p679;
  unsigned long __n680;
  this678 = v674;
  __p679 = v675;
  __n680 = v676;
  struct std__allocator_char_* t681 = this678;
    _Bool r682 = std____is_constant_evaluated();
    if (r682) {
      char* t683 = __p679;
      void* cast684 = (void*)t683;
      operator_delete(cast684);
      return;
    }
  struct std____new_allocator_char_* base685 = (struct std____new_allocator_char_*)((char *)t681 + 0);
  char* t686 = __p679;
  unsigned long t687 = __n680;
  std____new_allocator_char___deallocate(base685, t686, t687);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v688, char* v689, unsigned long v690) {
bb691:
  struct std__allocator_char_* __a692;
  char* __p693;
  unsigned long __n694;
  __a692 = v688;
  __p693 = v689;
  __n694 = v690;
  struct std__allocator_char_* t695 = __a692;
  char* t696 = __p693;
  unsigned long t697 = __n694;
  std__allocator_char___deallocate(t695, t696, t697);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v698) {
bb699:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this700;
  struct std__allocator_char_* __retval701;
  this700 = v698;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t702 = this700;
  struct std__allocator_char_* base703 = (struct std__allocator_char_*)((char *)&(t702->_M_dataplus) + 0);
  __retval701 = base703;
  struct std__allocator_char_* t704 = __retval701;
  return t704;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v705, unsigned long v706) {
bb707:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this708;
  unsigned long __size709;
  this708 = v705;
  __size709 = v706;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t710 = this708;
  struct std__allocator_char_* r711 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t710);
  char* r712 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t710);
  unsigned long t713 = __size709;
  unsigned long c714 = 1;
  unsigned long b715 = t713 + c714;
  std__allocator_traits_std__allocator_char_____deallocate(r711, r712, b715);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v716) {
bb717:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this718;
  this718 = v716;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t719 = this718;
    _Bool r720 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t719);
    _Bool u721 = !r720;
    if (u721) {
      unsigned long t722 = t719->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t719, t722);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v723) {
bb724:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this725;
  this725 = v723;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t726 = this725;
  {
    struct std__allocator_char_* base727 = (struct std__allocator_char_*)((char *)t726 + 0);
    std__allocator_char____allocator(base727);
  }
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v728) {
bb729:
  struct std__allocator_char_* this730;
  this730 = v728;
  struct std__allocator_char_* t731 = this730;
  return;
}

// function: _ZNSt15__new_allocatorIP5ShapeEC2Ev
void std____new_allocator_Shape______new_allocator_2(struct std____new_allocator_Shape___* v732) {
bb733:
  struct std____new_allocator_Shape___* this734;
  this734 = v732;
  struct std____new_allocator_Shape___* t735 = this734;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v736, unsigned long* v737) {
bb738:
  unsigned long* __a739;
  unsigned long* __b740;
  unsigned long* __retval741;
  __a739 = v736;
  __b740 = v737;
    unsigned long* t742 = __b740;
    unsigned long t743 = *t742;
    unsigned long* t744 = __a739;
    unsigned long t745 = *t744;
    _Bool c746 = ((t743 < t745)) ? 1 : 0;
    if (c746) {
      unsigned long* t747 = __b740;
      __retval741 = t747;
      unsigned long* t748 = __retval741;
      return t748;
    }
  unsigned long* t749 = __a739;
  __retval741 = t749;
  unsigned long* t750 = __retval741;
  return t750;
}

// function: _ZNSt6vectorIP5ShapeSaIS1_EE11_S_max_sizeERKS2_
unsigned long std__vector_Shape___std__allocator_Shape_______S_max_size(struct std__allocator_Shape___* v751) {
bb752:
  struct std__allocator_Shape___* __a753;
  unsigned long __retval754;
  unsigned long __diffmax755;
  unsigned long __allocmax756;
  __a753 = v751;
  unsigned long c757 = 1152921504606846975;
  __diffmax755 = c757;
  unsigned long c758 = 2305843009213693951;
  __allocmax756 = c758;
  unsigned long* r759 = unsigned_long_const__std__min_unsigned_long_(&__diffmax755, &__allocmax756);
  unsigned long t760 = *r759;
  __retval754 = t760;
  unsigned long t761 = __retval754;
  return t761;
}

// function: _ZNSaIP5ShapeEC2ERKS1_
void std__allocator_Shape____allocator(struct std__allocator_Shape___* v762, struct std__allocator_Shape___* v763) {
bb764:
  struct std__allocator_Shape___* this765;
  struct std__allocator_Shape___* __a766;
  this765 = v762;
  __a766 = v763;
  struct std__allocator_Shape___* t767 = this765;
  struct std____new_allocator_Shape___* base768 = (struct std____new_allocator_Shape___*)((char *)t767 + 0);
  struct std__allocator_Shape___* t769 = __a766;
  struct std____new_allocator_Shape___* base770 = (struct std____new_allocator_Shape___*)((char *)t769 + 0);
  std____new_allocator_Shape______new_allocator(base768, base770);
  return;
}

// function: _ZNSt6vectorIP5ShapeSaIS1_EE17_S_check_init_lenEmRKS2_
unsigned long std__vector_Shape___std__allocator_Shape_______S_check_init_len(unsigned long v771, struct std__allocator_Shape___* v772) {
bb773:
  unsigned long __n774;
  struct std__allocator_Shape___* __a775;
  unsigned long __retval776;
  __n774 = v771;
  __a775 = v772;
    struct std__allocator_Shape___ ref_tmp0777;
    _Bool tmp_exprcleanup778;
    unsigned long t779 = __n774;
    struct std__allocator_Shape___* t780 = __a775;
    std__allocator_Shape____allocator(&ref_tmp0777, t780);
      unsigned long r781 = std__vector_Shape___std__allocator_Shape_______S_max_size(&ref_tmp0777);
      _Bool c782 = ((t779 > r781)) ? 1 : 0;
      tmp_exprcleanup778 = c782;
    {
      std__allocator_Shape_____allocator(&ref_tmp0777);
    }
    _Bool t783 = tmp_exprcleanup778;
    if (t783) {
      char* cast784 = (char*)&(_str_7);
      std____throw_length_error(cast784);
    }
  unsigned long t785 = __n774;
  __retval776 = t785;
  unsigned long t786 = __retval776;
  return t786;
}

// function: _ZNSt12_Vector_baseIP5ShapeSaIS1_EE12_Vector_implC2ERKS2_
void std___Vector_base_Shape___std__allocator_Shape_______Vector_impl___Vector_impl(struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl* v787, struct std__allocator_Shape___* v788) {
bb789:
  struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl* this790;
  struct std__allocator_Shape___* __a791;
  this790 = v787;
  __a791 = v788;
  struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl* t792 = this790;
  struct std__allocator_Shape___* base793 = (struct std__allocator_Shape___*)((char *)t792 + 0);
  struct std__allocator_Shape___* t794 = __a791;
  std__allocator_Shape____allocator(base793, t794);
    struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data* base795 = (struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data*)((char *)t792 + 0);
    std___Vector_base_Shape___std__allocator_Shape_______Vector_impl_data___Vector_impl_data(base795);
  return;
}

// function: _ZNKSt15__new_allocatorIP5ShapeE11_M_max_sizeEv
unsigned long std____new_allocator_Shape_____M_max_size___const(struct std____new_allocator_Shape___* v796) {
bb797:
  struct std____new_allocator_Shape___* this798;
  unsigned long __retval799;
  this798 = v796;
  struct std____new_allocator_Shape___* t800 = this798;
  unsigned long c801 = 9223372036854775807;
  unsigned long c802 = 8;
  unsigned long b803 = c801 / c802;
  __retval799 = b803;
  unsigned long t804 = __retval799;
  return t804;
}

// function: _ZNSt15__new_allocatorIP5ShapeE8allocateEmPKv
struct Shape** std____new_allocator_Shape____allocate(struct std____new_allocator_Shape___* v805, unsigned long v806, void* v807) {
bb808:
  struct std____new_allocator_Shape___* this809;
  unsigned long __n810;
  void* unnamed811;
  struct Shape** __retval812;
  this809 = v805;
  __n810 = v806;
  unnamed811 = v807;
  struct std____new_allocator_Shape___* t813 = this809;
    unsigned long t814 = __n810;
    unsigned long r815 = std____new_allocator_Shape_____M_max_size___const(t813);
    _Bool c816 = ((t814 > r815)) ? 1 : 0;
    if (c816) {
        unsigned long t817 = __n810;
        unsigned long c818 = -1;
        unsigned long c819 = 8;
        unsigned long b820 = c818 / c819;
        _Bool c821 = ((t817 > b820)) ? 1 : 0;
        if (c821) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c822 = 8;
    unsigned long c823 = 16;
    _Bool c824 = ((c822 > c823)) ? 1 : 0;
    if (c824) {
      unsigned long __al825;
      unsigned long c826 = 8;
      __al825 = c826;
      unsigned long t827 = __n810;
      unsigned long c828 = 8;
      unsigned long b829 = t827 * c828;
      unsigned long t830 = __al825;
      void* r831 = operator_new_2(b829, t830);
      struct Shape** cast832 = (struct Shape**)r831;
      __retval812 = cast832;
      struct Shape** t833 = __retval812;
      return t833;
    }
  unsigned long t834 = __n810;
  unsigned long c835 = 8;
  unsigned long b836 = t834 * c835;
  void* r837 = operator_new(b836);
  struct Shape** cast838 = (struct Shape**)r837;
  __retval812 = cast838;
  struct Shape** t839 = __retval812;
  return t839;
}

// function: _ZNSaIP5ShapeE8allocateEm
struct Shape** std__allocator_Shape____allocate(struct std__allocator_Shape___* v840, unsigned long v841) {
bb842:
  struct std__allocator_Shape___* this843;
  unsigned long __n844;
  struct Shape** __retval845;
  this843 = v840;
  __n844 = v841;
  struct std__allocator_Shape___* t846 = this843;
    _Bool r847 = std____is_constant_evaluated();
    if (r847) {
        unsigned long t848 = __n844;
        unsigned long c849 = 8;
        unsigned long ovr850;
        _Bool ovf851 = __builtin_mul_overflow(t848, c849, &ovr850);
        __n844 = ovr850;
        if (ovf851) {
          std____throw_bad_array_new_length();
        }
      unsigned long t852 = __n844;
      void* r853 = operator_new(t852);
      struct Shape** cast854 = (struct Shape**)r853;
      __retval845 = cast854;
      struct Shape** t855 = __retval845;
      return t855;
    }
  struct std____new_allocator_Shape___* base856 = (struct std____new_allocator_Shape___*)((char *)t846 + 0);
  unsigned long t857 = __n844;
  void* c858 = ((void*)0);
  struct Shape** r859 = std____new_allocator_Shape____allocate(base856, t857, c858);
  __retval845 = r859;
  struct Shape** t860 = __retval845;
  return t860;
}

// function: _ZNSt16allocator_traitsISaIP5ShapeEE8allocateERS2_m
struct Shape** std__allocator_traits_std__allocator_Shape______allocate(struct std__allocator_Shape___* v861, unsigned long v862) {
bb863:
  struct std__allocator_Shape___* __a864;
  unsigned long __n865;
  struct Shape** __retval866;
  __a864 = v861;
  __n865 = v862;
  struct std__allocator_Shape___* t867 = __a864;
  unsigned long t868 = __n865;
  struct Shape** r869 = std__allocator_Shape____allocate(t867, t868);
  __retval866 = r869;
  struct Shape** t870 = __retval866;
  return t870;
}

// function: _ZNSt12_Vector_baseIP5ShapeSaIS1_EE11_M_allocateEm
struct Shape** std___Vector_base_Shape___std__allocator_Shape_______M_allocate(struct std___Vector_base_Shape____std__allocator_Shape____* v871, unsigned long v872) {
bb873:
  struct std___Vector_base_Shape____std__allocator_Shape____* this874;
  unsigned long __n875;
  struct Shape** __retval876;
  this874 = v871;
  __n875 = v872;
  struct std___Vector_base_Shape____std__allocator_Shape____* t877 = this874;
  unsigned long t878 = __n875;
  unsigned long c879 = 0;
  _Bool c880 = ((t878 != c879)) ? 1 : 0;
  struct Shape** ternary881;
  if (c880) {
    struct std__allocator_Shape___* base882 = (struct std__allocator_Shape___*)((char *)&(t877->_M_impl) + 0);
    unsigned long t883 = __n875;
    struct Shape** r884 = std__allocator_traits_std__allocator_Shape______allocate(base882, t883);
    ternary881 = (struct Shape**)r884;
  } else {
    struct Shape** c885 = ((void*)0);
    ternary881 = (struct Shape**)c885;
  }
  __retval876 = ternary881;
  struct Shape** t886 = __retval876;
  return t886;
}

// function: _ZNSt12_Vector_baseIP5ShapeSaIS1_EE17_M_create_storageEm
void std___Vector_base_Shape___std__allocator_Shape_______M_create_storage(struct std___Vector_base_Shape____std__allocator_Shape____* v887, unsigned long v888) {
bb889:
  struct std___Vector_base_Shape____std__allocator_Shape____* this890;
  unsigned long __n891;
  this890 = v887;
  __n891 = v888;
  struct std___Vector_base_Shape____std__allocator_Shape____* t892 = this890;
  unsigned long t893 = __n891;
  struct Shape** r894 = std___Vector_base_Shape___std__allocator_Shape_______M_allocate(t892, t893);
  struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data* base895 = (struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data*)((char *)&(t892->_M_impl) + 0);
  base895->_M_start = r894;
  struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data* base896 = (struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data*)((char *)&(t892->_M_impl) + 0);
  struct Shape** t897 = base896->_M_start;
  struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data* base898 = (struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data*)((char *)&(t892->_M_impl) + 0);
  base898->_M_finish = t897;
  struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data* base899 = (struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data*)((char *)&(t892->_M_impl) + 0);
  struct Shape** t900 = base899->_M_start;
  unsigned long t901 = __n891;
  struct Shape** ptr902 = &(t900)[t901];
  struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data* base903 = (struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data*)((char *)&(t892->_M_impl) + 0);
  base903->_M_end_of_storage = ptr902;
  return;
}

// function: _ZNSt12_Vector_baseIP5ShapeSaIS1_EE12_Vector_implD2Ev
void std___Vector_base_Shape___std__allocator_Shape_______Vector_impl____Vector_impl(struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl* v904) {
bb905:
  struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl* this906;
  this906 = v904;
  struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl* t907 = this906;
  {
    struct std__allocator_Shape___* base908 = (struct std__allocator_Shape___*)((char *)t907 + 0);
    std__allocator_Shape_____allocator(base908);
  }
  return;
}

// function: _ZNSt12_Vector_baseIP5ShapeSaIS1_EEC2EmRKS2_
void std___Vector_base_Shape___std__allocator_Shape_______Vector_base(struct std___Vector_base_Shape____std__allocator_Shape____* v909, unsigned long v910, struct std__allocator_Shape___* v911) {
bb912:
  struct std___Vector_base_Shape____std__allocator_Shape____* this913;
  unsigned long __n914;
  struct std__allocator_Shape___* __a915;
  this913 = v909;
  __n914 = v910;
  __a915 = v911;
  struct std___Vector_base_Shape____std__allocator_Shape____* t916 = this913;
  struct std__allocator_Shape___* t917 = __a915;
  std___Vector_base_Shape___std__allocator_Shape_______Vector_impl___Vector_impl(&t916->_M_impl, t917);
    unsigned long t918 = __n914;
    std___Vector_base_Shape___std__allocator_Shape_______M_create_storage(t916, t918);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb919:
  _Bool __retval920;
    _Bool c921 = 0;
    __retval920 = c921;
    _Bool t922 = __retval920;
    return t922;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPP5ShapevEC2ERS2_
void std___UninitDestroyGuard_Shape____void____UninitDestroyGuard(struct std___UninitDestroyGuard_Shape_____void_* v923, struct Shape*** v924) {
bb925:
  struct std___UninitDestroyGuard_Shape_____void_* this926;
  struct Shape*** __first927;
  this926 = v923;
  __first927 = v924;
  struct std___UninitDestroyGuard_Shape_____void_* t928 = this926;
  struct Shape*** t929 = __first927;
  struct Shape** t930 = *t929;
  t928->_M_first = t930;
  struct Shape*** t931 = __first927;
  t928->_M_cur = t931;
  return;
}

// function: _ZSt12construct_atIP5ShapeJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
struct Shape** _ZSt12construct_atIP5ShapeJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(struct Shape** v932) {
bb933:
  struct Shape** __location934;
  struct Shape** __retval935;
  void* __loc936;
  __location934 = v932;
  struct Shape** t937 = __location934;
  void* cast938 = (void*)t937;
  __loc936 = cast938;
    void* t939 = __loc936;
    struct Shape** cast940 = (struct Shape**)t939;
    struct Shape* c941 = ((void*)0);
    *cast940 = c941;
    __retval935 = cast940;
    struct Shape** t942 = __retval935;
    return t942;
  abort();
}

// function: _ZSt10_ConstructIP5ShapeJEEvPT_DpOT0_
void void_std___Construct_Shape__(struct Shape** v943) {
bb944:
  struct Shape** __p945;
  __p945 = v943;
    _Bool r946 = std____is_constant_evaluated();
    if (r946) {
      struct Shape** t947 = __p945;
      struct Shape** r948 = _ZSt12construct_atIP5ShapeJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t947);
      return;
    }
  struct Shape** t949 = __p945;
  void* cast950 = (void*)t949;
  struct Shape** cast951 = (struct Shape**)cast950;
  struct Shape* c952 = ((void*)0);
  *cast951 = c952;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPP5ShapevE7releaseEv
void std___UninitDestroyGuard_Shape____void___release(struct std___UninitDestroyGuard_Shape_____void_* v953) {
bb954:
  struct std___UninitDestroyGuard_Shape_____void_* this955;
  this955 = v953;
  struct std___UninitDestroyGuard_Shape_____void_* t956 = this955;
  struct Shape*** c957 = ((void*)0);
  t956->_M_cur = c957;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPP5ShapevED2Ev
void std___UninitDestroyGuard_Shape____void_____UninitDestroyGuard(struct std___UninitDestroyGuard_Shape_____void_* v958) {
bb959:
  struct std___UninitDestroyGuard_Shape_____void_* this960;
  this960 = v958;
  struct std___UninitDestroyGuard_Shape_____void_* t961 = this960;
    struct Shape*** t962 = t961->_M_cur;
    struct Shape*** c963 = ((void*)0);
    _Bool c964 = ((t962 != c963)) ? 1 : 0;
    if (c964) {
      struct Shape** t965 = t961->_M_first;
      struct Shape*** t966 = t961->_M_cur;
      struct Shape** t967 = *t966;
      void_std___Destroy_Shape___(t965, t967);
    }
  return;
}

// function: _ZNSt27__uninitialized_default_n_1ILb0EE18__uninit_default_nIPP5ShapemEET_S5_T0_
struct Shape** Shape___std____uninitialized_default_n_1_false_____uninit_default_n_Shape____unsigned_long_(struct Shape** v968, unsigned long v969) {
bb970:
  struct Shape** __first971;
  unsigned long __n972;
  struct Shape** __retval973;
  struct std___UninitDestroyGuard_Shape_____void_ __guard974;
  __first971 = v968;
  __n972 = v969;
  std___UninitDestroyGuard_Shape____void____UninitDestroyGuard(&__guard974, &__first971);
      while (1) {
        unsigned long t976 = __n972;
        unsigned long c977 = 0;
        _Bool c978 = ((t976 > c977)) ? 1 : 0;
        if (!c978) break;
        struct Shape** t979 = __first971;
        void_std___Construct_Shape__(t979);
      for_step975: ;
        unsigned long t980 = __n972;
        unsigned long u981 = t980 - 1;
        __n972 = u981;
        struct Shape** t982 = __first971;
        int c983 = 1;
        struct Shape** ptr984 = &(t982)[c983];
        __first971 = ptr984;
      }
    std___UninitDestroyGuard_Shape____void___release(&__guard974);
    struct Shape** t985 = __first971;
    __retval973 = t985;
    struct Shape** t986 = __retval973;
    struct Shape** ret_val987 = t986;
    {
      std___UninitDestroyGuard_Shape____void_____UninitDestroyGuard(&__guard974);
    }
    return ret_val987;
  abort();
}

// function: _ZSt9__fill_a1IPP5ShapeS1_EvT_S3_RKT0_
void void_std____fill_a1_Shape____Shape__(struct Shape** v988, struct Shape** v989, struct Shape** v990) {
bb991:
  struct Shape** __first992;
  struct Shape** __last993;
  struct Shape** __value994;
  _Bool __load_outside_loop995;
  struct Shape* __val996;
  __first992 = v988;
  __last993 = v989;
  __value994 = v990;
  _Bool c997 = 1;
  __load_outside_loop995 = c997;
  struct Shape** t998 = __value994;
  struct Shape* t999 = *t998;
  __val996 = t999;
    while (1) {
      struct Shape** t1001 = __first992;
      struct Shape** t1002 = __last993;
      _Bool c1003 = ((t1001 != t1002)) ? 1 : 0;
      if (!c1003) break;
      struct Shape* t1004 = __val996;
      struct Shape** t1005 = __first992;
      *t1005 = t1004;
    for_step1000: ;
      struct Shape** t1006 = __first992;
      int c1007 = 1;
      struct Shape** ptr1008 = &(t1006)[c1007];
      __first992 = ptr1008;
    }
  return;
}

// function: _ZSt8__fill_aIPP5ShapeS1_EvT_S3_RKT0_
void void_std____fill_a_Shape____Shape__(struct Shape** v1009, struct Shape** v1010, struct Shape** v1011) {
bb1012:
  struct Shape** __first1013;
  struct Shape** __last1014;
  struct Shape** __value1015;
  __first1013 = v1009;
  __last1014 = v1010;
  __value1015 = v1011;
  struct Shape** t1016 = __first1013;
  struct Shape** t1017 = __last1014;
  struct Shape** t1018 = __value1015;
  void_std____fill_a1_Shape____Shape__(t1016, t1017, t1018);
  return;
}

// function: _ZSt10__fill_n_aIPP5ShapemS1_ET_S3_T0_RKT1_St26random_access_iterator_tag
struct Shape** Shape___std____fill_n_a_Shape____unsigned_long__Shape__(struct Shape** v1019, unsigned long v1020, struct Shape** v1021, struct std__random_access_iterator_tag v1022) {
bb1023:
  struct Shape** __first1024;
  unsigned long __n1025;
  struct Shape** __value1026;
  struct std__random_access_iterator_tag unnamed1027;
  struct Shape** __retval1028;
  __first1024 = v1019;
  __n1025 = v1020;
  __value1026 = v1021;
  unnamed1027 = v1022;
    unsigned long t1029 = __n1025;
    unsigned long c1030 = 0;
    _Bool c1031 = ((t1029 <= c1030)) ? 1 : 0;
    if (c1031) {
      struct Shape** t1032 = __first1024;
      __retval1028 = t1032;
      struct Shape** t1033 = __retval1028;
      return t1033;
    }
  struct Shape** t1034 = __first1024;
  struct Shape** t1035 = __first1024;
  unsigned long t1036 = __n1025;
  struct Shape** ptr1037 = &(t1035)[t1036];
  struct Shape** t1038 = __value1026;
  void_std____fill_a_Shape____Shape__(t1034, ptr1037, t1038);
  struct Shape** t1039 = __first1024;
  unsigned long t1040 = __n1025;
  struct Shape** ptr1041 = &(t1039)[t1040];
  __retval1028 = ptr1041;
  struct Shape** t1042 = __retval1028;
  return t1042;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer(unsigned long v1043) {
bb1044:
  unsigned long __n1045;
  unsigned long __retval1046;
  __n1045 = v1043;
  unsigned long t1047 = __n1045;
  __retval1046 = t1047;
  unsigned long t1048 = __retval1046;
  return t1048;
}

// function: _ZSt19__iterator_categoryIPP5ShapeENSt15iterator_traitsIT_E17iterator_categoryERKS4_
struct std__random_access_iterator_tag std__iterator_traits_Shape_____iterator_category_std____iterator_category_Shape___(struct Shape*** v1049) {
bb1050:
  struct Shape*** unnamed1051;
  struct std__random_access_iterator_tag __retval1052;
  unnamed1051 = v1049;
  struct std__random_access_iterator_tag t1053 = __retval1052;
  return t1053;
}

// function: _ZSt6fill_nIPP5ShapemS1_ET_S3_T0_RKT1_
struct Shape** Shape___std__fill_n_Shape____unsigned_long__Shape__(struct Shape** v1054, unsigned long v1055, struct Shape** v1056) {
bb1057:
  struct Shape** __first1058;
  unsigned long __n1059;
  struct Shape** __value1060;
  struct Shape** __retval1061;
  struct std__random_access_iterator_tag agg_tmp01062;
  __first1058 = v1054;
  __n1059 = v1055;
  __value1060 = v1056;
  struct Shape** t1063 = __first1058;
  unsigned long t1064 = __n1059;
  unsigned long r1065 = std____size_to_integer(t1064);
  struct Shape** t1066 = __value1060;
  struct std__random_access_iterator_tag r1067 = std__iterator_traits_Shape_____iterator_category_std____iterator_category_Shape___(&__first1058);
  agg_tmp01062 = r1067;
  struct std__random_access_iterator_tag t1068 = agg_tmp01062;
  struct Shape** r1069 = Shape___std____fill_n_a_Shape____unsigned_long__Shape__(t1063, r1065, t1066, t1068);
  __retval1061 = r1069;
  struct Shape** t1070 = __retval1061;
  return t1070;
}

// function: _ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPP5ShapemEET_S5_T0_
struct Shape** Shape___std____uninitialized_default_n_1_true_____uninit_default_n_Shape____unsigned_long_(struct Shape** v1071, unsigned long v1072) {
bb1073:
  struct Shape** __first1074;
  unsigned long __n1075;
  struct Shape** __retval1076;
  __first1074 = v1071;
  __n1075 = v1072;
    unsigned long t1077 = __n1075;
    unsigned long c1078 = 0;
    _Bool c1079 = ((t1077 > c1078)) ? 1 : 0;
    if (c1079) {
      struct Shape** __val1080;
      struct Shape** t1081 = __first1074;
      __val1080 = t1081;
      struct Shape** t1082 = __val1080;
      void_std___Construct_Shape__(t1082);
      struct Shape** t1083 = __first1074;
      int c1084 = 1;
      struct Shape** ptr1085 = &(t1083)[c1084];
      __first1074 = ptr1085;
      struct Shape** t1086 = __first1074;
      unsigned long t1087 = __n1075;
      unsigned long c1088 = 1;
      unsigned long b1089 = t1087 - c1088;
      struct Shape** t1090 = __val1080;
      struct Shape** r1091 = Shape___std__fill_n_Shape____unsigned_long__Shape__(t1086, b1089, t1090);
      __first1074 = r1091;
    }
  struct Shape** t1092 = __first1074;
  __retval1076 = t1092;
  struct Shape** t1093 = __retval1076;
  return t1093;
}

// function: _ZSt25__uninitialized_default_nIPP5ShapemET_S3_T0_
struct Shape** Shape___std____uninitialized_default_n_Shape____unsigned_long_(struct Shape** v1094, unsigned long v1095) {
bb1096:
  struct Shape** __first1097;
  unsigned long __n1098;
  struct Shape** __retval1099;
  _Bool __can_fill1100;
  __first1097 = v1094;
  __n1098 = v1095;
    _Bool r1101 = std__is_constant_evaluated();
    if (r1101) {
      struct Shape** t1102 = __first1097;
      unsigned long t1103 = __n1098;
      struct Shape** r1104 = Shape___std____uninitialized_default_n_1_false_____uninit_default_n_Shape____unsigned_long_(t1102, t1103);
      __retval1099 = r1104;
      struct Shape** t1105 = __retval1099;
      return t1105;
    }
  _Bool c1106 = 1;
  __can_fill1100 = c1106;
  struct Shape** t1107 = __first1097;
  unsigned long t1108 = __n1098;
  struct Shape** r1109 = Shape___std____uninitialized_default_n_1_true_____uninit_default_n_Shape____unsigned_long_(t1107, t1108);
  __retval1099 = r1109;
  struct Shape** t1110 = __retval1099;
  return t1110;
}

// function: _ZSt27__uninitialized_default_n_aIPP5ShapemS1_ET_S3_T0_RSaIT1_E
struct Shape** Shape___std____uninitialized_default_n_a_Shape____unsigned_long__Shape__(struct Shape** v1111, unsigned long v1112, struct std__allocator_Shape___* v1113) {
bb1114:
  struct Shape** __first1115;
  unsigned long __n1116;
  struct std__allocator_Shape___* unnamed1117;
  struct Shape** __retval1118;
  __first1115 = v1111;
  __n1116 = v1112;
  unnamed1117 = v1113;
  struct Shape** t1119 = __first1115;
  unsigned long t1120 = __n1116;
  struct Shape** r1121 = Shape___std____uninitialized_default_n_Shape____unsigned_long_(t1119, t1120);
  __retval1118 = r1121;
  struct Shape** t1122 = __retval1118;
  return t1122;
}

// function: _ZNSt12_Vector_baseIP5ShapeSaIS1_EE19_M_get_Tp_allocatorEv
struct std__allocator_Shape___* std___Vector_base_Shape___std__allocator_Shape_______M_get_Tp_allocator(struct std___Vector_base_Shape____std__allocator_Shape____* v1123) {
bb1124:
  struct std___Vector_base_Shape____std__allocator_Shape____* this1125;
  struct std__allocator_Shape___* __retval1126;
  this1125 = v1123;
  struct std___Vector_base_Shape____std__allocator_Shape____* t1127 = this1125;
  struct std__allocator_Shape___* base1128 = (struct std__allocator_Shape___*)((char *)&(t1127->_M_impl) + 0);
  __retval1126 = base1128;
  struct std__allocator_Shape___* t1129 = __retval1126;
  return t1129;
}

// function: _ZNSt6vectorIP5ShapeSaIS1_EE21_M_default_initializeEm
void std__vector_Shape___std__allocator_Shape_______M_default_initialize(struct std__vector_Shape____std__allocator_Shape____* v1130, unsigned long v1131) {
bb1132:
  struct std__vector_Shape____std__allocator_Shape____* this1133;
  unsigned long __n1134;
  this1133 = v1130;
  __n1134 = v1131;
  struct std__vector_Shape____std__allocator_Shape____* t1135 = this1133;
  struct std___Vector_base_Shape____std__allocator_Shape____* base1136 = (struct std___Vector_base_Shape____std__allocator_Shape____*)((char *)t1135 + 0);
  struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data* base1137 = (struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data*)((char *)&(base1136->_M_impl) + 0);
  struct Shape** t1138 = base1137->_M_start;
  unsigned long t1139 = __n1134;
  struct std___Vector_base_Shape____std__allocator_Shape____* base1140 = (struct std___Vector_base_Shape____std__allocator_Shape____*)((char *)t1135 + 0);
  struct std__allocator_Shape___* r1141 = std___Vector_base_Shape___std__allocator_Shape_______M_get_Tp_allocator(base1140);
  struct Shape** r1142 = Shape___std____uninitialized_default_n_a_Shape____unsigned_long__Shape__(t1138, t1139, r1141);
  struct std___Vector_base_Shape____std__allocator_Shape____* base1143 = (struct std___Vector_base_Shape____std__allocator_Shape____*)((char *)t1135 + 0);
  struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data* base1144 = (struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data*)((char *)&(base1143->_M_impl) + 0);
  base1144->_M_finish = r1142;
  return;
}

// function: _ZNSt15__new_allocatorIP5ShapeE10deallocateEPS1_m
void std____new_allocator_Shape____deallocate(struct std____new_allocator_Shape___* v1145, struct Shape** v1146, unsigned long v1147) {
bb1148:
  struct std____new_allocator_Shape___* this1149;
  struct Shape** __p1150;
  unsigned long __n1151;
  this1149 = v1145;
  __p1150 = v1146;
  __n1151 = v1147;
  struct std____new_allocator_Shape___* t1152 = this1149;
    unsigned long c1153 = 8;
    unsigned long c1154 = 16;
    _Bool c1155 = ((c1153 > c1154)) ? 1 : 0;
    if (c1155) {
      struct Shape** t1156 = __p1150;
      void* cast1157 = (void*)t1156;
      unsigned long t1158 = __n1151;
      unsigned long c1159 = 8;
      unsigned long b1160 = t1158 * c1159;
      unsigned long c1161 = 8;
      operator_delete_3(cast1157, b1160, c1161);
      return;
    }
  struct Shape** t1162 = __p1150;
  void* cast1163 = (void*)t1162;
  unsigned long t1164 = __n1151;
  unsigned long c1165 = 8;
  unsigned long b1166 = t1164 * c1165;
  operator_delete_2(cast1163, b1166);
  return;
}

// function: _ZNSaIP5ShapeE10deallocateEPS0_m
void std__allocator_Shape____deallocate(struct std__allocator_Shape___* v1167, struct Shape** v1168, unsigned long v1169) {
bb1170:
  struct std__allocator_Shape___* this1171;
  struct Shape** __p1172;
  unsigned long __n1173;
  this1171 = v1167;
  __p1172 = v1168;
  __n1173 = v1169;
  struct std__allocator_Shape___* t1174 = this1171;
    _Bool r1175 = std____is_constant_evaluated();
    if (r1175) {
      struct Shape** t1176 = __p1172;
      void* cast1177 = (void*)t1176;
      operator_delete(cast1177);
      return;
    }
  struct std____new_allocator_Shape___* base1178 = (struct std____new_allocator_Shape___*)((char *)t1174 + 0);
  struct Shape** t1179 = __p1172;
  unsigned long t1180 = __n1173;
  std____new_allocator_Shape____deallocate(base1178, t1179, t1180);
  return;
}

// function: _ZNSt16allocator_traitsISaIP5ShapeEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_Shape______deallocate(struct std__allocator_Shape___* v1181, struct Shape** v1182, unsigned long v1183) {
bb1184:
  struct std__allocator_Shape___* __a1185;
  struct Shape** __p1186;
  unsigned long __n1187;
  __a1185 = v1181;
  __p1186 = v1182;
  __n1187 = v1183;
  struct std__allocator_Shape___* t1188 = __a1185;
  struct Shape** t1189 = __p1186;
  unsigned long t1190 = __n1187;
  std__allocator_Shape____deallocate(t1188, t1189, t1190);
  return;
}

// function: _ZNSt12_Vector_baseIP5ShapeSaIS1_EE13_M_deallocateEPS1_m
void std___Vector_base_Shape___std__allocator_Shape_______M_deallocate(struct std___Vector_base_Shape____std__allocator_Shape____* v1191, struct Shape** v1192, unsigned long v1193) {
bb1194:
  struct std___Vector_base_Shape____std__allocator_Shape____* this1195;
  struct Shape** __p1196;
  unsigned long __n1197;
  this1195 = v1191;
  __p1196 = v1192;
  __n1197 = v1193;
  struct std___Vector_base_Shape____std__allocator_Shape____* t1198 = this1195;
    struct Shape** t1199 = __p1196;
    _Bool cast1200 = (_Bool)t1199;
    if (cast1200) {
      struct std__allocator_Shape___* base1201 = (struct std__allocator_Shape___*)((char *)&(t1198->_M_impl) + 0);
      struct Shape** t1202 = __p1196;
      unsigned long t1203 = __n1197;
      std__allocator_traits_std__allocator_Shape______deallocate(base1201, t1202, t1203);
    }
  return;
}

// function: _ZNSt12_Vector_baseIP5ShapeSaIS1_EED2Ev
void std___Vector_base_Shape___std__allocator_Shape________Vector_base(struct std___Vector_base_Shape____std__allocator_Shape____* v1204) {
bb1205:
  struct std___Vector_base_Shape____std__allocator_Shape____* this1206;
  this1206 = v1204;
  struct std___Vector_base_Shape____std__allocator_Shape____* t1207 = this1206;
    struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data* base1208 = (struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data*)((char *)&(t1207->_M_impl) + 0);
    struct Shape** t1209 = base1208->_M_start;
    struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data* base1210 = (struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data*)((char *)&(t1207->_M_impl) + 0);
    struct Shape** t1211 = base1210->_M_end_of_storage;
    struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data* base1212 = (struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data*)((char *)&(t1207->_M_impl) + 0);
    struct Shape** t1213 = base1212->_M_start;
    long diff1214 = t1211 - t1213;
    unsigned long cast1215 = (unsigned long)diff1214;
    std___Vector_base_Shape___std__allocator_Shape_______M_deallocate(t1207, t1209, cast1215);
  {
    std___Vector_base_Shape___std__allocator_Shape_______Vector_impl____Vector_impl(&t1207->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIP5ShapeEC2ERKS2_
void std____new_allocator_Shape______new_allocator(struct std____new_allocator_Shape___* v1216, struct std____new_allocator_Shape___* v1217) {
bb1218:
  struct std____new_allocator_Shape___* this1219;
  struct std____new_allocator_Shape___* unnamed1220;
  this1219 = v1216;
  unnamed1220 = v1217;
  struct std____new_allocator_Shape___* t1221 = this1219;
  return;
}

// function: _ZNSt12_Vector_baseIP5ShapeSaIS1_EE17_Vector_impl_dataC2Ev
void std___Vector_base_Shape___std__allocator_Shape_______Vector_impl_data___Vector_impl_data(struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data* v1222) {
bb1223:
  struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data* this1224;
  this1224 = v1222;
  struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data* t1225 = this1224;
  struct Shape** c1226 = ((void*)0);
  t1225->_M_start = c1226;
  struct Shape** c1227 = ((void*)0);
  t1225->_M_finish = c1227;
  struct Shape** c1228 = ((void*)0);
  t1225->_M_end_of_storage = c1228;
  return;
}

// function: _ZSt10destroy_atIP5ShapeEvPT_
void void_std__destroy_at_Shape__(struct Shape** v1229) {
bb1230:
  struct Shape** __location1231;
  __location1231 = v1229;
  return;
}

// function: _ZSt8_DestroyIPP5ShapeEvT_S3_
void void_std___Destroy_Shape___(struct Shape** v1232, struct Shape** v1233) {
bb1234:
  struct Shape** __first1235;
  struct Shape** __last1236;
  __first1235 = v1232;
  __last1236 = v1233;
      _Bool r1237 = std____is_constant_evaluated();
      if (r1237) {
          while (1) {
            struct Shape** t1239 = __first1235;
            struct Shape** t1240 = __last1236;
            _Bool c1241 = ((t1239 != t1240)) ? 1 : 0;
            if (!c1241) break;
            struct Shape** t1242 = __first1235;
            void_std__destroy_at_Shape__(t1242);
          for_step1238: ;
            struct Shape** t1243 = __first1235;
            int c1244 = 1;
            struct Shape** ptr1245 = &(t1243)[c1244];
            __first1235 = ptr1245;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPP5ShapeS1_EvT_S3_RSaIT0_E
void void_std___Destroy_Shape____Shape__(struct Shape** v1246, struct Shape** v1247, struct std__allocator_Shape___* v1248) {
bb1249:
  struct Shape** __first1250;
  struct Shape** __last1251;
  struct std__allocator_Shape___* unnamed1252;
  __first1250 = v1246;
  __last1251 = v1247;
  unnamed1252 = v1248;
  struct Shape** t1253 = __first1250;
  struct Shape** t1254 = __last1251;
  void_std___Destroy_Shape___(t1253, t1254);
  return;
}

