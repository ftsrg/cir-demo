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

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Deque_iterator_int__int____int___ { int* _M_cur; int* _M_first; int* _M_last; int** _M_node; };
struct std____cmp_cat____unspec { unsigned char __field0; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std____new_allocator_int___ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__allocator_int___ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__iterator_std__random_access_iterator_tag__int__long__int____int___ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__reverse_iterator_std___Deque_iterator_int__int____int____ { struct std___Deque_iterator_int__int____int___ current; };
struct std__strong_ordering { char _M_value; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl_data { int** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_int__int____int___ _M_start; struct std___Deque_iterator_int__int____int___ _M_finish; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl { struct std___Deque_base_int__std__allocator_int_____Deque_impl_data __field0; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std___Deque_base_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int_____Deque_impl _M_impl; };
struct std__deque_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int__ __field0; };

struct std____cmp_cat____unspec __const_main_agg_tmp1;
struct std____cmp_cat____unspec __const__ZStssRKSt15_Deque_iteratorIiRiPiES4__agg_tmp1;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[18] = "mydeque contains:";
char _str_1[2] = " ";
char _str_2[22] = "rit == mydeque.rend()";
char _str_3[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_rend/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[48] = "cannot create std::deque larger than max_size()";
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* p0);
void std__reverse_iterator_std___Deque_iterator_int__int___int______reverse_iterator_2(struct std__reverse_iterator_std___Deque_iterator_int__int____int____* p0);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* p0, int* p1, int* p2);
long std__operator__2(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* p0);
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
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__3(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
void std__reverse_iterator_std___Deque_iterator_int__int___int______reverse_iterator(struct std__reverse_iterator_std___Deque_iterator_int__int____int____* p0, struct std___Deque_iterator_int__int____int___ p1);
struct std__reverse_iterator_std___Deque_iterator_int__int____int____ std__deque_int__std__allocator_int_____rbegin(struct std__deque_int__std__allocator_int__* p0);
struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* std__iterator_std__random_access_iterator_tag__int__long__int___int____operator_(struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* p0, struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* p1);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator_(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
struct std__reverse_iterator_std___Deque_iterator_int__int____int____* std__reverse_iterator_std___Deque_iterator_int__int___int______operator_(struct std__reverse_iterator_std___Deque_iterator_int__int____int____* p0, struct std__reverse_iterator_std___Deque_iterator_int__int____int____* p1);
_Bool std__operator_(struct std__strong_ordering p0, struct std____cmp_cat____unspec p1);
_Bool std__operator___2(struct std__strong_ordering p0, struct std____cmp_cat____unspec p1);
struct std__strong_ordering std__operator___(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
struct std___Deque_iterator_int__int____int___ std__reverse_iterator_std___Deque_iterator_int__int___int______base___const(struct std__reverse_iterator_std___Deque_iterator_int__int____int____* p0);
struct std__strong_ordering _ZStssITkSt20three_way_comparableSt15_Deque_iteratorIiRiPiEENSt8__detail18__cmp3way_res_implIT_S6_E4typeERKSt16reverse_iteratorIS6_ESC_(struct std__reverse_iterator_std___Deque_iterator_int__int____int____* p0, struct std__reverse_iterator_std___Deque_iterator_int__int____int____* p1);
struct std__reverse_iterator_std___Deque_iterator_int__int____int____ std__deque_int__std__allocator_int_____rend(struct std__deque_int__std__allocator_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* p0);
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* p0);
int* std__reverse_iterator_std___Deque_iterator_int__int___int______operator____const(struct std__reverse_iterator_std___Deque_iterator_int__int____int____* p0);
struct std__reverse_iterator_std___Deque_iterator_int__int____int____* std__reverse_iterator_std___Deque_iterator_int__int___int______operator__(struct std__reverse_iterator_std___Deque_iterator_int__int____int____* p0);
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
_Bool _ZSteqISt15_Deque_iteratorIiRiPiEEbRKSt16reverse_iteratorIT_ES8_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct std__reverse_iterator_std___Deque_iterator_int__int____int____* p0, struct std__reverse_iterator_std___Deque_iterator_int__int____int____* p1);
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

// function: _ZNSt16reverse_iteratorISt15_Deque_iteratorIiRiPiEEC2Ev
void std__reverse_iterator_std___Deque_iterator_int__int___int______reverse_iterator_2(struct std__reverse_iterator_std___Deque_iterator_int__int____int____* v5) {
bb6:
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* this7;
  this7 = v5;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* t8 = this7;
  struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* base9 = (struct std__iterator_std__random_access_iterator_tag__int__long__int____int___*)((char *)t8 + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t8->current);
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v10, int* v11) {
bb12:
  int* __location13;
  int* __args14;
  int* __retval15;
  void* __loc16;
  __location13 = v10;
  __args14 = v11;
  int* t17 = __location13;
  void* cast18 = (void*)t17;
  __loc16 = cast18;
    void* t19 = __loc16;
    int* cast20 = (int*)t19;
    int* t21 = __args14;
    int t22 = *t21;
    *cast20 = t22;
    __retval15 = cast20;
    int* t23 = __retval15;
    return t23;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* v24, int* v25, int* v26) {
bb27:
  struct std__allocator_int_* __a28;
  int* __p29;
  int* __args30;
  __a28 = v24;
  __p29 = v25;
  __args30 = v26;
  int* t31 = __p29;
  int* t32 = __args30;
  int* r33 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t31, t32);
  return;
}

// function: _ZStmiRKSt15_Deque_iteratorIiRiPiES4_
long std__operator__2(struct std___Deque_iterator_int__int____int___* v34, struct std___Deque_iterator_int__int____int___* v35) {
bb36:
  struct std___Deque_iterator_int__int____int___* __x37;
  struct std___Deque_iterator_int__int____int___* __y38;
  long __retval39;
  __x37 = v34;
  __y38 = v35;
  unsigned long r40 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast41 = (long)r40;
  struct std___Deque_iterator_int__int____int___* t42 = __x37;
  int** t43 = t42->_M_node;
  struct std___Deque_iterator_int__int____int___* t44 = __y38;
  int** t45 = t44->_M_node;
  long diff46 = t43 - t45;
  struct std___Deque_iterator_int__int____int___* t47 = __x37;
  int** t48 = t47->_M_node;
  _Bool cast49 = (_Bool)t48;
  long cast50 = (long)cast49;
  long b51 = diff46 - cast50;
  long b52 = cast41 * b51;
  struct std___Deque_iterator_int__int____int___* t53 = __x37;
  int* t54 = t53->_M_cur;
  struct std___Deque_iterator_int__int____int___* t55 = __x37;
  int* t56 = t55->_M_first;
  long diff57 = t54 - t56;
  long b58 = b52 + diff57;
  struct std___Deque_iterator_int__int____int___* t59 = __y38;
  int* t60 = t59->_M_last;
  struct std___Deque_iterator_int__int____int___* t61 = __y38;
  int* t62 = t61->_M_cur;
  long diff63 = t60 - t62;
  long b64 = b58 + diff63;
  __retval39 = b64;
  long t65 = __retval39;
  return t65;
}

// function: _ZNKSt5dequeIiSaIiEE4sizeEv
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* v66) {
bb67:
  struct std__deque_int__std__allocator_int__* this68;
  unsigned long __retval69;
  unsigned long __sz70;
  this68 = v66;
  struct std__deque_int__std__allocator_int__* t71 = this68;
  struct std___Deque_base_int__std__allocator_int__* base72 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t71 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base73 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base72->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base74 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t71 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base75 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base74->_M_impl) + 0);
  long r76 = std__operator__2(&base73->_M_finish, &base75->_M_start);
  unsigned long cast77 = (unsigned long)r76;
  __sz70 = cast77;
    unsigned long t78 = __sz70;
    unsigned long r79 = std__deque_int__std__allocator_int_____max_size___const(t71);
    _Bool c80 = ((t78 > r79)) ? 1 : 0;
    if (c80) {
      __builtin_unreachable();
    }
  unsigned long t81 = __sz70;
  __retval69 = t81;
  unsigned long t82 = __retval69;
  return t82;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v83, unsigned long* v84) {
bb85:
  unsigned long* __a86;
  unsigned long* __b87;
  unsigned long* __retval88;
  __a86 = v83;
  __b87 = v84;
    unsigned long* t89 = __b87;
    unsigned long t90 = *t89;
    unsigned long* t91 = __a86;
    unsigned long t92 = *t91;
    _Bool c93 = ((t90 < t92)) ? 1 : 0;
    if (c93) {
      unsigned long* t94 = __b87;
      __retval88 = t94;
      unsigned long* t95 = __retval88;
      return t95;
    }
  unsigned long* t96 = __a86;
  __retval88 = t96;
  unsigned long* t97 = __retval88;
  return t97;
}

// function: _ZNSt5dequeIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__deque_int__std__allocator_int______S_max_size(struct std__allocator_int_* v98) {
bb99:
  struct std__allocator_int_* __a100;
  unsigned long __retval101;
  unsigned long __diffmax102;
  unsigned long __allocmax103;
  __a100 = v98;
  unsigned long c104 = 9223372036854775807;
  __diffmax102 = c104;
  unsigned long c105 = 4611686018427387903;
  __allocmax103 = c105;
  unsigned long* r106 = unsigned_long_const__std__min_unsigned_long_(&__diffmax102, &__allocmax103);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t107 = *r106;
  __retval101 = t107;
  unsigned long t108 = __retval101;
  return t108;
}

// function: _ZNKSt5dequeIiSaIiEE8max_sizeEv
unsigned long std__deque_int__std__allocator_int_____max_size___const(struct std__deque_int__std__allocator_int__* v109) {
bb110:
  struct std__deque_int__std__allocator_int__* this111;
  unsigned long __retval112;
  this111 = v109;
  struct std__deque_int__std__allocator_int__* t113 = this111;
  struct std___Deque_base_int__std__allocator_int__* base114 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t113 + 0);
  struct std__allocator_int_* r115 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(base114);
  unsigned long r116 = std__deque_int__std__allocator_int______S_max_size(r115);
  __retval112 = r116;
  unsigned long t117 = __retval112;
  return t117;
}

// function: _ZSt12__niter_wrapIPPiET_RKS2_S2_
int** int___std____niter_wrap_int___(int*** v118, int** v119) {
bb120:
  int*** unnamed121;
  int** __res122;
  int** __retval123;
  unnamed121 = v118;
  __res122 = v119;
  int** t124 = __res122;
  __retval123 = t124;
  int** t125 = __retval123;
  return t125;
}

// function: _ZSt10__distanceIPPiENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_int_____difference_type_std____distance_int___(int** v126, int** v127, struct std__random_access_iterator_tag v128) {
bb129:
  int** __first130;
  int** __last131;
  struct std__random_access_iterator_tag unnamed132;
  long __retval133;
  __first130 = v126;
  __last131 = v127;
  unnamed132 = v128;
  int** t134 = __last131;
  int** t135 = __first130;
  long diff136 = t134 - t135;
  __retval133 = diff136;
  long t137 = __retval133;
  return t137;
}

// function: _ZSt19__iterator_categoryIPPiENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_int_____iterator_category_std____iterator_category_int___(int*** v138) {
bb139:
  int*** unnamed140;
  struct std__random_access_iterator_tag __retval141;
  unnamed140 = v138;
  struct std__random_access_iterator_tag t142 = __retval141;
  return t142;
}

// function: _ZSt8distanceIPPiENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_int_____difference_type_std__distance_int___(int** v143, int** v144) {
bb145:
  int** __first146;
  int** __last147;
  long __retval148;
  struct std__random_access_iterator_tag agg_tmp0149;
  __first146 = v143;
  __last147 = v144;
  int** t150 = __first146;
  int** t151 = __last147;
  struct std__random_access_iterator_tag r152 = std__iterator_traits_int_____iterator_category_std____iterator_category_int___(&__first146);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp0149 = r152;
  struct std__random_access_iterator_tag t153 = agg_tmp0149;
  long r154 = std__iterator_traits_int_____difference_type_std____distance_int___(t150, t151, t153);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval148 = r154;
  long t155 = __retval148;
  return t155;
}

// function: _ZSt12__assign_oneILb0EPPiS1_EvRT0_RT1_
void void_std____assign_one_false__int____int___(int*** v156, int*** v157) {
bb158:
  int*** __out159;
  int*** __in160;
  __out159 = v156;
  __in160 = v157;
    int*** t161 = __in160;
    int** t162 = *t161;
    int* t163 = *t162;
    int*** t164 = __out159;
    int** t165 = *t164;
    *t165 = t163;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPPiS1_S1_ET2_T0_T1_S2_
int** int___std____copy_move_a2_false__int____int____int___(int** v166, int** v167, int** v168) {
bb169:
  int** __first170;
  int** __last171;
  int** __result172;
  int** __retval173;
  __first170 = v166;
  __last171 = v167;
  __result172 = v168;
      _Bool r174 = std____is_constant_evaluated();
      if (r174) {
      } else {
          long __n175;
          int** t176 = __first170;
          int** t177 = __last171;
          long r178 = std__iterator_traits_int_____difference_type_std__distance_int___(t176, t177);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
          __n175 = r178;
            long t179 = __n175;
            long c180 = 1;
            _Bool c181 = ((t179 > c180)) ? 1 : 0;
            if (c181) {
              int** t182 = __result172;
              void* cast183 = (void*)t182;
              int** t184 = __first170;
              void* cast185 = (void*)t184;
              long t186 = __n175;
              unsigned long cast187 = (unsigned long)t186;
              unsigned long c188 = 8;
              unsigned long b189 = cast187 * c188;
              void* r190 = memmove(cast183, cast185, b189);
              long t191 = __n175;
              int** t192 = __result172;
              int** ptr193 = &(t192)[t191];
              __result172 = ptr193;
            } else {
                long t194 = __n175;
                long c195 = 1;
                _Bool c196 = ((t194 == c195)) ? 1 : 0;
                if (c196) {
                  void_std____assign_one_false__int____int___(&__result172, &__first170);
                  if (__cir_exc_active) {
                    int** __cir_eh_ret = (int**)0;
                    return __cir_eh_ret;
                  }
                  int** t197 = __result172;
                  int c198 = 1;
                  int** ptr199 = &(t197)[c198];
                  __result172 = ptr199;
                }
            }
          int** t200 = __result172;
          __retval173 = t200;
          int** t201 = __retval173;
          return t201;
      }
    while (1) {
      int** t203 = __first170;
      int** t204 = __last171;
      _Bool c205 = ((t203 != t204)) ? 1 : 0;
      if (!c205) break;
      void_std____assign_one_false__int____int___(&__result172, &__first170);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
    for_step202: ;
      int** t206 = __result172;
      int c207 = 1;
      int** ptr208 = &(t206)[c207];
      __result172 = ptr208;
      int** t209 = __first170;
      int c210 = 1;
      int** ptr211 = &(t209)[c210];
      __first170 = ptr211;
    }
  int** t212 = __result172;
  __retval173 = t212;
  int** t213 = __retval173;
  return t213;
}

// function: _ZSt14__copy_move_a1ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_a1_false__int____int___(int** v214, int** v215, int** v216) {
bb217:
  int** __first218;
  int** __last219;
  int** __result220;
  int** __retval221;
  __first218 = v214;
  __last219 = v215;
  __result220 = v216;
  int** t222 = __first218;
  int** t223 = __last219;
  int** t224 = __result220;
  int** r225 = int___std____copy_move_a2_false__int____int____int___(t222, t223, t224);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval221 = r225;
  int** t226 = __retval221;
  return t226;
}

// function: _ZSt12__niter_baseIPPiET_S2_
int** int___std____niter_base_int___(int** v227) {
bb228:
  int** __it229;
  int** __retval230;
  __it229 = v227;
  int** t231 = __it229;
  __retval230 = t231;
  int** t232 = __retval230;
  return t232;
}

// function: _ZSt13__copy_move_aILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_a_false__int____int___(int** v233, int** v234, int** v235) {
bb236:
  int** __first237;
  int** __last238;
  int** __result239;
  int** __retval240;
  __first237 = v233;
  __last238 = v234;
  __result239 = v235;
  int** t241 = __first237;
  int** r242 = int___std____niter_base_int___(t241);
  int** t243 = __last238;
  int** r244 = int___std____niter_base_int___(t243);
  int** t245 = __result239;
  int** r246 = int___std____niter_base_int___(t245);
  int** r247 = int___std____copy_move_a1_false__int____int___(r242, r244, r246);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** r248 = int___std____niter_wrap_int___(&__result239, r247);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval240 = r248;
  int** t249 = __retval240;
  return t249;
}

// function: _ZSt12__miter_baseIPPiET_S2_
int** int___std____miter_base_int___(int** v250) {
bb251:
  int** __it252;
  int** __retval253;
  __it252 = v250;
  int** t254 = __it252;
  __retval253 = t254;
  int** t255 = __retval253;
  return t255;
}

// function: _ZSt4copyIPPiS1_ET0_T_S3_S2_
int** int___std__copy_int____int___(int** v256, int** v257, int** v258) {
bb259:
  int** __first260;
  int** __last261;
  int** __result262;
  int** __retval263;
  __first260 = v256;
  __last261 = v257;
  __result262 = v258;
  int** t264 = __first260;
  int** r265 = int___std____miter_base_int___(t264);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t266 = __last261;
  int** r267 = int___std____miter_base_int___(t266);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t268 = __result262;
  int** r269 = int___std____copy_move_a_false__int____int___(r265, r267, t268);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval263 = r269;
  int** t270 = __retval263;
  return t270;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb271:
  _Bool __retval272;
    _Bool c273 = 0;
    __retval272 = c273;
    _Bool t274 = __retval272;
    return t274;
  abort();
}

// function: _ZSt9__advanceIPPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int____long_(int*** v275, long v276, struct std__random_access_iterator_tag v277) {
bb278:
  int*** __i279;
  long __n280;
  struct std__random_access_iterator_tag unnamed281;
  __i279 = v275;
  __n280 = v276;
  unnamed281 = v277;
    long t282 = __n280;
    _Bool isconst283 = 0;
    _Bool ternary284;
    if (isconst283) {
      long t285 = __n280;
      long c286 = 1;
      _Bool c287 = ((t285 == c286)) ? 1 : 0;
      ternary284 = (_Bool)c287;
    } else {
      _Bool c288 = 0;
      ternary284 = (_Bool)c288;
    }
    if (ternary284) {
      int*** t289 = __i279;
      int** t290 = *t289;
      int c291 = 1;
      int** ptr292 = &(t290)[c291];
      *t289 = ptr292;
    } else {
        long t293 = __n280;
        _Bool isconst294 = 0;
        _Bool ternary295;
        if (isconst294) {
          long t296 = __n280;
          long c297 = -1;
          _Bool c298 = ((t296 == c297)) ? 1 : 0;
          ternary295 = (_Bool)c298;
        } else {
          _Bool c299 = 0;
          ternary295 = (_Bool)c299;
        }
        if (ternary295) {
          int*** t300 = __i279;
          int** t301 = *t300;
          int c302 = -1;
          int** ptr303 = &(t301)[c302];
          *t300 = ptr303;
        } else {
          long t304 = __n280;
          int*** t305 = __i279;
          int** t306 = *t305;
          int** ptr307 = &(t306)[t304];
          *t305 = ptr307;
        }
    }
  return;
}

// function: _ZSt7advanceIPPilEvRT_T0_
void void_std__advance_int____long_(int*** v308, long v309) {
bb310:
  int*** __i311;
  long __n312;
  long __d313;
  struct std__random_access_iterator_tag agg_tmp0314;
  __i311 = v308;
  __n312 = v309;
  long t315 = __n312;
  __d313 = t315;
  int*** t316 = __i311;
  long t317 = __d313;
  int*** t318 = __i311;
  struct std__random_access_iterator_tag r319 = std__iterator_traits_int_____iterator_category_std____iterator_category_int___(t318);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp0314 = r319;
  struct std__random_access_iterator_tag t320 = agg_tmp0314;
  void_std____advance_int____long_(t316, t317, t320);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt23__copy_move_backward_a2ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a2_false__int____int___(int** v321, int** v322, int** v323) {
bb324:
  int** __first325;
  int** __last326;
  int** __result327;
  int** __retval328;
  __first325 = v321;
  __last326 = v322;
  __result327 = v323;
      _Bool r329 = std__is_constant_evaluated();
      if (r329) {
      } else {
          long __n330;
          int** t331 = __first325;
          int** t332 = __last326;
          long r333 = std__iterator_traits_int_____difference_type_std__distance_int___(t331, t332);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
          __n330 = r333;
          long t334 = __n330;
          long u335 = -t334;
          void_std__advance_int____long_(&__result327, u335);
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
            long t336 = __n330;
            long c337 = 1;
            _Bool c338 = ((t336 > c337)) ? 1 : 0;
            if (c338) {
              int** t339 = __result327;
              void* cast340 = (void*)t339;
              int** t341 = __first325;
              void* cast342 = (void*)t341;
              long t343 = __n330;
              unsigned long cast344 = (unsigned long)t343;
              unsigned long c345 = 8;
              unsigned long b346 = cast344 * c345;
              void* r347 = memmove(cast340, cast342, b346);
            } else {
                long t348 = __n330;
                long c349 = 1;
                _Bool c350 = ((t348 == c349)) ? 1 : 0;
                if (c350) {
                  void_std____assign_one_false__int____int___(&__result327, &__first325);
                  if (__cir_exc_active) {
                    int** __cir_eh_ret = (int**)0;
                    return __cir_eh_ret;
                  }
                }
            }
          int** t351 = __result327;
          __retval328 = t351;
          int** t352 = __retval328;
          return t352;
      }
    while (1) {
      int** t353 = __first325;
      int** t354 = __last326;
      _Bool c355 = ((t353 != t354)) ? 1 : 0;
      if (!c355) break;
        int** t356 = __last326;
        int c357 = -1;
        int** ptr358 = &(t356)[c357];
        __last326 = ptr358;
        int** t359 = __result327;
        int c360 = -1;
        int** ptr361 = &(t359)[c360];
        __result327 = ptr361;
        void_std____assign_one_false__int____int___(&__result327, &__last326);
        if (__cir_exc_active) {
          int** __cir_eh_ret = (int**)0;
          return __cir_eh_ret;
        }
    }
  int** t362 = __result327;
  __retval328 = t362;
  int** t363 = __retval328;
  return t363;
}

// function: _ZSt23__copy_move_backward_a1ILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a1_false__int____int___(int** v364, int** v365, int** v366) {
bb367:
  int** __first368;
  int** __last369;
  int** __result370;
  int** __retval371;
  __first368 = v364;
  __last369 = v365;
  __result370 = v366;
  int** t372 = __first368;
  int** t373 = __last369;
  int** t374 = __result370;
  int** r375 = int___std____copy_move_backward_a2_false__int____int___(t372, t373, t374);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval371 = r375;
  int** t376 = __retval371;
  return t376;
}

// function: _ZSt22__copy_move_backward_aILb0EPPiS1_ET1_T0_S3_S2_
int** int___std____copy_move_backward_a_false__int____int___(int** v377, int** v378, int** v379) {
bb380:
  int** __first381;
  int** __last382;
  int** __result383;
  int** __retval384;
  __first381 = v377;
  __last382 = v378;
  __result383 = v379;
  int** t385 = __first381;
  int** r386 = int___std____niter_base_int___(t385);
  int** t387 = __last382;
  int** r388 = int___std____niter_base_int___(t387);
  int** t389 = __result383;
  int** r390 = int___std____niter_base_int___(t389);
  int** r391 = int___std____copy_move_backward_a1_false__int____int___(r386, r388, r390);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** r392 = int___std____niter_wrap_int___(&__result383, r391);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval384 = r392;
  int** t393 = __retval384;
  return t393;
}

// function: _ZSt13copy_backwardIPPiS1_ET0_T_S3_S2_
int** int___std__copy_backward_int____int___(int** v394, int** v395, int** v396) {
bb397:
  int** __first398;
  int** __last399;
  int** __result400;
  int** __retval401;
  __first398 = v394;
  __last399 = v395;
  __result400 = v396;
  int** t402 = __first398;
  int** r403 = int___std____miter_base_int___(t402);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t404 = __last399;
  int** r405 = int___std____miter_base_int___(t404);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** t406 = __result400;
  int** r407 = int___std____copy_move_backward_a_false__int____int___(r403, r405, t406);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval401 = r407;
  int** t408 = __retval401;
  return t408;
}

// function: _ZNSt5dequeIiSaIiEE17_M_reallocate_mapEmb
void std__deque_int__std__allocator_int______M_reallocate_map(struct std__deque_int__std__allocator_int__* v409, unsigned long v410, _Bool v411) {
bb412:
  struct std__deque_int__std__allocator_int__* this413;
  unsigned long __nodes_to_add414;
  _Bool __add_at_front415;
  unsigned long __old_num_nodes416;
  unsigned long __new_num_nodes417;
  int** __new_nstart418;
  this413 = v409;
  __nodes_to_add414 = v410;
  __add_at_front415 = v411;
  struct std__deque_int__std__allocator_int__* t419 = this413;
  struct std___Deque_base_int__std__allocator_int__* base420 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base421 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base420->_M_impl) + 0);
  int** t422 = base421->_M_finish._M_node;
  struct std___Deque_base_int__std__allocator_int__* base423 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base424 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base423->_M_impl) + 0);
  int** t425 = base424->_M_start._M_node;
  long diff426 = t422 - t425;
  long c427 = 1;
  long b428 = diff426 + c427;
  unsigned long cast429 = (unsigned long)b428;
  __old_num_nodes416 = cast429;
  unsigned long t430 = __old_num_nodes416;
  unsigned long t431 = __nodes_to_add414;
  unsigned long b432 = t430 + t431;
  __new_num_nodes417 = b432;
    struct std___Deque_base_int__std__allocator_int__* base433 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base434 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base433->_M_impl) + 0);
    unsigned long t435 = base434->_M_map_size;
    unsigned long c436 = 2;
    unsigned long t437 = __new_num_nodes417;
    unsigned long b438 = c436 * t437;
    _Bool c439 = ((t435 > b438)) ? 1 : 0;
    if (c439) {
      struct std___Deque_base_int__std__allocator_int__* base440 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base441 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base440->_M_impl) + 0);
      int** t442 = base441->_M_map;
      struct std___Deque_base_int__std__allocator_int__* base443 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base444 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base443->_M_impl) + 0);
      unsigned long t445 = base444->_M_map_size;
      unsigned long t446 = __new_num_nodes417;
      unsigned long b447 = t445 - t446;
      unsigned long c448 = 2;
      unsigned long b449 = b447 / c448;
      int** ptr450 = &(t442)[b449];
      _Bool t451 = __add_at_front415;
      unsigned long ternary452;
      if (t451) {
        unsigned long t453 = __nodes_to_add414;
        ternary452 = (unsigned long)t453;
      } else {
        unsigned long c454 = 0;
        ternary452 = (unsigned long)c454;
      }
      int** ptr455 = &(ptr450)[ternary452];
      __new_nstart418 = ptr455;
        int** t456 = __new_nstart418;
        struct std___Deque_base_int__std__allocator_int__* base457 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base458 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base457->_M_impl) + 0);
        int** t459 = base458->_M_start._M_node;
        _Bool c460 = ((t456 < t459)) ? 1 : 0;
        if (c460) {
          struct std___Deque_base_int__std__allocator_int__* base461 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base462 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base461->_M_impl) + 0);
          int** t463 = base462->_M_start._M_node;
          struct std___Deque_base_int__std__allocator_int__* base464 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base465 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base464->_M_impl) + 0);
          int** t466 = base465->_M_finish._M_node;
          int c467 = 1;
          int** ptr468 = &(t466)[c467];
          int** t469 = __new_nstart418;
          int** r470 = int___std__copy_int____int___(t463, ptr468, t469);
          if (__cir_exc_active) {
            return;
          }
        } else {
          struct std___Deque_base_int__std__allocator_int__* base471 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base472 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base471->_M_impl) + 0);
          int** t473 = base472->_M_start._M_node;
          struct std___Deque_base_int__std__allocator_int__* base474 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base475 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base474->_M_impl) + 0);
          int** t476 = base475->_M_finish._M_node;
          int c477 = 1;
          int** ptr478 = &(t476)[c477];
          int** t479 = __new_nstart418;
          unsigned long t480 = __old_num_nodes416;
          int** ptr481 = &(t479)[t480];
          int** r482 = int___std__copy_backward_int____int___(t473, ptr478, ptr481);
          if (__cir_exc_active) {
            return;
          }
        }
    } else {
      unsigned long __new_map_size483;
      unsigned long __bufsz484;
      int** __new_map485;
      struct std___Deque_base_int__std__allocator_int__* base486 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base487 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base486->_M_impl) + 0);
      unsigned long t488 = base487->_M_map_size;
      struct std___Deque_base_int__std__allocator_int__* base489 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base490 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base489->_M_impl) + 0);
      unsigned long* r491 = unsigned_long_const__std__max_unsigned_long_(&base490->_M_map_size, &__nodes_to_add414);
      if (__cir_exc_active) {
        return;
      }
      unsigned long t492 = *r491;
      unsigned long b493 = t488 + t492;
      unsigned long c494 = 2;
      unsigned long b495 = b493 + c494;
      __new_map_size483 = b495;
      unsigned long c496 = 128;
      __bufsz484 = c496;
        unsigned long t497 = __new_map_size483;
        unsigned long r498 = std__deque_int__std__allocator_int_____max_size___const(t419);
        unsigned long t499 = __bufsz484;
        unsigned long b500 = r498 + t499;
        unsigned long c501 = 1;
        unsigned long b502 = b500 - c501;
        unsigned long t503 = __bufsz484;
        unsigned long b504 = b502 / t503;
        unsigned long c505 = 2;
        unsigned long b506 = b504 * c505;
        _Bool c507 = ((t497 > b506)) ? 1 : 0;
        if (c507) {
          __builtin_unreachable();
        }
      struct std___Deque_base_int__std__allocator_int__* base508 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
      unsigned long t509 = __new_map_size483;
      int** r510 = std___Deque_base_int__std__allocator_int______M_allocate_map(base508, t509);
      if (__cir_exc_active) {
        return;
      }
      __new_map485 = r510;
      int** t511 = __new_map485;
      unsigned long t512 = __new_map_size483;
      unsigned long t513 = __new_num_nodes417;
      unsigned long b514 = t512 - t513;
      unsigned long c515 = 2;
      unsigned long b516 = b514 / c515;
      int** ptr517 = &(t511)[b516];
      _Bool t518 = __add_at_front415;
      unsigned long ternary519;
      if (t518) {
        unsigned long t520 = __nodes_to_add414;
        ternary519 = (unsigned long)t520;
      } else {
        unsigned long c521 = 0;
        ternary519 = (unsigned long)c521;
      }
      int** ptr522 = &(ptr517)[ternary519];
      __new_nstart418 = ptr522;
      struct std___Deque_base_int__std__allocator_int__* base523 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base524 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base523->_M_impl) + 0);
      int** t525 = base524->_M_start._M_node;
      struct std___Deque_base_int__std__allocator_int__* base526 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base527 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base526->_M_impl) + 0);
      int** t528 = base527->_M_finish._M_node;
      int c529 = 1;
      int** ptr530 = &(t528)[c529];
      int** t531 = __new_nstart418;
      int** r532 = int___std__copy_int____int___(t525, ptr530, t531);
      if (__cir_exc_active) {
        return;
      }
      struct std___Deque_base_int__std__allocator_int__* base533 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
      struct std___Deque_base_int__std__allocator_int__* base534 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base535 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base534->_M_impl) + 0);
      int** t536 = base535->_M_map;
      struct std___Deque_base_int__std__allocator_int__* base537 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base538 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base537->_M_impl) + 0);
      unsigned long t539 = base538->_M_map_size;
      std___Deque_base_int__std__allocator_int______M_deallocate_map(base533, t536, t539);
      int** t540 = __new_map485;
      struct std___Deque_base_int__std__allocator_int__* base541 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base542 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base541->_M_impl) + 0);
      base542->_M_map = t540;
      unsigned long t543 = __new_map_size483;
      struct std___Deque_base_int__std__allocator_int__* base544 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base545 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base544->_M_impl) + 0);
      base545->_M_map_size = t543;
    }
  struct std___Deque_base_int__std__allocator_int__* base546 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base547 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base546->_M_impl) + 0);
  int** t548 = __new_nstart418;
  std___Deque_iterator_int__int___int_____M_set_node(&base547->_M_start, t548);
  struct std___Deque_base_int__std__allocator_int__* base549 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t419 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base550 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base549->_M_impl) + 0);
  int** t551 = __new_nstart418;
  unsigned long t552 = __old_num_nodes416;
  int** ptr553 = &(t551)[t552];
  int c554 = -1;
  int** ptr555 = &(ptr553)[c554];
  std___Deque_iterator_int__int___int_____M_set_node(&base550->_M_finish, ptr555);
  return;
}

// function: _ZNSt5dequeIiSaIiEE22_M_reserve_map_at_backEm
void std__deque_int__std__allocator_int______M_reserve_map_at_back(struct std__deque_int__std__allocator_int__* v556, unsigned long v557) {
bb558:
  struct std__deque_int__std__allocator_int__* this559;
  unsigned long __nodes_to_add560;
  this559 = v556;
  __nodes_to_add560 = v557;
  struct std__deque_int__std__allocator_int__* t561 = this559;
    unsigned long t562 = __nodes_to_add560;
    unsigned long c563 = 1;
    unsigned long b564 = t562 + c563;
    struct std___Deque_base_int__std__allocator_int__* base565 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t561 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base566 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base565->_M_impl) + 0);
    unsigned long t567 = base566->_M_map_size;
    struct std___Deque_base_int__std__allocator_int__* base568 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t561 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base569 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base568->_M_impl) + 0);
    int** t570 = base569->_M_finish._M_node;
    struct std___Deque_base_int__std__allocator_int__* base571 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t561 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base572 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base571->_M_impl) + 0);
    int** t573 = base572->_M_map;
    long diff574 = t570 - t573;
    unsigned long cast575 = (unsigned long)diff574;
    unsigned long b576 = t567 - cast575;
    _Bool c577 = ((b564 > b576)) ? 1 : 0;
    if (c577) {
      unsigned long t578 = __nodes_to_add560;
      _Bool c579 = 0;
      std__deque_int__std__allocator_int______M_reallocate_map(t561, t578, c579);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE16_M_push_back_auxIJRKiEEEvDpOT_
void void_std__deque_int__std__allocator_int______M_push_back_aux_int_const__(struct std__deque_int__std__allocator_int__* v580, int* v581) {
bb582:
  struct std__deque_int__std__allocator_int__* this583;
  int* __args584;
  this583 = v580;
  __args584 = v581;
  struct std__deque_int__std__allocator_int__* t585 = this583;
    unsigned long r586 = std__deque_int__std__allocator_int_____size___const(t585);
    unsigned long r587 = std__deque_int__std__allocator_int_____max_size___const(t585);
    _Bool c588 = ((r586 == r587)) ? 1 : 0;
    if (c588) {
      char* cast589 = (char*)&(_str_4);
      std____throw_length_error(cast589);
      if (__cir_exc_active) {
        return;
      }
    }
  unsigned long c590 = 1;
  std__deque_int__std__allocator_int______M_reserve_map_at_back(t585, c590);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int__* base591 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t585 + 0);
  int* r592 = std___Deque_base_int__std__allocator_int______M_allocate_node(base591);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int__* base593 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t585 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base594 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base593->_M_impl) + 0);
  int** t595 = base594->_M_finish._M_node;
  int c596 = 1;
  int** ptr597 = &(t595)[c596];
  *ptr597 = r592;
      struct std___Deque_base_int__std__allocator_int__* base599 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t585 + 0);
      struct std__allocator_int_* base600 = (struct std__allocator_int_*)((char *)&(base599->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base601 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t585 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base602 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base601->_M_impl) + 0);
      int* t603 = base602->_M_finish._M_cur;
      int* t604 = __args584;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base600, t603, t604);
      struct std___Deque_base_int__std__allocator_int__* base605 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t585 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base606 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base605->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base607 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t585 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base608 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base607->_M_impl) + 0);
      int** t609 = base608->_M_finish._M_node;
      int c610 = 1;
      int** ptr611 = &(t609)[c610];
      std___Deque_iterator_int__int___int_____M_set_node(&base606->_M_finish, ptr611);
      struct std___Deque_base_int__std__allocator_int__* base612 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t585 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base613 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base612->_M_impl) + 0);
      int* t614 = base613->_M_finish._M_first;
      struct std___Deque_base_int__std__allocator_int__* base615 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t585 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base616 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base615->_M_impl) + 0);
      base616->_M_finish._M_cur = t614;
    cir_try_dispatch598: ;
    if (__cir_exc_active) {
    {
      int ca_tok617 = 0;
      void* ca_exn618 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int__* base619 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t585 + 0);
        struct std___Deque_base_int__std__allocator_int__* base620 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t585 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base621 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base620->_M_impl) + 0);
        int** t622 = base621->_M_finish._M_node;
        int c623 = 1;
        int** ptr624 = &(t622)[c623];
        int* t625 = *ptr624;
        std___Deque_base_int__std__allocator_int______M_deallocate_node(base619, t625);
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
void std__deque_int__std__allocator_int_____push_back(struct std__deque_int__std__allocator_int__* v626, int* v627) {
bb628:
  struct std__deque_int__std__allocator_int__* this629;
  int* __x630;
  this629 = v626;
  __x630 = v627;
  struct std__deque_int__std__allocator_int__* t631 = this629;
    struct std___Deque_base_int__std__allocator_int__* base632 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t631 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base633 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base632->_M_impl) + 0);
    int* t634 = base633->_M_finish._M_cur;
    struct std___Deque_base_int__std__allocator_int__* base635 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t631 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base636 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base635->_M_impl) + 0);
    int* t637 = base636->_M_finish._M_last;
    int c638 = -1;
    int* ptr639 = &(t637)[c638];
    _Bool c640 = ((t634 != ptr639)) ? 1 : 0;
    if (c640) {
      struct std___Deque_base_int__std__allocator_int__* base641 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t631 + 0);
      struct std__allocator_int_* base642 = (struct std__allocator_int_*)((char *)&(base641->_M_impl) + 0);
      struct std___Deque_base_int__std__allocator_int__* base643 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t631 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base644 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base643->_M_impl) + 0);
      int* t645 = base644->_M_finish._M_cur;
      int* t646 = __x630;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base642, t645, t646);
      struct std___Deque_base_int__std__allocator_int__* base647 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t631 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base648 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base647->_M_impl) + 0);
      int* t649 = base648->_M_finish._M_cur;
      int c650 = 1;
      int* ptr651 = &(t649)[c650];
      base648->_M_finish._M_cur = ptr651;
    } else {
      int* t652 = __x630;
      void_std__deque_int__std__allocator_int______M_push_back_aux_int_const__(t631, t652);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__3(int v653, int v654) {
bb655:
  int __a656;
  int __b657;
  int __retval658;
  __a656 = v653;
  __b657 = v654;
  int t659 = __a656;
  int t660 = __b657;
  int b661 = t659 | t660;
  __retval658 = b661;
  int t662 = __retval658;
  return t662;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v663) {
bb664:
  struct std__basic_ios_char__std__char_traits_char__* this665;
  int __retval666;
  this665 = v663;
  struct std__basic_ios_char__std__char_traits_char__* t667 = this665;
  struct std__ios_base* base668 = (struct std__ios_base*)((char *)t667 + 0);
  int t669 = base668->_M_streambuf_state;
  __retval666 = t669;
  int t670 = __retval666;
  return t670;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v671, int v672) {
bb673:
  struct std__basic_ios_char__std__char_traits_char__* this674;
  int __state675;
  this674 = v671;
  __state675 = v672;
  struct std__basic_ios_char__std__char_traits_char__* t676 = this674;
  int r677 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t676);
  if (__cir_exc_active) {
    return;
  }
  int t678 = __state675;
  int r679 = std__operator__3(r677, t678);
  std__basic_ios_char__std__char_traits_char_____clear(t676, r679);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v680, char* v681) {
bb682:
  char* __c1683;
  char* __c2684;
  _Bool __retval685;
  __c1683 = v680;
  __c2684 = v681;
  char* t686 = __c1683;
  char t687 = *t686;
  int cast688 = (int)t687;
  char* t689 = __c2684;
  char t690 = *t689;
  int cast691 = (int)t690;
  _Bool c692 = ((cast688 == cast691)) ? 1 : 0;
  __retval685 = c692;
  _Bool t693 = __retval685;
  return t693;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v694) {
bb695:
  char* __p696;
  unsigned long __retval697;
  unsigned long __i698;
  __p696 = v694;
  unsigned long c699 = 0;
  __i698 = c699;
    char ref_tmp0700;
    while (1) {
      unsigned long t701 = __i698;
      char* t702 = __p696;
      char* ptr703 = &(t702)[t701];
      char c704 = 0;
      ref_tmp0700 = c704;
      _Bool r705 = __gnu_cxx__char_traits_char___eq(ptr703, &ref_tmp0700);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u706 = !r705;
      if (!u706) break;
      unsigned long t707 = __i698;
      unsigned long u708 = t707 + 1;
      __i698 = u708;
    }
  unsigned long t709 = __i698;
  __retval697 = t709;
  unsigned long t710 = __retval697;
  return t710;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v711) {
bb712:
  char* __s713;
  unsigned long __retval714;
  __s713 = v711;
    _Bool r715 = std____is_constant_evaluated();
    if (r715) {
      char* t716 = __s713;
      unsigned long r717 = __gnu_cxx__char_traits_char___length(t716);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval714 = r717;
      unsigned long t718 = __retval714;
      return t718;
    }
  char* t719 = __s713;
  unsigned long r720 = strlen(t719);
  __retval714 = r720;
  unsigned long t721 = __retval714;
  return t721;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v722, char* v723) {
bb724:
  struct std__basic_ostream_char__std__char_traits_char__* __out725;
  char* __s726;
  struct std__basic_ostream_char__std__char_traits_char__* __retval727;
  __out725 = v722;
  __s726 = v723;
    char* t728 = __s726;
    _Bool cast729 = (_Bool)t728;
    _Bool u730 = !cast729;
    if (u730) {
      struct std__basic_ostream_char__std__char_traits_char__* t731 = __out725;
      void** v732 = (void**)t731;
      void* v733 = *((void**)v732);
      unsigned char* cast734 = (unsigned char*)v733;
      long c735 = -24;
      unsigned char* ptr736 = &(cast734)[c735];
      long* cast737 = (long*)ptr736;
      long t738 = *cast737;
      unsigned char* cast739 = (unsigned char*)t731;
      unsigned char* ptr740 = &(cast739)[t738];
      struct std__basic_ostream_char__std__char_traits_char__* cast741 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr740;
      struct std__basic_ios_char__std__char_traits_char__* cast742 = (struct std__basic_ios_char__std__char_traits_char__*)cast741;
      int t743 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast742, t743);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t744 = __out725;
      char* t745 = __s726;
      char* t746 = __s726;
      unsigned long r747 = std__char_traits_char___length(t746);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast748 = (long)r747;
      struct std__basic_ostream_char__std__char_traits_char__* r749 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t744, t745, cast748);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t750 = __out725;
  __retval727 = t750;
  struct std__basic_ostream_char__std__char_traits_char__* t751 = __retval727;
  return t751;
}

// function: _ZNSt16reverse_iteratorISt15_Deque_iteratorIiRiPiEEC2ES3_
void std__reverse_iterator_std___Deque_iterator_int__int___int______reverse_iterator(struct std__reverse_iterator_std___Deque_iterator_int__int____int____* v752, struct std___Deque_iterator_int__int____int___ v753) {
bb754:
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* this755;
  struct std___Deque_iterator_int__int____int___ __x756;
  this755 = v752;
  __x756 = v753;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* t757 = this755;
  struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* base758 = (struct std__iterator_std__random_access_iterator_tag__int__long__int____int___*)((char *)t757 + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&t757->current, &__x756);
  return;
}

// function: _ZNSt5dequeIiSaIiEE6rbeginEv
struct std__reverse_iterator_std___Deque_iterator_int__int____int____ std__deque_int__std__allocator_int_____rbegin(struct std__deque_int__std__allocator_int__* v759) {
bb760:
  struct std__deque_int__std__allocator_int__* this761;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____ __retval762;
  struct std___Deque_iterator_int__int____int___ agg_tmp0763;
  this761 = v759;
  struct std__deque_int__std__allocator_int__* t764 = this761;
  struct std___Deque_base_int__std__allocator_int__* base765 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t764 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base766 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base765->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp0763, &base766->_M_finish);
  struct std___Deque_iterator_int__int____int___ t767 = agg_tmp0763;
  std__reverse_iterator_std___Deque_iterator_int__int___int______reverse_iterator(&__retval762, t767);
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____ t768 = __retval762;
  return t768;
}

// function: _ZNSt8iteratorISt26random_access_iterator_tagilPiRiEaSERKS3_
struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* std__iterator_std__random_access_iterator_tag__int__long__int___int____operator_(struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* v769, struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* v770) {
bb771:
  struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* this772;
  struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* unnamed773;
  struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* __retval774;
  this772 = v769;
  unnamed773 = v770;
  struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* t775 = this772;
  __retval774 = t775;
  struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* t776 = __retval774;
  return t776;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEaSERKS2_
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator_(struct std___Deque_iterator_int__int____int___* v777, struct std___Deque_iterator_int__int____int___* v778) {
bb779:
  struct std___Deque_iterator_int__int____int___* this780;
  struct std___Deque_iterator_int__int____int___* unnamed781;
  struct std___Deque_iterator_int__int____int___* __retval782;
  this780 = v777;
  unnamed781 = v778;
  struct std___Deque_iterator_int__int____int___* t783 = this780;
  struct std___Deque_iterator_int__int____int___* t784 = unnamed781;
  int* t785 = t784->_M_cur;
  t783->_M_cur = t785;
  struct std___Deque_iterator_int__int____int___* t786 = unnamed781;
  int* t787 = t786->_M_first;
  t783->_M_first = t787;
  struct std___Deque_iterator_int__int____int___* t788 = unnamed781;
  int* t789 = t788->_M_last;
  t783->_M_last = t789;
  struct std___Deque_iterator_int__int____int___* t790 = unnamed781;
  int** t791 = t790->_M_node;
  t783->_M_node = t791;
  __retval782 = t783;
  struct std___Deque_iterator_int__int____int___* t792 = __retval782;
  return t792;
}

// function: _ZNSt16reverse_iteratorISt15_Deque_iteratorIiRiPiEEaSERKS4_
struct std__reverse_iterator_std___Deque_iterator_int__int____int____* std__reverse_iterator_std___Deque_iterator_int__int___int______operator_(struct std__reverse_iterator_std___Deque_iterator_int__int____int____* v793, struct std__reverse_iterator_std___Deque_iterator_int__int____int____* v794) {
bb795:
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* this796;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* unnamed797;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* __retval798;
  this796 = v793;
  unnamed797 = v794;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* t799 = this796;
  struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* base800 = (struct std__iterator_std__random_access_iterator_tag__int__long__int____int___*)((char *)t799 + 0);
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* t801 = unnamed797;
  struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* base802 = (struct std__iterator_std__random_access_iterator_tag__int__long__int____int___*)((char *)t801 + 0);
  struct std__iterator_std__random_access_iterator_tag__int__long__int____int___* r803 = std__iterator_std__random_access_iterator_tag__int__long__int___int____operator_(base800, base802);
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* t804 = unnamed797;
  struct std___Deque_iterator_int__int____int___* r805 = std___Deque_iterator_int__int___int____operator_(&t799->current, &t804->current);
  __retval798 = t799;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* t806 = __retval798;
  return t806;
}

// function: _ZStltSt15strong_orderingNSt9__cmp_cat8__unspecE
_Bool std__operator_(struct std__strong_ordering v807, struct std____cmp_cat____unspec v808) {
bb809:
  struct std__strong_ordering __v810;
  struct std____cmp_cat____unspec unnamed811;
  _Bool __retval812;
  __v810 = v807;
  unnamed811 = v808;
  char t813 = __v810._M_value;
  int cast814 = (int)t813;
  int c815 = 0;
  _Bool c816 = ((cast814 < c815)) ? 1 : 0;
  __retval812 = c816;
  _Bool t817 = __retval812;
  return t817;
}

// function: _ZSteqSt15strong_orderingNSt9__cmp_cat8__unspecE
_Bool std__operator___2(struct std__strong_ordering v818, struct std____cmp_cat____unspec v819) {
bb820:
  struct std__strong_ordering __v821;
  struct std____cmp_cat____unspec unnamed822;
  _Bool __retval823;
  __v821 = v818;
  unnamed822 = v819;
  char t824 = __v821._M_value;
  int cast825 = (int)t824;
  int c826 = 0;
  _Bool c827 = ((cast825 == c826)) ? 1 : 0;
  __retval823 = c827;
  _Bool t828 = __retval823;
  return t828;
}

// function: _ZStssRKSt15_Deque_iteratorIiRiPiES4_
struct std__strong_ordering std__operator___(struct std___Deque_iterator_int__int____int___* v829, struct std___Deque_iterator_int__int____int___* v830) {
bb831:
  struct std___Deque_iterator_int__int____int___* __x832;
  struct std___Deque_iterator_int__int____int___* __y833;
  struct std__strong_ordering __retval834;
  __x832 = v829;
  __y833 = v830;
    struct std__strong_ordering agg_tmp0835;
    struct std____cmp_cat____unspec agg_tmp1836;
    struct std___Deque_iterator_int__int____int___* t837 = __x832;
    int** t838 = t837->_M_node;
    struct std___Deque_iterator_int__int____int___* t839 = __y833;
    int** t840 = t839->_M_node;
    char c841 = -1;
    char c842 = 0;
    char c843 = 1;
    _Bool c844 = ((t838 < t840)) ? 1 : 0;
    char sel845 = c844 ? c841 : c843;
    _Bool c846 = ((t838 == t840)) ? 1 : 0;
    char sel847 = c846 ? c842 : sel845;
    __retval834._M_value = sel847;
    agg_tmp0835 = __retval834; // copy
    agg_tmp1836 = *&__const__ZStssRKSt15_Deque_iteratorIiRiPiES4__agg_tmp1; // copy
    struct std__strong_ordering t848 = agg_tmp0835;
    struct std____cmp_cat____unspec t849 = agg_tmp1836;
    _Bool r850 = std__operator___2(t848, t849);
    _Bool u851 = !r850;
    if (u851) {
      struct std__strong_ordering t852 = __retval834;
      return t852;
    }
  struct std___Deque_iterator_int__int____int___* t853 = __x832;
  int* t854 = t853->_M_cur;
  struct std___Deque_iterator_int__int____int___* t855 = __y833;
  int* t856 = t855->_M_cur;
  char c857 = -1;
  char c858 = 0;
  char c859 = 1;
  _Bool c860 = ((t854 < t856)) ? 1 : 0;
  char sel861 = c860 ? c857 : c859;
  _Bool c862 = ((t854 == t856)) ? 1 : 0;
  char sel863 = c862 ? c858 : sel861;
  __retval834._M_value = sel863;
  struct std__strong_ordering t864 = __retval834;
  return t864;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ERKS2_
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* v865, struct std___Deque_iterator_int__int____int___* v866) {
bb867:
  struct std___Deque_iterator_int__int____int___* this868;
  struct std___Deque_iterator_int__int____int___* __x869;
  this868 = v865;
  __x869 = v866;
  struct std___Deque_iterator_int__int____int___* t870 = this868;
  struct std___Deque_iterator_int__int____int___* t871 = __x869;
  int* t872 = t871->_M_cur;
  t870->_M_cur = t872;
  struct std___Deque_iterator_int__int____int___* t873 = __x869;
  int* t874 = t873->_M_first;
  t870->_M_first = t874;
  struct std___Deque_iterator_int__int____int___* t875 = __x869;
  int* t876 = t875->_M_last;
  t870->_M_last = t876;
  struct std___Deque_iterator_int__int____int___* t877 = __x869;
  int** t878 = t877->_M_node;
  t870->_M_node = t878;
  return;
}

// function: _ZNKSt16reverse_iteratorISt15_Deque_iteratorIiRiPiEE4baseEv
struct std___Deque_iterator_int__int____int___ std__reverse_iterator_std___Deque_iterator_int__int___int______base___const(struct std__reverse_iterator_std___Deque_iterator_int__int____int____* v879) {
bb880:
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* this881;
  struct std___Deque_iterator_int__int____int___ __retval882;
  this881 = v879;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* t883 = this881;
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval882, &t883->current);
  struct std___Deque_iterator_int__int____int___ t884 = __retval882;
  return t884;
}

// function: _ZStssITkSt20three_way_comparableSt15_Deque_iteratorIiRiPiEENSt8__detail18__cmp3way_res_implIT_S6_E4typeERKSt16reverse_iteratorIS6_ESC_
struct std__strong_ordering _ZStssITkSt20three_way_comparableSt15_Deque_iteratorIiRiPiEENSt8__detail18__cmp3way_res_implIT_S6_E4typeERKSt16reverse_iteratorIS6_ESC_(struct std__reverse_iterator_std___Deque_iterator_int__int____int____* v885, struct std__reverse_iterator_std___Deque_iterator_int__int____int____* v886) {
bb887:
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* __x888;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* __y889;
  struct std__strong_ordering __retval890;
  struct std___Deque_iterator_int__int____int___ ref_tmp0891;
  struct std___Deque_iterator_int__int____int___ ref_tmp1892;
  __x888 = v885;
  __y889 = v886;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* t893 = __y889;
  struct std___Deque_iterator_int__int____int___ r894 = std__reverse_iterator_std___Deque_iterator_int__int___int______base___const(t893);
  ref_tmp0891 = r894;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* t895 = __x888;
  struct std___Deque_iterator_int__int____int___ r896 = std__reverse_iterator_std___Deque_iterator_int__int___int______base___const(t895);
  ref_tmp1892 = r896;
  struct std__strong_ordering r897 = std__operator___(&ref_tmp0891, &ref_tmp1892);
  __retval890 = r897;
  struct std__strong_ordering t898 = __retval890;
  return t898;
}

// function: _ZNSt5dequeIiSaIiEE4rendEv
struct std__reverse_iterator_std___Deque_iterator_int__int____int____ std__deque_int__std__allocator_int_____rend(struct std__deque_int__std__allocator_int__* v899) {
bb900:
  struct std__deque_int__std__allocator_int__* this901;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____ __retval902;
  struct std___Deque_iterator_int__int____int___ agg_tmp0903;
  this901 = v899;
  struct std__deque_int__std__allocator_int__* t904 = this901;
  struct std___Deque_base_int__std__allocator_int__* base905 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t904 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base906 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base905->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp0903, &base906->_M_start);
  struct std___Deque_iterator_int__int____int___ t907 = agg_tmp0903;
  std__reverse_iterator_std___Deque_iterator_int__int___int______reverse_iterator(&__retval902, t907);
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____ t908 = __retval902;
  return t908;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEmmEv
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* v909) {
bb910:
  struct std___Deque_iterator_int__int____int___* this911;
  struct std___Deque_iterator_int__int____int___* __retval912;
  this911 = v909;
  struct std___Deque_iterator_int__int____int___* t913 = this911;
    int* t914 = t913->_M_cur;
    int* t915 = t913->_M_first;
    _Bool c916 = ((t914 == t915)) ? 1 : 0;
    if (c916) {
      int** t917 = t913->_M_node;
      int c918 = -1;
      int** ptr919 = &(t917)[c918];
      std___Deque_iterator_int__int___int_____M_set_node(t913, ptr919);
      int* t920 = t913->_M_last;
      t913->_M_cur = t920;
    }
  int* t921 = t913->_M_cur;
  int c922 = -1;
  int* ptr923 = &(t921)[c922];
  t913->_M_cur = ptr923;
  __retval912 = t913;
  struct std___Deque_iterator_int__int____int___* t924 = __retval912;
  return t924;
}

// function: _ZNKSt15_Deque_iteratorIiRiPiEdeEv
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* v925) {
bb926:
  struct std___Deque_iterator_int__int____int___* this927;
  int* __retval928;
  this927 = v925;
  struct std___Deque_iterator_int__int____int___* t929 = this927;
  int* t930 = t929->_M_cur;
  __retval928 = t930;
  int* t931 = __retval928;
  return t931;
}

// function: _ZNKSt16reverse_iteratorISt15_Deque_iteratorIiRiPiEEdeEv
int* std__reverse_iterator_std___Deque_iterator_int__int___int______operator____const(struct std__reverse_iterator_std___Deque_iterator_int__int____int____* v932) {
bb933:
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* this934;
  int* __retval935;
  struct std___Deque_iterator_int__int____int___ __tmp936;
  this934 = v932;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* t937 = this934;
  std___Deque_iterator_int__int___int_____Deque_iterator(&__tmp936, &t937->current);
  struct std___Deque_iterator_int__int____int___* r938 = std___Deque_iterator_int__int___int____operator__(&__tmp936);
  int* r939 = std___Deque_iterator_int__int___int____operator____const(r938);
  __retval935 = r939;
  int* t940 = __retval935;
  return t940;
}

// function: _ZNSt16reverse_iteratorISt15_Deque_iteratorIiRiPiEEppEv
struct std__reverse_iterator_std___Deque_iterator_int__int____int____* std__reverse_iterator_std___Deque_iterator_int__int___int______operator__(struct std__reverse_iterator_std___Deque_iterator_int__int____int____* v941) {
bb942:
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* this943;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* __retval944;
  this943 = v941;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* t945 = this943;
  struct std___Deque_iterator_int__int____int___* r946 = std___Deque_iterator_int__int___int____operator__(&t945->current);
  __retval944 = t945;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* t947 = __retval944;
  return t947;
}

// function: _ZSteqRKSt15_Deque_iteratorIiRiPiES4_
_Bool std__operator__(struct std___Deque_iterator_int__int____int___* v948, struct std___Deque_iterator_int__int____int___* v949) {
bb950:
  struct std___Deque_iterator_int__int____int___* __x951;
  struct std___Deque_iterator_int__int____int___* __y952;
  _Bool __retval953;
  __x951 = v948;
  __y952 = v949;
  struct std___Deque_iterator_int__int____int___* t954 = __x951;
  int* t955 = t954->_M_cur;
  struct std___Deque_iterator_int__int____int___* t956 = __y952;
  int* t957 = t956->_M_cur;
  _Bool c958 = ((t955 == t957)) ? 1 : 0;
  __retval953 = c958;
  _Bool t959 = __retval953;
  return t959;
}

// function: _ZSteqISt15_Deque_iteratorIiRiPiEEbRKSt16reverse_iteratorIT_ES8_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZSteqISt15_Deque_iteratorIiRiPiEEbRKSt16reverse_iteratorIT_ES8_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct std__reverse_iterator_std___Deque_iterator_int__int____int____* v960, struct std__reverse_iterator_std___Deque_iterator_int__int____int____* v961) {
bb962:
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* __x963;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* __y964;
  _Bool __retval965;
  struct std___Deque_iterator_int__int____int___ ref_tmp0966;
  struct std___Deque_iterator_int__int____int___ ref_tmp1967;
  __x963 = v960;
  __y964 = v961;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* t968 = __x963;
  struct std___Deque_iterator_int__int____int___ r969 = std__reverse_iterator_std___Deque_iterator_int__int___int______base___const(t968);
  ref_tmp0966 = r969;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____* t970 = __y964;
  struct std___Deque_iterator_int__int____int___ r971 = std__reverse_iterator_std___Deque_iterator_int__int___int______base___const(t970);
  ref_tmp1967 = r971;
  _Bool r972 = std__operator__(&ref_tmp0966, &ref_tmp1967);
  __retval965 = r972;
  _Bool t973 = __retval965;
  return t973;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v974, void* v975) {
bb976:
  struct std__basic_ostream_char__std__char_traits_char__* this977;
  void* __pf978;
  struct std__basic_ostream_char__std__char_traits_char__* __retval979;
  this977 = v974;
  __pf978 = v975;
  struct std__basic_ostream_char__std__char_traits_char__* t980 = this977;
  void* t981 = __pf978;
  struct std__basic_ostream_char__std__char_traits_char__* r982 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t981)(t980);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval979 = r982;
  struct std__basic_ostream_char__std__char_traits_char__* t983 = __retval979;
  return t983;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v984) {
bb985:
  struct std__basic_ostream_char__std__char_traits_char__* __os986;
  struct std__basic_ostream_char__std__char_traits_char__* __retval987;
  __os986 = v984;
  struct std__basic_ostream_char__std__char_traits_char__* t988 = __os986;
  struct std__basic_ostream_char__std__char_traits_char__* r989 = std__ostream__flush(t988);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval987 = r989;
  struct std__basic_ostream_char__std__char_traits_char__* t990 = __retval987;
  return t990;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v991) {
bb992:
  struct std__ctype_char_* __f993;
  struct std__ctype_char_* __retval994;
  __f993 = v991;
    struct std__ctype_char_* t995 = __f993;
    _Bool cast996 = (_Bool)t995;
    _Bool u997 = !cast996;
    if (u997) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t998 = __f993;
  __retval994 = t998;
  struct std__ctype_char_* t999 = __retval994;
  return t999;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1000, char v1001) {
bb1002:
  struct std__ctype_char_* this1003;
  char __c1004;
  char __retval1005;
  this1003 = v1000;
  __c1004 = v1001;
  struct std__ctype_char_* t1006 = this1003;
    char t1007 = t1006->_M_widen_ok;
    _Bool cast1008 = (_Bool)t1007;
    if (cast1008) {
      char t1009 = __c1004;
      unsigned char cast1010 = (unsigned char)t1009;
      unsigned long cast1011 = (unsigned long)cast1010;
      char t1012 = t1006->_M_widen[cast1011];
      __retval1005 = t1012;
      char t1013 = __retval1005;
      return t1013;
    }
  std__ctype_char____M_widen_init___const(t1006);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t1014 = __c1004;
  void** v1015 = (void**)t1006;
  void* v1016 = *((void**)v1015);
  char vcall1019 = (char)__VERIFIER_virtual_call_char_char(t1006, 6, t1014);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval1005 = vcall1019;
  char t1020 = __retval1005;
  return t1020;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1021, char v1022) {
bb1023:
  struct std__basic_ios_char__std__char_traits_char__* this1024;
  char __c1025;
  char __retval1026;
  this1024 = v1021;
  __c1025 = v1022;
  struct std__basic_ios_char__std__char_traits_char__* t1027 = this1024;
  struct std__ctype_char_* t1028 = t1027->_M_ctype;
  struct std__ctype_char_* r1029 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1028);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t1030 = __c1025;
  char r1031 = std__ctype_char___widen_char__const(r1029, t1030);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval1026 = r1031;
  char t1032 = __retval1026;
  return t1032;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1033) {
bb1034:
  struct std__basic_ostream_char__std__char_traits_char__* __os1035;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1036;
  __os1035 = v1033;
  struct std__basic_ostream_char__std__char_traits_char__* t1037 = __os1035;
  struct std__basic_ostream_char__std__char_traits_char__* t1038 = __os1035;
  void** v1039 = (void**)t1038;
  void* v1040 = *((void**)v1039);
  unsigned char* cast1041 = (unsigned char*)v1040;
  long c1042 = -24;
  unsigned char* ptr1043 = &(cast1041)[c1042];
  long* cast1044 = (long*)ptr1043;
  long t1045 = *cast1044;
  unsigned char* cast1046 = (unsigned char*)t1038;
  unsigned char* ptr1047 = &(cast1046)[t1045];
  struct std__basic_ostream_char__std__char_traits_char__* cast1048 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1047;
  struct std__basic_ios_char__std__char_traits_char__* cast1049 = (struct std__basic_ios_char__std__char_traits_char__*)cast1048;
  char c1050 = 10;
  char r1051 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1049, c1050);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r1052 = std__ostream__put(t1037, r1051);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r1053 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1052);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval1036 = r1053;
  struct std__basic_ostream_char__std__char_traits_char__* t1054 = __retval1036;
  return t1054;
}

// function: _ZNSt5dequeIiSaIiEED2Ev
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* v1055) {
bb1056:
  struct std__deque_int__std__allocator_int__* this1057;
  struct std___Deque_iterator_int__int____int___ agg_tmp01058;
  struct std___Deque_iterator_int__int____int___ agg_tmp11059;
  this1057 = v1055;
  struct std__deque_int__std__allocator_int__* t1060 = this1057;
    struct std___Deque_iterator_int__int____int___ r1061 = std__deque_int__std__allocator_int_____begin(t1060);
    agg_tmp01058 = r1061;
    struct std___Deque_iterator_int__int____int___ r1062 = std__deque_int__std__allocator_int_____end(t1060);
    agg_tmp11059 = r1062;
    struct std___Deque_base_int__std__allocator_int__* base1063 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1060 + 0);
    struct std__allocator_int_* r1064 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1063);
    struct std___Deque_iterator_int__int____int___ t1065 = agg_tmp01058;
    struct std___Deque_iterator_int__int____int___ t1066 = agg_tmp11059;
    std__deque_int__std__allocator_int______M_destroy_data(t1060, t1065, t1066, r1064);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base1067 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1060 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base1067);
      }
      return;
    }
  {
    struct std___Deque_base_int__std__allocator_int__* base1068 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1060 + 0);
    std___Deque_base_int__std__allocator_int_______Deque_base(base1068);
  }
  return;
}

// function: main
int main() {
bb1069:
  int __retval1070;
  struct std__deque_int__std__allocator_int__ mydeque1071;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____ rit1072;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____ ref_tmp01073;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____ ref_tmp21074;
  int c1075 = 0;
  __retval1070 = c1075;
  std__deque_int__std__allocator_int_____deque(&mydeque1071);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    std__reverse_iterator_std___Deque_iterator_int__int___int______reverse_iterator_2(&rit1072);
      int i1076;
      int c1077 = 1;
      i1076 = c1077;
      while (1) {
        int t1079 = i1076;
        int c1080 = 5;
        _Bool c1081 = ((t1079 <= c1080)) ? 1 : 0;
        if (!c1081) break;
        std__deque_int__std__allocator_int_____push_back(&mydeque1071, &i1076);
        if (__cir_exc_active) {
          {
            std__deque_int__std__allocator_int______deque(&mydeque1071);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      for_step1078: ;
        int t1082 = i1076;
        int u1083 = t1082 + 1;
        i1076 = u1083;
      }
    char* cast1084 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r1085 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1084);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque1071);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__reverse_iterator_std___Deque_iterator_int__int____int____ r1086 = std__deque_int__std__allocator_int_____rbegin(&mydeque1071);
    ref_tmp01073 = r1086;
    struct std__reverse_iterator_std___Deque_iterator_int__int____int____* r1087 = std__reverse_iterator_std___Deque_iterator_int__int___int______operator_(&rit1072, &ref_tmp01073);
      struct std__strong_ordering agg_tmp01088;
      struct std__reverse_iterator_std___Deque_iterator_int__int____int____ ref_tmp11089;
      struct std____cmp_cat____unspec agg_tmp11090;
      while (1) {
        struct std__reverse_iterator_std___Deque_iterator_int__int____int____ r1091 = std__deque_int__std__allocator_int_____rend(&mydeque1071);
        ref_tmp11089 = r1091;
        struct std__strong_ordering r1092 = _ZStssITkSt20three_way_comparableSt15_Deque_iteratorIiRiPiEENSt8__detail18__cmp3way_res_implIT_S6_E4typeERKSt16reverse_iteratorIS6_ESC_(&rit1072, &ref_tmp11089);
        if (__cir_exc_active) {
          {
            std__deque_int__std__allocator_int______deque(&mydeque1071);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        agg_tmp01088 = r1092;
        agg_tmp11090 = *&__const_main_agg_tmp1; // copy
        struct std__strong_ordering t1093 = agg_tmp01088;
        struct std____cmp_cat____unspec t1094 = agg_tmp11090;
        _Bool r1095 = std__operator_(t1093, t1094);
        if (!r1095) break;
          char* cast1096 = (char*)&(_str_1);
          struct std__basic_ostream_char__std__char_traits_char__* r1097 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1096);
          if (__cir_exc_active) {
            {
              std__deque_int__std__allocator_int______deque(&mydeque1071);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int* r1098 = std__reverse_iterator_std___Deque_iterator_int__int___int______operator____const(&rit1072);
          if (__cir_exc_active) {
            {
              std__deque_int__std__allocator_int______deque(&mydeque1071);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int t1099 = *r1098;
          struct std__basic_ostream_char__std__char_traits_char__* r1100 = std__ostream__operator__(r1097, t1099);
          if (__cir_exc_active) {
            {
              std__deque_int__std__allocator_int______deque(&mydeque1071);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          struct std__reverse_iterator_std___Deque_iterator_int__int____int____* r1101 = std__reverse_iterator_std___Deque_iterator_int__int___int______operator__(&rit1072);
          if (__cir_exc_active) {
            {
              std__deque_int__std__allocator_int______deque(&mydeque1071);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
      }
    struct std__reverse_iterator_std___Deque_iterator_int__int____int____ r1102 = std__deque_int__std__allocator_int_____rend(&mydeque1071);
    ref_tmp21074 = r1102;
    _Bool r1103 = _ZSteqISt15_Deque_iteratorIiRiPiEEbRKSt16reverse_iteratorIT_ES8_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&rit1072, &ref_tmp21074);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque1071);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    if (r1103) {
    } else {
      char* cast1104 = (char*)&(_str_2);
      char* c1105 = _str_3;
      unsigned int c1106 = 30;
      char* cast1107 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1104, c1105, c1106, cast1107);
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1108 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__deque_int__std__allocator_int______deque(&mydeque1071);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c1109 = 0;
    __retval1070 = c1109;
    int t1110 = __retval1070;
    int ret_val1111 = t1110;
    {
      std__deque_int__std__allocator_int______deque(&mydeque1071);
    }
    return ret_val1111;
  int t1112 = __retval1070;
  return t1112;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1113) {
bb1114:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1115;
  this1115 = v1113;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1116 = this1115;
  struct std__allocator_int_* base1117 = (struct std__allocator_int_*)((char *)t1116 + 0);
  std__allocator_int___allocator(base1117);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1118 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)t1116 + 0);
    std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(base1118);
  return;
}

// function: _ZSt16__deque_buf_sizem
unsigned long std____deque_buf_size(unsigned long v1119) {
bb1120:
  unsigned long __size1121;
  unsigned long __retval1122;
  __size1121 = v1119;
  unsigned long t1123 = __size1121;
  unsigned long c1124 = 512;
  _Bool c1125 = ((t1123 < c1124)) ? 1 : 0;
  unsigned long ternary1126;
  if (c1125) {
    unsigned long c1127 = 512;
    unsigned long t1128 = __size1121;
    unsigned long b1129 = c1127 / t1128;
    ternary1126 = (unsigned long)b1129;
  } else {
    unsigned long c1130 = 1;
    ternary1126 = (unsigned long)c1130;
  }
  __retval1122 = ternary1126;
  unsigned long t1131 = __retval1122;
  return t1131;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v1132, unsigned long* v1133) {
bb1134:
  unsigned long* __a1135;
  unsigned long* __b1136;
  unsigned long* __retval1137;
  __a1135 = v1132;
  __b1136 = v1133;
    unsigned long* t1138 = __a1135;
    unsigned long t1139 = *t1138;
    unsigned long* t1140 = __b1136;
    unsigned long t1141 = *t1140;
    _Bool c1142 = ((t1139 < t1141)) ? 1 : 0;
    if (c1142) {
      unsigned long* t1143 = __b1136;
      __retval1137 = t1143;
      unsigned long* t1144 = __retval1137;
      return t1144;
    }
  unsigned long* t1145 = __a1135;
  __retval1137 = t1145;
  unsigned long* t1146 = __retval1137;
  return t1146;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1147) {
bb1148:
  struct std___Deque_base_int__std__allocator_int__* this1149;
  struct std__allocator_int_* __retval1150;
  this1149 = v1147;
  struct std___Deque_base_int__std__allocator_int__* t1151 = this1149;
  struct std__allocator_int_* base1152 = (struct std__allocator_int_*)((char *)&(t1151->_M_impl) + 0);
  __retval1150 = base1152;
  struct std__allocator_int_* t1153 = __retval1150;
  return t1153;
}

// function: _ZNSaIPiEC2IiEERKSaIT_E
void std__allocator_int____allocator_int_(struct std__allocator_int___* v1154, struct std__allocator_int_* v1155) {
bb1156:
  struct std__allocator_int___* this1157;
  struct std__allocator_int_* unnamed1158;
  this1157 = v1154;
  unnamed1158 = v1155;
  struct std__allocator_int___* t1159 = this1157;
  struct std____new_allocator_int___* base1160 = (struct std____new_allocator_int___*)((char *)t1159 + 0);
  std____new_allocator_int______new_allocator(base1160);
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE20_M_get_map_allocatorEv
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* v1161) {
bb1162:
  struct std___Deque_base_int__std__allocator_int__* this1163;
  struct std__allocator_int___ __retval1164;
  this1163 = v1161;
  struct std___Deque_base_int__std__allocator_int__* t1165 = this1163;
  struct std__allocator_int_* r1166 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(t1165);
  std__allocator_int____allocator_int_(&__retval1164, r1166);
  struct std__allocator_int___ t1167 = __retval1164;
  return t1167;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1168:
  _Bool __retval1169;
    _Bool c1170 = 0;
    __retval1169 = c1170;
    _Bool t1171 = __retval1169;
    return t1171;
  abort();
}

// function: _ZNKSt15__new_allocatorIPiE11_M_max_sizeEv
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* v1172) {
bb1173:
  struct std____new_allocator_int___* this1174;
  unsigned long __retval1175;
  this1174 = v1172;
  struct std____new_allocator_int___* t1176 = this1174;
  unsigned long c1177 = 9223372036854775807;
  unsigned long c1178 = 8;
  unsigned long b1179 = c1177 / c1178;
  __retval1175 = b1179;
  unsigned long t1180 = __retval1175;
  return t1180;
}

// function: _ZNSt15__new_allocatorIPiE8allocateEmPKv
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* v1181, unsigned long v1182, void* v1183) {
bb1184:
  struct std____new_allocator_int___* this1185;
  unsigned long __n1186;
  void* unnamed1187;
  int** __retval1188;
  this1185 = v1181;
  __n1186 = v1182;
  unnamed1187 = v1183;
  struct std____new_allocator_int___* t1189 = this1185;
    unsigned long t1190 = __n1186;
    unsigned long r1191 = std____new_allocator_int_____M_max_size___const(t1189);
    _Bool c1192 = ((t1190 > r1191)) ? 1 : 0;
    if (c1192) {
        unsigned long t1193 = __n1186;
        unsigned long c1194 = -1;
        unsigned long c1195 = 8;
        unsigned long b1196 = c1194 / c1195;
        _Bool c1197 = ((t1193 > b1196)) ? 1 : 0;
        if (c1197) {
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
    unsigned long c1198 = 8;
    unsigned long c1199 = 16;
    _Bool c1200 = ((c1198 > c1199)) ? 1 : 0;
    if (c1200) {
      unsigned long __al1201;
      unsigned long c1202 = 8;
      __al1201 = c1202;
      unsigned long t1203 = __n1186;
      unsigned long c1204 = 8;
      unsigned long b1205 = t1203 * c1204;
      unsigned long t1206 = __al1201;
      void* r1207 = operator_new_2(b1205, t1206);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1208 = (int**)r1207;
      __retval1188 = cast1208;
      int** t1209 = __retval1188;
      return t1209;
    }
  unsigned long t1210 = __n1186;
  unsigned long c1211 = 8;
  unsigned long b1212 = t1210 * c1211;
  void* r1213 = operator_new(b1212);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** cast1214 = (int**)r1213;
  __retval1188 = cast1214;
  int** t1215 = __retval1188;
  return t1215;
}

// function: _ZNSaIPiE8allocateEm
int** std__allocator_int____allocate(struct std__allocator_int___* v1216, unsigned long v1217) {
bb1218:
  struct std__allocator_int___* this1219;
  unsigned long __n1220;
  int** __retval1221;
  this1219 = v1216;
  __n1220 = v1217;
  struct std__allocator_int___* t1222 = this1219;
    _Bool r1223 = std____is_constant_evaluated();
    if (r1223) {
        unsigned long t1224 = __n1220;
        unsigned long c1225 = 8;
        unsigned long ovr1226;
        _Bool ovf1227 = __builtin_mul_overflow(t1224, c1225, &ovr1226);
        __n1220 = ovr1226;
        if (ovf1227) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1228 = __n1220;
      void* r1229 = operator_new(t1228);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast1230 = (int**)r1229;
      __retval1221 = cast1230;
      int** t1231 = __retval1221;
      return t1231;
    }
  struct std____new_allocator_int___* base1232 = (struct std____new_allocator_int___*)((char *)t1222 + 0);
  unsigned long t1233 = __n1220;
  void* c1234 = ((void*)0);
  int** r1235 = std____new_allocator_int____allocate(base1232, t1233, c1234);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1221 = r1235;
  int** t1236 = __retval1221;
  return t1236;
}

// function: _ZNSt16allocator_traitsISaIPiEE8allocateERS1_m
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* v1237, unsigned long v1238) {
bb1239:
  struct std__allocator_int___* __a1240;
  unsigned long __n1241;
  int** __retval1242;
  __a1240 = v1237;
  __n1241 = v1238;
  struct std__allocator_int___* t1243 = __a1240;
  unsigned long t1244 = __n1241;
  int** r1245 = std__allocator_int____allocate(t1243, t1244);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1242 = r1245;
  int** t1246 = __retval1242;
  return t1246;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_allocate_mapEm
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* v1247, unsigned long v1248) {
bb1249:
  struct std___Deque_base_int__std__allocator_int__* this1250;
  unsigned long __n1251;
  int** __retval1252;
  struct std__allocator_int___ __map_alloc1253;
  this1250 = v1247;
  __n1251 = v1248;
  struct std___Deque_base_int__std__allocator_int__* t1254 = this1250;
  struct std__allocator_int___ r1255 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1254);
  __map_alloc1253 = r1255;
  unsigned long t1256 = __n1251;
  int** r1257 = std__allocator_traits_std__allocator_int______allocate(&__map_alloc1253, t1256);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval1252 = r1257;
  int** t1258 = __retval1252;
  return t1258;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1259) {
bb1260:
  struct std____new_allocator_int_* this1261;
  unsigned long __retval1262;
  this1261 = v1259;
  struct std____new_allocator_int_* t1263 = this1261;
  unsigned long c1264 = 9223372036854775807;
  unsigned long c1265 = 4;
  unsigned long b1266 = c1264 / c1265;
  __retval1262 = b1266;
  unsigned long t1267 = __retval1262;
  return t1267;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1268, unsigned long v1269, void* v1270) {
bb1271:
  struct std____new_allocator_int_* this1272;
  unsigned long __n1273;
  void* unnamed1274;
  int* __retval1275;
  this1272 = v1268;
  __n1273 = v1269;
  unnamed1274 = v1270;
  struct std____new_allocator_int_* t1276 = this1272;
    unsigned long t1277 = __n1273;
    unsigned long r1278 = std____new_allocator_int____M_max_size___const(t1276);
    _Bool c1279 = ((t1277 > r1278)) ? 1 : 0;
    if (c1279) {
        unsigned long t1280 = __n1273;
        unsigned long c1281 = -1;
        unsigned long c1282 = 4;
        unsigned long b1283 = c1281 / c1282;
        _Bool c1284 = ((t1280 > b1283)) ? 1 : 0;
        if (c1284) {
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
    unsigned long c1285 = 4;
    unsigned long c1286 = 16;
    _Bool c1287 = ((c1285 > c1286)) ? 1 : 0;
    if (c1287) {
      unsigned long __al1288;
      unsigned long c1289 = 4;
      __al1288 = c1289;
      unsigned long t1290 = __n1273;
      unsigned long c1291 = 4;
      unsigned long b1292 = t1290 * c1291;
      unsigned long t1293 = __al1288;
      void* r1294 = operator_new_2(b1292, t1293);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1295 = (int*)r1294;
      __retval1275 = cast1295;
      int* t1296 = __retval1275;
      return t1296;
    }
  unsigned long t1297 = __n1273;
  unsigned long c1298 = 4;
  unsigned long b1299 = t1297 * c1298;
  void* r1300 = operator_new(b1299);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast1301 = (int*)r1300;
  __retval1275 = cast1301;
  int* t1302 = __retval1275;
  return t1302;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1303, unsigned long v1304) {
bb1305:
  struct std__allocator_int_* this1306;
  unsigned long __n1307;
  int* __retval1308;
  this1306 = v1303;
  __n1307 = v1304;
  struct std__allocator_int_* t1309 = this1306;
    _Bool r1310 = std____is_constant_evaluated();
    if (r1310) {
        unsigned long t1311 = __n1307;
        unsigned long c1312 = 4;
        unsigned long ovr1313;
        _Bool ovf1314 = __builtin_mul_overflow(t1311, c1312, &ovr1313);
        __n1307 = ovr1313;
        if (ovf1314) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1315 = __n1307;
      void* r1316 = operator_new(t1315);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1317 = (int*)r1316;
      __retval1308 = cast1317;
      int* t1318 = __retval1308;
      return t1318;
    }
  struct std____new_allocator_int_* base1319 = (struct std____new_allocator_int_*)((char *)t1309 + 0);
  unsigned long t1320 = __n1307;
  void* c1321 = ((void*)0);
  int* r1322 = std____new_allocator_int___allocate(base1319, t1320, c1321);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1308 = r1322;
  int* t1323 = __retval1308;
  return t1323;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1324, unsigned long v1325) {
bb1326:
  struct std__allocator_int_* __a1327;
  unsigned long __n1328;
  int* __retval1329;
  __a1327 = v1324;
  __n1328 = v1325;
  struct std__allocator_int_* t1330 = __a1327;
  unsigned long t1331 = __n1328;
  int* r1332 = std__allocator_int___allocate(t1330, t1331);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1329 = r1332;
  int* t1333 = __retval1329;
  return t1333;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_allocate_nodeEv
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* v1334) {
bb1335:
  struct std___Deque_base_int__std__allocator_int__* this1336;
  int* __retval1337;
  this1336 = v1334;
  struct std___Deque_base_int__std__allocator_int__* t1338 = this1336;
  struct std__allocator_int_* base1339 = (struct std__allocator_int_*)((char *)&(t1338->_M_impl) + 0);
  unsigned long c1340 = 4;
  unsigned long r1341 = std____deque_buf_size(c1340);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r1342 = std__allocator_traits_std__allocator_int_____allocate(base1339, r1341);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1337 = r1342;
  int* t1343 = __retval1337;
  return t1343;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1344, int* v1345, unsigned long v1346) {
bb1347:
  struct std____new_allocator_int_* this1348;
  int* __p1349;
  unsigned long __n1350;
  this1348 = v1344;
  __p1349 = v1345;
  __n1350 = v1346;
  struct std____new_allocator_int_* t1351 = this1348;
    unsigned long c1352 = 4;
    unsigned long c1353 = 16;
    _Bool c1354 = ((c1352 > c1353)) ? 1 : 0;
    if (c1354) {
      int* t1355 = __p1349;
      void* cast1356 = (void*)t1355;
      unsigned long t1357 = __n1350;
      unsigned long c1358 = 4;
      unsigned long b1359 = t1357 * c1358;
      unsigned long c1360 = 4;
      operator_delete_3(cast1356, b1359, c1360);
      return;
    }
  int* t1361 = __p1349;
  void* cast1362 = (void*)t1361;
  unsigned long t1363 = __n1350;
  unsigned long c1364 = 4;
  unsigned long b1365 = t1363 * c1364;
  operator_delete_2(cast1362, b1365);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1366, int* v1367, unsigned long v1368) {
bb1369:
  struct std__allocator_int_* this1370;
  int* __p1371;
  unsigned long __n1372;
  this1370 = v1366;
  __p1371 = v1367;
  __n1372 = v1368;
  struct std__allocator_int_* t1373 = this1370;
    _Bool r1374 = std____is_constant_evaluated();
    if (r1374) {
      int* t1375 = __p1371;
      void* cast1376 = (void*)t1375;
      operator_delete(cast1376);
      return;
    }
  struct std____new_allocator_int_* base1377 = (struct std____new_allocator_int_*)((char *)t1373 + 0);
  int* t1378 = __p1371;
  unsigned long t1379 = __n1372;
  std____new_allocator_int___deallocate(base1377, t1378, t1379);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1380, int* v1381, unsigned long v1382) {
bb1383:
  struct std__allocator_int_* __a1384;
  int* __p1385;
  unsigned long __n1386;
  __a1384 = v1380;
  __p1385 = v1381;
  __n1386 = v1382;
  struct std__allocator_int_* t1387 = __a1384;
  int* t1388 = __p1385;
  unsigned long t1389 = __n1386;
  std__allocator_int___deallocate(t1387, t1388, t1389);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE18_M_deallocate_nodeEPi
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* v1390, int* v1391) {
bb1392:
  struct std___Deque_base_int__std__allocator_int__* this1393;
  int* __p1394;
  this1393 = v1390;
  __p1394 = v1391;
  struct std___Deque_base_int__std__allocator_int__* t1395 = this1393;
  struct std__allocator_int_* base1396 = (struct std__allocator_int_*)((char *)&(t1395->_M_impl) + 0);
  int* t1397 = __p1394;
  unsigned long c1398 = 4;
  unsigned long r1399 = std____deque_buf_size(c1398);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_traits_std__allocator_int_____deallocate(base1396, t1397, r1399);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_destroy_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* v1400, int** v1401, int** v1402) {
bb1403:
  struct std___Deque_base_int__std__allocator_int__* this1404;
  int** __nstart1405;
  int** __nfinish1406;
  this1404 = v1400;
  __nstart1405 = v1401;
  __nfinish1406 = v1402;
  struct std___Deque_base_int__std__allocator_int__* t1407 = this1404;
    int** __n1408;
    int** t1409 = __nstart1405;
    __n1408 = t1409;
    while (1) {
      int** t1411 = __n1408;
      int** t1412 = __nfinish1406;
      _Bool c1413 = ((t1411 < t1412)) ? 1 : 0;
      if (!c1413) break;
      int** t1414 = __n1408;
      int* t1415 = *t1414;
      std___Deque_base_int__std__allocator_int______M_deallocate_node(t1407, t1415);
    for_step1410: ;
      int** t1416 = __n1408;
      int c1417 = 1;
      int** ptr1418 = &(t1416)[c1417];
      __n1408 = ptr1418;
    }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_create_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* v1419, int** v1420, int** v1421) {
bb1422:
  struct std___Deque_base_int__std__allocator_int__* this1423;
  int** __nstart1424;
  int** __nfinish1425;
  int** __cur1426;
  this1423 = v1419;
  __nstart1424 = v1420;
  __nfinish1425 = v1421;
  struct std___Deque_base_int__std__allocator_int__* t1427 = this1423;
        int** t1429 = __nstart1424;
        __cur1426 = t1429;
        while (1) {
          int** t1431 = __cur1426;
          int** t1432 = __nfinish1425;
          _Bool c1433 = ((t1431 < t1432)) ? 1 : 0;
          if (!c1433) break;
          int* r1434 = std___Deque_base_int__std__allocator_int______M_allocate_node(t1427);
          if (__cir_exc_active) {
            goto cir_try_dispatch1428;
          }
          int** t1435 = __cur1426;
          *t1435 = r1434;
        for_step1430: ;
          int** t1436 = __cur1426;
          int c1437 = 1;
          int** ptr1438 = &(t1436)[c1437];
          __cur1426 = ptr1438;
        }
    cir_try_dispatch1428: ;
    if (__cir_exc_active) {
    {
      int ca_tok1439 = 0;
      void* ca_exn1440 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        int** t1441 = __nstart1424;
        int** t1442 = __cur1426;
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1427, t1441, t1442);
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
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* v1443, int** v1444, unsigned long v1445) {
bb1446:
  struct std____new_allocator_int___* this1447;
  int** __p1448;
  unsigned long __n1449;
  this1447 = v1443;
  __p1448 = v1444;
  __n1449 = v1445;
  struct std____new_allocator_int___* t1450 = this1447;
    unsigned long c1451 = 8;
    unsigned long c1452 = 16;
    _Bool c1453 = ((c1451 > c1452)) ? 1 : 0;
    if (c1453) {
      int** t1454 = __p1448;
      void* cast1455 = (void*)t1454;
      unsigned long t1456 = __n1449;
      unsigned long c1457 = 8;
      unsigned long b1458 = t1456 * c1457;
      unsigned long c1459 = 8;
      operator_delete_3(cast1455, b1458, c1459);
      return;
    }
  int** t1460 = __p1448;
  void* cast1461 = (void*)t1460;
  unsigned long t1462 = __n1449;
  unsigned long c1463 = 8;
  unsigned long b1464 = t1462 * c1463;
  operator_delete_2(cast1461, b1464);
  return;
}

// function: _ZNSaIPiE10deallocateEPS_m
void std__allocator_int____deallocate(struct std__allocator_int___* v1465, int** v1466, unsigned long v1467) {
bb1468:
  struct std__allocator_int___* this1469;
  int** __p1470;
  unsigned long __n1471;
  this1469 = v1465;
  __p1470 = v1466;
  __n1471 = v1467;
  struct std__allocator_int___* t1472 = this1469;
    _Bool r1473 = std____is_constant_evaluated();
    if (r1473) {
      int** t1474 = __p1470;
      void* cast1475 = (void*)t1474;
      operator_delete(cast1475);
      return;
    }
  struct std____new_allocator_int___* base1476 = (struct std____new_allocator_int___*)((char *)t1472 + 0);
  int** t1477 = __p1470;
  unsigned long t1478 = __n1471;
  std____new_allocator_int____deallocate(base1476, t1477, t1478);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIPiEE10deallocateERS1_PS0_m
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* v1479, int** v1480, unsigned long v1481) {
bb1482:
  struct std__allocator_int___* __a1483;
  int** __p1484;
  unsigned long __n1485;
  __a1483 = v1479;
  __p1484 = v1480;
  __n1485 = v1481;
  struct std__allocator_int___* t1486 = __a1483;
  int** t1487 = __p1484;
  unsigned long t1488 = __n1485;
  std__allocator_int____deallocate(t1486, t1487, t1488);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_deallocate_mapEPPim
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* v1489, int** v1490, unsigned long v1491) {
bb1492:
  struct std___Deque_base_int__std__allocator_int__* this1493;
  int** __p1494;
  unsigned long __n1495;
  struct std__allocator_int___ __map_alloc1496;
  this1493 = v1489;
  __p1494 = v1490;
  __n1495 = v1491;
  struct std___Deque_base_int__std__allocator_int__* t1497 = this1493;
  struct std__allocator_int___ r1498 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1497);
  __map_alloc1496 = r1498;
  int** t1499 = __p1494;
  unsigned long t1500 = __n1495;
  std__allocator_traits_std__allocator_int______deallocate(&__map_alloc1496, t1499, t1500);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE14_S_buffer_sizeEv
unsigned long std___Deque_iterator_int__int___int_____S_buffer_size() {
bb1501:
  unsigned long __retval1502;
  unsigned long c1503 = 4;
  unsigned long r1504 = std____deque_buf_size(c1503);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1502 = r1504;
  unsigned long t1505 = __retval1502;
  return t1505;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE11_M_set_nodeEPS1_
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* v1506, int** v1507) {
bb1508:
  struct std___Deque_iterator_int__int____int___* this1509;
  int** __new_node1510;
  this1509 = v1506;
  __new_node1510 = v1507;
  struct std___Deque_iterator_int__int____int___* t1511 = this1509;
  int** t1512 = __new_node1510;
  t1511->_M_node = t1512;
  int** t1513 = __new_node1510;
  int* t1514 = *t1513;
  t1511->_M_first = t1514;
  int* t1515 = t1511->_M_first;
  unsigned long r1516 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast1517 = (long)r1516;
  int* ptr1518 = &(t1515)[cast1517];
  t1511->_M_last = ptr1518;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_initialize_mapEm
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* v1519, unsigned long v1520) {
bb1521:
  struct std___Deque_base_int__std__allocator_int__* this1522;
  unsigned long __num_elements1523;
  unsigned long __num_nodes1524;
  unsigned long ref_tmp01525;
  unsigned long ref_tmp11526;
  int** __nstart1527;
  int** __nfinish1528;
  this1522 = v1519;
  __num_elements1523 = v1520;
  struct std___Deque_base_int__std__allocator_int__* t1529 = this1522;
  unsigned long t1530 = __num_elements1523;
  unsigned long c1531 = 4;
  unsigned long r1532 = std____deque_buf_size(c1531);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1533 = t1530 / r1532;
  unsigned long c1534 = 1;
  unsigned long b1535 = b1533 + c1534;
  __num_nodes1524 = b1535;
  unsigned long c1536 = 8;
  ref_tmp01525 = c1536;
  unsigned long t1537 = __num_nodes1524;
  unsigned long c1538 = 2;
  unsigned long b1539 = t1537 + c1538;
  ref_tmp11526 = b1539;
  unsigned long* r1540 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp01525, &ref_tmp11526);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t1541 = *r1540;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1542 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1529->_M_impl) + 0);
  base1542->_M_map_size = t1541;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1543 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1529->_M_impl) + 0);
  unsigned long t1544 = base1543->_M_map_size;
  int** r1545 = std___Deque_base_int__std__allocator_int______M_allocate_map(t1529, t1544);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1546 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1529->_M_impl) + 0);
  base1546->_M_map = r1545;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1547 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1529->_M_impl) + 0);
  int** t1548 = base1547->_M_map;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1549 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1529->_M_impl) + 0);
  unsigned long t1550 = base1549->_M_map_size;
  unsigned long t1551 = __num_nodes1524;
  unsigned long b1552 = t1550 - t1551;
  unsigned long c1553 = 2;
  unsigned long b1554 = b1552 / c1553;
  int** ptr1555 = &(t1548)[b1554];
  __nstart1527 = ptr1555;
  int** t1556 = __nstart1527;
  unsigned long t1557 = __num_nodes1524;
  int** ptr1558 = &(t1556)[t1557];
  __nfinish1528 = ptr1558;
      int** t1560 = __nstart1527;
      int** t1561 = __nfinish1528;
      std___Deque_base_int__std__allocator_int______M_create_nodes(t1529, t1560, t1561);
      if (__cir_exc_active) {
        goto cir_try_dispatch1559;
      }
    cir_try_dispatch1559: ;
    if (__cir_exc_active) {
    {
      int ca_tok1562 = 0;
      void* ca_exn1563 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1564 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1529->_M_impl) + 0);
        int** t1565 = base1564->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1566 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1529->_M_impl) + 0);
        unsigned long t1567 = base1566->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1529, t1565, t1567);
        int** c1568 = ((void*)0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1569 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1529->_M_impl) + 0);
        base1569->_M_map = c1568;
        unsigned long c1570 = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1571 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1529->_M_impl) + 0);
        base1571->_M_map_size = c1570;
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1572 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1529->_M_impl) + 0);
  int** t1573 = __nstart1527;
  std___Deque_iterator_int__int___int_____M_set_node(&base1572->_M_start, t1573);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1574 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1529->_M_impl) + 0);
  int** t1575 = __nfinish1528;
  int c1576 = -1;
  int** ptr1577 = &(t1575)[c1576];
  std___Deque_iterator_int__int___int_____M_set_node(&base1574->_M_finish, ptr1577);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1578 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1529->_M_impl) + 0);
  int* t1579 = base1578->_M_start._M_first;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1580 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1529->_M_impl) + 0);
  base1580->_M_start._M_cur = t1579;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1581 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1529->_M_impl) + 0);
  int* t1582 = base1581->_M_finish._M_first;
  unsigned long t1583 = __num_elements1523;
  unsigned long c1584 = 4;
  unsigned long r1585 = std____deque_buf_size(c1584);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1586 = t1583 % r1585;
  int* ptr1587 = &(t1582)[b1586];
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1588 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1529->_M_impl) + 0);
  base1588->_M_finish._M_cur = ptr1587;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implD2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1589) {
bb1590:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1591;
  this1591 = v1589;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1592 = this1591;
  {
    struct std__allocator_int_* base1593 = (struct std__allocator_int_*)((char *)t1592 + 0);
    std__allocator_int____allocator(base1593);
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEEC2Ev
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1594) {
bb1595:
  struct std___Deque_base_int__std__allocator_int__* this1596;
  this1596 = v1594;
  struct std___Deque_base_int__std__allocator_int__* t1597 = this1596;
  std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(&t1597->_M_impl);
    unsigned long c1598 = 0;
    std___Deque_base_int__std__allocator_int______M_initialize_map(t1597, c1598);
    if (__cir_exc_active) {
      {
        std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1597->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEED2Ev
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1599) {
bb1600:
  struct std___Deque_base_int__std__allocator_int__* this1601;
  this1601 = v1599;
  struct std___Deque_base_int__std__allocator_int__* t1602 = this1601;
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1603 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1602->_M_impl) + 0);
      int** t1604 = base1603->_M_map;
      _Bool cast1605 = (_Bool)t1604;
      if (cast1605) {
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1606 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1602->_M_impl) + 0);
        int** t1607 = base1606->_M_start._M_node;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1608 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1602->_M_impl) + 0);
        int** t1609 = base1608->_M_finish._M_node;
        int c1610 = 1;
        int** ptr1611 = &(t1609)[c1610];
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1602, t1607, ptr1611);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1612 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1602->_M_impl) + 0);
        int** t1613 = base1612->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1614 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1602->_M_impl) + 0);
        unsigned long t1615 = base1614->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1602, t1613, t1615);
      }
  {
    std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1602->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1616) {
bb1617:
  struct std____new_allocator_int_* this1618;
  this1618 = v1616;
  struct std____new_allocator_int_* t1619 = this1618;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1620) {
bb1621:
  struct std__allocator_int_* this1622;
  this1622 = v1620;
  struct std__allocator_int_* t1623 = this1622;
  struct std____new_allocator_int_* base1624 = (struct std____new_allocator_int_*)((char *)t1623 + 0);
  std____new_allocator_int_____new_allocator(base1624);
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2Ev
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* v1625) {
bb1626:
  struct std___Deque_iterator_int__int____int___* this1627;
  this1627 = v1625;
  struct std___Deque_iterator_int__int____int___* t1628 = this1627;
  int* c1629 = ((void*)0);
  t1628->_M_cur = c1629;
  int* c1630 = ((void*)0);
  t1628->_M_first = c1630;
  int* c1631 = ((void*)0);
  t1628->_M_last = c1631;
  int** c1632 = ((void*)0);
  t1628->_M_node = c1632;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_Deque_impl_dataC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v1633) {
bb1634:
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* this1635;
  this1635 = v1633;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t1636 = this1635;
  int** c1637 = ((void*)0);
  t1636->_M_map = c1637;
  unsigned long c1638 = 0;
  t1636->_M_map_size = c1638;
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1636->_M_start);
  std___Deque_iterator_int__int___int_____Deque_iterator_2(&t1636->_M_finish);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1639) {
bb1640:
  struct std__allocator_int_* this1641;
  this1641 = v1639;
  struct std__allocator_int_* t1642 = this1641;
  return;
}

// function: _ZNSt15__new_allocatorIPiEC2Ev
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* v1643) {
bb1644:
  struct std____new_allocator_int___* this1645;
  this1645 = v1643;
  struct std____new_allocator_int___* t1646 = this1645;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1647) {
bb1648:
  int* __location1649;
  __location1649 = v1647;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1650, int* v1651) {
bb1652:
  int* __first1653;
  int* __last1654;
  __first1653 = v1650;
  __last1654 = v1651;
      _Bool r1655 = std____is_constant_evaluated();
      if (r1655) {
          while (1) {
            int* t1657 = __first1653;
            int* t1658 = __last1654;
            _Bool c1659 = ((t1657 != t1658)) ? 1 : 0;
            if (!c1659) break;
            int* t1660 = __first1653;
            void_std__destroy_at_int_(t1660);
            if (__cir_exc_active) {
              return;
            }
          for_step1656: ;
            int* t1661 = __first1653;
            int c1662 = 1;
            int* ptr1663 = &(t1661)[c1662];
            __first1653 = ptr1663;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1664, int* v1665, struct std__allocator_int_* v1666) {
bb1667:
  int* __first1668;
  int* __last1669;
  struct std__allocator_int_* unnamed1670;
  __first1668 = v1664;
  __last1669 = v1665;
  unnamed1670 = v1666;
  int* t1671 = __first1668;
  int* t1672 = __last1669;
  void_std___Destroy_int__(t1671, t1672);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIiSaIiEE14_S_buffer_sizeEv
unsigned long std__deque_int__std__allocator_int______S_buffer_size() {
bb1673:
  unsigned long __retval1674;
  unsigned long c1675 = 4;
  unsigned long r1676 = std____deque_buf_size(c1675);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1674 = r1676;
  unsigned long t1677 = __retval1674;
  return t1677;
}

// function: _ZNSt5dequeIiSaIiEE19_M_destroy_data_auxESt15_Deque_iteratorIiRiPiES5_
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* v1678, struct std___Deque_iterator_int__int____int___ v1679, struct std___Deque_iterator_int__int____int___ v1680) {
bb1681:
  struct std__deque_int__std__allocator_int__* this1682;
  struct std___Deque_iterator_int__int____int___ __first1683;
  struct std___Deque_iterator_int__int____int___ __last1684;
  this1682 = v1678;
  __first1683 = v1679;
  __last1684 = v1680;
  struct std__deque_int__std__allocator_int__* t1685 = this1682;
    int** __node1686;
    int** t1687 = __first1683._M_node;
    int c1688 = 1;
    int** ptr1689 = &(t1687)[c1688];
    __node1686 = ptr1689;
    while (1) {
      int** t1691 = __node1686;
      int** t1692 = __last1684._M_node;
      _Bool c1693 = ((t1691 < t1692)) ? 1 : 0;
      if (!c1693) break;
      int** t1694 = __node1686;
      int* t1695 = *t1694;
      int** t1696 = __node1686;
      int* t1697 = *t1696;
      unsigned long r1698 = std__deque_int__std__allocator_int______S_buffer_size();
      int* ptr1699 = &(t1697)[r1698];
      struct std___Deque_base_int__std__allocator_int__* base1700 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1685 + 0);
      struct std__allocator_int_* r1701 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1700);
      void_std___Destroy_int___int_(t1695, ptr1699, r1701);
      if (__cir_exc_active) {
        return;
      }
    for_step1690: ;
      int** t1702 = __node1686;
      int c1703 = 1;
      int** ptr1704 = &(t1702)[c1703];
      __node1686 = ptr1704;
    }
    int** t1705 = __first1683._M_node;
    int** t1706 = __last1684._M_node;
    _Bool c1707 = ((t1705 != t1706)) ? 1 : 0;
    if (c1707) {
      int* t1708 = __first1683._M_cur;
      int* t1709 = __first1683._M_last;
      struct std___Deque_base_int__std__allocator_int__* base1710 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1685 + 0);
      struct std__allocator_int_* r1711 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1710);
      void_std___Destroy_int___int_(t1708, t1709, r1711);
      if (__cir_exc_active) {
        return;
      }
      int* t1712 = __last1684._M_first;
      int* t1713 = __last1684._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1714 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1685 + 0);
      struct std__allocator_int_* r1715 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1714);
      void_std___Destroy_int___int_(t1712, t1713, r1715);
      if (__cir_exc_active) {
        return;
      }
    } else {
      int* t1716 = __first1683._M_cur;
      int* t1717 = __last1684._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1718 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1685 + 0);
      struct std__allocator_int_* r1719 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1718);
      void_std___Destroy_int___int_(t1716, t1717, r1719);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE15_M_destroy_dataESt15_Deque_iteratorIiRiPiES5_RKS0_
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* v1720, struct std___Deque_iterator_int__int____int___ v1721, struct std___Deque_iterator_int__int____int___ v1722, struct std__allocator_int_* v1723) {
bb1724:
  struct std__deque_int__std__allocator_int__* this1725;
  struct std___Deque_iterator_int__int____int___ __first1726;
  struct std___Deque_iterator_int__int____int___ __last1727;
  struct std__allocator_int_* unnamed1728;
  this1725 = v1720;
  __first1726 = v1721;
  __last1727 = v1722;
  unnamed1728 = v1723;
  struct std__deque_int__std__allocator_int__* t1729 = this1725;
    _Bool c1730 = 0;
    if (c1730) {
      struct std___Deque_iterator_int__int____int___ agg_tmp01731;
      struct std___Deque_iterator_int__int____int___ agg_tmp11732;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01731, &__first1726);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11732, &__last1727);
      struct std___Deque_iterator_int__int____int___ t1733 = agg_tmp01731;
      struct std___Deque_iterator_int__int____int___ t1734 = agg_tmp11732;
      std__deque_int__std__allocator_int______M_destroy_data_aux(t1729, t1733, t1734);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE5beginEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* v1735) {
bb1736:
  struct std__deque_int__std__allocator_int__* this1737;
  struct std___Deque_iterator_int__int____int___ __retval1738;
  this1737 = v1735;
  struct std__deque_int__std__allocator_int__* t1739 = this1737;
  struct std___Deque_base_int__std__allocator_int__* base1740 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1739 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1741 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1740->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1738, &base1741->_M_start);
  struct std___Deque_iterator_int__int____int___ t1742 = __retval1738;
  return t1742;
}

// function: _ZNSt5dequeIiSaIiEE3endEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* v1743) {
bb1744:
  struct std__deque_int__std__allocator_int__* this1745;
  struct std___Deque_iterator_int__int____int___ __retval1746;
  this1745 = v1743;
  struct std__deque_int__std__allocator_int__* t1747 = this1745;
  struct std___Deque_base_int__std__allocator_int__* base1748 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1747 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1749 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1748->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1746, &base1749->_M_finish);
  struct std___Deque_iterator_int__int____int___ t1750 = __retval1746;
  return t1750;
}

// function: _ZNSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* v1751) {
bb1752:
  struct std___Deque_base_int__std__allocator_int__* this1753;
  struct std__allocator_int_* __retval1754;
  this1753 = v1751;
  struct std___Deque_base_int__std__allocator_int__* t1755 = this1753;
  struct std__allocator_int_* base1756 = (struct std__allocator_int_*)((char *)&(t1755->_M_impl) + 0);
  __retval1754 = base1756;
  struct std__allocator_int_* t1757 = __retval1754;
  return t1757;
}

