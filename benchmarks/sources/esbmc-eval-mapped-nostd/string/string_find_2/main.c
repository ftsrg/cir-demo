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
char _str[17] = "Ttwo need hneed.";
char _str_1[5] = "need";
char _str_2[14] = "int(found)==5";
char _str_3[108] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_find_2/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[26] = "first 'needle' found at: ";
char _str_5[18] = "needles are small";
char _str_6[15] = "int(found)==11";
char _str_7[27] = "second 'needle' found at: ";
char _str_8[50] = "basic_string: construction from null is not valid";
char _str_9[24] = "basic_string::_M_create";
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
        char* cast20 = (char*)&(_str_8);
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

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v411) {
bb412:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this413;
  this413 = v411;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t414 = this413;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t414);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t414->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb415:
  int __retval416;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str417;
  struct std__allocator_char_ ref_tmp0418;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2419;
  struct std__allocator_char_ ref_tmp1420;
  unsigned long found421;
  int c422 = 0;
  __retval416 = c422;
  char* cast423 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0418);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str417, cast423, &ref_tmp0418);
  {
    std__allocator_char____allocator(&ref_tmp0418);
  }
    char* cast424 = (char*)&(_str_1);
    std__allocator_char___allocator_2(&ref_tmp1420);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str2419, cast424, &ref_tmp1420);
    {
      std__allocator_char____allocator(&ref_tmp1420);
    }
      unsigned long c425 = 0;
      unsigned long r426 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____const___unsigned_long__const(&str417, &str2419, c425);
      found421 = r426;
      unsigned long t427 = found421;
      int cast428 = (int)t427;
      int c429 = 5;
      _Bool c430 = ((cast428 == c429)) ? 1 : 0;
      if (c430) {
      } else {
        char* cast431 = (char*)&(_str_2);
        char* c432 = _str_3;
        unsigned int c433 = 22;
        char* cast434 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast431, c432, c433, cast434);
      }
        unsigned long t435 = found421;
        unsigned long t436 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
        _Bool c437 = ((t435 != t436)) ? 1 : 0;
        if (c437) {
          char* cast438 = (char*)&(_str_4);
          struct std__basic_ostream_char__std__char_traits_char__* r439 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast438);
          unsigned long t440 = found421;
          int cast441 = (int)t440;
          struct std__basic_ostream_char__std__char_traits_char__* r442 = std__ostream__operator__(r439, cast441);
          struct std__basic_ostream_char__std__char_traits_char__* r443 = std__ostream__operator___std__ostream_____(r442, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        }
      char* cast444 = (char*)&(_str_5);
      unsigned long t445 = found421;
      unsigned long c446 = 1;
      unsigned long b447 = t445 + c446;
      unsigned long c448 = 4;
      unsigned long r449 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__unsigned_long__const(&str417, cast444, b447, c448);
      found421 = r449;
      unsigned long t450 = found421;
      int cast451 = (int)t450;
      int c452 = 11;
      _Bool c453 = ((cast451 == c452)) ? 1 : 0;
      if (c453) {
      } else {
        char* cast454 = (char*)&(_str_6);
        char* c455 = _str_3;
        unsigned int c456 = 27;
        char* cast457 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast454, c455, c456, cast457);
      }
        unsigned long t458 = found421;
        unsigned long t459 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
        _Bool c460 = ((t458 != t459)) ? 1 : 0;
        if (c460) {
          char* cast461 = (char*)&(_str_7);
          struct std__basic_ostream_char__std__char_traits_char__* r462 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast461);
          unsigned long t463 = found421;
          int cast464 = (int)t463;
          struct std__basic_ostream_char__std__char_traits_char__* r465 = std__ostream__operator__(r462, cast464);
          struct std__basic_ostream_char__std__char_traits_char__* r466 = std__ostream__operator___std__ostream_____(r465, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        }
      int c467 = 0;
      __retval416 = c467;
      int t468 = __retval416;
      int ret_val469 = t468;
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str2419);
      }
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str417);
      }
      return ret_val469;
  int t470 = __retval416;
  return t470;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v471) {
bb472:
  struct std____new_allocator_char_* this473;
  this473 = v471;
  struct std____new_allocator_char_* t474 = this473;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v475) {
bb476:
  char* __r477;
  char* __retval478;
  __r477 = v475;
  char* t479 = __r477;
  __retval478 = t479;
  char* t480 = __retval478;
  return t480;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v481) {
bb482:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this483;
  char* __retval484;
  this483 = v481;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t485 = this483;
  char* cast486 = (char*)&(t485->field2._M_local_buf);
  char* r487 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast486);
  __retval484 = r487;
  char* t488 = __retval484;
  return t488;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v489, char* v490, struct std__allocator_char_* v491) {
bb492:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this493;
  char* __dat494;
  struct std__allocator_char_* __a495;
  this493 = v489;
  __dat494 = v490;
  __a495 = v491;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t496 = this493;
  struct std__allocator_char_* base497 = (struct std__allocator_char_*)((char *)t496 + 0);
  struct std__allocator_char_* t498 = __a495;
  std__allocator_char___allocator(base497, t498);
    char* t499 = __dat494;
    t496->_M_p = t499;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb500:
  _Bool __retval501;
    _Bool c502 = 0;
    __retval501 = c502;
    _Bool t503 = __retval501;
    return t503;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v504, char* v505) {
bb506:
  char* __c1507;
  char* __c2508;
  _Bool __retval509;
  __c1507 = v504;
  __c2508 = v505;
  char* t510 = __c1507;
  char t511 = *t510;
  int cast512 = (int)t511;
  char* t513 = __c2508;
  char t514 = *t513;
  int cast515 = (int)t514;
  _Bool c516 = ((cast512 == cast515)) ? 1 : 0;
  __retval509 = c516;
  _Bool t517 = __retval509;
  return t517;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v518) {
bb519:
  char* __p520;
  unsigned long __retval521;
  unsigned long __i522;
  __p520 = v518;
  unsigned long c523 = 0;
  __i522 = c523;
    char ref_tmp0524;
    while (1) {
      unsigned long t525 = __i522;
      char* t526 = __p520;
      char* ptr527 = &(t526)[t525];
      char c528 = 0;
      ref_tmp0524 = c528;
      _Bool r529 = __gnu_cxx__char_traits_char___eq(ptr527, &ref_tmp0524);
      _Bool u530 = !r529;
      if (!u530) break;
      unsigned long t531 = __i522;
      unsigned long u532 = t531 + 1;
      __i522 = u532;
    }
  unsigned long t533 = __i522;
  __retval521 = t533;
  unsigned long t534 = __retval521;
  return t534;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v535) {
bb536:
  char* __s537;
  unsigned long __retval538;
  __s537 = v535;
    _Bool r539 = std____is_constant_evaluated();
    if (r539) {
      char* t540 = __s537;
      unsigned long r541 = __gnu_cxx__char_traits_char___length(t540);
      __retval538 = r541;
      unsigned long t542 = __retval538;
      return t542;
    }
  char* t543 = __s537;
  unsigned long r544 = strlen(t543);
  __retval538 = r544;
  unsigned long t545 = __retval538;
  return t545;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v546, char* v547, struct std__random_access_iterator_tag v548) {
bb549:
  char* __first550;
  char* __last551;
  struct std__random_access_iterator_tag unnamed552;
  long __retval553;
  __first550 = v546;
  __last551 = v547;
  unnamed552 = v548;
  char* t554 = __last551;
  char* t555 = __first550;
  long diff556 = t554 - t555;
  __retval553 = diff556;
  long t557 = __retval553;
  return t557;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v558) {
bb559:
  char** unnamed560;
  struct std__random_access_iterator_tag __retval561;
  unnamed560 = v558;
  struct std__random_access_iterator_tag t562 = __retval561;
  return t562;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v563, char* v564) {
bb565:
  char* __first566;
  char* __last567;
  long __retval568;
  struct std__random_access_iterator_tag agg_tmp0569;
  __first566 = v563;
  __last567 = v564;
  char* t570 = __first566;
  char* t571 = __last567;
  struct std__random_access_iterator_tag r572 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first566);
  agg_tmp0569 = r572;
  struct std__random_access_iterator_tag t573 = agg_tmp0569;
  long r574 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t570, t571, t573);
  __retval568 = r574;
  long t575 = __retval568;
  return t575;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v576, char* v577) {
bb578:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this579;
  char* __p580;
  this579 = v576;
  __p580 = v577;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t581 = this579;
  char* t582 = __p580;
  t581->_M_dataplus._M_p = t582;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v583) {
bb584:
  struct std__allocator_char_* __a585;
  unsigned long __retval586;
  __a585 = v583;
  unsigned long c587 = -1;
  unsigned long c588 = 1;
  unsigned long b589 = c587 / c588;
  __retval586 = b589;
  unsigned long t590 = __retval586;
  return t590;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v591) {
bb592:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this593;
  struct std__allocator_char_* __retval594;
  this593 = v591;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t595 = this593;
  struct std__allocator_char_* base596 = (struct std__allocator_char_*)((char *)&(t595->_M_dataplus) + 0);
  __retval594 = base596;
  struct std__allocator_char_* t597 = __retval594;
  return t597;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v598, unsigned long* v599) {
bb600:
  unsigned long* __a601;
  unsigned long* __b602;
  unsigned long* __retval603;
  __a601 = v598;
  __b602 = v599;
    unsigned long* t604 = __b602;
    unsigned long t605 = *t604;
    unsigned long* t606 = __a601;
    unsigned long t607 = *t606;
    _Bool c608 = ((t605 < t607)) ? 1 : 0;
    if (c608) {
      unsigned long* t609 = __b602;
      __retval603 = t609;
      unsigned long* t610 = __retval603;
      return t610;
    }
  unsigned long* t611 = __a601;
  __retval603 = t611;
  unsigned long* t612 = __retval603;
  return t612;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v613) {
bb614:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this615;
  unsigned long __retval616;
  unsigned long __diffmax617;
  unsigned long __allocmax618;
  this615 = v613;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t619 = this615;
  unsigned long c620 = 9223372036854775807;
  __diffmax617 = c620;
  struct std__allocator_char_* r621 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t619);
  unsigned long r622 = std__allocator_traits_std__allocator_char_____max_size(r621);
  __allocmax618 = r622;
  unsigned long* r623 = unsigned_long_const__std__min_unsigned_long_(&__diffmax617, &__allocmax618);
  unsigned long t624 = *r623;
  unsigned long c625 = 1;
  unsigned long b626 = t624 - c625;
  __retval616 = b626;
  unsigned long t627 = __retval616;
  return t627;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v628) {
bb629:
  struct std____new_allocator_char_* this630;
  unsigned long __retval631;
  this630 = v628;
  struct std____new_allocator_char_* t632 = this630;
  unsigned long c633 = 9223372036854775807;
  unsigned long c634 = 1;
  unsigned long b635 = c633 / c634;
  __retval631 = b635;
  unsigned long t636 = __retval631;
  return t636;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v637, unsigned long v638, void* v639) {
bb640:
  struct std____new_allocator_char_* this641;
  unsigned long __n642;
  void* unnamed643;
  char* __retval644;
  this641 = v637;
  __n642 = v638;
  unnamed643 = v639;
  struct std____new_allocator_char_* t645 = this641;
    unsigned long t646 = __n642;
    unsigned long r647 = std____new_allocator_char____M_max_size___const(t645);
    _Bool c648 = ((t646 > r647)) ? 1 : 0;
    if (c648) {
        unsigned long t649 = __n642;
        unsigned long c650 = -1;
        unsigned long c651 = 1;
        unsigned long b652 = c650 / c651;
        _Bool c653 = ((t649 > b652)) ? 1 : 0;
        if (c653) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c654 = 1;
    unsigned long c655 = 16;
    _Bool c656 = ((c654 > c655)) ? 1 : 0;
    if (c656) {
      unsigned long __al657;
      unsigned long c658 = 1;
      __al657 = c658;
      unsigned long t659 = __n642;
      unsigned long c660 = 1;
      unsigned long b661 = t659 * c660;
      unsigned long t662 = __al657;
      void* r663 = operator_new_2(b661, t662);
      char* cast664 = (char*)r663;
      __retval644 = cast664;
      char* t665 = __retval644;
      return t665;
    }
  unsigned long t666 = __n642;
  unsigned long c667 = 1;
  unsigned long b668 = t666 * c667;
  void* r669 = operator_new(b668);
  char* cast670 = (char*)r669;
  __retval644 = cast670;
  char* t671 = __retval644;
  return t671;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v672, unsigned long v673) {
bb674:
  struct std__allocator_char_* this675;
  unsigned long __n676;
  char* __retval677;
  this675 = v672;
  __n676 = v673;
  struct std__allocator_char_* t678 = this675;
    _Bool r679 = std____is_constant_evaluated();
    if (r679) {
        unsigned long t680 = __n676;
        unsigned long c681 = 1;
        unsigned long ovr682;
        _Bool ovf683 = __builtin_mul_overflow(t680, c681, &ovr682);
        __n676 = ovr682;
        if (ovf683) {
          std____throw_bad_array_new_length();
        }
      unsigned long t684 = __n676;
      void* r685 = operator_new(t684);
      char* cast686 = (char*)r685;
      __retval677 = cast686;
      char* t687 = __retval677;
      return t687;
    }
  struct std____new_allocator_char_* base688 = (struct std____new_allocator_char_*)((char *)t678 + 0);
  unsigned long t689 = __n676;
  void* c690 = ((void*)0);
  char* r691 = std____new_allocator_char___allocate(base688, t689, c690);
  __retval677 = r691;
  char* t692 = __retval677;
  return t692;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v693, unsigned long v694) {
bb695:
  struct std__allocator_char_* __a696;
  unsigned long __n697;
  char* __retval698;
  __a696 = v693;
  __n697 = v694;
  struct std__allocator_char_* t699 = __a696;
  unsigned long t700 = __n697;
  char* r701 = std__allocator_char___allocate(t699, t700);
  __retval698 = r701;
  char* t702 = __retval698;
  return t702;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v703, unsigned long v704) {
bb705:
  struct std__allocator_char_* __a706;
  unsigned long __n707;
  char* __retval708;
  char* __p709;
  __a706 = v703;
  __n707 = v704;
  struct std__allocator_char_* t710 = __a706;
  unsigned long t711 = __n707;
  char* r712 = std__allocator_traits_std__allocator_char_____allocate(t710, t711);
  __p709 = r712;
  char* t713 = __p709;
  __retval708 = t713;
  char* t714 = __retval708;
  return t714;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v715) {
bb716:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this717;
  struct std__allocator_char_* __retval718;
  this717 = v715;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t719 = this717;
  struct std__allocator_char_* base720 = (struct std__allocator_char_*)((char *)&(t719->_M_dataplus) + 0);
  __retval718 = base720;
  struct std__allocator_char_* t721 = __retval718;
  return t721;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v722, unsigned long* v723, unsigned long v724) {
bb725:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this726;
  unsigned long* __capacity727;
  unsigned long __old_capacity728;
  char* __retval729;
  this726 = v722;
  __capacity727 = v723;
  __old_capacity728 = v724;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t730 = this726;
    unsigned long* t731 = __capacity727;
    unsigned long t732 = *t731;
    unsigned long r733 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t730);
    _Bool c734 = ((t732 > r733)) ? 1 : 0;
    if (c734) {
      char* cast735 = (char*)&(_str_9);
      std____throw_length_error(cast735);
    }
    unsigned long* t736 = __capacity727;
    unsigned long t737 = *t736;
    unsigned long t738 = __old_capacity728;
    _Bool c739 = ((t737 > t738)) ? 1 : 0;
    _Bool ternary740;
    if (c739) {
      unsigned long* t741 = __capacity727;
      unsigned long t742 = *t741;
      unsigned long c743 = 2;
      unsigned long t744 = __old_capacity728;
      unsigned long b745 = c743 * t744;
      _Bool c746 = ((t742 < b745)) ? 1 : 0;
      ternary740 = (_Bool)c746;
    } else {
      _Bool c747 = 0;
      ternary740 = (_Bool)c747;
    }
    if (ternary740) {
      unsigned long c748 = 2;
      unsigned long t749 = __old_capacity728;
      unsigned long b750 = c748 * t749;
      unsigned long* t751 = __capacity727;
      *t751 = b750;
        unsigned long* t752 = __capacity727;
        unsigned long t753 = *t752;
        unsigned long r754 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t730);
        _Bool c755 = ((t753 > r754)) ? 1 : 0;
        if (c755) {
          unsigned long r756 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t730);
          unsigned long* t757 = __capacity727;
          *t757 = r756;
        }
    }
  struct std__allocator_char_* r758 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t730);
  unsigned long* t759 = __capacity727;
  unsigned long t760 = *t759;
  unsigned long c761 = 1;
  unsigned long b762 = t760 + c761;
  char* r763 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r758, b762);
  __retval729 = r763;
  char* t764 = __retval729;
  return t764;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v765, unsigned long v766) {
bb767:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this768;
  unsigned long __capacity769;
  this768 = v765;
  __capacity769 = v766;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t770 = this768;
  unsigned long t771 = __capacity769;
  t770->field2._M_allocated_capacity = t771;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb772:
  _Bool __retval773;
    _Bool c774 = 0;
    __retval773 = c774;
    _Bool t775 = __retval773;
    return t775;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v776) {
bb777:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this778;
  this778 = v776;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t779 = this778;
    _Bool r780 = std__is_constant_evaluated();
    if (r780) {
        unsigned long __i781;
        unsigned long c782 = 0;
        __i781 = c782;
        while (1) {
          unsigned long t784 = __i781;
          unsigned long c785 = 15;
          _Bool c786 = ((t784 <= c785)) ? 1 : 0;
          if (!c786) break;
          char c787 = 0;
          unsigned long t788 = __i781;
          t779->field2._M_local_buf[t788] = c787;
        for_step783: ;
          unsigned long t789 = __i781;
          unsigned long u790 = t789 + 1;
          __i781 = u790;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v791, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v792) {
bb793:
  struct _Guard* this794;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s795;
  this794 = v791;
  __s795 = v792;
  struct _Guard* t796 = this794;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t797 = __s795;
  t796->_M_guarded = t797;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v798, char* v799) {
bb800:
  char* __location801;
  char* __args802;
  char* __retval803;
  void* __loc804;
  __location801 = v798;
  __args802 = v799;
  char* t805 = __location801;
  void* cast806 = (void*)t805;
  __loc804 = cast806;
    void* t807 = __loc804;
    char* cast808 = (char*)t807;
    char* t809 = __args802;
    char t810 = *t809;
    *cast808 = t810;
    __retval803 = cast808;
    char* t811 = __retval803;
    return t811;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v812, char* v813) {
bb814:
  char* __c1815;
  char* __c2816;
  __c1815 = v812;
  __c2816 = v813;
    _Bool r817 = std____is_constant_evaluated();
    if (r817) {
      char* t818 = __c1815;
      char* t819 = __c2816;
      char* r820 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t818, t819);
    } else {
      char* t821 = __c2816;
      char t822 = *t821;
      char* t823 = __c1815;
      *t823 = t822;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v824, char* v825, unsigned long v826) {
bb827:
  char* __s1828;
  char* __s2829;
  unsigned long __n830;
  char* __retval831;
  __s1828 = v824;
  __s2829 = v825;
  __n830 = v826;
    unsigned long t832 = __n830;
    unsigned long c833 = 0;
    _Bool c834 = ((t832 == c833)) ? 1 : 0;
    if (c834) {
      char* t835 = __s1828;
      __retval831 = t835;
      char* t836 = __retval831;
      return t836;
    }
    _Bool r837 = std____is_constant_evaluated();
    if (r837) {
        unsigned long __i838;
        unsigned long c839 = 0;
        __i838 = c839;
        while (1) {
          unsigned long t841 = __i838;
          unsigned long t842 = __n830;
          _Bool c843 = ((t841 < t842)) ? 1 : 0;
          if (!c843) break;
          char* t844 = __s1828;
          unsigned long t845 = __i838;
          char* ptr846 = &(t844)[t845];
          unsigned long t847 = __i838;
          char* t848 = __s2829;
          char* ptr849 = &(t848)[t847];
          char* r850 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr846, ptr849);
        for_step840: ;
          unsigned long t851 = __i838;
          unsigned long u852 = t851 + 1;
          __i838 = u852;
        }
      char* t853 = __s1828;
      __retval831 = t853;
      char* t854 = __retval831;
      return t854;
    }
  char* t855 = __s1828;
  void* cast856 = (void*)t855;
  char* t857 = __s2829;
  void* cast858 = (void*)t857;
  unsigned long t859 = __n830;
  unsigned long c860 = 1;
  unsigned long b861 = t859 * c860;
  void* r862 = memcpy(cast856, cast858, b861);
  char* t863 = __s1828;
  __retval831 = t863;
  char* t864 = __retval831;
  return t864;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v865, char* v866, unsigned long v867) {
bb868:
  char* __s1869;
  char* __s2870;
  unsigned long __n871;
  char* __retval872;
  __s1869 = v865;
  __s2870 = v866;
  __n871 = v867;
    unsigned long t873 = __n871;
    unsigned long c874 = 0;
    _Bool c875 = ((t873 == c874)) ? 1 : 0;
    if (c875) {
      char* t876 = __s1869;
      __retval872 = t876;
      char* t877 = __retval872;
      return t877;
    }
    _Bool r878 = std____is_constant_evaluated();
    if (r878) {
      char* t879 = __s1869;
      char* t880 = __s2870;
      unsigned long t881 = __n871;
      char* r882 = __gnu_cxx__char_traits_char___copy(t879, t880, t881);
      __retval872 = r882;
      char* t883 = __retval872;
      return t883;
    }
  char* t884 = __s1869;
  void* cast885 = (void*)t884;
  char* t886 = __s2870;
  void* cast887 = (void*)t886;
  unsigned long t888 = __n871;
  void* r889 = memcpy(cast885, cast887, t888);
  char* cast890 = (char*)r889;
  __retval872 = cast890;
  char* t891 = __retval872;
  return t891;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v892, char* v893, unsigned long v894) {
bb895:
  char* __d896;
  char* __s897;
  unsigned long __n898;
  __d896 = v892;
  __s897 = v893;
  __n898 = v894;
    unsigned long t899 = __n898;
    unsigned long c900 = 1;
    _Bool c901 = ((t899 == c900)) ? 1 : 0;
    if (c901) {
      char* t902 = __d896;
      char* t903 = __s897;
      std__char_traits_char___assign(t902, t903);
    } else {
      char* t904 = __d896;
      char* t905 = __s897;
      unsigned long t906 = __n898;
      char* r907 = std__char_traits_char___copy(t904, t905, t906);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v908) {
bb909:
  char* __it910;
  char* __retval911;
  __it910 = v908;
  char* t912 = __it910;
  __retval911 = t912;
  char* t913 = __retval911;
  return t913;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v914, char* v915, char* v916) {
bb917:
  char* __p918;
  char* __k1919;
  char* __k2920;
  __p918 = v914;
  __k1919 = v915;
  __k2920 = v916;
    char* t921 = __p918;
    char* t922 = __k1919;
    char* r923 = char_const__std____niter_base_char_const__(t922);
    char* t924 = __k2920;
    char* t925 = __k1919;
    long diff926 = t924 - t925;
    unsigned long cast927 = (unsigned long)diff926;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t921, r923, cast927);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v928) {
bb929:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this930;
  char* __retval931;
  this930 = v928;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t932 = this930;
  char* t933 = t932->_M_dataplus._M_p;
  __retval931 = t933;
  char* t934 = __retval931;
  return t934;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v935, unsigned long v936) {
bb937:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this938;
  unsigned long __length939;
  this938 = v935;
  __length939 = v936;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t940 = this938;
  unsigned long t941 = __length939;
  t940->_M_string_length = t941;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v942, unsigned long v943) {
bb944:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this945;
  unsigned long __n946;
  char ref_tmp0947;
  this945 = v942;
  __n946 = v943;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t948 = this945;
  unsigned long t949 = __n946;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t948, t949);
  unsigned long t950 = __n946;
  char* r951 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t948);
  char* ptr952 = &(r951)[t950];
  char c953 = 0;
  ref_tmp0947 = c953;
  std__char_traits_char___assign(ptr952, &ref_tmp0947);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v954) {
bb955:
  struct _Guard* this956;
  this956 = v954;
  struct _Guard* t957 = this956;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t958 = t957->_M_guarded;
    _Bool cast959 = (_Bool)t958;
    if (cast959) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t960 = t957->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t960);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v961, char* v962, char* v963, struct std__forward_iterator_tag v964) {
bb965:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this966;
  char* __beg967;
  char* __end968;
  struct std__forward_iterator_tag unnamed969;
  unsigned long __dnew970;
  struct _Guard __guard971;
  this966 = v961;
  __beg967 = v962;
  __end968 = v963;
  unnamed969 = v964;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t972 = this966;
  char* t973 = __beg967;
  char* t974 = __end968;
  long r975 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t973, t974);
  unsigned long cast976 = (unsigned long)r975;
  __dnew970 = cast976;
    unsigned long t977 = __dnew970;
    unsigned long c978 = 15;
    _Bool c979 = ((t977 > c978)) ? 1 : 0;
    if (c979) {
      unsigned long c980 = 0;
      char* r981 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t972, &__dnew970, c980);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t972, r981);
      unsigned long t982 = __dnew970;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t972, t982);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t972);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard971, t972);
    char* r983 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t972);
    char* t984 = __beg967;
    char* t985 = __end968;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r983, t984, t985);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c986 = ((void*)0);
    __guard971._M_guarded = c986;
    unsigned long t987 = __dnew970;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t972, t987);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard971);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v988) {
bb989:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this990;
  this990 = v988;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t991 = this990;
  {
    struct std__allocator_char_* base992 = (struct std__allocator_char_*)((char *)t991 + 0);
    std__allocator_char____allocator(base992);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v993, struct std____new_allocator_char_* v994) {
bb995:
  struct std____new_allocator_char_* this996;
  struct std____new_allocator_char_* unnamed997;
  this996 = v993;
  unnamed997 = v994;
  struct std____new_allocator_char_* t998 = this996;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v999, struct std__allocator_char_* v1000) {
bb1001:
  struct std__allocator_char_* this1002;
  struct std__allocator_char_* __a1003;
  this1002 = v999;
  __a1003 = v1000;
  struct std__allocator_char_* t1004 = this1002;
  struct std____new_allocator_char_* base1005 = (struct std____new_allocator_char_*)((char *)t1004 + 0);
  struct std__allocator_char_* t1006 = __a1003;
  struct std____new_allocator_char_* base1007 = (struct std____new_allocator_char_*)((char *)t1006 + 0);
  std____new_allocator_char_____new_allocator(base1005, base1007);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1008) {
bb1009:
  char* __r1010;
  char* __retval1011;
  __r1010 = v1008;
  char* t1012 = __r1010;
  __retval1011 = t1012;
  char* t1013 = __retval1011;
  return t1013;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1014) {
bb1015:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1016;
  char* __retval1017;
  this1016 = v1014;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1018 = this1016;
  char* cast1019 = (char*)&(t1018->field2._M_local_buf);
  char* r1020 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1019);
  __retval1017 = r1020;
  char* t1021 = __retval1017;
  return t1021;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1022) {
bb1023:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1024;
  _Bool __retval1025;
  this1024 = v1022;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1026 = this1024;
    char* r1027 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1026);
    char* r1028 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1026);
    _Bool c1029 = ((r1027 == r1028)) ? 1 : 0;
    if (c1029) {
        unsigned long t1030 = t1026->_M_string_length;
        unsigned long c1031 = 15;
        _Bool c1032 = ((t1030 > c1031)) ? 1 : 0;
        if (c1032) {
          __builtin_unreachable();
        }
      _Bool c1033 = 1;
      __retval1025 = c1033;
      _Bool t1034 = __retval1025;
      return t1034;
    }
  _Bool c1035 = 0;
  __retval1025 = c1035;
  _Bool t1036 = __retval1025;
  return t1036;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1037, char* v1038, unsigned long v1039) {
bb1040:
  struct std____new_allocator_char_* this1041;
  char* __p1042;
  unsigned long __n1043;
  this1041 = v1037;
  __p1042 = v1038;
  __n1043 = v1039;
  struct std____new_allocator_char_* t1044 = this1041;
    unsigned long c1045 = 1;
    unsigned long c1046 = 16;
    _Bool c1047 = ((c1045 > c1046)) ? 1 : 0;
    if (c1047) {
      char* t1048 = __p1042;
      void* cast1049 = (void*)t1048;
      unsigned long t1050 = __n1043;
      unsigned long c1051 = 1;
      unsigned long b1052 = t1050 * c1051;
      unsigned long c1053 = 1;
      operator_delete_3(cast1049, b1052, c1053);
      return;
    }
  char* t1054 = __p1042;
  void* cast1055 = (void*)t1054;
  unsigned long t1056 = __n1043;
  unsigned long c1057 = 1;
  unsigned long b1058 = t1056 * c1057;
  operator_delete_2(cast1055, b1058);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1059, char* v1060, unsigned long v1061) {
bb1062:
  struct std__allocator_char_* this1063;
  char* __p1064;
  unsigned long __n1065;
  this1063 = v1059;
  __p1064 = v1060;
  __n1065 = v1061;
  struct std__allocator_char_* t1066 = this1063;
    _Bool r1067 = std____is_constant_evaluated();
    if (r1067) {
      char* t1068 = __p1064;
      void* cast1069 = (void*)t1068;
      operator_delete(cast1069);
      return;
    }
  struct std____new_allocator_char_* base1070 = (struct std____new_allocator_char_*)((char *)t1066 + 0);
  char* t1071 = __p1064;
  unsigned long t1072 = __n1065;
  std____new_allocator_char___deallocate(base1070, t1071, t1072);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1073, char* v1074, unsigned long v1075) {
bb1076:
  struct std__allocator_char_* __a1077;
  char* __p1078;
  unsigned long __n1079;
  __a1077 = v1073;
  __p1078 = v1074;
  __n1079 = v1075;
  struct std__allocator_char_* t1080 = __a1077;
  char* t1081 = __p1078;
  unsigned long t1082 = __n1079;
  std__allocator_char___deallocate(t1080, t1081, t1082);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1083, unsigned long v1084) {
bb1085:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1086;
  unsigned long __size1087;
  this1086 = v1083;
  __size1087 = v1084;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1088 = this1086;
  struct std__allocator_char_* r1089 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1088);
  char* r1090 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1088);
  unsigned long t1091 = __size1087;
  unsigned long c1092 = 1;
  unsigned long b1093 = t1091 + c1092;
  std__allocator_traits_std__allocator_char_____deallocate(r1089, r1090, b1093);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1094) {
bb1095:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1096;
  this1096 = v1094;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1097 = this1096;
    _Bool r1098 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1097);
    _Bool u1099 = !r1098;
    if (u1099) {
      unsigned long t1100 = t1097->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1097, t1100);
    }
  return;
}

