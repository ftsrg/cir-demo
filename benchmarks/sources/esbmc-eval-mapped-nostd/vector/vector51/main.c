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
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Struct definitions (auto-parsed)
struct _IO_FILE { int __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; char* __field7; char* __field8; char* __field9; char* __field10; char* __field11; struct _IO_marker* __field12; struct _IO_FILE* __field13; int __field14; unsigned char __field15[3]; char __field16[1]; long __field17; unsigned short __field18; char __field19; char __field20[1]; void* __field21; long __field22; struct _IO_codecvt* __field23; struct _IO_wide_data* __field24; struct _IO_FILE* __field25; void* __field26; struct _IO_FILE** __field27; int __field28; int __field29; unsigned long __field30; char __field31[8]; };
struct _IO_codecvt { unsigned char __placeholder; };
struct _IO_marker { unsigned char __placeholder; };
struct _IO_wide_data { unsigned char __placeholder; };
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct __pthread_internal_list { struct __pthread_internal_list* __field0; struct __pthread_internal_list* __field1; };
struct __pthread_mutex_s { int __field0; unsigned int __field1; int __field2; unsigned int __field3; int __field4; short __field5; short __field6; struct __pthread_internal_list __field7; };
union anon_0 { unsigned int __field0; char __field1[4]; };
struct anon_struct_0 { unsigned char* __field0[5]; unsigned char* __field1[5]; };
struct anon_struct_1 { unsigned char* __field0[4]; };
union pthread_mutex_t { struct __pthread_mutex_s __field0; char __field1[40]; long __field2; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____basic_file_char_ { struct _IO_FILE* __field0; _Bool __field1; unsigned char __field2[7]; } __attribute__((packed));
struct std____cmp_cat____unspec { unsigned char __field0; };
struct std____detail___Synth3way { unsigned char __field0; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__strong_ordering { char _M_value; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct __mbstate_t { int __field0; union anon_0 __field1; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std____codecvt_abstract_base_char__char____mbstate_t_ { struct std__locale__facet __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale _M_buf_locale; };
struct std__codecvt_char__char____mbstate_t_ { struct std____codecvt_abstract_base_char__char____mbstate_t_ __field0; struct __locale_struct* __field1; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__fpos___mbstate_t_ { long _M_off; struct __mbstate_t _M_state; };
struct std__ios_base { void* __field0; long __field1; long __field2; int _M_flags; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_filebuf_char__std__char_traits_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; union pthread_mutex_t __field1; struct std____basic_file_char_ _M_file; int __field3; struct __mbstate_t __field4; struct __mbstate_t __field5; struct __mbstate_t __field6; char* __field7; unsigned long __field8; _Bool __field9; _Bool __field10; _Bool __field11; char __field12; char* __field13; char* __field14; _Bool __field15; struct std__codecvt_char__char____mbstate_t_* __field16; char* __field17; long __field18; char* __field19; char* __field20; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long _M_gcount; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };
struct std__basic_ifstream_char__std__char_traits_char__ { struct std__basic_istream_char__std__char_traits_char__ __field0; struct std__basic_filebuf_char__std__char_traits_char__ _M_filebuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
struct std____cmp_cat____unspec __const_main_agg_tmp2;
int _ZNSt8ios_base6eofbitE_const __attribute__((aligned(4))) = 2;
int _ZNSt8ios_base7goodbitE_const __attribute__((aligned(4))) = 0;
int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base9basefieldE_const __attribute__((aligned(4))) = 74;
int _ZNSt8ios_base3hexE_const __attribute__((aligned(4))) = 8;
int _ZNSt8ios_base6binaryE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base3ateE_const __attribute__((aligned(4))) = 2;
int _ZNSt8ios_base2inE_const __attribute__((aligned(4))) = 8;
char _str[17] = "!content.empty()";
char _str_1[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/vector51/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[9] = "test.bin";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[16] = "vector::reserve";
char _str_4[26] = "vector::_M_realloc_append";
char _str_5[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[15] = "!this->empty()";
struct std____detail___Synth3way _ZNSt8__detail11__synth3wayE;
extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0);
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p1);
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* p0);
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int std__operator__7(int p0, int p1);
extern void std__ios_base__ios_base(struct std__ios_base* p0);
void std__ios_base___ios_base(struct std__ios_base* p0) {}
void std__basic_ios_char__std__char_traits_char_____basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_istream_char__std__char_traits_char_____basic_istream(struct std__basic_istream_char__std__char_traits_char__* p0, void** p1);
extern void std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* p0);
extern void std__basic_ios_char__std__char_traits_char_____init(struct std__basic_ios_char__std__char_traits_char__* p0, struct std__basic_streambuf_char__std__char_traits_char__* p1);
extern struct std__basic_filebuf_char__std__char_traits_char__* std__basic_filebuf_char__std__char_traits_char_____open(struct std__basic_filebuf_char__std__char_traits_char__* p0, char* p1, int p2);
int std__operator__5(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
void std__basic_ifstream_char__std__char_traits_char_____open(struct std__basic_ifstream_char__std__char_traits_char__* p0, char* p1, int p2);
void std__basic_filebuf_char__std__char_traits_char______basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* p0);
void std__basic_istream_char__std__char_traits_char______basic_istream(struct std__basic_istream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* p0, char* p1, int p2);
extern _Bool std____basic_file_char___is_open___const(struct std____basic_file_char_* p0);
_Bool std__basic_filebuf_char__std__char_traits_char_____is_open___const(struct std__basic_filebuf_char__std__char_traits_char__* p0);
_Bool std__basic_ifstream_char__std__char_traits_char_____is_open(struct std__basic_ifstream_char__std__char_traits_char__* p0);
extern struct std__fpos___mbstate_t_ std__istream__tellg(struct std__basic_istream_char__std__char_traits_char__* p0);
long std__fpos___mbstate_t___operator_long___const(struct std__fpos___mbstate_t_* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* p0);
extern void std____throw_length_error(char* p0);
unsigned long std__vector_int__std__allocator_int_____capacity___const(struct std__vector_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* p0, unsigned long p1, void* p2);
int* std__allocator_int___allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1);
_Bool std__is_constant_evaluated();
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* p0, int** p1);
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* p0, int* p1, int* p2);
void void_std__destroy_at_int_(int* p0);
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* p0, int* p1);
void void_std____relocate_object_a_int__int__std__allocator_int___(int* p0, int* p1, struct std__allocator_int_* p2);
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* p0);
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* p0);
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____void_ p2, struct std__allocator_int_* p3);
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* p0, struct __gnu_cxx____normal_iterator_int____void_* p1);
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* p0);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
int* int__std____niter_base_int__(int* p0);
int* int__std____relocate_a_int___int___std__allocator_int___(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
int* std__vector_int__std__allocator_int______S_relocate(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int_____reserve(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__seekg(struct std__basic_istream_char__std__char_traits_char__* p0, struct std__fpos___mbstate_t_ p1);
void std__fpos___mbstate_t___fpos(struct std__fpos___mbstate_t_* p0, long p1);
int std__operator_(int p0, int p1);
_Bool std__basic_ios_char__std__char_traits_char_____eof___const(struct std__basic_ios_char__std__char_traits_char__* p0);
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, char* p2);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0, int* p1, unsigned long p2, struct std___Vector_base_int__std__allocator_int__* p3);
int* int__std__to_address_int_(int* p0);
int* auto_std____to_address_int__(int** p0);
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0);
void void_std__vector_int__std__allocator_int______M_realloc_append_int_(struct std__vector_int__std__allocator_int__* p0, int* p1);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
int* std__vector_int__std__allocator_int_____back(struct std__vector_int__std__allocator_int__* p0);
int* int__std__vector_int__std__allocator_int_____emplace_back_int_(struct std__vector_int__std__allocator_int__* p0, int* p1);
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* p0, int* p1);
extern int std__istream__get(struct std__basic_istream_char__std__char_traits_char__* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
_Bool std__operator__4(struct std__strong_ordering p0, struct std____cmp_cat____unspec p1);
struct std__strong_ordering _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE(struct std____detail___Synth3way* p0, int** p1, int** p2);
struct std__strong_ordering decltype__std____detail____synth3way__std__declval_int_________std__declval_int___________gnu_cxx__operator____int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
int* std__operator__(int* p0, int p1);
int std__operator__3(int p0);
int std__operator__6(int p0, int p1);
int* std__operator___2(int* p0, int p1);
int std__operator__2(int p0, int p1);
int std__ios_base__setf(struct std__ios_base* p0, int p1, int p2);
struct std__ios_base* std__hex(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int p1);
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream_2(struct std__basic_ifstream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* p0);
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* p0);
int main();
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
_Bool std____is_constant_evaluated();
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
extern int __gxx_personality_v0();
extern struct std__basic_filebuf_char__std__char_traits_char__* std__basic_filebuf_char__std__char_traits_char_____close(struct std__basic_filebuf_char__std__char_traits_char__* p0);
void std____basic_file_char______basic_file(struct std____basic_file_char_* p0) {}
void std__locale___locale(struct std__locale* p0) {}
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* p0);

extern unsigned char* _ZTTSt14basic_ifstreamIcSt11char_traitsIcEE[4] __attribute__((aligned(8)));

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v0) {
bb1:
  struct std__vector_int__std__allocator_int__* this2;
  this2 = v0;
  struct std__vector_int__std__allocator_int__* t3 = this2;
  struct std___Vector_base_int__std__allocator_int__* base4 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t3 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base(base4);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v5) {
bb6:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this7;
  int** __retval8;
  this7 = v5;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t9 = this7;
  __retval8 = &t9->_M_current;
  int** t10 = __retval8;
  return t10;
}

// function: _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v11, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v12) {
bb13:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs14;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs15;
  _Bool __retval16;
  __lhs14 = v11;
  __rhs15 = v12;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t17 = __lhs14;
  int** r18 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t17);
  int* t19 = *r18;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t20 = __rhs15;
  int** r21 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t20);
  int* t22 = *r21;
  _Bool c23 = ((t19 == t22)) ? 1 : 0;
  __retval16 = c23;
  _Bool t24 = __retval16;
  return t24;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v25, int** v26) {
bb27:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this28;
  int** __i29;
  this28 = v25;
  __i29 = v26;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t30 = this28;
  int** t31 = __i29;
  int* t32 = *t31;
  t30->_M_current = t32;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* v33) {
bb34:
  struct std__vector_int__std__allocator_int__* this35;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval36;
  this35 = v33;
  struct std__vector_int__std__allocator_int__* t37 = this35;
  struct std___Vector_base_int__std__allocator_int__* base38 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t37 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base39 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base38->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval36, &base39->_M_start);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t40 = __retval36;
  return t40;
}

// function: _ZNKSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* v41) {
bb42:
  struct std__vector_int__std__allocator_int__* this43;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval44;
  this43 = v41;
  struct std__vector_int__std__allocator_int__* t45 = this43;
  struct std___Vector_base_int__std__allocator_int__* base46 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t45 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base47 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base46->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval44, &base47->_M_finish);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t48 = __retval44;
  return t48;
}

// function: _ZNKSt6vectorIiSaIiEE5emptyEv
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* v49) {
bb50:
  struct std__vector_int__std__allocator_int__* this51;
  _Bool __retval52;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp053;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp154;
  this51 = v49;
  struct std__vector_int__std__allocator_int__* t55 = this51;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r56 = std__vector_int__std__allocator_int_____begin___const(t55);
  ref_tmp053 = r56;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r57 = std__vector_int__std__allocator_int_____end___const(t55);
  ref_tmp154 = r57;
  _Bool r58 = _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&ref_tmp053, &ref_tmp154);
  __retval52 = r58;
  _Bool t59 = __retval52;
  return t59;
}

// function: _ZStorSt13_Ios_OpenmodeS_
int std__operator__7(int v60, int v61) {
bb62:
  int __a63;
  int __b64;
  int __retval65;
  __a63 = v60;
  __b64 = v61;
  int t66 = __a63;
  int t67 = __b64;
  int b68 = t66 | t67;
  __retval65 = b68;
  int t69 = __retval65;
  return t69;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEEC2Ev
void std__basic_ios_char__std__char_traits_char_____basic_ios(struct std__basic_ios_char__std__char_traits_char__* v70) {
bb71:
  struct std__basic_ios_char__std__char_traits_char__* this72;
  this72 = v70;
  struct std__basic_ios_char__std__char_traits_char__* t73 = this72;
  struct std__ios_base* base74 = (struct std__ios_base*)((char *)t73 + 0);
  std__ios_base__ios_base(base74);
    void* v75 = (void*)&_ZTVSt9basic_iosIcSt11char_traitsIcEE[2];
    void** v76 = (void**)t73;
    *(void**)(v76) = (void*)v75;
    struct std__basic_ostream_char__std__char_traits_char__* c77 = ((void*)0);
    t73->_M_tie = c77;
    char c78 = 0;
    t73->_M_fill = c78;
    _Bool c79 = 0;
    t73->_M_fill_init = c79;
    struct std__basic_streambuf_char__std__char_traits_char__* c80 = ((void*)0);
    t73->_M_streambuf = c80;
    struct std__ctype_char_* c81 = ((void*)0);
    t73->_M_ctype = c81;
    struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* c82 = ((void*)0);
    t73->_M_num_put = c82;
    struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* c83 = ((void*)0);
    t73->_M_num_get = c83;
  return;
}

// function: _ZNSiC2Ev
void std__basic_istream_char__std__char_traits_char_____basic_istream(struct std__basic_istream_char__std__char_traits_char__* v84, void** v85) {
bb86:
  struct std__basic_istream_char__std__char_traits_char__* this87;
  void** vtt88;
  this87 = v84;
  vtt88 = v85;
  struct std__basic_istream_char__std__char_traits_char__* t89 = this87;
  void** t90 = vtt88;
  static void *vtt_slot91 = 0;
  void** vtt92 = (void**)&vtt_slot91;
  void** cast93 = (void**)vtt92;
  void* t94 = *cast93;
  void** v95 = (void**)t89;
  *(void**)(v95) = (void*)t94;
  static void *vtt_slot96 = 0;
  void** vtt97 = (void**)&vtt_slot96;
  void** cast98 = (void**)vtt97;
  void* t99 = *cast98;
  void** v100 = (void**)t89;
  void* v101 = *((void**)v100);
  unsigned char* cast102 = (unsigned char*)v101;
  long c103 = -24;
  unsigned char* ptr104 = &(cast102)[c103];
  long* cast105 = (long*)ptr104;
  long t106 = *cast105;
  unsigned char* cast107 = (unsigned char*)t89;
  unsigned char* ptr108 = &(cast107)[t106];
  struct std__basic_istream_char__std__char_traits_char__* cast109 = (struct std__basic_istream_char__std__char_traits_char__*)ptr108;
  void** v110 = (void**)cast109;
  *(void**)(v110) = (void*)t99;
  long c111 = 0;
  t89->_M_gcount = c111;
  void** v112 = (void**)t89;
  void* v113 = *((void**)v112);
  unsigned char* cast114 = (unsigned char*)v113;
  long c115 = -24;
  unsigned char* ptr116 = &(cast114)[c115];
  long* cast117 = (long*)ptr116;
  long t118 = *cast117;
  unsigned char* cast119 = (unsigned char*)t89;
  unsigned char* ptr120 = &(cast119)[t118];
  struct std__basic_istream_char__std__char_traits_char__* cast121 = (struct std__basic_istream_char__std__char_traits_char__*)ptr120;
  struct std__basic_ios_char__std__char_traits_char__* cast122 = (struct std__basic_ios_char__std__char_traits_char__*)cast121;
  struct std__basic_streambuf_char__std__char_traits_char__* c123 = ((void*)0);
  std__basic_ios_char__std__char_traits_char_____init(cast122, c123);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__5(int v124, int v125) {
bb126:
  int __a127;
  int __b128;
  int __retval129;
  __a127 = v124;
  __b128 = v125;
  int t130 = __a127;
  int t131 = __b128;
  int b132 = t130 | t131;
  __retval129 = b132;
  int t133 = __retval129;
  return t133;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v134) {
bb135:
  struct std__basic_ios_char__std__char_traits_char__* this136;
  int __retval137;
  this136 = v134;
  struct std__basic_ios_char__std__char_traits_char__* t138 = this136;
  struct std__ios_base* base139 = (struct std__ios_base*)((char *)t138 + 0);
  int t140 = base139->_M_streambuf_state;
  __retval137 = t140;
  int t141 = __retval137;
  return t141;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v142, int v143) {
bb144:
  struct std__basic_ios_char__std__char_traits_char__* this145;
  int __state146;
  this145 = v142;
  __state146 = v143;
  struct std__basic_ios_char__std__char_traits_char__* t147 = this145;
  int r148 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t147);
  if (__cir_exc_active) {
    return;
  }
  int t149 = __state146;
  int r150 = std__operator__5(r148, t149);
  std__basic_ios_char__std__char_traits_char_____clear(t147, r150);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode
void std__basic_ifstream_char__std__char_traits_char_____open(struct std__basic_ifstream_char__std__char_traits_char__* v151, char* v152, int v153) {
bb154:
  struct std__basic_ifstream_char__std__char_traits_char__* this155;
  char* __s156;
  int __mode157;
  this155 = v151;
  __s156 = v152;
  __mode157 = v153;
  struct std__basic_ifstream_char__std__char_traits_char__* t158 = this155;
    char* t159 = __s156;
    int t160 = __mode157;
    int t161 = _ZNSt8ios_base2inE_const;
    int r162 = std__operator__7(t160, t161);
    struct std__basic_filebuf_char__std__char_traits_char__* r163 = std__basic_filebuf_char__std__char_traits_char_____open(&t158->_M_filebuf, t159, r162);
    if (__cir_exc_active) {
      return;
    }
    _Bool cast164 = (_Bool)r163;
    _Bool u165 = !cast164;
    if (u165) {
      void** v166 = (void**)t158;
      void* v167 = *((void**)v166);
      unsigned char* cast168 = (unsigned char*)v167;
      long c169 = -24;
      unsigned char* ptr170 = &(cast168)[c169];
      long* cast171 = (long*)ptr170;
      long t172 = *cast171;
      unsigned char* cast173 = (unsigned char*)t158;
      unsigned char* ptr174 = &(cast173)[t172];
      struct std__basic_ifstream_char__std__char_traits_char__* cast175 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr174;
      struct std__basic_ios_char__std__char_traits_char__* cast176 = (struct std__basic_ios_char__std__char_traits_char__*)cast175;
      int t177 = _ZNSt8ios_base7failbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast176, t177);
      if (__cir_exc_active) {
        return;
      }
    } else {
      void** v178 = (void**)t158;
      void* v179 = *((void**)v178);
      unsigned char* cast180 = (unsigned char*)v179;
      long c181 = -24;
      unsigned char* ptr182 = &(cast180)[c181];
      long* cast183 = (long*)ptr182;
      long t184 = *cast183;
      unsigned char* cast185 = (unsigned char*)t158;
      unsigned char* ptr186 = &(cast185)[t184];
      struct std__basic_ifstream_char__std__char_traits_char__* cast187 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr186;
      struct std__basic_ios_char__std__char_traits_char__* cast188 = (struct std__basic_ios_char__std__char_traits_char__*)cast187;
      int t189 = _ZNSt8ios_base7goodbitE_const;
      std__basic_ios_char__std__char_traits_char_____clear(cast188, t189);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt13basic_filebufIcSt11char_traitsIcEED2Ev
void std__basic_filebuf_char__std__char_traits_char______basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* v190) {
bb191:
  struct std__basic_filebuf_char__std__char_traits_char__* this192;
  this192 = v190;
  struct std__basic_filebuf_char__std__char_traits_char__* t193 = this192;
          struct std__basic_filebuf_char__std__char_traits_char__* r195 = std__basic_filebuf_char__std__char_traits_char_____close(t193);
          if (__cir_exc_active) {
            {
              std____basic_file_char______basic_file(&t193->_M_file);
            }
            {
              struct std__basic_streambuf_char__std__char_traits_char__* base196 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t193 + 0);
              std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base196);
            }
            goto cir_try_dispatch194;
          }
        cir_try_dispatch194: ;
        if (__cir_exc_active) {
        {
          int ca_tok197 = 0;
          void* ca_exn198 = (void*)__cir_exc_ptr;
          __cir_exc_active = 0;
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
        }
        }
    {
      std____basic_file_char______basic_file(&t193->_M_file);
    }
  {
    struct std__basic_streambuf_char__std__char_traits_char__* base199 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t193 + 0);
    std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base199);
  }
  return;
}

// function: _ZNSiD2Ev
void std__basic_istream_char__std__char_traits_char______basic_istream(struct std__basic_istream_char__std__char_traits_char__* v200, void** v201) {
bb202:
  struct std__basic_istream_char__std__char_traits_char__* this203;
  void** vtt204;
  this203 = v200;
  vtt204 = v201;
  struct std__basic_istream_char__std__char_traits_char__* t205 = this203;
  void** t206 = vtt204;
  long c207 = 0;
  t205->_M_gcount = c207;
  return;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEED2Ev
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* v208) {
bb209:
  struct std__basic_ios_char__std__char_traits_char__* this210;
  this210 = v208;
  struct std__basic_ios_char__std__char_traits_char__* t211 = this210;
  {
    struct std__ios_base* base212 = (struct std__ios_base*)((char *)t211 + 0);
    std__ios_base___ios_base(base212);
  }
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode
void std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* v213, char* v214, int v215) {
bb216:
  struct std__basic_ifstream_char__std__char_traits_char__* this217;
  char* __s218;
  int __mode219;
  this217 = v213;
  __s218 = v214;
  __mode219 = v215;
  struct std__basic_ifstream_char__std__char_traits_char__* t220 = this217;
  struct std__basic_ios_char__std__char_traits_char__* base221 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t220 + 256);
  std__basic_ios_char__std__char_traits_char_____basic_ios(base221);
  if (__cir_exc_active) {
    return;
  }
    struct std__basic_istream_char__std__char_traits_char__* base222 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t220 + 0);
    static void *vtt_slot223 = 0;
    void** vtt224 = (void**)&vtt_slot223;
    std__basic_istream_char__std__char_traits_char_____basic_istream(base222, vtt224);
    if (__cir_exc_active) {
      {
        struct std__basic_ios_char__std__char_traits_char__* base225 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t220 + 256);
        std__basic_ios_char__std__char_traits_char______basic_ios(base225);
      }
      return;
    }
      void* v226 = (void*)&_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[3];
      void** v227 = (void**)t220;
      *(void**)(v227) = (void*)v226;
      void* v228 = (void*)&_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[3];
      struct std__basic_ios_char__std__char_traits_char__* base229 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t220 + 256);
      void** v230 = (void**)base229;
      *(void**)(v230) = (void*)v228;
      std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(&t220->_M_filebuf);
      if (__cir_exc_active) {
        {
          struct std__basic_istream_char__std__char_traits_char__* base231 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t220 + 0);
          static void *vtt_slot232 = 0;
          void** vtt233 = (void**)&vtt_slot232;
          std__basic_istream_char__std__char_traits_char______basic_istream(base231, vtt233);
        }
        {
          struct std__basic_ios_char__std__char_traits_char__* base234 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t220 + 256);
          std__basic_ios_char__std__char_traits_char______basic_ios(base234);
        }
        return;
      }
        void** v235 = (void**)t220;
        void* v236 = *((void**)v235);
        unsigned char* cast237 = (unsigned char*)v236;
        long c238 = -24;
        unsigned char* ptr239 = &(cast237)[c238];
        long* cast240 = (long*)ptr239;
        long t241 = *cast240;
        unsigned char* cast242 = (unsigned char*)t220;
        unsigned char* ptr243 = &(cast242)[t241];
        struct std__basic_ifstream_char__std__char_traits_char__* cast244 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr243;
        struct std__basic_ios_char__std__char_traits_char__* cast245 = (struct std__basic_ios_char__std__char_traits_char__*)cast244;
        struct std__basic_streambuf_char__std__char_traits_char__* base246 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)&(t220->_M_filebuf) + 0);
        std__basic_ios_char__std__char_traits_char_____init(cast245, base246);
        if (__cir_exc_active) {
          {
            std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t220->_M_filebuf);
          }
          {
            struct std__basic_istream_char__std__char_traits_char__* base247 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t220 + 0);
            static void *vtt_slot248 = 0;
            void** vtt249 = (void**)&vtt_slot248;
            std__basic_istream_char__std__char_traits_char______basic_istream(base247, vtt249);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base250 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t220 + 256);
            std__basic_ios_char__std__char_traits_char______basic_ios(base250);
          }
          return;
        }
        char* t251 = __s218;
        int t252 = __mode219;
        std__basic_ifstream_char__std__char_traits_char_____open(t220, t251, t252);
        if (__cir_exc_active) {
          {
            std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t220->_M_filebuf);
          }
          {
            struct std__basic_istream_char__std__char_traits_char__* base253 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t220 + 0);
            static void *vtt_slot254 = 0;
            void** vtt255 = (void**)&vtt_slot254;
            std__basic_istream_char__std__char_traits_char______basic_istream(base253, vtt255);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base256 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t220 + 256);
            std__basic_ios_char__std__char_traits_char______basic_ios(base256);
          }
          return;
        }
  return;
}

// function: _ZNKSt13basic_filebufIcSt11char_traitsIcEE7is_openEv
_Bool std__basic_filebuf_char__std__char_traits_char_____is_open___const(struct std__basic_filebuf_char__std__char_traits_char__* v257) {
bb258:
  struct std__basic_filebuf_char__std__char_traits_char__* this259;
  _Bool __retval260;
  this259 = v257;
  struct std__basic_filebuf_char__std__char_traits_char__* t261 = this259;
  _Bool r262 = std____basic_file_char___is_open___const(&t261->_M_file);
  __retval260 = r262;
  _Bool t263 = __retval260;
  return t263;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEE7is_openEv
_Bool std__basic_ifstream_char__std__char_traits_char_____is_open(struct std__basic_ifstream_char__std__char_traits_char__* v264) {
bb265:
  struct std__basic_ifstream_char__std__char_traits_char__* this266;
  _Bool __retval267;
  this266 = v264;
  struct std__basic_ifstream_char__std__char_traits_char__* t268 = this266;
  _Bool r269 = std__basic_filebuf_char__std__char_traits_char_____is_open___const(&t268->_M_filebuf);
  __retval267 = r269;
  _Bool t270 = __retval267;
  return t270;
}

// function: _ZNKSt4fposI11__mbstate_tEcvlEv
long std__fpos___mbstate_t___operator_long___const(struct std__fpos___mbstate_t_* v271) {
bb272:
  struct std__fpos___mbstate_t_* this273;
  long __retval274;
  this273 = v271;
  struct std__fpos___mbstate_t_* t275 = this273;
  long t276 = t275->_M_off;
  __retval274 = t276;
  long t277 = __retval274;
  return t277;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v278, unsigned long* v279) {
bb280:
  unsigned long* __a281;
  unsigned long* __b282;
  unsigned long* __retval283;
  __a281 = v278;
  __b282 = v279;
    unsigned long* t284 = __b282;
    unsigned long t285 = *t284;
    unsigned long* t286 = __a281;
    unsigned long t287 = *t286;
    _Bool c288 = ((t285 < t287)) ? 1 : 0;
    if (c288) {
      unsigned long* t289 = __b282;
      __retval283 = t289;
      unsigned long* t290 = __retval283;
      return t290;
    }
  unsigned long* t291 = __a281;
  __retval283 = t291;
  unsigned long* t292 = __retval283;
  return t292;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v293) {
bb294:
  struct std__allocator_int_* __a295;
  unsigned long __retval296;
  unsigned long __diffmax297;
  unsigned long __allocmax298;
  __a295 = v293;
  unsigned long c299 = 2305843009213693951;
  __diffmax297 = c299;
  unsigned long c300 = 4611686018427387903;
  __allocmax298 = c300;
  unsigned long* r301 = unsigned_long_const__std__min_unsigned_long_(&__diffmax297, &__allocmax298);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t302 = *r301;
  __retval296 = t302;
  unsigned long t303 = __retval296;
  return t303;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v304) {
bb305:
  struct std___Vector_base_int__std__allocator_int__* this306;
  struct std__allocator_int_* __retval307;
  this306 = v304;
  struct std___Vector_base_int__std__allocator_int__* t308 = this306;
  struct std__allocator_int_* base309 = (struct std__allocator_int_*)((char *)&(t308->_M_impl) + 0);
  __retval307 = base309;
  struct std__allocator_int_* t310 = __retval307;
  return t310;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v311) {
bb312:
  struct std__vector_int__std__allocator_int__* this313;
  unsigned long __retval314;
  this313 = v311;
  struct std__vector_int__std__allocator_int__* t315 = this313;
  struct std___Vector_base_int__std__allocator_int__* base316 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t315 + 0);
  struct std__allocator_int_* r317 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base316);
  unsigned long r318 = std__vector_int__std__allocator_int______S_max_size(r317);
  __retval314 = r318;
  unsigned long t319 = __retval314;
  return t319;
}

// function: _ZNKSt6vectorIiSaIiEE8capacityEv
unsigned long std__vector_int__std__allocator_int_____capacity___const(struct std__vector_int__std__allocator_int__* v320) {
bb321:
  struct std__vector_int__std__allocator_int__* this322;
  unsigned long __retval323;
  long __dif324;
  this322 = v320;
  struct std__vector_int__std__allocator_int__* t325 = this322;
  struct std___Vector_base_int__std__allocator_int__* base326 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t325 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base327 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base326->_M_impl) + 0);
  int* t328 = base327->_M_end_of_storage;
  struct std___Vector_base_int__std__allocator_int__* base329 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t325 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base330 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base329->_M_impl) + 0);
  int* t331 = base330->_M_start;
  long diff332 = t328 - t331;
  __dif324 = diff332;
    long t333 = __dif324;
    long c334 = 0;
    _Bool c335 = ((t333 < c334)) ? 1 : 0;
    if (c335) {
      __builtin_unreachable();
    }
  long t336 = __dif324;
  unsigned long cast337 = (unsigned long)t336;
  __retval323 = cast337;
  unsigned long t338 = __retval323;
  return t338;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v339) {
bb340:
  struct std__vector_int__std__allocator_int__* this341;
  unsigned long __retval342;
  long __dif343;
  this341 = v339;
  struct std__vector_int__std__allocator_int__* t344 = this341;
  struct std___Vector_base_int__std__allocator_int__* base345 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t344 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base346 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base345->_M_impl) + 0);
  int* t347 = base346->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base348 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t344 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base349 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base348->_M_impl) + 0);
  int* t350 = base349->_M_start;
  long diff351 = t347 - t350;
  __dif343 = diff351;
    long t352 = __dif343;
    long c353 = 0;
    _Bool c354 = ((t352 < c353)) ? 1 : 0;
    if (c354) {
      __builtin_unreachable();
    }
  long t355 = __dif343;
  unsigned long cast356 = (unsigned long)t355;
  __retval342 = cast356;
  unsigned long t357 = __retval342;
  return t357;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v358) {
bb359:
  struct std____new_allocator_int_* this360;
  unsigned long __retval361;
  this360 = v358;
  struct std____new_allocator_int_* t362 = this360;
  unsigned long c363 = 9223372036854775807;
  unsigned long c364 = 4;
  unsigned long b365 = c363 / c364;
  __retval361 = b365;
  unsigned long t366 = __retval361;
  return t366;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v367, unsigned long v368, void* v369) {
bb370:
  struct std____new_allocator_int_* this371;
  unsigned long __n372;
  void* unnamed373;
  int* __retval374;
  this371 = v367;
  __n372 = v368;
  unnamed373 = v369;
  struct std____new_allocator_int_* t375 = this371;
    unsigned long t376 = __n372;
    unsigned long r377 = std____new_allocator_int____M_max_size___const(t375);
    _Bool c378 = ((t376 > r377)) ? 1 : 0;
    if (c378) {
        unsigned long t379 = __n372;
        unsigned long c380 = -1;
        unsigned long c381 = 4;
        unsigned long b382 = c380 / c381;
        _Bool c383 = ((t379 > b382)) ? 1 : 0;
        if (c383) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      std____throw_bad_alloc();
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
    }
    unsigned long c384 = 4;
    unsigned long c385 = 16;
    _Bool c386 = ((c384 > c385)) ? 1 : 0;
    if (c386) {
      unsigned long __al387;
      unsigned long c388 = 4;
      __al387 = c388;
      unsigned long t389 = __n372;
      unsigned long c390 = 4;
      unsigned long b391 = t389 * c390;
      unsigned long t392 = __al387;
      void* r393 = operator_new_2(b391, t392);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast394 = (int*)r393;
      __retval374 = cast394;
      int* t395 = __retval374;
      return t395;
    }
  unsigned long t396 = __n372;
  unsigned long c397 = 4;
  unsigned long b398 = t396 * c397;
  void* r399 = operator_new(b398);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast400 = (int*)r399;
  __retval374 = cast400;
  int* t401 = __retval374;
  return t401;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v402, unsigned long v403) {
bb404:
  struct std__allocator_int_* this405;
  unsigned long __n406;
  int* __retval407;
  this405 = v402;
  __n406 = v403;
  struct std__allocator_int_* t408 = this405;
    _Bool r409 = std____is_constant_evaluated();
    if (r409) {
        unsigned long t410 = __n406;
        unsigned long c411 = 4;
        unsigned long ovr412;
        _Bool ovf413 = __builtin_mul_overflow(t410, c411, &ovr412);
        __n406 = ovr412;
        if (ovf413) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t414 = __n406;
      void* r415 = operator_new(t414);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast416 = (int*)r415;
      __retval407 = cast416;
      int* t417 = __retval407;
      return t417;
    }
  struct std____new_allocator_int_* base418 = (struct std____new_allocator_int_*)((char *)t408 + 0);
  unsigned long t419 = __n406;
  void* c420 = ((void*)0);
  int* r421 = std____new_allocator_int___allocate(base418, t419, c420);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval407 = r421;
  int* t422 = __retval407;
  return t422;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v423, unsigned long v424) {
bb425:
  struct std__allocator_int_* __a426;
  unsigned long __n427;
  int* __retval428;
  __a426 = v423;
  __n427 = v424;
  struct std__allocator_int_* t429 = __a426;
  unsigned long t430 = __n427;
  int* r431 = std__allocator_int___allocate(t429, t430);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval428 = r431;
  int* t432 = __retval428;
  return t432;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v433, unsigned long v434) {
bb435:
  struct std___Vector_base_int__std__allocator_int__* this436;
  unsigned long __n437;
  int* __retval438;
  this436 = v433;
  __n437 = v434;
  struct std___Vector_base_int__std__allocator_int__* t439 = this436;
  unsigned long t440 = __n437;
  unsigned long c441 = 0;
  _Bool c442 = ((t440 != c441)) ? 1 : 0;
  int* ternary443;
  if (c442) {
    struct std__allocator_int_* base444 = (struct std__allocator_int_*)((char *)&(t439->_M_impl) + 0);
    unsigned long t445 = __n437;
    int* r446 = std__allocator_traits_std__allocator_int_____allocate(base444, t445);
    if (__cir_exc_active) {
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    ternary443 = (int*)r446;
  } else {
    int* c447 = ((void*)0);
    ternary443 = (int*)c447;
  }
  __retval438 = ternary443;
  int* t448 = __retval438;
  return t448;
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

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v453, int** v454) {
bb455:
  struct __gnu_cxx____normal_iterator_int____void_* this456;
  int** __i457;
  this456 = v453;
  __i457 = v454;
  struct __gnu_cxx____normal_iterator_int____void_* t458 = this456;
  int** t459 = __i457;
  int* t460 = *t459;
  t458->_M_current = t460;
  return;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v461, int* v462) {
bb463:
  int* __location464;
  int* __args465;
  int* __retval466;
  void* __loc467;
  __location464 = v461;
  __args465 = v462;
  int* t468 = __location464;
  void* cast469 = (void*)t468;
  __loc467 = cast469;
    void* t470 = __loc467;
    int* cast471 = (int*)t470;
    int* t472 = __args465;
    int t473 = *t472;
    *cast471 = t473;
    __retval466 = cast471;
    int* t474 = __retval466;
    return t474;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v475, int* v476, int* v477) {
bb478:
  struct std__allocator_int_* __a479;
  int* __p480;
  int* __args481;
  __a479 = v475;
  __p480 = v476;
  __args481 = v477;
  int* t482 = __p480;
  int* t483 = __args481;
  int* r484 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t482, t483);
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v485) {
bb486:
  int* __location487;
  __location487 = v485;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v488, int* v489) {
bb490:
  struct std__allocator_int_* __a491;
  int* __p492;
  __a491 = v488;
  __p492 = v489;
  int* t493 = __p492;
  void_std__destroy_at_int_(t493);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v494, int* v495, struct std__allocator_int_* v496) {
bb497:
  int* __dest498;
  int* __orig499;
  struct std__allocator_int_* __alloc500;
  __dest498 = v494;
  __orig499 = v495;
  __alloc500 = v496;
  struct std__allocator_int_* t501 = __alloc500;
  int* t502 = __dest498;
  int* t503 = __orig499;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t501, t502, t503);
  struct std__allocator_int_* t504 = __alloc500;
  int* t505 = __orig499;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t504, t505);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v506) {
bb507:
  struct __gnu_cxx____normal_iterator_int____void_* this508;
  int* __retval509;
  this508 = v506;
  struct __gnu_cxx____normal_iterator_int____void_* t510 = this508;
  int* t511 = t510->_M_current;
  __retval509 = t511;
  int* t512 = __retval509;
  return t512;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v513) {
bb514:
  struct __gnu_cxx____normal_iterator_int____void_* this515;
  struct __gnu_cxx____normal_iterator_int____void_* __retval516;
  this515 = v513;
  struct __gnu_cxx____normal_iterator_int____void_* t517 = this515;
  int* t518 = t517->_M_current;
  int c519 = 1;
  int* ptr520 = &(t518)[c519];
  t517->_M_current = ptr520;
  __retval516 = t517;
  struct __gnu_cxx____normal_iterator_int____void_* t521 = __retval516;
  return t521;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v522, int* v523, struct __gnu_cxx____normal_iterator_int____void_ v524, struct std__allocator_int_* v525) {
bb526:
  int* __first527;
  int* __last528;
  struct __gnu_cxx____normal_iterator_int____void_ __result529;
  struct std__allocator_int_* __alloc530;
  struct __gnu_cxx____normal_iterator_int____void_ __retval531;
  __first527 = v522;
  __last528 = v523;
  __result529 = v524;
  __alloc530 = v525;
  __retval531 = __result529; // copy
    while (1) {
      int* t533 = __first527;
      int* t534 = __last528;
      _Bool c535 = ((t533 != t534)) ? 1 : 0;
      if (!c535) break;
      int* r536 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval531);
      int* t537 = __first527;
      struct std__allocator_int_* t538 = __alloc530;
      void_std____relocate_object_a_int__int__std__allocator_int___(r536, t537, t538);
    for_step532: ;
      int* t539 = __first527;
      int c540 = 1;
      int* ptr541 = &(t539)[c540];
      __first527 = ptr541;
      struct __gnu_cxx____normal_iterator_int____void_* r542 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval531);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t543 = __retval531;
  return t543;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v544, struct __gnu_cxx____normal_iterator_int____void_* v545) {
bb546:
  struct __gnu_cxx____normal_iterator_int____void_* this547;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed548;
  struct __gnu_cxx____normal_iterator_int____void_* __retval549;
  this547 = v544;
  unnamed548 = v545;
  struct __gnu_cxx____normal_iterator_int____void_* t550 = this547;
  struct __gnu_cxx____normal_iterator_int____void_* t551 = unnamed548;
  int* t552 = t551->_M_current;
  t550->_M_current = t552;
  __retval549 = t550;
  struct __gnu_cxx____normal_iterator_int____void_* t553 = __retval549;
  return t553;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v554) {
bb555:
  struct __gnu_cxx____normal_iterator_int____void_* this556;
  int** __retval557;
  this556 = v554;
  struct __gnu_cxx____normal_iterator_int____void_* t558 = this556;
  __retval557 = &t558->_M_current;
  int** t559 = __retval557;
  return t559;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v560, int* v561, int* v562, struct std__allocator_int_* v563) {
bb564:
  int* __first565;
  int* __last566;
  int* __result567;
  struct std__allocator_int_* __alloc568;
  int* __retval569;
  long __count570;
  __first565 = v560;
  __last566 = v561;
  __result567 = v562;
  __alloc568 = v563;
  int* t571 = __last566;
  int* t572 = __first565;
  long diff573 = t571 - t572;
  __count570 = diff573;
    long t574 = __count570;
    long c575 = 0;
    _Bool c576 = ((t574 > c575)) ? 1 : 0;
    if (c576) {
        _Bool r577 = std__is_constant_evaluated();
        if (r577) {
          struct __gnu_cxx____normal_iterator_int____void_ __out578;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0579;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0580;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out578, &__result567);
          int* t581 = __first565;
          int* t582 = __last566;
          agg_tmp0580 = __out578; // copy
          struct std__allocator_int_* t583 = __alloc568;
          struct __gnu_cxx____normal_iterator_int____void_ t584 = agg_tmp0580;
          struct __gnu_cxx____normal_iterator_int____void_ r585 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t581, t582, t584, t583);
          ref_tmp0579 = r585;
          struct __gnu_cxx____normal_iterator_int____void_* r586 = __gnu_cxx____normal_iterator_int___void___operator_(&__out578, &ref_tmp0579);
          int** r587 = __gnu_cxx____normal_iterator_int___void___base___const(&__out578);
          int* t588 = *r587;
          __retval569 = t588;
          int* t589 = __retval569;
          return t589;
        }
      int* t590 = __result567;
      void* cast591 = (void*)t590;
      int* t592 = __first565;
      void* cast593 = (void*)t592;
      long t594 = __count570;
      unsigned long cast595 = (unsigned long)t594;
      unsigned long c596 = 4;
      unsigned long b597 = cast595 * c596;
      void* r598 = memcpy(cast591, cast593, b597);
    }
  int* t599 = __result567;
  long t600 = __count570;
  int* ptr601 = &(t599)[t600];
  __retval569 = ptr601;
  int* t602 = __retval569;
  return t602;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v603) {
bb604:
  int* __it605;
  int* __retval606;
  __it605 = v603;
  int* t607 = __it605;
  __retval606 = t607;
  int* t608 = __retval606;
  return t608;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v609, int* v610, int* v611, struct std__allocator_int_* v612) {
bb613:
  int* __first614;
  int* __last615;
  int* __result616;
  struct std__allocator_int_* __alloc617;
  int* __retval618;
  __first614 = v609;
  __last615 = v610;
  __result616 = v611;
  __alloc617 = v612;
  int* t619 = __first614;
  int* r620 = int__std____niter_base_int__(t619);
  int* t621 = __last615;
  int* r622 = int__std____niter_base_int__(t621);
  int* t623 = __result616;
  int* r624 = int__std____niter_base_int__(t623);
  struct std__allocator_int_* t625 = __alloc617;
  int* r626 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r620, r622, r624, t625);
  __retval618 = r626;
  int* t627 = __retval618;
  return t627;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v628, int* v629, int* v630, struct std__allocator_int_* v631) {
bb632:
  int* __first633;
  int* __last634;
  int* __result635;
  struct std__allocator_int_* __alloc636;
  int* __retval637;
  __first633 = v628;
  __last634 = v629;
  __result635 = v630;
  __alloc636 = v631;
  int* t638 = __first633;
  int* t639 = __last634;
  int* t640 = __result635;
  struct std__allocator_int_* t641 = __alloc636;
  int* r642 = int__std____relocate_a_int___int___std__allocator_int___(t638, t639, t640, t641);
  __retval637 = r642;
  int* t643 = __retval637;
  return t643;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v644) {
bb645:
  struct std___Vector_base_int__std__allocator_int__* this646;
  struct std__allocator_int_* __retval647;
  this646 = v644;
  struct std___Vector_base_int__std__allocator_int__* t648 = this646;
  struct std__allocator_int_* base649 = (struct std__allocator_int_*)((char *)&(t648->_M_impl) + 0);
  __retval647 = base649;
  struct std__allocator_int_* t650 = __retval647;
  return t650;
}

// function: _ZNSt6vectorIiSaIiEE7reserveEm
void std__vector_int__std__allocator_int_____reserve(struct std__vector_int__std__allocator_int__* v651, unsigned long v652) {
bb653:
  struct std__vector_int__std__allocator_int__* this654;
  unsigned long __n655;
  this654 = v651;
  __n655 = v652;
  struct std__vector_int__std__allocator_int__* t656 = this654;
    unsigned long t657 = __n655;
    unsigned long r658 = std__vector_int__std__allocator_int_____max_size___const(t656);
    _Bool c659 = ((t657 > r658)) ? 1 : 0;
    if (c659) {
      char* cast660 = (char*)&(_str_3);
      std____throw_length_error(cast660);
      if (__cir_exc_active) {
        return;
      }
    }
    unsigned long r661 = std__vector_int__std__allocator_int_____capacity___const(t656);
    unsigned long t662 = __n655;
    _Bool c663 = ((r661 < t662)) ? 1 : 0;
    if (c663) {
      unsigned long __old_size664;
      int* __tmp665;
      unsigned long r666 = std__vector_int__std__allocator_int_____size___const(t656);
      __old_size664 = r666;
        struct std___Vector_base_int__std__allocator_int__* base667 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t656 + 0);
        unsigned long t668 = __n655;
        int* r669 = std___Vector_base_int__std__allocator_int______M_allocate(base667, t668);
        if (__cir_exc_active) {
          return;
        }
        __tmp665 = r669;
        struct std___Vector_base_int__std__allocator_int__* base670 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t656 + 0);
        struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base671 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base670->_M_impl) + 0);
        int* t672 = base671->_M_start;
        struct std___Vector_base_int__std__allocator_int__* base673 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t656 + 0);
        struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base674 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base673->_M_impl) + 0);
        int* t675 = base674->_M_finish;
        int* t676 = __tmp665;
        struct std___Vector_base_int__std__allocator_int__* base677 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t656 + 0);
        struct std__allocator_int_* r678 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base677);
        int* r679 = std__vector_int__std__allocator_int______S_relocate(t672, t675, t676, r678);
      struct std___Vector_base_int__std__allocator_int__* base680 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t656 + 0);
      struct std___Vector_base_int__std__allocator_int__* base681 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t656 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base682 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base681->_M_impl) + 0);
      int* t683 = base682->_M_start;
      struct std___Vector_base_int__std__allocator_int__* base684 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t656 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base685 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base684->_M_impl) + 0);
      int* t686 = base685->_M_end_of_storage;
      struct std___Vector_base_int__std__allocator_int__* base687 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t656 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base688 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base687->_M_impl) + 0);
      int* t689 = base688->_M_start;
      long diff690 = t686 - t689;
      unsigned long cast691 = (unsigned long)diff690;
      std___Vector_base_int__std__allocator_int______M_deallocate(base680, t683, cast691);
      if (__cir_exc_active) {
        return;
      }
      int* t692 = __tmp665;
      struct std___Vector_base_int__std__allocator_int__* base693 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t656 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base694 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base693->_M_impl) + 0);
      base694->_M_start = t692;
      int* t695 = __tmp665;
      unsigned long t696 = __old_size664;
      int* ptr697 = &(t695)[t696];
      struct std___Vector_base_int__std__allocator_int__* base698 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t656 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base699 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base698->_M_impl) + 0);
      base699->_M_finish = ptr697;
      struct std___Vector_base_int__std__allocator_int__* base700 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t656 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base701 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base700->_M_impl) + 0);
      int* t702 = base701->_M_start;
      unsigned long t703 = __n655;
      int* ptr704 = &(t702)[t703];
      struct std___Vector_base_int__std__allocator_int__* base705 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t656 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base706 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base705->_M_impl) + 0);
      base706->_M_end_of_storage = ptr704;
    }
  return;
}

// function: _ZNSt4fposI11__mbstate_tEC2El
void std__fpos___mbstate_t___fpos(struct std__fpos___mbstate_t_* v707, long v708) {
bb709:
  struct std__fpos___mbstate_t_* this710;
  long __off711;
  this710 = v707;
  __off711 = v708;
  struct std__fpos___mbstate_t_* t712 = this710;
  long t713 = __off711;
  t712->_M_off = t713;
  struct __mbstate_t c714 = {0};
  t712->_M_state = c714;
  return;
}

// function: _ZStanSt12_Ios_IostateS_
int std__operator_(int v715, int v716) {
bb717:
  int __a718;
  int __b719;
  int __retval720;
  __a718 = v715;
  __b719 = v716;
  int t721 = __a718;
  int t722 = __b719;
  int b723 = t721 & t722;
  __retval720 = b723;
  int t724 = __retval720;
  return t724;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE3eofEv
_Bool std__basic_ios_char__std__char_traits_char_____eof___const(struct std__basic_ios_char__std__char_traits_char__* v725) {
bb726:
  struct std__basic_ios_char__std__char_traits_char__* this727;
  _Bool __retval728;
  this727 = v725;
  struct std__basic_ios_char__std__char_traits_char__* t729 = this727;
  int r730 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t729);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  int t731 = _ZNSt8ios_base6eofbitE_const;
  int r732 = std__operator_(r730, t731);
  int c733 = 0;
  _Bool c734 = ((r732 != c733)) ? 1 : 0;
  __retval728 = c734;
  _Bool t735 = __retval728;
  return t735;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v736, unsigned long* v737) {
bb738:
  unsigned long* __a739;
  unsigned long* __b740;
  unsigned long* __retval741;
  __a739 = v736;
  __b740 = v737;
    unsigned long* t742 = __a739;
    unsigned long t743 = *t742;
    unsigned long* t744 = __b740;
    unsigned long t745 = *t744;
    _Bool c746 = ((t743 < t745)) ? 1 : 0;
    if (c746) {
      unsigned long* t747 = __b740;
      __retval741 = t747;
      unsigned long* t748 = __retval741;
      return t748;
    }
  unsigned long* t749 = __a739;
  __retval741 = t749;
  unsigned long* t750 = __retval741;
  return t750;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v751, unsigned long v752, char* v753) {
bb754:
  struct std__vector_int__std__allocator_int__* this755;
  unsigned long __n756;
  char* __s757;
  unsigned long __retval758;
  unsigned long __len759;
  unsigned long ref_tmp0760;
  this755 = v751;
  __n756 = v752;
  __s757 = v753;
  struct std__vector_int__std__allocator_int__* t761 = this755;
    unsigned long r762 = std__vector_int__std__allocator_int_____max_size___const(t761);
    unsigned long r763 = std__vector_int__std__allocator_int_____size___const(t761);
    unsigned long b764 = r762 - r763;
    unsigned long t765 = __n756;
    _Bool c766 = ((b764 < t765)) ? 1 : 0;
    if (c766) {
      char* t767 = __s757;
      std____throw_length_error(t767);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
    }
  unsigned long r768 = std__vector_int__std__allocator_int_____size___const(t761);
  unsigned long r769 = std__vector_int__std__allocator_int_____size___const(t761);
  ref_tmp0760 = r769;
  unsigned long* r770 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0760, &__n756);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t771 = *r770;
  unsigned long b772 = r768 + t771;
  __len759 = b772;
  unsigned long t773 = __len759;
  unsigned long r774 = std__vector_int__std__allocator_int_____size___const(t761);
  _Bool c775 = ((t773 < r774)) ? 1 : 0;
  _Bool ternary776;
  if (c775) {
    _Bool c777 = 1;
    ternary776 = (_Bool)c777;
  } else {
    unsigned long t778 = __len759;
    unsigned long r779 = std__vector_int__std__allocator_int_____max_size___const(t761);
    _Bool c780 = ((t778 > r779)) ? 1 : 0;
    ternary776 = (_Bool)c780;
  }
  unsigned long ternary781;
  if (ternary776) {
    unsigned long r782 = std__vector_int__std__allocator_int_____max_size___const(t761);
    ternary781 = (unsigned long)r782;
  } else {
    unsigned long t783 = __len759;
    ternary781 = (unsigned long)t783;
  }
  __retval758 = ternary781;
  unsigned long t784 = __retval758;
  return t784;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v785) {
bb786:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this787;
  int** __retval788;
  this787 = v785;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t789 = this787;
  __retval788 = &t789->_M_current;
  int** t790 = __retval788;
  return t790;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v791, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v792) {
bb793:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs794;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs795;
  long __retval796;
  __lhs794 = v791;
  __rhs795 = v792;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t797 = __lhs794;
  int** r798 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t797);
  int* t799 = *r798;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t800 = __rhs795;
  int** r801 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t800);
  int* t802 = *r801;
  long diff803 = t799 - t802;
  __retval796 = diff803;
  long t804 = __retval796;
  return t804;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v805, int* v806, unsigned long v807, struct std___Vector_base_int__std__allocator_int__* v808) {
bb809:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this810;
  int* __s811;
  unsigned long __l812;
  struct std___Vector_base_int__std__allocator_int__* __vect813;
  this810 = v805;
  __s811 = v806;
  __l812 = v807;
  __vect813 = v808;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t814 = this810;
  int* t815 = __s811;
  t814->_M_storage = t815;
  unsigned long t816 = __l812;
  t814->_M_len = t816;
  struct std___Vector_base_int__std__allocator_int__* t817 = __vect813;
  t814->_M_vect = t817;
  return;
}

// function: _ZSt10to_addressIiEPT_S1_
int* int__std__to_address_int_(int* v818) {
bb819:
  int* __ptr820;
  int* __retval821;
  __ptr820 = v818;
  int* t822 = __ptr820;
  __retval821 = t822;
  int* t823 = __retval821;
  return t823;
}

// function: _ZSt12__to_addressIPiEDaRKT_
int* auto_std____to_address_int__(int** v824) {
bb825:
  int** __ptr826;
  int* __retval827;
  __ptr826 = v824;
  int** t828 = __ptr826;
  int* t829 = *t828;
  int* r830 = int__std__to_address_int_(t829);
  __retval827 = r830;
  int* t831 = __retval827;
  return t831;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v832) {
bb833:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this834;
  this834 = v832;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t835 = this834;
    int* t836 = t835->_M_storage;
    _Bool cast837 = (_Bool)t836;
    if (cast837) {
      struct std___Vector_base_int__std__allocator_int__* t838 = t835->_M_vect;
      int* t839 = t835->_M_storage;
      unsigned long t840 = t835->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t838, t839, t840);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_realloc_appendIJiEEEvDpOT_
void void_std__vector_int__std__allocator_int______M_realloc_append_int_(struct std__vector_int__std__allocator_int__* v841, int* v842) {
bb843:
  struct std__vector_int__std__allocator_int__* this844;
  int* __args845;
  unsigned long __len846;
  int* __old_start847;
  int* __old_finish848;
  unsigned long __elems849;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0850;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1851;
  int* __new_start852;
  int* __new_finish853;
  this844 = v841;
  __args845 = v842;
  struct std__vector_int__std__allocator_int__* t854 = this844;
  unsigned long c855 = 1;
  char* cast856 = (char*)&(_str_4);
  unsigned long r857 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t854, c855, cast856);
  if (__cir_exc_active) {
    return;
  }
  __len846 = r857;
    unsigned long t858 = __len846;
    unsigned long c859 = 0;
    _Bool c860 = ((t858 <= c859)) ? 1 : 0;
    if (c860) {
      __builtin_unreachable();
    }
  struct std___Vector_base_int__std__allocator_int__* base861 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t854 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base862 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base861->_M_impl) + 0);
  int* t863 = base862->_M_start;
  __old_start847 = t863;
  struct std___Vector_base_int__std__allocator_int__* base864 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t854 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base865 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base864->_M_impl) + 0);
  int* t866 = base865->_M_finish;
  __old_finish848 = t866;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r867 = std__vector_int__std__allocator_int_____end(t854);
  ref_tmp0850 = r867;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r868 = std__vector_int__std__allocator_int_____begin(t854);
  ref_tmp1851 = r868;
  long r869 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp0850, &ref_tmp1851);
  unsigned long cast870 = (unsigned long)r869;
  __elems849 = cast870;
  struct std___Vector_base_int__std__allocator_int__* base871 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t854 + 0);
  unsigned long t872 = __len846;
  int* r873 = std___Vector_base_int__std__allocator_int______M_allocate(base871, t872);
  if (__cir_exc_active) {
    return;
  }
  __new_start852 = r873;
  int* t874 = __new_start852;
  __new_finish853 = t874;
    struct std__vector_int__std__allocator_int_____Guard_alloc __guard875;
    int* ref_tmp2876;
    int* t877 = __new_start852;
    unsigned long t878 = __len846;
    struct std___Vector_base_int__std__allocator_int__* base879 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t854 + 0);
    std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard875, t877, t878, base879);
    if (__cir_exc_active) {
      return;
    }
      struct std___Vector_base_int__std__allocator_int__* base880 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t854 + 0);
      struct std__allocator_int_* base881 = (struct std__allocator_int_*)((char *)&(base880->_M_impl) + 0);
      int* t882 = __new_start852;
      unsigned long t883 = __elems849;
      int* ptr884 = &(t882)[t883];
      ref_tmp2876 = ptr884;
      int* r885 = auto_std____to_address_int__(&ref_tmp2876);
      int* t886 = __args845;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base881, r885, t886);
        int* t887 = __old_start847;
        int* t888 = __old_finish848;
        int* t889 = __new_start852;
        struct std___Vector_base_int__std__allocator_int__* base890 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t854 + 0);
        struct std__allocator_int_* r891 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base890);
        int* r892 = std__vector_int__std__allocator_int______S_relocate(t887, t888, t889, r891);
        __new_finish853 = r892;
        int* t893 = __new_finish853;
        int c894 = 1;
        int* ptr895 = &(t893)[c894];
        __new_finish853 = ptr895;
      int* t896 = __old_start847;
      __guard875._M_storage = t896;
      struct std___Vector_base_int__std__allocator_int__* base897 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t854 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base898 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base897->_M_impl) + 0);
      int* t899 = base898->_M_end_of_storage;
      int* t900 = __old_start847;
      long diff901 = t899 - t900;
      unsigned long cast902 = (unsigned long)diff901;
      __guard875._M_len = cast902;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard875);
    }
  int* t903 = __new_start852;
  struct std___Vector_base_int__std__allocator_int__* base904 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t854 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base905 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base904->_M_impl) + 0);
  base905->_M_start = t903;
  int* t906 = __new_finish853;
  struct std___Vector_base_int__std__allocator_int__* base907 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t854 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base908 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base907->_M_impl) + 0);
  base908->_M_finish = t906;
  int* t909 = __new_start852;
  unsigned long t910 = __len846;
  int* ptr911 = &(t909)[t910];
  struct std___Vector_base_int__std__allocator_int__* base912 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t854 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base913 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base912->_M_impl) + 0);
  base913->_M_end_of_storage = ptr911;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v914, int** v915) {
bb916:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this917;
  int** __i918;
  this917 = v914;
  __i918 = v915;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t919 = this917;
  int** t920 = __i918;
  int* t921 = *t920;
  t919->_M_current = t921;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmiEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v922, long v923) {
bb924:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this925;
  long __n926;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval927;
  int* ref_tmp0928;
  this925 = v922;
  __n926 = v923;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t929 = this925;
  int* t930 = t929->_M_current;
  long t931 = __n926;
  long u932 = -t931;
  int* ptr933 = &(t930)[u932];
  ref_tmp0928 = ptr933;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval927, &ref_tmp0928);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t934 = __retval927;
  return t934;
}

// function: _ZNSt6vectorIiSaIiEE4backEv
int* std__vector_int__std__allocator_int_____back(struct std__vector_int__std__allocator_int__* v935) {
bb936:
  struct std__vector_int__std__allocator_int__* this937;
  int* __retval938;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0939;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1940;
  this937 = v935;
  struct std__vector_int__std__allocator_int__* t941 = this937;
    do {
          _Bool r942 = std__vector_int__std__allocator_int_____empty___const(t941);
          if (r942) {
            char* cast943 = (char*)&(_str_5);
            int c944 = 1370;
            char* cast945 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv);
            char* cast946 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast943, c944, cast945, cast946);
          }
      _Bool c947 = 0;
      if (!c947) break;
    } while (1);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r948 = std__vector_int__std__allocator_int_____end(t941);
  ref_tmp1940 = r948;
  long c949 = 1;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r950 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp1940, c949);
  ref_tmp0939 = r950;
  int* r951 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0939);
  __retval938 = r951;
  int* t952 = __retval938;
  return t952;
}

// function: _ZNSt6vectorIiSaIiEE12emplace_backIJiEEERiDpOT_
int* int__std__vector_int__std__allocator_int_____emplace_back_int_(struct std__vector_int__std__allocator_int__* v953, int* v954) {
bb955:
  struct std__vector_int__std__allocator_int__* this956;
  int* __args957;
  int* __retval958;
  this956 = v953;
  __args957 = v954;
  struct std__vector_int__std__allocator_int__* t959 = this956;
    struct std___Vector_base_int__std__allocator_int__* base960 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t959 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base961 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base960->_M_impl) + 0);
    int* t962 = base961->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base963 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t959 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base964 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base963->_M_impl) + 0);
    int* t965 = base964->_M_end_of_storage;
    _Bool c966 = ((t962 != t965)) ? 1 : 0;
    if (c966) {
      struct std___Vector_base_int__std__allocator_int__* base967 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t959 + 0);
      struct std__allocator_int_* base968 = (struct std__allocator_int_*)((char *)&(base967->_M_impl) + 0);
      struct std___Vector_base_int__std__allocator_int__* base969 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t959 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base970 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base969->_M_impl) + 0);
      int* t971 = base970->_M_finish;
      int* t972 = __args957;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base968, t971, t972);
      struct std___Vector_base_int__std__allocator_int__* base973 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t959 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base974 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base973->_M_impl) + 0);
      int* t975 = base974->_M_finish;
      int c976 = 1;
      int* ptr977 = &(t975)[c976];
      base974->_M_finish = ptr977;
    } else {
      int* t978 = __args957;
      void_std__vector_int__std__allocator_int______M_realloc_append_int_(t959, t978);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
    }
  int* r979 = std__vector_int__std__allocator_int_____back(t959);
  __retval958 = r979;
  int* t980 = __retval958;
  return t980;
}

// function: _ZNSt6vectorIiSaIiEE9push_backEOi
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* v981, int* v982) {
bb983:
  struct std__vector_int__std__allocator_int__* this984;
  int* __x985;
  this984 = v981;
  __x985 = v982;
  struct std__vector_int__std__allocator_int__* t986 = this984;
  int* t987 = __x985;
  int* r988 = int__std__vector_int__std__allocator_int_____emplace_back_int_(t986, t987);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v989) {
bb990:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this991;
  this991 = v989;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t992 = this991;
  int* c993 = ((void*)0);
  t992->_M_current = c993;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v994) {
bb995:
  struct std__vector_int__std__allocator_int__* this996;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval997;
  this996 = v994;
  struct std__vector_int__std__allocator_int__* t998 = this996;
  struct std___Vector_base_int__std__allocator_int__* base999 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t998 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1000 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base999->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval997, &base1000->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1001 = __retval997;
  return t1001;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1002, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1003) {
bb1004:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1005;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed1006;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval1007;
  this1005 = v1002;
  unnamed1006 = v1003;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1008 = this1005;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1009 = unnamed1006;
  int* t1010 = t1009->_M_current;
  t1008->_M_current = t1010;
  __retval1007 = t1008;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1011 = __retval1007;
  return t1011;
}

// function: _ZStltSt15strong_orderingNSt9__cmp_cat8__unspecE
_Bool std__operator__4(struct std__strong_ordering v1012, struct std____cmp_cat____unspec v1013) {
bb1014:
  struct std__strong_ordering __v1015;
  struct std____cmp_cat____unspec unnamed1016;
  _Bool __retval1017;
  __v1015 = v1012;
  unnamed1016 = v1013;
  char t1018 = __v1015._M_value;
  int cast1019 = (int)t1018;
  int c1020 = 0;
  _Bool c1021 = ((cast1019 < c1020)) ? 1 : 0;
  __retval1017 = c1021;
  _Bool t1022 = __retval1017;
  return t1022;
}

// function: _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE
struct std__strong_ordering _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE(struct std____detail___Synth3way* v1023, int** v1024, int** v1025) {
bb1026:
  struct std____detail___Synth3way* this1027;
  int** __t1028;
  int** __u1029;
  struct std__strong_ordering __retval1030;
  this1027 = v1023;
  __t1028 = v1024;
  __u1029 = v1025;
  struct std____detail___Synth3way* t1031 = this1027;
    int** t1032 = __t1028;
    int* t1033 = *t1032;
    int** t1034 = __u1029;
    int* t1035 = *t1034;
    char c1036 = -1;
    char c1037 = 0;
    char c1038 = 1;
    _Bool c1039 = ((t1033 < t1035)) ? 1 : 0;
    char sel1040 = c1039 ? c1036 : c1038;
    _Bool c1041 = ((t1033 == t1035)) ? 1 : 0;
    char sel1042 = c1041 ? c1037 : sel1040;
    __retval1030._M_value = sel1042;
    struct std__strong_ordering t1043 = __retval1030;
    return t1043;
  abort();
}

// function: _ZN9__gnu_cxxssIPiSt6vectorIiSaIiEEEEDTclL_ZNSt8__detail11__synth3wayEEclsr3stdE7declvalIRT_EEclsr3stdE7declvalIS7_EEEERKNS_17__normal_iteratorIS6_T0_EESD_
struct std__strong_ordering decltype__std____detail____synth3way__std__declval_int_________std__declval_int___________gnu_cxx__operator____int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1044, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1045) {
bb1046:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs1047;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs1048;
  struct std__strong_ordering __retval1049;
  __lhs1047 = v1044;
  __rhs1048 = v1045;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1050 = __lhs1047;
  int** r1051 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t1050);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1052 = __rhs1048;
  int** r1053 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t1052);
  struct std__strong_ordering r1054 = _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE(&_ZNSt8__detail11__synth3wayE, r1051, r1053);
  __retval1049 = r1054;
  struct std__strong_ordering t1055 = __retval1049;
  return t1055;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v1056) {
bb1057:
  struct std__vector_int__std__allocator_int__* this1058;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1059;
  this1058 = v1056;
  struct std__vector_int__std__allocator_int__* t1060 = this1058;
  struct std___Vector_base_int__std__allocator_int__* base1061 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1060 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1062 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1061->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval1059, &base1062->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1063 = __retval1059;
  return t1063;
}

// function: _ZNSolsEPFRSt8ios_baseS0_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* v1064, void* v1065) {
bb1066:
  struct std__basic_ostream_char__std__char_traits_char__* this1067;
  void* __pf1068;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1069;
  this1067 = v1064;
  __pf1068 = v1065;
  struct std__basic_ostream_char__std__char_traits_char__* t1070 = this1067;
  void* t1071 = __pf1068;
  void** v1072 = (void**)t1070;
  void* v1073 = *((void**)v1072);
  unsigned char* cast1074 = (unsigned char*)v1073;
  long c1075 = -24;
  unsigned char* ptr1076 = &(cast1074)[c1075];
  long* cast1077 = (long*)ptr1076;
  long t1078 = *cast1077;
  unsigned char* cast1079 = (unsigned char*)t1070;
  unsigned char* ptr1080 = &(cast1079)[t1078];
  struct std__basic_ostream_char__std__char_traits_char__* cast1081 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1080;
  struct std__ios_base* cast1082 = (struct std__ios_base*)cast1081;
  struct std__ios_base* r1083 = ((struct std__ios_base* (*)(struct std__ios_base*))t1071)(cast1082);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval1069 = t1070;
  struct std__basic_ostream_char__std__char_traits_char__* t1084 = __retval1069;
  return t1084;
}

// function: _ZStaNRSt13_Ios_FmtflagsS_
int* std__operator__(int* v1085, int v1086) {
bb1087:
  int* __a1088;
  int __b1089;
  int* __retval1090;
  __a1088 = v1085;
  __b1089 = v1086;
  int* t1091 = __a1088;
  int t1092 = *t1091;
  int t1093 = __b1089;
  int r1094 = std__operator__2(t1092, t1093);
  int* t1095 = __a1088;
  *t1095 = r1094;
  __retval1090 = t1095;
  int* t1096 = __retval1090;
  return t1096;
}

// function: _ZStcoSt13_Ios_Fmtflags
int std__operator__3(int v1097) {
bb1098:
  int __a1099;
  int __retval1100;
  __a1099 = v1097;
  int t1101 = __a1099;
  int u1102 = ~t1101;
  __retval1100 = u1102;
  int t1103 = __retval1100;
  return t1103;
}

// function: _ZStorSt13_Ios_FmtflagsS_
int std__operator__6(int v1104, int v1105) {
bb1106:
  int __a1107;
  int __b1108;
  int __retval1109;
  __a1107 = v1104;
  __b1108 = v1105;
  int t1110 = __a1107;
  int t1111 = __b1108;
  int b1112 = t1110 | t1111;
  __retval1109 = b1112;
  int t1113 = __retval1109;
  return t1113;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* std__operator___2(int* v1114, int v1115) {
bb1116:
  int* __a1117;
  int __b1118;
  int* __retval1119;
  __a1117 = v1114;
  __b1118 = v1115;
  int* t1120 = __a1117;
  int t1121 = *t1120;
  int t1122 = __b1118;
  int r1123 = std__operator__6(t1121, t1122);
  int* t1124 = __a1117;
  *t1124 = r1123;
  __retval1119 = t1124;
  int* t1125 = __retval1119;
  return t1125;
}

// function: _ZStanSt13_Ios_FmtflagsS_
int std__operator__2(int v1126, int v1127) {
bb1128:
  int __a1129;
  int __b1130;
  int __retval1131;
  __a1129 = v1126;
  __b1130 = v1127;
  int t1132 = __a1129;
  int t1133 = __b1130;
  int b1134 = t1132 & t1133;
  __retval1131 = b1134;
  int t1135 = __retval1131;
  return t1135;
}

// function: _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
int std__ios_base__setf(struct std__ios_base* v1136, int v1137, int v1138) {
bb1139:
  struct std__ios_base* this1140;
  int __fmtfl1141;
  int __mask1142;
  int __retval1143;
  int __old1144;
  this1140 = v1136;
  __fmtfl1141 = v1137;
  __mask1142 = v1138;
  struct std__ios_base* t1145 = this1140;
  int t1146 = t1145->_M_flags;
  __old1144 = t1146;
  int t1147 = __mask1142;
  int r1148 = std__operator__3(t1147);
  int* r1149 = std__operator__(&t1145->_M_flags, r1148);
  int t1150 = __fmtfl1141;
  int t1151 = __mask1142;
  int r1152 = std__operator__2(t1150, t1151);
  int* r1153 = std__operator___2(&t1145->_M_flags, r1152);
  int t1154 = __old1144;
  __retval1143 = t1154;
  int t1155 = __retval1143;
  return t1155;
}

// function: _ZSt3hexRSt8ios_base
struct std__ios_base* std__hex(struct std__ios_base* v1156) {
bb1157:
  struct std__ios_base* __base1158;
  struct std__ios_base* __retval1159;
  __base1158 = v1156;
  struct std__ios_base* t1160 = __base1158;
  int t1161 = _ZNSt8ios_base3hexE_const;
  int t1162 = _ZNSt8ios_base9basefieldE_const;
  int r1163 = std__ios_base__setf(t1160, t1161, t1162);
  if (__cir_exc_active) {
    struct std__ios_base* __cir_eh_ret = (struct std__ios_base*)0;
    return __cir_eh_ret;
  }
  struct std__ios_base* t1164 = __base1158;
  __retval1159 = t1164;
  struct std__ios_base* t1165 = __retval1159;
  return t1165;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1166) {
bb1167:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1168;
  int* __retval1169;
  this1168 = v1166;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1170 = this1168;
  int* t1171 = t1170->_M_current;
  __retval1169 = t1171;
  int* t1172 = __retval1169;
  return t1172;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1173, int v1174) {
bb1175:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1176;
  int unnamed1177;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1178;
  int* ref_tmp01179;
  this1176 = v1173;
  unnamed1177 = v1174;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1180 = this1176;
  int* t1181 = t1180->_M_current;
  int c1182 = 1;
  int* ptr1183 = &(t1181)[c1182];
  t1180->_M_current = ptr1183;
  ref_tmp01179 = t1181;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval1178, &ref_tmp01179);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1184 = __retval1178;
  return t1184;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEED2Ev
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream_2(struct std__basic_ifstream_char__std__char_traits_char__* v1185, void** v1186) {
bb1187:
  struct std__basic_ifstream_char__std__char_traits_char__* this1188;
  void** vtt1189;
  this1188 = v1185;
  vtt1189 = v1186;
  struct std__basic_ifstream_char__std__char_traits_char__* t1190 = this1188;
  void** t1191 = vtt1189;
    {
      std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t1190->_M_filebuf);
    }
  {
    struct std__basic_istream_char__std__char_traits_char__* base1192 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t1190 + 0);
    static void *vtt_slot1193 = 0;
    void** vtt1194 = (void**)&vtt_slot1193;
    std__basic_istream_char__std__char_traits_char______basic_istream(base1192, vtt1194);
  }
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* v1195) {
bb1196:
  struct std__basic_ifstream_char__std__char_traits_char__* this1197;
  this1197 = v1195;
  struct std__basic_ifstream_char__std__char_traits_char__* t1198 = this1197;
    static void *vtt_slot1199 = 0;
    void** vtt1200 = (void**)&vtt_slot1199;
    std__basic_ifstream_char__std__char_traits_char______basic_ifstream_2(t1198, vtt1200);
  {
    struct std__basic_ios_char__std__char_traits_char__* base1201 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1198 + 256);
    std__basic_ios_char__std__char_traits_char______basic_ios(base1201);
  }
  return;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v1202) {
bb1203:
  struct std__vector_int__std__allocator_int__* this1204;
  this1204 = v1202;
  struct std__vector_int__std__allocator_int__* t1205 = this1204;
    struct std___Vector_base_int__std__allocator_int__* base1206 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1205 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1207 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1206->_M_impl) + 0);
    int* t1208 = base1207->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base1209 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1205 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1210 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1209->_M_impl) + 0);
    int* t1211 = base1210->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1212 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1205 + 0);
    struct std__allocator_int_* r1213 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1212);
    void_std___Destroy_int___int_(t1208, t1211, r1213);
    if (__cir_exc_active) {
      {
        struct std___Vector_base_int__std__allocator_int__* base1214 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1205 + 0);
        std___Vector_base_int__std__allocator_int_______Vector_base(base1214);
      }
      return;
    }
  {
    struct std___Vector_base_int__std__allocator_int__* base1215 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1205 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base1215);
  }
  return;
}

// function: main
int main() {
bb1216:
  int __retval1217;
  struct std__vector_int__std__allocator_int__ content1218;
  unsigned long filesize1219;
  struct std__basic_ifstream_char__std__char_traits_char__ file1220;
  int c1221 = 0;
  __retval1217 = c1221;
  std__vector_int__std__allocator_int_____vector(&content1218);
    _Bool r1222 = std__vector_int__std__allocator_int_____empty___const(&content1218);
    _Bool u1223 = !r1222;
    if (u1223) {
    } else {
      char* cast1224 = (char*)&(_str);
      char* c1225 = _str_1;
      unsigned int c1226 = 19;
      char* cast1227 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1224, c1225, c1226, cast1227);
    }
    char* cast1228 = (char*)&(_str_2);
    int t1229 = _ZNSt8ios_base2inE_const;
    int t1230 = _ZNSt8ios_base3ateE_const;
    int r1231 = std__operator__7(t1229, t1230);
    int t1232 = _ZNSt8ios_base6binaryE_const;
    int r1233 = std__operator__7(r1231, t1232);
    std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(&file1220, cast1228, r1233);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&content1218);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
        _Bool r1234 = std__basic_ifstream_char__std__char_traits_char_____is_open(&file1220);
        if (__cir_exc_active) {
          {
            std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&file1220);
          }
          {
            std__vector_int__std__allocator_int______vector(&content1218);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        if (r1234) {
          struct std__fpos___mbstate_t_ ref_tmp01235;
          struct std__fpos___mbstate_t_ agg_tmp01236;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it1237;
          struct std__basic_istream_char__std__char_traits_char__* base1238 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(file1220) + 0);
          struct std__fpos___mbstate_t_ r1239 = std__istream__tellg(base1238);
          if (__cir_exc_active) {
            {
              std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&file1220);
            }
            {
              std__vector_int__std__allocator_int______vector(&content1218);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          ref_tmp01235 = r1239;
          long r1240 = std__fpos___mbstate_t___operator_long___const(&ref_tmp01235);
          if (__cir_exc_active) {
            {
              std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&file1220);
            }
            {
              std__vector_int__std__allocator_int______vector(&content1218);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          unsigned long cast1241 = (unsigned long)r1240;
          filesize1219 = cast1241;
          unsigned long t1242 = filesize1219;
          std__vector_int__std__allocator_int_____reserve(&content1218, t1242);
          if (__cir_exc_active) {
            {
              std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&file1220);
            }
            {
              std__vector_int__std__allocator_int______vector(&content1218);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          struct std__basic_istream_char__std__char_traits_char__* base1243 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(file1220) + 0);
          long c1244 = 0;
          std__fpos___mbstate_t___fpos(&agg_tmp01236, c1244);
          if (__cir_exc_active) {
            {
              std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&file1220);
            }
            {
              std__vector_int__std__allocator_int______vector(&content1218);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          struct std__fpos___mbstate_t_ t1245 = agg_tmp01236;
          struct std__basic_istream_char__std__char_traits_char__* r1246 = std__istream__seekg(base1243, t1245);
          if (__cir_exc_active) {
            {
              std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&file1220);
            }
            {
              std__vector_int__std__allocator_int______vector(&content1218);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
            while (1) {
              void** v1247 = (void**)&(file1220);
              void* v1248 = *((void**)v1247);
              unsigned char* cast1249 = (unsigned char*)v1248;
              long c1250 = -24;
              unsigned char* ptr1251 = &(cast1249)[c1250];
              long* cast1252 = (long*)ptr1251;
              long t1253 = *cast1252;
              unsigned char* cast1254 = (unsigned char*)&(file1220);
              unsigned char* ptr1255 = &(cast1254)[t1253];
              struct std__basic_ifstream_char__std__char_traits_char__* cast1256 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr1255;
              struct std__basic_ios_char__std__char_traits_char__* cast1257 = (struct std__basic_ios_char__std__char_traits_char__*)cast1256;
              _Bool r1258 = std__basic_ios_char__std__char_traits_char_____eof___const(cast1257);
              if (__cir_exc_active) {
                {
                  std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&file1220);
                }
                {
                  std__vector_int__std__allocator_int______vector(&content1218);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              _Bool u1259 = !r1258;
              if (!u1259) break;
                int ref_tmp11260;
                struct std__basic_istream_char__std__char_traits_char__* base1261 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(file1220) + 0);
                int r1262 = std__istream__get(base1261);
                if (__cir_exc_active) {
                  {
                    std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&file1220);
                  }
                  {
                    std__vector_int__std__allocator_int______vector(&content1218);
                  }
                  int __cir_eh_ret = (int)0;
                  return __cir_eh_ret;
                }
                ref_tmp11260 = r1262;
                std__vector_int__std__allocator_int_____push_back(&content1218, &ref_tmp11260);
                if (__cir_exc_active) {
                  {
                    std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&file1220);
                  }
                  {
                    std__vector_int__std__allocator_int______vector(&content1218);
                  }
                  int __cir_eh_ret = (int)0;
                  return __cir_eh_ret;
                }
            }
          __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it1237);
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp21263;
            struct std__strong_ordering agg_tmp11264;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp31265;
            struct std____cmp_cat____unspec agg_tmp21266;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31267;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1268 = std__vector_int__std__allocator_int_____begin(&content1218);
            ref_tmp21263 = r1268;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1269 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it1237, &ref_tmp21263);
            while (1) {
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1271 = std__vector_int__std__allocator_int_____end(&content1218);
              ref_tmp31265 = r1271;
              struct std__strong_ordering r1272 = decltype__std____detail____synth3way__std__declval_int_________std__declval_int___________gnu_cxx__operator____int___std__vector_int__std__allocator_int_____(&it1237, &ref_tmp31265);
              agg_tmp11264 = r1272;
              agg_tmp21266 = *&__const_main_agg_tmp2; // copy
              struct std__strong_ordering t1273 = agg_tmp11264;
              struct std____cmp_cat____unspec t1274 = agg_tmp21266;
              _Bool r1275 = std__operator__4(t1273, t1274);
              if (!r1275) break;
              struct std__basic_ostream_char__std__char_traits_char__* r1276 = std__ostream__operator___std__ios_base_____(&_ZSt4cout, &std__hex);
              if (__cir_exc_active) {
                {
                  std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&file1220);
                }
                {
                  std__vector_int__std__allocator_int______vector(&content1218);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              int* r1277 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it1237);
              int t1278 = *r1277;
              struct std__basic_ostream_char__std__char_traits_char__* r1279 = std__ostream__operator__(r1276, t1278);
              if (__cir_exc_active) {
                {
                  std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&file1220);
                }
                {
                  std__vector_int__std__allocator_int______vector(&content1218);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
            for_step1270: ;
              int c1280 = 0;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1281 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&it1237, c1280);
              agg_tmp31267 = r1281;
            }
        }
      int c1282 = 0;
      __retval1217 = c1282;
      int t1283 = __retval1217;
      int ret_val1284 = t1283;
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&file1220);
      }
      {
        std__vector_int__std__allocator_int______vector(&content1218);
      }
      return ret_val1284;
  int t1285 = __retval1217;
  return t1285;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1286) {
bb1287:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1288;
  this1288 = v1286;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1289 = this1288;
  struct std__allocator_int_* base1290 = (struct std__allocator_int_*)((char *)t1289 + 0);
  std__allocator_int___allocator(base1290);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1291 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1289 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1291);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1292) {
bb1293:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1294;
  this1294 = v1292;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1295 = this1294;
  {
    struct std__allocator_int_* base1296 = (struct std__allocator_int_*)((char *)t1295 + 0);
    std__allocator_int____allocator(base1296);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1297) {
bb1298:
  struct std___Vector_base_int__std__allocator_int__* this1299;
  this1299 = v1297;
  struct std___Vector_base_int__std__allocator_int__* t1300 = this1299;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t1300->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1301:
  _Bool __retval1302;
    _Bool c1303 = 0;
    __retval1302 = c1303;
    _Bool t1304 = __retval1302;
    return t1304;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1305, int* v1306, unsigned long v1307) {
bb1308:
  struct std____new_allocator_int_* this1309;
  int* __p1310;
  unsigned long __n1311;
  this1309 = v1305;
  __p1310 = v1306;
  __n1311 = v1307;
  struct std____new_allocator_int_* t1312 = this1309;
    unsigned long c1313 = 4;
    unsigned long c1314 = 16;
    _Bool c1315 = ((c1313 > c1314)) ? 1 : 0;
    if (c1315) {
      int* t1316 = __p1310;
      void* cast1317 = (void*)t1316;
      unsigned long t1318 = __n1311;
      unsigned long c1319 = 4;
      unsigned long b1320 = t1318 * c1319;
      unsigned long c1321 = 4;
      operator_delete_3(cast1317, b1320, c1321);
      return;
    }
  int* t1322 = __p1310;
  void* cast1323 = (void*)t1322;
  unsigned long t1324 = __n1311;
  unsigned long c1325 = 4;
  unsigned long b1326 = t1324 * c1325;
  operator_delete_2(cast1323, b1326);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1327, int* v1328, unsigned long v1329) {
bb1330:
  struct std__allocator_int_* this1331;
  int* __p1332;
  unsigned long __n1333;
  this1331 = v1327;
  __p1332 = v1328;
  __n1333 = v1329;
  struct std__allocator_int_* t1334 = this1331;
    _Bool r1335 = std____is_constant_evaluated();
    if (r1335) {
      int* t1336 = __p1332;
      void* cast1337 = (void*)t1336;
      operator_delete(cast1337);
      return;
    }
  struct std____new_allocator_int_* base1338 = (struct std____new_allocator_int_*)((char *)t1334 + 0);
  int* t1339 = __p1332;
  unsigned long t1340 = __n1333;
  std____new_allocator_int___deallocate(base1338, t1339, t1340);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1341, int* v1342, unsigned long v1343) {
bb1344:
  struct std__allocator_int_* __a1345;
  int* __p1346;
  unsigned long __n1347;
  __a1345 = v1341;
  __p1346 = v1342;
  __n1347 = v1343;
  struct std__allocator_int_* t1348 = __a1345;
  int* t1349 = __p1346;
  unsigned long t1350 = __n1347;
  std__allocator_int___deallocate(t1348, t1349, t1350);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1351, int* v1352, unsigned long v1353) {
bb1354:
  struct std___Vector_base_int__std__allocator_int__* this1355;
  int* __p1356;
  unsigned long __n1357;
  this1355 = v1351;
  __p1356 = v1352;
  __n1357 = v1353;
  struct std___Vector_base_int__std__allocator_int__* t1358 = this1355;
    int* t1359 = __p1356;
    _Bool cast1360 = (_Bool)t1359;
    if (cast1360) {
      struct std__allocator_int_* base1361 = (struct std__allocator_int_*)((char *)&(t1358->_M_impl) + 0);
      int* t1362 = __p1356;
      unsigned long t1363 = __n1357;
      std__allocator_traits_std__allocator_int_____deallocate(base1361, t1362, t1363);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1364) {
bb1365:
  struct std___Vector_base_int__std__allocator_int__* this1366;
  this1366 = v1364;
  struct std___Vector_base_int__std__allocator_int__* t1367 = this1366;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1368 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1367->_M_impl) + 0);
    int* t1369 = base1368->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1370 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1367->_M_impl) + 0);
    int* t1371 = base1370->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1372 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1367->_M_impl) + 0);
    int* t1373 = base1372->_M_start;
    long diff1374 = t1371 - t1373;
    unsigned long cast1375 = (unsigned long)diff1374;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1367, t1369, cast1375);
    if (__cir_exc_active) {
      {
        std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1367->_M_impl);
      }
      return;
    }
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1367->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1376) {
bb1377:
  struct std____new_allocator_int_* this1378;
  this1378 = v1376;
  struct std____new_allocator_int_* t1379 = this1378;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1380) {
bb1381:
  struct std__allocator_int_* this1382;
  this1382 = v1380;
  struct std__allocator_int_* t1383 = this1382;
  struct std____new_allocator_int_* base1384 = (struct std____new_allocator_int_*)((char *)t1383 + 0);
  std____new_allocator_int_____new_allocator(base1384);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1385) {
bb1386:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1387;
  this1387 = v1385;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1388 = this1387;
  int* c1389 = ((void*)0);
  t1388->_M_start = c1389;
  int* c1390 = ((void*)0);
  t1388->_M_finish = c1390;
  int* c1391 = ((void*)0);
  t1388->_M_end_of_storage = c1391;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1392) {
bb1393:
  struct std__allocator_int_* this1394;
  this1394 = v1392;
  struct std__allocator_int_* t1395 = this1394;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1396, int* v1397) {
bb1398:
  int* __first1399;
  int* __last1400;
  __first1399 = v1396;
  __last1400 = v1397;
      _Bool r1401 = std____is_constant_evaluated();
      if (r1401) {
          while (1) {
            int* t1403 = __first1399;
            int* t1404 = __last1400;
            _Bool c1405 = ((t1403 != t1404)) ? 1 : 0;
            if (!c1405) break;
            int* t1406 = __first1399;
            void_std__destroy_at_int_(t1406);
            if (__cir_exc_active) {
              return;
            }
          for_step1402: ;
            int* t1407 = __first1399;
            int c1408 = 1;
            int* ptr1409 = &(t1407)[c1408];
            __first1399 = ptr1409;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1410, int* v1411, struct std__allocator_int_* v1412) {
bb1413:
  int* __first1414;
  int* __last1415;
  struct std__allocator_int_* unnamed1416;
  __first1414 = v1410;
  __last1415 = v1411;
  unnamed1416 = v1412;
  int* t1417 = __first1414;
  int* t1418 = __last1415;
  void_std___Destroy_int__(t1417, t1418);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v1419) {
bb1420:
  struct std__basic_streambuf_char__std__char_traits_char__* this1421;
  this1421 = v1419;
  struct std__basic_streambuf_char__std__char_traits_char__* t1422 = this1421;
  {
    std__locale___locale(&t1422->_M_buf_locale);
  }
  return;
}

