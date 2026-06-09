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
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

char _str[13] = "We ge, live.";
char _str_1[5] = "live";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[13] = "generalities";
char _str_3[16] = "live in details";
char _str_4[54] = "(str2 == \"generalities\")&&(str3 != \"live in details\")";
char _str_5[114] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_substr_4_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_6[50] = "basic_string: construction from null is not valid";
char _str_7[24] = "basic_string::_M_create";
char _str_8[21] = "basic_string::substr";
char _str_9[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_10[27] = "basic_string::basic_string";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1, unsigned long p2, unsigned long p3);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* __gnu_cxx__char_traits_char___find(char* p0, unsigned long p1, char* p2);
char* std__char_traits_char___find(char* p0, unsigned long p1, char* p2);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, unsigned long p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);

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
        char* cast20 = (char*)&(_str_6);
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

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v39) {
bb40:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this41;
  unsigned long __retval42;
  unsigned long __sz43;
  this41 = v39;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t44 = this41;
  unsigned long t45 = t44->_M_string_length;
  __sz43 = t45;
    unsigned long t46 = __sz43;
    unsigned long r47 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t44);
    _Bool c48 = ((t46 > r47)) ? 1 : 0;
    if (c48) {
      __builtin_unreachable();
    }
  unsigned long t49 = __sz43;
  __retval42 = t49;
  unsigned long t50 = __retval42;
  return t50;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v51, unsigned long v52, char* v53) {
bb54:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this55;
  unsigned long __pos56;
  char* __s57;
  unsigned long __retval58;
  this55 = v51;
  __pos56 = v52;
  __s57 = v53;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t59 = this55;
    unsigned long t60 = __pos56;
    unsigned long r61 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t59);
    _Bool c62 = ((t60 > r61)) ? 1 : 0;
    if (c62) {
      char* cast63 = (char*)&(_str_9);
      char* t64 = __s57;
      unsigned long t65 = __pos56;
      unsigned long r66 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t59);
      std____throw_out_of_range_fmt(cast63, t64, t65, r66);
    }
  unsigned long t67 = __pos56;
  __retval58 = t67;
  unsigned long t68 = __retval58;
  return t68;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS4_mm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v69, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v70, unsigned long v71, unsigned long v72) {
bb73:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this74;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str75;
  unsigned long __pos76;
  unsigned long __n77;
  struct std__allocator_char_ ref_tmp078;
  char* __start79;
  struct std__forward_iterator_tag agg_tmp080;
  this74 = v69;
  __str75 = v70;
  __pos76 = v71;
  __n77 = v72;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t81 = this74;
  char* r82 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t81);
  std__allocator_char___allocator_2(&ref_tmp078);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t81->_M_dataplus, r82, &ref_tmp078);
  {
    std__allocator_char____allocator(&ref_tmp078);
  }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t83 = __str75;
    char* r84 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t83);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t85 = __str75;
    unsigned long t86 = __pos76;
    char* cast87 = (char*)&(_str_10);
    unsigned long r88 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t85, t86, cast87);
    char* ptr89 = &(r84)[r88];
    __start79 = ptr89;
    char* t90 = __start79;
    char* t91 = __start79;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t92 = __str75;
    unsigned long t93 = __pos76;
    unsigned long t94 = __n77;
    unsigned long r95 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t92, t93, t94);
    char* ptr96 = &(t91)[r95];
    struct std__forward_iterator_tag t97 = agg_tmp080;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t81, t90, ptr96, t97);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6substrEmm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v98, unsigned long v99, unsigned long v100) {
bb101:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this102;
  unsigned long __pos103;
  unsigned long __n104;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval105;
  this102 = v98;
  __pos103 = v99;
  __n104 = v100;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t106 = this102;
  unsigned long t107 = __pos103;
  char* cast108 = (char*)&(_str_8);
  unsigned long r109 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t106, t107, cast108);
  unsigned long t110 = __n104;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&__retval105, t106, r109, t110);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t111 = __retval105;
  return t111;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_move_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign() {
bb112:
  _Bool __retval113;
  _Bool t114 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval113 = t114;
  _Bool t115 = __retval113;
  return t115;
}

// function: _ZNSt15__new_allocatorIcEaSERKS0_
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* v116, struct std____new_allocator_char_* v117) {
bb118:
  struct std____new_allocator_char_* this119;
  struct std____new_allocator_char_* unnamed120;
  struct std____new_allocator_char_* __retval121;
  this119 = v116;
  unnamed120 = v117;
  struct std____new_allocator_char_* t122 = this119;
  __retval121 = t122;
  struct std____new_allocator_char_* t123 = __retval121;
  return t123;
}

// function: _ZNSaIcEaSERKS_
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* v124, struct std__allocator_char_* v125) {
bb126:
  struct std__allocator_char_* this127;
  struct std__allocator_char_* unnamed128;
  struct std__allocator_char_* __retval129;
  this127 = v124;
  unnamed128 = v125;
  struct std__allocator_char_* t130 = this127;
  struct std____new_allocator_char_* base131 = (struct std____new_allocator_char_*)((char *)t130 + 0);
  struct std__allocator_char_* t132 = unnamed128;
  struct std____new_allocator_char_* base133 = (struct std____new_allocator_char_*)((char *)t132 + 0);
  struct std____new_allocator_char_* r134 = std____new_allocator_char___operator_(base131, base133);
  __retval129 = t130;
  struct std__allocator_char_* t135 = __retval129;
  return t135;
}

// function: _ZSt15__alloc_on_moveISaIcEEvRT_S2_
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* v136, struct std__allocator_char_* v137) {
bb138:
  struct std__allocator_char_* __one139;
  struct std__allocator_char_* __two140;
  __one139 = v136;
  __two140 = v137;
    struct std__allocator_char_* t141 = __two140;
    struct std__allocator_char_* t142 = __one139;
    struct std__allocator_char_* r143 = std__allocator_char___operator_(t142, t141);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v144) {
bb145:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this146;
  unsigned long __retval147;
  this146 = v144;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t148 = this146;
  unsigned long r149 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t148);
  __retval147 = r149;
  unsigned long t150 = __retval147;
  return t150;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v151) {
bb152:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this153;
  char* __retval154;
  this153 = v151;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t155 = this153;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t155);
  char* r156 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t155);
  __retval154 = r156;
  char* t157 = __retval154;
  return t157;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v158) {
bb159:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this160;
  unsigned long __retval161;
  unsigned long __sz162;
  this160 = v158;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t163 = this160;
  _Bool r164 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t163);
  unsigned long ternary165;
  if (r164) {
    unsigned long c166 = 15;
    ternary165 = (unsigned long)c166;
  } else {
    unsigned long t167 = t163->field2._M_allocated_capacity;
    ternary165 = (unsigned long)t167;
  }
  __sz162 = ternary165;
    unsigned long t168 = __sz162;
    unsigned long c169 = 15;
    _Bool c170 = ((t168 < c169)) ? 1 : 0;
    _Bool ternary171;
    if (c170) {
      _Bool c172 = 1;
      ternary171 = (_Bool)c172;
    } else {
      unsigned long t173 = __sz162;
      unsigned long r174 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t163);
      _Bool c175 = ((t173 > r174)) ? 1 : 0;
      ternary171 = (_Bool)c175;
    }
    if (ternary171) {
      __builtin_unreachable();
    }
  unsigned long t176 = __sz162;
  __retval161 = t176;
  unsigned long t177 = __retval161;
  return t177;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v178, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v179) {
bb180:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this181;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str182;
  this181 = v178;
  __str182 = v179;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t183 = this181;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t184 = __str182;
    _Bool c185 = ((t183 != t184)) ? 1 : 0;
    if (c185) {
      unsigned long __rsize186;
      unsigned long __capacity187;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t188 = __str182;
      unsigned long r189 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t188);
      __rsize186 = r189;
      unsigned long r190 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t183);
      __capacity187 = r190;
        unsigned long t191 = __rsize186;
        unsigned long t192 = __capacity187;
        _Bool c193 = ((t191 > t192)) ? 1 : 0;
        if (c193) {
          unsigned long __new_capacity194;
          char* __tmp195;
          unsigned long t196 = __rsize186;
          __new_capacity194 = t196;
          unsigned long t197 = __capacity187;
          char* r198 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t183, &__new_capacity194, t197);
          __tmp195 = r198;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t183);
          char* t199 = __tmp195;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t183, t199);
          unsigned long t200 = __new_capacity194;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t183, t200);
        }
        unsigned long t201 = __rsize186;
        _Bool cast202 = (_Bool)t201;
        if (cast202) {
          char* r203 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t183);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t204 = __str182;
          char* r205 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t204);
          unsigned long t206 = __rsize186;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r203, r205, t206);
        }
      unsigned long t207 = __rsize186;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t183, t207);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5clearEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v208) {
bb209:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this210;
  this210 = v208;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t211 = this210;
  unsigned long c212 = 0;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t211, c212);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEOS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v213, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v214) {
bb215:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this216;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str217;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval218;
  _Bool __equal_allocs219;
  this216 = v213;
  __str217 = v214;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t220 = this216;
  _Bool c221 = 1;
  __equal_allocs219 = c221;
    _Bool r222 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t220);
    _Bool u223 = !r222;
    _Bool ternary224;
    if (u223) {
      _Bool r225 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
      ternary224 = (_Bool)r225;
    } else {
      _Bool c226 = 0;
      ternary224 = (_Bool)c226;
    }
    _Bool ternary227;
    if (ternary224) {
      _Bool t228 = __equal_allocs219;
      _Bool u229 = !t228;
      ternary227 = (_Bool)u229;
    } else {
      _Bool c230 = 0;
      ternary227 = (_Bool)c230;
    }
    if (ternary227) {
      unsigned long t231 = t220->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t220, t231);
      char* r232 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t220);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t220, r232);
      unsigned long c233 = 0;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t220, c233);
    }
  struct std__allocator_char_* r234 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t220);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t235 = __str217;
  struct std__allocator_char_* r236 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t235);
  void_std____alloc_on_move_std__allocator_char___(r234, r236);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t237 = __str217;
    _Bool r238 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t237);
    if (r238) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t239 = __str217;
        _Bool c240 = ((t239 != t220)) ? 1 : 0;
        if (c240) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t241 = __str217;
            unsigned long r242 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t241);
            _Bool cast243 = (_Bool)r242;
            if (cast243) {
              char* r244 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t220);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t245 = __str217;
              char* r246 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t245);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t247 = __str217;
              unsigned long r248 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t247);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r244, r246, r248);
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t249 = __str217;
          unsigned long r250 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t249);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t220, r250);
        }
    } else {
        _Bool r251 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
        _Bool ternary252;
        if (r251) {
          _Bool c253 = 1;
          ternary252 = (_Bool)c253;
        } else {
          _Bool t254 = __equal_allocs219;
          ternary252 = (_Bool)t254;
        }
        if (ternary252) {
          char* __data255;
          unsigned long __capacity256;
          char* c257 = ((void*)0);
          __data255 = c257;
            _Bool r258 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t220);
            _Bool u259 = !r258;
            if (u259) {
                _Bool t260 = __equal_allocs219;
                if (t260) {
                  char* r261 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t220);
                  __data255 = r261;
                  unsigned long t262 = t220->field2._M_allocated_capacity;
                  __capacity256 = t262;
                } else {
                  unsigned long t263 = t220->field2._M_allocated_capacity;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t220, t263);
                }
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t264 = __str217;
          char* r265 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t264);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t220, r265);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t266 = __str217;
          unsigned long r267 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t266);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t220, r267);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t268 = __str217;
          unsigned long t269 = t268->field2._M_allocated_capacity;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t220, t269);
            char* t270 = __data255;
            _Bool cast271 = (_Bool)t270;
            if (cast271) {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t272 = __str217;
              char* t273 = __data255;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t272, t273);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t274 = __str217;
              unsigned long t275 = __capacity256;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t274, t275);
            } else {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t276 = __str217;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t277 = __str217;
              char* r278 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t277);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t276, r278);
            }
        } else {
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t279 = __str217;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t220, t279);
        }
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t280 = __str217;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(t280);
  __retval218 = t220;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t281 = __retval218;
  return t281;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v282) {
bb283:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this284;
  this284 = v282;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t285 = this284;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t285);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t285->_M_dataplus);
  }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v286) {
bb287:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this288;
  char* __retval289;
  this288 = v286;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t290 = this288;
  char* r291 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t290);
  __retval289 = r291;
  char* t292 = __retval289;
  return t292;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4findEPKcmRS2_
char* __gnu_cxx__char_traits_char___find(char* v293, unsigned long v294, char* v295) {
bb296:
  char* __s297;
  unsigned long __n298;
  char* __a299;
  char* __retval300;
  __s297 = v293;
  __n298 = v294;
  __a299 = v295;
    unsigned long __i301;
    unsigned long c302 = 0;
    __i301 = c302;
    while (1) {
      unsigned long t304 = __i301;
      unsigned long t305 = __n298;
      _Bool c306 = ((t304 < t305)) ? 1 : 0;
      if (!c306) break;
        unsigned long t307 = __i301;
        char* t308 = __s297;
        char* ptr309 = &(t308)[t307];
        char* t310 = __a299;
        _Bool r311 = __gnu_cxx__char_traits_char___eq(ptr309, t310);
        if (r311) {
          char* t312 = __s297;
          unsigned long t313 = __i301;
          char* ptr314 = &(t312)[t313];
          __retval300 = ptr314;
          char* t315 = __retval300;
          char* ret_val316 = t315;
          return ret_val316;
        }
    for_step303: ;
      unsigned long t317 = __i301;
      unsigned long u318 = t317 + 1;
      __i301 = u318;
    }
  char* c319 = ((void*)0);
  __retval300 = c319;
  char* t320 = __retval300;
  return t320;
}

// function: _ZNSt11char_traitsIcE4findEPKcmRS1_
char* std__char_traits_char___find(char* v321, unsigned long v322, char* v323) {
bb324:
  char* __s325;
  unsigned long __n326;
  char* __a327;
  char* __retval328;
  __s325 = v321;
  __n326 = v322;
  __a327 = v323;
    unsigned long t329 = __n326;
    unsigned long c330 = 0;
    _Bool c331 = ((t329 == c330)) ? 1 : 0;
    if (c331) {
      char* c332 = ((void*)0);
      __retval328 = c332;
      char* t333 = __retval328;
      return t333;
    }
    _Bool r334 = std____is_constant_evaluated();
    if (r334) {
      char* t335 = __s325;
      unsigned long t336 = __n326;
      char* t337 = __a327;
      char* r338 = __gnu_cxx__char_traits_char___find(t335, t336, t337);
      __retval328 = r338;
      char* t339 = __retval328;
      return t339;
    }
  char* t340 = __s325;
  void* cast341 = (void*)t340;
  char* t342 = __a327;
  char t343 = *t342;
  int cast344 = (int)t343;
  unsigned long t345 = __n326;
  void* memchr346 = (void*)__builtin_memchr(cast341, cast344, t345);
  char* cast347 = (char*)memchr346;
  __retval328 = cast347;
  char* t348 = __retval328;
  return t348;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v349, char* v350) {
bb351:
  char* __c1352;
  char* __c2353;
  _Bool __retval354;
  __c1352 = v349;
  __c2353 = v350;
  char* t355 = __c1352;
  char t356 = *t355;
  unsigned char cast357 = (unsigned char)t356;
  int cast358 = (int)cast357;
  char* t359 = __c2353;
  char t360 = *t359;
  unsigned char cast361 = (unsigned char)t360;
  int cast362 = (int)cast361;
  _Bool c363 = ((cast358 < cast362)) ? 1 : 0;
  __retval354 = c363;
  _Bool t364 = __retval354;
  return t364;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v365, char* v366, unsigned long v367) {
bb368:
  char* __s1369;
  char* __s2370;
  unsigned long __n371;
  int __retval372;
  __s1369 = v365;
  __s2370 = v366;
  __n371 = v367;
    unsigned long t373 = __n371;
    unsigned long c374 = 0;
    _Bool c375 = ((t373 == c374)) ? 1 : 0;
    if (c375) {
      int c376 = 0;
      __retval372 = c376;
      int t377 = __retval372;
      return t377;
    }
    _Bool r378 = std____is_constant_evaluated();
    if (r378) {
        unsigned long __i379;
        unsigned long c380 = 0;
        __i379 = c380;
        while (1) {
          unsigned long t382 = __i379;
          unsigned long t383 = __n371;
          _Bool c384 = ((t382 < t383)) ? 1 : 0;
          if (!c384) break;
            unsigned long t385 = __i379;
            char* t386 = __s1369;
            char* ptr387 = &(t386)[t385];
            unsigned long t388 = __i379;
            char* t389 = __s2370;
            char* ptr390 = &(t389)[t388];
            _Bool r391 = std__char_traits_char___lt(ptr387, ptr390);
            if (r391) {
              int c392 = -1;
              __retval372 = c392;
              int t393 = __retval372;
              int ret_val394 = t393;
              return ret_val394;
            } else {
                unsigned long t395 = __i379;
                char* t396 = __s2370;
                char* ptr397 = &(t396)[t395];
                unsigned long t398 = __i379;
                char* t399 = __s1369;
                char* ptr400 = &(t399)[t398];
                _Bool r401 = std__char_traits_char___lt(ptr397, ptr400);
                if (r401) {
                  int c402 = 1;
                  __retval372 = c402;
                  int t403 = __retval372;
                  int ret_val404 = t403;
                  return ret_val404;
                }
            }
        for_step381: ;
          unsigned long t405 = __i379;
          unsigned long u406 = t405 + 1;
          __i379 = u406;
        }
      int c407 = 0;
      __retval372 = c407;
      int t408 = __retval372;
      return t408;
    }
  char* t409 = __s1369;
  void* cast410 = (void*)t409;
  char* t411 = __s2370;
  void* cast412 = (void*)t411;
  unsigned long t413 = __n371;
  int r414 = memcmp(cast410, cast412, t413);
  __retval372 = r414;
  int t415 = __retval372;
  return t415;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4findEPKcmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v416, char* v417, unsigned long v418, unsigned long v419) {
bb420:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this421;
  char* __s422;
  unsigned long __pos423;
  unsigned long __n424;
  unsigned long __retval425;
  unsigned long __size426;
  char __elem0427;
  char* __data428;
  char* __first429;
  char* __last430;
  unsigned long __len431;
  this421 = v416;
  __s422 = v417;
  __pos423 = v418;
  __n424 = v419;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t432 = this421;
  unsigned long r433 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t432);
  __size426 = r433;
    unsigned long t434 = __n424;
    unsigned long c435 = 0;
    _Bool c436 = ((t434 == c435)) ? 1 : 0;
    if (c436) {
      unsigned long t437 = __pos423;
      unsigned long t438 = __size426;
      _Bool c439 = ((t437 <= t438)) ? 1 : 0;
      unsigned long ternary440;
      if (c439) {
        unsigned long t441 = __pos423;
        ternary440 = (unsigned long)t441;
      } else {
        unsigned long t442 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
        ternary440 = (unsigned long)t442;
      }
      __retval425 = ternary440;
      unsigned long t443 = __retval425;
      return t443;
    }
    unsigned long t444 = __pos423;
    unsigned long t445 = __size426;
    _Bool c446 = ((t444 >= t445)) ? 1 : 0;
    if (c446) {
      unsigned long t447 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
      __retval425 = t447;
      unsigned long t448 = __retval425;
      return t448;
    }
  long c449 = 0;
  char* t450 = __s422;
  char* ptr451 = &(t450)[c449];
  char t452 = *ptr451;
  __elem0427 = t452;
  char* r453 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t432);
  __data428 = r453;
  char* t454 = __data428;
  unsigned long t455 = __pos423;
  char* ptr456 = &(t454)[t455];
  __first429 = ptr456;
  char* t457 = __data428;
  unsigned long t458 = __size426;
  char* ptr459 = &(t457)[t458];
  __last430 = ptr459;
  unsigned long t460 = __size426;
  unsigned long t461 = __pos423;
  unsigned long b462 = t460 - t461;
  __len431 = b462;
    while (1) {
      unsigned long t463 = __len431;
      unsigned long t464 = __n424;
      _Bool c465 = ((t463 >= t464)) ? 1 : 0;
      if (!c465) break;
        char* t466 = __first429;
        unsigned long t467 = __len431;
        unsigned long t468 = __n424;
        unsigned long b469 = t467 - t468;
        unsigned long c470 = 1;
        unsigned long b471 = b469 + c470;
        char* r472 = std__char_traits_char___find(t466, b471, &__elem0427);
        __first429 = r472;
          char* t473 = __first429;
          _Bool cast474 = (_Bool)t473;
          _Bool u475 = !cast474;
          if (u475) {
            unsigned long t476 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
            __retval425 = t476;
            unsigned long t477 = __retval425;
            unsigned long ret_val478 = t477;
            return ret_val478;
          }
          char* t479 = __first429;
          char* t480 = __s422;
          unsigned long t481 = __n424;
          int r482 = std__char_traits_char___compare(t479, t480, t481);
          int c483 = 0;
          _Bool c484 = ((r482 == c483)) ? 1 : 0;
          if (c484) {
            char* t485 = __first429;
            char* t486 = __data428;
            long diff487 = t485 - t486;
            unsigned long cast488 = (unsigned long)diff487;
            __retval425 = cast488;
            unsigned long t489 = __retval425;
            unsigned long ret_val490 = t489;
            return ret_val490;
          }
        char* t491 = __last430;
        char* t492 = __first429;
        int c493 = 1;
        char* ptr494 = &(t492)[c493];
        __first429 = ptr494;
        long diff495 = t491 - ptr494;
        unsigned long cast496 = (unsigned long)diff495;
        __len431 = cast496;
    }
  unsigned long t497 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
  __retval425 = t497;
  unsigned long t498 = __retval425;
  return t498;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4findEPKcm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v499, char* v500, unsigned long v501) {
bb502:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this503;
  char* __s504;
  unsigned long __pos505;
  unsigned long __retval506;
  this503 = v499;
  __s504 = v500;
  __pos505 = v501;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t507 = this503;
  char* t508 = __s504;
  unsigned long t509 = __pos505;
  char* t510 = __s504;
  unsigned long r511 = std__char_traits_char___length(t510);
  unsigned long r512 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__unsigned_long__const(t507, t508, t509, r511);
  __retval506 = r512;
  unsigned long t513 = __retval506;
  return t513;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v514, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v515) {
bb516:
  struct std__basic_ostream_char__std__char_traits_char__* __os517;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str518;
  struct std__basic_ostream_char__std__char_traits_char__* __retval519;
  __os517 = v514;
  __str518 = v515;
  struct std__basic_ostream_char__std__char_traits_char__* t520 = __os517;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t521 = __str518;
  char* r522 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t521);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t523 = __str518;
  unsigned long r524 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t523);
  long cast525 = (long)r524;
  struct std__basic_ostream_char__std__char_traits_char__* r526 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t520, r522, cast525);
  __retval519 = r526;
  struct std__basic_ostream_char__std__char_traits_char__* t527 = __retval519;
  return t527;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v528) {
bb529:
  struct std__ios_base* this530;
  long __retval531;
  this530 = v528;
  struct std__ios_base* t532 = this530;
  long t533 = t532->_M_width;
  __retval531 = t533;
  long t534 = __retval531;
  return t534;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v535, char v536) {
bb537:
  struct std__basic_ostream_char__std__char_traits_char__* __out538;
  char __c539;
  struct std__basic_ostream_char__std__char_traits_char__* __retval540;
  __out538 = v535;
  __c539 = v536;
    struct std__basic_ostream_char__std__char_traits_char__* t541 = __out538;
    void** v542 = (void**)t541;
    void* v543 = *((void**)v542);
    unsigned char* cast544 = (unsigned char*)v543;
    long c545 = -24;
    unsigned char* ptr546 = &(cast544)[c545];
    long* cast547 = (long*)ptr546;
    long t548 = *cast547;
    unsigned char* cast549 = (unsigned char*)t541;
    unsigned char* ptr550 = &(cast549)[t548];
    struct std__basic_ostream_char__std__char_traits_char__* cast551 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr550;
    struct std__ios_base* cast552 = (struct std__ios_base*)cast551;
    long r553 = std__ios_base__width___const(cast552);
    long c554 = 0;
    _Bool c555 = ((r553 != c554)) ? 1 : 0;
    if (c555) {
      struct std__basic_ostream_char__std__char_traits_char__* t556 = __out538;
      long c557 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r558 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t556, &__c539, c557);
      __retval540 = r558;
      struct std__basic_ostream_char__std__char_traits_char__* t559 = __retval540;
      return t559;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t560 = __out538;
  char t561 = __c539;
  struct std__basic_ostream_char__std__char_traits_char__* r562 = std__ostream__put(t560, t561);
  struct std__basic_ostream_char__std__char_traits_char__* t563 = __out538;
  __retval540 = t563;
  struct std__basic_ostream_char__std__char_traits_char__* t564 = __retval540;
  return t564;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v565, void* v566) {
bb567:
  struct std__basic_ostream_char__std__char_traits_char__* this568;
  void* __pf569;
  struct std__basic_ostream_char__std__char_traits_char__* __retval570;
  this568 = v565;
  __pf569 = v566;
  struct std__basic_ostream_char__std__char_traits_char__* t571 = this568;
  void* t572 = __pf569;
  struct std__basic_ostream_char__std__char_traits_char__* r573 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t572)(t571);
  __retval570 = r573;
  struct std__basic_ostream_char__std__char_traits_char__* t574 = __retval570;
  return t574;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v575) {
bb576:
  struct std__basic_ostream_char__std__char_traits_char__* __os577;
  struct std__basic_ostream_char__std__char_traits_char__* __retval578;
  __os577 = v575;
  struct std__basic_ostream_char__std__char_traits_char__* t579 = __os577;
  struct std__basic_ostream_char__std__char_traits_char__* r580 = std__ostream__flush(t579);
  __retval578 = r580;
  struct std__basic_ostream_char__std__char_traits_char__* t581 = __retval578;
  return t581;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v582) {
bb583:
  struct std__ctype_char_* __f584;
  struct std__ctype_char_* __retval585;
  __f584 = v582;
    struct std__ctype_char_* t586 = __f584;
    _Bool cast587 = (_Bool)t586;
    _Bool u588 = !cast587;
    if (u588) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t589 = __f584;
  __retval585 = t589;
  struct std__ctype_char_* t590 = __retval585;
  return t590;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v591, char v592) {
bb593:
  struct std__ctype_char_* this594;
  char __c595;
  char __retval596;
  this594 = v591;
  __c595 = v592;
  struct std__ctype_char_* t597 = this594;
    char t598 = t597->_M_widen_ok;
    _Bool cast599 = (_Bool)t598;
    if (cast599) {
      char t600 = __c595;
      unsigned char cast601 = (unsigned char)t600;
      unsigned long cast602 = (unsigned long)cast601;
      char t603 = t597->_M_widen[cast602];
      __retval596 = t603;
      char t604 = __retval596;
      return t604;
    }
  std__ctype_char____M_widen_init___const(t597);
  char t605 = __c595;
  void** v606 = (void**)t597;
  void* v607 = *((void**)v606);
  char vcall610 = (char)__VERIFIER_virtual_call_char_char(t597, 6, t605);
  __retval596 = vcall610;
  char t611 = __retval596;
  return t611;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v612, char v613) {
bb614:
  struct std__basic_ios_char__std__char_traits_char__* this615;
  char __c616;
  char __retval617;
  this615 = v612;
  __c616 = v613;
  struct std__basic_ios_char__std__char_traits_char__* t618 = this615;
  struct std__ctype_char_* t619 = t618->_M_ctype;
  struct std__ctype_char_* r620 = std__ctype_char__const__std____check_facet_std__ctype_char___(t619);
  char t621 = __c616;
  char r622 = std__ctype_char___widen_char__const(r620, t621);
  __retval617 = r622;
  char t623 = __retval617;
  return t623;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v624) {
bb625:
  struct std__basic_ostream_char__std__char_traits_char__* __os626;
  struct std__basic_ostream_char__std__char_traits_char__* __retval627;
  __os626 = v624;
  struct std__basic_ostream_char__std__char_traits_char__* t628 = __os626;
  struct std__basic_ostream_char__std__char_traits_char__* t629 = __os626;
  void** v630 = (void**)t629;
  void* v631 = *((void**)v630);
  unsigned char* cast632 = (unsigned char*)v631;
  long c633 = -24;
  unsigned char* ptr634 = &(cast632)[c633];
  long* cast635 = (long*)ptr634;
  long t636 = *cast635;
  unsigned char* cast637 = (unsigned char*)t629;
  unsigned char* ptr638 = &(cast637)[t636];
  struct std__basic_ostream_char__std__char_traits_char__* cast639 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr638;
  struct std__basic_ios_char__std__char_traits_char__* cast640 = (struct std__basic_ios_char__std__char_traits_char__*)cast639;
  char c641 = 10;
  char r642 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast640, c641);
  struct std__basic_ostream_char__std__char_traits_char__* r643 = std__ostream__put(t628, r642);
  struct std__basic_ostream_char__std__char_traits_char__* r644 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r643);
  __retval627 = r644;
  struct std__basic_ostream_char__std__char_traits_char__* t645 = __retval627;
  return t645;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v646, char* v647) {
bb648:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs649;
  char* __rhs650;
  _Bool __retval651;
  __lhs649 = v646;
  __rhs650 = v647;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t652 = __lhs649;
  unsigned long r653 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t652);
  char* t654 = __rhs650;
  unsigned long r655 = std__char_traits_char___length(t654);
  _Bool c656 = ((r653 == r655)) ? 1 : 0;
  _Bool ternary657;
  if (c656) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t658 = __lhs649;
    char* r659 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t658);
    char* t660 = __rhs650;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t661 = __lhs649;
    unsigned long r662 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t661);
    int r663 = std__char_traits_char___compare(r659, t660, r662);
    _Bool cast664 = (_Bool)r663;
    _Bool u665 = !cast664;
    ternary657 = (_Bool)u665;
  } else {
    _Bool c666 = 0;
    ternary657 = (_Bool)c666;
  }
  __retval651 = ternary657;
  _Bool t667 = __retval651;
  return t667;
}

// function: main
int main() {
bb668:
  int __retval669;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str670;
  struct std__allocator_char_ ref_tmp0671;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2672;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str3673;
  int pos674;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp1675;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup676;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp2677;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup678;
  int c679 = 0;
  __retval669 = c679;
  char* cast680 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0671);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str670, cast680, &ref_tmp0671);
  {
    std__allocator_char____allocator(&ref_tmp0671);
  }
    _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str2672);
      _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str3673);
        unsigned long c681 = 3;
        unsigned long c682 = 2;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r683 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&str670, c681, c682);
        ref_tmp1675 = r683;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r684 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&str2672, &ref_tmp1675);
          tmp_exprcleanup676 = r684;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp1675);
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t685 = tmp_exprcleanup676;
        char* cast686 = (char*)&(_str_1);
        unsigned long c687 = 0;
        unsigned long r688 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&str670, cast686, c687);
        int cast689 = (int)r688;
        pos674 = cast689;
        int t690 = pos674;
        unsigned long cast691 = (unsigned long)t690;
        unsigned long t692 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r693 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&str670, cast691, t692);
        ref_tmp2677 = r693;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r694 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&str3673, &ref_tmp2677);
          tmp_exprcleanup678 = r694;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp2677);
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t695 = tmp_exprcleanup678;
        struct std__basic_ostream_char__std__char_traits_char__* r696 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str2672);
        char c697 = 32;
        struct std__basic_ostream_char__std__char_traits_char__* r698 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r696, c697);
        struct std__basic_ostream_char__std__char_traits_char__* r699 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r698, &str3673);
        struct std__basic_ostream_char__std__char_traits_char__* r700 = std__ostream__operator___std__ostream_____(r699, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        char* cast701 = (char*)&(_str_2);
        _Bool r702 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str2672, cast701);
        _Bool ternary703;
        if (r702) {
          char* cast704 = (char*)&(_str_3);
          _Bool r705 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str3673, cast704);
          _Bool u706 = !r705;
          ternary703 = (_Bool)u706;
        } else {
          _Bool c707 = 0;
          ternary703 = (_Bool)c707;
        }
        if (ternary703) {
        } else {
          char* cast708 = (char*)&(_str_4);
          char* c709 = _str_5;
          unsigned int c710 = 30;
          char* cast711 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast708, c709, c710, cast711);
        }
        int c712 = 0;
        __retval669 = c712;
        int t713 = __retval669;
        int ret_val714 = t713;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str3673);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str2672);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str670);
        }
        return ret_val714;
  int t715 = __retval669;
  return t715;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v716) {
bb717:
  struct std____new_allocator_char_* this718;
  this718 = v716;
  struct std____new_allocator_char_* t719 = this718;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v720) {
bb721:
  char* __r722;
  char* __retval723;
  __r722 = v720;
  char* t724 = __r722;
  __retval723 = t724;
  char* t725 = __retval723;
  return t725;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v726) {
bb727:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this728;
  char* __retval729;
  this728 = v726;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t730 = this728;
  char* cast731 = (char*)&(t730->field2._M_local_buf);
  char* r732 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast731);
  __retval729 = r732;
  char* t733 = __retval729;
  return t733;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v734, char* v735, struct std__allocator_char_* v736) {
bb737:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this738;
  char* __dat739;
  struct std__allocator_char_* __a740;
  this738 = v734;
  __dat739 = v735;
  __a740 = v736;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t741 = this738;
  struct std__allocator_char_* base742 = (struct std__allocator_char_*)((char *)t741 + 0);
  struct std__allocator_char_* t743 = __a740;
  std__allocator_char___allocator(base742, t743);
    char* t744 = __dat739;
    t741->_M_p = t744;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb745:
  _Bool __retval746;
    _Bool c747 = 0;
    __retval746 = c747;
    _Bool t748 = __retval746;
    return t748;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v749, char* v750) {
bb751:
  char* __c1752;
  char* __c2753;
  _Bool __retval754;
  __c1752 = v749;
  __c2753 = v750;
  char* t755 = __c1752;
  char t756 = *t755;
  int cast757 = (int)t756;
  char* t758 = __c2753;
  char t759 = *t758;
  int cast760 = (int)t759;
  _Bool c761 = ((cast757 == cast760)) ? 1 : 0;
  __retval754 = c761;
  _Bool t762 = __retval754;
  return t762;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v763) {
bb764:
  char* __p765;
  unsigned long __retval766;
  unsigned long __i767;
  __p765 = v763;
  unsigned long c768 = 0;
  __i767 = c768;
    char ref_tmp0769;
    while (1) {
      unsigned long t770 = __i767;
      char* t771 = __p765;
      char* ptr772 = &(t771)[t770];
      char c773 = 0;
      ref_tmp0769 = c773;
      _Bool r774 = __gnu_cxx__char_traits_char___eq(ptr772, &ref_tmp0769);
      _Bool u775 = !r774;
      if (!u775) break;
      unsigned long t776 = __i767;
      unsigned long u777 = t776 + 1;
      __i767 = u777;
    }
  unsigned long t778 = __i767;
  __retval766 = t778;
  unsigned long t779 = __retval766;
  return t779;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v780) {
bb781:
  char* __s782;
  unsigned long __retval783;
  __s782 = v780;
    _Bool r784 = std____is_constant_evaluated();
    if (r784) {
      char* t785 = __s782;
      unsigned long r786 = __gnu_cxx__char_traits_char___length(t785);
      __retval783 = r786;
      unsigned long t787 = __retval783;
      return t787;
    }
  char* t788 = __s782;
  unsigned long r789 = strlen(t788);
  __retval783 = r789;
  unsigned long t790 = __retval783;
  return t790;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v791, char* v792, struct std__random_access_iterator_tag v793) {
bb794:
  char* __first795;
  char* __last796;
  struct std__random_access_iterator_tag unnamed797;
  long __retval798;
  __first795 = v791;
  __last796 = v792;
  unnamed797 = v793;
  char* t799 = __last796;
  char* t800 = __first795;
  long diff801 = t799 - t800;
  __retval798 = diff801;
  long t802 = __retval798;
  return t802;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v803) {
bb804:
  char** unnamed805;
  struct std__random_access_iterator_tag __retval806;
  unnamed805 = v803;
  struct std__random_access_iterator_tag t807 = __retval806;
  return t807;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v808, char* v809) {
bb810:
  char* __first811;
  char* __last812;
  long __retval813;
  struct std__random_access_iterator_tag agg_tmp0814;
  __first811 = v808;
  __last812 = v809;
  char* t815 = __first811;
  char* t816 = __last812;
  struct std__random_access_iterator_tag r817 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first811);
  agg_tmp0814 = r817;
  struct std__random_access_iterator_tag t818 = agg_tmp0814;
  long r819 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t815, t816, t818);
  __retval813 = r819;
  long t820 = __retval813;
  return t820;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v821, char* v822) {
bb823:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this824;
  char* __p825;
  this824 = v821;
  __p825 = v822;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t826 = this824;
  char* t827 = __p825;
  t826->_M_dataplus._M_p = t827;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v828) {
bb829:
  struct std__allocator_char_* __a830;
  unsigned long __retval831;
  __a830 = v828;
  unsigned long c832 = -1;
  unsigned long c833 = 1;
  unsigned long b834 = c832 / c833;
  __retval831 = b834;
  unsigned long t835 = __retval831;
  return t835;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v836) {
bb837:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this838;
  struct std__allocator_char_* __retval839;
  this838 = v836;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t840 = this838;
  struct std__allocator_char_* base841 = (struct std__allocator_char_*)((char *)&(t840->_M_dataplus) + 0);
  __retval839 = base841;
  struct std__allocator_char_* t842 = __retval839;
  return t842;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v843, unsigned long* v844) {
bb845:
  unsigned long* __a846;
  unsigned long* __b847;
  unsigned long* __retval848;
  __a846 = v843;
  __b847 = v844;
    unsigned long* t849 = __b847;
    unsigned long t850 = *t849;
    unsigned long* t851 = __a846;
    unsigned long t852 = *t851;
    _Bool c853 = ((t850 < t852)) ? 1 : 0;
    if (c853) {
      unsigned long* t854 = __b847;
      __retval848 = t854;
      unsigned long* t855 = __retval848;
      return t855;
    }
  unsigned long* t856 = __a846;
  __retval848 = t856;
  unsigned long* t857 = __retval848;
  return t857;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v858) {
bb859:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this860;
  unsigned long __retval861;
  unsigned long __diffmax862;
  unsigned long __allocmax863;
  this860 = v858;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t864 = this860;
  unsigned long c865 = 9223372036854775807;
  __diffmax862 = c865;
  struct std__allocator_char_* r866 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t864);
  unsigned long r867 = std__allocator_traits_std__allocator_char_____max_size(r866);
  __allocmax863 = r867;
  unsigned long* r868 = unsigned_long_const__std__min_unsigned_long_(&__diffmax862, &__allocmax863);
  unsigned long t869 = *r868;
  unsigned long c870 = 1;
  unsigned long b871 = t869 - c870;
  __retval861 = b871;
  unsigned long t872 = __retval861;
  return t872;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v873) {
bb874:
  struct std____new_allocator_char_* this875;
  unsigned long __retval876;
  this875 = v873;
  struct std____new_allocator_char_* t877 = this875;
  unsigned long c878 = 9223372036854775807;
  unsigned long c879 = 1;
  unsigned long b880 = c878 / c879;
  __retval876 = b880;
  unsigned long t881 = __retval876;
  return t881;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v882, unsigned long v883, void* v884) {
bb885:
  struct std____new_allocator_char_* this886;
  unsigned long __n887;
  void* unnamed888;
  char* __retval889;
  this886 = v882;
  __n887 = v883;
  unnamed888 = v884;
  struct std____new_allocator_char_* t890 = this886;
    unsigned long t891 = __n887;
    unsigned long r892 = std____new_allocator_char____M_max_size___const(t890);
    _Bool c893 = ((t891 > r892)) ? 1 : 0;
    if (c893) {
        unsigned long t894 = __n887;
        unsigned long c895 = -1;
        unsigned long c896 = 1;
        unsigned long b897 = c895 / c896;
        _Bool c898 = ((t894 > b897)) ? 1 : 0;
        if (c898) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c899 = 1;
    unsigned long c900 = 16;
    _Bool c901 = ((c899 > c900)) ? 1 : 0;
    if (c901) {
      unsigned long __al902;
      unsigned long c903 = 1;
      __al902 = c903;
      unsigned long t904 = __n887;
      unsigned long c905 = 1;
      unsigned long b906 = t904 * c905;
      unsigned long t907 = __al902;
      void* r908 = operator_new_2(b906, t907);
      char* cast909 = (char*)r908;
      __retval889 = cast909;
      char* t910 = __retval889;
      return t910;
    }
  unsigned long t911 = __n887;
  unsigned long c912 = 1;
  unsigned long b913 = t911 * c912;
  void* r914 = operator_new(b913);
  char* cast915 = (char*)r914;
  __retval889 = cast915;
  char* t916 = __retval889;
  return t916;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v917, unsigned long v918) {
bb919:
  struct std__allocator_char_* this920;
  unsigned long __n921;
  char* __retval922;
  this920 = v917;
  __n921 = v918;
  struct std__allocator_char_* t923 = this920;
    _Bool r924 = std____is_constant_evaluated();
    if (r924) {
        unsigned long t925 = __n921;
        unsigned long c926 = 1;
        unsigned long ovr927;
        _Bool ovf928 = __builtin_mul_overflow(t925, c926, &ovr927);
        __n921 = ovr927;
        if (ovf928) {
          std____throw_bad_array_new_length();
        }
      unsigned long t929 = __n921;
      void* r930 = operator_new(t929);
      char* cast931 = (char*)r930;
      __retval922 = cast931;
      char* t932 = __retval922;
      return t932;
    }
  struct std____new_allocator_char_* base933 = (struct std____new_allocator_char_*)((char *)t923 + 0);
  unsigned long t934 = __n921;
  void* c935 = ((void*)0);
  char* r936 = std____new_allocator_char___allocate(base933, t934, c935);
  __retval922 = r936;
  char* t937 = __retval922;
  return t937;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v938, unsigned long v939) {
bb940:
  struct std__allocator_char_* __a941;
  unsigned long __n942;
  char* __retval943;
  __a941 = v938;
  __n942 = v939;
  struct std__allocator_char_* t944 = __a941;
  unsigned long t945 = __n942;
  char* r946 = std__allocator_char___allocate(t944, t945);
  __retval943 = r946;
  char* t947 = __retval943;
  return t947;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v948, unsigned long v949) {
bb950:
  struct std__allocator_char_* __a951;
  unsigned long __n952;
  char* __retval953;
  char* __p954;
  __a951 = v948;
  __n952 = v949;
  struct std__allocator_char_* t955 = __a951;
  unsigned long t956 = __n952;
  char* r957 = std__allocator_traits_std__allocator_char_____allocate(t955, t956);
  __p954 = r957;
  char* t958 = __p954;
  __retval953 = t958;
  char* t959 = __retval953;
  return t959;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v960) {
bb961:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this962;
  struct std__allocator_char_* __retval963;
  this962 = v960;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t964 = this962;
  struct std__allocator_char_* base965 = (struct std__allocator_char_*)((char *)&(t964->_M_dataplus) + 0);
  __retval963 = base965;
  struct std__allocator_char_* t966 = __retval963;
  return t966;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v967, unsigned long* v968, unsigned long v969) {
bb970:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this971;
  unsigned long* __capacity972;
  unsigned long __old_capacity973;
  char* __retval974;
  this971 = v967;
  __capacity972 = v968;
  __old_capacity973 = v969;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t975 = this971;
    unsigned long* t976 = __capacity972;
    unsigned long t977 = *t976;
    unsigned long r978 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t975);
    _Bool c979 = ((t977 > r978)) ? 1 : 0;
    if (c979) {
      char* cast980 = (char*)&(_str_7);
      std____throw_length_error(cast980);
    }
    unsigned long* t981 = __capacity972;
    unsigned long t982 = *t981;
    unsigned long t983 = __old_capacity973;
    _Bool c984 = ((t982 > t983)) ? 1 : 0;
    _Bool ternary985;
    if (c984) {
      unsigned long* t986 = __capacity972;
      unsigned long t987 = *t986;
      unsigned long c988 = 2;
      unsigned long t989 = __old_capacity973;
      unsigned long b990 = c988 * t989;
      _Bool c991 = ((t987 < b990)) ? 1 : 0;
      ternary985 = (_Bool)c991;
    } else {
      _Bool c992 = 0;
      ternary985 = (_Bool)c992;
    }
    if (ternary985) {
      unsigned long c993 = 2;
      unsigned long t994 = __old_capacity973;
      unsigned long b995 = c993 * t994;
      unsigned long* t996 = __capacity972;
      *t996 = b995;
        unsigned long* t997 = __capacity972;
        unsigned long t998 = *t997;
        unsigned long r999 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t975);
        _Bool c1000 = ((t998 > r999)) ? 1 : 0;
        if (c1000) {
          unsigned long r1001 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t975);
          unsigned long* t1002 = __capacity972;
          *t1002 = r1001;
        }
    }
  struct std__allocator_char_* r1003 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t975);
  unsigned long* t1004 = __capacity972;
  unsigned long t1005 = *t1004;
  unsigned long c1006 = 1;
  unsigned long b1007 = t1005 + c1006;
  char* r1008 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1003, b1007);
  __retval974 = r1008;
  char* t1009 = __retval974;
  return t1009;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1010, unsigned long v1011) {
bb1012:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1013;
  unsigned long __capacity1014;
  this1013 = v1010;
  __capacity1014 = v1011;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1015 = this1013;
  unsigned long t1016 = __capacity1014;
  t1015->field2._M_allocated_capacity = t1016;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1017:
  _Bool __retval1018;
    _Bool c1019 = 0;
    __retval1018 = c1019;
    _Bool t1020 = __retval1018;
    return t1020;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1021) {
bb1022:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1023;
  this1023 = v1021;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1024 = this1023;
    _Bool r1025 = std__is_constant_evaluated();
    if (r1025) {
        unsigned long __i1026;
        unsigned long c1027 = 0;
        __i1026 = c1027;
        while (1) {
          unsigned long t1029 = __i1026;
          unsigned long c1030 = 15;
          _Bool c1031 = ((t1029 <= c1030)) ? 1 : 0;
          if (!c1031) break;
          char c1032 = 0;
          unsigned long t1033 = __i1026;
          t1024->field2._M_local_buf[t1033] = c1032;
        for_step1028: ;
          unsigned long t1034 = __i1026;
          unsigned long u1035 = t1034 + 1;
          __i1026 = u1035;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1036, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1037) {
bb1038:
  struct _Guard* this1039;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1040;
  this1039 = v1036;
  __s1040 = v1037;
  struct _Guard* t1041 = this1039;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1042 = __s1040;
  t1041->_M_guarded = t1042;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1043, char* v1044) {
bb1045:
  char* __location1046;
  char* __args1047;
  char* __retval1048;
  void* __loc1049;
  __location1046 = v1043;
  __args1047 = v1044;
  char* t1050 = __location1046;
  void* cast1051 = (void*)t1050;
  __loc1049 = cast1051;
    void* t1052 = __loc1049;
    char* cast1053 = (char*)t1052;
    char* t1054 = __args1047;
    char t1055 = *t1054;
    *cast1053 = t1055;
    __retval1048 = cast1053;
    char* t1056 = __retval1048;
    return t1056;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1057, char* v1058) {
bb1059:
  char* __c11060;
  char* __c21061;
  __c11060 = v1057;
  __c21061 = v1058;
    _Bool r1062 = std____is_constant_evaluated();
    if (r1062) {
      char* t1063 = __c11060;
      char* t1064 = __c21061;
      char* r1065 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1063, t1064);
    } else {
      char* t1066 = __c21061;
      char t1067 = *t1066;
      char* t1068 = __c11060;
      *t1068 = t1067;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1069, char* v1070, unsigned long v1071) {
bb1072:
  char* __s11073;
  char* __s21074;
  unsigned long __n1075;
  char* __retval1076;
  __s11073 = v1069;
  __s21074 = v1070;
  __n1075 = v1071;
    unsigned long t1077 = __n1075;
    unsigned long c1078 = 0;
    _Bool c1079 = ((t1077 == c1078)) ? 1 : 0;
    if (c1079) {
      char* t1080 = __s11073;
      __retval1076 = t1080;
      char* t1081 = __retval1076;
      return t1081;
    }
    _Bool r1082 = std____is_constant_evaluated();
    if (r1082) {
        unsigned long __i1083;
        unsigned long c1084 = 0;
        __i1083 = c1084;
        while (1) {
          unsigned long t1086 = __i1083;
          unsigned long t1087 = __n1075;
          _Bool c1088 = ((t1086 < t1087)) ? 1 : 0;
          if (!c1088) break;
          char* t1089 = __s11073;
          unsigned long t1090 = __i1083;
          char* ptr1091 = &(t1089)[t1090];
          unsigned long t1092 = __i1083;
          char* t1093 = __s21074;
          char* ptr1094 = &(t1093)[t1092];
          char* r1095 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1091, ptr1094);
        for_step1085: ;
          unsigned long t1096 = __i1083;
          unsigned long u1097 = t1096 + 1;
          __i1083 = u1097;
        }
      char* t1098 = __s11073;
      __retval1076 = t1098;
      char* t1099 = __retval1076;
      return t1099;
    }
  char* t1100 = __s11073;
  void* cast1101 = (void*)t1100;
  char* t1102 = __s21074;
  void* cast1103 = (void*)t1102;
  unsigned long t1104 = __n1075;
  unsigned long c1105 = 1;
  unsigned long b1106 = t1104 * c1105;
  void* r1107 = memcpy(cast1101, cast1103, b1106);
  char* t1108 = __s11073;
  __retval1076 = t1108;
  char* t1109 = __retval1076;
  return t1109;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1110, char* v1111, unsigned long v1112) {
bb1113:
  char* __s11114;
  char* __s21115;
  unsigned long __n1116;
  char* __retval1117;
  __s11114 = v1110;
  __s21115 = v1111;
  __n1116 = v1112;
    unsigned long t1118 = __n1116;
    unsigned long c1119 = 0;
    _Bool c1120 = ((t1118 == c1119)) ? 1 : 0;
    if (c1120) {
      char* t1121 = __s11114;
      __retval1117 = t1121;
      char* t1122 = __retval1117;
      return t1122;
    }
    _Bool r1123 = std____is_constant_evaluated();
    if (r1123) {
      char* t1124 = __s11114;
      char* t1125 = __s21115;
      unsigned long t1126 = __n1116;
      char* r1127 = __gnu_cxx__char_traits_char___copy(t1124, t1125, t1126);
      __retval1117 = r1127;
      char* t1128 = __retval1117;
      return t1128;
    }
  char* t1129 = __s11114;
  void* cast1130 = (void*)t1129;
  char* t1131 = __s21115;
  void* cast1132 = (void*)t1131;
  unsigned long t1133 = __n1116;
  void* r1134 = memcpy(cast1130, cast1132, t1133);
  char* cast1135 = (char*)r1134;
  __retval1117 = cast1135;
  char* t1136 = __retval1117;
  return t1136;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1137, char* v1138, unsigned long v1139) {
bb1140:
  char* __d1141;
  char* __s1142;
  unsigned long __n1143;
  __d1141 = v1137;
  __s1142 = v1138;
  __n1143 = v1139;
    unsigned long t1144 = __n1143;
    unsigned long c1145 = 1;
    _Bool c1146 = ((t1144 == c1145)) ? 1 : 0;
    if (c1146) {
      char* t1147 = __d1141;
      char* t1148 = __s1142;
      std__char_traits_char___assign(t1147, t1148);
    } else {
      char* t1149 = __d1141;
      char* t1150 = __s1142;
      unsigned long t1151 = __n1143;
      char* r1152 = std__char_traits_char___copy(t1149, t1150, t1151);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1153) {
bb1154:
  char* __it1155;
  char* __retval1156;
  __it1155 = v1153;
  char* t1157 = __it1155;
  __retval1156 = t1157;
  char* t1158 = __retval1156;
  return t1158;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1159, char* v1160, char* v1161) {
bb1162:
  char* __p1163;
  char* __k11164;
  char* __k21165;
  __p1163 = v1159;
  __k11164 = v1160;
  __k21165 = v1161;
    char* t1166 = __p1163;
    char* t1167 = __k11164;
    char* r1168 = char_const__std____niter_base_char_const__(t1167);
    char* t1169 = __k21165;
    char* t1170 = __k11164;
    long diff1171 = t1169 - t1170;
    unsigned long cast1172 = (unsigned long)diff1171;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1166, r1168, cast1172);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1173) {
bb1174:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1175;
  char* __retval1176;
  this1175 = v1173;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1177 = this1175;
  char* t1178 = t1177->_M_dataplus._M_p;
  __retval1176 = t1178;
  char* t1179 = __retval1176;
  return t1179;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1180, unsigned long v1181) {
bb1182:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1183;
  unsigned long __length1184;
  this1183 = v1180;
  __length1184 = v1181;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1185 = this1183;
  unsigned long t1186 = __length1184;
  t1185->_M_string_length = t1186;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1187, unsigned long v1188) {
bb1189:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1190;
  unsigned long __n1191;
  char ref_tmp01192;
  this1190 = v1187;
  __n1191 = v1188;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1193 = this1190;
  unsigned long t1194 = __n1191;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1193, t1194);
  unsigned long t1195 = __n1191;
  char* r1196 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1193);
  char* ptr1197 = &(r1196)[t1195];
  char c1198 = 0;
  ref_tmp01192 = c1198;
  std__char_traits_char___assign(ptr1197, &ref_tmp01192);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1199) {
bb1200:
  struct _Guard* this1201;
  this1201 = v1199;
  struct _Guard* t1202 = this1201;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1203 = t1202->_M_guarded;
    _Bool cast1204 = (_Bool)t1203;
    if (cast1204) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1205 = t1202->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1205);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1206, char* v1207, char* v1208, struct std__forward_iterator_tag v1209) {
bb1210:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1211;
  char* __beg1212;
  char* __end1213;
  struct std__forward_iterator_tag unnamed1214;
  unsigned long __dnew1215;
  struct _Guard __guard1216;
  this1211 = v1206;
  __beg1212 = v1207;
  __end1213 = v1208;
  unnamed1214 = v1209;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1217 = this1211;
  char* t1218 = __beg1212;
  char* t1219 = __end1213;
  long r1220 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1218, t1219);
  unsigned long cast1221 = (unsigned long)r1220;
  __dnew1215 = cast1221;
    unsigned long t1222 = __dnew1215;
    unsigned long c1223 = 15;
    _Bool c1224 = ((t1222 > c1223)) ? 1 : 0;
    if (c1224) {
      unsigned long c1225 = 0;
      char* r1226 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1217, &__dnew1215, c1225);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1217, r1226);
      unsigned long t1227 = __dnew1215;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1217, t1227);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1217);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1216, t1217);
    char* r1228 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1217);
    char* t1229 = __beg1212;
    char* t1230 = __end1213;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1228, t1229, t1230);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1231 = ((void*)0);
    __guard1216._M_guarded = c1231;
    unsigned long t1232 = __dnew1215;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1217, t1232);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1216);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1233) {
bb1234:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1235;
  this1235 = v1233;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1236 = this1235;
  {
    struct std__allocator_char_* base1237 = (struct std__allocator_char_*)((char *)t1236 + 0);
    std__allocator_char____allocator(base1237);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1238, struct std____new_allocator_char_* v1239) {
bb1240:
  struct std____new_allocator_char_* this1241;
  struct std____new_allocator_char_* unnamed1242;
  this1241 = v1238;
  unnamed1242 = v1239;
  struct std____new_allocator_char_* t1243 = this1241;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1244, struct std__allocator_char_* v1245) {
bb1246:
  struct std__allocator_char_* this1247;
  struct std__allocator_char_* __a1248;
  this1247 = v1244;
  __a1248 = v1245;
  struct std__allocator_char_* t1249 = this1247;
  struct std____new_allocator_char_* base1250 = (struct std____new_allocator_char_*)((char *)t1249 + 0);
  struct std__allocator_char_* t1251 = __a1248;
  struct std____new_allocator_char_* base1252 = (struct std____new_allocator_char_*)((char *)t1251 + 0);
  std____new_allocator_char_____new_allocator(base1250, base1252);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1253) {
bb1254:
  char* __r1255;
  char* __retval1256;
  __r1255 = v1253;
  char* t1257 = __r1255;
  __retval1256 = t1257;
  char* t1258 = __retval1256;
  return t1258;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1259) {
bb1260:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1261;
  char* __retval1262;
  this1261 = v1259;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1263 = this1261;
  char* cast1264 = (char*)&(t1263->field2._M_local_buf);
  char* r1265 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1264);
  __retval1262 = r1265;
  char* t1266 = __retval1262;
  return t1266;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1267) {
bb1268:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1269;
  _Bool __retval1270;
  this1269 = v1267;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1271 = this1269;
    char* r1272 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1271);
    char* r1273 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1271);
    _Bool c1274 = ((r1272 == r1273)) ? 1 : 0;
    if (c1274) {
        unsigned long t1275 = t1271->_M_string_length;
        unsigned long c1276 = 15;
        _Bool c1277 = ((t1275 > c1276)) ? 1 : 0;
        if (c1277) {
          __builtin_unreachable();
        }
      _Bool c1278 = 1;
      __retval1270 = c1278;
      _Bool t1279 = __retval1270;
      return t1279;
    }
  _Bool c1280 = 0;
  __retval1270 = c1280;
  _Bool t1281 = __retval1270;
  return t1281;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1282, char* v1283, unsigned long v1284) {
bb1285:
  struct std____new_allocator_char_* this1286;
  char* __p1287;
  unsigned long __n1288;
  this1286 = v1282;
  __p1287 = v1283;
  __n1288 = v1284;
  struct std____new_allocator_char_* t1289 = this1286;
    unsigned long c1290 = 1;
    unsigned long c1291 = 16;
    _Bool c1292 = ((c1290 > c1291)) ? 1 : 0;
    if (c1292) {
      char* t1293 = __p1287;
      void* cast1294 = (void*)t1293;
      unsigned long t1295 = __n1288;
      unsigned long c1296 = 1;
      unsigned long b1297 = t1295 * c1296;
      unsigned long c1298 = 1;
      operator_delete_3(cast1294, b1297, c1298);
      return;
    }
  char* t1299 = __p1287;
  void* cast1300 = (void*)t1299;
  unsigned long t1301 = __n1288;
  unsigned long c1302 = 1;
  unsigned long b1303 = t1301 * c1302;
  operator_delete_2(cast1300, b1303);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1304, char* v1305, unsigned long v1306) {
bb1307:
  struct std__allocator_char_* this1308;
  char* __p1309;
  unsigned long __n1310;
  this1308 = v1304;
  __p1309 = v1305;
  __n1310 = v1306;
  struct std__allocator_char_* t1311 = this1308;
    _Bool r1312 = std____is_constant_evaluated();
    if (r1312) {
      char* t1313 = __p1309;
      void* cast1314 = (void*)t1313;
      operator_delete(cast1314);
      return;
    }
  struct std____new_allocator_char_* base1315 = (struct std____new_allocator_char_*)((char *)t1311 + 0);
  char* t1316 = __p1309;
  unsigned long t1317 = __n1310;
  std____new_allocator_char___deallocate(base1315, t1316, t1317);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1318, char* v1319, unsigned long v1320) {
bb1321:
  struct std__allocator_char_* __a1322;
  char* __p1323;
  unsigned long __n1324;
  __a1322 = v1318;
  __p1323 = v1319;
  __n1324 = v1320;
  struct std__allocator_char_* t1325 = __a1322;
  char* t1326 = __p1323;
  unsigned long t1327 = __n1324;
  std__allocator_char___deallocate(t1325, t1326, t1327);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1328, unsigned long v1329) {
bb1330:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1331;
  unsigned long __size1332;
  this1331 = v1328;
  __size1332 = v1329;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1333 = this1331;
  struct std__allocator_char_* r1334 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1333);
  char* r1335 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1333);
  unsigned long t1336 = __size1332;
  unsigned long c1337 = 1;
  unsigned long b1338 = t1336 + c1337;
  std__allocator_traits_std__allocator_char_____deallocate(r1334, r1335, b1338);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1339) {
bb1340:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1341;
  this1341 = v1339;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1342 = this1341;
    _Bool r1343 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1342);
    _Bool u1344 = !r1343;
    if (u1344) {
      unsigned long t1345 = t1342->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1342, t1345);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1346, char* v1347, struct std__allocator_char_* v1348) {
bb1349:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1350;
  char* __dat1351;
  struct std__allocator_char_* __a1352;
  this1350 = v1346;
  __dat1351 = v1347;
  __a1352 = v1348;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1353 = this1350;
  struct std__allocator_char_* base1354 = (struct std__allocator_char_*)((char *)t1353 + 0);
  struct std__allocator_char_* t1355 = __a1352;
  std__allocator_char___allocator(base1354, t1355);
    char* t1356 = __dat1351;
    t1353->_M_p = t1356;
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1357, unsigned long v1358, unsigned long v1359) {
bb1360:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1361;
  unsigned long __pos1362;
  unsigned long __off1363;
  unsigned long __retval1364;
  _Bool __testoff1365;
  this1361 = v1357;
  __pos1362 = v1358;
  __off1363 = v1359;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1366 = this1361;
  unsigned long t1367 = __off1363;
  unsigned long r1368 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1366);
  unsigned long t1369 = __pos1362;
  unsigned long b1370 = r1368 - t1369;
  _Bool c1371 = ((t1367 < b1370)) ? 1 : 0;
  __testoff1365 = c1371;
  _Bool t1372 = __testoff1365;
  unsigned long ternary1373;
  if (t1372) {
    unsigned long t1374 = __off1363;
    ternary1373 = (unsigned long)t1374;
  } else {
    unsigned long r1375 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1366);
    unsigned long t1376 = __pos1362;
    unsigned long b1377 = r1375 - t1376;
    ternary1373 = (unsigned long)b1377;
  }
  __retval1364 = ternary1373;
  unsigned long t1378 = __retval1364;
  return t1378;
}

