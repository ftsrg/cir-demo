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

char _str[6] = "esbmc";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[17] = "str.size() == 10";
char _str_2[119] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string-error-construct-2/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[50] = "basic_string: construction from null is not valid";
char _str_4[24] = "basic_string::_M_create";
char _str_5[27] = "basic_string::basic_string";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
char _str_6[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1, unsigned long p2, struct std__allocator_char_* p3);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
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
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
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
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t14->_M_dataplus, r15, t16);
      char* t17 = __s10;
      char* c18 = ((void*)0);
      _Bool c19 = ((t17 == c18)) ? 1 : 0;
      if (c19) {
        char* cast20 = (char*)&(_str_3);
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

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS4_mRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v32, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v33, unsigned long v34, struct std__allocator_char_* v35) {
bb36:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this37;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str38;
  unsigned long __pos39;
  struct std__allocator_char_* __a40;
  char* __start41;
  struct std__forward_iterator_tag agg_tmp042;
  this37 = v32;
  __str38 = v33;
  __pos39 = v34;
  __a40 = v35;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t43 = this37;
  char* r44 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t43);
  struct std__allocator_char_* t45 = __a40;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t43->_M_dataplus, r44, t45);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t46 = __str38;
    char* r47 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t46);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t48 = __str38;
    unsigned long t49 = __pos39;
    char* cast50 = (char*)&(_str_5);
    unsigned long r51 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t48, t49, cast50);
    char* ptr52 = &(r47)[r51];
    __start41 = ptr52;
    char* t53 = __start41;
    char* t54 = __start41;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t55 = __str38;
    unsigned long t56 = __pos39;
    unsigned long t57 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
    unsigned long r58 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t55, t56, t57);
    char* ptr59 = &(t54)[r58];
    struct std__forward_iterator_tag t60 = agg_tmp042;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t43, t53, ptr59, t60);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v61) {
bb62:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this63;
  char* __retval64;
  this63 = v61;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t65 = this63;
  char* r66 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t65);
  __retval64 = r66;
  char* t67 = __retval64;
  return t67;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v68, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v69) {
bb70:
  struct std__basic_ostream_char__std__char_traits_char__* __os71;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str72;
  struct std__basic_ostream_char__std__char_traits_char__* __retval73;
  __os71 = v68;
  __str72 = v69;
  struct std__basic_ostream_char__std__char_traits_char__* t74 = __os71;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t75 = __str72;
  char* r76 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t75);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t77 = __str72;
  unsigned long r78 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t77);
  long cast79 = (long)r78;
  struct std__basic_ostream_char__std__char_traits_char__* r80 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t74, r76, cast79);
  __retval73 = r80;
  struct std__basic_ostream_char__std__char_traits_char__* t81 = __retval73;
  return t81;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v82, void* v83) {
bb84:
  struct std__basic_ostream_char__std__char_traits_char__* this85;
  void* __pf86;
  struct std__basic_ostream_char__std__char_traits_char__* __retval87;
  this85 = v82;
  __pf86 = v83;
  struct std__basic_ostream_char__std__char_traits_char__* t88 = this85;
  void* t89 = __pf86;
  struct std__basic_ostream_char__std__char_traits_char__* r90 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t89)(t88);
  __retval87 = r90;
  struct std__basic_ostream_char__std__char_traits_char__* t91 = __retval87;
  return t91;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v92) {
bb93:
  struct std__basic_ostream_char__std__char_traits_char__* __os94;
  struct std__basic_ostream_char__std__char_traits_char__* __retval95;
  __os94 = v92;
  struct std__basic_ostream_char__std__char_traits_char__* t96 = __os94;
  struct std__basic_ostream_char__std__char_traits_char__* r97 = std__ostream__flush(t96);
  __retval95 = r97;
  struct std__basic_ostream_char__std__char_traits_char__* t98 = __retval95;
  return t98;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v99) {
bb100:
  struct std__ctype_char_* __f101;
  struct std__ctype_char_* __retval102;
  __f101 = v99;
    struct std__ctype_char_* t103 = __f101;
    _Bool cast104 = (_Bool)t103;
    _Bool u105 = !cast104;
    if (u105) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t106 = __f101;
  __retval102 = t106;
  struct std__ctype_char_* t107 = __retval102;
  return t107;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v108, char v109) {
bb110:
  struct std__ctype_char_* this111;
  char __c112;
  char __retval113;
  this111 = v108;
  __c112 = v109;
  struct std__ctype_char_* t114 = this111;
    char t115 = t114->_M_widen_ok;
    _Bool cast116 = (_Bool)t115;
    if (cast116) {
      char t117 = __c112;
      unsigned char cast118 = (unsigned char)t117;
      unsigned long cast119 = (unsigned long)cast118;
      char t120 = t114->_M_widen[cast119];
      __retval113 = t120;
      char t121 = __retval113;
      return t121;
    }
  std__ctype_char____M_widen_init___const(t114);
  char t122 = __c112;
  void** v123 = (void**)t114;
  void* v124 = *((void**)v123);
  char vcall127 = (char)__VERIFIER_virtual_call_char_char(t114, 6, t122);
  __retval113 = vcall127;
  char t128 = __retval113;
  return t128;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v129, char v130) {
bb131:
  struct std__basic_ios_char__std__char_traits_char__* this132;
  char __c133;
  char __retval134;
  this132 = v129;
  __c133 = v130;
  struct std__basic_ios_char__std__char_traits_char__* t135 = this132;
  struct std__ctype_char_* t136 = t135->_M_ctype;
  struct std__ctype_char_* r137 = std__ctype_char__const__std____check_facet_std__ctype_char___(t136);
  char t138 = __c133;
  char r139 = std__ctype_char___widen_char__const(r137, t138);
  __retval134 = r139;
  char t140 = __retval134;
  return t140;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v141) {
bb142:
  struct std__basic_ostream_char__std__char_traits_char__* __os143;
  struct std__basic_ostream_char__std__char_traits_char__* __retval144;
  __os143 = v141;
  struct std__basic_ostream_char__std__char_traits_char__* t145 = __os143;
  struct std__basic_ostream_char__std__char_traits_char__* t146 = __os143;
  void** v147 = (void**)t146;
  void* v148 = *((void**)v147);
  unsigned char* cast149 = (unsigned char*)v148;
  long c150 = -24;
  unsigned char* ptr151 = &(cast149)[c150];
  long* cast152 = (long*)ptr151;
  long t153 = *cast152;
  unsigned char* cast154 = (unsigned char*)t146;
  unsigned char* ptr155 = &(cast154)[t153];
  struct std__basic_ostream_char__std__char_traits_char__* cast156 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr155;
  struct std__basic_ios_char__std__char_traits_char__* cast157 = (struct std__basic_ios_char__std__char_traits_char__*)cast156;
  char c158 = 10;
  char r159 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast157, c158);
  struct std__basic_ostream_char__std__char_traits_char__* r160 = std__ostream__put(t145, r159);
  struct std__basic_ostream_char__std__char_traits_char__* r161 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r160);
  __retval144 = r161;
  struct std__basic_ostream_char__std__char_traits_char__* t162 = __retval144;
  return t162;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v163) {
bb164:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this165;
  unsigned long __retval166;
  unsigned long __sz167;
  this165 = v163;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t168 = this165;
  unsigned long t169 = t168->_M_string_length;
  __sz167 = t169;
    unsigned long t170 = __sz167;
    unsigned long r171 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t168);
    _Bool c172 = ((t170 > r171)) ? 1 : 0;
    if (c172) {
      __builtin_unreachable();
    }
  unsigned long t173 = __sz167;
  __retval166 = t173;
  unsigned long t174 = __retval166;
  return t174;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v175) {
bb176:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this177;
  this177 = v175;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t178 = this177;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t178);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t178->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb179:
  int __retval180;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ tmp181;
  struct std__allocator_char_ ref_tmp0182;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str183;
  struct std__allocator_char_ ref_tmp1184;
  int c185 = 0;
  __retval180 = c185;
  char* cast186 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0182);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&tmp181, cast186, &ref_tmp0182);
  {
    std__allocator_char____allocator(&ref_tmp0182);
  }
    unsigned long c187 = 7;
    std__allocator_char___allocator_2(&ref_tmp1184);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&str183, &tmp181, c187, &ref_tmp1184);
    {
      std__allocator_char____allocator(&ref_tmp1184);
    }
      struct std__basic_ostream_char__std__char_traits_char__* r188 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str183);
      struct std__basic_ostream_char__std__char_traits_char__* r189 = std__ostream__operator___std__ostream_____(r188, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      unsigned long r190 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(&str183);
      unsigned long c191 = 10;
      _Bool c192 = ((r190 == c191)) ? 1 : 0;
      if (c192) {
      } else {
        char* cast193 = (char*)&(_str_1);
        char* c194 = _str_2;
        unsigned int c195 = 17;
        char* cast196 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast193, c194, c195, cast196);
      }
      int c197 = 0;
      __retval180 = c197;
      int t198 = __retval180;
      int ret_val199 = t198;
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str183);
      }
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&tmp181);
      }
      return ret_val199;
  int t200 = __retval180;
  return t200;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v201) {
bb202:
  struct std____new_allocator_char_* this203;
  this203 = v201;
  struct std____new_allocator_char_* t204 = this203;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v205) {
bb206:
  char* __r207;
  char* __retval208;
  __r207 = v205;
  char* t209 = __r207;
  __retval208 = t209;
  char* t210 = __retval208;
  return t210;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v211) {
bb212:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this213;
  char* __retval214;
  this213 = v211;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t215 = this213;
  char* cast216 = (char*)&(t215->field2._M_local_buf);
  char* r217 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast216);
  __retval214 = r217;
  char* t218 = __retval214;
  return t218;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v219, char* v220, struct std__allocator_char_* v221) {
bb222:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this223;
  char* __dat224;
  struct std__allocator_char_* __a225;
  this223 = v219;
  __dat224 = v220;
  __a225 = v221;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t226 = this223;
  struct std__allocator_char_* base227 = (struct std__allocator_char_*)((char *)t226 + 0);
  struct std__allocator_char_* t228 = __a225;
  std__allocator_char___allocator(base227, t228);
    char* t229 = __dat224;
    t226->_M_p = t229;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb230:
  _Bool __retval231;
    _Bool c232 = 0;
    __retval231 = c232;
    _Bool t233 = __retval231;
    return t233;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v234, char* v235) {
bb236:
  char* __c1237;
  char* __c2238;
  _Bool __retval239;
  __c1237 = v234;
  __c2238 = v235;
  char* t240 = __c1237;
  char t241 = *t240;
  int cast242 = (int)t241;
  char* t243 = __c2238;
  char t244 = *t243;
  int cast245 = (int)t244;
  _Bool c246 = ((cast242 == cast245)) ? 1 : 0;
  __retval239 = c246;
  _Bool t247 = __retval239;
  return t247;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v248) {
bb249:
  char* __p250;
  unsigned long __retval251;
  unsigned long __i252;
  __p250 = v248;
  unsigned long c253 = 0;
  __i252 = c253;
    char ref_tmp0254;
    while (1) {
      unsigned long t255 = __i252;
      char* t256 = __p250;
      char* ptr257 = &(t256)[t255];
      char c258 = 0;
      ref_tmp0254 = c258;
      _Bool r259 = __gnu_cxx__char_traits_char___eq(ptr257, &ref_tmp0254);
      _Bool u260 = !r259;
      if (!u260) break;
      unsigned long t261 = __i252;
      unsigned long u262 = t261 + 1;
      __i252 = u262;
    }
  unsigned long t263 = __i252;
  __retval251 = t263;
  unsigned long t264 = __retval251;
  return t264;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v265) {
bb266:
  char* __s267;
  unsigned long __retval268;
  __s267 = v265;
    _Bool r269 = std____is_constant_evaluated();
    if (r269) {
      char* t270 = __s267;
      unsigned long r271 = __gnu_cxx__char_traits_char___length(t270);
      __retval268 = r271;
      unsigned long t272 = __retval268;
      return t272;
    }
  char* t273 = __s267;
  unsigned long r274 = strlen(t273);
  __retval268 = r274;
  unsigned long t275 = __retval268;
  return t275;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v276, char* v277, struct std__random_access_iterator_tag v278) {
bb279:
  char* __first280;
  char* __last281;
  struct std__random_access_iterator_tag unnamed282;
  long __retval283;
  __first280 = v276;
  __last281 = v277;
  unnamed282 = v278;
  char* t284 = __last281;
  char* t285 = __first280;
  long diff286 = t284 - t285;
  __retval283 = diff286;
  long t287 = __retval283;
  return t287;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v288) {
bb289:
  char** unnamed290;
  struct std__random_access_iterator_tag __retval291;
  unnamed290 = v288;
  struct std__random_access_iterator_tag t292 = __retval291;
  return t292;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v293, char* v294) {
bb295:
  char* __first296;
  char* __last297;
  long __retval298;
  struct std__random_access_iterator_tag agg_tmp0299;
  __first296 = v293;
  __last297 = v294;
  char* t300 = __first296;
  char* t301 = __last297;
  struct std__random_access_iterator_tag r302 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first296);
  agg_tmp0299 = r302;
  struct std__random_access_iterator_tag t303 = agg_tmp0299;
  long r304 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t300, t301, t303);
  __retval298 = r304;
  long t305 = __retval298;
  return t305;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v306, char* v307) {
bb308:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this309;
  char* __p310;
  this309 = v306;
  __p310 = v307;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t311 = this309;
  char* t312 = __p310;
  t311->_M_dataplus._M_p = t312;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v313) {
bb314:
  struct std__allocator_char_* __a315;
  unsigned long __retval316;
  __a315 = v313;
  unsigned long c317 = -1;
  unsigned long c318 = 1;
  unsigned long b319 = c317 / c318;
  __retval316 = b319;
  unsigned long t320 = __retval316;
  return t320;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v321) {
bb322:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this323;
  struct std__allocator_char_* __retval324;
  this323 = v321;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t325 = this323;
  struct std__allocator_char_* base326 = (struct std__allocator_char_*)((char *)&(t325->_M_dataplus) + 0);
  __retval324 = base326;
  struct std__allocator_char_* t327 = __retval324;
  return t327;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v328, unsigned long* v329) {
bb330:
  unsigned long* __a331;
  unsigned long* __b332;
  unsigned long* __retval333;
  __a331 = v328;
  __b332 = v329;
    unsigned long* t334 = __b332;
    unsigned long t335 = *t334;
    unsigned long* t336 = __a331;
    unsigned long t337 = *t336;
    _Bool c338 = ((t335 < t337)) ? 1 : 0;
    if (c338) {
      unsigned long* t339 = __b332;
      __retval333 = t339;
      unsigned long* t340 = __retval333;
      return t340;
    }
  unsigned long* t341 = __a331;
  __retval333 = t341;
  unsigned long* t342 = __retval333;
  return t342;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v343) {
bb344:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this345;
  unsigned long __retval346;
  unsigned long __diffmax347;
  unsigned long __allocmax348;
  this345 = v343;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t349 = this345;
  unsigned long c350 = 9223372036854775807;
  __diffmax347 = c350;
  struct std__allocator_char_* r351 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t349);
  unsigned long r352 = std__allocator_traits_std__allocator_char_____max_size(r351);
  __allocmax348 = r352;
  unsigned long* r353 = unsigned_long_const__std__min_unsigned_long_(&__diffmax347, &__allocmax348);
  unsigned long t354 = *r353;
  unsigned long c355 = 1;
  unsigned long b356 = t354 - c355;
  __retval346 = b356;
  unsigned long t357 = __retval346;
  return t357;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v358) {
bb359:
  struct std____new_allocator_char_* this360;
  unsigned long __retval361;
  this360 = v358;
  struct std____new_allocator_char_* t362 = this360;
  unsigned long c363 = 9223372036854775807;
  unsigned long c364 = 1;
  unsigned long b365 = c363 / c364;
  __retval361 = b365;
  unsigned long t366 = __retval361;
  return t366;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v367, unsigned long v368, void* v369) {
bb370:
  struct std____new_allocator_char_* this371;
  unsigned long __n372;
  void* unnamed373;
  char* __retval374;
  this371 = v367;
  __n372 = v368;
  unnamed373 = v369;
  struct std____new_allocator_char_* t375 = this371;
    unsigned long t376 = __n372;
    unsigned long r377 = std____new_allocator_char____M_max_size___const(t375);
    _Bool c378 = ((t376 > r377)) ? 1 : 0;
    if (c378) {
        unsigned long t379 = __n372;
        unsigned long c380 = -1;
        unsigned long c381 = 1;
        unsigned long b382 = c380 / c381;
        _Bool c383 = ((t379 > b382)) ? 1 : 0;
        if (c383) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c384 = 1;
    unsigned long c385 = 16;
    _Bool c386 = ((c384 > c385)) ? 1 : 0;
    if (c386) {
      unsigned long __al387;
      unsigned long c388 = 1;
      __al387 = c388;
      unsigned long t389 = __n372;
      unsigned long c390 = 1;
      unsigned long b391 = t389 * c390;
      unsigned long t392 = __al387;
      void* r393 = operator_new_2(b391, t392);
      char* cast394 = (char*)r393;
      __retval374 = cast394;
      char* t395 = __retval374;
      return t395;
    }
  unsigned long t396 = __n372;
  unsigned long c397 = 1;
  unsigned long b398 = t396 * c397;
  void* r399 = operator_new(b398);
  char* cast400 = (char*)r399;
  __retval374 = cast400;
  char* t401 = __retval374;
  return t401;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v402, unsigned long v403) {
bb404:
  struct std__allocator_char_* this405;
  unsigned long __n406;
  char* __retval407;
  this405 = v402;
  __n406 = v403;
  struct std__allocator_char_* t408 = this405;
    _Bool r409 = std____is_constant_evaluated();
    if (r409) {
        unsigned long t410 = __n406;
        unsigned long c411 = 1;
        unsigned long ovr412;
        _Bool ovf413 = __builtin_mul_overflow(t410, c411, &ovr412);
        __n406 = ovr412;
        if (ovf413) {
          std____throw_bad_array_new_length();
        }
      unsigned long t414 = __n406;
      void* r415 = operator_new(t414);
      char* cast416 = (char*)r415;
      __retval407 = cast416;
      char* t417 = __retval407;
      return t417;
    }
  struct std____new_allocator_char_* base418 = (struct std____new_allocator_char_*)((char *)t408 + 0);
  unsigned long t419 = __n406;
  void* c420 = ((void*)0);
  char* r421 = std____new_allocator_char___allocate(base418, t419, c420);
  __retval407 = r421;
  char* t422 = __retval407;
  return t422;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v423, unsigned long v424) {
bb425:
  struct std__allocator_char_* __a426;
  unsigned long __n427;
  char* __retval428;
  __a426 = v423;
  __n427 = v424;
  struct std__allocator_char_* t429 = __a426;
  unsigned long t430 = __n427;
  char* r431 = std__allocator_char___allocate(t429, t430);
  __retval428 = r431;
  char* t432 = __retval428;
  return t432;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v433, unsigned long v434) {
bb435:
  struct std__allocator_char_* __a436;
  unsigned long __n437;
  char* __retval438;
  char* __p439;
  __a436 = v433;
  __n437 = v434;
  struct std__allocator_char_* t440 = __a436;
  unsigned long t441 = __n437;
  char* r442 = std__allocator_traits_std__allocator_char_____allocate(t440, t441);
  __p439 = r442;
  char* t443 = __p439;
  __retval438 = t443;
  char* t444 = __retval438;
  return t444;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v445) {
bb446:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this447;
  struct std__allocator_char_* __retval448;
  this447 = v445;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t449 = this447;
  struct std__allocator_char_* base450 = (struct std__allocator_char_*)((char *)&(t449->_M_dataplus) + 0);
  __retval448 = base450;
  struct std__allocator_char_* t451 = __retval448;
  return t451;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v452, unsigned long* v453, unsigned long v454) {
bb455:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this456;
  unsigned long* __capacity457;
  unsigned long __old_capacity458;
  char* __retval459;
  this456 = v452;
  __capacity457 = v453;
  __old_capacity458 = v454;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t460 = this456;
    unsigned long* t461 = __capacity457;
    unsigned long t462 = *t461;
    unsigned long r463 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t460);
    _Bool c464 = ((t462 > r463)) ? 1 : 0;
    if (c464) {
      char* cast465 = (char*)&(_str_4);
      std____throw_length_error(cast465);
    }
    unsigned long* t466 = __capacity457;
    unsigned long t467 = *t466;
    unsigned long t468 = __old_capacity458;
    _Bool c469 = ((t467 > t468)) ? 1 : 0;
    _Bool ternary470;
    if (c469) {
      unsigned long* t471 = __capacity457;
      unsigned long t472 = *t471;
      unsigned long c473 = 2;
      unsigned long t474 = __old_capacity458;
      unsigned long b475 = c473 * t474;
      _Bool c476 = ((t472 < b475)) ? 1 : 0;
      ternary470 = (_Bool)c476;
    } else {
      _Bool c477 = 0;
      ternary470 = (_Bool)c477;
    }
    if (ternary470) {
      unsigned long c478 = 2;
      unsigned long t479 = __old_capacity458;
      unsigned long b480 = c478 * t479;
      unsigned long* t481 = __capacity457;
      *t481 = b480;
        unsigned long* t482 = __capacity457;
        unsigned long t483 = *t482;
        unsigned long r484 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t460);
        _Bool c485 = ((t483 > r484)) ? 1 : 0;
        if (c485) {
          unsigned long r486 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t460);
          unsigned long* t487 = __capacity457;
          *t487 = r486;
        }
    }
  struct std__allocator_char_* r488 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t460);
  unsigned long* t489 = __capacity457;
  unsigned long t490 = *t489;
  unsigned long c491 = 1;
  unsigned long b492 = t490 + c491;
  char* r493 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r488, b492);
  __retval459 = r493;
  char* t494 = __retval459;
  return t494;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v495, unsigned long v496) {
bb497:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this498;
  unsigned long __capacity499;
  this498 = v495;
  __capacity499 = v496;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t500 = this498;
  unsigned long t501 = __capacity499;
  t500->field2._M_allocated_capacity = t501;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb502:
  _Bool __retval503;
    _Bool c504 = 0;
    __retval503 = c504;
    _Bool t505 = __retval503;
    return t505;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v506) {
bb507:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this508;
  this508 = v506;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t509 = this508;
    _Bool r510 = std__is_constant_evaluated();
    if (r510) {
        unsigned long __i511;
        unsigned long c512 = 0;
        __i511 = c512;
        while (1) {
          unsigned long t514 = __i511;
          unsigned long c515 = 15;
          _Bool c516 = ((t514 <= c515)) ? 1 : 0;
          if (!c516) break;
          char c517 = 0;
          unsigned long t518 = __i511;
          t509->field2._M_local_buf[t518] = c517;
        for_step513: ;
          unsigned long t519 = __i511;
          unsigned long u520 = t519 + 1;
          __i511 = u520;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v521, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v522) {
bb523:
  struct _Guard* this524;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s525;
  this524 = v521;
  __s525 = v522;
  struct _Guard* t526 = this524;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t527 = __s525;
  t526->_M_guarded = t527;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v528, char* v529) {
bb530:
  char* __location531;
  char* __args532;
  char* __retval533;
  void* __loc534;
  __location531 = v528;
  __args532 = v529;
  char* t535 = __location531;
  void* cast536 = (void*)t535;
  __loc534 = cast536;
    void* t537 = __loc534;
    char* cast538 = (char*)t537;
    char* t539 = __args532;
    char t540 = *t539;
    *cast538 = t540;
    __retval533 = cast538;
    char* t541 = __retval533;
    return t541;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v542, char* v543) {
bb544:
  char* __c1545;
  char* __c2546;
  __c1545 = v542;
  __c2546 = v543;
    _Bool r547 = std____is_constant_evaluated();
    if (r547) {
      char* t548 = __c1545;
      char* t549 = __c2546;
      char* r550 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t548, t549);
    } else {
      char* t551 = __c2546;
      char t552 = *t551;
      char* t553 = __c1545;
      *t553 = t552;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v554, char* v555, unsigned long v556) {
bb557:
  char* __s1558;
  char* __s2559;
  unsigned long __n560;
  char* __retval561;
  __s1558 = v554;
  __s2559 = v555;
  __n560 = v556;
    unsigned long t562 = __n560;
    unsigned long c563 = 0;
    _Bool c564 = ((t562 == c563)) ? 1 : 0;
    if (c564) {
      char* t565 = __s1558;
      __retval561 = t565;
      char* t566 = __retval561;
      return t566;
    }
    _Bool r567 = std____is_constant_evaluated();
    if (r567) {
        unsigned long __i568;
        unsigned long c569 = 0;
        __i568 = c569;
        while (1) {
          unsigned long t571 = __i568;
          unsigned long t572 = __n560;
          _Bool c573 = ((t571 < t572)) ? 1 : 0;
          if (!c573) break;
          char* t574 = __s1558;
          unsigned long t575 = __i568;
          char* ptr576 = &(t574)[t575];
          unsigned long t577 = __i568;
          char* t578 = __s2559;
          char* ptr579 = &(t578)[t577];
          char* r580 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr576, ptr579);
        for_step570: ;
          unsigned long t581 = __i568;
          unsigned long u582 = t581 + 1;
          __i568 = u582;
        }
      char* t583 = __s1558;
      __retval561 = t583;
      char* t584 = __retval561;
      return t584;
    }
  char* t585 = __s1558;
  void* cast586 = (void*)t585;
  char* t587 = __s2559;
  void* cast588 = (void*)t587;
  unsigned long t589 = __n560;
  unsigned long c590 = 1;
  unsigned long b591 = t589 * c590;
  void* r592 = memcpy(cast586, cast588, b591);
  char* t593 = __s1558;
  __retval561 = t593;
  char* t594 = __retval561;
  return t594;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v595, char* v596, unsigned long v597) {
bb598:
  char* __s1599;
  char* __s2600;
  unsigned long __n601;
  char* __retval602;
  __s1599 = v595;
  __s2600 = v596;
  __n601 = v597;
    unsigned long t603 = __n601;
    unsigned long c604 = 0;
    _Bool c605 = ((t603 == c604)) ? 1 : 0;
    if (c605) {
      char* t606 = __s1599;
      __retval602 = t606;
      char* t607 = __retval602;
      return t607;
    }
    _Bool r608 = std____is_constant_evaluated();
    if (r608) {
      char* t609 = __s1599;
      char* t610 = __s2600;
      unsigned long t611 = __n601;
      char* r612 = __gnu_cxx__char_traits_char___copy(t609, t610, t611);
      __retval602 = r612;
      char* t613 = __retval602;
      return t613;
    }
  char* t614 = __s1599;
  void* cast615 = (void*)t614;
  char* t616 = __s2600;
  void* cast617 = (void*)t616;
  unsigned long t618 = __n601;
  void* r619 = memcpy(cast615, cast617, t618);
  char* cast620 = (char*)r619;
  __retval602 = cast620;
  char* t621 = __retval602;
  return t621;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v622, char* v623, unsigned long v624) {
bb625:
  char* __d626;
  char* __s627;
  unsigned long __n628;
  __d626 = v622;
  __s627 = v623;
  __n628 = v624;
    unsigned long t629 = __n628;
    unsigned long c630 = 1;
    _Bool c631 = ((t629 == c630)) ? 1 : 0;
    if (c631) {
      char* t632 = __d626;
      char* t633 = __s627;
      std__char_traits_char___assign(t632, t633);
    } else {
      char* t634 = __d626;
      char* t635 = __s627;
      unsigned long t636 = __n628;
      char* r637 = std__char_traits_char___copy(t634, t635, t636);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v638) {
bb639:
  char* __it640;
  char* __retval641;
  __it640 = v638;
  char* t642 = __it640;
  __retval641 = t642;
  char* t643 = __retval641;
  return t643;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v644, char* v645, char* v646) {
bb647:
  char* __p648;
  char* __k1649;
  char* __k2650;
  __p648 = v644;
  __k1649 = v645;
  __k2650 = v646;
    char* t651 = __p648;
    char* t652 = __k1649;
    char* r653 = char_const__std____niter_base_char_const__(t652);
    char* t654 = __k2650;
    char* t655 = __k1649;
    long diff656 = t654 - t655;
    unsigned long cast657 = (unsigned long)diff656;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t651, r653, cast657);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v658) {
bb659:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this660;
  char* __retval661;
  this660 = v658;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t662 = this660;
  char* t663 = t662->_M_dataplus._M_p;
  __retval661 = t663;
  char* t664 = __retval661;
  return t664;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v665, unsigned long v666) {
bb667:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this668;
  unsigned long __length669;
  this668 = v665;
  __length669 = v666;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t670 = this668;
  unsigned long t671 = __length669;
  t670->_M_string_length = t671;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v672, unsigned long v673) {
bb674:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this675;
  unsigned long __n676;
  char ref_tmp0677;
  this675 = v672;
  __n676 = v673;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t678 = this675;
  unsigned long t679 = __n676;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t678, t679);
  unsigned long t680 = __n676;
  char* r681 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t678);
  char* ptr682 = &(r681)[t680];
  char c683 = 0;
  ref_tmp0677 = c683;
  std__char_traits_char___assign(ptr682, &ref_tmp0677);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v684) {
bb685:
  struct _Guard* this686;
  this686 = v684;
  struct _Guard* t687 = this686;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t688 = t687->_M_guarded;
    _Bool cast689 = (_Bool)t688;
    if (cast689) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t690 = t687->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t690);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v691, char* v692, char* v693, struct std__forward_iterator_tag v694) {
bb695:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this696;
  char* __beg697;
  char* __end698;
  struct std__forward_iterator_tag unnamed699;
  unsigned long __dnew700;
  struct _Guard __guard701;
  this696 = v691;
  __beg697 = v692;
  __end698 = v693;
  unnamed699 = v694;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t702 = this696;
  char* t703 = __beg697;
  char* t704 = __end698;
  long r705 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t703, t704);
  unsigned long cast706 = (unsigned long)r705;
  __dnew700 = cast706;
    unsigned long t707 = __dnew700;
    unsigned long c708 = 15;
    _Bool c709 = ((t707 > c708)) ? 1 : 0;
    if (c709) {
      unsigned long c710 = 0;
      char* r711 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t702, &__dnew700, c710);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t702, r711);
      unsigned long t712 = __dnew700;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t702, t712);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t702);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard701, t702);
    char* r713 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t702);
    char* t714 = __beg697;
    char* t715 = __end698;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r713, t714, t715);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c716 = ((void*)0);
    __guard701._M_guarded = c716;
    unsigned long t717 = __dnew700;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t702, t717);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard701);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v718) {
bb719:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this720;
  this720 = v718;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t721 = this720;
  {
    struct std__allocator_char_* base722 = (struct std__allocator_char_*)((char *)t721 + 0);
    std__allocator_char____allocator(base722);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v723, struct std____new_allocator_char_* v724) {
bb725:
  struct std____new_allocator_char_* this726;
  struct std____new_allocator_char_* unnamed727;
  this726 = v723;
  unnamed727 = v724;
  struct std____new_allocator_char_* t728 = this726;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v729, struct std__allocator_char_* v730) {
bb731:
  struct std__allocator_char_* this732;
  struct std__allocator_char_* __a733;
  this732 = v729;
  __a733 = v730;
  struct std__allocator_char_* t734 = this732;
  struct std____new_allocator_char_* base735 = (struct std____new_allocator_char_*)((char *)t734 + 0);
  struct std__allocator_char_* t736 = __a733;
  struct std____new_allocator_char_* base737 = (struct std____new_allocator_char_*)((char *)t736 + 0);
  std____new_allocator_char_____new_allocator(base735, base737);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v738) {
bb739:
  char* __r740;
  char* __retval741;
  __r740 = v738;
  char* t742 = __r740;
  __retval741 = t742;
  char* t743 = __retval741;
  return t743;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v744) {
bb745:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this746;
  char* __retval747;
  this746 = v744;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t748 = this746;
  char* cast749 = (char*)&(t748->field2._M_local_buf);
  char* r750 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast749);
  __retval747 = r750;
  char* t751 = __retval747;
  return t751;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v752) {
bb753:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this754;
  _Bool __retval755;
  this754 = v752;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t756 = this754;
    char* r757 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t756);
    char* r758 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t756);
    _Bool c759 = ((r757 == r758)) ? 1 : 0;
    if (c759) {
        unsigned long t760 = t756->_M_string_length;
        unsigned long c761 = 15;
        _Bool c762 = ((t760 > c761)) ? 1 : 0;
        if (c762) {
          __builtin_unreachable();
        }
      _Bool c763 = 1;
      __retval755 = c763;
      _Bool t764 = __retval755;
      return t764;
    }
  _Bool c765 = 0;
  __retval755 = c765;
  _Bool t766 = __retval755;
  return t766;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v767, char* v768, unsigned long v769) {
bb770:
  struct std____new_allocator_char_* this771;
  char* __p772;
  unsigned long __n773;
  this771 = v767;
  __p772 = v768;
  __n773 = v769;
  struct std____new_allocator_char_* t774 = this771;
    unsigned long c775 = 1;
    unsigned long c776 = 16;
    _Bool c777 = ((c775 > c776)) ? 1 : 0;
    if (c777) {
      char* t778 = __p772;
      void* cast779 = (void*)t778;
      unsigned long t780 = __n773;
      unsigned long c781 = 1;
      unsigned long b782 = t780 * c781;
      unsigned long c783 = 1;
      operator_delete_3(cast779, b782, c783);
      return;
    }
  char* t784 = __p772;
  void* cast785 = (void*)t784;
  unsigned long t786 = __n773;
  unsigned long c787 = 1;
  unsigned long b788 = t786 * c787;
  operator_delete_2(cast785, b788);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v789, char* v790, unsigned long v791) {
bb792:
  struct std__allocator_char_* this793;
  char* __p794;
  unsigned long __n795;
  this793 = v789;
  __p794 = v790;
  __n795 = v791;
  struct std__allocator_char_* t796 = this793;
    _Bool r797 = std____is_constant_evaluated();
    if (r797) {
      char* t798 = __p794;
      void* cast799 = (void*)t798;
      operator_delete(cast799);
      return;
    }
  struct std____new_allocator_char_* base800 = (struct std____new_allocator_char_*)((char *)t796 + 0);
  char* t801 = __p794;
  unsigned long t802 = __n795;
  std____new_allocator_char___deallocate(base800, t801, t802);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v803, char* v804, unsigned long v805) {
bb806:
  struct std__allocator_char_* __a807;
  char* __p808;
  unsigned long __n809;
  __a807 = v803;
  __p808 = v804;
  __n809 = v805;
  struct std__allocator_char_* t810 = __a807;
  char* t811 = __p808;
  unsigned long t812 = __n809;
  std__allocator_char___deallocate(t810, t811, t812);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v813, unsigned long v814) {
bb815:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this816;
  unsigned long __size817;
  this816 = v813;
  __size817 = v814;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t818 = this816;
  struct std__allocator_char_* r819 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t818);
  char* r820 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t818);
  unsigned long t821 = __size817;
  unsigned long c822 = 1;
  unsigned long b823 = t821 + c822;
  std__allocator_traits_std__allocator_char_____deallocate(r819, r820, b823);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v824) {
bb825:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this826;
  this826 = v824;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t827 = this826;
    _Bool r828 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t827);
    _Bool u829 = !r828;
    if (u829) {
      unsigned long t830 = t827->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t827, t830);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v831, unsigned long v832, char* v833) {
bb834:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this835;
  unsigned long __pos836;
  char* __s837;
  unsigned long __retval838;
  this835 = v831;
  __pos836 = v832;
  __s837 = v833;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t839 = this835;
    unsigned long t840 = __pos836;
    unsigned long r841 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t839);
    _Bool c842 = ((t840 > r841)) ? 1 : 0;
    if (c842) {
      char* cast843 = (char*)&(_str_6);
      char* t844 = __s837;
      unsigned long t845 = __pos836;
      unsigned long r846 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t839);
      std____throw_out_of_range_fmt(cast843, t844, t845, r846);
    }
  unsigned long t847 = __pos836;
  __retval838 = t847;
  unsigned long t848 = __retval838;
  return t848;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v849, unsigned long v850, unsigned long v851) {
bb852:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this853;
  unsigned long __pos854;
  unsigned long __off855;
  unsigned long __retval856;
  _Bool __testoff857;
  this853 = v849;
  __pos854 = v850;
  __off855 = v851;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t858 = this853;
  unsigned long t859 = __off855;
  unsigned long r860 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t858);
  unsigned long t861 = __pos854;
  unsigned long b862 = r860 - t861;
  _Bool c863 = ((t859 < b862)) ? 1 : 0;
  __testoff857 = c863;
  _Bool t864 = __testoff857;
  unsigned long ternary865;
  if (t864) {
    unsigned long t866 = __off855;
    ternary865 = (unsigned long)t866;
  } else {
    unsigned long r867 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t858);
    unsigned long t868 = __pos854;
    unsigned long b869 = r867 - t868;
    ternary865 = (unsigned long)b869;
  }
  __retval856 = ternary865;
  unsigned long t870 = __retval856;
  return t870;
}

