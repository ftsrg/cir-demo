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
char _str_6[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_replace_12_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_7[27] = "this is an example phrase.";
char _str_8[36] = "str != \"this is an example phrase.\"";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_9[50] = "basic_string: construction from null is not valid";
char _str_10[24] = "basic_string::_M_create";
char _str_11[22] = "basic_string::replace";
char _str_12[25] = "basic_string::_M_replace";
char _str_13[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* p0, char* p1, char* p2);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void __gnu_cxx__char_traits_char___assign(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___move(char* p0, char* p1, unsigned long p2);
extern void* memmove(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, char* p3, unsigned long p4, unsigned long p5);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p3);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p3, unsigned long p4, unsigned long p5);
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
        char* cast20 = (char*)&(_str_9);
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

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v47, unsigned long v48, unsigned long v49, char* v50) {
bb51:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this52;
  unsigned long __n153;
  unsigned long __n254;
  char* __s55;
  this52 = v47;
  __n153 = v48;
  __n254 = v49;
  __s55 = v50;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t56 = this52;
    unsigned long r57 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t56);
    unsigned long r58 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t56);
    unsigned long t59 = __n153;
    unsigned long b60 = r58 - t59;
    unsigned long b61 = r57 - b60;
    unsigned long t62 = __n254;
    _Bool c63 = ((b61 < t62)) ? 1 : 0;
    if (c63) {
      char* t64 = __s55;
      std____throw_length_error(t64);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v65) {
bb66:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this67;
  unsigned long __retval68;
  unsigned long __sz69;
  this67 = v65;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t70 = this67;
  _Bool r71 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t70);
  unsigned long ternary72;
  if (r71) {
    unsigned long c73 = 15;
    ternary72 = (unsigned long)c73;
  } else {
    unsigned long t74 = t70->field2._M_allocated_capacity;
    ternary72 = (unsigned long)t74;
  }
  __sz69 = ternary72;
    unsigned long t75 = __sz69;
    unsigned long c76 = 15;
    _Bool c77 = ((t75 < c76)) ? 1 : 0;
    _Bool ternary78;
    if (c77) {
      _Bool c79 = 1;
      ternary78 = (_Bool)c79;
    } else {
      unsigned long t80 = __sz69;
      unsigned long r81 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t70);
      _Bool c82 = ((t80 > r81)) ? 1 : 0;
      ternary78 = (_Bool)c82;
    }
    if (ternary78) {
      __builtin_unreachable();
    }
  unsigned long t83 = __sz69;
  __retval68 = t83;
  unsigned long t84 = __retval68;
  return t84;
}

// function: _ZNKSt4lessIPKcEclES1_S1_
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* v85, char* v86, char* v87) {
bb88:
  struct std__less_const_char___* this89;
  char* __x90;
  char* __y91;
  _Bool __retval92;
  this89 = v85;
  __x90 = v86;
  __y91 = v87;
  struct std__less_const_char___* t93 = this89;
    _Bool r94 = std____is_constant_evaluated();
    if (r94) {
      char* t95 = __x90;
      char* t96 = __y91;
      _Bool c97 = ((t95 < t96)) ? 1 : 0;
      __retval92 = c97;
      _Bool t98 = __retval92;
      return t98;
    }
  char* t99 = __x90;
  unsigned long cast100 = (unsigned long)t99;
  char* t101 = __y91;
  unsigned long cast102 = (unsigned long)t101;
  _Bool c103 = ((cast100 < cast102)) ? 1 : 0;
  __retval92 = c103;
  _Bool t104 = __retval92;
  return t104;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_disjunctEPKc
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v105, char* v106) {
bb107:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this108;
  char* __s109;
  _Bool __retval110;
  struct std__less_const_char___ ref_tmp0111;
  this108 = v105;
  __s109 = v106;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t112 = this108;
  char* t113 = __s109;
  char* r114 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t112);
  _Bool r115 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp0111, t113, r114);
  _Bool ternary116;
  if (r115) {
    _Bool c117 = 1;
    ternary116 = (_Bool)c117;
  } else {
    struct std__less_const_char___ ref_tmp1118;
    char* r119 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t112);
    unsigned long r120 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t112);
    char* ptr121 = &(r119)[r120];
    char* t122 = __s109;
    _Bool r123 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp1118, ptr121, t122);
    ternary116 = (_Bool)r123;
  }
  __retval110 = ternary116;
  _Bool t124 = __retval110;
  return t124;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign(char* v125, char* v126) {
bb127:
  char* __c1128;
  char* __c2129;
  __c1128 = v125;
  __c2129 = v126;
    _Bool r130 = std____is_constant_evaluated();
    if (r130) {
      char* t131 = __c1128;
      char* t132 = __c2129;
      char* r133 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t131, t132);
    } else {
      char* t134 = __c2129;
      char t135 = *t134;
      char* t136 = __c1128;
      *t136 = t135;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v137, char* v138, unsigned long v139) {
bb140:
  char* __s1141;
  char* __s2142;
  unsigned long __n143;
  char* __retval144;
  __s1141 = v137;
  __s2142 = v138;
  __n143 = v139;
    unsigned long t145 = __n143;
    unsigned long c146 = 0;
    _Bool c147 = ((t145 == c146)) ? 1 : 0;
    if (c147) {
      char* t148 = __s1141;
      __retval144 = t148;
      char* t149 = __retval144;
      return t149;
    }
    _Bool r150 = std____is_constant_evaluated();
    if (r150) {
        char* t151 = __s2142;
        char* t152 = __s1141;
        _Bool c153 = ((t151 < t152)) ? 1 : 0;
        _Bool isconst154 = 0;
        _Bool ternary155;
        if (isconst154) {
          char* t156 = __s1141;
          char* t157 = __s2142;
          _Bool c158 = ((t156 > t157)) ? 1 : 0;
          ternary155 = (_Bool)c158;
        } else {
          _Bool c159 = 0;
          ternary155 = (_Bool)c159;
        }
        _Bool ternary160;
        if (ternary155) {
          char* t161 = __s1141;
          char* t162 = __s2142;
          unsigned long t163 = __n143;
          char* ptr164 = &(t162)[t163];
          _Bool c165 = ((t161 < ptr164)) ? 1 : 0;
          ternary160 = (_Bool)c165;
        } else {
          _Bool c166 = 0;
          ternary160 = (_Bool)c166;
        }
        if (ternary160) {
            do {
                unsigned long t167 = __n143;
                unsigned long u168 = t167 - 1;
                __n143 = u168;
                unsigned long t169 = __n143;
                char* t170 = __s1141;
                char* ptr171 = &(t170)[t169];
                unsigned long t172 = __n143;
                char* t173 = __s2142;
                char* ptr174 = &(t173)[t172];
                __gnu_cxx__char_traits_char___assign(ptr171, ptr174);
              unsigned long t175 = __n143;
              unsigned long c176 = 0;
              _Bool c177 = ((t175 > c176)) ? 1 : 0;
              if (!c177) break;
            } while (1);
        } else {
          char* t178 = __s1141;
          char* t179 = __s2142;
          unsigned long t180 = __n143;
          char* r181 = __gnu_cxx__char_traits_char___copy(t178, t179, t180);
        }
      char* t182 = __s1141;
      __retval144 = t182;
      char* t183 = __retval144;
      return t183;
    }
  char* t184 = __s1141;
  void* cast185 = (void*)t184;
  char* t186 = __s2142;
  void* cast187 = (void*)t186;
  unsigned long t188 = __n143;
  unsigned long c189 = 1;
  unsigned long b190 = t188 * c189;
  void* r191 = memmove(cast185, cast187, b190);
  char* t192 = __s1141;
  __retval144 = t192;
  char* t193 = __retval144;
  return t193;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v194, char* v195, unsigned long v196) {
bb197:
  char* __s1198;
  char* __s2199;
  unsigned long __n200;
  char* __retval201;
  __s1198 = v194;
  __s2199 = v195;
  __n200 = v196;
    unsigned long t202 = __n200;
    unsigned long c203 = 0;
    _Bool c204 = ((t202 == c203)) ? 1 : 0;
    if (c204) {
      char* t205 = __s1198;
      __retval201 = t205;
      char* t206 = __retval201;
      return t206;
    }
    _Bool r207 = std____is_constant_evaluated();
    if (r207) {
      char* t208 = __s1198;
      char* t209 = __s2199;
      unsigned long t210 = __n200;
      char* r211 = __gnu_cxx__char_traits_char___move(t208, t209, t210);
      __retval201 = r211;
      char* t212 = __retval201;
      return t212;
    }
  char* t213 = __s1198;
  void* cast214 = (void*)t213;
  char* t215 = __s2199;
  void* cast216 = (void*)t215;
  unsigned long t217 = __n200;
  void* r218 = memmove(cast214, cast216, t217);
  char* cast219 = (char*)r218;
  __retval201 = cast219;
  char* t220 = __retval201;
  return t220;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v221, char* v222, unsigned long v223) {
bb224:
  char* __d225;
  char* __s226;
  unsigned long __n227;
  __d225 = v221;
  __s226 = v222;
  __n227 = v223;
    unsigned long t228 = __n227;
    unsigned long c229 = 1;
    _Bool c230 = ((t228 == c229)) ? 1 : 0;
    if (c230) {
      char* t231 = __d225;
      char* t232 = __s226;
      std__char_traits_char___assign(t231, t232);
    } else {
      char* t233 = __d225;
      char* t234 = __s226;
      unsigned long t235 = __n227;
      char* r236 = std__char_traits_char___move(t233, t234, t235);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_replace_coldEPcmPKcmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v237, char* v238, unsigned long v239, char* v240, unsigned long v241, unsigned long v242) {
bb243:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this244;
  char* __p245;
  unsigned long __len1246;
  char* __s247;
  unsigned long __len2248;
  unsigned long __how_much249;
  this244 = v237;
  __p245 = v238;
  __len1246 = v239;
  __s247 = v240;
  __len2248 = v241;
  __how_much249 = v242;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t250 = this244;
    unsigned long t251 = __len2248;
    _Bool cast252 = (_Bool)t251;
    _Bool ternary253;
    if (cast252) {
      unsigned long t254 = __len2248;
      unsigned long t255 = __len1246;
      _Bool c256 = ((t254 <= t255)) ? 1 : 0;
      ternary253 = (_Bool)c256;
    } else {
      _Bool c257 = 0;
      ternary253 = (_Bool)c257;
    }
    if (ternary253) {
      char* t258 = __p245;
      char* t259 = __s247;
      unsigned long t260 = __len2248;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t258, t259, t260);
    }
    unsigned long t261 = __how_much249;
    _Bool cast262 = (_Bool)t261;
    _Bool ternary263;
    if (cast262) {
      unsigned long t264 = __len1246;
      unsigned long t265 = __len2248;
      _Bool c266 = ((t264 != t265)) ? 1 : 0;
      ternary263 = (_Bool)c266;
    } else {
      _Bool c267 = 0;
      ternary263 = (_Bool)c267;
    }
    if (ternary263) {
      char* t268 = __p245;
      unsigned long t269 = __len2248;
      char* ptr270 = &(t268)[t269];
      char* t271 = __p245;
      unsigned long t272 = __len1246;
      char* ptr273 = &(t271)[t272];
      unsigned long t274 = __how_much249;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr270, ptr273, t274);
    }
    unsigned long t275 = __len2248;
    unsigned long t276 = __len1246;
    _Bool c277 = ((t275 > t276)) ? 1 : 0;
    if (c277) {
        char* t278 = __s247;
        unsigned long t279 = __len2248;
        char* ptr280 = &(t278)[t279];
        char* t281 = __p245;
        unsigned long t282 = __len1246;
        char* ptr283 = &(t281)[t282];
        _Bool c284 = ((ptr280 <= ptr283)) ? 1 : 0;
        if (c284) {
          char* t285 = __p245;
          char* t286 = __s247;
          unsigned long t287 = __len2248;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t285, t286, t287);
        } else {
            char* t288 = __s247;
            char* t289 = __p245;
            unsigned long t290 = __len1246;
            char* ptr291 = &(t289)[t290];
            _Bool c292 = ((t288 >= ptr291)) ? 1 : 0;
            if (c292) {
              unsigned long __poff293;
              char* t294 = __s247;
              char* t295 = __p245;
              long diff296 = t294 - t295;
              unsigned long cast297 = (unsigned long)diff296;
              unsigned long t298 = __len2248;
              unsigned long t299 = __len1246;
              unsigned long b300 = t298 - t299;
              unsigned long b301 = cast297 + b300;
              __poff293 = b301;
              char* t302 = __p245;
              char* t303 = __p245;
              unsigned long t304 = __poff293;
              char* ptr305 = &(t303)[t304];
              unsigned long t306 = __len2248;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t302, ptr305, t306);
            } else {
              unsigned long __nleft307;
              char* t308 = __p245;
              unsigned long t309 = __len1246;
              char* ptr310 = &(t308)[t309];
              char* t311 = __s247;
              long diff312 = ptr310 - t311;
              unsigned long cast313 = (unsigned long)diff312;
              __nleft307 = cast313;
              char* t314 = __p245;
              char* t315 = __s247;
              unsigned long t316 = __nleft307;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t314, t315, t316);
              char* t317 = __p245;
              unsigned long t318 = __nleft307;
              char* ptr319 = &(t317)[t318];
              char* t320 = __p245;
              unsigned long t321 = __len2248;
              char* ptr322 = &(t320)[t321];
              unsigned long t323 = __len2248;
              unsigned long t324 = __nleft307;
              unsigned long b325 = t323 - t324;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr319, ptr322, b325);
            }
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v326, unsigned long v327, unsigned long v328, char* v329, unsigned long v330) {
bb331:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this332;
  unsigned long __pos333;
  unsigned long __len1334;
  char* __s335;
  unsigned long __len2336;
  unsigned long __how_much337;
  unsigned long __new_capacity338;
  char* __r339;
  this332 = v326;
  __pos333 = v327;
  __len1334 = v328;
  __s335 = v329;
  __len2336 = v330;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t340 = this332;
  unsigned long r341 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t340);
  unsigned long t342 = __pos333;
  unsigned long b343 = r341 - t342;
  unsigned long t344 = __len1334;
  unsigned long b345 = b343 - t344;
  __how_much337 = b345;
  unsigned long r346 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t340);
  unsigned long t347 = __len2336;
  unsigned long b348 = r346 + t347;
  unsigned long t349 = __len1334;
  unsigned long b350 = b348 - t349;
  __new_capacity338 = b350;
  unsigned long r351 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t340);
  char* r352 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t340, &__new_capacity338, r351);
  __r339 = r352;
    unsigned long t353 = __pos333;
    _Bool cast354 = (_Bool)t353;
    if (cast354) {
      char* t355 = __r339;
      char* r356 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t340);
      unsigned long t357 = __pos333;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t355, r356, t357);
    }
    char* t358 = __s335;
    _Bool cast359 = (_Bool)t358;
    _Bool ternary360;
    if (cast359) {
      unsigned long t361 = __len2336;
      _Bool cast362 = (_Bool)t361;
      ternary360 = (_Bool)cast362;
    } else {
      _Bool c363 = 0;
      ternary360 = (_Bool)c363;
    }
    if (ternary360) {
      char* t364 = __r339;
      unsigned long t365 = __pos333;
      char* ptr366 = &(t364)[t365];
      char* t367 = __s335;
      unsigned long t368 = __len2336;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr366, t367, t368);
    }
    unsigned long t369 = __how_much337;
    _Bool cast370 = (_Bool)t369;
    if (cast370) {
      char* t371 = __r339;
      unsigned long t372 = __pos333;
      char* ptr373 = &(t371)[t372];
      unsigned long t374 = __len2336;
      char* ptr375 = &(ptr373)[t374];
      char* r376 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t340);
      unsigned long t377 = __pos333;
      char* ptr378 = &(r376)[t377];
      unsigned long t379 = __len1334;
      char* ptr380 = &(ptr378)[t379];
      unsigned long t381 = __how_much337;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr375, ptr380, t381);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t340);
  char* t382 = __r339;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t340, t382);
  unsigned long t383 = __new_capacity338;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t340, t383);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v384, unsigned long v385, unsigned long v386, char* v387, unsigned long v388) {
bb389:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this390;
  unsigned long __pos391;
  unsigned long __len1392;
  char* __s393;
  unsigned long __len2394;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval395;
  unsigned long __old_size396;
  unsigned long __new_size397;
  this390 = v384;
  __pos391 = v385;
  __len1392 = v386;
  __s393 = v387;
  __len2394 = v388;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t398 = this390;
  unsigned long t399 = __len1392;
  unsigned long t400 = __len2394;
  char* cast401 = (char*)&(_str_12);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t398, t399, t400, cast401);
  unsigned long r402 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t398);
  __old_size396 = r402;
  unsigned long t403 = __old_size396;
  unsigned long t404 = __len2394;
  unsigned long b405 = t403 + t404;
  unsigned long t406 = __len1392;
  unsigned long b407 = b405 - t406;
  __new_size397 = b407;
    unsigned long t408 = __new_size397;
    unsigned long r409 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t398);
    _Bool c410 = ((t408 <= r409)) ? 1 : 0;
    if (c410) {
      char* __p411;
      unsigned long __how_much412;
      char* r413 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t398);
      unsigned long t414 = __pos391;
      char* ptr415 = &(r413)[t414];
      __p411 = ptr415;
      unsigned long t416 = __old_size396;
      unsigned long t417 = __pos391;
      unsigned long b418 = t416 - t417;
      unsigned long t419 = __len1392;
      unsigned long b420 = b418 - t419;
      __how_much412 = b420;
        _Bool r421 = std__is_constant_evaluated();
        if (r421) {
          char* __newp422;
          struct std__allocator_char_* r423 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t398);
          unsigned long t424 = __new_size397;
          char* r425 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r423, t424);
          __newp422 = r425;
          char* t426 = __newp422;
          char* r427 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t398);
          unsigned long t428 = __pos391;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t426, r427, t428);
          char* t429 = __newp422;
          unsigned long t430 = __pos391;
          char* ptr431 = &(t429)[t430];
          char* t432 = __s393;
          unsigned long t433 = __len2394;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr431, t432, t433);
          char* t434 = __newp422;
          unsigned long t435 = __pos391;
          char* ptr436 = &(t434)[t435];
          unsigned long t437 = __len2394;
          char* ptr438 = &(ptr436)[t437];
          char* t439 = __p411;
          unsigned long t440 = __len1392;
          char* ptr441 = &(t439)[t440];
          unsigned long t442 = __how_much412;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr438, ptr441, t442);
          char* r443 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t398);
          char* t444 = __newp422;
          unsigned long t445 = __new_size397;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r443, t444, t445);
          struct std__allocator_char_* r446 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t398);
          char* t447 = __newp422;
          unsigned long t448 = __new_size397;
          std__allocator_char___deallocate(r446, t447, t448);
        } else {
            char* t449 = __s393;
            _Bool r450 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(t398, t449);
            if (r450) {
                unsigned long t451 = __how_much412;
                _Bool cast452 = (_Bool)t451;
                _Bool ternary453;
                if (cast452) {
                  unsigned long t454 = __len1392;
                  unsigned long t455 = __len2394;
                  _Bool c456 = ((t454 != t455)) ? 1 : 0;
                  ternary453 = (_Bool)c456;
                } else {
                  _Bool c457 = 0;
                  ternary453 = (_Bool)c457;
                }
                if (ternary453) {
                  char* t458 = __p411;
                  unsigned long t459 = __len2394;
                  char* ptr460 = &(t458)[t459];
                  char* t461 = __p411;
                  unsigned long t462 = __len1392;
                  char* ptr463 = &(t461)[t462];
                  unsigned long t464 = __how_much412;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr460, ptr463, t464);
                }
                unsigned long t465 = __len2394;
                _Bool cast466 = (_Bool)t465;
                if (cast466) {
                  char* t467 = __p411;
                  char* t468 = __s393;
                  unsigned long t469 = __len2394;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t467, t468, t469);
                }
            } else {
              char* t470 = __p411;
              unsigned long t471 = __len1392;
              char* t472 = __s393;
              unsigned long t473 = __len2394;
              unsigned long t474 = __how_much412;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(t398, t470, t471, t472, t473, t474);
            }
        }
    } else {
      unsigned long t475 = __pos391;
      unsigned long t476 = __len1392;
      char* t477 = __s393;
      unsigned long t478 = __len2394;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t398, t475, t476, t477, t478);
    }
  unsigned long t479 = __new_size397;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t398, t479);
  __retval395 = t398;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t480 = __retval395;
  return t480;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v481, unsigned long v482, char* v483) {
bb484:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this485;
  unsigned long __pos486;
  char* __s487;
  unsigned long __retval488;
  this485 = v481;
  __pos486 = v482;
  __s487 = v483;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t489 = this485;
    unsigned long t490 = __pos486;
    unsigned long r491 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t489);
    _Bool c492 = ((t490 > r491)) ? 1 : 0;
    if (c492) {
      char* cast493 = (char*)&(_str_13);
      char* t494 = __s487;
      unsigned long t495 = __pos486;
      unsigned long r496 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t489);
      std____throw_out_of_range_fmt(cast493, t494, t495, r496);
    }
  unsigned long t497 = __pos486;
  __retval488 = t497;
  unsigned long t498 = __retval488;
  return t498;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v499, unsigned long v500, unsigned long v501) {
bb502:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this503;
  unsigned long __pos504;
  unsigned long __off505;
  unsigned long __retval506;
  _Bool __testoff507;
  this503 = v499;
  __pos504 = v500;
  __off505 = v501;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t508 = this503;
  unsigned long t509 = __off505;
  unsigned long r510 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t508);
  unsigned long t511 = __pos504;
  unsigned long b512 = r510 - t511;
  _Bool c513 = ((t509 < b512)) ? 1 : 0;
  __testoff507 = c513;
  _Bool t514 = __testoff507;
  unsigned long ternary515;
  if (t514) {
    unsigned long t516 = __off505;
    ternary515 = (unsigned long)t516;
  } else {
    unsigned long r517 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t508);
    unsigned long t518 = __pos504;
    unsigned long b519 = r517 - t518;
    ternary515 = (unsigned long)b519;
  }
  __retval506 = ternary515;
  unsigned long t520 = __retval506;
  return t520;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v521, unsigned long v522, unsigned long v523, char* v524, unsigned long v525) {
bb526:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this527;
  unsigned long __pos528;
  unsigned long __n1529;
  char* __s530;
  unsigned long __n2531;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval532;
  this527 = v521;
  __pos528 = v522;
  __n1529 = v523;
  __s530 = v524;
  __n2531 = v525;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t533 = this527;
  unsigned long t534 = __pos528;
  char* cast535 = (char*)&(_str_11);
  unsigned long r536 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t533, t534, cast535);
  unsigned long t537 = __pos528;
  unsigned long t538 = __n1529;
  unsigned long r539 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t533, t537, t538);
  char* t540 = __s530;
  unsigned long t541 = __n2531;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r542 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t533, r536, r539, t540, t541);
  __retval532 = r542;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t543 = __retval532;
  return t543;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEmmRKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v544, unsigned long v545, unsigned long v546, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v547) {
bb548:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this549;
  unsigned long __pos550;
  unsigned long __n551;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str552;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval553;
  this549 = v544;
  __pos550 = v545;
  __n551 = v546;
  __str552 = v547;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t554 = this549;
  unsigned long t555 = __pos550;
  unsigned long t556 = __n551;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t557 = __str552;
  char* r558 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t557);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t559 = __str552;
  unsigned long r560 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t559);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r561 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(t554, t555, t556, r558, r560);
  __retval553 = r561;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t562 = __retval553;
  return t562;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v563, char* v564) {
bb565:
  char* __c1566;
  char* __c2567;
  _Bool __retval568;
  __c1566 = v563;
  __c2567 = v564;
  char* t569 = __c1566;
  char t570 = *t569;
  unsigned char cast571 = (unsigned char)t570;
  int cast572 = (int)cast571;
  char* t573 = __c2567;
  char t574 = *t573;
  unsigned char cast575 = (unsigned char)t574;
  int cast576 = (int)cast575;
  _Bool c577 = ((cast572 < cast576)) ? 1 : 0;
  __retval568 = c577;
  _Bool t578 = __retval568;
  return t578;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v579, char* v580, unsigned long v581) {
bb582:
  char* __s1583;
  char* __s2584;
  unsigned long __n585;
  int __retval586;
  __s1583 = v579;
  __s2584 = v580;
  __n585 = v581;
    unsigned long t587 = __n585;
    unsigned long c588 = 0;
    _Bool c589 = ((t587 == c588)) ? 1 : 0;
    if (c589) {
      int c590 = 0;
      __retval586 = c590;
      int t591 = __retval586;
      return t591;
    }
    _Bool r592 = std____is_constant_evaluated();
    if (r592) {
        unsigned long __i593;
        unsigned long c594 = 0;
        __i593 = c594;
        while (1) {
          unsigned long t596 = __i593;
          unsigned long t597 = __n585;
          _Bool c598 = ((t596 < t597)) ? 1 : 0;
          if (!c598) break;
            unsigned long t599 = __i593;
            char* t600 = __s1583;
            char* ptr601 = &(t600)[t599];
            unsigned long t602 = __i593;
            char* t603 = __s2584;
            char* ptr604 = &(t603)[t602];
            _Bool r605 = std__char_traits_char___lt(ptr601, ptr604);
            if (r605) {
              int c606 = -1;
              __retval586 = c606;
              int t607 = __retval586;
              int ret_val608 = t607;
              return ret_val608;
            } else {
                unsigned long t609 = __i593;
                char* t610 = __s2584;
                char* ptr611 = &(t610)[t609];
                unsigned long t612 = __i593;
                char* t613 = __s1583;
                char* ptr614 = &(t613)[t612];
                _Bool r615 = std__char_traits_char___lt(ptr611, ptr614);
                if (r615) {
                  int c616 = 1;
                  __retval586 = c616;
                  int t617 = __retval586;
                  int ret_val618 = t617;
                  return ret_val618;
                }
            }
        for_step595: ;
          unsigned long t619 = __i593;
          unsigned long u620 = t619 + 1;
          __i593 = u620;
        }
      int c621 = 0;
      __retval586 = c621;
      int t622 = __retval586;
      return t622;
    }
  char* t623 = __s1583;
  void* cast624 = (void*)t623;
  char* t625 = __s2584;
  void* cast626 = (void*)t625;
  unsigned long t627 = __n585;
  int r628 = memcmp(cast624, cast626, t627);
  __retval586 = r628;
  int t629 = __retval586;
  return t629;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v630) {
bb631:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this632;
  char* __retval633;
  this632 = v630;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t634 = this632;
  char* r635 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t634);
  __retval633 = r635;
  char* t636 = __retval633;
  return t636;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v637, char* v638) {
bb639:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs640;
  char* __rhs641;
  _Bool __retval642;
  __lhs640 = v637;
  __rhs641 = v638;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t643 = __lhs640;
  unsigned long r644 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t643);
  char* t645 = __rhs641;
  unsigned long r646 = std__char_traits_char___length(t645);
  _Bool c647 = ((r644 == r646)) ? 1 : 0;
  _Bool ternary648;
  if (c647) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t649 = __lhs640;
    char* r650 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t649);
    char* t651 = __rhs641;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t652 = __lhs640;
    unsigned long r653 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t652);
    int r654 = std__char_traits_char___compare(r650, t651, r653);
    _Bool cast655 = (_Bool)r654;
    _Bool u656 = !cast655;
    ternary648 = (_Bool)u656;
  } else {
    _Bool c657 = 0;
    ternary648 = (_Bool)c657;
  }
  __retval642 = ternary648;
  _Bool t658 = __retval642;
  return t658;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEmmRKS4_mm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v659, unsigned long v660, unsigned long v661, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v662, unsigned long v663, unsigned long v664) {
bb665:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this666;
  unsigned long __pos1667;
  unsigned long __n1668;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str669;
  unsigned long __pos2670;
  unsigned long __n2671;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval672;
  this666 = v659;
  __pos1667 = v660;
  __n1668 = v661;
  __str669 = v662;
  __pos2670 = v663;
  __n2671 = v664;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t673 = this666;
  unsigned long t674 = __pos1667;
  unsigned long t675 = __n1668;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t676 = __str669;
  char* r677 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t676);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t678 = __str669;
  unsigned long t679 = __pos2670;
  char* cast680 = (char*)&(_str_11);
  unsigned long r681 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t678, t679, cast680);
  char* ptr682 = &(r677)[r681];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t683 = __str669;
  unsigned long t684 = __pos2670;
  unsigned long t685 = __n2671;
  unsigned long r686 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t683, t684, t685);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r687 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(t673, t674, t675, ptr682, r686);
  __retval672 = r687;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t688 = __retval672;
  return t688;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v689, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v690) {
bb691:
  struct std__basic_ostream_char__std__char_traits_char__* __os692;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str693;
  struct std__basic_ostream_char__std__char_traits_char__* __retval694;
  __os692 = v689;
  __str693 = v690;
  struct std__basic_ostream_char__std__char_traits_char__* t695 = __os692;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t696 = __str693;
  char* r697 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t696);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t698 = __str693;
  unsigned long r699 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t698);
  long cast700 = (long)r699;
  struct std__basic_ostream_char__std__char_traits_char__* r701 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t695, r697, cast700);
  __retval694 = r701;
  struct std__basic_ostream_char__std__char_traits_char__* t702 = __retval694;
  return t702;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v703, void* v704) {
bb705:
  struct std__basic_ostream_char__std__char_traits_char__* this706;
  void* __pf707;
  struct std__basic_ostream_char__std__char_traits_char__* __retval708;
  this706 = v703;
  __pf707 = v704;
  struct std__basic_ostream_char__std__char_traits_char__* t709 = this706;
  void* t710 = __pf707;
  struct std__basic_ostream_char__std__char_traits_char__* r711 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t710)(t709);
  __retval708 = r711;
  struct std__basic_ostream_char__std__char_traits_char__* t712 = __retval708;
  return t712;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v713) {
bb714:
  struct std__basic_ostream_char__std__char_traits_char__* __os715;
  struct std__basic_ostream_char__std__char_traits_char__* __retval716;
  __os715 = v713;
  struct std__basic_ostream_char__std__char_traits_char__* t717 = __os715;
  struct std__basic_ostream_char__std__char_traits_char__* r718 = std__ostream__flush(t717);
  __retval716 = r718;
  struct std__basic_ostream_char__std__char_traits_char__* t719 = __retval716;
  return t719;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v720) {
bb721:
  struct std__ctype_char_* __f722;
  struct std__ctype_char_* __retval723;
  __f722 = v720;
    struct std__ctype_char_* t724 = __f722;
    _Bool cast725 = (_Bool)t724;
    _Bool u726 = !cast725;
    if (u726) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t727 = __f722;
  __retval723 = t727;
  struct std__ctype_char_* t728 = __retval723;
  return t728;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v729, char v730) {
bb731:
  struct std__ctype_char_* this732;
  char __c733;
  char __retval734;
  this732 = v729;
  __c733 = v730;
  struct std__ctype_char_* t735 = this732;
    char t736 = t735->_M_widen_ok;
    _Bool cast737 = (_Bool)t736;
    if (cast737) {
      char t738 = __c733;
      unsigned char cast739 = (unsigned char)t738;
      unsigned long cast740 = (unsigned long)cast739;
      char t741 = t735->_M_widen[cast740];
      __retval734 = t741;
      char t742 = __retval734;
      return t742;
    }
  std__ctype_char____M_widen_init___const(t735);
  char t743 = __c733;
  void** v744 = (void**)t735;
  void* v745 = *((void**)v744);
  char vcall748 = (char)__VERIFIER_virtual_call_char_char(t735, 6, t743);
  __retval734 = vcall748;
  char t749 = __retval734;
  return t749;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v750, char v751) {
bb752:
  struct std__basic_ios_char__std__char_traits_char__* this753;
  char __c754;
  char __retval755;
  this753 = v750;
  __c754 = v751;
  struct std__basic_ios_char__std__char_traits_char__* t756 = this753;
  struct std__ctype_char_* t757 = t756->_M_ctype;
  struct std__ctype_char_* r758 = std__ctype_char__const__std____check_facet_std__ctype_char___(t757);
  char t759 = __c754;
  char r760 = std__ctype_char___widen_char__const(r758, t759);
  __retval755 = r760;
  char t761 = __retval755;
  return t761;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v762) {
bb763:
  struct std__basic_ostream_char__std__char_traits_char__* __os764;
  struct std__basic_ostream_char__std__char_traits_char__* __retval765;
  __os764 = v762;
  struct std__basic_ostream_char__std__char_traits_char__* t766 = __os764;
  struct std__basic_ostream_char__std__char_traits_char__* t767 = __os764;
  void** v768 = (void**)t767;
  void* v769 = *((void**)v768);
  unsigned char* cast770 = (unsigned char*)v769;
  long c771 = -24;
  unsigned char* ptr772 = &(cast770)[c771];
  long* cast773 = (long*)ptr772;
  long t774 = *cast773;
  unsigned char* cast775 = (unsigned char*)t767;
  unsigned char* ptr776 = &(cast775)[t774];
  struct std__basic_ostream_char__std__char_traits_char__* cast777 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr776;
  struct std__basic_ios_char__std__char_traits_char__* cast778 = (struct std__basic_ios_char__std__char_traits_char__*)cast777;
  char c779 = 10;
  char r780 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast778, c779);
  struct std__basic_ostream_char__std__char_traits_char__* r781 = std__ostream__put(t766, r780);
  struct std__basic_ostream_char__std__char_traits_char__* r782 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r781);
  __retval765 = r782;
  struct std__basic_ostream_char__std__char_traits_char__* t783 = __retval765;
  return t783;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v784) {
bb785:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this786;
  this786 = v784;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t787 = this786;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t787);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t787->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb788:
  int __retval789;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ base790;
  struct std__allocator_char_ ref_tmp0791;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2792;
  struct std__allocator_char_ ref_tmp1793;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str3794;
  struct std__allocator_char_ ref_tmp2795;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str4796;
  struct std__allocator_char_ ref_tmp3797;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str798;
  int c799 = 0;
  __retval789 = c799;
  char* cast800 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0791);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&base790, cast800, &ref_tmp0791);
  {
    std__allocator_char____allocator(&ref_tmp0791);
  }
    char* cast801 = (char*)&(_str_1);
    std__allocator_char___allocator_2(&ref_tmp1793);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str2792, cast801, &ref_tmp1793);
    {
      std__allocator_char____allocator(&ref_tmp1793);
    }
      char* cast802 = (char*)&(_str_2);
      std__allocator_char___allocator_2(&ref_tmp2795);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str3794, cast802, &ref_tmp2795);
      {
        std__allocator_char____allocator(&ref_tmp2795);
      }
        char* cast803 = (char*)&(_str_3);
        std__allocator_char___allocator_2(&ref_tmp3797);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str4796, cast803, &ref_tmp3797);
        {
          std__allocator_char____allocator(&ref_tmp3797);
        }
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&str798, &base790);
            unsigned long c804 = 9;
            unsigned long c805 = 5;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r806 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(&str798, c804, c805, &str2792);
            char* cast807 = (char*)&(_str_4);
            _Bool r808 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str798, cast807);
            _Bool u809 = !r808;
            if (u809) {
            } else {
              char* cast810 = (char*)&(_str_5);
              char* c811 = _str_6;
              unsigned int c812 = 28;
              char* cast813 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast810, c811, c812, cast813);
            }
            unsigned long c814 = 19;
            unsigned long c815 = 6;
            unsigned long c816 = 7;
            unsigned long c817 = 6;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r818 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(&str798, c814, c815, &str3794, c816, c817);
            char* cast819 = (char*)&(_str_7);
            _Bool r820 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str798, cast819);
            _Bool u821 = !r820;
            if (u821) {
            } else {
              char* cast822 = (char*)&(_str_8);
              char* c823 = _str_6;
              unsigned int c824 = 31;
              char* cast825 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast822, c823, c824, cast825);
            }
            struct std__basic_ostream_char__std__char_traits_char__* r826 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str798);
            struct std__basic_ostream_char__std__char_traits_char__* r827 = std__ostream__operator___std__ostream_____(r826, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            int c828 = 0;
            __retval789 = c828;
            int t829 = __retval789;
            int ret_val830 = t829;
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str798);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str4796);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str3794);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str2792);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&base790);
            }
            return ret_val830;
  int t831 = __retval789;
  return t831;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v832) {
bb833:
  struct std____new_allocator_char_* this834;
  this834 = v832;
  struct std____new_allocator_char_* t835 = this834;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v836) {
bb837:
  char* __r838;
  char* __retval839;
  __r838 = v836;
  char* t840 = __r838;
  __retval839 = t840;
  char* t841 = __retval839;
  return t841;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v842) {
bb843:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this844;
  char* __retval845;
  this844 = v842;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t846 = this844;
  char* cast847 = (char*)&(t846->field2._M_local_buf);
  char* r848 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast847);
  __retval845 = r848;
  char* t849 = __retval845;
  return t849;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v850, char* v851, struct std__allocator_char_* v852) {
bb853:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this854;
  char* __dat855;
  struct std__allocator_char_* __a856;
  this854 = v850;
  __dat855 = v851;
  __a856 = v852;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t857 = this854;
  struct std__allocator_char_* base858 = (struct std__allocator_char_*)((char *)t857 + 0);
  struct std__allocator_char_* t859 = __a856;
  std__allocator_char___allocator(base858, t859);
    char* t860 = __dat855;
    t857->_M_p = t860;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb861:
  _Bool __retval862;
    _Bool c863 = 0;
    __retval862 = c863;
    _Bool t864 = __retval862;
    return t864;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v865, char* v866) {
bb867:
  char* __c1868;
  char* __c2869;
  _Bool __retval870;
  __c1868 = v865;
  __c2869 = v866;
  char* t871 = __c1868;
  char t872 = *t871;
  int cast873 = (int)t872;
  char* t874 = __c2869;
  char t875 = *t874;
  int cast876 = (int)t875;
  _Bool c877 = ((cast873 == cast876)) ? 1 : 0;
  __retval870 = c877;
  _Bool t878 = __retval870;
  return t878;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v879) {
bb880:
  char* __p881;
  unsigned long __retval882;
  unsigned long __i883;
  __p881 = v879;
  unsigned long c884 = 0;
  __i883 = c884;
    char ref_tmp0885;
    while (1) {
      unsigned long t886 = __i883;
      char* t887 = __p881;
      char* ptr888 = &(t887)[t886];
      char c889 = 0;
      ref_tmp0885 = c889;
      _Bool r890 = __gnu_cxx__char_traits_char___eq(ptr888, &ref_tmp0885);
      _Bool u891 = !r890;
      if (!u891) break;
      unsigned long t892 = __i883;
      unsigned long u893 = t892 + 1;
      __i883 = u893;
    }
  unsigned long t894 = __i883;
  __retval882 = t894;
  unsigned long t895 = __retval882;
  return t895;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v896) {
bb897:
  char* __s898;
  unsigned long __retval899;
  __s898 = v896;
    _Bool r900 = std____is_constant_evaluated();
    if (r900) {
      char* t901 = __s898;
      unsigned long r902 = __gnu_cxx__char_traits_char___length(t901);
      __retval899 = r902;
      unsigned long t903 = __retval899;
      return t903;
    }
  char* t904 = __s898;
  unsigned long r905 = strlen(t904);
  __retval899 = r905;
  unsigned long t906 = __retval899;
  return t906;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v907, char* v908, struct std__random_access_iterator_tag v909) {
bb910:
  char* __first911;
  char* __last912;
  struct std__random_access_iterator_tag unnamed913;
  long __retval914;
  __first911 = v907;
  __last912 = v908;
  unnamed913 = v909;
  char* t915 = __last912;
  char* t916 = __first911;
  long diff917 = t915 - t916;
  __retval914 = diff917;
  long t918 = __retval914;
  return t918;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v919) {
bb920:
  char** unnamed921;
  struct std__random_access_iterator_tag __retval922;
  unnamed921 = v919;
  struct std__random_access_iterator_tag t923 = __retval922;
  return t923;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v924, char* v925) {
bb926:
  char* __first927;
  char* __last928;
  long __retval929;
  struct std__random_access_iterator_tag agg_tmp0930;
  __first927 = v924;
  __last928 = v925;
  char* t931 = __first927;
  char* t932 = __last928;
  struct std__random_access_iterator_tag r933 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first927);
  agg_tmp0930 = r933;
  struct std__random_access_iterator_tag t934 = agg_tmp0930;
  long r935 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t931, t932, t934);
  __retval929 = r935;
  long t936 = __retval929;
  return t936;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v937, char* v938) {
bb939:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this940;
  char* __p941;
  this940 = v937;
  __p941 = v938;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t942 = this940;
  char* t943 = __p941;
  t942->_M_dataplus._M_p = t943;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v944) {
bb945:
  struct std__allocator_char_* __a946;
  unsigned long __retval947;
  __a946 = v944;
  unsigned long c948 = -1;
  unsigned long c949 = 1;
  unsigned long b950 = c948 / c949;
  __retval947 = b950;
  unsigned long t951 = __retval947;
  return t951;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v952) {
bb953:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this954;
  struct std__allocator_char_* __retval955;
  this954 = v952;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t956 = this954;
  struct std__allocator_char_* base957 = (struct std__allocator_char_*)((char *)&(t956->_M_dataplus) + 0);
  __retval955 = base957;
  struct std__allocator_char_* t958 = __retval955;
  return t958;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v959, unsigned long* v960) {
bb961:
  unsigned long* __a962;
  unsigned long* __b963;
  unsigned long* __retval964;
  __a962 = v959;
  __b963 = v960;
    unsigned long* t965 = __b963;
    unsigned long t966 = *t965;
    unsigned long* t967 = __a962;
    unsigned long t968 = *t967;
    _Bool c969 = ((t966 < t968)) ? 1 : 0;
    if (c969) {
      unsigned long* t970 = __b963;
      __retval964 = t970;
      unsigned long* t971 = __retval964;
      return t971;
    }
  unsigned long* t972 = __a962;
  __retval964 = t972;
  unsigned long* t973 = __retval964;
  return t973;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v974) {
bb975:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this976;
  unsigned long __retval977;
  unsigned long __diffmax978;
  unsigned long __allocmax979;
  this976 = v974;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t980 = this976;
  unsigned long c981 = 9223372036854775807;
  __diffmax978 = c981;
  struct std__allocator_char_* r982 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t980);
  unsigned long r983 = std__allocator_traits_std__allocator_char_____max_size(r982);
  __allocmax979 = r983;
  unsigned long* r984 = unsigned_long_const__std__min_unsigned_long_(&__diffmax978, &__allocmax979);
  unsigned long t985 = *r984;
  unsigned long c986 = 1;
  unsigned long b987 = t985 - c986;
  __retval977 = b987;
  unsigned long t988 = __retval977;
  return t988;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v989) {
bb990:
  struct std____new_allocator_char_* this991;
  unsigned long __retval992;
  this991 = v989;
  struct std____new_allocator_char_* t993 = this991;
  unsigned long c994 = 9223372036854775807;
  unsigned long c995 = 1;
  unsigned long b996 = c994 / c995;
  __retval992 = b996;
  unsigned long t997 = __retval992;
  return t997;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v998, unsigned long v999, void* v1000) {
bb1001:
  struct std____new_allocator_char_* this1002;
  unsigned long __n1003;
  void* unnamed1004;
  char* __retval1005;
  this1002 = v998;
  __n1003 = v999;
  unnamed1004 = v1000;
  struct std____new_allocator_char_* t1006 = this1002;
    unsigned long t1007 = __n1003;
    unsigned long r1008 = std____new_allocator_char____M_max_size___const(t1006);
    _Bool c1009 = ((t1007 > r1008)) ? 1 : 0;
    if (c1009) {
        unsigned long t1010 = __n1003;
        unsigned long c1011 = -1;
        unsigned long c1012 = 1;
        unsigned long b1013 = c1011 / c1012;
        _Bool c1014 = ((t1010 > b1013)) ? 1 : 0;
        if (c1014) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1015 = 1;
    unsigned long c1016 = 16;
    _Bool c1017 = ((c1015 > c1016)) ? 1 : 0;
    if (c1017) {
      unsigned long __al1018;
      unsigned long c1019 = 1;
      __al1018 = c1019;
      unsigned long t1020 = __n1003;
      unsigned long c1021 = 1;
      unsigned long b1022 = t1020 * c1021;
      unsigned long t1023 = __al1018;
      void* r1024 = operator_new_2(b1022, t1023);
      char* cast1025 = (char*)r1024;
      __retval1005 = cast1025;
      char* t1026 = __retval1005;
      return t1026;
    }
  unsigned long t1027 = __n1003;
  unsigned long c1028 = 1;
  unsigned long b1029 = t1027 * c1028;
  void* r1030 = operator_new(b1029);
  char* cast1031 = (char*)r1030;
  __retval1005 = cast1031;
  char* t1032 = __retval1005;
  return t1032;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1033, unsigned long v1034) {
bb1035:
  struct std__allocator_char_* this1036;
  unsigned long __n1037;
  char* __retval1038;
  this1036 = v1033;
  __n1037 = v1034;
  struct std__allocator_char_* t1039 = this1036;
    _Bool r1040 = std____is_constant_evaluated();
    if (r1040) {
        unsigned long t1041 = __n1037;
        unsigned long c1042 = 1;
        unsigned long ovr1043;
        _Bool ovf1044 = __builtin_mul_overflow(t1041, c1042, &ovr1043);
        __n1037 = ovr1043;
        if (ovf1044) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1045 = __n1037;
      void* r1046 = operator_new(t1045);
      char* cast1047 = (char*)r1046;
      __retval1038 = cast1047;
      char* t1048 = __retval1038;
      return t1048;
    }
  struct std____new_allocator_char_* base1049 = (struct std____new_allocator_char_*)((char *)t1039 + 0);
  unsigned long t1050 = __n1037;
  void* c1051 = ((void*)0);
  char* r1052 = std____new_allocator_char___allocate(base1049, t1050, c1051);
  __retval1038 = r1052;
  char* t1053 = __retval1038;
  return t1053;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1054, unsigned long v1055) {
bb1056:
  struct std__allocator_char_* __a1057;
  unsigned long __n1058;
  char* __retval1059;
  __a1057 = v1054;
  __n1058 = v1055;
  struct std__allocator_char_* t1060 = __a1057;
  unsigned long t1061 = __n1058;
  char* r1062 = std__allocator_char___allocate(t1060, t1061);
  __retval1059 = r1062;
  char* t1063 = __retval1059;
  return t1063;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1064, unsigned long v1065) {
bb1066:
  struct std__allocator_char_* __a1067;
  unsigned long __n1068;
  char* __retval1069;
  char* __p1070;
  __a1067 = v1064;
  __n1068 = v1065;
  struct std__allocator_char_* t1071 = __a1067;
  unsigned long t1072 = __n1068;
  char* r1073 = std__allocator_traits_std__allocator_char_____allocate(t1071, t1072);
  __p1070 = r1073;
  char* t1074 = __p1070;
  __retval1069 = t1074;
  char* t1075 = __retval1069;
  return t1075;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1076) {
bb1077:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1078;
  struct std__allocator_char_* __retval1079;
  this1078 = v1076;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1080 = this1078;
  struct std__allocator_char_* base1081 = (struct std__allocator_char_*)((char *)&(t1080->_M_dataplus) + 0);
  __retval1079 = base1081;
  struct std__allocator_char_* t1082 = __retval1079;
  return t1082;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1083, unsigned long* v1084, unsigned long v1085) {
bb1086:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1087;
  unsigned long* __capacity1088;
  unsigned long __old_capacity1089;
  char* __retval1090;
  this1087 = v1083;
  __capacity1088 = v1084;
  __old_capacity1089 = v1085;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1091 = this1087;
    unsigned long* t1092 = __capacity1088;
    unsigned long t1093 = *t1092;
    unsigned long r1094 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1091);
    _Bool c1095 = ((t1093 > r1094)) ? 1 : 0;
    if (c1095) {
      char* cast1096 = (char*)&(_str_10);
      std____throw_length_error(cast1096);
    }
    unsigned long* t1097 = __capacity1088;
    unsigned long t1098 = *t1097;
    unsigned long t1099 = __old_capacity1089;
    _Bool c1100 = ((t1098 > t1099)) ? 1 : 0;
    _Bool ternary1101;
    if (c1100) {
      unsigned long* t1102 = __capacity1088;
      unsigned long t1103 = *t1102;
      unsigned long c1104 = 2;
      unsigned long t1105 = __old_capacity1089;
      unsigned long b1106 = c1104 * t1105;
      _Bool c1107 = ((t1103 < b1106)) ? 1 : 0;
      ternary1101 = (_Bool)c1107;
    } else {
      _Bool c1108 = 0;
      ternary1101 = (_Bool)c1108;
    }
    if (ternary1101) {
      unsigned long c1109 = 2;
      unsigned long t1110 = __old_capacity1089;
      unsigned long b1111 = c1109 * t1110;
      unsigned long* t1112 = __capacity1088;
      *t1112 = b1111;
        unsigned long* t1113 = __capacity1088;
        unsigned long t1114 = *t1113;
        unsigned long r1115 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1091);
        _Bool c1116 = ((t1114 > r1115)) ? 1 : 0;
        if (c1116) {
          unsigned long r1117 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1091);
          unsigned long* t1118 = __capacity1088;
          *t1118 = r1117;
        }
    }
  struct std__allocator_char_* r1119 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1091);
  unsigned long* t1120 = __capacity1088;
  unsigned long t1121 = *t1120;
  unsigned long c1122 = 1;
  unsigned long b1123 = t1121 + c1122;
  char* r1124 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1119, b1123);
  __retval1090 = r1124;
  char* t1125 = __retval1090;
  return t1125;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1126, unsigned long v1127) {
bb1128:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1129;
  unsigned long __capacity1130;
  this1129 = v1126;
  __capacity1130 = v1127;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1131 = this1129;
  unsigned long t1132 = __capacity1130;
  t1131->field2._M_allocated_capacity = t1132;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1133:
  _Bool __retval1134;
    _Bool c1135 = 0;
    __retval1134 = c1135;
    _Bool t1136 = __retval1134;
    return t1136;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1137) {
bb1138:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1139;
  this1139 = v1137;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1140 = this1139;
    _Bool r1141 = std__is_constant_evaluated();
    if (r1141) {
        unsigned long __i1142;
        unsigned long c1143 = 0;
        __i1142 = c1143;
        while (1) {
          unsigned long t1145 = __i1142;
          unsigned long c1146 = 15;
          _Bool c1147 = ((t1145 <= c1146)) ? 1 : 0;
          if (!c1147) break;
          char c1148 = 0;
          unsigned long t1149 = __i1142;
          t1140->field2._M_local_buf[t1149] = c1148;
        for_step1144: ;
          unsigned long t1150 = __i1142;
          unsigned long u1151 = t1150 + 1;
          __i1142 = u1151;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1152, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1153) {
bb1154:
  struct _Guard* this1155;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1156;
  this1155 = v1152;
  __s1156 = v1153;
  struct _Guard* t1157 = this1155;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1158 = __s1156;
  t1157->_M_guarded = t1158;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1159, char* v1160) {
bb1161:
  char* __location1162;
  char* __args1163;
  char* __retval1164;
  void* __loc1165;
  __location1162 = v1159;
  __args1163 = v1160;
  char* t1166 = __location1162;
  void* cast1167 = (void*)t1166;
  __loc1165 = cast1167;
    void* t1168 = __loc1165;
    char* cast1169 = (char*)t1168;
    char* t1170 = __args1163;
    char t1171 = *t1170;
    *cast1169 = t1171;
    __retval1164 = cast1169;
    char* t1172 = __retval1164;
    return t1172;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1173, char* v1174) {
bb1175:
  char* __c11176;
  char* __c21177;
  __c11176 = v1173;
  __c21177 = v1174;
    _Bool r1178 = std____is_constant_evaluated();
    if (r1178) {
      char* t1179 = __c11176;
      char* t1180 = __c21177;
      char* r1181 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1179, t1180);
    } else {
      char* t1182 = __c21177;
      char t1183 = *t1182;
      char* t1184 = __c11176;
      *t1184 = t1183;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1185, char* v1186, unsigned long v1187) {
bb1188:
  char* __s11189;
  char* __s21190;
  unsigned long __n1191;
  char* __retval1192;
  __s11189 = v1185;
  __s21190 = v1186;
  __n1191 = v1187;
    unsigned long t1193 = __n1191;
    unsigned long c1194 = 0;
    _Bool c1195 = ((t1193 == c1194)) ? 1 : 0;
    if (c1195) {
      char* t1196 = __s11189;
      __retval1192 = t1196;
      char* t1197 = __retval1192;
      return t1197;
    }
    _Bool r1198 = std____is_constant_evaluated();
    if (r1198) {
        unsigned long __i1199;
        unsigned long c1200 = 0;
        __i1199 = c1200;
        while (1) {
          unsigned long t1202 = __i1199;
          unsigned long t1203 = __n1191;
          _Bool c1204 = ((t1202 < t1203)) ? 1 : 0;
          if (!c1204) break;
          char* t1205 = __s11189;
          unsigned long t1206 = __i1199;
          char* ptr1207 = &(t1205)[t1206];
          unsigned long t1208 = __i1199;
          char* t1209 = __s21190;
          char* ptr1210 = &(t1209)[t1208];
          char* r1211 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1207, ptr1210);
        for_step1201: ;
          unsigned long t1212 = __i1199;
          unsigned long u1213 = t1212 + 1;
          __i1199 = u1213;
        }
      char* t1214 = __s11189;
      __retval1192 = t1214;
      char* t1215 = __retval1192;
      return t1215;
    }
  char* t1216 = __s11189;
  void* cast1217 = (void*)t1216;
  char* t1218 = __s21190;
  void* cast1219 = (void*)t1218;
  unsigned long t1220 = __n1191;
  unsigned long c1221 = 1;
  unsigned long b1222 = t1220 * c1221;
  void* r1223 = memcpy(cast1217, cast1219, b1222);
  char* t1224 = __s11189;
  __retval1192 = t1224;
  char* t1225 = __retval1192;
  return t1225;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1226, char* v1227, unsigned long v1228) {
bb1229:
  char* __s11230;
  char* __s21231;
  unsigned long __n1232;
  char* __retval1233;
  __s11230 = v1226;
  __s21231 = v1227;
  __n1232 = v1228;
    unsigned long t1234 = __n1232;
    unsigned long c1235 = 0;
    _Bool c1236 = ((t1234 == c1235)) ? 1 : 0;
    if (c1236) {
      char* t1237 = __s11230;
      __retval1233 = t1237;
      char* t1238 = __retval1233;
      return t1238;
    }
    _Bool r1239 = std____is_constant_evaluated();
    if (r1239) {
      char* t1240 = __s11230;
      char* t1241 = __s21231;
      unsigned long t1242 = __n1232;
      char* r1243 = __gnu_cxx__char_traits_char___copy(t1240, t1241, t1242);
      __retval1233 = r1243;
      char* t1244 = __retval1233;
      return t1244;
    }
  char* t1245 = __s11230;
  void* cast1246 = (void*)t1245;
  char* t1247 = __s21231;
  void* cast1248 = (void*)t1247;
  unsigned long t1249 = __n1232;
  void* r1250 = memcpy(cast1246, cast1248, t1249);
  char* cast1251 = (char*)r1250;
  __retval1233 = cast1251;
  char* t1252 = __retval1233;
  return t1252;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1253, char* v1254, unsigned long v1255) {
bb1256:
  char* __d1257;
  char* __s1258;
  unsigned long __n1259;
  __d1257 = v1253;
  __s1258 = v1254;
  __n1259 = v1255;
    unsigned long t1260 = __n1259;
    unsigned long c1261 = 1;
    _Bool c1262 = ((t1260 == c1261)) ? 1 : 0;
    if (c1262) {
      char* t1263 = __d1257;
      char* t1264 = __s1258;
      std__char_traits_char___assign(t1263, t1264);
    } else {
      char* t1265 = __d1257;
      char* t1266 = __s1258;
      unsigned long t1267 = __n1259;
      char* r1268 = std__char_traits_char___copy(t1265, t1266, t1267);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1269) {
bb1270:
  char* __it1271;
  char* __retval1272;
  __it1271 = v1269;
  char* t1273 = __it1271;
  __retval1272 = t1273;
  char* t1274 = __retval1272;
  return t1274;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1275, char* v1276, char* v1277) {
bb1278:
  char* __p1279;
  char* __k11280;
  char* __k21281;
  __p1279 = v1275;
  __k11280 = v1276;
  __k21281 = v1277;
    char* t1282 = __p1279;
    char* t1283 = __k11280;
    char* r1284 = char_const__std____niter_base_char_const__(t1283);
    char* t1285 = __k21281;
    char* t1286 = __k11280;
    long diff1287 = t1285 - t1286;
    unsigned long cast1288 = (unsigned long)diff1287;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1282, r1284, cast1288);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1289) {
bb1290:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1291;
  char* __retval1292;
  this1291 = v1289;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1293 = this1291;
  char* t1294 = t1293->_M_dataplus._M_p;
  __retval1292 = t1294;
  char* t1295 = __retval1292;
  return t1295;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1296, unsigned long v1297) {
bb1298:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1299;
  unsigned long __length1300;
  this1299 = v1296;
  __length1300 = v1297;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1301 = this1299;
  unsigned long t1302 = __length1300;
  t1301->_M_string_length = t1302;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1303, unsigned long v1304) {
bb1305:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1306;
  unsigned long __n1307;
  char ref_tmp01308;
  this1306 = v1303;
  __n1307 = v1304;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1309 = this1306;
  unsigned long t1310 = __n1307;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1309, t1310);
  unsigned long t1311 = __n1307;
  char* r1312 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1309);
  char* ptr1313 = &(r1312)[t1311];
  char c1314 = 0;
  ref_tmp01308 = c1314;
  std__char_traits_char___assign(ptr1313, &ref_tmp01308);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1315) {
bb1316:
  struct _Guard* this1317;
  this1317 = v1315;
  struct _Guard* t1318 = this1317;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1319 = t1318->_M_guarded;
    _Bool cast1320 = (_Bool)t1319;
    if (cast1320) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1321 = t1318->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1321);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1322, char* v1323, char* v1324, struct std__forward_iterator_tag v1325) {
bb1326:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1327;
  char* __beg1328;
  char* __end1329;
  struct std__forward_iterator_tag unnamed1330;
  unsigned long __dnew1331;
  struct _Guard __guard1332;
  this1327 = v1322;
  __beg1328 = v1323;
  __end1329 = v1324;
  unnamed1330 = v1325;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1333 = this1327;
  char* t1334 = __beg1328;
  char* t1335 = __end1329;
  long r1336 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1334, t1335);
  unsigned long cast1337 = (unsigned long)r1336;
  __dnew1331 = cast1337;
    unsigned long t1338 = __dnew1331;
    unsigned long c1339 = 15;
    _Bool c1340 = ((t1338 > c1339)) ? 1 : 0;
    if (c1340) {
      unsigned long c1341 = 0;
      char* r1342 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1333, &__dnew1331, c1341);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1333, r1342);
      unsigned long t1343 = __dnew1331;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1333, t1343);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1333);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1332, t1333);
    char* r1344 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1333);
    char* t1345 = __beg1328;
    char* t1346 = __end1329;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1344, t1345, t1346);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1347 = ((void*)0);
    __guard1332._M_guarded = c1347;
    unsigned long t1348 = __dnew1331;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1333, t1348);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1332);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1349) {
bb1350:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1351;
  this1351 = v1349;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1352 = this1351;
  {
    struct std__allocator_char_* base1353 = (struct std__allocator_char_*)((char *)t1352 + 0);
    std__allocator_char____allocator(base1353);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1354, struct std____new_allocator_char_* v1355) {
bb1356:
  struct std____new_allocator_char_* this1357;
  struct std____new_allocator_char_* unnamed1358;
  this1357 = v1354;
  unnamed1358 = v1355;
  struct std____new_allocator_char_* t1359 = this1357;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1360) {
bb1361:
  char* __r1362;
  char* __retval1363;
  __r1362 = v1360;
  char* t1364 = __r1362;
  __retval1363 = t1364;
  char* t1365 = __retval1363;
  return t1365;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1366) {
bb1367:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1368;
  char* __retval1369;
  this1368 = v1366;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1370 = this1368;
  char* cast1371 = (char*)&(t1370->field2._M_local_buf);
  char* r1372 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1371);
  __retval1369 = r1372;
  char* t1373 = __retval1369;
  return t1373;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1374) {
bb1375:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1376;
  _Bool __retval1377;
  this1376 = v1374;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1378 = this1376;
    char* r1379 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1378);
    char* r1380 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1378);
    _Bool c1381 = ((r1379 == r1380)) ? 1 : 0;
    if (c1381) {
        unsigned long t1382 = t1378->_M_string_length;
        unsigned long c1383 = 15;
        _Bool c1384 = ((t1382 > c1383)) ? 1 : 0;
        if (c1384) {
          __builtin_unreachable();
        }
      _Bool c1385 = 1;
      __retval1377 = c1385;
      _Bool t1386 = __retval1377;
      return t1386;
    }
  _Bool c1387 = 0;
  __retval1377 = c1387;
  _Bool t1388 = __retval1377;
  return t1388;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1389, char* v1390, unsigned long v1391) {
bb1392:
  struct std____new_allocator_char_* this1393;
  char* __p1394;
  unsigned long __n1395;
  this1393 = v1389;
  __p1394 = v1390;
  __n1395 = v1391;
  struct std____new_allocator_char_* t1396 = this1393;
    unsigned long c1397 = 1;
    unsigned long c1398 = 16;
    _Bool c1399 = ((c1397 > c1398)) ? 1 : 0;
    if (c1399) {
      char* t1400 = __p1394;
      void* cast1401 = (void*)t1400;
      unsigned long t1402 = __n1395;
      unsigned long c1403 = 1;
      unsigned long b1404 = t1402 * c1403;
      unsigned long c1405 = 1;
      operator_delete_3(cast1401, b1404, c1405);
      return;
    }
  char* t1406 = __p1394;
  void* cast1407 = (void*)t1406;
  unsigned long t1408 = __n1395;
  unsigned long c1409 = 1;
  unsigned long b1410 = t1408 * c1409;
  operator_delete_2(cast1407, b1410);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1411, char* v1412, unsigned long v1413) {
bb1414:
  struct std__allocator_char_* this1415;
  char* __p1416;
  unsigned long __n1417;
  this1415 = v1411;
  __p1416 = v1412;
  __n1417 = v1413;
  struct std__allocator_char_* t1418 = this1415;
    _Bool r1419 = std____is_constant_evaluated();
    if (r1419) {
      char* t1420 = __p1416;
      void* cast1421 = (void*)t1420;
      operator_delete(cast1421);
      return;
    }
  struct std____new_allocator_char_* base1422 = (struct std____new_allocator_char_*)((char *)t1418 + 0);
  char* t1423 = __p1416;
  unsigned long t1424 = __n1417;
  std____new_allocator_char___deallocate(base1422, t1423, t1424);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1425, char* v1426, unsigned long v1427) {
bb1428:
  struct std__allocator_char_* __a1429;
  char* __p1430;
  unsigned long __n1431;
  __a1429 = v1425;
  __p1430 = v1426;
  __n1431 = v1427;
  struct std__allocator_char_* t1432 = __a1429;
  char* t1433 = __p1430;
  unsigned long t1434 = __n1431;
  std__allocator_char___deallocate(t1432, t1433, t1434);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1435, unsigned long v1436) {
bb1437:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1438;
  unsigned long __size1439;
  this1438 = v1435;
  __size1439 = v1436;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1440 = this1438;
  struct std__allocator_char_* r1441 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1440);
  char* r1442 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1440);
  unsigned long t1443 = __size1439;
  unsigned long c1444 = 1;
  unsigned long b1445 = t1443 + c1444;
  std__allocator_traits_std__allocator_char_____deallocate(r1441, r1442, b1445);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1446) {
bb1447:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1448;
  this1448 = v1446;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1449 = this1448;
    _Bool r1450 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1449);
    _Bool u1451 = !r1450;
    if (u1451) {
      unsigned long t1452 = t1449->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1449, t1452);
    }
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1453, struct std__allocator_char_* v1454) {
bb1455:
  struct std__allocator_char_* this1456;
  struct std__allocator_char_* __a1457;
  this1456 = v1453;
  __a1457 = v1454;
  struct std__allocator_char_* t1458 = this1456;
  struct std____new_allocator_char_* base1459 = (struct std____new_allocator_char_*)((char *)t1458 + 0);
  struct std__allocator_char_* t1460 = __a1457;
  struct std____new_allocator_char_* base1461 = (struct std____new_allocator_char_*)((char *)t1460 + 0);
  std____new_allocator_char_____new_allocator(base1459, base1461);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE37select_on_container_copy_constructionERKS0_
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* v1462) {
bb1463:
  struct std__allocator_char_* __rhs1464;
  struct std__allocator_char_ __retval1465;
  __rhs1464 = v1462;
  struct std__allocator_char_* t1466 = __rhs1464;
  std__allocator_char___allocator(&__retval1465, t1466);
  struct std__allocator_char_ t1467 = __retval1465;
  return t1467;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE17_S_select_on_copyERKS1_
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* v1468) {
bb1469:
  struct std__allocator_char_* __a1470;
  struct std__allocator_char_ __retval1471;
  __a1470 = v1468;
  struct std__allocator_char_* t1472 = __a1470;
  struct std__allocator_char_ r1473 = std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(t1472);
  __retval1471 = r1473;
  struct std__allocator_char_ t1474 = __retval1471;
  return t1474;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1475, char* v1476, struct std__allocator_char_* v1477) {
bb1478:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1479;
  char* __dat1480;
  struct std__allocator_char_* __a1481;
  this1479 = v1475;
  __dat1480 = v1476;
  __a1481 = v1477;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1482 = this1479;
  struct std__allocator_char_* base1483 = (struct std__allocator_char_*)((char *)t1482 + 0);
  struct std__allocator_char_* t1484 = __a1481;
  std__allocator_char___allocator(base1483, t1484);
    char* t1485 = __dat1480;
    t1482->_M_p = t1485;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructILb1EEEvPKcm
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_true_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1486, char* v1487, unsigned long v1488) {
bb1489:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1490;
  char* __str1491;
  unsigned long __n1492;
  this1490 = v1486;
  __str1491 = v1487;
  __n1492 = v1488;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1493 = this1490;
    unsigned long t1494 = __n1492;
    unsigned long c1495 = 15;
    _Bool c1496 = ((t1494 > c1495)) ? 1 : 0;
    if (c1496) {
      unsigned long c1497 = 0;
      char* r1498 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1493, &__n1492, c1497);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1493, r1498);
      unsigned long t1499 = __n1492;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1493, t1499);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1493);
    }
    unsigned long t1500 = __n1492;
    _Bool cast1501 = (_Bool)t1500;
    _Bool ternary1502;
    if (cast1501) {
      _Bool c1503 = 1;
      ternary1502 = (_Bool)c1503;
    } else {
      _Bool c1504 = 1;
      ternary1502 = (_Bool)c1504;
    }
    if (ternary1502) {
      char* r1505 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1493);
      char* t1506 = __str1491;
      unsigned long t1507 = __n1492;
      _Bool c1508 = 1;
      unsigned long cast1509 = (unsigned long)c1508;
      unsigned long b1510 = t1507 + cast1509;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1505, t1506, b1510);
    }
  unsigned long t1511 = __n1492;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1493, t1511);
    _Bool c1512 = 0;
    if (c1512) {
      char ref_tmp01513;
      unsigned long t1514 = __n1492;
      char* r1515 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1493);
      char* ptr1516 = &(r1515)[t1514];
      char c1517 = 0;
      ref_tmp01513 = c1517;
      std__char_traits_char___assign(ptr1516, &ref_tmp01513);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1518) {
bb1519:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1520;
  unsigned long __retval1521;
  unsigned long __sz1522;
  this1520 = v1518;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1523 = this1520;
  unsigned long t1524 = t1523->_M_string_length;
  __sz1522 = t1524;
    unsigned long t1525 = __sz1522;
    unsigned long r1526 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1523);
    _Bool c1527 = ((t1525 > r1526)) ? 1 : 0;
    if (c1527) {
      __builtin_unreachable();
    }
  unsigned long t1528 = __sz1522;
  __retval1521 = t1528;
  unsigned long t1529 = __retval1521;
  return t1529;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1530) {
bb1531:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1532;
  unsigned long __retval1533;
  this1532 = v1530;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1534 = this1532;
  unsigned long r1535 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1534);
  __retval1533 = r1535;
  unsigned long t1536 = __retval1533;
  return t1536;
}

