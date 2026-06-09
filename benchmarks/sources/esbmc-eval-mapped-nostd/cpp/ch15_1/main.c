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
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[4] = "cat";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[10] = "string1: ";
char _str_2[11] = "\nstring2: ";
char _str_3[11] = "\nstring3: ";
char _str_4[3] = "\n\n";
char _str_5[44] = "After modification of string2 and string3:\n";
char _str_6[6] = "apult";
char _str_7[4] = "pet";
char _str_8[6] = "acomb";
char _str_9[33] = "\n\nAfter concatenation:\nstring1: ";
char _str_10[11] = "\nstring4: ";
char _str_11[11] = "\nstring5: ";
char _str_12[50] = "basic_string: construction from null is not valid";
char _str_13[24] = "basic_string::_M_create";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
char _str_14[93] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/basic_string.h";
char __PRETTY_FUNCTION____ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm[138] = "reference std::basic_string<char>::operator[](size_type) [_CharT = char, _Traits = std::char_traits<char>, _Alloc = std::allocator<char>]";
char _str_15[16] = "__pos <= size()";
char _str_16[68] = "basic_string::at: __n (which is %zu) >= this->size() (which is %zu)";
char _str_17[21] = "basic_string::append";
char _str_18[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_copy_assign();
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_always_equal();
_Bool std__operator__(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void void_std____alloc_on_copy_std__allocator_char___(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern void std____throw_out_of_range_fmt(char* p0, ...);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____at(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* p0);
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std__allocator_char_* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(char* p0, unsigned long p1, char* p2, unsigned long p3, struct std__allocator_char_* p4);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator___2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1, unsigned long p2, unsigned long p3);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
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
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);

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
        char* cast20 = (char*)&(_str_12);
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

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v32) {
bb33:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this34;
  struct std__allocator_char_ ref_tmp035;
  this34 = v32;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t36 = this34;
  char* r37 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t36);
  std__allocator_char___allocator_2(&ref_tmp035);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t36->_M_dataplus, r37, &ref_tmp035);
  {
    std__allocator_char____allocator(&ref_tmp035);
  }
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t36);
    unsigned long c38 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t36, c38);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSERKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v39, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v40) {
bb41:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this42;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str43;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval44;
  this42 = v39;
  __str43 = v40;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t45 = this42;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t46 = __str43;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r47 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(t45, t46);
  __retval44 = r47;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t48 = __retval44;
  return t48;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_copy_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_copy_assign() {
bb49:
  _Bool __retval50;
  _Bool t51 = _ZNSt17integral_constantIbLb0EE5valueE;
  __retval50 = t51;
  _Bool t52 = __retval50;
  return t52;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE15_S_always_equalEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_always_equal() {
bb53:
  _Bool __retval54;
  _Bool t55 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval54 = t55;
  _Bool t56 = __retval54;
  return t56;
}

// function: _ZSteqRKSaIcES1_
_Bool std__operator__(struct std__allocator_char_* v57, struct std__allocator_char_* v58) {
bb59:
  struct std__allocator_char_* unnamed60;
  struct std__allocator_char_* unnamed61;
  _Bool __retval62;
  unnamed60 = v57;
  unnamed61 = v58;
  _Bool c63 = 1;
  __retval62 = c63;
  _Bool t64 = __retval62;
  return t64;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v65) {
bb66:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this67;
  unsigned long __retval68;
  unsigned long __sz69;
  this67 = v65;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t70 = this67;
  unsigned long t71 = t70->_M_string_length;
  __sz69 = t71;
    unsigned long t72 = __sz69;
    unsigned long r73 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t70);
    _Bool c74 = ((t72 > r73)) ? 1 : 0;
    if (c74) {
      __builtin_unreachable();
    }
  unsigned long t75 = __sz69;
  __retval68 = t75;
  unsigned long t76 = __retval68;
  return t76;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v77) {
bb78:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this79;
  char* __retval80;
  this79 = v77;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t81 = this79;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t81);
  char* r82 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t81);
  __retval80 = r82;
  char* t83 = __retval80;
  return t83;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v84, struct std__allocator_char_* v85) {
bb86:
  struct std__allocator_char_* this87;
  struct std__allocator_char_* __a88;
  this87 = v84;
  __a88 = v85;
  struct std__allocator_char_* t89 = this87;
  struct std____new_allocator_char_* base90 = (struct std____new_allocator_char_*)((char *)t89 + 0);
  struct std__allocator_char_* t91 = __a88;
  struct std____new_allocator_char_* base92 = (struct std____new_allocator_char_*)((char *)t91 + 0);
  std____new_allocator_char_____new_allocator(base90, base92);
  return;
}

// function: _ZSt15__alloc_on_copyISaIcEEvRT_RKS1_
void void_std____alloc_on_copy_std__allocator_char___(struct std__allocator_char_* v93, struct std__allocator_char_* v94) {
bb95:
  struct std__allocator_char_* __one96;
  struct std__allocator_char_* __two97;
  __one96 = v93;
  __two97 = v94;
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v98) {
bb99:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this100;
  unsigned long __retval101;
  unsigned long __sz102;
  this100 = v98;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t103 = this100;
  _Bool r104 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t103);
  unsigned long ternary105;
  if (r104) {
    unsigned long c106 = 15;
    ternary105 = (unsigned long)c106;
  } else {
    unsigned long t107 = t103->field2._M_allocated_capacity;
    ternary105 = (unsigned long)t107;
  }
  __sz102 = ternary105;
    unsigned long t108 = __sz102;
    unsigned long c109 = 15;
    _Bool c110 = ((t108 < c109)) ? 1 : 0;
    _Bool ternary111;
    if (c110) {
      _Bool c112 = 1;
      ternary111 = (_Bool)c112;
    } else {
      unsigned long t113 = __sz102;
      unsigned long r114 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t103);
      _Bool c115 = ((t113 > r114)) ? 1 : 0;
      ternary111 = (_Bool)c115;
    }
    if (ternary111) {
      __builtin_unreachable();
    }
  unsigned long t116 = __sz102;
  __retval101 = t116;
  unsigned long t117 = __retval101;
  return t117;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v118, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v119) {
bb120:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this121;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str122;
  this121 = v118;
  __str122 = v119;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t123 = this121;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t124 = __str122;
    _Bool c125 = ((t123 != t124)) ? 1 : 0;
    if (c125) {
      unsigned long __rsize126;
      unsigned long __capacity127;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t128 = __str122;
      unsigned long r129 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t128);
      __rsize126 = r129;
      unsigned long r130 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t123);
      __capacity127 = r130;
        unsigned long t131 = __rsize126;
        unsigned long t132 = __capacity127;
        _Bool c133 = ((t131 > t132)) ? 1 : 0;
        if (c133) {
          unsigned long __new_capacity134;
          char* __tmp135;
          unsigned long t136 = __rsize126;
          __new_capacity134 = t136;
          unsigned long t137 = __capacity127;
          char* r138 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t123, &__new_capacity134, t137);
          __tmp135 = r138;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t123);
          char* t139 = __tmp135;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t123, t139);
          unsigned long t140 = __new_capacity134;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t123, t140);
        }
        unsigned long t141 = __rsize126;
        _Bool cast142 = (_Bool)t141;
        if (cast142) {
          char* r143 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t123);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t144 = __str122;
          char* r145 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t144);
          unsigned long t146 = __rsize126;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r143, r145, t146);
        }
      unsigned long t147 = __rsize126;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t123, t147);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignERKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v148, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v149) {
bb150:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this151;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str152;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval153;
  this151 = v148;
  __str152 = v149;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t154 = this151;
    _Bool r155 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_copy_assign();
    if (r155) {
        _Bool r156 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_always_equal();
        _Bool u157 = !r156;
        _Bool ternary158;
        if (u157) {
          _Bool r159 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t154);
          _Bool u160 = !r159;
          ternary158 = (_Bool)u160;
        } else {
          _Bool c161 = 0;
          ternary158 = (_Bool)c161;
        }
        _Bool ternary162;
        if (ternary158) {
          struct std__allocator_char_* r163 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t154);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t164 = __str152;
          struct std__allocator_char_* r165 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t164);
          _Bool r166 = std__operator__(r163, r165);
          _Bool u167 = !r166;
          ternary162 = (_Bool)u167;
        } else {
          _Bool c168 = 0;
          ternary162 = (_Bool)c168;
        }
        if (ternary162) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t169 = __str152;
            unsigned long r170 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t169);
            unsigned long c171 = 15;
            _Bool c172 = ((r170 <= c171)) ? 1 : 0;
            if (c172) {
              unsigned long t173 = t154->field2._M_allocated_capacity;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t154, t173);
              char* r174 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t154);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t154, r174);
              unsigned long c175 = 0;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t154, c175);
            } else {
              unsigned long __len176;
              struct std__allocator_char_ __alloc177;
              char* __ptr178;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t179 = __str152;
              unsigned long r180 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t179);
              __len176 = r180;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t181 = __str152;
              struct std__allocator_char_* r182 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t181);
              std__allocator_char___allocator(&__alloc177, r182);
              unsigned long t183 = __len176;
              unsigned long c184 = 1;
              unsigned long b185 = t183 + c184;
              char* r186 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(&__alloc177, b185);
              __ptr178 = r186;
              unsigned long t187 = t154->field2._M_allocated_capacity;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t154, t187);
              char* t188 = __ptr178;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t154, t188);
              unsigned long t189 = __len176;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t154, t189);
              unsigned long t190 = __len176;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t154, t190);
            }
        }
      struct std__allocator_char_* r191 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t154);
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t192 = __str152;
      struct std__allocator_char_* r193 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t192);
      void_std____alloc_on_copy_std__allocator_char___(r191, r193);
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t194 = __str152;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t154, t194);
  __retval153 = t154;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t195 = __retval153;
  return t195;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v196, int v197) {
bb198:
  int __a199;
  int __b200;
  int __retval201;
  __a199 = v196;
  __b200 = v197;
  int t202 = __a199;
  int t203 = __b200;
  int b204 = t202 | t203;
  __retval201 = b204;
  int t205 = __retval201;
  return t205;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v206) {
bb207:
  struct std__basic_ios_char__std__char_traits_char__* this208;
  int __retval209;
  this208 = v206;
  struct std__basic_ios_char__std__char_traits_char__* t210 = this208;
  struct std__ios_base* base211 = (struct std__ios_base*)((char *)t210 + 0);
  int t212 = base211->_M_streambuf_state;
  __retval209 = t212;
  int t213 = __retval209;
  return t213;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v214, int v215) {
bb216:
  struct std__basic_ios_char__std__char_traits_char__* this217;
  int __state218;
  this217 = v214;
  __state218 = v215;
  struct std__basic_ios_char__std__char_traits_char__* t219 = this217;
  int r220 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t219);
  int t221 = __state218;
  int r222 = std__operator_(r220, t221);
  std__basic_ios_char__std__char_traits_char_____clear(t219, r222);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v223, char* v224) {
bb225:
  struct std__basic_ostream_char__std__char_traits_char__* __out226;
  char* __s227;
  struct std__basic_ostream_char__std__char_traits_char__* __retval228;
  __out226 = v223;
  __s227 = v224;
    char* t229 = __s227;
    _Bool cast230 = (_Bool)t229;
    _Bool u231 = !cast230;
    if (u231) {
      struct std__basic_ostream_char__std__char_traits_char__* t232 = __out226;
      void** v233 = (void**)t232;
      void* v234 = *((void**)v233);
      unsigned char* cast235 = (unsigned char*)v234;
      long c236 = -24;
      unsigned char* ptr237 = &(cast235)[c236];
      long* cast238 = (long*)ptr237;
      long t239 = *cast238;
      unsigned char* cast240 = (unsigned char*)t232;
      unsigned char* ptr241 = &(cast240)[t239];
      struct std__basic_ostream_char__std__char_traits_char__* cast242 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr241;
      struct std__basic_ios_char__std__char_traits_char__* cast243 = (struct std__basic_ios_char__std__char_traits_char__*)cast242;
      int t244 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast243, t244);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t245 = __out226;
      char* t246 = __s227;
      char* t247 = __s227;
      unsigned long r248 = std__char_traits_char___length(t247);
      long cast249 = (long)r248;
      struct std__basic_ostream_char__std__char_traits_char__* r250 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t245, t246, cast249);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t251 = __out226;
  __retval228 = t251;
  struct std__basic_ostream_char__std__char_traits_char__* t252 = __retval228;
  return t252;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v253) {
bb254:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this255;
  char* __retval256;
  this255 = v253;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t257 = this255;
  char* r258 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t257);
  __retval256 = r258;
  char* t259 = __retval256;
  return t259;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v260, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v261) {
bb262:
  struct std__basic_ostream_char__std__char_traits_char__* __os263;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str264;
  struct std__basic_ostream_char__std__char_traits_char__* __retval265;
  __os263 = v260;
  __str264 = v261;
  struct std__basic_ostream_char__std__char_traits_char__* t266 = __os263;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t267 = __str264;
  char* r268 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t267);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t269 = __str264;
  unsigned long r270 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t269);
  long cast271 = (long)r270;
  struct std__basic_ostream_char__std__char_traits_char__* r272 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t266, r268, cast271);
  __retval265 = r272;
  struct std__basic_ostream_char__std__char_traits_char__* t273 = __retval265;
  return t273;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v274, unsigned long v275) {
bb276:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this277;
  unsigned long __pos278;
  char* __retval279;
  this277 = v274;
  __pos278 = v275;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t280 = this277;
    do {
          unsigned long t281 = __pos278;
          unsigned long r282 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t280);
          _Bool c283 = ((t281 <= r282)) ? 1 : 0;
          _Bool u284 = !c283;
          if (u284) {
            char* cast285 = (char*)&(_str_14);
            int c286 = 1369;
            char* cast287 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm);
            char* cast288 = (char*)&(_str_15);
            std____glibcxx_assert_fail(cast285, c286, cast287, cast288);
          }
      _Bool c289 = 0;
      if (!c289) break;
    } while (1);
  unsigned long t290 = __pos278;
  char* r291 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t280);
  char* ptr292 = &(r291)[t290];
  __retval279 = ptr292;
  char* t293 = __retval279;
  return t293;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v294) {
bb295:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this296;
  unsigned long __retval297;
  this296 = v294;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t298 = this296;
  unsigned long r299 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t298);
  __retval297 = r299;
  unsigned long t300 = __retval297;
  return t300;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v301) {
bb302:
  struct std__ios_base* this303;
  long __retval304;
  this303 = v301;
  struct std__ios_base* t305 = this303;
  long t306 = t305->_M_width;
  __retval304 = t306;
  long t307 = __retval304;
  return t307;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v308, char v309) {
bb310:
  struct std__basic_ostream_char__std__char_traits_char__* __out311;
  char __c312;
  struct std__basic_ostream_char__std__char_traits_char__* __retval313;
  __out311 = v308;
  __c312 = v309;
    struct std__basic_ostream_char__std__char_traits_char__* t314 = __out311;
    void** v315 = (void**)t314;
    void* v316 = *((void**)v315);
    unsigned char* cast317 = (unsigned char*)v316;
    long c318 = -24;
    unsigned char* ptr319 = &(cast317)[c318];
    long* cast320 = (long*)ptr319;
    long t321 = *cast320;
    unsigned char* cast322 = (unsigned char*)t314;
    unsigned char* ptr323 = &(cast322)[t321];
    struct std__basic_ostream_char__std__char_traits_char__* cast324 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr323;
    struct std__ios_base* cast325 = (struct std__ios_base*)cast324;
    long r326 = std__ios_base__width___const(cast325);
    long c327 = 0;
    _Bool c328 = ((r326 != c327)) ? 1 : 0;
    if (c328) {
      struct std__basic_ostream_char__std__char_traits_char__* t329 = __out311;
      long c330 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r331 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t329, &__c312, c330);
      __retval313 = r331;
      struct std__basic_ostream_char__std__char_traits_char__* t332 = __retval313;
      return t332;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t333 = __out311;
  char t334 = __c312;
  struct std__basic_ostream_char__std__char_traits_char__* r335 = std__ostream__put(t333, t334);
  struct std__basic_ostream_char__std__char_traits_char__* t336 = __out311;
  __retval313 = t336;
  struct std__basic_ostream_char__std__char_traits_char__* t337 = __retval313;
  return t337;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE2atEm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____at(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v338, unsigned long v339) {
bb340:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this341;
  unsigned long __n342;
  char* __retval343;
  this341 = v338;
  __n342 = v339;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t344 = this341;
    unsigned long t345 = __n342;
    unsigned long r346 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t344);
    _Bool c347 = ((t345 >= r346)) ? 1 : 0;
    if (c347) {
      char* cast348 = (char*)&(_str_16);
      unsigned long t349 = __n342;
      unsigned long r350 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t344);
      std____throw_out_of_range_fmt(cast348, t349, r350);
    }
  unsigned long t351 = __n342;
  char* r352 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t344);
  char* ptr353 = &(r352)[t351];
  __retval343 = ptr353;
  char* t354 = __retval343;
  return t354;
}

// function: _ZNSt16allocator_traitsISaIcEE37select_on_container_copy_constructionERKS0_
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* v355) {
bb356:
  struct std__allocator_char_* __rhs357;
  struct std__allocator_char_ __retval358;
  __rhs357 = v355;
  struct std__allocator_char_* t359 = __rhs357;
  std__allocator_char___allocator(&__retval358, t359);
  struct std__allocator_char_ t360 = __retval358;
  return t360;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE17_S_select_on_copyERKS1_
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* v361) {
bb362:
  struct std__allocator_char_* __a363;
  struct std__allocator_char_ __retval364;
  __a363 = v361;
  struct std__allocator_char_* t365 = __a363;
  struct std__allocator_char_ r366 = std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(t365);
  __retval364 = r366;
  struct std__allocator_char_ t367 = __retval364;
  return t367;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v368, struct std__allocator_char_* v369) {
bb370:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this371;
  struct std__allocator_char_* __a372;
  this371 = v368;
  __a372 = v369;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t373 = this371;
  char* r374 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t373);
  struct std__allocator_char_* t375 = __a372;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t373->_M_dataplus, r374, t375);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t373);
    unsigned long c376 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t373, c376);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7reserveEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v377, unsigned long v378) {
bb379:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this380;
  unsigned long __res381;
  unsigned long __capacity382;
  char* __tmp383;
  this380 = v377;
  __res381 = v378;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t384 = this380;
  unsigned long r385 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t384);
  __capacity382 = r385;
    unsigned long t386 = __res381;
    unsigned long t387 = __capacity382;
    _Bool c388 = ((t386 <= t387)) ? 1 : 0;
    if (c388) {
      return;
    }
  unsigned long t389 = __capacity382;
  char* r390 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t384, &__res381, t389);
  __tmp383 = r390;
  char* t391 = __tmp383;
  char* r392 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t384);
  unsigned long r393 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t384);
  unsigned long c394 = 1;
  unsigned long b395 = r393 + c394;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t391, r392, b395);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t384);
  char* t396 = __tmp383;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t384, t396);
  unsigned long t397 = __res381;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t384, t397);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v398, unsigned long v399, unsigned long v400, char* v401) {
bb402:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this403;
  unsigned long __n1404;
  unsigned long __n2405;
  char* __s406;
  this403 = v398;
  __n1404 = v399;
  __n2405 = v400;
  __s406 = v401;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t407 = this403;
    unsigned long r408 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t407);
    unsigned long r409 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t407);
    unsigned long t410 = __n1404;
    unsigned long b411 = r409 - t410;
    unsigned long b412 = r408 - b411;
    unsigned long t413 = __n2405;
    _Bool c414 = ((b412 < t413)) ? 1 : 0;
    if (c414) {
      char* t415 = __s406;
      std____throw_length_error(t415);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v416, unsigned long v417, unsigned long v418, char* v419, unsigned long v420) {
bb421:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this422;
  unsigned long __pos423;
  unsigned long __len1424;
  char* __s425;
  unsigned long __len2426;
  unsigned long __how_much427;
  unsigned long __new_capacity428;
  char* __r429;
  this422 = v416;
  __pos423 = v417;
  __len1424 = v418;
  __s425 = v419;
  __len2426 = v420;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t430 = this422;
  unsigned long r431 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t430);
  unsigned long t432 = __pos423;
  unsigned long b433 = r431 - t432;
  unsigned long t434 = __len1424;
  unsigned long b435 = b433 - t434;
  __how_much427 = b435;
  unsigned long r436 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t430);
  unsigned long t437 = __len2426;
  unsigned long b438 = r436 + t437;
  unsigned long t439 = __len1424;
  unsigned long b440 = b438 - t439;
  __new_capacity428 = b440;
  unsigned long r441 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t430);
  char* r442 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t430, &__new_capacity428, r441);
  __r429 = r442;
    unsigned long t443 = __pos423;
    _Bool cast444 = (_Bool)t443;
    if (cast444) {
      char* t445 = __r429;
      char* r446 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t430);
      unsigned long t447 = __pos423;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t445, r446, t447);
    }
    char* t448 = __s425;
    _Bool cast449 = (_Bool)t448;
    _Bool ternary450;
    if (cast449) {
      unsigned long t451 = __len2426;
      _Bool cast452 = (_Bool)t451;
      ternary450 = (_Bool)cast452;
    } else {
      _Bool c453 = 0;
      ternary450 = (_Bool)c453;
    }
    if (ternary450) {
      char* t454 = __r429;
      unsigned long t455 = __pos423;
      char* ptr456 = &(t454)[t455];
      char* t457 = __s425;
      unsigned long t458 = __len2426;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr456, t457, t458);
    }
    unsigned long t459 = __how_much427;
    _Bool cast460 = (_Bool)t459;
    if (cast460) {
      char* t461 = __r429;
      unsigned long t462 = __pos423;
      char* ptr463 = &(t461)[t462];
      unsigned long t464 = __len2426;
      char* ptr465 = &(ptr463)[t464];
      char* r466 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t430);
      unsigned long t467 = __pos423;
      char* ptr468 = &(r466)[t467];
      unsigned long t469 = __len1424;
      char* ptr470 = &(ptr468)[t469];
      unsigned long t471 = __how_much427;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr465, ptr470, t471);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t430);
  char* t472 = __r429;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t430, t472);
  unsigned long t473 = __new_capacity428;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t430, t473);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v474, char* v475, unsigned long v476) {
bb477:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this478;
  char* __s479;
  unsigned long __n480;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval481;
  unsigned long __len482;
  this478 = v474;
  __s479 = v475;
  __n480 = v476;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t483 = this478;
  unsigned long t484 = __n480;
  unsigned long r485 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t483);
  unsigned long b486 = t484 + r485;
  __len482 = b486;
    unsigned long t487 = __len482;
    unsigned long r488 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t483);
    _Bool c489 = ((t487 <= r488)) ? 1 : 0;
    if (c489) {
        unsigned long t490 = __n480;
        _Bool cast491 = (_Bool)t490;
        if (cast491) {
          char* r492 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t483);
          unsigned long r493 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t483);
          char* ptr494 = &(r492)[r493];
          char* t495 = __s479;
          unsigned long t496 = __n480;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr494, t495, t496);
        }
    } else {
      unsigned long r497 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t483);
      unsigned long c498 = 0;
      char* t499 = __s479;
      unsigned long t500 = __n480;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t483, r497, c498, t499, t500);
    }
  unsigned long t501 = __len482;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t483, t501);
  __retval481 = t483;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t502 = __retval481;
  return t502;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v503, char* v504, unsigned long v505) {
bb506:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this507;
  char* __s508;
  unsigned long __n509;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval510;
  this507 = v503;
  __s508 = v504;
  __n509 = v505;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t511 = this507;
  unsigned long c512 = 0;
  unsigned long t513 = __n509;
  char* cast514 = (char*)&(_str_17);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t511, c512, t513, cast514);
  char* t515 = __s508;
  unsigned long t516 = __n509;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r517 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(t511, t515, t516);
  __retval510 = r517;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t518 = __retval510;
  return t518;
}

// function: _ZSt12__str_concatINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEET_PKNS6_10value_typeENS6_9size_typeES9_SA_RKNS6_14allocator_typeE
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(char* v519, unsigned long v520, char* v521, unsigned long v522, struct std__allocator_char_* v523) {
bb524:
  char* __lhs525;
  unsigned long __lhs_len526;
  char* __rhs527;
  unsigned long __rhs_len528;
  struct std__allocator_char_* __a529;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval530;
  _Bool nrvo531;
  struct std__allocator_char_ ref_tmp0532;
  __lhs525 = v519;
  __lhs_len526 = v520;
  __rhs527 = v521;
  __rhs_len528 = v522;
  __a529 = v523;
  _Bool c533 = 0;
  nrvo531 = c533;
  struct std__allocator_char_* t534 = __a529;
  struct std__allocator_char_ r535 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(t534);
  ref_tmp0532 = r535;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&__retval530, &ref_tmp0532);
  {
    std__allocator_char____allocator(&ref_tmp0532);
  }
    unsigned long t536 = __lhs_len526;
    unsigned long t537 = __rhs_len528;
    unsigned long b538 = t536 + t537;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(&__retval530, b538);
    char* t539 = __lhs525;
    unsigned long t540 = __lhs_len526;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r541 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(&__retval530, t539, t540);
    char* t542 = __rhs527;
    unsigned long t543 = __rhs_len528;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r544 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(&__retval530, t542, t543);
    _Bool c545 = 1;
    nrvo531 = c545;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t546 = __retval530;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ret_val547 = t546;
    {
      _Bool t548 = nrvo531;
      _Bool u549 = !t548;
      if (u549) {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&__retval530);
      }
    }
    return ret_val547;
  abort();
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5c_strEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v550) {
bb551:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this552;
  char* __retval553;
  this552 = v550;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t554 = this552;
  char* r555 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t554);
  __retval553 = r555;
  char* t556 = __retval553;
  return t556;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13get_allocatorEv
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v557) {
bb558:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this559;
  struct std__allocator_char_ __retval560;
  this559 = v557;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t561 = this559;
  struct std__allocator_char_* r562 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t561);
  std__allocator_char___allocator(&__retval560, r562);
  struct std__allocator_char_ t563 = __retval560;
  return t563;
}

// function: _ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_PKS5_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v564, char* v565) {
bb566:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs567;
  char* __rhs568;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval569;
  struct std__allocator_char_ ref_tmp0570;
  __lhs567 = v564;
  __rhs568 = v565;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t571 = __lhs567;
  char* r572 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(t571);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t573 = __lhs567;
  unsigned long r574 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t573);
  char* t575 = __rhs568;
  char* t576 = __rhs568;
  unsigned long r577 = std__char_traits_char___length(t576);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t578 = __lhs567;
  struct std__allocator_char_ r579 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(t578);
  ref_tmp0570 = r579;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r580 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(r572, r574, t575, r577, &ref_tmp0570);
    __retval569 = r580;
  {
    std__allocator_char____allocator(&ref_tmp0570);
  }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t581 = __retval569;
  return t581;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEpLEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator___2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v582, char* v583) {
bb584:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this585;
  char* __s586;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval587;
  this585 = v582;
  __s586 = v583;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t588 = this585;
  char* t589 = __s586;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r590 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(t588, t589);
  __retval587 = r590;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t591 = __retval587;
  return t591;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v592, char* v593) {
bb594:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this595;
  char* __s596;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval597;
  unsigned long __n598;
  this595 = v592;
  __s596 = v593;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t599 = this595;
  char* t600 = __s596;
  unsigned long r601 = std__char_traits_char___length(t600);
  __n598 = r601;
  unsigned long c602 = 0;
  unsigned long t603 = __n598;
  char* cast604 = (char*)&(_str_17);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t599, c602, t603, cast604);
  char* t605 = __s596;
  unsigned long t606 = __n598;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r607 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(t599, t605, t606);
  __retval597 = r607;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t608 = __retval597;
  return t608;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v609, unsigned long v610, char* v611) {
bb612:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this613;
  unsigned long __pos614;
  char* __s615;
  unsigned long __retval616;
  this613 = v609;
  __pos614 = v610;
  __s615 = v611;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t617 = this613;
    unsigned long t618 = __pos614;
    unsigned long r619 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t617);
    _Bool c620 = ((t618 > r619)) ? 1 : 0;
    if (c620) {
      char* cast621 = (char*)&(_str_18);
      char* t622 = __s615;
      unsigned long t623 = __pos614;
      unsigned long r624 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t617);
      std____throw_out_of_range_fmt(cast621, t622, t623, r624);
    }
  unsigned long t625 = __pos614;
  __retval616 = t625;
  unsigned long t626 = __retval616;
  return t626;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v627, unsigned long v628, unsigned long v629) {
bb630:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this631;
  unsigned long __pos632;
  unsigned long __off633;
  unsigned long __retval634;
  _Bool __testoff635;
  this631 = v627;
  __pos632 = v628;
  __off633 = v629;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t636 = this631;
  unsigned long t637 = __off633;
  unsigned long r638 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t636);
  unsigned long t639 = __pos632;
  unsigned long b640 = r638 - t639;
  _Bool c641 = ((t637 < b640)) ? 1 : 0;
  __testoff635 = c641;
  _Bool t642 = __testoff635;
  unsigned long ternary643;
  if (t642) {
    unsigned long t644 = __off633;
    ternary643 = (unsigned long)t644;
  } else {
    unsigned long r645 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t636);
    unsigned long t646 = __pos632;
    unsigned long b647 = r645 - t646;
    ternary643 = (unsigned long)b647;
  }
  __retval634 = ternary643;
  unsigned long t648 = __retval634;
  return t648;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendERKS4_mm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v649, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v650, unsigned long v651, unsigned long v652) {
bb653:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this654;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str655;
  unsigned long __pos656;
  unsigned long __n657;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval658;
  this654 = v649;
  __str655 = v650;
  __pos656 = v651;
  __n657 = v652;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t659 = this654;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t660 = __str655;
  char* r661 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t660);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t662 = __str655;
  unsigned long t663 = __pos656;
  char* cast664 = (char*)&(_str_17);
  unsigned long r665 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t662, t663, cast664);
  char* ptr666 = &(r661)[r665];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t667 = __str655;
  unsigned long t668 = __pos656;
  unsigned long t669 = __n657;
  unsigned long r670 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t667, t668, t669);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r671 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(t659, ptr666, r670);
  __retval658 = r671;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t672 = __retval658;
  return t672;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v673, void* v674) {
bb675:
  struct std__basic_ostream_char__std__char_traits_char__* this676;
  void* __pf677;
  struct std__basic_ostream_char__std__char_traits_char__* __retval678;
  this676 = v673;
  __pf677 = v674;
  struct std__basic_ostream_char__std__char_traits_char__* t679 = this676;
  void* t680 = __pf677;
  struct std__basic_ostream_char__std__char_traits_char__* r681 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t680)(t679);
  __retval678 = r681;
  struct std__basic_ostream_char__std__char_traits_char__* t682 = __retval678;
  return t682;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v683) {
bb684:
  struct std__basic_ostream_char__std__char_traits_char__* __os685;
  struct std__basic_ostream_char__std__char_traits_char__* __retval686;
  __os685 = v683;
  struct std__basic_ostream_char__std__char_traits_char__* t687 = __os685;
  struct std__basic_ostream_char__std__char_traits_char__* r688 = std__ostream__flush(t687);
  __retval686 = r688;
  struct std__basic_ostream_char__std__char_traits_char__* t689 = __retval686;
  return t689;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v690) {
bb691:
  struct std__ctype_char_* __f692;
  struct std__ctype_char_* __retval693;
  __f692 = v690;
    struct std__ctype_char_* t694 = __f692;
    _Bool cast695 = (_Bool)t694;
    _Bool u696 = !cast695;
    if (u696) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t697 = __f692;
  __retval693 = t697;
  struct std__ctype_char_* t698 = __retval693;
  return t698;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v699, char v700) {
bb701:
  struct std__ctype_char_* this702;
  char __c703;
  char __retval704;
  this702 = v699;
  __c703 = v700;
  struct std__ctype_char_* t705 = this702;
    char t706 = t705->_M_widen_ok;
    _Bool cast707 = (_Bool)t706;
    if (cast707) {
      char t708 = __c703;
      unsigned char cast709 = (unsigned char)t708;
      unsigned long cast710 = (unsigned long)cast709;
      char t711 = t705->_M_widen[cast710];
      __retval704 = t711;
      char t712 = __retval704;
      return t712;
    }
  std__ctype_char____M_widen_init___const(t705);
  char t713 = __c703;
  void** v714 = (void**)t705;
  void* v715 = *((void**)v714);
  char vcall718 = (char)__VERIFIER_virtual_call_char_char(t705, 6, t713);
  __retval704 = vcall718;
  char t719 = __retval704;
  return t719;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v720, char v721) {
bb722:
  struct std__basic_ios_char__std__char_traits_char__* this723;
  char __c724;
  char __retval725;
  this723 = v720;
  __c724 = v721;
  struct std__basic_ios_char__std__char_traits_char__* t726 = this723;
  struct std__ctype_char_* t727 = t726->_M_ctype;
  struct std__ctype_char_* r728 = std__ctype_char__const__std____check_facet_std__ctype_char___(t727);
  char t729 = __c724;
  char r730 = std__ctype_char___widen_char__const(r728, t729);
  __retval725 = r730;
  char t731 = __retval725;
  return t731;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v732) {
bb733:
  struct std__basic_ostream_char__std__char_traits_char__* __os734;
  struct std__basic_ostream_char__std__char_traits_char__* __retval735;
  __os734 = v732;
  struct std__basic_ostream_char__std__char_traits_char__* t736 = __os734;
  struct std__basic_ostream_char__std__char_traits_char__* t737 = __os734;
  void** v738 = (void**)t737;
  void* v739 = *((void**)v738);
  unsigned char* cast740 = (unsigned char*)v739;
  long c741 = -24;
  unsigned char* ptr742 = &(cast740)[c741];
  long* cast743 = (long*)ptr742;
  long t744 = *cast743;
  unsigned char* cast745 = (unsigned char*)t737;
  unsigned char* ptr746 = &(cast745)[t744];
  struct std__basic_ostream_char__std__char_traits_char__* cast747 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr746;
  struct std__basic_ios_char__std__char_traits_char__* cast748 = (struct std__basic_ios_char__std__char_traits_char__*)cast747;
  char c749 = 10;
  char r750 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast748, c749);
  struct std__basic_ostream_char__std__char_traits_char__* r751 = std__ostream__put(t736, r750);
  struct std__basic_ostream_char__std__char_traits_char__* r752 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r751);
  __retval735 = r752;
  struct std__basic_ostream_char__std__char_traits_char__* t753 = __retval735;
  return t753;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v754) {
bb755:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this756;
  this756 = v754;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t757 = this756;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t757);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t757->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb758:
  int __retval759;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string1760;
  struct std__allocator_char_ ref_tmp0761;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string2762;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string3763;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string4764;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string5765;
  int c766 = 0;
  __retval759 = c766;
  char* cast767 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0761);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&string1760, cast767, &ref_tmp0761);
  {
    std__allocator_char____allocator(&ref_tmp0761);
  }
    _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&string2762);
      _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&string3763);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r768 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&string2762, &string1760);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r769 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(&string3763, &string1760);
        char* cast770 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r771 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast770);
        struct std__basic_ostream_char__std__char_traits_char__* r772 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r771, &string1760);
        char* cast773 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* r774 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r772, cast773);
        struct std__basic_ostream_char__std__char_traits_char__* r775 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r774, &string2762);
        char* cast776 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r777 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r775, cast776);
        struct std__basic_ostream_char__std__char_traits_char__* r778 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r777, &string3763);
        char* cast779 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* r780 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r778, cast779);
        char c781 = 114;
        unsigned long c782 = 2;
        char* r783 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(&string3763, c782);
        *r783 = c781;
        unsigned long c784 = 0;
        char* r785 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(&string2762, c784);
        *r785 = c781;
        char* cast786 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* r787 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast786);
        char* cast788 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r789 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r787, cast788);
        struct std__basic_ostream_char__std__char_traits_char__* r790 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r789, &string1760);
        char* cast791 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* r792 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r790, cast791);
        struct std__basic_ostream_char__std__char_traits_char__* r793 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r792, &string2762);
        char* cast794 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r795 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r793, cast794);
          int i796;
          int c797 = 0;
          i796 = c797;
          while (1) {
            int t799 = i796;
            unsigned long cast800 = (unsigned long)t799;
            unsigned long r801 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(&string3763);
            _Bool c802 = ((cast800 < r801)) ? 1 : 0;
            if (!c802) break;
            int t803 = i796;
            unsigned long cast804 = (unsigned long)t803;
            char* r805 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____at(&string3763, cast804);
            char t806 = *r805;
            struct std__basic_ostream_char__std__char_traits_char__* r807 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(&_ZSt4cout, t806);
          for_step798: ;
            int t808 = i796;
            int u809 = t808 + 1;
            i796 = u809;
          }
        char* cast810 = (char*)&(_str_6);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r811 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(&string1760, cast810);
        string4764 = r811;
          _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&string5765);
            char* cast812 = (char*)&(_str_7);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r813 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator___2(&string3763, cast812);
            char* cast814 = (char*)&(_str_8);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r815 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(&string1760, cast814);
            unsigned long c816 = 4;
            unsigned long r817 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(&string1760);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r818 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_3(&string5765, &string1760, c816, r817);
            char* cast819 = (char*)&(_str_9);
            struct std__basic_ostream_char__std__char_traits_char__* r820 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast819);
            struct std__basic_ostream_char__std__char_traits_char__* r821 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r820, &string1760);
            char* cast822 = (char*)&(_str_2);
            struct std__basic_ostream_char__std__char_traits_char__* r823 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r821, cast822);
            struct std__basic_ostream_char__std__char_traits_char__* r824 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r823, &string2762);
            char* cast825 = (char*)&(_str_3);
            struct std__basic_ostream_char__std__char_traits_char__* r826 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r824, cast825);
            struct std__basic_ostream_char__std__char_traits_char__* r827 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r826, &string3763);
            char* cast828 = (char*)&(_str_10);
            struct std__basic_ostream_char__std__char_traits_char__* r829 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r827, cast828);
            struct std__basic_ostream_char__std__char_traits_char__* r830 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r829, &string4764);
            char* cast831 = (char*)&(_str_11);
            struct std__basic_ostream_char__std__char_traits_char__* r832 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r830, cast831);
            struct std__basic_ostream_char__std__char_traits_char__* r833 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r832, &string5765);
            struct std__basic_ostream_char__std__char_traits_char__* r834 = std__ostream__operator___std__ostream_____(r833, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            int c835 = 0;
            __retval759 = c835;
            int t836 = __retval759;
            int ret_val837 = t836;
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&string5765);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&string4764);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&string3763);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&string2762);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&string1760);
            }
            return ret_val837;
  int t838 = __retval759;
  return t838;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v839) {
bb840:
  struct std____new_allocator_char_* this841;
  this841 = v839;
  struct std____new_allocator_char_* t842 = this841;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v843) {
bb844:
  char* __r845;
  char* __retval846;
  __r845 = v843;
  char* t847 = __r845;
  __retval846 = t847;
  char* t848 = __retval846;
  return t848;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v849) {
bb850:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this851;
  char* __retval852;
  this851 = v849;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t853 = this851;
  char* cast854 = (char*)&(t853->field2._M_local_buf);
  char* r855 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast854);
  __retval852 = r855;
  char* t856 = __retval852;
  return t856;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v857, char* v858, struct std__allocator_char_* v859) {
bb860:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this861;
  char* __dat862;
  struct std__allocator_char_* __a863;
  this861 = v857;
  __dat862 = v858;
  __a863 = v859;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t864 = this861;
  struct std__allocator_char_* base865 = (struct std__allocator_char_*)((char *)t864 + 0);
  struct std__allocator_char_* t866 = __a863;
  std__allocator_char___allocator(base865, t866);
    char* t867 = __dat862;
    t864->_M_p = t867;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb868:
  _Bool __retval869;
    _Bool c870 = 0;
    __retval869 = c870;
    _Bool t871 = __retval869;
    return t871;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v872, char* v873) {
bb874:
  char* __c1875;
  char* __c2876;
  _Bool __retval877;
  __c1875 = v872;
  __c2876 = v873;
  char* t878 = __c1875;
  char t879 = *t878;
  int cast880 = (int)t879;
  char* t881 = __c2876;
  char t882 = *t881;
  int cast883 = (int)t882;
  _Bool c884 = ((cast880 == cast883)) ? 1 : 0;
  __retval877 = c884;
  _Bool t885 = __retval877;
  return t885;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v886) {
bb887:
  char* __p888;
  unsigned long __retval889;
  unsigned long __i890;
  __p888 = v886;
  unsigned long c891 = 0;
  __i890 = c891;
    char ref_tmp0892;
    while (1) {
      unsigned long t893 = __i890;
      char* t894 = __p888;
      char* ptr895 = &(t894)[t893];
      char c896 = 0;
      ref_tmp0892 = c896;
      _Bool r897 = __gnu_cxx__char_traits_char___eq(ptr895, &ref_tmp0892);
      _Bool u898 = !r897;
      if (!u898) break;
      unsigned long t899 = __i890;
      unsigned long u900 = t899 + 1;
      __i890 = u900;
    }
  unsigned long t901 = __i890;
  __retval889 = t901;
  unsigned long t902 = __retval889;
  return t902;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v903) {
bb904:
  char* __s905;
  unsigned long __retval906;
  __s905 = v903;
    _Bool r907 = std____is_constant_evaluated();
    if (r907) {
      char* t908 = __s905;
      unsigned long r909 = __gnu_cxx__char_traits_char___length(t908);
      __retval906 = r909;
      unsigned long t910 = __retval906;
      return t910;
    }
  char* t911 = __s905;
  unsigned long r912 = strlen(t911);
  __retval906 = r912;
  unsigned long t913 = __retval906;
  return t913;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v914, char* v915, struct std__random_access_iterator_tag v916) {
bb917:
  char* __first918;
  char* __last919;
  struct std__random_access_iterator_tag unnamed920;
  long __retval921;
  __first918 = v914;
  __last919 = v915;
  unnamed920 = v916;
  char* t922 = __last919;
  char* t923 = __first918;
  long diff924 = t922 - t923;
  __retval921 = diff924;
  long t925 = __retval921;
  return t925;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v926) {
bb927:
  char** unnamed928;
  struct std__random_access_iterator_tag __retval929;
  unnamed928 = v926;
  struct std__random_access_iterator_tag t930 = __retval929;
  return t930;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v931, char* v932) {
bb933:
  char* __first934;
  char* __last935;
  long __retval936;
  struct std__random_access_iterator_tag agg_tmp0937;
  __first934 = v931;
  __last935 = v932;
  char* t938 = __first934;
  char* t939 = __last935;
  struct std__random_access_iterator_tag r940 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first934);
  agg_tmp0937 = r940;
  struct std__random_access_iterator_tag t941 = agg_tmp0937;
  long r942 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t938, t939, t941);
  __retval936 = r942;
  long t943 = __retval936;
  return t943;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v944, char* v945) {
bb946:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this947;
  char* __p948;
  this947 = v944;
  __p948 = v945;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t949 = this947;
  char* t950 = __p948;
  t949->_M_dataplus._M_p = t950;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v951) {
bb952:
  struct std__allocator_char_* __a953;
  unsigned long __retval954;
  __a953 = v951;
  unsigned long c955 = -1;
  unsigned long c956 = 1;
  unsigned long b957 = c955 / c956;
  __retval954 = b957;
  unsigned long t958 = __retval954;
  return t958;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v959) {
bb960:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this961;
  struct std__allocator_char_* __retval962;
  this961 = v959;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t963 = this961;
  struct std__allocator_char_* base964 = (struct std__allocator_char_*)((char *)&(t963->_M_dataplus) + 0);
  __retval962 = base964;
  struct std__allocator_char_* t965 = __retval962;
  return t965;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v966, unsigned long* v967) {
bb968:
  unsigned long* __a969;
  unsigned long* __b970;
  unsigned long* __retval971;
  __a969 = v966;
  __b970 = v967;
    unsigned long* t972 = __b970;
    unsigned long t973 = *t972;
    unsigned long* t974 = __a969;
    unsigned long t975 = *t974;
    _Bool c976 = ((t973 < t975)) ? 1 : 0;
    if (c976) {
      unsigned long* t977 = __b970;
      __retval971 = t977;
      unsigned long* t978 = __retval971;
      return t978;
    }
  unsigned long* t979 = __a969;
  __retval971 = t979;
  unsigned long* t980 = __retval971;
  return t980;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v981) {
bb982:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this983;
  unsigned long __retval984;
  unsigned long __diffmax985;
  unsigned long __allocmax986;
  this983 = v981;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t987 = this983;
  unsigned long c988 = 9223372036854775807;
  __diffmax985 = c988;
  struct std__allocator_char_* r989 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t987);
  unsigned long r990 = std__allocator_traits_std__allocator_char_____max_size(r989);
  __allocmax986 = r990;
  unsigned long* r991 = unsigned_long_const__std__min_unsigned_long_(&__diffmax985, &__allocmax986);
  unsigned long t992 = *r991;
  unsigned long c993 = 1;
  unsigned long b994 = t992 - c993;
  __retval984 = b994;
  unsigned long t995 = __retval984;
  return t995;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v996) {
bb997:
  struct std____new_allocator_char_* this998;
  unsigned long __retval999;
  this998 = v996;
  struct std____new_allocator_char_* t1000 = this998;
  unsigned long c1001 = 9223372036854775807;
  unsigned long c1002 = 1;
  unsigned long b1003 = c1001 / c1002;
  __retval999 = b1003;
  unsigned long t1004 = __retval999;
  return t1004;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v1005, unsigned long v1006, void* v1007) {
bb1008:
  struct std____new_allocator_char_* this1009;
  unsigned long __n1010;
  void* unnamed1011;
  char* __retval1012;
  this1009 = v1005;
  __n1010 = v1006;
  unnamed1011 = v1007;
  struct std____new_allocator_char_* t1013 = this1009;
    unsigned long t1014 = __n1010;
    unsigned long r1015 = std____new_allocator_char____M_max_size___const(t1013);
    _Bool c1016 = ((t1014 > r1015)) ? 1 : 0;
    if (c1016) {
        unsigned long t1017 = __n1010;
        unsigned long c1018 = -1;
        unsigned long c1019 = 1;
        unsigned long b1020 = c1018 / c1019;
        _Bool c1021 = ((t1017 > b1020)) ? 1 : 0;
        if (c1021) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1022 = 1;
    unsigned long c1023 = 16;
    _Bool c1024 = ((c1022 > c1023)) ? 1 : 0;
    if (c1024) {
      unsigned long __al1025;
      unsigned long c1026 = 1;
      __al1025 = c1026;
      unsigned long t1027 = __n1010;
      unsigned long c1028 = 1;
      unsigned long b1029 = t1027 * c1028;
      unsigned long t1030 = __al1025;
      void* r1031 = operator_new_2(b1029, t1030);
      char* cast1032 = (char*)r1031;
      __retval1012 = cast1032;
      char* t1033 = __retval1012;
      return t1033;
    }
  unsigned long t1034 = __n1010;
  unsigned long c1035 = 1;
  unsigned long b1036 = t1034 * c1035;
  void* r1037 = operator_new(b1036);
  char* cast1038 = (char*)r1037;
  __retval1012 = cast1038;
  char* t1039 = __retval1012;
  return t1039;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1040, unsigned long v1041) {
bb1042:
  struct std__allocator_char_* this1043;
  unsigned long __n1044;
  char* __retval1045;
  this1043 = v1040;
  __n1044 = v1041;
  struct std__allocator_char_* t1046 = this1043;
    _Bool r1047 = std____is_constant_evaluated();
    if (r1047) {
        unsigned long t1048 = __n1044;
        unsigned long c1049 = 1;
        unsigned long ovr1050;
        _Bool ovf1051 = __builtin_mul_overflow(t1048, c1049, &ovr1050);
        __n1044 = ovr1050;
        if (ovf1051) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1052 = __n1044;
      void* r1053 = operator_new(t1052);
      char* cast1054 = (char*)r1053;
      __retval1045 = cast1054;
      char* t1055 = __retval1045;
      return t1055;
    }
  struct std____new_allocator_char_* base1056 = (struct std____new_allocator_char_*)((char *)t1046 + 0);
  unsigned long t1057 = __n1044;
  void* c1058 = ((void*)0);
  char* r1059 = std____new_allocator_char___allocate(base1056, t1057, c1058);
  __retval1045 = r1059;
  char* t1060 = __retval1045;
  return t1060;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1061, unsigned long v1062) {
bb1063:
  struct std__allocator_char_* __a1064;
  unsigned long __n1065;
  char* __retval1066;
  __a1064 = v1061;
  __n1065 = v1062;
  struct std__allocator_char_* t1067 = __a1064;
  unsigned long t1068 = __n1065;
  char* r1069 = std__allocator_char___allocate(t1067, t1068);
  __retval1066 = r1069;
  char* t1070 = __retval1066;
  return t1070;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1071, unsigned long v1072) {
bb1073:
  struct std__allocator_char_* __a1074;
  unsigned long __n1075;
  char* __retval1076;
  char* __p1077;
  __a1074 = v1071;
  __n1075 = v1072;
  struct std__allocator_char_* t1078 = __a1074;
  unsigned long t1079 = __n1075;
  char* r1080 = std__allocator_traits_std__allocator_char_____allocate(t1078, t1079);
  __p1077 = r1080;
  char* t1081 = __p1077;
  __retval1076 = t1081;
  char* t1082 = __retval1076;
  return t1082;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1083) {
bb1084:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1085;
  struct std__allocator_char_* __retval1086;
  this1085 = v1083;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1087 = this1085;
  struct std__allocator_char_* base1088 = (struct std__allocator_char_*)((char *)&(t1087->_M_dataplus) + 0);
  __retval1086 = base1088;
  struct std__allocator_char_* t1089 = __retval1086;
  return t1089;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1090, unsigned long* v1091, unsigned long v1092) {
bb1093:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1094;
  unsigned long* __capacity1095;
  unsigned long __old_capacity1096;
  char* __retval1097;
  this1094 = v1090;
  __capacity1095 = v1091;
  __old_capacity1096 = v1092;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1098 = this1094;
    unsigned long* t1099 = __capacity1095;
    unsigned long t1100 = *t1099;
    unsigned long r1101 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1098);
    _Bool c1102 = ((t1100 > r1101)) ? 1 : 0;
    if (c1102) {
      char* cast1103 = (char*)&(_str_13);
      std____throw_length_error(cast1103);
    }
    unsigned long* t1104 = __capacity1095;
    unsigned long t1105 = *t1104;
    unsigned long t1106 = __old_capacity1096;
    _Bool c1107 = ((t1105 > t1106)) ? 1 : 0;
    _Bool ternary1108;
    if (c1107) {
      unsigned long* t1109 = __capacity1095;
      unsigned long t1110 = *t1109;
      unsigned long c1111 = 2;
      unsigned long t1112 = __old_capacity1096;
      unsigned long b1113 = c1111 * t1112;
      _Bool c1114 = ((t1110 < b1113)) ? 1 : 0;
      ternary1108 = (_Bool)c1114;
    } else {
      _Bool c1115 = 0;
      ternary1108 = (_Bool)c1115;
    }
    if (ternary1108) {
      unsigned long c1116 = 2;
      unsigned long t1117 = __old_capacity1096;
      unsigned long b1118 = c1116 * t1117;
      unsigned long* t1119 = __capacity1095;
      *t1119 = b1118;
        unsigned long* t1120 = __capacity1095;
        unsigned long t1121 = *t1120;
        unsigned long r1122 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1098);
        _Bool c1123 = ((t1121 > r1122)) ? 1 : 0;
        if (c1123) {
          unsigned long r1124 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1098);
          unsigned long* t1125 = __capacity1095;
          *t1125 = r1124;
        }
    }
  struct std__allocator_char_* r1126 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1098);
  unsigned long* t1127 = __capacity1095;
  unsigned long t1128 = *t1127;
  unsigned long c1129 = 1;
  unsigned long b1130 = t1128 + c1129;
  char* r1131 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1126, b1130);
  __retval1097 = r1131;
  char* t1132 = __retval1097;
  return t1132;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1133, unsigned long v1134) {
bb1135:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1136;
  unsigned long __capacity1137;
  this1136 = v1133;
  __capacity1137 = v1134;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1138 = this1136;
  unsigned long t1139 = __capacity1137;
  t1138->field2._M_allocated_capacity = t1139;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1140:
  _Bool __retval1141;
    _Bool c1142 = 0;
    __retval1141 = c1142;
    _Bool t1143 = __retval1141;
    return t1143;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1144) {
bb1145:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1146;
  this1146 = v1144;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1147 = this1146;
    _Bool r1148 = std__is_constant_evaluated();
    if (r1148) {
        unsigned long __i1149;
        unsigned long c1150 = 0;
        __i1149 = c1150;
        while (1) {
          unsigned long t1152 = __i1149;
          unsigned long c1153 = 15;
          _Bool c1154 = ((t1152 <= c1153)) ? 1 : 0;
          if (!c1154) break;
          char c1155 = 0;
          unsigned long t1156 = __i1149;
          t1147->field2._M_local_buf[t1156] = c1155;
        for_step1151: ;
          unsigned long t1157 = __i1149;
          unsigned long u1158 = t1157 + 1;
          __i1149 = u1158;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1159, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1160) {
bb1161:
  struct _Guard* this1162;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1163;
  this1162 = v1159;
  __s1163 = v1160;
  struct _Guard* t1164 = this1162;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1165 = __s1163;
  t1164->_M_guarded = t1165;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1166, char* v1167) {
bb1168:
  char* __location1169;
  char* __args1170;
  char* __retval1171;
  void* __loc1172;
  __location1169 = v1166;
  __args1170 = v1167;
  char* t1173 = __location1169;
  void* cast1174 = (void*)t1173;
  __loc1172 = cast1174;
    void* t1175 = __loc1172;
    char* cast1176 = (char*)t1175;
    char* t1177 = __args1170;
    char t1178 = *t1177;
    *cast1176 = t1178;
    __retval1171 = cast1176;
    char* t1179 = __retval1171;
    return t1179;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1180, char* v1181) {
bb1182:
  char* __c11183;
  char* __c21184;
  __c11183 = v1180;
  __c21184 = v1181;
    _Bool r1185 = std____is_constant_evaluated();
    if (r1185) {
      char* t1186 = __c11183;
      char* t1187 = __c21184;
      char* r1188 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1186, t1187);
    } else {
      char* t1189 = __c21184;
      char t1190 = *t1189;
      char* t1191 = __c11183;
      *t1191 = t1190;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1192, char* v1193, unsigned long v1194) {
bb1195:
  char* __s11196;
  char* __s21197;
  unsigned long __n1198;
  char* __retval1199;
  __s11196 = v1192;
  __s21197 = v1193;
  __n1198 = v1194;
    unsigned long t1200 = __n1198;
    unsigned long c1201 = 0;
    _Bool c1202 = ((t1200 == c1201)) ? 1 : 0;
    if (c1202) {
      char* t1203 = __s11196;
      __retval1199 = t1203;
      char* t1204 = __retval1199;
      return t1204;
    }
    _Bool r1205 = std____is_constant_evaluated();
    if (r1205) {
        unsigned long __i1206;
        unsigned long c1207 = 0;
        __i1206 = c1207;
        while (1) {
          unsigned long t1209 = __i1206;
          unsigned long t1210 = __n1198;
          _Bool c1211 = ((t1209 < t1210)) ? 1 : 0;
          if (!c1211) break;
          char* t1212 = __s11196;
          unsigned long t1213 = __i1206;
          char* ptr1214 = &(t1212)[t1213];
          unsigned long t1215 = __i1206;
          char* t1216 = __s21197;
          char* ptr1217 = &(t1216)[t1215];
          char* r1218 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1214, ptr1217);
        for_step1208: ;
          unsigned long t1219 = __i1206;
          unsigned long u1220 = t1219 + 1;
          __i1206 = u1220;
        }
      char* t1221 = __s11196;
      __retval1199 = t1221;
      char* t1222 = __retval1199;
      return t1222;
    }
  char* t1223 = __s11196;
  void* cast1224 = (void*)t1223;
  char* t1225 = __s21197;
  void* cast1226 = (void*)t1225;
  unsigned long t1227 = __n1198;
  unsigned long c1228 = 1;
  unsigned long b1229 = t1227 * c1228;
  void* r1230 = memcpy(cast1224, cast1226, b1229);
  char* t1231 = __s11196;
  __retval1199 = t1231;
  char* t1232 = __retval1199;
  return t1232;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1233, char* v1234, unsigned long v1235) {
bb1236:
  char* __s11237;
  char* __s21238;
  unsigned long __n1239;
  char* __retval1240;
  __s11237 = v1233;
  __s21238 = v1234;
  __n1239 = v1235;
    unsigned long t1241 = __n1239;
    unsigned long c1242 = 0;
    _Bool c1243 = ((t1241 == c1242)) ? 1 : 0;
    if (c1243) {
      char* t1244 = __s11237;
      __retval1240 = t1244;
      char* t1245 = __retval1240;
      return t1245;
    }
    _Bool r1246 = std____is_constant_evaluated();
    if (r1246) {
      char* t1247 = __s11237;
      char* t1248 = __s21238;
      unsigned long t1249 = __n1239;
      char* r1250 = __gnu_cxx__char_traits_char___copy(t1247, t1248, t1249);
      __retval1240 = r1250;
      char* t1251 = __retval1240;
      return t1251;
    }
  char* t1252 = __s11237;
  void* cast1253 = (void*)t1252;
  char* t1254 = __s21238;
  void* cast1255 = (void*)t1254;
  unsigned long t1256 = __n1239;
  void* r1257 = memcpy(cast1253, cast1255, t1256);
  char* cast1258 = (char*)r1257;
  __retval1240 = cast1258;
  char* t1259 = __retval1240;
  return t1259;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1260, char* v1261, unsigned long v1262) {
bb1263:
  char* __d1264;
  char* __s1265;
  unsigned long __n1266;
  __d1264 = v1260;
  __s1265 = v1261;
  __n1266 = v1262;
    unsigned long t1267 = __n1266;
    unsigned long c1268 = 1;
    _Bool c1269 = ((t1267 == c1268)) ? 1 : 0;
    if (c1269) {
      char* t1270 = __d1264;
      char* t1271 = __s1265;
      std__char_traits_char___assign(t1270, t1271);
    } else {
      char* t1272 = __d1264;
      char* t1273 = __s1265;
      unsigned long t1274 = __n1266;
      char* r1275 = std__char_traits_char___copy(t1272, t1273, t1274);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1276) {
bb1277:
  char* __it1278;
  char* __retval1279;
  __it1278 = v1276;
  char* t1280 = __it1278;
  __retval1279 = t1280;
  char* t1281 = __retval1279;
  return t1281;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1282, char* v1283, char* v1284) {
bb1285:
  char* __p1286;
  char* __k11287;
  char* __k21288;
  __p1286 = v1282;
  __k11287 = v1283;
  __k21288 = v1284;
    char* t1289 = __p1286;
    char* t1290 = __k11287;
    char* r1291 = char_const__std____niter_base_char_const__(t1290);
    char* t1292 = __k21288;
    char* t1293 = __k11287;
    long diff1294 = t1292 - t1293;
    unsigned long cast1295 = (unsigned long)diff1294;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1289, r1291, cast1295);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1296) {
bb1297:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1298;
  char* __retval1299;
  this1298 = v1296;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1300 = this1298;
  char* t1301 = t1300->_M_dataplus._M_p;
  __retval1299 = t1301;
  char* t1302 = __retval1299;
  return t1302;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1303, unsigned long v1304) {
bb1305:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1306;
  unsigned long __length1307;
  this1306 = v1303;
  __length1307 = v1304;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1308 = this1306;
  unsigned long t1309 = __length1307;
  t1308->_M_string_length = t1309;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1310, unsigned long v1311) {
bb1312:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1313;
  unsigned long __n1314;
  char ref_tmp01315;
  this1313 = v1310;
  __n1314 = v1311;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1316 = this1313;
  unsigned long t1317 = __n1314;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1316, t1317);
  unsigned long t1318 = __n1314;
  char* r1319 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1316);
  char* ptr1320 = &(r1319)[t1318];
  char c1321 = 0;
  ref_tmp01315 = c1321;
  std__char_traits_char___assign(ptr1320, &ref_tmp01315);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1322) {
bb1323:
  struct _Guard* this1324;
  this1324 = v1322;
  struct _Guard* t1325 = this1324;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1326 = t1325->_M_guarded;
    _Bool cast1327 = (_Bool)t1326;
    if (cast1327) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1328 = t1325->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1328);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1329, char* v1330, char* v1331, struct std__forward_iterator_tag v1332) {
bb1333:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1334;
  char* __beg1335;
  char* __end1336;
  struct std__forward_iterator_tag unnamed1337;
  unsigned long __dnew1338;
  struct _Guard __guard1339;
  this1334 = v1329;
  __beg1335 = v1330;
  __end1336 = v1331;
  unnamed1337 = v1332;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1340 = this1334;
  char* t1341 = __beg1335;
  char* t1342 = __end1336;
  long r1343 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1341, t1342);
  unsigned long cast1344 = (unsigned long)r1343;
  __dnew1338 = cast1344;
    unsigned long t1345 = __dnew1338;
    unsigned long c1346 = 15;
    _Bool c1347 = ((t1345 > c1346)) ? 1 : 0;
    if (c1347) {
      unsigned long c1348 = 0;
      char* r1349 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1340, &__dnew1338, c1348);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1340, r1349);
      unsigned long t1350 = __dnew1338;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1340, t1350);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1340);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1339, t1340);
    char* r1351 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1340);
    char* t1352 = __beg1335;
    char* t1353 = __end1336;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1351, t1352, t1353);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1354 = ((void*)0);
    __guard1339._M_guarded = c1354;
    unsigned long t1355 = __dnew1338;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1340, t1355);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1339);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1356) {
bb1357:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1358;
  this1358 = v1356;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1359 = this1358;
  {
    struct std__allocator_char_* base1360 = (struct std__allocator_char_*)((char *)t1359 + 0);
    std__allocator_char____allocator(base1360);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1361, struct std____new_allocator_char_* v1362) {
bb1363:
  struct std____new_allocator_char_* this1364;
  struct std____new_allocator_char_* unnamed1365;
  this1364 = v1361;
  unnamed1365 = v1362;
  struct std____new_allocator_char_* t1366 = this1364;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1367) {
bb1368:
  char* __r1369;
  char* __retval1370;
  __r1369 = v1367;
  char* t1371 = __r1369;
  __retval1370 = t1371;
  char* t1372 = __retval1370;
  return t1372;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1373) {
bb1374:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1375;
  char* __retval1376;
  this1375 = v1373;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1377 = this1375;
  char* cast1378 = (char*)&(t1377->field2._M_local_buf);
  char* r1379 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1378);
  __retval1376 = r1379;
  char* t1380 = __retval1376;
  return t1380;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1381) {
bb1382:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1383;
  _Bool __retval1384;
  this1383 = v1381;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1385 = this1383;
    char* r1386 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1385);
    char* r1387 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1385);
    _Bool c1388 = ((r1386 == r1387)) ? 1 : 0;
    if (c1388) {
        unsigned long t1389 = t1385->_M_string_length;
        unsigned long c1390 = 15;
        _Bool c1391 = ((t1389 > c1390)) ? 1 : 0;
        if (c1391) {
          __builtin_unreachable();
        }
      _Bool c1392 = 1;
      __retval1384 = c1392;
      _Bool t1393 = __retval1384;
      return t1393;
    }
  _Bool c1394 = 0;
  __retval1384 = c1394;
  _Bool t1395 = __retval1384;
  return t1395;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1396, char* v1397, unsigned long v1398) {
bb1399:
  struct std____new_allocator_char_* this1400;
  char* __p1401;
  unsigned long __n1402;
  this1400 = v1396;
  __p1401 = v1397;
  __n1402 = v1398;
  struct std____new_allocator_char_* t1403 = this1400;
    unsigned long c1404 = 1;
    unsigned long c1405 = 16;
    _Bool c1406 = ((c1404 > c1405)) ? 1 : 0;
    if (c1406) {
      char* t1407 = __p1401;
      void* cast1408 = (void*)t1407;
      unsigned long t1409 = __n1402;
      unsigned long c1410 = 1;
      unsigned long b1411 = t1409 * c1410;
      unsigned long c1412 = 1;
      operator_delete_3(cast1408, b1411, c1412);
      return;
    }
  char* t1413 = __p1401;
  void* cast1414 = (void*)t1413;
  unsigned long t1415 = __n1402;
  unsigned long c1416 = 1;
  unsigned long b1417 = t1415 * c1416;
  operator_delete_2(cast1414, b1417);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1418, char* v1419, unsigned long v1420) {
bb1421:
  struct std__allocator_char_* this1422;
  char* __p1423;
  unsigned long __n1424;
  this1422 = v1418;
  __p1423 = v1419;
  __n1424 = v1420;
  struct std__allocator_char_* t1425 = this1422;
    _Bool r1426 = std____is_constant_evaluated();
    if (r1426) {
      char* t1427 = __p1423;
      void* cast1428 = (void*)t1427;
      operator_delete(cast1428);
      return;
    }
  struct std____new_allocator_char_* base1429 = (struct std____new_allocator_char_*)((char *)t1425 + 0);
  char* t1430 = __p1423;
  unsigned long t1431 = __n1424;
  std____new_allocator_char___deallocate(base1429, t1430, t1431);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1432, char* v1433, unsigned long v1434) {
bb1435:
  struct std__allocator_char_* __a1436;
  char* __p1437;
  unsigned long __n1438;
  __a1436 = v1432;
  __p1437 = v1433;
  __n1438 = v1434;
  struct std__allocator_char_* t1439 = __a1436;
  char* t1440 = __p1437;
  unsigned long t1441 = __n1438;
  std__allocator_char___deallocate(t1439, t1440, t1441);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1442, unsigned long v1443) {
bb1444:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1445;
  unsigned long __size1446;
  this1445 = v1442;
  __size1446 = v1443;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1447 = this1445;
  struct std__allocator_char_* r1448 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1447);
  char* r1449 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1447);
  unsigned long t1450 = __size1446;
  unsigned long c1451 = 1;
  unsigned long b1452 = t1450 + c1451;
  std__allocator_traits_std__allocator_char_____deallocate(r1448, r1449, b1452);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1453) {
bb1454:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1455;
  this1455 = v1453;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1456 = this1455;
    _Bool r1457 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1456);
    _Bool u1458 = !r1457;
    if (u1458) {
      unsigned long t1459 = t1456->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1456, t1459);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1460, char* v1461, struct std__allocator_char_* v1462) {
bb1463:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1464;
  char* __dat1465;
  struct std__allocator_char_* __a1466;
  this1464 = v1460;
  __dat1465 = v1461;
  __a1466 = v1462;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1467 = this1464;
  struct std__allocator_char_* base1468 = (struct std__allocator_char_*)((char *)t1467 + 0);
  struct std__allocator_char_* t1469 = __a1466;
  std__allocator_char___allocator(base1468, t1469);
    char* t1470 = __dat1465;
    t1467->_M_p = t1470;
  return;
}

