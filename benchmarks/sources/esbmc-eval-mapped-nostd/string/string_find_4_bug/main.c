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
char _str[23] = "There are two needles ";
char _str_1[7] = "needle";
char _str_2[15] = "int(found)!=14";
char _str_3[112] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_find_4_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[26] = "first 'needle' found at: ";
char _str_5[50] = "basic_string: construction from null is not valid";
char _str_6[24] = "basic_string::_M_create";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
char* __gnu_cxx__char_traits_char___find(char* p0, unsigned long p1, char* p2);
char* std__char_traits_char___find(char* p0, unsigned long p1, char* p2);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, unsigned long p3);
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
        char* cast20 = (char*)&(_str_5);
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

// function: _ZN9__gnu_cxx11char_traitsIcE4findEPKcmRS2_
char* __gnu_cxx__char_traits_char___find(char* v32, unsigned long v33, char* v34) {
bb35:
  char* __s36;
  unsigned long __n37;
  char* __a38;
  char* __retval39;
  __s36 = v32;
  __n37 = v33;
  __a38 = v34;
    unsigned long __i40;
    unsigned long c41 = 0;
    __i40 = c41;
    while (1) {
      unsigned long t43 = __i40;
      unsigned long t44 = __n37;
      _Bool c45 = ((t43 < t44)) ? 1 : 0;
      if (!c45) break;
        unsigned long t46 = __i40;
        char* t47 = __s36;
        char* ptr48 = &(t47)[t46];
        char* t49 = __a38;
        _Bool r50 = __gnu_cxx__char_traits_char___eq(ptr48, t49);
        if (r50) {
          char* t51 = __s36;
          unsigned long t52 = __i40;
          char* ptr53 = &(t51)[t52];
          __retval39 = ptr53;
          char* t54 = __retval39;
          char* ret_val55 = t54;
          return ret_val55;
        }
    for_step42: ;
      unsigned long t56 = __i40;
      unsigned long u57 = t56 + 1;
      __i40 = u57;
    }
  char* c58 = ((void*)0);
  __retval39 = c58;
  char* t59 = __retval39;
  return t59;
}

// function: _ZNSt11char_traitsIcE4findEPKcmRS1_
char* std__char_traits_char___find(char* v60, unsigned long v61, char* v62) {
bb63:
  char* __s64;
  unsigned long __n65;
  char* __a66;
  char* __retval67;
  __s64 = v60;
  __n65 = v61;
  __a66 = v62;
    unsigned long t68 = __n65;
    unsigned long c69 = 0;
    _Bool c70 = ((t68 == c69)) ? 1 : 0;
    if (c70) {
      char* c71 = ((void*)0);
      __retval67 = c71;
      char* t72 = __retval67;
      return t72;
    }
    _Bool r73 = std____is_constant_evaluated();
    if (r73) {
      char* t74 = __s64;
      unsigned long t75 = __n65;
      char* t76 = __a66;
      char* r77 = __gnu_cxx__char_traits_char___find(t74, t75, t76);
      __retval67 = r77;
      char* t78 = __retval67;
      return t78;
    }
  char* t79 = __s64;
  void* cast80 = (void*)t79;
  char* t81 = __a66;
  char t82 = *t81;
  int cast83 = (int)t82;
  unsigned long t84 = __n65;
  void* memchr85 = (void*)__builtin_memchr(cast80, cast83, t84);
  char* cast86 = (char*)memchr85;
  __retval67 = cast86;
  char* t87 = __retval67;
  return t87;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v88, char* v89) {
bb90:
  char* __c191;
  char* __c292;
  _Bool __retval93;
  __c191 = v88;
  __c292 = v89;
  char* t94 = __c191;
  char t95 = *t94;
  unsigned char cast96 = (unsigned char)t95;
  int cast97 = (int)cast96;
  char* t98 = __c292;
  char t99 = *t98;
  unsigned char cast100 = (unsigned char)t99;
  int cast101 = (int)cast100;
  _Bool c102 = ((cast97 < cast101)) ? 1 : 0;
  __retval93 = c102;
  _Bool t103 = __retval93;
  return t103;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v104, char* v105, unsigned long v106) {
bb107:
  char* __s1108;
  char* __s2109;
  unsigned long __n110;
  int __retval111;
  __s1108 = v104;
  __s2109 = v105;
  __n110 = v106;
    unsigned long t112 = __n110;
    unsigned long c113 = 0;
    _Bool c114 = ((t112 == c113)) ? 1 : 0;
    if (c114) {
      int c115 = 0;
      __retval111 = c115;
      int t116 = __retval111;
      return t116;
    }
    _Bool r117 = std____is_constant_evaluated();
    if (r117) {
        unsigned long __i118;
        unsigned long c119 = 0;
        __i118 = c119;
        while (1) {
          unsigned long t121 = __i118;
          unsigned long t122 = __n110;
          _Bool c123 = ((t121 < t122)) ? 1 : 0;
          if (!c123) break;
            unsigned long t124 = __i118;
            char* t125 = __s1108;
            char* ptr126 = &(t125)[t124];
            unsigned long t127 = __i118;
            char* t128 = __s2109;
            char* ptr129 = &(t128)[t127];
            _Bool r130 = std__char_traits_char___lt(ptr126, ptr129);
            if (r130) {
              int c131 = -1;
              __retval111 = c131;
              int t132 = __retval111;
              int ret_val133 = t132;
              return ret_val133;
            } else {
                unsigned long t134 = __i118;
                char* t135 = __s2109;
                char* ptr136 = &(t135)[t134];
                unsigned long t137 = __i118;
                char* t138 = __s1108;
                char* ptr139 = &(t138)[t137];
                _Bool r140 = std__char_traits_char___lt(ptr136, ptr139);
                if (r140) {
                  int c141 = 1;
                  __retval111 = c141;
                  int t142 = __retval111;
                  int ret_val143 = t142;
                  return ret_val143;
                }
            }
        for_step120: ;
          unsigned long t144 = __i118;
          unsigned long u145 = t144 + 1;
          __i118 = u145;
        }
      int c146 = 0;
      __retval111 = c146;
      int t147 = __retval111;
      return t147;
    }
  char* t148 = __s1108;
  void* cast149 = (void*)t148;
  char* t150 = __s2109;
  void* cast151 = (void*)t150;
  unsigned long t152 = __n110;
  int r153 = memcmp(cast149, cast151, t152);
  __retval111 = r153;
  int t154 = __retval111;
  return t154;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4findEPKcmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v155, char* v156, unsigned long v157, unsigned long v158) {
bb159:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this160;
  char* __s161;
  unsigned long __pos162;
  unsigned long __n163;
  unsigned long __retval164;
  unsigned long __size165;
  char __elem0166;
  char* __data167;
  char* __first168;
  char* __last169;
  unsigned long __len170;
  this160 = v155;
  __s161 = v156;
  __pos162 = v157;
  __n163 = v158;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t171 = this160;
  unsigned long r172 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t171);
  __size165 = r172;
    unsigned long t173 = __n163;
    unsigned long c174 = 0;
    _Bool c175 = ((t173 == c174)) ? 1 : 0;
    if (c175) {
      unsigned long t176 = __pos162;
      unsigned long t177 = __size165;
      _Bool c178 = ((t176 <= t177)) ? 1 : 0;
      unsigned long ternary179;
      if (c178) {
        unsigned long t180 = __pos162;
        ternary179 = (unsigned long)t180;
      } else {
        unsigned long t181 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
        ternary179 = (unsigned long)t181;
      }
      __retval164 = ternary179;
      unsigned long t182 = __retval164;
      return t182;
    }
    unsigned long t183 = __pos162;
    unsigned long t184 = __size165;
    _Bool c185 = ((t183 >= t184)) ? 1 : 0;
    if (c185) {
      unsigned long t186 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
      __retval164 = t186;
      unsigned long t187 = __retval164;
      return t187;
    }
  long c188 = 0;
  char* t189 = __s161;
  char* ptr190 = &(t189)[c188];
  char t191 = *ptr190;
  __elem0166 = t191;
  char* r192 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t171);
  __data167 = r192;
  char* t193 = __data167;
  unsigned long t194 = __pos162;
  char* ptr195 = &(t193)[t194];
  __first168 = ptr195;
  char* t196 = __data167;
  unsigned long t197 = __size165;
  char* ptr198 = &(t196)[t197];
  __last169 = ptr198;
  unsigned long t199 = __size165;
  unsigned long t200 = __pos162;
  unsigned long b201 = t199 - t200;
  __len170 = b201;
    while (1) {
      unsigned long t202 = __len170;
      unsigned long t203 = __n163;
      _Bool c204 = ((t202 >= t203)) ? 1 : 0;
      if (!c204) break;
        char* t205 = __first168;
        unsigned long t206 = __len170;
        unsigned long t207 = __n163;
        unsigned long b208 = t206 - t207;
        unsigned long c209 = 1;
        unsigned long b210 = b208 + c209;
        char* r211 = std__char_traits_char___find(t205, b210, &__elem0166);
        __first168 = r211;
          char* t212 = __first168;
          _Bool cast213 = (_Bool)t212;
          _Bool u214 = !cast213;
          if (u214) {
            unsigned long t215 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
            __retval164 = t215;
            unsigned long t216 = __retval164;
            unsigned long ret_val217 = t216;
            return ret_val217;
          }
          char* t218 = __first168;
          char* t219 = __s161;
          unsigned long t220 = __n163;
          int r221 = std__char_traits_char___compare(t218, t219, t220);
          int c222 = 0;
          _Bool c223 = ((r221 == c222)) ? 1 : 0;
          if (c223) {
            char* t224 = __first168;
            char* t225 = __data167;
            long diff226 = t224 - t225;
            unsigned long cast227 = (unsigned long)diff226;
            __retval164 = cast227;
            unsigned long t228 = __retval164;
            unsigned long ret_val229 = t228;
            return ret_val229;
          }
        char* t230 = __last169;
        char* t231 = __first168;
        int c232 = 1;
        char* ptr233 = &(t231)[c232];
        __first168 = ptr233;
        long diff234 = t230 - ptr233;
        unsigned long cast235 = (unsigned long)diff234;
        __len170 = cast235;
    }
  unsigned long t236 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
  __retval164 = t236;
  unsigned long t237 = __retval164;
  return t237;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v238) {
bb239:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this240;
  char* __retval241;
  this240 = v238;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t242 = this240;
  char* r243 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t242);
  __retval241 = r243;
  char* t244 = __retval241;
  return t244;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v245) {
bb246:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this247;
  unsigned long __retval248;
  unsigned long __sz249;
  this247 = v245;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t250 = this247;
  unsigned long t251 = t250->_M_string_length;
  __sz249 = t251;
    unsigned long t252 = __sz249;
    unsigned long r253 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t250);
    _Bool c254 = ((t252 > r253)) ? 1 : 0;
    if (c254) {
      __builtin_unreachable();
    }
  unsigned long t255 = __sz249;
  __retval248 = t255;
  unsigned long t256 = __retval248;
  return t256;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4findERKS4_m
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v257, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v258, unsigned long v259) {
bb260:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this261;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str262;
  unsigned long __pos263;
  unsigned long __retval264;
  this261 = v257;
  __str262 = v258;
  __pos263 = v259;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t265 = this261;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t266 = __str262;
  char* r267 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t266);
  unsigned long t268 = __pos263;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t269 = __str262;
  unsigned long r270 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t269);
  unsigned long r271 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__unsigned_long__const(t265, r267, t268, r270);
  __retval264 = r271;
  unsigned long t272 = __retval264;
  return t272;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v273, int v274) {
bb275:
  int __a276;
  int __b277;
  int __retval278;
  __a276 = v273;
  __b277 = v274;
  int t279 = __a276;
  int t280 = __b277;
  int b281 = t279 | t280;
  __retval278 = b281;
  int t282 = __retval278;
  return t282;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v283) {
bb284:
  struct std__basic_ios_char__std__char_traits_char__* this285;
  int __retval286;
  this285 = v283;
  struct std__basic_ios_char__std__char_traits_char__* t287 = this285;
  struct std__ios_base* base288 = (struct std__ios_base*)((char *)t287 + 0);
  int t289 = base288->_M_streambuf_state;
  __retval286 = t289;
  int t290 = __retval286;
  return t290;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v291, int v292) {
bb293:
  struct std__basic_ios_char__std__char_traits_char__* this294;
  int __state295;
  this294 = v291;
  __state295 = v292;
  struct std__basic_ios_char__std__char_traits_char__* t296 = this294;
  int r297 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t296);
  int t298 = __state295;
  int r299 = std__operator_(r297, t298);
  std__basic_ios_char__std__char_traits_char_____clear(t296, r299);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v300, char* v301) {
bb302:
  struct std__basic_ostream_char__std__char_traits_char__* __out303;
  char* __s304;
  struct std__basic_ostream_char__std__char_traits_char__* __retval305;
  __out303 = v300;
  __s304 = v301;
    char* t306 = __s304;
    _Bool cast307 = (_Bool)t306;
    _Bool u308 = !cast307;
    if (u308) {
      struct std__basic_ostream_char__std__char_traits_char__* t309 = __out303;
      void** v310 = (void**)t309;
      void* v311 = *((void**)v310);
      unsigned char* cast312 = (unsigned char*)v311;
      long c313 = -24;
      unsigned char* ptr314 = &(cast312)[c313];
      long* cast315 = (long*)ptr314;
      long t316 = *cast315;
      unsigned char* cast317 = (unsigned char*)t309;
      unsigned char* ptr318 = &(cast317)[t316];
      struct std__basic_ostream_char__std__char_traits_char__* cast319 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr318;
      struct std__basic_ios_char__std__char_traits_char__* cast320 = (struct std__basic_ios_char__std__char_traits_char__*)cast319;
      int t321 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast320, t321);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t322 = __out303;
      char* t323 = __s304;
      char* t324 = __s304;
      unsigned long r325 = std__char_traits_char___length(t324);
      long cast326 = (long)r325;
      struct std__basic_ostream_char__std__char_traits_char__* r327 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t322, t323, cast326);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t328 = __out303;
  __retval305 = t328;
  struct std__basic_ostream_char__std__char_traits_char__* t329 = __retval305;
  return t329;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v330, void* v331) {
bb332:
  struct std__basic_ostream_char__std__char_traits_char__* this333;
  void* __pf334;
  struct std__basic_ostream_char__std__char_traits_char__* __retval335;
  this333 = v330;
  __pf334 = v331;
  struct std__basic_ostream_char__std__char_traits_char__* t336 = this333;
  void* t337 = __pf334;
  struct std__basic_ostream_char__std__char_traits_char__* r338 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t337)(t336);
  __retval335 = r338;
  struct std__basic_ostream_char__std__char_traits_char__* t339 = __retval335;
  return t339;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v340) {
bb341:
  struct std__basic_ostream_char__std__char_traits_char__* __os342;
  struct std__basic_ostream_char__std__char_traits_char__* __retval343;
  __os342 = v340;
  struct std__basic_ostream_char__std__char_traits_char__* t344 = __os342;
  struct std__basic_ostream_char__std__char_traits_char__* r345 = std__ostream__flush(t344);
  __retval343 = r345;
  struct std__basic_ostream_char__std__char_traits_char__* t346 = __retval343;
  return t346;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v347) {
bb348:
  struct std__ctype_char_* __f349;
  struct std__ctype_char_* __retval350;
  __f349 = v347;
    struct std__ctype_char_* t351 = __f349;
    _Bool cast352 = (_Bool)t351;
    _Bool u353 = !cast352;
    if (u353) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t354 = __f349;
  __retval350 = t354;
  struct std__ctype_char_* t355 = __retval350;
  return t355;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v356, char v357) {
bb358:
  struct std__ctype_char_* this359;
  char __c360;
  char __retval361;
  this359 = v356;
  __c360 = v357;
  struct std__ctype_char_* t362 = this359;
    char t363 = t362->_M_widen_ok;
    _Bool cast364 = (_Bool)t363;
    if (cast364) {
      char t365 = __c360;
      unsigned char cast366 = (unsigned char)t365;
      unsigned long cast367 = (unsigned long)cast366;
      char t368 = t362->_M_widen[cast367];
      __retval361 = t368;
      char t369 = __retval361;
      return t369;
    }
  std__ctype_char____M_widen_init___const(t362);
  char t370 = __c360;
  void** v371 = (void**)t362;
  void* v372 = *((void**)v371);
  char vcall375 = (char)__VERIFIER_virtual_call_char_char(t362, 6, t370);
  __retval361 = vcall375;
  char t376 = __retval361;
  return t376;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v377, char v378) {
bb379:
  struct std__basic_ios_char__std__char_traits_char__* this380;
  char __c381;
  char __retval382;
  this380 = v377;
  __c381 = v378;
  struct std__basic_ios_char__std__char_traits_char__* t383 = this380;
  struct std__ctype_char_* t384 = t383->_M_ctype;
  struct std__ctype_char_* r385 = std__ctype_char__const__std____check_facet_std__ctype_char___(t384);
  char t386 = __c381;
  char r387 = std__ctype_char___widen_char__const(r385, t386);
  __retval382 = r387;
  char t388 = __retval382;
  return t388;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v389) {
bb390:
  struct std__basic_ostream_char__std__char_traits_char__* __os391;
  struct std__basic_ostream_char__std__char_traits_char__* __retval392;
  __os391 = v389;
  struct std__basic_ostream_char__std__char_traits_char__* t393 = __os391;
  struct std__basic_ostream_char__std__char_traits_char__* t394 = __os391;
  void** v395 = (void**)t394;
  void* v396 = *((void**)v395);
  unsigned char* cast397 = (unsigned char*)v396;
  long c398 = -24;
  unsigned char* ptr399 = &(cast397)[c398];
  long* cast400 = (long*)ptr399;
  long t401 = *cast400;
  unsigned char* cast402 = (unsigned char*)t394;
  unsigned char* ptr403 = &(cast402)[t401];
  struct std__basic_ostream_char__std__char_traits_char__* cast404 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr403;
  struct std__basic_ios_char__std__char_traits_char__* cast405 = (struct std__basic_ios_char__std__char_traits_char__*)cast404;
  char c406 = 10;
  char r407 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast405, c406);
  struct std__basic_ostream_char__std__char_traits_char__* r408 = std__ostream__put(t393, r407);
  struct std__basic_ostream_char__std__char_traits_char__* r409 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r408);
  __retval392 = r409;
  struct std__basic_ostream_char__std__char_traits_char__* t410 = __retval392;
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
      int c429 = 14;
      _Bool c430 = ((cast428 != c429)) ? 1 : 0;
      if (c430) {
      } else {
        char* cast431 = (char*)&(_str_2);
        char* c432 = _str_3;
        unsigned int c433 = 23;
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
      int c444 = 0;
      __retval416 = c444;
      int t445 = __retval416;
      int ret_val446 = t445;
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str2419);
      }
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str417);
      }
      return ret_val446;
  int t447 = __retval416;
  return t447;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v448) {
bb449:
  struct std____new_allocator_char_* this450;
  this450 = v448;
  struct std____new_allocator_char_* t451 = this450;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v452) {
bb453:
  char* __r454;
  char* __retval455;
  __r454 = v452;
  char* t456 = __r454;
  __retval455 = t456;
  char* t457 = __retval455;
  return t457;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v458) {
bb459:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this460;
  char* __retval461;
  this460 = v458;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t462 = this460;
  char* cast463 = (char*)&(t462->field2._M_local_buf);
  char* r464 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast463);
  __retval461 = r464;
  char* t465 = __retval461;
  return t465;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v466, char* v467, struct std__allocator_char_* v468) {
bb469:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this470;
  char* __dat471;
  struct std__allocator_char_* __a472;
  this470 = v466;
  __dat471 = v467;
  __a472 = v468;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t473 = this470;
  struct std__allocator_char_* base474 = (struct std__allocator_char_*)((char *)t473 + 0);
  struct std__allocator_char_* t475 = __a472;
  std__allocator_char___allocator(base474, t475);
    char* t476 = __dat471;
    t473->_M_p = t476;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb477:
  _Bool __retval478;
    _Bool c479 = 0;
    __retval478 = c479;
    _Bool t480 = __retval478;
    return t480;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v481, char* v482) {
bb483:
  char* __c1484;
  char* __c2485;
  _Bool __retval486;
  __c1484 = v481;
  __c2485 = v482;
  char* t487 = __c1484;
  char t488 = *t487;
  int cast489 = (int)t488;
  char* t490 = __c2485;
  char t491 = *t490;
  int cast492 = (int)t491;
  _Bool c493 = ((cast489 == cast492)) ? 1 : 0;
  __retval486 = c493;
  _Bool t494 = __retval486;
  return t494;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v495) {
bb496:
  char* __p497;
  unsigned long __retval498;
  unsigned long __i499;
  __p497 = v495;
  unsigned long c500 = 0;
  __i499 = c500;
    char ref_tmp0501;
    while (1) {
      unsigned long t502 = __i499;
      char* t503 = __p497;
      char* ptr504 = &(t503)[t502];
      char c505 = 0;
      ref_tmp0501 = c505;
      _Bool r506 = __gnu_cxx__char_traits_char___eq(ptr504, &ref_tmp0501);
      _Bool u507 = !r506;
      if (!u507) break;
      unsigned long t508 = __i499;
      unsigned long u509 = t508 + 1;
      __i499 = u509;
    }
  unsigned long t510 = __i499;
  __retval498 = t510;
  unsigned long t511 = __retval498;
  return t511;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v512) {
bb513:
  char* __s514;
  unsigned long __retval515;
  __s514 = v512;
    _Bool r516 = std____is_constant_evaluated();
    if (r516) {
      char* t517 = __s514;
      unsigned long r518 = __gnu_cxx__char_traits_char___length(t517);
      __retval515 = r518;
      unsigned long t519 = __retval515;
      return t519;
    }
  char* t520 = __s514;
  unsigned long r521 = strlen(t520);
  __retval515 = r521;
  unsigned long t522 = __retval515;
  return t522;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v523, char* v524, struct std__random_access_iterator_tag v525) {
bb526:
  char* __first527;
  char* __last528;
  struct std__random_access_iterator_tag unnamed529;
  long __retval530;
  __first527 = v523;
  __last528 = v524;
  unnamed529 = v525;
  char* t531 = __last528;
  char* t532 = __first527;
  long diff533 = t531 - t532;
  __retval530 = diff533;
  long t534 = __retval530;
  return t534;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v535) {
bb536:
  char** unnamed537;
  struct std__random_access_iterator_tag __retval538;
  unnamed537 = v535;
  struct std__random_access_iterator_tag t539 = __retval538;
  return t539;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v540, char* v541) {
bb542:
  char* __first543;
  char* __last544;
  long __retval545;
  struct std__random_access_iterator_tag agg_tmp0546;
  __first543 = v540;
  __last544 = v541;
  char* t547 = __first543;
  char* t548 = __last544;
  struct std__random_access_iterator_tag r549 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first543);
  agg_tmp0546 = r549;
  struct std__random_access_iterator_tag t550 = agg_tmp0546;
  long r551 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t547, t548, t550);
  __retval545 = r551;
  long t552 = __retval545;
  return t552;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v553, char* v554) {
bb555:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this556;
  char* __p557;
  this556 = v553;
  __p557 = v554;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t558 = this556;
  char* t559 = __p557;
  t558->_M_dataplus._M_p = t559;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v560) {
bb561:
  struct std__allocator_char_* __a562;
  unsigned long __retval563;
  __a562 = v560;
  unsigned long c564 = -1;
  unsigned long c565 = 1;
  unsigned long b566 = c564 / c565;
  __retval563 = b566;
  unsigned long t567 = __retval563;
  return t567;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v568) {
bb569:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this570;
  struct std__allocator_char_* __retval571;
  this570 = v568;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t572 = this570;
  struct std__allocator_char_* base573 = (struct std__allocator_char_*)((char *)&(t572->_M_dataplus) + 0);
  __retval571 = base573;
  struct std__allocator_char_* t574 = __retval571;
  return t574;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v575, unsigned long* v576) {
bb577:
  unsigned long* __a578;
  unsigned long* __b579;
  unsigned long* __retval580;
  __a578 = v575;
  __b579 = v576;
    unsigned long* t581 = __b579;
    unsigned long t582 = *t581;
    unsigned long* t583 = __a578;
    unsigned long t584 = *t583;
    _Bool c585 = ((t582 < t584)) ? 1 : 0;
    if (c585) {
      unsigned long* t586 = __b579;
      __retval580 = t586;
      unsigned long* t587 = __retval580;
      return t587;
    }
  unsigned long* t588 = __a578;
  __retval580 = t588;
  unsigned long* t589 = __retval580;
  return t589;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v590) {
bb591:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this592;
  unsigned long __retval593;
  unsigned long __diffmax594;
  unsigned long __allocmax595;
  this592 = v590;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t596 = this592;
  unsigned long c597 = 9223372036854775807;
  __diffmax594 = c597;
  struct std__allocator_char_* r598 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t596);
  unsigned long r599 = std__allocator_traits_std__allocator_char_____max_size(r598);
  __allocmax595 = r599;
  unsigned long* r600 = unsigned_long_const__std__min_unsigned_long_(&__diffmax594, &__allocmax595);
  unsigned long t601 = *r600;
  unsigned long c602 = 1;
  unsigned long b603 = t601 - c602;
  __retval593 = b603;
  unsigned long t604 = __retval593;
  return t604;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v605) {
bb606:
  struct std____new_allocator_char_* this607;
  unsigned long __retval608;
  this607 = v605;
  struct std____new_allocator_char_* t609 = this607;
  unsigned long c610 = 9223372036854775807;
  unsigned long c611 = 1;
  unsigned long b612 = c610 / c611;
  __retval608 = b612;
  unsigned long t613 = __retval608;
  return t613;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v614, unsigned long v615, void* v616) {
bb617:
  struct std____new_allocator_char_* this618;
  unsigned long __n619;
  void* unnamed620;
  char* __retval621;
  this618 = v614;
  __n619 = v615;
  unnamed620 = v616;
  struct std____new_allocator_char_* t622 = this618;
    unsigned long t623 = __n619;
    unsigned long r624 = std____new_allocator_char____M_max_size___const(t622);
    _Bool c625 = ((t623 > r624)) ? 1 : 0;
    if (c625) {
        unsigned long t626 = __n619;
        unsigned long c627 = -1;
        unsigned long c628 = 1;
        unsigned long b629 = c627 / c628;
        _Bool c630 = ((t626 > b629)) ? 1 : 0;
        if (c630) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c631 = 1;
    unsigned long c632 = 16;
    _Bool c633 = ((c631 > c632)) ? 1 : 0;
    if (c633) {
      unsigned long __al634;
      unsigned long c635 = 1;
      __al634 = c635;
      unsigned long t636 = __n619;
      unsigned long c637 = 1;
      unsigned long b638 = t636 * c637;
      unsigned long t639 = __al634;
      void* r640 = operator_new_2(b638, t639);
      char* cast641 = (char*)r640;
      __retval621 = cast641;
      char* t642 = __retval621;
      return t642;
    }
  unsigned long t643 = __n619;
  unsigned long c644 = 1;
  unsigned long b645 = t643 * c644;
  void* r646 = operator_new(b645);
  char* cast647 = (char*)r646;
  __retval621 = cast647;
  char* t648 = __retval621;
  return t648;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v649, unsigned long v650) {
bb651:
  struct std__allocator_char_* this652;
  unsigned long __n653;
  char* __retval654;
  this652 = v649;
  __n653 = v650;
  struct std__allocator_char_* t655 = this652;
    _Bool r656 = std____is_constant_evaluated();
    if (r656) {
        unsigned long t657 = __n653;
        unsigned long c658 = 1;
        unsigned long ovr659;
        _Bool ovf660 = __builtin_mul_overflow(t657, c658, &ovr659);
        __n653 = ovr659;
        if (ovf660) {
          std____throw_bad_array_new_length();
        }
      unsigned long t661 = __n653;
      void* r662 = operator_new(t661);
      char* cast663 = (char*)r662;
      __retval654 = cast663;
      char* t664 = __retval654;
      return t664;
    }
  struct std____new_allocator_char_* base665 = (struct std____new_allocator_char_*)((char *)t655 + 0);
  unsigned long t666 = __n653;
  void* c667 = ((void*)0);
  char* r668 = std____new_allocator_char___allocate(base665, t666, c667);
  __retval654 = r668;
  char* t669 = __retval654;
  return t669;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v670, unsigned long v671) {
bb672:
  struct std__allocator_char_* __a673;
  unsigned long __n674;
  char* __retval675;
  __a673 = v670;
  __n674 = v671;
  struct std__allocator_char_* t676 = __a673;
  unsigned long t677 = __n674;
  char* r678 = std__allocator_char___allocate(t676, t677);
  __retval675 = r678;
  char* t679 = __retval675;
  return t679;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v680, unsigned long v681) {
bb682:
  struct std__allocator_char_* __a683;
  unsigned long __n684;
  char* __retval685;
  char* __p686;
  __a683 = v680;
  __n684 = v681;
  struct std__allocator_char_* t687 = __a683;
  unsigned long t688 = __n684;
  char* r689 = std__allocator_traits_std__allocator_char_____allocate(t687, t688);
  __p686 = r689;
  char* t690 = __p686;
  __retval685 = t690;
  char* t691 = __retval685;
  return t691;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v692) {
bb693:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this694;
  struct std__allocator_char_* __retval695;
  this694 = v692;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t696 = this694;
  struct std__allocator_char_* base697 = (struct std__allocator_char_*)((char *)&(t696->_M_dataplus) + 0);
  __retval695 = base697;
  struct std__allocator_char_* t698 = __retval695;
  return t698;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v699, unsigned long* v700, unsigned long v701) {
bb702:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this703;
  unsigned long* __capacity704;
  unsigned long __old_capacity705;
  char* __retval706;
  this703 = v699;
  __capacity704 = v700;
  __old_capacity705 = v701;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t707 = this703;
    unsigned long* t708 = __capacity704;
    unsigned long t709 = *t708;
    unsigned long r710 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t707);
    _Bool c711 = ((t709 > r710)) ? 1 : 0;
    if (c711) {
      char* cast712 = (char*)&(_str_6);
      std____throw_length_error(cast712);
    }
    unsigned long* t713 = __capacity704;
    unsigned long t714 = *t713;
    unsigned long t715 = __old_capacity705;
    _Bool c716 = ((t714 > t715)) ? 1 : 0;
    _Bool ternary717;
    if (c716) {
      unsigned long* t718 = __capacity704;
      unsigned long t719 = *t718;
      unsigned long c720 = 2;
      unsigned long t721 = __old_capacity705;
      unsigned long b722 = c720 * t721;
      _Bool c723 = ((t719 < b722)) ? 1 : 0;
      ternary717 = (_Bool)c723;
    } else {
      _Bool c724 = 0;
      ternary717 = (_Bool)c724;
    }
    if (ternary717) {
      unsigned long c725 = 2;
      unsigned long t726 = __old_capacity705;
      unsigned long b727 = c725 * t726;
      unsigned long* t728 = __capacity704;
      *t728 = b727;
        unsigned long* t729 = __capacity704;
        unsigned long t730 = *t729;
        unsigned long r731 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t707);
        _Bool c732 = ((t730 > r731)) ? 1 : 0;
        if (c732) {
          unsigned long r733 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t707);
          unsigned long* t734 = __capacity704;
          *t734 = r733;
        }
    }
  struct std__allocator_char_* r735 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t707);
  unsigned long* t736 = __capacity704;
  unsigned long t737 = *t736;
  unsigned long c738 = 1;
  unsigned long b739 = t737 + c738;
  char* r740 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r735, b739);
  __retval706 = r740;
  char* t741 = __retval706;
  return t741;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v742, unsigned long v743) {
bb744:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this745;
  unsigned long __capacity746;
  this745 = v742;
  __capacity746 = v743;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t747 = this745;
  unsigned long t748 = __capacity746;
  t747->field2._M_allocated_capacity = t748;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb749:
  _Bool __retval750;
    _Bool c751 = 0;
    __retval750 = c751;
    _Bool t752 = __retval750;
    return t752;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v753) {
bb754:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this755;
  this755 = v753;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t756 = this755;
    _Bool r757 = std__is_constant_evaluated();
    if (r757) {
        unsigned long __i758;
        unsigned long c759 = 0;
        __i758 = c759;
        while (1) {
          unsigned long t761 = __i758;
          unsigned long c762 = 15;
          _Bool c763 = ((t761 <= c762)) ? 1 : 0;
          if (!c763) break;
          char c764 = 0;
          unsigned long t765 = __i758;
          t756->field2._M_local_buf[t765] = c764;
        for_step760: ;
          unsigned long t766 = __i758;
          unsigned long u767 = t766 + 1;
          __i758 = u767;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v768, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v769) {
bb770:
  struct _Guard* this771;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s772;
  this771 = v768;
  __s772 = v769;
  struct _Guard* t773 = this771;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t774 = __s772;
  t773->_M_guarded = t774;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v775, char* v776) {
bb777:
  char* __location778;
  char* __args779;
  char* __retval780;
  void* __loc781;
  __location778 = v775;
  __args779 = v776;
  char* t782 = __location778;
  void* cast783 = (void*)t782;
  __loc781 = cast783;
    void* t784 = __loc781;
    char* cast785 = (char*)t784;
    char* t786 = __args779;
    char t787 = *t786;
    *cast785 = t787;
    __retval780 = cast785;
    char* t788 = __retval780;
    return t788;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v789, char* v790) {
bb791:
  char* __c1792;
  char* __c2793;
  __c1792 = v789;
  __c2793 = v790;
    _Bool r794 = std____is_constant_evaluated();
    if (r794) {
      char* t795 = __c1792;
      char* t796 = __c2793;
      char* r797 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t795, t796);
    } else {
      char* t798 = __c2793;
      char t799 = *t798;
      char* t800 = __c1792;
      *t800 = t799;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v801, char* v802, unsigned long v803) {
bb804:
  char* __s1805;
  char* __s2806;
  unsigned long __n807;
  char* __retval808;
  __s1805 = v801;
  __s2806 = v802;
  __n807 = v803;
    unsigned long t809 = __n807;
    unsigned long c810 = 0;
    _Bool c811 = ((t809 == c810)) ? 1 : 0;
    if (c811) {
      char* t812 = __s1805;
      __retval808 = t812;
      char* t813 = __retval808;
      return t813;
    }
    _Bool r814 = std____is_constant_evaluated();
    if (r814) {
        unsigned long __i815;
        unsigned long c816 = 0;
        __i815 = c816;
        while (1) {
          unsigned long t818 = __i815;
          unsigned long t819 = __n807;
          _Bool c820 = ((t818 < t819)) ? 1 : 0;
          if (!c820) break;
          char* t821 = __s1805;
          unsigned long t822 = __i815;
          char* ptr823 = &(t821)[t822];
          unsigned long t824 = __i815;
          char* t825 = __s2806;
          char* ptr826 = &(t825)[t824];
          char* r827 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr823, ptr826);
        for_step817: ;
          unsigned long t828 = __i815;
          unsigned long u829 = t828 + 1;
          __i815 = u829;
        }
      char* t830 = __s1805;
      __retval808 = t830;
      char* t831 = __retval808;
      return t831;
    }
  char* t832 = __s1805;
  void* cast833 = (void*)t832;
  char* t834 = __s2806;
  void* cast835 = (void*)t834;
  unsigned long t836 = __n807;
  unsigned long c837 = 1;
  unsigned long b838 = t836 * c837;
  void* r839 = memcpy(cast833, cast835, b838);
  char* t840 = __s1805;
  __retval808 = t840;
  char* t841 = __retval808;
  return t841;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v842, char* v843, unsigned long v844) {
bb845:
  char* __s1846;
  char* __s2847;
  unsigned long __n848;
  char* __retval849;
  __s1846 = v842;
  __s2847 = v843;
  __n848 = v844;
    unsigned long t850 = __n848;
    unsigned long c851 = 0;
    _Bool c852 = ((t850 == c851)) ? 1 : 0;
    if (c852) {
      char* t853 = __s1846;
      __retval849 = t853;
      char* t854 = __retval849;
      return t854;
    }
    _Bool r855 = std____is_constant_evaluated();
    if (r855) {
      char* t856 = __s1846;
      char* t857 = __s2847;
      unsigned long t858 = __n848;
      char* r859 = __gnu_cxx__char_traits_char___copy(t856, t857, t858);
      __retval849 = r859;
      char* t860 = __retval849;
      return t860;
    }
  char* t861 = __s1846;
  void* cast862 = (void*)t861;
  char* t863 = __s2847;
  void* cast864 = (void*)t863;
  unsigned long t865 = __n848;
  void* r866 = memcpy(cast862, cast864, t865);
  char* cast867 = (char*)r866;
  __retval849 = cast867;
  char* t868 = __retval849;
  return t868;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v869, char* v870, unsigned long v871) {
bb872:
  char* __d873;
  char* __s874;
  unsigned long __n875;
  __d873 = v869;
  __s874 = v870;
  __n875 = v871;
    unsigned long t876 = __n875;
    unsigned long c877 = 1;
    _Bool c878 = ((t876 == c877)) ? 1 : 0;
    if (c878) {
      char* t879 = __d873;
      char* t880 = __s874;
      std__char_traits_char___assign(t879, t880);
    } else {
      char* t881 = __d873;
      char* t882 = __s874;
      unsigned long t883 = __n875;
      char* r884 = std__char_traits_char___copy(t881, t882, t883);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v885) {
bb886:
  char* __it887;
  char* __retval888;
  __it887 = v885;
  char* t889 = __it887;
  __retval888 = t889;
  char* t890 = __retval888;
  return t890;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v891, char* v892, char* v893) {
bb894:
  char* __p895;
  char* __k1896;
  char* __k2897;
  __p895 = v891;
  __k1896 = v892;
  __k2897 = v893;
    char* t898 = __p895;
    char* t899 = __k1896;
    char* r900 = char_const__std____niter_base_char_const__(t899);
    char* t901 = __k2897;
    char* t902 = __k1896;
    long diff903 = t901 - t902;
    unsigned long cast904 = (unsigned long)diff903;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t898, r900, cast904);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v905) {
bb906:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this907;
  char* __retval908;
  this907 = v905;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t909 = this907;
  char* t910 = t909->_M_dataplus._M_p;
  __retval908 = t910;
  char* t911 = __retval908;
  return t911;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v912, unsigned long v913) {
bb914:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this915;
  unsigned long __length916;
  this915 = v912;
  __length916 = v913;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t917 = this915;
  unsigned long t918 = __length916;
  t917->_M_string_length = t918;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v919, unsigned long v920) {
bb921:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this922;
  unsigned long __n923;
  char ref_tmp0924;
  this922 = v919;
  __n923 = v920;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t925 = this922;
  unsigned long t926 = __n923;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t925, t926);
  unsigned long t927 = __n923;
  char* r928 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t925);
  char* ptr929 = &(r928)[t927];
  char c930 = 0;
  ref_tmp0924 = c930;
  std__char_traits_char___assign(ptr929, &ref_tmp0924);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v931) {
bb932:
  struct _Guard* this933;
  this933 = v931;
  struct _Guard* t934 = this933;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t935 = t934->_M_guarded;
    _Bool cast936 = (_Bool)t935;
    if (cast936) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t937 = t934->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t937);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v938, char* v939, char* v940, struct std__forward_iterator_tag v941) {
bb942:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this943;
  char* __beg944;
  char* __end945;
  struct std__forward_iterator_tag unnamed946;
  unsigned long __dnew947;
  struct _Guard __guard948;
  this943 = v938;
  __beg944 = v939;
  __end945 = v940;
  unnamed946 = v941;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t949 = this943;
  char* t950 = __beg944;
  char* t951 = __end945;
  long r952 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t950, t951);
  unsigned long cast953 = (unsigned long)r952;
  __dnew947 = cast953;
    unsigned long t954 = __dnew947;
    unsigned long c955 = 15;
    _Bool c956 = ((t954 > c955)) ? 1 : 0;
    if (c956) {
      unsigned long c957 = 0;
      char* r958 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t949, &__dnew947, c957);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t949, r958);
      unsigned long t959 = __dnew947;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t949, t959);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t949);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard948, t949);
    char* r960 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t949);
    char* t961 = __beg944;
    char* t962 = __end945;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r960, t961, t962);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c963 = ((void*)0);
    __guard948._M_guarded = c963;
    unsigned long t964 = __dnew947;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t949, t964);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard948);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v965) {
bb966:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this967;
  this967 = v965;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t968 = this967;
  {
    struct std__allocator_char_* base969 = (struct std__allocator_char_*)((char *)t968 + 0);
    std__allocator_char____allocator(base969);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v970, struct std____new_allocator_char_* v971) {
bb972:
  struct std____new_allocator_char_* this973;
  struct std____new_allocator_char_* unnamed974;
  this973 = v970;
  unnamed974 = v971;
  struct std____new_allocator_char_* t975 = this973;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v976, struct std__allocator_char_* v977) {
bb978:
  struct std__allocator_char_* this979;
  struct std__allocator_char_* __a980;
  this979 = v976;
  __a980 = v977;
  struct std__allocator_char_* t981 = this979;
  struct std____new_allocator_char_* base982 = (struct std____new_allocator_char_*)((char *)t981 + 0);
  struct std__allocator_char_* t983 = __a980;
  struct std____new_allocator_char_* base984 = (struct std____new_allocator_char_*)((char *)t983 + 0);
  std____new_allocator_char_____new_allocator(base982, base984);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v985) {
bb986:
  char* __r987;
  char* __retval988;
  __r987 = v985;
  char* t989 = __r987;
  __retval988 = t989;
  char* t990 = __retval988;
  return t990;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v991) {
bb992:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this993;
  char* __retval994;
  this993 = v991;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t995 = this993;
  char* cast996 = (char*)&(t995->field2._M_local_buf);
  char* r997 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast996);
  __retval994 = r997;
  char* t998 = __retval994;
  return t998;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v999) {
bb1000:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1001;
  _Bool __retval1002;
  this1001 = v999;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1003 = this1001;
    char* r1004 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1003);
    char* r1005 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1003);
    _Bool c1006 = ((r1004 == r1005)) ? 1 : 0;
    if (c1006) {
        unsigned long t1007 = t1003->_M_string_length;
        unsigned long c1008 = 15;
        _Bool c1009 = ((t1007 > c1008)) ? 1 : 0;
        if (c1009) {
          __builtin_unreachable();
        }
      _Bool c1010 = 1;
      __retval1002 = c1010;
      _Bool t1011 = __retval1002;
      return t1011;
    }
  _Bool c1012 = 0;
  __retval1002 = c1012;
  _Bool t1013 = __retval1002;
  return t1013;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1014, char* v1015, unsigned long v1016) {
bb1017:
  struct std____new_allocator_char_* this1018;
  char* __p1019;
  unsigned long __n1020;
  this1018 = v1014;
  __p1019 = v1015;
  __n1020 = v1016;
  struct std____new_allocator_char_* t1021 = this1018;
    unsigned long c1022 = 1;
    unsigned long c1023 = 16;
    _Bool c1024 = ((c1022 > c1023)) ? 1 : 0;
    if (c1024) {
      char* t1025 = __p1019;
      void* cast1026 = (void*)t1025;
      unsigned long t1027 = __n1020;
      unsigned long c1028 = 1;
      unsigned long b1029 = t1027 * c1028;
      unsigned long c1030 = 1;
      operator_delete_3(cast1026, b1029, c1030);
      return;
    }
  char* t1031 = __p1019;
  void* cast1032 = (void*)t1031;
  unsigned long t1033 = __n1020;
  unsigned long c1034 = 1;
  unsigned long b1035 = t1033 * c1034;
  operator_delete_2(cast1032, b1035);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1036, char* v1037, unsigned long v1038) {
bb1039:
  struct std__allocator_char_* this1040;
  char* __p1041;
  unsigned long __n1042;
  this1040 = v1036;
  __p1041 = v1037;
  __n1042 = v1038;
  struct std__allocator_char_* t1043 = this1040;
    _Bool r1044 = std____is_constant_evaluated();
    if (r1044) {
      char* t1045 = __p1041;
      void* cast1046 = (void*)t1045;
      operator_delete(cast1046);
      return;
    }
  struct std____new_allocator_char_* base1047 = (struct std____new_allocator_char_*)((char *)t1043 + 0);
  char* t1048 = __p1041;
  unsigned long t1049 = __n1042;
  std____new_allocator_char___deallocate(base1047, t1048, t1049);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1050, char* v1051, unsigned long v1052) {
bb1053:
  struct std__allocator_char_* __a1054;
  char* __p1055;
  unsigned long __n1056;
  __a1054 = v1050;
  __p1055 = v1051;
  __n1056 = v1052;
  struct std__allocator_char_* t1057 = __a1054;
  char* t1058 = __p1055;
  unsigned long t1059 = __n1056;
  std__allocator_char___deallocate(t1057, t1058, t1059);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1060, unsigned long v1061) {
bb1062:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1063;
  unsigned long __size1064;
  this1063 = v1060;
  __size1064 = v1061;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1065 = this1063;
  struct std__allocator_char_* r1066 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1065);
  char* r1067 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1065);
  unsigned long t1068 = __size1064;
  unsigned long c1069 = 1;
  unsigned long b1070 = t1068 + c1069;
  std__allocator_traits_std__allocator_char_____deallocate(r1066, r1067, b1070);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1071) {
bb1072:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1073;
  this1073 = v1071;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1074 = this1073;
    _Bool r1075 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1074);
    _Bool u1076 = !r1075;
    if (u1076) {
      unsigned long t1077 = t1074->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1074, t1077);
    }
  return;
}

