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
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[26] = "Content-type: text/html\n\n";
char _str_1[24] = "<?xml version = \"1.0\"?>";
char _str_2[46] = "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 ";
char _str_3[18] = "Transitional//EN\"";
char _str_4[46] = "<html xmlns = \"http://www.w3.org/1999/xhtml\">";
char _str_5[39] = "<head><title>Logged Out</title></head>";
char _str_6[7] = "<body>";
char _str_7[38] = "<center><p>You are now logged out<br>";
char _str_8[35] = "You will be billed accordingly<br>";
char _str_9[17] = "To login again, ";
char _str_10[44] = "<a href=\"/cgi-bin/login.cgi\">click here</a>";
char _str_11[16] = "</body></html>\n";
char _str_12[31] = "Friday, 14-MAY-10 16:00:00 GMT";
char _str_13[28] = "set-cookie: CART=; expires=";
char _str_14[9] = "; path=\n";
char _str_15[50] = "basic_string: construction from null is not valid";
char _str_16[24] = "basic_string::_M_create";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void writeCookie();
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
        char* cast20 = (char*)&(_str_15);
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

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v51, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v52) {
bb53:
  struct std__basic_ostream_char__std__char_traits_char__* __os54;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str55;
  struct std__basic_ostream_char__std__char_traits_char__* __retval56;
  __os54 = v51;
  __str55 = v52;
  struct std__basic_ostream_char__std__char_traits_char__* t57 = __os54;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t58 = __str55;
  char* r59 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t58);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t60 = __str55;
  unsigned long r61 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t60);
  long cast62 = (long)r61;
  struct std__basic_ostream_char__std__char_traits_char__* r63 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t57, r59, cast62);
  __retval56 = r63;
  struct std__basic_ostream_char__std__char_traits_char__* t64 = __retval56;
  return t64;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v65) {
bb66:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this67;
  this67 = v65;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t68 = this67;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t68);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t68->_M_dataplus);
  }
  return;
}

// function: _Z11writeCookiev
void writeCookie() {
bb69:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ expires70;
  struct std__allocator_char_ ref_tmp071;
  char* cast72 = (char*)&(_str_12);
  std__allocator_char___allocator_2(&ref_tmp071);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&expires70, cast72, &ref_tmp071);
  {
    std__allocator_char____allocator(&ref_tmp071);
  }
    char* cast73 = (char*)&(_str_13);
    struct std__basic_ostream_char__std__char_traits_char__* r74 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast73);
    struct std__basic_ostream_char__std__char_traits_char__* r75 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r74, &expires70);
    char* cast76 = (char*)&(_str_14);
    struct std__basic_ostream_char__std__char_traits_char__* r77 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r75, cast76);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&expires70);
  }
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v78, int v79) {
bb80:
  int __a81;
  int __b82;
  int __retval83;
  __a81 = v78;
  __b82 = v79;
  int t84 = __a81;
  int t85 = __b82;
  int b86 = t84 | t85;
  __retval83 = b86;
  int t87 = __retval83;
  return t87;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v88) {
bb89:
  struct std__basic_ios_char__std__char_traits_char__* this90;
  int __retval91;
  this90 = v88;
  struct std__basic_ios_char__std__char_traits_char__* t92 = this90;
  struct std__ios_base* base93 = (struct std__ios_base*)((char *)t92 + 0);
  int t94 = base93->_M_streambuf_state;
  __retval91 = t94;
  int t95 = __retval91;
  return t95;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v96, int v97) {
bb98:
  struct std__basic_ios_char__std__char_traits_char__* this99;
  int __state100;
  this99 = v96;
  __state100 = v97;
  struct std__basic_ios_char__std__char_traits_char__* t101 = this99;
  int r102 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t101);
  int t103 = __state100;
  int r104 = std__operator_(r102, t103);
  std__basic_ios_char__std__char_traits_char_____clear(t101, r104);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v105, char* v106) {
bb107:
  struct std__basic_ostream_char__std__char_traits_char__* __out108;
  char* __s109;
  struct std__basic_ostream_char__std__char_traits_char__* __retval110;
  __out108 = v105;
  __s109 = v106;
    char* t111 = __s109;
    _Bool cast112 = (_Bool)t111;
    _Bool u113 = !cast112;
    if (u113) {
      struct std__basic_ostream_char__std__char_traits_char__* t114 = __out108;
      void** v115 = (void**)t114;
      void* v116 = *((void**)v115);
      unsigned char* cast117 = (unsigned char*)v116;
      long c118 = -24;
      unsigned char* ptr119 = &(cast117)[c118];
      long* cast120 = (long*)ptr119;
      long t121 = *cast120;
      unsigned char* cast122 = (unsigned char*)t114;
      unsigned char* ptr123 = &(cast122)[t121];
      struct std__basic_ostream_char__std__char_traits_char__* cast124 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr123;
      struct std__basic_ios_char__std__char_traits_char__* cast125 = (struct std__basic_ios_char__std__char_traits_char__*)cast124;
      int t126 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast125, t126);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t127 = __out108;
      char* t128 = __s109;
      char* t129 = __s109;
      unsigned long r130 = std__char_traits_char___length(t129);
      long cast131 = (long)r130;
      struct std__basic_ostream_char__std__char_traits_char__* r132 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t127, t128, cast131);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t133 = __out108;
  __retval110 = t133;
  struct std__basic_ostream_char__std__char_traits_char__* t134 = __retval110;
  return t134;
}

// function: main
int main() {
bb135:
  int __retval136;
  int c137 = 0;
  __retval136 = c137;
  writeCookie();
  char* cast138 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r139 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast138);
  char* cast140 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r141 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast140);
  char* cast142 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r143 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r141, cast142);
  char* cast144 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r145 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r143, cast144);
  char* cast146 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r147 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast146);
  char* cast148 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r149 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r147, cast148);
  char* cast150 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* r151 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r149, cast150);
  char* cast152 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* r153 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r151, cast152);
  char* cast154 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* r155 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r153, cast154);
  char* cast156 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* r157 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r155, cast156);
  char* cast158 = (char*)&(_str_10);
  struct std__basic_ostream_char__std__char_traits_char__* r159 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r157, cast158);
  char* cast160 = (char*)&(_str_11);
  struct std__basic_ostream_char__std__char_traits_char__* r161 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r159, cast160);
  int c162 = 0;
  __retval136 = c162;
  int t163 = __retval136;
  return t163;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v164) {
bb165:
  struct std____new_allocator_char_* this166;
  this166 = v164;
  struct std____new_allocator_char_* t167 = this166;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v168) {
bb169:
  char* __r170;
  char* __retval171;
  __r170 = v168;
  char* t172 = __r170;
  __retval171 = t172;
  char* t173 = __retval171;
  return t173;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v174) {
bb175:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this176;
  char* __retval177;
  this176 = v174;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t178 = this176;
  char* cast179 = (char*)&(t178->field2._M_local_buf);
  char* r180 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast179);
  __retval177 = r180;
  char* t181 = __retval177;
  return t181;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v182, char* v183, struct std__allocator_char_* v184) {
bb185:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this186;
  char* __dat187;
  struct std__allocator_char_* __a188;
  this186 = v182;
  __dat187 = v183;
  __a188 = v184;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t189 = this186;
  struct std__allocator_char_* base190 = (struct std__allocator_char_*)((char *)t189 + 0);
  struct std__allocator_char_* t191 = __a188;
  std__allocator_char___allocator(base190, t191);
    char* t192 = __dat187;
    t189->_M_p = t192;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb193:
  _Bool __retval194;
    _Bool c195 = 0;
    __retval194 = c195;
    _Bool t196 = __retval194;
    return t196;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v197, char* v198) {
bb199:
  char* __c1200;
  char* __c2201;
  _Bool __retval202;
  __c1200 = v197;
  __c2201 = v198;
  char* t203 = __c1200;
  char t204 = *t203;
  int cast205 = (int)t204;
  char* t206 = __c2201;
  char t207 = *t206;
  int cast208 = (int)t207;
  _Bool c209 = ((cast205 == cast208)) ? 1 : 0;
  __retval202 = c209;
  _Bool t210 = __retval202;
  return t210;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v211) {
bb212:
  char* __p213;
  unsigned long __retval214;
  unsigned long __i215;
  __p213 = v211;
  unsigned long c216 = 0;
  __i215 = c216;
    char ref_tmp0217;
    while (1) {
      unsigned long t218 = __i215;
      char* t219 = __p213;
      char* ptr220 = &(t219)[t218];
      char c221 = 0;
      ref_tmp0217 = c221;
      _Bool r222 = __gnu_cxx__char_traits_char___eq(ptr220, &ref_tmp0217);
      _Bool u223 = !r222;
      if (!u223) break;
      unsigned long t224 = __i215;
      unsigned long u225 = t224 + 1;
      __i215 = u225;
    }
  unsigned long t226 = __i215;
  __retval214 = t226;
  unsigned long t227 = __retval214;
  return t227;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v228) {
bb229:
  char* __s230;
  unsigned long __retval231;
  __s230 = v228;
    _Bool r232 = std____is_constant_evaluated();
    if (r232) {
      char* t233 = __s230;
      unsigned long r234 = __gnu_cxx__char_traits_char___length(t233);
      __retval231 = r234;
      unsigned long t235 = __retval231;
      return t235;
    }
  char* t236 = __s230;
  unsigned long r237 = strlen(t236);
  __retval231 = r237;
  unsigned long t238 = __retval231;
  return t238;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v239, char* v240, struct std__random_access_iterator_tag v241) {
bb242:
  char* __first243;
  char* __last244;
  struct std__random_access_iterator_tag unnamed245;
  long __retval246;
  __first243 = v239;
  __last244 = v240;
  unnamed245 = v241;
  char* t247 = __last244;
  char* t248 = __first243;
  long diff249 = t247 - t248;
  __retval246 = diff249;
  long t250 = __retval246;
  return t250;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v251) {
bb252:
  char** unnamed253;
  struct std__random_access_iterator_tag __retval254;
  unnamed253 = v251;
  struct std__random_access_iterator_tag t255 = __retval254;
  return t255;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v256, char* v257) {
bb258:
  char* __first259;
  char* __last260;
  long __retval261;
  struct std__random_access_iterator_tag agg_tmp0262;
  __first259 = v256;
  __last260 = v257;
  char* t263 = __first259;
  char* t264 = __last260;
  struct std__random_access_iterator_tag r265 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first259);
  agg_tmp0262 = r265;
  struct std__random_access_iterator_tag t266 = agg_tmp0262;
  long r267 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t263, t264, t266);
  __retval261 = r267;
  long t268 = __retval261;
  return t268;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v269, char* v270) {
bb271:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this272;
  char* __p273;
  this272 = v269;
  __p273 = v270;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t274 = this272;
  char* t275 = __p273;
  t274->_M_dataplus._M_p = t275;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v276) {
bb277:
  struct std__allocator_char_* __a278;
  unsigned long __retval279;
  __a278 = v276;
  unsigned long c280 = -1;
  unsigned long c281 = 1;
  unsigned long b282 = c280 / c281;
  __retval279 = b282;
  unsigned long t283 = __retval279;
  return t283;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v284) {
bb285:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this286;
  struct std__allocator_char_* __retval287;
  this286 = v284;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t288 = this286;
  struct std__allocator_char_* base289 = (struct std__allocator_char_*)((char *)&(t288->_M_dataplus) + 0);
  __retval287 = base289;
  struct std__allocator_char_* t290 = __retval287;
  return t290;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v291, unsigned long* v292) {
bb293:
  unsigned long* __a294;
  unsigned long* __b295;
  unsigned long* __retval296;
  __a294 = v291;
  __b295 = v292;
    unsigned long* t297 = __b295;
    unsigned long t298 = *t297;
    unsigned long* t299 = __a294;
    unsigned long t300 = *t299;
    _Bool c301 = ((t298 < t300)) ? 1 : 0;
    if (c301) {
      unsigned long* t302 = __b295;
      __retval296 = t302;
      unsigned long* t303 = __retval296;
      return t303;
    }
  unsigned long* t304 = __a294;
  __retval296 = t304;
  unsigned long* t305 = __retval296;
  return t305;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v306) {
bb307:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this308;
  unsigned long __retval309;
  unsigned long __diffmax310;
  unsigned long __allocmax311;
  this308 = v306;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t312 = this308;
  unsigned long c313 = 9223372036854775807;
  __diffmax310 = c313;
  struct std__allocator_char_* r314 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t312);
  unsigned long r315 = std__allocator_traits_std__allocator_char_____max_size(r314);
  __allocmax311 = r315;
  unsigned long* r316 = unsigned_long_const__std__min_unsigned_long_(&__diffmax310, &__allocmax311);
  unsigned long t317 = *r316;
  unsigned long c318 = 1;
  unsigned long b319 = t317 - c318;
  __retval309 = b319;
  unsigned long t320 = __retval309;
  return t320;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v321) {
bb322:
  struct std____new_allocator_char_* this323;
  unsigned long __retval324;
  this323 = v321;
  struct std____new_allocator_char_* t325 = this323;
  unsigned long c326 = 9223372036854775807;
  unsigned long c327 = 1;
  unsigned long b328 = c326 / c327;
  __retval324 = b328;
  unsigned long t329 = __retval324;
  return t329;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v330, unsigned long v331, void* v332) {
bb333:
  struct std____new_allocator_char_* this334;
  unsigned long __n335;
  void* unnamed336;
  char* __retval337;
  this334 = v330;
  __n335 = v331;
  unnamed336 = v332;
  struct std____new_allocator_char_* t338 = this334;
    unsigned long t339 = __n335;
    unsigned long r340 = std____new_allocator_char____M_max_size___const(t338);
    _Bool c341 = ((t339 > r340)) ? 1 : 0;
    if (c341) {
        unsigned long t342 = __n335;
        unsigned long c343 = -1;
        unsigned long c344 = 1;
        unsigned long b345 = c343 / c344;
        _Bool c346 = ((t342 > b345)) ? 1 : 0;
        if (c346) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c347 = 1;
    unsigned long c348 = 16;
    _Bool c349 = ((c347 > c348)) ? 1 : 0;
    if (c349) {
      unsigned long __al350;
      unsigned long c351 = 1;
      __al350 = c351;
      unsigned long t352 = __n335;
      unsigned long c353 = 1;
      unsigned long b354 = t352 * c353;
      unsigned long t355 = __al350;
      void* r356 = operator_new_2(b354, t355);
      char* cast357 = (char*)r356;
      __retval337 = cast357;
      char* t358 = __retval337;
      return t358;
    }
  unsigned long t359 = __n335;
  unsigned long c360 = 1;
  unsigned long b361 = t359 * c360;
  void* r362 = operator_new(b361);
  char* cast363 = (char*)r362;
  __retval337 = cast363;
  char* t364 = __retval337;
  return t364;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v365, unsigned long v366) {
bb367:
  struct std__allocator_char_* this368;
  unsigned long __n369;
  char* __retval370;
  this368 = v365;
  __n369 = v366;
  struct std__allocator_char_* t371 = this368;
    _Bool r372 = std____is_constant_evaluated();
    if (r372) {
        unsigned long t373 = __n369;
        unsigned long c374 = 1;
        unsigned long ovr375;
        _Bool ovf376 = __builtin_mul_overflow(t373, c374, &ovr375);
        __n369 = ovr375;
        if (ovf376) {
          std____throw_bad_array_new_length();
        }
      unsigned long t377 = __n369;
      void* r378 = operator_new(t377);
      char* cast379 = (char*)r378;
      __retval370 = cast379;
      char* t380 = __retval370;
      return t380;
    }
  struct std____new_allocator_char_* base381 = (struct std____new_allocator_char_*)((char *)t371 + 0);
  unsigned long t382 = __n369;
  void* c383 = ((void*)0);
  char* r384 = std____new_allocator_char___allocate(base381, t382, c383);
  __retval370 = r384;
  char* t385 = __retval370;
  return t385;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v386, unsigned long v387) {
bb388:
  struct std__allocator_char_* __a389;
  unsigned long __n390;
  char* __retval391;
  __a389 = v386;
  __n390 = v387;
  struct std__allocator_char_* t392 = __a389;
  unsigned long t393 = __n390;
  char* r394 = std__allocator_char___allocate(t392, t393);
  __retval391 = r394;
  char* t395 = __retval391;
  return t395;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v396, unsigned long v397) {
bb398:
  struct std__allocator_char_* __a399;
  unsigned long __n400;
  char* __retval401;
  char* __p402;
  __a399 = v396;
  __n400 = v397;
  struct std__allocator_char_* t403 = __a399;
  unsigned long t404 = __n400;
  char* r405 = std__allocator_traits_std__allocator_char_____allocate(t403, t404);
  __p402 = r405;
  char* t406 = __p402;
  __retval401 = t406;
  char* t407 = __retval401;
  return t407;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v408) {
bb409:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this410;
  struct std__allocator_char_* __retval411;
  this410 = v408;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t412 = this410;
  struct std__allocator_char_* base413 = (struct std__allocator_char_*)((char *)&(t412->_M_dataplus) + 0);
  __retval411 = base413;
  struct std__allocator_char_* t414 = __retval411;
  return t414;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v415, unsigned long* v416, unsigned long v417) {
bb418:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this419;
  unsigned long* __capacity420;
  unsigned long __old_capacity421;
  char* __retval422;
  this419 = v415;
  __capacity420 = v416;
  __old_capacity421 = v417;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t423 = this419;
    unsigned long* t424 = __capacity420;
    unsigned long t425 = *t424;
    unsigned long r426 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t423);
    _Bool c427 = ((t425 > r426)) ? 1 : 0;
    if (c427) {
      char* cast428 = (char*)&(_str_16);
      std____throw_length_error(cast428);
    }
    unsigned long* t429 = __capacity420;
    unsigned long t430 = *t429;
    unsigned long t431 = __old_capacity421;
    _Bool c432 = ((t430 > t431)) ? 1 : 0;
    _Bool ternary433;
    if (c432) {
      unsigned long* t434 = __capacity420;
      unsigned long t435 = *t434;
      unsigned long c436 = 2;
      unsigned long t437 = __old_capacity421;
      unsigned long b438 = c436 * t437;
      _Bool c439 = ((t435 < b438)) ? 1 : 0;
      ternary433 = (_Bool)c439;
    } else {
      _Bool c440 = 0;
      ternary433 = (_Bool)c440;
    }
    if (ternary433) {
      unsigned long c441 = 2;
      unsigned long t442 = __old_capacity421;
      unsigned long b443 = c441 * t442;
      unsigned long* t444 = __capacity420;
      *t444 = b443;
        unsigned long* t445 = __capacity420;
        unsigned long t446 = *t445;
        unsigned long r447 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t423);
        _Bool c448 = ((t446 > r447)) ? 1 : 0;
        if (c448) {
          unsigned long r449 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t423);
          unsigned long* t450 = __capacity420;
          *t450 = r449;
        }
    }
  struct std__allocator_char_* r451 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t423);
  unsigned long* t452 = __capacity420;
  unsigned long t453 = *t452;
  unsigned long c454 = 1;
  unsigned long b455 = t453 + c454;
  char* r456 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r451, b455);
  __retval422 = r456;
  char* t457 = __retval422;
  return t457;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v458, unsigned long v459) {
bb460:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this461;
  unsigned long __capacity462;
  this461 = v458;
  __capacity462 = v459;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t463 = this461;
  unsigned long t464 = __capacity462;
  t463->field2._M_allocated_capacity = t464;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb465:
  _Bool __retval466;
    _Bool c467 = 0;
    __retval466 = c467;
    _Bool t468 = __retval466;
    return t468;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v469) {
bb470:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this471;
  this471 = v469;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t472 = this471;
    _Bool r473 = std__is_constant_evaluated();
    if (r473) {
        unsigned long __i474;
        unsigned long c475 = 0;
        __i474 = c475;
        while (1) {
          unsigned long t477 = __i474;
          unsigned long c478 = 15;
          _Bool c479 = ((t477 <= c478)) ? 1 : 0;
          if (!c479) break;
          char c480 = 0;
          unsigned long t481 = __i474;
          t472->field2._M_local_buf[t481] = c480;
        for_step476: ;
          unsigned long t482 = __i474;
          unsigned long u483 = t482 + 1;
          __i474 = u483;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v484, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v485) {
bb486:
  struct _Guard* this487;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s488;
  this487 = v484;
  __s488 = v485;
  struct _Guard* t489 = this487;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t490 = __s488;
  t489->_M_guarded = t490;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v491, char* v492) {
bb493:
  char* __location494;
  char* __args495;
  char* __retval496;
  void* __loc497;
  __location494 = v491;
  __args495 = v492;
  char* t498 = __location494;
  void* cast499 = (void*)t498;
  __loc497 = cast499;
    void* t500 = __loc497;
    char* cast501 = (char*)t500;
    char* t502 = __args495;
    char t503 = *t502;
    *cast501 = t503;
    __retval496 = cast501;
    char* t504 = __retval496;
    return t504;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v505, char* v506) {
bb507:
  char* __c1508;
  char* __c2509;
  __c1508 = v505;
  __c2509 = v506;
    _Bool r510 = std____is_constant_evaluated();
    if (r510) {
      char* t511 = __c1508;
      char* t512 = __c2509;
      char* r513 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t511, t512);
    } else {
      char* t514 = __c2509;
      char t515 = *t514;
      char* t516 = __c1508;
      *t516 = t515;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v517, char* v518, unsigned long v519) {
bb520:
  char* __s1521;
  char* __s2522;
  unsigned long __n523;
  char* __retval524;
  __s1521 = v517;
  __s2522 = v518;
  __n523 = v519;
    unsigned long t525 = __n523;
    unsigned long c526 = 0;
    _Bool c527 = ((t525 == c526)) ? 1 : 0;
    if (c527) {
      char* t528 = __s1521;
      __retval524 = t528;
      char* t529 = __retval524;
      return t529;
    }
    _Bool r530 = std____is_constant_evaluated();
    if (r530) {
        unsigned long __i531;
        unsigned long c532 = 0;
        __i531 = c532;
        while (1) {
          unsigned long t534 = __i531;
          unsigned long t535 = __n523;
          _Bool c536 = ((t534 < t535)) ? 1 : 0;
          if (!c536) break;
          char* t537 = __s1521;
          unsigned long t538 = __i531;
          char* ptr539 = &(t537)[t538];
          unsigned long t540 = __i531;
          char* t541 = __s2522;
          char* ptr542 = &(t541)[t540];
          char* r543 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr539, ptr542);
        for_step533: ;
          unsigned long t544 = __i531;
          unsigned long u545 = t544 + 1;
          __i531 = u545;
        }
      char* t546 = __s1521;
      __retval524 = t546;
      char* t547 = __retval524;
      return t547;
    }
  char* t548 = __s1521;
  void* cast549 = (void*)t548;
  char* t550 = __s2522;
  void* cast551 = (void*)t550;
  unsigned long t552 = __n523;
  unsigned long c553 = 1;
  unsigned long b554 = t552 * c553;
  void* r555 = memcpy(cast549, cast551, b554);
  char* t556 = __s1521;
  __retval524 = t556;
  char* t557 = __retval524;
  return t557;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v558, char* v559, unsigned long v560) {
bb561:
  char* __s1562;
  char* __s2563;
  unsigned long __n564;
  char* __retval565;
  __s1562 = v558;
  __s2563 = v559;
  __n564 = v560;
    unsigned long t566 = __n564;
    unsigned long c567 = 0;
    _Bool c568 = ((t566 == c567)) ? 1 : 0;
    if (c568) {
      char* t569 = __s1562;
      __retval565 = t569;
      char* t570 = __retval565;
      return t570;
    }
    _Bool r571 = std____is_constant_evaluated();
    if (r571) {
      char* t572 = __s1562;
      char* t573 = __s2563;
      unsigned long t574 = __n564;
      char* r575 = __gnu_cxx__char_traits_char___copy(t572, t573, t574);
      __retval565 = r575;
      char* t576 = __retval565;
      return t576;
    }
  char* t577 = __s1562;
  void* cast578 = (void*)t577;
  char* t579 = __s2563;
  void* cast580 = (void*)t579;
  unsigned long t581 = __n564;
  void* r582 = memcpy(cast578, cast580, t581);
  char* cast583 = (char*)r582;
  __retval565 = cast583;
  char* t584 = __retval565;
  return t584;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v585, char* v586, unsigned long v587) {
bb588:
  char* __d589;
  char* __s590;
  unsigned long __n591;
  __d589 = v585;
  __s590 = v586;
  __n591 = v587;
    unsigned long t592 = __n591;
    unsigned long c593 = 1;
    _Bool c594 = ((t592 == c593)) ? 1 : 0;
    if (c594) {
      char* t595 = __d589;
      char* t596 = __s590;
      std__char_traits_char___assign(t595, t596);
    } else {
      char* t597 = __d589;
      char* t598 = __s590;
      unsigned long t599 = __n591;
      char* r600 = std__char_traits_char___copy(t597, t598, t599);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v601) {
bb602:
  char* __it603;
  char* __retval604;
  __it603 = v601;
  char* t605 = __it603;
  __retval604 = t605;
  char* t606 = __retval604;
  return t606;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v607, char* v608, char* v609) {
bb610:
  char* __p611;
  char* __k1612;
  char* __k2613;
  __p611 = v607;
  __k1612 = v608;
  __k2613 = v609;
    char* t614 = __p611;
    char* t615 = __k1612;
    char* r616 = char_const__std____niter_base_char_const__(t615);
    char* t617 = __k2613;
    char* t618 = __k1612;
    long diff619 = t617 - t618;
    unsigned long cast620 = (unsigned long)diff619;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t614, r616, cast620);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v621) {
bb622:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this623;
  char* __retval624;
  this623 = v621;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t625 = this623;
  char* t626 = t625->_M_dataplus._M_p;
  __retval624 = t626;
  char* t627 = __retval624;
  return t627;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v628, unsigned long v629) {
bb630:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this631;
  unsigned long __length632;
  this631 = v628;
  __length632 = v629;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t633 = this631;
  unsigned long t634 = __length632;
  t633->_M_string_length = t634;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v635, unsigned long v636) {
bb637:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this638;
  unsigned long __n639;
  char ref_tmp0640;
  this638 = v635;
  __n639 = v636;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t641 = this638;
  unsigned long t642 = __n639;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t641, t642);
  unsigned long t643 = __n639;
  char* r644 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t641);
  char* ptr645 = &(r644)[t643];
  char c646 = 0;
  ref_tmp0640 = c646;
  std__char_traits_char___assign(ptr645, &ref_tmp0640);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v647) {
bb648:
  struct _Guard* this649;
  this649 = v647;
  struct _Guard* t650 = this649;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t651 = t650->_M_guarded;
    _Bool cast652 = (_Bool)t651;
    if (cast652) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t653 = t650->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t653);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v654, char* v655, char* v656, struct std__forward_iterator_tag v657) {
bb658:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this659;
  char* __beg660;
  char* __end661;
  struct std__forward_iterator_tag unnamed662;
  unsigned long __dnew663;
  struct _Guard __guard664;
  this659 = v654;
  __beg660 = v655;
  __end661 = v656;
  unnamed662 = v657;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t665 = this659;
  char* t666 = __beg660;
  char* t667 = __end661;
  long r668 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t666, t667);
  unsigned long cast669 = (unsigned long)r668;
  __dnew663 = cast669;
    unsigned long t670 = __dnew663;
    unsigned long c671 = 15;
    _Bool c672 = ((t670 > c671)) ? 1 : 0;
    if (c672) {
      unsigned long c673 = 0;
      char* r674 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t665, &__dnew663, c673);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t665, r674);
      unsigned long t675 = __dnew663;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t665, t675);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t665);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard664, t665);
    char* r676 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t665);
    char* t677 = __beg660;
    char* t678 = __end661;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r676, t677, t678);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c679 = ((void*)0);
    __guard664._M_guarded = c679;
    unsigned long t680 = __dnew663;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t665, t680);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard664);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v681) {
bb682:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this683;
  this683 = v681;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t684 = this683;
  {
    struct std__allocator_char_* base685 = (struct std__allocator_char_*)((char *)t684 + 0);
    std__allocator_char____allocator(base685);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v686, struct std____new_allocator_char_* v687) {
bb688:
  struct std____new_allocator_char_* this689;
  struct std____new_allocator_char_* unnamed690;
  this689 = v686;
  unnamed690 = v687;
  struct std____new_allocator_char_* t691 = this689;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v692, struct std__allocator_char_* v693) {
bb694:
  struct std__allocator_char_* this695;
  struct std__allocator_char_* __a696;
  this695 = v692;
  __a696 = v693;
  struct std__allocator_char_* t697 = this695;
  struct std____new_allocator_char_* base698 = (struct std____new_allocator_char_*)((char *)t697 + 0);
  struct std__allocator_char_* t699 = __a696;
  struct std____new_allocator_char_* base700 = (struct std____new_allocator_char_*)((char *)t699 + 0);
  std____new_allocator_char_____new_allocator(base698, base700);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v701) {
bb702:
  char* __r703;
  char* __retval704;
  __r703 = v701;
  char* t705 = __r703;
  __retval704 = t705;
  char* t706 = __retval704;
  return t706;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v707) {
bb708:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this709;
  char* __retval710;
  this709 = v707;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t711 = this709;
  char* cast712 = (char*)&(t711->field2._M_local_buf);
  char* r713 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast712);
  __retval710 = r713;
  char* t714 = __retval710;
  return t714;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v715) {
bb716:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this717;
  _Bool __retval718;
  this717 = v715;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t719 = this717;
    char* r720 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t719);
    char* r721 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t719);
    _Bool c722 = ((r720 == r721)) ? 1 : 0;
    if (c722) {
        unsigned long t723 = t719->_M_string_length;
        unsigned long c724 = 15;
        _Bool c725 = ((t723 > c724)) ? 1 : 0;
        if (c725) {
          __builtin_unreachable();
        }
      _Bool c726 = 1;
      __retval718 = c726;
      _Bool t727 = __retval718;
      return t727;
    }
  _Bool c728 = 0;
  __retval718 = c728;
  _Bool t729 = __retval718;
  return t729;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v730, char* v731, unsigned long v732) {
bb733:
  struct std____new_allocator_char_* this734;
  char* __p735;
  unsigned long __n736;
  this734 = v730;
  __p735 = v731;
  __n736 = v732;
  struct std____new_allocator_char_* t737 = this734;
    unsigned long c738 = 1;
    unsigned long c739 = 16;
    _Bool c740 = ((c738 > c739)) ? 1 : 0;
    if (c740) {
      char* t741 = __p735;
      void* cast742 = (void*)t741;
      unsigned long t743 = __n736;
      unsigned long c744 = 1;
      unsigned long b745 = t743 * c744;
      unsigned long c746 = 1;
      operator_delete_3(cast742, b745, c746);
      return;
    }
  char* t747 = __p735;
  void* cast748 = (void*)t747;
  unsigned long t749 = __n736;
  unsigned long c750 = 1;
  unsigned long b751 = t749 * c750;
  operator_delete_2(cast748, b751);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v752, char* v753, unsigned long v754) {
bb755:
  struct std__allocator_char_* this756;
  char* __p757;
  unsigned long __n758;
  this756 = v752;
  __p757 = v753;
  __n758 = v754;
  struct std__allocator_char_* t759 = this756;
    _Bool r760 = std____is_constant_evaluated();
    if (r760) {
      char* t761 = __p757;
      void* cast762 = (void*)t761;
      operator_delete(cast762);
      return;
    }
  struct std____new_allocator_char_* base763 = (struct std____new_allocator_char_*)((char *)t759 + 0);
  char* t764 = __p757;
  unsigned long t765 = __n758;
  std____new_allocator_char___deallocate(base763, t764, t765);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v766, char* v767, unsigned long v768) {
bb769:
  struct std__allocator_char_* __a770;
  char* __p771;
  unsigned long __n772;
  __a770 = v766;
  __p771 = v767;
  __n772 = v768;
  struct std__allocator_char_* t773 = __a770;
  char* t774 = __p771;
  unsigned long t775 = __n772;
  std__allocator_char___deallocate(t773, t774, t775);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v776, unsigned long v777) {
bb778:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this779;
  unsigned long __size780;
  this779 = v776;
  __size780 = v777;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t781 = this779;
  struct std__allocator_char_* r782 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t781);
  char* r783 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t781);
  unsigned long t784 = __size780;
  unsigned long c785 = 1;
  unsigned long b786 = t784 + c785;
  std__allocator_traits_std__allocator_char_____deallocate(r782, r783, b786);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v787) {
bb788:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this789;
  this789 = v787;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t790 = this789;
    _Bool r791 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t790);
    _Bool u792 = !r791;
    if (u792) {
      unsigned long t793 = t790->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t790, t793);
    }
  return;
}

