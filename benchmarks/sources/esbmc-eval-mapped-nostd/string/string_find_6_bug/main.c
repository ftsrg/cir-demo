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
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[25] = "Ther wo needles this haw";
char _str_1[7] = "needle";
char _str_2[15] = "int(found)!=14";
char _str_3[112] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_find_6_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[26] = "first 'needle' found at: ";
char _str_5[10] = "needles a";
char _str_6[15] = "int(found)!=44";
char _str_7[27] = "second 'needle' found at: ";
char _str_8[3] = "ha";
char _str_9[15] = "int(found)==30";
char _str_10[27] = "'haystack' also found at: ";
char _str_11[50] = "basic_string: construction from null is not valid";
char _str_12[24] = "basic_string::_M_create";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1, unsigned long p2);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
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
char* __gnu_cxx__char_traits_char___find(char* p0, unsigned long p1, char* p2);
char* std__char_traits_char___find(char* p0, unsigned long p1, char* p2);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, unsigned long p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
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

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v32) {
bb33:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this34;
  char* __retval35;
  this34 = v32;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t36 = this34;
  char* r37 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t36);
  __retval35 = r37;
  char* t38 = __retval35;
  return t38;
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

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4findERKS4_m
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v51, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v52, unsigned long v53) {
bb54:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this55;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str56;
  unsigned long __pos57;
  unsigned long __retval58;
  this55 = v51;
  __str56 = v52;
  __pos57 = v53;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t59 = this55;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t60 = __str56;
  char* r61 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t60);
  unsigned long t62 = __pos57;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t63 = __str56;
  unsigned long r64 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t63);
  unsigned long r65 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__unsigned_long__const(t59, r61, t62, r64);
  __retval58 = r65;
  unsigned long t66 = __retval58;
  return t66;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v67, int v68) {
bb69:
  int __a70;
  int __b71;
  int __retval72;
  __a70 = v67;
  __b71 = v68;
  int t73 = __a70;
  int t74 = __b71;
  int b75 = t73 | t74;
  __retval72 = b75;
  int t76 = __retval72;
  return t76;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v77) {
bb78:
  struct std__basic_ios_char__std__char_traits_char__* this79;
  int __retval80;
  this79 = v77;
  struct std__basic_ios_char__std__char_traits_char__* t81 = this79;
  struct std__ios_base* base82 = (struct std__ios_base*)((char *)t81 + 0);
  int t83 = base82->_M_streambuf_state;
  __retval80 = t83;
  int t84 = __retval80;
  return t84;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v85, int v86) {
bb87:
  struct std__basic_ios_char__std__char_traits_char__* this88;
  int __state89;
  this88 = v85;
  __state89 = v86;
  struct std__basic_ios_char__std__char_traits_char__* t90 = this88;
  int r91 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t90);
  int t92 = __state89;
  int r93 = std__operator_(r91, t92);
  std__basic_ios_char__std__char_traits_char_____clear(t90, r93);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v94, char* v95) {
bb96:
  struct std__basic_ostream_char__std__char_traits_char__* __out97;
  char* __s98;
  struct std__basic_ostream_char__std__char_traits_char__* __retval99;
  __out97 = v94;
  __s98 = v95;
    char* t100 = __s98;
    _Bool cast101 = (_Bool)t100;
    _Bool u102 = !cast101;
    if (u102) {
      struct std__basic_ostream_char__std__char_traits_char__* t103 = __out97;
      void** v104 = (void**)t103;
      void* v105 = *((void**)v104);
      unsigned char* cast106 = (unsigned char*)v105;
      long c107 = -24;
      unsigned char* ptr108 = &(cast106)[c107];
      long* cast109 = (long*)ptr108;
      long t110 = *cast109;
      unsigned char* cast111 = (unsigned char*)t103;
      unsigned char* ptr112 = &(cast111)[t110];
      struct std__basic_ostream_char__std__char_traits_char__* cast113 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr112;
      struct std__basic_ios_char__std__char_traits_char__* cast114 = (struct std__basic_ios_char__std__char_traits_char__*)cast113;
      int t115 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast114, t115);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t116 = __out97;
      char* t117 = __s98;
      char* t118 = __s98;
      unsigned long r119 = std__char_traits_char___length(t118);
      long cast120 = (long)r119;
      struct std__basic_ostream_char__std__char_traits_char__* r121 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t116, t117, cast120);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t122 = __out97;
  __retval99 = t122;
  struct std__basic_ostream_char__std__char_traits_char__* t123 = __retval99;
  return t123;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v124, void* v125) {
bb126:
  struct std__basic_ostream_char__std__char_traits_char__* this127;
  void* __pf128;
  struct std__basic_ostream_char__std__char_traits_char__* __retval129;
  this127 = v124;
  __pf128 = v125;
  struct std__basic_ostream_char__std__char_traits_char__* t130 = this127;
  void* t131 = __pf128;
  struct std__basic_ostream_char__std__char_traits_char__* r132 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t131)(t130);
  __retval129 = r132;
  struct std__basic_ostream_char__std__char_traits_char__* t133 = __retval129;
  return t133;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v134) {
bb135:
  struct std__basic_ostream_char__std__char_traits_char__* __os136;
  struct std__basic_ostream_char__std__char_traits_char__* __retval137;
  __os136 = v134;
  struct std__basic_ostream_char__std__char_traits_char__* t138 = __os136;
  struct std__basic_ostream_char__std__char_traits_char__* r139 = std__ostream__flush(t138);
  __retval137 = r139;
  struct std__basic_ostream_char__std__char_traits_char__* t140 = __retval137;
  return t140;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v141) {
bb142:
  struct std__ctype_char_* __f143;
  struct std__ctype_char_* __retval144;
  __f143 = v141;
    struct std__ctype_char_* t145 = __f143;
    _Bool cast146 = (_Bool)t145;
    _Bool u147 = !cast146;
    if (u147) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t148 = __f143;
  __retval144 = t148;
  struct std__ctype_char_* t149 = __retval144;
  return t149;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v150, char v151) {
bb152:
  struct std__ctype_char_* this153;
  char __c154;
  char __retval155;
  this153 = v150;
  __c154 = v151;
  struct std__ctype_char_* t156 = this153;
    char t157 = t156->_M_widen_ok;
    _Bool cast158 = (_Bool)t157;
    if (cast158) {
      char t159 = __c154;
      unsigned char cast160 = (unsigned char)t159;
      unsigned long cast161 = (unsigned long)cast160;
      char t162 = t156->_M_widen[cast161];
      __retval155 = t162;
      char t163 = __retval155;
      return t163;
    }
  std__ctype_char____M_widen_init___const(t156);
  char t164 = __c154;
  void** v165 = (void**)t156;
  void* v166 = *((void**)v165);
  char vcall169 = (char)__VERIFIER_virtual_call_char_char(t156, 6, t164);
  __retval155 = vcall169;
  char t170 = __retval155;
  return t170;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v171, char v172) {
bb173:
  struct std__basic_ios_char__std__char_traits_char__* this174;
  char __c175;
  char __retval176;
  this174 = v171;
  __c175 = v172;
  struct std__basic_ios_char__std__char_traits_char__* t177 = this174;
  struct std__ctype_char_* t178 = t177->_M_ctype;
  struct std__ctype_char_* r179 = std__ctype_char__const__std____check_facet_std__ctype_char___(t178);
  char t180 = __c175;
  char r181 = std__ctype_char___widen_char__const(r179, t180);
  __retval176 = r181;
  char t182 = __retval176;
  return t182;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v183) {
bb184:
  struct std__basic_ostream_char__std__char_traits_char__* __os185;
  struct std__basic_ostream_char__std__char_traits_char__* __retval186;
  __os185 = v183;
  struct std__basic_ostream_char__std__char_traits_char__* t187 = __os185;
  struct std__basic_ostream_char__std__char_traits_char__* t188 = __os185;
  void** v189 = (void**)t188;
  void* v190 = *((void**)v189);
  unsigned char* cast191 = (unsigned char*)v190;
  long c192 = -24;
  unsigned char* ptr193 = &(cast191)[c192];
  long* cast194 = (long*)ptr193;
  long t195 = *cast194;
  unsigned char* cast196 = (unsigned char*)t188;
  unsigned char* ptr197 = &(cast196)[t195];
  struct std__basic_ostream_char__std__char_traits_char__* cast198 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr197;
  struct std__basic_ios_char__std__char_traits_char__* cast199 = (struct std__basic_ios_char__std__char_traits_char__*)cast198;
  char c200 = 10;
  char r201 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast199, c200);
  struct std__basic_ostream_char__std__char_traits_char__* r202 = std__ostream__put(t187, r201);
  struct std__basic_ostream_char__std__char_traits_char__* r203 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r202);
  __retval186 = r203;
  struct std__basic_ostream_char__std__char_traits_char__* t204 = __retval186;
  return t204;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4findEPKcmRS2_
char* __gnu_cxx__char_traits_char___find(char* v205, unsigned long v206, char* v207) {
bb208:
  char* __s209;
  unsigned long __n210;
  char* __a211;
  char* __retval212;
  __s209 = v205;
  __n210 = v206;
  __a211 = v207;
    unsigned long __i213;
    unsigned long c214 = 0;
    __i213 = c214;
    while (1) {
      unsigned long t216 = __i213;
      unsigned long t217 = __n210;
      _Bool c218 = ((t216 < t217)) ? 1 : 0;
      if (!c218) break;
        unsigned long t219 = __i213;
        char* t220 = __s209;
        char* ptr221 = &(t220)[t219];
        char* t222 = __a211;
        _Bool r223 = __gnu_cxx__char_traits_char___eq(ptr221, t222);
        if (r223) {
          char* t224 = __s209;
          unsigned long t225 = __i213;
          char* ptr226 = &(t224)[t225];
          __retval212 = ptr226;
          char* t227 = __retval212;
          char* ret_val228 = t227;
          return ret_val228;
        }
    for_step215: ;
      unsigned long t229 = __i213;
      unsigned long u230 = t229 + 1;
      __i213 = u230;
    }
  char* c231 = ((void*)0);
  __retval212 = c231;
  char* t232 = __retval212;
  return t232;
}

// function: _ZNSt11char_traitsIcE4findEPKcmRS1_
char* std__char_traits_char___find(char* v233, unsigned long v234, char* v235) {
bb236:
  char* __s237;
  unsigned long __n238;
  char* __a239;
  char* __retval240;
  __s237 = v233;
  __n238 = v234;
  __a239 = v235;
    unsigned long t241 = __n238;
    unsigned long c242 = 0;
    _Bool c243 = ((t241 == c242)) ? 1 : 0;
    if (c243) {
      char* c244 = ((void*)0);
      __retval240 = c244;
      char* t245 = __retval240;
      return t245;
    }
    _Bool r246 = std____is_constant_evaluated();
    if (r246) {
      char* t247 = __s237;
      unsigned long t248 = __n238;
      char* t249 = __a239;
      char* r250 = __gnu_cxx__char_traits_char___find(t247, t248, t249);
      __retval240 = r250;
      char* t251 = __retval240;
      return t251;
    }
  char* t252 = __s237;
  void* cast253 = (void*)t252;
  char* t254 = __a239;
  char t255 = *t254;
  int cast256 = (int)t255;
  unsigned long t257 = __n238;
  void* memchr258 = (void*)__builtin_memchr(cast253, cast256, t257);
  char* cast259 = (char*)memchr258;
  __retval240 = cast259;
  char* t260 = __retval240;
  return t260;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v261, char* v262) {
bb263:
  char* __c1264;
  char* __c2265;
  _Bool __retval266;
  __c1264 = v261;
  __c2265 = v262;
  char* t267 = __c1264;
  char t268 = *t267;
  unsigned char cast269 = (unsigned char)t268;
  int cast270 = (int)cast269;
  char* t271 = __c2265;
  char t272 = *t271;
  unsigned char cast273 = (unsigned char)t272;
  int cast274 = (int)cast273;
  _Bool c275 = ((cast270 < cast274)) ? 1 : 0;
  __retval266 = c275;
  _Bool t276 = __retval266;
  return t276;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v277, char* v278, unsigned long v279) {
bb280:
  char* __s1281;
  char* __s2282;
  unsigned long __n283;
  int __retval284;
  __s1281 = v277;
  __s2282 = v278;
  __n283 = v279;
    unsigned long t285 = __n283;
    unsigned long c286 = 0;
    _Bool c287 = ((t285 == c286)) ? 1 : 0;
    if (c287) {
      int c288 = 0;
      __retval284 = c288;
      int t289 = __retval284;
      return t289;
    }
    _Bool r290 = std____is_constant_evaluated();
    if (r290) {
        unsigned long __i291;
        unsigned long c292 = 0;
        __i291 = c292;
        while (1) {
          unsigned long t294 = __i291;
          unsigned long t295 = __n283;
          _Bool c296 = ((t294 < t295)) ? 1 : 0;
          if (!c296) break;
            unsigned long t297 = __i291;
            char* t298 = __s1281;
            char* ptr299 = &(t298)[t297];
            unsigned long t300 = __i291;
            char* t301 = __s2282;
            char* ptr302 = &(t301)[t300];
            _Bool r303 = std__char_traits_char___lt(ptr299, ptr302);
            if (r303) {
              int c304 = -1;
              __retval284 = c304;
              int t305 = __retval284;
              int ret_val306 = t305;
              return ret_val306;
            } else {
                unsigned long t307 = __i291;
                char* t308 = __s2282;
                char* ptr309 = &(t308)[t307];
                unsigned long t310 = __i291;
                char* t311 = __s1281;
                char* ptr312 = &(t311)[t310];
                _Bool r313 = std__char_traits_char___lt(ptr309, ptr312);
                if (r313) {
                  int c314 = 1;
                  __retval284 = c314;
                  int t315 = __retval284;
                  int ret_val316 = t315;
                  return ret_val316;
                }
            }
        for_step293: ;
          unsigned long t317 = __i291;
          unsigned long u318 = t317 + 1;
          __i291 = u318;
        }
      int c319 = 0;
      __retval284 = c319;
      int t320 = __retval284;
      return t320;
    }
  char* t321 = __s1281;
  void* cast322 = (void*)t321;
  char* t323 = __s2282;
  void* cast324 = (void*)t323;
  unsigned long t325 = __n283;
  int r326 = memcmp(cast322, cast324, t325);
  __retval284 = r326;
  int t327 = __retval284;
  return t327;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4findEPKcmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v328, char* v329, unsigned long v330, unsigned long v331) {
bb332:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this333;
  char* __s334;
  unsigned long __pos335;
  unsigned long __n336;
  unsigned long __retval337;
  unsigned long __size338;
  char __elem0339;
  char* __data340;
  char* __first341;
  char* __last342;
  unsigned long __len343;
  this333 = v328;
  __s334 = v329;
  __pos335 = v330;
  __n336 = v331;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t344 = this333;
  unsigned long r345 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t344);
  __size338 = r345;
    unsigned long t346 = __n336;
    unsigned long c347 = 0;
    _Bool c348 = ((t346 == c347)) ? 1 : 0;
    if (c348) {
      unsigned long t349 = __pos335;
      unsigned long t350 = __size338;
      _Bool c351 = ((t349 <= t350)) ? 1 : 0;
      unsigned long ternary352;
      if (c351) {
        unsigned long t353 = __pos335;
        ternary352 = (unsigned long)t353;
      } else {
        unsigned long t354 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
        ternary352 = (unsigned long)t354;
      }
      __retval337 = ternary352;
      unsigned long t355 = __retval337;
      return t355;
    }
    unsigned long t356 = __pos335;
    unsigned long t357 = __size338;
    _Bool c358 = ((t356 >= t357)) ? 1 : 0;
    if (c358) {
      unsigned long t359 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
      __retval337 = t359;
      unsigned long t360 = __retval337;
      return t360;
    }
  long c361 = 0;
  char* t362 = __s334;
  char* ptr363 = &(t362)[c361];
  char t364 = *ptr363;
  __elem0339 = t364;
  char* r365 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t344);
  __data340 = r365;
  char* t366 = __data340;
  unsigned long t367 = __pos335;
  char* ptr368 = &(t366)[t367];
  __first341 = ptr368;
  char* t369 = __data340;
  unsigned long t370 = __size338;
  char* ptr371 = &(t369)[t370];
  __last342 = ptr371;
  unsigned long t372 = __size338;
  unsigned long t373 = __pos335;
  unsigned long b374 = t372 - t373;
  __len343 = b374;
    while (1) {
      unsigned long t375 = __len343;
      unsigned long t376 = __n336;
      _Bool c377 = ((t375 >= t376)) ? 1 : 0;
      if (!c377) break;
        char* t378 = __first341;
        unsigned long t379 = __len343;
        unsigned long t380 = __n336;
        unsigned long b381 = t379 - t380;
        unsigned long c382 = 1;
        unsigned long b383 = b381 + c382;
        char* r384 = std__char_traits_char___find(t378, b383, &__elem0339);
        __first341 = r384;
          char* t385 = __first341;
          _Bool cast386 = (_Bool)t385;
          _Bool u387 = !cast386;
          if (u387) {
            unsigned long t388 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
            __retval337 = t388;
            unsigned long t389 = __retval337;
            unsigned long ret_val390 = t389;
            return ret_val390;
          }
          char* t391 = __first341;
          char* t392 = __s334;
          unsigned long t393 = __n336;
          int r394 = std__char_traits_char___compare(t391, t392, t393);
          int c395 = 0;
          _Bool c396 = ((r394 == c395)) ? 1 : 0;
          if (c396) {
            char* t397 = __first341;
            char* t398 = __data340;
            long diff399 = t397 - t398;
            unsigned long cast400 = (unsigned long)diff399;
            __retval337 = cast400;
            unsigned long t401 = __retval337;
            unsigned long ret_val402 = t401;
            return ret_val402;
          }
        char* t403 = __last342;
        char* t404 = __first341;
        int c405 = 1;
        char* ptr406 = &(t404)[c405];
        __first341 = ptr406;
        long diff407 = t403 - ptr406;
        unsigned long cast408 = (unsigned long)diff407;
        __len343 = cast408;
    }
  unsigned long t409 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
  __retval337 = t409;
  unsigned long t410 = __retval337;
  return t410;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4findEPKcm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v411, char* v412, unsigned long v413) {
bb414:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this415;
  char* __s416;
  unsigned long __pos417;
  unsigned long __retval418;
  this415 = v411;
  __s416 = v412;
  __pos417 = v413;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t419 = this415;
  char* t420 = __s416;
  unsigned long t421 = __pos417;
  char* t422 = __s416;
  unsigned long r423 = std__char_traits_char___length(t422);
  unsigned long r424 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__unsigned_long__const(t419, t420, t421, r423);
  __retval418 = r424;
  unsigned long t425 = __retval418;
  return t425;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v426) {
bb427:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this428;
  this428 = v426;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t429 = this428;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t429);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t429->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb430:
  int __retval431;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str432;
  struct std__allocator_char_ ref_tmp0433;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2434;
  struct std__allocator_char_ ref_tmp1435;
  unsigned long found436;
  int c437 = 0;
  __retval431 = c437;
  char* cast438 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0433);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str432, cast438, &ref_tmp0433);
  {
    std__allocator_char____allocator(&ref_tmp0433);
  }
    char* cast439 = (char*)&(_str_1);
    std__allocator_char___allocator_2(&ref_tmp1435);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str2434, cast439, &ref_tmp1435);
    {
      std__allocator_char____allocator(&ref_tmp1435);
    }
      unsigned long c440 = 0;
      unsigned long r441 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____const___unsigned_long__const(&str432, &str2434, c440);
      found436 = r441;
      unsigned long t442 = found436;
      int cast443 = (int)t442;
      int c444 = 14;
      _Bool c445 = ((cast443 != c444)) ? 1 : 0;
      if (c445) {
      } else {
        char* cast446 = (char*)&(_str_2);
        char* c447 = _str_3;
        unsigned int c448 = 24;
        char* cast449 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast446, c447, c448, cast449);
      }
        unsigned long t450 = found436;
        unsigned long t451 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
        _Bool c452 = ((t450 != t451)) ? 1 : 0;
        if (c452) {
          char* cast453 = (char*)&(_str_4);
          struct std__basic_ostream_char__std__char_traits_char__* r454 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast453);
          unsigned long t455 = found436;
          int cast456 = (int)t455;
          struct std__basic_ostream_char__std__char_traits_char__* r457 = std__ostream__operator__(r454, cast456);
          struct std__basic_ostream_char__std__char_traits_char__* r458 = std__ostream__operator___std__ostream_____(r457, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        }
      char* cast459 = (char*)&(_str_5);
      unsigned long t460 = found436;
      unsigned long c461 = 1;
      unsigned long b462 = t460 + c461;
      unsigned long c463 = 6;
      unsigned long r464 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__unsigned_long__const(&str432, cast459, b462, c463);
      found436 = r464;
      unsigned long t465 = found436;
      int cast466 = (int)t465;
      int c467 = 44;
      _Bool c468 = ((cast466 != c467)) ? 1 : 0;
      if (c468) {
      } else {
        char* cast469 = (char*)&(_str_6);
        char* c470 = _str_3;
        unsigned int c471 = 29;
        char* cast472 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast469, c470, c471, cast472);
      }
        unsigned long t473 = found436;
        unsigned long t474 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
        _Bool c475 = ((t473 != t474)) ? 1 : 0;
        if (c475) {
          char* cast476 = (char*)&(_str_7);
          struct std__basic_ostream_char__std__char_traits_char__* r477 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast476);
          unsigned long t478 = found436;
          int cast479 = (int)t478;
          struct std__basic_ostream_char__std__char_traits_char__* r480 = std__ostream__operator__(r477, cast479);
          struct std__basic_ostream_char__std__char_traits_char__* r481 = std__ostream__operator___std__ostream_____(r480, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        }
      char* cast482 = (char*)&(_str_8);
      unsigned long c483 = 0;
      unsigned long r484 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&str432, cast482, c483);
      found436 = r484;
      unsigned long t485 = found436;
      int cast486 = (int)t485;
      int c487 = 30;
      _Bool c488 = ((cast486 == c487)) ? 1 : 0;
      if (c488) {
      } else {
        char* cast489 = (char*)&(_str_9);
        char* c490 = _str_3;
        unsigned int c491 = 34;
        char* cast492 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast489, c490, c491, cast492);
      }
        unsigned long t493 = found436;
        unsigned long t494 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
        _Bool c495 = ((t493 != t494)) ? 1 : 0;
        if (c495) {
          char* cast496 = (char*)&(_str_10);
          struct std__basic_ostream_char__std__char_traits_char__* r497 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast496);
          unsigned long t498 = found436;
          int cast499 = (int)t498;
          struct std__basic_ostream_char__std__char_traits_char__* r500 = std__ostream__operator__(r497, cast499);
          struct std__basic_ostream_char__std__char_traits_char__* r501 = std__ostream__operator___std__ostream_____(r500, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        }
      int c502 = 0;
      __retval431 = c502;
      int t503 = __retval431;
      int ret_val504 = t503;
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str2434);
      }
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str432);
      }
      return ret_val504;
  int t505 = __retval431;
  return t505;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v506) {
bb507:
  struct std____new_allocator_char_* this508;
  this508 = v506;
  struct std____new_allocator_char_* t509 = this508;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v510) {
bb511:
  char* __r512;
  char* __retval513;
  __r512 = v510;
  char* t514 = __r512;
  __retval513 = t514;
  char* t515 = __retval513;
  return t515;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v516) {
bb517:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this518;
  char* __retval519;
  this518 = v516;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t520 = this518;
  char* cast521 = (char*)&(t520->field2._M_local_buf);
  char* r522 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast521);
  __retval519 = r522;
  char* t523 = __retval519;
  return t523;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v524, char* v525, struct std__allocator_char_* v526) {
bb527:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this528;
  char* __dat529;
  struct std__allocator_char_* __a530;
  this528 = v524;
  __dat529 = v525;
  __a530 = v526;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t531 = this528;
  struct std__allocator_char_* base532 = (struct std__allocator_char_*)((char *)t531 + 0);
  struct std__allocator_char_* t533 = __a530;
  std__allocator_char___allocator(base532, t533);
    char* t534 = __dat529;
    t531->_M_p = t534;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb535:
  _Bool __retval536;
    _Bool c537 = 0;
    __retval536 = c537;
    _Bool t538 = __retval536;
    return t538;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v539, char* v540) {
bb541:
  char* __c1542;
  char* __c2543;
  _Bool __retval544;
  __c1542 = v539;
  __c2543 = v540;
  char* t545 = __c1542;
  char t546 = *t545;
  int cast547 = (int)t546;
  char* t548 = __c2543;
  char t549 = *t548;
  int cast550 = (int)t549;
  _Bool c551 = ((cast547 == cast550)) ? 1 : 0;
  __retval544 = c551;
  _Bool t552 = __retval544;
  return t552;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v553) {
bb554:
  char* __p555;
  unsigned long __retval556;
  unsigned long __i557;
  __p555 = v553;
  unsigned long c558 = 0;
  __i557 = c558;
    char ref_tmp0559;
    while (1) {
      unsigned long t560 = __i557;
      char* t561 = __p555;
      char* ptr562 = &(t561)[t560];
      char c563 = 0;
      ref_tmp0559 = c563;
      _Bool r564 = __gnu_cxx__char_traits_char___eq(ptr562, &ref_tmp0559);
      _Bool u565 = !r564;
      if (!u565) break;
      unsigned long t566 = __i557;
      unsigned long u567 = t566 + 1;
      __i557 = u567;
    }
  unsigned long t568 = __i557;
  __retval556 = t568;
  unsigned long t569 = __retval556;
  return t569;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v570) {
bb571:
  char* __s572;
  unsigned long __retval573;
  __s572 = v570;
    _Bool r574 = std____is_constant_evaluated();
    if (r574) {
      char* t575 = __s572;
      unsigned long r576 = __gnu_cxx__char_traits_char___length(t575);
      __retval573 = r576;
      unsigned long t577 = __retval573;
      return t577;
    }
  char* t578 = __s572;
  unsigned long r579 = strlen(t578);
  __retval573 = r579;
  unsigned long t580 = __retval573;
  return t580;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v581, char* v582, struct std__random_access_iterator_tag v583) {
bb584:
  char* __first585;
  char* __last586;
  struct std__random_access_iterator_tag unnamed587;
  long __retval588;
  __first585 = v581;
  __last586 = v582;
  unnamed587 = v583;
  char* t589 = __last586;
  char* t590 = __first585;
  long diff591 = t589 - t590;
  __retval588 = diff591;
  long t592 = __retval588;
  return t592;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v593) {
bb594:
  char** unnamed595;
  struct std__random_access_iterator_tag __retval596;
  unnamed595 = v593;
  struct std__random_access_iterator_tag t597 = __retval596;
  return t597;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v598, char* v599) {
bb600:
  char* __first601;
  char* __last602;
  long __retval603;
  struct std__random_access_iterator_tag agg_tmp0604;
  __first601 = v598;
  __last602 = v599;
  char* t605 = __first601;
  char* t606 = __last602;
  struct std__random_access_iterator_tag r607 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first601);
  agg_tmp0604 = r607;
  struct std__random_access_iterator_tag t608 = agg_tmp0604;
  long r609 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t605, t606, t608);
  __retval603 = r609;
  long t610 = __retval603;
  return t610;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v611, char* v612) {
bb613:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this614;
  char* __p615;
  this614 = v611;
  __p615 = v612;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t616 = this614;
  char* t617 = __p615;
  t616->_M_dataplus._M_p = t617;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v618) {
bb619:
  struct std__allocator_char_* __a620;
  unsigned long __retval621;
  __a620 = v618;
  unsigned long c622 = -1;
  unsigned long c623 = 1;
  unsigned long b624 = c622 / c623;
  __retval621 = b624;
  unsigned long t625 = __retval621;
  return t625;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v626) {
bb627:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this628;
  struct std__allocator_char_* __retval629;
  this628 = v626;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t630 = this628;
  struct std__allocator_char_* base631 = (struct std__allocator_char_*)((char *)&(t630->_M_dataplus) + 0);
  __retval629 = base631;
  struct std__allocator_char_* t632 = __retval629;
  return t632;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v633, unsigned long* v634) {
bb635:
  unsigned long* __a636;
  unsigned long* __b637;
  unsigned long* __retval638;
  __a636 = v633;
  __b637 = v634;
    unsigned long* t639 = __b637;
    unsigned long t640 = *t639;
    unsigned long* t641 = __a636;
    unsigned long t642 = *t641;
    _Bool c643 = ((t640 < t642)) ? 1 : 0;
    if (c643) {
      unsigned long* t644 = __b637;
      __retval638 = t644;
      unsigned long* t645 = __retval638;
      return t645;
    }
  unsigned long* t646 = __a636;
  __retval638 = t646;
  unsigned long* t647 = __retval638;
  return t647;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v648) {
bb649:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this650;
  unsigned long __retval651;
  unsigned long __diffmax652;
  unsigned long __allocmax653;
  this650 = v648;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t654 = this650;
  unsigned long c655 = 9223372036854775807;
  __diffmax652 = c655;
  struct std__allocator_char_* r656 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t654);
  unsigned long r657 = std__allocator_traits_std__allocator_char_____max_size(r656);
  __allocmax653 = r657;
  unsigned long* r658 = unsigned_long_const__std__min_unsigned_long_(&__diffmax652, &__allocmax653);
  unsigned long t659 = *r658;
  unsigned long c660 = 1;
  unsigned long b661 = t659 - c660;
  __retval651 = b661;
  unsigned long t662 = __retval651;
  return t662;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v663) {
bb664:
  struct std____new_allocator_char_* this665;
  unsigned long __retval666;
  this665 = v663;
  struct std____new_allocator_char_* t667 = this665;
  unsigned long c668 = 9223372036854775807;
  unsigned long c669 = 1;
  unsigned long b670 = c668 / c669;
  __retval666 = b670;
  unsigned long t671 = __retval666;
  return t671;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v672, unsigned long v673, void* v674) {
bb675:
  struct std____new_allocator_char_* this676;
  unsigned long __n677;
  void* unnamed678;
  char* __retval679;
  this676 = v672;
  __n677 = v673;
  unnamed678 = v674;
  struct std____new_allocator_char_* t680 = this676;
    unsigned long t681 = __n677;
    unsigned long r682 = std____new_allocator_char____M_max_size___const(t680);
    _Bool c683 = ((t681 > r682)) ? 1 : 0;
    if (c683) {
        unsigned long t684 = __n677;
        unsigned long c685 = -1;
        unsigned long c686 = 1;
        unsigned long b687 = c685 / c686;
        _Bool c688 = ((t684 > b687)) ? 1 : 0;
        if (c688) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c689 = 1;
    unsigned long c690 = 16;
    _Bool c691 = ((c689 > c690)) ? 1 : 0;
    if (c691) {
      unsigned long __al692;
      unsigned long c693 = 1;
      __al692 = c693;
      unsigned long t694 = __n677;
      unsigned long c695 = 1;
      unsigned long b696 = t694 * c695;
      unsigned long t697 = __al692;
      void* r698 = operator_new_2(b696, t697);
      char* cast699 = (char*)r698;
      __retval679 = cast699;
      char* t700 = __retval679;
      return t700;
    }
  unsigned long t701 = __n677;
  unsigned long c702 = 1;
  unsigned long b703 = t701 * c702;
  void* r704 = operator_new(b703);
  char* cast705 = (char*)r704;
  __retval679 = cast705;
  char* t706 = __retval679;
  return t706;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v707, unsigned long v708) {
bb709:
  struct std__allocator_char_* this710;
  unsigned long __n711;
  char* __retval712;
  this710 = v707;
  __n711 = v708;
  struct std__allocator_char_* t713 = this710;
    _Bool r714 = std____is_constant_evaluated();
    if (r714) {
        unsigned long t715 = __n711;
        unsigned long c716 = 1;
        unsigned long ovr717;
        _Bool ovf718 = __builtin_mul_overflow(t715, c716, &ovr717);
        __n711 = ovr717;
        if (ovf718) {
          std____throw_bad_array_new_length();
        }
      unsigned long t719 = __n711;
      void* r720 = operator_new(t719);
      char* cast721 = (char*)r720;
      __retval712 = cast721;
      char* t722 = __retval712;
      return t722;
    }
  struct std____new_allocator_char_* base723 = (struct std____new_allocator_char_*)((char *)t713 + 0);
  unsigned long t724 = __n711;
  void* c725 = ((void*)0);
  char* r726 = std____new_allocator_char___allocate(base723, t724, c725);
  __retval712 = r726;
  char* t727 = __retval712;
  return t727;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v728, unsigned long v729) {
bb730:
  struct std__allocator_char_* __a731;
  unsigned long __n732;
  char* __retval733;
  __a731 = v728;
  __n732 = v729;
  struct std__allocator_char_* t734 = __a731;
  unsigned long t735 = __n732;
  char* r736 = std__allocator_char___allocate(t734, t735);
  __retval733 = r736;
  char* t737 = __retval733;
  return t737;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v738, unsigned long v739) {
bb740:
  struct std__allocator_char_* __a741;
  unsigned long __n742;
  char* __retval743;
  char* __p744;
  __a741 = v738;
  __n742 = v739;
  struct std__allocator_char_* t745 = __a741;
  unsigned long t746 = __n742;
  char* r747 = std__allocator_traits_std__allocator_char_____allocate(t745, t746);
  __p744 = r747;
  char* t748 = __p744;
  __retval743 = t748;
  char* t749 = __retval743;
  return t749;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v750) {
bb751:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this752;
  struct std__allocator_char_* __retval753;
  this752 = v750;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t754 = this752;
  struct std__allocator_char_* base755 = (struct std__allocator_char_*)((char *)&(t754->_M_dataplus) + 0);
  __retval753 = base755;
  struct std__allocator_char_* t756 = __retval753;
  return t756;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v757, unsigned long* v758, unsigned long v759) {
bb760:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this761;
  unsigned long* __capacity762;
  unsigned long __old_capacity763;
  char* __retval764;
  this761 = v757;
  __capacity762 = v758;
  __old_capacity763 = v759;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t765 = this761;
    unsigned long* t766 = __capacity762;
    unsigned long t767 = *t766;
    unsigned long r768 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t765);
    _Bool c769 = ((t767 > r768)) ? 1 : 0;
    if (c769) {
      char* cast770 = (char*)&(_str_12);
      std____throw_length_error(cast770);
    }
    unsigned long* t771 = __capacity762;
    unsigned long t772 = *t771;
    unsigned long t773 = __old_capacity763;
    _Bool c774 = ((t772 > t773)) ? 1 : 0;
    _Bool ternary775;
    if (c774) {
      unsigned long* t776 = __capacity762;
      unsigned long t777 = *t776;
      unsigned long c778 = 2;
      unsigned long t779 = __old_capacity763;
      unsigned long b780 = c778 * t779;
      _Bool c781 = ((t777 < b780)) ? 1 : 0;
      ternary775 = (_Bool)c781;
    } else {
      _Bool c782 = 0;
      ternary775 = (_Bool)c782;
    }
    if (ternary775) {
      unsigned long c783 = 2;
      unsigned long t784 = __old_capacity763;
      unsigned long b785 = c783 * t784;
      unsigned long* t786 = __capacity762;
      *t786 = b785;
        unsigned long* t787 = __capacity762;
        unsigned long t788 = *t787;
        unsigned long r789 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t765);
        _Bool c790 = ((t788 > r789)) ? 1 : 0;
        if (c790) {
          unsigned long r791 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t765);
          unsigned long* t792 = __capacity762;
          *t792 = r791;
        }
    }
  struct std__allocator_char_* r793 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t765);
  unsigned long* t794 = __capacity762;
  unsigned long t795 = *t794;
  unsigned long c796 = 1;
  unsigned long b797 = t795 + c796;
  char* r798 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r793, b797);
  __retval764 = r798;
  char* t799 = __retval764;
  return t799;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v800, unsigned long v801) {
bb802:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this803;
  unsigned long __capacity804;
  this803 = v800;
  __capacity804 = v801;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t805 = this803;
  unsigned long t806 = __capacity804;
  t805->field2._M_allocated_capacity = t806;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb807:
  _Bool __retval808;
    _Bool c809 = 0;
    __retval808 = c809;
    _Bool t810 = __retval808;
    return t810;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v811) {
bb812:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this813;
  this813 = v811;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t814 = this813;
    _Bool r815 = std__is_constant_evaluated();
    if (r815) {
        unsigned long __i816;
        unsigned long c817 = 0;
        __i816 = c817;
        while (1) {
          unsigned long t819 = __i816;
          unsigned long c820 = 15;
          _Bool c821 = ((t819 <= c820)) ? 1 : 0;
          if (!c821) break;
          char c822 = 0;
          unsigned long t823 = __i816;
          t814->field2._M_local_buf[t823] = c822;
        for_step818: ;
          unsigned long t824 = __i816;
          unsigned long u825 = t824 + 1;
          __i816 = u825;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v826, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v827) {
bb828:
  struct _Guard* this829;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s830;
  this829 = v826;
  __s830 = v827;
  struct _Guard* t831 = this829;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t832 = __s830;
  t831->_M_guarded = t832;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v833, char* v834) {
bb835:
  char* __location836;
  char* __args837;
  char* __retval838;
  void* __loc839;
  __location836 = v833;
  __args837 = v834;
  char* t840 = __location836;
  void* cast841 = (void*)t840;
  __loc839 = cast841;
    void* t842 = __loc839;
    char* cast843 = (char*)t842;
    char* t844 = __args837;
    char t845 = *t844;
    *cast843 = t845;
    __retval838 = cast843;
    char* t846 = __retval838;
    return t846;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v847, char* v848) {
bb849:
  char* __c1850;
  char* __c2851;
  __c1850 = v847;
  __c2851 = v848;
    _Bool r852 = std____is_constant_evaluated();
    if (r852) {
      char* t853 = __c1850;
      char* t854 = __c2851;
      char* r855 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t853, t854);
    } else {
      char* t856 = __c2851;
      char t857 = *t856;
      char* t858 = __c1850;
      *t858 = t857;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v859, char* v860, unsigned long v861) {
bb862:
  char* __s1863;
  char* __s2864;
  unsigned long __n865;
  char* __retval866;
  __s1863 = v859;
  __s2864 = v860;
  __n865 = v861;
    unsigned long t867 = __n865;
    unsigned long c868 = 0;
    _Bool c869 = ((t867 == c868)) ? 1 : 0;
    if (c869) {
      char* t870 = __s1863;
      __retval866 = t870;
      char* t871 = __retval866;
      return t871;
    }
    _Bool r872 = std____is_constant_evaluated();
    if (r872) {
        unsigned long __i873;
        unsigned long c874 = 0;
        __i873 = c874;
        while (1) {
          unsigned long t876 = __i873;
          unsigned long t877 = __n865;
          _Bool c878 = ((t876 < t877)) ? 1 : 0;
          if (!c878) break;
          char* t879 = __s1863;
          unsigned long t880 = __i873;
          char* ptr881 = &(t879)[t880];
          unsigned long t882 = __i873;
          char* t883 = __s2864;
          char* ptr884 = &(t883)[t882];
          char* r885 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr881, ptr884);
        for_step875: ;
          unsigned long t886 = __i873;
          unsigned long u887 = t886 + 1;
          __i873 = u887;
        }
      char* t888 = __s1863;
      __retval866 = t888;
      char* t889 = __retval866;
      return t889;
    }
  char* t890 = __s1863;
  void* cast891 = (void*)t890;
  char* t892 = __s2864;
  void* cast893 = (void*)t892;
  unsigned long t894 = __n865;
  unsigned long c895 = 1;
  unsigned long b896 = t894 * c895;
  void* r897 = memcpy(cast891, cast893, b896);
  char* t898 = __s1863;
  __retval866 = t898;
  char* t899 = __retval866;
  return t899;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v900, char* v901, unsigned long v902) {
bb903:
  char* __s1904;
  char* __s2905;
  unsigned long __n906;
  char* __retval907;
  __s1904 = v900;
  __s2905 = v901;
  __n906 = v902;
    unsigned long t908 = __n906;
    unsigned long c909 = 0;
    _Bool c910 = ((t908 == c909)) ? 1 : 0;
    if (c910) {
      char* t911 = __s1904;
      __retval907 = t911;
      char* t912 = __retval907;
      return t912;
    }
    _Bool r913 = std____is_constant_evaluated();
    if (r913) {
      char* t914 = __s1904;
      char* t915 = __s2905;
      unsigned long t916 = __n906;
      char* r917 = __gnu_cxx__char_traits_char___copy(t914, t915, t916);
      __retval907 = r917;
      char* t918 = __retval907;
      return t918;
    }
  char* t919 = __s1904;
  void* cast920 = (void*)t919;
  char* t921 = __s2905;
  void* cast922 = (void*)t921;
  unsigned long t923 = __n906;
  void* r924 = memcpy(cast920, cast922, t923);
  char* cast925 = (char*)r924;
  __retval907 = cast925;
  char* t926 = __retval907;
  return t926;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v927, char* v928, unsigned long v929) {
bb930:
  char* __d931;
  char* __s932;
  unsigned long __n933;
  __d931 = v927;
  __s932 = v928;
  __n933 = v929;
    unsigned long t934 = __n933;
    unsigned long c935 = 1;
    _Bool c936 = ((t934 == c935)) ? 1 : 0;
    if (c936) {
      char* t937 = __d931;
      char* t938 = __s932;
      std__char_traits_char___assign(t937, t938);
    } else {
      char* t939 = __d931;
      char* t940 = __s932;
      unsigned long t941 = __n933;
      char* r942 = std__char_traits_char___copy(t939, t940, t941);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v943) {
bb944:
  char* __it945;
  char* __retval946;
  __it945 = v943;
  char* t947 = __it945;
  __retval946 = t947;
  char* t948 = __retval946;
  return t948;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v949, char* v950, char* v951) {
bb952:
  char* __p953;
  char* __k1954;
  char* __k2955;
  __p953 = v949;
  __k1954 = v950;
  __k2955 = v951;
    char* t956 = __p953;
    char* t957 = __k1954;
    char* r958 = char_const__std____niter_base_char_const__(t957);
    char* t959 = __k2955;
    char* t960 = __k1954;
    long diff961 = t959 - t960;
    unsigned long cast962 = (unsigned long)diff961;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t956, r958, cast962);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v963) {
bb964:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this965;
  char* __retval966;
  this965 = v963;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t967 = this965;
  char* t968 = t967->_M_dataplus._M_p;
  __retval966 = t968;
  char* t969 = __retval966;
  return t969;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v970, unsigned long v971) {
bb972:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this973;
  unsigned long __length974;
  this973 = v970;
  __length974 = v971;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t975 = this973;
  unsigned long t976 = __length974;
  t975->_M_string_length = t976;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v977, unsigned long v978) {
bb979:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this980;
  unsigned long __n981;
  char ref_tmp0982;
  this980 = v977;
  __n981 = v978;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t983 = this980;
  unsigned long t984 = __n981;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t983, t984);
  unsigned long t985 = __n981;
  char* r986 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t983);
  char* ptr987 = &(r986)[t985];
  char c988 = 0;
  ref_tmp0982 = c988;
  std__char_traits_char___assign(ptr987, &ref_tmp0982);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v989) {
bb990:
  struct _Guard* this991;
  this991 = v989;
  struct _Guard* t992 = this991;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t993 = t992->_M_guarded;
    _Bool cast994 = (_Bool)t993;
    if (cast994) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t995 = t992->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t995);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v996, char* v997, char* v998, struct std__forward_iterator_tag v999) {
bb1000:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1001;
  char* __beg1002;
  char* __end1003;
  struct std__forward_iterator_tag unnamed1004;
  unsigned long __dnew1005;
  struct _Guard __guard1006;
  this1001 = v996;
  __beg1002 = v997;
  __end1003 = v998;
  unnamed1004 = v999;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1007 = this1001;
  char* t1008 = __beg1002;
  char* t1009 = __end1003;
  long r1010 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1008, t1009);
  unsigned long cast1011 = (unsigned long)r1010;
  __dnew1005 = cast1011;
    unsigned long t1012 = __dnew1005;
    unsigned long c1013 = 15;
    _Bool c1014 = ((t1012 > c1013)) ? 1 : 0;
    if (c1014) {
      unsigned long c1015 = 0;
      char* r1016 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1007, &__dnew1005, c1015);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1007, r1016);
      unsigned long t1017 = __dnew1005;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1007, t1017);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1007);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1006, t1007);
    char* r1018 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1007);
    char* t1019 = __beg1002;
    char* t1020 = __end1003;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1018, t1019, t1020);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1021 = ((void*)0);
    __guard1006._M_guarded = c1021;
    unsigned long t1022 = __dnew1005;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1007, t1022);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1006);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1023) {
bb1024:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1025;
  this1025 = v1023;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1026 = this1025;
  {
    struct std__allocator_char_* base1027 = (struct std__allocator_char_*)((char *)t1026 + 0);
    std__allocator_char____allocator(base1027);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1028, struct std____new_allocator_char_* v1029) {
bb1030:
  struct std____new_allocator_char_* this1031;
  struct std____new_allocator_char_* unnamed1032;
  this1031 = v1028;
  unnamed1032 = v1029;
  struct std____new_allocator_char_* t1033 = this1031;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1034, struct std__allocator_char_* v1035) {
bb1036:
  struct std__allocator_char_* this1037;
  struct std__allocator_char_* __a1038;
  this1037 = v1034;
  __a1038 = v1035;
  struct std__allocator_char_* t1039 = this1037;
  struct std____new_allocator_char_* base1040 = (struct std____new_allocator_char_*)((char *)t1039 + 0);
  struct std__allocator_char_* t1041 = __a1038;
  struct std____new_allocator_char_* base1042 = (struct std____new_allocator_char_*)((char *)t1041 + 0);
  std____new_allocator_char_____new_allocator(base1040, base1042);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1043) {
bb1044:
  char* __r1045;
  char* __retval1046;
  __r1045 = v1043;
  char* t1047 = __r1045;
  __retval1046 = t1047;
  char* t1048 = __retval1046;
  return t1048;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1049) {
bb1050:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1051;
  char* __retval1052;
  this1051 = v1049;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1053 = this1051;
  char* cast1054 = (char*)&(t1053->field2._M_local_buf);
  char* r1055 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1054);
  __retval1052 = r1055;
  char* t1056 = __retval1052;
  return t1056;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1057) {
bb1058:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1059;
  _Bool __retval1060;
  this1059 = v1057;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1061 = this1059;
    char* r1062 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1061);
    char* r1063 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1061);
    _Bool c1064 = ((r1062 == r1063)) ? 1 : 0;
    if (c1064) {
        unsigned long t1065 = t1061->_M_string_length;
        unsigned long c1066 = 15;
        _Bool c1067 = ((t1065 > c1066)) ? 1 : 0;
        if (c1067) {
          __builtin_unreachable();
        }
      _Bool c1068 = 1;
      __retval1060 = c1068;
      _Bool t1069 = __retval1060;
      return t1069;
    }
  _Bool c1070 = 0;
  __retval1060 = c1070;
  _Bool t1071 = __retval1060;
  return t1071;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1072, char* v1073, unsigned long v1074) {
bb1075:
  struct std____new_allocator_char_* this1076;
  char* __p1077;
  unsigned long __n1078;
  this1076 = v1072;
  __p1077 = v1073;
  __n1078 = v1074;
  struct std____new_allocator_char_* t1079 = this1076;
    unsigned long c1080 = 1;
    unsigned long c1081 = 16;
    _Bool c1082 = ((c1080 > c1081)) ? 1 : 0;
    if (c1082) {
      char* t1083 = __p1077;
      void* cast1084 = (void*)t1083;
      unsigned long t1085 = __n1078;
      unsigned long c1086 = 1;
      unsigned long b1087 = t1085 * c1086;
      unsigned long c1088 = 1;
      operator_delete_3(cast1084, b1087, c1088);
      return;
    }
  char* t1089 = __p1077;
  void* cast1090 = (void*)t1089;
  unsigned long t1091 = __n1078;
  unsigned long c1092 = 1;
  unsigned long b1093 = t1091 * c1092;
  operator_delete_2(cast1090, b1093);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1094, char* v1095, unsigned long v1096) {
bb1097:
  struct std__allocator_char_* this1098;
  char* __p1099;
  unsigned long __n1100;
  this1098 = v1094;
  __p1099 = v1095;
  __n1100 = v1096;
  struct std__allocator_char_* t1101 = this1098;
    _Bool r1102 = std____is_constant_evaluated();
    if (r1102) {
      char* t1103 = __p1099;
      void* cast1104 = (void*)t1103;
      operator_delete(cast1104);
      return;
    }
  struct std____new_allocator_char_* base1105 = (struct std____new_allocator_char_*)((char *)t1101 + 0);
  char* t1106 = __p1099;
  unsigned long t1107 = __n1100;
  std____new_allocator_char___deallocate(base1105, t1106, t1107);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1108, char* v1109, unsigned long v1110) {
bb1111:
  struct std__allocator_char_* __a1112;
  char* __p1113;
  unsigned long __n1114;
  __a1112 = v1108;
  __p1113 = v1109;
  __n1114 = v1110;
  struct std__allocator_char_* t1115 = __a1112;
  char* t1116 = __p1113;
  unsigned long t1117 = __n1114;
  std__allocator_char___deallocate(t1115, t1116, t1117);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1118, unsigned long v1119) {
bb1120:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1121;
  unsigned long __size1122;
  this1121 = v1118;
  __size1122 = v1119;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1123 = this1121;
  struct std__allocator_char_* r1124 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1123);
  char* r1125 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1123);
  unsigned long t1126 = __size1122;
  unsigned long c1127 = 1;
  unsigned long b1128 = t1126 + c1127;
  std__allocator_traits_std__allocator_char_____deallocate(r1124, r1125, b1128);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1129) {
bb1130:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1131;
  this1131 = v1129;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1132 = this1131;
    _Bool r1133 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1132);
    _Bool u1134 = !r1133;
    if (u1134) {
      unsigned long t1135 = t1132->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1132, t1135);
    }
  return;
}

