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
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[12] = "Test string";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[8] = "Test ==";
char _str_2[10] = "Test s ==";
char _str_3[11] = "Test st ==";
char _str_4[6] = "Test ";
char _str_5[7] = "Test s";
char _str_6[8] = "Test st";
char _str_7[63] = "(str2 != \"Test \") && (str3 != \"Test s\") && (str4 != \"Test st\")";
char _str_8[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_at_6_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_9[50] = "basic_string: construction from null is not valid";
char _str_10[24] = "basic_string::_M_create";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
char _str_11[68] = "basic_string::at: __n (which is %zu) >= this->size() (which is %zu)";
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
extern void std____throw_out_of_range_fmt(char* p0, ...);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____at(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____push_back(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
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
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
        char* cast27 = (char*)&(_str_9);
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

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE2atEm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____at(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v225, unsigned long v226) {
bb227:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this228;
  unsigned long __n229;
  char* __retval230;
  this228 = v225;
  __n229 = v226;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t231 = this228;
    unsigned long t232 = __n229;
    unsigned long r233 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t231);
    _Bool c234 = ((t232 >= r233)) ? 1 : 0;
    if (c234) {
      char* cast235 = (char*)&(_str_11);
      unsigned long t236 = __n229;
      unsigned long r237 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t231);
      std____throw_out_of_range_fmt(cast235, t236, r237);
    }
  unsigned long t238 = __n229;
  char* r239 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t231);
  char* ptr240 = &(r239)[t238];
  __retval230 = ptr240;
  char* t241 = __retval230;
  return t241;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v242, unsigned long v243, unsigned long v244, char* v245, unsigned long v246) {
bb247:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this248;
  unsigned long __pos249;
  unsigned long __len1250;
  char* __s251;
  unsigned long __len2252;
  unsigned long __how_much253;
  unsigned long __new_capacity254;
  char* __r255;
  this248 = v242;
  __pos249 = v243;
  __len1250 = v244;
  __s251 = v245;
  __len2252 = v246;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t256 = this248;
  unsigned long r257 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t256);
  unsigned long t258 = __pos249;
  unsigned long b259 = r257 - t258;
  unsigned long t260 = __len1250;
  unsigned long b261 = b259 - t260;
  __how_much253 = b261;
  unsigned long r262 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t256);
  unsigned long t263 = __len2252;
  unsigned long b264 = r262 + t263;
  unsigned long t265 = __len1250;
  unsigned long b266 = b264 - t265;
  __new_capacity254 = b266;
  unsigned long r267 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t256);
  char* r268 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t256, &__new_capacity254, r267);
  __r255 = r268;
    unsigned long t269 = __pos249;
    _Bool cast270 = (_Bool)t269;
    if (cast270) {
      char* t271 = __r255;
      char* r272 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t256);
      unsigned long t273 = __pos249;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t271, r272, t273);
    }
    char* t274 = __s251;
    _Bool cast275 = (_Bool)t274;
    _Bool ternary276;
    if (cast275) {
      unsigned long t277 = __len2252;
      _Bool cast278 = (_Bool)t277;
      ternary276 = (_Bool)cast278;
    } else {
      _Bool c279 = 0;
      ternary276 = (_Bool)c279;
    }
    if (ternary276) {
      char* t280 = __r255;
      unsigned long t281 = __pos249;
      char* ptr282 = &(t280)[t281];
      char* t283 = __s251;
      unsigned long t284 = __len2252;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr282, t283, t284);
    }
    unsigned long t285 = __how_much253;
    _Bool cast286 = (_Bool)t285;
    if (cast286) {
      char* t287 = __r255;
      unsigned long t288 = __pos249;
      char* ptr289 = &(t287)[t288];
      unsigned long t290 = __len2252;
      char* ptr291 = &(ptr289)[t290];
      char* r292 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t256);
      unsigned long t293 = __pos249;
      char* ptr294 = &(r292)[t293];
      unsigned long t295 = __len1250;
      char* ptr296 = &(ptr294)[t295];
      unsigned long t297 = __how_much253;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr291, ptr296, t297);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t256);
  char* t298 = __r255;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t256, t298);
  unsigned long t299 = __new_capacity254;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t256, t299);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9push_backEc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____push_back(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v300, char v301) {
bb302:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this303;
  char __c304;
  unsigned long __size305;
  this303 = v300;
  __c304 = v301;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t306 = this303;
  unsigned long r307 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t306);
  __size305 = r307;
    unsigned long t308 = __size305;
    unsigned long c309 = 1;
    unsigned long b310 = t308 + c309;
    unsigned long r311 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t306);
    _Bool c312 = ((b310 > r311)) ? 1 : 0;
    if (c312) {
      unsigned long t313 = __size305;
      unsigned long c314 = 0;
      char* c315 = ((void*)0);
      unsigned long c316 = 1;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t306, t313, c314, c315, c316);
    }
  unsigned long t317 = __size305;
  char* r318 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t306);
  char* ptr319 = &(r318)[t317];
  std__char_traits_char___assign(ptr319, &__c304);
  unsigned long t320 = __size305;
  unsigned long c321 = 1;
  unsigned long b322 = t320 + c321;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t306, b322);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEpLEc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v323, char v324) {
bb325:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this326;
  char __c327;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval328;
  this326 = v323;
  __c327 = v324;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t329 = this326;
  char t330 = __c327;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____push_back(t329, t330);
  __retval328 = t329;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t331 = __retval328;
  return t331;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v332, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v333) {
bb334:
  struct std__basic_ostream_char__std__char_traits_char__* __os335;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str336;
  struct std__basic_ostream_char__std__char_traits_char__* __retval337;
  __os335 = v332;
  __str336 = v333;
  struct std__basic_ostream_char__std__char_traits_char__* t338 = __os335;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t339 = __str336;
  char* r340 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t339);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t341 = __str336;
  unsigned long r342 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t341);
  long cast343 = (long)r342;
  struct std__basic_ostream_char__std__char_traits_char__* r344 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t338, r340, cast343);
  __retval337 = r344;
  struct std__basic_ostream_char__std__char_traits_char__* t345 = __retval337;
  return t345;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v346, int v347) {
bb348:
  int __a349;
  int __b350;
  int __retval351;
  __a349 = v346;
  __b350 = v347;
  int t352 = __a349;
  int t353 = __b350;
  int b354 = t352 | t353;
  __retval351 = b354;
  int t355 = __retval351;
  return t355;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v356) {
bb357:
  struct std__basic_ios_char__std__char_traits_char__* this358;
  int __retval359;
  this358 = v356;
  struct std__basic_ios_char__std__char_traits_char__* t360 = this358;
  struct std__ios_base* base361 = (struct std__ios_base*)((char *)t360 + 0);
  int t362 = base361->_M_streambuf_state;
  __retval359 = t362;
  int t363 = __retval359;
  return t363;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v364, int v365) {
bb366:
  struct std__basic_ios_char__std__char_traits_char__* this367;
  int __state368;
  this367 = v364;
  __state368 = v365;
  struct std__basic_ios_char__std__char_traits_char__* t369 = this367;
  int r370 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t369);
  int t371 = __state368;
  int r372 = std__operator_(r370, t371);
  std__basic_ios_char__std__char_traits_char_____clear(t369, r372);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v373, char* v374) {
bb375:
  struct std__basic_ostream_char__std__char_traits_char__* __out376;
  char* __s377;
  struct std__basic_ostream_char__std__char_traits_char__* __retval378;
  __out376 = v373;
  __s377 = v374;
    char* t379 = __s377;
    _Bool cast380 = (_Bool)t379;
    _Bool u381 = !cast380;
    if (u381) {
      struct std__basic_ostream_char__std__char_traits_char__* t382 = __out376;
      void** v383 = (void**)t382;
      void* v384 = *((void**)v383);
      unsigned char* cast385 = (unsigned char*)v384;
      long c386 = -24;
      unsigned char* ptr387 = &(cast385)[c386];
      long* cast388 = (long*)ptr387;
      long t389 = *cast388;
      unsigned char* cast390 = (unsigned char*)t382;
      unsigned char* ptr391 = &(cast390)[t389];
      struct std__basic_ostream_char__std__char_traits_char__* cast392 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr391;
      struct std__basic_ios_char__std__char_traits_char__* cast393 = (struct std__basic_ios_char__std__char_traits_char__*)cast392;
      int t394 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast393, t394);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t395 = __out376;
      char* t396 = __s377;
      char* t397 = __s377;
      unsigned long r398 = std__char_traits_char___length(t397);
      long cast399 = (long)r398;
      struct std__basic_ostream_char__std__char_traits_char__* r400 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t395, t396, cast399);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t401 = __out376;
  __retval378 = t401;
  struct std__basic_ostream_char__std__char_traits_char__* t402 = __retval378;
  return t402;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v403, void* v404) {
bb405:
  struct std__basic_ostream_char__std__char_traits_char__* this406;
  void* __pf407;
  struct std__basic_ostream_char__std__char_traits_char__* __retval408;
  this406 = v403;
  __pf407 = v404;
  struct std__basic_ostream_char__std__char_traits_char__* t409 = this406;
  void* t410 = __pf407;
  struct std__basic_ostream_char__std__char_traits_char__* r411 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t410)(t409);
  __retval408 = r411;
  struct std__basic_ostream_char__std__char_traits_char__* t412 = __retval408;
  return t412;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v413) {
bb414:
  struct std__basic_ostream_char__std__char_traits_char__* __os415;
  struct std__basic_ostream_char__std__char_traits_char__* __retval416;
  __os415 = v413;
  struct std__basic_ostream_char__std__char_traits_char__* t417 = __os415;
  struct std__basic_ostream_char__std__char_traits_char__* r418 = std__ostream__flush(t417);
  __retval416 = r418;
  struct std__basic_ostream_char__std__char_traits_char__* t419 = __retval416;
  return t419;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v420) {
bb421:
  struct std__ctype_char_* __f422;
  struct std__ctype_char_* __retval423;
  __f422 = v420;
    struct std__ctype_char_* t424 = __f422;
    _Bool cast425 = (_Bool)t424;
    _Bool u426 = !cast425;
    if (u426) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t427 = __f422;
  __retval423 = t427;
  struct std__ctype_char_* t428 = __retval423;
  return t428;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v429, char v430) {
bb431:
  struct std__ctype_char_* this432;
  char __c433;
  char __retval434;
  this432 = v429;
  __c433 = v430;
  struct std__ctype_char_* t435 = this432;
    char t436 = t435->_M_widen_ok;
    _Bool cast437 = (_Bool)t436;
    if (cast437) {
      char t438 = __c433;
      unsigned char cast439 = (unsigned char)t438;
      unsigned long cast440 = (unsigned long)cast439;
      char t441 = t435->_M_widen[cast440];
      __retval434 = t441;
      char t442 = __retval434;
      return t442;
    }
  std__ctype_char____M_widen_init___const(t435);
  char t443 = __c433;
  void** v444 = (void**)t435;
  void* v445 = *((void**)v444);
  char vcall448 = (char)__VERIFIER_virtual_call_char_char(t435, 6, t443);
  __retval434 = vcall448;
  char t449 = __retval434;
  return t449;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v450, char v451) {
bb452:
  struct std__basic_ios_char__std__char_traits_char__* this453;
  char __c454;
  char __retval455;
  this453 = v450;
  __c454 = v451;
  struct std__basic_ios_char__std__char_traits_char__* t456 = this453;
  struct std__ctype_char_* t457 = t456->_M_ctype;
  struct std__ctype_char_* r458 = std__ctype_char__const__std____check_facet_std__ctype_char___(t457);
  char t459 = __c454;
  char r460 = std__ctype_char___widen_char__const(r458, t459);
  __retval455 = r460;
  char t461 = __retval455;
  return t461;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v462) {
bb463:
  struct std__basic_ostream_char__std__char_traits_char__* __os464;
  struct std__basic_ostream_char__std__char_traits_char__* __retval465;
  __os464 = v462;
  struct std__basic_ostream_char__std__char_traits_char__* t466 = __os464;
  struct std__basic_ostream_char__std__char_traits_char__* t467 = __os464;
  void** v468 = (void**)t467;
  void* v469 = *((void**)v468);
  unsigned char* cast470 = (unsigned char*)v469;
  long c471 = -24;
  unsigned char* ptr472 = &(cast470)[c471];
  long* cast473 = (long*)ptr472;
  long t474 = *cast473;
  unsigned char* cast475 = (unsigned char*)t467;
  unsigned char* ptr476 = &(cast475)[t474];
  struct std__basic_ostream_char__std__char_traits_char__* cast477 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr476;
  struct std__basic_ios_char__std__char_traits_char__* cast478 = (struct std__basic_ios_char__std__char_traits_char__*)cast477;
  char c479 = 10;
  char r480 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast478, c479);
  struct std__basic_ostream_char__std__char_traits_char__* r481 = std__ostream__put(t466, r480);
  struct std__basic_ostream_char__std__char_traits_char__* r482 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r481);
  __retval465 = r482;
  struct std__basic_ostream_char__std__char_traits_char__* t483 = __retval465;
  return t483;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v484, char* v485) {
bb486:
  char* __c1487;
  char* __c2488;
  _Bool __retval489;
  __c1487 = v484;
  __c2488 = v485;
  char* t490 = __c1487;
  char t491 = *t490;
  unsigned char cast492 = (unsigned char)t491;
  int cast493 = (int)cast492;
  char* t494 = __c2488;
  char t495 = *t494;
  unsigned char cast496 = (unsigned char)t495;
  int cast497 = (int)cast496;
  _Bool c498 = ((cast493 < cast497)) ? 1 : 0;
  __retval489 = c498;
  _Bool t499 = __retval489;
  return t499;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v500, char* v501, unsigned long v502) {
bb503:
  char* __s1504;
  char* __s2505;
  unsigned long __n506;
  int __retval507;
  __s1504 = v500;
  __s2505 = v501;
  __n506 = v502;
    unsigned long t508 = __n506;
    unsigned long c509 = 0;
    _Bool c510 = ((t508 == c509)) ? 1 : 0;
    if (c510) {
      int c511 = 0;
      __retval507 = c511;
      int t512 = __retval507;
      return t512;
    }
    _Bool r513 = std____is_constant_evaluated();
    if (r513) {
        unsigned long __i514;
        unsigned long c515 = 0;
        __i514 = c515;
        while (1) {
          unsigned long t517 = __i514;
          unsigned long t518 = __n506;
          _Bool c519 = ((t517 < t518)) ? 1 : 0;
          if (!c519) break;
            unsigned long t520 = __i514;
            char* t521 = __s1504;
            char* ptr522 = &(t521)[t520];
            unsigned long t523 = __i514;
            char* t524 = __s2505;
            char* ptr525 = &(t524)[t523];
            _Bool r526 = std__char_traits_char___lt(ptr522, ptr525);
            if (r526) {
              int c527 = -1;
              __retval507 = c527;
              int t528 = __retval507;
              int ret_val529 = t528;
              return ret_val529;
            } else {
                unsigned long t530 = __i514;
                char* t531 = __s2505;
                char* ptr532 = &(t531)[t530];
                unsigned long t533 = __i514;
                char* t534 = __s1504;
                char* ptr535 = &(t534)[t533];
                _Bool r536 = std__char_traits_char___lt(ptr532, ptr535);
                if (r536) {
                  int c537 = 1;
                  __retval507 = c537;
                  int t538 = __retval507;
                  int ret_val539 = t538;
                  return ret_val539;
                }
            }
        for_step516: ;
          unsigned long t540 = __i514;
          unsigned long u541 = t540 + 1;
          __i514 = u541;
        }
      int c542 = 0;
      __retval507 = c542;
      int t543 = __retval507;
      return t543;
    }
  char* t544 = __s1504;
  void* cast545 = (void*)t544;
  char* t546 = __s2505;
  void* cast547 = (void*)t546;
  unsigned long t548 = __n506;
  int r549 = memcmp(cast545, cast547, t548);
  __retval507 = r549;
  int t550 = __retval507;
  return t550;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v551) {
bb552:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this553;
  char* __retval554;
  this553 = v551;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t555 = this553;
  char* r556 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t555);
  __retval554 = r556;
  char* t557 = __retval554;
  return t557;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v558, char* v559) {
bb560:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs561;
  char* __rhs562;
  _Bool __retval563;
  __lhs561 = v558;
  __rhs562 = v559;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t564 = __lhs561;
  unsigned long r565 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t564);
  char* t566 = __rhs562;
  unsigned long r567 = std__char_traits_char___length(t566);
  _Bool c568 = ((r565 == r567)) ? 1 : 0;
  _Bool ternary569;
  if (c568) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t570 = __lhs561;
    char* r571 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t570);
    char* t572 = __rhs562;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t573 = __lhs561;
    unsigned long r574 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t573);
    int r575 = std__char_traits_char___compare(r571, t572, r574);
    _Bool cast576 = (_Bool)r575;
    _Bool u577 = !cast576;
    ternary569 = (_Bool)u577;
  } else {
    _Bool c578 = 0;
    ternary569 = (_Bool)c578;
  }
  __retval563 = ternary569;
  _Bool t579 = __retval563;
  return t579;
}

// function: main
int main() {
bb580:
  int __retval581;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str1582;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2583;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str3584;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str4585;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str5586;
  int i587;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp0588;
  struct std__allocator_char_ ref_tmp1589;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup590;
  int c591 = 0;
  __retval581 = c591;
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str1582);
    _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str2583);
      _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str3584);
        _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str4585);
          _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str5586);
            char* cast592 = (char*)&(_str);
            std__allocator_char___allocator_2(&ref_tmp1589);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&ref_tmp0588, cast592, &ref_tmp1589);
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r593 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&str1582, &ref_tmp0588);
                tmp_exprcleanup590 = r593;
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0588);
              }
            {
              std__allocator_char____allocator(&ref_tmp1589);
            }
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t594 = tmp_exprcleanup590;
              int c595 = 0;
              i587 = c595;
              while (1) {
                int t597 = i587;
                int c598 = 5;
                _Bool c599 = ((t597 < c598)) ? 1 : 0;
                if (!c599) break;
                int t600 = i587;
                unsigned long cast601 = (unsigned long)t600;
                char* r602 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____at(&str1582, cast601);
                char t603 = *r602;
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r604 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(&str2583, t603);
              for_step596: ;
                int t605 = i587;
                int u606 = t605 + 1;
                i587 = u606;
              }
            char* cast607 = (char*)&(_str_1);
            struct std__basic_ostream_char__std__char_traits_char__* r608 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast607);
            struct std__basic_ostream_char__std__char_traits_char__* r609 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r608, &str2583);
            struct std__basic_ostream_char__std__char_traits_char__* r610 = std__ostream__operator___std__ostream_____(r609, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
              int c611 = 0;
              i587 = c611;
              while (1) {
                int t613 = i587;
                int c614 = 6;
                _Bool c615 = ((t613 < c614)) ? 1 : 0;
                if (!c615) break;
                int c616 = 6;
                int t617 = i587;
                int b618 = c616 - t617;
                unsigned long cast619 = (unsigned long)b618;
                char* r620 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____at(&str1582, cast619);
                char t621 = *r620;
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r622 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(&str3584, t621);
              for_step612: ;
                int t623 = i587;
                int u624 = t623 + 1;
                i587 = u624;
              }
            char* cast625 = (char*)&(_str_2);
            struct std__basic_ostream_char__std__char_traits_char__* r626 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast625);
            struct std__basic_ostream_char__std__char_traits_char__* r627 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r626, &str3584);
            struct std__basic_ostream_char__std__char_traits_char__* r628 = std__ostream__operator___std__ostream_____(r627, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
              int c629 = 0;
              i587 = c629;
              while (1) {
                int t631 = i587;
                int c632 = 7;
                _Bool c633 = ((t631 < c632)) ? 1 : 0;
                if (!c633) break;
                int c634 = 7;
                int t635 = i587;
                int b636 = c634 - t635;
                unsigned long cast637 = (unsigned long)b636;
                char* r638 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____at(&str1582, cast637);
                char t639 = *r638;
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r640 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(&str4585, t639);
              for_step630: ;
                int t641 = i587;
                int u642 = t641 + 1;
                i587 = u642;
              }
            char* cast643 = (char*)&(_str_3);
            struct std__basic_ostream_char__std__char_traits_char__* r644 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast643);
            struct std__basic_ostream_char__std__char_traits_char__* r645 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r644, &str4585);
            struct std__basic_ostream_char__std__char_traits_char__* r646 = std__ostream__operator___std__ostream_____(r645, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            char* cast647 = (char*)&(_str_4);
            _Bool r648 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str2583, cast647);
            _Bool u649 = !r648;
            _Bool ternary650;
            if (u649) {
              char* cast651 = (char*)&(_str_5);
              _Bool r652 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str3584, cast651);
              _Bool u653 = !r652;
              ternary650 = (_Bool)u653;
            } else {
              _Bool c654 = 0;
              ternary650 = (_Bool)c654;
            }
            _Bool ternary655;
            if (ternary650) {
              char* cast656 = (char*)&(_str_6);
              _Bool r657 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str4585, cast656);
              _Bool u658 = !r657;
              ternary655 = (_Bool)u658;
            } else {
              _Bool c659 = 0;
              ternary655 = (_Bool)c659;
            }
            if (ternary655) {
            } else {
              char* cast660 = (char*)&(_str_7);
              char* c661 = _str_8;
              unsigned int c662 = 35;
              char* cast663 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast660, c661, c662, cast663);
            }
            struct std__basic_ostream_char__std__char_traits_char__* r664 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str3584);
            struct std__basic_ostream_char__std__char_traits_char__* r665 = std__ostream__operator___std__ostream_____(r664, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            int c666 = 0;
            __retval581 = c666;
            int t667 = __retval581;
            int ret_val668 = t667;
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str5586);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str4585);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str3584);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str2583);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str1582);
            }
            return ret_val668;
  int t669 = __retval581;
  return t669;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v670) {
bb671:
  char* __r672;
  char* __retval673;
  __r672 = v670;
  char* t674 = __r672;
  __retval673 = t674;
  char* t675 = __retval673;
  return t675;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v676) {
bb677:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this678;
  char* __retval679;
  this678 = v676;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t680 = this678;
  char* cast681 = (char*)&(t680->field2._M_local_buf);
  char* r682 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast681);
  __retval679 = r682;
  char* t683 = __retval679;
  return t683;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v684, char* v685, struct std__allocator_char_* v686) {
bb687:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this688;
  char* __dat689;
  struct std__allocator_char_* __a690;
  this688 = v684;
  __dat689 = v685;
  __a690 = v686;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t691 = this688;
  struct std__allocator_char_* base692 = (struct std__allocator_char_*)((char *)t691 + 0);
  struct std__allocator_char_* t693 = __a690;
  std__allocator_char___allocator(base692, t693);
    char* t694 = __dat689;
    t691->_M_p = t694;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb695:
  _Bool __retval696;
    _Bool c697 = 0;
    __retval696 = c697;
    _Bool t698 = __retval696;
    return t698;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v699) {
bb700:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this701;
  this701 = v699;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t702 = this701;
    _Bool r703 = std__is_constant_evaluated();
    if (r703) {
        unsigned long __i704;
        unsigned long c705 = 0;
        __i704 = c705;
        while (1) {
          unsigned long t707 = __i704;
          unsigned long c708 = 15;
          _Bool c709 = ((t707 <= c708)) ? 1 : 0;
          if (!c709) break;
          char c710 = 0;
          unsigned long t711 = __i704;
          t702->field2._M_local_buf[t711] = c710;
        for_step706: ;
          unsigned long t712 = __i704;
          unsigned long u713 = t712 + 1;
          __i704 = u713;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v714, unsigned long v715) {
bb716:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this717;
  unsigned long __length718;
  this717 = v714;
  __length718 = v715;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t719 = this717;
  unsigned long t720 = __length718;
  t719->_M_string_length = t720;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb721:
  _Bool __retval722;
    _Bool c723 = 0;
    __retval722 = c723;
    _Bool t724 = __retval722;
    return t724;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v725, char* v726) {
bb727:
  char* __location728;
  char* __args729;
  char* __retval730;
  void* __loc731;
  __location728 = v725;
  __args729 = v726;
  char* t732 = __location728;
  void* cast733 = (void*)t732;
  __loc731 = cast733;
    void* t734 = __loc731;
    char* cast735 = (char*)t734;
    char* t736 = __args729;
    char t737 = *t736;
    *cast735 = t737;
    __retval730 = cast735;
    char* t738 = __retval730;
    return t738;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v739, char* v740) {
bb741:
  char* __c1742;
  char* __c2743;
  __c1742 = v739;
  __c2743 = v740;
    _Bool r744 = std____is_constant_evaluated();
    if (r744) {
      char* t745 = __c1742;
      char* t746 = __c2743;
      char* r747 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t745, t746);
    } else {
      char* t748 = __c2743;
      char t749 = *t748;
      char* t750 = __c1742;
      *t750 = t749;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v751) {
bb752:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this753;
  char* __retval754;
  this753 = v751;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t755 = this753;
  char* t756 = t755->_M_dataplus._M_p;
  __retval754 = t756;
  char* t757 = __retval754;
  return t757;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v758, unsigned long v759) {
bb760:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this761;
  unsigned long __n762;
  char ref_tmp0763;
  this761 = v758;
  __n762 = v759;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t764 = this761;
  unsigned long t765 = __n762;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t764, t765);
  unsigned long t766 = __n762;
  char* r767 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t764);
  char* ptr768 = &(r767)[t766];
  char c769 = 0;
  ref_tmp0763 = c769;
  std__char_traits_char___assign(ptr768, &ref_tmp0763);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v770) {
bb771:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this772;
  this772 = v770;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t773 = this772;
  {
    struct std__allocator_char_* base774 = (struct std__allocator_char_*)((char *)t773 + 0);
    std__allocator_char____allocator(base774);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v775, struct std____new_allocator_char_* v776) {
bb777:
  struct std____new_allocator_char_* this778;
  struct std____new_allocator_char_* unnamed779;
  this778 = v775;
  unnamed779 = v776;
  struct std____new_allocator_char_* t780 = this778;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v781, struct std__allocator_char_* v782) {
bb783:
  struct std__allocator_char_* this784;
  struct std__allocator_char_* __a785;
  this784 = v781;
  __a785 = v782;
  struct std__allocator_char_* t786 = this784;
  struct std____new_allocator_char_* base787 = (struct std____new_allocator_char_*)((char *)t786 + 0);
  struct std__allocator_char_* t788 = __a785;
  struct std____new_allocator_char_* base789 = (struct std____new_allocator_char_*)((char *)t788 + 0);
  std____new_allocator_char_____new_allocator(base787, base789);
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v790) {
bb791:
  struct std____new_allocator_char_* this792;
  this792 = v790;
  struct std____new_allocator_char_* t793 = this792;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v794, char* v795, struct std__allocator_char_* v796) {
bb797:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this798;
  char* __dat799;
  struct std__allocator_char_* __a800;
  this798 = v794;
  __dat799 = v795;
  __a800 = v796;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t801 = this798;
  struct std__allocator_char_* base802 = (struct std__allocator_char_*)((char *)t801 + 0);
  struct std__allocator_char_* t803 = __a800;
  std__allocator_char___allocator(base802, t803);
    char* t804 = __dat799;
    t801->_M_p = t804;
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v805, char* v806) {
bb807:
  char* __c1808;
  char* __c2809;
  _Bool __retval810;
  __c1808 = v805;
  __c2809 = v806;
  char* t811 = __c1808;
  char t812 = *t811;
  int cast813 = (int)t812;
  char* t814 = __c2809;
  char t815 = *t814;
  int cast816 = (int)t815;
  _Bool c817 = ((cast813 == cast816)) ? 1 : 0;
  __retval810 = c817;
  _Bool t818 = __retval810;
  return t818;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v819) {
bb820:
  char* __p821;
  unsigned long __retval822;
  unsigned long __i823;
  __p821 = v819;
  unsigned long c824 = 0;
  __i823 = c824;
    char ref_tmp0825;
    while (1) {
      unsigned long t826 = __i823;
      char* t827 = __p821;
      char* ptr828 = &(t827)[t826];
      char c829 = 0;
      ref_tmp0825 = c829;
      _Bool r830 = __gnu_cxx__char_traits_char___eq(ptr828, &ref_tmp0825);
      _Bool u831 = !r830;
      if (!u831) break;
      unsigned long t832 = __i823;
      unsigned long u833 = t832 + 1;
      __i823 = u833;
    }
  unsigned long t834 = __i823;
  __retval822 = t834;
  unsigned long t835 = __retval822;
  return t835;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v836) {
bb837:
  char* __s838;
  unsigned long __retval839;
  __s838 = v836;
    _Bool r840 = std____is_constant_evaluated();
    if (r840) {
      char* t841 = __s838;
      unsigned long r842 = __gnu_cxx__char_traits_char___length(t841);
      __retval839 = r842;
      unsigned long t843 = __retval839;
      return t843;
    }
  char* t844 = __s838;
  unsigned long r845 = strlen(t844);
  __retval839 = r845;
  unsigned long t846 = __retval839;
  return t846;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v847, char* v848, struct std__random_access_iterator_tag v849) {
bb850:
  char* __first851;
  char* __last852;
  struct std__random_access_iterator_tag unnamed853;
  long __retval854;
  __first851 = v847;
  __last852 = v848;
  unnamed853 = v849;
  char* t855 = __last852;
  char* t856 = __first851;
  long diff857 = t855 - t856;
  __retval854 = diff857;
  long t858 = __retval854;
  return t858;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v859) {
bb860:
  char** unnamed861;
  struct std__random_access_iterator_tag __retval862;
  unnamed861 = v859;
  struct std__random_access_iterator_tag t863 = __retval862;
  return t863;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v864, char* v865) {
bb866:
  char* __first867;
  char* __last868;
  long __retval869;
  struct std__random_access_iterator_tag agg_tmp0870;
  __first867 = v864;
  __last868 = v865;
  char* t871 = __first867;
  char* t872 = __last868;
  struct std__random_access_iterator_tag r873 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first867);
  agg_tmp0870 = r873;
  struct std__random_access_iterator_tag t874 = agg_tmp0870;
  long r875 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t871, t872, t874);
  __retval869 = r875;
  long t876 = __retval869;
  return t876;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v877, char* v878) {
bb879:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this880;
  char* __p881;
  this880 = v877;
  __p881 = v878;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t882 = this880;
  char* t883 = __p881;
  t882->_M_dataplus._M_p = t883;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v884) {
bb885:
  struct std__allocator_char_* __a886;
  unsigned long __retval887;
  __a886 = v884;
  unsigned long c888 = -1;
  unsigned long c889 = 1;
  unsigned long b890 = c888 / c889;
  __retval887 = b890;
  unsigned long t891 = __retval887;
  return t891;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v892) {
bb893:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this894;
  struct std__allocator_char_* __retval895;
  this894 = v892;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t896 = this894;
  struct std__allocator_char_* base897 = (struct std__allocator_char_*)((char *)&(t896->_M_dataplus) + 0);
  __retval895 = base897;
  struct std__allocator_char_* t898 = __retval895;
  return t898;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v899, unsigned long* v900) {
bb901:
  unsigned long* __a902;
  unsigned long* __b903;
  unsigned long* __retval904;
  __a902 = v899;
  __b903 = v900;
    unsigned long* t905 = __b903;
    unsigned long t906 = *t905;
    unsigned long* t907 = __a902;
    unsigned long t908 = *t907;
    _Bool c909 = ((t906 < t908)) ? 1 : 0;
    if (c909) {
      unsigned long* t910 = __b903;
      __retval904 = t910;
      unsigned long* t911 = __retval904;
      return t911;
    }
  unsigned long* t912 = __a902;
  __retval904 = t912;
  unsigned long* t913 = __retval904;
  return t913;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v914) {
bb915:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this916;
  unsigned long __retval917;
  unsigned long __diffmax918;
  unsigned long __allocmax919;
  this916 = v914;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t920 = this916;
  unsigned long c921 = 9223372036854775807;
  __diffmax918 = c921;
  struct std__allocator_char_* r922 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t920);
  unsigned long r923 = std__allocator_traits_std__allocator_char_____max_size(r922);
  __allocmax919 = r923;
  unsigned long* r924 = unsigned_long_const__std__min_unsigned_long_(&__diffmax918, &__allocmax919);
  unsigned long t925 = *r924;
  unsigned long c926 = 1;
  unsigned long b927 = t925 - c926;
  __retval917 = b927;
  unsigned long t928 = __retval917;
  return t928;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v929) {
bb930:
  struct std____new_allocator_char_* this931;
  unsigned long __retval932;
  this931 = v929;
  struct std____new_allocator_char_* t933 = this931;
  unsigned long c934 = 9223372036854775807;
  unsigned long c935 = 1;
  unsigned long b936 = c934 / c935;
  __retval932 = b936;
  unsigned long t937 = __retval932;
  return t937;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v938, unsigned long v939, void* v940) {
bb941:
  struct std____new_allocator_char_* this942;
  unsigned long __n943;
  void* unnamed944;
  char* __retval945;
  this942 = v938;
  __n943 = v939;
  unnamed944 = v940;
  struct std____new_allocator_char_* t946 = this942;
    unsigned long t947 = __n943;
    unsigned long r948 = std____new_allocator_char____M_max_size___const(t946);
    _Bool c949 = ((t947 > r948)) ? 1 : 0;
    if (c949) {
        unsigned long t950 = __n943;
        unsigned long c951 = -1;
        unsigned long c952 = 1;
        unsigned long b953 = c951 / c952;
        _Bool c954 = ((t950 > b953)) ? 1 : 0;
        if (c954) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c955 = 1;
    unsigned long c956 = 16;
    _Bool c957 = ((c955 > c956)) ? 1 : 0;
    if (c957) {
      unsigned long __al958;
      unsigned long c959 = 1;
      __al958 = c959;
      unsigned long t960 = __n943;
      unsigned long c961 = 1;
      unsigned long b962 = t960 * c961;
      unsigned long t963 = __al958;
      void* r964 = operator_new_2(b962, t963);
      char* cast965 = (char*)r964;
      __retval945 = cast965;
      char* t966 = __retval945;
      return t966;
    }
  unsigned long t967 = __n943;
  unsigned long c968 = 1;
  unsigned long b969 = t967 * c968;
  void* r970 = operator_new(b969);
  char* cast971 = (char*)r970;
  __retval945 = cast971;
  char* t972 = __retval945;
  return t972;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v973, unsigned long v974) {
bb975:
  struct std__allocator_char_* this976;
  unsigned long __n977;
  char* __retval978;
  this976 = v973;
  __n977 = v974;
  struct std__allocator_char_* t979 = this976;
    _Bool r980 = std____is_constant_evaluated();
    if (r980) {
        unsigned long t981 = __n977;
        unsigned long c982 = 1;
        unsigned long ovr983;
        _Bool ovf984 = __builtin_mul_overflow(t981, c982, &ovr983);
        __n977 = ovr983;
        if (ovf984) {
          std____throw_bad_array_new_length();
        }
      unsigned long t985 = __n977;
      void* r986 = operator_new(t985);
      char* cast987 = (char*)r986;
      __retval978 = cast987;
      char* t988 = __retval978;
      return t988;
    }
  struct std____new_allocator_char_* base989 = (struct std____new_allocator_char_*)((char *)t979 + 0);
  unsigned long t990 = __n977;
  void* c991 = ((void*)0);
  char* r992 = std____new_allocator_char___allocate(base989, t990, c991);
  __retval978 = r992;
  char* t993 = __retval978;
  return t993;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v994, unsigned long v995) {
bb996:
  struct std__allocator_char_* __a997;
  unsigned long __n998;
  char* __retval999;
  __a997 = v994;
  __n998 = v995;
  struct std__allocator_char_* t1000 = __a997;
  unsigned long t1001 = __n998;
  char* r1002 = std__allocator_char___allocate(t1000, t1001);
  __retval999 = r1002;
  char* t1003 = __retval999;
  return t1003;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1004, unsigned long v1005) {
bb1006:
  struct std__allocator_char_* __a1007;
  unsigned long __n1008;
  char* __retval1009;
  char* __p1010;
  __a1007 = v1004;
  __n1008 = v1005;
  struct std__allocator_char_* t1011 = __a1007;
  unsigned long t1012 = __n1008;
  char* r1013 = std__allocator_traits_std__allocator_char_____allocate(t1011, t1012);
  __p1010 = r1013;
  char* t1014 = __p1010;
  __retval1009 = t1014;
  char* t1015 = __retval1009;
  return t1015;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1016) {
bb1017:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1018;
  struct std__allocator_char_* __retval1019;
  this1018 = v1016;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1020 = this1018;
  struct std__allocator_char_* base1021 = (struct std__allocator_char_*)((char *)&(t1020->_M_dataplus) + 0);
  __retval1019 = base1021;
  struct std__allocator_char_* t1022 = __retval1019;
  return t1022;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1023, unsigned long* v1024, unsigned long v1025) {
bb1026:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1027;
  unsigned long* __capacity1028;
  unsigned long __old_capacity1029;
  char* __retval1030;
  this1027 = v1023;
  __capacity1028 = v1024;
  __old_capacity1029 = v1025;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1031 = this1027;
    unsigned long* t1032 = __capacity1028;
    unsigned long t1033 = *t1032;
    unsigned long r1034 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1031);
    _Bool c1035 = ((t1033 > r1034)) ? 1 : 0;
    if (c1035) {
      char* cast1036 = (char*)&(_str_10);
      std____throw_length_error(cast1036);
    }
    unsigned long* t1037 = __capacity1028;
    unsigned long t1038 = *t1037;
    unsigned long t1039 = __old_capacity1029;
    _Bool c1040 = ((t1038 > t1039)) ? 1 : 0;
    _Bool ternary1041;
    if (c1040) {
      unsigned long* t1042 = __capacity1028;
      unsigned long t1043 = *t1042;
      unsigned long c1044 = 2;
      unsigned long t1045 = __old_capacity1029;
      unsigned long b1046 = c1044 * t1045;
      _Bool c1047 = ((t1043 < b1046)) ? 1 : 0;
      ternary1041 = (_Bool)c1047;
    } else {
      _Bool c1048 = 0;
      ternary1041 = (_Bool)c1048;
    }
    if (ternary1041) {
      unsigned long c1049 = 2;
      unsigned long t1050 = __old_capacity1029;
      unsigned long b1051 = c1049 * t1050;
      unsigned long* t1052 = __capacity1028;
      *t1052 = b1051;
        unsigned long* t1053 = __capacity1028;
        unsigned long t1054 = *t1053;
        unsigned long r1055 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1031);
        _Bool c1056 = ((t1054 > r1055)) ? 1 : 0;
        if (c1056) {
          unsigned long r1057 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1031);
          unsigned long* t1058 = __capacity1028;
          *t1058 = r1057;
        }
    }
  struct std__allocator_char_* r1059 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1031);
  unsigned long* t1060 = __capacity1028;
  unsigned long t1061 = *t1060;
  unsigned long c1062 = 1;
  unsigned long b1063 = t1061 + c1062;
  char* r1064 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1059, b1063);
  __retval1030 = r1064;
  char* t1065 = __retval1030;
  return t1065;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1066, unsigned long v1067) {
bb1068:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1069;
  unsigned long __capacity1070;
  this1069 = v1066;
  __capacity1070 = v1067;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1071 = this1069;
  unsigned long t1072 = __capacity1070;
  t1071->field2._M_allocated_capacity = t1072;
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1073, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1074) {
bb1075:
  struct _Guard* this1076;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1077;
  this1076 = v1073;
  __s1077 = v1074;
  struct _Guard* t1078 = this1076;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1079 = __s1077;
  t1078->_M_guarded = t1079;
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1080, char* v1081, unsigned long v1082) {
bb1083:
  char* __s11084;
  char* __s21085;
  unsigned long __n1086;
  char* __retval1087;
  __s11084 = v1080;
  __s21085 = v1081;
  __n1086 = v1082;
    unsigned long t1088 = __n1086;
    unsigned long c1089 = 0;
    _Bool c1090 = ((t1088 == c1089)) ? 1 : 0;
    if (c1090) {
      char* t1091 = __s11084;
      __retval1087 = t1091;
      char* t1092 = __retval1087;
      return t1092;
    }
    _Bool r1093 = std____is_constant_evaluated();
    if (r1093) {
        unsigned long __i1094;
        unsigned long c1095 = 0;
        __i1094 = c1095;
        while (1) {
          unsigned long t1097 = __i1094;
          unsigned long t1098 = __n1086;
          _Bool c1099 = ((t1097 < t1098)) ? 1 : 0;
          if (!c1099) break;
          char* t1100 = __s11084;
          unsigned long t1101 = __i1094;
          char* ptr1102 = &(t1100)[t1101];
          unsigned long t1103 = __i1094;
          char* t1104 = __s21085;
          char* ptr1105 = &(t1104)[t1103];
          char* r1106 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1102, ptr1105);
        for_step1096: ;
          unsigned long t1107 = __i1094;
          unsigned long u1108 = t1107 + 1;
          __i1094 = u1108;
        }
      char* t1109 = __s11084;
      __retval1087 = t1109;
      char* t1110 = __retval1087;
      return t1110;
    }
  char* t1111 = __s11084;
  void* cast1112 = (void*)t1111;
  char* t1113 = __s21085;
  void* cast1114 = (void*)t1113;
  unsigned long t1115 = __n1086;
  unsigned long c1116 = 1;
  unsigned long b1117 = t1115 * c1116;
  void* r1118 = memcpy(cast1112, cast1114, b1117);
  char* t1119 = __s11084;
  __retval1087 = t1119;
  char* t1120 = __retval1087;
  return t1120;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1121, char* v1122, unsigned long v1123) {
bb1124:
  char* __s11125;
  char* __s21126;
  unsigned long __n1127;
  char* __retval1128;
  __s11125 = v1121;
  __s21126 = v1122;
  __n1127 = v1123;
    unsigned long t1129 = __n1127;
    unsigned long c1130 = 0;
    _Bool c1131 = ((t1129 == c1130)) ? 1 : 0;
    if (c1131) {
      char* t1132 = __s11125;
      __retval1128 = t1132;
      char* t1133 = __retval1128;
      return t1133;
    }
    _Bool r1134 = std____is_constant_evaluated();
    if (r1134) {
      char* t1135 = __s11125;
      char* t1136 = __s21126;
      unsigned long t1137 = __n1127;
      char* r1138 = __gnu_cxx__char_traits_char___copy(t1135, t1136, t1137);
      __retval1128 = r1138;
      char* t1139 = __retval1128;
      return t1139;
    }
  char* t1140 = __s11125;
  void* cast1141 = (void*)t1140;
  char* t1142 = __s21126;
  void* cast1143 = (void*)t1142;
  unsigned long t1144 = __n1127;
  void* r1145 = memcpy(cast1141, cast1143, t1144);
  char* cast1146 = (char*)r1145;
  __retval1128 = cast1146;
  char* t1147 = __retval1128;
  return t1147;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1148, char* v1149, unsigned long v1150) {
bb1151:
  char* __d1152;
  char* __s1153;
  unsigned long __n1154;
  __d1152 = v1148;
  __s1153 = v1149;
  __n1154 = v1150;
    unsigned long t1155 = __n1154;
    unsigned long c1156 = 1;
    _Bool c1157 = ((t1155 == c1156)) ? 1 : 0;
    if (c1157) {
      char* t1158 = __d1152;
      char* t1159 = __s1153;
      std__char_traits_char___assign(t1158, t1159);
    } else {
      char* t1160 = __d1152;
      char* t1161 = __s1153;
      unsigned long t1162 = __n1154;
      char* r1163 = std__char_traits_char___copy(t1160, t1161, t1162);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1164) {
bb1165:
  char* __it1166;
  char* __retval1167;
  __it1166 = v1164;
  char* t1168 = __it1166;
  __retval1167 = t1168;
  char* t1169 = __retval1167;
  return t1169;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1170, char* v1171, char* v1172) {
bb1173:
  char* __p1174;
  char* __k11175;
  char* __k21176;
  __p1174 = v1170;
  __k11175 = v1171;
  __k21176 = v1172;
    char* t1177 = __p1174;
    char* t1178 = __k11175;
    char* r1179 = char_const__std____niter_base_char_const__(t1178);
    char* t1180 = __k21176;
    char* t1181 = __k11175;
    long diff1182 = t1180 - t1181;
    unsigned long cast1183 = (unsigned long)diff1182;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1177, r1179, cast1183);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1184) {
bb1185:
  struct _Guard* this1186;
  this1186 = v1184;
  struct _Guard* t1187 = this1186;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1188 = t1187->_M_guarded;
    _Bool cast1189 = (_Bool)t1188;
    if (cast1189) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1190 = t1187->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1190);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1191, char* v1192, char* v1193, struct std__forward_iterator_tag v1194) {
bb1195:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1196;
  char* __beg1197;
  char* __end1198;
  struct std__forward_iterator_tag unnamed1199;
  unsigned long __dnew1200;
  struct _Guard __guard1201;
  this1196 = v1191;
  __beg1197 = v1192;
  __end1198 = v1193;
  unnamed1199 = v1194;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1202 = this1196;
  char* t1203 = __beg1197;
  char* t1204 = __end1198;
  long r1205 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1203, t1204);
  unsigned long cast1206 = (unsigned long)r1205;
  __dnew1200 = cast1206;
    unsigned long t1207 = __dnew1200;
    unsigned long c1208 = 15;
    _Bool c1209 = ((t1207 > c1208)) ? 1 : 0;
    if (c1209) {
      unsigned long c1210 = 0;
      char* r1211 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1202, &__dnew1200, c1210);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1202, r1211);
      unsigned long t1212 = __dnew1200;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1202, t1212);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1202);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1201, t1202);
    char* r1213 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1202);
    char* t1214 = __beg1197;
    char* t1215 = __end1198;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1213, t1214, t1215);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1216 = ((void*)0);
    __guard1201._M_guarded = c1216;
    unsigned long t1217 = __dnew1200;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1202, t1217);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1201);
  }
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1218) {
bb1219:
  char* __r1220;
  char* __retval1221;
  __r1220 = v1218;
  char* t1222 = __r1220;
  __retval1221 = t1222;
  char* t1223 = __retval1221;
  return t1223;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1224) {
bb1225:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1226;
  char* __retval1227;
  this1226 = v1224;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1228 = this1226;
  char* cast1229 = (char*)&(t1228->field2._M_local_buf);
  char* r1230 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1229);
  __retval1227 = r1230;
  char* t1231 = __retval1227;
  return t1231;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1232) {
bb1233:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1234;
  _Bool __retval1235;
  this1234 = v1232;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1236 = this1234;
    char* r1237 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1236);
    char* r1238 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1236);
    _Bool c1239 = ((r1237 == r1238)) ? 1 : 0;
    if (c1239) {
        unsigned long t1240 = t1236->_M_string_length;
        unsigned long c1241 = 15;
        _Bool c1242 = ((t1240 > c1241)) ? 1 : 0;
        if (c1242) {
          __builtin_unreachable();
        }
      _Bool c1243 = 1;
      __retval1235 = c1243;
      _Bool t1244 = __retval1235;
      return t1244;
    }
  _Bool c1245 = 0;
  __retval1235 = c1245;
  _Bool t1246 = __retval1235;
  return t1246;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1247, char* v1248, unsigned long v1249) {
bb1250:
  struct std____new_allocator_char_* this1251;
  char* __p1252;
  unsigned long __n1253;
  this1251 = v1247;
  __p1252 = v1248;
  __n1253 = v1249;
  struct std____new_allocator_char_* t1254 = this1251;
    unsigned long c1255 = 1;
    unsigned long c1256 = 16;
    _Bool c1257 = ((c1255 > c1256)) ? 1 : 0;
    if (c1257) {
      char* t1258 = __p1252;
      void* cast1259 = (void*)t1258;
      unsigned long t1260 = __n1253;
      unsigned long c1261 = 1;
      unsigned long b1262 = t1260 * c1261;
      unsigned long c1263 = 1;
      operator_delete_3(cast1259, b1262, c1263);
      return;
    }
  char* t1264 = __p1252;
  void* cast1265 = (void*)t1264;
  unsigned long t1266 = __n1253;
  unsigned long c1267 = 1;
  unsigned long b1268 = t1266 * c1267;
  operator_delete_2(cast1265, b1268);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1269, char* v1270, unsigned long v1271) {
bb1272:
  struct std__allocator_char_* this1273;
  char* __p1274;
  unsigned long __n1275;
  this1273 = v1269;
  __p1274 = v1270;
  __n1275 = v1271;
  struct std__allocator_char_* t1276 = this1273;
    _Bool r1277 = std____is_constant_evaluated();
    if (r1277) {
      char* t1278 = __p1274;
      void* cast1279 = (void*)t1278;
      operator_delete(cast1279);
      return;
    }
  struct std____new_allocator_char_* base1280 = (struct std____new_allocator_char_*)((char *)t1276 + 0);
  char* t1281 = __p1274;
  unsigned long t1282 = __n1275;
  std____new_allocator_char___deallocate(base1280, t1281, t1282);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1283, char* v1284, unsigned long v1285) {
bb1286:
  struct std__allocator_char_* __a1287;
  char* __p1288;
  unsigned long __n1289;
  __a1287 = v1283;
  __p1288 = v1284;
  __n1289 = v1285;
  struct std__allocator_char_* t1290 = __a1287;
  char* t1291 = __p1288;
  unsigned long t1292 = __n1289;
  std__allocator_char___deallocate(t1290, t1291, t1292);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1293, unsigned long v1294) {
bb1295:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1296;
  unsigned long __size1297;
  this1296 = v1293;
  __size1297 = v1294;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1298 = this1296;
  struct std__allocator_char_* r1299 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1298);
  char* r1300 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1298);
  unsigned long t1301 = __size1297;
  unsigned long c1302 = 1;
  unsigned long b1303 = t1301 + c1302;
  std__allocator_traits_std__allocator_char_____deallocate(r1299, r1300, b1303);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1304) {
bb1305:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1306;
  this1306 = v1304;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1307 = this1306;
    _Bool r1308 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1307);
    _Bool u1309 = !r1308;
    if (u1309) {
      unsigned long t1310 = t1307->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1307, t1310);
    }
  return;
}

