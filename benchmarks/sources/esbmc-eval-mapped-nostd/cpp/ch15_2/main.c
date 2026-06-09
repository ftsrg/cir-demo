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
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

struct std____cmp_cat____unspec __const_main_agg_tmp1;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[34] = "Testing the comparison functions.";
char _str_1[6] = "Hello";
char _str_2[8] = "stinger";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[10] = "string1: ";
char _str_4[11] = "\nstring2: ";
char _str_5[11] = "\nstring3: ";
char _str_6[11] = "\nstring4: ";
char _str_7[3] = "\n\n";
char _str_8[20] = "string1 == string4\n";
char _str_9[19] = "string1 > string4\n";
char _str_10[19] = "string1 < string4\n";
char _str_11[33] = "string1.compare( string2 ) == 0\n";
char _str_12[32] = "string1.compare( string2 ) > 0\n";
char _str_13[32] = "string1.compare( string2 ) < 0\n";
char _str_14[45] = "string1.compare( 2, 5, string3, 0, 5 ) == 0\n";
char _str_15[44] = "string1.compare( 2, 5, string3, 0, 5 ) > 0\n";
char _str_16[44] = "string1.compare( 2, 5, string3, 0, 5 ) < 0\n";
char _str_17[39] = "string4.compare( 0, string2.length(), ";
char _str_18[15] = "string2 ) == 0";
char _str_19[14] = "string2 ) > 0";
char _str_20[14] = "string2 ) < 0";
char _str_21[38] = "string2.compare( 0, 3, string4 ) == 0";
char _str_22[37] = "string2.compare( 0, 3, string4 ) > 0";
char _str_23[37] = "string2.compare( 0, 3, string4 ) < 0";
char _str_24[50] = "basic_string: construction from null is not valid";
char _str_25[24] = "basic_string::_M_create";
int _ZN9__gnu_cxx24__numeric_traits_integerIiE5__maxE __attribute__((aligned(4))) = 2147483647;
int _ZN9__gnu_cxx24__numeric_traits_integerIiE5__minE __attribute__((aligned(4))) = -2147483648;
char _str_26[22] = "basic_string::compare";
char _str_27[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__2(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
_Bool std__operator_(struct std__strong_ordering p0, struct std____cmp_cat____unspec p1);
struct std__strong_ordering auto_std____detail____char_traits_cmp_cat_std__char_traits_char___(int p0);
struct std__strong_ordering decltype_____detail____char_traits_cmp_cat_std__char_traits_char_____0___std__operator____char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
int std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_compare(unsigned long p0, unsigned long p1);
int std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____compare_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
int std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____compare_unsigned_long__unsigned_long__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p3, unsigned long p4, unsigned long p5);
int std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____compare_unsigned_long__unsigned_long__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
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
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* p0);
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
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
        char* cast20 = (char*)&(_str_24);
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

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v47, int v48) {
bb49:
  int __a50;
  int __b51;
  int __retval52;
  __a50 = v47;
  __b51 = v48;
  int t53 = __a50;
  int t54 = __b51;
  int b55 = t53 | t54;
  __retval52 = b55;
  int t56 = __retval52;
  return t56;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v57) {
bb58:
  struct std__basic_ios_char__std__char_traits_char__* this59;
  int __retval60;
  this59 = v57;
  struct std__basic_ios_char__std__char_traits_char__* t61 = this59;
  struct std__ios_base* base62 = (struct std__ios_base*)((char *)t61 + 0);
  int t63 = base62->_M_streambuf_state;
  __retval60 = t63;
  int t64 = __retval60;
  return t64;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v65, int v66) {
bb67:
  struct std__basic_ios_char__std__char_traits_char__* this68;
  int __state69;
  this68 = v65;
  __state69 = v66;
  struct std__basic_ios_char__std__char_traits_char__* t70 = this68;
  int r71 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t70);
  int t72 = __state69;
  int r73 = std__operator__2(r71, t72);
  std__basic_ios_char__std__char_traits_char_____clear(t70, r73);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v74, char* v75) {
bb76:
  struct std__basic_ostream_char__std__char_traits_char__* __out77;
  char* __s78;
  struct std__basic_ostream_char__std__char_traits_char__* __retval79;
  __out77 = v74;
  __s78 = v75;
    char* t80 = __s78;
    _Bool cast81 = (_Bool)t80;
    _Bool u82 = !cast81;
    if (u82) {
      struct std__basic_ostream_char__std__char_traits_char__* t83 = __out77;
      void** v84 = (void**)t83;
      void* v85 = *((void**)v84);
      unsigned char* cast86 = (unsigned char*)v85;
      long c87 = -24;
      unsigned char* ptr88 = &(cast86)[c87];
      long* cast89 = (long*)ptr88;
      long t90 = *cast89;
      unsigned char* cast91 = (unsigned char*)t83;
      unsigned char* ptr92 = &(cast91)[t90];
      struct std__basic_ostream_char__std__char_traits_char__* cast93 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr92;
      struct std__basic_ios_char__std__char_traits_char__* cast94 = (struct std__basic_ios_char__std__char_traits_char__*)cast93;
      int t95 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast94, t95);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t96 = __out77;
      char* t97 = __s78;
      char* t98 = __s78;
      unsigned long r99 = std__char_traits_char___length(t98);
      long cast100 = (long)r99;
      struct std__basic_ostream_char__std__char_traits_char__* r101 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t96, t97, cast100);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t102 = __out77;
  __retval79 = t102;
  struct std__basic_ostream_char__std__char_traits_char__* t103 = __retval79;
  return t103;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v104, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v105) {
bb106:
  struct std__basic_ostream_char__std__char_traits_char__* __os107;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str108;
  struct std__basic_ostream_char__std__char_traits_char__* __retval109;
  __os107 = v104;
  __str108 = v105;
  struct std__basic_ostream_char__std__char_traits_char__* t110 = __os107;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t111 = __str108;
  char* r112 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t111);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t113 = __str108;
  unsigned long r114 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t113);
  long cast115 = (long)r114;
  struct std__basic_ostream_char__std__char_traits_char__* r116 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t110, r112, cast115);
  __retval109 = r116;
  struct std__basic_ostream_char__std__char_traits_char__* t117 = __retval109;
  return t117;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v118) {
bb119:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this120;
  unsigned long __retval121;
  unsigned long __sz122;
  this120 = v118;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t123 = this120;
  unsigned long t124 = t123->_M_string_length;
  __sz122 = t124;
    unsigned long t125 = __sz122;
    unsigned long r126 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t123);
    _Bool c127 = ((t125 > r126)) ? 1 : 0;
    if (c127) {
      __builtin_unreachable();
    }
  unsigned long t128 = __sz122;
  __retval121 = t128;
  unsigned long t129 = __retval121;
  return t129;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v130, char* v131) {
bb132:
  char* __c1133;
  char* __c2134;
  _Bool __retval135;
  __c1133 = v130;
  __c2134 = v131;
  char* t136 = __c1133;
  char t137 = *t136;
  unsigned char cast138 = (unsigned char)t137;
  int cast139 = (int)cast138;
  char* t140 = __c2134;
  char t141 = *t140;
  unsigned char cast142 = (unsigned char)t141;
  int cast143 = (int)cast142;
  _Bool c144 = ((cast139 < cast143)) ? 1 : 0;
  __retval135 = c144;
  _Bool t145 = __retval135;
  return t145;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v146, char* v147, unsigned long v148) {
bb149:
  char* __s1150;
  char* __s2151;
  unsigned long __n152;
  int __retval153;
  __s1150 = v146;
  __s2151 = v147;
  __n152 = v148;
    unsigned long t154 = __n152;
    unsigned long c155 = 0;
    _Bool c156 = ((t154 == c155)) ? 1 : 0;
    if (c156) {
      int c157 = 0;
      __retval153 = c157;
      int t158 = __retval153;
      return t158;
    }
    _Bool r159 = std____is_constant_evaluated();
    if (r159) {
        unsigned long __i160;
        unsigned long c161 = 0;
        __i160 = c161;
        while (1) {
          unsigned long t163 = __i160;
          unsigned long t164 = __n152;
          _Bool c165 = ((t163 < t164)) ? 1 : 0;
          if (!c165) break;
            unsigned long t166 = __i160;
            char* t167 = __s1150;
            char* ptr168 = &(t167)[t166];
            unsigned long t169 = __i160;
            char* t170 = __s2151;
            char* ptr171 = &(t170)[t169];
            _Bool r172 = std__char_traits_char___lt(ptr168, ptr171);
            if (r172) {
              int c173 = -1;
              __retval153 = c173;
              int t174 = __retval153;
              int ret_val175 = t174;
              return ret_val175;
            } else {
                unsigned long t176 = __i160;
                char* t177 = __s2151;
                char* ptr178 = &(t177)[t176];
                unsigned long t179 = __i160;
                char* t180 = __s1150;
                char* ptr181 = &(t180)[t179];
                _Bool r182 = std__char_traits_char___lt(ptr178, ptr181);
                if (r182) {
                  int c183 = 1;
                  __retval153 = c183;
                  int t184 = __retval153;
                  int ret_val185 = t184;
                  return ret_val185;
                }
            }
        for_step162: ;
          unsigned long t186 = __i160;
          unsigned long u187 = t186 + 1;
          __i160 = u187;
        }
      int c188 = 0;
      __retval153 = c188;
      int t189 = __retval153;
      return t189;
    }
  char* t190 = __s1150;
  void* cast191 = (void*)t190;
  char* t192 = __s2151;
  void* cast193 = (void*)t192;
  unsigned long t194 = __n152;
  int r195 = memcmp(cast191, cast193, t194);
  __retval153 = r195;
  int t196 = __retval153;
  return t196;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v197) {
bb198:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this199;
  char* __retval200;
  this199 = v197;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t201 = this199;
  char* r202 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t201);
  __retval200 = r202;
  char* t203 = __retval200;
  return t203;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EESA_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v204, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v205) {
bb206:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs207;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __rhs208;
  _Bool __retval209;
  __lhs207 = v204;
  __rhs208 = v205;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t210 = __lhs207;
  unsigned long r211 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t210);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t212 = __rhs208;
  unsigned long r213 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t212);
  _Bool c214 = ((r211 == r213)) ? 1 : 0;
  _Bool ternary215;
  if (c214) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t216 = __lhs207;
    char* r217 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t216);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t218 = __rhs208;
    char* r219 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t218);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t220 = __lhs207;
    unsigned long r221 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t220);
    int r222 = std__char_traits_char___compare(r217, r219, r221);
    _Bool cast223 = (_Bool)r222;
    _Bool u224 = !cast223;
    ternary215 = (_Bool)u224;
  } else {
    _Bool c225 = 0;
    ternary215 = (_Bool)c225;
  }
  __retval209 = ternary215;
  _Bool t226 = __retval209;
  return t226;
}

// function: _ZStgtSt15strong_orderingNSt9__cmp_cat8__unspecE
_Bool std__operator_(struct std__strong_ordering v227, struct std____cmp_cat____unspec v228) {
bb229:
  struct std__strong_ordering __v230;
  struct std____cmp_cat____unspec unnamed231;
  _Bool __retval232;
  __v230 = v227;
  unnamed231 = v228;
  char t233 = __v230._M_value;
  int cast234 = (int)t233;
  int c235 = 0;
  _Bool c236 = ((cast234 > c235)) ? 1 : 0;
  __retval232 = c236;
  _Bool t237 = __retval232;
  return t237;
}

// function: _ZNSt8__detail21__char_traits_cmp_catISt11char_traitsIcEEEDai
struct std__strong_ordering auto_std____detail____char_traits_cmp_cat_std__char_traits_char___(int v238) {
bb239:
  int __cmp240;
  struct std__strong_ordering __retval241;
  __cmp240 = v238;
    int t242 = __cmp240;
    int c243 = 0;
    char c244 = -1;
    char c245 = 0;
    char c246 = 1;
    _Bool c247 = ((t242 < c243)) ? 1 : 0;
    char sel248 = c247 ? c244 : c246;
    _Bool c249 = ((t242 == c243)) ? 1 : 0;
    char sel250 = c249 ? c245 : sel248;
    __retval241._M_value = sel250;
    struct std__strong_ordering t251 = __retval241;
    return t251;
  abort();
}

// function: _ZStssIcSt11char_traitsIcESaIcEEDTclsr8__detailE21__char_traits_cmp_catIT0_ELi0EEERKNSt7__cxx1112basic_stringIT_S3_T1_EESB_
struct std__strong_ordering decltype_____detail____char_traits_cmp_cat_std__char_traits_char_____0___std__operator____char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v252, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v253) {
bb254:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs255;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __rhs256;
  struct std__strong_ordering __retval257;
  __lhs255 = v252;
  __rhs256 = v253;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t258 = __lhs255;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t259 = __rhs256;
  int r260 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____compare_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____const___const(t258, t259);
  struct std__strong_ordering r261 = auto_std____detail____char_traits_cmp_cat_std__char_traits_char___(r260);
  __retval257 = r261;
  struct std__strong_ordering t262 = __retval257;
  return t262;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_S_compareEmm
int std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_compare(unsigned long v263, unsigned long v264) {
bb265:
  unsigned long __n1266;
  unsigned long __n2267;
  int __retval268;
  long __d269;
  __n1266 = v263;
  __n2267 = v264;
  unsigned long t270 = __n1266;
  unsigned long t271 = __n2267;
  unsigned long b272 = t270 - t271;
  long cast273 = (long)b272;
  __d269 = cast273;
    long t274 = __d269;
    int t275 = _ZN9__gnu_cxx24__numeric_traits_integerIiE5__maxE;
    long cast276 = (long)t275;
    _Bool c277 = ((t274 > cast276)) ? 1 : 0;
    if (c277) {
      int t278 = _ZN9__gnu_cxx24__numeric_traits_integerIiE5__maxE;
      __retval268 = t278;
      int t279 = __retval268;
      return t279;
    } else {
        long t280 = __d269;
        int t281 = _ZN9__gnu_cxx24__numeric_traits_integerIiE5__minE;
        long cast282 = (long)t281;
        _Bool c283 = ((t280 < cast282)) ? 1 : 0;
        if (c283) {
          int t284 = _ZN9__gnu_cxx24__numeric_traits_integerIiE5__minE;
          __retval268 = t284;
          int t285 = __retval268;
          return t285;
        } else {
          long t286 = __d269;
          int cast287 = (int)t286;
          __retval268 = cast287;
          int t288 = __retval268;
          return t288;
        }
    }
  abort();
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7compareERKS4_
int std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____compare_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v289, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v290) {
bb291:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this292;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str293;
  int __retval294;
  unsigned long __size295;
  unsigned long __osize296;
  unsigned long __len297;
  int __r298;
  this292 = v289;
  __str293 = v290;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t299 = this292;
  unsigned long r300 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t299);
  __size295 = r300;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t301 = __str293;
  unsigned long r302 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t301);
  __osize296 = r302;
  unsigned long* r303 = unsigned_long_const__std__min_unsigned_long_(&__size295, &__osize296);
  unsigned long t304 = *r303;
  __len297 = t304;
  char* r305 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t299);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t306 = __str293;
  char* r307 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t306);
  unsigned long t308 = __len297;
  int r309 = std__char_traits_char___compare(r305, r307, t308);
  __r298 = r309;
    int t310 = __r298;
    _Bool cast311 = (_Bool)t310;
    _Bool u312 = !cast311;
    if (u312) {
      unsigned long t313 = __size295;
      unsigned long t314 = __osize296;
      int r315 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_compare(t313, t314);
      __r298 = r315;
    }
  int t316 = __r298;
  __retval294 = t316;
  int t317 = __retval294;
  return t317;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v318, unsigned long v319, char* v320) {
bb321:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this322;
  unsigned long __pos323;
  char* __s324;
  unsigned long __retval325;
  this322 = v318;
  __pos323 = v319;
  __s324 = v320;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t326 = this322;
    unsigned long t327 = __pos323;
    unsigned long r328 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t326);
    _Bool c329 = ((t327 > r328)) ? 1 : 0;
    if (c329) {
      char* cast330 = (char*)&(_str_27);
      char* t331 = __s324;
      unsigned long t332 = __pos323;
      unsigned long r333 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t326);
      std____throw_out_of_range_fmt(cast330, t331, t332, r333);
    }
  unsigned long t334 = __pos323;
  __retval325 = t334;
  unsigned long t335 = __retval325;
  return t335;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v336, unsigned long v337, unsigned long v338) {
bb339:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this340;
  unsigned long __pos341;
  unsigned long __off342;
  unsigned long __retval343;
  _Bool __testoff344;
  this340 = v336;
  __pos341 = v337;
  __off342 = v338;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t345 = this340;
  unsigned long t346 = __off342;
  unsigned long r347 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t345);
  unsigned long t348 = __pos341;
  unsigned long b349 = r347 - t348;
  _Bool c350 = ((t346 < b349)) ? 1 : 0;
  __testoff344 = c350;
  _Bool t351 = __testoff344;
  unsigned long ternary352;
  if (t351) {
    unsigned long t353 = __off342;
    ternary352 = (unsigned long)t353;
  } else {
    unsigned long r354 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t345);
    unsigned long t355 = __pos341;
    unsigned long b356 = r354 - t355;
    ternary352 = (unsigned long)b356;
  }
  __retval343 = ternary352;
  unsigned long t357 = __retval343;
  return t357;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7compareEmmRKS4_mm
int std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____compare_unsigned_long__unsigned_long__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v358, unsigned long v359, unsigned long v360, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v361, unsigned long v362, unsigned long v363) {
bb364:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this365;
  unsigned long __pos1366;
  unsigned long __n1367;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str368;
  unsigned long __pos2369;
  unsigned long __n2370;
  int __retval371;
  unsigned long __len372;
  int __r373;
  this365 = v358;
  __pos1366 = v359;
  __n1367 = v360;
  __str368 = v361;
  __pos2369 = v362;
  __n2370 = v363;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t374 = this365;
  unsigned long t375 = __pos1366;
  char* cast376 = (char*)&(_str_26);
  unsigned long r377 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t374, t375, cast376);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t378 = __str368;
  unsigned long t379 = __pos2369;
  char* cast380 = (char*)&(_str_26);
  unsigned long r381 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t378, t379, cast380);
  unsigned long t382 = __pos1366;
  unsigned long t383 = __n1367;
  unsigned long r384 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t374, t382, t383);
  __n1367 = r384;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t385 = __str368;
  unsigned long t386 = __pos2369;
  unsigned long t387 = __n2370;
  unsigned long r388 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t385, t386, t387);
  __n2370 = r388;
  unsigned long* r389 = unsigned_long_const__std__min_unsigned_long_(&__n1367, &__n2370);
  unsigned long t390 = *r389;
  __len372 = t390;
  char* r391 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t374);
  unsigned long t392 = __pos1366;
  char* ptr393 = &(r391)[t392];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t394 = __str368;
  char* r395 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t394);
  unsigned long t396 = __pos2369;
  char* ptr397 = &(r395)[t396];
  unsigned long t398 = __len372;
  int r399 = std__char_traits_char___compare(ptr393, ptr397, t398);
  __r373 = r399;
    int t400 = __r373;
    _Bool cast401 = (_Bool)t400;
    _Bool u402 = !cast401;
    if (u402) {
      unsigned long t403 = __n1367;
      unsigned long t404 = __n2370;
      int r405 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_compare(t403, t404);
      __r373 = r405;
    }
  int t406 = __r373;
  __retval371 = t406;
  int t407 = __retval371;
  return t407;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7compareEmmRKS4_
int std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____compare_unsigned_long__unsigned_long__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v408, unsigned long v409, unsigned long v410, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v411) {
bb412:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this413;
  unsigned long __pos414;
  unsigned long __n415;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str416;
  int __retval417;
  unsigned long __osize418;
  unsigned long __len419;
  int __r420;
  this413 = v408;
  __pos414 = v409;
  __n415 = v410;
  __str416 = v411;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t421 = this413;
  unsigned long t422 = __pos414;
  char* cast423 = (char*)&(_str_26);
  unsigned long r424 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t421, t422, cast423);
  unsigned long t425 = __pos414;
  unsigned long t426 = __n415;
  unsigned long r427 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t421, t425, t426);
  __n415 = r427;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t428 = __str416;
  unsigned long r429 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t428);
  __osize418 = r429;
  unsigned long* r430 = unsigned_long_const__std__min_unsigned_long_(&__n415, &__osize418);
  unsigned long t431 = *r430;
  __len419 = t431;
  char* r432 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t421);
  unsigned long t433 = __pos414;
  char* ptr434 = &(r432)[t433];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t435 = __str416;
  char* r436 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t435);
  unsigned long t437 = __len419;
  int r438 = std__char_traits_char___compare(ptr434, r436, t437);
  __r420 = r438;
    int t439 = __r420;
    _Bool cast440 = (_Bool)t439;
    _Bool u441 = !cast440;
    if (u441) {
      unsigned long t442 = __n415;
      unsigned long t443 = __osize418;
      int r444 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_compare(t442, t443);
      __r420 = r444;
    }
  int t445 = __r420;
  __retval417 = t445;
  int t446 = __retval417;
  return t446;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v447) {
bb448:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this449;
  unsigned long __retval450;
  this449 = v447;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t451 = this449;
  unsigned long r452 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t451);
  __retval450 = r452;
  unsigned long t453 = __retval450;
  return t453;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v454, void* v455) {
bb456:
  struct std__basic_ostream_char__std__char_traits_char__* this457;
  void* __pf458;
  struct std__basic_ostream_char__std__char_traits_char__* __retval459;
  this457 = v454;
  __pf458 = v455;
  struct std__basic_ostream_char__std__char_traits_char__* t460 = this457;
  void* t461 = __pf458;
  struct std__basic_ostream_char__std__char_traits_char__* r462 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t461)(t460);
  __retval459 = r462;
  struct std__basic_ostream_char__std__char_traits_char__* t463 = __retval459;
  return t463;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v464) {
bb465:
  struct std__basic_ostream_char__std__char_traits_char__* __os466;
  struct std__basic_ostream_char__std__char_traits_char__* __retval467;
  __os466 = v464;
  struct std__basic_ostream_char__std__char_traits_char__* t468 = __os466;
  struct std__basic_ostream_char__std__char_traits_char__* r469 = std__ostream__flush(t468);
  __retval467 = r469;
  struct std__basic_ostream_char__std__char_traits_char__* t470 = __retval467;
  return t470;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v471) {
bb472:
  struct std__ctype_char_* __f473;
  struct std__ctype_char_* __retval474;
  __f473 = v471;
    struct std__ctype_char_* t475 = __f473;
    _Bool cast476 = (_Bool)t475;
    _Bool u477 = !cast476;
    if (u477) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t478 = __f473;
  __retval474 = t478;
  struct std__ctype_char_* t479 = __retval474;
  return t479;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v480, char v481) {
bb482:
  struct std__ctype_char_* this483;
  char __c484;
  char __retval485;
  this483 = v480;
  __c484 = v481;
  struct std__ctype_char_* t486 = this483;
    char t487 = t486->_M_widen_ok;
    _Bool cast488 = (_Bool)t487;
    if (cast488) {
      char t489 = __c484;
      unsigned char cast490 = (unsigned char)t489;
      unsigned long cast491 = (unsigned long)cast490;
      char t492 = t486->_M_widen[cast491];
      __retval485 = t492;
      char t493 = __retval485;
      return t493;
    }
  std__ctype_char____M_widen_init___const(t486);
  char t494 = __c484;
  void** v495 = (void**)t486;
  void* v496 = *((void**)v495);
  char vcall499 = (char)__VERIFIER_virtual_call_char_char(t486, 6, t494);
  __retval485 = vcall499;
  char t500 = __retval485;
  return t500;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v501, char v502) {
bb503:
  struct std__basic_ios_char__std__char_traits_char__* this504;
  char __c505;
  char __retval506;
  this504 = v501;
  __c505 = v502;
  struct std__basic_ios_char__std__char_traits_char__* t507 = this504;
  struct std__ctype_char_* t508 = t507->_M_ctype;
  struct std__ctype_char_* r509 = std__ctype_char__const__std____check_facet_std__ctype_char___(t508);
  char t510 = __c505;
  char r511 = std__ctype_char___widen_char__const(r509, t510);
  __retval506 = r511;
  char t512 = __retval506;
  return t512;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v513) {
bb514:
  struct std__basic_ostream_char__std__char_traits_char__* __os515;
  struct std__basic_ostream_char__std__char_traits_char__* __retval516;
  __os515 = v513;
  struct std__basic_ostream_char__std__char_traits_char__* t517 = __os515;
  struct std__basic_ostream_char__std__char_traits_char__* t518 = __os515;
  void** v519 = (void**)t518;
  void* v520 = *((void**)v519);
  unsigned char* cast521 = (unsigned char*)v520;
  long c522 = -24;
  unsigned char* ptr523 = &(cast521)[c522];
  long* cast524 = (long*)ptr523;
  long t525 = *cast524;
  unsigned char* cast526 = (unsigned char*)t518;
  unsigned char* ptr527 = &(cast526)[t525];
  struct std__basic_ostream_char__std__char_traits_char__* cast528 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr527;
  struct std__basic_ios_char__std__char_traits_char__* cast529 = (struct std__basic_ios_char__std__char_traits_char__*)cast528;
  char c530 = 10;
  char r531 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast529, c530);
  struct std__basic_ostream_char__std__char_traits_char__* r532 = std__ostream__put(t517, r531);
  struct std__basic_ostream_char__std__char_traits_char__* r533 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r532);
  __retval516 = r533;
  struct std__basic_ostream_char__std__char_traits_char__* t534 = __retval516;
  return t534;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v535) {
bb536:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this537;
  this537 = v535;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t538 = this537;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t538);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t538->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb539:
  int __retval540;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string1541;
  struct std__allocator_char_ ref_tmp0542;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string2543;
  struct std__allocator_char_ ref_tmp1544;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string3545;
  struct std__allocator_char_ ref_tmp2546;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string4547;
  int result548;
  int c549 = 0;
  __retval540 = c549;
  char* cast550 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0542);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&string1541, cast550, &ref_tmp0542);
  {
    std__allocator_char____allocator(&ref_tmp0542);
  }
    char* cast551 = (char*)&(_str_1);
    std__allocator_char___allocator_2(&ref_tmp1544);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&string2543, cast551, &ref_tmp1544);
    {
      std__allocator_char____allocator(&ref_tmp1544);
    }
      char* cast552 = (char*)&(_str_2);
      std__allocator_char___allocator_2(&ref_tmp2546);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&string3545, cast552, &ref_tmp2546);
      {
        std__allocator_char____allocator(&ref_tmp2546);
      }
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&string4547, &string2543);
          char* cast553 = (char*)&(_str_3);
          struct std__basic_ostream_char__std__char_traits_char__* r554 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast553);
          struct std__basic_ostream_char__std__char_traits_char__* r555 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r554, &string1541);
          char* cast556 = (char*)&(_str_4);
          struct std__basic_ostream_char__std__char_traits_char__* r557 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r555, cast556);
          struct std__basic_ostream_char__std__char_traits_char__* r558 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r557, &string2543);
          char* cast559 = (char*)&(_str_5);
          struct std__basic_ostream_char__std__char_traits_char__* r560 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r558, cast559);
          struct std__basic_ostream_char__std__char_traits_char__* r561 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r560, &string3545);
          char* cast562 = (char*)&(_str_6);
          struct std__basic_ostream_char__std__char_traits_char__* r563 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r561, cast562);
          struct std__basic_ostream_char__std__char_traits_char__* r564 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r563, &string4547);
          char* cast565 = (char*)&(_str_7);
          struct std__basic_ostream_char__std__char_traits_char__* r566 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r564, cast565);
            _Bool r567 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&string1541, &string4547);
            if (r567) {
              char* cast568 = (char*)&(_str_8);
              struct std__basic_ostream_char__std__char_traits_char__* r569 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast568);
            } else {
                struct std__strong_ordering agg_tmp0570;
                struct std____cmp_cat____unspec agg_tmp1571;
                struct std__strong_ordering r572 = decltype_____detail____char_traits_cmp_cat_std__char_traits_char_____0___std__operator____char__std__char_traits_char___std__allocator_char___(&string1541, &string4547);
                agg_tmp0570 = r572;
                agg_tmp1571 = *&__const_main_agg_tmp1; // copy
                struct std__strong_ordering t573 = agg_tmp0570;
                struct std____cmp_cat____unspec t574 = agg_tmp1571;
                _Bool r575 = std__operator_(t573, t574);
                if (r575) {
                  char* cast576 = (char*)&(_str_9);
                  struct std__basic_ostream_char__std__char_traits_char__* r577 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast576);
                } else {
                  char* cast578 = (char*)&(_str_10);
                  struct std__basic_ostream_char__std__char_traits_char__* r579 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast578);
                }
            }
          int r580 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____compare_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____const___const(&string1541, &string2543);
          result548 = r580;
            int t581 = result548;
            int c582 = 0;
            _Bool c583 = ((t581 == c582)) ? 1 : 0;
            if (c583) {
              char* cast584 = (char*)&(_str_11);
              struct std__basic_ostream_char__std__char_traits_char__* r585 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast584);
            } else {
                int t586 = result548;
                int c587 = 0;
                _Bool c588 = ((t586 > c587)) ? 1 : 0;
                if (c588) {
                  char* cast589 = (char*)&(_str_12);
                  struct std__basic_ostream_char__std__char_traits_char__* r590 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast589);
                } else {
                  char* cast591 = (char*)&(_str_13);
                  struct std__basic_ostream_char__std__char_traits_char__* r592 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast591);
                }
            }
          unsigned long c593 = 2;
          unsigned long c594 = 5;
          unsigned long c595 = 0;
          unsigned long c596 = 5;
          int r597 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____compare_unsigned_long__unsigned_long__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____const___unsigned_long__unsigned_long__const(&string1541, c593, c594, &string3545, c595, c596);
          result548 = r597;
            int t598 = result548;
            int c599 = 0;
            _Bool c600 = ((t598 == c599)) ? 1 : 0;
            if (c600) {
              char* cast601 = (char*)&(_str_14);
              struct std__basic_ostream_char__std__char_traits_char__* r602 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast601);
            } else {
                int t603 = result548;
                int c604 = 0;
                _Bool c605 = ((t603 > c604)) ? 1 : 0;
                if (c605) {
                  char* cast606 = (char*)&(_str_15);
                  struct std__basic_ostream_char__std__char_traits_char__* r607 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast606);
                } else {
                  char* cast608 = (char*)&(_str_16);
                  struct std__basic_ostream_char__std__char_traits_char__* r609 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast608);
                }
            }
          unsigned long c610 = 0;
          unsigned long r611 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(&string2543);
          int r612 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____compare_unsigned_long__unsigned_long__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____const___const(&string4547, c610, r611, &string2543);
          result548 = r612;
            int t613 = result548;
            int c614 = 0;
            _Bool c615 = ((t613 == c614)) ? 1 : 0;
            if (c615) {
              char* cast616 = (char*)&(_str_17);
              struct std__basic_ostream_char__std__char_traits_char__* r617 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast616);
              char* cast618 = (char*)&(_str_18);
              struct std__basic_ostream_char__std__char_traits_char__* r619 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r617, cast618);
              struct std__basic_ostream_char__std__char_traits_char__* r620 = std__ostream__operator___std__ostream_____(r619, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            } else {
                int t621 = result548;
                int c622 = 0;
                _Bool c623 = ((t621 > c622)) ? 1 : 0;
                if (c623) {
                  char* cast624 = (char*)&(_str_17);
                  struct std__basic_ostream_char__std__char_traits_char__* r625 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast624);
                  char* cast626 = (char*)&(_str_19);
                  struct std__basic_ostream_char__std__char_traits_char__* r627 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r625, cast626);
                  struct std__basic_ostream_char__std__char_traits_char__* r628 = std__ostream__operator___std__ostream_____(r627, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
                } else {
                  char* cast629 = (char*)&(_str_17);
                  struct std__basic_ostream_char__std__char_traits_char__* r630 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast629);
                  char* cast631 = (char*)&(_str_20);
                  struct std__basic_ostream_char__std__char_traits_char__* r632 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r630, cast631);
                  struct std__basic_ostream_char__std__char_traits_char__* r633 = std__ostream__operator___std__ostream_____(r632, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
                }
            }
          unsigned long c634 = 0;
          unsigned long c635 = 3;
          int r636 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____compare_unsigned_long__unsigned_long__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____const___const(&string2543, c634, c635, &string4547);
          result548 = r636;
            int t637 = result548;
            int c638 = 0;
            _Bool c639 = ((t637 == c638)) ? 1 : 0;
            if (c639) {
              char* cast640 = (char*)&(_str_21);
              struct std__basic_ostream_char__std__char_traits_char__* r641 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast640);
              struct std__basic_ostream_char__std__char_traits_char__* r642 = std__ostream__operator___std__ostream_____(r641, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            } else {
                int t643 = result548;
                int c644 = 0;
                _Bool c645 = ((t643 > c644)) ? 1 : 0;
                if (c645) {
                  char* cast646 = (char*)&(_str_22);
                  struct std__basic_ostream_char__std__char_traits_char__* r647 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast646);
                  struct std__basic_ostream_char__std__char_traits_char__* r648 = std__ostream__operator___std__ostream_____(r647, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
                } else {
                  char* cast649 = (char*)&(_str_23);
                  struct std__basic_ostream_char__std__char_traits_char__* r650 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast649);
                  struct std__basic_ostream_char__std__char_traits_char__* r651 = std__ostream__operator___std__ostream_____(r650, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
                }
            }
          int c652 = 0;
          __retval540 = c652;
          int t653 = __retval540;
          int ret_val654 = t653;
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&string4547);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&string3545);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&string2543);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&string1541);
          }
          return ret_val654;
  int t655 = __retval540;
  return t655;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v656) {
bb657:
  struct std____new_allocator_char_* this658;
  this658 = v656;
  struct std____new_allocator_char_* t659 = this658;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v660) {
bb661:
  char* __r662;
  char* __retval663;
  __r662 = v660;
  char* t664 = __r662;
  __retval663 = t664;
  char* t665 = __retval663;
  return t665;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v666) {
bb667:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this668;
  char* __retval669;
  this668 = v666;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t670 = this668;
  char* cast671 = (char*)&(t670->field2._M_local_buf);
  char* r672 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast671);
  __retval669 = r672;
  char* t673 = __retval669;
  return t673;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v674, char* v675, struct std__allocator_char_* v676) {
bb677:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this678;
  char* __dat679;
  struct std__allocator_char_* __a680;
  this678 = v674;
  __dat679 = v675;
  __a680 = v676;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t681 = this678;
  struct std__allocator_char_* base682 = (struct std__allocator_char_*)((char *)t681 + 0);
  struct std__allocator_char_* t683 = __a680;
  std__allocator_char___allocator(base682, t683);
    char* t684 = __dat679;
    t681->_M_p = t684;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb685:
  _Bool __retval686;
    _Bool c687 = 0;
    __retval686 = c687;
    _Bool t688 = __retval686;
    return t688;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v689, char* v690) {
bb691:
  char* __c1692;
  char* __c2693;
  _Bool __retval694;
  __c1692 = v689;
  __c2693 = v690;
  char* t695 = __c1692;
  char t696 = *t695;
  int cast697 = (int)t696;
  char* t698 = __c2693;
  char t699 = *t698;
  int cast700 = (int)t699;
  _Bool c701 = ((cast697 == cast700)) ? 1 : 0;
  __retval694 = c701;
  _Bool t702 = __retval694;
  return t702;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v703) {
bb704:
  char* __p705;
  unsigned long __retval706;
  unsigned long __i707;
  __p705 = v703;
  unsigned long c708 = 0;
  __i707 = c708;
    char ref_tmp0709;
    while (1) {
      unsigned long t710 = __i707;
      char* t711 = __p705;
      char* ptr712 = &(t711)[t710];
      char c713 = 0;
      ref_tmp0709 = c713;
      _Bool r714 = __gnu_cxx__char_traits_char___eq(ptr712, &ref_tmp0709);
      _Bool u715 = !r714;
      if (!u715) break;
      unsigned long t716 = __i707;
      unsigned long u717 = t716 + 1;
      __i707 = u717;
    }
  unsigned long t718 = __i707;
  __retval706 = t718;
  unsigned long t719 = __retval706;
  return t719;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v720) {
bb721:
  char* __s722;
  unsigned long __retval723;
  __s722 = v720;
    _Bool r724 = std____is_constant_evaluated();
    if (r724) {
      char* t725 = __s722;
      unsigned long r726 = __gnu_cxx__char_traits_char___length(t725);
      __retval723 = r726;
      unsigned long t727 = __retval723;
      return t727;
    }
  char* t728 = __s722;
  unsigned long r729 = strlen(t728);
  __retval723 = r729;
  unsigned long t730 = __retval723;
  return t730;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v731, char* v732, struct std__random_access_iterator_tag v733) {
bb734:
  char* __first735;
  char* __last736;
  struct std__random_access_iterator_tag unnamed737;
  long __retval738;
  __first735 = v731;
  __last736 = v732;
  unnamed737 = v733;
  char* t739 = __last736;
  char* t740 = __first735;
  long diff741 = t739 - t740;
  __retval738 = diff741;
  long t742 = __retval738;
  return t742;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v743) {
bb744:
  char** unnamed745;
  struct std__random_access_iterator_tag __retval746;
  unnamed745 = v743;
  struct std__random_access_iterator_tag t747 = __retval746;
  return t747;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v748, char* v749) {
bb750:
  char* __first751;
  char* __last752;
  long __retval753;
  struct std__random_access_iterator_tag agg_tmp0754;
  __first751 = v748;
  __last752 = v749;
  char* t755 = __first751;
  char* t756 = __last752;
  struct std__random_access_iterator_tag r757 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first751);
  agg_tmp0754 = r757;
  struct std__random_access_iterator_tag t758 = agg_tmp0754;
  long r759 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t755, t756, t758);
  __retval753 = r759;
  long t760 = __retval753;
  return t760;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v761, char* v762) {
bb763:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this764;
  char* __p765;
  this764 = v761;
  __p765 = v762;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t766 = this764;
  char* t767 = __p765;
  t766->_M_dataplus._M_p = t767;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v768) {
bb769:
  struct std__allocator_char_* __a770;
  unsigned long __retval771;
  __a770 = v768;
  unsigned long c772 = -1;
  unsigned long c773 = 1;
  unsigned long b774 = c772 / c773;
  __retval771 = b774;
  unsigned long t775 = __retval771;
  return t775;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v776) {
bb777:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this778;
  struct std__allocator_char_* __retval779;
  this778 = v776;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t780 = this778;
  struct std__allocator_char_* base781 = (struct std__allocator_char_*)((char *)&(t780->_M_dataplus) + 0);
  __retval779 = base781;
  struct std__allocator_char_* t782 = __retval779;
  return t782;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v783, unsigned long* v784) {
bb785:
  unsigned long* __a786;
  unsigned long* __b787;
  unsigned long* __retval788;
  __a786 = v783;
  __b787 = v784;
    unsigned long* t789 = __b787;
    unsigned long t790 = *t789;
    unsigned long* t791 = __a786;
    unsigned long t792 = *t791;
    _Bool c793 = ((t790 < t792)) ? 1 : 0;
    if (c793) {
      unsigned long* t794 = __b787;
      __retval788 = t794;
      unsigned long* t795 = __retval788;
      return t795;
    }
  unsigned long* t796 = __a786;
  __retval788 = t796;
  unsigned long* t797 = __retval788;
  return t797;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v798) {
bb799:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this800;
  unsigned long __retval801;
  unsigned long __diffmax802;
  unsigned long __allocmax803;
  this800 = v798;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t804 = this800;
  unsigned long c805 = 9223372036854775807;
  __diffmax802 = c805;
  struct std__allocator_char_* r806 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t804);
  unsigned long r807 = std__allocator_traits_std__allocator_char_____max_size(r806);
  __allocmax803 = r807;
  unsigned long* r808 = unsigned_long_const__std__min_unsigned_long_(&__diffmax802, &__allocmax803);
  unsigned long t809 = *r808;
  unsigned long c810 = 1;
  unsigned long b811 = t809 - c810;
  __retval801 = b811;
  unsigned long t812 = __retval801;
  return t812;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v813) {
bb814:
  struct std____new_allocator_char_* this815;
  unsigned long __retval816;
  this815 = v813;
  struct std____new_allocator_char_* t817 = this815;
  unsigned long c818 = 9223372036854775807;
  unsigned long c819 = 1;
  unsigned long b820 = c818 / c819;
  __retval816 = b820;
  unsigned long t821 = __retval816;
  return t821;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v822, unsigned long v823, void* v824) {
bb825:
  struct std____new_allocator_char_* this826;
  unsigned long __n827;
  void* unnamed828;
  char* __retval829;
  this826 = v822;
  __n827 = v823;
  unnamed828 = v824;
  struct std____new_allocator_char_* t830 = this826;
    unsigned long t831 = __n827;
    unsigned long r832 = std____new_allocator_char____M_max_size___const(t830);
    _Bool c833 = ((t831 > r832)) ? 1 : 0;
    if (c833) {
        unsigned long t834 = __n827;
        unsigned long c835 = -1;
        unsigned long c836 = 1;
        unsigned long b837 = c835 / c836;
        _Bool c838 = ((t834 > b837)) ? 1 : 0;
        if (c838) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c839 = 1;
    unsigned long c840 = 16;
    _Bool c841 = ((c839 > c840)) ? 1 : 0;
    if (c841) {
      unsigned long __al842;
      unsigned long c843 = 1;
      __al842 = c843;
      unsigned long t844 = __n827;
      unsigned long c845 = 1;
      unsigned long b846 = t844 * c845;
      unsigned long t847 = __al842;
      void* r848 = operator_new_2(b846, t847);
      char* cast849 = (char*)r848;
      __retval829 = cast849;
      char* t850 = __retval829;
      return t850;
    }
  unsigned long t851 = __n827;
  unsigned long c852 = 1;
  unsigned long b853 = t851 * c852;
  void* r854 = operator_new(b853);
  char* cast855 = (char*)r854;
  __retval829 = cast855;
  char* t856 = __retval829;
  return t856;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v857, unsigned long v858) {
bb859:
  struct std__allocator_char_* this860;
  unsigned long __n861;
  char* __retval862;
  this860 = v857;
  __n861 = v858;
  struct std__allocator_char_* t863 = this860;
    _Bool r864 = std____is_constant_evaluated();
    if (r864) {
        unsigned long t865 = __n861;
        unsigned long c866 = 1;
        unsigned long ovr867;
        _Bool ovf868 = __builtin_mul_overflow(t865, c866, &ovr867);
        __n861 = ovr867;
        if (ovf868) {
          std____throw_bad_array_new_length();
        }
      unsigned long t869 = __n861;
      void* r870 = operator_new(t869);
      char* cast871 = (char*)r870;
      __retval862 = cast871;
      char* t872 = __retval862;
      return t872;
    }
  struct std____new_allocator_char_* base873 = (struct std____new_allocator_char_*)((char *)t863 + 0);
  unsigned long t874 = __n861;
  void* c875 = ((void*)0);
  char* r876 = std____new_allocator_char___allocate(base873, t874, c875);
  __retval862 = r876;
  char* t877 = __retval862;
  return t877;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v878, unsigned long v879) {
bb880:
  struct std__allocator_char_* __a881;
  unsigned long __n882;
  char* __retval883;
  __a881 = v878;
  __n882 = v879;
  struct std__allocator_char_* t884 = __a881;
  unsigned long t885 = __n882;
  char* r886 = std__allocator_char___allocate(t884, t885);
  __retval883 = r886;
  char* t887 = __retval883;
  return t887;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v888, unsigned long v889) {
bb890:
  struct std__allocator_char_* __a891;
  unsigned long __n892;
  char* __retval893;
  char* __p894;
  __a891 = v888;
  __n892 = v889;
  struct std__allocator_char_* t895 = __a891;
  unsigned long t896 = __n892;
  char* r897 = std__allocator_traits_std__allocator_char_____allocate(t895, t896);
  __p894 = r897;
  char* t898 = __p894;
  __retval893 = t898;
  char* t899 = __retval893;
  return t899;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v900) {
bb901:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this902;
  struct std__allocator_char_* __retval903;
  this902 = v900;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t904 = this902;
  struct std__allocator_char_* base905 = (struct std__allocator_char_*)((char *)&(t904->_M_dataplus) + 0);
  __retval903 = base905;
  struct std__allocator_char_* t906 = __retval903;
  return t906;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v907, unsigned long* v908, unsigned long v909) {
bb910:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this911;
  unsigned long* __capacity912;
  unsigned long __old_capacity913;
  char* __retval914;
  this911 = v907;
  __capacity912 = v908;
  __old_capacity913 = v909;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t915 = this911;
    unsigned long* t916 = __capacity912;
    unsigned long t917 = *t916;
    unsigned long r918 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t915);
    _Bool c919 = ((t917 > r918)) ? 1 : 0;
    if (c919) {
      char* cast920 = (char*)&(_str_25);
      std____throw_length_error(cast920);
    }
    unsigned long* t921 = __capacity912;
    unsigned long t922 = *t921;
    unsigned long t923 = __old_capacity913;
    _Bool c924 = ((t922 > t923)) ? 1 : 0;
    _Bool ternary925;
    if (c924) {
      unsigned long* t926 = __capacity912;
      unsigned long t927 = *t926;
      unsigned long c928 = 2;
      unsigned long t929 = __old_capacity913;
      unsigned long b930 = c928 * t929;
      _Bool c931 = ((t927 < b930)) ? 1 : 0;
      ternary925 = (_Bool)c931;
    } else {
      _Bool c932 = 0;
      ternary925 = (_Bool)c932;
    }
    if (ternary925) {
      unsigned long c933 = 2;
      unsigned long t934 = __old_capacity913;
      unsigned long b935 = c933 * t934;
      unsigned long* t936 = __capacity912;
      *t936 = b935;
        unsigned long* t937 = __capacity912;
        unsigned long t938 = *t937;
        unsigned long r939 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t915);
        _Bool c940 = ((t938 > r939)) ? 1 : 0;
        if (c940) {
          unsigned long r941 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t915);
          unsigned long* t942 = __capacity912;
          *t942 = r941;
        }
    }
  struct std__allocator_char_* r943 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t915);
  unsigned long* t944 = __capacity912;
  unsigned long t945 = *t944;
  unsigned long c946 = 1;
  unsigned long b947 = t945 + c946;
  char* r948 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r943, b947);
  __retval914 = r948;
  char* t949 = __retval914;
  return t949;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v950, unsigned long v951) {
bb952:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this953;
  unsigned long __capacity954;
  this953 = v950;
  __capacity954 = v951;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t955 = this953;
  unsigned long t956 = __capacity954;
  t955->field2._M_allocated_capacity = t956;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb957:
  _Bool __retval958;
    _Bool c959 = 0;
    __retval958 = c959;
    _Bool t960 = __retval958;
    return t960;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v961) {
bb962:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this963;
  this963 = v961;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t964 = this963;
    _Bool r965 = std__is_constant_evaluated();
    if (r965) {
        unsigned long __i966;
        unsigned long c967 = 0;
        __i966 = c967;
        while (1) {
          unsigned long t969 = __i966;
          unsigned long c970 = 15;
          _Bool c971 = ((t969 <= c970)) ? 1 : 0;
          if (!c971) break;
          char c972 = 0;
          unsigned long t973 = __i966;
          t964->field2._M_local_buf[t973] = c972;
        for_step968: ;
          unsigned long t974 = __i966;
          unsigned long u975 = t974 + 1;
          __i966 = u975;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v976, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v977) {
bb978:
  struct _Guard* this979;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s980;
  this979 = v976;
  __s980 = v977;
  struct _Guard* t981 = this979;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t982 = __s980;
  t981->_M_guarded = t982;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v983, char* v984) {
bb985:
  char* __location986;
  char* __args987;
  char* __retval988;
  void* __loc989;
  __location986 = v983;
  __args987 = v984;
  char* t990 = __location986;
  void* cast991 = (void*)t990;
  __loc989 = cast991;
    void* t992 = __loc989;
    char* cast993 = (char*)t992;
    char* t994 = __args987;
    char t995 = *t994;
    *cast993 = t995;
    __retval988 = cast993;
    char* t996 = __retval988;
    return t996;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v997, char* v998) {
bb999:
  char* __c11000;
  char* __c21001;
  __c11000 = v997;
  __c21001 = v998;
    _Bool r1002 = std____is_constant_evaluated();
    if (r1002) {
      char* t1003 = __c11000;
      char* t1004 = __c21001;
      char* r1005 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1003, t1004);
    } else {
      char* t1006 = __c21001;
      char t1007 = *t1006;
      char* t1008 = __c11000;
      *t1008 = t1007;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1009, char* v1010, unsigned long v1011) {
bb1012:
  char* __s11013;
  char* __s21014;
  unsigned long __n1015;
  char* __retval1016;
  __s11013 = v1009;
  __s21014 = v1010;
  __n1015 = v1011;
    unsigned long t1017 = __n1015;
    unsigned long c1018 = 0;
    _Bool c1019 = ((t1017 == c1018)) ? 1 : 0;
    if (c1019) {
      char* t1020 = __s11013;
      __retval1016 = t1020;
      char* t1021 = __retval1016;
      return t1021;
    }
    _Bool r1022 = std____is_constant_evaluated();
    if (r1022) {
        unsigned long __i1023;
        unsigned long c1024 = 0;
        __i1023 = c1024;
        while (1) {
          unsigned long t1026 = __i1023;
          unsigned long t1027 = __n1015;
          _Bool c1028 = ((t1026 < t1027)) ? 1 : 0;
          if (!c1028) break;
          char* t1029 = __s11013;
          unsigned long t1030 = __i1023;
          char* ptr1031 = &(t1029)[t1030];
          unsigned long t1032 = __i1023;
          char* t1033 = __s21014;
          char* ptr1034 = &(t1033)[t1032];
          char* r1035 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1031, ptr1034);
        for_step1025: ;
          unsigned long t1036 = __i1023;
          unsigned long u1037 = t1036 + 1;
          __i1023 = u1037;
        }
      char* t1038 = __s11013;
      __retval1016 = t1038;
      char* t1039 = __retval1016;
      return t1039;
    }
  char* t1040 = __s11013;
  void* cast1041 = (void*)t1040;
  char* t1042 = __s21014;
  void* cast1043 = (void*)t1042;
  unsigned long t1044 = __n1015;
  unsigned long c1045 = 1;
  unsigned long b1046 = t1044 * c1045;
  void* r1047 = memcpy(cast1041, cast1043, b1046);
  char* t1048 = __s11013;
  __retval1016 = t1048;
  char* t1049 = __retval1016;
  return t1049;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1050, char* v1051, unsigned long v1052) {
bb1053:
  char* __s11054;
  char* __s21055;
  unsigned long __n1056;
  char* __retval1057;
  __s11054 = v1050;
  __s21055 = v1051;
  __n1056 = v1052;
    unsigned long t1058 = __n1056;
    unsigned long c1059 = 0;
    _Bool c1060 = ((t1058 == c1059)) ? 1 : 0;
    if (c1060) {
      char* t1061 = __s11054;
      __retval1057 = t1061;
      char* t1062 = __retval1057;
      return t1062;
    }
    _Bool r1063 = std____is_constant_evaluated();
    if (r1063) {
      char* t1064 = __s11054;
      char* t1065 = __s21055;
      unsigned long t1066 = __n1056;
      char* r1067 = __gnu_cxx__char_traits_char___copy(t1064, t1065, t1066);
      __retval1057 = r1067;
      char* t1068 = __retval1057;
      return t1068;
    }
  char* t1069 = __s11054;
  void* cast1070 = (void*)t1069;
  char* t1071 = __s21055;
  void* cast1072 = (void*)t1071;
  unsigned long t1073 = __n1056;
  void* r1074 = memcpy(cast1070, cast1072, t1073);
  char* cast1075 = (char*)r1074;
  __retval1057 = cast1075;
  char* t1076 = __retval1057;
  return t1076;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1077, char* v1078, unsigned long v1079) {
bb1080:
  char* __d1081;
  char* __s1082;
  unsigned long __n1083;
  __d1081 = v1077;
  __s1082 = v1078;
  __n1083 = v1079;
    unsigned long t1084 = __n1083;
    unsigned long c1085 = 1;
    _Bool c1086 = ((t1084 == c1085)) ? 1 : 0;
    if (c1086) {
      char* t1087 = __d1081;
      char* t1088 = __s1082;
      std__char_traits_char___assign(t1087, t1088);
    } else {
      char* t1089 = __d1081;
      char* t1090 = __s1082;
      unsigned long t1091 = __n1083;
      char* r1092 = std__char_traits_char___copy(t1089, t1090, t1091);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1093) {
bb1094:
  char* __it1095;
  char* __retval1096;
  __it1095 = v1093;
  char* t1097 = __it1095;
  __retval1096 = t1097;
  char* t1098 = __retval1096;
  return t1098;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1099, char* v1100, char* v1101) {
bb1102:
  char* __p1103;
  char* __k11104;
  char* __k21105;
  __p1103 = v1099;
  __k11104 = v1100;
  __k21105 = v1101;
    char* t1106 = __p1103;
    char* t1107 = __k11104;
    char* r1108 = char_const__std____niter_base_char_const__(t1107);
    char* t1109 = __k21105;
    char* t1110 = __k11104;
    long diff1111 = t1109 - t1110;
    unsigned long cast1112 = (unsigned long)diff1111;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1106, r1108, cast1112);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1113) {
bb1114:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1115;
  char* __retval1116;
  this1115 = v1113;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1117 = this1115;
  char* t1118 = t1117->_M_dataplus._M_p;
  __retval1116 = t1118;
  char* t1119 = __retval1116;
  return t1119;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1120, unsigned long v1121) {
bb1122:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1123;
  unsigned long __length1124;
  this1123 = v1120;
  __length1124 = v1121;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1125 = this1123;
  unsigned long t1126 = __length1124;
  t1125->_M_string_length = t1126;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1127, unsigned long v1128) {
bb1129:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1130;
  unsigned long __n1131;
  char ref_tmp01132;
  this1130 = v1127;
  __n1131 = v1128;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1133 = this1130;
  unsigned long t1134 = __n1131;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1133, t1134);
  unsigned long t1135 = __n1131;
  char* r1136 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1133);
  char* ptr1137 = &(r1136)[t1135];
  char c1138 = 0;
  ref_tmp01132 = c1138;
  std__char_traits_char___assign(ptr1137, &ref_tmp01132);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1139) {
bb1140:
  struct _Guard* this1141;
  this1141 = v1139;
  struct _Guard* t1142 = this1141;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1143 = t1142->_M_guarded;
    _Bool cast1144 = (_Bool)t1143;
    if (cast1144) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1145 = t1142->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1145);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1146, char* v1147, char* v1148, struct std__forward_iterator_tag v1149) {
bb1150:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1151;
  char* __beg1152;
  char* __end1153;
  struct std__forward_iterator_tag unnamed1154;
  unsigned long __dnew1155;
  struct _Guard __guard1156;
  this1151 = v1146;
  __beg1152 = v1147;
  __end1153 = v1148;
  unnamed1154 = v1149;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1157 = this1151;
  char* t1158 = __beg1152;
  char* t1159 = __end1153;
  long r1160 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1158, t1159);
  unsigned long cast1161 = (unsigned long)r1160;
  __dnew1155 = cast1161;
    unsigned long t1162 = __dnew1155;
    unsigned long c1163 = 15;
    _Bool c1164 = ((t1162 > c1163)) ? 1 : 0;
    if (c1164) {
      unsigned long c1165 = 0;
      char* r1166 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1157, &__dnew1155, c1165);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1157, r1166);
      unsigned long t1167 = __dnew1155;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1157, t1167);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1157);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1156, t1157);
    char* r1168 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1157);
    char* t1169 = __beg1152;
    char* t1170 = __end1153;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1168, t1169, t1170);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1171 = ((void*)0);
    __guard1156._M_guarded = c1171;
    unsigned long t1172 = __dnew1155;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1157, t1172);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1156);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1173) {
bb1174:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1175;
  this1175 = v1173;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1176 = this1175;
  {
    struct std__allocator_char_* base1177 = (struct std__allocator_char_*)((char *)t1176 + 0);
    std__allocator_char____allocator(base1177);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1178, struct std____new_allocator_char_* v1179) {
bb1180:
  struct std____new_allocator_char_* this1181;
  struct std____new_allocator_char_* unnamed1182;
  this1181 = v1178;
  unnamed1182 = v1179;
  struct std____new_allocator_char_* t1183 = this1181;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1184) {
bb1185:
  char* __r1186;
  char* __retval1187;
  __r1186 = v1184;
  char* t1188 = __r1186;
  __retval1187 = t1188;
  char* t1189 = __retval1187;
  return t1189;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1190) {
bb1191:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1192;
  char* __retval1193;
  this1192 = v1190;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1194 = this1192;
  char* cast1195 = (char*)&(t1194->field2._M_local_buf);
  char* r1196 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1195);
  __retval1193 = r1196;
  char* t1197 = __retval1193;
  return t1197;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1198) {
bb1199:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1200;
  _Bool __retval1201;
  this1200 = v1198;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1202 = this1200;
    char* r1203 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1202);
    char* r1204 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1202);
    _Bool c1205 = ((r1203 == r1204)) ? 1 : 0;
    if (c1205) {
        unsigned long t1206 = t1202->_M_string_length;
        unsigned long c1207 = 15;
        _Bool c1208 = ((t1206 > c1207)) ? 1 : 0;
        if (c1208) {
          __builtin_unreachable();
        }
      _Bool c1209 = 1;
      __retval1201 = c1209;
      _Bool t1210 = __retval1201;
      return t1210;
    }
  _Bool c1211 = 0;
  __retval1201 = c1211;
  _Bool t1212 = __retval1201;
  return t1212;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1213, char* v1214, unsigned long v1215) {
bb1216:
  struct std____new_allocator_char_* this1217;
  char* __p1218;
  unsigned long __n1219;
  this1217 = v1213;
  __p1218 = v1214;
  __n1219 = v1215;
  struct std____new_allocator_char_* t1220 = this1217;
    unsigned long c1221 = 1;
    unsigned long c1222 = 16;
    _Bool c1223 = ((c1221 > c1222)) ? 1 : 0;
    if (c1223) {
      char* t1224 = __p1218;
      void* cast1225 = (void*)t1224;
      unsigned long t1226 = __n1219;
      unsigned long c1227 = 1;
      unsigned long b1228 = t1226 * c1227;
      unsigned long c1229 = 1;
      operator_delete_3(cast1225, b1228, c1229);
      return;
    }
  char* t1230 = __p1218;
  void* cast1231 = (void*)t1230;
  unsigned long t1232 = __n1219;
  unsigned long c1233 = 1;
  unsigned long b1234 = t1232 * c1233;
  operator_delete_2(cast1231, b1234);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1235, char* v1236, unsigned long v1237) {
bb1238:
  struct std__allocator_char_* this1239;
  char* __p1240;
  unsigned long __n1241;
  this1239 = v1235;
  __p1240 = v1236;
  __n1241 = v1237;
  struct std__allocator_char_* t1242 = this1239;
    _Bool r1243 = std____is_constant_evaluated();
    if (r1243) {
      char* t1244 = __p1240;
      void* cast1245 = (void*)t1244;
      operator_delete(cast1245);
      return;
    }
  struct std____new_allocator_char_* base1246 = (struct std____new_allocator_char_*)((char *)t1242 + 0);
  char* t1247 = __p1240;
  unsigned long t1248 = __n1241;
  std____new_allocator_char___deallocate(base1246, t1247, t1248);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1249, char* v1250, unsigned long v1251) {
bb1252:
  struct std__allocator_char_* __a1253;
  char* __p1254;
  unsigned long __n1255;
  __a1253 = v1249;
  __p1254 = v1250;
  __n1255 = v1251;
  struct std__allocator_char_* t1256 = __a1253;
  char* t1257 = __p1254;
  unsigned long t1258 = __n1255;
  std__allocator_char___deallocate(t1256, t1257, t1258);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1259, unsigned long v1260) {
bb1261:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1262;
  unsigned long __size1263;
  this1262 = v1259;
  __size1263 = v1260;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1264 = this1262;
  struct std__allocator_char_* r1265 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1264);
  char* r1266 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1264);
  unsigned long t1267 = __size1263;
  unsigned long c1268 = 1;
  unsigned long b1269 = t1267 + c1268;
  std__allocator_traits_std__allocator_char_____deallocate(r1265, r1266, b1269);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1270) {
bb1271:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1272;
  this1272 = v1270;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1273 = this1272;
    _Bool r1274 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1273);
    _Bool u1275 = !r1274;
    if (u1275) {
      unsigned long t1276 = t1273->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1273, t1276);
    }
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1277, struct std__allocator_char_* v1278) {
bb1279:
  struct std__allocator_char_* this1280;
  struct std__allocator_char_* __a1281;
  this1280 = v1277;
  __a1281 = v1278;
  struct std__allocator_char_* t1282 = this1280;
  struct std____new_allocator_char_* base1283 = (struct std____new_allocator_char_*)((char *)t1282 + 0);
  struct std__allocator_char_* t1284 = __a1281;
  struct std____new_allocator_char_* base1285 = (struct std____new_allocator_char_*)((char *)t1284 + 0);
  std____new_allocator_char_____new_allocator(base1283, base1285);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE37select_on_container_copy_constructionERKS0_
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* v1286) {
bb1287:
  struct std__allocator_char_* __rhs1288;
  struct std__allocator_char_ __retval1289;
  __rhs1288 = v1286;
  struct std__allocator_char_* t1290 = __rhs1288;
  std__allocator_char___allocator(&__retval1289, t1290);
  struct std__allocator_char_ t1291 = __retval1289;
  return t1291;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE17_S_select_on_copyERKS1_
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* v1292) {
bb1293:
  struct std__allocator_char_* __a1294;
  struct std__allocator_char_ __retval1295;
  __a1294 = v1292;
  struct std__allocator_char_* t1296 = __a1294;
  struct std__allocator_char_ r1297 = std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(t1296);
  __retval1295 = r1297;
  struct std__allocator_char_ t1298 = __retval1295;
  return t1298;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1299, char* v1300, struct std__allocator_char_* v1301) {
bb1302:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1303;
  char* __dat1304;
  struct std__allocator_char_* __a1305;
  this1303 = v1299;
  __dat1304 = v1300;
  __a1305 = v1301;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1306 = this1303;
  struct std__allocator_char_* base1307 = (struct std__allocator_char_*)((char *)t1306 + 0);
  struct std__allocator_char_* t1308 = __a1305;
  std__allocator_char___allocator(base1307, t1308);
    char* t1309 = __dat1304;
    t1306->_M_p = t1309;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructILb1EEEvPKcm
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_true_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1310, char* v1311, unsigned long v1312) {
bb1313:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1314;
  char* __str1315;
  unsigned long __n1316;
  this1314 = v1310;
  __str1315 = v1311;
  __n1316 = v1312;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1317 = this1314;
    unsigned long t1318 = __n1316;
    unsigned long c1319 = 15;
    _Bool c1320 = ((t1318 > c1319)) ? 1 : 0;
    if (c1320) {
      unsigned long c1321 = 0;
      char* r1322 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1317, &__n1316, c1321);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1317, r1322);
      unsigned long t1323 = __n1316;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1317, t1323);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1317);
    }
    unsigned long t1324 = __n1316;
    _Bool cast1325 = (_Bool)t1324;
    _Bool ternary1326;
    if (cast1325) {
      _Bool c1327 = 1;
      ternary1326 = (_Bool)c1327;
    } else {
      _Bool c1328 = 1;
      ternary1326 = (_Bool)c1328;
    }
    if (ternary1326) {
      char* r1329 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1317);
      char* t1330 = __str1315;
      unsigned long t1331 = __n1316;
      _Bool c1332 = 1;
      unsigned long cast1333 = (unsigned long)c1332;
      unsigned long b1334 = t1331 + cast1333;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1329, t1330, b1334);
    }
  unsigned long t1335 = __n1316;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1317, t1335);
    _Bool c1336 = 0;
    if (c1336) {
      char ref_tmp01337;
      unsigned long t1338 = __n1316;
      char* r1339 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1317);
      char* ptr1340 = &(r1339)[t1338];
      char c1341 = 0;
      ref_tmp01337 = c1341;
      std__char_traits_char___assign(ptr1340, &ref_tmp01337);
    }
  return;
}

