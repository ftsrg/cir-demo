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
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[8] = "STRINGS";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[13] = "string s is ";
char _str_2[43] = "\nstring1 converted to a C-Style string is ";
char _str_3[10] = "\nptr1 is ";
char _str_4[10] = "\nptr2 is ";
char _str_5[50] = "basic_string: construction from null is not valid";
char _str_6[24] = "basic_string::_M_create";
char _str_7[19] = "basic_string::copy";
char _str_8[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new__(unsigned long p0) { return malloc(p0); }
void operator_delete___2(void* p0, unsigned long p1) { free(p0); }
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____copy_char___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, unsigned long p3);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
long std__ios_base__width___const(struct std__ios_base* p0);
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
void operator_delete__(void* p0) { free(p0); }
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
        char* cast20 = (char*)&(_str_5);
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

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v44) {
bb45:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this46;
  unsigned long __retval47;
  this46 = v44;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t48 = this46;
  unsigned long r49 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t48);
  __retval47 = r49;
  unsigned long t50 = __retval47;
  return t50;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v51, unsigned long v52, char* v53) {
bb54:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this55;
  unsigned long __pos56;
  char* __s57;
  unsigned long __retval58;
  this55 = v51;
  __pos56 = v52;
  __s57 = v53;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t59 = this55;
    unsigned long t60 = __pos56;
    unsigned long r61 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t59);
    _Bool c62 = ((t60 > r61)) ? 1 : 0;
    if (c62) {
      char* cast63 = (char*)&(_str_8);
      char* t64 = __s57;
      unsigned long t65 = __pos56;
      unsigned long r66 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t59);
      std____throw_out_of_range_fmt(cast63, t64, t65, r66);
    }
  unsigned long t67 = __pos56;
  __retval58 = t67;
  unsigned long t68 = __retval58;
  return t68;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v69, unsigned long v70, unsigned long v71) {
bb72:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this73;
  unsigned long __pos74;
  unsigned long __off75;
  unsigned long __retval76;
  _Bool __testoff77;
  this73 = v69;
  __pos74 = v70;
  __off75 = v71;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t78 = this73;
  unsigned long t79 = __off75;
  unsigned long r80 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t78);
  unsigned long t81 = __pos74;
  unsigned long b82 = r80 - t81;
  _Bool c83 = ((t79 < b82)) ? 1 : 0;
  __testoff77 = c83;
  _Bool t84 = __testoff77;
  unsigned long ternary85;
  if (t84) {
    unsigned long t86 = __off75;
    ternary85 = (unsigned long)t86;
  } else {
    unsigned long r87 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t78);
    unsigned long t88 = __pos74;
    unsigned long b89 = r87 - t88;
    ternary85 = (unsigned long)b89;
  }
  __retval76 = ternary85;
  unsigned long t90 = __retval76;
  return t90;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4copyEPcmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____copy_char___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v91, char* v92, unsigned long v93, unsigned long v94) {
bb95:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this96;
  char* __s97;
  unsigned long __n98;
  unsigned long __pos99;
  unsigned long __retval100;
  this96 = v91;
  __s97 = v92;
  __n98 = v93;
  __pos99 = v94;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t101 = this96;
  unsigned long t102 = __pos99;
  char* cast103 = (char*)&(_str_7);
  unsigned long r104 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t101, t102, cast103);
  unsigned long t105 = __pos99;
  unsigned long t106 = __n98;
  unsigned long r107 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t101, t105, t106);
  __n98 = r107;
    unsigned long t108 = __n98;
    _Bool cast109 = (_Bool)t108;
    if (cast109) {
      char* t110 = __s97;
      char* r111 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t101);
      unsigned long t112 = __pos99;
      char* ptr113 = &(r111)[t112];
      unsigned long t114 = __n98;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t110, ptr113, t114);
    }
  unsigned long t115 = __n98;
  __retval100 = t115;
  unsigned long t116 = __retval100;
  return t116;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v117, int v118) {
bb119:
  int __a120;
  int __b121;
  int __retval122;
  __a120 = v117;
  __b121 = v118;
  int t123 = __a120;
  int t124 = __b121;
  int b125 = t123 | t124;
  __retval122 = b125;
  int t126 = __retval122;
  return t126;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v127) {
bb128:
  struct std__basic_ios_char__std__char_traits_char__* this129;
  int __retval130;
  this129 = v127;
  struct std__basic_ios_char__std__char_traits_char__* t131 = this129;
  struct std__ios_base* base132 = (struct std__ios_base*)((char *)t131 + 0);
  int t133 = base132->_M_streambuf_state;
  __retval130 = t133;
  int t134 = __retval130;
  return t134;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v135, int v136) {
bb137:
  struct std__basic_ios_char__std__char_traits_char__* this138;
  int __state139;
  this138 = v135;
  __state139 = v136;
  struct std__basic_ios_char__std__char_traits_char__* t140 = this138;
  int r141 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t140);
  int t142 = __state139;
  int r143 = std__operator_(r141, t142);
  std__basic_ios_char__std__char_traits_char_____clear(t140, r143);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v144, char* v145) {
bb146:
  struct std__basic_ostream_char__std__char_traits_char__* __out147;
  char* __s148;
  struct std__basic_ostream_char__std__char_traits_char__* __retval149;
  __out147 = v144;
  __s148 = v145;
    char* t150 = __s148;
    _Bool cast151 = (_Bool)t150;
    _Bool u152 = !cast151;
    if (u152) {
      struct std__basic_ostream_char__std__char_traits_char__* t153 = __out147;
      void** v154 = (void**)t153;
      void* v155 = *((void**)v154);
      unsigned char* cast156 = (unsigned char*)v155;
      long c157 = -24;
      unsigned char* ptr158 = &(cast156)[c157];
      long* cast159 = (long*)ptr158;
      long t160 = *cast159;
      unsigned char* cast161 = (unsigned char*)t153;
      unsigned char* ptr162 = &(cast161)[t160];
      struct std__basic_ostream_char__std__char_traits_char__* cast163 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr162;
      struct std__basic_ios_char__std__char_traits_char__* cast164 = (struct std__basic_ios_char__std__char_traits_char__*)cast163;
      int t165 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast164, t165);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t166 = __out147;
      char* t167 = __s148;
      char* t168 = __s148;
      unsigned long r169 = std__char_traits_char___length(t168);
      long cast170 = (long)r169;
      struct std__basic_ostream_char__std__char_traits_char__* r171 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t166, t167, cast170);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t172 = __out147;
  __retval149 = t172;
  struct std__basic_ostream_char__std__char_traits_char__* t173 = __retval149;
  return t173;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v174) {
bb175:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this176;
  char* __retval177;
  this176 = v174;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t178 = this176;
  char* r179 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t178);
  __retval177 = r179;
  char* t180 = __retval177;
  return t180;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v181, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v182) {
bb183:
  struct std__basic_ostream_char__std__char_traits_char__* __os184;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str185;
  struct std__basic_ostream_char__std__char_traits_char__* __retval186;
  __os184 = v181;
  __str185 = v182;
  struct std__basic_ostream_char__std__char_traits_char__* t187 = __os184;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t188 = __str185;
  char* r189 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t188);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t190 = __str185;
  unsigned long r191 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t190);
  long cast192 = (long)r191;
  struct std__basic_ostream_char__std__char_traits_char__* r193 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t187, r189, cast192);
  __retval186 = r193;
  struct std__basic_ostream_char__std__char_traits_char__* t194 = __retval186;
  return t194;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5c_strEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v195) {
bb196:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this197;
  char* __retval198;
  this197 = v195;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t199 = this197;
  char* r200 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t199);
  __retval198 = r200;
  char* t201 = __retval198;
  return t201;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v202) {
bb203:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this204;
  char* __retval205;
  this204 = v202;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t206 = this204;
  char* r207 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t206);
  __retval205 = r207;
  char* t208 = __retval205;
  return t208;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v209) {
bb210:
  struct std__ios_base* this211;
  long __retval212;
  this211 = v209;
  struct std__ios_base* t213 = this211;
  long t214 = t213->_M_width;
  __retval212 = t214;
  long t215 = __retval212;
  return t215;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v216, char v217) {
bb218:
  struct std__basic_ostream_char__std__char_traits_char__* __out219;
  char __c220;
  struct std__basic_ostream_char__std__char_traits_char__* __retval221;
  __out219 = v216;
  __c220 = v217;
    struct std__basic_ostream_char__std__char_traits_char__* t222 = __out219;
    void** v223 = (void**)t222;
    void* v224 = *((void**)v223);
    unsigned char* cast225 = (unsigned char*)v224;
    long c226 = -24;
    unsigned char* ptr227 = &(cast225)[c226];
    long* cast228 = (long*)ptr227;
    long t229 = *cast228;
    unsigned char* cast230 = (unsigned char*)t222;
    unsigned char* ptr231 = &(cast230)[t229];
    struct std__basic_ostream_char__std__char_traits_char__* cast232 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr231;
    struct std__ios_base* cast233 = (struct std__ios_base*)cast232;
    long r234 = std__ios_base__width___const(cast233);
    long c235 = 0;
    _Bool c236 = ((r234 != c235)) ? 1 : 0;
    if (c236) {
      struct std__basic_ostream_char__std__char_traits_char__* t237 = __out219;
      long c238 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r239 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t237, &__c220, c238);
      __retval221 = r239;
      struct std__basic_ostream_char__std__char_traits_char__* t240 = __retval221;
      return t240;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t241 = __out219;
  char t242 = __c220;
  struct std__basic_ostream_char__std__char_traits_char__* r243 = std__ostream__put(t241, t242);
  struct std__basic_ostream_char__std__char_traits_char__* t244 = __out219;
  __retval221 = t244;
  struct std__basic_ostream_char__std__char_traits_char__* t245 = __retval221;
  return t245;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v246, void* v247) {
bb248:
  struct std__basic_ostream_char__std__char_traits_char__* this249;
  void* __pf250;
  struct std__basic_ostream_char__std__char_traits_char__* __retval251;
  this249 = v246;
  __pf250 = v247;
  struct std__basic_ostream_char__std__char_traits_char__* t252 = this249;
  void* t253 = __pf250;
  struct std__basic_ostream_char__std__char_traits_char__* r254 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t253)(t252);
  __retval251 = r254;
  struct std__basic_ostream_char__std__char_traits_char__* t255 = __retval251;
  return t255;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v256) {
bb257:
  struct std__basic_ostream_char__std__char_traits_char__* __os258;
  struct std__basic_ostream_char__std__char_traits_char__* __retval259;
  __os258 = v256;
  struct std__basic_ostream_char__std__char_traits_char__* t260 = __os258;
  struct std__basic_ostream_char__std__char_traits_char__* r261 = std__ostream__flush(t260);
  __retval259 = r261;
  struct std__basic_ostream_char__std__char_traits_char__* t262 = __retval259;
  return t262;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v263) {
bb264:
  struct std__ctype_char_* __f265;
  struct std__ctype_char_* __retval266;
  __f265 = v263;
    struct std__ctype_char_* t267 = __f265;
    _Bool cast268 = (_Bool)t267;
    _Bool u269 = !cast268;
    if (u269) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t270 = __f265;
  __retval266 = t270;
  struct std__ctype_char_* t271 = __retval266;
  return t271;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v272, char v273) {
bb274:
  struct std__ctype_char_* this275;
  char __c276;
  char __retval277;
  this275 = v272;
  __c276 = v273;
  struct std__ctype_char_* t278 = this275;
    char t279 = t278->_M_widen_ok;
    _Bool cast280 = (_Bool)t279;
    if (cast280) {
      char t281 = __c276;
      unsigned char cast282 = (unsigned char)t281;
      unsigned long cast283 = (unsigned long)cast282;
      char t284 = t278->_M_widen[cast283];
      __retval277 = t284;
      char t285 = __retval277;
      return t285;
    }
  std__ctype_char____M_widen_init___const(t278);
  char t286 = __c276;
  void** v287 = (void**)t278;
  void* v288 = *((void**)v287);
  char vcall291 = (char)__VERIFIER_virtual_call_char_char(t278, 6, t286);
  __retval277 = vcall291;
  char t292 = __retval277;
  return t292;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v293, char v294) {
bb295:
  struct std__basic_ios_char__std__char_traits_char__* this296;
  char __c297;
  char __retval298;
  this296 = v293;
  __c297 = v294;
  struct std__basic_ios_char__std__char_traits_char__* t299 = this296;
  struct std__ctype_char_* t300 = t299->_M_ctype;
  struct std__ctype_char_* r301 = std__ctype_char__const__std____check_facet_std__ctype_char___(t300);
  char t302 = __c297;
  char r303 = std__ctype_char___widen_char__const(r301, t302);
  __retval298 = r303;
  char t304 = __retval298;
  return t304;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v305) {
bb306:
  struct std__basic_ostream_char__std__char_traits_char__* __os307;
  struct std__basic_ostream_char__std__char_traits_char__* __retval308;
  __os307 = v305;
  struct std__basic_ostream_char__std__char_traits_char__* t309 = __os307;
  struct std__basic_ostream_char__std__char_traits_char__* t310 = __os307;
  void** v311 = (void**)t310;
  void* v312 = *((void**)v311);
  unsigned char* cast313 = (unsigned char*)v312;
  long c314 = -24;
  unsigned char* ptr315 = &(cast313)[c314];
  long* cast316 = (long*)ptr315;
  long t317 = *cast316;
  unsigned char* cast318 = (unsigned char*)t310;
  unsigned char* ptr319 = &(cast318)[t317];
  struct std__basic_ostream_char__std__char_traits_char__* cast320 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr319;
  struct std__basic_ios_char__std__char_traits_char__* cast321 = (struct std__basic_ios_char__std__char_traits_char__*)cast320;
  char c322 = 10;
  char r323 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast321, c322);
  struct std__basic_ostream_char__std__char_traits_char__* r324 = std__ostream__put(t309, r323);
  struct std__basic_ostream_char__std__char_traits_char__* r325 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r324);
  __retval308 = r325;
  struct std__basic_ostream_char__std__char_traits_char__* t326 = __retval308;
  return t326;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v327) {
bb328:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this329;
  this329 = v327;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t330 = this329;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t330);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t330->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb331:
  int __retval332;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string1333;
  struct std__allocator_char_ ref_tmp0334;
  char* ptr1335;
  int length336;
  char* ptr2337;
  char* __new_result338;
  int c339 = 0;
  __retval332 = c339;
  char* cast340 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0334);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&string1333, cast340, &ref_tmp0334);
  {
    std__allocator_char____allocator(&ref_tmp0334);
  }
    char* c341 = ((void*)0);
    ptr1335 = c341;
    unsigned long r342 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(&string1333);
    int cast343 = (int)r342;
    length336 = cast343;
    int t344 = length336;
    int c345 = 1;
    int b346 = t344 + c345;
    unsigned long cast347 = (unsigned long)b346;
    void* r348 = operator_new__(cast347);
      char* cast349 = (char*)r348;
      __new_result338 = cast349;
    char* t350 = __new_result338;
    ptr2337 = t350;
    char* t351 = ptr2337;
    int t352 = length336;
    unsigned long cast353 = (unsigned long)t352;
    unsigned long c354 = 0;
    unsigned long r355 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____copy_char___unsigned_long__unsigned_long__const(&string1333, t351, cast353, c354);
    char c356 = 0;
    int t357 = length336;
    long cast358 = (long)t357;
    char* t359 = ptr2337;
    char* ptr360 = &(t359)[cast358];
    *ptr360 = c356;
    char* cast361 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* r362 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast361);
    struct std__basic_ostream_char__std__char_traits_char__* r363 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r362, &string1333);
    char* cast364 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r365 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r363, cast364);
    char* r366 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(&string1333);
    struct std__basic_ostream_char__std__char_traits_char__* r367 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r365, r366);
    char* cast368 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r369 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r367, cast368);
    char* r370 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data(&string1333);
    ptr1335 = r370;
      int i371;
      int c372 = 0;
      i371 = c372;
      while (1) {
        int t374 = i371;
        int t375 = length336;
        _Bool c376 = ((t374 < t375)) ? 1 : 0;
        if (!c376) break;
        char* t377 = ptr1335;
        int t378 = i371;
        char* ptr379 = &(t377)[t378];
        char t380 = *ptr379;
        struct std__basic_ostream_char__std__char_traits_char__* r381 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(&_ZSt4cout, t380);
      for_step373: ;
        int t382 = i371;
        int u383 = t382 + 1;
        i371 = u383;
      }
    char* cast384 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r385 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast384);
    char* t386 = ptr2337;
    struct std__basic_ostream_char__std__char_traits_char__* r387 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r385, t386);
    struct std__basic_ostream_char__std__char_traits_char__* r388 = std__ostream__operator___std__ostream_____(r387, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    char* t389 = ptr2337;
    char* c390 = ((void*)0);
    _Bool c391 = ((t389 != c390)) ? 1 : 0;
    if (c391) {
      void* cast392 = (void*)t389;
      {
        operator_delete__(cast392);
      }
    }
    int c393 = 0;
    __retval332 = c393;
    int t394 = __retval332;
    int ret_val395 = t394;
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&string1333);
    }
    return ret_val395;
  int t396 = __retval332;
  return t396;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v397) {
bb398:
  struct std____new_allocator_char_* this399;
  this399 = v397;
  struct std____new_allocator_char_* t400 = this399;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v401) {
bb402:
  char* __r403;
  char* __retval404;
  __r403 = v401;
  char* t405 = __r403;
  __retval404 = t405;
  char* t406 = __retval404;
  return t406;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v407) {
bb408:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this409;
  char* __retval410;
  this409 = v407;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t411 = this409;
  char* cast412 = (char*)&(t411->field2._M_local_buf);
  char* r413 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast412);
  __retval410 = r413;
  char* t414 = __retval410;
  return t414;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v415, char* v416, struct std__allocator_char_* v417) {
bb418:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this419;
  char* __dat420;
  struct std__allocator_char_* __a421;
  this419 = v415;
  __dat420 = v416;
  __a421 = v417;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t422 = this419;
  struct std__allocator_char_* base423 = (struct std__allocator_char_*)((char *)t422 + 0);
  struct std__allocator_char_* t424 = __a421;
  std__allocator_char___allocator(base423, t424);
    char* t425 = __dat420;
    t422->_M_p = t425;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb426:
  _Bool __retval427;
    _Bool c428 = 0;
    __retval427 = c428;
    _Bool t429 = __retval427;
    return t429;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v430, char* v431) {
bb432:
  char* __c1433;
  char* __c2434;
  _Bool __retval435;
  __c1433 = v430;
  __c2434 = v431;
  char* t436 = __c1433;
  char t437 = *t436;
  int cast438 = (int)t437;
  char* t439 = __c2434;
  char t440 = *t439;
  int cast441 = (int)t440;
  _Bool c442 = ((cast438 == cast441)) ? 1 : 0;
  __retval435 = c442;
  _Bool t443 = __retval435;
  return t443;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v444) {
bb445:
  char* __p446;
  unsigned long __retval447;
  unsigned long __i448;
  __p446 = v444;
  unsigned long c449 = 0;
  __i448 = c449;
    char ref_tmp0450;
    while (1) {
      unsigned long t451 = __i448;
      char* t452 = __p446;
      char* ptr453 = &(t452)[t451];
      char c454 = 0;
      ref_tmp0450 = c454;
      _Bool r455 = __gnu_cxx__char_traits_char___eq(ptr453, &ref_tmp0450);
      _Bool u456 = !r455;
      if (!u456) break;
      unsigned long t457 = __i448;
      unsigned long u458 = t457 + 1;
      __i448 = u458;
    }
  unsigned long t459 = __i448;
  __retval447 = t459;
  unsigned long t460 = __retval447;
  return t460;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v461) {
bb462:
  char* __s463;
  unsigned long __retval464;
  __s463 = v461;
    _Bool r465 = std____is_constant_evaluated();
    if (r465) {
      char* t466 = __s463;
      unsigned long r467 = __gnu_cxx__char_traits_char___length(t466);
      __retval464 = r467;
      unsigned long t468 = __retval464;
      return t468;
    }
  char* t469 = __s463;
  unsigned long r470 = strlen(t469);
  __retval464 = r470;
  unsigned long t471 = __retval464;
  return t471;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v472, char* v473, struct std__random_access_iterator_tag v474) {
bb475:
  char* __first476;
  char* __last477;
  struct std__random_access_iterator_tag unnamed478;
  long __retval479;
  __first476 = v472;
  __last477 = v473;
  unnamed478 = v474;
  char* t480 = __last477;
  char* t481 = __first476;
  long diff482 = t480 - t481;
  __retval479 = diff482;
  long t483 = __retval479;
  return t483;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v484) {
bb485:
  char** unnamed486;
  struct std__random_access_iterator_tag __retval487;
  unnamed486 = v484;
  struct std__random_access_iterator_tag t488 = __retval487;
  return t488;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v489, char* v490) {
bb491:
  char* __first492;
  char* __last493;
  long __retval494;
  struct std__random_access_iterator_tag agg_tmp0495;
  __first492 = v489;
  __last493 = v490;
  char* t496 = __first492;
  char* t497 = __last493;
  struct std__random_access_iterator_tag r498 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first492);
  agg_tmp0495 = r498;
  struct std__random_access_iterator_tag t499 = agg_tmp0495;
  long r500 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t496, t497, t499);
  __retval494 = r500;
  long t501 = __retval494;
  return t501;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v502, char* v503) {
bb504:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this505;
  char* __p506;
  this505 = v502;
  __p506 = v503;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t507 = this505;
  char* t508 = __p506;
  t507->_M_dataplus._M_p = t508;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v509) {
bb510:
  struct std__allocator_char_* __a511;
  unsigned long __retval512;
  __a511 = v509;
  unsigned long c513 = -1;
  unsigned long c514 = 1;
  unsigned long b515 = c513 / c514;
  __retval512 = b515;
  unsigned long t516 = __retval512;
  return t516;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v517) {
bb518:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this519;
  struct std__allocator_char_* __retval520;
  this519 = v517;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t521 = this519;
  struct std__allocator_char_* base522 = (struct std__allocator_char_*)((char *)&(t521->_M_dataplus) + 0);
  __retval520 = base522;
  struct std__allocator_char_* t523 = __retval520;
  return t523;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v524, unsigned long* v525) {
bb526:
  unsigned long* __a527;
  unsigned long* __b528;
  unsigned long* __retval529;
  __a527 = v524;
  __b528 = v525;
    unsigned long* t530 = __b528;
    unsigned long t531 = *t530;
    unsigned long* t532 = __a527;
    unsigned long t533 = *t532;
    _Bool c534 = ((t531 < t533)) ? 1 : 0;
    if (c534) {
      unsigned long* t535 = __b528;
      __retval529 = t535;
      unsigned long* t536 = __retval529;
      return t536;
    }
  unsigned long* t537 = __a527;
  __retval529 = t537;
  unsigned long* t538 = __retval529;
  return t538;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v539) {
bb540:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this541;
  unsigned long __retval542;
  unsigned long __diffmax543;
  unsigned long __allocmax544;
  this541 = v539;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t545 = this541;
  unsigned long c546 = 9223372036854775807;
  __diffmax543 = c546;
  struct std__allocator_char_* r547 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t545);
  unsigned long r548 = std__allocator_traits_std__allocator_char_____max_size(r547);
  __allocmax544 = r548;
  unsigned long* r549 = unsigned_long_const__std__min_unsigned_long_(&__diffmax543, &__allocmax544);
  unsigned long t550 = *r549;
  unsigned long c551 = 1;
  unsigned long b552 = t550 - c551;
  __retval542 = b552;
  unsigned long t553 = __retval542;
  return t553;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v554) {
bb555:
  struct std____new_allocator_char_* this556;
  unsigned long __retval557;
  this556 = v554;
  struct std____new_allocator_char_* t558 = this556;
  unsigned long c559 = 9223372036854775807;
  unsigned long c560 = 1;
  unsigned long b561 = c559 / c560;
  __retval557 = b561;
  unsigned long t562 = __retval557;
  return t562;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v563, unsigned long v564, void* v565) {
bb566:
  struct std____new_allocator_char_* this567;
  unsigned long __n568;
  void* unnamed569;
  char* __retval570;
  this567 = v563;
  __n568 = v564;
  unnamed569 = v565;
  struct std____new_allocator_char_* t571 = this567;
    unsigned long t572 = __n568;
    unsigned long r573 = std____new_allocator_char____M_max_size___const(t571);
    _Bool c574 = ((t572 > r573)) ? 1 : 0;
    if (c574) {
        unsigned long t575 = __n568;
        unsigned long c576 = -1;
        unsigned long c577 = 1;
        unsigned long b578 = c576 / c577;
        _Bool c579 = ((t575 > b578)) ? 1 : 0;
        if (c579) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c580 = 1;
    unsigned long c581 = 16;
    _Bool c582 = ((c580 > c581)) ? 1 : 0;
    if (c582) {
      unsigned long __al583;
      unsigned long c584 = 1;
      __al583 = c584;
      unsigned long t585 = __n568;
      unsigned long c586 = 1;
      unsigned long b587 = t585 * c586;
      unsigned long t588 = __al583;
      void* r589 = operator_new_2(b587, t588);
      char* cast590 = (char*)r589;
      __retval570 = cast590;
      char* t591 = __retval570;
      return t591;
    }
  unsigned long t592 = __n568;
  unsigned long c593 = 1;
  unsigned long b594 = t592 * c593;
  void* r595 = operator_new(b594);
  char* cast596 = (char*)r595;
  __retval570 = cast596;
  char* t597 = __retval570;
  return t597;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v598, unsigned long v599) {
bb600:
  struct std__allocator_char_* this601;
  unsigned long __n602;
  char* __retval603;
  this601 = v598;
  __n602 = v599;
  struct std__allocator_char_* t604 = this601;
    _Bool r605 = std____is_constant_evaluated();
    if (r605) {
        unsigned long t606 = __n602;
        unsigned long c607 = 1;
        unsigned long ovr608;
        _Bool ovf609 = __builtin_mul_overflow(t606, c607, &ovr608);
        __n602 = ovr608;
        if (ovf609) {
          std____throw_bad_array_new_length();
        }
      unsigned long t610 = __n602;
      void* r611 = operator_new(t610);
      char* cast612 = (char*)r611;
      __retval603 = cast612;
      char* t613 = __retval603;
      return t613;
    }
  struct std____new_allocator_char_* base614 = (struct std____new_allocator_char_*)((char *)t604 + 0);
  unsigned long t615 = __n602;
  void* c616 = ((void*)0);
  char* r617 = std____new_allocator_char___allocate(base614, t615, c616);
  __retval603 = r617;
  char* t618 = __retval603;
  return t618;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v619, unsigned long v620) {
bb621:
  struct std__allocator_char_* __a622;
  unsigned long __n623;
  char* __retval624;
  __a622 = v619;
  __n623 = v620;
  struct std__allocator_char_* t625 = __a622;
  unsigned long t626 = __n623;
  char* r627 = std__allocator_char___allocate(t625, t626);
  __retval624 = r627;
  char* t628 = __retval624;
  return t628;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v629, unsigned long v630) {
bb631:
  struct std__allocator_char_* __a632;
  unsigned long __n633;
  char* __retval634;
  char* __p635;
  __a632 = v629;
  __n633 = v630;
  struct std__allocator_char_* t636 = __a632;
  unsigned long t637 = __n633;
  char* r638 = std__allocator_traits_std__allocator_char_____allocate(t636, t637);
  __p635 = r638;
  char* t639 = __p635;
  __retval634 = t639;
  char* t640 = __retval634;
  return t640;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v641) {
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

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v648, unsigned long* v649, unsigned long v650) {
bb651:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this652;
  unsigned long* __capacity653;
  unsigned long __old_capacity654;
  char* __retval655;
  this652 = v648;
  __capacity653 = v649;
  __old_capacity654 = v650;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t656 = this652;
    unsigned long* t657 = __capacity653;
    unsigned long t658 = *t657;
    unsigned long r659 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t656);
    _Bool c660 = ((t658 > r659)) ? 1 : 0;
    if (c660) {
      char* cast661 = (char*)&(_str_6);
      std____throw_length_error(cast661);
    }
    unsigned long* t662 = __capacity653;
    unsigned long t663 = *t662;
    unsigned long t664 = __old_capacity654;
    _Bool c665 = ((t663 > t664)) ? 1 : 0;
    _Bool ternary666;
    if (c665) {
      unsigned long* t667 = __capacity653;
      unsigned long t668 = *t667;
      unsigned long c669 = 2;
      unsigned long t670 = __old_capacity654;
      unsigned long b671 = c669 * t670;
      _Bool c672 = ((t668 < b671)) ? 1 : 0;
      ternary666 = (_Bool)c672;
    } else {
      _Bool c673 = 0;
      ternary666 = (_Bool)c673;
    }
    if (ternary666) {
      unsigned long c674 = 2;
      unsigned long t675 = __old_capacity654;
      unsigned long b676 = c674 * t675;
      unsigned long* t677 = __capacity653;
      *t677 = b676;
        unsigned long* t678 = __capacity653;
        unsigned long t679 = *t678;
        unsigned long r680 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t656);
        _Bool c681 = ((t679 > r680)) ? 1 : 0;
        if (c681) {
          unsigned long r682 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t656);
          unsigned long* t683 = __capacity653;
          *t683 = r682;
        }
    }
  struct std__allocator_char_* r684 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t656);
  unsigned long* t685 = __capacity653;
  unsigned long t686 = *t685;
  unsigned long c687 = 1;
  unsigned long b688 = t686 + c687;
  char* r689 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r684, b688);
  __retval655 = r689;
  char* t690 = __retval655;
  return t690;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v691, unsigned long v692) {
bb693:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this694;
  unsigned long __capacity695;
  this694 = v691;
  __capacity695 = v692;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t696 = this694;
  unsigned long t697 = __capacity695;
  t696->field2._M_allocated_capacity = t697;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb698:
  _Bool __retval699;
    _Bool c700 = 0;
    __retval699 = c700;
    _Bool t701 = __retval699;
    return t701;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v702) {
bb703:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this704;
  this704 = v702;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t705 = this704;
    _Bool r706 = std__is_constant_evaluated();
    if (r706) {
        unsigned long __i707;
        unsigned long c708 = 0;
        __i707 = c708;
        while (1) {
          unsigned long t710 = __i707;
          unsigned long c711 = 15;
          _Bool c712 = ((t710 <= c711)) ? 1 : 0;
          if (!c712) break;
          char c713 = 0;
          unsigned long t714 = __i707;
          t705->field2._M_local_buf[t714] = c713;
        for_step709: ;
          unsigned long t715 = __i707;
          unsigned long u716 = t715 + 1;
          __i707 = u716;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v717, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v718) {
bb719:
  struct _Guard* this720;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s721;
  this720 = v717;
  __s721 = v718;
  struct _Guard* t722 = this720;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t723 = __s721;
  t722->_M_guarded = t723;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v724, char* v725) {
bb726:
  char* __location727;
  char* __args728;
  char* __retval729;
  void* __loc730;
  __location727 = v724;
  __args728 = v725;
  char* t731 = __location727;
  void* cast732 = (void*)t731;
  __loc730 = cast732;
    void* t733 = __loc730;
    char* cast734 = (char*)t733;
    char* t735 = __args728;
    char t736 = *t735;
    *cast734 = t736;
    __retval729 = cast734;
    char* t737 = __retval729;
    return t737;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v738, char* v739) {
bb740:
  char* __c1741;
  char* __c2742;
  __c1741 = v738;
  __c2742 = v739;
    _Bool r743 = std____is_constant_evaluated();
    if (r743) {
      char* t744 = __c1741;
      char* t745 = __c2742;
      char* r746 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t744, t745);
    } else {
      char* t747 = __c2742;
      char t748 = *t747;
      char* t749 = __c1741;
      *t749 = t748;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v750, char* v751, unsigned long v752) {
bb753:
  char* __s1754;
  char* __s2755;
  unsigned long __n756;
  char* __retval757;
  __s1754 = v750;
  __s2755 = v751;
  __n756 = v752;
    unsigned long t758 = __n756;
    unsigned long c759 = 0;
    _Bool c760 = ((t758 == c759)) ? 1 : 0;
    if (c760) {
      char* t761 = __s1754;
      __retval757 = t761;
      char* t762 = __retval757;
      return t762;
    }
    _Bool r763 = std____is_constant_evaluated();
    if (r763) {
        unsigned long __i764;
        unsigned long c765 = 0;
        __i764 = c765;
        while (1) {
          unsigned long t767 = __i764;
          unsigned long t768 = __n756;
          _Bool c769 = ((t767 < t768)) ? 1 : 0;
          if (!c769) break;
          char* t770 = __s1754;
          unsigned long t771 = __i764;
          char* ptr772 = &(t770)[t771];
          unsigned long t773 = __i764;
          char* t774 = __s2755;
          char* ptr775 = &(t774)[t773];
          char* r776 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr772, ptr775);
        for_step766: ;
          unsigned long t777 = __i764;
          unsigned long u778 = t777 + 1;
          __i764 = u778;
        }
      char* t779 = __s1754;
      __retval757 = t779;
      char* t780 = __retval757;
      return t780;
    }
  char* t781 = __s1754;
  void* cast782 = (void*)t781;
  char* t783 = __s2755;
  void* cast784 = (void*)t783;
  unsigned long t785 = __n756;
  unsigned long c786 = 1;
  unsigned long b787 = t785 * c786;
  void* r788 = memcpy(cast782, cast784, b787);
  char* t789 = __s1754;
  __retval757 = t789;
  char* t790 = __retval757;
  return t790;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v791, char* v792, unsigned long v793) {
bb794:
  char* __s1795;
  char* __s2796;
  unsigned long __n797;
  char* __retval798;
  __s1795 = v791;
  __s2796 = v792;
  __n797 = v793;
    unsigned long t799 = __n797;
    unsigned long c800 = 0;
    _Bool c801 = ((t799 == c800)) ? 1 : 0;
    if (c801) {
      char* t802 = __s1795;
      __retval798 = t802;
      char* t803 = __retval798;
      return t803;
    }
    _Bool r804 = std____is_constant_evaluated();
    if (r804) {
      char* t805 = __s1795;
      char* t806 = __s2796;
      unsigned long t807 = __n797;
      char* r808 = __gnu_cxx__char_traits_char___copy(t805, t806, t807);
      __retval798 = r808;
      char* t809 = __retval798;
      return t809;
    }
  char* t810 = __s1795;
  void* cast811 = (void*)t810;
  char* t812 = __s2796;
  void* cast813 = (void*)t812;
  unsigned long t814 = __n797;
  void* r815 = memcpy(cast811, cast813, t814);
  char* cast816 = (char*)r815;
  __retval798 = cast816;
  char* t817 = __retval798;
  return t817;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v818, char* v819, unsigned long v820) {
bb821:
  char* __d822;
  char* __s823;
  unsigned long __n824;
  __d822 = v818;
  __s823 = v819;
  __n824 = v820;
    unsigned long t825 = __n824;
    unsigned long c826 = 1;
    _Bool c827 = ((t825 == c826)) ? 1 : 0;
    if (c827) {
      char* t828 = __d822;
      char* t829 = __s823;
      std__char_traits_char___assign(t828, t829);
    } else {
      char* t830 = __d822;
      char* t831 = __s823;
      unsigned long t832 = __n824;
      char* r833 = std__char_traits_char___copy(t830, t831, t832);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v834) {
bb835:
  char* __it836;
  char* __retval837;
  __it836 = v834;
  char* t838 = __it836;
  __retval837 = t838;
  char* t839 = __retval837;
  return t839;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v840, char* v841, char* v842) {
bb843:
  char* __p844;
  char* __k1845;
  char* __k2846;
  __p844 = v840;
  __k1845 = v841;
  __k2846 = v842;
    char* t847 = __p844;
    char* t848 = __k1845;
    char* r849 = char_const__std____niter_base_char_const__(t848);
    char* t850 = __k2846;
    char* t851 = __k1845;
    long diff852 = t850 - t851;
    unsigned long cast853 = (unsigned long)diff852;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t847, r849, cast853);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v854) {
bb855:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this856;
  char* __retval857;
  this856 = v854;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t858 = this856;
  char* t859 = t858->_M_dataplus._M_p;
  __retval857 = t859;
  char* t860 = __retval857;
  return t860;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v861, unsigned long v862) {
bb863:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this864;
  unsigned long __length865;
  this864 = v861;
  __length865 = v862;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t866 = this864;
  unsigned long t867 = __length865;
  t866->_M_string_length = t867;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v868, unsigned long v869) {
bb870:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this871;
  unsigned long __n872;
  char ref_tmp0873;
  this871 = v868;
  __n872 = v869;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t874 = this871;
  unsigned long t875 = __n872;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t874, t875);
  unsigned long t876 = __n872;
  char* r877 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t874);
  char* ptr878 = &(r877)[t876];
  char c879 = 0;
  ref_tmp0873 = c879;
  std__char_traits_char___assign(ptr878, &ref_tmp0873);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v880) {
bb881:
  struct _Guard* this882;
  this882 = v880;
  struct _Guard* t883 = this882;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t884 = t883->_M_guarded;
    _Bool cast885 = (_Bool)t884;
    if (cast885) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t886 = t883->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t886);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v887, char* v888, char* v889, struct std__forward_iterator_tag v890) {
bb891:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this892;
  char* __beg893;
  char* __end894;
  struct std__forward_iterator_tag unnamed895;
  unsigned long __dnew896;
  struct _Guard __guard897;
  this892 = v887;
  __beg893 = v888;
  __end894 = v889;
  unnamed895 = v890;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t898 = this892;
  char* t899 = __beg893;
  char* t900 = __end894;
  long r901 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t899, t900);
  unsigned long cast902 = (unsigned long)r901;
  __dnew896 = cast902;
    unsigned long t903 = __dnew896;
    unsigned long c904 = 15;
    _Bool c905 = ((t903 > c904)) ? 1 : 0;
    if (c905) {
      unsigned long c906 = 0;
      char* r907 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t898, &__dnew896, c906);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t898, r907);
      unsigned long t908 = __dnew896;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t898, t908);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t898);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard897, t898);
    char* r909 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t898);
    char* t910 = __beg893;
    char* t911 = __end894;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r909, t910, t911);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c912 = ((void*)0);
    __guard897._M_guarded = c912;
    unsigned long t913 = __dnew896;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t898, t913);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard897);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v914) {
bb915:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this916;
  this916 = v914;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t917 = this916;
  {
    struct std__allocator_char_* base918 = (struct std__allocator_char_*)((char *)t917 + 0);
    std__allocator_char____allocator(base918);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v919, struct std____new_allocator_char_* v920) {
bb921:
  struct std____new_allocator_char_* this922;
  struct std____new_allocator_char_* unnamed923;
  this922 = v919;
  unnamed923 = v920;
  struct std____new_allocator_char_* t924 = this922;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v925, struct std__allocator_char_* v926) {
bb927:
  struct std__allocator_char_* this928;
  struct std__allocator_char_* __a929;
  this928 = v925;
  __a929 = v926;
  struct std__allocator_char_* t930 = this928;
  struct std____new_allocator_char_* base931 = (struct std____new_allocator_char_*)((char *)t930 + 0);
  struct std__allocator_char_* t932 = __a929;
  struct std____new_allocator_char_* base933 = (struct std____new_allocator_char_*)((char *)t932 + 0);
  std____new_allocator_char_____new_allocator(base931, base933);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v934) {
bb935:
  char* __r936;
  char* __retval937;
  __r936 = v934;
  char* t938 = __r936;
  __retval937 = t938;
  char* t939 = __retval937;
  return t939;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v940) {
bb941:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this942;
  char* __retval943;
  this942 = v940;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t944 = this942;
  char* cast945 = (char*)&(t944->field2._M_local_buf);
  char* r946 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast945);
  __retval943 = r946;
  char* t947 = __retval943;
  return t947;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v948) {
bb949:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this950;
  _Bool __retval951;
  this950 = v948;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t952 = this950;
    char* r953 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t952);
    char* r954 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t952);
    _Bool c955 = ((r953 == r954)) ? 1 : 0;
    if (c955) {
        unsigned long t956 = t952->_M_string_length;
        unsigned long c957 = 15;
        _Bool c958 = ((t956 > c957)) ? 1 : 0;
        if (c958) {
          __builtin_unreachable();
        }
      _Bool c959 = 1;
      __retval951 = c959;
      _Bool t960 = __retval951;
      return t960;
    }
  _Bool c961 = 0;
  __retval951 = c961;
  _Bool t962 = __retval951;
  return t962;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v963, char* v964, unsigned long v965) {
bb966:
  struct std____new_allocator_char_* this967;
  char* __p968;
  unsigned long __n969;
  this967 = v963;
  __p968 = v964;
  __n969 = v965;
  struct std____new_allocator_char_* t970 = this967;
    unsigned long c971 = 1;
    unsigned long c972 = 16;
    _Bool c973 = ((c971 > c972)) ? 1 : 0;
    if (c973) {
      char* t974 = __p968;
      void* cast975 = (void*)t974;
      unsigned long t976 = __n969;
      unsigned long c977 = 1;
      unsigned long b978 = t976 * c977;
      unsigned long c979 = 1;
      operator_delete_3(cast975, b978, c979);
      return;
    }
  char* t980 = __p968;
  void* cast981 = (void*)t980;
  unsigned long t982 = __n969;
  unsigned long c983 = 1;
  unsigned long b984 = t982 * c983;
  operator_delete_2(cast981, b984);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v985, char* v986, unsigned long v987) {
bb988:
  struct std__allocator_char_* this989;
  char* __p990;
  unsigned long __n991;
  this989 = v985;
  __p990 = v986;
  __n991 = v987;
  struct std__allocator_char_* t992 = this989;
    _Bool r993 = std____is_constant_evaluated();
    if (r993) {
      char* t994 = __p990;
      void* cast995 = (void*)t994;
      operator_delete(cast995);
      return;
    }
  struct std____new_allocator_char_* base996 = (struct std____new_allocator_char_*)((char *)t992 + 0);
  char* t997 = __p990;
  unsigned long t998 = __n991;
  std____new_allocator_char___deallocate(base996, t997, t998);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v999, char* v1000, unsigned long v1001) {
bb1002:
  struct std__allocator_char_* __a1003;
  char* __p1004;
  unsigned long __n1005;
  __a1003 = v999;
  __p1004 = v1000;
  __n1005 = v1001;
  struct std__allocator_char_* t1006 = __a1003;
  char* t1007 = __p1004;
  unsigned long t1008 = __n1005;
  std__allocator_char___deallocate(t1006, t1007, t1008);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1009, unsigned long v1010) {
bb1011:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1012;
  unsigned long __size1013;
  this1012 = v1009;
  __size1013 = v1010;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1014 = this1012;
  struct std__allocator_char_* r1015 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1014);
  char* r1016 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1014);
  unsigned long t1017 = __size1013;
  unsigned long c1018 = 1;
  unsigned long b1019 = t1017 + c1018;
  std__allocator_traits_std__allocator_char_____deallocate(r1015, r1016, b1019);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1020) {
bb1021:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1022;
  this1022 = v1020;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1023 = this1022;
    _Bool r1024 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1023);
    _Bool u1025 = !r1024;
    if (u1025) {
      unsigned long t1026 = t1023->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1023, t1026);
    }
  return;
}

