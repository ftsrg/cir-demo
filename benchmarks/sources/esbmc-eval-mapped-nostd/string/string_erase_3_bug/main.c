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
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ { char* _M_current; };
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

char _str[27] = "This is an example phrase.";
char _str_1[19] = "This is an phrase.";
char _str_2[28] = "str != \"This is an phrase.\"";
char _str_3[113] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_erase_3_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[50] = "basic_string: construction from null is not valid";
char _str_5[24] = "basic_string::_M_create";
char _str_6[20] = "basic_string::erase";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
char _str_7[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void __gnu_cxx__char_traits_char___assign(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___move(char* p0, char* p1, unsigned long p2);
extern void* memmove(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_erase(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____erase(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
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
        char* cast20 = (char*)&(_str_4);
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

// function: _ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2Ev
void __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* v32) {
bb33:
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* this34;
  this34 = v32;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* t35 = this34;
  char* c36 = ((void*)0);
  t35->_M_current = c36;
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v37) {
bb38:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this39;
  unsigned long __retval40;
  unsigned long __sz41;
  this39 = v37;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t42 = this39;
  unsigned long t43 = t42->_M_string_length;
  __sz41 = t43;
    unsigned long t44 = __sz41;
    unsigned long r45 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t42);
    _Bool c46 = ((t44 > r45)) ? 1 : 0;
    if (c46) {
      __builtin_unreachable();
    }
  unsigned long t47 = __sz41;
  __retval40 = t47;
  unsigned long t48 = __retval40;
  return t48;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v49, unsigned long v50, char* v51) {
bb52:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this53;
  unsigned long __pos54;
  char* __s55;
  unsigned long __retval56;
  this53 = v49;
  __pos54 = v50;
  __s55 = v51;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t57 = this53;
    unsigned long t58 = __pos54;
    unsigned long r59 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t57);
    _Bool c60 = ((t58 > r59)) ? 1 : 0;
    if (c60) {
      char* cast61 = (char*)&(_str_7);
      char* t62 = __s55;
      unsigned long t63 = __pos54;
      unsigned long r64 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t57);
      std____throw_out_of_range_fmt(cast61, t62, t63, r64);
    }
  unsigned long t65 = __pos54;
  __retval56 = t65;
  unsigned long t66 = __retval56;
  return t66;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v67) {
bb68:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this69;
  unsigned long __retval70;
  this69 = v67;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t71 = this69;
  unsigned long r72 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t71);
  __retval70 = r72;
  unsigned long t73 = __retval70;
  return t73;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign(char* v74, char* v75) {
bb76:
  char* __c177;
  char* __c278;
  __c177 = v74;
  __c278 = v75;
    _Bool r79 = std____is_constant_evaluated();
    if (r79) {
      char* t80 = __c177;
      char* t81 = __c278;
      char* r82 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t80, t81);
    } else {
      char* t83 = __c278;
      char t84 = *t83;
      char* t85 = __c177;
      *t85 = t84;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v86, char* v87, unsigned long v88) {
bb89:
  char* __s190;
  char* __s291;
  unsigned long __n92;
  char* __retval93;
  __s190 = v86;
  __s291 = v87;
  __n92 = v88;
    unsigned long t94 = __n92;
    unsigned long c95 = 0;
    _Bool c96 = ((t94 == c95)) ? 1 : 0;
    if (c96) {
      char* t97 = __s190;
      __retval93 = t97;
      char* t98 = __retval93;
      return t98;
    }
    _Bool r99 = std____is_constant_evaluated();
    if (r99) {
        char* t100 = __s291;
        char* t101 = __s190;
        _Bool c102 = ((t100 < t101)) ? 1 : 0;
        _Bool isconst103 = 0;
        _Bool ternary104;
        if (isconst103) {
          char* t105 = __s190;
          char* t106 = __s291;
          _Bool c107 = ((t105 > t106)) ? 1 : 0;
          ternary104 = (_Bool)c107;
        } else {
          _Bool c108 = 0;
          ternary104 = (_Bool)c108;
        }
        _Bool ternary109;
        if (ternary104) {
          char* t110 = __s190;
          char* t111 = __s291;
          unsigned long t112 = __n92;
          char* ptr113 = &(t111)[t112];
          _Bool c114 = ((t110 < ptr113)) ? 1 : 0;
          ternary109 = (_Bool)c114;
        } else {
          _Bool c115 = 0;
          ternary109 = (_Bool)c115;
        }
        if (ternary109) {
            do {
                unsigned long t116 = __n92;
                unsigned long u117 = t116 - 1;
                __n92 = u117;
                unsigned long t118 = __n92;
                char* t119 = __s190;
                char* ptr120 = &(t119)[t118];
                unsigned long t121 = __n92;
                char* t122 = __s291;
                char* ptr123 = &(t122)[t121];
                __gnu_cxx__char_traits_char___assign(ptr120, ptr123);
              unsigned long t124 = __n92;
              unsigned long c125 = 0;
              _Bool c126 = ((t124 > c125)) ? 1 : 0;
              if (!c126) break;
            } while (1);
        } else {
          char* t127 = __s190;
          char* t128 = __s291;
          unsigned long t129 = __n92;
          char* r130 = __gnu_cxx__char_traits_char___copy(t127, t128, t129);
        }
      char* t131 = __s190;
      __retval93 = t131;
      char* t132 = __retval93;
      return t132;
    }
  char* t133 = __s190;
  void* cast134 = (void*)t133;
  char* t135 = __s291;
  void* cast136 = (void*)t135;
  unsigned long t137 = __n92;
  unsigned long c138 = 1;
  unsigned long b139 = t137 * c138;
  void* r140 = memmove(cast134, cast136, b139);
  char* t141 = __s190;
  __retval93 = t141;
  char* t142 = __retval93;
  return t142;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v143, char* v144, unsigned long v145) {
bb146:
  char* __s1147;
  char* __s2148;
  unsigned long __n149;
  char* __retval150;
  __s1147 = v143;
  __s2148 = v144;
  __n149 = v145;
    unsigned long t151 = __n149;
    unsigned long c152 = 0;
    _Bool c153 = ((t151 == c152)) ? 1 : 0;
    if (c153) {
      char* t154 = __s1147;
      __retval150 = t154;
      char* t155 = __retval150;
      return t155;
    }
    _Bool r156 = std____is_constant_evaluated();
    if (r156) {
      char* t157 = __s1147;
      char* t158 = __s2148;
      unsigned long t159 = __n149;
      char* r160 = __gnu_cxx__char_traits_char___move(t157, t158, t159);
      __retval150 = r160;
      char* t161 = __retval150;
      return t161;
    }
  char* t162 = __s1147;
  void* cast163 = (void*)t162;
  char* t164 = __s2148;
  void* cast165 = (void*)t164;
  unsigned long t166 = __n149;
  void* r167 = memmove(cast163, cast165, t166);
  char* cast168 = (char*)r167;
  __retval150 = cast168;
  char* t169 = __retval150;
  return t169;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v170, char* v171, unsigned long v172) {
bb173:
  char* __d174;
  char* __s175;
  unsigned long __n176;
  __d174 = v170;
  __s175 = v171;
  __n176 = v172;
    unsigned long t177 = __n176;
    unsigned long c178 = 1;
    _Bool c179 = ((t177 == c178)) ? 1 : 0;
    if (c179) {
      char* t180 = __d174;
      char* t181 = __s175;
      std__char_traits_char___assign(t180, t181);
    } else {
      char* t182 = __d174;
      char* t183 = __s175;
      unsigned long t184 = __n176;
      char* r185 = std__char_traits_char___move(t182, t183, t184);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_eraseEmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_erase(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v186, unsigned long v187, unsigned long v188) {
bb189:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this190;
  unsigned long __pos191;
  unsigned long __n192;
  unsigned long __how_much193;
  this190 = v186;
  __pos191 = v187;
  __n192 = v188;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t194 = this190;
  unsigned long r195 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t194);
  unsigned long t196 = __pos191;
  unsigned long b197 = r195 - t196;
  unsigned long t198 = __n192;
  unsigned long b199 = b197 - t198;
  __how_much193 = b199;
    unsigned long t200 = __how_much193;
    _Bool cast201 = (_Bool)t200;
    _Bool ternary202;
    if (cast201) {
      unsigned long t203 = __n192;
      _Bool cast204 = (_Bool)t203;
      ternary202 = (_Bool)cast204;
    } else {
      _Bool c205 = 0;
      ternary202 = (_Bool)c205;
    }
    if (ternary202) {
      char* r206 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t194);
      unsigned long t207 = __pos191;
      char* ptr208 = &(r206)[t207];
      char* r209 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t194);
      unsigned long t210 = __pos191;
      char* ptr211 = &(r209)[t210];
      unsigned long t212 = __n192;
      char* ptr213 = &(ptr211)[t212];
      unsigned long t214 = __how_much193;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr208, ptr213, t214);
    }
  unsigned long r215 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t194);
  unsigned long t216 = __n192;
  unsigned long b217 = r215 - t216;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t194, b217);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v218, unsigned long v219, unsigned long v220) {
bb221:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this222;
  unsigned long __pos223;
  unsigned long __off224;
  unsigned long __retval225;
  _Bool __testoff226;
  this222 = v218;
  __pos223 = v219;
  __off224 = v220;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t227 = this222;
  unsigned long t228 = __off224;
  unsigned long r229 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t227);
  unsigned long t230 = __pos223;
  unsigned long b231 = r229 - t230;
  _Bool c232 = ((t228 < b231)) ? 1 : 0;
  __testoff226 = c232;
  _Bool t233 = __testoff226;
  unsigned long ternary234;
  if (t233) {
    unsigned long t235 = __off224;
    ternary234 = (unsigned long)t235;
  } else {
    unsigned long r236 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t227);
    unsigned long t237 = __pos223;
    unsigned long b238 = r236 - t237;
    ternary234 = (unsigned long)b238;
  }
  __retval225 = ternary234;
  unsigned long t239 = __retval225;
  return t239;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5eraseEmm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____erase(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v240, unsigned long v241, unsigned long v242) {
bb243:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this244;
  unsigned long __pos245;
  unsigned long __n246;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval247;
  this244 = v240;
  __pos245 = v241;
  __n246 = v242;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t248 = this244;
  unsigned long t249 = __pos245;
  char* cast250 = (char*)&(_str_6);
  unsigned long r251 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t248, t249, cast250);
    unsigned long t252 = __n246;
    unsigned long t253 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
    _Bool c254 = ((t252 == t253)) ? 1 : 0;
    if (c254) {
      unsigned long t255 = __pos245;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t248, t255);
    } else {
        unsigned long t256 = __n246;
        unsigned long c257 = 0;
        _Bool c258 = ((t256 != c257)) ? 1 : 0;
        if (c258) {
          unsigned long t259 = __pos245;
          unsigned long t260 = __pos245;
          unsigned long t261 = __n246;
          unsigned long r262 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t248, t260, t261);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_erase(t248, t259, r262);
        }
    }
  __retval247 = t248;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t263 = __retval247;
  return t263;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v264, char* v265) {
bb266:
  char* __c1267;
  char* __c2268;
  _Bool __retval269;
  __c1267 = v264;
  __c2268 = v265;
  char* t270 = __c1267;
  char t271 = *t270;
  unsigned char cast272 = (unsigned char)t271;
  int cast273 = (int)cast272;
  char* t274 = __c2268;
  char t275 = *t274;
  unsigned char cast276 = (unsigned char)t275;
  int cast277 = (int)cast276;
  _Bool c278 = ((cast273 < cast277)) ? 1 : 0;
  __retval269 = c278;
  _Bool t279 = __retval269;
  return t279;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v280, char* v281, unsigned long v282) {
bb283:
  char* __s1284;
  char* __s2285;
  unsigned long __n286;
  int __retval287;
  __s1284 = v280;
  __s2285 = v281;
  __n286 = v282;
    unsigned long t288 = __n286;
    unsigned long c289 = 0;
    _Bool c290 = ((t288 == c289)) ? 1 : 0;
    if (c290) {
      int c291 = 0;
      __retval287 = c291;
      int t292 = __retval287;
      return t292;
    }
    _Bool r293 = std____is_constant_evaluated();
    if (r293) {
        unsigned long __i294;
        unsigned long c295 = 0;
        __i294 = c295;
        while (1) {
          unsigned long t297 = __i294;
          unsigned long t298 = __n286;
          _Bool c299 = ((t297 < t298)) ? 1 : 0;
          if (!c299) break;
            unsigned long t300 = __i294;
            char* t301 = __s1284;
            char* ptr302 = &(t301)[t300];
            unsigned long t303 = __i294;
            char* t304 = __s2285;
            char* ptr305 = &(t304)[t303];
            _Bool r306 = std__char_traits_char___lt(ptr302, ptr305);
            if (r306) {
              int c307 = -1;
              __retval287 = c307;
              int t308 = __retval287;
              int ret_val309 = t308;
              return ret_val309;
            } else {
                unsigned long t310 = __i294;
                char* t311 = __s2285;
                char* ptr312 = &(t311)[t310];
                unsigned long t313 = __i294;
                char* t314 = __s1284;
                char* ptr315 = &(t314)[t313];
                _Bool r316 = std__char_traits_char___lt(ptr312, ptr315);
                if (r316) {
                  int c317 = 1;
                  __retval287 = c317;
                  int t318 = __retval287;
                  int ret_val319 = t318;
                  return ret_val319;
                }
            }
        for_step296: ;
          unsigned long t320 = __i294;
          unsigned long u321 = t320 + 1;
          __i294 = u321;
        }
      int c322 = 0;
      __retval287 = c322;
      int t323 = __retval287;
      return t323;
    }
  char* t324 = __s1284;
  void* cast325 = (void*)t324;
  char* t326 = __s2285;
  void* cast327 = (void*)t326;
  unsigned long t328 = __n286;
  int r329 = memcmp(cast325, cast327, t328);
  __retval287 = r329;
  int t330 = __retval287;
  return t330;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v331) {
bb332:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this333;
  char* __retval334;
  this333 = v331;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t335 = this333;
  char* r336 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t335);
  __retval334 = r336;
  char* t337 = __retval334;
  return t337;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v338, char* v339) {
bb340:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs341;
  char* __rhs342;
  _Bool __retval343;
  __lhs341 = v338;
  __rhs342 = v339;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t344 = __lhs341;
  unsigned long r345 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t344);
  char* t346 = __rhs342;
  unsigned long r347 = std__char_traits_char___length(t346);
  _Bool c348 = ((r345 == r347)) ? 1 : 0;
  _Bool ternary349;
  if (c348) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t350 = __lhs341;
    char* r351 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t350);
    char* t352 = __rhs342;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t353 = __lhs341;
    unsigned long r354 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t353);
    int r355 = std__char_traits_char___compare(r351, t352, r354);
    _Bool cast356 = (_Bool)r355;
    _Bool u357 = !cast356;
    ternary349 = (_Bool)u357;
  } else {
    _Bool c358 = 0;
    ternary349 = (_Bool)c358;
  }
  __retval343 = ternary349;
  _Bool t359 = __retval343;
  return t359;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v360, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v361) {
bb362:
  struct std__basic_ostream_char__std__char_traits_char__* __os363;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str364;
  struct std__basic_ostream_char__std__char_traits_char__* __retval365;
  __os363 = v360;
  __str364 = v361;
  struct std__basic_ostream_char__std__char_traits_char__* t366 = __os363;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t367 = __str364;
  char* r368 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t367);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t369 = __str364;
  unsigned long r370 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t369);
  long cast371 = (long)r370;
  struct std__basic_ostream_char__std__char_traits_char__* r372 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t366, r368, cast371);
  __retval365 = r372;
  struct std__basic_ostream_char__std__char_traits_char__* t373 = __retval365;
  return t373;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v374, void* v375) {
bb376:
  struct std__basic_ostream_char__std__char_traits_char__* this377;
  void* __pf378;
  struct std__basic_ostream_char__std__char_traits_char__* __retval379;
  this377 = v374;
  __pf378 = v375;
  struct std__basic_ostream_char__std__char_traits_char__* t380 = this377;
  void* t381 = __pf378;
  struct std__basic_ostream_char__std__char_traits_char__* r382 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t381)(t380);
  __retval379 = r382;
  struct std__basic_ostream_char__std__char_traits_char__* t383 = __retval379;
  return t383;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v384) {
bb385:
  struct std__basic_ostream_char__std__char_traits_char__* __os386;
  struct std__basic_ostream_char__std__char_traits_char__* __retval387;
  __os386 = v384;
  struct std__basic_ostream_char__std__char_traits_char__* t388 = __os386;
  struct std__basic_ostream_char__std__char_traits_char__* r389 = std__ostream__flush(t388);
  __retval387 = r389;
  struct std__basic_ostream_char__std__char_traits_char__* t390 = __retval387;
  return t390;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v391) {
bb392:
  struct std__ctype_char_* __f393;
  struct std__ctype_char_* __retval394;
  __f393 = v391;
    struct std__ctype_char_* t395 = __f393;
    _Bool cast396 = (_Bool)t395;
    _Bool u397 = !cast396;
    if (u397) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t398 = __f393;
  __retval394 = t398;
  struct std__ctype_char_* t399 = __retval394;
  return t399;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v400, char v401) {
bb402:
  struct std__ctype_char_* this403;
  char __c404;
  char __retval405;
  this403 = v400;
  __c404 = v401;
  struct std__ctype_char_* t406 = this403;
    char t407 = t406->_M_widen_ok;
    _Bool cast408 = (_Bool)t407;
    if (cast408) {
      char t409 = __c404;
      unsigned char cast410 = (unsigned char)t409;
      unsigned long cast411 = (unsigned long)cast410;
      char t412 = t406->_M_widen[cast411];
      __retval405 = t412;
      char t413 = __retval405;
      return t413;
    }
  std__ctype_char____M_widen_init___const(t406);
  char t414 = __c404;
  void** v415 = (void**)t406;
  void* v416 = *((void**)v415);
  char vcall419 = (char)__VERIFIER_virtual_call_char_char(t406, 6, t414);
  __retval405 = vcall419;
  char t420 = __retval405;
  return t420;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v421, char v422) {
bb423:
  struct std__basic_ios_char__std__char_traits_char__* this424;
  char __c425;
  char __retval426;
  this424 = v421;
  __c425 = v422;
  struct std__basic_ios_char__std__char_traits_char__* t427 = this424;
  struct std__ctype_char_* t428 = t427->_M_ctype;
  struct std__ctype_char_* r429 = std__ctype_char__const__std____check_facet_std__ctype_char___(t428);
  char t430 = __c425;
  char r431 = std__ctype_char___widen_char__const(r429, t430);
  __retval426 = r431;
  char t432 = __retval426;
  return t432;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v433) {
bb434:
  struct std__basic_ostream_char__std__char_traits_char__* __os435;
  struct std__basic_ostream_char__std__char_traits_char__* __retval436;
  __os435 = v433;
  struct std__basic_ostream_char__std__char_traits_char__* t437 = __os435;
  struct std__basic_ostream_char__std__char_traits_char__* t438 = __os435;
  void** v439 = (void**)t438;
  void* v440 = *((void**)v439);
  unsigned char* cast441 = (unsigned char*)v440;
  long c442 = -24;
  unsigned char* ptr443 = &(cast441)[c442];
  long* cast444 = (long*)ptr443;
  long t445 = *cast444;
  unsigned char* cast446 = (unsigned char*)t438;
  unsigned char* ptr447 = &(cast446)[t445];
  struct std__basic_ostream_char__std__char_traits_char__* cast448 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr447;
  struct std__basic_ios_char__std__char_traits_char__* cast449 = (struct std__basic_ios_char__std__char_traits_char__*)cast448;
  char c450 = 10;
  char r451 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast449, c450);
  struct std__basic_ostream_char__std__char_traits_char__* r452 = std__ostream__put(t437, r451);
  struct std__basic_ostream_char__std__char_traits_char__* r453 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r452);
  __retval436 = r453;
  struct std__basic_ostream_char__std__char_traits_char__* t454 = __retval436;
  return t454;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v455) {
bb456:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this457;
  this457 = v455;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t458 = this457;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t458);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t458->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb459:
  int __retval460;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str461;
  struct std__allocator_char_ ref_tmp0462;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ it463;
  int c464 = 0;
  __retval460 = c464;
  char* cast465 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0462);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str461, cast465, &ref_tmp0462);
  {
    std__allocator_char____allocator(&ref_tmp0462);
  }
    __gnu_cxx____normal_iterator_char___std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_________normal_iterator(&it463);
    unsigned long c466 = 10;
    unsigned long c467 = 8;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r468 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____erase(&str461, c466, c467);
    char* cast469 = (char*)&(_str_1);
    _Bool r470 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str461, cast469);
    _Bool u471 = !r470;
    if (u471) {
    } else {
      char* cast472 = (char*)&(_str_2);
      char* c473 = _str_3;
      unsigned int c474 = 22;
      char* cast475 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast472, c473, c474, cast475);
    }
    struct std__basic_ostream_char__std__char_traits_char__* r476 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str461);
    struct std__basic_ostream_char__std__char_traits_char__* r477 = std__ostream__operator___std__ostream_____(r476, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c478 = 0;
    __retval460 = c478;
    int t479 = __retval460;
    int ret_val480 = t479;
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str461);
    }
    return ret_val480;
  int t481 = __retval460;
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
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v500, char* v501, struct std__allocator_char_* v502) {
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
      char* cast746 = (char*)&(_str_5);
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

