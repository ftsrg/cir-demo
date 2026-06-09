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
struct std____cmp_cat____unspec { unsigned char __field0; };
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
struct std__strong_ordering { char _M_value; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

struct std____cmp_cat____unspec __const_main_agg_tmp7;
struct std____cmp_cat____unspec __const_main_agg_tmp5;
struct std____cmp_cat____unspec __const_main_agg_tmp3;
struct std____cmp_cat____unspec __const_main_agg_tmp1;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[6] = "happy";
char _str_1[10] = " birthday";
char _str_2[15] = "happy birthday";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[8] = "s1 is \"";
char _str_4[11] = "\"; s2 is \"";
char _str_5[11] = "\"; s3 is \"";
char _str_6[38] = "\n\nThe results of comparing s2 and s1:";
char _str_7[18] = "\ns2 == s1 yields ";
char _str_8[5] = "true";
char _str_9[6] = "false";
char _str_10[18] = "\ns2 != s1 yields ";
char _str_11[18] = "\ns2 >  s1 yields ";
char _str_12[18] = "\ns2 <  s1 yields ";
char _str_13[18] = "\ns2 >= s1 yields ";
char _str_14[18] = "\ns2 <= s1 yields ";
char _str_15[23] = "\n\nTesting s3.empty():\n";
char _str_16[34] = "s3 is empty; assigning s1 to s3;\n";
char _str_17[8] = "s3 is \"";
char _str_18[2] = "\"";
char _str_19[24] = "\n\ns1 += s2 yields s1 = ";
char _str_20[26] = "\n\ns1 += \" to you\" yields\n";
char _str_21[8] = " to you";
char _str_22[6] = "s1 = ";
char _str_23[3] = "\n\n";
char _str_24[48] = "The substring of s1 starting at location 0 for\n";
char _str_25[38] = "14 characters, s1.substr(0, 14), is:\n";
char _str_26[33] = "The substring of s1 starting at\n";
char _str_27[33] = "location 15, s1.substr(15), is:\n";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
char _str_28[11] = "\n*s4Ptr = ";
char _str_29[28] = "assigning *s4Ptr to *s4Ptr\n";
char _str_30[10] = "*s4Ptr = ";
char _str_31[43] = "\ns1 after s1[0] = 'H' and s1[6] = 'B' is: ";
char _str_32[45] = "Attempt to assign 'd' to s1.at( 30 ) yields:";
char _str_33[50] = "basic_string: construction from null is not valid";
char _str_34[24] = "basic_string::_M_create";
int _ZN9__gnu_cxx24__numeric_traits_integerIiE5__maxE __attribute__((aligned(4))) = 2147483647;
int _ZN9__gnu_cxx24__numeric_traits_integerIiE5__minE __attribute__((aligned(4))) = -2147483648;
char _str_35[21] = "basic_string::append";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
char _str_36[21] = "basic_string::substr";
char _str_37[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_38[27] = "basic_string::basic_string";
char _str_39[93] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/basic_string.h";
char __PRETTY_FUNCTION____ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm[138] = "reference std::basic_string<char>::operator[](size_type) [_CharT = char, _Traits = std::char_traits<char>, _Alloc = std::allocator<char>]";
char _str_40[16] = "__pos <= size()";
char _str_41[68] = "basic_string::at: __n (which is %zu) >= this->size() (which is %zu)";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__3(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
_Bool std__operator_(struct std__strong_ordering p0, struct std____cmp_cat____unspec p1);
struct std__strong_ordering auto_std____detail____char_traits_cmp_cat_std__char_traits_char___(int p0);
int std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_compare(unsigned long p0, unsigned long p1);
int std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____compare_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
struct std__strong_ordering decltype_____detail____char_traits_cmp_cat_std__char_traits_char_____0___std__operator____char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
_Bool std__operator__2(struct std__strong_ordering p0, struct std____cmp_cat____unspec p1);
_Bool std__operator___2(struct std__strong_ordering p0, struct std____cmp_cat____unspec p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_unsigned_long_(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* p0);
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std__allocator_char_* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(char* p0, unsigned long p1, char* p2, unsigned long p3, struct std__allocator_char_* p4);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
_Bool std__operator___3(struct std__strong_ordering p0, struct std____cmp_cat____unspec p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____empty___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_copy_assign();
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_always_equal();
_Bool std__operator__(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void void_std____alloc_on_copy_std__allocator_char___(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator___3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator___2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1, unsigned long p2, unsigned long p3);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____at(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
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
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_char___deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_true_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);

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
        char* cast20 = (char*)&(_str_33);
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

// function: _ZStorSt12_Ios_IostateS_
int std__operator__3(int v32, int v33) {
bb34:
  int __a35;
  int __b36;
  int __retval37;
  __a35 = v32;
  __b36 = v33;
  int t38 = __a35;
  int t39 = __b36;
  int b40 = t38 | t39;
  __retval37 = b40;
  int t41 = __retval37;
  return t41;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v42) {
bb43:
  struct std__basic_ios_char__std__char_traits_char__* this44;
  int __retval45;
  this44 = v42;
  struct std__basic_ios_char__std__char_traits_char__* t46 = this44;
  struct std__ios_base* base47 = (struct std__ios_base*)((char *)t46 + 0);
  int t48 = base47->_M_streambuf_state;
  __retval45 = t48;
  int t49 = __retval45;
  return t49;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v50, int v51) {
bb52:
  struct std__basic_ios_char__std__char_traits_char__* this53;
  int __state54;
  this53 = v50;
  __state54 = v51;
  struct std__basic_ios_char__std__char_traits_char__* t55 = this53;
  int r56 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t55);
  int t57 = __state54;
  int r58 = std__operator__3(r56, t57);
  std__basic_ios_char__std__char_traits_char_____clear(t55, r58);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v59, char* v60) {
bb61:
  struct std__basic_ostream_char__std__char_traits_char__* __out62;
  char* __s63;
  struct std__basic_ostream_char__std__char_traits_char__* __retval64;
  __out62 = v59;
  __s63 = v60;
    char* t65 = __s63;
    _Bool cast66 = (_Bool)t65;
    _Bool u67 = !cast66;
    if (u67) {
      struct std__basic_ostream_char__std__char_traits_char__* t68 = __out62;
      void** v69 = (void**)t68;
      void* v70 = *((void**)v69);
      unsigned char* cast71 = (unsigned char*)v70;
      long c72 = -24;
      unsigned char* ptr73 = &(cast71)[c72];
      long* cast74 = (long*)ptr73;
      long t75 = *cast74;
      unsigned char* cast76 = (unsigned char*)t68;
      unsigned char* ptr77 = &(cast76)[t75];
      struct std__basic_ostream_char__std__char_traits_char__* cast78 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr77;
      struct std__basic_ios_char__std__char_traits_char__* cast79 = (struct std__basic_ios_char__std__char_traits_char__*)cast78;
      int t80 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast79, t80);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t81 = __out62;
      char* t82 = __s63;
      char* t83 = __s63;
      unsigned long r84 = std__char_traits_char___length(t83);
      long cast85 = (long)r84;
      struct std__basic_ostream_char__std__char_traits_char__* r86 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t81, t82, cast85);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t87 = __out62;
  __retval64 = t87;
  struct std__basic_ostream_char__std__char_traits_char__* t88 = __retval64;
  return t88;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v89, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v90) {
bb91:
  struct std__basic_ostream_char__std__char_traits_char__* __os92;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str93;
  struct std__basic_ostream_char__std__char_traits_char__* __retval94;
  __os92 = v89;
  __str93 = v90;
  struct std__basic_ostream_char__std__char_traits_char__* t95 = __os92;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t96 = __str93;
  char* r97 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t96);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t98 = __str93;
  unsigned long r99 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t98);
  long cast100 = (long)r99;
  struct std__basic_ostream_char__std__char_traits_char__* r101 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t95, r97, cast100);
  __retval94 = r101;
  struct std__basic_ostream_char__std__char_traits_char__* t102 = __retval94;
  return t102;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v103) {
bb104:
  struct std__ios_base* this105;
  long __retval106;
  this105 = v103;
  struct std__ios_base* t107 = this105;
  long t108 = t107->_M_width;
  __retval106 = t108;
  long t109 = __retval106;
  return t109;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v110, char v111) {
bb112:
  struct std__basic_ostream_char__std__char_traits_char__* __out113;
  char __c114;
  struct std__basic_ostream_char__std__char_traits_char__* __retval115;
  __out113 = v110;
  __c114 = v111;
    struct std__basic_ostream_char__std__char_traits_char__* t116 = __out113;
    void** v117 = (void**)t116;
    void* v118 = *((void**)v117);
    unsigned char* cast119 = (unsigned char*)v118;
    long c120 = -24;
    unsigned char* ptr121 = &(cast119)[c120];
    long* cast122 = (long*)ptr121;
    long t123 = *cast122;
    unsigned char* cast124 = (unsigned char*)t116;
    unsigned char* ptr125 = &(cast124)[t123];
    struct std__basic_ostream_char__std__char_traits_char__* cast126 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr125;
    struct std__ios_base* cast127 = (struct std__ios_base*)cast126;
    long r128 = std__ios_base__width___const(cast127);
    long c129 = 0;
    _Bool c130 = ((r128 != c129)) ? 1 : 0;
    if (c130) {
      struct std__basic_ostream_char__std__char_traits_char__* t131 = __out113;
      long c132 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r133 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t131, &__c114, c132);
      __retval115 = r133;
      struct std__basic_ostream_char__std__char_traits_char__* t134 = __retval115;
      return t134;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t135 = __out113;
  char t136 = __c114;
  struct std__basic_ostream_char__std__char_traits_char__* r137 = std__ostream__put(t135, t136);
  struct std__basic_ostream_char__std__char_traits_char__* t138 = __out113;
  __retval115 = t138;
  struct std__basic_ostream_char__std__char_traits_char__* t139 = __retval115;
  return t139;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v140) {
bb141:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this142;
  unsigned long __retval143;
  unsigned long __sz144;
  this142 = v140;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t145 = this142;
  unsigned long t146 = t145->_M_string_length;
  __sz144 = t146;
    unsigned long t147 = __sz144;
    unsigned long r148 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t145);
    _Bool c149 = ((t147 > r148)) ? 1 : 0;
    if (c149) {
      __builtin_unreachable();
    }
  unsigned long t150 = __sz144;
  __retval143 = t150;
  unsigned long t151 = __retval143;
  return t151;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v152, char* v153) {
bb154:
  char* __c1155;
  char* __c2156;
  _Bool __retval157;
  __c1155 = v152;
  __c2156 = v153;
  char* t158 = __c1155;
  char t159 = *t158;
  unsigned char cast160 = (unsigned char)t159;
  int cast161 = (int)cast160;
  char* t162 = __c2156;
  char t163 = *t162;
  unsigned char cast164 = (unsigned char)t163;
  int cast165 = (int)cast164;
  _Bool c166 = ((cast161 < cast165)) ? 1 : 0;
  __retval157 = c166;
  _Bool t167 = __retval157;
  return t167;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v168, char* v169, unsigned long v170) {
bb171:
  char* __s1172;
  char* __s2173;
  unsigned long __n174;
  int __retval175;
  __s1172 = v168;
  __s2173 = v169;
  __n174 = v170;
    unsigned long t176 = __n174;
    unsigned long c177 = 0;
    _Bool c178 = ((t176 == c177)) ? 1 : 0;
    if (c178) {
      int c179 = 0;
      __retval175 = c179;
      int t180 = __retval175;
      return t180;
    }
    _Bool r181 = std____is_constant_evaluated();
    if (r181) {
        unsigned long __i182;
        unsigned long c183 = 0;
        __i182 = c183;
        while (1) {
          unsigned long t185 = __i182;
          unsigned long t186 = __n174;
          _Bool c187 = ((t185 < t186)) ? 1 : 0;
          if (!c187) break;
            unsigned long t188 = __i182;
            char* t189 = __s1172;
            char* ptr190 = &(t189)[t188];
            unsigned long t191 = __i182;
            char* t192 = __s2173;
            char* ptr193 = &(t192)[t191];
            _Bool r194 = std__char_traits_char___lt(ptr190, ptr193);
            if (r194) {
              int c195 = -1;
              __retval175 = c195;
              int t196 = __retval175;
              int ret_val197 = t196;
              return ret_val197;
            } else {
                unsigned long t198 = __i182;
                char* t199 = __s2173;
                char* ptr200 = &(t199)[t198];
                unsigned long t201 = __i182;
                char* t202 = __s1172;
                char* ptr203 = &(t202)[t201];
                _Bool r204 = std__char_traits_char___lt(ptr200, ptr203);
                if (r204) {
                  int c205 = 1;
                  __retval175 = c205;
                  int t206 = __retval175;
                  int ret_val207 = t206;
                  return ret_val207;
                }
            }
        for_step184: ;
          unsigned long t208 = __i182;
          unsigned long u209 = t208 + 1;
          __i182 = u209;
        }
      int c210 = 0;
      __retval175 = c210;
      int t211 = __retval175;
      return t211;
    }
  char* t212 = __s1172;
  void* cast213 = (void*)t212;
  char* t214 = __s2173;
  void* cast215 = (void*)t214;
  unsigned long t216 = __n174;
  int r217 = memcmp(cast213, cast215, t216);
  __retval175 = r217;
  int t218 = __retval175;
  return t218;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v219) {
bb220:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this221;
  char* __retval222;
  this221 = v219;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t223 = this221;
  char* r224 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t223);
  __retval222 = r224;
  char* t225 = __retval222;
  return t225;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EESA_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v226, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v227) {
bb228:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs229;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __rhs230;
  _Bool __retval231;
  __lhs229 = v226;
  __rhs230 = v227;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t232 = __lhs229;
  unsigned long r233 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t232);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t234 = __rhs230;
  unsigned long r235 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t234);
  _Bool c236 = ((r233 == r235)) ? 1 : 0;
  _Bool ternary237;
  if (c236) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t238 = __lhs229;
    char* r239 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t238);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t240 = __rhs230;
    char* r241 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t240);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t242 = __lhs229;
    unsigned long r243 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t242);
    int r244 = std__char_traits_char___compare(r239, r241, r243);
    _Bool cast245 = (_Bool)r244;
    _Bool u246 = !cast245;
    ternary237 = (_Bool)u246;
  } else {
    _Bool c247 = 0;
    ternary237 = (_Bool)c247;
  }
  __retval231 = ternary237;
  _Bool t248 = __retval231;
  return t248;
}

// function: _ZStgtSt15strong_orderingNSt9__cmp_cat8__unspecE
_Bool std__operator_(struct std__strong_ordering v249, struct std____cmp_cat____unspec v250) {
bb251:
  struct std__strong_ordering __v252;
  struct std____cmp_cat____unspec unnamed253;
  _Bool __retval254;
  __v252 = v249;
  unnamed253 = v250;
  char t255 = __v252._M_value;
  int cast256 = (int)t255;
  int c257 = 0;
  _Bool c258 = ((cast256 > c257)) ? 1 : 0;
  __retval254 = c258;
  _Bool t259 = __retval254;
  return t259;
}

// function: _ZNSt8__detail21__char_traits_cmp_catISt11char_traitsIcEEEDai
struct std__strong_ordering auto_std____detail____char_traits_cmp_cat_std__char_traits_char___(int v260) {
bb261:
  int __cmp262;
  struct std__strong_ordering __retval263;
  __cmp262 = v260;
    int t264 = __cmp262;
    int c265 = 0;
    char c266 = -1;
    char c267 = 0;
    char c268 = 1;
    _Bool c269 = ((t264 < c265)) ? 1 : 0;
    char sel270 = c269 ? c266 : c268;
    _Bool c271 = ((t264 == c265)) ? 1 : 0;
    char sel272 = c271 ? c267 : sel270;
    __retval263._M_value = sel272;
    struct std__strong_ordering t273 = __retval263;
    return t273;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_S_compareEmm
int std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_compare(unsigned long v274, unsigned long v275) {
bb276:
  unsigned long __n1277;
  unsigned long __n2278;
  int __retval279;
  long __d280;
  __n1277 = v274;
  __n2278 = v275;
  unsigned long t281 = __n1277;
  unsigned long t282 = __n2278;
  unsigned long b283 = t281 - t282;
  long cast284 = (long)b283;
  __d280 = cast284;
    long t285 = __d280;
    int t286 = _ZN9__gnu_cxx24__numeric_traits_integerIiE5__maxE;
    long cast287 = (long)t286;
    _Bool c288 = ((t285 > cast287)) ? 1 : 0;
    if (c288) {
      int t289 = _ZN9__gnu_cxx24__numeric_traits_integerIiE5__maxE;
      __retval279 = t289;
      int t290 = __retval279;
      return t290;
    } else {
        long t291 = __d280;
        int t292 = _ZN9__gnu_cxx24__numeric_traits_integerIiE5__minE;
        long cast293 = (long)t292;
        _Bool c294 = ((t291 < cast293)) ? 1 : 0;
        if (c294) {
          int t295 = _ZN9__gnu_cxx24__numeric_traits_integerIiE5__minE;
          __retval279 = t295;
          int t296 = __retval279;
          return t296;
        } else {
          long t297 = __d280;
          int cast298 = (int)t297;
          __retval279 = cast298;
          int t299 = __retval279;
          return t299;
        }
    }
  abort();
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7compareERKS4_
int std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____compare_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v300, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v301) {
bb302:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this303;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str304;
  int __retval305;
  unsigned long __size306;
  unsigned long __osize307;
  unsigned long __len308;
  int __r309;
  this303 = v300;
  __str304 = v301;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t310 = this303;
  unsigned long r311 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t310);
  __size306 = r311;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t312 = __str304;
  unsigned long r313 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t312);
  __osize307 = r313;
  unsigned long* r314 = unsigned_long_const__std__min_unsigned_long_(&__size306, &__osize307);
  unsigned long t315 = *r314;
  __len308 = t315;
  char* r316 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t310);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t317 = __str304;
  char* r318 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t317);
  unsigned long t319 = __len308;
  int r320 = std__char_traits_char___compare(r316, r318, t319);
  __r309 = r320;
    int t321 = __r309;
    _Bool cast322 = (_Bool)t321;
    _Bool u323 = !cast322;
    if (u323) {
      unsigned long t324 = __size306;
      unsigned long t325 = __osize307;
      int r326 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_compare(t324, t325);
      __r309 = r326;
    }
  int t327 = __r309;
  __retval305 = t327;
  int t328 = __retval305;
  return t328;
}

// function: _ZStssIcSt11char_traitsIcESaIcEEDTclsr8__detailE21__char_traits_cmp_catIT0_ELi0EEERKNSt7__cxx1112basic_stringIT_S3_T1_EESB_
struct std__strong_ordering decltype_____detail____char_traits_cmp_cat_std__char_traits_char_____0___std__operator____char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v329, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v330) {
bb331:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs332;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __rhs333;
  struct std__strong_ordering __retval334;
  __lhs332 = v329;
  __rhs333 = v330;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t335 = __lhs332;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t336 = __rhs333;
  int r337 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____compare_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____const___const(t335, t336);
  struct std__strong_ordering r338 = auto_std____detail____char_traits_cmp_cat_std__char_traits_char___(r337);
  __retval334 = r338;
  struct std__strong_ordering t339 = __retval334;
  return t339;
}

// function: _ZStltSt15strong_orderingNSt9__cmp_cat8__unspecE
_Bool std__operator__2(struct std__strong_ordering v340, struct std____cmp_cat____unspec v341) {
bb342:
  struct std__strong_ordering __v343;
  struct std____cmp_cat____unspec unnamed344;
  _Bool __retval345;
  __v343 = v340;
  unnamed344 = v341;
  char t346 = __v343._M_value;
  int cast347 = (int)t346;
  int c348 = 0;
  _Bool c349 = ((cast347 < c348)) ? 1 : 0;
  __retval345 = c349;
  _Bool t350 = __retval345;
  return t350;
}

// function: _ZStgeSt15strong_orderingNSt9__cmp_cat8__unspecE
_Bool std__operator___2(struct std__strong_ordering v351, struct std____cmp_cat____unspec v352) {
bb353:
  struct std__strong_ordering __v354;
  struct std____cmp_cat____unspec unnamed355;
  _Bool __retval356;
  __v354 = v351;
  unnamed355 = v352;
  char t357 = __v354._M_value;
  int cast358 = (int)t357;
  int c359 = 0;
  _Bool c360 = ((cast358 >= c359)) ? 1 : 0;
  __retval356 = c360;
  _Bool t361 = __retval356;
  return t361;
}

// function: _ZNSolsEm
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v362, unsigned long v363) {
bb364:
  struct std__basic_ostream_char__std__char_traits_char__* this365;
  unsigned long __n366;
  struct std__basic_ostream_char__std__char_traits_char__* __retval367;
  this365 = v362;
  __n366 = v363;
  struct std__basic_ostream_char__std__char_traits_char__* t368 = this365;
  unsigned long t369 = __n366;
  struct std__basic_ostream_char__std__char_traits_char__* r370 = std__ostream__std__ostream___M_insert_unsigned_long_(t368, t369);
  __retval367 = r370;
  struct std__basic_ostream_char__std__char_traits_char__* t371 = __retval367;
  return t371;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v372) {
bb373:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this374;
  unsigned long __retval375;
  this374 = v372;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t376 = this374;
  unsigned long r377 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t376);
  __retval375 = r377;
  unsigned long t378 = __retval375;
  return t378;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v379, struct std__allocator_char_* v380) {
bb381:
  struct std__allocator_char_* this382;
  struct std__allocator_char_* __a383;
  this382 = v379;
  __a383 = v380;
  struct std__allocator_char_* t384 = this382;
  struct std____new_allocator_char_* base385 = (struct std____new_allocator_char_*)((char *)t384 + 0);
  struct std__allocator_char_* t386 = __a383;
  struct std____new_allocator_char_* base387 = (struct std____new_allocator_char_*)((char *)t386 + 0);
  std____new_allocator_char_____new_allocator(base385, base387);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE37select_on_container_copy_constructionERKS0_
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* v388) {
bb389:
  struct std__allocator_char_* __rhs390;
  struct std__allocator_char_ __retval391;
  __rhs390 = v388;
  struct std__allocator_char_* t392 = __rhs390;
  std__allocator_char___allocator(&__retval391, t392);
  struct std__allocator_char_ t393 = __retval391;
  return t393;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE17_S_select_on_copyERKS1_
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* v394) {
bb395:
  struct std__allocator_char_* __a396;
  struct std__allocator_char_ __retval397;
  __a396 = v394;
  struct std__allocator_char_* t398 = __a396;
  struct std__allocator_char_ r399 = std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(t398);
  __retval397 = r399;
  struct std__allocator_char_ t400 = __retval397;
  return t400;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v401, struct std__allocator_char_* v402) {
bb403:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this404;
  struct std__allocator_char_* __a405;
  this404 = v401;
  __a405 = v402;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t406 = this404;
  char* r407 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t406);
  struct std__allocator_char_* t408 = __a405;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t406->_M_dataplus, r407, t408);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t406);
    unsigned long c409 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t406, c409);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v410) {
bb411:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this412;
  unsigned long __retval413;
  unsigned long __sz414;
  this412 = v410;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t415 = this412;
  _Bool r416 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t415);
  unsigned long ternary417;
  if (r416) {
    unsigned long c418 = 15;
    ternary417 = (unsigned long)c418;
  } else {
    unsigned long t419 = t415->field2._M_allocated_capacity;
    ternary417 = (unsigned long)t419;
  }
  __sz414 = ternary417;
    unsigned long t420 = __sz414;
    unsigned long c421 = 15;
    _Bool c422 = ((t420 < c421)) ? 1 : 0;
    _Bool ternary423;
    if (c422) {
      _Bool c424 = 1;
      ternary423 = (_Bool)c424;
    } else {
      unsigned long t425 = __sz414;
      unsigned long r426 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t415);
      _Bool c427 = ((t425 > r426)) ? 1 : 0;
      ternary423 = (_Bool)c427;
    }
    if (ternary423) {
      __builtin_unreachable();
    }
  unsigned long t428 = __sz414;
  __retval413 = t428;
  unsigned long t429 = __retval413;
  return t429;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7reserveEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v430, unsigned long v431) {
bb432:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this433;
  unsigned long __res434;
  unsigned long __capacity435;
  char* __tmp436;
  this433 = v430;
  __res434 = v431;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t437 = this433;
  unsigned long r438 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t437);
  __capacity435 = r438;
    unsigned long t439 = __res434;
    unsigned long t440 = __capacity435;
    _Bool c441 = ((t439 <= t440)) ? 1 : 0;
    if (c441) {
      return;
    }
  unsigned long t442 = __capacity435;
  char* r443 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t437, &__res434, t442);
  __tmp436 = r443;
  char* t444 = __tmp436;
  char* r445 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t437);
  unsigned long r446 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t437);
  unsigned long c447 = 1;
  unsigned long b448 = r446 + c447;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t444, r445, b448);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t437);
  char* t449 = __tmp436;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t437, t449);
  unsigned long t450 = __res434;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t437, t450);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v451, unsigned long v452, unsigned long v453, char* v454) {
bb455:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this456;
  unsigned long __n1457;
  unsigned long __n2458;
  char* __s459;
  this456 = v451;
  __n1457 = v452;
  __n2458 = v453;
  __s459 = v454;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t460 = this456;
    unsigned long r461 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t460);
    unsigned long r462 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t460);
    unsigned long t463 = __n1457;
    unsigned long b464 = r462 - t463;
    unsigned long b465 = r461 - b464;
    unsigned long t466 = __n2458;
    _Bool c467 = ((b465 < t466)) ? 1 : 0;
    if (c467) {
      char* t468 = __s459;
      std____throw_length_error(t468);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v469, unsigned long v470, unsigned long v471, char* v472, unsigned long v473) {
bb474:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this475;
  unsigned long __pos476;
  unsigned long __len1477;
  char* __s478;
  unsigned long __len2479;
  unsigned long __how_much480;
  unsigned long __new_capacity481;
  char* __r482;
  this475 = v469;
  __pos476 = v470;
  __len1477 = v471;
  __s478 = v472;
  __len2479 = v473;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t483 = this475;
  unsigned long r484 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t483);
  unsigned long t485 = __pos476;
  unsigned long b486 = r484 - t485;
  unsigned long t487 = __len1477;
  unsigned long b488 = b486 - t487;
  __how_much480 = b488;
  unsigned long r489 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t483);
  unsigned long t490 = __len2479;
  unsigned long b491 = r489 + t490;
  unsigned long t492 = __len1477;
  unsigned long b493 = b491 - t492;
  __new_capacity481 = b493;
  unsigned long r494 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t483);
  char* r495 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t483, &__new_capacity481, r494);
  __r482 = r495;
    unsigned long t496 = __pos476;
    _Bool cast497 = (_Bool)t496;
    if (cast497) {
      char* t498 = __r482;
      char* r499 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t483);
      unsigned long t500 = __pos476;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t498, r499, t500);
    }
    char* t501 = __s478;
    _Bool cast502 = (_Bool)t501;
    _Bool ternary503;
    if (cast502) {
      unsigned long t504 = __len2479;
      _Bool cast505 = (_Bool)t504;
      ternary503 = (_Bool)cast505;
    } else {
      _Bool c506 = 0;
      ternary503 = (_Bool)c506;
    }
    if (ternary503) {
      char* t507 = __r482;
      unsigned long t508 = __pos476;
      char* ptr509 = &(t507)[t508];
      char* t510 = __s478;
      unsigned long t511 = __len2479;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr509, t510, t511);
    }
    unsigned long t512 = __how_much480;
    _Bool cast513 = (_Bool)t512;
    if (cast513) {
      char* t514 = __r482;
      unsigned long t515 = __pos476;
      char* ptr516 = &(t514)[t515];
      unsigned long t517 = __len2479;
      char* ptr518 = &(ptr516)[t517];
      char* r519 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t483);
      unsigned long t520 = __pos476;
      char* ptr521 = &(r519)[t520];
      unsigned long t522 = __len1477;
      char* ptr523 = &(ptr521)[t522];
      unsigned long t524 = __how_much480;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr518, ptr523, t524);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t483);
  char* t525 = __r482;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t483, t525);
  unsigned long t526 = __new_capacity481;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t483, t526);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v527, char* v528, unsigned long v529) {
bb530:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this531;
  char* __s532;
  unsigned long __n533;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval534;
  unsigned long __len535;
  this531 = v527;
  __s532 = v528;
  __n533 = v529;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t536 = this531;
  unsigned long t537 = __n533;
  unsigned long r538 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t536);
  unsigned long b539 = t537 + r538;
  __len535 = b539;
    unsigned long t540 = __len535;
    unsigned long r541 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t536);
    _Bool c542 = ((t540 <= r541)) ? 1 : 0;
    if (c542) {
        unsigned long t543 = __n533;
        _Bool cast544 = (_Bool)t543;
        if (cast544) {
          char* r545 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t536);
          unsigned long r546 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t536);
          char* ptr547 = &(r545)[r546];
          char* t548 = __s532;
          unsigned long t549 = __n533;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr547, t548, t549);
        }
    } else {
      unsigned long r550 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t536);
      unsigned long c551 = 0;
      char* t552 = __s532;
      unsigned long t553 = __n533;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t536, r550, c551, t552, t553);
    }
  unsigned long t554 = __len535;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t536, t554);
  __retval534 = t536;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t555 = __retval534;
  return t555;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v556, char* v557, unsigned long v558) {
bb559:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this560;
  char* __s561;
  unsigned long __n562;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval563;
  this560 = v556;
  __s561 = v557;
  __n562 = v558;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t564 = this560;
  unsigned long c565 = 0;
  unsigned long t566 = __n562;
  char* cast567 = (char*)&(_str_35);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t564, c565, t566, cast567);
  char* t568 = __s561;
  unsigned long t569 = __n562;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r570 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(t564, t568, t569);
  __retval563 = r570;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t571 = __retval563;
  return t571;
}

// function: _ZSt12__str_concatINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEET_PKNS6_10value_typeENS6_9size_typeES9_SA_RKNS6_14allocator_typeE
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(char* v572, unsigned long v573, char* v574, unsigned long v575, struct std__allocator_char_* v576) {
bb577:
  char* __lhs578;
  unsigned long __lhs_len579;
  char* __rhs580;
  unsigned long __rhs_len581;
  struct std__allocator_char_* __a582;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval583;
  _Bool nrvo584;
  struct std__allocator_char_ ref_tmp0585;
  __lhs578 = v572;
  __lhs_len579 = v573;
  __rhs580 = v574;
  __rhs_len581 = v575;
  __a582 = v576;
  _Bool c586 = 0;
  nrvo584 = c586;
  struct std__allocator_char_* t587 = __a582;
  struct std__allocator_char_ r588 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(t587);
  ref_tmp0585 = r588;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&__retval583, &ref_tmp0585);
  {
    std__allocator_char____allocator(&ref_tmp0585);
  }
    unsigned long t589 = __lhs_len579;
    unsigned long t590 = __rhs_len581;
    unsigned long b591 = t589 + t590;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(&__retval583, b591);
    char* t592 = __lhs578;
    unsigned long t593 = __lhs_len579;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r594 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(&__retval583, t592, t593);
    char* t595 = __rhs580;
    unsigned long t596 = __rhs_len581;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r597 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(&__retval583, t595, t596);
    _Bool c598 = 1;
    nrvo584 = c598;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t599 = __retval583;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ret_val600 = t599;
    {
      _Bool t601 = nrvo584;
      _Bool u602 = !t601;
      if (u602) {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&__retval583);
      }
    }
    return ret_val600;
  abort();
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5c_strEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v603) {
bb604:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this605;
  char* __retval606;
  this605 = v603;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t607 = this605;
  char* r608 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t607);
  __retval606 = r608;
  char* t609 = __retval606;
  return t609;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13get_allocatorEv
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v610) {
bb611:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this612;
  struct std__allocator_char_ __retval613;
  this612 = v610;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t614 = this612;
  struct std__allocator_char_* r615 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t614);
  std__allocator_char___allocator(&__retval613, r615);
  struct std__allocator_char_ t616 = __retval613;
  return t616;
}

// function: _ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_SA_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v617, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v618) {
bb619:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs620;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __rhs621;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval622;
  struct std__allocator_char_ ref_tmp0623;
  __lhs620 = v617;
  __rhs621 = v618;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t624 = __lhs620;
  char* r625 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(t624);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t626 = __lhs620;
  unsigned long r627 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t626);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t628 = __rhs621;
  char* r629 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(t628);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t630 = __rhs621;
  unsigned long r631 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t630);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t632 = __lhs620;
  struct std__allocator_char_ r633 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(t632);
  ref_tmp0623 = r633;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r634 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(r625, r627, r629, r631, &ref_tmp0623);
    __retval622 = r634;
  {
    std__allocator_char____allocator(&ref_tmp0623);
  }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t635 = __retval622;
  return t635;
}

// function: _ZStleSt15strong_orderingNSt9__cmp_cat8__unspecE
_Bool std__operator___3(struct std__strong_ordering v636, struct std____cmp_cat____unspec v637) {
bb638:
  struct std__strong_ordering __v639;
  struct std____cmp_cat____unspec unnamed640;
  _Bool __retval641;
  __v639 = v636;
  unnamed640 = v637;
  char t642 = __v639._M_value;
  int cast643 = (int)t642;
  int c644 = 0;
  _Bool c645 = ((cast643 <= c644)) ? 1 : 0;
  __retval641 = c645;
  _Bool t646 = __retval641;
  return t646;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v647) {
bb648:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this649;
  this649 = v647;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t650 = this649;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t650);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t650->_M_dataplus);
  }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5emptyEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____empty___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v651) {
bb652:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this653;
  _Bool __retval654;
  this653 = v651;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t655 = this653;
  unsigned long t656 = t655->_M_string_length;
  unsigned long c657 = 0;
  _Bool c658 = ((t656 == c657)) ? 1 : 0;
  __retval654 = c658;
  _Bool t659 = __retval654;
  return t659;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_copy_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_copy_assign() {
bb660:
  _Bool __retval661;
  _Bool t662 = _ZNSt17integral_constantIbLb0EE5valueE;
  __retval661 = t662;
  _Bool t663 = __retval661;
  return t663;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE15_S_always_equalEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_always_equal() {
bb664:
  _Bool __retval665;
  _Bool t666 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval665 = t666;
  _Bool t667 = __retval665;
  return t667;
}

// function: _ZSteqRKSaIcES1_
_Bool std__operator__(struct std__allocator_char_* v668, struct std__allocator_char_* v669) {
bb670:
  struct std__allocator_char_* unnamed671;
  struct std__allocator_char_* unnamed672;
  _Bool __retval673;
  unnamed671 = v668;
  unnamed672 = v669;
  _Bool c674 = 1;
  __retval673 = c674;
  _Bool t675 = __retval673;
  return t675;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v676) {
bb677:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this678;
  char* __retval679;
  this678 = v676;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t680 = this678;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t680);
  char* r681 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t680);
  __retval679 = r681;
  char* t682 = __retval679;
  return t682;
}

// function: _ZSt15__alloc_on_copyISaIcEEvRT_RKS1_
void void_std____alloc_on_copy_std__allocator_char___(struct std__allocator_char_* v683, struct std__allocator_char_* v684) {
bb685:
  struct std__allocator_char_* __one686;
  struct std__allocator_char_* __two687;
  __one686 = v683;
  __two687 = v684;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v688, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v689) {
bb690:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this691;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str692;
  this691 = v688;
  __str692 = v689;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t693 = this691;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t694 = __str692;
    _Bool c695 = ((t693 != t694)) ? 1 : 0;
    if (c695) {
      unsigned long __rsize696;
      unsigned long __capacity697;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t698 = __str692;
      unsigned long r699 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t698);
      __rsize696 = r699;
      unsigned long r700 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t693);
      __capacity697 = r700;
        unsigned long t701 = __rsize696;
        unsigned long t702 = __capacity697;
        _Bool c703 = ((t701 > t702)) ? 1 : 0;
        if (c703) {
          unsigned long __new_capacity704;
          char* __tmp705;
          unsigned long t706 = __rsize696;
          __new_capacity704 = t706;
          unsigned long t707 = __capacity697;
          char* r708 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t693, &__new_capacity704, t707);
          __tmp705 = r708;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t693);
          char* t709 = __tmp705;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t693, t709);
          unsigned long t710 = __new_capacity704;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t693, t710);
        }
        unsigned long t711 = __rsize696;
        _Bool cast712 = (_Bool)t711;
        if (cast712) {
          char* r713 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t693);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t714 = __str692;
          char* r715 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t714);
          unsigned long t716 = __rsize696;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r713, r715, t716);
        }
      unsigned long t717 = __rsize696;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t693, t717);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignERKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v718, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v719) {
bb720:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this721;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str722;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval723;
  this721 = v718;
  __str722 = v719;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t724 = this721;
    _Bool r725 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_copy_assign();
    if (r725) {
        _Bool r726 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_always_equal();
        _Bool u727 = !r726;
        _Bool ternary728;
        if (u727) {
          _Bool r729 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t724);
          _Bool u730 = !r729;
          ternary728 = (_Bool)u730;
        } else {
          _Bool c731 = 0;
          ternary728 = (_Bool)c731;
        }
        _Bool ternary732;
        if (ternary728) {
          struct std__allocator_char_* r733 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t724);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t734 = __str722;
          struct std__allocator_char_* r735 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t734);
          _Bool r736 = std__operator__(r733, r735);
          _Bool u737 = !r736;
          ternary732 = (_Bool)u737;
        } else {
          _Bool c738 = 0;
          ternary732 = (_Bool)c738;
        }
        if (ternary732) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t739 = __str722;
            unsigned long r740 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t739);
            unsigned long c741 = 15;
            _Bool c742 = ((r740 <= c741)) ? 1 : 0;
            if (c742) {
              unsigned long t743 = t724->field2._M_allocated_capacity;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t724, t743);
              char* r744 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t724);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t724, r744);
              unsigned long c745 = 0;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t724, c745);
            } else {
              unsigned long __len746;
              struct std__allocator_char_ __alloc747;
              char* __ptr748;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t749 = __str722;
              unsigned long r750 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t749);
              __len746 = r750;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t751 = __str722;
              struct std__allocator_char_* r752 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t751);
              std__allocator_char___allocator(&__alloc747, r752);
              unsigned long t753 = __len746;
              unsigned long c754 = 1;
              unsigned long b755 = t753 + c754;
              char* r756 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(&__alloc747, b755);
              __ptr748 = r756;
              unsigned long t757 = t724->field2._M_allocated_capacity;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t724, t757);
              char* t758 = __ptr748;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t724, t758);
              unsigned long t759 = __len746;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t724, t759);
              unsigned long t760 = __len746;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t724, t760);
            }
        }
      struct std__allocator_char_* r761 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t724);
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t762 = __str722;
      struct std__allocator_char_* r763 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t762);
      void_std____alloc_on_copy_std__allocator_char___(r761, r763);
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t764 = __str722;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t724, t764);
  __retval723 = t724;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t765 = __retval723;
  return t765;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSERKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v766, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v767) {
bb768:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this769;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str770;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval771;
  this769 = v766;
  __str770 = v767;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t772 = this769;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t773 = __str770;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r774 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(t772, t773);
  __retval771 = r774;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t775 = __retval771;
  return t775;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendERKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v776, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v777) {
bb778:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this779;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str780;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval781;
  this779 = v776;
  __str780 = v777;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t782 = this779;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t783 = __str780;
  char* r784 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t783);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t785 = __str780;
  unsigned long r786 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t785);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r787 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(t782, r784, r786);
  __retval781 = r787;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t788 = __retval781;
  return t788;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEpLERKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator___3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v789, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v790) {
bb791:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this792;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str793;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval794;
  this792 = v789;
  __str793 = v790;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t795 = this792;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t796 = __str793;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r797 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_3(t795, t796);
  __retval794 = r797;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t798 = __retval794;
  return t798;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v799, char* v800) {
bb801:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this802;
  char* __s803;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval804;
  unsigned long __n805;
  this802 = v799;
  __s803 = v800;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t806 = this802;
  char* t807 = __s803;
  unsigned long r808 = std__char_traits_char___length(t807);
  __n805 = r808;
  unsigned long c809 = 0;
  unsigned long t810 = __n805;
  char* cast811 = (char*)&(_str_35);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t806, c809, t810, cast811);
  char* t812 = __s803;
  unsigned long t813 = __n805;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r814 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(t806, t812, t813);
  __retval804 = r814;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t815 = __retval804;
  return t815;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEpLEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator___2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v816, char* v817) {
bb818:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this819;
  char* __s820;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval821;
  this819 = v816;
  __s820 = v817;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t822 = this819;
  char* t823 = __s820;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r824 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(t822, t823);
  __retval821 = r824;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t825 = __retval821;
  return t825;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v826, unsigned long v827, char* v828) {
bb829:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this830;
  unsigned long __pos831;
  char* __s832;
  unsigned long __retval833;
  this830 = v826;
  __pos831 = v827;
  __s832 = v828;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t834 = this830;
    unsigned long t835 = __pos831;
    unsigned long r836 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t834);
    _Bool c837 = ((t835 > r836)) ? 1 : 0;
    if (c837) {
      char* cast838 = (char*)&(_str_37);
      char* t839 = __s832;
      unsigned long t840 = __pos831;
      unsigned long r841 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t834);
      std____throw_out_of_range_fmt(cast838, t839, t840, r841);
    }
  unsigned long t842 = __pos831;
  __retval833 = t842;
  unsigned long t843 = __retval833;
  return t843;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS4_mm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v844, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v845, unsigned long v846, unsigned long v847) {
bb848:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this849;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str850;
  unsigned long __pos851;
  unsigned long __n852;
  struct std__allocator_char_ ref_tmp0853;
  char* __start854;
  struct std__forward_iterator_tag agg_tmp0855;
  this849 = v844;
  __str850 = v845;
  __pos851 = v846;
  __n852 = v847;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t856 = this849;
  char* r857 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t856);
  std__allocator_char___allocator_2(&ref_tmp0853);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t856->_M_dataplus, r857, &ref_tmp0853);
  {
    std__allocator_char____allocator(&ref_tmp0853);
  }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t858 = __str850;
    char* r859 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t858);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t860 = __str850;
    unsigned long t861 = __pos851;
    char* cast862 = (char*)&(_str_38);
    unsigned long r863 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t860, t861, cast862);
    char* ptr864 = &(r859)[r863];
    __start854 = ptr864;
    char* t865 = __start854;
    char* t866 = __start854;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t867 = __str850;
    unsigned long t868 = __pos851;
    unsigned long t869 = __n852;
    unsigned long r870 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t867, t868, t869);
    char* ptr871 = &(t866)[r870];
    struct std__forward_iterator_tag t872 = agg_tmp0855;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t856, t865, ptr871, t872);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6substrEmm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v873, unsigned long v874, unsigned long v875) {
bb876:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this877;
  unsigned long __pos878;
  unsigned long __n879;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval880;
  this877 = v873;
  __pos878 = v874;
  __n879 = v875;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t881 = this877;
  unsigned long t882 = __pos878;
  char* cast883 = (char*)&(_str_36);
  unsigned long r884 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t881, t882, cast883);
  unsigned long t885 = __n879;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_3(&__retval880, t881, r884, t885);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t886 = __retval880;
  return t886;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v887, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v888) {
bb889:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this890;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str891;
  struct std__allocator_char_ ref_tmp0892;
  this890 = v887;
  __str891 = v888;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t893 = this890;
  char* r894 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t893);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t895 = __str891;
  struct std__allocator_char_* r896 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t895);
  struct std__allocator_char_ r897 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(r896);
  ref_tmp0892 = r897;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t893->_M_dataplus, r894, &ref_tmp0892);
  {
    std__allocator_char____allocator(&ref_tmp0892);
  }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t898 = __str891;
    char* r899 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t898);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t900 = __str891;
    unsigned long r901 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t900);
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_true_(t893, r899, r901);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v902, unsigned long v903) {
bb904:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this905;
  unsigned long __pos906;
  char* __retval907;
  this905 = v902;
  __pos906 = v903;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t908 = this905;
    do {
          unsigned long t909 = __pos906;
          unsigned long r910 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t908);
          _Bool c911 = ((t909 <= r910)) ? 1 : 0;
          _Bool u912 = !c911;
          if (u912) {
            char* cast913 = (char*)&(_str_39);
            int c914 = 1369;
            char* cast915 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm);
            char* cast916 = (char*)&(_str_40);
            std____glibcxx_assert_fail(cast913, c914, cast915, cast916);
          }
      _Bool c917 = 0;
      if (!c917) break;
    } while (1);
  unsigned long t918 = __pos906;
  char* r919 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t908);
  char* ptr920 = &(r919)[t918];
  __retval907 = ptr920;
  char* t921 = __retval907;
  return t921;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v922, void* v923) {
bb924:
  struct std__basic_ostream_char__std__char_traits_char__* this925;
  void* __pf926;
  struct std__basic_ostream_char__std__char_traits_char__* __retval927;
  this925 = v922;
  __pf926 = v923;
  struct std__basic_ostream_char__std__char_traits_char__* t928 = this925;
  void* t929 = __pf926;
  struct std__basic_ostream_char__std__char_traits_char__* r930 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t929)(t928);
  __retval927 = r930;
  struct std__basic_ostream_char__std__char_traits_char__* t931 = __retval927;
  return t931;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v932) {
bb933:
  struct std__basic_ostream_char__std__char_traits_char__* __os934;
  struct std__basic_ostream_char__std__char_traits_char__* __retval935;
  __os934 = v932;
  struct std__basic_ostream_char__std__char_traits_char__* t936 = __os934;
  struct std__basic_ostream_char__std__char_traits_char__* r937 = std__ostream__flush(t936);
  __retval935 = r937;
  struct std__basic_ostream_char__std__char_traits_char__* t938 = __retval935;
  return t938;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v939) {
bb940:
  struct std__ctype_char_* __f941;
  struct std__ctype_char_* __retval942;
  __f941 = v939;
    struct std__ctype_char_* t943 = __f941;
    _Bool cast944 = (_Bool)t943;
    _Bool u945 = !cast944;
    if (u945) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t946 = __f941;
  __retval942 = t946;
  struct std__ctype_char_* t947 = __retval942;
  return t947;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v948, char v949) {
bb950:
  struct std__ctype_char_* this951;
  char __c952;
  char __retval953;
  this951 = v948;
  __c952 = v949;
  struct std__ctype_char_* t954 = this951;
    char t955 = t954->_M_widen_ok;
    _Bool cast956 = (_Bool)t955;
    if (cast956) {
      char t957 = __c952;
      unsigned char cast958 = (unsigned char)t957;
      unsigned long cast959 = (unsigned long)cast958;
      char t960 = t954->_M_widen[cast959];
      __retval953 = t960;
      char t961 = __retval953;
      return t961;
    }
  std__ctype_char____M_widen_init___const(t954);
  char t962 = __c952;
  void** v963 = (void**)t954;
  void* v964 = *((void**)v963);
  char vcall967 = (char)__VERIFIER_virtual_call_char_char(t954, 6, t962);
  __retval953 = vcall967;
  char t968 = __retval953;
  return t968;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v969, char v970) {
bb971:
  struct std__basic_ios_char__std__char_traits_char__* this972;
  char __c973;
  char __retval974;
  this972 = v969;
  __c973 = v970;
  struct std__basic_ios_char__std__char_traits_char__* t975 = this972;
  struct std__ctype_char_* t976 = t975->_M_ctype;
  struct std__ctype_char_* r977 = std__ctype_char__const__std____check_facet_std__ctype_char___(t976);
  char t978 = __c973;
  char r979 = std__ctype_char___widen_char__const(r977, t978);
  __retval974 = r979;
  char t980 = __retval974;
  return t980;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v981) {
bb982:
  struct std__basic_ostream_char__std__char_traits_char__* __os983;
  struct std__basic_ostream_char__std__char_traits_char__* __retval984;
  __os983 = v981;
  struct std__basic_ostream_char__std__char_traits_char__* t985 = __os983;
  struct std__basic_ostream_char__std__char_traits_char__* t986 = __os983;
  void** v987 = (void**)t986;
  void* v988 = *((void**)v987);
  unsigned char* cast989 = (unsigned char*)v988;
  long c990 = -24;
  unsigned char* ptr991 = &(cast989)[c990];
  long* cast992 = (long*)ptr991;
  long t993 = *cast992;
  unsigned char* cast994 = (unsigned char*)t986;
  unsigned char* ptr995 = &(cast994)[t993];
  struct std__basic_ostream_char__std__char_traits_char__* cast996 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr995;
  struct std__basic_ios_char__std__char_traits_char__* cast997 = (struct std__basic_ios_char__std__char_traits_char__*)cast996;
  char c998 = 10;
  char r999 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast997, c998);
  struct std__basic_ostream_char__std__char_traits_char__* r1000 = std__ostream__put(t985, r999);
  struct std__basic_ostream_char__std__char_traits_char__* r1001 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1000);
  __retval984 = r1001;
  struct std__basic_ostream_char__std__char_traits_char__* t1002 = __retval984;
  return t1002;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE2atEm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____at(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1003, unsigned long v1004) {
bb1005:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1006;
  unsigned long __n1007;
  char* __retval1008;
  this1006 = v1003;
  __n1007 = v1004;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1009 = this1006;
    unsigned long t1010 = __n1007;
    unsigned long r1011 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1009);
    _Bool c1012 = ((t1010 >= r1011)) ? 1 : 0;
    if (c1012) {
      char* cast1013 = (char*)&(_str_41);
      unsigned long t1014 = __n1007;
      unsigned long r1015 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1009);
      std____throw_out_of_range_fmt(cast1013, t1014, r1015);
    }
  unsigned long t1016 = __n1007;
  char* r1017 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1009);
  char* ptr1018 = &(r1017)[t1016];
  __retval1008 = ptr1018;
  char* t1019 = __retval1008;
  return t1019;
}

// function: main
int main() {
bb1020:
  int __retval1021;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ s11022;
  struct std__allocator_char_ ref_tmp01023;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ s21024;
  struct std__allocator_char_ ref_tmp11025;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ s31026;
  struct std__allocator_char_ ref_tmp21027;
  struct std__strong_ordering agg_tmp01028;
  struct std____cmp_cat____unspec agg_tmp11029;
  struct std__strong_ordering agg_tmp21030;
  struct std____cmp_cat____unspec agg_tmp31031;
  struct std__strong_ordering agg_tmp41032;
  struct std____cmp_cat____unspec agg_tmp51033;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp31034;
  struct std__strong_ordering agg_tmp61035;
  struct std____cmp_cat____unspec agg_tmp71036;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup1037;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp41038;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup1039;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp51040;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup1041;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* s4Ptr1042;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __new_result1043;
  int c1044 = 0;
  __retval1021 = c1044;
  char* cast1045 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp01023);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&s11022, cast1045, &ref_tmp01023);
  {
    std__allocator_char____allocator(&ref_tmp01023);
  }
    char* cast1046 = (char*)&(_str_1);
    std__allocator_char___allocator_2(&ref_tmp11025);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&s21024, cast1046, &ref_tmp11025);
    {
      std__allocator_char____allocator(&ref_tmp11025);
    }
      char* cast1047 = (char*)&(_str_2);
      std__allocator_char___allocator_2(&ref_tmp21027);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&s31026, cast1047, &ref_tmp21027);
      {
        std__allocator_char____allocator(&ref_tmp21027);
      }
        char* cast1048 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r1049 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1048);
        struct std__basic_ostream_char__std__char_traits_char__* r1050 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1049, &s11022);
        char* cast1051 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* r1052 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1050, cast1051);
        struct std__basic_ostream_char__std__char_traits_char__* r1053 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1052, &s21024);
        char* cast1054 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* r1055 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1053, cast1054);
        struct std__basic_ostream_char__std__char_traits_char__* r1056 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1055, &s31026);
        char c1057 = 34;
        struct std__basic_ostream_char__std__char_traits_char__* r1058 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r1056, c1057);
        char* cast1059 = (char*)&(_str_6);
        struct std__basic_ostream_char__std__char_traits_char__* r1060 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1058, cast1059);
        char* cast1061 = (char*)&(_str_7);
        struct std__basic_ostream_char__std__char_traits_char__* r1062 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1060, cast1061);
        _Bool r1063 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&s21024, &s11022);
        char* cast1064 = (char*)&(_str_8);
        char* cast1065 = (char*)&(_str_9);
        char* sel1066 = r1063 ? cast1064 : cast1065;
        struct std__basic_ostream_char__std__char_traits_char__* r1067 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1062, sel1066);
        char* cast1068 = (char*)&(_str_10);
        struct std__basic_ostream_char__std__char_traits_char__* r1069 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1067, cast1068);
        _Bool r1070 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&s21024, &s11022);
        _Bool u1071 = !r1070;
        char* cast1072 = (char*)&(_str_8);
        char* cast1073 = (char*)&(_str_9);
        char* sel1074 = u1071 ? cast1072 : cast1073;
        struct std__basic_ostream_char__std__char_traits_char__* r1075 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1069, sel1074);
        char* cast1076 = (char*)&(_str_11);
        struct std__basic_ostream_char__std__char_traits_char__* r1077 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1075, cast1076);
        struct std__strong_ordering r1078 = decltype_____detail____char_traits_cmp_cat_std__char_traits_char_____0___std__operator____char__std__char_traits_char___std__allocator_char___(&s21024, &s11022);
        agg_tmp01028 = r1078;
        agg_tmp11029 = *&__const_main_agg_tmp1; // copy
        struct std__strong_ordering t1079 = agg_tmp01028;
        struct std____cmp_cat____unspec t1080 = agg_tmp11029;
        _Bool r1081 = std__operator_(t1079, t1080);
        char* cast1082 = (char*)&(_str_8);
        char* cast1083 = (char*)&(_str_9);
        char* sel1084 = r1081 ? cast1082 : cast1083;
        struct std__basic_ostream_char__std__char_traits_char__* r1085 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1077, sel1084);
        char* cast1086 = (char*)&(_str_12);
        struct std__basic_ostream_char__std__char_traits_char__* r1087 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1085, cast1086);
        struct std__strong_ordering r1088 = decltype_____detail____char_traits_cmp_cat_std__char_traits_char_____0___std__operator____char__std__char_traits_char___std__allocator_char___(&s21024, &s11022);
        agg_tmp21030 = r1088;
        agg_tmp31031 = *&__const_main_agg_tmp3; // copy
        struct std__strong_ordering t1089 = agg_tmp21030;
        struct std____cmp_cat____unspec t1090 = agg_tmp31031;
        _Bool r1091 = std__operator__2(t1089, t1090);
        char* cast1092 = (char*)&(_str_8);
        char* cast1093 = (char*)&(_str_9);
        char* sel1094 = r1091 ? cast1092 : cast1093;
        struct std__basic_ostream_char__std__char_traits_char__* r1095 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1087, sel1094);
        char* cast1096 = (char*)&(_str_13);
        struct std__basic_ostream_char__std__char_traits_char__* r1097 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1095, cast1096);
        struct std__strong_ordering r1098 = decltype_____detail____char_traits_cmp_cat_std__char_traits_char_____0___std__operator____char__std__char_traits_char___std__allocator_char___(&s21024, &s11022);
        agg_tmp41032 = r1098;
        agg_tmp51033 = *&__const_main_agg_tmp5; // copy
        struct std__strong_ordering t1099 = agg_tmp41032;
        struct std____cmp_cat____unspec t1100 = agg_tmp51033;
        _Bool r1101 = std__operator___2(t1099, t1100);
        char* cast1102 = (char*)&(_str_8);
        char* cast1103 = (char*)&(_str_9);
        char* sel1104 = r1101 ? cast1102 : cast1103;
        struct std__basic_ostream_char__std__char_traits_char__* r1105 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1097, sel1104);
        char* cast1106 = (char*)&(_str_14);
        struct std__basic_ostream_char__std__char_traits_char__* r1107 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1105, cast1106);
        unsigned long r1108 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(&s21024);
        struct std__basic_ostream_char__std__char_traits_char__* r1109 = std__ostream__operator__(r1107, r1108);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1110 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(&s11022, &s21024);
        ref_tmp31034 = r1110;
          struct std__basic_ostream_char__std__char_traits_char__* r1111 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1109, &ref_tmp31034);
          struct std__strong_ordering r1112 = decltype_____detail____char_traits_cmp_cat_std__char_traits_char_____0___std__operator____char__std__char_traits_char___std__allocator_char___(&s21024, &s11022);
          agg_tmp61035 = r1112;
          agg_tmp71036 = *&__const_main_agg_tmp7; // copy
          struct std__strong_ordering t1113 = agg_tmp61035;
          struct std____cmp_cat____unspec t1114 = agg_tmp71036;
          _Bool r1115 = std__operator___3(t1113, t1114);
          char* cast1116 = (char*)&(_str_8);
          char* cast1117 = (char*)&(_str_9);
          char* sel1118 = r1115 ? cast1116 : cast1117;
          struct std__basic_ostream_char__std__char_traits_char__* r1119 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1111, sel1118);
          tmp_exprcleanup1037 = r1119;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp31034);
        }
        struct std__basic_ostream_char__std__char_traits_char__* t1120 = tmp_exprcleanup1037;
        char* cast1121 = (char*)&(_str_15);
        struct std__basic_ostream_char__std__char_traits_char__* r1122 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1121);
          _Bool r1123 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____empty___const(&s31026);
          if (r1123) {
            char* cast1124 = (char*)&(_str_16);
            struct std__basic_ostream_char__std__char_traits_char__* r1125 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1124);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1126 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&s31026, &s11022);
            char* cast1127 = (char*)&(_str_17);
            struct std__basic_ostream_char__std__char_traits_char__* r1128 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1127);
            struct std__basic_ostream_char__std__char_traits_char__* r1129 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1128, &s31026);
            char* cast1130 = (char*)&(_str_18);
            struct std__basic_ostream_char__std__char_traits_char__* r1131 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1129, cast1130);
          }
        char* cast1132 = (char*)&(_str_19);
        struct std__basic_ostream_char__std__char_traits_char__* r1133 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1132);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1134 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator___3(&s11022, &s21024);
        struct std__basic_ostream_char__std__char_traits_char__* r1135 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &s11022);
        char* cast1136 = (char*)&(_str_20);
        struct std__basic_ostream_char__std__char_traits_char__* r1137 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1136);
        char* cast1138 = (char*)&(_str_21);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1139 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator___2(&s11022, cast1138);
        char* cast1140 = (char*)&(_str_22);
        struct std__basic_ostream_char__std__char_traits_char__* r1141 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1140);
        struct std__basic_ostream_char__std__char_traits_char__* r1142 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1141, &s11022);
        char* cast1143 = (char*)&(_str_23);
        struct std__basic_ostream_char__std__char_traits_char__* r1144 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1142, cast1143);
        char* cast1145 = (char*)&(_str_24);
        struct std__basic_ostream_char__std__char_traits_char__* r1146 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1145);
        char* cast1147 = (char*)&(_str_25);
        struct std__basic_ostream_char__std__char_traits_char__* r1148 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1146, cast1147);
        unsigned long c1149 = 0;
        unsigned long c1150 = 14;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1151 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&s11022, c1149, c1150);
        ref_tmp41038 = r1151;
          struct std__basic_ostream_char__std__char_traits_char__* r1152 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1148, &ref_tmp41038);
          char* cast1153 = (char*)&(_str_23);
          struct std__basic_ostream_char__std__char_traits_char__* r1154 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1152, cast1153);
          tmp_exprcleanup1039 = r1154;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp41038);
        }
        struct std__basic_ostream_char__std__char_traits_char__* t1155 = tmp_exprcleanup1039;
        char* cast1156 = (char*)&(_str_26);
        struct std__basic_ostream_char__std__char_traits_char__* r1157 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1156);
        char* cast1158 = (char*)&(_str_27);
        struct std__basic_ostream_char__std__char_traits_char__* r1159 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1157, cast1158);
        unsigned long c1160 = 15;
        unsigned long t1161 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1162 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&s11022, c1160, t1161);
        ref_tmp51040 = r1162;
          struct std__basic_ostream_char__std__char_traits_char__* r1163 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1159, &ref_tmp51040);
          char c1164 = 10;
          struct std__basic_ostream_char__std__char_traits_char__* r1165 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r1163, c1164);
          tmp_exprcleanup1041 = r1165;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp51040);
        }
        struct std__basic_ostream_char__std__char_traits_char__* t1166 = tmp_exprcleanup1041;
        unsigned long c1167 = 32;
        void* r1168 = operator_new(c1167);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* cast1169 = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)r1168;
          __new_result1043 = cast1169;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_2(cast1169, &s11022);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1170 = __new_result1043;
        s4Ptr1042 = t1170;
        char* cast1171 = (char*)&(_str_28);
        struct std__basic_ostream_char__std__char_traits_char__* r1172 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1171);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1173 = s4Ptr1042;
        struct std__basic_ostream_char__std__char_traits_char__* r1174 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1172, t1173);
        char* cast1175 = (char*)&(_str_23);
        struct std__basic_ostream_char__std__char_traits_char__* r1176 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1174, cast1175);
        char* cast1177 = (char*)&(_str_29);
        struct std__basic_ostream_char__std__char_traits_char__* r1178 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1177);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1179 = s4Ptr1042;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1180 = s4Ptr1042;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1181 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(t1180, t1179);
        char* cast1182 = (char*)&(_str_30);
        struct std__basic_ostream_char__std__char_traits_char__* r1183 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1182);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1184 = s4Ptr1042;
        struct std__basic_ostream_char__std__char_traits_char__* r1185 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1183, t1184);
        char c1186 = 10;
        struct std__basic_ostream_char__std__char_traits_char__* r1187 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r1185, c1186);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1188 = s4Ptr1042;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1189 = ((void*)0);
        _Bool c1190 = ((t1188 != c1189)) ? 1 : 0;
        if (c1190) {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(t1188);
          {
            void* cast1191 = (void*)t1188;
            unsigned long c1192 = 32;
            operator_delete_2(cast1191, c1192);
          }
        }
        char c1193 = 72;
        unsigned long c1194 = 0;
        char* r1195 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(&s11022, c1194);
        *r1195 = c1193;
        char c1196 = 66;
        unsigned long c1197 = 6;
        char* r1198 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(&s11022, c1197);
        *r1198 = c1196;
        char* cast1199 = (char*)&(_str_31);
        struct std__basic_ostream_char__std__char_traits_char__* r1200 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1199);
        struct std__basic_ostream_char__std__char_traits_char__* r1201 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1200, &s11022);
        char* cast1202 = (char*)&(_str_23);
        struct std__basic_ostream_char__std__char_traits_char__* r1203 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1201, cast1202);
        char* cast1204 = (char*)&(_str_32);
        struct std__basic_ostream_char__std__char_traits_char__* r1205 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1204);
        struct std__basic_ostream_char__std__char_traits_char__* r1206 = std__ostream__operator___std__ostream_____(r1205, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        char c1207 = 100;
        unsigned long c1208 = 30;
        char* r1209 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____at(&s11022, c1208);
        *r1209 = c1207;
        int c1210 = 0;
        __retval1021 = c1210;
        int t1211 = __retval1021;
        int ret_val1212 = t1211;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&s31026);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&s21024);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&s11022);
        }
        return ret_val1212;
  int t1213 = __retval1021;
  return t1213;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1214) {
bb1215:
  struct std____new_allocator_char_* this1216;
  this1216 = v1214;
  struct std____new_allocator_char_* t1217 = this1216;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1218) {
bb1219:
  char* __r1220;
  char* __retval1221;
  __r1220 = v1218;
  char* t1222 = __r1220;
  __retval1221 = t1222;
  char* t1223 = __retval1221;
  return t1223;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1224) {
bb1225:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1226;
  char* __retval1227;
  this1226 = v1224;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1228 = this1226;
  char* cast1229 = (char*)&(t1228->field2._M_local_buf);
  char* r1230 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1229);
  __retval1227 = r1230;
  char* t1231 = __retval1227;
  return t1231;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1232, char* v1233, struct std__allocator_char_* v1234) {
bb1235:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1236;
  char* __dat1237;
  struct std__allocator_char_* __a1238;
  this1236 = v1232;
  __dat1237 = v1233;
  __a1238 = v1234;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1239 = this1236;
  struct std__allocator_char_* base1240 = (struct std__allocator_char_*)((char *)t1239 + 0);
  struct std__allocator_char_* t1241 = __a1238;
  std__allocator_char___allocator(base1240, t1241);
    char* t1242 = __dat1237;
    t1239->_M_p = t1242;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1243:
  _Bool __retval1244;
    _Bool c1245 = 0;
    __retval1244 = c1245;
    _Bool t1246 = __retval1244;
    return t1246;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1247, char* v1248) {
bb1249:
  char* __c11250;
  char* __c21251;
  _Bool __retval1252;
  __c11250 = v1247;
  __c21251 = v1248;
  char* t1253 = __c11250;
  char t1254 = *t1253;
  int cast1255 = (int)t1254;
  char* t1256 = __c21251;
  char t1257 = *t1256;
  int cast1258 = (int)t1257;
  _Bool c1259 = ((cast1255 == cast1258)) ? 1 : 0;
  __retval1252 = c1259;
  _Bool t1260 = __retval1252;
  return t1260;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1261) {
bb1262:
  char* __p1263;
  unsigned long __retval1264;
  unsigned long __i1265;
  __p1263 = v1261;
  unsigned long c1266 = 0;
  __i1265 = c1266;
    char ref_tmp01267;
    while (1) {
      unsigned long t1268 = __i1265;
      char* t1269 = __p1263;
      char* ptr1270 = &(t1269)[t1268];
      char c1271 = 0;
      ref_tmp01267 = c1271;
      _Bool r1272 = __gnu_cxx__char_traits_char___eq(ptr1270, &ref_tmp01267);
      _Bool u1273 = !r1272;
      if (!u1273) break;
      unsigned long t1274 = __i1265;
      unsigned long u1275 = t1274 + 1;
      __i1265 = u1275;
    }
  unsigned long t1276 = __i1265;
  __retval1264 = t1276;
  unsigned long t1277 = __retval1264;
  return t1277;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1278) {
bb1279:
  char* __s1280;
  unsigned long __retval1281;
  __s1280 = v1278;
    _Bool r1282 = std____is_constant_evaluated();
    if (r1282) {
      char* t1283 = __s1280;
      unsigned long r1284 = __gnu_cxx__char_traits_char___length(t1283);
      __retval1281 = r1284;
      unsigned long t1285 = __retval1281;
      return t1285;
    }
  char* t1286 = __s1280;
  unsigned long r1287 = strlen(t1286);
  __retval1281 = r1287;
  unsigned long t1288 = __retval1281;
  return t1288;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v1289, char* v1290, struct std__random_access_iterator_tag v1291) {
bb1292:
  char* __first1293;
  char* __last1294;
  struct std__random_access_iterator_tag unnamed1295;
  long __retval1296;
  __first1293 = v1289;
  __last1294 = v1290;
  unnamed1295 = v1291;
  char* t1297 = __last1294;
  char* t1298 = __first1293;
  long diff1299 = t1297 - t1298;
  __retval1296 = diff1299;
  long t1300 = __retval1296;
  return t1300;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v1301) {
bb1302:
  char** unnamed1303;
  struct std__random_access_iterator_tag __retval1304;
  unnamed1303 = v1301;
  struct std__random_access_iterator_tag t1305 = __retval1304;
  return t1305;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v1306, char* v1307) {
bb1308:
  char* __first1309;
  char* __last1310;
  long __retval1311;
  struct std__random_access_iterator_tag agg_tmp01312;
  __first1309 = v1306;
  __last1310 = v1307;
  char* t1313 = __first1309;
  char* t1314 = __last1310;
  struct std__random_access_iterator_tag r1315 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first1309);
  agg_tmp01312 = r1315;
  struct std__random_access_iterator_tag t1316 = agg_tmp01312;
  long r1317 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t1313, t1314, t1316);
  __retval1311 = r1317;
  long t1318 = __retval1311;
  return t1318;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1319, char* v1320) {
bb1321:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1322;
  char* __p1323;
  this1322 = v1319;
  __p1323 = v1320;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1324 = this1322;
  char* t1325 = __p1323;
  t1324->_M_dataplus._M_p = t1325;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v1326) {
bb1327:
  struct std__allocator_char_* __a1328;
  unsigned long __retval1329;
  __a1328 = v1326;
  unsigned long c1330 = -1;
  unsigned long c1331 = 1;
  unsigned long b1332 = c1330 / c1331;
  __retval1329 = b1332;
  unsigned long t1333 = __retval1329;
  return t1333;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1334) {
bb1335:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1336;
  struct std__allocator_char_* __retval1337;
  this1336 = v1334;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1338 = this1336;
  struct std__allocator_char_* base1339 = (struct std__allocator_char_*)((char *)&(t1338->_M_dataplus) + 0);
  __retval1337 = base1339;
  struct std__allocator_char_* t1340 = __retval1337;
  return t1340;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1341, unsigned long* v1342) {
bb1343:
  unsigned long* __a1344;
  unsigned long* __b1345;
  unsigned long* __retval1346;
  __a1344 = v1341;
  __b1345 = v1342;
    unsigned long* t1347 = __b1345;
    unsigned long t1348 = *t1347;
    unsigned long* t1349 = __a1344;
    unsigned long t1350 = *t1349;
    _Bool c1351 = ((t1348 < t1350)) ? 1 : 0;
    if (c1351) {
      unsigned long* t1352 = __b1345;
      __retval1346 = t1352;
      unsigned long* t1353 = __retval1346;
      return t1353;
    }
  unsigned long* t1354 = __a1344;
  __retval1346 = t1354;
  unsigned long* t1355 = __retval1346;
  return t1355;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1356) {
bb1357:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1358;
  unsigned long __retval1359;
  unsigned long __diffmax1360;
  unsigned long __allocmax1361;
  this1358 = v1356;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1362 = this1358;
  unsigned long c1363 = 9223372036854775807;
  __diffmax1360 = c1363;
  struct std__allocator_char_* r1364 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1362);
  unsigned long r1365 = std__allocator_traits_std__allocator_char_____max_size(r1364);
  __allocmax1361 = r1365;
  unsigned long* r1366 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1360, &__allocmax1361);
  unsigned long t1367 = *r1366;
  unsigned long c1368 = 1;
  unsigned long b1369 = t1367 - c1368;
  __retval1359 = b1369;
  unsigned long t1370 = __retval1359;
  return t1370;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v1371) {
bb1372:
  struct std____new_allocator_char_* this1373;
  unsigned long __retval1374;
  this1373 = v1371;
  struct std____new_allocator_char_* t1375 = this1373;
  unsigned long c1376 = 9223372036854775807;
  unsigned long c1377 = 1;
  unsigned long b1378 = c1376 / c1377;
  __retval1374 = b1378;
  unsigned long t1379 = __retval1374;
  return t1379;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v1380, unsigned long v1381, void* v1382) {
bb1383:
  struct std____new_allocator_char_* this1384;
  unsigned long __n1385;
  void* unnamed1386;
  char* __retval1387;
  this1384 = v1380;
  __n1385 = v1381;
  unnamed1386 = v1382;
  struct std____new_allocator_char_* t1388 = this1384;
    unsigned long t1389 = __n1385;
    unsigned long r1390 = std____new_allocator_char____M_max_size___const(t1388);
    _Bool c1391 = ((t1389 > r1390)) ? 1 : 0;
    if (c1391) {
        unsigned long t1392 = __n1385;
        unsigned long c1393 = -1;
        unsigned long c1394 = 1;
        unsigned long b1395 = c1393 / c1394;
        _Bool c1396 = ((t1392 > b1395)) ? 1 : 0;
        if (c1396) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1397 = 1;
    unsigned long c1398 = 16;
    _Bool c1399 = ((c1397 > c1398)) ? 1 : 0;
    if (c1399) {
      unsigned long __al1400;
      unsigned long c1401 = 1;
      __al1400 = c1401;
      unsigned long t1402 = __n1385;
      unsigned long c1403 = 1;
      unsigned long b1404 = t1402 * c1403;
      unsigned long t1405 = __al1400;
      void* r1406 = operator_new_2(b1404, t1405);
      char* cast1407 = (char*)r1406;
      __retval1387 = cast1407;
      char* t1408 = __retval1387;
      return t1408;
    }
  unsigned long t1409 = __n1385;
  unsigned long c1410 = 1;
  unsigned long b1411 = t1409 * c1410;
  void* r1412 = operator_new(b1411);
  char* cast1413 = (char*)r1412;
  __retval1387 = cast1413;
  char* t1414 = __retval1387;
  return t1414;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1415, unsigned long v1416) {
bb1417:
  struct std__allocator_char_* this1418;
  unsigned long __n1419;
  char* __retval1420;
  this1418 = v1415;
  __n1419 = v1416;
  struct std__allocator_char_* t1421 = this1418;
    _Bool r1422 = std____is_constant_evaluated();
    if (r1422) {
        unsigned long t1423 = __n1419;
        unsigned long c1424 = 1;
        unsigned long ovr1425;
        _Bool ovf1426 = __builtin_mul_overflow(t1423, c1424, &ovr1425);
        __n1419 = ovr1425;
        if (ovf1426) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1427 = __n1419;
      void* r1428 = operator_new(t1427);
      char* cast1429 = (char*)r1428;
      __retval1420 = cast1429;
      char* t1430 = __retval1420;
      return t1430;
    }
  struct std____new_allocator_char_* base1431 = (struct std____new_allocator_char_*)((char *)t1421 + 0);
  unsigned long t1432 = __n1419;
  void* c1433 = ((void*)0);
  char* r1434 = std____new_allocator_char___allocate(base1431, t1432, c1433);
  __retval1420 = r1434;
  char* t1435 = __retval1420;
  return t1435;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1436, unsigned long v1437) {
bb1438:
  struct std__allocator_char_* __a1439;
  unsigned long __n1440;
  char* __retval1441;
  __a1439 = v1436;
  __n1440 = v1437;
  struct std__allocator_char_* t1442 = __a1439;
  unsigned long t1443 = __n1440;
  char* r1444 = std__allocator_char___allocate(t1442, t1443);
  __retval1441 = r1444;
  char* t1445 = __retval1441;
  return t1445;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1446, unsigned long v1447) {
bb1448:
  struct std__allocator_char_* __a1449;
  unsigned long __n1450;
  char* __retval1451;
  char* __p1452;
  __a1449 = v1446;
  __n1450 = v1447;
  struct std__allocator_char_* t1453 = __a1449;
  unsigned long t1454 = __n1450;
  char* r1455 = std__allocator_traits_std__allocator_char_____allocate(t1453, t1454);
  __p1452 = r1455;
  char* t1456 = __p1452;
  __retval1451 = t1456;
  char* t1457 = __retval1451;
  return t1457;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1458) {
bb1459:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1460;
  struct std__allocator_char_* __retval1461;
  this1460 = v1458;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1462 = this1460;
  struct std__allocator_char_* base1463 = (struct std__allocator_char_*)((char *)&(t1462->_M_dataplus) + 0);
  __retval1461 = base1463;
  struct std__allocator_char_* t1464 = __retval1461;
  return t1464;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1465, unsigned long* v1466, unsigned long v1467) {
bb1468:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1469;
  unsigned long* __capacity1470;
  unsigned long __old_capacity1471;
  char* __retval1472;
  this1469 = v1465;
  __capacity1470 = v1466;
  __old_capacity1471 = v1467;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1473 = this1469;
    unsigned long* t1474 = __capacity1470;
    unsigned long t1475 = *t1474;
    unsigned long r1476 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1473);
    _Bool c1477 = ((t1475 > r1476)) ? 1 : 0;
    if (c1477) {
      char* cast1478 = (char*)&(_str_34);
      std____throw_length_error(cast1478);
    }
    unsigned long* t1479 = __capacity1470;
    unsigned long t1480 = *t1479;
    unsigned long t1481 = __old_capacity1471;
    _Bool c1482 = ((t1480 > t1481)) ? 1 : 0;
    _Bool ternary1483;
    if (c1482) {
      unsigned long* t1484 = __capacity1470;
      unsigned long t1485 = *t1484;
      unsigned long c1486 = 2;
      unsigned long t1487 = __old_capacity1471;
      unsigned long b1488 = c1486 * t1487;
      _Bool c1489 = ((t1485 < b1488)) ? 1 : 0;
      ternary1483 = (_Bool)c1489;
    } else {
      _Bool c1490 = 0;
      ternary1483 = (_Bool)c1490;
    }
    if (ternary1483) {
      unsigned long c1491 = 2;
      unsigned long t1492 = __old_capacity1471;
      unsigned long b1493 = c1491 * t1492;
      unsigned long* t1494 = __capacity1470;
      *t1494 = b1493;
        unsigned long* t1495 = __capacity1470;
        unsigned long t1496 = *t1495;
        unsigned long r1497 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1473);
        _Bool c1498 = ((t1496 > r1497)) ? 1 : 0;
        if (c1498) {
          unsigned long r1499 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1473);
          unsigned long* t1500 = __capacity1470;
          *t1500 = r1499;
        }
    }
  struct std__allocator_char_* r1501 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1473);
  unsigned long* t1502 = __capacity1470;
  unsigned long t1503 = *t1502;
  unsigned long c1504 = 1;
  unsigned long b1505 = t1503 + c1504;
  char* r1506 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1501, b1505);
  __retval1472 = r1506;
  char* t1507 = __retval1472;
  return t1507;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1508, unsigned long v1509) {
bb1510:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1511;
  unsigned long __capacity1512;
  this1511 = v1508;
  __capacity1512 = v1509;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1513 = this1511;
  unsigned long t1514 = __capacity1512;
  t1513->field2._M_allocated_capacity = t1514;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1515:
  _Bool __retval1516;
    _Bool c1517 = 0;
    __retval1516 = c1517;
    _Bool t1518 = __retval1516;
    return t1518;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1519) {
bb1520:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1521;
  this1521 = v1519;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1522 = this1521;
    _Bool r1523 = std__is_constant_evaluated();
    if (r1523) {
        unsigned long __i1524;
        unsigned long c1525 = 0;
        __i1524 = c1525;
        while (1) {
          unsigned long t1527 = __i1524;
          unsigned long c1528 = 15;
          _Bool c1529 = ((t1527 <= c1528)) ? 1 : 0;
          if (!c1529) break;
          char c1530 = 0;
          unsigned long t1531 = __i1524;
          t1522->field2._M_local_buf[t1531] = c1530;
        for_step1526: ;
          unsigned long t1532 = __i1524;
          unsigned long u1533 = t1532 + 1;
          __i1524 = u1533;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1534, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1535) {
bb1536:
  struct _Guard* this1537;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1538;
  this1537 = v1534;
  __s1538 = v1535;
  struct _Guard* t1539 = this1537;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1540 = __s1538;
  t1539->_M_guarded = t1540;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1541, char* v1542) {
bb1543:
  char* __location1544;
  char* __args1545;
  char* __retval1546;
  void* __loc1547;
  __location1544 = v1541;
  __args1545 = v1542;
  char* t1548 = __location1544;
  void* cast1549 = (void*)t1548;
  __loc1547 = cast1549;
    void* t1550 = __loc1547;
    char* cast1551 = (char*)t1550;
    char* t1552 = __args1545;
    char t1553 = *t1552;
    *cast1551 = t1553;
    __retval1546 = cast1551;
    char* t1554 = __retval1546;
    return t1554;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1555, char* v1556) {
bb1557:
  char* __c11558;
  char* __c21559;
  __c11558 = v1555;
  __c21559 = v1556;
    _Bool r1560 = std____is_constant_evaluated();
    if (r1560) {
      char* t1561 = __c11558;
      char* t1562 = __c21559;
      char* r1563 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1561, t1562);
    } else {
      char* t1564 = __c21559;
      char t1565 = *t1564;
      char* t1566 = __c11558;
      *t1566 = t1565;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1567, char* v1568, unsigned long v1569) {
bb1570:
  char* __s11571;
  char* __s21572;
  unsigned long __n1573;
  char* __retval1574;
  __s11571 = v1567;
  __s21572 = v1568;
  __n1573 = v1569;
    unsigned long t1575 = __n1573;
    unsigned long c1576 = 0;
    _Bool c1577 = ((t1575 == c1576)) ? 1 : 0;
    if (c1577) {
      char* t1578 = __s11571;
      __retval1574 = t1578;
      char* t1579 = __retval1574;
      return t1579;
    }
    _Bool r1580 = std____is_constant_evaluated();
    if (r1580) {
        unsigned long __i1581;
        unsigned long c1582 = 0;
        __i1581 = c1582;
        while (1) {
          unsigned long t1584 = __i1581;
          unsigned long t1585 = __n1573;
          _Bool c1586 = ((t1584 < t1585)) ? 1 : 0;
          if (!c1586) break;
          char* t1587 = __s11571;
          unsigned long t1588 = __i1581;
          char* ptr1589 = &(t1587)[t1588];
          unsigned long t1590 = __i1581;
          char* t1591 = __s21572;
          char* ptr1592 = &(t1591)[t1590];
          char* r1593 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1589, ptr1592);
        for_step1583: ;
          unsigned long t1594 = __i1581;
          unsigned long u1595 = t1594 + 1;
          __i1581 = u1595;
        }
      char* t1596 = __s11571;
      __retval1574 = t1596;
      char* t1597 = __retval1574;
      return t1597;
    }
  char* t1598 = __s11571;
  void* cast1599 = (void*)t1598;
  char* t1600 = __s21572;
  void* cast1601 = (void*)t1600;
  unsigned long t1602 = __n1573;
  unsigned long c1603 = 1;
  unsigned long b1604 = t1602 * c1603;
  void* r1605 = memcpy(cast1599, cast1601, b1604);
  char* t1606 = __s11571;
  __retval1574 = t1606;
  char* t1607 = __retval1574;
  return t1607;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1608, char* v1609, unsigned long v1610) {
bb1611:
  char* __s11612;
  char* __s21613;
  unsigned long __n1614;
  char* __retval1615;
  __s11612 = v1608;
  __s21613 = v1609;
  __n1614 = v1610;
    unsigned long t1616 = __n1614;
    unsigned long c1617 = 0;
    _Bool c1618 = ((t1616 == c1617)) ? 1 : 0;
    if (c1618) {
      char* t1619 = __s11612;
      __retval1615 = t1619;
      char* t1620 = __retval1615;
      return t1620;
    }
    _Bool r1621 = std____is_constant_evaluated();
    if (r1621) {
      char* t1622 = __s11612;
      char* t1623 = __s21613;
      unsigned long t1624 = __n1614;
      char* r1625 = __gnu_cxx__char_traits_char___copy(t1622, t1623, t1624);
      __retval1615 = r1625;
      char* t1626 = __retval1615;
      return t1626;
    }
  char* t1627 = __s11612;
  void* cast1628 = (void*)t1627;
  char* t1629 = __s21613;
  void* cast1630 = (void*)t1629;
  unsigned long t1631 = __n1614;
  void* r1632 = memcpy(cast1628, cast1630, t1631);
  char* cast1633 = (char*)r1632;
  __retval1615 = cast1633;
  char* t1634 = __retval1615;
  return t1634;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1635, char* v1636, unsigned long v1637) {
bb1638:
  char* __d1639;
  char* __s1640;
  unsigned long __n1641;
  __d1639 = v1635;
  __s1640 = v1636;
  __n1641 = v1637;
    unsigned long t1642 = __n1641;
    unsigned long c1643 = 1;
    _Bool c1644 = ((t1642 == c1643)) ? 1 : 0;
    if (c1644) {
      char* t1645 = __d1639;
      char* t1646 = __s1640;
      std__char_traits_char___assign(t1645, t1646);
    } else {
      char* t1647 = __d1639;
      char* t1648 = __s1640;
      unsigned long t1649 = __n1641;
      char* r1650 = std__char_traits_char___copy(t1647, t1648, t1649);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1651) {
bb1652:
  char* __it1653;
  char* __retval1654;
  __it1653 = v1651;
  char* t1655 = __it1653;
  __retval1654 = t1655;
  char* t1656 = __retval1654;
  return t1656;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1657, char* v1658, char* v1659) {
bb1660:
  char* __p1661;
  char* __k11662;
  char* __k21663;
  __p1661 = v1657;
  __k11662 = v1658;
  __k21663 = v1659;
    char* t1664 = __p1661;
    char* t1665 = __k11662;
    char* r1666 = char_const__std____niter_base_char_const__(t1665);
    char* t1667 = __k21663;
    char* t1668 = __k11662;
    long diff1669 = t1667 - t1668;
    unsigned long cast1670 = (unsigned long)diff1669;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1664, r1666, cast1670);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1671) {
bb1672:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1673;
  char* __retval1674;
  this1673 = v1671;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1675 = this1673;
  char* t1676 = t1675->_M_dataplus._M_p;
  __retval1674 = t1676;
  char* t1677 = __retval1674;
  return t1677;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1678, unsigned long v1679) {
bb1680:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1681;
  unsigned long __length1682;
  this1681 = v1678;
  __length1682 = v1679;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1683 = this1681;
  unsigned long t1684 = __length1682;
  t1683->_M_string_length = t1684;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1685, unsigned long v1686) {
bb1687:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1688;
  unsigned long __n1689;
  char ref_tmp01690;
  this1688 = v1685;
  __n1689 = v1686;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1691 = this1688;
  unsigned long t1692 = __n1689;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1691, t1692);
  unsigned long t1693 = __n1689;
  char* r1694 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1691);
  char* ptr1695 = &(r1694)[t1693];
  char c1696 = 0;
  ref_tmp01690 = c1696;
  std__char_traits_char___assign(ptr1695, &ref_tmp01690);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1697) {
bb1698:
  struct _Guard* this1699;
  this1699 = v1697;
  struct _Guard* t1700 = this1699;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1701 = t1700->_M_guarded;
    _Bool cast1702 = (_Bool)t1701;
    if (cast1702) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1703 = t1700->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1703);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1704, char* v1705, char* v1706, struct std__forward_iterator_tag v1707) {
bb1708:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1709;
  char* __beg1710;
  char* __end1711;
  struct std__forward_iterator_tag unnamed1712;
  unsigned long __dnew1713;
  struct _Guard __guard1714;
  this1709 = v1704;
  __beg1710 = v1705;
  __end1711 = v1706;
  unnamed1712 = v1707;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1715 = this1709;
  char* t1716 = __beg1710;
  char* t1717 = __end1711;
  long r1718 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1716, t1717);
  unsigned long cast1719 = (unsigned long)r1718;
  __dnew1713 = cast1719;
    unsigned long t1720 = __dnew1713;
    unsigned long c1721 = 15;
    _Bool c1722 = ((t1720 > c1721)) ? 1 : 0;
    if (c1722) {
      unsigned long c1723 = 0;
      char* r1724 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1715, &__dnew1713, c1723);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1715, r1724);
      unsigned long t1725 = __dnew1713;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1715, t1725);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1715);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1714, t1715);
    char* r1726 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1715);
    char* t1727 = __beg1710;
    char* t1728 = __end1711;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1726, t1727, t1728);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1729 = ((void*)0);
    __guard1714._M_guarded = c1729;
    unsigned long t1730 = __dnew1713;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1715, t1730);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1714);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1731) {
bb1732:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1733;
  this1733 = v1731;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1734 = this1733;
  {
    struct std__allocator_char_* base1735 = (struct std__allocator_char_*)((char *)t1734 + 0);
    std__allocator_char____allocator(base1735);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1736, struct std____new_allocator_char_* v1737) {
bb1738:
  struct std____new_allocator_char_* this1739;
  struct std____new_allocator_char_* unnamed1740;
  this1739 = v1736;
  unnamed1740 = v1737;
  struct std____new_allocator_char_* t1741 = this1739;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1742) {
bb1743:
  char* __r1744;
  char* __retval1745;
  __r1744 = v1742;
  char* t1746 = __r1744;
  __retval1745 = t1746;
  char* t1747 = __retval1745;
  return t1747;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1748) {
bb1749:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1750;
  char* __retval1751;
  this1750 = v1748;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1752 = this1750;
  char* cast1753 = (char*)&(t1752->field2._M_local_buf);
  char* r1754 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1753);
  __retval1751 = r1754;
  char* t1755 = __retval1751;
  return t1755;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1756) {
bb1757:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1758;
  _Bool __retval1759;
  this1758 = v1756;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1760 = this1758;
    char* r1761 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1760);
    char* r1762 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1760);
    _Bool c1763 = ((r1761 == r1762)) ? 1 : 0;
    if (c1763) {
        unsigned long t1764 = t1760->_M_string_length;
        unsigned long c1765 = 15;
        _Bool c1766 = ((t1764 > c1765)) ? 1 : 0;
        if (c1766) {
          __builtin_unreachable();
        }
      _Bool c1767 = 1;
      __retval1759 = c1767;
      _Bool t1768 = __retval1759;
      return t1768;
    }
  _Bool c1769 = 0;
  __retval1759 = c1769;
  _Bool t1770 = __retval1759;
  return t1770;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1771, char* v1772, unsigned long v1773) {
bb1774:
  struct std____new_allocator_char_* this1775;
  char* __p1776;
  unsigned long __n1777;
  this1775 = v1771;
  __p1776 = v1772;
  __n1777 = v1773;
  struct std____new_allocator_char_* t1778 = this1775;
    unsigned long c1779 = 1;
    unsigned long c1780 = 16;
    _Bool c1781 = ((c1779 > c1780)) ? 1 : 0;
    if (c1781) {
      char* t1782 = __p1776;
      void* cast1783 = (void*)t1782;
      unsigned long t1784 = __n1777;
      unsigned long c1785 = 1;
      unsigned long b1786 = t1784 * c1785;
      unsigned long c1787 = 1;
      operator_delete_3(cast1783, b1786, c1787);
      return;
    }
  char* t1788 = __p1776;
  void* cast1789 = (void*)t1788;
  unsigned long t1790 = __n1777;
  unsigned long c1791 = 1;
  unsigned long b1792 = t1790 * c1791;
  operator_delete_2(cast1789, b1792);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1793, char* v1794, unsigned long v1795) {
bb1796:
  struct std__allocator_char_* this1797;
  char* __p1798;
  unsigned long __n1799;
  this1797 = v1793;
  __p1798 = v1794;
  __n1799 = v1795;
  struct std__allocator_char_* t1800 = this1797;
    _Bool r1801 = std____is_constant_evaluated();
    if (r1801) {
      char* t1802 = __p1798;
      void* cast1803 = (void*)t1802;
      operator_delete(cast1803);
      return;
    }
  struct std____new_allocator_char_* base1804 = (struct std____new_allocator_char_*)((char *)t1800 + 0);
  char* t1805 = __p1798;
  unsigned long t1806 = __n1799;
  std____new_allocator_char___deallocate(base1804, t1805, t1806);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1807, char* v1808, unsigned long v1809) {
bb1810:
  struct std__allocator_char_* __a1811;
  char* __p1812;
  unsigned long __n1813;
  __a1811 = v1807;
  __p1812 = v1808;
  __n1813 = v1809;
  struct std__allocator_char_* t1814 = __a1811;
  char* t1815 = __p1812;
  unsigned long t1816 = __n1813;
  std__allocator_char___deallocate(t1814, t1815, t1816);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1817, unsigned long v1818) {
bb1819:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1820;
  unsigned long __size1821;
  this1820 = v1817;
  __size1821 = v1818;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1822 = this1820;
  struct std__allocator_char_* r1823 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1822);
  char* r1824 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1822);
  unsigned long t1825 = __size1821;
  unsigned long c1826 = 1;
  unsigned long b1827 = t1825 + c1826;
  std__allocator_traits_std__allocator_char_____deallocate(r1823, r1824, b1827);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1828) {
bb1829:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1830;
  this1830 = v1828;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1831 = this1830;
    _Bool r1832 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1831);
    _Bool u1833 = !r1832;
    if (u1833) {
      unsigned long t1834 = t1831->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1831, t1834);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1835, char* v1836, struct std__allocator_char_* v1837) {
bb1838:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1839;
  char* __dat1840;
  struct std__allocator_char_* __a1841;
  this1839 = v1835;
  __dat1840 = v1836;
  __a1841 = v1837;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1842 = this1839;
  struct std__allocator_char_* base1843 = (struct std__allocator_char_*)((char *)t1842 + 0);
  struct std__allocator_char_* t1844 = __a1841;
  std__allocator_char___allocator(base1843, t1844);
    char* t1845 = __dat1840;
    t1842->_M_p = t1845;
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1846, unsigned long v1847, unsigned long v1848) {
bb1849:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1850;
  unsigned long __pos1851;
  unsigned long __off1852;
  unsigned long __retval1853;
  _Bool __testoff1854;
  this1850 = v1846;
  __pos1851 = v1847;
  __off1852 = v1848;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1855 = this1850;
  unsigned long t1856 = __off1852;
  unsigned long r1857 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1855);
  unsigned long t1858 = __pos1851;
  unsigned long b1859 = r1857 - t1858;
  _Bool c1860 = ((t1856 < b1859)) ? 1 : 0;
  __testoff1854 = c1860;
  _Bool t1861 = __testoff1854;
  unsigned long ternary1862;
  if (t1861) {
    unsigned long t1863 = __off1852;
    ternary1862 = (unsigned long)t1863;
  } else {
    unsigned long r1864 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1855);
    unsigned long t1865 = __pos1851;
    unsigned long b1866 = r1864 - t1865;
    ternary1862 = (unsigned long)b1866;
  }
  __retval1853 = ternary1862;
  unsigned long t1867 = __retval1853;
  return t1867;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructILb1EEEvPKcm
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_true_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1868, char* v1869, unsigned long v1870) {
bb1871:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1872;
  char* __str1873;
  unsigned long __n1874;
  this1872 = v1868;
  __str1873 = v1869;
  __n1874 = v1870;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1875 = this1872;
    unsigned long t1876 = __n1874;
    unsigned long c1877 = 15;
    _Bool c1878 = ((t1876 > c1877)) ? 1 : 0;
    if (c1878) {
      unsigned long c1879 = 0;
      char* r1880 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1875, &__n1874, c1879);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1875, r1880);
      unsigned long t1881 = __n1874;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1875, t1881);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1875);
    }
    unsigned long t1882 = __n1874;
    _Bool cast1883 = (_Bool)t1882;
    _Bool ternary1884;
    if (cast1883) {
      _Bool c1885 = 1;
      ternary1884 = (_Bool)c1885;
    } else {
      _Bool c1886 = 1;
      ternary1884 = (_Bool)c1886;
    }
    if (ternary1884) {
      char* r1887 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1875);
      char* t1888 = __str1873;
      unsigned long t1889 = __n1874;
      _Bool c1890 = 1;
      unsigned long cast1891 = (unsigned long)c1890;
      unsigned long b1892 = t1889 + cast1891;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1887, t1888, b1892);
    }
  unsigned long t1893 = __n1874;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1875, t1893);
    _Bool c1894 = 0;
    if (c1894) {
      char ref_tmp01895;
      unsigned long t1896 = __n1874;
      char* r1897 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1875);
      char* ptr1898 = &(r1897)[t1896];
      char c1899 = 0;
      ref_tmp01895 = c1899;
      std__char_traits_char___assign(ptr1898, &ref_tmp01895);
    }
  return;
}

