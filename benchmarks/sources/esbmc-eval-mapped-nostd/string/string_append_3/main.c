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

char _str[9] = "Writing ";
char _str_1[25] = "print 10 and then 5 more";
char _str_2[14] = "dots are cool";
char _str_3[6] = "dots ";
char _str_4[15] = "str == \"dots \"";
char _str_5[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_append_3/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_6[50] = "basic_string: construction from null is not valid";
char _str_7[24] = "basic_string::_M_create";
char _str_8[21] = "basic_string::append";
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
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
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
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
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
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
        char* cast27 = (char*)&(_str_6);
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

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v35) {
bb36:
  struct std__allocator_char_* this37;
  this37 = v35;
  struct std__allocator_char_* t38 = this37;
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

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v51, unsigned long v52, unsigned long v53, char* v54) {
bb55:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this56;
  unsigned long __n157;
  unsigned long __n258;
  char* __s59;
  this56 = v51;
  __n157 = v52;
  __n258 = v53;
  __s59 = v54;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t60 = this56;
    unsigned long r61 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t60);
    unsigned long r62 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t60);
    unsigned long t63 = __n157;
    unsigned long b64 = r62 - t63;
    unsigned long b65 = r61 - b64;
    unsigned long t66 = __n258;
    _Bool c67 = ((b65 < t66)) ? 1 : 0;
    if (c67) {
      char* t68 = __s59;
      std____throw_length_error(t68);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v69) {
bb70:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this71;
  unsigned long __retval72;
  unsigned long __sz73;
  this71 = v69;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t74 = this71;
  _Bool r75 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t74);
  unsigned long ternary76;
  if (r75) {
    unsigned long c77 = 15;
    ternary76 = (unsigned long)c77;
  } else {
    unsigned long t78 = t74->field2._M_allocated_capacity;
    ternary76 = (unsigned long)t78;
  }
  __sz73 = ternary76;
    unsigned long t79 = __sz73;
    unsigned long c80 = 15;
    _Bool c81 = ((t79 < c80)) ? 1 : 0;
    _Bool ternary82;
    if (c81) {
      _Bool c83 = 1;
      ternary82 = (_Bool)c83;
    } else {
      unsigned long t84 = __sz73;
      unsigned long r85 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t74);
      _Bool c86 = ((t84 > r85)) ? 1 : 0;
      ternary82 = (_Bool)c86;
    }
    if (ternary82) {
      __builtin_unreachable();
    }
  unsigned long t87 = __sz73;
  __retval72 = t87;
  unsigned long t88 = __retval72;
  return t88;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v89) {
bb90:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this91;
  unsigned long __retval92;
  this91 = v89;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t93 = this91;
  unsigned long r94 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t93);
  __retval92 = r94;
  unsigned long t95 = __retval92;
  return t95;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v96, unsigned long v97, unsigned long v98, char* v99, unsigned long v100) {
bb101:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this102;
  unsigned long __pos103;
  unsigned long __len1104;
  char* __s105;
  unsigned long __len2106;
  unsigned long __how_much107;
  unsigned long __new_capacity108;
  char* __r109;
  this102 = v96;
  __pos103 = v97;
  __len1104 = v98;
  __s105 = v99;
  __len2106 = v100;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t110 = this102;
  unsigned long r111 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t110);
  unsigned long t112 = __pos103;
  unsigned long b113 = r111 - t112;
  unsigned long t114 = __len1104;
  unsigned long b115 = b113 - t114;
  __how_much107 = b115;
  unsigned long r116 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t110);
  unsigned long t117 = __len2106;
  unsigned long b118 = r116 + t117;
  unsigned long t119 = __len1104;
  unsigned long b120 = b118 - t119;
  __new_capacity108 = b120;
  unsigned long r121 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t110);
  char* r122 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t110, &__new_capacity108, r121);
  __r109 = r122;
    unsigned long t123 = __pos103;
    _Bool cast124 = (_Bool)t123;
    if (cast124) {
      char* t125 = __r109;
      char* r126 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t110);
      unsigned long t127 = __pos103;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t125, r126, t127);
    }
    char* t128 = __s105;
    _Bool cast129 = (_Bool)t128;
    _Bool ternary130;
    if (cast129) {
      unsigned long t131 = __len2106;
      _Bool cast132 = (_Bool)t131;
      ternary130 = (_Bool)cast132;
    } else {
      _Bool c133 = 0;
      ternary130 = (_Bool)c133;
    }
    if (ternary130) {
      char* t134 = __r109;
      unsigned long t135 = __pos103;
      char* ptr136 = &(t134)[t135];
      char* t137 = __s105;
      unsigned long t138 = __len2106;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr136, t137, t138);
    }
    unsigned long t139 = __how_much107;
    _Bool cast140 = (_Bool)t139;
    if (cast140) {
      char* t141 = __r109;
      unsigned long t142 = __pos103;
      char* ptr143 = &(t141)[t142];
      unsigned long t144 = __len2106;
      char* ptr145 = &(ptr143)[t144];
      char* r146 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t110);
      unsigned long t147 = __pos103;
      char* ptr148 = &(r146)[t147];
      unsigned long t149 = __len1104;
      char* ptr150 = &(ptr148)[t149];
      unsigned long t151 = __how_much107;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr145, ptr150, t151);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t110);
  char* t152 = __r109;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t110, t152);
  unsigned long t153 = __new_capacity108;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t110, t153);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v154, char* v155, unsigned long v156) {
bb157:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this158;
  char* __s159;
  unsigned long __n160;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval161;
  unsigned long __len162;
  this158 = v154;
  __s159 = v155;
  __n160 = v156;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t163 = this158;
  unsigned long t164 = __n160;
  unsigned long r165 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t163);
  unsigned long b166 = t164 + r165;
  __len162 = b166;
    unsigned long t167 = __len162;
    unsigned long r168 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t163);
    _Bool c169 = ((t167 <= r168)) ? 1 : 0;
    if (c169) {
        unsigned long t170 = __n160;
        _Bool cast171 = (_Bool)t170;
        if (cast171) {
          char* r172 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t163);
          unsigned long r173 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t163);
          char* ptr174 = &(r172)[r173];
          char* t175 = __s159;
          unsigned long t176 = __n160;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr174, t175, t176);
        }
    } else {
      unsigned long r177 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t163);
      unsigned long c178 = 0;
      char* t179 = __s159;
      unsigned long t180 = __n160;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t163, r177, c178, t179, t180);
    }
  unsigned long t181 = __len162;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t163, t181);
  __retval161 = t163;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t182 = __retval161;
  return t182;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v183, char* v184, unsigned long v185) {
bb186:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this187;
  char* __s188;
  unsigned long __n189;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval190;
  this187 = v183;
  __s188 = v184;
  __n189 = v185;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t191 = this187;
  unsigned long c192 = 0;
  unsigned long t193 = __n189;
  char* cast194 = (char*)&(_str_8);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t191, c192, t193, cast194);
  char* t195 = __s188;
  unsigned long t196 = __n189;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r197 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(t191, t195, t196);
  __retval190 = r197;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t198 = __retval190;
  return t198;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v199, char* v200) {
bb201:
  char* __c1202;
  char* __c2203;
  _Bool __retval204;
  __c1202 = v199;
  __c2203 = v200;
  char* t205 = __c1202;
  char t206 = *t205;
  unsigned char cast207 = (unsigned char)t206;
  int cast208 = (int)cast207;
  char* t209 = __c2203;
  char t210 = *t209;
  unsigned char cast211 = (unsigned char)t210;
  int cast212 = (int)cast211;
  _Bool c213 = ((cast208 < cast212)) ? 1 : 0;
  __retval204 = c213;
  _Bool t214 = __retval204;
  return t214;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v215, char* v216, unsigned long v217) {
bb218:
  char* __s1219;
  char* __s2220;
  unsigned long __n221;
  int __retval222;
  __s1219 = v215;
  __s2220 = v216;
  __n221 = v217;
    unsigned long t223 = __n221;
    unsigned long c224 = 0;
    _Bool c225 = ((t223 == c224)) ? 1 : 0;
    if (c225) {
      int c226 = 0;
      __retval222 = c226;
      int t227 = __retval222;
      return t227;
    }
    _Bool r228 = std____is_constant_evaluated();
    if (r228) {
        unsigned long __i229;
        unsigned long c230 = 0;
        __i229 = c230;
        while (1) {
          unsigned long t232 = __i229;
          unsigned long t233 = __n221;
          _Bool c234 = ((t232 < t233)) ? 1 : 0;
          if (!c234) break;
            unsigned long t235 = __i229;
            char* t236 = __s1219;
            char* ptr237 = &(t236)[t235];
            unsigned long t238 = __i229;
            char* t239 = __s2220;
            char* ptr240 = &(t239)[t238];
            _Bool r241 = std__char_traits_char___lt(ptr237, ptr240);
            if (r241) {
              int c242 = -1;
              __retval222 = c242;
              int t243 = __retval222;
              int ret_val244 = t243;
              return ret_val244;
            } else {
                unsigned long t245 = __i229;
                char* t246 = __s2220;
                char* ptr247 = &(t246)[t245];
                unsigned long t248 = __i229;
                char* t249 = __s1219;
                char* ptr250 = &(t249)[t248];
                _Bool r251 = std__char_traits_char___lt(ptr247, ptr250);
                if (r251) {
                  int c252 = 1;
                  __retval222 = c252;
                  int t253 = __retval222;
                  int ret_val254 = t253;
                  return ret_val254;
                }
            }
        for_step231: ;
          unsigned long t255 = __i229;
          unsigned long u256 = t255 + 1;
          __i229 = u256;
        }
      int c257 = 0;
      __retval222 = c257;
      int t258 = __retval222;
      return t258;
    }
  char* t259 = __s1219;
  void* cast260 = (void*)t259;
  char* t261 = __s2220;
  void* cast262 = (void*)t261;
  unsigned long t263 = __n221;
  int r264 = memcmp(cast260, cast262, t263);
  __retval222 = r264;
  int t265 = __retval222;
  return t265;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v266) {
bb267:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this268;
  char* __retval269;
  this268 = v266;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t270 = this268;
  char* r271 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t270);
  __retval269 = r271;
  char* t272 = __retval269;
  return t272;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v273, char* v274) {
bb275:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs276;
  char* __rhs277;
  _Bool __retval278;
  __lhs276 = v273;
  __rhs277 = v274;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t279 = __lhs276;
  unsigned long r280 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t279);
  char* t281 = __rhs277;
  unsigned long r282 = std__char_traits_char___length(t281);
  _Bool c283 = ((r280 == r282)) ? 1 : 0;
  _Bool ternary284;
  if (c283) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t285 = __lhs276;
    char* r286 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t285);
    char* t287 = __rhs277;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t288 = __lhs276;
    unsigned long r289 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t288);
    int r290 = std__char_traits_char___compare(r286, t287, r289);
    _Bool cast291 = (_Bool)r290;
    _Bool u292 = !cast291;
    ternary284 = (_Bool)u292;
  } else {
    _Bool c293 = 0;
    ternary284 = (_Bool)c293;
  }
  __retval278 = ternary284;
  _Bool t294 = __retval278;
  return t294;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v295, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v296) {
bb297:
  struct std__basic_ostream_char__std__char_traits_char__* __os298;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str299;
  struct std__basic_ostream_char__std__char_traits_char__* __retval300;
  __os298 = v295;
  __str299 = v296;
  struct std__basic_ostream_char__std__char_traits_char__* t301 = __os298;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t302 = __str299;
  char* r303 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t302);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t304 = __str299;
  unsigned long r305 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t304);
  long cast306 = (long)r305;
  struct std__basic_ostream_char__std__char_traits_char__* r307 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t301, r303, cast306);
  __retval300 = r307;
  struct std__basic_ostream_char__std__char_traits_char__* t308 = __retval300;
  return t308;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v309, void* v310) {
bb311:
  struct std__basic_ostream_char__std__char_traits_char__* this312;
  void* __pf313;
  struct std__basic_ostream_char__std__char_traits_char__* __retval314;
  this312 = v309;
  __pf313 = v310;
  struct std__basic_ostream_char__std__char_traits_char__* t315 = this312;
  void* t316 = __pf313;
  struct std__basic_ostream_char__std__char_traits_char__* r317 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t316)(t315);
  __retval314 = r317;
  struct std__basic_ostream_char__std__char_traits_char__* t318 = __retval314;
  return t318;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v319) {
bb320:
  struct std__basic_ostream_char__std__char_traits_char__* __os321;
  struct std__basic_ostream_char__std__char_traits_char__* __retval322;
  __os321 = v319;
  struct std__basic_ostream_char__std__char_traits_char__* t323 = __os321;
  struct std__basic_ostream_char__std__char_traits_char__* r324 = std__ostream__flush(t323);
  __retval322 = r324;
  struct std__basic_ostream_char__std__char_traits_char__* t325 = __retval322;
  return t325;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v326) {
bb327:
  struct std__ctype_char_* __f328;
  struct std__ctype_char_* __retval329;
  __f328 = v326;
    struct std__ctype_char_* t330 = __f328;
    _Bool cast331 = (_Bool)t330;
    _Bool u332 = !cast331;
    if (u332) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t333 = __f328;
  __retval329 = t333;
  struct std__ctype_char_* t334 = __retval329;
  return t334;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v335, char v336) {
bb337:
  struct std__ctype_char_* this338;
  char __c339;
  char __retval340;
  this338 = v335;
  __c339 = v336;
  struct std__ctype_char_* t341 = this338;
    char t342 = t341->_M_widen_ok;
    _Bool cast343 = (_Bool)t342;
    if (cast343) {
      char t344 = __c339;
      unsigned char cast345 = (unsigned char)t344;
      unsigned long cast346 = (unsigned long)cast345;
      char t347 = t341->_M_widen[cast346];
      __retval340 = t347;
      char t348 = __retval340;
      return t348;
    }
  std__ctype_char____M_widen_init___const(t341);
  char t349 = __c339;
  void** v350 = (void**)t341;
  void* v351 = *((void**)v350);
  char vcall354 = (char)__VERIFIER_virtual_call_char_char(t341, 6, t349);
  __retval340 = vcall354;
  char t355 = __retval340;
  return t355;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v356, char v357) {
bb358:
  struct std__basic_ios_char__std__char_traits_char__* this359;
  char __c360;
  char __retval361;
  this359 = v356;
  __c360 = v357;
  struct std__basic_ios_char__std__char_traits_char__* t362 = this359;
  struct std__ctype_char_* t363 = t362->_M_ctype;
  struct std__ctype_char_* r364 = std__ctype_char__const__std____check_facet_std__ctype_char___(t363);
  char t365 = __c360;
  char r366 = std__ctype_char___widen_char__const(r364, t365);
  __retval361 = r366;
  char t367 = __retval361;
  return t367;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v368) {
bb369:
  struct std__basic_ostream_char__std__char_traits_char__* __os370;
  struct std__basic_ostream_char__std__char_traits_char__* __retval371;
  __os370 = v368;
  struct std__basic_ostream_char__std__char_traits_char__* t372 = __os370;
  struct std__basic_ostream_char__std__char_traits_char__* t373 = __os370;
  void** v374 = (void**)t373;
  void* v375 = *((void**)v374);
  unsigned char* cast376 = (unsigned char*)v375;
  long c377 = -24;
  unsigned char* ptr378 = &(cast376)[c377];
  long* cast379 = (long*)ptr378;
  long t380 = *cast379;
  unsigned char* cast381 = (unsigned char*)t373;
  unsigned char* ptr382 = &(cast381)[t380];
  struct std__basic_ostream_char__std__char_traits_char__* cast383 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr382;
  struct std__basic_ios_char__std__char_traits_char__* cast384 = (struct std__basic_ios_char__std__char_traits_char__*)cast383;
  char c385 = 10;
  char r386 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast384, c385);
  struct std__basic_ostream_char__std__char_traits_char__* r387 = std__ostream__put(t372, r386);
  struct std__basic_ostream_char__std__char_traits_char__* r388 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r387);
  __retval371 = r388;
  struct std__basic_ostream_char__std__char_traits_char__* t389 = __retval371;
  return t389;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v390) {
bb391:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this392;
  this392 = v390;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t393 = this392;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t393);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t393->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb394:
  int __retval395;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str396;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2397;
  struct std__allocator_char_ ref_tmp0398;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str3399;
  struct std__allocator_char_ ref_tmp1400;
  int c401 = 0;
  __retval395 = c401;
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str396);
    char* cast402 = (char*)&(_str);
    std__allocator_char___allocator_2(&ref_tmp0398);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str2397, cast402, &ref_tmp0398);
    {
      std__allocator_char____allocator(&ref_tmp0398);
    }
      char* cast403 = (char*)&(_str_1);
      std__allocator_char___allocator_2(&ref_tmp1400);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str3399, cast403, &ref_tmp1400);
      {
        std__allocator_char____allocator(&ref_tmp1400);
      }
        char* cast404 = (char*)&(_str_2);
        unsigned long c405 = 5;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r406 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(&str396, cast404, c405);
        char* cast407 = (char*)&(_str_3);
        _Bool r408 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str396, cast407);
        if (r408) {
        } else {
          char* cast409 = (char*)&(_str_4);
          char* c410 = _str_5;
          unsigned int c411 = 22;
          char* cast412 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast409, c410, c411, cast412);
        }
        struct std__basic_ostream_char__std__char_traits_char__* r413 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str396);
        struct std__basic_ostream_char__std__char_traits_char__* r414 = std__ostream__operator___std__ostream_____(r413, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        int c415 = 0;
        __retval395 = c415;
        int t416 = __retval395;
        int ret_val417 = t416;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str3399);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str2397);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str396);
        }
        return ret_val417;
  int t418 = __retval395;
  return t418;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v419) {
bb420:
  char* __r421;
  char* __retval422;
  __r421 = v419;
  char* t423 = __r421;
  __retval422 = t423;
  char* t424 = __retval422;
  return t424;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v425) {
bb426:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this427;
  char* __retval428;
  this427 = v425;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t429 = this427;
  char* cast430 = (char*)&(t429->field2._M_local_buf);
  char* r431 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast430);
  __retval428 = r431;
  char* t432 = __retval428;
  return t432;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v433, char* v434, struct std__allocator_char_* v435) {
bb436:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this437;
  char* __dat438;
  struct std__allocator_char_* __a439;
  this437 = v433;
  __dat438 = v434;
  __a439 = v435;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t440 = this437;
  struct std__allocator_char_* base441 = (struct std__allocator_char_*)((char *)t440 + 0);
  struct std__allocator_char_* t442 = __a439;
  std__allocator_char___allocator(base441, t442);
    char* t443 = __dat438;
    t440->_M_p = t443;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb444:
  _Bool __retval445;
    _Bool c446 = 0;
    __retval445 = c446;
    _Bool t447 = __retval445;
    return t447;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v448) {
bb449:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this450;
  this450 = v448;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t451 = this450;
    _Bool r452 = std__is_constant_evaluated();
    if (r452) {
        unsigned long __i453;
        unsigned long c454 = 0;
        __i453 = c454;
        while (1) {
          unsigned long t456 = __i453;
          unsigned long c457 = 15;
          _Bool c458 = ((t456 <= c457)) ? 1 : 0;
          if (!c458) break;
          char c459 = 0;
          unsigned long t460 = __i453;
          t451->field2._M_local_buf[t460] = c459;
        for_step455: ;
          unsigned long t461 = __i453;
          unsigned long u462 = t461 + 1;
          __i453 = u462;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v463, unsigned long v464) {
bb465:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this466;
  unsigned long __length467;
  this466 = v463;
  __length467 = v464;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t468 = this466;
  unsigned long t469 = __length467;
  t468->_M_string_length = t469;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb470:
  _Bool __retval471;
    _Bool c472 = 0;
    __retval471 = c472;
    _Bool t473 = __retval471;
    return t473;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v474, char* v475) {
bb476:
  char* __location477;
  char* __args478;
  char* __retval479;
  void* __loc480;
  __location477 = v474;
  __args478 = v475;
  char* t481 = __location477;
  void* cast482 = (void*)t481;
  __loc480 = cast482;
    void* t483 = __loc480;
    char* cast484 = (char*)t483;
    char* t485 = __args478;
    char t486 = *t485;
    *cast484 = t486;
    __retval479 = cast484;
    char* t487 = __retval479;
    return t487;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v488, char* v489) {
bb490:
  char* __c1491;
  char* __c2492;
  __c1491 = v488;
  __c2492 = v489;
    _Bool r493 = std____is_constant_evaluated();
    if (r493) {
      char* t494 = __c1491;
      char* t495 = __c2492;
      char* r496 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t494, t495);
    } else {
      char* t497 = __c2492;
      char t498 = *t497;
      char* t499 = __c1491;
      *t499 = t498;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v500) {
bb501:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this502;
  char* __retval503;
  this502 = v500;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t504 = this502;
  char* t505 = t504->_M_dataplus._M_p;
  __retval503 = t505;
  char* t506 = __retval503;
  return t506;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v507, unsigned long v508) {
bb509:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this510;
  unsigned long __n511;
  char ref_tmp0512;
  this510 = v507;
  __n511 = v508;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t513 = this510;
  unsigned long t514 = __n511;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t513, t514);
  unsigned long t515 = __n511;
  char* r516 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t513);
  char* ptr517 = &(r516)[t515];
  char c518 = 0;
  ref_tmp0512 = c518;
  std__char_traits_char___assign(ptr517, &ref_tmp0512);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v519) {
bb520:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this521;
  this521 = v519;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t522 = this521;
  {
    struct std__allocator_char_* base523 = (struct std__allocator_char_*)((char *)t522 + 0);
    std__allocator_char____allocator(base523);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v524, struct std____new_allocator_char_* v525) {
bb526:
  struct std____new_allocator_char_* this527;
  struct std____new_allocator_char_* unnamed528;
  this527 = v524;
  unnamed528 = v525;
  struct std____new_allocator_char_* t529 = this527;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v530, struct std__allocator_char_* v531) {
bb532:
  struct std__allocator_char_* this533;
  struct std__allocator_char_* __a534;
  this533 = v530;
  __a534 = v531;
  struct std__allocator_char_* t535 = this533;
  struct std____new_allocator_char_* base536 = (struct std____new_allocator_char_*)((char *)t535 + 0);
  struct std__allocator_char_* t537 = __a534;
  struct std____new_allocator_char_* base538 = (struct std____new_allocator_char_*)((char *)t537 + 0);
  std____new_allocator_char_____new_allocator(base536, base538);
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v539) {
bb540:
  struct std____new_allocator_char_* this541;
  this541 = v539;
  struct std____new_allocator_char_* t542 = this541;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v543, char* v544, struct std__allocator_char_* v545) {
bb546:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this547;
  char* __dat548;
  struct std__allocator_char_* __a549;
  this547 = v543;
  __dat548 = v544;
  __a549 = v545;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t550 = this547;
  struct std__allocator_char_* base551 = (struct std__allocator_char_*)((char *)t550 + 0);
  struct std__allocator_char_* t552 = __a549;
  std__allocator_char___allocator(base551, t552);
    char* t553 = __dat548;
    t550->_M_p = t553;
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v554, char* v555) {
bb556:
  char* __c1557;
  char* __c2558;
  _Bool __retval559;
  __c1557 = v554;
  __c2558 = v555;
  char* t560 = __c1557;
  char t561 = *t560;
  int cast562 = (int)t561;
  char* t563 = __c2558;
  char t564 = *t563;
  int cast565 = (int)t564;
  _Bool c566 = ((cast562 == cast565)) ? 1 : 0;
  __retval559 = c566;
  _Bool t567 = __retval559;
  return t567;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v568) {
bb569:
  char* __p570;
  unsigned long __retval571;
  unsigned long __i572;
  __p570 = v568;
  unsigned long c573 = 0;
  __i572 = c573;
    char ref_tmp0574;
    while (1) {
      unsigned long t575 = __i572;
      char* t576 = __p570;
      char* ptr577 = &(t576)[t575];
      char c578 = 0;
      ref_tmp0574 = c578;
      _Bool r579 = __gnu_cxx__char_traits_char___eq(ptr577, &ref_tmp0574);
      _Bool u580 = !r579;
      if (!u580) break;
      unsigned long t581 = __i572;
      unsigned long u582 = t581 + 1;
      __i572 = u582;
    }
  unsigned long t583 = __i572;
  __retval571 = t583;
  unsigned long t584 = __retval571;
  return t584;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v585) {
bb586:
  char* __s587;
  unsigned long __retval588;
  __s587 = v585;
    _Bool r589 = std____is_constant_evaluated();
    if (r589) {
      char* t590 = __s587;
      unsigned long r591 = __gnu_cxx__char_traits_char___length(t590);
      __retval588 = r591;
      unsigned long t592 = __retval588;
      return t592;
    }
  char* t593 = __s587;
  unsigned long r594 = strlen(t593);
  __retval588 = r594;
  unsigned long t595 = __retval588;
  return t595;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v596, char* v597, struct std__random_access_iterator_tag v598) {
bb599:
  char* __first600;
  char* __last601;
  struct std__random_access_iterator_tag unnamed602;
  long __retval603;
  __first600 = v596;
  __last601 = v597;
  unnamed602 = v598;
  char* t604 = __last601;
  char* t605 = __first600;
  long diff606 = t604 - t605;
  __retval603 = diff606;
  long t607 = __retval603;
  return t607;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v608) {
bb609:
  char** unnamed610;
  struct std__random_access_iterator_tag __retval611;
  unnamed610 = v608;
  struct std__random_access_iterator_tag t612 = __retval611;
  return t612;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v613, char* v614) {
bb615:
  char* __first616;
  char* __last617;
  long __retval618;
  struct std__random_access_iterator_tag agg_tmp0619;
  __first616 = v613;
  __last617 = v614;
  char* t620 = __first616;
  char* t621 = __last617;
  struct std__random_access_iterator_tag r622 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first616);
  agg_tmp0619 = r622;
  struct std__random_access_iterator_tag t623 = agg_tmp0619;
  long r624 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t620, t621, t623);
  __retval618 = r624;
  long t625 = __retval618;
  return t625;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v626, char* v627) {
bb628:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this629;
  char* __p630;
  this629 = v626;
  __p630 = v627;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t631 = this629;
  char* t632 = __p630;
  t631->_M_dataplus._M_p = t632;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v633) {
bb634:
  struct std__allocator_char_* __a635;
  unsigned long __retval636;
  __a635 = v633;
  unsigned long c637 = -1;
  unsigned long c638 = 1;
  unsigned long b639 = c637 / c638;
  __retval636 = b639;
  unsigned long t640 = __retval636;
  return t640;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v641) {
bb642:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this643;
  struct std__allocator_char_* __retval644;
  this643 = v641;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t645 = this643;
  struct std__allocator_char_* base646 = (struct std__allocator_char_*)((char *)&(t645->_M_dataplus) + 0);
  __retval644 = base646;
  struct std__allocator_char_* t647 = __retval644;
  return t647;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v648, unsigned long* v649) {
bb650:
  unsigned long* __a651;
  unsigned long* __b652;
  unsigned long* __retval653;
  __a651 = v648;
  __b652 = v649;
    unsigned long* t654 = __b652;
    unsigned long t655 = *t654;
    unsigned long* t656 = __a651;
    unsigned long t657 = *t656;
    _Bool c658 = ((t655 < t657)) ? 1 : 0;
    if (c658) {
      unsigned long* t659 = __b652;
      __retval653 = t659;
      unsigned long* t660 = __retval653;
      return t660;
    }
  unsigned long* t661 = __a651;
  __retval653 = t661;
  unsigned long* t662 = __retval653;
  return t662;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v663) {
bb664:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this665;
  unsigned long __retval666;
  unsigned long __diffmax667;
  unsigned long __allocmax668;
  this665 = v663;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t669 = this665;
  unsigned long c670 = 9223372036854775807;
  __diffmax667 = c670;
  struct std__allocator_char_* r671 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t669);
  unsigned long r672 = std__allocator_traits_std__allocator_char_____max_size(r671);
  __allocmax668 = r672;
  unsigned long* r673 = unsigned_long_const__std__min_unsigned_long_(&__diffmax667, &__allocmax668);
  unsigned long t674 = *r673;
  unsigned long c675 = 1;
  unsigned long b676 = t674 - c675;
  __retval666 = b676;
  unsigned long t677 = __retval666;
  return t677;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v678) {
bb679:
  struct std____new_allocator_char_* this680;
  unsigned long __retval681;
  this680 = v678;
  struct std____new_allocator_char_* t682 = this680;
  unsigned long c683 = 9223372036854775807;
  unsigned long c684 = 1;
  unsigned long b685 = c683 / c684;
  __retval681 = b685;
  unsigned long t686 = __retval681;
  return t686;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v687, unsigned long v688, void* v689) {
bb690:
  struct std____new_allocator_char_* this691;
  unsigned long __n692;
  void* unnamed693;
  char* __retval694;
  this691 = v687;
  __n692 = v688;
  unnamed693 = v689;
  struct std____new_allocator_char_* t695 = this691;
    unsigned long t696 = __n692;
    unsigned long r697 = std____new_allocator_char____M_max_size___const(t695);
    _Bool c698 = ((t696 > r697)) ? 1 : 0;
    if (c698) {
        unsigned long t699 = __n692;
        unsigned long c700 = -1;
        unsigned long c701 = 1;
        unsigned long b702 = c700 / c701;
        _Bool c703 = ((t699 > b702)) ? 1 : 0;
        if (c703) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c704 = 1;
    unsigned long c705 = 16;
    _Bool c706 = ((c704 > c705)) ? 1 : 0;
    if (c706) {
      unsigned long __al707;
      unsigned long c708 = 1;
      __al707 = c708;
      unsigned long t709 = __n692;
      unsigned long c710 = 1;
      unsigned long b711 = t709 * c710;
      unsigned long t712 = __al707;
      void* r713 = operator_new_2(b711, t712);
      char* cast714 = (char*)r713;
      __retval694 = cast714;
      char* t715 = __retval694;
      return t715;
    }
  unsigned long t716 = __n692;
  unsigned long c717 = 1;
  unsigned long b718 = t716 * c717;
  void* r719 = operator_new(b718);
  char* cast720 = (char*)r719;
  __retval694 = cast720;
  char* t721 = __retval694;
  return t721;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v722, unsigned long v723) {
bb724:
  struct std__allocator_char_* this725;
  unsigned long __n726;
  char* __retval727;
  this725 = v722;
  __n726 = v723;
  struct std__allocator_char_* t728 = this725;
    _Bool r729 = std____is_constant_evaluated();
    if (r729) {
        unsigned long t730 = __n726;
        unsigned long c731 = 1;
        unsigned long ovr732;
        _Bool ovf733 = __builtin_mul_overflow(t730, c731, &ovr732);
        __n726 = ovr732;
        if (ovf733) {
          std____throw_bad_array_new_length();
        }
      unsigned long t734 = __n726;
      void* r735 = operator_new(t734);
      char* cast736 = (char*)r735;
      __retval727 = cast736;
      char* t737 = __retval727;
      return t737;
    }
  struct std____new_allocator_char_* base738 = (struct std____new_allocator_char_*)((char *)t728 + 0);
  unsigned long t739 = __n726;
  void* c740 = ((void*)0);
  char* r741 = std____new_allocator_char___allocate(base738, t739, c740);
  __retval727 = r741;
  char* t742 = __retval727;
  return t742;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v743, unsigned long v744) {
bb745:
  struct std__allocator_char_* __a746;
  unsigned long __n747;
  char* __retval748;
  __a746 = v743;
  __n747 = v744;
  struct std__allocator_char_* t749 = __a746;
  unsigned long t750 = __n747;
  char* r751 = std__allocator_char___allocate(t749, t750);
  __retval748 = r751;
  char* t752 = __retval748;
  return t752;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v753, unsigned long v754) {
bb755:
  struct std__allocator_char_* __a756;
  unsigned long __n757;
  char* __retval758;
  char* __p759;
  __a756 = v753;
  __n757 = v754;
  struct std__allocator_char_* t760 = __a756;
  unsigned long t761 = __n757;
  char* r762 = std__allocator_traits_std__allocator_char_____allocate(t760, t761);
  __p759 = r762;
  char* t763 = __p759;
  __retval758 = t763;
  char* t764 = __retval758;
  return t764;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v765) {
bb766:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this767;
  struct std__allocator_char_* __retval768;
  this767 = v765;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t769 = this767;
  struct std__allocator_char_* base770 = (struct std__allocator_char_*)((char *)&(t769->_M_dataplus) + 0);
  __retval768 = base770;
  struct std__allocator_char_* t771 = __retval768;
  return t771;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v772, unsigned long* v773, unsigned long v774) {
bb775:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this776;
  unsigned long* __capacity777;
  unsigned long __old_capacity778;
  char* __retval779;
  this776 = v772;
  __capacity777 = v773;
  __old_capacity778 = v774;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t780 = this776;
    unsigned long* t781 = __capacity777;
    unsigned long t782 = *t781;
    unsigned long r783 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t780);
    _Bool c784 = ((t782 > r783)) ? 1 : 0;
    if (c784) {
      char* cast785 = (char*)&(_str_7);
      std____throw_length_error(cast785);
    }
    unsigned long* t786 = __capacity777;
    unsigned long t787 = *t786;
    unsigned long t788 = __old_capacity778;
    _Bool c789 = ((t787 > t788)) ? 1 : 0;
    _Bool ternary790;
    if (c789) {
      unsigned long* t791 = __capacity777;
      unsigned long t792 = *t791;
      unsigned long c793 = 2;
      unsigned long t794 = __old_capacity778;
      unsigned long b795 = c793 * t794;
      _Bool c796 = ((t792 < b795)) ? 1 : 0;
      ternary790 = (_Bool)c796;
    } else {
      _Bool c797 = 0;
      ternary790 = (_Bool)c797;
    }
    if (ternary790) {
      unsigned long c798 = 2;
      unsigned long t799 = __old_capacity778;
      unsigned long b800 = c798 * t799;
      unsigned long* t801 = __capacity777;
      *t801 = b800;
        unsigned long* t802 = __capacity777;
        unsigned long t803 = *t802;
        unsigned long r804 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t780);
        _Bool c805 = ((t803 > r804)) ? 1 : 0;
        if (c805) {
          unsigned long r806 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t780);
          unsigned long* t807 = __capacity777;
          *t807 = r806;
        }
    }
  struct std__allocator_char_* r808 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t780);
  unsigned long* t809 = __capacity777;
  unsigned long t810 = *t809;
  unsigned long c811 = 1;
  unsigned long b812 = t810 + c811;
  char* r813 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r808, b812);
  __retval779 = r813;
  char* t814 = __retval779;
  return t814;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v815, unsigned long v816) {
bb817:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this818;
  unsigned long __capacity819;
  this818 = v815;
  __capacity819 = v816;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t820 = this818;
  unsigned long t821 = __capacity819;
  t820->field2._M_allocated_capacity = t821;
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v822, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v823) {
bb824:
  struct _Guard* this825;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s826;
  this825 = v822;
  __s826 = v823;
  struct _Guard* t827 = this825;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t828 = __s826;
  t827->_M_guarded = t828;
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v829, char* v830, unsigned long v831) {
bb832:
  char* __s1833;
  char* __s2834;
  unsigned long __n835;
  char* __retval836;
  __s1833 = v829;
  __s2834 = v830;
  __n835 = v831;
    unsigned long t837 = __n835;
    unsigned long c838 = 0;
    _Bool c839 = ((t837 == c838)) ? 1 : 0;
    if (c839) {
      char* t840 = __s1833;
      __retval836 = t840;
      char* t841 = __retval836;
      return t841;
    }
    _Bool r842 = std____is_constant_evaluated();
    if (r842) {
        unsigned long __i843;
        unsigned long c844 = 0;
        __i843 = c844;
        while (1) {
          unsigned long t846 = __i843;
          unsigned long t847 = __n835;
          _Bool c848 = ((t846 < t847)) ? 1 : 0;
          if (!c848) break;
          char* t849 = __s1833;
          unsigned long t850 = __i843;
          char* ptr851 = &(t849)[t850];
          unsigned long t852 = __i843;
          char* t853 = __s2834;
          char* ptr854 = &(t853)[t852];
          char* r855 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr851, ptr854);
        for_step845: ;
          unsigned long t856 = __i843;
          unsigned long u857 = t856 + 1;
          __i843 = u857;
        }
      char* t858 = __s1833;
      __retval836 = t858;
      char* t859 = __retval836;
      return t859;
    }
  char* t860 = __s1833;
  void* cast861 = (void*)t860;
  char* t862 = __s2834;
  void* cast863 = (void*)t862;
  unsigned long t864 = __n835;
  unsigned long c865 = 1;
  unsigned long b866 = t864 * c865;
  void* r867 = memcpy(cast861, cast863, b866);
  char* t868 = __s1833;
  __retval836 = t868;
  char* t869 = __retval836;
  return t869;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v870, char* v871, unsigned long v872) {
bb873:
  char* __s1874;
  char* __s2875;
  unsigned long __n876;
  char* __retval877;
  __s1874 = v870;
  __s2875 = v871;
  __n876 = v872;
    unsigned long t878 = __n876;
    unsigned long c879 = 0;
    _Bool c880 = ((t878 == c879)) ? 1 : 0;
    if (c880) {
      char* t881 = __s1874;
      __retval877 = t881;
      char* t882 = __retval877;
      return t882;
    }
    _Bool r883 = std____is_constant_evaluated();
    if (r883) {
      char* t884 = __s1874;
      char* t885 = __s2875;
      unsigned long t886 = __n876;
      char* r887 = __gnu_cxx__char_traits_char___copy(t884, t885, t886);
      __retval877 = r887;
      char* t888 = __retval877;
      return t888;
    }
  char* t889 = __s1874;
  void* cast890 = (void*)t889;
  char* t891 = __s2875;
  void* cast892 = (void*)t891;
  unsigned long t893 = __n876;
  void* r894 = memcpy(cast890, cast892, t893);
  char* cast895 = (char*)r894;
  __retval877 = cast895;
  char* t896 = __retval877;
  return t896;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v897, char* v898, unsigned long v899) {
bb900:
  char* __d901;
  char* __s902;
  unsigned long __n903;
  __d901 = v897;
  __s902 = v898;
  __n903 = v899;
    unsigned long t904 = __n903;
    unsigned long c905 = 1;
    _Bool c906 = ((t904 == c905)) ? 1 : 0;
    if (c906) {
      char* t907 = __d901;
      char* t908 = __s902;
      std__char_traits_char___assign(t907, t908);
    } else {
      char* t909 = __d901;
      char* t910 = __s902;
      unsigned long t911 = __n903;
      char* r912 = std__char_traits_char___copy(t909, t910, t911);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v913) {
bb914:
  char* __it915;
  char* __retval916;
  __it915 = v913;
  char* t917 = __it915;
  __retval916 = t917;
  char* t918 = __retval916;
  return t918;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v919, char* v920, char* v921) {
bb922:
  char* __p923;
  char* __k1924;
  char* __k2925;
  __p923 = v919;
  __k1924 = v920;
  __k2925 = v921;
    char* t926 = __p923;
    char* t927 = __k1924;
    char* r928 = char_const__std____niter_base_char_const__(t927);
    char* t929 = __k2925;
    char* t930 = __k1924;
    long diff931 = t929 - t930;
    unsigned long cast932 = (unsigned long)diff931;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t926, r928, cast932);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v933) {
bb934:
  struct _Guard* this935;
  this935 = v933;
  struct _Guard* t936 = this935;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t937 = t936->_M_guarded;
    _Bool cast938 = (_Bool)t937;
    if (cast938) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t939 = t936->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t939);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v940, char* v941, char* v942, struct std__forward_iterator_tag v943) {
bb944:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this945;
  char* __beg946;
  char* __end947;
  struct std__forward_iterator_tag unnamed948;
  unsigned long __dnew949;
  struct _Guard __guard950;
  this945 = v940;
  __beg946 = v941;
  __end947 = v942;
  unnamed948 = v943;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t951 = this945;
  char* t952 = __beg946;
  char* t953 = __end947;
  long r954 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t952, t953);
  unsigned long cast955 = (unsigned long)r954;
  __dnew949 = cast955;
    unsigned long t956 = __dnew949;
    unsigned long c957 = 15;
    _Bool c958 = ((t956 > c957)) ? 1 : 0;
    if (c958) {
      unsigned long c959 = 0;
      char* r960 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t951, &__dnew949, c959);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t951, r960);
      unsigned long t961 = __dnew949;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t951, t961);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t951);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard950, t951);
    char* r962 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t951);
    char* t963 = __beg946;
    char* t964 = __end947;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r962, t963, t964);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c965 = ((void*)0);
    __guard950._M_guarded = c965;
    unsigned long t966 = __dnew949;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t951, t966);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard950);
  }
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v967) {
bb968:
  char* __r969;
  char* __retval970;
  __r969 = v967;
  char* t971 = __r969;
  __retval970 = t971;
  char* t972 = __retval970;
  return t972;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v973) {
bb974:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this975;
  char* __retval976;
  this975 = v973;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t977 = this975;
  char* cast978 = (char*)&(t977->field2._M_local_buf);
  char* r979 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast978);
  __retval976 = r979;
  char* t980 = __retval976;
  return t980;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v981) {
bb982:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this983;
  _Bool __retval984;
  this983 = v981;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t985 = this983;
    char* r986 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t985);
    char* r987 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t985);
    _Bool c988 = ((r986 == r987)) ? 1 : 0;
    if (c988) {
        unsigned long t989 = t985->_M_string_length;
        unsigned long c990 = 15;
        _Bool c991 = ((t989 > c990)) ? 1 : 0;
        if (c991) {
          __builtin_unreachable();
        }
      _Bool c992 = 1;
      __retval984 = c992;
      _Bool t993 = __retval984;
      return t993;
    }
  _Bool c994 = 0;
  __retval984 = c994;
  _Bool t995 = __retval984;
  return t995;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v996, char* v997, unsigned long v998) {
bb999:
  struct std____new_allocator_char_* this1000;
  char* __p1001;
  unsigned long __n1002;
  this1000 = v996;
  __p1001 = v997;
  __n1002 = v998;
  struct std____new_allocator_char_* t1003 = this1000;
    unsigned long c1004 = 1;
    unsigned long c1005 = 16;
    _Bool c1006 = ((c1004 > c1005)) ? 1 : 0;
    if (c1006) {
      char* t1007 = __p1001;
      void* cast1008 = (void*)t1007;
      unsigned long t1009 = __n1002;
      unsigned long c1010 = 1;
      unsigned long b1011 = t1009 * c1010;
      unsigned long c1012 = 1;
      operator_delete_3(cast1008, b1011, c1012);
      return;
    }
  char* t1013 = __p1001;
  void* cast1014 = (void*)t1013;
  unsigned long t1015 = __n1002;
  unsigned long c1016 = 1;
  unsigned long b1017 = t1015 * c1016;
  operator_delete_2(cast1014, b1017);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1018, char* v1019, unsigned long v1020) {
bb1021:
  struct std__allocator_char_* this1022;
  char* __p1023;
  unsigned long __n1024;
  this1022 = v1018;
  __p1023 = v1019;
  __n1024 = v1020;
  struct std__allocator_char_* t1025 = this1022;
    _Bool r1026 = std____is_constant_evaluated();
    if (r1026) {
      char* t1027 = __p1023;
      void* cast1028 = (void*)t1027;
      operator_delete(cast1028);
      return;
    }
  struct std____new_allocator_char_* base1029 = (struct std____new_allocator_char_*)((char *)t1025 + 0);
  char* t1030 = __p1023;
  unsigned long t1031 = __n1024;
  std____new_allocator_char___deallocate(base1029, t1030, t1031);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1032, char* v1033, unsigned long v1034) {
bb1035:
  struct std__allocator_char_* __a1036;
  char* __p1037;
  unsigned long __n1038;
  __a1036 = v1032;
  __p1037 = v1033;
  __n1038 = v1034;
  struct std__allocator_char_* t1039 = __a1036;
  char* t1040 = __p1037;
  unsigned long t1041 = __n1038;
  std__allocator_char___deallocate(t1039, t1040, t1041);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1042, unsigned long v1043) {
bb1044:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1045;
  unsigned long __size1046;
  this1045 = v1042;
  __size1046 = v1043;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1047 = this1045;
  struct std__allocator_char_* r1048 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1047);
  char* r1049 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1047);
  unsigned long t1050 = __size1046;
  unsigned long c1051 = 1;
  unsigned long b1052 = t1050 + c1051;
  std__allocator_traits_std__allocator_char_____deallocate(r1048, r1049, b1052);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1053) {
bb1054:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1055;
  this1055 = v1053;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1056 = this1055;
    _Bool r1057 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1056);
    _Bool u1058 = !r1057;
    if (u1058) {
      unsigned long t1059 = t1056->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1056, t1059);
    }
  return;
}

