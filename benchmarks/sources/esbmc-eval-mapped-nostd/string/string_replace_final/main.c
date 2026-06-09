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
char _str_5[36] = "str == \"this is an example string.\"";
char _str_6[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_replace_final/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_7[27] = "this is an example phrase.";
char _str_8[36] = "str == \"this is an example phrase.\"";
char _str_9[9] = "just all";
char _str_10[23] = "this is just a phrase.";
char _str_11[32] = "str == \"this is just a phrase.\"";
char _str_12[8] = "a short";
char _str_13[24] = "this is a short phrase.";
char _str_14[33] = "str == \"this is a short phrase.\"";
char _str_15[26] = "this is a short phrase!!!";
char _str_16[35] = "str == \"this is a short phrase!!!\"";
char _str_17[17] = "sample phrase!!!";
char _str_18[26] = "str == \"sample phrase!!!\"";
char _str_19[11] = "replace it";
char _str_20[18] = "replace phrase!!!";
char _str_21[27] = "str == \"replace phrase!!!\"";
char _str_22[8] = "is cool";
char _str_23[19] = "replace is cool!!!";
char _str_24[28] = "str == \"replace is cool!!!\"";
char _str_25[21] = "replace is cooool!!!";
char _str_26[30] = "str == \"replace is cooool!!!\"";
char _str_27[19] = "replace is useful.";
char _str_28[28] = "str == \"replace is useful.\"";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_29[50] = "basic_string: construction from null is not valid";
char _str_30[24] = "basic_string::_M_create";
char _str_31[22] = "basic_string::replace";
char _str_32[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_33[25] = "basic_string::_M_replace";
char _str_34[29] = "basic_string::_M_replace_aux";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_8(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p3);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_9(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p3, unsigned long p4, unsigned long p5);
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_7(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_6(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___assign(char* p0, unsigned long p1, char p2);
extern void* memset(void* p0, int p1, unsigned long p2);
char* std__char_traits_char___assign(char* p0, unsigned long p1, char p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(char* p0, unsigned long p1, char p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, unsigned long p3, char p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_10(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, unsigned long p3, char p4);
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, char** p1);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p3);
void _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, long p1);
char** __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);
long decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
long __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_4(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p2, char* p3, unsigned long p4);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const_2(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, long p1);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, long p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p2, char* p3);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_5(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p2, unsigned long p3, char p4);
long __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p2, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p3, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p4);
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
        char* cast20 = (char*)&(_str_29);
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_8(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v47, unsigned long v48, unsigned long v49, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v50) {
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
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r64 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_7(t57, t58, t59, r61, r63);
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
      char* cast174 = (char*)&(_str_32);
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_9(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v202, unsigned long v203, unsigned long v204, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v205, unsigned long v206, unsigned long v207) {
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
  char* cast223 = (char*)&(_str_31);
  unsigned long r224 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t221, t222, cast223);
  char* ptr225 = &(r220)[r224];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t226 = __str212;
  unsigned long t227 = __pos2213;
  unsigned long t228 = __n2214;
  unsigned long r229 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t226, t227, t228);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r230 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_7(t216, t217, t218, ptr225, r229);
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
  char* cast586 = (char*)&(_str_33);
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_7(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v666, unsigned long v667, unsigned long v668, char* v669, unsigned long v670) {
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
  char* cast680 = (char*)&(_str_31);
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_6(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v689, unsigned long v690, unsigned long v691, char* v692) {
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
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r705 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_7(t699, t700, t701, t702, r704);
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
  char* cast818 = (char*)&(_str_34);
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_10(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v865, unsigned long v866, unsigned long v867, unsigned long v868, char v869) {
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
  char* cast879 = (char*)&(_str_31);
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v904, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v905, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v906, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v907) {
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
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r923 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_4(t916, t921, t922, r918, r920);
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_4(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v991, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v992, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v993, char* v994, unsigned long v995) {
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
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1012 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_7(t1004, cast1007, cast1009, t1010, t1011);
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

// function: _ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEpLEl
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v1026, long v1027) {
bb1028:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this1029;
  long __n1030;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __retval1031;
  this1029 = v1026;
  __n1030 = v1027;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t1032 = this1029;
  long t1033 = __n1030;
  char* t1034 = t1032->_M_current;
  char* ptr1035 = &(t1034)[t1033];
  t1032->_M_current = ptr1035;
  __retval1031 = t1032;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t1036 = __retval1031;
  return t1036;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEN9__gnu_cxx17__normal_iteratorIPKcS4_EES9_S8_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1037, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1038, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1039, char* v1040) {
bb1041:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1042;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __i11043;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __i21044;
  char* __s1045;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1046;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp01047;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp11048;
  this1042 = v1037;
  __i11043 = v1038;
  __i21044 = v1039;
  __s1045 = v1040;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1049 = this1042;
  agg_tmp01047 = __i11043; // copy
  agg_tmp11048 = __i21044; // copy
  char* t1050 = __s1045;
  char* t1051 = __s1045;
  unsigned long r1052 = std__char_traits_char___length(t1051);
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1053 = agg_tmp01047;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1054 = agg_tmp11048;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1055 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_4(t1049, t1053, t1054, t1050, r1052);
  __retval1046 = r1055;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1056 = __retval1046;
  return t1056;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEN9__gnu_cxx17__normal_iteratorIPKcS4_EES9_mc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_5(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1057, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1058, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1059, unsigned long v1060, char v1061) {
bb1062:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1063;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __i11064;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __i21065;
  unsigned long __n1066;
  char __c1067;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1068;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp01069;
  this1063 = v1057;
  __i11064 = v1058;
  __i21065 = v1059;
  __n1066 = v1060;
  __c1067 = v1061;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1070 = this1063;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1071 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(t1070);
  ref_tmp01069 = r1071;
  long r1072 = decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__i11064, &ref_tmp01069);
  unsigned long cast1073 = (unsigned long)r1072;
  long r1074 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__i21065, &__i11064);
  unsigned long cast1075 = (unsigned long)r1074;
  unsigned long t1076 = __n1066;
  char t1077 = __c1067;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1078 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(t1070, cast1073, cast1075, t1076, t1077);
  __retval1068 = r1078;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1079 = __retval1068;
  return t1079;
}

// function: _ZN9__gnu_cxxmiIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKSB_SE_
long __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v1080, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v1081) {
bb1082:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __lhs1083;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __rhs1084;
  long __retval1085;
  __lhs1083 = v1080;
  __rhs1084 = v1081;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t1086 = __lhs1083;
  char** r1087 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t1086);
  char* t1088 = *r1087;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t1089 = __rhs1084;
  char** r1090 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t1089);
  char* t1091 = *r1090;
  long diff1092 = t1088 - t1091;
  __retval1085 = diff1092;
  long t1093 = __retval1085;
  return t1093;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEN9__gnu_cxx17__normal_iteratorIPKcS4_EES9_NS6_IPcS4_EESB_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1094, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1095, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1096, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1097, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1098) {
bb1099:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1100;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __i11101;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __i21102;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __k11103;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __k21104;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1105;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp01106;
  this1100 = v1094;
  __i11101 = v1095;
  __i21102 = v1096;
  __k11103 = v1097;
  __k21104 = v1098;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1107 = this1100;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1108 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(t1107);
  ref_tmp01106 = r1108;
  long r1109 = decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__i11101, &ref_tmp01106);
  unsigned long cast1110 = (unsigned long)r1109;
  long r1111 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__i21102, &__i11101);
  unsigned long cast1112 = (unsigned long)r1111;
  char** r1113 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(&__k11103);
  char* t1114 = *r1113;
  long r1115 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__k21104, &__k11103);
  unsigned long cast1116 = (unsigned long)r1115;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1117 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_7(t1107, cast1110, cast1112, t1114, cast1116);
  __retval1105 = r1117;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1118 = __retval1105;
  return t1118;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v1119, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1120) {
bb1121:
  struct std__basic_ostream_char__std__char_traits_char__* __os1122;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1123;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1124;
  __os1122 = v1119;
  __str1123 = v1120;
  struct std__basic_ostream_char__std__char_traits_char__* t1125 = __os1122;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1126 = __str1123;
  char* r1127 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t1126);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1128 = __str1123;
  unsigned long r1129 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1128);
  long cast1130 = (long)r1129;
  struct std__basic_ostream_char__std__char_traits_char__* r1131 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1125, r1127, cast1130);
  __retval1124 = r1131;
  struct std__basic_ostream_char__std__char_traits_char__* t1132 = __retval1124;
  return t1132;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1133, void* v1134) {
bb1135:
  struct std__basic_ostream_char__std__char_traits_char__* this1136;
  void* __pf1137;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1138;
  this1136 = v1133;
  __pf1137 = v1134;
  struct std__basic_ostream_char__std__char_traits_char__* t1139 = this1136;
  void* t1140 = __pf1137;
  struct std__basic_ostream_char__std__char_traits_char__* r1141 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1140)(t1139);
  __retval1138 = r1141;
  struct std__basic_ostream_char__std__char_traits_char__* t1142 = __retval1138;
  return t1142;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1143) {
bb1144:
  struct std__basic_ostream_char__std__char_traits_char__* __os1145;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1146;
  __os1145 = v1143;
  struct std__basic_ostream_char__std__char_traits_char__* t1147 = __os1145;
  struct std__basic_ostream_char__std__char_traits_char__* r1148 = std__ostream__flush(t1147);
  __retval1146 = r1148;
  struct std__basic_ostream_char__std__char_traits_char__* t1149 = __retval1146;
  return t1149;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1150) {
bb1151:
  struct std__ctype_char_* __f1152;
  struct std__ctype_char_* __retval1153;
  __f1152 = v1150;
    struct std__ctype_char_* t1154 = __f1152;
    _Bool cast1155 = (_Bool)t1154;
    _Bool u1156 = !cast1155;
    if (u1156) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t1157 = __f1152;
  __retval1153 = t1157;
  struct std__ctype_char_* t1158 = __retval1153;
  return t1158;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1159, char v1160) {
bb1161:
  struct std__ctype_char_* this1162;
  char __c1163;
  char __retval1164;
  this1162 = v1159;
  __c1163 = v1160;
  struct std__ctype_char_* t1165 = this1162;
    char t1166 = t1165->_M_widen_ok;
    _Bool cast1167 = (_Bool)t1166;
    if (cast1167) {
      char t1168 = __c1163;
      unsigned char cast1169 = (unsigned char)t1168;
      unsigned long cast1170 = (unsigned long)cast1169;
      char t1171 = t1165->_M_widen[cast1170];
      __retval1164 = t1171;
      char t1172 = __retval1164;
      return t1172;
    }
  std__ctype_char____M_widen_init___const(t1165);
  char t1173 = __c1163;
  void** v1174 = (void**)t1165;
  void* v1175 = *((void**)v1174);
  char vcall1178 = (char)__VERIFIER_virtual_call_char_char(t1165, 6, t1173);
  __retval1164 = vcall1178;
  char t1179 = __retval1164;
  return t1179;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1180, char v1181) {
bb1182:
  struct std__basic_ios_char__std__char_traits_char__* this1183;
  char __c1184;
  char __retval1185;
  this1183 = v1180;
  __c1184 = v1181;
  struct std__basic_ios_char__std__char_traits_char__* t1186 = this1183;
  struct std__ctype_char_* t1187 = t1186->_M_ctype;
  struct std__ctype_char_* r1188 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1187);
  char t1189 = __c1184;
  char r1190 = std__ctype_char___widen_char__const(r1188, t1189);
  __retval1185 = r1190;
  char t1191 = __retval1185;
  return t1191;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1192) {
bb1193:
  struct std__basic_ostream_char__std__char_traits_char__* __os1194;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1195;
  __os1194 = v1192;
  struct std__basic_ostream_char__std__char_traits_char__* t1196 = __os1194;
  struct std__basic_ostream_char__std__char_traits_char__* t1197 = __os1194;
  void** v1198 = (void**)t1197;
  void* v1199 = *((void**)v1198);
  unsigned char* cast1200 = (unsigned char*)v1199;
  long c1201 = -24;
  unsigned char* ptr1202 = &(cast1200)[c1201];
  long* cast1203 = (long*)ptr1202;
  long t1204 = *cast1203;
  unsigned char* cast1205 = (unsigned char*)t1197;
  unsigned char* ptr1206 = &(cast1205)[t1204];
  struct std__basic_ostream_char__std__char_traits_char__* cast1207 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1206;
  struct std__basic_ios_char__std__char_traits_char__* cast1208 = (struct std__basic_ios_char__std__char_traits_char__*)cast1207;
  char c1209 = 10;
  char r1210 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1208, c1209);
  struct std__basic_ostream_char__std__char_traits_char__* r1211 = std__ostream__put(t1196, r1210);
  struct std__basic_ostream_char__std__char_traits_char__* r1212 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1211);
  __retval1195 = r1212;
  struct std__basic_ostream_char__std__char_traits_char__* t1213 = __retval1195;
  return t1213;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1214) {
bb1215:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1216;
  this1216 = v1214;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1217 = this1216;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1217);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1217->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb1218:
  int __retval1219;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ base1220;
  struct std__allocator_char_ ref_tmp01221;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str21222;
  struct std__allocator_char_ ref_tmp11223;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str31224;
  struct std__allocator_char_ ref_tmp21225;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str41226;
  struct std__allocator_char_ ref_tmp31227;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str1228;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ it1229;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp01230;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp11231;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp41232;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp51233;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp21234;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp31235;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp61236;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp41237;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp51238;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp71239;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp61240;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp81241;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp71242;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp91243;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp101244;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp81245;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp91246;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp111247;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp101248;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp111249;
  int c1250 = 0;
  __retval1219 = c1250;
  char* cast1251 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp01221);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&base1220, cast1251, &ref_tmp01221);
  {
    std__allocator_char____allocator(&ref_tmp01221);
  }
    char* cast1252 = (char*)&(_str_1);
    std__allocator_char___allocator_2(&ref_tmp11223);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str21222, cast1252, &ref_tmp11223);
    {
      std__allocator_char____allocator(&ref_tmp11223);
    }
      char* cast1253 = (char*)&(_str_2);
      std__allocator_char___allocator_2(&ref_tmp21225);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str31224, cast1253, &ref_tmp21225);
      {
        std__allocator_char____allocator(&ref_tmp21225);
      }
        char* cast1254 = (char*)&(_str_3);
        std__allocator_char___allocator_2(&ref_tmp31227);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str41226, cast1254, &ref_tmp31227);
        {
          std__allocator_char____allocator(&ref_tmp31227);
        }
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&str1228, &base1220);
            unsigned long c1255 = 9;
            unsigned long c1256 = 5;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1257 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_8(&str1228, c1255, c1256, &str21222);
            char* cast1258 = (char*)&(_str_4);
            _Bool r1259 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1228, cast1258);
            if (r1259) {
            } else {
              char* cast1260 = (char*)&(_str_5);
              char* c1261 = _str_6;
              unsigned int c1262 = 27;
              char* cast1263 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1260, c1261, c1262, cast1263);
            }
            unsigned long c1264 = 19;
            unsigned long c1265 = 6;
            unsigned long c1266 = 7;
            unsigned long c1267 = 6;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1268 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_9(&str1228, c1264, c1265, &str31224, c1266, c1267);
            char* cast1269 = (char*)&(_str_7);
            _Bool r1270 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1228, cast1269);
            if (r1270) {
            } else {
              char* cast1271 = (char*)&(_str_8);
              char* c1272 = _str_6;
              unsigned int c1273 = 30;
              char* cast1274 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1271, c1272, c1273, cast1274);
            }
            unsigned long c1275 = 8;
            unsigned long c1276 = 10;
            char* cast1277 = (char*)&(_str_9);
            unsigned long c1278 = 6;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1279 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_7(&str1228, c1275, c1276, cast1277, c1278);
            char* cast1280 = (char*)&(_str_10);
            _Bool r1281 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1228, cast1280);
            if (r1281) {
            } else {
              char* cast1282 = (char*)&(_str_11);
              char* c1283 = _str_6;
              unsigned int c1284 = 33;
              char* cast1285 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1282, c1283, c1284, cast1285);
            }
            unsigned long c1286 = 8;
            unsigned long c1287 = 6;
            char* cast1288 = (char*)&(_str_12);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1289 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_6(&str1228, c1286, c1287, cast1288);
            char* cast1290 = (char*)&(_str_13);
            _Bool r1291 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1228, cast1290);
            if (r1291) {
            } else {
              char* cast1292 = (char*)&(_str_14);
              char* c1293 = _str_6;
              unsigned int c1294 = 36;
              char* cast1295 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1292, c1293, c1294, cast1295);
            }
            unsigned long c1296 = 22;
            unsigned long c1297 = 1;
            unsigned long c1298 = 3;
            char c1299 = 33;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1300 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_10(&str1228, c1296, c1297, c1298, c1299);
            char* cast1301 = (char*)&(_str_15);
            _Bool r1302 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1228, cast1301);
            if (r1302) {
            } else {
              char* cast1303 = (char*)&(_str_16);
              char* c1304 = _str_6;
              unsigned int c1305 = 39;
              char* cast1306 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1303, c1304, c1305, cast1306);
            }
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1307 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(&str1228);
            it1229 = r1307;
            _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp01230, &it1229);
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1308 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(&str1228);
            ref_tmp51233 = r1308;
            long c1309 = 3;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1310 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(&ref_tmp51233, c1309);
            ref_tmp41232 = r1310;
            _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp11231, &ref_tmp41232);
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1311 = agg_tmp01230;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1312 = agg_tmp11231;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1313 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(&str1228, t1311, t1312, &str31224);
            char* cast1314 = (char*)&(_str_17);
            _Bool r1315 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1228, cast1314);
            if (r1315) {
            } else {
              char* cast1316 = (char*)&(_str_18);
              char* c1317 = _str_6;
              unsigned int c1318 = 44;
              char* cast1319 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1316, c1317, c1318, cast1319);
            }
            _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp21234, &it1229);
            long c1320 = 6;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1321 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const_2(&it1229, c1320);
            ref_tmp61236 = r1321;
            _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp31235, &ref_tmp61236);
            char* cast1322 = (char*)&(_str_19);
            unsigned long c1323 = 7;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1324 = agg_tmp21234;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1325 = agg_tmp31235;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1326 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_4(&str1228, t1324, t1325, cast1322, c1323);
            char* cast1327 = (char*)&(_str_20);
            _Bool r1328 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1228, cast1327);
            if (r1328) {
            } else {
              char* cast1329 = (char*)&(_str_21);
              char* c1330 = _str_6;
              unsigned int c1331 = 47;
              char* cast1332 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1329, c1330, c1331, cast1332);
            }
            long c1333 = 8;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* r1334 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__(&it1229, c1333);
            _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp41237, &it1229);
            long c1335 = 6;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1336 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const_2(&it1229, c1335);
            ref_tmp71239 = r1336;
            _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp51238, &ref_tmp71239);
            char* cast1337 = (char*)&(_str_22);
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1338 = agg_tmp41237;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1339 = agg_tmp51238;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1340 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(&str1228, t1338, t1339, cast1337);
            char* cast1341 = (char*)&(_str_23);
            _Bool r1342 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1228, cast1341);
            if (r1342) {
            } else {
              char* cast1343 = (char*)&(_str_24);
              char* c1344 = _str_6;
              unsigned int c1345 = 51;
              char* cast1346 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1343, c1344, c1345, cast1346);
            }
            long c1347 = 4;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1348 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const_2(&it1229, c1347);
            ref_tmp81241 = r1348;
            _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp61240, &ref_tmp81241);
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1349 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(&str1228);
            ref_tmp101244 = r1349;
            long c1350 = 4;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1351 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(&ref_tmp101244, c1350);
            ref_tmp91243 = r1351;
            _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp71242, &ref_tmp91243);
            unsigned long c1352 = 4;
            char c1353 = 111;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1354 = agg_tmp61240;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1355 = agg_tmp71242;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1356 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_5(&str1228, t1354, t1355, c1352, c1353);
            char* cast1357 = (char*)&(_str_25);
            _Bool r1358 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1228, cast1357);
            if (r1358) {
            } else {
              char* cast1359 = (char*)&(_str_26);
              char* c1360 = _str_6;
              unsigned int c1361 = 54;
              char* cast1362 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1359, c1360, c1361, cast1362);
            }
            long c1363 = 3;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* r1364 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__(&it1229, c1363);
            _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp81245, &it1229);
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1365 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(&str1228);
            ref_tmp111247 = r1365;
            _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp91246, &ref_tmp111247);
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1366 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(&str41226);
            agg_tmp101248 = r1366;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1367 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(&str41226);
            agg_tmp111249 = r1367;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1368 = agg_tmp81245;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1369 = agg_tmp91246;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1370 = agg_tmp101248;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1371 = agg_tmp111249;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1372 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(&str1228, t1368, t1369, t1370, t1371);
            char* cast1373 = (char*)&(_str_27);
            _Bool r1374 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1228, cast1373);
            if (r1374) {
            } else {
              char* cast1375 = (char*)&(_str_28);
              char* c1376 = _str_6;
              unsigned int c1377 = 58;
              char* cast1378 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1375, c1376, c1377, cast1378);
            }
            struct std__basic_ostream_char__std__char_traits_char__* r1379 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str1228);
            struct std__basic_ostream_char__std__char_traits_char__* r1380 = std__ostream__operator___std__ostream_____(r1379, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            int c1381 = 0;
            __retval1219 = c1381;
            int t1382 = __retval1219;
            int ret_val1383 = t1382;
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str1228);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str41226);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str31224);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str21222);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&base1220);
            }
            return ret_val1383;
  int t1384 = __retval1219;
  return t1384;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1385) {
bb1386:
  struct std____new_allocator_char_* this1387;
  this1387 = v1385;
  struct std____new_allocator_char_* t1388 = this1387;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1389) {
bb1390:
  char* __r1391;
  char* __retval1392;
  __r1391 = v1389;
  char* t1393 = __r1391;
  __retval1392 = t1393;
  char* t1394 = __retval1392;
  return t1394;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1395) {
bb1396:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1397;
  char* __retval1398;
  this1397 = v1395;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1399 = this1397;
  char* cast1400 = (char*)&(t1399->field2._M_local_buf);
  char* r1401 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1400);
  __retval1398 = r1401;
  char* t1402 = __retval1398;
  return t1402;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1403, char* v1404, struct std__allocator_char_* v1405) {
bb1406:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1407;
  char* __dat1408;
  struct std__allocator_char_* __a1409;
  this1407 = v1403;
  __dat1408 = v1404;
  __a1409 = v1405;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1410 = this1407;
  struct std__allocator_char_* base1411 = (struct std__allocator_char_*)((char *)t1410 + 0);
  struct std__allocator_char_* t1412 = __a1409;
  std__allocator_char___allocator(base1411, t1412);
    char* t1413 = __dat1408;
    t1410->_M_p = t1413;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1414:
  _Bool __retval1415;
    _Bool c1416 = 0;
    __retval1415 = c1416;
    _Bool t1417 = __retval1415;
    return t1417;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1418, char* v1419) {
bb1420:
  char* __c11421;
  char* __c21422;
  _Bool __retval1423;
  __c11421 = v1418;
  __c21422 = v1419;
  char* t1424 = __c11421;
  char t1425 = *t1424;
  int cast1426 = (int)t1425;
  char* t1427 = __c21422;
  char t1428 = *t1427;
  int cast1429 = (int)t1428;
  _Bool c1430 = ((cast1426 == cast1429)) ? 1 : 0;
  __retval1423 = c1430;
  _Bool t1431 = __retval1423;
  return t1431;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1432) {
bb1433:
  char* __p1434;
  unsigned long __retval1435;
  unsigned long __i1436;
  __p1434 = v1432;
  unsigned long c1437 = 0;
  __i1436 = c1437;
    char ref_tmp01438;
    while (1) {
      unsigned long t1439 = __i1436;
      char* t1440 = __p1434;
      char* ptr1441 = &(t1440)[t1439];
      char c1442 = 0;
      ref_tmp01438 = c1442;
      _Bool r1443 = __gnu_cxx__char_traits_char___eq(ptr1441, &ref_tmp01438);
      _Bool u1444 = !r1443;
      if (!u1444) break;
      unsigned long t1445 = __i1436;
      unsigned long u1446 = t1445 + 1;
      __i1436 = u1446;
    }
  unsigned long t1447 = __i1436;
  __retval1435 = t1447;
  unsigned long t1448 = __retval1435;
  return t1448;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1449) {
bb1450:
  char* __s1451;
  unsigned long __retval1452;
  __s1451 = v1449;
    _Bool r1453 = std____is_constant_evaluated();
    if (r1453) {
      char* t1454 = __s1451;
      unsigned long r1455 = __gnu_cxx__char_traits_char___length(t1454);
      __retval1452 = r1455;
      unsigned long t1456 = __retval1452;
      return t1456;
    }
  char* t1457 = __s1451;
  unsigned long r1458 = strlen(t1457);
  __retval1452 = r1458;
  unsigned long t1459 = __retval1452;
  return t1459;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v1460, char* v1461, struct std__random_access_iterator_tag v1462) {
bb1463:
  char* __first1464;
  char* __last1465;
  struct std__random_access_iterator_tag unnamed1466;
  long __retval1467;
  __first1464 = v1460;
  __last1465 = v1461;
  unnamed1466 = v1462;
  char* t1468 = __last1465;
  char* t1469 = __first1464;
  long diff1470 = t1468 - t1469;
  __retval1467 = diff1470;
  long t1471 = __retval1467;
  return t1471;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v1472) {
bb1473:
  char** unnamed1474;
  struct std__random_access_iterator_tag __retval1475;
  unnamed1474 = v1472;
  struct std__random_access_iterator_tag t1476 = __retval1475;
  return t1476;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v1477, char* v1478) {
bb1479:
  char* __first1480;
  char* __last1481;
  long __retval1482;
  struct std__random_access_iterator_tag agg_tmp01483;
  __first1480 = v1477;
  __last1481 = v1478;
  char* t1484 = __first1480;
  char* t1485 = __last1481;
  struct std__random_access_iterator_tag r1486 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first1480);
  agg_tmp01483 = r1486;
  struct std__random_access_iterator_tag t1487 = agg_tmp01483;
  long r1488 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t1484, t1485, t1487);
  __retval1482 = r1488;
  long t1489 = __retval1482;
  return t1489;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1490, char* v1491) {
bb1492:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1493;
  char* __p1494;
  this1493 = v1490;
  __p1494 = v1491;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1495 = this1493;
  char* t1496 = __p1494;
  t1495->_M_dataplus._M_p = t1496;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v1497) {
bb1498:
  struct std__allocator_char_* __a1499;
  unsigned long __retval1500;
  __a1499 = v1497;
  unsigned long c1501 = -1;
  unsigned long c1502 = 1;
  unsigned long b1503 = c1501 / c1502;
  __retval1500 = b1503;
  unsigned long t1504 = __retval1500;
  return t1504;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1505) {
bb1506:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1507;
  struct std__allocator_char_* __retval1508;
  this1507 = v1505;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1509 = this1507;
  struct std__allocator_char_* base1510 = (struct std__allocator_char_*)((char *)&(t1509->_M_dataplus) + 0);
  __retval1508 = base1510;
  struct std__allocator_char_* t1511 = __retval1508;
  return t1511;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1512, unsigned long* v1513) {
bb1514:
  unsigned long* __a1515;
  unsigned long* __b1516;
  unsigned long* __retval1517;
  __a1515 = v1512;
  __b1516 = v1513;
    unsigned long* t1518 = __b1516;
    unsigned long t1519 = *t1518;
    unsigned long* t1520 = __a1515;
    unsigned long t1521 = *t1520;
    _Bool c1522 = ((t1519 < t1521)) ? 1 : 0;
    if (c1522) {
      unsigned long* t1523 = __b1516;
      __retval1517 = t1523;
      unsigned long* t1524 = __retval1517;
      return t1524;
    }
  unsigned long* t1525 = __a1515;
  __retval1517 = t1525;
  unsigned long* t1526 = __retval1517;
  return t1526;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1527) {
bb1528:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1529;
  unsigned long __retval1530;
  unsigned long __diffmax1531;
  unsigned long __allocmax1532;
  this1529 = v1527;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1533 = this1529;
  unsigned long c1534 = 9223372036854775807;
  __diffmax1531 = c1534;
  struct std__allocator_char_* r1535 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1533);
  unsigned long r1536 = std__allocator_traits_std__allocator_char_____max_size(r1535);
  __allocmax1532 = r1536;
  unsigned long* r1537 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1531, &__allocmax1532);
  unsigned long t1538 = *r1537;
  unsigned long c1539 = 1;
  unsigned long b1540 = t1538 - c1539;
  __retval1530 = b1540;
  unsigned long t1541 = __retval1530;
  return t1541;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v1542) {
bb1543:
  struct std____new_allocator_char_* this1544;
  unsigned long __retval1545;
  this1544 = v1542;
  struct std____new_allocator_char_* t1546 = this1544;
  unsigned long c1547 = 9223372036854775807;
  unsigned long c1548 = 1;
  unsigned long b1549 = c1547 / c1548;
  __retval1545 = b1549;
  unsigned long t1550 = __retval1545;
  return t1550;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v1551, unsigned long v1552, void* v1553) {
bb1554:
  struct std____new_allocator_char_* this1555;
  unsigned long __n1556;
  void* unnamed1557;
  char* __retval1558;
  this1555 = v1551;
  __n1556 = v1552;
  unnamed1557 = v1553;
  struct std____new_allocator_char_* t1559 = this1555;
    unsigned long t1560 = __n1556;
    unsigned long r1561 = std____new_allocator_char____M_max_size___const(t1559);
    _Bool c1562 = ((t1560 > r1561)) ? 1 : 0;
    if (c1562) {
        unsigned long t1563 = __n1556;
        unsigned long c1564 = -1;
        unsigned long c1565 = 1;
        unsigned long b1566 = c1564 / c1565;
        _Bool c1567 = ((t1563 > b1566)) ? 1 : 0;
        if (c1567) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1568 = 1;
    unsigned long c1569 = 16;
    _Bool c1570 = ((c1568 > c1569)) ? 1 : 0;
    if (c1570) {
      unsigned long __al1571;
      unsigned long c1572 = 1;
      __al1571 = c1572;
      unsigned long t1573 = __n1556;
      unsigned long c1574 = 1;
      unsigned long b1575 = t1573 * c1574;
      unsigned long t1576 = __al1571;
      void* r1577 = operator_new_2(b1575, t1576);
      char* cast1578 = (char*)r1577;
      __retval1558 = cast1578;
      char* t1579 = __retval1558;
      return t1579;
    }
  unsigned long t1580 = __n1556;
  unsigned long c1581 = 1;
  unsigned long b1582 = t1580 * c1581;
  void* r1583 = operator_new(b1582);
  char* cast1584 = (char*)r1583;
  __retval1558 = cast1584;
  char* t1585 = __retval1558;
  return t1585;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1586, unsigned long v1587) {
bb1588:
  struct std__allocator_char_* this1589;
  unsigned long __n1590;
  char* __retval1591;
  this1589 = v1586;
  __n1590 = v1587;
  struct std__allocator_char_* t1592 = this1589;
    _Bool r1593 = std____is_constant_evaluated();
    if (r1593) {
        unsigned long t1594 = __n1590;
        unsigned long c1595 = 1;
        unsigned long ovr1596;
        _Bool ovf1597 = __builtin_mul_overflow(t1594, c1595, &ovr1596);
        __n1590 = ovr1596;
        if (ovf1597) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1598 = __n1590;
      void* r1599 = operator_new(t1598);
      char* cast1600 = (char*)r1599;
      __retval1591 = cast1600;
      char* t1601 = __retval1591;
      return t1601;
    }
  struct std____new_allocator_char_* base1602 = (struct std____new_allocator_char_*)((char *)t1592 + 0);
  unsigned long t1603 = __n1590;
  void* c1604 = ((void*)0);
  char* r1605 = std____new_allocator_char___allocate(base1602, t1603, c1604);
  __retval1591 = r1605;
  char* t1606 = __retval1591;
  return t1606;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1607, unsigned long v1608) {
bb1609:
  struct std__allocator_char_* __a1610;
  unsigned long __n1611;
  char* __retval1612;
  __a1610 = v1607;
  __n1611 = v1608;
  struct std__allocator_char_* t1613 = __a1610;
  unsigned long t1614 = __n1611;
  char* r1615 = std__allocator_char___allocate(t1613, t1614);
  __retval1612 = r1615;
  char* t1616 = __retval1612;
  return t1616;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1617, unsigned long v1618) {
bb1619:
  struct std__allocator_char_* __a1620;
  unsigned long __n1621;
  char* __retval1622;
  char* __p1623;
  __a1620 = v1617;
  __n1621 = v1618;
  struct std__allocator_char_* t1624 = __a1620;
  unsigned long t1625 = __n1621;
  char* r1626 = std__allocator_traits_std__allocator_char_____allocate(t1624, t1625);
  __p1623 = r1626;
  char* t1627 = __p1623;
  __retval1622 = t1627;
  char* t1628 = __retval1622;
  return t1628;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1629) {
bb1630:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1631;
  struct std__allocator_char_* __retval1632;
  this1631 = v1629;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1633 = this1631;
  struct std__allocator_char_* base1634 = (struct std__allocator_char_*)((char *)&(t1633->_M_dataplus) + 0);
  __retval1632 = base1634;
  struct std__allocator_char_* t1635 = __retval1632;
  return t1635;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1636, unsigned long* v1637, unsigned long v1638) {
bb1639:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1640;
  unsigned long* __capacity1641;
  unsigned long __old_capacity1642;
  char* __retval1643;
  this1640 = v1636;
  __capacity1641 = v1637;
  __old_capacity1642 = v1638;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1644 = this1640;
    unsigned long* t1645 = __capacity1641;
    unsigned long t1646 = *t1645;
    unsigned long r1647 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1644);
    _Bool c1648 = ((t1646 > r1647)) ? 1 : 0;
    if (c1648) {
      char* cast1649 = (char*)&(_str_30);
      std____throw_length_error(cast1649);
    }
    unsigned long* t1650 = __capacity1641;
    unsigned long t1651 = *t1650;
    unsigned long t1652 = __old_capacity1642;
    _Bool c1653 = ((t1651 > t1652)) ? 1 : 0;
    _Bool ternary1654;
    if (c1653) {
      unsigned long* t1655 = __capacity1641;
      unsigned long t1656 = *t1655;
      unsigned long c1657 = 2;
      unsigned long t1658 = __old_capacity1642;
      unsigned long b1659 = c1657 * t1658;
      _Bool c1660 = ((t1656 < b1659)) ? 1 : 0;
      ternary1654 = (_Bool)c1660;
    } else {
      _Bool c1661 = 0;
      ternary1654 = (_Bool)c1661;
    }
    if (ternary1654) {
      unsigned long c1662 = 2;
      unsigned long t1663 = __old_capacity1642;
      unsigned long b1664 = c1662 * t1663;
      unsigned long* t1665 = __capacity1641;
      *t1665 = b1664;
        unsigned long* t1666 = __capacity1641;
        unsigned long t1667 = *t1666;
        unsigned long r1668 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1644);
        _Bool c1669 = ((t1667 > r1668)) ? 1 : 0;
        if (c1669) {
          unsigned long r1670 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1644);
          unsigned long* t1671 = __capacity1641;
          *t1671 = r1670;
        }
    }
  struct std__allocator_char_* r1672 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1644);
  unsigned long* t1673 = __capacity1641;
  unsigned long t1674 = *t1673;
  unsigned long c1675 = 1;
  unsigned long b1676 = t1674 + c1675;
  char* r1677 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1672, b1676);
  __retval1643 = r1677;
  char* t1678 = __retval1643;
  return t1678;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1679, unsigned long v1680) {
bb1681:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1682;
  unsigned long __capacity1683;
  this1682 = v1679;
  __capacity1683 = v1680;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1684 = this1682;
  unsigned long t1685 = __capacity1683;
  t1684->field2._M_allocated_capacity = t1685;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1686:
  _Bool __retval1687;
    _Bool c1688 = 0;
    __retval1687 = c1688;
    _Bool t1689 = __retval1687;
    return t1689;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1690) {
bb1691:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1692;
  this1692 = v1690;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1693 = this1692;
    _Bool r1694 = std__is_constant_evaluated();
    if (r1694) {
        unsigned long __i1695;
        unsigned long c1696 = 0;
        __i1695 = c1696;
        while (1) {
          unsigned long t1698 = __i1695;
          unsigned long c1699 = 15;
          _Bool c1700 = ((t1698 <= c1699)) ? 1 : 0;
          if (!c1700) break;
          char c1701 = 0;
          unsigned long t1702 = __i1695;
          t1693->field2._M_local_buf[t1702] = c1701;
        for_step1697: ;
          unsigned long t1703 = __i1695;
          unsigned long u1704 = t1703 + 1;
          __i1695 = u1704;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1705, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1706) {
bb1707:
  struct _Guard* this1708;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1709;
  this1708 = v1705;
  __s1709 = v1706;
  struct _Guard* t1710 = this1708;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1711 = __s1709;
  t1710->_M_guarded = t1711;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1712, char* v1713) {
bb1714:
  char* __location1715;
  char* __args1716;
  char* __retval1717;
  void* __loc1718;
  __location1715 = v1712;
  __args1716 = v1713;
  char* t1719 = __location1715;
  void* cast1720 = (void*)t1719;
  __loc1718 = cast1720;
    void* t1721 = __loc1718;
    char* cast1722 = (char*)t1721;
    char* t1723 = __args1716;
    char t1724 = *t1723;
    *cast1722 = t1724;
    __retval1717 = cast1722;
    char* t1725 = __retval1717;
    return t1725;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign_2(char* v1726, char* v1727) {
bb1728:
  char* __c11729;
  char* __c21730;
  __c11729 = v1726;
  __c21730 = v1727;
    _Bool r1731 = std____is_constant_evaluated();
    if (r1731) {
      char* t1732 = __c11729;
      char* t1733 = __c21730;
      char* r1734 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1732, t1733);
    } else {
      char* t1735 = __c21730;
      char t1736 = *t1735;
      char* t1737 = __c11729;
      *t1737 = t1736;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1738, char* v1739, unsigned long v1740) {
bb1741:
  char* __s11742;
  char* __s21743;
  unsigned long __n1744;
  char* __retval1745;
  __s11742 = v1738;
  __s21743 = v1739;
  __n1744 = v1740;
    unsigned long t1746 = __n1744;
    unsigned long c1747 = 0;
    _Bool c1748 = ((t1746 == c1747)) ? 1 : 0;
    if (c1748) {
      char* t1749 = __s11742;
      __retval1745 = t1749;
      char* t1750 = __retval1745;
      return t1750;
    }
    _Bool r1751 = std____is_constant_evaluated();
    if (r1751) {
        unsigned long __i1752;
        unsigned long c1753 = 0;
        __i1752 = c1753;
        while (1) {
          unsigned long t1755 = __i1752;
          unsigned long t1756 = __n1744;
          _Bool c1757 = ((t1755 < t1756)) ? 1 : 0;
          if (!c1757) break;
          char* t1758 = __s11742;
          unsigned long t1759 = __i1752;
          char* ptr1760 = &(t1758)[t1759];
          unsigned long t1761 = __i1752;
          char* t1762 = __s21743;
          char* ptr1763 = &(t1762)[t1761];
          char* r1764 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1760, ptr1763);
        for_step1754: ;
          unsigned long t1765 = __i1752;
          unsigned long u1766 = t1765 + 1;
          __i1752 = u1766;
        }
      char* t1767 = __s11742;
      __retval1745 = t1767;
      char* t1768 = __retval1745;
      return t1768;
    }
  char* t1769 = __s11742;
  void* cast1770 = (void*)t1769;
  char* t1771 = __s21743;
  void* cast1772 = (void*)t1771;
  unsigned long t1773 = __n1744;
  unsigned long c1774 = 1;
  unsigned long b1775 = t1773 * c1774;
  void* r1776 = memcpy(cast1770, cast1772, b1775);
  char* t1777 = __s11742;
  __retval1745 = t1777;
  char* t1778 = __retval1745;
  return t1778;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1779, char* v1780, unsigned long v1781) {
bb1782:
  char* __s11783;
  char* __s21784;
  unsigned long __n1785;
  char* __retval1786;
  __s11783 = v1779;
  __s21784 = v1780;
  __n1785 = v1781;
    unsigned long t1787 = __n1785;
    unsigned long c1788 = 0;
    _Bool c1789 = ((t1787 == c1788)) ? 1 : 0;
    if (c1789) {
      char* t1790 = __s11783;
      __retval1786 = t1790;
      char* t1791 = __retval1786;
      return t1791;
    }
    _Bool r1792 = std____is_constant_evaluated();
    if (r1792) {
      char* t1793 = __s11783;
      char* t1794 = __s21784;
      unsigned long t1795 = __n1785;
      char* r1796 = __gnu_cxx__char_traits_char___copy(t1793, t1794, t1795);
      __retval1786 = r1796;
      char* t1797 = __retval1786;
      return t1797;
    }
  char* t1798 = __s11783;
  void* cast1799 = (void*)t1798;
  char* t1800 = __s21784;
  void* cast1801 = (void*)t1800;
  unsigned long t1802 = __n1785;
  void* r1803 = memcpy(cast1799, cast1801, t1802);
  char* cast1804 = (char*)r1803;
  __retval1786 = cast1804;
  char* t1805 = __retval1786;
  return t1805;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1806, char* v1807, unsigned long v1808) {
bb1809:
  char* __d1810;
  char* __s1811;
  unsigned long __n1812;
  __d1810 = v1806;
  __s1811 = v1807;
  __n1812 = v1808;
    unsigned long t1813 = __n1812;
    unsigned long c1814 = 1;
    _Bool c1815 = ((t1813 == c1814)) ? 1 : 0;
    if (c1815) {
      char* t1816 = __d1810;
      char* t1817 = __s1811;
      std__char_traits_char___assign_2(t1816, t1817);
    } else {
      char* t1818 = __d1810;
      char* t1819 = __s1811;
      unsigned long t1820 = __n1812;
      char* r1821 = std__char_traits_char___copy(t1818, t1819, t1820);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1822) {
bb1823:
  char* __it1824;
  char* __retval1825;
  __it1824 = v1822;
  char* t1826 = __it1824;
  __retval1825 = t1826;
  char* t1827 = __retval1825;
  return t1827;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1828, char* v1829, char* v1830) {
bb1831:
  char* __p1832;
  char* __k11833;
  char* __k21834;
  __p1832 = v1828;
  __k11833 = v1829;
  __k21834 = v1830;
    char* t1835 = __p1832;
    char* t1836 = __k11833;
    char* r1837 = char_const__std____niter_base_char_const__(t1836);
    char* t1838 = __k21834;
    char* t1839 = __k11833;
    long diff1840 = t1838 - t1839;
    unsigned long cast1841 = (unsigned long)diff1840;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1835, r1837, cast1841);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1842) {
bb1843:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1844;
  char* __retval1845;
  this1844 = v1842;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1846 = this1844;
  char* t1847 = t1846->_M_dataplus._M_p;
  __retval1845 = t1847;
  char* t1848 = __retval1845;
  return t1848;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1849, unsigned long v1850) {
bb1851:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1852;
  unsigned long __length1853;
  this1852 = v1849;
  __length1853 = v1850;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1854 = this1852;
  unsigned long t1855 = __length1853;
  t1854->_M_string_length = t1855;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1856, unsigned long v1857) {
bb1858:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1859;
  unsigned long __n1860;
  char ref_tmp01861;
  this1859 = v1856;
  __n1860 = v1857;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1862 = this1859;
  unsigned long t1863 = __n1860;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1862, t1863);
  unsigned long t1864 = __n1860;
  char* r1865 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1862);
  char* ptr1866 = &(r1865)[t1864];
  char c1867 = 0;
  ref_tmp01861 = c1867;
  std__char_traits_char___assign_2(ptr1866, &ref_tmp01861);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1868) {
bb1869:
  struct _Guard* this1870;
  this1870 = v1868;
  struct _Guard* t1871 = this1870;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1872 = t1871->_M_guarded;
    _Bool cast1873 = (_Bool)t1872;
    if (cast1873) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1874 = t1871->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1874);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1875, char* v1876, char* v1877, struct std__forward_iterator_tag v1878) {
bb1879:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1880;
  char* __beg1881;
  char* __end1882;
  struct std__forward_iterator_tag unnamed1883;
  unsigned long __dnew1884;
  struct _Guard __guard1885;
  this1880 = v1875;
  __beg1881 = v1876;
  __end1882 = v1877;
  unnamed1883 = v1878;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1886 = this1880;
  char* t1887 = __beg1881;
  char* t1888 = __end1882;
  long r1889 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1887, t1888);
  unsigned long cast1890 = (unsigned long)r1889;
  __dnew1884 = cast1890;
    unsigned long t1891 = __dnew1884;
    unsigned long c1892 = 15;
    _Bool c1893 = ((t1891 > c1892)) ? 1 : 0;
    if (c1893) {
      unsigned long c1894 = 0;
      char* r1895 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1886, &__dnew1884, c1894);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1886, r1895);
      unsigned long t1896 = __dnew1884;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1886, t1896);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1886);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1885, t1886);
    char* r1897 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1886);
    char* t1898 = __beg1881;
    char* t1899 = __end1882;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1897, t1898, t1899);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1900 = ((void*)0);
    __guard1885._M_guarded = c1900;
    unsigned long t1901 = __dnew1884;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1886, t1901);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1885);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1902) {
bb1903:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1904;
  this1904 = v1902;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1905 = this1904;
  {
    struct std__allocator_char_* base1906 = (struct std__allocator_char_*)((char *)t1905 + 0);
    std__allocator_char____allocator(base1906);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1907, struct std____new_allocator_char_* v1908) {
bb1909:
  struct std____new_allocator_char_* this1910;
  struct std____new_allocator_char_* unnamed1911;
  this1910 = v1907;
  unnamed1911 = v1908;
  struct std____new_allocator_char_* t1912 = this1910;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1913) {
bb1914:
  char* __r1915;
  char* __retval1916;
  __r1915 = v1913;
  char* t1917 = __r1915;
  __retval1916 = t1917;
  char* t1918 = __retval1916;
  return t1918;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1919) {
bb1920:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1921;
  char* __retval1922;
  this1921 = v1919;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1923 = this1921;
  char* cast1924 = (char*)&(t1923->field2._M_local_buf);
  char* r1925 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1924);
  __retval1922 = r1925;
  char* t1926 = __retval1922;
  return t1926;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1927) {
bb1928:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1929;
  _Bool __retval1930;
  this1929 = v1927;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1931 = this1929;
    char* r1932 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1931);
    char* r1933 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1931);
    _Bool c1934 = ((r1932 == r1933)) ? 1 : 0;
    if (c1934) {
        unsigned long t1935 = t1931->_M_string_length;
        unsigned long c1936 = 15;
        _Bool c1937 = ((t1935 > c1936)) ? 1 : 0;
        if (c1937) {
          __builtin_unreachable();
        }
      _Bool c1938 = 1;
      __retval1930 = c1938;
      _Bool t1939 = __retval1930;
      return t1939;
    }
  _Bool c1940 = 0;
  __retval1930 = c1940;
  _Bool t1941 = __retval1930;
  return t1941;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1942, char* v1943, unsigned long v1944) {
bb1945:
  struct std____new_allocator_char_* this1946;
  char* __p1947;
  unsigned long __n1948;
  this1946 = v1942;
  __p1947 = v1943;
  __n1948 = v1944;
  struct std____new_allocator_char_* t1949 = this1946;
    unsigned long c1950 = 1;
    unsigned long c1951 = 16;
    _Bool c1952 = ((c1950 > c1951)) ? 1 : 0;
    if (c1952) {
      char* t1953 = __p1947;
      void* cast1954 = (void*)t1953;
      unsigned long t1955 = __n1948;
      unsigned long c1956 = 1;
      unsigned long b1957 = t1955 * c1956;
      unsigned long c1958 = 1;
      operator_delete_3(cast1954, b1957, c1958);
      return;
    }
  char* t1959 = __p1947;
  void* cast1960 = (void*)t1959;
  unsigned long t1961 = __n1948;
  unsigned long c1962 = 1;
  unsigned long b1963 = t1961 * c1962;
  operator_delete_2(cast1960, b1963);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1964, char* v1965, unsigned long v1966) {
bb1967:
  struct std__allocator_char_* this1968;
  char* __p1969;
  unsigned long __n1970;
  this1968 = v1964;
  __p1969 = v1965;
  __n1970 = v1966;
  struct std__allocator_char_* t1971 = this1968;
    _Bool r1972 = std____is_constant_evaluated();
    if (r1972) {
      char* t1973 = __p1969;
      void* cast1974 = (void*)t1973;
      operator_delete(cast1974);
      return;
    }
  struct std____new_allocator_char_* base1975 = (struct std____new_allocator_char_*)((char *)t1971 + 0);
  char* t1976 = __p1969;
  unsigned long t1977 = __n1970;
  std____new_allocator_char___deallocate(base1975, t1976, t1977);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1978, char* v1979, unsigned long v1980) {
bb1981:
  struct std__allocator_char_* __a1982;
  char* __p1983;
  unsigned long __n1984;
  __a1982 = v1978;
  __p1983 = v1979;
  __n1984 = v1980;
  struct std__allocator_char_* t1985 = __a1982;
  char* t1986 = __p1983;
  unsigned long t1987 = __n1984;
  std__allocator_char___deallocate(t1985, t1986, t1987);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1988, unsigned long v1989) {
bb1990:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1991;
  unsigned long __size1992;
  this1991 = v1988;
  __size1992 = v1989;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1993 = this1991;
  struct std__allocator_char_* r1994 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1993);
  char* r1995 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1993);
  unsigned long t1996 = __size1992;
  unsigned long c1997 = 1;
  unsigned long b1998 = t1996 + c1997;
  std__allocator_traits_std__allocator_char_____deallocate(r1994, r1995, b1998);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1999) {
bb2000:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2001;
  this2001 = v1999;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2002 = this2001;
    _Bool r2003 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t2002);
    _Bool u2004 = !r2003;
    if (u2004) {
      unsigned long t2005 = t2002->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t2002, t2005);
    }
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v2006, struct std__allocator_char_* v2007) {
bb2008:
  struct std__allocator_char_* this2009;
  struct std__allocator_char_* __a2010;
  this2009 = v2006;
  __a2010 = v2007;
  struct std__allocator_char_* t2011 = this2009;
  struct std____new_allocator_char_* base2012 = (struct std____new_allocator_char_*)((char *)t2011 + 0);
  struct std__allocator_char_* t2013 = __a2010;
  struct std____new_allocator_char_* base2014 = (struct std____new_allocator_char_*)((char *)t2013 + 0);
  std____new_allocator_char_____new_allocator(base2012, base2014);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE37select_on_container_copy_constructionERKS0_
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* v2015) {
bb2016:
  struct std__allocator_char_* __rhs2017;
  struct std__allocator_char_ __retval2018;
  __rhs2017 = v2015;
  struct std__allocator_char_* t2019 = __rhs2017;
  std__allocator_char___allocator(&__retval2018, t2019);
  struct std__allocator_char_ t2020 = __retval2018;
  return t2020;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE17_S_select_on_copyERKS1_
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* v2021) {
bb2022:
  struct std__allocator_char_* __a2023;
  struct std__allocator_char_ __retval2024;
  __a2023 = v2021;
  struct std__allocator_char_* t2025 = __a2023;
  struct std__allocator_char_ r2026 = std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(t2025);
  __retval2024 = r2026;
  struct std__allocator_char_ t2027 = __retval2024;
  return t2027;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v2028, char* v2029, struct std__allocator_char_* v2030) {
bb2031:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this2032;
  char* __dat2033;
  struct std__allocator_char_* __a2034;
  this2032 = v2028;
  __dat2033 = v2029;
  __a2034 = v2030;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t2035 = this2032;
  struct std__allocator_char_* base2036 = (struct std__allocator_char_*)((char *)t2035 + 0);
  struct std__allocator_char_* t2037 = __a2034;
  std__allocator_char___allocator(base2036, t2037);
    char* t2038 = __dat2033;
    t2035->_M_p = t2038;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructILb1EEEvPKcm
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_true_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2039, char* v2040, unsigned long v2041) {
bb2042:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2043;
  char* __str2044;
  unsigned long __n2045;
  this2043 = v2039;
  __str2044 = v2040;
  __n2045 = v2041;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2046 = this2043;
    unsigned long t2047 = __n2045;
    unsigned long c2048 = 15;
    _Bool c2049 = ((t2047 > c2048)) ? 1 : 0;
    if (c2049) {
      unsigned long c2050 = 0;
      char* r2051 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t2046, &__n2045, c2050);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t2046, r2051);
      unsigned long t2052 = __n2045;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t2046, t2052);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t2046);
    }
    unsigned long t2053 = __n2045;
    _Bool cast2054 = (_Bool)t2053;
    _Bool ternary2055;
    if (cast2054) {
      _Bool c2056 = 1;
      ternary2055 = (_Bool)c2056;
    } else {
      _Bool c2057 = 1;
      ternary2055 = (_Bool)c2057;
    }
    if (ternary2055) {
      char* r2058 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t2046);
      char* t2059 = __str2044;
      unsigned long t2060 = __n2045;
      _Bool c2061 = 1;
      unsigned long cast2062 = (unsigned long)c2061;
      unsigned long b2063 = t2060 + cast2062;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r2058, t2059, b2063);
    }
  unsigned long t2064 = __n2045;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t2046, t2064);
    _Bool c2065 = 0;
    if (c2065) {
      char ref_tmp02066;
      unsigned long t2067 = __n2045;
      char* r2068 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t2046);
      char* ptr2069 = &(r2068)[t2067];
      char c2070 = 0;
      ref_tmp02066 = c2070;
      std__char_traits_char___assign_2(ptr2069, &ref_tmp02066);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2071) {
bb2072:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2073;
  unsigned long __retval2074;
  unsigned long __sz2075;
  this2073 = v2071;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2076 = this2073;
  unsigned long t2077 = t2076->_M_string_length;
  __sz2075 = t2077;
    unsigned long t2078 = __sz2075;
    unsigned long r2079 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t2076);
    _Bool c2080 = ((t2078 > r2079)) ? 1 : 0;
    if (c2080) {
      __builtin_unreachable();
    }
  unsigned long t2081 = __sz2075;
  __retval2074 = t2081;
  unsigned long t2082 = __retval2074;
  return t2082;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2083) {
bb2084:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2085;
  unsigned long __retval2086;
  this2085 = v2083;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2087 = this2085;
  unsigned long r2088 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t2087);
  __retval2086 = r2088;
  unsigned long t2089 = __retval2086;
  return t2089;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE4baseEv
char** __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v2090) {
bb2091:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this2092;
  char** __retval2093;
  this2092 = v2090;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t2094 = this2092;
  __retval2093 = &t2094->_M_current;
  char** t2095 = __retval2093;
  return t2095;
}

