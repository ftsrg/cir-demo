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
char _str_2[117] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string-error-construct/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[50] = "basic_string: construction from null is not valid";
char _str_4[24] = "basic_string::_M_create";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, struct std__allocator_char_* p3);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
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
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* p0, char* p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** p0);
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* p0, char* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* p0);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std____throw_length_error(char* p0);
_Bool std____is_constant_evaluated();
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

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EPKcmRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v5, char* v6, unsigned long v7, struct std__allocator_char_* v8) {
bb9:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this10;
  char* __s11;
  unsigned long __n12;
  struct std__allocator_char_* __a13;
  struct std__forward_iterator_tag agg_tmp014;
  this10 = v5;
  __s11 = v6;
  __n12 = v7;
  __a13 = v8;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t15 = this10;
  char* r16 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t15);
  struct std__allocator_char_* t17 = __a13;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t15->_M_dataplus, r16, t17);
      char* t18 = __s11;
      char* c19 = ((void*)0);
      _Bool c20 = ((t18 == c19)) ? 1 : 0;
      _Bool ternary21;
      if (c20) {
        unsigned long t22 = __n12;
        unsigned long c23 = 0;
        _Bool c24 = ((t22 > c23)) ? 1 : 0;
        ternary21 = (_Bool)c24;
      } else {
        _Bool c25 = 0;
        ternary21 = (_Bool)c25;
      }
      if (ternary21) {
        char* cast26 = (char*)&(_str_3);
        std____throw_logic_error(cast26);
      }
    char* t27 = __s11;
    char* t28 = __s11;
    unsigned long t29 = __n12;
    char* ptr30 = &(t28)[t29];
    struct std__forward_iterator_tag t31 = agg_tmp014;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t15, t27, ptr30, t31);
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v32) {
bb33:
  struct std__allocator_char_* this34;
  this34 = v32;
  struct std__allocator_char_* t35 = this34;
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v36) {
bb37:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this38;
  char* __retval39;
  this38 = v36;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t40 = this38;
  char* r41 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t40);
  __retval39 = r41;
  char* t42 = __retval39;
  return t42;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v43, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v44) {
bb45:
  struct std__basic_ostream_char__std__char_traits_char__* __os46;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str47;
  struct std__basic_ostream_char__std__char_traits_char__* __retval48;
  __os46 = v43;
  __str47 = v44;
  struct std__basic_ostream_char__std__char_traits_char__* t49 = __os46;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t50 = __str47;
  char* r51 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t50);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t52 = __str47;
  unsigned long r53 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t52);
  long cast54 = (long)r53;
  struct std__basic_ostream_char__std__char_traits_char__* r55 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t49, r51, cast54);
  __retval48 = r55;
  struct std__basic_ostream_char__std__char_traits_char__* t56 = __retval48;
  return t56;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v57, void* v58) {
bb59:
  struct std__basic_ostream_char__std__char_traits_char__* this60;
  void* __pf61;
  struct std__basic_ostream_char__std__char_traits_char__* __retval62;
  this60 = v57;
  __pf61 = v58;
  struct std__basic_ostream_char__std__char_traits_char__* t63 = this60;
  void* t64 = __pf61;
  struct std__basic_ostream_char__std__char_traits_char__* r65 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t64)(t63);
  __retval62 = r65;
  struct std__basic_ostream_char__std__char_traits_char__* t66 = __retval62;
  return t66;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v67) {
bb68:
  struct std__basic_ostream_char__std__char_traits_char__* __os69;
  struct std__basic_ostream_char__std__char_traits_char__* __retval70;
  __os69 = v67;
  struct std__basic_ostream_char__std__char_traits_char__* t71 = __os69;
  struct std__basic_ostream_char__std__char_traits_char__* r72 = std__ostream__flush(t71);
  __retval70 = r72;
  struct std__basic_ostream_char__std__char_traits_char__* t73 = __retval70;
  return t73;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v74) {
bb75:
  struct std__ctype_char_* __f76;
  struct std__ctype_char_* __retval77;
  __f76 = v74;
    struct std__ctype_char_* t78 = __f76;
    _Bool cast79 = (_Bool)t78;
    _Bool u80 = !cast79;
    if (u80) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t81 = __f76;
  __retval77 = t81;
  struct std__ctype_char_* t82 = __retval77;
  return t82;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v83, char v84) {
bb85:
  struct std__ctype_char_* this86;
  char __c87;
  char __retval88;
  this86 = v83;
  __c87 = v84;
  struct std__ctype_char_* t89 = this86;
    char t90 = t89->_M_widen_ok;
    _Bool cast91 = (_Bool)t90;
    if (cast91) {
      char t92 = __c87;
      unsigned char cast93 = (unsigned char)t92;
      unsigned long cast94 = (unsigned long)cast93;
      char t95 = t89->_M_widen[cast94];
      __retval88 = t95;
      char t96 = __retval88;
      return t96;
    }
  std__ctype_char____M_widen_init___const(t89);
  char t97 = __c87;
  void** v98 = (void**)t89;
  void* v99 = *((void**)v98);
  char vcall102 = (char)__VERIFIER_virtual_call_char_char(t89, 6, t97);
  __retval88 = vcall102;
  char t103 = __retval88;
  return t103;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v104, char v105) {
bb106:
  struct std__basic_ios_char__std__char_traits_char__* this107;
  char __c108;
  char __retval109;
  this107 = v104;
  __c108 = v105;
  struct std__basic_ios_char__std__char_traits_char__* t110 = this107;
  struct std__ctype_char_* t111 = t110->_M_ctype;
  struct std__ctype_char_* r112 = std__ctype_char__const__std____check_facet_std__ctype_char___(t111);
  char t113 = __c108;
  char r114 = std__ctype_char___widen_char__const(r112, t113);
  __retval109 = r114;
  char t115 = __retval109;
  return t115;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v116) {
bb117:
  struct std__basic_ostream_char__std__char_traits_char__* __os118;
  struct std__basic_ostream_char__std__char_traits_char__* __retval119;
  __os118 = v116;
  struct std__basic_ostream_char__std__char_traits_char__* t120 = __os118;
  struct std__basic_ostream_char__std__char_traits_char__* t121 = __os118;
  void** v122 = (void**)t121;
  void* v123 = *((void**)v122);
  unsigned char* cast124 = (unsigned char*)v123;
  long c125 = -24;
  unsigned char* ptr126 = &(cast124)[c125];
  long* cast127 = (long*)ptr126;
  long t128 = *cast127;
  unsigned char* cast129 = (unsigned char*)t121;
  unsigned char* ptr130 = &(cast129)[t128];
  struct std__basic_ostream_char__std__char_traits_char__* cast131 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr130;
  struct std__basic_ios_char__std__char_traits_char__* cast132 = (struct std__basic_ios_char__std__char_traits_char__*)cast131;
  char c133 = 10;
  char r134 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast132, c133);
  struct std__basic_ostream_char__std__char_traits_char__* r135 = std__ostream__put(t120, r134);
  struct std__basic_ostream_char__std__char_traits_char__* r136 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r135);
  __retval119 = r136;
  struct std__basic_ostream_char__std__char_traits_char__* t137 = __retval119;
  return t137;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v138) {
bb139:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this140;
  unsigned long __retval141;
  unsigned long __sz142;
  this140 = v138;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t143 = this140;
  unsigned long t144 = t143->_M_string_length;
  __sz142 = t144;
    unsigned long t145 = __sz142;
    unsigned long r146 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t143);
    _Bool c147 = ((t145 > r146)) ? 1 : 0;
    if (c147) {
      __builtin_unreachable();
    }
  unsigned long t148 = __sz142;
  __retval141 = t148;
  unsigned long t149 = __retval141;
  return t149;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v150) {
bb151:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this152;
  this152 = v150;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t153 = this152;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t153);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t153->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb154:
  int __retval155;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str156;
  struct std__allocator_char_ ref_tmp0157;
  int c158 = 0;
  __retval155 = c158;
  char* cast159 = (char*)&(_str);
  unsigned long c160 = 10;
  std__allocator_char___allocator_2(&ref_tmp0157);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&str156, cast159, c160, &ref_tmp0157);
  {
    std__allocator_char____allocator(&ref_tmp0157);
  }
    struct std__basic_ostream_char__std__char_traits_char__* r161 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str156);
    struct std__basic_ostream_char__std__char_traits_char__* r162 = std__ostream__operator___std__ostream_____(r161, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    unsigned long r163 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(&str156);
    unsigned long c164 = 10;
    _Bool c165 = ((r163 == c164)) ? 1 : 0;
    if (c165) {
    } else {
      char* cast166 = (char*)&(_str_1);
      char* c167 = _str_2;
      unsigned int c168 = 16;
      char* cast169 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast166, c167, c168, cast169);
    }
    int c170 = 0;
    __retval155 = c170;
    int t171 = __retval155;
    int ret_val172 = t171;
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str156);
    }
    return ret_val172;
  int t173 = __retval155;
  return t173;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v174) {
bb175:
  struct std____new_allocator_char_* this176;
  this176 = v174;
  struct std____new_allocator_char_* t177 = this176;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v178) {
bb179:
  char* __r180;
  char* __retval181;
  __r180 = v178;
  char* t182 = __r180;
  __retval181 = t182;
  char* t183 = __retval181;
  return t183;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v184) {
bb185:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this186;
  char* __retval187;
  this186 = v184;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t188 = this186;
  char* cast189 = (char*)&(t188->field2._M_local_buf);
  char* r190 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast189);
  __retval187 = r190;
  char* t191 = __retval187;
  return t191;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v192, char* v193, struct std__allocator_char_* v194) {
bb195:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this196;
  char* __dat197;
  struct std__allocator_char_* __a198;
  this196 = v192;
  __dat197 = v193;
  __a198 = v194;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t199 = this196;
  struct std__allocator_char_* base200 = (struct std__allocator_char_*)((char *)t199 + 0);
  struct std__allocator_char_* t201 = __a198;
  std__allocator_char___allocator(base200, t201);
    char* t202 = __dat197;
    t199->_M_p = t202;
  return;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v203, char* v204, struct std__random_access_iterator_tag v205) {
bb206:
  char* __first207;
  char* __last208;
  struct std__random_access_iterator_tag unnamed209;
  long __retval210;
  __first207 = v203;
  __last208 = v204;
  unnamed209 = v205;
  char* t211 = __last208;
  char* t212 = __first207;
  long diff213 = t211 - t212;
  __retval210 = diff213;
  long t214 = __retval210;
  return t214;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v215) {
bb216:
  char** unnamed217;
  struct std__random_access_iterator_tag __retval218;
  unnamed217 = v215;
  struct std__random_access_iterator_tag t219 = __retval218;
  return t219;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v220, char* v221) {
bb222:
  char* __first223;
  char* __last224;
  long __retval225;
  struct std__random_access_iterator_tag agg_tmp0226;
  __first223 = v220;
  __last224 = v221;
  char* t227 = __first223;
  char* t228 = __last224;
  struct std__random_access_iterator_tag r229 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first223);
  agg_tmp0226 = r229;
  struct std__random_access_iterator_tag t230 = agg_tmp0226;
  long r231 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t227, t228, t230);
  __retval225 = r231;
  long t232 = __retval225;
  return t232;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v233, char* v234) {
bb235:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this236;
  char* __p237;
  this236 = v233;
  __p237 = v234;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t238 = this236;
  char* t239 = __p237;
  t238->_M_dataplus._M_p = t239;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v240) {
bb241:
  struct std__allocator_char_* __a242;
  unsigned long __retval243;
  __a242 = v240;
  unsigned long c244 = -1;
  unsigned long c245 = 1;
  unsigned long b246 = c244 / c245;
  __retval243 = b246;
  unsigned long t247 = __retval243;
  return t247;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v248) {
bb249:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this250;
  struct std__allocator_char_* __retval251;
  this250 = v248;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t252 = this250;
  struct std__allocator_char_* base253 = (struct std__allocator_char_*)((char *)&(t252->_M_dataplus) + 0);
  __retval251 = base253;
  struct std__allocator_char_* t254 = __retval251;
  return t254;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v255, unsigned long* v256) {
bb257:
  unsigned long* __a258;
  unsigned long* __b259;
  unsigned long* __retval260;
  __a258 = v255;
  __b259 = v256;
    unsigned long* t261 = __b259;
    unsigned long t262 = *t261;
    unsigned long* t263 = __a258;
    unsigned long t264 = *t263;
    _Bool c265 = ((t262 < t264)) ? 1 : 0;
    if (c265) {
      unsigned long* t266 = __b259;
      __retval260 = t266;
      unsigned long* t267 = __retval260;
      return t267;
    }
  unsigned long* t268 = __a258;
  __retval260 = t268;
  unsigned long* t269 = __retval260;
  return t269;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v270) {
bb271:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this272;
  unsigned long __retval273;
  unsigned long __diffmax274;
  unsigned long __allocmax275;
  this272 = v270;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t276 = this272;
  unsigned long c277 = 9223372036854775807;
  __diffmax274 = c277;
  struct std__allocator_char_* r278 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t276);
  unsigned long r279 = std__allocator_traits_std__allocator_char_____max_size(r278);
  __allocmax275 = r279;
  unsigned long* r280 = unsigned_long_const__std__min_unsigned_long_(&__diffmax274, &__allocmax275);
  unsigned long t281 = *r280;
  unsigned long c282 = 1;
  unsigned long b283 = t281 - c282;
  __retval273 = b283;
  unsigned long t284 = __retval273;
  return t284;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb285:
  _Bool __retval286;
    _Bool c287 = 0;
    __retval286 = c287;
    _Bool t288 = __retval286;
    return t288;
  abort();
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v289) {
bb290:
  struct std____new_allocator_char_* this291;
  unsigned long __retval292;
  this291 = v289;
  struct std____new_allocator_char_* t293 = this291;
  unsigned long c294 = 9223372036854775807;
  unsigned long c295 = 1;
  unsigned long b296 = c294 / c295;
  __retval292 = b296;
  unsigned long t297 = __retval292;
  return t297;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v298, unsigned long v299, void* v300) {
bb301:
  struct std____new_allocator_char_* this302;
  unsigned long __n303;
  void* unnamed304;
  char* __retval305;
  this302 = v298;
  __n303 = v299;
  unnamed304 = v300;
  struct std____new_allocator_char_* t306 = this302;
    unsigned long t307 = __n303;
    unsigned long r308 = std____new_allocator_char____M_max_size___const(t306);
    _Bool c309 = ((t307 > r308)) ? 1 : 0;
    if (c309) {
        unsigned long t310 = __n303;
        unsigned long c311 = -1;
        unsigned long c312 = 1;
        unsigned long b313 = c311 / c312;
        _Bool c314 = ((t310 > b313)) ? 1 : 0;
        if (c314) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c315 = 1;
    unsigned long c316 = 16;
    _Bool c317 = ((c315 > c316)) ? 1 : 0;
    if (c317) {
      unsigned long __al318;
      unsigned long c319 = 1;
      __al318 = c319;
      unsigned long t320 = __n303;
      unsigned long c321 = 1;
      unsigned long b322 = t320 * c321;
      unsigned long t323 = __al318;
      void* r324 = operator_new_2(b322, t323);
      char* cast325 = (char*)r324;
      __retval305 = cast325;
      char* t326 = __retval305;
      return t326;
    }
  unsigned long t327 = __n303;
  unsigned long c328 = 1;
  unsigned long b329 = t327 * c328;
  void* r330 = operator_new(b329);
  char* cast331 = (char*)r330;
  __retval305 = cast331;
  char* t332 = __retval305;
  return t332;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v333, unsigned long v334) {
bb335:
  struct std__allocator_char_* this336;
  unsigned long __n337;
  char* __retval338;
  this336 = v333;
  __n337 = v334;
  struct std__allocator_char_* t339 = this336;
    _Bool r340 = std____is_constant_evaluated();
    if (r340) {
        unsigned long t341 = __n337;
        unsigned long c342 = 1;
        unsigned long ovr343;
        _Bool ovf344 = __builtin_mul_overflow(t341, c342, &ovr343);
        __n337 = ovr343;
        if (ovf344) {
          std____throw_bad_array_new_length();
        }
      unsigned long t345 = __n337;
      void* r346 = operator_new(t345);
      char* cast347 = (char*)r346;
      __retval338 = cast347;
      char* t348 = __retval338;
      return t348;
    }
  struct std____new_allocator_char_* base349 = (struct std____new_allocator_char_*)((char *)t339 + 0);
  unsigned long t350 = __n337;
  void* c351 = ((void*)0);
  char* r352 = std____new_allocator_char___allocate(base349, t350, c351);
  __retval338 = r352;
  char* t353 = __retval338;
  return t353;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v354, unsigned long v355) {
bb356:
  struct std__allocator_char_* __a357;
  unsigned long __n358;
  char* __retval359;
  __a357 = v354;
  __n358 = v355;
  struct std__allocator_char_* t360 = __a357;
  unsigned long t361 = __n358;
  char* r362 = std__allocator_char___allocate(t360, t361);
  __retval359 = r362;
  char* t363 = __retval359;
  return t363;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v364, unsigned long v365) {
bb366:
  struct std__allocator_char_* __a367;
  unsigned long __n368;
  char* __retval369;
  char* __p370;
  __a367 = v364;
  __n368 = v365;
  struct std__allocator_char_* t371 = __a367;
  unsigned long t372 = __n368;
  char* r373 = std__allocator_traits_std__allocator_char_____allocate(t371, t372);
  __p370 = r373;
  char* t374 = __p370;
  __retval369 = t374;
  char* t375 = __retval369;
  return t375;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v376) {
bb377:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this378;
  struct std__allocator_char_* __retval379;
  this378 = v376;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t380 = this378;
  struct std__allocator_char_* base381 = (struct std__allocator_char_*)((char *)&(t380->_M_dataplus) + 0);
  __retval379 = base381;
  struct std__allocator_char_* t382 = __retval379;
  return t382;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v383, unsigned long* v384, unsigned long v385) {
bb386:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this387;
  unsigned long* __capacity388;
  unsigned long __old_capacity389;
  char* __retval390;
  this387 = v383;
  __capacity388 = v384;
  __old_capacity389 = v385;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t391 = this387;
    unsigned long* t392 = __capacity388;
    unsigned long t393 = *t392;
    unsigned long r394 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t391);
    _Bool c395 = ((t393 > r394)) ? 1 : 0;
    if (c395) {
      char* cast396 = (char*)&(_str_4);
      std____throw_length_error(cast396);
    }
    unsigned long* t397 = __capacity388;
    unsigned long t398 = *t397;
    unsigned long t399 = __old_capacity389;
    _Bool c400 = ((t398 > t399)) ? 1 : 0;
    _Bool ternary401;
    if (c400) {
      unsigned long* t402 = __capacity388;
      unsigned long t403 = *t402;
      unsigned long c404 = 2;
      unsigned long t405 = __old_capacity389;
      unsigned long b406 = c404 * t405;
      _Bool c407 = ((t403 < b406)) ? 1 : 0;
      ternary401 = (_Bool)c407;
    } else {
      _Bool c408 = 0;
      ternary401 = (_Bool)c408;
    }
    if (ternary401) {
      unsigned long c409 = 2;
      unsigned long t410 = __old_capacity389;
      unsigned long b411 = c409 * t410;
      unsigned long* t412 = __capacity388;
      *t412 = b411;
        unsigned long* t413 = __capacity388;
        unsigned long t414 = *t413;
        unsigned long r415 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t391);
        _Bool c416 = ((t414 > r415)) ? 1 : 0;
        if (c416) {
          unsigned long r417 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t391);
          unsigned long* t418 = __capacity388;
          *t418 = r417;
        }
    }
  struct std__allocator_char_* r419 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t391);
  unsigned long* t420 = __capacity388;
  unsigned long t421 = *t420;
  unsigned long c422 = 1;
  unsigned long b423 = t421 + c422;
  char* r424 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r419, b423);
  __retval390 = r424;
  char* t425 = __retval390;
  return t425;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v426, unsigned long v427) {
bb428:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this429;
  unsigned long __capacity430;
  this429 = v426;
  __capacity430 = v427;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t431 = this429;
  unsigned long t432 = __capacity430;
  t431->field2._M_allocated_capacity = t432;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb433:
  _Bool __retval434;
    _Bool c435 = 0;
    __retval434 = c435;
    _Bool t436 = __retval434;
    return t436;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v437) {
bb438:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this439;
  this439 = v437;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t440 = this439;
    _Bool r441 = std__is_constant_evaluated();
    if (r441) {
        unsigned long __i442;
        unsigned long c443 = 0;
        __i442 = c443;
        while (1) {
          unsigned long t445 = __i442;
          unsigned long c446 = 15;
          _Bool c447 = ((t445 <= c446)) ? 1 : 0;
          if (!c447) break;
          char c448 = 0;
          unsigned long t449 = __i442;
          t440->field2._M_local_buf[t449] = c448;
        for_step444: ;
          unsigned long t450 = __i442;
          unsigned long u451 = t450 + 1;
          __i442 = u451;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v452, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v453) {
bb454:
  struct _Guard* this455;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s456;
  this455 = v452;
  __s456 = v453;
  struct _Guard* t457 = this455;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t458 = __s456;
  t457->_M_guarded = t458;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v459, char* v460) {
bb461:
  char* __location462;
  char* __args463;
  char* __retval464;
  void* __loc465;
  __location462 = v459;
  __args463 = v460;
  char* t466 = __location462;
  void* cast467 = (void*)t466;
  __loc465 = cast467;
    void* t468 = __loc465;
    char* cast469 = (char*)t468;
    char* t470 = __args463;
    char t471 = *t470;
    *cast469 = t471;
    __retval464 = cast469;
    char* t472 = __retval464;
    return t472;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v473, char* v474) {
bb475:
  char* __c1476;
  char* __c2477;
  __c1476 = v473;
  __c2477 = v474;
    _Bool r478 = std____is_constant_evaluated();
    if (r478) {
      char* t479 = __c1476;
      char* t480 = __c2477;
      char* r481 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t479, t480);
    } else {
      char* t482 = __c2477;
      char t483 = *t482;
      char* t484 = __c1476;
      *t484 = t483;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v485, char* v486, unsigned long v487) {
bb488:
  char* __s1489;
  char* __s2490;
  unsigned long __n491;
  char* __retval492;
  __s1489 = v485;
  __s2490 = v486;
  __n491 = v487;
    unsigned long t493 = __n491;
    unsigned long c494 = 0;
    _Bool c495 = ((t493 == c494)) ? 1 : 0;
    if (c495) {
      char* t496 = __s1489;
      __retval492 = t496;
      char* t497 = __retval492;
      return t497;
    }
    _Bool r498 = std____is_constant_evaluated();
    if (r498) {
        unsigned long __i499;
        unsigned long c500 = 0;
        __i499 = c500;
        while (1) {
          unsigned long t502 = __i499;
          unsigned long t503 = __n491;
          _Bool c504 = ((t502 < t503)) ? 1 : 0;
          if (!c504) break;
          char* t505 = __s1489;
          unsigned long t506 = __i499;
          char* ptr507 = &(t505)[t506];
          unsigned long t508 = __i499;
          char* t509 = __s2490;
          char* ptr510 = &(t509)[t508];
          char* r511 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr507, ptr510);
        for_step501: ;
          unsigned long t512 = __i499;
          unsigned long u513 = t512 + 1;
          __i499 = u513;
        }
      char* t514 = __s1489;
      __retval492 = t514;
      char* t515 = __retval492;
      return t515;
    }
  char* t516 = __s1489;
  void* cast517 = (void*)t516;
  char* t518 = __s2490;
  void* cast519 = (void*)t518;
  unsigned long t520 = __n491;
  unsigned long c521 = 1;
  unsigned long b522 = t520 * c521;
  void* r523 = memcpy(cast517, cast519, b522);
  char* t524 = __s1489;
  __retval492 = t524;
  char* t525 = __retval492;
  return t525;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v526, char* v527, unsigned long v528) {
bb529:
  char* __s1530;
  char* __s2531;
  unsigned long __n532;
  char* __retval533;
  __s1530 = v526;
  __s2531 = v527;
  __n532 = v528;
    unsigned long t534 = __n532;
    unsigned long c535 = 0;
    _Bool c536 = ((t534 == c535)) ? 1 : 0;
    if (c536) {
      char* t537 = __s1530;
      __retval533 = t537;
      char* t538 = __retval533;
      return t538;
    }
    _Bool r539 = std____is_constant_evaluated();
    if (r539) {
      char* t540 = __s1530;
      char* t541 = __s2531;
      unsigned long t542 = __n532;
      char* r543 = __gnu_cxx__char_traits_char___copy(t540, t541, t542);
      __retval533 = r543;
      char* t544 = __retval533;
      return t544;
    }
  char* t545 = __s1530;
  void* cast546 = (void*)t545;
  char* t547 = __s2531;
  void* cast548 = (void*)t547;
  unsigned long t549 = __n532;
  void* r550 = memcpy(cast546, cast548, t549);
  char* cast551 = (char*)r550;
  __retval533 = cast551;
  char* t552 = __retval533;
  return t552;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v553, char* v554, unsigned long v555) {
bb556:
  char* __d557;
  char* __s558;
  unsigned long __n559;
  __d557 = v553;
  __s558 = v554;
  __n559 = v555;
    unsigned long t560 = __n559;
    unsigned long c561 = 1;
    _Bool c562 = ((t560 == c561)) ? 1 : 0;
    if (c562) {
      char* t563 = __d557;
      char* t564 = __s558;
      std__char_traits_char___assign(t563, t564);
    } else {
      char* t565 = __d557;
      char* t566 = __s558;
      unsigned long t567 = __n559;
      char* r568 = std__char_traits_char___copy(t565, t566, t567);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v569) {
bb570:
  char* __it571;
  char* __retval572;
  __it571 = v569;
  char* t573 = __it571;
  __retval572 = t573;
  char* t574 = __retval572;
  return t574;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v575, char* v576, char* v577) {
bb578:
  char* __p579;
  char* __k1580;
  char* __k2581;
  __p579 = v575;
  __k1580 = v576;
  __k2581 = v577;
    char* t582 = __p579;
    char* t583 = __k1580;
    char* r584 = char_const__std____niter_base_char_const__(t583);
    char* t585 = __k2581;
    char* t586 = __k1580;
    long diff587 = t585 - t586;
    unsigned long cast588 = (unsigned long)diff587;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t582, r584, cast588);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v589) {
bb590:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this591;
  char* __retval592;
  this591 = v589;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t593 = this591;
  char* t594 = t593->_M_dataplus._M_p;
  __retval592 = t594;
  char* t595 = __retval592;
  return t595;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v596, unsigned long v597) {
bb598:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this599;
  unsigned long __length600;
  this599 = v596;
  __length600 = v597;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t601 = this599;
  unsigned long t602 = __length600;
  t601->_M_string_length = t602;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v603, unsigned long v604) {
bb605:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this606;
  unsigned long __n607;
  char ref_tmp0608;
  this606 = v603;
  __n607 = v604;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t609 = this606;
  unsigned long t610 = __n607;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t609, t610);
  unsigned long t611 = __n607;
  char* r612 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t609);
  char* ptr613 = &(r612)[t611];
  char c614 = 0;
  ref_tmp0608 = c614;
  std__char_traits_char___assign(ptr613, &ref_tmp0608);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v615) {
bb616:
  struct _Guard* this617;
  this617 = v615;
  struct _Guard* t618 = this617;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t619 = t618->_M_guarded;
    _Bool cast620 = (_Bool)t619;
    if (cast620) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t621 = t618->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t621);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v622, char* v623, char* v624, struct std__forward_iterator_tag v625) {
bb626:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this627;
  char* __beg628;
  char* __end629;
  struct std__forward_iterator_tag unnamed630;
  unsigned long __dnew631;
  struct _Guard __guard632;
  this627 = v622;
  __beg628 = v623;
  __end629 = v624;
  unnamed630 = v625;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t633 = this627;
  char* t634 = __beg628;
  char* t635 = __end629;
  long r636 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t634, t635);
  unsigned long cast637 = (unsigned long)r636;
  __dnew631 = cast637;
    unsigned long t638 = __dnew631;
    unsigned long c639 = 15;
    _Bool c640 = ((t638 > c639)) ? 1 : 0;
    if (c640) {
      unsigned long c641 = 0;
      char* r642 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t633, &__dnew631, c641);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t633, r642);
      unsigned long t643 = __dnew631;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t633, t643);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t633);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard632, t633);
    char* r644 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t633);
    char* t645 = __beg628;
    char* t646 = __end629;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r644, t645, t646);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c647 = ((void*)0);
    __guard632._M_guarded = c647;
    unsigned long t648 = __dnew631;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t633, t648);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard632);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v649) {
bb650:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this651;
  this651 = v649;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t652 = this651;
  {
    struct std__allocator_char_* base653 = (struct std__allocator_char_*)((char *)t652 + 0);
    std__allocator_char____allocator(base653);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v654, struct std____new_allocator_char_* v655) {
bb656:
  struct std____new_allocator_char_* this657;
  struct std____new_allocator_char_* unnamed658;
  this657 = v654;
  unnamed658 = v655;
  struct std____new_allocator_char_* t659 = this657;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v660, struct std__allocator_char_* v661) {
bb662:
  struct std__allocator_char_* this663;
  struct std__allocator_char_* __a664;
  this663 = v660;
  __a664 = v661;
  struct std__allocator_char_* t665 = this663;
  struct std____new_allocator_char_* base666 = (struct std____new_allocator_char_*)((char *)t665 + 0);
  struct std__allocator_char_* t667 = __a664;
  struct std____new_allocator_char_* base668 = (struct std____new_allocator_char_*)((char *)t667 + 0);
  std____new_allocator_char_____new_allocator(base666, base668);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v669) {
bb670:
  char* __r671;
  char* __retval672;
  __r671 = v669;
  char* t673 = __r671;
  __retval672 = t673;
  char* t674 = __retval672;
  return t674;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v675) {
bb676:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this677;
  char* __retval678;
  this677 = v675;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t679 = this677;
  char* cast680 = (char*)&(t679->field2._M_local_buf);
  char* r681 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast680);
  __retval678 = r681;
  char* t682 = __retval678;
  return t682;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v683) {
bb684:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this685;
  _Bool __retval686;
  this685 = v683;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t687 = this685;
    char* r688 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t687);
    char* r689 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t687);
    _Bool c690 = ((r688 == r689)) ? 1 : 0;
    if (c690) {
        unsigned long t691 = t687->_M_string_length;
        unsigned long c692 = 15;
        _Bool c693 = ((t691 > c692)) ? 1 : 0;
        if (c693) {
          __builtin_unreachable();
        }
      _Bool c694 = 1;
      __retval686 = c694;
      _Bool t695 = __retval686;
      return t695;
    }
  _Bool c696 = 0;
  __retval686 = c696;
  _Bool t697 = __retval686;
  return t697;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v698, char* v699, unsigned long v700) {
bb701:
  struct std____new_allocator_char_* this702;
  char* __p703;
  unsigned long __n704;
  this702 = v698;
  __p703 = v699;
  __n704 = v700;
  struct std____new_allocator_char_* t705 = this702;
    unsigned long c706 = 1;
    unsigned long c707 = 16;
    _Bool c708 = ((c706 > c707)) ? 1 : 0;
    if (c708) {
      char* t709 = __p703;
      void* cast710 = (void*)t709;
      unsigned long t711 = __n704;
      unsigned long c712 = 1;
      unsigned long b713 = t711 * c712;
      unsigned long c714 = 1;
      operator_delete_3(cast710, b713, c714);
      return;
    }
  char* t715 = __p703;
  void* cast716 = (void*)t715;
  unsigned long t717 = __n704;
  unsigned long c718 = 1;
  unsigned long b719 = t717 * c718;
  operator_delete_2(cast716, b719);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v720, char* v721, unsigned long v722) {
bb723:
  struct std__allocator_char_* this724;
  char* __p725;
  unsigned long __n726;
  this724 = v720;
  __p725 = v721;
  __n726 = v722;
  struct std__allocator_char_* t727 = this724;
    _Bool r728 = std____is_constant_evaluated();
    if (r728) {
      char* t729 = __p725;
      void* cast730 = (void*)t729;
      operator_delete(cast730);
      return;
    }
  struct std____new_allocator_char_* base731 = (struct std____new_allocator_char_*)((char *)t727 + 0);
  char* t732 = __p725;
  unsigned long t733 = __n726;
  std____new_allocator_char___deallocate(base731, t732, t733);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v734, char* v735, unsigned long v736) {
bb737:
  struct std__allocator_char_* __a738;
  char* __p739;
  unsigned long __n740;
  __a738 = v734;
  __p739 = v735;
  __n740 = v736;
  struct std__allocator_char_* t741 = __a738;
  char* t742 = __p739;
  unsigned long t743 = __n740;
  std__allocator_char___deallocate(t741, t742, t743);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v744, unsigned long v745) {
bb746:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this747;
  unsigned long __size748;
  this747 = v744;
  __size748 = v745;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t749 = this747;
  struct std__allocator_char_* r750 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t749);
  char* r751 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t749);
  unsigned long t752 = __size748;
  unsigned long c753 = 1;
  unsigned long b754 = t752 + c753;
  std__allocator_traits_std__allocator_char_____deallocate(r750, r751, b754);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v755) {
bb756:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this757;
  this757 = v755;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t758 = this757;
    _Bool r759 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t758);
    _Bool u760 = !r759;
    if (u760) {
      unsigned long t761 = t758->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t758, t761);
    }
  return;
}

