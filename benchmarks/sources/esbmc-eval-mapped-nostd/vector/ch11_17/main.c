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
char _str[9] = "test.bin";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[16] = "vector::reserve";
char _str_2[26] = "vector::_M_realloc_append";
char _str_3[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_4[15] = "!this->empty()";
struct std____detail___Synth3way _ZNSt8__detail11__synth3wayE;
extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0);
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
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p1);
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* p0);
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* p0);
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

// function: _ZStorSt13_Ios_OpenmodeS_
int std__operator__7(int v5, int v6) {
bb7:
  int __a8;
  int __b9;
  int __retval10;
  __a8 = v5;
  __b9 = v6;
  int t11 = __a8;
  int t12 = __b9;
  int b13 = t11 | t12;
  __retval10 = b13;
  int t14 = __retval10;
  return t14;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEEC2Ev
void std__basic_ios_char__std__char_traits_char_____basic_ios(struct std__basic_ios_char__std__char_traits_char__* v15) {
bb16:
  struct std__basic_ios_char__std__char_traits_char__* this17;
  this17 = v15;
  struct std__basic_ios_char__std__char_traits_char__* t18 = this17;
  struct std__ios_base* base19 = (struct std__ios_base*)((char *)t18 + 0);
  std__ios_base__ios_base(base19);
    void* v20 = (void*)&_ZTVSt9basic_iosIcSt11char_traitsIcEE[2];
    void** v21 = (void**)t18;
    *(void**)(v21) = (void*)v20;
    struct std__basic_ostream_char__std__char_traits_char__* c22 = ((void*)0);
    t18->_M_tie = c22;
    char c23 = 0;
    t18->_M_fill = c23;
    _Bool c24 = 0;
    t18->_M_fill_init = c24;
    struct std__basic_streambuf_char__std__char_traits_char__* c25 = ((void*)0);
    t18->_M_streambuf = c25;
    struct std__ctype_char_* c26 = ((void*)0);
    t18->_M_ctype = c26;
    struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* c27 = ((void*)0);
    t18->_M_num_put = c27;
    struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* c28 = ((void*)0);
    t18->_M_num_get = c28;
  return;
}

// function: _ZNSiC2Ev
void std__basic_istream_char__std__char_traits_char_____basic_istream(struct std__basic_istream_char__std__char_traits_char__* v29, void** v30) {
bb31:
  struct std__basic_istream_char__std__char_traits_char__* this32;
  void** vtt33;
  this32 = v29;
  vtt33 = v30;
  struct std__basic_istream_char__std__char_traits_char__* t34 = this32;
  void** t35 = vtt33;
  static void *vtt_slot36 = 0;
  void** vtt37 = (void**)&vtt_slot36;
  void** cast38 = (void**)vtt37;
  void* t39 = *cast38;
  void** v40 = (void**)t34;
  *(void**)(v40) = (void*)t39;
  static void *vtt_slot41 = 0;
  void** vtt42 = (void**)&vtt_slot41;
  void** cast43 = (void**)vtt42;
  void* t44 = *cast43;
  void** v45 = (void**)t34;
  void* v46 = *((void**)v45);
  unsigned char* cast47 = (unsigned char*)v46;
  long c48 = -24;
  unsigned char* ptr49 = &(cast47)[c48];
  long* cast50 = (long*)ptr49;
  long t51 = *cast50;
  unsigned char* cast52 = (unsigned char*)t34;
  unsigned char* ptr53 = &(cast52)[t51];
  struct std__basic_istream_char__std__char_traits_char__* cast54 = (struct std__basic_istream_char__std__char_traits_char__*)ptr53;
  void** v55 = (void**)cast54;
  *(void**)(v55) = (void*)t44;
  long c56 = 0;
  t34->_M_gcount = c56;
  void** v57 = (void**)t34;
  void* v58 = *((void**)v57);
  unsigned char* cast59 = (unsigned char*)v58;
  long c60 = -24;
  unsigned char* ptr61 = &(cast59)[c60];
  long* cast62 = (long*)ptr61;
  long t63 = *cast62;
  unsigned char* cast64 = (unsigned char*)t34;
  unsigned char* ptr65 = &(cast64)[t63];
  struct std__basic_istream_char__std__char_traits_char__* cast66 = (struct std__basic_istream_char__std__char_traits_char__*)ptr65;
  struct std__basic_ios_char__std__char_traits_char__* cast67 = (struct std__basic_ios_char__std__char_traits_char__*)cast66;
  struct std__basic_streambuf_char__std__char_traits_char__* c68 = ((void*)0);
  std__basic_ios_char__std__char_traits_char_____init(cast67, c68);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__5(int v69, int v70) {
bb71:
  int __a72;
  int __b73;
  int __retval74;
  __a72 = v69;
  __b73 = v70;
  int t75 = __a72;
  int t76 = __b73;
  int b77 = t75 | t76;
  __retval74 = b77;
  int t78 = __retval74;
  return t78;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v79) {
bb80:
  struct std__basic_ios_char__std__char_traits_char__* this81;
  int __retval82;
  this81 = v79;
  struct std__basic_ios_char__std__char_traits_char__* t83 = this81;
  struct std__ios_base* base84 = (struct std__ios_base*)((char *)t83 + 0);
  int t85 = base84->_M_streambuf_state;
  __retval82 = t85;
  int t86 = __retval82;
  return t86;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v87, int v88) {
bb89:
  struct std__basic_ios_char__std__char_traits_char__* this90;
  int __state91;
  this90 = v87;
  __state91 = v88;
  struct std__basic_ios_char__std__char_traits_char__* t92 = this90;
  int r93 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t92);
  if (__cir_exc_active) {
    return;
  }
  int t94 = __state91;
  int r95 = std__operator__5(r93, t94);
  std__basic_ios_char__std__char_traits_char_____clear(t92, r95);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode
void std__basic_ifstream_char__std__char_traits_char_____open(struct std__basic_ifstream_char__std__char_traits_char__* v96, char* v97, int v98) {
bb99:
  struct std__basic_ifstream_char__std__char_traits_char__* this100;
  char* __s101;
  int __mode102;
  this100 = v96;
  __s101 = v97;
  __mode102 = v98;
  struct std__basic_ifstream_char__std__char_traits_char__* t103 = this100;
    char* t104 = __s101;
    int t105 = __mode102;
    int t106 = _ZNSt8ios_base2inE_const;
    int r107 = std__operator__7(t105, t106);
    struct std__basic_filebuf_char__std__char_traits_char__* r108 = std__basic_filebuf_char__std__char_traits_char_____open(&t103->_M_filebuf, t104, r107);
    if (__cir_exc_active) {
      return;
    }
    _Bool cast109 = (_Bool)r108;
    _Bool u110 = !cast109;
    if (u110) {
      void** v111 = (void**)t103;
      void* v112 = *((void**)v111);
      unsigned char* cast113 = (unsigned char*)v112;
      long c114 = -24;
      unsigned char* ptr115 = &(cast113)[c114];
      long* cast116 = (long*)ptr115;
      long t117 = *cast116;
      unsigned char* cast118 = (unsigned char*)t103;
      unsigned char* ptr119 = &(cast118)[t117];
      struct std__basic_ifstream_char__std__char_traits_char__* cast120 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr119;
      struct std__basic_ios_char__std__char_traits_char__* cast121 = (struct std__basic_ios_char__std__char_traits_char__*)cast120;
      int t122 = _ZNSt8ios_base7failbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast121, t122);
      if (__cir_exc_active) {
        return;
      }
    } else {
      void** v123 = (void**)t103;
      void* v124 = *((void**)v123);
      unsigned char* cast125 = (unsigned char*)v124;
      long c126 = -24;
      unsigned char* ptr127 = &(cast125)[c126];
      long* cast128 = (long*)ptr127;
      long t129 = *cast128;
      unsigned char* cast130 = (unsigned char*)t103;
      unsigned char* ptr131 = &(cast130)[t129];
      struct std__basic_ifstream_char__std__char_traits_char__* cast132 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr131;
      struct std__basic_ios_char__std__char_traits_char__* cast133 = (struct std__basic_ios_char__std__char_traits_char__*)cast132;
      int t134 = _ZNSt8ios_base7goodbitE_const;
      std__basic_ios_char__std__char_traits_char_____clear(cast133, t134);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt13basic_filebufIcSt11char_traitsIcEED2Ev
void std__basic_filebuf_char__std__char_traits_char______basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* v135) {
bb136:
  struct std__basic_filebuf_char__std__char_traits_char__* this137;
  this137 = v135;
  struct std__basic_filebuf_char__std__char_traits_char__* t138 = this137;
          struct std__basic_filebuf_char__std__char_traits_char__* r140 = std__basic_filebuf_char__std__char_traits_char_____close(t138);
          if (__cir_exc_active) {
            {
              std____basic_file_char______basic_file(&t138->_M_file);
            }
            {
              struct std__basic_streambuf_char__std__char_traits_char__* base141 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t138 + 0);
              std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base141);
            }
            goto cir_try_dispatch139;
          }
        cir_try_dispatch139: ;
        if (__cir_exc_active) {
        {
          int ca_tok142 = 0;
          void* ca_exn143 = (void*)__cir_exc_ptr;
          __cir_exc_active = 0;
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
        }
        }
    {
      std____basic_file_char______basic_file(&t138->_M_file);
    }
  {
    struct std__basic_streambuf_char__std__char_traits_char__* base144 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t138 + 0);
    std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base144);
  }
  return;
}

// function: _ZNSiD2Ev
void std__basic_istream_char__std__char_traits_char______basic_istream(struct std__basic_istream_char__std__char_traits_char__* v145, void** v146) {
bb147:
  struct std__basic_istream_char__std__char_traits_char__* this148;
  void** vtt149;
  this148 = v145;
  vtt149 = v146;
  struct std__basic_istream_char__std__char_traits_char__* t150 = this148;
  void** t151 = vtt149;
  long c152 = 0;
  t150->_M_gcount = c152;
  return;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEED2Ev
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* v153) {
bb154:
  struct std__basic_ios_char__std__char_traits_char__* this155;
  this155 = v153;
  struct std__basic_ios_char__std__char_traits_char__* t156 = this155;
  {
    struct std__ios_base* base157 = (struct std__ios_base*)((char *)t156 + 0);
    std__ios_base___ios_base(base157);
  }
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode
void std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* v158, char* v159, int v160) {
bb161:
  struct std__basic_ifstream_char__std__char_traits_char__* this162;
  char* __s163;
  int __mode164;
  this162 = v158;
  __s163 = v159;
  __mode164 = v160;
  struct std__basic_ifstream_char__std__char_traits_char__* t165 = this162;
  struct std__basic_ios_char__std__char_traits_char__* base166 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t165 + 256);
  std__basic_ios_char__std__char_traits_char_____basic_ios(base166);
  if (__cir_exc_active) {
    return;
  }
    struct std__basic_istream_char__std__char_traits_char__* base167 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t165 + 0);
    static void *vtt_slot168 = 0;
    void** vtt169 = (void**)&vtt_slot168;
    std__basic_istream_char__std__char_traits_char_____basic_istream(base167, vtt169);
    if (__cir_exc_active) {
      {
        struct std__basic_ios_char__std__char_traits_char__* base170 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t165 + 256);
        std__basic_ios_char__std__char_traits_char______basic_ios(base170);
      }
      return;
    }
      void* v171 = (void*)&_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[3];
      void** v172 = (void**)t165;
      *(void**)(v172) = (void*)v171;
      void* v173 = (void*)&_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[3];
      struct std__basic_ios_char__std__char_traits_char__* base174 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t165 + 256);
      void** v175 = (void**)base174;
      *(void**)(v175) = (void*)v173;
      std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(&t165->_M_filebuf);
      if (__cir_exc_active) {
        {
          struct std__basic_istream_char__std__char_traits_char__* base176 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t165 + 0);
          static void *vtt_slot177 = 0;
          void** vtt178 = (void**)&vtt_slot177;
          std__basic_istream_char__std__char_traits_char______basic_istream(base176, vtt178);
        }
        {
          struct std__basic_ios_char__std__char_traits_char__* base179 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t165 + 256);
          std__basic_ios_char__std__char_traits_char______basic_ios(base179);
        }
        return;
      }
        void** v180 = (void**)t165;
        void* v181 = *((void**)v180);
        unsigned char* cast182 = (unsigned char*)v181;
        long c183 = -24;
        unsigned char* ptr184 = &(cast182)[c183];
        long* cast185 = (long*)ptr184;
        long t186 = *cast185;
        unsigned char* cast187 = (unsigned char*)t165;
        unsigned char* ptr188 = &(cast187)[t186];
        struct std__basic_ifstream_char__std__char_traits_char__* cast189 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr188;
        struct std__basic_ios_char__std__char_traits_char__* cast190 = (struct std__basic_ios_char__std__char_traits_char__*)cast189;
        struct std__basic_streambuf_char__std__char_traits_char__* base191 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)&(t165->_M_filebuf) + 0);
        std__basic_ios_char__std__char_traits_char_____init(cast190, base191);
        if (__cir_exc_active) {
          {
            std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t165->_M_filebuf);
          }
          {
            struct std__basic_istream_char__std__char_traits_char__* base192 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t165 + 0);
            static void *vtt_slot193 = 0;
            void** vtt194 = (void**)&vtt_slot193;
            std__basic_istream_char__std__char_traits_char______basic_istream(base192, vtt194);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base195 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t165 + 256);
            std__basic_ios_char__std__char_traits_char______basic_ios(base195);
          }
          return;
        }
        char* t196 = __s163;
        int t197 = __mode164;
        std__basic_ifstream_char__std__char_traits_char_____open(t165, t196, t197);
        if (__cir_exc_active) {
          {
            std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t165->_M_filebuf);
          }
          {
            struct std__basic_istream_char__std__char_traits_char__* base198 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t165 + 0);
            static void *vtt_slot199 = 0;
            void** vtt200 = (void**)&vtt_slot199;
            std__basic_istream_char__std__char_traits_char______basic_istream(base198, vtt200);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base201 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t165 + 256);
            std__basic_ios_char__std__char_traits_char______basic_ios(base201);
          }
          return;
        }
  return;
}

// function: _ZNKSt13basic_filebufIcSt11char_traitsIcEE7is_openEv
_Bool std__basic_filebuf_char__std__char_traits_char_____is_open___const(struct std__basic_filebuf_char__std__char_traits_char__* v202) {
bb203:
  struct std__basic_filebuf_char__std__char_traits_char__* this204;
  _Bool __retval205;
  this204 = v202;
  struct std__basic_filebuf_char__std__char_traits_char__* t206 = this204;
  _Bool r207 = std____basic_file_char___is_open___const(&t206->_M_file);
  __retval205 = r207;
  _Bool t208 = __retval205;
  return t208;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEE7is_openEv
_Bool std__basic_ifstream_char__std__char_traits_char_____is_open(struct std__basic_ifstream_char__std__char_traits_char__* v209) {
bb210:
  struct std__basic_ifstream_char__std__char_traits_char__* this211;
  _Bool __retval212;
  this211 = v209;
  struct std__basic_ifstream_char__std__char_traits_char__* t213 = this211;
  _Bool r214 = std__basic_filebuf_char__std__char_traits_char_____is_open___const(&t213->_M_filebuf);
  __retval212 = r214;
  _Bool t215 = __retval212;
  return t215;
}

// function: _ZNKSt4fposI11__mbstate_tEcvlEv
long std__fpos___mbstate_t___operator_long___const(struct std__fpos___mbstate_t_* v216) {
bb217:
  struct std__fpos___mbstate_t_* this218;
  long __retval219;
  this218 = v216;
  struct std__fpos___mbstate_t_* t220 = this218;
  long t221 = t220->_M_off;
  __retval219 = t221;
  long t222 = __retval219;
  return t222;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v223, unsigned long* v224) {
bb225:
  unsigned long* __a226;
  unsigned long* __b227;
  unsigned long* __retval228;
  __a226 = v223;
  __b227 = v224;
    unsigned long* t229 = __b227;
    unsigned long t230 = *t229;
    unsigned long* t231 = __a226;
    unsigned long t232 = *t231;
    _Bool c233 = ((t230 < t232)) ? 1 : 0;
    if (c233) {
      unsigned long* t234 = __b227;
      __retval228 = t234;
      unsigned long* t235 = __retval228;
      return t235;
    }
  unsigned long* t236 = __a226;
  __retval228 = t236;
  unsigned long* t237 = __retval228;
  return t237;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v238) {
bb239:
  struct std__allocator_int_* __a240;
  unsigned long __retval241;
  unsigned long __diffmax242;
  unsigned long __allocmax243;
  __a240 = v238;
  unsigned long c244 = 2305843009213693951;
  __diffmax242 = c244;
  unsigned long c245 = 4611686018427387903;
  __allocmax243 = c245;
  unsigned long* r246 = unsigned_long_const__std__min_unsigned_long_(&__diffmax242, &__allocmax243);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t247 = *r246;
  __retval241 = t247;
  unsigned long t248 = __retval241;
  return t248;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v249) {
bb250:
  struct std___Vector_base_int__std__allocator_int__* this251;
  struct std__allocator_int_* __retval252;
  this251 = v249;
  struct std___Vector_base_int__std__allocator_int__* t253 = this251;
  struct std__allocator_int_* base254 = (struct std__allocator_int_*)((char *)&(t253->_M_impl) + 0);
  __retval252 = base254;
  struct std__allocator_int_* t255 = __retval252;
  return t255;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v256) {
bb257:
  struct std__vector_int__std__allocator_int__* this258;
  unsigned long __retval259;
  this258 = v256;
  struct std__vector_int__std__allocator_int__* t260 = this258;
  struct std___Vector_base_int__std__allocator_int__* base261 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t260 + 0);
  struct std__allocator_int_* r262 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base261);
  unsigned long r263 = std__vector_int__std__allocator_int______S_max_size(r262);
  __retval259 = r263;
  unsigned long t264 = __retval259;
  return t264;
}

// function: _ZNKSt6vectorIiSaIiEE8capacityEv
unsigned long std__vector_int__std__allocator_int_____capacity___const(struct std__vector_int__std__allocator_int__* v265) {
bb266:
  struct std__vector_int__std__allocator_int__* this267;
  unsigned long __retval268;
  long __dif269;
  this267 = v265;
  struct std__vector_int__std__allocator_int__* t270 = this267;
  struct std___Vector_base_int__std__allocator_int__* base271 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t270 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base272 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base271->_M_impl) + 0);
  int* t273 = base272->_M_end_of_storage;
  struct std___Vector_base_int__std__allocator_int__* base274 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t270 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base275 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base274->_M_impl) + 0);
  int* t276 = base275->_M_start;
  long diff277 = t273 - t276;
  __dif269 = diff277;
    long t278 = __dif269;
    long c279 = 0;
    _Bool c280 = ((t278 < c279)) ? 1 : 0;
    if (c280) {
      __builtin_unreachable();
    }
  long t281 = __dif269;
  unsigned long cast282 = (unsigned long)t281;
  __retval268 = cast282;
  unsigned long t283 = __retval268;
  return t283;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v284) {
bb285:
  struct std__vector_int__std__allocator_int__* this286;
  unsigned long __retval287;
  long __dif288;
  this286 = v284;
  struct std__vector_int__std__allocator_int__* t289 = this286;
  struct std___Vector_base_int__std__allocator_int__* base290 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t289 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base291 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base290->_M_impl) + 0);
  int* t292 = base291->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base293 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t289 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base294 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base293->_M_impl) + 0);
  int* t295 = base294->_M_start;
  long diff296 = t292 - t295;
  __dif288 = diff296;
    long t297 = __dif288;
    long c298 = 0;
    _Bool c299 = ((t297 < c298)) ? 1 : 0;
    if (c299) {
      __builtin_unreachable();
    }
  long t300 = __dif288;
  unsigned long cast301 = (unsigned long)t300;
  __retval287 = cast301;
  unsigned long t302 = __retval287;
  return t302;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v303) {
bb304:
  struct std____new_allocator_int_* this305;
  unsigned long __retval306;
  this305 = v303;
  struct std____new_allocator_int_* t307 = this305;
  unsigned long c308 = 9223372036854775807;
  unsigned long c309 = 4;
  unsigned long b310 = c308 / c309;
  __retval306 = b310;
  unsigned long t311 = __retval306;
  return t311;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v312, unsigned long v313, void* v314) {
bb315:
  struct std____new_allocator_int_* this316;
  unsigned long __n317;
  void* unnamed318;
  int* __retval319;
  this316 = v312;
  __n317 = v313;
  unnamed318 = v314;
  struct std____new_allocator_int_* t320 = this316;
    unsigned long t321 = __n317;
    unsigned long r322 = std____new_allocator_int____M_max_size___const(t320);
    _Bool c323 = ((t321 > r322)) ? 1 : 0;
    if (c323) {
        unsigned long t324 = __n317;
        unsigned long c325 = -1;
        unsigned long c326 = 4;
        unsigned long b327 = c325 / c326;
        _Bool c328 = ((t324 > b327)) ? 1 : 0;
        if (c328) {
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
    unsigned long c329 = 4;
    unsigned long c330 = 16;
    _Bool c331 = ((c329 > c330)) ? 1 : 0;
    if (c331) {
      unsigned long __al332;
      unsigned long c333 = 4;
      __al332 = c333;
      unsigned long t334 = __n317;
      unsigned long c335 = 4;
      unsigned long b336 = t334 * c335;
      unsigned long t337 = __al332;
      void* r338 = operator_new_2(b336, t337);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast339 = (int*)r338;
      __retval319 = cast339;
      int* t340 = __retval319;
      return t340;
    }
  unsigned long t341 = __n317;
  unsigned long c342 = 4;
  unsigned long b343 = t341 * c342;
  void* r344 = operator_new(b343);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast345 = (int*)r344;
  __retval319 = cast345;
  int* t346 = __retval319;
  return t346;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v347, unsigned long v348) {
bb349:
  struct std__allocator_int_* this350;
  unsigned long __n351;
  int* __retval352;
  this350 = v347;
  __n351 = v348;
  struct std__allocator_int_* t353 = this350;
    _Bool r354 = std____is_constant_evaluated();
    if (r354) {
        unsigned long t355 = __n351;
        unsigned long c356 = 4;
        unsigned long ovr357;
        _Bool ovf358 = __builtin_mul_overflow(t355, c356, &ovr357);
        __n351 = ovr357;
        if (ovf358) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t359 = __n351;
      void* r360 = operator_new(t359);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast361 = (int*)r360;
      __retval352 = cast361;
      int* t362 = __retval352;
      return t362;
    }
  struct std____new_allocator_int_* base363 = (struct std____new_allocator_int_*)((char *)t353 + 0);
  unsigned long t364 = __n351;
  void* c365 = ((void*)0);
  int* r366 = std____new_allocator_int___allocate(base363, t364, c365);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval352 = r366;
  int* t367 = __retval352;
  return t367;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v368, unsigned long v369) {
bb370:
  struct std__allocator_int_* __a371;
  unsigned long __n372;
  int* __retval373;
  __a371 = v368;
  __n372 = v369;
  struct std__allocator_int_* t374 = __a371;
  unsigned long t375 = __n372;
  int* r376 = std__allocator_int___allocate(t374, t375);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval373 = r376;
  int* t377 = __retval373;
  return t377;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v378, unsigned long v379) {
bb380:
  struct std___Vector_base_int__std__allocator_int__* this381;
  unsigned long __n382;
  int* __retval383;
  this381 = v378;
  __n382 = v379;
  struct std___Vector_base_int__std__allocator_int__* t384 = this381;
  unsigned long t385 = __n382;
  unsigned long c386 = 0;
  _Bool c387 = ((t385 != c386)) ? 1 : 0;
  int* ternary388;
  if (c387) {
    struct std__allocator_int_* base389 = (struct std__allocator_int_*)((char *)&(t384->_M_impl) + 0);
    unsigned long t390 = __n382;
    int* r391 = std__allocator_traits_std__allocator_int_____allocate(base389, t390);
    if (__cir_exc_active) {
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    ternary388 = (int*)r391;
  } else {
    int* c392 = ((void*)0);
    ternary388 = (int*)c392;
  }
  __retval383 = ternary388;
  int* t393 = __retval383;
  return t393;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb394:
  _Bool __retval395;
    _Bool c396 = 0;
    __retval395 = c396;
    _Bool t397 = __retval395;
    return t397;
  abort();
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v398, int** v399) {
bb400:
  struct __gnu_cxx____normal_iterator_int____void_* this401;
  int** __i402;
  this401 = v398;
  __i402 = v399;
  struct __gnu_cxx____normal_iterator_int____void_* t403 = this401;
  int** t404 = __i402;
  int* t405 = *t404;
  t403->_M_current = t405;
  return;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v406, int* v407) {
bb408:
  int* __location409;
  int* __args410;
  int* __retval411;
  void* __loc412;
  __location409 = v406;
  __args410 = v407;
  int* t413 = __location409;
  void* cast414 = (void*)t413;
  __loc412 = cast414;
    void* t415 = __loc412;
    int* cast416 = (int*)t415;
    int* t417 = __args410;
    int t418 = *t417;
    *cast416 = t418;
    __retval411 = cast416;
    int* t419 = __retval411;
    return t419;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v420, int* v421, int* v422) {
bb423:
  struct std__allocator_int_* __a424;
  int* __p425;
  int* __args426;
  __a424 = v420;
  __p425 = v421;
  __args426 = v422;
  int* t427 = __p425;
  int* t428 = __args426;
  int* r429 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t427, t428);
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v430) {
bb431:
  int* __location432;
  __location432 = v430;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v433, int* v434) {
bb435:
  struct std__allocator_int_* __a436;
  int* __p437;
  __a436 = v433;
  __p437 = v434;
  int* t438 = __p437;
  void_std__destroy_at_int_(t438);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v439, int* v440, struct std__allocator_int_* v441) {
bb442:
  int* __dest443;
  int* __orig444;
  struct std__allocator_int_* __alloc445;
  __dest443 = v439;
  __orig444 = v440;
  __alloc445 = v441;
  struct std__allocator_int_* t446 = __alloc445;
  int* t447 = __dest443;
  int* t448 = __orig444;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t446, t447, t448);
  struct std__allocator_int_* t449 = __alloc445;
  int* t450 = __orig444;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t449, t450);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v451) {
bb452:
  struct __gnu_cxx____normal_iterator_int____void_* this453;
  int* __retval454;
  this453 = v451;
  struct __gnu_cxx____normal_iterator_int____void_* t455 = this453;
  int* t456 = t455->_M_current;
  __retval454 = t456;
  int* t457 = __retval454;
  return t457;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v458) {
bb459:
  struct __gnu_cxx____normal_iterator_int____void_* this460;
  struct __gnu_cxx____normal_iterator_int____void_* __retval461;
  this460 = v458;
  struct __gnu_cxx____normal_iterator_int____void_* t462 = this460;
  int* t463 = t462->_M_current;
  int c464 = 1;
  int* ptr465 = &(t463)[c464];
  t462->_M_current = ptr465;
  __retval461 = t462;
  struct __gnu_cxx____normal_iterator_int____void_* t466 = __retval461;
  return t466;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v467, int* v468, struct __gnu_cxx____normal_iterator_int____void_ v469, struct std__allocator_int_* v470) {
bb471:
  int* __first472;
  int* __last473;
  struct __gnu_cxx____normal_iterator_int____void_ __result474;
  struct std__allocator_int_* __alloc475;
  struct __gnu_cxx____normal_iterator_int____void_ __retval476;
  __first472 = v467;
  __last473 = v468;
  __result474 = v469;
  __alloc475 = v470;
  __retval476 = __result474; // copy
    while (1) {
      int* t478 = __first472;
      int* t479 = __last473;
      _Bool c480 = ((t478 != t479)) ? 1 : 0;
      if (!c480) break;
      int* r481 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval476);
      int* t482 = __first472;
      struct std__allocator_int_* t483 = __alloc475;
      void_std____relocate_object_a_int__int__std__allocator_int___(r481, t482, t483);
    for_step477: ;
      int* t484 = __first472;
      int c485 = 1;
      int* ptr486 = &(t484)[c485];
      __first472 = ptr486;
      struct __gnu_cxx____normal_iterator_int____void_* r487 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval476);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t488 = __retval476;
  return t488;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v489, struct __gnu_cxx____normal_iterator_int____void_* v490) {
bb491:
  struct __gnu_cxx____normal_iterator_int____void_* this492;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed493;
  struct __gnu_cxx____normal_iterator_int____void_* __retval494;
  this492 = v489;
  unnamed493 = v490;
  struct __gnu_cxx____normal_iterator_int____void_* t495 = this492;
  struct __gnu_cxx____normal_iterator_int____void_* t496 = unnamed493;
  int* t497 = t496->_M_current;
  t495->_M_current = t497;
  __retval494 = t495;
  struct __gnu_cxx____normal_iterator_int____void_* t498 = __retval494;
  return t498;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v499) {
bb500:
  struct __gnu_cxx____normal_iterator_int____void_* this501;
  int** __retval502;
  this501 = v499;
  struct __gnu_cxx____normal_iterator_int____void_* t503 = this501;
  __retval502 = &t503->_M_current;
  int** t504 = __retval502;
  return t504;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v505, int* v506, int* v507, struct std__allocator_int_* v508) {
bb509:
  int* __first510;
  int* __last511;
  int* __result512;
  struct std__allocator_int_* __alloc513;
  int* __retval514;
  long __count515;
  __first510 = v505;
  __last511 = v506;
  __result512 = v507;
  __alloc513 = v508;
  int* t516 = __last511;
  int* t517 = __first510;
  long diff518 = t516 - t517;
  __count515 = diff518;
    long t519 = __count515;
    long c520 = 0;
    _Bool c521 = ((t519 > c520)) ? 1 : 0;
    if (c521) {
        _Bool r522 = std__is_constant_evaluated();
        if (r522) {
          struct __gnu_cxx____normal_iterator_int____void_ __out523;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0524;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0525;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out523, &__result512);
          int* t526 = __first510;
          int* t527 = __last511;
          agg_tmp0525 = __out523; // copy
          struct std__allocator_int_* t528 = __alloc513;
          struct __gnu_cxx____normal_iterator_int____void_ t529 = agg_tmp0525;
          struct __gnu_cxx____normal_iterator_int____void_ r530 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t526, t527, t529, t528);
          ref_tmp0524 = r530;
          struct __gnu_cxx____normal_iterator_int____void_* r531 = __gnu_cxx____normal_iterator_int___void___operator_(&__out523, &ref_tmp0524);
          int** r532 = __gnu_cxx____normal_iterator_int___void___base___const(&__out523);
          int* t533 = *r532;
          __retval514 = t533;
          int* t534 = __retval514;
          return t534;
        }
      int* t535 = __result512;
      void* cast536 = (void*)t535;
      int* t537 = __first510;
      void* cast538 = (void*)t537;
      long t539 = __count515;
      unsigned long cast540 = (unsigned long)t539;
      unsigned long c541 = 4;
      unsigned long b542 = cast540 * c541;
      void* r543 = memcpy(cast536, cast538, b542);
    }
  int* t544 = __result512;
  long t545 = __count515;
  int* ptr546 = &(t544)[t545];
  __retval514 = ptr546;
  int* t547 = __retval514;
  return t547;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v548) {
bb549:
  int* __it550;
  int* __retval551;
  __it550 = v548;
  int* t552 = __it550;
  __retval551 = t552;
  int* t553 = __retval551;
  return t553;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v554, int* v555, int* v556, struct std__allocator_int_* v557) {
bb558:
  int* __first559;
  int* __last560;
  int* __result561;
  struct std__allocator_int_* __alloc562;
  int* __retval563;
  __first559 = v554;
  __last560 = v555;
  __result561 = v556;
  __alloc562 = v557;
  int* t564 = __first559;
  int* r565 = int__std____niter_base_int__(t564);
  int* t566 = __last560;
  int* r567 = int__std____niter_base_int__(t566);
  int* t568 = __result561;
  int* r569 = int__std____niter_base_int__(t568);
  struct std__allocator_int_* t570 = __alloc562;
  int* r571 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r565, r567, r569, t570);
  __retval563 = r571;
  int* t572 = __retval563;
  return t572;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v573, int* v574, int* v575, struct std__allocator_int_* v576) {
bb577:
  int* __first578;
  int* __last579;
  int* __result580;
  struct std__allocator_int_* __alloc581;
  int* __retval582;
  __first578 = v573;
  __last579 = v574;
  __result580 = v575;
  __alloc581 = v576;
  int* t583 = __first578;
  int* t584 = __last579;
  int* t585 = __result580;
  struct std__allocator_int_* t586 = __alloc581;
  int* r587 = int__std____relocate_a_int___int___std__allocator_int___(t583, t584, t585, t586);
  __retval582 = r587;
  int* t588 = __retval582;
  return t588;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v589) {
bb590:
  struct std___Vector_base_int__std__allocator_int__* this591;
  struct std__allocator_int_* __retval592;
  this591 = v589;
  struct std___Vector_base_int__std__allocator_int__* t593 = this591;
  struct std__allocator_int_* base594 = (struct std__allocator_int_*)((char *)&(t593->_M_impl) + 0);
  __retval592 = base594;
  struct std__allocator_int_* t595 = __retval592;
  return t595;
}

// function: _ZNSt6vectorIiSaIiEE7reserveEm
void std__vector_int__std__allocator_int_____reserve(struct std__vector_int__std__allocator_int__* v596, unsigned long v597) {
bb598:
  struct std__vector_int__std__allocator_int__* this599;
  unsigned long __n600;
  this599 = v596;
  __n600 = v597;
  struct std__vector_int__std__allocator_int__* t601 = this599;
    unsigned long t602 = __n600;
    unsigned long r603 = std__vector_int__std__allocator_int_____max_size___const(t601);
    _Bool c604 = ((t602 > r603)) ? 1 : 0;
    if (c604) {
      char* cast605 = (char*)&(_str_1);
      std____throw_length_error(cast605);
      if (__cir_exc_active) {
        return;
      }
    }
    unsigned long r606 = std__vector_int__std__allocator_int_____capacity___const(t601);
    unsigned long t607 = __n600;
    _Bool c608 = ((r606 < t607)) ? 1 : 0;
    if (c608) {
      unsigned long __old_size609;
      int* __tmp610;
      unsigned long r611 = std__vector_int__std__allocator_int_____size___const(t601);
      __old_size609 = r611;
        struct std___Vector_base_int__std__allocator_int__* base612 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t601 + 0);
        unsigned long t613 = __n600;
        int* r614 = std___Vector_base_int__std__allocator_int______M_allocate(base612, t613);
        if (__cir_exc_active) {
          return;
        }
        __tmp610 = r614;
        struct std___Vector_base_int__std__allocator_int__* base615 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t601 + 0);
        struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base616 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base615->_M_impl) + 0);
        int* t617 = base616->_M_start;
        struct std___Vector_base_int__std__allocator_int__* base618 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t601 + 0);
        struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base619 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base618->_M_impl) + 0);
        int* t620 = base619->_M_finish;
        int* t621 = __tmp610;
        struct std___Vector_base_int__std__allocator_int__* base622 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t601 + 0);
        struct std__allocator_int_* r623 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base622);
        int* r624 = std__vector_int__std__allocator_int______S_relocate(t617, t620, t621, r623);
      struct std___Vector_base_int__std__allocator_int__* base625 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t601 + 0);
      struct std___Vector_base_int__std__allocator_int__* base626 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t601 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base627 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base626->_M_impl) + 0);
      int* t628 = base627->_M_start;
      struct std___Vector_base_int__std__allocator_int__* base629 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t601 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base630 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base629->_M_impl) + 0);
      int* t631 = base630->_M_end_of_storage;
      struct std___Vector_base_int__std__allocator_int__* base632 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t601 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base633 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base632->_M_impl) + 0);
      int* t634 = base633->_M_start;
      long diff635 = t631 - t634;
      unsigned long cast636 = (unsigned long)diff635;
      std___Vector_base_int__std__allocator_int______M_deallocate(base625, t628, cast636);
      if (__cir_exc_active) {
        return;
      }
      int* t637 = __tmp610;
      struct std___Vector_base_int__std__allocator_int__* base638 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t601 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base639 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base638->_M_impl) + 0);
      base639->_M_start = t637;
      int* t640 = __tmp610;
      unsigned long t641 = __old_size609;
      int* ptr642 = &(t640)[t641];
      struct std___Vector_base_int__std__allocator_int__* base643 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t601 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base644 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base643->_M_impl) + 0);
      base644->_M_finish = ptr642;
      struct std___Vector_base_int__std__allocator_int__* base645 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t601 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base646 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base645->_M_impl) + 0);
      int* t647 = base646->_M_start;
      unsigned long t648 = __n600;
      int* ptr649 = &(t647)[t648];
      struct std___Vector_base_int__std__allocator_int__* base650 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t601 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base651 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base650->_M_impl) + 0);
      base651->_M_end_of_storage = ptr649;
    }
  return;
}

// function: _ZNSt4fposI11__mbstate_tEC2El
void std__fpos___mbstate_t___fpos(struct std__fpos___mbstate_t_* v652, long v653) {
bb654:
  struct std__fpos___mbstate_t_* this655;
  long __off656;
  this655 = v652;
  __off656 = v653;
  struct std__fpos___mbstate_t_* t657 = this655;
  long t658 = __off656;
  t657->_M_off = t658;
  struct __mbstate_t c659 = {0};
  t657->_M_state = c659;
  return;
}

// function: _ZStanSt12_Ios_IostateS_
int std__operator_(int v660, int v661) {
bb662:
  int __a663;
  int __b664;
  int __retval665;
  __a663 = v660;
  __b664 = v661;
  int t666 = __a663;
  int t667 = __b664;
  int b668 = t666 & t667;
  __retval665 = b668;
  int t669 = __retval665;
  return t669;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE3eofEv
_Bool std__basic_ios_char__std__char_traits_char_____eof___const(struct std__basic_ios_char__std__char_traits_char__* v670) {
bb671:
  struct std__basic_ios_char__std__char_traits_char__* this672;
  _Bool __retval673;
  this672 = v670;
  struct std__basic_ios_char__std__char_traits_char__* t674 = this672;
  int r675 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t674);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  int t676 = _ZNSt8ios_base6eofbitE_const;
  int r677 = std__operator_(r675, t676);
  int c678 = 0;
  _Bool c679 = ((r677 != c678)) ? 1 : 0;
  __retval673 = c679;
  _Bool t680 = __retval673;
  return t680;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v681, unsigned long* v682) {
bb683:
  unsigned long* __a684;
  unsigned long* __b685;
  unsigned long* __retval686;
  __a684 = v681;
  __b685 = v682;
    unsigned long* t687 = __a684;
    unsigned long t688 = *t687;
    unsigned long* t689 = __b685;
    unsigned long t690 = *t689;
    _Bool c691 = ((t688 < t690)) ? 1 : 0;
    if (c691) {
      unsigned long* t692 = __b685;
      __retval686 = t692;
      unsigned long* t693 = __retval686;
      return t693;
    }
  unsigned long* t694 = __a684;
  __retval686 = t694;
  unsigned long* t695 = __retval686;
  return t695;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v696, unsigned long v697, char* v698) {
bb699:
  struct std__vector_int__std__allocator_int__* this700;
  unsigned long __n701;
  char* __s702;
  unsigned long __retval703;
  unsigned long __len704;
  unsigned long ref_tmp0705;
  this700 = v696;
  __n701 = v697;
  __s702 = v698;
  struct std__vector_int__std__allocator_int__* t706 = this700;
    unsigned long r707 = std__vector_int__std__allocator_int_____max_size___const(t706);
    unsigned long r708 = std__vector_int__std__allocator_int_____size___const(t706);
    unsigned long b709 = r707 - r708;
    unsigned long t710 = __n701;
    _Bool c711 = ((b709 < t710)) ? 1 : 0;
    if (c711) {
      char* t712 = __s702;
      std____throw_length_error(t712);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
    }
  unsigned long r713 = std__vector_int__std__allocator_int_____size___const(t706);
  unsigned long r714 = std__vector_int__std__allocator_int_____size___const(t706);
  ref_tmp0705 = r714;
  unsigned long* r715 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0705, &__n701);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t716 = *r715;
  unsigned long b717 = r713 + t716;
  __len704 = b717;
  unsigned long t718 = __len704;
  unsigned long r719 = std__vector_int__std__allocator_int_____size___const(t706);
  _Bool c720 = ((t718 < r719)) ? 1 : 0;
  _Bool ternary721;
  if (c720) {
    _Bool c722 = 1;
    ternary721 = (_Bool)c722;
  } else {
    unsigned long t723 = __len704;
    unsigned long r724 = std__vector_int__std__allocator_int_____max_size___const(t706);
    _Bool c725 = ((t723 > r724)) ? 1 : 0;
    ternary721 = (_Bool)c725;
  }
  unsigned long ternary726;
  if (ternary721) {
    unsigned long r727 = std__vector_int__std__allocator_int_____max_size___const(t706);
    ternary726 = (unsigned long)r727;
  } else {
    unsigned long t728 = __len704;
    ternary726 = (unsigned long)t728;
  }
  __retval703 = ternary726;
  unsigned long t729 = __retval703;
  return t729;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v730) {
bb731:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this732;
  int** __retval733;
  this732 = v730;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t734 = this732;
  __retval733 = &t734->_M_current;
  int** t735 = __retval733;
  return t735;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v736, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v737) {
bb738:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs739;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs740;
  long __retval741;
  __lhs739 = v736;
  __rhs740 = v737;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t742 = __lhs739;
  int** r743 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t742);
  int* t744 = *r743;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t745 = __rhs740;
  int** r746 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t745);
  int* t747 = *r746;
  long diff748 = t744 - t747;
  __retval741 = diff748;
  long t749 = __retval741;
  return t749;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v750, int* v751, unsigned long v752, struct std___Vector_base_int__std__allocator_int__* v753) {
bb754:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this755;
  int* __s756;
  unsigned long __l757;
  struct std___Vector_base_int__std__allocator_int__* __vect758;
  this755 = v750;
  __s756 = v751;
  __l757 = v752;
  __vect758 = v753;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t759 = this755;
  int* t760 = __s756;
  t759->_M_storage = t760;
  unsigned long t761 = __l757;
  t759->_M_len = t761;
  struct std___Vector_base_int__std__allocator_int__* t762 = __vect758;
  t759->_M_vect = t762;
  return;
}

// function: _ZSt10to_addressIiEPT_S1_
int* int__std__to_address_int_(int* v763) {
bb764:
  int* __ptr765;
  int* __retval766;
  __ptr765 = v763;
  int* t767 = __ptr765;
  __retval766 = t767;
  int* t768 = __retval766;
  return t768;
}

// function: _ZSt12__to_addressIPiEDaRKT_
int* auto_std____to_address_int__(int** v769) {
bb770:
  int** __ptr771;
  int* __retval772;
  __ptr771 = v769;
  int** t773 = __ptr771;
  int* t774 = *t773;
  int* r775 = int__std__to_address_int_(t774);
  __retval772 = r775;
  int* t776 = __retval772;
  return t776;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v777) {
bb778:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this779;
  this779 = v777;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t780 = this779;
    int* t781 = t780->_M_storage;
    _Bool cast782 = (_Bool)t781;
    if (cast782) {
      struct std___Vector_base_int__std__allocator_int__* t783 = t780->_M_vect;
      int* t784 = t780->_M_storage;
      unsigned long t785 = t780->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t783, t784, t785);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_realloc_appendIJiEEEvDpOT_
void void_std__vector_int__std__allocator_int______M_realloc_append_int_(struct std__vector_int__std__allocator_int__* v786, int* v787) {
bb788:
  struct std__vector_int__std__allocator_int__* this789;
  int* __args790;
  unsigned long __len791;
  int* __old_start792;
  int* __old_finish793;
  unsigned long __elems794;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0795;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1796;
  int* __new_start797;
  int* __new_finish798;
  this789 = v786;
  __args790 = v787;
  struct std__vector_int__std__allocator_int__* t799 = this789;
  unsigned long c800 = 1;
  char* cast801 = (char*)&(_str_2);
  unsigned long r802 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t799, c800, cast801);
  if (__cir_exc_active) {
    return;
  }
  __len791 = r802;
    unsigned long t803 = __len791;
    unsigned long c804 = 0;
    _Bool c805 = ((t803 <= c804)) ? 1 : 0;
    if (c805) {
      __builtin_unreachable();
    }
  struct std___Vector_base_int__std__allocator_int__* base806 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t799 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base807 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base806->_M_impl) + 0);
  int* t808 = base807->_M_start;
  __old_start792 = t808;
  struct std___Vector_base_int__std__allocator_int__* base809 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t799 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base810 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base809->_M_impl) + 0);
  int* t811 = base810->_M_finish;
  __old_finish793 = t811;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r812 = std__vector_int__std__allocator_int_____end(t799);
  ref_tmp0795 = r812;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r813 = std__vector_int__std__allocator_int_____begin(t799);
  ref_tmp1796 = r813;
  long r814 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp0795, &ref_tmp1796);
  unsigned long cast815 = (unsigned long)r814;
  __elems794 = cast815;
  struct std___Vector_base_int__std__allocator_int__* base816 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t799 + 0);
  unsigned long t817 = __len791;
  int* r818 = std___Vector_base_int__std__allocator_int______M_allocate(base816, t817);
  if (__cir_exc_active) {
    return;
  }
  __new_start797 = r818;
  int* t819 = __new_start797;
  __new_finish798 = t819;
    struct std__vector_int__std__allocator_int_____Guard_alloc __guard820;
    int* ref_tmp2821;
    int* t822 = __new_start797;
    unsigned long t823 = __len791;
    struct std___Vector_base_int__std__allocator_int__* base824 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t799 + 0);
    std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard820, t822, t823, base824);
    if (__cir_exc_active) {
      return;
    }
      struct std___Vector_base_int__std__allocator_int__* base825 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t799 + 0);
      struct std__allocator_int_* base826 = (struct std__allocator_int_*)((char *)&(base825->_M_impl) + 0);
      int* t827 = __new_start797;
      unsigned long t828 = __elems794;
      int* ptr829 = &(t827)[t828];
      ref_tmp2821 = ptr829;
      int* r830 = auto_std____to_address_int__(&ref_tmp2821);
      int* t831 = __args790;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base826, r830, t831);
        int* t832 = __old_start792;
        int* t833 = __old_finish793;
        int* t834 = __new_start797;
        struct std___Vector_base_int__std__allocator_int__* base835 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t799 + 0);
        struct std__allocator_int_* r836 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base835);
        int* r837 = std__vector_int__std__allocator_int______S_relocate(t832, t833, t834, r836);
        __new_finish798 = r837;
        int* t838 = __new_finish798;
        int c839 = 1;
        int* ptr840 = &(t838)[c839];
        __new_finish798 = ptr840;
      int* t841 = __old_start792;
      __guard820._M_storage = t841;
      struct std___Vector_base_int__std__allocator_int__* base842 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t799 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base843 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base842->_M_impl) + 0);
      int* t844 = base843->_M_end_of_storage;
      int* t845 = __old_start792;
      long diff846 = t844 - t845;
      unsigned long cast847 = (unsigned long)diff846;
      __guard820._M_len = cast847;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard820);
    }
  int* t848 = __new_start797;
  struct std___Vector_base_int__std__allocator_int__* base849 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t799 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base850 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base849->_M_impl) + 0);
  base850->_M_start = t848;
  int* t851 = __new_finish798;
  struct std___Vector_base_int__std__allocator_int__* base852 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t799 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base853 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base852->_M_impl) + 0);
  base853->_M_finish = t851;
  int* t854 = __new_start797;
  unsigned long t855 = __len791;
  int* ptr856 = &(t854)[t855];
  struct std___Vector_base_int__std__allocator_int__* base857 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t799 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base858 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base857->_M_impl) + 0);
  base858->_M_end_of_storage = ptr856;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v859) {
bb860:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this861;
  int** __retval862;
  this861 = v859;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t863 = this861;
  __retval862 = &t863->_M_current;
  int** t864 = __retval862;
  return t864;
}

// function: _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v865, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v866) {
bb867:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs868;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs869;
  _Bool __retval870;
  __lhs868 = v865;
  __rhs869 = v866;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t871 = __lhs868;
  int** r872 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t871);
  int* t873 = *r872;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t874 = __rhs869;
  int** r875 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t874);
  int* t876 = *r875;
  _Bool c877 = ((t873 == t876)) ? 1 : 0;
  __retval870 = c877;
  _Bool t878 = __retval870;
  return t878;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v879, int** v880) {
bb881:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this882;
  int** __i883;
  this882 = v879;
  __i883 = v880;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t884 = this882;
  int** t885 = __i883;
  int* t886 = *t885;
  t884->_M_current = t886;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* v887) {
bb888:
  struct std__vector_int__std__allocator_int__* this889;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval890;
  this889 = v887;
  struct std__vector_int__std__allocator_int__* t891 = this889;
  struct std___Vector_base_int__std__allocator_int__* base892 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t891 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base893 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base892->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval890, &base893->_M_start);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t894 = __retval890;
  return t894;
}

// function: _ZNKSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* v895) {
bb896:
  struct std__vector_int__std__allocator_int__* this897;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval898;
  this897 = v895;
  struct std__vector_int__std__allocator_int__* t899 = this897;
  struct std___Vector_base_int__std__allocator_int__* base900 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t899 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base901 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base900->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval898, &base901->_M_finish);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t902 = __retval898;
  return t902;
}

// function: _ZNKSt6vectorIiSaIiEE5emptyEv
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* v903) {
bb904:
  struct std__vector_int__std__allocator_int__* this905;
  _Bool __retval906;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp0907;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp1908;
  this905 = v903;
  struct std__vector_int__std__allocator_int__* t909 = this905;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r910 = std__vector_int__std__allocator_int_____begin___const(t909);
  ref_tmp0907 = r910;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r911 = std__vector_int__std__allocator_int_____end___const(t909);
  ref_tmp1908 = r911;
  _Bool r912 = _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&ref_tmp0907, &ref_tmp1908);
  __retval906 = r912;
  _Bool t913 = __retval906;
  return t913;
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
            char* cast943 = (char*)&(_str_3);
            int c944 = 1370;
            char* cast945 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv);
            char* cast946 = (char*)&(_str_4);
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
    char* cast1222 = (char*)&(_str);
    int t1223 = _ZNSt8ios_base2inE_const;
    int t1224 = _ZNSt8ios_base3ateE_const;
    int r1225 = std__operator__7(t1223, t1224);
    int t1226 = _ZNSt8ios_base6binaryE_const;
    int r1227 = std__operator__7(r1225, t1226);
    std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(&file1220, cast1222, r1227);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&content1218);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
        _Bool r1228 = std__basic_ifstream_char__std__char_traits_char_____is_open(&file1220);
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
        if (r1228) {
          struct std__fpos___mbstate_t_ ref_tmp01229;
          struct std__fpos___mbstate_t_ agg_tmp01230;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it1231;
          struct std__basic_istream_char__std__char_traits_char__* base1232 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(file1220) + 0);
          struct std__fpos___mbstate_t_ r1233 = std__istream__tellg(base1232);
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
          ref_tmp01229 = r1233;
          long r1234 = std__fpos___mbstate_t___operator_long___const(&ref_tmp01229);
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
          unsigned long cast1235 = (unsigned long)r1234;
          filesize1219 = cast1235;
          unsigned long t1236 = filesize1219;
          std__vector_int__std__allocator_int_____reserve(&content1218, t1236);
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
          struct std__basic_istream_char__std__char_traits_char__* base1237 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(file1220) + 0);
          long c1238 = 0;
          std__fpos___mbstate_t___fpos(&agg_tmp01230, c1238);
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
          struct std__fpos___mbstate_t_ t1239 = agg_tmp01230;
          struct std__basic_istream_char__std__char_traits_char__* r1240 = std__istream__seekg(base1237, t1239);
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
              void** v1241 = (void**)&(file1220);
              void* v1242 = *((void**)v1241);
              unsigned char* cast1243 = (unsigned char*)v1242;
              long c1244 = -24;
              unsigned char* ptr1245 = &(cast1243)[c1244];
              long* cast1246 = (long*)ptr1245;
              long t1247 = *cast1246;
              unsigned char* cast1248 = (unsigned char*)&(file1220);
              unsigned char* ptr1249 = &(cast1248)[t1247];
              struct std__basic_ifstream_char__std__char_traits_char__* cast1250 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr1249;
              struct std__basic_ios_char__std__char_traits_char__* cast1251 = (struct std__basic_ios_char__std__char_traits_char__*)cast1250;
              _Bool r1252 = std__basic_ios_char__std__char_traits_char_____eof___const(cast1251);
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
              _Bool u1253 = !r1252;
              if (!u1253) break;
                int ref_tmp11254;
                struct std__basic_istream_char__std__char_traits_char__* base1255 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(file1220) + 0);
                int r1256 = std__istream__get(base1255);
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
                ref_tmp11254 = r1256;
                std__vector_int__std__allocator_int_____push_back(&content1218, &ref_tmp11254);
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
          __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it1231);
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp21257;
            struct std__strong_ordering agg_tmp11258;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp31259;
            struct std____cmp_cat____unspec agg_tmp21260;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31261;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1262 = std__vector_int__std__allocator_int_____begin(&content1218);
            ref_tmp21257 = r1262;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1263 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it1231, &ref_tmp21257);
            while (1) {
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1265 = std__vector_int__std__allocator_int_____end(&content1218);
              ref_tmp31259 = r1265;
              struct std__strong_ordering r1266 = decltype__std____detail____synth3way__std__declval_int_________std__declval_int___________gnu_cxx__operator____int___std__vector_int__std__allocator_int_____(&it1231, &ref_tmp31259);
              agg_tmp11258 = r1266;
              agg_tmp21260 = *&__const_main_agg_tmp2; // copy
              struct std__strong_ordering t1267 = agg_tmp11258;
              struct std____cmp_cat____unspec t1268 = agg_tmp21260;
              _Bool r1269 = std__operator__4(t1267, t1268);
              if (!r1269) break;
              struct std__basic_ostream_char__std__char_traits_char__* r1270 = std__ostream__operator___std__ios_base_____(&_ZSt4cout, &std__hex);
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
              int* r1271 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it1231);
              int t1272 = *r1271;
              struct std__basic_ostream_char__std__char_traits_char__* r1273 = std__ostream__operator__(r1270, t1272);
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
            for_step1264: ;
              int c1274 = 0;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1275 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&it1231, c1274);
              agg_tmp31261 = r1275;
            }
        }
      int c1276 = 0;
      __retval1217 = c1276;
      int t1277 = __retval1217;
      int ret_val1278 = t1277;
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&file1220);
      }
      {
        std__vector_int__std__allocator_int______vector(&content1218);
      }
      return ret_val1278;
  int t1279 = __retval1217;
  return t1279;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1280) {
bb1281:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1282;
  this1282 = v1280;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1283 = this1282;
  struct std__allocator_int_* base1284 = (struct std__allocator_int_*)((char *)t1283 + 0);
  std__allocator_int___allocator(base1284);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1285 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1283 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1285);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1286) {
bb1287:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1288;
  this1288 = v1286;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1289 = this1288;
  {
    struct std__allocator_int_* base1290 = (struct std__allocator_int_*)((char *)t1289 + 0);
    std__allocator_int____allocator(base1290);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1291) {
bb1292:
  struct std___Vector_base_int__std__allocator_int__* this1293;
  this1293 = v1291;
  struct std___Vector_base_int__std__allocator_int__* t1294 = this1293;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t1294->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1295:
  _Bool __retval1296;
    _Bool c1297 = 0;
    __retval1296 = c1297;
    _Bool t1298 = __retval1296;
    return t1298;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1299, int* v1300, unsigned long v1301) {
bb1302:
  struct std____new_allocator_int_* this1303;
  int* __p1304;
  unsigned long __n1305;
  this1303 = v1299;
  __p1304 = v1300;
  __n1305 = v1301;
  struct std____new_allocator_int_* t1306 = this1303;
    unsigned long c1307 = 4;
    unsigned long c1308 = 16;
    _Bool c1309 = ((c1307 > c1308)) ? 1 : 0;
    if (c1309) {
      int* t1310 = __p1304;
      void* cast1311 = (void*)t1310;
      unsigned long t1312 = __n1305;
      unsigned long c1313 = 4;
      unsigned long b1314 = t1312 * c1313;
      unsigned long c1315 = 4;
      operator_delete_3(cast1311, b1314, c1315);
      return;
    }
  int* t1316 = __p1304;
  void* cast1317 = (void*)t1316;
  unsigned long t1318 = __n1305;
  unsigned long c1319 = 4;
  unsigned long b1320 = t1318 * c1319;
  operator_delete_2(cast1317, b1320);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1321, int* v1322, unsigned long v1323) {
bb1324:
  struct std__allocator_int_* this1325;
  int* __p1326;
  unsigned long __n1327;
  this1325 = v1321;
  __p1326 = v1322;
  __n1327 = v1323;
  struct std__allocator_int_* t1328 = this1325;
    _Bool r1329 = std____is_constant_evaluated();
    if (r1329) {
      int* t1330 = __p1326;
      void* cast1331 = (void*)t1330;
      operator_delete(cast1331);
      return;
    }
  struct std____new_allocator_int_* base1332 = (struct std____new_allocator_int_*)((char *)t1328 + 0);
  int* t1333 = __p1326;
  unsigned long t1334 = __n1327;
  std____new_allocator_int___deallocate(base1332, t1333, t1334);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1335, int* v1336, unsigned long v1337) {
bb1338:
  struct std__allocator_int_* __a1339;
  int* __p1340;
  unsigned long __n1341;
  __a1339 = v1335;
  __p1340 = v1336;
  __n1341 = v1337;
  struct std__allocator_int_* t1342 = __a1339;
  int* t1343 = __p1340;
  unsigned long t1344 = __n1341;
  std__allocator_int___deallocate(t1342, t1343, t1344);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1345, int* v1346, unsigned long v1347) {
bb1348:
  struct std___Vector_base_int__std__allocator_int__* this1349;
  int* __p1350;
  unsigned long __n1351;
  this1349 = v1345;
  __p1350 = v1346;
  __n1351 = v1347;
  struct std___Vector_base_int__std__allocator_int__* t1352 = this1349;
    int* t1353 = __p1350;
    _Bool cast1354 = (_Bool)t1353;
    if (cast1354) {
      struct std__allocator_int_* base1355 = (struct std__allocator_int_*)((char *)&(t1352->_M_impl) + 0);
      int* t1356 = __p1350;
      unsigned long t1357 = __n1351;
      std__allocator_traits_std__allocator_int_____deallocate(base1355, t1356, t1357);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1358) {
bb1359:
  struct std___Vector_base_int__std__allocator_int__* this1360;
  this1360 = v1358;
  struct std___Vector_base_int__std__allocator_int__* t1361 = this1360;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1362 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1361->_M_impl) + 0);
    int* t1363 = base1362->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1364 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1361->_M_impl) + 0);
    int* t1365 = base1364->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1366 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1361->_M_impl) + 0);
    int* t1367 = base1366->_M_start;
    long diff1368 = t1365 - t1367;
    unsigned long cast1369 = (unsigned long)diff1368;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1361, t1363, cast1369);
    if (__cir_exc_active) {
      {
        std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1361->_M_impl);
      }
      return;
    }
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1361->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1370) {
bb1371:
  struct std____new_allocator_int_* this1372;
  this1372 = v1370;
  struct std____new_allocator_int_* t1373 = this1372;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1374) {
bb1375:
  struct std__allocator_int_* this1376;
  this1376 = v1374;
  struct std__allocator_int_* t1377 = this1376;
  struct std____new_allocator_int_* base1378 = (struct std____new_allocator_int_*)((char *)t1377 + 0);
  std____new_allocator_int_____new_allocator(base1378);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1379) {
bb1380:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1381;
  this1381 = v1379;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1382 = this1381;
  int* c1383 = ((void*)0);
  t1382->_M_start = c1383;
  int* c1384 = ((void*)0);
  t1382->_M_finish = c1384;
  int* c1385 = ((void*)0);
  t1382->_M_end_of_storage = c1385;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1386) {
bb1387:
  struct std__allocator_int_* this1388;
  this1388 = v1386;
  struct std__allocator_int_* t1389 = this1388;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1390, int* v1391) {
bb1392:
  int* __first1393;
  int* __last1394;
  __first1393 = v1390;
  __last1394 = v1391;
      _Bool r1395 = std____is_constant_evaluated();
      if (r1395) {
          while (1) {
            int* t1397 = __first1393;
            int* t1398 = __last1394;
            _Bool c1399 = ((t1397 != t1398)) ? 1 : 0;
            if (!c1399) break;
            int* t1400 = __first1393;
            void_std__destroy_at_int_(t1400);
            if (__cir_exc_active) {
              return;
            }
          for_step1396: ;
            int* t1401 = __first1393;
            int c1402 = 1;
            int* ptr1403 = &(t1401)[c1402];
            __first1393 = ptr1403;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1404, int* v1405, struct std__allocator_int_* v1406) {
bb1407:
  int* __first1408;
  int* __last1409;
  struct std__allocator_int_* unnamed1410;
  __first1408 = v1404;
  __last1409 = v1405;
  unnamed1410 = v1406;
  int* t1411 = __first1408;
  int* t1412 = __last1409;
  void_std___Destroy_int__(t1411, t1412);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v1413) {
bb1414:
  struct std__basic_streambuf_char__std__char_traits_char__* this1415;
  this1415 = v1413;
  struct std__basic_streambuf_char__std__char_traits_char__* t1416 = this1415;
  {
    std__locale___locale(&t1416->_M_buf_locale);
  }
  return;
}

