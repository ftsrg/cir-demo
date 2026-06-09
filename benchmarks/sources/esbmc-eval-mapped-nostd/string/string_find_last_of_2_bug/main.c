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
char _str_2[12] = "Splitting: ";
char _str_3[3] = "/\\";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
char _str_4[16] = "int(found) != 8";
char _str_5[120] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_find_last_of_2_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_6[10] = " folder: ";
char _str_7[8] = " file: ";
char _str_8[17] = "int(found) != 10";
char _str_9[50] = "basic_string: construction from null is not valid";
char _str_10[24] = "basic_string::_M_create";
char _str_11[21] = "basic_string::substr";
char _str_12[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_13[27] = "basic_string::basic_string";
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
        char* cast20 = (char*)&(_str_9);
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
      char* cast326 = (char*)&(_str_12);
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
    char* cast350 = (char*)&(_str_13);
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
  char* cast371 = (char*)&(_str_11);
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
      unsigned long t402 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
      unsigned long r403 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_last_of_char_const___unsigned_long__const(&str1381, cast401, t402);
      found385 = r403;
      unsigned long t404 = found385;
      int cast405 = (int)t404;
      int c406 = 8;
      _Bool c407 = ((cast405 != c406)) ? 1 : 0;
      if (c407) {
      } else {
        char* cast408 = (char*)&(_str_4);
        char* c409 = _str_5;
        unsigned int c410 = 24;
        char* cast411 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast408, c409, c410, cast411);
      }
      char* cast412 = (char*)&(_str_6);
      struct std__basic_ostream_char__std__char_traits_char__* r413 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast412);
      unsigned long c414 = 0;
      unsigned long t415 = found385;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r416 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&str1381, c414, t415);
      ref_tmp2386 = r416;
        struct std__basic_ostream_char__std__char_traits_char__* r417 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r413, &ref_tmp2386);
        struct std__basic_ostream_char__std__char_traits_char__* r418 = std__ostream__operator___std__ostream_____(r417, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        tmp_exprcleanup387 = r418;
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp2386);
      }
      struct std__basic_ostream_char__std__char_traits_char__* t419 = tmp_exprcleanup387;
      char* cast420 = (char*)&(_str_7);
      struct std__basic_ostream_char__std__char_traits_char__* r421 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast420);
      unsigned long t422 = found385;
      unsigned long c423 = 1;
      unsigned long b424 = t422 + c423;
      unsigned long t425 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r426 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&str1381, b424, t425);
      ref_tmp3388 = r426;
        struct std__basic_ostream_char__std__char_traits_char__* r427 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r421, &ref_tmp3388);
        struct std__basic_ostream_char__std__char_traits_char__* r428 = std__ostream__operator___std__ostream_____(r427, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        tmp_exprcleanup389 = r428;
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp3388);
      }
      struct std__basic_ostream_char__std__char_traits_char__* t429 = tmp_exprcleanup389;
      char* cast430 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* r431 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast430);
      struct std__basic_ostream_char__std__char_traits_char__* r432 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r431, &str2383);
      struct std__basic_ostream_char__std__char_traits_char__* r433 = std__ostream__operator___std__ostream_____(r432, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      char* cast434 = (char*)&(_str_3);
      unsigned long t435 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
      unsigned long r436 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_last_of_char_const___unsigned_long__const(&str2383, cast434, t435);
      found385 = r436;
      unsigned long t437 = found385;
      int cast438 = (int)t437;
      int c439 = 10;
      _Bool c440 = ((cast438 != c439)) ? 1 : 0;
      if (c440) {
      } else {
        char* cast441 = (char*)&(_str_8);
        char* c442 = _str_5;
        unsigned int c443 = 30;
        char* cast444 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast441, c442, c443, cast444);
      }
      char* cast445 = (char*)&(_str_6);
      struct std__basic_ostream_char__std__char_traits_char__* r446 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast445);
      unsigned long c447 = 0;
      unsigned long t448 = found385;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r449 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&str2383, c447, t448);
      ref_tmp4390 = r449;
        struct std__basic_ostream_char__std__char_traits_char__* r450 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r446, &ref_tmp4390);
        struct std__basic_ostream_char__std__char_traits_char__* r451 = std__ostream__operator___std__ostream_____(r450, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        tmp_exprcleanup391 = r451;
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp4390);
      }
      struct std__basic_ostream_char__std__char_traits_char__* t452 = tmp_exprcleanup391;
      char* cast453 = (char*)&(_str_7);
      struct std__basic_ostream_char__std__char_traits_char__* r454 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast453);
      unsigned long t455 = found385;
      unsigned long c456 = 1;
      unsigned long b457 = t455 + c456;
      unsigned long t458 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r459 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&str2383, b457, t458);
      ref_tmp5392 = r459;
        struct std__basic_ostream_char__std__char_traits_char__* r460 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r454, &ref_tmp5392);
        struct std__basic_ostream_char__std__char_traits_char__* r461 = std__ostream__operator___std__ostream_____(r460, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        tmp_exprcleanup393 = r461;
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp5392);
      }
      struct std__basic_ostream_char__std__char_traits_char__* t462 = tmp_exprcleanup393;
      int c463 = 0;
      __retval380 = c463;
      int t464 = __retval380;
      int ret_val465 = t464;
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str2383);
      }
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str1381);
      }
      return ret_val465;
  int t466 = __retval380;
  return t466;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v467) {
bb468:
  struct std____new_allocator_char_* this469;
  this469 = v467;
  struct std____new_allocator_char_* t470 = this469;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v471) {
bb472:
  char* __r473;
  char* __retval474;
  __r473 = v471;
  char* t475 = __r473;
  __retval474 = t475;
  char* t476 = __retval474;
  return t476;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v477) {
bb478:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this479;
  char* __retval480;
  this479 = v477;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t481 = this479;
  char* cast482 = (char*)&(t481->field2._M_local_buf);
  char* r483 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast482);
  __retval480 = r483;
  char* t484 = __retval480;
  return t484;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v485, char* v486, struct std__allocator_char_* v487) {
bb488:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this489;
  char* __dat490;
  struct std__allocator_char_* __a491;
  this489 = v485;
  __dat490 = v486;
  __a491 = v487;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t492 = this489;
  struct std__allocator_char_* base493 = (struct std__allocator_char_*)((char *)t492 + 0);
  struct std__allocator_char_* t494 = __a491;
  std__allocator_char___allocator(base493, t494);
    char* t495 = __dat490;
    t492->_M_p = t495;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb496:
  _Bool __retval497;
    _Bool c498 = 0;
    __retval497 = c498;
    _Bool t499 = __retval497;
    return t499;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v500, char* v501) {
bb502:
  char* __c1503;
  char* __c2504;
  _Bool __retval505;
  __c1503 = v500;
  __c2504 = v501;
  char* t506 = __c1503;
  char t507 = *t506;
  int cast508 = (int)t507;
  char* t509 = __c2504;
  char t510 = *t509;
  int cast511 = (int)t510;
  _Bool c512 = ((cast508 == cast511)) ? 1 : 0;
  __retval505 = c512;
  _Bool t513 = __retval505;
  return t513;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v514) {
bb515:
  char* __p516;
  unsigned long __retval517;
  unsigned long __i518;
  __p516 = v514;
  unsigned long c519 = 0;
  __i518 = c519;
    char ref_tmp0520;
    while (1) {
      unsigned long t521 = __i518;
      char* t522 = __p516;
      char* ptr523 = &(t522)[t521];
      char c524 = 0;
      ref_tmp0520 = c524;
      _Bool r525 = __gnu_cxx__char_traits_char___eq(ptr523, &ref_tmp0520);
      _Bool u526 = !r525;
      if (!u526) break;
      unsigned long t527 = __i518;
      unsigned long u528 = t527 + 1;
      __i518 = u528;
    }
  unsigned long t529 = __i518;
  __retval517 = t529;
  unsigned long t530 = __retval517;
  return t530;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v531) {
bb532:
  char* __s533;
  unsigned long __retval534;
  __s533 = v531;
    _Bool r535 = std____is_constant_evaluated();
    if (r535) {
      char* t536 = __s533;
      unsigned long r537 = __gnu_cxx__char_traits_char___length(t536);
      __retval534 = r537;
      unsigned long t538 = __retval534;
      return t538;
    }
  char* t539 = __s533;
  unsigned long r540 = strlen(t539);
  __retval534 = r540;
  unsigned long t541 = __retval534;
  return t541;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v542, char* v543, struct std__random_access_iterator_tag v544) {
bb545:
  char* __first546;
  char* __last547;
  struct std__random_access_iterator_tag unnamed548;
  long __retval549;
  __first546 = v542;
  __last547 = v543;
  unnamed548 = v544;
  char* t550 = __last547;
  char* t551 = __first546;
  long diff552 = t550 - t551;
  __retval549 = diff552;
  long t553 = __retval549;
  return t553;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v554) {
bb555:
  char** unnamed556;
  struct std__random_access_iterator_tag __retval557;
  unnamed556 = v554;
  struct std__random_access_iterator_tag t558 = __retval557;
  return t558;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v559, char* v560) {
bb561:
  char* __first562;
  char* __last563;
  long __retval564;
  struct std__random_access_iterator_tag agg_tmp0565;
  __first562 = v559;
  __last563 = v560;
  char* t566 = __first562;
  char* t567 = __last563;
  struct std__random_access_iterator_tag r568 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first562);
  agg_tmp0565 = r568;
  struct std__random_access_iterator_tag t569 = agg_tmp0565;
  long r570 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t566, t567, t569);
  __retval564 = r570;
  long t571 = __retval564;
  return t571;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v572, char* v573) {
bb574:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this575;
  char* __p576;
  this575 = v572;
  __p576 = v573;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t577 = this575;
  char* t578 = __p576;
  t577->_M_dataplus._M_p = t578;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v579) {
bb580:
  struct std__allocator_char_* __a581;
  unsigned long __retval582;
  __a581 = v579;
  unsigned long c583 = -1;
  unsigned long c584 = 1;
  unsigned long b585 = c583 / c584;
  __retval582 = b585;
  unsigned long t586 = __retval582;
  return t586;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v587) {
bb588:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this589;
  struct std__allocator_char_* __retval590;
  this589 = v587;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t591 = this589;
  struct std__allocator_char_* base592 = (struct std__allocator_char_*)((char *)&(t591->_M_dataplus) + 0);
  __retval590 = base592;
  struct std__allocator_char_* t593 = __retval590;
  return t593;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v594, unsigned long* v595) {
bb596:
  unsigned long* __a597;
  unsigned long* __b598;
  unsigned long* __retval599;
  __a597 = v594;
  __b598 = v595;
    unsigned long* t600 = __b598;
    unsigned long t601 = *t600;
    unsigned long* t602 = __a597;
    unsigned long t603 = *t602;
    _Bool c604 = ((t601 < t603)) ? 1 : 0;
    if (c604) {
      unsigned long* t605 = __b598;
      __retval599 = t605;
      unsigned long* t606 = __retval599;
      return t606;
    }
  unsigned long* t607 = __a597;
  __retval599 = t607;
  unsigned long* t608 = __retval599;
  return t608;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v609) {
bb610:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this611;
  unsigned long __retval612;
  unsigned long __diffmax613;
  unsigned long __allocmax614;
  this611 = v609;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t615 = this611;
  unsigned long c616 = 9223372036854775807;
  __diffmax613 = c616;
  struct std__allocator_char_* r617 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t615);
  unsigned long r618 = std__allocator_traits_std__allocator_char_____max_size(r617);
  __allocmax614 = r618;
  unsigned long* r619 = unsigned_long_const__std__min_unsigned_long_(&__diffmax613, &__allocmax614);
  unsigned long t620 = *r619;
  unsigned long c621 = 1;
  unsigned long b622 = t620 - c621;
  __retval612 = b622;
  unsigned long t623 = __retval612;
  return t623;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v624) {
bb625:
  struct std____new_allocator_char_* this626;
  unsigned long __retval627;
  this626 = v624;
  struct std____new_allocator_char_* t628 = this626;
  unsigned long c629 = 9223372036854775807;
  unsigned long c630 = 1;
  unsigned long b631 = c629 / c630;
  __retval627 = b631;
  unsigned long t632 = __retval627;
  return t632;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v633, unsigned long v634, void* v635) {
bb636:
  struct std____new_allocator_char_* this637;
  unsigned long __n638;
  void* unnamed639;
  char* __retval640;
  this637 = v633;
  __n638 = v634;
  unnamed639 = v635;
  struct std____new_allocator_char_* t641 = this637;
    unsigned long t642 = __n638;
    unsigned long r643 = std____new_allocator_char____M_max_size___const(t641);
    _Bool c644 = ((t642 > r643)) ? 1 : 0;
    if (c644) {
        unsigned long t645 = __n638;
        unsigned long c646 = -1;
        unsigned long c647 = 1;
        unsigned long b648 = c646 / c647;
        _Bool c649 = ((t645 > b648)) ? 1 : 0;
        if (c649) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c650 = 1;
    unsigned long c651 = 16;
    _Bool c652 = ((c650 > c651)) ? 1 : 0;
    if (c652) {
      unsigned long __al653;
      unsigned long c654 = 1;
      __al653 = c654;
      unsigned long t655 = __n638;
      unsigned long c656 = 1;
      unsigned long b657 = t655 * c656;
      unsigned long t658 = __al653;
      void* r659 = operator_new_2(b657, t658);
      char* cast660 = (char*)r659;
      __retval640 = cast660;
      char* t661 = __retval640;
      return t661;
    }
  unsigned long t662 = __n638;
  unsigned long c663 = 1;
  unsigned long b664 = t662 * c663;
  void* r665 = operator_new(b664);
  char* cast666 = (char*)r665;
  __retval640 = cast666;
  char* t667 = __retval640;
  return t667;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v668, unsigned long v669) {
bb670:
  struct std__allocator_char_* this671;
  unsigned long __n672;
  char* __retval673;
  this671 = v668;
  __n672 = v669;
  struct std__allocator_char_* t674 = this671;
    _Bool r675 = std____is_constant_evaluated();
    if (r675) {
        unsigned long t676 = __n672;
        unsigned long c677 = 1;
        unsigned long ovr678;
        _Bool ovf679 = __builtin_mul_overflow(t676, c677, &ovr678);
        __n672 = ovr678;
        if (ovf679) {
          std____throw_bad_array_new_length();
        }
      unsigned long t680 = __n672;
      void* r681 = operator_new(t680);
      char* cast682 = (char*)r681;
      __retval673 = cast682;
      char* t683 = __retval673;
      return t683;
    }
  struct std____new_allocator_char_* base684 = (struct std____new_allocator_char_*)((char *)t674 + 0);
  unsigned long t685 = __n672;
  void* c686 = ((void*)0);
  char* r687 = std____new_allocator_char___allocate(base684, t685, c686);
  __retval673 = r687;
  char* t688 = __retval673;
  return t688;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v689, unsigned long v690) {
bb691:
  struct std__allocator_char_* __a692;
  unsigned long __n693;
  char* __retval694;
  __a692 = v689;
  __n693 = v690;
  struct std__allocator_char_* t695 = __a692;
  unsigned long t696 = __n693;
  char* r697 = std__allocator_char___allocate(t695, t696);
  __retval694 = r697;
  char* t698 = __retval694;
  return t698;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v699, unsigned long v700) {
bb701:
  struct std__allocator_char_* __a702;
  unsigned long __n703;
  char* __retval704;
  char* __p705;
  __a702 = v699;
  __n703 = v700;
  struct std__allocator_char_* t706 = __a702;
  unsigned long t707 = __n703;
  char* r708 = std__allocator_traits_std__allocator_char_____allocate(t706, t707);
  __p705 = r708;
  char* t709 = __p705;
  __retval704 = t709;
  char* t710 = __retval704;
  return t710;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v711) {
bb712:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this713;
  struct std__allocator_char_* __retval714;
  this713 = v711;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t715 = this713;
  struct std__allocator_char_* base716 = (struct std__allocator_char_*)((char *)&(t715->_M_dataplus) + 0);
  __retval714 = base716;
  struct std__allocator_char_* t717 = __retval714;
  return t717;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v718, unsigned long* v719, unsigned long v720) {
bb721:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this722;
  unsigned long* __capacity723;
  unsigned long __old_capacity724;
  char* __retval725;
  this722 = v718;
  __capacity723 = v719;
  __old_capacity724 = v720;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t726 = this722;
    unsigned long* t727 = __capacity723;
    unsigned long t728 = *t727;
    unsigned long r729 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t726);
    _Bool c730 = ((t728 > r729)) ? 1 : 0;
    if (c730) {
      char* cast731 = (char*)&(_str_10);
      std____throw_length_error(cast731);
    }
    unsigned long* t732 = __capacity723;
    unsigned long t733 = *t732;
    unsigned long t734 = __old_capacity724;
    _Bool c735 = ((t733 > t734)) ? 1 : 0;
    _Bool ternary736;
    if (c735) {
      unsigned long* t737 = __capacity723;
      unsigned long t738 = *t737;
      unsigned long c739 = 2;
      unsigned long t740 = __old_capacity724;
      unsigned long b741 = c739 * t740;
      _Bool c742 = ((t738 < b741)) ? 1 : 0;
      ternary736 = (_Bool)c742;
    } else {
      _Bool c743 = 0;
      ternary736 = (_Bool)c743;
    }
    if (ternary736) {
      unsigned long c744 = 2;
      unsigned long t745 = __old_capacity724;
      unsigned long b746 = c744 * t745;
      unsigned long* t747 = __capacity723;
      *t747 = b746;
        unsigned long* t748 = __capacity723;
        unsigned long t749 = *t748;
        unsigned long r750 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t726);
        _Bool c751 = ((t749 > r750)) ? 1 : 0;
        if (c751) {
          unsigned long r752 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t726);
          unsigned long* t753 = __capacity723;
          *t753 = r752;
        }
    }
  struct std__allocator_char_* r754 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t726);
  unsigned long* t755 = __capacity723;
  unsigned long t756 = *t755;
  unsigned long c757 = 1;
  unsigned long b758 = t756 + c757;
  char* r759 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r754, b758);
  __retval725 = r759;
  char* t760 = __retval725;
  return t760;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v761, unsigned long v762) {
bb763:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this764;
  unsigned long __capacity765;
  this764 = v761;
  __capacity765 = v762;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t766 = this764;
  unsigned long t767 = __capacity765;
  t766->field2._M_allocated_capacity = t767;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb768:
  _Bool __retval769;
    _Bool c770 = 0;
    __retval769 = c770;
    _Bool t771 = __retval769;
    return t771;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v772) {
bb773:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this774;
  this774 = v772;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t775 = this774;
    _Bool r776 = std__is_constant_evaluated();
    if (r776) {
        unsigned long __i777;
        unsigned long c778 = 0;
        __i777 = c778;
        while (1) {
          unsigned long t780 = __i777;
          unsigned long c781 = 15;
          _Bool c782 = ((t780 <= c781)) ? 1 : 0;
          if (!c782) break;
          char c783 = 0;
          unsigned long t784 = __i777;
          t775->field2._M_local_buf[t784] = c783;
        for_step779: ;
          unsigned long t785 = __i777;
          unsigned long u786 = t785 + 1;
          __i777 = u786;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v787, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v788) {
bb789:
  struct _Guard* this790;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s791;
  this790 = v787;
  __s791 = v788;
  struct _Guard* t792 = this790;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t793 = __s791;
  t792->_M_guarded = t793;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v794, char* v795) {
bb796:
  char* __location797;
  char* __args798;
  char* __retval799;
  void* __loc800;
  __location797 = v794;
  __args798 = v795;
  char* t801 = __location797;
  void* cast802 = (void*)t801;
  __loc800 = cast802;
    void* t803 = __loc800;
    char* cast804 = (char*)t803;
    char* t805 = __args798;
    char t806 = *t805;
    *cast804 = t806;
    __retval799 = cast804;
    char* t807 = __retval799;
    return t807;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v808, char* v809) {
bb810:
  char* __c1811;
  char* __c2812;
  __c1811 = v808;
  __c2812 = v809;
    _Bool r813 = std____is_constant_evaluated();
    if (r813) {
      char* t814 = __c1811;
      char* t815 = __c2812;
      char* r816 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t814, t815);
    } else {
      char* t817 = __c2812;
      char t818 = *t817;
      char* t819 = __c1811;
      *t819 = t818;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v820, char* v821, unsigned long v822) {
bb823:
  char* __s1824;
  char* __s2825;
  unsigned long __n826;
  char* __retval827;
  __s1824 = v820;
  __s2825 = v821;
  __n826 = v822;
    unsigned long t828 = __n826;
    unsigned long c829 = 0;
    _Bool c830 = ((t828 == c829)) ? 1 : 0;
    if (c830) {
      char* t831 = __s1824;
      __retval827 = t831;
      char* t832 = __retval827;
      return t832;
    }
    _Bool r833 = std____is_constant_evaluated();
    if (r833) {
        unsigned long __i834;
        unsigned long c835 = 0;
        __i834 = c835;
        while (1) {
          unsigned long t837 = __i834;
          unsigned long t838 = __n826;
          _Bool c839 = ((t837 < t838)) ? 1 : 0;
          if (!c839) break;
          char* t840 = __s1824;
          unsigned long t841 = __i834;
          char* ptr842 = &(t840)[t841];
          unsigned long t843 = __i834;
          char* t844 = __s2825;
          char* ptr845 = &(t844)[t843];
          char* r846 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr842, ptr845);
        for_step836: ;
          unsigned long t847 = __i834;
          unsigned long u848 = t847 + 1;
          __i834 = u848;
        }
      char* t849 = __s1824;
      __retval827 = t849;
      char* t850 = __retval827;
      return t850;
    }
  char* t851 = __s1824;
  void* cast852 = (void*)t851;
  char* t853 = __s2825;
  void* cast854 = (void*)t853;
  unsigned long t855 = __n826;
  unsigned long c856 = 1;
  unsigned long b857 = t855 * c856;
  void* r858 = memcpy(cast852, cast854, b857);
  char* t859 = __s1824;
  __retval827 = t859;
  char* t860 = __retval827;
  return t860;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v861, char* v862, unsigned long v863) {
bb864:
  char* __s1865;
  char* __s2866;
  unsigned long __n867;
  char* __retval868;
  __s1865 = v861;
  __s2866 = v862;
  __n867 = v863;
    unsigned long t869 = __n867;
    unsigned long c870 = 0;
    _Bool c871 = ((t869 == c870)) ? 1 : 0;
    if (c871) {
      char* t872 = __s1865;
      __retval868 = t872;
      char* t873 = __retval868;
      return t873;
    }
    _Bool r874 = std____is_constant_evaluated();
    if (r874) {
      char* t875 = __s1865;
      char* t876 = __s2866;
      unsigned long t877 = __n867;
      char* r878 = __gnu_cxx__char_traits_char___copy(t875, t876, t877);
      __retval868 = r878;
      char* t879 = __retval868;
      return t879;
    }
  char* t880 = __s1865;
  void* cast881 = (void*)t880;
  char* t882 = __s2866;
  void* cast883 = (void*)t882;
  unsigned long t884 = __n867;
  void* r885 = memcpy(cast881, cast883, t884);
  char* cast886 = (char*)r885;
  __retval868 = cast886;
  char* t887 = __retval868;
  return t887;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v888, char* v889, unsigned long v890) {
bb891:
  char* __d892;
  char* __s893;
  unsigned long __n894;
  __d892 = v888;
  __s893 = v889;
  __n894 = v890;
    unsigned long t895 = __n894;
    unsigned long c896 = 1;
    _Bool c897 = ((t895 == c896)) ? 1 : 0;
    if (c897) {
      char* t898 = __d892;
      char* t899 = __s893;
      std__char_traits_char___assign(t898, t899);
    } else {
      char* t900 = __d892;
      char* t901 = __s893;
      unsigned long t902 = __n894;
      char* r903 = std__char_traits_char___copy(t900, t901, t902);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v904) {
bb905:
  char* __it906;
  char* __retval907;
  __it906 = v904;
  char* t908 = __it906;
  __retval907 = t908;
  char* t909 = __retval907;
  return t909;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v910, char* v911, char* v912) {
bb913:
  char* __p914;
  char* __k1915;
  char* __k2916;
  __p914 = v910;
  __k1915 = v911;
  __k2916 = v912;
    char* t917 = __p914;
    char* t918 = __k1915;
    char* r919 = char_const__std____niter_base_char_const__(t918);
    char* t920 = __k2916;
    char* t921 = __k1915;
    long diff922 = t920 - t921;
    unsigned long cast923 = (unsigned long)diff922;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t917, r919, cast923);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v924) {
bb925:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this926;
  char* __retval927;
  this926 = v924;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t928 = this926;
  char* t929 = t928->_M_dataplus._M_p;
  __retval927 = t929;
  char* t930 = __retval927;
  return t930;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v931, unsigned long v932) {
bb933:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this934;
  unsigned long __length935;
  this934 = v931;
  __length935 = v932;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t936 = this934;
  unsigned long t937 = __length935;
  t936->_M_string_length = t937;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v938, unsigned long v939) {
bb940:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this941;
  unsigned long __n942;
  char ref_tmp0943;
  this941 = v938;
  __n942 = v939;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t944 = this941;
  unsigned long t945 = __n942;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t944, t945);
  unsigned long t946 = __n942;
  char* r947 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t944);
  char* ptr948 = &(r947)[t946];
  char c949 = 0;
  ref_tmp0943 = c949;
  std__char_traits_char___assign(ptr948, &ref_tmp0943);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v950) {
bb951:
  struct _Guard* this952;
  this952 = v950;
  struct _Guard* t953 = this952;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t954 = t953->_M_guarded;
    _Bool cast955 = (_Bool)t954;
    if (cast955) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t956 = t953->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t956);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v957, char* v958, char* v959, struct std__forward_iterator_tag v960) {
bb961:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this962;
  char* __beg963;
  char* __end964;
  struct std__forward_iterator_tag unnamed965;
  unsigned long __dnew966;
  struct _Guard __guard967;
  this962 = v957;
  __beg963 = v958;
  __end964 = v959;
  unnamed965 = v960;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t968 = this962;
  char* t969 = __beg963;
  char* t970 = __end964;
  long r971 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t969, t970);
  unsigned long cast972 = (unsigned long)r971;
  __dnew966 = cast972;
    unsigned long t973 = __dnew966;
    unsigned long c974 = 15;
    _Bool c975 = ((t973 > c974)) ? 1 : 0;
    if (c975) {
      unsigned long c976 = 0;
      char* r977 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t968, &__dnew966, c976);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t968, r977);
      unsigned long t978 = __dnew966;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t968, t978);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t968);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard967, t968);
    char* r979 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t968);
    char* t980 = __beg963;
    char* t981 = __end964;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r979, t980, t981);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c982 = ((void*)0);
    __guard967._M_guarded = c982;
    unsigned long t983 = __dnew966;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t968, t983);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard967);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v984) {
bb985:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this986;
  this986 = v984;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t987 = this986;
  {
    struct std__allocator_char_* base988 = (struct std__allocator_char_*)((char *)t987 + 0);
    std__allocator_char____allocator(base988);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v989, struct std____new_allocator_char_* v990) {
bb991:
  struct std____new_allocator_char_* this992;
  struct std____new_allocator_char_* unnamed993;
  this992 = v989;
  unnamed993 = v990;
  struct std____new_allocator_char_* t994 = this992;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v995, struct std__allocator_char_* v996) {
bb997:
  struct std__allocator_char_* this998;
  struct std__allocator_char_* __a999;
  this998 = v995;
  __a999 = v996;
  struct std__allocator_char_* t1000 = this998;
  struct std____new_allocator_char_* base1001 = (struct std____new_allocator_char_*)((char *)t1000 + 0);
  struct std__allocator_char_* t1002 = __a999;
  struct std____new_allocator_char_* base1003 = (struct std____new_allocator_char_*)((char *)t1002 + 0);
  std____new_allocator_char_____new_allocator(base1001, base1003);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1004) {
bb1005:
  char* __r1006;
  char* __retval1007;
  __r1006 = v1004;
  char* t1008 = __r1006;
  __retval1007 = t1008;
  char* t1009 = __retval1007;
  return t1009;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1010) {
bb1011:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1012;
  char* __retval1013;
  this1012 = v1010;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1014 = this1012;
  char* cast1015 = (char*)&(t1014->field2._M_local_buf);
  char* r1016 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1015);
  __retval1013 = r1016;
  char* t1017 = __retval1013;
  return t1017;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1018) {
bb1019:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1020;
  _Bool __retval1021;
  this1020 = v1018;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1022 = this1020;
    char* r1023 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1022);
    char* r1024 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1022);
    _Bool c1025 = ((r1023 == r1024)) ? 1 : 0;
    if (c1025) {
        unsigned long t1026 = t1022->_M_string_length;
        unsigned long c1027 = 15;
        _Bool c1028 = ((t1026 > c1027)) ? 1 : 0;
        if (c1028) {
          __builtin_unreachable();
        }
      _Bool c1029 = 1;
      __retval1021 = c1029;
      _Bool t1030 = __retval1021;
      return t1030;
    }
  _Bool c1031 = 0;
  __retval1021 = c1031;
  _Bool t1032 = __retval1021;
  return t1032;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1033, char* v1034, unsigned long v1035) {
bb1036:
  struct std____new_allocator_char_* this1037;
  char* __p1038;
  unsigned long __n1039;
  this1037 = v1033;
  __p1038 = v1034;
  __n1039 = v1035;
  struct std____new_allocator_char_* t1040 = this1037;
    unsigned long c1041 = 1;
    unsigned long c1042 = 16;
    _Bool c1043 = ((c1041 > c1042)) ? 1 : 0;
    if (c1043) {
      char* t1044 = __p1038;
      void* cast1045 = (void*)t1044;
      unsigned long t1046 = __n1039;
      unsigned long c1047 = 1;
      unsigned long b1048 = t1046 * c1047;
      unsigned long c1049 = 1;
      operator_delete_3(cast1045, b1048, c1049);
      return;
    }
  char* t1050 = __p1038;
  void* cast1051 = (void*)t1050;
  unsigned long t1052 = __n1039;
  unsigned long c1053 = 1;
  unsigned long b1054 = t1052 * c1053;
  operator_delete_2(cast1051, b1054);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1055, char* v1056, unsigned long v1057) {
bb1058:
  struct std__allocator_char_* this1059;
  char* __p1060;
  unsigned long __n1061;
  this1059 = v1055;
  __p1060 = v1056;
  __n1061 = v1057;
  struct std__allocator_char_* t1062 = this1059;
    _Bool r1063 = std____is_constant_evaluated();
    if (r1063) {
      char* t1064 = __p1060;
      void* cast1065 = (void*)t1064;
      operator_delete(cast1065);
      return;
    }
  struct std____new_allocator_char_* base1066 = (struct std____new_allocator_char_*)((char *)t1062 + 0);
  char* t1067 = __p1060;
  unsigned long t1068 = __n1061;
  std____new_allocator_char___deallocate(base1066, t1067, t1068);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1069, char* v1070, unsigned long v1071) {
bb1072:
  struct std__allocator_char_* __a1073;
  char* __p1074;
  unsigned long __n1075;
  __a1073 = v1069;
  __p1074 = v1070;
  __n1075 = v1071;
  struct std__allocator_char_* t1076 = __a1073;
  char* t1077 = __p1074;
  unsigned long t1078 = __n1075;
  std__allocator_char___deallocate(t1076, t1077, t1078);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1079, unsigned long v1080) {
bb1081:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1082;
  unsigned long __size1083;
  this1082 = v1079;
  __size1083 = v1080;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1084 = this1082;
  struct std__allocator_char_* r1085 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1084);
  char* r1086 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1084);
  unsigned long t1087 = __size1083;
  unsigned long c1088 = 1;
  unsigned long b1089 = t1087 + c1088;
  std__allocator_traits_std__allocator_char_____deallocate(r1085, r1086, b1089);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1090) {
bb1091:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1092;
  this1092 = v1090;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1093 = this1092;
    _Bool r1094 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1093);
    _Bool u1095 = !r1094;
    if (u1095) {
      unsigned long t1096 = t1093->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1093, t1096);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1097, char* v1098, struct std__allocator_char_* v1099) {
bb1100:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1101;
  char* __dat1102;
  struct std__allocator_char_* __a1103;
  this1101 = v1097;
  __dat1102 = v1098;
  __a1103 = v1099;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1104 = this1101;
  struct std__allocator_char_* base1105 = (struct std__allocator_char_*)((char *)t1104 + 0);
  struct std__allocator_char_* t1106 = __a1103;
  std__allocator_char___allocator(base1105, t1106);
    char* t1107 = __dat1102;
    t1104->_M_p = t1107;
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1108, unsigned long v1109, unsigned long v1110) {
bb1111:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1112;
  unsigned long __pos1113;
  unsigned long __off1114;
  unsigned long __retval1115;
  _Bool __testoff1116;
  this1112 = v1108;
  __pos1113 = v1109;
  __off1114 = v1110;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1117 = this1112;
  unsigned long t1118 = __off1114;
  unsigned long r1119 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1117);
  unsigned long t1120 = __pos1113;
  unsigned long b1121 = r1119 - t1120;
  _Bool c1122 = ((t1118 < b1121)) ? 1 : 0;
  __testoff1116 = c1122;
  _Bool t1123 = __testoff1116;
  unsigned long ternary1124;
  if (t1123) {
    unsigned long t1125 = __off1114;
    ternary1124 = (unsigned long)t1125;
  } else {
    unsigned long r1126 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1117);
    unsigned long t1127 = __pos1113;
    unsigned long b1128 = r1126 - t1127;
    ternary1124 = (unsigned long)b1128;
  }
  __retval1115 = ternary1124;
  unsigned long t1129 = __retval1115;
  return t1129;
}

