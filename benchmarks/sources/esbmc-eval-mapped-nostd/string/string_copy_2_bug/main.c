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
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[15] = "Test string...";
char _str_1[7] = "string";
char _str_2[16] = "aux != \"string\"";
char _str_3[112] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_copy_2_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[18] = "buffer contains: ";
char _str_5[2] = "\n";
char _str_6[50] = "basic_string: construction from null is not valid";
char _str_7[24] = "basic_string::_M_create";
char _str_8[19] = "basic_string::copy";
char _str_9[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____copy_char___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, unsigned long p3);
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
int main();
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
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
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);

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
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t14->_M_dataplus, r15, t16);
      char* t17 = __s10;
      char* c18 = ((void*)0);
      _Bool c19 = ((t17 == c18)) ? 1 : 0;
      if (c19) {
        char* cast20 = (char*)&(_str_6);
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

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v32) {
bb33:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this34;
  unsigned long __retval35;
  unsigned long __sz36;
  this34 = v32;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t37 = this34;
  unsigned long t38 = t37->_M_string_length;
  __sz36 = t38;
    unsigned long t39 = __sz36;
    unsigned long r40 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t37);
    _Bool c41 = ((t39 > r40)) ? 1 : 0;
    if (c41) {
      __builtin_unreachable();
    }
  unsigned long t42 = __sz36;
  __retval35 = t42;
  unsigned long t43 = __retval35;
  return t43;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v44, unsigned long v45, char* v46) {
bb47:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this48;
  unsigned long __pos49;
  char* __s50;
  unsigned long __retval51;
  this48 = v44;
  __pos49 = v45;
  __s50 = v46;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t52 = this48;
    unsigned long t53 = __pos49;
    unsigned long r54 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t52);
    _Bool c55 = ((t53 > r54)) ? 1 : 0;
    if (c55) {
      char* cast56 = (char*)&(_str_9);
      char* t57 = __s50;
      unsigned long t58 = __pos49;
      unsigned long r59 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t52);
      std____throw_out_of_range_fmt(cast56, t57, t58, r59);
    }
  unsigned long t60 = __pos49;
  __retval51 = t60;
  unsigned long t61 = __retval51;
  return t61;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v62, unsigned long v63, unsigned long v64) {
bb65:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this66;
  unsigned long __pos67;
  unsigned long __off68;
  unsigned long __retval69;
  _Bool __testoff70;
  this66 = v62;
  __pos67 = v63;
  __off68 = v64;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t71 = this66;
  unsigned long t72 = __off68;
  unsigned long r73 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t71);
  unsigned long t74 = __pos67;
  unsigned long b75 = r73 - t74;
  _Bool c76 = ((t72 < b75)) ? 1 : 0;
  __testoff70 = c76;
  _Bool t77 = __testoff70;
  unsigned long ternary78;
  if (t77) {
    unsigned long t79 = __off68;
    ternary78 = (unsigned long)t79;
  } else {
    unsigned long r80 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t71);
    unsigned long t81 = __pos67;
    unsigned long b82 = r80 - t81;
    ternary78 = (unsigned long)b82;
  }
  __retval69 = ternary78;
  unsigned long t83 = __retval69;
  return t83;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4copyEPcmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____copy_char___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v84, char* v85, unsigned long v86, unsigned long v87) {
bb88:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this89;
  char* __s90;
  unsigned long __n91;
  unsigned long __pos92;
  unsigned long __retval93;
  this89 = v84;
  __s90 = v85;
  __n91 = v86;
  __pos92 = v87;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t94 = this89;
  unsigned long t95 = __pos92;
  char* cast96 = (char*)&(_str_8);
  unsigned long r97 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t94, t95, cast96);
  unsigned long t98 = __pos92;
  unsigned long t99 = __n91;
  unsigned long r100 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t94, t98, t99);
  __n91 = r100;
    unsigned long t101 = __n91;
    _Bool cast102 = (_Bool)t101;
    if (cast102) {
      char* t103 = __s90;
      char* r104 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t94);
      unsigned long t105 = __pos92;
      char* ptr106 = &(r104)[t105];
      unsigned long t107 = __n91;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t103, ptr106, t107);
    }
  unsigned long t108 = __n91;
  __retval93 = t108;
  unsigned long t109 = __retval93;
  return t109;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v110) {
bb111:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this112;
  struct std__allocator_char_ ref_tmp0113;
  this112 = v110;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t114 = this112;
  char* r115 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t114);
  std__allocator_char___allocator_2(&ref_tmp0113);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t114->_M_dataplus, r115, &ref_tmp0113);
  {
    std__allocator_char____allocator(&ref_tmp0113);
  }
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t114);
    unsigned long c116 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t114, c116);
  return;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_move_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign() {
bb117:
  _Bool __retval118;
  _Bool t119 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval118 = t119;
  _Bool t120 = __retval118;
  return t120;
}

// function: _ZNSt15__new_allocatorIcEaSERKS0_
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* v121, struct std____new_allocator_char_* v122) {
bb123:
  struct std____new_allocator_char_* this124;
  struct std____new_allocator_char_* unnamed125;
  struct std____new_allocator_char_* __retval126;
  this124 = v121;
  unnamed125 = v122;
  struct std____new_allocator_char_* t127 = this124;
  __retval126 = t127;
  struct std____new_allocator_char_* t128 = __retval126;
  return t128;
}

// function: _ZNSaIcEaSERKS_
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* v129, struct std__allocator_char_* v130) {
bb131:
  struct std__allocator_char_* this132;
  struct std__allocator_char_* unnamed133;
  struct std__allocator_char_* __retval134;
  this132 = v129;
  unnamed133 = v130;
  struct std__allocator_char_* t135 = this132;
  struct std____new_allocator_char_* base136 = (struct std____new_allocator_char_*)((char *)t135 + 0);
  struct std__allocator_char_* t137 = unnamed133;
  struct std____new_allocator_char_* base138 = (struct std____new_allocator_char_*)((char *)t137 + 0);
  struct std____new_allocator_char_* r139 = std____new_allocator_char___operator_(base136, base138);
  __retval134 = t135;
  struct std__allocator_char_* t140 = __retval134;
  return t140;
}

// function: _ZSt15__alloc_on_moveISaIcEEvRT_S2_
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* v141, struct std__allocator_char_* v142) {
bb143:
  struct std__allocator_char_* __one144;
  struct std__allocator_char_* __two145;
  __one144 = v141;
  __two145 = v142;
    struct std__allocator_char_* t146 = __two145;
    struct std__allocator_char_* t147 = __one144;
    struct std__allocator_char_* r148 = std__allocator_char___operator_(t147, t146);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v149) {
bb150:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this151;
  unsigned long __retval152;
  this151 = v149;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t153 = this151;
  unsigned long r154 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t153);
  __retval152 = r154;
  unsigned long t155 = __retval152;
  return t155;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v156) {
bb157:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this158;
  char* __retval159;
  this158 = v156;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t160 = this158;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t160);
  char* r161 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t160);
  __retval159 = r161;
  char* t162 = __retval159;
  return t162;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v163) {
bb164:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this165;
  unsigned long __retval166;
  unsigned long __sz167;
  this165 = v163;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t168 = this165;
  _Bool r169 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t168);
  unsigned long ternary170;
  if (r169) {
    unsigned long c171 = 15;
    ternary170 = (unsigned long)c171;
  } else {
    unsigned long t172 = t168->field2._M_allocated_capacity;
    ternary170 = (unsigned long)t172;
  }
  __sz167 = ternary170;
    unsigned long t173 = __sz167;
    unsigned long c174 = 15;
    _Bool c175 = ((t173 < c174)) ? 1 : 0;
    _Bool ternary176;
    if (c175) {
      _Bool c177 = 1;
      ternary176 = (_Bool)c177;
    } else {
      unsigned long t178 = __sz167;
      unsigned long r179 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t168);
      _Bool c180 = ((t178 > r179)) ? 1 : 0;
      ternary176 = (_Bool)c180;
    }
    if (ternary176) {
      __builtin_unreachable();
    }
  unsigned long t181 = __sz167;
  __retval166 = t181;
  unsigned long t182 = __retval166;
  return t182;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v183, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v184) {
bb185:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this186;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str187;
  this186 = v183;
  __str187 = v184;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t188 = this186;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t189 = __str187;
    _Bool c190 = ((t188 != t189)) ? 1 : 0;
    if (c190) {
      unsigned long __rsize191;
      unsigned long __capacity192;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t193 = __str187;
      unsigned long r194 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t193);
      __rsize191 = r194;
      unsigned long r195 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t188);
      __capacity192 = r195;
        unsigned long t196 = __rsize191;
        unsigned long t197 = __capacity192;
        _Bool c198 = ((t196 > t197)) ? 1 : 0;
        if (c198) {
          unsigned long __new_capacity199;
          char* __tmp200;
          unsigned long t201 = __rsize191;
          __new_capacity199 = t201;
          unsigned long t202 = __capacity192;
          char* r203 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t188, &__new_capacity199, t202);
          __tmp200 = r203;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t188);
          char* t204 = __tmp200;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t188, t204);
          unsigned long t205 = __new_capacity199;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t188, t205);
        }
        unsigned long t206 = __rsize191;
        _Bool cast207 = (_Bool)t206;
        if (cast207) {
          char* r208 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t188);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t209 = __str187;
          char* r210 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t209);
          unsigned long t211 = __rsize191;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r208, r210, t211);
        }
      unsigned long t212 = __rsize191;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t188, t212);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5clearEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v213) {
bb214:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this215;
  this215 = v213;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t216 = this215;
  unsigned long c217 = 0;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t216, c217);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEOS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v218, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v219) {
bb220:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this221;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str222;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval223;
  _Bool __equal_allocs224;
  this221 = v218;
  __str222 = v219;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t225 = this221;
  _Bool c226 = 1;
  __equal_allocs224 = c226;
    _Bool r227 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t225);
    _Bool u228 = !r227;
    _Bool ternary229;
    if (u228) {
      _Bool r230 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
      ternary229 = (_Bool)r230;
    } else {
      _Bool c231 = 0;
      ternary229 = (_Bool)c231;
    }
    _Bool ternary232;
    if (ternary229) {
      _Bool t233 = __equal_allocs224;
      _Bool u234 = !t233;
      ternary232 = (_Bool)u234;
    } else {
      _Bool c235 = 0;
      ternary232 = (_Bool)c235;
    }
    if (ternary232) {
      unsigned long t236 = t225->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t225, t236);
      char* r237 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t225);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t225, r237);
      unsigned long c238 = 0;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t225, c238);
    }
  struct std__allocator_char_* r239 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t225);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t240 = __str222;
  struct std__allocator_char_* r241 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t240);
  void_std____alloc_on_move_std__allocator_char___(r239, r241);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t242 = __str222;
    _Bool r243 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t242);
    if (r243) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t244 = __str222;
        _Bool c245 = ((t244 != t225)) ? 1 : 0;
        if (c245) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t246 = __str222;
            unsigned long r247 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t246);
            _Bool cast248 = (_Bool)r247;
            if (cast248) {
              char* r249 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t225);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t250 = __str222;
              char* r251 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t250);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t252 = __str222;
              unsigned long r253 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t252);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r249, r251, r253);
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t254 = __str222;
          unsigned long r255 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t254);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t225, r255);
        }
    } else {
        _Bool r256 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
        _Bool ternary257;
        if (r256) {
          _Bool c258 = 1;
          ternary257 = (_Bool)c258;
        } else {
          _Bool t259 = __equal_allocs224;
          ternary257 = (_Bool)t259;
        }
        if (ternary257) {
          char* __data260;
          unsigned long __capacity261;
          char* c262 = ((void*)0);
          __data260 = c262;
            _Bool r263 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t225);
            _Bool u264 = !r263;
            if (u264) {
                _Bool t265 = __equal_allocs224;
                if (t265) {
                  char* r266 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t225);
                  __data260 = r266;
                  unsigned long t267 = t225->field2._M_allocated_capacity;
                  __capacity261 = t267;
                } else {
                  unsigned long t268 = t225->field2._M_allocated_capacity;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t225, t268);
                }
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t269 = __str222;
          char* r270 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t269);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t225, r270);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t271 = __str222;
          unsigned long r272 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t271);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t225, r272);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t273 = __str222;
          unsigned long t274 = t273->field2._M_allocated_capacity;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t225, t274);
            char* t275 = __data260;
            _Bool cast276 = (_Bool)t275;
            if (cast276) {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t277 = __str222;
              char* t278 = __data260;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t277, t278);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t279 = __str222;
              unsigned long t280 = __capacity261;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t279, t280);
            } else {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t281 = __str222;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t282 = __str222;
              char* r283 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t282);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t281, r283);
            }
        } else {
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t284 = __str222;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t225, t284);
        }
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t285 = __str222;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(t285);
  __retval223 = t225;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t286 = __retval223;
  return t286;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v287) {
bb288:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this289;
  this289 = v287;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t290 = this289;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t290);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t290->_M_dataplus);
  }
  return;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v291, char* v292) {
bb293:
  char* __c1294;
  char* __c2295;
  _Bool __retval296;
  __c1294 = v291;
  __c2295 = v292;
  char* t297 = __c1294;
  char t298 = *t297;
  unsigned char cast299 = (unsigned char)t298;
  int cast300 = (int)cast299;
  char* t301 = __c2295;
  char t302 = *t301;
  unsigned char cast303 = (unsigned char)t302;
  int cast304 = (int)cast303;
  _Bool c305 = ((cast300 < cast304)) ? 1 : 0;
  __retval296 = c305;
  _Bool t306 = __retval296;
  return t306;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v307, char* v308, unsigned long v309) {
bb310:
  char* __s1311;
  char* __s2312;
  unsigned long __n313;
  int __retval314;
  __s1311 = v307;
  __s2312 = v308;
  __n313 = v309;
    unsigned long t315 = __n313;
    unsigned long c316 = 0;
    _Bool c317 = ((t315 == c316)) ? 1 : 0;
    if (c317) {
      int c318 = 0;
      __retval314 = c318;
      int t319 = __retval314;
      return t319;
    }
    _Bool r320 = std____is_constant_evaluated();
    if (r320) {
        unsigned long __i321;
        unsigned long c322 = 0;
        __i321 = c322;
        while (1) {
          unsigned long t324 = __i321;
          unsigned long t325 = __n313;
          _Bool c326 = ((t324 < t325)) ? 1 : 0;
          if (!c326) break;
            unsigned long t327 = __i321;
            char* t328 = __s1311;
            char* ptr329 = &(t328)[t327];
            unsigned long t330 = __i321;
            char* t331 = __s2312;
            char* ptr332 = &(t331)[t330];
            _Bool r333 = std__char_traits_char___lt(ptr329, ptr332);
            if (r333) {
              int c334 = -1;
              __retval314 = c334;
              int t335 = __retval314;
              int ret_val336 = t335;
              return ret_val336;
            } else {
                unsigned long t337 = __i321;
                char* t338 = __s2312;
                char* ptr339 = &(t338)[t337];
                unsigned long t340 = __i321;
                char* t341 = __s1311;
                char* ptr342 = &(t341)[t340];
                _Bool r343 = std__char_traits_char___lt(ptr339, ptr342);
                if (r343) {
                  int c344 = 1;
                  __retval314 = c344;
                  int t345 = __retval314;
                  int ret_val346 = t345;
                  return ret_val346;
                }
            }
        for_step323: ;
          unsigned long t347 = __i321;
          unsigned long u348 = t347 + 1;
          __i321 = u348;
        }
      int c349 = 0;
      __retval314 = c349;
      int t350 = __retval314;
      return t350;
    }
  char* t351 = __s1311;
  void* cast352 = (void*)t351;
  char* t353 = __s2312;
  void* cast354 = (void*)t353;
  unsigned long t355 = __n313;
  int r356 = memcmp(cast352, cast354, t355);
  __retval314 = r356;
  int t357 = __retval314;
  return t357;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v358) {
bb359:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this360;
  char* __retval361;
  this360 = v358;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t362 = this360;
  char* r363 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t362);
  __retval361 = r363;
  char* t364 = __retval361;
  return t364;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v365, char* v366) {
bb367:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs368;
  char* __rhs369;
  _Bool __retval370;
  __lhs368 = v365;
  __rhs369 = v366;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t371 = __lhs368;
  unsigned long r372 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t371);
  char* t373 = __rhs369;
  unsigned long r374 = std__char_traits_char___length(t373);
  _Bool c375 = ((r372 == r374)) ? 1 : 0;
  _Bool ternary376;
  if (c375) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t377 = __lhs368;
    char* r378 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t377);
    char* t379 = __rhs369;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t380 = __lhs368;
    unsigned long r381 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t380);
    int r382 = std__char_traits_char___compare(r378, t379, r381);
    _Bool cast383 = (_Bool)r382;
    _Bool u384 = !cast383;
    ternary376 = (_Bool)u384;
  } else {
    _Bool c385 = 0;
    ternary376 = (_Bool)c385;
  }
  __retval370 = ternary376;
  _Bool t386 = __retval370;
  return t386;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v387, int v388) {
bb389:
  int __a390;
  int __b391;
  int __retval392;
  __a390 = v387;
  __b391 = v388;
  int t393 = __a390;
  int t394 = __b391;
  int b395 = t393 | t394;
  __retval392 = b395;
  int t396 = __retval392;
  return t396;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v397) {
bb398:
  struct std__basic_ios_char__std__char_traits_char__* this399;
  int __retval400;
  this399 = v397;
  struct std__basic_ios_char__std__char_traits_char__* t401 = this399;
  struct std__ios_base* base402 = (struct std__ios_base*)((char *)t401 + 0);
  int t403 = base402->_M_streambuf_state;
  __retval400 = t403;
  int t404 = __retval400;
  return t404;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v405, int v406) {
bb407:
  struct std__basic_ios_char__std__char_traits_char__* this408;
  int __state409;
  this408 = v405;
  __state409 = v406;
  struct std__basic_ios_char__std__char_traits_char__* t410 = this408;
  int r411 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t410);
  int t412 = __state409;
  int r413 = std__operator_(r411, t412);
  std__basic_ios_char__std__char_traits_char_____clear(t410, r413);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v414, char* v415) {
bb416:
  struct std__basic_ostream_char__std__char_traits_char__* __out417;
  char* __s418;
  struct std__basic_ostream_char__std__char_traits_char__* __retval419;
  __out417 = v414;
  __s418 = v415;
    char* t420 = __s418;
    _Bool cast421 = (_Bool)t420;
    _Bool u422 = !cast421;
    if (u422) {
      struct std__basic_ostream_char__std__char_traits_char__* t423 = __out417;
      void** v424 = (void**)t423;
      void* v425 = *((void**)v424);
      unsigned char* cast426 = (unsigned char*)v425;
      long c427 = -24;
      unsigned char* ptr428 = &(cast426)[c427];
      long* cast429 = (long*)ptr428;
      long t430 = *cast429;
      unsigned char* cast431 = (unsigned char*)t423;
      unsigned char* ptr432 = &(cast431)[t430];
      struct std__basic_ostream_char__std__char_traits_char__* cast433 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr432;
      struct std__basic_ios_char__std__char_traits_char__* cast434 = (struct std__basic_ios_char__std__char_traits_char__*)cast433;
      int t435 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast434, t435);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t436 = __out417;
      char* t437 = __s418;
      char* t438 = __s418;
      unsigned long r439 = std__char_traits_char___length(t438);
      long cast440 = (long)r439;
      struct std__basic_ostream_char__std__char_traits_char__* r441 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t436, t437, cast440);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t442 = __out417;
  __retval419 = t442;
  struct std__basic_ostream_char__std__char_traits_char__* t443 = __retval419;
  return t443;
}

// function: main
int main() {
bb444:
  int __retval445;
  unsigned long length446;
  char buffer447[20];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str448;
  struct std__allocator_char_ ref_tmp0449;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ aux450;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp1451;
  struct std__allocator_char_ ref_tmp2452;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup453;
  int c454 = 0;
  __retval445 = c454;
  char* cast455 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0449);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str448, cast455, &ref_tmp0449);
  {
    std__allocator_char____allocator(&ref_tmp0449);
  }
    char* cast456 = (char*)&(buffer447);
    unsigned long c457 = 6;
    unsigned long c458 = 5;
    unsigned long r459 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____copy_char___unsigned_long__unsigned_long__const(&str448, cast456, c457, c458);
    length446 = r459;
    char c460 = 0;
    unsigned long t461 = length446;
    buffer447[t461] = c460;
    _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&aux450);
      char* cast462 = (char*)&(buffer447);
      std__allocator_char___allocator_2(&ref_tmp2452);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&ref_tmp1451, cast462, &ref_tmp2452);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r463 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&aux450, &ref_tmp1451);
          tmp_exprcleanup453 = r463;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp1451);
        }
      {
        std__allocator_char____allocator(&ref_tmp2452);
      }
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t464 = tmp_exprcleanup453;
      char* cast465 = (char*)&(_str_1);
      _Bool r466 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&aux450, cast465);
      _Bool u467 = !r466;
      if (u467) {
      } else {
        char* cast468 = (char*)&(_str_2);
        char* c469 = _str_3;
        unsigned int c470 = 24;
        char* cast471 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast468, c469, c470, cast471);
      }
      char* cast472 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* r473 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast472);
      char* cast474 = (char*)&(buffer447);
      struct std__basic_ostream_char__std__char_traits_char__* r475 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r473, cast474);
      char* cast476 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* r477 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r475, cast476);
      int c478 = 0;
      __retval445 = c478;
      int t479 = __retval445;
      int ret_val480 = t479;
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&aux450);
      }
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str448);
      }
      return ret_val480;
  int t481 = __retval445;
  return t481;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v482) {
bb483:
  struct std____new_allocator_char_* this484;
  this484 = v482;
  struct std____new_allocator_char_* t485 = this484;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v486) {
bb487:
  char* __r488;
  char* __retval489;
  __r488 = v486;
  char* t490 = __r488;
  __retval489 = t490;
  char* t491 = __retval489;
  return t491;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v492) {
bb493:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this494;
  char* __retval495;
  this494 = v492;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t496 = this494;
  char* cast497 = (char*)&(t496->field2._M_local_buf);
  char* r498 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast497);
  __retval495 = r498;
  char* t499 = __retval495;
  return t499;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v500, char* v501, struct std__allocator_char_* v502) {
bb503:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this504;
  char* __dat505;
  struct std__allocator_char_* __a506;
  this504 = v500;
  __dat505 = v501;
  __a506 = v502;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t507 = this504;
  struct std__allocator_char_* base508 = (struct std__allocator_char_*)((char *)t507 + 0);
  struct std__allocator_char_* t509 = __a506;
  std__allocator_char___allocator(base508, t509);
    char* t510 = __dat505;
    t507->_M_p = t510;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb511:
  _Bool __retval512;
    _Bool c513 = 0;
    __retval512 = c513;
    _Bool t514 = __retval512;
    return t514;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v515, char* v516) {
bb517:
  char* __c1518;
  char* __c2519;
  _Bool __retval520;
  __c1518 = v515;
  __c2519 = v516;
  char* t521 = __c1518;
  char t522 = *t521;
  int cast523 = (int)t522;
  char* t524 = __c2519;
  char t525 = *t524;
  int cast526 = (int)t525;
  _Bool c527 = ((cast523 == cast526)) ? 1 : 0;
  __retval520 = c527;
  _Bool t528 = __retval520;
  return t528;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v529) {
bb530:
  char* __p531;
  unsigned long __retval532;
  unsigned long __i533;
  __p531 = v529;
  unsigned long c534 = 0;
  __i533 = c534;
    char ref_tmp0535;
    while (1) {
      unsigned long t536 = __i533;
      char* t537 = __p531;
      char* ptr538 = &(t537)[t536];
      char c539 = 0;
      ref_tmp0535 = c539;
      _Bool r540 = __gnu_cxx__char_traits_char___eq(ptr538, &ref_tmp0535);
      _Bool u541 = !r540;
      if (!u541) break;
      unsigned long t542 = __i533;
      unsigned long u543 = t542 + 1;
      __i533 = u543;
    }
  unsigned long t544 = __i533;
  __retval532 = t544;
  unsigned long t545 = __retval532;
  return t545;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v546) {
bb547:
  char* __s548;
  unsigned long __retval549;
  __s548 = v546;
    _Bool r550 = std____is_constant_evaluated();
    if (r550) {
      char* t551 = __s548;
      unsigned long r552 = __gnu_cxx__char_traits_char___length(t551);
      __retval549 = r552;
      unsigned long t553 = __retval549;
      return t553;
    }
  char* t554 = __s548;
  unsigned long r555 = strlen(t554);
  __retval549 = r555;
  unsigned long t556 = __retval549;
  return t556;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v557, char* v558, struct std__random_access_iterator_tag v559) {
bb560:
  char* __first561;
  char* __last562;
  struct std__random_access_iterator_tag unnamed563;
  long __retval564;
  __first561 = v557;
  __last562 = v558;
  unnamed563 = v559;
  char* t565 = __last562;
  char* t566 = __first561;
  long diff567 = t565 - t566;
  __retval564 = diff567;
  long t568 = __retval564;
  return t568;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v569) {
bb570:
  char** unnamed571;
  struct std__random_access_iterator_tag __retval572;
  unnamed571 = v569;
  struct std__random_access_iterator_tag t573 = __retval572;
  return t573;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v574, char* v575) {
bb576:
  char* __first577;
  char* __last578;
  long __retval579;
  struct std__random_access_iterator_tag agg_tmp0580;
  __first577 = v574;
  __last578 = v575;
  char* t581 = __first577;
  char* t582 = __last578;
  struct std__random_access_iterator_tag r583 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first577);
  agg_tmp0580 = r583;
  struct std__random_access_iterator_tag t584 = agg_tmp0580;
  long r585 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t581, t582, t584);
  __retval579 = r585;
  long t586 = __retval579;
  return t586;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v587, char* v588) {
bb589:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this590;
  char* __p591;
  this590 = v587;
  __p591 = v588;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t592 = this590;
  char* t593 = __p591;
  t592->_M_dataplus._M_p = t593;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v594) {
bb595:
  struct std__allocator_char_* __a596;
  unsigned long __retval597;
  __a596 = v594;
  unsigned long c598 = -1;
  unsigned long c599 = 1;
  unsigned long b600 = c598 / c599;
  __retval597 = b600;
  unsigned long t601 = __retval597;
  return t601;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v602) {
bb603:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this604;
  struct std__allocator_char_* __retval605;
  this604 = v602;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t606 = this604;
  struct std__allocator_char_* base607 = (struct std__allocator_char_*)((char *)&(t606->_M_dataplus) + 0);
  __retval605 = base607;
  struct std__allocator_char_* t608 = __retval605;
  return t608;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v609, unsigned long* v610) {
bb611:
  unsigned long* __a612;
  unsigned long* __b613;
  unsigned long* __retval614;
  __a612 = v609;
  __b613 = v610;
    unsigned long* t615 = __b613;
    unsigned long t616 = *t615;
    unsigned long* t617 = __a612;
    unsigned long t618 = *t617;
    _Bool c619 = ((t616 < t618)) ? 1 : 0;
    if (c619) {
      unsigned long* t620 = __b613;
      __retval614 = t620;
      unsigned long* t621 = __retval614;
      return t621;
    }
  unsigned long* t622 = __a612;
  __retval614 = t622;
  unsigned long* t623 = __retval614;
  return t623;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v624) {
bb625:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this626;
  unsigned long __retval627;
  unsigned long __diffmax628;
  unsigned long __allocmax629;
  this626 = v624;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t630 = this626;
  unsigned long c631 = 9223372036854775807;
  __diffmax628 = c631;
  struct std__allocator_char_* r632 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t630);
  unsigned long r633 = std__allocator_traits_std__allocator_char_____max_size(r632);
  __allocmax629 = r633;
  unsigned long* r634 = unsigned_long_const__std__min_unsigned_long_(&__diffmax628, &__allocmax629);
  unsigned long t635 = *r634;
  unsigned long c636 = 1;
  unsigned long b637 = t635 - c636;
  __retval627 = b637;
  unsigned long t638 = __retval627;
  return t638;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v639) {
bb640:
  struct std____new_allocator_char_* this641;
  unsigned long __retval642;
  this641 = v639;
  struct std____new_allocator_char_* t643 = this641;
  unsigned long c644 = 9223372036854775807;
  unsigned long c645 = 1;
  unsigned long b646 = c644 / c645;
  __retval642 = b646;
  unsigned long t647 = __retval642;
  return t647;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v648, unsigned long v649, void* v650) {
bb651:
  struct std____new_allocator_char_* this652;
  unsigned long __n653;
  void* unnamed654;
  char* __retval655;
  this652 = v648;
  __n653 = v649;
  unnamed654 = v650;
  struct std____new_allocator_char_* t656 = this652;
    unsigned long t657 = __n653;
    unsigned long r658 = std____new_allocator_char____M_max_size___const(t656);
    _Bool c659 = ((t657 > r658)) ? 1 : 0;
    if (c659) {
        unsigned long t660 = __n653;
        unsigned long c661 = -1;
        unsigned long c662 = 1;
        unsigned long b663 = c661 / c662;
        _Bool c664 = ((t660 > b663)) ? 1 : 0;
        if (c664) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c665 = 1;
    unsigned long c666 = 16;
    _Bool c667 = ((c665 > c666)) ? 1 : 0;
    if (c667) {
      unsigned long __al668;
      unsigned long c669 = 1;
      __al668 = c669;
      unsigned long t670 = __n653;
      unsigned long c671 = 1;
      unsigned long b672 = t670 * c671;
      unsigned long t673 = __al668;
      void* r674 = operator_new_2(b672, t673);
      char* cast675 = (char*)r674;
      __retval655 = cast675;
      char* t676 = __retval655;
      return t676;
    }
  unsigned long t677 = __n653;
  unsigned long c678 = 1;
  unsigned long b679 = t677 * c678;
  void* r680 = operator_new(b679);
  char* cast681 = (char*)r680;
  __retval655 = cast681;
  char* t682 = __retval655;
  return t682;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v683, unsigned long v684) {
bb685:
  struct std__allocator_char_* this686;
  unsigned long __n687;
  char* __retval688;
  this686 = v683;
  __n687 = v684;
  struct std__allocator_char_* t689 = this686;
    _Bool r690 = std____is_constant_evaluated();
    if (r690) {
        unsigned long t691 = __n687;
        unsigned long c692 = 1;
        unsigned long ovr693;
        _Bool ovf694 = __builtin_mul_overflow(t691, c692, &ovr693);
        __n687 = ovr693;
        if (ovf694) {
          std____throw_bad_array_new_length();
        }
      unsigned long t695 = __n687;
      void* r696 = operator_new(t695);
      char* cast697 = (char*)r696;
      __retval688 = cast697;
      char* t698 = __retval688;
      return t698;
    }
  struct std____new_allocator_char_* base699 = (struct std____new_allocator_char_*)((char *)t689 + 0);
  unsigned long t700 = __n687;
  void* c701 = ((void*)0);
  char* r702 = std____new_allocator_char___allocate(base699, t700, c701);
  __retval688 = r702;
  char* t703 = __retval688;
  return t703;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v704, unsigned long v705) {
bb706:
  struct std__allocator_char_* __a707;
  unsigned long __n708;
  char* __retval709;
  __a707 = v704;
  __n708 = v705;
  struct std__allocator_char_* t710 = __a707;
  unsigned long t711 = __n708;
  char* r712 = std__allocator_char___allocate(t710, t711);
  __retval709 = r712;
  char* t713 = __retval709;
  return t713;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v714, unsigned long v715) {
bb716:
  struct std__allocator_char_* __a717;
  unsigned long __n718;
  char* __retval719;
  char* __p720;
  __a717 = v714;
  __n718 = v715;
  struct std__allocator_char_* t721 = __a717;
  unsigned long t722 = __n718;
  char* r723 = std__allocator_traits_std__allocator_char_____allocate(t721, t722);
  __p720 = r723;
  char* t724 = __p720;
  __retval719 = t724;
  char* t725 = __retval719;
  return t725;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v726) {
bb727:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this728;
  struct std__allocator_char_* __retval729;
  this728 = v726;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t730 = this728;
  struct std__allocator_char_* base731 = (struct std__allocator_char_*)((char *)&(t730->_M_dataplus) + 0);
  __retval729 = base731;
  struct std__allocator_char_* t732 = __retval729;
  return t732;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v733, unsigned long* v734, unsigned long v735) {
bb736:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this737;
  unsigned long* __capacity738;
  unsigned long __old_capacity739;
  char* __retval740;
  this737 = v733;
  __capacity738 = v734;
  __old_capacity739 = v735;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t741 = this737;
    unsigned long* t742 = __capacity738;
    unsigned long t743 = *t742;
    unsigned long r744 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t741);
    _Bool c745 = ((t743 > r744)) ? 1 : 0;
    if (c745) {
      char* cast746 = (char*)&(_str_7);
      std____throw_length_error(cast746);
    }
    unsigned long* t747 = __capacity738;
    unsigned long t748 = *t747;
    unsigned long t749 = __old_capacity739;
    _Bool c750 = ((t748 > t749)) ? 1 : 0;
    _Bool ternary751;
    if (c750) {
      unsigned long* t752 = __capacity738;
      unsigned long t753 = *t752;
      unsigned long c754 = 2;
      unsigned long t755 = __old_capacity739;
      unsigned long b756 = c754 * t755;
      _Bool c757 = ((t753 < b756)) ? 1 : 0;
      ternary751 = (_Bool)c757;
    } else {
      _Bool c758 = 0;
      ternary751 = (_Bool)c758;
    }
    if (ternary751) {
      unsigned long c759 = 2;
      unsigned long t760 = __old_capacity739;
      unsigned long b761 = c759 * t760;
      unsigned long* t762 = __capacity738;
      *t762 = b761;
        unsigned long* t763 = __capacity738;
        unsigned long t764 = *t763;
        unsigned long r765 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t741);
        _Bool c766 = ((t764 > r765)) ? 1 : 0;
        if (c766) {
          unsigned long r767 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t741);
          unsigned long* t768 = __capacity738;
          *t768 = r767;
        }
    }
  struct std__allocator_char_* r769 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t741);
  unsigned long* t770 = __capacity738;
  unsigned long t771 = *t770;
  unsigned long c772 = 1;
  unsigned long b773 = t771 + c772;
  char* r774 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r769, b773);
  __retval740 = r774;
  char* t775 = __retval740;
  return t775;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v776, unsigned long v777) {
bb778:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this779;
  unsigned long __capacity780;
  this779 = v776;
  __capacity780 = v777;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t781 = this779;
  unsigned long t782 = __capacity780;
  t781->field2._M_allocated_capacity = t782;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb783:
  _Bool __retval784;
    _Bool c785 = 0;
    __retval784 = c785;
    _Bool t786 = __retval784;
    return t786;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v787) {
bb788:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this789;
  this789 = v787;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t790 = this789;
    _Bool r791 = std__is_constant_evaluated();
    if (r791) {
        unsigned long __i792;
        unsigned long c793 = 0;
        __i792 = c793;
        while (1) {
          unsigned long t795 = __i792;
          unsigned long c796 = 15;
          _Bool c797 = ((t795 <= c796)) ? 1 : 0;
          if (!c797) break;
          char c798 = 0;
          unsigned long t799 = __i792;
          t790->field2._M_local_buf[t799] = c798;
        for_step794: ;
          unsigned long t800 = __i792;
          unsigned long u801 = t800 + 1;
          __i792 = u801;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v802, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v803) {
bb804:
  struct _Guard* this805;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s806;
  this805 = v802;
  __s806 = v803;
  struct _Guard* t807 = this805;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t808 = __s806;
  t807->_M_guarded = t808;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v809, char* v810) {
bb811:
  char* __location812;
  char* __args813;
  char* __retval814;
  void* __loc815;
  __location812 = v809;
  __args813 = v810;
  char* t816 = __location812;
  void* cast817 = (void*)t816;
  __loc815 = cast817;
    void* t818 = __loc815;
    char* cast819 = (char*)t818;
    char* t820 = __args813;
    char t821 = *t820;
    *cast819 = t821;
    __retval814 = cast819;
    char* t822 = __retval814;
    return t822;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v823, char* v824) {
bb825:
  char* __c1826;
  char* __c2827;
  __c1826 = v823;
  __c2827 = v824;
    _Bool r828 = std____is_constant_evaluated();
    if (r828) {
      char* t829 = __c1826;
      char* t830 = __c2827;
      char* r831 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t829, t830);
    } else {
      char* t832 = __c2827;
      char t833 = *t832;
      char* t834 = __c1826;
      *t834 = t833;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v835, char* v836, unsigned long v837) {
bb838:
  char* __s1839;
  char* __s2840;
  unsigned long __n841;
  char* __retval842;
  __s1839 = v835;
  __s2840 = v836;
  __n841 = v837;
    unsigned long t843 = __n841;
    unsigned long c844 = 0;
    _Bool c845 = ((t843 == c844)) ? 1 : 0;
    if (c845) {
      char* t846 = __s1839;
      __retval842 = t846;
      char* t847 = __retval842;
      return t847;
    }
    _Bool r848 = std____is_constant_evaluated();
    if (r848) {
        unsigned long __i849;
        unsigned long c850 = 0;
        __i849 = c850;
        while (1) {
          unsigned long t852 = __i849;
          unsigned long t853 = __n841;
          _Bool c854 = ((t852 < t853)) ? 1 : 0;
          if (!c854) break;
          char* t855 = __s1839;
          unsigned long t856 = __i849;
          char* ptr857 = &(t855)[t856];
          unsigned long t858 = __i849;
          char* t859 = __s2840;
          char* ptr860 = &(t859)[t858];
          char* r861 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr857, ptr860);
        for_step851: ;
          unsigned long t862 = __i849;
          unsigned long u863 = t862 + 1;
          __i849 = u863;
        }
      char* t864 = __s1839;
      __retval842 = t864;
      char* t865 = __retval842;
      return t865;
    }
  char* t866 = __s1839;
  void* cast867 = (void*)t866;
  char* t868 = __s2840;
  void* cast869 = (void*)t868;
  unsigned long t870 = __n841;
  unsigned long c871 = 1;
  unsigned long b872 = t870 * c871;
  void* r873 = memcpy(cast867, cast869, b872);
  char* t874 = __s1839;
  __retval842 = t874;
  char* t875 = __retval842;
  return t875;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v876, char* v877, unsigned long v878) {
bb879:
  char* __s1880;
  char* __s2881;
  unsigned long __n882;
  char* __retval883;
  __s1880 = v876;
  __s2881 = v877;
  __n882 = v878;
    unsigned long t884 = __n882;
    unsigned long c885 = 0;
    _Bool c886 = ((t884 == c885)) ? 1 : 0;
    if (c886) {
      char* t887 = __s1880;
      __retval883 = t887;
      char* t888 = __retval883;
      return t888;
    }
    _Bool r889 = std____is_constant_evaluated();
    if (r889) {
      char* t890 = __s1880;
      char* t891 = __s2881;
      unsigned long t892 = __n882;
      char* r893 = __gnu_cxx__char_traits_char___copy(t890, t891, t892);
      __retval883 = r893;
      char* t894 = __retval883;
      return t894;
    }
  char* t895 = __s1880;
  void* cast896 = (void*)t895;
  char* t897 = __s2881;
  void* cast898 = (void*)t897;
  unsigned long t899 = __n882;
  void* r900 = memcpy(cast896, cast898, t899);
  char* cast901 = (char*)r900;
  __retval883 = cast901;
  char* t902 = __retval883;
  return t902;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v903, char* v904, unsigned long v905) {
bb906:
  char* __d907;
  char* __s908;
  unsigned long __n909;
  __d907 = v903;
  __s908 = v904;
  __n909 = v905;
    unsigned long t910 = __n909;
    unsigned long c911 = 1;
    _Bool c912 = ((t910 == c911)) ? 1 : 0;
    if (c912) {
      char* t913 = __d907;
      char* t914 = __s908;
      std__char_traits_char___assign(t913, t914);
    } else {
      char* t915 = __d907;
      char* t916 = __s908;
      unsigned long t917 = __n909;
      char* r918 = std__char_traits_char___copy(t915, t916, t917);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v919) {
bb920:
  char* __it921;
  char* __retval922;
  __it921 = v919;
  char* t923 = __it921;
  __retval922 = t923;
  char* t924 = __retval922;
  return t924;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v925, char* v926, char* v927) {
bb928:
  char* __p929;
  char* __k1930;
  char* __k2931;
  __p929 = v925;
  __k1930 = v926;
  __k2931 = v927;
    char* t932 = __p929;
    char* t933 = __k1930;
    char* r934 = char_const__std____niter_base_char_const__(t933);
    char* t935 = __k2931;
    char* t936 = __k1930;
    long diff937 = t935 - t936;
    unsigned long cast938 = (unsigned long)diff937;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t932, r934, cast938);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v939) {
bb940:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this941;
  char* __retval942;
  this941 = v939;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t943 = this941;
  char* t944 = t943->_M_dataplus._M_p;
  __retval942 = t944;
  char* t945 = __retval942;
  return t945;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v946, unsigned long v947) {
bb948:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this949;
  unsigned long __length950;
  this949 = v946;
  __length950 = v947;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t951 = this949;
  unsigned long t952 = __length950;
  t951->_M_string_length = t952;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v953, unsigned long v954) {
bb955:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this956;
  unsigned long __n957;
  char ref_tmp0958;
  this956 = v953;
  __n957 = v954;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t959 = this956;
  unsigned long t960 = __n957;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t959, t960);
  unsigned long t961 = __n957;
  char* r962 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t959);
  char* ptr963 = &(r962)[t961];
  char c964 = 0;
  ref_tmp0958 = c964;
  std__char_traits_char___assign(ptr963, &ref_tmp0958);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v965) {
bb966:
  struct _Guard* this967;
  this967 = v965;
  struct _Guard* t968 = this967;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t969 = t968->_M_guarded;
    _Bool cast970 = (_Bool)t969;
    if (cast970) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t971 = t968->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t971);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v972, char* v973, char* v974, struct std__forward_iterator_tag v975) {
bb976:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this977;
  char* __beg978;
  char* __end979;
  struct std__forward_iterator_tag unnamed980;
  unsigned long __dnew981;
  struct _Guard __guard982;
  this977 = v972;
  __beg978 = v973;
  __end979 = v974;
  unnamed980 = v975;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t983 = this977;
  char* t984 = __beg978;
  char* t985 = __end979;
  long r986 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t984, t985);
  unsigned long cast987 = (unsigned long)r986;
  __dnew981 = cast987;
    unsigned long t988 = __dnew981;
    unsigned long c989 = 15;
    _Bool c990 = ((t988 > c989)) ? 1 : 0;
    if (c990) {
      unsigned long c991 = 0;
      char* r992 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t983, &__dnew981, c991);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t983, r992);
      unsigned long t993 = __dnew981;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t983, t993);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t983);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard982, t983);
    char* r994 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t983);
    char* t995 = __beg978;
    char* t996 = __end979;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r994, t995, t996);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c997 = ((void*)0);
    __guard982._M_guarded = c997;
    unsigned long t998 = __dnew981;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t983, t998);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard982);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v999) {
bb1000:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1001;
  this1001 = v999;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1002 = this1001;
  {
    struct std__allocator_char_* base1003 = (struct std__allocator_char_*)((char *)t1002 + 0);
    std__allocator_char____allocator(base1003);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1004, struct std____new_allocator_char_* v1005) {
bb1006:
  struct std____new_allocator_char_* this1007;
  struct std____new_allocator_char_* unnamed1008;
  this1007 = v1004;
  unnamed1008 = v1005;
  struct std____new_allocator_char_* t1009 = this1007;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1010, struct std__allocator_char_* v1011) {
bb1012:
  struct std__allocator_char_* this1013;
  struct std__allocator_char_* __a1014;
  this1013 = v1010;
  __a1014 = v1011;
  struct std__allocator_char_* t1015 = this1013;
  struct std____new_allocator_char_* base1016 = (struct std____new_allocator_char_*)((char *)t1015 + 0);
  struct std__allocator_char_* t1017 = __a1014;
  struct std____new_allocator_char_* base1018 = (struct std____new_allocator_char_*)((char *)t1017 + 0);
  std____new_allocator_char_____new_allocator(base1016, base1018);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1019) {
bb1020:
  char* __r1021;
  char* __retval1022;
  __r1021 = v1019;
  char* t1023 = __r1021;
  __retval1022 = t1023;
  char* t1024 = __retval1022;
  return t1024;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1025) {
bb1026:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1027;
  char* __retval1028;
  this1027 = v1025;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1029 = this1027;
  char* cast1030 = (char*)&(t1029->field2._M_local_buf);
  char* r1031 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1030);
  __retval1028 = r1031;
  char* t1032 = __retval1028;
  return t1032;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1033) {
bb1034:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1035;
  _Bool __retval1036;
  this1035 = v1033;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1037 = this1035;
    char* r1038 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1037);
    char* r1039 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1037);
    _Bool c1040 = ((r1038 == r1039)) ? 1 : 0;
    if (c1040) {
        unsigned long t1041 = t1037->_M_string_length;
        unsigned long c1042 = 15;
        _Bool c1043 = ((t1041 > c1042)) ? 1 : 0;
        if (c1043) {
          __builtin_unreachable();
        }
      _Bool c1044 = 1;
      __retval1036 = c1044;
      _Bool t1045 = __retval1036;
      return t1045;
    }
  _Bool c1046 = 0;
  __retval1036 = c1046;
  _Bool t1047 = __retval1036;
  return t1047;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1048, char* v1049, unsigned long v1050) {
bb1051:
  struct std____new_allocator_char_* this1052;
  char* __p1053;
  unsigned long __n1054;
  this1052 = v1048;
  __p1053 = v1049;
  __n1054 = v1050;
  struct std____new_allocator_char_* t1055 = this1052;
    unsigned long c1056 = 1;
    unsigned long c1057 = 16;
    _Bool c1058 = ((c1056 > c1057)) ? 1 : 0;
    if (c1058) {
      char* t1059 = __p1053;
      void* cast1060 = (void*)t1059;
      unsigned long t1061 = __n1054;
      unsigned long c1062 = 1;
      unsigned long b1063 = t1061 * c1062;
      unsigned long c1064 = 1;
      operator_delete_3(cast1060, b1063, c1064);
      return;
    }
  char* t1065 = __p1053;
  void* cast1066 = (void*)t1065;
  unsigned long t1067 = __n1054;
  unsigned long c1068 = 1;
  unsigned long b1069 = t1067 * c1068;
  operator_delete_2(cast1066, b1069);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1070, char* v1071, unsigned long v1072) {
bb1073:
  struct std__allocator_char_* this1074;
  char* __p1075;
  unsigned long __n1076;
  this1074 = v1070;
  __p1075 = v1071;
  __n1076 = v1072;
  struct std__allocator_char_* t1077 = this1074;
    _Bool r1078 = std____is_constant_evaluated();
    if (r1078) {
      char* t1079 = __p1075;
      void* cast1080 = (void*)t1079;
      operator_delete(cast1080);
      return;
    }
  struct std____new_allocator_char_* base1081 = (struct std____new_allocator_char_*)((char *)t1077 + 0);
  char* t1082 = __p1075;
  unsigned long t1083 = __n1076;
  std____new_allocator_char___deallocate(base1081, t1082, t1083);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1084, char* v1085, unsigned long v1086) {
bb1087:
  struct std__allocator_char_* __a1088;
  char* __p1089;
  unsigned long __n1090;
  __a1088 = v1084;
  __p1089 = v1085;
  __n1090 = v1086;
  struct std__allocator_char_* t1091 = __a1088;
  char* t1092 = __p1089;
  unsigned long t1093 = __n1090;
  std__allocator_char___deallocate(t1091, t1092, t1093);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1094, unsigned long v1095) {
bb1096:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1097;
  unsigned long __size1098;
  this1097 = v1094;
  __size1098 = v1095;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1099 = this1097;
  struct std__allocator_char_* r1100 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1099);
  char* r1101 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1099);
  unsigned long t1102 = __size1098;
  unsigned long c1103 = 1;
  unsigned long b1104 = t1102 + c1103;
  std__allocator_traits_std__allocator_char_____deallocate(r1100, r1101, b1104);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1105) {
bb1106:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1107;
  this1107 = v1105;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1108 = this1107;
    _Bool r1109 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1108);
    _Bool u1110 = !r1109;
    if (u1110) {
      unsigned long t1111 = t1108->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1108, t1111);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1112, char* v1113, struct std__allocator_char_* v1114) {
bb1115:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1116;
  char* __dat1117;
  struct std__allocator_char_* __a1118;
  this1116 = v1112;
  __dat1117 = v1113;
  __a1118 = v1114;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1119 = this1116;
  struct std__allocator_char_* base1120 = (struct std__allocator_char_*)((char *)t1119 + 0);
  struct std__allocator_char_* t1121 = __a1118;
  std__allocator_char___allocator(base1120, t1121);
    char* t1122 = __dat1117;
    t1119->_M_p = t1122;
  return;
}

