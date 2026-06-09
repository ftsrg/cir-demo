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
struct anon_struct_0 { unsigned char* __field0[5]; unsigned char* __field1[5]; };
struct anon_struct_1 { unsigned char* __field0[4]; };
struct anon_struct_2 { unsigned char* __field0[16]; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__less_const_char___ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* _M_in_beg; char* _M_in_cur; char* _M_in_end; char* _M_out_beg; char* _M_out_cur; char* _M_out_end; struct std__locale _M_buf_locale; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; int _M_mode; struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ _M_string; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char__ { struct std__basic_ostream_char__std__char_traits_char__ __field0; struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__ _M_stringbuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVNSt7__cxx1119basic_ostringstreamIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void *_ZTVNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt15basic_streambufIcSt11char_traitsIcEE[];
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base3outE_const __attribute__((aligned(4))) = 16;
char _str[30] = "Output of several data types ";
char _str_1[28] = "to an ostringstream object:";
char _str_2[18] = "\n        double: ";
char _str_3[18] = "\n           int: ";
char _str_4[18] = "\naddress of int: ";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[24] = "outputString contains:\n";
char _str_6[23] = "\nmore characters added";
char _str_7[39] = "\n\nafter additional stream insertions,\n";
char _str_8[50] = "basic_string: construction from null is not valid";
char _str_9[24] = "basic_string::_M_create";
extern void *_ZTVNSt7__cxx1119basic_ostringstreamIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void *_ZTVNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt15basic_streambufIcSt11char_traitsIcEE[];
char _str_10[25] = "basic_string::_M_replace";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
extern void std__ios_base__ios_base(struct std__ios_base* p0);
void std__ios_base___ios_base(struct std__ios_base* p0) {}
void std__basic_ios_char__std__char_traits_char_____basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ostream_char__std__char_traits_char_____basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* p0, void** p1);
void std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char_____basic_stringbuf(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* p0, int p1);
extern void std__basic_ios_char__std__char_traits_char_____init(struct std__basic_ios_char__std__char_traits_char__* p0, struct std__basic_streambuf_char__std__char_traits_char__* p1);
void std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______basic_stringbuf(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* p0);
void std__basic_ostream_char__std__char_traits_char______basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char_____basic_ostringstream(struct std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_double_(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___3(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_void_const__(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std__allocator_char_* p1);
char* std__basic_streambuf_char__std__char_traits_char_____pptr___const(struct std__basic_streambuf_char__std__char_traits_char__* p0);
char* std__basic_streambuf_char__std__char_traits_char_____egptr___const(struct std__basic_streambuf_char__std__char_traits_char__* p0);
char* std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______M_high_mark___const(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* p0, char* p1, char* p2);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void __gnu_cxx__char_traits_char___assign(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___move(char* p0, char* p1, unsigned long p2);
extern void* memmove(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, char* p3, unsigned long p4, unsigned long p5);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
char* char__std____niter_base_char__(char* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_char___void_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, char* p2);
char* std__basic_streambuf_char__std__char_traits_char_____pbase___const(struct std__basic_streambuf_char__std__char_traits_char__* p0);
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_copy_assign();
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_always_equal();
_Bool std__operator__(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void void_std____alloc_on_copy_std__allocator_char___(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char_____str___const__(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char_____str___const__(struct std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
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
void std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char______basic_ostringstream_2(struct std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char__* p0, void** p1);
void std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char______basic_ostringstream(struct std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char__* p0);
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
extern void std__locale__locale(struct std__locale* p0);
void std__locale___locale(struct std__locale* p0) {}
void std__basic_streambuf_char__std__char_traits_char_____basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* p0);
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);

extern unsigned char* _ZTTNSt7__cxx1119basic_ostringstreamIcSt11char_traitsIcESaIcEEE[4] __attribute__((aligned(8)));

// function: _ZNSt9basic_iosIcSt11char_traitsIcEEC2Ev
void std__basic_ios_char__std__char_traits_char_____basic_ios(struct std__basic_ios_char__std__char_traits_char__* v0) {
bb1:
  struct std__basic_ios_char__std__char_traits_char__* this2;
  this2 = v0;
  struct std__basic_ios_char__std__char_traits_char__* t3 = this2;
  struct std__ios_base* base4 = (struct std__ios_base*)((char *)t3 + 0);
  std__ios_base__ios_base(base4);
    void* v5 = (void*)&_ZTVSt9basic_iosIcSt11char_traitsIcEE[2];
    void** v6 = (void**)t3;
    *(void**)(v6) = (void*)v5;
    struct std__basic_ostream_char__std__char_traits_char__* c7 = ((void*)0);
    t3->_M_tie = c7;
    char c8 = 0;
    t3->_M_fill = c8;
    _Bool c9 = 0;
    t3->_M_fill_init = c9;
    struct std__basic_streambuf_char__std__char_traits_char__* c10 = ((void*)0);
    t3->_M_streambuf = c10;
    struct std__ctype_char_* c11 = ((void*)0);
    t3->_M_ctype = c11;
    struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* c12 = ((void*)0);
    t3->_M_num_put = c12;
    struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* c13 = ((void*)0);
    t3->_M_num_get = c13;
  return;
}

// function: _ZNSoC2Ev
void std__basic_ostream_char__std__char_traits_char_____basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* v14, void** v15) {
bb16:
  struct std__basic_ostream_char__std__char_traits_char__* this17;
  void** vtt18;
  this17 = v14;
  vtt18 = v15;
  struct std__basic_ostream_char__std__char_traits_char__* t19 = this17;
  void** t20 = vtt18;
  static void *vtt_slot21 = 0;
  void** vtt22 = (void**)&vtt_slot21;
  void** cast23 = (void**)vtt22;
  void* t24 = *cast23;
  void** v25 = (void**)t19;
  *(void**)(v25) = (void*)t24;
  static void *vtt_slot26 = 0;
  void** vtt27 = (void**)&vtt_slot26;
  void** cast28 = (void**)vtt27;
  void* t29 = *cast28;
  void** v30 = (void**)t19;
  void* v31 = *((void**)v30);
  unsigned char* cast32 = (unsigned char*)v31;
  long c33 = -24;
  unsigned char* ptr34 = &(cast32)[c33];
  long* cast35 = (long*)ptr34;
  long t36 = *cast35;
  unsigned char* cast37 = (unsigned char*)t19;
  unsigned char* ptr38 = &(cast37)[t36];
  struct std__basic_ostream_char__std__char_traits_char__* cast39 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr38;
  void** v40 = (void**)cast39;
  *(void**)(v40) = (void*)t29;
  void** v41 = (void**)t19;
  void* v42 = *((void**)v41);
  unsigned char* cast43 = (unsigned char*)v42;
  long c44 = -24;
  unsigned char* ptr45 = &(cast43)[c44];
  long* cast46 = (long*)ptr45;
  long t47 = *cast46;
  unsigned char* cast48 = (unsigned char*)t19;
  unsigned char* ptr49 = &(cast48)[t47];
  struct std__basic_ostream_char__std__char_traits_char__* cast50 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr49;
  struct std__basic_ios_char__std__char_traits_char__* cast51 = (struct std__basic_ios_char__std__char_traits_char__*)cast50;
  struct std__basic_streambuf_char__std__char_traits_char__* c52 = ((void*)0);
  std__basic_ios_char__std__char_traits_char_____init(cast51, c52);
  return;
}

// function: _ZNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEEC2ESt13_Ios_Openmode
void std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char_____basic_stringbuf(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* v53, int v54) {
bb55:
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* this56;
  int __mode57;
  this56 = v53;
  __mode57 = v54;
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* t58 = this56;
  struct std__basic_streambuf_char__std__char_traits_char__* base59 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t58 + 0);
  std__basic_streambuf_char__std__char_traits_char_____basic_streambuf(base59);
    void* v60 = (void*)&_ZTVNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEEE[2];
    void** v61 = (void**)t58;
    *(void**)(v61) = (void*)v60;
    int t62 = __mode57;
    t58->_M_mode = t62;
    _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&t58->_M_string);
  return;
}

// function: _ZNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______basic_stringbuf(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* v63) {
bb64:
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* this65;
  this65 = v63;
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* t66 = this65;
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&t66->_M_string);
    }
  {
    struct std__basic_streambuf_char__std__char_traits_char__* base67 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t66 + 0);
    std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base67);
  }
  return;
}

// function: _ZNSoD2Ev
void std__basic_ostream_char__std__char_traits_char______basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* v68, void** v69) {
bb70:
  struct std__basic_ostream_char__std__char_traits_char__* this71;
  void** vtt72;
  this71 = v68;
  vtt72 = v69;
  struct std__basic_ostream_char__std__char_traits_char__* t73 = this71;
  void** t74 = vtt72;
  return;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEED2Ev
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* v75) {
bb76:
  struct std__basic_ios_char__std__char_traits_char__* this77;
  this77 = v75;
  struct std__basic_ios_char__std__char_traits_char__* t78 = this77;
  {
    struct std__ios_base* base79 = (struct std__ios_base*)((char *)t78 + 0);
    std__ios_base___ios_base(base79);
  }
  return;
}

// function: _ZNSt7__cxx1119basic_ostringstreamIcSt11char_traitsIcESaIcEEC1Ev
void std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char_____basic_ostringstream(struct std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char__* v80) {
bb81:
  struct std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char__* this82;
  this82 = v80;
  struct std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char__* t83 = this82;
  struct std__basic_ios_char__std__char_traits_char__* base84 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t83 + 112);
  std__basic_ios_char__std__char_traits_char_____basic_ios(base84);
    struct std__basic_ostream_char__std__char_traits_char__* base85 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t83 + 0);
    static void *vtt_slot86 = 0;
    void** vtt87 = (void**)&vtt_slot86;
    std__basic_ostream_char__std__char_traits_char_____basic_ostream(base85, vtt87);
      void* v88 = (void*)&_ZTVNSt7__cxx1119basic_ostringstreamIcSt11char_traitsIcESaIcEEE[3];
      void** v89 = (void**)t83;
      *(void**)(v89) = (void*)v88;
      void* v90 = (void*)&_ZTVNSt7__cxx1119basic_ostringstreamIcSt11char_traitsIcESaIcEEE[3];
      struct std__basic_ios_char__std__char_traits_char__* base91 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t83 + 112);
      void** v92 = (void**)base91;
      *(void**)(v92) = (void*)v90;
      int t93 = _ZNSt8ios_base3outE_const;
      std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char_____basic_stringbuf(&t83->_M_stringbuf, t93);
        void** v94 = (void**)t83;
        void* v95 = *((void**)v94);
        unsigned char* cast96 = (unsigned char*)v95;
        long c97 = -24;
        unsigned char* ptr98 = &(cast96)[c97];
        long* cast99 = (long*)ptr98;
        long t100 = *cast99;
        unsigned char* cast101 = (unsigned char*)t83;
        unsigned char* ptr102 = &(cast101)[t100];
        struct std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char__* cast103 = (struct std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char__*)ptr102;
        struct std__basic_ios_char__std__char_traits_char__* cast104 = (struct std__basic_ios_char__std__char_traits_char__*)cast103;
        struct std__basic_streambuf_char__std__char_traits_char__* base105 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)&(t83->_M_stringbuf) + 0);
        std__basic_ios_char__std__char_traits_char_____init(cast104, base105);
  return;
}

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v106) {
bb107:
  struct std__allocator_char_* this108;
  this108 = v106;
  struct std__allocator_char_* t109 = this108;
  struct std____new_allocator_char_* base110 = (struct std____new_allocator_char_*)((char *)t109 + 0);
  std____new_allocator_char_____new_allocator_2(base110);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEPKcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v111, char* v112, struct std__allocator_char_* v113) {
bb114:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this115;
  char* __s116;
  struct std__allocator_char_* __a117;
  char* __end118;
  struct std__forward_iterator_tag agg_tmp0119;
  this115 = v111;
  __s116 = v112;
  __a117 = v113;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t120 = this115;
  char* r121 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t120);
  struct std__allocator_char_* t122 = __a117;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t120->_M_dataplus, r121, t122);
      char* t123 = __s116;
      char* c124 = ((void*)0);
      _Bool c125 = ((t123 == c124)) ? 1 : 0;
      if (c125) {
        char* cast126 = (char*)&(_str_8);
        std____throw_logic_error(cast126);
      }
    char* t127 = __s116;
    char* t128 = __s116;
    unsigned long r129 = std__char_traits_char___length(t128);
    char* ptr130 = &(t127)[r129];
    __end118 = ptr130;
    char* t131 = __s116;
    char* t132 = __end118;
    struct std__forward_iterator_tag t133 = agg_tmp0119;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t120, t131, t132, t133);
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v134) {
bb135:
  struct std__allocator_char_* this136;
  this136 = v134;
  struct std__allocator_char_* t137 = this136;
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v138) {
bb139:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this140;
  char* __retval141;
  this140 = v138;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t142 = this140;
  char* r143 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t142);
  __retval141 = r143;
  char* t144 = __retval141;
  return t144;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v145) {
bb146:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this147;
  unsigned long __retval148;
  unsigned long __sz149;
  this147 = v145;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t150 = this147;
  unsigned long t151 = t150->_M_string_length;
  __sz149 = t151;
    unsigned long t152 = __sz149;
    unsigned long r153 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t150);
    _Bool c154 = ((t152 > r153)) ? 1 : 0;
    if (c154) {
      __builtin_unreachable();
    }
  unsigned long t155 = __sz149;
  __retval148 = t155;
  unsigned long t156 = __retval148;
  return t156;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v157, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v158) {
bb159:
  struct std__basic_ostream_char__std__char_traits_char__* __os160;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str161;
  struct std__basic_ostream_char__std__char_traits_char__* __retval162;
  __os160 = v157;
  __str161 = v158;
  struct std__basic_ostream_char__std__char_traits_char__* t163 = __os160;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t164 = __str161;
  char* r165 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t164);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t166 = __str161;
  unsigned long r167 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t166);
  long cast168 = (long)r167;
  struct std__basic_ostream_char__std__char_traits_char__* r169 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t163, r165, cast168);
  __retval162 = r169;
  struct std__basic_ostream_char__std__char_traits_char__* t170 = __retval162;
  return t170;
}

// function: _ZNSolsEd
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* v171, double v172) {
bb173:
  struct std__basic_ostream_char__std__char_traits_char__* this174;
  double __f175;
  struct std__basic_ostream_char__std__char_traits_char__* __retval176;
  this174 = v171;
  __f175 = v172;
  struct std__basic_ostream_char__std__char_traits_char__* t177 = this174;
  double t178 = __f175;
  struct std__basic_ostream_char__std__char_traits_char__* r179 = std__ostream__std__ostream___M_insert_double_(t177, t178);
  __retval176 = r179;
  struct std__basic_ostream_char__std__char_traits_char__* t180 = __retval176;
  return t180;
}

// function: _ZNSolsEPKv
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v181, void* v182) {
bb183:
  struct std__basic_ostream_char__std__char_traits_char__* this184;
  void* __p185;
  struct std__basic_ostream_char__std__char_traits_char__* __retval186;
  this184 = v181;
  __p185 = v182;
  struct std__basic_ostream_char__std__char_traits_char__* t187 = this184;
  void* t188 = __p185;
  struct std__basic_ostream_char__std__char_traits_char__* r189 = std__ostream__std__ostream___M_insert_void_const__(t187, t188);
  __retval186 = r189;
  struct std__basic_ostream_char__std__char_traits_char__* t190 = __retval186;
  return t190;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v191, int v192) {
bb193:
  int __a194;
  int __b195;
  int __retval196;
  __a194 = v191;
  __b195 = v192;
  int t197 = __a194;
  int t198 = __b195;
  int b199 = t197 | t198;
  __retval196 = b199;
  int t200 = __retval196;
  return t200;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v201) {
bb202:
  struct std__basic_ios_char__std__char_traits_char__* this203;
  int __retval204;
  this203 = v201;
  struct std__basic_ios_char__std__char_traits_char__* t205 = this203;
  struct std__ios_base* base206 = (struct std__ios_base*)((char *)t205 + 0);
  int t207 = base206->_M_streambuf_state;
  __retval204 = t207;
  int t208 = __retval204;
  return t208;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v209, int v210) {
bb211:
  struct std__basic_ios_char__std__char_traits_char__* this212;
  int __state213;
  this212 = v209;
  __state213 = v210;
  struct std__basic_ios_char__std__char_traits_char__* t214 = this212;
  int r215 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t214);
  int t216 = __state213;
  int r217 = std__operator_(r215, t216);
  std__basic_ios_char__std__char_traits_char_____clear(t214, r217);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v218, char* v219) {
bb220:
  struct std__basic_ostream_char__std__char_traits_char__* __out221;
  char* __s222;
  struct std__basic_ostream_char__std__char_traits_char__* __retval223;
  __out221 = v218;
  __s222 = v219;
    char* t224 = __s222;
    _Bool cast225 = (_Bool)t224;
    _Bool u226 = !cast225;
    if (u226) {
      struct std__basic_ostream_char__std__char_traits_char__* t227 = __out221;
      void** v228 = (void**)t227;
      void* v229 = *((void**)v228);
      unsigned char* cast230 = (unsigned char*)v229;
      long c231 = -24;
      unsigned char* ptr232 = &(cast230)[c231];
      long* cast233 = (long*)ptr232;
      long t234 = *cast233;
      unsigned char* cast235 = (unsigned char*)t227;
      unsigned char* ptr236 = &(cast235)[t234];
      struct std__basic_ostream_char__std__char_traits_char__* cast237 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr236;
      struct std__basic_ios_char__std__char_traits_char__* cast238 = (struct std__basic_ios_char__std__char_traits_char__*)cast237;
      int t239 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast238, t239);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t240 = __out221;
      char* t241 = __s222;
      char* t242 = __s222;
      unsigned long r243 = std__char_traits_char___length(t242);
      long cast244 = (long)r243;
      struct std__basic_ostream_char__std__char_traits_char__* r245 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t240, t241, cast244);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t246 = __out221;
  __retval223 = t246;
  struct std__basic_ostream_char__std__char_traits_char__* t247 = __retval223;
  return t247;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v248, struct std__allocator_char_* v249) {
bb250:
  struct std__allocator_char_* this251;
  struct std__allocator_char_* __a252;
  this251 = v248;
  __a252 = v249;
  struct std__allocator_char_* t253 = this251;
  struct std____new_allocator_char_* base254 = (struct std____new_allocator_char_*)((char *)t253 + 0);
  struct std__allocator_char_* t255 = __a252;
  struct std____new_allocator_char_* base256 = (struct std____new_allocator_char_*)((char *)t255 + 0);
  std____new_allocator_char_____new_allocator(base254, base256);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13get_allocatorEv
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v257) {
bb258:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this259;
  struct std__allocator_char_ __retval260;
  this259 = v257;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t261 = this259;
  struct std__allocator_char_* r262 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t261);
  std__allocator_char___allocator(&__retval260, r262);
  struct std__allocator_char_ t263 = __retval260;
  return t263;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v264, struct std__allocator_char_* v265) {
bb266:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this267;
  struct std__allocator_char_* __a268;
  this267 = v264;
  __a268 = v265;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t269 = this267;
  char* r270 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t269);
  struct std__allocator_char_* t271 = __a268;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t269->_M_dataplus, r270, t271);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t269);
    unsigned long c272 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t269, c272);
  return;
}

// function: _ZNKSt15basic_streambufIcSt11char_traitsIcEE4pptrEv
char* std__basic_streambuf_char__std__char_traits_char_____pptr___const(struct std__basic_streambuf_char__std__char_traits_char__* v273) {
bb274:
  struct std__basic_streambuf_char__std__char_traits_char__* this275;
  char* __retval276;
  this275 = v273;
  struct std__basic_streambuf_char__std__char_traits_char__* t277 = this275;
  char* t278 = t277->_M_out_cur;
  __retval276 = t278;
  char* t279 = __retval276;
  return t279;
}

// function: _ZNKSt15basic_streambufIcSt11char_traitsIcEE5egptrEv
char* std__basic_streambuf_char__std__char_traits_char_____egptr___const(struct std__basic_streambuf_char__std__char_traits_char__* v280) {
bb281:
  struct std__basic_streambuf_char__std__char_traits_char__* this282;
  char* __retval283;
  this282 = v280;
  struct std__basic_streambuf_char__std__char_traits_char__* t284 = this282;
  char* t285 = t284->_M_in_end;
  __retval283 = t285;
  char* t286 = __retval283;
  return t286;
}

// function: _ZNKSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEE12_M_high_markEv
char* std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______M_high_mark___const(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* v287) {
bb288:
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* this289;
  char* __retval290;
  this289 = v287;
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* t291 = this289;
    char* __pptr292;
    struct std__basic_streambuf_char__std__char_traits_char__* base293 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t291 + 0);
    char* r294 = std__basic_streambuf_char__std__char_traits_char_____pptr___const(base293);
    __pptr292 = r294;
    char* t295 = __pptr292;
    _Bool cast296 = (_Bool)t295;
    if (cast296) {
      char* __egptr297;
      struct std__basic_streambuf_char__std__char_traits_char__* base298 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t291 + 0);
      char* r299 = std__basic_streambuf_char__std__char_traits_char_____egptr___const(base298);
      __egptr297 = r299;
        char* t300 = __egptr297;
        _Bool cast301 = (_Bool)t300;
        _Bool u302 = !cast301;
        _Bool ternary303;
        if (u302) {
          _Bool c304 = 1;
          ternary303 = (_Bool)c304;
        } else {
          char* t305 = __pptr292;
          char* t306 = __egptr297;
          _Bool c307 = ((t305 > t306)) ? 1 : 0;
          ternary303 = (_Bool)c307;
        }
        if (ternary303) {
          char* t308 = __pptr292;
          __retval290 = t308;
          char* t309 = __retval290;
          return t309;
        } else {
          char* t310 = __egptr297;
          __retval290 = t310;
          char* t311 = __retval290;
          return t311;
        }
    }
  char* c312 = ((void*)0);
  __retval290 = c312;
  char* t313 = __retval290;
  return t313;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v314, unsigned long v315, unsigned long v316, char* v317) {
bb318:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this319;
  unsigned long __n1320;
  unsigned long __n2321;
  char* __s322;
  this319 = v314;
  __n1320 = v315;
  __n2321 = v316;
  __s322 = v317;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t323 = this319;
    unsigned long r324 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t323);
    unsigned long r325 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t323);
    unsigned long t326 = __n1320;
    unsigned long b327 = r325 - t326;
    unsigned long b328 = r324 - b327;
    unsigned long t329 = __n2321;
    _Bool c330 = ((b328 < t329)) ? 1 : 0;
    if (c330) {
      char* t331 = __s322;
      std____throw_length_error(t331);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v332) {
bb333:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this334;
  unsigned long __retval335;
  unsigned long __sz336;
  this334 = v332;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t337 = this334;
  _Bool r338 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t337);
  unsigned long ternary339;
  if (r338) {
    unsigned long c340 = 15;
    ternary339 = (unsigned long)c340;
  } else {
    unsigned long t341 = t337->field2._M_allocated_capacity;
    ternary339 = (unsigned long)t341;
  }
  __sz336 = ternary339;
    unsigned long t342 = __sz336;
    unsigned long c343 = 15;
    _Bool c344 = ((t342 < c343)) ? 1 : 0;
    _Bool ternary345;
    if (c344) {
      _Bool c346 = 1;
      ternary345 = (_Bool)c346;
    } else {
      unsigned long t347 = __sz336;
      unsigned long r348 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t337);
      _Bool c349 = ((t347 > r348)) ? 1 : 0;
      ternary345 = (_Bool)c349;
    }
    if (ternary345) {
      __builtin_unreachable();
    }
  unsigned long t350 = __sz336;
  __retval335 = t350;
  unsigned long t351 = __retval335;
  return t351;
}

// function: _ZNKSt4lessIPKcEclES1_S1_
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* v352, char* v353, char* v354) {
bb355:
  struct std__less_const_char___* this356;
  char* __x357;
  char* __y358;
  _Bool __retval359;
  this356 = v352;
  __x357 = v353;
  __y358 = v354;
  struct std__less_const_char___* t360 = this356;
    _Bool r361 = std____is_constant_evaluated();
    if (r361) {
      char* t362 = __x357;
      char* t363 = __y358;
      _Bool c364 = ((t362 < t363)) ? 1 : 0;
      __retval359 = c364;
      _Bool t365 = __retval359;
      return t365;
    }
  char* t366 = __x357;
  unsigned long cast367 = (unsigned long)t366;
  char* t368 = __y358;
  unsigned long cast369 = (unsigned long)t368;
  _Bool c370 = ((cast367 < cast369)) ? 1 : 0;
  __retval359 = c370;
  _Bool t371 = __retval359;
  return t371;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_disjunctEPKc
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v372, char* v373) {
bb374:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this375;
  char* __s376;
  _Bool __retval377;
  struct std__less_const_char___ ref_tmp0378;
  this375 = v372;
  __s376 = v373;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t379 = this375;
  char* t380 = __s376;
  char* r381 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t379);
  _Bool r382 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp0378, t380, r381);
  _Bool ternary383;
  if (r382) {
    _Bool c384 = 1;
    ternary383 = (_Bool)c384;
  } else {
    struct std__less_const_char___ ref_tmp1385;
    char* r386 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t379);
    unsigned long r387 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t379);
    char* ptr388 = &(r386)[r387];
    char* t389 = __s376;
    _Bool r390 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp1385, ptr388, t389);
    ternary383 = (_Bool)r390;
  }
  __retval377 = ternary383;
  _Bool t391 = __retval377;
  return t391;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign(char* v392, char* v393) {
bb394:
  char* __c1395;
  char* __c2396;
  __c1395 = v392;
  __c2396 = v393;
    _Bool r397 = std____is_constant_evaluated();
    if (r397) {
      char* t398 = __c1395;
      char* t399 = __c2396;
      char* r400 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t398, t399);
    } else {
      char* t401 = __c2396;
      char t402 = *t401;
      char* t403 = __c1395;
      *t403 = t402;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v404, char* v405, unsigned long v406) {
bb407:
  char* __s1408;
  char* __s2409;
  unsigned long __n410;
  char* __retval411;
  __s1408 = v404;
  __s2409 = v405;
  __n410 = v406;
    unsigned long t412 = __n410;
    unsigned long c413 = 0;
    _Bool c414 = ((t412 == c413)) ? 1 : 0;
    if (c414) {
      char* t415 = __s1408;
      __retval411 = t415;
      char* t416 = __retval411;
      return t416;
    }
    _Bool r417 = std____is_constant_evaluated();
    if (r417) {
        char* t418 = __s2409;
        char* t419 = __s1408;
        _Bool c420 = ((t418 < t419)) ? 1 : 0;
        _Bool isconst421 = 0;
        _Bool ternary422;
        if (isconst421) {
          char* t423 = __s1408;
          char* t424 = __s2409;
          _Bool c425 = ((t423 > t424)) ? 1 : 0;
          ternary422 = (_Bool)c425;
        } else {
          _Bool c426 = 0;
          ternary422 = (_Bool)c426;
        }
        _Bool ternary427;
        if (ternary422) {
          char* t428 = __s1408;
          char* t429 = __s2409;
          unsigned long t430 = __n410;
          char* ptr431 = &(t429)[t430];
          _Bool c432 = ((t428 < ptr431)) ? 1 : 0;
          ternary427 = (_Bool)c432;
        } else {
          _Bool c433 = 0;
          ternary427 = (_Bool)c433;
        }
        if (ternary427) {
            do {
                unsigned long t434 = __n410;
                unsigned long u435 = t434 - 1;
                __n410 = u435;
                unsigned long t436 = __n410;
                char* t437 = __s1408;
                char* ptr438 = &(t437)[t436];
                unsigned long t439 = __n410;
                char* t440 = __s2409;
                char* ptr441 = &(t440)[t439];
                __gnu_cxx__char_traits_char___assign(ptr438, ptr441);
              unsigned long t442 = __n410;
              unsigned long c443 = 0;
              _Bool c444 = ((t442 > c443)) ? 1 : 0;
              if (!c444) break;
            } while (1);
        } else {
          char* t445 = __s1408;
          char* t446 = __s2409;
          unsigned long t447 = __n410;
          char* r448 = __gnu_cxx__char_traits_char___copy(t445, t446, t447);
        }
      char* t449 = __s1408;
      __retval411 = t449;
      char* t450 = __retval411;
      return t450;
    }
  char* t451 = __s1408;
  void* cast452 = (void*)t451;
  char* t453 = __s2409;
  void* cast454 = (void*)t453;
  unsigned long t455 = __n410;
  unsigned long c456 = 1;
  unsigned long b457 = t455 * c456;
  void* r458 = memmove(cast452, cast454, b457);
  char* t459 = __s1408;
  __retval411 = t459;
  char* t460 = __retval411;
  return t460;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v461, char* v462, unsigned long v463) {
bb464:
  char* __s1465;
  char* __s2466;
  unsigned long __n467;
  char* __retval468;
  __s1465 = v461;
  __s2466 = v462;
  __n467 = v463;
    unsigned long t469 = __n467;
    unsigned long c470 = 0;
    _Bool c471 = ((t469 == c470)) ? 1 : 0;
    if (c471) {
      char* t472 = __s1465;
      __retval468 = t472;
      char* t473 = __retval468;
      return t473;
    }
    _Bool r474 = std____is_constant_evaluated();
    if (r474) {
      char* t475 = __s1465;
      char* t476 = __s2466;
      unsigned long t477 = __n467;
      char* r478 = __gnu_cxx__char_traits_char___move(t475, t476, t477);
      __retval468 = r478;
      char* t479 = __retval468;
      return t479;
    }
  char* t480 = __s1465;
  void* cast481 = (void*)t480;
  char* t482 = __s2466;
  void* cast483 = (void*)t482;
  unsigned long t484 = __n467;
  void* r485 = memmove(cast481, cast483, t484);
  char* cast486 = (char*)r485;
  __retval468 = cast486;
  char* t487 = __retval468;
  return t487;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v488, char* v489, unsigned long v490) {
bb491:
  char* __d492;
  char* __s493;
  unsigned long __n494;
  __d492 = v488;
  __s493 = v489;
  __n494 = v490;
    unsigned long t495 = __n494;
    unsigned long c496 = 1;
    _Bool c497 = ((t495 == c496)) ? 1 : 0;
    if (c497) {
      char* t498 = __d492;
      char* t499 = __s493;
      std__char_traits_char___assign(t498, t499);
    } else {
      char* t500 = __d492;
      char* t501 = __s493;
      unsigned long t502 = __n494;
      char* r503 = std__char_traits_char___move(t500, t501, t502);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_replace_coldEPcmPKcmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v504, char* v505, unsigned long v506, char* v507, unsigned long v508, unsigned long v509) {
bb510:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this511;
  char* __p512;
  unsigned long __len1513;
  char* __s514;
  unsigned long __len2515;
  unsigned long __how_much516;
  this511 = v504;
  __p512 = v505;
  __len1513 = v506;
  __s514 = v507;
  __len2515 = v508;
  __how_much516 = v509;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t517 = this511;
    unsigned long t518 = __len2515;
    _Bool cast519 = (_Bool)t518;
    _Bool ternary520;
    if (cast519) {
      unsigned long t521 = __len2515;
      unsigned long t522 = __len1513;
      _Bool c523 = ((t521 <= t522)) ? 1 : 0;
      ternary520 = (_Bool)c523;
    } else {
      _Bool c524 = 0;
      ternary520 = (_Bool)c524;
    }
    if (ternary520) {
      char* t525 = __p512;
      char* t526 = __s514;
      unsigned long t527 = __len2515;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t525, t526, t527);
    }
    unsigned long t528 = __how_much516;
    _Bool cast529 = (_Bool)t528;
    _Bool ternary530;
    if (cast529) {
      unsigned long t531 = __len1513;
      unsigned long t532 = __len2515;
      _Bool c533 = ((t531 != t532)) ? 1 : 0;
      ternary530 = (_Bool)c533;
    } else {
      _Bool c534 = 0;
      ternary530 = (_Bool)c534;
    }
    if (ternary530) {
      char* t535 = __p512;
      unsigned long t536 = __len2515;
      char* ptr537 = &(t535)[t536];
      char* t538 = __p512;
      unsigned long t539 = __len1513;
      char* ptr540 = &(t538)[t539];
      unsigned long t541 = __how_much516;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr537, ptr540, t541);
    }
    unsigned long t542 = __len2515;
    unsigned long t543 = __len1513;
    _Bool c544 = ((t542 > t543)) ? 1 : 0;
    if (c544) {
        char* t545 = __s514;
        unsigned long t546 = __len2515;
        char* ptr547 = &(t545)[t546];
        char* t548 = __p512;
        unsigned long t549 = __len1513;
        char* ptr550 = &(t548)[t549];
        _Bool c551 = ((ptr547 <= ptr550)) ? 1 : 0;
        if (c551) {
          char* t552 = __p512;
          char* t553 = __s514;
          unsigned long t554 = __len2515;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t552, t553, t554);
        } else {
            char* t555 = __s514;
            char* t556 = __p512;
            unsigned long t557 = __len1513;
            char* ptr558 = &(t556)[t557];
            _Bool c559 = ((t555 >= ptr558)) ? 1 : 0;
            if (c559) {
              unsigned long __poff560;
              char* t561 = __s514;
              char* t562 = __p512;
              long diff563 = t561 - t562;
              unsigned long cast564 = (unsigned long)diff563;
              unsigned long t565 = __len2515;
              unsigned long t566 = __len1513;
              unsigned long b567 = t565 - t566;
              unsigned long b568 = cast564 + b567;
              __poff560 = b568;
              char* t569 = __p512;
              char* t570 = __p512;
              unsigned long t571 = __poff560;
              char* ptr572 = &(t570)[t571];
              unsigned long t573 = __len2515;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t569, ptr572, t573);
            } else {
              unsigned long __nleft574;
              char* t575 = __p512;
              unsigned long t576 = __len1513;
              char* ptr577 = &(t575)[t576];
              char* t578 = __s514;
              long diff579 = ptr577 - t578;
              unsigned long cast580 = (unsigned long)diff579;
              __nleft574 = cast580;
              char* t581 = __p512;
              char* t582 = __s514;
              unsigned long t583 = __nleft574;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t581, t582, t583);
              char* t584 = __p512;
              unsigned long t585 = __nleft574;
              char* ptr586 = &(t584)[t585];
              char* t587 = __p512;
              unsigned long t588 = __len2515;
              char* ptr589 = &(t587)[t588];
              unsigned long t590 = __len2515;
              unsigned long t591 = __nleft574;
              unsigned long b592 = t590 - t591;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr586, ptr589, b592);
            }
        }
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v593) {
bb594:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this595;
  unsigned long __retval596;
  this595 = v593;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t597 = this595;
  unsigned long r598 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t597);
  __retval596 = r598;
  unsigned long t599 = __retval596;
  return t599;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v600, unsigned long v601, unsigned long v602, char* v603, unsigned long v604) {
bb605:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this606;
  unsigned long __pos607;
  unsigned long __len1608;
  char* __s609;
  unsigned long __len2610;
  unsigned long __how_much611;
  unsigned long __new_capacity612;
  char* __r613;
  this606 = v600;
  __pos607 = v601;
  __len1608 = v602;
  __s609 = v603;
  __len2610 = v604;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t614 = this606;
  unsigned long r615 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t614);
  unsigned long t616 = __pos607;
  unsigned long b617 = r615 - t616;
  unsigned long t618 = __len1608;
  unsigned long b619 = b617 - t618;
  __how_much611 = b619;
  unsigned long r620 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t614);
  unsigned long t621 = __len2610;
  unsigned long b622 = r620 + t621;
  unsigned long t623 = __len1608;
  unsigned long b624 = b622 - t623;
  __new_capacity612 = b624;
  unsigned long r625 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t614);
  char* r626 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t614, &__new_capacity612, r625);
  __r613 = r626;
    unsigned long t627 = __pos607;
    _Bool cast628 = (_Bool)t627;
    if (cast628) {
      char* t629 = __r613;
      char* r630 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t614);
      unsigned long t631 = __pos607;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t629, r630, t631);
    }
    char* t632 = __s609;
    _Bool cast633 = (_Bool)t632;
    _Bool ternary634;
    if (cast633) {
      unsigned long t635 = __len2610;
      _Bool cast636 = (_Bool)t635;
      ternary634 = (_Bool)cast636;
    } else {
      _Bool c637 = 0;
      ternary634 = (_Bool)c637;
    }
    if (ternary634) {
      char* t638 = __r613;
      unsigned long t639 = __pos607;
      char* ptr640 = &(t638)[t639];
      char* t641 = __s609;
      unsigned long t642 = __len2610;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr640, t641, t642);
    }
    unsigned long t643 = __how_much611;
    _Bool cast644 = (_Bool)t643;
    if (cast644) {
      char* t645 = __r613;
      unsigned long t646 = __pos607;
      char* ptr647 = &(t645)[t646];
      unsigned long t648 = __len2610;
      char* ptr649 = &(ptr647)[t648];
      char* r650 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t614);
      unsigned long t651 = __pos607;
      char* ptr652 = &(r650)[t651];
      unsigned long t653 = __len1608;
      char* ptr654 = &(ptr652)[t653];
      unsigned long t655 = __how_much611;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr649, ptr654, t655);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t614);
  char* t656 = __r613;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t614, t656);
  unsigned long t657 = __new_capacity612;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t614, t657);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v658, unsigned long v659, unsigned long v660, char* v661, unsigned long v662) {
bb663:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this664;
  unsigned long __pos665;
  unsigned long __len1666;
  char* __s667;
  unsigned long __len2668;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval669;
  unsigned long __old_size670;
  unsigned long __new_size671;
  this664 = v658;
  __pos665 = v659;
  __len1666 = v660;
  __s667 = v661;
  __len2668 = v662;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t672 = this664;
  unsigned long t673 = __len1666;
  unsigned long t674 = __len2668;
  char* cast675 = (char*)&(_str_10);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t672, t673, t674, cast675);
  unsigned long r676 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t672);
  __old_size670 = r676;
  unsigned long t677 = __old_size670;
  unsigned long t678 = __len2668;
  unsigned long b679 = t677 + t678;
  unsigned long t680 = __len1666;
  unsigned long b681 = b679 - t680;
  __new_size671 = b681;
    unsigned long t682 = __new_size671;
    unsigned long r683 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t672);
    _Bool c684 = ((t682 <= r683)) ? 1 : 0;
    if (c684) {
      char* __p685;
      unsigned long __how_much686;
      char* r687 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t672);
      unsigned long t688 = __pos665;
      char* ptr689 = &(r687)[t688];
      __p685 = ptr689;
      unsigned long t690 = __old_size670;
      unsigned long t691 = __pos665;
      unsigned long b692 = t690 - t691;
      unsigned long t693 = __len1666;
      unsigned long b694 = b692 - t693;
      __how_much686 = b694;
        _Bool r695 = std__is_constant_evaluated();
        if (r695) {
          char* __newp696;
          struct std__allocator_char_* r697 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t672);
          unsigned long t698 = __new_size671;
          char* r699 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r697, t698);
          __newp696 = r699;
          char* t700 = __newp696;
          char* r701 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t672);
          unsigned long t702 = __pos665;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t700, r701, t702);
          char* t703 = __newp696;
          unsigned long t704 = __pos665;
          char* ptr705 = &(t703)[t704];
          char* t706 = __s667;
          unsigned long t707 = __len2668;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr705, t706, t707);
          char* t708 = __newp696;
          unsigned long t709 = __pos665;
          char* ptr710 = &(t708)[t709];
          unsigned long t711 = __len2668;
          char* ptr712 = &(ptr710)[t711];
          char* t713 = __p685;
          unsigned long t714 = __len1666;
          char* ptr715 = &(t713)[t714];
          unsigned long t716 = __how_much686;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr712, ptr715, t716);
          char* r717 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t672);
          char* t718 = __newp696;
          unsigned long t719 = __new_size671;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r717, t718, t719);
          struct std__allocator_char_* r720 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t672);
          char* t721 = __newp696;
          unsigned long t722 = __new_size671;
          std__allocator_char___deallocate(r720, t721, t722);
        } else {
            char* t723 = __s667;
            _Bool r724 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(t672, t723);
            if (r724) {
                unsigned long t725 = __how_much686;
                _Bool cast726 = (_Bool)t725;
                _Bool ternary727;
                if (cast726) {
                  unsigned long t728 = __len1666;
                  unsigned long t729 = __len2668;
                  _Bool c730 = ((t728 != t729)) ? 1 : 0;
                  ternary727 = (_Bool)c730;
                } else {
                  _Bool c731 = 0;
                  ternary727 = (_Bool)c731;
                }
                if (ternary727) {
                  char* t732 = __p685;
                  unsigned long t733 = __len2668;
                  char* ptr734 = &(t732)[t733];
                  char* t735 = __p685;
                  unsigned long t736 = __len1666;
                  char* ptr737 = &(t735)[t736];
                  unsigned long t738 = __how_much686;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr734, ptr737, t738);
                }
                unsigned long t739 = __len2668;
                _Bool cast740 = (_Bool)t739;
                if (cast740) {
                  char* t741 = __p685;
                  char* t742 = __s667;
                  unsigned long t743 = __len2668;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t741, t742, t743);
                }
            } else {
              char* t744 = __p685;
              unsigned long t745 = __len1666;
              char* t746 = __s667;
              unsigned long t747 = __len2668;
              unsigned long t748 = __how_much686;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(t672, t744, t745, t746, t747, t748);
            }
        }
    } else {
      unsigned long t749 = __pos665;
      unsigned long t750 = __len1666;
      char* t751 = __s667;
      unsigned long t752 = __len2668;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t672, t749, t750, t751, t752);
    }
  unsigned long t753 = __new_size671;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t672, t753);
  __retval669 = t672;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t754 = __retval669;
  return t754;
}

// function: _ZSt12__niter_baseIPcET_S1_
char* char__std____niter_base_char__(char* v755) {
bb756:
  char* __it757;
  char* __retval758;
  __it757 = v755;
  char* t759 = __it757;
  __retval758 = t759;
  char* t760 = __retval758;
  return t760;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignIPcvEERS4_T_S8_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_char___void_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v761, char* v762, char* v763) {
bb764:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this765;
  char* __first766;
  char* __last767;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval768;
  this765 = v761;
  __first766 = v762;
  __last767 = v763;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t769 = this765;
    unsigned long c770 = 0;
    unsigned long r771 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t769);
    char* t772 = __first766;
    char* r773 = char__std____niter_base_char__(t772);
    char* t774 = __last767;
    char* t775 = __first766;
    long diff776 = t774 - t775;
    unsigned long cast777 = (unsigned long)diff776;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r778 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t769, c770, r771, r773, cast777);
    __retval768 = r778;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t779 = __retval768;
    return t779;
  abort();
}

// function: _ZNKSt15basic_streambufIcSt11char_traitsIcEE5pbaseEv
char* std__basic_streambuf_char__std__char_traits_char_____pbase___const(struct std__basic_streambuf_char__std__char_traits_char__* v780) {
bb781:
  struct std__basic_streambuf_char__std__char_traits_char__* this782;
  char* __retval783;
  this782 = v780;
  struct std__basic_streambuf_char__std__char_traits_char__* t784 = this782;
  char* t785 = t784->_M_out_beg;
  __retval783 = t785;
  char* t786 = __retval783;
  return t786;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_copy_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_copy_assign() {
bb787:
  _Bool __retval788;
  _Bool t789 = _ZNSt17integral_constantIbLb0EE5valueE;
  __retval788 = t789;
  _Bool t790 = __retval788;
  return t790;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE15_S_always_equalEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_always_equal() {
bb791:
  _Bool __retval792;
  _Bool t793 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval792 = t793;
  _Bool t794 = __retval792;
  return t794;
}

// function: _ZSteqRKSaIcES1_
_Bool std__operator__(struct std__allocator_char_* v795, struct std__allocator_char_* v796) {
bb797:
  struct std__allocator_char_* unnamed798;
  struct std__allocator_char_* unnamed799;
  _Bool __retval800;
  unnamed798 = v795;
  unnamed799 = v796;
  _Bool c801 = 1;
  __retval800 = c801;
  _Bool t802 = __retval800;
  return t802;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v803) {
bb804:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this805;
  char* __retval806;
  this805 = v803;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t807 = this805;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t807);
  char* r808 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t807);
  __retval806 = r808;
  char* t809 = __retval806;
  return t809;
}

// function: _ZSt15__alloc_on_copyISaIcEEvRT_RKS1_
void void_std____alloc_on_copy_std__allocator_char___(struct std__allocator_char_* v810, struct std__allocator_char_* v811) {
bb812:
  struct std__allocator_char_* __one813;
  struct std__allocator_char_* __two814;
  __one813 = v810;
  __two814 = v811;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v815, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v816) {
bb817:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this818;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str819;
  this818 = v815;
  __str819 = v816;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t820 = this818;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t821 = __str819;
    _Bool c822 = ((t820 != t821)) ? 1 : 0;
    if (c822) {
      unsigned long __rsize823;
      unsigned long __capacity824;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t825 = __str819;
      unsigned long r826 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t825);
      __rsize823 = r826;
      unsigned long r827 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t820);
      __capacity824 = r827;
        unsigned long t828 = __rsize823;
        unsigned long t829 = __capacity824;
        _Bool c830 = ((t828 > t829)) ? 1 : 0;
        if (c830) {
          unsigned long __new_capacity831;
          char* __tmp832;
          unsigned long t833 = __rsize823;
          __new_capacity831 = t833;
          unsigned long t834 = __capacity824;
          char* r835 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t820, &__new_capacity831, t834);
          __tmp832 = r835;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t820);
          char* t836 = __tmp832;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t820, t836);
          unsigned long t837 = __new_capacity831;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t820, t837);
        }
        unsigned long t838 = __rsize823;
        _Bool cast839 = (_Bool)t838;
        if (cast839) {
          char* r840 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t820);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t841 = __str819;
          char* r842 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t841);
          unsigned long t843 = __rsize823;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r840, r842, t843);
        }
      unsigned long t844 = __rsize823;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t820, t844);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignERKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v845, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v846) {
bb847:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this848;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str849;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval850;
  this848 = v845;
  __str849 = v846;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t851 = this848;
    _Bool r852 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_copy_assign();
    if (r852) {
        _Bool r853 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_always_equal();
        _Bool u854 = !r853;
        _Bool ternary855;
        if (u854) {
          _Bool r856 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t851);
          _Bool u857 = !r856;
          ternary855 = (_Bool)u857;
        } else {
          _Bool c858 = 0;
          ternary855 = (_Bool)c858;
        }
        _Bool ternary859;
        if (ternary855) {
          struct std__allocator_char_* r860 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t851);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t861 = __str849;
          struct std__allocator_char_* r862 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t861);
          _Bool r863 = std__operator__(r860, r862);
          _Bool u864 = !r863;
          ternary859 = (_Bool)u864;
        } else {
          _Bool c865 = 0;
          ternary859 = (_Bool)c865;
        }
        if (ternary859) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t866 = __str849;
            unsigned long r867 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t866);
            unsigned long c868 = 15;
            _Bool c869 = ((r867 <= c868)) ? 1 : 0;
            if (c869) {
              unsigned long t870 = t851->field2._M_allocated_capacity;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t851, t870);
              char* r871 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t851);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t851, r871);
              unsigned long c872 = 0;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t851, c872);
            } else {
              unsigned long __len873;
              struct std__allocator_char_ __alloc874;
              char* __ptr875;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t876 = __str849;
              unsigned long r877 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t876);
              __len873 = r877;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t878 = __str849;
              struct std__allocator_char_* r879 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t878);
              std__allocator_char___allocator(&__alloc874, r879);
              unsigned long t880 = __len873;
              unsigned long c881 = 1;
              unsigned long b882 = t880 + c881;
              char* r883 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(&__alloc874, b882);
              __ptr875 = r883;
              unsigned long t884 = t851->field2._M_allocated_capacity;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t851, t884);
              char* t885 = __ptr875;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t851, t885);
              unsigned long t886 = __len873;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t851, t886);
              unsigned long t887 = __len873;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t851, t887);
            }
        }
      struct std__allocator_char_* r888 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t851);
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t889 = __str849;
      struct std__allocator_char_* r890 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t889);
      void_std____alloc_on_copy_std__allocator_char___(r888, r890);
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t891 = __str849;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t851, t891);
  __retval850 = t851;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t892 = __retval850;
  return t892;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSERKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v893, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v894) {
bb895:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this896;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str897;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval898;
  this896 = v893;
  __str897 = v894;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t899 = this896;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t900 = __str897;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r901 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(t899, t900);
  __retval898 = r901;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t902 = __retval898;
  return t902;
}

// function: _ZNKRSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEE3strEv
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char_____str___const__(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* v903) {
bb904:
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* this905;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval906;
  _Bool nrvo907;
  struct std__allocator_char_ ref_tmp0908;
  this905 = v903;
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* t909 = this905;
  _Bool c910 = 0;
  nrvo907 = c910;
  struct std__allocator_char_ r911 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(&t909->_M_string);
  ref_tmp0908 = r911;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&__retval906, &ref_tmp0908);
  {
    std__allocator_char____allocator(&ref_tmp0908);
  }
      char* __hi912;
      char* r913 = std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______M_high_mark___const(t909);
      __hi912 = r913;
      char* t914 = __hi912;
      _Bool cast915 = (_Bool)t914;
      if (cast915) {
        struct std__basic_streambuf_char__std__char_traits_char__* base916 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t909 + 0);
        char* r917 = std__basic_streambuf_char__std__char_traits_char_____pbase___const(base916);
        char* t918 = __hi912;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r919 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_char___void_(&__retval906, r917, t918);
      } else {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r920 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&__retval906, &t909->_M_string);
      }
    _Bool c921 = 1;
    nrvo907 = c921;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t922 = __retval906;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ret_val923 = t922;
    {
      _Bool t924 = nrvo907;
      _Bool u925 = !t924;
      if (u925) {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&__retval906);
      }
    }
    return ret_val923;
  abort();
}

// function: _ZNKRSt7__cxx1119basic_ostringstreamIcSt11char_traitsIcESaIcEE3strEv
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char_____str___const__(struct std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char__* v926) {
bb927:
  struct std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char__* this928;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval929;
  this928 = v926;
  struct std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char__* t930 = this928;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r931 = std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char_____str___const__(&t930->_M_stringbuf);
  __retval929 = r931;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t932 = __retval929;
  return t932;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v933) {
bb934:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this935;
  this935 = v933;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t936 = this935;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t936);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t936->_M_dataplus);
  }
  return;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v937, void* v938) {
bb939:
  struct std__basic_ostream_char__std__char_traits_char__* this940;
  void* __pf941;
  struct std__basic_ostream_char__std__char_traits_char__* __retval942;
  this940 = v937;
  __pf941 = v938;
  struct std__basic_ostream_char__std__char_traits_char__* t943 = this940;
  void* t944 = __pf941;
  struct std__basic_ostream_char__std__char_traits_char__* r945 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t944)(t943);
  __retval942 = r945;
  struct std__basic_ostream_char__std__char_traits_char__* t946 = __retval942;
  return t946;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v947) {
bb948:
  struct std__basic_ostream_char__std__char_traits_char__* __os949;
  struct std__basic_ostream_char__std__char_traits_char__* __retval950;
  __os949 = v947;
  struct std__basic_ostream_char__std__char_traits_char__* t951 = __os949;
  struct std__basic_ostream_char__std__char_traits_char__* r952 = std__ostream__flush(t951);
  __retval950 = r952;
  struct std__basic_ostream_char__std__char_traits_char__* t953 = __retval950;
  return t953;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v954) {
bb955:
  struct std__ctype_char_* __f956;
  struct std__ctype_char_* __retval957;
  __f956 = v954;
    struct std__ctype_char_* t958 = __f956;
    _Bool cast959 = (_Bool)t958;
    _Bool u960 = !cast959;
    if (u960) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t961 = __f956;
  __retval957 = t961;
  struct std__ctype_char_* t962 = __retval957;
  return t962;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v963, char v964) {
bb965:
  struct std__ctype_char_* this966;
  char __c967;
  char __retval968;
  this966 = v963;
  __c967 = v964;
  struct std__ctype_char_* t969 = this966;
    char t970 = t969->_M_widen_ok;
    _Bool cast971 = (_Bool)t970;
    if (cast971) {
      char t972 = __c967;
      unsigned char cast973 = (unsigned char)t972;
      unsigned long cast974 = (unsigned long)cast973;
      char t975 = t969->_M_widen[cast974];
      __retval968 = t975;
      char t976 = __retval968;
      return t976;
    }
  std__ctype_char____M_widen_init___const(t969);
  char t977 = __c967;
  void** v978 = (void**)t969;
  void* v979 = *((void**)v978);
  char vcall982 = (char)__VERIFIER_virtual_call_char_char(t969, 6, t977);
  __retval968 = vcall982;
  char t983 = __retval968;
  return t983;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v984, char v985) {
bb986:
  struct std__basic_ios_char__std__char_traits_char__* this987;
  char __c988;
  char __retval989;
  this987 = v984;
  __c988 = v985;
  struct std__basic_ios_char__std__char_traits_char__* t990 = this987;
  struct std__ctype_char_* t991 = t990->_M_ctype;
  struct std__ctype_char_* r992 = std__ctype_char__const__std____check_facet_std__ctype_char___(t991);
  char t993 = __c988;
  char r994 = std__ctype_char___widen_char__const(r992, t993);
  __retval989 = r994;
  char t995 = __retval989;
  return t995;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v996) {
bb997:
  struct std__basic_ostream_char__std__char_traits_char__* __os998;
  struct std__basic_ostream_char__std__char_traits_char__* __retval999;
  __os998 = v996;
  struct std__basic_ostream_char__std__char_traits_char__* t1000 = __os998;
  struct std__basic_ostream_char__std__char_traits_char__* t1001 = __os998;
  void** v1002 = (void**)t1001;
  void* v1003 = *((void**)v1002);
  unsigned char* cast1004 = (unsigned char*)v1003;
  long c1005 = -24;
  unsigned char* ptr1006 = &(cast1004)[c1005];
  long* cast1007 = (long*)ptr1006;
  long t1008 = *cast1007;
  unsigned char* cast1009 = (unsigned char*)t1001;
  unsigned char* ptr1010 = &(cast1009)[t1008];
  struct std__basic_ostream_char__std__char_traits_char__* cast1011 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1010;
  struct std__basic_ios_char__std__char_traits_char__* cast1012 = (struct std__basic_ios_char__std__char_traits_char__*)cast1011;
  char c1013 = 10;
  char r1014 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1012, c1013);
  struct std__basic_ostream_char__std__char_traits_char__* r1015 = std__ostream__put(t1000, r1014);
  struct std__basic_ostream_char__std__char_traits_char__* r1016 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1015);
  __retval999 = r1016;
  struct std__basic_ostream_char__std__char_traits_char__* t1017 = __retval999;
  return t1017;
}

// function: _ZNSt7__cxx1119basic_ostringstreamIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char______basic_ostringstream_2(struct std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char__* v1018, void** v1019) {
bb1020:
  struct std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char__* this1021;
  void** vtt1022;
  this1021 = v1018;
  vtt1022 = v1019;
  struct std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char__* t1023 = this1021;
  void** t1024 = vtt1022;
    {
      std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______basic_stringbuf(&t1023->_M_stringbuf);
    }
  {
    struct std__basic_ostream_char__std__char_traits_char__* base1025 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t1023 + 0);
    static void *vtt_slot1026 = 0;
    void** vtt1027 = (void**)&vtt_slot1026;
    std__basic_ostream_char__std__char_traits_char______basic_ostream(base1025, vtt1027);
  }
  return;
}

// function: _ZNSt7__cxx1119basic_ostringstreamIcSt11char_traitsIcESaIcEED1Ev
void std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char______basic_ostringstream(struct std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char__* v1028) {
bb1029:
  struct std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char__* this1030;
  this1030 = v1028;
  struct std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char__* t1031 = this1030;
    static void *vtt_slot1032 = 0;
    void** vtt1033 = (void**)&vtt_slot1032;
    std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char______basic_ostringstream_2(t1031, vtt1033);
  {
    struct std__basic_ios_char__std__char_traits_char__* base1034 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1031 + 112);
    std__basic_ios_char__std__char_traits_char______basic_ios(base1034);
  }
  return;
}

// function: main
int main() {
bb1035:
  int __retval1036;
  struct std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char__ outputString1037;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string11038;
  struct std__allocator_char_ ref_tmp01039;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string21040;
  struct std__allocator_char_ ref_tmp11041;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string31042;
  struct std__allocator_char_ ref_tmp21043;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string41044;
  struct std__allocator_char_ ref_tmp31045;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string51046;
  struct std__allocator_char_ ref_tmp41047;
  double double11048;
  int integer1049;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp51050;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup1051;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp61052;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup1053;
  int c1054 = 0;
  __retval1036 = c1054;
  std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char_____basic_ostringstream(&outputString1037);
    char* cast1055 = (char*)&(_str);
    std__allocator_char___allocator_2(&ref_tmp01039);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&string11038, cast1055, &ref_tmp01039);
    {
      std__allocator_char____allocator(&ref_tmp01039);
    }
      char* cast1056 = (char*)&(_str_1);
      std__allocator_char___allocator_2(&ref_tmp11041);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&string21040, cast1056, &ref_tmp11041);
      {
        std__allocator_char____allocator(&ref_tmp11041);
      }
        char* cast1057 = (char*)&(_str_2);
        std__allocator_char___allocator_2(&ref_tmp21043);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&string31042, cast1057, &ref_tmp21043);
        {
          std__allocator_char____allocator(&ref_tmp21043);
        }
          char* cast1058 = (char*)&(_str_3);
          std__allocator_char___allocator_2(&ref_tmp31045);
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&string41044, cast1058, &ref_tmp31045);
          {
            std__allocator_char____allocator(&ref_tmp31045);
          }
            char* cast1059 = (char*)&(_str_4);
            std__allocator_char___allocator_2(&ref_tmp41047);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&string51046, cast1059, &ref_tmp41047);
            {
              std__allocator_char____allocator(&ref_tmp41047);
            }
              double c1060 = 0x1.edd3a92a30553p6;
              double11048 = c1060;
              int c1061 = 22;
              integer1049 = c1061;
              struct std__basic_ostream_char__std__char_traits_char__* base1062 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(outputString1037) + 0);
              struct std__basic_ostream_char__std__char_traits_char__* r1063 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(base1062, &string11038);
              struct std__basic_ostream_char__std__char_traits_char__* r1064 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1063, &string21040);
              struct std__basic_ostream_char__std__char_traits_char__* r1065 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1064, &string31042);
              double t1066 = double11048;
              struct std__basic_ostream_char__std__char_traits_char__* r1067 = std__ostream__operator___2(r1065, t1066);
              struct std__basic_ostream_char__std__char_traits_char__* r1068 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1067, &string41044);
              int t1069 = integer1049;
              struct std__basic_ostream_char__std__char_traits_char__* r1070 = std__ostream__operator___3(r1068, t1069);
              struct std__basic_ostream_char__std__char_traits_char__* r1071 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1070, &string51046);
              void* cast1072 = (void*)&(integer1049);
              struct std__basic_ostream_char__std__char_traits_char__* r1073 = std__ostream__operator__(r1071, cast1072);
              char* cast1074 = (char*)&(_str_5);
              struct std__basic_ostream_char__std__char_traits_char__* r1075 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1074);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1076 = std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char_____str___const__(&outputString1037);
              ref_tmp51050 = r1076;
                struct std__basic_ostream_char__std__char_traits_char__* r1077 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1075, &ref_tmp51050);
                tmp_exprcleanup1051 = r1077;
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp51050);
              }
              struct std__basic_ostream_char__std__char_traits_char__* t1078 = tmp_exprcleanup1051;
              struct std__basic_ostream_char__std__char_traits_char__* base1079 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(outputString1037) + 0);
              char* cast1080 = (char*)&(_str_6);
              struct std__basic_ostream_char__std__char_traits_char__* r1081 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(base1079, cast1080);
              char* cast1082 = (char*)&(_str_7);
              struct std__basic_ostream_char__std__char_traits_char__* r1083 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1082);
              char* cast1084 = (char*)&(_str_5);
              struct std__basic_ostream_char__std__char_traits_char__* r1085 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1083, cast1084);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1086 = std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char_____str___const__(&outputString1037);
              ref_tmp61052 = r1086;
                struct std__basic_ostream_char__std__char_traits_char__* r1087 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1085, &ref_tmp61052);
                struct std__basic_ostream_char__std__char_traits_char__* r1088 = std__ostream__operator___std__ostream_____(r1087, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
                tmp_exprcleanup1053 = r1088;
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp61052);
              }
              struct std__basic_ostream_char__std__char_traits_char__* t1089 = tmp_exprcleanup1053;
              int c1090 = 0;
              __retval1036 = c1090;
              int t1091 = __retval1036;
              int ret_val1092 = t1091;
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&string51046);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&string41044);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&string31042);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&string21040);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&string11038);
              }
              {
                std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char______basic_ostringstream(&outputString1037);
              }
              return ret_val1092;
  int t1093 = __retval1036;
  return t1093;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1094) {
bb1095:
  struct std____new_allocator_char_* this1096;
  this1096 = v1094;
  struct std____new_allocator_char_* t1097 = this1096;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1098) {
bb1099:
  char* __r1100;
  char* __retval1101;
  __r1100 = v1098;
  char* t1102 = __r1100;
  __retval1101 = t1102;
  char* t1103 = __retval1101;
  return t1103;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1104) {
bb1105:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1106;
  char* __retval1107;
  this1106 = v1104;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1108 = this1106;
  char* cast1109 = (char*)&(t1108->field2._M_local_buf);
  char* r1110 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1109);
  __retval1107 = r1110;
  char* t1111 = __retval1107;
  return t1111;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1112, char* v1113, struct std__allocator_char_* v1114) {
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

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1123:
  _Bool __retval1124;
    _Bool c1125 = 0;
    __retval1124 = c1125;
    _Bool t1126 = __retval1124;
    return t1126;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1127, char* v1128) {
bb1129:
  char* __c11130;
  char* __c21131;
  _Bool __retval1132;
  __c11130 = v1127;
  __c21131 = v1128;
  char* t1133 = __c11130;
  char t1134 = *t1133;
  int cast1135 = (int)t1134;
  char* t1136 = __c21131;
  char t1137 = *t1136;
  int cast1138 = (int)t1137;
  _Bool c1139 = ((cast1135 == cast1138)) ? 1 : 0;
  __retval1132 = c1139;
  _Bool t1140 = __retval1132;
  return t1140;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1141) {
bb1142:
  char* __p1143;
  unsigned long __retval1144;
  unsigned long __i1145;
  __p1143 = v1141;
  unsigned long c1146 = 0;
  __i1145 = c1146;
    char ref_tmp01147;
    while (1) {
      unsigned long t1148 = __i1145;
      char* t1149 = __p1143;
      char* ptr1150 = &(t1149)[t1148];
      char c1151 = 0;
      ref_tmp01147 = c1151;
      _Bool r1152 = __gnu_cxx__char_traits_char___eq(ptr1150, &ref_tmp01147);
      _Bool u1153 = !r1152;
      if (!u1153) break;
      unsigned long t1154 = __i1145;
      unsigned long u1155 = t1154 + 1;
      __i1145 = u1155;
    }
  unsigned long t1156 = __i1145;
  __retval1144 = t1156;
  unsigned long t1157 = __retval1144;
  return t1157;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1158) {
bb1159:
  char* __s1160;
  unsigned long __retval1161;
  __s1160 = v1158;
    _Bool r1162 = std____is_constant_evaluated();
    if (r1162) {
      char* t1163 = __s1160;
      unsigned long r1164 = __gnu_cxx__char_traits_char___length(t1163);
      __retval1161 = r1164;
      unsigned long t1165 = __retval1161;
      return t1165;
    }
  char* t1166 = __s1160;
  unsigned long r1167 = strlen(t1166);
  __retval1161 = r1167;
  unsigned long t1168 = __retval1161;
  return t1168;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v1169, char* v1170, struct std__random_access_iterator_tag v1171) {
bb1172:
  char* __first1173;
  char* __last1174;
  struct std__random_access_iterator_tag unnamed1175;
  long __retval1176;
  __first1173 = v1169;
  __last1174 = v1170;
  unnamed1175 = v1171;
  char* t1177 = __last1174;
  char* t1178 = __first1173;
  long diff1179 = t1177 - t1178;
  __retval1176 = diff1179;
  long t1180 = __retval1176;
  return t1180;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v1181) {
bb1182:
  char** unnamed1183;
  struct std__random_access_iterator_tag __retval1184;
  unnamed1183 = v1181;
  struct std__random_access_iterator_tag t1185 = __retval1184;
  return t1185;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v1186, char* v1187) {
bb1188:
  char* __first1189;
  char* __last1190;
  long __retval1191;
  struct std__random_access_iterator_tag agg_tmp01192;
  __first1189 = v1186;
  __last1190 = v1187;
  char* t1193 = __first1189;
  char* t1194 = __last1190;
  struct std__random_access_iterator_tag r1195 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first1189);
  agg_tmp01192 = r1195;
  struct std__random_access_iterator_tag t1196 = agg_tmp01192;
  long r1197 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t1193, t1194, t1196);
  __retval1191 = r1197;
  long t1198 = __retval1191;
  return t1198;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1199, char* v1200) {
bb1201:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1202;
  char* __p1203;
  this1202 = v1199;
  __p1203 = v1200;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1204 = this1202;
  char* t1205 = __p1203;
  t1204->_M_dataplus._M_p = t1205;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v1206) {
bb1207:
  struct std__allocator_char_* __a1208;
  unsigned long __retval1209;
  __a1208 = v1206;
  unsigned long c1210 = -1;
  unsigned long c1211 = 1;
  unsigned long b1212 = c1210 / c1211;
  __retval1209 = b1212;
  unsigned long t1213 = __retval1209;
  return t1213;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1214) {
bb1215:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1216;
  struct std__allocator_char_* __retval1217;
  this1216 = v1214;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1218 = this1216;
  struct std__allocator_char_* base1219 = (struct std__allocator_char_*)((char *)&(t1218->_M_dataplus) + 0);
  __retval1217 = base1219;
  struct std__allocator_char_* t1220 = __retval1217;
  return t1220;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1221, unsigned long* v1222) {
bb1223:
  unsigned long* __a1224;
  unsigned long* __b1225;
  unsigned long* __retval1226;
  __a1224 = v1221;
  __b1225 = v1222;
    unsigned long* t1227 = __b1225;
    unsigned long t1228 = *t1227;
    unsigned long* t1229 = __a1224;
    unsigned long t1230 = *t1229;
    _Bool c1231 = ((t1228 < t1230)) ? 1 : 0;
    if (c1231) {
      unsigned long* t1232 = __b1225;
      __retval1226 = t1232;
      unsigned long* t1233 = __retval1226;
      return t1233;
    }
  unsigned long* t1234 = __a1224;
  __retval1226 = t1234;
  unsigned long* t1235 = __retval1226;
  return t1235;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1236) {
bb1237:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1238;
  unsigned long __retval1239;
  unsigned long __diffmax1240;
  unsigned long __allocmax1241;
  this1238 = v1236;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1242 = this1238;
  unsigned long c1243 = 9223372036854775807;
  __diffmax1240 = c1243;
  struct std__allocator_char_* r1244 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1242);
  unsigned long r1245 = std__allocator_traits_std__allocator_char_____max_size(r1244);
  __allocmax1241 = r1245;
  unsigned long* r1246 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1240, &__allocmax1241);
  unsigned long t1247 = *r1246;
  unsigned long c1248 = 1;
  unsigned long b1249 = t1247 - c1248;
  __retval1239 = b1249;
  unsigned long t1250 = __retval1239;
  return t1250;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v1251) {
bb1252:
  struct std____new_allocator_char_* this1253;
  unsigned long __retval1254;
  this1253 = v1251;
  struct std____new_allocator_char_* t1255 = this1253;
  unsigned long c1256 = 9223372036854775807;
  unsigned long c1257 = 1;
  unsigned long b1258 = c1256 / c1257;
  __retval1254 = b1258;
  unsigned long t1259 = __retval1254;
  return t1259;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v1260, unsigned long v1261, void* v1262) {
bb1263:
  struct std____new_allocator_char_* this1264;
  unsigned long __n1265;
  void* unnamed1266;
  char* __retval1267;
  this1264 = v1260;
  __n1265 = v1261;
  unnamed1266 = v1262;
  struct std____new_allocator_char_* t1268 = this1264;
    unsigned long t1269 = __n1265;
    unsigned long r1270 = std____new_allocator_char____M_max_size___const(t1268);
    _Bool c1271 = ((t1269 > r1270)) ? 1 : 0;
    if (c1271) {
        unsigned long t1272 = __n1265;
        unsigned long c1273 = -1;
        unsigned long c1274 = 1;
        unsigned long b1275 = c1273 / c1274;
        _Bool c1276 = ((t1272 > b1275)) ? 1 : 0;
        if (c1276) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1277 = 1;
    unsigned long c1278 = 16;
    _Bool c1279 = ((c1277 > c1278)) ? 1 : 0;
    if (c1279) {
      unsigned long __al1280;
      unsigned long c1281 = 1;
      __al1280 = c1281;
      unsigned long t1282 = __n1265;
      unsigned long c1283 = 1;
      unsigned long b1284 = t1282 * c1283;
      unsigned long t1285 = __al1280;
      void* r1286 = operator_new_2(b1284, t1285);
      char* cast1287 = (char*)r1286;
      __retval1267 = cast1287;
      char* t1288 = __retval1267;
      return t1288;
    }
  unsigned long t1289 = __n1265;
  unsigned long c1290 = 1;
  unsigned long b1291 = t1289 * c1290;
  void* r1292 = operator_new(b1291);
  char* cast1293 = (char*)r1292;
  __retval1267 = cast1293;
  char* t1294 = __retval1267;
  return t1294;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1295, unsigned long v1296) {
bb1297:
  struct std__allocator_char_* this1298;
  unsigned long __n1299;
  char* __retval1300;
  this1298 = v1295;
  __n1299 = v1296;
  struct std__allocator_char_* t1301 = this1298;
    _Bool r1302 = std____is_constant_evaluated();
    if (r1302) {
        unsigned long t1303 = __n1299;
        unsigned long c1304 = 1;
        unsigned long ovr1305;
        _Bool ovf1306 = __builtin_mul_overflow(t1303, c1304, &ovr1305);
        __n1299 = ovr1305;
        if (ovf1306) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1307 = __n1299;
      void* r1308 = operator_new(t1307);
      char* cast1309 = (char*)r1308;
      __retval1300 = cast1309;
      char* t1310 = __retval1300;
      return t1310;
    }
  struct std____new_allocator_char_* base1311 = (struct std____new_allocator_char_*)((char *)t1301 + 0);
  unsigned long t1312 = __n1299;
  void* c1313 = ((void*)0);
  char* r1314 = std____new_allocator_char___allocate(base1311, t1312, c1313);
  __retval1300 = r1314;
  char* t1315 = __retval1300;
  return t1315;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1316, unsigned long v1317) {
bb1318:
  struct std__allocator_char_* __a1319;
  unsigned long __n1321;
  char* __retval1322;
  __a1319 = v1316;
  __n1321 = v1317;
  struct std__allocator_char_* t1323 = __a1319;
  unsigned long t1324 = __n1321;
  char* r1325 = std__allocator_char___allocate(t1323, t1324);
  __retval1322 = r1325;
  char* t1326 = __retval1322;
  return t1326;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1327, unsigned long v1328) {
bb1329:
  struct std__allocator_char_* __a1330;
  unsigned long __n1331;
  char* __retval1332;
  char* __p1333;
  __a1330 = v1327;
  __n1331 = v1328;
  struct std__allocator_char_* t1334 = __a1330;
  unsigned long t1335 = __n1331;
  char* r1336 = std__allocator_traits_std__allocator_char_____allocate(t1334, t1335);
  __p1333 = r1336;
  char* t1337 = __p1333;
  __retval1332 = t1337;
  char* t1338 = __retval1332;
  return t1338;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1339) {
bb1340:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1341;
  struct std__allocator_char_* __retval1342;
  this1341 = v1339;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1343 = this1341;
  struct std__allocator_char_* base1344 = (struct std__allocator_char_*)((char *)&(t1343->_M_dataplus) + 0);
  __retval1342 = base1344;
  struct std__allocator_char_* t1345 = __retval1342;
  return t1345;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1346, unsigned long* v1347, unsigned long v1348) {
bb1349:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1350;
  unsigned long* __capacity1351;
  unsigned long __old_capacity1352;
  char* __retval1353;
  this1350 = v1346;
  __capacity1351 = v1347;
  __old_capacity1352 = v1348;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1354 = this1350;
    unsigned long* t1355 = __capacity1351;
    unsigned long t1356 = *t1355;
    unsigned long r1357 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1354);
    _Bool c1358 = ((t1356 > r1357)) ? 1 : 0;
    if (c1358) {
      char* cast1359 = (char*)&(_str_9);
      std____throw_length_error(cast1359);
    }
    unsigned long* t1360 = __capacity1351;
    unsigned long t1361 = *t1360;
    unsigned long t1362 = __old_capacity1352;
    _Bool c1363 = ((t1361 > t1362)) ? 1 : 0;
    _Bool ternary1364;
    if (c1363) {
      unsigned long* t1365 = __capacity1351;
      unsigned long t1366 = *t1365;
      unsigned long c1367 = 2;
      unsigned long t1368 = __old_capacity1352;
      unsigned long b1369 = c1367 * t1368;
      _Bool c1370 = ((t1366 < b1369)) ? 1 : 0;
      ternary1364 = (_Bool)c1370;
    } else {
      _Bool c1371 = 0;
      ternary1364 = (_Bool)c1371;
    }
    if (ternary1364) {
      unsigned long c1372 = 2;
      unsigned long t1373 = __old_capacity1352;
      unsigned long b1374 = c1372 * t1373;
      unsigned long* t1375 = __capacity1351;
      *t1375 = b1374;
        unsigned long* t1376 = __capacity1351;
        unsigned long t1377 = *t1376;
        unsigned long r1378 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1354);
        _Bool c1379 = ((t1377 > r1378)) ? 1 : 0;
        if (c1379) {
          unsigned long r1380 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1354);
          unsigned long* t1381 = __capacity1351;
          *t1381 = r1380;
        }
    }
  struct std__allocator_char_* r1382 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1354);
  unsigned long* t1383 = __capacity1351;
  unsigned long t1384 = *t1383;
  unsigned long c1385 = 1;
  unsigned long b1386 = t1384 + c1385;
  char* r1387 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1382, b1386);
  __retval1353 = r1387;
  char* t1388 = __retval1353;
  return t1388;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1389, unsigned long v1390) {
bb1391:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1392;
  unsigned long __capacity1393;
  this1392 = v1389;
  __capacity1393 = v1390;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1394 = this1392;
  unsigned long t1395 = __capacity1393;
  t1394->field2._M_allocated_capacity = t1395;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1396:
  _Bool __retval1397;
    _Bool c1398 = 0;
    __retval1397 = c1398;
    _Bool t1399 = __retval1397;
    return t1399;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1400) {
bb1401:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1402;
  this1402 = v1400;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1403 = this1402;
    _Bool r1404 = std__is_constant_evaluated();
    if (r1404) {
        unsigned long __i1405;
        unsigned long c1406 = 0;
        __i1405 = c1406;
        while (1) {
          unsigned long t1408 = __i1405;
          unsigned long c1409 = 15;
          _Bool c1410 = ((t1408 <= c1409)) ? 1 : 0;
          if (!c1410) break;
          char c1411 = 0;
          unsigned long t1412 = __i1405;
          t1403->field2._M_local_buf[t1412] = c1411;
        for_step1407: ;
          unsigned long t1413 = __i1405;
          unsigned long u1414 = t1413 + 1;
          __i1405 = u1414;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1415, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1416) {
bb1417:
  struct _Guard* this1418;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1419;
  this1418 = v1415;
  __s1419 = v1416;
  struct _Guard* t1420 = this1418;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1421 = __s1419;
  t1420->_M_guarded = t1421;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1422, char* v1423) {
bb1424:
  char* __location1425;
  char* __args1426;
  char* __retval1427;
  void* __loc1428;
  __location1425 = v1422;
  __args1426 = v1423;
  char* t1429 = __location1425;
  void* cast1430 = (void*)t1429;
  __loc1428 = cast1430;
    void* t1431 = __loc1428;
    char* cast1432 = (char*)t1431;
    char* t1433 = __args1426;
    char t1434 = *t1433;
    *cast1432 = t1434;
    __retval1427 = cast1432;
    char* t1435 = __retval1427;
    return t1435;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1436, char* v1437) {
bb1438:
  char* __c11439;
  char* __c21440;
  __c11439 = v1436;
  __c21440 = v1437;
    _Bool r1441 = std____is_constant_evaluated();
    if (r1441) {
      char* t1442 = __c11439;
      char* t1443 = __c21440;
      char* r1444 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1442, t1443);
    } else {
      char* t1445 = __c21440;
      char t1446 = *t1445;
      char* t1447 = __c11439;
      *t1447 = t1446;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1448, char* v1449, unsigned long v1450) {
bb1451:
  char* __s11452;
  char* __s21453;
  unsigned long __n1454;
  char* __retval1455;
  __s11452 = v1448;
  __s21453 = v1449;
  __n1454 = v1450;
    unsigned long t1456 = __n1454;
    unsigned long c1457 = 0;
    _Bool c1458 = ((t1456 == c1457)) ? 1 : 0;
    if (c1458) {
      char* t1459 = __s11452;
      __retval1455 = t1459;
      char* t1460 = __retval1455;
      return t1460;
    }
    _Bool r1461 = std____is_constant_evaluated();
    if (r1461) {
        unsigned long __i1462;
        unsigned long c1463 = 0;
        __i1462 = c1463;
        while (1) {
          unsigned long t1465 = __i1462;
          unsigned long t1466 = __n1454;
          _Bool c1467 = ((t1465 < t1466)) ? 1 : 0;
          if (!c1467) break;
          char* t1468 = __s11452;
          unsigned long t1469 = __i1462;
          char* ptr1470 = &(t1468)[t1469];
          unsigned long t1471 = __i1462;
          char* t1472 = __s21453;
          char* ptr1473 = &(t1472)[t1471];
          char* r1474 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1470, ptr1473);
        for_step1464: ;
          unsigned long t1475 = __i1462;
          unsigned long u1476 = t1475 + 1;
          __i1462 = u1476;
        }
      char* t1477 = __s11452;
      __retval1455 = t1477;
      char* t1478 = __retval1455;
      return t1478;
    }
  char* t1479 = __s11452;
  void* cast1480 = (void*)t1479;
  char* t1481 = __s21453;
  void* cast1482 = (void*)t1481;
  unsigned long t1483 = __n1454;
  unsigned long c1484 = 1;
  unsigned long b1485 = t1483 * c1484;
  void* r1486 = memcpy(cast1480, cast1482, b1485);
  char* t1487 = __s11452;
  __retval1455 = t1487;
  char* t1488 = __retval1455;
  return t1488;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1489, char* v1490, unsigned long v1491) {
bb1492:
  char* __s11493;
  char* __s21494;
  unsigned long __n1495;
  char* __retval1496;
  __s11493 = v1489;
  __s21494 = v1490;
  __n1495 = v1491;
    unsigned long t1497 = __n1495;
    unsigned long c1498 = 0;
    _Bool c1499 = ((t1497 == c1498)) ? 1 : 0;
    if (c1499) {
      char* t1500 = __s11493;
      __retval1496 = t1500;
      char* t1501 = __retval1496;
      return t1501;
    }
    _Bool r1502 = std____is_constant_evaluated();
    if (r1502) {
      char* t1503 = __s11493;
      char* t1504 = __s21494;
      unsigned long t1505 = __n1495;
      char* r1506 = __gnu_cxx__char_traits_char___copy(t1503, t1504, t1505);
      __retval1496 = r1506;
      char* t1507 = __retval1496;
      return t1507;
    }
  char* t1508 = __s11493;
  void* cast1509 = (void*)t1508;
  char* t1510 = __s21494;
  void* cast1511 = (void*)t1510;
  unsigned long t1512 = __n1495;
  void* r1513 = memcpy(cast1509, cast1511, t1512);
  char* cast1514 = (char*)r1513;
  __retval1496 = cast1514;
  char* t1515 = __retval1496;
  return t1515;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1516, char* v1517, unsigned long v1518) {
bb1519:
  char* __d1520;
  char* __s1521;
  unsigned long __n1522;
  __d1520 = v1516;
  __s1521 = v1517;
  __n1522 = v1518;
    unsigned long t1523 = __n1522;
    unsigned long c1524 = 1;
    _Bool c1525 = ((t1523 == c1524)) ? 1 : 0;
    if (c1525) {
      char* t1526 = __d1520;
      char* t1527 = __s1521;
      std__char_traits_char___assign(t1526, t1527);
    } else {
      char* t1528 = __d1520;
      char* t1529 = __s1521;
      unsigned long t1530 = __n1522;
      char* r1531 = std__char_traits_char___copy(t1528, t1529, t1530);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1532) {
bb1533:
  char* __it1534;
  char* __retval1535;
  __it1534 = v1532;
  char* t1536 = __it1534;
  __retval1535 = t1536;
  char* t1537 = __retval1535;
  return t1537;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1538, char* v1539, char* v1540) {
bb1541:
  char* __p1542;
  char* __k11543;
  char* __k21544;
  __p1542 = v1538;
  __k11543 = v1539;
  __k21544 = v1540;
    char* t1545 = __p1542;
    char* t1546 = __k11543;
    char* r1547 = char_const__std____niter_base_char_const__(t1546);
    char* t1548 = __k21544;
    char* t1549 = __k11543;
    long diff1550 = t1548 - t1549;
    unsigned long cast1551 = (unsigned long)diff1550;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1545, r1547, cast1551);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1552) {
bb1553:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1554;
  char* __retval1555;
  this1554 = v1552;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1556 = this1554;
  char* t1557 = t1556->_M_dataplus._M_p;
  __retval1555 = t1557;
  char* t1558 = __retval1555;
  return t1558;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1559, unsigned long v1560) {
bb1561:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1562;
  unsigned long __length1563;
  this1562 = v1559;
  __length1563 = v1560;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1564 = this1562;
  unsigned long t1565 = __length1563;
  t1564->_M_string_length = t1565;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1566, unsigned long v1567) {
bb1568:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1569;
  unsigned long __n1570;
  char ref_tmp01571;
  this1569 = v1566;
  __n1570 = v1567;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1572 = this1569;
  unsigned long t1573 = __n1570;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1572, t1573);
  unsigned long t1574 = __n1570;
  char* r1575 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1572);
  char* ptr1576 = &(r1575)[t1574];
  char c1577 = 0;
  ref_tmp01571 = c1577;
  std__char_traits_char___assign(ptr1576, &ref_tmp01571);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1578) {
bb1579:
  struct _Guard* this1580;
  this1580 = v1578;
  struct _Guard* t1581 = this1580;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1582 = t1581->_M_guarded;
    _Bool cast1583 = (_Bool)t1582;
    if (cast1583) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1584 = t1581->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1584);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1585, char* v1586, char* v1587, struct std__forward_iterator_tag v1588) {
bb1589:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1590;
  char* __beg1591;
  char* __end1592;
  struct std__forward_iterator_tag unnamed1593;
  unsigned long __dnew1594;
  struct _Guard __guard1595;
  this1590 = v1585;
  __beg1591 = v1586;
  __end1592 = v1587;
  unnamed1593 = v1588;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1596 = this1590;
  char* t1597 = __beg1591;
  char* t1598 = __end1592;
  long r1599 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1597, t1598);
  unsigned long cast1600 = (unsigned long)r1599;
  __dnew1594 = cast1600;
    unsigned long t1601 = __dnew1594;
    unsigned long c1602 = 15;
    _Bool c1603 = ((t1601 > c1602)) ? 1 : 0;
    if (c1603) {
      unsigned long c1604 = 0;
      char* r1605 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1596, &__dnew1594, c1604);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1596, r1605);
      unsigned long t1606 = __dnew1594;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1596, t1606);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1596);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1595, t1596);
    char* r1607 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1596);
    char* t1608 = __beg1591;
    char* t1609 = __end1592;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1607, t1608, t1609);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1610 = ((void*)0);
    __guard1595._M_guarded = c1610;
    unsigned long t1611 = __dnew1594;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1596, t1611);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1595);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1612) {
bb1613:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1614;
  this1614 = v1612;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1615 = this1614;
  {
    struct std__allocator_char_* base1616 = (struct std__allocator_char_*)((char *)t1615 + 0);
    std__allocator_char____allocator(base1616);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1617, struct std____new_allocator_char_* v1618) {
bb1619:
  struct std____new_allocator_char_* this1620;
  struct std____new_allocator_char_* unnamed1621;
  this1620 = v1617;
  unnamed1621 = v1618;
  struct std____new_allocator_char_* t1622 = this1620;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1623) {
bb1624:
  char* __r1625;
  char* __retval1626;
  __r1625 = v1623;
  char* t1627 = __r1625;
  __retval1626 = t1627;
  char* t1628 = __retval1626;
  return t1628;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1629) {
bb1630:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1631;
  char* __retval1632;
  this1631 = v1629;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1633 = this1631;
  char* cast1634 = (char*)&(t1633->field2._M_local_buf);
  char* r1635 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1634);
  __retval1632 = r1635;
  char* t1636 = __retval1632;
  return t1636;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1637) {
bb1638:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1639;
  _Bool __retval1640;
  this1639 = v1637;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1641 = this1639;
    char* r1642 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1641);
    char* r1643 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1641);
    _Bool c1644 = ((r1642 == r1643)) ? 1 : 0;
    if (c1644) {
        unsigned long t1645 = t1641->_M_string_length;
        unsigned long c1646 = 15;
        _Bool c1647 = ((t1645 > c1646)) ? 1 : 0;
        if (c1647) {
          __builtin_unreachable();
        }
      _Bool c1648 = 1;
      __retval1640 = c1648;
      _Bool t1649 = __retval1640;
      return t1649;
    }
  _Bool c1650 = 0;
  __retval1640 = c1650;
  _Bool t1651 = __retval1640;
  return t1651;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1652, char* v1653, unsigned long v1654) {
bb1655:
  struct std____new_allocator_char_* this1656;
  char* __p1657;
  unsigned long __n1658;
  this1656 = v1652;
  __p1657 = v1653;
  __n1658 = v1654;
  struct std____new_allocator_char_* t1659 = this1656;
    unsigned long c1660 = 1;
    unsigned long c1661 = 16;
    _Bool c1662 = ((c1660 > c1661)) ? 1 : 0;
    if (c1662) {
      char* t1663 = __p1657;
      void* cast1664 = (void*)t1663;
      unsigned long t1665 = __n1658;
      unsigned long c1666 = 1;
      unsigned long b1667 = t1665 * c1666;
      unsigned long c1668 = 1;
      operator_delete_3(cast1664, b1667, c1668);
      return;
    }
  char* t1669 = __p1657;
  void* cast1670 = (void*)t1669;
  unsigned long t1671 = __n1658;
  unsigned long c1672 = 1;
  unsigned long b1673 = t1671 * c1672;
  operator_delete_2(cast1670, b1673);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1674, char* v1675, unsigned long v1676) {
bb1677:
  struct std__allocator_char_* this1678;
  char* __p1679;
  unsigned long __n1680;
  this1678 = v1674;
  __p1679 = v1675;
  __n1680 = v1676;
  struct std__allocator_char_* t1681 = this1678;
    _Bool r1682 = std____is_constant_evaluated();
    if (r1682) {
      char* t1683 = __p1679;
      void* cast1684 = (void*)t1683;
      operator_delete(cast1684);
      return;
    }
  struct std____new_allocator_char_* base1685 = (struct std____new_allocator_char_*)((char *)t1681 + 0);
  char* t1686 = __p1679;
  unsigned long t1687 = __n1680;
  std____new_allocator_char___deallocate(base1685, t1686, t1687);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1688, char* v1689, unsigned long v1690) {
bb1691:
  struct std__allocator_char_* __a1692;
  char* __p1693;
  unsigned long __n1694;
  __a1692 = v1688;
  __p1693 = v1689;
  __n1694 = v1690;
  struct std__allocator_char_* t1695 = __a1692;
  char* t1696 = __p1693;
  unsigned long t1697 = __n1694;
  std__allocator_char___deallocate(t1695, t1696, t1697);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1698, unsigned long v1699) {
bb1700:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1701;
  unsigned long __size1702;
  this1701 = v1698;
  __size1702 = v1699;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1703 = this1701;
  struct std__allocator_char_* r1704 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1703);
  char* r1705 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1703);
  unsigned long t1706 = __size1702;
  unsigned long c1707 = 1;
  unsigned long b1708 = t1706 + c1707;
  std__allocator_traits_std__allocator_char_____deallocate(r1704, r1705, b1708);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1709) {
bb1710:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1711;
  this1711 = v1709;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1712 = this1711;
    _Bool r1713 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1712);
    _Bool u1714 = !r1713;
    if (u1714) {
      unsigned long t1715 = t1712->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1712, t1715);
    }
  return;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEEC2Ev
void std__basic_streambuf_char__std__char_traits_char_____basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v1716) {
bb1717:
  struct std__basic_streambuf_char__std__char_traits_char__* this1718;
  this1718 = v1716;
  struct std__basic_streambuf_char__std__char_traits_char__* t1719 = this1718;
  void* v1720 = (void*)&_ZTVSt15basic_streambufIcSt11char_traitsIcEE[2];
  void** v1721 = (void**)t1719;
  *(void**)(v1721) = (void*)v1720;
  char* c1722 = ((void*)0);
  t1719->_M_in_beg = c1722;
  char* c1723 = ((void*)0);
  t1719->_M_in_cur = c1723;
  char* c1724 = ((void*)0);
  t1719->_M_in_end = c1724;
  char* c1725 = ((void*)0);
  t1719->_M_out_beg = c1725;
  char* c1726 = ((void*)0);
  t1719->_M_out_cur = c1726;
  char* c1727 = ((void*)0);
  t1719->_M_out_end = c1727;
  std__locale__locale(&t1719->_M_buf_locale);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1728) {
bb1729:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1730;
  struct std__allocator_char_ ref_tmp01731;
  this1730 = v1728;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1732 = this1730;
  char* r1733 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t1732);
  std__allocator_char___allocator_2(&ref_tmp01731);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t1732->_M_dataplus, r1733, &ref_tmp01731);
  {
    std__allocator_char____allocator(&ref_tmp01731);
  }
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1732);
    unsigned long c1734 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1732, c1734);
  return;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v1735) {
bb1736:
  struct std__basic_streambuf_char__std__char_traits_char__* this1737;
  this1737 = v1735;
  struct std__basic_streambuf_char__std__char_traits_char__* t1738 = this1737;
  {
    std__locale___locale(&t1738->_M_buf_locale);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1739, char* v1740, struct std__allocator_char_* v1741) {
bb1742:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1743;
  char* __dat1744;
  struct std__allocator_char_* __a1745;
  this1743 = v1739;
  __dat1744 = v1740;
  __a1745 = v1741;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1746 = this1743;
  struct std__allocator_char_* base1747 = (struct std__allocator_char_*)((char *)t1746 + 0);
  struct std__allocator_char_* t1748 = __a1745;
  std__allocator_char___allocator(base1747, t1748);
    char* t1749 = __dat1744;
    t1746->_M_p = t1749;
  return;
}

