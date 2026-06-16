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
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
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
char _str[6] = "70.23";
char _str_1[21] = "oss.str() == \"70.23\"";
char _str_2[112] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stream/sstream_str_float/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern void *_ZTVNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void *_ZTVNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt15basic_streambufIcSt11char_traitsIcEE[];
char _str_3[25] = "basic_string::_M_replace";
char _str_4[24] = "basic_string::_M_create";
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
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_double_(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
double double_std__ostream___S_cast_flt_double__float_(float p0);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, float p1);
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
bb1: ;
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
bb16: ;
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
bb56: ;
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
bb95: ;
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
bb102: ;
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
bb110: ;
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
bb149: ;
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
bb159: ;
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
bb168: ;
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
bb174: ;
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
bb186: ;
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
bb191: ;
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

// function: _ZNSo11_S_cast_fltIdfEET_T0_
double double_std__ostream___S_cast_flt_double__float_(float v221) {
bb222: ;
  float __f223;
  double __retval224;
  double __d225;
  __f223 = v221;
  float t226 = __f223;
  double cast227 = (double)t226;
  __d225 = cast227;
  double t228 = __d225;
  __retval224 = t228;
  double t229 = __retval224;
  return t229;
}

// function: _ZNSolsEf
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v230, float v231) {
bb232: ;
  struct std__basic_ostream_char__std__char_traits_char__* this233;
  float __f234;
  struct std__basic_ostream_char__std__char_traits_char__* __retval235;
  this233 = v230;
  __f234 = v231;
  struct std__basic_ostream_char__std__char_traits_char__* t236 = this233;
  float t237 = __f234;
  double r238 = double_std__ostream___S_cast_flt_double__float_(t237);
  struct std__basic_ostream_char__std__char_traits_char__* r239 = std__ostream__std__ostream___M_insert_double_(t236, r238);
  __retval235 = r239;
  struct std__basic_ostream_char__std__char_traits_char__* t240 = __retval235;
  return t240;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v241) {
bb242: ;
  struct std__allocator_char_* __a243;
  unsigned long __retval244;
  __a243 = v241;
  unsigned long c245 = -1;
  unsigned long c246 = 1;
  unsigned long b247 = c245 / c246;
  __retval244 = b247;
  unsigned long t248 = __retval244;
  return t248;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v249) {
bb250: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this251;
  struct std__allocator_char_* __retval252;
  this251 = v249;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t253 = this251;
  struct std__allocator_char_* base254 = (struct std__allocator_char_*)((char *)&(t253->_M_dataplus) + 0);
  __retval252 = base254;
  struct std__allocator_char_* t255 = __retval252;
  return t255;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v256, unsigned long* v257) {
bb258: ;
  unsigned long* __a259;
  unsigned long* __b260;
  unsigned long* __retval261;
  __a259 = v256;
  __b260 = v257;
    unsigned long* t262 = __b260;
    unsigned long t263 = *t262;
    unsigned long* t264 = __a259;
    unsigned long t265 = *t264;
    _Bool c266 = ((t263 < t265)) ? 1 : 0;
    if (c266) {
      unsigned long* t267 = __b260;
      __retval261 = t267;
      unsigned long* t268 = __retval261;
      return t268;
    }
  unsigned long* t269 = __a259;
  __retval261 = t269;
  unsigned long* t270 = __retval261;
  return t270;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v271) {
bb272: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this273;
  unsigned long __retval274;
  unsigned long __diffmax275;
  unsigned long __allocmax276;
  this273 = v271;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t277 = this273;
  unsigned long c278 = 9223372036854775807;
  __diffmax275 = c278;
  struct std__allocator_char_* r279 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t277);
  unsigned long r280 = std__allocator_traits_std__allocator_char_____max_size(r279);
  __allocmax276 = r280;
  unsigned long* r281 = unsigned_long_const__std__min_unsigned_long_(&__diffmax275, &__allocmax276);
  unsigned long t282 = *r281;
  unsigned long c283 = 1;
  unsigned long b284 = t282 - c283;
  __retval274 = b284;
  unsigned long t285 = __retval274;
  return t285;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v286) {
bb287: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this288;
  unsigned long __retval289;
  unsigned long __sz290;
  this288 = v286;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t291 = this288;
  unsigned long t292 = t291->_M_string_length;
  __sz290 = t292;
    unsigned long t293 = __sz290;
    unsigned long r294 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t291);
    _Bool c295 = ((t293 > r294)) ? 1 : 0;
    if (c295) {
      __builtin_unreachable();
    }
  unsigned long t296 = __sz290;
  __retval289 = t296;
  unsigned long t297 = __retval289;
  return t297;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb298: ;
  _Bool __retval299;
    _Bool c300 = 0;
    __retval299 = c300;
    _Bool t301 = __retval299;
    return t301;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v302, char* v303) {
bb304: ;
  char* __c1305;
  char* __c2306;
  _Bool __retval307;
  __c1305 = v302;
  __c2306 = v303;
  char* t308 = __c1305;
  char t309 = *t308;
  int cast310 = (int)t309;
  char* t311 = __c2306;
  char t312 = *t311;
  int cast313 = (int)t312;
  _Bool c314 = ((cast310 == cast313)) ? 1 : 0;
  __retval307 = c314;
  _Bool t315 = __retval307;
  return t315;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v316) {
bb317: ;
  char* __p318;
  unsigned long __retval319;
  unsigned long __i320;
  __p318 = v316;
  unsigned long c321 = 0;
  __i320 = c321;
    char ref_tmp0322;
    while (1) {
      unsigned long t323 = __i320;
      char* t324 = __p318;
      char* ptr325 = &(t324)[t323];
      char c326 = 0;
      ref_tmp0322 = c326;
      _Bool r327 = __gnu_cxx__char_traits_char___eq(ptr325, &ref_tmp0322);
      _Bool u328 = !r327;
      if (!u328) break;
      unsigned long t329 = __i320;
      unsigned long u330 = t329 + 1;
      __i320 = u330;
    }
  unsigned long t331 = __i320;
  __retval319 = t331;
  unsigned long t332 = __retval319;
  return t332;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v333) {
bb334: ;
  char* __s335;
  unsigned long __retval336;
  __s335 = v333;
    _Bool r337 = std____is_constant_evaluated();
    if (r337) {
      char* t338 = __s335;
      unsigned long r339 = __gnu_cxx__char_traits_char___length(t338);
      __retval336 = r339;
      unsigned long t340 = __retval336;
      return t340;
    }
  char* t341 = __s335;
  unsigned long r342 = strlen(t341);
  __retval336 = r342;
  unsigned long t343 = __retval336;
  return t343;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v344, char* v345) {
bb346: ;
  char* __c1347;
  char* __c2348;
  _Bool __retval349;
  __c1347 = v344;
  __c2348 = v345;
  char* t350 = __c1347;
  char t351 = *t350;
  unsigned char cast352 = (unsigned char)t351;
  int cast353 = (int)cast352;
  char* t354 = __c2348;
  char t355 = *t354;
  unsigned char cast356 = (unsigned char)t355;
  int cast357 = (int)cast356;
  _Bool c358 = ((cast353 < cast357)) ? 1 : 0;
  __retval349 = c358;
  _Bool t359 = __retval349;
  return t359;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v360, char* v361, unsigned long v362) {
bb363: ;
  char* __s1364;
  char* __s2365;
  unsigned long __n366;
  int __retval367;
  __s1364 = v360;
  __s2365 = v361;
  __n366 = v362;
    unsigned long t368 = __n366;
    unsigned long c369 = 0;
    _Bool c370 = ((t368 == c369)) ? 1 : 0;
    if (c370) {
      int c371 = 0;
      __retval367 = c371;
      int t372 = __retval367;
      return t372;
    }
    _Bool r373 = std____is_constant_evaluated();
    if (r373) {
        unsigned long __i374;
        unsigned long c375 = 0;
        __i374 = c375;
        while (1) {
          unsigned long t377 = __i374;
          unsigned long t378 = __n366;
          _Bool c379 = ((t377 < t378)) ? 1 : 0;
          if (!c379) break;
            unsigned long t380 = __i374;
            char* t381 = __s1364;
            char* ptr382 = &(t381)[t380];
            unsigned long t383 = __i374;
            char* t384 = __s2365;
            char* ptr385 = &(t384)[t383];
            _Bool r386 = std__char_traits_char___lt(ptr382, ptr385);
            if (r386) {
              int c387 = -1;
              __retval367 = c387;
              int t388 = __retval367;
              int ret_val389 = t388;
              return ret_val389;
            } else {
                unsigned long t390 = __i374;
                char* t391 = __s2365;
                char* ptr392 = &(t391)[t390];
                unsigned long t393 = __i374;
                char* t394 = __s1364;
                char* ptr395 = &(t394)[t393];
                _Bool r396 = std__char_traits_char___lt(ptr392, ptr395);
                if (r396) {
                  int c397 = 1;
                  __retval367 = c397;
                  int t398 = __retval367;
                  int ret_val399 = t398;
                  return ret_val399;
                }
            }
        for_step376: ;
          unsigned long t400 = __i374;
          unsigned long u401 = t400 + 1;
          __i374 = u401;
        }
      int c402 = 0;
      __retval367 = c402;
      int t403 = __retval367;
      return t403;
    }
  char* t404 = __s1364;
  void* cast405 = (void*)t404;
  char* t406 = __s2365;
  void* cast407 = (void*)t406;
  unsigned long t408 = __n366;
  int r409 = memcmp(cast405, cast407, t408);
  __retval367 = r409;
  int t410 = __retval367;
  return t410;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v411) {
bb412: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this413;
  char* __retval414;
  this413 = v411;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t415 = this413;
  char* t416 = t415->_M_dataplus._M_p;
  __retval414 = t416;
  char* t417 = __retval414;
  return t417;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v418) {
bb419: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this420;
  char* __retval421;
  this420 = v418;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t422 = this420;
  char* r423 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t422);
  __retval421 = r423;
  char* t424 = __retval421;
  return t424;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v425, char* v426) {
bb427: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs428;
  char* __rhs429;
  _Bool __retval430;
  __lhs428 = v425;
  __rhs429 = v426;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t431 = __lhs428;
  unsigned long r432 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t431);
  char* t433 = __rhs429;
  unsigned long r434 = std__char_traits_char___length(t433);
  _Bool c435 = ((r432 == r434)) ? 1 : 0;
  _Bool ternary436;
  if (c435) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t437 = __lhs428;
    char* r438 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t437);
    char* t439 = __rhs429;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t440 = __lhs428;
    unsigned long r441 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t440);
    int r442 = std__char_traits_char___compare(r438, t439, r441);
    _Bool cast443 = (_Bool)r442;
    _Bool u444 = !cast443;
    ternary436 = (_Bool)u444;
  } else {
    _Bool c445 = 0;
    ternary436 = (_Bool)c445;
  }
  __retval430 = ternary436;
  _Bool t446 = __retval430;
  return t446;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v447, struct std__allocator_char_* v448) {
bb449: ;
  struct std__allocator_char_* this450;
  struct std__allocator_char_* __a451;
  this450 = v447;
  __a451 = v448;
  struct std__allocator_char_* t452 = this450;
  struct std____new_allocator_char_* base453 = (struct std____new_allocator_char_*)((char *)t452 + 0);
  struct std__allocator_char_* t454 = __a451;
  struct std____new_allocator_char_* base455 = (struct std____new_allocator_char_*)((char *)t454 + 0);
  std____new_allocator_char_____new_allocator(base453, base455);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13get_allocatorEv
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v456) {
bb457: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this458;
  struct std__allocator_char_ __retval459;
  this458 = v456;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t460 = this458;
  struct std__allocator_char_* r461 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t460);
  std__allocator_char___allocator(&__retval459, r461);
  struct std__allocator_char_ t462 = __retval459;
  return t462;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v463, struct std__allocator_char_* v464) {
bb465: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this466;
  struct std__allocator_char_* __a467;
  this466 = v463;
  __a467 = v464;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t468 = this466;
  char* r469 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t468);
  struct std__allocator_char_* t470 = __a467;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t468->_M_dataplus, r469, t470);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t468);
    unsigned long c471 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t468, c471);
  return;
}

// function: _ZNKSt15basic_streambufIcSt11char_traitsIcEE4pptrEv
char* std__basic_streambuf_char__std__char_traits_char_____pptr___const(struct std__basic_streambuf_char__std__char_traits_char__* v472) {
bb473: ;
  struct std__basic_streambuf_char__std__char_traits_char__* this474;
  char* __retval475;
  this474 = v472;
  struct std__basic_streambuf_char__std__char_traits_char__* t476 = this474;
  char* t477 = t476->_M_out_cur;
  __retval475 = t477;
  char* t478 = __retval475;
  return t478;
}

// function: _ZNKSt15basic_streambufIcSt11char_traitsIcEE5egptrEv
char* std__basic_streambuf_char__std__char_traits_char_____egptr___const(struct std__basic_streambuf_char__std__char_traits_char__* v479) {
bb480: ;
  struct std__basic_streambuf_char__std__char_traits_char__* this481;
  char* __retval482;
  this481 = v479;
  struct std__basic_streambuf_char__std__char_traits_char__* t483 = this481;
  char* t484 = t483->_M_in_end;
  __retval482 = t484;
  char* t485 = __retval482;
  return t485;
}

// function: _ZNKSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEE12_M_high_markEv
char* std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______M_high_mark___const(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* v486) {
bb487: ;
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* this488;
  char* __retval489;
  this488 = v486;
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* t490 = this488;
    char* __pptr491;
    struct std__basic_streambuf_char__std__char_traits_char__* base492 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t490 + 0);
    char* r493 = std__basic_streambuf_char__std__char_traits_char_____pptr___const(base492);
    __pptr491 = r493;
    char* t494 = __pptr491;
    _Bool cast495 = (_Bool)t494;
    if (cast495) {
      char* __egptr496;
      struct std__basic_streambuf_char__std__char_traits_char__* base497 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t490 + 0);
      char* r498 = std__basic_streambuf_char__std__char_traits_char_____egptr___const(base497);
      __egptr496 = r498;
        char* t499 = __egptr496;
        _Bool cast500 = (_Bool)t499;
        _Bool u501 = !cast500;
        _Bool ternary502;
        if (u501) {
          _Bool c503 = 1;
          ternary502 = (_Bool)c503;
        } else {
          char* t504 = __pptr491;
          char* t505 = __egptr496;
          _Bool c506 = ((t504 > t505)) ? 1 : 0;
          ternary502 = (_Bool)c506;
        }
        if (ternary502) {
          char* t507 = __pptr491;
          __retval489 = t507;
          char* t508 = __retval489;
          return t508;
        } else {
          char* t509 = __egptr496;
          __retval489 = t509;
          char* t510 = __retval489;
          return t510;
        }
    }
  char* c511 = ((void*)0);
  __retval489 = c511;
  char* t512 = __retval489;
  return t512;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v513, unsigned long v514, unsigned long v515, char* v516) {
bb517: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this518;
  unsigned long __n1519;
  unsigned long __n2520;
  char* __s521;
  this518 = v513;
  __n1519 = v514;
  __n2520 = v515;
  __s521 = v516;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t522 = this518;
    unsigned long r523 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t522);
    unsigned long r524 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t522);
    unsigned long t525 = __n1519;
    unsigned long b526 = r524 - t525;
    unsigned long b527 = r523 - b526;
    unsigned long t528 = __n2520;
    _Bool c529 = ((b527 < t528)) ? 1 : 0;
    if (c529) {
      char* t530 = __s521;
      std____throw_length_error(t530);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v531) {
bb532: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this533;
  unsigned long __retval534;
  unsigned long __sz535;
  this533 = v531;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t536 = this533;
  _Bool r537 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t536);
  unsigned long ternary538;
  if (r537) {
    unsigned long c539 = 15;
    ternary538 = (unsigned long)c539;
  } else {
    unsigned long t540 = t536->field2._M_allocated_capacity;
    ternary538 = (unsigned long)t540;
  }
  __sz535 = ternary538;
    unsigned long t541 = __sz535;
    unsigned long c542 = 15;
    _Bool c543 = ((t541 < c542)) ? 1 : 0;
    _Bool ternary544;
    if (c543) {
      _Bool c545 = 1;
      ternary544 = (_Bool)c545;
    } else {
      unsigned long t546 = __sz535;
      unsigned long r547 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t536);
      _Bool c548 = ((t546 > r547)) ? 1 : 0;
      ternary544 = (_Bool)c548;
    }
    if (ternary544) {
      __builtin_unreachable();
    }
  unsigned long t549 = __sz535;
  __retval534 = t549;
  unsigned long t550 = __retval534;
  return t550;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v551) {
bb552: ;
  struct std____new_allocator_char_* this553;
  unsigned long __retval554;
  this553 = v551;
  struct std____new_allocator_char_* t555 = this553;
  unsigned long c556 = 9223372036854775807;
  unsigned long c557 = 1;
  unsigned long b558 = c556 / c557;
  __retval554 = b558;
  unsigned long t559 = __retval554;
  return t559;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v560, unsigned long v561, void* v562) {
bb563: ;
  struct std____new_allocator_char_* this564;
  unsigned long __n565;
  void* unnamed566;
  char* __retval567;
  this564 = v560;
  __n565 = v561;
  unnamed566 = v562;
  struct std____new_allocator_char_* t568 = this564;
    unsigned long t569 = __n565;
    unsigned long r570 = std____new_allocator_char____M_max_size___const(t568);
    _Bool c571 = ((t569 > r570)) ? 1 : 0;
    if (c571) {
        unsigned long t572 = __n565;
        unsigned long c573 = -1;
        unsigned long c574 = 1;
        unsigned long b575 = c573 / c574;
        _Bool c576 = ((t572 > b575)) ? 1 : 0;
        if (c576) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c577 = 1;
    unsigned long c578 = 16;
    _Bool c579 = ((c577 > c578)) ? 1 : 0;
    if (c579) {
      unsigned long __al580;
      unsigned long c581 = 1;
      __al580 = c581;
      unsigned long t582 = __n565;
      unsigned long c583 = 1;
      unsigned long b584 = t582 * c583;
      unsigned long t585 = __al580;
      void* r586 = operator_new_2(b584, t585);
      char* cast587 = (char*)r586;
      __retval567 = cast587;
      char* t588 = __retval567;
      return t588;
    }
  unsigned long t589 = __n565;
  unsigned long c590 = 1;
  unsigned long b591 = t589 * c590;
  void* r592 = operator_new(b591);
  char* cast593 = (char*)r592;
  __retval567 = cast593;
  char* t594 = __retval567;
  return t594;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v595, unsigned long v596) {
bb597: ;
  struct std__allocator_char_* this598;
  unsigned long __n599;
  char* __retval600;
  this598 = v595;
  __n599 = v596;
  struct std__allocator_char_* t601 = this598;
    _Bool r602 = std____is_constant_evaluated();
    if (r602) {
        unsigned long t603 = __n599;
        unsigned long c604 = 1;
        unsigned long ovr605;
        _Bool ovf606 = __builtin_mul_overflow(t603, c604, &ovr605);
        __n599 = ovr605;
        if (ovf606) {
          std____throw_bad_array_new_length();
        }
      unsigned long t607 = __n599;
      void* r608 = operator_new(t607);
      char* cast609 = (char*)r608;
      __retval600 = cast609;
      char* t610 = __retval600;
      return t610;
    }
  struct std____new_allocator_char_* base611 = (struct std____new_allocator_char_*)((char *)t601 + 0);
  unsigned long t612 = __n599;
  void* c613 = ((void*)0);
  char* r614 = std____new_allocator_char___allocate(base611, t612, c613);
  __retval600 = r614;
  char* t615 = __retval600;
  return t615;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v616, unsigned long v617) {
bb618: ;
  struct std__allocator_char_* __a619;
  unsigned long __n620;
  char* __retval621;
  __a619 = v616;
  __n620 = v617;
  struct std__allocator_char_* t622 = __a619;
  unsigned long t623 = __n620;
  char* r624 = std__allocator_char___allocate(t622, t623);
  __retval621 = r624;
  char* t625 = __retval621;
  return t625;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v626, unsigned long v627) {
bb628: ;
  struct std__allocator_char_* __a629;
  unsigned long __n630;
  char* __retval631;
  char* __p632;
  __a629 = v626;
  __n630 = v627;
  struct std__allocator_char_* t633 = __a629;
  unsigned long t634 = __n630;
  char* r635 = std__allocator_traits_std__allocator_char_____allocate(t633, t634);
  __p632 = r635;
  char* t636 = __p632;
  __retval631 = t636;
  char* t637 = __retval631;
  return t637;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v638, char* v639, unsigned long v640) {
bb641: ;
  char* __s1642;
  char* __s2643;
  unsigned long __n644;
  char* __retval645;
  __s1642 = v638;
  __s2643 = v639;
  __n644 = v640;
    unsigned long t646 = __n644;
    unsigned long c647 = 0;
    _Bool c648 = ((t646 == c647)) ? 1 : 0;
    if (c648) {
      char* t649 = __s1642;
      __retval645 = t649;
      char* t650 = __retval645;
      return t650;
    }
    _Bool r651 = std____is_constant_evaluated();
    if (r651) {
        unsigned long __i652;
        unsigned long c653 = 0;
        __i652 = c653;
        while (1) {
          unsigned long t655 = __i652;
          unsigned long t656 = __n644;
          _Bool c657 = ((t655 < t656)) ? 1 : 0;
          if (!c657) break;
          char* t658 = __s1642;
          unsigned long t659 = __i652;
          char* ptr660 = &(t658)[t659];
          unsigned long t661 = __i652;
          char* t662 = __s2643;
          char* ptr663 = &(t662)[t661];
          char* r664 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr660, ptr663);
        for_step654: ;
          unsigned long t665 = __i652;
          unsigned long u666 = t665 + 1;
          __i652 = u666;
        }
      char* t667 = __s1642;
      __retval645 = t667;
      char* t668 = __retval645;
      return t668;
    }
  char* t669 = __s1642;
  void* cast670 = (void*)t669;
  char* t671 = __s2643;
  void* cast672 = (void*)t671;
  unsigned long t673 = __n644;
  unsigned long c674 = 1;
  unsigned long b675 = t673 * c674;
  void* r676 = memcpy(cast670, cast672, b675);
  char* t677 = __s1642;
  __retval645 = t677;
  char* t678 = __retval645;
  return t678;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v679, char* v680, unsigned long v681) {
bb682: ;
  char* __s1683;
  char* __s2684;
  unsigned long __n685;
  char* __retval686;
  __s1683 = v679;
  __s2684 = v680;
  __n685 = v681;
    unsigned long t687 = __n685;
    unsigned long c688 = 0;
    _Bool c689 = ((t687 == c688)) ? 1 : 0;
    if (c689) {
      char* t690 = __s1683;
      __retval686 = t690;
      char* t691 = __retval686;
      return t691;
    }
    _Bool r692 = std____is_constant_evaluated();
    if (r692) {
      char* t693 = __s1683;
      char* t694 = __s2684;
      unsigned long t695 = __n685;
      char* r696 = __gnu_cxx__char_traits_char___copy(t693, t694, t695);
      __retval686 = r696;
      char* t697 = __retval686;
      return t697;
    }
  char* t698 = __s1683;
  void* cast699 = (void*)t698;
  char* t700 = __s2684;
  void* cast701 = (void*)t700;
  unsigned long t702 = __n685;
  void* r703 = memcpy(cast699, cast701, t702);
  char* cast704 = (char*)r703;
  __retval686 = cast704;
  char* t705 = __retval686;
  return t705;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v706, char* v707, unsigned long v708) {
bb709: ;
  char* __d710;
  char* __s711;
  unsigned long __n712;
  __d710 = v706;
  __s711 = v707;
  __n712 = v708;
    unsigned long t713 = __n712;
    unsigned long c714 = 1;
    _Bool c715 = ((t713 == c714)) ? 1 : 0;
    if (c715) {
      char* t716 = __d710;
      char* t717 = __s711;
      std__char_traits_char___assign(t716, t717);
    } else {
      char* t718 = __d710;
      char* t719 = __s711;
      unsigned long t720 = __n712;
      char* r721 = std__char_traits_char___copy(t718, t719, t720);
    }
  return;
}

// function: _ZNKSt4lessIPKcEclES1_S1_
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* v722, char* v723, char* v724) {
bb725: ;
  struct std__less_const_char___* this726;
  char* __x727;
  char* __y728;
  _Bool __retval729;
  this726 = v722;
  __x727 = v723;
  __y728 = v724;
  struct std__less_const_char___* t730 = this726;
    _Bool r731 = std____is_constant_evaluated();
    if (r731) {
      char* t732 = __x727;
      char* t733 = __y728;
      _Bool c734 = ((t732 < t733)) ? 1 : 0;
      __retval729 = c734;
      _Bool t735 = __retval729;
      return t735;
    }
  char* t736 = __x727;
  unsigned long cast737 = (unsigned long)t736;
  char* t738 = __y728;
  unsigned long cast739 = (unsigned long)t738;
  _Bool c740 = ((cast737 < cast739)) ? 1 : 0;
  __retval729 = c740;
  _Bool t741 = __retval729;
  return t741;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_disjunctEPKc
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v742, char* v743) {
bb744: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this745;
  char* __s746;
  _Bool __retval747;
  struct std__less_const_char___ ref_tmp0748;
  this745 = v742;
  __s746 = v743;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t749 = this745;
  char* t750 = __s746;
  char* r751 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t749);
  _Bool r752 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp0748, t750, r751);
  _Bool ternary753;
  if (r752) {
    _Bool c754 = 1;
    ternary753 = (_Bool)c754;
  } else {
    struct std__less_const_char___ ref_tmp1755;
    char* r756 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t749);
    unsigned long r757 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t749);
    char* ptr758 = &(r756)[r757];
    char* t759 = __s746;
    _Bool r760 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp1755, ptr758, t759);
    ternary753 = (_Bool)r760;
  }
  __retval747 = ternary753;
  _Bool t761 = __retval747;
  return t761;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign(char* v762, char* v763) {
bb764: ;
  char* __c1765;
  char* __c2766;
  __c1765 = v762;
  __c2766 = v763;
    _Bool r767 = std____is_constant_evaluated();
    if (r767) {
      char* t768 = __c1765;
      char* t769 = __c2766;
      char* r770 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t768, t769);
    } else {
      char* t771 = __c2766;
      char t772 = *t771;
      char* t773 = __c1765;
      *t773 = t772;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v774, char* v775, unsigned long v776) {
bb777: ;
  char* __s1778;
  char* __s2779;
  unsigned long __n780;
  char* __retval781;
  __s1778 = v774;
  __s2779 = v775;
  __n780 = v776;
    unsigned long t782 = __n780;
    unsigned long c783 = 0;
    _Bool c784 = ((t782 == c783)) ? 1 : 0;
    if (c784) {
      char* t785 = __s1778;
      __retval781 = t785;
      char* t786 = __retval781;
      return t786;
    }
    _Bool r787 = std____is_constant_evaluated();
    if (r787) {
        char* t788 = __s2779;
        char* t789 = __s1778;
        _Bool c790 = ((t788 < t789)) ? 1 : 0;
        _Bool isconst791 = 0;
        _Bool ternary792;
        if (isconst791) {
          char* t793 = __s1778;
          char* t794 = __s2779;
          _Bool c795 = ((t793 > t794)) ? 1 : 0;
          ternary792 = (_Bool)c795;
        } else {
          _Bool c796 = 0;
          ternary792 = (_Bool)c796;
        }
        _Bool ternary797;
        if (ternary792) {
          char* t798 = __s1778;
          char* t799 = __s2779;
          unsigned long t800 = __n780;
          char* ptr801 = &(t799)[t800];
          _Bool c802 = ((t798 < ptr801)) ? 1 : 0;
          ternary797 = (_Bool)c802;
        } else {
          _Bool c803 = 0;
          ternary797 = (_Bool)c803;
        }
        if (ternary797) {
            do {
                unsigned long t804 = __n780;
                unsigned long u805 = t804 - 1;
                __n780 = u805;
                unsigned long t806 = __n780;
                char* t807 = __s1778;
                char* ptr808 = &(t807)[t806];
                unsigned long t809 = __n780;
                char* t810 = __s2779;
                char* ptr811 = &(t810)[t809];
                __gnu_cxx__char_traits_char___assign(ptr808, ptr811);
              unsigned long t812 = __n780;
              unsigned long c813 = 0;
              _Bool c814 = ((t812 > c813)) ? 1 : 0;
              if (!c814) break;
            } while (1);
        } else {
          char* t815 = __s1778;
          char* t816 = __s2779;
          unsigned long t817 = __n780;
          char* r818 = __gnu_cxx__char_traits_char___copy(t815, t816, t817);
        }
      char* t819 = __s1778;
      __retval781 = t819;
      char* t820 = __retval781;
      return t820;
    }
  char* t821 = __s1778;
  void* cast822 = (void*)t821;
  char* t823 = __s2779;
  void* cast824 = (void*)t823;
  unsigned long t825 = __n780;
  unsigned long c826 = 1;
  unsigned long b827 = t825 * c826;
  void* r828 = memmove(cast822, cast824, b827);
  char* t829 = __s1778;
  __retval781 = t829;
  char* t830 = __retval781;
  return t830;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v831, char* v832, unsigned long v833) {
bb834: ;
  char* __s1835;
  char* __s2836;
  unsigned long __n837;
  char* __retval838;
  __s1835 = v831;
  __s2836 = v832;
  __n837 = v833;
    unsigned long t839 = __n837;
    unsigned long c840 = 0;
    _Bool c841 = ((t839 == c840)) ? 1 : 0;
    if (c841) {
      char* t842 = __s1835;
      __retval838 = t842;
      char* t843 = __retval838;
      return t843;
    }
    _Bool r844 = std____is_constant_evaluated();
    if (r844) {
      char* t845 = __s1835;
      char* t846 = __s2836;
      unsigned long t847 = __n837;
      char* r848 = __gnu_cxx__char_traits_char___move(t845, t846, t847);
      __retval838 = r848;
      char* t849 = __retval838;
      return t849;
    }
  char* t850 = __s1835;
  void* cast851 = (void*)t850;
  char* t852 = __s2836;
  void* cast853 = (void*)t852;
  unsigned long t854 = __n837;
  void* r855 = memmove(cast851, cast853, t854);
  char* cast856 = (char*)r855;
  __retval838 = cast856;
  char* t857 = __retval838;
  return t857;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v858, char* v859, unsigned long v860) {
bb861: ;
  char* __d862;
  char* __s863;
  unsigned long __n864;
  __d862 = v858;
  __s863 = v859;
  __n864 = v860;
    unsigned long t865 = __n864;
    unsigned long c866 = 1;
    _Bool c867 = ((t865 == c866)) ? 1 : 0;
    if (c867) {
      char* t868 = __d862;
      char* t869 = __s863;
      std__char_traits_char___assign(t868, t869);
    } else {
      char* t870 = __d862;
      char* t871 = __s863;
      unsigned long t872 = __n864;
      char* r873 = std__char_traits_char___move(t870, t871, t872);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_replace_coldEPcmPKcmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v874, char* v875, unsigned long v876, char* v877, unsigned long v878, unsigned long v879) {
bb880: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this881;
  char* __p882;
  unsigned long __len1883;
  char* __s884;
  unsigned long __len2885;
  unsigned long __how_much886;
  this881 = v874;
  __p882 = v875;
  __len1883 = v876;
  __s884 = v877;
  __len2885 = v878;
  __how_much886 = v879;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t887 = this881;
    unsigned long t888 = __len2885;
    _Bool cast889 = (_Bool)t888;
    _Bool ternary890;
    if (cast889) {
      unsigned long t891 = __len2885;
      unsigned long t892 = __len1883;
      _Bool c893 = ((t891 <= t892)) ? 1 : 0;
      ternary890 = (_Bool)c893;
    } else {
      _Bool c894 = 0;
      ternary890 = (_Bool)c894;
    }
    if (ternary890) {
      char* t895 = __p882;
      char* t896 = __s884;
      unsigned long t897 = __len2885;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t895, t896, t897);
    }
    unsigned long t898 = __how_much886;
    _Bool cast899 = (_Bool)t898;
    _Bool ternary900;
    if (cast899) {
      unsigned long t901 = __len1883;
      unsigned long t902 = __len2885;
      _Bool c903 = ((t901 != t902)) ? 1 : 0;
      ternary900 = (_Bool)c903;
    } else {
      _Bool c904 = 0;
      ternary900 = (_Bool)c904;
    }
    if (ternary900) {
      char* t905 = __p882;
      unsigned long t906 = __len2885;
      char* ptr907 = &(t905)[t906];
      char* t908 = __p882;
      unsigned long t909 = __len1883;
      char* ptr910 = &(t908)[t909];
      unsigned long t911 = __how_much886;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr907, ptr910, t911);
    }
    unsigned long t912 = __len2885;
    unsigned long t913 = __len1883;
    _Bool c914 = ((t912 > t913)) ? 1 : 0;
    if (c914) {
        char* t915 = __s884;
        unsigned long t916 = __len2885;
        char* ptr917 = &(t915)[t916];
        char* t918 = __p882;
        unsigned long t919 = __len1883;
        char* ptr920 = &(t918)[t919];
        _Bool c921 = ((ptr917 <= ptr920)) ? 1 : 0;
        if (c921) {
          char* t922 = __p882;
          char* t923 = __s884;
          unsigned long t924 = __len2885;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t922, t923, t924);
        } else {
            char* t925 = __s884;
            char* t926 = __p882;
            unsigned long t927 = __len1883;
            char* ptr928 = &(t926)[t927];
            _Bool c929 = ((t925 >= ptr928)) ? 1 : 0;
            if (c929) {
              unsigned long __poff930;
              char* t931 = __s884;
              char* t932 = __p882;
              long diff933 = t931 - t932;
              unsigned long cast934 = (unsigned long)diff933;
              unsigned long t935 = __len2885;
              unsigned long t936 = __len1883;
              unsigned long b937 = t935 - t936;
              unsigned long b938 = cast934 + b937;
              __poff930 = b938;
              char* t939 = __p882;
              char* t940 = __p882;
              unsigned long t941 = __poff930;
              char* ptr942 = &(t940)[t941];
              unsigned long t943 = __len2885;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t939, ptr942, t943);
            } else {
              unsigned long __nleft944;
              char* t945 = __p882;
              unsigned long t946 = __len1883;
              char* ptr947 = &(t945)[t946];
              char* t948 = __s884;
              long diff949 = ptr947 - t948;
              unsigned long cast950 = (unsigned long)diff949;
              __nleft944 = cast950;
              char* t951 = __p882;
              char* t952 = __s884;
              unsigned long t953 = __nleft944;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t951, t952, t953);
              char* t954 = __p882;
              unsigned long t955 = __nleft944;
              char* ptr956 = &(t954)[t955];
              char* t957 = __p882;
              unsigned long t958 = __len2885;
              char* ptr959 = &(t957)[t958];
              unsigned long t960 = __len2885;
              unsigned long t961 = __nleft944;
              unsigned long b962 = t960 - t961;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr956, ptr959, b962);
            }
        }
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v963) {
bb964: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this965;
  unsigned long __retval966;
  this965 = v963;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t967 = this965;
  unsigned long r968 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t967);
  __retval966 = r968;
  unsigned long t969 = __retval966;
  return t969;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v970, unsigned long* v971, unsigned long v972) {
bb973: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this974;
  unsigned long* __capacity975;
  unsigned long __old_capacity976;
  char* __retval977;
  this974 = v970;
  __capacity975 = v971;
  __old_capacity976 = v972;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t978 = this974;
    unsigned long* t979 = __capacity975;
    unsigned long t980 = *t979;
    unsigned long r981 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t978);
    _Bool c982 = ((t980 > r981)) ? 1 : 0;
    if (c982) {
      char* cast983 = (char*)&(_str_4);
      std____throw_length_error(cast983);
    }
    unsigned long* t984 = __capacity975;
    unsigned long t985 = *t984;
    unsigned long t986 = __old_capacity976;
    _Bool c987 = ((t985 > t986)) ? 1 : 0;
    _Bool ternary988;
    if (c987) {
      unsigned long* t989 = __capacity975;
      unsigned long t990 = *t989;
      unsigned long c991 = 2;
      unsigned long t992 = __old_capacity976;
      unsigned long b993 = c991 * t992;
      _Bool c994 = ((t990 < b993)) ? 1 : 0;
      ternary988 = (_Bool)c994;
    } else {
      _Bool c995 = 0;
      ternary988 = (_Bool)c995;
    }
    if (ternary988) {
      unsigned long c996 = 2;
      unsigned long t997 = __old_capacity976;
      unsigned long b998 = c996 * t997;
      unsigned long* t999 = __capacity975;
      *t999 = b998;
        unsigned long* t1000 = __capacity975;
        unsigned long t1001 = *t1000;
        unsigned long r1002 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t978);
        _Bool c1003 = ((t1001 > r1002)) ? 1 : 0;
        if (c1003) {
          unsigned long r1004 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t978);
          unsigned long* t1005 = __capacity975;
          *t1005 = r1004;
        }
    }
  struct std__allocator_char_* r1006 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t978);
  unsigned long* t1007 = __capacity975;
  unsigned long t1008 = *t1007;
  unsigned long c1009 = 1;
  unsigned long b1010 = t1008 + c1009;
  char* r1011 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1006, b1010);
  __retval977 = r1011;
  char* t1012 = __retval977;
  return t1012;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1013, char* v1014) {
bb1015: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1016;
  char* __p1017;
  this1016 = v1013;
  __p1017 = v1014;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1018 = this1016;
  char* t1019 = __p1017;
  t1018->_M_dataplus._M_p = t1019;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1020, unsigned long v1021) {
bb1022: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1023;
  unsigned long __capacity1024;
  this1023 = v1020;
  __capacity1024 = v1021;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1025 = this1023;
  unsigned long t1026 = __capacity1024;
  t1025->field2._M_allocated_capacity = t1026;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1027, unsigned long v1028, unsigned long v1029, char* v1030, unsigned long v1031) {
bb1032: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1033;
  unsigned long __pos1034;
  unsigned long __len11035;
  char* __s1036;
  unsigned long __len21037;
  unsigned long __how_much1038;
  unsigned long __new_capacity1039;
  char* __r1040;
  this1033 = v1027;
  __pos1034 = v1028;
  __len11035 = v1029;
  __s1036 = v1030;
  __len21037 = v1031;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1041 = this1033;
  unsigned long r1042 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t1041);
  unsigned long t1043 = __pos1034;
  unsigned long b1044 = r1042 - t1043;
  unsigned long t1045 = __len11035;
  unsigned long b1046 = b1044 - t1045;
  __how_much1038 = b1046;
  unsigned long r1047 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t1041);
  unsigned long t1048 = __len21037;
  unsigned long b1049 = r1047 + t1048;
  unsigned long t1050 = __len11035;
  unsigned long b1051 = b1049 - t1050;
  __new_capacity1039 = b1051;
  unsigned long r1052 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t1041);
  char* r1053 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1041, &__new_capacity1039, r1052);
  __r1040 = r1053;
    unsigned long t1054 = __pos1034;
    _Bool cast1055 = (_Bool)t1054;
    if (cast1055) {
      char* t1056 = __r1040;
      char* r1057 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1041);
      unsigned long t1058 = __pos1034;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1056, r1057, t1058);
    }
    char* t1059 = __s1036;
    _Bool cast1060 = (_Bool)t1059;
    _Bool ternary1061;
    if (cast1060) {
      unsigned long t1062 = __len21037;
      _Bool cast1063 = (_Bool)t1062;
      ternary1061 = (_Bool)cast1063;
    } else {
      _Bool c1064 = 0;
      ternary1061 = (_Bool)c1064;
    }
    if (ternary1061) {
      char* t1065 = __r1040;
      unsigned long t1066 = __pos1034;
      char* ptr1067 = &(t1065)[t1066];
      char* t1068 = __s1036;
      unsigned long t1069 = __len21037;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr1067, t1068, t1069);
    }
    unsigned long t1070 = __how_much1038;
    _Bool cast1071 = (_Bool)t1070;
    if (cast1071) {
      char* t1072 = __r1040;
      unsigned long t1073 = __pos1034;
      char* ptr1074 = &(t1072)[t1073];
      unsigned long t1075 = __len21037;
      char* ptr1076 = &(ptr1074)[t1075];
      char* r1077 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1041);
      unsigned long t1078 = __pos1034;
      char* ptr1079 = &(r1077)[t1078];
      unsigned long t1080 = __len11035;
      char* ptr1081 = &(ptr1079)[t1080];
      unsigned long t1082 = __how_much1038;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr1076, ptr1081, t1082);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1041);
  char* t1083 = __r1040;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1041, t1083);
  unsigned long t1084 = __new_capacity1039;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1041, t1084);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1085, unsigned long v1086, unsigned long v1087, char* v1088, unsigned long v1089) {
bb1090: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1091;
  unsigned long __pos1092;
  unsigned long __len11093;
  char* __s1094;
  unsigned long __len21095;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1096;
  unsigned long __old_size1097;
  unsigned long __new_size1098;
  this1091 = v1085;
  __pos1092 = v1086;
  __len11093 = v1087;
  __s1094 = v1088;
  __len21095 = v1089;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1099 = this1091;
  unsigned long t1100 = __len11093;
  unsigned long t1101 = __len21095;
  char* cast1102 = (char*)&(_str_3);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t1099, t1100, t1101, cast1102);
  unsigned long r1103 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1099);
  __old_size1097 = r1103;
  unsigned long t1104 = __old_size1097;
  unsigned long t1105 = __len21095;
  unsigned long b1106 = t1104 + t1105;
  unsigned long t1107 = __len11093;
  unsigned long b1108 = b1106 - t1107;
  __new_size1098 = b1108;
    unsigned long t1109 = __new_size1098;
    unsigned long r1110 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t1099);
    _Bool c1111 = ((t1109 <= r1110)) ? 1 : 0;
    if (c1111) {
      char* __p1112;
      unsigned long __how_much1113;
      char* r1114 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1099);
      unsigned long t1115 = __pos1092;
      char* ptr1116 = &(r1114)[t1115];
      __p1112 = ptr1116;
      unsigned long t1117 = __old_size1097;
      unsigned long t1118 = __pos1092;
      unsigned long b1119 = t1117 - t1118;
      unsigned long t1120 = __len11093;
      unsigned long b1121 = b1119 - t1120;
      __how_much1113 = b1121;
        _Bool r1122 = std__is_constant_evaluated();
        if (r1122) {
          char* __newp1123;
          struct std__allocator_char_* r1124 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1099);
          unsigned long t1125 = __new_size1098;
          char* r1126 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1124, t1125);
          __newp1123 = r1126;
          char* t1127 = __newp1123;
          char* r1128 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1099);
          unsigned long t1129 = __pos1092;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1127, r1128, t1129);
          char* t1130 = __newp1123;
          unsigned long t1131 = __pos1092;
          char* ptr1132 = &(t1130)[t1131];
          char* t1133 = __s1094;
          unsigned long t1134 = __len21095;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr1132, t1133, t1134);
          char* t1135 = __newp1123;
          unsigned long t1136 = __pos1092;
          char* ptr1137 = &(t1135)[t1136];
          unsigned long t1138 = __len21095;
          char* ptr1139 = &(ptr1137)[t1138];
          char* t1140 = __p1112;
          unsigned long t1141 = __len11093;
          char* ptr1142 = &(t1140)[t1141];
          unsigned long t1143 = __how_much1113;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr1139, ptr1142, t1143);
          char* r1144 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1099);
          char* t1145 = __newp1123;
          unsigned long t1146 = __new_size1098;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1144, t1145, t1146);
          struct std__allocator_char_* r1147 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1099);
          char* t1148 = __newp1123;
          unsigned long t1149 = __new_size1098;
          std__allocator_char___deallocate(r1147, t1148, t1149);
        } else {
            char* t1150 = __s1094;
            _Bool r1151 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(t1099, t1150);
            if (r1151) {
                unsigned long t1152 = __how_much1113;
                _Bool cast1153 = (_Bool)t1152;
                _Bool ternary1154;
                if (cast1153) {
                  unsigned long t1155 = __len11093;
                  unsigned long t1156 = __len21095;
                  _Bool c1157 = ((t1155 != t1156)) ? 1 : 0;
                  ternary1154 = (_Bool)c1157;
                } else {
                  _Bool c1158 = 0;
                  ternary1154 = (_Bool)c1158;
                }
                if (ternary1154) {
                  char* t1159 = __p1112;
                  unsigned long t1160 = __len21095;
                  char* ptr1161 = &(t1159)[t1160];
                  char* t1162 = __p1112;
                  unsigned long t1163 = __len11093;
                  char* ptr1164 = &(t1162)[t1163];
                  unsigned long t1165 = __how_much1113;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr1161, ptr1164, t1165);
                }
                unsigned long t1166 = __len21095;
                _Bool cast1167 = (_Bool)t1166;
                if (cast1167) {
                  char* t1168 = __p1112;
                  char* t1169 = __s1094;
                  unsigned long t1170 = __len21095;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1168, t1169, t1170);
                }
            } else {
              char* t1171 = __p1112;
              unsigned long t1172 = __len11093;
              char* t1173 = __s1094;
              unsigned long t1174 = __len21095;
              unsigned long t1175 = __how_much1113;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(t1099, t1171, t1172, t1173, t1174, t1175);
            }
        }
    } else {
      unsigned long t1176 = __pos1092;
      unsigned long t1177 = __len11093;
      char* t1178 = __s1094;
      unsigned long t1179 = __len21095;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t1099, t1176, t1177, t1178, t1179);
    }
  unsigned long t1180 = __new_size1098;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1099, t1180);
  __retval1096 = t1099;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1181 = __retval1096;
  return t1181;
}

// function: _ZSt12__niter_baseIPcET_S1_
char* char__std____niter_base_char__(char* v1182) {
bb1183: ;
  char* __it1184;
  char* __retval1185;
  __it1184 = v1182;
  char* t1186 = __it1184;
  __retval1185 = t1186;
  char* t1187 = __retval1185;
  return t1187;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignIPcvEERS4_T_S8_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_char___void_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1188, char* v1189, char* v1190) {
bb1191: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1192;
  char* __first1193;
  char* __last1194;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1195;
  this1192 = v1188;
  __first1193 = v1189;
  __last1194 = v1190;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1196 = this1192;
    unsigned long c1197 = 0;
    unsigned long r1198 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1196);
    char* t1199 = __first1193;
    char* r1200 = char__std____niter_base_char__(t1199);
    char* t1201 = __last1194;
    char* t1202 = __first1193;
    long diff1203 = t1201 - t1202;
    unsigned long cast1204 = (unsigned long)diff1203;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1205 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t1196, c1197, r1198, r1200, cast1204);
    __retval1195 = r1205;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1206 = __retval1195;
    return t1206;
  abort();
}

// function: _ZNKSt15basic_streambufIcSt11char_traitsIcEE5pbaseEv
char* std__basic_streambuf_char__std__char_traits_char_____pbase___const(struct std__basic_streambuf_char__std__char_traits_char__* v1207) {
bb1208: ;
  struct std__basic_streambuf_char__std__char_traits_char__* this1209;
  char* __retval1210;
  this1209 = v1207;
  struct std__basic_streambuf_char__std__char_traits_char__* t1211 = this1209;
  char* t1212 = t1211->_M_out_beg;
  __retval1210 = t1212;
  char* t1213 = __retval1210;
  return t1213;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_copy_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_copy_assign() {
bb1214: ;
  _Bool __retval1215;
  _Bool t1216 = _ZNSt17integral_constantIbLb0EE5valueE;
  __retval1215 = t1216;
  _Bool t1217 = __retval1215;
  return t1217;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE15_S_always_equalEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_always_equal() {
bb1218: ;
  _Bool __retval1219;
  _Bool t1220 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval1219 = t1220;
  _Bool t1221 = __retval1219;
  return t1221;
}

// function: _ZSteqRKSaIcES1_
_Bool std__operator__(struct std__allocator_char_* v1222, struct std__allocator_char_* v1223) {
bb1224: ;
  struct std__allocator_char_* unnamed1225;
  struct std__allocator_char_* unnamed1226;
  _Bool __retval1227;
  unnamed1225 = v1222;
  unnamed1226 = v1223;
  _Bool c1228 = 1;
  __retval1227 = c1228;
  _Bool t1229 = __retval1227;
  return t1229;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1230) {
bb1231: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1232;
  char* __retval1233;
  this1232 = v1230;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1234 = this1232;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1234);
  char* r1235 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t1234);
  __retval1233 = r1235;
  char* t1236 = __retval1233;
  return t1236;
}

// function: _ZSt15__alloc_on_copyISaIcEEvRT_RKS1_
void void_std____alloc_on_copy_std__allocator_char___(struct std__allocator_char_* v1237, struct std__allocator_char_* v1238) {
bb1239: ;
  struct std__allocator_char_* __one1240;
  struct std__allocator_char_* __two1241;
  __one1240 = v1237;
  __two1241 = v1238;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1242, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1243) {
bb1244: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1245;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1246;
  this1245 = v1242;
  __str1246 = v1243;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1247 = this1245;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1248 = __str1246;
    _Bool c1249 = ((t1247 != t1248)) ? 1 : 0;
    if (c1249) {
      unsigned long __rsize1250;
      unsigned long __capacity1251;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1252 = __str1246;
      unsigned long r1253 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t1252);
      __rsize1250 = r1253;
      unsigned long r1254 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t1247);
      __capacity1251 = r1254;
        unsigned long t1255 = __rsize1250;
        unsigned long t1256 = __capacity1251;
        _Bool c1257 = ((t1255 > t1256)) ? 1 : 0;
        if (c1257) {
          unsigned long __new_capacity1258;
          char* __tmp1259;
          unsigned long t1260 = __rsize1250;
          __new_capacity1258 = t1260;
          unsigned long t1261 = __capacity1251;
          char* r1262 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1247, &__new_capacity1258, t1261);
          __tmp1259 = r1262;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1247);
          char* t1263 = __tmp1259;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1247, t1263);
          unsigned long t1264 = __new_capacity1258;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1247, t1264);
        }
        unsigned long t1265 = __rsize1250;
        _Bool cast1266 = (_Bool)t1265;
        if (cast1266) {
          char* r1267 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1247);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1268 = __str1246;
          char* r1269 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1268);
          unsigned long t1270 = __rsize1250;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1267, r1269, t1270);
        }
      unsigned long t1271 = __rsize1250;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1247, t1271);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignERKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1272, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1273) {
bb1274: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1275;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1276;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1277;
  this1275 = v1272;
  __str1276 = v1273;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1278 = this1275;
    _Bool r1279 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_copy_assign();
    if (r1279) {
        _Bool r1280 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_always_equal();
        _Bool u1281 = !r1280;
        _Bool ternary1282;
        if (u1281) {
          _Bool r1283 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1278);
          _Bool u1284 = !r1283;
          ternary1282 = (_Bool)u1284;
        } else {
          _Bool c1285 = 0;
          ternary1282 = (_Bool)c1285;
        }
        _Bool ternary1286;
        if (ternary1282) {
          struct std__allocator_char_* r1287 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1278);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1288 = __str1276;
          struct std__allocator_char_* r1289 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1288);
          _Bool r1290 = std__operator__(r1287, r1289);
          _Bool u1291 = !r1290;
          ternary1286 = (_Bool)u1291;
        } else {
          _Bool c1292 = 0;
          ternary1286 = (_Bool)c1292;
        }
        if (ternary1286) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1293 = __str1276;
            unsigned long r1294 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1293);
            unsigned long c1295 = 15;
            _Bool c1296 = ((r1294 <= c1295)) ? 1 : 0;
            if (c1296) {
              unsigned long t1297 = t1278->field2._M_allocated_capacity;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1278, t1297);
              char* r1298 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t1278);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1278, r1298);
              unsigned long c1299 = 0;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1278, c1299);
            } else {
              unsigned long __len1300;
              struct std__allocator_char_ __alloc1301;
              char* __ptr1302;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1303 = __str1276;
              unsigned long r1304 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1303);
              __len1300 = r1304;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1305 = __str1276;
              struct std__allocator_char_* r1306 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1305);
              std__allocator_char___allocator(&__alloc1301, r1306);
              unsigned long t1307 = __len1300;
              unsigned long c1308 = 1;
              unsigned long b1309 = t1307 + c1308;
              char* r1310 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(&__alloc1301, b1309);
              __ptr1302 = r1310;
              unsigned long t1311 = t1278->field2._M_allocated_capacity;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1278, t1311);
              char* t1312 = __ptr1302;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1278, t1312);
              unsigned long t1313 = __len1300;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1278, t1313);
              unsigned long t1314 = __len1300;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1278, t1314);
            }
        }
      struct std__allocator_char_* r1315 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1278);
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1316 = __str1276;
      struct std__allocator_char_* r1317 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1316);
      void_std____alloc_on_copy_std__allocator_char___(r1315, r1317);
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1318 = __str1276;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t1278, t1318);
  __retval1277 = t1278;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1319 = __retval1277;
  return t1319;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSERKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1320, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1321) {
bb1322: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1323;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1324;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1325;
  this1323 = v1320;
  __str1324 = v1321;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1326 = this1323;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1327 = __str1324;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1328 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(t1326, t1327);
  __retval1325 = r1328;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1329 = __retval1325;
  return t1329;
}

// function: _ZNKRSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEE3strEv
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char_____str___const__(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* v1330) {
bb1331: ;
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* this1332;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval1333;
  _Bool nrvo1334;
  struct std__allocator_char_ ref_tmp01335;
  this1332 = v1330;
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* t1336 = this1332;
  _Bool c1337 = 0;
  nrvo1334 = c1337;
  struct std__allocator_char_ r1338 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(&t1336->_M_string);
  ref_tmp01335 = r1338;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&__retval1333, &ref_tmp01335);
  {
    std__allocator_char____allocator(&ref_tmp01335);
  }
      char* __hi1339;
      char* r1340 = std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______M_high_mark___const(t1336);
      __hi1339 = r1340;
      char* t1341 = __hi1339;
      _Bool cast1342 = (_Bool)t1341;
      if (cast1342) {
        struct std__basic_streambuf_char__std__char_traits_char__* base1343 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t1336 + 0);
        char* r1344 = std__basic_streambuf_char__std__char_traits_char_____pbase___const(base1343);
        char* t1345 = __hi1339;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1346 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_char___void_(&__retval1333, r1344, t1345);
      } else {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1347 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&__retval1333, &t1336->_M_string);
      }
    _Bool c1348 = 1;
    nrvo1334 = c1348;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1349 = __retval1333;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ret_val1350 = t1349;
    {
      _Bool t1351 = nrvo1334;
      _Bool u1352 = !t1351;
      if (u1352) {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&__retval1333);
      }
    }
    return ret_val1350;
  abort();
}

// function: _ZNKRSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEE3strEv
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____str___const__(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* v1353) {
bb1354: ;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* this1355;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval1356;
  this1355 = v1353;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* t1357 = this1355;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1358 = std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char_____str___const__(&t1357->_M_stringbuf);
  __retval1356 = r1358;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1359 = __retval1356;
  return t1359;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1360) {
bb1361: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1362;
  this1362 = v1360;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1363 = this1362;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1363);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1363->_M_dataplus);
  }
  return;
}

// function: _ZNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream_2(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* v1364, void** v1365) {
bb1366: ;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* this1367;
  void** vtt1368;
  this1367 = v1364;
  vtt1368 = v1365;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* t1369 = this1367;
  void** t1370 = vtt1368;
    {
      std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______basic_stringbuf(&t1369->_M_stringbuf);
    }
  {
    struct std__basic_iostream_char__std__char_traits_char__* base1371 = (struct std__basic_iostream_char__std__char_traits_char__*)((char *)t1369 + 0);
    static void *vtt_slot1372 = 0;
    void** vtt1373 = (void**)&vtt_slot1372;
    std__basic_iostream_char__std__char_traits_char______basic_iostream(base1371, vtt1373);
  }
  return;
}

// function: _ZNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEED1Ev
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* v1374) {
bb1375: ;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* this1376;
  this1376 = v1374;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* t1377 = this1376;
    static void *vtt_slot1378 = 0;
    void** vtt1379 = (void**)&vtt_slot1378;
    std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream_2(t1377, vtt1379);
  {
    struct std__basic_ios_char__std__char_traits_char__* base1380 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1377 + 128);
    std__basic_ios_char__std__char_traits_char______basic_ios(base1380);
  }
  return;
}

// function: main
int main() {
bb1381: ;
  int __retval1382;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__ oss1383;
  float val1384;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp01385;
  int c1386 = 0;
  __retval1382 = c1386;
  std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____basic_stringstream(&oss1383);
    double c1387 = 0x1.18eb851eb851fp6;
    float cast1388 = (float)c1387;
    val1384 = cast1388;
    struct std__basic_ostream_char__std__char_traits_char__* base1389 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(oss1383) + 16);
    float t1390 = val1384;
    struct std__basic_ostream_char__std__char_traits_char__* r1391 = std__ostream__operator__(base1389, t1390);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1392 = std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____str___const__(&oss1383);
    ref_tmp01385 = r1392;
      char* cast1393 = (char*)&(_str);
      _Bool r1394 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&ref_tmp01385, cast1393);
      if (r1394) {
      } else {
        char* cast1395 = (char*)&(_str_1);
        char* c1396 = (char*)_str_2;
        unsigned int c1397 = 21;
        char* cast1398 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast1395, c1396, c1397, cast1398);
      }
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp01385);
    }
    int c1399 = 0;
    __retval1382 = c1399;
    int t1400 = __retval1382;
    int ret_val1401 = t1400;
    {
      std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(&oss1383);
    }
    return ret_val1401;
  int t1402 = __retval1382;
  return t1402;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1403) {
bb1404: ;
  char* __r1405;
  char* __retval1406;
  __r1405 = v1403;
  char* t1407 = __r1405;
  __retval1406 = t1407;
  char* t1408 = __retval1406;
  return t1408;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1409) {
bb1410: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1411;
  char* __retval1412;
  this1411 = v1409;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1413 = this1411;
  char* cast1414 = (char*)&(t1413->field2._M_local_buf);
  char* r1415 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1414);
  __retval1412 = r1415;
  char* t1416 = __retval1412;
  return t1416;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1417) {
bb1418: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1419;
  _Bool __retval1420;
  this1419 = v1417;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1421 = this1419;
    char* r1422 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1421);
    char* r1423 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1421);
    _Bool c1424 = ((r1422 == r1423)) ? 1 : 0;
    if (c1424) {
        unsigned long t1425 = t1421->_M_string_length;
        unsigned long c1426 = 15;
        _Bool c1427 = ((t1425 > c1426)) ? 1 : 0;
        if (c1427) {
          __builtin_unreachable();
        }
      _Bool c1428 = 1;
      __retval1420 = c1428;
      _Bool t1429 = __retval1420;
      return t1429;
    }
  _Bool c1430 = 0;
  __retval1420 = c1430;
  _Bool t1431 = __retval1420;
  return t1431;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1432, char* v1433, unsigned long v1434) {
bb1435: ;
  struct std____new_allocator_char_* this1436;
  char* __p1437;
  unsigned long __n1438;
  this1436 = v1432;
  __p1437 = v1433;
  __n1438 = v1434;
  struct std____new_allocator_char_* t1439 = this1436;
    unsigned long c1440 = 1;
    unsigned long c1441 = 16;
    _Bool c1442 = ((c1440 > c1441)) ? 1 : 0;
    if (c1442) {
      char* t1443 = __p1437;
      void* cast1444 = (void*)t1443;
      unsigned long t1445 = __n1438;
      unsigned long c1446 = 1;
      unsigned long b1447 = t1445 * c1446;
      unsigned long c1448 = 1;
      operator_delete_3(cast1444, b1447, c1448);
      return;
    }
  char* t1449 = __p1437;
  void* cast1450 = (void*)t1449;
  unsigned long t1451 = __n1438;
  unsigned long c1452 = 1;
  unsigned long b1453 = t1451 * c1452;
  operator_delete_2(cast1450, b1453);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1454, char* v1455, unsigned long v1456) {
bb1457: ;
  struct std__allocator_char_* this1458;
  char* __p1459;
  unsigned long __n1460;
  this1458 = v1454;
  __p1459 = v1455;
  __n1460 = v1456;
  struct std__allocator_char_* t1461 = this1458;
    _Bool r1462 = std____is_constant_evaluated();
    if (r1462) {
      char* t1463 = __p1459;
      void* cast1464 = (void*)t1463;
      operator_delete(cast1464);
      return;
    }
  struct std____new_allocator_char_* base1465 = (struct std____new_allocator_char_*)((char *)t1461 + 0);
  char* t1466 = __p1459;
  unsigned long t1467 = __n1460;
  std____new_allocator_char___deallocate(base1465, t1466, t1467);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1468, char* v1469, unsigned long v1470) {
bb1471: ;
  struct std__allocator_char_* __a1472;
  char* __p1473;
  unsigned long __n1474;
  __a1472 = v1468;
  __p1473 = v1469;
  __n1474 = v1470;
  struct std__allocator_char_* t1475 = __a1472;
  char* t1476 = __p1473;
  unsigned long t1477 = __n1474;
  std__allocator_char___deallocate(t1475, t1476, t1477);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1478) {
bb1479: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1480;
  struct std__allocator_char_* __retval1481;
  this1480 = v1478;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1482 = this1480;
  struct std__allocator_char_* base1483 = (struct std__allocator_char_*)((char *)&(t1482->_M_dataplus) + 0);
  __retval1481 = base1483;
  struct std__allocator_char_* t1484 = __retval1481;
  return t1484;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1485, unsigned long v1486) {
bb1487: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1488;
  unsigned long __size1489;
  this1488 = v1485;
  __size1489 = v1486;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1490 = this1488;
  struct std__allocator_char_* r1491 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1490);
  char* r1492 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1490);
  unsigned long t1493 = __size1489;
  unsigned long c1494 = 1;
  unsigned long b1495 = t1493 + c1494;
  std__allocator_traits_std__allocator_char_____deallocate(r1491, r1492, b1495);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1496) {
bb1497: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1498;
  this1498 = v1496;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1499 = this1498;
    _Bool r1500 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1499);
    _Bool u1501 = !r1500;
    if (u1501) {
      unsigned long t1502 = t1499->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1499, t1502);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1503) {
bb1504: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1505;
  this1505 = v1503;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1506 = this1505;
  {
    struct std__allocator_char_* base1507 = (struct std__allocator_char_*)((char *)t1506 + 0);
    std__allocator_char____allocator(base1507);
  }
  return;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEEC2Ev
void std__basic_streambuf_char__std__char_traits_char_____basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v1508) {
bb1509: ;
  struct std__basic_streambuf_char__std__char_traits_char__* this1510;
  this1510 = v1508;
  struct std__basic_streambuf_char__std__char_traits_char__* t1511 = this1510;
  void* v1512 = (void*)&_ZTVSt15basic_streambufIcSt11char_traitsIcEE[2];
  void** v1513 = (void**)t1511;
  *(void**)(v1513) = (void*)v1512;
  char* c1514 = ((void*)0);
  t1511->_M_in_beg = c1514;
  char* c1515 = ((void*)0);
  t1511->_M_in_cur = c1515;
  char* c1516 = ((void*)0);
  t1511->_M_in_end = c1516;
  char* c1517 = ((void*)0);
  t1511->_M_out_beg = c1517;
  char* c1518 = ((void*)0);
  t1511->_M_out_cur = c1518;
  char* c1519 = ((void*)0);
  t1511->_M_out_end = c1519;
  std__locale__locale(&t1511->_M_buf_locale);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1520) {
bb1521: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1522;
  struct std__allocator_char_ ref_tmp01523;
  this1522 = v1520;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1524 = this1522;
  char* r1525 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t1524);
  std__allocator_char___allocator_2(&ref_tmp01523);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t1524->_M_dataplus, r1525, &ref_tmp01523);
  {
    std__allocator_char____allocator(&ref_tmp01523);
  }
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1524);
    unsigned long c1526 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1524, c1526);
  return;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v1527) {
bb1528: ;
  struct std__basic_streambuf_char__std__char_traits_char__* this1529;
  this1529 = v1527;
  struct std__basic_streambuf_char__std__char_traits_char__* t1530 = this1529;
  {
    std__locale___locale(&t1530->_M_buf_locale);
  }
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1531) {
bb1532: ;
  char* __r1533;
  char* __retval1534;
  __r1533 = v1531;
  char* t1535 = __r1533;
  __retval1534 = t1535;
  char* t1536 = __retval1534;
  return t1536;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1537) {
bb1538: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1539;
  char* __retval1540;
  this1539 = v1537;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1541 = this1539;
  char* cast1542 = (char*)&(t1541->field2._M_local_buf);
  char* r1543 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1542);
  __retval1540 = r1543;
  char* t1544 = __retval1540;
  return t1544;
}

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v1545) {
bb1546: ;
  struct std__allocator_char_* this1547;
  this1547 = v1545;
  struct std__allocator_char_* t1548 = this1547;
  struct std____new_allocator_char_* base1549 = (struct std____new_allocator_char_*)((char *)t1548 + 0);
  std____new_allocator_char_____new_allocator_2(base1549);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1550, char* v1551, struct std__allocator_char_* v1552) {
bb1553: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1554;
  char* __dat1555;
  struct std__allocator_char_* __a1556;
  this1554 = v1550;
  __dat1555 = v1551;
  __a1556 = v1552;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1557 = this1554;
  struct std__allocator_char_* base1558 = (struct std__allocator_char_*)((char *)t1557 + 0);
  struct std__allocator_char_* t1559 = __a1556;
  std__allocator_char___allocator(base1558, t1559);
    char* t1560 = __dat1555;
    t1557->_M_p = t1560;
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v1561) {
bb1562: ;
  struct std__allocator_char_* this1563;
  this1563 = v1561;
  struct std__allocator_char_* t1564 = this1563;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1565: ;
  _Bool __retval1566;
    _Bool c1567 = 0;
    __retval1566 = c1567;
    _Bool t1568 = __retval1566;
    return t1568;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1569) {
bb1570: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1571;
  this1571 = v1569;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1572 = this1571;
    _Bool r1573 = std__is_constant_evaluated();
    if (r1573) {
        unsigned long __i1574;
        unsigned long c1575 = 0;
        __i1574 = c1575;
        while (1) {
          unsigned long t1577 = __i1574;
          unsigned long c1578 = 15;
          _Bool c1579 = ((t1577 <= c1578)) ? 1 : 0;
          if (!c1579) break;
          char c1580 = 0;
          unsigned long t1581 = __i1574;
          t1572->field2._M_local_buf[t1581] = c1580;
        for_step1576: ;
          unsigned long t1582 = __i1574;
          unsigned long u1583 = t1582 + 1;
          __i1574 = u1583;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1584, unsigned long v1585) {
bb1586: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1587;
  unsigned long __length1588;
  this1587 = v1584;
  __length1588 = v1585;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1589 = this1587;
  unsigned long t1590 = __length1588;
  t1589->_M_string_length = t1590;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1591, char* v1592) {
bb1593: ;
  char* __location1594;
  char* __args1595;
  char* __retval1596;
  void* __loc1597;
  __location1594 = v1591;
  __args1595 = v1592;
  char* t1598 = __location1594;
  void* cast1599 = (void*)t1598;
  __loc1597 = cast1599;
    void* t1600 = __loc1597;
    char* cast1601 = (char*)t1600;
    char* t1602 = __args1595;
    char t1603 = *t1602;
    *cast1601 = t1603;
    __retval1596 = cast1601;
    char* t1604 = __retval1596;
    return t1604;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1605, char* v1606) {
bb1607: ;
  char* __c11608;
  char* __c21609;
  __c11608 = v1605;
  __c21609 = v1606;
    _Bool r1610 = std____is_constant_evaluated();
    if (r1610) {
      char* t1611 = __c11608;
      char* t1612 = __c21609;
      char* r1613 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1611, t1612);
    } else {
      char* t1614 = __c21609;
      char t1615 = *t1614;
      char* t1616 = __c11608;
      *t1616 = t1615;
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1617, unsigned long v1618) {
bb1619: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1620;
  unsigned long __n1621;
  char ref_tmp01622;
  this1620 = v1617;
  __n1621 = v1618;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1623 = this1620;
  unsigned long t1624 = __n1621;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1623, t1624);
  unsigned long t1625 = __n1621;
  char* r1626 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1623);
  char* ptr1627 = &(r1626)[t1625];
  char c1628 = 0;
  ref_tmp01622 = c1628;
  std__char_traits_char___assign(ptr1627, &ref_tmp01622);
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1629) {
bb1630: ;
  struct std____new_allocator_char_* this1631;
  this1631 = v1629;
  struct std____new_allocator_char_* t1632 = this1631;
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1633, struct std____new_allocator_char_* v1634) {
bb1635: ;
  struct std____new_allocator_char_* this1636;
  struct std____new_allocator_char_* unnamed1637;
  this1636 = v1633;
  unnamed1637 = v1634;
  struct std____new_allocator_char_* t1638 = this1636;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1639, char* v1640, struct std__allocator_char_* v1641) {
bb1642: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1643;
  char* __dat1644;
  struct std__allocator_char_* __a1645;
  this1643 = v1639;
  __dat1644 = v1640;
  __a1645 = v1641;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1646 = this1643;
  struct std__allocator_char_* base1647 = (struct std__allocator_char_*)((char *)t1646 + 0);
  struct std__allocator_char_* t1648 = __a1645;
  std__allocator_char___allocator(base1647, t1648);
    char* t1649 = __dat1644;
    t1646->_M_p = t1649;
  return;
}

