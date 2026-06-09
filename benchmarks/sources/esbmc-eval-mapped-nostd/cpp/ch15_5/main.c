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
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int _M_flags; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base9boolalphaE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[26] = "Statistics before input:\n";
char _str_1[19] = "\n\nEnter a string: ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_2[25] = "The string entered was: ";
char _str_3[26] = "\nStatistics after input:\n";
char _str_4[28] = "\n\nThe remaining string is: ";
char _str_5[47] = "1234567890abcdefghijklmnopqrstuvwxyz1234567890";
char _str_6[19] = "\n\nstring1 is now: ";
char _str_7[42] = "\n\nStats after resizing by (length + 10):\n";
char _str_8[11] = "capacity: ";
char _str_9[12] = "\nmax size: ";
char _str_10[8] = "\nsize: ";
char _str_11[10] = "\nlength: ";
char _str_12[9] = "\nempty: ";
char _str_13[21] = "basic_string::append";
char _str_14[24] = "basic_string::_M_create";
char _str_15[29] = "basic_string::_M_replace_aux";
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
int std__operator__2(int p0, int p1);
int* std__operator__(int* p0, int p1);
int std__ios_base__setf(struct std__ios_base* p0, int p1);
struct std__ios_base* std__boolalpha(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_unsigned_long_(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* p0);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_bool_(struct std__basic_ostream_char__std__char_traits_char__* p0, _Bool p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, _Bool p1);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____empty___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void printStatistics(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___std__allocator_char___(struct std__basic_istream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
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
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
extern void std____throw_length_error(char* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
char* __gnu_cxx__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* p0, char* p1, unsigned long p2);
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
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void __gnu_cxx__char_traits_char___assign_2(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___move(char* p0, char* p1, unsigned long p2);
extern void* memmove(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* p0, char* p1, unsigned long p2);
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___assign(char* p0, unsigned long p1, char p2);
extern void* memset(void* p0, int p1, unsigned long p2);
char* std__char_traits_char___assign(char* p0, unsigned long p1, char p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(char* p0, unsigned long p1, char p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, unsigned long p3, char p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____resize_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____resize(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
int main();
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
_Bool std__is_constant_evaluated();
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
_Bool std____is_constant_evaluated();
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* p0, char* p1);
void std__char_traits_char___assign_2(char* p0, char* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0);
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);

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

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v7, int v8) {
bb9:
  int __a10;
  int __b11;
  int __retval12;
  __a10 = v7;
  __b11 = v8;
  int t13 = __a10;
  int t14 = __b11;
  int b15 = t13 | t14;
  __retval12 = b15;
  int t16 = __retval12;
  return t16;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v17) {
bb18:
  struct std__basic_ios_char__std__char_traits_char__* this19;
  int __retval20;
  this19 = v17;
  struct std__basic_ios_char__std__char_traits_char__* t21 = this19;
  struct std__ios_base* base22 = (struct std__ios_base*)((char *)t21 + 0);
  int t23 = base22->_M_streambuf_state;
  __retval20 = t23;
  int t24 = __retval20;
  return t24;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v25, int v26) {
bb27:
  struct std__basic_ios_char__std__char_traits_char__* this28;
  int __state29;
  this28 = v25;
  __state29 = v26;
  struct std__basic_ios_char__std__char_traits_char__* t30 = this28;
  int r31 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t30);
  int t32 = __state29;
  int r33 = std__operator_(r31, t32);
  std__basic_ios_char__std__char_traits_char_____clear(t30, r33);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v34, char* v35) {
bb36:
  struct std__basic_ostream_char__std__char_traits_char__* __out37;
  char* __s38;
  struct std__basic_ostream_char__std__char_traits_char__* __retval39;
  __out37 = v34;
  __s38 = v35;
    char* t40 = __s38;
    _Bool cast41 = (_Bool)t40;
    _Bool u42 = !cast41;
    if (u42) {
      struct std__basic_ostream_char__std__char_traits_char__* t43 = __out37;
      void** v44 = (void**)t43;
      void* v45 = *((void**)v44);
      unsigned char* cast46 = (unsigned char*)v45;
      long c47 = -24;
      unsigned char* ptr48 = &(cast46)[c47];
      long* cast49 = (long*)ptr48;
      long t50 = *cast49;
      unsigned char* cast51 = (unsigned char*)t43;
      unsigned char* ptr52 = &(cast51)[t50];
      struct std__basic_ostream_char__std__char_traits_char__* cast53 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr52;
      struct std__basic_ios_char__std__char_traits_char__* cast54 = (struct std__basic_ios_char__std__char_traits_char__*)cast53;
      int t55 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast54, t55);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t56 = __out37;
      char* t57 = __s38;
      char* t58 = __s38;
      unsigned long r59 = std__char_traits_char___length(t58);
      long cast60 = (long)r59;
      struct std__basic_ostream_char__std__char_traits_char__* r61 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t56, t57, cast60);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t62 = __out37;
  __retval39 = t62;
  struct std__basic_ostream_char__std__char_traits_char__* t63 = __retval39;
  return t63;
}

// function: _ZNSolsEPFRSt8ios_baseS0_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* v64, void* v65) {
bb66:
  struct std__basic_ostream_char__std__char_traits_char__* this67;
  void* __pf68;
  struct std__basic_ostream_char__std__char_traits_char__* __retval69;
  this67 = v64;
  __pf68 = v65;
  struct std__basic_ostream_char__std__char_traits_char__* t70 = this67;
  void* t71 = __pf68;
  void** v72 = (void**)t70;
  void* v73 = *((void**)v72);
  unsigned char* cast74 = (unsigned char*)v73;
  long c75 = -24;
  unsigned char* ptr76 = &(cast74)[c75];
  long* cast77 = (long*)ptr76;
  long t78 = *cast77;
  unsigned char* cast79 = (unsigned char*)t70;
  unsigned char* ptr80 = &(cast79)[t78];
  struct std__basic_ostream_char__std__char_traits_char__* cast81 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr80;
  struct std__ios_base* cast82 = (struct std__ios_base*)cast81;
  struct std__ios_base* r83 = ((struct std__ios_base* (*)(struct std__ios_base*))t71)(cast82);
  __retval69 = t70;
  struct std__basic_ostream_char__std__char_traits_char__* t84 = __retval69;
  return t84;
}

// function: _ZStorSt13_Ios_FmtflagsS_
int std__operator__2(int v85, int v86) {
bb87:
  int __a88;
  int __b89;
  int __retval90;
  __a88 = v85;
  __b89 = v86;
  int t91 = __a88;
  int t92 = __b89;
  int b93 = t91 | t92;
  __retval90 = b93;
  int t94 = __retval90;
  return t94;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* std__operator__(int* v95, int v96) {
bb97:
  int* __a98;
  int __b99;
  int* __retval100;
  __a98 = v95;
  __b99 = v96;
  int* t101 = __a98;
  int t102 = *t101;
  int t103 = __b99;
  int r104 = std__operator__2(t102, t103);
  int* t105 = __a98;
  *t105 = r104;
  __retval100 = t105;
  int* t106 = __retval100;
  return t106;
}

// function: _ZNSt8ios_base4setfESt13_Ios_Fmtflags
int std__ios_base__setf(struct std__ios_base* v107, int v108) {
bb109:
  struct std__ios_base* this110;
  int __fmtfl111;
  int __retval112;
  int __old113;
  this110 = v107;
  __fmtfl111 = v108;
  struct std__ios_base* t114 = this110;
  int t115 = t114->_M_flags;
  __old113 = t115;
  int t116 = __fmtfl111;
  int* r117 = std__operator__(&t114->_M_flags, t116);
  int t118 = __old113;
  __retval112 = t118;
  int t119 = __retval112;
  return t119;
}

// function: _ZSt9boolalphaRSt8ios_base
struct std__ios_base* std__boolalpha(struct std__ios_base* v120) {
bb121:
  struct std__ios_base* __base122;
  struct std__ios_base* __retval123;
  __base122 = v120;
  struct std__ios_base* t124 = __base122;
  int t125 = _ZNSt8ios_base9boolalphaE_const;
  int r126 = std__ios_base__setf(t124, t125);
  struct std__ios_base* t127 = __base122;
  __retval123 = t127;
  struct std__ios_base* t128 = __retval123;
  return t128;
}

// function: _ZNSolsEm
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* v129, unsigned long v130) {
bb131:
  struct std__basic_ostream_char__std__char_traits_char__* this132;
  unsigned long __n133;
  struct std__basic_ostream_char__std__char_traits_char__* __retval134;
  this132 = v129;
  __n133 = v130;
  struct std__basic_ostream_char__std__char_traits_char__* t135 = this132;
  unsigned long t136 = __n133;
  struct std__basic_ostream_char__std__char_traits_char__* r137 = std__ostream__std__ostream___M_insert_unsigned_long_(t135, t136);
  __retval134 = r137;
  struct std__basic_ostream_char__std__char_traits_char__* t138 = __retval134;
  return t138;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v139) {
bb140:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this141;
  unsigned long __retval142;
  unsigned long __sz143;
  this141 = v139;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t144 = this141;
  _Bool r145 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t144);
  unsigned long ternary146;
  if (r145) {
    unsigned long c147 = 15;
    ternary146 = (unsigned long)c147;
  } else {
    unsigned long t148 = t144->field2._M_allocated_capacity;
    ternary146 = (unsigned long)t148;
  }
  __sz143 = ternary146;
    unsigned long t149 = __sz143;
    unsigned long c150 = 15;
    _Bool c151 = ((t149 < c150)) ? 1 : 0;
    _Bool ternary152;
    if (c151) {
      _Bool c153 = 1;
      ternary152 = (_Bool)c153;
    } else {
      unsigned long t154 = __sz143;
      unsigned long r155 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t144);
      _Bool c156 = ((t154 > r155)) ? 1 : 0;
      ternary152 = (_Bool)c156;
    }
    if (ternary152) {
      __builtin_unreachable();
    }
  unsigned long t157 = __sz143;
  __retval142 = t157;
  unsigned long t158 = __retval142;
  return t158;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v159) {
bb160:
  struct std__allocator_char_* __a161;
  unsigned long __retval162;
  __a161 = v159;
  unsigned long c163 = -1;
  unsigned long c164 = 1;
  unsigned long b165 = c163 / c164;
  __retval162 = b165;
  unsigned long t166 = __retval162;
  return t166;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v167) {
bb168:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this169;
  struct std__allocator_char_* __retval170;
  this169 = v167;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t171 = this169;
  struct std__allocator_char_* base172 = (struct std__allocator_char_*)((char *)&(t171->_M_dataplus) + 0);
  __retval170 = base172;
  struct std__allocator_char_* t173 = __retval170;
  return t173;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v174, unsigned long* v175) {
bb176:
  unsigned long* __a177;
  unsigned long* __b178;
  unsigned long* __retval179;
  __a177 = v174;
  __b178 = v175;
    unsigned long* t180 = __b178;
    unsigned long t181 = *t180;
    unsigned long* t182 = __a177;
    unsigned long t183 = *t182;
    _Bool c184 = ((t181 < t183)) ? 1 : 0;
    if (c184) {
      unsigned long* t185 = __b178;
      __retval179 = t185;
      unsigned long* t186 = __retval179;
      return t186;
    }
  unsigned long* t187 = __a177;
  __retval179 = t187;
  unsigned long* t188 = __retval179;
  return t188;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v189) {
bb190:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this191;
  unsigned long __retval192;
  unsigned long __diffmax193;
  unsigned long __allocmax194;
  this191 = v189;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t195 = this191;
  unsigned long c196 = 9223372036854775807;
  __diffmax193 = c196;
  struct std__allocator_char_* r197 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t195);
  unsigned long r198 = std__allocator_traits_std__allocator_char_____max_size(r197);
  __allocmax194 = r198;
  unsigned long* r199 = unsigned_long_const__std__min_unsigned_long_(&__diffmax193, &__allocmax194);
  unsigned long t200 = *r199;
  unsigned long c201 = 1;
  unsigned long b202 = t200 - c201;
  __retval192 = b202;
  unsigned long t203 = __retval192;
  return t203;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v204) {
bb205:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this206;
  unsigned long __retval207;
  unsigned long __sz208;
  this206 = v204;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t209 = this206;
  unsigned long t210 = t209->_M_string_length;
  __sz208 = t210;
    unsigned long t211 = __sz208;
    unsigned long r212 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t209);
    _Bool c213 = ((t211 > r212)) ? 1 : 0;
    if (c213) {
      __builtin_unreachable();
    }
  unsigned long t214 = __sz208;
  __retval207 = t214;
  unsigned long t215 = __retval207;
  return t215;
}

// function: _ZNSolsEb
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v216, _Bool v217) {
bb218:
  struct std__basic_ostream_char__std__char_traits_char__* this219;
  _Bool __n220;
  struct std__basic_ostream_char__std__char_traits_char__* __retval221;
  this219 = v216;
  __n220 = v217;
  struct std__basic_ostream_char__std__char_traits_char__* t222 = this219;
  _Bool t223 = __n220;
  struct std__basic_ostream_char__std__char_traits_char__* r224 = std__ostream__std__ostream___M_insert_bool_(t222, t223);
  __retval221 = r224;
  struct std__basic_ostream_char__std__char_traits_char__* t225 = __retval221;
  return t225;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5emptyEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____empty___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v226) {
bb227:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this228;
  _Bool __retval229;
  this228 = v226;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t230 = this228;
  unsigned long t231 = t230->_M_string_length;
  unsigned long c232 = 0;
  _Bool c233 = ((t231 == c232)) ? 1 : 0;
  __retval229 = c233;
  _Bool t234 = __retval229;
  return t234;
}

// function: _Z15printStatisticsRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
void printStatistics(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v235) {
bb236:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* stringRef237;
  stringRef237 = v235;
  char* cast238 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* r239 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast238);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t240 = stringRef237;
  unsigned long r241 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t240);
  struct std__basic_ostream_char__std__char_traits_char__* r242 = std__ostream__operator___2(r239, r241);
  char* cast243 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* r244 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r242, cast243);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t245 = stringRef237;
  unsigned long r246 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t245);
  struct std__basic_ostream_char__std__char_traits_char__* r247 = std__ostream__operator___2(r244, r246);
  char* cast248 = (char*)&(_str_10);
  struct std__basic_ostream_char__std__char_traits_char__* r249 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r247, cast248);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t250 = stringRef237;
  unsigned long r251 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t250);
  struct std__basic_ostream_char__std__char_traits_char__* r252 = std__ostream__operator___2(r249, r251);
  char* cast253 = (char*)&(_str_11);
  struct std__basic_ostream_char__std__char_traits_char__* r254 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r252, cast253);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t255 = stringRef237;
  unsigned long r256 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t255);
  struct std__basic_ostream_char__std__char_traits_char__* r257 = std__ostream__operator___2(r254, r256);
  char* cast258 = (char*)&(_str_12);
  struct std__basic_ostream_char__std__char_traits_char__* r259 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r257, cast258);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t260 = stringRef237;
  _Bool r261 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____empty___const(t260);
  struct std__basic_ostream_char__std__char_traits_char__* r262 = std__ostream__operator__(r259, r261);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v263) {
bb264:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this265;
  char* __retval266;
  this265 = v263;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t267 = this265;
  char* r268 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t267);
  __retval266 = r268;
  char* t269 = __retval266;
  return t269;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v270, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v271) {
bb272:
  struct std__basic_ostream_char__std__char_traits_char__* __os273;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str274;
  struct std__basic_ostream_char__std__char_traits_char__* __retval275;
  __os273 = v270;
  __str274 = v271;
  struct std__basic_ostream_char__std__char_traits_char__* t276 = __os273;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t277 = __str274;
  char* r278 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t277);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t279 = __str274;
  unsigned long r280 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t279);
  long cast281 = (long)r280;
  struct std__basic_ostream_char__std__char_traits_char__* r282 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t276, r278, cast281);
  __retval275 = r282;
  struct std__basic_ostream_char__std__char_traits_char__* t283 = __retval275;
  return t283;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v284, void* v285) {
bb286:
  struct std__basic_ostream_char__std__char_traits_char__* this287;
  void* __pf288;
  struct std__basic_ostream_char__std__char_traits_char__* __retval289;
  this287 = v284;
  __pf288 = v285;
  struct std__basic_ostream_char__std__char_traits_char__* t290 = this287;
  void* t291 = __pf288;
  struct std__basic_ostream_char__std__char_traits_char__* r292 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t291)(t290);
  __retval289 = r292;
  struct std__basic_ostream_char__std__char_traits_char__* t293 = __retval289;
  return t293;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v294) {
bb295:
  struct std__basic_ostream_char__std__char_traits_char__* __os296;
  struct std__basic_ostream_char__std__char_traits_char__* __retval297;
  __os296 = v294;
  struct std__basic_ostream_char__std__char_traits_char__* t298 = __os296;
  struct std__basic_ostream_char__std__char_traits_char__* r299 = std__ostream__flush(t298);
  __retval297 = r299;
  struct std__basic_ostream_char__std__char_traits_char__* t300 = __retval297;
  return t300;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v301) {
bb302:
  struct std__ctype_char_* __f303;
  struct std__ctype_char_* __retval304;
  __f303 = v301;
    struct std__ctype_char_* t305 = __f303;
    _Bool cast306 = (_Bool)t305;
    _Bool u307 = !cast306;
    if (u307) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t308 = __f303;
  __retval304 = t308;
  struct std__ctype_char_* t309 = __retval304;
  return t309;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v310, char v311) {
bb312:
  struct std__ctype_char_* this313;
  char __c314;
  char __retval315;
  this313 = v310;
  __c314 = v311;
  struct std__ctype_char_* t316 = this313;
    char t317 = t316->_M_widen_ok;
    _Bool cast318 = (_Bool)t317;
    if (cast318) {
      char t319 = __c314;
      unsigned char cast320 = (unsigned char)t319;
      unsigned long cast321 = (unsigned long)cast320;
      char t322 = t316->_M_widen[cast321];
      __retval315 = t322;
      char t323 = __retval315;
      return t323;
    }
  std__ctype_char____M_widen_init___const(t316);
  char t324 = __c314;
  void** v325 = (void**)t316;
  void* v326 = *((void**)v325);
  char vcall329 = (char)__VERIFIER_virtual_call_char_char(t316, 6, t324);
  __retval315 = vcall329;
  char t330 = __retval315;
  return t330;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v331, char v332) {
bb333:
  struct std__basic_ios_char__std__char_traits_char__* this334;
  char __c335;
  char __retval336;
  this334 = v331;
  __c335 = v332;
  struct std__basic_ios_char__std__char_traits_char__* t337 = this334;
  struct std__ctype_char_* t338 = t337->_M_ctype;
  struct std__ctype_char_* r339 = std__ctype_char__const__std____check_facet_std__ctype_char___(t338);
  char t340 = __c335;
  char r341 = std__ctype_char___widen_char__const(r339, t340);
  __retval336 = r341;
  char t342 = __retval336;
  return t342;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v343) {
bb344:
  struct std__basic_ostream_char__std__char_traits_char__* __os345;
  struct std__basic_ostream_char__std__char_traits_char__* __retval346;
  __os345 = v343;
  struct std__basic_ostream_char__std__char_traits_char__* t347 = __os345;
  struct std__basic_ostream_char__std__char_traits_char__* t348 = __os345;
  void** v349 = (void**)t348;
  void* v350 = *((void**)v349);
  unsigned char* cast351 = (unsigned char*)v350;
  long c352 = -24;
  unsigned char* ptr353 = &(cast351)[c352];
  long* cast354 = (long*)ptr353;
  long t355 = *cast354;
  unsigned char* cast356 = (unsigned char*)t348;
  unsigned char* ptr357 = &(cast356)[t355];
  struct std__basic_ostream_char__std__char_traits_char__* cast358 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr357;
  struct std__basic_ios_char__std__char_traits_char__* cast359 = (struct std__basic_ios_char__std__char_traits_char__*)cast358;
  char c360 = 10;
  char r361 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast359, c360);
  struct std__basic_ostream_char__std__char_traits_char__* r362 = std__ostream__put(t347, r361);
  struct std__basic_ostream_char__std__char_traits_char__* r363 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r362);
  __retval346 = r363;
  struct std__basic_ostream_char__std__char_traits_char__* t364 = __retval346;
  return t364;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v365, char* v366) {
bb367:
  char* __c1368;
  char* __c2369;
  _Bool __retval370;
  __c1368 = v365;
  __c2369 = v366;
  char* t371 = __c1368;
  char t372 = *t371;
  int cast373 = (int)t372;
  char* t374 = __c2369;
  char t375 = *t374;
  int cast376 = (int)t375;
  _Bool c377 = ((cast373 == cast376)) ? 1 : 0;
  __retval370 = c377;
  _Bool t378 = __retval370;
  return t378;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v379) {
bb380:
  char* __p381;
  unsigned long __retval382;
  unsigned long __i383;
  __p381 = v379;
  unsigned long c384 = 0;
  __i383 = c384;
    char ref_tmp0385;
    while (1) {
      unsigned long t386 = __i383;
      char* t387 = __p381;
      char* ptr388 = &(t387)[t386];
      char c389 = 0;
      ref_tmp0385 = c389;
      _Bool r390 = __gnu_cxx__char_traits_char___eq(ptr388, &ref_tmp0385);
      _Bool u391 = !r390;
      if (!u391) break;
      unsigned long t392 = __i383;
      unsigned long u393 = t392 + 1;
      __i383 = u393;
    }
  unsigned long t394 = __i383;
  __retval382 = t394;
  unsigned long t395 = __retval382;
  return t395;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v396) {
bb397:
  char* __s398;
  unsigned long __retval399;
  __s398 = v396;
    _Bool r400 = std____is_constant_evaluated();
    if (r400) {
      char* t401 = __s398;
      unsigned long r402 = __gnu_cxx__char_traits_char___length(t401);
      __retval399 = r402;
      unsigned long t403 = __retval399;
      return t403;
    }
  char* t404 = __s398;
  unsigned long r405 = strlen(t404);
  __retval399 = r405;
  unsigned long t406 = __retval399;
  return t406;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v407, unsigned long v408, unsigned long v409, char* v410) {
bb411:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this412;
  unsigned long __n1413;
  unsigned long __n2414;
  char* __s415;
  this412 = v407;
  __n1413 = v408;
  __n2414 = v409;
  __s415 = v410;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t416 = this412;
    unsigned long r417 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t416);
    unsigned long r418 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t416);
    unsigned long t419 = __n1413;
    unsigned long b420 = r418 - t419;
    unsigned long b421 = r417 - b420;
    unsigned long t422 = __n2414;
    _Bool c423 = ((b421 < t422)) ? 1 : 0;
    if (c423) {
      char* t424 = __s415;
      std____throw_length_error(t424);
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v425, char* v426, unsigned long v427) {
bb428:
  char* __s1429;
  char* __s2430;
  unsigned long __n431;
  char* __retval432;
  __s1429 = v425;
  __s2430 = v426;
  __n431 = v427;
    unsigned long t433 = __n431;
    unsigned long c434 = 0;
    _Bool c435 = ((t433 == c434)) ? 1 : 0;
    if (c435) {
      char* t436 = __s1429;
      __retval432 = t436;
      char* t437 = __retval432;
      return t437;
    }
    _Bool r438 = std____is_constant_evaluated();
    if (r438) {
        unsigned long __i439;
        unsigned long c440 = 0;
        __i439 = c440;
        while (1) {
          unsigned long t442 = __i439;
          unsigned long t443 = __n431;
          _Bool c444 = ((t442 < t443)) ? 1 : 0;
          if (!c444) break;
          char* t445 = __s1429;
          unsigned long t446 = __i439;
          char* ptr447 = &(t445)[t446];
          unsigned long t448 = __i439;
          char* t449 = __s2430;
          char* ptr450 = &(t449)[t448];
          char* r451 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr447, ptr450);
        for_step441: ;
          unsigned long t452 = __i439;
          unsigned long u453 = t452 + 1;
          __i439 = u453;
        }
      char* t454 = __s1429;
      __retval432 = t454;
      char* t455 = __retval432;
      return t455;
    }
  char* t456 = __s1429;
  void* cast457 = (void*)t456;
  char* t458 = __s2430;
  void* cast459 = (void*)t458;
  unsigned long t460 = __n431;
  unsigned long c461 = 1;
  unsigned long b462 = t460 * c461;
  void* r463 = memcpy(cast457, cast459, b462);
  char* t464 = __s1429;
  __retval432 = t464;
  char* t465 = __retval432;
  return t465;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v466, char* v467, unsigned long v468) {
bb469:
  char* __s1470;
  char* __s2471;
  unsigned long __n472;
  char* __retval473;
  __s1470 = v466;
  __s2471 = v467;
  __n472 = v468;
    unsigned long t474 = __n472;
    unsigned long c475 = 0;
    _Bool c476 = ((t474 == c475)) ? 1 : 0;
    if (c476) {
      char* t477 = __s1470;
      __retval473 = t477;
      char* t478 = __retval473;
      return t478;
    }
    _Bool r479 = std____is_constant_evaluated();
    if (r479) {
      char* t480 = __s1470;
      char* t481 = __s2471;
      unsigned long t482 = __n472;
      char* r483 = __gnu_cxx__char_traits_char___copy(t480, t481, t482);
      __retval473 = r483;
      char* t484 = __retval473;
      return t484;
    }
  char* t485 = __s1470;
  void* cast486 = (void*)t485;
  char* t487 = __s2471;
  void* cast488 = (void*)t487;
  unsigned long t489 = __n472;
  void* r490 = memcpy(cast486, cast488, t489);
  char* cast491 = (char*)r490;
  __retval473 = cast491;
  char* t492 = __retval473;
  return t492;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v493, char* v494, unsigned long v495) {
bb496:
  char* __d497;
  char* __s498;
  unsigned long __n499;
  __d497 = v493;
  __s498 = v494;
  __n499 = v495;
    unsigned long t500 = __n499;
    unsigned long c501 = 1;
    _Bool c502 = ((t500 == c501)) ? 1 : 0;
    if (c502) {
      char* t503 = __d497;
      char* t504 = __s498;
      std__char_traits_char___assign_2(t503, t504);
    } else {
      char* t505 = __d497;
      char* t506 = __s498;
      unsigned long t507 = __n499;
      char* r508 = std__char_traits_char___copy(t505, t506, t507);
    }
  return;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v509) {
bb510:
  struct std____new_allocator_char_* this511;
  unsigned long __retval512;
  this511 = v509;
  struct std____new_allocator_char_* t513 = this511;
  unsigned long c514 = 9223372036854775807;
  unsigned long c515 = 1;
  unsigned long b516 = c514 / c515;
  __retval512 = b516;
  unsigned long t517 = __retval512;
  return t517;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v518, unsigned long v519, void* v520) {
bb521:
  struct std____new_allocator_char_* this522;
  unsigned long __n523;
  void* unnamed524;
  char* __retval525;
  this522 = v518;
  __n523 = v519;
  unnamed524 = v520;
  struct std____new_allocator_char_* t526 = this522;
    unsigned long t527 = __n523;
    unsigned long r528 = std____new_allocator_char____M_max_size___const(t526);
    _Bool c529 = ((t527 > r528)) ? 1 : 0;
    if (c529) {
        unsigned long t530 = __n523;
        unsigned long c531 = -1;
        unsigned long c532 = 1;
        unsigned long b533 = c531 / c532;
        _Bool c534 = ((t530 > b533)) ? 1 : 0;
        if (c534) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c535 = 1;
    unsigned long c536 = 16;
    _Bool c537 = ((c535 > c536)) ? 1 : 0;
    if (c537) {
      unsigned long __al538;
      unsigned long c539 = 1;
      __al538 = c539;
      unsigned long t540 = __n523;
      unsigned long c541 = 1;
      unsigned long b542 = t540 * c541;
      unsigned long t543 = __al538;
      void* r544 = operator_new_2(b542, t543);
      char* cast545 = (char*)r544;
      __retval525 = cast545;
      char* t546 = __retval525;
      return t546;
    }
  unsigned long t547 = __n523;
  unsigned long c548 = 1;
  unsigned long b549 = t547 * c548;
  void* r550 = operator_new(b549);
  char* cast551 = (char*)r550;
  __retval525 = cast551;
  char* t552 = __retval525;
  return t552;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v553, unsigned long v554) {
bb555:
  struct std__allocator_char_* this556;
  unsigned long __n557;
  char* __retval558;
  this556 = v553;
  __n557 = v554;
  struct std__allocator_char_* t559 = this556;
    _Bool r560 = std____is_constant_evaluated();
    if (r560) {
        unsigned long t561 = __n557;
        unsigned long c562 = 1;
        unsigned long ovr563;
        _Bool ovf564 = __builtin_mul_overflow(t561, c562, &ovr563);
        __n557 = ovr563;
        if (ovf564) {
          std____throw_bad_array_new_length();
        }
      unsigned long t565 = __n557;
      void* r566 = operator_new(t565);
      char* cast567 = (char*)r566;
      __retval558 = cast567;
      char* t568 = __retval558;
      return t568;
    }
  struct std____new_allocator_char_* base569 = (struct std____new_allocator_char_*)((char *)t559 + 0);
  unsigned long t570 = __n557;
  void* c571 = ((void*)0);
  char* r572 = std____new_allocator_char___allocate(base569, t570, c571);
  __retval558 = r572;
  char* t573 = __retval558;
  return t573;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v574, unsigned long v575) {
bb576:
  struct std__allocator_char_* __a577;
  unsigned long __n578;
  char* __retval579;
  __a577 = v574;
  __n578 = v575;
  struct std__allocator_char_* t580 = __a577;
  unsigned long t581 = __n578;
  char* r582 = std__allocator_char___allocate(t580, t581);
  __retval579 = r582;
  char* t583 = __retval579;
  return t583;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v584, unsigned long v585) {
bb586:
  struct std__allocator_char_* __a587;
  unsigned long __n588;
  char* __retval589;
  char* __p590;
  __a587 = v584;
  __n588 = v585;
  struct std__allocator_char_* t591 = __a587;
  unsigned long t592 = __n588;
  char* r593 = std__allocator_traits_std__allocator_char_____allocate(t591, t592);
  __p590 = r593;
  char* t594 = __p590;
  __retval589 = t594;
  char* t595 = __retval589;
  return t595;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v596) {
bb597:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this598;
  struct std__allocator_char_* __retval599;
  this598 = v596;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t600 = this598;
  struct std__allocator_char_* base601 = (struct std__allocator_char_*)((char *)&(t600->_M_dataplus) + 0);
  __retval599 = base601;
  struct std__allocator_char_* t602 = __retval599;
  return t602;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v603, unsigned long* v604, unsigned long v605) {
bb606:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this607;
  unsigned long* __capacity608;
  unsigned long __old_capacity609;
  char* __retval610;
  this607 = v603;
  __capacity608 = v604;
  __old_capacity609 = v605;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t611 = this607;
    unsigned long* t612 = __capacity608;
    unsigned long t613 = *t612;
    unsigned long r614 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t611);
    _Bool c615 = ((t613 > r614)) ? 1 : 0;
    if (c615) {
      char* cast616 = (char*)&(_str_14);
      std____throw_length_error(cast616);
    }
    unsigned long* t617 = __capacity608;
    unsigned long t618 = *t617;
    unsigned long t619 = __old_capacity609;
    _Bool c620 = ((t618 > t619)) ? 1 : 0;
    _Bool ternary621;
    if (c620) {
      unsigned long* t622 = __capacity608;
      unsigned long t623 = *t622;
      unsigned long c624 = 2;
      unsigned long t625 = __old_capacity609;
      unsigned long b626 = c624 * t625;
      _Bool c627 = ((t623 < b626)) ? 1 : 0;
      ternary621 = (_Bool)c627;
    } else {
      _Bool c628 = 0;
      ternary621 = (_Bool)c628;
    }
    if (ternary621) {
      unsigned long c629 = 2;
      unsigned long t630 = __old_capacity609;
      unsigned long b631 = c629 * t630;
      unsigned long* t632 = __capacity608;
      *t632 = b631;
        unsigned long* t633 = __capacity608;
        unsigned long t634 = *t633;
        unsigned long r635 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t611);
        _Bool c636 = ((t634 > r635)) ? 1 : 0;
        if (c636) {
          unsigned long r637 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t611);
          unsigned long* t638 = __capacity608;
          *t638 = r637;
        }
    }
  struct std__allocator_char_* r639 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t611);
  unsigned long* t640 = __capacity608;
  unsigned long t641 = *t640;
  unsigned long c642 = 1;
  unsigned long b643 = t641 + c642;
  char* r644 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r639, b643);
  __retval610 = r644;
  char* t645 = __retval610;
  return t645;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v646) {
bb647:
  char* __r648;
  char* __retval649;
  __r648 = v646;
  char* t650 = __r648;
  __retval649 = t650;
  char* t651 = __retval649;
  return t651;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v652) {
bb653:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this654;
  char* __retval655;
  this654 = v652;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t656 = this654;
  char* cast657 = (char*)&(t656->field2._M_local_buf);
  char* r658 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast657);
  __retval655 = r658;
  char* t659 = __retval655;
  return t659;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v660) {
bb661:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this662;
  _Bool __retval663;
  this662 = v660;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t664 = this662;
    char* r665 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t664);
    char* r666 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t664);
    _Bool c667 = ((r665 == r666)) ? 1 : 0;
    if (c667) {
        unsigned long t668 = t664->_M_string_length;
        unsigned long c669 = 15;
        _Bool c670 = ((t668 > c669)) ? 1 : 0;
        if (c670) {
          __builtin_unreachable();
        }
      _Bool c671 = 1;
      __retval663 = c671;
      _Bool t672 = __retval663;
      return t672;
    }
  _Bool c673 = 0;
  __retval663 = c673;
  _Bool t674 = __retval663;
  return t674;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v675, char* v676, unsigned long v677) {
bb678:
  struct std____new_allocator_char_* this679;
  char* __p680;
  unsigned long __n681;
  this679 = v675;
  __p680 = v676;
  __n681 = v677;
  struct std____new_allocator_char_* t682 = this679;
    unsigned long c683 = 1;
    unsigned long c684 = 16;
    _Bool c685 = ((c683 > c684)) ? 1 : 0;
    if (c685) {
      char* t686 = __p680;
      void* cast687 = (void*)t686;
      unsigned long t688 = __n681;
      unsigned long c689 = 1;
      unsigned long b690 = t688 * c689;
      unsigned long c691 = 1;
      operator_delete_3(cast687, b690, c691);
      return;
    }
  char* t692 = __p680;
  void* cast693 = (void*)t692;
  unsigned long t694 = __n681;
  unsigned long c695 = 1;
  unsigned long b696 = t694 * c695;
  operator_delete_2(cast693, b696);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v697, char* v698, unsigned long v699) {
bb700:
  struct std__allocator_char_* this701;
  char* __p702;
  unsigned long __n703;
  this701 = v697;
  __p702 = v698;
  __n703 = v699;
  struct std__allocator_char_* t704 = this701;
    _Bool r705 = std____is_constant_evaluated();
    if (r705) {
      char* t706 = __p702;
      void* cast707 = (void*)t706;
      operator_delete(cast707);
      return;
    }
  struct std____new_allocator_char_* base708 = (struct std____new_allocator_char_*)((char *)t704 + 0);
  char* t709 = __p702;
  unsigned long t710 = __n703;
  std____new_allocator_char___deallocate(base708, t709, t710);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v711, char* v712, unsigned long v713) {
bb714:
  struct std__allocator_char_* __a715;
  char* __p716;
  unsigned long __n717;
  __a715 = v711;
  __p716 = v712;
  __n717 = v713;
  struct std__allocator_char_* t718 = __a715;
  char* t719 = __p716;
  unsigned long t720 = __n717;
  std__allocator_char___deallocate(t718, t719, t720);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v721, unsigned long v722) {
bb723:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this724;
  unsigned long __size725;
  this724 = v721;
  __size725 = v722;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t726 = this724;
  struct std__allocator_char_* r727 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t726);
  char* r728 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t726);
  unsigned long t729 = __size725;
  unsigned long c730 = 1;
  unsigned long b731 = t729 + c730;
  std__allocator_traits_std__allocator_char_____deallocate(r727, r728, b731);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v732) {
bb733:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this734;
  this734 = v732;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t735 = this734;
    _Bool r736 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t735);
    _Bool u737 = !r736;
    if (u737) {
      unsigned long t738 = t735->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t735, t738);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v739, char* v740) {
bb741:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this742;
  char* __p743;
  this742 = v739;
  __p743 = v740;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t744 = this742;
  char* t745 = __p743;
  t744->_M_dataplus._M_p = t745;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v746, unsigned long v747) {
bb748:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this749;
  unsigned long __capacity750;
  this749 = v746;
  __capacity750 = v747;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t751 = this749;
  unsigned long t752 = __capacity750;
  t751->field2._M_allocated_capacity = t752;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v753, unsigned long v754, unsigned long v755, char* v756, unsigned long v757) {
bb758:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this759;
  unsigned long __pos760;
  unsigned long __len1761;
  char* __s762;
  unsigned long __len2763;
  unsigned long __how_much764;
  unsigned long __new_capacity765;
  char* __r766;
  this759 = v753;
  __pos760 = v754;
  __len1761 = v755;
  __s762 = v756;
  __len2763 = v757;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t767 = this759;
  unsigned long r768 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t767);
  unsigned long t769 = __pos760;
  unsigned long b770 = r768 - t769;
  unsigned long t771 = __len1761;
  unsigned long b772 = b770 - t771;
  __how_much764 = b772;
  unsigned long r773 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t767);
  unsigned long t774 = __len2763;
  unsigned long b775 = r773 + t774;
  unsigned long t776 = __len1761;
  unsigned long b777 = b775 - t776;
  __new_capacity765 = b777;
  unsigned long r778 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t767);
  char* r779 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t767, &__new_capacity765, r778);
  __r766 = r779;
    unsigned long t780 = __pos760;
    _Bool cast781 = (_Bool)t780;
    if (cast781) {
      char* t782 = __r766;
      char* r783 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t767);
      unsigned long t784 = __pos760;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t782, r783, t784);
    }
    char* t785 = __s762;
    _Bool cast786 = (_Bool)t785;
    _Bool ternary787;
    if (cast786) {
      unsigned long t788 = __len2763;
      _Bool cast789 = (_Bool)t788;
      ternary787 = (_Bool)cast789;
    } else {
      _Bool c790 = 0;
      ternary787 = (_Bool)c790;
    }
    if (ternary787) {
      char* t791 = __r766;
      unsigned long t792 = __pos760;
      char* ptr793 = &(t791)[t792];
      char* t794 = __s762;
      unsigned long t795 = __len2763;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr793, t794, t795);
    }
    unsigned long t796 = __how_much764;
    _Bool cast797 = (_Bool)t796;
    if (cast797) {
      char* t798 = __r766;
      unsigned long t799 = __pos760;
      char* ptr800 = &(t798)[t799];
      unsigned long t801 = __len2763;
      char* ptr802 = &(ptr800)[t801];
      char* r803 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t767);
      unsigned long t804 = __pos760;
      char* ptr805 = &(r803)[t804];
      unsigned long t806 = __len1761;
      char* ptr807 = &(ptr805)[t806];
      unsigned long t808 = __how_much764;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr802, ptr807, t808);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t767);
  char* t809 = __r766;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t767, t809);
  unsigned long t810 = __new_capacity765;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t767, t810);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v811, char* v812, unsigned long v813) {
bb814:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this815;
  char* __s816;
  unsigned long __n817;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval818;
  unsigned long __len819;
  this815 = v811;
  __s816 = v812;
  __n817 = v813;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t820 = this815;
  unsigned long t821 = __n817;
  unsigned long r822 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t820);
  unsigned long b823 = t821 + r822;
  __len819 = b823;
    unsigned long t824 = __len819;
    unsigned long r825 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t820);
    _Bool c826 = ((t824 <= r825)) ? 1 : 0;
    if (c826) {
        unsigned long t827 = __n817;
        _Bool cast828 = (_Bool)t827;
        if (cast828) {
          char* r829 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t820);
          unsigned long r830 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t820);
          char* ptr831 = &(r829)[r830];
          char* t832 = __s816;
          unsigned long t833 = __n817;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr831, t832, t833);
        }
    } else {
      unsigned long r834 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t820);
      unsigned long c835 = 0;
      char* t836 = __s816;
      unsigned long t837 = __n817;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t820, r834, c835, t836, t837);
    }
  unsigned long t838 = __len819;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t820, t838);
  __retval818 = t820;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t839 = __retval818;
  return t839;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v840, char* v841) {
bb842:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this843;
  char* __s844;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval845;
  unsigned long __n846;
  this843 = v840;
  __s844 = v841;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t847 = this843;
  char* t848 = __s844;
  unsigned long r849 = std__char_traits_char___length(t848);
  __n846 = r849;
  unsigned long c850 = 0;
  unsigned long t851 = __n846;
  char* cast852 = (char*)&(_str_13);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t847, c850, t851, cast852);
  char* t853 = __s844;
  unsigned long t854 = __n846;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r855 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(t847, t853, t854);
  __retval845 = r855;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t856 = __retval845;
  return t856;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEpLEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v857, char* v858) {
bb859:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this860;
  char* __s861;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval862;
  this860 = v857;
  __s861 = v858;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t863 = this860;
  char* t864 = __s861;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r865 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(t863, t864);
  __retval862 = r865;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t866 = __retval862;
  return t866;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign_2(char* v867, char* v868) {
bb869:
  char* __c1870;
  char* __c2871;
  __c1870 = v867;
  __c2871 = v868;
    _Bool r872 = std____is_constant_evaluated();
    if (r872) {
      char* t873 = __c1870;
      char* t874 = __c2871;
      char* r875 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t873, t874);
    } else {
      char* t876 = __c2871;
      char t877 = *t876;
      char* t878 = __c1870;
      *t878 = t877;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v879, char* v880, unsigned long v881) {
bb882:
  char* __s1883;
  char* __s2884;
  unsigned long __n885;
  char* __retval886;
  __s1883 = v879;
  __s2884 = v880;
  __n885 = v881;
    unsigned long t887 = __n885;
    unsigned long c888 = 0;
    _Bool c889 = ((t887 == c888)) ? 1 : 0;
    if (c889) {
      char* t890 = __s1883;
      __retval886 = t890;
      char* t891 = __retval886;
      return t891;
    }
    _Bool r892 = std____is_constant_evaluated();
    if (r892) {
        char* t893 = __s2884;
        char* t894 = __s1883;
        _Bool c895 = ((t893 < t894)) ? 1 : 0;
        _Bool isconst896 = 0;
        _Bool ternary897;
        if (isconst896) {
          char* t898 = __s1883;
          char* t899 = __s2884;
          _Bool c900 = ((t898 > t899)) ? 1 : 0;
          ternary897 = (_Bool)c900;
        } else {
          _Bool c901 = 0;
          ternary897 = (_Bool)c901;
        }
        _Bool ternary902;
        if (ternary897) {
          char* t903 = __s1883;
          char* t904 = __s2884;
          unsigned long t905 = __n885;
          char* ptr906 = &(t904)[t905];
          _Bool c907 = ((t903 < ptr906)) ? 1 : 0;
          ternary902 = (_Bool)c907;
        } else {
          _Bool c908 = 0;
          ternary902 = (_Bool)c908;
        }
        if (ternary902) {
            do {
                unsigned long t909 = __n885;
                unsigned long u910 = t909 - 1;
                __n885 = u910;
                unsigned long t911 = __n885;
                char* t912 = __s1883;
                char* ptr913 = &(t912)[t911];
                unsigned long t914 = __n885;
                char* t915 = __s2884;
                char* ptr916 = &(t915)[t914];
                __gnu_cxx__char_traits_char___assign_2(ptr913, ptr916);
              unsigned long t917 = __n885;
              unsigned long c918 = 0;
              _Bool c919 = ((t917 > c918)) ? 1 : 0;
              if (!c919) break;
            } while (1);
        } else {
          char* t920 = __s1883;
          char* t921 = __s2884;
          unsigned long t922 = __n885;
          char* r923 = __gnu_cxx__char_traits_char___copy(t920, t921, t922);
        }
      char* t924 = __s1883;
      __retval886 = t924;
      char* t925 = __retval886;
      return t925;
    }
  char* t926 = __s1883;
  void* cast927 = (void*)t926;
  char* t928 = __s2884;
  void* cast929 = (void*)t928;
  unsigned long t930 = __n885;
  unsigned long c931 = 1;
  unsigned long b932 = t930 * c931;
  void* r933 = memmove(cast927, cast929, b932);
  char* t934 = __s1883;
  __retval886 = t934;
  char* t935 = __retval886;
  return t935;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v936, char* v937, unsigned long v938) {
bb939:
  char* __s1940;
  char* __s2941;
  unsigned long __n942;
  char* __retval943;
  __s1940 = v936;
  __s2941 = v937;
  __n942 = v938;
    unsigned long t944 = __n942;
    unsigned long c945 = 0;
    _Bool c946 = ((t944 == c945)) ? 1 : 0;
    if (c946) {
      char* t947 = __s1940;
      __retval943 = t947;
      char* t948 = __retval943;
      return t948;
    }
    _Bool r949 = std____is_constant_evaluated();
    if (r949) {
      char* t950 = __s1940;
      char* t951 = __s2941;
      unsigned long t952 = __n942;
      char* r953 = __gnu_cxx__char_traits_char___move(t950, t951, t952);
      __retval943 = r953;
      char* t954 = __retval943;
      return t954;
    }
  char* t955 = __s1940;
  void* cast956 = (void*)t955;
  char* t957 = __s2941;
  void* cast958 = (void*)t957;
  unsigned long t959 = __n942;
  void* r960 = memmove(cast956, cast958, t959);
  char* cast961 = (char*)r960;
  __retval943 = cast961;
  char* t962 = __retval943;
  return t962;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v963, char* v964, unsigned long v965) {
bb966:
  char* __d967;
  char* __s968;
  unsigned long __n969;
  __d967 = v963;
  __s968 = v964;
  __n969 = v965;
    unsigned long t970 = __n969;
    unsigned long c971 = 1;
    _Bool c972 = ((t970 == c971)) ? 1 : 0;
    if (c972) {
      char* t973 = __d967;
      char* t974 = __s968;
      std__char_traits_char___assign_2(t973, t974);
    } else {
      char* t975 = __d967;
      char* t976 = __s968;
      unsigned long t977 = __n969;
      char* r978 = std__char_traits_char___move(t975, t976, t977);
    }
  return;
}

// function: _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* v979, char* v980) {
bb981:
  char* __location982;
  char* __args983;
  char* __retval984;
  void* __loc985;
  __location982 = v979;
  __args983 = v980;
  char* t986 = __location982;
  void* cast987 = (void*)t986;
  __loc985 = cast987;
    void* t988 = __loc985;
    char* cast989 = (char*)t988;
    char* t990 = __args983;
    char t991 = *t990;
    *cast989 = t991;
    __retval984 = cast989;
    char* t992 = __retval984;
    return t992;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignEPcmc
char* __gnu_cxx__char_traits_char___assign(char* v993, unsigned long v994, char v995) {
bb996:
  char* __s997;
  unsigned long __n998;
  char __a999;
  char* __retval1000;
  __s997 = v993;
  __n998 = v994;
  __a999 = v995;
    _Bool r1001 = std____is_constant_evaluated();
    if (r1001) {
        unsigned long __i1002;
        unsigned long c1003 = 0;
        __i1002 = c1003;
        while (1) {
          unsigned long t1005 = __i1002;
          unsigned long t1006 = __n998;
          _Bool c1007 = ((t1005 < t1006)) ? 1 : 0;
          if (!c1007) break;
          char* t1008 = __s997;
          unsigned long t1009 = __i1002;
          char* ptr1010 = &(t1008)[t1009];
          char* r1011 = _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(ptr1010, &__a999);
        for_step1004: ;
          unsigned long t1012 = __i1002;
          unsigned long u1013 = t1012 + 1;
          __i1002 = u1013;
        }
      char* t1014 = __s997;
      __retval1000 = t1014;
      char* t1015 = __retval1000;
      return t1015;
    }
      unsigned long t1016 = __n998;
      _Bool cast1017 = (_Bool)t1016;
      if (cast1017) {
        unsigned char __c1018;
        void* cast1019 = (void*)&(__c1018);
        void* cast1020 = (void*)&(__a999);
        unsigned long c1021 = 1;
        void* r1022 = memcpy(cast1019, cast1020, c1021);
        char* t1023 = __s997;
        void* cast1024 = (void*)t1023;
        unsigned char t1025 = __c1018;
        int cast1026 = (int)t1025;
        unsigned long t1027 = __n998;
        void* r1028 = memset(cast1024, cast1026, t1027);
      }
  char* t1029 = __s997;
  __retval1000 = t1029;
  char* t1030 = __retval1000;
  return t1030;
}

// function: _ZNSt11char_traitsIcE6assignEPcmc
char* std__char_traits_char___assign(char* v1031, unsigned long v1032, char v1033) {
bb1034:
  char* __s1035;
  unsigned long __n1036;
  char __a1037;
  char* __retval1038;
  __s1035 = v1031;
  __n1036 = v1032;
  __a1037 = v1033;
    unsigned long t1039 = __n1036;
    unsigned long c1040 = 0;
    _Bool c1041 = ((t1039 == c1040)) ? 1 : 0;
    if (c1041) {
      char* t1042 = __s1035;
      __retval1038 = t1042;
      char* t1043 = __retval1038;
      return t1043;
    }
    _Bool r1044 = std____is_constant_evaluated();
    if (r1044) {
      char* t1045 = __s1035;
      unsigned long t1046 = __n1036;
      char t1047 = __a1037;
      char* r1048 = __gnu_cxx__char_traits_char___assign(t1045, t1046, t1047);
      __retval1038 = r1048;
      char* t1049 = __retval1038;
      return t1049;
    }
  char* t1050 = __s1035;
  void* cast1051 = (void*)t1050;
  char t1052 = __a1037;
  int cast1053 = (int)t1052;
  unsigned long t1054 = __n1036;
  void* r1055 = memset(cast1051, cast1053, t1054);
  char* cast1056 = (char*)r1055;
  __retval1038 = cast1056;
  char* t1057 = __retval1038;
  return t1057;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_S_assignEPcmc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(char* v1058, unsigned long v1059, char v1060) {
bb1061:
  char* __d1062;
  unsigned long __n1063;
  char __c1064;
  __d1062 = v1058;
  __n1063 = v1059;
  __c1064 = v1060;
    unsigned long t1065 = __n1063;
    unsigned long c1066 = 1;
    _Bool c1067 = ((t1065 == c1066)) ? 1 : 0;
    if (c1067) {
      char* t1068 = __d1062;
      std__char_traits_char___assign_2(t1068, &__c1064);
    } else {
      char* t1069 = __d1062;
      unsigned long t1070 = __n1063;
      char t1071 = __c1064;
      char* r1072 = std__char_traits_char___assign(t1069, t1070, t1071);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE14_M_replace_auxEmmmc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1073, unsigned long v1074, unsigned long v1075, unsigned long v1076, char v1077) {
bb1078:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1079;
  unsigned long __pos11080;
  unsigned long __n11081;
  unsigned long __n21082;
  char __c1083;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1084;
  unsigned long __old_size1085;
  unsigned long __new_size1086;
  this1079 = v1073;
  __pos11080 = v1074;
  __n11081 = v1075;
  __n21082 = v1076;
  __c1083 = v1077;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1087 = this1079;
  unsigned long t1088 = __n11081;
  unsigned long t1089 = __n21082;
  char* cast1090 = (char*)&(_str_15);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t1087, t1088, t1089, cast1090);
  unsigned long r1091 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1087);
  __old_size1085 = r1091;
  unsigned long t1092 = __old_size1085;
  unsigned long t1093 = __n21082;
  unsigned long b1094 = t1092 + t1093;
  unsigned long t1095 = __n11081;
  unsigned long b1096 = b1094 - t1095;
  __new_size1086 = b1096;
    unsigned long t1097 = __new_size1086;
    unsigned long r1098 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t1087);
    _Bool c1099 = ((t1097 <= r1098)) ? 1 : 0;
    if (c1099) {
      char* __p1100;
      unsigned long __how_much1101;
      char* r1102 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1087);
      unsigned long t1103 = __pos11080;
      char* ptr1104 = &(r1102)[t1103];
      __p1100 = ptr1104;
      unsigned long t1105 = __old_size1085;
      unsigned long t1106 = __pos11080;
      unsigned long b1107 = t1105 - t1106;
      unsigned long t1108 = __n11081;
      unsigned long b1109 = b1107 - t1108;
      __how_much1101 = b1109;
        unsigned long t1110 = __how_much1101;
        _Bool cast1111 = (_Bool)t1110;
        _Bool ternary1112;
        if (cast1111) {
          unsigned long t1113 = __n11081;
          unsigned long t1114 = __n21082;
          _Bool c1115 = ((t1113 != t1114)) ? 1 : 0;
          ternary1112 = (_Bool)c1115;
        } else {
          _Bool c1116 = 0;
          ternary1112 = (_Bool)c1116;
        }
        if (ternary1112) {
          char* t1117 = __p1100;
          unsigned long t1118 = __n21082;
          char* ptr1119 = &(t1117)[t1118];
          char* t1120 = __p1100;
          unsigned long t1121 = __n11081;
          char* ptr1122 = &(t1120)[t1121];
          unsigned long t1123 = __how_much1101;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr1119, ptr1122, t1123);
        }
    } else {
      unsigned long t1124 = __pos11080;
      unsigned long t1125 = __n11081;
      char* c1126 = ((void*)0);
      unsigned long t1127 = __n21082;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t1087, t1124, t1125, c1126, t1127);
    }
    unsigned long t1128 = __n21082;
    _Bool cast1129 = (_Bool)t1128;
    if (cast1129) {
      char* r1130 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1087);
      unsigned long t1131 = __pos11080;
      char* ptr1132 = &(r1130)[t1131];
      unsigned long t1133 = __n21082;
      char t1134 = __c1083;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(ptr1132, t1133, t1134);
    }
  unsigned long t1135 = __new_size1086;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1087, t1135);
  __retval1084 = t1087;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1136 = __retval1084;
  return t1136;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEmc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1137, unsigned long v1138, char v1139) {
bb1140:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1141;
  unsigned long __n1142;
  char __c1143;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1144;
  this1141 = v1137;
  __n1142 = v1138;
  __c1143 = v1139;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1145 = this1141;
  unsigned long r1146 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1145);
  unsigned long c1147 = 0;
  unsigned long t1148 = __n1142;
  char t1149 = __c1143;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1150 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_aux(t1145, r1146, c1147, t1148, t1149);
  __retval1144 = r1150;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1151 = __retval1144;
  return t1151;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6resizeEmc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____resize_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1152, unsigned long v1153, char v1154) {
bb1155:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1156;
  unsigned long __n1157;
  char __c1158;
  unsigned long __size1159;
  this1156 = v1152;
  __n1157 = v1153;
  __c1158 = v1154;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1160 = this1156;
  unsigned long r1161 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1160);
  __size1159 = r1161;
    unsigned long t1162 = __size1159;
    unsigned long t1163 = __n1157;
    _Bool c1164 = ((t1162 < t1163)) ? 1 : 0;
    if (c1164) {
      unsigned long t1165 = __n1157;
      unsigned long t1166 = __size1159;
      unsigned long b1167 = t1165 - t1166;
      char t1168 = __c1158;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1169 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(t1160, b1167, t1168);
    } else {
        unsigned long t1170 = __n1157;
        unsigned long t1171 = __size1159;
        _Bool c1172 = ((t1170 < t1171)) ? 1 : 0;
        if (c1172) {
          unsigned long t1173 = __n1157;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1160, t1173);
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6resizeEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____resize(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1174, unsigned long v1175) {
bb1176:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1177;
  unsigned long __n1178;
  this1177 = v1174;
  __n1178 = v1175;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1179 = this1177;
  unsigned long t1180 = __n1178;
  char c1181 = 0;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____resize_2(t1179, t1180, c1181);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1182) {
bb1183:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1184;
  unsigned long __retval1185;
  this1184 = v1182;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1186 = this1184;
  unsigned long r1187 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1186);
  __retval1185 = r1187;
  unsigned long t1188 = __retval1185;
  return t1188;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1189) {
bb1190:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1191;
  this1191 = v1189;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1192 = this1191;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1192);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1192->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb1193:
  int __retval1194;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string11195;
  int c1196 = 0;
  __retval1194 = c1196;
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&string11195);
    char* cast1197 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r1198 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1197);
    struct std__basic_ostream_char__std__char_traits_char__* r1199 = std__ostream__operator___std__ios_base_____(r1198, &std__boolalpha);
    printStatistics(&string11195);
    char* cast1200 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* r1201 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1200);
    struct std__basic_istream_char__std__char_traits_char__* r1202 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___std__allocator_char___(&_ZSt3cin, &string11195);
    char* cast1203 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r1204 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1203);
    struct std__basic_ostream_char__std__char_traits_char__* r1205 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1204, &string11195);
    char* cast1206 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r1207 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1206);
    printStatistics(&string11195);
    struct std__basic_istream_char__std__char_traits_char__* r1208 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___std__allocator_char___(&_ZSt3cin, &string11195);
    char* cast1209 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r1210 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1209);
    struct std__basic_ostream_char__std__char_traits_char__* r1211 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1210, &string11195);
    struct std__basic_ostream_char__std__char_traits_char__* r1212 = std__ostream__operator___std__ostream_____(r1211, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    printStatistics(&string11195);
    char* cast1213 = (char*)&(_str_5);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1214 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(&string11195, cast1213);
    char* cast1215 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* r1216 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1215);
    struct std__basic_ostream_char__std__char_traits_char__* r1217 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1216, &string11195);
    struct std__basic_ostream_char__std__char_traits_char__* r1218 = std__ostream__operator___std__ostream_____(r1217, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    printStatistics(&string11195);
    unsigned long r1219 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(&string11195);
    unsigned long c1220 = 10;
    unsigned long b1221 = r1219 + c1220;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____resize(&string11195, b1221);
    char* cast1222 = (char*)&(_str_7);
    struct std__basic_ostream_char__std__char_traits_char__* r1223 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1222);
    printStatistics(&string11195);
    struct std__basic_ostream_char__std__char_traits_char__* r1224 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c1225 = 0;
    __retval1194 = c1225;
    int t1226 = __retval1194;
    int ret_val1227 = t1226;
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&string11195);
    }
    return ret_val1227;
  int t1228 = __retval1194;
  return t1228;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1229) {
bb1230:
  char* __r1231;
  char* __retval1232;
  __r1231 = v1229;
  char* t1233 = __r1231;
  __retval1232 = t1233;
  char* t1234 = __retval1232;
  return t1234;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1235) {
bb1236:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1237;
  char* __retval1238;
  this1237 = v1235;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1239 = this1237;
  char* cast1240 = (char*)&(t1239->field2._M_local_buf);
  char* r1241 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1240);
  __retval1238 = r1241;
  char* t1242 = __retval1238;
  return t1242;
}

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v1243) {
bb1244:
  struct std__allocator_char_* this1245;
  this1245 = v1243;
  struct std__allocator_char_* t1246 = this1245;
  struct std____new_allocator_char_* base1247 = (struct std____new_allocator_char_*)((char *)t1246 + 0);
  std____new_allocator_char_____new_allocator_2(base1247);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1248, char* v1249, struct std__allocator_char_* v1250) {
bb1251:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1252;
  char* __dat1253;
  struct std__allocator_char_* __a1254;
  this1252 = v1248;
  __dat1253 = v1249;
  __a1254 = v1250;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1255 = this1252;
  struct std__allocator_char_* base1256 = (struct std__allocator_char_*)((char *)t1255 + 0);
  struct std__allocator_char_* t1257 = __a1254;
  std__allocator_char___allocator(base1256, t1257);
    char* t1258 = __dat1253;
    t1255->_M_p = t1258;
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v1259) {
bb1260:
  struct std__allocator_char_* this1261;
  this1261 = v1259;
  struct std__allocator_char_* t1262 = this1261;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1263:
  _Bool __retval1264;
    _Bool c1265 = 0;
    __retval1264 = c1265;
    _Bool t1266 = __retval1264;
    return t1266;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1267) {
bb1268:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1269;
  this1269 = v1267;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1270 = this1269;
    _Bool r1271 = std__is_constant_evaluated();
    if (r1271) {
        unsigned long __i1272;
        unsigned long c1273 = 0;
        __i1272 = c1273;
        while (1) {
          unsigned long t1275 = __i1272;
          unsigned long c1276 = 15;
          _Bool c1277 = ((t1275 <= c1276)) ? 1 : 0;
          if (!c1277) break;
          char c1278 = 0;
          unsigned long t1279 = __i1272;
          t1270->field2._M_local_buf[t1279] = c1278;
        for_step1274: ;
          unsigned long t1280 = __i1272;
          unsigned long u1281 = t1280 + 1;
          __i1272 = u1281;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1282, unsigned long v1283) {
bb1284:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1285;
  unsigned long __length1286;
  this1285 = v1282;
  __length1286 = v1283;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1287 = this1285;
  unsigned long t1288 = __length1286;
  t1287->_M_string_length = t1288;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1289:
  _Bool __retval1290;
    _Bool c1291 = 0;
    __retval1290 = c1291;
    _Bool t1292 = __retval1290;
    return t1292;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1293, char* v1294) {
bb1295:
  char* __location1296;
  char* __args1297;
  char* __retval1298;
  void* __loc1299;
  __location1296 = v1293;
  __args1297 = v1294;
  char* t1300 = __location1296;
  void* cast1301 = (void*)t1300;
  __loc1299 = cast1301;
    void* t1302 = __loc1299;
    char* cast1303 = (char*)t1302;
    char* t1304 = __args1297;
    char t1305 = *t1304;
    *cast1303 = t1305;
    __retval1298 = cast1303;
    char* t1306 = __retval1298;
    return t1306;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign_2(char* v1307, char* v1308) {
bb1309:
  char* __c11310;
  char* __c21311;
  __c11310 = v1307;
  __c21311 = v1308;
    _Bool r1312 = std____is_constant_evaluated();
    if (r1312) {
      char* t1313 = __c11310;
      char* t1314 = __c21311;
      char* r1315 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1313, t1314);
    } else {
      char* t1316 = __c21311;
      char t1317 = *t1316;
      char* t1318 = __c11310;
      *t1318 = t1317;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1319) {
bb1320:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1321;
  char* __retval1322;
  this1321 = v1319;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1323 = this1321;
  char* t1324 = t1323->_M_dataplus._M_p;
  __retval1322 = t1324;
  char* t1325 = __retval1322;
  return t1325;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1326, unsigned long v1327) {
bb1328:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1329;
  unsigned long __n1330;
  char ref_tmp01331;
  this1329 = v1326;
  __n1330 = v1327;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1332 = this1329;
  unsigned long t1333 = __n1330;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1332, t1333);
  unsigned long t1334 = __n1330;
  char* r1335 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1332);
  char* ptr1336 = &(r1335)[t1334];
  char c1337 = 0;
  ref_tmp01331 = c1337;
  std__char_traits_char___assign_2(ptr1336, &ref_tmp01331);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1338) {
bb1339:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1340;
  this1340 = v1338;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1341 = this1340;
  {
    struct std__allocator_char_* base1342 = (struct std__allocator_char_*)((char *)t1341 + 0);
    std__allocator_char____allocator(base1342);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1343) {
bb1344:
  struct std____new_allocator_char_* this1345;
  this1345 = v1343;
  struct std____new_allocator_char_* t1346 = this1345;
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1347, struct std____new_allocator_char_* v1348) {
bb1349:
  struct std____new_allocator_char_* this1350;
  struct std____new_allocator_char_* unnamed1351;
  this1350 = v1347;
  unnamed1351 = v1348;
  struct std____new_allocator_char_* t1352 = this1350;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1353, struct std__allocator_char_* v1354) {
bb1355:
  struct std__allocator_char_* this1356;
  struct std__allocator_char_* __a1357;
  this1356 = v1353;
  __a1357 = v1354;
  struct std__allocator_char_* t1358 = this1356;
  struct std____new_allocator_char_* base1359 = (struct std____new_allocator_char_*)((char *)t1358 + 0);
  struct std__allocator_char_* t1360 = __a1357;
  struct std____new_allocator_char_* base1361 = (struct std____new_allocator_char_*)((char *)t1360 + 0);
  std____new_allocator_char_____new_allocator(base1359, base1361);
  return;
}

