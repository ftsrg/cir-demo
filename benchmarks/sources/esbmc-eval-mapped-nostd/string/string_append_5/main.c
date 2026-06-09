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
char _str_2[11] = "..........";
char _str_3[20] = "str == \"..........\"";
char _str_4[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_append_5/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[50] = "basic_string: construction from null is not valid";
char _str_6[24] = "basic_string::_M_create";
char _str_7[29] = "basic_string::_M_replace_aux";
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void __gnu_cxx__char_traits_char___assign_2(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___move(char* p0, char* p1, unsigned long p2);
extern void* memmove(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* p0, char* p1, unsigned long p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___assign(char* p0, unsigned long p1, char p2);
extern void* memset(void* p0, int p1, unsigned long p2);
char* std__char_traits_char___assign(char* p0, unsigned long p1, char p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(char* p0, unsigned long p1, char p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, unsigned long p3, char p4);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char p2);
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
void std__char_traits_char___assign_2(char* p0, char* p1);
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
        char* cast27 = (char*)&(_str_5);
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

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign_2(char* v77, char* v78) {
bb79:
  char* __c180;
  char* __c281;
  __c180 = v77;
  __c281 = v78;
    _Bool r82 = std____is_constant_evaluated();
    if (r82) {
      char* t83 = __c180;
      char* t84 = __c281;
      char* r85 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t83, t84);
    } else {
      char* t86 = __c281;
      char t87 = *t86;
      char* t88 = __c180;
      *t88 = t87;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v89, char* v90, unsigned long v91) {
bb92:
  char* __s193;
  char* __s294;
  unsigned long __n95;
  char* __retval96;
  __s193 = v89;
  __s294 = v90;
  __n95 = v91;
    unsigned long t97 = __n95;
    unsigned long c98 = 0;
    _Bool c99 = ((t97 == c98)) ? 1 : 0;
    if (c99) {
      char* t100 = __s193;
      __retval96 = t100;
      char* t101 = __retval96;
      return t101;
    }
    _Bool r102 = std____is_constant_evaluated();
    if (r102) {
        char* t103 = __s294;
        char* t104 = __s193;
        _Bool c105 = ((t103 < t104)) ? 1 : 0;
        _Bool isconst106 = 0;
        _Bool ternary107;
        if (isconst106) {
          char* t108 = __s193;
          char* t109 = __s294;
          _Bool c110 = ((t108 > t109)) ? 1 : 0;
          ternary107 = (_Bool)c110;
        } else {
          _Bool c111 = 0;
          ternary107 = (_Bool)c111;
        }
        _Bool ternary112;
        if (ternary107) {
          char* t113 = __s193;
          char* t114 = __s294;
          unsigned long t115 = __n95;
          char* ptr116 = &(t114)[t115];
          _Bool c117 = ((t113 < ptr116)) ? 1 : 0;
          ternary112 = (_Bool)c117;
        } else {
          _Bool c118 = 0;
          ternary112 = (_Bool)c118;
        }
        if (ternary112) {
            do {
                unsigned long t119 = __n95;
                unsigned long u120 = t119 - 1;
                __n95 = u120;
                unsigned long t121 = __n95;
                char* t122 = __s193;
                char* ptr123 = &(t122)[t121];
                unsigned long t124 = __n95;
                char* t125 = __s294;
                char* ptr126 = &(t125)[t124];
                __gnu_cxx__char_traits_char___assign_2(ptr123, ptr126);
              unsigned long t127 = __n95;
              unsigned long c128 = 0;
              _Bool c129 = ((t127 > c128)) ? 1 : 0;
              if (!c129) break;
            } while (1);
        } else {
          char* t130 = __s193;
          char* t131 = __s294;
          unsigned long t132 = __n95;
          char* r133 = __gnu_cxx__char_traits_char___copy(t130, t131, t132);
        }
      char* t134 = __s193;
      __retval96 = t134;
      char* t135 = __retval96;
      return t135;
    }
  char* t136 = __s193;
  void* cast137 = (void*)t136;
  char* t138 = __s294;
  void* cast139 = (void*)t138;
  unsigned long t140 = __n95;
  unsigned long c141 = 1;
  unsigned long b142 = t140 * c141;
  void* r143 = memmove(cast137, cast139, b142);
  char* t144 = __s193;
  __retval96 = t144;
  char* t145 = __retval96;
  return t145;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v146, char* v147, unsigned long v148) {
bb149:
  char* __s1150;
  char* __s2151;
  unsigned long __n152;
  char* __retval153;
  __s1150 = v146;
  __s2151 = v147;
  __n152 = v148;
    unsigned long t154 = __n152;
    unsigned long c155 = 0;
    _Bool c156 = ((t154 == c155)) ? 1 : 0;
    if (c156) {
      char* t157 = __s1150;
      __retval153 = t157;
      char* t158 = __retval153;
      return t158;
    }
    _Bool r159 = std____is_constant_evaluated();
    if (r159) {
      char* t160 = __s1150;
      char* t161 = __s2151;
      unsigned long t162 = __n152;
      char* r163 = __gnu_cxx__char_traits_char___move(t160, t161, t162);
      __retval153 = r163;
      char* t164 = __retval153;
      return t164;
    }
  char* t165 = __s1150;
  void* cast166 = (void*)t165;
  char* t167 = __s2151;
  void* cast168 = (void*)t167;
  unsigned long t169 = __n152;
  void* r170 = memmove(cast166, cast168, t169);
  char* cast171 = (char*)r170;
  __retval153 = cast171;
  char* t172 = __retval153;
  return t172;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v173, char* v174, unsigned long v175) {
bb176:
  char* __d177;
  char* __s178;
  unsigned long __n179;
  __d177 = v173;
  __s178 = v174;
  __n179 = v175;
    unsigned long t180 = __n179;
    unsigned long c181 = 1;
    _Bool c182 = ((t180 == c181)) ? 1 : 0;
    if (c182) {
      char* t183 = __d177;
      char* t184 = __s178;
      std__char_traits_char___assign_2(t183, t184);
    } else {
      char* t185 = __d177;
      char* t186 = __s178;
      unsigned long t187 = __n179;
      char* r188 = std__char_traits_char___move(t185, t186, t187);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v189) {
bb190:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this191;
  unsigned long __retval192;
  this191 = v189;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t193 = this191;
  unsigned long r194 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t193);
  __retval192 = r194;
  unsigned long t195 = __retval192;
  return t195;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v196, unsigned long v197, unsigned long v198, char* v199, unsigned long v200) {
bb201:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this202;
  unsigned long __pos203;
  unsigned long __len1204;
  char* __s205;
  unsigned long __len2206;
  unsigned long __how_much207;
  unsigned long __new_capacity208;
  char* __r209;
  this202 = v196;
  __pos203 = v197;
  __len1204 = v198;
  __s205 = v199;
  __len2206 = v200;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t210 = this202;
  unsigned long r211 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t210);
  unsigned long t212 = __pos203;
  unsigned long b213 = r211 - t212;
  unsigned long t214 = __len1204;
  unsigned long b215 = b213 - t214;
  __how_much207 = b215;
  unsigned long r216 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t210);
  unsigned long t217 = __len2206;
  unsigned long b218 = r216 + t217;
  unsigned long t219 = __len1204;
  unsigned long b220 = b218 - t219;
  __new_capacity208 = b220;
  unsigned long r221 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t210);
  char* r222 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t210, &__new_capacity208, r221);
  __r209 = r222;
    unsigned long t223 = __pos203;
    _Bool cast224 = (_Bool)t223;
    if (cast224) {
      char* t225 = __r209;
      char* r226 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t210);
      unsigned long t227 = __pos203;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t225, r226, t227);
    }
    char* t228 = __s205;
    _Bool cast229 = (_Bool)t228;
    _Bool ternary230;
    if (cast229) {
      unsigned long t231 = __len2206;
      _Bool cast232 = (_Bool)t231;
      ternary230 = (_Bool)cast232;
    } else {
      _Bool c233 = 0;
      ternary230 = (_Bool)c233;
    }
    if (ternary230) {
      char* t234 = __r209;
      unsigned long t235 = __pos203;
      char* ptr236 = &(t234)[t235];
      char* t237 = __s205;
      unsigned long t238 = __len2206;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr236, t237, t238);
    }
    unsigned long t239 = __how_much207;
    _Bool cast240 = (_Bool)t239;
    if (cast240) {
      char* t241 = __r209;
      unsigned long t242 = __pos203;
      char* ptr243 = &(t241)[t242];
      unsigned long t244 = __len2206;
      char* ptr245 = &(ptr243)[t244];
      char* r246 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t210);
      unsigned long t247 = __pos203;
      char* ptr248 = &(r246)[t247];
      unsigned long t249 = __len1204;
      char* ptr250 = &(ptr248)[t249];
      unsigned long t251 = __how_much207;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr245, ptr250, t251);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t210);
  char* t252 = __r209;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t210, t252);
  unsigned long t253 = __new_capacity208;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t210, t253);
  return;
}

// function: _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* v254, char* v255) {
bb256:
  char* __location257;
  char* __args258;
  char* __retval259;
  void* __loc260;
  __location257 = v254;
  __args258 = v255;
  char* t261 = __location257;
  void* cast262 = (void*)t261;
  __loc260 = cast262;
    void* t263 = __loc260;
    char* cast264 = (char*)t263;
    char* t265 = __args258;
    char t266 = *t265;
    *cast264 = t266;
    __retval259 = cast264;
    char* t267 = __retval259;
    return t267;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignEPcmc
char* __gnu_cxx__char_traits_char___assign(char* v268, unsigned long v269, char v270) {
bb271:
  char* __s272;
  unsigned long __n273;
  char __a274;
  char* __retval275;
  __s272 = v268;
  __n273 = v269;
  __a274 = v270;
    _Bool r276 = std____is_constant_evaluated();
    if (r276) {
        unsigned long __i277;
        unsigned long c278 = 0;
        __i277 = c278;
        while (1) {
          unsigned long t280 = __i277;
          unsigned long t281 = __n273;
          _Bool c282 = ((t280 < t281)) ? 1 : 0;
          if (!c282) break;
          char* t283 = __s272;
          unsigned long t284 = __i277;
          char* ptr285 = &(t283)[t284];
          char* r286 = _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(ptr285, &__a274);
        for_step279: ;
          unsigned long t287 = __i277;
          unsigned long u288 = t287 + 1;
          __i277 = u288;
        }
      char* t289 = __s272;
      __retval275 = t289;
      char* t290 = __retval275;
      return t290;
    }
      unsigned long t291 = __n273;
      _Bool cast292 = (_Bool)t291;
      if (cast292) {
        unsigned char __c293;
        void* cast294 = (void*)&(__c293);
        void* cast295 = (void*)&(__a274);
        unsigned long c296 = 1;
        void* r297 = memcpy(cast294, cast295, c296);
        char* t298 = __s272;
        void* cast299 = (void*)t298;
        unsigned char t300 = __c293;
        int cast301 = (int)t300;
        unsigned long t302 = __n273;
        void* r303 = memset(cast299, cast301, t302);
      }
  char* t304 = __s272;
  __retval275 = t304;
  char* t305 = __retval275;
  return t305;
}

// function: _ZNSt11char_traitsIcE6assignEPcmc
char* std__char_traits_char___assign(char* v306, unsigned long v307, char v308) {
bb309:
  char* __s310;
  unsigned long __n311;
  char __a312;
  char* __retval313;
  __s310 = v306;
  __n311 = v307;
  __a312 = v308;
    unsigned long t314 = __n311;
    unsigned long c315 = 0;
    _Bool c316 = ((t314 == c315)) ? 1 : 0;
    if (c316) {
      char* t317 = __s310;
      __retval313 = t317;
      char* t318 = __retval313;
      return t318;
    }
    _Bool r319 = std____is_constant_evaluated();
    if (r319) {
      char* t320 = __s310;
      unsigned long t321 = __n311;
      char t322 = __a312;
      char* r323 = __gnu_cxx__char_traits_char___assign(t320, t321, t322);
      __retval313 = r323;
      char* t324 = __retval313;
      return t324;
    }
  char* t325 = __s310;
  void* cast326 = (void*)t325;
  char t327 = __a312;
  int cast328 = (int)t327;
  unsigned long t329 = __n311;
  void* r330 = memset(cast326, cast328, t329);
  char* cast331 = (char*)r330;
  __retval313 = cast331;
  char* t332 = __retval313;
  return t332;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_S_assignEPcmc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(char* v333, unsigned long v334, char v335) {
bb336:
  char* __d337;
  unsigned long __n338;
  char __c339;
  __d337 = v333;
  __n338 = v334;
  __c339 = v335;
    unsigned long t340 = __n338;
    unsigned long c341 = 1;
    _Bool c342 = ((t340 == c341)) ? 1 : 0;
    if (c342) {
      char* t343 = __d337;
      std__char_traits_char___assign_2(t343, &__c339);
    } else {
      char* t344 = __d337;
      unsigned long t345 = __n338;
      char t346 = __c339;
      char* r347 = std__char_traits_char___assign(t344, t345, t346);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE14_M_replace_auxEmmmc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v348, unsigned long v349, unsigned long v350, unsigned long v351, char v352) {
bb353:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this354;
  unsigned long __pos1355;
  unsigned long __n1356;
  unsigned long __n2357;
  char __c358;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval359;
  unsigned long __old_size360;
  unsigned long __new_size361;
  this354 = v348;
  __pos1355 = v349;
  __n1356 = v350;
  __n2357 = v351;
  __c358 = v352;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t362 = this354;
  unsigned long t363 = __n1356;
  unsigned long t364 = __n2357;
  char* cast365 = (char*)&(_str_7);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t362, t363, t364, cast365);
  unsigned long r366 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t362);
  __old_size360 = r366;
  unsigned long t367 = __old_size360;
  unsigned long t368 = __n2357;
  unsigned long b369 = t367 + t368;
  unsigned long t370 = __n1356;
  unsigned long b371 = b369 - t370;
  __new_size361 = b371;
    unsigned long t372 = __new_size361;
    unsigned long r373 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t362);
    _Bool c374 = ((t372 <= r373)) ? 1 : 0;
    if (c374) {
      char* __p375;
      unsigned long __how_much376;
      char* r377 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t362);
      unsigned long t378 = __pos1355;
      char* ptr379 = &(r377)[t378];
      __p375 = ptr379;
      unsigned long t380 = __old_size360;
      unsigned long t381 = __pos1355;
      unsigned long b382 = t380 - t381;
      unsigned long t383 = __n1356;
      unsigned long b384 = b382 - t383;
      __how_much376 = b384;
        unsigned long t385 = __how_much376;
        _Bool cast386 = (_Bool)t385;
        _Bool ternary387;
        if (cast386) {
          unsigned long t388 = __n1356;
          unsigned long t389 = __n2357;
          _Bool c390 = ((t388 != t389)) ? 1 : 0;
          ternary387 = (_Bool)c390;
        } else {
          _Bool c391 = 0;
          ternary387 = (_Bool)c391;
        }
        if (ternary387) {
          char* t392 = __p375;
          unsigned long t393 = __n2357;
          char* ptr394 = &(t392)[t393];
          char* t395 = __p375;
          unsigned long t396 = __n1356;
          char* ptr397 = &(t395)[t396];
          unsigned long t398 = __how_much376;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr394, ptr397, t398);
        }
    } else {
      unsigned long t399 = __pos1355;
      unsigned long t400 = __n1356;
      char* c401 = ((void*)0);
      unsigned long t402 = __n2357;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t362, t399, t400, c401, t402);
    }
    unsigned long t403 = __n2357;
    _Bool cast404 = (_Bool)t403;
    if (cast404) {
      char* r405 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t362);
      unsigned long t406 = __pos1355;
      char* ptr407 = &(r405)[t406];
      unsigned long t408 = __n2357;
      char t409 = __c358;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(ptr407, t408, t409);
    }
  unsigned long t410 = __new_size361;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t362, t410);
  __retval359 = t362;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t411 = __retval359;
  return t411;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v412) {
bb413:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this414;
  unsigned long __retval415;
  unsigned long __sz416;
  this414 = v412;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t417 = this414;
  unsigned long t418 = t417->_M_string_length;
  __sz416 = t418;
    unsigned long t419 = __sz416;
    unsigned long r420 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t417);
    _Bool c421 = ((t419 > r420)) ? 1 : 0;
    if (c421) {
      __builtin_unreachable();
    }
  unsigned long t422 = __sz416;
  __retval415 = t422;
  unsigned long t423 = __retval415;
  return t423;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEmc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v424, unsigned long v425, char v426) {
bb427:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this428;
  unsigned long __n429;
  char __c430;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval431;
  this428 = v424;
  __n429 = v425;
  __c430 = v426;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t432 = this428;
  unsigned long r433 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t432);
  unsigned long c434 = 0;
  unsigned long t435 = __n429;
  char t436 = __c430;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r437 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(t432, r433, c434, t435, t436);
  __retval431 = r437;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t438 = __retval431;
  return t438;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v439, char* v440) {
bb441:
  char* __c1442;
  char* __c2443;
  _Bool __retval444;
  __c1442 = v439;
  __c2443 = v440;
  char* t445 = __c1442;
  char t446 = *t445;
  unsigned char cast447 = (unsigned char)t446;
  int cast448 = (int)cast447;
  char* t449 = __c2443;
  char t450 = *t449;
  unsigned char cast451 = (unsigned char)t450;
  int cast452 = (int)cast451;
  _Bool c453 = ((cast448 < cast452)) ? 1 : 0;
  __retval444 = c453;
  _Bool t454 = __retval444;
  return t454;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v455, char* v456, unsigned long v457) {
bb458:
  char* __s1459;
  char* __s2460;
  unsigned long __n461;
  int __retval462;
  __s1459 = v455;
  __s2460 = v456;
  __n461 = v457;
    unsigned long t463 = __n461;
    unsigned long c464 = 0;
    _Bool c465 = ((t463 == c464)) ? 1 : 0;
    if (c465) {
      int c466 = 0;
      __retval462 = c466;
      int t467 = __retval462;
      return t467;
    }
    _Bool r468 = std____is_constant_evaluated();
    if (r468) {
        unsigned long __i469;
        unsigned long c470 = 0;
        __i469 = c470;
        while (1) {
          unsigned long t472 = __i469;
          unsigned long t473 = __n461;
          _Bool c474 = ((t472 < t473)) ? 1 : 0;
          if (!c474) break;
            unsigned long t475 = __i469;
            char* t476 = __s1459;
            char* ptr477 = &(t476)[t475];
            unsigned long t478 = __i469;
            char* t479 = __s2460;
            char* ptr480 = &(t479)[t478];
            _Bool r481 = std__char_traits_char___lt(ptr477, ptr480);
            if (r481) {
              int c482 = -1;
              __retval462 = c482;
              int t483 = __retval462;
              int ret_val484 = t483;
              return ret_val484;
            } else {
                unsigned long t485 = __i469;
                char* t486 = __s2460;
                char* ptr487 = &(t486)[t485];
                unsigned long t488 = __i469;
                char* t489 = __s1459;
                char* ptr490 = &(t489)[t488];
                _Bool r491 = std__char_traits_char___lt(ptr487, ptr490);
                if (r491) {
                  int c492 = 1;
                  __retval462 = c492;
                  int t493 = __retval462;
                  int ret_val494 = t493;
                  return ret_val494;
                }
            }
        for_step471: ;
          unsigned long t495 = __i469;
          unsigned long u496 = t495 + 1;
          __i469 = u496;
        }
      int c497 = 0;
      __retval462 = c497;
      int t498 = __retval462;
      return t498;
    }
  char* t499 = __s1459;
  void* cast500 = (void*)t499;
  char* t501 = __s2460;
  void* cast502 = (void*)t501;
  unsigned long t503 = __n461;
  int r504 = memcmp(cast500, cast502, t503);
  __retval462 = r504;
  int t505 = __retval462;
  return t505;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v506) {
bb507:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this508;
  char* __retval509;
  this508 = v506;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t510 = this508;
  char* r511 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t510);
  __retval509 = r511;
  char* t512 = __retval509;
  return t512;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v513, char* v514) {
bb515:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs516;
  char* __rhs517;
  _Bool __retval518;
  __lhs516 = v513;
  __rhs517 = v514;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t519 = __lhs516;
  unsigned long r520 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t519);
  char* t521 = __rhs517;
  unsigned long r522 = std__char_traits_char___length(t521);
  _Bool c523 = ((r520 == r522)) ? 1 : 0;
  _Bool ternary524;
  if (c523) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t525 = __lhs516;
    char* r526 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t525);
    char* t527 = __rhs517;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t528 = __lhs516;
    unsigned long r529 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t528);
    int r530 = std__char_traits_char___compare(r526, t527, r529);
    _Bool cast531 = (_Bool)r530;
    _Bool u532 = !cast531;
    ternary524 = (_Bool)u532;
  } else {
    _Bool c533 = 0;
    ternary524 = (_Bool)c533;
  }
  __retval518 = ternary524;
  _Bool t534 = __retval518;
  return t534;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v535, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v536) {
bb537:
  struct std__basic_ostream_char__std__char_traits_char__* __os538;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str539;
  struct std__basic_ostream_char__std__char_traits_char__* __retval540;
  __os538 = v535;
  __str539 = v536;
  struct std__basic_ostream_char__std__char_traits_char__* t541 = __os538;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t542 = __str539;
  char* r543 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t542);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t544 = __str539;
  unsigned long r545 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t544);
  long cast546 = (long)r545;
  struct std__basic_ostream_char__std__char_traits_char__* r547 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t541, r543, cast546);
  __retval540 = r547;
  struct std__basic_ostream_char__std__char_traits_char__* t548 = __retval540;
  return t548;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v549, void* v550) {
bb551:
  struct std__basic_ostream_char__std__char_traits_char__* this552;
  void* __pf553;
  struct std__basic_ostream_char__std__char_traits_char__* __retval554;
  this552 = v549;
  __pf553 = v550;
  struct std__basic_ostream_char__std__char_traits_char__* t555 = this552;
  void* t556 = __pf553;
  struct std__basic_ostream_char__std__char_traits_char__* r557 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t556)(t555);
  __retval554 = r557;
  struct std__basic_ostream_char__std__char_traits_char__* t558 = __retval554;
  return t558;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v559) {
bb560:
  struct std__basic_ostream_char__std__char_traits_char__* __os561;
  struct std__basic_ostream_char__std__char_traits_char__* __retval562;
  __os561 = v559;
  struct std__basic_ostream_char__std__char_traits_char__* t563 = __os561;
  struct std__basic_ostream_char__std__char_traits_char__* r564 = std__ostream__flush(t563);
  __retval562 = r564;
  struct std__basic_ostream_char__std__char_traits_char__* t565 = __retval562;
  return t565;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v566) {
bb567:
  struct std__ctype_char_* __f568;
  struct std__ctype_char_* __retval569;
  __f568 = v566;
    struct std__ctype_char_* t570 = __f568;
    _Bool cast571 = (_Bool)t570;
    _Bool u572 = !cast571;
    if (u572) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t573 = __f568;
  __retval569 = t573;
  struct std__ctype_char_* t574 = __retval569;
  return t574;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v575, char v576) {
bb577:
  struct std__ctype_char_* this578;
  char __c579;
  char __retval580;
  this578 = v575;
  __c579 = v576;
  struct std__ctype_char_* t581 = this578;
    char t582 = t581->_M_widen_ok;
    _Bool cast583 = (_Bool)t582;
    if (cast583) {
      char t584 = __c579;
      unsigned char cast585 = (unsigned char)t584;
      unsigned long cast586 = (unsigned long)cast585;
      char t587 = t581->_M_widen[cast586];
      __retval580 = t587;
      char t588 = __retval580;
      return t588;
    }
  std__ctype_char____M_widen_init___const(t581);
  char t589 = __c579;
  void** v590 = (void**)t581;
  void* v591 = *((void**)v590);
  char vcall594 = (char)__VERIFIER_virtual_call_char_char(t581, 6, t589);
  __retval580 = vcall594;
  char t595 = __retval580;
  return t595;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v596, char v597) {
bb598:
  struct std__basic_ios_char__std__char_traits_char__* this599;
  char __c600;
  char __retval601;
  this599 = v596;
  __c600 = v597;
  struct std__basic_ios_char__std__char_traits_char__* t602 = this599;
  struct std__ctype_char_* t603 = t602->_M_ctype;
  struct std__ctype_char_* r604 = std__ctype_char__const__std____check_facet_std__ctype_char___(t603);
  char t605 = __c600;
  char r606 = std__ctype_char___widen_char__const(r604, t605);
  __retval601 = r606;
  char t607 = __retval601;
  return t607;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v608) {
bb609:
  struct std__basic_ostream_char__std__char_traits_char__* __os610;
  struct std__basic_ostream_char__std__char_traits_char__* __retval611;
  __os610 = v608;
  struct std__basic_ostream_char__std__char_traits_char__* t612 = __os610;
  struct std__basic_ostream_char__std__char_traits_char__* t613 = __os610;
  void** v614 = (void**)t613;
  void* v615 = *((void**)v614);
  unsigned char* cast616 = (unsigned char*)v615;
  long c617 = -24;
  unsigned char* ptr618 = &(cast616)[c617];
  long* cast619 = (long*)ptr618;
  long t620 = *cast619;
  unsigned char* cast621 = (unsigned char*)t613;
  unsigned char* ptr622 = &(cast621)[t620];
  struct std__basic_ostream_char__std__char_traits_char__* cast623 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr622;
  struct std__basic_ios_char__std__char_traits_char__* cast624 = (struct std__basic_ios_char__std__char_traits_char__*)cast623;
  char c625 = 10;
  char r626 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast624, c625);
  struct std__basic_ostream_char__std__char_traits_char__* r627 = std__ostream__put(t612, r626);
  struct std__basic_ostream_char__std__char_traits_char__* r628 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r627);
  __retval611 = r628;
  struct std__basic_ostream_char__std__char_traits_char__* t629 = __retval611;
  return t629;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v630) {
bb631:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this632;
  this632 = v630;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t633 = this632;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t633);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t633->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb634:
  int __retval635;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str636;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2637;
  struct std__allocator_char_ ref_tmp0638;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str3639;
  struct std__allocator_char_ ref_tmp1640;
  int c641 = 0;
  __retval635 = c641;
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str636);
    char* cast642 = (char*)&(_str);
    std__allocator_char___allocator_2(&ref_tmp0638);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str2637, cast642, &ref_tmp0638);
    {
      std__allocator_char____allocator(&ref_tmp0638);
    }
      char* cast643 = (char*)&(_str_1);
      std__allocator_char___allocator_2(&ref_tmp1640);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str3639, cast643, &ref_tmp1640);
      {
        std__allocator_char____allocator(&ref_tmp1640);
      }
        unsigned long c644 = 10;
        char c645 = 46;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r646 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(&str636, c644, c645);
        char* cast647 = (char*)&(_str_2);
        _Bool r648 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str636, cast647);
        if (r648) {
        } else {
          char* cast649 = (char*)&(_str_3);
          char* c650 = _str_4;
          unsigned int c651 = 21;
          char* cast652 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast649, c650, c651, cast652);
        }
        struct std__basic_ostream_char__std__char_traits_char__* r653 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str636);
        struct std__basic_ostream_char__std__char_traits_char__* r654 = std__ostream__operator___std__ostream_____(r653, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        int c655 = 0;
        __retval635 = c655;
        int t656 = __retval635;
        int ret_val657 = t656;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str3639);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str2637);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str636);
        }
        return ret_val657;
  int t658 = __retval635;
  return t658;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v659) {
bb660:
  char* __r661;
  char* __retval662;
  __r661 = v659;
  char* t663 = __r661;
  __retval662 = t663;
  char* t664 = __retval662;
  return t664;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v665) {
bb666:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this667;
  char* __retval668;
  this667 = v665;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t669 = this667;
  char* cast670 = (char*)&(t669->field2._M_local_buf);
  char* r671 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast670);
  __retval668 = r671;
  char* t672 = __retval668;
  return t672;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v673, char* v674, struct std__allocator_char_* v675) {
bb676:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this677;
  char* __dat678;
  struct std__allocator_char_* __a679;
  this677 = v673;
  __dat678 = v674;
  __a679 = v675;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t680 = this677;
  struct std__allocator_char_* base681 = (struct std__allocator_char_*)((char *)t680 + 0);
  struct std__allocator_char_* t682 = __a679;
  std__allocator_char___allocator(base681, t682);
    char* t683 = __dat678;
    t680->_M_p = t683;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb684:
  _Bool __retval685;
    _Bool c686 = 0;
    __retval685 = c686;
    _Bool t687 = __retval685;
    return t687;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v688) {
bb689:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this690;
  this690 = v688;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t691 = this690;
    _Bool r692 = std__is_constant_evaluated();
    if (r692) {
        unsigned long __i693;
        unsigned long c694 = 0;
        __i693 = c694;
        while (1) {
          unsigned long t696 = __i693;
          unsigned long c697 = 15;
          _Bool c698 = ((t696 <= c697)) ? 1 : 0;
          if (!c698) break;
          char c699 = 0;
          unsigned long t700 = __i693;
          t691->field2._M_local_buf[t700] = c699;
        for_step695: ;
          unsigned long t701 = __i693;
          unsigned long u702 = t701 + 1;
          __i693 = u702;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v703, unsigned long v704) {
bb705:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this706;
  unsigned long __length707;
  this706 = v703;
  __length707 = v704;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t708 = this706;
  unsigned long t709 = __length707;
  t708->_M_string_length = t709;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb710:
  _Bool __retval711;
    _Bool c712 = 0;
    __retval711 = c712;
    _Bool t713 = __retval711;
    return t713;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v714, char* v715) {
bb716:
  char* __location717;
  char* __args718;
  char* __retval719;
  void* __loc720;
  __location717 = v714;
  __args718 = v715;
  char* t721 = __location717;
  void* cast722 = (void*)t721;
  __loc720 = cast722;
    void* t723 = __loc720;
    char* cast724 = (char*)t723;
    char* t725 = __args718;
    char t726 = *t725;
    *cast724 = t726;
    __retval719 = cast724;
    char* t727 = __retval719;
    return t727;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign_2(char* v728, char* v729) {
bb730:
  char* __c1731;
  char* __c2732;
  __c1731 = v728;
  __c2732 = v729;
    _Bool r733 = std____is_constant_evaluated();
    if (r733) {
      char* t734 = __c1731;
      char* t735 = __c2732;
      char* r736 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t734, t735);
    } else {
      char* t737 = __c2732;
      char t738 = *t737;
      char* t739 = __c1731;
      *t739 = t738;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v740) {
bb741:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this742;
  char* __retval743;
  this742 = v740;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t744 = this742;
  char* t745 = t744->_M_dataplus._M_p;
  __retval743 = t745;
  char* t746 = __retval743;
  return t746;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v747, unsigned long v748) {
bb749:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this750;
  unsigned long __n751;
  char ref_tmp0752;
  this750 = v747;
  __n751 = v748;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t753 = this750;
  unsigned long t754 = __n751;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t753, t754);
  unsigned long t755 = __n751;
  char* r756 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t753);
  char* ptr757 = &(r756)[t755];
  char c758 = 0;
  ref_tmp0752 = c758;
  std__char_traits_char___assign_2(ptr757, &ref_tmp0752);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v759) {
bb760:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this761;
  this761 = v759;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t762 = this761;
  {
    struct std__allocator_char_* base763 = (struct std__allocator_char_*)((char *)t762 + 0);
    std__allocator_char____allocator(base763);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v764, struct std____new_allocator_char_* v765) {
bb766:
  struct std____new_allocator_char_* this767;
  struct std____new_allocator_char_* unnamed768;
  this767 = v764;
  unnamed768 = v765;
  struct std____new_allocator_char_* t769 = this767;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v770, struct std__allocator_char_* v771) {
bb772:
  struct std__allocator_char_* this773;
  struct std__allocator_char_* __a774;
  this773 = v770;
  __a774 = v771;
  struct std__allocator_char_* t775 = this773;
  struct std____new_allocator_char_* base776 = (struct std____new_allocator_char_*)((char *)t775 + 0);
  struct std__allocator_char_* t777 = __a774;
  struct std____new_allocator_char_* base778 = (struct std____new_allocator_char_*)((char *)t777 + 0);
  std____new_allocator_char_____new_allocator(base776, base778);
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v779) {
bb780:
  struct std____new_allocator_char_* this781;
  this781 = v779;
  struct std____new_allocator_char_* t782 = this781;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v783, char* v784, struct std__allocator_char_* v785) {
bb786:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this787;
  char* __dat788;
  struct std__allocator_char_* __a789;
  this787 = v783;
  __dat788 = v784;
  __a789 = v785;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t790 = this787;
  struct std__allocator_char_* base791 = (struct std__allocator_char_*)((char *)t790 + 0);
  struct std__allocator_char_* t792 = __a789;
  std__allocator_char___allocator(base791, t792);
    char* t793 = __dat788;
    t790->_M_p = t793;
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v794, char* v795) {
bb796:
  char* __c1797;
  char* __c2798;
  _Bool __retval799;
  __c1797 = v794;
  __c2798 = v795;
  char* t800 = __c1797;
  char t801 = *t800;
  int cast802 = (int)t801;
  char* t803 = __c2798;
  char t804 = *t803;
  int cast805 = (int)t804;
  _Bool c806 = ((cast802 == cast805)) ? 1 : 0;
  __retval799 = c806;
  _Bool t807 = __retval799;
  return t807;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v808) {
bb809:
  char* __p810;
  unsigned long __retval811;
  unsigned long __i812;
  __p810 = v808;
  unsigned long c813 = 0;
  __i812 = c813;
    char ref_tmp0814;
    while (1) {
      unsigned long t815 = __i812;
      char* t816 = __p810;
      char* ptr817 = &(t816)[t815];
      char c818 = 0;
      ref_tmp0814 = c818;
      _Bool r819 = __gnu_cxx__char_traits_char___eq(ptr817, &ref_tmp0814);
      _Bool u820 = !r819;
      if (!u820) break;
      unsigned long t821 = __i812;
      unsigned long u822 = t821 + 1;
      __i812 = u822;
    }
  unsigned long t823 = __i812;
  __retval811 = t823;
  unsigned long t824 = __retval811;
  return t824;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v825) {
bb826:
  char* __s827;
  unsigned long __retval828;
  __s827 = v825;
    _Bool r829 = std____is_constant_evaluated();
    if (r829) {
      char* t830 = __s827;
      unsigned long r831 = __gnu_cxx__char_traits_char___length(t830);
      __retval828 = r831;
      unsigned long t832 = __retval828;
      return t832;
    }
  char* t833 = __s827;
  unsigned long r834 = strlen(t833);
  __retval828 = r834;
  unsigned long t835 = __retval828;
  return t835;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v836, char* v837, struct std__random_access_iterator_tag v838) {
bb839:
  char* __first840;
  char* __last841;
  struct std__random_access_iterator_tag unnamed842;
  long __retval843;
  __first840 = v836;
  __last841 = v837;
  unnamed842 = v838;
  char* t844 = __last841;
  char* t845 = __first840;
  long diff846 = t844 - t845;
  __retval843 = diff846;
  long t847 = __retval843;
  return t847;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v848) {
bb849:
  char** unnamed850;
  struct std__random_access_iterator_tag __retval851;
  unnamed850 = v848;
  struct std__random_access_iterator_tag t852 = __retval851;
  return t852;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v853, char* v854) {
bb855:
  char* __first856;
  char* __last857;
  long __retval858;
  struct std__random_access_iterator_tag agg_tmp0859;
  __first856 = v853;
  __last857 = v854;
  char* t860 = __first856;
  char* t861 = __last857;
  struct std__random_access_iterator_tag r862 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first856);
  agg_tmp0859 = r862;
  struct std__random_access_iterator_tag t863 = agg_tmp0859;
  long r864 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t860, t861, t863);
  __retval858 = r864;
  long t865 = __retval858;
  return t865;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v866, char* v867) {
bb868:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this869;
  char* __p870;
  this869 = v866;
  __p870 = v867;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t871 = this869;
  char* t872 = __p870;
  t871->_M_dataplus._M_p = t872;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v873) {
bb874:
  struct std__allocator_char_* __a875;
  unsigned long __retval876;
  __a875 = v873;
  unsigned long c877 = -1;
  unsigned long c878 = 1;
  unsigned long b879 = c877 / c878;
  __retval876 = b879;
  unsigned long t880 = __retval876;
  return t880;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v881) {
bb882:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this883;
  struct std__allocator_char_* __retval884;
  this883 = v881;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t885 = this883;
  struct std__allocator_char_* base886 = (struct std__allocator_char_*)((char *)&(t885->_M_dataplus) + 0);
  __retval884 = base886;
  struct std__allocator_char_* t887 = __retval884;
  return t887;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v888, unsigned long* v889) {
bb890:
  unsigned long* __a891;
  unsigned long* __b892;
  unsigned long* __retval893;
  __a891 = v888;
  __b892 = v889;
    unsigned long* t894 = __b892;
    unsigned long t895 = *t894;
    unsigned long* t896 = __a891;
    unsigned long t897 = *t896;
    _Bool c898 = ((t895 < t897)) ? 1 : 0;
    if (c898) {
      unsigned long* t899 = __b892;
      __retval893 = t899;
      unsigned long* t900 = __retval893;
      return t900;
    }
  unsigned long* t901 = __a891;
  __retval893 = t901;
  unsigned long* t902 = __retval893;
  return t902;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v903) {
bb904:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this905;
  unsigned long __retval906;
  unsigned long __diffmax907;
  unsigned long __allocmax908;
  this905 = v903;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t909 = this905;
  unsigned long c910 = 9223372036854775807;
  __diffmax907 = c910;
  struct std__allocator_char_* r911 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t909);
  unsigned long r912 = std__allocator_traits_std__allocator_char_____max_size(r911);
  __allocmax908 = r912;
  unsigned long* r913 = unsigned_long_const__std__min_unsigned_long_(&__diffmax907, &__allocmax908);
  unsigned long t914 = *r913;
  unsigned long c915 = 1;
  unsigned long b916 = t914 - c915;
  __retval906 = b916;
  unsigned long t917 = __retval906;
  return t917;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v918) {
bb919:
  struct std____new_allocator_char_* this920;
  unsigned long __retval921;
  this920 = v918;
  struct std____new_allocator_char_* t922 = this920;
  unsigned long c923 = 9223372036854775807;
  unsigned long c924 = 1;
  unsigned long b925 = c923 / c924;
  __retval921 = b925;
  unsigned long t926 = __retval921;
  return t926;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v927, unsigned long v928, void* v929) {
bb930:
  struct std____new_allocator_char_* this931;
  unsigned long __n932;
  void* unnamed933;
  char* __retval934;
  this931 = v927;
  __n932 = v928;
  unnamed933 = v929;
  struct std____new_allocator_char_* t935 = this931;
    unsigned long t936 = __n932;
    unsigned long r937 = std____new_allocator_char____M_max_size___const(t935);
    _Bool c938 = ((t936 > r937)) ? 1 : 0;
    if (c938) {
        unsigned long t939 = __n932;
        unsigned long c940 = -1;
        unsigned long c941 = 1;
        unsigned long b942 = c940 / c941;
        _Bool c943 = ((t939 > b942)) ? 1 : 0;
        if (c943) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c944 = 1;
    unsigned long c945 = 16;
    _Bool c946 = ((c944 > c945)) ? 1 : 0;
    if (c946) {
      unsigned long __al947;
      unsigned long c948 = 1;
      __al947 = c948;
      unsigned long t949 = __n932;
      unsigned long c950 = 1;
      unsigned long b951 = t949 * c950;
      unsigned long t952 = __al947;
      void* r953 = operator_new_2(b951, t952);
      char* cast954 = (char*)r953;
      __retval934 = cast954;
      char* t955 = __retval934;
      return t955;
    }
  unsigned long t956 = __n932;
  unsigned long c957 = 1;
  unsigned long b958 = t956 * c957;
  void* r959 = operator_new(b958);
  char* cast960 = (char*)r959;
  __retval934 = cast960;
  char* t961 = __retval934;
  return t961;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v962, unsigned long v963) {
bb964:
  struct std__allocator_char_* this965;
  unsigned long __n966;
  char* __retval967;
  this965 = v962;
  __n966 = v963;
  struct std__allocator_char_* t968 = this965;
    _Bool r969 = std____is_constant_evaluated();
    if (r969) {
        unsigned long t970 = __n966;
        unsigned long c971 = 1;
        unsigned long ovr972;
        _Bool ovf973 = __builtin_mul_overflow(t970, c971, &ovr972);
        __n966 = ovr972;
        if (ovf973) {
          std____throw_bad_array_new_length();
        }
      unsigned long t974 = __n966;
      void* r975 = operator_new(t974);
      char* cast976 = (char*)r975;
      __retval967 = cast976;
      char* t977 = __retval967;
      return t977;
    }
  struct std____new_allocator_char_* base978 = (struct std____new_allocator_char_*)((char *)t968 + 0);
  unsigned long t979 = __n966;
  void* c980 = ((void*)0);
  char* r981 = std____new_allocator_char___allocate(base978, t979, c980);
  __retval967 = r981;
  char* t982 = __retval967;
  return t982;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v983, unsigned long v984) {
bb985:
  struct std__allocator_char_* __a986;
  unsigned long __n987;
  char* __retval988;
  __a986 = v983;
  __n987 = v984;
  struct std__allocator_char_* t989 = __a986;
  unsigned long t990 = __n987;
  char* r991 = std__allocator_char___allocate(t989, t990);
  __retval988 = r991;
  char* t992 = __retval988;
  return t992;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v993, unsigned long v994) {
bb995:
  struct std__allocator_char_* __a996;
  unsigned long __n997;
  char* __retval998;
  char* __p999;
  __a996 = v993;
  __n997 = v994;
  struct std__allocator_char_* t1000 = __a996;
  unsigned long t1001 = __n997;
  char* r1002 = std__allocator_traits_std__allocator_char_____allocate(t1000, t1001);
  __p999 = r1002;
  char* t1003 = __p999;
  __retval998 = t1003;
  char* t1004 = __retval998;
  return t1004;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1005) {
bb1006:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1007;
  struct std__allocator_char_* __retval1008;
  this1007 = v1005;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1009 = this1007;
  struct std__allocator_char_* base1010 = (struct std__allocator_char_*)((char *)&(t1009->_M_dataplus) + 0);
  __retval1008 = base1010;
  struct std__allocator_char_* t1011 = __retval1008;
  return t1011;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1012, unsigned long* v1013, unsigned long v1014) {
bb1015:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1016;
  unsigned long* __capacity1017;
  unsigned long __old_capacity1018;
  char* __retval1019;
  this1016 = v1012;
  __capacity1017 = v1013;
  __old_capacity1018 = v1014;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1020 = this1016;
    unsigned long* t1021 = __capacity1017;
    unsigned long t1022 = *t1021;
    unsigned long r1023 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1020);
    _Bool c1024 = ((t1022 > r1023)) ? 1 : 0;
    if (c1024) {
      char* cast1025 = (char*)&(_str_6);
      std____throw_length_error(cast1025);
    }
    unsigned long* t1026 = __capacity1017;
    unsigned long t1027 = *t1026;
    unsigned long t1028 = __old_capacity1018;
    _Bool c1029 = ((t1027 > t1028)) ? 1 : 0;
    _Bool ternary1030;
    if (c1029) {
      unsigned long* t1031 = __capacity1017;
      unsigned long t1032 = *t1031;
      unsigned long c1033 = 2;
      unsigned long t1034 = __old_capacity1018;
      unsigned long b1035 = c1033 * t1034;
      _Bool c1036 = ((t1032 < b1035)) ? 1 : 0;
      ternary1030 = (_Bool)c1036;
    } else {
      _Bool c1037 = 0;
      ternary1030 = (_Bool)c1037;
    }
    if (ternary1030) {
      unsigned long c1038 = 2;
      unsigned long t1039 = __old_capacity1018;
      unsigned long b1040 = c1038 * t1039;
      unsigned long* t1041 = __capacity1017;
      *t1041 = b1040;
        unsigned long* t1042 = __capacity1017;
        unsigned long t1043 = *t1042;
        unsigned long r1044 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1020);
        _Bool c1045 = ((t1043 > r1044)) ? 1 : 0;
        if (c1045) {
          unsigned long r1046 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1020);
          unsigned long* t1047 = __capacity1017;
          *t1047 = r1046;
        }
    }
  struct std__allocator_char_* r1048 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1020);
  unsigned long* t1049 = __capacity1017;
  unsigned long t1050 = *t1049;
  unsigned long c1051 = 1;
  unsigned long b1052 = t1050 + c1051;
  char* r1053 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1048, b1052);
  __retval1019 = r1053;
  char* t1054 = __retval1019;
  return t1054;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1055, unsigned long v1056) {
bb1057:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1058;
  unsigned long __capacity1059;
  this1058 = v1055;
  __capacity1059 = v1056;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1060 = this1058;
  unsigned long t1061 = __capacity1059;
  t1060->field2._M_allocated_capacity = t1061;
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1062, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1063) {
bb1064:
  struct _Guard* this1065;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1066;
  this1065 = v1062;
  __s1066 = v1063;
  struct _Guard* t1067 = this1065;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1068 = __s1066;
  t1067->_M_guarded = t1068;
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
      std__char_traits_char___assign_2(t1147, t1148);
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

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1173) {
bb1174:
  struct _Guard* this1175;
  this1175 = v1173;
  struct _Guard* t1176 = this1175;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1177 = t1176->_M_guarded;
    _Bool cast1178 = (_Bool)t1177;
    if (cast1178) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1179 = t1176->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1179);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1180, char* v1181, char* v1182, struct std__forward_iterator_tag v1183) {
bb1184:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1185;
  char* __beg1186;
  char* __end1187;
  struct std__forward_iterator_tag unnamed1188;
  unsigned long __dnew1189;
  struct _Guard __guard1190;
  this1185 = v1180;
  __beg1186 = v1181;
  __end1187 = v1182;
  unnamed1188 = v1183;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1191 = this1185;
  char* t1192 = __beg1186;
  char* t1193 = __end1187;
  long r1194 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1192, t1193);
  unsigned long cast1195 = (unsigned long)r1194;
  __dnew1189 = cast1195;
    unsigned long t1196 = __dnew1189;
    unsigned long c1197 = 15;
    _Bool c1198 = ((t1196 > c1197)) ? 1 : 0;
    if (c1198) {
      unsigned long c1199 = 0;
      char* r1200 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1191, &__dnew1189, c1199);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1191, r1200);
      unsigned long t1201 = __dnew1189;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1191, t1201);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1191);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1190, t1191);
    char* r1202 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1191);
    char* t1203 = __beg1186;
    char* t1204 = __end1187;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1202, t1203, t1204);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1205 = ((void*)0);
    __guard1190._M_guarded = c1205;
    unsigned long t1206 = __dnew1189;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1191, t1206);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1190);
  }
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1207) {
bb1208:
  char* __r1209;
  char* __retval1210;
  __r1209 = v1207;
  char* t1211 = __r1209;
  __retval1210 = t1211;
  char* t1212 = __retval1210;
  return t1212;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1213) {
bb1214:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1215;
  char* __retval1216;
  this1215 = v1213;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1217 = this1215;
  char* cast1218 = (char*)&(t1217->field2._M_local_buf);
  char* r1219 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1218);
  __retval1216 = r1219;
  char* t1220 = __retval1216;
  return t1220;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1221) {
bb1222:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1223;
  _Bool __retval1224;
  this1223 = v1221;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1225 = this1223;
    char* r1226 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1225);
    char* r1227 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1225);
    _Bool c1228 = ((r1226 == r1227)) ? 1 : 0;
    if (c1228) {
        unsigned long t1229 = t1225->_M_string_length;
        unsigned long c1230 = 15;
        _Bool c1231 = ((t1229 > c1230)) ? 1 : 0;
        if (c1231) {
          __builtin_unreachable();
        }
      _Bool c1232 = 1;
      __retval1224 = c1232;
      _Bool t1233 = __retval1224;
      return t1233;
    }
  _Bool c1234 = 0;
  __retval1224 = c1234;
  _Bool t1235 = __retval1224;
  return t1235;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1236, char* v1237, unsigned long v1238) {
bb1239:
  struct std____new_allocator_char_* this1240;
  char* __p1241;
  unsigned long __n1242;
  this1240 = v1236;
  __p1241 = v1237;
  __n1242 = v1238;
  struct std____new_allocator_char_* t1243 = this1240;
    unsigned long c1244 = 1;
    unsigned long c1245 = 16;
    _Bool c1246 = ((c1244 > c1245)) ? 1 : 0;
    if (c1246) {
      char* t1247 = __p1241;
      void* cast1248 = (void*)t1247;
      unsigned long t1249 = __n1242;
      unsigned long c1250 = 1;
      unsigned long b1251 = t1249 * c1250;
      unsigned long c1252 = 1;
      operator_delete_3(cast1248, b1251, c1252);
      return;
    }
  char* t1253 = __p1241;
  void* cast1254 = (void*)t1253;
  unsigned long t1255 = __n1242;
  unsigned long c1256 = 1;
  unsigned long b1257 = t1255 * c1256;
  operator_delete_2(cast1254, b1257);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1258, char* v1259, unsigned long v1260) {
bb1261:
  struct std__allocator_char_* this1262;
  char* __p1263;
  unsigned long __n1264;
  this1262 = v1258;
  __p1263 = v1259;
  __n1264 = v1260;
  struct std__allocator_char_* t1265 = this1262;
    _Bool r1266 = std____is_constant_evaluated();
    if (r1266) {
      char* t1267 = __p1263;
      void* cast1268 = (void*)t1267;
      operator_delete(cast1268);
      return;
    }
  struct std____new_allocator_char_* base1269 = (struct std____new_allocator_char_*)((char *)t1265 + 0);
  char* t1270 = __p1263;
  unsigned long t1271 = __n1264;
  std____new_allocator_char___deallocate(base1269, t1270, t1271);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1272, char* v1273, unsigned long v1274) {
bb1275:
  struct std__allocator_char_* __a1276;
  char* __p1277;
  unsigned long __n1278;
  __a1276 = v1272;
  __p1277 = v1273;
  __n1278 = v1274;
  struct std__allocator_char_* t1279 = __a1276;
  char* t1280 = __p1277;
  unsigned long t1281 = __n1278;
  std__allocator_char___deallocate(t1279, t1280, t1281);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1282, unsigned long v1283) {
bb1284:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1285;
  unsigned long __size1286;
  this1285 = v1282;
  __size1286 = v1283;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1287 = this1285;
  struct std__allocator_char_* r1288 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1287);
  char* r1289 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1287);
  unsigned long t1290 = __size1286;
  unsigned long c1291 = 1;
  unsigned long b1292 = t1290 + c1291;
  std__allocator_traits_std__allocator_char_____deallocate(r1288, r1289, b1292);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1293) {
bb1294:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1295;
  this1295 = v1293;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1296 = this1295;
    _Bool r1297 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1296);
    _Bool u1298 = !r1297;
    if (u1298) {
      unsigned long t1299 = t1296->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1296, t1299);
    }
  return;
}

