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
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Deque_iterator_int__int____int___ { int* _M_cur; int* _M_first; int* _M_last; int** _M_node; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std____new_allocator_int___ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__allocator_int___ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl_data { int** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_int__int____int___ _M_start; struct std___Deque_iterator_int__int____int___ _M_finish; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl { struct std___Deque_base_int__std__allocator_int_____Deque_impl_data __field0; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std___Deque_base_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int_____Deque_impl _M_impl; };
struct std__deque_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[20] = "mydeque.back() != 0";
char _str_1[113] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_push_back_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[21] = "mydeque.size() != 10";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[16] = "mydeque stores ";
char _str_4[11] = " numbers.\n";
char _str_5[48] = "cannot create std::deque larger than max_size()";
char _str_6[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv[76] = "reference std::deque<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_7[15] = "!this->empty()";
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* p0);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* p0, int* p1, int* p2);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__deque_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
unsigned long std__deque_int__std__allocator_int_____max_size___const(struct std__deque_int__std__allocator_int__* p0);
extern void std____throw_length_error(char* p0);
int** int___std____niter_wrap_int___(int*** p0, int** p1);
long std__iterator_traits_int_____difference_type_std____distance_int___(int** p0, int** p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_int_____iterator_category_std____iterator_category_int___(int*** p0);
long std__iterator_traits_int_____difference_type_std__distance_int___(int** p0, int** p1);
extern void* memmove(void* p0, void* p1, unsigned long p2);
void void_std____assign_one_false__int____int___(int*** p0, int*** p1);
int** int___std____copy_move_a2_false__int____int____int___(int** p0, int** p1, int** p2);
int** int___std____copy_move_a1_false__int____int___(int** p0, int** p1, int** p2);
int** int___std____niter_base_int___(int** p0);
int** int___std____copy_move_a_false__int____int___(int** p0, int** p1, int** p2);
int** int___std____miter_base_int___(int** p0);
int** int___std__copy_int____int___(int** p0, int** p1, int** p2);
_Bool std__is_constant_evaluated();
void void_std____advance_int____long_(int*** p0, long p1, struct std__random_access_iterator_tag p2);
void void_std__advance_int____long_(int*** p0, long p1);
int** int___std____copy_move_backward_a2_false__int____int___(int** p0, int** p1, int** p2);
int** int___std____copy_move_backward_a1_false__int____int___(int** p0, int** p1, int** p2);
int** int___std____copy_move_backward_a_false__int____int___(int** p0, int** p1, int** p2);
int** int___std__copy_backward_int____int___(int** p0, int** p1, int** p2);
void std__deque_int__std__allocator_int______M_reallocate_map(struct std__deque_int__std__allocator_int__* p0, unsigned long p1, _Bool p2);
void std__deque_int__std__allocator_int______M_reserve_map_at_back(struct std__deque_int__std__allocator_int__* p0, unsigned long p1);
void void_std__deque_int__std__allocator_int______M_push_back_aux_int_const__(struct std__deque_int__std__allocator_int__* p0, int* p1);
void std__deque_int__std__allocator_int_____push_back(struct std__deque_int__std__allocator_int__* p0, int* p1);
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
_Bool std__deque_int__std__allocator_int_____empty___const(struct std__deque_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* p0);
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* p0);
int* std__deque_int__std__allocator_int_____back(struct std__deque_int__std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
long std__operator_(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* p0);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__2(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* p0);
int main();
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* p0);
unsigned long std____deque_buf_size(unsigned long p0);
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* p0);
void std__allocator_int____allocator_int_(struct std__allocator_int___* p0, struct std__allocator_int_* p1);
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* p0);
_Bool std____is_constant_evaluated();
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* p0, unsigned long p1, void* p2);
int** std__allocator_int____allocate(struct std__allocator_int___* p0, unsigned long p1);
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* p0, unsigned long p1);
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* p0, unsigned long p1);
extern int __gxx_personality_v0();
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* p0);
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* p0, unsigned long p1, void* p2);
int* std__allocator_int___allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* p0);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* p0, int* p1);
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* p0, int** p1, int** p2);
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* p0, int** p1, int** p2);
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* p0, int** p1, unsigned long p2);
void std__allocator_int____deallocate(struct std__allocator_int___* p0, int** p1, unsigned long p2);
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* p0, int** p1, unsigned long p2);
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* p0, int** p1, unsigned long p2);
unsigned long std___Deque_iterator_int__int___int_____S_buffer_size();
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* p0, int** p1);
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* p0, unsigned long p1);
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* p0);
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* p0);
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0);
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* p0);
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* p0);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* p0);
void void_std__destroy_at_int_(int* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
unsigned long std__deque_int__std__allocator_int______S_buffer_size();
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2, struct std__allocator_int_* p3);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* p0);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* p0);
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* p0);

// function: _ZNSt5dequeIiSaIiEEC2Ev
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* v0) {
bb1:
  struct std__deque_int__std__allocator_int__* this2;
  this2 = v0;
  struct std__deque_int__std__allocator_int__* t3 = this2;
  struct std___Deque_base_int__std__allocator_int__* base4 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t3 + 0);
  std___Deque_base_int__std__allocator_int______Deque_base(base4);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v5, int* v6) {
bb7:
  int* __location8;
  int* __args9;
  int* __retval10;
  void* __loc11;
  __location8 = v5;
  __args9 = v6;
  int* t12 = __location8;
  void* cast13 = (void*)t12;
  __loc11 = cast13;
    void* t14 = __loc11;
    int* cast15 = (int*)t14;
    int* t16 = __args9;
    int t17 = *t16;
    *cast15 = t17;
    __retval10 = cast15;
    int* t18 = __retval10;
    return t18;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* v19, int* v20, int* v21) {
bb22:
  struct std__allocator_int_* __a23;
  int* __p24;
  int* __args25;
  __a23 = v19;
  __p24 = v20;
  __args25 = v21;
  int* t26 = __p24;
  int* t27 = __args25;
  int* r28 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t26, t27);
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v29, unsigned long* v30) {
bb31:
  unsigned long* __a32;
  unsigned long* __b33;
  unsigned long* __retval34;
  __a32 = v29;
  __b33 = v30;
    unsigned long* t35 = __b33;
    unsigned long t36 = *t35;
    unsigned long* t37 = __a32;
    unsigned long t38 = *t37;
    _Bool c39 = ((t36 < t38)) ? 1 : 0;
    if (c39) {
      unsigned long* t40 = __b33;
      __retval34 = t40;
      unsigned long* t41 = __retval34;
      return t41;
    }
  unsigned long* t42 = __a32;
  __retval34 = t42;
  unsigned long* t43 = __retval34;
  return t43;
}

// function: _ZNSt5dequeIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__deque_int__std__allocator_int______S_max_size(struct std__allocator_int_* v44) {
bb45:
  struct std__allocator_int_* __a46;
  unsigned long __retval47;
  unsigned long __diffmax48;
  unsigned long __allocmax49;
  __a46 = v44;
  unsigned long c50 = 9223372036854775807;
  __diffmax48 = c50;
  unsigned long c51 = 4611686018427387903;
  __allocmax49 = c51;
  unsigned long* r52 = unsigned_long_const__std__min_unsigned_long_(&__diffmax48, &__allocmax49);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t53 = *r52;
  __retval47 = t53;
  unsigned long t54 = __retval47;
  return t54;
}

// function: _ZNKSt5dequeIiSaIiEE8max_sizeEv
unsigned long std__deque_int__std__allocator_int_____max_size___const(struct std__deque_int__std__allocator_int__* v55) {
bb56:
  struct std__deque_int__std__allocator_int__* this57;
  unsigned long __retval58;
  this57 = v55;
  struct std__deque_int__std__allocator_int__* t59 = this57;
  struct std___Deque_base_int__std__allocator_int__* base60 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t59 + 0);
  struct std__allocator_int_* r61 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(base60);
  unsigned long r62 = std__deque_int__std__allocator_int______S_max_size(r61);
  __retval58 = r62;
  unsigned long t63 = __retval58;
  return t63;
}

// function: _ZSt12__niter_wrapIPPiET_RKS2_S2_
int** int___std____niter_wrap_int___(int*** v64, int** v65) {
bb66:
  int*** unnamed67;
  int** __res68;
  int** __retval69;
  unnamed67 = v64;
  __res68 = v65;
  int** t70 = __res68;
  __retval69 = t70;
  int** t71 = __retval69;
  return t71;
}

// function: _ZSt10__distanceIPPiENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_int_____difference_type_std____distance_int___(int** v72, int** v73, struct std__random_access_iterator_tag v74) {
bb75:
  int** __first76;
  int** __last77;
  struct std__random_access_iterator_tag unnamed78;
  long __retval79;
  __first76 = v72;
  __last77 = v73;
  unnamed78 = v74;
  int** t80 = __last77;
  int** t81 = __first76;
  long diff82 = t80 - t81;
  __retval79 = diff82;
  long t83 = __retval79;
  return t83;
}

// function: _ZSt19__iterator_categoryIPPiENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_int_____iterator_category_std____iterator_category_int___(int*** v84) {
bb85:
  int*** unnamed86;
  struct std__random_access_iterator_tag __retval87;
  unnamed86 = v84;
  struct std__random_access_iterator_tag t88 = __retval87;
  return t88;
}

// function: _ZSt8distanceIPPiENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_int_____difference_type_std__distance_int___(int** v89, int** v90) {
bb91:
  int** __first92;
  int** __last93;
  long __retval94;
  struct std__random_access_iterator_tag agg_tmp095;
  __first92 = v89;
  __last93 = v90;
  int** t96 = __first92;
  int** t97 = __last93;
  struct std__random_access_iterator_tag r98 = std__iterator_traits_int_____iterator_category_std____iterator_category_int___(&__first92);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp095 = r98;
  struct std__random_access_iterator_tag t99 = agg_tmp095;
  long r100 = std__iterator_traits_int_____difference_type_std____distance_int___(t96, t97, t99);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval94 = r100;
  long t101 = __retval94;
  return t101;
}

// function: _ZSt12__assign_oneILb0EPPiS1_EvRT0_RT1_
void void_std____assign_one_false__int____int___(int*** v102, int*** v103) {
bb104:
  int*** __out105;
  int*** __in106;
  __out105 = v102;
  __in106 = v103;
    int*** t107 = __in106;
    int** t108 = *t107;
    int* t109 = *t108;
    int*** t110 = __out105;
    int** t111 = *t110;
    *t111 = t109;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPPiS1_S1_ET2_T0_T1_S2_
int** int___std____copy_move_a2_false__int____int____int___(int** v112, int** v113, int** v114) {
bb115:
  int** __first116;
  int** __last117;
  int** __result118;
  int** __retval119;
  __first116 = v112;
  __last117 = v113;
  __result118 = v114;
      _Bool r120 = std____is_constant_evaluated();
      if (r120) {
      } else {
          long __n121;
          int** t122 = __first116;
          int** t123 = __last117;
          long r124 = std__iterator_traits_int_____difference_type_std__distance_int___(t122, t123);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
          __n121 = r124;
            long t125 = __n121;
            long c126 = 1;
            _Bool c127 = ((t125 > c126)) ? 1 : 0;
            if (c127) {
              int** t128 = __result118;
              void* cast129 = (void*)t128;
              int** t130 = __first116;
              void* cast131 = (void*)t130;
              long t132 = __n121;
              unsigned long cast133 = (unsigned long)t132;
              unsigned long c134 = 8;
              unsigned long b135 = cast133 * c134;
              void* r136 = memmove(cast129, cast131, b135);
              long t137 = __n121;
              int** t138 = __result118;
              int** ptr139 = &(t138)[t137];
              __result118 = ptr139;
            } else {
                long t140 = __n121;
                long c141 = 1;
                _Bool c142 = ((t140 == c141)) ? 1 : 0;
                if (c142) {
                  void_std____assign_one_false__int____int___(&__result118, &__first116);
                  if (__cir_exc_active) {
                    int** __cir_eh_ret = (int**)0;
                    return __cir_eh_ret;
                  }
                  int** t143 = __result118;
                  int c144 = 1;
                  int** ptr145 = &(t143)[c144];
                  __result118 = ptr145;
                }
            }
          int** t146 = __result118;
          __retval119 = t146;
          int** t147 = __retval119;
          return t147;
      }
    while (1) {
      int** t149 = __first116;
      int** t150 = __last117;
      _Bool c151 = ((t149 != t150)) ? 1 : 0;
      if (!c151) break;
      void_std____assign_one_false__int____int___(&__result118, &__first116);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
    for_step148: ;
      int** t152 = __result118;
      int c153 = 1;
      int** ptr154 = &(t152)[c153];
      __result118 = ptr154;
      int** t155 = __first116;
      int c156 = 1;
      int** ptr157 = &(t155)[c156];
      __first116 = ptr157;
    }
  int** t158 = __result118;
  __retval119 = t158;
  int** t159 = __retval119;
  return t159;
}

// function: _ZSt14__copy_move_a1ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_a1_false__int____int___(int** v160, int** v161, int** v162) {
bb163:
  int** __first164;
  int** __last165;
  int** __result166;
  int** __retval167;
  __first164 = v160;
  __last165 = v161;
  __result166 = v162;
  int** t168 = __first164;
  int** t169 = __last165;
  int** t170 = __result166;
  int** r171 = int___std____copy_move_a2_false__int____int____int___(t168, t169, t170);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval167 = r171;
  int** t172 = __retval167;
  return t172;
}

// function: _ZSt12__niter_baseIPPiET_S2_
int** int___std____niter_base_int___(int** v173) {
bb174:
  int** __it175;
  int** __retval176;
  __it175 = v173;
  int** t177 = __it175;
  __retval176 = t177;
  int** t178 = __retval176;
  return t178;
}

// function: _ZSt13__copy_move_aILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_a_false__int____int___(int** v179, int** v180, int** v181) {
bb182:
  int** __first183;
  int** __last184;
  int** __result185;
  int** __retval186;
  __first183 = v179;
  __last184 = v180;
  __result185 = v181;
  int** t187 = __first183;
  int** r188 = int___std____niter_base_int___(t187);
  int** t189 = __last184;
  int** r190 = int___std____niter_base_int___(t189);
  int** t191 = __result185;
  int** r192 = int___std____niter_base_int___(t191);
  int** r193 = int___std____copy_move_a1_false__int____int___(r188, r190, r192);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** r194 = int___std____niter_wrap_int___(&__result185, r193);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval186 = r194;
  int** t195 = __retval186;
  return t195;
}

// function: _ZSt12__miter_baseIPPiET_S2_
int** int___std____miter_base_int___(int** v196) {
bb197:
  int** __it198;
  int** __retval199;
  __it198 = v196;
  int** t200 = __it198;
  __retval199 = t200;
  int** t201 = __retval199;
  return t201;
}

// function: _ZSt4copyIPPiS1_ET0_T_S3_S2_
int** int___std__copy_int____int___(int** v202, int** v203, int** v204) {
bb205:
  int** __first206;
  int** __last207;
  int** __result208;
  int** __retval209;
  __first206 = v202;
  __last207 = v203;
  __result208 = v204;
  int** t210 = __first206;
  int** r211 = int___std____miter_base_int___(t210);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t212 = __last207;
  int** r213 = int___std____miter_base_int___(t212);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t214 = __result208;
  int** r215 = int___std____copy_move_a_false__int____int___(r211, r213, t214);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval209 = r215;
  int** t216 = __retval209;
  return t216;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb217:
  _Bool __retval218;
    _Bool c219 = 0;
    __retval218 = c219;
    _Bool t220 = __retval218;
    return t220;
  abort();
}

// function: _ZSt9__advanceIPPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int____long_(int*** v221, long v222, struct std__random_access_iterator_tag v223) {
bb224:
  int*** __i225;
  long __n226;
  struct std__random_access_iterator_tag unnamed227;
  __i225 = v221;
  __n226 = v222;
  unnamed227 = v223;
    long t228 = __n226;
    _Bool isconst229 = 0;
    _Bool ternary230;
    if (isconst229) {
      long t231 = __n226;
      long c232 = 1;
      _Bool c233 = ((t231 == c232)) ? 1 : 0;
      ternary230 = (_Bool)c233;
    } else {
      _Bool c234 = 0;
      ternary230 = (_Bool)c234;
    }
    if (ternary230) {
      int*** t235 = __i225;
      int** t236 = *t235;
      int c237 = 1;
      int** ptr238 = &(t236)[c237];
      *t235 = ptr238;
    } else {
        long t239 = __n226;
        _Bool isconst240 = 0;
        _Bool ternary241;
        if (isconst240) {
          long t242 = __n226;
          long c243 = -1;
          _Bool c244 = ((t242 == c243)) ? 1 : 0;
          ternary241 = (_Bool)c244;
        } else {
          _Bool c245 = 0;
          ternary241 = (_Bool)c245;
        }
        if (ternary241) {
          int*** t246 = __i225;
          int** t247 = *t246;
          int c248 = -1;
          int** ptr249 = &(t247)[c248];
          *t246 = ptr249;
        } else {
          long t250 = __n226;
          int*** t251 = __i225;
          int** t252 = *t251;
          int** ptr253 = &(t252)[t250];
          *t251 = ptr253;
        }
    }
  return;
}

// function: _ZSt7advanceIPPilEvRT_T0_
void void_std__advance_int____long_(int*** v254, long v255) {
bb256:
  int*** __i257;
  long __n258;
  long __d259;
  struct std__random_access_iterator_tag agg_tmp0260;
  __i257 = v254;
  __n258 = v255;
  long t261 = __n258;
  __d259 = t261;
  int*** t262 = __i257;
  long t263 = __d259;
  int*** t264 = __i257;
  struct std__random_access_iterator_tag r265 = std__iterator_traits_int_____iterator_category_std____iterator_category_int___(t264);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp0260 = r265;
  struct std__random_access_iterator_tag t266 = agg_tmp0260;
  void_std____advance_int____long_(t262, t263, t266);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt23__copy_move_backward_a2ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a2_false__int____int___(int** v267, int** v268, int** v269) {
bb270:
  int** __first271;
  int** __last272;
  int** __result273;
  int** __retval274;
  __first271 = v267;
  __last272 = v268;
  __result273 = v269;
      _Bool r275 = std__is_constant_evaluated();
      if (r275) {
      } else {
          long __n276;
          int** t277 = __first271;
          int** t278 = __last272;
          long r279 = std__iterator_traits_int_____difference_type_std__distance_int___(t277, t278);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
          __n276 = r279;
          long t280 = __n276;
          long u281 = -t280;
          void_std__advance_int____long_(&__result273, u281);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
            long t282 = __n276;
            long c283 = 1;
            _Bool c284 = ((t282 > c283)) ? 1 : 0;
            if (c284) {
              int** t285 = __result273;
              void* cast286 = (void*)t285;
              int** t287 = __first271;
              void* cast288 = (void*)t287;
              long t289 = __n276;
              unsigned long cast290 = (unsigned long)t289;
              unsigned long c291 = 8;
              unsigned long b292 = cast290 * c291;
              void* r293 = memmove(cast286, cast288, b292);
            } else {
                long t294 = __n276;
                long c295 = 1;
                _Bool c296 = ((t294 == c295)) ? 1 : 0;
                if (c296) {
                  void_std____assign_one_false__int____int___(&__result273, &__first271);
                  if (__cir_exc_active) {
                    int** __cir_eh_ret = (int**)0;
                    return __cir_eh_ret;
                  }
                }
            }
          int** t297 = __result273;
          __retval274 = t297;
          int** t298 = __retval274;
          return t298;
      }
    while (1) {
      int** t299 = __first271;
      int** t300 = __last272;
      _Bool c301 = ((t299 != t300)) ? 1 : 0;
      if (!c301) break;
        int** t302 = __last272;
        int c303 = -1;
        int** ptr304 = &(t302)[c303];
        __last272 = ptr304;
        int** t305 = __result273;
        int c306 = -1;
        int** ptr307 = &(t305)[c306];
        __result273 = ptr307;
        void_std____assign_one_false__int____int___(&__result273, &__last272);
        if (__cir_exc_active) {
          int** __cir_eh_ret = (int**)0;
          return __cir_eh_ret;
        }
    }
  int** t308 = __result273;
  __retval274 = t308;
  int** t309 = __retval274;
  return t309;
}

// function: _ZSt23__copy_move_backward_a1ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a1_false__int____int___(int** v310, int** v311, int** v312) {
bb313:
  int** __first314;
  int** __last315;
  int** __result316;
  int** __retval317;
  __first314 = v310;
  __last315 = v311;
  __result316 = v312;
  int** t318 = __first314;
  int** t319 = __last315;
  int** t320 = __result316;
  int** r321 = int___std____copy_move_backward_a2_false__int____int___(t318, t319, t320);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval317 = r321;
  int** t322 = __retval317;
  return t322;
}

// function: _ZSt22__copy_move_backward_aILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a_false__int____int___(int** v323, int** v324, int** v325) {
bb326:
  int** __first327;
  int** __last328;
  int** __result329;
  int** __retval330;
  __first327 = v323;
  __last328 = v324;
  __result329 = v325;
  int** t331 = __first327;
  int** r332 = int___std____niter_base_int___(t331);
  int** t333 = __last328;
  int** r334 = int___std____niter_base_int___(t333);
  int** t335 = __result329;
  int** r336 = int___std____niter_base_int___(t335);
  int** r337 = int___std____copy_move_backward_a1_false__int____int___(r332, r334, r336);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** r338 = int___std____niter_wrap_int___(&__result329, r337);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval330 = r338;
  int** t339 = __retval330;
  return t339;
}

// function: _ZSt13copy_backwardIPPiS1_ET0_T_S3_S2_
int** int___std__copy_backward_int____int___(int** v340, int** v341, int** v342) {
bb343:
  int** __first344;
  int** __last345;
  int** __result346;
  int** __retval347;
  __first344 = v340;
  __last345 = v341;
  __result346 = v342;
  int** t348 = __first344;
  int** r349 = int___std____miter_base_int___(t348);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t350 = __last345;
  int** r351 = int___std____miter_base_int___(t350);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t352 = __result346;
  int** r353 = int___std____copy_move_backward_a_false__int____int___(r349, r351, t352);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval347 = r353;
  int** t354 = __retval347;
  return t354;
}

// function: _ZNSt5dequeIiSaIiEE17_M_reallocate_mapEmb
void std__deque_int__std__allocator_int______M_reallocate_map(struct std__deque_int__std__allocator_int__* v355, unsigned long v356, _Bool v357) {
bb358:
  struct std__deque_int__std__allocator_int__* this359;
  unsigned long __nodes_to_add360;
  _Bool __add_at_front361;
  unsigned long __old_num_nodes362;
  unsigned long __new_num_nodes363;
  int** __new_nstart364;
  this359 = v355;
  __nodes_to_add360 = v356;
  __add_at_front361 = v357;
  struct std__deque_int__std__allocator_int__* t365 = this359;
  struct std___Deque_base_int__std__allocator_int__* base366 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base367 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base366->_M_impl) + 0);
  int** t368 = base367->_M_finish._M_node;
  struct std___Deque_base_int__std__allocator_int__* base369 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base370 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base369->_M_impl) + 0);
  int** t371 = base370->_M_start._M_node;
  long diff372 = t368 - t371;
  long c373 = 1;
  long b374 = diff372 + c373;
  unsigned long cast375 = (unsigned long)b374;
  __old_num_nodes362 = cast375;
  unsigned long t376 = __old_num_nodes362;
  unsigned long t377 = __nodes_to_add360;
  unsigned long b378 = t376 + t377;
  __new_num_nodes363 = b378;
    struct std___Deque_base_int__std__allocator_int__* base379 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base380 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base379->_M_impl) + 0);
    unsigned long t381 = base380->_M_map_size;
    unsigned long c382 = 2;
    unsigned long t383 = __new_num_nodes363;
    unsigned long b384 = c382 * t383;
    _Bool c385 = ((t381 > b384)) ? 1 : 0;
    if (c385) {
      struct std___Deque_base_int__std__allocator_int__* base386 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base387 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base386->_M_impl) + 0);
      int** t388 = base387->_M_map;
      struct std___Deque_base_int__std__allocator_int__* base389 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base390 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base389->_M_impl) + 0);
      unsigned long t391 = base390->_M_map_size;
      unsigned long t392 = __new_num_nodes363;
      unsigned long b393 = t391 - t392;
      unsigned long c394 = 2;
      unsigned long b395 = b393 / c394;
      int** ptr396 = &(t388)[b395];
      _Bool t397 = __add_at_front361;
      unsigned long ternary398;
      if (t397) {
        unsigned long t399 = __nodes_to_add360;
        ternary398 = (unsigned long)t399;
      } else {
        unsigned long c400 = 0;
        ternary398 = (unsigned long)c400;
      }
      int** ptr401 = &(ptr396)[ternary398];
      __new_nstart364 = ptr401;
        int** t402 = __new_nstart364;
        struct std___Deque_base_int__std__allocator_int__* base403 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base404 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base403->_M_impl) + 0);
        int** t405 = base404->_M_start._M_node;
        _Bool c406 = ((t402 < t405)) ? 1 : 0;
        if (c406) {
          struct std___Deque_base_int__std__allocator_int__* base407 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base408 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base407->_M_impl) + 0);
          int** t409 = base408->_M_start._M_node;
          struct std___Deque_base_int__std__allocator_int__* base410 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base411 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base410->_M_impl) + 0);
          int** t412 = base411->_M_finish._M_node;
          int c413 = 1;
          int** ptr414 = &(t412)[c413];
          int** t415 = __new_nstart364;
          int** r416 = int___std__copy_int____int___(t409, ptr414, t415);
          if (__cir_exc_active) {
            return;
          }
        } else {
          struct std___Deque_base_int__std__allocator_int__* base417 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base418 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base417->_M_impl) + 0);
          int** t419 = base418->_M_start._M_node;
          struct std___Deque_base_int__std__allocator_int__* base420 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base421 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base420->_M_impl) + 0);
          int** t422 = base421->_M_finish._M_node;
          int c423 = 1;
          int** ptr424 = &(t422)[c423];
          int** t425 = __new_nstart364;
          unsigned long t426 = __old_num_nodes362;
          int** ptr427 = &(t425)[t426];
          int** r428 = int___std__copy_backward_int____int___(t419, ptr424, ptr427);
          if (__cir_exc_active) {
            return;
          }
        }
    } else {
      unsigned long __new_map_size429;
      unsigned long __bufsz430;
      int** __new_map431;
      struct std___Deque_base_int__std__allocator_int__* base432 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base433 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base432->_M_impl) + 0);
      unsigned long t434 = base433->_M_map_size;
      struct std___Deque_base_int__std__allocator_int__* base435 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base436 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base435->_M_impl) + 0);
      unsigned long* r437 = unsigned_long_const__std__max_unsigned_long_(&base436->_M_map_size, &__nodes_to_add360);
      if (__cir_exc_active) {
        return;
      }
      unsigned long t438 = *r437;
      unsigned long b439 = t434 + t438;
      unsigned long c440 = 2;
      unsigned long b441 = b439 + c440;
      __new_map_size429 = b441;
      unsigned long c442 = 128;
      __bufsz430 = c442;
        unsigned long t443 = __new_map_size429;
        unsigned long r444 = std__deque_int__std__allocator_int_____max_size___const(t365);
        unsigned long t445 = __bufsz430;
        unsigned long b446 = r444 + t445;
        unsigned long c447 = 1;
        unsigned long b448 = b446 - c447;
        unsigned long t449 = __bufsz430;
        unsigned long b450 = b448 / t449;
        unsigned long c451 = 2;
        unsigned long b452 = b450 * c451;
        _Bool c453 = ((t443 > b452)) ? 1 : 0;
        if (c453) {
          __builtin_unreachable();
        }
      struct std___Deque_base_int__std__allocator_int__* base454 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
      unsigned long t455 = __new_map_size429;
      int** r456 = std___Deque_base_int__std__allocator_int______M_allocate_map(base454, t455);
      if (__cir_exc_active) {
        return;
      }
      __new_map431 = r456;
      int** t457 = __new_map431;
      unsigned long t458 = __new_map_size429;
      unsigned long t459 = __new_num_nodes363;
      unsigned long b460 = t458 - t459;
      unsigned long c461 = 2;
      unsigned long b462 = b460 / c461;
      int** ptr463 = &(t457)[b462];
      _Bool t464 = __add_at_front361;
      unsigned long ternary465;
      if (t464) {
        unsigned long t466 = __nodes_to_add360;
        ternary465 = (unsigned long)t466;
      } else {
        unsigned long c467 = 0;
        ternary465 = (unsigned long)c467;
      }
      int** ptr468 = &(ptr463)[ternary465];
      __new_nstart364 = ptr468;
      struct std___Deque_base_int__std__allocator_int__* base469 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base470 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base469->_M_impl) + 0);
      int** t471 = base470->_M_start._M_node;
      struct std___Deque_base_int__std__allocator_int__* base472 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base473 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base472->_M_impl) + 0);
      int** t474 = base473->_M_finish._M_node;
      int c475 = 1;
      int** ptr476 = &(t474)[c475];
      int** t477 = __new_nstart364;
      int** r478 = int___std__copy_int____int___(t471, ptr476, t477);
      if (__cir_exc_active) {
        return;
      }
      struct std___Deque_base_int__std__allocator_int__* base479 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
      struct std___Deque_base_int__std__allocator_int__* base480 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base481 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base480->_M_impl) + 0);
      int** t482 = base481->_M_map;
      struct std___Deque_base_int__std__allocator_int__* base483 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base484 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base483->_M_impl) + 0);
      unsigned long t485 = base484->_M_map_size;
      std___Deque_base_int__std__allocator_int______M_deallocate_map(base479, t482, t485);
      int** t486 = __new_map431;
      struct std___Deque_base_int__std__allocator_int__* base487 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base488 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base487->_M_impl) + 0);
      base488->_M_map = t486;
      unsigned long t489 = __new_map_size429;
      struct std___Deque_base_int__std__allocator_int__* base490 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base491 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base490->_M_impl) + 0);
      base491->_M_map_size = t489;
    }
  struct std___Deque_base_int__std__allocator_int__* base492 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base493 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base492->_M_impl) + 0);
  int** t494 = __new_nstart364;
  std___Deque_iterator_int__int___int_____M_set_node(&base493->_M_start, t494);
  struct std___Deque_base_int__std__allocator_int__* base495 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t365 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base496 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base495->_M_impl) + 0);
  int** t497 = __new_nstart364;
  unsigned long t498 = __old_num_nodes362;
  int** ptr499 = &(t497)[t498];
  int c500 = -1;
  int** ptr501 = &(ptr499)[c500];
  std___Deque_iterator_int__int___int_____M_set_node(&base496->_M_finish, ptr501);
  return;
}

// function: _ZNSt5dequeIiSaIiEE22_M_reserve_map_at_backEm
void std__deque_int__std__allocator_int______M_reserve_map_at_back(struct std__deque_int__std__allocator_int__* v502, unsigned long v503) {
bb504:
  struct std__deque_int__std__allocator_int__* this505;
  unsigned long __nodes_to_add506;
  this505 = v502;
  __nodes_to_add506 = v503;
  struct std__deque_int__std__allocator_int__* t507 = this505;
    unsigned long t508 = __nodes_to_add506;
    unsigned long c509 = 1;
    unsigned long b510 = t508 + c509;
    struct std___Deque_base_int__std__allocator_int__* base511 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t507 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base512 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base511->_M_impl) + 0);
    unsigned long t513 = base512->_M_map_size;
    struct std___Deque_base_int__std__allocator_int__* base514 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t507 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base515 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base514->_M_impl) + 0);
    int** t516 = base515->_M_finish._M_node;
    struct std___Deque_base_int__std__allocator_int__* base517 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t507 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base518 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base517->_M_impl) + 0);
    int** t519 = base518->_M_map;
    long diff520 = t516 - t519;
    unsigned long cast521 = (unsigned long)diff520;
    unsigned long b522 = t513 - cast521;
    _Bool c523 = ((b510 > b522)) ? 1 : 0;
    if (c523) {
      unsigned long t524 = __nodes_to_add506;
      _Bool c525 = 0;
      std__deque_int__std__allocator_int______M_reallocate_map(t507, t524, c525);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE16_M_push_back_auxIJRKiEEEvDpOT_
void void_std__deque_int__std__allocator_int______M_push_back_aux_int_const__(struct std__deque_int__std__allocator_int__* v526, int* v527) {
bb528:
  struct std__deque_int__std__allocator_int__* this529;
  int* __args530;
  this529 = v526;
  __args530 = v527;
  struct std__deque_int__std__allocator_int__* t531 = this529;
    unsigned long r532 = std__deque_int__std__allocator_int_____size___const(t531);
    unsigned long r533 = std__deque_int__std__allocator_int_____max_size___const(t531);
    _Bool c534 = ((r532 == r533)) ? 1 : 0;
    if (c534) {
      char* cast535 = (char*)&(_str_5);
      std____throw_length_error(cast535);
      if (__cir_exc_active) {
        return;
      }
    }
  unsigned long c536 = 1;
  std__deque_int__std__allocator_int______M_reserve_map_at_back(t531, c536);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int__* base537 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t531 + 0);
  int* r538 = std___Deque_base_int__std__allocator_int______M_allocate_node(base537);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int__* base539 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t531 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base540 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base539->_M_impl) + 0);
  int** t541 = base540->_M_finish._M_node;
  int c542 = 1;
  int** ptr543 = &(t541)[c542];
  *ptr543 = r538;
      struct std___Deque_base_int__std__allocator_int__* base545 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t531 + 0);
      struct std__allocator_int_* base546 = (struct std__allocator_int_*)((char *)&(base545->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base547 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t531 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base548 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base547->_M_impl) + 0);
      int* t549 = base548->_M_finish._M_cur;
      int* t550 = __args530;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base546, t549, t550);
      struct std___Deque_base_int__std__allocator_int__* base551 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t531 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base552 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base551->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base553 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t531 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base554 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base553->_M_impl) + 0);
      int** t555 = base554->_M_finish._M_node;
      int c556 = 1;
      int** ptr557 = &(t555)[c556];
      std___Deque_iterator_int__int___int_____M_set_node(&base552->_M_finish, ptr557);
      struct std___Deque_base_int__std__allocator_int__* base558 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t531 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base559 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base558->_M_impl) + 0);
      int* t560 = base559->_M_finish._M_first;
      struct std___Deque_base_int__std__allocator_int__* base561 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t531 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base562 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base561->_M_impl) + 0);
      base562->_M_finish._M_cur = t560;
    cir_try_dispatch544: ;
    if (__cir_exc_active) {
    {
      int ca_tok563 = 0;
      void* ca_exn564 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int__* base565 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t531 + 0);
        struct std___Deque_base_int__std__allocator_int__* base566 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t531 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base567 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base566->_M_impl) + 0);
        int** t568 = base567->_M_finish._M_node;
        int c569 = 1;
        int** ptr570 = &(t568)[c569];
        int* t571 = *ptr570;
        std___Deque_base_int__std__allocator_int______M_deallocate_node(base565, t571);
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE9push_backERKi
void std__deque_int__std__allocator_int_____push_back(struct std__deque_int__std__allocator_int__* v572, int* v573) {
bb574:
  struct std__deque_int__std__allocator_int__* this575;
  int* __x576;
  this575 = v572;
  __x576 = v573;
  struct std__deque_int__std__allocator_int__* t577 = this575;
    struct std___Deque_base_int__std__allocator_int__* base578 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t577 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base579 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base578->_M_impl) + 0);
    int* t580 = base579->_M_finish._M_cur;
    struct std___Deque_base_int__std__allocator_int__* base581 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t577 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base582 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base581->_M_impl) + 0);
    int* t583 = base582->_M_finish._M_last;
    int c584 = -1;
    int* ptr585 = &(t583)[c584];
    _Bool c586 = ((t580 != ptr585)) ? 1 : 0;
    if (c586) {
      struct std___Deque_base_int__std__allocator_int__* base587 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t577 + 0);
      struct std__allocator_int_* base588 = (struct std__allocator_int_*)((char *)&(base587->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base589 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t577 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base590 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base589->_M_impl) + 0);
      int* t591 = base590->_M_finish._M_cur;
      int* t592 = __x576;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base588, t591, t592);
      struct std___Deque_base_int__std__allocator_int__* base593 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t577 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base594 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base593->_M_impl) + 0);
      int* t595 = base594->_M_finish._M_cur;
      int c596 = 1;
      int* ptr597 = &(t595)[c596];
      base594->_M_finish._M_cur = ptr597;
    } else {
      int* t598 = __x576;
      void_std__deque_int__std__allocator_int______M_push_back_aux_int_const__(t577, t598);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSteqRKSt15_Deque_iteratorIiRiPiES4_
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* v599, struct std___Deque_iterator_int__int____int___* v600) {
bb601:
  struct std___Deque_iterator_int__int____int___* __x602;
  struct std___Deque_iterator_int__int____int___* __y603;
  _Bool __retval604;
  __x602 = v599;
  __y603 = v600;
  struct std___Deque_iterator_int__int____int___* t605 = __x602;
  int* t606 = t605->_M_cur;
  struct std___Deque_iterator_int__int____int___* t607 = __y603;
  int* t608 = t607->_M_cur;
  _Bool c609 = ((t606 == t608)) ? 1 : 0;
  __retval604 = c609;
  _Bool t610 = __retval604;
  return t610;
}

// function: _ZNKSt5dequeIiSaIiEE5emptyEv
_Bool std__deque_int__std__allocator_int_____empty___const(struct std__deque_int__std__allocator_int__* v611) {
bb612:
  struct std__deque_int__std__allocator_int__* this613;
  _Bool __retval614;
  this613 = v611;
  struct std__deque_int__std__allocator_int__* t615 = this613;
  struct std___Deque_base_int__std__allocator_int__* base616 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t615 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base617 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base616->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base618 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t615 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base619 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base618->_M_impl) + 0);
  _Bool r620 = std__operator__(&base617->_M_finish, &base619->_M_start);
  __retval614 = r620;
  _Bool t621 = __retval614;
  return t621;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEmmEv
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* v622) {
bb623:
  struct std___Deque_iterator_int__int____int___* this624;
  struct std___Deque_iterator_int__int____int___* __retval625;
  this624 = v622;
  struct std___Deque_iterator_int__int____int___* t626 = this624;
    int* t627 = t626->_M_cur;
    int* t628 = t626->_M_first;
    _Bool c629 = ((t627 == t628)) ? 1 : 0;
    if (c629) {
      int** t630 = t626->_M_node;
      int c631 = -1;
      int** ptr632 = &(t630)[c631];
      std___Deque_iterator_int__int___int_____M_set_node(t626, ptr632);
      int* t633 = t626->_M_last;
      t626->_M_cur = t633;
    }
  int* t634 = t626->_M_cur;
  int c635 = -1;
  int* ptr636 = &(t634)[c635];
  t626->_M_cur = ptr636;
  __retval625 = t626;
  struct std___Deque_iterator_int__int____int___* t637 = __retval625;
  return t637;
}

// function: _ZNKSt15_Deque_iteratorIiRiPiEdeEv
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* v638) {
bb639:
  struct std___Deque_iterator_int__int____int___* this640;
  int* __retval641;
  this640 = v638;
  struct std___Deque_iterator_int__int____int___* t642 = this640;
  int* t643 = t642->_M_cur;
  __retval641 = t643;
  int* t644 = __retval641;
  return t644;
}

// function: _ZNSt5dequeIiSaIiEE4backEv
int* std__deque_int__std__allocator_int_____back(struct std__deque_int__std__allocator_int__* v645) {
bb646:
  struct std__deque_int__std__allocator_int__* this647;
  int* __retval648;
  struct std___Deque_iterator_int__int____int___ __tmp649;
  this647 = v645;
  struct std__deque_int__std__allocator_int__* t650 = this647;
    do {
          _Bool r651 = std__deque_int__std__allocator_int_____empty___const(t650);
          if (r651) {
            char* cast652 = (char*)&(_str_6);
            int c653 = 1537;
            char* cast654 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv);
            char* cast655 = (char*)&(_str_7);
            std____glibcxx_assert_fail(cast652, c653, cast654, cast655);
          }
      _Bool c656 = 0;
      if (!c656) break;
    } while (1);
  struct std___Deque_iterator_int__int____int___ r657 = std__deque_int__std__allocator_int_____end(t650);
  __tmp649 = r657;
  struct std___Deque_iterator_int__int____int___* r658 = std___Deque_iterator_int__int___int____operator__(&__tmp649);
  int* r659 = std___Deque_iterator_int__int___int____operator____const(&__tmp649);
  __retval648 = r659;
  int* t660 = __retval648;
  return t660;
}

// function: _ZStmiRKSt15_Deque_iteratorIiRiPiES4_
long std__operator_(struct std___Deque_iterator_int__int____int___* v661, struct std___Deque_iterator_int__int____int___* v662) {
bb663:
  struct std___Deque_iterator_int__int____int___* __x664;
  struct std___Deque_iterator_int__int____int___* __y665;
  long __retval666;
  __x664 = v661;
  __y665 = v662;
  unsigned long r667 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast668 = (long)r667;
  struct std___Deque_iterator_int__int____int___* t669 = __x664;
  int** t670 = t669->_M_node;
  struct std___Deque_iterator_int__int____int___* t671 = __y665;
  int** t672 = t671->_M_node;
  long diff673 = t670 - t672;
  struct std___Deque_iterator_int__int____int___* t674 = __x664;
  int** t675 = t674->_M_node;
  _Bool cast676 = (_Bool)t675;
  long cast677 = (long)cast676;
  long b678 = diff673 - cast677;
  long b679 = cast668 * b678;
  struct std___Deque_iterator_int__int____int___* t680 = __x664;
  int* t681 = t680->_M_cur;
  struct std___Deque_iterator_int__int____int___* t682 = __x664;
  int* t683 = t682->_M_first;
  long diff684 = t681 - t683;
  long b685 = b679 + diff684;
  struct std___Deque_iterator_int__int____int___* t686 = __y665;
  int* t687 = t686->_M_last;
  struct std___Deque_iterator_int__int____int___* t688 = __y665;
  int* t689 = t688->_M_cur;
  long diff690 = t687 - t689;
  long b691 = b685 + diff690;
  __retval666 = b691;
  long t692 = __retval666;
  return t692;
}

// function: _ZNKSt5dequeIiSaIiEE4sizeEv
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* v693) {
bb694:
  struct std__deque_int__std__allocator_int__* this695;
  unsigned long __retval696;
  unsigned long __sz697;
  this695 = v693;
  struct std__deque_int__std__allocator_int__* t698 = this695;
  struct std___Deque_base_int__std__allocator_int__* base699 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t698 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base700 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base699->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base701 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t698 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base702 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base701->_M_impl) + 0);
  long r703 = std__operator_(&base700->_M_finish, &base702->_M_start);
  unsigned long cast704 = (unsigned long)r703;
  __sz697 = cast704;
    unsigned long t705 = __sz697;
    unsigned long r706 = std__deque_int__std__allocator_int_____max_size___const(t698);
    _Bool c707 = ((t705 > r706)) ? 1 : 0;
    if (c707) {
      __builtin_unreachable();
    }
  unsigned long t708 = __sz697;
  __retval696 = t708;
  unsigned long t709 = __retval696;
  return t709;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v710, int v711) {
bb712:
  int __a713;
  int __b714;
  int __retval715;
  __a713 = v710;
  __b714 = v711;
  int t716 = __a713;
  int t717 = __b714;
  int b718 = t716 | t717;
  __retval715 = b718;
  int t719 = __retval715;
  return t719;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v720) {
bb721:
  struct std__basic_ios_char__std__char_traits_char__* this722;
  int __retval723;
  this722 = v720;
  struct std__basic_ios_char__std__char_traits_char__* t724 = this722;
  struct std__ios_base* base725 = (struct std__ios_base*)((char *)t724 + 0);
  int t726 = base725->_M_streambuf_state;
  __retval723 = t726;
  int t727 = __retval723;
  return t727;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v728, int v729) {
bb730:
  struct std__basic_ios_char__std__char_traits_char__* this731;
  int __state732;
  this731 = v728;
  __state732 = v729;
  struct std__basic_ios_char__std__char_traits_char__* t733 = this731;
  int r734 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t733);
  if (__cir_exc_active) {
    return;
  }
  int t735 = __state732;
  int r736 = std__operator__2(r734, t735);
  std__basic_ios_char__std__char_traits_char_____clear(t733, r736);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v737, char* v738) {
bb739:
  char* __c1740;
  char* __c2741;
  _Bool __retval742;
  __c1740 = v737;
  __c2741 = v738;
  char* t743 = __c1740;
  char t744 = *t743;
  int cast745 = (int)t744;
  char* t746 = __c2741;
  char t747 = *t746;
  int cast748 = (int)t747;
  _Bool c749 = ((cast745 == cast748)) ? 1 : 0;
  __retval742 = c749;
  _Bool t750 = __retval742;
  return t750;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v751) {
bb752:
  char* __p753;
  unsigned long __retval754;
  unsigned long __i755;
  __p753 = v751;
  unsigned long c756 = 0;
  __i755 = c756;
    char ref_tmp0757;
    while (1) {
      unsigned long t758 = __i755;
      char* t759 = __p753;
      char* ptr760 = &(t759)[t758];
      char c761 = 0;
      ref_tmp0757 = c761;
      _Bool r762 = __gnu_cxx__char_traits_char___eq(ptr760, &ref_tmp0757);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u763 = !r762;
      if (!u763) break;
      unsigned long t764 = __i755;
      unsigned long u765 = t764 + 1;
      __i755 = u765;
    }
  unsigned long t766 = __i755;
  __retval754 = t766;
  unsigned long t767 = __retval754;
  return t767;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v768) {
bb769:
  char* __s770;
  unsigned long __retval771;
  __s770 = v768;
    _Bool r772 = std____is_constant_evaluated();
    if (r772) {
      char* t773 = __s770;
      unsigned long r774 = __gnu_cxx__char_traits_char___length(t773);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval771 = r774;
      unsigned long t775 = __retval771;
      return t775;
    }
  char* t776 = __s770;
  unsigned long r777 = strlen(t776);
  __retval771 = r777;
  unsigned long t778 = __retval771;
  return t778;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v779, char* v780) {
bb781:
  struct std__basic_ostream_char__std__char_traits_char__* __out782;
  char* __s783;
  struct std__basic_ostream_char__std__char_traits_char__* __retval784;
  __out782 = v779;
  __s783 = v780;
    char* t785 = __s783;
    _Bool cast786 = (_Bool)t785;
    _Bool u787 = !cast786;
    if (u787) {
      struct std__basic_ostream_char__std__char_traits_char__* t788 = __out782;
      void** v789 = (void**)t788;
      void* v790 = *((void**)v789);
      unsigned char* cast791 = (unsigned char*)v790;
      long c792 = -24;
      unsigned char* ptr793 = &(cast791)[c792];
      long* cast794 = (long*)ptr793;
      long t795 = *cast794;
      unsigned char* cast796 = (unsigned char*)t788;
      unsigned char* ptr797 = &(cast796)[t795];
      struct std__basic_ostream_char__std__char_traits_char__* cast798 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr797;
      struct std__basic_ios_char__std__char_traits_char__* cast799 = (struct std__basic_ios_char__std__char_traits_char__*)cast798;
      int t800 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast799, t800);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t801 = __out782;
      char* t802 = __s783;
      char* t803 = __s783;
      unsigned long r804 = std__char_traits_char___length(t803);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast805 = (long)r804;
      struct std__basic_ostream_char__std__char_traits_char__* r806 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t801, t802, cast805);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t807 = __out782;
  __retval784 = t807;
  struct std__basic_ostream_char__std__char_traits_char__* t808 = __retval784;
  return t808;
}

// function: _ZNSt5dequeIiSaIiEED2Ev
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* v809) {
bb810:
  struct std__deque_int__std__allocator_int__* this811;
  struct std___Deque_iterator_int__int____int___ agg_tmp0812;
  struct std___Deque_iterator_int__int____int___ agg_tmp1813;
  this811 = v809;
  struct std__deque_int__std__allocator_int__* t814 = this811;
    struct std___Deque_iterator_int__int____int___ r815 = std__deque_int__std__allocator_int_____begin(t814);
    agg_tmp0812 = r815;
    struct std___Deque_iterator_int__int____int___ r816 = std__deque_int__std__allocator_int_____end(t814);
    agg_tmp1813 = r816;
    struct std___Deque_base_int__std__allocator_int__* base817 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t814 + 0);
    struct std__allocator_int_* r818 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base817);
    struct std___Deque_iterator_int__int____int___ t819 = agg_tmp0812;
    struct std___Deque_iterator_int__int____int___ t820 = agg_tmp1813;
    std__deque_int__std__allocator_int______M_destroy_data(t814, t819, t820, r818);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base821 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t814 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base821);
      }
      return;
    }
  {
    struct std___Deque_base_int__std__allocator_int__* base822 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t814 + 0);
    std___Deque_base_int__std__allocator_int_______Deque_base(base822);
  }
  return;
}

// function: main
int main() {
bb823:
  int __retval824;
  struct std__deque_int__std__allocator_int__ mydeque825;
  int myint826;
  int n827;
  int c828 = 0;
  __retval824 = c828;
  std__deque_int__std__allocator_int_____deque(&mydeque825);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    int c829 = 10;
    n827 = c829;
      do {
          int t830 = n827;
          int u831 = t830 - 1;
          n827 = u831;
          myint826 = u831;
          std__deque_int__std__allocator_int_____push_back(&mydeque825, &myint826);
          if (__cir_exc_active) {
            {
              std__deque_int__std__allocator_int______deque(&mydeque825);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
        int t832 = myint826;
        _Bool cast833 = (_Bool)t832;
        if (!cast833) break;
      } while (1);
    int* r834 = std__deque_int__std__allocator_int_____back(&mydeque825);
    int t835 = *r834;
    int c836 = 0;
    _Bool c837 = ((t835 != c836)) ? 1 : 0;
    if (c837) {
    } else {
      char* cast838 = (char*)&(_str);
      char* c839 = _str_1;
      unsigned int c840 = 26;
      char* cast841 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast838, c839, c840, cast841);
    }
    unsigned long r842 = std__deque_int__std__allocator_int_____size___const(&mydeque825);
    unsigned long c843 = 10;
    _Bool c844 = ((r842 != c843)) ? 1 : 0;
    if (c844) {
    } else {
      char* cast845 = (char*)&(_str_2);
      char* c846 = _str_1;
      unsigned int c847 = 27;
      char* cast848 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast845, c846, c847, cast848);
    }
    char* cast849 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r850 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast849);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque825);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r851 = std__deque_int__std__allocator_int_____size___const(&mydeque825);
    int cast852 = (int)r851;
    struct std__basic_ostream_char__std__char_traits_char__* r853 = std__ostream__operator__(r850, cast852);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque825);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast854 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r855 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r853, cast854);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque825);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c856 = 0;
    __retval824 = c856;
    int t857 = __retval824;
    int ret_val858 = t857;
    {
      std__deque_int__std__allocator_int______deque(&mydeque825);
    }
    return ret_val858;
  int t859 = __retval824;
  return t859;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v860) {
bb861:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this862;
  this862 = v860;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t863 = this862;
  struct std__allocator_int_* base864 = (struct std__allocator_int_*)((char *)t863 + 0);
  std__allocator_int___allocator(base864);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base865 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)t863 + 0);
    std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(base865);
  return;
}

// function: _ZSt16__deque_buf_sizem
unsigned long std____deque_buf_size(unsigned long v866) {
bb867:
  unsigned long __size868;
  unsigned long __retval869;
  __size868 = v866;
  unsigned long t870 = __size868;
  unsigned long c871 = 512;
  _Bool c872 = ((t870 < c871)) ? 1 : 0;
  unsigned long ternary873;
  if (c872) {
    unsigned long c874 = 512;
    unsigned long t875 = __size868;
    unsigned long b876 = c874 / t875;
    ternary873 = (unsigned long)b876;
  } else {
    unsigned long c877 = 1;
    ternary873 = (unsigned long)c877;
  }
  __retval869 = ternary873;
  unsigned long t878 = __retval869;
  return t878;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v879, unsigned long* v880) {
bb881:
  unsigned long* __a882;
  unsigned long* __b883;
  unsigned long* __retval884;
  __a882 = v879;
  __b883 = v880;
    unsigned long* t885 = __a882;
    unsigned long t886 = *t885;
    unsigned long* t887 = __b883;
    unsigned long t888 = *t887;
    _Bool c889 = ((t886 < t888)) ? 1 : 0;
    if (c889) {
      unsigned long* t890 = __b883;
      __retval884 = t890;
      unsigned long* t891 = __retval884;
      return t891;
    }
  unsigned long* t892 = __a882;
  __retval884 = t892;
  unsigned long* t893 = __retval884;
  return t893;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* v894) {
bb895:
  struct std___Deque_base_int__std__allocator_int__* this896;
  struct std__allocator_int_* __retval897;
  this896 = v894;
  struct std___Deque_base_int__std__allocator_int__* t898 = this896;
  struct std__allocator_int_* base899 = (struct std__allocator_int_*)((char *)&(t898->_M_impl) + 0);
  __retval897 = base899;
  struct std__allocator_int_* t900 = __retval897;
  return t900;
}

// function: _ZNSaIPiEC2IiEERKSaIT_E
void std__allocator_int____allocator_int_(struct std__allocator_int___* v901, struct std__allocator_int_* v902) {
bb903:
  struct std__allocator_int___* this904;
  struct std__allocator_int_* unnamed905;
  this904 = v901;
  unnamed905 = v902;
  struct std__allocator_int___* t906 = this904;
  struct std____new_allocator_int___* base907 = (struct std____new_allocator_int___*)((char *)t906 + 0);
  std____new_allocator_int______new_allocator(base907);
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE20_M_get_map_allocatorEv
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* v908) {
bb909:
  struct std___Deque_base_int__std__allocator_int__* this910;
  struct std__allocator_int___ __retval911;
  this910 = v908;
  struct std___Deque_base_int__std__allocator_int__* t912 = this910;
  struct std__allocator_int_* r913 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(t912);
  std__allocator_int____allocator_int_(&__retval911, r913);
  struct std__allocator_int___ t914 = __retval911;
  return t914;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb915:
  _Bool __retval916;
    _Bool c917 = 0;
    __retval916 = c917;
    _Bool t918 = __retval916;
    return t918;
  abort();
}

// function: _ZNKSt15__new_allocatorIPiE11_M_max_sizeEv
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* v919) {
bb920:
  struct std____new_allocator_int___* this921;
  unsigned long __retval922;
  this921 = v919;
  struct std____new_allocator_int___* t923 = this921;
  unsigned long c924 = 9223372036854775807;
  unsigned long c925 = 8;
  unsigned long b926 = c924 / c925;
  __retval922 = b926;
  unsigned long t927 = __retval922;
  return t927;
}

// function: _ZNSt15__new_allocatorIPiE8allocateEmPKv
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* v928, unsigned long v929, void* v930) {
bb931:
  struct std____new_allocator_int___* this932;
  unsigned long __n933;
  void* unnamed934;
  int** __retval935;
  this932 = v928;
  __n933 = v929;
  unnamed934 = v930;
  struct std____new_allocator_int___* t936 = this932;
    unsigned long t937 = __n933;
    unsigned long r938 = std____new_allocator_int_____M_max_size___const(t936);
    _Bool c939 = ((t937 > r938)) ? 1 : 0;
    if (c939) {
        unsigned long t940 = __n933;
        unsigned long c941 = -1;
        unsigned long c942 = 8;
        unsigned long b943 = c941 / c942;
        _Bool c944 = ((t940 > b943)) ? 1 : 0;
        if (c944) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      std____throw_bad_alloc();
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
    }
    unsigned long c945 = 8;
    unsigned long c946 = 16;
    _Bool c947 = ((c945 > c946)) ? 1 : 0;
    if (c947) {
      unsigned long __al948;
      unsigned long c949 = 8;
      __al948 = c949;
      unsigned long t950 = __n933;
      unsigned long c951 = 8;
      unsigned long b952 = t950 * c951;
      unsigned long t953 = __al948;
      void* r954 = operator_new_2(b952, t953);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast955 = (int**)r954;
      __retval935 = cast955;
      int** t956 = __retval935;
      return t956;
    }
  unsigned long t957 = __n933;
  unsigned long c958 = 8;
  unsigned long b959 = t957 * c958;
  void* r960 = operator_new(b959);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** cast961 = (int**)r960;
  __retval935 = cast961;
  int** t962 = __retval935;
  return t962;
}

// function: _ZNSaIPiE8allocateEm
int** std__allocator_int____allocate(struct std__allocator_int___* v963, unsigned long v964) {
bb965:
  struct std__allocator_int___* this966;
  unsigned long __n967;
  int** __retval968;
  this966 = v963;
  __n967 = v964;
  struct std__allocator_int___* t969 = this966;
    _Bool r970 = std____is_constant_evaluated();
    if (r970) {
        unsigned long t971 = __n967;
        unsigned long c972 = 8;
        unsigned long ovr973;
        _Bool ovf974 = __builtin_mul_overflow(t971, c972, &ovr973);
        __n967 = ovr973;
        if (ovf974) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t975 = __n967;
      void* r976 = operator_new(t975);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast977 = (int**)r976;
      __retval968 = cast977;
      int** t978 = __retval968;
      return t978;
    }
  struct std____new_allocator_int___* base979 = (struct std____new_allocator_int___*)((char *)t969 + 0);
  unsigned long t980 = __n967;
  void* c981 = ((void*)0);
  int** r982 = std____new_allocator_int____allocate(base979, t980, c981);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval968 = r982;
  int** t983 = __retval968;
  return t983;
}

// function: _ZNSt16allocator_traitsISaIPiEE8allocateERS1_m
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* v984, unsigned long v985) {
bb986:
  struct std__allocator_int___* __a987;
  unsigned long __n988;
  int** __retval989;
  __a987 = v984;
  __n988 = v985;
  struct std__allocator_int___* t990 = __a987;
  unsigned long t991 = __n988;
  int** r992 = std__allocator_int____allocate(t990, t991);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval989 = r992;
  int** t993 = __retval989;
  return t993;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_allocate_mapEm
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* v994, unsigned long v995) {
bb996:
  struct std___Deque_base_int__std__allocator_int__* this997;
  unsigned long __n998;
  int** __retval999;
  struct std__allocator_int___ __map_alloc1000;
  this997 = v994;
  __n998 = v995;
  struct std___Deque_base_int__std__allocator_int__* t1001 = this997;
  struct std__allocator_int___ r1002 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1001);
  __map_alloc1000 = r1002;
  unsigned long t1003 = __n998;
  int** r1004 = std__allocator_traits_std__allocator_int______allocate(&__map_alloc1000, t1003);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval999 = r1004;
  int** t1005 = __retval999;
  return t1005;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1006) {
bb1007:
  struct std____new_allocator_int_* this1008;
  unsigned long __retval1009;
  this1008 = v1006;
  struct std____new_allocator_int_* t1010 = this1008;
  unsigned long c1011 = 9223372036854775807;
  unsigned long c1012 = 4;
  unsigned long b1013 = c1011 / c1012;
  __retval1009 = b1013;
  unsigned long t1014 = __retval1009;
  return t1014;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1015, unsigned long v1016, void* v1017) {
bb1018:
  struct std____new_allocator_int_* this1019;
  unsigned long __n1020;
  void* unnamed1021;
  int* __retval1022;
  this1019 = v1015;
  __n1020 = v1016;
  unnamed1021 = v1017;
  struct std____new_allocator_int_* t1023 = this1019;
    unsigned long t1024 = __n1020;
    unsigned long r1025 = std____new_allocator_int____M_max_size___const(t1023);
    _Bool c1026 = ((t1024 > r1025)) ? 1 : 0;
    if (c1026) {
        unsigned long t1027 = __n1020;
        unsigned long c1028 = -1;
        unsigned long c1029 = 4;
        unsigned long b1030 = c1028 / c1029;
        _Bool c1031 = ((t1027 > b1030)) ? 1 : 0;
        if (c1031) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      std____throw_bad_alloc();
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
    }
    unsigned long c1032 = 4;
    unsigned long c1033 = 16;
    _Bool c1034 = ((c1032 > c1033)) ? 1 : 0;
    if (c1034) {
      unsigned long __al1035;
      unsigned long c1036 = 4;
      __al1035 = c1036;
      unsigned long t1037 = __n1020;
      unsigned long c1038 = 4;
      unsigned long b1039 = t1037 * c1038;
      unsigned long t1040 = __al1035;
      void* r1041 = operator_new_2(b1039, t1040);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1042 = (int*)r1041;
      __retval1022 = cast1042;
      int* t1043 = __retval1022;
      return t1043;
    }
  unsigned long t1044 = __n1020;
  unsigned long c1045 = 4;
  unsigned long b1046 = t1044 * c1045;
  void* r1047 = operator_new(b1046);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast1048 = (int*)r1047;
  __retval1022 = cast1048;
  int* t1049 = __retval1022;
  return t1049;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1050, unsigned long v1051) {
bb1052:
  struct std__allocator_int_* this1053;
  unsigned long __n1054;
  int* __retval1055;
  this1053 = v1050;
  __n1054 = v1051;
  struct std__allocator_int_* t1056 = this1053;
    _Bool r1057 = std____is_constant_evaluated();
    if (r1057) {
        unsigned long t1058 = __n1054;
        unsigned long c1059 = 4;
        unsigned long ovr1060;
        _Bool ovf1061 = __builtin_mul_overflow(t1058, c1059, &ovr1060);
        __n1054 = ovr1060;
        if (ovf1061) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1062 = __n1054;
      void* r1063 = operator_new(t1062);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1064 = (int*)r1063;
      __retval1055 = cast1064;
      int* t1065 = __retval1055;
      return t1065;
    }
  struct std____new_allocator_int_* base1066 = (struct std____new_allocator_int_*)((char *)t1056 + 0);
  unsigned long t1067 = __n1054;
  void* c1068 = ((void*)0);
  int* r1069 = std____new_allocator_int___allocate(base1066, t1067, c1068);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1055 = r1069;
  int* t1070 = __retval1055;
  return t1070;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1071, unsigned long v1072) {
bb1073:
  struct std__allocator_int_* __a1074;
  unsigned long __n1075;
  int* __retval1076;
  __a1074 = v1071;
  __n1075 = v1072;
  struct std__allocator_int_* t1077 = __a1074;
  unsigned long t1078 = __n1075;
  int* r1079 = std__allocator_int___allocate(t1077, t1078);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1076 = r1079;
  int* t1080 = __retval1076;
  return t1080;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_allocate_nodeEv
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* v1081) {
bb1082:
  struct std___Deque_base_int__std__allocator_int__* this1083;
  int* __retval1084;
  this1083 = v1081;
  struct std___Deque_base_int__std__allocator_int__* t1085 = this1083;
  struct std__allocator_int_* base1086 = (struct std__allocator_int_*)((char *)&(t1085->_M_impl) + 0);
  unsigned long c1087 = 4;
  unsigned long r1088 = std____deque_buf_size(c1087);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r1089 = std__allocator_traits_std__allocator_int_____allocate(base1086, r1088);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1084 = r1089;
  int* t1090 = __retval1084;
  return t1090;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1091, int* v1092, unsigned long v1093) {
bb1094:
  struct std____new_allocator_int_* this1095;
  int* __p1096;
  unsigned long __n1097;
  this1095 = v1091;
  __p1096 = v1092;
  __n1097 = v1093;
  struct std____new_allocator_int_* t1098 = this1095;
    unsigned long c1099 = 4;
    unsigned long c1100 = 16;
    _Bool c1101 = ((c1099 > c1100)) ? 1 : 0;
    if (c1101) {
      int* t1102 = __p1096;
      void* cast1103 = (void*)t1102;
      unsigned long t1104 = __n1097;
      unsigned long c1105 = 4;
      unsigned long b1106 = t1104 * c1105;
      unsigned long c1107 = 4;
      operator_delete_3(cast1103, b1106, c1107);
      return;
    }
  int* t1108 = __p1096;
  void* cast1109 = (void*)t1108;
  unsigned long t1110 = __n1097;
  unsigned long c1111 = 4;
  unsigned long b1112 = t1110 * c1111;
  operator_delete_2(cast1109, b1112);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1113, int* v1114, unsigned long v1115) {
bb1116:
  struct std__allocator_int_* this1117;
  int* __p1118;
  unsigned long __n1119;
  this1117 = v1113;
  __p1118 = v1114;
  __n1119 = v1115;
  struct std__allocator_int_* t1120 = this1117;
    _Bool r1121 = std____is_constant_evaluated();
    if (r1121) {
      int* t1122 = __p1118;
      void* cast1123 = (void*)t1122;
      operator_delete(cast1123);
      return;
    }
  struct std____new_allocator_int_* base1124 = (struct std____new_allocator_int_*)((char *)t1120 + 0);
  int* t1125 = __p1118;
  unsigned long t1126 = __n1119;
  std____new_allocator_int___deallocate(base1124, t1125, t1126);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1127, int* v1128, unsigned long v1129) {
bb1130:
  struct std__allocator_int_* __a1131;
  int* __p1132;
  unsigned long __n1133;
  __a1131 = v1127;
  __p1132 = v1128;
  __n1133 = v1129;
  struct std__allocator_int_* t1134 = __a1131;
  int* t1135 = __p1132;
  unsigned long t1136 = __n1133;
  std__allocator_int___deallocate(t1134, t1135, t1136);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE18_M_deallocate_nodeEPi
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* v1137, int* v1138) {
bb1139:
  struct std___Deque_base_int__std__allocator_int__* this1140;
  int* __p1141;
  this1140 = v1137;
  __p1141 = v1138;
  struct std___Deque_base_int__std__allocator_int__* t1142 = this1140;
  struct std__allocator_int_* base1143 = (struct std__allocator_int_*)((char *)&(t1142->_M_impl) + 0);
  int* t1144 = __p1141;
  unsigned long c1145 = 4;
  unsigned long r1146 = std____deque_buf_size(c1145);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_traits_std__allocator_int_____deallocate(base1143, t1144, r1146);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_destroy_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* v1147, int** v1148, int** v1149) {
bb1150:
  struct std___Deque_base_int__std__allocator_int__* this1151;
  int** __nstart1152;
  int** __nfinish1153;
  this1151 = v1147;
  __nstart1152 = v1148;
  __nfinish1153 = v1149;
  struct std___Deque_base_int__std__allocator_int__* t1154 = this1151;
    int** __n1155;
    int** t1156 = __nstart1152;
    __n1155 = t1156;
    while (1) {
      int** t1158 = __n1155;
      int** t1159 = __nfinish1153;
      _Bool c1160 = ((t1158 < t1159)) ? 1 : 0;
      if (!c1160) break;
      int** t1161 = __n1155;
      int* t1162 = *t1161;
      std___Deque_base_int__std__allocator_int______M_deallocate_node(t1154, t1162);
    for_step1157: ;
      int** t1163 = __n1155;
      int c1164 = 1;
      int** ptr1165 = &(t1163)[c1164];
      __n1155 = ptr1165;
    }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_create_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* v1166, int** v1167, int** v1168) {
bb1169:
  struct std___Deque_base_int__std__allocator_int__* this1170;
  int** __nstart1171;
  int** __nfinish1172;
  int** __cur1173;
  this1170 = v1166;
  __nstart1171 = v1167;
  __nfinish1172 = v1168;
  struct std___Deque_base_int__std__allocator_int__* t1174 = this1170;
        int** t1176 = __nstart1171;
        __cur1173 = t1176;
        while (1) {
          int** t1178 = __cur1173;
          int** t1179 = __nfinish1172;
          _Bool c1180 = ((t1178 < t1179)) ? 1 : 0;
          if (!c1180) break;
          int* r1181 = std___Deque_base_int__std__allocator_int______M_allocate_node(t1174);
          if (__cir_exc_active) {
            goto cir_try_dispatch1175;
          }
          int** t1182 = __cur1173;
          *t1182 = r1181;
        for_step1177: ;
          int** t1183 = __cur1173;
          int c1184 = 1;
          int** ptr1185 = &(t1183)[c1184];
          __cur1173 = ptr1185;
        }
    cir_try_dispatch1175: ;
    if (__cir_exc_active) {
    {
      int ca_tok1186 = 0;
      void* ca_exn1187 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        int** t1188 = __nstart1171;
        int** t1189 = __cur1173;
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1174, t1188, t1189);
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  return;
}

// function: _ZNSt15__new_allocatorIPiE10deallocateEPS0_m
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* v1190, int** v1191, unsigned long v1192) {
bb1193:
  struct std____new_allocator_int___* this1194;
  int** __p1195;
  unsigned long __n1196;
  this1194 = v1190;
  __p1195 = v1191;
  __n1196 = v1192;
  struct std____new_allocator_int___* t1197 = this1194;
    unsigned long c1198 = 8;
    unsigned long c1199 = 16;
    _Bool c1200 = ((c1198 > c1199)) ? 1 : 0;
    if (c1200) {
      int** t1201 = __p1195;
      void* cast1202 = (void*)t1201;
      unsigned long t1203 = __n1196;
      unsigned long c1204 = 8;
      unsigned long b1205 = t1203 * c1204;
      unsigned long c1206 = 8;
      operator_delete_3(cast1202, b1205, c1206);
      return;
    }
  int** t1207 = __p1195;
  void* cast1208 = (void*)t1207;
  unsigned long t1209 = __n1196;
  unsigned long c1210 = 8;
  unsigned long b1211 = t1209 * c1210;
  operator_delete_2(cast1208, b1211);
  return;
}

// function: _ZNSaIPiE10deallocateEPS_m
void std__allocator_int____deallocate(struct std__allocator_int___* v1212, int** v1213, unsigned long v1214) {
bb1215:
  struct std__allocator_int___* this1216;
  int** __p1217;
  unsigned long __n1218;
  this1216 = v1212;
  __p1217 = v1213;
  __n1218 = v1214;
  struct std__allocator_int___* t1219 = this1216;
    _Bool r1220 = std____is_constant_evaluated();
    if (r1220) {
      int** t1221 = __p1217;
      void* cast1222 = (void*)t1221;
      operator_delete(cast1222);
      return;
    }
  struct std____new_allocator_int___* base1223 = (struct std____new_allocator_int___*)((char *)t1219 + 0);
  int** t1224 = __p1217;
  unsigned long t1225 = __n1218;
  std____new_allocator_int____deallocate(base1223, t1224, t1225);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIPiEE10deallocateERS1_PS0_m
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* v1226, int** v1227, unsigned long v1228) {
bb1229:
  struct std__allocator_int___* __a1230;
  int** __p1231;
  unsigned long __n1232;
  __a1230 = v1226;
  __p1231 = v1227;
  __n1232 = v1228;
  struct std__allocator_int___* t1233 = __a1230;
  int** t1234 = __p1231;
  unsigned long t1235 = __n1232;
  std__allocator_int____deallocate(t1233, t1234, t1235);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_deallocate_mapEPPim
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* v1236, int** v1237, unsigned long v1238) {
bb1239:
  struct std___Deque_base_int__std__allocator_int__* this1240;
  int** __p1241;
  unsigned long __n1242;
  struct std__allocator_int___ __map_alloc1243;
  this1240 = v1236;
  __p1241 = v1237;
  __n1242 = v1238;
  struct std___Deque_base_int__std__allocator_int__* t1244 = this1240;
  struct std__allocator_int___ r1245 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1244);
  __map_alloc1243 = r1245;
  int** t1246 = __p1241;
  unsigned long t1247 = __n1242;
  std__allocator_traits_std__allocator_int______deallocate(&__map_alloc1243, t1246, t1247);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE14_S_buffer_sizeEv
unsigned long std___Deque_iterator_int__int___int_____S_buffer_size() {
bb1248:
  unsigned long __retval1249;
  unsigned long c1250 = 4;
  unsigned long r1251 = std____deque_buf_size(c1250);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1249 = r1251;
  unsigned long t1252 = __retval1249;
  return t1252;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE11_M_set_nodeEPS1_
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* v1253, int** v1254) {
bb1255:
  struct std___Deque_iterator_int__int____int___* this1256;
  int** __new_node1257;
  this1256 = v1253;
  __new_node1257 = v1254;
  struct std___Deque_iterator_int__int____int___* t1258 = this1256;
  int** t1259 = __new_node1257;
  t1258->_M_node = t1259;
  int** t1260 = __new_node1257;
  int* t1261 = *t1260;
  t1258->_M_first = t1261;
  int* t1262 = t1258->_M_first;
  unsigned long r1263 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast1264 = (long)r1263;
  int* ptr1265 = &(t1262)[cast1264];
  t1258->_M_last = ptr1265;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_initialize_mapEm
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* v1266, unsigned long v1267) {
bb1268:
  struct std___Deque_base_int__std__allocator_int__* this1269;
  unsigned long __num_elements1270;
  unsigned long __num_nodes1271;
  unsigned long ref_tmp01272;
  unsigned long ref_tmp11273;
  int** __nstart1274;
  int** __nfinish1275;
  this1269 = v1266;
  __num_elements1270 = v1267;
  struct std___Deque_base_int__std__allocator_int__* t1276 = this1269;
  unsigned long t1277 = __num_elements1270;
  unsigned long c1278 = 4;
  unsigned long r1279 = std____deque_buf_size(c1278);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1280 = t1277 / r1279;
  unsigned long c1281 = 1;
  unsigned long b1282 = b1280 + c1281;
  __num_nodes1271 = b1282;
  unsigned long c1283 = 8;
  ref_tmp01272 = c1283;
  unsigned long t1284 = __num_nodes1271;
  unsigned long c1285 = 2;
  unsigned long b1286 = t1284 + c1285;
  ref_tmp11273 = b1286;
  unsigned long* r1287 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp01272, &ref_tmp11273);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t1288 = *r1287;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1289 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1276->_M_impl) + 0);
  base1289->_M_map_size = t1288;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1290 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1276->_M_impl) + 0);
  unsigned long t1291 = base1290->_M_map_size;
  int** r1292 = std___Deque_base_int__std__allocator_int______M_allocate_map(t1276, t1291);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1293 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1276->_M_impl) + 0);
  base1293->_M_map = r1292;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1294 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1276->_M_impl) + 0);
  int** t1295 = base1294->_M_map;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1296 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1276->_M_impl) + 0);
  unsigned long t1297 = base1296->_M_map_size;
  unsigned long t1298 = __num_nodes1271;
  unsigned long b1299 = t1297 - t1298;
  unsigned long c1300 = 2;
  unsigned long b1301 = b1299 / c1300;
  int** ptr1302 = &(t1295)[b1301];
  __nstart1274 = ptr1302;
  int** t1303 = __nstart1274;
  unsigned long t1304 = __num_nodes1271;
  int** ptr1305 = &(t1303)[t1304];
  __nfinish1275 = ptr1305;
      int** t1307 = __nstart1274;
      int** t1308 = __nfinish1275;
      std___Deque_base_int__std__allocator_int______M_create_nodes(t1276, t1307, t1308);
      if (__cir_exc_active) {
        goto cir_try_dispatch1306;
      }
    cir_try_dispatch1306: ;
    if (__cir_exc_active) {
    {
      int ca_tok1309 = 0;
      void* ca_exn1310 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1311 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1276->_M_impl) + 0);
        int** t1312 = base1311->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1313 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1276->_M_impl) + 0);
        unsigned long t1314 = base1313->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1276, t1312, t1314);
        int** c1315 = ((void*)0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1316 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1276->_M_impl) + 0);
        base1316->_M_map = c1315;
        unsigned long c1317 = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1318 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1276->_M_impl) + 0);
        base1318->_M_map_size = c1317;
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1319 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1276->_M_impl) + 0);
  int** t1320 = __nstart1274;
  std___Deque_iterator_int__int___int_____M_set_node(&base1319->_M_start, t1320);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1321 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1276->_M_impl) + 0);
  int** t1322 = __nfinish1275;
  int c1323 = -1;
  int** ptr1324 = &(t1322)[c1323];
  std___Deque_iterator_int__int___int_____M_set_node(&base1321->_M_finish, ptr1324);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1325 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1276->_M_impl) + 0);
  int* t1326 = base1325->_M_start._M_first;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1327 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1276->_M_impl) + 0);
  base1327->_M_start._M_cur = t1326;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1328 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1276->_M_impl) + 0);
  int* t1329 = base1328->_M_finish._M_first;
  unsigned long t1330 = __num_elements1270;
  unsigned long c1331 = 4;
  unsigned long r1332 = std____deque_buf_size(c1331);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1333 = t1330 % r1332;
  int* ptr1334 = &(t1329)[b1333];
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1335 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1276->_M_impl) + 0);
  base1335->_M_finish._M_cur = ptr1334;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implD2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1336) {
bb1337:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1338;
  this1338 = v1336;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1339 = this1338;
  {
    struct std__allocator_int_* base1340 = (struct std__allocator_int_*)((char *)t1339 + 0);
    std__allocator_int____allocator(base1340);
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEEC2Ev
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1341) {
bb1342:
  struct std___Deque_base_int__std__allocator_int__* this1343;
  this1343 = v1341;
  struct std___Deque_base_int__std__allocator_int__* t1344 = this1343;
  std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(&t1344->_M_impl);
    unsigned long c1345 = 0;
    std___Deque_base_int__std__allocator_int______M_initialize_map(t1344, c1345);
    if (__cir_exc_active) {
      {
        std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1344->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEED2Ev
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1346) {
bb1347:
  struct std___Deque_base_int__std__allocator_int__* this1348;
  this1348 = v1346;
  struct std___Deque_base_int__std__allocator_int__* t1349 = this1348;
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1350 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1349->_M_impl) + 0);
      int** t1351 = base1350->_M_map;
      _Bool cast1352 = (_Bool)t1351;
      if (cast1352) {
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1353 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1349->_M_impl) + 0);
        int** t1354 = base1353->_M_start._M_node;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1355 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1349->_M_impl) + 0);
        int** t1356 = base1355->_M_finish._M_node;
        int c1357 = 1;
        int** ptr1358 = &(t1356)[c1357];
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1349, t1354, ptr1358);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1359 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1349->_M_impl) + 0);
        int** t1360 = base1359->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1361 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1349->_M_impl) + 0);
        unsigned long t1362 = base1361->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1349, t1360, t1362);
      }
  {
    std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1349->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1363) {
bb1364:
  struct std____new_allocator_int_* this1365;
  this1365 = v1363;
  struct std____new_allocator_int_* t1366 = this1365;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1367) {
bb1368:
  struct std__allocator_int_* this1369;
  this1369 = v1367;
  struct std__allocator_int_* t1370 = this1369;
  struct std____new_allocator_int_* base1371 = (struct std____new_allocator_int_*)((char *)t1370 + 0);
  std____new_allocator_int_____new_allocator(base1371);
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2Ev
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* v1372) {
bb1373:
  struct std___Deque_iterator_int__int____int___* this1374;
  this1374 = v1372;
  struct std___Deque_iterator_int__int____int___* t1375 = this1374;
  int* c1376 = ((void*)0);
  t1375->_M_cur = c1376;
  int* c1377 = ((void*)0);
  t1375->_M_first = c1377;
  int* c1378 = ((void*)0);
  t1375->_M_last = c1378;
  int** c1379 = ((void*)0);
  t1375->_M_node = c1379;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_Deque_impl_dataC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v1380) {
bb1381:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* this1382;
  this1382 = v1380;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t1383 = this1382;
  int** c1384 = ((void*)0);
  t1383->_M_map = c1384;
  unsigned long c1385 = 0;
  t1383->_M_map_size = c1385;
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1383->_M_start);
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1383->_M_finish);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1386) {
bb1387:
  struct std__allocator_int_* this1388;
  this1388 = v1386;
  struct std__allocator_int_* t1389 = this1388;
  return;
}

// function: _ZNSt15__new_allocatorIPiEC2Ev
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* v1390) {
bb1391:
  struct std____new_allocator_int___* this1392;
  this1392 = v1390;
  struct std____new_allocator_int___* t1393 = this1392;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1394) {
bb1395:
  int* __location1396;
  __location1396 = v1394;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1397, int* v1398) {
bb1399:
  int* __first1400;
  int* __last1401;
  __first1400 = v1397;
  __last1401 = v1398;
      _Bool r1402 = std____is_constant_evaluated();
      if (r1402) {
          while (1) {
            int* t1404 = __first1400;
            int* t1405 = __last1401;
            _Bool c1406 = ((t1404 != t1405)) ? 1 : 0;
            if (!c1406) break;
            int* t1407 = __first1400;
            void_std__destroy_at_int_(t1407);
            if (__cir_exc_active) {
              return;
            }
          for_step1403: ;
            int* t1408 = __first1400;
            int c1409 = 1;
            int* ptr1410 = &(t1408)[c1409];
            __first1400 = ptr1410;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1411, int* v1412, struct std__allocator_int_* v1413) {
bb1414:
  int* __first1415;
  int* __last1416;
  struct std__allocator_int_* unnamed1417;
  __first1415 = v1411;
  __last1416 = v1412;
  unnamed1417 = v1413;
  int* t1418 = __first1415;
  int* t1419 = __last1416;
  void_std___Destroy_int__(t1418, t1419);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIiSaIiEE14_S_buffer_sizeEv
unsigned long std__deque_int__std__allocator_int______S_buffer_size() {
bb1420:
  unsigned long __retval1421;
  unsigned long c1422 = 4;
  unsigned long r1423 = std____deque_buf_size(c1422);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1421 = r1423;
  unsigned long t1424 = __retval1421;
  return t1424;
}

// function: _ZNSt5dequeIiSaIiEE19_M_destroy_data_auxESt15_Deque_iteratorIiRiPiES5_
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* v1425, struct std___Deque_iterator_int__int____int___ v1426, struct std___Deque_iterator_int__int____int___ v1427) {
bb1428:
  struct std__deque_int__std__allocator_int__* this1429;
  struct std___Deque_iterator_int__int____int___ __first1430;
  struct std___Deque_iterator_int__int____int___ __last1431;
  this1429 = v1425;
  __first1430 = v1426;
  __last1431 = v1427;
  struct std__deque_int__std__allocator_int__* t1432 = this1429;
    int** __node1433;
    int** t1434 = __first1430._M_node;
    int c1435 = 1;
    int** ptr1436 = &(t1434)[c1435];
    __node1433 = ptr1436;
    while (1) {
      int** t1438 = __node1433;
      int** t1439 = __last1431._M_node;
      _Bool c1440 = ((t1438 < t1439)) ? 1 : 0;
      if (!c1440) break;
      int** t1441 = __node1433;
      int* t1442 = *t1441;
      int** t1443 = __node1433;
      int* t1444 = *t1443;
      unsigned long r1445 = std__deque_int__std__allocator_int______S_buffer_size();
      int* ptr1446 = &(t1444)[r1445];
      struct std___Deque_base_int__std__allocator_int__* base1447 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1432 + 0);
      struct std__allocator_int_* r1448 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1447);
      void_std___Destroy_int___int_(t1442, ptr1446, r1448);
      if (__cir_exc_active) {
        return;
      }
    for_step1437: ;
      int** t1449 = __node1433;
      int c1450 = 1;
      int** ptr1451 = &(t1449)[c1450];
      __node1433 = ptr1451;
    }
    int** t1452 = __first1430._M_node;
    int** t1453 = __last1431._M_node;
    _Bool c1454 = ((t1452 != t1453)) ? 1 : 0;
    if (c1454) {
      int* t1455 = __first1430._M_cur;
      int* t1456 = __first1430._M_last;
      struct std___Deque_base_int__std__allocator_int__* base1457 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1432 + 0);
      struct std__allocator_int_* r1458 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1457);
      void_std___Destroy_int___int_(t1455, t1456, r1458);
      if (__cir_exc_active) {
        return;
      }
      int* t1459 = __last1431._M_first;
      int* t1460 = __last1431._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1461 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1432 + 0);
      struct std__allocator_int_* r1462 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1461);
      void_std___Destroy_int___int_(t1459, t1460, r1462);
      if (__cir_exc_active) {
        return;
      }
    } else {
      int* t1463 = __first1430._M_cur;
      int* t1464 = __last1431._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1465 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1432 + 0);
      struct std__allocator_int_* r1466 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1465);
      void_std___Destroy_int___int_(t1463, t1464, r1466);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ERKS2_
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* v1467, struct std___Deque_iterator_int__int____int___* v1468) {
bb1469:
  struct std___Deque_iterator_int__int____int___* this1470;
  struct std___Deque_iterator_int__int____int___* __x1471;
  this1470 = v1467;
  __x1471 = v1468;
  struct std___Deque_iterator_int__int____int___* t1472 = this1470;
  struct std___Deque_iterator_int__int____int___* t1473 = __x1471;
  int* t1474 = t1473->_M_cur;
  t1472->_M_cur = t1474;
  struct std___Deque_iterator_int__int____int___* t1475 = __x1471;
  int* t1476 = t1475->_M_first;
  t1472->_M_first = t1476;
  struct std___Deque_iterator_int__int____int___* t1477 = __x1471;
  int* t1478 = t1477->_M_last;
  t1472->_M_last = t1478;
  struct std___Deque_iterator_int__int____int___* t1479 = __x1471;
  int** t1480 = t1479->_M_node;
  t1472->_M_node = t1480;
  return;
}

// function: _ZNSt5dequeIiSaIiEE15_M_destroy_dataESt15_Deque_iteratorIiRiPiES5_RKS0_
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* v1481, struct std___Deque_iterator_int__int____int___ v1482, struct std___Deque_iterator_int__int____int___ v1483, struct std__allocator_int_* v1484) {
bb1485:
  struct std__deque_int__std__allocator_int__* this1486;
  struct std___Deque_iterator_int__int____int___ __first1487;
  struct std___Deque_iterator_int__int____int___ __last1488;
  struct std__allocator_int_* unnamed1489;
  this1486 = v1481;
  __first1487 = v1482;
  __last1488 = v1483;
  unnamed1489 = v1484;
  struct std__deque_int__std__allocator_int__* t1490 = this1486;
    _Bool c1491 = 0;
    if (c1491) {
      struct std___Deque_iterator_int__int____int___ agg_tmp01492;
      struct std___Deque_iterator_int__int____int___ agg_tmp11493;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01492, &__first1487);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11493, &__last1488);
      struct std___Deque_iterator_int__int____int___ t1494 = agg_tmp01492;
      struct std___Deque_iterator_int__int____int___ t1495 = agg_tmp11493;
      std__deque_int__std__allocator_int______M_destroy_data_aux(t1490, t1494, t1495);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE5beginEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* v1496) {
bb1497:
  struct std__deque_int__std__allocator_int__* this1498;
  struct std___Deque_iterator_int__int____int___ __retval1499;
  this1498 = v1496;
  struct std__deque_int__std__allocator_int__* t1500 = this1498;
  struct std___Deque_base_int__std__allocator_int__* base1501 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1500 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1502 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1501->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1499, &base1502->_M_start);
  struct std___Deque_iterator_int__int____int___ t1503 = __retval1499;
  return t1503;
}

// function: _ZNSt5dequeIiSaIiEE3endEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* v1504) {
bb1505:
  struct std__deque_int__std__allocator_int__* this1506;
  struct std___Deque_iterator_int__int____int___ __retval1507;
  this1506 = v1504;
  struct std__deque_int__std__allocator_int__* t1508 = this1506;
  struct std___Deque_base_int__std__allocator_int__* base1509 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1508 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1510 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1509->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1507, &base1510->_M_finish);
  struct std___Deque_iterator_int__int____int___ t1511 = __retval1507;
  return t1511;
}

// function: _ZNSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* v1512) {
bb1513:
  struct std___Deque_base_int__std__allocator_int__* this1514;
  struct std__allocator_int_* __retval1515;
  this1514 = v1512;
  struct std___Deque_base_int__std__allocator_int__* t1516 = this1514;
  struct std__allocator_int_* base1517 = (struct std__allocator_int_*)((char *)&(t1516->_M_impl) + 0);
  __retval1515 = base1517;
  struct std__allocator_int_* t1518 = __retval1515;
  return t1518;
}

