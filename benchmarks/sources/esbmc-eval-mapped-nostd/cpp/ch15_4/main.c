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
char _str[4] = "one";
char _str_1[4] = "two";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[22] = "Before swap:\n first: ";
char _str_3[10] = "\nsecond: ";
char _str_4[23] = "\n\nAfter swap:\n first: ";
char _str_5[50] = "basic_string: construction from null is not valid";
char _str_6[24] = "basic_string::_M_create";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
void void_std____alloc_on_swap_std__allocator_char___(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void __gnu_cxx____alloc_traits_std__allocator_char___char____S_on_swap(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____swap(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
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

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v39, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v40) {
bb41:
  struct std__basic_ostream_char__std__char_traits_char__* __os42;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str43;
  struct std__basic_ostream_char__std__char_traits_char__* __retval44;
  __os42 = v39;
  __str43 = v40;
  struct std__basic_ostream_char__std__char_traits_char__* t45 = __os42;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t46 = __str43;
  char* r47 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t46);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t48 = __str43;
  unsigned long r49 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t48);
  long cast50 = (long)r49;
  struct std__basic_ostream_char__std__char_traits_char__* r51 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t45, r47, cast50);
  __retval44 = r51;
  struct std__basic_ostream_char__std__char_traits_char__* t52 = __retval44;
  return t52;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v53, int v54) {
bb55:
  int __a56;
  int __b57;
  int __retval58;
  __a56 = v53;
  __b57 = v54;
  int t59 = __a56;
  int t60 = __b57;
  int b61 = t59 | t60;
  __retval58 = b61;
  int t62 = __retval58;
  return t62;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v63) {
bb64:
  struct std__basic_ios_char__std__char_traits_char__* this65;
  int __retval66;
  this65 = v63;
  struct std__basic_ios_char__std__char_traits_char__* t67 = this65;
  struct std__ios_base* base68 = (struct std__ios_base*)((char *)t67 + 0);
  int t69 = base68->_M_streambuf_state;
  __retval66 = t69;
  int t70 = __retval66;
  return t70;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v71, int v72) {
bb73:
  struct std__basic_ios_char__std__char_traits_char__* this74;
  int __state75;
  this74 = v71;
  __state75 = v72;
  struct std__basic_ios_char__std__char_traits_char__* t76 = this74;
  int r77 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t76);
  int t78 = __state75;
  int r79 = std__operator_(r77, t78);
  std__basic_ios_char__std__char_traits_char_____clear(t76, r79);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v80, char* v81) {
bb82:
  struct std__basic_ostream_char__std__char_traits_char__* __out83;
  char* __s84;
  struct std__basic_ostream_char__std__char_traits_char__* __retval85;
  __out83 = v80;
  __s84 = v81;
    char* t86 = __s84;
    _Bool cast87 = (_Bool)t86;
    _Bool u88 = !cast87;
    if (u88) {
      struct std__basic_ostream_char__std__char_traits_char__* t89 = __out83;
      void** v90 = (void**)t89;
      void* v91 = *((void**)v90);
      unsigned char* cast92 = (unsigned char*)v91;
      long c93 = -24;
      unsigned char* ptr94 = &(cast92)[c93];
      long* cast95 = (long*)ptr94;
      long t96 = *cast95;
      unsigned char* cast97 = (unsigned char*)t89;
      unsigned char* ptr98 = &(cast97)[t96];
      struct std__basic_ostream_char__std__char_traits_char__* cast99 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr98;
      struct std__basic_ios_char__std__char_traits_char__* cast100 = (struct std__basic_ios_char__std__char_traits_char__*)cast99;
      int t101 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast100, t101);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t102 = __out83;
      char* t103 = __s84;
      char* t104 = __s84;
      unsigned long r105 = std__char_traits_char___length(t104);
      long cast106 = (long)r105;
      struct std__basic_ostream_char__std__char_traits_char__* r107 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t102, t103, cast106);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t108 = __out83;
  __retval85 = t108;
  struct std__basic_ostream_char__std__char_traits_char__* t109 = __retval85;
  return t109;
}

// function: _ZSt15__alloc_on_swapISaIcEEvRT_S2_
void void_std____alloc_on_swap_std__allocator_char___(struct std__allocator_char_* v110, struct std__allocator_char_* v111) {
bb112:
  struct std__allocator_char_* __one113;
  struct std__allocator_char_* __two114;
  __one113 = v110;
  __two114 = v111;
  return;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE10_S_on_swapERS1_S3_
void __gnu_cxx____alloc_traits_std__allocator_char___char____S_on_swap(struct std__allocator_char_* v115, struct std__allocator_char_* v116) {
bb117:
  struct std__allocator_char_* __a118;
  struct std__allocator_char_* __b119;
  __a118 = v115;
  __b119 = v116;
  struct std__allocator_char_* t120 = __a118;
  struct std__allocator_char_* t121 = __b119;
  void_std____alloc_on_swap_std__allocator_char___(t120, t121);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v122) {
bb123:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this124;
  unsigned long __retval125;
  unsigned long __sz126;
  this124 = v122;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t127 = this124;
  unsigned long t128 = t127->_M_string_length;
  __sz126 = t128;
    unsigned long t129 = __sz126;
    unsigned long r130 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t127);
    _Bool c131 = ((t129 > r130)) ? 1 : 0;
    if (c131) {
      __builtin_unreachable();
    }
  unsigned long t132 = __sz126;
  __retval125 = t132;
  unsigned long t133 = __retval125;
  return t133;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v134) {
bb135:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this136;
  unsigned long __retval137;
  this136 = v134;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t138 = this136;
  unsigned long r139 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t138);
  __retval137 = r139;
  unsigned long t140 = __retval137;
  return t140;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4swapERS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____swap(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v141, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v142) {
bb143:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this144;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s145;
  unsigned long __tmp_length146;
  this144 = v141;
  __s145 = v142;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t147 = this144;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t148 = __s145;
    _Bool c149 = ((t147 == t148)) ? 1 : 0;
    if (c149) {
      return;
    }
  struct std__allocator_char_* r150 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t147);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t151 = __s145;
  struct std__allocator_char_* r152 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t151);
  __gnu_cxx____alloc_traits_std__allocator_char___char____S_on_swap(r150, r152);
    _Bool r153 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t147);
    if (r153) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t154 = __s145;
        _Bool r155 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t154);
        if (r155) {
            unsigned long r156 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t147);
            _Bool cast157 = (_Bool)r156;
            _Bool ternary158;
            if (cast157) {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t159 = __s145;
              unsigned long r160 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t159);
              _Bool cast161 = (_Bool)r160;
              ternary158 = (_Bool)cast161;
            } else {
              _Bool c162 = 0;
              ternary158 = (_Bool)c162;
            }
            if (ternary158) {
              char __tmp_data163[16];
              char* cast164 = (char*)&(__tmp_data163);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t165 = __s145;
              char* cast166 = (char*)&(t165->field2._M_local_buf);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t167 = __s145;
              unsigned long r168 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t167);
              unsigned long c169 = 1;
              unsigned long b170 = r168 + c169;
              char* r171 = std__char_traits_char___copy(cast164, cast166, b170);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t172 = __s145;
              char* cast173 = (char*)&(t172->field2._M_local_buf);
              char* cast174 = (char*)&(t147->field2._M_local_buf);
              unsigned long r175 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t147);
              unsigned long c176 = 1;
              unsigned long b177 = r175 + c176;
              char* r178 = std__char_traits_char___copy(cast173, cast174, b177);
              char* cast179 = (char*)&(t147->field2._M_local_buf);
              char* cast180 = (char*)&(__tmp_data163);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t181 = __s145;
              unsigned long r182 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t181);
              unsigned long c183 = 1;
              unsigned long b184 = r182 + c183;
              char* r185 = std__char_traits_char___copy(cast179, cast180, b184);
            } else {
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t186 = __s145;
                unsigned long r187 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t186);
                _Bool cast188 = (_Bool)r187;
                if (cast188) {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t147);
                  char* cast189 = (char*)&(t147->field2._M_local_buf);
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t190 = __s145;
                  char* cast191 = (char*)&(t190->field2._M_local_buf);
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t192 = __s145;
                  unsigned long r193 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t192);
                  unsigned long c194 = 1;
                  unsigned long b195 = r193 + c194;
                  char* r196 = std__char_traits_char___copy(cast189, cast191, b195);
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t197 = __s145;
                  unsigned long r198 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t197);
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t147, r198);
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t199 = __s145;
                  unsigned long c200 = 0;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t199, c200);
                  return;
                } else {
                    unsigned long r201 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t147);
                    _Bool cast202 = (_Bool)r201;
                    if (cast202) {
                      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t203 = __s145;
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t203);
                      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t204 = __s145;
                      char* cast205 = (char*)&(t204->field2._M_local_buf);
                      char* cast206 = (char*)&(t147->field2._M_local_buf);
                      unsigned long r207 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t147);
                      unsigned long c208 = 1;
                      unsigned long b209 = r207 + c208;
                      char* r210 = std__char_traits_char___copy(cast205, cast206, b209);
                      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t211 = __s145;
                      unsigned long r212 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t147);
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t211, r212);
                      unsigned long c213 = 0;
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t147, c213);
                      return;
                    }
                }
            }
        } else {
          unsigned long __tmp_capacity214;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t215 = __s145;
          unsigned long t216 = t215->field2._M_allocated_capacity;
          __tmp_capacity214 = t216;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t217 = __s145;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t217);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t218 = __s145;
          char* cast219 = (char*)&(t218->field2._M_local_buf);
          char* cast220 = (char*)&(t147->field2._M_local_buf);
          unsigned long r221 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t147);
          unsigned long c222 = 1;
          unsigned long b223 = r221 + c222;
          char* r224 = std__char_traits_char___copy(cast219, cast220, b223);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t225 = __s145;
          char* r226 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t225);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t147, r226);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t227 = __s145;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t228 = __s145;
          char* cast229 = (char*)&(t228->field2._M_local_buf);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t227, cast229);
          unsigned long t230 = __tmp_capacity214;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t147, t230);
        }
    } else {
      unsigned long __tmp_capacity231;
      unsigned long t232 = t147->field2._M_allocated_capacity;
      __tmp_capacity231 = t232;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t233 = __s145;
        _Bool r234 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t233);
        if (r234) {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t147);
          char* cast235 = (char*)&(t147->field2._M_local_buf);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t236 = __s145;
          char* cast237 = (char*)&(t236->field2._M_local_buf);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t238 = __s145;
          unsigned long r239 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t238);
          unsigned long c240 = 1;
          unsigned long b241 = r239 + c240;
          char* r242 = std__char_traits_char___copy(cast235, cast237, b241);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t243 = __s145;
          char* r244 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t147);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t243, r244);
          char* cast245 = (char*)&(t147->field2._M_local_buf);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t147, cast245);
        } else {
          char* __tmp_ptr246;
          char* r247 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t147);
          __tmp_ptr246 = r247;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t248 = __s145;
          char* r249 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t248);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t147, r249);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t250 = __s145;
          char* t251 = __tmp_ptr246;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t250, t251);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t252 = __s145;
          unsigned long t253 = t252->field2._M_allocated_capacity;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t147, t253);
        }
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t254 = __s145;
      unsigned long t255 = __tmp_capacity231;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t254, t255);
    }
  unsigned long r256 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t147);
  __tmp_length146 = r256;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t257 = __s145;
  unsigned long r258 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t257);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t147, r258);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t259 = __s145;
  unsigned long t260 = __tmp_length146;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t259, t260);
  return;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v261, void* v262) {
bb263:
  struct std__basic_ostream_char__std__char_traits_char__* this264;
  void* __pf265;
  struct std__basic_ostream_char__std__char_traits_char__* __retval266;
  this264 = v261;
  __pf265 = v262;
  struct std__basic_ostream_char__std__char_traits_char__* t267 = this264;
  void* t268 = __pf265;
  struct std__basic_ostream_char__std__char_traits_char__* r269 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t268)(t267);
  __retval266 = r269;
  struct std__basic_ostream_char__std__char_traits_char__* t270 = __retval266;
  return t270;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v271) {
bb272:
  struct std__basic_ostream_char__std__char_traits_char__* __os273;
  struct std__basic_ostream_char__std__char_traits_char__* __retval274;
  __os273 = v271;
  struct std__basic_ostream_char__std__char_traits_char__* t275 = __os273;
  struct std__basic_ostream_char__std__char_traits_char__* r276 = std__ostream__flush(t275);
  __retval274 = r276;
  struct std__basic_ostream_char__std__char_traits_char__* t277 = __retval274;
  return t277;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v278) {
bb279:
  struct std__ctype_char_* __f280;
  struct std__ctype_char_* __retval281;
  __f280 = v278;
    struct std__ctype_char_* t282 = __f280;
    _Bool cast283 = (_Bool)t282;
    _Bool u284 = !cast283;
    if (u284) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t285 = __f280;
  __retval281 = t285;
  struct std__ctype_char_* t286 = __retval281;
  return t286;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v287, char v288) {
bb289:
  struct std__ctype_char_* this290;
  char __c291;
  char __retval292;
  this290 = v287;
  __c291 = v288;
  struct std__ctype_char_* t293 = this290;
    char t294 = t293->_M_widen_ok;
    _Bool cast295 = (_Bool)t294;
    if (cast295) {
      char t296 = __c291;
      unsigned char cast297 = (unsigned char)t296;
      unsigned long cast298 = (unsigned long)cast297;
      char t299 = t293->_M_widen[cast298];
      __retval292 = t299;
      char t300 = __retval292;
      return t300;
    }
  std__ctype_char____M_widen_init___const(t293);
  char t301 = __c291;
  void** v302 = (void**)t293;
  void* v303 = *((void**)v302);
  char vcall306 = (char)__VERIFIER_virtual_call_char_char(t293, 6, t301);
  __retval292 = vcall306;
  char t307 = __retval292;
  return t307;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v308, char v309) {
bb310:
  struct std__basic_ios_char__std__char_traits_char__* this311;
  char __c312;
  char __retval313;
  this311 = v308;
  __c312 = v309;
  struct std__basic_ios_char__std__char_traits_char__* t314 = this311;
  struct std__ctype_char_* t315 = t314->_M_ctype;
  struct std__ctype_char_* r316 = std__ctype_char__const__std____check_facet_std__ctype_char___(t315);
  char t317 = __c312;
  char r318 = std__ctype_char___widen_char__const(r316, t317);
  __retval313 = r318;
  char t319 = __retval313;
  return t319;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v320) {
bb321:
  struct std__basic_ostream_char__std__char_traits_char__* __os322;
  struct std__basic_ostream_char__std__char_traits_char__* __retval323;
  __os322 = v320;
  struct std__basic_ostream_char__std__char_traits_char__* t324 = __os322;
  struct std__basic_ostream_char__std__char_traits_char__* t325 = __os322;
  void** v326 = (void**)t325;
  void* v327 = *((void**)v326);
  unsigned char* cast328 = (unsigned char*)v327;
  long c329 = -24;
  unsigned char* ptr330 = &(cast328)[c329];
  long* cast331 = (long*)ptr330;
  long t332 = *cast331;
  unsigned char* cast333 = (unsigned char*)t325;
  unsigned char* ptr334 = &(cast333)[t332];
  struct std__basic_ostream_char__std__char_traits_char__* cast335 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr334;
  struct std__basic_ios_char__std__char_traits_char__* cast336 = (struct std__basic_ios_char__std__char_traits_char__*)cast335;
  char c337 = 10;
  char r338 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast336, c337);
  struct std__basic_ostream_char__std__char_traits_char__* r339 = std__ostream__put(t324, r338);
  struct std__basic_ostream_char__std__char_traits_char__* r340 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r339);
  __retval323 = r340;
  struct std__basic_ostream_char__std__char_traits_char__* t341 = __retval323;
  return t341;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v342) {
bb343:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this344;
  this344 = v342;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t345 = this344;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t345);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t345->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb346:
  int __retval347;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ first348;
  struct std__allocator_char_ ref_tmp0349;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ second350;
  struct std__allocator_char_ ref_tmp1351;
  int c352 = 0;
  __retval347 = c352;
  char* cast353 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0349);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&first348, cast353, &ref_tmp0349);
  {
    std__allocator_char____allocator(&ref_tmp0349);
  }
    char* cast354 = (char*)&(_str_1);
    std__allocator_char___allocator_2(&ref_tmp1351);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&second350, cast354, &ref_tmp1351);
    {
      std__allocator_char____allocator(&ref_tmp1351);
    }
      char* cast355 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* r356 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast355);
      struct std__basic_ostream_char__std__char_traits_char__* r357 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r356, &first348);
      char* cast358 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* r359 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r357, cast358);
      struct std__basic_ostream_char__std__char_traits_char__* r360 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r359, &second350);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____swap(&first348, &second350);
      char* cast361 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* r362 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast361);
      struct std__basic_ostream_char__std__char_traits_char__* r363 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r362, &first348);
      char* cast364 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* r365 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r363, cast364);
      struct std__basic_ostream_char__std__char_traits_char__* r366 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r365, &second350);
      struct std__basic_ostream_char__std__char_traits_char__* r367 = std__ostream__operator___std__ostream_____(r366, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      int c368 = 0;
      __retval347 = c368;
      int t369 = __retval347;
      int ret_val370 = t369;
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&second350);
      }
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&first348);
      }
      return ret_val370;
  int t371 = __retval347;
  return t371;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v372) {
bb373:
  struct std____new_allocator_char_* this374;
  this374 = v372;
  struct std____new_allocator_char_* t375 = this374;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v376) {
bb377:
  char* __r378;
  char* __retval379;
  __r378 = v376;
  char* t380 = __r378;
  __retval379 = t380;
  char* t381 = __retval379;
  return t381;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v382) {
bb383:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this384;
  char* __retval385;
  this384 = v382;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t386 = this384;
  char* cast387 = (char*)&(t386->field2._M_local_buf);
  char* r388 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast387);
  __retval385 = r388;
  char* t389 = __retval385;
  return t389;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v390, char* v391, struct std__allocator_char_* v392) {
bb393:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this394;
  char* __dat395;
  struct std__allocator_char_* __a396;
  this394 = v390;
  __dat395 = v391;
  __a396 = v392;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t397 = this394;
  struct std__allocator_char_* base398 = (struct std__allocator_char_*)((char *)t397 + 0);
  struct std__allocator_char_* t399 = __a396;
  std__allocator_char___allocator(base398, t399);
    char* t400 = __dat395;
    t397->_M_p = t400;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb401:
  _Bool __retval402;
    _Bool c403 = 0;
    __retval402 = c403;
    _Bool t404 = __retval402;
    return t404;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v405, char* v406) {
bb407:
  char* __c1408;
  char* __c2409;
  _Bool __retval410;
  __c1408 = v405;
  __c2409 = v406;
  char* t411 = __c1408;
  char t412 = *t411;
  int cast413 = (int)t412;
  char* t414 = __c2409;
  char t415 = *t414;
  int cast416 = (int)t415;
  _Bool c417 = ((cast413 == cast416)) ? 1 : 0;
  __retval410 = c417;
  _Bool t418 = __retval410;
  return t418;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v419) {
bb420:
  char* __p421;
  unsigned long __retval422;
  unsigned long __i423;
  __p421 = v419;
  unsigned long c424 = 0;
  __i423 = c424;
    char ref_tmp0425;
    while (1) {
      unsigned long t426 = __i423;
      char* t427 = __p421;
      char* ptr428 = &(t427)[t426];
      char c429 = 0;
      ref_tmp0425 = c429;
      _Bool r430 = __gnu_cxx__char_traits_char___eq(ptr428, &ref_tmp0425);
      _Bool u431 = !r430;
      if (!u431) break;
      unsigned long t432 = __i423;
      unsigned long u433 = t432 + 1;
      __i423 = u433;
    }
  unsigned long t434 = __i423;
  __retval422 = t434;
  unsigned long t435 = __retval422;
  return t435;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v436) {
bb437:
  char* __s438;
  unsigned long __retval439;
  __s438 = v436;
    _Bool r440 = std____is_constant_evaluated();
    if (r440) {
      char* t441 = __s438;
      unsigned long r442 = __gnu_cxx__char_traits_char___length(t441);
      __retval439 = r442;
      unsigned long t443 = __retval439;
      return t443;
    }
  char* t444 = __s438;
  unsigned long r445 = strlen(t444);
  __retval439 = r445;
  unsigned long t446 = __retval439;
  return t446;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v447, char* v448, struct std__random_access_iterator_tag v449) {
bb450:
  char* __first451;
  char* __last452;
  struct std__random_access_iterator_tag unnamed453;
  long __retval454;
  __first451 = v447;
  __last452 = v448;
  unnamed453 = v449;
  char* t455 = __last452;
  char* t456 = __first451;
  long diff457 = t455 - t456;
  __retval454 = diff457;
  long t458 = __retval454;
  return t458;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v459) {
bb460:
  char** unnamed461;
  struct std__random_access_iterator_tag __retval462;
  unnamed461 = v459;
  struct std__random_access_iterator_tag t463 = __retval462;
  return t463;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v464, char* v465) {
bb466:
  char* __first467;
  char* __last468;
  long __retval469;
  struct std__random_access_iterator_tag agg_tmp0470;
  __first467 = v464;
  __last468 = v465;
  char* t471 = __first467;
  char* t472 = __last468;
  struct std__random_access_iterator_tag r473 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first467);
  agg_tmp0470 = r473;
  struct std__random_access_iterator_tag t474 = agg_tmp0470;
  long r475 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t471, t472, t474);
  __retval469 = r475;
  long t476 = __retval469;
  return t476;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v477, char* v478) {
bb479:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this480;
  char* __p481;
  this480 = v477;
  __p481 = v478;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t482 = this480;
  char* t483 = __p481;
  t482->_M_dataplus._M_p = t483;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v484) {
bb485:
  struct std__allocator_char_* __a486;
  unsigned long __retval487;
  __a486 = v484;
  unsigned long c488 = -1;
  unsigned long c489 = 1;
  unsigned long b490 = c488 / c489;
  __retval487 = b490;
  unsigned long t491 = __retval487;
  return t491;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v492) {
bb493:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this494;
  struct std__allocator_char_* __retval495;
  this494 = v492;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t496 = this494;
  struct std__allocator_char_* base497 = (struct std__allocator_char_*)((char *)&(t496->_M_dataplus) + 0);
  __retval495 = base497;
  struct std__allocator_char_* t498 = __retval495;
  return t498;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v499, unsigned long* v500) {
bb501:
  unsigned long* __a502;
  unsigned long* __b503;
  unsigned long* __retval504;
  __a502 = v499;
  __b503 = v500;
    unsigned long* t505 = __b503;
    unsigned long t506 = *t505;
    unsigned long* t507 = __a502;
    unsigned long t508 = *t507;
    _Bool c509 = ((t506 < t508)) ? 1 : 0;
    if (c509) {
      unsigned long* t510 = __b503;
      __retval504 = t510;
      unsigned long* t511 = __retval504;
      return t511;
    }
  unsigned long* t512 = __a502;
  __retval504 = t512;
  unsigned long* t513 = __retval504;
  return t513;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v514) {
bb515:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this516;
  unsigned long __retval517;
  unsigned long __diffmax518;
  unsigned long __allocmax519;
  this516 = v514;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t520 = this516;
  unsigned long c521 = 9223372036854775807;
  __diffmax518 = c521;
  struct std__allocator_char_* r522 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t520);
  unsigned long r523 = std__allocator_traits_std__allocator_char_____max_size(r522);
  __allocmax519 = r523;
  unsigned long* r524 = unsigned_long_const__std__min_unsigned_long_(&__diffmax518, &__allocmax519);
  unsigned long t525 = *r524;
  unsigned long c526 = 1;
  unsigned long b527 = t525 - c526;
  __retval517 = b527;
  unsigned long t528 = __retval517;
  return t528;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v529) {
bb530:
  struct std____new_allocator_char_* this531;
  unsigned long __retval532;
  this531 = v529;
  struct std____new_allocator_char_* t533 = this531;
  unsigned long c534 = 9223372036854775807;
  unsigned long c535 = 1;
  unsigned long b536 = c534 / c535;
  __retval532 = b536;
  unsigned long t537 = __retval532;
  return t537;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v538, unsigned long v539, void* v540) {
bb541:
  struct std____new_allocator_char_* this542;
  unsigned long __n543;
  void* unnamed544;
  char* __retval545;
  this542 = v538;
  __n543 = v539;
  unnamed544 = v540;
  struct std____new_allocator_char_* t546 = this542;
    unsigned long t547 = __n543;
    unsigned long r548 = std____new_allocator_char____M_max_size___const(t546);
    _Bool c549 = ((t547 > r548)) ? 1 : 0;
    if (c549) {
        unsigned long t550 = __n543;
        unsigned long c551 = -1;
        unsigned long c552 = 1;
        unsigned long b553 = c551 / c552;
        _Bool c554 = ((t550 > b553)) ? 1 : 0;
        if (c554) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c555 = 1;
    unsigned long c556 = 16;
    _Bool c557 = ((c555 > c556)) ? 1 : 0;
    if (c557) {
      unsigned long __al558;
      unsigned long c559 = 1;
      __al558 = c559;
      unsigned long t560 = __n543;
      unsigned long c561 = 1;
      unsigned long b562 = t560 * c561;
      unsigned long t563 = __al558;
      void* r564 = operator_new_2(b562, t563);
      char* cast565 = (char*)r564;
      __retval545 = cast565;
      char* t566 = __retval545;
      return t566;
    }
  unsigned long t567 = __n543;
  unsigned long c568 = 1;
  unsigned long b569 = t567 * c568;
  void* r570 = operator_new(b569);
  char* cast571 = (char*)r570;
  __retval545 = cast571;
  char* t572 = __retval545;
  return t572;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v573, unsigned long v574) {
bb575:
  struct std__allocator_char_* this576;
  unsigned long __n577;
  char* __retval578;
  this576 = v573;
  __n577 = v574;
  struct std__allocator_char_* t579 = this576;
    _Bool r580 = std____is_constant_evaluated();
    if (r580) {
        unsigned long t581 = __n577;
        unsigned long c582 = 1;
        unsigned long ovr583;
        _Bool ovf584 = __builtin_mul_overflow(t581, c582, &ovr583);
        __n577 = ovr583;
        if (ovf584) {
          std____throw_bad_array_new_length();
        }
      unsigned long t585 = __n577;
      void* r586 = operator_new(t585);
      char* cast587 = (char*)r586;
      __retval578 = cast587;
      char* t588 = __retval578;
      return t588;
    }
  struct std____new_allocator_char_* base589 = (struct std____new_allocator_char_*)((char *)t579 + 0);
  unsigned long t590 = __n577;
  void* c591 = ((void*)0);
  char* r592 = std____new_allocator_char___allocate(base589, t590, c591);
  __retval578 = r592;
  char* t593 = __retval578;
  return t593;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v594, unsigned long v595) {
bb596:
  struct std__allocator_char_* __a597;
  unsigned long __n598;
  char* __retval599;
  __a597 = v594;
  __n598 = v595;
  struct std__allocator_char_* t600 = __a597;
  unsigned long t601 = __n598;
  char* r602 = std__allocator_char___allocate(t600, t601);
  __retval599 = r602;
  char* t603 = __retval599;
  return t603;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v604, unsigned long v605) {
bb606:
  struct std__allocator_char_* __a607;
  unsigned long __n608;
  char* __retval609;
  char* __p610;
  __a607 = v604;
  __n608 = v605;
  struct std__allocator_char_* t611 = __a607;
  unsigned long t612 = __n608;
  char* r613 = std__allocator_traits_std__allocator_char_____allocate(t611, t612);
  __p610 = r613;
  char* t614 = __p610;
  __retval609 = t614;
  char* t615 = __retval609;
  return t615;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v616) {
bb617:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this618;
  struct std__allocator_char_* __retval619;
  this618 = v616;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t620 = this618;
  struct std__allocator_char_* base621 = (struct std__allocator_char_*)((char *)&(t620->_M_dataplus) + 0);
  __retval619 = base621;
  struct std__allocator_char_* t622 = __retval619;
  return t622;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v623, unsigned long* v624, unsigned long v625) {
bb626:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this627;
  unsigned long* __capacity628;
  unsigned long __old_capacity629;
  char* __retval630;
  this627 = v623;
  __capacity628 = v624;
  __old_capacity629 = v625;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t631 = this627;
    unsigned long* t632 = __capacity628;
    unsigned long t633 = *t632;
    unsigned long r634 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t631);
    _Bool c635 = ((t633 > r634)) ? 1 : 0;
    if (c635) {
      char* cast636 = (char*)&(_str_6);
      std____throw_length_error(cast636);
    }
    unsigned long* t637 = __capacity628;
    unsigned long t638 = *t637;
    unsigned long t639 = __old_capacity629;
    _Bool c640 = ((t638 > t639)) ? 1 : 0;
    _Bool ternary641;
    if (c640) {
      unsigned long* t642 = __capacity628;
      unsigned long t643 = *t642;
      unsigned long c644 = 2;
      unsigned long t645 = __old_capacity629;
      unsigned long b646 = c644 * t645;
      _Bool c647 = ((t643 < b646)) ? 1 : 0;
      ternary641 = (_Bool)c647;
    } else {
      _Bool c648 = 0;
      ternary641 = (_Bool)c648;
    }
    if (ternary641) {
      unsigned long c649 = 2;
      unsigned long t650 = __old_capacity629;
      unsigned long b651 = c649 * t650;
      unsigned long* t652 = __capacity628;
      *t652 = b651;
        unsigned long* t653 = __capacity628;
        unsigned long t654 = *t653;
        unsigned long r655 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t631);
        _Bool c656 = ((t654 > r655)) ? 1 : 0;
        if (c656) {
          unsigned long r657 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t631);
          unsigned long* t658 = __capacity628;
          *t658 = r657;
        }
    }
  struct std__allocator_char_* r659 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t631);
  unsigned long* t660 = __capacity628;
  unsigned long t661 = *t660;
  unsigned long c662 = 1;
  unsigned long b663 = t661 + c662;
  char* r664 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r659, b663);
  __retval630 = r664;
  char* t665 = __retval630;
  return t665;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v666, unsigned long v667) {
bb668:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this669;
  unsigned long __capacity670;
  this669 = v666;
  __capacity670 = v667;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t671 = this669;
  unsigned long t672 = __capacity670;
  t671->field2._M_allocated_capacity = t672;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb673:
  _Bool __retval674;
    _Bool c675 = 0;
    __retval674 = c675;
    _Bool t676 = __retval674;
    return t676;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v677) {
bb678:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this679;
  this679 = v677;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t680 = this679;
    _Bool r681 = std__is_constant_evaluated();
    if (r681) {
        unsigned long __i682;
        unsigned long c683 = 0;
        __i682 = c683;
        while (1) {
          unsigned long t685 = __i682;
          unsigned long c686 = 15;
          _Bool c687 = ((t685 <= c686)) ? 1 : 0;
          if (!c687) break;
          char c688 = 0;
          unsigned long t689 = __i682;
          t680->field2._M_local_buf[t689] = c688;
        for_step684: ;
          unsigned long t690 = __i682;
          unsigned long u691 = t690 + 1;
          __i682 = u691;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v692, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v693) {
bb694:
  struct _Guard* this695;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s696;
  this695 = v692;
  __s696 = v693;
  struct _Guard* t697 = this695;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t698 = __s696;
  t697->_M_guarded = t698;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v699, char* v700) {
bb701:
  char* __location702;
  char* __args703;
  char* __retval704;
  void* __loc705;
  __location702 = v699;
  __args703 = v700;
  char* t706 = __location702;
  void* cast707 = (void*)t706;
  __loc705 = cast707;
    void* t708 = __loc705;
    char* cast709 = (char*)t708;
    char* t710 = __args703;
    char t711 = *t710;
    *cast709 = t711;
    __retval704 = cast709;
    char* t712 = __retval704;
    return t712;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v713, char* v714) {
bb715:
  char* __c1716;
  char* __c2717;
  __c1716 = v713;
  __c2717 = v714;
    _Bool r718 = std____is_constant_evaluated();
    if (r718) {
      char* t719 = __c1716;
      char* t720 = __c2717;
      char* r721 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t719, t720);
    } else {
      char* t722 = __c2717;
      char t723 = *t722;
      char* t724 = __c1716;
      *t724 = t723;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v725, char* v726, unsigned long v727) {
bb728:
  char* __s1729;
  char* __s2730;
  unsigned long __n731;
  char* __retval732;
  __s1729 = v725;
  __s2730 = v726;
  __n731 = v727;
    unsigned long t733 = __n731;
    unsigned long c734 = 0;
    _Bool c735 = ((t733 == c734)) ? 1 : 0;
    if (c735) {
      char* t736 = __s1729;
      __retval732 = t736;
      char* t737 = __retval732;
      return t737;
    }
    _Bool r738 = std____is_constant_evaluated();
    if (r738) {
        unsigned long __i739;
        unsigned long c740 = 0;
        __i739 = c740;
        while (1) {
          unsigned long t742 = __i739;
          unsigned long t743 = __n731;
          _Bool c744 = ((t742 < t743)) ? 1 : 0;
          if (!c744) break;
          char* t745 = __s1729;
          unsigned long t746 = __i739;
          char* ptr747 = &(t745)[t746];
          unsigned long t748 = __i739;
          char* t749 = __s2730;
          char* ptr750 = &(t749)[t748];
          char* r751 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr747, ptr750);
        for_step741: ;
          unsigned long t752 = __i739;
          unsigned long u753 = t752 + 1;
          __i739 = u753;
        }
      char* t754 = __s1729;
      __retval732 = t754;
      char* t755 = __retval732;
      return t755;
    }
  char* t756 = __s1729;
  void* cast757 = (void*)t756;
  char* t758 = __s2730;
  void* cast759 = (void*)t758;
  unsigned long t760 = __n731;
  unsigned long c761 = 1;
  unsigned long b762 = t760 * c761;
  void* r763 = memcpy(cast757, cast759, b762);
  char* t764 = __s1729;
  __retval732 = t764;
  char* t765 = __retval732;
  return t765;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v766, char* v767, unsigned long v768) {
bb769:
  char* __s1770;
  char* __s2771;
  unsigned long __n772;
  char* __retval773;
  __s1770 = v766;
  __s2771 = v767;
  __n772 = v768;
    unsigned long t774 = __n772;
    unsigned long c775 = 0;
    _Bool c776 = ((t774 == c775)) ? 1 : 0;
    if (c776) {
      char* t777 = __s1770;
      __retval773 = t777;
      char* t778 = __retval773;
      return t778;
    }
    _Bool r779 = std____is_constant_evaluated();
    if (r779) {
      char* t780 = __s1770;
      char* t781 = __s2771;
      unsigned long t782 = __n772;
      char* r783 = __gnu_cxx__char_traits_char___copy(t780, t781, t782);
      __retval773 = r783;
      char* t784 = __retval773;
      return t784;
    }
  char* t785 = __s1770;
  void* cast786 = (void*)t785;
  char* t787 = __s2771;
  void* cast788 = (void*)t787;
  unsigned long t789 = __n772;
  void* r790 = memcpy(cast786, cast788, t789);
  char* cast791 = (char*)r790;
  __retval773 = cast791;
  char* t792 = __retval773;
  return t792;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v793, char* v794, unsigned long v795) {
bb796:
  char* __d797;
  char* __s798;
  unsigned long __n799;
  __d797 = v793;
  __s798 = v794;
  __n799 = v795;
    unsigned long t800 = __n799;
    unsigned long c801 = 1;
    _Bool c802 = ((t800 == c801)) ? 1 : 0;
    if (c802) {
      char* t803 = __d797;
      char* t804 = __s798;
      std__char_traits_char___assign(t803, t804);
    } else {
      char* t805 = __d797;
      char* t806 = __s798;
      unsigned long t807 = __n799;
      char* r808 = std__char_traits_char___copy(t805, t806, t807);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v809) {
bb810:
  char* __it811;
  char* __retval812;
  __it811 = v809;
  char* t813 = __it811;
  __retval812 = t813;
  char* t814 = __retval812;
  return t814;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v815, char* v816, char* v817) {
bb818:
  char* __p819;
  char* __k1820;
  char* __k2821;
  __p819 = v815;
  __k1820 = v816;
  __k2821 = v817;
    char* t822 = __p819;
    char* t823 = __k1820;
    char* r824 = char_const__std____niter_base_char_const__(t823);
    char* t825 = __k2821;
    char* t826 = __k1820;
    long diff827 = t825 - t826;
    unsigned long cast828 = (unsigned long)diff827;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t822, r824, cast828);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v829) {
bb830:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this831;
  char* __retval832;
  this831 = v829;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t833 = this831;
  char* t834 = t833->_M_dataplus._M_p;
  __retval832 = t834;
  char* t835 = __retval832;
  return t835;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v836, unsigned long v837) {
bb838:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this839;
  unsigned long __length840;
  this839 = v836;
  __length840 = v837;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t841 = this839;
  unsigned long t842 = __length840;
  t841->_M_string_length = t842;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v843, unsigned long v844) {
bb845:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this846;
  unsigned long __n847;
  char ref_tmp0848;
  this846 = v843;
  __n847 = v844;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t849 = this846;
  unsigned long t850 = __n847;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t849, t850);
  unsigned long t851 = __n847;
  char* r852 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t849);
  char* ptr853 = &(r852)[t851];
  char c854 = 0;
  ref_tmp0848 = c854;
  std__char_traits_char___assign(ptr853, &ref_tmp0848);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v855) {
bb856:
  struct _Guard* this857;
  this857 = v855;
  struct _Guard* t858 = this857;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t859 = t858->_M_guarded;
    _Bool cast860 = (_Bool)t859;
    if (cast860) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t861 = t858->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t861);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v862, char* v863, char* v864, struct std__forward_iterator_tag v865) {
bb866:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this867;
  char* __beg868;
  char* __end869;
  struct std__forward_iterator_tag unnamed870;
  unsigned long __dnew871;
  struct _Guard __guard872;
  this867 = v862;
  __beg868 = v863;
  __end869 = v864;
  unnamed870 = v865;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t873 = this867;
  char* t874 = __beg868;
  char* t875 = __end869;
  long r876 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t874, t875);
  unsigned long cast877 = (unsigned long)r876;
  __dnew871 = cast877;
    unsigned long t878 = __dnew871;
    unsigned long c879 = 15;
    _Bool c880 = ((t878 > c879)) ? 1 : 0;
    if (c880) {
      unsigned long c881 = 0;
      char* r882 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t873, &__dnew871, c881);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t873, r882);
      unsigned long t883 = __dnew871;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t873, t883);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t873);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard872, t873);
    char* r884 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t873);
    char* t885 = __beg868;
    char* t886 = __end869;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r884, t885, t886);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c887 = ((void*)0);
    __guard872._M_guarded = c887;
    unsigned long t888 = __dnew871;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t873, t888);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard872);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v889) {
bb890:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this891;
  this891 = v889;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t892 = this891;
  {
    struct std__allocator_char_* base893 = (struct std__allocator_char_*)((char *)t892 + 0);
    std__allocator_char____allocator(base893);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v894, struct std____new_allocator_char_* v895) {
bb896:
  struct std____new_allocator_char_* this897;
  struct std____new_allocator_char_* unnamed898;
  this897 = v894;
  unnamed898 = v895;
  struct std____new_allocator_char_* t899 = this897;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v900, struct std__allocator_char_* v901) {
bb902:
  struct std__allocator_char_* this903;
  struct std__allocator_char_* __a904;
  this903 = v900;
  __a904 = v901;
  struct std__allocator_char_* t905 = this903;
  struct std____new_allocator_char_* base906 = (struct std____new_allocator_char_*)((char *)t905 + 0);
  struct std__allocator_char_* t907 = __a904;
  struct std____new_allocator_char_* base908 = (struct std____new_allocator_char_*)((char *)t907 + 0);
  std____new_allocator_char_____new_allocator(base906, base908);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v909) {
bb910:
  char* __r911;
  char* __retval912;
  __r911 = v909;
  char* t913 = __r911;
  __retval912 = t913;
  char* t914 = __retval912;
  return t914;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v915) {
bb916:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this917;
  char* __retval918;
  this917 = v915;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t919 = this917;
  char* cast920 = (char*)&(t919->field2._M_local_buf);
  char* r921 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast920);
  __retval918 = r921;
  char* t922 = __retval918;
  return t922;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v923) {
bb924:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this925;
  _Bool __retval926;
  this925 = v923;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t927 = this925;
    char* r928 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t927);
    char* r929 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t927);
    _Bool c930 = ((r928 == r929)) ? 1 : 0;
    if (c930) {
        unsigned long t931 = t927->_M_string_length;
        unsigned long c932 = 15;
        _Bool c933 = ((t931 > c932)) ? 1 : 0;
        if (c933) {
          __builtin_unreachable();
        }
      _Bool c934 = 1;
      __retval926 = c934;
      _Bool t935 = __retval926;
      return t935;
    }
  _Bool c936 = 0;
  __retval926 = c936;
  _Bool t937 = __retval926;
  return t937;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v938, char* v939, unsigned long v940) {
bb941:
  struct std____new_allocator_char_* this942;
  char* __p943;
  unsigned long __n944;
  this942 = v938;
  __p943 = v939;
  __n944 = v940;
  struct std____new_allocator_char_* t945 = this942;
    unsigned long c946 = 1;
    unsigned long c947 = 16;
    _Bool c948 = ((c946 > c947)) ? 1 : 0;
    if (c948) {
      char* t949 = __p943;
      void* cast950 = (void*)t949;
      unsigned long t951 = __n944;
      unsigned long c952 = 1;
      unsigned long b953 = t951 * c952;
      unsigned long c954 = 1;
      operator_delete_3(cast950, b953, c954);
      return;
    }
  char* t955 = __p943;
  void* cast956 = (void*)t955;
  unsigned long t957 = __n944;
  unsigned long c958 = 1;
  unsigned long b959 = t957 * c958;
  operator_delete_2(cast956, b959);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v960, char* v961, unsigned long v962) {
bb963:
  struct std__allocator_char_* this964;
  char* __p965;
  unsigned long __n966;
  this964 = v960;
  __p965 = v961;
  __n966 = v962;
  struct std__allocator_char_* t967 = this964;
    _Bool r968 = std____is_constant_evaluated();
    if (r968) {
      char* t969 = __p965;
      void* cast970 = (void*)t969;
      operator_delete(cast970);
      return;
    }
  struct std____new_allocator_char_* base971 = (struct std____new_allocator_char_*)((char *)t967 + 0);
  char* t972 = __p965;
  unsigned long t973 = __n966;
  std____new_allocator_char___deallocate(base971, t972, t973);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v974, char* v975, unsigned long v976) {
bb977:
  struct std__allocator_char_* __a978;
  char* __p979;
  unsigned long __n980;
  __a978 = v974;
  __p979 = v975;
  __n980 = v976;
  struct std__allocator_char_* t981 = __a978;
  char* t982 = __p979;
  unsigned long t983 = __n980;
  std__allocator_char___deallocate(t981, t982, t983);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v984, unsigned long v985) {
bb986:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this987;
  unsigned long __size988;
  this987 = v984;
  __size988 = v985;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t989 = this987;
  struct std__allocator_char_* r990 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t989);
  char* r991 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t989);
  unsigned long t992 = __size988;
  unsigned long c993 = 1;
  unsigned long b994 = t992 + c993;
  std__allocator_traits_std__allocator_char_____deallocate(r990, r991, b994);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v995) {
bb996:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this997;
  this997 = v995;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t998 = this997;
    _Bool r999 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t998);
    _Bool u1000 = !r999;
    if (u1000) {
      unsigned long t1001 = t998->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t998, t1001);
    }
  return;
}

