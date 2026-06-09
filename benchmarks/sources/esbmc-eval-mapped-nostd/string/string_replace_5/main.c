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
char _str_6[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_replace_5/main.cpp";
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
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_17[50] = "basic_string: construction from null is not valid";
char _str_18[24] = "basic_string::_M_create";
char _str_19[22] = "basic_string::replace";
char _str_20[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_21[25] = "basic_string::_M_replace";
char _str_22[29] = "basic_string::_M_replace_aux";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p3);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_4(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p3, unsigned long p4, unsigned long p5);
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___assign(char* p0, unsigned long p1, char p2);
extern void* memset(void* p0, int p1, unsigned long p2);
char* std__char_traits_char___assign(char* p0, unsigned long p1, char p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(char* p0, unsigned long p1, char p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, unsigned long p3, char p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_5(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, unsigned long p3, char p4);
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v47, unsigned long v48, unsigned long v49, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v50) {
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
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r64 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(t57, t58, t59, r61, r63);
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
      char* cast174 = (char*)&(_str_20);
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_4(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v202, unsigned long v203, unsigned long v204, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v205, unsigned long v206, unsigned long v207) {
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
  char* cast223 = (char*)&(_str_19);
  unsigned long r224 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t221, t222, cast223);
  char* ptr225 = &(r220)[r224];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t226 = __str212;
  unsigned long t227 = __pos2213;
  unsigned long t228 = __n2214;
  unsigned long r229 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t226, t227, t228);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r230 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(t216, t217, t218, ptr225, r229);
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
  char* cast586 = (char*)&(_str_21);
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v666, unsigned long v667, unsigned long v668, char* v669, unsigned long v670) {
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
  char* cast680 = (char*)&(_str_19);
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v689, unsigned long v690, unsigned long v691, char* v692) {
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
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r705 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(t699, t700, t701, t702, r704);
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
  char* cast818 = (char*)&(_str_22);
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_5(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v865, unsigned long v866, unsigned long v867, unsigned long v868, char v869) {
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
  char* cast879 = (char*)&(_str_19);
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

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v888, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v889) {
bb890:
  struct std__basic_ostream_char__std__char_traits_char__* __os891;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str892;
  struct std__basic_ostream_char__std__char_traits_char__* __retval893;
  __os891 = v888;
  __str892 = v889;
  struct std__basic_ostream_char__std__char_traits_char__* t894 = __os891;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t895 = __str892;
  char* r896 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t895);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t897 = __str892;
  unsigned long r898 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t897);
  long cast899 = (long)r898;
  struct std__basic_ostream_char__std__char_traits_char__* r900 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t894, r896, cast899);
  __retval893 = r900;
  struct std__basic_ostream_char__std__char_traits_char__* t901 = __retval893;
  return t901;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v902, void* v903) {
bb904:
  struct std__basic_ostream_char__std__char_traits_char__* this905;
  void* __pf906;
  struct std__basic_ostream_char__std__char_traits_char__* __retval907;
  this905 = v902;
  __pf906 = v903;
  struct std__basic_ostream_char__std__char_traits_char__* t908 = this905;
  void* t909 = __pf906;
  struct std__basic_ostream_char__std__char_traits_char__* r910 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t909)(t908);
  __retval907 = r910;
  struct std__basic_ostream_char__std__char_traits_char__* t911 = __retval907;
  return t911;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v912) {
bb913:
  struct std__basic_ostream_char__std__char_traits_char__* __os914;
  struct std__basic_ostream_char__std__char_traits_char__* __retval915;
  __os914 = v912;
  struct std__basic_ostream_char__std__char_traits_char__* t916 = __os914;
  struct std__basic_ostream_char__std__char_traits_char__* r917 = std__ostream__flush(t916);
  __retval915 = r917;
  struct std__basic_ostream_char__std__char_traits_char__* t918 = __retval915;
  return t918;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v919) {
bb920:
  struct std__ctype_char_* __f921;
  struct std__ctype_char_* __retval922;
  __f921 = v919;
    struct std__ctype_char_* t923 = __f921;
    _Bool cast924 = (_Bool)t923;
    _Bool u925 = !cast924;
    if (u925) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t926 = __f921;
  __retval922 = t926;
  struct std__ctype_char_* t927 = __retval922;
  return t927;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v928, char v929) {
bb930:
  struct std__ctype_char_* this931;
  char __c932;
  char __retval933;
  this931 = v928;
  __c932 = v929;
  struct std__ctype_char_* t934 = this931;
    char t935 = t934->_M_widen_ok;
    _Bool cast936 = (_Bool)t935;
    if (cast936) {
      char t937 = __c932;
      unsigned char cast938 = (unsigned char)t937;
      unsigned long cast939 = (unsigned long)cast938;
      char t940 = t934->_M_widen[cast939];
      __retval933 = t940;
      char t941 = __retval933;
      return t941;
    }
  std__ctype_char____M_widen_init___const(t934);
  char t942 = __c932;
  void** v943 = (void**)t934;
  void* v944 = *((void**)v943);
  char vcall947 = (char)__VERIFIER_virtual_call_char_char(t934, 6, t942);
  __retval933 = vcall947;
  char t948 = __retval933;
  return t948;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v949, char v950) {
bb951:
  struct std__basic_ios_char__std__char_traits_char__* this952;
  char __c953;
  char __retval954;
  this952 = v949;
  __c953 = v950;
  struct std__basic_ios_char__std__char_traits_char__* t955 = this952;
  struct std__ctype_char_* t956 = t955->_M_ctype;
  struct std__ctype_char_* r957 = std__ctype_char__const__std____check_facet_std__ctype_char___(t956);
  char t958 = __c953;
  char r959 = std__ctype_char___widen_char__const(r957, t958);
  __retval954 = r959;
  char t960 = __retval954;
  return t960;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v961) {
bb962:
  struct std__basic_ostream_char__std__char_traits_char__* __os963;
  struct std__basic_ostream_char__std__char_traits_char__* __retval964;
  __os963 = v961;
  struct std__basic_ostream_char__std__char_traits_char__* t965 = __os963;
  struct std__basic_ostream_char__std__char_traits_char__* t966 = __os963;
  void** v967 = (void**)t966;
  void* v968 = *((void**)v967);
  unsigned char* cast969 = (unsigned char*)v968;
  long c970 = -24;
  unsigned char* ptr971 = &(cast969)[c970];
  long* cast972 = (long*)ptr971;
  long t973 = *cast972;
  unsigned char* cast974 = (unsigned char*)t966;
  unsigned char* ptr975 = &(cast974)[t973];
  struct std__basic_ostream_char__std__char_traits_char__* cast976 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr975;
  struct std__basic_ios_char__std__char_traits_char__* cast977 = (struct std__basic_ios_char__std__char_traits_char__*)cast976;
  char c978 = 10;
  char r979 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast977, c978);
  struct std__basic_ostream_char__std__char_traits_char__* r980 = std__ostream__put(t965, r979);
  struct std__basic_ostream_char__std__char_traits_char__* r981 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r980);
  __retval964 = r981;
  struct std__basic_ostream_char__std__char_traits_char__* t982 = __retval964;
  return t982;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v983) {
bb984:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this985;
  this985 = v983;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t986 = this985;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t986);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t986->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb987:
  int __retval988;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ base989;
  struct std__allocator_char_ ref_tmp0990;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2991;
  struct std__allocator_char_ ref_tmp1992;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str3993;
  struct std__allocator_char_ ref_tmp2994;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str4995;
  struct std__allocator_char_ ref_tmp3996;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str997;
  int c998 = 0;
  __retval988 = c998;
  char* cast999 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0990);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&base989, cast999, &ref_tmp0990);
  {
    std__allocator_char____allocator(&ref_tmp0990);
  }
    char* cast1000 = (char*)&(_str_1);
    std__allocator_char___allocator_2(&ref_tmp1992);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str2991, cast1000, &ref_tmp1992);
    {
      std__allocator_char____allocator(&ref_tmp1992);
    }
      char* cast1001 = (char*)&(_str_2);
      std__allocator_char___allocator_2(&ref_tmp2994);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str3993, cast1001, &ref_tmp2994);
      {
        std__allocator_char____allocator(&ref_tmp2994);
      }
        char* cast1002 = (char*)&(_str_3);
        std__allocator_char___allocator_2(&ref_tmp3996);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str4995, cast1002, &ref_tmp3996);
        {
          std__allocator_char____allocator(&ref_tmp3996);
        }
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&str997, &base989);
            unsigned long c1003 = 9;
            unsigned long c1004 = 5;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1005 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(&str997, c1003, c1004, &str2991);
            char* cast1006 = (char*)&(_str_4);
            _Bool r1007 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str997, cast1006);
            if (r1007) {
            } else {
              char* cast1008 = (char*)&(_str_5);
              char* c1009 = _str_6;
              unsigned int c1010 = 27;
              char* cast1011 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1008, c1009, c1010, cast1011);
            }
            unsigned long c1012 = 19;
            unsigned long c1013 = 6;
            unsigned long c1014 = 7;
            unsigned long c1015 = 6;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1016 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_4(&str997, c1012, c1013, &str3993, c1014, c1015);
            char* cast1017 = (char*)&(_str_7);
            _Bool r1018 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str997, cast1017);
            if (r1018) {
            } else {
              char* cast1019 = (char*)&(_str_8);
              char* c1020 = _str_6;
              unsigned int c1021 = 30;
              char* cast1022 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1019, c1020, c1021, cast1022);
            }
            unsigned long c1023 = 8;
            unsigned long c1024 = 10;
            char* cast1025 = (char*)&(_str_9);
            unsigned long c1026 = 6;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1027 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(&str997, c1023, c1024, cast1025, c1026);
            char* cast1028 = (char*)&(_str_10);
            _Bool r1029 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str997, cast1028);
            if (r1029) {
            } else {
              char* cast1030 = (char*)&(_str_11);
              char* c1031 = _str_6;
              unsigned int c1032 = 33;
              char* cast1033 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1030, c1031, c1032, cast1033);
            }
            unsigned long c1034 = 8;
            unsigned long c1035 = 6;
            char* cast1036 = (char*)&(_str_12);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1037 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(&str997, c1034, c1035, cast1036);
            char* cast1038 = (char*)&(_str_13);
            _Bool r1039 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str997, cast1038);
            if (r1039) {
            } else {
              char* cast1040 = (char*)&(_str_14);
              char* c1041 = _str_6;
              unsigned int c1042 = 36;
              char* cast1043 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1040, c1041, c1042, cast1043);
            }
            unsigned long c1044 = 22;
            unsigned long c1045 = 1;
            unsigned long c1046 = 3;
            char c1047 = 33;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1048 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_5(&str997, c1044, c1045, c1046, c1047);
            char* cast1049 = (char*)&(_str_15);
            _Bool r1050 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str997, cast1049);
            if (r1050) {
            } else {
              char* cast1051 = (char*)&(_str_16);
              char* c1052 = _str_6;
              unsigned int c1053 = 39;
              char* cast1054 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1051, c1052, c1053, cast1054);
            }
            struct std__basic_ostream_char__std__char_traits_char__* r1055 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str997);
            struct std__basic_ostream_char__std__char_traits_char__* r1056 = std__ostream__operator___std__ostream_____(r1055, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            int c1057 = 0;
            __retval988 = c1057;
            int t1058 = __retval988;
            int ret_val1059 = t1058;
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str997);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str4995);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str3993);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str2991);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&base989);
            }
            return ret_val1059;
  int t1060 = __retval988;
  return t1060;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1061) {
bb1062:
  struct std____new_allocator_char_* this1063;
  this1063 = v1061;
  struct std____new_allocator_char_* t1064 = this1063;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1065) {
bb1066:
  char* __r1067;
  char* __retval1068;
  __r1067 = v1065;
  char* t1069 = __r1067;
  __retval1068 = t1069;
  char* t1070 = __retval1068;
  return t1070;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1071) {
bb1072:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1073;
  char* __retval1074;
  this1073 = v1071;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1075 = this1073;
  char* cast1076 = (char*)&(t1075->field2._M_local_buf);
  char* r1077 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1076);
  __retval1074 = r1077;
  char* t1078 = __retval1074;
  return t1078;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1079, char* v1080, struct std__allocator_char_* v1081) {
bb1082:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1083;
  char* __dat1084;
  struct std__allocator_char_* __a1085;
  this1083 = v1079;
  __dat1084 = v1080;
  __a1085 = v1081;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1086 = this1083;
  struct std__allocator_char_* base1087 = (struct std__allocator_char_*)((char *)t1086 + 0);
  struct std__allocator_char_* t1088 = __a1085;
  std__allocator_char___allocator(base1087, t1088);
    char* t1089 = __dat1084;
    t1086->_M_p = t1089;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1090:
  _Bool __retval1091;
    _Bool c1092 = 0;
    __retval1091 = c1092;
    _Bool t1093 = __retval1091;
    return t1093;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1094, char* v1095) {
bb1096:
  char* __c11097;
  char* __c21098;
  _Bool __retval1099;
  __c11097 = v1094;
  __c21098 = v1095;
  char* t1100 = __c11097;
  char t1101 = *t1100;
  int cast1102 = (int)t1101;
  char* t1103 = __c21098;
  char t1104 = *t1103;
  int cast1105 = (int)t1104;
  _Bool c1106 = ((cast1102 == cast1105)) ? 1 : 0;
  __retval1099 = c1106;
  _Bool t1107 = __retval1099;
  return t1107;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1108) {
bb1109:
  char* __p1110;
  unsigned long __retval1111;
  unsigned long __i1112;
  __p1110 = v1108;
  unsigned long c1113 = 0;
  __i1112 = c1113;
    char ref_tmp01114;
    while (1) {
      unsigned long t1115 = __i1112;
      char* t1116 = __p1110;
      char* ptr1117 = &(t1116)[t1115];
      char c1118 = 0;
      ref_tmp01114 = c1118;
      _Bool r1119 = __gnu_cxx__char_traits_char___eq(ptr1117, &ref_tmp01114);
      _Bool u1120 = !r1119;
      if (!u1120) break;
      unsigned long t1121 = __i1112;
      unsigned long u1122 = t1121 + 1;
      __i1112 = u1122;
    }
  unsigned long t1123 = __i1112;
  __retval1111 = t1123;
  unsigned long t1124 = __retval1111;
  return t1124;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1125) {
bb1126:
  char* __s1127;
  unsigned long __retval1128;
  __s1127 = v1125;
    _Bool r1129 = std____is_constant_evaluated();
    if (r1129) {
      char* t1130 = __s1127;
      unsigned long r1131 = __gnu_cxx__char_traits_char___length(t1130);
      __retval1128 = r1131;
      unsigned long t1132 = __retval1128;
      return t1132;
    }
  char* t1133 = __s1127;
  unsigned long r1134 = strlen(t1133);
  __retval1128 = r1134;
  unsigned long t1135 = __retval1128;
  return t1135;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v1136, char* v1137, struct std__random_access_iterator_tag v1138) {
bb1139:
  char* __first1140;
  char* __last1141;
  struct std__random_access_iterator_tag unnamed1142;
  long __retval1143;
  __first1140 = v1136;
  __last1141 = v1137;
  unnamed1142 = v1138;
  char* t1144 = __last1141;
  char* t1145 = __first1140;
  long diff1146 = t1144 - t1145;
  __retval1143 = diff1146;
  long t1147 = __retval1143;
  return t1147;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v1148) {
bb1149:
  char** unnamed1150;
  struct std__random_access_iterator_tag __retval1151;
  unnamed1150 = v1148;
  struct std__random_access_iterator_tag t1152 = __retval1151;
  return t1152;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v1153, char* v1154) {
bb1155:
  char* __first1156;
  char* __last1157;
  long __retval1158;
  struct std__random_access_iterator_tag agg_tmp01159;
  __first1156 = v1153;
  __last1157 = v1154;
  char* t1160 = __first1156;
  char* t1161 = __last1157;
  struct std__random_access_iterator_tag r1162 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first1156);
  agg_tmp01159 = r1162;
  struct std__random_access_iterator_tag t1163 = agg_tmp01159;
  long r1164 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t1160, t1161, t1163);
  __retval1158 = r1164;
  long t1165 = __retval1158;
  return t1165;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1166, char* v1167) {
bb1168:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1169;
  char* __p1170;
  this1169 = v1166;
  __p1170 = v1167;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1171 = this1169;
  char* t1172 = __p1170;
  t1171->_M_dataplus._M_p = t1172;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v1173) {
bb1174:
  struct std__allocator_char_* __a1175;
  unsigned long __retval1176;
  __a1175 = v1173;
  unsigned long c1177 = -1;
  unsigned long c1178 = 1;
  unsigned long b1179 = c1177 / c1178;
  __retval1176 = b1179;
  unsigned long t1180 = __retval1176;
  return t1180;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1181) {
bb1182:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1183;
  struct std__allocator_char_* __retval1184;
  this1183 = v1181;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1185 = this1183;
  struct std__allocator_char_* base1186 = (struct std__allocator_char_*)((char *)&(t1185->_M_dataplus) + 0);
  __retval1184 = base1186;
  struct std__allocator_char_* t1187 = __retval1184;
  return t1187;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1188, unsigned long* v1189) {
bb1190:
  unsigned long* __a1191;
  unsigned long* __b1192;
  unsigned long* __retval1193;
  __a1191 = v1188;
  __b1192 = v1189;
    unsigned long* t1194 = __b1192;
    unsigned long t1195 = *t1194;
    unsigned long* t1196 = __a1191;
    unsigned long t1197 = *t1196;
    _Bool c1198 = ((t1195 < t1197)) ? 1 : 0;
    if (c1198) {
      unsigned long* t1199 = __b1192;
      __retval1193 = t1199;
      unsigned long* t1200 = __retval1193;
      return t1200;
    }
  unsigned long* t1201 = __a1191;
  __retval1193 = t1201;
  unsigned long* t1202 = __retval1193;
  return t1202;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1203) {
bb1204:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1205;
  unsigned long __retval1206;
  unsigned long __diffmax1207;
  unsigned long __allocmax1208;
  this1205 = v1203;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1209 = this1205;
  unsigned long c1210 = 9223372036854775807;
  __diffmax1207 = c1210;
  struct std__allocator_char_* r1211 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1209);
  unsigned long r1212 = std__allocator_traits_std__allocator_char_____max_size(r1211);
  __allocmax1208 = r1212;
  unsigned long* r1213 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1207, &__allocmax1208);
  unsigned long t1214 = *r1213;
  unsigned long c1215 = 1;
  unsigned long b1216 = t1214 - c1215;
  __retval1206 = b1216;
  unsigned long t1217 = __retval1206;
  return t1217;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v1218) {
bb1219:
  struct std____new_allocator_char_* this1220;
  unsigned long __retval1221;
  this1220 = v1218;
  struct std____new_allocator_char_* t1222 = this1220;
  unsigned long c1223 = 9223372036854775807;
  unsigned long c1224 = 1;
  unsigned long b1225 = c1223 / c1224;
  __retval1221 = b1225;
  unsigned long t1226 = __retval1221;
  return t1226;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v1227, unsigned long v1228, void* v1229) {
bb1230:
  struct std____new_allocator_char_* this1231;
  unsigned long __n1232;
  void* unnamed1233;
  char* __retval1234;
  this1231 = v1227;
  __n1232 = v1228;
  unnamed1233 = v1229;
  struct std____new_allocator_char_* t1235 = this1231;
    unsigned long t1236 = __n1232;
    unsigned long r1237 = std____new_allocator_char____M_max_size___const(t1235);
    _Bool c1238 = ((t1236 > r1237)) ? 1 : 0;
    if (c1238) {
        unsigned long t1239 = __n1232;
        unsigned long c1240 = -1;
        unsigned long c1241 = 1;
        unsigned long b1242 = c1240 / c1241;
        _Bool c1243 = ((t1239 > b1242)) ? 1 : 0;
        if (c1243) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1244 = 1;
    unsigned long c1245 = 16;
    _Bool c1246 = ((c1244 > c1245)) ? 1 : 0;
    if (c1246) {
      unsigned long __al1247;
      unsigned long c1248 = 1;
      __al1247 = c1248;
      unsigned long t1249 = __n1232;
      unsigned long c1250 = 1;
      unsigned long b1251 = t1249 * c1250;
      unsigned long t1252 = __al1247;
      void* r1253 = operator_new_2(b1251, t1252);
      char* cast1254 = (char*)r1253;
      __retval1234 = cast1254;
      char* t1255 = __retval1234;
      return t1255;
    }
  unsigned long t1256 = __n1232;
  unsigned long c1257 = 1;
  unsigned long b1258 = t1256 * c1257;
  void* r1259 = operator_new(b1258);
  char* cast1260 = (char*)r1259;
  __retval1234 = cast1260;
  char* t1261 = __retval1234;
  return t1261;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1262, unsigned long v1263) {
bb1264:
  struct std__allocator_char_* this1265;
  unsigned long __n1266;
  char* __retval1267;
  this1265 = v1262;
  __n1266 = v1263;
  struct std__allocator_char_* t1268 = this1265;
    _Bool r1269 = std____is_constant_evaluated();
    if (r1269) {
        unsigned long t1270 = __n1266;
        unsigned long c1271 = 1;
        unsigned long ovr1272;
        _Bool ovf1273 = __builtin_mul_overflow(t1270, c1271, &ovr1272);
        __n1266 = ovr1272;
        if (ovf1273) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1274 = __n1266;
      void* r1275 = operator_new(t1274);
      char* cast1276 = (char*)r1275;
      __retval1267 = cast1276;
      char* t1277 = __retval1267;
      return t1277;
    }
  struct std____new_allocator_char_* base1278 = (struct std____new_allocator_char_*)((char *)t1268 + 0);
  unsigned long t1279 = __n1266;
  void* c1280 = ((void*)0);
  char* r1281 = std____new_allocator_char___allocate(base1278, t1279, c1280);
  __retval1267 = r1281;
  char* t1282 = __retval1267;
  return t1282;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1283, unsigned long v1284) {
bb1285:
  struct std__allocator_char_* __a1286;
  unsigned long __n1287;
  char* __retval1288;
  __a1286 = v1283;
  __n1287 = v1284;
  struct std__allocator_char_* t1289 = __a1286;
  unsigned long t1290 = __n1287;
  char* r1291 = std__allocator_char___allocate(t1289, t1290);
  __retval1288 = r1291;
  char* t1292 = __retval1288;
  return t1292;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1293, unsigned long v1294) {
bb1295:
  struct std__allocator_char_* __a1296;
  unsigned long __n1297;
  char* __retval1298;
  char* __p1299;
  __a1296 = v1293;
  __n1297 = v1294;
  struct std__allocator_char_* t1300 = __a1296;
  unsigned long t1301 = __n1297;
  char* r1302 = std__allocator_traits_std__allocator_char_____allocate(t1300, t1301);
  __p1299 = r1302;
  char* t1303 = __p1299;
  __retval1298 = t1303;
  char* t1304 = __retval1298;
  return t1304;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1305) {
bb1306:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1307;
  struct std__allocator_char_* __retval1308;
  this1307 = v1305;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1309 = this1307;
  struct std__allocator_char_* base1310 = (struct std__allocator_char_*)((char *)&(t1309->_M_dataplus) + 0);
  __retval1308 = base1310;
  struct std__allocator_char_* t1311 = __retval1308;
  return t1311;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1312, unsigned long* v1313, unsigned long v1314) {
bb1315:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1316;
  unsigned long* __capacity1317;
  unsigned long __old_capacity1318;
  char* __retval1319;
  this1316 = v1312;
  __capacity1317 = v1313;
  __old_capacity1318 = v1314;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1320 = this1316;
    unsigned long* t1321 = __capacity1317;
    unsigned long t1322 = *t1321;
    unsigned long r1323 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1320);
    _Bool c1324 = ((t1322 > r1323)) ? 1 : 0;
    if (c1324) {
      char* cast1325 = (char*)&(_str_18);
      std____throw_length_error(cast1325);
    }
    unsigned long* t1326 = __capacity1317;
    unsigned long t1327 = *t1326;
    unsigned long t1328 = __old_capacity1318;
    _Bool c1329 = ((t1327 > t1328)) ? 1 : 0;
    _Bool ternary1330;
    if (c1329) {
      unsigned long* t1331 = __capacity1317;
      unsigned long t1332 = *t1331;
      unsigned long c1333 = 2;
      unsigned long t1334 = __old_capacity1318;
      unsigned long b1335 = c1333 * t1334;
      _Bool c1336 = ((t1332 < b1335)) ? 1 : 0;
      ternary1330 = (_Bool)c1336;
    } else {
      _Bool c1337 = 0;
      ternary1330 = (_Bool)c1337;
    }
    if (ternary1330) {
      unsigned long c1338 = 2;
      unsigned long t1339 = __old_capacity1318;
      unsigned long b1340 = c1338 * t1339;
      unsigned long* t1341 = __capacity1317;
      *t1341 = b1340;
        unsigned long* t1342 = __capacity1317;
        unsigned long t1343 = *t1342;
        unsigned long r1344 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1320);
        _Bool c1345 = ((t1343 > r1344)) ? 1 : 0;
        if (c1345) {
          unsigned long r1346 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1320);
          unsigned long* t1347 = __capacity1317;
          *t1347 = r1346;
        }
    }
  struct std__allocator_char_* r1348 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1320);
  unsigned long* t1349 = __capacity1317;
  unsigned long t1350 = *t1349;
  unsigned long c1351 = 1;
  unsigned long b1352 = t1350 + c1351;
  char* r1353 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1348, b1352);
  __retval1319 = r1353;
  char* t1354 = __retval1319;
  return t1354;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1355, unsigned long v1356) {
bb1357:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1358;
  unsigned long __capacity1359;
  this1358 = v1355;
  __capacity1359 = v1356;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1360 = this1358;
  unsigned long t1361 = __capacity1359;
  t1360->field2._M_allocated_capacity = t1361;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1362:
  _Bool __retval1363;
    _Bool c1364 = 0;
    __retval1363 = c1364;
    _Bool t1365 = __retval1363;
    return t1365;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1366) {
bb1367:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1368;
  this1368 = v1366;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1369 = this1368;
    _Bool r1370 = std__is_constant_evaluated();
    if (r1370) {
        unsigned long __i1371;
        unsigned long c1372 = 0;
        __i1371 = c1372;
        while (1) {
          unsigned long t1374 = __i1371;
          unsigned long c1375 = 15;
          _Bool c1376 = ((t1374 <= c1375)) ? 1 : 0;
          if (!c1376) break;
          char c1377 = 0;
          unsigned long t1378 = __i1371;
          t1369->field2._M_local_buf[t1378] = c1377;
        for_step1373: ;
          unsigned long t1379 = __i1371;
          unsigned long u1380 = t1379 + 1;
          __i1371 = u1380;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1381, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1382) {
bb1383:
  struct _Guard* this1384;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1385;
  this1384 = v1381;
  __s1385 = v1382;
  struct _Guard* t1386 = this1384;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1387 = __s1385;
  t1386->_M_guarded = t1387;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1388, char* v1389) {
bb1390:
  char* __location1391;
  char* __args1392;
  char* __retval1393;
  void* __loc1394;
  __location1391 = v1388;
  __args1392 = v1389;
  char* t1395 = __location1391;
  void* cast1396 = (void*)t1395;
  __loc1394 = cast1396;
    void* t1397 = __loc1394;
    char* cast1398 = (char*)t1397;
    char* t1399 = __args1392;
    char t1400 = *t1399;
    *cast1398 = t1400;
    __retval1393 = cast1398;
    char* t1401 = __retval1393;
    return t1401;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign_2(char* v1402, char* v1403) {
bb1404:
  char* __c11405;
  char* __c21406;
  __c11405 = v1402;
  __c21406 = v1403;
    _Bool r1407 = std____is_constant_evaluated();
    if (r1407) {
      char* t1408 = __c11405;
      char* t1409 = __c21406;
      char* r1410 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1408, t1409);
    } else {
      char* t1411 = __c21406;
      char t1412 = *t1411;
      char* t1413 = __c11405;
      *t1413 = t1412;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1414, char* v1415, unsigned long v1416) {
bb1417:
  char* __s11418;
  char* __s21419;
  unsigned long __n1420;
  char* __retval1421;
  __s11418 = v1414;
  __s21419 = v1415;
  __n1420 = v1416;
    unsigned long t1422 = __n1420;
    unsigned long c1423 = 0;
    _Bool c1424 = ((t1422 == c1423)) ? 1 : 0;
    if (c1424) {
      char* t1425 = __s11418;
      __retval1421 = t1425;
      char* t1426 = __retval1421;
      return t1426;
    }
    _Bool r1427 = std____is_constant_evaluated();
    if (r1427) {
        unsigned long __i1428;
        unsigned long c1429 = 0;
        __i1428 = c1429;
        while (1) {
          unsigned long t1431 = __i1428;
          unsigned long t1432 = __n1420;
          _Bool c1433 = ((t1431 < t1432)) ? 1 : 0;
          if (!c1433) break;
          char* t1434 = __s11418;
          unsigned long t1435 = __i1428;
          char* ptr1436 = &(t1434)[t1435];
          unsigned long t1437 = __i1428;
          char* t1438 = __s21419;
          char* ptr1439 = &(t1438)[t1437];
          char* r1440 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1436, ptr1439);
        for_step1430: ;
          unsigned long t1441 = __i1428;
          unsigned long u1442 = t1441 + 1;
          __i1428 = u1442;
        }
      char* t1443 = __s11418;
      __retval1421 = t1443;
      char* t1444 = __retval1421;
      return t1444;
    }
  char* t1445 = __s11418;
  void* cast1446 = (void*)t1445;
  char* t1447 = __s21419;
  void* cast1448 = (void*)t1447;
  unsigned long t1449 = __n1420;
  unsigned long c1450 = 1;
  unsigned long b1451 = t1449 * c1450;
  void* r1452 = memcpy(cast1446, cast1448, b1451);
  char* t1453 = __s11418;
  __retval1421 = t1453;
  char* t1454 = __retval1421;
  return t1454;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1455, char* v1456, unsigned long v1457) {
bb1458:
  char* __s11459;
  char* __s21460;
  unsigned long __n1461;
  char* __retval1462;
  __s11459 = v1455;
  __s21460 = v1456;
  __n1461 = v1457;
    unsigned long t1463 = __n1461;
    unsigned long c1464 = 0;
    _Bool c1465 = ((t1463 == c1464)) ? 1 : 0;
    if (c1465) {
      char* t1466 = __s11459;
      __retval1462 = t1466;
      char* t1467 = __retval1462;
      return t1467;
    }
    _Bool r1468 = std____is_constant_evaluated();
    if (r1468) {
      char* t1469 = __s11459;
      char* t1470 = __s21460;
      unsigned long t1471 = __n1461;
      char* r1472 = __gnu_cxx__char_traits_char___copy(t1469, t1470, t1471);
      __retval1462 = r1472;
      char* t1473 = __retval1462;
      return t1473;
    }
  char* t1474 = __s11459;
  void* cast1475 = (void*)t1474;
  char* t1476 = __s21460;
  void* cast1477 = (void*)t1476;
  unsigned long t1478 = __n1461;
  void* r1479 = memcpy(cast1475, cast1477, t1478);
  char* cast1480 = (char*)r1479;
  __retval1462 = cast1480;
  char* t1481 = __retval1462;
  return t1481;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1482, char* v1483, unsigned long v1484) {
bb1485:
  char* __d1486;
  char* __s1487;
  unsigned long __n1488;
  __d1486 = v1482;
  __s1487 = v1483;
  __n1488 = v1484;
    unsigned long t1489 = __n1488;
    unsigned long c1490 = 1;
    _Bool c1491 = ((t1489 == c1490)) ? 1 : 0;
    if (c1491) {
      char* t1492 = __d1486;
      char* t1493 = __s1487;
      std__char_traits_char___assign_2(t1492, t1493);
    } else {
      char* t1494 = __d1486;
      char* t1495 = __s1487;
      unsigned long t1496 = __n1488;
      char* r1497 = std__char_traits_char___copy(t1494, t1495, t1496);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1498) {
bb1499:
  char* __it1500;
  char* __retval1501;
  __it1500 = v1498;
  char* t1502 = __it1500;
  __retval1501 = t1502;
  char* t1503 = __retval1501;
  return t1503;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1504, char* v1505, char* v1506) {
bb1507:
  char* __p1508;
  char* __k11509;
  char* __k21510;
  __p1508 = v1504;
  __k11509 = v1505;
  __k21510 = v1506;
    char* t1511 = __p1508;
    char* t1512 = __k11509;
    char* r1513 = char_const__std____niter_base_char_const__(t1512);
    char* t1514 = __k21510;
    char* t1515 = __k11509;
    long diff1516 = t1514 - t1515;
    unsigned long cast1517 = (unsigned long)diff1516;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1511, r1513, cast1517);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1518) {
bb1519:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1520;
  char* __retval1521;
  this1520 = v1518;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1522 = this1520;
  char* t1523 = t1522->_M_dataplus._M_p;
  __retval1521 = t1523;
  char* t1524 = __retval1521;
  return t1524;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1525, unsigned long v1526) {
bb1527:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1528;
  unsigned long __length1529;
  this1528 = v1525;
  __length1529 = v1526;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1530 = this1528;
  unsigned long t1531 = __length1529;
  t1530->_M_string_length = t1531;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1532, unsigned long v1533) {
bb1534:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1535;
  unsigned long __n1536;
  char ref_tmp01537;
  this1535 = v1532;
  __n1536 = v1533;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1538 = this1535;
  unsigned long t1539 = __n1536;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1538, t1539);
  unsigned long t1540 = __n1536;
  char* r1541 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1538);
  char* ptr1542 = &(r1541)[t1540];
  char c1543 = 0;
  ref_tmp01537 = c1543;
  std__char_traits_char___assign_2(ptr1542, &ref_tmp01537);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1544) {
bb1545:
  struct _Guard* this1546;
  this1546 = v1544;
  struct _Guard* t1547 = this1546;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1548 = t1547->_M_guarded;
    _Bool cast1549 = (_Bool)t1548;
    if (cast1549) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1550 = t1547->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1550);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1551, char* v1552, char* v1553, struct std__forward_iterator_tag v1554) {
bb1555:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1556;
  char* __beg1557;
  char* __end1558;
  struct std__forward_iterator_tag unnamed1559;
  unsigned long __dnew1560;
  struct _Guard __guard1561;
  this1556 = v1551;
  __beg1557 = v1552;
  __end1558 = v1553;
  unnamed1559 = v1554;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1562 = this1556;
  char* t1563 = __beg1557;
  char* t1564 = __end1558;
  long r1565 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1563, t1564);
  unsigned long cast1566 = (unsigned long)r1565;
  __dnew1560 = cast1566;
    unsigned long t1567 = __dnew1560;
    unsigned long c1568 = 15;
    _Bool c1569 = ((t1567 > c1568)) ? 1 : 0;
    if (c1569) {
      unsigned long c1570 = 0;
      char* r1571 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1562, &__dnew1560, c1570);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1562, r1571);
      unsigned long t1572 = __dnew1560;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1562, t1572);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1562);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1561, t1562);
    char* r1573 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1562);
    char* t1574 = __beg1557;
    char* t1575 = __end1558;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1573, t1574, t1575);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1576 = ((void*)0);
    __guard1561._M_guarded = c1576;
    unsigned long t1577 = __dnew1560;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1562, t1577);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1561);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1578) {
bb1579:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1580;
  this1580 = v1578;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1581 = this1580;
  {
    struct std__allocator_char_* base1582 = (struct std__allocator_char_*)((char *)t1581 + 0);
    std__allocator_char____allocator(base1582);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1583, struct std____new_allocator_char_* v1584) {
bb1585:
  struct std____new_allocator_char_* this1586;
  struct std____new_allocator_char_* unnamed1587;
  this1586 = v1583;
  unnamed1587 = v1584;
  struct std____new_allocator_char_* t1588 = this1586;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1589) {
bb1590:
  char* __r1591;
  char* __retval1592;
  __r1591 = v1589;
  char* t1593 = __r1591;
  __retval1592 = t1593;
  char* t1594 = __retval1592;
  return t1594;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1595) {
bb1596:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1597;
  char* __retval1598;
  this1597 = v1595;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1599 = this1597;
  char* cast1600 = (char*)&(t1599->field2._M_local_buf);
  char* r1601 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1600);
  __retval1598 = r1601;
  char* t1602 = __retval1598;
  return t1602;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1603) {
bb1604:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1605;
  _Bool __retval1606;
  this1605 = v1603;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1607 = this1605;
    char* r1608 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1607);
    char* r1609 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1607);
    _Bool c1610 = ((r1608 == r1609)) ? 1 : 0;
    if (c1610) {
        unsigned long t1611 = t1607->_M_string_length;
        unsigned long c1612 = 15;
        _Bool c1613 = ((t1611 > c1612)) ? 1 : 0;
        if (c1613) {
          __builtin_unreachable();
        }
      _Bool c1614 = 1;
      __retval1606 = c1614;
      _Bool t1615 = __retval1606;
      return t1615;
    }
  _Bool c1616 = 0;
  __retval1606 = c1616;
  _Bool t1617 = __retval1606;
  return t1617;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1618, char* v1619, unsigned long v1620) {
bb1621:
  struct std____new_allocator_char_* this1622;
  char* __p1623;
  unsigned long __n1624;
  this1622 = v1618;
  __p1623 = v1619;
  __n1624 = v1620;
  struct std____new_allocator_char_* t1625 = this1622;
    unsigned long c1626 = 1;
    unsigned long c1627 = 16;
    _Bool c1628 = ((c1626 > c1627)) ? 1 : 0;
    if (c1628) {
      char* t1629 = __p1623;
      void* cast1630 = (void*)t1629;
      unsigned long t1631 = __n1624;
      unsigned long c1632 = 1;
      unsigned long b1633 = t1631 * c1632;
      unsigned long c1634 = 1;
      operator_delete_3(cast1630, b1633, c1634);
      return;
    }
  char* t1635 = __p1623;
  void* cast1636 = (void*)t1635;
  unsigned long t1637 = __n1624;
  unsigned long c1638 = 1;
  unsigned long b1639 = t1637 * c1638;
  operator_delete_2(cast1636, b1639);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1640, char* v1641, unsigned long v1642) {
bb1643:
  struct std__allocator_char_* this1644;
  char* __p1645;
  unsigned long __n1646;
  this1644 = v1640;
  __p1645 = v1641;
  __n1646 = v1642;
  struct std__allocator_char_* t1647 = this1644;
    _Bool r1648 = std____is_constant_evaluated();
    if (r1648) {
      char* t1649 = __p1645;
      void* cast1650 = (void*)t1649;
      operator_delete(cast1650);
      return;
    }
  struct std____new_allocator_char_* base1651 = (struct std____new_allocator_char_*)((char *)t1647 + 0);
  char* t1652 = __p1645;
  unsigned long t1653 = __n1646;
  std____new_allocator_char___deallocate(base1651, t1652, t1653);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1654, char* v1655, unsigned long v1656) {
bb1657:
  struct std__allocator_char_* __a1658;
  char* __p1659;
  unsigned long __n1660;
  __a1658 = v1654;
  __p1659 = v1655;
  __n1660 = v1656;
  struct std__allocator_char_* t1661 = __a1658;
  char* t1662 = __p1659;
  unsigned long t1663 = __n1660;
  std__allocator_char___deallocate(t1661, t1662, t1663);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1664, unsigned long v1665) {
bb1666:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1667;
  unsigned long __size1668;
  this1667 = v1664;
  __size1668 = v1665;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1669 = this1667;
  struct std__allocator_char_* r1670 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1669);
  char* r1671 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1669);
  unsigned long t1672 = __size1668;
  unsigned long c1673 = 1;
  unsigned long b1674 = t1672 + c1673;
  std__allocator_traits_std__allocator_char_____deallocate(r1670, r1671, b1674);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1675) {
bb1676:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1677;
  this1677 = v1675;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1678 = this1677;
    _Bool r1679 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1678);
    _Bool u1680 = !r1679;
    if (u1680) {
      unsigned long t1681 = t1678->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1678, t1681);
    }
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1682, struct std__allocator_char_* v1683) {
bb1684:
  struct std__allocator_char_* this1685;
  struct std__allocator_char_* __a1686;
  this1685 = v1682;
  __a1686 = v1683;
  struct std__allocator_char_* t1687 = this1685;
  struct std____new_allocator_char_* base1688 = (struct std____new_allocator_char_*)((char *)t1687 + 0);
  struct std__allocator_char_* t1689 = __a1686;
  struct std____new_allocator_char_* base1690 = (struct std____new_allocator_char_*)((char *)t1689 + 0);
  std____new_allocator_char_____new_allocator(base1688, base1690);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE37select_on_container_copy_constructionERKS0_
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* v1691) {
bb1692:
  struct std__allocator_char_* __rhs1693;
  struct std__allocator_char_ __retval1694;
  __rhs1693 = v1691;
  struct std__allocator_char_* t1695 = __rhs1693;
  std__allocator_char___allocator(&__retval1694, t1695);
  struct std__allocator_char_ t1696 = __retval1694;
  return t1696;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE17_S_select_on_copyERKS1_
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* v1697) {
bb1698:
  struct std__allocator_char_* __a1699;
  struct std__allocator_char_ __retval1700;
  __a1699 = v1697;
  struct std__allocator_char_* t1701 = __a1699;
  struct std__allocator_char_ r1702 = std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(t1701);
  __retval1700 = r1702;
  struct std__allocator_char_ t1703 = __retval1700;
  return t1703;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1704, char* v1705, struct std__allocator_char_* v1706) {
bb1707:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1708;
  char* __dat1709;
  struct std__allocator_char_* __a1710;
  this1708 = v1704;
  __dat1709 = v1705;
  __a1710 = v1706;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1711 = this1708;
  struct std__allocator_char_* base1712 = (struct std__allocator_char_*)((char *)t1711 + 0);
  struct std__allocator_char_* t1713 = __a1710;
  std__allocator_char___allocator(base1712, t1713);
    char* t1714 = __dat1709;
    t1711->_M_p = t1714;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructILb1EEEvPKcm
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_true_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1715, char* v1716, unsigned long v1717) {
bb1718:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1719;
  char* __str1720;
  unsigned long __n1721;
  this1719 = v1715;
  __str1720 = v1716;
  __n1721 = v1717;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1722 = this1719;
    unsigned long t1723 = __n1721;
    unsigned long c1724 = 15;
    _Bool c1725 = ((t1723 > c1724)) ? 1 : 0;
    if (c1725) {
      unsigned long c1726 = 0;
      char* r1727 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1722, &__n1721, c1726);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1722, r1727);
      unsigned long t1728 = __n1721;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1722, t1728);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1722);
    }
    unsigned long t1729 = __n1721;
    _Bool cast1730 = (_Bool)t1729;
    _Bool ternary1731;
    if (cast1730) {
      _Bool c1732 = 1;
      ternary1731 = (_Bool)c1732;
    } else {
      _Bool c1733 = 1;
      ternary1731 = (_Bool)c1733;
    }
    if (ternary1731) {
      char* r1734 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1722);
      char* t1735 = __str1720;
      unsigned long t1736 = __n1721;
      _Bool c1737 = 1;
      unsigned long cast1738 = (unsigned long)c1737;
      unsigned long b1739 = t1736 + cast1738;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1734, t1735, b1739);
    }
  unsigned long t1740 = __n1721;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1722, t1740);
    _Bool c1741 = 0;
    if (c1741) {
      char ref_tmp01742;
      unsigned long t1743 = __n1721;
      char* r1744 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1722);
      char* ptr1745 = &(r1744)[t1743];
      char c1746 = 0;
      ref_tmp01742 = c1746;
      std__char_traits_char___assign_2(ptr1745, &ref_tmp01742);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1747) {
bb1748:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1749;
  unsigned long __retval1750;
  unsigned long __sz1751;
  this1749 = v1747;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1752 = this1749;
  unsigned long t1753 = t1752->_M_string_length;
  __sz1751 = t1753;
    unsigned long t1754 = __sz1751;
    unsigned long r1755 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1752);
    _Bool c1756 = ((t1754 > r1755)) ? 1 : 0;
    if (c1756) {
      __builtin_unreachable();
    }
  unsigned long t1757 = __sz1751;
  __retval1750 = t1757;
  unsigned long t1758 = __retval1750;
  return t1758;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1759) {
bb1760:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1761;
  unsigned long __retval1762;
  this1761 = v1759;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1763 = this1761;
  unsigned long r1764 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1763);
  __retval1762 = r1764;
  unsigned long t1765 = __retval1762;
  return t1765;
}

