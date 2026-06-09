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
char _str[16] = "noon is 12 p.m.";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[18] = "Original string:\n";
char _str_2[29] = "\n\n(find) \"is\" was found at: ";
char _str_3[3] = "is";
char _str_4[29] = "\n(rfind) \"is\" was found at: ";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
char _str_5[6] = "misop";
char _str_6[26] = "\n\n(find_first_of) found '";
char _str_7[30] = "' from the group \"misop\" at: ";
char _str_8[25] = "\n\n(find_last_of) found '";
char _str_9[8] = "noi spm";
char _str_10[24] = "\n\n(find_first_not_of) '";
char _str_11[50] = "' is not contained in \"noi spm\" and was found at:";
char _str_12[10] = "12noi spm";
char _str_13[43] = "' is not contained in \"12noi spm\" and was ";
char _str_14[10] = "found at:";
char _str_15[38] = "\nfind_first_not_of(\"noon is 12 p.m.\")";
char _str_16[12] = " returned: ";
char _str_17[50] = "basic_string: construction from null is not valid";
char _str_18[24] = "basic_string::_M_create";
char _str_19[93] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/basic_string.h";
char __PRETTY_FUNCTION____ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm[138] = "reference std::basic_string<char>::operator[](size_type) [_CharT = char, _Traits = std::char_traits<char>, _Alloc = std::allocator<char>]";
char _str_20[16] = "__pos <= size()";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_unsigned_long_(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* __gnu_cxx__char_traits_char___find(char* p0, unsigned long p1, char* p2);
char* std__char_traits_char___find(char* p0, unsigned long p1, char* p2);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, unsigned long p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____rfind_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, unsigned long p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____rfind_char_const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_of_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, unsigned long p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_of_char_const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_last_of_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, unsigned long p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_last_of_char_const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_not_of_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, unsigned long p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_not_of_char_const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
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
        char* cast20 = (char*)&(_str_17);
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
int std__operator_(int v32, int v33) {
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
  int r58 = std__operator_(r56, t57);
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

// function: _ZNSolsEm
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* v103, unsigned long v104) {
bb105:
  struct std__basic_ostream_char__std__char_traits_char__* this106;
  unsigned long __n107;
  struct std__basic_ostream_char__std__char_traits_char__* __retval108;
  this106 = v103;
  __n107 = v104;
  struct std__basic_ostream_char__std__char_traits_char__* t109 = this106;
  unsigned long t110 = __n107;
  struct std__basic_ostream_char__std__char_traits_char__* r111 = std__ostream__std__ostream___M_insert_unsigned_long_(t109, t110);
  __retval108 = r111;
  struct std__basic_ostream_char__std__char_traits_char__* t112 = __retval108;
  return t112;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v113) {
bb114:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this115;
  unsigned long __retval116;
  unsigned long __sz117;
  this115 = v113;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t118 = this115;
  unsigned long t119 = t118->_M_string_length;
  __sz117 = t119;
    unsigned long t120 = __sz117;
    unsigned long r121 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t118);
    _Bool c122 = ((t120 > r121)) ? 1 : 0;
    if (c122) {
      __builtin_unreachable();
    }
  unsigned long t123 = __sz117;
  __retval116 = t123;
  unsigned long t124 = __retval116;
  return t124;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v125) {
bb126:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this127;
  char* __retval128;
  this127 = v125;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t129 = this127;
  char* r130 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t129);
  __retval128 = r130;
  char* t131 = __retval128;
  return t131;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4findEPKcmRS2_
char* __gnu_cxx__char_traits_char___find(char* v132, unsigned long v133, char* v134) {
bb135:
  char* __s136;
  unsigned long __n137;
  char* __a138;
  char* __retval139;
  __s136 = v132;
  __n137 = v133;
  __a138 = v134;
    unsigned long __i140;
    unsigned long c141 = 0;
    __i140 = c141;
    while (1) {
      unsigned long t143 = __i140;
      unsigned long t144 = __n137;
      _Bool c145 = ((t143 < t144)) ? 1 : 0;
      if (!c145) break;
        unsigned long t146 = __i140;
        char* t147 = __s136;
        char* ptr148 = &(t147)[t146];
        char* t149 = __a138;
        _Bool r150 = __gnu_cxx__char_traits_char___eq(ptr148, t149);
        if (r150) {
          char* t151 = __s136;
          unsigned long t152 = __i140;
          char* ptr153 = &(t151)[t152];
          __retval139 = ptr153;
          char* t154 = __retval139;
          char* ret_val155 = t154;
          return ret_val155;
        }
    for_step142: ;
      unsigned long t156 = __i140;
      unsigned long u157 = t156 + 1;
      __i140 = u157;
    }
  char* c158 = ((void*)0);
  __retval139 = c158;
  char* t159 = __retval139;
  return t159;
}

// function: _ZNSt11char_traitsIcE4findEPKcmRS1_
char* std__char_traits_char___find(char* v160, unsigned long v161, char* v162) {
bb163:
  char* __s164;
  unsigned long __n165;
  char* __a166;
  char* __retval167;
  __s164 = v160;
  __n165 = v161;
  __a166 = v162;
    unsigned long t168 = __n165;
    unsigned long c169 = 0;
    _Bool c170 = ((t168 == c169)) ? 1 : 0;
    if (c170) {
      char* c171 = ((void*)0);
      __retval167 = c171;
      char* t172 = __retval167;
      return t172;
    }
    _Bool r173 = std____is_constant_evaluated();
    if (r173) {
      char* t174 = __s164;
      unsigned long t175 = __n165;
      char* t176 = __a166;
      char* r177 = __gnu_cxx__char_traits_char___find(t174, t175, t176);
      __retval167 = r177;
      char* t178 = __retval167;
      return t178;
    }
  char* t179 = __s164;
  void* cast180 = (void*)t179;
  char* t181 = __a166;
  char t182 = *t181;
  int cast183 = (int)t182;
  unsigned long t184 = __n165;
  void* memchr185 = (void*)__builtin_memchr(cast180, cast183, t184);
  char* cast186 = (char*)memchr185;
  __retval167 = cast186;
  char* t187 = __retval167;
  return t187;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v188, char* v189) {
bb190:
  char* __c1191;
  char* __c2192;
  _Bool __retval193;
  __c1191 = v188;
  __c2192 = v189;
  char* t194 = __c1191;
  char t195 = *t194;
  unsigned char cast196 = (unsigned char)t195;
  int cast197 = (int)cast196;
  char* t198 = __c2192;
  char t199 = *t198;
  unsigned char cast200 = (unsigned char)t199;
  int cast201 = (int)cast200;
  _Bool c202 = ((cast197 < cast201)) ? 1 : 0;
  __retval193 = c202;
  _Bool t203 = __retval193;
  return t203;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v204, char* v205, unsigned long v206) {
bb207:
  char* __s1208;
  char* __s2209;
  unsigned long __n210;
  int __retval211;
  __s1208 = v204;
  __s2209 = v205;
  __n210 = v206;
    unsigned long t212 = __n210;
    unsigned long c213 = 0;
    _Bool c214 = ((t212 == c213)) ? 1 : 0;
    if (c214) {
      int c215 = 0;
      __retval211 = c215;
      int t216 = __retval211;
      return t216;
    }
    _Bool r217 = std____is_constant_evaluated();
    if (r217) {
        unsigned long __i218;
        unsigned long c219 = 0;
        __i218 = c219;
        while (1) {
          unsigned long t221 = __i218;
          unsigned long t222 = __n210;
          _Bool c223 = ((t221 < t222)) ? 1 : 0;
          if (!c223) break;
            unsigned long t224 = __i218;
            char* t225 = __s1208;
            char* ptr226 = &(t225)[t224];
            unsigned long t227 = __i218;
            char* t228 = __s2209;
            char* ptr229 = &(t228)[t227];
            _Bool r230 = std__char_traits_char___lt(ptr226, ptr229);
            if (r230) {
              int c231 = -1;
              __retval211 = c231;
              int t232 = __retval211;
              int ret_val233 = t232;
              return ret_val233;
            } else {
                unsigned long t234 = __i218;
                char* t235 = __s2209;
                char* ptr236 = &(t235)[t234];
                unsigned long t237 = __i218;
                char* t238 = __s1208;
                char* ptr239 = &(t238)[t237];
                _Bool r240 = std__char_traits_char___lt(ptr236, ptr239);
                if (r240) {
                  int c241 = 1;
                  __retval211 = c241;
                  int t242 = __retval211;
                  int ret_val243 = t242;
                  return ret_val243;
                }
            }
        for_step220: ;
          unsigned long t244 = __i218;
          unsigned long u245 = t244 + 1;
          __i218 = u245;
        }
      int c246 = 0;
      __retval211 = c246;
      int t247 = __retval211;
      return t247;
    }
  char* t248 = __s1208;
  void* cast249 = (void*)t248;
  char* t250 = __s2209;
  void* cast251 = (void*)t250;
  unsigned long t252 = __n210;
  int r253 = memcmp(cast249, cast251, t252);
  __retval211 = r253;
  int t254 = __retval211;
  return t254;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4findEPKcmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v255, char* v256, unsigned long v257, unsigned long v258) {
bb259:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this260;
  char* __s261;
  unsigned long __pos262;
  unsigned long __n263;
  unsigned long __retval264;
  unsigned long __size265;
  char __elem0266;
  char* __data267;
  char* __first268;
  char* __last269;
  unsigned long __len270;
  this260 = v255;
  __s261 = v256;
  __pos262 = v257;
  __n263 = v258;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t271 = this260;
  unsigned long r272 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t271);
  __size265 = r272;
    unsigned long t273 = __n263;
    unsigned long c274 = 0;
    _Bool c275 = ((t273 == c274)) ? 1 : 0;
    if (c275) {
      unsigned long t276 = __pos262;
      unsigned long t277 = __size265;
      _Bool c278 = ((t276 <= t277)) ? 1 : 0;
      unsigned long ternary279;
      if (c278) {
        unsigned long t280 = __pos262;
        ternary279 = (unsigned long)t280;
      } else {
        unsigned long t281 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
        ternary279 = (unsigned long)t281;
      }
      __retval264 = ternary279;
      unsigned long t282 = __retval264;
      return t282;
    }
    unsigned long t283 = __pos262;
    unsigned long t284 = __size265;
    _Bool c285 = ((t283 >= t284)) ? 1 : 0;
    if (c285) {
      unsigned long t286 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
      __retval264 = t286;
      unsigned long t287 = __retval264;
      return t287;
    }
  long c288 = 0;
  char* t289 = __s261;
  char* ptr290 = &(t289)[c288];
  char t291 = *ptr290;
  __elem0266 = t291;
  char* r292 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t271);
  __data267 = r292;
  char* t293 = __data267;
  unsigned long t294 = __pos262;
  char* ptr295 = &(t293)[t294];
  __first268 = ptr295;
  char* t296 = __data267;
  unsigned long t297 = __size265;
  char* ptr298 = &(t296)[t297];
  __last269 = ptr298;
  unsigned long t299 = __size265;
  unsigned long t300 = __pos262;
  unsigned long b301 = t299 - t300;
  __len270 = b301;
    while (1) {
      unsigned long t302 = __len270;
      unsigned long t303 = __n263;
      _Bool c304 = ((t302 >= t303)) ? 1 : 0;
      if (!c304) break;
        char* t305 = __first268;
        unsigned long t306 = __len270;
        unsigned long t307 = __n263;
        unsigned long b308 = t306 - t307;
        unsigned long c309 = 1;
        unsigned long b310 = b308 + c309;
        char* r311 = std__char_traits_char___find(t305, b310, &__elem0266);
        __first268 = r311;
          char* t312 = __first268;
          _Bool cast313 = (_Bool)t312;
          _Bool u314 = !cast313;
          if (u314) {
            unsigned long t315 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
            __retval264 = t315;
            unsigned long t316 = __retval264;
            unsigned long ret_val317 = t316;
            return ret_val317;
          }
          char* t318 = __first268;
          char* t319 = __s261;
          unsigned long t320 = __n263;
          int r321 = std__char_traits_char___compare(t318, t319, t320);
          int c322 = 0;
          _Bool c323 = ((r321 == c322)) ? 1 : 0;
          if (c323) {
            char* t324 = __first268;
            char* t325 = __data267;
            long diff326 = t324 - t325;
            unsigned long cast327 = (unsigned long)diff326;
            __retval264 = cast327;
            unsigned long t328 = __retval264;
            unsigned long ret_val329 = t328;
            return ret_val329;
          }
        char* t330 = __last269;
        char* t331 = __first268;
        int c332 = 1;
        char* ptr333 = &(t331)[c332];
        __first268 = ptr333;
        long diff334 = t330 - ptr333;
        unsigned long cast335 = (unsigned long)diff334;
        __len270 = cast335;
    }
  unsigned long t336 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
  __retval264 = t336;
  unsigned long t337 = __retval264;
  return t337;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4findEPKcm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v338, char* v339, unsigned long v340) {
bb341:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this342;
  char* __s343;
  unsigned long __pos344;
  unsigned long __retval345;
  this342 = v338;
  __s343 = v339;
  __pos344 = v340;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t346 = this342;
  char* t347 = __s343;
  unsigned long t348 = __pos344;
  char* t349 = __s343;
  unsigned long r350 = std__char_traits_char___length(t349);
  unsigned long r351 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__unsigned_long__const(t346, t347, t348, r350);
  __retval345 = r351;
  unsigned long t352 = __retval345;
  return t352;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5rfindEPKcmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____rfind_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v353, char* v354, unsigned long v355, unsigned long v356) {
bb357:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this358;
  char* __s359;
  unsigned long __pos360;
  unsigned long __n361;
  unsigned long __retval362;
  unsigned long __size363;
  this358 = v353;
  __s359 = v354;
  __pos360 = v355;
  __n361 = v356;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t364 = this358;
  unsigned long r365 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t364);
  __size363 = r365;
    unsigned long t366 = __n361;
    unsigned long t367 = __size363;
    _Bool c368 = ((t366 <= t367)) ? 1 : 0;
    if (c368) {
      unsigned long ref_tmp0369;
      char* __data370;
      unsigned long t371 = __size363;
      unsigned long t372 = __n361;
      unsigned long b373 = t371 - t372;
      ref_tmp0369 = b373;
      unsigned long* r374 = unsigned_long_const__std__min_unsigned_long_(&ref_tmp0369, &__pos360);
      unsigned long t375 = *r374;
      __pos360 = t375;
      char* r376 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t364);
      __data370 = r376;
        do {
              char* t377 = __data370;
              unsigned long t378 = __pos360;
              char* ptr379 = &(t377)[t378];
              char* t380 = __s359;
              unsigned long t381 = __n361;
              int r382 = std__char_traits_char___compare(ptr379, t380, t381);
              int c383 = 0;
              _Bool c384 = ((r382 == c383)) ? 1 : 0;
              if (c384) {
                unsigned long t385 = __pos360;
                __retval362 = t385;
                unsigned long t386 = __retval362;
                unsigned long ret_val387 = t386;
                return ret_val387;
              }
          unsigned long t388 = __pos360;
          unsigned long u389 = t388 - 1;
          __pos360 = u389;
          unsigned long c390 = 0;
          _Bool c391 = ((t388 > c390)) ? 1 : 0;
          if (!c391) break;
        } while (1);
    }
  unsigned long t392 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
  __retval362 = t392;
  unsigned long t393 = __retval362;
  return t393;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5rfindEPKcm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____rfind_char_const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v394, char* v395, unsigned long v396) {
bb397:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this398;
  char* __s399;
  unsigned long __pos400;
  unsigned long __retval401;
  this398 = v394;
  __s399 = v395;
  __pos400 = v396;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t402 = this398;
  char* t403 = __s399;
  unsigned long t404 = __pos400;
  char* t405 = __s399;
  unsigned long r406 = std__char_traits_char___length(t405);
  unsigned long r407 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____rfind_char_const___unsigned_long__unsigned_long__const(t402, t403, t404, r406);
  __retval401 = r407;
  unsigned long t408 = __retval401;
  return t408;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13find_first_ofEPKcmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_of_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v409, char* v410, unsigned long v411, unsigned long v412) {
bb413:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this414;
  char* __s415;
  unsigned long __pos416;
  unsigned long __n417;
  unsigned long __retval418;
  this414 = v409;
  __s415 = v410;
  __pos416 = v411;
  __n417 = v412;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t419 = this414;
    while (1) {
      unsigned long t421 = __n417;
      _Bool cast422 = (_Bool)t421;
      _Bool ternary423;
      if (cast422) {
        unsigned long t424 = __pos416;
        unsigned long r425 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t419);
        _Bool c426 = ((t424 < r425)) ? 1 : 0;
        ternary423 = (_Bool)c426;
      } else {
        _Bool c427 = 0;
        ternary423 = (_Bool)c427;
      }
      if (!ternary423) break;
        char* __p428;
        char* t429 = __s415;
        unsigned long t430 = __n417;
        unsigned long t431 = __pos416;
        char* r432 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t419);
        char* ptr433 = &(r432)[t431];
        char* r434 = std__char_traits_char___find(t429, t430, ptr433);
        __p428 = r434;
          char* t435 = __p428;
          _Bool cast436 = (_Bool)t435;
          if (cast436) {
            unsigned long t437 = __pos416;
            __retval418 = t437;
            unsigned long t438 = __retval418;
            unsigned long ret_val439 = t438;
            return ret_val439;
          }
    for_step420: ;
      unsigned long t440 = __pos416;
      unsigned long u441 = t440 + 1;
      __pos416 = u441;
    }
  unsigned long t442 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
  __retval418 = t442;
  unsigned long t443 = __retval418;
  return t443;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13find_first_ofEPKcm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_of_char_const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v444, char* v445, unsigned long v446) {
bb447:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this448;
  char* __s449;
  unsigned long __pos450;
  unsigned long __retval451;
  this448 = v444;
  __s449 = v445;
  __pos450 = v446;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t452 = this448;
  char* t453 = __s449;
  unsigned long t454 = __pos450;
  char* t455 = __s449;
  unsigned long r456 = std__char_traits_char___length(t455);
  unsigned long r457 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_of_char_const___unsigned_long__unsigned_long__const(t452, t453, t454, r456);
  __retval451 = r457;
  unsigned long t458 = __retval451;
  return t458;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v459) {
bb460:
  struct std__ios_base* this461;
  long __retval462;
  this461 = v459;
  struct std__ios_base* t463 = this461;
  long t464 = t463->_M_width;
  __retval462 = t464;
  long t465 = __retval462;
  return t465;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v466, char v467) {
bb468:
  struct std__basic_ostream_char__std__char_traits_char__* __out469;
  char __c470;
  struct std__basic_ostream_char__std__char_traits_char__* __retval471;
  __out469 = v466;
  __c470 = v467;
    struct std__basic_ostream_char__std__char_traits_char__* t472 = __out469;
    void** v473 = (void**)t472;
    void* v474 = *((void**)v473);
    unsigned char* cast475 = (unsigned char*)v474;
    long c476 = -24;
    unsigned char* ptr477 = &(cast475)[c476];
    long* cast478 = (long*)ptr477;
    long t479 = *cast478;
    unsigned char* cast480 = (unsigned char*)t472;
    unsigned char* ptr481 = &(cast480)[t479];
    struct std__basic_ostream_char__std__char_traits_char__* cast482 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr481;
    struct std__ios_base* cast483 = (struct std__ios_base*)cast482;
    long r484 = std__ios_base__width___const(cast483);
    long c485 = 0;
    _Bool c486 = ((r484 != c485)) ? 1 : 0;
    if (c486) {
      struct std__basic_ostream_char__std__char_traits_char__* t487 = __out469;
      long c488 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r489 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t487, &__c470, c488);
      __retval471 = r489;
      struct std__basic_ostream_char__std__char_traits_char__* t490 = __retval471;
      return t490;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t491 = __out469;
  char t492 = __c470;
  struct std__basic_ostream_char__std__char_traits_char__* r493 = std__ostream__put(t491, t492);
  struct std__basic_ostream_char__std__char_traits_char__* t494 = __out469;
  __retval471 = t494;
  struct std__basic_ostream_char__std__char_traits_char__* t495 = __retval471;
  return t495;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v496, unsigned long v497) {
bb498:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this499;
  unsigned long __pos500;
  char* __retval501;
  this499 = v496;
  __pos500 = v497;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t502 = this499;
    do {
          unsigned long t503 = __pos500;
          unsigned long r504 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t502);
          _Bool c505 = ((t503 <= r504)) ? 1 : 0;
          _Bool u506 = !c505;
          if (u506) {
            char* cast507 = (char*)&(_str_19);
            int c508 = 1369;
            char* cast509 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm);
            char* cast510 = (char*)&(_str_20);
            std____glibcxx_assert_fail(cast507, c508, cast509, cast510);
          }
      _Bool c511 = 0;
      if (!c511) break;
    } while (1);
  unsigned long t512 = __pos500;
  char* r513 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t502);
  char* ptr514 = &(r513)[t512];
  __retval501 = ptr514;
  char* t515 = __retval501;
  return t515;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12find_last_ofEPKcmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_last_of_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v516, char* v517, unsigned long v518, unsigned long v519) {
bb520:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this521;
  char* __s522;
  unsigned long __pos523;
  unsigned long __n524;
  unsigned long __retval525;
  unsigned long __size526;
  this521 = v516;
  __s522 = v517;
  __pos523 = v518;
  __n524 = v519;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t527 = this521;
  unsigned long r528 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t527);
  __size526 = r528;
    unsigned long t529 = __size526;
    _Bool cast530 = (_Bool)t529;
    _Bool ternary531;
    if (cast530) {
      unsigned long t532 = __n524;
      _Bool cast533 = (_Bool)t532;
      ternary531 = (_Bool)cast533;
    } else {
      _Bool c534 = 0;
      ternary531 = (_Bool)c534;
    }
    if (ternary531) {
        unsigned long t535 = __size526;
        unsigned long u536 = t535 - 1;
        __size526 = u536;
        unsigned long t537 = __pos523;
        _Bool c538 = ((u536 > t537)) ? 1 : 0;
        if (c538) {
          unsigned long t539 = __pos523;
          __size526 = t539;
        }
        do {
              char* t540 = __s522;
              unsigned long t541 = __n524;
              unsigned long t542 = __size526;
              char* r543 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t527);
              char* ptr544 = &(r543)[t542];
              char* r545 = std__char_traits_char___find(t540, t541, ptr544);
              _Bool cast546 = (_Bool)r545;
              if (cast546) {
                unsigned long t547 = __size526;
                __retval525 = t547;
                unsigned long t548 = __retval525;
                unsigned long ret_val549 = t548;
                return ret_val549;
              }
          unsigned long t550 = __size526;
          unsigned long u551 = t550 - 1;
          __size526 = u551;
          unsigned long c552 = 0;
          _Bool c553 = ((t550 != c552)) ? 1 : 0;
          if (!c553) break;
        } while (1);
    }
  unsigned long t554 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
  __retval525 = t554;
  unsigned long t555 = __retval525;
  return t555;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12find_last_ofEPKcm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_last_of_char_const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v556, char* v557, unsigned long v558) {
bb559:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this560;
  char* __s561;
  unsigned long __pos562;
  unsigned long __retval563;
  this560 = v556;
  __s561 = v557;
  __pos562 = v558;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t564 = this560;
  char* t565 = __s561;
  unsigned long t566 = __pos562;
  char* t567 = __s561;
  unsigned long r568 = std__char_traits_char___length(t567);
  unsigned long r569 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_last_of_char_const___unsigned_long__unsigned_long__const(t564, t565, t566, r568);
  __retval563 = r569;
  unsigned long t570 = __retval563;
  return t570;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17find_first_not_ofEPKcmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_not_of_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v571, char* v572, unsigned long v573, unsigned long v574) {
bb575:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this576;
  char* __s577;
  unsigned long __pos578;
  unsigned long __n579;
  unsigned long __retval580;
  this576 = v571;
  __s577 = v572;
  __pos578 = v573;
  __n579 = v574;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t581 = this576;
    while (1) {
      unsigned long t583 = __pos578;
      unsigned long r584 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t581);
      _Bool c585 = ((t583 < r584)) ? 1 : 0;
      if (!c585) break;
        char* t586 = __s577;
        unsigned long t587 = __n579;
        unsigned long t588 = __pos578;
        char* r589 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t581);
        char* ptr590 = &(r589)[t588];
        char* r591 = std__char_traits_char___find(t586, t587, ptr590);
        _Bool cast592 = (_Bool)r591;
        _Bool u593 = !cast592;
        if (u593) {
          unsigned long t594 = __pos578;
          __retval580 = t594;
          unsigned long t595 = __retval580;
          unsigned long ret_val596 = t595;
          return ret_val596;
        }
    for_step582: ;
      unsigned long t597 = __pos578;
      unsigned long u598 = t597 + 1;
      __pos578 = u598;
    }
  unsigned long t599 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
  __retval580 = t599;
  unsigned long t600 = __retval580;
  return t600;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17find_first_not_ofEPKcm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_not_of_char_const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v601, char* v602, unsigned long v603) {
bb604:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this605;
  char* __s606;
  unsigned long __pos607;
  unsigned long __retval608;
  this605 = v601;
  __s606 = v602;
  __pos607 = v603;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t609 = this605;
  char* t610 = __s606;
  unsigned long t611 = __pos607;
  char* t612 = __s606;
  unsigned long r613 = std__char_traits_char___length(t612);
  unsigned long r614 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_not_of_char_const___unsigned_long__unsigned_long__const(t609, t610, t611, r613);
  __retval608 = r614;
  unsigned long t615 = __retval608;
  return t615;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v616, void* v617) {
bb618:
  struct std__basic_ostream_char__std__char_traits_char__* this619;
  void* __pf620;
  struct std__basic_ostream_char__std__char_traits_char__* __retval621;
  this619 = v616;
  __pf620 = v617;
  struct std__basic_ostream_char__std__char_traits_char__* t622 = this619;
  void* t623 = __pf620;
  struct std__basic_ostream_char__std__char_traits_char__* r624 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t623)(t622);
  __retval621 = r624;
  struct std__basic_ostream_char__std__char_traits_char__* t625 = __retval621;
  return t625;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v626) {
bb627:
  struct std__basic_ostream_char__std__char_traits_char__* __os628;
  struct std__basic_ostream_char__std__char_traits_char__* __retval629;
  __os628 = v626;
  struct std__basic_ostream_char__std__char_traits_char__* t630 = __os628;
  struct std__basic_ostream_char__std__char_traits_char__* r631 = std__ostream__flush(t630);
  __retval629 = r631;
  struct std__basic_ostream_char__std__char_traits_char__* t632 = __retval629;
  return t632;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v633) {
bb634:
  struct std__ctype_char_* __f635;
  struct std__ctype_char_* __retval636;
  __f635 = v633;
    struct std__ctype_char_* t637 = __f635;
    _Bool cast638 = (_Bool)t637;
    _Bool u639 = !cast638;
    if (u639) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t640 = __f635;
  __retval636 = t640;
  struct std__ctype_char_* t641 = __retval636;
  return t641;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v642, char v643) {
bb644:
  struct std__ctype_char_* this645;
  char __c646;
  char __retval647;
  this645 = v642;
  __c646 = v643;
  struct std__ctype_char_* t648 = this645;
    char t649 = t648->_M_widen_ok;
    _Bool cast650 = (_Bool)t649;
    if (cast650) {
      char t651 = __c646;
      unsigned char cast652 = (unsigned char)t651;
      unsigned long cast653 = (unsigned long)cast652;
      char t654 = t648->_M_widen[cast653];
      __retval647 = t654;
      char t655 = __retval647;
      return t655;
    }
  std__ctype_char____M_widen_init___const(t648);
  char t656 = __c646;
  void** v657 = (void**)t648;
  void* v658 = *((void**)v657);
  char vcall661 = (char)__VERIFIER_virtual_call_char_char(t648, 6, t656);
  __retval647 = vcall661;
  char t662 = __retval647;
  return t662;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v663, char v664) {
bb665:
  struct std__basic_ios_char__std__char_traits_char__* this666;
  char __c667;
  char __retval668;
  this666 = v663;
  __c667 = v664;
  struct std__basic_ios_char__std__char_traits_char__* t669 = this666;
  struct std__ctype_char_* t670 = t669->_M_ctype;
  struct std__ctype_char_* r671 = std__ctype_char__const__std____check_facet_std__ctype_char___(t670);
  char t672 = __c667;
  char r673 = std__ctype_char___widen_char__const(r671, t672);
  __retval668 = r673;
  char t674 = __retval668;
  return t674;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v675) {
bb676:
  struct std__basic_ostream_char__std__char_traits_char__* __os677;
  struct std__basic_ostream_char__std__char_traits_char__* __retval678;
  __os677 = v675;
  struct std__basic_ostream_char__std__char_traits_char__* t679 = __os677;
  struct std__basic_ostream_char__std__char_traits_char__* t680 = __os677;
  void** v681 = (void**)t680;
  void* v682 = *((void**)v681);
  unsigned char* cast683 = (unsigned char*)v682;
  long c684 = -24;
  unsigned char* ptr685 = &(cast683)[c684];
  long* cast686 = (long*)ptr685;
  long t687 = *cast686;
  unsigned char* cast688 = (unsigned char*)t680;
  unsigned char* ptr689 = &(cast688)[t687];
  struct std__basic_ostream_char__std__char_traits_char__* cast690 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr689;
  struct std__basic_ios_char__std__char_traits_char__* cast691 = (struct std__basic_ios_char__std__char_traits_char__*)cast690;
  char c692 = 10;
  char r693 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast691, c692);
  struct std__basic_ostream_char__std__char_traits_char__* r694 = std__ostream__put(t679, r693);
  struct std__basic_ostream_char__std__char_traits_char__* r695 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r694);
  __retval678 = r695;
  struct std__basic_ostream_char__std__char_traits_char__* t696 = __retval678;
  return t696;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v697) {
bb698:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this699;
  this699 = v697;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t700 = this699;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t700);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t700->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb701:
  int __retval702;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string1703;
  struct std__allocator_char_ ref_tmp0704;
  int location705;
  int c706 = 0;
  __retval702 = c706;
  char* cast707 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0704);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&string1703, cast707, &ref_tmp0704);
  {
    std__allocator_char____allocator(&ref_tmp0704);
  }
    char* cast708 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* r709 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast708);
    struct std__basic_ostream_char__std__char_traits_char__* r710 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r709, &string1703);
    char* cast711 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r712 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r710, cast711);
    char* cast713 = (char*)&(_str_3);
    unsigned long c714 = 0;
    unsigned long r715 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&string1703, cast713, c714);
    struct std__basic_ostream_char__std__char_traits_char__* r716 = std__ostream__operator___2(r712, r715);
    char* cast717 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r718 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r716, cast717);
    char* cast719 = (char*)&(_str_3);
    unsigned long t720 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
    unsigned long r721 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____rfind_char_const___unsigned_long__const(&string1703, cast719, t720);
    struct std__basic_ostream_char__std__char_traits_char__* r722 = std__ostream__operator___2(r718, r721);
    char* cast723 = (char*)&(_str_5);
    unsigned long c724 = 0;
    unsigned long r725 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_of_char_const___unsigned_long__const(&string1703, cast723, c724);
    int cast726 = (int)r725;
    location705 = cast726;
    char* cast727 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* r728 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast727);
    int t729 = location705;
    unsigned long cast730 = (unsigned long)t729;
    char* r731 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(&string1703, cast730);
    char t732 = *r731;
    struct std__basic_ostream_char__std__char_traits_char__* r733 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r728, t732);
    char* cast734 = (char*)&(_str_7);
    struct std__basic_ostream_char__std__char_traits_char__* r735 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r733, cast734);
    int t736 = location705;
    struct std__basic_ostream_char__std__char_traits_char__* r737 = std__ostream__operator__(r735, t736);
    char* cast738 = (char*)&(_str_5);
    unsigned long t739 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
    unsigned long r740 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_last_of_char_const___unsigned_long__const(&string1703, cast738, t739);
    int cast741 = (int)r740;
    location705 = cast741;
    char* cast742 = (char*)&(_str_8);
    struct std__basic_ostream_char__std__char_traits_char__* r743 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast742);
    int t744 = location705;
    unsigned long cast745 = (unsigned long)t744;
    char* r746 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(&string1703, cast745);
    char t747 = *r746;
    struct std__basic_ostream_char__std__char_traits_char__* r748 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r743, t747);
    char* cast749 = (char*)&(_str_7);
    struct std__basic_ostream_char__std__char_traits_char__* r750 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r748, cast749);
    int t751 = location705;
    struct std__basic_ostream_char__std__char_traits_char__* r752 = std__ostream__operator__(r750, t751);
    char* cast753 = (char*)&(_str_9);
    unsigned long c754 = 0;
    unsigned long r755 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_not_of_char_const___unsigned_long__const(&string1703, cast753, c754);
    int cast756 = (int)r755;
    location705 = cast756;
    char* cast757 = (char*)&(_str_10);
    struct std__basic_ostream_char__std__char_traits_char__* r758 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast757);
    int t759 = location705;
    unsigned long cast760 = (unsigned long)t759;
    char* r761 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(&string1703, cast760);
    char t762 = *r761;
    struct std__basic_ostream_char__std__char_traits_char__* r763 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r758, t762);
    char* cast764 = (char*)&(_str_11);
    struct std__basic_ostream_char__std__char_traits_char__* r765 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r763, cast764);
    int t766 = location705;
    struct std__basic_ostream_char__std__char_traits_char__* r767 = std__ostream__operator__(r765, t766);
    char* cast768 = (char*)&(_str_12);
    unsigned long c769 = 0;
    unsigned long r770 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_not_of_char_const___unsigned_long__const(&string1703, cast768, c769);
    int cast771 = (int)r770;
    location705 = cast771;
    char* cast772 = (char*)&(_str_10);
    struct std__basic_ostream_char__std__char_traits_char__* r773 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast772);
    int t774 = location705;
    unsigned long cast775 = (unsigned long)t774;
    char* r776 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(&string1703, cast775);
    char t777 = *r776;
    struct std__basic_ostream_char__std__char_traits_char__* r778 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r773, t777);
    char* cast779 = (char*)&(_str_13);
    struct std__basic_ostream_char__std__char_traits_char__* r780 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r778, cast779);
    char* cast781 = (char*)&(_str_14);
    struct std__basic_ostream_char__std__char_traits_char__* r782 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r780, cast781);
    int t783 = location705;
    struct std__basic_ostream_char__std__char_traits_char__* r784 = std__ostream__operator__(r782, t783);
    struct std__basic_ostream_char__std__char_traits_char__* r785 = std__ostream__operator___std__ostream_____(r784, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    char* cast786 = (char*)&(_str);
    unsigned long c787 = 0;
    unsigned long r788 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_not_of_char_const___unsigned_long__const(&string1703, cast786, c787);
    int cast789 = (int)r788;
    location705 = cast789;
    char* cast790 = (char*)&(_str_15);
    struct std__basic_ostream_char__std__char_traits_char__* r791 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast790);
    char* cast792 = (char*)&(_str_16);
    struct std__basic_ostream_char__std__char_traits_char__* r793 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r791, cast792);
    int t794 = location705;
    struct std__basic_ostream_char__std__char_traits_char__* r795 = std__ostream__operator__(r793, t794);
    struct std__basic_ostream_char__std__char_traits_char__* r796 = std__ostream__operator___std__ostream_____(r795, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c797 = 0;
    __retval702 = c797;
    int t798 = __retval702;
    int ret_val799 = t798;
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&string1703);
    }
    return ret_val799;
  int t800 = __retval702;
  return t800;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v801) {
bb802:
  struct std____new_allocator_char_* this803;
  this803 = v801;
  struct std____new_allocator_char_* t804 = this803;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v805) {
bb806:
  char* __r807;
  char* __retval808;
  __r807 = v805;
  char* t809 = __r807;
  __retval808 = t809;
  char* t810 = __retval808;
  return t810;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v811) {
bb812:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this813;
  char* __retval814;
  this813 = v811;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t815 = this813;
  char* cast816 = (char*)&(t815->field2._M_local_buf);
  char* r817 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast816);
  __retval814 = r817;
  char* t818 = __retval814;
  return t818;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v819, char* v820, struct std__allocator_char_* v821) {
bb822:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this823;
  char* __dat824;
  struct std__allocator_char_* __a825;
  this823 = v819;
  __dat824 = v820;
  __a825 = v821;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t826 = this823;
  struct std__allocator_char_* base827 = (struct std__allocator_char_*)((char *)t826 + 0);
  struct std__allocator_char_* t828 = __a825;
  std__allocator_char___allocator(base827, t828);
    char* t829 = __dat824;
    t826->_M_p = t829;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb830:
  _Bool __retval831;
    _Bool c832 = 0;
    __retval831 = c832;
    _Bool t833 = __retval831;
    return t833;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v834, char* v835) {
bb836:
  char* __c1837;
  char* __c2838;
  _Bool __retval839;
  __c1837 = v834;
  __c2838 = v835;
  char* t840 = __c1837;
  char t841 = *t840;
  int cast842 = (int)t841;
  char* t843 = __c2838;
  char t844 = *t843;
  int cast845 = (int)t844;
  _Bool c846 = ((cast842 == cast845)) ? 1 : 0;
  __retval839 = c846;
  _Bool t847 = __retval839;
  return t847;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v848) {
bb849:
  char* __p850;
  unsigned long __retval851;
  unsigned long __i852;
  __p850 = v848;
  unsigned long c853 = 0;
  __i852 = c853;
    char ref_tmp0854;
    while (1) {
      unsigned long t855 = __i852;
      char* t856 = __p850;
      char* ptr857 = &(t856)[t855];
      char c858 = 0;
      ref_tmp0854 = c858;
      _Bool r859 = __gnu_cxx__char_traits_char___eq(ptr857, &ref_tmp0854);
      _Bool u860 = !r859;
      if (!u860) break;
      unsigned long t861 = __i852;
      unsigned long u862 = t861 + 1;
      __i852 = u862;
    }
  unsigned long t863 = __i852;
  __retval851 = t863;
  unsigned long t864 = __retval851;
  return t864;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v865) {
bb866:
  char* __s867;
  unsigned long __retval868;
  __s867 = v865;
    _Bool r869 = std____is_constant_evaluated();
    if (r869) {
      char* t870 = __s867;
      unsigned long r871 = __gnu_cxx__char_traits_char___length(t870);
      __retval868 = r871;
      unsigned long t872 = __retval868;
      return t872;
    }
  char* t873 = __s867;
  unsigned long r874 = strlen(t873);
  __retval868 = r874;
  unsigned long t875 = __retval868;
  return t875;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v876, char* v877, struct std__random_access_iterator_tag v878) {
bb879:
  char* __first880;
  char* __last881;
  struct std__random_access_iterator_tag unnamed882;
  long __retval883;
  __first880 = v876;
  __last881 = v877;
  unnamed882 = v878;
  char* t884 = __last881;
  char* t885 = __first880;
  long diff886 = t884 - t885;
  __retval883 = diff886;
  long t887 = __retval883;
  return t887;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v888) {
bb889:
  char** unnamed890;
  struct std__random_access_iterator_tag __retval891;
  unnamed890 = v888;
  struct std__random_access_iterator_tag t892 = __retval891;
  return t892;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v893, char* v894) {
bb895:
  char* __first896;
  char* __last897;
  long __retval898;
  struct std__random_access_iterator_tag agg_tmp0899;
  __first896 = v893;
  __last897 = v894;
  char* t900 = __first896;
  char* t901 = __last897;
  struct std__random_access_iterator_tag r902 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first896);
  agg_tmp0899 = r902;
  struct std__random_access_iterator_tag t903 = agg_tmp0899;
  long r904 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t900, t901, t903);
  __retval898 = r904;
  long t905 = __retval898;
  return t905;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v906, char* v907) {
bb908:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this909;
  char* __p910;
  this909 = v906;
  __p910 = v907;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t911 = this909;
  char* t912 = __p910;
  t911->_M_dataplus._M_p = t912;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v913) {
bb914:
  struct std__allocator_char_* __a915;
  unsigned long __retval916;
  __a915 = v913;
  unsigned long c917 = -1;
  unsigned long c918 = 1;
  unsigned long b919 = c917 / c918;
  __retval916 = b919;
  unsigned long t920 = __retval916;
  return t920;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v921) {
bb922:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this923;
  struct std__allocator_char_* __retval924;
  this923 = v921;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t925 = this923;
  struct std__allocator_char_* base926 = (struct std__allocator_char_*)((char *)&(t925->_M_dataplus) + 0);
  __retval924 = base926;
  struct std__allocator_char_* t927 = __retval924;
  return t927;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v928, unsigned long* v929) {
bb930:
  unsigned long* __a931;
  unsigned long* __b932;
  unsigned long* __retval933;
  __a931 = v928;
  __b932 = v929;
    unsigned long* t934 = __b932;
    unsigned long t935 = *t934;
    unsigned long* t936 = __a931;
    unsigned long t937 = *t936;
    _Bool c938 = ((t935 < t937)) ? 1 : 0;
    if (c938) {
      unsigned long* t939 = __b932;
      __retval933 = t939;
      unsigned long* t940 = __retval933;
      return t940;
    }
  unsigned long* t941 = __a931;
  __retval933 = t941;
  unsigned long* t942 = __retval933;
  return t942;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v943) {
bb944:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this945;
  unsigned long __retval946;
  unsigned long __diffmax947;
  unsigned long __allocmax948;
  this945 = v943;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t949 = this945;
  unsigned long c950 = 9223372036854775807;
  __diffmax947 = c950;
  struct std__allocator_char_* r951 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t949);
  unsigned long r952 = std__allocator_traits_std__allocator_char_____max_size(r951);
  __allocmax948 = r952;
  unsigned long* r953 = unsigned_long_const__std__min_unsigned_long_(&__diffmax947, &__allocmax948);
  unsigned long t954 = *r953;
  unsigned long c955 = 1;
  unsigned long b956 = t954 - c955;
  __retval946 = b956;
  unsigned long t957 = __retval946;
  return t957;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v958) {
bb959:
  struct std____new_allocator_char_* this960;
  unsigned long __retval961;
  this960 = v958;
  struct std____new_allocator_char_* t962 = this960;
  unsigned long c963 = 9223372036854775807;
  unsigned long c964 = 1;
  unsigned long b965 = c963 / c964;
  __retval961 = b965;
  unsigned long t966 = __retval961;
  return t966;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v967, unsigned long v968, void* v969) {
bb970:
  struct std____new_allocator_char_* this971;
  unsigned long __n972;
  void* unnamed973;
  char* __retval974;
  this971 = v967;
  __n972 = v968;
  unnamed973 = v969;
  struct std____new_allocator_char_* t975 = this971;
    unsigned long t976 = __n972;
    unsigned long r977 = std____new_allocator_char____M_max_size___const(t975);
    _Bool c978 = ((t976 > r977)) ? 1 : 0;
    if (c978) {
        unsigned long t979 = __n972;
        unsigned long c980 = -1;
        unsigned long c981 = 1;
        unsigned long b982 = c980 / c981;
        _Bool c983 = ((t979 > b982)) ? 1 : 0;
        if (c983) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c984 = 1;
    unsigned long c985 = 16;
    _Bool c986 = ((c984 > c985)) ? 1 : 0;
    if (c986) {
      unsigned long __al987;
      unsigned long c988 = 1;
      __al987 = c988;
      unsigned long t989 = __n972;
      unsigned long c990 = 1;
      unsigned long b991 = t989 * c990;
      unsigned long t992 = __al987;
      void* r993 = operator_new_2(b991, t992);
      char* cast994 = (char*)r993;
      __retval974 = cast994;
      char* t995 = __retval974;
      return t995;
    }
  unsigned long t996 = __n972;
  unsigned long c997 = 1;
  unsigned long b998 = t996 * c997;
  void* r999 = operator_new(b998);
  char* cast1000 = (char*)r999;
  __retval974 = cast1000;
  char* t1001 = __retval974;
  return t1001;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1002, unsigned long v1003) {
bb1004:
  struct std__allocator_char_* this1005;
  unsigned long __n1006;
  char* __retval1007;
  this1005 = v1002;
  __n1006 = v1003;
  struct std__allocator_char_* t1008 = this1005;
    _Bool r1009 = std____is_constant_evaluated();
    if (r1009) {
        unsigned long t1010 = __n1006;
        unsigned long c1011 = 1;
        unsigned long ovr1012;
        _Bool ovf1013 = __builtin_mul_overflow(t1010, c1011, &ovr1012);
        __n1006 = ovr1012;
        if (ovf1013) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1014 = __n1006;
      void* r1015 = operator_new(t1014);
      char* cast1016 = (char*)r1015;
      __retval1007 = cast1016;
      char* t1017 = __retval1007;
      return t1017;
    }
  struct std____new_allocator_char_* base1018 = (struct std____new_allocator_char_*)((char *)t1008 + 0);
  unsigned long t1019 = __n1006;
  void* c1020 = ((void*)0);
  char* r1021 = std____new_allocator_char___allocate(base1018, t1019, c1020);
  __retval1007 = r1021;
  char* t1022 = __retval1007;
  return t1022;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1023, unsigned long v1024) {
bb1025:
  struct std__allocator_char_* __a1026;
  unsigned long __n1027;
  char* __retval1028;
  __a1026 = v1023;
  __n1027 = v1024;
  struct std__allocator_char_* t1029 = __a1026;
  unsigned long t1030 = __n1027;
  char* r1031 = std__allocator_char___allocate(t1029, t1030);
  __retval1028 = r1031;
  char* t1032 = __retval1028;
  return t1032;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1033, unsigned long v1034) {
bb1035:
  struct std__allocator_char_* __a1036;
  unsigned long __n1037;
  char* __retval1038;
  char* __p1039;
  __a1036 = v1033;
  __n1037 = v1034;
  struct std__allocator_char_* t1040 = __a1036;
  unsigned long t1041 = __n1037;
  char* r1042 = std__allocator_traits_std__allocator_char_____allocate(t1040, t1041);
  __p1039 = r1042;
  char* t1043 = __p1039;
  __retval1038 = t1043;
  char* t1044 = __retval1038;
  return t1044;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1045) {
bb1046:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1047;
  struct std__allocator_char_* __retval1048;
  this1047 = v1045;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1049 = this1047;
  struct std__allocator_char_* base1050 = (struct std__allocator_char_*)((char *)&(t1049->_M_dataplus) + 0);
  __retval1048 = base1050;
  struct std__allocator_char_* t1051 = __retval1048;
  return t1051;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1052, unsigned long* v1053, unsigned long v1054) {
bb1055:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1056;
  unsigned long* __capacity1057;
  unsigned long __old_capacity1058;
  char* __retval1059;
  this1056 = v1052;
  __capacity1057 = v1053;
  __old_capacity1058 = v1054;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1060 = this1056;
    unsigned long* t1061 = __capacity1057;
    unsigned long t1062 = *t1061;
    unsigned long r1063 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1060);
    _Bool c1064 = ((t1062 > r1063)) ? 1 : 0;
    if (c1064) {
      char* cast1065 = (char*)&(_str_18);
      std____throw_length_error(cast1065);
    }
    unsigned long* t1066 = __capacity1057;
    unsigned long t1067 = *t1066;
    unsigned long t1068 = __old_capacity1058;
    _Bool c1069 = ((t1067 > t1068)) ? 1 : 0;
    _Bool ternary1070;
    if (c1069) {
      unsigned long* t1071 = __capacity1057;
      unsigned long t1072 = *t1071;
      unsigned long c1073 = 2;
      unsigned long t1074 = __old_capacity1058;
      unsigned long b1075 = c1073 * t1074;
      _Bool c1076 = ((t1072 < b1075)) ? 1 : 0;
      ternary1070 = (_Bool)c1076;
    } else {
      _Bool c1077 = 0;
      ternary1070 = (_Bool)c1077;
    }
    if (ternary1070) {
      unsigned long c1078 = 2;
      unsigned long t1079 = __old_capacity1058;
      unsigned long b1080 = c1078 * t1079;
      unsigned long* t1081 = __capacity1057;
      *t1081 = b1080;
        unsigned long* t1082 = __capacity1057;
        unsigned long t1083 = *t1082;
        unsigned long r1084 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1060);
        _Bool c1085 = ((t1083 > r1084)) ? 1 : 0;
        if (c1085) {
          unsigned long r1086 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1060);
          unsigned long* t1087 = __capacity1057;
          *t1087 = r1086;
        }
    }
  struct std__allocator_char_* r1088 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1060);
  unsigned long* t1089 = __capacity1057;
  unsigned long t1090 = *t1089;
  unsigned long c1091 = 1;
  unsigned long b1092 = t1090 + c1091;
  char* r1093 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1088, b1092);
  __retval1059 = r1093;
  char* t1094 = __retval1059;
  return t1094;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1095, unsigned long v1096) {
bb1097:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1098;
  unsigned long __capacity1099;
  this1098 = v1095;
  __capacity1099 = v1096;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1100 = this1098;
  unsigned long t1101 = __capacity1099;
  t1100->field2._M_allocated_capacity = t1101;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1102:
  _Bool __retval1103;
    _Bool c1104 = 0;
    __retval1103 = c1104;
    _Bool t1105 = __retval1103;
    return t1105;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1106) {
bb1107:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1108;
  this1108 = v1106;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1109 = this1108;
    _Bool r1110 = std__is_constant_evaluated();
    if (r1110) {
        unsigned long __i1111;
        unsigned long c1112 = 0;
        __i1111 = c1112;
        while (1) {
          unsigned long t1114 = __i1111;
          unsigned long c1115 = 15;
          _Bool c1116 = ((t1114 <= c1115)) ? 1 : 0;
          if (!c1116) break;
          char c1117 = 0;
          unsigned long t1118 = __i1111;
          t1109->field2._M_local_buf[t1118] = c1117;
        for_step1113: ;
          unsigned long t1119 = __i1111;
          unsigned long u1120 = t1119 + 1;
          __i1111 = u1120;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1121, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1122) {
bb1123:
  struct _Guard* this1124;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1125;
  this1124 = v1121;
  __s1125 = v1122;
  struct _Guard* t1126 = this1124;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1127 = __s1125;
  t1126->_M_guarded = t1127;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1128, char* v1129) {
bb1130:
  char* __location1131;
  char* __args1132;
  char* __retval1133;
  void* __loc1134;
  __location1131 = v1128;
  __args1132 = v1129;
  char* t1135 = __location1131;
  void* cast1136 = (void*)t1135;
  __loc1134 = cast1136;
    void* t1137 = __loc1134;
    char* cast1138 = (char*)t1137;
    char* t1139 = __args1132;
    char t1140 = *t1139;
    *cast1138 = t1140;
    __retval1133 = cast1138;
    char* t1141 = __retval1133;
    return t1141;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1142, char* v1143) {
bb1144:
  char* __c11145;
  char* __c21146;
  __c11145 = v1142;
  __c21146 = v1143;
    _Bool r1147 = std____is_constant_evaluated();
    if (r1147) {
      char* t1148 = __c11145;
      char* t1149 = __c21146;
      char* r1150 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1148, t1149);
    } else {
      char* t1151 = __c21146;
      char t1152 = *t1151;
      char* t1153 = __c11145;
      *t1153 = t1152;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1154, char* v1155, unsigned long v1156) {
bb1157:
  char* __s11158;
  char* __s21159;
  unsigned long __n1160;
  char* __retval1161;
  __s11158 = v1154;
  __s21159 = v1155;
  __n1160 = v1156;
    unsigned long t1162 = __n1160;
    unsigned long c1163 = 0;
    _Bool c1164 = ((t1162 == c1163)) ? 1 : 0;
    if (c1164) {
      char* t1165 = __s11158;
      __retval1161 = t1165;
      char* t1166 = __retval1161;
      return t1166;
    }
    _Bool r1167 = std____is_constant_evaluated();
    if (r1167) {
        unsigned long __i1168;
        unsigned long c1169 = 0;
        __i1168 = c1169;
        while (1) {
          unsigned long t1171 = __i1168;
          unsigned long t1172 = __n1160;
          _Bool c1173 = ((t1171 < t1172)) ? 1 : 0;
          if (!c1173) break;
          char* t1174 = __s11158;
          unsigned long t1175 = __i1168;
          char* ptr1176 = &(t1174)[t1175];
          unsigned long t1177 = __i1168;
          char* t1178 = __s21159;
          char* ptr1179 = &(t1178)[t1177];
          char* r1180 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1176, ptr1179);
        for_step1170: ;
          unsigned long t1181 = __i1168;
          unsigned long u1182 = t1181 + 1;
          __i1168 = u1182;
        }
      char* t1183 = __s11158;
      __retval1161 = t1183;
      char* t1184 = __retval1161;
      return t1184;
    }
  char* t1185 = __s11158;
  void* cast1186 = (void*)t1185;
  char* t1187 = __s21159;
  void* cast1188 = (void*)t1187;
  unsigned long t1189 = __n1160;
  unsigned long c1190 = 1;
  unsigned long b1191 = t1189 * c1190;
  void* r1192 = memcpy(cast1186, cast1188, b1191);
  char* t1193 = __s11158;
  __retval1161 = t1193;
  char* t1194 = __retval1161;
  return t1194;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1195, char* v1196, unsigned long v1197) {
bb1198:
  char* __s11199;
  char* __s21200;
  unsigned long __n1201;
  char* __retval1202;
  __s11199 = v1195;
  __s21200 = v1196;
  __n1201 = v1197;
    unsigned long t1203 = __n1201;
    unsigned long c1204 = 0;
    _Bool c1205 = ((t1203 == c1204)) ? 1 : 0;
    if (c1205) {
      char* t1206 = __s11199;
      __retval1202 = t1206;
      char* t1207 = __retval1202;
      return t1207;
    }
    _Bool r1208 = std____is_constant_evaluated();
    if (r1208) {
      char* t1209 = __s11199;
      char* t1210 = __s21200;
      unsigned long t1211 = __n1201;
      char* r1212 = __gnu_cxx__char_traits_char___copy(t1209, t1210, t1211);
      __retval1202 = r1212;
      char* t1213 = __retval1202;
      return t1213;
    }
  char* t1214 = __s11199;
  void* cast1215 = (void*)t1214;
  char* t1216 = __s21200;
  void* cast1217 = (void*)t1216;
  unsigned long t1218 = __n1201;
  void* r1219 = memcpy(cast1215, cast1217, t1218);
  char* cast1220 = (char*)r1219;
  __retval1202 = cast1220;
  char* t1221 = __retval1202;
  return t1221;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1222, char* v1223, unsigned long v1224) {
bb1225:
  char* __d1226;
  char* __s1227;
  unsigned long __n1228;
  __d1226 = v1222;
  __s1227 = v1223;
  __n1228 = v1224;
    unsigned long t1229 = __n1228;
    unsigned long c1230 = 1;
    _Bool c1231 = ((t1229 == c1230)) ? 1 : 0;
    if (c1231) {
      char* t1232 = __d1226;
      char* t1233 = __s1227;
      std__char_traits_char___assign(t1232, t1233);
    } else {
      char* t1234 = __d1226;
      char* t1235 = __s1227;
      unsigned long t1236 = __n1228;
      char* r1237 = std__char_traits_char___copy(t1234, t1235, t1236);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1238) {
bb1239:
  char* __it1240;
  char* __retval1241;
  __it1240 = v1238;
  char* t1242 = __it1240;
  __retval1241 = t1242;
  char* t1243 = __retval1241;
  return t1243;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1244, char* v1245, char* v1246) {
bb1247:
  char* __p1248;
  char* __k11249;
  char* __k21250;
  __p1248 = v1244;
  __k11249 = v1245;
  __k21250 = v1246;
    char* t1251 = __p1248;
    char* t1252 = __k11249;
    char* r1253 = char_const__std____niter_base_char_const__(t1252);
    char* t1254 = __k21250;
    char* t1255 = __k11249;
    long diff1256 = t1254 - t1255;
    unsigned long cast1257 = (unsigned long)diff1256;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1251, r1253, cast1257);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1258) {
bb1259:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1260;
  char* __retval1261;
  this1260 = v1258;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1262 = this1260;
  char* t1263 = t1262->_M_dataplus._M_p;
  __retval1261 = t1263;
  char* t1264 = __retval1261;
  return t1264;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1265, unsigned long v1266) {
bb1267:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1268;
  unsigned long __length1269;
  this1268 = v1265;
  __length1269 = v1266;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1270 = this1268;
  unsigned long t1271 = __length1269;
  t1270->_M_string_length = t1271;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1272, unsigned long v1273) {
bb1274:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1275;
  unsigned long __n1276;
  char ref_tmp01277;
  this1275 = v1272;
  __n1276 = v1273;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1278 = this1275;
  unsigned long t1279 = __n1276;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1278, t1279);
  unsigned long t1280 = __n1276;
  char* r1281 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1278);
  char* ptr1282 = &(r1281)[t1280];
  char c1283 = 0;
  ref_tmp01277 = c1283;
  std__char_traits_char___assign(ptr1282, &ref_tmp01277);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1284) {
bb1285:
  struct _Guard* this1286;
  this1286 = v1284;
  struct _Guard* t1287 = this1286;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1288 = t1287->_M_guarded;
    _Bool cast1289 = (_Bool)t1288;
    if (cast1289) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1290 = t1287->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1290);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1291, char* v1292, char* v1293, struct std__forward_iterator_tag v1294) {
bb1295:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1296;
  char* __beg1297;
  char* __end1298;
  struct std__forward_iterator_tag unnamed1299;
  unsigned long __dnew1300;
  struct _Guard __guard1301;
  this1296 = v1291;
  __beg1297 = v1292;
  __end1298 = v1293;
  unnamed1299 = v1294;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1302 = this1296;
  char* t1303 = __beg1297;
  char* t1304 = __end1298;
  long r1305 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1303, t1304);
  unsigned long cast1306 = (unsigned long)r1305;
  __dnew1300 = cast1306;
    unsigned long t1307 = __dnew1300;
    unsigned long c1308 = 15;
    _Bool c1309 = ((t1307 > c1308)) ? 1 : 0;
    if (c1309) {
      unsigned long c1310 = 0;
      char* r1311 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1302, &__dnew1300, c1310);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1302, r1311);
      unsigned long t1312 = __dnew1300;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1302, t1312);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1302);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1301, t1302);
    char* r1313 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1302);
    char* t1314 = __beg1297;
    char* t1315 = __end1298;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1313, t1314, t1315);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1316 = ((void*)0);
    __guard1301._M_guarded = c1316;
    unsigned long t1317 = __dnew1300;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1302, t1317);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1301);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1318) {
bb1319:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1320;
  this1320 = v1318;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1321 = this1320;
  {
    struct std__allocator_char_* base1322 = (struct std__allocator_char_*)((char *)t1321 + 0);
    std__allocator_char____allocator(base1322);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1323, struct std____new_allocator_char_* v1324) {
bb1325:
  struct std____new_allocator_char_* this1326;
  struct std____new_allocator_char_* unnamed1327;
  this1326 = v1323;
  unnamed1327 = v1324;
  struct std____new_allocator_char_* t1328 = this1326;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1329, struct std__allocator_char_* v1330) {
bb1331:
  struct std__allocator_char_* this1332;
  struct std__allocator_char_* __a1333;
  this1332 = v1329;
  __a1333 = v1330;
  struct std__allocator_char_* t1334 = this1332;
  struct std____new_allocator_char_* base1335 = (struct std____new_allocator_char_*)((char *)t1334 + 0);
  struct std__allocator_char_* t1336 = __a1333;
  struct std____new_allocator_char_* base1337 = (struct std____new_allocator_char_*)((char *)t1336 + 0);
  std____new_allocator_char_____new_allocator(base1335, base1337);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1338) {
bb1339:
  char* __r1340;
  char* __retval1341;
  __r1340 = v1338;
  char* t1342 = __r1340;
  __retval1341 = t1342;
  char* t1343 = __retval1341;
  return t1343;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1344) {
bb1345:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1346;
  char* __retval1347;
  this1346 = v1344;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1348 = this1346;
  char* cast1349 = (char*)&(t1348->field2._M_local_buf);
  char* r1350 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1349);
  __retval1347 = r1350;
  char* t1351 = __retval1347;
  return t1351;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1352) {
bb1353:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1354;
  _Bool __retval1355;
  this1354 = v1352;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1356 = this1354;
    char* r1357 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1356);
    char* r1358 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1356);
    _Bool c1359 = ((r1357 == r1358)) ? 1 : 0;
    if (c1359) {
        unsigned long t1360 = t1356->_M_string_length;
        unsigned long c1361 = 15;
        _Bool c1362 = ((t1360 > c1361)) ? 1 : 0;
        if (c1362) {
          __builtin_unreachable();
        }
      _Bool c1363 = 1;
      __retval1355 = c1363;
      _Bool t1364 = __retval1355;
      return t1364;
    }
  _Bool c1365 = 0;
  __retval1355 = c1365;
  _Bool t1366 = __retval1355;
  return t1366;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1367, char* v1368, unsigned long v1369) {
bb1370:
  struct std____new_allocator_char_* this1371;
  char* __p1372;
  unsigned long __n1373;
  this1371 = v1367;
  __p1372 = v1368;
  __n1373 = v1369;
  struct std____new_allocator_char_* t1374 = this1371;
    unsigned long c1375 = 1;
    unsigned long c1376 = 16;
    _Bool c1377 = ((c1375 > c1376)) ? 1 : 0;
    if (c1377) {
      char* t1378 = __p1372;
      void* cast1379 = (void*)t1378;
      unsigned long t1380 = __n1373;
      unsigned long c1381 = 1;
      unsigned long b1382 = t1380 * c1381;
      unsigned long c1383 = 1;
      operator_delete_3(cast1379, b1382, c1383);
      return;
    }
  char* t1384 = __p1372;
  void* cast1385 = (void*)t1384;
  unsigned long t1386 = __n1373;
  unsigned long c1387 = 1;
  unsigned long b1388 = t1386 * c1387;
  operator_delete_2(cast1385, b1388);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1389, char* v1390, unsigned long v1391) {
bb1392:
  struct std__allocator_char_* this1393;
  char* __p1394;
  unsigned long __n1395;
  this1393 = v1389;
  __p1394 = v1390;
  __n1395 = v1391;
  struct std__allocator_char_* t1396 = this1393;
    _Bool r1397 = std____is_constant_evaluated();
    if (r1397) {
      char* t1398 = __p1394;
      void* cast1399 = (void*)t1398;
      operator_delete(cast1399);
      return;
    }
  struct std____new_allocator_char_* base1400 = (struct std____new_allocator_char_*)((char *)t1396 + 0);
  char* t1401 = __p1394;
  unsigned long t1402 = __n1395;
  std____new_allocator_char___deallocate(base1400, t1401, t1402);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1403, char* v1404, unsigned long v1405) {
bb1406:
  struct std__allocator_char_* __a1407;
  char* __p1408;
  unsigned long __n1409;
  __a1407 = v1403;
  __p1408 = v1404;
  __n1409 = v1405;
  struct std__allocator_char_* t1410 = __a1407;
  char* t1411 = __p1408;
  unsigned long t1412 = __n1409;
  std__allocator_char___deallocate(t1410, t1411, t1412);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1413, unsigned long v1414) {
bb1415:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1416;
  unsigned long __size1417;
  this1416 = v1413;
  __size1417 = v1414;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1418 = this1416;
  struct std__allocator_char_* r1419 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1418);
  char* r1420 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1418);
  unsigned long t1421 = __size1417;
  unsigned long c1422 = 1;
  unsigned long b1423 = t1421 + c1422;
  std__allocator_traits_std__allocator_char_____deallocate(r1419, r1420, b1423);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1424) {
bb1425:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1426;
  this1426 = v1424;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1427 = this1426;
    _Bool r1428 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1427);
    _Bool u1429 = !r1428;
    if (u1429) {
      unsigned long t1430 = t1427->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1427, t1430);
    }
  return;
}

