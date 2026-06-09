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
struct _Guard { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* _M_guarded; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

char _str[5] = "Test";
char _str_1[9] = " string:";
char _str_2[3] = " x";
char _str_3[15] = "Test string: x";
char _str_4[25] = "str1 == \"Test string: x\"";
char _str_5[120] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_operator_plus_eq_1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_6[50] = "basic_string: construction from null is not valid";
char _str_7[24] = "basic_string::_M_create";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
char _str_8[21] = "basic_string::append";
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
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
int main();
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
_Bool std__is_constant_evaluated();
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
_Bool std____is_constant_evaluated();
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* p0, char* p1);
void std__char_traits_char___assign(char* p0, char* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0);
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
extern void std____throw_logic_error(char* p0);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* p0, char* p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** p0);
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* p0, char* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* p0);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std____throw_length_error(char* p0);
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
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* p0, unsigned long p1);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
char* __gnu_cxx__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* p0, char* p1, unsigned long p2);
char* char_const__std____niter_base_char_const__(char* p0);
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* p0, char* p1, char* p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* p0);
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, char* p2, struct std__forward_iterator_tag p3);
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_char___deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v0) {
bb1:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2;
  struct std__allocator_char_ ref_tmp03;
  this2 = v0;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t4 = this2;
  char* r5 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t4);
  std__allocator_char___allocator_2(&ref_tmp03);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t4->_M_dataplus, r5, &ref_tmp03);
  {
    std__allocator_char____allocator(&ref_tmp03);
  }
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t4);
    unsigned long c6 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t4, c6);
  return;
}

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v7) {
bb8:
  struct std__allocator_char_* this9;
  this9 = v7;
  struct std__allocator_char_* t10 = this9;
  struct std____new_allocator_char_* base11 = (struct std____new_allocator_char_*)((char *)t10 + 0);
  std____new_allocator_char_____new_allocator_2(base11);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEPKcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v12, char* v13, struct std__allocator_char_* v14) {
bb15:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this16;
  char* __s17;
  struct std__allocator_char_* __a18;
  char* __end19;
  struct std__forward_iterator_tag agg_tmp020;
  this16 = v12;
  __s17 = v13;
  __a18 = v14;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t21 = this16;
  char* r22 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t21);
  struct std__allocator_char_* t23 = __a18;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t21->_M_dataplus, r22, t23);
      char* t24 = __s17;
      char* c25 = ((void*)0);
      _Bool c26 = ((t24 == c25)) ? 1 : 0;
      if (c26) {
        char* cast27 = (char*)&(_str_6);
        std____throw_logic_error(cast27);
      }
    char* t28 = __s17;
    char* t29 = __s17;
    unsigned long r30 = std__char_traits_char___length(t29);
    char* ptr31 = &(t28)[r30];
    __end19 = ptr31;
    char* t32 = __s17;
    char* t33 = __end19;
    struct std__forward_iterator_tag t34 = agg_tmp020;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t21, t32, t33, t34);
  return;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_move_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign() {
bb35:
  _Bool __retval36;
  _Bool t37 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval36 = t37;
  _Bool t38 = __retval36;
  return t38;
}

// function: _ZNSt15__new_allocatorIcEaSERKS0_
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* v39, struct std____new_allocator_char_* v40) {
bb41:
  struct std____new_allocator_char_* this42;
  struct std____new_allocator_char_* unnamed43;
  struct std____new_allocator_char_* __retval44;
  this42 = v39;
  unnamed43 = v40;
  struct std____new_allocator_char_* t45 = this42;
  __retval44 = t45;
  struct std____new_allocator_char_* t46 = __retval44;
  return t46;
}

// function: _ZNSaIcEaSERKS_
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* v47, struct std__allocator_char_* v48) {
bb49:
  struct std__allocator_char_* this50;
  struct std__allocator_char_* unnamed51;
  struct std__allocator_char_* __retval52;
  this50 = v47;
  unnamed51 = v48;
  struct std__allocator_char_* t53 = this50;
  struct std____new_allocator_char_* base54 = (struct std____new_allocator_char_*)((char *)t53 + 0);
  struct std__allocator_char_* t55 = unnamed51;
  struct std____new_allocator_char_* base56 = (struct std____new_allocator_char_*)((char *)t55 + 0);
  struct std____new_allocator_char_* r57 = std____new_allocator_char___operator_(base54, base56);
  __retval52 = t53;
  struct std__allocator_char_* t58 = __retval52;
  return t58;
}

// function: _ZSt15__alloc_on_moveISaIcEEvRT_S2_
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* v59, struct std__allocator_char_* v60) {
bb61:
  struct std__allocator_char_* __one62;
  struct std__allocator_char_* __two63;
  __one62 = v59;
  __two63 = v60;
    struct std__allocator_char_* t64 = __two63;
    struct std__allocator_char_* t65 = __one62;
    struct std__allocator_char_* r66 = std__allocator_char___operator_(t65, t64);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v67) {
bb68:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this69;
  unsigned long __retval70;
  unsigned long __sz71;
  this69 = v67;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t72 = this69;
  unsigned long t73 = t72->_M_string_length;
  __sz71 = t73;
    unsigned long t74 = __sz71;
    unsigned long r75 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t72);
    _Bool c76 = ((t74 > r75)) ? 1 : 0;
    if (c76) {
      __builtin_unreachable();
    }
  unsigned long t77 = __sz71;
  __retval70 = t77;
  unsigned long t78 = __retval70;
  return t78;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v79) {
bb80:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this81;
  unsigned long __retval82;
  this81 = v79;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t83 = this81;
  unsigned long r84 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t83);
  __retval82 = r84;
  unsigned long t85 = __retval82;
  return t85;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v86) {
bb87:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this88;
  char* __retval89;
  this88 = v86;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t90 = this88;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t90);
  char* r91 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t90);
  __retval89 = r91;
  char* t92 = __retval89;
  return t92;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v93) {
bb94:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this95;
  unsigned long __retval96;
  unsigned long __sz97;
  this95 = v93;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t98 = this95;
  _Bool r99 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t98);
  unsigned long ternary100;
  if (r99) {
    unsigned long c101 = 15;
    ternary100 = (unsigned long)c101;
  } else {
    unsigned long t102 = t98->field2._M_allocated_capacity;
    ternary100 = (unsigned long)t102;
  }
  __sz97 = ternary100;
    unsigned long t103 = __sz97;
    unsigned long c104 = 15;
    _Bool c105 = ((t103 < c104)) ? 1 : 0;
    _Bool ternary106;
    if (c105) {
      _Bool c107 = 1;
      ternary106 = (_Bool)c107;
    } else {
      unsigned long t108 = __sz97;
      unsigned long r109 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t98);
      _Bool c110 = ((t108 > r109)) ? 1 : 0;
      ternary106 = (_Bool)c110;
    }
    if (ternary106) {
      __builtin_unreachable();
    }
  unsigned long t111 = __sz97;
  __retval96 = t111;
  unsigned long t112 = __retval96;
  return t112;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v113, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v114) {
bb115:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this116;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str117;
  this116 = v113;
  __str117 = v114;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t118 = this116;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t119 = __str117;
    _Bool c120 = ((t118 != t119)) ? 1 : 0;
    if (c120) {
      unsigned long __rsize121;
      unsigned long __capacity122;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t123 = __str117;
      unsigned long r124 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t123);
      __rsize121 = r124;
      unsigned long r125 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t118);
      __capacity122 = r125;
        unsigned long t126 = __rsize121;
        unsigned long t127 = __capacity122;
        _Bool c128 = ((t126 > t127)) ? 1 : 0;
        if (c128) {
          unsigned long __new_capacity129;
          char* __tmp130;
          unsigned long t131 = __rsize121;
          __new_capacity129 = t131;
          unsigned long t132 = __capacity122;
          char* r133 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t118, &__new_capacity129, t132);
          __tmp130 = r133;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t118);
          char* t134 = __tmp130;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t118, t134);
          unsigned long t135 = __new_capacity129;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t118, t135);
        }
        unsigned long t136 = __rsize121;
        _Bool cast137 = (_Bool)t136;
        if (cast137) {
          char* r138 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t118);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t139 = __str117;
          char* r140 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t139);
          unsigned long t141 = __rsize121;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r138, r140, t141);
        }
      unsigned long t142 = __rsize121;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t118, t142);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5clearEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v143) {
bb144:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this145;
  this145 = v143;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t146 = this145;
  unsigned long c147 = 0;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t146, c147);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEOS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v148, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v149) {
bb150:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this151;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str152;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval153;
  _Bool __equal_allocs154;
  this151 = v148;
  __str152 = v149;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t155 = this151;
  _Bool c156 = 1;
  __equal_allocs154 = c156;
    _Bool r157 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t155);
    _Bool u158 = !r157;
    _Bool ternary159;
    if (u158) {
      _Bool r160 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
      ternary159 = (_Bool)r160;
    } else {
      _Bool c161 = 0;
      ternary159 = (_Bool)c161;
    }
    _Bool ternary162;
    if (ternary159) {
      _Bool t163 = __equal_allocs154;
      _Bool u164 = !t163;
      ternary162 = (_Bool)u164;
    } else {
      _Bool c165 = 0;
      ternary162 = (_Bool)c165;
    }
    if (ternary162) {
      unsigned long t166 = t155->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t155, t166);
      char* r167 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t155);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t155, r167);
      unsigned long c168 = 0;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t155, c168);
    }
  struct std__allocator_char_* r169 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t155);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t170 = __str152;
  struct std__allocator_char_* r171 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t170);
  void_std____alloc_on_move_std__allocator_char___(r169, r171);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t172 = __str152;
    _Bool r173 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t172);
    if (r173) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t174 = __str152;
        _Bool c175 = ((t174 != t155)) ? 1 : 0;
        if (c175) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t176 = __str152;
            unsigned long r177 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t176);
            _Bool cast178 = (_Bool)r177;
            if (cast178) {
              char* r179 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t155);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t180 = __str152;
              char* r181 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t180);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t182 = __str152;
              unsigned long r183 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t182);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r179, r181, r183);
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t184 = __str152;
          unsigned long r185 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t184);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t155, r185);
        }
    } else {
        _Bool r186 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
        _Bool ternary187;
        if (r186) {
          _Bool c188 = 1;
          ternary187 = (_Bool)c188;
        } else {
          _Bool t189 = __equal_allocs154;
          ternary187 = (_Bool)t189;
        }
        if (ternary187) {
          char* __data190;
          unsigned long __capacity191;
          char* c192 = ((void*)0);
          __data190 = c192;
            _Bool r193 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t155);
            _Bool u194 = !r193;
            if (u194) {
                _Bool t195 = __equal_allocs154;
                if (t195) {
                  char* r196 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t155);
                  __data190 = r196;
                  unsigned long t197 = t155->field2._M_allocated_capacity;
                  __capacity191 = t197;
                } else {
                  unsigned long t198 = t155->field2._M_allocated_capacity;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t155, t198);
                }
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t199 = __str152;
          char* r200 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t199);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t155, r200);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t201 = __str152;
          unsigned long r202 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t201);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t155, r202);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t203 = __str152;
          unsigned long t204 = t203->field2._M_allocated_capacity;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t155, t204);
            char* t205 = __data190;
            _Bool cast206 = (_Bool)t205;
            if (cast206) {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t207 = __str152;
              char* t208 = __data190;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t207, t208);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t209 = __str152;
              unsigned long t210 = __capacity191;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t209, t210);
            } else {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t211 = __str152;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t212 = __str152;
              char* r213 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t212);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t211, r213);
            }
        } else {
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t214 = __str152;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t155, t214);
        }
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t215 = __str152;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(t215);
  __retval153 = t155;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t216 = __retval153;
  return t216;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v217) {
bb218:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this219;
  this219 = v217;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t220 = this219;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t220);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t220->_M_dataplus);
  }
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v221) {
bb222:
  struct std__allocator_char_* this223;
  this223 = v221;
  struct std__allocator_char_* t224 = this223;
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v225, unsigned long v226, unsigned long v227, char* v228) {
bb229:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this230;
  unsigned long __n1231;
  unsigned long __n2232;
  char* __s233;
  this230 = v225;
  __n1231 = v226;
  __n2232 = v227;
  __s233 = v228;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t234 = this230;
    unsigned long r235 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t234);
    unsigned long r236 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t234);
    unsigned long t237 = __n1231;
    unsigned long b238 = r236 - t237;
    unsigned long b239 = r235 - b238;
    unsigned long t240 = __n2232;
    _Bool c241 = ((b239 < t240)) ? 1 : 0;
    if (c241) {
      char* t242 = __s233;
      std____throw_length_error(t242);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v243, unsigned long v244, unsigned long v245, char* v246, unsigned long v247) {
bb248:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this249;
  unsigned long __pos250;
  unsigned long __len1251;
  char* __s252;
  unsigned long __len2253;
  unsigned long __how_much254;
  unsigned long __new_capacity255;
  char* __r256;
  this249 = v243;
  __pos250 = v244;
  __len1251 = v245;
  __s252 = v246;
  __len2253 = v247;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t257 = this249;
  unsigned long r258 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t257);
  unsigned long t259 = __pos250;
  unsigned long b260 = r258 - t259;
  unsigned long t261 = __len1251;
  unsigned long b262 = b260 - t261;
  __how_much254 = b262;
  unsigned long r263 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t257);
  unsigned long t264 = __len2253;
  unsigned long b265 = r263 + t264;
  unsigned long t266 = __len1251;
  unsigned long b267 = b265 - t266;
  __new_capacity255 = b267;
  unsigned long r268 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t257);
  char* r269 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t257, &__new_capacity255, r268);
  __r256 = r269;
    unsigned long t270 = __pos250;
    _Bool cast271 = (_Bool)t270;
    if (cast271) {
      char* t272 = __r256;
      char* r273 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t257);
      unsigned long t274 = __pos250;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t272, r273, t274);
    }
    char* t275 = __s252;
    _Bool cast276 = (_Bool)t275;
    _Bool ternary277;
    if (cast276) {
      unsigned long t278 = __len2253;
      _Bool cast279 = (_Bool)t278;
      ternary277 = (_Bool)cast279;
    } else {
      _Bool c280 = 0;
      ternary277 = (_Bool)c280;
    }
    if (ternary277) {
      char* t281 = __r256;
      unsigned long t282 = __pos250;
      char* ptr283 = &(t281)[t282];
      char* t284 = __s252;
      unsigned long t285 = __len2253;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr283, t284, t285);
    }
    unsigned long t286 = __how_much254;
    _Bool cast287 = (_Bool)t286;
    if (cast287) {
      char* t288 = __r256;
      unsigned long t289 = __pos250;
      char* ptr290 = &(t288)[t289];
      unsigned long t291 = __len2253;
      char* ptr292 = &(ptr290)[t291];
      char* r293 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t257);
      unsigned long t294 = __pos250;
      char* ptr295 = &(r293)[t294];
      unsigned long t296 = __len1251;
      char* ptr297 = &(ptr295)[t296];
      unsigned long t298 = __how_much254;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr292, ptr297, t298);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t257);
  char* t299 = __r256;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t257, t299);
  unsigned long t300 = __new_capacity255;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t257, t300);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v301, char* v302, unsigned long v303) {
bb304:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this305;
  char* __s306;
  unsigned long __n307;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval308;
  unsigned long __len309;
  this305 = v301;
  __s306 = v302;
  __n307 = v303;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t310 = this305;
  unsigned long t311 = __n307;
  unsigned long r312 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t310);
  unsigned long b313 = t311 + r312;
  __len309 = b313;
    unsigned long t314 = __len309;
    unsigned long r315 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t310);
    _Bool c316 = ((t314 <= r315)) ? 1 : 0;
    if (c316) {
        unsigned long t317 = __n307;
        _Bool cast318 = (_Bool)t317;
        if (cast318) {
          char* r319 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t310);
          unsigned long r320 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t310);
          char* ptr321 = &(r319)[r320];
          char* t322 = __s306;
          unsigned long t323 = __n307;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr321, t322, t323);
        }
    } else {
      unsigned long r324 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t310);
      unsigned long c325 = 0;
      char* t326 = __s306;
      unsigned long t327 = __n307;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t310, r324, c325, t326, t327);
    }
  unsigned long t328 = __len309;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t310, t328);
  __retval308 = t310;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t329 = __retval308;
  return t329;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v330, char* v331, unsigned long v332) {
bb333:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this334;
  char* __s335;
  unsigned long __n336;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval337;
  this334 = v330;
  __s335 = v331;
  __n336 = v332;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t338 = this334;
  unsigned long c339 = 0;
  unsigned long t340 = __n336;
  char* cast341 = (char*)&(_str_8);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t338, c339, t340, cast341);
  char* t342 = __s335;
  unsigned long t343 = __n336;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r344 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(t338, t342, t343);
  __retval337 = r344;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t345 = __retval337;
  return t345;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendERKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v346, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v347) {
bb348:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this349;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str350;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval351;
  this349 = v346;
  __str350 = v347;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t352 = this349;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t353 = __str350;
  char* r354 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t353);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t355 = __str350;
  unsigned long r356 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t355);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r357 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(t352, r354, r356);
  __retval351 = r357;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t358 = __retval351;
  return t358;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEpLERKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v359, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v360) {
bb361:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this362;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str363;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval364;
  this362 = v359;
  __str363 = v360;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t365 = this362;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t366 = __str363;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r367 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(t365, t366);
  __retval364 = r367;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t368 = __retval364;
  return t368;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v369, char* v370) {
bb371:
  char* __c1372;
  char* __c2373;
  _Bool __retval374;
  __c1372 = v369;
  __c2373 = v370;
  char* t375 = __c1372;
  char t376 = *t375;
  unsigned char cast377 = (unsigned char)t376;
  int cast378 = (int)cast377;
  char* t379 = __c2373;
  char t380 = *t379;
  unsigned char cast381 = (unsigned char)t380;
  int cast382 = (int)cast381;
  _Bool c383 = ((cast378 < cast382)) ? 1 : 0;
  __retval374 = c383;
  _Bool t384 = __retval374;
  return t384;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v385, char* v386, unsigned long v387) {
bb388:
  char* __s1389;
  char* __s2390;
  unsigned long __n391;
  int __retval392;
  __s1389 = v385;
  __s2390 = v386;
  __n391 = v387;
    unsigned long t393 = __n391;
    unsigned long c394 = 0;
    _Bool c395 = ((t393 == c394)) ? 1 : 0;
    if (c395) {
      int c396 = 0;
      __retval392 = c396;
      int t397 = __retval392;
      return t397;
    }
    _Bool r398 = std____is_constant_evaluated();
    if (r398) {
        unsigned long __i399;
        unsigned long c400 = 0;
        __i399 = c400;
        while (1) {
          unsigned long t402 = __i399;
          unsigned long t403 = __n391;
          _Bool c404 = ((t402 < t403)) ? 1 : 0;
          if (!c404) break;
            unsigned long t405 = __i399;
            char* t406 = __s1389;
            char* ptr407 = &(t406)[t405];
            unsigned long t408 = __i399;
            char* t409 = __s2390;
            char* ptr410 = &(t409)[t408];
            _Bool r411 = std__char_traits_char___lt(ptr407, ptr410);
            if (r411) {
              int c412 = -1;
              __retval392 = c412;
              int t413 = __retval392;
              int ret_val414 = t413;
              return ret_val414;
            } else {
                unsigned long t415 = __i399;
                char* t416 = __s2390;
                char* ptr417 = &(t416)[t415];
                unsigned long t418 = __i399;
                char* t419 = __s1389;
                char* ptr420 = &(t419)[t418];
                _Bool r421 = std__char_traits_char___lt(ptr417, ptr420);
                if (r421) {
                  int c422 = 1;
                  __retval392 = c422;
                  int t423 = __retval392;
                  int ret_val424 = t423;
                  return ret_val424;
                }
            }
        for_step401: ;
          unsigned long t425 = __i399;
          unsigned long u426 = t425 + 1;
          __i399 = u426;
        }
      int c427 = 0;
      __retval392 = c427;
      int t428 = __retval392;
      return t428;
    }
  char* t429 = __s1389;
  void* cast430 = (void*)t429;
  char* t431 = __s2390;
  void* cast432 = (void*)t431;
  unsigned long t433 = __n391;
  int r434 = memcmp(cast430, cast432, t433);
  __retval392 = r434;
  int t435 = __retval392;
  return t435;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v436) {
bb437:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this438;
  char* __retval439;
  this438 = v436;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t440 = this438;
  char* r441 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t440);
  __retval439 = r441;
  char* t442 = __retval439;
  return t442;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v443, char* v444) {
bb445:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs446;
  char* __rhs447;
  _Bool __retval448;
  __lhs446 = v443;
  __rhs447 = v444;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t449 = __lhs446;
  unsigned long r450 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t449);
  char* t451 = __rhs447;
  unsigned long r452 = std__char_traits_char___length(t451);
  _Bool c453 = ((r450 == r452)) ? 1 : 0;
  _Bool ternary454;
  if (c453) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t455 = __lhs446;
    char* r456 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t455);
    char* t457 = __rhs447;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t458 = __lhs446;
    unsigned long r459 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t458);
    int r460 = std__char_traits_char___compare(r456, t457, r459);
    _Bool cast461 = (_Bool)r460;
    _Bool u462 = !cast461;
    ternary454 = (_Bool)u462;
  } else {
    _Bool c463 = 0;
    ternary454 = (_Bool)c463;
  }
  __retval448 = ternary454;
  _Bool t464 = __retval448;
  return t464;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v465, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v466) {
bb467:
  struct std__basic_ostream_char__std__char_traits_char__* __os468;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str469;
  struct std__basic_ostream_char__std__char_traits_char__* __retval470;
  __os468 = v465;
  __str469 = v466;
  struct std__basic_ostream_char__std__char_traits_char__* t471 = __os468;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t472 = __str469;
  char* r473 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t472);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t474 = __str469;
  unsigned long r475 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t474);
  long cast476 = (long)r475;
  struct std__basic_ostream_char__std__char_traits_char__* r477 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t471, r473, cast476);
  __retval470 = r477;
  struct std__basic_ostream_char__std__char_traits_char__* t478 = __retval470;
  return t478;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v479, void* v480) {
bb481:
  struct std__basic_ostream_char__std__char_traits_char__* this482;
  void* __pf483;
  struct std__basic_ostream_char__std__char_traits_char__* __retval484;
  this482 = v479;
  __pf483 = v480;
  struct std__basic_ostream_char__std__char_traits_char__* t485 = this482;
  void* t486 = __pf483;
  struct std__basic_ostream_char__std__char_traits_char__* r487 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t486)(t485);
  __retval484 = r487;
  struct std__basic_ostream_char__std__char_traits_char__* t488 = __retval484;
  return t488;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v489) {
bb490:
  struct std__basic_ostream_char__std__char_traits_char__* __os491;
  struct std__basic_ostream_char__std__char_traits_char__* __retval492;
  __os491 = v489;
  struct std__basic_ostream_char__std__char_traits_char__* t493 = __os491;
  struct std__basic_ostream_char__std__char_traits_char__* r494 = std__ostream__flush(t493);
  __retval492 = r494;
  struct std__basic_ostream_char__std__char_traits_char__* t495 = __retval492;
  return t495;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v496) {
bb497:
  struct std__ctype_char_* __f498;
  struct std__ctype_char_* __retval499;
  __f498 = v496;
    struct std__ctype_char_* t500 = __f498;
    _Bool cast501 = (_Bool)t500;
    _Bool u502 = !cast501;
    if (u502) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t503 = __f498;
  __retval499 = t503;
  struct std__ctype_char_* t504 = __retval499;
  return t504;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v505, char v506) {
bb507:
  struct std__ctype_char_* this508;
  char __c509;
  char __retval510;
  this508 = v505;
  __c509 = v506;
  struct std__ctype_char_* t511 = this508;
    char t512 = t511->_M_widen_ok;
    _Bool cast513 = (_Bool)t512;
    if (cast513) {
      char t514 = __c509;
      unsigned char cast515 = (unsigned char)t514;
      unsigned long cast516 = (unsigned long)cast515;
      char t517 = t511->_M_widen[cast516];
      __retval510 = t517;
      char t518 = __retval510;
      return t518;
    }
  std__ctype_char____M_widen_init___const(t511);
  char t519 = __c509;
  void** v520 = (void**)t511;
  void* v521 = *((void**)v520);
  char vcall524 = (char)__VERIFIER_virtual_call_char_char(t511, 6, t519);
  __retval510 = vcall524;
  char t525 = __retval510;
  return t525;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v526, char v527) {
bb528:
  struct std__basic_ios_char__std__char_traits_char__* this529;
  char __c530;
  char __retval531;
  this529 = v526;
  __c530 = v527;
  struct std__basic_ios_char__std__char_traits_char__* t532 = this529;
  struct std__ctype_char_* t533 = t532->_M_ctype;
  struct std__ctype_char_* r534 = std__ctype_char__const__std____check_facet_std__ctype_char___(t533);
  char t535 = __c530;
  char r536 = std__ctype_char___widen_char__const(r534, t535);
  __retval531 = r536;
  char t537 = __retval531;
  return t537;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v538) {
bb539:
  struct std__basic_ostream_char__std__char_traits_char__* __os540;
  struct std__basic_ostream_char__std__char_traits_char__* __retval541;
  __os540 = v538;
  struct std__basic_ostream_char__std__char_traits_char__* t542 = __os540;
  struct std__basic_ostream_char__std__char_traits_char__* t543 = __os540;
  void** v544 = (void**)t543;
  void* v545 = *((void**)v544);
  unsigned char* cast546 = (unsigned char*)v545;
  long c547 = -24;
  unsigned char* ptr548 = &(cast546)[c547];
  long* cast549 = (long*)ptr548;
  long t550 = *cast549;
  unsigned char* cast551 = (unsigned char*)t543;
  unsigned char* ptr552 = &(cast551)[t550];
  struct std__basic_ostream_char__std__char_traits_char__* cast553 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr552;
  struct std__basic_ios_char__std__char_traits_char__* cast554 = (struct std__basic_ios_char__std__char_traits_char__*)cast553;
  char c555 = 10;
  char r556 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast554, c555);
  struct std__basic_ostream_char__std__char_traits_char__* r557 = std__ostream__put(t542, r556);
  struct std__basic_ostream_char__std__char_traits_char__* r558 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r557);
  __retval541 = r558;
  struct std__basic_ostream_char__std__char_traits_char__* t559 = __retval541;
  return t559;
}

// function: main
int main() {
bb560:
  int __retval561;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str1562;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2563;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str3564;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp0565;
  struct std__allocator_char_ ref_tmp1566;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup567;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp2568;
  struct std__allocator_char_ ref_tmp3569;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup570;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp4571;
  struct std__allocator_char_ ref_tmp5572;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup573;
  int c574 = 0;
  __retval561 = c574;
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str1562);
    _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str2563);
      _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str3564);
        char* cast575 = (char*)&(_str);
        std__allocator_char___allocator_2(&ref_tmp1566);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&ref_tmp0565, cast575, &ref_tmp1566);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r576 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&str1562, &ref_tmp0565);
            tmp_exprcleanup567 = r576;
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0565);
          }
        {
          std__allocator_char____allocator(&ref_tmp1566);
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t577 = tmp_exprcleanup567;
        char* cast578 = (char*)&(_str_1);
        std__allocator_char___allocator_2(&ref_tmp3569);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&ref_tmp2568, cast578, &ref_tmp3569);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r579 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&str2563, &ref_tmp2568);
            tmp_exprcleanup570 = r579;
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp2568);
          }
        {
          std__allocator_char____allocator(&ref_tmp3569);
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t580 = tmp_exprcleanup570;
        char* cast581 = (char*)&(_str_2);
        std__allocator_char___allocator_2(&ref_tmp5572);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&ref_tmp4571, cast581, &ref_tmp5572);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r582 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&str3564, &ref_tmp4571);
            tmp_exprcleanup573 = r582;
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp4571);
          }
        {
          std__allocator_char____allocator(&ref_tmp5572);
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t583 = tmp_exprcleanup573;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r584 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(&str1562, &str2563);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r585 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(&str1562, &str3564);
        char* cast586 = (char*)&(_str_3);
        _Bool r587 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1562, cast586);
        if (r587) {
        } else {
          char* cast588 = (char*)&(_str_4);
          char* c589 = _str_5;
          unsigned int c590 = 22;
          char* cast591 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast588, c589, c590, cast591);
        }
        struct std__basic_ostream_char__std__char_traits_char__* r592 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str3564);
        struct std__basic_ostream_char__std__char_traits_char__* r593 = std__ostream__operator___std__ostream_____(r592, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        int c594 = 0;
        __retval561 = c594;
        int t595 = __retval561;
        int ret_val596 = t595;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str3564);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str2563);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str1562);
        }
        return ret_val596;
  int t597 = __retval561;
  return t597;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v598) {
bb599:
  char* __r600;
  char* __retval601;
  __r600 = v598;
  char* t602 = __r600;
  __retval601 = t602;
  char* t603 = __retval601;
  return t603;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v604) {
bb605:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this606;
  char* __retval607;
  this606 = v604;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t608 = this606;
  char* cast609 = (char*)&(t608->field2._M_local_buf);
  char* r610 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast609);
  __retval607 = r610;
  char* t611 = __retval607;
  return t611;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v612, char* v613, struct std__allocator_char_* v614) {
bb615:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this616;
  char* __dat617;
  struct std__allocator_char_* __a618;
  this616 = v612;
  __dat617 = v613;
  __a618 = v614;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t619 = this616;
  struct std__allocator_char_* base620 = (struct std__allocator_char_*)((char *)t619 + 0);
  struct std__allocator_char_* t621 = __a618;
  std__allocator_char___allocator(base620, t621);
    char* t622 = __dat617;
    t619->_M_p = t622;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb623:
  _Bool __retval624;
    _Bool c625 = 0;
    __retval624 = c625;
    _Bool t626 = __retval624;
    return t626;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v627) {
bb628:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this629;
  this629 = v627;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t630 = this629;
    _Bool r631 = std__is_constant_evaluated();
    if (r631) {
        unsigned long __i632;
        unsigned long c633 = 0;
        __i632 = c633;
        while (1) {
          unsigned long t635 = __i632;
          unsigned long c636 = 15;
          _Bool c637 = ((t635 <= c636)) ? 1 : 0;
          if (!c637) break;
          char c638 = 0;
          unsigned long t639 = __i632;
          t630->field2._M_local_buf[t639] = c638;
        for_step634: ;
          unsigned long t640 = __i632;
          unsigned long u641 = t640 + 1;
          __i632 = u641;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v642, unsigned long v643) {
bb644:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this645;
  unsigned long __length646;
  this645 = v642;
  __length646 = v643;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t647 = this645;
  unsigned long t648 = __length646;
  t647->_M_string_length = t648;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb649:
  _Bool __retval650;
    _Bool c651 = 0;
    __retval650 = c651;
    _Bool t652 = __retval650;
    return t652;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v653, char* v654) {
bb655:
  char* __location656;
  char* __args657;
  char* __retval658;
  void* __loc659;
  __location656 = v653;
  __args657 = v654;
  char* t660 = __location656;
  void* cast661 = (void*)t660;
  __loc659 = cast661;
    void* t662 = __loc659;
    char* cast663 = (char*)t662;
    char* t664 = __args657;
    char t665 = *t664;
    *cast663 = t665;
    __retval658 = cast663;
    char* t666 = __retval658;
    return t666;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v667, char* v668) {
bb669:
  char* __c1670;
  char* __c2671;
  __c1670 = v667;
  __c2671 = v668;
    _Bool r672 = std____is_constant_evaluated();
    if (r672) {
      char* t673 = __c1670;
      char* t674 = __c2671;
      char* r675 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t673, t674);
    } else {
      char* t676 = __c2671;
      char t677 = *t676;
      char* t678 = __c1670;
      *t678 = t677;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v679) {
bb680:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this681;
  char* __retval682;
  this681 = v679;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t683 = this681;
  char* t684 = t683->_M_dataplus._M_p;
  __retval682 = t684;
  char* t685 = __retval682;
  return t685;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v686, unsigned long v687) {
bb688:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this689;
  unsigned long __n690;
  char ref_tmp0691;
  this689 = v686;
  __n690 = v687;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t692 = this689;
  unsigned long t693 = __n690;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t692, t693);
  unsigned long t694 = __n690;
  char* r695 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t692);
  char* ptr696 = &(r695)[t694];
  char c697 = 0;
  ref_tmp0691 = c697;
  std__char_traits_char___assign(ptr696, &ref_tmp0691);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v698) {
bb699:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this700;
  this700 = v698;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t701 = this700;
  {
    struct std__allocator_char_* base702 = (struct std__allocator_char_*)((char *)t701 + 0);
    std__allocator_char____allocator(base702);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v703, struct std____new_allocator_char_* v704) {
bb705:
  struct std____new_allocator_char_* this706;
  struct std____new_allocator_char_* unnamed707;
  this706 = v703;
  unnamed707 = v704;
  struct std____new_allocator_char_* t708 = this706;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v709, struct std__allocator_char_* v710) {
bb711:
  struct std__allocator_char_* this712;
  struct std__allocator_char_* __a713;
  this712 = v709;
  __a713 = v710;
  struct std__allocator_char_* t714 = this712;
  struct std____new_allocator_char_* base715 = (struct std____new_allocator_char_*)((char *)t714 + 0);
  struct std__allocator_char_* t716 = __a713;
  struct std____new_allocator_char_* base717 = (struct std____new_allocator_char_*)((char *)t716 + 0);
  std____new_allocator_char_____new_allocator(base715, base717);
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v718) {
bb719:
  struct std____new_allocator_char_* this720;
  this720 = v718;
  struct std____new_allocator_char_* t721 = this720;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v722, char* v723, struct std__allocator_char_* v724) {
bb725:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this726;
  char* __dat727;
  struct std__allocator_char_* __a728;
  this726 = v722;
  __dat727 = v723;
  __a728 = v724;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t729 = this726;
  struct std__allocator_char_* base730 = (struct std__allocator_char_*)((char *)t729 + 0);
  struct std__allocator_char_* t731 = __a728;
  std__allocator_char___allocator(base730, t731);
    char* t732 = __dat727;
    t729->_M_p = t732;
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v733, char* v734) {
bb735:
  char* __c1736;
  char* __c2737;
  _Bool __retval738;
  __c1736 = v733;
  __c2737 = v734;
  char* t739 = __c1736;
  char t740 = *t739;
  int cast741 = (int)t740;
  char* t742 = __c2737;
  char t743 = *t742;
  int cast744 = (int)t743;
  _Bool c745 = ((cast741 == cast744)) ? 1 : 0;
  __retval738 = c745;
  _Bool t746 = __retval738;
  return t746;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v747) {
bb748:
  char* __p749;
  unsigned long __retval750;
  unsigned long __i751;
  __p749 = v747;
  unsigned long c752 = 0;
  __i751 = c752;
    char ref_tmp0753;
    while (1) {
      unsigned long t754 = __i751;
      char* t755 = __p749;
      char* ptr756 = &(t755)[t754];
      char c757 = 0;
      ref_tmp0753 = c757;
      _Bool r758 = __gnu_cxx__char_traits_char___eq(ptr756, &ref_tmp0753);
      _Bool u759 = !r758;
      if (!u759) break;
      unsigned long t760 = __i751;
      unsigned long u761 = t760 + 1;
      __i751 = u761;
    }
  unsigned long t762 = __i751;
  __retval750 = t762;
  unsigned long t763 = __retval750;
  return t763;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v764) {
bb765:
  char* __s766;
  unsigned long __retval767;
  __s766 = v764;
    _Bool r768 = std____is_constant_evaluated();
    if (r768) {
      char* t769 = __s766;
      unsigned long r770 = __gnu_cxx__char_traits_char___length(t769);
      __retval767 = r770;
      unsigned long t771 = __retval767;
      return t771;
    }
  char* t772 = __s766;
  unsigned long r773 = strlen(t772);
  __retval767 = r773;
  unsigned long t774 = __retval767;
  return t774;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v775, char* v776, struct std__random_access_iterator_tag v777) {
bb778:
  char* __first779;
  char* __last780;
  struct std__random_access_iterator_tag unnamed781;
  long __retval782;
  __first779 = v775;
  __last780 = v776;
  unnamed781 = v777;
  char* t783 = __last780;
  char* t784 = __first779;
  long diff785 = t783 - t784;
  __retval782 = diff785;
  long t786 = __retval782;
  return t786;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v787) {
bb788:
  char** unnamed789;
  struct std__random_access_iterator_tag __retval790;
  unnamed789 = v787;
  struct std__random_access_iterator_tag t791 = __retval790;
  return t791;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v792, char* v793) {
bb794:
  char* __first795;
  char* __last796;
  long __retval797;
  struct std__random_access_iterator_tag agg_tmp0798;
  __first795 = v792;
  __last796 = v793;
  char* t799 = __first795;
  char* t800 = __last796;
  struct std__random_access_iterator_tag r801 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first795);
  agg_tmp0798 = r801;
  struct std__random_access_iterator_tag t802 = agg_tmp0798;
  long r803 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t799, t800, t802);
  __retval797 = r803;
  long t804 = __retval797;
  return t804;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v805, char* v806) {
bb807:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this808;
  char* __p809;
  this808 = v805;
  __p809 = v806;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t810 = this808;
  char* t811 = __p809;
  t810->_M_dataplus._M_p = t811;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v812) {
bb813:
  struct std__allocator_char_* __a814;
  unsigned long __retval815;
  __a814 = v812;
  unsigned long c816 = -1;
  unsigned long c817 = 1;
  unsigned long b818 = c816 / c817;
  __retval815 = b818;
  unsigned long t819 = __retval815;
  return t819;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v820) {
bb821:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this822;
  struct std__allocator_char_* __retval823;
  this822 = v820;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t824 = this822;
  struct std__allocator_char_* base825 = (struct std__allocator_char_*)((char *)&(t824->_M_dataplus) + 0);
  __retval823 = base825;
  struct std__allocator_char_* t826 = __retval823;
  return t826;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v827, unsigned long* v828) {
bb829:
  unsigned long* __a830;
  unsigned long* __b831;
  unsigned long* __retval832;
  __a830 = v827;
  __b831 = v828;
    unsigned long* t833 = __b831;
    unsigned long t834 = *t833;
    unsigned long* t835 = __a830;
    unsigned long t836 = *t835;
    _Bool c837 = ((t834 < t836)) ? 1 : 0;
    if (c837) {
      unsigned long* t838 = __b831;
      __retval832 = t838;
      unsigned long* t839 = __retval832;
      return t839;
    }
  unsigned long* t840 = __a830;
  __retval832 = t840;
  unsigned long* t841 = __retval832;
  return t841;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v842) {
bb843:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this844;
  unsigned long __retval845;
  unsigned long __diffmax846;
  unsigned long __allocmax847;
  this844 = v842;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t848 = this844;
  unsigned long c849 = 9223372036854775807;
  __diffmax846 = c849;
  struct std__allocator_char_* r850 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t848);
  unsigned long r851 = std__allocator_traits_std__allocator_char_____max_size(r850);
  __allocmax847 = r851;
  unsigned long* r852 = unsigned_long_const__std__min_unsigned_long_(&__diffmax846, &__allocmax847);
  unsigned long t853 = *r852;
  unsigned long c854 = 1;
  unsigned long b855 = t853 - c854;
  __retval845 = b855;
  unsigned long t856 = __retval845;
  return t856;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v857) {
bb858:
  struct std____new_allocator_char_* this859;
  unsigned long __retval860;
  this859 = v857;
  struct std____new_allocator_char_* t861 = this859;
  unsigned long c862 = 9223372036854775807;
  unsigned long c863 = 1;
  unsigned long b864 = c862 / c863;
  __retval860 = b864;
  unsigned long t865 = __retval860;
  return t865;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v866, unsigned long v867, void* v868) {
bb869:
  struct std____new_allocator_char_* this870;
  unsigned long __n871;
  void* unnamed872;
  char* __retval873;
  this870 = v866;
  __n871 = v867;
  unnamed872 = v868;
  struct std____new_allocator_char_* t874 = this870;
    unsigned long t875 = __n871;
    unsigned long r876 = std____new_allocator_char____M_max_size___const(t874);
    _Bool c877 = ((t875 > r876)) ? 1 : 0;
    if (c877) {
        unsigned long t878 = __n871;
        unsigned long c879 = -1;
        unsigned long c880 = 1;
        unsigned long b881 = c879 / c880;
        _Bool c882 = ((t878 > b881)) ? 1 : 0;
        if (c882) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c883 = 1;
    unsigned long c884 = 16;
    _Bool c885 = ((c883 > c884)) ? 1 : 0;
    if (c885) {
      unsigned long __al886;
      unsigned long c887 = 1;
      __al886 = c887;
      unsigned long t888 = __n871;
      unsigned long c889 = 1;
      unsigned long b890 = t888 * c889;
      unsigned long t891 = __al886;
      void* r892 = operator_new_2(b890, t891);
      char* cast893 = (char*)r892;
      __retval873 = cast893;
      char* t894 = __retval873;
      return t894;
    }
  unsigned long t895 = __n871;
  unsigned long c896 = 1;
  unsigned long b897 = t895 * c896;
  void* r898 = operator_new(b897);
  char* cast899 = (char*)r898;
  __retval873 = cast899;
  char* t900 = __retval873;
  return t900;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v901, unsigned long v902) {
bb903:
  struct std__allocator_char_* this904;
  unsigned long __n905;
  char* __retval906;
  this904 = v901;
  __n905 = v902;
  struct std__allocator_char_* t907 = this904;
    _Bool r908 = std____is_constant_evaluated();
    if (r908) {
        unsigned long t909 = __n905;
        unsigned long c910 = 1;
        unsigned long ovr911;
        _Bool ovf912 = __builtin_mul_overflow(t909, c910, &ovr911);
        __n905 = ovr911;
        if (ovf912) {
          std____throw_bad_array_new_length();
        }
      unsigned long t913 = __n905;
      void* r914 = operator_new(t913);
      char* cast915 = (char*)r914;
      __retval906 = cast915;
      char* t916 = __retval906;
      return t916;
    }
  struct std____new_allocator_char_* base917 = (struct std____new_allocator_char_*)((char *)t907 + 0);
  unsigned long t918 = __n905;
  void* c919 = ((void*)0);
  char* r920 = std____new_allocator_char___allocate(base917, t918, c919);
  __retval906 = r920;
  char* t921 = __retval906;
  return t921;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v922, unsigned long v923) {
bb924:
  struct std__allocator_char_* __a925;
  unsigned long __n926;
  char* __retval927;
  __a925 = v922;
  __n926 = v923;
  struct std__allocator_char_* t928 = __a925;
  unsigned long t929 = __n926;
  char* r930 = std__allocator_char___allocate(t928, t929);
  __retval927 = r930;
  char* t931 = __retval927;
  return t931;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v932, unsigned long v933) {
bb934:
  struct std__allocator_char_* __a935;
  unsigned long __n936;
  char* __retval937;
  char* __p938;
  __a935 = v932;
  __n936 = v933;
  struct std__allocator_char_* t939 = __a935;
  unsigned long t940 = __n936;
  char* r941 = std__allocator_traits_std__allocator_char_____allocate(t939, t940);
  __p938 = r941;
  char* t942 = __p938;
  __retval937 = t942;
  char* t943 = __retval937;
  return t943;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v944) {
bb945:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this946;
  struct std__allocator_char_* __retval947;
  this946 = v944;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t948 = this946;
  struct std__allocator_char_* base949 = (struct std__allocator_char_*)((char *)&(t948->_M_dataplus) + 0);
  __retval947 = base949;
  struct std__allocator_char_* t950 = __retval947;
  return t950;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v951, unsigned long* v952, unsigned long v953) {
bb954:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this955;
  unsigned long* __capacity956;
  unsigned long __old_capacity957;
  char* __retval958;
  this955 = v951;
  __capacity956 = v952;
  __old_capacity957 = v953;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t959 = this955;
    unsigned long* t960 = __capacity956;
    unsigned long t961 = *t960;
    unsigned long r962 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t959);
    _Bool c963 = ((t961 > r962)) ? 1 : 0;
    if (c963) {
      char* cast964 = (char*)&(_str_7);
      std____throw_length_error(cast964);
    }
    unsigned long* t965 = __capacity956;
    unsigned long t966 = *t965;
    unsigned long t967 = __old_capacity957;
    _Bool c968 = ((t966 > t967)) ? 1 : 0;
    _Bool ternary969;
    if (c968) {
      unsigned long* t970 = __capacity956;
      unsigned long t971 = *t970;
      unsigned long c972 = 2;
      unsigned long t973 = __old_capacity957;
      unsigned long b974 = c972 * t973;
      _Bool c975 = ((t971 < b974)) ? 1 : 0;
      ternary969 = (_Bool)c975;
    } else {
      _Bool c976 = 0;
      ternary969 = (_Bool)c976;
    }
    if (ternary969) {
      unsigned long c977 = 2;
      unsigned long t978 = __old_capacity957;
      unsigned long b979 = c977 * t978;
      unsigned long* t980 = __capacity956;
      *t980 = b979;
        unsigned long* t981 = __capacity956;
        unsigned long t982 = *t981;
        unsigned long r983 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t959);
        _Bool c984 = ((t982 > r983)) ? 1 : 0;
        if (c984) {
          unsigned long r985 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t959);
          unsigned long* t986 = __capacity956;
          *t986 = r985;
        }
    }
  struct std__allocator_char_* r987 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t959);
  unsigned long* t988 = __capacity956;
  unsigned long t989 = *t988;
  unsigned long c990 = 1;
  unsigned long b991 = t989 + c990;
  char* r992 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r987, b991);
  __retval958 = r992;
  char* t993 = __retval958;
  return t993;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v994, unsigned long v995) {
bb996:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this997;
  unsigned long __capacity998;
  this997 = v994;
  __capacity998 = v995;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t999 = this997;
  unsigned long t1000 = __capacity998;
  t999->field2._M_allocated_capacity = t1000;
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1001, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1002) {
bb1003:
  struct _Guard* this1004;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1005;
  this1004 = v1001;
  __s1005 = v1002;
  struct _Guard* t1006 = this1004;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1007 = __s1005;
  t1006->_M_guarded = t1007;
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1008, char* v1009, unsigned long v1010) {
bb1011:
  char* __s11012;
  char* __s21013;
  unsigned long __n1014;
  char* __retval1015;
  __s11012 = v1008;
  __s21013 = v1009;
  __n1014 = v1010;
    unsigned long t1016 = __n1014;
    unsigned long c1017 = 0;
    _Bool c1018 = ((t1016 == c1017)) ? 1 : 0;
    if (c1018) {
      char* t1019 = __s11012;
      __retval1015 = t1019;
      char* t1020 = __retval1015;
      return t1020;
    }
    _Bool r1021 = std____is_constant_evaluated();
    if (r1021) {
        unsigned long __i1022;
        unsigned long c1023 = 0;
        __i1022 = c1023;
        while (1) {
          unsigned long t1025 = __i1022;
          unsigned long t1026 = __n1014;
          _Bool c1027 = ((t1025 < t1026)) ? 1 : 0;
          if (!c1027) break;
          char* t1028 = __s11012;
          unsigned long t1029 = __i1022;
          char* ptr1030 = &(t1028)[t1029];
          unsigned long t1031 = __i1022;
          char* t1032 = __s21013;
          char* ptr1033 = &(t1032)[t1031];
          char* r1034 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1030, ptr1033);
        for_step1024: ;
          unsigned long t1035 = __i1022;
          unsigned long u1036 = t1035 + 1;
          __i1022 = u1036;
        }
      char* t1037 = __s11012;
      __retval1015 = t1037;
      char* t1038 = __retval1015;
      return t1038;
    }
  char* t1039 = __s11012;
  void* cast1040 = (void*)t1039;
  char* t1041 = __s21013;
  void* cast1042 = (void*)t1041;
  unsigned long t1043 = __n1014;
  unsigned long c1044 = 1;
  unsigned long b1045 = t1043 * c1044;
  void* r1046 = memcpy(cast1040, cast1042, b1045);
  char* t1047 = __s11012;
  __retval1015 = t1047;
  char* t1048 = __retval1015;
  return t1048;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1049, char* v1050, unsigned long v1051) {
bb1052:
  char* __s11053;
  char* __s21054;
  unsigned long __n1055;
  char* __retval1056;
  __s11053 = v1049;
  __s21054 = v1050;
  __n1055 = v1051;
    unsigned long t1057 = __n1055;
    unsigned long c1058 = 0;
    _Bool c1059 = ((t1057 == c1058)) ? 1 : 0;
    if (c1059) {
      char* t1060 = __s11053;
      __retval1056 = t1060;
      char* t1061 = __retval1056;
      return t1061;
    }
    _Bool r1062 = std____is_constant_evaluated();
    if (r1062) {
      char* t1063 = __s11053;
      char* t1064 = __s21054;
      unsigned long t1065 = __n1055;
      char* r1066 = __gnu_cxx__char_traits_char___copy(t1063, t1064, t1065);
      __retval1056 = r1066;
      char* t1067 = __retval1056;
      return t1067;
    }
  char* t1068 = __s11053;
  void* cast1069 = (void*)t1068;
  char* t1070 = __s21054;
  void* cast1071 = (void*)t1070;
  unsigned long t1072 = __n1055;
  void* r1073 = memcpy(cast1069, cast1071, t1072);
  char* cast1074 = (char*)r1073;
  __retval1056 = cast1074;
  char* t1075 = __retval1056;
  return t1075;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1076, char* v1077, unsigned long v1078) {
bb1079:
  char* __d1080;
  char* __s1081;
  unsigned long __n1082;
  __d1080 = v1076;
  __s1081 = v1077;
  __n1082 = v1078;
    unsigned long t1083 = __n1082;
    unsigned long c1084 = 1;
    _Bool c1085 = ((t1083 == c1084)) ? 1 : 0;
    if (c1085) {
      char* t1086 = __d1080;
      char* t1087 = __s1081;
      std__char_traits_char___assign(t1086, t1087);
    } else {
      char* t1088 = __d1080;
      char* t1089 = __s1081;
      unsigned long t1090 = __n1082;
      char* r1091 = std__char_traits_char___copy(t1088, t1089, t1090);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1092) {
bb1093:
  char* __it1094;
  char* __retval1095;
  __it1094 = v1092;
  char* t1096 = __it1094;
  __retval1095 = t1096;
  char* t1097 = __retval1095;
  return t1097;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1098, char* v1099, char* v1100) {
bb1101:
  char* __p1102;
  char* __k11103;
  char* __k21104;
  __p1102 = v1098;
  __k11103 = v1099;
  __k21104 = v1100;
    char* t1105 = __p1102;
    char* t1106 = __k11103;
    char* r1107 = char_const__std____niter_base_char_const__(t1106);
    char* t1108 = __k21104;
    char* t1109 = __k11103;
    long diff1110 = t1108 - t1109;
    unsigned long cast1111 = (unsigned long)diff1110;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1105, r1107, cast1111);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1112) {
bb1113:
  struct _Guard* this1114;
  this1114 = v1112;
  struct _Guard* t1115 = this1114;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1116 = t1115->_M_guarded;
    _Bool cast1117 = (_Bool)t1116;
    if (cast1117) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1118 = t1115->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1118);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1119, char* v1120, char* v1121, struct std__forward_iterator_tag v1122) {
bb1123:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1124;
  char* __beg1125;
  char* __end1126;
  struct std__forward_iterator_tag unnamed1127;
  unsigned long __dnew1128;
  struct _Guard __guard1129;
  this1124 = v1119;
  __beg1125 = v1120;
  __end1126 = v1121;
  unnamed1127 = v1122;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1130 = this1124;
  char* t1131 = __beg1125;
  char* t1132 = __end1126;
  long r1133 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1131, t1132);
  unsigned long cast1134 = (unsigned long)r1133;
  __dnew1128 = cast1134;
    unsigned long t1135 = __dnew1128;
    unsigned long c1136 = 15;
    _Bool c1137 = ((t1135 > c1136)) ? 1 : 0;
    if (c1137) {
      unsigned long c1138 = 0;
      char* r1139 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1130, &__dnew1128, c1138);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1130, r1139);
      unsigned long t1140 = __dnew1128;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1130, t1140);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1130);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1129, t1130);
    char* r1141 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1130);
    char* t1142 = __beg1125;
    char* t1143 = __end1126;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1141, t1142, t1143);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1144 = ((void*)0);
    __guard1129._M_guarded = c1144;
    unsigned long t1145 = __dnew1128;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1130, t1145);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1129);
  }
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1146) {
bb1147:
  char* __r1148;
  char* __retval1149;
  __r1148 = v1146;
  char* t1150 = __r1148;
  __retval1149 = t1150;
  char* t1151 = __retval1149;
  return t1151;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1152) {
bb1153:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1154;
  char* __retval1155;
  this1154 = v1152;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1156 = this1154;
  char* cast1157 = (char*)&(t1156->field2._M_local_buf);
  char* r1158 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1157);
  __retval1155 = r1158;
  char* t1159 = __retval1155;
  return t1159;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1160) {
bb1161:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1162;
  _Bool __retval1163;
  this1162 = v1160;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1164 = this1162;
    char* r1165 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1164);
    char* r1166 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1164);
    _Bool c1167 = ((r1165 == r1166)) ? 1 : 0;
    if (c1167) {
        unsigned long t1168 = t1164->_M_string_length;
        unsigned long c1169 = 15;
        _Bool c1170 = ((t1168 > c1169)) ? 1 : 0;
        if (c1170) {
          __builtin_unreachable();
        }
      _Bool c1171 = 1;
      __retval1163 = c1171;
      _Bool t1172 = __retval1163;
      return t1172;
    }
  _Bool c1173 = 0;
  __retval1163 = c1173;
  _Bool t1174 = __retval1163;
  return t1174;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1175, char* v1176, unsigned long v1177) {
bb1178:
  struct std____new_allocator_char_* this1179;
  char* __p1180;
  unsigned long __n1181;
  this1179 = v1175;
  __p1180 = v1176;
  __n1181 = v1177;
  struct std____new_allocator_char_* t1182 = this1179;
    unsigned long c1183 = 1;
    unsigned long c1184 = 16;
    _Bool c1185 = ((c1183 > c1184)) ? 1 : 0;
    if (c1185) {
      char* t1186 = __p1180;
      void* cast1187 = (void*)t1186;
      unsigned long t1188 = __n1181;
      unsigned long c1189 = 1;
      unsigned long b1190 = t1188 * c1189;
      unsigned long c1191 = 1;
      operator_delete_3(cast1187, b1190, c1191);
      return;
    }
  char* t1192 = __p1180;
  void* cast1193 = (void*)t1192;
  unsigned long t1194 = __n1181;
  unsigned long c1195 = 1;
  unsigned long b1196 = t1194 * c1195;
  operator_delete_2(cast1193, b1196);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1197, char* v1198, unsigned long v1199) {
bb1200:
  struct std__allocator_char_* this1201;
  char* __p1202;
  unsigned long __n1203;
  this1201 = v1197;
  __p1202 = v1198;
  __n1203 = v1199;
  struct std__allocator_char_* t1204 = this1201;
    _Bool r1205 = std____is_constant_evaluated();
    if (r1205) {
      char* t1206 = __p1202;
      void* cast1207 = (void*)t1206;
      operator_delete(cast1207);
      return;
    }
  struct std____new_allocator_char_* base1208 = (struct std____new_allocator_char_*)((char *)t1204 + 0);
  char* t1209 = __p1202;
  unsigned long t1210 = __n1203;
  std____new_allocator_char___deallocate(base1208, t1209, t1210);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1211, char* v1212, unsigned long v1213) {
bb1214:
  struct std__allocator_char_* __a1215;
  char* __p1216;
  unsigned long __n1217;
  __a1215 = v1211;
  __p1216 = v1212;
  __n1217 = v1213;
  struct std__allocator_char_* t1218 = __a1215;
  char* t1219 = __p1216;
  unsigned long t1220 = __n1217;
  std__allocator_char___deallocate(t1218, t1219, t1220);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1221, unsigned long v1222) {
bb1223:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1224;
  unsigned long __size1225;
  this1224 = v1221;
  __size1225 = v1222;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1226 = this1224;
  struct std__allocator_char_* r1227 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1226);
  char* r1228 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1226);
  unsigned long t1229 = __size1225;
  unsigned long c1230 = 1;
  unsigned long b1231 = t1229 + c1230;
  std__allocator_traits_std__allocator_char_____deallocate(r1227, r1228, b1231);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1232) {
bb1233:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1234;
  this1234 = v1232;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1235 = this1234;
    _Bool r1236 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1235);
    _Bool u1237 = !r1236;
    if (u1237) {
      unsigned long t1238 = t1235->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1235, t1238);
    }
  return;
}

