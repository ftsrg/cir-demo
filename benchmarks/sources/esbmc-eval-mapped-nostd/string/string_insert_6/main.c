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
char _str_5[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_insert_6/main.cpp";
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
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_18[50] = "basic_string: construction from null is not valid";
char _str_19[24] = "basic_string::_M_create";
char _str_20[22] = "basic_string::replace";
char _str_21[25] = "basic_string::_M_replace";
char _str_22[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_23[21] = "basic_string::insert";
char _str_24[29] = "basic_string::_M_replace_aux";
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_4(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p2);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_5(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p2, unsigned long p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2, unsigned long p3);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___assign(char* p0, unsigned long p1, char p2);
extern void* memset(void* p0, int p1, unsigned long p2);
char* std__char_traits_char___assign(char* p0, unsigned long p1, char p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(char* p0, unsigned long p1, char p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, unsigned long p3, char p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_6(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char p3);
char** __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);
char** __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);
long decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, char** p1);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1, char p2);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, long p1);
void _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator_(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
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
        char* cast20 = (char*)&(_str_18);
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
  char* cast398 = (char*)&(_str_21);
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
      char* cast490 = (char*)&(_str_22);
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v518, unsigned long v519, unsigned long v520, char* v521, unsigned long v522) {
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
  char* cast532 = (char*)&(_str_20);
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_4(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v553, unsigned long v554, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v555) {
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
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r568 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(t561, t562, c563, r565, r567);
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_5(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v666, unsigned long v667, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v668, unsigned long v669, unsigned long v670) {
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
  char* cast685 = (char*)&(_str_23);
  unsigned long r686 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t683, t684, cast685);
  char* ptr687 = &(r682)[r686];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t688 = __str674;
  unsigned long t689 = __pos2675;
  unsigned long t690 = __n676;
  unsigned long r691 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t688, t689, t690);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r692 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(t678, t679, c680, ptr687, r691);
  __retval677 = r692;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t693 = __retval677;
  return t693;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6insertEmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v694, unsigned long v695, char* v696, unsigned long v697) {
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
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r709 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(t704, t705, c706, t707, t708);
  __retval703 = r709;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t710 = __retval703;
  return t710;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6insertEmPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v711, unsigned long v712, char* v713) {
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
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r725 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(t719, t720, c721, t722, r724);
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
  char* cast838 = (char*)&(_str_24);
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_6(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v885, unsigned long v886, unsigned long v887, char v888) {
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
  char* cast897 = (char*)&(_str_23);
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

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v1001, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1002) {
bb1003:
  struct std__basic_ostream_char__std__char_traits_char__* __os1004;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1005;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1006;
  __os1004 = v1001;
  __str1005 = v1002;
  struct std__basic_ostream_char__std__char_traits_char__* t1007 = __os1004;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1008 = __str1005;
  char* r1009 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t1008);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1010 = __str1005;
  unsigned long r1011 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1010);
  long cast1012 = (long)r1011;
  struct std__basic_ostream_char__std__char_traits_char__* r1013 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1007, r1009, cast1012);
  __retval1006 = r1013;
  struct std__basic_ostream_char__std__char_traits_char__* t1014 = __retval1006;
  return t1014;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1015, void* v1016) {
bb1017:
  struct std__basic_ostream_char__std__char_traits_char__* this1018;
  void* __pf1019;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1020;
  this1018 = v1015;
  __pf1019 = v1016;
  struct std__basic_ostream_char__std__char_traits_char__* t1021 = this1018;
  void* t1022 = __pf1019;
  struct std__basic_ostream_char__std__char_traits_char__* r1023 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1022)(t1021);
  __retval1020 = r1023;
  struct std__basic_ostream_char__std__char_traits_char__* t1024 = __retval1020;
  return t1024;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1025) {
bb1026:
  struct std__basic_ostream_char__std__char_traits_char__* __os1027;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1028;
  __os1027 = v1025;
  struct std__basic_ostream_char__std__char_traits_char__* t1029 = __os1027;
  struct std__basic_ostream_char__std__char_traits_char__* r1030 = std__ostream__flush(t1029);
  __retval1028 = r1030;
  struct std__basic_ostream_char__std__char_traits_char__* t1031 = __retval1028;
  return t1031;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1032) {
bb1033:
  struct std__ctype_char_* __f1034;
  struct std__ctype_char_* __retval1035;
  __f1034 = v1032;
    struct std__ctype_char_* t1036 = __f1034;
    _Bool cast1037 = (_Bool)t1036;
    _Bool u1038 = !cast1037;
    if (u1038) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t1039 = __f1034;
  __retval1035 = t1039;
  struct std__ctype_char_* t1040 = __retval1035;
  return t1040;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1041, char v1042) {
bb1043:
  struct std__ctype_char_* this1044;
  char __c1045;
  char __retval1046;
  this1044 = v1041;
  __c1045 = v1042;
  struct std__ctype_char_* t1047 = this1044;
    char t1048 = t1047->_M_widen_ok;
    _Bool cast1049 = (_Bool)t1048;
    if (cast1049) {
      char t1050 = __c1045;
      unsigned char cast1051 = (unsigned char)t1050;
      unsigned long cast1052 = (unsigned long)cast1051;
      char t1053 = t1047->_M_widen[cast1052];
      __retval1046 = t1053;
      char t1054 = __retval1046;
      return t1054;
    }
  std__ctype_char____M_widen_init___const(t1047);
  char t1055 = __c1045;
  void** v1056 = (void**)t1047;
  void* v1057 = *((void**)v1056);
  char vcall1060 = (char)__VERIFIER_virtual_call_char_char(t1047, 6, t1055);
  __retval1046 = vcall1060;
  char t1061 = __retval1046;
  return t1061;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1062, char v1063) {
bb1064:
  struct std__basic_ios_char__std__char_traits_char__* this1065;
  char __c1066;
  char __retval1067;
  this1065 = v1062;
  __c1066 = v1063;
  struct std__basic_ios_char__std__char_traits_char__* t1068 = this1065;
  struct std__ctype_char_* t1069 = t1068->_M_ctype;
  struct std__ctype_char_* r1070 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1069);
  char t1071 = __c1066;
  char r1072 = std__ctype_char___widen_char__const(r1070, t1071);
  __retval1067 = r1072;
  char t1073 = __retval1067;
  return t1073;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1074) {
bb1075:
  struct std__basic_ostream_char__std__char_traits_char__* __os1076;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1077;
  __os1076 = v1074;
  struct std__basic_ostream_char__std__char_traits_char__* t1078 = __os1076;
  struct std__basic_ostream_char__std__char_traits_char__* t1079 = __os1076;
  void** v1080 = (void**)t1079;
  void* v1081 = *((void**)v1080);
  unsigned char* cast1082 = (unsigned char*)v1081;
  long c1083 = -24;
  unsigned char* ptr1084 = &(cast1082)[c1083];
  long* cast1085 = (long*)ptr1084;
  long t1086 = *cast1085;
  unsigned char* cast1087 = (unsigned char*)t1079;
  unsigned char* ptr1088 = &(cast1087)[t1086];
  struct std__basic_ostream_char__std__char_traits_char__* cast1089 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1088;
  struct std__basic_ios_char__std__char_traits_char__* cast1090 = (struct std__basic_ios_char__std__char_traits_char__*)cast1089;
  char c1091 = 10;
  char r1092 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1090, c1091);
  struct std__basic_ostream_char__std__char_traits_char__* r1093 = std__ostream__put(t1078, r1092);
  struct std__basic_ostream_char__std__char_traits_char__* r1094 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1093);
  __retval1077 = r1094;
  struct std__basic_ostream_char__std__char_traits_char__* t1095 = __retval1077;
  return t1095;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1096) {
bb1097:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1098;
  this1098 = v1096;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1099 = this1098;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1099);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1099->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb1100:
  int __retval1101;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str1102;
  struct std__allocator_char_ ref_tmp01103;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str21104;
  struct std__allocator_char_ ref_tmp11105;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str31106;
  struct std__allocator_char_ ref_tmp21107;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ it1108;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp31109;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp01110;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp41111;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp51112;
  int c1113 = 0;
  __retval1101 = c1113;
  char* cast1114 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp01103);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str1102, cast1114, &ref_tmp01103);
  {
    std__allocator_char____allocator(&ref_tmp01103);
  }
    char* cast1115 = (char*)&(_str_1);
    std__allocator_char___allocator_2(&ref_tmp11105);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str21104, cast1115, &ref_tmp11105);
    {
      std__allocator_char____allocator(&ref_tmp11105);
    }
      char* cast1116 = (char*)&(_str_2);
      std__allocator_char___allocator_2(&ref_tmp21107);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str31106, cast1116, &ref_tmp21107);
      {
        std__allocator_char____allocator(&ref_tmp21107);
      }
        __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator_2(&it1108);
        unsigned long c1117 = 6;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1118 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_4(&str1102, c1117, &str21104);
        char* cast1119 = (char*)&(_str_3);
        _Bool r1120 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1102, cast1119);
        if (r1120) {
        } else {
          char* cast1121 = (char*)&(_str_4);
          char* c1122 = _str_5;
          unsigned int c1123 = 23;
          char* cast1124 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1121, c1122, c1123, cast1124);
        }
        unsigned long c1125 = 6;
        unsigned long c1126 = 3;
        unsigned long c1127 = 4;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1128 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_5(&str1102, c1125, &str31106, c1126, c1127);
        char* cast1129 = (char*)&(_str_6);
        _Bool r1130 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1102, cast1129);
        if (r1130) {
        } else {
          char* cast1131 = (char*)&(_str_7);
          char* c1132 = _str_5;
          unsigned int c1133 = 26;
          char* cast1134 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1131, c1132, c1133, cast1134);
        }
        unsigned long c1135 = 10;
        char* cast1136 = (char*)&(_str_8);
        unsigned long c1137 = 8;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1138 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_3(&str1102, c1135, cast1136, c1137);
        char* cast1139 = (char*)&(_str_9);
        _Bool r1140 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1102, cast1139);
        if (r1140) {
        } else {
          char* cast1141 = (char*)&(_str_10);
          char* c1142 = _str_5;
          unsigned int c1143 = 29;
          char* cast1144 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1141, c1142, c1143, cast1144);
        }
        unsigned long c1145 = 10;
        char* cast1146 = (char*)&(_str_11);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1147 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_2(&str1102, c1145, cast1146);
        char* cast1148 = (char*)&(_str_12);
        _Bool r1149 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1102, cast1148);
        if (r1149) {
        } else {
          char* cast1150 = (char*)&(_str_13);
          char* c1151 = _str_5;
          unsigned int c1152 = 32;
          char* cast1153 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1150, c1151, c1152, cast1153);
        }
        unsigned long c1154 = 15;
        unsigned long c1155 = 1;
        char c1156 = 58;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1157 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_6(&str1102, c1154, c1155, c1156);
        char* cast1158 = (char*)&(_str_14);
        _Bool r1159 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1102, cast1158);
        if (r1159) {
        } else {
          char* cast1160 = (char*)&(_str_15);
          char* c1161 = _str_5;
          unsigned int c1162 = 35;
          char* cast1163 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1160, c1161, c1162, cast1163);
        }
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1164 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(&str1102);
        ref_tmp51112 = r1164;
        long c1165 = 5;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1166 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(&ref_tmp51112, c1165);
        ref_tmp41111 = r1166;
        _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp01110, &ref_tmp41111);
        char c1167 = 44;
        struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1168 = agg_tmp01110;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r1169 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert(&str1102, t1168, c1167);
        ref_tmp31109 = r1169;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* r1170 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator_(&it1108, &ref_tmp31109);
        char* cast1171 = (char*)&(_str_16);
        _Bool r1172 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1102, cast1171);
        if (r1172) {
        } else {
          char* cast1173 = (char*)&(_str_17);
          char* c1174 = _str_5;
          unsigned int c1175 = 38;
          char* cast1176 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1173, c1174, c1175, cast1176);
        }
        struct std__basic_ostream_char__std__char_traits_char__* r1177 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str1102);
        struct std__basic_ostream_char__std__char_traits_char__* r1178 = std__ostream__operator___std__ostream_____(r1177, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        int c1179 = 0;
        __retval1101 = c1179;
        int t1180 = __retval1101;
        int ret_val1181 = t1180;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str31106);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str21104);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str1102);
        }
        return ret_val1181;
  int t1182 = __retval1101;
  return t1182;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1183) {
bb1184:
  struct std____new_allocator_char_* this1185;
  this1185 = v1183;
  struct std____new_allocator_char_* t1186 = this1185;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1187) {
bb1188:
  char* __r1189;
  char* __retval1190;
  __r1189 = v1187;
  char* t1191 = __r1189;
  __retval1190 = t1191;
  char* t1192 = __retval1190;
  return t1192;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1193) {
bb1194:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1195;
  char* __retval1196;
  this1195 = v1193;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1197 = this1195;
  char* cast1198 = (char*)&(t1197->field2._M_local_buf);
  char* r1199 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1198);
  __retval1196 = r1199;
  char* t1200 = __retval1196;
  return t1200;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1201, char* v1202, struct std__allocator_char_* v1203) {
bb1204:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1205;
  char* __dat1206;
  struct std__allocator_char_* __a1207;
  this1205 = v1201;
  __dat1206 = v1202;
  __a1207 = v1203;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1208 = this1205;
  struct std__allocator_char_* base1209 = (struct std__allocator_char_*)((char *)t1208 + 0);
  struct std__allocator_char_* t1210 = __a1207;
  std__allocator_char___allocator(base1209, t1210);
    char* t1211 = __dat1206;
    t1208->_M_p = t1211;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1212:
  _Bool __retval1213;
    _Bool c1214 = 0;
    __retval1213 = c1214;
    _Bool t1215 = __retval1213;
    return t1215;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1216, char* v1217) {
bb1218:
  char* __c11219;
  char* __c21220;
  _Bool __retval1221;
  __c11219 = v1216;
  __c21220 = v1217;
  char* t1222 = __c11219;
  char t1223 = *t1222;
  int cast1224 = (int)t1223;
  char* t1225 = __c21220;
  char t1226 = *t1225;
  int cast1227 = (int)t1226;
  _Bool c1228 = ((cast1224 == cast1227)) ? 1 : 0;
  __retval1221 = c1228;
  _Bool t1229 = __retval1221;
  return t1229;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1230) {
bb1231:
  char* __p1232;
  unsigned long __retval1233;
  unsigned long __i1234;
  __p1232 = v1230;
  unsigned long c1235 = 0;
  __i1234 = c1235;
    char ref_tmp01236;
    while (1) {
      unsigned long t1237 = __i1234;
      char* t1238 = __p1232;
      char* ptr1239 = &(t1238)[t1237];
      char c1240 = 0;
      ref_tmp01236 = c1240;
      _Bool r1241 = __gnu_cxx__char_traits_char___eq(ptr1239, &ref_tmp01236);
      _Bool u1242 = !r1241;
      if (!u1242) break;
      unsigned long t1243 = __i1234;
      unsigned long u1244 = t1243 + 1;
      __i1234 = u1244;
    }
  unsigned long t1245 = __i1234;
  __retval1233 = t1245;
  unsigned long t1246 = __retval1233;
  return t1246;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1247) {
bb1248:
  char* __s1249;
  unsigned long __retval1250;
  __s1249 = v1247;
    _Bool r1251 = std____is_constant_evaluated();
    if (r1251) {
      char* t1252 = __s1249;
      unsigned long r1253 = __gnu_cxx__char_traits_char___length(t1252);
      __retval1250 = r1253;
      unsigned long t1254 = __retval1250;
      return t1254;
    }
  char* t1255 = __s1249;
  unsigned long r1256 = strlen(t1255);
  __retval1250 = r1256;
  unsigned long t1257 = __retval1250;
  return t1257;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v1258, char* v1259, struct std__random_access_iterator_tag v1260) {
bb1261:
  char* __first1262;
  char* __last1263;
  struct std__random_access_iterator_tag unnamed1264;
  long __retval1265;
  __first1262 = v1258;
  __last1263 = v1259;
  unnamed1264 = v1260;
  char* t1266 = __last1263;
  char* t1267 = __first1262;
  long diff1268 = t1266 - t1267;
  __retval1265 = diff1268;
  long t1269 = __retval1265;
  return t1269;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v1270) {
bb1271:
  char** unnamed1272;
  struct std__random_access_iterator_tag __retval1273;
  unnamed1272 = v1270;
  struct std__random_access_iterator_tag t1274 = __retval1273;
  return t1274;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v1275, char* v1276) {
bb1277:
  char* __first1278;
  char* __last1279;
  long __retval1280;
  struct std__random_access_iterator_tag agg_tmp01281;
  __first1278 = v1275;
  __last1279 = v1276;
  char* t1282 = __first1278;
  char* t1283 = __last1279;
  struct std__random_access_iterator_tag r1284 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first1278);
  agg_tmp01281 = r1284;
  struct std__random_access_iterator_tag t1285 = agg_tmp01281;
  long r1286 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t1282, t1283, t1285);
  __retval1280 = r1286;
  long t1287 = __retval1280;
  return t1287;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1288, char* v1289) {
bb1290:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1291;
  char* __p1292;
  this1291 = v1288;
  __p1292 = v1289;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1293 = this1291;
  char* t1294 = __p1292;
  t1293->_M_dataplus._M_p = t1294;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v1295) {
bb1296:
  struct std__allocator_char_* __a1297;
  unsigned long __retval1298;
  __a1297 = v1295;
  unsigned long c1299 = -1;
  unsigned long c1300 = 1;
  unsigned long b1301 = c1299 / c1300;
  __retval1298 = b1301;
  unsigned long t1302 = __retval1298;
  return t1302;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1303) {
bb1304:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1305;
  struct std__allocator_char_* __retval1306;
  this1305 = v1303;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1307 = this1305;
  struct std__allocator_char_* base1308 = (struct std__allocator_char_*)((char *)&(t1307->_M_dataplus) + 0);
  __retval1306 = base1308;
  struct std__allocator_char_* t1309 = __retval1306;
  return t1309;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1310, unsigned long* v1311) {
bb1312:
  unsigned long* __a1313;
  unsigned long* __b1314;
  unsigned long* __retval1315;
  __a1313 = v1310;
  __b1314 = v1311;
    unsigned long* t1316 = __b1314;
    unsigned long t1317 = *t1316;
    unsigned long* t1318 = __a1313;
    unsigned long t1319 = *t1318;
    _Bool c1320 = ((t1317 < t1319)) ? 1 : 0;
    if (c1320) {
      unsigned long* t1321 = __b1314;
      __retval1315 = t1321;
      unsigned long* t1322 = __retval1315;
      return t1322;
    }
  unsigned long* t1323 = __a1313;
  __retval1315 = t1323;
  unsigned long* t1324 = __retval1315;
  return t1324;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1325) {
bb1326:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1327;
  unsigned long __retval1328;
  unsigned long __diffmax1329;
  unsigned long __allocmax1330;
  this1327 = v1325;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1331 = this1327;
  unsigned long c1332 = 9223372036854775807;
  __diffmax1329 = c1332;
  struct std__allocator_char_* r1333 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1331);
  unsigned long r1334 = std__allocator_traits_std__allocator_char_____max_size(r1333);
  __allocmax1330 = r1334;
  unsigned long* r1335 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1329, &__allocmax1330);
  unsigned long t1336 = *r1335;
  unsigned long c1337 = 1;
  unsigned long b1338 = t1336 - c1337;
  __retval1328 = b1338;
  unsigned long t1339 = __retval1328;
  return t1339;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v1340) {
bb1341:
  struct std____new_allocator_char_* this1342;
  unsigned long __retval1343;
  this1342 = v1340;
  struct std____new_allocator_char_* t1344 = this1342;
  unsigned long c1345 = 9223372036854775807;
  unsigned long c1346 = 1;
  unsigned long b1347 = c1345 / c1346;
  __retval1343 = b1347;
  unsigned long t1348 = __retval1343;
  return t1348;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v1349, unsigned long v1350, void* v1351) {
bb1352:
  struct std____new_allocator_char_* this1353;
  unsigned long __n1354;
  void* unnamed1355;
  char* __retval1356;
  this1353 = v1349;
  __n1354 = v1350;
  unnamed1355 = v1351;
  struct std____new_allocator_char_* t1357 = this1353;
    unsigned long t1358 = __n1354;
    unsigned long r1359 = std____new_allocator_char____M_max_size___const(t1357);
    _Bool c1360 = ((t1358 > r1359)) ? 1 : 0;
    if (c1360) {
        unsigned long t1361 = __n1354;
        unsigned long c1362 = -1;
        unsigned long c1363 = 1;
        unsigned long b1364 = c1362 / c1363;
        _Bool c1365 = ((t1361 > b1364)) ? 1 : 0;
        if (c1365) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1366 = 1;
    unsigned long c1367 = 16;
    _Bool c1368 = ((c1366 > c1367)) ? 1 : 0;
    if (c1368) {
      unsigned long __al1369;
      unsigned long c1370 = 1;
      __al1369 = c1370;
      unsigned long t1371 = __n1354;
      unsigned long c1372 = 1;
      unsigned long b1373 = t1371 * c1372;
      unsigned long t1374 = __al1369;
      void* r1375 = operator_new_2(b1373, t1374);
      char* cast1376 = (char*)r1375;
      __retval1356 = cast1376;
      char* t1377 = __retval1356;
      return t1377;
    }
  unsigned long t1378 = __n1354;
  unsigned long c1379 = 1;
  unsigned long b1380 = t1378 * c1379;
  void* r1381 = operator_new(b1380);
  char* cast1382 = (char*)r1381;
  __retval1356 = cast1382;
  char* t1383 = __retval1356;
  return t1383;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1384, unsigned long v1385) {
bb1386:
  struct std__allocator_char_* this1387;
  unsigned long __n1388;
  char* __retval1389;
  this1387 = v1384;
  __n1388 = v1385;
  struct std__allocator_char_* t1390 = this1387;
    _Bool r1391 = std____is_constant_evaluated();
    if (r1391) {
        unsigned long t1392 = __n1388;
        unsigned long c1393 = 1;
        unsigned long ovr1394;
        _Bool ovf1395 = __builtin_mul_overflow(t1392, c1393, &ovr1394);
        __n1388 = ovr1394;
        if (ovf1395) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1396 = __n1388;
      void* r1397 = operator_new(t1396);
      char* cast1398 = (char*)r1397;
      __retval1389 = cast1398;
      char* t1399 = __retval1389;
      return t1399;
    }
  struct std____new_allocator_char_* base1400 = (struct std____new_allocator_char_*)((char *)t1390 + 0);
  unsigned long t1401 = __n1388;
  void* c1402 = ((void*)0);
  char* r1403 = std____new_allocator_char___allocate(base1400, t1401, c1402);
  __retval1389 = r1403;
  char* t1404 = __retval1389;
  return t1404;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1405, unsigned long v1406) {
bb1407:
  struct std__allocator_char_* __a1408;
  unsigned long __n1409;
  char* __retval1410;
  __a1408 = v1405;
  __n1409 = v1406;
  struct std__allocator_char_* t1411 = __a1408;
  unsigned long t1412 = __n1409;
  char* r1413 = std__allocator_char___allocate(t1411, t1412);
  __retval1410 = r1413;
  char* t1414 = __retval1410;
  return t1414;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1415, unsigned long v1416) {
bb1417:
  struct std__allocator_char_* __a1418;
  unsigned long __n1419;
  char* __retval1420;
  char* __p1421;
  __a1418 = v1415;
  __n1419 = v1416;
  struct std__allocator_char_* t1422 = __a1418;
  unsigned long t1423 = __n1419;
  char* r1424 = std__allocator_traits_std__allocator_char_____allocate(t1422, t1423);
  __p1421 = r1424;
  char* t1425 = __p1421;
  __retval1420 = t1425;
  char* t1426 = __retval1420;
  return t1426;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1427) {
bb1428:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1429;
  struct std__allocator_char_* __retval1430;
  this1429 = v1427;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1431 = this1429;
  struct std__allocator_char_* base1432 = (struct std__allocator_char_*)((char *)&(t1431->_M_dataplus) + 0);
  __retval1430 = base1432;
  struct std__allocator_char_* t1433 = __retval1430;
  return t1433;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1434, unsigned long* v1435, unsigned long v1436) {
bb1437:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1438;
  unsigned long* __capacity1439;
  unsigned long __old_capacity1440;
  char* __retval1441;
  this1438 = v1434;
  __capacity1439 = v1435;
  __old_capacity1440 = v1436;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1442 = this1438;
    unsigned long* t1443 = __capacity1439;
    unsigned long t1444 = *t1443;
    unsigned long r1445 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1442);
    _Bool c1446 = ((t1444 > r1445)) ? 1 : 0;
    if (c1446) {
      char* cast1447 = (char*)&(_str_19);
      std____throw_length_error(cast1447);
    }
    unsigned long* t1448 = __capacity1439;
    unsigned long t1449 = *t1448;
    unsigned long t1450 = __old_capacity1440;
    _Bool c1451 = ((t1449 > t1450)) ? 1 : 0;
    _Bool ternary1452;
    if (c1451) {
      unsigned long* t1453 = __capacity1439;
      unsigned long t1454 = *t1453;
      unsigned long c1455 = 2;
      unsigned long t1456 = __old_capacity1440;
      unsigned long b1457 = c1455 * t1456;
      _Bool c1458 = ((t1454 < b1457)) ? 1 : 0;
      ternary1452 = (_Bool)c1458;
    } else {
      _Bool c1459 = 0;
      ternary1452 = (_Bool)c1459;
    }
    if (ternary1452) {
      unsigned long c1460 = 2;
      unsigned long t1461 = __old_capacity1440;
      unsigned long b1462 = c1460 * t1461;
      unsigned long* t1463 = __capacity1439;
      *t1463 = b1462;
        unsigned long* t1464 = __capacity1439;
        unsigned long t1465 = *t1464;
        unsigned long r1466 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1442);
        _Bool c1467 = ((t1465 > r1466)) ? 1 : 0;
        if (c1467) {
          unsigned long r1468 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1442);
          unsigned long* t1469 = __capacity1439;
          *t1469 = r1468;
        }
    }
  struct std__allocator_char_* r1470 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1442);
  unsigned long* t1471 = __capacity1439;
  unsigned long t1472 = *t1471;
  unsigned long c1473 = 1;
  unsigned long b1474 = t1472 + c1473;
  char* r1475 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1470, b1474);
  __retval1441 = r1475;
  char* t1476 = __retval1441;
  return t1476;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1477, unsigned long v1478) {
bb1479:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1480;
  unsigned long __capacity1481;
  this1480 = v1477;
  __capacity1481 = v1478;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1482 = this1480;
  unsigned long t1483 = __capacity1481;
  t1482->field2._M_allocated_capacity = t1483;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1484:
  _Bool __retval1485;
    _Bool c1486 = 0;
    __retval1485 = c1486;
    _Bool t1487 = __retval1485;
    return t1487;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1488) {
bb1489:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1490;
  this1490 = v1488;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1491 = this1490;
    _Bool r1492 = std__is_constant_evaluated();
    if (r1492) {
        unsigned long __i1493;
        unsigned long c1494 = 0;
        __i1493 = c1494;
        while (1) {
          unsigned long t1496 = __i1493;
          unsigned long c1497 = 15;
          _Bool c1498 = ((t1496 <= c1497)) ? 1 : 0;
          if (!c1498) break;
          char c1499 = 0;
          unsigned long t1500 = __i1493;
          t1491->field2._M_local_buf[t1500] = c1499;
        for_step1495: ;
          unsigned long t1501 = __i1493;
          unsigned long u1502 = t1501 + 1;
          __i1493 = u1502;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1503, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1504) {
bb1505:
  struct _Guard* this1506;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1507;
  this1506 = v1503;
  __s1507 = v1504;
  struct _Guard* t1508 = this1506;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1509 = __s1507;
  t1508->_M_guarded = t1509;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1510, char* v1511) {
bb1512:
  char* __location1513;
  char* __args1514;
  char* __retval1515;
  void* __loc1516;
  __location1513 = v1510;
  __args1514 = v1511;
  char* t1517 = __location1513;
  void* cast1518 = (void*)t1517;
  __loc1516 = cast1518;
    void* t1519 = __loc1516;
    char* cast1520 = (char*)t1519;
    char* t1521 = __args1514;
    char t1522 = *t1521;
    *cast1520 = t1522;
    __retval1515 = cast1520;
    char* t1523 = __retval1515;
    return t1523;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign_2(char* v1524, char* v1525) {
bb1526:
  char* __c11527;
  char* __c21528;
  __c11527 = v1524;
  __c21528 = v1525;
    _Bool r1529 = std____is_constant_evaluated();
    if (r1529) {
      char* t1530 = __c11527;
      char* t1531 = __c21528;
      char* r1532 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1530, t1531);
    } else {
      char* t1533 = __c21528;
      char t1534 = *t1533;
      char* t1535 = __c11527;
      *t1535 = t1534;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1536, char* v1537, unsigned long v1538) {
bb1539:
  char* __s11540;
  char* __s21541;
  unsigned long __n1542;
  char* __retval1543;
  __s11540 = v1536;
  __s21541 = v1537;
  __n1542 = v1538;
    unsigned long t1544 = __n1542;
    unsigned long c1545 = 0;
    _Bool c1546 = ((t1544 == c1545)) ? 1 : 0;
    if (c1546) {
      char* t1547 = __s11540;
      __retval1543 = t1547;
      char* t1548 = __retval1543;
      return t1548;
    }
    _Bool r1549 = std____is_constant_evaluated();
    if (r1549) {
        unsigned long __i1550;
        unsigned long c1551 = 0;
        __i1550 = c1551;
        while (1) {
          unsigned long t1553 = __i1550;
          unsigned long t1554 = __n1542;
          _Bool c1555 = ((t1553 < t1554)) ? 1 : 0;
          if (!c1555) break;
          char* t1556 = __s11540;
          unsigned long t1557 = __i1550;
          char* ptr1558 = &(t1556)[t1557];
          unsigned long t1559 = __i1550;
          char* t1560 = __s21541;
          char* ptr1561 = &(t1560)[t1559];
          char* r1562 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1558, ptr1561);
        for_step1552: ;
          unsigned long t1563 = __i1550;
          unsigned long u1564 = t1563 + 1;
          __i1550 = u1564;
        }
      char* t1565 = __s11540;
      __retval1543 = t1565;
      char* t1566 = __retval1543;
      return t1566;
    }
  char* t1567 = __s11540;
  void* cast1568 = (void*)t1567;
  char* t1569 = __s21541;
  void* cast1570 = (void*)t1569;
  unsigned long t1571 = __n1542;
  unsigned long c1572 = 1;
  unsigned long b1573 = t1571 * c1572;
  void* r1574 = memcpy(cast1568, cast1570, b1573);
  char* t1575 = __s11540;
  __retval1543 = t1575;
  char* t1576 = __retval1543;
  return t1576;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1577, char* v1578, unsigned long v1579) {
bb1580:
  char* __s11581;
  char* __s21582;
  unsigned long __n1583;
  char* __retval1584;
  __s11581 = v1577;
  __s21582 = v1578;
  __n1583 = v1579;
    unsigned long t1585 = __n1583;
    unsigned long c1586 = 0;
    _Bool c1587 = ((t1585 == c1586)) ? 1 : 0;
    if (c1587) {
      char* t1588 = __s11581;
      __retval1584 = t1588;
      char* t1589 = __retval1584;
      return t1589;
    }
    _Bool r1590 = std____is_constant_evaluated();
    if (r1590) {
      char* t1591 = __s11581;
      char* t1592 = __s21582;
      unsigned long t1593 = __n1583;
      char* r1594 = __gnu_cxx__char_traits_char___copy(t1591, t1592, t1593);
      __retval1584 = r1594;
      char* t1595 = __retval1584;
      return t1595;
    }
  char* t1596 = __s11581;
  void* cast1597 = (void*)t1596;
  char* t1598 = __s21582;
  void* cast1599 = (void*)t1598;
  unsigned long t1600 = __n1583;
  void* r1601 = memcpy(cast1597, cast1599, t1600);
  char* cast1602 = (char*)r1601;
  __retval1584 = cast1602;
  char* t1603 = __retval1584;
  return t1603;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1604, char* v1605, unsigned long v1606) {
bb1607:
  char* __d1608;
  char* __s1609;
  unsigned long __n1610;
  __d1608 = v1604;
  __s1609 = v1605;
  __n1610 = v1606;
    unsigned long t1611 = __n1610;
    unsigned long c1612 = 1;
    _Bool c1613 = ((t1611 == c1612)) ? 1 : 0;
    if (c1613) {
      char* t1614 = __d1608;
      char* t1615 = __s1609;
      std__char_traits_char___assign_2(t1614, t1615);
    } else {
      char* t1616 = __d1608;
      char* t1617 = __s1609;
      unsigned long t1618 = __n1610;
      char* r1619 = std__char_traits_char___copy(t1616, t1617, t1618);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1620) {
bb1621:
  char* __it1622;
  char* __retval1623;
  __it1622 = v1620;
  char* t1624 = __it1622;
  __retval1623 = t1624;
  char* t1625 = __retval1623;
  return t1625;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1626, char* v1627, char* v1628) {
bb1629:
  char* __p1630;
  char* __k11631;
  char* __k21632;
  __p1630 = v1626;
  __k11631 = v1627;
  __k21632 = v1628;
    char* t1633 = __p1630;
    char* t1634 = __k11631;
    char* r1635 = char_const__std____niter_base_char_const__(t1634);
    char* t1636 = __k21632;
    char* t1637 = __k11631;
    long diff1638 = t1636 - t1637;
    unsigned long cast1639 = (unsigned long)diff1638;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1633, r1635, cast1639);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1640) {
bb1641:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1642;
  char* __retval1643;
  this1642 = v1640;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1644 = this1642;
  char* t1645 = t1644->_M_dataplus._M_p;
  __retval1643 = t1645;
  char* t1646 = __retval1643;
  return t1646;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1647, unsigned long v1648) {
bb1649:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1650;
  unsigned long __length1651;
  this1650 = v1647;
  __length1651 = v1648;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1652 = this1650;
  unsigned long t1653 = __length1651;
  t1652->_M_string_length = t1653;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1654, unsigned long v1655) {
bb1656:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1657;
  unsigned long __n1658;
  char ref_tmp01659;
  this1657 = v1654;
  __n1658 = v1655;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1660 = this1657;
  unsigned long t1661 = __n1658;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1660, t1661);
  unsigned long t1662 = __n1658;
  char* r1663 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1660);
  char* ptr1664 = &(r1663)[t1662];
  char c1665 = 0;
  ref_tmp01659 = c1665;
  std__char_traits_char___assign_2(ptr1664, &ref_tmp01659);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1666) {
bb1667:
  struct _Guard* this1668;
  this1668 = v1666;
  struct _Guard* t1669 = this1668;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1670 = t1669->_M_guarded;
    _Bool cast1671 = (_Bool)t1670;
    if (cast1671) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1672 = t1669->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1672);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1673, char* v1674, char* v1675, struct std__forward_iterator_tag v1676) {
bb1677:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1678;
  char* __beg1679;
  char* __end1680;
  struct std__forward_iterator_tag unnamed1681;
  unsigned long __dnew1682;
  struct _Guard __guard1683;
  this1678 = v1673;
  __beg1679 = v1674;
  __end1680 = v1675;
  unnamed1681 = v1676;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1684 = this1678;
  char* t1685 = __beg1679;
  char* t1686 = __end1680;
  long r1687 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1685, t1686);
  unsigned long cast1688 = (unsigned long)r1687;
  __dnew1682 = cast1688;
    unsigned long t1689 = __dnew1682;
    unsigned long c1690 = 15;
    _Bool c1691 = ((t1689 > c1690)) ? 1 : 0;
    if (c1691) {
      unsigned long c1692 = 0;
      char* r1693 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1684, &__dnew1682, c1692);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1684, r1693);
      unsigned long t1694 = __dnew1682;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1684, t1694);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1684);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1683, t1684);
    char* r1695 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1684);
    char* t1696 = __beg1679;
    char* t1697 = __end1680;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1695, t1696, t1697);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1698 = ((void*)0);
    __guard1683._M_guarded = c1698;
    unsigned long t1699 = __dnew1682;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1684, t1699);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1683);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1700) {
bb1701:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1702;
  this1702 = v1700;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1703 = this1702;
  {
    struct std__allocator_char_* base1704 = (struct std__allocator_char_*)((char *)t1703 + 0);
    std__allocator_char____allocator(base1704);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1705, struct std____new_allocator_char_* v1706) {
bb1707:
  struct std____new_allocator_char_* this1708;
  struct std____new_allocator_char_* unnamed1709;
  this1708 = v1705;
  unnamed1709 = v1706;
  struct std____new_allocator_char_* t1710 = this1708;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1711, struct std__allocator_char_* v1712) {
bb1713:
  struct std__allocator_char_* this1714;
  struct std__allocator_char_* __a1715;
  this1714 = v1711;
  __a1715 = v1712;
  struct std__allocator_char_* t1716 = this1714;
  struct std____new_allocator_char_* base1717 = (struct std____new_allocator_char_*)((char *)t1716 + 0);
  struct std__allocator_char_* t1718 = __a1715;
  struct std____new_allocator_char_* base1719 = (struct std____new_allocator_char_*)((char *)t1718 + 0);
  std____new_allocator_char_____new_allocator(base1717, base1719);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1720) {
bb1721:
  char* __r1722;
  char* __retval1723;
  __r1722 = v1720;
  char* t1724 = __r1722;
  __retval1723 = t1724;
  char* t1725 = __retval1723;
  return t1725;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1726) {
bb1727:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1728;
  char* __retval1729;
  this1728 = v1726;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1730 = this1728;
  char* cast1731 = (char*)&(t1730->field2._M_local_buf);
  char* r1732 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1731);
  __retval1729 = r1732;
  char* t1733 = __retval1729;
  return t1733;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1734) {
bb1735:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1736;
  _Bool __retval1737;
  this1736 = v1734;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1738 = this1736;
    char* r1739 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1738);
    char* r1740 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1738);
    _Bool c1741 = ((r1739 == r1740)) ? 1 : 0;
    if (c1741) {
        unsigned long t1742 = t1738->_M_string_length;
        unsigned long c1743 = 15;
        _Bool c1744 = ((t1742 > c1743)) ? 1 : 0;
        if (c1744) {
          __builtin_unreachable();
        }
      _Bool c1745 = 1;
      __retval1737 = c1745;
      _Bool t1746 = __retval1737;
      return t1746;
    }
  _Bool c1747 = 0;
  __retval1737 = c1747;
  _Bool t1748 = __retval1737;
  return t1748;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1749, char* v1750, unsigned long v1751) {
bb1752:
  struct std____new_allocator_char_* this1753;
  char* __p1754;
  unsigned long __n1755;
  this1753 = v1749;
  __p1754 = v1750;
  __n1755 = v1751;
  struct std____new_allocator_char_* t1756 = this1753;
    unsigned long c1757 = 1;
    unsigned long c1758 = 16;
    _Bool c1759 = ((c1757 > c1758)) ? 1 : 0;
    if (c1759) {
      char* t1760 = __p1754;
      void* cast1761 = (void*)t1760;
      unsigned long t1762 = __n1755;
      unsigned long c1763 = 1;
      unsigned long b1764 = t1762 * c1763;
      unsigned long c1765 = 1;
      operator_delete_3(cast1761, b1764, c1765);
      return;
    }
  char* t1766 = __p1754;
  void* cast1767 = (void*)t1766;
  unsigned long t1768 = __n1755;
  unsigned long c1769 = 1;
  unsigned long b1770 = t1768 * c1769;
  operator_delete_2(cast1767, b1770);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1771, char* v1772, unsigned long v1773) {
bb1774:
  struct std__allocator_char_* this1775;
  char* __p1776;
  unsigned long __n1777;
  this1775 = v1771;
  __p1776 = v1772;
  __n1777 = v1773;
  struct std__allocator_char_* t1778 = this1775;
    _Bool r1779 = std____is_constant_evaluated();
    if (r1779) {
      char* t1780 = __p1776;
      void* cast1781 = (void*)t1780;
      operator_delete(cast1781);
      return;
    }
  struct std____new_allocator_char_* base1782 = (struct std____new_allocator_char_*)((char *)t1778 + 0);
  char* t1783 = __p1776;
  unsigned long t1784 = __n1777;
  std____new_allocator_char___deallocate(base1782, t1783, t1784);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1785, char* v1786, unsigned long v1787) {
bb1788:
  struct std__allocator_char_* __a1789;
  char* __p1790;
  unsigned long __n1791;
  __a1789 = v1785;
  __p1790 = v1786;
  __n1791 = v1787;
  struct std__allocator_char_* t1792 = __a1789;
  char* t1793 = __p1790;
  unsigned long t1794 = __n1791;
  std__allocator_char___deallocate(t1792, t1793, t1794);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1795, unsigned long v1796) {
bb1797:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1798;
  unsigned long __size1799;
  this1798 = v1795;
  __size1799 = v1796;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1800 = this1798;
  struct std__allocator_char_* r1801 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1800);
  char* r1802 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1800);
  unsigned long t1803 = __size1799;
  unsigned long c1804 = 1;
  unsigned long b1805 = t1803 + c1804;
  std__allocator_traits_std__allocator_char_____deallocate(r1801, r1802, b1805);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1806) {
bb1807:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1808;
  this1808 = v1806;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1809 = this1808;
    _Bool r1810 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1809);
    _Bool u1811 = !r1810;
    if (u1811) {
      unsigned long t1812 = t1809->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1809, t1812);
    }
  return;
}

