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
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ { char* _M_current; };
struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ { char* _M_current; };
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

char _str[27] = "This is an example phrase.";
char _str_1[19] = "This is an phrase.";
char _str_2[28] = "str != \"This is an phrase.\"";
char _str_3[113] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_erase_4_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[18] = "This is a phrase.";
char _str_5[27] = "str != \"This is a phrase.\"";
char _str_6[50] = "basic_string: construction from null is not valid";
char _str_7[24] = "basic_string::_M_create";
char _str_8[20] = "basic_string::erase";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
char _str_9[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator_2(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void __gnu_cxx__char_traits_char___assign(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___move(char* p0, char* p1, unsigned long p2);
extern void* memmove(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_erase(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____erase_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
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
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, char** p1);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, long p1);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator_(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
char** __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);
char** __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);
long decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____erase(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1);
void _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
int main();
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
extern void std____throw_logic_error(char* p0);
_Bool std____is_constant_evaluated();
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
_Bool std__is_constant_evaluated();
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* p0, char* p1);
void std__char_traits_char___assign(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* p0, char* p1, unsigned long p2);
char* char_const__std____niter_base_char_const__(char* p0);
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* p0, char* p1, char* p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* p0);
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, char* p2, struct std__forward_iterator_tag p3);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0);
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
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

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEPKcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v5, char* v6, struct std__allocator_char_* v7) {
bb8:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this9;
  char* __s10;
  struct std__allocator_char_* __a11;
  char* __end12;
  struct std__forward_iterator_tag agg_tmp013;
  this9 = v5;
  __s10 = v6;
  __a11 = v7;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t14 = this9;
  char* r15 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t14);
  struct std__allocator_char_* t16 = __a11;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t14->_M_dataplus, r15, t16);
      char* t17 = __s10;
      char* c18 = ((void*)0);
      _Bool c19 = ((t17 == c18)) ? 1 : 0;
      if (c19) {
        char* cast20 = (char*)&(_str_6);
        std____throw_logic_error(cast20);
      }
    char* t21 = __s10;
    char* t22 = __s10;
    unsigned long r23 = std__char_traits_char___length(t22);
    char* ptr24 = &(t21)[r23];
    __end12 = ptr24;
    char* t25 = __s10;
    char* t26 = __end12;
    struct std__forward_iterator_tag t27 = agg_tmp013;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t14, t25, t26, t27);
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v28) {
bb29:
  struct std__allocator_char_* this30;
  this30 = v28;
  struct std__allocator_char_* t31 = this30;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2Ev
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator_2(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v32) {
bb33:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this34;
  this34 = v32;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t35 = this34;
  char* c36 = ((void*)0);
  t35->_M_current = c36;
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v37) {
bb38:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this39;
  unsigned long __retval40;
  unsigned long __sz41;
  this39 = v37;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t42 = this39;
  unsigned long t43 = t42->_M_string_length;
  __sz41 = t43;
    unsigned long t44 = __sz41;
    unsigned long r45 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t42);
    _Bool c46 = ((t44 > r45)) ? 1 : 0;
    if (c46) {
      __builtin_unreachable();
    }
  unsigned long t47 = __sz41;
  __retval40 = t47;
  unsigned long t48 = __retval40;
  return t48;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v49, unsigned long v50, char* v51) {
bb52:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this53;
  unsigned long __pos54;
  char* __s55;
  unsigned long __retval56;
  this53 = v49;
  __pos54 = v50;
  __s55 = v51;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t57 = this53;
    unsigned long t58 = __pos54;
    unsigned long r59 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t57);
    _Bool c60 = ((t58 > r59)) ? 1 : 0;
    if (c60) {
      char* cast61 = (char*)&(_str_9);
      char* t62 = __s55;
      unsigned long t63 = __pos54;
      unsigned long r64 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t57);
      std____throw_out_of_range_fmt(cast61, t62, t63, r64);
    }
  unsigned long t65 = __pos54;
  __retval56 = t65;
  unsigned long t66 = __retval56;
  return t66;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v67) {
bb68:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this69;
  unsigned long __retval70;
  this69 = v67;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t71 = this69;
  unsigned long r72 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t71);
  __retval70 = r72;
  unsigned long t73 = __retval70;
  return t73;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign(char* v74, char* v75) {
bb76:
  char* __c177;
  char* __c278;
  __c177 = v74;
  __c278 = v75;
    _Bool r79 = std____is_constant_evaluated();
    if (r79) {
      char* t80 = __c177;
      char* t81 = __c278;
      char* r82 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t80, t81);
    } else {
      char* t83 = __c278;
      char t84 = *t83;
      char* t85 = __c177;
      *t85 = t84;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v86, char* v87, unsigned long v88) {
bb89:
  char* __s190;
  char* __s291;
  unsigned long __n92;
  char* __retval93;
  __s190 = v86;
  __s291 = v87;
  __n92 = v88;
    unsigned long t94 = __n92;
    unsigned long c95 = 0;
    _Bool c96 = ((t94 == c95)) ? 1 : 0;
    if (c96) {
      char* t97 = __s190;
      __retval93 = t97;
      char* t98 = __retval93;
      return t98;
    }
    _Bool r99 = std____is_constant_evaluated();
    if (r99) {
        char* t100 = __s291;
        char* t101 = __s190;
        _Bool c102 = ((t100 < t101)) ? 1 : 0;
        _Bool isconst103 = 0;
        _Bool ternary104;
        if (isconst103) {
          char* t105 = __s190;
          char* t106 = __s291;
          _Bool c107 = ((t105 > t106)) ? 1 : 0;
          ternary104 = (_Bool)c107;
        } else {
          _Bool c108 = 0;
          ternary104 = (_Bool)c108;
        }
        _Bool ternary109;
        if (ternary104) {
          char* t110 = __s190;
          char* t111 = __s291;
          unsigned long t112 = __n92;
          char* ptr113 = &(t111)[t112];
          _Bool c114 = ((t110 < ptr113)) ? 1 : 0;
          ternary109 = (_Bool)c114;
        } else {
          _Bool c115 = 0;
          ternary109 = (_Bool)c115;
        }
        if (ternary109) {
            do {
                unsigned long t116 = __n92;
                unsigned long u117 = t116 - 1;
                __n92 = u117;
                unsigned long t118 = __n92;
                char* t119 = __s190;
                char* ptr120 = &(t119)[t118];
                unsigned long t121 = __n92;
                char* t122 = __s291;
                char* ptr123 = &(t122)[t121];
                __gnu_cxx__char_traits_char___assign(ptr120, ptr123);
              unsigned long t124 = __n92;
              unsigned long c125 = 0;
              _Bool c126 = ((t124 > c125)) ? 1 : 0;
              if (!c126) break;
            } while (1);
        } else {
          char* t127 = __s190;
          char* t128 = __s291;
          unsigned long t129 = __n92;
          char* r130 = __gnu_cxx__char_traits_char___copy(t127, t128, t129);
        }
      char* t131 = __s190;
      __retval93 = t131;
      char* t132 = __retval93;
      return t132;
    }
  char* t133 = __s190;
  void* cast134 = (void*)t133;
  char* t135 = __s291;
  void* cast136 = (void*)t135;
  unsigned long t137 = __n92;
  unsigned long c138 = 1;
  unsigned long b139 = t137 * c138;
  void* r140 = memmove(cast134, cast136, b139);
  char* t141 = __s190;
  __retval93 = t141;
  char* t142 = __retval93;
  return t142;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v143, char* v144, unsigned long v145) {
bb146:
  char* __s1147;
  char* __s2148;
  unsigned long __n149;
  char* __retval150;
  __s1147 = v143;
  __s2148 = v144;
  __n149 = v145;
    unsigned long t151 = __n149;
    unsigned long c152 = 0;
    _Bool c153 = ((t151 == c152)) ? 1 : 0;
    if (c153) {
      char* t154 = __s1147;
      __retval150 = t154;
      char* t155 = __retval150;
      return t155;
    }
    _Bool r156 = std____is_constant_evaluated();
    if (r156) {
      char* t157 = __s1147;
      char* t158 = __s2148;
      unsigned long t159 = __n149;
      char* r160 = __gnu_cxx__char_traits_char___move(t157, t158, t159);
      __retval150 = r160;
      char* t161 = __retval150;
      return t161;
    }
  char* t162 = __s1147;
  void* cast163 = (void*)t162;
  char* t164 = __s2148;
  void* cast165 = (void*)t164;
  unsigned long t166 = __n149;
  void* r167 = memmove(cast163, cast165, t166);
  char* cast168 = (char*)r167;
  __retval150 = cast168;
  char* t169 = __retval150;
  return t169;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v170, char* v171, unsigned long v172) {
bb173:
  char* __d174;
  char* __s175;
  unsigned long __n176;
  __d174 = v170;
  __s175 = v171;
  __n176 = v172;
    unsigned long t177 = __n176;
    unsigned long c178 = 1;
    _Bool c179 = ((t177 == c178)) ? 1 : 0;
    if (c179) {
      char* t180 = __d174;
      char* t181 = __s175;
      std__char_traits_char___assign(t180, t181);
    } else {
      char* t182 = __d174;
      char* t183 = __s175;
      unsigned long t184 = __n176;
      char* r185 = std__char_traits_char___move(t182, t183, t184);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_eraseEmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_erase(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v186, unsigned long v187, unsigned long v188) {
bb189:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this190;
  unsigned long __pos191;
  unsigned long __n192;
  unsigned long __how_much193;
  this190 = v186;
  __pos191 = v187;
  __n192 = v188;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t194 = this190;
  unsigned long r195 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t194);
  unsigned long t196 = __pos191;
  unsigned long b197 = r195 - t196;
  unsigned long t198 = __n192;
  unsigned long b199 = b197 - t198;
  __how_much193 = b199;
    unsigned long t200 = __how_much193;
    _Bool cast201 = (_Bool)t200;
    _Bool ternary202;
    if (cast201) {
      unsigned long t203 = __n192;
      _Bool cast204 = (_Bool)t203;
      ternary202 = (_Bool)cast204;
    } else {
      _Bool c205 = 0;
      ternary202 = (_Bool)c205;
    }
    if (ternary202) {
      char* r206 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t194);
      unsigned long t207 = __pos191;
      char* ptr208 = &(r206)[t207];
      char* r209 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t194);
      unsigned long t210 = __pos191;
      char* ptr211 = &(r209)[t210];
      unsigned long t212 = __n192;
      char* ptr213 = &(ptr211)[t212];
      unsigned long t214 = __how_much193;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr208, ptr213, t214);
    }
  unsigned long r215 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t194);
  unsigned long t216 = __n192;
  unsigned long b217 = r215 - t216;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t194, b217);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v218, unsigned long v219, unsigned long v220) {
bb221:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this222;
  unsigned long __pos223;
  unsigned long __off224;
  unsigned long __retval225;
  _Bool __testoff226;
  this222 = v218;
  __pos223 = v219;
  __off224 = v220;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t227 = this222;
  unsigned long t228 = __off224;
  unsigned long r229 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t227);
  unsigned long t230 = __pos223;
  unsigned long b231 = r229 - t230;
  _Bool c232 = ((t228 < b231)) ? 1 : 0;
  __testoff226 = c232;
  _Bool t233 = __testoff226;
  unsigned long ternary234;
  if (t233) {
    unsigned long t235 = __off224;
    ternary234 = (unsigned long)t235;
  } else {
    unsigned long r236 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t227);
    unsigned long t237 = __pos223;
    unsigned long b238 = r236 - t237;
    ternary234 = (unsigned long)b238;
  }
  __retval225 = ternary234;
  unsigned long t239 = __retval225;
  return t239;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5eraseEmm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____erase_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v240, unsigned long v241, unsigned long v242) {
bb243:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this244;
  unsigned long __pos245;
  unsigned long __n246;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval247;
  this244 = v240;
  __pos245 = v241;
  __n246 = v242;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t248 = this244;
  unsigned long t249 = __pos245;
  char* cast250 = (char*)&(_str_8);
  unsigned long r251 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t248, t249, cast250);
    unsigned long t252 = __n246;
    unsigned long t253 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
    _Bool c254 = ((t252 == t253)) ? 1 : 0;
    if (c254) {
      unsigned long t255 = __pos245;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t248, t255);
    } else {
        unsigned long t256 = __n246;
        unsigned long c257 = 0;
        _Bool c258 = ((t256 != c257)) ? 1 : 0;
        if (c258) {
          unsigned long t259 = __pos245;
          unsigned long t260 = __pos245;
          unsigned long t261 = __n246;
          unsigned long r262 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t248, t260, t261);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_erase(t248, t259, r262);
        }
    }
  __retval247 = t248;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t263 = __retval247;
  return t263;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v264, char* v265) {
bb266:
  char* __c1267;
  char* __c2268;
  _Bool __retval269;
  __c1267 = v264;
  __c2268 = v265;
  char* t270 = __c1267;
  char t271 = *t270;
  unsigned char cast272 = (unsigned char)t271;
  int cast273 = (int)cast272;
  char* t274 = __c2268;
  char t275 = *t274;
  unsigned char cast276 = (unsigned char)t275;
  int cast277 = (int)cast276;
  _Bool c278 = ((cast273 < cast277)) ? 1 : 0;
  __retval269 = c278;
  _Bool t279 = __retval269;
  return t279;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v280, char* v281, unsigned long v282) {
bb283:
  char* __s1284;
  char* __s2285;
  unsigned long __n286;
  int __retval287;
  __s1284 = v280;
  __s2285 = v281;
  __n286 = v282;
    unsigned long t288 = __n286;
    unsigned long c289 = 0;
    _Bool c290 = ((t288 == c289)) ? 1 : 0;
    if (c290) {
      int c291 = 0;
      __retval287 = c291;
      int t292 = __retval287;
      return t292;
    }
    _Bool r293 = std____is_constant_evaluated();
    if (r293) {
        unsigned long __i294;
        unsigned long c295 = 0;
        __i294 = c295;
        while (1) {
          unsigned long t297 = __i294;
          unsigned long t298 = __n286;
          _Bool c299 = ((t297 < t298)) ? 1 : 0;
          if (!c299) break;
            unsigned long t300 = __i294;
            char* t301 = __s1284;
            char* ptr302 = &(t301)[t300];
            unsigned long t303 = __i294;
            char* t304 = __s2285;
            char* ptr305 = &(t304)[t303];
            _Bool r306 = std__char_traits_char___lt(ptr302, ptr305);
            if (r306) {
              int c307 = -1;
              __retval287 = c307;
              int t308 = __retval287;
              int ret_val309 = t308;
              return ret_val309;
            } else {
                unsigned long t310 = __i294;
                char* t311 = __s2285;
                char* ptr312 = &(t311)[t310];
                unsigned long t313 = __i294;
                char* t314 = __s1284;
                char* ptr315 = &(t314)[t313];
                _Bool r316 = std__char_traits_char___lt(ptr312, ptr315);
                if (r316) {
                  int c317 = 1;
                  __retval287 = c317;
                  int t318 = __retval287;
                  int ret_val319 = t318;
                  return ret_val319;
                }
            }
        for_step296: ;
          unsigned long t320 = __i294;
          unsigned long u321 = t320 + 1;
          __i294 = u321;
        }
      int c322 = 0;
      __retval287 = c322;
      int t323 = __retval287;
      return t323;
    }
  char* t324 = __s1284;
  void* cast325 = (void*)t324;
  char* t326 = __s2285;
  void* cast327 = (void*)t326;
  unsigned long t328 = __n286;
  int r329 = memcmp(cast325, cast327, t328);
  __retval287 = r329;
  int t330 = __retval287;
  return t330;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v331) {
bb332:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this333;
  char* __retval334;
  this333 = v331;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t335 = this333;
  char* r336 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t335);
  __retval334 = r336;
  char* t337 = __retval334;
  return t337;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v338, char* v339) {
bb340:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs341;
  char* __rhs342;
  _Bool __retval343;
  __lhs341 = v338;
  __rhs342 = v339;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t344 = __lhs341;
  unsigned long r345 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t344);
  char* t346 = __rhs342;
  unsigned long r347 = std__char_traits_char___length(t346);
  _Bool c348 = ((r345 == r347)) ? 1 : 0;
  _Bool ternary349;
  if (c348) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t350 = __lhs341;
    char* r351 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t350);
    char* t352 = __rhs342;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t353 = __lhs341;
    unsigned long r354 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t353);
    int r355 = std__char_traits_char___compare(r351, t352, r354);
    _Bool cast356 = (_Bool)r355;
    _Bool u357 = !cast356;
    ternary349 = (_Bool)u357;
  } else {
    _Bool c358 = 0;
    ternary349 = (_Bool)c358;
  }
  __retval343 = ternary349;
  _Bool t359 = __retval343;
  return t359;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v360, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v361) {
bb362:
  struct std__basic_ostream_char__std__char_traits_char__* __os363;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str364;
  struct std__basic_ostream_char__std__char_traits_char__* __retval365;
  __os363 = v360;
  __str364 = v361;
  struct std__basic_ostream_char__std__char_traits_char__* t366 = __os363;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t367 = __str364;
  char* r368 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t367);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t369 = __str364;
  unsigned long r370 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t369);
  long cast371 = (long)r370;
  struct std__basic_ostream_char__std__char_traits_char__* r372 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t366, r368, cast371);
  __retval365 = r372;
  struct std__basic_ostream_char__std__char_traits_char__* t373 = __retval365;
  return t373;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v374, void* v375) {
bb376:
  struct std__basic_ostream_char__std__char_traits_char__* this377;
  void* __pf378;
  struct std__basic_ostream_char__std__char_traits_char__* __retval379;
  this377 = v374;
  __pf378 = v375;
  struct std__basic_ostream_char__std__char_traits_char__* t380 = this377;
  void* t381 = __pf378;
  struct std__basic_ostream_char__std__char_traits_char__* r382 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t381)(t380);
  __retval379 = r382;
  struct std__basic_ostream_char__std__char_traits_char__* t383 = __retval379;
  return t383;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v384) {
bb385:
  struct std__basic_ostream_char__std__char_traits_char__* __os386;
  struct std__basic_ostream_char__std__char_traits_char__* __retval387;
  __os386 = v384;
  struct std__basic_ostream_char__std__char_traits_char__* t388 = __os386;
  struct std__basic_ostream_char__std__char_traits_char__* r389 = std__ostream__flush(t388);
  __retval387 = r389;
  struct std__basic_ostream_char__std__char_traits_char__* t390 = __retval387;
  return t390;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v391) {
bb392:
  struct std__ctype_char_* __f393;
  struct std__ctype_char_* __retval394;
  __f393 = v391;
    struct std__ctype_char_* t395 = __f393;
    _Bool cast396 = (_Bool)t395;
    _Bool u397 = !cast396;
    if (u397) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t398 = __f393;
  __retval394 = t398;
  struct std__ctype_char_* t399 = __retval394;
  return t399;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v400, char v401) {
bb402:
  struct std__ctype_char_* this403;
  char __c404;
  char __retval405;
  this403 = v400;
  __c404 = v401;
  struct std__ctype_char_* t406 = this403;
    char t407 = t406->_M_widen_ok;
    _Bool cast408 = (_Bool)t407;
    if (cast408) {
      char t409 = __c404;
      unsigned char cast410 = (unsigned char)t409;
      unsigned long cast411 = (unsigned long)cast410;
      char t412 = t406->_M_widen[cast411];
      __retval405 = t412;
      char t413 = __retval405;
      return t413;
    }
  std__ctype_char____M_widen_init___const(t406);
  char t414 = __c404;
  void** v415 = (void**)t406;
  void* v416 = *((void**)v415);
  char vcall419 = (char)__VERIFIER_virtual_call_char_char(t406, 6, t414);
  __retval405 = vcall419;
  char t420 = __retval405;
  return t420;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v421, char v422) {
bb423:
  struct std__basic_ios_char__std__char_traits_char__* this424;
  char __c425;
  char __retval426;
  this424 = v421;
  __c425 = v422;
  struct std__basic_ios_char__std__char_traits_char__* t427 = this424;
  struct std__ctype_char_* t428 = t427->_M_ctype;
  struct std__ctype_char_* r429 = std__ctype_char__const__std____check_facet_std__ctype_char___(t428);
  char t430 = __c425;
  char r431 = std__ctype_char___widen_char__const(r429, t430);
  __retval426 = r431;
  char t432 = __retval426;
  return t432;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v433) {
bb434:
  struct std__basic_ostream_char__std__char_traits_char__* __os435;
  struct std__basic_ostream_char__std__char_traits_char__* __retval436;
  __os435 = v433;
  struct std__basic_ostream_char__std__char_traits_char__* t437 = __os435;
  struct std__basic_ostream_char__std__char_traits_char__* t438 = __os435;
  void** v439 = (void**)t438;
  void* v440 = *((void**)v439);
  unsigned char* cast441 = (unsigned char*)v440;
  long c442 = -24;
  unsigned char* ptr443 = &(cast441)[c442];
  long* cast444 = (long*)ptr443;
  long t445 = *cast444;
  unsigned char* cast446 = (unsigned char*)t438;
  unsigned char* ptr447 = &(cast446)[t445];
  struct std__basic_ostream_char__std__char_traits_char__* cast448 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr447;
  struct std__basic_ios_char__std__char_traits_char__* cast449 = (struct std__basic_ios_char__std__char_traits_char__*)cast448;
  char c450 = 10;
  char r451 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast449, c450);
  struct std__basic_ostream_char__std__char_traits_char__* r452 = std__ostream__put(t437, r451);
  struct std__basic_ostream_char__std__char_traits_char__* r453 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r452);
  __retval436 = r453;
  struct std__basic_ostream_char__std__char_traits_char__* t454 = __retval436;
  return t454;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2ERKS1_
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v455, char** v456) {
bb457:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this458;
  char** __i459;
  this458 = v455;
  __i459 = v456;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t460 = this458;
  char** t461 = __i459;
  char* t462 = *t461;
  t460->_M_current = t462;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5beginEv
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v463) {
bb464:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this465;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval466;
  char* ref_tmp0467;
  this465 = v463;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t468 = this465;
  char* r469 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t468);
  ref_tmp0467 = r469;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval466, &ref_tmp0467);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t470 = __retval466;
  return t470;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEplEl
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v471, long v472) {
bb473:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this474;
  long __n475;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval476;
  char* ref_tmp0477;
  this474 = v471;
  __n475 = v472;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t478 = this474;
  char* t479 = t478->_M_current;
  long t480 = __n475;
  char* ptr481 = &(t479)[t480];
  ref_tmp0477 = ptr481;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval476, &ref_tmp0477);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t482 = __retval476;
  return t482;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEaSEOS8_
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator_(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v483, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v484) {
bb485:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this486;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* unnamed487;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __retval488;
  this486 = v483;
  unnamed487 = v484;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t489 = this486;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t490 = unnamed487;
  char* t491 = t490->_M_current;
  t489->_M_current = t491;
  __retval488 = t489;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t492 = __retval488;
  return t492;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE4baseEv
char** __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v493) {
bb494:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this495;
  char** __retval496;
  this495 = v493;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t497 = this495;
  __retval496 = &t497->_M_current;
  char** t498 = __retval496;
  return t498;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE4baseEv
char** __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v499) {
bb500:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this501;
  char** __retval502;
  this501 = v499;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t503 = this501;
  __retval502 = &t503->_M_current;
  char** t504 = __retval502;
  return t504;
}

// function: _ZN9__gnu_cxxmiIPKcPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEDTmicldtfp_4baseEcldtfp0_4baseEERKNS_17__normal_iteratorIT_T1_EERKNSB_IT0_SD_EE
long decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v505, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v506) {
bb507:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __lhs508;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __rhs509;
  long __retval510;
  __lhs508 = v505;
  __rhs509 = v506;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t511 = __lhs508;
  char** r512 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t511);
  char* t513 = *r512;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t514 = __rhs509;
  char** r515 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t514);
  char* t516 = *r515;
  long diff517 = t513 - t516;
  __retval510 = diff517;
  long t518 = __retval510;
  return t518;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5eraseEN9__gnu_cxx17__normal_iteratorIPKcS4_EE
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____erase(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v519, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v520) {
bb521:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this522;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __position523;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval524;
  unsigned long __pos525;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp0526;
  char* ref_tmp1527;
  this522 = v519;
  __position523 = v520;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t528 = this522;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r529 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(t528);
  ref_tmp0526 = r529;
  long r530 = decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__position523, &ref_tmp0526);
  unsigned long cast531 = (unsigned long)r530;
  __pos525 = cast531;
  unsigned long t532 = __pos525;
  unsigned long c533 = 1;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_erase(t528, t532, c533);
  char* r534 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t528);
  unsigned long t535 = __pos525;
  char* ptr536 = &(r534)[t535];
  ref_tmp1527 = ptr536;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval524, &ref_tmp1527);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t537 = __retval524;
  return t537;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
void _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v538, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v539) {
bb540:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this541;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __i542;
  this541 = v538;
  __i542 = v539;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t543 = this541;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t544 = __i542;
  char** r545 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t544);
  char* t546 = *r545;
  t543->_M_current = t546;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v547) {
bb548:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this549;
  this549 = v547;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t550 = this549;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t550);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t550->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb551:
  int __retval552;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str553;
  struct std__allocator_char_ ref_tmp0554;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ it555;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp1556;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp2557;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp0558;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp1559;
  int c560 = 0;
  __retval552 = c560;
  char* cast561 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0554);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str553, cast561, &ref_tmp0554);
  {
    std__allocator_char____allocator(&ref_tmp0554);
  }
    __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator_2(&it555);
    unsigned long c562 = 10;
    unsigned long c563 = 8;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r564 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____erase_2(&str553, c562, c563);
    char* cast565 = (char*)&(_str_1);
    _Bool r566 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str553, cast565);
    _Bool u567 = !r566;
    if (u567) {
    } else {
      char* cast568 = (char*)&(_str_2);
      char* c569 = _str_3;
      unsigned int c570 = 22;
      char* cast571 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast568, c569, c570, cast571);
    }
    struct std__basic_ostream_char__std__char_traits_char__* r572 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str553);
    struct std__basic_ostream_char__std__char_traits_char__* r573 = std__ostream__operator___std__ostream_____(r572, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r574 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(&str553);
    ref_tmp2557 = r574;
    long c575 = 9;
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r576 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(&ref_tmp2557, c575);
    ref_tmp1556 = r576;
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* r577 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator_(&it555, &ref_tmp1556);
    _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp0558, &it555);
    struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t578 = agg_tmp0558;
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r579 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____erase(&str553, t578);
    agg_tmp1559 = r579;
    char* cast580 = (char*)&(_str_4);
    _Bool r581 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str553, cast580);
    _Bool u582 = !r581;
    if (u582) {
    } else {
      char* cast583 = (char*)&(_str_5);
      char* c584 = _str_3;
      unsigned int c585 = 27;
      char* cast586 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast583, c584, c585, cast586);
    }
    struct std__basic_ostream_char__std__char_traits_char__* r587 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str553);
    struct std__basic_ostream_char__std__char_traits_char__* r588 = std__ostream__operator___std__ostream_____(r587, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c589 = 0;
    __retval552 = c589;
    int t590 = __retval552;
    int ret_val591 = t590;
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str553);
    }
    return ret_val591;
  int t592 = __retval552;
  return t592;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v593) {
bb594:
  struct std____new_allocator_char_* this595;
  this595 = v593;
  struct std____new_allocator_char_* t596 = this595;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v597) {
bb598:
  char* __r599;
  char* __retval600;
  __r599 = v597;
  char* t601 = __r599;
  __retval600 = t601;
  char* t602 = __retval600;
  return t602;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v603) {
bb604:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this605;
  char* __retval606;
  this605 = v603;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t607 = this605;
  char* cast608 = (char*)&(t607->field2._M_local_buf);
  char* r609 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast608);
  __retval606 = r609;
  char* t610 = __retval606;
  return t610;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v611, char* v612, struct std__allocator_char_* v613) {
bb614:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this615;
  char* __dat616;
  struct std__allocator_char_* __a617;
  this615 = v611;
  __dat616 = v612;
  __a617 = v613;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t618 = this615;
  struct std__allocator_char_* base619 = (struct std__allocator_char_*)((char *)t618 + 0);
  struct std__allocator_char_* t620 = __a617;
  std__allocator_char___allocator(base619, t620);
    char* t621 = __dat616;
    t618->_M_p = t621;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb622:
  _Bool __retval623;
    _Bool c624 = 0;
    __retval623 = c624;
    _Bool t625 = __retval623;
    return t625;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v626, char* v627) {
bb628:
  char* __c1629;
  char* __c2630;
  _Bool __retval631;
  __c1629 = v626;
  __c2630 = v627;
  char* t632 = __c1629;
  char t633 = *t632;
  int cast634 = (int)t633;
  char* t635 = __c2630;
  char t636 = *t635;
  int cast637 = (int)t636;
  _Bool c638 = ((cast634 == cast637)) ? 1 : 0;
  __retval631 = c638;
  _Bool t639 = __retval631;
  return t639;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v640) {
bb641:
  char* __p642;
  unsigned long __retval643;
  unsigned long __i644;
  __p642 = v640;
  unsigned long c645 = 0;
  __i644 = c645;
    char ref_tmp0646;
    while (1) {
      unsigned long t647 = __i644;
      char* t648 = __p642;
      char* ptr649 = &(t648)[t647];
      char c650 = 0;
      ref_tmp0646 = c650;
      _Bool r651 = __gnu_cxx__char_traits_char___eq(ptr649, &ref_tmp0646);
      _Bool u652 = !r651;
      if (!u652) break;
      unsigned long t653 = __i644;
      unsigned long u654 = t653 + 1;
      __i644 = u654;
    }
  unsigned long t655 = __i644;
  __retval643 = t655;
  unsigned long t656 = __retval643;
  return t656;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v657) {
bb658:
  char* __s659;
  unsigned long __retval660;
  __s659 = v657;
    _Bool r661 = std____is_constant_evaluated();
    if (r661) {
      char* t662 = __s659;
      unsigned long r663 = __gnu_cxx__char_traits_char___length(t662);
      __retval660 = r663;
      unsigned long t664 = __retval660;
      return t664;
    }
  char* t665 = __s659;
  unsigned long r666 = strlen(t665);
  __retval660 = r666;
  unsigned long t667 = __retval660;
  return t667;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v668, char* v669, struct std__random_access_iterator_tag v670) {
bb671:
  char* __first672;
  char* __last673;
  struct std__random_access_iterator_tag unnamed674;
  long __retval675;
  __first672 = v668;
  __last673 = v669;
  unnamed674 = v670;
  char* t676 = __last673;
  char* t677 = __first672;
  long diff678 = t676 - t677;
  __retval675 = diff678;
  long t679 = __retval675;
  return t679;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v680) {
bb681:
  char** unnamed682;
  struct std__random_access_iterator_tag __retval683;
  unnamed682 = v680;
  struct std__random_access_iterator_tag t684 = __retval683;
  return t684;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v685, char* v686) {
bb687:
  char* __first688;
  char* __last689;
  long __retval690;
  struct std__random_access_iterator_tag agg_tmp0691;
  __first688 = v685;
  __last689 = v686;
  char* t692 = __first688;
  char* t693 = __last689;
  struct std__random_access_iterator_tag r694 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first688);
  agg_tmp0691 = r694;
  struct std__random_access_iterator_tag t695 = agg_tmp0691;
  long r696 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t692, t693, t695);
  __retval690 = r696;
  long t697 = __retval690;
  return t697;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v698, char* v699) {
bb700:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this701;
  char* __p702;
  this701 = v698;
  __p702 = v699;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t703 = this701;
  char* t704 = __p702;
  t703->_M_dataplus._M_p = t704;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v705) {
bb706:
  struct std__allocator_char_* __a707;
  unsigned long __retval708;
  __a707 = v705;
  unsigned long c709 = -1;
  unsigned long c710 = 1;
  unsigned long b711 = c709 / c710;
  __retval708 = b711;
  unsigned long t712 = __retval708;
  return t712;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v713) {
bb714:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this715;
  struct std__allocator_char_* __retval716;
  this715 = v713;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t717 = this715;
  struct std__allocator_char_* base718 = (struct std__allocator_char_*)((char *)&(t717->_M_dataplus) + 0);
  __retval716 = base718;
  struct std__allocator_char_* t719 = __retval716;
  return t719;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v720, unsigned long* v721) {
bb722:
  unsigned long* __a723;
  unsigned long* __b724;
  unsigned long* __retval725;
  __a723 = v720;
  __b724 = v721;
    unsigned long* t726 = __b724;
    unsigned long t727 = *t726;
    unsigned long* t728 = __a723;
    unsigned long t729 = *t728;
    _Bool c730 = ((t727 < t729)) ? 1 : 0;
    if (c730) {
      unsigned long* t731 = __b724;
      __retval725 = t731;
      unsigned long* t732 = __retval725;
      return t732;
    }
  unsigned long* t733 = __a723;
  __retval725 = t733;
  unsigned long* t734 = __retval725;
  return t734;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v735) {
bb736:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this737;
  unsigned long __retval738;
  unsigned long __diffmax739;
  unsigned long __allocmax740;
  this737 = v735;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t741 = this737;
  unsigned long c742 = 9223372036854775807;
  __diffmax739 = c742;
  struct std__allocator_char_* r743 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t741);
  unsigned long r744 = std__allocator_traits_std__allocator_char_____max_size(r743);
  __allocmax740 = r744;
  unsigned long* r745 = unsigned_long_const__std__min_unsigned_long_(&__diffmax739, &__allocmax740);
  unsigned long t746 = *r745;
  unsigned long c747 = 1;
  unsigned long b748 = t746 - c747;
  __retval738 = b748;
  unsigned long t749 = __retval738;
  return t749;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v750) {
bb751:
  struct std____new_allocator_char_* this752;
  unsigned long __retval753;
  this752 = v750;
  struct std____new_allocator_char_* t754 = this752;
  unsigned long c755 = 9223372036854775807;
  unsigned long c756 = 1;
  unsigned long b757 = c755 / c756;
  __retval753 = b757;
  unsigned long t758 = __retval753;
  return t758;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v759, unsigned long v760, void* v761) {
bb762:
  struct std____new_allocator_char_* this763;
  unsigned long __n764;
  void* unnamed765;
  char* __retval766;
  this763 = v759;
  __n764 = v760;
  unnamed765 = v761;
  struct std____new_allocator_char_* t767 = this763;
    unsigned long t768 = __n764;
    unsigned long r769 = std____new_allocator_char____M_max_size___const(t767);
    _Bool c770 = ((t768 > r769)) ? 1 : 0;
    if (c770) {
        unsigned long t771 = __n764;
        unsigned long c772 = -1;
        unsigned long c773 = 1;
        unsigned long b774 = c772 / c773;
        _Bool c775 = ((t771 > b774)) ? 1 : 0;
        if (c775) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c776 = 1;
    unsigned long c777 = 16;
    _Bool c778 = ((c776 > c777)) ? 1 : 0;
    if (c778) {
      unsigned long __al779;
      unsigned long c780 = 1;
      __al779 = c780;
      unsigned long t781 = __n764;
      unsigned long c782 = 1;
      unsigned long b783 = t781 * c782;
      unsigned long t784 = __al779;
      void* r785 = operator_new_2(b783, t784);
      char* cast786 = (char*)r785;
      __retval766 = cast786;
      char* t787 = __retval766;
      return t787;
    }
  unsigned long t788 = __n764;
  unsigned long c789 = 1;
  unsigned long b790 = t788 * c789;
  void* r791 = operator_new(b790);
  char* cast792 = (char*)r791;
  __retval766 = cast792;
  char* t793 = __retval766;
  return t793;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v794, unsigned long v795) {
bb796:
  struct std__allocator_char_* this797;
  unsigned long __n798;
  char* __retval799;
  this797 = v794;
  __n798 = v795;
  struct std__allocator_char_* t800 = this797;
    _Bool r801 = std____is_constant_evaluated();
    if (r801) {
        unsigned long t802 = __n798;
        unsigned long c803 = 1;
        unsigned long ovr804;
        _Bool ovf805 = __builtin_mul_overflow(t802, c803, &ovr804);
        __n798 = ovr804;
        if (ovf805) {
          std____throw_bad_array_new_length();
        }
      unsigned long t806 = __n798;
      void* r807 = operator_new(t806);
      char* cast808 = (char*)r807;
      __retval799 = cast808;
      char* t809 = __retval799;
      return t809;
    }
  struct std____new_allocator_char_* base810 = (struct std____new_allocator_char_*)((char *)t800 + 0);
  unsigned long t811 = __n798;
  void* c812 = ((void*)0);
  char* r813 = std____new_allocator_char___allocate(base810, t811, c812);
  __retval799 = r813;
  char* t814 = __retval799;
  return t814;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v815, unsigned long v816) {
bb817:
  struct std__allocator_char_* __a818;
  unsigned long __n819;
  char* __retval820;
  __a818 = v815;
  __n819 = v816;
  struct std__allocator_char_* t821 = __a818;
  unsigned long t822 = __n819;
  char* r823 = std__allocator_char___allocate(t821, t822);
  __retval820 = r823;
  char* t824 = __retval820;
  return t824;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v825, unsigned long v826) {
bb827:
  struct std__allocator_char_* __a828;
  unsigned long __n829;
  char* __retval830;
  char* __p831;
  __a828 = v825;
  __n829 = v826;
  struct std__allocator_char_* t832 = __a828;
  unsigned long t833 = __n829;
  char* r834 = std__allocator_traits_std__allocator_char_____allocate(t832, t833);
  __p831 = r834;
  char* t835 = __p831;
  __retval830 = t835;
  char* t836 = __retval830;
  return t836;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v837) {
bb838:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this839;
  struct std__allocator_char_* __retval840;
  this839 = v837;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t841 = this839;
  struct std__allocator_char_* base842 = (struct std__allocator_char_*)((char *)&(t841->_M_dataplus) + 0);
  __retval840 = base842;
  struct std__allocator_char_* t843 = __retval840;
  return t843;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v844, unsigned long* v845, unsigned long v846) {
bb847:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this848;
  unsigned long* __capacity849;
  unsigned long __old_capacity850;
  char* __retval851;
  this848 = v844;
  __capacity849 = v845;
  __old_capacity850 = v846;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t852 = this848;
    unsigned long* t853 = __capacity849;
    unsigned long t854 = *t853;
    unsigned long r855 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t852);
    _Bool c856 = ((t854 > r855)) ? 1 : 0;
    if (c856) {
      char* cast857 = (char*)&(_str_7);
      std____throw_length_error(cast857);
    }
    unsigned long* t858 = __capacity849;
    unsigned long t859 = *t858;
    unsigned long t860 = __old_capacity850;
    _Bool c861 = ((t859 > t860)) ? 1 : 0;
    _Bool ternary862;
    if (c861) {
      unsigned long* t863 = __capacity849;
      unsigned long t864 = *t863;
      unsigned long c865 = 2;
      unsigned long t866 = __old_capacity850;
      unsigned long b867 = c865 * t866;
      _Bool c868 = ((t864 < b867)) ? 1 : 0;
      ternary862 = (_Bool)c868;
    } else {
      _Bool c869 = 0;
      ternary862 = (_Bool)c869;
    }
    if (ternary862) {
      unsigned long c870 = 2;
      unsigned long t871 = __old_capacity850;
      unsigned long b872 = c870 * t871;
      unsigned long* t873 = __capacity849;
      *t873 = b872;
        unsigned long* t874 = __capacity849;
        unsigned long t875 = *t874;
        unsigned long r876 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t852);
        _Bool c877 = ((t875 > r876)) ? 1 : 0;
        if (c877) {
          unsigned long r878 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t852);
          unsigned long* t879 = __capacity849;
          *t879 = r878;
        }
    }
  struct std__allocator_char_* r880 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t852);
  unsigned long* t881 = __capacity849;
  unsigned long t882 = *t881;
  unsigned long c883 = 1;
  unsigned long b884 = t882 + c883;
  char* r885 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r880, b884);
  __retval851 = r885;
  char* t886 = __retval851;
  return t886;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v887, unsigned long v888) {
bb889:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this890;
  unsigned long __capacity891;
  this890 = v887;
  __capacity891 = v888;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t892 = this890;
  unsigned long t893 = __capacity891;
  t892->field2._M_allocated_capacity = t893;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb894:
  _Bool __retval895;
    _Bool c896 = 0;
    __retval895 = c896;
    _Bool t897 = __retval895;
    return t897;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v898) {
bb899:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this900;
  this900 = v898;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t901 = this900;
    _Bool r902 = std__is_constant_evaluated();
    if (r902) {
        unsigned long __i903;
        unsigned long c904 = 0;
        __i903 = c904;
        while (1) {
          unsigned long t906 = __i903;
          unsigned long c907 = 15;
          _Bool c908 = ((t906 <= c907)) ? 1 : 0;
          if (!c908) break;
          char c909 = 0;
          unsigned long t910 = __i903;
          t901->field2._M_local_buf[t910] = c909;
        for_step905: ;
          unsigned long t911 = __i903;
          unsigned long u912 = t911 + 1;
          __i903 = u912;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v913, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v914) {
bb915:
  struct _Guard* this916;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s917;
  this916 = v913;
  __s917 = v914;
  struct _Guard* t918 = this916;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t919 = __s917;
  t918->_M_guarded = t919;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v920, char* v921) {
bb922:
  char* __location923;
  char* __args924;
  char* __retval925;
  void* __loc926;
  __location923 = v920;
  __args924 = v921;
  char* t927 = __location923;
  void* cast928 = (void*)t927;
  __loc926 = cast928;
    void* t929 = __loc926;
    char* cast930 = (char*)t929;
    char* t931 = __args924;
    char t932 = *t931;
    *cast930 = t932;
    __retval925 = cast930;
    char* t933 = __retval925;
    return t933;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v934, char* v935) {
bb936:
  char* __c1937;
  char* __c2938;
  __c1937 = v934;
  __c2938 = v935;
    _Bool r939 = std____is_constant_evaluated();
    if (r939) {
      char* t940 = __c1937;
      char* t941 = __c2938;
      char* r942 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t940, t941);
    } else {
      char* t943 = __c2938;
      char t944 = *t943;
      char* t945 = __c1937;
      *t945 = t944;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v946, char* v947, unsigned long v948) {
bb949:
  char* __s1950;
  char* __s2951;
  unsigned long __n952;
  char* __retval953;
  __s1950 = v946;
  __s2951 = v947;
  __n952 = v948;
    unsigned long t954 = __n952;
    unsigned long c955 = 0;
    _Bool c956 = ((t954 == c955)) ? 1 : 0;
    if (c956) {
      char* t957 = __s1950;
      __retval953 = t957;
      char* t958 = __retval953;
      return t958;
    }
    _Bool r959 = std____is_constant_evaluated();
    if (r959) {
        unsigned long __i960;
        unsigned long c961 = 0;
        __i960 = c961;
        while (1) {
          unsigned long t963 = __i960;
          unsigned long t964 = __n952;
          _Bool c965 = ((t963 < t964)) ? 1 : 0;
          if (!c965) break;
          char* t966 = __s1950;
          unsigned long t967 = __i960;
          char* ptr968 = &(t966)[t967];
          unsigned long t969 = __i960;
          char* t970 = __s2951;
          char* ptr971 = &(t970)[t969];
          char* r972 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr968, ptr971);
        for_step962: ;
          unsigned long t973 = __i960;
          unsigned long u974 = t973 + 1;
          __i960 = u974;
        }
      char* t975 = __s1950;
      __retval953 = t975;
      char* t976 = __retval953;
      return t976;
    }
  char* t977 = __s1950;
  void* cast978 = (void*)t977;
  char* t979 = __s2951;
  void* cast980 = (void*)t979;
  unsigned long t981 = __n952;
  unsigned long c982 = 1;
  unsigned long b983 = t981 * c982;
  void* r984 = memcpy(cast978, cast980, b983);
  char* t985 = __s1950;
  __retval953 = t985;
  char* t986 = __retval953;
  return t986;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v987, char* v988, unsigned long v989) {
bb990:
  char* __s1991;
  char* __s2992;
  unsigned long __n993;
  char* __retval994;
  __s1991 = v987;
  __s2992 = v988;
  __n993 = v989;
    unsigned long t995 = __n993;
    unsigned long c996 = 0;
    _Bool c997 = ((t995 == c996)) ? 1 : 0;
    if (c997) {
      char* t998 = __s1991;
      __retval994 = t998;
      char* t999 = __retval994;
      return t999;
    }
    _Bool r1000 = std____is_constant_evaluated();
    if (r1000) {
      char* t1001 = __s1991;
      char* t1002 = __s2992;
      unsigned long t1003 = __n993;
      char* r1004 = __gnu_cxx__char_traits_char___copy(t1001, t1002, t1003);
      __retval994 = r1004;
      char* t1005 = __retval994;
      return t1005;
    }
  char* t1006 = __s1991;
  void* cast1007 = (void*)t1006;
  char* t1008 = __s2992;
  void* cast1009 = (void*)t1008;
  unsigned long t1010 = __n993;
  void* r1011 = memcpy(cast1007, cast1009, t1010);
  char* cast1012 = (char*)r1011;
  __retval994 = cast1012;
  char* t1013 = __retval994;
  return t1013;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1014, char* v1015, unsigned long v1016) {
bb1017:
  char* __d1018;
  char* __s1019;
  unsigned long __n1020;
  __d1018 = v1014;
  __s1019 = v1015;
  __n1020 = v1016;
    unsigned long t1021 = __n1020;
    unsigned long c1022 = 1;
    _Bool c1023 = ((t1021 == c1022)) ? 1 : 0;
    if (c1023) {
      char* t1024 = __d1018;
      char* t1025 = __s1019;
      std__char_traits_char___assign(t1024, t1025);
    } else {
      char* t1026 = __d1018;
      char* t1027 = __s1019;
      unsigned long t1028 = __n1020;
      char* r1029 = std__char_traits_char___copy(t1026, t1027, t1028);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1030) {
bb1031:
  char* __it1032;
  char* __retval1033;
  __it1032 = v1030;
  char* t1034 = __it1032;
  __retval1033 = t1034;
  char* t1035 = __retval1033;
  return t1035;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1036, char* v1037, char* v1038) {
bb1039:
  char* __p1040;
  char* __k11041;
  char* __k21042;
  __p1040 = v1036;
  __k11041 = v1037;
  __k21042 = v1038;
    char* t1043 = __p1040;
    char* t1044 = __k11041;
    char* r1045 = char_const__std____niter_base_char_const__(t1044);
    char* t1046 = __k21042;
    char* t1047 = __k11041;
    long diff1048 = t1046 - t1047;
    unsigned long cast1049 = (unsigned long)diff1048;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1043, r1045, cast1049);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1050) {
bb1051:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1052;
  char* __retval1053;
  this1052 = v1050;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1054 = this1052;
  char* t1055 = t1054->_M_dataplus._M_p;
  __retval1053 = t1055;
  char* t1056 = __retval1053;
  return t1056;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1057, unsigned long v1058) {
bb1059:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1060;
  unsigned long __length1061;
  this1060 = v1057;
  __length1061 = v1058;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1062 = this1060;
  unsigned long t1063 = __length1061;
  t1062->_M_string_length = t1063;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1064, unsigned long v1065) {
bb1066:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1067;
  unsigned long __n1068;
  char ref_tmp01069;
  this1067 = v1064;
  __n1068 = v1065;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1070 = this1067;
  unsigned long t1071 = __n1068;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1070, t1071);
  unsigned long t1072 = __n1068;
  char* r1073 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1070);
  char* ptr1074 = &(r1073)[t1072];
  char c1075 = 0;
  ref_tmp01069 = c1075;
  std__char_traits_char___assign(ptr1074, &ref_tmp01069);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1076) {
bb1077:
  struct _Guard* this1078;
  this1078 = v1076;
  struct _Guard* t1079 = this1078;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1080 = t1079->_M_guarded;
    _Bool cast1081 = (_Bool)t1080;
    if (cast1081) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1082 = t1079->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1082);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1083, char* v1084, char* v1085, struct std__forward_iterator_tag v1086) {
bb1087:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1088;
  char* __beg1089;
  char* __end1090;
  struct std__forward_iterator_tag unnamed1091;
  unsigned long __dnew1092;
  struct _Guard __guard1093;
  this1088 = v1083;
  __beg1089 = v1084;
  __end1090 = v1085;
  unnamed1091 = v1086;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1094 = this1088;
  char* t1095 = __beg1089;
  char* t1096 = __end1090;
  long r1097 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1095, t1096);
  unsigned long cast1098 = (unsigned long)r1097;
  __dnew1092 = cast1098;
    unsigned long t1099 = __dnew1092;
    unsigned long c1100 = 15;
    _Bool c1101 = ((t1099 > c1100)) ? 1 : 0;
    if (c1101) {
      unsigned long c1102 = 0;
      char* r1103 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1094, &__dnew1092, c1102);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1094, r1103);
      unsigned long t1104 = __dnew1092;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1094, t1104);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1094);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1093, t1094);
    char* r1105 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1094);
    char* t1106 = __beg1089;
    char* t1107 = __end1090;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1105, t1106, t1107);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1108 = ((void*)0);
    __guard1093._M_guarded = c1108;
    unsigned long t1109 = __dnew1092;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1094, t1109);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1093);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1110) {
bb1111:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1112;
  this1112 = v1110;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1113 = this1112;
  {
    struct std__allocator_char_* base1114 = (struct std__allocator_char_*)((char *)t1113 + 0);
    std__allocator_char____allocator(base1114);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1115, struct std____new_allocator_char_* v1116) {
bb1117:
  struct std____new_allocator_char_* this1118;
  struct std____new_allocator_char_* unnamed1119;
  this1118 = v1115;
  unnamed1119 = v1116;
  struct std____new_allocator_char_* t1120 = this1118;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1121, struct std__allocator_char_* v1122) {
bb1123:
  struct std__allocator_char_* this1124;
  struct std__allocator_char_* __a1125;
  this1124 = v1121;
  __a1125 = v1122;
  struct std__allocator_char_* t1126 = this1124;
  struct std____new_allocator_char_* base1127 = (struct std____new_allocator_char_*)((char *)t1126 + 0);
  struct std__allocator_char_* t1128 = __a1125;
  struct std____new_allocator_char_* base1129 = (struct std____new_allocator_char_*)((char *)t1128 + 0);
  std____new_allocator_char_____new_allocator(base1127, base1129);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1130) {
bb1131:
  char* __r1132;
  char* __retval1133;
  __r1132 = v1130;
  char* t1134 = __r1132;
  __retval1133 = t1134;
  char* t1135 = __retval1133;
  return t1135;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1136) {
bb1137:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1138;
  char* __retval1139;
  this1138 = v1136;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1140 = this1138;
  char* cast1141 = (char*)&(t1140->field2._M_local_buf);
  char* r1142 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1141);
  __retval1139 = r1142;
  char* t1143 = __retval1139;
  return t1143;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1144) {
bb1145:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1146;
  _Bool __retval1147;
  this1146 = v1144;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1148 = this1146;
    char* r1149 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1148);
    char* r1150 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1148);
    _Bool c1151 = ((r1149 == r1150)) ? 1 : 0;
    if (c1151) {
        unsigned long t1152 = t1148->_M_string_length;
        unsigned long c1153 = 15;
        _Bool c1154 = ((t1152 > c1153)) ? 1 : 0;
        if (c1154) {
          __builtin_unreachable();
        }
      _Bool c1155 = 1;
      __retval1147 = c1155;
      _Bool t1156 = __retval1147;
      return t1156;
    }
  _Bool c1157 = 0;
  __retval1147 = c1157;
  _Bool t1158 = __retval1147;
  return t1158;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1159, char* v1160, unsigned long v1161) {
bb1162:
  struct std____new_allocator_char_* this1163;
  char* __p1164;
  unsigned long __n1165;
  this1163 = v1159;
  __p1164 = v1160;
  __n1165 = v1161;
  struct std____new_allocator_char_* t1166 = this1163;
    unsigned long c1167 = 1;
    unsigned long c1168 = 16;
    _Bool c1169 = ((c1167 > c1168)) ? 1 : 0;
    if (c1169) {
      char* t1170 = __p1164;
      void* cast1171 = (void*)t1170;
      unsigned long t1172 = __n1165;
      unsigned long c1173 = 1;
      unsigned long b1174 = t1172 * c1173;
      unsigned long c1175 = 1;
      operator_delete_3(cast1171, b1174, c1175);
      return;
    }
  char* t1176 = __p1164;
  void* cast1177 = (void*)t1176;
  unsigned long t1178 = __n1165;
  unsigned long c1179 = 1;
  unsigned long b1180 = t1178 * c1179;
  operator_delete_2(cast1177, b1180);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1181, char* v1182, unsigned long v1183) {
bb1184:
  struct std__allocator_char_* this1185;
  char* __p1186;
  unsigned long __n1187;
  this1185 = v1181;
  __p1186 = v1182;
  __n1187 = v1183;
  struct std__allocator_char_* t1188 = this1185;
    _Bool r1189 = std____is_constant_evaluated();
    if (r1189) {
      char* t1190 = __p1186;
      void* cast1191 = (void*)t1190;
      operator_delete(cast1191);
      return;
    }
  struct std____new_allocator_char_* base1192 = (struct std____new_allocator_char_*)((char *)t1188 + 0);
  char* t1193 = __p1186;
  unsigned long t1194 = __n1187;
  std____new_allocator_char___deallocate(base1192, t1193, t1194);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1195, char* v1196, unsigned long v1197) {
bb1198:
  struct std__allocator_char_* __a1199;
  char* __p1200;
  unsigned long __n1201;
  __a1199 = v1195;
  __p1200 = v1196;
  __n1201 = v1197;
  struct std__allocator_char_* t1202 = __a1199;
  char* t1203 = __p1200;
  unsigned long t1204 = __n1201;
  std__allocator_char___deallocate(t1202, t1203, t1204);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1205, unsigned long v1206) {
bb1207:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1208;
  unsigned long __size1209;
  this1208 = v1205;
  __size1209 = v1206;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1210 = this1208;
  struct std__allocator_char_* r1211 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1210);
  char* r1212 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1210);
  unsigned long t1213 = __size1209;
  unsigned long c1214 = 1;
  unsigned long b1215 = t1213 + c1214;
  std__allocator_traits_std__allocator_char_____deallocate(r1211, r1212, b1215);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1216) {
bb1217:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1218;
  this1218 = v1216;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1219 = this1218;
    _Bool r1220 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1219);
    _Bool u1221 = !r1220;
    if (u1221) {
      unsigned long t1222 = t1219->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1219, t1222);
    }
  return;
}

