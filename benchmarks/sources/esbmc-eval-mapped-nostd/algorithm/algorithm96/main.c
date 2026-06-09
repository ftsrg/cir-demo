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

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[20] = "myvector[2] == NULL";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm96/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[19] = "myvector contains:";
char _str_3[2] = " ";
char _str_4[26] = "vector::_M_realloc_append";
char _str_5[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[19] = "__n < this->size()";
extern int rand();
long myrandom(long p0);
extern void srand(unsigned int p0);
extern long time(long* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* p0, int* p1, int* p2);
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
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* p0, int* p1, int* p2);
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
void void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(struct std__vector_int__std__allocator_int__* p0, int* p1);
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* p0, int* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* p0, int* p1);
void void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
void void_std__random_shuffle___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void void_std__random_shuffle___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long______long_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, void** p2);
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
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
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

void* p_myrandom __attribute__((aligned(8))) = (void*)(&_Z8myrandoml);
// function: _Z8myrandoml
long myrandom(long v0) {
bb1:
  long i2;
  long __retval3;
  i2 = v0;
  int r4 = rand();
  long cast5 = (long)r4;
  long t6 = i2;
  long b7 = cast5 % t6;
  __retval3 = b7;
  long t8 = __retval3;
  return t8;
}

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v9) {
bb10:
  struct std__vector_int__std__allocator_int__* this11;
  this11 = v9;
  struct std__vector_int__std__allocator_int__* t12 = this11;
  struct std___Vector_base_int__std__allocator_int__* base13 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t12 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base(base13);
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v14) {
bb15:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this16;
  this16 = v14;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t17 = this16;
  int* c18 = ((void*)0);
  t17->_M_current = c18;
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v19, int* v20) {
bb21:
  int* __location22;
  int* __args23;
  int* __retval24;
  void* __loc25;
  __location22 = v19;
  __args23 = v20;
  int* t26 = __location22;
  void* cast27 = (void*)t26;
  __loc25 = cast27;
    void* t28 = __loc25;
    int* cast29 = (int*)t28;
    int* t30 = __args23;
    int t31 = *t30;
    *cast29 = t31;
    __retval24 = cast29;
    int* t32 = __retval24;
    return t32;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* v33, int* v34, int* v35) {
bb36:
  struct std__allocator_int_* __a37;
  int* __p38;
  int* __args39;
  __a37 = v33;
  __p38 = v34;
  __args39 = v35;
  int* t40 = __p38;
  int* t41 = __args39;
  int* r42 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t40, t41);
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v43, unsigned long* v44) {
bb45:
  unsigned long* __a46;
  unsigned long* __b47;
  unsigned long* __retval48;
  __a46 = v43;
  __b47 = v44;
    unsigned long* t49 = __b47;
    unsigned long t50 = *t49;
    unsigned long* t51 = __a46;
    unsigned long t52 = *t51;
    _Bool c53 = ((t50 < t52)) ? 1 : 0;
    if (c53) {
      unsigned long* t54 = __b47;
      __retval48 = t54;
      unsigned long* t55 = __retval48;
      return t55;
    }
  unsigned long* t56 = __a46;
  __retval48 = t56;
  unsigned long* t57 = __retval48;
  return t57;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v58) {
bb59:
  struct std__allocator_int_* __a60;
  unsigned long __retval61;
  unsigned long __diffmax62;
  unsigned long __allocmax63;
  __a60 = v58;
  unsigned long c64 = 2305843009213693951;
  __diffmax62 = c64;
  unsigned long c65 = 4611686018427387903;
  __allocmax63 = c65;
  unsigned long* r66 = unsigned_long_const__std__min_unsigned_long_(&__diffmax62, &__allocmax63);
  unsigned long t67 = *r66;
  __retval61 = t67;
  unsigned long t68 = __retval61;
  return t68;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v69) {
bb70:
  struct std___Vector_base_int__std__allocator_int__* this71;
  struct std__allocator_int_* __retval72;
  this71 = v69;
  struct std___Vector_base_int__std__allocator_int__* t73 = this71;
  struct std__allocator_int_* base74 = (struct std__allocator_int_*)((char *)&(t73->_M_impl) + 0);
  __retval72 = base74;
  struct std__allocator_int_* t75 = __retval72;
  return t75;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v76) {
bb77:
  struct std__vector_int__std__allocator_int__* this78;
  unsigned long __retval79;
  this78 = v76;
  struct std__vector_int__std__allocator_int__* t80 = this78;
  struct std___Vector_base_int__std__allocator_int__* base81 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t80 + 0);
  struct std__allocator_int_* r82 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base81);
  unsigned long r83 = std__vector_int__std__allocator_int______S_max_size(r82);
  __retval79 = r83;
  unsigned long t84 = __retval79;
  return t84;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v85) {
bb86:
  struct std__vector_int__std__allocator_int__* this87;
  unsigned long __retval88;
  long __dif89;
  this87 = v85;
  struct std__vector_int__std__allocator_int__* t90 = this87;
  struct std___Vector_base_int__std__allocator_int__* base91 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t90 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base92 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base91->_M_impl) + 0);
  int* t93 = base92->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base94 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t90 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base95 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base94->_M_impl) + 0);
  int* t96 = base95->_M_start;
  long diff97 = t93 - t96;
  __dif89 = diff97;
    long t98 = __dif89;
    long c99 = 0;
    _Bool c100 = ((t98 < c99)) ? 1 : 0;
    if (c100) {
      __builtin_unreachable();
    }
  long t101 = __dif89;
  unsigned long cast102 = (unsigned long)t101;
  __retval88 = cast102;
  unsigned long t103 = __retval88;
  return t103;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v104, unsigned long* v105) {
bb106:
  unsigned long* __a107;
  unsigned long* __b108;
  unsigned long* __retval109;
  __a107 = v104;
  __b108 = v105;
    unsigned long* t110 = __a107;
    unsigned long t111 = *t110;
    unsigned long* t112 = __b108;
    unsigned long t113 = *t112;
    _Bool c114 = ((t111 < t113)) ? 1 : 0;
    if (c114) {
      unsigned long* t115 = __b108;
      __retval109 = t115;
      unsigned long* t116 = __retval109;
      return t116;
    }
  unsigned long* t117 = __a107;
  __retval109 = t117;
  unsigned long* t118 = __retval109;
  return t118;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v119, unsigned long v120, char* v121) {
bb122:
  struct std__vector_int__std__allocator_int__* this123;
  unsigned long __n124;
  char* __s125;
  unsigned long __retval126;
  unsigned long __len127;
  unsigned long ref_tmp0128;
  this123 = v119;
  __n124 = v120;
  __s125 = v121;
  struct std__vector_int__std__allocator_int__* t129 = this123;
    unsigned long r130 = std__vector_int__std__allocator_int_____max_size___const(t129);
    unsigned long r131 = std__vector_int__std__allocator_int_____size___const(t129);
    unsigned long b132 = r130 - r131;
    unsigned long t133 = __n124;
    _Bool c134 = ((b132 < t133)) ? 1 : 0;
    if (c134) {
      char* t135 = __s125;
      std____throw_length_error(t135);
    }
  unsigned long r136 = std__vector_int__std__allocator_int_____size___const(t129);
  unsigned long r137 = std__vector_int__std__allocator_int_____size___const(t129);
  ref_tmp0128 = r137;
  unsigned long* r138 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0128, &__n124);
  unsigned long t139 = *r138;
  unsigned long b140 = r136 + t139;
  __len127 = b140;
  unsigned long t141 = __len127;
  unsigned long r142 = std__vector_int__std__allocator_int_____size___const(t129);
  _Bool c143 = ((t141 < r142)) ? 1 : 0;
  _Bool ternary144;
  if (c143) {
    _Bool c145 = 1;
    ternary144 = (_Bool)c145;
  } else {
    unsigned long t146 = __len127;
    unsigned long r147 = std__vector_int__std__allocator_int_____max_size___const(t129);
    _Bool c148 = ((t146 > r147)) ? 1 : 0;
    ternary144 = (_Bool)c148;
  }
  unsigned long ternary149;
  if (ternary144) {
    unsigned long r150 = std__vector_int__std__allocator_int_____max_size___const(t129);
    ternary149 = (unsigned long)r150;
  } else {
    unsigned long t151 = __len127;
    ternary149 = (unsigned long)t151;
  }
  __retval126 = ternary149;
  unsigned long t152 = __retval126;
  return t152;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v153) {
bb154:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this155;
  int** __retval156;
  this155 = v153;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t157 = this155;
  __retval156 = &t157->_M_current;
  int** t158 = __retval156;
  return t158;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v159, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v160) {
bb161:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs162;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs163;
  long __retval164;
  __lhs162 = v159;
  __rhs163 = v160;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t165 = __lhs162;
  int** r166 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t165);
  int* t167 = *r166;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t168 = __rhs163;
  int** r169 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t168);
  int* t170 = *r169;
  long diff171 = t167 - t170;
  __retval164 = diff171;
  long t172 = __retval164;
  return t172;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v173) {
bb174:
  struct std____new_allocator_int_* this175;
  unsigned long __retval176;
  this175 = v173;
  struct std____new_allocator_int_* t177 = this175;
  unsigned long c178 = 9223372036854775807;
  unsigned long c179 = 4;
  unsigned long b180 = c178 / c179;
  __retval176 = b180;
  unsigned long t181 = __retval176;
  return t181;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v182, unsigned long v183, void* v184) {
bb185:
  struct std____new_allocator_int_* this186;
  unsigned long __n187;
  void* unnamed188;
  int* __retval189;
  this186 = v182;
  __n187 = v183;
  unnamed188 = v184;
  struct std____new_allocator_int_* t190 = this186;
    unsigned long t191 = __n187;
    unsigned long r192 = std____new_allocator_int____M_max_size___const(t190);
    _Bool c193 = ((t191 > r192)) ? 1 : 0;
    if (c193) {
        unsigned long t194 = __n187;
        unsigned long c195 = -1;
        unsigned long c196 = 4;
        unsigned long b197 = c195 / c196;
        _Bool c198 = ((t194 > b197)) ? 1 : 0;
        if (c198) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c199 = 4;
    unsigned long c200 = 16;
    _Bool c201 = ((c199 > c200)) ? 1 : 0;
    if (c201) {
      unsigned long __al202;
      unsigned long c203 = 4;
      __al202 = c203;
      unsigned long t204 = __n187;
      unsigned long c205 = 4;
      unsigned long b206 = t204 * c205;
      unsigned long t207 = __al202;
      void* r208 = operator_new_2(b206, t207);
      int* cast209 = (int*)r208;
      __retval189 = cast209;
      int* t210 = __retval189;
      return t210;
    }
  unsigned long t211 = __n187;
  unsigned long c212 = 4;
  unsigned long b213 = t211 * c212;
  void* r214 = operator_new(b213);
  int* cast215 = (int*)r214;
  __retval189 = cast215;
  int* t216 = __retval189;
  return t216;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v217, unsigned long v218) {
bb219:
  struct std__allocator_int_* this220;
  unsigned long __n221;
  int* __retval222;
  this220 = v217;
  __n221 = v218;
  struct std__allocator_int_* t223 = this220;
    _Bool r224 = std____is_constant_evaluated();
    if (r224) {
        unsigned long t225 = __n221;
        unsigned long c226 = 4;
        unsigned long ovr227;
        _Bool ovf228 = __builtin_mul_overflow(t225, c226, &ovr227);
        __n221 = ovr227;
        if (ovf228) {
          std____throw_bad_array_new_length();
        }
      unsigned long t229 = __n221;
      void* r230 = operator_new(t229);
      int* cast231 = (int*)r230;
      __retval222 = cast231;
      int* t232 = __retval222;
      return t232;
    }
  struct std____new_allocator_int_* base233 = (struct std____new_allocator_int_*)((char *)t223 + 0);
  unsigned long t234 = __n221;
  void* c235 = ((void*)0);
  int* r236 = std____new_allocator_int___allocate(base233, t234, c235);
  __retval222 = r236;
  int* t237 = __retval222;
  return t237;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v238, unsigned long v239) {
bb240:
  struct std__allocator_int_* __a241;
  unsigned long __n242;
  int* __retval243;
  __a241 = v238;
  __n242 = v239;
  struct std__allocator_int_* t244 = __a241;
  unsigned long t245 = __n242;
  int* r246 = std__allocator_int___allocate(t244, t245);
  __retval243 = r246;
  int* t247 = __retval243;
  return t247;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v248, unsigned long v249) {
bb250:
  struct std___Vector_base_int__std__allocator_int__* this251;
  unsigned long __n252;
  int* __retval253;
  this251 = v248;
  __n252 = v249;
  struct std___Vector_base_int__std__allocator_int__* t254 = this251;
  unsigned long t255 = __n252;
  unsigned long c256 = 0;
  _Bool c257 = ((t255 != c256)) ? 1 : 0;
  int* ternary258;
  if (c257) {
    struct std__allocator_int_* base259 = (struct std__allocator_int_*)((char *)&(t254->_M_impl) + 0);
    unsigned long t260 = __n252;
    int* r261 = std__allocator_traits_std__allocator_int_____allocate(base259, t260);
    ternary258 = (int*)r261;
  } else {
    int* c262 = ((void*)0);
    ternary258 = (int*)c262;
  }
  __retval253 = ternary258;
  int* t263 = __retval253;
  return t263;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v264, int* v265, unsigned long v266, struct std___Vector_base_int__std__allocator_int__* v267) {
bb268:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this269;
  int* __s270;
  unsigned long __l271;
  struct std___Vector_base_int__std__allocator_int__* __vect272;
  this269 = v264;
  __s270 = v265;
  __l271 = v266;
  __vect272 = v267;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t273 = this269;
  int* t274 = __s270;
  t273->_M_storage = t274;
  unsigned long t275 = __l271;
  t273->_M_len = t275;
  struct std___Vector_base_int__std__allocator_int__* t276 = __vect272;
  t273->_M_vect = t276;
  return;
}

// function: _ZSt10to_addressIiEPT_S1_
int* int__std__to_address_int_(int* v277) {
bb278:
  int* __ptr279;
  int* __retval280;
  __ptr279 = v277;
  int* t281 = __ptr279;
  __retval280 = t281;
  int* t282 = __retval280;
  return t282;
}

// function: _ZSt12__to_addressIPiEDaRKT_
int* auto_std____to_address_int__(int** v283) {
bb284:
  int** __ptr285;
  int* __retval286;
  __ptr285 = v283;
  int** t287 = __ptr285;
  int* t288 = *t287;
  int* r289 = int__std__to_address_int_(t288);
  __retval286 = r289;
  int* t290 = __retval286;
  return t290;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb291:
  _Bool __retval292;
    _Bool c293 = 0;
    __retval292 = c293;
    _Bool t294 = __retval292;
    return t294;
  abort();
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v295, int** v296) {
bb297:
  struct __gnu_cxx____normal_iterator_int____void_* this298;
  int** __i299;
  this298 = v295;
  __i299 = v296;
  struct __gnu_cxx____normal_iterator_int____void_* t300 = this298;
  int** t301 = __i299;
  int* t302 = *t301;
  t300->_M_current = t302;
  return;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v303, int* v304) {
bb305:
  int* __location306;
  int* __args307;
  int* __retval308;
  void* __loc309;
  __location306 = v303;
  __args307 = v304;
  int* t310 = __location306;
  void* cast311 = (void*)t310;
  __loc309 = cast311;
    void* t312 = __loc309;
    int* cast313 = (int*)t312;
    int* t314 = __args307;
    int t315 = *t314;
    *cast313 = t315;
    __retval308 = cast313;
    int* t316 = __retval308;
    return t316;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v317, int* v318, int* v319) {
bb320:
  struct std__allocator_int_* __a321;
  int* __p322;
  int* __args323;
  __a321 = v317;
  __p322 = v318;
  __args323 = v319;
  int* t324 = __p322;
  int* t325 = __args323;
  int* r326 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t324, t325);
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v327) {
bb328:
  int* __location329;
  __location329 = v327;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v330, int* v331) {
bb332:
  struct std__allocator_int_* __a333;
  int* __p334;
  __a333 = v330;
  __p334 = v331;
  int* t335 = __p334;
  void_std__destroy_at_int_(t335);
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v336, int* v337, struct std__allocator_int_* v338) {
bb339:
  int* __dest340;
  int* __orig341;
  struct std__allocator_int_* __alloc342;
  __dest340 = v336;
  __orig341 = v337;
  __alloc342 = v338;
  struct std__allocator_int_* t343 = __alloc342;
  int* t344 = __dest340;
  int* t345 = __orig341;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t343, t344, t345);
  struct std__allocator_int_* t346 = __alloc342;
  int* t347 = __orig341;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t346, t347);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v348) {
bb349:
  struct __gnu_cxx____normal_iterator_int____void_* this350;
  int* __retval351;
  this350 = v348;
  struct __gnu_cxx____normal_iterator_int____void_* t352 = this350;
  int* t353 = t352->_M_current;
  __retval351 = t353;
  int* t354 = __retval351;
  return t354;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v355) {
bb356:
  struct __gnu_cxx____normal_iterator_int____void_* this357;
  struct __gnu_cxx____normal_iterator_int____void_* __retval358;
  this357 = v355;
  struct __gnu_cxx____normal_iterator_int____void_* t359 = this357;
  int* t360 = t359->_M_current;
  int c361 = 1;
  int* ptr362 = &(t360)[c361];
  t359->_M_current = ptr362;
  __retval358 = t359;
  struct __gnu_cxx____normal_iterator_int____void_* t363 = __retval358;
  return t363;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v364, int* v365, struct __gnu_cxx____normal_iterator_int____void_ v366, struct std__allocator_int_* v367) {
bb368:
  int* __first369;
  int* __last370;
  struct __gnu_cxx____normal_iterator_int____void_ __result371;
  struct std__allocator_int_* __alloc372;
  struct __gnu_cxx____normal_iterator_int____void_ __retval373;
  __first369 = v364;
  __last370 = v365;
  __result371 = v366;
  __alloc372 = v367;
  __retval373 = __result371; // copy
    while (1) {
      int* t375 = __first369;
      int* t376 = __last370;
      _Bool c377 = ((t375 != t376)) ? 1 : 0;
      if (!c377) break;
      int* r378 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval373);
      int* t379 = __first369;
      struct std__allocator_int_* t380 = __alloc372;
      void_std____relocate_object_a_int__int__std__allocator_int___(r378, t379, t380);
    for_step374: ;
      int* t381 = __first369;
      int c382 = 1;
      int* ptr383 = &(t381)[c382];
      __first369 = ptr383;
      struct __gnu_cxx____normal_iterator_int____void_* r384 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval373);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t385 = __retval373;
  return t385;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v386, struct __gnu_cxx____normal_iterator_int____void_* v387) {
bb388:
  struct __gnu_cxx____normal_iterator_int____void_* this389;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed390;
  struct __gnu_cxx____normal_iterator_int____void_* __retval391;
  this389 = v386;
  unnamed390 = v387;
  struct __gnu_cxx____normal_iterator_int____void_* t392 = this389;
  struct __gnu_cxx____normal_iterator_int____void_* t393 = unnamed390;
  int* t394 = t393->_M_current;
  t392->_M_current = t394;
  __retval391 = t392;
  struct __gnu_cxx____normal_iterator_int____void_* t395 = __retval391;
  return t395;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v396) {
bb397:
  struct __gnu_cxx____normal_iterator_int____void_* this398;
  int** __retval399;
  this398 = v396;
  struct __gnu_cxx____normal_iterator_int____void_* t400 = this398;
  __retval399 = &t400->_M_current;
  int** t401 = __retval399;
  return t401;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v402, int* v403, int* v404, struct std__allocator_int_* v405) {
bb406:
  int* __first407;
  int* __last408;
  int* __result409;
  struct std__allocator_int_* __alloc410;
  int* __retval411;
  long __count412;
  __first407 = v402;
  __last408 = v403;
  __result409 = v404;
  __alloc410 = v405;
  int* t413 = __last408;
  int* t414 = __first407;
  long diff415 = t413 - t414;
  __count412 = diff415;
    long t416 = __count412;
    long c417 = 0;
    _Bool c418 = ((t416 > c417)) ? 1 : 0;
    if (c418) {
        _Bool r419 = std__is_constant_evaluated();
        if (r419) {
          struct __gnu_cxx____normal_iterator_int____void_ __out420;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0421;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0422;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out420, &__result409);
          int* t423 = __first407;
          int* t424 = __last408;
          agg_tmp0422 = __out420; // copy
          struct std__allocator_int_* t425 = __alloc410;
          struct __gnu_cxx____normal_iterator_int____void_ t426 = agg_tmp0422;
          struct __gnu_cxx____normal_iterator_int____void_ r427 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t423, t424, t426, t425);
          ref_tmp0421 = r427;
          struct __gnu_cxx____normal_iterator_int____void_* r428 = __gnu_cxx____normal_iterator_int___void___operator_(&__out420, &ref_tmp0421);
          int** r429 = __gnu_cxx____normal_iterator_int___void___base___const(&__out420);
          int* t430 = *r429;
          __retval411 = t430;
          int* t431 = __retval411;
          return t431;
        }
      int* t432 = __result409;
      void* cast433 = (void*)t432;
      int* t434 = __first407;
      void* cast435 = (void*)t434;
      long t436 = __count412;
      unsigned long cast437 = (unsigned long)t436;
      unsigned long c438 = 4;
      unsigned long b439 = cast437 * c438;
      void* r440 = memcpy(cast433, cast435, b439);
    }
  int* t441 = __result409;
  long t442 = __count412;
  int* ptr443 = &(t441)[t442];
  __retval411 = ptr443;
  int* t444 = __retval411;
  return t444;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v445) {
bb446:
  int* __it447;
  int* __retval448;
  __it447 = v445;
  int* t449 = __it447;
  __retval448 = t449;
  int* t450 = __retval448;
  return t450;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v451, int* v452, int* v453, struct std__allocator_int_* v454) {
bb455:
  int* __first456;
  int* __last457;
  int* __result458;
  struct std__allocator_int_* __alloc459;
  int* __retval460;
  __first456 = v451;
  __last457 = v452;
  __result458 = v453;
  __alloc459 = v454;
  int* t461 = __first456;
  int* r462 = int__std____niter_base_int__(t461);
  int* t463 = __last457;
  int* r464 = int__std____niter_base_int__(t463);
  int* t465 = __result458;
  int* r466 = int__std____niter_base_int__(t465);
  struct std__allocator_int_* t467 = __alloc459;
  int* r468 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r462, r464, r466, t467);
  __retval460 = r468;
  int* t469 = __retval460;
  return t469;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v470, int* v471, int* v472, struct std__allocator_int_* v473) {
bb474:
  int* __first475;
  int* __last476;
  int* __result477;
  struct std__allocator_int_* __alloc478;
  int* __retval479;
  __first475 = v470;
  __last476 = v471;
  __result477 = v472;
  __alloc478 = v473;
  int* t480 = __first475;
  int* t481 = __last476;
  int* t482 = __result477;
  struct std__allocator_int_* t483 = __alloc478;
  int* r484 = int__std____relocate_a_int___int___std__allocator_int___(t480, t481, t482, t483);
  __retval479 = r484;
  int* t485 = __retval479;
  return t485;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v486) {
bb487:
  struct std___Vector_base_int__std__allocator_int__* this488;
  struct std__allocator_int_* __retval489;
  this488 = v486;
  struct std___Vector_base_int__std__allocator_int__* t490 = this488;
  struct std__allocator_int_* base491 = (struct std__allocator_int_*)((char *)&(t490->_M_impl) + 0);
  __retval489 = base491;
  struct std__allocator_int_* t492 = __retval489;
  return t492;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v493) {
bb494:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this495;
  this495 = v493;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t496 = this495;
    int* t497 = t496->_M_storage;
    _Bool cast498 = (_Bool)t497;
    if (cast498) {
      struct std___Vector_base_int__std__allocator_int__* t499 = t496->_M_vect;
      int* t500 = t496->_M_storage;
      unsigned long t501 = t496->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t499, t500, t501);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_realloc_appendIJRKiEEEvDpOT_
void void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(struct std__vector_int__std__allocator_int__* v502, int* v503) {
bb504:
  struct std__vector_int__std__allocator_int__* this505;
  int* __args506;
  unsigned long __len507;
  int* __old_start508;
  int* __old_finish509;
  unsigned long __elems510;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0511;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1512;
  int* __new_start513;
  int* __new_finish514;
  this505 = v502;
  __args506 = v503;
  struct std__vector_int__std__allocator_int__* t515 = this505;
  unsigned long c516 = 1;
  char* cast517 = (char*)&(_str_4);
  unsigned long r518 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t515, c516, cast517);
  __len507 = r518;
    unsigned long t519 = __len507;
    unsigned long c520 = 0;
    _Bool c521 = ((t519 <= c520)) ? 1 : 0;
    if (c521) {
      __builtin_unreachable();
    }
  struct std___Vector_base_int__std__allocator_int__* base522 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t515 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base523 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base522->_M_impl) + 0);
  int* t524 = base523->_M_start;
  __old_start508 = t524;
  struct std___Vector_base_int__std__allocator_int__* base525 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t515 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base526 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base525->_M_impl) + 0);
  int* t527 = base526->_M_finish;
  __old_finish509 = t527;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r528 = std__vector_int__std__allocator_int_____end(t515);
  ref_tmp0511 = r528;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r529 = std__vector_int__std__allocator_int_____begin(t515);
  ref_tmp1512 = r529;
  long r530 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp0511, &ref_tmp1512);
  unsigned long cast531 = (unsigned long)r530;
  __elems510 = cast531;
  struct std___Vector_base_int__std__allocator_int__* base532 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t515 + 0);
  unsigned long t533 = __len507;
  int* r534 = std___Vector_base_int__std__allocator_int______M_allocate(base532, t533);
  __new_start513 = r534;
  int* t535 = __new_start513;
  __new_finish514 = t535;
    struct std__vector_int__std__allocator_int_____Guard_alloc __guard536;
    int* ref_tmp2537;
    int* t538 = __new_start513;
    unsigned long t539 = __len507;
    struct std___Vector_base_int__std__allocator_int__* base540 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t515 + 0);
    std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard536, t538, t539, base540);
      struct std___Vector_base_int__std__allocator_int__* base541 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t515 + 0);
      struct std__allocator_int_* base542 = (struct std__allocator_int_*)((char *)&(base541->_M_impl) + 0);
      int* t543 = __new_start513;
      unsigned long t544 = __elems510;
      int* ptr545 = &(t543)[t544];
      ref_tmp2537 = ptr545;
      int* r546 = auto_std____to_address_int__(&ref_tmp2537);
      int* t547 = __args506;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base542, r546, t547);
        int* t548 = __old_start508;
        int* t549 = __old_finish509;
        int* t550 = __new_start513;
        struct std___Vector_base_int__std__allocator_int__* base551 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t515 + 0);
        struct std__allocator_int_* r552 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base551);
        int* r553 = std__vector_int__std__allocator_int______S_relocate(t548, t549, t550, r552);
        __new_finish514 = r553;
        int* t554 = __new_finish514;
        int c555 = 1;
        int* ptr556 = &(t554)[c555];
        __new_finish514 = ptr556;
      int* t557 = __old_start508;
      __guard536._M_storage = t557;
      struct std___Vector_base_int__std__allocator_int__* base558 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t515 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base559 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base558->_M_impl) + 0);
      int* t560 = base559->_M_end_of_storage;
      int* t561 = __old_start508;
      long diff562 = t560 - t561;
      unsigned long cast563 = (unsigned long)diff562;
      __guard536._M_len = cast563;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard536);
    }
  int* t564 = __new_start513;
  struct std___Vector_base_int__std__allocator_int__* base565 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t515 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base566 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base565->_M_impl) + 0);
  base566->_M_start = t564;
  int* t567 = __new_finish514;
  struct std___Vector_base_int__std__allocator_int__* base568 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t515 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base569 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base568->_M_impl) + 0);
  base569->_M_finish = t567;
  int* t570 = __new_start513;
  unsigned long t571 = __len507;
  int* ptr572 = &(t570)[t571];
  struct std___Vector_base_int__std__allocator_int__* base573 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t515 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base574 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base573->_M_impl) + 0);
  base574->_M_end_of_storage = ptr572;
  return;
}

// function: _ZNSt6vectorIiSaIiEE9push_backERKi
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* v575, int* v576) {
bb577:
  struct std__vector_int__std__allocator_int__* this578;
  int* __x579;
  this578 = v575;
  __x579 = v576;
  struct std__vector_int__std__allocator_int__* t580 = this578;
    struct std___Vector_base_int__std__allocator_int__* base581 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t580 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base582 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base581->_M_impl) + 0);
    int* t583 = base582->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base584 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t580 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base585 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base584->_M_impl) + 0);
    int* t586 = base585->_M_end_of_storage;
    _Bool c587 = ((t583 != t586)) ? 1 : 0;
    if (c587) {
      struct std___Vector_base_int__std__allocator_int__* base588 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t580 + 0);
      struct std__allocator_int_* base589 = (struct std__allocator_int_*)((char *)&(base588->_M_impl) + 0);
      struct std___Vector_base_int__std__allocator_int__* base590 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t580 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base591 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base590->_M_impl) + 0);
      int* t592 = base591->_M_finish;
      int* t593 = __x579;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base589, t592, t593);
      struct std___Vector_base_int__std__allocator_int__* base594 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t580 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base595 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base594->_M_impl) + 0);
      int* t596 = base595->_M_finish;
      int c597 = 1;
      int* ptr598 = &(t596)[c597];
      base595->_M_finish = ptr598;
    } else {
      int* t599 = __x579;
      void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(t580, t599);
    }
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v600, long v601) {
bb602:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this603;
  long __n604;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval605;
  int* ref_tmp0606;
  this603 = v600;
  __n604 = v601;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t607 = this603;
  int* t608 = t607->_M_current;
  long t609 = __n604;
  int* ptr610 = &(t608)[t609];
  ref_tmp0606 = ptr610;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval605, &ref_tmp0606);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t611 = __retval605;
  return t611;
}

// function: _ZSt4swapIiENSt9enable_ifIXsr6__and_ISt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS3_ESt18is_move_assignableIS3_EEE5valueEvE4typeERS3_SC_
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* v612, int* v613) {
bb614:
  int* __a615;
  int* __b616;
  int __tmp617;
  __a615 = v612;
  __b616 = v613;
  int* t618 = __a615;
  int t619 = *t618;
  __tmp617 = t619;
  int* t620 = __b616;
  int t621 = *t620;
  int* t622 = __a615;
  *t622 = t621;
  int t623 = __tmp617;
  int* t624 = __b616;
  *t624 = t623;
  return;
}

// function: _ZSt9iter_swapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EvT_T0_
void void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v625, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v626) {
bb627:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __a628;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __b629;
  __a628 = v625;
  __b629 = v626;
  int* r630 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__a628);
  int* r631 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__b629);
  std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(r630, r631);
  return;
}

// function: _ZSt14random_shuffleIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_
void void_std__random_shuffle___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v632, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v633) {
bb634:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first635;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last636;
  __first635 = v632;
  __last636 = v633;
    _Bool r637 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first635, &__last636);
    if (r637) {
      return;
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __i638;
    long c639 = 1;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r640 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first635, c639);
    __i638 = r640;
    while (1) {
      _Bool r642 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__i638, &__last636);
      _Bool u643 = !r642;
      if (!u643) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __j644;
        int r645 = rand();
        long cast646 = (long)r645;
        long r647 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__i638, &__first635);
        long c648 = 1;
        long b649 = r647 + c648;
        long b650 = cast646 % b649;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r651 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first635, b650);
        __j644 = r651;
          _Bool r652 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__i638, &__j644);
          _Bool u653 = !r652;
          if (u653) {
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0654;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1655;
            agg_tmp0654 = __i638; // copy
            agg_tmp1655 = __j644; // copy
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t656 = agg_tmp0654;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t657 = agg_tmp1655;
            void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t656, t657);
          }
    for_step641: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r658 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__i638);
    }
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v659, int** v660) {
bb661:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this662;
  int** __i663;
  this662 = v659;
  __i663 = v660;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t664 = this662;
  int** t665 = __i663;
  int* t666 = *t665;
  t664->_M_current = t666;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v667) {
bb668:
  struct std__vector_int__std__allocator_int__* this669;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval670;
  this669 = v667;
  struct std__vector_int__std__allocator_int__* t671 = this669;
  struct std___Vector_base_int__std__allocator_int__* base672 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t671 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base673 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base672->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval670, &base673->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t674 = __retval670;
  return t674;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v675) {
bb676:
  struct std__vector_int__std__allocator_int__* this677;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval678;
  this677 = v675;
  struct std__vector_int__std__allocator_int__* t679 = this677;
  struct std___Vector_base_int__std__allocator_int__* base680 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t679 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base681 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base680->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval678, &base681->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t682 = __retval678;
  return t682;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v683, unsigned long v684) {
bb685:
  struct std__vector_int__std__allocator_int__* this686;
  unsigned long __n687;
  int* __retval688;
  this686 = v683;
  __n687 = v684;
  struct std__vector_int__std__allocator_int__* t689 = this686;
    do {
          unsigned long t690 = __n687;
          unsigned long r691 = std__vector_int__std__allocator_int_____size___const(t689);
          _Bool c692 = ((t690 < r691)) ? 1 : 0;
          _Bool u693 = !c692;
          if (u693) {
            char* cast694 = (char*)&(_str_5);
            int c695 = 1263;
            char* cast696 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast697 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast694, c695, cast696, cast697);
          }
      _Bool c698 = 0;
      if (!c698) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base699 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t689 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base700 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base699->_M_impl) + 0);
  int* t701 = base700->_M_start;
  unsigned long t702 = __n687;
  int* ptr703 = &(t701)[t702];
  __retval688 = ptr703;
  int* t704 = __retval688;
  return t704;
}

// function: _ZSt14random_shuffleIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEERPFllEEvT_SA_OT0_
void void_std__random_shuffle___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long______long_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v705, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v706, void** v707) {
bb708:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first709;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last710;
  void** __rand711;
  __first709 = v705;
  __last710 = v706;
  __rand711 = v707;
    _Bool r712 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first709, &__last710);
    if (r712) {
      return;
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __i713;
    long c714 = 1;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r715 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first709, c714);
    __i713 = r715;
    while (1) {
      _Bool r717 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__i713, &__last710);
      _Bool u718 = !r717;
      if (!u718) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __j719;
        void** t720 = __rand711;
        void* t721 = *t720;
        long r722 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__i713, &__first709);
        long c723 = 1;
        long b724 = r722 + c723;
        long r725 = ((long (*)(long))t721)(b724);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r726 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first709, r725);
        __j719 = r726;
          _Bool r727 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__i713, &__j719);
          _Bool u728 = !r727;
          if (u728) {
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0729;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1730;
            agg_tmp0729 = __i713; // copy
            agg_tmp1730 = __j719; // copy
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t731 = agg_tmp0729;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t732 = agg_tmp1730;
            void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t731, t732);
          }
    for_step716: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r733 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__i713);
    }
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v734, int v735) {
bb736:
  int __a737;
  int __b738;
  int __retval739;
  __a737 = v734;
  __b738 = v735;
  int t740 = __a737;
  int t741 = __b738;
  int b742 = t740 | t741;
  __retval739 = b742;
  int t743 = __retval739;
  return t743;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v744) {
bb745:
  struct std__basic_ios_char__std__char_traits_char__* this746;
  int __retval747;
  this746 = v744;
  struct std__basic_ios_char__std__char_traits_char__* t748 = this746;
  struct std__ios_base* base749 = (struct std__ios_base*)((char *)t748 + 0);
  int t750 = base749->_M_streambuf_state;
  __retval747 = t750;
  int t751 = __retval747;
  return t751;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v752, int v753) {
bb754:
  struct std__basic_ios_char__std__char_traits_char__* this755;
  int __state756;
  this755 = v752;
  __state756 = v753;
  struct std__basic_ios_char__std__char_traits_char__* t757 = this755;
  int r758 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t757);
  int t759 = __state756;
  int r760 = std__operator_(r758, t759);
  std__basic_ios_char__std__char_traits_char_____clear(t757, r760);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v761, char* v762) {
bb763:
  char* __c1764;
  char* __c2765;
  _Bool __retval766;
  __c1764 = v761;
  __c2765 = v762;
  char* t767 = __c1764;
  char t768 = *t767;
  int cast769 = (int)t768;
  char* t770 = __c2765;
  char t771 = *t770;
  int cast772 = (int)t771;
  _Bool c773 = ((cast769 == cast772)) ? 1 : 0;
  __retval766 = c773;
  _Bool t774 = __retval766;
  return t774;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v775) {
bb776:
  char* __p777;
  unsigned long __retval778;
  unsigned long __i779;
  __p777 = v775;
  unsigned long c780 = 0;
  __i779 = c780;
    char ref_tmp0781;
    while (1) {
      unsigned long t782 = __i779;
      char* t783 = __p777;
      char* ptr784 = &(t783)[t782];
      char c785 = 0;
      ref_tmp0781 = c785;
      _Bool r786 = __gnu_cxx__char_traits_char___eq(ptr784, &ref_tmp0781);
      _Bool u787 = !r786;
      if (!u787) break;
      unsigned long t788 = __i779;
      unsigned long u789 = t788 + 1;
      __i779 = u789;
    }
  unsigned long t790 = __i779;
  __retval778 = t790;
  unsigned long t791 = __retval778;
  return t791;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v792) {
bb793:
  char* __s794;
  unsigned long __retval795;
  __s794 = v792;
    _Bool r796 = std____is_constant_evaluated();
    if (r796) {
      char* t797 = __s794;
      unsigned long r798 = __gnu_cxx__char_traits_char___length(t797);
      __retval795 = r798;
      unsigned long t799 = __retval795;
      return t799;
    }
  char* t800 = __s794;
  unsigned long r801 = strlen(t800);
  __retval795 = r801;
  unsigned long t802 = __retval795;
  return t802;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v803, char* v804) {
bb805:
  struct std__basic_ostream_char__std__char_traits_char__* __out806;
  char* __s807;
  struct std__basic_ostream_char__std__char_traits_char__* __retval808;
  __out806 = v803;
  __s807 = v804;
    char* t809 = __s807;
    _Bool cast810 = (_Bool)t809;
    _Bool u811 = !cast810;
    if (u811) {
      struct std__basic_ostream_char__std__char_traits_char__* t812 = __out806;
      void** v813 = (void**)t812;
      void* v814 = *((void**)v813);
      unsigned char* cast815 = (unsigned char*)v814;
      long c816 = -24;
      unsigned char* ptr817 = &(cast815)[c816];
      long* cast818 = (long*)ptr817;
      long t819 = *cast818;
      unsigned char* cast820 = (unsigned char*)t812;
      unsigned char* ptr821 = &(cast820)[t819];
      struct std__basic_ostream_char__std__char_traits_char__* cast822 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr821;
      struct std__basic_ios_char__std__char_traits_char__* cast823 = (struct std__basic_ios_char__std__char_traits_char__*)cast822;
      int t824 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast823, t824);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t825 = __out806;
      char* t826 = __s807;
      char* t827 = __s807;
      unsigned long r828 = std__char_traits_char___length(t827);
      long cast829 = (long)r828;
      struct std__basic_ostream_char__std__char_traits_char__* r830 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t825, t826, cast829);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t831 = __out806;
  __retval808 = t831;
  struct std__basic_ostream_char__std__char_traits_char__* t832 = __retval808;
  return t832;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v833, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v834) {
bb835:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this836;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed837;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval838;
  this836 = v833;
  unnamed837 = v834;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t839 = this836;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t840 = unnamed837;
  int* t841 = t840->_M_current;
  t839->_M_current = t841;
  __retval838 = t839;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t842 = __retval838;
  return t842;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v843, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v844) {
bb845:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs846;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs847;
  _Bool __retval848;
  __lhs846 = v843;
  __rhs847 = v844;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t849 = __lhs846;
  int** r850 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t849);
  int* t851 = *r850;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t852 = __rhs847;
  int** r853 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t852);
  int* t854 = *r853;
  _Bool c855 = ((t851 == t854)) ? 1 : 0;
  __retval848 = c855;
  _Bool t856 = __retval848;
  return t856;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v857) {
bb858:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this859;
  int* __retval860;
  this859 = v857;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t861 = this859;
  int* t862 = t861->_M_current;
  __retval860 = t862;
  int* t863 = __retval860;
  return t863;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v864) {
bb865:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this866;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval867;
  this866 = v864;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t868 = this866;
  int* t869 = t868->_M_current;
  int c870 = 1;
  int* ptr871 = &(t869)[c870];
  t868->_M_current = ptr871;
  __retval867 = t868;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t872 = __retval867;
  return t872;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v873, void* v874) {
bb875:
  struct std__basic_ostream_char__std__char_traits_char__* this876;
  void* __pf877;
  struct std__basic_ostream_char__std__char_traits_char__* __retval878;
  this876 = v873;
  __pf877 = v874;
  struct std__basic_ostream_char__std__char_traits_char__* t879 = this876;
  void* t880 = __pf877;
  struct std__basic_ostream_char__std__char_traits_char__* r881 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t880)(t879);
  __retval878 = r881;
  struct std__basic_ostream_char__std__char_traits_char__* t882 = __retval878;
  return t882;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v883) {
bb884:
  struct std__basic_ostream_char__std__char_traits_char__* __os885;
  struct std__basic_ostream_char__std__char_traits_char__* __retval886;
  __os885 = v883;
  struct std__basic_ostream_char__std__char_traits_char__* t887 = __os885;
  struct std__basic_ostream_char__std__char_traits_char__* r888 = std__ostream__flush(t887);
  __retval886 = r888;
  struct std__basic_ostream_char__std__char_traits_char__* t889 = __retval886;
  return t889;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v890) {
bb891:
  struct std__ctype_char_* __f892;
  struct std__ctype_char_* __retval893;
  __f892 = v890;
    struct std__ctype_char_* t894 = __f892;
    _Bool cast895 = (_Bool)t894;
    _Bool u896 = !cast895;
    if (u896) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t897 = __f892;
  __retval893 = t897;
  struct std__ctype_char_* t898 = __retval893;
  return t898;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v899, char v900) {
bb901:
  struct std__ctype_char_* this902;
  char __c903;
  char __retval904;
  this902 = v899;
  __c903 = v900;
  struct std__ctype_char_* t905 = this902;
    char t906 = t905->_M_widen_ok;
    _Bool cast907 = (_Bool)t906;
    if (cast907) {
      char t908 = __c903;
      unsigned char cast909 = (unsigned char)t908;
      unsigned long cast910 = (unsigned long)cast909;
      char t911 = t905->_M_widen[cast910];
      __retval904 = t911;
      char t912 = __retval904;
      return t912;
    }
  std__ctype_char____M_widen_init___const(t905);
  char t913 = __c903;
  void** v914 = (void**)t905;
  void* v915 = *((void**)v914);
  char vcall918 = (char)__VERIFIER_virtual_call_char_char(t905, 6, t913);
  __retval904 = vcall918;
  char t919 = __retval904;
  return t919;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v920, char v921) {
bb922:
  struct std__basic_ios_char__std__char_traits_char__* this923;
  char __c924;
  char __retval925;
  this923 = v920;
  __c924 = v921;
  struct std__basic_ios_char__std__char_traits_char__* t926 = this923;
  struct std__ctype_char_* t927 = t926->_M_ctype;
  struct std__ctype_char_* r928 = std__ctype_char__const__std____check_facet_std__ctype_char___(t927);
  char t929 = __c924;
  char r930 = std__ctype_char___widen_char__const(r928, t929);
  __retval925 = r930;
  char t931 = __retval925;
  return t931;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v932) {
bb933:
  struct std__basic_ostream_char__std__char_traits_char__* __os934;
  struct std__basic_ostream_char__std__char_traits_char__* __retval935;
  __os934 = v932;
  struct std__basic_ostream_char__std__char_traits_char__* t936 = __os934;
  struct std__basic_ostream_char__std__char_traits_char__* t937 = __os934;
  void** v938 = (void**)t937;
  void* v939 = *((void**)v938);
  unsigned char* cast940 = (unsigned char*)v939;
  long c941 = -24;
  unsigned char* ptr942 = &(cast940)[c941];
  long* cast943 = (long*)ptr942;
  long t944 = *cast943;
  unsigned char* cast945 = (unsigned char*)t937;
  unsigned char* ptr946 = &(cast945)[t944];
  struct std__basic_ostream_char__std__char_traits_char__* cast947 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr946;
  struct std__basic_ios_char__std__char_traits_char__* cast948 = (struct std__basic_ios_char__std__char_traits_char__*)cast947;
  char c949 = 10;
  char r950 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast948, c949);
  struct std__basic_ostream_char__std__char_traits_char__* r951 = std__ostream__put(t936, r950);
  struct std__basic_ostream_char__std__char_traits_char__* r952 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r951);
  __retval935 = r952;
  struct std__basic_ostream_char__std__char_traits_char__* t953 = __retval935;
  return t953;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v954) {
bb955:
  struct std__vector_int__std__allocator_int__* this956;
  this956 = v954;
  struct std__vector_int__std__allocator_int__* t957 = this956;
    struct std___Vector_base_int__std__allocator_int__* base958 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t957 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base959 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base958->_M_impl) + 0);
    int* t960 = base959->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base961 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t957 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base962 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base961->_M_impl) + 0);
    int* t963 = base962->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base964 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t957 + 0);
    struct std__allocator_int_* r965 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base964);
    void_std___Destroy_int___int_(t960, t963, r965);
  {
    struct std___Vector_base_int__std__allocator_int__* base966 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t957 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base966);
  }
  return;
}

// function: main
int main() {
bb967:
  int __retval968;
  struct std__vector_int__std__allocator_int__ myvector969;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it970;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0971;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1972;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2973;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3974;
  int c975 = 0;
  __retval968 = c975;
  long* c976 = ((void*)0);
  long r977 = time(c976);
  unsigned int cast978 = (unsigned int)r977;
  srand(cast978);
  std__vector_int__std__allocator_int_____vector(&myvector969);
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it970);
      int i979;
      int c980 = 1;
      i979 = c980;
      while (1) {
        int t982 = i979;
        int c983 = 10;
        _Bool c984 = ((t982 < c983)) ? 1 : 0;
        if (!c984) break;
        std__vector_int__std__allocator_int_____push_back(&myvector969, &i979);
      for_step981: ;
        int t985 = i979;
        int u986 = t985 + 1;
        i979 = u986;
      }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r987 = std__vector_int__std__allocator_int_____begin(&myvector969);
    agg_tmp0971 = r987;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r988 = std__vector_int__std__allocator_int_____end(&myvector969);
    agg_tmp1972 = r988;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t989 = agg_tmp0971;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t990 = agg_tmp1972;
    void_std__random_shuffle___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t989, t990);
    unsigned long c991 = 2;
    int* r992 = std__vector_int__std__allocator_int_____operator__(&myvector969, c991);
    int t993 = *r992;
    long cast994 = (long)t993;
    long c995 = 0;
    _Bool c996 = ((cast994 == c995)) ? 1 : 0;
    if (c996) {
    } else {
      char* cast997 = (char*)&(_str);
      char* c998 = _str_1;
      unsigned int c999 = 34;
      char* cast1000 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast997, c998, c999, cast1000);
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1001 = std__vector_int__std__allocator_int_____begin(&myvector969);
    agg_tmp2973 = r1001;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1002 = std__vector_int__std__allocator_int_____end(&myvector969);
    agg_tmp3974 = r1002;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1003 = agg_tmp2973;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1004 = agg_tmp3974;
    void_std__random_shuffle___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long______long_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long_____(t1003, t1004, &p_myrandom);
    char* cast1005 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r1006 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1005);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp01007;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp11008;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1009 = std__vector_int__std__allocator_int_____begin(&myvector969);
      ref_tmp01007 = r1009;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1010 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it970, &ref_tmp01007);
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1012 = std__vector_int__std__allocator_int_____end(&myvector969);
        ref_tmp11008 = r1012;
        _Bool r1013 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it970, &ref_tmp11008);
        _Bool u1014 = !r1013;
        if (!u1014) break;
        char* cast1015 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r1016 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1015);
        int* r1017 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it970);
        int t1018 = *r1017;
        struct std__basic_ostream_char__std__char_traits_char__* r1019 = std__ostream__operator__(r1016, t1018);
      for_step1011: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1020 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&it970);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r1021 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c1022 = 0;
    __retval968 = c1022;
    int t1023 = __retval968;
    int ret_val1024 = t1023;
    {
      std__vector_int__std__allocator_int______vector(&myvector969);
    }
    return ret_val1024;
  int t1025 = __retval968;
  return t1025;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1026) {
bb1027:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1028;
  this1028 = v1026;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1029 = this1028;
  struct std__allocator_int_* base1030 = (struct std__allocator_int_*)((char *)t1029 + 0);
  std__allocator_int___allocator(base1030);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1031 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1029 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1031);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1032) {
bb1033:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1034;
  this1034 = v1032;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1035 = this1034;
  {
    struct std__allocator_int_* base1036 = (struct std__allocator_int_*)((char *)t1035 + 0);
    std__allocator_int____allocator(base1036);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1037) {
bb1038:
  struct std___Vector_base_int__std__allocator_int__* this1039;
  this1039 = v1037;
  struct std___Vector_base_int__std__allocator_int__* t1040 = this1039;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t1040->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1041:
  _Bool __retval1042;
    _Bool c1043 = 0;
    __retval1042 = c1043;
    _Bool t1044 = __retval1042;
    return t1044;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1045, int* v1046, unsigned long v1047) {
bb1048:
  struct std____new_allocator_int_* this1049;
  int* __p1050;
  unsigned long __n1051;
  this1049 = v1045;
  __p1050 = v1046;
  __n1051 = v1047;
  struct std____new_allocator_int_* t1052 = this1049;
    unsigned long c1053 = 4;
    unsigned long c1054 = 16;
    _Bool c1055 = ((c1053 > c1054)) ? 1 : 0;
    if (c1055) {
      int* t1056 = __p1050;
      void* cast1057 = (void*)t1056;
      unsigned long t1058 = __n1051;
      unsigned long c1059 = 4;
      unsigned long b1060 = t1058 * c1059;
      unsigned long c1061 = 4;
      operator_delete_3(cast1057, b1060, c1061);
      return;
    }
  int* t1062 = __p1050;
  void* cast1063 = (void*)t1062;
  unsigned long t1064 = __n1051;
  unsigned long c1065 = 4;
  unsigned long b1066 = t1064 * c1065;
  operator_delete_2(cast1063, b1066);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1067, int* v1068, unsigned long v1069) {
bb1070:
  struct std__allocator_int_* this1071;
  int* __p1072;
  unsigned long __n1073;
  this1071 = v1067;
  __p1072 = v1068;
  __n1073 = v1069;
  struct std__allocator_int_* t1074 = this1071;
    _Bool r1075 = std____is_constant_evaluated();
    if (r1075) {
      int* t1076 = __p1072;
      void* cast1077 = (void*)t1076;
      operator_delete(cast1077);
      return;
    }
  struct std____new_allocator_int_* base1078 = (struct std____new_allocator_int_*)((char *)t1074 + 0);
  int* t1079 = __p1072;
  unsigned long t1080 = __n1073;
  std____new_allocator_int___deallocate(base1078, t1079, t1080);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1081, int* v1082, unsigned long v1083) {
bb1084:
  struct std__allocator_int_* __a1085;
  int* __p1086;
  unsigned long __n1087;
  __a1085 = v1081;
  __p1086 = v1082;
  __n1087 = v1083;
  struct std__allocator_int_* t1088 = __a1085;
  int* t1089 = __p1086;
  unsigned long t1090 = __n1087;
  std__allocator_int___deallocate(t1088, t1089, t1090);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1091, int* v1092, unsigned long v1093) {
bb1094:
  struct std___Vector_base_int__std__allocator_int__* this1095;
  int* __p1096;
  unsigned long __n1097;
  this1095 = v1091;
  __p1096 = v1092;
  __n1097 = v1093;
  struct std___Vector_base_int__std__allocator_int__* t1098 = this1095;
    int* t1099 = __p1096;
    _Bool cast1100 = (_Bool)t1099;
    if (cast1100) {
      struct std__allocator_int_* base1101 = (struct std__allocator_int_*)((char *)&(t1098->_M_impl) + 0);
      int* t1102 = __p1096;
      unsigned long t1103 = __n1097;
      std__allocator_traits_std__allocator_int_____deallocate(base1101, t1102, t1103);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1104) {
bb1105:
  struct std___Vector_base_int__std__allocator_int__* this1106;
  this1106 = v1104;
  struct std___Vector_base_int__std__allocator_int__* t1107 = this1106;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1108 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1107->_M_impl) + 0);
    int* t1109 = base1108->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1110 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1107->_M_impl) + 0);
    int* t1111 = base1110->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1112 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1107->_M_impl) + 0);
    int* t1113 = base1112->_M_start;
    long diff1114 = t1111 - t1113;
    unsigned long cast1115 = (unsigned long)diff1114;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1107, t1109, cast1115);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1107->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1116) {
bb1117:
  struct std____new_allocator_int_* this1118;
  this1118 = v1116;
  struct std____new_allocator_int_* t1119 = this1118;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1120) {
bb1121:
  struct std__allocator_int_* this1122;
  this1122 = v1120;
  struct std__allocator_int_* t1123 = this1122;
  struct std____new_allocator_int_* base1124 = (struct std____new_allocator_int_*)((char *)t1123 + 0);
  std____new_allocator_int_____new_allocator(base1124);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1125) {
bb1126:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1127;
  this1127 = v1125;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1128 = this1127;
  int* c1129 = ((void*)0);
  t1128->_M_start = c1129;
  int* c1130 = ((void*)0);
  t1128->_M_finish = c1130;
  int* c1131 = ((void*)0);
  t1128->_M_end_of_storage = c1131;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1132) {
bb1133:
  struct std__allocator_int_* this1134;
  this1134 = v1132;
  struct std__allocator_int_* t1135 = this1134;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1136, int* v1137) {
bb1138:
  int* __first1139;
  int* __last1140;
  __first1139 = v1136;
  __last1140 = v1137;
      _Bool r1141 = std____is_constant_evaluated();
      if (r1141) {
          while (1) {
            int* t1143 = __first1139;
            int* t1144 = __last1140;
            _Bool c1145 = ((t1143 != t1144)) ? 1 : 0;
            if (!c1145) break;
            int* t1146 = __first1139;
            void_std__destroy_at_int_(t1146);
          for_step1142: ;
            int* t1147 = __first1139;
            int c1148 = 1;
            int* ptr1149 = &(t1147)[c1148];
            __first1139 = ptr1149;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1150, int* v1151, struct std__allocator_int_* v1152) {
bb1153:
  int* __first1154;
  int* __last1155;
  struct std__allocator_int_* unnamed1156;
  __first1154 = v1150;
  __last1155 = v1151;
  unnamed1156 = v1152;
  int* t1157 = __first1154;
  int* t1158 = __last1155;
  void_std___Destroy_int__(t1157, t1158);
  return;
}

