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
char _str[14] = "Sample string";
char _str_1[30] = "oss1.str() == \"Sample string\"";
char _str_2[113] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stream/sstream_str_string/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[25] = "basic_string::_M_replace";
char _str_4[24] = "basic_string::_M_create";
extern void *_ZTVNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void *_ZTVNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt15basic_streambufIcSt11char_traitsIcEE[];
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
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* p0);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std____throw_length_error(char* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
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
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* __gnu_cxx__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* p0, char* p1, unsigned long p2);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_char___deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
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
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std__allocator_char_* p1);
char* std__basic_streambuf_char__std__char_traits_char_____pptr___const(struct std__basic_streambuf_char__std__char_traits_char__* p0);
char* std__basic_streambuf_char__std__char_traits_char_____egptr___const(struct std__basic_streambuf_char__std__char_traits_char__* p0);
char* std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______M_high_mark___const(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* p0);
char* char__std____niter_base_char__(char* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_char___void_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, char* p2);
char* std__basic_streambuf_char__std__char_traits_char_____pbase___const(struct std__basic_streambuf_char__std__char_traits_char__* p0);
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_copy_assign();
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_always_equal();
_Bool std__operator__(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void void_std____alloc_on_copy_std__allocator_char___(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char_____str___const__(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____str___const__(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream_2(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* p0, void** p1);
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* p0);
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
void std__char_traits_char___assign(char* p0, char* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0);
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
extern void std__locale__locale(struct std__locale* p0);
void std__locale___locale(struct std__locale* p0) {}
void std__basic_streambuf_char__std__char_traits_char_____basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* p0);
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* p0);
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

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v221) {
bb222:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this223;
  struct std__allocator_char_ ref_tmp0224;
  this223 = v221;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t225 = this223;
  char* r226 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t225);
  std__allocator_char___allocator_2(&ref_tmp0224);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t225->_M_dataplus, r226, &ref_tmp0224);
  {
    std__allocator_char____allocator(&ref_tmp0224);
  }
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t225);
    unsigned long c227 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t225, c227);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v228) {
bb229:
  struct std__allocator_char_* __a230;
  unsigned long __retval231;
  __a230 = v228;
  unsigned long c232 = -1;
  unsigned long c233 = 1;
  unsigned long b234 = c232 / c233;
  __retval231 = b234;
  unsigned long t235 = __retval231;
  return t235;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v236) {
bb237:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this238;
  struct std__allocator_char_* __retval239;
  this238 = v236;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t240 = this238;
  struct std__allocator_char_* base241 = (struct std__allocator_char_*)((char *)&(t240->_M_dataplus) + 0);
  __retval239 = base241;
  struct std__allocator_char_* t242 = __retval239;
  return t242;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v243, unsigned long* v244) {
bb245:
  unsigned long* __a246;
  unsigned long* __b247;
  unsigned long* __retval248;
  __a246 = v243;
  __b247 = v244;
    unsigned long* t249 = __b247;
    unsigned long t250 = *t249;
    unsigned long* t251 = __a246;
    unsigned long t252 = *t251;
    _Bool c253 = ((t250 < t252)) ? 1 : 0;
    if (c253) {
      unsigned long* t254 = __b247;
      __retval248 = t254;
      unsigned long* t255 = __retval248;
      return t255;
    }
  unsigned long* t256 = __a246;
  __retval248 = t256;
  unsigned long* t257 = __retval248;
  return t257;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v258) {
bb259:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this260;
  unsigned long __retval261;
  unsigned long __diffmax262;
  unsigned long __allocmax263;
  this260 = v258;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t264 = this260;
  unsigned long c265 = 9223372036854775807;
  __diffmax262 = c265;
  struct std__allocator_char_* r266 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t264);
  unsigned long r267 = std__allocator_traits_std__allocator_char_____max_size(r266);
  __allocmax263 = r267;
  unsigned long* r268 = unsigned_long_const__std__min_unsigned_long_(&__diffmax262, &__allocmax263);
  unsigned long t269 = *r268;
  unsigned long c270 = 1;
  unsigned long b271 = t269 - c270;
  __retval261 = b271;
  unsigned long t272 = __retval261;
  return t272;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v273, unsigned long v274, unsigned long v275, char* v276) {
bb277:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this278;
  unsigned long __n1279;
  unsigned long __n2280;
  char* __s281;
  this278 = v273;
  __n1279 = v274;
  __n2280 = v275;
  __s281 = v276;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t282 = this278;
    unsigned long r283 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t282);
    unsigned long r284 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t282);
    unsigned long t285 = __n1279;
    unsigned long b286 = r284 - t285;
    unsigned long b287 = r283 - b286;
    unsigned long t288 = __n2280;
    _Bool c289 = ((b287 < t288)) ? 1 : 0;
    if (c289) {
      char* t290 = __s281;
      std____throw_length_error(t290);
    }
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v291) {
bb292:
  char* __r293;
  char* __retval294;
  __r293 = v291;
  char* t295 = __r293;
  __retval294 = t295;
  char* t296 = __retval294;
  return t296;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v297) {
bb298:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this299;
  char* __retval300;
  this299 = v297;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t301 = this299;
  char* cast302 = (char*)&(t301->field2._M_local_buf);
  char* r303 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast302);
  __retval300 = r303;
  char* t304 = __retval300;
  return t304;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v305) {
bb306:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this307;
  _Bool __retval308;
  this307 = v305;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t309 = this307;
    char* r310 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t309);
    char* r311 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t309);
    _Bool c312 = ((r310 == r311)) ? 1 : 0;
    if (c312) {
        unsigned long t313 = t309->_M_string_length;
        unsigned long c314 = 15;
        _Bool c315 = ((t313 > c314)) ? 1 : 0;
        if (c315) {
          __builtin_unreachable();
        }
      _Bool c316 = 1;
      __retval308 = c316;
      _Bool t317 = __retval308;
      return t317;
    }
  _Bool c318 = 0;
  __retval308 = c318;
  _Bool t319 = __retval308;
  return t319;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v320) {
bb321:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this322;
  unsigned long __retval323;
  unsigned long __sz324;
  this322 = v320;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t325 = this322;
  _Bool r326 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t325);
  unsigned long ternary327;
  if (r326) {
    unsigned long c328 = 15;
    ternary327 = (unsigned long)c328;
  } else {
    unsigned long t329 = t325->field2._M_allocated_capacity;
    ternary327 = (unsigned long)t329;
  }
  __sz324 = ternary327;
    unsigned long t330 = __sz324;
    unsigned long c331 = 15;
    _Bool c332 = ((t330 < c331)) ? 1 : 0;
    _Bool ternary333;
    if (c332) {
      _Bool c334 = 1;
      ternary333 = (_Bool)c334;
    } else {
      unsigned long t335 = __sz324;
      unsigned long r336 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t325);
      _Bool c337 = ((t335 > r336)) ? 1 : 0;
      ternary333 = (_Bool)c337;
    }
    if (ternary333) {
      __builtin_unreachable();
    }
  unsigned long t338 = __sz324;
  __retval323 = t338;
  unsigned long t339 = __retval323;
  return t339;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v340) {
bb341:
  struct std____new_allocator_char_* this342;
  unsigned long __retval343;
  this342 = v340;
  struct std____new_allocator_char_* t344 = this342;
  unsigned long c345 = 9223372036854775807;
  unsigned long c346 = 1;
  unsigned long b347 = c345 / c346;
  __retval343 = b347;
  unsigned long t348 = __retval343;
  return t348;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v349, unsigned long v350, void* v351) {
bb352:
  struct std____new_allocator_char_* this353;
  unsigned long __n354;
  void* unnamed355;
  char* __retval356;
  this353 = v349;
  __n354 = v350;
  unnamed355 = v351;
  struct std____new_allocator_char_* t357 = this353;
    unsigned long t358 = __n354;
    unsigned long r359 = std____new_allocator_char____M_max_size___const(t357);
    _Bool c360 = ((t358 > r359)) ? 1 : 0;
    if (c360) {
        unsigned long t361 = __n354;
        unsigned long c362 = -1;
        unsigned long c363 = 1;
        unsigned long b364 = c362 / c363;
        _Bool c365 = ((t361 > b364)) ? 1 : 0;
        if (c365) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c366 = 1;
    unsigned long c367 = 16;
    _Bool c368 = ((c366 > c367)) ? 1 : 0;
    if (c368) {
      unsigned long __al369;
      unsigned long c370 = 1;
      __al369 = c370;
      unsigned long t371 = __n354;
      unsigned long c372 = 1;
      unsigned long b373 = t371 * c372;
      unsigned long t374 = __al369;
      void* r375 = operator_new_2(b373, t374);
      char* cast376 = (char*)r375;
      __retval356 = cast376;
      char* t377 = __retval356;
      return t377;
    }
  unsigned long t378 = __n354;
  unsigned long c379 = 1;
  unsigned long b380 = t378 * c379;
  void* r381 = operator_new(b380);
  char* cast382 = (char*)r381;
  __retval356 = cast382;
  char* t383 = __retval356;
  return t383;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v384, unsigned long v385) {
bb386:
  struct std__allocator_char_* this387;
  unsigned long __n388;
  char* __retval389;
  this387 = v384;
  __n388 = v385;
  struct std__allocator_char_* t390 = this387;
    _Bool r391 = std____is_constant_evaluated();
    if (r391) {
        unsigned long t392 = __n388;
        unsigned long c393 = 1;
        unsigned long ovr394;
        _Bool ovf395 = __builtin_mul_overflow(t392, c393, &ovr394);
        __n388 = ovr394;
        if (ovf395) {
          std____throw_bad_array_new_length();
        }
      unsigned long t396 = __n388;
      void* r397 = operator_new(t396);
      char* cast398 = (char*)r397;
      __retval389 = cast398;
      char* t399 = __retval389;
      return t399;
    }
  struct std____new_allocator_char_* base400 = (struct std____new_allocator_char_*)((char *)t390 + 0);
  unsigned long t401 = __n388;
  void* c402 = ((void*)0);
  char* r403 = std____new_allocator_char___allocate(base400, t401, c402);
  __retval389 = r403;
  char* t404 = __retval389;
  return t404;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v405, unsigned long v406) {
bb407:
  struct std__allocator_char_* __a408;
  unsigned long __n409;
  char* __retval410;
  __a408 = v405;
  __n409 = v406;
  struct std__allocator_char_* t411 = __a408;
  unsigned long t412 = __n409;
  char* r413 = std__allocator_char___allocate(t411, t412);
  __retval410 = r413;
  char* t414 = __retval410;
  return t414;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v415, unsigned long v416) {
bb417:
  struct std__allocator_char_* __a418;
  unsigned long __n419;
  char* __retval420;
  char* __p421;
  __a418 = v415;
  __n419 = v416;
  struct std__allocator_char_* t422 = __a418;
  unsigned long t423 = __n419;
  char* r424 = std__allocator_traits_std__allocator_char_____allocate(t422, t423);
  __p421 = r424;
  char* t425 = __p421;
  __retval420 = t425;
  char* t426 = __retval420;
  return t426;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v427) {
bb428:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this429;
  struct std__allocator_char_* __retval430;
  this429 = v427;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t431 = this429;
  struct std__allocator_char_* base432 = (struct std__allocator_char_*)((char *)&(t431->_M_dataplus) + 0);
  __retval430 = base432;
  struct std__allocator_char_* t433 = __retval430;
  return t433;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v434, char* v435, unsigned long v436) {
bb437:
  char* __s1438;
  char* __s2439;
  unsigned long __n440;
  char* __retval441;
  __s1438 = v434;
  __s2439 = v435;
  __n440 = v436;
    unsigned long t442 = __n440;
    unsigned long c443 = 0;
    _Bool c444 = ((t442 == c443)) ? 1 : 0;
    if (c444) {
      char* t445 = __s1438;
      __retval441 = t445;
      char* t446 = __retval441;
      return t446;
    }
    _Bool r447 = std____is_constant_evaluated();
    if (r447) {
        unsigned long __i448;
        unsigned long c449 = 0;
        __i448 = c449;
        while (1) {
          unsigned long t451 = __i448;
          unsigned long t452 = __n440;
          _Bool c453 = ((t451 < t452)) ? 1 : 0;
          if (!c453) break;
          char* t454 = __s1438;
          unsigned long t455 = __i448;
          char* ptr456 = &(t454)[t455];
          unsigned long t457 = __i448;
          char* t458 = __s2439;
          char* ptr459 = &(t458)[t457];
          char* r460 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr456, ptr459);
        for_step450: ;
          unsigned long t461 = __i448;
          unsigned long u462 = t461 + 1;
          __i448 = u462;
        }
      char* t463 = __s1438;
      __retval441 = t463;
      char* t464 = __retval441;
      return t464;
    }
  char* t465 = __s1438;
  void* cast466 = (void*)t465;
  char* t467 = __s2439;
  void* cast468 = (void*)t467;
  unsigned long t469 = __n440;
  unsigned long c470 = 1;
  unsigned long b471 = t469 * c470;
  void* r472 = memcpy(cast466, cast468, b471);
  char* t473 = __s1438;
  __retval441 = t473;
  char* t474 = __retval441;
  return t474;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v475, char* v476, unsigned long v477) {
bb478:
  char* __s1479;
  char* __s2480;
  unsigned long __n481;
  char* __retval482;
  __s1479 = v475;
  __s2480 = v476;
  __n481 = v477;
    unsigned long t483 = __n481;
    unsigned long c484 = 0;
    _Bool c485 = ((t483 == c484)) ? 1 : 0;
    if (c485) {
      char* t486 = __s1479;
      __retval482 = t486;
      char* t487 = __retval482;
      return t487;
    }
    _Bool r488 = std____is_constant_evaluated();
    if (r488) {
      char* t489 = __s1479;
      char* t490 = __s2480;
      unsigned long t491 = __n481;
      char* r492 = __gnu_cxx__char_traits_char___copy(t489, t490, t491);
      __retval482 = r492;
      char* t493 = __retval482;
      return t493;
    }
  char* t494 = __s1479;
  void* cast495 = (void*)t494;
  char* t496 = __s2480;
  void* cast497 = (void*)t496;
  unsigned long t498 = __n481;
  void* r499 = memcpy(cast495, cast497, t498);
  char* cast500 = (char*)r499;
  __retval482 = cast500;
  char* t501 = __retval482;
  return t501;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v502, char* v503, unsigned long v504) {
bb505:
  char* __d506;
  char* __s507;
  unsigned long __n508;
  __d506 = v502;
  __s507 = v503;
  __n508 = v504;
    unsigned long t509 = __n508;
    unsigned long c510 = 1;
    _Bool c511 = ((t509 == c510)) ? 1 : 0;
    if (c511) {
      char* t512 = __d506;
      char* t513 = __s507;
      std__char_traits_char___assign(t512, t513);
    } else {
      char* t514 = __d506;
      char* t515 = __s507;
      unsigned long t516 = __n508;
      char* r517 = std__char_traits_char___copy(t514, t515, t516);
    }
  return;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v518, char* v519, unsigned long v520) {
bb521:
  struct std____new_allocator_char_* this522;
  char* __p523;
  unsigned long __n524;
  this522 = v518;
  __p523 = v519;
  __n524 = v520;
  struct std____new_allocator_char_* t525 = this522;
    unsigned long c526 = 1;
    unsigned long c527 = 16;
    _Bool c528 = ((c526 > c527)) ? 1 : 0;
    if (c528) {
      char* t529 = __p523;
      void* cast530 = (void*)t529;
      unsigned long t531 = __n524;
      unsigned long c532 = 1;
      unsigned long b533 = t531 * c532;
      unsigned long c534 = 1;
      operator_delete_3(cast530, b533, c534);
      return;
    }
  char* t535 = __p523;
  void* cast536 = (void*)t535;
  unsigned long t537 = __n524;
  unsigned long c538 = 1;
  unsigned long b539 = t537 * c538;
  operator_delete_2(cast536, b539);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v540, char* v541, unsigned long v542) {
bb543:
  struct std__allocator_char_* this544;
  char* __p545;
  unsigned long __n546;
  this544 = v540;
  __p545 = v541;
  __n546 = v542;
  struct std__allocator_char_* t547 = this544;
    _Bool r548 = std____is_constant_evaluated();
    if (r548) {
      char* t549 = __p545;
      void* cast550 = (void*)t549;
      operator_delete(cast550);
      return;
    }
  struct std____new_allocator_char_* base551 = (struct std____new_allocator_char_*)((char *)t547 + 0);
  char* t552 = __p545;
  unsigned long t553 = __n546;
  std____new_allocator_char___deallocate(base551, t552, t553);
  return;
}

// function: _ZNKSt4lessIPKcEclES1_S1_
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* v554, char* v555, char* v556) {
bb557:
  struct std__less_const_char___* this558;
  char* __x559;
  char* __y560;
  _Bool __retval561;
  this558 = v554;
  __x559 = v555;
  __y560 = v556;
  struct std__less_const_char___* t562 = this558;
    _Bool r563 = std____is_constant_evaluated();
    if (r563) {
      char* t564 = __x559;
      char* t565 = __y560;
      _Bool c566 = ((t564 < t565)) ? 1 : 0;
      __retval561 = c566;
      _Bool t567 = __retval561;
      return t567;
    }
  char* t568 = __x559;
  unsigned long cast569 = (unsigned long)t568;
  char* t570 = __y560;
  unsigned long cast571 = (unsigned long)t570;
  _Bool c572 = ((cast569 < cast571)) ? 1 : 0;
  __retval561 = c572;
  _Bool t573 = __retval561;
  return t573;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_disjunctEPKc
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v574, char* v575) {
bb576:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this577;
  char* __s578;
  _Bool __retval579;
  struct std__less_const_char___ ref_tmp0580;
  this577 = v574;
  __s578 = v575;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t581 = this577;
  char* t582 = __s578;
  char* r583 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t581);
  _Bool r584 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp0580, t582, r583);
  _Bool ternary585;
  if (r584) {
    _Bool c586 = 1;
    ternary585 = (_Bool)c586;
  } else {
    struct std__less_const_char___ ref_tmp1587;
    char* r588 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t581);
    unsigned long r589 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t581);
    char* ptr590 = &(r588)[r589];
    char* t591 = __s578;
    _Bool r592 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp1587, ptr590, t591);
    ternary585 = (_Bool)r592;
  }
  __retval579 = ternary585;
  _Bool t593 = __retval579;
  return t593;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign(char* v594, char* v595) {
bb596:
  char* __c1597;
  char* __c2598;
  __c1597 = v594;
  __c2598 = v595;
    _Bool r599 = std____is_constant_evaluated();
    if (r599) {
      char* t600 = __c1597;
      char* t601 = __c2598;
      char* r602 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t600, t601);
    } else {
      char* t603 = __c2598;
      char t604 = *t603;
      char* t605 = __c1597;
      *t605 = t604;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v606, char* v607, unsigned long v608) {
bb609:
  char* __s1610;
  char* __s2611;
  unsigned long __n612;
  char* __retval613;
  __s1610 = v606;
  __s2611 = v607;
  __n612 = v608;
    unsigned long t614 = __n612;
    unsigned long c615 = 0;
    _Bool c616 = ((t614 == c615)) ? 1 : 0;
    if (c616) {
      char* t617 = __s1610;
      __retval613 = t617;
      char* t618 = __retval613;
      return t618;
    }
    _Bool r619 = std____is_constant_evaluated();
    if (r619) {
        char* t620 = __s2611;
        char* t621 = __s1610;
        _Bool c622 = ((t620 < t621)) ? 1 : 0;
        _Bool isconst623 = 0;
        _Bool ternary624;
        if (isconst623) {
          char* t625 = __s1610;
          char* t626 = __s2611;
          _Bool c627 = ((t625 > t626)) ? 1 : 0;
          ternary624 = (_Bool)c627;
        } else {
          _Bool c628 = 0;
          ternary624 = (_Bool)c628;
        }
        _Bool ternary629;
        if (ternary624) {
          char* t630 = __s1610;
          char* t631 = __s2611;
          unsigned long t632 = __n612;
          char* ptr633 = &(t631)[t632];
          _Bool c634 = ((t630 < ptr633)) ? 1 : 0;
          ternary629 = (_Bool)c634;
        } else {
          _Bool c635 = 0;
          ternary629 = (_Bool)c635;
        }
        if (ternary629) {
            do {
                unsigned long t636 = __n612;
                unsigned long u637 = t636 - 1;
                __n612 = u637;
                unsigned long t638 = __n612;
                char* t639 = __s1610;
                char* ptr640 = &(t639)[t638];
                unsigned long t641 = __n612;
                char* t642 = __s2611;
                char* ptr643 = &(t642)[t641];
                __gnu_cxx__char_traits_char___assign(ptr640, ptr643);
              unsigned long t644 = __n612;
              unsigned long c645 = 0;
              _Bool c646 = ((t644 > c645)) ? 1 : 0;
              if (!c646) break;
            } while (1);
        } else {
          char* t647 = __s1610;
          char* t648 = __s2611;
          unsigned long t649 = __n612;
          char* r650 = __gnu_cxx__char_traits_char___copy(t647, t648, t649);
        }
      char* t651 = __s1610;
      __retval613 = t651;
      char* t652 = __retval613;
      return t652;
    }
  char* t653 = __s1610;
  void* cast654 = (void*)t653;
  char* t655 = __s2611;
  void* cast656 = (void*)t655;
  unsigned long t657 = __n612;
  unsigned long c658 = 1;
  unsigned long b659 = t657 * c658;
  void* r660 = memmove(cast654, cast656, b659);
  char* t661 = __s1610;
  __retval613 = t661;
  char* t662 = __retval613;
  return t662;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v663, char* v664, unsigned long v665) {
bb666:
  char* __s1667;
  char* __s2668;
  unsigned long __n669;
  char* __retval670;
  __s1667 = v663;
  __s2668 = v664;
  __n669 = v665;
    unsigned long t671 = __n669;
    unsigned long c672 = 0;
    _Bool c673 = ((t671 == c672)) ? 1 : 0;
    if (c673) {
      char* t674 = __s1667;
      __retval670 = t674;
      char* t675 = __retval670;
      return t675;
    }
    _Bool r676 = std____is_constant_evaluated();
    if (r676) {
      char* t677 = __s1667;
      char* t678 = __s2668;
      unsigned long t679 = __n669;
      char* r680 = __gnu_cxx__char_traits_char___move(t677, t678, t679);
      __retval670 = r680;
      char* t681 = __retval670;
      return t681;
    }
  char* t682 = __s1667;
  void* cast683 = (void*)t682;
  char* t684 = __s2668;
  void* cast685 = (void*)t684;
  unsigned long t686 = __n669;
  void* r687 = memmove(cast683, cast685, t686);
  char* cast688 = (char*)r687;
  __retval670 = cast688;
  char* t689 = __retval670;
  return t689;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v690, char* v691, unsigned long v692) {
bb693:
  char* __d694;
  char* __s695;
  unsigned long __n696;
  __d694 = v690;
  __s695 = v691;
  __n696 = v692;
    unsigned long t697 = __n696;
    unsigned long c698 = 1;
    _Bool c699 = ((t697 == c698)) ? 1 : 0;
    if (c699) {
      char* t700 = __d694;
      char* t701 = __s695;
      std__char_traits_char___assign(t700, t701);
    } else {
      char* t702 = __d694;
      char* t703 = __s695;
      unsigned long t704 = __n696;
      char* r705 = std__char_traits_char___move(t702, t703, t704);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_replace_coldEPcmPKcmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v706, char* v707, unsigned long v708, char* v709, unsigned long v710, unsigned long v711) {
bb712:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this713;
  char* __p714;
  unsigned long __len1715;
  char* __s716;
  unsigned long __len2717;
  unsigned long __how_much718;
  this713 = v706;
  __p714 = v707;
  __len1715 = v708;
  __s716 = v709;
  __len2717 = v710;
  __how_much718 = v711;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t719 = this713;
    unsigned long t720 = __len2717;
    _Bool cast721 = (_Bool)t720;
    _Bool ternary722;
    if (cast721) {
      unsigned long t723 = __len2717;
      unsigned long t724 = __len1715;
      _Bool c725 = ((t723 <= t724)) ? 1 : 0;
      ternary722 = (_Bool)c725;
    } else {
      _Bool c726 = 0;
      ternary722 = (_Bool)c726;
    }
    if (ternary722) {
      char* t727 = __p714;
      char* t728 = __s716;
      unsigned long t729 = __len2717;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t727, t728, t729);
    }
    unsigned long t730 = __how_much718;
    _Bool cast731 = (_Bool)t730;
    _Bool ternary732;
    if (cast731) {
      unsigned long t733 = __len1715;
      unsigned long t734 = __len2717;
      _Bool c735 = ((t733 != t734)) ? 1 : 0;
      ternary732 = (_Bool)c735;
    } else {
      _Bool c736 = 0;
      ternary732 = (_Bool)c736;
    }
    if (ternary732) {
      char* t737 = __p714;
      unsigned long t738 = __len2717;
      char* ptr739 = &(t737)[t738];
      char* t740 = __p714;
      unsigned long t741 = __len1715;
      char* ptr742 = &(t740)[t741];
      unsigned long t743 = __how_much718;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr739, ptr742, t743);
    }
    unsigned long t744 = __len2717;
    unsigned long t745 = __len1715;
    _Bool c746 = ((t744 > t745)) ? 1 : 0;
    if (c746) {
        char* t747 = __s716;
        unsigned long t748 = __len2717;
        char* ptr749 = &(t747)[t748];
        char* t750 = __p714;
        unsigned long t751 = __len1715;
        char* ptr752 = &(t750)[t751];
        _Bool c753 = ((ptr749 <= ptr752)) ? 1 : 0;
        if (c753) {
          char* t754 = __p714;
          char* t755 = __s716;
          unsigned long t756 = __len2717;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t754, t755, t756);
        } else {
            char* t757 = __s716;
            char* t758 = __p714;
            unsigned long t759 = __len1715;
            char* ptr760 = &(t758)[t759];
            _Bool c761 = ((t757 >= ptr760)) ? 1 : 0;
            if (c761) {
              unsigned long __poff762;
              char* t763 = __s716;
              char* t764 = __p714;
              long diff765 = t763 - t764;
              unsigned long cast766 = (unsigned long)diff765;
              unsigned long t767 = __len2717;
              unsigned long t768 = __len1715;
              unsigned long b769 = t767 - t768;
              unsigned long b770 = cast766 + b769;
              __poff762 = b770;
              char* t771 = __p714;
              char* t772 = __p714;
              unsigned long t773 = __poff762;
              char* ptr774 = &(t772)[t773];
              unsigned long t775 = __len2717;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t771, ptr774, t775);
            } else {
              unsigned long __nleft776;
              char* t777 = __p714;
              unsigned long t778 = __len1715;
              char* ptr779 = &(t777)[t778];
              char* t780 = __s716;
              long diff781 = ptr779 - t780;
              unsigned long cast782 = (unsigned long)diff781;
              __nleft776 = cast782;
              char* t783 = __p714;
              char* t784 = __s716;
              unsigned long t785 = __nleft776;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t783, t784, t785);
              char* t786 = __p714;
              unsigned long t787 = __nleft776;
              char* ptr788 = &(t786)[t787];
              char* t789 = __p714;
              unsigned long t790 = __len2717;
              char* ptr791 = &(t789)[t790];
              unsigned long t792 = __len2717;
              unsigned long t793 = __nleft776;
              unsigned long b794 = t792 - t793;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr788, ptr791, b794);
            }
        }
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v795) {
bb796:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this797;
  unsigned long __retval798;
  this797 = v795;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t799 = this797;
  unsigned long r800 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t799);
  __retval798 = r800;
  unsigned long t801 = __retval798;
  return t801;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v802, unsigned long* v803, unsigned long v804) {
bb805:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this806;
  unsigned long* __capacity807;
  unsigned long __old_capacity808;
  char* __retval809;
  this806 = v802;
  __capacity807 = v803;
  __old_capacity808 = v804;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t810 = this806;
    unsigned long* t811 = __capacity807;
    unsigned long t812 = *t811;
    unsigned long r813 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t810);
    _Bool c814 = ((t812 > r813)) ? 1 : 0;
    if (c814) {
      char* cast815 = (char*)&(_str_4);
      std____throw_length_error(cast815);
    }
    unsigned long* t816 = __capacity807;
    unsigned long t817 = *t816;
    unsigned long t818 = __old_capacity808;
    _Bool c819 = ((t817 > t818)) ? 1 : 0;
    _Bool ternary820;
    if (c819) {
      unsigned long* t821 = __capacity807;
      unsigned long t822 = *t821;
      unsigned long c823 = 2;
      unsigned long t824 = __old_capacity808;
      unsigned long b825 = c823 * t824;
      _Bool c826 = ((t822 < b825)) ? 1 : 0;
      ternary820 = (_Bool)c826;
    } else {
      _Bool c827 = 0;
      ternary820 = (_Bool)c827;
    }
    if (ternary820) {
      unsigned long c828 = 2;
      unsigned long t829 = __old_capacity808;
      unsigned long b830 = c828 * t829;
      unsigned long* t831 = __capacity807;
      *t831 = b830;
        unsigned long* t832 = __capacity807;
        unsigned long t833 = *t832;
        unsigned long r834 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t810);
        _Bool c835 = ((t833 > r834)) ? 1 : 0;
        if (c835) {
          unsigned long r836 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t810);
          unsigned long* t837 = __capacity807;
          *t837 = r836;
        }
    }
  struct std__allocator_char_* r838 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t810);
  unsigned long* t839 = __capacity807;
  unsigned long t840 = *t839;
  unsigned long c841 = 1;
  unsigned long b842 = t840 + c841;
  char* r843 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r838, b842);
  __retval809 = r843;
  char* t844 = __retval809;
  return t844;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v845, char* v846, unsigned long v847) {
bb848:
  struct std__allocator_char_* __a849;
  char* __p850;
  unsigned long __n851;
  __a849 = v845;
  __p850 = v846;
  __n851 = v847;
  struct std__allocator_char_* t852 = __a849;
  char* t853 = __p850;
  unsigned long t854 = __n851;
  std__allocator_char___deallocate(t852, t853, t854);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v855, unsigned long v856) {
bb857:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this858;
  unsigned long __size859;
  this858 = v855;
  __size859 = v856;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t860 = this858;
  struct std__allocator_char_* r861 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t860);
  char* r862 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t860);
  unsigned long t863 = __size859;
  unsigned long c864 = 1;
  unsigned long b865 = t863 + c864;
  std__allocator_traits_std__allocator_char_____deallocate(r861, r862, b865);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v866) {
bb867:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this868;
  this868 = v866;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t869 = this868;
    _Bool r870 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t869);
    _Bool u871 = !r870;
    if (u871) {
      unsigned long t872 = t869->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t869, t872);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v873, char* v874) {
bb875:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this876;
  char* __p877;
  this876 = v873;
  __p877 = v874;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t878 = this876;
  char* t879 = __p877;
  t878->_M_dataplus._M_p = t879;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v880, unsigned long v881) {
bb882:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this883;
  unsigned long __capacity884;
  this883 = v880;
  __capacity884 = v881;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t885 = this883;
  unsigned long t886 = __capacity884;
  t885->field2._M_allocated_capacity = t886;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v887, unsigned long v888, unsigned long v889, char* v890, unsigned long v891) {
bb892:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this893;
  unsigned long __pos894;
  unsigned long __len1895;
  char* __s896;
  unsigned long __len2897;
  unsigned long __how_much898;
  unsigned long __new_capacity899;
  char* __r900;
  this893 = v887;
  __pos894 = v888;
  __len1895 = v889;
  __s896 = v890;
  __len2897 = v891;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t901 = this893;
  unsigned long r902 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t901);
  unsigned long t903 = __pos894;
  unsigned long b904 = r902 - t903;
  unsigned long t905 = __len1895;
  unsigned long b906 = b904 - t905;
  __how_much898 = b906;
  unsigned long r907 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t901);
  unsigned long t908 = __len2897;
  unsigned long b909 = r907 + t908;
  unsigned long t910 = __len1895;
  unsigned long b911 = b909 - t910;
  __new_capacity899 = b911;
  unsigned long r912 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t901);
  char* r913 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t901, &__new_capacity899, r912);
  __r900 = r913;
    unsigned long t914 = __pos894;
    _Bool cast915 = (_Bool)t914;
    if (cast915) {
      char* t916 = __r900;
      char* r917 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t901);
      unsigned long t918 = __pos894;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t916, r917, t918);
    }
    char* t919 = __s896;
    _Bool cast920 = (_Bool)t919;
    _Bool ternary921;
    if (cast920) {
      unsigned long t922 = __len2897;
      _Bool cast923 = (_Bool)t922;
      ternary921 = (_Bool)cast923;
    } else {
      _Bool c924 = 0;
      ternary921 = (_Bool)c924;
    }
    if (ternary921) {
      char* t925 = __r900;
      unsigned long t926 = __pos894;
      char* ptr927 = &(t925)[t926];
      char* t928 = __s896;
      unsigned long t929 = __len2897;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr927, t928, t929);
    }
    unsigned long t930 = __how_much898;
    _Bool cast931 = (_Bool)t930;
    if (cast931) {
      char* t932 = __r900;
      unsigned long t933 = __pos894;
      char* ptr934 = &(t932)[t933];
      unsigned long t935 = __len2897;
      char* ptr936 = &(ptr934)[t935];
      char* r937 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t901);
      unsigned long t938 = __pos894;
      char* ptr939 = &(r937)[t938];
      unsigned long t940 = __len1895;
      char* ptr941 = &(ptr939)[t940];
      unsigned long t942 = __how_much898;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr936, ptr941, t942);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t901);
  char* t943 = __r900;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t901, t943);
  unsigned long t944 = __new_capacity899;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t901, t944);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v945, unsigned long v946, unsigned long v947, char* v948, unsigned long v949) {
bb950:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this951;
  unsigned long __pos952;
  unsigned long __len1953;
  char* __s954;
  unsigned long __len2955;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval956;
  unsigned long __old_size957;
  unsigned long __new_size958;
  this951 = v945;
  __pos952 = v946;
  __len1953 = v947;
  __s954 = v948;
  __len2955 = v949;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t959 = this951;
  unsigned long t960 = __len1953;
  unsigned long t961 = __len2955;
  char* cast962 = (char*)&(_str_3);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t959, t960, t961, cast962);
  unsigned long r963 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t959);
  __old_size957 = r963;
  unsigned long t964 = __old_size957;
  unsigned long t965 = __len2955;
  unsigned long b966 = t964 + t965;
  unsigned long t967 = __len1953;
  unsigned long b968 = b966 - t967;
  __new_size958 = b968;
    unsigned long t969 = __new_size958;
    unsigned long r970 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t959);
    _Bool c971 = ((t969 <= r970)) ? 1 : 0;
    if (c971) {
      char* __p972;
      unsigned long __how_much973;
      char* r974 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t959);
      unsigned long t975 = __pos952;
      char* ptr976 = &(r974)[t975];
      __p972 = ptr976;
      unsigned long t977 = __old_size957;
      unsigned long t978 = __pos952;
      unsigned long b979 = t977 - t978;
      unsigned long t980 = __len1953;
      unsigned long b981 = b979 - t980;
      __how_much973 = b981;
        _Bool r982 = std__is_constant_evaluated();
        if (r982) {
          char* __newp983;
          struct std__allocator_char_* r984 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t959);
          unsigned long t985 = __new_size958;
          char* r986 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r984, t985);
          __newp983 = r986;
          char* t987 = __newp983;
          char* r988 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t959);
          unsigned long t989 = __pos952;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t987, r988, t989);
          char* t990 = __newp983;
          unsigned long t991 = __pos952;
          char* ptr992 = &(t990)[t991];
          char* t993 = __s954;
          unsigned long t994 = __len2955;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr992, t993, t994);
          char* t995 = __newp983;
          unsigned long t996 = __pos952;
          char* ptr997 = &(t995)[t996];
          unsigned long t998 = __len2955;
          char* ptr999 = &(ptr997)[t998];
          char* t1000 = __p972;
          unsigned long t1001 = __len1953;
          char* ptr1002 = &(t1000)[t1001];
          unsigned long t1003 = __how_much973;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr999, ptr1002, t1003);
          char* r1004 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t959);
          char* t1005 = __newp983;
          unsigned long t1006 = __new_size958;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1004, t1005, t1006);
          struct std__allocator_char_* r1007 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t959);
          char* t1008 = __newp983;
          unsigned long t1009 = __new_size958;
          std__allocator_char___deallocate(r1007, t1008, t1009);
        } else {
            char* t1010 = __s954;
            _Bool r1011 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(t959, t1010);
            if (r1011) {
                unsigned long t1012 = __how_much973;
                _Bool cast1013 = (_Bool)t1012;
                _Bool ternary1014;
                if (cast1013) {
                  unsigned long t1015 = __len1953;
                  unsigned long t1016 = __len2955;
                  _Bool c1017 = ((t1015 != t1016)) ? 1 : 0;
                  ternary1014 = (_Bool)c1017;
                } else {
                  _Bool c1018 = 0;
                  ternary1014 = (_Bool)c1018;
                }
                if (ternary1014) {
                  char* t1019 = __p972;
                  unsigned long t1020 = __len2955;
                  char* ptr1021 = &(t1019)[t1020];
                  char* t1022 = __p972;
                  unsigned long t1023 = __len1953;
                  char* ptr1024 = &(t1022)[t1023];
                  unsigned long t1025 = __how_much973;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr1021, ptr1024, t1025);
                }
                unsigned long t1026 = __len2955;
                _Bool cast1027 = (_Bool)t1026;
                if (cast1027) {
                  char* t1028 = __p972;
                  char* t1029 = __s954;
                  unsigned long t1030 = __len2955;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1028, t1029, t1030);
                }
            } else {
              char* t1031 = __p972;
              unsigned long t1032 = __len1953;
              char* t1033 = __s954;
              unsigned long t1034 = __len2955;
              unsigned long t1035 = __how_much973;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(t959, t1031, t1032, t1033, t1034, t1035);
            }
        }
    } else {
      unsigned long t1036 = __pos952;
      unsigned long t1037 = __len1953;
      char* t1038 = __s954;
      unsigned long t1039 = __len2955;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t959, t1036, t1037, t1038, t1039);
    }
  unsigned long t1040 = __new_size958;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t959, t1040);
  __retval956 = t959;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1041 = __retval956;
  return t1041;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1042) {
bb1043:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1044;
  unsigned long __retval1045;
  unsigned long __sz1046;
  this1044 = v1042;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1047 = this1044;
  unsigned long t1048 = t1047->_M_string_length;
  __sz1046 = t1048;
    unsigned long t1049 = __sz1046;
    unsigned long r1050 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1047);
    _Bool c1051 = ((t1049 > r1050)) ? 1 : 0;
    if (c1051) {
      __builtin_unreachable();
    }
  unsigned long t1052 = __sz1046;
  __retval1045 = t1052;
  unsigned long t1053 = __retval1045;
  return t1053;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1054, char* v1055) {
bb1056:
  char* __c11057;
  char* __c21058;
  _Bool __retval1059;
  __c11057 = v1054;
  __c21058 = v1055;
  char* t1060 = __c11057;
  char t1061 = *t1060;
  int cast1062 = (int)t1061;
  char* t1063 = __c21058;
  char t1064 = *t1063;
  int cast1065 = (int)t1064;
  _Bool c1066 = ((cast1062 == cast1065)) ? 1 : 0;
  __retval1059 = c1066;
  _Bool t1067 = __retval1059;
  return t1067;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1068) {
bb1069:
  char* __p1070;
  unsigned long __retval1071;
  unsigned long __i1072;
  __p1070 = v1068;
  unsigned long c1073 = 0;
  __i1072 = c1073;
    char ref_tmp01074;
    while (1) {
      unsigned long t1075 = __i1072;
      char* t1076 = __p1070;
      char* ptr1077 = &(t1076)[t1075];
      char c1078 = 0;
      ref_tmp01074 = c1078;
      _Bool r1079 = __gnu_cxx__char_traits_char___eq(ptr1077, &ref_tmp01074);
      _Bool u1080 = !r1079;
      if (!u1080) break;
      unsigned long t1081 = __i1072;
      unsigned long u1082 = t1081 + 1;
      __i1072 = u1082;
    }
  unsigned long t1083 = __i1072;
  __retval1071 = t1083;
  unsigned long t1084 = __retval1071;
  return t1084;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1085) {
bb1086:
  char* __s1087;
  unsigned long __retval1088;
  __s1087 = v1085;
    _Bool r1089 = std____is_constant_evaluated();
    if (r1089) {
      char* t1090 = __s1087;
      unsigned long r1091 = __gnu_cxx__char_traits_char___length(t1090);
      __retval1088 = r1091;
      unsigned long t1092 = __retval1088;
      return t1092;
    }
  char* t1093 = __s1087;
  unsigned long r1094 = strlen(t1093);
  __retval1088 = r1094;
  unsigned long t1095 = __retval1088;
  return t1095;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1096, char* v1097) {
bb1098:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1099;
  char* __s1100;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1101;
  this1099 = v1096;
  __s1100 = v1097;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1102 = this1099;
  unsigned long c1103 = 0;
  unsigned long r1104 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1102);
  char* t1105 = __s1100;
  char* t1106 = __s1100;
  unsigned long r1107 = std__char_traits_char___length(t1106);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1108 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t1102, c1103, r1104, t1105, r1107);
  __retval1101 = r1108;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1109 = __retval1101;
  return t1109;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1110, char* v1111) {
bb1112:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1113;
  char* __s1114;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1115;
  this1113 = v1110;
  __s1114 = v1111;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1116 = this1113;
  char* t1117 = __s1114;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1118 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(t1116, t1117);
  __retval1115 = r1118;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1119 = __retval1115;
  return t1119;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v1120, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1121) {
bb1122:
  struct std__basic_ostream_char__std__char_traits_char__* __os1123;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1124;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1125;
  __os1123 = v1120;
  __str1124 = v1121;
  struct std__basic_ostream_char__std__char_traits_char__* t1126 = __os1123;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1127 = __str1124;
  char* r1128 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t1127);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1129 = __str1124;
  unsigned long r1130 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1129);
  long cast1131 = (long)r1130;
  struct std__basic_ostream_char__std__char_traits_char__* r1132 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1126, r1128, cast1131);
  __retval1125 = r1132;
  struct std__basic_ostream_char__std__char_traits_char__* t1133 = __retval1125;
  return t1133;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v1134, char* v1135) {
bb1136:
  char* __c11137;
  char* __c21138;
  _Bool __retval1139;
  __c11137 = v1134;
  __c21138 = v1135;
  char* t1140 = __c11137;
  char t1141 = *t1140;
  unsigned char cast1142 = (unsigned char)t1141;
  int cast1143 = (int)cast1142;
  char* t1144 = __c21138;
  char t1145 = *t1144;
  unsigned char cast1146 = (unsigned char)t1145;
  int cast1147 = (int)cast1146;
  _Bool c1148 = ((cast1143 < cast1147)) ? 1 : 0;
  __retval1139 = c1148;
  _Bool t1149 = __retval1139;
  return t1149;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v1150, char* v1151, unsigned long v1152) {
bb1153:
  char* __s11154;
  char* __s21155;
  unsigned long __n1156;
  int __retval1157;
  __s11154 = v1150;
  __s21155 = v1151;
  __n1156 = v1152;
    unsigned long t1158 = __n1156;
    unsigned long c1159 = 0;
    _Bool c1160 = ((t1158 == c1159)) ? 1 : 0;
    if (c1160) {
      int c1161 = 0;
      __retval1157 = c1161;
      int t1162 = __retval1157;
      return t1162;
    }
    _Bool r1163 = std____is_constant_evaluated();
    if (r1163) {
        unsigned long __i1164;
        unsigned long c1165 = 0;
        __i1164 = c1165;
        while (1) {
          unsigned long t1167 = __i1164;
          unsigned long t1168 = __n1156;
          _Bool c1169 = ((t1167 < t1168)) ? 1 : 0;
          if (!c1169) break;
            unsigned long t1170 = __i1164;
            char* t1171 = __s11154;
            char* ptr1172 = &(t1171)[t1170];
            unsigned long t1173 = __i1164;
            char* t1174 = __s21155;
            char* ptr1175 = &(t1174)[t1173];
            _Bool r1176 = std__char_traits_char___lt(ptr1172, ptr1175);
            if (r1176) {
              int c1177 = -1;
              __retval1157 = c1177;
              int t1178 = __retval1157;
              int ret_val1179 = t1178;
              return ret_val1179;
            } else {
                unsigned long t1180 = __i1164;
                char* t1181 = __s21155;
                char* ptr1182 = &(t1181)[t1180];
                unsigned long t1183 = __i1164;
                char* t1184 = __s11154;
                char* ptr1185 = &(t1184)[t1183];
                _Bool r1186 = std__char_traits_char___lt(ptr1182, ptr1185);
                if (r1186) {
                  int c1187 = 1;
                  __retval1157 = c1187;
                  int t1188 = __retval1157;
                  int ret_val1189 = t1188;
                  return ret_val1189;
                }
            }
        for_step1166: ;
          unsigned long t1190 = __i1164;
          unsigned long u1191 = t1190 + 1;
          __i1164 = u1191;
        }
      int c1192 = 0;
      __retval1157 = c1192;
      int t1193 = __retval1157;
      return t1193;
    }
  char* t1194 = __s11154;
  void* cast1195 = (void*)t1194;
  char* t1196 = __s21155;
  void* cast1197 = (void*)t1196;
  unsigned long t1198 = __n1156;
  int r1199 = memcmp(cast1195, cast1197, t1198);
  __retval1157 = r1199;
  int t1200 = __retval1157;
  return t1200;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1201) {
bb1202:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1203;
  char* __retval1204;
  this1203 = v1201;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1205 = this1203;
  char* r1206 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1205);
  __retval1204 = r1206;
  char* t1207 = __retval1204;
  return t1207;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1208, char* v1209) {
bb1210:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs1211;
  char* __rhs1212;
  _Bool __retval1213;
  __lhs1211 = v1208;
  __rhs1212 = v1209;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1214 = __lhs1211;
  unsigned long r1215 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1214);
  char* t1216 = __rhs1212;
  unsigned long r1217 = std__char_traits_char___length(t1216);
  _Bool c1218 = ((r1215 == r1217)) ? 1 : 0;
  _Bool ternary1219;
  if (c1218) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1220 = __lhs1211;
    char* r1221 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t1220);
    char* t1222 = __rhs1212;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1223 = __lhs1211;
    unsigned long r1224 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1223);
    int r1225 = std__char_traits_char___compare(r1221, t1222, r1224);
    _Bool cast1226 = (_Bool)r1225;
    _Bool u1227 = !cast1226;
    ternary1219 = (_Bool)u1227;
  } else {
    _Bool c1228 = 0;
    ternary1219 = (_Bool)c1228;
  }
  __retval1213 = ternary1219;
  _Bool t1229 = __retval1213;
  return t1229;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1230, struct std__allocator_char_* v1231) {
bb1232:
  struct std__allocator_char_* this1233;
  struct std__allocator_char_* __a1234;
  this1233 = v1230;
  __a1234 = v1231;
  struct std__allocator_char_* t1235 = this1233;
  struct std____new_allocator_char_* base1236 = (struct std____new_allocator_char_*)((char *)t1235 + 0);
  struct std__allocator_char_* t1237 = __a1234;
  struct std____new_allocator_char_* base1238 = (struct std____new_allocator_char_*)((char *)t1237 + 0);
  std____new_allocator_char_____new_allocator(base1236, base1238);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13get_allocatorEv
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1239) {
bb1240:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1241;
  struct std__allocator_char_ __retval1242;
  this1241 = v1239;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1243 = this1241;
  struct std__allocator_char_* r1244 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1243);
  std__allocator_char___allocator(&__retval1242, r1244);
  struct std__allocator_char_ t1245 = __retval1242;
  return t1245;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1246, struct std__allocator_char_* v1247) {
bb1248:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1249;
  struct std__allocator_char_* __a1250;
  this1249 = v1246;
  __a1250 = v1247;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1251 = this1249;
  char* r1252 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t1251);
  struct std__allocator_char_* t1253 = __a1250;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t1251->_M_dataplus, r1252, t1253);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1251);
    unsigned long c1254 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1251, c1254);
  return;
}

// function: _ZNKSt15basic_streambufIcSt11char_traitsIcEE4pptrEv
char* std__basic_streambuf_char__std__char_traits_char_____pptr___const(struct std__basic_streambuf_char__std__char_traits_char__* v1255) {
bb1256:
  struct std__basic_streambuf_char__std__char_traits_char__* this1257;
  char* __retval1258;
  this1257 = v1255;
  struct std__basic_streambuf_char__std__char_traits_char__* t1259 = this1257;
  char* t1260 = t1259->_M_out_cur;
  __retval1258 = t1260;
  char* t1261 = __retval1258;
  return t1261;
}

// function: _ZNKSt15basic_streambufIcSt11char_traitsIcEE5egptrEv
char* std__basic_streambuf_char__std__char_traits_char_____egptr___const(struct std__basic_streambuf_char__std__char_traits_char__* v1262) {
bb1263:
  struct std__basic_streambuf_char__std__char_traits_char__* this1264;
  char* __retval1265;
  this1264 = v1262;
  struct std__basic_streambuf_char__std__char_traits_char__* t1266 = this1264;
  char* t1267 = t1266->_M_in_end;
  __retval1265 = t1267;
  char* t1268 = __retval1265;
  return t1268;
}

// function: _ZNKSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEE12_M_high_markEv
char* std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______M_high_mark___const(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* v1269) {
bb1270:
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* this1271;
  char* __retval1272;
  this1271 = v1269;
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* t1273 = this1271;
    char* __pptr1274;
    struct std__basic_streambuf_char__std__char_traits_char__* base1275 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t1273 + 0);
    char* r1276 = std__basic_streambuf_char__std__char_traits_char_____pptr___const(base1275);
    __pptr1274 = r1276;
    char* t1277 = __pptr1274;
    _Bool cast1278 = (_Bool)t1277;
    if (cast1278) {
      char* __egptr1279;
      struct std__basic_streambuf_char__std__char_traits_char__* base1280 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t1273 + 0);
      char* r1281 = std__basic_streambuf_char__std__char_traits_char_____egptr___const(base1280);
      __egptr1279 = r1281;
        char* t1282 = __egptr1279;
        _Bool cast1283 = (_Bool)t1282;
        _Bool u1284 = !cast1283;
        _Bool ternary1285;
        if (u1284) {
          _Bool c1286 = 1;
          ternary1285 = (_Bool)c1286;
        } else {
          char* t1287 = __pptr1274;
          char* t1288 = __egptr1279;
          _Bool c1289 = ((t1287 > t1288)) ? 1 : 0;
          ternary1285 = (_Bool)c1289;
        }
        if (ternary1285) {
          char* t1290 = __pptr1274;
          __retval1272 = t1290;
          char* t1291 = __retval1272;
          return t1291;
        } else {
          char* t1292 = __egptr1279;
          __retval1272 = t1292;
          char* t1293 = __retval1272;
          return t1293;
        }
    }
  char* c1294 = ((void*)0);
  __retval1272 = c1294;
  char* t1295 = __retval1272;
  return t1295;
}

// function: _ZSt12__niter_baseIPcET_S1_
char* char__std____niter_base_char__(char* v1296) {
bb1297:
  char* __it1298;
  char* __retval1299;
  __it1298 = v1296;
  char* t1300 = __it1298;
  __retval1299 = t1300;
  char* t1301 = __retval1299;
  return t1301;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignIPcvEERS4_T_S8_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_char___void_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1302, char* v1303, char* v1304) {
bb1305:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1306;
  char* __first1307;
  char* __last1308;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1309;
  this1306 = v1302;
  __first1307 = v1303;
  __last1308 = v1304;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1310 = this1306;
    unsigned long c1311 = 0;
    unsigned long r1312 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1310);
    char* t1313 = __first1307;
    char* r1314 = char__std____niter_base_char__(t1313);
    char* t1315 = __last1308;
    char* t1316 = __first1307;
    long diff1317 = t1315 - t1316;
    unsigned long cast1318 = (unsigned long)diff1317;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1319 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t1310, c1311, r1312, r1314, cast1318);
    __retval1309 = r1319;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1320 = __retval1309;
    return t1320;
  abort();
}

// function: _ZNKSt15basic_streambufIcSt11char_traitsIcEE5pbaseEv
char* std__basic_streambuf_char__std__char_traits_char_____pbase___const(struct std__basic_streambuf_char__std__char_traits_char__* v1321) {
bb1322:
  struct std__basic_streambuf_char__std__char_traits_char__* this1323;
  char* __retval1324;
  this1323 = v1321;
  struct std__basic_streambuf_char__std__char_traits_char__* t1325 = this1323;
  char* t1326 = t1325->_M_out_beg;
  __retval1324 = t1326;
  char* t1327 = __retval1324;
  return t1327;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_copy_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_copy_assign() {
bb1328:
  _Bool __retval1329;
  _Bool t1330 = _ZNSt17integral_constantIbLb0EE5valueE;
  __retval1329 = t1330;
  _Bool t1331 = __retval1329;
  return t1331;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE15_S_always_equalEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_always_equal() {
bb1332:
  _Bool __retval1333;
  _Bool t1334 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval1333 = t1334;
  _Bool t1335 = __retval1333;
  return t1335;
}

// function: _ZSteqRKSaIcES1_
_Bool std__operator__(struct std__allocator_char_* v1336, struct std__allocator_char_* v1337) {
bb1338:
  struct std__allocator_char_* unnamed1339;
  struct std__allocator_char_* unnamed1340;
  _Bool __retval1341;
  unnamed1339 = v1336;
  unnamed1340 = v1337;
  _Bool c1342 = 1;
  __retval1341 = c1342;
  _Bool t1343 = __retval1341;
  return t1343;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1344) {
bb1345:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1346;
  char* __retval1347;
  this1346 = v1344;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1348 = this1346;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1348);
  char* r1349 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t1348);
  __retval1347 = r1349;
  char* t1350 = __retval1347;
  return t1350;
}

// function: _ZSt15__alloc_on_copyISaIcEEvRT_RKS1_
void void_std____alloc_on_copy_std__allocator_char___(struct std__allocator_char_* v1351, struct std__allocator_char_* v1352) {
bb1353:
  struct std__allocator_char_* __one1354;
  struct std__allocator_char_* __two1355;
  __one1354 = v1351;
  __two1355 = v1352;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1356, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1357) {
bb1358:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1359;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1360;
  this1359 = v1356;
  __str1360 = v1357;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1361 = this1359;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1362 = __str1360;
    _Bool c1363 = ((t1361 != t1362)) ? 1 : 0;
    if (c1363) {
      unsigned long __rsize1364;
      unsigned long __capacity1365;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1366 = __str1360;
      unsigned long r1367 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t1366);
      __rsize1364 = r1367;
      unsigned long r1368 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t1361);
      __capacity1365 = r1368;
        unsigned long t1369 = __rsize1364;
        unsigned long t1370 = __capacity1365;
        _Bool c1371 = ((t1369 > t1370)) ? 1 : 0;
        if (c1371) {
          unsigned long __new_capacity1372;
          char* __tmp1373;
          unsigned long t1374 = __rsize1364;
          __new_capacity1372 = t1374;
          unsigned long t1375 = __capacity1365;
          char* r1376 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1361, &__new_capacity1372, t1375);
          __tmp1373 = r1376;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1361);
          char* t1377 = __tmp1373;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1361, t1377);
          unsigned long t1378 = __new_capacity1372;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1361, t1378);
        }
        unsigned long t1379 = __rsize1364;
        _Bool cast1380 = (_Bool)t1379;
        if (cast1380) {
          char* r1381 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1361);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1382 = __str1360;
          char* r1383 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1382);
          unsigned long t1384 = __rsize1364;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1381, r1383, t1384);
        }
      unsigned long t1385 = __rsize1364;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1361, t1385);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignERKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1386, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1387) {
bb1388:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1389;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1390;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1391;
  this1389 = v1386;
  __str1390 = v1387;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1392 = this1389;
    _Bool r1393 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_copy_assign();
    if (r1393) {
        _Bool r1394 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_always_equal();
        _Bool u1395 = !r1394;
        _Bool ternary1396;
        if (u1395) {
          _Bool r1397 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1392);
          _Bool u1398 = !r1397;
          ternary1396 = (_Bool)u1398;
        } else {
          _Bool c1399 = 0;
          ternary1396 = (_Bool)c1399;
        }
        _Bool ternary1400;
        if (ternary1396) {
          struct std__allocator_char_* r1401 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1392);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1402 = __str1390;
          struct std__allocator_char_* r1403 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1402);
          _Bool r1404 = std__operator__(r1401, r1403);
          _Bool u1405 = !r1404;
          ternary1400 = (_Bool)u1405;
        } else {
          _Bool c1406 = 0;
          ternary1400 = (_Bool)c1406;
        }
        if (ternary1400) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1407 = __str1390;
            unsigned long r1408 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1407);
            unsigned long c1409 = 15;
            _Bool c1410 = ((r1408 <= c1409)) ? 1 : 0;
            if (c1410) {
              unsigned long t1411 = t1392->field2._M_allocated_capacity;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1392, t1411);
              char* r1412 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t1392);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1392, r1412);
              unsigned long c1413 = 0;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1392, c1413);
            } else {
              unsigned long __len1414;
              struct std__allocator_char_ __alloc1415;
              char* __ptr1416;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1417 = __str1390;
              unsigned long r1418 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1417);
              __len1414 = r1418;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1419 = __str1390;
              struct std__allocator_char_* r1420 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1419);
              std__allocator_char___allocator(&__alloc1415, r1420);
              unsigned long t1421 = __len1414;
              unsigned long c1422 = 1;
              unsigned long b1423 = t1421 + c1422;
              char* r1424 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(&__alloc1415, b1423);
              __ptr1416 = r1424;
              unsigned long t1425 = t1392->field2._M_allocated_capacity;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1392, t1425);
              char* t1426 = __ptr1416;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1392, t1426);
              unsigned long t1427 = __len1414;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1392, t1427);
              unsigned long t1428 = __len1414;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1392, t1428);
            }
        }
      struct std__allocator_char_* r1429 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1392);
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1430 = __str1390;
      struct std__allocator_char_* r1431 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1430);
      void_std____alloc_on_copy_std__allocator_char___(r1429, r1431);
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1432 = __str1390;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t1392, t1432);
  __retval1391 = t1392;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1433 = __retval1391;
  return t1433;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSERKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1434, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1435) {
bb1436:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1437;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1438;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1439;
  this1437 = v1434;
  __str1438 = v1435;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1440 = this1437;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1441 = __str1438;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1442 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_2(t1440, t1441);
  __retval1439 = r1442;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1443 = __retval1439;
  return t1443;
}

// function: _ZNKRSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEE3strEv
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char_____str___const__(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* v1444) {
bb1445:
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* this1446;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval1447;
  _Bool nrvo1448;
  struct std__allocator_char_ ref_tmp01449;
  this1446 = v1444;
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* t1450 = this1446;
  _Bool c1451 = 0;
  nrvo1448 = c1451;
  struct std__allocator_char_ r1452 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(&t1450->_M_string);
  ref_tmp01449 = r1452;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&__retval1447, &ref_tmp01449);
  {
    std__allocator_char____allocator(&ref_tmp01449);
  }
      char* __hi1453;
      char* r1454 = std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______M_high_mark___const(t1450);
      __hi1453 = r1454;
      char* t1455 = __hi1453;
      _Bool cast1456 = (_Bool)t1455;
      if (cast1456) {
        struct std__basic_streambuf_char__std__char_traits_char__* base1457 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t1450 + 0);
        char* r1458 = std__basic_streambuf_char__std__char_traits_char_____pbase___const(base1457);
        char* t1459 = __hi1453;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1460 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_char___void_(&__retval1447, r1458, t1459);
      } else {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1461 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(&__retval1447, &t1450->_M_string);
      }
    _Bool c1462 = 1;
    nrvo1448 = c1462;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1463 = __retval1447;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ret_val1464 = t1463;
    {
      _Bool t1465 = nrvo1448;
      _Bool u1466 = !t1465;
      if (u1466) {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&__retval1447);
      }
    }
    return ret_val1464;
  abort();
}

// function: _ZNKRSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEE3strEv
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____str___const__(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* v1467) {
bb1468:
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* this1469;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval1470;
  this1469 = v1467;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* t1471 = this1469;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1472 = std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char_____str___const__(&t1471->_M_stringbuf);
  __retval1470 = r1472;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1473 = __retval1470;
  return t1473;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1474) {
bb1475:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1476;
  this1476 = v1474;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1477 = this1476;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1477);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1477->_M_dataplus);
  }
  return;
}

// function: _ZNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream_2(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* v1478, void** v1479) {
bb1480:
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* this1481;
  void** vtt1482;
  this1481 = v1478;
  vtt1482 = v1479;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* t1483 = this1481;
  void** t1484 = vtt1482;
    {
      std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______basic_stringbuf(&t1483->_M_stringbuf);
    }
  {
    struct std__basic_iostream_char__std__char_traits_char__* base1485 = (struct std__basic_iostream_char__std__char_traits_char__*)((char *)t1483 + 0);
    static void *vtt_slot1486 = 0;
    void** vtt1487 = (void**)&vtt_slot1486;
    std__basic_iostream_char__std__char_traits_char______basic_iostream(base1485, vtt1487);
  }
  return;
}

// function: _ZNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEED1Ev
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* v1488) {
bb1489:
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* this1490;
  this1490 = v1488;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* t1491 = this1490;
    static void *vtt_slot1492 = 0;
    void** vtt1493 = (void**)&vtt_slot1492;
    std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream_2(t1491, vtt1493);
  {
    struct std__basic_ios_char__std__char_traits_char__* base1494 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1491 + 128);
    std__basic_ios_char__std__char_traits_char______basic_ios(base1494);
  }
  return;
}

// function: main
int main() {
bb1495:
  int __retval1496;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__ oss11497;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__ oss21498;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__ oss31499;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__ oss41500;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ mystr1501;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp01502;
  int c1503 = 0;
  __retval1496 = c1503;
  std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____basic_stringstream(&oss11497);
    std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____basic_stringstream(&oss21498);
      std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____basic_stringstream(&oss31499);
        std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____basic_stringstream(&oss41500);
          _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&mystr1501);
            char* cast1504 = (char*)&(_str);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1505 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&mystr1501, cast1504);
            struct std__basic_ostream_char__std__char_traits_char__* base1506 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(oss11497) + 16);
            struct std__basic_ostream_char__std__char_traits_char__* r1507 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(base1506, &mystr1501);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1508 = std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____str___const__(&oss11497);
            ref_tmp01502 = r1508;
              char* cast1509 = (char*)&(_str);
              _Bool r1510 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&ref_tmp01502, cast1509);
              if (r1510) {
              } else {
                char* cast1511 = (char*)&(_str_1);
                char* c1512 = _str_2;
                unsigned int c1513 = 22;
                char* cast1514 = (char*)&(__PRETTY_FUNCTION___main);
                __assert_fail(cast1511, c1512, c1513, cast1514);
              }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp01502);
            }
            int c1515 = 0;
            __retval1496 = c1515;
            int t1516 = __retval1496;
            int ret_val1517 = t1516;
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&mystr1501);
            }
            {
              std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(&oss41500);
            }
            {
              std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(&oss31499);
            }
            {
              std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(&oss21498);
            }
            {
              std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(&oss11497);
            }
            return ret_val1517;
  int t1518 = __retval1496;
  return t1518;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1519) {
bb1520:
  char* __r1521;
  char* __retval1522;
  __r1521 = v1519;
  char* t1523 = __r1521;
  __retval1522 = t1523;
  char* t1524 = __retval1522;
  return t1524;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1525) {
bb1526:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1527;
  char* __retval1528;
  this1527 = v1525;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1529 = this1527;
  char* cast1530 = (char*)&(t1529->field2._M_local_buf);
  char* r1531 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1530);
  __retval1528 = r1531;
  char* t1532 = __retval1528;
  return t1532;
}

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v1533) {
bb1534:
  struct std__allocator_char_* this1535;
  this1535 = v1533;
  struct std__allocator_char_* t1536 = this1535;
  struct std____new_allocator_char_* base1537 = (struct std____new_allocator_char_*)((char *)t1536 + 0);
  std____new_allocator_char_____new_allocator_2(base1537);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1538, char* v1539, struct std__allocator_char_* v1540) {
bb1541:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1542;
  char* __dat1543;
  struct std__allocator_char_* __a1544;
  this1542 = v1538;
  __dat1543 = v1539;
  __a1544 = v1540;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1545 = this1542;
  struct std__allocator_char_* base1546 = (struct std__allocator_char_*)((char *)t1545 + 0);
  struct std__allocator_char_* t1547 = __a1544;
  std__allocator_char___allocator(base1546, t1547);
    char* t1548 = __dat1543;
    t1545->_M_p = t1548;
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v1549) {
bb1550:
  struct std__allocator_char_* this1551;
  this1551 = v1549;
  struct std__allocator_char_* t1552 = this1551;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1553:
  _Bool __retval1554;
    _Bool c1555 = 0;
    __retval1554 = c1555;
    _Bool t1556 = __retval1554;
    return t1556;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1557) {
bb1558:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1559;
  this1559 = v1557;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1560 = this1559;
    _Bool r1561 = std__is_constant_evaluated();
    if (r1561) {
        unsigned long __i1562;
        unsigned long c1563 = 0;
        __i1562 = c1563;
        while (1) {
          unsigned long t1565 = __i1562;
          unsigned long c1566 = 15;
          _Bool c1567 = ((t1565 <= c1566)) ? 1 : 0;
          if (!c1567) break;
          char c1568 = 0;
          unsigned long t1569 = __i1562;
          t1560->field2._M_local_buf[t1569] = c1568;
        for_step1564: ;
          unsigned long t1570 = __i1562;
          unsigned long u1571 = t1570 + 1;
          __i1562 = u1571;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1572, unsigned long v1573) {
bb1574:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1575;
  unsigned long __length1576;
  this1575 = v1572;
  __length1576 = v1573;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1577 = this1575;
  unsigned long t1578 = __length1576;
  t1577->_M_string_length = t1578;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1579:
  _Bool __retval1580;
    _Bool c1581 = 0;
    __retval1580 = c1581;
    _Bool t1582 = __retval1580;
    return t1582;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1583, char* v1584) {
bb1585:
  char* __location1586;
  char* __args1587;
  char* __retval1588;
  void* __loc1589;
  __location1586 = v1583;
  __args1587 = v1584;
  char* t1590 = __location1586;
  void* cast1591 = (void*)t1590;
  __loc1589 = cast1591;
    void* t1592 = __loc1589;
    char* cast1593 = (char*)t1592;
    char* t1594 = __args1587;
    char t1595 = *t1594;
    *cast1593 = t1595;
    __retval1588 = cast1593;
    char* t1596 = __retval1588;
    return t1596;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1597, char* v1598) {
bb1599:
  char* __c11600;
  char* __c21601;
  __c11600 = v1597;
  __c21601 = v1598;
    _Bool r1602 = std____is_constant_evaluated();
    if (r1602) {
      char* t1603 = __c11600;
      char* t1604 = __c21601;
      char* r1605 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1603, t1604);
    } else {
      char* t1606 = __c21601;
      char t1607 = *t1606;
      char* t1608 = __c11600;
      *t1608 = t1607;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1609) {
bb1610:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1611;
  char* __retval1612;
  this1611 = v1609;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1613 = this1611;
  char* t1614 = t1613->_M_dataplus._M_p;
  __retval1612 = t1614;
  char* t1615 = __retval1612;
  return t1615;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1616, unsigned long v1617) {
bb1618:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1619;
  unsigned long __n1620;
  char ref_tmp01621;
  this1619 = v1616;
  __n1620 = v1617;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1622 = this1619;
  unsigned long t1623 = __n1620;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1622, t1623);
  unsigned long t1624 = __n1620;
  char* r1625 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1622);
  char* ptr1626 = &(r1625)[t1624];
  char c1627 = 0;
  ref_tmp01621 = c1627;
  std__char_traits_char___assign(ptr1626, &ref_tmp01621);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1628) {
bb1629:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1630;
  this1630 = v1628;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1631 = this1630;
  {
    struct std__allocator_char_* base1632 = (struct std__allocator_char_*)((char *)t1631 + 0);
    std__allocator_char____allocator(base1632);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1633) {
bb1634:
  struct std____new_allocator_char_* this1635;
  this1635 = v1633;
  struct std____new_allocator_char_* t1636 = this1635;
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1637, struct std____new_allocator_char_* v1638) {
bb1639:
  struct std____new_allocator_char_* this1640;
  struct std____new_allocator_char_* unnamed1641;
  this1640 = v1637;
  unnamed1641 = v1638;
  struct std____new_allocator_char_* t1642 = this1640;
  return;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEEC2Ev
void std__basic_streambuf_char__std__char_traits_char_____basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v1643) {
bb1644:
  struct std__basic_streambuf_char__std__char_traits_char__* this1645;
  this1645 = v1643;
  struct std__basic_streambuf_char__std__char_traits_char__* t1646 = this1645;
  void* v1647 = (void*)&_ZTVSt15basic_streambufIcSt11char_traitsIcEE[2];
  void** v1648 = (void**)t1646;
  *(void**)(v1648) = (void*)v1647;
  char* c1649 = ((void*)0);
  t1646->_M_in_beg = c1649;
  char* c1650 = ((void*)0);
  t1646->_M_in_cur = c1650;
  char* c1651 = ((void*)0);
  t1646->_M_in_end = c1651;
  char* c1652 = ((void*)0);
  t1646->_M_out_beg = c1652;
  char* c1653 = ((void*)0);
  t1646->_M_out_cur = c1653;
  char* c1654 = ((void*)0);
  t1646->_M_out_end = c1654;
  std__locale__locale(&t1646->_M_buf_locale);
  return;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v1655) {
bb1656:
  struct std__basic_streambuf_char__std__char_traits_char__* this1657;
  this1657 = v1655;
  struct std__basic_streambuf_char__std__char_traits_char__* t1658 = this1657;
  {
    std__locale___locale(&t1658->_M_buf_locale);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1659, char* v1660, struct std__allocator_char_* v1661) {
bb1662:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1663;
  char* __dat1664;
  struct std__allocator_char_* __a1665;
  this1663 = v1659;
  __dat1664 = v1660;
  __a1665 = v1661;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1666 = this1663;
  struct std__allocator_char_* base1667 = (struct std__allocator_char_*)((char *)t1666 + 0);
  struct std__allocator_char_* t1668 = __a1665;
  std__allocator_char___allocator(base1667, t1668);
    char* t1669 = __dat1664;
    t1666->_M_p = t1669;
  return;
}

