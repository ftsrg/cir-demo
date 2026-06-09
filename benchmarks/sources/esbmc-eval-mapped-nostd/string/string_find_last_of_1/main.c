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
char _str[13] = "/usr/bin/man";
char _str_1[23] = "c:\\windows\\winhelp.exe";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[16] = "Splitting one: ";
char _str_3[16] = "Splitting two: ";
char _str_4[3] = "/\\";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
char _str_5[16] = "int(found) == 8";
char _str_6[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_find_last_of_1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_7[10] = " folder: ";
char _str_8[8] = " file: ";
char _str_9[12] = "Splitting: ";
char _str_10[17] = "int(found) == 10";
char _str_11[50] = "basic_string: construction from null is not valid";
char _str_12[24] = "basic_string::_M_create";
char _str_13[21] = "basic_string::substr";
char _str_14[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_15[27] = "basic_string::basic_string";
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
char* __gnu_cxx__char_traits_char___find(char* p0, unsigned long p1, char* p2);
char* std__char_traits_char___find(char* p0, unsigned long p1, char* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_last_of_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, unsigned long p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_last_of_char_const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1, unsigned long p2, unsigned long p3);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
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
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t14->_M_dataplus, r15, t16);
      char* t17 = __s10;
      char* c18 = ((void*)0);
      _Bool c19 = ((t17 == c18)) ? 1 : 0;
      if (c19) {
        char* cast20 = (char*)&(_str_11);
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

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v110, void* v111) {
bb112:
  struct std__basic_ostream_char__std__char_traits_char__* this113;
  void* __pf114;
  struct std__basic_ostream_char__std__char_traits_char__* __retval115;
  this113 = v110;
  __pf114 = v111;
  struct std__basic_ostream_char__std__char_traits_char__* t116 = this113;
  void* t117 = __pf114;
  struct std__basic_ostream_char__std__char_traits_char__* r118 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t117)(t116);
  __retval115 = r118;
  struct std__basic_ostream_char__std__char_traits_char__* t119 = __retval115;
  return t119;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v120) {
bb121:
  struct std__basic_ostream_char__std__char_traits_char__* __os122;
  struct std__basic_ostream_char__std__char_traits_char__* __retval123;
  __os122 = v120;
  struct std__basic_ostream_char__std__char_traits_char__* t124 = __os122;
  struct std__basic_ostream_char__std__char_traits_char__* r125 = std__ostream__flush(t124);
  __retval123 = r125;
  struct std__basic_ostream_char__std__char_traits_char__* t126 = __retval123;
  return t126;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v127) {
bb128:
  struct std__ctype_char_* __f129;
  struct std__ctype_char_* __retval130;
  __f129 = v127;
    struct std__ctype_char_* t131 = __f129;
    _Bool cast132 = (_Bool)t131;
    _Bool u133 = !cast132;
    if (u133) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t134 = __f129;
  __retval130 = t134;
  struct std__ctype_char_* t135 = __retval130;
  return t135;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v136, char v137) {
bb138:
  struct std__ctype_char_* this139;
  char __c140;
  char __retval141;
  this139 = v136;
  __c140 = v137;
  struct std__ctype_char_* t142 = this139;
    char t143 = t142->_M_widen_ok;
    _Bool cast144 = (_Bool)t143;
    if (cast144) {
      char t145 = __c140;
      unsigned char cast146 = (unsigned char)t145;
      unsigned long cast147 = (unsigned long)cast146;
      char t148 = t142->_M_widen[cast147];
      __retval141 = t148;
      char t149 = __retval141;
      return t149;
    }
  std__ctype_char____M_widen_init___const(t142);
  char t150 = __c140;
  void** v151 = (void**)t142;
  void* v152 = *((void**)v151);
  char vcall155 = (char)__VERIFIER_virtual_call_char_char(t142, 6, t150);
  __retval141 = vcall155;
  char t156 = __retval141;
  return t156;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v157, char v158) {
bb159:
  struct std__basic_ios_char__std__char_traits_char__* this160;
  char __c161;
  char __retval162;
  this160 = v157;
  __c161 = v158;
  struct std__basic_ios_char__std__char_traits_char__* t163 = this160;
  struct std__ctype_char_* t164 = t163->_M_ctype;
  struct std__ctype_char_* r165 = std__ctype_char__const__std____check_facet_std__ctype_char___(t164);
  char t166 = __c161;
  char r167 = std__ctype_char___widen_char__const(r165, t166);
  __retval162 = r167;
  char t168 = __retval162;
  return t168;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v169) {
bb170:
  struct std__basic_ostream_char__std__char_traits_char__* __os171;
  struct std__basic_ostream_char__std__char_traits_char__* __retval172;
  __os171 = v169;
  struct std__basic_ostream_char__std__char_traits_char__* t173 = __os171;
  struct std__basic_ostream_char__std__char_traits_char__* t174 = __os171;
  void** v175 = (void**)t174;
  void* v176 = *((void**)v175);
  unsigned char* cast177 = (unsigned char*)v176;
  long c178 = -24;
  unsigned char* ptr179 = &(cast177)[c178];
  long* cast180 = (long*)ptr179;
  long t181 = *cast180;
  unsigned char* cast182 = (unsigned char*)t174;
  unsigned char* ptr183 = &(cast182)[t181];
  struct std__basic_ostream_char__std__char_traits_char__* cast184 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr183;
  struct std__basic_ios_char__std__char_traits_char__* cast185 = (struct std__basic_ios_char__std__char_traits_char__*)cast184;
  char c186 = 10;
  char r187 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast185, c186);
  struct std__basic_ostream_char__std__char_traits_char__* r188 = std__ostream__put(t173, r187);
  struct std__basic_ostream_char__std__char_traits_char__* r189 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r188);
  __retval172 = r189;
  struct std__basic_ostream_char__std__char_traits_char__* t190 = __retval172;
  return t190;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v191) {
bb192:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this193;
  unsigned long __retval194;
  unsigned long __sz195;
  this193 = v191;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t196 = this193;
  unsigned long t197 = t196->_M_string_length;
  __sz195 = t197;
    unsigned long t198 = __sz195;
    unsigned long r199 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t196);
    _Bool c200 = ((t198 > r199)) ? 1 : 0;
    if (c200) {
      __builtin_unreachable();
    }
  unsigned long t201 = __sz195;
  __retval194 = t201;
  unsigned long t202 = __retval194;
  return t202;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4findEPKcmRS2_
char* __gnu_cxx__char_traits_char___find(char* v203, unsigned long v204, char* v205) {
bb206:
  char* __s207;
  unsigned long __n208;
  char* __a209;
  char* __retval210;
  __s207 = v203;
  __n208 = v204;
  __a209 = v205;
    unsigned long __i211;
    unsigned long c212 = 0;
    __i211 = c212;
    while (1) {
      unsigned long t214 = __i211;
      unsigned long t215 = __n208;
      _Bool c216 = ((t214 < t215)) ? 1 : 0;
      if (!c216) break;
        unsigned long t217 = __i211;
        char* t218 = __s207;
        char* ptr219 = &(t218)[t217];
        char* t220 = __a209;
        _Bool r221 = __gnu_cxx__char_traits_char___eq(ptr219, t220);
        if (r221) {
          char* t222 = __s207;
          unsigned long t223 = __i211;
          char* ptr224 = &(t222)[t223];
          __retval210 = ptr224;
          char* t225 = __retval210;
          char* ret_val226 = t225;
          return ret_val226;
        }
    for_step213: ;
      unsigned long t227 = __i211;
      unsigned long u228 = t227 + 1;
      __i211 = u228;
    }
  char* c229 = ((void*)0);
  __retval210 = c229;
  char* t230 = __retval210;
  return t230;
}

// function: _ZNSt11char_traitsIcE4findEPKcmRS1_
char* std__char_traits_char___find(char* v231, unsigned long v232, char* v233) {
bb234:
  char* __s235;
  unsigned long __n236;
  char* __a237;
  char* __retval238;
  __s235 = v231;
  __n236 = v232;
  __a237 = v233;
    unsigned long t239 = __n236;
    unsigned long c240 = 0;
    _Bool c241 = ((t239 == c240)) ? 1 : 0;
    if (c241) {
      char* c242 = ((void*)0);
      __retval238 = c242;
      char* t243 = __retval238;
      return t243;
    }
    _Bool r244 = std____is_constant_evaluated();
    if (r244) {
      char* t245 = __s235;
      unsigned long t246 = __n236;
      char* t247 = __a237;
      char* r248 = __gnu_cxx__char_traits_char___find(t245, t246, t247);
      __retval238 = r248;
      char* t249 = __retval238;
      return t249;
    }
  char* t250 = __s235;
  void* cast251 = (void*)t250;
  char* t252 = __a237;
  char t253 = *t252;
  int cast254 = (int)t253;
  unsigned long t255 = __n236;
  void* memchr256 = (void*)__builtin_memchr(cast251, cast254, t255);
  char* cast257 = (char*)memchr256;
  __retval238 = cast257;
  char* t258 = __retval238;
  return t258;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12find_last_ofEPKcmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_last_of_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v259, char* v260, unsigned long v261, unsigned long v262) {
bb263:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this264;
  char* __s265;
  unsigned long __pos266;
  unsigned long __n267;
  unsigned long __retval268;
  unsigned long __size269;
  this264 = v259;
  __s265 = v260;
  __pos266 = v261;
  __n267 = v262;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t270 = this264;
  unsigned long r271 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t270);
  __size269 = r271;
    unsigned long t272 = __size269;
    _Bool cast273 = (_Bool)t272;
    _Bool ternary274;
    if (cast273) {
      unsigned long t275 = __n267;
      _Bool cast276 = (_Bool)t275;
      ternary274 = (_Bool)cast276;
    } else {
      _Bool c277 = 0;
      ternary274 = (_Bool)c277;
    }
    if (ternary274) {
        unsigned long t278 = __size269;
        unsigned long u279 = t278 - 1;
        __size269 = u279;
        unsigned long t280 = __pos266;
        _Bool c281 = ((u279 > t280)) ? 1 : 0;
        if (c281) {
          unsigned long t282 = __pos266;
          __size269 = t282;
        }
        do {
              char* t283 = __s265;
              unsigned long t284 = __n267;
              unsigned long t285 = __size269;
              char* r286 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t270);
              char* ptr287 = &(r286)[t285];
              char* r288 = std__char_traits_char___find(t283, t284, ptr287);
              _Bool cast289 = (_Bool)r288;
              if (cast289) {
                unsigned long t290 = __size269;
                __retval268 = t290;
                unsigned long t291 = __retval268;
                unsigned long ret_val292 = t291;
                return ret_val292;
              }
          unsigned long t293 = __size269;
          unsigned long u294 = t293 - 1;
          __size269 = u294;
          unsigned long c295 = 0;
          _Bool c296 = ((t293 != c295)) ? 1 : 0;
          if (!c296) break;
        } while (1);
    }
  unsigned long t297 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
  __retval268 = t297;
  unsigned long t298 = __retval268;
  return t298;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12find_last_ofEPKcm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_last_of_char_const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v299, char* v300, unsigned long v301) {
bb302:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this303;
  char* __s304;
  unsigned long __pos305;
  unsigned long __retval306;
  this303 = v299;
  __s304 = v300;
  __pos305 = v301;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t307 = this303;
  char* t308 = __s304;
  unsigned long t309 = __pos305;
  char* t310 = __s304;
  unsigned long r311 = std__char_traits_char___length(t310);
  unsigned long r312 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_last_of_char_const___unsigned_long__unsigned_long__const(t307, t308, t309, r311);
  __retval306 = r312;
  unsigned long t313 = __retval306;
  return t313;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v314, unsigned long v315, char* v316) {
bb317:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this318;
  unsigned long __pos319;
  char* __s320;
  unsigned long __retval321;
  this318 = v314;
  __pos319 = v315;
  __s320 = v316;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t322 = this318;
    unsigned long t323 = __pos319;
    unsigned long r324 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t322);
    _Bool c325 = ((t323 > r324)) ? 1 : 0;
    if (c325) {
      char* cast326 = (char*)&(_str_14);
      char* t327 = __s320;
      unsigned long t328 = __pos319;
      unsigned long r329 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t322);
      std____throw_out_of_range_fmt(cast326, t327, t328, r329);
    }
  unsigned long t330 = __pos319;
  __retval321 = t330;
  unsigned long t331 = __retval321;
  return t331;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS4_mm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v332, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v333, unsigned long v334, unsigned long v335) {
bb336:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this337;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str338;
  unsigned long __pos339;
  unsigned long __n340;
  struct std__allocator_char_ ref_tmp0341;
  char* __start342;
  struct std__forward_iterator_tag agg_tmp0343;
  this337 = v332;
  __str338 = v333;
  __pos339 = v334;
  __n340 = v335;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t344 = this337;
  char* r345 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t344);
  std__allocator_char___allocator_2(&ref_tmp0341);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t344->_M_dataplus, r345, &ref_tmp0341);
  {
    std__allocator_char____allocator(&ref_tmp0341);
  }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t346 = __str338;
    char* r347 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t346);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t348 = __str338;
    unsigned long t349 = __pos339;
    char* cast350 = (char*)&(_str_15);
    unsigned long r351 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t348, t349, cast350);
    char* ptr352 = &(r347)[r351];
    __start342 = ptr352;
    char* t353 = __start342;
    char* t354 = __start342;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t355 = __str338;
    unsigned long t356 = __pos339;
    unsigned long t357 = __n340;
    unsigned long r358 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t355, t356, t357);
    char* ptr359 = &(t354)[r358];
    struct std__forward_iterator_tag t360 = agg_tmp0343;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t344, t353, ptr359, t360);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6substrEmm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v361, unsigned long v362, unsigned long v363) {
bb364:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this365;
  unsigned long __pos366;
  unsigned long __n367;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval368;
  this365 = v361;
  __pos366 = v362;
  __n367 = v363;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t369 = this365;
  unsigned long t370 = __pos366;
  char* cast371 = (char*)&(_str_13);
  unsigned long r372 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t369, t370, cast371);
  unsigned long t373 = __n367;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&__retval368, t369, r372, t373);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t374 = __retval368;
  return t374;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v375) {
bb376:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this377;
  this377 = v375;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t378 = this377;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t378);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t378->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb379:
  int __retval380;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str1381;
  struct std__allocator_char_ ref_tmp0382;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2383;
  struct std__allocator_char_ ref_tmp1384;
  unsigned long found385;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp2386;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup387;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp3388;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup389;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp4390;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup391;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp5392;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup393;
  int c394 = 0;
  __retval380 = c394;
  char* cast395 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0382);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str1381, cast395, &ref_tmp0382);
  {
    std__allocator_char____allocator(&ref_tmp0382);
  }
    char* cast396 = (char*)&(_str_1);
    std__allocator_char___allocator_2(&ref_tmp1384);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str2383, cast396, &ref_tmp1384);
    {
      std__allocator_char____allocator(&ref_tmp1384);
    }
      char* cast397 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* r398 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast397);
      struct std__basic_ostream_char__std__char_traits_char__* r399 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r398, &str1381);
      struct std__basic_ostream_char__std__char_traits_char__* r400 = std__ostream__operator___std__ostream_____(r399, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      char* cast401 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* r402 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast401);
      struct std__basic_ostream_char__std__char_traits_char__* r403 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r402, &str2383);
      struct std__basic_ostream_char__std__char_traits_char__* r404 = std__ostream__operator___std__ostream_____(r403, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      char* cast405 = (char*)&(_str_4);
      unsigned long t406 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
      unsigned long r407 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_last_of_char_const___unsigned_long__const(&str1381, cast405, t406);
      found385 = r407;
      unsigned long t408 = found385;
      int cast409 = (int)t408;
      int c410 = 8;
      _Bool c411 = ((cast409 == c410)) ? 1 : 0;
      if (c411) {
      } else {
        char* cast412 = (char*)&(_str_5);
        char* c413 = _str_6;
        unsigned int c414 = 25;
        char* cast415 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast412, c413, c414, cast415);
      }
      char* cast416 = (char*)&(_str_7);
      struct std__basic_ostream_char__std__char_traits_char__* r417 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast416);
      unsigned long c418 = 0;
      unsigned long t419 = found385;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r420 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&str1381, c418, t419);
      ref_tmp2386 = r420;
        struct std__basic_ostream_char__std__char_traits_char__* r421 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r417, &ref_tmp2386);
        struct std__basic_ostream_char__std__char_traits_char__* r422 = std__ostream__operator___std__ostream_____(r421, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        tmp_exprcleanup387 = r422;
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp2386);
      }
      struct std__basic_ostream_char__std__char_traits_char__* t423 = tmp_exprcleanup387;
      char* cast424 = (char*)&(_str_8);
      struct std__basic_ostream_char__std__char_traits_char__* r425 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast424);
      unsigned long t426 = found385;
      unsigned long c427 = 1;
      unsigned long b428 = t426 + c427;
      unsigned long t429 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r430 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&str1381, b428, t429);
      ref_tmp3388 = r430;
        struct std__basic_ostream_char__std__char_traits_char__* r431 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r425, &ref_tmp3388);
        struct std__basic_ostream_char__std__char_traits_char__* r432 = std__ostream__operator___std__ostream_____(r431, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        tmp_exprcleanup389 = r432;
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp3388);
      }
      struct std__basic_ostream_char__std__char_traits_char__* t433 = tmp_exprcleanup389;
      char* cast434 = (char*)&(_str_9);
      struct std__basic_ostream_char__std__char_traits_char__* r435 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast434);
      struct std__basic_ostream_char__std__char_traits_char__* r436 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r435, &str2383);
      struct std__basic_ostream_char__std__char_traits_char__* r437 = std__ostream__operator___std__ostream_____(r436, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      char* cast438 = (char*)&(_str_4);
      unsigned long t439 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
      unsigned long r440 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_last_of_char_const___unsigned_long__const(&str2383, cast438, t439);
      found385 = r440;
      unsigned long t441 = found385;
      int cast442 = (int)t441;
      int c443 = 10;
      _Bool c444 = ((cast442 == c443)) ? 1 : 0;
      if (c444) {
      } else {
        char* cast445 = (char*)&(_str_10);
        char* c446 = _str_6;
        unsigned int c447 = 32;
        char* cast448 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast445, c446, c447, cast448);
      }
      char* cast449 = (char*)&(_str_7);
      struct std__basic_ostream_char__std__char_traits_char__* r450 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast449);
      unsigned long c451 = 0;
      unsigned long t452 = found385;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r453 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&str2383, c451, t452);
      ref_tmp4390 = r453;
        struct std__basic_ostream_char__std__char_traits_char__* r454 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r450, &ref_tmp4390);
        struct std__basic_ostream_char__std__char_traits_char__* r455 = std__ostream__operator___std__ostream_____(r454, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        tmp_exprcleanup391 = r455;
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp4390);
      }
      struct std__basic_ostream_char__std__char_traits_char__* t456 = tmp_exprcleanup391;
      char* cast457 = (char*)&(_str_8);
      struct std__basic_ostream_char__std__char_traits_char__* r458 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast457);
      unsigned long t459 = found385;
      unsigned long c460 = 1;
      unsigned long b461 = t459 + c460;
      unsigned long t462 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r463 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&str2383, b461, t462);
      ref_tmp5392 = r463;
        struct std__basic_ostream_char__std__char_traits_char__* r464 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r458, &ref_tmp5392);
        struct std__basic_ostream_char__std__char_traits_char__* r465 = std__ostream__operator___std__ostream_____(r464, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        tmp_exprcleanup393 = r465;
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp5392);
      }
      struct std__basic_ostream_char__std__char_traits_char__* t466 = tmp_exprcleanup393;
      int c467 = 0;
      __retval380 = c467;
      int t468 = __retval380;
      int ret_val469 = t468;
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str2383);
      }
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str1381);
      }
      return ret_val469;
  int t470 = __retval380;
  return t470;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v471) {
bb472:
  struct std____new_allocator_char_* this473;
  this473 = v471;
  struct std____new_allocator_char_* t474 = this473;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v475) {
bb476:
  char* __r477;
  char* __retval478;
  __r477 = v475;
  char* t479 = __r477;
  __retval478 = t479;
  char* t480 = __retval478;
  return t480;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v481) {
bb482:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this483;
  char* __retval484;
  this483 = v481;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t485 = this483;
  char* cast486 = (char*)&(t485->field2._M_local_buf);
  char* r487 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast486);
  __retval484 = r487;
  char* t488 = __retval484;
  return t488;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v489, char* v490, struct std__allocator_char_* v491) {
bb492:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this493;
  char* __dat494;
  struct std__allocator_char_* __a495;
  this493 = v489;
  __dat494 = v490;
  __a495 = v491;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t496 = this493;
  struct std__allocator_char_* base497 = (struct std__allocator_char_*)((char *)t496 + 0);
  struct std__allocator_char_* t498 = __a495;
  std__allocator_char___allocator(base497, t498);
    char* t499 = __dat494;
    t496->_M_p = t499;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb500:
  _Bool __retval501;
    _Bool c502 = 0;
    __retval501 = c502;
    _Bool t503 = __retval501;
    return t503;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v504, char* v505) {
bb506:
  char* __c1507;
  char* __c2508;
  _Bool __retval509;
  __c1507 = v504;
  __c2508 = v505;
  char* t510 = __c1507;
  char t511 = *t510;
  int cast512 = (int)t511;
  char* t513 = __c2508;
  char t514 = *t513;
  int cast515 = (int)t514;
  _Bool c516 = ((cast512 == cast515)) ? 1 : 0;
  __retval509 = c516;
  _Bool t517 = __retval509;
  return t517;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v518) {
bb519:
  char* __p520;
  unsigned long __retval521;
  unsigned long __i522;
  __p520 = v518;
  unsigned long c523 = 0;
  __i522 = c523;
    char ref_tmp0524;
    while (1) {
      unsigned long t525 = __i522;
      char* t526 = __p520;
      char* ptr527 = &(t526)[t525];
      char c528 = 0;
      ref_tmp0524 = c528;
      _Bool r529 = __gnu_cxx__char_traits_char___eq(ptr527, &ref_tmp0524);
      _Bool u530 = !r529;
      if (!u530) break;
      unsigned long t531 = __i522;
      unsigned long u532 = t531 + 1;
      __i522 = u532;
    }
  unsigned long t533 = __i522;
  __retval521 = t533;
  unsigned long t534 = __retval521;
  return t534;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v535) {
bb536:
  char* __s537;
  unsigned long __retval538;
  __s537 = v535;
    _Bool r539 = std____is_constant_evaluated();
    if (r539) {
      char* t540 = __s537;
      unsigned long r541 = __gnu_cxx__char_traits_char___length(t540);
      __retval538 = r541;
      unsigned long t542 = __retval538;
      return t542;
    }
  char* t543 = __s537;
  unsigned long r544 = strlen(t543);
  __retval538 = r544;
  unsigned long t545 = __retval538;
  return t545;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v546, char* v547, struct std__random_access_iterator_tag v548) {
bb549:
  char* __first550;
  char* __last551;
  struct std__random_access_iterator_tag unnamed552;
  long __retval553;
  __first550 = v546;
  __last551 = v547;
  unnamed552 = v548;
  char* t554 = __last551;
  char* t555 = __first550;
  long diff556 = t554 - t555;
  __retval553 = diff556;
  long t557 = __retval553;
  return t557;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v558) {
bb559:
  char** unnamed560;
  struct std__random_access_iterator_tag __retval561;
  unnamed560 = v558;
  struct std__random_access_iterator_tag t562 = __retval561;
  return t562;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v563, char* v564) {
bb565:
  char* __first566;
  char* __last567;
  long __retval568;
  struct std__random_access_iterator_tag agg_tmp0569;
  __first566 = v563;
  __last567 = v564;
  char* t570 = __first566;
  char* t571 = __last567;
  struct std__random_access_iterator_tag r572 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first566);
  agg_tmp0569 = r572;
  struct std__random_access_iterator_tag t573 = agg_tmp0569;
  long r574 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t570, t571, t573);
  __retval568 = r574;
  long t575 = __retval568;
  return t575;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v576, char* v577) {
bb578:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this579;
  char* __p580;
  this579 = v576;
  __p580 = v577;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t581 = this579;
  char* t582 = __p580;
  t581->_M_dataplus._M_p = t582;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v583) {
bb584:
  struct std__allocator_char_* __a585;
  unsigned long __retval586;
  __a585 = v583;
  unsigned long c587 = -1;
  unsigned long c588 = 1;
  unsigned long b589 = c587 / c588;
  __retval586 = b589;
  unsigned long t590 = __retval586;
  return t590;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v591) {
bb592:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this593;
  struct std__allocator_char_* __retval594;
  this593 = v591;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t595 = this593;
  struct std__allocator_char_* base596 = (struct std__allocator_char_*)((char *)&(t595->_M_dataplus) + 0);
  __retval594 = base596;
  struct std__allocator_char_* t597 = __retval594;
  return t597;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v598, unsigned long* v599) {
bb600:
  unsigned long* __a601;
  unsigned long* __b602;
  unsigned long* __retval603;
  __a601 = v598;
  __b602 = v599;
    unsigned long* t604 = __b602;
    unsigned long t605 = *t604;
    unsigned long* t606 = __a601;
    unsigned long t607 = *t606;
    _Bool c608 = ((t605 < t607)) ? 1 : 0;
    if (c608) {
      unsigned long* t609 = __b602;
      __retval603 = t609;
      unsigned long* t610 = __retval603;
      return t610;
    }
  unsigned long* t611 = __a601;
  __retval603 = t611;
  unsigned long* t612 = __retval603;
  return t612;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v613) {
bb614:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this615;
  unsigned long __retval616;
  unsigned long __diffmax617;
  unsigned long __allocmax618;
  this615 = v613;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t619 = this615;
  unsigned long c620 = 9223372036854775807;
  __diffmax617 = c620;
  struct std__allocator_char_* r621 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t619);
  unsigned long r622 = std__allocator_traits_std__allocator_char_____max_size(r621);
  __allocmax618 = r622;
  unsigned long* r623 = unsigned_long_const__std__min_unsigned_long_(&__diffmax617, &__allocmax618);
  unsigned long t624 = *r623;
  unsigned long c625 = 1;
  unsigned long b626 = t624 - c625;
  __retval616 = b626;
  unsigned long t627 = __retval616;
  return t627;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v628) {
bb629:
  struct std____new_allocator_char_* this630;
  unsigned long __retval631;
  this630 = v628;
  struct std____new_allocator_char_* t632 = this630;
  unsigned long c633 = 9223372036854775807;
  unsigned long c634 = 1;
  unsigned long b635 = c633 / c634;
  __retval631 = b635;
  unsigned long t636 = __retval631;
  return t636;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v637, unsigned long v638, void* v639) {
bb640:
  struct std____new_allocator_char_* this641;
  unsigned long __n642;
  void* unnamed643;
  char* __retval644;
  this641 = v637;
  __n642 = v638;
  unnamed643 = v639;
  struct std____new_allocator_char_* t645 = this641;
    unsigned long t646 = __n642;
    unsigned long r647 = std____new_allocator_char____M_max_size___const(t645);
    _Bool c648 = ((t646 > r647)) ? 1 : 0;
    if (c648) {
        unsigned long t649 = __n642;
        unsigned long c650 = -1;
        unsigned long c651 = 1;
        unsigned long b652 = c650 / c651;
        _Bool c653 = ((t649 > b652)) ? 1 : 0;
        if (c653) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c654 = 1;
    unsigned long c655 = 16;
    _Bool c656 = ((c654 > c655)) ? 1 : 0;
    if (c656) {
      unsigned long __al657;
      unsigned long c658 = 1;
      __al657 = c658;
      unsigned long t659 = __n642;
      unsigned long c660 = 1;
      unsigned long b661 = t659 * c660;
      unsigned long t662 = __al657;
      void* r663 = operator_new_2(b661, t662);
      char* cast664 = (char*)r663;
      __retval644 = cast664;
      char* t665 = __retval644;
      return t665;
    }
  unsigned long t666 = __n642;
  unsigned long c667 = 1;
  unsigned long b668 = t666 * c667;
  void* r669 = operator_new(b668);
  char* cast670 = (char*)r669;
  __retval644 = cast670;
  char* t671 = __retval644;
  return t671;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v672, unsigned long v673) {
bb674:
  struct std__allocator_char_* this675;
  unsigned long __n676;
  char* __retval677;
  this675 = v672;
  __n676 = v673;
  struct std__allocator_char_* t678 = this675;
    _Bool r679 = std____is_constant_evaluated();
    if (r679) {
        unsigned long t680 = __n676;
        unsigned long c681 = 1;
        unsigned long ovr682;
        _Bool ovf683 = __builtin_mul_overflow(t680, c681, &ovr682);
        __n676 = ovr682;
        if (ovf683) {
          std____throw_bad_array_new_length();
        }
      unsigned long t684 = __n676;
      void* r685 = operator_new(t684);
      char* cast686 = (char*)r685;
      __retval677 = cast686;
      char* t687 = __retval677;
      return t687;
    }
  struct std____new_allocator_char_* base688 = (struct std____new_allocator_char_*)((char *)t678 + 0);
  unsigned long t689 = __n676;
  void* c690 = ((void*)0);
  char* r691 = std____new_allocator_char___allocate(base688, t689, c690);
  __retval677 = r691;
  char* t692 = __retval677;
  return t692;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v693, unsigned long v694) {
bb695:
  struct std__allocator_char_* __a696;
  unsigned long __n697;
  char* __retval698;
  __a696 = v693;
  __n697 = v694;
  struct std__allocator_char_* t699 = __a696;
  unsigned long t700 = __n697;
  char* r701 = std__allocator_char___allocate(t699, t700);
  __retval698 = r701;
  char* t702 = __retval698;
  return t702;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v703, unsigned long v704) {
bb705:
  struct std__allocator_char_* __a706;
  unsigned long __n707;
  char* __retval708;
  char* __p709;
  __a706 = v703;
  __n707 = v704;
  struct std__allocator_char_* t710 = __a706;
  unsigned long t711 = __n707;
  char* r712 = std__allocator_traits_std__allocator_char_____allocate(t710, t711);
  __p709 = r712;
  char* t713 = __p709;
  __retval708 = t713;
  char* t714 = __retval708;
  return t714;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v715) {
bb716:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this717;
  struct std__allocator_char_* __retval718;
  this717 = v715;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t719 = this717;
  struct std__allocator_char_* base720 = (struct std__allocator_char_*)((char *)&(t719->_M_dataplus) + 0);
  __retval718 = base720;
  struct std__allocator_char_* t721 = __retval718;
  return t721;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v722, unsigned long* v723, unsigned long v724) {
bb725:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this726;
  unsigned long* __capacity727;
  unsigned long __old_capacity728;
  char* __retval729;
  this726 = v722;
  __capacity727 = v723;
  __old_capacity728 = v724;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t730 = this726;
    unsigned long* t731 = __capacity727;
    unsigned long t732 = *t731;
    unsigned long r733 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t730);
    _Bool c734 = ((t732 > r733)) ? 1 : 0;
    if (c734) {
      char* cast735 = (char*)&(_str_12);
      std____throw_length_error(cast735);
    }
    unsigned long* t736 = __capacity727;
    unsigned long t737 = *t736;
    unsigned long t738 = __old_capacity728;
    _Bool c739 = ((t737 > t738)) ? 1 : 0;
    _Bool ternary740;
    if (c739) {
      unsigned long* t741 = __capacity727;
      unsigned long t742 = *t741;
      unsigned long c743 = 2;
      unsigned long t744 = __old_capacity728;
      unsigned long b745 = c743 * t744;
      _Bool c746 = ((t742 < b745)) ? 1 : 0;
      ternary740 = (_Bool)c746;
    } else {
      _Bool c747 = 0;
      ternary740 = (_Bool)c747;
    }
    if (ternary740) {
      unsigned long c748 = 2;
      unsigned long t749 = __old_capacity728;
      unsigned long b750 = c748 * t749;
      unsigned long* t751 = __capacity727;
      *t751 = b750;
        unsigned long* t752 = __capacity727;
        unsigned long t753 = *t752;
        unsigned long r754 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t730);
        _Bool c755 = ((t753 > r754)) ? 1 : 0;
        if (c755) {
          unsigned long r756 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t730);
          unsigned long* t757 = __capacity727;
          *t757 = r756;
        }
    }
  struct std__allocator_char_* r758 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t730);
  unsigned long* t759 = __capacity727;
  unsigned long t760 = *t759;
  unsigned long c761 = 1;
  unsigned long b762 = t760 + c761;
  char* r763 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r758, b762);
  __retval729 = r763;
  char* t764 = __retval729;
  return t764;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v765, unsigned long v766) {
bb767:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this768;
  unsigned long __capacity769;
  this768 = v765;
  __capacity769 = v766;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t770 = this768;
  unsigned long t771 = __capacity769;
  t770->field2._M_allocated_capacity = t771;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb772:
  _Bool __retval773;
    _Bool c774 = 0;
    __retval773 = c774;
    _Bool t775 = __retval773;
    return t775;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v776) {
bb777:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this778;
  this778 = v776;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t779 = this778;
    _Bool r780 = std__is_constant_evaluated();
    if (r780) {
        unsigned long __i781;
        unsigned long c782 = 0;
        __i781 = c782;
        while (1) {
          unsigned long t784 = __i781;
          unsigned long c785 = 15;
          _Bool c786 = ((t784 <= c785)) ? 1 : 0;
          if (!c786) break;
          char c787 = 0;
          unsigned long t788 = __i781;
          t779->field2._M_local_buf[t788] = c787;
        for_step783: ;
          unsigned long t789 = __i781;
          unsigned long u790 = t789 + 1;
          __i781 = u790;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v791, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v792) {
bb793:
  struct _Guard* this794;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s795;
  this794 = v791;
  __s795 = v792;
  struct _Guard* t796 = this794;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t797 = __s795;
  t796->_M_guarded = t797;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v798, char* v799) {
bb800:
  char* __location801;
  char* __args802;
  char* __retval803;
  void* __loc804;
  __location801 = v798;
  __args802 = v799;
  char* t805 = __location801;
  void* cast806 = (void*)t805;
  __loc804 = cast806;
    void* t807 = __loc804;
    char* cast808 = (char*)t807;
    char* t809 = __args802;
    char t810 = *t809;
    *cast808 = t810;
    __retval803 = cast808;
    char* t811 = __retval803;
    return t811;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v812, char* v813) {
bb814:
  char* __c1815;
  char* __c2816;
  __c1815 = v812;
  __c2816 = v813;
    _Bool r817 = std____is_constant_evaluated();
    if (r817) {
      char* t818 = __c1815;
      char* t819 = __c2816;
      char* r820 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t818, t819);
    } else {
      char* t821 = __c2816;
      char t822 = *t821;
      char* t823 = __c1815;
      *t823 = t822;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v824, char* v825, unsigned long v826) {
bb827:
  char* __s1828;
  char* __s2829;
  unsigned long __n830;
  char* __retval831;
  __s1828 = v824;
  __s2829 = v825;
  __n830 = v826;
    unsigned long t832 = __n830;
    unsigned long c833 = 0;
    _Bool c834 = ((t832 == c833)) ? 1 : 0;
    if (c834) {
      char* t835 = __s1828;
      __retval831 = t835;
      char* t836 = __retval831;
      return t836;
    }
    _Bool r837 = std____is_constant_evaluated();
    if (r837) {
        unsigned long __i838;
        unsigned long c839 = 0;
        __i838 = c839;
        while (1) {
          unsigned long t841 = __i838;
          unsigned long t842 = __n830;
          _Bool c843 = ((t841 < t842)) ? 1 : 0;
          if (!c843) break;
          char* t844 = __s1828;
          unsigned long t845 = __i838;
          char* ptr846 = &(t844)[t845];
          unsigned long t847 = __i838;
          char* t848 = __s2829;
          char* ptr849 = &(t848)[t847];
          char* r850 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr846, ptr849);
        for_step840: ;
          unsigned long t851 = __i838;
          unsigned long u852 = t851 + 1;
          __i838 = u852;
        }
      char* t853 = __s1828;
      __retval831 = t853;
      char* t854 = __retval831;
      return t854;
    }
  char* t855 = __s1828;
  void* cast856 = (void*)t855;
  char* t857 = __s2829;
  void* cast858 = (void*)t857;
  unsigned long t859 = __n830;
  unsigned long c860 = 1;
  unsigned long b861 = t859 * c860;
  void* r862 = memcpy(cast856, cast858, b861);
  char* t863 = __s1828;
  __retval831 = t863;
  char* t864 = __retval831;
  return t864;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v865, char* v866, unsigned long v867) {
bb868:
  char* __s1869;
  char* __s2870;
  unsigned long __n871;
  char* __retval872;
  __s1869 = v865;
  __s2870 = v866;
  __n871 = v867;
    unsigned long t873 = __n871;
    unsigned long c874 = 0;
    _Bool c875 = ((t873 == c874)) ? 1 : 0;
    if (c875) {
      char* t876 = __s1869;
      __retval872 = t876;
      char* t877 = __retval872;
      return t877;
    }
    _Bool r878 = std____is_constant_evaluated();
    if (r878) {
      char* t879 = __s1869;
      char* t880 = __s2870;
      unsigned long t881 = __n871;
      char* r882 = __gnu_cxx__char_traits_char___copy(t879, t880, t881);
      __retval872 = r882;
      char* t883 = __retval872;
      return t883;
    }
  char* t884 = __s1869;
  void* cast885 = (void*)t884;
  char* t886 = __s2870;
  void* cast887 = (void*)t886;
  unsigned long t888 = __n871;
  void* r889 = memcpy(cast885, cast887, t888);
  char* cast890 = (char*)r889;
  __retval872 = cast890;
  char* t891 = __retval872;
  return t891;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v892, char* v893, unsigned long v894) {
bb895:
  char* __d896;
  char* __s897;
  unsigned long __n898;
  __d896 = v892;
  __s897 = v893;
  __n898 = v894;
    unsigned long t899 = __n898;
    unsigned long c900 = 1;
    _Bool c901 = ((t899 == c900)) ? 1 : 0;
    if (c901) {
      char* t902 = __d896;
      char* t903 = __s897;
      std__char_traits_char___assign(t902, t903);
    } else {
      char* t904 = __d896;
      char* t905 = __s897;
      unsigned long t906 = __n898;
      char* r907 = std__char_traits_char___copy(t904, t905, t906);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v908) {
bb909:
  char* __it910;
  char* __retval911;
  __it910 = v908;
  char* t912 = __it910;
  __retval911 = t912;
  char* t913 = __retval911;
  return t913;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v914, char* v915, char* v916) {
bb917:
  char* __p918;
  char* __k1919;
  char* __k2920;
  __p918 = v914;
  __k1919 = v915;
  __k2920 = v916;
    char* t921 = __p918;
    char* t922 = __k1919;
    char* r923 = char_const__std____niter_base_char_const__(t922);
    char* t924 = __k2920;
    char* t925 = __k1919;
    long diff926 = t924 - t925;
    unsigned long cast927 = (unsigned long)diff926;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t921, r923, cast927);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v928) {
bb929:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this930;
  char* __retval931;
  this930 = v928;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t932 = this930;
  char* t933 = t932->_M_dataplus._M_p;
  __retval931 = t933;
  char* t934 = __retval931;
  return t934;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v935, unsigned long v936) {
bb937:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this938;
  unsigned long __length939;
  this938 = v935;
  __length939 = v936;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t940 = this938;
  unsigned long t941 = __length939;
  t940->_M_string_length = t941;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v942, unsigned long v943) {
bb944:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this945;
  unsigned long __n946;
  char ref_tmp0947;
  this945 = v942;
  __n946 = v943;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t948 = this945;
  unsigned long t949 = __n946;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t948, t949);
  unsigned long t950 = __n946;
  char* r951 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t948);
  char* ptr952 = &(r951)[t950];
  char c953 = 0;
  ref_tmp0947 = c953;
  std__char_traits_char___assign(ptr952, &ref_tmp0947);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v954) {
bb955:
  struct _Guard* this956;
  this956 = v954;
  struct _Guard* t957 = this956;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t958 = t957->_M_guarded;
    _Bool cast959 = (_Bool)t958;
    if (cast959) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t960 = t957->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t960);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v961, char* v962, char* v963, struct std__forward_iterator_tag v964) {
bb965:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this966;
  char* __beg967;
  char* __end968;
  struct std__forward_iterator_tag unnamed969;
  unsigned long __dnew970;
  struct _Guard __guard971;
  this966 = v961;
  __beg967 = v962;
  __end968 = v963;
  unnamed969 = v964;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t972 = this966;
  char* t973 = __beg967;
  char* t974 = __end968;
  long r975 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t973, t974);
  unsigned long cast976 = (unsigned long)r975;
  __dnew970 = cast976;
    unsigned long t977 = __dnew970;
    unsigned long c978 = 15;
    _Bool c979 = ((t977 > c978)) ? 1 : 0;
    if (c979) {
      unsigned long c980 = 0;
      char* r981 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t972, &__dnew970, c980);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t972, r981);
      unsigned long t982 = __dnew970;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t972, t982);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t972);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard971, t972);
    char* r983 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t972);
    char* t984 = __beg967;
    char* t985 = __end968;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r983, t984, t985);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c986 = ((void*)0);
    __guard971._M_guarded = c986;
    unsigned long t987 = __dnew970;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t972, t987);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard971);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v988) {
bb989:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this990;
  this990 = v988;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t991 = this990;
  {
    struct std__allocator_char_* base992 = (struct std__allocator_char_*)((char *)t991 + 0);
    std__allocator_char____allocator(base992);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v993, struct std____new_allocator_char_* v994) {
bb995:
  struct std____new_allocator_char_* this996;
  struct std____new_allocator_char_* unnamed997;
  this996 = v993;
  unnamed997 = v994;
  struct std____new_allocator_char_* t998 = this996;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v999, struct std__allocator_char_* v1000) {
bb1001:
  struct std__allocator_char_* this1002;
  struct std__allocator_char_* __a1003;
  this1002 = v999;
  __a1003 = v1000;
  struct std__allocator_char_* t1004 = this1002;
  struct std____new_allocator_char_* base1005 = (struct std____new_allocator_char_*)((char *)t1004 + 0);
  struct std__allocator_char_* t1006 = __a1003;
  struct std____new_allocator_char_* base1007 = (struct std____new_allocator_char_*)((char *)t1006 + 0);
  std____new_allocator_char_____new_allocator(base1005, base1007);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1008) {
bb1009:
  char* __r1010;
  char* __retval1011;
  __r1010 = v1008;
  char* t1012 = __r1010;
  __retval1011 = t1012;
  char* t1013 = __retval1011;
  return t1013;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1014) {
bb1015:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1016;
  char* __retval1017;
  this1016 = v1014;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1018 = this1016;
  char* cast1019 = (char*)&(t1018->field2._M_local_buf);
  char* r1020 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1019);
  __retval1017 = r1020;
  char* t1021 = __retval1017;
  return t1021;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1022) {
bb1023:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1024;
  _Bool __retval1025;
  this1024 = v1022;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1026 = this1024;
    char* r1027 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1026);
    char* r1028 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1026);
    _Bool c1029 = ((r1027 == r1028)) ? 1 : 0;
    if (c1029) {
        unsigned long t1030 = t1026->_M_string_length;
        unsigned long c1031 = 15;
        _Bool c1032 = ((t1030 > c1031)) ? 1 : 0;
        if (c1032) {
          __builtin_unreachable();
        }
      _Bool c1033 = 1;
      __retval1025 = c1033;
      _Bool t1034 = __retval1025;
      return t1034;
    }
  _Bool c1035 = 0;
  __retval1025 = c1035;
  _Bool t1036 = __retval1025;
  return t1036;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1037, char* v1038, unsigned long v1039) {
bb1040:
  struct std____new_allocator_char_* this1041;
  char* __p1042;
  unsigned long __n1043;
  this1041 = v1037;
  __p1042 = v1038;
  __n1043 = v1039;
  struct std____new_allocator_char_* t1044 = this1041;
    unsigned long c1045 = 1;
    unsigned long c1046 = 16;
    _Bool c1047 = ((c1045 > c1046)) ? 1 : 0;
    if (c1047) {
      char* t1048 = __p1042;
      void* cast1049 = (void*)t1048;
      unsigned long t1050 = __n1043;
      unsigned long c1051 = 1;
      unsigned long b1052 = t1050 * c1051;
      unsigned long c1053 = 1;
      operator_delete_3(cast1049, b1052, c1053);
      return;
    }
  char* t1054 = __p1042;
  void* cast1055 = (void*)t1054;
  unsigned long t1056 = __n1043;
  unsigned long c1057 = 1;
  unsigned long b1058 = t1056 * c1057;
  operator_delete_2(cast1055, b1058);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1059, char* v1060, unsigned long v1061) {
bb1062:
  struct std__allocator_char_* this1063;
  char* __p1064;
  unsigned long __n1065;
  this1063 = v1059;
  __p1064 = v1060;
  __n1065 = v1061;
  struct std__allocator_char_* t1066 = this1063;
    _Bool r1067 = std____is_constant_evaluated();
    if (r1067) {
      char* t1068 = __p1064;
      void* cast1069 = (void*)t1068;
      operator_delete(cast1069);
      return;
    }
  struct std____new_allocator_char_* base1070 = (struct std____new_allocator_char_*)((char *)t1066 + 0);
  char* t1071 = __p1064;
  unsigned long t1072 = __n1065;
  std____new_allocator_char___deallocate(base1070, t1071, t1072);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1073, char* v1074, unsigned long v1075) {
bb1076:
  struct std__allocator_char_* __a1077;
  char* __p1078;
  unsigned long __n1079;
  __a1077 = v1073;
  __p1078 = v1074;
  __n1079 = v1075;
  struct std__allocator_char_* t1080 = __a1077;
  char* t1081 = __p1078;
  unsigned long t1082 = __n1079;
  std__allocator_char___deallocate(t1080, t1081, t1082);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1083, unsigned long v1084) {
bb1085:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1086;
  unsigned long __size1087;
  this1086 = v1083;
  __size1087 = v1084;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1088 = this1086;
  struct std__allocator_char_* r1089 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1088);
  char* r1090 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1088);
  unsigned long t1091 = __size1087;
  unsigned long c1092 = 1;
  unsigned long b1093 = t1091 + c1092;
  std__allocator_traits_std__allocator_char_____deallocate(r1089, r1090, b1093);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1094) {
bb1095:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1096;
  this1096 = v1094;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1097 = this1096;
    _Bool r1098 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1097);
    _Bool u1099 = !r1098;
    if (u1099) {
      unsigned long t1100 = t1097->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1097, t1100);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1101, char* v1102, struct std__allocator_char_* v1103) {
bb1104:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1105;
  char* __dat1106;
  struct std__allocator_char_* __a1107;
  this1105 = v1101;
  __dat1106 = v1102;
  __a1107 = v1103;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1108 = this1105;
  struct std__allocator_char_* base1109 = (struct std__allocator_char_*)((char *)t1108 + 0);
  struct std__allocator_char_* t1110 = __a1107;
  std__allocator_char___allocator(base1109, t1110);
    char* t1111 = __dat1106;
    t1108->_M_p = t1111;
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1112, unsigned long v1113, unsigned long v1114) {
bb1115:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1116;
  unsigned long __pos1117;
  unsigned long __off1118;
  unsigned long __retval1119;
  _Bool __testoff1120;
  this1116 = v1112;
  __pos1117 = v1113;
  __off1118 = v1114;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1121 = this1116;
  unsigned long t1122 = __off1118;
  unsigned long r1123 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1121);
  unsigned long t1124 = __pos1117;
  unsigned long b1125 = r1123 - t1124;
  _Bool c1126 = ((t1122 < b1125)) ? 1 : 0;
  __testoff1120 = c1126;
  _Bool t1127 = __testoff1120;
  unsigned long ternary1128;
  if (t1127) {
    unsigned long t1129 = __off1118;
    ternary1128 = (unsigned long)t1129;
  } else {
    unsigned long r1130 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1121);
    unsigned long t1131 = __pos1117;
    unsigned long b1132 = r1130 - t1131;
    ternary1128 = (unsigned long)b1132;
  }
  __retval1119 = ternary1128;
  unsigned long t1133 = __retval1119;
  return t1133;
}

