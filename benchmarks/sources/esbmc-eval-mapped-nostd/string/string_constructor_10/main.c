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
struct _Guard_0 { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* _M_guarded; };
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
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[15] = "Initial string";
char _str_1[21] = "A character sequence";
char _str_2[27] = "Another character sequence";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[5] = "s1: ";
char _str_4[6] = "\ns2: ";
char _str_5[6] = "\ns3: ";
char _str_6[6] = "\ns4: ";
char _str_7[6] = "\ns5: ";
char _str_8[6] = "\ns6: ";
char _str_9[7] = "\ns7a: ";
char _str_10[7] = "\ns7b: ";
char _str_11[50] = "basic_string: construction from null is not valid";
char _str_12[24] = "basic_string::_M_create";
char _str_13[27] = "basic_string::basic_string";
char _str_14[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1, unsigned long p2, unsigned long p3);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, struct std__allocator_char_* p3);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char____2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char p2, struct std__allocator_char_* p3);
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, char** p1);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______void_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p2, struct std__allocator_char_* p3);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
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
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* p0);
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* p0);
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_true_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___assign(char* p0, unsigned long p1, char p2);
extern void* memset(void* p0, int p1, unsigned long p2);
char* std__char_traits_char___assign(char* p0, unsigned long p1, char p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(char* p0, unsigned long p1, char p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char p2);
char** __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);
long __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p1);
long std__iterator_traits___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________difference_type_std____distance___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1, struct std__random_access_iterator_tag p2);
long std__iterator_traits___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________difference_type_std__distance___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__________gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______std__forward_iterator_tag____Guard___Guard(struct _Guard_0* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
char* char__std____niter_base_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p0);
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______(char* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__________gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______std__forward_iterator_tag____Guard____Guard(struct _Guard_0* p0);
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p1, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ p2, struct std__forward_iterator_tag p3);
struct std__random_access_iterator_tag std__iterator_traits___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);

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
        char* cast20 = (char*)&(_str_11);
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

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v39, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v40) {
bb41:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this42;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str43;
  struct std__allocator_char_ ref_tmp044;
  this42 = v39;
  __str43 = v40;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t45 = this42;
  char* r46 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t45);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t47 = __str43;
  struct std__allocator_char_* r48 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t47);
  struct std__allocator_char_ r49 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(r48);
  ref_tmp044 = r49;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t45->_M_dataplus, r46, &ref_tmp044);
  {
    std__allocator_char____allocator(&ref_tmp044);
  }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t50 = __str43;
    char* r51 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t50);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t52 = __str43;
    unsigned long r53 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t52);
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_true_(t45, r51, r53);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS4_mm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v54, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v55, unsigned long v56, unsigned long v57) {
bb58:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this59;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str60;
  unsigned long __pos61;
  unsigned long __n62;
  struct std__allocator_char_ ref_tmp063;
  char* __start64;
  struct std__forward_iterator_tag agg_tmp065;
  this59 = v54;
  __str60 = v55;
  __pos61 = v56;
  __n62 = v57;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t66 = this59;
  char* r67 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t66);
  std__allocator_char___allocator_2(&ref_tmp063);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t66->_M_dataplus, r67, &ref_tmp063);
  {
    std__allocator_char____allocator(&ref_tmp063);
  }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t68 = __str60;
    char* r69 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t68);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t70 = __str60;
    unsigned long t71 = __pos61;
    char* cast72 = (char*)&(_str_13);
    unsigned long r73 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t70, t71, cast72);
    char* ptr74 = &(r69)[r73];
    __start64 = ptr74;
    char* t75 = __start64;
    char* t76 = __start64;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t77 = __str60;
    unsigned long t78 = __pos61;
    unsigned long t79 = __n62;
    unsigned long r80 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t77, t78, t79);
    char* ptr81 = &(t76)[r80];
    struct std__forward_iterator_tag t82 = agg_tmp065;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t66, t75, ptr81, t82);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EPKcmRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v83, char* v84, unsigned long v85, struct std__allocator_char_* v86) {
bb87:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this88;
  char* __s89;
  unsigned long __n90;
  struct std__allocator_char_* __a91;
  struct std__forward_iterator_tag agg_tmp092;
  this88 = v83;
  __s89 = v84;
  __n90 = v85;
  __a91 = v86;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t93 = this88;
  char* r94 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t93);
  struct std__allocator_char_* t95 = __a91;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t93->_M_dataplus, r94, t95);
      char* t96 = __s89;
      char* c97 = ((void*)0);
      _Bool c98 = ((t96 == c97)) ? 1 : 0;
      _Bool ternary99;
      if (c98) {
        unsigned long t100 = __n90;
        unsigned long c101 = 0;
        _Bool c102 = ((t100 > c101)) ? 1 : 0;
        ternary99 = (_Bool)c102;
      } else {
        _Bool c103 = 0;
        ternary99 = (_Bool)c103;
      }
      if (ternary99) {
        char* cast104 = (char*)&(_str_11);
        std____throw_logic_error(cast104);
      }
    char* t105 = __s89;
    char* t106 = __s89;
    unsigned long t107 = __n90;
    char* ptr108 = &(t106)[t107];
    struct std__forward_iterator_tag t109 = agg_tmp092;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t93, t105, ptr108, t109);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEmcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char____2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v110, unsigned long v111, char v112, struct std__allocator_char_* v113) {
bb114:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this115;
  unsigned long __n116;
  char __c117;
  struct std__allocator_char_* __a118;
  this115 = v110;
  __n116 = v111;
  __c117 = v112;
  __a118 = v113;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t119 = this115;
  char* r120 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t119);
  struct std__allocator_char_* t121 = __a118;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t119->_M_dataplus, r120, t121);
    unsigned long t122 = __n116;
    char t123 = __c117;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct(t119, t122, t123);
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2ERKS1_
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v124, char** v125) {
bb126:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this127;
  char** __i128;
  this127 = v124;
  __i128 = v125;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t129 = this127;
  char** t130 = __i128;
  char* t131 = *t130;
  t129->_M_current = t131;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5beginEv
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v132) {
bb133:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this134;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval135;
  char* ref_tmp0136;
  this134 = v132;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t137 = this134;
  char* r138 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t137);
  ref_tmp0136 = r138;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval135, &ref_tmp0136);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t139 = __retval135;
  return t139;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEplEl
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v140, long v141) {
bb142:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this143;
  long __n144;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __retval145;
  char* ref_tmp0146;
  this143 = v140;
  __n144 = v141;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t147 = this143;
  char* t148 = t147->_M_current;
  long t149 = __n144;
  char* ptr150 = &(t148)[t149];
  ref_tmp0146 = ptr150;
  __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&__retval145, &ref_tmp0146);
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t151 = __retval145;
  return t151;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IN9__gnu_cxx17__normal_iteratorIPcS4_EEvEET_SA_RKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______void_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v152, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v153, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v154, struct std__allocator_char_* v155) {
bb156:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this157;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __beg158;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __end159;
  struct std__allocator_char_* __a160;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp0161;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp1162;
  struct std__forward_iterator_tag agg_tmp2163;
  struct std__random_access_iterator_tag ref_tmp0164;
  this157 = v152;
  __beg158 = v153;
  __end159 = v154;
  __a160 = v155;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t165 = this157;
  char* r166 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t165);
  struct std__allocator_char_* t167 = __a160;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t165->_M_dataplus, r166, t167);
    unsigned long c168 = 0;
    t165->_M_string_length = c168;
    agg_tmp0161 = __beg158; // copy
    agg_tmp1162 = __end159; // copy
    struct std__random_access_iterator_tag r169 = std__iterator_traits___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______(&__beg158);
    ref_tmp0164 = r169;
    struct std__forward_iterator_tag* base170 = (struct std__forward_iterator_tag*)((char *)&(ref_tmp0164) + 0);
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t171 = agg_tmp0161;
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t172 = agg_tmp1162;
    struct std__forward_iterator_tag t173 = agg_tmp2163;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______(t165, t171, t172, t173);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v174) {
bb175:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this176;
  char* __retval177;
  this176 = v174;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t178 = this176;
  char* r179 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t178);
  __retval177 = r179;
  char* t180 = __retval177;
  return t180;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v181, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v182) {
bb183:
  struct std__basic_ostream_char__std__char_traits_char__* __os184;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str185;
  struct std__basic_ostream_char__std__char_traits_char__* __retval186;
  __os184 = v181;
  __str185 = v182;
  struct std__basic_ostream_char__std__char_traits_char__* t187 = __os184;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t188 = __str185;
  char* r189 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t188);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t190 = __str185;
  unsigned long r191 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t190);
  long cast192 = (long)r191;
  struct std__basic_ostream_char__std__char_traits_char__* r193 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t187, r189, cast192);
  __retval186 = r193;
  struct std__basic_ostream_char__std__char_traits_char__* t194 = __retval186;
  return t194;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v195, int v196) {
bb197:
  int __a198;
  int __b199;
  int __retval200;
  __a198 = v195;
  __b199 = v196;
  int t201 = __a198;
  int t202 = __b199;
  int b203 = t201 | t202;
  __retval200 = b203;
  int t204 = __retval200;
  return t204;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v205) {
bb206:
  struct std__basic_ios_char__std__char_traits_char__* this207;
  int __retval208;
  this207 = v205;
  struct std__basic_ios_char__std__char_traits_char__* t209 = this207;
  struct std__ios_base* base210 = (struct std__ios_base*)((char *)t209 + 0);
  int t211 = base210->_M_streambuf_state;
  __retval208 = t211;
  int t212 = __retval208;
  return t212;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v213, int v214) {
bb215:
  struct std__basic_ios_char__std__char_traits_char__* this216;
  int __state217;
  this216 = v213;
  __state217 = v214;
  struct std__basic_ios_char__std__char_traits_char__* t218 = this216;
  int r219 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t218);
  int t220 = __state217;
  int r221 = std__operator_(r219, t220);
  std__basic_ios_char__std__char_traits_char_____clear(t218, r221);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v222, char* v223) {
bb224:
  struct std__basic_ostream_char__std__char_traits_char__* __out225;
  char* __s226;
  struct std__basic_ostream_char__std__char_traits_char__* __retval227;
  __out225 = v222;
  __s226 = v223;
    char* t228 = __s226;
    _Bool cast229 = (_Bool)t228;
    _Bool u230 = !cast229;
    if (u230) {
      struct std__basic_ostream_char__std__char_traits_char__* t231 = __out225;
      void** v232 = (void**)t231;
      void* v233 = *((void**)v232);
      unsigned char* cast234 = (unsigned char*)v233;
      long c235 = -24;
      unsigned char* ptr236 = &(cast234)[c235];
      long* cast237 = (long*)ptr236;
      long t238 = *cast237;
      unsigned char* cast239 = (unsigned char*)t231;
      unsigned char* ptr240 = &(cast239)[t238];
      struct std__basic_ostream_char__std__char_traits_char__* cast241 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr240;
      struct std__basic_ios_char__std__char_traits_char__* cast242 = (struct std__basic_ios_char__std__char_traits_char__*)cast241;
      int t243 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast242, t243);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t244 = __out225;
      char* t245 = __s226;
      char* t246 = __s226;
      unsigned long r247 = std__char_traits_char___length(t246);
      long cast248 = (long)r247;
      struct std__basic_ostream_char__std__char_traits_char__* r249 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t244, t245, cast248);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t250 = __out225;
  __retval227 = t250;
  struct std__basic_ostream_char__std__char_traits_char__* t251 = __retval227;
  return t251;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v252, void* v253) {
bb254:
  struct std__basic_ostream_char__std__char_traits_char__* this255;
  void* __pf256;
  struct std__basic_ostream_char__std__char_traits_char__* __retval257;
  this255 = v252;
  __pf256 = v253;
  struct std__basic_ostream_char__std__char_traits_char__* t258 = this255;
  void* t259 = __pf256;
  struct std__basic_ostream_char__std__char_traits_char__* r260 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t259)(t258);
  __retval257 = r260;
  struct std__basic_ostream_char__std__char_traits_char__* t261 = __retval257;
  return t261;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v262) {
bb263:
  struct std__basic_ostream_char__std__char_traits_char__* __os264;
  struct std__basic_ostream_char__std__char_traits_char__* __retval265;
  __os264 = v262;
  struct std__basic_ostream_char__std__char_traits_char__* t266 = __os264;
  struct std__basic_ostream_char__std__char_traits_char__* r267 = std__ostream__flush(t266);
  __retval265 = r267;
  struct std__basic_ostream_char__std__char_traits_char__* t268 = __retval265;
  return t268;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v269) {
bb270:
  struct std__ctype_char_* __f271;
  struct std__ctype_char_* __retval272;
  __f271 = v269;
    struct std__ctype_char_* t273 = __f271;
    _Bool cast274 = (_Bool)t273;
    _Bool u275 = !cast274;
    if (u275) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t276 = __f271;
  __retval272 = t276;
  struct std__ctype_char_* t277 = __retval272;
  return t277;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v278, char v279) {
bb280:
  struct std__ctype_char_* this281;
  char __c282;
  char __retval283;
  this281 = v278;
  __c282 = v279;
  struct std__ctype_char_* t284 = this281;
    char t285 = t284->_M_widen_ok;
    _Bool cast286 = (_Bool)t285;
    if (cast286) {
      char t287 = __c282;
      unsigned char cast288 = (unsigned char)t287;
      unsigned long cast289 = (unsigned long)cast288;
      char t290 = t284->_M_widen[cast289];
      __retval283 = t290;
      char t291 = __retval283;
      return t291;
    }
  std__ctype_char____M_widen_init___const(t284);
  char t292 = __c282;
  void** v293 = (void**)t284;
  void* v294 = *((void**)v293);
  char vcall297 = (char)__VERIFIER_virtual_call_char_char(t284, 6, t292);
  __retval283 = vcall297;
  char t298 = __retval283;
  return t298;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v299, char v300) {
bb301:
  struct std__basic_ios_char__std__char_traits_char__* this302;
  char __c303;
  char __retval304;
  this302 = v299;
  __c303 = v300;
  struct std__basic_ios_char__std__char_traits_char__* t305 = this302;
  struct std__ctype_char_* t306 = t305->_M_ctype;
  struct std__ctype_char_* r307 = std__ctype_char__const__std____check_facet_std__ctype_char___(t306);
  char t308 = __c303;
  char r309 = std__ctype_char___widen_char__const(r307, t308);
  __retval304 = r309;
  char t310 = __retval304;
  return t310;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v311) {
bb312:
  struct std__basic_ostream_char__std__char_traits_char__* __os313;
  struct std__basic_ostream_char__std__char_traits_char__* __retval314;
  __os313 = v311;
  struct std__basic_ostream_char__std__char_traits_char__* t315 = __os313;
  struct std__basic_ostream_char__std__char_traits_char__* t316 = __os313;
  void** v317 = (void**)t316;
  void* v318 = *((void**)v317);
  unsigned char* cast319 = (unsigned char*)v318;
  long c320 = -24;
  unsigned char* ptr321 = &(cast319)[c320];
  long* cast322 = (long*)ptr321;
  long t323 = *cast322;
  unsigned char* cast324 = (unsigned char*)t316;
  unsigned char* ptr325 = &(cast324)[t323];
  struct std__basic_ostream_char__std__char_traits_char__* cast326 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr325;
  struct std__basic_ios_char__std__char_traits_char__* cast327 = (struct std__basic_ios_char__std__char_traits_char__*)cast326;
  char c328 = 10;
  char r329 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast327, c328);
  struct std__basic_ostream_char__std__char_traits_char__* r330 = std__ostream__put(t315, r329);
  struct std__basic_ostream_char__std__char_traits_char__* r331 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r330);
  __retval314 = r331;
  struct std__basic_ostream_char__std__char_traits_char__* t332 = __retval314;
  return t332;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v333) {
bb334:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this335;
  this335 = v333;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t336 = this335;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t336);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t336->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb337:
  int __retval338;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ s0339;
  struct std__allocator_char_ ref_tmp0340;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ s1341;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ s2342;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ s3343;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ s4344;
  struct std__allocator_char_ ref_tmp1345;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ s5346;
  struct std__allocator_char_ ref_tmp2347;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ s6348;
  struct std__allocator_char_ ref_tmp3349;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ s7a350;
  struct std__allocator_char_ ref_tmp4351;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ s7b352;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp0353;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp1354;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp5355;
  struct std__allocator_char_ ref_tmp6356;
  int c357 = 0;
  __retval338 = c357;
  char* cast358 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0340);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&s0339, cast358, &ref_tmp0340);
  {
    std__allocator_char____allocator(&ref_tmp0340);
  }
    _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&s1341);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_2(&s2342, &s0339);
        unsigned long c359 = 8;
        unsigned long c360 = 3;
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_3(&s3343, &s0339, c359, c360);
          char* cast361 = (char*)&(_str_1);
          unsigned long c362 = 6;
          std__allocator_char___allocator_2(&ref_tmp1345);
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&s4344, cast361, c362, &ref_tmp1345);
          {
            std__allocator_char____allocator(&ref_tmp1345);
          }
            char* cast363 = (char*)&(_str_2);
            std__allocator_char___allocator_2(&ref_tmp2347);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&s5346, cast363, &ref_tmp2347);
            {
              std__allocator_char____allocator(&ref_tmp2347);
            }
              unsigned long c364 = 10;
              char c365 = 120;
              std__allocator_char___allocator_2(&ref_tmp3349);
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char____2(&s6348, c364, c365, &ref_tmp3349);
              {
                std__allocator_char____allocator(&ref_tmp3349);
              }
                unsigned long c366 = 10;
                char c367 = 42;
                std__allocator_char___allocator_2(&ref_tmp4351);
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char____2(&s7a350, c366, c367, &ref_tmp4351);
                {
                  std__allocator_char____allocator(&ref_tmp4351);
                }
                  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r368 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(&s0339);
                  agg_tmp0353 = r368;
                  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r369 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____begin(&s0339);
                  ref_tmp5355 = r369;
                  long c370 = 7;
                  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ r371 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______operator__long__const(&ref_tmp5355, c370);
                  agg_tmp1354 = r371;
                  std__allocator_char___allocator_2(&ref_tmp6356);
                    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t372 = agg_tmp0353;
                    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t373 = agg_tmp1354;
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______void_(&s7b352, t372, t373, &ref_tmp6356);
                  {
                    std__allocator_char____allocator(&ref_tmp6356);
                  }
                    char* cast374 = (char*)&(_str_3);
                    struct std__basic_ostream_char__std__char_traits_char__* r375 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast374);
                    struct std__basic_ostream_char__std__char_traits_char__* r376 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r375, &s1341);
                    char* cast377 = (char*)&(_str_4);
                    struct std__basic_ostream_char__std__char_traits_char__* r378 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r376, cast377);
                    struct std__basic_ostream_char__std__char_traits_char__* r379 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r378, &s2342);
                    char* cast380 = (char*)&(_str_5);
                    struct std__basic_ostream_char__std__char_traits_char__* r381 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r379, cast380);
                    struct std__basic_ostream_char__std__char_traits_char__* r382 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r381, &s3343);
                    char* cast383 = (char*)&(_str_6);
                    struct std__basic_ostream_char__std__char_traits_char__* r384 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast383);
                    struct std__basic_ostream_char__std__char_traits_char__* r385 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r384, &s4344);
                    char* cast386 = (char*)&(_str_7);
                    struct std__basic_ostream_char__std__char_traits_char__* r387 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r385, cast386);
                    struct std__basic_ostream_char__std__char_traits_char__* r388 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r387, &s5346);
                    char* cast389 = (char*)&(_str_8);
                    struct std__basic_ostream_char__std__char_traits_char__* r390 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r388, cast389);
                    struct std__basic_ostream_char__std__char_traits_char__* r391 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r390, &s6348);
                    char* cast392 = (char*)&(_str_9);
                    struct std__basic_ostream_char__std__char_traits_char__* r393 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast392);
                    struct std__basic_ostream_char__std__char_traits_char__* r394 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r393, &s7a350);
                    char* cast395 = (char*)&(_str_10);
                    struct std__basic_ostream_char__std__char_traits_char__* r396 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r394, cast395);
                    struct std__basic_ostream_char__std__char_traits_char__* r397 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r396, &s7b352);
                    struct std__basic_ostream_char__std__char_traits_char__* r398 = std__ostream__operator___std__ostream_____(r397, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
                    int c399 = 0;
                    __retval338 = c399;
                    int t400 = __retval338;
                    int ret_val401 = t400;
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&s7b352);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&s7a350);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&s6348);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&s5346);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&s4344);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&s3343);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&s2342);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&s1341);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&s0339);
                    }
                    return ret_val401;
  int t402 = __retval338;
  return t402;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v403) {
bb404:
  struct std____new_allocator_char_* this405;
  this405 = v403;
  struct std____new_allocator_char_* t406 = this405;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v407) {
bb408:
  char* __r409;
  char* __retval410;
  __r409 = v407;
  char* t411 = __r409;
  __retval410 = t411;
  char* t412 = __retval410;
  return t412;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v413) {
bb414:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this415;
  char* __retval416;
  this415 = v413;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t417 = this415;
  char* cast418 = (char*)&(t417->field2._M_local_buf);
  char* r419 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast418);
  __retval416 = r419;
  char* t420 = __retval416;
  return t420;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v421, char* v422, struct std__allocator_char_* v423) {
bb424:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this425;
  char* __dat426;
  struct std__allocator_char_* __a427;
  this425 = v421;
  __dat426 = v422;
  __a427 = v423;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t428 = this425;
  struct std__allocator_char_* base429 = (struct std__allocator_char_*)((char *)t428 + 0);
  struct std__allocator_char_* t430 = __a427;
  std__allocator_char___allocator(base429, t430);
    char* t431 = __dat426;
    t428->_M_p = t431;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb432:
  _Bool __retval433;
    _Bool c434 = 0;
    __retval433 = c434;
    _Bool t435 = __retval433;
    return t435;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v436, char* v437) {
bb438:
  char* __c1439;
  char* __c2440;
  _Bool __retval441;
  __c1439 = v436;
  __c2440 = v437;
  char* t442 = __c1439;
  char t443 = *t442;
  int cast444 = (int)t443;
  char* t445 = __c2440;
  char t446 = *t445;
  int cast447 = (int)t446;
  _Bool c448 = ((cast444 == cast447)) ? 1 : 0;
  __retval441 = c448;
  _Bool t449 = __retval441;
  return t449;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v450) {
bb451:
  char* __p452;
  unsigned long __retval453;
  unsigned long __i454;
  __p452 = v450;
  unsigned long c455 = 0;
  __i454 = c455;
    char ref_tmp0456;
    while (1) {
      unsigned long t457 = __i454;
      char* t458 = __p452;
      char* ptr459 = &(t458)[t457];
      char c460 = 0;
      ref_tmp0456 = c460;
      _Bool r461 = __gnu_cxx__char_traits_char___eq(ptr459, &ref_tmp0456);
      _Bool u462 = !r461;
      if (!u462) break;
      unsigned long t463 = __i454;
      unsigned long u464 = t463 + 1;
      __i454 = u464;
    }
  unsigned long t465 = __i454;
  __retval453 = t465;
  unsigned long t466 = __retval453;
  return t466;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v467) {
bb468:
  char* __s469;
  unsigned long __retval470;
  __s469 = v467;
    _Bool r471 = std____is_constant_evaluated();
    if (r471) {
      char* t472 = __s469;
      unsigned long r473 = __gnu_cxx__char_traits_char___length(t472);
      __retval470 = r473;
      unsigned long t474 = __retval470;
      return t474;
    }
  char* t475 = __s469;
  unsigned long r476 = strlen(t475);
  __retval470 = r476;
  unsigned long t477 = __retval470;
  return t477;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v478, char* v479, struct std__random_access_iterator_tag v480) {
bb481:
  char* __first482;
  char* __last483;
  struct std__random_access_iterator_tag unnamed484;
  long __retval485;
  __first482 = v478;
  __last483 = v479;
  unnamed484 = v480;
  char* t486 = __last483;
  char* t487 = __first482;
  long diff488 = t486 - t487;
  __retval485 = diff488;
  long t489 = __retval485;
  return t489;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v490) {
bb491:
  char** unnamed492;
  struct std__random_access_iterator_tag __retval493;
  unnamed492 = v490;
  struct std__random_access_iterator_tag t494 = __retval493;
  return t494;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v495, char* v496) {
bb497:
  char* __first498;
  char* __last499;
  long __retval500;
  struct std__random_access_iterator_tag agg_tmp0501;
  __first498 = v495;
  __last499 = v496;
  char* t502 = __first498;
  char* t503 = __last499;
  struct std__random_access_iterator_tag r504 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first498);
  agg_tmp0501 = r504;
  struct std__random_access_iterator_tag t505 = agg_tmp0501;
  long r506 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t502, t503, t505);
  __retval500 = r506;
  long t507 = __retval500;
  return t507;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v508, char* v509) {
bb510:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this511;
  char* __p512;
  this511 = v508;
  __p512 = v509;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t513 = this511;
  char* t514 = __p512;
  t513->_M_dataplus._M_p = t514;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v515) {
bb516:
  struct std__allocator_char_* __a517;
  unsigned long __retval518;
  __a517 = v515;
  unsigned long c519 = -1;
  unsigned long c520 = 1;
  unsigned long b521 = c519 / c520;
  __retval518 = b521;
  unsigned long t522 = __retval518;
  return t522;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v523) {
bb524:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this525;
  struct std__allocator_char_* __retval526;
  this525 = v523;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t527 = this525;
  struct std__allocator_char_* base528 = (struct std__allocator_char_*)((char *)&(t527->_M_dataplus) + 0);
  __retval526 = base528;
  struct std__allocator_char_* t529 = __retval526;
  return t529;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v530, unsigned long* v531) {
bb532:
  unsigned long* __a533;
  unsigned long* __b534;
  unsigned long* __retval535;
  __a533 = v530;
  __b534 = v531;
    unsigned long* t536 = __b534;
    unsigned long t537 = *t536;
    unsigned long* t538 = __a533;
    unsigned long t539 = *t538;
    _Bool c540 = ((t537 < t539)) ? 1 : 0;
    if (c540) {
      unsigned long* t541 = __b534;
      __retval535 = t541;
      unsigned long* t542 = __retval535;
      return t542;
    }
  unsigned long* t543 = __a533;
  __retval535 = t543;
  unsigned long* t544 = __retval535;
  return t544;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v545) {
bb546:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this547;
  unsigned long __retval548;
  unsigned long __diffmax549;
  unsigned long __allocmax550;
  this547 = v545;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t551 = this547;
  unsigned long c552 = 9223372036854775807;
  __diffmax549 = c552;
  struct std__allocator_char_* r553 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t551);
  unsigned long r554 = std__allocator_traits_std__allocator_char_____max_size(r553);
  __allocmax550 = r554;
  unsigned long* r555 = unsigned_long_const__std__min_unsigned_long_(&__diffmax549, &__allocmax550);
  unsigned long t556 = *r555;
  unsigned long c557 = 1;
  unsigned long b558 = t556 - c557;
  __retval548 = b558;
  unsigned long t559 = __retval548;
  return t559;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v560) {
bb561:
  struct std____new_allocator_char_* this562;
  unsigned long __retval563;
  this562 = v560;
  struct std____new_allocator_char_* t564 = this562;
  unsigned long c565 = 9223372036854775807;
  unsigned long c566 = 1;
  unsigned long b567 = c565 / c566;
  __retval563 = b567;
  unsigned long t568 = __retval563;
  return t568;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v569, unsigned long v570, void* v571) {
bb572:
  struct std____new_allocator_char_* this573;
  unsigned long __n574;
  void* unnamed575;
  char* __retval576;
  this573 = v569;
  __n574 = v570;
  unnamed575 = v571;
  struct std____new_allocator_char_* t577 = this573;
    unsigned long t578 = __n574;
    unsigned long r579 = std____new_allocator_char____M_max_size___const(t577);
    _Bool c580 = ((t578 > r579)) ? 1 : 0;
    if (c580) {
        unsigned long t581 = __n574;
        unsigned long c582 = -1;
        unsigned long c583 = 1;
        unsigned long b584 = c582 / c583;
        _Bool c585 = ((t581 > b584)) ? 1 : 0;
        if (c585) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c586 = 1;
    unsigned long c587 = 16;
    _Bool c588 = ((c586 > c587)) ? 1 : 0;
    if (c588) {
      unsigned long __al589;
      unsigned long c590 = 1;
      __al589 = c590;
      unsigned long t591 = __n574;
      unsigned long c592 = 1;
      unsigned long b593 = t591 * c592;
      unsigned long t594 = __al589;
      void* r595 = operator_new_2(b593, t594);
      char* cast596 = (char*)r595;
      __retval576 = cast596;
      char* t597 = __retval576;
      return t597;
    }
  unsigned long t598 = __n574;
  unsigned long c599 = 1;
  unsigned long b600 = t598 * c599;
  void* r601 = operator_new(b600);
  char* cast602 = (char*)r601;
  __retval576 = cast602;
  char* t603 = __retval576;
  return t603;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v604, unsigned long v605) {
bb606:
  struct std__allocator_char_* this607;
  unsigned long __n608;
  char* __retval609;
  this607 = v604;
  __n608 = v605;
  struct std__allocator_char_* t610 = this607;
    _Bool r611 = std____is_constant_evaluated();
    if (r611) {
        unsigned long t612 = __n608;
        unsigned long c613 = 1;
        unsigned long ovr614;
        _Bool ovf615 = __builtin_mul_overflow(t612, c613, &ovr614);
        __n608 = ovr614;
        if (ovf615) {
          std____throw_bad_array_new_length();
        }
      unsigned long t616 = __n608;
      void* r617 = operator_new(t616);
      char* cast618 = (char*)r617;
      __retval609 = cast618;
      char* t619 = __retval609;
      return t619;
    }
  struct std____new_allocator_char_* base620 = (struct std____new_allocator_char_*)((char *)t610 + 0);
  unsigned long t621 = __n608;
  void* c622 = ((void*)0);
  char* r623 = std____new_allocator_char___allocate(base620, t621, c622);
  __retval609 = r623;
  char* t624 = __retval609;
  return t624;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v625, unsigned long v626) {
bb627:
  struct std__allocator_char_* __a628;
  unsigned long __n629;
  char* __retval630;
  __a628 = v625;
  __n629 = v626;
  struct std__allocator_char_* t631 = __a628;
  unsigned long t632 = __n629;
  char* r633 = std__allocator_char___allocate(t631, t632);
  __retval630 = r633;
  char* t634 = __retval630;
  return t634;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v635, unsigned long v636) {
bb637:
  struct std__allocator_char_* __a638;
  unsigned long __n639;
  char* __retval640;
  char* __p641;
  __a638 = v635;
  __n639 = v636;
  struct std__allocator_char_* t642 = __a638;
  unsigned long t643 = __n639;
  char* r644 = std__allocator_traits_std__allocator_char_____allocate(t642, t643);
  __p641 = r644;
  char* t645 = __p641;
  __retval640 = t645;
  char* t646 = __retval640;
  return t646;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v647) {
bb648:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this649;
  struct std__allocator_char_* __retval650;
  this649 = v647;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t651 = this649;
  struct std__allocator_char_* base652 = (struct std__allocator_char_*)((char *)&(t651->_M_dataplus) + 0);
  __retval650 = base652;
  struct std__allocator_char_* t653 = __retval650;
  return t653;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v654, unsigned long* v655, unsigned long v656) {
bb657:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this658;
  unsigned long* __capacity659;
  unsigned long __old_capacity660;
  char* __retval661;
  this658 = v654;
  __capacity659 = v655;
  __old_capacity660 = v656;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t662 = this658;
    unsigned long* t663 = __capacity659;
    unsigned long t664 = *t663;
    unsigned long r665 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t662);
    _Bool c666 = ((t664 > r665)) ? 1 : 0;
    if (c666) {
      char* cast667 = (char*)&(_str_12);
      std____throw_length_error(cast667);
    }
    unsigned long* t668 = __capacity659;
    unsigned long t669 = *t668;
    unsigned long t670 = __old_capacity660;
    _Bool c671 = ((t669 > t670)) ? 1 : 0;
    _Bool ternary672;
    if (c671) {
      unsigned long* t673 = __capacity659;
      unsigned long t674 = *t673;
      unsigned long c675 = 2;
      unsigned long t676 = __old_capacity660;
      unsigned long b677 = c675 * t676;
      _Bool c678 = ((t674 < b677)) ? 1 : 0;
      ternary672 = (_Bool)c678;
    } else {
      _Bool c679 = 0;
      ternary672 = (_Bool)c679;
    }
    if (ternary672) {
      unsigned long c680 = 2;
      unsigned long t681 = __old_capacity660;
      unsigned long b682 = c680 * t681;
      unsigned long* t683 = __capacity659;
      *t683 = b682;
        unsigned long* t684 = __capacity659;
        unsigned long t685 = *t684;
        unsigned long r686 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t662);
        _Bool c687 = ((t685 > r686)) ? 1 : 0;
        if (c687) {
          unsigned long r688 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t662);
          unsigned long* t689 = __capacity659;
          *t689 = r688;
        }
    }
  struct std__allocator_char_* r690 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t662);
  unsigned long* t691 = __capacity659;
  unsigned long t692 = *t691;
  unsigned long c693 = 1;
  unsigned long b694 = t692 + c693;
  char* r695 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r690, b694);
  __retval661 = r695;
  char* t696 = __retval661;
  return t696;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v697, unsigned long v698) {
bb699:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this700;
  unsigned long __capacity701;
  this700 = v697;
  __capacity701 = v698;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t702 = this700;
  unsigned long t703 = __capacity701;
  t702->field2._M_allocated_capacity = t703;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb704:
  _Bool __retval705;
    _Bool c706 = 0;
    __retval705 = c706;
    _Bool t707 = __retval705;
    return t707;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v708) {
bb709:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this710;
  this710 = v708;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t711 = this710;
    _Bool r712 = std__is_constant_evaluated();
    if (r712) {
        unsigned long __i713;
        unsigned long c714 = 0;
        __i713 = c714;
        while (1) {
          unsigned long t716 = __i713;
          unsigned long c717 = 15;
          _Bool c718 = ((t716 <= c717)) ? 1 : 0;
          if (!c718) break;
          char c719 = 0;
          unsigned long t720 = __i713;
          t711->field2._M_local_buf[t720] = c719;
        for_step715: ;
          unsigned long t721 = __i713;
          unsigned long u722 = t721 + 1;
          __i713 = u722;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v723, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v724) {
bb725:
  struct _Guard* this726;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s727;
  this726 = v723;
  __s727 = v724;
  struct _Guard* t728 = this726;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t729 = __s727;
  t728->_M_guarded = t729;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v730, char* v731) {
bb732:
  char* __location733;
  char* __args734;
  char* __retval735;
  void* __loc736;
  __location733 = v730;
  __args734 = v731;
  char* t737 = __location733;
  void* cast738 = (void*)t737;
  __loc736 = cast738;
    void* t739 = __loc736;
    char* cast740 = (char*)t739;
    char* t741 = __args734;
    char t742 = *t741;
    *cast740 = t742;
    __retval735 = cast740;
    char* t743 = __retval735;
    return t743;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign_2(char* v744, char* v745) {
bb746:
  char* __c1747;
  char* __c2748;
  __c1747 = v744;
  __c2748 = v745;
    _Bool r749 = std____is_constant_evaluated();
    if (r749) {
      char* t750 = __c1747;
      char* t751 = __c2748;
      char* r752 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t750, t751);
    } else {
      char* t753 = __c2748;
      char t754 = *t753;
      char* t755 = __c1747;
      *t755 = t754;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v756, char* v757, unsigned long v758) {
bb759:
  char* __s1760;
  char* __s2761;
  unsigned long __n762;
  char* __retval763;
  __s1760 = v756;
  __s2761 = v757;
  __n762 = v758;
    unsigned long t764 = __n762;
    unsigned long c765 = 0;
    _Bool c766 = ((t764 == c765)) ? 1 : 0;
    if (c766) {
      char* t767 = __s1760;
      __retval763 = t767;
      char* t768 = __retval763;
      return t768;
    }
    _Bool r769 = std____is_constant_evaluated();
    if (r769) {
        unsigned long __i770;
        unsigned long c771 = 0;
        __i770 = c771;
        while (1) {
          unsigned long t773 = __i770;
          unsigned long t774 = __n762;
          _Bool c775 = ((t773 < t774)) ? 1 : 0;
          if (!c775) break;
          char* t776 = __s1760;
          unsigned long t777 = __i770;
          char* ptr778 = &(t776)[t777];
          unsigned long t779 = __i770;
          char* t780 = __s2761;
          char* ptr781 = &(t780)[t779];
          char* r782 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr778, ptr781);
        for_step772: ;
          unsigned long t783 = __i770;
          unsigned long u784 = t783 + 1;
          __i770 = u784;
        }
      char* t785 = __s1760;
      __retval763 = t785;
      char* t786 = __retval763;
      return t786;
    }
  char* t787 = __s1760;
  void* cast788 = (void*)t787;
  char* t789 = __s2761;
  void* cast790 = (void*)t789;
  unsigned long t791 = __n762;
  unsigned long c792 = 1;
  unsigned long b793 = t791 * c792;
  void* r794 = memcpy(cast788, cast790, b793);
  char* t795 = __s1760;
  __retval763 = t795;
  char* t796 = __retval763;
  return t796;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v797, char* v798, unsigned long v799) {
bb800:
  char* __s1801;
  char* __s2802;
  unsigned long __n803;
  char* __retval804;
  __s1801 = v797;
  __s2802 = v798;
  __n803 = v799;
    unsigned long t805 = __n803;
    unsigned long c806 = 0;
    _Bool c807 = ((t805 == c806)) ? 1 : 0;
    if (c807) {
      char* t808 = __s1801;
      __retval804 = t808;
      char* t809 = __retval804;
      return t809;
    }
    _Bool r810 = std____is_constant_evaluated();
    if (r810) {
      char* t811 = __s1801;
      char* t812 = __s2802;
      unsigned long t813 = __n803;
      char* r814 = __gnu_cxx__char_traits_char___copy(t811, t812, t813);
      __retval804 = r814;
      char* t815 = __retval804;
      return t815;
    }
  char* t816 = __s1801;
  void* cast817 = (void*)t816;
  char* t818 = __s2802;
  void* cast819 = (void*)t818;
  unsigned long t820 = __n803;
  void* r821 = memcpy(cast817, cast819, t820);
  char* cast822 = (char*)r821;
  __retval804 = cast822;
  char* t823 = __retval804;
  return t823;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v824, char* v825, unsigned long v826) {
bb827:
  char* __d828;
  char* __s829;
  unsigned long __n830;
  __d828 = v824;
  __s829 = v825;
  __n830 = v826;
    unsigned long t831 = __n830;
    unsigned long c832 = 1;
    _Bool c833 = ((t831 == c832)) ? 1 : 0;
    if (c833) {
      char* t834 = __d828;
      char* t835 = __s829;
      std__char_traits_char___assign_2(t834, t835);
    } else {
      char* t836 = __d828;
      char* t837 = __s829;
      unsigned long t838 = __n830;
      char* r839 = std__char_traits_char___copy(t836, t837, t838);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v840) {
bb841:
  char* __it842;
  char* __retval843;
  __it842 = v840;
  char* t844 = __it842;
  __retval843 = t844;
  char* t845 = __retval843;
  return t845;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v846, char* v847, char* v848) {
bb849:
  char* __p850;
  char* __k1851;
  char* __k2852;
  __p850 = v846;
  __k1851 = v847;
  __k2852 = v848;
    char* t853 = __p850;
    char* t854 = __k1851;
    char* r855 = char_const__std____niter_base_char_const__(t854);
    char* t856 = __k2852;
    char* t857 = __k1851;
    long diff858 = t856 - t857;
    unsigned long cast859 = (unsigned long)diff858;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t853, r855, cast859);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v860) {
bb861:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this862;
  char* __retval863;
  this862 = v860;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t864 = this862;
  char* t865 = t864->_M_dataplus._M_p;
  __retval863 = t865;
  char* t866 = __retval863;
  return t866;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v867, unsigned long v868) {
bb869:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this870;
  unsigned long __length871;
  this870 = v867;
  __length871 = v868;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t872 = this870;
  unsigned long t873 = __length871;
  t872->_M_string_length = t873;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v874, unsigned long v875) {
bb876:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this877;
  unsigned long __n878;
  char ref_tmp0879;
  this877 = v874;
  __n878 = v875;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t880 = this877;
  unsigned long t881 = __n878;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t880, t881);
  unsigned long t882 = __n878;
  char* r883 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t880);
  char* ptr884 = &(r883)[t882];
  char c885 = 0;
  ref_tmp0879 = c885;
  std__char_traits_char___assign_2(ptr884, &ref_tmp0879);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v886) {
bb887:
  struct _Guard* this888;
  this888 = v886;
  struct _Guard* t889 = this888;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t890 = t889->_M_guarded;
    _Bool cast891 = (_Bool)t890;
    if (cast891) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t892 = t889->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t892);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v893, char* v894, char* v895, struct std__forward_iterator_tag v896) {
bb897:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this898;
  char* __beg899;
  char* __end900;
  struct std__forward_iterator_tag unnamed901;
  unsigned long __dnew902;
  struct _Guard __guard903;
  this898 = v893;
  __beg899 = v894;
  __end900 = v895;
  unnamed901 = v896;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t904 = this898;
  char* t905 = __beg899;
  char* t906 = __end900;
  long r907 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t905, t906);
  unsigned long cast908 = (unsigned long)r907;
  __dnew902 = cast908;
    unsigned long t909 = __dnew902;
    unsigned long c910 = 15;
    _Bool c911 = ((t909 > c910)) ? 1 : 0;
    if (c911) {
      unsigned long c912 = 0;
      char* r913 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t904, &__dnew902, c912);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t904, r913);
      unsigned long t914 = __dnew902;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t904, t914);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t904);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard903, t904);
    char* r915 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t904);
    char* t916 = __beg899;
    char* t917 = __end900;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r915, t916, t917);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c918 = ((void*)0);
    __guard903._M_guarded = c918;
    unsigned long t919 = __dnew902;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t904, t919);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard903);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v920) {
bb921:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this922;
  this922 = v920;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t923 = this922;
  {
    struct std__allocator_char_* base924 = (struct std__allocator_char_*)((char *)t923 + 0);
    std__allocator_char____allocator(base924);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v925, struct std____new_allocator_char_* v926) {
bb927:
  struct std____new_allocator_char_* this928;
  struct std____new_allocator_char_* unnamed929;
  this928 = v925;
  unnamed929 = v926;
  struct std____new_allocator_char_* t930 = this928;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v931) {
bb932:
  char* __r933;
  char* __retval934;
  __r933 = v931;
  char* t935 = __r933;
  __retval934 = t935;
  char* t936 = __retval934;
  return t936;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v937) {
bb938:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this939;
  char* __retval940;
  this939 = v937;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t941 = this939;
  char* cast942 = (char*)&(t941->field2._M_local_buf);
  char* r943 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast942);
  __retval940 = r943;
  char* t944 = __retval940;
  return t944;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v945) {
bb946:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this947;
  _Bool __retval948;
  this947 = v945;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t949 = this947;
    char* r950 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t949);
    char* r951 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t949);
    _Bool c952 = ((r950 == r951)) ? 1 : 0;
    if (c952) {
        unsigned long t953 = t949->_M_string_length;
        unsigned long c954 = 15;
        _Bool c955 = ((t953 > c954)) ? 1 : 0;
        if (c955) {
          __builtin_unreachable();
        }
      _Bool c956 = 1;
      __retval948 = c956;
      _Bool t957 = __retval948;
      return t957;
    }
  _Bool c958 = 0;
  __retval948 = c958;
  _Bool t959 = __retval948;
  return t959;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v960, char* v961, unsigned long v962) {
bb963:
  struct std____new_allocator_char_* this964;
  char* __p965;
  unsigned long __n966;
  this964 = v960;
  __p965 = v961;
  __n966 = v962;
  struct std____new_allocator_char_* t967 = this964;
    unsigned long c968 = 1;
    unsigned long c969 = 16;
    _Bool c970 = ((c968 > c969)) ? 1 : 0;
    if (c970) {
      char* t971 = __p965;
      void* cast972 = (void*)t971;
      unsigned long t973 = __n966;
      unsigned long c974 = 1;
      unsigned long b975 = t973 * c974;
      unsigned long c976 = 1;
      operator_delete_3(cast972, b975, c976);
      return;
    }
  char* t977 = __p965;
  void* cast978 = (void*)t977;
  unsigned long t979 = __n966;
  unsigned long c980 = 1;
  unsigned long b981 = t979 * c980;
  operator_delete_2(cast978, b981);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v982, char* v983, unsigned long v984) {
bb985:
  struct std__allocator_char_* this986;
  char* __p987;
  unsigned long __n988;
  this986 = v982;
  __p987 = v983;
  __n988 = v984;
  struct std__allocator_char_* t989 = this986;
    _Bool r990 = std____is_constant_evaluated();
    if (r990) {
      char* t991 = __p987;
      void* cast992 = (void*)t991;
      operator_delete(cast992);
      return;
    }
  struct std____new_allocator_char_* base993 = (struct std____new_allocator_char_*)((char *)t989 + 0);
  char* t994 = __p987;
  unsigned long t995 = __n988;
  std____new_allocator_char___deallocate(base993, t994, t995);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v996, char* v997, unsigned long v998) {
bb999:
  struct std__allocator_char_* __a1000;
  char* __p1001;
  unsigned long __n1002;
  __a1000 = v996;
  __p1001 = v997;
  __n1002 = v998;
  struct std__allocator_char_* t1003 = __a1000;
  char* t1004 = __p1001;
  unsigned long t1005 = __n1002;
  std__allocator_char___deallocate(t1003, t1004, t1005);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1006, unsigned long v1007) {
bb1008:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1009;
  unsigned long __size1010;
  this1009 = v1006;
  __size1010 = v1007;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1011 = this1009;
  struct std__allocator_char_* r1012 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1011);
  char* r1013 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1011);
  unsigned long t1014 = __size1010;
  unsigned long c1015 = 1;
  unsigned long b1016 = t1014 + c1015;
  std__allocator_traits_std__allocator_char_____deallocate(r1012, r1013, b1016);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1017) {
bb1018:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1019;
  this1019 = v1017;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1020 = this1019;
    _Bool r1021 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1020);
    _Bool u1022 = !r1021;
    if (u1022) {
      unsigned long t1023 = t1020->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1020, t1023);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1024, char* v1025, struct std__allocator_char_* v1026) {
bb1027:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1028;
  char* __dat1029;
  struct std__allocator_char_* __a1030;
  this1028 = v1024;
  __dat1029 = v1025;
  __a1030 = v1026;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1031 = this1028;
  struct std__allocator_char_* base1032 = (struct std__allocator_char_*)((char *)t1031 + 0);
  struct std__allocator_char_* t1033 = __a1030;
  std__allocator_char___allocator(base1032, t1033);
    char* t1034 = __dat1029;
    t1031->_M_p = t1034;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1035, struct std__allocator_char_* v1036) {
bb1037:
  struct std__allocator_char_* this1038;
  struct std__allocator_char_* __a1039;
  this1038 = v1035;
  __a1039 = v1036;
  struct std__allocator_char_* t1040 = this1038;
  struct std____new_allocator_char_* base1041 = (struct std____new_allocator_char_*)((char *)t1040 + 0);
  struct std__allocator_char_* t1042 = __a1039;
  struct std____new_allocator_char_* base1043 = (struct std____new_allocator_char_*)((char *)t1042 + 0);
  std____new_allocator_char_____new_allocator(base1041, base1043);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE37select_on_container_copy_constructionERKS0_
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* v1044) {
bb1045:
  struct std__allocator_char_* __rhs1046;
  struct std__allocator_char_ __retval1047;
  __rhs1046 = v1044;
  struct std__allocator_char_* t1048 = __rhs1046;
  std__allocator_char___allocator(&__retval1047, t1048);
  struct std__allocator_char_ t1049 = __retval1047;
  return t1049;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE17_S_select_on_copyERKS1_
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* v1050) {
bb1051:
  struct std__allocator_char_* __a1052;
  struct std__allocator_char_ __retval1053;
  __a1052 = v1050;
  struct std__allocator_char_* t1054 = __a1052;
  struct std__allocator_char_ r1055 = std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(t1054);
  __retval1053 = r1055;
  struct std__allocator_char_ t1056 = __retval1053;
  return t1056;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructILb1EEEvPKcm
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_true_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1057, char* v1058, unsigned long v1059) {
bb1060:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1061;
  char* __str1062;
  unsigned long __n1063;
  this1061 = v1057;
  __str1062 = v1058;
  __n1063 = v1059;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1064 = this1061;
    unsigned long t1065 = __n1063;
    unsigned long c1066 = 15;
    _Bool c1067 = ((t1065 > c1066)) ? 1 : 0;
    if (c1067) {
      unsigned long c1068 = 0;
      char* r1069 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1064, &__n1063, c1068);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1064, r1069);
      unsigned long t1070 = __n1063;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1064, t1070);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1064);
    }
    unsigned long t1071 = __n1063;
    _Bool cast1072 = (_Bool)t1071;
    _Bool ternary1073;
    if (cast1072) {
      _Bool c1074 = 1;
      ternary1073 = (_Bool)c1074;
    } else {
      _Bool c1075 = 1;
      ternary1073 = (_Bool)c1075;
    }
    if (ternary1073) {
      char* r1076 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1064);
      char* t1077 = __str1062;
      unsigned long t1078 = __n1063;
      _Bool c1079 = 1;
      unsigned long cast1080 = (unsigned long)c1079;
      unsigned long b1081 = t1078 + cast1080;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1076, t1077, b1081);
    }
  unsigned long t1082 = __n1063;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1064, t1082);
    _Bool c1083 = 0;
    if (c1083) {
      char ref_tmp01084;
      unsigned long t1085 = __n1063;
      char* r1086 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1064);
      char* ptr1087 = &(r1086)[t1085];
      char c1088 = 0;
      ref_tmp01084 = c1088;
      std__char_traits_char___assign_2(ptr1087, &ref_tmp01084);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1089) {
bb1090:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1091;
  unsigned long __retval1092;
  unsigned long __sz1093;
  this1091 = v1089;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1094 = this1091;
  unsigned long t1095 = t1094->_M_string_length;
  __sz1093 = t1095;
    unsigned long t1096 = __sz1093;
    unsigned long r1097 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1094);
    _Bool c1098 = ((t1096 > r1097)) ? 1 : 0;
    if (c1098) {
      __builtin_unreachable();
    }
  unsigned long t1099 = __sz1093;
  __retval1092 = t1099;
  unsigned long t1100 = __retval1092;
  return t1100;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1101) {
bb1102:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1103;
  unsigned long __retval1104;
  this1103 = v1101;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1105 = this1103;
  unsigned long r1106 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1105);
  __retval1104 = r1106;
  unsigned long t1107 = __retval1104;
  return t1107;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1108, unsigned long v1109, char* v1110) {
bb1111:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1112;
  unsigned long __pos1113;
  char* __s1114;
  unsigned long __retval1115;
  this1112 = v1108;
  __pos1113 = v1109;
  __s1114 = v1110;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1116 = this1112;
    unsigned long t1117 = __pos1113;
    unsigned long r1118 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1116);
    _Bool c1119 = ((t1117 > r1118)) ? 1 : 0;
    if (c1119) {
      char* cast1120 = (char*)&(_str_14);
      char* t1121 = __s1114;
      unsigned long t1122 = __pos1113;
      unsigned long r1123 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1116);
      std____throw_out_of_range_fmt(cast1120, t1121, t1122, r1123);
    }
  unsigned long t1124 = __pos1113;
  __retval1115 = t1124;
  unsigned long t1125 = __retval1115;
  return t1125;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1126, unsigned long v1127, unsigned long v1128) {
bb1129:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1130;
  unsigned long __pos1131;
  unsigned long __off1132;
  unsigned long __retval1133;
  _Bool __testoff1134;
  this1130 = v1126;
  __pos1131 = v1127;
  __off1132 = v1128;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1135 = this1130;
  unsigned long t1136 = __off1132;
  unsigned long r1137 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1135);
  unsigned long t1138 = __pos1131;
  unsigned long b1139 = r1137 - t1138;
  _Bool c1140 = ((t1136 < b1139)) ? 1 : 0;
  __testoff1134 = c1140;
  _Bool t1141 = __testoff1134;
  unsigned long ternary1142;
  if (t1141) {
    unsigned long t1143 = __off1132;
    ternary1142 = (unsigned long)t1143;
  } else {
    unsigned long r1144 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1135);
    unsigned long t1145 = __pos1131;
    unsigned long b1146 = r1144 - t1145;
    ternary1142 = (unsigned long)b1146;
  }
  __retval1133 = ternary1142;
  unsigned long t1147 = __retval1133;
  return t1147;
}

// function: _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* v1148, char* v1149) {
bb1150:
  char* __location1151;
  char* __args1152;
  char* __retval1153;
  void* __loc1154;
  __location1151 = v1148;
  __args1152 = v1149;
  char* t1155 = __location1151;
  void* cast1156 = (void*)t1155;
  __loc1154 = cast1156;
    void* t1157 = __loc1154;
    char* cast1158 = (char*)t1157;
    char* t1159 = __args1152;
    char t1160 = *t1159;
    *cast1158 = t1160;
    __retval1153 = cast1158;
    char* t1161 = __retval1153;
    return t1161;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignEPcmc
char* __gnu_cxx__char_traits_char___assign(char* v1162, unsigned long v1163, char v1164) {
bb1165:
  char* __s1166;
  unsigned long __n1167;
  char __a1168;
  char* __retval1169;
  __s1166 = v1162;
  __n1167 = v1163;
  __a1168 = v1164;
    _Bool r1170 = std____is_constant_evaluated();
    if (r1170) {
        unsigned long __i1171;
        unsigned long c1172 = 0;
        __i1171 = c1172;
        while (1) {
          unsigned long t1174 = __i1171;
          unsigned long t1175 = __n1167;
          _Bool c1176 = ((t1174 < t1175)) ? 1 : 0;
          if (!c1176) break;
          char* t1177 = __s1166;
          unsigned long t1178 = __i1171;
          char* ptr1179 = &(t1177)[t1178];
          char* r1180 = _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(ptr1179, &__a1168);
        for_step1173: ;
          unsigned long t1181 = __i1171;
          unsigned long u1182 = t1181 + 1;
          __i1171 = u1182;
        }
      char* t1183 = __s1166;
      __retval1169 = t1183;
      char* t1184 = __retval1169;
      return t1184;
    }
      unsigned long t1185 = __n1167;
      _Bool cast1186 = (_Bool)t1185;
      if (cast1186) {
        unsigned char __c1187;
        void* cast1188 = (void*)&(__c1187);
        void* cast1189 = (void*)&(__a1168);
        unsigned long c1190 = 1;
        void* r1191 = memcpy(cast1188, cast1189, c1190);
        char* t1192 = __s1166;
        void* cast1193 = (void*)t1192;
        unsigned char t1194 = __c1187;
        int cast1195 = (int)t1194;
        unsigned long t1196 = __n1167;
        void* r1197 = memset(cast1193, cast1195, t1196);
      }
  char* t1198 = __s1166;
  __retval1169 = t1198;
  char* t1199 = __retval1169;
  return t1199;
}

// function: _ZNSt11char_traitsIcE6assignEPcmc
char* std__char_traits_char___assign(char* v1200, unsigned long v1201, char v1202) {
bb1203:
  char* __s1204;
  unsigned long __n1205;
  char __a1206;
  char* __retval1207;
  __s1204 = v1200;
  __n1205 = v1201;
  __a1206 = v1202;
    unsigned long t1208 = __n1205;
    unsigned long c1209 = 0;
    _Bool c1210 = ((t1208 == c1209)) ? 1 : 0;
    if (c1210) {
      char* t1211 = __s1204;
      __retval1207 = t1211;
      char* t1212 = __retval1207;
      return t1212;
    }
    _Bool r1213 = std____is_constant_evaluated();
    if (r1213) {
      char* t1214 = __s1204;
      unsigned long t1215 = __n1205;
      char t1216 = __a1206;
      char* r1217 = __gnu_cxx__char_traits_char___assign(t1214, t1215, t1216);
      __retval1207 = r1217;
      char* t1218 = __retval1207;
      return t1218;
    }
  char* t1219 = __s1204;
  void* cast1220 = (void*)t1219;
  char t1221 = __a1206;
  int cast1222 = (int)t1221;
  unsigned long t1223 = __n1205;
  void* r1224 = memset(cast1220, cast1222, t1223);
  char* cast1225 = (char*)r1224;
  __retval1207 = cast1225;
  char* t1226 = __retval1207;
  return t1226;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_S_assignEPcmc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(char* v1227, unsigned long v1228, char v1229) {
bb1230:
  char* __d1231;
  unsigned long __n1232;
  char __c1233;
  __d1231 = v1227;
  __n1232 = v1228;
  __c1233 = v1229;
    unsigned long t1234 = __n1232;
    unsigned long c1235 = 1;
    _Bool c1236 = ((t1234 == c1235)) ? 1 : 0;
    if (c1236) {
      char* t1237 = __d1231;
      std__char_traits_char___assign_2(t1237, &__c1233);
    } else {
      char* t1238 = __d1231;
      unsigned long t1239 = __n1232;
      char t1240 = __c1233;
      char* r1241 = std__char_traits_char___assign(t1238, t1239, t1240);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructEmc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1242, unsigned long v1243, char v1244) {
bb1245:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1246;
  unsigned long __n1247;
  char __c1248;
  this1246 = v1242;
  __n1247 = v1243;
  __c1248 = v1244;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1249 = this1246;
    unsigned long t1250 = __n1247;
    unsigned long c1251 = 15;
    _Bool c1252 = ((t1250 > c1251)) ? 1 : 0;
    if (c1252) {
      unsigned long c1253 = 0;
      char* r1254 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1249, &__n1247, c1253);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1249, r1254);
      unsigned long t1255 = __n1247;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1249, t1255);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1249);
    }
    unsigned long t1256 = __n1247;
    _Bool cast1257 = (_Bool)t1256;
    if (cast1257) {
      char* r1258 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1249);
      unsigned long t1259 = __n1247;
      char t1260 = __c1248;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(r1258, t1259, t1260);
    }
  unsigned long t1261 = __n1247;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1249, t1261);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE4baseEv
char** __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v1262) {
bb1263:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this1264;
  char** __retval1265;
  this1264 = v1262;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t1266 = this1264;
  __retval1265 = &t1266->_M_current;
  char** t1267 = __retval1265;
  return t1267;
}

// function: _ZN9__gnu_cxxmiIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKSB_SE_
long __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v1268, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v1269) {
bb1270:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __lhs1271;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* __rhs1272;
  long __retval1273;
  __lhs1271 = v1268;
  __rhs1272 = v1269;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t1274 = __lhs1271;
  char** r1275 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t1274);
  char* t1276 = *r1275;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t1277 = __rhs1272;
  char** r1278 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(t1277);
  char* t1279 = *r1278;
  long diff1280 = t1276 - t1279;
  __retval1273 = diff1280;
  long t1281 = __retval1273;
  return t1281;
}

// function: _ZSt10__distanceIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEENSt15iterator_traitsIT_E15difference_typeESB_SB_St26random_access_iterator_tag
long std__iterator_traits___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________difference_type_std____distance___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1282, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1283, struct std__random_access_iterator_tag v1284) {
bb1285:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __first1286;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __last1287;
  struct std__random_access_iterator_tag unnamed1288;
  long __retval1289;
  __first1286 = v1282;
  __last1287 = v1283;
  unnamed1288 = v1284;
  long r1290 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__last1287, &__first1286);
  __retval1289 = r1290;
  long t1291 = __retval1289;
  return t1291;
}

// function: _ZSt8distanceIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEENSt15iterator_traitsIT_E15difference_typeESB_SB_
long std__iterator_traits___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________difference_type_std__distance___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1292, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1293) {
bb1294:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __first1295;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __last1296;
  long __retval1297;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp01298;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp11299;
  struct std__random_access_iterator_tag agg_tmp21300;
  __first1295 = v1292;
  __last1296 = v1293;
  agg_tmp01298 = __first1295; // copy
  agg_tmp11299 = __last1296; // copy
  struct std__random_access_iterator_tag r1301 = std__iterator_traits___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______(&__first1295);
  agg_tmp21300 = r1301;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1302 = agg_tmp01298;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1303 = agg_tmp11299;
  struct std__random_access_iterator_tag t1304 = agg_tmp21300;
  long r1305 = std__iterator_traits___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________difference_type_std____distance___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______(t1302, t1303, t1304);
  __retval1297 = r1305;
  long t1306 = __retval1297;
  return t1306;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIN9__gnu_cxx17__normal_iteratorIPcS4_EEEEvT_SA_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__________gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______std__forward_iterator_tag____Guard___Guard(struct _Guard_0* v1307, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1308) {
bb1309:
  struct _Guard_0* this1310;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1311;
  this1310 = v1307;
  __s1311 = v1308;
  struct _Guard_0* t1312 = this1310;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1313 = __s1311;
  t1312->_M_guarded = t1313;
  return;
}

// function: _ZSt12__niter_baseIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEET_N9__gnu_cxx17__normal_iteratorIS7_T0_EE
char* char__std____niter_base_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1314) {
bb1315:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __it1316;
  char* __retval1317;
  __it1316 = v1314;
  char** r1318 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______base___const(&__it1316);
  char* t1319 = *r1318;
  __retval1317 = t1319;
  char* t1320 = __retval1317;
  return t1320;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIN9__gnu_cxx17__normal_iteratorIPcS4_EEEEvS8_T_SA_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______(char* v1321, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1322, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1323) {
bb1324:
  char* __p1325;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __k11326;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __k21327;
  __p1325 = v1321;
  __k11326 = v1322;
  __k21327 = v1323;
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp01328;
    char* t1329 = __p1325;
    agg_tmp01328 = __k11326; // copy
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1330 = agg_tmp01328;
    char* r1331 = char__std____niter_base_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(t1330);
    long r1332 = __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______difference_type___gnu_cxx__operator__char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(&__k21327, &__k11326);
    unsigned long cast1333 = (unsigned long)r1332;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1329, r1331, cast1333);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIN9__gnu_cxx17__normal_iteratorIPcS4_EEEEvT_SA_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__________gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______std__forward_iterator_tag____Guard____Guard(struct _Guard_0* v1334) {
bb1335:
  struct _Guard_0* this1336;
  this1336 = v1334;
  struct _Guard_0* t1337 = this1336;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1338 = t1337->_M_guarded;
    _Bool cast1339 = (_Bool)t1338;
    if (cast1339) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1340 = t1337->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1340);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIN9__gnu_cxx17__normal_iteratorIPcS4_EEEEvT_SA_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1341, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1342, struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ v1343, struct std__forward_iterator_tag v1344) {
bb1345:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1346;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __beg1347;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ __end1348;
  struct std__forward_iterator_tag unnamed1349;
  unsigned long __dnew1350;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp01351;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp11352;
  struct _Guard_0 __guard1353;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp21354;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp31355;
  this1346 = v1341;
  __beg1347 = v1342;
  __end1348 = v1343;
  unnamed1349 = v1344;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1356 = this1346;
  agg_tmp01351 = __beg1347; // copy
  agg_tmp11352 = __end1348; // copy
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1357 = agg_tmp01351;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1358 = agg_tmp11352;
  long r1359 = std__iterator_traits___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________difference_type_std__distance___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______(t1357, t1358);
  unsigned long cast1360 = (unsigned long)r1359;
  __dnew1350 = cast1360;
    unsigned long t1361 = __dnew1350;
    unsigned long c1362 = 15;
    _Bool c1363 = ((t1361 > c1362)) ? 1 : 0;
    if (c1363) {
      unsigned long c1364 = 0;
      char* r1365 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1356, &__dnew1350, c1364);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1356, r1365);
      unsigned long t1366 = __dnew1350;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1356, t1366);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1356);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__________gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______std__forward_iterator_tag____Guard___Guard(&__guard1353, t1356);
    char* r1367 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1356);
    agg_tmp21354 = __beg1347; // copy
    agg_tmp31355 = __end1348; // copy
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1368 = agg_tmp21354;
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t1369 = agg_tmp31355;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______(r1367, t1368, t1369);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1370 = ((void*)0);
    __guard1353._M_guarded = c1370;
    unsigned long t1371 = __dnew1350;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1356, t1371);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__________gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______std__forward_iterator_tag____Guard____Guard(&__guard1353);
  }
  return;
}

// function: _ZSt19__iterator_categoryIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEENSt15iterator_traitsIT_E17iterator_categoryERKSB_
struct std__random_access_iterator_tag std__iterator_traits___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v1372) {
bb1373:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* unnamed1374;
  struct std__random_access_iterator_tag __retval1375;
  unnamed1374 = v1372;
  struct std__random_access_iterator_tag t1376 = __retval1375;
  return t1376;
}

