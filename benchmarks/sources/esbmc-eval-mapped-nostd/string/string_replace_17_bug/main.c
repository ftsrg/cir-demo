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
struct std__less_const_char___ { unsigned char __field0; };
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

char _str[23] = "this is a test string.";
char _str_1[10] = "n example";
char _str_2[14] = "sample phrase";
char _str_3[8] = "useful.";
char _str_4[27] = "this is an example string.";
char _str_5[36] = "str != \"this is an example string.\"";
char _str_6[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_replace_17_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_7[27] = "this is an example phrase.";
char _str_8[36] = "str != \"this is an example phrase.\"";
char _str_9[9] = "just all";
char _str_10[23] = "this is just a phrase.";
char _str_11[32] = "str != \"this is just a phrase.\"";
char _str_12[8] = "a short";
char _str_13[24] = "this is a short phrase.";
char _str_14[33] = "str != \"this is a short phrase.\"";
char _str_15[26] = "this is a short phrase!!!";
char _str_16[35] = "str != \"this is a short phrase!!!\"";
char _str_17[17] = "sample phrase!!!";
char _str_18[26] = "str != \"sample phrase!!!\"";
char _str_19[11] = "replace it";
char _str_20[18] = "replace phrase!!!";
char _str_21[27] = "str != \"replace phrase!!!\"";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_22[50] = "basic_string: construction from null is not valid";
char _str_23[24] = "basic_string::_M_create";
char _str_24[22] = "basic_string::replace";
char _str_25[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_26[25] = "basic_string::_M_replace";
char _str_27[29] = "basic_string::_M_replace_aux";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_5(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p3);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_6(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p3, unsigned long p4, unsigned long p5);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* p0, char* p1, char* p2);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void __gnu_cxx__char_traits_char___assign_2(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___move(char* p0, char* p1, unsigned long p2);
extern void* memmove(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, char* p3, unsigned long p4, unsigned long p5);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_4(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___assign(char* p0, unsigned long p1, char p2);
extern void* memset(void* p0, int p1, unsigned long p2);
char* std__char_traits_char___assign(char* p0, unsigned long p1, char p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(char* p0, unsigned long p1, char p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, unsigned long p3, char p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_7(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, unsigned long p3, char p4);
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, char** p1);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p3);
void _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, long p1);
char** __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);
long decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
long __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p2, char* p3, unsigned long p4);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const_2(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, long p1);
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
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
int main();
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
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
void std__char_traits_char___assign_2(char* p0, char* p1);
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
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* p0);
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_true_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char** __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);

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
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t14->_M_dataplus, r15, t16);
      char* t17 = __s10;
      char* c18 = ((void*)0);
      _Bool c19 = ((t17 == c18)) ? 1 : 0;
      if (c19) {
        char* cast20 = (char*)&(_str_22);
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

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v32, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v33) {
bb34:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this35;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str36;
  struct std__allocator_char_ ref_tmp037;
  this35 = v32;
  __str36 = v33;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t38 = this35;
  char* r39 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t38);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t40 = __str36;
  struct std__allocator_char_* r41 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t40);
  struct std__allocator_char_ r42 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(r41);
  ref_tmp037 = r42;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t38->_M_dataplus, r39, &ref_tmp037);
  {
    std__allocator_char____allocator(&ref_tmp037);
  }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t43 = __str36;
    char* r44 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t43);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t45 = __str36;
    unsigned long r46 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t45);
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_true_(t38, r44, r46);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEmmRKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_5(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v47, unsigned long v48, unsigned long v49, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v50) {
bb51:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this52;
  unsigned long __pos53;
  unsigned long __n54;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str55;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval56;
  this52 = v47;
  __pos53 = v48;
  __n54 = v49;
  __str55 = v50;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t57 = this52;
  unsigned long t58 = __pos53;
  unsigned long t59 = __n54;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t60 = __str55;
  char* r61 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t60);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t62 = __str55;
  unsigned long r63 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t62);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r64 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_4(t57, t58, t59, r61, r63);
  __retval56 = r64;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t65 = __retval56;
  return t65;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v66, char* v67) {
bb68:
  char* __c169;
  char* __c270;
  _Bool __retval71;
  __c169 = v66;
  __c270 = v67;
  char* t72 = __c169;
  char t73 = *t72;
  unsigned char cast74 = (unsigned char)t73;
  int cast75 = (int)cast74;
  char* t76 = __c270;
  char t77 = *t76;
  unsigned char cast78 = (unsigned char)t77;
  int cast79 = (int)cast78;
  _Bool c80 = ((cast75 < cast79)) ? 1 : 0;
  __retval71 = c80;
  _Bool t81 = __retval71;
  return t81;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v82, char* v83, unsigned long v84) {
bb85:
  char* __s186;
  char* __s287;
  unsigned long __n88;
  int __retval89;
  __s186 = v82;
  __s287 = v83;
  __n88 = v84;
    unsigned long t90 = __n88;
    unsigned long c91 = 0;
    _Bool c92 = ((t90 == c91)) ? 1 : 0;
    if (c92) {
      int c93 = 0;
      __retval89 = c93;
      int t94 = __retval89;
      return t94;
    }
    _Bool r95 = std____is_constant_evaluated();
    if (r95) {
        unsigned long __i96;
        unsigned long c97 = 0;
        __i96 = c97;
        while (1) {
          unsigned long t99 = __i96;
          unsigned long t100 = __n88;
          _Bool c101 = ((t99 < t100)) ? 1 : 0;
          if (!c101) break;
            unsigned long t102 = __i96;
            char* t103 = __s186;
            char* ptr104 = &(t103)[t102];
            unsigned long t105 = __i96;
            char* t106 = __s287;
            char* ptr107 = &(t106)[t105];
            _Bool r108 = std__char_traits_char___lt(ptr104, ptr107);
            if (r108) {
              int c109 = -1;
              __retval89 = c109;
              int t110 = __retval89;
              int ret_val111 = t110;
              return ret_val111;
            } else {
                unsigned long t112 = __i96;
                char* t113 = __s287;
                char* ptr114 = &(t113)[t112];
                unsigned long t115 = __i96;
                char* t116 = __s186;
                char* ptr117 = &(t116)[t115];
                _Bool r118 = std__char_traits_char___lt(ptr114, ptr117);
                if (r118) {
                  int c119 = 1;
                  __retval89 = c119;
                  int t120 = __retval89;
                  int ret_val121 = t120;
                  return ret_val121;
                }
            }
        for_step98: ;
          unsigned long t122 = __i96;
          unsigned long u123 = t122 + 1;
          __i96 = u123;
        }
      int c124 = 0;
      __retval89 = c124;
      int t125 = __retval89;
      return t125;
    }
  char* t126 = __s186;
  void* cast127 = (void*)t126;
  char* t128 = __s287;
  void* cast129 = (void*)t128;
  unsigned long t130 = __n88;
  int r131 = memcmp(cast127, cast129, t130);
  __retval89 = r131;
  int t132 = __retval89;
  return t132;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v133) {
bb134:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this135;
  char* __retval136;
  this135 = v133;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t137 = this135;
  char* r138 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t137);
  __retval136 = r138;
  char* t139 = __retval136;
  return t139;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v140, char* v141) {
bb142:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs143;
  char* __rhs144;
  _Bool __retval145;
  __lhs143 = v140;
  __rhs144 = v141;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t146 = __lhs143;
  unsigned long r147 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t146);
  char* t148 = __rhs144;
  unsigned long r149 = std__char_traits_char___length(t148);
  _Bool c150 = ((r147 == r149)) ? 1 : 0;
  _Bool ternary151;
  if (c150) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t152 = __lhs143;
    char* r153 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t152);
    char* t154 = __rhs144;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t155 = __lhs143;
    unsigned long r156 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t155);
    int r157 = std__char_traits_char___compare(r153, t154, r156);
    _Bool cast158 = (_Bool)r157;
    _Bool u159 = !cast158;
    ternary151 = (_Bool)u159;
  } else {
    _Bool c160 = 0;
    ternary151 = (_Bool)c160;
  }
  __retval145 = ternary151;
  _Bool t161 = __retval145;
  return t161;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v162, unsigned long v163, char* v164) {
bb165:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this166;
  unsigned long __pos167;
  char* __s168;
  unsigned long __retval169;
  this166 = v162;
  __pos167 = v163;
  __s168 = v164;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t170 = this166;
    unsigned long t171 = __pos167;
    unsigned long r172 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t170);
    _Bool c173 = ((t171 > r172)) ? 1 : 0;
    if (c173) {
      char* cast174 = (char*)&(_str_25);
      char* t175 = __s168;
      unsigned long t176 = __pos167;
      unsigned long r177 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t170);
      std____throw_out_of_range_fmt(cast174, t175, t176, r177);
    }
  unsigned long t178 = __pos167;
  __retval169 = t178;
  unsigned long t179 = __retval169;
  return t179;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v180, unsigned long v181, unsigned long v182) {
bb183:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this184;
  unsigned long __pos185;
  unsigned long __off186;
  unsigned long __retval187;
  _Bool __testoff188;
  this184 = v180;
  __pos185 = v181;
  __off186 = v182;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t189 = this184;
  unsigned long t190 = __off186;
  unsigned long r191 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t189);
  unsigned long t192 = __pos185;
  unsigned long b193 = r191 - t192;
  _Bool c194 = ((t190 < b193)) ? 1 : 0;
  __testoff188 = c194;
  _Bool t195 = __testoff188;
  unsigned long ternary196;
  if (t195) {
    unsigned long t197 = __off186;
    ternary196 = (unsigned long)t197;
  } else {
    unsigned long r198 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t189);
    unsigned long t199 = __pos185;
    unsigned long b200 = r198 - t199;
    ternary196 = (unsigned long)b200;
  }
  __retval187 = ternary196;
  unsigned long t201 = __retval187;
  return t201;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEmmRKS4_mm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_6(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v202, unsigned long v203, unsigned long v204, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v205, unsigned long v206, unsigned long v207) {
bb208:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this209;
  unsigned long __pos1210;
  unsigned long __n1211;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str212;
  unsigned long __pos2213;
  unsigned long __n2214;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval215;
  this209 = v202;
  __pos1210 = v203;
  __n1211 = v204;
  __str212 = v205;
  __pos2213 = v206;
  __n2214 = v207;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t216 = this209;
  unsigned long t217 = __pos1210;
  unsigned long t218 = __n1211;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t219 = __str212;
  char* r220 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t219);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t221 = __str212;
  unsigned long t222 = __pos2213;
  char* cast223 = (char*)&(_str_24);
  unsigned long r224 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t221, t222, cast223);
  char* ptr225 = &(r220)[r224];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t226 = __str212;
  unsigned long t227 = __pos2213;
  unsigned long t228 = __n2214;
  unsigned long r229 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t226, t227, t228);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r230 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_4(t216, t217, t218, ptr225, r229);
  __retval215 = r230;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t231 = __retval215;
  return t231;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v232, unsigned long v233, unsigned long v234, char* v235) {
bb236:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this237;
  unsigned long __n1238;
  unsigned long __n2239;
  char* __s240;
  this237 = v232;
  __n1238 = v233;
  __n2239 = v234;
  __s240 = v235;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t241 = this237;
    unsigned long r242 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t241);
    unsigned long r243 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t241);
    unsigned long t244 = __n1238;
    unsigned long b245 = r243 - t244;
    unsigned long b246 = r242 - b245;
    unsigned long t247 = __n2239;
    _Bool c248 = ((b246 < t247)) ? 1 : 0;
    if (c248) {
      char* t249 = __s240;
      std____throw_length_error(t249);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v250) {
bb251:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this252;
  unsigned long __retval253;
  unsigned long __sz254;
  this252 = v250;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t255 = this252;
  _Bool r256 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t255);
  unsigned long ternary257;
  if (r256) {
    unsigned long c258 = 15;
    ternary257 = (unsigned long)c258;
  } else {
    unsigned long t259 = t255->field2._M_allocated_capacity;
    ternary257 = (unsigned long)t259;
  }
  __sz254 = ternary257;
    unsigned long t260 = __sz254;
    unsigned long c261 = 15;
    _Bool c262 = ((t260 < c261)) ? 1 : 0;
    _Bool ternary263;
    if (c262) {
      _Bool c264 = 1;
      ternary263 = (_Bool)c264;
    } else {
      unsigned long t265 = __sz254;
      unsigned long r266 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t255);
      _Bool c267 = ((t265 > r266)) ? 1 : 0;
      ternary263 = (_Bool)c267;
    }
    if (ternary263) {
      __builtin_unreachable();
    }
  unsigned long t268 = __sz254;
  __retval253 = t268;
  unsigned long t269 = __retval253;
  return t269;
}

// function: _ZNKSt4lessIPKcEclES1_S1_
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* v270, char* v271, char* v272) {
bb273:
  struct std__less_const_char___* this274;
  char* __x275;
  char* __y276;
  _Bool __retval277;
  this274 = v270;
  __x275 = v271;
  __y276 = v272;
  struct std__less_const_char___* t278 = this274;
    _Bool r279 = std____is_constant_evaluated();
    if (r279) {
      char* t280 = __x275;
      char* t281 = __y276;
      _Bool c282 = ((t280 < t281)) ? 1 : 0;
      __retval277 = c282;
      _Bool t283 = __retval277;
      return t283;
    }
  char* t284 = __x275;
  unsigned long cast285 = (unsigned long)t284;
  char* t286 = __y276;
  unsigned long cast287 = (unsigned long)t286;
  _Bool c288 = ((cast285 < cast287)) ? 1 : 0;
  __retval277 = c288;
  _Bool t289 = __retval277;
  return t289;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_disjunctEPKc
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v290, char* v291) {
bb292:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this293;
  char* __s294;
  _Bool __retval295;
  struct std__less_const_char___ ref_tmp0296;
  this293 = v290;
  __s294 = v291;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t297 = this293;
  char* t298 = __s294;
  char* r299 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t297);
  _Bool r300 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp0296, t298, r299);
  _Bool ternary301;
  if (r300) {
    _Bool c302 = 1;
    ternary301 = (_Bool)c302;
  } else {
    struct std__less_const_char___ ref_tmp1303;
    char* r304 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t297);
    unsigned long r305 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t297);
    char* ptr306 = &(r304)[r305];
    char* t307 = __s294;
    _Bool r308 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp1303, ptr306, t307);
    ternary301 = (_Bool)r308;
  }
  __retval295 = ternary301;
  _Bool t309 = __retval295;
  return t309;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign_2(char* v310, char* v311) {
bb312:
  char* __c1313;
  char* __c2314;
  __c1313 = v310;
  __c2314 = v311;
    _Bool r315 = std____is_constant_evaluated();
    if (r315) {
      char* t316 = __c1313;
      char* t317 = __c2314;
      char* r318 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t316, t317);
    } else {
      char* t319 = __c2314;
      char t320 = *t319;
      char* t321 = __c1313;
      *t321 = t320;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v322, char* v323, unsigned long v324) {
bb325:
  char* __s1326;
  char* __s2327;
  unsigned long __n328;
  char* __retval329;
  __s1326 = v322;
  __s2327 = v323;
  __n328 = v324;
    unsigned long t330 = __n328;
    unsigned long c331 = 0;
    _Bool c332 = ((t330 == c331)) ? 1 : 0;
    if (c332) {
      char* t333 = __s1326;
      __retval329 = t333;
      char* t334 = __retval329;
      return t334;
    }
    _Bool r335 = std____is_constant_evaluated();
    if (r335) {
        char* t336 = __s2327;
        char* t337 = __s1326;
        _Bool c338 = ((t336 < t337)) ? 1 : 0;
        _Bool isconst339 = 0;
        _Bool ternary340;
        if (isconst339) {
          char* t341 = __s1326;
          char* t342 = __s2327;
          _Bool c343 = ((t341 > t342)) ? 1 : 0;
          ternary340 = (_Bool)c343;
        } else {
          _Bool c344 = 0;
          ternary340 = (_Bool)c344;
        }
        _Bool ternary345;
        if (ternary340) {
          char* t346 = __s1326;
          char* t347 = __s2327;
          unsigned long t348 = __n328;
          char* ptr349 = &(t347)[t348];
          _Bool c350 = ((t346 < ptr349)) ? 1 : 0;
          ternary345 = (_Bool)c350;
        } else {
          _Bool c351 = 0;
          ternary345 = (_Bool)c351;
        }
        if (ternary345) {
            do {
                unsigned long t352 = __n328;
                unsigned long u353 = t352 - 1;
                __n328 = u353;
                unsigned long t354 = __n328;
                char* t355 = __s1326;
                char* ptr356 = &(t355)[t354];
                unsigned long t357 = __n328;
                char* t358 = __s2327;
                char* ptr359 = &(t358)[t357];
                __gnu_cxx__char_traits_char___assign_2(ptr356, ptr359);
              unsigned long t360 = __n328;
              unsigned long c361 = 0;
              _Bool c362 = ((t360 > c361)) ? 1 : 0;
              if (!c362) break;
            } while (1);
        } else {
          char* t363 = __s1326;
          char* t364 = __s2327;
          unsigned long t365 = __n328;
          char* r366 = __gnu_cxx__char_traits_char___copy(t363, t364, t365);
        }
      char* t367 = __s1326;
      __retval329 = t367;
      char* t368 = __retval329;
      return t368;
    }
  char* t369 = __s1326;
  void* cast370 = (void*)t369;
  char* t371 = __s2327;
  void* cast372 = (void*)t371;
  unsigned long t373 = __n328;
  unsigned long c374 = 1;
  unsigned long b375 = t373 * c374;
  void* r376 = memmove(cast370, cast372, b375);
  char* t377 = __s1326;
  __retval329 = t377;
  char* t378 = __retval329;
  return t378;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v379, char* v380, unsigned long v381) {
bb382:
  char* __s1383;
  char* __s2384;
  unsigned long __n385;
  char* __retval386;
  __s1383 = v379;
  __s2384 = v380;
  __n385 = v381;
    unsigned long t387 = __n385;
    unsigned long c388 = 0;
    _Bool c389 = ((t387 == c388)) ? 1 : 0;
    if (c389) {
      char* t390 = __s1383;
      __retval386 = t390;
      char* t391 = __retval386;
      return t391;
    }
    _Bool r392 = std____is_constant_evaluated();
    if (r392) {
      char* t393 = __s1383;
      char* t394 = __s2384;
      unsigned long t395 = __n385;
      char* r396 = __gnu_cxx__char_traits_char___move(t393, t394, t395);
      __retval386 = r396;
      char* t397 = __retval386;
      return t397;
    }
  char* t398 = __s1383;
  void* cast399 = (void*)t398;
  char* t400 = __s2384;
  void* cast401 = (void*)t400;
  unsigned long t402 = __n385;
  void* r403 = memmove(cast399, cast401, t402);
  char* cast404 = (char*)r403;
  __retval386 = cast404;
  char* t405 = __retval386;
  return t405;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v406, char* v407, unsigned long v408) {
bb409:
  char* __d410;
  char* __s411;
  unsigned long __n412;
  __d410 = v406;
  __s411 = v407;
  __n412 = v408;
    unsigned long t413 = __n412;
    unsigned long c414 = 1;
    _Bool c415 = ((t413 == c414)) ? 1 : 0;
    if (c415) {
      char* t416 = __d410;
      char* t417 = __s411;
      std__char_traits_char___assign_2(t416, t417);
    } else {
      char* t418 = __d410;
      char* t419 = __s411;
      unsigned long t420 = __n412;
      char* r421 = std__char_traits_char___move(t418, t419, t420);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_replace_coldEPcmPKcmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v422, char* v423, unsigned long v424, char* v425, unsigned long v426, unsigned long v427) {
bb428:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this429;
  char* __p430;
  unsigned long __len1431;
  char* __s432;
  unsigned long __len2433;
  unsigned long __how_much434;
  this429 = v422;
  __p430 = v423;
  __len1431 = v424;
  __s432 = v425;
  __len2433 = v426;
  __how_much434 = v427;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t435 = this429;
    unsigned long t436 = __len2433;
    _Bool cast437 = (_Bool)t436;
    _Bool ternary438;
    if (cast437) {
      unsigned long t439 = __len2433;
      unsigned long t440 = __len1431;
      _Bool c441 = ((t439 <= t440)) ? 1 : 0;
      ternary438 = (_Bool)c441;
    } else {
      _Bool c442 = 0;
      ternary438 = (_Bool)c442;
    }
    if (ternary438) {
      char* t443 = __p430;
      char* t444 = __s432;
      unsigned long t445 = __len2433;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t443, t444, t445);
    }
    unsigned long t446 = __how_much434;
    _Bool cast447 = (_Bool)t446;
    _Bool ternary448;
    if (cast447) {
      unsigned long t449 = __len1431;
      unsigned long t450 = __len2433;
      _Bool c451 = ((t449 != t450)) ? 1 : 0;
      ternary448 = (_Bool)c451;
    } else {
      _Bool c452 = 0;
      ternary448 = (_Bool)c452;
    }
    if (ternary448) {
      char* t453 = __p430;
      unsigned long t454 = __len2433;
      char* ptr455 = &(t453)[t454];
      char* t456 = __p430;
      unsigned long t457 = __len1431;
      char* ptr458 = &(t456)[t457];
      unsigned long t459 = __how_much434;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr455, ptr458, t459);
    }
    unsigned long t460 = __len2433;
    unsigned long t461 = __len1431;
    _Bool c462 = ((t460 > t461)) ? 1 : 0;
    if (c462) {
        char* t463 = __s432;
        unsigned long t464 = __len2433;
        char* ptr465 = &(t463)[t464];
        char* t466 = __p430;
        unsigned long t467 = __len1431;
        char* ptr468 = &(t466)[t467];
        _Bool c469 = ((ptr465 <= ptr468)) ? 1 : 0;
        if (c469) {
          char* t470 = __p430;
          char* t471 = __s432;
          unsigned long t472 = __len2433;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t470, t471, t472);
        } else {
            char* t473 = __s432;
            char* t474 = __p430;
            unsigned long t475 = __len1431;
            char* ptr476 = &(t474)[t475];
            _Bool c477 = ((t473 >= ptr476)) ? 1 : 0;
            if (c477) {
              unsigned long __poff478;
              char* t479 = __s432;
              char* t480 = __p430;
              long diff481 = t479 - t480;
              unsigned long cast482 = (unsigned long)diff481;
              unsigned long t483 = __len2433;
              unsigned long t484 = __len1431;
              unsigned long b485 = t483 - t484;
              unsigned long b486 = cast482 + b485;
              __poff478 = b486;
              char* t487 = __p430;
              char* t488 = __p430;
              unsigned long t489 = __poff478;
              char* ptr490 = &(t488)[t489];
              unsigned long t491 = __len2433;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t487, ptr490, t491);
            } else {
              unsigned long __nleft492;
              char* t493 = __p430;
              unsigned long t494 = __len1431;
              char* ptr495 = &(t493)[t494];
              char* t496 = __s432;
              long diff497 = ptr495 - t496;
              unsigned long cast498 = (unsigned long)diff497;
              __nleft492 = cast498;
              char* t499 = __p430;
              char* t500 = __s432;
              unsigned long t501 = __nleft492;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t499, t500, t501);
              char* t502 = __p430;
              unsigned long t503 = __nleft492;
              char* ptr504 = &(t502)[t503];
              char* t505 = __p430;
              unsigned long t506 = __len2433;
              char* ptr507 = &(t505)[t506];
              unsigned long t508 = __len2433;
              unsigned long t509 = __nleft492;
              unsigned long b510 = t508 - t509;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr504, ptr507, b510);
            }
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v511, unsigned long v512, unsigned long v513, char* v514, unsigned long v515) {
bb516:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this517;
  unsigned long __pos518;
  unsigned long __len1519;
  char* __s520;
  unsigned long __len2521;
  unsigned long __how_much522;
  unsigned long __new_capacity523;
  char* __r524;
  this517 = v511;
  __pos518 = v512;
  __len1519 = v513;
  __s520 = v514;
  __len2521 = v515;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t525 = this517;
  unsigned long r526 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t525);
  unsigned long t527 = __pos518;
  unsigned long b528 = r526 - t527;
  unsigned long t529 = __len1519;
  unsigned long b530 = b528 - t529;
  __how_much522 = b530;
  unsigned long r531 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t525);
  unsigned long t532 = __len2521;
  unsigned long b533 = r531 + t532;
  unsigned long t534 = __len1519;
  unsigned long b535 = b533 - t534;
  __new_capacity523 = b535;
  unsigned long r536 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t525);
  char* r537 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t525, &__new_capacity523, r536);
  __r524 = r537;
    unsigned long t538 = __pos518;
    _Bool cast539 = (_Bool)t538;
    if (cast539) {
      char* t540 = __r524;
      char* r541 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t525);
      unsigned long t542 = __pos518;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t540, r541, t542);
    }
    char* t543 = __s520;
    _Bool cast544 = (_Bool)t543;
    _Bool ternary545;
    if (cast544) {
      unsigned long t546 = __len2521;
      _Bool cast547 = (_Bool)t546;
      ternary545 = (_Bool)cast547;
    } else {
      _Bool c548 = 0;
      ternary545 = (_Bool)c548;
    }
    if (ternary545) {
      char* t549 = __r524;
      unsigned long t550 = __pos518;
      char* ptr551 = &(t549)[t550];
      char* t552 = __s520;
      unsigned long t553 = __len2521;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr551, t552, t553);
    }
    unsigned long t554 = __how_much522;
    _Bool cast555 = (_Bool)t554;
    if (cast555) {
      char* t556 = __r524;
      unsigned long t557 = __pos518;
      char* ptr558 = &(t556)[t557];
      unsigned long t559 = __len2521;
      char* ptr560 = &(ptr558)[t559];
      char* r561 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t525);
      unsigned long t562 = __pos518;
      char* ptr563 = &(r561)[t562];
      unsigned long t564 = __len1519;
      char* ptr565 = &(ptr563)[t564];
      unsigned long t566 = __how_much522;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr560, ptr565, t566);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t525);
  char* t567 = __r524;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t525, t567);
  unsigned long t568 = __new_capacity523;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t525, t568);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v569, unsigned long v570, unsigned long v571, char* v572, unsigned long v573) {
bb574:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this575;
  unsigned long __pos576;
  unsigned long __len1577;
  char* __s578;
  unsigned long __len2579;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval580;
  unsigned long __old_size581;
  unsigned long __new_size582;
  this575 = v569;
  __pos576 = v570;
  __len1577 = v571;
  __s578 = v572;
  __len2579 = v573;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t583 = this575;
  unsigned long t584 = __len1577;
  unsigned long t585 = __len2579;
  char* cast586 = (char*)&(_str_26);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t583, t584, t585, cast586);
  unsigned long r587 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t583);
  __old_size581 = r587;
  unsigned long t588 = __old_size581;
  unsigned long t589 = __len2579;
  unsigned long b590 = t588 + t589;
  unsigned long t591 = __len1577;
  unsigned long b592 = b590 - t591;
  __new_size582 = b592;
    unsigned long t593 = __new_size582;
    unsigned long r594 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t583);
    _Bool c595 = ((t593 <= r594)) ? 1 : 0;
    if (c595) {
      char* __p596;
      unsigned long __how_much597;
      char* r598 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t583);
      unsigned long t599 = __pos576;
      char* ptr600 = &(r598)[t599];
      __p596 = ptr600;
      unsigned long t601 = __old_size581;
      unsigned long t602 = __pos576;
      unsigned long b603 = t601 - t602;
      unsigned long t604 = __len1577;
      unsigned long b605 = b603 - t604;
      __how_much597 = b605;
        _Bool r606 = std__is_constant_evaluated();
        if (r606) {
          char* __newp607;
          struct std__allocator_char_* r608 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t583);
          unsigned long t609 = __new_size582;
          char* r610 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r608, t609);
          __newp607 = r610;
          char* t611 = __newp607;
          char* r612 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t583);
          unsigned long t613 = __pos576;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t611, r612, t613);
          char* t614 = __newp607;
          unsigned long t615 = __pos576;
          char* ptr616 = &(t614)[t615];
          char* t617 = __s578;
          unsigned long t618 = __len2579;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr616, t617, t618);
          char* t619 = __newp607;
          unsigned long t620 = __pos576;
          char* ptr621 = &(t619)[t620];
          unsigned long t622 = __len2579;
          char* ptr623 = &(ptr621)[t622];
          char* t624 = __p596;
          unsigned long t625 = __len1577;
          char* ptr626 = &(t624)[t625];
          unsigned long t627 = __how_much597;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr623, ptr626, t627);
          char* r628 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t583);
          char* t629 = __newp607;
          unsigned long t630 = __new_size582;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r628, t629, t630);
          struct std__allocator_char_* r631 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t583);
          char* t632 = __newp607;
          unsigned long t633 = __new_size582;
          std__allocator_char___deallocate(r631, t632, t633);
        } else {
            char* t634 = __s578;
            _Bool r635 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(t583, t634);
            if (r635) {
                unsigned long t636 = __how_much597;
                _Bool cast637 = (_Bool)t636;
                _Bool ternary638;
                if (cast637) {
                  unsigned long t639 = __len1577;
                  unsigned long t640 = __len2579;
                  _Bool c641 = ((t639 != t640)) ? 1 : 0;
                  ternary638 = (_Bool)c641;
                } else {
                  _Bool c642 = 0;
                  ternary638 = (_Bool)c642;
                }
                if (ternary638) {
                  char* t643 = __p596;
                  unsigned long t644 = __len2579;
                  char* ptr645 = &(t643)[t644];
                  char* t646 = __p596;
                  unsigned long t647 = __len1577;
                  char* ptr648 = &(t646)[t647];
                  unsigned long t649 = __how_much597;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr645, ptr648, t649);
                }
                unsigned long t650 = __len2579;
                _Bool cast651 = (_Bool)t650;
                if (cast651) {
                  char* t652 = __p596;
                  char* t653 = __s578;
                  unsigned long t654 = __len2579;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t652, t653, t654);
                }
            } else {
              char* t655 = __p596;
              unsigned long t656 = __len1577;
              char* t657 = __s578;
              unsigned long t658 = __len2579;
              unsigned long t659 = __how_much597;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(t583, t655, t656, t657, t658, t659);
            }
        }
    } else {
      unsigned long t660 = __pos576;
      unsigned long t661 = __len1577;
      char* t662 = __s578;
      unsigned long t663 = __len2579;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t583, t660, t661, t662, t663);
    }
  unsigned long t664 = __new_size582;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t583, t664);
  __retval580 = t583;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t665 = __retval580;
  return t665;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_4(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v666, unsigned long v667, unsigned long v668, char* v669, unsigned long v670) {
bb671:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this672;
  unsigned long __pos673;
  unsigned long __n1674;
  char* __s675;
  unsigned long __n2676;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval677;
  this672 = v666;
  __pos673 = v667;
  __n1674 = v668;
  __s675 = v669;
  __n2676 = v670;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t678 = this672;
  unsigned long t679 = __pos673;
  char* cast680 = (char*)&(_str_24);
  unsigned long r681 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t678, t679, cast680);
  unsigned long t682 = __pos673;
  unsigned long t683 = __n1674;
  unsigned long r684 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t678, t682, t683);
  char* t685 = __s675;
  unsigned long t686 = __n2676;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r687 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t678, r681, r684, t685, t686);
  __retval677 = r687;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t688 = __retval677;
  return t688;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEmmPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v689, unsigned long v690, unsigned long v691, char* v692) {
bb693:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this694;
  unsigned long __pos695;
  unsigned long __n1696;
  char* __s697;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval698;
  this694 = v689;
  __pos695 = v690;
  __n1696 = v691;
  __s697 = v692;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t699 = this694;
  unsigned long t700 = __pos695;
  unsigned long t701 = __n1696;
  char* t702 = __s697;
  char* t703 = __s697;
  unsigned long r704 = std__char_traits_char___length(t703);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r705 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_4(t699, t700, t701, t702, r704);
  __retval698 = r705;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t706 = __retval698;
  return t706;
}

// function: _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* v707, char* v708) {
bb709:
  char* __location710;
  char* __args711;
  char* __retval712;
  void* __loc713;
  __location710 = v707;
  __args711 = v708;
  char* t714 = __location710;
  void* cast715 = (void*)t714;
  __loc713 = cast715;
    void* t716 = __loc713;
    char* cast717 = (char*)t716;
    char* t718 = __args711;
    char t719 = *t718;
    *cast717 = t719;
    __retval712 = cast717;
    char* t720 = __retval712;
    return t720;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignEPcmc
char* __gnu_cxx__char_traits_char___assign(char* v721, unsigned long v722, char v723) {
bb724:
  char* __s725;
  unsigned long __n726;
  char __a727;
  char* __retval728;
  __s725 = v721;
  __n726 = v722;
  __a727 = v723;
    _Bool r729 = std____is_constant_evaluated();
    if (r729) {
        unsigned long __i730;
        unsigned long c731 = 0;
        __i730 = c731;
        while (1) {
          unsigned long t733 = __i730;
          unsigned long t734 = __n726;
          _Bool c735 = ((t733 < t734)) ? 1 : 0;
          if (!c735) break;
          char* t736 = __s725;
          unsigned long t737 = __i730;
          char* ptr738 = &(t736)[t737];
          char* r739 = _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(ptr738, &__a727);
        for_step732: ;
          unsigned long t740 = __i730;
          unsigned long u741 = t740 + 1;
          __i730 = u741;
        }
      char* t742 = __s725;
      __retval728 = t742;
      char* t743 = __retval728;
      return t743;
    }
      unsigned long t744 = __n726;
      _Bool cast745 = (_Bool)t744;
      if (cast745) {
        unsigned char __c746;
        void* cast747 = (void*)&(__c746);
        void* cast748 = (void*)&(__a727);
        unsigned long c749 = 1;
        void* r750 = memcpy(cast747, cast748, c749);
        char* t751 = __s725;
        void* cast752 = (void*)t751;
        unsigned char t753 = __c746;
        int cast754 = (int)t753;
        unsigned long t755 = __n726;
        void* r756 = memset(cast752, cast754, t755);
      }
  char* t757 = __s725;
  __retval728 = t757;
  char* t758 = __retval728;
  return t758;
}

// function: _ZNSt11char_traitsIcE6assignEPcmc
char* std__char_traits_char___assign(char* v759, unsigned long v760, char v761) {
bb762:
  char* __s763;
  unsigned long __n764;
  char __a765;
  char* __retval766;
  __s763 = v759;
  __n764 = v760;
  __a765 = v761;
    unsigned long t767 = __n764;
    unsigned long c768 = 0;
    _Bool c769 = ((t767 == c768)) ? 1 : 0;
    if (c769) {
      char* t770 = __s763;
      __retval766 = t770;
      char* t771 = __retval766;
      return t771;
    }
    _Bool r772 = std____is_constant_evaluated();
    if (r772) {
      char* t773 = __s763;
      unsigned long t774 = __n764;
      char t775 = __a765;
      char* r776 = __gnu_cxx__char_traits_char___assign(t773, t774, t775);
      __retval766 = r776;
      char* t777 = __retval766;
      return t777;
    }
  char* t778 = __s763;
  void* cast779 = (void*)t778;
  char t780 = __a765;
  int cast781 = (int)t780;
  unsigned long t782 = __n764;
  void* r783 = memset(cast779, cast781, t782);
  char* cast784 = (char*)r783;
  __retval766 = cast784;
  char* t785 = __retval766;
  return t785;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_S_assignEPcmc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(char* v786, unsigned long v787, char v788) {
bb789:
  char* __d790;
  unsigned long __n791;
  char __c792;
  __d790 = v786;
  __n791 = v787;
  __c792 = v788;
    unsigned long t793 = __n791;
    unsigned long c794 = 1;
    _Bool c795 = ((t793 == c794)) ? 1 : 0;
    if (c795) {
      char* t796 = __d790;
      std__char_traits_char___assign_2(t796, &__c792);
    } else {
      char* t797 = __d790;
      unsigned long t798 = __n791;
      char t799 = __c792;
      char* r800 = std__char_traits_char___assign(t797, t798, t799);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE14_M_replace_auxEmmmc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v801, unsigned long v802, unsigned long v803, unsigned long v804, char v805) {
bb806:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this807;
  unsigned long __pos1808;
  unsigned long __n1809;
  unsigned long __n2810;
  char __c811;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval812;
  unsigned long __old_size813;
  unsigned long __new_size814;
  this807 = v801;
  __pos1808 = v802;
  __n1809 = v803;
  __n2810 = v804;
  __c811 = v805;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t815 = this807;
  unsigned long t816 = __n1809;
  unsigned long t817 = __n2810;
  char* cast818 = (char*)&(_str_27);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t815, t816, t817, cast818);
  unsigned long r819 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t815);
  __old_size813 = r819;
  unsigned long t820 = __old_size813;
  unsigned long t821 = __n2810;
  unsigned long b822 = t820 + t821;
  unsigned long t823 = __n1809;
  unsigned long b824 = b822 - t823;
  __new_size814 = b824;
    unsigned long t825 = __new_size814;
    unsigned long r826 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t815);
    _Bool c827 = ((t825 <= r826)) ? 1 : 0;
    if (c827) {
      char* __p828;
      unsigned long __how_much829;
      char* r830 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t815);
      unsigned long t831 = __pos1808;
      char* ptr832 = &(r830)[t831];
      __p828 = ptr832;
      unsigned long t833 = __old_size813;
      unsigned long t834 = __pos1808;
      unsigned long b835 = t833 - t834;
      unsigned long t836 = __n1809;
      unsigned long b837 = b835 - t836;
      __how_much829 = b837;
        unsigned long t838 = __how_much829;
        _Bool cast839 = (_Bool)t838;
        _Bool ternary840;
        if (cast839) {
          unsigned long t841 = __n1809;
          unsigned long t842 = __n2810;
          _Bool c843 = ((t841 != t842)) ? 1 : 0;
          ternary840 = (_Bool)c843;
        } else {
          _Bool c844 = 0;
          ternary840 = (_Bool)c844;
        }
        if (ternary840) {
          char* t845 = __p828;
          unsigned long t846 = __n2810;
          char* ptr847 = &(t845)[t846];
          char* t848 = __p828;
          unsigned long t849 = __n1809;
          char* ptr850 = &(t848)[t849];
          unsigned long t851 = __how_much829;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr847, ptr850, t851);
        }
    } else {
      unsigned long t852 = __pos1808;
      unsigned long t853 = __n1809;
      char* c854 = ((void*)0);
      unsigned long t855 = __n2810;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t815, t852, t853, c854, t855);
    }
    unsigned long t856 = __n2810;
    _Bool cast857 = (_Bool)t856;
    if (cast857) {
      char* r858 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t815);
      unsigned long t859 = __pos1808;
      char* ptr860 = &(r858)[t859];
      unsigned long t861 = __n2810;
      char t862 = __c811;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(ptr860, t861, t862);
    }
  unsigned long t863 = __new_size814;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t815, t863);
  __retval812 = t815;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t864 = __retval812;
  return t864;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEmmmc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_7(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v865, unsigned long v866, unsigned long v867, unsigned long v868, char v869) {
bb870:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this871;
  unsigned long __pos872;
  unsigned long __n1873;
  unsigned long __n2874;
  char __c875;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval876;
  this871 = v865;
  __pos872 = v866;
  __n1873 = v867;
  __n2874 = v868;
  __c875 = v869;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t877 = this871;
  unsigned long t878 = __pos872;
  char* cast879 = (char*)&(_str_24);
  unsigned long r880 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t877, t878, cast879);
  unsigned long t881 = __pos872;
  unsigned long t882 = __n1873;
  unsigned long r883 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t877, t881, t882);
  unsigned long t884 = __n2874;
  char t885 = __c875;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r886 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(t877, r880, r883, t884, t885);
  __retval876 = r886;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t887 = __retval876;
  return t887;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2ERKS1_
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v888, char** v889) {
bb890:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this891;
  char** __i892;
  this891 = v888;
  __i892 = v889;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t893 = this891;
  char** t894 = __i892;
  char* t895 = *t894;
  t893->_M_current = t895;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5beginEv
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v896) {
bb897:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this898;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval899;
  char* ref_tmp0900;
  this898 = v896;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t901 = this898;
  char* r902 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t901);
  ref_tmp0900 = r902;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval899, &ref_tmp0900);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t903 = __retval899;
  return t903;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEN9__gnu_cxx17__normal_iteratorIPKcS4_EES9_RKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v904, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v905, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v906, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v907) {
bb908:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this909;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __i1910;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __i2911;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str912;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval913;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp0914;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp1915;
  this909 = v904;
  __i1910 = v905;
  __i2911 = v906;
  __str912 = v907;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t916 = this909;
  agg_tmp0914 = __i1910; // copy
  agg_tmp1915 = __i2911; // copy
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t917 = __str912;
  char* r918 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t917);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t919 = __str912;
  unsigned long r920 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t919);
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t921 = agg_tmp0914;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t922 = agg_tmp1915;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r923 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(t916, t921, t922, r918, r920);
  __retval913 = r923;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t924 = __retval913;
  return t924;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
void _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v925, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v926) {
bb927:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this928;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __i929;
  this928 = v925;
  __i929 = v926;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t930 = this928;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t931 = __i929;
  char** r932 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t931);
  char* t933 = *r932;
  t930->_M_current = t933;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE3endEv
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v934) {
bb935:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this936;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval937;
  char* ref_tmp0938;
  this936 = v934;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t939 = this936;
  char* r940 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t939);
  unsigned long r941 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t939);
  char* ptr942 = &(r940)[r941];
  ref_tmp0938 = ptr942;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval937, &ref_tmp0938);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t943 = __retval937;
  return t943;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEmiEl
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v944, long v945) {
bb946:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this947;
  long __n948;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval949;
  char* ref_tmp0950;
  this947 = v944;
  __n948 = v945;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t951 = this947;
  char* t952 = t951->_M_current;
  long t953 = __n948;
  long u954 = -t953;
  char* ptr955 = &(t952)[u954];
  ref_tmp0950 = ptr955;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval949, &ref_tmp0950);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t956 = __retval949;
  return t956;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE4baseEv
char** __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v957) {
bb958:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this959;
  char** __retval960;
  this959 = v957;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t961 = this959;
  __retval960 = &t961->_M_current;
  char** t962 = __retval960;
  return t962;
}

// function: _ZN9__gnu_cxxmiIPKcPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEDTmicldtfp_4baseEcldtfp0_4baseEERKNS_17__normal_iteratorIT_T1_EERKNSB_IT0_SD_EE
long decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v963, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v964) {
bb965:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __lhs966;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __rhs967;
  long __retval968;
  __lhs966 = v963;
  __rhs967 = v964;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t969 = __lhs966;
  char** r970 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t969);
  char* t971 = *r970;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t972 = __rhs967;
  char** r973 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t972);
  char* t974 = *r973;
  long diff975 = t971 - t974;
  __retval968 = diff975;
  long t976 = __retval968;
  return t976;
}

// function: _ZN9__gnu_cxxmiIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKSC_SF_
long __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v977, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v978) {
bb979:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __lhs980;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __rhs981;
  long __retval982;
  __lhs980 = v977;
  __rhs981 = v978;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t983 = __lhs980;
  char** r984 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t983);
  char* t985 = *r984;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t986 = __rhs981;
  char** r987 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t986);
  char* t988 = *r987;
  long diff989 = t985 - t988;
  __retval982 = diff989;
  long t990 = __retval982;
  return t990;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEN9__gnu_cxx17__normal_iteratorIPKcS4_EES9_S8_m
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v991, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v992, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v993, char* v994, unsigned long v995) {
bb996:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this997;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __i1998;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __i2999;
  char* __s1000;
  unsigned long __n1001;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1002;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp01003;
  this997 = v991;
  __i1998 = v992;
  __i2999 = v993;
  __s1000 = v994;
  __n1001 = v995;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1004 = this997;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1005 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(t1004);
  ref_tmp01003 = r1005;
  long r1006 = decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__i1998, &ref_tmp01003);
  unsigned long cast1007 = (unsigned long)r1006;
  long r1008 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__i2999, &__i1998);
  unsigned long cast1009 = (unsigned long)r1008;
  char* t1010 = __s1000;
  unsigned long t1011 = __n1001;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1012 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_4(t1004, cast1007, cast1009, t1010, t1011);
  __retval1002 = r1012;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1013 = __retval1002;
  return t1013;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEplEl
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const_2(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v1014, long v1015) {
bb1016:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this1017;
  long __n1018;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval1019;
  char* ref_tmp01020;
  this1017 = v1014;
  __n1018 = v1015;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t1021 = this1017;
  char* t1022 = t1021->_M_current;
  long t1023 = __n1018;
  char* ptr1024 = &(t1022)[t1023];
  ref_tmp01020 = ptr1024;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval1019, &ref_tmp01020);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1025 = __retval1019;
  return t1025;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v1026, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1027) {
bb1028:
  struct std__basic_ostream_char__std__char_traits_char__* __os1029;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1030;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1031;
  __os1029 = v1026;
  __str1030 = v1027;
  struct std__basic_ostream_char__std__char_traits_char__* t1032 = __os1029;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1033 = __str1030;
  char* r1034 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t1033);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1035 = __str1030;
  unsigned long r1036 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1035);
  long cast1037 = (long)r1036;
  struct std__basic_ostream_char__std__char_traits_char__* r1038 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1032, r1034, cast1037);
  __retval1031 = r1038;
  struct std__basic_ostream_char__std__char_traits_char__* t1039 = __retval1031;
  return t1039;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1040, void* v1041) {
bb1042:
  struct std__basic_ostream_char__std__char_traits_char__* this1043;
  void* __pf1044;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1045;
  this1043 = v1040;
  __pf1044 = v1041;
  struct std__basic_ostream_char__std__char_traits_char__* t1046 = this1043;
  void* t1047 = __pf1044;
  struct std__basic_ostream_char__std__char_traits_char__* r1048 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1047)(t1046);
  __retval1045 = r1048;
  struct std__basic_ostream_char__std__char_traits_char__* t1049 = __retval1045;
  return t1049;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1050) {
bb1051:
  struct std__basic_ostream_char__std__char_traits_char__* __os1052;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1053;
  __os1052 = v1050;
  struct std__basic_ostream_char__std__char_traits_char__* t1054 = __os1052;
  struct std__basic_ostream_char__std__char_traits_char__* r1055 = std__ostream__flush(t1054);
  __retval1053 = r1055;
  struct std__basic_ostream_char__std__char_traits_char__* t1056 = __retval1053;
  return t1056;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1057) {
bb1058:
  struct std__ctype_char_* __f1059;
  struct std__ctype_char_* __retval1060;
  __f1059 = v1057;
    struct std__ctype_char_* t1061 = __f1059;
    _Bool cast1062 = (_Bool)t1061;
    _Bool u1063 = !cast1062;
    if (u1063) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t1064 = __f1059;
  __retval1060 = t1064;
  struct std__ctype_char_* t1065 = __retval1060;
  return t1065;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1066, char v1067) {
bb1068:
  struct std__ctype_char_* this1069;
  char __c1070;
  char __retval1071;
  this1069 = v1066;
  __c1070 = v1067;
  struct std__ctype_char_* t1072 = this1069;
    char t1073 = t1072->_M_widen_ok;
    _Bool cast1074 = (_Bool)t1073;
    if (cast1074) {
      char t1075 = __c1070;
      unsigned char cast1076 = (unsigned char)t1075;
      unsigned long cast1077 = (unsigned long)cast1076;
      char t1078 = t1072->_M_widen[cast1077];
      __retval1071 = t1078;
      char t1079 = __retval1071;
      return t1079;
    }
  std__ctype_char____M_widen_init___const(t1072);
  char t1080 = __c1070;
  void** v1081 = (void**)t1072;
  void* v1082 = *((void**)v1081);
  char vcall1085 = (char)__VERIFIER_virtual_call_char_char(t1072, 6, t1080);
  __retval1071 = vcall1085;
  char t1086 = __retval1071;
  return t1086;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1087, char v1088) {
bb1089:
  struct std__basic_ios_char__std__char_traits_char__* this1090;
  char __c1091;
  char __retval1092;
  this1090 = v1087;
  __c1091 = v1088;
  struct std__basic_ios_char__std__char_traits_char__* t1093 = this1090;
  struct std__ctype_char_* t1094 = t1093->_M_ctype;
  struct std__ctype_char_* r1095 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1094);
  char t1096 = __c1091;
  char r1097 = std__ctype_char___widen_char__const(r1095, t1096);
  __retval1092 = r1097;
  char t1098 = __retval1092;
  return t1098;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1099) {
bb1100:
  struct std__basic_ostream_char__std__char_traits_char__* __os1101;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1102;
  __os1101 = v1099;
  struct std__basic_ostream_char__std__char_traits_char__* t1103 = __os1101;
  struct std__basic_ostream_char__std__char_traits_char__* t1104 = __os1101;
  void** v1105 = (void**)t1104;
  void* v1106 = *((void**)v1105);
  unsigned char* cast1107 = (unsigned char*)v1106;
  long c1108 = -24;
  unsigned char* ptr1109 = &(cast1107)[c1108];
  long* cast1110 = (long*)ptr1109;
  long t1111 = *cast1110;
  unsigned char* cast1112 = (unsigned char*)t1104;
  unsigned char* ptr1113 = &(cast1112)[t1111];
  struct std__basic_ostream_char__std__char_traits_char__* cast1114 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1113;
  struct std__basic_ios_char__std__char_traits_char__* cast1115 = (struct std__basic_ios_char__std__char_traits_char__*)cast1114;
  char c1116 = 10;
  char r1117 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1115, c1116);
  struct std__basic_ostream_char__std__char_traits_char__* r1118 = std__ostream__put(t1103, r1117);
  struct std__basic_ostream_char__std__char_traits_char__* r1119 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1118);
  __retval1102 = r1119;
  struct std__basic_ostream_char__std__char_traits_char__* t1120 = __retval1102;
  return t1120;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1121) {
bb1122:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1123;
  this1123 = v1121;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1124 = this1123;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1124);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1124->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb1125:
  int __retval1126;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ base1127;
  struct std__allocator_char_ ref_tmp01128;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str21129;
  struct std__allocator_char_ ref_tmp11130;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str31131;
  struct std__allocator_char_ ref_tmp21132;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str41133;
  struct std__allocator_char_ ref_tmp31134;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str1135;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ it1136;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp01137;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp11138;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp41139;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp51140;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp21141;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp31142;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp61143;
  int c1144 = 0;
  __retval1126 = c1144;
  char* cast1145 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp01128);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&base1127, cast1145, &ref_tmp01128);
  {
    std__allocator_char____allocator(&ref_tmp01128);
  }
    char* cast1146 = (char*)&(_str_1);
    std__allocator_char___allocator_2(&ref_tmp11130);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str21129, cast1146, &ref_tmp11130);
    {
      std__allocator_char____allocator(&ref_tmp11130);
    }
      char* cast1147 = (char*)&(_str_2);
      std__allocator_char___allocator_2(&ref_tmp21132);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str31131, cast1147, &ref_tmp21132);
      {
        std__allocator_char____allocator(&ref_tmp21132);
      }
        char* cast1148 = (char*)&(_str_3);
        std__allocator_char___allocator_2(&ref_tmp31134);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str41133, cast1148, &ref_tmp31134);
        {
          std__allocator_char____allocator(&ref_tmp31134);
        }
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&str1135, &base1127);
            unsigned long c1149 = 9;
            unsigned long c1150 = 5;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1151 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_5(&str1135, c1149, c1150, &str21129);
            char* cast1152 = (char*)&(_str_4);
            _Bool r1153 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1135, cast1152);
            _Bool u1154 = !r1153;
            if (u1154) {
            } else {
              char* cast1155 = (char*)&(_str_5);
              char* c1156 = _str_6;
              unsigned int c1157 = 25;
              char* cast1158 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1155, c1156, c1157, cast1158);
            }
            unsigned long c1159 = 19;
            unsigned long c1160 = 6;
            unsigned long c1161 = 7;
            unsigned long c1162 = 6;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1163 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_6(&str1135, c1159, c1160, &str31131, c1161, c1162);
            char* cast1164 = (char*)&(_str_7);
            _Bool r1165 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1135, cast1164);
            _Bool u1166 = !r1165;
            if (u1166) {
            } else {
              char* cast1167 = (char*)&(_str_8);
              char* c1168 = _str_6;
              unsigned int c1169 = 28;
              char* cast1170 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1167, c1168, c1169, cast1170);
            }
            unsigned long c1171 = 8;
            unsigned long c1172 = 10;
            char* cast1173 = (char*)&(_str_9);
            unsigned long c1174 = 6;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1175 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_4(&str1135, c1171, c1172, cast1173, c1174);
            char* cast1176 = (char*)&(_str_10);
            _Bool r1177 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1135, cast1176);
            _Bool u1178 = !r1177;
            if (u1178) {
            } else {
              char* cast1179 = (char*)&(_str_11);
              char* c1180 = _str_6;
              unsigned int c1181 = 31;
              char* cast1182 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1179, c1180, c1181, cast1182);
            }
            unsigned long c1183 = 8;
            unsigned long c1184 = 6;
            char* cast1185 = (char*)&(_str_12);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1186 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(&str1135, c1183, c1184, cast1185);
            char* cast1187 = (char*)&(_str_13);
            _Bool r1188 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1135, cast1187);
            _Bool u1189 = !r1188;
            if (u1189) {
            } else {
              char* cast1190 = (char*)&(_str_14);
              char* c1191 = _str_6;
              unsigned int c1192 = 34;
              char* cast1193 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1190, c1191, c1192, cast1193);
            }
            unsigned long c1194 = 22;
            unsigned long c1195 = 1;
            unsigned long c1196 = 3;
            char c1197 = 33;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1198 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_7(&str1135, c1194, c1195, c1196, c1197);
            char* cast1199 = (char*)&(_str_15);
            _Bool r1200 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1135, cast1199);
            _Bool u1201 = !r1200;
            if (u1201) {
            } else {
              char* cast1202 = (char*)&(_str_16);
              char* c1203 = _str_6;
              unsigned int c1204 = 37;
              char* cast1205 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1202, c1203, c1204, cast1205);
            }
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1206 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(&str1135);
            it1136 = r1206;
            _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp01137, &it1136);
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1207 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(&str1135);
            ref_tmp51140 = r1207;
            long c1208 = 3;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1209 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(&ref_tmp51140, c1208);
            ref_tmp41139 = r1209;
            _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp11138, &ref_tmp41139);
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1210 = agg_tmp01137;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1211 = agg_tmp11138;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1212 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(&str1135, t1210, t1211, &str31131);
            char* cast1213 = (char*)&(_str_17);
            _Bool r1214 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1135, cast1213);
            _Bool u1215 = !r1214;
            if (u1215) {
            } else {
              char* cast1216 = (char*)&(_str_18);
              char* c1217 = _str_6;
              unsigned int c1218 = 42;
              char* cast1219 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1216, c1217, c1218, cast1219);
            }
            _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp21141, &it1136);
            long c1220 = 6;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1221 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const_2(&it1136, c1220);
            ref_tmp61143 = r1221;
            _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp31142, &ref_tmp61143);
            char* cast1222 = (char*)&(_str_19);
            unsigned long c1223 = 7;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1224 = agg_tmp21141;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1225 = agg_tmp31142;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1226 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(&str1135, t1224, t1225, cast1222, c1223);
            char* cast1227 = (char*)&(_str_20);
            _Bool r1228 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1135, cast1227);
            _Bool u1229 = !r1228;
            if (u1229) {
            } else {
              char* cast1230 = (char*)&(_str_21);
              char* c1231 = _str_6;
              unsigned int c1232 = 45;
              char* cast1233 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1230, c1231, c1232, cast1233);
            }
            struct std__basic_ostream_char__std__char_traits_char__* r1234 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str1135);
            struct std__basic_ostream_char__std__char_traits_char__* r1235 = std__ostream__operator___std__ostream_____(r1234, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            int c1236 = 0;
            __retval1126 = c1236;
            int t1237 = __retval1126;
            int ret_val1238 = t1237;
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str1135);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str41133);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str31131);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str21129);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&base1127);
            }
            return ret_val1238;
  int t1239 = __retval1126;
  return t1239;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1240) {
bb1241:
  struct std____new_allocator_char_* this1242;
  this1242 = v1240;
  struct std____new_allocator_char_* t1243 = this1242;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1244) {
bb1245:
  char* __r1246;
  char* __retval1247;
  __r1246 = v1244;
  char* t1248 = __r1246;
  __retval1247 = t1248;
  char* t1249 = __retval1247;
  return t1249;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1250) {
bb1251:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1252;
  char* __retval1253;
  this1252 = v1250;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1254 = this1252;
  char* cast1255 = (char*)&(t1254->field2._M_local_buf);
  char* r1256 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1255);
  __retval1253 = r1256;
  char* t1257 = __retval1253;
  return t1257;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1258, char* v1259, struct std__allocator_char_* v1260) {
bb1261:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1262;
  char* __dat1263;
  struct std__allocator_char_* __a1264;
  this1262 = v1258;
  __dat1263 = v1259;
  __a1264 = v1260;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1265 = this1262;
  struct std__allocator_char_* base1266 = (struct std__allocator_char_*)((char *)t1265 + 0);
  struct std__allocator_char_* t1267 = __a1264;
  std__allocator_char___allocator(base1266, t1267);
    char* t1268 = __dat1263;
    t1265->_M_p = t1268;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1269:
  _Bool __retval1270;
    _Bool c1271 = 0;
    __retval1270 = c1271;
    _Bool t1272 = __retval1270;
    return t1272;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1273, char* v1274) {
bb1275:
  char* __c11276;
  char* __c21277;
  _Bool __retval1278;
  __c11276 = v1273;
  __c21277 = v1274;
  char* t1279 = __c11276;
  char t1280 = *t1279;
  int cast1281 = (int)t1280;
  char* t1282 = __c21277;
  char t1283 = *t1282;
  int cast1284 = (int)t1283;
  _Bool c1285 = ((cast1281 == cast1284)) ? 1 : 0;
  __retval1278 = c1285;
  _Bool t1286 = __retval1278;
  return t1286;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1287) {
bb1288:
  char* __p1289;
  unsigned long __retval1290;
  unsigned long __i1291;
  __p1289 = v1287;
  unsigned long c1292 = 0;
  __i1291 = c1292;
    char ref_tmp01293;
    while (1) {
      unsigned long t1294 = __i1291;
      char* t1295 = __p1289;
      char* ptr1296 = &(t1295)[t1294];
      char c1297 = 0;
      ref_tmp01293 = c1297;
      _Bool r1298 = __gnu_cxx__char_traits_char___eq(ptr1296, &ref_tmp01293);
      _Bool u1299 = !r1298;
      if (!u1299) break;
      unsigned long t1300 = __i1291;
      unsigned long u1301 = t1300 + 1;
      __i1291 = u1301;
    }
  unsigned long t1302 = __i1291;
  __retval1290 = t1302;
  unsigned long t1303 = __retval1290;
  return t1303;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1304) {
bb1305:
  char* __s1306;
  unsigned long __retval1307;
  __s1306 = v1304;
    _Bool r1308 = std____is_constant_evaluated();
    if (r1308) {
      char* t1309 = __s1306;
      unsigned long r1310 = __gnu_cxx__char_traits_char___length(t1309);
      __retval1307 = r1310;
      unsigned long t1311 = __retval1307;
      return t1311;
    }
  char* t1312 = __s1306;
  unsigned long r1313 = strlen(t1312);
  __retval1307 = r1313;
  unsigned long t1314 = __retval1307;
  return t1314;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v1315, char* v1316, struct std__random_access_iterator_tag v1317) {
bb1318:
  char* __first1319;
  char* __last1320;
  struct std__random_access_iterator_tag unnamed1321;
  long __retval1322;
  __first1319 = v1315;
  __last1320 = v1316;
  unnamed1321 = v1317;
  char* t1323 = __last1320;
  char* t1324 = __first1319;
  long diff1325 = t1323 - t1324;
  __retval1322 = diff1325;
  long t1326 = __retval1322;
  return t1326;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v1327) {
bb1328:
  char** unnamed1329;
  struct std__random_access_iterator_tag __retval1330;
  unnamed1329 = v1327;
  struct std__random_access_iterator_tag t1331 = __retval1330;
  return t1331;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v1332, char* v1333) {
bb1334:
  char* __first1335;
  char* __last1336;
  long __retval1337;
  struct std__random_access_iterator_tag agg_tmp01338;
  __first1335 = v1332;
  __last1336 = v1333;
  char* t1339 = __first1335;
  char* t1340 = __last1336;
  struct std__random_access_iterator_tag r1341 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first1335);
  agg_tmp01338 = r1341;
  struct std__random_access_iterator_tag t1342 = agg_tmp01338;
  long r1343 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t1339, t1340, t1342);
  __retval1337 = r1343;
  long t1344 = __retval1337;
  return t1344;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1345, char* v1346) {
bb1347:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1348;
  char* __p1349;
  this1348 = v1345;
  __p1349 = v1346;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1350 = this1348;
  char* t1351 = __p1349;
  t1350->_M_dataplus._M_p = t1351;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v1352) {
bb1353:
  struct std__allocator_char_* __a1354;
  unsigned long __retval1355;
  __a1354 = v1352;
  unsigned long c1356 = -1;
  unsigned long c1357 = 1;
  unsigned long b1358 = c1356 / c1357;
  __retval1355 = b1358;
  unsigned long t1359 = __retval1355;
  return t1359;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1360) {
bb1361:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1362;
  struct std__allocator_char_* __retval1363;
  this1362 = v1360;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1364 = this1362;
  struct std__allocator_char_* base1365 = (struct std__allocator_char_*)((char *)&(t1364->_M_dataplus) + 0);
  __retval1363 = base1365;
  struct std__allocator_char_* t1366 = __retval1363;
  return t1366;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1367, unsigned long* v1368) {
bb1369:
  unsigned long* __a1370;
  unsigned long* __b1371;
  unsigned long* __retval1372;
  __a1370 = v1367;
  __b1371 = v1368;
    unsigned long* t1373 = __b1371;
    unsigned long t1374 = *t1373;
    unsigned long* t1375 = __a1370;
    unsigned long t1376 = *t1375;
    _Bool c1377 = ((t1374 < t1376)) ? 1 : 0;
    if (c1377) {
      unsigned long* t1378 = __b1371;
      __retval1372 = t1378;
      unsigned long* t1379 = __retval1372;
      return t1379;
    }
  unsigned long* t1380 = __a1370;
  __retval1372 = t1380;
  unsigned long* t1381 = __retval1372;
  return t1381;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1382) {
bb1383:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1384;
  unsigned long __retval1385;
  unsigned long __diffmax1386;
  unsigned long __allocmax1387;
  this1384 = v1382;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1388 = this1384;
  unsigned long c1389 = 9223372036854775807;
  __diffmax1386 = c1389;
  struct std__allocator_char_* r1390 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1388);
  unsigned long r1391 = std__allocator_traits_std__allocator_char_____max_size(r1390);
  __allocmax1387 = r1391;
  unsigned long* r1392 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1386, &__allocmax1387);
  unsigned long t1393 = *r1392;
  unsigned long c1394 = 1;
  unsigned long b1395 = t1393 - c1394;
  __retval1385 = b1395;
  unsigned long t1396 = __retval1385;
  return t1396;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v1397) {
bb1398:
  struct std____new_allocator_char_* this1399;
  unsigned long __retval1400;
  this1399 = v1397;
  struct std____new_allocator_char_* t1401 = this1399;
  unsigned long c1402 = 9223372036854775807;
  unsigned long c1403 = 1;
  unsigned long b1404 = c1402 / c1403;
  __retval1400 = b1404;
  unsigned long t1405 = __retval1400;
  return t1405;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v1406, unsigned long v1407, void* v1408) {
bb1409:
  struct std____new_allocator_char_* this1410;
  unsigned long __n1411;
  void* unnamed1412;
  char* __retval1413;
  this1410 = v1406;
  __n1411 = v1407;
  unnamed1412 = v1408;
  struct std____new_allocator_char_* t1414 = this1410;
    unsigned long t1415 = __n1411;
    unsigned long r1416 = std____new_allocator_char____M_max_size___const(t1414);
    _Bool c1417 = ((t1415 > r1416)) ? 1 : 0;
    if (c1417) {
        unsigned long t1418 = __n1411;
        unsigned long c1419 = -1;
        unsigned long c1420 = 1;
        unsigned long b1421 = c1419 / c1420;
        _Bool c1422 = ((t1418 > b1421)) ? 1 : 0;
        if (c1422) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1423 = 1;
    unsigned long c1424 = 16;
    _Bool c1425 = ((c1423 > c1424)) ? 1 : 0;
    if (c1425) {
      unsigned long __al1426;
      unsigned long c1427 = 1;
      __al1426 = c1427;
      unsigned long t1428 = __n1411;
      unsigned long c1429 = 1;
      unsigned long b1430 = t1428 * c1429;
      unsigned long t1431 = __al1426;
      void* r1432 = operator_new_2(b1430, t1431);
      char* cast1433 = (char*)r1432;
      __retval1413 = cast1433;
      char* t1434 = __retval1413;
      return t1434;
    }
  unsigned long t1435 = __n1411;
  unsigned long c1436 = 1;
  unsigned long b1437 = t1435 * c1436;
  void* r1438 = operator_new(b1437);
  char* cast1439 = (char*)r1438;
  __retval1413 = cast1439;
  char* t1440 = __retval1413;
  return t1440;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1441, unsigned long v1442) {
bb1443:
  struct std__allocator_char_* this1444;
  unsigned long __n1445;
  char* __retval1446;
  this1444 = v1441;
  __n1445 = v1442;
  struct std__allocator_char_* t1447 = this1444;
    _Bool r1448 = std____is_constant_evaluated();
    if (r1448) {
        unsigned long t1449 = __n1445;
        unsigned long c1450 = 1;
        unsigned long ovr1451;
        _Bool ovf1452 = __builtin_mul_overflow(t1449, c1450, &ovr1451);
        __n1445 = ovr1451;
        if (ovf1452) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1453 = __n1445;
      void* r1454 = operator_new(t1453);
      char* cast1455 = (char*)r1454;
      __retval1446 = cast1455;
      char* t1456 = __retval1446;
      return t1456;
    }
  struct std____new_allocator_char_* base1457 = (struct std____new_allocator_char_*)((char *)t1447 + 0);
  unsigned long t1458 = __n1445;
  void* c1459 = ((void*)0);
  char* r1460 = std____new_allocator_char___allocate(base1457, t1458, c1459);
  __retval1446 = r1460;
  char* t1461 = __retval1446;
  return t1461;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1462, unsigned long v1463) {
bb1464:
  struct std__allocator_char_* __a1465;
  unsigned long __n1466;
  char* __retval1467;
  __a1465 = v1462;
  __n1466 = v1463;
  struct std__allocator_char_* t1468 = __a1465;
  unsigned long t1469 = __n1466;
  char* r1470 = std__allocator_char___allocate(t1468, t1469);
  __retval1467 = r1470;
  char* t1471 = __retval1467;
  return t1471;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1472, unsigned long v1473) {
bb1474:
  struct std__allocator_char_* __a1475;
  unsigned long __n1476;
  char* __retval1477;
  char* __p1478;
  __a1475 = v1472;
  __n1476 = v1473;
  struct std__allocator_char_* t1479 = __a1475;
  unsigned long t1480 = __n1476;
  char* r1481 = std__allocator_traits_std__allocator_char_____allocate(t1479, t1480);
  __p1478 = r1481;
  char* t1482 = __p1478;
  __retval1477 = t1482;
  char* t1483 = __retval1477;
  return t1483;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1484) {
bb1485:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1486;
  struct std__allocator_char_* __retval1487;
  this1486 = v1484;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1488 = this1486;
  struct std__allocator_char_* base1489 = (struct std__allocator_char_*)((char *)&(t1488->_M_dataplus) + 0);
  __retval1487 = base1489;
  struct std__allocator_char_* t1490 = __retval1487;
  return t1490;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1491, unsigned long* v1492, unsigned long v1493) {
bb1494:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1495;
  unsigned long* __capacity1496;
  unsigned long __old_capacity1497;
  char* __retval1498;
  this1495 = v1491;
  __capacity1496 = v1492;
  __old_capacity1497 = v1493;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1499 = this1495;
    unsigned long* t1500 = __capacity1496;
    unsigned long t1501 = *t1500;
    unsigned long r1502 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1499);
    _Bool c1503 = ((t1501 > r1502)) ? 1 : 0;
    if (c1503) {
      char* cast1504 = (char*)&(_str_23);
      std____throw_length_error(cast1504);
    }
    unsigned long* t1505 = __capacity1496;
    unsigned long t1506 = *t1505;
    unsigned long t1507 = __old_capacity1497;
    _Bool c1508 = ((t1506 > t1507)) ? 1 : 0;
    _Bool ternary1509;
    if (c1508) {
      unsigned long* t1510 = __capacity1496;
      unsigned long t1511 = *t1510;
      unsigned long c1512 = 2;
      unsigned long t1513 = __old_capacity1497;
      unsigned long b1514 = c1512 * t1513;
      _Bool c1515 = ((t1511 < b1514)) ? 1 : 0;
      ternary1509 = (_Bool)c1515;
    } else {
      _Bool c1516 = 0;
      ternary1509 = (_Bool)c1516;
    }
    if (ternary1509) {
      unsigned long c1517 = 2;
      unsigned long t1518 = __old_capacity1497;
      unsigned long b1519 = c1517 * t1518;
      unsigned long* t1520 = __capacity1496;
      *t1520 = b1519;
        unsigned long* t1521 = __capacity1496;
        unsigned long t1522 = *t1521;
        unsigned long r1523 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1499);
        _Bool c1524 = ((t1522 > r1523)) ? 1 : 0;
        if (c1524) {
          unsigned long r1525 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1499);
          unsigned long* t1526 = __capacity1496;
          *t1526 = r1525;
        }
    }
  struct std__allocator_char_* r1527 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1499);
  unsigned long* t1528 = __capacity1496;
  unsigned long t1529 = *t1528;
  unsigned long c1530 = 1;
  unsigned long b1531 = t1529 + c1530;
  char* r1532 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1527, b1531);
  __retval1498 = r1532;
  char* t1533 = __retval1498;
  return t1533;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1534, unsigned long v1535) {
bb1536:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1537;
  unsigned long __capacity1538;
  this1537 = v1534;
  __capacity1538 = v1535;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1539 = this1537;
  unsigned long t1540 = __capacity1538;
  t1539->field2._M_allocated_capacity = t1540;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1541:
  _Bool __retval1542;
    _Bool c1543 = 0;
    __retval1542 = c1543;
    _Bool t1544 = __retval1542;
    return t1544;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1545) {
bb1546:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1547;
  this1547 = v1545;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1548 = this1547;
    _Bool r1549 = std__is_constant_evaluated();
    if (r1549) {
        unsigned long __i1550;
        unsigned long c1551 = 0;
        __i1550 = c1551;
        while (1) {
          unsigned long t1553 = __i1550;
          unsigned long c1554 = 15;
          _Bool c1555 = ((t1553 <= c1554)) ? 1 : 0;
          if (!c1555) break;
          char c1556 = 0;
          unsigned long t1557 = __i1550;
          t1548->field2._M_local_buf[t1557] = c1556;
        for_step1552: ;
          unsigned long t1558 = __i1550;
          unsigned long u1559 = t1558 + 1;
          __i1550 = u1559;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1560, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1561) {
bb1562:
  struct _Guard* this1563;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1564;
  this1563 = v1560;
  __s1564 = v1561;
  struct _Guard* t1565 = this1563;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1566 = __s1564;
  t1565->_M_guarded = t1566;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1567, char* v1568) {
bb1569:
  char* __location1570;
  char* __args1571;
  char* __retval1572;
  void* __loc1573;
  __location1570 = v1567;
  __args1571 = v1568;
  char* t1574 = __location1570;
  void* cast1575 = (void*)t1574;
  __loc1573 = cast1575;
    void* t1576 = __loc1573;
    char* cast1577 = (char*)t1576;
    char* t1578 = __args1571;
    char t1579 = *t1578;
    *cast1577 = t1579;
    __retval1572 = cast1577;
    char* t1580 = __retval1572;
    return t1580;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign_2(char* v1581, char* v1582) {
bb1583:
  char* __c11584;
  char* __c21585;
  __c11584 = v1581;
  __c21585 = v1582;
    _Bool r1586 = std____is_constant_evaluated();
    if (r1586) {
      char* t1587 = __c11584;
      char* t1588 = __c21585;
      char* r1589 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1587, t1588);
    } else {
      char* t1590 = __c21585;
      char t1591 = *t1590;
      char* t1592 = __c11584;
      *t1592 = t1591;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1593, char* v1594, unsigned long v1595) {
bb1596:
  char* __s11597;
  char* __s21598;
  unsigned long __n1599;
  char* __retval1600;
  __s11597 = v1593;
  __s21598 = v1594;
  __n1599 = v1595;
    unsigned long t1601 = __n1599;
    unsigned long c1602 = 0;
    _Bool c1603 = ((t1601 == c1602)) ? 1 : 0;
    if (c1603) {
      char* t1604 = __s11597;
      __retval1600 = t1604;
      char* t1605 = __retval1600;
      return t1605;
    }
    _Bool r1606 = std____is_constant_evaluated();
    if (r1606) {
        unsigned long __i1607;
        unsigned long c1608 = 0;
        __i1607 = c1608;
        while (1) {
          unsigned long t1610 = __i1607;
          unsigned long t1611 = __n1599;
          _Bool c1612 = ((t1610 < t1611)) ? 1 : 0;
          if (!c1612) break;
          char* t1613 = __s11597;
          unsigned long t1614 = __i1607;
          char* ptr1615 = &(t1613)[t1614];
          unsigned long t1616 = __i1607;
          char* t1617 = __s21598;
          char* ptr1618 = &(t1617)[t1616];
          char* r1619 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1615, ptr1618);
        for_step1609: ;
          unsigned long t1620 = __i1607;
          unsigned long u1621 = t1620 + 1;
          __i1607 = u1621;
        }
      char* t1622 = __s11597;
      __retval1600 = t1622;
      char* t1623 = __retval1600;
      return t1623;
    }
  char* t1624 = __s11597;
  void* cast1625 = (void*)t1624;
  char* t1626 = __s21598;
  void* cast1627 = (void*)t1626;
  unsigned long t1628 = __n1599;
  unsigned long c1629 = 1;
  unsigned long b1630 = t1628 * c1629;
  void* r1631 = memcpy(cast1625, cast1627, b1630);
  char* t1632 = __s11597;
  __retval1600 = t1632;
  char* t1633 = __retval1600;
  return t1633;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1634, char* v1635, unsigned long v1636) {
bb1637:
  char* __s11638;
  char* __s21639;
  unsigned long __n1640;
  char* __retval1641;
  __s11638 = v1634;
  __s21639 = v1635;
  __n1640 = v1636;
    unsigned long t1642 = __n1640;
    unsigned long c1643 = 0;
    _Bool c1644 = ((t1642 == c1643)) ? 1 : 0;
    if (c1644) {
      char* t1645 = __s11638;
      __retval1641 = t1645;
      char* t1646 = __retval1641;
      return t1646;
    }
    _Bool r1647 = std____is_constant_evaluated();
    if (r1647) {
      char* t1648 = __s11638;
      char* t1649 = __s21639;
      unsigned long t1650 = __n1640;
      char* r1651 = __gnu_cxx__char_traits_char___copy(t1648, t1649, t1650);
      __retval1641 = r1651;
      char* t1652 = __retval1641;
      return t1652;
    }
  char* t1653 = __s11638;
  void* cast1654 = (void*)t1653;
  char* t1655 = __s21639;
  void* cast1656 = (void*)t1655;
  unsigned long t1657 = __n1640;
  void* r1658 = memcpy(cast1654, cast1656, t1657);
  char* cast1659 = (char*)r1658;
  __retval1641 = cast1659;
  char* t1660 = __retval1641;
  return t1660;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1661, char* v1662, unsigned long v1663) {
bb1664:
  char* __d1665;
  char* __s1666;
  unsigned long __n1667;
  __d1665 = v1661;
  __s1666 = v1662;
  __n1667 = v1663;
    unsigned long t1668 = __n1667;
    unsigned long c1669 = 1;
    _Bool c1670 = ((t1668 == c1669)) ? 1 : 0;
    if (c1670) {
      char* t1671 = __d1665;
      char* t1672 = __s1666;
      std__char_traits_char___assign_2(t1671, t1672);
    } else {
      char* t1673 = __d1665;
      char* t1674 = __s1666;
      unsigned long t1675 = __n1667;
      char* r1676 = std__char_traits_char___copy(t1673, t1674, t1675);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1677) {
bb1678:
  char* __it1679;
  char* __retval1680;
  __it1679 = v1677;
  char* t1681 = __it1679;
  __retval1680 = t1681;
  char* t1682 = __retval1680;
  return t1682;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1683, char* v1684, char* v1685) {
bb1686:
  char* __p1687;
  char* __k11688;
  char* __k21689;
  __p1687 = v1683;
  __k11688 = v1684;
  __k21689 = v1685;
    char* t1690 = __p1687;
    char* t1691 = __k11688;
    char* r1692 = char_const__std____niter_base_char_const__(t1691);
    char* t1693 = __k21689;
    char* t1694 = __k11688;
    long diff1695 = t1693 - t1694;
    unsigned long cast1696 = (unsigned long)diff1695;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1690, r1692, cast1696);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1697) {
bb1698:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1699;
  char* __retval1700;
  this1699 = v1697;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1701 = this1699;
  char* t1702 = t1701->_M_dataplus._M_p;
  __retval1700 = t1702;
  char* t1703 = __retval1700;
  return t1703;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1704, unsigned long v1705) {
bb1706:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1707;
  unsigned long __length1708;
  this1707 = v1704;
  __length1708 = v1705;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1709 = this1707;
  unsigned long t1710 = __length1708;
  t1709->_M_string_length = t1710;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1711, unsigned long v1712) {
bb1713:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1714;
  unsigned long __n1715;
  char ref_tmp01716;
  this1714 = v1711;
  __n1715 = v1712;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1717 = this1714;
  unsigned long t1718 = __n1715;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1717, t1718);
  unsigned long t1719 = __n1715;
  char* r1720 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1717);
  char* ptr1721 = &(r1720)[t1719];
  char c1722 = 0;
  ref_tmp01716 = c1722;
  std__char_traits_char___assign_2(ptr1721, &ref_tmp01716);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1723) {
bb1724:
  struct _Guard* this1725;
  this1725 = v1723;
  struct _Guard* t1726 = this1725;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1727 = t1726->_M_guarded;
    _Bool cast1728 = (_Bool)t1727;
    if (cast1728) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1729 = t1726->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1729);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1730, char* v1731, char* v1732, struct std__forward_iterator_tag v1733) {
bb1734:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1735;
  char* __beg1736;
  char* __end1737;
  struct std__forward_iterator_tag unnamed1738;
  unsigned long __dnew1739;
  struct _Guard __guard1740;
  this1735 = v1730;
  __beg1736 = v1731;
  __end1737 = v1732;
  unnamed1738 = v1733;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1741 = this1735;
  char* t1742 = __beg1736;
  char* t1743 = __end1737;
  long r1744 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1742, t1743);
  unsigned long cast1745 = (unsigned long)r1744;
  __dnew1739 = cast1745;
    unsigned long t1746 = __dnew1739;
    unsigned long c1747 = 15;
    _Bool c1748 = ((t1746 > c1747)) ? 1 : 0;
    if (c1748) {
      unsigned long c1749 = 0;
      char* r1750 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1741, &__dnew1739, c1749);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1741, r1750);
      unsigned long t1751 = __dnew1739;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1741, t1751);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1741);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1740, t1741);
    char* r1752 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1741);
    char* t1753 = __beg1736;
    char* t1754 = __end1737;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1752, t1753, t1754);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1755 = ((void*)0);
    __guard1740._M_guarded = c1755;
    unsigned long t1756 = __dnew1739;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1741, t1756);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1740);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1757) {
bb1758:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1759;
  this1759 = v1757;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1760 = this1759;
  {
    struct std__allocator_char_* base1761 = (struct std__allocator_char_*)((char *)t1760 + 0);
    std__allocator_char____allocator(base1761);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1762, struct std____new_allocator_char_* v1763) {
bb1764:
  struct std____new_allocator_char_* this1765;
  struct std____new_allocator_char_* unnamed1766;
  this1765 = v1762;
  unnamed1766 = v1763;
  struct std____new_allocator_char_* t1767 = this1765;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1768) {
bb1769:
  char* __r1770;
  char* __retval1771;
  __r1770 = v1768;
  char* t1772 = __r1770;
  __retval1771 = t1772;
  char* t1773 = __retval1771;
  return t1773;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1774) {
bb1775:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1776;
  char* __retval1777;
  this1776 = v1774;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1778 = this1776;
  char* cast1779 = (char*)&(t1778->field2._M_local_buf);
  char* r1780 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1779);
  __retval1777 = r1780;
  char* t1781 = __retval1777;
  return t1781;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1782) {
bb1783:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1784;
  _Bool __retval1785;
  this1784 = v1782;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1786 = this1784;
    char* r1787 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1786);
    char* r1788 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1786);
    _Bool c1789 = ((r1787 == r1788)) ? 1 : 0;
    if (c1789) {
        unsigned long t1790 = t1786->_M_string_length;
        unsigned long c1791 = 15;
        _Bool c1792 = ((t1790 > c1791)) ? 1 : 0;
        if (c1792) {
          __builtin_unreachable();
        }
      _Bool c1793 = 1;
      __retval1785 = c1793;
      _Bool t1794 = __retval1785;
      return t1794;
    }
  _Bool c1795 = 0;
  __retval1785 = c1795;
  _Bool t1796 = __retval1785;
  return t1796;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1797, char* v1798, unsigned long v1799) {
bb1800:
  struct std____new_allocator_char_* this1801;
  char* __p1802;
  unsigned long __n1803;
  this1801 = v1797;
  __p1802 = v1798;
  __n1803 = v1799;
  struct std____new_allocator_char_* t1804 = this1801;
    unsigned long c1805 = 1;
    unsigned long c1806 = 16;
    _Bool c1807 = ((c1805 > c1806)) ? 1 : 0;
    if (c1807) {
      char* t1808 = __p1802;
      void* cast1809 = (void*)t1808;
      unsigned long t1810 = __n1803;
      unsigned long c1811 = 1;
      unsigned long b1812 = t1810 * c1811;
      unsigned long c1813 = 1;
      operator_delete_3(cast1809, b1812, c1813);
      return;
    }
  char* t1814 = __p1802;
  void* cast1815 = (void*)t1814;
  unsigned long t1816 = __n1803;
  unsigned long c1817 = 1;
  unsigned long b1818 = t1816 * c1817;
  operator_delete_2(cast1815, b1818);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1819, char* v1820, unsigned long v1821) {
bb1822:
  struct std__allocator_char_* this1823;
  char* __p1824;
  unsigned long __n1825;
  this1823 = v1819;
  __p1824 = v1820;
  __n1825 = v1821;
  struct std__allocator_char_* t1826 = this1823;
    _Bool r1827 = std____is_constant_evaluated();
    if (r1827) {
      char* t1828 = __p1824;
      void* cast1829 = (void*)t1828;
      operator_delete(cast1829);
      return;
    }
  struct std____new_allocator_char_* base1830 = (struct std____new_allocator_char_*)((char *)t1826 + 0);
  char* t1831 = __p1824;
  unsigned long t1832 = __n1825;
  std____new_allocator_char___deallocate(base1830, t1831, t1832);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1833, char* v1834, unsigned long v1835) {
bb1836:
  struct std__allocator_char_* __a1837;
  char* __p1838;
  unsigned long __n1839;
  __a1837 = v1833;
  __p1838 = v1834;
  __n1839 = v1835;
  struct std__allocator_char_* t1840 = __a1837;
  char* t1841 = __p1838;
  unsigned long t1842 = __n1839;
  std__allocator_char___deallocate(t1840, t1841, t1842);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1843, unsigned long v1844) {
bb1845:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1846;
  unsigned long __size1847;
  this1846 = v1843;
  __size1847 = v1844;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1848 = this1846;
  struct std__allocator_char_* r1849 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1848);
  char* r1850 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1848);
  unsigned long t1851 = __size1847;
  unsigned long c1852 = 1;
  unsigned long b1853 = t1851 + c1852;
  std__allocator_traits_std__allocator_char_____deallocate(r1849, r1850, b1853);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1854) {
bb1855:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1856;
  this1856 = v1854;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1857 = this1856;
    _Bool r1858 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1857);
    _Bool u1859 = !r1858;
    if (u1859) {
      unsigned long t1860 = t1857->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1857, t1860);
    }
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1861, struct std__allocator_char_* v1862) {
bb1863:
  struct std__allocator_char_* this1864;
  struct std__allocator_char_* __a1865;
  this1864 = v1861;
  __a1865 = v1862;
  struct std__allocator_char_* t1866 = this1864;
  struct std____new_allocator_char_* base1867 = (struct std____new_allocator_char_*)((char *)t1866 + 0);
  struct std__allocator_char_* t1868 = __a1865;
  struct std____new_allocator_char_* base1869 = (struct std____new_allocator_char_*)((char *)t1868 + 0);
  std____new_allocator_char_____new_allocator(base1867, base1869);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE37select_on_container_copy_constructionERKS0_
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* v1870) {
bb1871:
  struct std__allocator_char_* __rhs1872;
  struct std__allocator_char_ __retval1873;
  __rhs1872 = v1870;
  struct std__allocator_char_* t1874 = __rhs1872;
  std__allocator_char___allocator(&__retval1873, t1874);
  struct std__allocator_char_ t1875 = __retval1873;
  return t1875;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE17_S_select_on_copyERKS1_
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* v1876) {
bb1877:
  struct std__allocator_char_* __a1878;
  struct std__allocator_char_ __retval1879;
  __a1878 = v1876;
  struct std__allocator_char_* t1880 = __a1878;
  struct std__allocator_char_ r1881 = std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(t1880);
  __retval1879 = r1881;
  struct std__allocator_char_ t1882 = __retval1879;
  return t1882;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1883, char* v1884, struct std__allocator_char_* v1885) {
bb1886:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1887;
  char* __dat1888;
  struct std__allocator_char_* __a1889;
  this1887 = v1883;
  __dat1888 = v1884;
  __a1889 = v1885;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1890 = this1887;
  struct std__allocator_char_* base1891 = (struct std__allocator_char_*)((char *)t1890 + 0);
  struct std__allocator_char_* t1892 = __a1889;
  std__allocator_char___allocator(base1891, t1892);
    char* t1893 = __dat1888;
    t1890->_M_p = t1893;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructILb1EEEvPKcm
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_true_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1894, char* v1895, unsigned long v1896) {
bb1897:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1898;
  char* __str1899;
  unsigned long __n1900;
  this1898 = v1894;
  __str1899 = v1895;
  __n1900 = v1896;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1901 = this1898;
    unsigned long t1902 = __n1900;
    unsigned long c1903 = 15;
    _Bool c1904 = ((t1902 > c1903)) ? 1 : 0;
    if (c1904) {
      unsigned long c1905 = 0;
      char* r1906 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1901, &__n1900, c1905);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1901, r1906);
      unsigned long t1907 = __n1900;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1901, t1907);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1901);
    }
    unsigned long t1908 = __n1900;
    _Bool cast1909 = (_Bool)t1908;
    _Bool ternary1910;
    if (cast1909) {
      _Bool c1911 = 1;
      ternary1910 = (_Bool)c1911;
    } else {
      _Bool c1912 = 1;
      ternary1910 = (_Bool)c1912;
    }
    if (ternary1910) {
      char* r1913 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1901);
      char* t1914 = __str1899;
      unsigned long t1915 = __n1900;
      _Bool c1916 = 1;
      unsigned long cast1917 = (unsigned long)c1916;
      unsigned long b1918 = t1915 + cast1917;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1913, t1914, b1918);
    }
  unsigned long t1919 = __n1900;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1901, t1919);
    _Bool c1920 = 0;
    if (c1920) {
      char ref_tmp01921;
      unsigned long t1922 = __n1900;
      char* r1923 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1901);
      char* ptr1924 = &(r1923)[t1922];
      char c1925 = 0;
      ref_tmp01921 = c1925;
      std__char_traits_char___assign_2(ptr1924, &ref_tmp01921);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1926) {
bb1927:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1928;
  unsigned long __retval1929;
  unsigned long __sz1930;
  this1928 = v1926;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1931 = this1928;
  unsigned long t1932 = t1931->_M_string_length;
  __sz1930 = t1932;
    unsigned long t1933 = __sz1930;
    unsigned long r1934 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1931);
    _Bool c1935 = ((t1933 > r1934)) ? 1 : 0;
    if (c1935) {
      __builtin_unreachable();
    }
  unsigned long t1936 = __sz1930;
  __retval1929 = t1936;
  unsigned long t1937 = __retval1929;
  return t1937;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1938) {
bb1939:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1940;
  unsigned long __retval1941;
  this1940 = v1938;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1942 = this1940;
  unsigned long r1943 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1942);
  __retval1941 = r1943;
  unsigned long t1944 = __retval1941;
  return t1944;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE4baseEv
char** __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v1945) {
bb1946:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this1947;
  char** __retval1948;
  this1947 = v1945;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t1949 = this1947;
  __retval1948 = &t1949->_M_current;
  char** t1950 = __retval1948;
  return t1950;
}

