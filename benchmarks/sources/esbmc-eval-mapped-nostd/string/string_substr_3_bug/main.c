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
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

char _str[17] = "Test string test";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[7] = "string";
char _str_2[17] = "str2 != \"string\"";
char _str_3[114] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_substr_3_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[50] = "basic_string: construction from null is not valid";
char _str_5[24] = "basic_string::_M_create";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
char _str_6[21] = "basic_string::substr";
char _str_7[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_8[27] = "basic_string::basic_string";
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1, unsigned long p2, unsigned long p3);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);

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

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_move_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign() {
bb35:
  _Bool __retval36;
  _Bool t37 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval36 = t37;
  _Bool t38 = __retval36;
  return t38;
}

// function: _ZNSt15__new_allocatorIcEaSERKS0_
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* v39, struct std____new_allocator_char_* v40) {
bb41:
  struct std____new_allocator_char_* this42;
  struct std____new_allocator_char_* unnamed43;
  struct std____new_allocator_char_* __retval44;
  this42 = v39;
  unnamed43 = v40;
  struct std____new_allocator_char_* t45 = this42;
  __retval44 = t45;
  struct std____new_allocator_char_* t46 = __retval44;
  return t46;
}

// function: _ZNSaIcEaSERKS_
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* v47, struct std__allocator_char_* v48) {
bb49:
  struct std__allocator_char_* this50;
  struct std__allocator_char_* unnamed51;
  struct std__allocator_char_* __retval52;
  this50 = v47;
  unnamed51 = v48;
  struct std__allocator_char_* t53 = this50;
  struct std____new_allocator_char_* base54 = (struct std____new_allocator_char_*)((char *)t53 + 0);
  struct std__allocator_char_* t55 = unnamed51;
  struct std____new_allocator_char_* base56 = (struct std____new_allocator_char_*)((char *)t55 + 0);
  struct std____new_allocator_char_* r57 = std____new_allocator_char___operator_(base54, base56);
  __retval52 = t53;
  struct std__allocator_char_* t58 = __retval52;
  return t58;
}

// function: _ZSt15__alloc_on_moveISaIcEEvRT_S2_
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* v59, struct std__allocator_char_* v60) {
bb61:
  struct std__allocator_char_* __one62;
  struct std__allocator_char_* __two63;
  __one62 = v59;
  __two63 = v60;
    struct std__allocator_char_* t64 = __two63;
    struct std__allocator_char_* t65 = __one62;
    struct std__allocator_char_* r66 = std__allocator_char___operator_(t65, t64);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v67) {
bb68:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this69;
  unsigned long __retval70;
  unsigned long __sz71;
  this69 = v67;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t72 = this69;
  unsigned long t73 = t72->_M_string_length;
  __sz71 = t73;
    unsigned long t74 = __sz71;
    unsigned long r75 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t72);
    _Bool c76 = ((t74 > r75)) ? 1 : 0;
    if (c76) {
      __builtin_unreachable();
    }
  unsigned long t77 = __sz71;
  __retval70 = t77;
  unsigned long t78 = __retval70;
  return t78;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v79) {
bb80:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this81;
  unsigned long __retval82;
  this81 = v79;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t83 = this81;
  unsigned long r84 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t83);
  __retval82 = r84;
  unsigned long t85 = __retval82;
  return t85;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v86) {
bb87:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this88;
  char* __retval89;
  this88 = v86;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t90 = this88;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t90);
  char* r91 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t90);
  __retval89 = r91;
  char* t92 = __retval89;
  return t92;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v93) {
bb94:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this95;
  unsigned long __retval96;
  unsigned long __sz97;
  this95 = v93;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t98 = this95;
  _Bool r99 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t98);
  unsigned long ternary100;
  if (r99) {
    unsigned long c101 = 15;
    ternary100 = (unsigned long)c101;
  } else {
    unsigned long t102 = t98->field2._M_allocated_capacity;
    ternary100 = (unsigned long)t102;
  }
  __sz97 = ternary100;
    unsigned long t103 = __sz97;
    unsigned long c104 = 15;
    _Bool c105 = ((t103 < c104)) ? 1 : 0;
    _Bool ternary106;
    if (c105) {
      _Bool c107 = 1;
      ternary106 = (_Bool)c107;
    } else {
      unsigned long t108 = __sz97;
      unsigned long r109 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t98);
      _Bool c110 = ((t108 > r109)) ? 1 : 0;
      ternary106 = (_Bool)c110;
    }
    if (ternary106) {
      __builtin_unreachable();
    }
  unsigned long t111 = __sz97;
  __retval96 = t111;
  unsigned long t112 = __retval96;
  return t112;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v113, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v114) {
bb115:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this116;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str117;
  this116 = v113;
  __str117 = v114;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t118 = this116;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t119 = __str117;
    _Bool c120 = ((t118 != t119)) ? 1 : 0;
    if (c120) {
      unsigned long __rsize121;
      unsigned long __capacity122;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t123 = __str117;
      unsigned long r124 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t123);
      __rsize121 = r124;
      unsigned long r125 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t118);
      __capacity122 = r125;
        unsigned long t126 = __rsize121;
        unsigned long t127 = __capacity122;
        _Bool c128 = ((t126 > t127)) ? 1 : 0;
        if (c128) {
          unsigned long __new_capacity129;
          char* __tmp130;
          unsigned long t131 = __rsize121;
          __new_capacity129 = t131;
          unsigned long t132 = __capacity122;
          char* r133 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t118, &__new_capacity129, t132);
          __tmp130 = r133;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t118);
          char* t134 = __tmp130;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t118, t134);
          unsigned long t135 = __new_capacity129;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t118, t135);
        }
        unsigned long t136 = __rsize121;
        _Bool cast137 = (_Bool)t136;
        if (cast137) {
          char* r138 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t118);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t139 = __str117;
          char* r140 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t139);
          unsigned long t141 = __rsize121;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r138, r140, t141);
        }
      unsigned long t142 = __rsize121;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t118, t142);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5clearEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v143) {
bb144:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this145;
  this145 = v143;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t146 = this145;
  unsigned long c147 = 0;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t146, c147);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEOS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v148, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v149) {
bb150:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this151;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str152;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval153;
  _Bool __equal_allocs154;
  this151 = v148;
  __str152 = v149;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t155 = this151;
  _Bool c156 = 1;
  __equal_allocs154 = c156;
    _Bool r157 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t155);
    _Bool u158 = !r157;
    _Bool ternary159;
    if (u158) {
      _Bool r160 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
      ternary159 = (_Bool)r160;
    } else {
      _Bool c161 = 0;
      ternary159 = (_Bool)c161;
    }
    _Bool ternary162;
    if (ternary159) {
      _Bool t163 = __equal_allocs154;
      _Bool u164 = !t163;
      ternary162 = (_Bool)u164;
    } else {
      _Bool c165 = 0;
      ternary162 = (_Bool)c165;
    }
    if (ternary162) {
      unsigned long t166 = t155->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t155, t166);
      char* r167 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t155);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t155, r167);
      unsigned long c168 = 0;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t155, c168);
    }
  struct std__allocator_char_* r169 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t155);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t170 = __str152;
  struct std__allocator_char_* r171 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t170);
  void_std____alloc_on_move_std__allocator_char___(r169, r171);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t172 = __str152;
    _Bool r173 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t172);
    if (r173) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t174 = __str152;
        _Bool c175 = ((t174 != t155)) ? 1 : 0;
        if (c175) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t176 = __str152;
            unsigned long r177 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t176);
            _Bool cast178 = (_Bool)r177;
            if (cast178) {
              char* r179 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t155);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t180 = __str152;
              char* r181 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t180);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t182 = __str152;
              unsigned long r183 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t182);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r179, r181, r183);
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t184 = __str152;
          unsigned long r185 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t184);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t155, r185);
        }
    } else {
        _Bool r186 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
        _Bool ternary187;
        if (r186) {
          _Bool c188 = 1;
          ternary187 = (_Bool)c188;
        } else {
          _Bool t189 = __equal_allocs154;
          ternary187 = (_Bool)t189;
        }
        if (ternary187) {
          char* __data190;
          unsigned long __capacity191;
          char* c192 = ((void*)0);
          __data190 = c192;
            _Bool r193 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t155);
            _Bool u194 = !r193;
            if (u194) {
                _Bool t195 = __equal_allocs154;
                if (t195) {
                  char* r196 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t155);
                  __data190 = r196;
                  unsigned long t197 = t155->field2._M_allocated_capacity;
                  __capacity191 = t197;
                } else {
                  unsigned long t198 = t155->field2._M_allocated_capacity;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t155, t198);
                }
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t199 = __str152;
          char* r200 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t199);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t155, r200);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t201 = __str152;
          unsigned long r202 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t201);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t155, r202);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t203 = __str152;
          unsigned long t204 = t203->field2._M_allocated_capacity;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t155, t204);
            char* t205 = __data190;
            _Bool cast206 = (_Bool)t205;
            if (cast206) {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t207 = __str152;
              char* t208 = __data190;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t207, t208);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t209 = __str152;
              unsigned long t210 = __capacity191;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t209, t210);
            } else {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t211 = __str152;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t212 = __str152;
              char* r213 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t212);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t211, r213);
            }
        } else {
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t214 = __str152;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t155, t214);
        }
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t215 = __str152;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(t215);
  __retval153 = t155;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t216 = __retval153;
  return t216;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v217) {
bb218:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this219;
  this219 = v217;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t220 = this219;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t220);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t220->_M_dataplus);
  }
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v221) {
bb222:
  struct std__allocator_char_* this223;
  this223 = v221;
  struct std__allocator_char_* t224 = this223;
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v225, unsigned long v226, char* v227) {
bb228:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this229;
  unsigned long __pos230;
  char* __s231;
  unsigned long __retval232;
  this229 = v225;
  __pos230 = v226;
  __s231 = v227;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t233 = this229;
    unsigned long t234 = __pos230;
    unsigned long r235 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t233);
    _Bool c236 = ((t234 > r235)) ? 1 : 0;
    if (c236) {
      char* cast237 = (char*)&(_str_7);
      char* t238 = __s231;
      unsigned long t239 = __pos230;
      unsigned long r240 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t233);
      std____throw_out_of_range_fmt(cast237, t238, t239, r240);
    }
  unsigned long t241 = __pos230;
  __retval232 = t241;
  unsigned long t242 = __retval232;
  return t242;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS4_mm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v243, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v244, unsigned long v245, unsigned long v246) {
bb247:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this248;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str249;
  unsigned long __pos250;
  unsigned long __n251;
  struct std__allocator_char_ ref_tmp0252;
  char* __start253;
  struct std__forward_iterator_tag agg_tmp0254;
  this248 = v243;
  __str249 = v244;
  __pos250 = v245;
  __n251 = v246;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t255 = this248;
  char* r256 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t255);
  std__allocator_char___allocator_2(&ref_tmp0252);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t255->_M_dataplus, r256, &ref_tmp0252);
  {
    std__allocator_char____allocator(&ref_tmp0252);
  }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t257 = __str249;
    char* r258 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t257);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t259 = __str249;
    unsigned long t260 = __pos250;
    char* cast261 = (char*)&(_str_8);
    unsigned long r262 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t259, t260, cast261);
    char* ptr263 = &(r258)[r262];
    __start253 = ptr263;
    char* t264 = __start253;
    char* t265 = __start253;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t266 = __str249;
    unsigned long t267 = __pos250;
    unsigned long t268 = __n251;
    unsigned long r269 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t266, t267, t268);
    char* ptr270 = &(t265)[r269];
    struct std__forward_iterator_tag t271 = agg_tmp0254;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t255, t264, ptr270, t271);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6substrEmm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v272, unsigned long v273, unsigned long v274) {
bb275:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this276;
  unsigned long __pos277;
  unsigned long __n278;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval279;
  this276 = v272;
  __pos277 = v273;
  __n278 = v274;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t280 = this276;
  unsigned long t281 = __pos277;
  char* cast282 = (char*)&(_str_6);
  unsigned long r283 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t280, t281, cast282);
  unsigned long t284 = __n278;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&__retval279, t280, r283, t284);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t285 = __retval279;
  return t285;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v286, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v287) {
bb288:
  struct std__basic_ostream_char__std__char_traits_char__* __os289;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str290;
  struct std__basic_ostream_char__std__char_traits_char__* __retval291;
  __os289 = v286;
  __str290 = v287;
  struct std__basic_ostream_char__std__char_traits_char__* t292 = __os289;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t293 = __str290;
  char* r294 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t293);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t295 = __str290;
  unsigned long r296 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t295);
  long cast297 = (long)r296;
  struct std__basic_ostream_char__std__char_traits_char__* r298 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t292, r294, cast297);
  __retval291 = r298;
  struct std__basic_ostream_char__std__char_traits_char__* t299 = __retval291;
  return t299;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v300, char* v301) {
bb302:
  char* __c1303;
  char* __c2304;
  _Bool __retval305;
  __c1303 = v300;
  __c2304 = v301;
  char* t306 = __c1303;
  char t307 = *t306;
  unsigned char cast308 = (unsigned char)t307;
  int cast309 = (int)cast308;
  char* t310 = __c2304;
  char t311 = *t310;
  unsigned char cast312 = (unsigned char)t311;
  int cast313 = (int)cast312;
  _Bool c314 = ((cast309 < cast313)) ? 1 : 0;
  __retval305 = c314;
  _Bool t315 = __retval305;
  return t315;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v316, char* v317, unsigned long v318) {
bb319:
  char* __s1320;
  char* __s2321;
  unsigned long __n322;
  int __retval323;
  __s1320 = v316;
  __s2321 = v317;
  __n322 = v318;
    unsigned long t324 = __n322;
    unsigned long c325 = 0;
    _Bool c326 = ((t324 == c325)) ? 1 : 0;
    if (c326) {
      int c327 = 0;
      __retval323 = c327;
      int t328 = __retval323;
      return t328;
    }
    _Bool r329 = std____is_constant_evaluated();
    if (r329) {
        unsigned long __i330;
        unsigned long c331 = 0;
        __i330 = c331;
        while (1) {
          unsigned long t333 = __i330;
          unsigned long t334 = __n322;
          _Bool c335 = ((t333 < t334)) ? 1 : 0;
          if (!c335) break;
            unsigned long t336 = __i330;
            char* t337 = __s1320;
            char* ptr338 = &(t337)[t336];
            unsigned long t339 = __i330;
            char* t340 = __s2321;
            char* ptr341 = &(t340)[t339];
            _Bool r342 = std__char_traits_char___lt(ptr338, ptr341);
            if (r342) {
              int c343 = -1;
              __retval323 = c343;
              int t344 = __retval323;
              int ret_val345 = t344;
              return ret_val345;
            } else {
                unsigned long t346 = __i330;
                char* t347 = __s2321;
                char* ptr348 = &(t347)[t346];
                unsigned long t349 = __i330;
                char* t350 = __s1320;
                char* ptr351 = &(t350)[t349];
                _Bool r352 = std__char_traits_char___lt(ptr348, ptr351);
                if (r352) {
                  int c353 = 1;
                  __retval323 = c353;
                  int t354 = __retval323;
                  int ret_val355 = t354;
                  return ret_val355;
                }
            }
        for_step332: ;
          unsigned long t356 = __i330;
          unsigned long u357 = t356 + 1;
          __i330 = u357;
        }
      int c358 = 0;
      __retval323 = c358;
      int t359 = __retval323;
      return t359;
    }
  char* t360 = __s1320;
  void* cast361 = (void*)t360;
  char* t362 = __s2321;
  void* cast363 = (void*)t362;
  unsigned long t364 = __n322;
  int r365 = memcmp(cast361, cast363, t364);
  __retval323 = r365;
  int t366 = __retval323;
  return t366;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v367) {
bb368:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this369;
  char* __retval370;
  this369 = v367;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t371 = this369;
  char* r372 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t371);
  __retval370 = r372;
  char* t373 = __retval370;
  return t373;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v374, char* v375) {
bb376:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs377;
  char* __rhs378;
  _Bool __retval379;
  __lhs377 = v374;
  __rhs378 = v375;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t380 = __lhs377;
  unsigned long r381 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t380);
  char* t382 = __rhs378;
  unsigned long r383 = std__char_traits_char___length(t382);
  _Bool c384 = ((r381 == r383)) ? 1 : 0;
  _Bool ternary385;
  if (c384) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t386 = __lhs377;
    char* r387 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t386);
    char* t388 = __rhs378;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t389 = __lhs377;
    unsigned long r390 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t389);
    int r391 = std__char_traits_char___compare(r387, t388, r390);
    _Bool cast392 = (_Bool)r391;
    _Bool u393 = !cast392;
    ternary385 = (_Bool)u393;
  } else {
    _Bool c394 = 0;
    ternary385 = (_Bool)c394;
  }
  __retval379 = ternary385;
  _Bool t395 = __retval379;
  return t395;
}

// function: main
int main() {
bb396:
  int __retval397;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str1398;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2399;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str3400;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp0401;
  struct std__allocator_char_ ref_tmp1402;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup403;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp2404;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup405;
  int c406 = 0;
  __retval397 = c406;
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str1398);
    _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str2399);
      _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str3400);
        char* cast407 = (char*)&(_str);
        std__allocator_char___allocator_2(&ref_tmp1402);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&ref_tmp0401, cast407, &ref_tmp1402);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r408 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&str1398, &ref_tmp0401);
            tmp_exprcleanup403 = r408;
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0401);
          }
        {
          std__allocator_char____allocator(&ref_tmp1402);
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t409 = tmp_exprcleanup403;
        unsigned long c410 = 5;
        unsigned long c411 = 6;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r412 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&str1398, c410, c411);
        ref_tmp2404 = r412;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r413 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&str2399, &ref_tmp2404);
          tmp_exprcleanup405 = r413;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp2404);
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t414 = tmp_exprcleanup405;
        struct std__basic_ostream_char__std__char_traits_char__* r415 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str2399);
        char* cast416 = (char*)&(_str_1);
        _Bool r417 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str2399, cast416);
        _Bool u418 = !r417;
        if (u418) {
        } else {
          char* cast419 = (char*)&(_str_2);
          char* c420 = _str_3;
          unsigned int c421 = 22;
          char* cast422 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast419, c420, c421, cast422);
        }
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str3400);
      }
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str2399);
    }
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str1398);
  }
  int t423 = __retval397;
  return t423;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v424) {
bb425:
  char* __r426;
  char* __retval427;
  __r426 = v424;
  char* t428 = __r426;
  __retval427 = t428;
  char* t429 = __retval427;
  return t429;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v430) {
bb431:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this432;
  char* __retval433;
  this432 = v430;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t434 = this432;
  char* cast435 = (char*)&(t434->field2._M_local_buf);
  char* r436 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast435);
  __retval433 = r436;
  char* t437 = __retval433;
  return t437;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v438, char* v439, struct std__allocator_char_* v440) {
bb441:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this442;
  char* __dat443;
  struct std__allocator_char_* __a444;
  this442 = v438;
  __dat443 = v439;
  __a444 = v440;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t445 = this442;
  struct std__allocator_char_* base446 = (struct std__allocator_char_*)((char *)t445 + 0);
  struct std__allocator_char_* t447 = __a444;
  std__allocator_char___allocator(base446, t447);
    char* t448 = __dat443;
    t445->_M_p = t448;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb449:
  _Bool __retval450;
    _Bool c451 = 0;
    __retval450 = c451;
    _Bool t452 = __retval450;
    return t452;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v453) {
bb454:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this455;
  this455 = v453;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t456 = this455;
    _Bool r457 = std__is_constant_evaluated();
    if (r457) {
        unsigned long __i458;
        unsigned long c459 = 0;
        __i458 = c459;
        while (1) {
          unsigned long t461 = __i458;
          unsigned long c462 = 15;
          _Bool c463 = ((t461 <= c462)) ? 1 : 0;
          if (!c463) break;
          char c464 = 0;
          unsigned long t465 = __i458;
          t456->field2._M_local_buf[t465] = c464;
        for_step460: ;
          unsigned long t466 = __i458;
          unsigned long u467 = t466 + 1;
          __i458 = u467;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v468, unsigned long v469) {
bb470:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this471;
  unsigned long __length472;
  this471 = v468;
  __length472 = v469;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t473 = this471;
  unsigned long t474 = __length472;
  t473->_M_string_length = t474;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb475:
  _Bool __retval476;
    _Bool c477 = 0;
    __retval476 = c477;
    _Bool t478 = __retval476;
    return t478;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v479, char* v480) {
bb481:
  char* __location482;
  char* __args483;
  char* __retval484;
  void* __loc485;
  __location482 = v479;
  __args483 = v480;
  char* t486 = __location482;
  void* cast487 = (void*)t486;
  __loc485 = cast487;
    void* t488 = __loc485;
    char* cast489 = (char*)t488;
    char* t490 = __args483;
    char t491 = *t490;
    *cast489 = t491;
    __retval484 = cast489;
    char* t492 = __retval484;
    return t492;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v493, char* v494) {
bb495:
  char* __c1496;
  char* __c2497;
  __c1496 = v493;
  __c2497 = v494;
    _Bool r498 = std____is_constant_evaluated();
    if (r498) {
      char* t499 = __c1496;
      char* t500 = __c2497;
      char* r501 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t499, t500);
    } else {
      char* t502 = __c2497;
      char t503 = *t502;
      char* t504 = __c1496;
      *t504 = t503;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v505) {
bb506:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this507;
  char* __retval508;
  this507 = v505;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t509 = this507;
  char* t510 = t509->_M_dataplus._M_p;
  __retval508 = t510;
  char* t511 = __retval508;
  return t511;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v512, unsigned long v513) {
bb514:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this515;
  unsigned long __n516;
  char ref_tmp0517;
  this515 = v512;
  __n516 = v513;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t518 = this515;
  unsigned long t519 = __n516;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t518, t519);
  unsigned long t520 = __n516;
  char* r521 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t518);
  char* ptr522 = &(r521)[t520];
  char c523 = 0;
  ref_tmp0517 = c523;
  std__char_traits_char___assign(ptr522, &ref_tmp0517);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v524) {
bb525:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this526;
  this526 = v524;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t527 = this526;
  {
    struct std__allocator_char_* base528 = (struct std__allocator_char_*)((char *)t527 + 0);
    std__allocator_char____allocator(base528);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v529, struct std____new_allocator_char_* v530) {
bb531:
  struct std____new_allocator_char_* this532;
  struct std____new_allocator_char_* unnamed533;
  this532 = v529;
  unnamed533 = v530;
  struct std____new_allocator_char_* t534 = this532;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v535, struct std__allocator_char_* v536) {
bb537:
  struct std__allocator_char_* this538;
  struct std__allocator_char_* __a539;
  this538 = v535;
  __a539 = v536;
  struct std__allocator_char_* t540 = this538;
  struct std____new_allocator_char_* base541 = (struct std____new_allocator_char_*)((char *)t540 + 0);
  struct std__allocator_char_* t542 = __a539;
  struct std____new_allocator_char_* base543 = (struct std____new_allocator_char_*)((char *)t542 + 0);
  std____new_allocator_char_____new_allocator(base541, base543);
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v544) {
bb545:
  struct std____new_allocator_char_* this546;
  this546 = v544;
  struct std____new_allocator_char_* t547 = this546;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v548, char* v549, struct std__allocator_char_* v550) {
bb551:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this552;
  char* __dat553;
  struct std__allocator_char_* __a554;
  this552 = v548;
  __dat553 = v549;
  __a554 = v550;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t555 = this552;
  struct std__allocator_char_* base556 = (struct std__allocator_char_*)((char *)t555 + 0);
  struct std__allocator_char_* t557 = __a554;
  std__allocator_char___allocator(base556, t557);
    char* t558 = __dat553;
    t555->_M_p = t558;
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v559, char* v560) {
bb561:
  char* __c1562;
  char* __c2563;
  _Bool __retval564;
  __c1562 = v559;
  __c2563 = v560;
  char* t565 = __c1562;
  char t566 = *t565;
  int cast567 = (int)t566;
  char* t568 = __c2563;
  char t569 = *t568;
  int cast570 = (int)t569;
  _Bool c571 = ((cast567 == cast570)) ? 1 : 0;
  __retval564 = c571;
  _Bool t572 = __retval564;
  return t572;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v573) {
bb574:
  char* __p575;
  unsigned long __retval576;
  unsigned long __i577;
  __p575 = v573;
  unsigned long c578 = 0;
  __i577 = c578;
    char ref_tmp0579;
    while (1) {
      unsigned long t580 = __i577;
      char* t581 = __p575;
      char* ptr582 = &(t581)[t580];
      char c583 = 0;
      ref_tmp0579 = c583;
      _Bool r584 = __gnu_cxx__char_traits_char___eq(ptr582, &ref_tmp0579);
      _Bool u585 = !r584;
      if (!u585) break;
      unsigned long t586 = __i577;
      unsigned long u587 = t586 + 1;
      __i577 = u587;
    }
  unsigned long t588 = __i577;
  __retval576 = t588;
  unsigned long t589 = __retval576;
  return t589;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v590) {
bb591:
  char* __s592;
  unsigned long __retval593;
  __s592 = v590;
    _Bool r594 = std____is_constant_evaluated();
    if (r594) {
      char* t595 = __s592;
      unsigned long r596 = __gnu_cxx__char_traits_char___length(t595);
      __retval593 = r596;
      unsigned long t597 = __retval593;
      return t597;
    }
  char* t598 = __s592;
  unsigned long r599 = strlen(t598);
  __retval593 = r599;
  unsigned long t600 = __retval593;
  return t600;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v601, char* v602, struct std__random_access_iterator_tag v603) {
bb604:
  char* __first605;
  char* __last606;
  struct std__random_access_iterator_tag unnamed607;
  long __retval608;
  __first605 = v601;
  __last606 = v602;
  unnamed607 = v603;
  char* t609 = __last606;
  char* t610 = __first605;
  long diff611 = t609 - t610;
  __retval608 = diff611;
  long t612 = __retval608;
  return t612;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v613) {
bb614:
  char** unnamed615;
  struct std__random_access_iterator_tag __retval616;
  unnamed615 = v613;
  struct std__random_access_iterator_tag t617 = __retval616;
  return t617;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v618, char* v619) {
bb620:
  char* __first621;
  char* __last622;
  long __retval623;
  struct std__random_access_iterator_tag agg_tmp0624;
  __first621 = v618;
  __last622 = v619;
  char* t625 = __first621;
  char* t626 = __last622;
  struct std__random_access_iterator_tag r627 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first621);
  agg_tmp0624 = r627;
  struct std__random_access_iterator_tag t628 = agg_tmp0624;
  long r629 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t625, t626, t628);
  __retval623 = r629;
  long t630 = __retval623;
  return t630;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v631, char* v632) {
bb633:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this634;
  char* __p635;
  this634 = v631;
  __p635 = v632;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t636 = this634;
  char* t637 = __p635;
  t636->_M_dataplus._M_p = t637;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v638) {
bb639:
  struct std__allocator_char_* __a640;
  unsigned long __retval641;
  __a640 = v638;
  unsigned long c642 = -1;
  unsigned long c643 = 1;
  unsigned long b644 = c642 / c643;
  __retval641 = b644;
  unsigned long t645 = __retval641;
  return t645;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v646) {
bb647:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this648;
  struct std__allocator_char_* __retval649;
  this648 = v646;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t650 = this648;
  struct std__allocator_char_* base651 = (struct std__allocator_char_*)((char *)&(t650->_M_dataplus) + 0);
  __retval649 = base651;
  struct std__allocator_char_* t652 = __retval649;
  return t652;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v653, unsigned long* v654) {
bb655:
  unsigned long* __a656;
  unsigned long* __b657;
  unsigned long* __retval658;
  __a656 = v653;
  __b657 = v654;
    unsigned long* t659 = __b657;
    unsigned long t660 = *t659;
    unsigned long* t661 = __a656;
    unsigned long t662 = *t661;
    _Bool c663 = ((t660 < t662)) ? 1 : 0;
    if (c663) {
      unsigned long* t664 = __b657;
      __retval658 = t664;
      unsigned long* t665 = __retval658;
      return t665;
    }
  unsigned long* t666 = __a656;
  __retval658 = t666;
  unsigned long* t667 = __retval658;
  return t667;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v668) {
bb669:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this670;
  unsigned long __retval671;
  unsigned long __diffmax672;
  unsigned long __allocmax673;
  this670 = v668;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t674 = this670;
  unsigned long c675 = 9223372036854775807;
  __diffmax672 = c675;
  struct std__allocator_char_* r676 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t674);
  unsigned long r677 = std__allocator_traits_std__allocator_char_____max_size(r676);
  __allocmax673 = r677;
  unsigned long* r678 = unsigned_long_const__std__min_unsigned_long_(&__diffmax672, &__allocmax673);
  unsigned long t679 = *r678;
  unsigned long c680 = 1;
  unsigned long b681 = t679 - c680;
  __retval671 = b681;
  unsigned long t682 = __retval671;
  return t682;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v683) {
bb684:
  struct std____new_allocator_char_* this685;
  unsigned long __retval686;
  this685 = v683;
  struct std____new_allocator_char_* t687 = this685;
  unsigned long c688 = 9223372036854775807;
  unsigned long c689 = 1;
  unsigned long b690 = c688 / c689;
  __retval686 = b690;
  unsigned long t691 = __retval686;
  return t691;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v692, unsigned long v693, void* v694) {
bb695:
  struct std____new_allocator_char_* this696;
  unsigned long __n697;
  void* unnamed698;
  char* __retval699;
  this696 = v692;
  __n697 = v693;
  unnamed698 = v694;
  struct std____new_allocator_char_* t700 = this696;
    unsigned long t701 = __n697;
    unsigned long r702 = std____new_allocator_char____M_max_size___const(t700);
    _Bool c703 = ((t701 > r702)) ? 1 : 0;
    if (c703) {
        unsigned long t704 = __n697;
        unsigned long c705 = -1;
        unsigned long c706 = 1;
        unsigned long b707 = c705 / c706;
        _Bool c708 = ((t704 > b707)) ? 1 : 0;
        if (c708) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c709 = 1;
    unsigned long c710 = 16;
    _Bool c711 = ((c709 > c710)) ? 1 : 0;
    if (c711) {
      unsigned long __al712;
      unsigned long c713 = 1;
      __al712 = c713;
      unsigned long t714 = __n697;
      unsigned long c715 = 1;
      unsigned long b716 = t714 * c715;
      unsigned long t717 = __al712;
      void* r718 = operator_new_2(b716, t717);
      char* cast719 = (char*)r718;
      __retval699 = cast719;
      char* t720 = __retval699;
      return t720;
    }
  unsigned long t721 = __n697;
  unsigned long c722 = 1;
  unsigned long b723 = t721 * c722;
  void* r724 = operator_new(b723);
  char* cast725 = (char*)r724;
  __retval699 = cast725;
  char* t726 = __retval699;
  return t726;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v727, unsigned long v728) {
bb729:
  struct std__allocator_char_* this730;
  unsigned long __n731;
  char* __retval732;
  this730 = v727;
  __n731 = v728;
  struct std__allocator_char_* t733 = this730;
    _Bool r734 = std____is_constant_evaluated();
    if (r734) {
        unsigned long t735 = __n731;
        unsigned long c736 = 1;
        unsigned long ovr737;
        _Bool ovf738 = __builtin_mul_overflow(t735, c736, &ovr737);
        __n731 = ovr737;
        if (ovf738) {
          std____throw_bad_array_new_length();
        }
      unsigned long t739 = __n731;
      void* r740 = operator_new(t739);
      char* cast741 = (char*)r740;
      __retval732 = cast741;
      char* t742 = __retval732;
      return t742;
    }
  struct std____new_allocator_char_* base743 = (struct std____new_allocator_char_*)((char *)t733 + 0);
  unsigned long t744 = __n731;
  void* c745 = ((void*)0);
  char* r746 = std____new_allocator_char___allocate(base743, t744, c745);
  __retval732 = r746;
  char* t747 = __retval732;
  return t747;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v748, unsigned long v749) {
bb750:
  struct std__allocator_char_* __a751;
  unsigned long __n752;
  char* __retval753;
  __a751 = v748;
  __n752 = v749;
  struct std__allocator_char_* t754 = __a751;
  unsigned long t755 = __n752;
  char* r756 = std__allocator_char___allocate(t754, t755);
  __retval753 = r756;
  char* t757 = __retval753;
  return t757;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v758, unsigned long v759) {
bb760:
  struct std__allocator_char_* __a761;
  unsigned long __n762;
  char* __retval763;
  char* __p764;
  __a761 = v758;
  __n762 = v759;
  struct std__allocator_char_* t765 = __a761;
  unsigned long t766 = __n762;
  char* r767 = std__allocator_traits_std__allocator_char_____allocate(t765, t766);
  __p764 = r767;
  char* t768 = __p764;
  __retval763 = t768;
  char* t769 = __retval763;
  return t769;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v770) {
bb771:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this772;
  struct std__allocator_char_* __retval773;
  this772 = v770;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t774 = this772;
  struct std__allocator_char_* base775 = (struct std__allocator_char_*)((char *)&(t774->_M_dataplus) + 0);
  __retval773 = base775;
  struct std__allocator_char_* t776 = __retval773;
  return t776;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v777, unsigned long* v778, unsigned long v779) {
bb780:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this781;
  unsigned long* __capacity782;
  unsigned long __old_capacity783;
  char* __retval784;
  this781 = v777;
  __capacity782 = v778;
  __old_capacity783 = v779;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t785 = this781;
    unsigned long* t786 = __capacity782;
    unsigned long t787 = *t786;
    unsigned long r788 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t785);
    _Bool c789 = ((t787 > r788)) ? 1 : 0;
    if (c789) {
      char* cast790 = (char*)&(_str_5);
      std____throw_length_error(cast790);
    }
    unsigned long* t791 = __capacity782;
    unsigned long t792 = *t791;
    unsigned long t793 = __old_capacity783;
    _Bool c794 = ((t792 > t793)) ? 1 : 0;
    _Bool ternary795;
    if (c794) {
      unsigned long* t796 = __capacity782;
      unsigned long t797 = *t796;
      unsigned long c798 = 2;
      unsigned long t799 = __old_capacity783;
      unsigned long b800 = c798 * t799;
      _Bool c801 = ((t797 < b800)) ? 1 : 0;
      ternary795 = (_Bool)c801;
    } else {
      _Bool c802 = 0;
      ternary795 = (_Bool)c802;
    }
    if (ternary795) {
      unsigned long c803 = 2;
      unsigned long t804 = __old_capacity783;
      unsigned long b805 = c803 * t804;
      unsigned long* t806 = __capacity782;
      *t806 = b805;
        unsigned long* t807 = __capacity782;
        unsigned long t808 = *t807;
        unsigned long r809 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t785);
        _Bool c810 = ((t808 > r809)) ? 1 : 0;
        if (c810) {
          unsigned long r811 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t785);
          unsigned long* t812 = __capacity782;
          *t812 = r811;
        }
    }
  struct std__allocator_char_* r813 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t785);
  unsigned long* t814 = __capacity782;
  unsigned long t815 = *t814;
  unsigned long c816 = 1;
  unsigned long b817 = t815 + c816;
  char* r818 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r813, b817);
  __retval784 = r818;
  char* t819 = __retval784;
  return t819;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v820, unsigned long v821) {
bb822:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this823;
  unsigned long __capacity824;
  this823 = v820;
  __capacity824 = v821;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t825 = this823;
  unsigned long t826 = __capacity824;
  t825->field2._M_allocated_capacity = t826;
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v827, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v828) {
bb829:
  struct _Guard* this830;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s831;
  this830 = v827;
  __s831 = v828;
  struct _Guard* t832 = this830;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t833 = __s831;
  t832->_M_guarded = t833;
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v834, char* v835, unsigned long v836) {
bb837:
  char* __s1838;
  char* __s2839;
  unsigned long __n840;
  char* __retval841;
  __s1838 = v834;
  __s2839 = v835;
  __n840 = v836;
    unsigned long t842 = __n840;
    unsigned long c843 = 0;
    _Bool c844 = ((t842 == c843)) ? 1 : 0;
    if (c844) {
      char* t845 = __s1838;
      __retval841 = t845;
      char* t846 = __retval841;
      return t846;
    }
    _Bool r847 = std____is_constant_evaluated();
    if (r847) {
        unsigned long __i848;
        unsigned long c849 = 0;
        __i848 = c849;
        while (1) {
          unsigned long t851 = __i848;
          unsigned long t852 = __n840;
          _Bool c853 = ((t851 < t852)) ? 1 : 0;
          if (!c853) break;
          char* t854 = __s1838;
          unsigned long t855 = __i848;
          char* ptr856 = &(t854)[t855];
          unsigned long t857 = __i848;
          char* t858 = __s2839;
          char* ptr859 = &(t858)[t857];
          char* r860 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr856, ptr859);
        for_step850: ;
          unsigned long t861 = __i848;
          unsigned long u862 = t861 + 1;
          __i848 = u862;
        }
      char* t863 = __s1838;
      __retval841 = t863;
      char* t864 = __retval841;
      return t864;
    }
  char* t865 = __s1838;
  void* cast866 = (void*)t865;
  char* t867 = __s2839;
  void* cast868 = (void*)t867;
  unsigned long t869 = __n840;
  unsigned long c870 = 1;
  unsigned long b871 = t869 * c870;
  void* r872 = memcpy(cast866, cast868, b871);
  char* t873 = __s1838;
  __retval841 = t873;
  char* t874 = __retval841;
  return t874;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v875, char* v876, unsigned long v877) {
bb878:
  char* __s1879;
  char* __s2880;
  unsigned long __n881;
  char* __retval882;
  __s1879 = v875;
  __s2880 = v876;
  __n881 = v877;
    unsigned long t883 = __n881;
    unsigned long c884 = 0;
    _Bool c885 = ((t883 == c884)) ? 1 : 0;
    if (c885) {
      char* t886 = __s1879;
      __retval882 = t886;
      char* t887 = __retval882;
      return t887;
    }
    _Bool r888 = std____is_constant_evaluated();
    if (r888) {
      char* t889 = __s1879;
      char* t890 = __s2880;
      unsigned long t891 = __n881;
      char* r892 = __gnu_cxx__char_traits_char___copy(t889, t890, t891);
      __retval882 = r892;
      char* t893 = __retval882;
      return t893;
    }
  char* t894 = __s1879;
  void* cast895 = (void*)t894;
  char* t896 = __s2880;
  void* cast897 = (void*)t896;
  unsigned long t898 = __n881;
  void* r899 = memcpy(cast895, cast897, t898);
  char* cast900 = (char*)r899;
  __retval882 = cast900;
  char* t901 = __retval882;
  return t901;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v902, char* v903, unsigned long v904) {
bb905:
  char* __d906;
  char* __s907;
  unsigned long __n908;
  __d906 = v902;
  __s907 = v903;
  __n908 = v904;
    unsigned long t909 = __n908;
    unsigned long c910 = 1;
    _Bool c911 = ((t909 == c910)) ? 1 : 0;
    if (c911) {
      char* t912 = __d906;
      char* t913 = __s907;
      std__char_traits_char___assign(t912, t913);
    } else {
      char* t914 = __d906;
      char* t915 = __s907;
      unsigned long t916 = __n908;
      char* r917 = std__char_traits_char___copy(t914, t915, t916);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v918) {
bb919:
  char* __it920;
  char* __retval921;
  __it920 = v918;
  char* t922 = __it920;
  __retval921 = t922;
  char* t923 = __retval921;
  return t923;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v924, char* v925, char* v926) {
bb927:
  char* __p928;
  char* __k1929;
  char* __k2930;
  __p928 = v924;
  __k1929 = v925;
  __k2930 = v926;
    char* t931 = __p928;
    char* t932 = __k1929;
    char* r933 = char_const__std____niter_base_char_const__(t932);
    char* t934 = __k2930;
    char* t935 = __k1929;
    long diff936 = t934 - t935;
    unsigned long cast937 = (unsigned long)diff936;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t931, r933, cast937);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v938) {
bb939:
  struct _Guard* this940;
  this940 = v938;
  struct _Guard* t941 = this940;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t942 = t941->_M_guarded;
    _Bool cast943 = (_Bool)t942;
    if (cast943) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t944 = t941->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t944);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v945, char* v946, char* v947, struct std__forward_iterator_tag v948) {
bb949:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this950;
  char* __beg951;
  char* __end952;
  struct std__forward_iterator_tag unnamed953;
  unsigned long __dnew954;
  struct _Guard __guard955;
  this950 = v945;
  __beg951 = v946;
  __end952 = v947;
  unnamed953 = v948;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t956 = this950;
  char* t957 = __beg951;
  char* t958 = __end952;
  long r959 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t957, t958);
  unsigned long cast960 = (unsigned long)r959;
  __dnew954 = cast960;
    unsigned long t961 = __dnew954;
    unsigned long c962 = 15;
    _Bool c963 = ((t961 > c962)) ? 1 : 0;
    if (c963) {
      unsigned long c964 = 0;
      char* r965 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t956, &__dnew954, c964);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t956, r965);
      unsigned long t966 = __dnew954;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t956, t966);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t956);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard955, t956);
    char* r967 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t956);
    char* t968 = __beg951;
    char* t969 = __end952;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r967, t968, t969);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c970 = ((void*)0);
    __guard955._M_guarded = c970;
    unsigned long t971 = __dnew954;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t956, t971);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard955);
  }
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v972) {
bb973:
  char* __r974;
  char* __retval975;
  __r974 = v972;
  char* t976 = __r974;
  __retval975 = t976;
  char* t977 = __retval975;
  return t977;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v978) {
bb979:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this980;
  char* __retval981;
  this980 = v978;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t982 = this980;
  char* cast983 = (char*)&(t982->field2._M_local_buf);
  char* r984 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast983);
  __retval981 = r984;
  char* t985 = __retval981;
  return t985;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v986) {
bb987:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this988;
  _Bool __retval989;
  this988 = v986;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t990 = this988;
    char* r991 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t990);
    char* r992 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t990);
    _Bool c993 = ((r991 == r992)) ? 1 : 0;
    if (c993) {
        unsigned long t994 = t990->_M_string_length;
        unsigned long c995 = 15;
        _Bool c996 = ((t994 > c995)) ? 1 : 0;
        if (c996) {
          __builtin_unreachable();
        }
      _Bool c997 = 1;
      __retval989 = c997;
      _Bool t998 = __retval989;
      return t998;
    }
  _Bool c999 = 0;
  __retval989 = c999;
  _Bool t1000 = __retval989;
  return t1000;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1001, char* v1002, unsigned long v1003) {
bb1004:
  struct std____new_allocator_char_* this1005;
  char* __p1006;
  unsigned long __n1007;
  this1005 = v1001;
  __p1006 = v1002;
  __n1007 = v1003;
  struct std____new_allocator_char_* t1008 = this1005;
    unsigned long c1009 = 1;
    unsigned long c1010 = 16;
    _Bool c1011 = ((c1009 > c1010)) ? 1 : 0;
    if (c1011) {
      char* t1012 = __p1006;
      void* cast1013 = (void*)t1012;
      unsigned long t1014 = __n1007;
      unsigned long c1015 = 1;
      unsigned long b1016 = t1014 * c1015;
      unsigned long c1017 = 1;
      operator_delete_3(cast1013, b1016, c1017);
      return;
    }
  char* t1018 = __p1006;
  void* cast1019 = (void*)t1018;
  unsigned long t1020 = __n1007;
  unsigned long c1021 = 1;
  unsigned long b1022 = t1020 * c1021;
  operator_delete_2(cast1019, b1022);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1023, char* v1024, unsigned long v1025) {
bb1026:
  struct std__allocator_char_* this1027;
  char* __p1028;
  unsigned long __n1029;
  this1027 = v1023;
  __p1028 = v1024;
  __n1029 = v1025;
  struct std__allocator_char_* t1030 = this1027;
    _Bool r1031 = std____is_constant_evaluated();
    if (r1031) {
      char* t1032 = __p1028;
      void* cast1033 = (void*)t1032;
      operator_delete(cast1033);
      return;
    }
  struct std____new_allocator_char_* base1034 = (struct std____new_allocator_char_*)((char *)t1030 + 0);
  char* t1035 = __p1028;
  unsigned long t1036 = __n1029;
  std____new_allocator_char___deallocate(base1034, t1035, t1036);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1037, char* v1038, unsigned long v1039) {
bb1040:
  struct std__allocator_char_* __a1041;
  char* __p1042;
  unsigned long __n1043;
  __a1041 = v1037;
  __p1042 = v1038;
  __n1043 = v1039;
  struct std__allocator_char_* t1044 = __a1041;
  char* t1045 = __p1042;
  unsigned long t1046 = __n1043;
  std__allocator_char___deallocate(t1044, t1045, t1046);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1047, unsigned long v1048) {
bb1049:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1050;
  unsigned long __size1051;
  this1050 = v1047;
  __size1051 = v1048;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1052 = this1050;
  struct std__allocator_char_* r1053 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1052);
  char* r1054 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1052);
  unsigned long t1055 = __size1051;
  unsigned long c1056 = 1;
  unsigned long b1057 = t1055 + c1056;
  std__allocator_traits_std__allocator_char_____deallocate(r1053, r1054, b1057);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1058) {
bb1059:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1060;
  this1060 = v1058;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1061 = this1060;
    _Bool r1062 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1061);
    _Bool u1063 = !r1062;
    if (u1063) {
      unsigned long t1064 = t1061->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1061, t1064);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1065, unsigned long v1066, unsigned long v1067) {
bb1068:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1069;
  unsigned long __pos1070;
  unsigned long __off1071;
  unsigned long __retval1072;
  _Bool __testoff1073;
  this1069 = v1065;
  __pos1070 = v1066;
  __off1071 = v1067;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1074 = this1069;
  unsigned long t1075 = __off1071;
  unsigned long r1076 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1074);
  unsigned long t1077 = __pos1070;
  unsigned long b1078 = r1076 - t1077;
  _Bool c1079 = ((t1075 < b1078)) ? 1 : 0;
  __testoff1073 = c1079;
  _Bool t1080 = __testoff1073;
  unsigned long ternary1081;
  if (t1080) {
    unsigned long t1082 = __off1071;
    ternary1081 = (unsigned long)t1082;
  } else {
    unsigned long r1083 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1074);
    unsigned long t1084 = __pos1070;
    unsigned long b1085 = r1083 - t1084;
    ternary1081 = (unsigned long)b1085;
  }
  __retval1072 = ternary1081;
  unsigned long t1086 = __retval1072;
  return t1086;
}

