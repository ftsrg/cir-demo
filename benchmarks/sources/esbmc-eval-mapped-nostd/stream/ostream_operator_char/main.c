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
struct anon_struct_0 { char __field0; char __field1; char __field2; char __field3; char __field4; char __field5; char __field6[19]; } __attribute__((packed));
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
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[7] = "String";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[50] = "basic_string: construction from null is not valid";
char _str_2[24] = "basic_string::_M_create";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
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
        char* cast20 = (char*)&(_str_1);
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

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v32) {
bb33:
  struct std__ios_base* this34;
  long __retval35;
  this34 = v32;
  struct std__ios_base* t36 = this34;
  long t37 = t36->_M_width;
  __retval35 = t37;
  long t38 = __retval35;
  return t38;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v39, char v40) {
bb41:
  struct std__basic_ostream_char__std__char_traits_char__* __out42;
  char __c43;
  struct std__basic_ostream_char__std__char_traits_char__* __retval44;
  __out42 = v39;
  __c43 = v40;
    struct std__basic_ostream_char__std__char_traits_char__* t45 = __out42;
    void** v46 = (void**)t45;
    void* v47 = *((void**)v46);
    unsigned char* cast48 = (unsigned char*)v47;
    long c49 = -24;
    unsigned char* ptr50 = &(cast48)[c49];
    long* cast51 = (long*)ptr50;
    long t52 = *cast51;
    unsigned char* cast53 = (unsigned char*)t45;
    unsigned char* ptr54 = &(cast53)[t52];
    struct std__basic_ostream_char__std__char_traits_char__* cast55 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr54;
    struct std__ios_base* cast56 = (struct std__ios_base*)cast55;
    long r57 = std__ios_base__width___const(cast56);
    long c58 = 0;
    _Bool c59 = ((r57 != c58)) ? 1 : 0;
    if (c59) {
      struct std__basic_ostream_char__std__char_traits_char__* t60 = __out42;
      long c61 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r62 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t60, &__c43, c61);
      __retval44 = r62;
      struct std__basic_ostream_char__std__char_traits_char__* t63 = __retval44;
      return t63;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t64 = __out42;
  char t65 = __c43;
  struct std__basic_ostream_char__std__char_traits_char__* r66 = std__ostream__put(t64, t65);
  struct std__basic_ostream_char__std__char_traits_char__* t67 = __out42;
  __retval44 = t67;
  struct std__basic_ostream_char__std__char_traits_char__* t68 = __retval44;
  return t68;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v69, void* v70) {
bb71:
  struct std__basic_ostream_char__std__char_traits_char__* this72;
  void* __pf73;
  struct std__basic_ostream_char__std__char_traits_char__* __retval74;
  this72 = v69;
  __pf73 = v70;
  struct std__basic_ostream_char__std__char_traits_char__* t75 = this72;
  void* t76 = __pf73;
  struct std__basic_ostream_char__std__char_traits_char__* r77 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t76)(t75);
  __retval74 = r77;
  struct std__basic_ostream_char__std__char_traits_char__* t78 = __retval74;
  return t78;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v79) {
bb80:
  struct std__basic_ostream_char__std__char_traits_char__* __os81;
  struct std__basic_ostream_char__std__char_traits_char__* __retval82;
  __os81 = v79;
  struct std__basic_ostream_char__std__char_traits_char__* t83 = __os81;
  struct std__basic_ostream_char__std__char_traits_char__* r84 = std__ostream__flush(t83);
  __retval82 = r84;
  struct std__basic_ostream_char__std__char_traits_char__* t85 = __retval82;
  return t85;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v86) {
bb87:
  struct std__ctype_char_* __f88;
  struct std__ctype_char_* __retval89;
  __f88 = v86;
    struct std__ctype_char_* t90 = __f88;
    _Bool cast91 = (_Bool)t90;
    _Bool u92 = !cast91;
    if (u92) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t93 = __f88;
  __retval89 = t93;
  struct std__ctype_char_* t94 = __retval89;
  return t94;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v95, char v96) {
bb97:
  struct std__ctype_char_* this98;
  char __c99;
  char __retval100;
  this98 = v95;
  __c99 = v96;
  struct std__ctype_char_* t101 = this98;
    char t102 = t101->_M_widen_ok;
    _Bool cast103 = (_Bool)t102;
    if (cast103) {
      char t104 = __c99;
      unsigned char cast105 = (unsigned char)t104;
      unsigned long cast106 = (unsigned long)cast105;
      char t107 = t101->_M_widen[cast106];
      __retval100 = t107;
      char t108 = __retval100;
      return t108;
    }
  std__ctype_char____M_widen_init___const(t101);
  char t109 = __c99;
  void** v110 = (void**)t101;
  void* v111 = *((void**)v110);
  char vcall114 = (char)__VERIFIER_virtual_call_char_char(t101, 6, t109);
  __retval100 = vcall114;
  char t115 = __retval100;
  return t115;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v116, char v117) {
bb118:
  struct std__basic_ios_char__std__char_traits_char__* this119;
  char __c120;
  char __retval121;
  this119 = v116;
  __c120 = v117;
  struct std__basic_ios_char__std__char_traits_char__* t122 = this119;
  struct std__ctype_char_* t123 = t122->_M_ctype;
  struct std__ctype_char_* r124 = std__ctype_char__const__std____check_facet_std__ctype_char___(t123);
  char t125 = __c120;
  char r126 = std__ctype_char___widen_char__const(r124, t125);
  __retval121 = r126;
  char t127 = __retval121;
  return t127;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v128) {
bb129:
  struct std__basic_ostream_char__std__char_traits_char__* __os130;
  struct std__basic_ostream_char__std__char_traits_char__* __retval131;
  __os130 = v128;
  struct std__basic_ostream_char__std__char_traits_char__* t132 = __os130;
  struct std__basic_ostream_char__std__char_traits_char__* t133 = __os130;
  void** v134 = (void**)t133;
  void* v135 = *((void**)v134);
  unsigned char* cast136 = (unsigned char*)v135;
  long c137 = -24;
  unsigned char* ptr138 = &(cast136)[c137];
  long* cast139 = (long*)ptr138;
  long t140 = *cast139;
  unsigned char* cast141 = (unsigned char*)t133;
  unsigned char* ptr142 = &(cast141)[t140];
  struct std__basic_ostream_char__std__char_traits_char__* cast143 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr142;
  struct std__basic_ios_char__std__char_traits_char__* cast144 = (struct std__basic_ios_char__std__char_traits_char__*)cast143;
  char c145 = 10;
  char r146 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast144, c145);
  struct std__basic_ostream_char__std__char_traits_char__* r147 = std__ostream__put(t132, r146);
  struct std__basic_ostream_char__std__char_traits_char__* r148 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r147);
  __retval131 = r148;
  struct std__basic_ostream_char__std__char_traits_char__* t149 = __retval131;
  return t149;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v150, int v151) {
bb152:
  int __a153;
  int __b154;
  int __retval155;
  __a153 = v150;
  __b154 = v151;
  int t156 = __a153;
  int t157 = __b154;
  int b158 = t156 | t157;
  __retval155 = b158;
  int t159 = __retval155;
  return t159;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v160) {
bb161:
  struct std__basic_ios_char__std__char_traits_char__* this162;
  int __retval163;
  this162 = v160;
  struct std__basic_ios_char__std__char_traits_char__* t164 = this162;
  struct std__ios_base* base165 = (struct std__ios_base*)((char *)t164 + 0);
  int t166 = base165->_M_streambuf_state;
  __retval163 = t166;
  int t167 = __retval163;
  return t167;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v168, int v169) {
bb170:
  struct std__basic_ios_char__std__char_traits_char__* this171;
  int __state172;
  this171 = v168;
  __state172 = v169;
  struct std__basic_ios_char__std__char_traits_char__* t173 = this171;
  int r174 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t173);
  int t175 = __state172;
  int r176 = std__operator_(r174, t175);
  std__basic_ios_char__std__char_traits_char_____clear(t173, r176);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v177, char* v178) {
bb179:
  struct std__basic_ostream_char__std__char_traits_char__* __out180;
  char* __s181;
  struct std__basic_ostream_char__std__char_traits_char__* __retval182;
  __out180 = v177;
  __s181 = v178;
    char* t183 = __s181;
    _Bool cast184 = (_Bool)t183;
    _Bool u185 = !cast184;
    if (u185) {
      struct std__basic_ostream_char__std__char_traits_char__* t186 = __out180;
      void** v187 = (void**)t186;
      void* v188 = *((void**)v187);
      unsigned char* cast189 = (unsigned char*)v188;
      long c190 = -24;
      unsigned char* ptr191 = &(cast189)[c190];
      long* cast192 = (long*)ptr191;
      long t193 = *cast192;
      unsigned char* cast194 = (unsigned char*)t186;
      unsigned char* ptr195 = &(cast194)[t193];
      struct std__basic_ostream_char__std__char_traits_char__* cast196 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr195;
      struct std__basic_ios_char__std__char_traits_char__* cast197 = (struct std__basic_ios_char__std__char_traits_char__*)cast196;
      int t198 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast197, t198);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t199 = __out180;
      char* t200 = __s181;
      char* t201 = __s181;
      unsigned long r202 = std__char_traits_char___length(t201);
      long cast203 = (long)r202;
      struct std__basic_ostream_char__std__char_traits_char__* r204 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t199, t200, cast203);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t205 = __out180;
  __retval182 = t205;
  struct std__basic_ostream_char__std__char_traits_char__* t206 = __retval182;
  return t206;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v207) {
bb208:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this209;
  char* __retval210;
  this209 = v207;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t211 = this209;
  char* r212 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t211);
  __retval210 = r212;
  char* t213 = __retval210;
  return t213;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v214) {
bb215:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this216;
  unsigned long __retval217;
  unsigned long __sz218;
  this216 = v214;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t219 = this216;
  unsigned long t220 = t219->_M_string_length;
  __sz218 = t220;
    unsigned long t221 = __sz218;
    unsigned long r222 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t219);
    _Bool c223 = ((t221 > r222)) ? 1 : 0;
    if (c223) {
      __builtin_unreachable();
    }
  unsigned long t224 = __sz218;
  __retval217 = t224;
  unsigned long t225 = __retval217;
  return t225;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v226, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v227) {
bb228:
  struct std__basic_ostream_char__std__char_traits_char__* __os229;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str230;
  struct std__basic_ostream_char__std__char_traits_char__* __retval231;
  __os229 = v226;
  __str230 = v227;
  struct std__basic_ostream_char__std__char_traits_char__* t232 = __os229;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t233 = __str230;
  char* r234 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t233);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t235 = __str230;
  unsigned long r236 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t235);
  long cast237 = (long)r236;
  struct std__basic_ostream_char__std__char_traits_char__* r238 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t232, r234, cast237);
  __retval231 = r238;
  struct std__basic_ostream_char__std__char_traits_char__* t239 = __retval231;
  return t239;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v240) {
bb241:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this242;
  this242 = v240;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t243 = this242;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t243);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t243->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb244:
  int __retval245;
  char val246;
  char cstr247[25];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str248;
  struct std__allocator_char_ ref_tmp0249;
  int c250 = 0;
  __retval245 = c250;
  char c251 = 65;
  val246 = c251;
  struct anon_struct_0* cast252 = (struct anon_struct_0*)&(cstr247);
  struct anon_struct_0 c253 = {83, 84, 82, 73, 78, 71, {0}};
  *cast252 = c253;
  char* cast254 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0249);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str248, cast254, &ref_tmp0249);
  {
    std__allocator_char____allocator(&ref_tmp0249);
  }
    char t255 = val246;
    struct std__basic_ostream_char__std__char_traits_char__* r256 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(&_ZSt4cout, t255);
    struct std__basic_ostream_char__std__char_traits_char__* r257 = std__ostream__operator___std__ostream_____(r256, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    char* cast258 = (char*)&(cstr247);
    struct std__basic_ostream_char__std__char_traits_char__* r259 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast258);
    struct std__basic_ostream_char__std__char_traits_char__* r260 = std__ostream__operator___std__ostream_____(r259, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    struct std__basic_ostream_char__std__char_traits_char__* r261 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str248);
    struct std__basic_ostream_char__std__char_traits_char__* r262 = std__ostream__operator___std__ostream_____(r261, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c263 = 0;
    __retval245 = c263;
    int t264 = __retval245;
    int ret_val265 = t264;
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str248);
    }
    return ret_val265;
  int t266 = __retval245;
  return t266;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v267) {
bb268:
  struct std____new_allocator_char_* this269;
  this269 = v267;
  struct std____new_allocator_char_* t270 = this269;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v271) {
bb272:
  char* __r273;
  char* __retval274;
  __r273 = v271;
  char* t275 = __r273;
  __retval274 = t275;
  char* t276 = __retval274;
  return t276;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v277) {
bb278:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this279;
  char* __retval280;
  this279 = v277;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t281 = this279;
  char* cast282 = (char*)&(t281->field2._M_local_buf);
  char* r283 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast282);
  __retval280 = r283;
  char* t284 = __retval280;
  return t284;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v285, char* v286, struct std__allocator_char_* v287) {
bb288:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this289;
  char* __dat290;
  struct std__allocator_char_* __a291;
  this289 = v285;
  __dat290 = v286;
  __a291 = v287;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t292 = this289;
  struct std__allocator_char_* base293 = (struct std__allocator_char_*)((char *)t292 + 0);
  struct std__allocator_char_* t294 = __a291;
  std__allocator_char___allocator(base293, t294);
    char* t295 = __dat290;
    t292->_M_p = t295;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb296:
  _Bool __retval297;
    _Bool c298 = 0;
    __retval297 = c298;
    _Bool t299 = __retval297;
    return t299;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v300, char* v301) {
bb302:
  char* __c1303;
  char* __c2304;
  _Bool __retval305;
  __c1303 = v300;
  __c2304 = v301;
  char* t306 = __c1303;
  char t307 = *t306;
  int cast308 = (int)t307;
  char* t309 = __c2304;
  char t310 = *t309;
  int cast311 = (int)t310;
  _Bool c312 = ((cast308 == cast311)) ? 1 : 0;
  __retval305 = c312;
  _Bool t313 = __retval305;
  return t313;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v314) {
bb315:
  char* __p316;
  unsigned long __retval317;
  unsigned long __i318;
  __p316 = v314;
  unsigned long c319 = 0;
  __i318 = c319;
    char ref_tmp0320;
    while (1) {
      unsigned long t321 = __i318;
      char* t322 = __p316;
      char* ptr323 = &(t322)[t321];
      char c324 = 0;
      ref_tmp0320 = c324;
      _Bool r325 = __gnu_cxx__char_traits_char___eq(ptr323, &ref_tmp0320);
      _Bool u326 = !r325;
      if (!u326) break;
      unsigned long t327 = __i318;
      unsigned long u328 = t327 + 1;
      __i318 = u328;
    }
  unsigned long t329 = __i318;
  __retval317 = t329;
  unsigned long t330 = __retval317;
  return t330;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v331) {
bb332:
  char* __s333;
  unsigned long __retval334;
  __s333 = v331;
    _Bool r335 = std____is_constant_evaluated();
    if (r335) {
      char* t336 = __s333;
      unsigned long r337 = __gnu_cxx__char_traits_char___length(t336);
      __retval334 = r337;
      unsigned long t338 = __retval334;
      return t338;
    }
  char* t339 = __s333;
  unsigned long r340 = strlen(t339);
  __retval334 = r340;
  unsigned long t341 = __retval334;
  return t341;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v342, char* v343, struct std__random_access_iterator_tag v344) {
bb345:
  char* __first346;
  char* __last347;
  struct std__random_access_iterator_tag unnamed348;
  long __retval349;
  __first346 = v342;
  __last347 = v343;
  unnamed348 = v344;
  char* t350 = __last347;
  char* t351 = __first346;
  long diff352 = t350 - t351;
  __retval349 = diff352;
  long t353 = __retval349;
  return t353;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v354) {
bb355:
  char** unnamed356;
  struct std__random_access_iterator_tag __retval357;
  unnamed356 = v354;
  struct std__random_access_iterator_tag t358 = __retval357;
  return t358;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v359, char* v360) {
bb361:
  char* __first362;
  char* __last363;
  long __retval364;
  struct std__random_access_iterator_tag agg_tmp0365;
  __first362 = v359;
  __last363 = v360;
  char* t366 = __first362;
  char* t367 = __last363;
  struct std__random_access_iterator_tag r368 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first362);
  agg_tmp0365 = r368;
  struct std__random_access_iterator_tag t369 = agg_tmp0365;
  long r370 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t366, t367, t369);
  __retval364 = r370;
  long t371 = __retval364;
  return t371;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v372, char* v373) {
bb374:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this375;
  char* __p376;
  this375 = v372;
  __p376 = v373;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t377 = this375;
  char* t378 = __p376;
  t377->_M_dataplus._M_p = t378;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v379) {
bb380:
  struct std__allocator_char_* __a381;
  unsigned long __retval382;
  __a381 = v379;
  unsigned long c383 = -1;
  unsigned long c384 = 1;
  unsigned long b385 = c383 / c384;
  __retval382 = b385;
  unsigned long t386 = __retval382;
  return t386;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v387) {
bb388:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this389;
  struct std__allocator_char_* __retval390;
  this389 = v387;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t391 = this389;
  struct std__allocator_char_* base392 = (struct std__allocator_char_*)((char *)&(t391->_M_dataplus) + 0);
  __retval390 = base392;
  struct std__allocator_char_* t393 = __retval390;
  return t393;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v394, unsigned long* v395) {
bb396:
  unsigned long* __a397;
  unsigned long* __b398;
  unsigned long* __retval399;
  __a397 = v394;
  __b398 = v395;
    unsigned long* t400 = __b398;
    unsigned long t401 = *t400;
    unsigned long* t402 = __a397;
    unsigned long t403 = *t402;
    _Bool c404 = ((t401 < t403)) ? 1 : 0;
    if (c404) {
      unsigned long* t405 = __b398;
      __retval399 = t405;
      unsigned long* t406 = __retval399;
      return t406;
    }
  unsigned long* t407 = __a397;
  __retval399 = t407;
  unsigned long* t408 = __retval399;
  return t408;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v409) {
bb410:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this411;
  unsigned long __retval412;
  unsigned long __diffmax413;
  unsigned long __allocmax414;
  this411 = v409;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t415 = this411;
  unsigned long c416 = 9223372036854775807;
  __diffmax413 = c416;
  struct std__allocator_char_* r417 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t415);
  unsigned long r418 = std__allocator_traits_std__allocator_char_____max_size(r417);
  __allocmax414 = r418;
  unsigned long* r419 = unsigned_long_const__std__min_unsigned_long_(&__diffmax413, &__allocmax414);
  unsigned long t420 = *r419;
  unsigned long c421 = 1;
  unsigned long b422 = t420 - c421;
  __retval412 = b422;
  unsigned long t423 = __retval412;
  return t423;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v424) {
bb425:
  struct std____new_allocator_char_* this426;
  unsigned long __retval427;
  this426 = v424;
  struct std____new_allocator_char_* t428 = this426;
  unsigned long c429 = 9223372036854775807;
  unsigned long c430 = 1;
  unsigned long b431 = c429 / c430;
  __retval427 = b431;
  unsigned long t432 = __retval427;
  return t432;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v433, unsigned long v434, void* v435) {
bb436:
  struct std____new_allocator_char_* this437;
  unsigned long __n438;
  void* unnamed439;
  char* __retval440;
  this437 = v433;
  __n438 = v434;
  unnamed439 = v435;
  struct std____new_allocator_char_* t441 = this437;
    unsigned long t442 = __n438;
    unsigned long r443 = std____new_allocator_char____M_max_size___const(t441);
    _Bool c444 = ((t442 > r443)) ? 1 : 0;
    if (c444) {
        unsigned long t445 = __n438;
        unsigned long c446 = -1;
        unsigned long c447 = 1;
        unsigned long b448 = c446 / c447;
        _Bool c449 = ((t445 > b448)) ? 1 : 0;
        if (c449) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c450 = 1;
    unsigned long c451 = 16;
    _Bool c452 = ((c450 > c451)) ? 1 : 0;
    if (c452) {
      unsigned long __al453;
      unsigned long c454 = 1;
      __al453 = c454;
      unsigned long t455 = __n438;
      unsigned long c456 = 1;
      unsigned long b457 = t455 * c456;
      unsigned long t458 = __al453;
      void* r459 = operator_new_2(b457, t458);
      char* cast460 = (char*)r459;
      __retval440 = cast460;
      char* t461 = __retval440;
      return t461;
    }
  unsigned long t462 = __n438;
  unsigned long c463 = 1;
  unsigned long b464 = t462 * c463;
  void* r465 = operator_new(b464);
  char* cast466 = (char*)r465;
  __retval440 = cast466;
  char* t467 = __retval440;
  return t467;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v468, unsigned long v469) {
bb470:
  struct std__allocator_char_* this471;
  unsigned long __n472;
  char* __retval473;
  this471 = v468;
  __n472 = v469;
  struct std__allocator_char_* t474 = this471;
    _Bool r475 = std____is_constant_evaluated();
    if (r475) {
        unsigned long t476 = __n472;
        unsigned long c477 = 1;
        unsigned long ovr478;
        _Bool ovf479 = __builtin_mul_overflow(t476, c477, &ovr478);
        __n472 = ovr478;
        if (ovf479) {
          std____throw_bad_array_new_length();
        }
      unsigned long t480 = __n472;
      void* r481 = operator_new(t480);
      char* cast482 = (char*)r481;
      __retval473 = cast482;
      char* t483 = __retval473;
      return t483;
    }
  struct std____new_allocator_char_* base484 = (struct std____new_allocator_char_*)((char *)t474 + 0);
  unsigned long t485 = __n472;
  void* c486 = ((void*)0);
  char* r487 = std____new_allocator_char___allocate(base484, t485, c486);
  __retval473 = r487;
  char* t488 = __retval473;
  return t488;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v489, unsigned long v490) {
bb491:
  struct std__allocator_char_* __a492;
  unsigned long __n493;
  char* __retval494;
  __a492 = v489;
  __n493 = v490;
  struct std__allocator_char_* t495 = __a492;
  unsigned long t496 = __n493;
  char* r497 = std__allocator_char___allocate(t495, t496);
  __retval494 = r497;
  char* t498 = __retval494;
  return t498;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v499, unsigned long v500) {
bb501:
  struct std__allocator_char_* __a502;
  unsigned long __n503;
  char* __retval504;
  char* __p505;
  __a502 = v499;
  __n503 = v500;
  struct std__allocator_char_* t506 = __a502;
  unsigned long t507 = __n503;
  char* r508 = std__allocator_traits_std__allocator_char_____allocate(t506, t507);
  __p505 = r508;
  char* t509 = __p505;
  __retval504 = t509;
  char* t510 = __retval504;
  return t510;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v511) {
bb512:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this513;
  struct std__allocator_char_* __retval514;
  this513 = v511;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t515 = this513;
  struct std__allocator_char_* base516 = (struct std__allocator_char_*)((char *)&(t515->_M_dataplus) + 0);
  __retval514 = base516;
  struct std__allocator_char_* t517 = __retval514;
  return t517;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v518, unsigned long* v519, unsigned long v520) {
bb521:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this522;
  unsigned long* __capacity523;
  unsigned long __old_capacity524;
  char* __retval525;
  this522 = v518;
  __capacity523 = v519;
  __old_capacity524 = v520;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t526 = this522;
    unsigned long* t527 = __capacity523;
    unsigned long t528 = *t527;
    unsigned long r529 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t526);
    _Bool c530 = ((t528 > r529)) ? 1 : 0;
    if (c530) {
      char* cast531 = (char*)&(_str_2);
      std____throw_length_error(cast531);
    }
    unsigned long* t532 = __capacity523;
    unsigned long t533 = *t532;
    unsigned long t534 = __old_capacity524;
    _Bool c535 = ((t533 > t534)) ? 1 : 0;
    _Bool ternary536;
    if (c535) {
      unsigned long* t537 = __capacity523;
      unsigned long t538 = *t537;
      unsigned long c539 = 2;
      unsigned long t540 = __old_capacity524;
      unsigned long b541 = c539 * t540;
      _Bool c542 = ((t538 < b541)) ? 1 : 0;
      ternary536 = (_Bool)c542;
    } else {
      _Bool c543 = 0;
      ternary536 = (_Bool)c543;
    }
    if (ternary536) {
      unsigned long c544 = 2;
      unsigned long t545 = __old_capacity524;
      unsigned long b546 = c544 * t545;
      unsigned long* t547 = __capacity523;
      *t547 = b546;
        unsigned long* t548 = __capacity523;
        unsigned long t549 = *t548;
        unsigned long r550 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t526);
        _Bool c551 = ((t549 > r550)) ? 1 : 0;
        if (c551) {
          unsigned long r552 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t526);
          unsigned long* t553 = __capacity523;
          *t553 = r552;
        }
    }
  struct std__allocator_char_* r554 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t526);
  unsigned long* t555 = __capacity523;
  unsigned long t556 = *t555;
  unsigned long c557 = 1;
  unsigned long b558 = t556 + c557;
  char* r559 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r554, b558);
  __retval525 = r559;
  char* t560 = __retval525;
  return t560;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v561, unsigned long v562) {
bb563:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this564;
  unsigned long __capacity565;
  this564 = v561;
  __capacity565 = v562;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t566 = this564;
  unsigned long t567 = __capacity565;
  t566->field2._M_allocated_capacity = t567;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb568:
  _Bool __retval569;
    _Bool c570 = 0;
    __retval569 = c570;
    _Bool t571 = __retval569;
    return t571;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v572) {
bb573:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this574;
  this574 = v572;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t575 = this574;
    _Bool r576 = std__is_constant_evaluated();
    if (r576) {
        unsigned long __i577;
        unsigned long c578 = 0;
        __i577 = c578;
        while (1) {
          unsigned long t580 = __i577;
          unsigned long c581 = 15;
          _Bool c582 = ((t580 <= c581)) ? 1 : 0;
          if (!c582) break;
          char c583 = 0;
          unsigned long t584 = __i577;
          t575->field2._M_local_buf[t584] = c583;
        for_step579: ;
          unsigned long t585 = __i577;
          unsigned long u586 = t585 + 1;
          __i577 = u586;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v587, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v588) {
bb589:
  struct _Guard* this590;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s591;
  this590 = v587;
  __s591 = v588;
  struct _Guard* t592 = this590;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t593 = __s591;
  t592->_M_guarded = t593;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v594, char* v595) {
bb596:
  char* __location597;
  char* __args598;
  char* __retval599;
  void* __loc600;
  __location597 = v594;
  __args598 = v595;
  char* t601 = __location597;
  void* cast602 = (void*)t601;
  __loc600 = cast602;
    void* t603 = __loc600;
    char* cast604 = (char*)t603;
    char* t605 = __args598;
    char t606 = *t605;
    *cast604 = t606;
    __retval599 = cast604;
    char* t607 = __retval599;
    return t607;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v608, char* v609) {
bb610:
  char* __c1611;
  char* __c2612;
  __c1611 = v608;
  __c2612 = v609;
    _Bool r613 = std____is_constant_evaluated();
    if (r613) {
      char* t614 = __c1611;
      char* t615 = __c2612;
      char* r616 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t614, t615);
    } else {
      char* t617 = __c2612;
      char t618 = *t617;
      char* t619 = __c1611;
      *t619 = t618;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v620, char* v621, unsigned long v622) {
bb623:
  char* __s1624;
  char* __s2625;
  unsigned long __n626;
  char* __retval627;
  __s1624 = v620;
  __s2625 = v621;
  __n626 = v622;
    unsigned long t628 = __n626;
    unsigned long c629 = 0;
    _Bool c630 = ((t628 == c629)) ? 1 : 0;
    if (c630) {
      char* t631 = __s1624;
      __retval627 = t631;
      char* t632 = __retval627;
      return t632;
    }
    _Bool r633 = std____is_constant_evaluated();
    if (r633) {
        unsigned long __i634;
        unsigned long c635 = 0;
        __i634 = c635;
        while (1) {
          unsigned long t637 = __i634;
          unsigned long t638 = __n626;
          _Bool c639 = ((t637 < t638)) ? 1 : 0;
          if (!c639) break;
          char* t640 = __s1624;
          unsigned long t641 = __i634;
          char* ptr642 = &(t640)[t641];
          unsigned long t643 = __i634;
          char* t644 = __s2625;
          char* ptr645 = &(t644)[t643];
          char* r646 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr642, ptr645);
        for_step636: ;
          unsigned long t647 = __i634;
          unsigned long u648 = t647 + 1;
          __i634 = u648;
        }
      char* t649 = __s1624;
      __retval627 = t649;
      char* t650 = __retval627;
      return t650;
    }
  char* t651 = __s1624;
  void* cast652 = (void*)t651;
  char* t653 = __s2625;
  void* cast654 = (void*)t653;
  unsigned long t655 = __n626;
  unsigned long c656 = 1;
  unsigned long b657 = t655 * c656;
  void* r658 = memcpy(cast652, cast654, b657);
  char* t659 = __s1624;
  __retval627 = t659;
  char* t660 = __retval627;
  return t660;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v661, char* v662, unsigned long v663) {
bb664:
  char* __s1665;
  char* __s2666;
  unsigned long __n667;
  char* __retval668;
  __s1665 = v661;
  __s2666 = v662;
  __n667 = v663;
    unsigned long t669 = __n667;
    unsigned long c670 = 0;
    _Bool c671 = ((t669 == c670)) ? 1 : 0;
    if (c671) {
      char* t672 = __s1665;
      __retval668 = t672;
      char* t673 = __retval668;
      return t673;
    }
    _Bool r674 = std____is_constant_evaluated();
    if (r674) {
      char* t675 = __s1665;
      char* t676 = __s2666;
      unsigned long t677 = __n667;
      char* r678 = __gnu_cxx__char_traits_char___copy(t675, t676, t677);
      __retval668 = r678;
      char* t679 = __retval668;
      return t679;
    }
  char* t680 = __s1665;
  void* cast681 = (void*)t680;
  char* t682 = __s2666;
  void* cast683 = (void*)t682;
  unsigned long t684 = __n667;
  void* r685 = memcpy(cast681, cast683, t684);
  char* cast686 = (char*)r685;
  __retval668 = cast686;
  char* t687 = __retval668;
  return t687;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v688, char* v689, unsigned long v690) {
bb691:
  char* __d692;
  char* __s693;
  unsigned long __n694;
  __d692 = v688;
  __s693 = v689;
  __n694 = v690;
    unsigned long t695 = __n694;
    unsigned long c696 = 1;
    _Bool c697 = ((t695 == c696)) ? 1 : 0;
    if (c697) {
      char* t698 = __d692;
      char* t699 = __s693;
      std__char_traits_char___assign(t698, t699);
    } else {
      char* t700 = __d692;
      char* t701 = __s693;
      unsigned long t702 = __n694;
      char* r703 = std__char_traits_char___copy(t700, t701, t702);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v704) {
bb705:
  char* __it706;
  char* __retval707;
  __it706 = v704;
  char* t708 = __it706;
  __retval707 = t708;
  char* t709 = __retval707;
  return t709;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v710, char* v711, char* v712) {
bb713:
  char* __p714;
  char* __k1715;
  char* __k2716;
  __p714 = v710;
  __k1715 = v711;
  __k2716 = v712;
    char* t717 = __p714;
    char* t718 = __k1715;
    char* r719 = char_const__std____niter_base_char_const__(t718);
    char* t720 = __k2716;
    char* t721 = __k1715;
    long diff722 = t720 - t721;
    unsigned long cast723 = (unsigned long)diff722;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t717, r719, cast723);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v724) {
bb725:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this726;
  char* __retval727;
  this726 = v724;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t728 = this726;
  char* t729 = t728->_M_dataplus._M_p;
  __retval727 = t729;
  char* t730 = __retval727;
  return t730;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v731, unsigned long v732) {
bb733:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this734;
  unsigned long __length735;
  this734 = v731;
  __length735 = v732;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t736 = this734;
  unsigned long t737 = __length735;
  t736->_M_string_length = t737;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v738, unsigned long v739) {
bb740:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this741;
  unsigned long __n742;
  char ref_tmp0743;
  this741 = v738;
  __n742 = v739;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t744 = this741;
  unsigned long t745 = __n742;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t744, t745);
  unsigned long t746 = __n742;
  char* r747 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t744);
  char* ptr748 = &(r747)[t746];
  char c749 = 0;
  ref_tmp0743 = c749;
  std__char_traits_char___assign(ptr748, &ref_tmp0743);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v750) {
bb751:
  struct _Guard* this752;
  this752 = v750;
  struct _Guard* t753 = this752;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t754 = t753->_M_guarded;
    _Bool cast755 = (_Bool)t754;
    if (cast755) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t756 = t753->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t756);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v757, char* v758, char* v759, struct std__forward_iterator_tag v760) {
bb761:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this762;
  char* __beg763;
  char* __end764;
  struct std__forward_iterator_tag unnamed765;
  unsigned long __dnew766;
  struct _Guard __guard767;
  this762 = v757;
  __beg763 = v758;
  __end764 = v759;
  unnamed765 = v760;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t768 = this762;
  char* t769 = __beg763;
  char* t770 = __end764;
  long r771 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t769, t770);
  unsigned long cast772 = (unsigned long)r771;
  __dnew766 = cast772;
    unsigned long t773 = __dnew766;
    unsigned long c774 = 15;
    _Bool c775 = ((t773 > c774)) ? 1 : 0;
    if (c775) {
      unsigned long c776 = 0;
      char* r777 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t768, &__dnew766, c776);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t768, r777);
      unsigned long t778 = __dnew766;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t768, t778);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t768);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard767, t768);
    char* r779 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t768);
    char* t780 = __beg763;
    char* t781 = __end764;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r779, t780, t781);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c782 = ((void*)0);
    __guard767._M_guarded = c782;
    unsigned long t783 = __dnew766;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t768, t783);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard767);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v784) {
bb785:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this786;
  this786 = v784;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t787 = this786;
  {
    struct std__allocator_char_* base788 = (struct std__allocator_char_*)((char *)t787 + 0);
    std__allocator_char____allocator(base788);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v789, struct std____new_allocator_char_* v790) {
bb791:
  struct std____new_allocator_char_* this792;
  struct std____new_allocator_char_* unnamed793;
  this792 = v789;
  unnamed793 = v790;
  struct std____new_allocator_char_* t794 = this792;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v795, struct std__allocator_char_* v796) {
bb797:
  struct std__allocator_char_* this798;
  struct std__allocator_char_* __a799;
  this798 = v795;
  __a799 = v796;
  struct std__allocator_char_* t800 = this798;
  struct std____new_allocator_char_* base801 = (struct std____new_allocator_char_*)((char *)t800 + 0);
  struct std__allocator_char_* t802 = __a799;
  struct std____new_allocator_char_* base803 = (struct std____new_allocator_char_*)((char *)t802 + 0);
  std____new_allocator_char_____new_allocator(base801, base803);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v804) {
bb805:
  char* __r806;
  char* __retval807;
  __r806 = v804;
  char* t808 = __r806;
  __retval807 = t808;
  char* t809 = __retval807;
  return t809;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v810) {
bb811:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this812;
  char* __retval813;
  this812 = v810;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t814 = this812;
  char* cast815 = (char*)&(t814->field2._M_local_buf);
  char* r816 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast815);
  __retval813 = r816;
  char* t817 = __retval813;
  return t817;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v818) {
bb819:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this820;
  _Bool __retval821;
  this820 = v818;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t822 = this820;
    char* r823 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t822);
    char* r824 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t822);
    _Bool c825 = ((r823 == r824)) ? 1 : 0;
    if (c825) {
        unsigned long t826 = t822->_M_string_length;
        unsigned long c827 = 15;
        _Bool c828 = ((t826 > c827)) ? 1 : 0;
        if (c828) {
          __builtin_unreachable();
        }
      _Bool c829 = 1;
      __retval821 = c829;
      _Bool t830 = __retval821;
      return t830;
    }
  _Bool c831 = 0;
  __retval821 = c831;
  _Bool t832 = __retval821;
  return t832;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v833, char* v834, unsigned long v835) {
bb836:
  struct std____new_allocator_char_* this837;
  char* __p838;
  unsigned long __n839;
  this837 = v833;
  __p838 = v834;
  __n839 = v835;
  struct std____new_allocator_char_* t840 = this837;
    unsigned long c841 = 1;
    unsigned long c842 = 16;
    _Bool c843 = ((c841 > c842)) ? 1 : 0;
    if (c843) {
      char* t844 = __p838;
      void* cast845 = (void*)t844;
      unsigned long t846 = __n839;
      unsigned long c847 = 1;
      unsigned long b848 = t846 * c847;
      unsigned long c849 = 1;
      operator_delete_3(cast845, b848, c849);
      return;
    }
  char* t850 = __p838;
  void* cast851 = (void*)t850;
  unsigned long t852 = __n839;
  unsigned long c853 = 1;
  unsigned long b854 = t852 * c853;
  operator_delete_2(cast851, b854);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v855, char* v856, unsigned long v857) {
bb858:
  struct std__allocator_char_* this859;
  char* __p860;
  unsigned long __n861;
  this859 = v855;
  __p860 = v856;
  __n861 = v857;
  struct std__allocator_char_* t862 = this859;
    _Bool r863 = std____is_constant_evaluated();
    if (r863) {
      char* t864 = __p860;
      void* cast865 = (void*)t864;
      operator_delete(cast865);
      return;
    }
  struct std____new_allocator_char_* base866 = (struct std____new_allocator_char_*)((char *)t862 + 0);
  char* t867 = __p860;
  unsigned long t868 = __n861;
  std____new_allocator_char___deallocate(base866, t867, t868);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v869, char* v870, unsigned long v871) {
bb872:
  struct std__allocator_char_* __a873;
  char* __p874;
  unsigned long __n875;
  __a873 = v869;
  __p874 = v870;
  __n875 = v871;
  struct std__allocator_char_* t876 = __a873;
  char* t877 = __p874;
  unsigned long t878 = __n875;
  std__allocator_char___deallocate(t876, t877, t878);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v879, unsigned long v880) {
bb881:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this882;
  unsigned long __size883;
  this882 = v879;
  __size883 = v880;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t884 = this882;
  struct std__allocator_char_* r885 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t884);
  char* r886 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t884);
  unsigned long t887 = __size883;
  unsigned long c888 = 1;
  unsigned long b889 = t887 + c888;
  std__allocator_traits_std__allocator_char_____deallocate(r885, r886, b889);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v890) {
bb891:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this892;
  this892 = v890;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t893 = this892;
    _Bool r894 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t893);
    _Bool u895 = !r894;
    if (u895) {
      unsigned long t896 = t893->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t893, t896);
    }
  return;
}

