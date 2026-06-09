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
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

char _str[5] = "Test";
char _str_1[8] = " String";
char _str_2[44] = "(str3 == str1 + 't') && (str4 == \" String\")";
char _str_3[125] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_operator_brackets_6_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[50] = "basic_string: construction from null is not valid";
char _str_5[24] = "basic_string::_M_create";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
char _str_6[93] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/basic_string.h";
char __PRETTY_FUNCTION____ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm[138] = "reference std::basic_string<char>::operator[](size_type) [_CharT = char, _Traits = std::char_traits<char>, _Alloc = std::allocator<char>]";
char _str_7[16] = "__pos <= size()";
char _str_8[21] = "basic_string::append";
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char____2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* p0);
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std__allocator_char_* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(char* p0, unsigned long p1, char* p2, unsigned long p3, struct std__allocator_char_* p4);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char p1);
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
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
_Bool std__is_constant_evaluated();
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
_Bool std____is_constant_evaluated();
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* p0, char* p1);
void std__char_traits_char___assign(char* p0, char* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0);
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
extern void std____throw_logic_error(char* p0);
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
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
char* __gnu_cxx__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* p0, char* p1, unsigned long p2);
char* char_const__std____niter_base_char_const__(char* p0);
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* p0, char* p1, char* p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* p0);
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, char* p2, struct std__forward_iterator_tag p3);
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

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v7) {
bb8:
  struct std__allocator_char_* this9;
  this9 = v7;
  struct std__allocator_char_* t10 = this9;
  struct std____new_allocator_char_* base11 = (struct std____new_allocator_char_*)((char *)t10 + 0);
  std____new_allocator_char_____new_allocator_2(base11);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEPKcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v12, char* v13, struct std__allocator_char_* v14) {
bb15:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this16;
  char* __s17;
  struct std__allocator_char_* __a18;
  char* __end19;
  struct std__forward_iterator_tag agg_tmp020;
  this16 = v12;
  __s17 = v13;
  __a18 = v14;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t21 = this16;
  char* r22 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t21);
  struct std__allocator_char_* t23 = __a18;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t21->_M_dataplus, r22, t23);
      char* t24 = __s17;
      char* c25 = ((void*)0);
      _Bool c26 = ((t24 == c25)) ? 1 : 0;
      if (c26) {
        char* cast27 = (char*)&(_str_4);
        std____throw_logic_error(cast27);
      }
    char* t28 = __s17;
    char* t29 = __s17;
    unsigned long r30 = std__char_traits_char___length(t29);
    char* ptr31 = &(t28)[r30];
    __end19 = ptr31;
    char* t32 = __s17;
    char* t33 = __end19;
    struct std__forward_iterator_tag t34 = agg_tmp020;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t21, t32, t33, t34);
  return;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_move_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign() {
bb35:
  _Bool __retval36;
  _Bool t37 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval36 = t37;
  _Bool t38 = __retval36;
  return t38;
}

// function: _ZNSt15__new_allocatorIcEaSERKS0_
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* v39, struct std____new_allocator_char_* v40) {
bb41:
  struct std____new_allocator_char_* this42;
  struct std____new_allocator_char_* unnamed43;
  struct std____new_allocator_char_* __retval44;
  this42 = v39;
  unnamed43 = v40;
  struct std____new_allocator_char_* t45 = this42;
  __retval44 = t45;
  struct std____new_allocator_char_* t46 = __retval44;
  return t46;
}

// function: _ZNSaIcEaSERKS_
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* v47, struct std__allocator_char_* v48) {
bb49:
  struct std__allocator_char_* this50;
  struct std__allocator_char_* unnamed51;
  struct std__allocator_char_* __retval52;
  this50 = v47;
  unnamed51 = v48;
  struct std__allocator_char_* t53 = this50;
  struct std____new_allocator_char_* base54 = (struct std____new_allocator_char_*)((char *)t53 + 0);
  struct std__allocator_char_* t55 = unnamed51;
  struct std____new_allocator_char_* base56 = (struct std____new_allocator_char_*)((char *)t55 + 0);
  struct std____new_allocator_char_* r57 = std____new_allocator_char___operator_(base54, base56);
  __retval52 = t53;
  struct std__allocator_char_* t58 = __retval52;
  return t58;
}

// function: _ZSt15__alloc_on_moveISaIcEEvRT_S2_
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* v59, struct std__allocator_char_* v60) {
bb61:
  struct std__allocator_char_* __one62;
  struct std__allocator_char_* __two63;
  __one62 = v59;
  __two63 = v60;
    struct std__allocator_char_* t64 = __two63;
    struct std__allocator_char_* t65 = __one62;
    struct std__allocator_char_* r66 = std__allocator_char___operator_(t65, t64);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v67) {
bb68:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this69;
  unsigned long __retval70;
  unsigned long __sz71;
  this69 = v67;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t72 = this69;
  unsigned long t73 = t72->_M_string_length;
  __sz71 = t73;
    unsigned long t74 = __sz71;
    unsigned long r75 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t72);
    _Bool c76 = ((t74 > r75)) ? 1 : 0;
    if (c76) {
      __builtin_unreachable();
    }
  unsigned long t77 = __sz71;
  __retval70 = t77;
  unsigned long t78 = __retval70;
  return t78;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v79) {
bb80:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this81;
  unsigned long __retval82;
  this81 = v79;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t83 = this81;
  unsigned long r84 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t83);
  __retval82 = r84;
  unsigned long t85 = __retval82;
  return t85;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v86) {
bb87:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this88;
  char* __retval89;
  this88 = v86;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t90 = this88;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t90);
  char* r91 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t90);
  __retval89 = r91;
  char* t92 = __retval89;
  return t92;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v93) {
bb94:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this95;
  unsigned long __retval96;
  unsigned long __sz97;
  this95 = v93;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t98 = this95;
  _Bool r99 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t98);
  unsigned long ternary100;
  if (r99) {
    unsigned long c101 = 15;
    ternary100 = (unsigned long)c101;
  } else {
    unsigned long t102 = t98->field2._M_allocated_capacity;
    ternary100 = (unsigned long)t102;
  }
  __sz97 = ternary100;
    unsigned long t103 = __sz97;
    unsigned long c104 = 15;
    _Bool c105 = ((t103 < c104)) ? 1 : 0;
    _Bool ternary106;
    if (c105) {
      _Bool c107 = 1;
      ternary106 = (_Bool)c107;
    } else {
      unsigned long t108 = __sz97;
      unsigned long r109 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t98);
      _Bool c110 = ((t108 > r109)) ? 1 : 0;
      ternary106 = (_Bool)c110;
    }
    if (ternary106) {
      __builtin_unreachable();
    }
  unsigned long t111 = __sz97;
  __retval96 = t111;
  unsigned long t112 = __retval96;
  return t112;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v113, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v114) {
bb115:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this116;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str117;
  this116 = v113;
  __str117 = v114;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t118 = this116;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t119 = __str117;
    _Bool c120 = ((t118 != t119)) ? 1 : 0;
    if (c120) {
      unsigned long __rsize121;
      unsigned long __capacity122;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t123 = __str117;
      unsigned long r124 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t123);
      __rsize121 = r124;
      unsigned long r125 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t118);
      __capacity122 = r125;
        unsigned long t126 = __rsize121;
        unsigned long t127 = __capacity122;
        _Bool c128 = ((t126 > t127)) ? 1 : 0;
        if (c128) {
          unsigned long __new_capacity129;
          char* __tmp130;
          unsigned long t131 = __rsize121;
          __new_capacity129 = t131;
          unsigned long t132 = __capacity122;
          char* r133 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t118, &__new_capacity129, t132);
          __tmp130 = r133;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t118);
          char* t134 = __tmp130;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t118, t134);
          unsigned long t135 = __new_capacity129;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t118, t135);
        }
        unsigned long t136 = __rsize121;
        _Bool cast137 = (_Bool)t136;
        if (cast137) {
          char* r138 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t118);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t139 = __str117;
          char* r140 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t139);
          unsigned long t141 = __rsize121;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r138, r140, t141);
        }
      unsigned long t142 = __rsize121;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t118, t142);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5clearEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v143) {
bb144:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this145;
  this145 = v143;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t146 = this145;
  unsigned long c147 = 0;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t146, c147);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEOS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v148, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v149) {
bb150:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this151;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str152;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval153;
  _Bool __equal_allocs154;
  this151 = v148;
  __str152 = v149;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t155 = this151;
  _Bool c156 = 1;
  __equal_allocs154 = c156;
    _Bool r157 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t155);
    _Bool u158 = !r157;
    _Bool ternary159;
    if (u158) {
      _Bool r160 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
      ternary159 = (_Bool)r160;
    } else {
      _Bool c161 = 0;
      ternary159 = (_Bool)c161;
    }
    _Bool ternary162;
    if (ternary159) {
      _Bool t163 = __equal_allocs154;
      _Bool u164 = !t163;
      ternary162 = (_Bool)u164;
    } else {
      _Bool c165 = 0;
      ternary162 = (_Bool)c165;
    }
    if (ternary162) {
      unsigned long t166 = t155->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t155, t166);
      char* r167 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t155);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t155, r167);
      unsigned long c168 = 0;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t155, c168);
    }
  struct std__allocator_char_* r169 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t155);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t170 = __str152;
  struct std__allocator_char_* r171 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t170);
  void_std____alloc_on_move_std__allocator_char___(r169, r171);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t172 = __str152;
    _Bool r173 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t172);
    if (r173) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t174 = __str152;
        _Bool c175 = ((t174 != t155)) ? 1 : 0;
        if (c175) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t176 = __str152;
            unsigned long r177 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t176);
            _Bool cast178 = (_Bool)r177;
            if (cast178) {
              char* r179 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t155);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t180 = __str152;
              char* r181 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t180);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t182 = __str152;
              unsigned long r183 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t182);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r179, r181, r183);
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t184 = __str152;
          unsigned long r185 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t184);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t155, r185);
        }
    } else {
        _Bool r186 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
        _Bool ternary187;
        if (r186) {
          _Bool c188 = 1;
          ternary187 = (_Bool)c188;
        } else {
          _Bool t189 = __equal_allocs154;
          ternary187 = (_Bool)t189;
        }
        if (ternary187) {
          char* __data190;
          unsigned long __capacity191;
          char* c192 = ((void*)0);
          __data190 = c192;
            _Bool r193 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t155);
            _Bool u194 = !r193;
            if (u194) {
                _Bool t195 = __equal_allocs154;
                if (t195) {
                  char* r196 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t155);
                  __data190 = r196;
                  unsigned long t197 = t155->field2._M_allocated_capacity;
                  __capacity191 = t197;
                } else {
                  unsigned long t198 = t155->field2._M_allocated_capacity;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t155, t198);
                }
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t199 = __str152;
          char* r200 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t199);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t155, r200);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t201 = __str152;
          unsigned long r202 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t201);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t155, r202);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t203 = __str152;
          unsigned long t204 = t203->field2._M_allocated_capacity;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t155, t204);
            char* t205 = __data190;
            _Bool cast206 = (_Bool)t205;
            if (cast206) {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t207 = __str152;
              char* t208 = __data190;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t207, t208);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t209 = __str152;
              unsigned long t210 = __capacity191;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t209, t210);
            } else {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t211 = __str152;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t212 = __str152;
              char* r213 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t212);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t211, r213);
            }
        } else {
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t214 = __str152;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t155, t214);
        }
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t215 = __str152;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(t215);
  __retval153 = t155;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t216 = __retval153;
  return t216;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v217) {
bb218:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this219;
  this219 = v217;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t220 = this219;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t220);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t220->_M_dataplus);
  }
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v221) {
bb222:
  struct std__allocator_char_* this223;
  this223 = v221;
  struct std__allocator_char_* t224 = this223;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v225, unsigned long v226) {
bb227:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this228;
  unsigned long __pos229;
  char* __retval230;
  this228 = v225;
  __pos229 = v226;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t231 = this228;
    do {
          unsigned long t232 = __pos229;
          unsigned long r233 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t231);
          _Bool c234 = ((t232 <= r233)) ? 1 : 0;
          _Bool u235 = !c234;
          if (u235) {
            char* cast236 = (char*)&(_str_6);
            int c237 = 1369;
            char* cast238 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm);
            char* cast239 = (char*)&(_str_7);
            std____glibcxx_assert_fail(cast236, c237, cast238, cast239);
          }
      _Bool c240 = 0;
      if (!c240) break;
    } while (1);
  unsigned long t241 = __pos229;
  char* r242 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t231);
  char* ptr243 = &(r242)[t241];
  __retval230 = ptr243;
  char* t244 = __retval230;
  return t244;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v245, char* v246) {
bb247:
  char* __c1248;
  char* __c2249;
  _Bool __retval250;
  __c1248 = v245;
  __c2249 = v246;
  char* t251 = __c1248;
  char t252 = *t251;
  unsigned char cast253 = (unsigned char)t252;
  int cast254 = (int)cast253;
  char* t255 = __c2249;
  char t256 = *t255;
  unsigned char cast257 = (unsigned char)t256;
  int cast258 = (int)cast257;
  _Bool c259 = ((cast254 < cast258)) ? 1 : 0;
  __retval250 = c259;
  _Bool t260 = __retval250;
  return t260;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v261, char* v262, unsigned long v263) {
bb264:
  char* __s1265;
  char* __s2266;
  unsigned long __n267;
  int __retval268;
  __s1265 = v261;
  __s2266 = v262;
  __n267 = v263;
    unsigned long t269 = __n267;
    unsigned long c270 = 0;
    _Bool c271 = ((t269 == c270)) ? 1 : 0;
    if (c271) {
      int c272 = 0;
      __retval268 = c272;
      int t273 = __retval268;
      return t273;
    }
    _Bool r274 = std____is_constant_evaluated();
    if (r274) {
        unsigned long __i275;
        unsigned long c276 = 0;
        __i275 = c276;
        while (1) {
          unsigned long t278 = __i275;
          unsigned long t279 = __n267;
          _Bool c280 = ((t278 < t279)) ? 1 : 0;
          if (!c280) break;
            unsigned long t281 = __i275;
            char* t282 = __s1265;
            char* ptr283 = &(t282)[t281];
            unsigned long t284 = __i275;
            char* t285 = __s2266;
            char* ptr286 = &(t285)[t284];
            _Bool r287 = std__char_traits_char___lt(ptr283, ptr286);
            if (r287) {
              int c288 = -1;
              __retval268 = c288;
              int t289 = __retval268;
              int ret_val290 = t289;
              return ret_val290;
            } else {
                unsigned long t291 = __i275;
                char* t292 = __s2266;
                char* ptr293 = &(t292)[t291];
                unsigned long t294 = __i275;
                char* t295 = __s1265;
                char* ptr296 = &(t295)[t294];
                _Bool r297 = std__char_traits_char___lt(ptr293, ptr296);
                if (r297) {
                  int c298 = 1;
                  __retval268 = c298;
                  int t299 = __retval268;
                  int ret_val300 = t299;
                  return ret_val300;
                }
            }
        for_step277: ;
          unsigned long t301 = __i275;
          unsigned long u302 = t301 + 1;
          __i275 = u302;
        }
      int c303 = 0;
      __retval268 = c303;
      int t304 = __retval268;
      return t304;
    }
  char* t305 = __s1265;
  void* cast306 = (void*)t305;
  char* t307 = __s2266;
  void* cast308 = (void*)t307;
  unsigned long t309 = __n267;
  int r310 = memcmp(cast306, cast308, t309);
  __retval268 = r310;
  int t311 = __retval268;
  return t311;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v312) {
bb313:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this314;
  char* __retval315;
  this314 = v312;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t316 = this314;
  char* r317 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t316);
  __retval315 = r317;
  char* t318 = __retval315;
  return t318;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EESA_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char____2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v319, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v320) {
bb321:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs322;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __rhs323;
  _Bool __retval324;
  __lhs322 = v319;
  __rhs323 = v320;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t325 = __lhs322;
  unsigned long r326 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t325);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t327 = __rhs323;
  unsigned long r328 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t327);
  _Bool c329 = ((r326 == r328)) ? 1 : 0;
  _Bool ternary330;
  if (c329) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t331 = __lhs322;
    char* r332 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t331);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t333 = __rhs323;
    char* r334 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t333);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t335 = __lhs322;
    unsigned long r336 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t335);
    int r337 = std__char_traits_char___compare(r332, r334, r336);
    _Bool cast338 = (_Bool)r337;
    _Bool u339 = !cast338;
    ternary330 = (_Bool)u339;
  } else {
    _Bool c340 = 0;
    ternary330 = (_Bool)c340;
  }
  __retval324 = ternary330;
  _Bool t341 = __retval324;
  return t341;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v342, struct std__allocator_char_* v343) {
bb344:
  struct std__allocator_char_* this345;
  struct std__allocator_char_* __a346;
  this345 = v342;
  __a346 = v343;
  struct std__allocator_char_* t347 = this345;
  struct std____new_allocator_char_* base348 = (struct std____new_allocator_char_*)((char *)t347 + 0);
  struct std__allocator_char_* t349 = __a346;
  struct std____new_allocator_char_* base350 = (struct std____new_allocator_char_*)((char *)t349 + 0);
  std____new_allocator_char_____new_allocator(base348, base350);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE37select_on_container_copy_constructionERKS0_
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* v351) {
bb352:
  struct std__allocator_char_* __rhs353;
  struct std__allocator_char_ __retval354;
  __rhs353 = v351;
  struct std__allocator_char_* t355 = __rhs353;
  std__allocator_char___allocator(&__retval354, t355);
  struct std__allocator_char_ t356 = __retval354;
  return t356;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE17_S_select_on_copyERKS1_
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* v357) {
bb358:
  struct std__allocator_char_* __a359;
  struct std__allocator_char_ __retval360;
  __a359 = v357;
  struct std__allocator_char_* t361 = __a359;
  struct std__allocator_char_ r362 = std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(t361);
  __retval360 = r362;
  struct std__allocator_char_ t363 = __retval360;
  return t363;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v364, struct std__allocator_char_* v365) {
bb366:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this367;
  struct std__allocator_char_* __a368;
  this367 = v364;
  __a368 = v365;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t369 = this367;
  char* r370 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t369);
  struct std__allocator_char_* t371 = __a368;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t369->_M_dataplus, r370, t371);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t369);
    unsigned long c372 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t369, c372);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7reserveEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v373, unsigned long v374) {
bb375:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this376;
  unsigned long __res377;
  unsigned long __capacity378;
  char* __tmp379;
  this376 = v373;
  __res377 = v374;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t380 = this376;
  unsigned long r381 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t380);
  __capacity378 = r381;
    unsigned long t382 = __res377;
    unsigned long t383 = __capacity378;
    _Bool c384 = ((t382 <= t383)) ? 1 : 0;
    if (c384) {
      return;
    }
  unsigned long t385 = __capacity378;
  char* r386 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t380, &__res377, t385);
  __tmp379 = r386;
  char* t387 = __tmp379;
  char* r388 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t380);
  unsigned long r389 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t380);
  unsigned long c390 = 1;
  unsigned long b391 = r389 + c390;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t387, r388, b391);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t380);
  char* t392 = __tmp379;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t380, t392);
  unsigned long t393 = __res377;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t380, t393);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v394, unsigned long v395, unsigned long v396, char* v397) {
bb398:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this399;
  unsigned long __n1400;
  unsigned long __n2401;
  char* __s402;
  this399 = v394;
  __n1400 = v395;
  __n2401 = v396;
  __s402 = v397;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t403 = this399;
    unsigned long r404 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t403);
    unsigned long r405 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t403);
    unsigned long t406 = __n1400;
    unsigned long b407 = r405 - t406;
    unsigned long b408 = r404 - b407;
    unsigned long t409 = __n2401;
    _Bool c410 = ((b408 < t409)) ? 1 : 0;
    if (c410) {
      char* t411 = __s402;
      std____throw_length_error(t411);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v412, unsigned long v413, unsigned long v414, char* v415, unsigned long v416) {
bb417:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this418;
  unsigned long __pos419;
  unsigned long __len1420;
  char* __s421;
  unsigned long __len2422;
  unsigned long __how_much423;
  unsigned long __new_capacity424;
  char* __r425;
  this418 = v412;
  __pos419 = v413;
  __len1420 = v414;
  __s421 = v415;
  __len2422 = v416;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t426 = this418;
  unsigned long r427 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t426);
  unsigned long t428 = __pos419;
  unsigned long b429 = r427 - t428;
  unsigned long t430 = __len1420;
  unsigned long b431 = b429 - t430;
  __how_much423 = b431;
  unsigned long r432 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t426);
  unsigned long t433 = __len2422;
  unsigned long b434 = r432 + t433;
  unsigned long t435 = __len1420;
  unsigned long b436 = b434 - t435;
  __new_capacity424 = b436;
  unsigned long r437 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t426);
  char* r438 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t426, &__new_capacity424, r437);
  __r425 = r438;
    unsigned long t439 = __pos419;
    _Bool cast440 = (_Bool)t439;
    if (cast440) {
      char* t441 = __r425;
      char* r442 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t426);
      unsigned long t443 = __pos419;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t441, r442, t443);
    }
    char* t444 = __s421;
    _Bool cast445 = (_Bool)t444;
    _Bool ternary446;
    if (cast445) {
      unsigned long t447 = __len2422;
      _Bool cast448 = (_Bool)t447;
      ternary446 = (_Bool)cast448;
    } else {
      _Bool c449 = 0;
      ternary446 = (_Bool)c449;
    }
    if (ternary446) {
      char* t450 = __r425;
      unsigned long t451 = __pos419;
      char* ptr452 = &(t450)[t451];
      char* t453 = __s421;
      unsigned long t454 = __len2422;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr452, t453, t454);
    }
    unsigned long t455 = __how_much423;
    _Bool cast456 = (_Bool)t455;
    if (cast456) {
      char* t457 = __r425;
      unsigned long t458 = __pos419;
      char* ptr459 = &(t457)[t458];
      unsigned long t460 = __len2422;
      char* ptr461 = &(ptr459)[t460];
      char* r462 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t426);
      unsigned long t463 = __pos419;
      char* ptr464 = &(r462)[t463];
      unsigned long t465 = __len1420;
      char* ptr466 = &(ptr464)[t465];
      unsigned long t467 = __how_much423;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr461, ptr466, t467);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t426);
  char* t468 = __r425;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t426, t468);
  unsigned long t469 = __new_capacity424;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t426, t469);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v470, char* v471, unsigned long v472) {
bb473:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this474;
  char* __s475;
  unsigned long __n476;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval477;
  unsigned long __len478;
  this474 = v470;
  __s475 = v471;
  __n476 = v472;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t479 = this474;
  unsigned long t480 = __n476;
  unsigned long r481 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t479);
  unsigned long b482 = t480 + r481;
  __len478 = b482;
    unsigned long t483 = __len478;
    unsigned long r484 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t479);
    _Bool c485 = ((t483 <= r484)) ? 1 : 0;
    if (c485) {
        unsigned long t486 = __n476;
        _Bool cast487 = (_Bool)t486;
        if (cast487) {
          char* r488 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t479);
          unsigned long r489 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t479);
          char* ptr490 = &(r488)[r489];
          char* t491 = __s475;
          unsigned long t492 = __n476;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr490, t491, t492);
        }
    } else {
      unsigned long r493 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t479);
      unsigned long c494 = 0;
      char* t495 = __s475;
      unsigned long t496 = __n476;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t479, r493, c494, t495, t496);
    }
  unsigned long t497 = __len478;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t479, t497);
  __retval477 = t479;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t498 = __retval477;
  return t498;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v499, char* v500, unsigned long v501) {
bb502:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this503;
  char* __s504;
  unsigned long __n505;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval506;
  this503 = v499;
  __s504 = v500;
  __n505 = v501;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t507 = this503;
  unsigned long c508 = 0;
  unsigned long t509 = __n505;
  char* cast510 = (char*)&(_str_8);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t507, c508, t509, cast510);
  char* t511 = __s504;
  unsigned long t512 = __n505;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r513 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(t507, t511, t512);
  __retval506 = r513;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t514 = __retval506;
  return t514;
}

// function: _ZSt12__str_concatINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEET_PKNS6_10value_typeENS6_9size_typeES9_SA_RKNS6_14allocator_typeE
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(char* v515, unsigned long v516, char* v517, unsigned long v518, struct std__allocator_char_* v519) {
bb520:
  char* __lhs521;
  unsigned long __lhs_len522;
  char* __rhs523;
  unsigned long __rhs_len524;
  struct std__allocator_char_* __a525;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval526;
  _Bool nrvo527;
  struct std__allocator_char_ ref_tmp0528;
  __lhs521 = v515;
  __lhs_len522 = v516;
  __rhs523 = v517;
  __rhs_len524 = v518;
  __a525 = v519;
  _Bool c529 = 0;
  nrvo527 = c529;
  struct std__allocator_char_* t530 = __a525;
  struct std__allocator_char_ r531 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(t530);
  ref_tmp0528 = r531;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&__retval526, &ref_tmp0528);
  {
    std__allocator_char____allocator(&ref_tmp0528);
  }
    unsigned long t532 = __lhs_len522;
    unsigned long t533 = __rhs_len524;
    unsigned long b534 = t532 + t533;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(&__retval526, b534);
    char* t535 = __lhs521;
    unsigned long t536 = __lhs_len522;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r537 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(&__retval526, t535, t536);
    char* t538 = __rhs523;
    unsigned long t539 = __rhs_len524;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r540 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(&__retval526, t538, t539);
    _Bool c541 = 1;
    nrvo527 = c541;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t542 = __retval526;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ret_val543 = t542;
    {
      _Bool t544 = nrvo527;
      _Bool u545 = !t544;
      if (u545) {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&__retval526);
      }
    }
    return ret_val543;
  abort();
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5c_strEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v546) {
bb547:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this548;
  char* __retval549;
  this548 = v546;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t550 = this548;
  char* r551 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t550);
  __retval549 = r551;
  char* t552 = __retval549;
  return t552;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13get_allocatorEv
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v553) {
bb554:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this555;
  struct std__allocator_char_ __retval556;
  this555 = v553;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t557 = this555;
  struct std__allocator_char_* r558 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t557);
  std__allocator_char___allocator(&__retval556, r558);
  struct std__allocator_char_ t559 = __retval556;
  return t559;
}

// function: _ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_S5_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v560, char v561) {
bb562:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs563;
  char __rhs564;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval565;
  struct std__allocator_char_ ref_tmp0566;
  __lhs563 = v560;
  __rhs564 = v561;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t567 = __lhs563;
  char* r568 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(t567);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t569 = __lhs563;
  unsigned long r570 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t569);
  unsigned long c571 = 1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t572 = __lhs563;
  struct std__allocator_char_ r573 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(t572);
  ref_tmp0566 = r573;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r574 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(r568, r570, &__rhs564, c571, &ref_tmp0566);
    __retval565 = r574;
  {
    std__allocator_char____allocator(&ref_tmp0566);
  }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t575 = __retval565;
  return t575;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v576, char* v577) {
bb578:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs579;
  char* __rhs580;
  _Bool __retval581;
  __lhs579 = v576;
  __rhs580 = v577;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t582 = __lhs579;
  unsigned long r583 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t582);
  char* t584 = __rhs580;
  unsigned long r585 = std__char_traits_char___length(t584);
  _Bool c586 = ((r583 == r585)) ? 1 : 0;
  _Bool ternary587;
  if (c586) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t588 = __lhs579;
    char* r589 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t588);
    char* t590 = __rhs580;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t591 = __lhs579;
    unsigned long r592 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t591);
    int r593 = std__char_traits_char___compare(r589, t590, r592);
    _Bool cast594 = (_Bool)r593;
    _Bool u595 = !cast594;
    ternary587 = (_Bool)u595;
  } else {
    _Bool c596 = 0;
    ternary587 = (_Bool)c596;
  }
  __retval581 = ternary587;
  _Bool t597 = __retval581;
  return t597;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v598, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v599) {
bb600:
  struct std__basic_ostream_char__std__char_traits_char__* __os601;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str602;
  struct std__basic_ostream_char__std__char_traits_char__* __retval603;
  __os601 = v598;
  __str602 = v599;
  struct std__basic_ostream_char__std__char_traits_char__* t604 = __os601;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t605 = __str602;
  char* r606 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t605);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t607 = __str602;
  unsigned long r608 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t607);
  long cast609 = (long)r608;
  struct std__basic_ostream_char__std__char_traits_char__* r610 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t604, r606, cast609);
  __retval603 = r610;
  struct std__basic_ostream_char__std__char_traits_char__* t611 = __retval603;
  return t611;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v612, void* v613) {
bb614:
  struct std__basic_ostream_char__std__char_traits_char__* this615;
  void* __pf616;
  struct std__basic_ostream_char__std__char_traits_char__* __retval617;
  this615 = v612;
  __pf616 = v613;
  struct std__basic_ostream_char__std__char_traits_char__* t618 = this615;
  void* t619 = __pf616;
  struct std__basic_ostream_char__std__char_traits_char__* r620 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t619)(t618);
  __retval617 = r620;
  struct std__basic_ostream_char__std__char_traits_char__* t621 = __retval617;
  return t621;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v622) {
bb623:
  struct std__basic_ostream_char__std__char_traits_char__* __os624;
  struct std__basic_ostream_char__std__char_traits_char__* __retval625;
  __os624 = v622;
  struct std__basic_ostream_char__std__char_traits_char__* t626 = __os624;
  struct std__basic_ostream_char__std__char_traits_char__* r627 = std__ostream__flush(t626);
  __retval625 = r627;
  struct std__basic_ostream_char__std__char_traits_char__* t628 = __retval625;
  return t628;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v629) {
bb630:
  struct std__ctype_char_* __f631;
  struct std__ctype_char_* __retval632;
  __f631 = v629;
    struct std__ctype_char_* t633 = __f631;
    _Bool cast634 = (_Bool)t633;
    _Bool u635 = !cast634;
    if (u635) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t636 = __f631;
  __retval632 = t636;
  struct std__ctype_char_* t637 = __retval632;
  return t637;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v638, char v639) {
bb640:
  struct std__ctype_char_* this641;
  char __c642;
  char __retval643;
  this641 = v638;
  __c642 = v639;
  struct std__ctype_char_* t644 = this641;
    char t645 = t644->_M_widen_ok;
    _Bool cast646 = (_Bool)t645;
    if (cast646) {
      char t647 = __c642;
      unsigned char cast648 = (unsigned char)t647;
      unsigned long cast649 = (unsigned long)cast648;
      char t650 = t644->_M_widen[cast649];
      __retval643 = t650;
      char t651 = __retval643;
      return t651;
    }
  std__ctype_char____M_widen_init___const(t644);
  char t652 = __c642;
  void** v653 = (void**)t644;
  void* v654 = *((void**)v653);
  char vcall657 = (char)__VERIFIER_virtual_call_char_char(t644, 6, t652);
  __retval643 = vcall657;
  char t658 = __retval643;
  return t658;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v659, char v660) {
bb661:
  struct std__basic_ios_char__std__char_traits_char__* this662;
  char __c663;
  char __retval664;
  this662 = v659;
  __c663 = v660;
  struct std__basic_ios_char__std__char_traits_char__* t665 = this662;
  struct std__ctype_char_* t666 = t665->_M_ctype;
  struct std__ctype_char_* r667 = std__ctype_char__const__std____check_facet_std__ctype_char___(t666);
  char t668 = __c663;
  char r669 = std__ctype_char___widen_char__const(r667, t668);
  __retval664 = r669;
  char t670 = __retval664;
  return t670;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v671) {
bb672:
  struct std__basic_ostream_char__std__char_traits_char__* __os673;
  struct std__basic_ostream_char__std__char_traits_char__* __retval674;
  __os673 = v671;
  struct std__basic_ostream_char__std__char_traits_char__* t675 = __os673;
  struct std__basic_ostream_char__std__char_traits_char__* t676 = __os673;
  void** v677 = (void**)t676;
  void* v678 = *((void**)v677);
  unsigned char* cast679 = (unsigned char*)v678;
  long c680 = -24;
  unsigned char* ptr681 = &(cast679)[c680];
  long* cast682 = (long*)ptr681;
  long t683 = *cast682;
  unsigned char* cast684 = (unsigned char*)t676;
  unsigned char* ptr685 = &(cast684)[t683];
  struct std__basic_ostream_char__std__char_traits_char__* cast686 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr685;
  struct std__basic_ios_char__std__char_traits_char__* cast687 = (struct std__basic_ios_char__std__char_traits_char__*)cast686;
  char c688 = 10;
  char r689 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast687, c688);
  struct std__basic_ostream_char__std__char_traits_char__* r690 = std__ostream__put(t675, r689);
  struct std__basic_ostream_char__std__char_traits_char__* r691 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r690);
  __retval674 = r691;
  struct std__basic_ostream_char__std__char_traits_char__* t692 = __retval674;
  return t692;
}

// function: main
int main() {
bb693:
  int __retval694;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str1695;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2696;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str3697;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str4698;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str5699;
  int i700;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp0701;
  struct std__allocator_char_ ref_tmp1702;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup703;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp2704;
  struct std__allocator_char_ ref_tmp3705;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup706;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp4707;
  int c708 = 0;
  __retval694 = c708;
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str1695);
    _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str2696);
      _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str3697);
        _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str4698);
          _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str5699);
            char* cast709 = (char*)&(_str);
            std__allocator_char___allocator_2(&ref_tmp1702);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&ref_tmp0701, cast709, &ref_tmp1702);
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r710 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&str1695, &ref_tmp0701);
                tmp_exprcleanup703 = r710;
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0701);
              }
            {
              std__allocator_char____allocator(&ref_tmp1702);
            }
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t711 = tmp_exprcleanup703;
            char* cast712 = (char*)&(_str_1);
            std__allocator_char___allocator_2(&ref_tmp3705);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&ref_tmp2704, cast712, &ref_tmp3705);
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r713 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&str2696, &ref_tmp2704);
                tmp_exprcleanup706 = r713;
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp2704);
              }
            {
              std__allocator_char____allocator(&ref_tmp3705);
            }
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t714 = tmp_exprcleanup706;
              int c715 = 0;
              i700 = c715;
              while (1) {
                int t717 = i700;
                int c718 = 4;
                _Bool c719 = ((t717 < c718)) ? 1 : 0;
                if (!c719) break;
                  int t720 = i700;
                  unsigned long cast721 = (unsigned long)t720;
                  char* r722 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(&str1695, cast721);
                  char t723 = *r722;
                  int t724 = i700;
                  unsigned long cast725 = (unsigned long)t724;
                  char* r726 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(&str3697, cast725);
                  *r726 = t723;
                  int t727 = i700;
                  unsigned long cast728 = (unsigned long)t727;
                  char* r729 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(&str2696, cast728);
                  char t730 = *r729;
                  int t731 = i700;
                  unsigned long cast732 = (unsigned long)t731;
                  char* r733 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(&str4698, cast732);
                  *r733 = t730;
              for_step716: ;
                int t734 = i700;
                int u735 = t734 + 1;
                i700 = u735;
              }
            char c736 = 116;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r737 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(&str1695, c736);
            ref_tmp4707 = r737;
              _Bool r738 = bool_std__operator___char__std__char_traits_char___std__allocator_char____2(&str3697, &ref_tmp4707);
              _Bool ternary739;
              if (r738) {
                char* cast740 = (char*)&(_str_1);
                _Bool r741 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str4698, cast740);
                ternary739 = (_Bool)r741;
              } else {
                _Bool c742 = 0;
                ternary739 = (_Bool)c742;
              }
              if (ternary739) {
              } else {
                char* cast743 = (char*)&(_str_2);
                char* c744 = _str_3;
                unsigned int c745 = 26;
                char* cast746 = (char*)&(__PRETTY_FUNCTION___main);
                __assert_fail(cast743, c744, c745, cast746);
              }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp4707);
            }
            struct std__basic_ostream_char__std__char_traits_char__* r747 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str3697);
            struct std__basic_ostream_char__std__char_traits_char__* r748 = std__ostream__operator___std__ostream_____(r747, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            int c749 = 0;
            __retval694 = c749;
            int t750 = __retval694;
            int ret_val751 = t750;
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str5699);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str4698);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str3697);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str2696);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str1695);
            }
            return ret_val751;
  int t752 = __retval694;
  return t752;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v753) {
bb754:
  char* __r755;
  char* __retval756;
  __r755 = v753;
  char* t757 = __r755;
  __retval756 = t757;
  char* t758 = __retval756;
  return t758;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v759) {
bb760:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this761;
  char* __retval762;
  this761 = v759;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t763 = this761;
  char* cast764 = (char*)&(t763->field2._M_local_buf);
  char* r765 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast764);
  __retval762 = r765;
  char* t766 = __retval762;
  return t766;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v767, char* v768, struct std__allocator_char_* v769) {
bb770:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this771;
  char* __dat772;
  struct std__allocator_char_* __a773;
  this771 = v767;
  __dat772 = v768;
  __a773 = v769;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t774 = this771;
  struct std__allocator_char_* base775 = (struct std__allocator_char_*)((char *)t774 + 0);
  struct std__allocator_char_* t776 = __a773;
  std__allocator_char___allocator(base775, t776);
    char* t777 = __dat772;
    t774->_M_p = t777;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb778:
  _Bool __retval779;
    _Bool c780 = 0;
    __retval779 = c780;
    _Bool t781 = __retval779;
    return t781;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v782) {
bb783:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this784;
  this784 = v782;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t785 = this784;
    _Bool r786 = std__is_constant_evaluated();
    if (r786) {
        unsigned long __i787;
        unsigned long c788 = 0;
        __i787 = c788;
        while (1) {
          unsigned long t790 = __i787;
          unsigned long c791 = 15;
          _Bool c792 = ((t790 <= c791)) ? 1 : 0;
          if (!c792) break;
          char c793 = 0;
          unsigned long t794 = __i787;
          t785->field2._M_local_buf[t794] = c793;
        for_step789: ;
          unsigned long t795 = __i787;
          unsigned long u796 = t795 + 1;
          __i787 = u796;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v797, unsigned long v798) {
bb799:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this800;
  unsigned long __length801;
  this800 = v797;
  __length801 = v798;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t802 = this800;
  unsigned long t803 = __length801;
  t802->_M_string_length = t803;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb804:
  _Bool __retval805;
    _Bool c806 = 0;
    __retval805 = c806;
    _Bool t807 = __retval805;
    return t807;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v808, char* v809) {
bb810:
  char* __location811;
  char* __args812;
  char* __retval813;
  void* __loc814;
  __location811 = v808;
  __args812 = v809;
  char* t815 = __location811;
  void* cast816 = (void*)t815;
  __loc814 = cast816;
    void* t817 = __loc814;
    char* cast818 = (char*)t817;
    char* t819 = __args812;
    char t820 = *t819;
    *cast818 = t820;
    __retval813 = cast818;
    char* t821 = __retval813;
    return t821;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v822, char* v823) {
bb824:
  char* __c1825;
  char* __c2826;
  __c1825 = v822;
  __c2826 = v823;
    _Bool r827 = std____is_constant_evaluated();
    if (r827) {
      char* t828 = __c1825;
      char* t829 = __c2826;
      char* r830 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t828, t829);
    } else {
      char* t831 = __c2826;
      char t832 = *t831;
      char* t833 = __c1825;
      *t833 = t832;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v834) {
bb835:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this836;
  char* __retval837;
  this836 = v834;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t838 = this836;
  char* t839 = t838->_M_dataplus._M_p;
  __retval837 = t839;
  char* t840 = __retval837;
  return t840;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v841, unsigned long v842) {
bb843:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this844;
  unsigned long __n845;
  char ref_tmp0846;
  this844 = v841;
  __n845 = v842;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t847 = this844;
  unsigned long t848 = __n845;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t847, t848);
  unsigned long t849 = __n845;
  char* r850 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t847);
  char* ptr851 = &(r850)[t849];
  char c852 = 0;
  ref_tmp0846 = c852;
  std__char_traits_char___assign(ptr851, &ref_tmp0846);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v853) {
bb854:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this855;
  this855 = v853;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t856 = this855;
  {
    struct std__allocator_char_* base857 = (struct std__allocator_char_*)((char *)t856 + 0);
    std__allocator_char____allocator(base857);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v858, struct std____new_allocator_char_* v859) {
bb860:
  struct std____new_allocator_char_* this861;
  struct std____new_allocator_char_* unnamed862;
  this861 = v858;
  unnamed862 = v859;
  struct std____new_allocator_char_* t863 = this861;
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v864) {
bb865:
  struct std____new_allocator_char_* this866;
  this866 = v864;
  struct std____new_allocator_char_* t867 = this866;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v868, char* v869, struct std__allocator_char_* v870) {
bb871:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this872;
  char* __dat873;
  struct std__allocator_char_* __a874;
  this872 = v868;
  __dat873 = v869;
  __a874 = v870;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t875 = this872;
  struct std__allocator_char_* base876 = (struct std__allocator_char_*)((char *)t875 + 0);
  struct std__allocator_char_* t877 = __a874;
  std__allocator_char___allocator(base876, t877);
    char* t878 = __dat873;
    t875->_M_p = t878;
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v879, char* v880) {
bb881:
  char* __c1882;
  char* __c2883;
  _Bool __retval884;
  __c1882 = v879;
  __c2883 = v880;
  char* t885 = __c1882;
  char t886 = *t885;
  int cast887 = (int)t886;
  char* t888 = __c2883;
  char t889 = *t888;
  int cast890 = (int)t889;
  _Bool c891 = ((cast887 == cast890)) ? 1 : 0;
  __retval884 = c891;
  _Bool t892 = __retval884;
  return t892;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v893) {
bb894:
  char* __p895;
  unsigned long __retval896;
  unsigned long __i897;
  __p895 = v893;
  unsigned long c898 = 0;
  __i897 = c898;
    char ref_tmp0899;
    while (1) {
      unsigned long t900 = __i897;
      char* t901 = __p895;
      char* ptr902 = &(t901)[t900];
      char c903 = 0;
      ref_tmp0899 = c903;
      _Bool r904 = __gnu_cxx__char_traits_char___eq(ptr902, &ref_tmp0899);
      _Bool u905 = !r904;
      if (!u905) break;
      unsigned long t906 = __i897;
      unsigned long u907 = t906 + 1;
      __i897 = u907;
    }
  unsigned long t908 = __i897;
  __retval896 = t908;
  unsigned long t909 = __retval896;
  return t909;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v910) {
bb911:
  char* __s912;
  unsigned long __retval913;
  __s912 = v910;
    _Bool r914 = std____is_constant_evaluated();
    if (r914) {
      char* t915 = __s912;
      unsigned long r916 = __gnu_cxx__char_traits_char___length(t915);
      __retval913 = r916;
      unsigned long t917 = __retval913;
      return t917;
    }
  char* t918 = __s912;
  unsigned long r919 = strlen(t918);
  __retval913 = r919;
  unsigned long t920 = __retval913;
  return t920;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v921, char* v922, struct std__random_access_iterator_tag v923) {
bb924:
  char* __first925;
  char* __last926;
  struct std__random_access_iterator_tag unnamed927;
  long __retval928;
  __first925 = v921;
  __last926 = v922;
  unnamed927 = v923;
  char* t929 = __last926;
  char* t930 = __first925;
  long diff931 = t929 - t930;
  __retval928 = diff931;
  long t932 = __retval928;
  return t932;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v933) {
bb934:
  char** unnamed935;
  struct std__random_access_iterator_tag __retval936;
  unnamed935 = v933;
  struct std__random_access_iterator_tag t937 = __retval936;
  return t937;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v938, char* v939) {
bb940:
  char* __first941;
  char* __last942;
  long __retval943;
  struct std__random_access_iterator_tag agg_tmp0944;
  __first941 = v938;
  __last942 = v939;
  char* t945 = __first941;
  char* t946 = __last942;
  struct std__random_access_iterator_tag r947 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first941);
  agg_tmp0944 = r947;
  struct std__random_access_iterator_tag t948 = agg_tmp0944;
  long r949 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t945, t946, t948);
  __retval943 = r949;
  long t950 = __retval943;
  return t950;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v951, char* v952) {
bb953:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this954;
  char* __p955;
  this954 = v951;
  __p955 = v952;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t956 = this954;
  char* t957 = __p955;
  t956->_M_dataplus._M_p = t957;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v958) {
bb959:
  struct std__allocator_char_* __a960;
  unsigned long __retval961;
  __a960 = v958;
  unsigned long c962 = -1;
  unsigned long c963 = 1;
  unsigned long b964 = c962 / c963;
  __retval961 = b964;
  unsigned long t965 = __retval961;
  return t965;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v966) {
bb967:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this968;
  struct std__allocator_char_* __retval969;
  this968 = v966;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t970 = this968;
  struct std__allocator_char_* base971 = (struct std__allocator_char_*)((char *)&(t970->_M_dataplus) + 0);
  __retval969 = base971;
  struct std__allocator_char_* t972 = __retval969;
  return t972;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v973, unsigned long* v974) {
bb975:
  unsigned long* __a976;
  unsigned long* __b977;
  unsigned long* __retval978;
  __a976 = v973;
  __b977 = v974;
    unsigned long* t979 = __b977;
    unsigned long t980 = *t979;
    unsigned long* t981 = __a976;
    unsigned long t982 = *t981;
    _Bool c983 = ((t980 < t982)) ? 1 : 0;
    if (c983) {
      unsigned long* t984 = __b977;
      __retval978 = t984;
      unsigned long* t985 = __retval978;
      return t985;
    }
  unsigned long* t986 = __a976;
  __retval978 = t986;
  unsigned long* t987 = __retval978;
  return t987;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v988) {
bb989:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this990;
  unsigned long __retval991;
  unsigned long __diffmax992;
  unsigned long __allocmax993;
  this990 = v988;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t994 = this990;
  unsigned long c995 = 9223372036854775807;
  __diffmax992 = c995;
  struct std__allocator_char_* r996 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t994);
  unsigned long r997 = std__allocator_traits_std__allocator_char_____max_size(r996);
  __allocmax993 = r997;
  unsigned long* r998 = unsigned_long_const__std__min_unsigned_long_(&__diffmax992, &__allocmax993);
  unsigned long t999 = *r998;
  unsigned long c1000 = 1;
  unsigned long b1001 = t999 - c1000;
  __retval991 = b1001;
  unsigned long t1002 = __retval991;
  return t1002;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v1003) {
bb1004:
  struct std____new_allocator_char_* this1005;
  unsigned long __retval1006;
  this1005 = v1003;
  struct std____new_allocator_char_* t1007 = this1005;
  unsigned long c1008 = 9223372036854775807;
  unsigned long c1009 = 1;
  unsigned long b1010 = c1008 / c1009;
  __retval1006 = b1010;
  unsigned long t1011 = __retval1006;
  return t1011;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v1012, unsigned long v1013, void* v1014) {
bb1015:
  struct std____new_allocator_char_* this1016;
  unsigned long __n1017;
  void* unnamed1018;
  char* __retval1019;
  this1016 = v1012;
  __n1017 = v1013;
  unnamed1018 = v1014;
  struct std____new_allocator_char_* t1020 = this1016;
    unsigned long t1021 = __n1017;
    unsigned long r1022 = std____new_allocator_char____M_max_size___const(t1020);
    _Bool c1023 = ((t1021 > r1022)) ? 1 : 0;
    if (c1023) {
        unsigned long t1024 = __n1017;
        unsigned long c1025 = -1;
        unsigned long c1026 = 1;
        unsigned long b1027 = c1025 / c1026;
        _Bool c1028 = ((t1024 > b1027)) ? 1 : 0;
        if (c1028) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1029 = 1;
    unsigned long c1030 = 16;
    _Bool c1031 = ((c1029 > c1030)) ? 1 : 0;
    if (c1031) {
      unsigned long __al1032;
      unsigned long c1033 = 1;
      __al1032 = c1033;
      unsigned long t1034 = __n1017;
      unsigned long c1035 = 1;
      unsigned long b1036 = t1034 * c1035;
      unsigned long t1037 = __al1032;
      void* r1038 = operator_new_2(b1036, t1037);
      char* cast1039 = (char*)r1038;
      __retval1019 = cast1039;
      char* t1040 = __retval1019;
      return t1040;
    }
  unsigned long t1041 = __n1017;
  unsigned long c1042 = 1;
  unsigned long b1043 = t1041 * c1042;
  void* r1044 = operator_new(b1043);
  char* cast1045 = (char*)r1044;
  __retval1019 = cast1045;
  char* t1046 = __retval1019;
  return t1046;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1047, unsigned long v1048) {
bb1049:
  struct std__allocator_char_* this1050;
  unsigned long __n1051;
  char* __retval1052;
  this1050 = v1047;
  __n1051 = v1048;
  struct std__allocator_char_* t1053 = this1050;
    _Bool r1054 = std____is_constant_evaluated();
    if (r1054) {
        unsigned long t1055 = __n1051;
        unsigned long c1056 = 1;
        unsigned long ovr1057;
        _Bool ovf1058 = __builtin_mul_overflow(t1055, c1056, &ovr1057);
        __n1051 = ovr1057;
        if (ovf1058) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1059 = __n1051;
      void* r1060 = operator_new(t1059);
      char* cast1061 = (char*)r1060;
      __retval1052 = cast1061;
      char* t1062 = __retval1052;
      return t1062;
    }
  struct std____new_allocator_char_* base1063 = (struct std____new_allocator_char_*)((char *)t1053 + 0);
  unsigned long t1064 = __n1051;
  void* c1065 = ((void*)0);
  char* r1066 = std____new_allocator_char___allocate(base1063, t1064, c1065);
  __retval1052 = r1066;
  char* t1067 = __retval1052;
  return t1067;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1068, unsigned long v1069) {
bb1070:
  struct std__allocator_char_* __a1071;
  unsigned long __n1072;
  char* __retval1073;
  __a1071 = v1068;
  __n1072 = v1069;
  struct std__allocator_char_* t1074 = __a1071;
  unsigned long t1075 = __n1072;
  char* r1076 = std__allocator_char___allocate(t1074, t1075);
  __retval1073 = r1076;
  char* t1077 = __retval1073;
  return t1077;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1078, unsigned long v1079) {
bb1080:
  struct std__allocator_char_* __a1081;
  unsigned long __n1082;
  char* __retval1083;
  char* __p1084;
  __a1081 = v1078;
  __n1082 = v1079;
  struct std__allocator_char_* t1085 = __a1081;
  unsigned long t1086 = __n1082;
  char* r1087 = std__allocator_traits_std__allocator_char_____allocate(t1085, t1086);
  __p1084 = r1087;
  char* t1088 = __p1084;
  __retval1083 = t1088;
  char* t1089 = __retval1083;
  return t1089;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1090) {
bb1091:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1092;
  struct std__allocator_char_* __retval1093;
  this1092 = v1090;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1094 = this1092;
  struct std__allocator_char_* base1095 = (struct std__allocator_char_*)((char *)&(t1094->_M_dataplus) + 0);
  __retval1093 = base1095;
  struct std__allocator_char_* t1096 = __retval1093;
  return t1096;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1097, unsigned long* v1098, unsigned long v1099) {
bb1100:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1101;
  unsigned long* __capacity1102;
  unsigned long __old_capacity1103;
  char* __retval1104;
  this1101 = v1097;
  __capacity1102 = v1098;
  __old_capacity1103 = v1099;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1105 = this1101;
    unsigned long* t1106 = __capacity1102;
    unsigned long t1107 = *t1106;
    unsigned long r1108 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1105);
    _Bool c1109 = ((t1107 > r1108)) ? 1 : 0;
    if (c1109) {
      char* cast1110 = (char*)&(_str_5);
      std____throw_length_error(cast1110);
    }
    unsigned long* t1111 = __capacity1102;
    unsigned long t1112 = *t1111;
    unsigned long t1113 = __old_capacity1103;
    _Bool c1114 = ((t1112 > t1113)) ? 1 : 0;
    _Bool ternary1115;
    if (c1114) {
      unsigned long* t1116 = __capacity1102;
      unsigned long t1117 = *t1116;
      unsigned long c1118 = 2;
      unsigned long t1119 = __old_capacity1103;
      unsigned long b1120 = c1118 * t1119;
      _Bool c1121 = ((t1117 < b1120)) ? 1 : 0;
      ternary1115 = (_Bool)c1121;
    } else {
      _Bool c1122 = 0;
      ternary1115 = (_Bool)c1122;
    }
    if (ternary1115) {
      unsigned long c1123 = 2;
      unsigned long t1124 = __old_capacity1103;
      unsigned long b1125 = c1123 * t1124;
      unsigned long* t1126 = __capacity1102;
      *t1126 = b1125;
        unsigned long* t1127 = __capacity1102;
        unsigned long t1128 = *t1127;
        unsigned long r1129 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1105);
        _Bool c1130 = ((t1128 > r1129)) ? 1 : 0;
        if (c1130) {
          unsigned long r1131 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1105);
          unsigned long* t1132 = __capacity1102;
          *t1132 = r1131;
        }
    }
  struct std__allocator_char_* r1133 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1105);
  unsigned long* t1134 = __capacity1102;
  unsigned long t1135 = *t1134;
  unsigned long c1136 = 1;
  unsigned long b1137 = t1135 + c1136;
  char* r1138 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1133, b1137);
  __retval1104 = r1138;
  char* t1139 = __retval1104;
  return t1139;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1140, unsigned long v1141) {
bb1142:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1143;
  unsigned long __capacity1144;
  this1143 = v1140;
  __capacity1144 = v1141;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1145 = this1143;
  unsigned long t1146 = __capacity1144;
  t1145->field2._M_allocated_capacity = t1146;
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1147, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1148) {
bb1149:
  struct _Guard* this1150;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1151;
  this1150 = v1147;
  __s1151 = v1148;
  struct _Guard* t1152 = this1150;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1153 = __s1151;
  t1152->_M_guarded = t1153;
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

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1258) {
bb1259:
  struct _Guard* this1260;
  this1260 = v1258;
  struct _Guard* t1261 = this1260;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1262 = t1261->_M_guarded;
    _Bool cast1263 = (_Bool)t1262;
    if (cast1263) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1264 = t1261->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1264);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1265, char* v1266, char* v1267, struct std__forward_iterator_tag v1268) {
bb1269:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1270;
  char* __beg1271;
  char* __end1272;
  struct std__forward_iterator_tag unnamed1273;
  unsigned long __dnew1274;
  struct _Guard __guard1275;
  this1270 = v1265;
  __beg1271 = v1266;
  __end1272 = v1267;
  unnamed1273 = v1268;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1276 = this1270;
  char* t1277 = __beg1271;
  char* t1278 = __end1272;
  long r1279 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1277, t1278);
  unsigned long cast1280 = (unsigned long)r1279;
  __dnew1274 = cast1280;
    unsigned long t1281 = __dnew1274;
    unsigned long c1282 = 15;
    _Bool c1283 = ((t1281 > c1282)) ? 1 : 0;
    if (c1283) {
      unsigned long c1284 = 0;
      char* r1285 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1276, &__dnew1274, c1284);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1276, r1285);
      unsigned long t1286 = __dnew1274;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1276, t1286);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1276);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1275, t1276);
    char* r1287 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1276);
    char* t1288 = __beg1271;
    char* t1289 = __end1272;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1287, t1288, t1289);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1290 = ((void*)0);
    __guard1275._M_guarded = c1290;
    unsigned long t1291 = __dnew1274;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1276, t1291);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1275);
  }
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1292) {
bb1293:
  char* __r1294;
  char* __retval1295;
  __r1294 = v1292;
  char* t1296 = __r1294;
  __retval1295 = t1296;
  char* t1297 = __retval1295;
  return t1297;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1298) {
bb1299:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1300;
  char* __retval1301;
  this1300 = v1298;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1302 = this1300;
  char* cast1303 = (char*)&(t1302->field2._M_local_buf);
  char* r1304 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1303);
  __retval1301 = r1304;
  char* t1305 = __retval1301;
  return t1305;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1306) {
bb1307:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1308;
  _Bool __retval1309;
  this1308 = v1306;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1310 = this1308;
    char* r1311 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1310);
    char* r1312 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1310);
    _Bool c1313 = ((r1311 == r1312)) ? 1 : 0;
    if (c1313) {
        unsigned long t1314 = t1310->_M_string_length;
        unsigned long c1315 = 15;
        _Bool c1316 = ((t1314 > c1315)) ? 1 : 0;
        if (c1316) {
          __builtin_unreachable();
        }
      _Bool c1317 = 1;
      __retval1309 = c1317;
      _Bool t1318 = __retval1309;
      return t1318;
    }
  _Bool c1319 = 0;
  __retval1309 = c1319;
  _Bool t1320 = __retval1309;
  return t1320;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1321, char* v1322, unsigned long v1323) {
bb1324:
  struct std____new_allocator_char_* this1325;
  char* __p1326;
  unsigned long __n1327;
  this1325 = v1321;
  __p1326 = v1322;
  __n1327 = v1323;
  struct std____new_allocator_char_* t1328 = this1325;
    unsigned long c1329 = 1;
    unsigned long c1330 = 16;
    _Bool c1331 = ((c1329 > c1330)) ? 1 : 0;
    if (c1331) {
      char* t1332 = __p1326;
      void* cast1333 = (void*)t1332;
      unsigned long t1334 = __n1327;
      unsigned long c1335 = 1;
      unsigned long b1336 = t1334 * c1335;
      unsigned long c1337 = 1;
      operator_delete_3(cast1333, b1336, c1337);
      return;
    }
  char* t1338 = __p1326;
  void* cast1339 = (void*)t1338;
  unsigned long t1340 = __n1327;
  unsigned long c1341 = 1;
  unsigned long b1342 = t1340 * c1341;
  operator_delete_2(cast1339, b1342);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1343, char* v1344, unsigned long v1345) {
bb1346:
  struct std__allocator_char_* this1347;
  char* __p1348;
  unsigned long __n1349;
  this1347 = v1343;
  __p1348 = v1344;
  __n1349 = v1345;
  struct std__allocator_char_* t1350 = this1347;
    _Bool r1351 = std____is_constant_evaluated();
    if (r1351) {
      char* t1352 = __p1348;
      void* cast1353 = (void*)t1352;
      operator_delete(cast1353);
      return;
    }
  struct std____new_allocator_char_* base1354 = (struct std____new_allocator_char_*)((char *)t1350 + 0);
  char* t1355 = __p1348;
  unsigned long t1356 = __n1349;
  std____new_allocator_char___deallocate(base1354, t1355, t1356);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1357, char* v1358, unsigned long v1359) {
bb1360:
  struct std__allocator_char_* __a1361;
  char* __p1362;
  unsigned long __n1363;
  __a1361 = v1357;
  __p1362 = v1358;
  __n1363 = v1359;
  struct std__allocator_char_* t1364 = __a1361;
  char* t1365 = __p1362;
  unsigned long t1366 = __n1363;
  std__allocator_char___deallocate(t1364, t1365, t1366);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1367, unsigned long v1368) {
bb1369:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1370;
  unsigned long __size1371;
  this1370 = v1367;
  __size1371 = v1368;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1372 = this1370;
  struct std__allocator_char_* r1373 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1372);
  char* r1374 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1372);
  unsigned long t1375 = __size1371;
  unsigned long c1376 = 1;
  unsigned long b1377 = t1375 + c1376;
  std__allocator_traits_std__allocator_char_____deallocate(r1373, r1374, b1377);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1378) {
bb1379:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1380;
  this1380 = v1378;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1381 = this1380;
    _Bool r1382 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1381);
    _Bool u1383 = !r1382;
    if (u1383) {
      unsigned long t1384 = t1381->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1381, t1384);
    }
  return;
}

