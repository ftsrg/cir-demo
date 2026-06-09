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
char _str_2[18] = "str != \"Writing \"";
char _str_3[114] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_append_8_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[50] = "basic_string: construction from null is not valid";
char _str_5[24] = "basic_string::_M_create";
char _str_6[21] = "basic_string::append";
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
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
        char* cast27 = (char*)&(_str_4);
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

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v39, unsigned long v40, unsigned long v41, char* v42) {
bb43:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this44;
  unsigned long __n145;
  unsigned long __n246;
  char* __s47;
  this44 = v39;
  __n145 = v40;
  __n246 = v41;
  __s47 = v42;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t48 = this44;
    unsigned long r49 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t48);
    unsigned long r50 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t48);
    unsigned long t51 = __n145;
    unsigned long b52 = r50 - t51;
    unsigned long b53 = r49 - b52;
    unsigned long t54 = __n246;
    _Bool c55 = ((b53 < t54)) ? 1 : 0;
    if (c55) {
      char* t56 = __s47;
      std____throw_length_error(t56);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v57) {
bb58:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this59;
  unsigned long __retval60;
  unsigned long __sz61;
  this59 = v57;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t62 = this59;
  _Bool r63 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t62);
  unsigned long ternary64;
  if (r63) {
    unsigned long c65 = 15;
    ternary64 = (unsigned long)c65;
  } else {
    unsigned long t66 = t62->field2._M_allocated_capacity;
    ternary64 = (unsigned long)t66;
  }
  __sz61 = ternary64;
    unsigned long t67 = __sz61;
    unsigned long c68 = 15;
    _Bool c69 = ((t67 < c68)) ? 1 : 0;
    _Bool ternary70;
    if (c69) {
      _Bool c71 = 1;
      ternary70 = (_Bool)c71;
    } else {
      unsigned long t72 = __sz61;
      unsigned long r73 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t62);
      _Bool c74 = ((t72 > r73)) ? 1 : 0;
      ternary70 = (_Bool)c74;
    }
    if (ternary70) {
      __builtin_unreachable();
    }
  unsigned long t75 = __sz61;
  __retval60 = t75;
  unsigned long t76 = __retval60;
  return t76;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v77) {
bb78:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this79;
  unsigned long __retval80;
  this79 = v77;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t81 = this79;
  unsigned long r82 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t81);
  __retval80 = r82;
  unsigned long t83 = __retval80;
  return t83;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v84, unsigned long v85, unsigned long v86, char* v87, unsigned long v88) {
bb89:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this90;
  unsigned long __pos91;
  unsigned long __len192;
  char* __s93;
  unsigned long __len294;
  unsigned long __how_much95;
  unsigned long __new_capacity96;
  char* __r97;
  this90 = v84;
  __pos91 = v85;
  __len192 = v86;
  __s93 = v87;
  __len294 = v88;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t98 = this90;
  unsigned long r99 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t98);
  unsigned long t100 = __pos91;
  unsigned long b101 = r99 - t100;
  unsigned long t102 = __len192;
  unsigned long b103 = b101 - t102;
  __how_much95 = b103;
  unsigned long r104 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t98);
  unsigned long t105 = __len294;
  unsigned long b106 = r104 + t105;
  unsigned long t107 = __len192;
  unsigned long b108 = b106 - t107;
  __new_capacity96 = b108;
  unsigned long r109 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t98);
  char* r110 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t98, &__new_capacity96, r109);
  __r97 = r110;
    unsigned long t111 = __pos91;
    _Bool cast112 = (_Bool)t111;
    if (cast112) {
      char* t113 = __r97;
      char* r114 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t98);
      unsigned long t115 = __pos91;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t113, r114, t115);
    }
    char* t116 = __s93;
    _Bool cast117 = (_Bool)t116;
    _Bool ternary118;
    if (cast117) {
      unsigned long t119 = __len294;
      _Bool cast120 = (_Bool)t119;
      ternary118 = (_Bool)cast120;
    } else {
      _Bool c121 = 0;
      ternary118 = (_Bool)c121;
    }
    if (ternary118) {
      char* t122 = __r97;
      unsigned long t123 = __pos91;
      char* ptr124 = &(t122)[t123];
      char* t125 = __s93;
      unsigned long t126 = __len294;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr124, t125, t126);
    }
    unsigned long t127 = __how_much95;
    _Bool cast128 = (_Bool)t127;
    if (cast128) {
      char* t129 = __r97;
      unsigned long t130 = __pos91;
      char* ptr131 = &(t129)[t130];
      unsigned long t132 = __len294;
      char* ptr133 = &(ptr131)[t132];
      char* r134 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t98);
      unsigned long t135 = __pos91;
      char* ptr136 = &(r134)[t135];
      unsigned long t137 = __len192;
      char* ptr138 = &(ptr136)[t137];
      unsigned long t139 = __how_much95;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr133, ptr138, t139);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t98);
  char* t140 = __r97;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t98, t140);
  unsigned long t141 = __new_capacity96;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t98, t141);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v142, char* v143, unsigned long v144) {
bb145:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this146;
  char* __s147;
  unsigned long __n148;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval149;
  unsigned long __len150;
  this146 = v142;
  __s147 = v143;
  __n148 = v144;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t151 = this146;
  unsigned long t152 = __n148;
  unsigned long r153 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t151);
  unsigned long b154 = t152 + r153;
  __len150 = b154;
    unsigned long t155 = __len150;
    unsigned long r156 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t151);
    _Bool c157 = ((t155 <= r156)) ? 1 : 0;
    if (c157) {
        unsigned long t158 = __n148;
        _Bool cast159 = (_Bool)t158;
        if (cast159) {
          char* r160 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t151);
          unsigned long r161 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t151);
          char* ptr162 = &(r160)[r161];
          char* t163 = __s147;
          unsigned long t164 = __n148;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr162, t163, t164);
        }
    } else {
      unsigned long r165 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t151);
      unsigned long c166 = 0;
      char* t167 = __s147;
      unsigned long t168 = __n148;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t151, r165, c166, t167, t168);
    }
  unsigned long t169 = __len150;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t151, t169);
  __retval149 = t151;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t170 = __retval149;
  return t170;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v171, char* v172, unsigned long v173) {
bb174:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this175;
  char* __s176;
  unsigned long __n177;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval178;
  this175 = v171;
  __s176 = v172;
  __n177 = v173;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t179 = this175;
  unsigned long c180 = 0;
  unsigned long t181 = __n177;
  char* cast182 = (char*)&(_str_6);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t179, c180, t181, cast182);
  char* t183 = __s176;
  unsigned long t184 = __n177;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r185 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(t179, t183, t184);
  __retval178 = r185;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t186 = __retval178;
  return t186;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v187) {
bb188:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this189;
  unsigned long __retval190;
  unsigned long __sz191;
  this189 = v187;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t192 = this189;
  unsigned long t193 = t192->_M_string_length;
  __sz191 = t193;
    unsigned long t194 = __sz191;
    unsigned long r195 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t192);
    _Bool c196 = ((t194 > r195)) ? 1 : 0;
    if (c196) {
      __builtin_unreachable();
    }
  unsigned long t197 = __sz191;
  __retval190 = t197;
  unsigned long t198 = __retval190;
  return t198;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendERKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v199, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v200) {
bb201:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this202;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str203;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval204;
  this202 = v199;
  __str203 = v200;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t205 = this202;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t206 = __str203;
  char* r207 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t206);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t208 = __str203;
  unsigned long r209 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t208);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r210 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(t205, r207, r209);
  __retval204 = r210;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t211 = __retval204;
  return t211;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v212, char* v213) {
bb214:
  char* __c1215;
  char* __c2216;
  _Bool __retval217;
  __c1215 = v212;
  __c2216 = v213;
  char* t218 = __c1215;
  char t219 = *t218;
  unsigned char cast220 = (unsigned char)t219;
  int cast221 = (int)cast220;
  char* t222 = __c2216;
  char t223 = *t222;
  unsigned char cast224 = (unsigned char)t223;
  int cast225 = (int)cast224;
  _Bool c226 = ((cast221 < cast225)) ? 1 : 0;
  __retval217 = c226;
  _Bool t227 = __retval217;
  return t227;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v228, char* v229, unsigned long v230) {
bb231:
  char* __s1232;
  char* __s2233;
  unsigned long __n234;
  int __retval235;
  __s1232 = v228;
  __s2233 = v229;
  __n234 = v230;
    unsigned long t236 = __n234;
    unsigned long c237 = 0;
    _Bool c238 = ((t236 == c237)) ? 1 : 0;
    if (c238) {
      int c239 = 0;
      __retval235 = c239;
      int t240 = __retval235;
      return t240;
    }
    _Bool r241 = std____is_constant_evaluated();
    if (r241) {
        unsigned long __i242;
        unsigned long c243 = 0;
        __i242 = c243;
        while (1) {
          unsigned long t245 = __i242;
          unsigned long t246 = __n234;
          _Bool c247 = ((t245 < t246)) ? 1 : 0;
          if (!c247) break;
            unsigned long t248 = __i242;
            char* t249 = __s1232;
            char* ptr250 = &(t249)[t248];
            unsigned long t251 = __i242;
            char* t252 = __s2233;
            char* ptr253 = &(t252)[t251];
            _Bool r254 = std__char_traits_char___lt(ptr250, ptr253);
            if (r254) {
              int c255 = -1;
              __retval235 = c255;
              int t256 = __retval235;
              int ret_val257 = t256;
              return ret_val257;
            } else {
                unsigned long t258 = __i242;
                char* t259 = __s2233;
                char* ptr260 = &(t259)[t258];
                unsigned long t261 = __i242;
                char* t262 = __s1232;
                char* ptr263 = &(t262)[t261];
                _Bool r264 = std__char_traits_char___lt(ptr260, ptr263);
                if (r264) {
                  int c265 = 1;
                  __retval235 = c265;
                  int t266 = __retval235;
                  int ret_val267 = t266;
                  return ret_val267;
                }
            }
        for_step244: ;
          unsigned long t268 = __i242;
          unsigned long u269 = t268 + 1;
          __i242 = u269;
        }
      int c270 = 0;
      __retval235 = c270;
      int t271 = __retval235;
      return t271;
    }
  char* t272 = __s1232;
  void* cast273 = (void*)t272;
  char* t274 = __s2233;
  void* cast275 = (void*)t274;
  unsigned long t276 = __n234;
  int r277 = memcmp(cast273, cast275, t276);
  __retval235 = r277;
  int t278 = __retval235;
  return t278;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v279) {
bb280:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this281;
  char* __retval282;
  this281 = v279;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t283 = this281;
  char* r284 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t283);
  __retval282 = r284;
  char* t285 = __retval282;
  return t285;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v286, char* v287) {
bb288:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs289;
  char* __rhs290;
  _Bool __retval291;
  __lhs289 = v286;
  __rhs290 = v287;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t292 = __lhs289;
  unsigned long r293 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t292);
  char* t294 = __rhs290;
  unsigned long r295 = std__char_traits_char___length(t294);
  _Bool c296 = ((r293 == r295)) ? 1 : 0;
  _Bool ternary297;
  if (c296) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t298 = __lhs289;
    char* r299 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t298);
    char* t300 = __rhs290;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t301 = __lhs289;
    unsigned long r302 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t301);
    int r303 = std__char_traits_char___compare(r299, t300, r302);
    _Bool cast304 = (_Bool)r303;
    _Bool u305 = !cast304;
    ternary297 = (_Bool)u305;
  } else {
    _Bool c306 = 0;
    ternary297 = (_Bool)c306;
  }
  __retval291 = ternary297;
  _Bool t307 = __retval291;
  return t307;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v308, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v309) {
bb310:
  struct std__basic_ostream_char__std__char_traits_char__* __os311;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str312;
  struct std__basic_ostream_char__std__char_traits_char__* __retval313;
  __os311 = v308;
  __str312 = v309;
  struct std__basic_ostream_char__std__char_traits_char__* t314 = __os311;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t315 = __str312;
  char* r316 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t315);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t317 = __str312;
  unsigned long r318 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t317);
  long cast319 = (long)r318;
  struct std__basic_ostream_char__std__char_traits_char__* r320 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t314, r316, cast319);
  __retval313 = r320;
  struct std__basic_ostream_char__std__char_traits_char__* t321 = __retval313;
  return t321;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v322, void* v323) {
bb324:
  struct std__basic_ostream_char__std__char_traits_char__* this325;
  void* __pf326;
  struct std__basic_ostream_char__std__char_traits_char__* __retval327;
  this325 = v322;
  __pf326 = v323;
  struct std__basic_ostream_char__std__char_traits_char__* t328 = this325;
  void* t329 = __pf326;
  struct std__basic_ostream_char__std__char_traits_char__* r330 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t329)(t328);
  __retval327 = r330;
  struct std__basic_ostream_char__std__char_traits_char__* t331 = __retval327;
  return t331;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v332) {
bb333:
  struct std__basic_ostream_char__std__char_traits_char__* __os334;
  struct std__basic_ostream_char__std__char_traits_char__* __retval335;
  __os334 = v332;
  struct std__basic_ostream_char__std__char_traits_char__* t336 = __os334;
  struct std__basic_ostream_char__std__char_traits_char__* r337 = std__ostream__flush(t336);
  __retval335 = r337;
  struct std__basic_ostream_char__std__char_traits_char__* t338 = __retval335;
  return t338;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v339) {
bb340:
  struct std__ctype_char_* __f341;
  struct std__ctype_char_* __retval342;
  __f341 = v339;
    struct std__ctype_char_* t343 = __f341;
    _Bool cast344 = (_Bool)t343;
    _Bool u345 = !cast344;
    if (u345) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t346 = __f341;
  __retval342 = t346;
  struct std__ctype_char_* t347 = __retval342;
  return t347;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v348, char v349) {
bb350:
  struct std__ctype_char_* this351;
  char __c352;
  char __retval353;
  this351 = v348;
  __c352 = v349;
  struct std__ctype_char_* t354 = this351;
    char t355 = t354->_M_widen_ok;
    _Bool cast356 = (_Bool)t355;
    if (cast356) {
      char t357 = __c352;
      unsigned char cast358 = (unsigned char)t357;
      unsigned long cast359 = (unsigned long)cast358;
      char t360 = t354->_M_widen[cast359];
      __retval353 = t360;
      char t361 = __retval353;
      return t361;
    }
  std__ctype_char____M_widen_init___const(t354);
  char t362 = __c352;
  void** v363 = (void**)t354;
  void* v364 = *((void**)v363);
  char vcall367 = (char)__VERIFIER_virtual_call_char_char(t354, 6, t362);
  __retval353 = vcall367;
  char t368 = __retval353;
  return t368;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v369, char v370) {
bb371:
  struct std__basic_ios_char__std__char_traits_char__* this372;
  char __c373;
  char __retval374;
  this372 = v369;
  __c373 = v370;
  struct std__basic_ios_char__std__char_traits_char__* t375 = this372;
  struct std__ctype_char_* t376 = t375->_M_ctype;
  struct std__ctype_char_* r377 = std__ctype_char__const__std____check_facet_std__ctype_char___(t376);
  char t378 = __c373;
  char r379 = std__ctype_char___widen_char__const(r377, t378);
  __retval374 = r379;
  char t380 = __retval374;
  return t380;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v381) {
bb382:
  struct std__basic_ostream_char__std__char_traits_char__* __os383;
  struct std__basic_ostream_char__std__char_traits_char__* __retval384;
  __os383 = v381;
  struct std__basic_ostream_char__std__char_traits_char__* t385 = __os383;
  struct std__basic_ostream_char__std__char_traits_char__* t386 = __os383;
  void** v387 = (void**)t386;
  void* v388 = *((void**)v387);
  unsigned char* cast389 = (unsigned char*)v388;
  long c390 = -24;
  unsigned char* ptr391 = &(cast389)[c390];
  long* cast392 = (long*)ptr391;
  long t393 = *cast392;
  unsigned char* cast394 = (unsigned char*)t386;
  unsigned char* ptr395 = &(cast394)[t393];
  struct std__basic_ostream_char__std__char_traits_char__* cast396 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr395;
  struct std__basic_ios_char__std__char_traits_char__* cast397 = (struct std__basic_ios_char__std__char_traits_char__*)cast396;
  char c398 = 10;
  char r399 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast397, c398);
  struct std__basic_ostream_char__std__char_traits_char__* r400 = std__ostream__put(t385, r399);
  struct std__basic_ostream_char__std__char_traits_char__* r401 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r400);
  __retval384 = r401;
  struct std__basic_ostream_char__std__char_traits_char__* t402 = __retval384;
  return t402;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v403) {
bb404:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this405;
  this405 = v403;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t406 = this405;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t406);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t406->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb407:
  int __retval408;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str409;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2410;
  struct std__allocator_char_ ref_tmp0411;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str3412;
  struct std__allocator_char_ ref_tmp1413;
  int c414 = 0;
  __retval408 = c414;
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str409);
    char* cast415 = (char*)&(_str);
    std__allocator_char___allocator_2(&ref_tmp0411);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str2410, cast415, &ref_tmp0411);
    {
      std__allocator_char____allocator(&ref_tmp0411);
    }
      char* cast416 = (char*)&(_str_1);
      std__allocator_char___allocator_2(&ref_tmp1413);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str3412, cast416, &ref_tmp1413);
      {
        std__allocator_char____allocator(&ref_tmp1413);
      }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r417 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(&str409, &str2410);
        char* cast418 = (char*)&(_str);
        _Bool r419 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str409, cast418);
        _Bool u420 = !r419;
        if (u420) {
        } else {
          char* cast421 = (char*)&(_str_2);
          char* c422 = _str_3;
          unsigned int c423 = 22;
          char* cast424 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast421, c422, c423, cast424);
        }
        struct std__basic_ostream_char__std__char_traits_char__* r425 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str409);
        struct std__basic_ostream_char__std__char_traits_char__* r426 = std__ostream__operator___std__ostream_____(r425, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        int c427 = 0;
        __retval408 = c427;
        int t428 = __retval408;
        int ret_val429 = t428;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str3412);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str2410);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str409);
        }
        return ret_val429;
  int t430 = __retval408;
  return t430;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v431) {
bb432:
  char* __r433;
  char* __retval434;
  __r433 = v431;
  char* t435 = __r433;
  __retval434 = t435;
  char* t436 = __retval434;
  return t436;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v437) {
bb438:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this439;
  char* __retval440;
  this439 = v437;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t441 = this439;
  char* cast442 = (char*)&(t441->field2._M_local_buf);
  char* r443 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast442);
  __retval440 = r443;
  char* t444 = __retval440;
  return t444;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v445, char* v446, struct std__allocator_char_* v447) {
bb448:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this449;
  char* __dat450;
  struct std__allocator_char_* __a451;
  this449 = v445;
  __dat450 = v446;
  __a451 = v447;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t452 = this449;
  struct std__allocator_char_* base453 = (struct std__allocator_char_*)((char *)t452 + 0);
  struct std__allocator_char_* t454 = __a451;
  std__allocator_char___allocator(base453, t454);
    char* t455 = __dat450;
    t452->_M_p = t455;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb456:
  _Bool __retval457;
    _Bool c458 = 0;
    __retval457 = c458;
    _Bool t459 = __retval457;
    return t459;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v460) {
bb461:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this462;
  this462 = v460;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t463 = this462;
    _Bool r464 = std__is_constant_evaluated();
    if (r464) {
        unsigned long __i465;
        unsigned long c466 = 0;
        __i465 = c466;
        while (1) {
          unsigned long t468 = __i465;
          unsigned long c469 = 15;
          _Bool c470 = ((t468 <= c469)) ? 1 : 0;
          if (!c470) break;
          char c471 = 0;
          unsigned long t472 = __i465;
          t463->field2._M_local_buf[t472] = c471;
        for_step467: ;
          unsigned long t473 = __i465;
          unsigned long u474 = t473 + 1;
          __i465 = u474;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v475, unsigned long v476) {
bb477:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this478;
  unsigned long __length479;
  this478 = v475;
  __length479 = v476;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t480 = this478;
  unsigned long t481 = __length479;
  t480->_M_string_length = t481;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb482:
  _Bool __retval483;
    _Bool c484 = 0;
    __retval483 = c484;
    _Bool t485 = __retval483;
    return t485;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v486, char* v487) {
bb488:
  char* __location489;
  char* __args490;
  char* __retval491;
  void* __loc492;
  __location489 = v486;
  __args490 = v487;
  char* t493 = __location489;
  void* cast494 = (void*)t493;
  __loc492 = cast494;
    void* t495 = __loc492;
    char* cast496 = (char*)t495;
    char* t497 = __args490;
    char t498 = *t497;
    *cast496 = t498;
    __retval491 = cast496;
    char* t499 = __retval491;
    return t499;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v500, char* v501) {
bb502:
  char* __c1503;
  char* __c2504;
  __c1503 = v500;
  __c2504 = v501;
    _Bool r505 = std____is_constant_evaluated();
    if (r505) {
      char* t506 = __c1503;
      char* t507 = __c2504;
      char* r508 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t506, t507);
    } else {
      char* t509 = __c2504;
      char t510 = *t509;
      char* t511 = __c1503;
      *t511 = t510;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v512) {
bb513:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this514;
  char* __retval515;
  this514 = v512;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t516 = this514;
  char* t517 = t516->_M_dataplus._M_p;
  __retval515 = t517;
  char* t518 = __retval515;
  return t518;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v519, unsigned long v520) {
bb521:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this522;
  unsigned long __n523;
  char ref_tmp0524;
  this522 = v519;
  __n523 = v520;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t525 = this522;
  unsigned long t526 = __n523;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t525, t526);
  unsigned long t527 = __n523;
  char* r528 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t525);
  char* ptr529 = &(r528)[t527];
  char c530 = 0;
  ref_tmp0524 = c530;
  std__char_traits_char___assign(ptr529, &ref_tmp0524);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v531) {
bb532:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this533;
  this533 = v531;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t534 = this533;
  {
    struct std__allocator_char_* base535 = (struct std__allocator_char_*)((char *)t534 + 0);
    std__allocator_char____allocator(base535);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v536, struct std____new_allocator_char_* v537) {
bb538:
  struct std____new_allocator_char_* this539;
  struct std____new_allocator_char_* unnamed540;
  this539 = v536;
  unnamed540 = v537;
  struct std____new_allocator_char_* t541 = this539;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v542, struct std__allocator_char_* v543) {
bb544:
  struct std__allocator_char_* this545;
  struct std__allocator_char_* __a546;
  this545 = v542;
  __a546 = v543;
  struct std__allocator_char_* t547 = this545;
  struct std____new_allocator_char_* base548 = (struct std____new_allocator_char_*)((char *)t547 + 0);
  struct std__allocator_char_* t549 = __a546;
  struct std____new_allocator_char_* base550 = (struct std____new_allocator_char_*)((char *)t549 + 0);
  std____new_allocator_char_____new_allocator(base548, base550);
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v551) {
bb552:
  struct std____new_allocator_char_* this553;
  this553 = v551;
  struct std____new_allocator_char_* t554 = this553;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v555, char* v556, struct std__allocator_char_* v557) {
bb558:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this559;
  char* __dat560;
  struct std__allocator_char_* __a561;
  this559 = v555;
  __dat560 = v556;
  __a561 = v557;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t562 = this559;
  struct std__allocator_char_* base563 = (struct std__allocator_char_*)((char *)t562 + 0);
  struct std__allocator_char_* t564 = __a561;
  std__allocator_char___allocator(base563, t564);
    char* t565 = __dat560;
    t562->_M_p = t565;
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v566, char* v567) {
bb568:
  char* __c1569;
  char* __c2570;
  _Bool __retval571;
  __c1569 = v566;
  __c2570 = v567;
  char* t572 = __c1569;
  char t573 = *t572;
  int cast574 = (int)t573;
  char* t575 = __c2570;
  char t576 = *t575;
  int cast577 = (int)t576;
  _Bool c578 = ((cast574 == cast577)) ? 1 : 0;
  __retval571 = c578;
  _Bool t579 = __retval571;
  return t579;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v580) {
bb581:
  char* __p582;
  unsigned long __retval583;
  unsigned long __i584;
  __p582 = v580;
  unsigned long c585 = 0;
  __i584 = c585;
    char ref_tmp0586;
    while (1) {
      unsigned long t587 = __i584;
      char* t588 = __p582;
      char* ptr589 = &(t588)[t587];
      char c590 = 0;
      ref_tmp0586 = c590;
      _Bool r591 = __gnu_cxx__char_traits_char___eq(ptr589, &ref_tmp0586);
      _Bool u592 = !r591;
      if (!u592) break;
      unsigned long t593 = __i584;
      unsigned long u594 = t593 + 1;
      __i584 = u594;
    }
  unsigned long t595 = __i584;
  __retval583 = t595;
  unsigned long t596 = __retval583;
  return t596;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v597) {
bb598:
  char* __s599;
  unsigned long __retval600;
  __s599 = v597;
    _Bool r601 = std____is_constant_evaluated();
    if (r601) {
      char* t602 = __s599;
      unsigned long r603 = __gnu_cxx__char_traits_char___length(t602);
      __retval600 = r603;
      unsigned long t604 = __retval600;
      return t604;
    }
  char* t605 = __s599;
  unsigned long r606 = strlen(t605);
  __retval600 = r606;
  unsigned long t607 = __retval600;
  return t607;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v608, char* v609, struct std__random_access_iterator_tag v610) {
bb611:
  char* __first612;
  char* __last613;
  struct std__random_access_iterator_tag unnamed614;
  long __retval615;
  __first612 = v608;
  __last613 = v609;
  unnamed614 = v610;
  char* t616 = __last613;
  char* t617 = __first612;
  long diff618 = t616 - t617;
  __retval615 = diff618;
  long t619 = __retval615;
  return t619;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v620) {
bb621:
  char** unnamed622;
  struct std__random_access_iterator_tag __retval623;
  unnamed622 = v620;
  struct std__random_access_iterator_tag t624 = __retval623;
  return t624;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v625, char* v626) {
bb627:
  char* __first628;
  char* __last629;
  long __retval630;
  struct std__random_access_iterator_tag agg_tmp0631;
  __first628 = v625;
  __last629 = v626;
  char* t632 = __first628;
  char* t633 = __last629;
  struct std__random_access_iterator_tag r634 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first628);
  agg_tmp0631 = r634;
  struct std__random_access_iterator_tag t635 = agg_tmp0631;
  long r636 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t632, t633, t635);
  __retval630 = r636;
  long t637 = __retval630;
  return t637;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v638, char* v639) {
bb640:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this641;
  char* __p642;
  this641 = v638;
  __p642 = v639;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t643 = this641;
  char* t644 = __p642;
  t643->_M_dataplus._M_p = t644;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v645) {
bb646:
  struct std__allocator_char_* __a647;
  unsigned long __retval648;
  __a647 = v645;
  unsigned long c649 = -1;
  unsigned long c650 = 1;
  unsigned long b651 = c649 / c650;
  __retval648 = b651;
  unsigned long t652 = __retval648;
  return t652;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v653) {
bb654:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this655;
  struct std__allocator_char_* __retval656;
  this655 = v653;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t657 = this655;
  struct std__allocator_char_* base658 = (struct std__allocator_char_*)((char *)&(t657->_M_dataplus) + 0);
  __retval656 = base658;
  struct std__allocator_char_* t659 = __retval656;
  return t659;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v660, unsigned long* v661) {
bb662:
  unsigned long* __a663;
  unsigned long* __b664;
  unsigned long* __retval665;
  __a663 = v660;
  __b664 = v661;
    unsigned long* t666 = __b664;
    unsigned long t667 = *t666;
    unsigned long* t668 = __a663;
    unsigned long t669 = *t668;
    _Bool c670 = ((t667 < t669)) ? 1 : 0;
    if (c670) {
      unsigned long* t671 = __b664;
      __retval665 = t671;
      unsigned long* t672 = __retval665;
      return t672;
    }
  unsigned long* t673 = __a663;
  __retval665 = t673;
  unsigned long* t674 = __retval665;
  return t674;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v675) {
bb676:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this677;
  unsigned long __retval678;
  unsigned long __diffmax679;
  unsigned long __allocmax680;
  this677 = v675;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t681 = this677;
  unsigned long c682 = 9223372036854775807;
  __diffmax679 = c682;
  struct std__allocator_char_* r683 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t681);
  unsigned long r684 = std__allocator_traits_std__allocator_char_____max_size(r683);
  __allocmax680 = r684;
  unsigned long* r685 = unsigned_long_const__std__min_unsigned_long_(&__diffmax679, &__allocmax680);
  unsigned long t686 = *r685;
  unsigned long c687 = 1;
  unsigned long b688 = t686 - c687;
  __retval678 = b688;
  unsigned long t689 = __retval678;
  return t689;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v690) {
bb691:
  struct std____new_allocator_char_* this692;
  unsigned long __retval693;
  this692 = v690;
  struct std____new_allocator_char_* t694 = this692;
  unsigned long c695 = 9223372036854775807;
  unsigned long c696 = 1;
  unsigned long b697 = c695 / c696;
  __retval693 = b697;
  unsigned long t698 = __retval693;
  return t698;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v699, unsigned long v700, void* v701) {
bb702:
  struct std____new_allocator_char_* this703;
  unsigned long __n704;
  void* unnamed705;
  char* __retval706;
  this703 = v699;
  __n704 = v700;
  unnamed705 = v701;
  struct std____new_allocator_char_* t707 = this703;
    unsigned long t708 = __n704;
    unsigned long r709 = std____new_allocator_char____M_max_size___const(t707);
    _Bool c710 = ((t708 > r709)) ? 1 : 0;
    if (c710) {
        unsigned long t711 = __n704;
        unsigned long c712 = -1;
        unsigned long c713 = 1;
        unsigned long b714 = c712 / c713;
        _Bool c715 = ((t711 > b714)) ? 1 : 0;
        if (c715) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c716 = 1;
    unsigned long c717 = 16;
    _Bool c718 = ((c716 > c717)) ? 1 : 0;
    if (c718) {
      unsigned long __al719;
      unsigned long c720 = 1;
      __al719 = c720;
      unsigned long t721 = __n704;
      unsigned long c722 = 1;
      unsigned long b723 = t721 * c722;
      unsigned long t724 = __al719;
      void* r725 = operator_new_2(b723, t724);
      char* cast726 = (char*)r725;
      __retval706 = cast726;
      char* t727 = __retval706;
      return t727;
    }
  unsigned long t728 = __n704;
  unsigned long c729 = 1;
  unsigned long b730 = t728 * c729;
  void* r731 = operator_new(b730);
  char* cast732 = (char*)r731;
  __retval706 = cast732;
  char* t733 = __retval706;
  return t733;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v734, unsigned long v735) {
bb736:
  struct std__allocator_char_* this737;
  unsigned long __n738;
  char* __retval739;
  this737 = v734;
  __n738 = v735;
  struct std__allocator_char_* t740 = this737;
    _Bool r741 = std____is_constant_evaluated();
    if (r741) {
        unsigned long t742 = __n738;
        unsigned long c743 = 1;
        unsigned long ovr744;
        _Bool ovf745 = __builtin_mul_overflow(t742, c743, &ovr744);
        __n738 = ovr744;
        if (ovf745) {
          std____throw_bad_array_new_length();
        }
      unsigned long t746 = __n738;
      void* r747 = operator_new(t746);
      char* cast748 = (char*)r747;
      __retval739 = cast748;
      char* t749 = __retval739;
      return t749;
    }
  struct std____new_allocator_char_* base750 = (struct std____new_allocator_char_*)((char *)t740 + 0);
  unsigned long t751 = __n738;
  void* c752 = ((void*)0);
  char* r753 = std____new_allocator_char___allocate(base750, t751, c752);
  __retval739 = r753;
  char* t754 = __retval739;
  return t754;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v755, unsigned long v756) {
bb757:
  struct std__allocator_char_* __a758;
  unsigned long __n759;
  char* __retval760;
  __a758 = v755;
  __n759 = v756;
  struct std__allocator_char_* t761 = __a758;
  unsigned long t762 = __n759;
  char* r763 = std__allocator_char___allocate(t761, t762);
  __retval760 = r763;
  char* t764 = __retval760;
  return t764;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v765, unsigned long v766) {
bb767:
  struct std__allocator_char_* __a768;
  unsigned long __n769;
  char* __retval770;
  char* __p771;
  __a768 = v765;
  __n769 = v766;
  struct std__allocator_char_* t772 = __a768;
  unsigned long t773 = __n769;
  char* r774 = std__allocator_traits_std__allocator_char_____allocate(t772, t773);
  __p771 = r774;
  char* t775 = __p771;
  __retval770 = t775;
  char* t776 = __retval770;
  return t776;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v777) {
bb778:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this779;
  struct std__allocator_char_* __retval780;
  this779 = v777;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t781 = this779;
  struct std__allocator_char_* base782 = (struct std__allocator_char_*)((char *)&(t781->_M_dataplus) + 0);
  __retval780 = base782;
  struct std__allocator_char_* t783 = __retval780;
  return t783;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v784, unsigned long* v785, unsigned long v786) {
bb787:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this788;
  unsigned long* __capacity789;
  unsigned long __old_capacity790;
  char* __retval791;
  this788 = v784;
  __capacity789 = v785;
  __old_capacity790 = v786;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t792 = this788;
    unsigned long* t793 = __capacity789;
    unsigned long t794 = *t793;
    unsigned long r795 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t792);
    _Bool c796 = ((t794 > r795)) ? 1 : 0;
    if (c796) {
      char* cast797 = (char*)&(_str_5);
      std____throw_length_error(cast797);
    }
    unsigned long* t798 = __capacity789;
    unsigned long t799 = *t798;
    unsigned long t800 = __old_capacity790;
    _Bool c801 = ((t799 > t800)) ? 1 : 0;
    _Bool ternary802;
    if (c801) {
      unsigned long* t803 = __capacity789;
      unsigned long t804 = *t803;
      unsigned long c805 = 2;
      unsigned long t806 = __old_capacity790;
      unsigned long b807 = c805 * t806;
      _Bool c808 = ((t804 < b807)) ? 1 : 0;
      ternary802 = (_Bool)c808;
    } else {
      _Bool c809 = 0;
      ternary802 = (_Bool)c809;
    }
    if (ternary802) {
      unsigned long c810 = 2;
      unsigned long t811 = __old_capacity790;
      unsigned long b812 = c810 * t811;
      unsigned long* t813 = __capacity789;
      *t813 = b812;
        unsigned long* t814 = __capacity789;
        unsigned long t815 = *t814;
        unsigned long r816 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t792);
        _Bool c817 = ((t815 > r816)) ? 1 : 0;
        if (c817) {
          unsigned long r818 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t792);
          unsigned long* t819 = __capacity789;
          *t819 = r818;
        }
    }
  struct std__allocator_char_* r820 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t792);
  unsigned long* t821 = __capacity789;
  unsigned long t822 = *t821;
  unsigned long c823 = 1;
  unsigned long b824 = t822 + c823;
  char* r825 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r820, b824);
  __retval791 = r825;
  char* t826 = __retval791;
  return t826;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v827, unsigned long v828) {
bb829:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this830;
  unsigned long __capacity831;
  this830 = v827;
  __capacity831 = v828;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t832 = this830;
  unsigned long t833 = __capacity831;
  t832->field2._M_allocated_capacity = t833;
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v834, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v835) {
bb836:
  struct _Guard* this837;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s838;
  this837 = v834;
  __s838 = v835;
  struct _Guard* t839 = this837;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t840 = __s838;
  t839->_M_guarded = t840;
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v841, char* v842, unsigned long v843) {
bb844:
  char* __s1845;
  char* __s2846;
  unsigned long __n847;
  char* __retval848;
  __s1845 = v841;
  __s2846 = v842;
  __n847 = v843;
    unsigned long t849 = __n847;
    unsigned long c850 = 0;
    _Bool c851 = ((t849 == c850)) ? 1 : 0;
    if (c851) {
      char* t852 = __s1845;
      __retval848 = t852;
      char* t853 = __retval848;
      return t853;
    }
    _Bool r854 = std____is_constant_evaluated();
    if (r854) {
        unsigned long __i855;
        unsigned long c856 = 0;
        __i855 = c856;
        while (1) {
          unsigned long t858 = __i855;
          unsigned long t859 = __n847;
          _Bool c860 = ((t858 < t859)) ? 1 : 0;
          if (!c860) break;
          char* t861 = __s1845;
          unsigned long t862 = __i855;
          char* ptr863 = &(t861)[t862];
          unsigned long t864 = __i855;
          char* t865 = __s2846;
          char* ptr866 = &(t865)[t864];
          char* r867 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr863, ptr866);
        for_step857: ;
          unsigned long t868 = __i855;
          unsigned long u869 = t868 + 1;
          __i855 = u869;
        }
      char* t870 = __s1845;
      __retval848 = t870;
      char* t871 = __retval848;
      return t871;
    }
  char* t872 = __s1845;
  void* cast873 = (void*)t872;
  char* t874 = __s2846;
  void* cast875 = (void*)t874;
  unsigned long t876 = __n847;
  unsigned long c877 = 1;
  unsigned long b878 = t876 * c877;
  void* r879 = memcpy(cast873, cast875, b878);
  char* t880 = __s1845;
  __retval848 = t880;
  char* t881 = __retval848;
  return t881;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v882, char* v883, unsigned long v884) {
bb885:
  char* __s1886;
  char* __s2887;
  unsigned long __n888;
  char* __retval889;
  __s1886 = v882;
  __s2887 = v883;
  __n888 = v884;
    unsigned long t890 = __n888;
    unsigned long c891 = 0;
    _Bool c892 = ((t890 == c891)) ? 1 : 0;
    if (c892) {
      char* t893 = __s1886;
      __retval889 = t893;
      char* t894 = __retval889;
      return t894;
    }
    _Bool r895 = std____is_constant_evaluated();
    if (r895) {
      char* t896 = __s1886;
      char* t897 = __s2887;
      unsigned long t898 = __n888;
      char* r899 = __gnu_cxx__char_traits_char___copy(t896, t897, t898);
      __retval889 = r899;
      char* t900 = __retval889;
      return t900;
    }
  char* t901 = __s1886;
  void* cast902 = (void*)t901;
  char* t903 = __s2887;
  void* cast904 = (void*)t903;
  unsigned long t905 = __n888;
  void* r906 = memcpy(cast902, cast904, t905);
  char* cast907 = (char*)r906;
  __retval889 = cast907;
  char* t908 = __retval889;
  return t908;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v909, char* v910, unsigned long v911) {
bb912:
  char* __d913;
  char* __s914;
  unsigned long __n915;
  __d913 = v909;
  __s914 = v910;
  __n915 = v911;
    unsigned long t916 = __n915;
    unsigned long c917 = 1;
    _Bool c918 = ((t916 == c917)) ? 1 : 0;
    if (c918) {
      char* t919 = __d913;
      char* t920 = __s914;
      std__char_traits_char___assign(t919, t920);
    } else {
      char* t921 = __d913;
      char* t922 = __s914;
      unsigned long t923 = __n915;
      char* r924 = std__char_traits_char___copy(t921, t922, t923);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v925) {
bb926:
  char* __it927;
  char* __retval928;
  __it927 = v925;
  char* t929 = __it927;
  __retval928 = t929;
  char* t930 = __retval928;
  return t930;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v931, char* v932, char* v933) {
bb934:
  char* __p935;
  char* __k1936;
  char* __k2937;
  __p935 = v931;
  __k1936 = v932;
  __k2937 = v933;
    char* t938 = __p935;
    char* t939 = __k1936;
    char* r940 = char_const__std____niter_base_char_const__(t939);
    char* t941 = __k2937;
    char* t942 = __k1936;
    long diff943 = t941 - t942;
    unsigned long cast944 = (unsigned long)diff943;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t938, r940, cast944);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v945) {
bb946:
  struct _Guard* this947;
  this947 = v945;
  struct _Guard* t948 = this947;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t949 = t948->_M_guarded;
    _Bool cast950 = (_Bool)t949;
    if (cast950) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t951 = t948->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t951);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v952, char* v953, char* v954, struct std__forward_iterator_tag v955) {
bb956:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this957;
  char* __beg958;
  char* __end959;
  struct std__forward_iterator_tag unnamed960;
  unsigned long __dnew961;
  struct _Guard __guard962;
  this957 = v952;
  __beg958 = v953;
  __end959 = v954;
  unnamed960 = v955;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t963 = this957;
  char* t964 = __beg958;
  char* t965 = __end959;
  long r966 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t964, t965);
  unsigned long cast967 = (unsigned long)r966;
  __dnew961 = cast967;
    unsigned long t968 = __dnew961;
    unsigned long c969 = 15;
    _Bool c970 = ((t968 > c969)) ? 1 : 0;
    if (c970) {
      unsigned long c971 = 0;
      char* r972 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t963, &__dnew961, c971);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t963, r972);
      unsigned long t973 = __dnew961;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t963, t973);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t963);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard962, t963);
    char* r974 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t963);
    char* t975 = __beg958;
    char* t976 = __end959;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r974, t975, t976);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c977 = ((void*)0);
    __guard962._M_guarded = c977;
    unsigned long t978 = __dnew961;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t963, t978);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard962);
  }
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v979) {
bb980:
  char* __r981;
  char* __retval982;
  __r981 = v979;
  char* t983 = __r981;
  __retval982 = t983;
  char* t984 = __retval982;
  return t984;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v985) {
bb986:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this987;
  char* __retval988;
  this987 = v985;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t989 = this987;
  char* cast990 = (char*)&(t989->field2._M_local_buf);
  char* r991 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast990);
  __retval988 = r991;
  char* t992 = __retval988;
  return t992;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v993) {
bb994:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this995;
  _Bool __retval996;
  this995 = v993;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t997 = this995;
    char* r998 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t997);
    char* r999 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t997);
    _Bool c1000 = ((r998 == r999)) ? 1 : 0;
    if (c1000) {
        unsigned long t1001 = t997->_M_string_length;
        unsigned long c1002 = 15;
        _Bool c1003 = ((t1001 > c1002)) ? 1 : 0;
        if (c1003) {
          __builtin_unreachable();
        }
      _Bool c1004 = 1;
      __retval996 = c1004;
      _Bool t1005 = __retval996;
      return t1005;
    }
  _Bool c1006 = 0;
  __retval996 = c1006;
  _Bool t1007 = __retval996;
  return t1007;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1008, char* v1009, unsigned long v1010) {
bb1011:
  struct std____new_allocator_char_* this1012;
  char* __p1013;
  unsigned long __n1014;
  this1012 = v1008;
  __p1013 = v1009;
  __n1014 = v1010;
  struct std____new_allocator_char_* t1015 = this1012;
    unsigned long c1016 = 1;
    unsigned long c1017 = 16;
    _Bool c1018 = ((c1016 > c1017)) ? 1 : 0;
    if (c1018) {
      char* t1019 = __p1013;
      void* cast1020 = (void*)t1019;
      unsigned long t1021 = __n1014;
      unsigned long c1022 = 1;
      unsigned long b1023 = t1021 * c1022;
      unsigned long c1024 = 1;
      operator_delete_3(cast1020, b1023, c1024);
      return;
    }
  char* t1025 = __p1013;
  void* cast1026 = (void*)t1025;
  unsigned long t1027 = __n1014;
  unsigned long c1028 = 1;
  unsigned long b1029 = t1027 * c1028;
  operator_delete_2(cast1026, b1029);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1030, char* v1031, unsigned long v1032) {
bb1033:
  struct std__allocator_char_* this1034;
  char* __p1035;
  unsigned long __n1036;
  this1034 = v1030;
  __p1035 = v1031;
  __n1036 = v1032;
  struct std__allocator_char_* t1037 = this1034;
    _Bool r1038 = std____is_constant_evaluated();
    if (r1038) {
      char* t1039 = __p1035;
      void* cast1040 = (void*)t1039;
      operator_delete(cast1040);
      return;
    }
  struct std____new_allocator_char_* base1041 = (struct std____new_allocator_char_*)((char *)t1037 + 0);
  char* t1042 = __p1035;
  unsigned long t1043 = __n1036;
  std____new_allocator_char___deallocate(base1041, t1042, t1043);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1044, char* v1045, unsigned long v1046) {
bb1047:
  struct std__allocator_char_* __a1048;
  char* __p1049;
  unsigned long __n1050;
  __a1048 = v1044;
  __p1049 = v1045;
  __n1050 = v1046;
  struct std__allocator_char_* t1051 = __a1048;
  char* t1052 = __p1049;
  unsigned long t1053 = __n1050;
  std__allocator_char___deallocate(t1051, t1052, t1053);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1054, unsigned long v1055) {
bb1056:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1057;
  unsigned long __size1058;
  this1057 = v1054;
  __size1058 = v1055;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1059 = this1057;
  struct std__allocator_char_* r1060 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1059);
  char* r1061 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1059);
  unsigned long t1062 = __size1058;
  unsigned long c1063 = 1;
  unsigned long b1064 = t1062 + c1063;
  std__allocator_traits_std__allocator_char_____deallocate(r1060, r1061, b1064);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1065) {
bb1066:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1067;
  this1067 = v1065;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1068 = this1067;
    _Bool r1069 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1068);
    _Bool u1070 = !r1069;
    if (u1070) {
      unsigned long t1071 = t1068->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1068, t1071);
    }
  return;
}

