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
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
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
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base2inE_const __attribute__((aligned(4))) = 8;
int _ZNSt8ios_base3outE_const __attribute__((aligned(4))) = 16;
char _str[8] = "testasd";
char _str_1[23] = "oss.str() == \"testasd\"";
char _str_2[120] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stream/sstream_str_char_asterisk/main.cpp";
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
int std__operator__2(int p0, int p1);
void std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char_____basic_stringbuf(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* p0, int p1);
extern void std__basic_ios_char__std__char_traits_char_____init(struct std__basic_ios_char__std__char_traits_char__* p0, struct std__basic_streambuf_char__std__char_traits_char__* p1);
void std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______basic_stringbuf(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* p0);
void std__basic_iostream_char__std__char_traits_char______basic_iostream(struct std__basic_iostream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____basic_stringstream(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* p0);
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new__(unsigned long p0) { return malloc(p0); }
void operator_delete__(void* p0, unsigned long p1) { free(p0); }
extern char* strcpy(char* p0, char* p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
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
int std__operator__2(int v147, int v148) {
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
      int r208 = std__operator__2(t206, t207);
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

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v221, int v222) {
bb223: ;
  int __a224;
  int __b225;
  int __retval226;
  __a224 = v221;
  __b225 = v222;
  int t227 = __a224;
  int t228 = __b225;
  int b229 = t227 | t228;
  __retval226 = b229;
  int t230 = __retval226;
  return t230;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v231) {
bb232: ;
  struct std__basic_ios_char__std__char_traits_char__* this233;
  int __retval234;
  this233 = v231;
  struct std__basic_ios_char__std__char_traits_char__* t235 = this233;
  struct std__ios_base* base236 = (struct std__ios_base*)((char *)t235 + 0);
  int t237 = base236->_M_streambuf_state;
  __retval234 = t237;
  int t238 = __retval234;
  return t238;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v239, int v240) {
bb241: ;
  struct std__basic_ios_char__std__char_traits_char__* this242;
  int __state243;
  this242 = v239;
  __state243 = v240;
  struct std__basic_ios_char__std__char_traits_char__* t244 = this242;
  int r245 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t244);
  int t246 = __state243;
  int r247 = std__operator_(r245, t246);
  std__basic_ios_char__std__char_traits_char_____clear(t244, r247);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v248, char* v249) {
bb250: ;
  struct std__basic_ostream_char__std__char_traits_char__* __out251;
  char* __s252;
  struct std__basic_ostream_char__std__char_traits_char__* __retval253;
  __out251 = v248;
  __s252 = v249;
    char* t254 = __s252;
    _Bool cast255 = (_Bool)t254;
    _Bool u256 = !cast255;
    if (u256) {
      struct std__basic_ostream_char__std__char_traits_char__* t257 = __out251;
      void** v258 = (void**)t257;
      void* v259 = *((void**)v258);
      unsigned char* cast260 = (unsigned char*)v259;
      long c261 = -24;
      unsigned char* ptr262 = &(cast260)[c261];
      long* cast263 = (long*)ptr262;
      long t264 = *cast263;
      unsigned char* cast265 = (unsigned char*)t257;
      unsigned char* ptr266 = &(cast265)[t264];
      struct std__basic_ostream_char__std__char_traits_char__* cast267 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr266;
      struct std__basic_ios_char__std__char_traits_char__* cast268 = (struct std__basic_ios_char__std__char_traits_char__*)cast267;
      int t269 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast268, t269);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t270 = __out251;
      char* t271 = __s252;
      char* t272 = __s252;
      unsigned long r273 = std__char_traits_char___length(t272);
      long cast274 = (long)r273;
      struct std__basic_ostream_char__std__char_traits_char__* r275 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t270, t271, cast274);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t276 = __out251;
  __retval253 = t276;
  struct std__basic_ostream_char__std__char_traits_char__* t277 = __retval253;
  return t277;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v278) {
bb279: ;
  struct std__allocator_char_* __a280;
  unsigned long __retval281;
  __a280 = v278;
  unsigned long c282 = -1;
  unsigned long c283 = 1;
  unsigned long b284 = c282 / c283;
  __retval281 = b284;
  unsigned long t285 = __retval281;
  return t285;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v286) {
bb287: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this288;
  struct std__allocator_char_* __retval289;
  this288 = v286;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t290 = this288;
  struct std__allocator_char_* base291 = (struct std__allocator_char_*)((char *)&(t290->_M_dataplus) + 0);
  __retval289 = base291;
  struct std__allocator_char_* t292 = __retval289;
  return t292;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v293, unsigned long* v294) {
bb295: ;
  unsigned long* __a296;
  unsigned long* __b297;
  unsigned long* __retval298;
  __a296 = v293;
  __b297 = v294;
    unsigned long* t299 = __b297;
    unsigned long t300 = *t299;
    unsigned long* t301 = __a296;
    unsigned long t302 = *t301;
    _Bool c303 = ((t300 < t302)) ? 1 : 0;
    if (c303) {
      unsigned long* t304 = __b297;
      __retval298 = t304;
      unsigned long* t305 = __retval298;
      return t305;
    }
  unsigned long* t306 = __a296;
  __retval298 = t306;
  unsigned long* t307 = __retval298;
  return t307;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v308) {
bb309: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this310;
  unsigned long __retval311;
  unsigned long __diffmax312;
  unsigned long __allocmax313;
  this310 = v308;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t314 = this310;
  unsigned long c315 = 9223372036854775807;
  __diffmax312 = c315;
  struct std__allocator_char_* r316 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t314);
  unsigned long r317 = std__allocator_traits_std__allocator_char_____max_size(r316);
  __allocmax313 = r317;
  unsigned long* r318 = unsigned_long_const__std__min_unsigned_long_(&__diffmax312, &__allocmax313);
  unsigned long t319 = *r318;
  unsigned long c320 = 1;
  unsigned long b321 = t319 - c320;
  __retval311 = b321;
  unsigned long t322 = __retval311;
  return t322;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v323) {
bb324: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this325;
  unsigned long __retval326;
  unsigned long __sz327;
  this325 = v323;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t328 = this325;
  unsigned long t329 = t328->_M_string_length;
  __sz327 = t329;
    unsigned long t330 = __sz327;
    unsigned long r331 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t328);
    _Bool c332 = ((t330 > r331)) ? 1 : 0;
    if (c332) {
      __builtin_unreachable();
    }
  unsigned long t333 = __sz327;
  __retval326 = t333;
  unsigned long t334 = __retval326;
  return t334;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb335: ;
  _Bool __retval336;
    _Bool c337 = 0;
    __retval336 = c337;
    _Bool t338 = __retval336;
    return t338;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v339, char* v340) {
bb341: ;
  char* __c1342;
  char* __c2343;
  _Bool __retval344;
  __c1342 = v339;
  __c2343 = v340;
  char* t345 = __c1342;
  char t346 = *t345;
  int cast347 = (int)t346;
  char* t348 = __c2343;
  char t349 = *t348;
  int cast350 = (int)t349;
  _Bool c351 = ((cast347 == cast350)) ? 1 : 0;
  __retval344 = c351;
  _Bool t352 = __retval344;
  return t352;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v353) {
bb354: ;
  char* __p355;
  unsigned long __retval356;
  unsigned long __i357;
  __p355 = v353;
  unsigned long c358 = 0;
  __i357 = c358;
    char ref_tmp0359;
    while (1) {
      unsigned long t360 = __i357;
      char* t361 = __p355;
      char* ptr362 = &(t361)[t360];
      char c363 = 0;
      ref_tmp0359 = c363;
      _Bool r364 = __gnu_cxx__char_traits_char___eq(ptr362, &ref_tmp0359);
      _Bool u365 = !r364;
      if (!u365) break;
      unsigned long t366 = __i357;
      unsigned long u367 = t366 + 1;
      __i357 = u367;
    }
  unsigned long t368 = __i357;
  __retval356 = t368;
  unsigned long t369 = __retval356;
  return t369;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v370) {
bb371: ;
  char* __s372;
  unsigned long __retval373;
  __s372 = v370;
    _Bool r374 = std____is_constant_evaluated();
    if (r374) {
      char* t375 = __s372;
      unsigned long r376 = __gnu_cxx__char_traits_char___length(t375);
      __retval373 = r376;
      unsigned long t377 = __retval373;
      return t377;
    }
  char* t378 = __s372;
  unsigned long r379 = strlen(t378);
  __retval373 = r379;
  unsigned long t380 = __retval373;
  return t380;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v381, char* v382) {
bb383: ;
  char* __c1384;
  char* __c2385;
  _Bool __retval386;
  __c1384 = v381;
  __c2385 = v382;
  char* t387 = __c1384;
  char t388 = *t387;
  unsigned char cast389 = (unsigned char)t388;
  int cast390 = (int)cast389;
  char* t391 = __c2385;
  char t392 = *t391;
  unsigned char cast393 = (unsigned char)t392;
  int cast394 = (int)cast393;
  _Bool c395 = ((cast390 < cast394)) ? 1 : 0;
  __retval386 = c395;
  _Bool t396 = __retval386;
  return t396;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v397, char* v398, unsigned long v399) {
bb400: ;
  char* __s1401;
  char* __s2402;
  unsigned long __n403;
  int __retval404;
  __s1401 = v397;
  __s2402 = v398;
  __n403 = v399;
    unsigned long t405 = __n403;
    unsigned long c406 = 0;
    _Bool c407 = ((t405 == c406)) ? 1 : 0;
    if (c407) {
      int c408 = 0;
      __retval404 = c408;
      int t409 = __retval404;
      return t409;
    }
    _Bool r410 = std____is_constant_evaluated();
    if (r410) {
        unsigned long __i411;
        unsigned long c412 = 0;
        __i411 = c412;
        while (1) {
          unsigned long t414 = __i411;
          unsigned long t415 = __n403;
          _Bool c416 = ((t414 < t415)) ? 1 : 0;
          if (!c416) break;
            unsigned long t417 = __i411;
            char* t418 = __s1401;
            char* ptr419 = &(t418)[t417];
            unsigned long t420 = __i411;
            char* t421 = __s2402;
            char* ptr422 = &(t421)[t420];
            _Bool r423 = std__char_traits_char___lt(ptr419, ptr422);
            if (r423) {
              int c424 = -1;
              __retval404 = c424;
              int t425 = __retval404;
              int ret_val426 = t425;
              return ret_val426;
            } else {
                unsigned long t427 = __i411;
                char* t428 = __s2402;
                char* ptr429 = &(t428)[t427];
                unsigned long t430 = __i411;
                char* t431 = __s1401;
                char* ptr432 = &(t431)[t430];
                _Bool r433 = std__char_traits_char___lt(ptr429, ptr432);
                if (r433) {
                  int c434 = 1;
                  __retval404 = c434;
                  int t435 = __retval404;
                  int ret_val436 = t435;
                  return ret_val436;
                }
            }
        for_step413: ;
          unsigned long t437 = __i411;
          unsigned long u438 = t437 + 1;
          __i411 = u438;
        }
      int c439 = 0;
      __retval404 = c439;
      int t440 = __retval404;
      return t440;
    }
  char* t441 = __s1401;
  void* cast442 = (void*)t441;
  char* t443 = __s2402;
  void* cast444 = (void*)t443;
  unsigned long t445 = __n403;
  int r446 = memcmp(cast442, cast444, t445);
  __retval404 = r446;
  int t447 = __retval404;
  return t447;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v448) {
bb449: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this450;
  char* __retval451;
  this450 = v448;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t452 = this450;
  char* t453 = t452->_M_dataplus._M_p;
  __retval451 = t453;
  char* t454 = __retval451;
  return t454;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v455) {
bb456: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this457;
  char* __retval458;
  this457 = v455;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t459 = this457;
  char* r460 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t459);
  __retval458 = r460;
  char* t461 = __retval458;
  return t461;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v462, char* v463) {
bb464: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs465;
  char* __rhs466;
  _Bool __retval467;
  __lhs465 = v462;
  __rhs466 = v463;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t468 = __lhs465;
  unsigned long r469 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t468);
  char* t470 = __rhs466;
  unsigned long r471 = std__char_traits_char___length(t470);
  _Bool c472 = ((r469 == r471)) ? 1 : 0;
  _Bool ternary473;
  if (c472) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t474 = __lhs465;
    char* r475 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t474);
    char* t476 = __rhs466;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t477 = __lhs465;
    unsigned long r478 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t477);
    int r479 = std__char_traits_char___compare(r475, t476, r478);
    _Bool cast480 = (_Bool)r479;
    _Bool u481 = !cast480;
    ternary473 = (_Bool)u481;
  } else {
    _Bool c482 = 0;
    ternary473 = (_Bool)c482;
  }
  __retval467 = ternary473;
  _Bool t483 = __retval467;
  return t483;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v484, struct std__allocator_char_* v485) {
bb486: ;
  struct std__allocator_char_* this487;
  struct std__allocator_char_* __a488;
  this487 = v484;
  __a488 = v485;
  struct std__allocator_char_* t489 = this487;
  struct std____new_allocator_char_* base490 = (struct std____new_allocator_char_*)((char *)t489 + 0);
  struct std__allocator_char_* t491 = __a488;
  struct std____new_allocator_char_* base492 = (struct std____new_allocator_char_*)((char *)t491 + 0);
  std____new_allocator_char_____new_allocator(base490, base492);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13get_allocatorEv
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v493) {
bb494: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this495;
  struct std__allocator_char_ __retval496;
  this495 = v493;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t497 = this495;
  struct std__allocator_char_* r498 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t497);
  std__allocator_char___allocator(&__retval496, r498);
  struct std__allocator_char_ t499 = __retval496;
  return t499;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v500, struct std__allocator_char_* v501) {
bb502: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this503;
  struct std__allocator_char_* __a504;
  this503 = v500;
  __a504 = v501;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t505 = this503;
  char* r506 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t505);
  struct std__allocator_char_* t507 = __a504;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t505->_M_dataplus, r506, t507);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t505);
    unsigned long c508 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t505, c508);
  return;
}

// function: _ZNKSt15basic_streambufIcSt11char_traitsIcEE4pptrEv
char* std__basic_streambuf_char__std__char_traits_char_____pptr___const(struct std__basic_streambuf_char__std__char_traits_char__* v509) {
bb510: ;
  struct std__basic_streambuf_char__std__char_traits_char__* this511;
  char* __retval512;
  this511 = v509;
  struct std__basic_streambuf_char__std__char_traits_char__* t513 = this511;
  char* t514 = t513->_M_out_cur;
  __retval512 = t514;
  char* t515 = __retval512;
  return t515;
}

// function: _ZNKSt15basic_streambufIcSt11char_traitsIcEE5egptrEv
char* std__basic_streambuf_char__std__char_traits_char_____egptr___const(struct std__basic_streambuf_char__std__char_traits_char__* v516) {
bb517: ;
  struct std__basic_streambuf_char__std__char_traits_char__* this518;
  char* __retval519;
  this518 = v516;
  struct std__basic_streambuf_char__std__char_traits_char__* t520 = this518;
  char* t521 = t520->_M_in_end;
  __retval519 = t521;
  char* t522 = __retval519;
  return t522;
}

// function: _ZNKSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEE12_M_high_markEv
char* std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______M_high_mark___const(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* v523) {
bb524: ;
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* this525;
  char* __retval526;
  this525 = v523;
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* t527 = this525;
    char* __pptr528;
    struct std__basic_streambuf_char__std__char_traits_char__* base529 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t527 + 0);
    char* r530 = std__basic_streambuf_char__std__char_traits_char_____pptr___const(base529);
    __pptr528 = r530;
    char* t531 = __pptr528;
    _Bool cast532 = (_Bool)t531;
    if (cast532) {
      char* __egptr533;
      struct std__basic_streambuf_char__std__char_traits_char__* base534 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t527 + 0);
      char* r535 = std__basic_streambuf_char__std__char_traits_char_____egptr___const(base534);
      __egptr533 = r535;
        char* t536 = __egptr533;
        _Bool cast537 = (_Bool)t536;
        _Bool u538 = !cast537;
        _Bool ternary539;
        if (u538) {
          _Bool c540 = 1;
          ternary539 = (_Bool)c540;
        } else {
          char* t541 = __pptr528;
          char* t542 = __egptr533;
          _Bool c543 = ((t541 > t542)) ? 1 : 0;
          ternary539 = (_Bool)c543;
        }
        if (ternary539) {
          char* t544 = __pptr528;
          __retval526 = t544;
          char* t545 = __retval526;
          return t545;
        } else {
          char* t546 = __egptr533;
          __retval526 = t546;
          char* t547 = __retval526;
          return t547;
        }
    }
  char* c548 = ((void*)0);
  __retval526 = c548;
  char* t549 = __retval526;
  return t549;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v550, unsigned long v551, unsigned long v552, char* v553) {
bb554: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this555;
  unsigned long __n1556;
  unsigned long __n2557;
  char* __s558;
  this555 = v550;
  __n1556 = v551;
  __n2557 = v552;
  __s558 = v553;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t559 = this555;
    unsigned long r560 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t559);
    unsigned long r561 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t559);
    unsigned long t562 = __n1556;
    unsigned long b563 = r561 - t562;
    unsigned long b564 = r560 - b563;
    unsigned long t565 = __n2557;
    _Bool c566 = ((b564 < t565)) ? 1 : 0;
    if (c566) {
      char* t567 = __s558;
      std____throw_length_error(t567);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v568) {
bb569: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this570;
  unsigned long __retval571;
  unsigned long __sz572;
  this570 = v568;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t573 = this570;
  _Bool r574 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t573);
  unsigned long ternary575;
  if (r574) {
    unsigned long c576 = 15;
    ternary575 = (unsigned long)c576;
  } else {
    unsigned long t577 = t573->field2._M_allocated_capacity;
    ternary575 = (unsigned long)t577;
  }
  __sz572 = ternary575;
    unsigned long t578 = __sz572;
    unsigned long c579 = 15;
    _Bool c580 = ((t578 < c579)) ? 1 : 0;
    _Bool ternary581;
    if (c580) {
      _Bool c582 = 1;
      ternary581 = (_Bool)c582;
    } else {
      unsigned long t583 = __sz572;
      unsigned long r584 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t573);
      _Bool c585 = ((t583 > r584)) ? 1 : 0;
      ternary581 = (_Bool)c585;
    }
    if (ternary581) {
      __builtin_unreachable();
    }
  unsigned long t586 = __sz572;
  __retval571 = t586;
  unsigned long t587 = __retval571;
  return t587;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v588) {
bb589: ;
  struct std____new_allocator_char_* this590;
  unsigned long __retval591;
  this590 = v588;
  struct std____new_allocator_char_* t592 = this590;
  unsigned long c593 = 9223372036854775807;
  unsigned long c594 = 1;
  unsigned long b595 = c593 / c594;
  __retval591 = b595;
  unsigned long t596 = __retval591;
  return t596;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v597, unsigned long v598, void* v599) {
bb600: ;
  struct std____new_allocator_char_* this601;
  unsigned long __n602;
  void* unnamed603;
  char* __retval604;
  this601 = v597;
  __n602 = v598;
  unnamed603 = v599;
  struct std____new_allocator_char_* t605 = this601;
    unsigned long t606 = __n602;
    unsigned long r607 = std____new_allocator_char____M_max_size___const(t605);
    _Bool c608 = ((t606 > r607)) ? 1 : 0;
    if (c608) {
        unsigned long t609 = __n602;
        unsigned long c610 = -1;
        unsigned long c611 = 1;
        unsigned long b612 = c610 / c611;
        _Bool c613 = ((t609 > b612)) ? 1 : 0;
        if (c613) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c614 = 1;
    unsigned long c615 = 16;
    _Bool c616 = ((c614 > c615)) ? 1 : 0;
    if (c616) {
      unsigned long __al617;
      unsigned long c618 = 1;
      __al617 = c618;
      unsigned long t619 = __n602;
      unsigned long c620 = 1;
      unsigned long b621 = t619 * c620;
      unsigned long t622 = __al617;
      void* r623 = operator_new_2(b621, t622);
      char* cast624 = (char*)r623;
      __retval604 = cast624;
      char* t625 = __retval604;
      return t625;
    }
  unsigned long t626 = __n602;
  unsigned long c627 = 1;
  unsigned long b628 = t626 * c627;
  void* r629 = operator_new(b628);
  char* cast630 = (char*)r629;
  __retval604 = cast630;
  char* t631 = __retval604;
  return t631;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v632, unsigned long v633) {
bb634: ;
  struct std__allocator_char_* this635;
  unsigned long __n636;
  char* __retval637;
  this635 = v632;
  __n636 = v633;
  struct std__allocator_char_* t638 = this635;
    _Bool r639 = std____is_constant_evaluated();
    if (r639) {
        unsigned long t640 = __n636;
        unsigned long c641 = 1;
        unsigned long ovr642;
        _Bool ovf643 = __builtin_mul_overflow(t640, c641, &ovr642);
        __n636 = ovr642;
        if (ovf643) {
          std____throw_bad_array_new_length();
        }
      unsigned long t644 = __n636;
      void* r645 = operator_new(t644);
      char* cast646 = (char*)r645;
      __retval637 = cast646;
      char* t647 = __retval637;
      return t647;
    }
  struct std____new_allocator_char_* base648 = (struct std____new_allocator_char_*)((char *)t638 + 0);
  unsigned long t649 = __n636;
  void* c650 = ((void*)0);
  char* r651 = std____new_allocator_char___allocate(base648, t649, c650);
  __retval637 = r651;
  char* t652 = __retval637;
  return t652;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v653, unsigned long v654) {
bb655: ;
  struct std__allocator_char_* __a656;
  unsigned long __n657;
  char* __retval658;
  __a656 = v653;
  __n657 = v654;
  struct std__allocator_char_* t659 = __a656;
  unsigned long t660 = __n657;
  char* r661 = std__allocator_char___allocate(t659, t660);
  __retval658 = r661;
  char* t662 = __retval658;
  return t662;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v663, unsigned long v664) {
bb665: ;
  struct std__allocator_char_* __a666;
  unsigned long __n667;
  char* __retval668;
  char* __p669;
  __a666 = v663;
  __n667 = v664;
  struct std__allocator_char_* t670 = __a666;
  unsigned long t671 = __n667;
  char* r672 = std__allocator_traits_std__allocator_char_____allocate(t670, t671);
  __p669 = r672;
  char* t673 = __p669;
  __retval668 = t673;
  char* t674 = __retval668;
  return t674;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v675, char* v676, unsigned long v677) {
bb678: ;
  char* __s1679;
  char* __s2680;
  unsigned long __n681;
  char* __retval682;
  __s1679 = v675;
  __s2680 = v676;
  __n681 = v677;
    unsigned long t683 = __n681;
    unsigned long c684 = 0;
    _Bool c685 = ((t683 == c684)) ? 1 : 0;
    if (c685) {
      char* t686 = __s1679;
      __retval682 = t686;
      char* t687 = __retval682;
      return t687;
    }
    _Bool r688 = std____is_constant_evaluated();
    if (r688) {
        unsigned long __i689;
        unsigned long c690 = 0;
        __i689 = c690;
        while (1) {
          unsigned long t692 = __i689;
          unsigned long t693 = __n681;
          _Bool c694 = ((t692 < t693)) ? 1 : 0;
          if (!c694) break;
          char* t695 = __s1679;
          unsigned long t696 = __i689;
          char* ptr697 = &(t695)[t696];
          unsigned long t698 = __i689;
          char* t699 = __s2680;
          char* ptr700 = &(t699)[t698];
          char* r701 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr697, ptr700);
        for_step691: ;
          unsigned long t702 = __i689;
          unsigned long u703 = t702 + 1;
          __i689 = u703;
        }
      char* t704 = __s1679;
      __retval682 = t704;
      char* t705 = __retval682;
      return t705;
    }
  char* t706 = __s1679;
  void* cast707 = (void*)t706;
  char* t708 = __s2680;
  void* cast709 = (void*)t708;
  unsigned long t710 = __n681;
  unsigned long c711 = 1;
  unsigned long b712 = t710 * c711;
  void* r713 = memcpy(cast707, cast709, b712);
  char* t714 = __s1679;
  __retval682 = t714;
  char* t715 = __retval682;
  return t715;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v716, char* v717, unsigned long v718) {
bb719: ;
  char* __s1720;
  char* __s2721;
  unsigned long __n722;
  char* __retval723;
  __s1720 = v716;
  __s2721 = v717;
  __n722 = v718;
    unsigned long t724 = __n722;
    unsigned long c725 = 0;
    _Bool c726 = ((t724 == c725)) ? 1 : 0;
    if (c726) {
      char* t727 = __s1720;
      __retval723 = t727;
      char* t728 = __retval723;
      return t728;
    }
    _Bool r729 = std____is_constant_evaluated();
    if (r729) {
      char* t730 = __s1720;
      char* t731 = __s2721;
      unsigned long t732 = __n722;
      char* r733 = __gnu_cxx__char_traits_char___copy(t730, t731, t732);
      __retval723 = r733;
      char* t734 = __retval723;
      return t734;
    }
  char* t735 = __s1720;
  void* cast736 = (void*)t735;
  char* t737 = __s2721;
  void* cast738 = (void*)t737;
  unsigned long t739 = __n722;
  void* r740 = memcpy(cast736, cast738, t739);
  char* cast741 = (char*)r740;
  __retval723 = cast741;
  char* t742 = __retval723;
  return t742;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v743, char* v744, unsigned long v745) {
bb746: ;
  char* __d747;
  char* __s748;
  unsigned long __n749;
  __d747 = v743;
  __s748 = v744;
  __n749 = v745;
    unsigned long t750 = __n749;
    unsigned long c751 = 1;
    _Bool c752 = ((t750 == c751)) ? 1 : 0;
    if (c752) {
      char* t753 = __d747;
      char* t754 = __s748;
      std__char_traits_char___assign(t753, t754);
    } else {
      char* t755 = __d747;
      char* t756 = __s748;
      unsigned long t757 = __n749;
      char* r758 = std__char_traits_char___copy(t755, t756, t757);
    }
  return;
}

// function: _ZNKSt4lessIPKcEclES1_S1_
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* v759, char* v760, char* v761) {
bb762: ;
  struct std__less_const_char___* this763;
  char* __x764;
  char* __y765;
  _Bool __retval766;
  this763 = v759;
  __x764 = v760;
  __y765 = v761;
  struct std__less_const_char___* t767 = this763;
    _Bool r768 = std____is_constant_evaluated();
    if (r768) {
      char* t769 = __x764;
      char* t770 = __y765;
      _Bool c771 = ((t769 < t770)) ? 1 : 0;
      __retval766 = c771;
      _Bool t772 = __retval766;
      return t772;
    }
  char* t773 = __x764;
  unsigned long cast774 = (unsigned long)t773;
  char* t775 = __y765;
  unsigned long cast776 = (unsigned long)t775;
  _Bool c777 = ((cast774 < cast776)) ? 1 : 0;
  __retval766 = c777;
  _Bool t778 = __retval766;
  return t778;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_disjunctEPKc
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v779, char* v780) {
bb781: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this782;
  char* __s783;
  _Bool __retval784;
  struct std__less_const_char___ ref_tmp0785;
  this782 = v779;
  __s783 = v780;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t786 = this782;
  char* t787 = __s783;
  char* r788 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t786);
  _Bool r789 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp0785, t787, r788);
  _Bool ternary790;
  if (r789) {
    _Bool c791 = 1;
    ternary790 = (_Bool)c791;
  } else {
    struct std__less_const_char___ ref_tmp1792;
    char* r793 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t786);
    unsigned long r794 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t786);
    char* ptr795 = &(r793)[r794];
    char* t796 = __s783;
    _Bool r797 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp1792, ptr795, t796);
    ternary790 = (_Bool)r797;
  }
  __retval784 = ternary790;
  _Bool t798 = __retval784;
  return t798;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign(char* v799, char* v800) {
bb801: ;
  char* __c1802;
  char* __c2803;
  __c1802 = v799;
  __c2803 = v800;
    _Bool r804 = std____is_constant_evaluated();
    if (r804) {
      char* t805 = __c1802;
      char* t806 = __c2803;
      char* r807 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t805, t806);
    } else {
      char* t808 = __c2803;
      char t809 = *t808;
      char* t810 = __c1802;
      *t810 = t809;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v811, char* v812, unsigned long v813) {
bb814: ;
  char* __s1815;
  char* __s2816;
  unsigned long __n817;
  char* __retval818;
  __s1815 = v811;
  __s2816 = v812;
  __n817 = v813;
    unsigned long t819 = __n817;
    unsigned long c820 = 0;
    _Bool c821 = ((t819 == c820)) ? 1 : 0;
    if (c821) {
      char* t822 = __s1815;
      __retval818 = t822;
      char* t823 = __retval818;
      return t823;
    }
    _Bool r824 = std____is_constant_evaluated();
    if (r824) {
        char* t825 = __s2816;
        char* t826 = __s1815;
        _Bool c827 = ((t825 < t826)) ? 1 : 0;
        _Bool isconst828 = 0;
        _Bool ternary829;
        if (isconst828) {
          char* t830 = __s1815;
          char* t831 = __s2816;
          _Bool c832 = ((t830 > t831)) ? 1 : 0;
          ternary829 = (_Bool)c832;
        } else {
          _Bool c833 = 0;
          ternary829 = (_Bool)c833;
        }
        _Bool ternary834;
        if (ternary829) {
          char* t835 = __s1815;
          char* t836 = __s2816;
          unsigned long t837 = __n817;
          char* ptr838 = &(t836)[t837];
          _Bool c839 = ((t835 < ptr838)) ? 1 : 0;
          ternary834 = (_Bool)c839;
        } else {
          _Bool c840 = 0;
          ternary834 = (_Bool)c840;
        }
        if (ternary834) {
            do {
                unsigned long t841 = __n817;
                unsigned long u842 = t841 - 1;
                __n817 = u842;
                unsigned long t843 = __n817;
                char* t844 = __s1815;
                char* ptr845 = &(t844)[t843];
                unsigned long t846 = __n817;
                char* t847 = __s2816;
                char* ptr848 = &(t847)[t846];
                __gnu_cxx__char_traits_char___assign(ptr845, ptr848);
              unsigned long t849 = __n817;
              unsigned long c850 = 0;
              _Bool c851 = ((t849 > c850)) ? 1 : 0;
              if (!c851) break;
            } while (1);
        } else {
          char* t852 = __s1815;
          char* t853 = __s2816;
          unsigned long t854 = __n817;
          char* r855 = __gnu_cxx__char_traits_char___copy(t852, t853, t854);
        }
      char* t856 = __s1815;
      __retval818 = t856;
      char* t857 = __retval818;
      return t857;
    }
  char* t858 = __s1815;
  void* cast859 = (void*)t858;
  char* t860 = __s2816;
  void* cast861 = (void*)t860;
  unsigned long t862 = __n817;
  unsigned long c863 = 1;
  unsigned long b864 = t862 * c863;
  void* r865 = memmove(cast859, cast861, b864);
  char* t866 = __s1815;
  __retval818 = t866;
  char* t867 = __retval818;
  return t867;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v868, char* v869, unsigned long v870) {
bb871: ;
  char* __s1872;
  char* __s2873;
  unsigned long __n874;
  char* __retval875;
  __s1872 = v868;
  __s2873 = v869;
  __n874 = v870;
    unsigned long t876 = __n874;
    unsigned long c877 = 0;
    _Bool c878 = ((t876 == c877)) ? 1 : 0;
    if (c878) {
      char* t879 = __s1872;
      __retval875 = t879;
      char* t880 = __retval875;
      return t880;
    }
    _Bool r881 = std____is_constant_evaluated();
    if (r881) {
      char* t882 = __s1872;
      char* t883 = __s2873;
      unsigned long t884 = __n874;
      char* r885 = __gnu_cxx__char_traits_char___move(t882, t883, t884);
      __retval875 = r885;
      char* t886 = __retval875;
      return t886;
    }
  char* t887 = __s1872;
  void* cast888 = (void*)t887;
  char* t889 = __s2873;
  void* cast890 = (void*)t889;
  unsigned long t891 = __n874;
  void* r892 = memmove(cast888, cast890, t891);
  char* cast893 = (char*)r892;
  __retval875 = cast893;
  char* t894 = __retval875;
  return t894;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v895, char* v896, unsigned long v897) {
bb898: ;
  char* __d899;
  char* __s900;
  unsigned long __n901;
  __d899 = v895;
  __s900 = v896;
  __n901 = v897;
    unsigned long t902 = __n901;
    unsigned long c903 = 1;
    _Bool c904 = ((t902 == c903)) ? 1 : 0;
    if (c904) {
      char* t905 = __d899;
      char* t906 = __s900;
      std__char_traits_char___assign(t905, t906);
    } else {
      char* t907 = __d899;
      char* t908 = __s900;
      unsigned long t909 = __n901;
      char* r910 = std__char_traits_char___move(t907, t908, t909);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_replace_coldEPcmPKcmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v911, char* v912, unsigned long v913, char* v914, unsigned long v915, unsigned long v916) {
bb917: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this918;
  char* __p919;
  unsigned long __len1920;
  char* __s921;
  unsigned long __len2922;
  unsigned long __how_much923;
  this918 = v911;
  __p919 = v912;
  __len1920 = v913;
  __s921 = v914;
  __len2922 = v915;
  __how_much923 = v916;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t924 = this918;
    unsigned long t925 = __len2922;
    _Bool cast926 = (_Bool)t925;
    _Bool ternary927;
    if (cast926) {
      unsigned long t928 = __len2922;
      unsigned long t929 = __len1920;
      _Bool c930 = ((t928 <= t929)) ? 1 : 0;
      ternary927 = (_Bool)c930;
    } else {
      _Bool c931 = 0;
      ternary927 = (_Bool)c931;
    }
    if (ternary927) {
      char* t932 = __p919;
      char* t933 = __s921;
      unsigned long t934 = __len2922;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t932, t933, t934);
    }
    unsigned long t935 = __how_much923;
    _Bool cast936 = (_Bool)t935;
    _Bool ternary937;
    if (cast936) {
      unsigned long t938 = __len1920;
      unsigned long t939 = __len2922;
      _Bool c940 = ((t938 != t939)) ? 1 : 0;
      ternary937 = (_Bool)c940;
    } else {
      _Bool c941 = 0;
      ternary937 = (_Bool)c941;
    }
    if (ternary937) {
      char* t942 = __p919;
      unsigned long t943 = __len2922;
      char* ptr944 = &(t942)[t943];
      char* t945 = __p919;
      unsigned long t946 = __len1920;
      char* ptr947 = &(t945)[t946];
      unsigned long t948 = __how_much923;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr944, ptr947, t948);
    }
    unsigned long t949 = __len2922;
    unsigned long t950 = __len1920;
    _Bool c951 = ((t949 > t950)) ? 1 : 0;
    if (c951) {
        char* t952 = __s921;
        unsigned long t953 = __len2922;
        char* ptr954 = &(t952)[t953];
        char* t955 = __p919;
        unsigned long t956 = __len1920;
        char* ptr957 = &(t955)[t956];
        _Bool c958 = ((ptr954 <= ptr957)) ? 1 : 0;
        if (c958) {
          char* t959 = __p919;
          char* t960 = __s921;
          unsigned long t961 = __len2922;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t959, t960, t961);
        } else {
            char* t962 = __s921;
            char* t963 = __p919;
            unsigned long t964 = __len1920;
            char* ptr965 = &(t963)[t964];
            _Bool c966 = ((t962 >= ptr965)) ? 1 : 0;
            if (c966) {
              unsigned long __poff967;
              char* t968 = __s921;
              char* t969 = __p919;
              long diff970 = t968 - t969;
              unsigned long cast971 = (unsigned long)diff970;
              unsigned long t972 = __len2922;
              unsigned long t973 = __len1920;
              unsigned long b974 = t972 - t973;
              unsigned long b975 = cast971 + b974;
              __poff967 = b975;
              char* t976 = __p919;
              char* t977 = __p919;
              unsigned long t978 = __poff967;
              char* ptr979 = &(t977)[t978];
              unsigned long t980 = __len2922;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t976, ptr979, t980);
            } else {
              unsigned long __nleft981;
              char* t982 = __p919;
              unsigned long t983 = __len1920;
              char* ptr984 = &(t982)[t983];
              char* t985 = __s921;
              long diff986 = ptr984 - t985;
              unsigned long cast987 = (unsigned long)diff986;
              __nleft981 = cast987;
              char* t988 = __p919;
              char* t989 = __s921;
              unsigned long t990 = __nleft981;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t988, t989, t990);
              char* t991 = __p919;
              unsigned long t992 = __nleft981;
              char* ptr993 = &(t991)[t992];
              char* t994 = __p919;
              unsigned long t995 = __len2922;
              char* ptr996 = &(t994)[t995];
              unsigned long t997 = __len2922;
              unsigned long t998 = __nleft981;
              unsigned long b999 = t997 - t998;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr993, ptr996, b999);
            }
        }
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1000) {
bb1001: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1002;
  unsigned long __retval1003;
  this1002 = v1000;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1004 = this1002;
  unsigned long r1005 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1004);
  __retval1003 = r1005;
  unsigned long t1006 = __retval1003;
  return t1006;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1007, unsigned long* v1008, unsigned long v1009) {
bb1010: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1011;
  unsigned long* __capacity1012;
  unsigned long __old_capacity1013;
  char* __retval1014;
  this1011 = v1007;
  __capacity1012 = v1008;
  __old_capacity1013 = v1009;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1015 = this1011;
    unsigned long* t1016 = __capacity1012;
    unsigned long t1017 = *t1016;
    unsigned long r1018 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1015);
    _Bool c1019 = ((t1017 > r1018)) ? 1 : 0;
    if (c1019) {
      char* cast1020 = (char*)&(_str_4);
      std____throw_length_error(cast1020);
    }
    unsigned long* t1021 = __capacity1012;
    unsigned long t1022 = *t1021;
    unsigned long t1023 = __old_capacity1013;
    _Bool c1024 = ((t1022 > t1023)) ? 1 : 0;
    _Bool ternary1025;
    if (c1024) {
      unsigned long* t1026 = __capacity1012;
      unsigned long t1027 = *t1026;
      unsigned long c1028 = 2;
      unsigned long t1029 = __old_capacity1013;
      unsigned long b1030 = c1028 * t1029;
      _Bool c1031 = ((t1027 < b1030)) ? 1 : 0;
      ternary1025 = (_Bool)c1031;
    } else {
      _Bool c1032 = 0;
      ternary1025 = (_Bool)c1032;
    }
    if (ternary1025) {
      unsigned long c1033 = 2;
      unsigned long t1034 = __old_capacity1013;
      unsigned long b1035 = c1033 * t1034;
      unsigned long* t1036 = __capacity1012;
      *t1036 = b1035;
        unsigned long* t1037 = __capacity1012;
        unsigned long t1038 = *t1037;
        unsigned long r1039 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1015);
        _Bool c1040 = ((t1038 > r1039)) ? 1 : 0;
        if (c1040) {
          unsigned long r1041 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1015);
          unsigned long* t1042 = __capacity1012;
          *t1042 = r1041;
        }
    }
  struct std__allocator_char_* r1043 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1015);
  unsigned long* t1044 = __capacity1012;
  unsigned long t1045 = *t1044;
  unsigned long c1046 = 1;
  unsigned long b1047 = t1045 + c1046;
  char* r1048 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1043, b1047);
  __retval1014 = r1048;
  char* t1049 = __retval1014;
  return t1049;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1050, char* v1051) {
bb1052: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1053;
  char* __p1054;
  this1053 = v1050;
  __p1054 = v1051;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1055 = this1053;
  char* t1056 = __p1054;
  t1055->_M_dataplus._M_p = t1056;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1057, unsigned long v1058) {
bb1059: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1060;
  unsigned long __capacity1061;
  this1060 = v1057;
  __capacity1061 = v1058;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1062 = this1060;
  unsigned long t1063 = __capacity1061;
  t1062->field2._M_allocated_capacity = t1063;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1064, unsigned long v1065, unsigned long v1066, char* v1067, unsigned long v1068) {
bb1069: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1070;
  unsigned long __pos1071;
  unsigned long __len11072;
  char* __s1073;
  unsigned long __len21074;
  unsigned long __how_much1075;
  unsigned long __new_capacity1076;
  char* __r1077;
  this1070 = v1064;
  __pos1071 = v1065;
  __len11072 = v1066;
  __s1073 = v1067;
  __len21074 = v1068;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1078 = this1070;
  unsigned long r1079 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t1078);
  unsigned long t1080 = __pos1071;
  unsigned long b1081 = r1079 - t1080;
  unsigned long t1082 = __len11072;
  unsigned long b1083 = b1081 - t1082;
  __how_much1075 = b1083;
  unsigned long r1084 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t1078);
  unsigned long t1085 = __len21074;
  unsigned long b1086 = r1084 + t1085;
  unsigned long t1087 = __len11072;
  unsigned long b1088 = b1086 - t1087;
  __new_capacity1076 = b1088;
  unsigned long r1089 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t1078);
  char* r1090 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1078, &__new_capacity1076, r1089);
  __r1077 = r1090;
    unsigned long t1091 = __pos1071;
    _Bool cast1092 = (_Bool)t1091;
    if (cast1092) {
      char* t1093 = __r1077;
      char* r1094 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1078);
      unsigned long t1095 = __pos1071;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1093, r1094, t1095);
    }
    char* t1096 = __s1073;
    _Bool cast1097 = (_Bool)t1096;
    _Bool ternary1098;
    if (cast1097) {
      unsigned long t1099 = __len21074;
      _Bool cast1100 = (_Bool)t1099;
      ternary1098 = (_Bool)cast1100;
    } else {
      _Bool c1101 = 0;
      ternary1098 = (_Bool)c1101;
    }
    if (ternary1098) {
      char* t1102 = __r1077;
      unsigned long t1103 = __pos1071;
      char* ptr1104 = &(t1102)[t1103];
      char* t1105 = __s1073;
      unsigned long t1106 = __len21074;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr1104, t1105, t1106);
    }
    unsigned long t1107 = __how_much1075;
    _Bool cast1108 = (_Bool)t1107;
    if (cast1108) {
      char* t1109 = __r1077;
      unsigned long t1110 = __pos1071;
      char* ptr1111 = &(t1109)[t1110];
      unsigned long t1112 = __len21074;
      char* ptr1113 = &(ptr1111)[t1112];
      char* r1114 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1078);
      unsigned long t1115 = __pos1071;
      char* ptr1116 = &(r1114)[t1115];
      unsigned long t1117 = __len11072;
      char* ptr1118 = &(ptr1116)[t1117];
      unsigned long t1119 = __how_much1075;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr1113, ptr1118, t1119);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1078);
  char* t1120 = __r1077;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1078, t1120);
  unsigned long t1121 = __new_capacity1076;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1078, t1121);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1122, unsigned long v1123, unsigned long v1124, char* v1125, unsigned long v1126) {
bb1127: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1128;
  unsigned long __pos1129;
  unsigned long __len11130;
  char* __s1131;
  unsigned long __len21132;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1133;
  unsigned long __old_size1134;
  unsigned long __new_size1135;
  this1128 = v1122;
  __pos1129 = v1123;
  __len11130 = v1124;
  __s1131 = v1125;
  __len21132 = v1126;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1136 = this1128;
  unsigned long t1137 = __len11130;
  unsigned long t1138 = __len21132;
  char* cast1139 = (char*)&(_str_3);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t1136, t1137, t1138, cast1139);
  unsigned long r1140 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1136);
  __old_size1134 = r1140;
  unsigned long t1141 = __old_size1134;
  unsigned long t1142 = __len21132;
  unsigned long b1143 = t1141 + t1142;
  unsigned long t1144 = __len11130;
  unsigned long b1145 = b1143 - t1144;
  __new_size1135 = b1145;
    unsigned long t1146 = __new_size1135;
    unsigned long r1147 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t1136);
    _Bool c1148 = ((t1146 <= r1147)) ? 1 : 0;
    if (c1148) {
      char* __p1149;
      unsigned long __how_much1150;
      char* r1151 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1136);
      unsigned long t1152 = __pos1129;
      char* ptr1153 = &(r1151)[t1152];
      __p1149 = ptr1153;
      unsigned long t1154 = __old_size1134;
      unsigned long t1155 = __pos1129;
      unsigned long b1156 = t1154 - t1155;
      unsigned long t1157 = __len11130;
      unsigned long b1158 = b1156 - t1157;
      __how_much1150 = b1158;
        _Bool r1159 = std__is_constant_evaluated();
        if (r1159) {
          char* __newp1160;
          struct std__allocator_char_* r1161 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1136);
          unsigned long t1162 = __new_size1135;
          char* r1163 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1161, t1162);
          __newp1160 = r1163;
          char* t1164 = __newp1160;
          char* r1165 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1136);
          unsigned long t1166 = __pos1129;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1164, r1165, t1166);
          char* t1167 = __newp1160;
          unsigned long t1168 = __pos1129;
          char* ptr1169 = &(t1167)[t1168];
          char* t1170 = __s1131;
          unsigned long t1171 = __len21132;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr1169, t1170, t1171);
          char* t1172 = __newp1160;
          unsigned long t1173 = __pos1129;
          char* ptr1174 = &(t1172)[t1173];
          unsigned long t1175 = __len21132;
          char* ptr1176 = &(ptr1174)[t1175];
          char* t1177 = __p1149;
          unsigned long t1178 = __len11130;
          char* ptr1179 = &(t1177)[t1178];
          unsigned long t1180 = __how_much1150;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr1176, ptr1179, t1180);
          char* r1181 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1136);
          char* t1182 = __newp1160;
          unsigned long t1183 = __new_size1135;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1181, t1182, t1183);
          struct std__allocator_char_* r1184 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1136);
          char* t1185 = __newp1160;
          unsigned long t1186 = __new_size1135;
          std__allocator_char___deallocate(r1184, t1185, t1186);
        } else {
            char* t1187 = __s1131;
            _Bool r1188 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(t1136, t1187);
            if (r1188) {
                unsigned long t1189 = __how_much1150;
                _Bool cast1190 = (_Bool)t1189;
                _Bool ternary1191;
                if (cast1190) {
                  unsigned long t1192 = __len11130;
                  unsigned long t1193 = __len21132;
                  _Bool c1194 = ((t1192 != t1193)) ? 1 : 0;
                  ternary1191 = (_Bool)c1194;
                } else {
                  _Bool c1195 = 0;
                  ternary1191 = (_Bool)c1195;
                }
                if (ternary1191) {
                  char* t1196 = __p1149;
                  unsigned long t1197 = __len21132;
                  char* ptr1198 = &(t1196)[t1197];
                  char* t1199 = __p1149;
                  unsigned long t1200 = __len11130;
                  char* ptr1201 = &(t1199)[t1200];
                  unsigned long t1202 = __how_much1150;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr1198, ptr1201, t1202);
                }
                unsigned long t1203 = __len21132;
                _Bool cast1204 = (_Bool)t1203;
                if (cast1204) {
                  char* t1205 = __p1149;
                  char* t1206 = __s1131;
                  unsigned long t1207 = __len21132;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1205, t1206, t1207);
                }
            } else {
              char* t1208 = __p1149;
              unsigned long t1209 = __len11130;
              char* t1210 = __s1131;
              unsigned long t1211 = __len21132;
              unsigned long t1212 = __how_much1150;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(t1136, t1208, t1209, t1210, t1211, t1212);
            }
        }
    } else {
      unsigned long t1213 = __pos1129;
      unsigned long t1214 = __len11130;
      char* t1215 = __s1131;
      unsigned long t1216 = __len21132;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t1136, t1213, t1214, t1215, t1216);
    }
  unsigned long t1217 = __new_size1135;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1136, t1217);
  __retval1133 = t1136;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1218 = __retval1133;
  return t1218;
}

// function: _ZSt12__niter_baseIPcET_S1_
char* char__std____niter_base_char__(char* v1219) {
bb1220: ;
  char* __it1221;
  char* __retval1222;
  __it1221 = v1219;
  char* t1223 = __it1221;
  __retval1222 = t1223;
  char* t1224 = __retval1222;
  return t1224;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignIPcvEERS4_T_S8_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_char___void_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1225, char* v1226, char* v1227) {
bb1228: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1229;
  char* __first1230;
  char* __last1231;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1232;
  this1229 = v1225;
  __first1230 = v1226;
  __last1231 = v1227;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1233 = this1229;
    unsigned long c1234 = 0;
    unsigned long r1235 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1233);
    char* t1236 = __first1230;
    char* r1237 = char__std____niter_base_char__(t1236);
    char* t1238 = __last1231;
    char* t1239 = __first1230;
    long diff1240 = t1238 - t1239;
    unsigned long cast1241 = (unsigned long)diff1240;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1242 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t1233, c1234, r1235, r1237, cast1241);
    __retval1232 = r1242;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1243 = __retval1232;
    return t1243;
  abort();
}

// function: _ZNKSt15basic_streambufIcSt11char_traitsIcEE5pbaseEv
char* std__basic_streambuf_char__std__char_traits_char_____pbase___const(struct std__basic_streambuf_char__std__char_traits_char__* v1244) {
bb1245: ;
  struct std__basic_streambuf_char__std__char_traits_char__* this1246;
  char* __retval1247;
  this1246 = v1244;
  struct std__basic_streambuf_char__std__char_traits_char__* t1248 = this1246;
  char* t1249 = t1248->_M_out_beg;
  __retval1247 = t1249;
  char* t1250 = __retval1247;
  return t1250;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_copy_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_copy_assign() {
bb1251: ;
  _Bool __retval1252;
  _Bool t1253 = _ZNSt17integral_constantIbLb0EE5valueE;
  __retval1252 = t1253;
  _Bool t1254 = __retval1252;
  return t1254;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE15_S_always_equalEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_always_equal() {
bb1255: ;
  _Bool __retval1256;
  _Bool t1257 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval1256 = t1257;
  _Bool t1258 = __retval1256;
  return t1258;
}

// function: _ZSteqRKSaIcES1_
_Bool std__operator__(struct std__allocator_char_* v1259, struct std__allocator_char_* v1260) {
bb1261: ;
  struct std__allocator_char_* unnamed1262;
  struct std__allocator_char_* unnamed1263;
  _Bool __retval1264;
  unnamed1262 = v1259;
  unnamed1263 = v1260;
  _Bool c1265 = 1;
  __retval1264 = c1265;
  _Bool t1266 = __retval1264;
  return t1266;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1267) {
bb1268: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1269;
  char* __retval1270;
  this1269 = v1267;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1271 = this1269;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1271);
  char* r1272 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t1271);
  __retval1270 = r1272;
  char* t1273 = __retval1270;
  return t1273;
}

// function: _ZSt15__alloc_on_copyISaIcEEvRT_RKS1_
void void_std____alloc_on_copy_std__allocator_char___(struct std__allocator_char_* v1274, struct std__allocator_char_* v1275) {
bb1276: ;
  struct std__allocator_char_* __one1277;
  struct std__allocator_char_* __two1278;
  __one1277 = v1274;
  __two1278 = v1275;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1279, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1280) {
bb1281: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1282;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1283;
  this1282 = v1279;
  __str1283 = v1280;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1284 = this1282;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1285 = __str1283;
    _Bool c1286 = ((t1284 != t1285)) ? 1 : 0;
    if (c1286) {
      unsigned long __rsize1287;
      unsigned long __capacity1288;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1289 = __str1283;
      unsigned long r1290 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t1289);
      __rsize1287 = r1290;
      unsigned long r1291 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t1284);
      __capacity1288 = r1291;
        unsigned long t1292 = __rsize1287;
        unsigned long t1293 = __capacity1288;
        _Bool c1294 = ((t1292 > t1293)) ? 1 : 0;
        if (c1294) {
          unsigned long __new_capacity1295;
          char* __tmp1296;
          unsigned long t1297 = __rsize1287;
          __new_capacity1295 = t1297;
          unsigned long t1298 = __capacity1288;
          char* r1299 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1284, &__new_capacity1295, t1298);
          __tmp1296 = r1299;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1284);
          char* t1300 = __tmp1296;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1284, t1300);
          unsigned long t1301 = __new_capacity1295;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1284, t1301);
        }
        unsigned long t1302 = __rsize1287;
        _Bool cast1303 = (_Bool)t1302;
        if (cast1303) {
          char* r1304 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1284);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1305 = __str1283;
          char* r1306 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1305);
          unsigned long t1307 = __rsize1287;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1304, r1306, t1307);
        }
      unsigned long t1308 = __rsize1287;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1284, t1308);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignERKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1309, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1310) {
bb1311: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1312;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1313;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1314;
  this1312 = v1309;
  __str1313 = v1310;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1315 = this1312;
    _Bool r1316 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_copy_assign();
    if (r1316) {
        _Bool r1317 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_always_equal();
        _Bool u1318 = !r1317;
        _Bool ternary1319;
        if (u1318) {
          _Bool r1320 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1315);
          _Bool u1321 = !r1320;
          ternary1319 = (_Bool)u1321;
        } else {
          _Bool c1322 = 0;
          ternary1319 = (_Bool)c1322;
        }
        _Bool ternary1323;
        if (ternary1319) {
          struct std__allocator_char_* r1324 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1315);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1325 = __str1313;
          struct std__allocator_char_* r1326 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1325);
          _Bool r1327 = std__operator__(r1324, r1326);
          _Bool u1328 = !r1327;
          ternary1323 = (_Bool)u1328;
        } else {
          _Bool c1329 = 0;
          ternary1323 = (_Bool)c1329;
        }
        if (ternary1323) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1330 = __str1313;
            unsigned long r1331 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1330);
            unsigned long c1332 = 15;
            _Bool c1333 = ((r1331 <= c1332)) ? 1 : 0;
            if (c1333) {
              unsigned long t1334 = t1315->field2._M_allocated_capacity;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1315, t1334);
              char* r1335 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t1315);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1315, r1335);
              unsigned long c1336 = 0;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1315, c1336);
            } else {
              unsigned long __len1337;
              struct std__allocator_char_ __alloc1338;
              char* __ptr1339;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1340 = __str1313;
              unsigned long r1341 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1340);
              __len1337 = r1341;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1342 = __str1313;
              struct std__allocator_char_* r1343 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1342);
              std__allocator_char___allocator(&__alloc1338, r1343);
              unsigned long t1344 = __len1337;
              unsigned long c1345 = 1;
              unsigned long b1346 = t1344 + c1345;
              char* r1347 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(&__alloc1338, b1346);
              __ptr1339 = r1347;
              unsigned long t1348 = t1315->field2._M_allocated_capacity;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1315, t1348);
              char* t1349 = __ptr1339;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1315, t1349);
              unsigned long t1350 = __len1337;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1315, t1350);
              unsigned long t1351 = __len1337;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1315, t1351);
            }
        }
      struct std__allocator_char_* r1352 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1315);
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1353 = __str1313;
      struct std__allocator_char_* r1354 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1353);
      void_std____alloc_on_copy_std__allocator_char___(r1352, r1354);
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1355 = __str1313;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t1315, t1355);
  __retval1314 = t1315;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1356 = __retval1314;
  return t1356;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSERKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1357, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1358) {
bb1359: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1360;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1361;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1362;
  this1360 = v1357;
  __str1361 = v1358;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1363 = this1360;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1364 = __str1361;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1365 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(t1363, t1364);
  __retval1362 = r1365;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1366 = __retval1362;
  return t1366;
}

// function: _ZNKRSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEE3strEv
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char_____str___const__(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* v1367) {
bb1368: ;
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* this1369;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval1370;
  _Bool nrvo1371;
  struct std__allocator_char_ ref_tmp01372;
  this1369 = v1367;
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* t1373 = this1369;
  _Bool c1374 = 0;
  nrvo1371 = c1374;
  struct std__allocator_char_ r1375 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(&t1373->_M_string);
  ref_tmp01372 = r1375;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&__retval1370, &ref_tmp01372);
  {
    std__allocator_char____allocator(&ref_tmp01372);
  }
      char* __hi1376;
      char* r1377 = std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______M_high_mark___const(t1373);
      __hi1376 = r1377;
      char* t1378 = __hi1376;
      _Bool cast1379 = (_Bool)t1378;
      if (cast1379) {
        struct std__basic_streambuf_char__std__char_traits_char__* base1380 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t1373 + 0);
        char* r1381 = std__basic_streambuf_char__std__char_traits_char_____pbase___const(base1380);
        char* t1382 = __hi1376;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1383 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_char___void_(&__retval1370, r1381, t1382);
      } else {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1384 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&__retval1370, &t1373->_M_string);
      }
    _Bool c1385 = 1;
    nrvo1371 = c1385;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1386 = __retval1370;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ret_val1387 = t1386;
    {
      _Bool t1388 = nrvo1371;
      _Bool u1389 = !t1388;
      if (u1389) {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&__retval1370);
      }
    }
    return ret_val1387;
  abort();
}

// function: _ZNKRSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEE3strEv
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____str___const__(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* v1390) {
bb1391: ;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* this1392;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval1393;
  this1392 = v1390;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* t1394 = this1392;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1395 = std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char_____str___const__(&t1394->_M_stringbuf);
  __retval1393 = r1395;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1396 = __retval1393;
  return t1396;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1397) {
bb1398: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1399;
  this1399 = v1397;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1400 = this1399;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1400);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1400->_M_dataplus);
  }
  return;
}

// function: _ZNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream_2(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* v1401, void** v1402) {
bb1403: ;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* this1404;
  void** vtt1405;
  this1404 = v1401;
  vtt1405 = v1402;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* t1406 = this1404;
  void** t1407 = vtt1405;
    {
      std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______basic_stringbuf(&t1406->_M_stringbuf);
    }
  {
    struct std__basic_iostream_char__std__char_traits_char__* base1408 = (struct std__basic_iostream_char__std__char_traits_char__*)((char *)t1406 + 0);
    static void *vtt_slot1409 = 0;
    void** vtt1410 = (void**)&vtt_slot1409;
    std__basic_iostream_char__std__char_traits_char______basic_iostream(base1408, vtt1410);
  }
  return;
}

// function: _ZNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEED1Ev
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* v1411) {
bb1412: ;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* this1413;
  this1413 = v1411;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* t1414 = this1413;
    static void *vtt_slot1415 = 0;
    void** vtt1416 = (void**)&vtt_slot1415;
    std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream_2(t1414, vtt1416);
  {
    struct std__basic_ios_char__std__char_traits_char__* base1417 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1414 + 128);
    std__basic_ios_char__std__char_traits_char______basic_ios(base1417);
  }
  return;
}

// function: main
int main() {
bb1418: ;
  int __retval1419;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__ oss1420;
  char* val11421;
  char* __new_result1422;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp01423;
  int c1424 = 0;
  __retval1419 = c1424;
  std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____basic_stringstream(&oss1420);
    unsigned long c1425 = 10;
    void* r1426 = operator_new__(c1425);
      char* cast1427 = (char*)r1426;
      __new_result1422 = cast1427;
    char* t1428 = __new_result1422;
    val11421 = t1428;
    char* t1429 = val11421;
    char* cast1430 = (char*)&(_str);
    char* r1431 = strcpy(t1429, cast1430);
    struct std__basic_ostream_char__std__char_traits_char__* base1432 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(oss1420) + 16);
    char* t1433 = val11421;
    struct std__basic_ostream_char__std__char_traits_char__* r1434 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(base1432, t1433);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1435 = std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____str___const__(&oss1420);
    ref_tmp01423 = r1435;
      char* cast1436 = (char*)&(_str);
      _Bool r1437 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&ref_tmp01423, cast1436);
      if (r1437) {
      } else {
        char* cast1438 = (char*)&(_str_1);
        char* c1439 = (char*)_str_2;
        unsigned int c1440 = 23;
        char* cast1441 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast1438, c1439, c1440, cast1441);
      }
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp01423);
    }
    int c1442 = 0;
    __retval1419 = c1442;
    int t1443 = __retval1419;
    int ret_val1444 = t1443;
    {
      std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(&oss1420);
    }
    return ret_val1444;
  int t1445 = __retval1419;
  return t1445;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1446) {
bb1447: ;
  char* __r1448;
  char* __retval1449;
  __r1448 = v1446;
  char* t1450 = __r1448;
  __retval1449 = t1450;
  char* t1451 = __retval1449;
  return t1451;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1452) {
bb1453: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1454;
  char* __retval1455;
  this1454 = v1452;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1456 = this1454;
  char* cast1457 = (char*)&(t1456->field2._M_local_buf);
  char* r1458 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1457);
  __retval1455 = r1458;
  char* t1459 = __retval1455;
  return t1459;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1460) {
bb1461: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1462;
  _Bool __retval1463;
  this1462 = v1460;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1464 = this1462;
    char* r1465 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1464);
    char* r1466 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1464);
    _Bool c1467 = ((r1465 == r1466)) ? 1 : 0;
    if (c1467) {
        unsigned long t1468 = t1464->_M_string_length;
        unsigned long c1469 = 15;
        _Bool c1470 = ((t1468 > c1469)) ? 1 : 0;
        if (c1470) {
          __builtin_unreachable();
        }
      _Bool c1471 = 1;
      __retval1463 = c1471;
      _Bool t1472 = __retval1463;
      return t1472;
    }
  _Bool c1473 = 0;
  __retval1463 = c1473;
  _Bool t1474 = __retval1463;
  return t1474;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1475, char* v1476, unsigned long v1477) {
bb1478: ;
  struct std____new_allocator_char_* this1479;
  char* __p1480;
  unsigned long __n1481;
  this1479 = v1475;
  __p1480 = v1476;
  __n1481 = v1477;
  struct std____new_allocator_char_* t1482 = this1479;
    unsigned long c1483 = 1;
    unsigned long c1484 = 16;
    _Bool c1485 = ((c1483 > c1484)) ? 1 : 0;
    if (c1485) {
      char* t1486 = __p1480;
      void* cast1487 = (void*)t1486;
      unsigned long t1488 = __n1481;
      unsigned long c1489 = 1;
      unsigned long b1490 = t1488 * c1489;
      unsigned long c1491 = 1;
      operator_delete_3(cast1487, b1490, c1491);
      return;
    }
  char* t1492 = __p1480;
  void* cast1493 = (void*)t1492;
  unsigned long t1494 = __n1481;
  unsigned long c1495 = 1;
  unsigned long b1496 = t1494 * c1495;
  operator_delete_2(cast1493, b1496);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1497, char* v1498, unsigned long v1499) {
bb1500: ;
  struct std__allocator_char_* this1501;
  char* __p1502;
  unsigned long __n1503;
  this1501 = v1497;
  __p1502 = v1498;
  __n1503 = v1499;
  struct std__allocator_char_* t1504 = this1501;
    _Bool r1505 = std____is_constant_evaluated();
    if (r1505) {
      char* t1506 = __p1502;
      void* cast1507 = (void*)t1506;
      operator_delete(cast1507);
      return;
    }
  struct std____new_allocator_char_* base1508 = (struct std____new_allocator_char_*)((char *)t1504 + 0);
  char* t1509 = __p1502;
  unsigned long t1510 = __n1503;
  std____new_allocator_char___deallocate(base1508, t1509, t1510);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1511, char* v1512, unsigned long v1513) {
bb1514: ;
  struct std__allocator_char_* __a1515;
  char* __p1516;
  unsigned long __n1517;
  __a1515 = v1511;
  __p1516 = v1512;
  __n1517 = v1513;
  struct std__allocator_char_* t1518 = __a1515;
  char* t1519 = __p1516;
  unsigned long t1520 = __n1517;
  std__allocator_char___deallocate(t1518, t1519, t1520);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1521) {
bb1522: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1523;
  struct std__allocator_char_* __retval1524;
  this1523 = v1521;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1525 = this1523;
  struct std__allocator_char_* base1526 = (struct std__allocator_char_*)((char *)&(t1525->_M_dataplus) + 0);
  __retval1524 = base1526;
  struct std__allocator_char_* t1527 = __retval1524;
  return t1527;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1528, unsigned long v1529) {
bb1530: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1531;
  unsigned long __size1532;
  this1531 = v1528;
  __size1532 = v1529;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1533 = this1531;
  struct std__allocator_char_* r1534 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1533);
  char* r1535 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1533);
  unsigned long t1536 = __size1532;
  unsigned long c1537 = 1;
  unsigned long b1538 = t1536 + c1537;
  std__allocator_traits_std__allocator_char_____deallocate(r1534, r1535, b1538);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1539) {
bb1540: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1541;
  this1541 = v1539;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1542 = this1541;
    _Bool r1543 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1542);
    _Bool u1544 = !r1543;
    if (u1544) {
      unsigned long t1545 = t1542->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1542, t1545);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1546) {
bb1547: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1548;
  this1548 = v1546;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1549 = this1548;
  {
    struct std__allocator_char_* base1550 = (struct std__allocator_char_*)((char *)t1549 + 0);
    std__allocator_char____allocator(base1550);
  }
  return;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEEC2Ev
void std__basic_streambuf_char__std__char_traits_char_____basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v1551) {
bb1552: ;
  struct std__basic_streambuf_char__std__char_traits_char__* this1553;
  this1553 = v1551;
  struct std__basic_streambuf_char__std__char_traits_char__* t1554 = this1553;
  void* v1555 = (void*)&_ZTVSt15basic_streambufIcSt11char_traitsIcEE[2];
  void** v1556 = (void**)t1554;
  *(void**)(v1556) = (void*)v1555;
  char* c1557 = ((void*)0);
  t1554->_M_in_beg = c1557;
  char* c1558 = ((void*)0);
  t1554->_M_in_cur = c1558;
  char* c1559 = ((void*)0);
  t1554->_M_in_end = c1559;
  char* c1560 = ((void*)0);
  t1554->_M_out_beg = c1560;
  char* c1561 = ((void*)0);
  t1554->_M_out_cur = c1561;
  char* c1562 = ((void*)0);
  t1554->_M_out_end = c1562;
  std__locale__locale(&t1554->_M_buf_locale);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1563) {
bb1564: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1565;
  struct std__allocator_char_ ref_tmp01566;
  this1565 = v1563;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1567 = this1565;
  char* r1568 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t1567);
  std__allocator_char___allocator_2(&ref_tmp01566);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t1567->_M_dataplus, r1568, &ref_tmp01566);
  {
    std__allocator_char____allocator(&ref_tmp01566);
  }
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1567);
    unsigned long c1569 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1567, c1569);
  return;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v1570) {
bb1571: ;
  struct std__basic_streambuf_char__std__char_traits_char__* this1572;
  this1572 = v1570;
  struct std__basic_streambuf_char__std__char_traits_char__* t1573 = this1572;
  {
    std__locale___locale(&t1573->_M_buf_locale);
  }
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1574) {
bb1575: ;
  char* __r1576;
  char* __retval1577;
  __r1576 = v1574;
  char* t1578 = __r1576;
  __retval1577 = t1578;
  char* t1579 = __retval1577;
  return t1579;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1580) {
bb1581: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1582;
  char* __retval1583;
  this1582 = v1580;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1584 = this1582;
  char* cast1585 = (char*)&(t1584->field2._M_local_buf);
  char* r1586 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1585);
  __retval1583 = r1586;
  char* t1587 = __retval1583;
  return t1587;
}

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v1588) {
bb1589: ;
  struct std__allocator_char_* this1590;
  this1590 = v1588;
  struct std__allocator_char_* t1591 = this1590;
  struct std____new_allocator_char_* base1592 = (struct std____new_allocator_char_*)((char *)t1591 + 0);
  std____new_allocator_char_____new_allocator_2(base1592);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1593, char* v1594, struct std__allocator_char_* v1595) {
bb1596: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1597;
  char* __dat1598;
  struct std__allocator_char_* __a1599;
  this1597 = v1593;
  __dat1598 = v1594;
  __a1599 = v1595;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1600 = this1597;
  struct std__allocator_char_* base1601 = (struct std__allocator_char_*)((char *)t1600 + 0);
  struct std__allocator_char_* t1602 = __a1599;
  std__allocator_char___allocator(base1601, t1602);
    char* t1603 = __dat1598;
    t1600->_M_p = t1603;
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v1604) {
bb1605: ;
  struct std__allocator_char_* this1606;
  this1606 = v1604;
  struct std__allocator_char_* t1607 = this1606;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1608: ;
  _Bool __retval1609;
    _Bool c1610 = 0;
    __retval1609 = c1610;
    _Bool t1611 = __retval1609;
    return t1611;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1612) {
bb1613: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1614;
  this1614 = v1612;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1615 = this1614;
    _Bool r1616 = std__is_constant_evaluated();
    if (r1616) {
        unsigned long __i1617;
        unsigned long c1618 = 0;
        __i1617 = c1618;
        while (1) {
          unsigned long t1620 = __i1617;
          unsigned long c1621 = 15;
          _Bool c1622 = ((t1620 <= c1621)) ? 1 : 0;
          if (!c1622) break;
          char c1623 = 0;
          unsigned long t1624 = __i1617;
          t1615->field2._M_local_buf[t1624] = c1623;
        for_step1619: ;
          unsigned long t1625 = __i1617;
          unsigned long u1626 = t1625 + 1;
          __i1617 = u1626;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1627, unsigned long v1628) {
bb1629: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1630;
  unsigned long __length1631;
  this1630 = v1627;
  __length1631 = v1628;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1632 = this1630;
  unsigned long t1633 = __length1631;
  t1632->_M_string_length = t1633;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1634, char* v1635) {
bb1636: ;
  char* __location1637;
  char* __args1638;
  char* __retval1639;
  void* __loc1640;
  __location1637 = v1634;
  __args1638 = v1635;
  char* t1641 = __location1637;
  void* cast1642 = (void*)t1641;
  __loc1640 = cast1642;
    void* t1643 = __loc1640;
    char* cast1644 = (char*)t1643;
    char* t1645 = __args1638;
    char t1646 = *t1645;
    *cast1644 = t1646;
    __retval1639 = cast1644;
    char* t1647 = __retval1639;
    return t1647;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1648, char* v1649) {
bb1650: ;
  char* __c11651;
  char* __c21652;
  __c11651 = v1648;
  __c21652 = v1649;
    _Bool r1653 = std____is_constant_evaluated();
    if (r1653) {
      char* t1654 = __c11651;
      char* t1655 = __c21652;
      char* r1656 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1654, t1655);
    } else {
      char* t1657 = __c21652;
      char t1658 = *t1657;
      char* t1659 = __c11651;
      *t1659 = t1658;
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1660, unsigned long v1661) {
bb1662: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1663;
  unsigned long __n1664;
  char ref_tmp01665;
  this1663 = v1660;
  __n1664 = v1661;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1666 = this1663;
  unsigned long t1667 = __n1664;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1666, t1667);
  unsigned long t1668 = __n1664;
  char* r1669 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1666);
  char* ptr1670 = &(r1669)[t1668];
  char c1671 = 0;
  ref_tmp01665 = c1671;
  std__char_traits_char___assign(ptr1670, &ref_tmp01665);
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1672) {
bb1673: ;
  struct std____new_allocator_char_* this1674;
  this1674 = v1672;
  struct std____new_allocator_char_* t1675 = this1674;
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1676, struct std____new_allocator_char_* v1677) {
bb1678: ;
  struct std____new_allocator_char_* this1679;
  struct std____new_allocator_char_* unnamed1680;
  this1679 = v1676;
  unnamed1680 = v1677;
  struct std____new_allocator_char_* t1681 = this1679;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1682, char* v1683, struct std__allocator_char_* v1684) {
bb1685: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1686;
  char* __dat1687;
  struct std__allocator_char_* __a1688;
  this1686 = v1682;
  __dat1687 = v1683;
  __a1688 = v1684;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1689 = this1686;
  struct std__allocator_char_* base1690 = (struct std__allocator_char_*)((char *)t1689 + 0);
  struct std__allocator_char_* t1691 = __a1688;
  std__allocator_char___allocator(base1690, t1691);
    char* t1692 = __dat1687;
    t1689->_M_p = t1692;
  return;
}

