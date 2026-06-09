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

char _str[15] = "to be question";
char _str_1[5] = "the ";
char _str_2[13] = "or not to be";
char _str_3[19] = "to be the question";
char _str_4[28] = "str == \"to be the question\"";
char _str_5[114] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_insert_final/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_6[23] = "to be not the question";
char _str_7[32] = "str == \"to be not the question\"";
char _str_8[13] = "that is cool";
char _str_9[31] = "to be not that is the question";
char _str_10[40] = "str == \"to be not that is the question\"";
char _str_11[7] = "to be ";
char _str_12[37] = "to be not to be that is the question";
char _str_13[46] = "str == \"to be not to be that is the question\"";
char _str_14[38] = "to be not to be: that is the question";
char _str_15[47] = "str == \"to be not to be: that is the question\"";
char _str_16[39] = "to be, not to be: that is the question";
char _str_17[48] = "str == \"to be, not to be: that is the question\"";
char _str_18[42] = "to be, not to be: that is the question...";
char _str_19[51] = "str == \"to be, not to be: that is the question...\"";
char _str_20[45] = "to be, or not to be: that is the question...";
char _str_21[54] = "str == \"to be, or not to be: that is the question...\"";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_22[50] = "basic_string: construction from null is not valid";
char _str_23[24] = "basic_string::_M_create";
char _str_24[22] = "basic_string::replace";
char _str_25[25] = "basic_string::_M_replace";
char _str_26[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_27[21] = "basic_string::insert";
char _str_28[29] = "basic_string::_M_replace_aux";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator_2(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);
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
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_5(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p2);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_6(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p2, unsigned long p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_4(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2, unsigned long p3);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___assign(char* p0, unsigned long p1, char p2);
extern void* memset(void* p0, int p1, unsigned long p2);
char* std__char_traits_char___assign(char* p0, unsigned long p1, char p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(char* p0, unsigned long p1, char p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, unsigned long p3, char p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_7(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char p3);
char** __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);
char** __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);
long decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, char** p1);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1, char p2);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, long p1);
void _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator_(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
long __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p2, unsigned long p3, char p4);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1, unsigned long p2, char p3);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
long __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p2, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p3, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p4);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______void_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p2, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p3);
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

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v37, unsigned long v38, unsigned long v39, char* v40) {
bb41:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this42;
  unsigned long __n143;
  unsigned long __n244;
  char* __s45;
  this42 = v37;
  __n143 = v38;
  __n244 = v39;
  __s45 = v40;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t46 = this42;
    unsigned long r47 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t46);
    unsigned long r48 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t46);
    unsigned long t49 = __n143;
    unsigned long b50 = r48 - t49;
    unsigned long b51 = r47 - b50;
    unsigned long t52 = __n244;
    _Bool c53 = ((b51 < t52)) ? 1 : 0;
    if (c53) {
      char* t54 = __s45;
      std____throw_length_error(t54);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v55) {
bb56:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this57;
  unsigned long __retval58;
  unsigned long __sz59;
  this57 = v55;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t60 = this57;
  _Bool r61 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t60);
  unsigned long ternary62;
  if (r61) {
    unsigned long c63 = 15;
    ternary62 = (unsigned long)c63;
  } else {
    unsigned long t64 = t60->field2._M_allocated_capacity;
    ternary62 = (unsigned long)t64;
  }
  __sz59 = ternary62;
    unsigned long t65 = __sz59;
    unsigned long c66 = 15;
    _Bool c67 = ((t65 < c66)) ? 1 : 0;
    _Bool ternary68;
    if (c67) {
      _Bool c69 = 1;
      ternary68 = (_Bool)c69;
    } else {
      unsigned long t70 = __sz59;
      unsigned long r71 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t60);
      _Bool c72 = ((t70 > r71)) ? 1 : 0;
      ternary68 = (_Bool)c72;
    }
    if (ternary68) {
      __builtin_unreachable();
    }
  unsigned long t73 = __sz59;
  __retval58 = t73;
  unsigned long t74 = __retval58;
  return t74;
}

// function: _ZNKSt4lessIPKcEclES1_S1_
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* v75, char* v76, char* v77) {
bb78:
  struct std__less_const_char___* this79;
  char* __x80;
  char* __y81;
  _Bool __retval82;
  this79 = v75;
  __x80 = v76;
  __y81 = v77;
  struct std__less_const_char___* t83 = this79;
    _Bool r84 = std____is_constant_evaluated();
    if (r84) {
      char* t85 = __x80;
      char* t86 = __y81;
      _Bool c87 = ((t85 < t86)) ? 1 : 0;
      __retval82 = c87;
      _Bool t88 = __retval82;
      return t88;
    }
  char* t89 = __x80;
  unsigned long cast90 = (unsigned long)t89;
  char* t91 = __y81;
  unsigned long cast92 = (unsigned long)t91;
  _Bool c93 = ((cast90 < cast92)) ? 1 : 0;
  __retval82 = c93;
  _Bool t94 = __retval82;
  return t94;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_disjunctEPKc
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v95, char* v96) {
bb97:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this98;
  char* __s99;
  _Bool __retval100;
  struct std__less_const_char___ ref_tmp0101;
  this98 = v95;
  __s99 = v96;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t102 = this98;
  char* t103 = __s99;
  char* r104 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t102);
  _Bool r105 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp0101, t103, r104);
  _Bool ternary106;
  if (r105) {
    _Bool c107 = 1;
    ternary106 = (_Bool)c107;
  } else {
    struct std__less_const_char___ ref_tmp1108;
    char* r109 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t102);
    unsigned long r110 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t102);
    char* ptr111 = &(r109)[r110];
    char* t112 = __s99;
    _Bool r113 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp1108, ptr111, t112);
    ternary106 = (_Bool)r113;
  }
  __retval100 = ternary106;
  _Bool t114 = __retval100;
  return t114;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign_2(char* v115, char* v116) {
bb117:
  char* __c1118;
  char* __c2119;
  __c1118 = v115;
  __c2119 = v116;
    _Bool r120 = std____is_constant_evaluated();
    if (r120) {
      char* t121 = __c1118;
      char* t122 = __c2119;
      char* r123 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t121, t122);
    } else {
      char* t124 = __c2119;
      char t125 = *t124;
      char* t126 = __c1118;
      *t126 = t125;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v127, char* v128, unsigned long v129) {
bb130:
  char* __s1131;
  char* __s2132;
  unsigned long __n133;
  char* __retval134;
  __s1131 = v127;
  __s2132 = v128;
  __n133 = v129;
    unsigned long t135 = __n133;
    unsigned long c136 = 0;
    _Bool c137 = ((t135 == c136)) ? 1 : 0;
    if (c137) {
      char* t138 = __s1131;
      __retval134 = t138;
      char* t139 = __retval134;
      return t139;
    }
    _Bool r140 = std____is_constant_evaluated();
    if (r140) {
        char* t141 = __s2132;
        char* t142 = __s1131;
        _Bool c143 = ((t141 < t142)) ? 1 : 0;
        _Bool isconst144 = 0;
        _Bool ternary145;
        if (isconst144) {
          char* t146 = __s1131;
          char* t147 = __s2132;
          _Bool c148 = ((t146 > t147)) ? 1 : 0;
          ternary145 = (_Bool)c148;
        } else {
          _Bool c149 = 0;
          ternary145 = (_Bool)c149;
        }
        _Bool ternary150;
        if (ternary145) {
          char* t151 = __s1131;
          char* t152 = __s2132;
          unsigned long t153 = __n133;
          char* ptr154 = &(t152)[t153];
          _Bool c155 = ((t151 < ptr154)) ? 1 : 0;
          ternary150 = (_Bool)c155;
        } else {
          _Bool c156 = 0;
          ternary150 = (_Bool)c156;
        }
        if (ternary150) {
            do {
                unsigned long t157 = __n133;
                unsigned long u158 = t157 - 1;
                __n133 = u158;
                unsigned long t159 = __n133;
                char* t160 = __s1131;
                char* ptr161 = &(t160)[t159];
                unsigned long t162 = __n133;
                char* t163 = __s2132;
                char* ptr164 = &(t163)[t162];
                __gnu_cxx__char_traits_char___assign_2(ptr161, ptr164);
              unsigned long t165 = __n133;
              unsigned long c166 = 0;
              _Bool c167 = ((t165 > c166)) ? 1 : 0;
              if (!c167) break;
            } while (1);
        } else {
          char* t168 = __s1131;
          char* t169 = __s2132;
          unsigned long t170 = __n133;
          char* r171 = __gnu_cxx__char_traits_char___copy(t168, t169, t170);
        }
      char* t172 = __s1131;
      __retval134 = t172;
      char* t173 = __retval134;
      return t173;
    }
  char* t174 = __s1131;
  void* cast175 = (void*)t174;
  char* t176 = __s2132;
  void* cast177 = (void*)t176;
  unsigned long t178 = __n133;
  unsigned long c179 = 1;
  unsigned long b180 = t178 * c179;
  void* r181 = memmove(cast175, cast177, b180);
  char* t182 = __s1131;
  __retval134 = t182;
  char* t183 = __retval134;
  return t183;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v184, char* v185, unsigned long v186) {
bb187:
  char* __s1188;
  char* __s2189;
  unsigned long __n190;
  char* __retval191;
  __s1188 = v184;
  __s2189 = v185;
  __n190 = v186;
    unsigned long t192 = __n190;
    unsigned long c193 = 0;
    _Bool c194 = ((t192 == c193)) ? 1 : 0;
    if (c194) {
      char* t195 = __s1188;
      __retval191 = t195;
      char* t196 = __retval191;
      return t196;
    }
    _Bool r197 = std____is_constant_evaluated();
    if (r197) {
      char* t198 = __s1188;
      char* t199 = __s2189;
      unsigned long t200 = __n190;
      char* r201 = __gnu_cxx__char_traits_char___move(t198, t199, t200);
      __retval191 = r201;
      char* t202 = __retval191;
      return t202;
    }
  char* t203 = __s1188;
  void* cast204 = (void*)t203;
  char* t205 = __s2189;
  void* cast206 = (void*)t205;
  unsigned long t207 = __n190;
  void* r208 = memmove(cast204, cast206, t207);
  char* cast209 = (char*)r208;
  __retval191 = cast209;
  char* t210 = __retval191;
  return t210;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v211, char* v212, unsigned long v213) {
bb214:
  char* __d215;
  char* __s216;
  unsigned long __n217;
  __d215 = v211;
  __s216 = v212;
  __n217 = v213;
    unsigned long t218 = __n217;
    unsigned long c219 = 1;
    _Bool c220 = ((t218 == c219)) ? 1 : 0;
    if (c220) {
      char* t221 = __d215;
      char* t222 = __s216;
      std__char_traits_char___assign_2(t221, t222);
    } else {
      char* t223 = __d215;
      char* t224 = __s216;
      unsigned long t225 = __n217;
      char* r226 = std__char_traits_char___move(t223, t224, t225);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_replace_coldEPcmPKcmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v227, char* v228, unsigned long v229, char* v230, unsigned long v231, unsigned long v232) {
bb233:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this234;
  char* __p235;
  unsigned long __len1236;
  char* __s237;
  unsigned long __len2238;
  unsigned long __how_much239;
  this234 = v227;
  __p235 = v228;
  __len1236 = v229;
  __s237 = v230;
  __len2238 = v231;
  __how_much239 = v232;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t240 = this234;
    unsigned long t241 = __len2238;
    _Bool cast242 = (_Bool)t241;
    _Bool ternary243;
    if (cast242) {
      unsigned long t244 = __len2238;
      unsigned long t245 = __len1236;
      _Bool c246 = ((t244 <= t245)) ? 1 : 0;
      ternary243 = (_Bool)c246;
    } else {
      _Bool c247 = 0;
      ternary243 = (_Bool)c247;
    }
    if (ternary243) {
      char* t248 = __p235;
      char* t249 = __s237;
      unsigned long t250 = __len2238;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t248, t249, t250);
    }
    unsigned long t251 = __how_much239;
    _Bool cast252 = (_Bool)t251;
    _Bool ternary253;
    if (cast252) {
      unsigned long t254 = __len1236;
      unsigned long t255 = __len2238;
      _Bool c256 = ((t254 != t255)) ? 1 : 0;
      ternary253 = (_Bool)c256;
    } else {
      _Bool c257 = 0;
      ternary253 = (_Bool)c257;
    }
    if (ternary253) {
      char* t258 = __p235;
      unsigned long t259 = __len2238;
      char* ptr260 = &(t258)[t259];
      char* t261 = __p235;
      unsigned long t262 = __len1236;
      char* ptr263 = &(t261)[t262];
      unsigned long t264 = __how_much239;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr260, ptr263, t264);
    }
    unsigned long t265 = __len2238;
    unsigned long t266 = __len1236;
    _Bool c267 = ((t265 > t266)) ? 1 : 0;
    if (c267) {
        char* t268 = __s237;
        unsigned long t269 = __len2238;
        char* ptr270 = &(t268)[t269];
        char* t271 = __p235;
        unsigned long t272 = __len1236;
        char* ptr273 = &(t271)[t272];
        _Bool c274 = ((ptr270 <= ptr273)) ? 1 : 0;
        if (c274) {
          char* t275 = __p235;
          char* t276 = __s237;
          unsigned long t277 = __len2238;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t275, t276, t277);
        } else {
            char* t278 = __s237;
            char* t279 = __p235;
            unsigned long t280 = __len1236;
            char* ptr281 = &(t279)[t280];
            _Bool c282 = ((t278 >= ptr281)) ? 1 : 0;
            if (c282) {
              unsigned long __poff283;
              char* t284 = __s237;
              char* t285 = __p235;
              long diff286 = t284 - t285;
              unsigned long cast287 = (unsigned long)diff286;
              unsigned long t288 = __len2238;
              unsigned long t289 = __len1236;
              unsigned long b290 = t288 - t289;
              unsigned long b291 = cast287 + b290;
              __poff283 = b291;
              char* t292 = __p235;
              char* t293 = __p235;
              unsigned long t294 = __poff283;
              char* ptr295 = &(t293)[t294];
              unsigned long t296 = __len2238;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t292, ptr295, t296);
            } else {
              unsigned long __nleft297;
              char* t298 = __p235;
              unsigned long t299 = __len1236;
              char* ptr300 = &(t298)[t299];
              char* t301 = __s237;
              long diff302 = ptr300 - t301;
              unsigned long cast303 = (unsigned long)diff302;
              __nleft297 = cast303;
              char* t304 = __p235;
              char* t305 = __s237;
              unsigned long t306 = __nleft297;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t304, t305, t306);
              char* t307 = __p235;
              unsigned long t308 = __nleft297;
              char* ptr309 = &(t307)[t308];
              char* t310 = __p235;
              unsigned long t311 = __len2238;
              char* ptr312 = &(t310)[t311];
              unsigned long t313 = __len2238;
              unsigned long t314 = __nleft297;
              unsigned long b315 = t313 - t314;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr309, ptr312, b315);
            }
        }
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v316) {
bb317:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this318;
  unsigned long __retval319;
  this318 = v316;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t320 = this318;
  unsigned long r321 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t320);
  __retval319 = r321;
  unsigned long t322 = __retval319;
  return t322;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v323, unsigned long v324, unsigned long v325, char* v326, unsigned long v327) {
bb328:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this329;
  unsigned long __pos330;
  unsigned long __len1331;
  char* __s332;
  unsigned long __len2333;
  unsigned long __how_much334;
  unsigned long __new_capacity335;
  char* __r336;
  this329 = v323;
  __pos330 = v324;
  __len1331 = v325;
  __s332 = v326;
  __len2333 = v327;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t337 = this329;
  unsigned long r338 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t337);
  unsigned long t339 = __pos330;
  unsigned long b340 = r338 - t339;
  unsigned long t341 = __len1331;
  unsigned long b342 = b340 - t341;
  __how_much334 = b342;
  unsigned long r343 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t337);
  unsigned long t344 = __len2333;
  unsigned long b345 = r343 + t344;
  unsigned long t346 = __len1331;
  unsigned long b347 = b345 - t346;
  __new_capacity335 = b347;
  unsigned long r348 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t337);
  char* r349 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t337, &__new_capacity335, r348);
  __r336 = r349;
    unsigned long t350 = __pos330;
    _Bool cast351 = (_Bool)t350;
    if (cast351) {
      char* t352 = __r336;
      char* r353 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t337);
      unsigned long t354 = __pos330;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t352, r353, t354);
    }
    char* t355 = __s332;
    _Bool cast356 = (_Bool)t355;
    _Bool ternary357;
    if (cast356) {
      unsigned long t358 = __len2333;
      _Bool cast359 = (_Bool)t358;
      ternary357 = (_Bool)cast359;
    } else {
      _Bool c360 = 0;
      ternary357 = (_Bool)c360;
    }
    if (ternary357) {
      char* t361 = __r336;
      unsigned long t362 = __pos330;
      char* ptr363 = &(t361)[t362];
      char* t364 = __s332;
      unsigned long t365 = __len2333;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr363, t364, t365);
    }
    unsigned long t366 = __how_much334;
    _Bool cast367 = (_Bool)t366;
    if (cast367) {
      char* t368 = __r336;
      unsigned long t369 = __pos330;
      char* ptr370 = &(t368)[t369];
      unsigned long t371 = __len2333;
      char* ptr372 = &(ptr370)[t371];
      char* r373 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t337);
      unsigned long t374 = __pos330;
      char* ptr375 = &(r373)[t374];
      unsigned long t376 = __len1331;
      char* ptr377 = &(ptr375)[t376];
      unsigned long t378 = __how_much334;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr372, ptr377, t378);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t337);
  char* t379 = __r336;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t337, t379);
  unsigned long t380 = __new_capacity335;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t337, t380);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v381, unsigned long v382, unsigned long v383, char* v384, unsigned long v385) {
bb386:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this387;
  unsigned long __pos388;
  unsigned long __len1389;
  char* __s390;
  unsigned long __len2391;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval392;
  unsigned long __old_size393;
  unsigned long __new_size394;
  this387 = v381;
  __pos388 = v382;
  __len1389 = v383;
  __s390 = v384;
  __len2391 = v385;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t395 = this387;
  unsigned long t396 = __len1389;
  unsigned long t397 = __len2391;
  char* cast398 = (char*)&(_str_25);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t395, t396, t397, cast398);
  unsigned long r399 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t395);
  __old_size393 = r399;
  unsigned long t400 = __old_size393;
  unsigned long t401 = __len2391;
  unsigned long b402 = t400 + t401;
  unsigned long t403 = __len1389;
  unsigned long b404 = b402 - t403;
  __new_size394 = b404;
    unsigned long t405 = __new_size394;
    unsigned long r406 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t395);
    _Bool c407 = ((t405 <= r406)) ? 1 : 0;
    if (c407) {
      char* __p408;
      unsigned long __how_much409;
      char* r410 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t395);
      unsigned long t411 = __pos388;
      char* ptr412 = &(r410)[t411];
      __p408 = ptr412;
      unsigned long t413 = __old_size393;
      unsigned long t414 = __pos388;
      unsigned long b415 = t413 - t414;
      unsigned long t416 = __len1389;
      unsigned long b417 = b415 - t416;
      __how_much409 = b417;
        _Bool r418 = std__is_constant_evaluated();
        if (r418) {
          char* __newp419;
          struct std__allocator_char_* r420 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t395);
          unsigned long t421 = __new_size394;
          char* r422 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r420, t421);
          __newp419 = r422;
          char* t423 = __newp419;
          char* r424 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t395);
          unsigned long t425 = __pos388;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t423, r424, t425);
          char* t426 = __newp419;
          unsigned long t427 = __pos388;
          char* ptr428 = &(t426)[t427];
          char* t429 = __s390;
          unsigned long t430 = __len2391;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr428, t429, t430);
          char* t431 = __newp419;
          unsigned long t432 = __pos388;
          char* ptr433 = &(t431)[t432];
          unsigned long t434 = __len2391;
          char* ptr435 = &(ptr433)[t434];
          char* t436 = __p408;
          unsigned long t437 = __len1389;
          char* ptr438 = &(t436)[t437];
          unsigned long t439 = __how_much409;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr435, ptr438, t439);
          char* r440 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t395);
          char* t441 = __newp419;
          unsigned long t442 = __new_size394;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r440, t441, t442);
          struct std__allocator_char_* r443 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t395);
          char* t444 = __newp419;
          unsigned long t445 = __new_size394;
          std__allocator_char___deallocate(r443, t444, t445);
        } else {
            char* t446 = __s390;
            _Bool r447 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(t395, t446);
            if (r447) {
                unsigned long t448 = __how_much409;
                _Bool cast449 = (_Bool)t448;
                _Bool ternary450;
                if (cast449) {
                  unsigned long t451 = __len1389;
                  unsigned long t452 = __len2391;
                  _Bool c453 = ((t451 != t452)) ? 1 : 0;
                  ternary450 = (_Bool)c453;
                } else {
                  _Bool c454 = 0;
                  ternary450 = (_Bool)c454;
                }
                if (ternary450) {
                  char* t455 = __p408;
                  unsigned long t456 = __len2391;
                  char* ptr457 = &(t455)[t456];
                  char* t458 = __p408;
                  unsigned long t459 = __len1389;
                  char* ptr460 = &(t458)[t459];
                  unsigned long t461 = __how_much409;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr457, ptr460, t461);
                }
                unsigned long t462 = __len2391;
                _Bool cast463 = (_Bool)t462;
                if (cast463) {
                  char* t464 = __p408;
                  char* t465 = __s390;
                  unsigned long t466 = __len2391;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t464, t465, t466);
                }
            } else {
              char* t467 = __p408;
              unsigned long t468 = __len1389;
              char* t469 = __s390;
              unsigned long t470 = __len2391;
              unsigned long t471 = __how_much409;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(t395, t467, t468, t469, t470, t471);
            }
        }
    } else {
      unsigned long t472 = __pos388;
      unsigned long t473 = __len1389;
      char* t474 = __s390;
      unsigned long t475 = __len2391;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t395, t472, t473, t474, t475);
    }
  unsigned long t476 = __new_size394;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t395, t476);
  __retval392 = t395;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t477 = __retval392;
  return t477;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v478, unsigned long v479, char* v480) {
bb481:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this482;
  unsigned long __pos483;
  char* __s484;
  unsigned long __retval485;
  this482 = v478;
  __pos483 = v479;
  __s484 = v480;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t486 = this482;
    unsigned long t487 = __pos483;
    unsigned long r488 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t486);
    _Bool c489 = ((t487 > r488)) ? 1 : 0;
    if (c489) {
      char* cast490 = (char*)&(_str_26);
      char* t491 = __s484;
      unsigned long t492 = __pos483;
      unsigned long r493 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t486);
      std____throw_out_of_range_fmt(cast490, t491, t492, r493);
    }
  unsigned long t494 = __pos483;
  __retval485 = t494;
  unsigned long t495 = __retval485;
  return t495;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v496, unsigned long v497, unsigned long v498) {
bb499:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this500;
  unsigned long __pos501;
  unsigned long __off502;
  unsigned long __retval503;
  _Bool __testoff504;
  this500 = v496;
  __pos501 = v497;
  __off502 = v498;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t505 = this500;
  unsigned long t506 = __off502;
  unsigned long r507 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t505);
  unsigned long t508 = __pos501;
  unsigned long b509 = r507 - t508;
  _Bool c510 = ((t506 < b509)) ? 1 : 0;
  __testoff504 = c510;
  _Bool t511 = __testoff504;
  unsigned long ternary512;
  if (t511) {
    unsigned long t513 = __off502;
    ternary512 = (unsigned long)t513;
  } else {
    unsigned long r514 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t505);
    unsigned long t515 = __pos501;
    unsigned long b516 = r514 - t515;
    ternary512 = (unsigned long)b516;
  }
  __retval503 = ternary512;
  unsigned long t517 = __retval503;
  return t517;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v518, unsigned long v519, unsigned long v520, char* v521, unsigned long v522) {
bb523:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this524;
  unsigned long __pos525;
  unsigned long __n1526;
  char* __s527;
  unsigned long __n2528;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval529;
  this524 = v518;
  __pos525 = v519;
  __n1526 = v520;
  __s527 = v521;
  __n2528 = v522;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t530 = this524;
  unsigned long t531 = __pos525;
  char* cast532 = (char*)&(_str_24);
  unsigned long r533 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t530, t531, cast532);
  unsigned long t534 = __pos525;
  unsigned long t535 = __n1526;
  unsigned long r536 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t530, t534, t535);
  char* t537 = __s527;
  unsigned long t538 = __n2528;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r539 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t530, r533, r536, t537, t538);
  __retval529 = r539;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t540 = __retval529;
  return t540;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v541) {
bb542:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this543;
  unsigned long __retval544;
  unsigned long __sz545;
  this543 = v541;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t546 = this543;
  unsigned long t547 = t546->_M_string_length;
  __sz545 = t547;
    unsigned long t548 = __sz545;
    unsigned long r549 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t546);
    _Bool c550 = ((t548 > r549)) ? 1 : 0;
    if (c550) {
      __builtin_unreachable();
    }
  unsigned long t551 = __sz545;
  __retval544 = t551;
  unsigned long t552 = __retval544;
  return t552;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6insertEmRKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_5(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v553, unsigned long v554, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v555) {
bb556:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this557;
  unsigned long __pos1558;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str559;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval560;
  this557 = v553;
  __pos1558 = v554;
  __str559 = v555;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t561 = this557;
  unsigned long t562 = __pos1558;
  unsigned long c563 = 0;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t564 = __str559;
  char* r565 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t564);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t566 = __str559;
  unsigned long r567 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t566);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r568 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(t561, t562, c563, r565, r567);
  __retval560 = r568;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t569 = __retval560;
  return t569;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v570, char* v571) {
bb572:
  char* __c1573;
  char* __c2574;
  _Bool __retval575;
  __c1573 = v570;
  __c2574 = v571;
  char* t576 = __c1573;
  char t577 = *t576;
  unsigned char cast578 = (unsigned char)t577;
  int cast579 = (int)cast578;
  char* t580 = __c2574;
  char t581 = *t580;
  unsigned char cast582 = (unsigned char)t581;
  int cast583 = (int)cast582;
  _Bool c584 = ((cast579 < cast583)) ? 1 : 0;
  __retval575 = c584;
  _Bool t585 = __retval575;
  return t585;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v586, char* v587, unsigned long v588) {
bb589:
  char* __s1590;
  char* __s2591;
  unsigned long __n592;
  int __retval593;
  __s1590 = v586;
  __s2591 = v587;
  __n592 = v588;
    unsigned long t594 = __n592;
    unsigned long c595 = 0;
    _Bool c596 = ((t594 == c595)) ? 1 : 0;
    if (c596) {
      int c597 = 0;
      __retval593 = c597;
      int t598 = __retval593;
      return t598;
    }
    _Bool r599 = std____is_constant_evaluated();
    if (r599) {
        unsigned long __i600;
        unsigned long c601 = 0;
        __i600 = c601;
        while (1) {
          unsigned long t603 = __i600;
          unsigned long t604 = __n592;
          _Bool c605 = ((t603 < t604)) ? 1 : 0;
          if (!c605) break;
            unsigned long t606 = __i600;
            char* t607 = __s1590;
            char* ptr608 = &(t607)[t606];
            unsigned long t609 = __i600;
            char* t610 = __s2591;
            char* ptr611 = &(t610)[t609];
            _Bool r612 = std__char_traits_char___lt(ptr608, ptr611);
            if (r612) {
              int c613 = -1;
              __retval593 = c613;
              int t614 = __retval593;
              int ret_val615 = t614;
              return ret_val615;
            } else {
                unsigned long t616 = __i600;
                char* t617 = __s2591;
                char* ptr618 = &(t617)[t616];
                unsigned long t619 = __i600;
                char* t620 = __s1590;
                char* ptr621 = &(t620)[t619];
                _Bool r622 = std__char_traits_char___lt(ptr618, ptr621);
                if (r622) {
                  int c623 = 1;
                  __retval593 = c623;
                  int t624 = __retval593;
                  int ret_val625 = t624;
                  return ret_val625;
                }
            }
        for_step602: ;
          unsigned long t626 = __i600;
          unsigned long u627 = t626 + 1;
          __i600 = u627;
        }
      int c628 = 0;
      __retval593 = c628;
      int t629 = __retval593;
      return t629;
    }
  char* t630 = __s1590;
  void* cast631 = (void*)t630;
  char* t632 = __s2591;
  void* cast633 = (void*)t632;
  unsigned long t634 = __n592;
  int r635 = memcmp(cast631, cast633, t634);
  __retval593 = r635;
  int t636 = __retval593;
  return t636;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v637) {
bb638:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this639;
  char* __retval640;
  this639 = v637;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t641 = this639;
  char* r642 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t641);
  __retval640 = r642;
  char* t643 = __retval640;
  return t643;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v644, char* v645) {
bb646:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs647;
  char* __rhs648;
  _Bool __retval649;
  __lhs647 = v644;
  __rhs648 = v645;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t650 = __lhs647;
  unsigned long r651 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t650);
  char* t652 = __rhs648;
  unsigned long r653 = std__char_traits_char___length(t652);
  _Bool c654 = ((r651 == r653)) ? 1 : 0;
  _Bool ternary655;
  if (c654) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t656 = __lhs647;
    char* r657 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t656);
    char* t658 = __rhs648;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t659 = __lhs647;
    unsigned long r660 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t659);
    int r661 = std__char_traits_char___compare(r657, t658, r660);
    _Bool cast662 = (_Bool)r661;
    _Bool u663 = !cast662;
    ternary655 = (_Bool)u663;
  } else {
    _Bool c664 = 0;
    ternary655 = (_Bool)c664;
  }
  __retval649 = ternary655;
  _Bool t665 = __retval649;
  return t665;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6insertEmRKS4_mm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_6(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v666, unsigned long v667, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v668, unsigned long v669, unsigned long v670) {
bb671:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this672;
  unsigned long __pos1673;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str674;
  unsigned long __pos2675;
  unsigned long __n676;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval677;
  this672 = v666;
  __pos1673 = v667;
  __str674 = v668;
  __pos2675 = v669;
  __n676 = v670;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t678 = this672;
  unsigned long t679 = __pos1673;
  unsigned long c680 = 0;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t681 = __str674;
  char* r682 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t681);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t683 = __str674;
  unsigned long t684 = __pos2675;
  char* cast685 = (char*)&(_str_27);
  unsigned long r686 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t683, t684, cast685);
  char* ptr687 = &(r682)[r686];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t688 = __str674;
  unsigned long t689 = __pos2675;
  unsigned long t690 = __n676;
  unsigned long r691 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t688, t689, t690);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r692 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(t678, t679, c680, ptr687, r691);
  __retval677 = r692;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t693 = __retval677;
  return t693;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6insertEmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_4(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v694, unsigned long v695, char* v696, unsigned long v697) {
bb698:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this699;
  unsigned long __pos700;
  char* __s701;
  unsigned long __n702;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval703;
  this699 = v694;
  __pos700 = v695;
  __s701 = v696;
  __n702 = v697;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t704 = this699;
  unsigned long t705 = __pos700;
  unsigned long c706 = 0;
  char* t707 = __s701;
  unsigned long t708 = __n702;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r709 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(t704, t705, c706, t707, t708);
  __retval703 = r709;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t710 = __retval703;
  return t710;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6insertEmPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v711, unsigned long v712, char* v713) {
bb714:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this715;
  unsigned long __pos716;
  char* __s717;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval718;
  this715 = v711;
  __pos716 = v712;
  __s717 = v713;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t719 = this715;
  unsigned long t720 = __pos716;
  unsigned long c721 = 0;
  char* t722 = __s717;
  char* t723 = __s717;
  unsigned long r724 = std__char_traits_char___length(t723);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r725 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(t719, t720, c721, t722, r724);
  __retval718 = r725;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t726 = __retval718;
  return t726;
}

// function: _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* v727, char* v728) {
bb729:
  char* __location730;
  char* __args731;
  char* __retval732;
  void* __loc733;
  __location730 = v727;
  __args731 = v728;
  char* t734 = __location730;
  void* cast735 = (void*)t734;
  __loc733 = cast735;
    void* t736 = __loc733;
    char* cast737 = (char*)t736;
    char* t738 = __args731;
    char t739 = *t738;
    *cast737 = t739;
    __retval732 = cast737;
    char* t740 = __retval732;
    return t740;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignEPcmc
char* __gnu_cxx__char_traits_char___assign(char* v741, unsigned long v742, char v743) {
bb744:
  char* __s745;
  unsigned long __n746;
  char __a747;
  char* __retval748;
  __s745 = v741;
  __n746 = v742;
  __a747 = v743;
    _Bool r749 = std____is_constant_evaluated();
    if (r749) {
        unsigned long __i750;
        unsigned long c751 = 0;
        __i750 = c751;
        while (1) {
          unsigned long t753 = __i750;
          unsigned long t754 = __n746;
          _Bool c755 = ((t753 < t754)) ? 1 : 0;
          if (!c755) break;
          char* t756 = __s745;
          unsigned long t757 = __i750;
          char* ptr758 = &(t756)[t757];
          char* r759 = _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(ptr758, &__a747);
        for_step752: ;
          unsigned long t760 = __i750;
          unsigned long u761 = t760 + 1;
          __i750 = u761;
        }
      char* t762 = __s745;
      __retval748 = t762;
      char* t763 = __retval748;
      return t763;
    }
      unsigned long t764 = __n746;
      _Bool cast765 = (_Bool)t764;
      if (cast765) {
        unsigned char __c766;
        void* cast767 = (void*)&(__c766);
        void* cast768 = (void*)&(__a747);
        unsigned long c769 = 1;
        void* r770 = memcpy(cast767, cast768, c769);
        char* t771 = __s745;
        void* cast772 = (void*)t771;
        unsigned char t773 = __c766;
        int cast774 = (int)t773;
        unsigned long t775 = __n746;
        void* r776 = memset(cast772, cast774, t775);
      }
  char* t777 = __s745;
  __retval748 = t777;
  char* t778 = __retval748;
  return t778;
}

// function: _ZNSt11char_traitsIcE6assignEPcmc
char* std__char_traits_char___assign(char* v779, unsigned long v780, char v781) {
bb782:
  char* __s783;
  unsigned long __n784;
  char __a785;
  char* __retval786;
  __s783 = v779;
  __n784 = v780;
  __a785 = v781;
    unsigned long t787 = __n784;
    unsigned long c788 = 0;
    _Bool c789 = ((t787 == c788)) ? 1 : 0;
    if (c789) {
      char* t790 = __s783;
      __retval786 = t790;
      char* t791 = __retval786;
      return t791;
    }
    _Bool r792 = std____is_constant_evaluated();
    if (r792) {
      char* t793 = __s783;
      unsigned long t794 = __n784;
      char t795 = __a785;
      char* r796 = __gnu_cxx__char_traits_char___assign(t793, t794, t795);
      __retval786 = r796;
      char* t797 = __retval786;
      return t797;
    }
  char* t798 = __s783;
  void* cast799 = (void*)t798;
  char t800 = __a785;
  int cast801 = (int)t800;
  unsigned long t802 = __n784;
  void* r803 = memset(cast799, cast801, t802);
  char* cast804 = (char*)r803;
  __retval786 = cast804;
  char* t805 = __retval786;
  return t805;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_S_assignEPcmc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(char* v806, unsigned long v807, char v808) {
bb809:
  char* __d810;
  unsigned long __n811;
  char __c812;
  __d810 = v806;
  __n811 = v807;
  __c812 = v808;
    unsigned long t813 = __n811;
    unsigned long c814 = 1;
    _Bool c815 = ((t813 == c814)) ? 1 : 0;
    if (c815) {
      char* t816 = __d810;
      std__char_traits_char___assign_2(t816, &__c812);
    } else {
      char* t817 = __d810;
      unsigned long t818 = __n811;
      char t819 = __c812;
      char* r820 = std__char_traits_char___assign(t817, t818, t819);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE14_M_replace_auxEmmmc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v821, unsigned long v822, unsigned long v823, unsigned long v824, char v825) {
bb826:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this827;
  unsigned long __pos1828;
  unsigned long __n1829;
  unsigned long __n2830;
  char __c831;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval832;
  unsigned long __old_size833;
  unsigned long __new_size834;
  this827 = v821;
  __pos1828 = v822;
  __n1829 = v823;
  __n2830 = v824;
  __c831 = v825;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t835 = this827;
  unsigned long t836 = __n1829;
  unsigned long t837 = __n2830;
  char* cast838 = (char*)&(_str_28);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t835, t836, t837, cast838);
  unsigned long r839 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t835);
  __old_size833 = r839;
  unsigned long t840 = __old_size833;
  unsigned long t841 = __n2830;
  unsigned long b842 = t840 + t841;
  unsigned long t843 = __n1829;
  unsigned long b844 = b842 - t843;
  __new_size834 = b844;
    unsigned long t845 = __new_size834;
    unsigned long r846 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t835);
    _Bool c847 = ((t845 <= r846)) ? 1 : 0;
    if (c847) {
      char* __p848;
      unsigned long __how_much849;
      char* r850 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t835);
      unsigned long t851 = __pos1828;
      char* ptr852 = &(r850)[t851];
      __p848 = ptr852;
      unsigned long t853 = __old_size833;
      unsigned long t854 = __pos1828;
      unsigned long b855 = t853 - t854;
      unsigned long t856 = __n1829;
      unsigned long b857 = b855 - t856;
      __how_much849 = b857;
        unsigned long t858 = __how_much849;
        _Bool cast859 = (_Bool)t858;
        _Bool ternary860;
        if (cast859) {
          unsigned long t861 = __n1829;
          unsigned long t862 = __n2830;
          _Bool c863 = ((t861 != t862)) ? 1 : 0;
          ternary860 = (_Bool)c863;
        } else {
          _Bool c864 = 0;
          ternary860 = (_Bool)c864;
        }
        if (ternary860) {
          char* t865 = __p848;
          unsigned long t866 = __n2830;
          char* ptr867 = &(t865)[t866];
          char* t868 = __p848;
          unsigned long t869 = __n1829;
          char* ptr870 = &(t868)[t869];
          unsigned long t871 = __how_much849;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr867, ptr870, t871);
        }
    } else {
      unsigned long t872 = __pos1828;
      unsigned long t873 = __n1829;
      char* c874 = ((void*)0);
      unsigned long t875 = __n2830;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t835, t872, t873, c874, t875);
    }
    unsigned long t876 = __n2830;
    _Bool cast877 = (_Bool)t876;
    if (cast877) {
      char* r878 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t835);
      unsigned long t879 = __pos1828;
      char* ptr880 = &(r878)[t879];
      unsigned long t881 = __n2830;
      char t882 = __c831;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(ptr880, t881, t882);
    }
  unsigned long t883 = __new_size834;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t835, t883);
  __retval832 = t835;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t884 = __retval832;
  return t884;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6insertEmmc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_7(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v885, unsigned long v886, unsigned long v887, char v888) {
bb889:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this890;
  unsigned long __pos891;
  unsigned long __n892;
  char __c893;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval894;
  this890 = v885;
  __pos891 = v886;
  __n892 = v887;
  __c893 = v888;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t895 = this890;
  unsigned long t896 = __pos891;
  char* cast897 = (char*)&(_str_27);
  unsigned long r898 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t895, t896, cast897);
  unsigned long c899 = 0;
  unsigned long t900 = __n892;
  char t901 = __c893;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r902 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(t895, r898, c899, t900, t901);
  __retval894 = r902;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t903 = __retval894;
  return t903;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE4baseEv
char** __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v904) {
bb905:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this906;
  char** __retval907;
  this906 = v904;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t908 = this906;
  __retval907 = &t908->_M_current;
  char** t909 = __retval907;
  return t909;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE4baseEv
char** __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v910) {
bb911:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this912;
  char** __retval913;
  this912 = v910;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t914 = this912;
  __retval913 = &t914->_M_current;
  char** t915 = __retval913;
  return t915;
}

// function: _ZN9__gnu_cxxmiIPKcPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEDTmicldtfp_4baseEcldtfp0_4baseEERKNS_17__normal_iteratorIT_T1_EERKNSB_IT0_SD_EE
long decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v916, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v917) {
bb918:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __lhs919;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __rhs920;
  long __retval921;
  __lhs919 = v916;
  __rhs920 = v917;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t922 = __lhs919;
  char** r923 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t922);
  char* t924 = *r923;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t925 = __rhs920;
  char** r926 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t925);
  char* t927 = *r926;
  long diff928 = t924 - t927;
  __retval921 = diff928;
  long t929 = __retval921;
  return t929;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2ERKS1_
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v930, char** v931) {
bb932:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this933;
  char** __i934;
  this933 = v930;
  __i934 = v931;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t935 = this933;
  char** t936 = __i934;
  char* t937 = *t936;
  t935->_M_current = t937;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6insertEN9__gnu_cxx17__normal_iteratorIPKcS4_EEc
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v938, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v939, char v940) {
bb941:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this942;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __p943;
  char __c944;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval945;
  unsigned long __pos946;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp0947;
  char* ref_tmp1948;
  this942 = v938;
  __p943 = v939;
  __c944 = v940;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t949 = this942;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r950 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(t949);
  ref_tmp0947 = r950;
  long r951 = decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__p943, &ref_tmp0947);
  unsigned long cast952 = (unsigned long)r951;
  __pos946 = cast952;
  unsigned long t953 = __pos946;
  unsigned long c954 = 0;
  unsigned long c955 = 1;
  char t956 = __c944;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r957 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(t949, t953, c954, c955, t956);
  char* r958 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t949);
  unsigned long t959 = __pos946;
  char* ptr960 = &(r958)[t959];
  ref_tmp1948 = ptr960;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval945, &ref_tmp1948);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t961 = __retval945;
  return t961;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5beginEv
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v962) {
bb963:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this964;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval965;
  char* ref_tmp0966;
  this964 = v962;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t967 = this964;
  char* r968 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t967);
  ref_tmp0966 = r968;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval965, &ref_tmp0966);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t969 = __retval965;
  return t969;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEplEl
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v970, long v971) {
bb972:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this973;
  long __n974;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval975;
  char* ref_tmp0976;
  this973 = v970;
  __n974 = v971;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t977 = this973;
  char* t978 = t977->_M_current;
  long t979 = __n974;
  char* ptr980 = &(t978)[t979];
  ref_tmp0976 = ptr980;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval975, &ref_tmp0976);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t981 = __retval975;
  return t981;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
void _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v982, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v983) {
bb984:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this985;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __i986;
  this985 = v982;
  __i986 = v983;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t987 = this985;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t988 = __i986;
  char** r989 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t988);
  char* t990 = *r989;
  t987->_M_current = t990;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEaSEOS8_
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator_(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v991, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v992) {
bb993:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this994;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* unnamed995;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __retval996;
  this994 = v991;
  unnamed995 = v992;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t997 = this994;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t998 = unnamed995;
  char* t999 = t998->_M_current;
  t997->_M_current = t999;
  __retval996 = t997;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t1000 = __retval996;
  return t1000;
}

// function: _ZN9__gnu_cxxmiIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKSC_SF_
long __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v1001, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v1002) {
bb1003:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __lhs1004;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __rhs1005;
  long __retval1006;
  __lhs1004 = v1001;
  __rhs1005 = v1002;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t1007 = __lhs1004;
  char** r1008 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t1007);
  char* t1009 = *r1008;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t1010 = __rhs1005;
  char** r1011 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t1010);
  char* t1012 = *r1011;
  long diff1013 = t1009 - t1012;
  __retval1006 = diff1013;
  long t1014 = __retval1006;
  return t1014;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEN9__gnu_cxx17__normal_iteratorIPKcS4_EES9_mc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1015, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1016, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1017, unsigned long v1018, char v1019) {
bb1020:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1021;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __i11022;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __i21023;
  unsigned long __n1024;
  char __c1025;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1026;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp01027;
  this1021 = v1015;
  __i11022 = v1016;
  __i21023 = v1017;
  __n1024 = v1018;
  __c1025 = v1019;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1028 = this1021;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1029 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(t1028);
  ref_tmp01027 = r1029;
  long r1030 = decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__i11022, &ref_tmp01027);
  unsigned long cast1031 = (unsigned long)r1030;
  long r1032 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__i21023, &__i11022);
  unsigned long cast1033 = (unsigned long)r1032;
  unsigned long t1034 = __n1024;
  char t1035 = __c1025;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1036 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(t1028, cast1031, cast1033, t1034, t1035);
  __retval1026 = r1036;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1037 = __retval1026;
  return t1037;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6insertEN9__gnu_cxx17__normal_iteratorIPKcS4_EEmc
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1038, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1039, unsigned long v1040, char v1041) {
bb1042:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1043;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __p1044;
  unsigned long __n1045;
  char __c1046;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval1047;
  unsigned long __pos1048;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp01049;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp01050;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp11051;
  char* ref_tmp11052;
  this1043 = v1038;
  __p1044 = v1039;
  __n1045 = v1040;
  __c1046 = v1041;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1053 = this1043;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1054 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(t1053);
  ref_tmp01049 = r1054;
  long r1055 = decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__p1044, &ref_tmp01049);
  unsigned long cast1056 = (unsigned long)r1055;
  __pos1048 = cast1056;
  agg_tmp01050 = __p1044; // copy
  agg_tmp11051 = __p1044; // copy
  unsigned long t1057 = __n1045;
  char t1058 = __c1046;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1059 = agg_tmp01050;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1060 = agg_tmp11051;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1061 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(t1053, t1059, t1060, t1057, t1058);
  char* r1062 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1053);
  unsigned long t1063 = __pos1048;
  char* ptr1064 = &(r1062)[t1063];
  ref_tmp11052 = ptr1064;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval1047, &ref_tmp11052);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1065 = __retval1047;
  return t1065;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE3endEv
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1066) {
bb1067:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1068;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval1069;
  char* ref_tmp01070;
  this1068 = v1066;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1071 = this1068;
  char* r1072 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1071);
  unsigned long r1073 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1071);
  char* ptr1074 = &(r1072)[r1073];
  ref_tmp01070 = ptr1074;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval1069, &ref_tmp01070);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1075 = __retval1069;
  return t1075;
}

// function: _ZN9__gnu_cxxmiIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKSB_SE_
long __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v1076, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v1077) {
bb1078:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __lhs1079;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __rhs1080;
  long __retval1081;
  __lhs1079 = v1076;
  __rhs1080 = v1077;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t1082 = __lhs1079;
  char** r1083 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t1082);
  char* t1084 = *r1083;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t1085 = __rhs1080;
  char** r1086 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t1085);
  char* t1087 = *r1086;
  long diff1088 = t1084 - t1087;
  __retval1081 = diff1088;
  long t1089 = __retval1081;
  return t1089;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEN9__gnu_cxx17__normal_iteratorIPKcS4_EES9_NS6_IPcS4_EESB_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1090, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1091, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1092, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1093, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1094) {
bb1095:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1096;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __i11097;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __i21098;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __k11099;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __k21100;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1101;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp01102;
  this1096 = v1090;
  __i11097 = v1091;
  __i21098 = v1092;
  __k11099 = v1093;
  __k21100 = v1094;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1103 = this1096;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1104 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(t1103);
  ref_tmp01102 = r1104;
  long r1105 = decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__i11097, &ref_tmp01102);
  unsigned long cast1106 = (unsigned long)r1105;
  long r1107 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__i21098, &__i11097);
  unsigned long cast1108 = (unsigned long)r1107;
  char** r1109 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(&__k11099);
  char* t1110 = *r1109;
  long r1111 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__k21100, &__k11099);
  unsigned long cast1112 = (unsigned long)r1111;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1113 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(t1103, cast1106, cast1108, t1110, cast1112);
  __retval1101 = r1113;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1114 = __retval1101;
  return t1114;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6insertIN9__gnu_cxx17__normal_iteratorIPcS4_EEvEES9_NS7_IPKcS4_EET_SD_
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______void_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1115, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1116, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1117, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1118) {
bb1119:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1120;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __p1121;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __beg1122;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __end1123;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval1124;
  unsigned long __pos1125;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp01126;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp01127;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp11128;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp21129;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp31130;
  char* ref_tmp11131;
  this1120 = v1115;
  __p1121 = v1116;
  __beg1122 = v1117;
  __end1123 = v1118;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1132 = this1120;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1133 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(t1132);
  ref_tmp01126 = r1133;
  long r1134 = decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__p1121, &ref_tmp01126);
  unsigned long cast1135 = (unsigned long)r1134;
  __pos1125 = cast1135;
  agg_tmp01127 = __p1121; // copy
  agg_tmp11128 = __p1121; // copy
  agg_tmp21129 = __beg1122; // copy
  agg_tmp31130 = __end1123; // copy
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1136 = agg_tmp01127;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1137 = agg_tmp11128;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1138 = agg_tmp21129;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1139 = agg_tmp31130;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1140 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(t1132, t1136, t1137, t1138, t1139);
  char* r1141 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1132);
  unsigned long t1142 = __pos1125;
  char* ptr1143 = &(r1141)[t1142];
  ref_tmp11131 = ptr1143;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval1124, &ref_tmp11131);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1144 = __retval1124;
  return t1144;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v1145, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1146) {
bb1147:
  struct std__basic_ostream_char__std__char_traits_char__* __os1148;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1149;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1150;
  __os1148 = v1145;
  __str1149 = v1146;
  struct std__basic_ostream_char__std__char_traits_char__* t1151 = __os1148;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1152 = __str1149;
  char* r1153 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t1152);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1154 = __str1149;
  unsigned long r1155 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1154);
  long cast1156 = (long)r1155;
  struct std__basic_ostream_char__std__char_traits_char__* r1157 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1151, r1153, cast1156);
  __retval1150 = r1157;
  struct std__basic_ostream_char__std__char_traits_char__* t1158 = __retval1150;
  return t1158;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1159, void* v1160) {
bb1161:
  struct std__basic_ostream_char__std__char_traits_char__* this1162;
  void* __pf1163;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1164;
  this1162 = v1159;
  __pf1163 = v1160;
  struct std__basic_ostream_char__std__char_traits_char__* t1165 = this1162;
  void* t1166 = __pf1163;
  struct std__basic_ostream_char__std__char_traits_char__* r1167 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1166)(t1165);
  __retval1164 = r1167;
  struct std__basic_ostream_char__std__char_traits_char__* t1168 = __retval1164;
  return t1168;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1169) {
bb1170:
  struct std__basic_ostream_char__std__char_traits_char__* __os1171;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1172;
  __os1171 = v1169;
  struct std__basic_ostream_char__std__char_traits_char__* t1173 = __os1171;
  struct std__basic_ostream_char__std__char_traits_char__* r1174 = std__ostream__flush(t1173);
  __retval1172 = r1174;
  struct std__basic_ostream_char__std__char_traits_char__* t1175 = __retval1172;
  return t1175;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1176) {
bb1177:
  struct std__ctype_char_* __f1178;
  struct std__ctype_char_* __retval1179;
  __f1178 = v1176;
    struct std__ctype_char_* t1180 = __f1178;
    _Bool cast1181 = (_Bool)t1180;
    _Bool u1182 = !cast1181;
    if (u1182) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t1183 = __f1178;
  __retval1179 = t1183;
  struct std__ctype_char_* t1184 = __retval1179;
  return t1184;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1185, char v1186) {
bb1187:
  struct std__ctype_char_* this1188;
  char __c1189;
  char __retval1190;
  this1188 = v1185;
  __c1189 = v1186;
  struct std__ctype_char_* t1191 = this1188;
    char t1192 = t1191->_M_widen_ok;
    _Bool cast1193 = (_Bool)t1192;
    if (cast1193) {
      char t1194 = __c1189;
      unsigned char cast1195 = (unsigned char)t1194;
      unsigned long cast1196 = (unsigned long)cast1195;
      char t1197 = t1191->_M_widen[cast1196];
      __retval1190 = t1197;
      char t1198 = __retval1190;
      return t1198;
    }
  std__ctype_char____M_widen_init___const(t1191);
  char t1199 = __c1189;
  void** v1200 = (void**)t1191;
  void* v1201 = *((void**)v1200);
  char vcall1204 = (char)__VERIFIER_virtual_call_char_char(t1191, 6, t1199);
  __retval1190 = vcall1204;
  char t1205 = __retval1190;
  return t1205;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1206, char v1207) {
bb1208:
  struct std__basic_ios_char__std__char_traits_char__* this1209;
  char __c1210;
  char __retval1211;
  this1209 = v1206;
  __c1210 = v1207;
  struct std__basic_ios_char__std__char_traits_char__* t1212 = this1209;
  struct std__ctype_char_* t1213 = t1212->_M_ctype;
  struct std__ctype_char_* r1214 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1213);
  char t1215 = __c1210;
  char r1216 = std__ctype_char___widen_char__const(r1214, t1215);
  __retval1211 = r1216;
  char t1217 = __retval1211;
  return t1217;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1218) {
bb1219:
  struct std__basic_ostream_char__std__char_traits_char__* __os1220;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1221;
  __os1220 = v1218;
  struct std__basic_ostream_char__std__char_traits_char__* t1222 = __os1220;
  struct std__basic_ostream_char__std__char_traits_char__* t1223 = __os1220;
  void** v1224 = (void**)t1223;
  void* v1225 = *((void**)v1224);
  unsigned char* cast1226 = (unsigned char*)v1225;
  long c1227 = -24;
  unsigned char* ptr1228 = &(cast1226)[c1227];
  long* cast1229 = (long*)ptr1228;
  long t1230 = *cast1229;
  unsigned char* cast1231 = (unsigned char*)t1223;
  unsigned char* ptr1232 = &(cast1231)[t1230];
  struct std__basic_ostream_char__std__char_traits_char__* cast1233 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1232;
  struct std__basic_ios_char__std__char_traits_char__* cast1234 = (struct std__basic_ios_char__std__char_traits_char__*)cast1233;
  char c1235 = 10;
  char r1236 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1234, c1235);
  struct std__basic_ostream_char__std__char_traits_char__* r1237 = std__ostream__put(t1222, r1236);
  struct std__basic_ostream_char__std__char_traits_char__* r1238 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1237);
  __retval1221 = r1238;
  struct std__basic_ostream_char__std__char_traits_char__* t1239 = __retval1221;
  return t1239;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1240) {
bb1241:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1242;
  this1242 = v1240;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1243 = this1242;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1243);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1243->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb1244:
  int __retval1245;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str1246;
  struct std__allocator_char_ ref_tmp01247;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str21248;
  struct std__allocator_char_ ref_tmp11249;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str31250;
  struct std__allocator_char_ ref_tmp21251;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ it1252;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp31253;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp01254;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp41255;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp51256;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp11257;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp61258;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp21259;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp31260;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp71261;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp41262;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp51263;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp81264;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp61265;
  int c1266 = 0;
  __retval1245 = c1266;
  char* cast1267 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp01247);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str1246, cast1267, &ref_tmp01247);
  {
    std__allocator_char____allocator(&ref_tmp01247);
  }
    char* cast1268 = (char*)&(_str_1);
    std__allocator_char___allocator_2(&ref_tmp11249);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str21248, cast1268, &ref_tmp11249);
    {
      std__allocator_char____allocator(&ref_tmp11249);
    }
      char* cast1269 = (char*)&(_str_2);
      std__allocator_char___allocator_2(&ref_tmp21251);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str31250, cast1269, &ref_tmp21251);
      {
        std__allocator_char____allocator(&ref_tmp21251);
      }
        __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator_2(&it1252);
        unsigned long c1270 = 6;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1271 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_5(&str1246, c1270, &str21248);
        char* cast1272 = (char*)&(_str_3);
        _Bool r1273 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1246, cast1272);
        if (r1273) {
        } else {
          char* cast1274 = (char*)&(_str_4);
          char* c1275 = _str_5;
          unsigned int c1276 = 23;
          char* cast1277 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1274, c1275, c1276, cast1277);
        }
        unsigned long c1278 = 6;
        unsigned long c1279 = 3;
        unsigned long c1280 = 4;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1281 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_6(&str1246, c1278, &str31250, c1279, c1280);
        char* cast1282 = (char*)&(_str_6);
        _Bool r1283 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1246, cast1282);
        if (r1283) {
        } else {
          char* cast1284 = (char*)&(_str_7);
          char* c1285 = _str_5;
          unsigned int c1286 = 26;
          char* cast1287 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1284, c1285, c1286, cast1287);
        }
        unsigned long c1288 = 10;
        char* cast1289 = (char*)&(_str_8);
        unsigned long c1290 = 8;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1291 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_4(&str1246, c1288, cast1289, c1290);
        char* cast1292 = (char*)&(_str_9);
        _Bool r1293 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1246, cast1292);
        if (r1293) {
        } else {
          char* cast1294 = (char*)&(_str_10);
          char* c1295 = _str_5;
          unsigned int c1296 = 29;
          char* cast1297 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1294, c1295, c1296, cast1297);
        }
        unsigned long c1298 = 10;
        char* cast1299 = (char*)&(_str_11);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1300 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_3(&str1246, c1298, cast1299);
        char* cast1301 = (char*)&(_str_12);
        _Bool r1302 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1246, cast1301);
        if (r1302) {
        } else {
          char* cast1303 = (char*)&(_str_13);
          char* c1304 = _str_5;
          unsigned int c1305 = 32;
          char* cast1306 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1303, c1304, c1305, cast1306);
        }
        unsigned long c1307 = 15;
        unsigned long c1308 = 1;
        char c1309 = 58;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1310 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_7(&str1246, c1307, c1308, c1309);
        char* cast1311 = (char*)&(_str_14);
        _Bool r1312 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1246, cast1311);
        if (r1312) {
        } else {
          char* cast1313 = (char*)&(_str_15);
          char* c1314 = _str_5;
          unsigned int c1315 = 35;
          char* cast1316 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1313, c1314, c1315, cast1316);
        }
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1317 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(&str1246);
        ref_tmp51256 = r1317;
        long c1318 = 5;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1319 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(&ref_tmp51256, c1318);
        ref_tmp41255 = r1319;
        _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp01254, &ref_tmp41255);
        char c1320 = 44;
        struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1321 = agg_tmp01254;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1322 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert(&str1246, t1321, c1320);
        ref_tmp31253 = r1322;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* r1323 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator_(&it1252, &ref_tmp31253);
        char* cast1324 = (char*)&(_str_16);
        _Bool r1325 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1246, cast1324);
        if (r1325) {
        } else {
          char* cast1326 = (char*)&(_str_17);
          char* c1327 = _str_5;
          unsigned int c1328 = 38;
          char* cast1329 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1326, c1327, c1328, cast1329);
        }
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1330 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(&str1246);
        ref_tmp61258 = r1330;
        _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp11257, &ref_tmp61258);
        unsigned long c1331 = 3;
        char c1332 = 46;
        struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1333 = agg_tmp11257;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1334 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_2(&str1246, t1333, c1331, c1332);
        agg_tmp21259 = r1334;
        char* cast1335 = (char*)&(_str_18);
        _Bool r1336 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1246, cast1335);
        if (r1336) {
        } else {
          char* cast1337 = (char*)&(_str_19);
          char* c1338 = _str_5;
          unsigned int c1339 = 41;
          char* cast1340 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1337, c1338, c1339, cast1340);
        }
        long c1341 = 2;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1342 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(&it1252, c1341);
        ref_tmp71261 = r1342;
        _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp31260, &ref_tmp71261);
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1343 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(&str31250);
        agg_tmp41262 = r1343;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1344 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(&str31250);
        ref_tmp81264 = r1344;
        long c1345 = 3;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1346 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(&ref_tmp81264, c1345);
        agg_tmp51263 = r1346;
        struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1347 = agg_tmp31260;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1348 = agg_tmp41262;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1349 = agg_tmp51263;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1350 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______void_(&str1246, t1347, t1348, t1349);
        agg_tmp61265 = r1350;
        char* cast1351 = (char*)&(_str_20);
        _Bool r1352 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1246, cast1351);
        if (r1352) {
        } else {
          char* cast1353 = (char*)&(_str_21);
          char* c1354 = _str_5;
          unsigned int c1355 = 44;
          char* cast1356 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1353, c1354, c1355, cast1356);
        }
        struct std__basic_ostream_char__std__char_traits_char__* r1357 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str1246);
        struct std__basic_ostream_char__std__char_traits_char__* r1358 = std__ostream__operator___std__ostream_____(r1357, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        int c1359 = 0;
        __retval1245 = c1359;
        int t1360 = __retval1245;
        int ret_val1361 = t1360;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str31250);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str21248);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str1246);
        }
        return ret_val1361;
  int t1362 = __retval1245;
  return t1362;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1363) {
bb1364:
  struct std____new_allocator_char_* this1365;
  this1365 = v1363;
  struct std____new_allocator_char_* t1366 = this1365;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1367) {
bb1368:
  char* __r1369;
  char* __retval1370;
  __r1369 = v1367;
  char* t1371 = __r1369;
  __retval1370 = t1371;
  char* t1372 = __retval1370;
  return t1372;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1373) {
bb1374:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1375;
  char* __retval1376;
  this1375 = v1373;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1377 = this1375;
  char* cast1378 = (char*)&(t1377->field2._M_local_buf);
  char* r1379 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1378);
  __retval1376 = r1379;
  char* t1380 = __retval1376;
  return t1380;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1381, char* v1382, struct std__allocator_char_* v1383) {
bb1384:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1385;
  char* __dat1386;
  struct std__allocator_char_* __a1387;
  this1385 = v1381;
  __dat1386 = v1382;
  __a1387 = v1383;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1388 = this1385;
  struct std__allocator_char_* base1389 = (struct std__allocator_char_*)((char *)t1388 + 0);
  struct std__allocator_char_* t1390 = __a1387;
  std__allocator_char___allocator(base1389, t1390);
    char* t1391 = __dat1386;
    t1388->_M_p = t1391;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1392:
  _Bool __retval1393;
    _Bool c1394 = 0;
    __retval1393 = c1394;
    _Bool t1395 = __retval1393;
    return t1395;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1396, char* v1397) {
bb1398:
  char* __c11399;
  char* __c21400;
  _Bool __retval1401;
  __c11399 = v1396;
  __c21400 = v1397;
  char* t1402 = __c11399;
  char t1403 = *t1402;
  int cast1404 = (int)t1403;
  char* t1405 = __c21400;
  char t1406 = *t1405;
  int cast1407 = (int)t1406;
  _Bool c1408 = ((cast1404 == cast1407)) ? 1 : 0;
  __retval1401 = c1408;
  _Bool t1409 = __retval1401;
  return t1409;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1410) {
bb1411:
  char* __p1412;
  unsigned long __retval1413;
  unsigned long __i1414;
  __p1412 = v1410;
  unsigned long c1415 = 0;
  __i1414 = c1415;
    char ref_tmp01416;
    while (1) {
      unsigned long t1417 = __i1414;
      char* t1418 = __p1412;
      char* ptr1419 = &(t1418)[t1417];
      char c1420 = 0;
      ref_tmp01416 = c1420;
      _Bool r1421 = __gnu_cxx__char_traits_char___eq(ptr1419, &ref_tmp01416);
      _Bool u1422 = !r1421;
      if (!u1422) break;
      unsigned long t1423 = __i1414;
      unsigned long u1424 = t1423 + 1;
      __i1414 = u1424;
    }
  unsigned long t1425 = __i1414;
  __retval1413 = t1425;
  unsigned long t1426 = __retval1413;
  return t1426;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1427) {
bb1428:
  char* __s1429;
  unsigned long __retval1430;
  __s1429 = v1427;
    _Bool r1431 = std____is_constant_evaluated();
    if (r1431) {
      char* t1432 = __s1429;
      unsigned long r1433 = __gnu_cxx__char_traits_char___length(t1432);
      __retval1430 = r1433;
      unsigned long t1434 = __retval1430;
      return t1434;
    }
  char* t1435 = __s1429;
  unsigned long r1436 = strlen(t1435);
  __retval1430 = r1436;
  unsigned long t1437 = __retval1430;
  return t1437;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v1438, char* v1439, struct std__random_access_iterator_tag v1440) {
bb1441:
  char* __first1442;
  char* __last1443;
  struct std__random_access_iterator_tag unnamed1444;
  long __retval1445;
  __first1442 = v1438;
  __last1443 = v1439;
  unnamed1444 = v1440;
  char* t1446 = __last1443;
  char* t1447 = __first1442;
  long diff1448 = t1446 - t1447;
  __retval1445 = diff1448;
  long t1449 = __retval1445;
  return t1449;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v1450) {
bb1451:
  char** unnamed1452;
  struct std__random_access_iterator_tag __retval1453;
  unnamed1452 = v1450;
  struct std__random_access_iterator_tag t1454 = __retval1453;
  return t1454;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v1455, char* v1456) {
bb1457:
  char* __first1458;
  char* __last1459;
  long __retval1460;
  struct std__random_access_iterator_tag agg_tmp01461;
  __first1458 = v1455;
  __last1459 = v1456;
  char* t1462 = __first1458;
  char* t1463 = __last1459;
  struct std__random_access_iterator_tag r1464 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first1458);
  agg_tmp01461 = r1464;
  struct std__random_access_iterator_tag t1465 = agg_tmp01461;
  long r1466 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t1462, t1463, t1465);
  __retval1460 = r1466;
  long t1467 = __retval1460;
  return t1467;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1468, char* v1469) {
bb1470:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1471;
  char* __p1472;
  this1471 = v1468;
  __p1472 = v1469;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1473 = this1471;
  char* t1474 = __p1472;
  t1473->_M_dataplus._M_p = t1474;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v1475) {
bb1476:
  struct std__allocator_char_* __a1477;
  unsigned long __retval1478;
  __a1477 = v1475;
  unsigned long c1479 = -1;
  unsigned long c1480 = 1;
  unsigned long b1481 = c1479 / c1480;
  __retval1478 = b1481;
  unsigned long t1482 = __retval1478;
  return t1482;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1483) {
bb1484:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1485;
  struct std__allocator_char_* __retval1486;
  this1485 = v1483;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1487 = this1485;
  struct std__allocator_char_* base1488 = (struct std__allocator_char_*)((char *)&(t1487->_M_dataplus) + 0);
  __retval1486 = base1488;
  struct std__allocator_char_* t1489 = __retval1486;
  return t1489;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1490, unsigned long* v1491) {
bb1492:
  unsigned long* __a1493;
  unsigned long* __b1494;
  unsigned long* __retval1495;
  __a1493 = v1490;
  __b1494 = v1491;
    unsigned long* t1496 = __b1494;
    unsigned long t1497 = *t1496;
    unsigned long* t1498 = __a1493;
    unsigned long t1499 = *t1498;
    _Bool c1500 = ((t1497 < t1499)) ? 1 : 0;
    if (c1500) {
      unsigned long* t1501 = __b1494;
      __retval1495 = t1501;
      unsigned long* t1502 = __retval1495;
      return t1502;
    }
  unsigned long* t1503 = __a1493;
  __retval1495 = t1503;
  unsigned long* t1504 = __retval1495;
  return t1504;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1505) {
bb1506:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1507;
  unsigned long __retval1508;
  unsigned long __diffmax1509;
  unsigned long __allocmax1510;
  this1507 = v1505;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1511 = this1507;
  unsigned long c1512 = 9223372036854775807;
  __diffmax1509 = c1512;
  struct std__allocator_char_* r1513 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1511);
  unsigned long r1514 = std__allocator_traits_std__allocator_char_____max_size(r1513);
  __allocmax1510 = r1514;
  unsigned long* r1515 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1509, &__allocmax1510);
  unsigned long t1516 = *r1515;
  unsigned long c1517 = 1;
  unsigned long b1518 = t1516 - c1517;
  __retval1508 = b1518;
  unsigned long t1519 = __retval1508;
  return t1519;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v1520) {
bb1521:
  struct std____new_allocator_char_* this1522;
  unsigned long __retval1523;
  this1522 = v1520;
  struct std____new_allocator_char_* t1524 = this1522;
  unsigned long c1525 = 9223372036854775807;
  unsigned long c1526 = 1;
  unsigned long b1527 = c1525 / c1526;
  __retval1523 = b1527;
  unsigned long t1528 = __retval1523;
  return t1528;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v1529, unsigned long v1530, void* v1531) {
bb1532:
  struct std____new_allocator_char_* this1533;
  unsigned long __n1534;
  void* unnamed1535;
  char* __retval1536;
  this1533 = v1529;
  __n1534 = v1530;
  unnamed1535 = v1531;
  struct std____new_allocator_char_* t1537 = this1533;
    unsigned long t1538 = __n1534;
    unsigned long r1539 = std____new_allocator_char____M_max_size___const(t1537);
    _Bool c1540 = ((t1538 > r1539)) ? 1 : 0;
    if (c1540) {
        unsigned long t1541 = __n1534;
        unsigned long c1542 = -1;
        unsigned long c1543 = 1;
        unsigned long b1544 = c1542 / c1543;
        _Bool c1545 = ((t1541 > b1544)) ? 1 : 0;
        if (c1545) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1546 = 1;
    unsigned long c1547 = 16;
    _Bool c1548 = ((c1546 > c1547)) ? 1 : 0;
    if (c1548) {
      unsigned long __al1549;
      unsigned long c1550 = 1;
      __al1549 = c1550;
      unsigned long t1551 = __n1534;
      unsigned long c1552 = 1;
      unsigned long b1553 = t1551 * c1552;
      unsigned long t1554 = __al1549;
      void* r1555 = operator_new_2(b1553, t1554);
      char* cast1556 = (char*)r1555;
      __retval1536 = cast1556;
      char* t1557 = __retval1536;
      return t1557;
    }
  unsigned long t1558 = __n1534;
  unsigned long c1559 = 1;
  unsigned long b1560 = t1558 * c1559;
  void* r1561 = operator_new(b1560);
  char* cast1562 = (char*)r1561;
  __retval1536 = cast1562;
  char* t1563 = __retval1536;
  return t1563;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1564, unsigned long v1565) {
bb1566:
  struct std__allocator_char_* this1567;
  unsigned long __n1568;
  char* __retval1569;
  this1567 = v1564;
  __n1568 = v1565;
  struct std__allocator_char_* t1570 = this1567;
    _Bool r1571 = std____is_constant_evaluated();
    if (r1571) {
        unsigned long t1572 = __n1568;
        unsigned long c1573 = 1;
        unsigned long ovr1574;
        _Bool ovf1575 = __builtin_mul_overflow(t1572, c1573, &ovr1574);
        __n1568 = ovr1574;
        if (ovf1575) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1576 = __n1568;
      void* r1577 = operator_new(t1576);
      char* cast1578 = (char*)r1577;
      __retval1569 = cast1578;
      char* t1579 = __retval1569;
      return t1579;
    }
  struct std____new_allocator_char_* base1580 = (struct std____new_allocator_char_*)((char *)t1570 + 0);
  unsigned long t1581 = __n1568;
  void* c1582 = ((void*)0);
  char* r1583 = std____new_allocator_char___allocate(base1580, t1581, c1582);
  __retval1569 = r1583;
  char* t1584 = __retval1569;
  return t1584;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1585, unsigned long v1586) {
bb1587:
  struct std__allocator_char_* __a1588;
  unsigned long __n1589;
  char* __retval1590;
  __a1588 = v1585;
  __n1589 = v1586;
  struct std__allocator_char_* t1591 = __a1588;
  unsigned long t1592 = __n1589;
  char* r1593 = std__allocator_char___allocate(t1591, t1592);
  __retval1590 = r1593;
  char* t1594 = __retval1590;
  return t1594;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1595, unsigned long v1596) {
bb1597:
  struct std__allocator_char_* __a1598;
  unsigned long __n1599;
  char* __retval1600;
  char* __p1601;
  __a1598 = v1595;
  __n1599 = v1596;
  struct std__allocator_char_* t1602 = __a1598;
  unsigned long t1603 = __n1599;
  char* r1604 = std__allocator_traits_std__allocator_char_____allocate(t1602, t1603);
  __p1601 = r1604;
  char* t1605 = __p1601;
  __retval1600 = t1605;
  char* t1606 = __retval1600;
  return t1606;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1607) {
bb1608:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1609;
  struct std__allocator_char_* __retval1610;
  this1609 = v1607;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1611 = this1609;
  struct std__allocator_char_* base1612 = (struct std__allocator_char_*)((char *)&(t1611->_M_dataplus) + 0);
  __retval1610 = base1612;
  struct std__allocator_char_* t1613 = __retval1610;
  return t1613;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1614, unsigned long* v1615, unsigned long v1616) {
bb1617:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1618;
  unsigned long* __capacity1619;
  unsigned long __old_capacity1620;
  char* __retval1621;
  this1618 = v1614;
  __capacity1619 = v1615;
  __old_capacity1620 = v1616;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1622 = this1618;
    unsigned long* t1623 = __capacity1619;
    unsigned long t1624 = *t1623;
    unsigned long r1625 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1622);
    _Bool c1626 = ((t1624 > r1625)) ? 1 : 0;
    if (c1626) {
      char* cast1627 = (char*)&(_str_23);
      std____throw_length_error(cast1627);
    }
    unsigned long* t1628 = __capacity1619;
    unsigned long t1629 = *t1628;
    unsigned long t1630 = __old_capacity1620;
    _Bool c1631 = ((t1629 > t1630)) ? 1 : 0;
    _Bool ternary1632;
    if (c1631) {
      unsigned long* t1633 = __capacity1619;
      unsigned long t1634 = *t1633;
      unsigned long c1635 = 2;
      unsigned long t1636 = __old_capacity1620;
      unsigned long b1637 = c1635 * t1636;
      _Bool c1638 = ((t1634 < b1637)) ? 1 : 0;
      ternary1632 = (_Bool)c1638;
    } else {
      _Bool c1639 = 0;
      ternary1632 = (_Bool)c1639;
    }
    if (ternary1632) {
      unsigned long c1640 = 2;
      unsigned long t1641 = __old_capacity1620;
      unsigned long b1642 = c1640 * t1641;
      unsigned long* t1643 = __capacity1619;
      *t1643 = b1642;
        unsigned long* t1644 = __capacity1619;
        unsigned long t1645 = *t1644;
        unsigned long r1646 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1622);
        _Bool c1647 = ((t1645 > r1646)) ? 1 : 0;
        if (c1647) {
          unsigned long r1648 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1622);
          unsigned long* t1649 = __capacity1619;
          *t1649 = r1648;
        }
    }
  struct std__allocator_char_* r1650 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1622);
  unsigned long* t1651 = __capacity1619;
  unsigned long t1652 = *t1651;
  unsigned long c1653 = 1;
  unsigned long b1654 = t1652 + c1653;
  char* r1655 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1650, b1654);
  __retval1621 = r1655;
  char* t1656 = __retval1621;
  return t1656;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1657, unsigned long v1658) {
bb1659:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1660;
  unsigned long __capacity1661;
  this1660 = v1657;
  __capacity1661 = v1658;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1662 = this1660;
  unsigned long t1663 = __capacity1661;
  t1662->field2._M_allocated_capacity = t1663;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1664:
  _Bool __retval1665;
    _Bool c1666 = 0;
    __retval1665 = c1666;
    _Bool t1667 = __retval1665;
    return t1667;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1668) {
bb1669:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1670;
  this1670 = v1668;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1671 = this1670;
    _Bool r1672 = std__is_constant_evaluated();
    if (r1672) {
        unsigned long __i1673;
        unsigned long c1674 = 0;
        __i1673 = c1674;
        while (1) {
          unsigned long t1676 = __i1673;
          unsigned long c1677 = 15;
          _Bool c1678 = ((t1676 <= c1677)) ? 1 : 0;
          if (!c1678) break;
          char c1679 = 0;
          unsigned long t1680 = __i1673;
          t1671->field2._M_local_buf[t1680] = c1679;
        for_step1675: ;
          unsigned long t1681 = __i1673;
          unsigned long u1682 = t1681 + 1;
          __i1673 = u1682;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1683, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1684) {
bb1685:
  struct _Guard* this1686;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1687;
  this1686 = v1683;
  __s1687 = v1684;
  struct _Guard* t1688 = this1686;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1689 = __s1687;
  t1688->_M_guarded = t1689;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1690, char* v1691) {
bb1692:
  char* __location1693;
  char* __args1694;
  char* __retval1695;
  void* __loc1696;
  __location1693 = v1690;
  __args1694 = v1691;
  char* t1697 = __location1693;
  void* cast1698 = (void*)t1697;
  __loc1696 = cast1698;
    void* t1699 = __loc1696;
    char* cast1700 = (char*)t1699;
    char* t1701 = __args1694;
    char t1702 = *t1701;
    *cast1700 = t1702;
    __retval1695 = cast1700;
    char* t1703 = __retval1695;
    return t1703;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign_2(char* v1704, char* v1705) {
bb1706:
  char* __c11707;
  char* __c21708;
  __c11707 = v1704;
  __c21708 = v1705;
    _Bool r1709 = std____is_constant_evaluated();
    if (r1709) {
      char* t1710 = __c11707;
      char* t1711 = __c21708;
      char* r1712 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1710, t1711);
    } else {
      char* t1713 = __c21708;
      char t1714 = *t1713;
      char* t1715 = __c11707;
      *t1715 = t1714;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1716, char* v1717, unsigned long v1718) {
bb1719:
  char* __s11720;
  char* __s21721;
  unsigned long __n1722;
  char* __retval1723;
  __s11720 = v1716;
  __s21721 = v1717;
  __n1722 = v1718;
    unsigned long t1724 = __n1722;
    unsigned long c1725 = 0;
    _Bool c1726 = ((t1724 == c1725)) ? 1 : 0;
    if (c1726) {
      char* t1727 = __s11720;
      __retval1723 = t1727;
      char* t1728 = __retval1723;
      return t1728;
    }
    _Bool r1729 = std____is_constant_evaluated();
    if (r1729) {
        unsigned long __i1730;
        unsigned long c1731 = 0;
        __i1730 = c1731;
        while (1) {
          unsigned long t1733 = __i1730;
          unsigned long t1734 = __n1722;
          _Bool c1735 = ((t1733 < t1734)) ? 1 : 0;
          if (!c1735) break;
          char* t1736 = __s11720;
          unsigned long t1737 = __i1730;
          char* ptr1738 = &(t1736)[t1737];
          unsigned long t1739 = __i1730;
          char* t1740 = __s21721;
          char* ptr1741 = &(t1740)[t1739];
          char* r1742 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1738, ptr1741);
        for_step1732: ;
          unsigned long t1743 = __i1730;
          unsigned long u1744 = t1743 + 1;
          __i1730 = u1744;
        }
      char* t1745 = __s11720;
      __retval1723 = t1745;
      char* t1746 = __retval1723;
      return t1746;
    }
  char* t1747 = __s11720;
  void* cast1748 = (void*)t1747;
  char* t1749 = __s21721;
  void* cast1750 = (void*)t1749;
  unsigned long t1751 = __n1722;
  unsigned long c1752 = 1;
  unsigned long b1753 = t1751 * c1752;
  void* r1754 = memcpy(cast1748, cast1750, b1753);
  char* t1755 = __s11720;
  __retval1723 = t1755;
  char* t1756 = __retval1723;
  return t1756;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1757, char* v1758, unsigned long v1759) {
bb1760:
  char* __s11761;
  char* __s21762;
  unsigned long __n1763;
  char* __retval1764;
  __s11761 = v1757;
  __s21762 = v1758;
  __n1763 = v1759;
    unsigned long t1765 = __n1763;
    unsigned long c1766 = 0;
    _Bool c1767 = ((t1765 == c1766)) ? 1 : 0;
    if (c1767) {
      char* t1768 = __s11761;
      __retval1764 = t1768;
      char* t1769 = __retval1764;
      return t1769;
    }
    _Bool r1770 = std____is_constant_evaluated();
    if (r1770) {
      char* t1771 = __s11761;
      char* t1772 = __s21762;
      unsigned long t1773 = __n1763;
      char* r1774 = __gnu_cxx__char_traits_char___copy(t1771, t1772, t1773);
      __retval1764 = r1774;
      char* t1775 = __retval1764;
      return t1775;
    }
  char* t1776 = __s11761;
  void* cast1777 = (void*)t1776;
  char* t1778 = __s21762;
  void* cast1779 = (void*)t1778;
  unsigned long t1780 = __n1763;
  void* r1781 = memcpy(cast1777, cast1779, t1780);
  char* cast1782 = (char*)r1781;
  __retval1764 = cast1782;
  char* t1783 = __retval1764;
  return t1783;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1784, char* v1785, unsigned long v1786) {
bb1787:
  char* __d1788;
  char* __s1789;
  unsigned long __n1790;
  __d1788 = v1784;
  __s1789 = v1785;
  __n1790 = v1786;
    unsigned long t1791 = __n1790;
    unsigned long c1792 = 1;
    _Bool c1793 = ((t1791 == c1792)) ? 1 : 0;
    if (c1793) {
      char* t1794 = __d1788;
      char* t1795 = __s1789;
      std__char_traits_char___assign_2(t1794, t1795);
    } else {
      char* t1796 = __d1788;
      char* t1797 = __s1789;
      unsigned long t1798 = __n1790;
      char* r1799 = std__char_traits_char___copy(t1796, t1797, t1798);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1800) {
bb1801:
  char* __it1802;
  char* __retval1803;
  __it1802 = v1800;
  char* t1804 = __it1802;
  __retval1803 = t1804;
  char* t1805 = __retval1803;
  return t1805;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1806, char* v1807, char* v1808) {
bb1809:
  char* __p1810;
  char* __k11811;
  char* __k21812;
  __p1810 = v1806;
  __k11811 = v1807;
  __k21812 = v1808;
    char* t1813 = __p1810;
    char* t1814 = __k11811;
    char* r1815 = char_const__std____niter_base_char_const__(t1814);
    char* t1816 = __k21812;
    char* t1817 = __k11811;
    long diff1818 = t1816 - t1817;
    unsigned long cast1819 = (unsigned long)diff1818;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1813, r1815, cast1819);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1820) {
bb1821:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1822;
  char* __retval1823;
  this1822 = v1820;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1824 = this1822;
  char* t1825 = t1824->_M_dataplus._M_p;
  __retval1823 = t1825;
  char* t1826 = __retval1823;
  return t1826;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1827, unsigned long v1828) {
bb1829:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1830;
  unsigned long __length1831;
  this1830 = v1827;
  __length1831 = v1828;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1832 = this1830;
  unsigned long t1833 = __length1831;
  t1832->_M_string_length = t1833;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1834, unsigned long v1835) {
bb1836:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1837;
  unsigned long __n1838;
  char ref_tmp01839;
  this1837 = v1834;
  __n1838 = v1835;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1840 = this1837;
  unsigned long t1841 = __n1838;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1840, t1841);
  unsigned long t1842 = __n1838;
  char* r1843 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1840);
  char* ptr1844 = &(r1843)[t1842];
  char c1845 = 0;
  ref_tmp01839 = c1845;
  std__char_traits_char___assign_2(ptr1844, &ref_tmp01839);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1846) {
bb1847:
  struct _Guard* this1848;
  this1848 = v1846;
  struct _Guard* t1849 = this1848;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1850 = t1849->_M_guarded;
    _Bool cast1851 = (_Bool)t1850;
    if (cast1851) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1852 = t1849->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1852);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1853, char* v1854, char* v1855, struct std__forward_iterator_tag v1856) {
bb1857:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1858;
  char* __beg1859;
  char* __end1860;
  struct std__forward_iterator_tag unnamed1861;
  unsigned long __dnew1862;
  struct _Guard __guard1863;
  this1858 = v1853;
  __beg1859 = v1854;
  __end1860 = v1855;
  unnamed1861 = v1856;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1864 = this1858;
  char* t1865 = __beg1859;
  char* t1866 = __end1860;
  long r1867 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1865, t1866);
  unsigned long cast1868 = (unsigned long)r1867;
  __dnew1862 = cast1868;
    unsigned long t1869 = __dnew1862;
    unsigned long c1870 = 15;
    _Bool c1871 = ((t1869 > c1870)) ? 1 : 0;
    if (c1871) {
      unsigned long c1872 = 0;
      char* r1873 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1864, &__dnew1862, c1872);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1864, r1873);
      unsigned long t1874 = __dnew1862;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1864, t1874);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1864);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1863, t1864);
    char* r1875 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1864);
    char* t1876 = __beg1859;
    char* t1877 = __end1860;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1875, t1876, t1877);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1878 = ((void*)0);
    __guard1863._M_guarded = c1878;
    unsigned long t1879 = __dnew1862;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1864, t1879);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1863);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1880) {
bb1881:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1882;
  this1882 = v1880;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1883 = this1882;
  {
    struct std__allocator_char_* base1884 = (struct std__allocator_char_*)((char *)t1883 + 0);
    std__allocator_char____allocator(base1884);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1885, struct std____new_allocator_char_* v1886) {
bb1887:
  struct std____new_allocator_char_* this1888;
  struct std____new_allocator_char_* unnamed1889;
  this1888 = v1885;
  unnamed1889 = v1886;
  struct std____new_allocator_char_* t1890 = this1888;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1891, struct std__allocator_char_* v1892) {
bb1893:
  struct std__allocator_char_* this1894;
  struct std__allocator_char_* __a1895;
  this1894 = v1891;
  __a1895 = v1892;
  struct std__allocator_char_* t1896 = this1894;
  struct std____new_allocator_char_* base1897 = (struct std____new_allocator_char_*)((char *)t1896 + 0);
  struct std__allocator_char_* t1898 = __a1895;
  struct std____new_allocator_char_* base1899 = (struct std____new_allocator_char_*)((char *)t1898 + 0);
  std____new_allocator_char_____new_allocator(base1897, base1899);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1900) {
bb1901:
  char* __r1902;
  char* __retval1903;
  __r1902 = v1900;
  char* t1904 = __r1902;
  __retval1903 = t1904;
  char* t1905 = __retval1903;
  return t1905;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1906) {
bb1907:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1908;
  char* __retval1909;
  this1908 = v1906;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1910 = this1908;
  char* cast1911 = (char*)&(t1910->field2._M_local_buf);
  char* r1912 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1911);
  __retval1909 = r1912;
  char* t1913 = __retval1909;
  return t1913;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1914) {
bb1915:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1916;
  _Bool __retval1917;
  this1916 = v1914;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1918 = this1916;
    char* r1919 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1918);
    char* r1920 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1918);
    _Bool c1921 = ((r1919 == r1920)) ? 1 : 0;
    if (c1921) {
        unsigned long t1922 = t1918->_M_string_length;
        unsigned long c1923 = 15;
        _Bool c1924 = ((t1922 > c1923)) ? 1 : 0;
        if (c1924) {
          __builtin_unreachable();
        }
      _Bool c1925 = 1;
      __retval1917 = c1925;
      _Bool t1926 = __retval1917;
      return t1926;
    }
  _Bool c1927 = 0;
  __retval1917 = c1927;
  _Bool t1928 = __retval1917;
  return t1928;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1929, char* v1930, unsigned long v1931) {
bb1932:
  struct std____new_allocator_char_* this1933;
  char* __p1934;
  unsigned long __n1935;
  this1933 = v1929;
  __p1934 = v1930;
  __n1935 = v1931;
  struct std____new_allocator_char_* t1936 = this1933;
    unsigned long c1937 = 1;
    unsigned long c1938 = 16;
    _Bool c1939 = ((c1937 > c1938)) ? 1 : 0;
    if (c1939) {
      char* t1940 = __p1934;
      void* cast1941 = (void*)t1940;
      unsigned long t1942 = __n1935;
      unsigned long c1943 = 1;
      unsigned long b1944 = t1942 * c1943;
      unsigned long c1945 = 1;
      operator_delete_3(cast1941, b1944, c1945);
      return;
    }
  char* t1946 = __p1934;
  void* cast1947 = (void*)t1946;
  unsigned long t1948 = __n1935;
  unsigned long c1949 = 1;
  unsigned long b1950 = t1948 * c1949;
  operator_delete_2(cast1947, b1950);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1951, char* v1952, unsigned long v1953) {
bb1954:
  struct std__allocator_char_* this1955;
  char* __p1956;
  unsigned long __n1957;
  this1955 = v1951;
  __p1956 = v1952;
  __n1957 = v1953;
  struct std__allocator_char_* t1958 = this1955;
    _Bool r1959 = std____is_constant_evaluated();
    if (r1959) {
      char* t1960 = __p1956;
      void* cast1961 = (void*)t1960;
      operator_delete(cast1961);
      return;
    }
  struct std____new_allocator_char_* base1962 = (struct std____new_allocator_char_*)((char *)t1958 + 0);
  char* t1963 = __p1956;
  unsigned long t1964 = __n1957;
  std____new_allocator_char___deallocate(base1962, t1963, t1964);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1965, char* v1966, unsigned long v1967) {
bb1968:
  struct std__allocator_char_* __a1969;
  char* __p1970;
  unsigned long __n1971;
  __a1969 = v1965;
  __p1970 = v1966;
  __n1971 = v1967;
  struct std__allocator_char_* t1972 = __a1969;
  char* t1973 = __p1970;
  unsigned long t1974 = __n1971;
  std__allocator_char___deallocate(t1972, t1973, t1974);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1975, unsigned long v1976) {
bb1977:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1978;
  unsigned long __size1979;
  this1978 = v1975;
  __size1979 = v1976;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1980 = this1978;
  struct std__allocator_char_* r1981 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1980);
  char* r1982 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1980);
  unsigned long t1983 = __size1979;
  unsigned long c1984 = 1;
  unsigned long b1985 = t1983 + c1984;
  std__allocator_traits_std__allocator_char_____deallocate(r1981, r1982, b1985);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1986) {
bb1987:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1988;
  this1988 = v1986;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1989 = this1988;
    _Bool r1990 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1989);
    _Bool u1991 = !r1990;
    if (u1991) {
      unsigned long t1992 = t1989->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1989, t1992);
    }
  return;
}

