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
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__less_const_char___ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

char _str[14] = "Test string: ";
char _str_1[2] = "x";
char _str_2[10] = "(n) in f(";
char _str_3[2] = "n";
char _str_4[2] = ")";
char _str_5[26] = "Test string: x(n) in f(n)";
char _str_6[36] = "str3 == \"Test string: x(n) in f(n)\"";
char _str_7[123] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_operator_assign_8_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_8[25] = "basic_string::_M_replace";
char _str_9[24] = "basic_string::_M_create";
char _str_10[21] = "basic_string::append";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* p0);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std____throw_length_error(char* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
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
char* __gnu_cxx__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* p0, char* p1, unsigned long p2);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_char___deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* p0, char* p1, char* p2);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void __gnu_cxx__char_traits_char___assign(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___move(char* p0, char* p1, unsigned long p2);
extern void* memmove(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, char* p3, unsigned long p4, unsigned long p5);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long* p1, unsigned long p2);
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* p0);
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std__allocator_char_* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(char* p0, unsigned long p1, char* p2, unsigned long p3, struct std__allocator_char_* p4);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char____3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char____2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
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
int main();
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
_Bool std__is_constant_evaluated();
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
_Bool std____is_constant_evaluated();
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* p0, char* p1);
void std__char_traits_char___assign(char* p0, char* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0);
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v0) {
bb1:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2;
  struct std__allocator_char_ ref_tmp03;
  this2 = v0;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t4 = this2;
  char* r5 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t4);
  std__allocator_char___allocator_2(&ref_tmp03);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t4->_M_dataplus, r5, &ref_tmp03);
  {
    std__allocator_char____allocator(&ref_tmp03);
  }
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t4);
    unsigned long c6 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t4, c6);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v7) {
bb8:
  struct std__allocator_char_* __a9;
  unsigned long __retval10;
  __a9 = v7;
  unsigned long c11 = -1;
  unsigned long c12 = 1;
  unsigned long b13 = c11 / c12;
  __retval10 = b13;
  unsigned long t14 = __retval10;
  return t14;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v15) {
bb16:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this17;
  struct std__allocator_char_* __retval18;
  this17 = v15;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t19 = this17;
  struct std__allocator_char_* base20 = (struct std__allocator_char_*)((char *)&(t19->_M_dataplus) + 0);
  __retval18 = base20;
  struct std__allocator_char_* t21 = __retval18;
  return t21;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v22, unsigned long* v23) {
bb24:
  unsigned long* __a25;
  unsigned long* __b26;
  unsigned long* __retval27;
  __a25 = v22;
  __b26 = v23;
    unsigned long* t28 = __b26;
    unsigned long t29 = *t28;
    unsigned long* t30 = __a25;
    unsigned long t31 = *t30;
    _Bool c32 = ((t29 < t31)) ? 1 : 0;
    if (c32) {
      unsigned long* t33 = __b26;
      __retval27 = t33;
      unsigned long* t34 = __retval27;
      return t34;
    }
  unsigned long* t35 = __a25;
  __retval27 = t35;
  unsigned long* t36 = __retval27;
  return t36;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v37) {
bb38:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this39;
  unsigned long __retval40;
  unsigned long __diffmax41;
  unsigned long __allocmax42;
  this39 = v37;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t43 = this39;
  unsigned long c44 = 9223372036854775807;
  __diffmax41 = c44;
  struct std__allocator_char_* r45 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t43);
  unsigned long r46 = std__allocator_traits_std__allocator_char_____max_size(r45);
  __allocmax42 = r46;
  unsigned long* r47 = unsigned_long_const__std__min_unsigned_long_(&__diffmax41, &__allocmax42);
  unsigned long t48 = *r47;
  unsigned long c49 = 1;
  unsigned long b50 = t48 - c49;
  __retval40 = b50;
  unsigned long t51 = __retval40;
  return t51;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v52, unsigned long v53, unsigned long v54, char* v55) {
bb56:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this57;
  unsigned long __n158;
  unsigned long __n259;
  char* __s60;
  this57 = v52;
  __n158 = v53;
  __n259 = v54;
  __s60 = v55;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t61 = this57;
    unsigned long r62 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t61);
    unsigned long r63 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t61);
    unsigned long t64 = __n158;
    unsigned long b65 = r63 - t64;
    unsigned long b66 = r62 - b65;
    unsigned long t67 = __n259;
    _Bool c68 = ((b66 < t67)) ? 1 : 0;
    if (c68) {
      char* t69 = __s60;
      std____throw_length_error(t69);
    }
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v70) {
bb71:
  char* __r72;
  char* __retval73;
  __r72 = v70;
  char* t74 = __r72;
  __retval73 = t74;
  char* t75 = __retval73;
  return t75;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v76) {
bb77:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this78;
  char* __retval79;
  this78 = v76;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t80 = this78;
  char* cast81 = (char*)&(t80->field2._M_local_buf);
  char* r82 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast81);
  __retval79 = r82;
  char* t83 = __retval79;
  return t83;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v84) {
bb85:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this86;
  _Bool __retval87;
  this86 = v84;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t88 = this86;
    char* r89 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t88);
    char* r90 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t88);
    _Bool c91 = ((r89 == r90)) ? 1 : 0;
    if (c91) {
        unsigned long t92 = t88->_M_string_length;
        unsigned long c93 = 15;
        _Bool c94 = ((t92 > c93)) ? 1 : 0;
        if (c94) {
          __builtin_unreachable();
        }
      _Bool c95 = 1;
      __retval87 = c95;
      _Bool t96 = __retval87;
      return t96;
    }
  _Bool c97 = 0;
  __retval87 = c97;
  _Bool t98 = __retval87;
  return t98;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v99) {
bb100:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this101;
  unsigned long __retval102;
  unsigned long __sz103;
  this101 = v99;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t104 = this101;
  _Bool r105 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t104);
  unsigned long ternary106;
  if (r105) {
    unsigned long c107 = 15;
    ternary106 = (unsigned long)c107;
  } else {
    unsigned long t108 = t104->field2._M_allocated_capacity;
    ternary106 = (unsigned long)t108;
  }
  __sz103 = ternary106;
    unsigned long t109 = __sz103;
    unsigned long c110 = 15;
    _Bool c111 = ((t109 < c110)) ? 1 : 0;
    _Bool ternary112;
    if (c111) {
      _Bool c113 = 1;
      ternary112 = (_Bool)c113;
    } else {
      unsigned long t114 = __sz103;
      unsigned long r115 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t104);
      _Bool c116 = ((t114 > r115)) ? 1 : 0;
      ternary112 = (_Bool)c116;
    }
    if (ternary112) {
      __builtin_unreachable();
    }
  unsigned long t117 = __sz103;
  __retval102 = t117;
  unsigned long t118 = __retval102;
  return t118;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v119) {
bb120:
  struct std____new_allocator_char_* this121;
  unsigned long __retval122;
  this121 = v119;
  struct std____new_allocator_char_* t123 = this121;
  unsigned long c124 = 9223372036854775807;
  unsigned long c125 = 1;
  unsigned long b126 = c124 / c125;
  __retval122 = b126;
  unsigned long t127 = __retval122;
  return t127;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v128, unsigned long v129, void* v130) {
bb131:
  struct std____new_allocator_char_* this132;
  unsigned long __n133;
  void* unnamed134;
  char* __retval135;
  this132 = v128;
  __n133 = v129;
  unnamed134 = v130;
  struct std____new_allocator_char_* t136 = this132;
    unsigned long t137 = __n133;
    unsigned long r138 = std____new_allocator_char____M_max_size___const(t136);
    _Bool c139 = ((t137 > r138)) ? 1 : 0;
    if (c139) {
        unsigned long t140 = __n133;
        unsigned long c141 = -1;
        unsigned long c142 = 1;
        unsigned long b143 = c141 / c142;
        _Bool c144 = ((t140 > b143)) ? 1 : 0;
        if (c144) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c145 = 1;
    unsigned long c146 = 16;
    _Bool c147 = ((c145 > c146)) ? 1 : 0;
    if (c147) {
      unsigned long __al148;
      unsigned long c149 = 1;
      __al148 = c149;
      unsigned long t150 = __n133;
      unsigned long c151 = 1;
      unsigned long b152 = t150 * c151;
      unsigned long t153 = __al148;
      void* r154 = operator_new_2(b152, t153);
      char* cast155 = (char*)r154;
      __retval135 = cast155;
      char* t156 = __retval135;
      return t156;
    }
  unsigned long t157 = __n133;
  unsigned long c158 = 1;
  unsigned long b159 = t157 * c158;
  void* r160 = operator_new(b159);
  char* cast161 = (char*)r160;
  __retval135 = cast161;
  char* t162 = __retval135;
  return t162;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v163, unsigned long v164) {
bb165:
  struct std__allocator_char_* this166;
  unsigned long __n167;
  char* __retval168;
  this166 = v163;
  __n167 = v164;
  struct std__allocator_char_* t169 = this166;
    _Bool r170 = std____is_constant_evaluated();
    if (r170) {
        unsigned long t171 = __n167;
        unsigned long c172 = 1;
        unsigned long ovr173;
        _Bool ovf174 = __builtin_mul_overflow(t171, c172, &ovr173);
        __n167 = ovr173;
        if (ovf174) {
          std____throw_bad_array_new_length();
        }
      unsigned long t175 = __n167;
      void* r176 = operator_new(t175);
      char* cast177 = (char*)r176;
      __retval168 = cast177;
      char* t178 = __retval168;
      return t178;
    }
  struct std____new_allocator_char_* base179 = (struct std____new_allocator_char_*)((char *)t169 + 0);
  unsigned long t180 = __n167;
  void* c181 = ((void*)0);
  char* r182 = std____new_allocator_char___allocate(base179, t180, c181);
  __retval168 = r182;
  char* t183 = __retval168;
  return t183;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v184, unsigned long v185) {
bb186:
  struct std__allocator_char_* __a187;
  unsigned long __n188;
  char* __retval189;
  __a187 = v184;
  __n188 = v185;
  struct std__allocator_char_* t190 = __a187;
  unsigned long t191 = __n188;
  char* r192 = std__allocator_char___allocate(t190, t191);
  __retval189 = r192;
  char* t193 = __retval189;
  return t193;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v194, unsigned long v195) {
bb196:
  struct std__allocator_char_* __a197;
  unsigned long __n198;
  char* __retval199;
  char* __p200;
  __a197 = v194;
  __n198 = v195;
  struct std__allocator_char_* t201 = __a197;
  unsigned long t202 = __n198;
  char* r203 = std__allocator_traits_std__allocator_char_____allocate(t201, t202);
  __p200 = r203;
  char* t204 = __p200;
  __retval199 = t204;
  char* t205 = __retval199;
  return t205;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v206) {
bb207:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this208;
  struct std__allocator_char_* __retval209;
  this208 = v206;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t210 = this208;
  struct std__allocator_char_* base211 = (struct std__allocator_char_*)((char *)&(t210->_M_dataplus) + 0);
  __retval209 = base211;
  struct std__allocator_char_* t212 = __retval209;
  return t212;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v213, char* v214, unsigned long v215) {
bb216:
  char* __s1217;
  char* __s2218;
  unsigned long __n219;
  char* __retval220;
  __s1217 = v213;
  __s2218 = v214;
  __n219 = v215;
    unsigned long t221 = __n219;
    unsigned long c222 = 0;
    _Bool c223 = ((t221 == c222)) ? 1 : 0;
    if (c223) {
      char* t224 = __s1217;
      __retval220 = t224;
      char* t225 = __retval220;
      return t225;
    }
    _Bool r226 = std____is_constant_evaluated();
    if (r226) {
        unsigned long __i227;
        unsigned long c228 = 0;
        __i227 = c228;
        while (1) {
          unsigned long t230 = __i227;
          unsigned long t231 = __n219;
          _Bool c232 = ((t230 < t231)) ? 1 : 0;
          if (!c232) break;
          char* t233 = __s1217;
          unsigned long t234 = __i227;
          char* ptr235 = &(t233)[t234];
          unsigned long t236 = __i227;
          char* t237 = __s2218;
          char* ptr238 = &(t237)[t236];
          char* r239 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr235, ptr238);
        for_step229: ;
          unsigned long t240 = __i227;
          unsigned long u241 = t240 + 1;
          __i227 = u241;
        }
      char* t242 = __s1217;
      __retval220 = t242;
      char* t243 = __retval220;
      return t243;
    }
  char* t244 = __s1217;
  void* cast245 = (void*)t244;
  char* t246 = __s2218;
  void* cast247 = (void*)t246;
  unsigned long t248 = __n219;
  unsigned long c249 = 1;
  unsigned long b250 = t248 * c249;
  void* r251 = memcpy(cast245, cast247, b250);
  char* t252 = __s1217;
  __retval220 = t252;
  char* t253 = __retval220;
  return t253;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v254, char* v255, unsigned long v256) {
bb257:
  char* __s1258;
  char* __s2259;
  unsigned long __n260;
  char* __retval261;
  __s1258 = v254;
  __s2259 = v255;
  __n260 = v256;
    unsigned long t262 = __n260;
    unsigned long c263 = 0;
    _Bool c264 = ((t262 == c263)) ? 1 : 0;
    if (c264) {
      char* t265 = __s1258;
      __retval261 = t265;
      char* t266 = __retval261;
      return t266;
    }
    _Bool r267 = std____is_constant_evaluated();
    if (r267) {
      char* t268 = __s1258;
      char* t269 = __s2259;
      unsigned long t270 = __n260;
      char* r271 = __gnu_cxx__char_traits_char___copy(t268, t269, t270);
      __retval261 = r271;
      char* t272 = __retval261;
      return t272;
    }
  char* t273 = __s1258;
  void* cast274 = (void*)t273;
  char* t275 = __s2259;
  void* cast276 = (void*)t275;
  unsigned long t277 = __n260;
  void* r278 = memcpy(cast274, cast276, t277);
  char* cast279 = (char*)r278;
  __retval261 = cast279;
  char* t280 = __retval261;
  return t280;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v281, char* v282, unsigned long v283) {
bb284:
  char* __d285;
  char* __s286;
  unsigned long __n287;
  __d285 = v281;
  __s286 = v282;
  __n287 = v283;
    unsigned long t288 = __n287;
    unsigned long c289 = 1;
    _Bool c290 = ((t288 == c289)) ? 1 : 0;
    if (c290) {
      char* t291 = __d285;
      char* t292 = __s286;
      std__char_traits_char___assign(t291, t292);
    } else {
      char* t293 = __d285;
      char* t294 = __s286;
      unsigned long t295 = __n287;
      char* r296 = std__char_traits_char___copy(t293, t294, t295);
    }
  return;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v297, char* v298, unsigned long v299) {
bb300:
  struct std____new_allocator_char_* this301;
  char* __p302;
  unsigned long __n303;
  this301 = v297;
  __p302 = v298;
  __n303 = v299;
  struct std____new_allocator_char_* t304 = this301;
    unsigned long c305 = 1;
    unsigned long c306 = 16;
    _Bool c307 = ((c305 > c306)) ? 1 : 0;
    if (c307) {
      char* t308 = __p302;
      void* cast309 = (void*)t308;
      unsigned long t310 = __n303;
      unsigned long c311 = 1;
      unsigned long b312 = t310 * c311;
      unsigned long c313 = 1;
      operator_delete_3(cast309, b312, c313);
      return;
    }
  char* t314 = __p302;
  void* cast315 = (void*)t314;
  unsigned long t316 = __n303;
  unsigned long c317 = 1;
  unsigned long b318 = t316 * c317;
  operator_delete_2(cast315, b318);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v319, char* v320, unsigned long v321) {
bb322:
  struct std__allocator_char_* this323;
  char* __p324;
  unsigned long __n325;
  this323 = v319;
  __p324 = v320;
  __n325 = v321;
  struct std__allocator_char_* t326 = this323;
    _Bool r327 = std____is_constant_evaluated();
    if (r327) {
      char* t328 = __p324;
      void* cast329 = (void*)t328;
      operator_delete(cast329);
      return;
    }
  struct std____new_allocator_char_* base330 = (struct std____new_allocator_char_*)((char *)t326 + 0);
  char* t331 = __p324;
  unsigned long t332 = __n325;
  std____new_allocator_char___deallocate(base330, t331, t332);
  return;
}

// function: _ZNKSt4lessIPKcEclES1_S1_
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* v333, char* v334, char* v335) {
bb336:
  struct std__less_const_char___* this337;
  char* __x338;
  char* __y339;
  _Bool __retval340;
  this337 = v333;
  __x338 = v334;
  __y339 = v335;
  struct std__less_const_char___* t341 = this337;
    _Bool r342 = std____is_constant_evaluated();
    if (r342) {
      char* t343 = __x338;
      char* t344 = __y339;
      _Bool c345 = ((t343 < t344)) ? 1 : 0;
      __retval340 = c345;
      _Bool t346 = __retval340;
      return t346;
    }
  char* t347 = __x338;
  unsigned long cast348 = (unsigned long)t347;
  char* t349 = __y339;
  unsigned long cast350 = (unsigned long)t349;
  _Bool c351 = ((cast348 < cast350)) ? 1 : 0;
  __retval340 = c351;
  _Bool t352 = __retval340;
  return t352;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_disjunctEPKc
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v353, char* v354) {
bb355:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this356;
  char* __s357;
  _Bool __retval358;
  struct std__less_const_char___ ref_tmp0359;
  this356 = v353;
  __s357 = v354;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t360 = this356;
  char* t361 = __s357;
  char* r362 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t360);
  _Bool r363 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp0359, t361, r362);
  _Bool ternary364;
  if (r363) {
    _Bool c365 = 1;
    ternary364 = (_Bool)c365;
  } else {
    struct std__less_const_char___ ref_tmp1366;
    char* r367 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t360);
    unsigned long r368 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t360);
    char* ptr369 = &(r367)[r368];
    char* t370 = __s357;
    _Bool r371 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp1366, ptr369, t370);
    ternary364 = (_Bool)r371;
  }
  __retval358 = ternary364;
  _Bool t372 = __retval358;
  return t372;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign(char* v373, char* v374) {
bb375:
  char* __c1376;
  char* __c2377;
  __c1376 = v373;
  __c2377 = v374;
    _Bool r378 = std____is_constant_evaluated();
    if (r378) {
      char* t379 = __c1376;
      char* t380 = __c2377;
      char* r381 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t379, t380);
    } else {
      char* t382 = __c2377;
      char t383 = *t382;
      char* t384 = __c1376;
      *t384 = t383;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v385, char* v386, unsigned long v387) {
bb388:
  char* __s1389;
  char* __s2390;
  unsigned long __n391;
  char* __retval392;
  __s1389 = v385;
  __s2390 = v386;
  __n391 = v387;
    unsigned long t393 = __n391;
    unsigned long c394 = 0;
    _Bool c395 = ((t393 == c394)) ? 1 : 0;
    if (c395) {
      char* t396 = __s1389;
      __retval392 = t396;
      char* t397 = __retval392;
      return t397;
    }
    _Bool r398 = std____is_constant_evaluated();
    if (r398) {
        char* t399 = __s2390;
        char* t400 = __s1389;
        _Bool c401 = ((t399 < t400)) ? 1 : 0;
        _Bool isconst402 = 0;
        _Bool ternary403;
        if (isconst402) {
          char* t404 = __s1389;
          char* t405 = __s2390;
          _Bool c406 = ((t404 > t405)) ? 1 : 0;
          ternary403 = (_Bool)c406;
        } else {
          _Bool c407 = 0;
          ternary403 = (_Bool)c407;
        }
        _Bool ternary408;
        if (ternary403) {
          char* t409 = __s1389;
          char* t410 = __s2390;
          unsigned long t411 = __n391;
          char* ptr412 = &(t410)[t411];
          _Bool c413 = ((t409 < ptr412)) ? 1 : 0;
          ternary408 = (_Bool)c413;
        } else {
          _Bool c414 = 0;
          ternary408 = (_Bool)c414;
        }
        if (ternary408) {
            do {
                unsigned long t415 = __n391;
                unsigned long u416 = t415 - 1;
                __n391 = u416;
                unsigned long t417 = __n391;
                char* t418 = __s1389;
                char* ptr419 = &(t418)[t417];
                unsigned long t420 = __n391;
                char* t421 = __s2390;
                char* ptr422 = &(t421)[t420];
                __gnu_cxx__char_traits_char___assign(ptr419, ptr422);
              unsigned long t423 = __n391;
              unsigned long c424 = 0;
              _Bool c425 = ((t423 > c424)) ? 1 : 0;
              if (!c425) break;
            } while (1);
        } else {
          char* t426 = __s1389;
          char* t427 = __s2390;
          unsigned long t428 = __n391;
          char* r429 = __gnu_cxx__char_traits_char___copy(t426, t427, t428);
        }
      char* t430 = __s1389;
      __retval392 = t430;
      char* t431 = __retval392;
      return t431;
    }
  char* t432 = __s1389;
  void* cast433 = (void*)t432;
  char* t434 = __s2390;
  void* cast435 = (void*)t434;
  unsigned long t436 = __n391;
  unsigned long c437 = 1;
  unsigned long b438 = t436 * c437;
  void* r439 = memmove(cast433, cast435, b438);
  char* t440 = __s1389;
  __retval392 = t440;
  char* t441 = __retval392;
  return t441;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v442, char* v443, unsigned long v444) {
bb445:
  char* __s1446;
  char* __s2447;
  unsigned long __n448;
  char* __retval449;
  __s1446 = v442;
  __s2447 = v443;
  __n448 = v444;
    unsigned long t450 = __n448;
    unsigned long c451 = 0;
    _Bool c452 = ((t450 == c451)) ? 1 : 0;
    if (c452) {
      char* t453 = __s1446;
      __retval449 = t453;
      char* t454 = __retval449;
      return t454;
    }
    _Bool r455 = std____is_constant_evaluated();
    if (r455) {
      char* t456 = __s1446;
      char* t457 = __s2447;
      unsigned long t458 = __n448;
      char* r459 = __gnu_cxx__char_traits_char___move(t456, t457, t458);
      __retval449 = r459;
      char* t460 = __retval449;
      return t460;
    }
  char* t461 = __s1446;
  void* cast462 = (void*)t461;
  char* t463 = __s2447;
  void* cast464 = (void*)t463;
  unsigned long t465 = __n448;
  void* r466 = memmove(cast462, cast464, t465);
  char* cast467 = (char*)r466;
  __retval449 = cast467;
  char* t468 = __retval449;
  return t468;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v469, char* v470, unsigned long v471) {
bb472:
  char* __d473;
  char* __s474;
  unsigned long __n475;
  __d473 = v469;
  __s474 = v470;
  __n475 = v471;
    unsigned long t476 = __n475;
    unsigned long c477 = 1;
    _Bool c478 = ((t476 == c477)) ? 1 : 0;
    if (c478) {
      char* t479 = __d473;
      char* t480 = __s474;
      std__char_traits_char___assign(t479, t480);
    } else {
      char* t481 = __d473;
      char* t482 = __s474;
      unsigned long t483 = __n475;
      char* r484 = std__char_traits_char___move(t481, t482, t483);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_replace_coldEPcmPKcmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v485, char* v486, unsigned long v487, char* v488, unsigned long v489, unsigned long v490) {
bb491:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this492;
  char* __p493;
  unsigned long __len1494;
  char* __s495;
  unsigned long __len2496;
  unsigned long __how_much497;
  this492 = v485;
  __p493 = v486;
  __len1494 = v487;
  __s495 = v488;
  __len2496 = v489;
  __how_much497 = v490;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t498 = this492;
    unsigned long t499 = __len2496;
    _Bool cast500 = (_Bool)t499;
    _Bool ternary501;
    if (cast500) {
      unsigned long t502 = __len2496;
      unsigned long t503 = __len1494;
      _Bool c504 = ((t502 <= t503)) ? 1 : 0;
      ternary501 = (_Bool)c504;
    } else {
      _Bool c505 = 0;
      ternary501 = (_Bool)c505;
    }
    if (ternary501) {
      char* t506 = __p493;
      char* t507 = __s495;
      unsigned long t508 = __len2496;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t506, t507, t508);
    }
    unsigned long t509 = __how_much497;
    _Bool cast510 = (_Bool)t509;
    _Bool ternary511;
    if (cast510) {
      unsigned long t512 = __len1494;
      unsigned long t513 = __len2496;
      _Bool c514 = ((t512 != t513)) ? 1 : 0;
      ternary511 = (_Bool)c514;
    } else {
      _Bool c515 = 0;
      ternary511 = (_Bool)c515;
    }
    if (ternary511) {
      char* t516 = __p493;
      unsigned long t517 = __len2496;
      char* ptr518 = &(t516)[t517];
      char* t519 = __p493;
      unsigned long t520 = __len1494;
      char* ptr521 = &(t519)[t520];
      unsigned long t522 = __how_much497;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr518, ptr521, t522);
    }
    unsigned long t523 = __len2496;
    unsigned long t524 = __len1494;
    _Bool c525 = ((t523 > t524)) ? 1 : 0;
    if (c525) {
        char* t526 = __s495;
        unsigned long t527 = __len2496;
        char* ptr528 = &(t526)[t527];
        char* t529 = __p493;
        unsigned long t530 = __len1494;
        char* ptr531 = &(t529)[t530];
        _Bool c532 = ((ptr528 <= ptr531)) ? 1 : 0;
        if (c532) {
          char* t533 = __p493;
          char* t534 = __s495;
          unsigned long t535 = __len2496;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t533, t534, t535);
        } else {
            char* t536 = __s495;
            char* t537 = __p493;
            unsigned long t538 = __len1494;
            char* ptr539 = &(t537)[t538];
            _Bool c540 = ((t536 >= ptr539)) ? 1 : 0;
            if (c540) {
              unsigned long __poff541;
              char* t542 = __s495;
              char* t543 = __p493;
              long diff544 = t542 - t543;
              unsigned long cast545 = (unsigned long)diff544;
              unsigned long t546 = __len2496;
              unsigned long t547 = __len1494;
              unsigned long b548 = t546 - t547;
              unsigned long b549 = cast545 + b548;
              __poff541 = b549;
              char* t550 = __p493;
              char* t551 = __p493;
              unsigned long t552 = __poff541;
              char* ptr553 = &(t551)[t552];
              unsigned long t554 = __len2496;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t550, ptr553, t554);
            } else {
              unsigned long __nleft555;
              char* t556 = __p493;
              unsigned long t557 = __len1494;
              char* ptr558 = &(t556)[t557];
              char* t559 = __s495;
              long diff560 = ptr558 - t559;
              unsigned long cast561 = (unsigned long)diff560;
              __nleft555 = cast561;
              char* t562 = __p493;
              char* t563 = __s495;
              unsigned long t564 = __nleft555;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t562, t563, t564);
              char* t565 = __p493;
              unsigned long t566 = __nleft555;
              char* ptr567 = &(t565)[t566];
              char* t568 = __p493;
              unsigned long t569 = __len2496;
              char* ptr570 = &(t568)[t569];
              unsigned long t571 = __len2496;
              unsigned long t572 = __nleft555;
              unsigned long b573 = t571 - t572;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr567, ptr570, b573);
            }
        }
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v574) {
bb575:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this576;
  unsigned long __retval577;
  this576 = v574;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t578 = this576;
  unsigned long r579 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t578);
  __retval577 = r579;
  unsigned long t580 = __retval577;
  return t580;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v581, unsigned long* v582, unsigned long v583) {
bb584:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this585;
  unsigned long* __capacity586;
  unsigned long __old_capacity587;
  char* __retval588;
  this585 = v581;
  __capacity586 = v582;
  __old_capacity587 = v583;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t589 = this585;
    unsigned long* t590 = __capacity586;
    unsigned long t591 = *t590;
    unsigned long r592 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t589);
    _Bool c593 = ((t591 > r592)) ? 1 : 0;
    if (c593) {
      char* cast594 = (char*)&(_str_9);
      std____throw_length_error(cast594);
    }
    unsigned long* t595 = __capacity586;
    unsigned long t596 = *t595;
    unsigned long t597 = __old_capacity587;
    _Bool c598 = ((t596 > t597)) ? 1 : 0;
    _Bool ternary599;
    if (c598) {
      unsigned long* t600 = __capacity586;
      unsigned long t601 = *t600;
      unsigned long c602 = 2;
      unsigned long t603 = __old_capacity587;
      unsigned long b604 = c602 * t603;
      _Bool c605 = ((t601 < b604)) ? 1 : 0;
      ternary599 = (_Bool)c605;
    } else {
      _Bool c606 = 0;
      ternary599 = (_Bool)c606;
    }
    if (ternary599) {
      unsigned long c607 = 2;
      unsigned long t608 = __old_capacity587;
      unsigned long b609 = c607 * t608;
      unsigned long* t610 = __capacity586;
      *t610 = b609;
        unsigned long* t611 = __capacity586;
        unsigned long t612 = *t611;
        unsigned long r613 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t589);
        _Bool c614 = ((t612 > r613)) ? 1 : 0;
        if (c614) {
          unsigned long r615 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t589);
          unsigned long* t616 = __capacity586;
          *t616 = r615;
        }
    }
  struct std__allocator_char_* r617 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t589);
  unsigned long* t618 = __capacity586;
  unsigned long t619 = *t618;
  unsigned long c620 = 1;
  unsigned long b621 = t619 + c620;
  char* r622 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r617, b621);
  __retval588 = r622;
  char* t623 = __retval588;
  return t623;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v624, char* v625, unsigned long v626) {
bb627:
  struct std__allocator_char_* __a628;
  char* __p629;
  unsigned long __n630;
  __a628 = v624;
  __p629 = v625;
  __n630 = v626;
  struct std__allocator_char_* t631 = __a628;
  char* t632 = __p629;
  unsigned long t633 = __n630;
  std__allocator_char___deallocate(t631, t632, t633);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v634, unsigned long v635) {
bb636:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this637;
  unsigned long __size638;
  this637 = v634;
  __size638 = v635;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t639 = this637;
  struct std__allocator_char_* r640 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t639);
  char* r641 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t639);
  unsigned long t642 = __size638;
  unsigned long c643 = 1;
  unsigned long b644 = t642 + c643;
  std__allocator_traits_std__allocator_char_____deallocate(r640, r641, b644);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v645) {
bb646:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this647;
  this647 = v645;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t648 = this647;
    _Bool r649 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t648);
    _Bool u650 = !r649;
    if (u650) {
      unsigned long t651 = t648->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t648, t651);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v652, char* v653) {
bb654:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this655;
  char* __p656;
  this655 = v652;
  __p656 = v653;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t657 = this655;
  char* t658 = __p656;
  t657->_M_dataplus._M_p = t658;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v659, unsigned long v660) {
bb661:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this662;
  unsigned long __capacity663;
  this662 = v659;
  __capacity663 = v660;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t664 = this662;
  unsigned long t665 = __capacity663;
  t664->field2._M_allocated_capacity = t665;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v666, unsigned long v667, unsigned long v668, char* v669, unsigned long v670) {
bb671:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this672;
  unsigned long __pos673;
  unsigned long __len1674;
  char* __s675;
  unsigned long __len2676;
  unsigned long __how_much677;
  unsigned long __new_capacity678;
  char* __r679;
  this672 = v666;
  __pos673 = v667;
  __len1674 = v668;
  __s675 = v669;
  __len2676 = v670;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t680 = this672;
  unsigned long r681 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t680);
  unsigned long t682 = __pos673;
  unsigned long b683 = r681 - t682;
  unsigned long t684 = __len1674;
  unsigned long b685 = b683 - t684;
  __how_much677 = b685;
  unsigned long r686 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t680);
  unsigned long t687 = __len2676;
  unsigned long b688 = r686 + t687;
  unsigned long t689 = __len1674;
  unsigned long b690 = b688 - t689;
  __new_capacity678 = b690;
  unsigned long r691 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t680);
  char* r692 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t680, &__new_capacity678, r691);
  __r679 = r692;
    unsigned long t693 = __pos673;
    _Bool cast694 = (_Bool)t693;
    if (cast694) {
      char* t695 = __r679;
      char* r696 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t680);
      unsigned long t697 = __pos673;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t695, r696, t697);
    }
    char* t698 = __s675;
    _Bool cast699 = (_Bool)t698;
    _Bool ternary700;
    if (cast699) {
      unsigned long t701 = __len2676;
      _Bool cast702 = (_Bool)t701;
      ternary700 = (_Bool)cast702;
    } else {
      _Bool c703 = 0;
      ternary700 = (_Bool)c703;
    }
    if (ternary700) {
      char* t704 = __r679;
      unsigned long t705 = __pos673;
      char* ptr706 = &(t704)[t705];
      char* t707 = __s675;
      unsigned long t708 = __len2676;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr706, t707, t708);
    }
    unsigned long t709 = __how_much677;
    _Bool cast710 = (_Bool)t709;
    if (cast710) {
      char* t711 = __r679;
      unsigned long t712 = __pos673;
      char* ptr713 = &(t711)[t712];
      unsigned long t714 = __len2676;
      char* ptr715 = &(ptr713)[t714];
      char* r716 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t680);
      unsigned long t717 = __pos673;
      char* ptr718 = &(r716)[t717];
      unsigned long t719 = __len1674;
      char* ptr720 = &(ptr718)[t719];
      unsigned long t721 = __how_much677;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr715, ptr720, t721);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t680);
  char* t722 = __r679;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t680, t722);
  unsigned long t723 = __new_capacity678;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t680, t723);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v724, unsigned long v725, unsigned long v726, char* v727, unsigned long v728) {
bb729:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this730;
  unsigned long __pos731;
  unsigned long __len1732;
  char* __s733;
  unsigned long __len2734;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval735;
  unsigned long __old_size736;
  unsigned long __new_size737;
  this730 = v724;
  __pos731 = v725;
  __len1732 = v726;
  __s733 = v727;
  __len2734 = v728;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t738 = this730;
  unsigned long t739 = __len1732;
  unsigned long t740 = __len2734;
  char* cast741 = (char*)&(_str_8);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t738, t739, t740, cast741);
  unsigned long r742 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t738);
  __old_size736 = r742;
  unsigned long t743 = __old_size736;
  unsigned long t744 = __len2734;
  unsigned long b745 = t743 + t744;
  unsigned long t746 = __len1732;
  unsigned long b747 = b745 - t746;
  __new_size737 = b747;
    unsigned long t748 = __new_size737;
    unsigned long r749 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t738);
    _Bool c750 = ((t748 <= r749)) ? 1 : 0;
    if (c750) {
      char* __p751;
      unsigned long __how_much752;
      char* r753 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t738);
      unsigned long t754 = __pos731;
      char* ptr755 = &(r753)[t754];
      __p751 = ptr755;
      unsigned long t756 = __old_size736;
      unsigned long t757 = __pos731;
      unsigned long b758 = t756 - t757;
      unsigned long t759 = __len1732;
      unsigned long b760 = b758 - t759;
      __how_much752 = b760;
        _Bool r761 = std__is_constant_evaluated();
        if (r761) {
          char* __newp762;
          struct std__allocator_char_* r763 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t738);
          unsigned long t764 = __new_size737;
          char* r765 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r763, t764);
          __newp762 = r765;
          char* t766 = __newp762;
          char* r767 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t738);
          unsigned long t768 = __pos731;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t766, r767, t768);
          char* t769 = __newp762;
          unsigned long t770 = __pos731;
          char* ptr771 = &(t769)[t770];
          char* t772 = __s733;
          unsigned long t773 = __len2734;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr771, t772, t773);
          char* t774 = __newp762;
          unsigned long t775 = __pos731;
          char* ptr776 = &(t774)[t775];
          unsigned long t777 = __len2734;
          char* ptr778 = &(ptr776)[t777];
          char* t779 = __p751;
          unsigned long t780 = __len1732;
          char* ptr781 = &(t779)[t780];
          unsigned long t782 = __how_much752;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr778, ptr781, t782);
          char* r783 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t738);
          char* t784 = __newp762;
          unsigned long t785 = __new_size737;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r783, t784, t785);
          struct std__allocator_char_* r786 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t738);
          char* t787 = __newp762;
          unsigned long t788 = __new_size737;
          std__allocator_char___deallocate(r786, t787, t788);
        } else {
            char* t789 = __s733;
            _Bool r790 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(t738, t789);
            if (r790) {
                unsigned long t791 = __how_much752;
                _Bool cast792 = (_Bool)t791;
                _Bool ternary793;
                if (cast792) {
                  unsigned long t794 = __len1732;
                  unsigned long t795 = __len2734;
                  _Bool c796 = ((t794 != t795)) ? 1 : 0;
                  ternary793 = (_Bool)c796;
                } else {
                  _Bool c797 = 0;
                  ternary793 = (_Bool)c797;
                }
                if (ternary793) {
                  char* t798 = __p751;
                  unsigned long t799 = __len2734;
                  char* ptr800 = &(t798)[t799];
                  char* t801 = __p751;
                  unsigned long t802 = __len1732;
                  char* ptr803 = &(t801)[t802];
                  unsigned long t804 = __how_much752;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr800, ptr803, t804);
                }
                unsigned long t805 = __len2734;
                _Bool cast806 = (_Bool)t805;
                if (cast806) {
                  char* t807 = __p751;
                  char* t808 = __s733;
                  unsigned long t809 = __len2734;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t807, t808, t809);
                }
            } else {
              char* t810 = __p751;
              unsigned long t811 = __len1732;
              char* t812 = __s733;
              unsigned long t813 = __len2734;
              unsigned long t814 = __how_much752;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(t738, t810, t811, t812, t813, t814);
            }
        }
    } else {
      unsigned long t815 = __pos731;
      unsigned long t816 = __len1732;
      char* t817 = __s733;
      unsigned long t818 = __len2734;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t738, t815, t816, t817, t818);
    }
  unsigned long t819 = __new_size737;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t738, t819);
  __retval735 = t738;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t820 = __retval735;
  return t820;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v821) {
bb822:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this823;
  unsigned long __retval824;
  unsigned long __sz825;
  this823 = v821;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t826 = this823;
  unsigned long t827 = t826->_M_string_length;
  __sz825 = t827;
    unsigned long t828 = __sz825;
    unsigned long r829 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t826);
    _Bool c830 = ((t828 > r829)) ? 1 : 0;
    if (c830) {
      __builtin_unreachable();
    }
  unsigned long t831 = __sz825;
  __retval824 = t831;
  unsigned long t832 = __retval824;
  return t832;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v833, char* v834) {
bb835:
  char* __c1836;
  char* __c2837;
  _Bool __retval838;
  __c1836 = v833;
  __c2837 = v834;
  char* t839 = __c1836;
  char t840 = *t839;
  int cast841 = (int)t840;
  char* t842 = __c2837;
  char t843 = *t842;
  int cast844 = (int)t843;
  _Bool c845 = ((cast841 == cast844)) ? 1 : 0;
  __retval838 = c845;
  _Bool t846 = __retval838;
  return t846;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v847) {
bb848:
  char* __p849;
  unsigned long __retval850;
  unsigned long __i851;
  __p849 = v847;
  unsigned long c852 = 0;
  __i851 = c852;
    char ref_tmp0853;
    while (1) {
      unsigned long t854 = __i851;
      char* t855 = __p849;
      char* ptr856 = &(t855)[t854];
      char c857 = 0;
      ref_tmp0853 = c857;
      _Bool r858 = __gnu_cxx__char_traits_char___eq(ptr856, &ref_tmp0853);
      _Bool u859 = !r858;
      if (!u859) break;
      unsigned long t860 = __i851;
      unsigned long u861 = t860 + 1;
      __i851 = u861;
    }
  unsigned long t862 = __i851;
  __retval850 = t862;
  unsigned long t863 = __retval850;
  return t863;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v864) {
bb865:
  char* __s866;
  unsigned long __retval867;
  __s866 = v864;
    _Bool r868 = std____is_constant_evaluated();
    if (r868) {
      char* t869 = __s866;
      unsigned long r870 = __gnu_cxx__char_traits_char___length(t869);
      __retval867 = r870;
      unsigned long t871 = __retval867;
      return t871;
    }
  char* t872 = __s866;
  unsigned long r873 = strlen(t872);
  __retval867 = r873;
  unsigned long t874 = __retval867;
  return t874;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v875, char* v876) {
bb877:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this878;
  char* __s879;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval880;
  this878 = v875;
  __s879 = v876;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t881 = this878;
  unsigned long c882 = 0;
  unsigned long r883 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t881);
  char* t884 = __s879;
  char* t885 = __s879;
  unsigned long r886 = std__char_traits_char___length(t885);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r887 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t881, c882, r883, t884, r886);
  __retval880 = r887;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t888 = __retval880;
  return t888;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v889, char* v890) {
bb891:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this892;
  char* __s893;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval894;
  this892 = v889;
  __s893 = v890;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t895 = this892;
  char* t896 = __s893;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r897 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(t895, t896);
  __retval894 = r897;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t898 = __retval894;
  return t898;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v899, struct std__allocator_char_* v900) {
bb901:
  struct std__allocator_char_* this902;
  struct std__allocator_char_* __a903;
  this902 = v899;
  __a903 = v900;
  struct std__allocator_char_* t904 = this902;
  struct std____new_allocator_char_* base905 = (struct std____new_allocator_char_*)((char *)t904 + 0);
  struct std__allocator_char_* t906 = __a903;
  struct std____new_allocator_char_* base907 = (struct std____new_allocator_char_*)((char *)t906 + 0);
  std____new_allocator_char_____new_allocator(base905, base907);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE37select_on_container_copy_constructionERKS0_
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* v908) {
bb909:
  struct std__allocator_char_* __rhs910;
  struct std__allocator_char_ __retval911;
  __rhs910 = v908;
  struct std__allocator_char_* t912 = __rhs910;
  std__allocator_char___allocator(&__retval911, t912);
  struct std__allocator_char_ t913 = __retval911;
  return t913;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE17_S_select_on_copyERKS1_
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* v914) {
bb915:
  struct std__allocator_char_* __a916;
  struct std__allocator_char_ __retval917;
  __a916 = v914;
  struct std__allocator_char_* t918 = __a916;
  struct std__allocator_char_ r919 = std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(t918);
  __retval917 = r919;
  struct std__allocator_char_ t920 = __retval917;
  return t920;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v921, struct std__allocator_char_* v922) {
bb923:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this924;
  struct std__allocator_char_* __a925;
  this924 = v921;
  __a925 = v922;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t926 = this924;
  char* r927 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t926);
  struct std__allocator_char_* t928 = __a925;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t926->_M_dataplus, r927, t928);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t926);
    unsigned long c929 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t926, c929);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7reserveEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v930, unsigned long v931) {
bb932:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this933;
  unsigned long __res934;
  unsigned long __capacity935;
  char* __tmp936;
  this933 = v930;
  __res934 = v931;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t937 = this933;
  unsigned long r938 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t937);
  __capacity935 = r938;
    unsigned long t939 = __res934;
    unsigned long t940 = __capacity935;
    _Bool c941 = ((t939 <= t940)) ? 1 : 0;
    if (c941) {
      return;
    }
  unsigned long t942 = __capacity935;
  char* r943 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t937, &__res934, t942);
  __tmp936 = r943;
  char* t944 = __tmp936;
  char* r945 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t937);
  unsigned long r946 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t937);
  unsigned long c947 = 1;
  unsigned long b948 = r946 + c947;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t944, r945, b948);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t937);
  char* t949 = __tmp936;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t937, t949);
  unsigned long t950 = __res934;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t937, t950);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v951, char* v952, unsigned long v953) {
bb954:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this955;
  char* __s956;
  unsigned long __n957;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval958;
  unsigned long __len959;
  this955 = v951;
  __s956 = v952;
  __n957 = v953;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t960 = this955;
  unsigned long t961 = __n957;
  unsigned long r962 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t960);
  unsigned long b963 = t961 + r962;
  __len959 = b963;
    unsigned long t964 = __len959;
    unsigned long r965 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t960);
    _Bool c966 = ((t964 <= r965)) ? 1 : 0;
    if (c966) {
        unsigned long t967 = __n957;
        _Bool cast968 = (_Bool)t967;
        if (cast968) {
          char* r969 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t960);
          unsigned long r970 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t960);
          char* ptr971 = &(r969)[r970];
          char* t972 = __s956;
          unsigned long t973 = __n957;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr971, t972, t973);
        }
    } else {
      unsigned long r974 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t960);
      unsigned long c975 = 0;
      char* t976 = __s956;
      unsigned long t977 = __n957;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t960, r974, c975, t976, t977);
    }
  unsigned long t978 = __len959;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t960, t978);
  __retval958 = t960;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t979 = __retval958;
  return t979;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v980, char* v981, unsigned long v982) {
bb983:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this984;
  char* __s985;
  unsigned long __n986;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval987;
  this984 = v980;
  __s985 = v981;
  __n986 = v982;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t988 = this984;
  unsigned long c989 = 0;
  unsigned long t990 = __n986;
  char* cast991 = (char*)&(_str_10);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t988, c989, t990, cast991);
  char* t992 = __s985;
  unsigned long t993 = __n986;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r994 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(t988, t992, t993);
  __retval987 = r994;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t995 = __retval987;
  return t995;
}

// function: _ZSt12__str_concatINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEET_PKNS6_10value_typeENS6_9size_typeES9_SA_RKNS6_14allocator_typeE
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(char* v996, unsigned long v997, char* v998, unsigned long v999, struct std__allocator_char_* v1000) {
bb1001:
  char* __lhs1002;
  unsigned long __lhs_len1003;
  char* __rhs1004;
  unsigned long __rhs_len1005;
  struct std__allocator_char_* __a1006;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval1007;
  _Bool nrvo1008;
  struct std__allocator_char_ ref_tmp01009;
  __lhs1002 = v996;
  __lhs_len1003 = v997;
  __rhs1004 = v998;
  __rhs_len1005 = v999;
  __a1006 = v1000;
  _Bool c1010 = 0;
  nrvo1008 = c1010;
  struct std__allocator_char_* t1011 = __a1006;
  struct std__allocator_char_ r1012 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(t1011);
  ref_tmp01009 = r1012;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_2(&__retval1007, &ref_tmp01009);
  {
    std__allocator_char____allocator(&ref_tmp01009);
  }
    unsigned long t1013 = __lhs_len1003;
    unsigned long t1014 = __rhs_len1005;
    unsigned long b1015 = t1013 + t1014;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(&__retval1007, b1015);
    char* t1016 = __lhs1002;
    unsigned long t1017 = __lhs_len1003;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1018 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(&__retval1007, t1016, t1017);
    char* t1019 = __rhs1004;
    unsigned long t1020 = __rhs_len1005;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1021 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(&__retval1007, t1019, t1020);
    _Bool c1022 = 1;
    nrvo1008 = c1022;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1023 = __retval1007;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ret_val1024 = t1023;
    {
      _Bool t1025 = nrvo1008;
      _Bool u1026 = !t1025;
      if (u1026) {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&__retval1007);
      }
    }
    return ret_val1024;
  abort();
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5c_strEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1027) {
bb1028:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1029;
  char* __retval1030;
  this1029 = v1027;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1031 = this1029;
  char* r1032 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1031);
  __retval1030 = r1032;
  char* t1033 = __retval1030;
  return t1033;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13get_allocatorEv
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1034) {
bb1035:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1036;
  struct std__allocator_char_ __retval1037;
  this1036 = v1034;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1038 = this1036;
  struct std__allocator_char_* r1039 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1038);
  std__allocator_char___allocator(&__retval1037, r1039);
  struct std__allocator_char_ t1040 = __retval1037;
  return t1040;
}

// function: _ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_SA_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char____3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1041, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1042) {
bb1043:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs1044;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __rhs1045;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval1046;
  struct std__allocator_char_ ref_tmp01047;
  __lhs1044 = v1041;
  __rhs1045 = v1042;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1048 = __lhs1044;
  char* r1049 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(t1048);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1050 = __lhs1044;
  unsigned long r1051 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1050);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1052 = __rhs1045;
  char* r1053 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(t1052);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1054 = __rhs1045;
  unsigned long r1055 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1054);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1056 = __lhs1044;
  struct std__allocator_char_ r1057 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(t1056);
  ref_tmp01047 = r1057;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1058 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(r1049, r1051, r1053, r1055, &ref_tmp01047);
    __retval1046 = r1058;
  {
    std__allocator_char____allocator(&ref_tmp01047);
  }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1059 = __retval1046;
  return t1059;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_move_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign() {
bb1060:
  _Bool __retval1061;
  _Bool t1062 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval1061 = t1062;
  _Bool t1063 = __retval1061;
  return t1063;
}

// function: _ZNSt15__new_allocatorIcEaSERKS0_
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* v1064, struct std____new_allocator_char_* v1065) {
bb1066:
  struct std____new_allocator_char_* this1067;
  struct std____new_allocator_char_* unnamed1068;
  struct std____new_allocator_char_* __retval1069;
  this1067 = v1064;
  unnamed1068 = v1065;
  struct std____new_allocator_char_* t1070 = this1067;
  __retval1069 = t1070;
  struct std____new_allocator_char_* t1071 = __retval1069;
  return t1071;
}

// function: _ZNSaIcEaSERKS_
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* v1072, struct std__allocator_char_* v1073) {
bb1074:
  struct std__allocator_char_* this1075;
  struct std__allocator_char_* unnamed1076;
  struct std__allocator_char_* __retval1077;
  this1075 = v1072;
  unnamed1076 = v1073;
  struct std__allocator_char_* t1078 = this1075;
  struct std____new_allocator_char_* base1079 = (struct std____new_allocator_char_*)((char *)t1078 + 0);
  struct std__allocator_char_* t1080 = unnamed1076;
  struct std____new_allocator_char_* base1081 = (struct std____new_allocator_char_*)((char *)t1080 + 0);
  struct std____new_allocator_char_* r1082 = std____new_allocator_char___operator_(base1079, base1081);
  __retval1077 = t1078;
  struct std__allocator_char_* t1083 = __retval1077;
  return t1083;
}

// function: _ZSt15__alloc_on_moveISaIcEEvRT_S2_
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* v1084, struct std__allocator_char_* v1085) {
bb1086:
  struct std__allocator_char_* __one1087;
  struct std__allocator_char_* __two1088;
  __one1087 = v1084;
  __two1088 = v1085;
    struct std__allocator_char_* t1089 = __two1088;
    struct std__allocator_char_* t1090 = __one1087;
    struct std__allocator_char_* r1091 = std__allocator_char___operator_(t1090, t1089);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1092) {
bb1093:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1094;
  char* __retval1095;
  this1094 = v1092;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1096 = this1094;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1096);
  char* r1097 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t1096);
  __retval1095 = r1097;
  char* t1098 = __retval1095;
  return t1098;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1099, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1100) {
bb1101:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1102;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1103;
  this1102 = v1099;
  __str1103 = v1100;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1104 = this1102;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1105 = __str1103;
    _Bool c1106 = ((t1104 != t1105)) ? 1 : 0;
    if (c1106) {
      unsigned long __rsize1107;
      unsigned long __capacity1108;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1109 = __str1103;
      unsigned long r1110 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t1109);
      __rsize1107 = r1110;
      unsigned long r1111 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t1104);
      __capacity1108 = r1111;
        unsigned long t1112 = __rsize1107;
        unsigned long t1113 = __capacity1108;
        _Bool c1114 = ((t1112 > t1113)) ? 1 : 0;
        if (c1114) {
          unsigned long __new_capacity1115;
          char* __tmp1116;
          unsigned long t1117 = __rsize1107;
          __new_capacity1115 = t1117;
          unsigned long t1118 = __capacity1108;
          char* r1119 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1104, &__new_capacity1115, t1118);
          __tmp1116 = r1119;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1104);
          char* t1120 = __tmp1116;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1104, t1120);
          unsigned long t1121 = __new_capacity1115;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1104, t1121);
        }
        unsigned long t1122 = __rsize1107;
        _Bool cast1123 = (_Bool)t1122;
        if (cast1123) {
          char* r1124 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1104);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1125 = __str1103;
          char* r1126 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1125);
          unsigned long t1127 = __rsize1107;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1124, r1126, t1127);
        }
      unsigned long t1128 = __rsize1107;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1104, t1128);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5clearEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1129) {
bb1130:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1131;
  this1131 = v1129;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1132 = this1131;
  unsigned long c1133 = 0;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1132, c1133);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEOS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1134, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1135) {
bb1136:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1137;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1138;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1139;
  _Bool __equal_allocs1140;
  this1137 = v1134;
  __str1138 = v1135;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1141 = this1137;
  _Bool c1142 = 1;
  __equal_allocs1140 = c1142;
    _Bool r1143 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1141);
    _Bool u1144 = !r1143;
    _Bool ternary1145;
    if (u1144) {
      _Bool r1146 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
      ternary1145 = (_Bool)r1146;
    } else {
      _Bool c1147 = 0;
      ternary1145 = (_Bool)c1147;
    }
    _Bool ternary1148;
    if (ternary1145) {
      _Bool t1149 = __equal_allocs1140;
      _Bool u1150 = !t1149;
      ternary1148 = (_Bool)u1150;
    } else {
      _Bool c1151 = 0;
      ternary1148 = (_Bool)c1151;
    }
    if (ternary1148) {
      unsigned long t1152 = t1141->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1141, t1152);
      char* r1153 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t1141);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1141, r1153);
      unsigned long c1154 = 0;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1141, c1154);
    }
  struct std__allocator_char_* r1155 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1141);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1156 = __str1138;
  struct std__allocator_char_* r1157 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1156);
  void_std____alloc_on_move_std__allocator_char___(r1155, r1157);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1158 = __str1138;
    _Bool r1159 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1158);
    if (r1159) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1160 = __str1138;
        _Bool c1161 = ((t1160 != t1141)) ? 1 : 0;
        if (c1161) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1162 = __str1138;
            unsigned long r1163 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1162);
            _Bool cast1164 = (_Bool)r1163;
            if (cast1164) {
              char* r1165 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1141);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1166 = __str1138;
              char* r1167 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1166);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1168 = __str1138;
              unsigned long r1169 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1168);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1165, r1167, r1169);
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1170 = __str1138;
          unsigned long r1171 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1170);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1141, r1171);
        }
    } else {
        _Bool r1172 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
        _Bool ternary1173;
        if (r1172) {
          _Bool c1174 = 1;
          ternary1173 = (_Bool)c1174;
        } else {
          _Bool t1175 = __equal_allocs1140;
          ternary1173 = (_Bool)t1175;
        }
        if (ternary1173) {
          char* __data1176;
          unsigned long __capacity1177;
          char* c1178 = ((void*)0);
          __data1176 = c1178;
            _Bool r1179 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1141);
            _Bool u1180 = !r1179;
            if (u1180) {
                _Bool t1181 = __equal_allocs1140;
                if (t1181) {
                  char* r1182 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1141);
                  __data1176 = r1182;
                  unsigned long t1183 = t1141->field2._M_allocated_capacity;
                  __capacity1177 = t1183;
                } else {
                  unsigned long t1184 = t1141->field2._M_allocated_capacity;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1141, t1184);
                }
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1185 = __str1138;
          char* r1186 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1185);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1141, r1186);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1187 = __str1138;
          unsigned long r1188 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t1187);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1141, r1188);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1189 = __str1138;
          unsigned long t1190 = t1189->field2._M_allocated_capacity;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1141, t1190);
            char* t1191 = __data1176;
            _Bool cast1192 = (_Bool)t1191;
            if (cast1192) {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1193 = __str1138;
              char* t1194 = __data1176;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1193, t1194);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1195 = __str1138;
              unsigned long t1196 = __capacity1177;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1195, t1196);
            } else {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1197 = __str1138;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1198 = __str1138;
              char* r1199 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t1198);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1197, r1199);
            }
        } else {
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1200 = __str1138;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t1141, t1200);
        }
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1201 = __str1138;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(t1201);
  __retval1139 = t1141;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1202 = __retval1139;
  return t1202;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1203) {
bb1204:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1205;
  this1205 = v1203;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1206 = this1205;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1206);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1206->_M_dataplus);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1207, char* v1208) {
bb1209:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1210;
  char* __s1211;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1212;
  unsigned long __n1213;
  this1210 = v1207;
  __s1211 = v1208;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1214 = this1210;
  char* t1215 = __s1211;
  unsigned long r1216 = std__char_traits_char___length(t1215);
  __n1213 = r1216;
  unsigned long c1217 = 0;
  unsigned long t1218 = __n1213;
  char* cast1219 = (char*)&(_str_10);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t1214, c1217, t1218, cast1219);
  char* t1220 = __s1211;
  unsigned long t1221 = __n1213;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1222 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(t1214, t1220, t1221);
  __retval1212 = r1222;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1223 = __retval1212;
  return t1223;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EOS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1224, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1225) {
bb1226:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1227;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1228;
  this1227 = v1224;
  __str1228 = v1225;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1229 = this1227;
  char* r1230 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t1229);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1231 = __str1228;
  struct std__allocator_char_* r1232 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1231);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t1229->_M_dataplus, r1230, r1232);
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1233 = __str1228;
      _Bool r1234 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1233);
      if (r1234) {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1229);
        char* cast1235 = (char*)&(t1229->field2._M_local_buf);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1236 = __str1228;
        char* cast1237 = (char*)&(t1236->field2._M_local_buf);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1238 = __str1228;
        unsigned long r1239 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t1238);
        unsigned long c1240 = 1;
        unsigned long b1241 = r1239 + c1240;
        char* r1242 = std__char_traits_char___copy(cast1235, cast1237, b1241);
      } else {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1243 = __str1228;
        char* r1244 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1243);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1229, r1244);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1245 = __str1228;
        unsigned long t1246 = t1245->field2._M_allocated_capacity;
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1229, t1246);
      }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1247 = __str1228;
    unsigned long r1248 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t1247);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1229, r1248);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1249 = __str1228;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1250 = __str1228;
    char* r1251 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t1250);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1249, r1251);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1252 = __str1228;
    unsigned long c1253 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1252, c1253);
  return;
}

// function: _ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEOS8_PKS5_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1254, char* v1255) {
bb1256:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs1257;
  char* __rhs1258;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval1259;
  __lhs1257 = v1254;
  __rhs1258 = v1255;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1260 = __lhs1257;
  char* t1261 = __rhs1258;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1262 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(t1260, t1261);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&__retval1259, r1262);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1263 = __retval1259;
  return t1263;
}

// function: _ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_PKS5_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char____2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1264, char* v1265) {
bb1266:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs1267;
  char* __rhs1268;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval1269;
  struct std__allocator_char_ ref_tmp01270;
  __lhs1267 = v1264;
  __rhs1268 = v1265;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1271 = __lhs1267;
  char* r1272 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(t1271);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1273 = __lhs1267;
  unsigned long r1274 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1273);
  char* t1275 = __rhs1268;
  char* t1276 = __rhs1268;
  unsigned long r1277 = std__char_traits_char___length(t1276);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1278 = __lhs1267;
  struct std__allocator_char_ r1279 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(t1278);
  ref_tmp01270 = r1279;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1280 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(r1272, r1274, t1275, r1277, &ref_tmp01270);
    __retval1269 = r1280;
  {
    std__allocator_char____allocator(&ref_tmp01270);
  }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1281 = __retval1269;
  return t1281;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v1282, char* v1283) {
bb1284:
  char* __c11285;
  char* __c21286;
  _Bool __retval1287;
  __c11285 = v1282;
  __c21286 = v1283;
  char* t1288 = __c11285;
  char t1289 = *t1288;
  unsigned char cast1290 = (unsigned char)t1289;
  int cast1291 = (int)cast1290;
  char* t1292 = __c21286;
  char t1293 = *t1292;
  unsigned char cast1294 = (unsigned char)t1293;
  int cast1295 = (int)cast1294;
  _Bool c1296 = ((cast1291 < cast1295)) ? 1 : 0;
  __retval1287 = c1296;
  _Bool t1297 = __retval1287;
  return t1297;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v1298, char* v1299, unsigned long v1300) {
bb1301:
  char* __s11302;
  char* __s21303;
  unsigned long __n1304;
  int __retval1305;
  __s11302 = v1298;
  __s21303 = v1299;
  __n1304 = v1300;
    unsigned long t1306 = __n1304;
    unsigned long c1307 = 0;
    _Bool c1308 = ((t1306 == c1307)) ? 1 : 0;
    if (c1308) {
      int c1309 = 0;
      __retval1305 = c1309;
      int t1310 = __retval1305;
      return t1310;
    }
    _Bool r1311 = std____is_constant_evaluated();
    if (r1311) {
        unsigned long __i1312;
        unsigned long c1313 = 0;
        __i1312 = c1313;
        while (1) {
          unsigned long t1315 = __i1312;
          unsigned long t1316 = __n1304;
          _Bool c1317 = ((t1315 < t1316)) ? 1 : 0;
          if (!c1317) break;
            unsigned long t1318 = __i1312;
            char* t1319 = __s11302;
            char* ptr1320 = &(t1319)[t1318];
            unsigned long t1321 = __i1312;
            char* t1322 = __s21303;
            char* ptr1323 = &(t1322)[t1321];
            _Bool r1324 = std__char_traits_char___lt(ptr1320, ptr1323);
            if (r1324) {
              int c1325 = -1;
              __retval1305 = c1325;
              int t1326 = __retval1305;
              int ret_val1327 = t1326;
              return ret_val1327;
            } else {
                unsigned long t1328 = __i1312;
                char* t1329 = __s21303;
                char* ptr1330 = &(t1329)[t1328];
                unsigned long t1331 = __i1312;
                char* t1332 = __s11302;
                char* ptr1333 = &(t1332)[t1331];
                _Bool r1334 = std__char_traits_char___lt(ptr1330, ptr1333);
                if (r1334) {
                  int c1335 = 1;
                  __retval1305 = c1335;
                  int t1336 = __retval1305;
                  int ret_val1337 = t1336;
                  return ret_val1337;
                }
            }
        for_step1314: ;
          unsigned long t1338 = __i1312;
          unsigned long u1339 = t1338 + 1;
          __i1312 = u1339;
        }
      int c1340 = 0;
      __retval1305 = c1340;
      int t1341 = __retval1305;
      return t1341;
    }
  char* t1342 = __s11302;
  void* cast1343 = (void*)t1342;
  char* t1344 = __s21303;
  void* cast1345 = (void*)t1344;
  unsigned long t1346 = __n1304;
  int r1347 = memcmp(cast1343, cast1345, t1346);
  __retval1305 = r1347;
  int t1348 = __retval1305;
  return t1348;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1349) {
bb1350:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1351;
  char* __retval1352;
  this1351 = v1349;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1353 = this1351;
  char* r1354 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1353);
  __retval1352 = r1354;
  char* t1355 = __retval1352;
  return t1355;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1356, char* v1357) {
bb1358:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs1359;
  char* __rhs1360;
  _Bool __retval1361;
  __lhs1359 = v1356;
  __rhs1360 = v1357;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1362 = __lhs1359;
  unsigned long r1363 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1362);
  char* t1364 = __rhs1360;
  unsigned long r1365 = std__char_traits_char___length(t1364);
  _Bool c1366 = ((r1363 == r1365)) ? 1 : 0;
  _Bool ternary1367;
  if (c1366) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1368 = __lhs1359;
    char* r1369 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t1368);
    char* t1370 = __rhs1360;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1371 = __lhs1359;
    unsigned long r1372 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1371);
    int r1373 = std__char_traits_char___compare(r1369, t1370, r1372);
    _Bool cast1374 = (_Bool)r1373;
    _Bool u1375 = !cast1374;
    ternary1367 = (_Bool)u1375;
  } else {
    _Bool c1376 = 0;
    ternary1367 = (_Bool)c1376;
  }
  __retval1361 = ternary1367;
  _Bool t1377 = __retval1361;
  return t1377;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v1378, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1379) {
bb1380:
  struct std__basic_ostream_char__std__char_traits_char__* __os1381;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1382;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1383;
  __os1381 = v1378;
  __str1382 = v1379;
  struct std__basic_ostream_char__std__char_traits_char__* t1384 = __os1381;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1385 = __str1382;
  char* r1386 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t1385);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1387 = __str1382;
  unsigned long r1388 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1387);
  long cast1389 = (long)r1388;
  struct std__basic_ostream_char__std__char_traits_char__* r1390 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1384, r1386, cast1389);
  __retval1383 = r1390;
  struct std__basic_ostream_char__std__char_traits_char__* t1391 = __retval1383;
  return t1391;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1392, void* v1393) {
bb1394:
  struct std__basic_ostream_char__std__char_traits_char__* this1395;
  void* __pf1396;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1397;
  this1395 = v1392;
  __pf1396 = v1393;
  struct std__basic_ostream_char__std__char_traits_char__* t1398 = this1395;
  void* t1399 = __pf1396;
  struct std__basic_ostream_char__std__char_traits_char__* r1400 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1399)(t1398);
  __retval1397 = r1400;
  struct std__basic_ostream_char__std__char_traits_char__* t1401 = __retval1397;
  return t1401;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1402) {
bb1403:
  struct std__basic_ostream_char__std__char_traits_char__* __os1404;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1405;
  __os1404 = v1402;
  struct std__basic_ostream_char__std__char_traits_char__* t1406 = __os1404;
  struct std__basic_ostream_char__std__char_traits_char__* r1407 = std__ostream__flush(t1406);
  __retval1405 = r1407;
  struct std__basic_ostream_char__std__char_traits_char__* t1408 = __retval1405;
  return t1408;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1409) {
bb1410:
  struct std__ctype_char_* __f1411;
  struct std__ctype_char_* __retval1412;
  __f1411 = v1409;
    struct std__ctype_char_* t1413 = __f1411;
    _Bool cast1414 = (_Bool)t1413;
    _Bool u1415 = !cast1414;
    if (u1415) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t1416 = __f1411;
  __retval1412 = t1416;
  struct std__ctype_char_* t1417 = __retval1412;
  return t1417;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1418, char v1419) {
bb1420:
  struct std__ctype_char_* this1421;
  char __c1422;
  char __retval1423;
  this1421 = v1418;
  __c1422 = v1419;
  struct std__ctype_char_* t1424 = this1421;
    char t1425 = t1424->_M_widen_ok;
    _Bool cast1426 = (_Bool)t1425;
    if (cast1426) {
      char t1427 = __c1422;
      unsigned char cast1428 = (unsigned char)t1427;
      unsigned long cast1429 = (unsigned long)cast1428;
      char t1430 = t1424->_M_widen[cast1429];
      __retval1423 = t1430;
      char t1431 = __retval1423;
      return t1431;
    }
  std__ctype_char____M_widen_init___const(t1424);
  char t1432 = __c1422;
  void** v1433 = (void**)t1424;
  void* v1434 = *((void**)v1433);
  char vcall1437 = (char)__VERIFIER_virtual_call_char_char(t1424, 6, t1432);
  __retval1423 = vcall1437;
  char t1438 = __retval1423;
  return t1438;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1439, char v1440) {
bb1441:
  struct std__basic_ios_char__std__char_traits_char__* this1442;
  char __c1443;
  char __retval1444;
  this1442 = v1439;
  __c1443 = v1440;
  struct std__basic_ios_char__std__char_traits_char__* t1445 = this1442;
  struct std__ctype_char_* t1446 = t1445->_M_ctype;
  struct std__ctype_char_* r1447 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1446);
  char t1448 = __c1443;
  char r1449 = std__ctype_char___widen_char__const(r1447, t1448);
  __retval1444 = r1449;
  char t1450 = __retval1444;
  return t1450;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1451) {
bb1452:
  struct std__basic_ostream_char__std__char_traits_char__* __os1453;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1454;
  __os1453 = v1451;
  struct std__basic_ostream_char__std__char_traits_char__* t1455 = __os1453;
  struct std__basic_ostream_char__std__char_traits_char__* t1456 = __os1453;
  void** v1457 = (void**)t1456;
  void* v1458 = *((void**)v1457);
  unsigned char* cast1459 = (unsigned char*)v1458;
  long c1460 = -24;
  unsigned char* ptr1461 = &(cast1459)[c1460];
  long* cast1462 = (long*)ptr1461;
  long t1463 = *cast1462;
  unsigned char* cast1464 = (unsigned char*)t1456;
  unsigned char* ptr1465 = &(cast1464)[t1463];
  struct std__basic_ostream_char__std__char_traits_char__* cast1466 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1465;
  struct std__basic_ios_char__std__char_traits_char__* cast1467 = (struct std__basic_ios_char__std__char_traits_char__*)cast1466;
  char c1468 = 10;
  char r1469 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1467, c1468);
  struct std__basic_ostream_char__std__char_traits_char__* r1470 = std__ostream__put(t1455, r1469);
  struct std__basic_ostream_char__std__char_traits_char__* r1471 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1470);
  __retval1454 = r1471;
  struct std__basic_ostream_char__std__char_traits_char__* t1472 = __retval1454;
  return t1472;
}

// function: main
int main() {
bb1473:
  int __retval1474;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str11475;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str21476;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str31477;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str41478;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str51479;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp01480;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup1481;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp11482;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp21483;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp31484;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup1485;
  int c1486 = 0;
  __retval1474 = c1486;
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str11475);
    _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str21476);
      _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str31477);
        _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str41478);
          _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str51479);
            char* cast1487 = (char*)&(_str);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1488 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(&str11475, cast1487);
            char* cast1489 = (char*)&(_str_1);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1490 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(&str21476, cast1489);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1491 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char____3(&str11475, &str21476);
            ref_tmp01480 = r1491;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1492 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&str31477, &ref_tmp01480);
              tmp_exprcleanup1481 = r1492;
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp01480);
            }
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1493 = tmp_exprcleanup1481;
            char* cast1494 = (char*)&(_str_2);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1495 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char____2(&str31477, cast1494);
            ref_tmp31484 = r1495;
              char* cast1496 = (char*)&(_str_3);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1497 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(&ref_tmp31484, cast1496);
              ref_tmp21483 = r1497;
                char* cast1498 = (char*)&(_str_4);
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1499 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(&ref_tmp21483, cast1498);
                ref_tmp11482 = r1499;
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1500 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&str41478, &ref_tmp11482);
                  tmp_exprcleanup1485 = r1500;
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp11482);
                }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp21483);
              }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp31484);
            }
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1501 = tmp_exprcleanup1485;
            char* cast1502 = (char*)&(_str_5);
            _Bool r1503 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str31477, cast1502);
            if (r1503) {
            } else {
              char* cast1504 = (char*)&(_str_6);
              char* c1505 = _str_7;
              unsigned int c1506 = 25;
              char* cast1507 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast1504, c1505, c1506, cast1507);
            }
            struct std__basic_ostream_char__std__char_traits_char__* r1508 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str31477);
            struct std__basic_ostream_char__std__char_traits_char__* r1509 = std__ostream__operator___std__ostream_____(r1508, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            int c1510 = 0;
            __retval1474 = c1510;
            int t1511 = __retval1474;
            int ret_val1512 = t1511;
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str51479);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str41478);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str31477);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str21476);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str11475);
            }
            return ret_val1512;
  int t1513 = __retval1474;
  return t1513;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1514) {
bb1515:
  char* __r1516;
  char* __retval1517;
  __r1516 = v1514;
  char* t1518 = __r1516;
  __retval1517 = t1518;
  char* t1519 = __retval1517;
  return t1519;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1520) {
bb1521:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1522;
  char* __retval1523;
  this1522 = v1520;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1524 = this1522;
  char* cast1525 = (char*)&(t1524->field2._M_local_buf);
  char* r1526 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1525);
  __retval1523 = r1526;
  char* t1527 = __retval1523;
  return t1527;
}

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v1528) {
bb1529:
  struct std__allocator_char_* this1530;
  this1530 = v1528;
  struct std__allocator_char_* t1531 = this1530;
  struct std____new_allocator_char_* base1532 = (struct std____new_allocator_char_*)((char *)t1531 + 0);
  std____new_allocator_char_____new_allocator_2(base1532);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1533, char* v1534, struct std__allocator_char_* v1535) {
bb1536:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1537;
  char* __dat1538;
  struct std__allocator_char_* __a1539;
  this1537 = v1533;
  __dat1538 = v1534;
  __a1539 = v1535;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1540 = this1537;
  struct std__allocator_char_* base1541 = (struct std__allocator_char_*)((char *)t1540 + 0);
  struct std__allocator_char_* t1542 = __a1539;
  std__allocator_char___allocator(base1541, t1542);
    char* t1543 = __dat1538;
    t1540->_M_p = t1543;
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v1544) {
bb1545:
  struct std__allocator_char_* this1546;
  this1546 = v1544;
  struct std__allocator_char_* t1547 = this1546;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1548:
  _Bool __retval1549;
    _Bool c1550 = 0;
    __retval1549 = c1550;
    _Bool t1551 = __retval1549;
    return t1551;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1552) {
bb1553:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1554;
  this1554 = v1552;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1555 = this1554;
    _Bool r1556 = std__is_constant_evaluated();
    if (r1556) {
        unsigned long __i1557;
        unsigned long c1558 = 0;
        __i1557 = c1558;
        while (1) {
          unsigned long t1560 = __i1557;
          unsigned long c1561 = 15;
          _Bool c1562 = ((t1560 <= c1561)) ? 1 : 0;
          if (!c1562) break;
          char c1563 = 0;
          unsigned long t1564 = __i1557;
          t1555->field2._M_local_buf[t1564] = c1563;
        for_step1559: ;
          unsigned long t1565 = __i1557;
          unsigned long u1566 = t1565 + 1;
          __i1557 = u1566;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1567, unsigned long v1568) {
bb1569:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1570;
  unsigned long __length1571;
  this1570 = v1567;
  __length1571 = v1568;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1572 = this1570;
  unsigned long t1573 = __length1571;
  t1572->_M_string_length = t1573;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1574:
  _Bool __retval1575;
    _Bool c1576 = 0;
    __retval1575 = c1576;
    _Bool t1577 = __retval1575;
    return t1577;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1578, char* v1579) {
bb1580:
  char* __location1581;
  char* __args1582;
  char* __retval1583;
  void* __loc1584;
  __location1581 = v1578;
  __args1582 = v1579;
  char* t1585 = __location1581;
  void* cast1586 = (void*)t1585;
  __loc1584 = cast1586;
    void* t1587 = __loc1584;
    char* cast1588 = (char*)t1587;
    char* t1589 = __args1582;
    char t1590 = *t1589;
    *cast1588 = t1590;
    __retval1583 = cast1588;
    char* t1591 = __retval1583;
    return t1591;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1592, char* v1593) {
bb1594:
  char* __c11595;
  char* __c21596;
  __c11595 = v1592;
  __c21596 = v1593;
    _Bool r1597 = std____is_constant_evaluated();
    if (r1597) {
      char* t1598 = __c11595;
      char* t1599 = __c21596;
      char* r1600 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1598, t1599);
    } else {
      char* t1601 = __c21596;
      char t1602 = *t1601;
      char* t1603 = __c11595;
      *t1603 = t1602;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1604) {
bb1605:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1606;
  char* __retval1607;
  this1606 = v1604;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1608 = this1606;
  char* t1609 = t1608->_M_dataplus._M_p;
  __retval1607 = t1609;
  char* t1610 = __retval1607;
  return t1610;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1611, unsigned long v1612) {
bb1613:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1614;
  unsigned long __n1615;
  char ref_tmp01616;
  this1614 = v1611;
  __n1615 = v1612;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1617 = this1614;
  unsigned long t1618 = __n1615;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1617, t1618);
  unsigned long t1619 = __n1615;
  char* r1620 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1617);
  char* ptr1621 = &(r1620)[t1619];
  char c1622 = 0;
  ref_tmp01616 = c1622;
  std__char_traits_char___assign(ptr1621, &ref_tmp01616);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1623) {
bb1624:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1625;
  this1625 = v1623;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1626 = this1625;
  {
    struct std__allocator_char_* base1627 = (struct std__allocator_char_*)((char *)t1626 + 0);
    std__allocator_char____allocator(base1627);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1628) {
bb1629:
  struct std____new_allocator_char_* this1630;
  this1630 = v1628;
  struct std____new_allocator_char_* t1631 = this1630;
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1632, struct std____new_allocator_char_* v1633) {
bb1634:
  struct std____new_allocator_char_* this1635;
  struct std____new_allocator_char_* unnamed1636;
  this1635 = v1632;
  unnamed1636 = v1633;
  struct std____new_allocator_char_* t1637 = this1635;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1638, char* v1639, struct std__allocator_char_* v1640) {
bb1641:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1642;
  char* __dat1643;
  struct std__allocator_char_* __a1644;
  this1642 = v1638;
  __dat1643 = v1639;
  __a1644 = v1640;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1645 = this1642;
  struct std__allocator_char_* base1646 = (struct std__allocator_char_*)((char *)t1645 + 0);
  struct std__allocator_char_* t1647 = __a1644;
  std__allocator_char___allocator(base1646, t1647);
    char* t1648 = __dat1643;
    t1645->_M_p = t1648;
  return;
}

