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
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
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
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_match1[4] = {40, 50, 60, 70};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[10] = "*it == 40";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm11/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[13] = "search *it: ";
char _str_3[26] = "vector::_M_realloc_append";
char _str_4[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_5[15] = "!this->empty()";
_Bool mypredicate(int p0, int p1);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* p0, int* p1, int* p2);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
extern void std____throw_length_error(char* p0);
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, char* p2);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
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
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0, int* p1, unsigned long p2, struct std___Vector_base_int__std__allocator_int__* p3);
int* int__std__to_address_int_(int* p0);
int* auto_std____to_address_int__(int** p0);
_Bool std__is_constant_evaluated();
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* p0, int** p1);
void void_std__destroy_at_int_(int* p0);
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* p0, int* p1);
void void_std____relocate_object_a_int__int__std__allocator_int___(int* p0, int* p1, struct std__allocator_int_* p2);
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* p0);
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* p0);
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____void_ p2, struct std__allocator_int_* p3);
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* p0, struct __gnu_cxx____normal_iterator_int____void_* p1);
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* p0);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
int* int__std____niter_base_int__(int* p0);
int* int__std____relocate_a_int___int___std__allocator_int___(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
int* std__vector_int__std__allocator_int______S_relocate(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0);
void void_std__vector_int__std__allocator_int______M_realloc_append_int_(struct std__vector_int__std__allocator_int__* p0, int* p1);
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p1);
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* p0);
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
int* std__vector_int__std__allocator_int_____back(struct std__vector_int__std__allocator_int__* p0);
int* int__std__vector_int__std__allocator_int_____emplace_back_int_(struct std__vector_int__std__allocator_int__* p0, int* p1);
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* p0, int* p1);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______search___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2, int* p3);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
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
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
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
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
_Bool std____is_constant_evaluated();
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);

// function: _Z11mypredicateii
_Bool mypredicate(int v0, int v1) {
bb2:
  int i3;
  int j4;
  _Bool __retval5;
  i3 = v0;
  j4 = v1;
  int t6 = i3;
  int t7 = j4;
  _Bool c8 = ((t6 == t7)) ? 1 : 0;
  __retval5 = c8;
  _Bool t9 = __retval5;
  return t9;
}

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v10) {
bb11:
  struct std__vector_int__std__allocator_int__* this12;
  this12 = v10;
  struct std__vector_int__std__allocator_int__* t13 = this12;
  struct std___Vector_base_int__std__allocator_int__* base14 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t13 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base(base14);
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v15) {
bb16:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this17;
  this17 = v15;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t18 = this17;
  int* c19 = ((void*)0);
  t18->_M_current = c19;
  return;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v20, int* v21) {
bb22:
  int* __location23;
  int* __args24;
  int* __retval25;
  void* __loc26;
  __location23 = v20;
  __args24 = v21;
  int* t27 = __location23;
  void* cast28 = (void*)t27;
  __loc26 = cast28;
    void* t29 = __loc26;
    int* cast30 = (int*)t29;
    int* t31 = __args24;
    int t32 = *t31;
    *cast30 = t32;
    __retval25 = cast30;
    int* t33 = __retval25;
    return t33;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v34, int* v35, int* v36) {
bb37:
  struct std__allocator_int_* __a38;
  int* __p39;
  int* __args40;
  __a38 = v34;
  __p39 = v35;
  __args40 = v36;
  int* t41 = __p39;
  int* t42 = __args40;
  int* r43 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t41, t42);
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v44, unsigned long* v45) {
bb46:
  unsigned long* __a47;
  unsigned long* __b48;
  unsigned long* __retval49;
  __a47 = v44;
  __b48 = v45;
    unsigned long* t50 = __b48;
    unsigned long t51 = *t50;
    unsigned long* t52 = __a47;
    unsigned long t53 = *t52;
    _Bool c54 = ((t51 < t53)) ? 1 : 0;
    if (c54) {
      unsigned long* t55 = __b48;
      __retval49 = t55;
      unsigned long* t56 = __retval49;
      return t56;
    }
  unsigned long* t57 = __a47;
  __retval49 = t57;
  unsigned long* t58 = __retval49;
  return t58;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v59) {
bb60:
  struct std__allocator_int_* __a61;
  unsigned long __retval62;
  unsigned long __diffmax63;
  unsigned long __allocmax64;
  __a61 = v59;
  unsigned long c65 = 2305843009213693951;
  __diffmax63 = c65;
  unsigned long c66 = 4611686018427387903;
  __allocmax64 = c66;
  unsigned long* r67 = unsigned_long_const__std__min_unsigned_long_(&__diffmax63, &__allocmax64);
  unsigned long t68 = *r67;
  __retval62 = t68;
  unsigned long t69 = __retval62;
  return t69;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v70) {
bb71:
  struct std___Vector_base_int__std__allocator_int__* this72;
  struct std__allocator_int_* __retval73;
  this72 = v70;
  struct std___Vector_base_int__std__allocator_int__* t74 = this72;
  struct std__allocator_int_* base75 = (struct std__allocator_int_*)((char *)&(t74->_M_impl) + 0);
  __retval73 = base75;
  struct std__allocator_int_* t76 = __retval73;
  return t76;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v77) {
bb78:
  struct std__vector_int__std__allocator_int__* this79;
  unsigned long __retval80;
  this79 = v77;
  struct std__vector_int__std__allocator_int__* t81 = this79;
  struct std___Vector_base_int__std__allocator_int__* base82 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t81 + 0);
  struct std__allocator_int_* r83 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base82);
  unsigned long r84 = std__vector_int__std__allocator_int______S_max_size(r83);
  __retval80 = r84;
  unsigned long t85 = __retval80;
  return t85;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v86) {
bb87:
  struct std__vector_int__std__allocator_int__* this88;
  unsigned long __retval89;
  long __dif90;
  this88 = v86;
  struct std__vector_int__std__allocator_int__* t91 = this88;
  struct std___Vector_base_int__std__allocator_int__* base92 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t91 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base93 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base92->_M_impl) + 0);
  int* t94 = base93->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base95 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t91 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base96 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base95->_M_impl) + 0);
  int* t97 = base96->_M_start;
  long diff98 = t94 - t97;
  __dif90 = diff98;
    long t99 = __dif90;
    long c100 = 0;
    _Bool c101 = ((t99 < c100)) ? 1 : 0;
    if (c101) {
      __builtin_unreachable();
    }
  long t102 = __dif90;
  unsigned long cast103 = (unsigned long)t102;
  __retval89 = cast103;
  unsigned long t104 = __retval89;
  return t104;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v105, unsigned long* v106) {
bb107:
  unsigned long* __a108;
  unsigned long* __b109;
  unsigned long* __retval110;
  __a108 = v105;
  __b109 = v106;
    unsigned long* t111 = __a108;
    unsigned long t112 = *t111;
    unsigned long* t113 = __b109;
    unsigned long t114 = *t113;
    _Bool c115 = ((t112 < t114)) ? 1 : 0;
    if (c115) {
      unsigned long* t116 = __b109;
      __retval110 = t116;
      unsigned long* t117 = __retval110;
      return t117;
    }
  unsigned long* t118 = __a108;
  __retval110 = t118;
  unsigned long* t119 = __retval110;
  return t119;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v120, unsigned long v121, char* v122) {
bb123:
  struct std__vector_int__std__allocator_int__* this124;
  unsigned long __n125;
  char* __s126;
  unsigned long __retval127;
  unsigned long __len128;
  unsigned long ref_tmp0129;
  this124 = v120;
  __n125 = v121;
  __s126 = v122;
  struct std__vector_int__std__allocator_int__* t130 = this124;
    unsigned long r131 = std__vector_int__std__allocator_int_____max_size___const(t130);
    unsigned long r132 = std__vector_int__std__allocator_int_____size___const(t130);
    unsigned long b133 = r131 - r132;
    unsigned long t134 = __n125;
    _Bool c135 = ((b133 < t134)) ? 1 : 0;
    if (c135) {
      char* t136 = __s126;
      std____throw_length_error(t136);
    }
  unsigned long r137 = std__vector_int__std__allocator_int_____size___const(t130);
  unsigned long r138 = std__vector_int__std__allocator_int_____size___const(t130);
  ref_tmp0129 = r138;
  unsigned long* r139 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0129, &__n125);
  unsigned long t140 = *r139;
  unsigned long b141 = r137 + t140;
  __len128 = b141;
  unsigned long t142 = __len128;
  unsigned long r143 = std__vector_int__std__allocator_int_____size___const(t130);
  _Bool c144 = ((t142 < r143)) ? 1 : 0;
  _Bool ternary145;
  if (c144) {
    _Bool c146 = 1;
    ternary145 = (_Bool)c146;
  } else {
    unsigned long t147 = __len128;
    unsigned long r148 = std__vector_int__std__allocator_int_____max_size___const(t130);
    _Bool c149 = ((t147 > r148)) ? 1 : 0;
    ternary145 = (_Bool)c149;
  }
  unsigned long ternary150;
  if (ternary145) {
    unsigned long r151 = std__vector_int__std__allocator_int_____max_size___const(t130);
    ternary150 = (unsigned long)r151;
  } else {
    unsigned long t152 = __len128;
    ternary150 = (unsigned long)t152;
  }
  __retval127 = ternary150;
  unsigned long t153 = __retval127;
  return t153;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v154) {
bb155:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this156;
  int** __retval157;
  this156 = v154;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t158 = this156;
  __retval157 = &t158->_M_current;
  int** t159 = __retval157;
  return t159;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v160, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v161) {
bb162:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs163;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs164;
  long __retval165;
  __lhs163 = v160;
  __rhs164 = v161;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t166 = __lhs163;
  int** r167 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t166);
  int* t168 = *r167;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t169 = __rhs164;
  int** r170 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t169);
  int* t171 = *r170;
  long diff172 = t168 - t171;
  __retval165 = diff172;
  long t173 = __retval165;
  return t173;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v174) {
bb175:
  struct std____new_allocator_int_* this176;
  unsigned long __retval177;
  this176 = v174;
  struct std____new_allocator_int_* t178 = this176;
  unsigned long c179 = 9223372036854775807;
  unsigned long c180 = 4;
  unsigned long b181 = c179 / c180;
  __retval177 = b181;
  unsigned long t182 = __retval177;
  return t182;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v183, unsigned long v184, void* v185) {
bb186:
  struct std____new_allocator_int_* this187;
  unsigned long __n188;
  void* unnamed189;
  int* __retval190;
  this187 = v183;
  __n188 = v184;
  unnamed189 = v185;
  struct std____new_allocator_int_* t191 = this187;
    unsigned long t192 = __n188;
    unsigned long r193 = std____new_allocator_int____M_max_size___const(t191);
    _Bool c194 = ((t192 > r193)) ? 1 : 0;
    if (c194) {
        unsigned long t195 = __n188;
        unsigned long c196 = -1;
        unsigned long c197 = 4;
        unsigned long b198 = c196 / c197;
        _Bool c199 = ((t195 > b198)) ? 1 : 0;
        if (c199) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c200 = 4;
    unsigned long c201 = 16;
    _Bool c202 = ((c200 > c201)) ? 1 : 0;
    if (c202) {
      unsigned long __al203;
      unsigned long c204 = 4;
      __al203 = c204;
      unsigned long t205 = __n188;
      unsigned long c206 = 4;
      unsigned long b207 = t205 * c206;
      unsigned long t208 = __al203;
      void* r209 = operator_new_2(b207, t208);
      int* cast210 = (int*)r209;
      __retval190 = cast210;
      int* t211 = __retval190;
      return t211;
    }
  unsigned long t212 = __n188;
  unsigned long c213 = 4;
  unsigned long b214 = t212 * c213;
  void* r215 = operator_new(b214);
  int* cast216 = (int*)r215;
  __retval190 = cast216;
  int* t217 = __retval190;
  return t217;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v218, unsigned long v219) {
bb220:
  struct std__allocator_int_* this221;
  unsigned long __n222;
  int* __retval223;
  this221 = v218;
  __n222 = v219;
  struct std__allocator_int_* t224 = this221;
    _Bool r225 = std____is_constant_evaluated();
    if (r225) {
        unsigned long t226 = __n222;
        unsigned long c227 = 4;
        unsigned long ovr228;
        _Bool ovf229 = __builtin_mul_overflow(t226, c227, &ovr228);
        __n222 = ovr228;
        if (ovf229) {
          std____throw_bad_array_new_length();
        }
      unsigned long t230 = __n222;
      void* r231 = operator_new(t230);
      int* cast232 = (int*)r231;
      __retval223 = cast232;
      int* t233 = __retval223;
      return t233;
    }
  struct std____new_allocator_int_* base234 = (struct std____new_allocator_int_*)((char *)t224 + 0);
  unsigned long t235 = __n222;
  void* c236 = ((void*)0);
  int* r237 = std____new_allocator_int___allocate(base234, t235, c236);
  __retval223 = r237;
  int* t238 = __retval223;
  return t238;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v239, unsigned long v240) {
bb241:
  struct std__allocator_int_* __a242;
  unsigned long __n243;
  int* __retval244;
  __a242 = v239;
  __n243 = v240;
  struct std__allocator_int_* t245 = __a242;
  unsigned long t246 = __n243;
  int* r247 = std__allocator_int___allocate(t245, t246);
  __retval244 = r247;
  int* t248 = __retval244;
  return t248;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v249, unsigned long v250) {
bb251:
  struct std___Vector_base_int__std__allocator_int__* this252;
  unsigned long __n253;
  int* __retval254;
  this252 = v249;
  __n253 = v250;
  struct std___Vector_base_int__std__allocator_int__* t255 = this252;
  unsigned long t256 = __n253;
  unsigned long c257 = 0;
  _Bool c258 = ((t256 != c257)) ? 1 : 0;
  int* ternary259;
  if (c258) {
    struct std__allocator_int_* base260 = (struct std__allocator_int_*)((char *)&(t255->_M_impl) + 0);
    unsigned long t261 = __n253;
    int* r262 = std__allocator_traits_std__allocator_int_____allocate(base260, t261);
    ternary259 = (int*)r262;
  } else {
    int* c263 = ((void*)0);
    ternary259 = (int*)c263;
  }
  __retval254 = ternary259;
  int* t264 = __retval254;
  return t264;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v265, int* v266, unsigned long v267, struct std___Vector_base_int__std__allocator_int__* v268) {
bb269:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this270;
  int* __s271;
  unsigned long __l272;
  struct std___Vector_base_int__std__allocator_int__* __vect273;
  this270 = v265;
  __s271 = v266;
  __l272 = v267;
  __vect273 = v268;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t274 = this270;
  int* t275 = __s271;
  t274->_M_storage = t275;
  unsigned long t276 = __l272;
  t274->_M_len = t276;
  struct std___Vector_base_int__std__allocator_int__* t277 = __vect273;
  t274->_M_vect = t277;
  return;
}

// function: _ZSt10to_addressIiEPT_S1_
int* int__std__to_address_int_(int* v278) {
bb279:
  int* __ptr280;
  int* __retval281;
  __ptr280 = v278;
  int* t282 = __ptr280;
  __retval281 = t282;
  int* t283 = __retval281;
  return t283;
}

// function: _ZSt12__to_addressIPiEDaRKT_
int* auto_std____to_address_int__(int** v284) {
bb285:
  int** __ptr286;
  int* __retval287;
  __ptr286 = v284;
  int** t288 = __ptr286;
  int* t289 = *t288;
  int* r290 = int__std__to_address_int_(t289);
  __retval287 = r290;
  int* t291 = __retval287;
  return t291;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb292:
  _Bool __retval293;
    _Bool c294 = 0;
    __retval293 = c294;
    _Bool t295 = __retval293;
    return t295;
  abort();
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v296, int** v297) {
bb298:
  struct __gnu_cxx____normal_iterator_int____void_* this299;
  int** __i300;
  this299 = v296;
  __i300 = v297;
  struct __gnu_cxx____normal_iterator_int____void_* t301 = this299;
  int** t302 = __i300;
  int* t303 = *t302;
  t301->_M_current = t303;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v304) {
bb305:
  int* __location306;
  __location306 = v304;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v307, int* v308) {
bb309:
  struct std__allocator_int_* __a310;
  int* __p311;
  __a310 = v307;
  __p311 = v308;
  int* t312 = __p311;
  void_std__destroy_at_int_(t312);
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v313, int* v314, struct std__allocator_int_* v315) {
bb316:
  int* __dest317;
  int* __orig318;
  struct std__allocator_int_* __alloc319;
  __dest317 = v313;
  __orig318 = v314;
  __alloc319 = v315;
  struct std__allocator_int_* t320 = __alloc319;
  int* t321 = __dest317;
  int* t322 = __orig318;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t320, t321, t322);
  struct std__allocator_int_* t323 = __alloc319;
  int* t324 = __orig318;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t323, t324);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v325) {
bb326:
  struct __gnu_cxx____normal_iterator_int____void_* this327;
  int* __retval328;
  this327 = v325;
  struct __gnu_cxx____normal_iterator_int____void_* t329 = this327;
  int* t330 = t329->_M_current;
  __retval328 = t330;
  int* t331 = __retval328;
  return t331;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v332) {
bb333:
  struct __gnu_cxx____normal_iterator_int____void_* this334;
  struct __gnu_cxx____normal_iterator_int____void_* __retval335;
  this334 = v332;
  struct __gnu_cxx____normal_iterator_int____void_* t336 = this334;
  int* t337 = t336->_M_current;
  int c338 = 1;
  int* ptr339 = &(t337)[c338];
  t336->_M_current = ptr339;
  __retval335 = t336;
  struct __gnu_cxx____normal_iterator_int____void_* t340 = __retval335;
  return t340;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v341, int* v342, struct __gnu_cxx____normal_iterator_int____void_ v343, struct std__allocator_int_* v344) {
bb345:
  int* __first346;
  int* __last347;
  struct __gnu_cxx____normal_iterator_int____void_ __result348;
  struct std__allocator_int_* __alloc349;
  struct __gnu_cxx____normal_iterator_int____void_ __retval350;
  __first346 = v341;
  __last347 = v342;
  __result348 = v343;
  __alloc349 = v344;
  __retval350 = __result348; // copy
    while (1) {
      int* t352 = __first346;
      int* t353 = __last347;
      _Bool c354 = ((t352 != t353)) ? 1 : 0;
      if (!c354) break;
      int* r355 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval350);
      int* t356 = __first346;
      struct std__allocator_int_* t357 = __alloc349;
      void_std____relocate_object_a_int__int__std__allocator_int___(r355, t356, t357);
    for_step351: ;
      int* t358 = __first346;
      int c359 = 1;
      int* ptr360 = &(t358)[c359];
      __first346 = ptr360;
      struct __gnu_cxx____normal_iterator_int____void_* r361 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval350);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t362 = __retval350;
  return t362;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v363, struct __gnu_cxx____normal_iterator_int____void_* v364) {
bb365:
  struct __gnu_cxx____normal_iterator_int____void_* this366;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed367;
  struct __gnu_cxx____normal_iterator_int____void_* __retval368;
  this366 = v363;
  unnamed367 = v364;
  struct __gnu_cxx____normal_iterator_int____void_* t369 = this366;
  struct __gnu_cxx____normal_iterator_int____void_* t370 = unnamed367;
  int* t371 = t370->_M_current;
  t369->_M_current = t371;
  __retval368 = t369;
  struct __gnu_cxx____normal_iterator_int____void_* t372 = __retval368;
  return t372;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v373) {
bb374:
  struct __gnu_cxx____normal_iterator_int____void_* this375;
  int** __retval376;
  this375 = v373;
  struct __gnu_cxx____normal_iterator_int____void_* t377 = this375;
  __retval376 = &t377->_M_current;
  int** t378 = __retval376;
  return t378;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v379, int* v380, int* v381, struct std__allocator_int_* v382) {
bb383:
  int* __first384;
  int* __last385;
  int* __result386;
  struct std__allocator_int_* __alloc387;
  int* __retval388;
  long __count389;
  __first384 = v379;
  __last385 = v380;
  __result386 = v381;
  __alloc387 = v382;
  int* t390 = __last385;
  int* t391 = __first384;
  long diff392 = t390 - t391;
  __count389 = diff392;
    long t393 = __count389;
    long c394 = 0;
    _Bool c395 = ((t393 > c394)) ? 1 : 0;
    if (c395) {
        _Bool r396 = std__is_constant_evaluated();
        if (r396) {
          struct __gnu_cxx____normal_iterator_int____void_ __out397;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0398;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0399;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out397, &__result386);
          int* t400 = __first384;
          int* t401 = __last385;
          agg_tmp0399 = __out397; // copy
          struct std__allocator_int_* t402 = __alloc387;
          struct __gnu_cxx____normal_iterator_int____void_ t403 = agg_tmp0399;
          struct __gnu_cxx____normal_iterator_int____void_ r404 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t400, t401, t403, t402);
          ref_tmp0398 = r404;
          struct __gnu_cxx____normal_iterator_int____void_* r405 = __gnu_cxx____normal_iterator_int___void___operator_(&__out397, &ref_tmp0398);
          int** r406 = __gnu_cxx____normal_iterator_int___void___base___const(&__out397);
          int* t407 = *r406;
          __retval388 = t407;
          int* t408 = __retval388;
          return t408;
        }
      int* t409 = __result386;
      void* cast410 = (void*)t409;
      int* t411 = __first384;
      void* cast412 = (void*)t411;
      long t413 = __count389;
      unsigned long cast414 = (unsigned long)t413;
      unsigned long c415 = 4;
      unsigned long b416 = cast414 * c415;
      void* r417 = memcpy(cast410, cast412, b416);
    }
  int* t418 = __result386;
  long t419 = __count389;
  int* ptr420 = &(t418)[t419];
  __retval388 = ptr420;
  int* t421 = __retval388;
  return t421;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v422) {
bb423:
  int* __it424;
  int* __retval425;
  __it424 = v422;
  int* t426 = __it424;
  __retval425 = t426;
  int* t427 = __retval425;
  return t427;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v428, int* v429, int* v430, struct std__allocator_int_* v431) {
bb432:
  int* __first433;
  int* __last434;
  int* __result435;
  struct std__allocator_int_* __alloc436;
  int* __retval437;
  __first433 = v428;
  __last434 = v429;
  __result435 = v430;
  __alloc436 = v431;
  int* t438 = __first433;
  int* r439 = int__std____niter_base_int__(t438);
  int* t440 = __last434;
  int* r441 = int__std____niter_base_int__(t440);
  int* t442 = __result435;
  int* r443 = int__std____niter_base_int__(t442);
  struct std__allocator_int_* t444 = __alloc436;
  int* r445 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r439, r441, r443, t444);
  __retval437 = r445;
  int* t446 = __retval437;
  return t446;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v447, int* v448, int* v449, struct std__allocator_int_* v450) {
bb451:
  int* __first452;
  int* __last453;
  int* __result454;
  struct std__allocator_int_* __alloc455;
  int* __retval456;
  __first452 = v447;
  __last453 = v448;
  __result454 = v449;
  __alloc455 = v450;
  int* t457 = __first452;
  int* t458 = __last453;
  int* t459 = __result454;
  struct std__allocator_int_* t460 = __alloc455;
  int* r461 = int__std____relocate_a_int___int___std__allocator_int___(t457, t458, t459, t460);
  __retval456 = r461;
  int* t462 = __retval456;
  return t462;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v463) {
bb464:
  struct std___Vector_base_int__std__allocator_int__* this465;
  struct std__allocator_int_* __retval466;
  this465 = v463;
  struct std___Vector_base_int__std__allocator_int__* t467 = this465;
  struct std__allocator_int_* base468 = (struct std__allocator_int_*)((char *)&(t467->_M_impl) + 0);
  __retval466 = base468;
  struct std__allocator_int_* t469 = __retval466;
  return t469;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v470) {
bb471:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this472;
  this472 = v470;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t473 = this472;
    int* t474 = t473->_M_storage;
    _Bool cast475 = (_Bool)t474;
    if (cast475) {
      struct std___Vector_base_int__std__allocator_int__* t476 = t473->_M_vect;
      int* t477 = t473->_M_storage;
      unsigned long t478 = t473->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t476, t477, t478);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_realloc_appendIJiEEEvDpOT_
void void_std__vector_int__std__allocator_int______M_realloc_append_int_(struct std__vector_int__std__allocator_int__* v479, int* v480) {
bb481:
  struct std__vector_int__std__allocator_int__* this482;
  int* __args483;
  unsigned long __len484;
  int* __old_start485;
  int* __old_finish486;
  unsigned long __elems487;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0488;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1489;
  int* __new_start490;
  int* __new_finish491;
  this482 = v479;
  __args483 = v480;
  struct std__vector_int__std__allocator_int__* t492 = this482;
  unsigned long c493 = 1;
  char* cast494 = (char*)&(_str_3);
  unsigned long r495 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t492, c493, cast494);
  __len484 = r495;
    unsigned long t496 = __len484;
    unsigned long c497 = 0;
    _Bool c498 = ((t496 <= c497)) ? 1 : 0;
    if (c498) {
      __builtin_unreachable();
    }
  struct std___Vector_base_int__std__allocator_int__* base499 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t492 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base500 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base499->_M_impl) + 0);
  int* t501 = base500->_M_start;
  __old_start485 = t501;
  struct std___Vector_base_int__std__allocator_int__* base502 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t492 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base503 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base502->_M_impl) + 0);
  int* t504 = base503->_M_finish;
  __old_finish486 = t504;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r505 = std__vector_int__std__allocator_int_____end(t492);
  ref_tmp0488 = r505;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r506 = std__vector_int__std__allocator_int_____begin(t492);
  ref_tmp1489 = r506;
  long r507 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp0488, &ref_tmp1489);
  unsigned long cast508 = (unsigned long)r507;
  __elems487 = cast508;
  struct std___Vector_base_int__std__allocator_int__* base509 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t492 + 0);
  unsigned long t510 = __len484;
  int* r511 = std___Vector_base_int__std__allocator_int______M_allocate(base509, t510);
  __new_start490 = r511;
  int* t512 = __new_start490;
  __new_finish491 = t512;
    struct std__vector_int__std__allocator_int_____Guard_alloc __guard513;
    int* ref_tmp2514;
    int* t515 = __new_start490;
    unsigned long t516 = __len484;
    struct std___Vector_base_int__std__allocator_int__* base517 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t492 + 0);
    std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard513, t515, t516, base517);
      struct std___Vector_base_int__std__allocator_int__* base518 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t492 + 0);
      struct std__allocator_int_* base519 = (struct std__allocator_int_*)((char *)&(base518->_M_impl) + 0);
      int* t520 = __new_start490;
      unsigned long t521 = __elems487;
      int* ptr522 = &(t520)[t521];
      ref_tmp2514 = ptr522;
      int* r523 = auto_std____to_address_int__(&ref_tmp2514);
      int* t524 = __args483;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base519, r523, t524);
        int* t525 = __old_start485;
        int* t526 = __old_finish486;
        int* t527 = __new_start490;
        struct std___Vector_base_int__std__allocator_int__* base528 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t492 + 0);
        struct std__allocator_int_* r529 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base528);
        int* r530 = std__vector_int__std__allocator_int______S_relocate(t525, t526, t527, r529);
        __new_finish491 = r530;
        int* t531 = __new_finish491;
        int c532 = 1;
        int* ptr533 = &(t531)[c532];
        __new_finish491 = ptr533;
      int* t534 = __old_start485;
      __guard513._M_storage = t534;
      struct std___Vector_base_int__std__allocator_int__* base535 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t492 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base536 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base535->_M_impl) + 0);
      int* t537 = base536->_M_end_of_storage;
      int* t538 = __old_start485;
      long diff539 = t537 - t538;
      unsigned long cast540 = (unsigned long)diff539;
      __guard513._M_len = cast540;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard513);
    }
  int* t541 = __new_start490;
  struct std___Vector_base_int__std__allocator_int__* base542 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t492 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base543 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base542->_M_impl) + 0);
  base543->_M_start = t541;
  int* t544 = __new_finish491;
  struct std___Vector_base_int__std__allocator_int__* base545 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t492 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base546 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base545->_M_impl) + 0);
  base546->_M_finish = t544;
  int* t547 = __new_start490;
  unsigned long t548 = __len484;
  int* ptr549 = &(t547)[t548];
  struct std___Vector_base_int__std__allocator_int__* base550 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t492 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base551 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base550->_M_impl) + 0);
  base551->_M_end_of_storage = ptr549;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v552) {
bb553:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this554;
  int** __retval555;
  this554 = v552;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t556 = this554;
  __retval555 = &t556->_M_current;
  int** t557 = __retval555;
  return t557;
}

// function: _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v558, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v559) {
bb560:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs561;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs562;
  _Bool __retval563;
  __lhs561 = v558;
  __rhs562 = v559;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t564 = __lhs561;
  int** r565 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t564);
  int* t566 = *r565;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t567 = __rhs562;
  int** r568 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t567);
  int* t569 = *r568;
  _Bool c570 = ((t566 == t569)) ? 1 : 0;
  __retval563 = c570;
  _Bool t571 = __retval563;
  return t571;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v572, int** v573) {
bb574:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this575;
  int** __i576;
  this575 = v572;
  __i576 = v573;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t577 = this575;
  int** t578 = __i576;
  int* t579 = *t578;
  t577->_M_current = t579;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* v580) {
bb581:
  struct std__vector_int__std__allocator_int__* this582;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval583;
  this582 = v580;
  struct std__vector_int__std__allocator_int__* t584 = this582;
  struct std___Vector_base_int__std__allocator_int__* base585 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t584 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base586 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base585->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval583, &base586->_M_start);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t587 = __retval583;
  return t587;
}

// function: _ZNKSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* v588) {
bb589:
  struct std__vector_int__std__allocator_int__* this590;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval591;
  this590 = v588;
  struct std__vector_int__std__allocator_int__* t592 = this590;
  struct std___Vector_base_int__std__allocator_int__* base593 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t592 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base594 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base593->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval591, &base594->_M_finish);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t595 = __retval591;
  return t595;
}

// function: _ZNKSt6vectorIiSaIiEE5emptyEv
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* v596) {
bb597:
  struct std__vector_int__std__allocator_int__* this598;
  _Bool __retval599;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp0600;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp1601;
  this598 = v596;
  struct std__vector_int__std__allocator_int__* t602 = this598;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r603 = std__vector_int__std__allocator_int_____begin___const(t602);
  ref_tmp0600 = r603;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r604 = std__vector_int__std__allocator_int_____end___const(t602);
  ref_tmp1601 = r604;
  _Bool r605 = _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&ref_tmp0600, &ref_tmp1601);
  __retval599 = r605;
  _Bool t606 = __retval599;
  return t606;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v607, int** v608) {
bb609:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this610;
  int** __i611;
  this610 = v607;
  __i611 = v608;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t612 = this610;
  int** t613 = __i611;
  int* t614 = *t613;
  t612->_M_current = t614;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmiEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v615, long v616) {
bb617:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this618;
  long __n619;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval620;
  int* ref_tmp0621;
  this618 = v615;
  __n619 = v616;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t622 = this618;
  int* t623 = t622->_M_current;
  long t624 = __n619;
  long u625 = -t624;
  int* ptr626 = &(t623)[u625];
  ref_tmp0621 = ptr626;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval620, &ref_tmp0621);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t627 = __retval620;
  return t627;
}

// function: _ZNSt6vectorIiSaIiEE4backEv
int* std__vector_int__std__allocator_int_____back(struct std__vector_int__std__allocator_int__* v628) {
bb629:
  struct std__vector_int__std__allocator_int__* this630;
  int* __retval631;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0632;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1633;
  this630 = v628;
  struct std__vector_int__std__allocator_int__* t634 = this630;
    do {
          _Bool r635 = std__vector_int__std__allocator_int_____empty___const(t634);
          if (r635) {
            char* cast636 = (char*)&(_str_4);
            int c637 = 1370;
            char* cast638 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv);
            char* cast639 = (char*)&(_str_5);
            std____glibcxx_assert_fail(cast636, c637, cast638, cast639);
          }
      _Bool c640 = 0;
      if (!c640) break;
    } while (1);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r641 = std__vector_int__std__allocator_int_____end(t634);
  ref_tmp1633 = r641;
  long c642 = 1;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r643 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp1633, c642);
  ref_tmp0632 = r643;
  int* r644 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0632);
  __retval631 = r644;
  int* t645 = __retval631;
  return t645;
}

// function: _ZNSt6vectorIiSaIiEE12emplace_backIJiEEERiDpOT_
int* int__std__vector_int__std__allocator_int_____emplace_back_int_(struct std__vector_int__std__allocator_int__* v646, int* v647) {
bb648:
  struct std__vector_int__std__allocator_int__* this649;
  int* __args650;
  int* __retval651;
  this649 = v646;
  __args650 = v647;
  struct std__vector_int__std__allocator_int__* t652 = this649;
    struct std___Vector_base_int__std__allocator_int__* base653 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t652 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base654 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base653->_M_impl) + 0);
    int* t655 = base654->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base656 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t652 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base657 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base656->_M_impl) + 0);
    int* t658 = base657->_M_end_of_storage;
    _Bool c659 = ((t655 != t658)) ? 1 : 0;
    if (c659) {
      struct std___Vector_base_int__std__allocator_int__* base660 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t652 + 0);
      struct std__allocator_int_* base661 = (struct std__allocator_int_*)((char *)&(base660->_M_impl) + 0);
      struct std___Vector_base_int__std__allocator_int__* base662 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t652 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base663 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base662->_M_impl) + 0);
      int* t664 = base663->_M_finish;
      int* t665 = __args650;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base661, t664, t665);
      struct std___Vector_base_int__std__allocator_int__* base666 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t652 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base667 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base666->_M_impl) + 0);
      int* t668 = base667->_M_finish;
      int c669 = 1;
      int* ptr670 = &(t668)[c669];
      base667->_M_finish = ptr670;
    } else {
      int* t671 = __args650;
      void_std__vector_int__std__allocator_int______M_realloc_append_int_(t652, t671);
    }
  int* r672 = std__vector_int__std__allocator_int_____back(t652);
  __retval651 = r672;
  int* t673 = __retval651;
  return t673;
}

// function: _ZNSt6vectorIiSaIiEE9push_backEOi
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* v674, int* v675) {
bb676:
  struct std__vector_int__std__allocator_int__* this677;
  int* __x678;
  this677 = v674;
  __x678 = v675;
  struct std__vector_int__std__allocator_int__* t679 = this677;
  int* t680 = __x678;
  int* r681 = int__std__vector_int__std__allocator_int_____emplace_back_int_(t679, t680);
  return;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v682, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v683) {
bb684:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs685;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs686;
  _Bool __retval687;
  __lhs685 = v682;
  __rhs686 = v683;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t688 = __lhs685;
  int** r689 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t688);
  int* t690 = *r689;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t691 = __rhs686;
  int** r692 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t691);
  int* t693 = *r692;
  _Bool c694 = ((t690 == t693)) ? 1 : 0;
  __retval687 = c694;
  _Bool t695 = __retval687;
  return t695;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v696) {
bb697:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this698;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval699;
  this698 = v696;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t700 = this698;
  int* t701 = t700->_M_current;
  int c702 = 1;
  int* ptr703 = &(t701)[c702];
  t700->_M_current = ptr703;
  __retval699 = t700;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t704 = __retval699;
  return t704;
}

// function: _Z6searchIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiET_S7_S7_PT0_S9_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______search___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v705, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v706, int* v707, int* v708) {
bb709:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ first1710;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ last1711;
  int* first2712;
  int* last2713;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval714;
  first1710 = v705;
  last1711 = v706;
  first2712 = v707;
  last2713 = v708;
    int* t715 = first2712;
    int* t716 = last2713;
    _Bool c717 = ((t715 == t716)) ? 1 : 0;
    if (c717) {
      __retval714 = first1710; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t718 = __retval714;
      return t718;
    }
    while (1) {
      _Bool r719 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&first1710, &last1711);
      _Bool u720 = !r719;
      if (!u720) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it1721;
        int* it2722;
        it1721 = first1710; // copy
        int* t723 = first2712;
        it2722 = t723;
          while (1) {
            int* r724 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it1721);
            int t725 = *r724;
            int* t726 = it2722;
            int t727 = *t726;
            _Bool c728 = ((t725 == t727)) ? 1 : 0;
            if (!c728) break;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r729 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&it1721);
              int* t730 = it2722;
              int c731 = 1;
              int* ptr732 = &(t730)[c731];
              it2722 = ptr732;
                int* t733 = it2722;
                int* t734 = last2713;
                _Bool c735 = ((t733 == t734)) ? 1 : 0;
                if (c735) {
                  __retval714 = first1710; // copy
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t736 = __retval714;
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ret_val737 = t736;
                  return ret_val737;
                }
                _Bool r738 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it1721, &last1711);
                if (r738) {
                  __retval714 = last1711; // copy
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t739 = __retval714;
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ret_val740 = t739;
                  return ret_val740;
                }
          }
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r741 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&first1710);
    }
  __retval714 = last1711; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t742 = __retval714;
  return t742;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v743) {
bb744:
  struct std__vector_int__std__allocator_int__* this745;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval746;
  this745 = v743;
  struct std__vector_int__std__allocator_int__* t747 = this745;
  struct std___Vector_base_int__std__allocator_int__* base748 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t747 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base749 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base748->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval746, &base749->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t750 = __retval746;
  return t750;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v751) {
bb752:
  struct std__vector_int__std__allocator_int__* this753;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval754;
  this753 = v751;
  struct std__vector_int__std__allocator_int__* t755 = this753;
  struct std___Vector_base_int__std__allocator_int__* base756 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t755 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base757 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base756->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval754, &base757->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t758 = __retval754;
  return t758;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v759, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v760) {
bb761:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this762;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed763;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval764;
  this762 = v759;
  unnamed763 = v760;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t765 = this762;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t766 = unnamed763;
  int* t767 = t766->_M_current;
  t765->_M_current = t767;
  __retval764 = t765;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t768 = __retval764;
  return t768;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v769) {
bb770:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this771;
  int* __retval772;
  this771 = v769;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t773 = this771;
  int* t774 = t773->_M_current;
  __retval772 = t774;
  int* t775 = __retval772;
  return t775;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v776, int v777) {
bb778:
  int __a779;
  int __b780;
  int __retval781;
  __a779 = v776;
  __b780 = v777;
  int t782 = __a779;
  int t783 = __b780;
  int b784 = t782 | t783;
  __retval781 = b784;
  int t785 = __retval781;
  return t785;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v786) {
bb787:
  struct std__basic_ios_char__std__char_traits_char__* this788;
  int __retval789;
  this788 = v786;
  struct std__basic_ios_char__std__char_traits_char__* t790 = this788;
  struct std__ios_base* base791 = (struct std__ios_base*)((char *)t790 + 0);
  int t792 = base791->_M_streambuf_state;
  __retval789 = t792;
  int t793 = __retval789;
  return t793;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v794, int v795) {
bb796:
  struct std__basic_ios_char__std__char_traits_char__* this797;
  int __state798;
  this797 = v794;
  __state798 = v795;
  struct std__basic_ios_char__std__char_traits_char__* t799 = this797;
  int r800 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t799);
  int t801 = __state798;
  int r802 = std__operator_(r800, t801);
  std__basic_ios_char__std__char_traits_char_____clear(t799, r802);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v803, char* v804) {
bb805:
  char* __c1806;
  char* __c2807;
  _Bool __retval808;
  __c1806 = v803;
  __c2807 = v804;
  char* t809 = __c1806;
  char t810 = *t809;
  int cast811 = (int)t810;
  char* t812 = __c2807;
  char t813 = *t812;
  int cast814 = (int)t813;
  _Bool c815 = ((cast811 == cast814)) ? 1 : 0;
  __retval808 = c815;
  _Bool t816 = __retval808;
  return t816;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v817) {
bb818:
  char* __p819;
  unsigned long __retval820;
  unsigned long __i821;
  __p819 = v817;
  unsigned long c822 = 0;
  __i821 = c822;
    char ref_tmp0823;
    while (1) {
      unsigned long t824 = __i821;
      char* t825 = __p819;
      char* ptr826 = &(t825)[t824];
      char c827 = 0;
      ref_tmp0823 = c827;
      _Bool r828 = __gnu_cxx__char_traits_char___eq(ptr826, &ref_tmp0823);
      _Bool u829 = !r828;
      if (!u829) break;
      unsigned long t830 = __i821;
      unsigned long u831 = t830 + 1;
      __i821 = u831;
    }
  unsigned long t832 = __i821;
  __retval820 = t832;
  unsigned long t833 = __retval820;
  return t833;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v834) {
bb835:
  char* __s836;
  unsigned long __retval837;
  __s836 = v834;
    _Bool r838 = std____is_constant_evaluated();
    if (r838) {
      char* t839 = __s836;
      unsigned long r840 = __gnu_cxx__char_traits_char___length(t839);
      __retval837 = r840;
      unsigned long t841 = __retval837;
      return t841;
    }
  char* t842 = __s836;
  unsigned long r843 = strlen(t842);
  __retval837 = r843;
  unsigned long t844 = __retval837;
  return t844;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v845, char* v846) {
bb847:
  struct std__basic_ostream_char__std__char_traits_char__* __out848;
  char* __s849;
  struct std__basic_ostream_char__std__char_traits_char__* __retval850;
  __out848 = v845;
  __s849 = v846;
    char* t851 = __s849;
    _Bool cast852 = (_Bool)t851;
    _Bool u853 = !cast852;
    if (u853) {
      struct std__basic_ostream_char__std__char_traits_char__* t854 = __out848;
      void** v855 = (void**)t854;
      void* v856 = *((void**)v855);
      unsigned char* cast857 = (unsigned char*)v856;
      long c858 = -24;
      unsigned char* ptr859 = &(cast857)[c858];
      long* cast860 = (long*)ptr859;
      long t861 = *cast860;
      unsigned char* cast862 = (unsigned char*)t854;
      unsigned char* ptr863 = &(cast862)[t861];
      struct std__basic_ostream_char__std__char_traits_char__* cast864 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr863;
      struct std__basic_ios_char__std__char_traits_char__* cast865 = (struct std__basic_ios_char__std__char_traits_char__*)cast864;
      int t866 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast865, t866);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t867 = __out848;
      char* t868 = __s849;
      char* t869 = __s849;
      unsigned long r870 = std__char_traits_char___length(t869);
      long cast871 = (long)r870;
      struct std__basic_ostream_char__std__char_traits_char__* r872 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t867, t868, cast871);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t873 = __out848;
  __retval850 = t873;
  struct std__basic_ostream_char__std__char_traits_char__* t874 = __retval850;
  return t874;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v875, void* v876) {
bb877:
  struct std__basic_ostream_char__std__char_traits_char__* this878;
  void* __pf879;
  struct std__basic_ostream_char__std__char_traits_char__* __retval880;
  this878 = v875;
  __pf879 = v876;
  struct std__basic_ostream_char__std__char_traits_char__* t881 = this878;
  void* t882 = __pf879;
  struct std__basic_ostream_char__std__char_traits_char__* r883 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t882)(t881);
  __retval880 = r883;
  struct std__basic_ostream_char__std__char_traits_char__* t884 = __retval880;
  return t884;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v885) {
bb886:
  struct std__basic_ostream_char__std__char_traits_char__* __os887;
  struct std__basic_ostream_char__std__char_traits_char__* __retval888;
  __os887 = v885;
  struct std__basic_ostream_char__std__char_traits_char__* t889 = __os887;
  struct std__basic_ostream_char__std__char_traits_char__* r890 = std__ostream__flush(t889);
  __retval888 = r890;
  struct std__basic_ostream_char__std__char_traits_char__* t891 = __retval888;
  return t891;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v892) {
bb893:
  struct std__ctype_char_* __f894;
  struct std__ctype_char_* __retval895;
  __f894 = v892;
    struct std__ctype_char_* t896 = __f894;
    _Bool cast897 = (_Bool)t896;
    _Bool u898 = !cast897;
    if (u898) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t899 = __f894;
  __retval895 = t899;
  struct std__ctype_char_* t900 = __retval895;
  return t900;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v901, char v902) {
bb903:
  struct std__ctype_char_* this904;
  char __c905;
  char __retval906;
  this904 = v901;
  __c905 = v902;
  struct std__ctype_char_* t907 = this904;
    char t908 = t907->_M_widen_ok;
    _Bool cast909 = (_Bool)t908;
    if (cast909) {
      char t910 = __c905;
      unsigned char cast911 = (unsigned char)t910;
      unsigned long cast912 = (unsigned long)cast911;
      char t913 = t907->_M_widen[cast912];
      __retval906 = t913;
      char t914 = __retval906;
      return t914;
    }
  std__ctype_char____M_widen_init___const(t907);
  char t915 = __c905;
  void** v916 = (void**)t907;
  void* v917 = *((void**)v916);
  char vcall920 = (char)__VERIFIER_virtual_call_char_char(t907, 6, t915);
  __retval906 = vcall920;
  char t921 = __retval906;
  return t921;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v922, char v923) {
bb924:
  struct std__basic_ios_char__std__char_traits_char__* this925;
  char __c926;
  char __retval927;
  this925 = v922;
  __c926 = v923;
  struct std__basic_ios_char__std__char_traits_char__* t928 = this925;
  struct std__ctype_char_* t929 = t928->_M_ctype;
  struct std__ctype_char_* r930 = std__ctype_char__const__std____check_facet_std__ctype_char___(t929);
  char t931 = __c926;
  char r932 = std__ctype_char___widen_char__const(r930, t931);
  __retval927 = r932;
  char t933 = __retval927;
  return t933;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v934) {
bb935:
  struct std__basic_ostream_char__std__char_traits_char__* __os936;
  struct std__basic_ostream_char__std__char_traits_char__* __retval937;
  __os936 = v934;
  struct std__basic_ostream_char__std__char_traits_char__* t938 = __os936;
  struct std__basic_ostream_char__std__char_traits_char__* t939 = __os936;
  void** v940 = (void**)t939;
  void* v941 = *((void**)v940);
  unsigned char* cast942 = (unsigned char*)v941;
  long c943 = -24;
  unsigned char* ptr944 = &(cast942)[c943];
  long* cast945 = (long*)ptr944;
  long t946 = *cast945;
  unsigned char* cast947 = (unsigned char*)t939;
  unsigned char* ptr948 = &(cast947)[t946];
  struct std__basic_ostream_char__std__char_traits_char__* cast949 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr948;
  struct std__basic_ios_char__std__char_traits_char__* cast950 = (struct std__basic_ios_char__std__char_traits_char__*)cast949;
  char c951 = 10;
  char r952 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast950, c951);
  struct std__basic_ostream_char__std__char_traits_char__* r953 = std__ostream__put(t938, r952);
  struct std__basic_ostream_char__std__char_traits_char__* r954 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r953);
  __retval937 = r954;
  struct std__basic_ostream_char__std__char_traits_char__* t955 = __retval937;
  return t955;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v956) {
bb957:
  struct std__vector_int__std__allocator_int__* this958;
  this958 = v956;
  struct std__vector_int__std__allocator_int__* t959 = this958;
    struct std___Vector_base_int__std__allocator_int__* base960 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t959 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base961 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base960->_M_impl) + 0);
    int* t962 = base961->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base963 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t959 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base964 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base963->_M_impl) + 0);
    int* t965 = base964->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base966 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t959 + 0);
    struct std__allocator_int_* r967 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base966);
    void_std___Destroy_int___int_(t962, t965, r967);
  {
    struct std___Vector_base_int__std__allocator_int__* base968 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t959 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base968);
  }
  return;
}

// function: main
int main() {
bb969:
  int __retval970;
  struct std__vector_int__std__allocator_int__ myvector971;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it972;
  int match1973[4];
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1974;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0975;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1976;
  int c977 = 0;
  __retval970 = c977;
  std__vector_int__std__allocator_int_____vector(&myvector971);
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it972);
      int i978;
      int ref_tmp0979;
      int c980 = 1;
      i978 = c980;
      while (1) {
        int t982 = i978;
        int c983 = 10;
        _Bool c984 = ((t982 < c983)) ? 1 : 0;
        if (!c984) break;
        int t985 = i978;
        int c986 = 10;
        int b987 = t985 * c986;
        ref_tmp0979 = b987;
        std__vector_int__std__allocator_int_____push_back(&myvector971, &ref_tmp0979);
      for_step981: ;
        int t988 = i978;
        int u989 = t988 + 1;
        i978 = u989;
      }
    // array copy
    __builtin_memcpy(match1973, __const_main_match1, (unsigned long)4 * sizeof(__const_main_match1[0]));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r990 = std__vector_int__std__allocator_int_____begin(&myvector971);
    agg_tmp0975 = r990;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r991 = std__vector_int__std__allocator_int_____end(&myvector971);
    agg_tmp1976 = r991;
    int* cast992 = (int*)&(match1973);
    int* cast993 = (int*)&(match1973);
    int c994 = 4;
    int* ptr995 = &(cast993)[c994];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t996 = agg_tmp0975;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t997 = agg_tmp1976;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r998 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______search___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t996, t997, cast992, ptr995);
    ref_tmp1974 = r998;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r999 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it972, &ref_tmp1974);
    int* r1000 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it972);
    int t1001 = *r1000;
    int c1002 = 40;
    _Bool c1003 = ((t1001 == c1002)) ? 1 : 0;
    if (c1003) {
    } else {
      char* cast1004 = (char*)&(_str);
      char* c1005 = _str_1;
      unsigned int c1006 = 93;
      char* cast1007 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1004, c1005, c1006, cast1007);
    }
    char* cast1008 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r1009 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1008);
    int* r1010 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it972);
    int t1011 = *r1010;
    struct std__basic_ostream_char__std__char_traits_char__* r1012 = std__ostream__operator__(r1009, t1011);
    struct std__basic_ostream_char__std__char_traits_char__* r1013 = std__ostream__operator___std__ostream_____(r1012, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c1014 = 0;
    __retval970 = c1014;
    int t1015 = __retval970;
    int ret_val1016 = t1015;
    {
      std__vector_int__std__allocator_int______vector(&myvector971);
    }
    return ret_val1016;
  int t1017 = __retval970;
  return t1017;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1018) {
bb1019:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1020;
  this1020 = v1018;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1021 = this1020;
  struct std__allocator_int_* base1022 = (struct std__allocator_int_*)((char *)t1021 + 0);
  std__allocator_int___allocator(base1022);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1023 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1021 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1023);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1024) {
bb1025:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1026;
  this1026 = v1024;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1027 = this1026;
  {
    struct std__allocator_int_* base1028 = (struct std__allocator_int_*)((char *)t1027 + 0);
    std__allocator_int____allocator(base1028);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1029) {
bb1030:
  struct std___Vector_base_int__std__allocator_int__* this1031;
  this1031 = v1029;
  struct std___Vector_base_int__std__allocator_int__* t1032 = this1031;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t1032->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1033:
  _Bool __retval1034;
    _Bool c1035 = 0;
    __retval1034 = c1035;
    _Bool t1036 = __retval1034;
    return t1036;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1037, int* v1038, unsigned long v1039) {
bb1040:
  struct std____new_allocator_int_* this1041;
  int* __p1042;
  unsigned long __n1043;
  this1041 = v1037;
  __p1042 = v1038;
  __n1043 = v1039;
  struct std____new_allocator_int_* t1044 = this1041;
    unsigned long c1045 = 4;
    unsigned long c1046 = 16;
    _Bool c1047 = ((c1045 > c1046)) ? 1 : 0;
    if (c1047) {
      int* t1048 = __p1042;
      void* cast1049 = (void*)t1048;
      unsigned long t1050 = __n1043;
      unsigned long c1051 = 4;
      unsigned long b1052 = t1050 * c1051;
      unsigned long c1053 = 4;
      operator_delete_3(cast1049, b1052, c1053);
      return;
    }
  int* t1054 = __p1042;
  void* cast1055 = (void*)t1054;
  unsigned long t1056 = __n1043;
  unsigned long c1057 = 4;
  unsigned long b1058 = t1056 * c1057;
  operator_delete_2(cast1055, b1058);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1059, int* v1060, unsigned long v1061) {
bb1062:
  struct std__allocator_int_* this1063;
  int* __p1064;
  unsigned long __n1065;
  this1063 = v1059;
  __p1064 = v1060;
  __n1065 = v1061;
  struct std__allocator_int_* t1066 = this1063;
    _Bool r1067 = std____is_constant_evaluated();
    if (r1067) {
      int* t1068 = __p1064;
      void* cast1069 = (void*)t1068;
      operator_delete(cast1069);
      return;
    }
  struct std____new_allocator_int_* base1070 = (struct std____new_allocator_int_*)((char *)t1066 + 0);
  int* t1071 = __p1064;
  unsigned long t1072 = __n1065;
  std____new_allocator_int___deallocate(base1070, t1071, t1072);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1073, int* v1074, unsigned long v1075) {
bb1076:
  struct std__allocator_int_* __a1077;
  int* __p1078;
  unsigned long __n1079;
  __a1077 = v1073;
  __p1078 = v1074;
  __n1079 = v1075;
  struct std__allocator_int_* t1080 = __a1077;
  int* t1081 = __p1078;
  unsigned long t1082 = __n1079;
  std__allocator_int___deallocate(t1080, t1081, t1082);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1083, int* v1084, unsigned long v1085) {
bb1086:
  struct std___Vector_base_int__std__allocator_int__* this1087;
  int* __p1088;
  unsigned long __n1089;
  this1087 = v1083;
  __p1088 = v1084;
  __n1089 = v1085;
  struct std___Vector_base_int__std__allocator_int__* t1090 = this1087;
    int* t1091 = __p1088;
    _Bool cast1092 = (_Bool)t1091;
    if (cast1092) {
      struct std__allocator_int_* base1093 = (struct std__allocator_int_*)((char *)&(t1090->_M_impl) + 0);
      int* t1094 = __p1088;
      unsigned long t1095 = __n1089;
      std__allocator_traits_std__allocator_int_____deallocate(base1093, t1094, t1095);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1096) {
bb1097:
  struct std___Vector_base_int__std__allocator_int__* this1098;
  this1098 = v1096;
  struct std___Vector_base_int__std__allocator_int__* t1099 = this1098;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1100 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1099->_M_impl) + 0);
    int* t1101 = base1100->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1102 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1099->_M_impl) + 0);
    int* t1103 = base1102->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1104 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1099->_M_impl) + 0);
    int* t1105 = base1104->_M_start;
    long diff1106 = t1103 - t1105;
    unsigned long cast1107 = (unsigned long)diff1106;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1099, t1101, cast1107);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1099->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1108) {
bb1109:
  struct std____new_allocator_int_* this1110;
  this1110 = v1108;
  struct std____new_allocator_int_* t1111 = this1110;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1112) {
bb1113:
  struct std__allocator_int_* this1114;
  this1114 = v1112;
  struct std__allocator_int_* t1115 = this1114;
  struct std____new_allocator_int_* base1116 = (struct std____new_allocator_int_*)((char *)t1115 + 0);
  std____new_allocator_int_____new_allocator(base1116);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1117) {
bb1118:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1119;
  this1119 = v1117;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1120 = this1119;
  int* c1121 = ((void*)0);
  t1120->_M_start = c1121;
  int* c1122 = ((void*)0);
  t1120->_M_finish = c1122;
  int* c1123 = ((void*)0);
  t1120->_M_end_of_storage = c1123;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1124) {
bb1125:
  struct std__allocator_int_* this1126;
  this1126 = v1124;
  struct std__allocator_int_* t1127 = this1126;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1128, int* v1129) {
bb1130:
  int* __first1131;
  int* __last1132;
  __first1131 = v1128;
  __last1132 = v1129;
      _Bool r1133 = std____is_constant_evaluated();
      if (r1133) {
          while (1) {
            int* t1135 = __first1131;
            int* t1136 = __last1132;
            _Bool c1137 = ((t1135 != t1136)) ? 1 : 0;
            if (!c1137) break;
            int* t1138 = __first1131;
            void_std__destroy_at_int_(t1138);
          for_step1134: ;
            int* t1139 = __first1131;
            int c1140 = 1;
            int* ptr1141 = &(t1139)[c1140];
            __first1131 = ptr1141;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1142, int* v1143, struct std__allocator_int_* v1144) {
bb1145:
  int* __first1146;
  int* __last1147;
  struct std__allocator_int_* unnamed1148;
  __first1146 = v1142;
  __last1147 = v1143;
  unnamed1148 = v1144;
  int* t1149 = __first1146;
  int* t1150 = __last1147;
  void_std___Destroy_int__(t1149, t1150);
  return;
}

