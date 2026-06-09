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
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct anon_struct_0 { unsigned char* __field0[5]; unsigned char* __field1[5]; unsigned char* __field2[5]; };
struct anon_struct_1 { unsigned char* __field0[4]; };
struct anon_struct_2 { unsigned char* __field0[16]; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__less_const_char___ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* _M_in_beg; char* _M_in_cur; char* _M_in_end; char* _M_out_beg; char* _M_out_cur; char* _M_out_end; struct std__locale _M_buf_locale; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; int _M_mode; struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ _M_string; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long _M_gcount; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__basic_iostream_char__std__char_traits_char__ { struct std__basic_istream_char__std__char_traits_char__ __field0; struct std__basic_ostream_char__std__char_traits_char__ __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__ { struct std__basic_iostream_char__std__char_traits_char__ __field0; struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__ _M_stringbuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void *_ZTVNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt15basic_streambufIcSt11char_traitsIcEE[];
int _ZNSt8ios_base2inE_const __attribute__((aligned(4))) = 8;
int _ZNSt8ios_base3outE_const __attribute__((aligned(4))) = 16;
char _str[2] = "X";
char _str_1[17] = "oss.str() == \"X\"";
char _str_2[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stream/sstream_str_char/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[3] = "XY";
char _str_4[18] = "oss.str() == \"XY\"";
char _str_5[4] = "XYZ";
char _str_6[19] = "oss.str() == \"XYZ\"";
extern void *_ZTVNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void *_ZTVNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt15basic_streambufIcSt11char_traitsIcEE[];
char _str_7[25] = "basic_string::_M_replace";
char _str_8[24] = "basic_string::_M_create";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
extern void std__ios_base__ios_base(struct std__ios_base* p0);
void std__ios_base___ios_base(struct std__ios_base* p0) {}
void std__basic_ios_char__std__char_traits_char_____basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_istream_char__std__char_traits_char_____basic_istream(struct std__basic_istream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ostream_char__std__char_traits_char_____basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ostream_char__std__char_traits_char______basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* p0, void** p1);
void std__basic_istream_char__std__char_traits_char______basic_istream(struct std__basic_istream_char__std__char_traits_char__* p0, void** p1);
void std__basic_iostream_char__std__char_traits_char_____basic_iostream(struct std__basic_iostream_char__std__char_traits_char__* p0, void** p1);
int std__operator_(int p0, int p1);
void std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char_____basic_stringbuf(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* p0, int p1);
extern void std__basic_ios_char__std__char_traits_char_____init(struct std__basic_ios_char__std__char_traits_char__* p0, struct std__basic_streambuf_char__std__char_traits_char__* p1);
void std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______basic_stringbuf(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* p0);
void std__basic_iostream_char__std__char_traits_char______basic_iostream(struct std__basic_iostream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____basic_stringstream(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* p0);
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* p0);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std____is_constant_evaluated();
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std__allocator_char_* p1);
char* std__basic_streambuf_char__std__char_traits_char_____pptr___const(struct std__basic_streambuf_char__std__char_traits_char__* p0);
char* std__basic_streambuf_char__std__char_traits_char_____egptr___const(struct std__basic_streambuf_char__std__char_traits_char__* p0);
char* std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______M_high_mark___const(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* p0);
extern void std____throw_length_error(char* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
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
char* __gnu_cxx__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* p0, char* p1, unsigned long p2);
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* p0, char* p1, char* p2);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void __gnu_cxx__char_traits_char___assign(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___move(char* p0, char* p1, unsigned long p2);
extern void* memmove(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, char* p3, unsigned long p4, unsigned long p5);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____str___const__(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____3(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned char p1);
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream_2(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* p0, void** p1);
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* p0);
int main();
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_char___deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0);
extern void std__locale__locale(struct std__locale* p0);
void std__locale___locale(struct std__locale* p0) {}
void std__basic_streambuf_char__std__char_traits_char_____basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* p0);
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* p0);
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
_Bool std__is_constant_evaluated();
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* p0, char* p1);
void std__char_traits_char___assign(char* p0, char* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);

extern unsigned char* _ZTTNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEE[10] __attribute__((aligned(8)));

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

// function: _ZNSiC2Ev
void std__basic_istream_char__std__char_traits_char_____basic_istream(struct std__basic_istream_char__std__char_traits_char__* v14, void** v15) {
bb16:
  struct std__basic_istream_char__std__char_traits_char__* this17;
  void** vtt18;
  this17 = v14;
  vtt18 = v15;
  struct std__basic_istream_char__std__char_traits_char__* t19 = this17;
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
  struct std__basic_istream_char__std__char_traits_char__* cast39 = (struct std__basic_istream_char__std__char_traits_char__*)ptr38;
  void** v40 = (void**)cast39;
  *(void**)(v40) = (void*)t29;
  long c41 = 0;
  t19->_M_gcount = c41;
  void** v42 = (void**)t19;
  void* v43 = *((void**)v42);
  unsigned char* cast44 = (unsigned char*)v43;
  long c45 = -24;
  unsigned char* ptr46 = &(cast44)[c45];
  long* cast47 = (long*)ptr46;
  long t48 = *cast47;
  unsigned char* cast49 = (unsigned char*)t19;
  unsigned char* ptr50 = &(cast49)[t48];
  struct std__basic_istream_char__std__char_traits_char__* cast51 = (struct std__basic_istream_char__std__char_traits_char__*)ptr50;
  struct std__basic_ios_char__std__char_traits_char__* cast52 = (struct std__basic_ios_char__std__char_traits_char__*)cast51;
  struct std__basic_streambuf_char__std__char_traits_char__* c53 = ((void*)0);
  std__basic_ios_char__std__char_traits_char_____init(cast52, c53);
  return;
}

// function: _ZNSoC2Ev
void std__basic_ostream_char__std__char_traits_char_____basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* v54, void** v55) {
bb56:
  struct std__basic_ostream_char__std__char_traits_char__* this57;
  void** vtt58;
  this57 = v54;
  vtt58 = v55;
  struct std__basic_ostream_char__std__char_traits_char__* t59 = this57;
  void** t60 = vtt58;
  static void *vtt_slot61 = 0;
  void** vtt62 = (void**)&vtt_slot61;
  void** cast63 = (void**)vtt62;
  void* t64 = *cast63;
  void** v65 = (void**)t59;
  *(void**)(v65) = (void*)t64;
  static void *vtt_slot66 = 0;
  void** vtt67 = (void**)&vtt_slot66;
  void** cast68 = (void**)vtt67;
  void* t69 = *cast68;
  void** v70 = (void**)t59;
  void* v71 = *((void**)v70);
  unsigned char* cast72 = (unsigned char*)v71;
  long c73 = -24;
  unsigned char* ptr74 = &(cast72)[c73];
  long* cast75 = (long*)ptr74;
  long t76 = *cast75;
  unsigned char* cast77 = (unsigned char*)t59;
  unsigned char* ptr78 = &(cast77)[t76];
  struct std__basic_ostream_char__std__char_traits_char__* cast79 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr78;
  void** v80 = (void**)cast79;
  *(void**)(v80) = (void*)t69;
  void** v81 = (void**)t59;
  void* v82 = *((void**)v81);
  unsigned char* cast83 = (unsigned char*)v82;
  long c84 = -24;
  unsigned char* ptr85 = &(cast83)[c84];
  long* cast86 = (long*)ptr85;
  long t87 = *cast86;
  unsigned char* cast88 = (unsigned char*)t59;
  unsigned char* ptr89 = &(cast88)[t87];
  struct std__basic_ostream_char__std__char_traits_char__* cast90 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr89;
  struct std__basic_ios_char__std__char_traits_char__* cast91 = (struct std__basic_ios_char__std__char_traits_char__*)cast90;
  struct std__basic_streambuf_char__std__char_traits_char__* c92 = ((void*)0);
  std__basic_ios_char__std__char_traits_char_____init(cast91, c92);
  return;
}

// function: _ZNSoD2Ev
void std__basic_ostream_char__std__char_traits_char______basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* v93, void** v94) {
bb95:
  struct std__basic_ostream_char__std__char_traits_char__* this96;
  void** vtt97;
  this96 = v93;
  vtt97 = v94;
  struct std__basic_ostream_char__std__char_traits_char__* t98 = this96;
  void** t99 = vtt97;
  return;
}

// function: _ZNSiD2Ev
void std__basic_istream_char__std__char_traits_char______basic_istream(struct std__basic_istream_char__std__char_traits_char__* v100, void** v101) {
bb102:
  struct std__basic_istream_char__std__char_traits_char__* this103;
  void** vtt104;
  this103 = v100;
  vtt104 = v101;
  struct std__basic_istream_char__std__char_traits_char__* t105 = this103;
  void** t106 = vtt104;
  long c107 = 0;
  t105->_M_gcount = c107;
  return;
}

// function: _ZNSdC2Ev
void std__basic_iostream_char__std__char_traits_char_____basic_iostream(struct std__basic_iostream_char__std__char_traits_char__* v108, void** v109) {
bb110:
  struct std__basic_iostream_char__std__char_traits_char__* this111;
  void** vtt112;
  this111 = v108;
  vtt112 = v109;
  struct std__basic_iostream_char__std__char_traits_char__* t113 = this111;
  void** t114 = vtt112;
  struct std__basic_istream_char__std__char_traits_char__* base115 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t113 + 0);
  static void *vtt_slot116 = 0;
  void** vtt117 = (void**)&vtt_slot116;
  std__basic_istream_char__std__char_traits_char_____basic_istream(base115, vtt117);
    struct std__basic_ostream_char__std__char_traits_char__* base118 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t113 + 16);
    static void *vtt_slot119 = 0;
    void** vtt120 = (void**)&vtt_slot119;
    std__basic_ostream_char__std__char_traits_char_____basic_ostream(base118, vtt120);
      static void *vtt_slot121 = 0;
      void** vtt122 = (void**)&vtt_slot121;
      void** cast123 = (void**)vtt122;
      void* t124 = *cast123;
      void** v125 = (void**)t113;
      *(void**)(v125) = (void*)t124;
      static void *vtt_slot126 = 0;
      void** vtt127 = (void**)&vtt_slot126;
      void** cast128 = (void**)vtt127;
      void* t129 = *cast128;
      void** v130 = (void**)t113;
      void* v131 = *((void**)v130);
      unsigned char* cast132 = (unsigned char*)v131;
      long c133 = -24;
      unsigned char* ptr134 = &(cast132)[c133];
      long* cast135 = (long*)ptr134;
      long t136 = *cast135;
      unsigned char* cast137 = (unsigned char*)t113;
      unsigned char* ptr138 = &(cast137)[t136];
      struct std__basic_iostream_char__std__char_traits_char__* cast139 = (struct std__basic_iostream_char__std__char_traits_char__*)ptr138;
      void** v140 = (void**)cast139;
      *(void**)(v140) = (void*)t129;
      static void *vtt_slot141 = 0;
      void** vtt142 = (void**)&vtt_slot141;
      void** cast143 = (void**)vtt142;
      void* t144 = *cast143;
      struct std__basic_ostream_char__std__char_traits_char__* base145 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t113 + 16);
      void** v146 = (void**)base145;
      *(void**)(v146) = (void*)t144;
  return;
}

// function: _ZStorSt13_Ios_OpenmodeS_
int std__operator_(int v147, int v148) {
bb149:
  int __a150;
  int __b151;
  int __retval152;
  __a150 = v147;
  __b151 = v148;
  int t153 = __a150;
  int t154 = __b151;
  int b155 = t153 | t154;
  __retval152 = b155;
  int t156 = __retval152;
  return t156;
}

// function: _ZNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEEC2ESt13_Ios_Openmode
void std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char_____basic_stringbuf(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* v157, int v158) {
bb159:
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* this160;
  int __mode161;
  this160 = v157;
  __mode161 = v158;
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* t162 = this160;
  struct std__basic_streambuf_char__std__char_traits_char__* base163 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t162 + 0);
  std__basic_streambuf_char__std__char_traits_char_____basic_streambuf(base163);
    void* v164 = (void*)&_ZTVNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEEE[2];
    void** v165 = (void**)t162;
    *(void**)(v165) = (void*)v164;
    int t166 = __mode161;
    t162->_M_mode = t166;
    _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&t162->_M_string);
  return;
}

// function: _ZNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______basic_stringbuf(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* v167) {
bb168:
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* this169;
  this169 = v167;
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* t170 = this169;
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&t170->_M_string);
    }
  {
    struct std__basic_streambuf_char__std__char_traits_char__* base171 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t170 + 0);
    std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base171);
  }
  return;
}

// function: _ZNSdD2Ev
void std__basic_iostream_char__std__char_traits_char______basic_iostream(struct std__basic_iostream_char__std__char_traits_char__* v172, void** v173) {
bb174:
  struct std__basic_iostream_char__std__char_traits_char__* this175;
  void** vtt176;
  this175 = v172;
  vtt176 = v173;
  struct std__basic_iostream_char__std__char_traits_char__* t177 = this175;
  void** t178 = vtt176;
    {
      struct std__basic_ostream_char__std__char_traits_char__* base179 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t177 + 16);
      static void *vtt_slot180 = 0;
      void** vtt181 = (void**)&vtt_slot180;
      std__basic_ostream_char__std__char_traits_char______basic_ostream(base179, vtt181);
    }
  {
    struct std__basic_istream_char__std__char_traits_char__* base182 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t177 + 0);
    static void *vtt_slot183 = 0;
    void** vtt184 = (void**)&vtt_slot183;
    std__basic_istream_char__std__char_traits_char______basic_istream(base182, vtt184);
  }
  return;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEED2Ev
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* v185) {
bb186:
  struct std__basic_ios_char__std__char_traits_char__* this187;
  this187 = v185;
  struct std__basic_ios_char__std__char_traits_char__* t188 = this187;
  {
    struct std__ios_base* base189 = (struct std__ios_base*)((char *)t188 + 0);
    std__ios_base___ios_base(base189);
  }
  return;
}

// function: _ZNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEC1Ev
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____basic_stringstream(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* v190) {
bb191:
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* this192;
  this192 = v190;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* t193 = this192;
  struct std__basic_ios_char__std__char_traits_char__* base194 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t193 + 128);
  std__basic_ios_char__std__char_traits_char_____basic_ios(base194);
    struct std__basic_iostream_char__std__char_traits_char__* base195 = (struct std__basic_iostream_char__std__char_traits_char__*)((char *)t193 + 0);
    static void *vtt_slot196 = 0;
    void** vtt197 = (void**)&vtt_slot196;
    std__basic_iostream_char__std__char_traits_char_____basic_iostream(base195, vtt197);
      void* v198 = (void*)&_ZTVNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEE[3];
      void** v199 = (void**)t193;
      *(void**)(v199) = (void*)v198;
      void* v200 = (void*)&_ZTVNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEE[3];
      struct std__basic_ios_char__std__char_traits_char__* base201 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t193 + 128);
      void** v202 = (void**)base201;
      *(void**)(v202) = (void*)v200;
      void* v203 = (void*)&_ZTVNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEE[3];
      struct std__basic_ostream_char__std__char_traits_char__* base204 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t193 + 16);
      void** v205 = (void**)base204;
      *(void**)(v205) = (void*)v203;
      int t206 = _ZNSt8ios_base3outE_const;
      int t207 = _ZNSt8ios_base2inE_const;
      int r208 = std__operator_(t206, t207);
      std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char_____basic_stringbuf(&t193->_M_stringbuf, r208);
        void** v209 = (void**)t193;
        void* v210 = *((void**)v209);
        unsigned char* cast211 = (unsigned char*)v210;
        long c212 = -24;
        unsigned char* ptr213 = &(cast211)[c212];
        long* cast214 = (long*)ptr213;
        long t215 = *cast214;
        unsigned char* cast216 = (unsigned char*)t193;
        unsigned char* ptr217 = &(cast216)[t215];
        struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* cast218 = (struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__*)ptr217;
        struct std__basic_ios_char__std__char_traits_char__* cast219 = (struct std__basic_ios_char__std__char_traits_char__*)cast218;
        struct std__basic_streambuf_char__std__char_traits_char__* base220 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)&(t193->_M_stringbuf) + 0);
        std__basic_ios_char__std__char_traits_char_____init(cast219, base220);
  return;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v221) {
bb222:
  struct std__ios_base* this223;
  long __retval224;
  this223 = v221;
  struct std__ios_base* t225 = this223;
  long t226 = t225->_M_width;
  __retval224 = t226;
  long t227 = __retval224;
  return t227;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v228, char v229) {
bb230:
  struct std__basic_ostream_char__std__char_traits_char__* __out231;
  char __c232;
  struct std__basic_ostream_char__std__char_traits_char__* __retval233;
  __out231 = v228;
  __c232 = v229;
    struct std__basic_ostream_char__std__char_traits_char__* t234 = __out231;
    void** v235 = (void**)t234;
    void* v236 = *((void**)v235);
    unsigned char* cast237 = (unsigned char*)v236;
    long c238 = -24;
    unsigned char* ptr239 = &(cast237)[c238];
    long* cast240 = (long*)ptr239;
    long t241 = *cast240;
    unsigned char* cast242 = (unsigned char*)t234;
    unsigned char* ptr243 = &(cast242)[t241];
    struct std__basic_ostream_char__std__char_traits_char__* cast244 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr243;
    struct std__ios_base* cast245 = (struct std__ios_base*)cast244;
    long r246 = std__ios_base__width___const(cast245);
    long c247 = 0;
    _Bool c248 = ((r246 != c247)) ? 1 : 0;
    if (c248) {
      struct std__basic_ostream_char__std__char_traits_char__* t249 = __out231;
      long c250 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r251 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t249, &__c232, c250);
      __retval233 = r251;
      struct std__basic_ostream_char__std__char_traits_char__* t252 = __retval233;
      return t252;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t253 = __out231;
  char t254 = __c232;
  struct std__basic_ostream_char__std__char_traits_char__* r255 = std__ostream__put(t253, t254);
  struct std__basic_ostream_char__std__char_traits_char__* t256 = __out231;
  __retval233 = t256;
  struct std__basic_ostream_char__std__char_traits_char__* t257 = __retval233;
  return t257;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v258) {
bb259:
  struct std__allocator_char_* __a260;
  unsigned long __retval261;
  __a260 = v258;
  unsigned long c262 = -1;
  unsigned long c263 = 1;
  unsigned long b264 = c262 / c263;
  __retval261 = b264;
  unsigned long t265 = __retval261;
  return t265;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v266) {
bb267:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this268;
  struct std__allocator_char_* __retval269;
  this268 = v266;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t270 = this268;
  struct std__allocator_char_* base271 = (struct std__allocator_char_*)((char *)&(t270->_M_dataplus) + 0);
  __retval269 = base271;
  struct std__allocator_char_* t272 = __retval269;
  return t272;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v273, unsigned long* v274) {
bb275:
  unsigned long* __a276;
  unsigned long* __b277;
  unsigned long* __retval278;
  __a276 = v273;
  __b277 = v274;
    unsigned long* t279 = __b277;
    unsigned long t280 = *t279;
    unsigned long* t281 = __a276;
    unsigned long t282 = *t281;
    _Bool c283 = ((t280 < t282)) ? 1 : 0;
    if (c283) {
      unsigned long* t284 = __b277;
      __retval278 = t284;
      unsigned long* t285 = __retval278;
      return t285;
    }
  unsigned long* t286 = __a276;
  __retval278 = t286;
  unsigned long* t287 = __retval278;
  return t287;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v288) {
bb289:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this290;
  unsigned long __retval291;
  unsigned long __diffmax292;
  unsigned long __allocmax293;
  this290 = v288;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t294 = this290;
  unsigned long c295 = 9223372036854775807;
  __diffmax292 = c295;
  struct std__allocator_char_* r296 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t294);
  unsigned long r297 = std__allocator_traits_std__allocator_char_____max_size(r296);
  __allocmax293 = r297;
  unsigned long* r298 = unsigned_long_const__std__min_unsigned_long_(&__diffmax292, &__allocmax293);
  unsigned long t299 = *r298;
  unsigned long c300 = 1;
  unsigned long b301 = t299 - c300;
  __retval291 = b301;
  unsigned long t302 = __retval291;
  return t302;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v303) {
bb304:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this305;
  unsigned long __retval306;
  unsigned long __sz307;
  this305 = v303;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t308 = this305;
  unsigned long t309 = t308->_M_string_length;
  __sz307 = t309;
    unsigned long t310 = __sz307;
    unsigned long r311 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t308);
    _Bool c312 = ((t310 > r311)) ? 1 : 0;
    if (c312) {
      __builtin_unreachable();
    }
  unsigned long t313 = __sz307;
  __retval306 = t313;
  unsigned long t314 = __retval306;
  return t314;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb315:
  _Bool __retval316;
    _Bool c317 = 0;
    __retval316 = c317;
    _Bool t318 = __retval316;
    return t318;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v319, char* v320) {
bb321:
  char* __c1322;
  char* __c2323;
  _Bool __retval324;
  __c1322 = v319;
  __c2323 = v320;
  char* t325 = __c1322;
  char t326 = *t325;
  int cast327 = (int)t326;
  char* t328 = __c2323;
  char t329 = *t328;
  int cast330 = (int)t329;
  _Bool c331 = ((cast327 == cast330)) ? 1 : 0;
  __retval324 = c331;
  _Bool t332 = __retval324;
  return t332;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v333) {
bb334:
  char* __p335;
  unsigned long __retval336;
  unsigned long __i337;
  __p335 = v333;
  unsigned long c338 = 0;
  __i337 = c338;
    char ref_tmp0339;
    while (1) {
      unsigned long t340 = __i337;
      char* t341 = __p335;
      char* ptr342 = &(t341)[t340];
      char c343 = 0;
      ref_tmp0339 = c343;
      _Bool r344 = __gnu_cxx__char_traits_char___eq(ptr342, &ref_tmp0339);
      _Bool u345 = !r344;
      if (!u345) break;
      unsigned long t346 = __i337;
      unsigned long u347 = t346 + 1;
      __i337 = u347;
    }
  unsigned long t348 = __i337;
  __retval336 = t348;
  unsigned long t349 = __retval336;
  return t349;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v350) {
bb351:
  char* __s352;
  unsigned long __retval353;
  __s352 = v350;
    _Bool r354 = std____is_constant_evaluated();
    if (r354) {
      char* t355 = __s352;
      unsigned long r356 = __gnu_cxx__char_traits_char___length(t355);
      __retval353 = r356;
      unsigned long t357 = __retval353;
      return t357;
    }
  char* t358 = __s352;
  unsigned long r359 = strlen(t358);
  __retval353 = r359;
  unsigned long t360 = __retval353;
  return t360;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v361, char* v362) {
bb363:
  char* __c1364;
  char* __c2365;
  _Bool __retval366;
  __c1364 = v361;
  __c2365 = v362;
  char* t367 = __c1364;
  char t368 = *t367;
  unsigned char cast369 = (unsigned char)t368;
  int cast370 = (int)cast369;
  char* t371 = __c2365;
  char t372 = *t371;
  unsigned char cast373 = (unsigned char)t372;
  int cast374 = (int)cast373;
  _Bool c375 = ((cast370 < cast374)) ? 1 : 0;
  __retval366 = c375;
  _Bool t376 = __retval366;
  return t376;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v377, char* v378, unsigned long v379) {
bb380:
  char* __s1381;
  char* __s2382;
  unsigned long __n383;
  int __retval384;
  __s1381 = v377;
  __s2382 = v378;
  __n383 = v379;
    unsigned long t385 = __n383;
    unsigned long c386 = 0;
    _Bool c387 = ((t385 == c386)) ? 1 : 0;
    if (c387) {
      int c388 = 0;
      __retval384 = c388;
      int t389 = __retval384;
      return t389;
    }
    _Bool r390 = std____is_constant_evaluated();
    if (r390) {
        unsigned long __i391;
        unsigned long c392 = 0;
        __i391 = c392;
        while (1) {
          unsigned long t394 = __i391;
          unsigned long t395 = __n383;
          _Bool c396 = ((t394 < t395)) ? 1 : 0;
          if (!c396) break;
            unsigned long t397 = __i391;
            char* t398 = __s1381;
            char* ptr399 = &(t398)[t397];
            unsigned long t400 = __i391;
            char* t401 = __s2382;
            char* ptr402 = &(t401)[t400];
            _Bool r403 = std__char_traits_char___lt(ptr399, ptr402);
            if (r403) {
              int c404 = -1;
              __retval384 = c404;
              int t405 = __retval384;
              int ret_val406 = t405;
              return ret_val406;
            } else {
                unsigned long t407 = __i391;
                char* t408 = __s2382;
                char* ptr409 = &(t408)[t407];
                unsigned long t410 = __i391;
                char* t411 = __s1381;
                char* ptr412 = &(t411)[t410];
                _Bool r413 = std__char_traits_char___lt(ptr409, ptr412);
                if (r413) {
                  int c414 = 1;
                  __retval384 = c414;
                  int t415 = __retval384;
                  int ret_val416 = t415;
                  return ret_val416;
                }
            }
        for_step393: ;
          unsigned long t417 = __i391;
          unsigned long u418 = t417 + 1;
          __i391 = u418;
        }
      int c419 = 0;
      __retval384 = c419;
      int t420 = __retval384;
      return t420;
    }
  char* t421 = __s1381;
  void* cast422 = (void*)t421;
  char* t423 = __s2382;
  void* cast424 = (void*)t423;
  unsigned long t425 = __n383;
  int r426 = memcmp(cast422, cast424, t425);
  __retval384 = r426;
  int t427 = __retval384;
  return t427;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v428) {
bb429:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this430;
  char* __retval431;
  this430 = v428;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t432 = this430;
  char* t433 = t432->_M_dataplus._M_p;
  __retval431 = t433;
  char* t434 = __retval431;
  return t434;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v435) {
bb436:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this437;
  char* __retval438;
  this437 = v435;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t439 = this437;
  char* r440 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t439);
  __retval438 = r440;
  char* t441 = __retval438;
  return t441;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v442, char* v443) {
bb444:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs445;
  char* __rhs446;
  _Bool __retval447;
  __lhs445 = v442;
  __rhs446 = v443;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t448 = __lhs445;
  unsigned long r449 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t448);
  char* t450 = __rhs446;
  unsigned long r451 = std__char_traits_char___length(t450);
  _Bool c452 = ((r449 == r451)) ? 1 : 0;
  _Bool ternary453;
  if (c452) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t454 = __lhs445;
    char* r455 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t454);
    char* t456 = __rhs446;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t457 = __lhs445;
    unsigned long r458 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t457);
    int r459 = std__char_traits_char___compare(r455, t456, r458);
    _Bool cast460 = (_Bool)r459;
    _Bool u461 = !cast460;
    ternary453 = (_Bool)u461;
  } else {
    _Bool c462 = 0;
    ternary453 = (_Bool)c462;
  }
  __retval447 = ternary453;
  _Bool t463 = __retval447;
  return t463;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v464, struct std__allocator_char_* v465) {
bb466:
  struct std__allocator_char_* this467;
  struct std__allocator_char_* __a468;
  this467 = v464;
  __a468 = v465;
  struct std__allocator_char_* t469 = this467;
  struct std____new_allocator_char_* base470 = (struct std____new_allocator_char_*)((char *)t469 + 0);
  struct std__allocator_char_* t471 = __a468;
  struct std____new_allocator_char_* base472 = (struct std____new_allocator_char_*)((char *)t471 + 0);
  std____new_allocator_char_____new_allocator(base470, base472);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13get_allocatorEv
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v473) {
bb474:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this475;
  struct std__allocator_char_ __retval476;
  this475 = v473;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t477 = this475;
  struct std__allocator_char_* r478 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t477);
  std__allocator_char___allocator(&__retval476, r478);
  struct std__allocator_char_ t479 = __retval476;
  return t479;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v480, struct std__allocator_char_* v481) {
bb482:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this483;
  struct std__allocator_char_* __a484;
  this483 = v480;
  __a484 = v481;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t485 = this483;
  char* r486 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t485);
  struct std__allocator_char_* t487 = __a484;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t485->_M_dataplus, r486, t487);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t485);
    unsigned long c488 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t485, c488);
  return;
}

// function: _ZNKSt15basic_streambufIcSt11char_traitsIcEE4pptrEv
char* std__basic_streambuf_char__std__char_traits_char_____pptr___const(struct std__basic_streambuf_char__std__char_traits_char__* v489) {
bb490:
  struct std__basic_streambuf_char__std__char_traits_char__* this491;
  char* __retval492;
  this491 = v489;
  struct std__basic_streambuf_char__std__char_traits_char__* t493 = this491;
  char* t494 = t493->_M_out_cur;
  __retval492 = t494;
  char* t495 = __retval492;
  return t495;
}

// function: _ZNKSt15basic_streambufIcSt11char_traitsIcEE5egptrEv
char* std__basic_streambuf_char__std__char_traits_char_____egptr___const(struct std__basic_streambuf_char__std__char_traits_char__* v496) {
bb497:
  struct std__basic_streambuf_char__std__char_traits_char__* this498;
  char* __retval499;
  this498 = v496;
  struct std__basic_streambuf_char__std__char_traits_char__* t500 = this498;
  char* t501 = t500->_M_in_end;
  __retval499 = t501;
  char* t502 = __retval499;
  return t502;
}

// function: _ZNKSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEE12_M_high_markEv
char* std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______M_high_mark___const(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* v503) {
bb504:
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* this505;
  char* __retval506;
  this505 = v503;
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* t507 = this505;
    char* __pptr508;
    struct std__basic_streambuf_char__std__char_traits_char__* base509 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t507 + 0);
    char* r510 = std__basic_streambuf_char__std__char_traits_char_____pptr___const(base509);
    __pptr508 = r510;
    char* t511 = __pptr508;
    _Bool cast512 = (_Bool)t511;
    if (cast512) {
      char* __egptr513;
      struct std__basic_streambuf_char__std__char_traits_char__* base514 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t507 + 0);
      char* r515 = std__basic_streambuf_char__std__char_traits_char_____egptr___const(base514);
      __egptr513 = r515;
        char* t516 = __egptr513;
        _Bool cast517 = (_Bool)t516;
        _Bool u518 = !cast517;
        _Bool ternary519;
        if (u518) {
          _Bool c520 = 1;
          ternary519 = (_Bool)c520;
        } else {
          char* t521 = __pptr508;
          char* t522 = __egptr513;
          _Bool c523 = ((t521 > t522)) ? 1 : 0;
          ternary519 = (_Bool)c523;
        }
        if (ternary519) {
          char* t524 = __pptr508;
          __retval506 = t524;
          char* t525 = __retval506;
          return t525;
        } else {
          char* t526 = __egptr513;
          __retval506 = t526;
          char* t527 = __retval506;
          return t527;
        }
    }
  char* c528 = ((void*)0);
  __retval506 = c528;
  char* t529 = __retval506;
  return t529;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v530, unsigned long v531, unsigned long v532, char* v533) {
bb534:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this535;
  unsigned long __n1536;
  unsigned long __n2537;
  char* __s538;
  this535 = v530;
  __n1536 = v531;
  __n2537 = v532;
  __s538 = v533;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t539 = this535;
    unsigned long r540 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t539);
    unsigned long r541 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t539);
    unsigned long t542 = __n1536;
    unsigned long b543 = r541 - t542;
    unsigned long b544 = r540 - b543;
    unsigned long t545 = __n2537;
    _Bool c546 = ((b544 < t545)) ? 1 : 0;
    if (c546) {
      char* t547 = __s538;
      std____throw_length_error(t547);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v548) {
bb549:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this550;
  unsigned long __retval551;
  unsigned long __sz552;
  this550 = v548;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t553 = this550;
  _Bool r554 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t553);
  unsigned long ternary555;
  if (r554) {
    unsigned long c556 = 15;
    ternary555 = (unsigned long)c556;
  } else {
    unsigned long t557 = t553->field2._M_allocated_capacity;
    ternary555 = (unsigned long)t557;
  }
  __sz552 = ternary555;
    unsigned long t558 = __sz552;
    unsigned long c559 = 15;
    _Bool c560 = ((t558 < c559)) ? 1 : 0;
    _Bool ternary561;
    if (c560) {
      _Bool c562 = 1;
      ternary561 = (_Bool)c562;
    } else {
      unsigned long t563 = __sz552;
      unsigned long r564 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t553);
      _Bool c565 = ((t563 > r564)) ? 1 : 0;
      ternary561 = (_Bool)c565;
    }
    if (ternary561) {
      __builtin_unreachable();
    }
  unsigned long t566 = __sz552;
  __retval551 = t566;
  unsigned long t567 = __retval551;
  return t567;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v568) {
bb569:
  struct std____new_allocator_char_* this570;
  unsigned long __retval571;
  this570 = v568;
  struct std____new_allocator_char_* t572 = this570;
  unsigned long c573 = 9223372036854775807;
  unsigned long c574 = 1;
  unsigned long b575 = c573 / c574;
  __retval571 = b575;
  unsigned long t576 = __retval571;
  return t576;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v577, unsigned long v578, void* v579) {
bb580:
  struct std____new_allocator_char_* this581;
  unsigned long __n582;
  void* unnamed583;
  char* __retval584;
  this581 = v577;
  __n582 = v578;
  unnamed583 = v579;
  struct std____new_allocator_char_* t585 = this581;
    unsigned long t586 = __n582;
    unsigned long r587 = std____new_allocator_char____M_max_size___const(t585);
    _Bool c588 = ((t586 > r587)) ? 1 : 0;
    if (c588) {
        unsigned long t589 = __n582;
        unsigned long c590 = -1;
        unsigned long c591 = 1;
        unsigned long b592 = c590 / c591;
        _Bool c593 = ((t589 > b592)) ? 1 : 0;
        if (c593) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c594 = 1;
    unsigned long c595 = 16;
    _Bool c596 = ((c594 > c595)) ? 1 : 0;
    if (c596) {
      unsigned long __al597;
      unsigned long c598 = 1;
      __al597 = c598;
      unsigned long t599 = __n582;
      unsigned long c600 = 1;
      unsigned long b601 = t599 * c600;
      unsigned long t602 = __al597;
      void* r603 = operator_new_2(b601, t602);
      char* cast604 = (char*)r603;
      __retval584 = cast604;
      char* t605 = __retval584;
      return t605;
    }
  unsigned long t606 = __n582;
  unsigned long c607 = 1;
  unsigned long b608 = t606 * c607;
  void* r609 = operator_new(b608);
  char* cast610 = (char*)r609;
  __retval584 = cast610;
  char* t611 = __retval584;
  return t611;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v612, unsigned long v613) {
bb614:
  struct std__allocator_char_* this615;
  unsigned long __n616;
  char* __retval617;
  this615 = v612;
  __n616 = v613;
  struct std__allocator_char_* t618 = this615;
    _Bool r619 = std____is_constant_evaluated();
    if (r619) {
        unsigned long t620 = __n616;
        unsigned long c621 = 1;
        unsigned long ovr622;
        _Bool ovf623 = __builtin_mul_overflow(t620, c621, &ovr622);
        __n616 = ovr622;
        if (ovf623) {
          std____throw_bad_array_new_length();
        }
      unsigned long t624 = __n616;
      void* r625 = operator_new(t624);
      char* cast626 = (char*)r625;
      __retval617 = cast626;
      char* t627 = __retval617;
      return t627;
    }
  struct std____new_allocator_char_* base628 = (struct std____new_allocator_char_*)((char *)t618 + 0);
  unsigned long t629 = __n616;
  void* c630 = ((void*)0);
  char* r631 = std____new_allocator_char___allocate(base628, t629, c630);
  __retval617 = r631;
  char* t632 = __retval617;
  return t632;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v633, unsigned long v634) {
bb635:
  struct std__allocator_char_* __a636;
  unsigned long __n637;
  char* __retval638;
  __a636 = v633;
  __n637 = v634;
  struct std__allocator_char_* t639 = __a636;
  unsigned long t640 = __n637;
  char* r641 = std__allocator_char___allocate(t639, t640);
  __retval638 = r641;
  char* t642 = __retval638;
  return t642;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v643, unsigned long v644) {
bb645:
  struct std__allocator_char_* __a646;
  unsigned long __n647;
  char* __retval648;
  char* __p649;
  __a646 = v643;
  __n647 = v644;
  struct std__allocator_char_* t650 = __a646;
  unsigned long t651 = __n647;
  char* r652 = std__allocator_traits_std__allocator_char_____allocate(t650, t651);
  __p649 = r652;
  char* t653 = __p649;
  __retval648 = t653;
  char* t654 = __retval648;
  return t654;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v655, char* v656, unsigned long v657) {
bb658:
  char* __s1659;
  char* __s2660;
  unsigned long __n661;
  char* __retval662;
  __s1659 = v655;
  __s2660 = v656;
  __n661 = v657;
    unsigned long t663 = __n661;
    unsigned long c664 = 0;
    _Bool c665 = ((t663 == c664)) ? 1 : 0;
    if (c665) {
      char* t666 = __s1659;
      __retval662 = t666;
      char* t667 = __retval662;
      return t667;
    }
    _Bool r668 = std____is_constant_evaluated();
    if (r668) {
        unsigned long __i669;
        unsigned long c670 = 0;
        __i669 = c670;
        while (1) {
          unsigned long t672 = __i669;
          unsigned long t673 = __n661;
          _Bool c674 = ((t672 < t673)) ? 1 : 0;
          if (!c674) break;
          char* t675 = __s1659;
          unsigned long t676 = __i669;
          char* ptr677 = &(t675)[t676];
          unsigned long t678 = __i669;
          char* t679 = __s2660;
          char* ptr680 = &(t679)[t678];
          char* r681 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr677, ptr680);
        for_step671: ;
          unsigned long t682 = __i669;
          unsigned long u683 = t682 + 1;
          __i669 = u683;
        }
      char* t684 = __s1659;
      __retval662 = t684;
      char* t685 = __retval662;
      return t685;
    }
  char* t686 = __s1659;
  void* cast687 = (void*)t686;
  char* t688 = __s2660;
  void* cast689 = (void*)t688;
  unsigned long t690 = __n661;
  unsigned long c691 = 1;
  unsigned long b692 = t690 * c691;
  void* r693 = memcpy(cast687, cast689, b692);
  char* t694 = __s1659;
  __retval662 = t694;
  char* t695 = __retval662;
  return t695;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v696, char* v697, unsigned long v698) {
bb699:
  char* __s1700;
  char* __s2701;
  unsigned long __n702;
  char* __retval703;
  __s1700 = v696;
  __s2701 = v697;
  __n702 = v698;
    unsigned long t704 = __n702;
    unsigned long c705 = 0;
    _Bool c706 = ((t704 == c705)) ? 1 : 0;
    if (c706) {
      char* t707 = __s1700;
      __retval703 = t707;
      char* t708 = __retval703;
      return t708;
    }
    _Bool r709 = std____is_constant_evaluated();
    if (r709) {
      char* t710 = __s1700;
      char* t711 = __s2701;
      unsigned long t712 = __n702;
      char* r713 = __gnu_cxx__char_traits_char___copy(t710, t711, t712);
      __retval703 = r713;
      char* t714 = __retval703;
      return t714;
    }
  char* t715 = __s1700;
  void* cast716 = (void*)t715;
  char* t717 = __s2701;
  void* cast718 = (void*)t717;
  unsigned long t719 = __n702;
  void* r720 = memcpy(cast716, cast718, t719);
  char* cast721 = (char*)r720;
  __retval703 = cast721;
  char* t722 = __retval703;
  return t722;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v723, char* v724, unsigned long v725) {
bb726:
  char* __d727;
  char* __s728;
  unsigned long __n729;
  __d727 = v723;
  __s728 = v724;
  __n729 = v725;
    unsigned long t730 = __n729;
    unsigned long c731 = 1;
    _Bool c732 = ((t730 == c731)) ? 1 : 0;
    if (c732) {
      char* t733 = __d727;
      char* t734 = __s728;
      std__char_traits_char___assign(t733, t734);
    } else {
      char* t735 = __d727;
      char* t736 = __s728;
      unsigned long t737 = __n729;
      char* r738 = std__char_traits_char___copy(t735, t736, t737);
    }
  return;
}

// function: _ZNKSt4lessIPKcEclES1_S1_
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* v739, char* v740, char* v741) {
bb742:
  struct std__less_const_char___* this743;
  char* __x744;
  char* __y745;
  _Bool __retval746;
  this743 = v739;
  __x744 = v740;
  __y745 = v741;
  struct std__less_const_char___* t747 = this743;
    _Bool r748 = std____is_constant_evaluated();
    if (r748) {
      char* t749 = __x744;
      char* t750 = __y745;
      _Bool c751 = ((t749 < t750)) ? 1 : 0;
      __retval746 = c751;
      _Bool t752 = __retval746;
      return t752;
    }
  char* t753 = __x744;
  unsigned long cast754 = (unsigned long)t753;
  char* t755 = __y745;
  unsigned long cast756 = (unsigned long)t755;
  _Bool c757 = ((cast754 < cast756)) ? 1 : 0;
  __retval746 = c757;
  _Bool t758 = __retval746;
  return t758;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_disjunctEPKc
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v759, char* v760) {
bb761:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this762;
  char* __s763;
  _Bool __retval764;
  struct std__less_const_char___ ref_tmp0765;
  this762 = v759;
  __s763 = v760;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t766 = this762;
  char* t767 = __s763;
  char* r768 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t766);
  _Bool r769 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp0765, t767, r768);
  _Bool ternary770;
  if (r769) {
    _Bool c771 = 1;
    ternary770 = (_Bool)c771;
  } else {
    struct std__less_const_char___ ref_tmp1772;
    char* r773 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t766);
    unsigned long r774 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t766);
    char* ptr775 = &(r773)[r774];
    char* t776 = __s763;
    _Bool r777 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp1772, ptr775, t776);
    ternary770 = (_Bool)r777;
  }
  __retval764 = ternary770;
  _Bool t778 = __retval764;
  return t778;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign(char* v779, char* v780) {
bb781:
  char* __c1782;
  char* __c2783;
  __c1782 = v779;
  __c2783 = v780;
    _Bool r784 = std____is_constant_evaluated();
    if (r784) {
      char* t785 = __c1782;
      char* t786 = __c2783;
      char* r787 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t785, t786);
    } else {
      char* t788 = __c2783;
      char t789 = *t788;
      char* t790 = __c1782;
      *t790 = t789;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v791, char* v792, unsigned long v793) {
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
        char* t805 = __s2796;
        char* t806 = __s1795;
        _Bool c807 = ((t805 < t806)) ? 1 : 0;
        _Bool isconst808 = 0;
        _Bool ternary809;
        if (isconst808) {
          char* t810 = __s1795;
          char* t811 = __s2796;
          _Bool c812 = ((t810 > t811)) ? 1 : 0;
          ternary809 = (_Bool)c812;
        } else {
          _Bool c813 = 0;
          ternary809 = (_Bool)c813;
        }
        _Bool ternary814;
        if (ternary809) {
          char* t815 = __s1795;
          char* t816 = __s2796;
          unsigned long t817 = __n797;
          char* ptr818 = &(t816)[t817];
          _Bool c819 = ((t815 < ptr818)) ? 1 : 0;
          ternary814 = (_Bool)c819;
        } else {
          _Bool c820 = 0;
          ternary814 = (_Bool)c820;
        }
        if (ternary814) {
            do {
                unsigned long t821 = __n797;
                unsigned long u822 = t821 - 1;
                __n797 = u822;
                unsigned long t823 = __n797;
                char* t824 = __s1795;
                char* ptr825 = &(t824)[t823];
                unsigned long t826 = __n797;
                char* t827 = __s2796;
                char* ptr828 = &(t827)[t826];
                __gnu_cxx__char_traits_char___assign(ptr825, ptr828);
              unsigned long t829 = __n797;
              unsigned long c830 = 0;
              _Bool c831 = ((t829 > c830)) ? 1 : 0;
              if (!c831) break;
            } while (1);
        } else {
          char* t832 = __s1795;
          char* t833 = __s2796;
          unsigned long t834 = __n797;
          char* r835 = __gnu_cxx__char_traits_char___copy(t832, t833, t834);
        }
      char* t836 = __s1795;
      __retval798 = t836;
      char* t837 = __retval798;
      return t837;
    }
  char* t838 = __s1795;
  void* cast839 = (void*)t838;
  char* t840 = __s2796;
  void* cast841 = (void*)t840;
  unsigned long t842 = __n797;
  unsigned long c843 = 1;
  unsigned long b844 = t842 * c843;
  void* r845 = memmove(cast839, cast841, b844);
  char* t846 = __s1795;
  __retval798 = t846;
  char* t847 = __retval798;
  return t847;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v848, char* v849, unsigned long v850) {
bb851:
  char* __s1852;
  char* __s2853;
  unsigned long __n854;
  char* __retval855;
  __s1852 = v848;
  __s2853 = v849;
  __n854 = v850;
    unsigned long t856 = __n854;
    unsigned long c857 = 0;
    _Bool c858 = ((t856 == c857)) ? 1 : 0;
    if (c858) {
      char* t859 = __s1852;
      __retval855 = t859;
      char* t860 = __retval855;
      return t860;
    }
    _Bool r861 = std____is_constant_evaluated();
    if (r861) {
      char* t862 = __s1852;
      char* t863 = __s2853;
      unsigned long t864 = __n854;
      char* r865 = __gnu_cxx__char_traits_char___move(t862, t863, t864);
      __retval855 = r865;
      char* t866 = __retval855;
      return t866;
    }
  char* t867 = __s1852;
  void* cast868 = (void*)t867;
  char* t869 = __s2853;
  void* cast870 = (void*)t869;
  unsigned long t871 = __n854;
  void* r872 = memmove(cast868, cast870, t871);
  char* cast873 = (char*)r872;
  __retval855 = cast873;
  char* t874 = __retval855;
  return t874;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v875, char* v876, unsigned long v877) {
bb878:
  char* __d879;
  char* __s880;
  unsigned long __n881;
  __d879 = v875;
  __s880 = v876;
  __n881 = v877;
    unsigned long t882 = __n881;
    unsigned long c883 = 1;
    _Bool c884 = ((t882 == c883)) ? 1 : 0;
    if (c884) {
      char* t885 = __d879;
      char* t886 = __s880;
      std__char_traits_char___assign(t885, t886);
    } else {
      char* t887 = __d879;
      char* t888 = __s880;
      unsigned long t889 = __n881;
      char* r890 = std__char_traits_char___move(t887, t888, t889);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_replace_coldEPcmPKcmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v891, char* v892, unsigned long v893, char* v894, unsigned long v895, unsigned long v896) {
bb897:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this898;
  char* __p899;
  unsigned long __len1900;
  char* __s901;
  unsigned long __len2902;
  unsigned long __how_much903;
  this898 = v891;
  __p899 = v892;
  __len1900 = v893;
  __s901 = v894;
  __len2902 = v895;
  __how_much903 = v896;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t904 = this898;
    unsigned long t905 = __len2902;
    _Bool cast906 = (_Bool)t905;
    _Bool ternary907;
    if (cast906) {
      unsigned long t908 = __len2902;
      unsigned long t909 = __len1900;
      _Bool c910 = ((t908 <= t909)) ? 1 : 0;
      ternary907 = (_Bool)c910;
    } else {
      _Bool c911 = 0;
      ternary907 = (_Bool)c911;
    }
    if (ternary907) {
      char* t912 = __p899;
      char* t913 = __s901;
      unsigned long t914 = __len2902;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t912, t913, t914);
    }
    unsigned long t915 = __how_much903;
    _Bool cast916 = (_Bool)t915;
    _Bool ternary917;
    if (cast916) {
      unsigned long t918 = __len1900;
      unsigned long t919 = __len2902;
      _Bool c920 = ((t918 != t919)) ? 1 : 0;
      ternary917 = (_Bool)c920;
    } else {
      _Bool c921 = 0;
      ternary917 = (_Bool)c921;
    }
    if (ternary917) {
      char* t922 = __p899;
      unsigned long t923 = __len2902;
      char* ptr924 = &(t922)[t923];
      char* t925 = __p899;
      unsigned long t926 = __len1900;
      char* ptr927 = &(t925)[t926];
      unsigned long t928 = __how_much903;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr924, ptr927, t928);
    }
    unsigned long t929 = __len2902;
    unsigned long t930 = __len1900;
    _Bool c931 = ((t929 > t930)) ? 1 : 0;
    if (c931) {
        char* t932 = __s901;
        unsigned long t933 = __len2902;
        char* ptr934 = &(t932)[t933];
        char* t935 = __p899;
        unsigned long t936 = __len1900;
        char* ptr937 = &(t935)[t936];
        _Bool c938 = ((ptr934 <= ptr937)) ? 1 : 0;
        if (c938) {
          char* t939 = __p899;
          char* t940 = __s901;
          unsigned long t941 = __len2902;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t939, t940, t941);
        } else {
            char* t942 = __s901;
            char* t943 = __p899;
            unsigned long t944 = __len1900;
            char* ptr945 = &(t943)[t944];
            _Bool c946 = ((t942 >= ptr945)) ? 1 : 0;
            if (c946) {
              unsigned long __poff947;
              char* t948 = __s901;
              char* t949 = __p899;
              long diff950 = t948 - t949;
              unsigned long cast951 = (unsigned long)diff950;
              unsigned long t952 = __len2902;
              unsigned long t953 = __len1900;
              unsigned long b954 = t952 - t953;
              unsigned long b955 = cast951 + b954;
              __poff947 = b955;
              char* t956 = __p899;
              char* t957 = __p899;
              unsigned long t958 = __poff947;
              char* ptr959 = &(t957)[t958];
              unsigned long t960 = __len2902;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t956, ptr959, t960);
            } else {
              unsigned long __nleft961;
              char* t962 = __p899;
              unsigned long t963 = __len1900;
              char* ptr964 = &(t962)[t963];
              char* t965 = __s901;
              long diff966 = ptr964 - t965;
              unsigned long cast967 = (unsigned long)diff966;
              __nleft961 = cast967;
              char* t968 = __p899;
              char* t969 = __s901;
              unsigned long t970 = __nleft961;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t968, t969, t970);
              char* t971 = __p899;
              unsigned long t972 = __nleft961;
              char* ptr973 = &(t971)[t972];
              char* t974 = __p899;
              unsigned long t975 = __len2902;
              char* ptr976 = &(t974)[t975];
              unsigned long t977 = __len2902;
              unsigned long t978 = __nleft961;
              unsigned long b979 = t977 - t978;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr973, ptr976, b979);
            }
        }
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v980) {
bb981:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this982;
  unsigned long __retval983;
  this982 = v980;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t984 = this982;
  unsigned long r985 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t984);
  __retval983 = r985;
  unsigned long t986 = __retval983;
  return t986;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v987, unsigned long* v988, unsigned long v989) {
bb990:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this991;
  unsigned long* __capacity992;
  unsigned long __old_capacity993;
  char* __retval994;
  this991 = v987;
  __capacity992 = v988;
  __old_capacity993 = v989;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t995 = this991;
    unsigned long* t996 = __capacity992;
    unsigned long t997 = *t996;
    unsigned long r998 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t995);
    _Bool c999 = ((t997 > r998)) ? 1 : 0;
    if (c999) {
      char* cast1000 = (char*)&(_str_8);
      std____throw_length_error(cast1000);
    }
    unsigned long* t1001 = __capacity992;
    unsigned long t1002 = *t1001;
    unsigned long t1003 = __old_capacity993;
    _Bool c1004 = ((t1002 > t1003)) ? 1 : 0;
    _Bool ternary1005;
    if (c1004) {
      unsigned long* t1006 = __capacity992;
      unsigned long t1007 = *t1006;
      unsigned long c1008 = 2;
      unsigned long t1009 = __old_capacity993;
      unsigned long b1010 = c1008 * t1009;
      _Bool c1011 = ((t1007 < b1010)) ? 1 : 0;
      ternary1005 = (_Bool)c1011;
    } else {
      _Bool c1012 = 0;
      ternary1005 = (_Bool)c1012;
    }
    if (ternary1005) {
      unsigned long c1013 = 2;
      unsigned long t1014 = __old_capacity993;
      unsigned long b1015 = c1013 * t1014;
      unsigned long* t1016 = __capacity992;
      *t1016 = b1015;
        unsigned long* t1017 = __capacity992;
        unsigned long t1018 = *t1017;
        unsigned long r1019 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t995);
        _Bool c1020 = ((t1018 > r1019)) ? 1 : 0;
        if (c1020) {
          unsigned long r1021 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t995);
          unsigned long* t1022 = __capacity992;
          *t1022 = r1021;
        }
    }
  struct std__allocator_char_* r1023 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t995);
  unsigned long* t1024 = __capacity992;
  unsigned long t1025 = *t1024;
  unsigned long c1026 = 1;
  unsigned long b1027 = t1025 + c1026;
  char* r1028 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1023, b1027);
  __retval994 = r1028;
  char* t1029 = __retval994;
  return t1029;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1030, char* v1031) {
bb1032:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1033;
  char* __p1034;
  this1033 = v1030;
  __p1034 = v1031;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1035 = this1033;
  char* t1036 = __p1034;
  t1035->_M_dataplus._M_p = t1036;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1037, unsigned long v1038) {
bb1039:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1040;
  unsigned long __capacity1041;
  this1040 = v1037;
  __capacity1041 = v1038;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1042 = this1040;
  unsigned long t1043 = __capacity1041;
  t1042->field2._M_allocated_capacity = t1043;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1044, unsigned long v1045, unsigned long v1046, char* v1047, unsigned long v1048) {
bb1049:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1050;
  unsigned long __pos1051;
  unsigned long __len11052;
  char* __s1053;
  unsigned long __len21054;
  unsigned long __how_much1055;
  unsigned long __new_capacity1056;
  char* __r1057;
  this1050 = v1044;
  __pos1051 = v1045;
  __len11052 = v1046;
  __s1053 = v1047;
  __len21054 = v1048;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1058 = this1050;
  unsigned long r1059 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t1058);
  unsigned long t1060 = __pos1051;
  unsigned long b1061 = r1059 - t1060;
  unsigned long t1062 = __len11052;
  unsigned long b1063 = b1061 - t1062;
  __how_much1055 = b1063;
  unsigned long r1064 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t1058);
  unsigned long t1065 = __len21054;
  unsigned long b1066 = r1064 + t1065;
  unsigned long t1067 = __len11052;
  unsigned long b1068 = b1066 - t1067;
  __new_capacity1056 = b1068;
  unsigned long r1069 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t1058);
  char* r1070 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1058, &__new_capacity1056, r1069);
  __r1057 = r1070;
    unsigned long t1071 = __pos1051;
    _Bool cast1072 = (_Bool)t1071;
    if (cast1072) {
      char* t1073 = __r1057;
      char* r1074 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1058);
      unsigned long t1075 = __pos1051;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1073, r1074, t1075);
    }
    char* t1076 = __s1053;
    _Bool cast1077 = (_Bool)t1076;
    _Bool ternary1078;
    if (cast1077) {
      unsigned long t1079 = __len21054;
      _Bool cast1080 = (_Bool)t1079;
      ternary1078 = (_Bool)cast1080;
    } else {
      _Bool c1081 = 0;
      ternary1078 = (_Bool)c1081;
    }
    if (ternary1078) {
      char* t1082 = __r1057;
      unsigned long t1083 = __pos1051;
      char* ptr1084 = &(t1082)[t1083];
      char* t1085 = __s1053;
      unsigned long t1086 = __len21054;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr1084, t1085, t1086);
    }
    unsigned long t1087 = __how_much1055;
    _Bool cast1088 = (_Bool)t1087;
    if (cast1088) {
      char* t1089 = __r1057;
      unsigned long t1090 = __pos1051;
      char* ptr1091 = &(t1089)[t1090];
      unsigned long t1092 = __len21054;
      char* ptr1093 = &(ptr1091)[t1092];
      char* r1094 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1058);
      unsigned long t1095 = __pos1051;
      char* ptr1096 = &(r1094)[t1095];
      unsigned long t1097 = __len11052;
      char* ptr1098 = &(ptr1096)[t1097];
      unsigned long t1099 = __how_much1055;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr1093, ptr1098, t1099);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1058);
  char* t1100 = __r1057;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1058, t1100);
  unsigned long t1101 = __new_capacity1056;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1058, t1101);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1102, unsigned long v1103, unsigned long v1104, char* v1105, unsigned long v1106) {
bb1107:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1108;
  unsigned long __pos1109;
  unsigned long __len11110;
  char* __s1111;
  unsigned long __len21112;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1113;
  unsigned long __old_size1114;
  unsigned long __new_size1115;
  this1108 = v1102;
  __pos1109 = v1103;
  __len11110 = v1104;
  __s1111 = v1105;
  __len21112 = v1106;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1116 = this1108;
  unsigned long t1117 = __len11110;
  unsigned long t1118 = __len21112;
  char* cast1119 = (char*)&(_str_7);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t1116, t1117, t1118, cast1119);
  unsigned long r1120 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1116);
  __old_size1114 = r1120;
  unsigned long t1121 = __old_size1114;
  unsigned long t1122 = __len21112;
  unsigned long b1123 = t1121 + t1122;
  unsigned long t1124 = __len11110;
  unsigned long b1125 = b1123 - t1124;
  __new_size1115 = b1125;
    unsigned long t1126 = __new_size1115;
    unsigned long r1127 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t1116);
    _Bool c1128 = ((t1126 <= r1127)) ? 1 : 0;
    if (c1128) {
      char* __p1129;
      unsigned long __how_much1130;
      char* r1131 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1116);
      unsigned long t1132 = __pos1109;
      char* ptr1133 = &(r1131)[t1132];
      __p1129 = ptr1133;
      unsigned long t1134 = __old_size1114;
      unsigned long t1135 = __pos1109;
      unsigned long b1136 = t1134 - t1135;
      unsigned long t1137 = __len11110;
      unsigned long b1138 = b1136 - t1137;
      __how_much1130 = b1138;
        _Bool r1139 = std__is_constant_evaluated();
        if (r1139) {
          char* __newp1140;
          struct std__allocator_char_* r1141 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1116);
          unsigned long t1142 = __new_size1115;
          char* r1143 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1141, t1142);
          __newp1140 = r1143;
          char* t1144 = __newp1140;
          char* r1145 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1116);
          unsigned long t1146 = __pos1109;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1144, r1145, t1146);
          char* t1147 = __newp1140;
          unsigned long t1148 = __pos1109;
          char* ptr1149 = &(t1147)[t1148];
          char* t1150 = __s1111;
          unsigned long t1151 = __len21112;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr1149, t1150, t1151);
          char* t1152 = __newp1140;
          unsigned long t1153 = __pos1109;
          char* ptr1154 = &(t1152)[t1153];
          unsigned long t1155 = __len21112;
          char* ptr1156 = &(ptr1154)[t1155];
          char* t1157 = __p1129;
          unsigned long t1158 = __len11110;
          char* ptr1159 = &(t1157)[t1158];
          unsigned long t1160 = __how_much1130;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr1156, ptr1159, t1160);
          char* r1161 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1116);
          char* t1162 = __newp1140;
          unsigned long t1163 = __new_size1115;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1161, t1162, t1163);
          struct std__allocator_char_* r1164 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1116);
          char* t1165 = __newp1140;
          unsigned long t1166 = __new_size1115;
          std__allocator_char___deallocate(r1164, t1165, t1166);
        } else {
            char* t1167 = __s1111;
            _Bool r1168 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(t1116, t1167);
            if (r1168) {
                unsigned long t1169 = __how_much1130;
                _Bool cast1170 = (_Bool)t1169;
                _Bool ternary1171;
                if (cast1170) {
                  unsigned long t1172 = __len11110;
                  unsigned long t1173 = __len21112;
                  _Bool c1174 = ((t1172 != t1173)) ? 1 : 0;
                  ternary1171 = (_Bool)c1174;
                } else {
                  _Bool c1175 = 0;
                  ternary1171 = (_Bool)c1175;
                }
                if (ternary1171) {
                  char* t1176 = __p1129;
                  unsigned long t1177 = __len21112;
                  char* ptr1178 = &(t1176)[t1177];
                  char* t1179 = __p1129;
                  unsigned long t1180 = __len11110;
                  char* ptr1181 = &(t1179)[t1180];
                  unsigned long t1182 = __how_much1130;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr1178, ptr1181, t1182);
                }
                unsigned long t1183 = __len21112;
                _Bool cast1184 = (_Bool)t1183;
                if (cast1184) {
                  char* t1185 = __p1129;
                  char* t1186 = __s1111;
                  unsigned long t1187 = __len21112;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1185, t1186, t1187);
                }
            } else {
              char* t1188 = __p1129;
              unsigned long t1189 = __len11110;
              char* t1190 = __s1111;
              unsigned long t1191 = __len21112;
              unsigned long t1192 = __how_much1130;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(t1116, t1188, t1189, t1190, t1191, t1192);
            }
        }
    } else {
      unsigned long t1193 = __pos1109;
      unsigned long t1194 = __len11110;
      char* t1195 = __s1111;
      unsigned long t1196 = __len21112;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t1116, t1193, t1194, t1195, t1196);
    }
  unsigned long t1197 = __new_size1115;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1116, t1197);
  __retval1113 = t1116;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1198 = __retval1113;
  return t1198;
}

// function: _ZSt12__niter_baseIPcET_S1_
char* char__std____niter_base_char__(char* v1199) {
bb1200:
  char* __it1201;
  char* __retval1202;
  __it1201 = v1199;
  char* t1203 = __it1201;
  __retval1202 = t1203;
  char* t1204 = __retval1202;
  return t1204;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignIPcvEERS4_T_S8_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_char___void_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1205, char* v1206, char* v1207) {
bb1208:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1209;
  char* __first1210;
  char* __last1211;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1212;
  this1209 = v1205;
  __first1210 = v1206;
  __last1211 = v1207;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1213 = this1209;
    unsigned long c1214 = 0;
    unsigned long r1215 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1213);
    char* t1216 = __first1210;
    char* r1217 = char__std____niter_base_char__(t1216);
    char* t1218 = __last1211;
    char* t1219 = __first1210;
    long diff1220 = t1218 - t1219;
    unsigned long cast1221 = (unsigned long)diff1220;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1222 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t1213, c1214, r1215, r1217, cast1221);
    __retval1212 = r1222;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1223 = __retval1212;
    return t1223;
  abort();
}

// function: _ZNKSt15basic_streambufIcSt11char_traitsIcEE5pbaseEv
char* std__basic_streambuf_char__std__char_traits_char_____pbase___const(struct std__basic_streambuf_char__std__char_traits_char__* v1224) {
bb1225:
  struct std__basic_streambuf_char__std__char_traits_char__* this1226;
  char* __retval1227;
  this1226 = v1224;
  struct std__basic_streambuf_char__std__char_traits_char__* t1228 = this1226;
  char* t1229 = t1228->_M_out_beg;
  __retval1227 = t1229;
  char* t1230 = __retval1227;
  return t1230;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_copy_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_copy_assign() {
bb1231:
  _Bool __retval1232;
  _Bool t1233 = _ZNSt17integral_constantIbLb0EE5valueE;
  __retval1232 = t1233;
  _Bool t1234 = __retval1232;
  return t1234;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE15_S_always_equalEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_always_equal() {
bb1235:
  _Bool __retval1236;
  _Bool t1237 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval1236 = t1237;
  _Bool t1238 = __retval1236;
  return t1238;
}

// function: _ZSteqRKSaIcES1_
_Bool std__operator__(struct std__allocator_char_* v1239, struct std__allocator_char_* v1240) {
bb1241:
  struct std__allocator_char_* unnamed1242;
  struct std__allocator_char_* unnamed1243;
  _Bool __retval1244;
  unnamed1242 = v1239;
  unnamed1243 = v1240;
  _Bool c1245 = 1;
  __retval1244 = c1245;
  _Bool t1246 = __retval1244;
  return t1246;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1247) {
bb1248:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1249;
  char* __retval1250;
  this1249 = v1247;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1251 = this1249;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1251);
  char* r1252 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t1251);
  __retval1250 = r1252;
  char* t1253 = __retval1250;
  return t1253;
}

// function: _ZSt15__alloc_on_copyISaIcEEvRT_RKS1_
void void_std____alloc_on_copy_std__allocator_char___(struct std__allocator_char_* v1254, struct std__allocator_char_* v1255) {
bb1256:
  struct std__allocator_char_* __one1257;
  struct std__allocator_char_* __two1258;
  __one1257 = v1254;
  __two1258 = v1255;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1259, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1260) {
bb1261:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1262;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1263;
  this1262 = v1259;
  __str1263 = v1260;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1264 = this1262;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1265 = __str1263;
    _Bool c1266 = ((t1264 != t1265)) ? 1 : 0;
    if (c1266) {
      unsigned long __rsize1267;
      unsigned long __capacity1268;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1269 = __str1263;
      unsigned long r1270 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t1269);
      __rsize1267 = r1270;
      unsigned long r1271 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t1264);
      __capacity1268 = r1271;
        unsigned long t1272 = __rsize1267;
        unsigned long t1273 = __capacity1268;
        _Bool c1274 = ((t1272 > t1273)) ? 1 : 0;
        if (c1274) {
          unsigned long __new_capacity1275;
          char* __tmp1276;
          unsigned long t1277 = __rsize1267;
          __new_capacity1275 = t1277;
          unsigned long t1278 = __capacity1268;
          char* r1279 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1264, &__new_capacity1275, t1278);
          __tmp1276 = r1279;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1264);
          char* t1280 = __tmp1276;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1264, t1280);
          unsigned long t1281 = __new_capacity1275;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1264, t1281);
        }
        unsigned long t1282 = __rsize1267;
        _Bool cast1283 = (_Bool)t1282;
        if (cast1283) {
          char* r1284 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1264);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1285 = __str1263;
          char* r1286 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1285);
          unsigned long t1287 = __rsize1267;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1284, r1286, t1287);
        }
      unsigned long t1288 = __rsize1267;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1264, t1288);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignERKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1289, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1290) {
bb1291:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1292;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1293;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1294;
  this1292 = v1289;
  __str1293 = v1290;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1295 = this1292;
    _Bool r1296 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_copy_assign();
    if (r1296) {
        _Bool r1297 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_always_equal();
        _Bool u1298 = !r1297;
        _Bool ternary1299;
        if (u1298) {
          _Bool r1300 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1295);
          _Bool u1301 = !r1300;
          ternary1299 = (_Bool)u1301;
        } else {
          _Bool c1302 = 0;
          ternary1299 = (_Bool)c1302;
        }
        _Bool ternary1303;
        if (ternary1299) {
          struct std__allocator_char_* r1304 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1295);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1305 = __str1293;
          struct std__allocator_char_* r1306 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1305);
          _Bool r1307 = std__operator__(r1304, r1306);
          _Bool u1308 = !r1307;
          ternary1303 = (_Bool)u1308;
        } else {
          _Bool c1309 = 0;
          ternary1303 = (_Bool)c1309;
        }
        if (ternary1303) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1310 = __str1293;
            unsigned long r1311 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1310);
            unsigned long c1312 = 15;
            _Bool c1313 = ((r1311 <= c1312)) ? 1 : 0;
            if (c1313) {
              unsigned long t1314 = t1295->field2._M_allocated_capacity;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1295, t1314);
              char* r1315 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t1295);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1295, r1315);
              unsigned long c1316 = 0;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1295, c1316);
            } else {
              unsigned long __len1317;
              struct std__allocator_char_ __alloc1318;
              char* __ptr1319;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1320 = __str1293;
              unsigned long r1321 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1320);
              __len1317 = r1321;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1322 = __str1293;
              struct std__allocator_char_* r1323 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1322);
              std__allocator_char___allocator(&__alloc1318, r1323);
              unsigned long t1324 = __len1317;
              unsigned long c1325 = 1;
              unsigned long b1326 = t1324 + c1325;
              char* r1327 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(&__alloc1318, b1326);
              __ptr1319 = r1327;
              unsigned long t1328 = t1295->field2._M_allocated_capacity;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1295, t1328);
              char* t1329 = __ptr1319;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1295, t1329);
              unsigned long t1330 = __len1317;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1295, t1330);
              unsigned long t1331 = __len1317;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1295, t1331);
            }
        }
      struct std__allocator_char_* r1332 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1295);
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1333 = __str1293;
      struct std__allocator_char_* r1334 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1333);
      void_std____alloc_on_copy_std__allocator_char___(r1332, r1334);
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1335 = __str1293;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t1295, t1335);
  __retval1294 = t1295;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1336 = __retval1294;
  return t1336;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSERKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1337, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1338) {
bb1339:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1340;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1341;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1342;
  this1340 = v1337;
  __str1341 = v1338;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1343 = this1340;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1344 = __str1341;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1345 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(t1343, t1344);
  __retval1342 = r1345;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1346 = __retval1342;
  return t1346;
}

// function: _ZNKRSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEE3strEv
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char_____str___const__(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* v1347) {
bb1348:
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* this1349;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval1350;
  _Bool nrvo1351;
  struct std__allocator_char_ ref_tmp01352;
  this1349 = v1347;
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* t1353 = this1349;
  _Bool c1354 = 0;
  nrvo1351 = c1354;
  struct std__allocator_char_ r1355 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(&t1353->_M_string);
  ref_tmp01352 = r1355;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&__retval1350, &ref_tmp01352);
  {
    std__allocator_char____allocator(&ref_tmp01352);
  }
      char* __hi1356;
      char* r1357 = std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______M_high_mark___const(t1353);
      __hi1356 = r1357;
      char* t1358 = __hi1356;
      _Bool cast1359 = (_Bool)t1358;
      if (cast1359) {
        struct std__basic_streambuf_char__std__char_traits_char__* base1360 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t1353 + 0);
        char* r1361 = std__basic_streambuf_char__std__char_traits_char_____pbase___const(base1360);
        char* t1362 = __hi1356;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1363 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_char___void_(&__retval1350, r1361, t1362);
      } else {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1364 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&__retval1350, &t1353->_M_string);
      }
    _Bool c1365 = 1;
    nrvo1351 = c1365;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1366 = __retval1350;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ret_val1367 = t1366;
    {
      _Bool t1368 = nrvo1351;
      _Bool u1369 = !t1368;
      if (u1369) {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&__retval1350);
      }
    }
    return ret_val1367;
  abort();
}

// function: _ZNKRSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEE3strEv
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____str___const__(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* v1370) {
bb1371:
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* this1372;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval1373;
  this1372 = v1370;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* t1374 = this1372;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1375 = std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char_____str___const__(&t1374->_M_stringbuf);
  __retval1373 = r1375;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1376 = __retval1373;
  return t1376;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1377) {
bb1378:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1379;
  this1379 = v1377;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1380 = this1379;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1380);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1380->_M_dataplus);
  }
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_a
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1381, char v1382) {
bb1383:
  struct std__basic_ostream_char__std__char_traits_char__* __out1384;
  char __c1385;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1386;
  __out1384 = v1381;
  __c1385 = v1382;
  struct std__basic_ostream_char__std__char_traits_char__* t1387 = __out1384;
  char t1388 = __c1385;
  struct std__basic_ostream_char__std__char_traits_char__* r1389 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(t1387, t1388);
  __retval1386 = r1389;
  struct std__basic_ostream_char__std__char_traits_char__* t1390 = __retval1386;
  return t1390;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_h
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____3(struct std__basic_ostream_char__std__char_traits_char__* v1391, unsigned char v1392) {
bb1393:
  struct std__basic_ostream_char__std__char_traits_char__* __out1394;
  unsigned char __c1395;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1396;
  __out1394 = v1391;
  __c1395 = v1392;
  struct std__basic_ostream_char__std__char_traits_char__* t1397 = __out1394;
  unsigned char t1398 = __c1395;
  char cast1399 = (char)t1398;
  struct std__basic_ostream_char__std__char_traits_char__* r1400 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(t1397, cast1399);
  __retval1396 = r1400;
  struct std__basic_ostream_char__std__char_traits_char__* t1401 = __retval1396;
  return t1401;
}

// function: _ZNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream_2(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* v1402, void** v1403) {
bb1404:
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* this1405;
  void** vtt1406;
  this1405 = v1402;
  vtt1406 = v1403;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* t1407 = this1405;
  void** t1408 = vtt1406;
    {
      std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______basic_stringbuf(&t1407->_M_stringbuf);
    }
  {
    struct std__basic_iostream_char__std__char_traits_char__* base1409 = (struct std__basic_iostream_char__std__char_traits_char__*)((char *)t1407 + 0);
    static void *vtt_slot1410 = 0;
    void** vtt1411 = (void**)&vtt_slot1410;
    std__basic_iostream_char__std__char_traits_char______basic_iostream(base1409, vtt1411);
  }
  return;
}

// function: _ZNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEED1Ev
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* v1412) {
bb1413:
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* this1414;
  this1414 = v1412;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* t1415 = this1414;
    static void *vtt_slot1416 = 0;
    void** vtt1417 = (void**)&vtt_slot1416;
    std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream_2(t1415, vtt1417);
  {
    struct std__basic_ios_char__std__char_traits_char__* base1418 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1415 + 128);
    std__basic_ios_char__std__char_traits_char______basic_ios(base1418);
  }
  return;
}

// function: main
int main() {
bb1419:
  int __retval1420;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__ oss1421;
  char val11422;
  char val21423;
  unsigned char val31424;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp01425;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp11426;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp21427;
  int c1428 = 0;
  __retval1420 = c1428;
  std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____basic_stringstream(&oss1421);
    char c1429 = 88;
    val11422 = c1429;
    char c1430 = 89;
    val21423 = c1430;
    unsigned char c1431 = 90;
    val31424 = c1431;
    struct std__basic_ostream_char__std__char_traits_char__* base1432 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(oss1421) + 16);
    char t1433 = val11422;
    struct std__basic_ostream_char__std__char_traits_char__* r1434 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(base1432, t1433);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1435 = std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____str___const__(&oss1421);
    ref_tmp01425 = r1435;
      char* cast1436 = (char*)&(_str);
      _Bool r1437 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&ref_tmp01425, cast1436);
      if (r1437) {
      } else {
        char* cast1438 = (char*)&(_str_1);
        char* c1439 = _str_2;
        unsigned int c1440 = 23;
        char* cast1441 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast1438, c1439, c1440, cast1441);
      }
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp01425);
    }
    struct std__basic_ostream_char__std__char_traits_char__* base1442 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(oss1421) + 16);
    char t1443 = val21423;
    struct std__basic_ostream_char__std__char_traits_char__* r1444 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(base1442, t1443);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1445 = std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____str___const__(&oss1421);
    ref_tmp11426 = r1445;
      char* cast1446 = (char*)&(_str_3);
      _Bool r1447 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&ref_tmp11426, cast1446);
      if (r1447) {
      } else {
        char* cast1448 = (char*)&(_str_4);
        char* c1449 = _str_2;
        unsigned int c1450 = 26;
        char* cast1451 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast1448, c1449, c1450, cast1451);
      }
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp11426);
    }
    struct std__basic_ostream_char__std__char_traits_char__* base1452 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(oss1421) + 16);
    unsigned char t1453 = val31424;
    struct std__basic_ostream_char__std__char_traits_char__* r1454 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____3(base1452, t1453);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1455 = std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____str___const__(&oss1421);
    ref_tmp21427 = r1455;
      char* cast1456 = (char*)&(_str_5);
      _Bool r1457 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&ref_tmp21427, cast1456);
      if (r1457) {
      } else {
        char* cast1458 = (char*)&(_str_6);
        char* c1459 = _str_2;
        unsigned int c1460 = 29;
        char* cast1461 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast1458, c1459, c1460, cast1461);
      }
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp21427);
    }
    int c1462 = 0;
    __retval1420 = c1462;
    int t1463 = __retval1420;
    int ret_val1464 = t1463;
    {
      std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(&oss1421);
    }
    return ret_val1464;
  int t1465 = __retval1420;
  return t1465;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1466) {
bb1467:
  char* __r1468;
  char* __retval1469;
  __r1468 = v1466;
  char* t1470 = __r1468;
  __retval1469 = t1470;
  char* t1471 = __retval1469;
  return t1471;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1472) {
bb1473:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1474;
  char* __retval1475;
  this1474 = v1472;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1476 = this1474;
  char* cast1477 = (char*)&(t1476->field2._M_local_buf);
  char* r1478 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1477);
  __retval1475 = r1478;
  char* t1479 = __retval1475;
  return t1479;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1480) {
bb1481:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1482;
  _Bool __retval1483;
  this1482 = v1480;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1484 = this1482;
    char* r1485 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1484);
    char* r1486 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1484);
    _Bool c1487 = ((r1485 == r1486)) ? 1 : 0;
    if (c1487) {
        unsigned long t1488 = t1484->_M_string_length;
        unsigned long c1489 = 15;
        _Bool c1490 = ((t1488 > c1489)) ? 1 : 0;
        if (c1490) {
          __builtin_unreachable();
        }
      _Bool c1491 = 1;
      __retval1483 = c1491;
      _Bool t1492 = __retval1483;
      return t1492;
    }
  _Bool c1493 = 0;
  __retval1483 = c1493;
  _Bool t1494 = __retval1483;
  return t1494;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1495, char* v1496, unsigned long v1497) {
bb1498:
  struct std____new_allocator_char_* this1499;
  char* __p1500;
  unsigned long __n1501;
  this1499 = v1495;
  __p1500 = v1496;
  __n1501 = v1497;
  struct std____new_allocator_char_* t1502 = this1499;
    unsigned long c1503 = 1;
    unsigned long c1504 = 16;
    _Bool c1505 = ((c1503 > c1504)) ? 1 : 0;
    if (c1505) {
      char* t1506 = __p1500;
      void* cast1507 = (void*)t1506;
      unsigned long t1508 = __n1501;
      unsigned long c1509 = 1;
      unsigned long b1510 = t1508 * c1509;
      unsigned long c1511 = 1;
      operator_delete_3(cast1507, b1510, c1511);
      return;
    }
  char* t1512 = __p1500;
  void* cast1513 = (void*)t1512;
  unsigned long t1514 = __n1501;
  unsigned long c1515 = 1;
  unsigned long b1516 = t1514 * c1515;
  operator_delete_2(cast1513, b1516);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1517, char* v1518, unsigned long v1519) {
bb1520:
  struct std__allocator_char_* this1521;
  char* __p1522;
  unsigned long __n1523;
  this1521 = v1517;
  __p1522 = v1518;
  __n1523 = v1519;
  struct std__allocator_char_* t1524 = this1521;
    _Bool r1525 = std____is_constant_evaluated();
    if (r1525) {
      char* t1526 = __p1522;
      void* cast1527 = (void*)t1526;
      operator_delete(cast1527);
      return;
    }
  struct std____new_allocator_char_* base1528 = (struct std____new_allocator_char_*)((char *)t1524 + 0);
  char* t1529 = __p1522;
  unsigned long t1530 = __n1523;
  std____new_allocator_char___deallocate(base1528, t1529, t1530);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1531, char* v1532, unsigned long v1533) {
bb1534:
  struct std__allocator_char_* __a1535;
  char* __p1536;
  unsigned long __n1537;
  __a1535 = v1531;
  __p1536 = v1532;
  __n1537 = v1533;
  struct std__allocator_char_* t1538 = __a1535;
  char* t1539 = __p1536;
  unsigned long t1540 = __n1537;
  std__allocator_char___deallocate(t1538, t1539, t1540);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1541) {
bb1542:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1543;
  struct std__allocator_char_* __retval1544;
  this1543 = v1541;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1545 = this1543;
  struct std__allocator_char_* base1546 = (struct std__allocator_char_*)((char *)&(t1545->_M_dataplus) + 0);
  __retval1544 = base1546;
  struct std__allocator_char_* t1547 = __retval1544;
  return t1547;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1548, unsigned long v1549) {
bb1550:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1551;
  unsigned long __size1552;
  this1551 = v1548;
  __size1552 = v1549;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1553 = this1551;
  struct std__allocator_char_* r1554 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1553);
  char* r1555 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1553);
  unsigned long t1556 = __size1552;
  unsigned long c1557 = 1;
  unsigned long b1558 = t1556 + c1557;
  std__allocator_traits_std__allocator_char_____deallocate(r1554, r1555, b1558);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1559) {
bb1560:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1561;
  this1561 = v1559;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1562 = this1561;
    _Bool r1563 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1562);
    _Bool u1564 = !r1563;
    if (u1564) {
      unsigned long t1565 = t1562->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1562, t1565);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1566) {
bb1567:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1568;
  this1568 = v1566;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1569 = this1568;
  {
    struct std__allocator_char_* base1570 = (struct std__allocator_char_*)((char *)t1569 + 0);
    std__allocator_char____allocator(base1570);
  }
  return;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEEC2Ev
void std__basic_streambuf_char__std__char_traits_char_____basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v1571) {
bb1572:
  struct std__basic_streambuf_char__std__char_traits_char__* this1573;
  this1573 = v1571;
  struct std__basic_streambuf_char__std__char_traits_char__* t1574 = this1573;
  void* v1575 = (void*)&_ZTVSt15basic_streambufIcSt11char_traitsIcEE[2];
  void** v1576 = (void**)t1574;
  *(void**)(v1576) = (void*)v1575;
  char* c1577 = ((void*)0);
  t1574->_M_in_beg = c1577;
  char* c1578 = ((void*)0);
  t1574->_M_in_cur = c1578;
  char* c1579 = ((void*)0);
  t1574->_M_in_end = c1579;
  char* c1580 = ((void*)0);
  t1574->_M_out_beg = c1580;
  char* c1581 = ((void*)0);
  t1574->_M_out_cur = c1581;
  char* c1582 = ((void*)0);
  t1574->_M_out_end = c1582;
  std__locale__locale(&t1574->_M_buf_locale);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1583) {
bb1584:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1585;
  struct std__allocator_char_ ref_tmp01586;
  this1585 = v1583;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1587 = this1585;
  char* r1588 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t1587);
  std__allocator_char___allocator_2(&ref_tmp01586);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t1587->_M_dataplus, r1588, &ref_tmp01586);
  {
    std__allocator_char____allocator(&ref_tmp01586);
  }
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1587);
    unsigned long c1589 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1587, c1589);
  return;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v1590) {
bb1591:
  struct std__basic_streambuf_char__std__char_traits_char__* this1592;
  this1592 = v1590;
  struct std__basic_streambuf_char__std__char_traits_char__* t1593 = this1592;
  {
    std__locale___locale(&t1593->_M_buf_locale);
  }
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1594) {
bb1595:
  char* __r1596;
  char* __retval1597;
  __r1596 = v1594;
  char* t1598 = __r1596;
  __retval1597 = t1598;
  char* t1599 = __retval1597;
  return t1599;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1600) {
bb1601:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1602;
  char* __retval1603;
  this1602 = v1600;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1604 = this1602;
  char* cast1605 = (char*)&(t1604->field2._M_local_buf);
  char* r1606 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1605);
  __retval1603 = r1606;
  char* t1607 = __retval1603;
  return t1607;
}

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v1608) {
bb1609:
  struct std__allocator_char_* this1610;
  this1610 = v1608;
  struct std__allocator_char_* t1611 = this1610;
  struct std____new_allocator_char_* base1612 = (struct std____new_allocator_char_*)((char *)t1611 + 0);
  std____new_allocator_char_____new_allocator_2(base1612);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1613, char* v1614, struct std__allocator_char_* v1615) {
bb1616:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1617;
  char* __dat1618;
  struct std__allocator_char_* __a1619;
  this1617 = v1613;
  __dat1618 = v1614;
  __a1619 = v1615;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1620 = this1617;
  struct std__allocator_char_* base1621 = (struct std__allocator_char_*)((char *)t1620 + 0);
  struct std__allocator_char_* t1622 = __a1619;
  std__allocator_char___allocator(base1621, t1622);
    char* t1623 = __dat1618;
    t1620->_M_p = t1623;
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v1624) {
bb1625:
  struct std__allocator_char_* this1626;
  this1626 = v1624;
  struct std__allocator_char_* t1627 = this1626;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1628:
  _Bool __retval1629;
    _Bool c1630 = 0;
    __retval1629 = c1630;
    _Bool t1631 = __retval1629;
    return t1631;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1632) {
bb1633:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1634;
  this1634 = v1632;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1635 = this1634;
    _Bool r1636 = std__is_constant_evaluated();
    if (r1636) {
        unsigned long __i1637;
        unsigned long c1638 = 0;
        __i1637 = c1638;
        while (1) {
          unsigned long t1640 = __i1637;
          unsigned long c1641 = 15;
          _Bool c1642 = ((t1640 <= c1641)) ? 1 : 0;
          if (!c1642) break;
          char c1643 = 0;
          unsigned long t1644 = __i1637;
          t1635->field2._M_local_buf[t1644] = c1643;
        for_step1639: ;
          unsigned long t1645 = __i1637;
          unsigned long u1646 = t1645 + 1;
          __i1637 = u1646;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1647, unsigned long v1648) {
bb1649:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1650;
  unsigned long __length1651;
  this1650 = v1647;
  __length1651 = v1648;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1652 = this1650;
  unsigned long t1653 = __length1651;
  t1652->_M_string_length = t1653;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1654, char* v1655) {
bb1656:
  char* __location1657;
  char* __args1658;
  char* __retval1659;
  void* __loc1660;
  __location1657 = v1654;
  __args1658 = v1655;
  char* t1661 = __location1657;
  void* cast1662 = (void*)t1661;
  __loc1660 = cast1662;
    void* t1663 = __loc1660;
    char* cast1664 = (char*)t1663;
    char* t1665 = __args1658;
    char t1666 = *t1665;
    *cast1664 = t1666;
    __retval1659 = cast1664;
    char* t1667 = __retval1659;
    return t1667;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1668, char* v1669) {
bb1670:
  char* __c11671;
  char* __c21672;
  __c11671 = v1668;
  __c21672 = v1669;
    _Bool r1673 = std____is_constant_evaluated();
    if (r1673) {
      char* t1674 = __c11671;
      char* t1675 = __c21672;
      char* r1676 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1674, t1675);
    } else {
      char* t1677 = __c21672;
      char t1678 = *t1677;
      char* t1679 = __c11671;
      *t1679 = t1678;
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1680, unsigned long v1681) {
bb1682:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1683;
  unsigned long __n1684;
  char ref_tmp01685;
  this1683 = v1680;
  __n1684 = v1681;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1686 = this1683;
  unsigned long t1687 = __n1684;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1686, t1687);
  unsigned long t1688 = __n1684;
  char* r1689 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1686);
  char* ptr1690 = &(r1689)[t1688];
  char c1691 = 0;
  ref_tmp01685 = c1691;
  std__char_traits_char___assign(ptr1690, &ref_tmp01685);
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1692) {
bb1693:
  struct std____new_allocator_char_* this1694;
  this1694 = v1692;
  struct std____new_allocator_char_* t1695 = this1694;
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1696, struct std____new_allocator_char_* v1697) {
bb1698:
  struct std____new_allocator_char_* this1699;
  struct std____new_allocator_char_* unnamed1700;
  this1699 = v1696;
  unnamed1700 = v1697;
  struct std____new_allocator_char_* t1701 = this1699;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1702, char* v1703, struct std__allocator_char_* v1704) {
bb1705:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1706;
  char* __dat1707;
  struct std__allocator_char_* __a1708;
  this1706 = v1702;
  __dat1707 = v1703;
  __a1708 = v1704;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1709 = this1706;
  struct std__allocator_char_* base1710 = (struct std__allocator_char_*)((char *)t1709 + 0);
  struct std__allocator_char_* t1711 = __a1708;
  std__allocator_char___allocator(base1710, t1711);
    char* t1712 = __dat1707;
    t1709->_M_p = t1712;
  return;
}

