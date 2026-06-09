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
char _str_5[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_insert_5/main.cpp";
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
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_16[50] = "basic_string: construction from null is not valid";
char _str_17[24] = "basic_string::_M_create";
char _str_18[22] = "basic_string::replace";
char _str_19[25] = "basic_string::_M_replace";
char _str_20[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_21[21] = "basic_string::insert";
char _str_22[29] = "basic_string::_M_replace_aux";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p2);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_4(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p2, unsigned long p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2, unsigned long p3);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___assign(char* p0, unsigned long p1, char p2);
extern void* memset(void* p0, int p1, unsigned long p2);
char* std__char_traits_char___assign(char* p0, unsigned long p1, char p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(char* p0, unsigned long p1, char p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, unsigned long p3, char p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_5(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char p3);
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
        char* cast20 = (char*)&(_str_16);
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
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v32) {
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
  char* cast398 = (char*)&(_str_19);
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
      char* cast490 = (char*)&(_str_20);
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
  char* cast532 = (char*)&(_str_18);
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v553, unsigned long v554, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v555) {
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_4(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v666, unsigned long v667, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v668, unsigned long v669, unsigned long v670) {
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
  char* cast685 = (char*)&(_str_21);
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v694, unsigned long v695, char* v696, unsigned long v697) {
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v711, unsigned long v712, char* v713) {
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
  char* cast838 = (char*)&(_str_22);
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_5(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v885, unsigned long v886, unsigned long v887, char v888) {
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
  char* cast897 = (char*)&(_str_21);
  unsigned long r898 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t895, t896, cast897);
  unsigned long c899 = 0;
  unsigned long t900 = __n892;
  char t901 = __c893;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r902 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(t895, r898, c899, t900, t901);
  __retval894 = r902;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t903 = __retval894;
  return t903;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v904, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v905) {
bb906:
  struct std__basic_ostream_char__std__char_traits_char__* __os907;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str908;
  struct std__basic_ostream_char__std__char_traits_char__* __retval909;
  __os907 = v904;
  __str908 = v905;
  struct std__basic_ostream_char__std__char_traits_char__* t910 = __os907;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t911 = __str908;
  char* r912 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t911);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t913 = __str908;
  unsigned long r914 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t913);
  long cast915 = (long)r914;
  struct std__basic_ostream_char__std__char_traits_char__* r916 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t910, r912, cast915);
  __retval909 = r916;
  struct std__basic_ostream_char__std__char_traits_char__* t917 = __retval909;
  return t917;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v918, void* v919) {
bb920:
  struct std__basic_ostream_char__std__char_traits_char__* this921;
  void* __pf922;
  struct std__basic_ostream_char__std__char_traits_char__* __retval923;
  this921 = v918;
  __pf922 = v919;
  struct std__basic_ostream_char__std__char_traits_char__* t924 = this921;
  void* t925 = __pf922;
  struct std__basic_ostream_char__std__char_traits_char__* r926 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t925)(t924);
  __retval923 = r926;
  struct std__basic_ostream_char__std__char_traits_char__* t927 = __retval923;
  return t927;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v928) {
bb929:
  struct std__basic_ostream_char__std__char_traits_char__* __os930;
  struct std__basic_ostream_char__std__char_traits_char__* __retval931;
  __os930 = v928;
  struct std__basic_ostream_char__std__char_traits_char__* t932 = __os930;
  struct std__basic_ostream_char__std__char_traits_char__* r933 = std__ostream__flush(t932);
  __retval931 = r933;
  struct std__basic_ostream_char__std__char_traits_char__* t934 = __retval931;
  return t934;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v935) {
bb936:
  struct std__ctype_char_* __f937;
  struct std__ctype_char_* __retval938;
  __f937 = v935;
    struct std__ctype_char_* t939 = __f937;
    _Bool cast940 = (_Bool)t939;
    _Bool u941 = !cast940;
    if (u941) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t942 = __f937;
  __retval938 = t942;
  struct std__ctype_char_* t943 = __retval938;
  return t943;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v944, char v945) {
bb946:
  struct std__ctype_char_* this947;
  char __c948;
  char __retval949;
  this947 = v944;
  __c948 = v945;
  struct std__ctype_char_* t950 = this947;
    char t951 = t950->_M_widen_ok;
    _Bool cast952 = (_Bool)t951;
    if (cast952) {
      char t953 = __c948;
      unsigned char cast954 = (unsigned char)t953;
      unsigned long cast955 = (unsigned long)cast954;
      char t956 = t950->_M_widen[cast955];
      __retval949 = t956;
      char t957 = __retval949;
      return t957;
    }
  std__ctype_char____M_widen_init___const(t950);
  char t958 = __c948;
  void** v959 = (void**)t950;
  void* v960 = *((void**)v959);
  char vcall963 = (char)__VERIFIER_virtual_call_char_char(t950, 6, t958);
  __retval949 = vcall963;
  char t964 = __retval949;
  return t964;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v965, char v966) {
bb967:
  struct std__basic_ios_char__std__char_traits_char__* this968;
  char __c969;
  char __retval970;
  this968 = v965;
  __c969 = v966;
  struct std__basic_ios_char__std__char_traits_char__* t971 = this968;
  struct std__ctype_char_* t972 = t971->_M_ctype;
  struct std__ctype_char_* r973 = std__ctype_char__const__std____check_facet_std__ctype_char___(t972);
  char t974 = __c969;
  char r975 = std__ctype_char___widen_char__const(r973, t974);
  __retval970 = r975;
  char t976 = __retval970;
  return t976;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v977) {
bb978:
  struct std__basic_ostream_char__std__char_traits_char__* __os979;
  struct std__basic_ostream_char__std__char_traits_char__* __retval980;
  __os979 = v977;
  struct std__basic_ostream_char__std__char_traits_char__* t981 = __os979;
  struct std__basic_ostream_char__std__char_traits_char__* t982 = __os979;
  void** v983 = (void**)t982;
  void* v984 = *((void**)v983);
  unsigned char* cast985 = (unsigned char*)v984;
  long c986 = -24;
  unsigned char* ptr987 = &(cast985)[c986];
  long* cast988 = (long*)ptr987;
  long t989 = *cast988;
  unsigned char* cast990 = (unsigned char*)t982;
  unsigned char* ptr991 = &(cast990)[t989];
  struct std__basic_ostream_char__std__char_traits_char__* cast992 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr991;
  struct std__basic_ios_char__std__char_traits_char__* cast993 = (struct std__basic_ios_char__std__char_traits_char__*)cast992;
  char c994 = 10;
  char r995 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast993, c994);
  struct std__basic_ostream_char__std__char_traits_char__* r996 = std__ostream__put(t981, r995);
  struct std__basic_ostream_char__std__char_traits_char__* r997 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r996);
  __retval980 = r997;
  struct std__basic_ostream_char__std__char_traits_char__* t998 = __retval980;
  return t998;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v999) {
bb1000:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1001;
  this1001 = v999;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1002 = this1001;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1002);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1002->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb1003:
  int __retval1004;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str1005;
  struct std__allocator_char_ ref_tmp01006;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str21007;
  struct std__allocator_char_ ref_tmp11008;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str31009;
  struct std__allocator_char_ ref_tmp21010;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ it1011;
  int c1012 = 0;
  __retval1004 = c1012;
  char* cast1013 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp01006);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str1005, cast1013, &ref_tmp01006);
  {
    std__allocator_char____allocator(&ref_tmp01006);
  }
    char* cast1014 = (char*)&(_str_1);
    std__allocator_char___allocator_2(&ref_tmp11008);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str21007, cast1014, &ref_tmp11008);
    {
      std__allocator_char____allocator(&ref_tmp11008);
    }
      char* cast1015 = (char*)&(_str_2);
      std__allocator_char___allocator_2(&ref_tmp21010);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str31009, cast1015, &ref_tmp21010);
      {
        std__allocator_char____allocator(&ref_tmp21010);
      }
        __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&it1011);
        unsigned long c1016 = 6;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1017 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_3(&str1005, c1016, &str21007);
        char* cast1018 = (char*)&(_str_3);
        _Bool r1019 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1005, cast1018);
        if (r1019) {
        } else {
          char* cast1020 = (char*)&(_str_4);
          char* c1021 = _str_5;
          unsigned int c1022 = 23;
          char* cast1023 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1020, c1021, c1022, cast1023);
        }
        unsigned long c1024 = 6;
        unsigned long c1025 = 3;
        unsigned long c1026 = 4;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1027 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_4(&str1005, c1024, &str31009, c1025, c1026);
        char* cast1028 = (char*)&(_str_6);
        _Bool r1029 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1005, cast1028);
        if (r1029) {
        } else {
          char* cast1030 = (char*)&(_str_7);
          char* c1031 = _str_5;
          unsigned int c1032 = 26;
          char* cast1033 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1030, c1031, c1032, cast1033);
        }
        unsigned long c1034 = 10;
        char* cast1035 = (char*)&(_str_8);
        unsigned long c1036 = 8;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1037 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_2(&str1005, c1034, cast1035, c1036);
        char* cast1038 = (char*)&(_str_9);
        _Bool r1039 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1005, cast1038);
        if (r1039) {
        } else {
          char* cast1040 = (char*)&(_str_10);
          char* c1041 = _str_5;
          unsigned int c1042 = 29;
          char* cast1043 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1040, c1041, c1042, cast1043);
        }
        unsigned long c1044 = 10;
        char* cast1045 = (char*)&(_str_11);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1046 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert(&str1005, c1044, cast1045);
        char* cast1047 = (char*)&(_str_12);
        _Bool r1048 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1005, cast1047);
        if (r1048) {
        } else {
          char* cast1049 = (char*)&(_str_13);
          char* c1050 = _str_5;
          unsigned int c1051 = 32;
          char* cast1052 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1049, c1050, c1051, cast1052);
        }
        unsigned long c1053 = 15;
        unsigned long c1054 = 1;
        char c1055 = 58;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1056 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_5(&str1005, c1053, c1054, c1055);
        char* cast1057 = (char*)&(_str_14);
        _Bool r1058 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str1005, cast1057);
        if (r1058) {
        } else {
          char* cast1059 = (char*)&(_str_15);
          char* c1060 = _str_5;
          unsigned int c1061 = 35;
          char* cast1062 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1059, c1060, c1061, cast1062);
        }
        struct std__basic_ostream_char__std__char_traits_char__* r1063 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str1005);
        struct std__basic_ostream_char__std__char_traits_char__* r1064 = std__ostream__operator___std__ostream_____(r1063, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        int c1065 = 0;
        __retval1004 = c1065;
        int t1066 = __retval1004;
        int ret_val1067 = t1066;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str31009);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str21007);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str1005);
        }
        return ret_val1067;
  int t1068 = __retval1004;
  return t1068;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1069) {
bb1070:
  struct std____new_allocator_char_* this1071;
  this1071 = v1069;
  struct std____new_allocator_char_* t1072 = this1071;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1073) {
bb1074:
  char* __r1075;
  char* __retval1076;
  __r1075 = v1073;
  char* t1077 = __r1075;
  __retval1076 = t1077;
  char* t1078 = __retval1076;
  return t1078;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1079) {
bb1080:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1081;
  char* __retval1082;
  this1081 = v1079;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1083 = this1081;
  char* cast1084 = (char*)&(t1083->field2._M_local_buf);
  char* r1085 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1084);
  __retval1082 = r1085;
  char* t1086 = __retval1082;
  return t1086;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1087, char* v1088, struct std__allocator_char_* v1089) {
bb1090:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1091;
  char* __dat1092;
  struct std__allocator_char_* __a1093;
  this1091 = v1087;
  __dat1092 = v1088;
  __a1093 = v1089;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1094 = this1091;
  struct std__allocator_char_* base1095 = (struct std__allocator_char_*)((char *)t1094 + 0);
  struct std__allocator_char_* t1096 = __a1093;
  std__allocator_char___allocator(base1095, t1096);
    char* t1097 = __dat1092;
    t1094->_M_p = t1097;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1098:
  _Bool __retval1099;
    _Bool c1100 = 0;
    __retval1099 = c1100;
    _Bool t1101 = __retval1099;
    return t1101;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1102, char* v1103) {
bb1104:
  char* __c11105;
  char* __c21106;
  _Bool __retval1107;
  __c11105 = v1102;
  __c21106 = v1103;
  char* t1108 = __c11105;
  char t1109 = *t1108;
  int cast1110 = (int)t1109;
  char* t1111 = __c21106;
  char t1112 = *t1111;
  int cast1113 = (int)t1112;
  _Bool c1114 = ((cast1110 == cast1113)) ? 1 : 0;
  __retval1107 = c1114;
  _Bool t1115 = __retval1107;
  return t1115;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1116) {
bb1117:
  char* __p1118;
  unsigned long __retval1119;
  unsigned long __i1120;
  __p1118 = v1116;
  unsigned long c1121 = 0;
  __i1120 = c1121;
    char ref_tmp01122;
    while (1) {
      unsigned long t1123 = __i1120;
      char* t1124 = __p1118;
      char* ptr1125 = &(t1124)[t1123];
      char c1126 = 0;
      ref_tmp01122 = c1126;
      _Bool r1127 = __gnu_cxx__char_traits_char___eq(ptr1125, &ref_tmp01122);
      _Bool u1128 = !r1127;
      if (!u1128) break;
      unsigned long t1129 = __i1120;
      unsigned long u1130 = t1129 + 1;
      __i1120 = u1130;
    }
  unsigned long t1131 = __i1120;
  __retval1119 = t1131;
  unsigned long t1132 = __retval1119;
  return t1132;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1133) {
bb1134:
  char* __s1135;
  unsigned long __retval1136;
  __s1135 = v1133;
    _Bool r1137 = std____is_constant_evaluated();
    if (r1137) {
      char* t1138 = __s1135;
      unsigned long r1139 = __gnu_cxx__char_traits_char___length(t1138);
      __retval1136 = r1139;
      unsigned long t1140 = __retval1136;
      return t1140;
    }
  char* t1141 = __s1135;
  unsigned long r1142 = strlen(t1141);
  __retval1136 = r1142;
  unsigned long t1143 = __retval1136;
  return t1143;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v1144, char* v1145, struct std__random_access_iterator_tag v1146) {
bb1147:
  char* __first1148;
  char* __last1149;
  struct std__random_access_iterator_tag unnamed1150;
  long __retval1151;
  __first1148 = v1144;
  __last1149 = v1145;
  unnamed1150 = v1146;
  char* t1152 = __last1149;
  char* t1153 = __first1148;
  long diff1154 = t1152 - t1153;
  __retval1151 = diff1154;
  long t1155 = __retval1151;
  return t1155;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v1156) {
bb1157:
  char** unnamed1158;
  struct std__random_access_iterator_tag __retval1159;
  unnamed1158 = v1156;
  struct std__random_access_iterator_tag t1160 = __retval1159;
  return t1160;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v1161, char* v1162) {
bb1163:
  char* __first1164;
  char* __last1165;
  long __retval1166;
  struct std__random_access_iterator_tag agg_tmp01167;
  __first1164 = v1161;
  __last1165 = v1162;
  char* t1168 = __first1164;
  char* t1169 = __last1165;
  struct std__random_access_iterator_tag r1170 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first1164);
  agg_tmp01167 = r1170;
  struct std__random_access_iterator_tag t1171 = agg_tmp01167;
  long r1172 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t1168, t1169, t1171);
  __retval1166 = r1172;
  long t1173 = __retval1166;
  return t1173;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1174, char* v1175) {
bb1176:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1177;
  char* __p1178;
  this1177 = v1174;
  __p1178 = v1175;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1179 = this1177;
  char* t1180 = __p1178;
  t1179->_M_dataplus._M_p = t1180;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v1181) {
bb1182:
  struct std__allocator_char_* __a1183;
  unsigned long __retval1184;
  __a1183 = v1181;
  unsigned long c1185 = -1;
  unsigned long c1186 = 1;
  unsigned long b1187 = c1185 / c1186;
  __retval1184 = b1187;
  unsigned long t1188 = __retval1184;
  return t1188;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1189) {
bb1190:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1191;
  struct std__allocator_char_* __retval1192;
  this1191 = v1189;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1193 = this1191;
  struct std__allocator_char_* base1194 = (struct std__allocator_char_*)((char *)&(t1193->_M_dataplus) + 0);
  __retval1192 = base1194;
  struct std__allocator_char_* t1195 = __retval1192;
  return t1195;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1196, unsigned long* v1197) {
bb1198:
  unsigned long* __a1199;
  unsigned long* __b1200;
  unsigned long* __retval1201;
  __a1199 = v1196;
  __b1200 = v1197;
    unsigned long* t1202 = __b1200;
    unsigned long t1203 = *t1202;
    unsigned long* t1204 = __a1199;
    unsigned long t1205 = *t1204;
    _Bool c1206 = ((t1203 < t1205)) ? 1 : 0;
    if (c1206) {
      unsigned long* t1207 = __b1200;
      __retval1201 = t1207;
      unsigned long* t1208 = __retval1201;
      return t1208;
    }
  unsigned long* t1209 = __a1199;
  __retval1201 = t1209;
  unsigned long* t1210 = __retval1201;
  return t1210;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1211) {
bb1212:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1213;
  unsigned long __retval1214;
  unsigned long __diffmax1215;
  unsigned long __allocmax1216;
  this1213 = v1211;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1217 = this1213;
  unsigned long c1218 = 9223372036854775807;
  __diffmax1215 = c1218;
  struct std__allocator_char_* r1219 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1217);
  unsigned long r1220 = std__allocator_traits_std__allocator_char_____max_size(r1219);
  __allocmax1216 = r1220;
  unsigned long* r1221 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1215, &__allocmax1216);
  unsigned long t1222 = *r1221;
  unsigned long c1223 = 1;
  unsigned long b1224 = t1222 - c1223;
  __retval1214 = b1224;
  unsigned long t1225 = __retval1214;
  return t1225;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v1226) {
bb1227:
  struct std____new_allocator_char_* this1228;
  unsigned long __retval1229;
  this1228 = v1226;
  struct std____new_allocator_char_* t1230 = this1228;
  unsigned long c1231 = 9223372036854775807;
  unsigned long c1232 = 1;
  unsigned long b1233 = c1231 / c1232;
  __retval1229 = b1233;
  unsigned long t1234 = __retval1229;
  return t1234;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v1235, unsigned long v1236, void* v1237) {
bb1238:
  struct std____new_allocator_char_* this1239;
  unsigned long __n1240;
  void* unnamed1241;
  char* __retval1242;
  this1239 = v1235;
  __n1240 = v1236;
  unnamed1241 = v1237;
  struct std____new_allocator_char_* t1243 = this1239;
    unsigned long t1244 = __n1240;
    unsigned long r1245 = std____new_allocator_char____M_max_size___const(t1243);
    _Bool c1246 = ((t1244 > r1245)) ? 1 : 0;
    if (c1246) {
        unsigned long t1247 = __n1240;
        unsigned long c1248 = -1;
        unsigned long c1249 = 1;
        unsigned long b1250 = c1248 / c1249;
        _Bool c1251 = ((t1247 > b1250)) ? 1 : 0;
        if (c1251) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1252 = 1;
    unsigned long c1253 = 16;
    _Bool c1254 = ((c1252 > c1253)) ? 1 : 0;
    if (c1254) {
      unsigned long __al1255;
      unsigned long c1256 = 1;
      __al1255 = c1256;
      unsigned long t1257 = __n1240;
      unsigned long c1258 = 1;
      unsigned long b1259 = t1257 * c1258;
      unsigned long t1260 = __al1255;
      void* r1261 = operator_new_2(b1259, t1260);
      char* cast1262 = (char*)r1261;
      __retval1242 = cast1262;
      char* t1263 = __retval1242;
      return t1263;
    }
  unsigned long t1264 = __n1240;
  unsigned long c1265 = 1;
  unsigned long b1266 = t1264 * c1265;
  void* r1267 = operator_new(b1266);
  char* cast1268 = (char*)r1267;
  __retval1242 = cast1268;
  char* t1269 = __retval1242;
  return t1269;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1270, unsigned long v1271) {
bb1272:
  struct std__allocator_char_* this1273;
  unsigned long __n1274;
  char* __retval1275;
  this1273 = v1270;
  __n1274 = v1271;
  struct std__allocator_char_* t1276 = this1273;
    _Bool r1277 = std____is_constant_evaluated();
    if (r1277) {
        unsigned long t1278 = __n1274;
        unsigned long c1279 = 1;
        unsigned long ovr1280;
        _Bool ovf1281 = __builtin_mul_overflow(t1278, c1279, &ovr1280);
        __n1274 = ovr1280;
        if (ovf1281) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1282 = __n1274;
      void* r1283 = operator_new(t1282);
      char* cast1284 = (char*)r1283;
      __retval1275 = cast1284;
      char* t1285 = __retval1275;
      return t1285;
    }
  struct std____new_allocator_char_* base1286 = (struct std____new_allocator_char_*)((char *)t1276 + 0);
  unsigned long t1287 = __n1274;
  void* c1288 = ((void*)0);
  char* r1289 = std____new_allocator_char___allocate(base1286, t1287, c1288);
  __retval1275 = r1289;
  char* t1290 = __retval1275;
  return t1290;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1291, unsigned long v1292) {
bb1293:
  struct std__allocator_char_* __a1294;
  unsigned long __n1295;
  char* __retval1296;
  __a1294 = v1291;
  __n1295 = v1292;
  struct std__allocator_char_* t1297 = __a1294;
  unsigned long t1298 = __n1295;
  char* r1299 = std__allocator_char___allocate(t1297, t1298);
  __retval1296 = r1299;
  char* t1300 = __retval1296;
  return t1300;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1301, unsigned long v1302) {
bb1303:
  struct std__allocator_char_* __a1304;
  unsigned long __n1305;
  char* __retval1306;
  char* __p1307;
  __a1304 = v1301;
  __n1305 = v1302;
  struct std__allocator_char_* t1308 = __a1304;
  unsigned long t1309 = __n1305;
  char* r1310 = std__allocator_traits_std__allocator_char_____allocate(t1308, t1309);
  __p1307 = r1310;
  char* t1311 = __p1307;
  __retval1306 = t1311;
  char* t1312 = __retval1306;
  return t1312;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1313) {
bb1314:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1315;
  struct std__allocator_char_* __retval1316;
  this1315 = v1313;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1317 = this1315;
  struct std__allocator_char_* base1318 = (struct std__allocator_char_*)((char *)&(t1317->_M_dataplus) + 0);
  __retval1316 = base1318;
  struct std__allocator_char_* t1319 = __retval1316;
  return t1319;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1320, unsigned long* v1321, unsigned long v1322) {
bb1323:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1324;
  unsigned long* __capacity1325;
  unsigned long __old_capacity1326;
  char* __retval1327;
  this1324 = v1320;
  __capacity1325 = v1321;
  __old_capacity1326 = v1322;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1328 = this1324;
    unsigned long* t1329 = __capacity1325;
    unsigned long t1330 = *t1329;
    unsigned long r1331 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1328);
    _Bool c1332 = ((t1330 > r1331)) ? 1 : 0;
    if (c1332) {
      char* cast1333 = (char*)&(_str_17);
      std____throw_length_error(cast1333);
    }
    unsigned long* t1334 = __capacity1325;
    unsigned long t1335 = *t1334;
    unsigned long t1336 = __old_capacity1326;
    _Bool c1337 = ((t1335 > t1336)) ? 1 : 0;
    _Bool ternary1338;
    if (c1337) {
      unsigned long* t1339 = __capacity1325;
      unsigned long t1340 = *t1339;
      unsigned long c1341 = 2;
      unsigned long t1342 = __old_capacity1326;
      unsigned long b1343 = c1341 * t1342;
      _Bool c1344 = ((t1340 < b1343)) ? 1 : 0;
      ternary1338 = (_Bool)c1344;
    } else {
      _Bool c1345 = 0;
      ternary1338 = (_Bool)c1345;
    }
    if (ternary1338) {
      unsigned long c1346 = 2;
      unsigned long t1347 = __old_capacity1326;
      unsigned long b1348 = c1346 * t1347;
      unsigned long* t1349 = __capacity1325;
      *t1349 = b1348;
        unsigned long* t1350 = __capacity1325;
        unsigned long t1351 = *t1350;
        unsigned long r1352 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1328);
        _Bool c1353 = ((t1351 > r1352)) ? 1 : 0;
        if (c1353) {
          unsigned long r1354 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1328);
          unsigned long* t1355 = __capacity1325;
          *t1355 = r1354;
        }
    }
  struct std__allocator_char_* r1356 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1328);
  unsigned long* t1357 = __capacity1325;
  unsigned long t1358 = *t1357;
  unsigned long c1359 = 1;
  unsigned long b1360 = t1358 + c1359;
  char* r1361 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1356, b1360);
  __retval1327 = r1361;
  char* t1362 = __retval1327;
  return t1362;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1363, unsigned long v1364) {
bb1365:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1366;
  unsigned long __capacity1367;
  this1366 = v1363;
  __capacity1367 = v1364;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1368 = this1366;
  unsigned long t1369 = __capacity1367;
  t1368->field2._M_allocated_capacity = t1369;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1370:
  _Bool __retval1371;
    _Bool c1372 = 0;
    __retval1371 = c1372;
    _Bool t1373 = __retval1371;
    return t1373;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1374) {
bb1375:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1376;
  this1376 = v1374;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1377 = this1376;
    _Bool r1378 = std__is_constant_evaluated();
    if (r1378) {
        unsigned long __i1379;
        unsigned long c1380 = 0;
        __i1379 = c1380;
        while (1) {
          unsigned long t1382 = __i1379;
          unsigned long c1383 = 15;
          _Bool c1384 = ((t1382 <= c1383)) ? 1 : 0;
          if (!c1384) break;
          char c1385 = 0;
          unsigned long t1386 = __i1379;
          t1377->field2._M_local_buf[t1386] = c1385;
        for_step1381: ;
          unsigned long t1387 = __i1379;
          unsigned long u1388 = t1387 + 1;
          __i1379 = u1388;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1389, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1390) {
bb1391:
  struct _Guard* this1392;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1393;
  this1392 = v1389;
  __s1393 = v1390;
  struct _Guard* t1394 = this1392;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1395 = __s1393;
  t1394->_M_guarded = t1395;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1396, char* v1397) {
bb1398:
  char* __location1399;
  char* __args1400;
  char* __retval1401;
  void* __loc1402;
  __location1399 = v1396;
  __args1400 = v1397;
  char* t1403 = __location1399;
  void* cast1404 = (void*)t1403;
  __loc1402 = cast1404;
    void* t1405 = __loc1402;
    char* cast1406 = (char*)t1405;
    char* t1407 = __args1400;
    char t1408 = *t1407;
    *cast1406 = t1408;
    __retval1401 = cast1406;
    char* t1409 = __retval1401;
    return t1409;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign_2(char* v1410, char* v1411) {
bb1412:
  char* __c11413;
  char* __c21414;
  __c11413 = v1410;
  __c21414 = v1411;
    _Bool r1415 = std____is_constant_evaluated();
    if (r1415) {
      char* t1416 = __c11413;
      char* t1417 = __c21414;
      char* r1418 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1416, t1417);
    } else {
      char* t1419 = __c21414;
      char t1420 = *t1419;
      char* t1421 = __c11413;
      *t1421 = t1420;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1422, char* v1423, unsigned long v1424) {
bb1425:
  char* __s11426;
  char* __s21427;
  unsigned long __n1428;
  char* __retval1429;
  __s11426 = v1422;
  __s21427 = v1423;
  __n1428 = v1424;
    unsigned long t1430 = __n1428;
    unsigned long c1431 = 0;
    _Bool c1432 = ((t1430 == c1431)) ? 1 : 0;
    if (c1432) {
      char* t1433 = __s11426;
      __retval1429 = t1433;
      char* t1434 = __retval1429;
      return t1434;
    }
    _Bool r1435 = std____is_constant_evaluated();
    if (r1435) {
        unsigned long __i1436;
        unsigned long c1437 = 0;
        __i1436 = c1437;
        while (1) {
          unsigned long t1439 = __i1436;
          unsigned long t1440 = __n1428;
          _Bool c1441 = ((t1439 < t1440)) ? 1 : 0;
          if (!c1441) break;
          char* t1442 = __s11426;
          unsigned long t1443 = __i1436;
          char* ptr1444 = &(t1442)[t1443];
          unsigned long t1445 = __i1436;
          char* t1446 = __s21427;
          char* ptr1447 = &(t1446)[t1445];
          char* r1448 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1444, ptr1447);
        for_step1438: ;
          unsigned long t1449 = __i1436;
          unsigned long u1450 = t1449 + 1;
          __i1436 = u1450;
        }
      char* t1451 = __s11426;
      __retval1429 = t1451;
      char* t1452 = __retval1429;
      return t1452;
    }
  char* t1453 = __s11426;
  void* cast1454 = (void*)t1453;
  char* t1455 = __s21427;
  void* cast1456 = (void*)t1455;
  unsigned long t1457 = __n1428;
  unsigned long c1458 = 1;
  unsigned long b1459 = t1457 * c1458;
  void* r1460 = memcpy(cast1454, cast1456, b1459);
  char* t1461 = __s11426;
  __retval1429 = t1461;
  char* t1462 = __retval1429;
  return t1462;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1463, char* v1464, unsigned long v1465) {
bb1466:
  char* __s11467;
  char* __s21468;
  unsigned long __n1469;
  char* __retval1470;
  __s11467 = v1463;
  __s21468 = v1464;
  __n1469 = v1465;
    unsigned long t1471 = __n1469;
    unsigned long c1472 = 0;
    _Bool c1473 = ((t1471 == c1472)) ? 1 : 0;
    if (c1473) {
      char* t1474 = __s11467;
      __retval1470 = t1474;
      char* t1475 = __retval1470;
      return t1475;
    }
    _Bool r1476 = std____is_constant_evaluated();
    if (r1476) {
      char* t1477 = __s11467;
      char* t1478 = __s21468;
      unsigned long t1479 = __n1469;
      char* r1480 = __gnu_cxx__char_traits_char___copy(t1477, t1478, t1479);
      __retval1470 = r1480;
      char* t1481 = __retval1470;
      return t1481;
    }
  char* t1482 = __s11467;
  void* cast1483 = (void*)t1482;
  char* t1484 = __s21468;
  void* cast1485 = (void*)t1484;
  unsigned long t1486 = __n1469;
  void* r1487 = memcpy(cast1483, cast1485, t1486);
  char* cast1488 = (char*)r1487;
  __retval1470 = cast1488;
  char* t1489 = __retval1470;
  return t1489;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1490, char* v1491, unsigned long v1492) {
bb1493:
  char* __d1494;
  char* __s1495;
  unsigned long __n1496;
  __d1494 = v1490;
  __s1495 = v1491;
  __n1496 = v1492;
    unsigned long t1497 = __n1496;
    unsigned long c1498 = 1;
    _Bool c1499 = ((t1497 == c1498)) ? 1 : 0;
    if (c1499) {
      char* t1500 = __d1494;
      char* t1501 = __s1495;
      std__char_traits_char___assign_2(t1500, t1501);
    } else {
      char* t1502 = __d1494;
      char* t1503 = __s1495;
      unsigned long t1504 = __n1496;
      char* r1505 = std__char_traits_char___copy(t1502, t1503, t1504);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1506) {
bb1507:
  char* __it1508;
  char* __retval1509;
  __it1508 = v1506;
  char* t1510 = __it1508;
  __retval1509 = t1510;
  char* t1511 = __retval1509;
  return t1511;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1512, char* v1513, char* v1514) {
bb1515:
  char* __p1516;
  char* __k11517;
  char* __k21518;
  __p1516 = v1512;
  __k11517 = v1513;
  __k21518 = v1514;
    char* t1519 = __p1516;
    char* t1520 = __k11517;
    char* r1521 = char_const__std____niter_base_char_const__(t1520);
    char* t1522 = __k21518;
    char* t1523 = __k11517;
    long diff1524 = t1522 - t1523;
    unsigned long cast1525 = (unsigned long)diff1524;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1519, r1521, cast1525);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1526) {
bb1527:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1528;
  char* __retval1529;
  this1528 = v1526;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1530 = this1528;
  char* t1531 = t1530->_M_dataplus._M_p;
  __retval1529 = t1531;
  char* t1532 = __retval1529;
  return t1532;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1533, unsigned long v1534) {
bb1535:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1536;
  unsigned long __length1537;
  this1536 = v1533;
  __length1537 = v1534;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1538 = this1536;
  unsigned long t1539 = __length1537;
  t1538->_M_string_length = t1539;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1540, unsigned long v1541) {
bb1542:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1543;
  unsigned long __n1544;
  char ref_tmp01545;
  this1543 = v1540;
  __n1544 = v1541;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1546 = this1543;
  unsigned long t1547 = __n1544;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1546, t1547);
  unsigned long t1548 = __n1544;
  char* r1549 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1546);
  char* ptr1550 = &(r1549)[t1548];
  char c1551 = 0;
  ref_tmp01545 = c1551;
  std__char_traits_char___assign_2(ptr1550, &ref_tmp01545);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1552) {
bb1553:
  struct _Guard* this1554;
  this1554 = v1552;
  struct _Guard* t1555 = this1554;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1556 = t1555->_M_guarded;
    _Bool cast1557 = (_Bool)t1556;
    if (cast1557) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1558 = t1555->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1558);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1559, char* v1560, char* v1561, struct std__forward_iterator_tag v1562) {
bb1563:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1564;
  char* __beg1565;
  char* __end1566;
  struct std__forward_iterator_tag unnamed1567;
  unsigned long __dnew1568;
  struct _Guard __guard1569;
  this1564 = v1559;
  __beg1565 = v1560;
  __end1566 = v1561;
  unnamed1567 = v1562;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1570 = this1564;
  char* t1571 = __beg1565;
  char* t1572 = __end1566;
  long r1573 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1571, t1572);
  unsigned long cast1574 = (unsigned long)r1573;
  __dnew1568 = cast1574;
    unsigned long t1575 = __dnew1568;
    unsigned long c1576 = 15;
    _Bool c1577 = ((t1575 > c1576)) ? 1 : 0;
    if (c1577) {
      unsigned long c1578 = 0;
      char* r1579 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1570, &__dnew1568, c1578);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1570, r1579);
      unsigned long t1580 = __dnew1568;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1570, t1580);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1570);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1569, t1570);
    char* r1581 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1570);
    char* t1582 = __beg1565;
    char* t1583 = __end1566;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1581, t1582, t1583);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1584 = ((void*)0);
    __guard1569._M_guarded = c1584;
    unsigned long t1585 = __dnew1568;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1570, t1585);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1569);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1586) {
bb1587:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1588;
  this1588 = v1586;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1589 = this1588;
  {
    struct std__allocator_char_* base1590 = (struct std__allocator_char_*)((char *)t1589 + 0);
    std__allocator_char____allocator(base1590);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1591, struct std____new_allocator_char_* v1592) {
bb1593:
  struct std____new_allocator_char_* this1594;
  struct std____new_allocator_char_* unnamed1595;
  this1594 = v1591;
  unnamed1595 = v1592;
  struct std____new_allocator_char_* t1596 = this1594;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1597, struct std__allocator_char_* v1598) {
bb1599:
  struct std__allocator_char_* this1600;
  struct std__allocator_char_* __a1601;
  this1600 = v1597;
  __a1601 = v1598;
  struct std__allocator_char_* t1602 = this1600;
  struct std____new_allocator_char_* base1603 = (struct std____new_allocator_char_*)((char *)t1602 + 0);
  struct std__allocator_char_* t1604 = __a1601;
  struct std____new_allocator_char_* base1605 = (struct std____new_allocator_char_*)((char *)t1604 + 0);
  std____new_allocator_char_____new_allocator(base1603, base1605);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1606) {
bb1607:
  char* __r1608;
  char* __retval1609;
  __r1608 = v1606;
  char* t1610 = __r1608;
  __retval1609 = t1610;
  char* t1611 = __retval1609;
  return t1611;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1612) {
bb1613:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1614;
  char* __retval1615;
  this1614 = v1612;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1616 = this1614;
  char* cast1617 = (char*)&(t1616->field2._M_local_buf);
  char* r1618 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1617);
  __retval1615 = r1618;
  char* t1619 = __retval1615;
  return t1619;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1620) {
bb1621:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1622;
  _Bool __retval1623;
  this1622 = v1620;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1624 = this1622;
    char* r1625 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1624);
    char* r1626 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1624);
    _Bool c1627 = ((r1625 == r1626)) ? 1 : 0;
    if (c1627) {
        unsigned long t1628 = t1624->_M_string_length;
        unsigned long c1629 = 15;
        _Bool c1630 = ((t1628 > c1629)) ? 1 : 0;
        if (c1630) {
          __builtin_unreachable();
        }
      _Bool c1631 = 1;
      __retval1623 = c1631;
      _Bool t1632 = __retval1623;
      return t1632;
    }
  _Bool c1633 = 0;
  __retval1623 = c1633;
  _Bool t1634 = __retval1623;
  return t1634;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1635, char* v1636, unsigned long v1637) {
bb1638:
  struct std____new_allocator_char_* this1639;
  char* __p1640;
  unsigned long __n1641;
  this1639 = v1635;
  __p1640 = v1636;
  __n1641 = v1637;
  struct std____new_allocator_char_* t1642 = this1639;
    unsigned long c1643 = 1;
    unsigned long c1644 = 16;
    _Bool c1645 = ((c1643 > c1644)) ? 1 : 0;
    if (c1645) {
      char* t1646 = __p1640;
      void* cast1647 = (void*)t1646;
      unsigned long t1648 = __n1641;
      unsigned long c1649 = 1;
      unsigned long b1650 = t1648 * c1649;
      unsigned long c1651 = 1;
      operator_delete_3(cast1647, b1650, c1651);
      return;
    }
  char* t1652 = __p1640;
  void* cast1653 = (void*)t1652;
  unsigned long t1654 = __n1641;
  unsigned long c1655 = 1;
  unsigned long b1656 = t1654 * c1655;
  operator_delete_2(cast1653, b1656);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1657, char* v1658, unsigned long v1659) {
bb1660:
  struct std__allocator_char_* this1661;
  char* __p1662;
  unsigned long __n1663;
  this1661 = v1657;
  __p1662 = v1658;
  __n1663 = v1659;
  struct std__allocator_char_* t1664 = this1661;
    _Bool r1665 = std____is_constant_evaluated();
    if (r1665) {
      char* t1666 = __p1662;
      void* cast1667 = (void*)t1666;
      operator_delete(cast1667);
      return;
    }
  struct std____new_allocator_char_* base1668 = (struct std____new_allocator_char_*)((char *)t1664 + 0);
  char* t1669 = __p1662;
  unsigned long t1670 = __n1663;
  std____new_allocator_char___deallocate(base1668, t1669, t1670);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1671, char* v1672, unsigned long v1673) {
bb1674:
  struct std__allocator_char_* __a1675;
  char* __p1676;
  unsigned long __n1677;
  __a1675 = v1671;
  __p1676 = v1672;
  __n1677 = v1673;
  struct std__allocator_char_* t1678 = __a1675;
  char* t1679 = __p1676;
  unsigned long t1680 = __n1677;
  std__allocator_char___deallocate(t1678, t1679, t1680);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1681, unsigned long v1682) {
bb1683:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1684;
  unsigned long __size1685;
  this1684 = v1681;
  __size1685 = v1682;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1686 = this1684;
  struct std__allocator_char_* r1687 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1686);
  char* r1688 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1686);
  unsigned long t1689 = __size1685;
  unsigned long c1690 = 1;
  unsigned long b1691 = t1689 + c1690;
  std__allocator_traits_std__allocator_char_____deallocate(r1687, r1688, b1691);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1692) {
bb1693:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1694;
  this1694 = v1692;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1695 = this1694;
    _Bool r1696 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1695);
    _Bool u1697 = !r1696;
    if (u1697) {
      unsigned long t1698 = t1695->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1695, t1698);
    }
  return;
}

