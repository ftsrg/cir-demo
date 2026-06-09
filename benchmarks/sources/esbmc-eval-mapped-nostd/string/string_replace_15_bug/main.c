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
char _str_5[36] = "str != \"this is an example string.\"";
char _str_6[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_replace_15_bug/main.cpp";
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
            _Bool u1008 = !r1007;
            if (u1008) {
            } else {
              char* cast1009 = (char*)&(_str_5);
              char* c1010 = _str_6;
              unsigned int c1011 = 28;
              char* cast1012 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1009, c1010, c1011, cast1012);
            }
            unsigned long c1013 = 19;
            unsigned long c1014 = 6;
            unsigned long c1015 = 7;
            unsigned long c1016 = 6;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1017 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_4(&str997, c1013, c1014, &str3993, c1015, c1016);
            char* cast1018 = (char*)&(_str_7);
            _Bool r1019 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str997, cast1018);
            _Bool u1020 = !r1019;
            if (u1020) {
            } else {
              char* cast1021 = (char*)&(_str_8);
              char* c1022 = _str_6;
              unsigned int c1023 = 31;
              char* cast1024 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1021, c1022, c1023, cast1024);
            }
            unsigned long c1025 = 8;
            unsigned long c1026 = 10;
            char* cast1027 = (char*)&(_str_9);
            unsigned long c1028 = 6;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1029 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(&str997, c1025, c1026, cast1027, c1028);
            char* cast1030 = (char*)&(_str_10);
            _Bool r1031 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str997, cast1030);
            _Bool u1032 = !r1031;
            if (u1032) {
            } else {
              char* cast1033 = (char*)&(_str_11);
              char* c1034 = _str_6;
              unsigned int c1035 = 34;
              char* cast1036 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1033, c1034, c1035, cast1036);
            }
            unsigned long c1037 = 8;
            unsigned long c1038 = 6;
            char* cast1039 = (char*)&(_str_12);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1040 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(&str997, c1037, c1038, cast1039);
            char* cast1041 = (char*)&(_str_13);
            _Bool r1042 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str997, cast1041);
            _Bool u1043 = !r1042;
            if (u1043) {
            } else {
              char* cast1044 = (char*)&(_str_14);
              char* c1045 = _str_6;
              unsigned int c1046 = 37;
              char* cast1047 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1044, c1045, c1046, cast1047);
            }
            unsigned long c1048 = 22;
            unsigned long c1049 = 1;
            unsigned long c1050 = 3;
            char c1051 = 33;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1052 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_5(&str997, c1048, c1049, c1050, c1051);
            char* cast1053 = (char*)&(_str_15);
            _Bool r1054 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str997, cast1053);
            _Bool u1055 = !r1054;
            if (u1055) {
            } else {
              char* cast1056 = (char*)&(_str_16);
              char* c1057 = _str_6;
              unsigned int c1058 = 40;
              char* cast1059 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1056, c1057, c1058, cast1059);
            }
            struct std__basic_ostream_char__std__char_traits_char__* r1060 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str997);
            struct std__basic_ostream_char__std__char_traits_char__* r1061 = std__ostream__operator___std__ostream_____(r1060, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            int c1062 = 0;
            __retval988 = c1062;
            int t1063 = __retval988;
            int ret_val1064 = t1063;
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
            return ret_val1064;
  int t1065 = __retval988;
  return t1065;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1066) {
bb1067:
  struct std____new_allocator_char_* this1068;
  this1068 = v1066;
  struct std____new_allocator_char_* t1069 = this1068;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1070) {
bb1071:
  char* __r1072;
  char* __retval1073;
  __r1072 = v1070;
  char* t1074 = __r1072;
  __retval1073 = t1074;
  char* t1075 = __retval1073;
  return t1075;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1076) {
bb1077:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1078;
  char* __retval1079;
  this1078 = v1076;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1080 = this1078;
  char* cast1081 = (char*)&(t1080->field2._M_local_buf);
  char* r1082 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1081);
  __retval1079 = r1082;
  char* t1083 = __retval1079;
  return t1083;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1084, char* v1085, struct std__allocator_char_* v1086) {
bb1087:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1088;
  char* __dat1089;
  struct std__allocator_char_* __a1090;
  this1088 = v1084;
  __dat1089 = v1085;
  __a1090 = v1086;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1091 = this1088;
  struct std__allocator_char_* base1092 = (struct std__allocator_char_*)((char *)t1091 + 0);
  struct std__allocator_char_* t1093 = __a1090;
  std__allocator_char___allocator(base1092, t1093);
    char* t1094 = __dat1089;
    t1091->_M_p = t1094;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1095:
  _Bool __retval1096;
    _Bool c1097 = 0;
    __retval1096 = c1097;
    _Bool t1098 = __retval1096;
    return t1098;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1099, char* v1100) {
bb1101:
  char* __c11102;
  char* __c21103;
  _Bool __retval1104;
  __c11102 = v1099;
  __c21103 = v1100;
  char* t1105 = __c11102;
  char t1106 = *t1105;
  int cast1107 = (int)t1106;
  char* t1108 = __c21103;
  char t1109 = *t1108;
  int cast1110 = (int)t1109;
  _Bool c1111 = ((cast1107 == cast1110)) ? 1 : 0;
  __retval1104 = c1111;
  _Bool t1112 = __retval1104;
  return t1112;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1113) {
bb1114:
  char* __p1115;
  unsigned long __retval1116;
  unsigned long __i1117;
  __p1115 = v1113;
  unsigned long c1118 = 0;
  __i1117 = c1118;
    char ref_tmp01119;
    while (1) {
      unsigned long t1120 = __i1117;
      char* t1121 = __p1115;
      char* ptr1122 = &(t1121)[t1120];
      char c1123 = 0;
      ref_tmp01119 = c1123;
      _Bool r1124 = __gnu_cxx__char_traits_char___eq(ptr1122, &ref_tmp01119);
      _Bool u1125 = !r1124;
      if (!u1125) break;
      unsigned long t1126 = __i1117;
      unsigned long u1127 = t1126 + 1;
      __i1117 = u1127;
    }
  unsigned long t1128 = __i1117;
  __retval1116 = t1128;
  unsigned long t1129 = __retval1116;
  return t1129;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1130) {
bb1131:
  char* __s1132;
  unsigned long __retval1133;
  __s1132 = v1130;
    _Bool r1134 = std____is_constant_evaluated();
    if (r1134) {
      char* t1135 = __s1132;
      unsigned long r1136 = __gnu_cxx__char_traits_char___length(t1135);
      __retval1133 = r1136;
      unsigned long t1137 = __retval1133;
      return t1137;
    }
  char* t1138 = __s1132;
  unsigned long r1139 = strlen(t1138);
  __retval1133 = r1139;
  unsigned long t1140 = __retval1133;
  return t1140;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v1141, char* v1142, struct std__random_access_iterator_tag v1143) {
bb1144:
  char* __first1145;
  char* __last1146;
  struct std__random_access_iterator_tag unnamed1147;
  long __retval1148;
  __first1145 = v1141;
  __last1146 = v1142;
  unnamed1147 = v1143;
  char* t1149 = __last1146;
  char* t1150 = __first1145;
  long diff1151 = t1149 - t1150;
  __retval1148 = diff1151;
  long t1152 = __retval1148;
  return t1152;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v1153) {
bb1154:
  char** unnamed1155;
  struct std__random_access_iterator_tag __retval1156;
  unnamed1155 = v1153;
  struct std__random_access_iterator_tag t1157 = __retval1156;
  return t1157;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v1158, char* v1159) {
bb1160:
  char* __first1161;
  char* __last1162;
  long __retval1163;
  struct std__random_access_iterator_tag agg_tmp01164;
  __first1161 = v1158;
  __last1162 = v1159;
  char* t1165 = __first1161;
  char* t1166 = __last1162;
  struct std__random_access_iterator_tag r1167 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first1161);
  agg_tmp01164 = r1167;
  struct std__random_access_iterator_tag t1168 = agg_tmp01164;
  long r1169 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t1165, t1166, t1168);
  __retval1163 = r1169;
  long t1170 = __retval1163;
  return t1170;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1171, char* v1172) {
bb1173:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1174;
  char* __p1175;
  this1174 = v1171;
  __p1175 = v1172;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1176 = this1174;
  char* t1177 = __p1175;
  t1176->_M_dataplus._M_p = t1177;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v1178) {
bb1179:
  struct std__allocator_char_* __a1180;
  unsigned long __retval1181;
  __a1180 = v1178;
  unsigned long c1182 = -1;
  unsigned long c1183 = 1;
  unsigned long b1184 = c1182 / c1183;
  __retval1181 = b1184;
  unsigned long t1185 = __retval1181;
  return t1185;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1186) {
bb1187:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1188;
  struct std__allocator_char_* __retval1189;
  this1188 = v1186;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1190 = this1188;
  struct std__allocator_char_* base1191 = (struct std__allocator_char_*)((char *)&(t1190->_M_dataplus) + 0);
  __retval1189 = base1191;
  struct std__allocator_char_* t1192 = __retval1189;
  return t1192;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1193, unsigned long* v1194) {
bb1195:
  unsigned long* __a1196;
  unsigned long* __b1197;
  unsigned long* __retval1198;
  __a1196 = v1193;
  __b1197 = v1194;
    unsigned long* t1199 = __b1197;
    unsigned long t1200 = *t1199;
    unsigned long* t1201 = __a1196;
    unsigned long t1202 = *t1201;
    _Bool c1203 = ((t1200 < t1202)) ? 1 : 0;
    if (c1203) {
      unsigned long* t1204 = __b1197;
      __retval1198 = t1204;
      unsigned long* t1205 = __retval1198;
      return t1205;
    }
  unsigned long* t1206 = __a1196;
  __retval1198 = t1206;
  unsigned long* t1207 = __retval1198;
  return t1207;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1208) {
bb1209:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1210;
  unsigned long __retval1211;
  unsigned long __diffmax1212;
  unsigned long __allocmax1213;
  this1210 = v1208;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1214 = this1210;
  unsigned long c1215 = 9223372036854775807;
  __diffmax1212 = c1215;
  struct std__allocator_char_* r1216 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1214);
  unsigned long r1217 = std__allocator_traits_std__allocator_char_____max_size(r1216);
  __allocmax1213 = r1217;
  unsigned long* r1218 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1212, &__allocmax1213);
  unsigned long t1219 = *r1218;
  unsigned long c1220 = 1;
  unsigned long b1221 = t1219 - c1220;
  __retval1211 = b1221;
  unsigned long t1222 = __retval1211;
  return t1222;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v1223) {
bb1224:
  struct std____new_allocator_char_* this1225;
  unsigned long __retval1226;
  this1225 = v1223;
  struct std____new_allocator_char_* t1227 = this1225;
  unsigned long c1228 = 9223372036854775807;
  unsigned long c1229 = 1;
  unsigned long b1230 = c1228 / c1229;
  __retval1226 = b1230;
  unsigned long t1231 = __retval1226;
  return t1231;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v1232, unsigned long v1233, void* v1234) {
bb1235:
  struct std____new_allocator_char_* this1236;
  unsigned long __n1237;
  void* unnamed1238;
  char* __retval1239;
  this1236 = v1232;
  __n1237 = v1233;
  unnamed1238 = v1234;
  struct std____new_allocator_char_* t1240 = this1236;
    unsigned long t1241 = __n1237;
    unsigned long r1242 = std____new_allocator_char____M_max_size___const(t1240);
    _Bool c1243 = ((t1241 > r1242)) ? 1 : 0;
    if (c1243) {
        unsigned long t1244 = __n1237;
        unsigned long c1245 = -1;
        unsigned long c1246 = 1;
        unsigned long b1247 = c1245 / c1246;
        _Bool c1248 = ((t1244 > b1247)) ? 1 : 0;
        if (c1248) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1249 = 1;
    unsigned long c1250 = 16;
    _Bool c1251 = ((c1249 > c1250)) ? 1 : 0;
    if (c1251) {
      unsigned long __al1252;
      unsigned long c1253 = 1;
      __al1252 = c1253;
      unsigned long t1254 = __n1237;
      unsigned long c1255 = 1;
      unsigned long b1256 = t1254 * c1255;
      unsigned long t1257 = __al1252;
      void* r1258 = operator_new_2(b1256, t1257);
      char* cast1259 = (char*)r1258;
      __retval1239 = cast1259;
      char* t1260 = __retval1239;
      return t1260;
    }
  unsigned long t1261 = __n1237;
  unsigned long c1262 = 1;
  unsigned long b1263 = t1261 * c1262;
  void* r1264 = operator_new(b1263);
  char* cast1265 = (char*)r1264;
  __retval1239 = cast1265;
  char* t1266 = __retval1239;
  return t1266;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1267, unsigned long v1268) {
bb1269:
  struct std__allocator_char_* this1270;
  unsigned long __n1271;
  char* __retval1272;
  this1270 = v1267;
  __n1271 = v1268;
  struct std__allocator_char_* t1273 = this1270;
    _Bool r1274 = std____is_constant_evaluated();
    if (r1274) {
        unsigned long t1275 = __n1271;
        unsigned long c1276 = 1;
        unsigned long ovr1277;
        _Bool ovf1278 = __builtin_mul_overflow(t1275, c1276, &ovr1277);
        __n1271 = ovr1277;
        if (ovf1278) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1279 = __n1271;
      void* r1280 = operator_new(t1279);
      char* cast1281 = (char*)r1280;
      __retval1272 = cast1281;
      char* t1282 = __retval1272;
      return t1282;
    }
  struct std____new_allocator_char_* base1283 = (struct std____new_allocator_char_*)((char *)t1273 + 0);
  unsigned long t1284 = __n1271;
  void* c1285 = ((void*)0);
  char* r1286 = std____new_allocator_char___allocate(base1283, t1284, c1285);
  __retval1272 = r1286;
  char* t1287 = __retval1272;
  return t1287;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1288, unsigned long v1289) {
bb1290:
  struct std__allocator_char_* __a1291;
  unsigned long __n1292;
  char* __retval1293;
  __a1291 = v1288;
  __n1292 = v1289;
  struct std__allocator_char_* t1294 = __a1291;
  unsigned long t1295 = __n1292;
  char* r1296 = std__allocator_char___allocate(t1294, t1295);
  __retval1293 = r1296;
  char* t1297 = __retval1293;
  return t1297;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1298, unsigned long v1299) {
bb1300:
  struct std__allocator_char_* __a1301;
  unsigned long __n1302;
  char* __retval1303;
  char* __p1304;
  __a1301 = v1298;
  __n1302 = v1299;
  struct std__allocator_char_* t1305 = __a1301;
  unsigned long t1306 = __n1302;
  char* r1307 = std__allocator_traits_std__allocator_char_____allocate(t1305, t1306);
  __p1304 = r1307;
  char* t1308 = __p1304;
  __retval1303 = t1308;
  char* t1309 = __retval1303;
  return t1309;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1310) {
bb1311:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1312;
  struct std__allocator_char_* __retval1313;
  this1312 = v1310;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1314 = this1312;
  struct std__allocator_char_* base1315 = (struct std__allocator_char_*)((char *)&(t1314->_M_dataplus) + 0);
  __retval1313 = base1315;
  struct std__allocator_char_* t1316 = __retval1313;
  return t1316;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1317, unsigned long* v1318, unsigned long v1319) {
bb1320:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1321;
  unsigned long* __capacity1322;
  unsigned long __old_capacity1323;
  char* __retval1324;
  this1321 = v1317;
  __capacity1322 = v1318;
  __old_capacity1323 = v1319;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1325 = this1321;
    unsigned long* t1326 = __capacity1322;
    unsigned long t1327 = *t1326;
    unsigned long r1328 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1325);
    _Bool c1329 = ((t1327 > r1328)) ? 1 : 0;
    if (c1329) {
      char* cast1330 = (char*)&(_str_18);
      std____throw_length_error(cast1330);
    }
    unsigned long* t1331 = __capacity1322;
    unsigned long t1332 = *t1331;
    unsigned long t1333 = __old_capacity1323;
    _Bool c1334 = ((t1332 > t1333)) ? 1 : 0;
    _Bool ternary1335;
    if (c1334) {
      unsigned long* t1336 = __capacity1322;
      unsigned long t1337 = *t1336;
      unsigned long c1338 = 2;
      unsigned long t1339 = __old_capacity1323;
      unsigned long b1340 = c1338 * t1339;
      _Bool c1341 = ((t1337 < b1340)) ? 1 : 0;
      ternary1335 = (_Bool)c1341;
    } else {
      _Bool c1342 = 0;
      ternary1335 = (_Bool)c1342;
    }
    if (ternary1335) {
      unsigned long c1343 = 2;
      unsigned long t1344 = __old_capacity1323;
      unsigned long b1345 = c1343 * t1344;
      unsigned long* t1346 = __capacity1322;
      *t1346 = b1345;
        unsigned long* t1347 = __capacity1322;
        unsigned long t1348 = *t1347;
        unsigned long r1349 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1325);
        _Bool c1350 = ((t1348 > r1349)) ? 1 : 0;
        if (c1350) {
          unsigned long r1351 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1325);
          unsigned long* t1352 = __capacity1322;
          *t1352 = r1351;
        }
    }
  struct std__allocator_char_* r1353 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1325);
  unsigned long* t1354 = __capacity1322;
  unsigned long t1355 = *t1354;
  unsigned long c1356 = 1;
  unsigned long b1357 = t1355 + c1356;
  char* r1358 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1353, b1357);
  __retval1324 = r1358;
  char* t1359 = __retval1324;
  return t1359;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1360, unsigned long v1361) {
bb1362:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1363;
  unsigned long __capacity1364;
  this1363 = v1360;
  __capacity1364 = v1361;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1365 = this1363;
  unsigned long t1366 = __capacity1364;
  t1365->field2._M_allocated_capacity = t1366;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1367:
  _Bool __retval1368;
    _Bool c1369 = 0;
    __retval1368 = c1369;
    _Bool t1370 = __retval1368;
    return t1370;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1371) {
bb1372:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1373;
  this1373 = v1371;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1374 = this1373;
    _Bool r1375 = std__is_constant_evaluated();
    if (r1375) {
        unsigned long __i1376;
        unsigned long c1377 = 0;
        __i1376 = c1377;
        while (1) {
          unsigned long t1379 = __i1376;
          unsigned long c1380 = 15;
          _Bool c1381 = ((t1379 <= c1380)) ? 1 : 0;
          if (!c1381) break;
          char c1382 = 0;
          unsigned long t1383 = __i1376;
          t1374->field2._M_local_buf[t1383] = c1382;
        for_step1378: ;
          unsigned long t1384 = __i1376;
          unsigned long u1385 = t1384 + 1;
          __i1376 = u1385;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1386, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1387) {
bb1388:
  struct _Guard* this1389;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1390;
  this1389 = v1386;
  __s1390 = v1387;
  struct _Guard* t1391 = this1389;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1392 = __s1390;
  t1391->_M_guarded = t1392;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1393, char* v1394) {
bb1395:
  char* __location1396;
  char* __args1397;
  char* __retval1398;
  void* __loc1399;
  __location1396 = v1393;
  __args1397 = v1394;
  char* t1400 = __location1396;
  void* cast1401 = (void*)t1400;
  __loc1399 = cast1401;
    void* t1402 = __loc1399;
    char* cast1403 = (char*)t1402;
    char* t1404 = __args1397;
    char t1405 = *t1404;
    *cast1403 = t1405;
    __retval1398 = cast1403;
    char* t1406 = __retval1398;
    return t1406;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign_2(char* v1407, char* v1408) {
bb1409:
  char* __c11410;
  char* __c21411;
  __c11410 = v1407;
  __c21411 = v1408;
    _Bool r1412 = std____is_constant_evaluated();
    if (r1412) {
      char* t1413 = __c11410;
      char* t1414 = __c21411;
      char* r1415 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1413, t1414);
    } else {
      char* t1416 = __c21411;
      char t1417 = *t1416;
      char* t1418 = __c11410;
      *t1418 = t1417;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1419, char* v1420, unsigned long v1421) {
bb1422:
  char* __s11423;
  char* __s21424;
  unsigned long __n1425;
  char* __retval1426;
  __s11423 = v1419;
  __s21424 = v1420;
  __n1425 = v1421;
    unsigned long t1427 = __n1425;
    unsigned long c1428 = 0;
    _Bool c1429 = ((t1427 == c1428)) ? 1 : 0;
    if (c1429) {
      char* t1430 = __s11423;
      __retval1426 = t1430;
      char* t1431 = __retval1426;
      return t1431;
    }
    _Bool r1432 = std____is_constant_evaluated();
    if (r1432) {
        unsigned long __i1433;
        unsigned long c1434 = 0;
        __i1433 = c1434;
        while (1) {
          unsigned long t1436 = __i1433;
          unsigned long t1437 = __n1425;
          _Bool c1438 = ((t1436 < t1437)) ? 1 : 0;
          if (!c1438) break;
          char* t1439 = __s11423;
          unsigned long t1440 = __i1433;
          char* ptr1441 = &(t1439)[t1440];
          unsigned long t1442 = __i1433;
          char* t1443 = __s21424;
          char* ptr1444 = &(t1443)[t1442];
          char* r1445 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1441, ptr1444);
        for_step1435: ;
          unsigned long t1446 = __i1433;
          unsigned long u1447 = t1446 + 1;
          __i1433 = u1447;
        }
      char* t1448 = __s11423;
      __retval1426 = t1448;
      char* t1449 = __retval1426;
      return t1449;
    }
  char* t1450 = __s11423;
  void* cast1451 = (void*)t1450;
  char* t1452 = __s21424;
  void* cast1453 = (void*)t1452;
  unsigned long t1454 = __n1425;
  unsigned long c1455 = 1;
  unsigned long b1456 = t1454 * c1455;
  void* r1457 = memcpy(cast1451, cast1453, b1456);
  char* t1458 = __s11423;
  __retval1426 = t1458;
  char* t1459 = __retval1426;
  return t1459;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1460, char* v1461, unsigned long v1462) {
bb1463:
  char* __s11464;
  char* __s21465;
  unsigned long __n1466;
  char* __retval1467;
  __s11464 = v1460;
  __s21465 = v1461;
  __n1466 = v1462;
    unsigned long t1468 = __n1466;
    unsigned long c1469 = 0;
    _Bool c1470 = ((t1468 == c1469)) ? 1 : 0;
    if (c1470) {
      char* t1471 = __s11464;
      __retval1467 = t1471;
      char* t1472 = __retval1467;
      return t1472;
    }
    _Bool r1473 = std____is_constant_evaluated();
    if (r1473) {
      char* t1474 = __s11464;
      char* t1475 = __s21465;
      unsigned long t1476 = __n1466;
      char* r1477 = __gnu_cxx__char_traits_char___copy(t1474, t1475, t1476);
      __retval1467 = r1477;
      char* t1478 = __retval1467;
      return t1478;
    }
  char* t1479 = __s11464;
  void* cast1480 = (void*)t1479;
  char* t1481 = __s21465;
  void* cast1482 = (void*)t1481;
  unsigned long t1483 = __n1466;
  void* r1484 = memcpy(cast1480, cast1482, t1483);
  char* cast1485 = (char*)r1484;
  __retval1467 = cast1485;
  char* t1486 = __retval1467;
  return t1486;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1487, char* v1488, unsigned long v1489) {
bb1490:
  char* __d1491;
  char* __s1492;
  unsigned long __n1493;
  __d1491 = v1487;
  __s1492 = v1488;
  __n1493 = v1489;
    unsigned long t1494 = __n1493;
    unsigned long c1495 = 1;
    _Bool c1496 = ((t1494 == c1495)) ? 1 : 0;
    if (c1496) {
      char* t1497 = __d1491;
      char* t1498 = __s1492;
      std__char_traits_char___assign_2(t1497, t1498);
    } else {
      char* t1499 = __d1491;
      char* t1500 = __s1492;
      unsigned long t1501 = __n1493;
      char* r1502 = std__char_traits_char___copy(t1499, t1500, t1501);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1503) {
bb1504:
  char* __it1505;
  char* __retval1506;
  __it1505 = v1503;
  char* t1507 = __it1505;
  __retval1506 = t1507;
  char* t1508 = __retval1506;
  return t1508;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1509, char* v1510, char* v1511) {
bb1512:
  char* __p1513;
  char* __k11514;
  char* __k21515;
  __p1513 = v1509;
  __k11514 = v1510;
  __k21515 = v1511;
    char* t1516 = __p1513;
    char* t1517 = __k11514;
    char* r1518 = char_const__std____niter_base_char_const__(t1517);
    char* t1519 = __k21515;
    char* t1520 = __k11514;
    long diff1521 = t1519 - t1520;
    unsigned long cast1522 = (unsigned long)diff1521;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1516, r1518, cast1522);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1523) {
bb1524:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1525;
  char* __retval1526;
  this1525 = v1523;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1527 = this1525;
  char* t1528 = t1527->_M_dataplus._M_p;
  __retval1526 = t1528;
  char* t1529 = __retval1526;
  return t1529;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1530, unsigned long v1531) {
bb1532:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1533;
  unsigned long __length1534;
  this1533 = v1530;
  __length1534 = v1531;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1535 = this1533;
  unsigned long t1536 = __length1534;
  t1535->_M_string_length = t1536;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1537, unsigned long v1538) {
bb1539:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1540;
  unsigned long __n1541;
  char ref_tmp01542;
  this1540 = v1537;
  __n1541 = v1538;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1543 = this1540;
  unsigned long t1544 = __n1541;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1543, t1544);
  unsigned long t1545 = __n1541;
  char* r1546 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1543);
  char* ptr1547 = &(r1546)[t1545];
  char c1548 = 0;
  ref_tmp01542 = c1548;
  std__char_traits_char___assign_2(ptr1547, &ref_tmp01542);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1549) {
bb1550:
  struct _Guard* this1551;
  this1551 = v1549;
  struct _Guard* t1552 = this1551;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1553 = t1552->_M_guarded;
    _Bool cast1554 = (_Bool)t1553;
    if (cast1554) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1555 = t1552->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1555);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1556, char* v1557, char* v1558, struct std__forward_iterator_tag v1559) {
bb1560:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1561;
  char* __beg1562;
  char* __end1563;
  struct std__forward_iterator_tag unnamed1564;
  unsigned long __dnew1565;
  struct _Guard __guard1566;
  this1561 = v1556;
  __beg1562 = v1557;
  __end1563 = v1558;
  unnamed1564 = v1559;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1567 = this1561;
  char* t1568 = __beg1562;
  char* t1569 = __end1563;
  long r1570 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1568, t1569);
  unsigned long cast1571 = (unsigned long)r1570;
  __dnew1565 = cast1571;
    unsigned long t1572 = __dnew1565;
    unsigned long c1573 = 15;
    _Bool c1574 = ((t1572 > c1573)) ? 1 : 0;
    if (c1574) {
      unsigned long c1575 = 0;
      char* r1576 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1567, &__dnew1565, c1575);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1567, r1576);
      unsigned long t1577 = __dnew1565;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1567, t1577);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1567);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1566, t1567);
    char* r1578 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1567);
    char* t1579 = __beg1562;
    char* t1580 = __end1563;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1578, t1579, t1580);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1581 = ((void*)0);
    __guard1566._M_guarded = c1581;
    unsigned long t1582 = __dnew1565;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1567, t1582);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1566);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1583) {
bb1584:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1585;
  this1585 = v1583;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1586 = this1585;
  {
    struct std__allocator_char_* base1587 = (struct std__allocator_char_*)((char *)t1586 + 0);
    std__allocator_char____allocator(base1587);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1588, struct std____new_allocator_char_* v1589) {
bb1590:
  struct std____new_allocator_char_* this1591;
  struct std____new_allocator_char_* unnamed1592;
  this1591 = v1588;
  unnamed1592 = v1589;
  struct std____new_allocator_char_* t1593 = this1591;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1594) {
bb1595:
  char* __r1596;
  char* __retval1597;
  __r1596 = v1594;
  char* t1598 = __r1596;
  __retval1597 = t1598;
  char* t1599 = __retval1597;
  return t1599;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1600) {
bb1601:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1602;
  char* __retval1603;
  this1602 = v1600;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1604 = this1602;
  char* cast1605 = (char*)&(t1604->field2._M_local_buf);
  char* r1606 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1605);
  __retval1603 = r1606;
  char* t1607 = __retval1603;
  return t1607;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1608) {
bb1609:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1610;
  _Bool __retval1611;
  this1610 = v1608;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1612 = this1610;
    char* r1613 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1612);
    char* r1614 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1612);
    _Bool c1615 = ((r1613 == r1614)) ? 1 : 0;
    if (c1615) {
        unsigned long t1616 = t1612->_M_string_length;
        unsigned long c1617 = 15;
        _Bool c1618 = ((t1616 > c1617)) ? 1 : 0;
        if (c1618) {
          __builtin_unreachable();
        }
      _Bool c1619 = 1;
      __retval1611 = c1619;
      _Bool t1620 = __retval1611;
      return t1620;
    }
  _Bool c1621 = 0;
  __retval1611 = c1621;
  _Bool t1622 = __retval1611;
  return t1622;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1623, char* v1624, unsigned long v1625) {
bb1626:
  struct std____new_allocator_char_* this1627;
  char* __p1628;
  unsigned long __n1629;
  this1627 = v1623;
  __p1628 = v1624;
  __n1629 = v1625;
  struct std____new_allocator_char_* t1630 = this1627;
    unsigned long c1631 = 1;
    unsigned long c1632 = 16;
    _Bool c1633 = ((c1631 > c1632)) ? 1 : 0;
    if (c1633) {
      char* t1634 = __p1628;
      void* cast1635 = (void*)t1634;
      unsigned long t1636 = __n1629;
      unsigned long c1637 = 1;
      unsigned long b1638 = t1636 * c1637;
      unsigned long c1639 = 1;
      operator_delete_3(cast1635, b1638, c1639);
      return;
    }
  char* t1640 = __p1628;
  void* cast1641 = (void*)t1640;
  unsigned long t1642 = __n1629;
  unsigned long c1643 = 1;
  unsigned long b1644 = t1642 * c1643;
  operator_delete_2(cast1641, b1644);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1645, char* v1646, unsigned long v1647) {
bb1648:
  struct std__allocator_char_* this1649;
  char* __p1650;
  unsigned long __n1651;
  this1649 = v1645;
  __p1650 = v1646;
  __n1651 = v1647;
  struct std__allocator_char_* t1652 = this1649;
    _Bool r1653 = std____is_constant_evaluated();
    if (r1653) {
      char* t1654 = __p1650;
      void* cast1655 = (void*)t1654;
      operator_delete(cast1655);
      return;
    }
  struct std____new_allocator_char_* base1656 = (struct std____new_allocator_char_*)((char *)t1652 + 0);
  char* t1657 = __p1650;
  unsigned long t1658 = __n1651;
  std____new_allocator_char___deallocate(base1656, t1657, t1658);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1659, char* v1660, unsigned long v1661) {
bb1662:
  struct std__allocator_char_* __a1663;
  char* __p1664;
  unsigned long __n1665;
  __a1663 = v1659;
  __p1664 = v1660;
  __n1665 = v1661;
  struct std__allocator_char_* t1666 = __a1663;
  char* t1667 = __p1664;
  unsigned long t1668 = __n1665;
  std__allocator_char___deallocate(t1666, t1667, t1668);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1669, unsigned long v1670) {
bb1671:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1672;
  unsigned long __size1673;
  this1672 = v1669;
  __size1673 = v1670;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1674 = this1672;
  struct std__allocator_char_* r1675 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1674);
  char* r1676 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1674);
  unsigned long t1677 = __size1673;
  unsigned long c1678 = 1;
  unsigned long b1679 = t1677 + c1678;
  std__allocator_traits_std__allocator_char_____deallocate(r1675, r1676, b1679);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1680) {
bb1681:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1682;
  this1682 = v1680;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1683 = this1682;
    _Bool r1684 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1683);
    _Bool u1685 = !r1684;
    if (u1685) {
      unsigned long t1686 = t1683->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1683, t1686);
    }
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1687, struct std__allocator_char_* v1688) {
bb1689:
  struct std__allocator_char_* this1690;
  struct std__allocator_char_* __a1691;
  this1690 = v1687;
  __a1691 = v1688;
  struct std__allocator_char_* t1692 = this1690;
  struct std____new_allocator_char_* base1693 = (struct std____new_allocator_char_*)((char *)t1692 + 0);
  struct std__allocator_char_* t1694 = __a1691;
  struct std____new_allocator_char_* base1695 = (struct std____new_allocator_char_*)((char *)t1694 + 0);
  std____new_allocator_char_____new_allocator(base1693, base1695);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE37select_on_container_copy_constructionERKS0_
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* v1696) {
bb1697:
  struct std__allocator_char_* __rhs1698;
  struct std__allocator_char_ __retval1699;
  __rhs1698 = v1696;
  struct std__allocator_char_* t1700 = __rhs1698;
  std__allocator_char___allocator(&__retval1699, t1700);
  struct std__allocator_char_ t1701 = __retval1699;
  return t1701;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE17_S_select_on_copyERKS1_
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* v1702) {
bb1703:
  struct std__allocator_char_* __a1704;
  struct std__allocator_char_ __retval1705;
  __a1704 = v1702;
  struct std__allocator_char_* t1706 = __a1704;
  struct std__allocator_char_ r1707 = std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(t1706);
  __retval1705 = r1707;
  struct std__allocator_char_ t1708 = __retval1705;
  return t1708;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1709, char* v1710, struct std__allocator_char_* v1711) {
bb1712:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1713;
  char* __dat1714;
  struct std__allocator_char_* __a1715;
  this1713 = v1709;
  __dat1714 = v1710;
  __a1715 = v1711;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1716 = this1713;
  struct std__allocator_char_* base1717 = (struct std__allocator_char_*)((char *)t1716 + 0);
  struct std__allocator_char_* t1718 = __a1715;
  std__allocator_char___allocator(base1717, t1718);
    char* t1719 = __dat1714;
    t1716->_M_p = t1719;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructILb1EEEvPKcm
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_true_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1720, char* v1721, unsigned long v1722) {
bb1723:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1724;
  char* __str1725;
  unsigned long __n1726;
  this1724 = v1720;
  __str1725 = v1721;
  __n1726 = v1722;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1727 = this1724;
    unsigned long t1728 = __n1726;
    unsigned long c1729 = 15;
    _Bool c1730 = ((t1728 > c1729)) ? 1 : 0;
    if (c1730) {
      unsigned long c1731 = 0;
      char* r1732 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1727, &__n1726, c1731);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1727, r1732);
      unsigned long t1733 = __n1726;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1727, t1733);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1727);
    }
    unsigned long t1734 = __n1726;
    _Bool cast1735 = (_Bool)t1734;
    _Bool ternary1736;
    if (cast1735) {
      _Bool c1737 = 1;
      ternary1736 = (_Bool)c1737;
    } else {
      _Bool c1738 = 1;
      ternary1736 = (_Bool)c1738;
    }
    if (ternary1736) {
      char* r1739 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1727);
      char* t1740 = __str1725;
      unsigned long t1741 = __n1726;
      _Bool c1742 = 1;
      unsigned long cast1743 = (unsigned long)c1742;
      unsigned long b1744 = t1741 + cast1743;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1739, t1740, b1744);
    }
  unsigned long t1745 = __n1726;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1727, t1745);
    _Bool c1746 = 0;
    if (c1746) {
      char ref_tmp01747;
      unsigned long t1748 = __n1726;
      char* r1749 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1727);
      char* ptr1750 = &(r1749)[t1748];
      char c1751 = 0;
      ref_tmp01747 = c1751;
      std__char_traits_char___assign_2(ptr1750, &ref_tmp01747);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1752) {
bb1753:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1754;
  unsigned long __retval1755;
  unsigned long __sz1756;
  this1754 = v1752;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1757 = this1754;
  unsigned long t1758 = t1757->_M_string_length;
  __sz1756 = t1758;
    unsigned long t1759 = __sz1756;
    unsigned long r1760 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1757);
    _Bool c1761 = ((t1759 > r1760)) ? 1 : 0;
    if (c1761) {
      __builtin_unreachable();
    }
  unsigned long t1762 = __sz1756;
  __retval1755 = t1762;
  unsigned long t1763 = __retval1755;
  return t1763;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1764) {
bb1765:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1766;
  unsigned long __retval1767;
  this1766 = v1764;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1768 = this1766;
  unsigned long r1769 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1768);
  __retval1767 = r1769;
  unsigned long t1770 = __retval1767;
  return t1770;
}

