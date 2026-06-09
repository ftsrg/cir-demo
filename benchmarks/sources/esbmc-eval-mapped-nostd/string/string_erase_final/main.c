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
char _str_2[28] = "str == \"This is an phrase.\"";
char _str_3[113] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_erase_final/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[18] = "This is a phrase.";
char _str_5[27] = "str == \"This is a phrase.\"";
char _str_6[13] = "This phrase.";
char _str_7[22] = "str == \"This phrase.\"";
char _str_8[50] = "basic_string: construction from null is not valid";
char _str_9[24] = "basic_string::_M_create";
char _str_10[20] = "basic_string::erase";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
char _str_11[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____erase_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
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
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const_2(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, long p1);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator_(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
char** __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);
char** __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);
long decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____erase(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1);
void _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
_Bool _ZN9__gnu_cxxeqIPKcPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEbRKNS_17__normal_iteratorIT_T1_EERKNSA_IT0_SC_EEQrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
long __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____erase_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p2);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, long p1);
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
        char* cast20 = (char*)&(_str_8);
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
      char* cast61 = (char*)&(_str_11);
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____erase_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v240, unsigned long v241, unsigned long v242) {
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
  char* cast250 = (char*)&(_str_10);
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
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const_2(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v471, long v472) {
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

// function: _ZN9__gnu_cxxeqIPKcPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEbRKNS_17__normal_iteratorIT_T1_EERKNSA_IT0_SC_EEQrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPKcPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEbRKNS_17__normal_iteratorIT_T1_EERKNSA_IT0_SC_EEQrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v547, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v548) {
bb549:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __lhs550;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __rhs551;
  _Bool __retval552;
  __lhs550 = v547;
  __rhs551 = v548;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t553 = __lhs550;
  char** r554 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t553);
  char* t555 = *r554;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t556 = __rhs551;
  char** r557 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t556);
  char* t558 = *r557;
  _Bool c559 = ((t555 == t558)) ? 1 : 0;
  __retval552 = c559;
  _Bool t560 = __retval552;
  return t560;
}

// function: _ZN9__gnu_cxxmiIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKSC_SF_
long __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v561, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v562) {
bb563:
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __lhs564;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __rhs565;
  long __retval566;
  __lhs564 = v561;
  __rhs565 = v562;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t567 = __lhs564;
  char** r568 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t567);
  char* t569 = *r568;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t570 = __rhs565;
  char** r571 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t570);
  char* t572 = *r571;
  long diff573 = t569 - t572;
  __retval566 = diff573;
  long t574 = __retval566;
  return t574;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5eraseEN9__gnu_cxx17__normal_iteratorIPKcS4_EES9_
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____erase_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v575, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v576, struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v577) {
bb578:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this579;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __first580;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __last581;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval582;
  unsigned long __pos583;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp0584;
  char* ref_tmp2585;
  this579 = v575;
  __first580 = v576;
  __last581 = v577;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t586 = this579;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r587 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(t586);
  ref_tmp0584 = r587;
  long r588 = decltype_____parm_1__base________parm_2__base________gnu_cxx__operator__char_const___char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__first580, &ref_tmp0584);
  unsigned long cast589 = (unsigned long)r588;
  __pos583 = cast589;
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp1590;
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r591 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(t586);
    ref_tmp1590 = r591;
    _Bool r592 = _ZN9__gnu_cxxeqIPKcPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEbRKNS_17__normal_iteratorIT_T1_EERKNSA_IT0_SC_EEQrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__last581, &ref_tmp1590);
    if (r592) {
      unsigned long t593 = __pos583;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t586, t593);
    } else {
      unsigned long t594 = __pos583;
      long r595 = __gnu_cxx____normal_iterator_char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char_const___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__last581, &__first580);
      unsigned long cast596 = (unsigned long)r595;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_erase(t586, t594, cast596);
    }
  char* r597 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t586);
  unsigned long t598 = __pos583;
  char* ptr599 = &(r597)[t598];
  ref_tmp2585 = ptr599;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval582, &ref_tmp2585);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t600 = __retval582;
  return t600;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE3endEv
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v601) {
bb602:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this603;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval604;
  char* ref_tmp0605;
  this603 = v601;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t606 = this603;
  char* r607 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t606);
  unsigned long r608 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t606);
  char* ptr609 = &(r607)[r608];
  ref_tmp0605 = ptr609;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval604, &ref_tmp0605);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t610 = __retval604;
  return t610;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEmiEl
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v611, long v612) {
bb613:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this614;
  long __n615;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval616;
  char* ref_tmp0617;
  this614 = v611;
  __n615 = v612;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t618 = this614;
  char* t619 = t618->_M_current;
  long t620 = __n615;
  long u621 = -t620;
  char* ptr622 = &(t619)[u621];
  ref_tmp0617 = ptr622;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval616, &ref_tmp0617);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t623 = __retval616;
  return t623;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v624) {
bb625:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this626;
  this626 = v624;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t627 = this626;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t627);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t627->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb628:
  int __retval629;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str630;
  struct std__allocator_char_ ref_tmp0631;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ it632;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp1633;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp2634;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp0635;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp1636;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp2637;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp3638;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp4639;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp3640;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp5641;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp6642;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp4643;
  int c644 = 0;
  __retval629 = c644;
  char* cast645 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0631);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str630, cast645, &ref_tmp0631);
  {
    std__allocator_char____allocator(&ref_tmp0631);
  }
    __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator_2(&it632);
    unsigned long c646 = 10;
    unsigned long c647 = 8;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r648 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____erase_3(&str630, c646, c647);
    char* cast649 = (char*)&(_str_1);
    _Bool r650 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str630, cast649);
    if (r650) {
    } else {
      char* cast651 = (char*)&(_str_2);
      char* c652 = _str_3;
      unsigned int c653 = 21;
      char* cast654 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast651, c652, c653, cast654);
    }
    struct std__basic_ostream_char__std__char_traits_char__* r655 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str630);
    struct std__basic_ostream_char__std__char_traits_char__* r656 = std__ostream__operator___std__ostream_____(r655, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r657 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(&str630);
    ref_tmp2634 = r657;
    long c658 = 9;
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r659 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const_2(&ref_tmp2634, c658);
    ref_tmp1633 = r659;
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* r660 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator_(&it632, &ref_tmp1633);
    _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp0635, &it632);
    struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t661 = agg_tmp0635;
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r662 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____erase(&str630, t661);
    agg_tmp1636 = r662;
    char* cast663 = (char*)&(_str_4);
    _Bool r664 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str630, cast663);
    if (r664) {
    } else {
      char* cast665 = (char*)&(_str_5);
      char* c666 = _str_3;
      unsigned int c667 = 26;
      char* cast668 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast665, c666, c667, cast668);
    }
    struct std__basic_ostream_char__std__char_traits_char__* r669 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str630);
    struct std__basic_ostream_char__std__char_traits_char__* r670 = std__ostream__operator___std__ostream_____(r669, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r671 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(&str630);
    ref_tmp4639 = r671;
    long c672 = 5;
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r673 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const_2(&ref_tmp4639, c672);
    ref_tmp3638 = r673;
    _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp2637, &ref_tmp3638);
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r674 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____end(&str630);
    ref_tmp6642 = r674;
    long c675 = 7;
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r676 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(&ref_tmp6642, c675);
    ref_tmp5641 = r676;
    _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE(&agg_tmp3640, &ref_tmp5641);
    struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t677 = agg_tmp2637;
    struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t678 = agg_tmp3640;
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r679 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____erase_2(&str630, t677, t678);
    agg_tmp4643 = r679;
    char* cast680 = (char*)&(_str_6);
    _Bool r681 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str630, cast680);
    if (r681) {
    } else {
      char* cast682 = (char*)&(_str_7);
      char* c683 = _str_3;
      unsigned int c684 = 30;
      char* cast685 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast682, c683, c684, cast685);
    }
    struct std__basic_ostream_char__std__char_traits_char__* r686 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str630);
    struct std__basic_ostream_char__std__char_traits_char__* r687 = std__ostream__operator___std__ostream_____(r686, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c688 = 0;
    __retval629 = c688;
    int t689 = __retval629;
    int ret_val690 = t689;
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str630);
    }
    return ret_val690;
  int t691 = __retval629;
  return t691;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v692) {
bb693:
  struct std____new_allocator_char_* this694;
  this694 = v692;
  struct std____new_allocator_char_* t695 = this694;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v696) {
bb697:
  char* __r698;
  char* __retval699;
  __r698 = v696;
  char* t700 = __r698;
  __retval699 = t700;
  char* t701 = __retval699;
  return t701;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v702) {
bb703:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this704;
  char* __retval705;
  this704 = v702;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t706 = this704;
  char* cast707 = (char*)&(t706->field2._M_local_buf);
  char* r708 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast707);
  __retval705 = r708;
  char* t709 = __retval705;
  return t709;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v710, char* v711, struct std__allocator_char_* v712) {
bb713:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this714;
  char* __dat715;
  struct std__allocator_char_* __a716;
  this714 = v710;
  __dat715 = v711;
  __a716 = v712;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t717 = this714;
  struct std__allocator_char_* base718 = (struct std__allocator_char_*)((char *)t717 + 0);
  struct std__allocator_char_* t719 = __a716;
  std__allocator_char___allocator(base718, t719);
    char* t720 = __dat715;
    t717->_M_p = t720;
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

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v725, char* v726) {
bb727:
  char* __c1728;
  char* __c2729;
  _Bool __retval730;
  __c1728 = v725;
  __c2729 = v726;
  char* t731 = __c1728;
  char t732 = *t731;
  int cast733 = (int)t732;
  char* t734 = __c2729;
  char t735 = *t734;
  int cast736 = (int)t735;
  _Bool c737 = ((cast733 == cast736)) ? 1 : 0;
  __retval730 = c737;
  _Bool t738 = __retval730;
  return t738;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v739) {
bb740:
  char* __p741;
  unsigned long __retval742;
  unsigned long __i743;
  __p741 = v739;
  unsigned long c744 = 0;
  __i743 = c744;
    char ref_tmp0745;
    while (1) {
      unsigned long t746 = __i743;
      char* t747 = __p741;
      char* ptr748 = &(t747)[t746];
      char c749 = 0;
      ref_tmp0745 = c749;
      _Bool r750 = __gnu_cxx__char_traits_char___eq(ptr748, &ref_tmp0745);
      _Bool u751 = !r750;
      if (!u751) break;
      unsigned long t752 = __i743;
      unsigned long u753 = t752 + 1;
      __i743 = u753;
    }
  unsigned long t754 = __i743;
  __retval742 = t754;
  unsigned long t755 = __retval742;
  return t755;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v756) {
bb757:
  char* __s758;
  unsigned long __retval759;
  __s758 = v756;
    _Bool r760 = std____is_constant_evaluated();
    if (r760) {
      char* t761 = __s758;
      unsigned long r762 = __gnu_cxx__char_traits_char___length(t761);
      __retval759 = r762;
      unsigned long t763 = __retval759;
      return t763;
    }
  char* t764 = __s758;
  unsigned long r765 = strlen(t764);
  __retval759 = r765;
  unsigned long t766 = __retval759;
  return t766;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v767, char* v768, struct std__random_access_iterator_tag v769) {
bb770:
  char* __first771;
  char* __last772;
  struct std__random_access_iterator_tag unnamed773;
  long __retval774;
  __first771 = v767;
  __last772 = v768;
  unnamed773 = v769;
  char* t775 = __last772;
  char* t776 = __first771;
  long diff777 = t775 - t776;
  __retval774 = diff777;
  long t778 = __retval774;
  return t778;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v779) {
bb780:
  char** unnamed781;
  struct std__random_access_iterator_tag __retval782;
  unnamed781 = v779;
  struct std__random_access_iterator_tag t783 = __retval782;
  return t783;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v784, char* v785) {
bb786:
  char* __first787;
  char* __last788;
  long __retval789;
  struct std__random_access_iterator_tag agg_tmp0790;
  __first787 = v784;
  __last788 = v785;
  char* t791 = __first787;
  char* t792 = __last788;
  struct std__random_access_iterator_tag r793 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first787);
  agg_tmp0790 = r793;
  struct std__random_access_iterator_tag t794 = agg_tmp0790;
  long r795 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t791, t792, t794);
  __retval789 = r795;
  long t796 = __retval789;
  return t796;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v797, char* v798) {
bb799:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this800;
  char* __p801;
  this800 = v797;
  __p801 = v798;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t802 = this800;
  char* t803 = __p801;
  t802->_M_dataplus._M_p = t803;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v804) {
bb805:
  struct std__allocator_char_* __a806;
  unsigned long __retval807;
  __a806 = v804;
  unsigned long c808 = -1;
  unsigned long c809 = 1;
  unsigned long b810 = c808 / c809;
  __retval807 = b810;
  unsigned long t811 = __retval807;
  return t811;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v812) {
bb813:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this814;
  struct std__allocator_char_* __retval815;
  this814 = v812;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t816 = this814;
  struct std__allocator_char_* base817 = (struct std__allocator_char_*)((char *)&(t816->_M_dataplus) + 0);
  __retval815 = base817;
  struct std__allocator_char_* t818 = __retval815;
  return t818;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v819, unsigned long* v820) {
bb821:
  unsigned long* __a822;
  unsigned long* __b823;
  unsigned long* __retval824;
  __a822 = v819;
  __b823 = v820;
    unsigned long* t825 = __b823;
    unsigned long t826 = *t825;
    unsigned long* t827 = __a822;
    unsigned long t828 = *t827;
    _Bool c829 = ((t826 < t828)) ? 1 : 0;
    if (c829) {
      unsigned long* t830 = __b823;
      __retval824 = t830;
      unsigned long* t831 = __retval824;
      return t831;
    }
  unsigned long* t832 = __a822;
  __retval824 = t832;
  unsigned long* t833 = __retval824;
  return t833;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v834) {
bb835:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this836;
  unsigned long __retval837;
  unsigned long __diffmax838;
  unsigned long __allocmax839;
  this836 = v834;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t840 = this836;
  unsigned long c841 = 9223372036854775807;
  __diffmax838 = c841;
  struct std__allocator_char_* r842 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t840);
  unsigned long r843 = std__allocator_traits_std__allocator_char_____max_size(r842);
  __allocmax839 = r843;
  unsigned long* r844 = unsigned_long_const__std__min_unsigned_long_(&__diffmax838, &__allocmax839);
  unsigned long t845 = *r844;
  unsigned long c846 = 1;
  unsigned long b847 = t845 - c846;
  __retval837 = b847;
  unsigned long t848 = __retval837;
  return t848;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v849) {
bb850:
  struct std____new_allocator_char_* this851;
  unsigned long __retval852;
  this851 = v849;
  struct std____new_allocator_char_* t853 = this851;
  unsigned long c854 = 9223372036854775807;
  unsigned long c855 = 1;
  unsigned long b856 = c854 / c855;
  __retval852 = b856;
  unsigned long t857 = __retval852;
  return t857;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v858, unsigned long v859, void* v860) {
bb861:
  struct std____new_allocator_char_* this862;
  unsigned long __n863;
  void* unnamed864;
  char* __retval865;
  this862 = v858;
  __n863 = v859;
  unnamed864 = v860;
  struct std____new_allocator_char_* t866 = this862;
    unsigned long t867 = __n863;
    unsigned long r868 = std____new_allocator_char____M_max_size___const(t866);
    _Bool c869 = ((t867 > r868)) ? 1 : 0;
    if (c869) {
        unsigned long t870 = __n863;
        unsigned long c871 = -1;
        unsigned long c872 = 1;
        unsigned long b873 = c871 / c872;
        _Bool c874 = ((t870 > b873)) ? 1 : 0;
        if (c874) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c875 = 1;
    unsigned long c876 = 16;
    _Bool c877 = ((c875 > c876)) ? 1 : 0;
    if (c877) {
      unsigned long __al878;
      unsigned long c879 = 1;
      __al878 = c879;
      unsigned long t880 = __n863;
      unsigned long c881 = 1;
      unsigned long b882 = t880 * c881;
      unsigned long t883 = __al878;
      void* r884 = operator_new_2(b882, t883);
      char* cast885 = (char*)r884;
      __retval865 = cast885;
      char* t886 = __retval865;
      return t886;
    }
  unsigned long t887 = __n863;
  unsigned long c888 = 1;
  unsigned long b889 = t887 * c888;
  void* r890 = operator_new(b889);
  char* cast891 = (char*)r890;
  __retval865 = cast891;
  char* t892 = __retval865;
  return t892;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v893, unsigned long v894) {
bb895:
  struct std__allocator_char_* this896;
  unsigned long __n897;
  char* __retval898;
  this896 = v893;
  __n897 = v894;
  struct std__allocator_char_* t899 = this896;
    _Bool r900 = std____is_constant_evaluated();
    if (r900) {
        unsigned long t901 = __n897;
        unsigned long c902 = 1;
        unsigned long ovr903;
        _Bool ovf904 = __builtin_mul_overflow(t901, c902, &ovr903);
        __n897 = ovr903;
        if (ovf904) {
          std____throw_bad_array_new_length();
        }
      unsigned long t905 = __n897;
      void* r906 = operator_new(t905);
      char* cast907 = (char*)r906;
      __retval898 = cast907;
      char* t908 = __retval898;
      return t908;
    }
  struct std____new_allocator_char_* base909 = (struct std____new_allocator_char_*)((char *)t899 + 0);
  unsigned long t910 = __n897;
  void* c911 = ((void*)0);
  char* r912 = std____new_allocator_char___allocate(base909, t910, c911);
  __retval898 = r912;
  char* t913 = __retval898;
  return t913;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v914, unsigned long v915) {
bb916:
  struct std__allocator_char_* __a917;
  unsigned long __n918;
  char* __retval919;
  __a917 = v914;
  __n918 = v915;
  struct std__allocator_char_* t920 = __a917;
  unsigned long t921 = __n918;
  char* r922 = std__allocator_char___allocate(t920, t921);
  __retval919 = r922;
  char* t923 = __retval919;
  return t923;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v924, unsigned long v925) {
bb926:
  struct std__allocator_char_* __a927;
  unsigned long __n928;
  char* __retval929;
  char* __p930;
  __a927 = v924;
  __n928 = v925;
  struct std__allocator_char_* t931 = __a927;
  unsigned long t932 = __n928;
  char* r933 = std__allocator_traits_std__allocator_char_____allocate(t931, t932);
  __p930 = r933;
  char* t934 = __p930;
  __retval929 = t934;
  char* t935 = __retval929;
  return t935;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v936) {
bb937:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this938;
  struct std__allocator_char_* __retval939;
  this938 = v936;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t940 = this938;
  struct std__allocator_char_* base941 = (struct std__allocator_char_*)((char *)&(t940->_M_dataplus) + 0);
  __retval939 = base941;
  struct std__allocator_char_* t942 = __retval939;
  return t942;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v943, unsigned long* v944, unsigned long v945) {
bb946:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this947;
  unsigned long* __capacity948;
  unsigned long __old_capacity949;
  char* __retval950;
  this947 = v943;
  __capacity948 = v944;
  __old_capacity949 = v945;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t951 = this947;
    unsigned long* t952 = __capacity948;
    unsigned long t953 = *t952;
    unsigned long r954 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t951);
    _Bool c955 = ((t953 > r954)) ? 1 : 0;
    if (c955) {
      char* cast956 = (char*)&(_str_9);
      std____throw_length_error(cast956);
    }
    unsigned long* t957 = __capacity948;
    unsigned long t958 = *t957;
    unsigned long t959 = __old_capacity949;
    _Bool c960 = ((t958 > t959)) ? 1 : 0;
    _Bool ternary961;
    if (c960) {
      unsigned long* t962 = __capacity948;
      unsigned long t963 = *t962;
      unsigned long c964 = 2;
      unsigned long t965 = __old_capacity949;
      unsigned long b966 = c964 * t965;
      _Bool c967 = ((t963 < b966)) ? 1 : 0;
      ternary961 = (_Bool)c967;
    } else {
      _Bool c968 = 0;
      ternary961 = (_Bool)c968;
    }
    if (ternary961) {
      unsigned long c969 = 2;
      unsigned long t970 = __old_capacity949;
      unsigned long b971 = c969 * t970;
      unsigned long* t972 = __capacity948;
      *t972 = b971;
        unsigned long* t973 = __capacity948;
        unsigned long t974 = *t973;
        unsigned long r975 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t951);
        _Bool c976 = ((t974 > r975)) ? 1 : 0;
        if (c976) {
          unsigned long r977 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t951);
          unsigned long* t978 = __capacity948;
          *t978 = r977;
        }
    }
  struct std__allocator_char_* r979 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t951);
  unsigned long* t980 = __capacity948;
  unsigned long t981 = *t980;
  unsigned long c982 = 1;
  unsigned long b983 = t981 + c982;
  char* r984 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r979, b983);
  __retval950 = r984;
  char* t985 = __retval950;
  return t985;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v986, unsigned long v987) {
bb988:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this989;
  unsigned long __capacity990;
  this989 = v986;
  __capacity990 = v987;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t991 = this989;
  unsigned long t992 = __capacity990;
  t991->field2._M_allocated_capacity = t992;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb993:
  _Bool __retval994;
    _Bool c995 = 0;
    __retval994 = c995;
    _Bool t996 = __retval994;
    return t996;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v997) {
bb998:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this999;
  this999 = v997;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1000 = this999;
    _Bool r1001 = std__is_constant_evaluated();
    if (r1001) {
        unsigned long __i1002;
        unsigned long c1003 = 0;
        __i1002 = c1003;
        while (1) {
          unsigned long t1005 = __i1002;
          unsigned long c1006 = 15;
          _Bool c1007 = ((t1005 <= c1006)) ? 1 : 0;
          if (!c1007) break;
          char c1008 = 0;
          unsigned long t1009 = __i1002;
          t1000->field2._M_local_buf[t1009] = c1008;
        for_step1004: ;
          unsigned long t1010 = __i1002;
          unsigned long u1011 = t1010 + 1;
          __i1002 = u1011;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1012, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1013) {
bb1014:
  struct _Guard* this1015;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1016;
  this1015 = v1012;
  __s1016 = v1013;
  struct _Guard* t1017 = this1015;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1018 = __s1016;
  t1017->_M_guarded = t1018;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1019, char* v1020) {
bb1021:
  char* __location1022;
  char* __args1023;
  char* __retval1024;
  void* __loc1025;
  __location1022 = v1019;
  __args1023 = v1020;
  char* t1026 = __location1022;
  void* cast1027 = (void*)t1026;
  __loc1025 = cast1027;
    void* t1028 = __loc1025;
    char* cast1029 = (char*)t1028;
    char* t1030 = __args1023;
    char t1031 = *t1030;
    *cast1029 = t1031;
    __retval1024 = cast1029;
    char* t1032 = __retval1024;
    return t1032;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1033, char* v1034) {
bb1035:
  char* __c11036;
  char* __c21037;
  __c11036 = v1033;
  __c21037 = v1034;
    _Bool r1038 = std____is_constant_evaluated();
    if (r1038) {
      char* t1039 = __c11036;
      char* t1040 = __c21037;
      char* r1041 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1039, t1040);
    } else {
      char* t1042 = __c21037;
      char t1043 = *t1042;
      char* t1044 = __c11036;
      *t1044 = t1043;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1045, char* v1046, unsigned long v1047) {
bb1048:
  char* __s11049;
  char* __s21050;
  unsigned long __n1051;
  char* __retval1052;
  __s11049 = v1045;
  __s21050 = v1046;
  __n1051 = v1047;
    unsigned long t1053 = __n1051;
    unsigned long c1054 = 0;
    _Bool c1055 = ((t1053 == c1054)) ? 1 : 0;
    if (c1055) {
      char* t1056 = __s11049;
      __retval1052 = t1056;
      char* t1057 = __retval1052;
      return t1057;
    }
    _Bool r1058 = std____is_constant_evaluated();
    if (r1058) {
        unsigned long __i1059;
        unsigned long c1060 = 0;
        __i1059 = c1060;
        while (1) {
          unsigned long t1062 = __i1059;
          unsigned long t1063 = __n1051;
          _Bool c1064 = ((t1062 < t1063)) ? 1 : 0;
          if (!c1064) break;
          char* t1065 = __s11049;
          unsigned long t1066 = __i1059;
          char* ptr1067 = &(t1065)[t1066];
          unsigned long t1068 = __i1059;
          char* t1069 = __s21050;
          char* ptr1070 = &(t1069)[t1068];
          char* r1071 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1067, ptr1070);
        for_step1061: ;
          unsigned long t1072 = __i1059;
          unsigned long u1073 = t1072 + 1;
          __i1059 = u1073;
        }
      char* t1074 = __s11049;
      __retval1052 = t1074;
      char* t1075 = __retval1052;
      return t1075;
    }
  char* t1076 = __s11049;
  void* cast1077 = (void*)t1076;
  char* t1078 = __s21050;
  void* cast1079 = (void*)t1078;
  unsigned long t1080 = __n1051;
  unsigned long c1081 = 1;
  unsigned long b1082 = t1080 * c1081;
  void* r1083 = memcpy(cast1077, cast1079, b1082);
  char* t1084 = __s11049;
  __retval1052 = t1084;
  char* t1085 = __retval1052;
  return t1085;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1086, char* v1087, unsigned long v1088) {
bb1089:
  char* __s11090;
  char* __s21091;
  unsigned long __n1092;
  char* __retval1093;
  __s11090 = v1086;
  __s21091 = v1087;
  __n1092 = v1088;
    unsigned long t1094 = __n1092;
    unsigned long c1095 = 0;
    _Bool c1096 = ((t1094 == c1095)) ? 1 : 0;
    if (c1096) {
      char* t1097 = __s11090;
      __retval1093 = t1097;
      char* t1098 = __retval1093;
      return t1098;
    }
    _Bool r1099 = std____is_constant_evaluated();
    if (r1099) {
      char* t1100 = __s11090;
      char* t1101 = __s21091;
      unsigned long t1102 = __n1092;
      char* r1103 = __gnu_cxx__char_traits_char___copy(t1100, t1101, t1102);
      __retval1093 = r1103;
      char* t1104 = __retval1093;
      return t1104;
    }
  char* t1105 = __s11090;
  void* cast1106 = (void*)t1105;
  char* t1107 = __s21091;
  void* cast1108 = (void*)t1107;
  unsigned long t1109 = __n1092;
  void* r1110 = memcpy(cast1106, cast1108, t1109);
  char* cast1111 = (char*)r1110;
  __retval1093 = cast1111;
  char* t1112 = __retval1093;
  return t1112;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1113, char* v1114, unsigned long v1115) {
bb1116:
  char* __d1117;
  char* __s1118;
  unsigned long __n1119;
  __d1117 = v1113;
  __s1118 = v1114;
  __n1119 = v1115;
    unsigned long t1120 = __n1119;
    unsigned long c1121 = 1;
    _Bool c1122 = ((t1120 == c1121)) ? 1 : 0;
    if (c1122) {
      char* t1123 = __d1117;
      char* t1124 = __s1118;
      std__char_traits_char___assign(t1123, t1124);
    } else {
      char* t1125 = __d1117;
      char* t1126 = __s1118;
      unsigned long t1127 = __n1119;
      char* r1128 = std__char_traits_char___copy(t1125, t1126, t1127);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1129) {
bb1130:
  char* __it1131;
  char* __retval1132;
  __it1131 = v1129;
  char* t1133 = __it1131;
  __retval1132 = t1133;
  char* t1134 = __retval1132;
  return t1134;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1135, char* v1136, char* v1137) {
bb1138:
  char* __p1139;
  char* __k11140;
  char* __k21141;
  __p1139 = v1135;
  __k11140 = v1136;
  __k21141 = v1137;
    char* t1142 = __p1139;
    char* t1143 = __k11140;
    char* r1144 = char_const__std____niter_base_char_const__(t1143);
    char* t1145 = __k21141;
    char* t1146 = __k11140;
    long diff1147 = t1145 - t1146;
    unsigned long cast1148 = (unsigned long)diff1147;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1142, r1144, cast1148);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1149) {
bb1150:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1151;
  char* __retval1152;
  this1151 = v1149;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1153 = this1151;
  char* t1154 = t1153->_M_dataplus._M_p;
  __retval1152 = t1154;
  char* t1155 = __retval1152;
  return t1155;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1156, unsigned long v1157) {
bb1158:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1159;
  unsigned long __length1160;
  this1159 = v1156;
  __length1160 = v1157;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1161 = this1159;
  unsigned long t1162 = __length1160;
  t1161->_M_string_length = t1162;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1163, unsigned long v1164) {
bb1165:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1166;
  unsigned long __n1167;
  char ref_tmp01168;
  this1166 = v1163;
  __n1167 = v1164;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1169 = this1166;
  unsigned long t1170 = __n1167;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1169, t1170);
  unsigned long t1171 = __n1167;
  char* r1172 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1169);
  char* ptr1173 = &(r1172)[t1171];
  char c1174 = 0;
  ref_tmp01168 = c1174;
  std__char_traits_char___assign(ptr1173, &ref_tmp01168);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1175) {
bb1176:
  struct _Guard* this1177;
  this1177 = v1175;
  struct _Guard* t1178 = this1177;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1179 = t1178->_M_guarded;
    _Bool cast1180 = (_Bool)t1179;
    if (cast1180) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1181 = t1178->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1181);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1182, char* v1183, char* v1184, struct std__forward_iterator_tag v1185) {
bb1186:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1187;
  char* __beg1188;
  char* __end1189;
  struct std__forward_iterator_tag unnamed1190;
  unsigned long __dnew1191;
  struct _Guard __guard1192;
  this1187 = v1182;
  __beg1188 = v1183;
  __end1189 = v1184;
  unnamed1190 = v1185;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1193 = this1187;
  char* t1194 = __beg1188;
  char* t1195 = __end1189;
  long r1196 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1194, t1195);
  unsigned long cast1197 = (unsigned long)r1196;
  __dnew1191 = cast1197;
    unsigned long t1198 = __dnew1191;
    unsigned long c1199 = 15;
    _Bool c1200 = ((t1198 > c1199)) ? 1 : 0;
    if (c1200) {
      unsigned long c1201 = 0;
      char* r1202 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1193, &__dnew1191, c1201);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1193, r1202);
      unsigned long t1203 = __dnew1191;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1193, t1203);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1193);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1192, t1193);
    char* r1204 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1193);
    char* t1205 = __beg1188;
    char* t1206 = __end1189;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1204, t1205, t1206);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1207 = ((void*)0);
    __guard1192._M_guarded = c1207;
    unsigned long t1208 = __dnew1191;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1193, t1208);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1192);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1209) {
bb1210:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1211;
  this1211 = v1209;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1212 = this1211;
  {
    struct std__allocator_char_* base1213 = (struct std__allocator_char_*)((char *)t1212 + 0);
    std__allocator_char____allocator(base1213);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1214, struct std____new_allocator_char_* v1215) {
bb1216:
  struct std____new_allocator_char_* this1217;
  struct std____new_allocator_char_* unnamed1218;
  this1217 = v1214;
  unnamed1218 = v1215;
  struct std____new_allocator_char_* t1219 = this1217;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1220, struct std__allocator_char_* v1221) {
bb1222:
  struct std__allocator_char_* this1223;
  struct std__allocator_char_* __a1224;
  this1223 = v1220;
  __a1224 = v1221;
  struct std__allocator_char_* t1225 = this1223;
  struct std____new_allocator_char_* base1226 = (struct std____new_allocator_char_*)((char *)t1225 + 0);
  struct std__allocator_char_* t1227 = __a1224;
  struct std____new_allocator_char_* base1228 = (struct std____new_allocator_char_*)((char *)t1227 + 0);
  std____new_allocator_char_____new_allocator(base1226, base1228);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1229) {
bb1230:
  char* __r1231;
  char* __retval1232;
  __r1231 = v1229;
  char* t1233 = __r1231;
  __retval1232 = t1233;
  char* t1234 = __retval1232;
  return t1234;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1235) {
bb1236:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1237;
  char* __retval1238;
  this1237 = v1235;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1239 = this1237;
  char* cast1240 = (char*)&(t1239->field2._M_local_buf);
  char* r1241 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1240);
  __retval1238 = r1241;
  char* t1242 = __retval1238;
  return t1242;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1243) {
bb1244:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1245;
  _Bool __retval1246;
  this1245 = v1243;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1247 = this1245;
    char* r1248 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1247);
    char* r1249 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1247);
    _Bool c1250 = ((r1248 == r1249)) ? 1 : 0;
    if (c1250) {
        unsigned long t1251 = t1247->_M_string_length;
        unsigned long c1252 = 15;
        _Bool c1253 = ((t1251 > c1252)) ? 1 : 0;
        if (c1253) {
          __builtin_unreachable();
        }
      _Bool c1254 = 1;
      __retval1246 = c1254;
      _Bool t1255 = __retval1246;
      return t1255;
    }
  _Bool c1256 = 0;
  __retval1246 = c1256;
  _Bool t1257 = __retval1246;
  return t1257;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1258, char* v1259, unsigned long v1260) {
bb1261:
  struct std____new_allocator_char_* this1262;
  char* __p1263;
  unsigned long __n1264;
  this1262 = v1258;
  __p1263 = v1259;
  __n1264 = v1260;
  struct std____new_allocator_char_* t1265 = this1262;
    unsigned long c1266 = 1;
    unsigned long c1267 = 16;
    _Bool c1268 = ((c1266 > c1267)) ? 1 : 0;
    if (c1268) {
      char* t1269 = __p1263;
      void* cast1270 = (void*)t1269;
      unsigned long t1271 = __n1264;
      unsigned long c1272 = 1;
      unsigned long b1273 = t1271 * c1272;
      unsigned long c1274 = 1;
      operator_delete_3(cast1270, b1273, c1274);
      return;
    }
  char* t1275 = __p1263;
  void* cast1276 = (void*)t1275;
  unsigned long t1277 = __n1264;
  unsigned long c1278 = 1;
  unsigned long b1279 = t1277 * c1278;
  operator_delete_2(cast1276, b1279);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1280, char* v1281, unsigned long v1282) {
bb1283:
  struct std__allocator_char_* this1284;
  char* __p1285;
  unsigned long __n1286;
  this1284 = v1280;
  __p1285 = v1281;
  __n1286 = v1282;
  struct std__allocator_char_* t1287 = this1284;
    _Bool r1288 = std____is_constant_evaluated();
    if (r1288) {
      char* t1289 = __p1285;
      void* cast1290 = (void*)t1289;
      operator_delete(cast1290);
      return;
    }
  struct std____new_allocator_char_* base1291 = (struct std____new_allocator_char_*)((char *)t1287 + 0);
  char* t1292 = __p1285;
  unsigned long t1293 = __n1286;
  std____new_allocator_char___deallocate(base1291, t1292, t1293);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1294, char* v1295, unsigned long v1296) {
bb1297:
  struct std__allocator_char_* __a1298;
  char* __p1299;
  unsigned long __n1300;
  __a1298 = v1294;
  __p1299 = v1295;
  __n1300 = v1296;
  struct std__allocator_char_* t1301 = __a1298;
  char* t1302 = __p1299;
  unsigned long t1303 = __n1300;
  std__allocator_char___deallocate(t1301, t1302, t1303);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1304, unsigned long v1305) {
bb1306:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1307;
  unsigned long __size1308;
  this1307 = v1304;
  __size1308 = v1305;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1309 = this1307;
  struct std__allocator_char_* r1310 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1309);
  char* r1311 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1309);
  unsigned long t1312 = __size1308;
  unsigned long c1313 = 1;
  unsigned long b1314 = t1312 + c1313;
  std__allocator_traits_std__allocator_char_____deallocate(r1310, r1311, b1314);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1315) {
bb1316:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1317;
  this1317 = v1315;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1318 = this1317;
    _Bool r1319 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1318);
    _Bool u1320 = !r1319;
    if (u1320) {
      unsigned long t1321 = t1318->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1318, t1321);
    }
  return;
}

