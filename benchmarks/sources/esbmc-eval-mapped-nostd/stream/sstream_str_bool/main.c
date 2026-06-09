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
char _str[2] = "1";
char _str_1[17] = "oss.str() == \"1\"";
char _str_2[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stream/sstream_str_bool/main.cpp";
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
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_bool_(struct std__basic_ostream_char__std__char_traits_char__* p0, _Bool p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, _Bool p1);
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

// function: _ZNSolsEb
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v221, _Bool v222) {
bb223:
  struct std__basic_ostream_char__std__char_traits_char__* this224;
  _Bool __n225;
  struct std__basic_ostream_char__std__char_traits_char__* __retval226;
  this224 = v221;
  __n225 = v222;
  struct std__basic_ostream_char__std__char_traits_char__* t227 = this224;
  _Bool t228 = __n225;
  struct std__basic_ostream_char__std__char_traits_char__* r229 = std__ostream__std__ostream___M_insert_bool_(t227, t228);
  __retval226 = r229;
  struct std__basic_ostream_char__std__char_traits_char__* t230 = __retval226;
  return t230;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v231) {
bb232:
  struct std__allocator_char_* __a233;
  unsigned long __retval234;
  __a233 = v231;
  unsigned long c235 = -1;
  unsigned long c236 = 1;
  unsigned long b237 = c235 / c236;
  __retval234 = b237;
  unsigned long t238 = __retval234;
  return t238;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v239) {
bb240:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this241;
  struct std__allocator_char_* __retval242;
  this241 = v239;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t243 = this241;
  struct std__allocator_char_* base244 = (struct std__allocator_char_*)((char *)&(t243->_M_dataplus) + 0);
  __retval242 = base244;
  struct std__allocator_char_* t245 = __retval242;
  return t245;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v246, unsigned long* v247) {
bb248:
  unsigned long* __a249;
  unsigned long* __b250;
  unsigned long* __retval251;
  __a249 = v246;
  __b250 = v247;
    unsigned long* t252 = __b250;
    unsigned long t253 = *t252;
    unsigned long* t254 = __a249;
    unsigned long t255 = *t254;
    _Bool c256 = ((t253 < t255)) ? 1 : 0;
    if (c256) {
      unsigned long* t257 = __b250;
      __retval251 = t257;
      unsigned long* t258 = __retval251;
      return t258;
    }
  unsigned long* t259 = __a249;
  __retval251 = t259;
  unsigned long* t260 = __retval251;
  return t260;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v261) {
bb262:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this263;
  unsigned long __retval264;
  unsigned long __diffmax265;
  unsigned long __allocmax266;
  this263 = v261;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t267 = this263;
  unsigned long c268 = 9223372036854775807;
  __diffmax265 = c268;
  struct std__allocator_char_* r269 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t267);
  unsigned long r270 = std__allocator_traits_std__allocator_char_____max_size(r269);
  __allocmax266 = r270;
  unsigned long* r271 = unsigned_long_const__std__min_unsigned_long_(&__diffmax265, &__allocmax266);
  unsigned long t272 = *r271;
  unsigned long c273 = 1;
  unsigned long b274 = t272 - c273;
  __retval264 = b274;
  unsigned long t275 = __retval264;
  return t275;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v276) {
bb277:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this278;
  unsigned long __retval279;
  unsigned long __sz280;
  this278 = v276;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t281 = this278;
  unsigned long t282 = t281->_M_string_length;
  __sz280 = t282;
    unsigned long t283 = __sz280;
    unsigned long r284 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t281);
    _Bool c285 = ((t283 > r284)) ? 1 : 0;
    if (c285) {
      __builtin_unreachable();
    }
  unsigned long t286 = __sz280;
  __retval279 = t286;
  unsigned long t287 = __retval279;
  return t287;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb288:
  _Bool __retval289;
    _Bool c290 = 0;
    __retval289 = c290;
    _Bool t291 = __retval289;
    return t291;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v292, char* v293) {
bb294:
  char* __c1295;
  char* __c2296;
  _Bool __retval297;
  __c1295 = v292;
  __c2296 = v293;
  char* t298 = __c1295;
  char t299 = *t298;
  int cast300 = (int)t299;
  char* t301 = __c2296;
  char t302 = *t301;
  int cast303 = (int)t302;
  _Bool c304 = ((cast300 == cast303)) ? 1 : 0;
  __retval297 = c304;
  _Bool t305 = __retval297;
  return t305;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v306) {
bb307:
  char* __p308;
  unsigned long __retval309;
  unsigned long __i310;
  __p308 = v306;
  unsigned long c311 = 0;
  __i310 = c311;
    char ref_tmp0312;
    while (1) {
      unsigned long t313 = __i310;
      char* t314 = __p308;
      char* ptr315 = &(t314)[t313];
      char c316 = 0;
      ref_tmp0312 = c316;
      _Bool r317 = __gnu_cxx__char_traits_char___eq(ptr315, &ref_tmp0312);
      _Bool u318 = !r317;
      if (!u318) break;
      unsigned long t319 = __i310;
      unsigned long u320 = t319 + 1;
      __i310 = u320;
    }
  unsigned long t321 = __i310;
  __retval309 = t321;
  unsigned long t322 = __retval309;
  return t322;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v323) {
bb324:
  char* __s325;
  unsigned long __retval326;
  __s325 = v323;
    _Bool r327 = std____is_constant_evaluated();
    if (r327) {
      char* t328 = __s325;
      unsigned long r329 = __gnu_cxx__char_traits_char___length(t328);
      __retval326 = r329;
      unsigned long t330 = __retval326;
      return t330;
    }
  char* t331 = __s325;
  unsigned long r332 = strlen(t331);
  __retval326 = r332;
  unsigned long t333 = __retval326;
  return t333;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v334, char* v335) {
bb336:
  char* __c1337;
  char* __c2338;
  _Bool __retval339;
  __c1337 = v334;
  __c2338 = v335;
  char* t340 = __c1337;
  char t341 = *t340;
  unsigned char cast342 = (unsigned char)t341;
  int cast343 = (int)cast342;
  char* t344 = __c2338;
  char t345 = *t344;
  unsigned char cast346 = (unsigned char)t345;
  int cast347 = (int)cast346;
  _Bool c348 = ((cast343 < cast347)) ? 1 : 0;
  __retval339 = c348;
  _Bool t349 = __retval339;
  return t349;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v350, char* v351, unsigned long v352) {
bb353:
  char* __s1354;
  char* __s2355;
  unsigned long __n356;
  int __retval357;
  __s1354 = v350;
  __s2355 = v351;
  __n356 = v352;
    unsigned long t358 = __n356;
    unsigned long c359 = 0;
    _Bool c360 = ((t358 == c359)) ? 1 : 0;
    if (c360) {
      int c361 = 0;
      __retval357 = c361;
      int t362 = __retval357;
      return t362;
    }
    _Bool r363 = std____is_constant_evaluated();
    if (r363) {
        unsigned long __i364;
        unsigned long c365 = 0;
        __i364 = c365;
        while (1) {
          unsigned long t367 = __i364;
          unsigned long t368 = __n356;
          _Bool c369 = ((t367 < t368)) ? 1 : 0;
          if (!c369) break;
            unsigned long t370 = __i364;
            char* t371 = __s1354;
            char* ptr372 = &(t371)[t370];
            unsigned long t373 = __i364;
            char* t374 = __s2355;
            char* ptr375 = &(t374)[t373];
            _Bool r376 = std__char_traits_char___lt(ptr372, ptr375);
            if (r376) {
              int c377 = -1;
              __retval357 = c377;
              int t378 = __retval357;
              int ret_val379 = t378;
              return ret_val379;
            } else {
                unsigned long t380 = __i364;
                char* t381 = __s2355;
                char* ptr382 = &(t381)[t380];
                unsigned long t383 = __i364;
                char* t384 = __s1354;
                char* ptr385 = &(t384)[t383];
                _Bool r386 = std__char_traits_char___lt(ptr382, ptr385);
                if (r386) {
                  int c387 = 1;
                  __retval357 = c387;
                  int t388 = __retval357;
                  int ret_val389 = t388;
                  return ret_val389;
                }
            }
        for_step366: ;
          unsigned long t390 = __i364;
          unsigned long u391 = t390 + 1;
          __i364 = u391;
        }
      int c392 = 0;
      __retval357 = c392;
      int t393 = __retval357;
      return t393;
    }
  char* t394 = __s1354;
  void* cast395 = (void*)t394;
  char* t396 = __s2355;
  void* cast397 = (void*)t396;
  unsigned long t398 = __n356;
  int r399 = memcmp(cast395, cast397, t398);
  __retval357 = r399;
  int t400 = __retval357;
  return t400;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v401) {
bb402:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this403;
  char* __retval404;
  this403 = v401;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t405 = this403;
  char* t406 = t405->_M_dataplus._M_p;
  __retval404 = t406;
  char* t407 = __retval404;
  return t407;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v408) {
bb409:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this410;
  char* __retval411;
  this410 = v408;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t412 = this410;
  char* r413 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t412);
  __retval411 = r413;
  char* t414 = __retval411;
  return t414;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v415, char* v416) {
bb417:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs418;
  char* __rhs419;
  _Bool __retval420;
  __lhs418 = v415;
  __rhs419 = v416;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t421 = __lhs418;
  unsigned long r422 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t421);
  char* t423 = __rhs419;
  unsigned long r424 = std__char_traits_char___length(t423);
  _Bool c425 = ((r422 == r424)) ? 1 : 0;
  _Bool ternary426;
  if (c425) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t427 = __lhs418;
    char* r428 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t427);
    char* t429 = __rhs419;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t430 = __lhs418;
    unsigned long r431 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t430);
    int r432 = std__char_traits_char___compare(r428, t429, r431);
    _Bool cast433 = (_Bool)r432;
    _Bool u434 = !cast433;
    ternary426 = (_Bool)u434;
  } else {
    _Bool c435 = 0;
    ternary426 = (_Bool)c435;
  }
  __retval420 = ternary426;
  _Bool t436 = __retval420;
  return t436;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v437, struct std__allocator_char_* v438) {
bb439:
  struct std__allocator_char_* this440;
  struct std__allocator_char_* __a441;
  this440 = v437;
  __a441 = v438;
  struct std__allocator_char_* t442 = this440;
  struct std____new_allocator_char_* base443 = (struct std____new_allocator_char_*)((char *)t442 + 0);
  struct std__allocator_char_* t444 = __a441;
  struct std____new_allocator_char_* base445 = (struct std____new_allocator_char_*)((char *)t444 + 0);
  std____new_allocator_char_____new_allocator(base443, base445);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13get_allocatorEv
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v446) {
bb447:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this448;
  struct std__allocator_char_ __retval449;
  this448 = v446;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t450 = this448;
  struct std__allocator_char_* r451 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t450);
  std__allocator_char___allocator(&__retval449, r451);
  struct std__allocator_char_ t452 = __retval449;
  return t452;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v453, struct std__allocator_char_* v454) {
bb455:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this456;
  struct std__allocator_char_* __a457;
  this456 = v453;
  __a457 = v454;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t458 = this456;
  char* r459 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t458);
  struct std__allocator_char_* t460 = __a457;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t458->_M_dataplus, r459, t460);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t458);
    unsigned long c461 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t458, c461);
  return;
}

// function: _ZNKSt15basic_streambufIcSt11char_traitsIcEE4pptrEv
char* std__basic_streambuf_char__std__char_traits_char_____pptr___const(struct std__basic_streambuf_char__std__char_traits_char__* v462) {
bb463:
  struct std__basic_streambuf_char__std__char_traits_char__* this464;
  char* __retval465;
  this464 = v462;
  struct std__basic_streambuf_char__std__char_traits_char__* t466 = this464;
  char* t467 = t466->_M_out_cur;
  __retval465 = t467;
  char* t468 = __retval465;
  return t468;
}

// function: _ZNKSt15basic_streambufIcSt11char_traitsIcEE5egptrEv
char* std__basic_streambuf_char__std__char_traits_char_____egptr___const(struct std__basic_streambuf_char__std__char_traits_char__* v469) {
bb470:
  struct std__basic_streambuf_char__std__char_traits_char__* this471;
  char* __retval472;
  this471 = v469;
  struct std__basic_streambuf_char__std__char_traits_char__* t473 = this471;
  char* t474 = t473->_M_in_end;
  __retval472 = t474;
  char* t475 = __retval472;
  return t475;
}

// function: _ZNKSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEE12_M_high_markEv
char* std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______M_high_mark___const(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* v476) {
bb477:
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* this478;
  char* __retval479;
  this478 = v476;
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* t480 = this478;
    char* __pptr481;
    struct std__basic_streambuf_char__std__char_traits_char__* base482 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t480 + 0);
    char* r483 = std__basic_streambuf_char__std__char_traits_char_____pptr___const(base482);
    __pptr481 = r483;
    char* t484 = __pptr481;
    _Bool cast485 = (_Bool)t484;
    if (cast485) {
      char* __egptr486;
      struct std__basic_streambuf_char__std__char_traits_char__* base487 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t480 + 0);
      char* r488 = std__basic_streambuf_char__std__char_traits_char_____egptr___const(base487);
      __egptr486 = r488;
        char* t489 = __egptr486;
        _Bool cast490 = (_Bool)t489;
        _Bool u491 = !cast490;
        _Bool ternary492;
        if (u491) {
          _Bool c493 = 1;
          ternary492 = (_Bool)c493;
        } else {
          char* t494 = __pptr481;
          char* t495 = __egptr486;
          _Bool c496 = ((t494 > t495)) ? 1 : 0;
          ternary492 = (_Bool)c496;
        }
        if (ternary492) {
          char* t497 = __pptr481;
          __retval479 = t497;
          char* t498 = __retval479;
          return t498;
        } else {
          char* t499 = __egptr486;
          __retval479 = t499;
          char* t500 = __retval479;
          return t500;
        }
    }
  char* c501 = ((void*)0);
  __retval479 = c501;
  char* t502 = __retval479;
  return t502;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v503, unsigned long v504, unsigned long v505, char* v506) {
bb507:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this508;
  unsigned long __n1509;
  unsigned long __n2510;
  char* __s511;
  this508 = v503;
  __n1509 = v504;
  __n2510 = v505;
  __s511 = v506;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t512 = this508;
    unsigned long r513 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t512);
    unsigned long r514 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t512);
    unsigned long t515 = __n1509;
    unsigned long b516 = r514 - t515;
    unsigned long b517 = r513 - b516;
    unsigned long t518 = __n2510;
    _Bool c519 = ((b517 < t518)) ? 1 : 0;
    if (c519) {
      char* t520 = __s511;
      std____throw_length_error(t520);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v521) {
bb522:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this523;
  unsigned long __retval524;
  unsigned long __sz525;
  this523 = v521;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t526 = this523;
  _Bool r527 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t526);
  unsigned long ternary528;
  if (r527) {
    unsigned long c529 = 15;
    ternary528 = (unsigned long)c529;
  } else {
    unsigned long t530 = t526->field2._M_allocated_capacity;
    ternary528 = (unsigned long)t530;
  }
  __sz525 = ternary528;
    unsigned long t531 = __sz525;
    unsigned long c532 = 15;
    _Bool c533 = ((t531 < c532)) ? 1 : 0;
    _Bool ternary534;
    if (c533) {
      _Bool c535 = 1;
      ternary534 = (_Bool)c535;
    } else {
      unsigned long t536 = __sz525;
      unsigned long r537 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t526);
      _Bool c538 = ((t536 > r537)) ? 1 : 0;
      ternary534 = (_Bool)c538;
    }
    if (ternary534) {
      __builtin_unreachable();
    }
  unsigned long t539 = __sz525;
  __retval524 = t539;
  unsigned long t540 = __retval524;
  return t540;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v541) {
bb542:
  struct std____new_allocator_char_* this543;
  unsigned long __retval544;
  this543 = v541;
  struct std____new_allocator_char_* t545 = this543;
  unsigned long c546 = 9223372036854775807;
  unsigned long c547 = 1;
  unsigned long b548 = c546 / c547;
  __retval544 = b548;
  unsigned long t549 = __retval544;
  return t549;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v550, unsigned long v551, void* v552) {
bb553:
  struct std____new_allocator_char_* this554;
  unsigned long __n555;
  void* unnamed556;
  char* __retval557;
  this554 = v550;
  __n555 = v551;
  unnamed556 = v552;
  struct std____new_allocator_char_* t558 = this554;
    unsigned long t559 = __n555;
    unsigned long r560 = std____new_allocator_char____M_max_size___const(t558);
    _Bool c561 = ((t559 > r560)) ? 1 : 0;
    if (c561) {
        unsigned long t562 = __n555;
        unsigned long c563 = -1;
        unsigned long c564 = 1;
        unsigned long b565 = c563 / c564;
        _Bool c566 = ((t562 > b565)) ? 1 : 0;
        if (c566) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c567 = 1;
    unsigned long c568 = 16;
    _Bool c569 = ((c567 > c568)) ? 1 : 0;
    if (c569) {
      unsigned long __al570;
      unsigned long c571 = 1;
      __al570 = c571;
      unsigned long t572 = __n555;
      unsigned long c573 = 1;
      unsigned long b574 = t572 * c573;
      unsigned long t575 = __al570;
      void* r576 = operator_new_2(b574, t575);
      char* cast577 = (char*)r576;
      __retval557 = cast577;
      char* t578 = __retval557;
      return t578;
    }
  unsigned long t579 = __n555;
  unsigned long c580 = 1;
  unsigned long b581 = t579 * c580;
  void* r582 = operator_new(b581);
  char* cast583 = (char*)r582;
  __retval557 = cast583;
  char* t584 = __retval557;
  return t584;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v585, unsigned long v586) {
bb587:
  struct std__allocator_char_* this588;
  unsigned long __n589;
  char* __retval590;
  this588 = v585;
  __n589 = v586;
  struct std__allocator_char_* t591 = this588;
    _Bool r592 = std____is_constant_evaluated();
    if (r592) {
        unsigned long t593 = __n589;
        unsigned long c594 = 1;
        unsigned long ovr595;
        _Bool ovf596 = __builtin_mul_overflow(t593, c594, &ovr595);
        __n589 = ovr595;
        if (ovf596) {
          std____throw_bad_array_new_length();
        }
      unsigned long t597 = __n589;
      void* r598 = operator_new(t597);
      char* cast599 = (char*)r598;
      __retval590 = cast599;
      char* t600 = __retval590;
      return t600;
    }
  struct std____new_allocator_char_* base601 = (struct std____new_allocator_char_*)((char *)t591 + 0);
  unsigned long t602 = __n589;
  void* c603 = ((void*)0);
  char* r604 = std____new_allocator_char___allocate(base601, t602, c603);
  __retval590 = r604;
  char* t605 = __retval590;
  return t605;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v606, unsigned long v607) {
bb608:
  struct std__allocator_char_* __a609;
  unsigned long __n610;
  char* __retval611;
  __a609 = v606;
  __n610 = v607;
  struct std__allocator_char_* t612 = __a609;
  unsigned long t613 = __n610;
  char* r614 = std__allocator_char___allocate(t612, t613);
  __retval611 = r614;
  char* t615 = __retval611;
  return t615;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v616, unsigned long v617) {
bb618:
  struct std__allocator_char_* __a619;
  unsigned long __n620;
  char* __retval621;
  char* __p622;
  __a619 = v616;
  __n620 = v617;
  struct std__allocator_char_* t623 = __a619;
  unsigned long t624 = __n620;
  char* r625 = std__allocator_traits_std__allocator_char_____allocate(t623, t624);
  __p622 = r625;
  char* t626 = __p622;
  __retval621 = t626;
  char* t627 = __retval621;
  return t627;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v628, char* v629, unsigned long v630) {
bb631:
  char* __s1632;
  char* __s2633;
  unsigned long __n634;
  char* __retval635;
  __s1632 = v628;
  __s2633 = v629;
  __n634 = v630;
    unsigned long t636 = __n634;
    unsigned long c637 = 0;
    _Bool c638 = ((t636 == c637)) ? 1 : 0;
    if (c638) {
      char* t639 = __s1632;
      __retval635 = t639;
      char* t640 = __retval635;
      return t640;
    }
    _Bool r641 = std____is_constant_evaluated();
    if (r641) {
        unsigned long __i642;
        unsigned long c643 = 0;
        __i642 = c643;
        while (1) {
          unsigned long t645 = __i642;
          unsigned long t646 = __n634;
          _Bool c647 = ((t645 < t646)) ? 1 : 0;
          if (!c647) break;
          char* t648 = __s1632;
          unsigned long t649 = __i642;
          char* ptr650 = &(t648)[t649];
          unsigned long t651 = __i642;
          char* t652 = __s2633;
          char* ptr653 = &(t652)[t651];
          char* r654 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr650, ptr653);
        for_step644: ;
          unsigned long t655 = __i642;
          unsigned long u656 = t655 + 1;
          __i642 = u656;
        }
      char* t657 = __s1632;
      __retval635 = t657;
      char* t658 = __retval635;
      return t658;
    }
  char* t659 = __s1632;
  void* cast660 = (void*)t659;
  char* t661 = __s2633;
  void* cast662 = (void*)t661;
  unsigned long t663 = __n634;
  unsigned long c664 = 1;
  unsigned long b665 = t663 * c664;
  void* r666 = memcpy(cast660, cast662, b665);
  char* t667 = __s1632;
  __retval635 = t667;
  char* t668 = __retval635;
  return t668;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v669, char* v670, unsigned long v671) {
bb672:
  char* __s1673;
  char* __s2674;
  unsigned long __n675;
  char* __retval676;
  __s1673 = v669;
  __s2674 = v670;
  __n675 = v671;
    unsigned long t677 = __n675;
    unsigned long c678 = 0;
    _Bool c679 = ((t677 == c678)) ? 1 : 0;
    if (c679) {
      char* t680 = __s1673;
      __retval676 = t680;
      char* t681 = __retval676;
      return t681;
    }
    _Bool r682 = std____is_constant_evaluated();
    if (r682) {
      char* t683 = __s1673;
      char* t684 = __s2674;
      unsigned long t685 = __n675;
      char* r686 = __gnu_cxx__char_traits_char___copy(t683, t684, t685);
      __retval676 = r686;
      char* t687 = __retval676;
      return t687;
    }
  char* t688 = __s1673;
  void* cast689 = (void*)t688;
  char* t690 = __s2674;
  void* cast691 = (void*)t690;
  unsigned long t692 = __n675;
  void* r693 = memcpy(cast689, cast691, t692);
  char* cast694 = (char*)r693;
  __retval676 = cast694;
  char* t695 = __retval676;
  return t695;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v696, char* v697, unsigned long v698) {
bb699:
  char* __d700;
  char* __s701;
  unsigned long __n702;
  __d700 = v696;
  __s701 = v697;
  __n702 = v698;
    unsigned long t703 = __n702;
    unsigned long c704 = 1;
    _Bool c705 = ((t703 == c704)) ? 1 : 0;
    if (c705) {
      char* t706 = __d700;
      char* t707 = __s701;
      std__char_traits_char___assign(t706, t707);
    } else {
      char* t708 = __d700;
      char* t709 = __s701;
      unsigned long t710 = __n702;
      char* r711 = std__char_traits_char___copy(t708, t709, t710);
    }
  return;
}

// function: _ZNKSt4lessIPKcEclES1_S1_
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* v712, char* v713, char* v714) {
bb715:
  struct std__less_const_char___* this716;
  char* __x717;
  char* __y718;
  _Bool __retval719;
  this716 = v712;
  __x717 = v713;
  __y718 = v714;
  struct std__less_const_char___* t720 = this716;
    _Bool r721 = std____is_constant_evaluated();
    if (r721) {
      char* t722 = __x717;
      char* t723 = __y718;
      _Bool c724 = ((t722 < t723)) ? 1 : 0;
      __retval719 = c724;
      _Bool t725 = __retval719;
      return t725;
    }
  char* t726 = __x717;
  unsigned long cast727 = (unsigned long)t726;
  char* t728 = __y718;
  unsigned long cast729 = (unsigned long)t728;
  _Bool c730 = ((cast727 < cast729)) ? 1 : 0;
  __retval719 = c730;
  _Bool t731 = __retval719;
  return t731;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_disjunctEPKc
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v732, char* v733) {
bb734:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this735;
  char* __s736;
  _Bool __retval737;
  struct std__less_const_char___ ref_tmp0738;
  this735 = v732;
  __s736 = v733;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t739 = this735;
  char* t740 = __s736;
  char* r741 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t739);
  _Bool r742 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp0738, t740, r741);
  _Bool ternary743;
  if (r742) {
    _Bool c744 = 1;
    ternary743 = (_Bool)c744;
  } else {
    struct std__less_const_char___ ref_tmp1745;
    char* r746 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t739);
    unsigned long r747 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t739);
    char* ptr748 = &(r746)[r747];
    char* t749 = __s736;
    _Bool r750 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp1745, ptr748, t749);
    ternary743 = (_Bool)r750;
  }
  __retval737 = ternary743;
  _Bool t751 = __retval737;
  return t751;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign(char* v752, char* v753) {
bb754:
  char* __c1755;
  char* __c2756;
  __c1755 = v752;
  __c2756 = v753;
    _Bool r757 = std____is_constant_evaluated();
    if (r757) {
      char* t758 = __c1755;
      char* t759 = __c2756;
      char* r760 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t758, t759);
    } else {
      char* t761 = __c2756;
      char t762 = *t761;
      char* t763 = __c1755;
      *t763 = t762;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v764, char* v765, unsigned long v766) {
bb767:
  char* __s1768;
  char* __s2769;
  unsigned long __n770;
  char* __retval771;
  __s1768 = v764;
  __s2769 = v765;
  __n770 = v766;
    unsigned long t772 = __n770;
    unsigned long c773 = 0;
    _Bool c774 = ((t772 == c773)) ? 1 : 0;
    if (c774) {
      char* t775 = __s1768;
      __retval771 = t775;
      char* t776 = __retval771;
      return t776;
    }
    _Bool r777 = std____is_constant_evaluated();
    if (r777) {
        char* t778 = __s2769;
        char* t779 = __s1768;
        _Bool c780 = ((t778 < t779)) ? 1 : 0;
        _Bool isconst781 = 0;
        _Bool ternary782;
        if (isconst781) {
          char* t783 = __s1768;
          char* t784 = __s2769;
          _Bool c785 = ((t783 > t784)) ? 1 : 0;
          ternary782 = (_Bool)c785;
        } else {
          _Bool c786 = 0;
          ternary782 = (_Bool)c786;
        }
        _Bool ternary787;
        if (ternary782) {
          char* t788 = __s1768;
          char* t789 = __s2769;
          unsigned long t790 = __n770;
          char* ptr791 = &(t789)[t790];
          _Bool c792 = ((t788 < ptr791)) ? 1 : 0;
          ternary787 = (_Bool)c792;
        } else {
          _Bool c793 = 0;
          ternary787 = (_Bool)c793;
        }
        if (ternary787) {
            do {
                unsigned long t794 = __n770;
                unsigned long u795 = t794 - 1;
                __n770 = u795;
                unsigned long t796 = __n770;
                char* t797 = __s1768;
                char* ptr798 = &(t797)[t796];
                unsigned long t799 = __n770;
                char* t800 = __s2769;
                char* ptr801 = &(t800)[t799];
                __gnu_cxx__char_traits_char___assign(ptr798, ptr801);
              unsigned long t802 = __n770;
              unsigned long c803 = 0;
              _Bool c804 = ((t802 > c803)) ? 1 : 0;
              if (!c804) break;
            } while (1);
        } else {
          char* t805 = __s1768;
          char* t806 = __s2769;
          unsigned long t807 = __n770;
          char* r808 = __gnu_cxx__char_traits_char___copy(t805, t806, t807);
        }
      char* t809 = __s1768;
      __retval771 = t809;
      char* t810 = __retval771;
      return t810;
    }
  char* t811 = __s1768;
  void* cast812 = (void*)t811;
  char* t813 = __s2769;
  void* cast814 = (void*)t813;
  unsigned long t815 = __n770;
  unsigned long c816 = 1;
  unsigned long b817 = t815 * c816;
  void* r818 = memmove(cast812, cast814, b817);
  char* t819 = __s1768;
  __retval771 = t819;
  char* t820 = __retval771;
  return t820;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v821, char* v822, unsigned long v823) {
bb824:
  char* __s1825;
  char* __s2826;
  unsigned long __n827;
  char* __retval828;
  __s1825 = v821;
  __s2826 = v822;
  __n827 = v823;
    unsigned long t829 = __n827;
    unsigned long c830 = 0;
    _Bool c831 = ((t829 == c830)) ? 1 : 0;
    if (c831) {
      char* t832 = __s1825;
      __retval828 = t832;
      char* t833 = __retval828;
      return t833;
    }
    _Bool r834 = std____is_constant_evaluated();
    if (r834) {
      char* t835 = __s1825;
      char* t836 = __s2826;
      unsigned long t837 = __n827;
      char* r838 = __gnu_cxx__char_traits_char___move(t835, t836, t837);
      __retval828 = r838;
      char* t839 = __retval828;
      return t839;
    }
  char* t840 = __s1825;
  void* cast841 = (void*)t840;
  char* t842 = __s2826;
  void* cast843 = (void*)t842;
  unsigned long t844 = __n827;
  void* r845 = memmove(cast841, cast843, t844);
  char* cast846 = (char*)r845;
  __retval828 = cast846;
  char* t847 = __retval828;
  return t847;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v848, char* v849, unsigned long v850) {
bb851:
  char* __d852;
  char* __s853;
  unsigned long __n854;
  __d852 = v848;
  __s853 = v849;
  __n854 = v850;
    unsigned long t855 = __n854;
    unsigned long c856 = 1;
    _Bool c857 = ((t855 == c856)) ? 1 : 0;
    if (c857) {
      char* t858 = __d852;
      char* t859 = __s853;
      std__char_traits_char___assign(t858, t859);
    } else {
      char* t860 = __d852;
      char* t861 = __s853;
      unsigned long t862 = __n854;
      char* r863 = std__char_traits_char___move(t860, t861, t862);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_replace_coldEPcmPKcmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v864, char* v865, unsigned long v866, char* v867, unsigned long v868, unsigned long v869) {
bb870:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this871;
  char* __p872;
  unsigned long __len1873;
  char* __s874;
  unsigned long __len2875;
  unsigned long __how_much876;
  this871 = v864;
  __p872 = v865;
  __len1873 = v866;
  __s874 = v867;
  __len2875 = v868;
  __how_much876 = v869;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t877 = this871;
    unsigned long t878 = __len2875;
    _Bool cast879 = (_Bool)t878;
    _Bool ternary880;
    if (cast879) {
      unsigned long t881 = __len2875;
      unsigned long t882 = __len1873;
      _Bool c883 = ((t881 <= t882)) ? 1 : 0;
      ternary880 = (_Bool)c883;
    } else {
      _Bool c884 = 0;
      ternary880 = (_Bool)c884;
    }
    if (ternary880) {
      char* t885 = __p872;
      char* t886 = __s874;
      unsigned long t887 = __len2875;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t885, t886, t887);
    }
    unsigned long t888 = __how_much876;
    _Bool cast889 = (_Bool)t888;
    _Bool ternary890;
    if (cast889) {
      unsigned long t891 = __len1873;
      unsigned long t892 = __len2875;
      _Bool c893 = ((t891 != t892)) ? 1 : 0;
      ternary890 = (_Bool)c893;
    } else {
      _Bool c894 = 0;
      ternary890 = (_Bool)c894;
    }
    if (ternary890) {
      char* t895 = __p872;
      unsigned long t896 = __len2875;
      char* ptr897 = &(t895)[t896];
      char* t898 = __p872;
      unsigned long t899 = __len1873;
      char* ptr900 = &(t898)[t899];
      unsigned long t901 = __how_much876;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr897, ptr900, t901);
    }
    unsigned long t902 = __len2875;
    unsigned long t903 = __len1873;
    _Bool c904 = ((t902 > t903)) ? 1 : 0;
    if (c904) {
        char* t905 = __s874;
        unsigned long t906 = __len2875;
        char* ptr907 = &(t905)[t906];
        char* t908 = __p872;
        unsigned long t909 = __len1873;
        char* ptr910 = &(t908)[t909];
        _Bool c911 = ((ptr907 <= ptr910)) ? 1 : 0;
        if (c911) {
          char* t912 = __p872;
          char* t913 = __s874;
          unsigned long t914 = __len2875;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t912, t913, t914);
        } else {
            char* t915 = __s874;
            char* t916 = __p872;
            unsigned long t917 = __len1873;
            char* ptr918 = &(t916)[t917];
            _Bool c919 = ((t915 >= ptr918)) ? 1 : 0;
            if (c919) {
              unsigned long __poff920;
              char* t921 = __s874;
              char* t922 = __p872;
              long diff923 = t921 - t922;
              unsigned long cast924 = (unsigned long)diff923;
              unsigned long t925 = __len2875;
              unsigned long t926 = __len1873;
              unsigned long b927 = t925 - t926;
              unsigned long b928 = cast924 + b927;
              __poff920 = b928;
              char* t929 = __p872;
              char* t930 = __p872;
              unsigned long t931 = __poff920;
              char* ptr932 = &(t930)[t931];
              unsigned long t933 = __len2875;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t929, ptr932, t933);
            } else {
              unsigned long __nleft934;
              char* t935 = __p872;
              unsigned long t936 = __len1873;
              char* ptr937 = &(t935)[t936];
              char* t938 = __s874;
              long diff939 = ptr937 - t938;
              unsigned long cast940 = (unsigned long)diff939;
              __nleft934 = cast940;
              char* t941 = __p872;
              char* t942 = __s874;
              unsigned long t943 = __nleft934;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t941, t942, t943);
              char* t944 = __p872;
              unsigned long t945 = __nleft934;
              char* ptr946 = &(t944)[t945];
              char* t947 = __p872;
              unsigned long t948 = __len2875;
              char* ptr949 = &(t947)[t948];
              unsigned long t950 = __len2875;
              unsigned long t951 = __nleft934;
              unsigned long b952 = t950 - t951;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr946, ptr949, b952);
            }
        }
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v953) {
bb954:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this955;
  unsigned long __retval956;
  this955 = v953;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t957 = this955;
  unsigned long r958 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t957);
  __retval956 = r958;
  unsigned long t959 = __retval956;
  return t959;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v960, unsigned long* v961, unsigned long v962) {
bb963:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this964;
  unsigned long* __capacity965;
  unsigned long __old_capacity966;
  char* __retval967;
  this964 = v960;
  __capacity965 = v961;
  __old_capacity966 = v962;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t968 = this964;
    unsigned long* t969 = __capacity965;
    unsigned long t970 = *t969;
    unsigned long r971 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t968);
    _Bool c972 = ((t970 > r971)) ? 1 : 0;
    if (c972) {
      char* cast973 = (char*)&(_str_4);
      std____throw_length_error(cast973);
    }
    unsigned long* t974 = __capacity965;
    unsigned long t975 = *t974;
    unsigned long t976 = __old_capacity966;
    _Bool c977 = ((t975 > t976)) ? 1 : 0;
    _Bool ternary978;
    if (c977) {
      unsigned long* t979 = __capacity965;
      unsigned long t980 = *t979;
      unsigned long c981 = 2;
      unsigned long t982 = __old_capacity966;
      unsigned long b983 = c981 * t982;
      _Bool c984 = ((t980 < b983)) ? 1 : 0;
      ternary978 = (_Bool)c984;
    } else {
      _Bool c985 = 0;
      ternary978 = (_Bool)c985;
    }
    if (ternary978) {
      unsigned long c986 = 2;
      unsigned long t987 = __old_capacity966;
      unsigned long b988 = c986 * t987;
      unsigned long* t989 = __capacity965;
      *t989 = b988;
        unsigned long* t990 = __capacity965;
        unsigned long t991 = *t990;
        unsigned long r992 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t968);
        _Bool c993 = ((t991 > r992)) ? 1 : 0;
        if (c993) {
          unsigned long r994 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t968);
          unsigned long* t995 = __capacity965;
          *t995 = r994;
        }
    }
  struct std__allocator_char_* r996 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t968);
  unsigned long* t997 = __capacity965;
  unsigned long t998 = *t997;
  unsigned long c999 = 1;
  unsigned long b1000 = t998 + c999;
  char* r1001 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r996, b1000);
  __retval967 = r1001;
  char* t1002 = __retval967;
  return t1002;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1003, char* v1004) {
bb1005:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1006;
  char* __p1007;
  this1006 = v1003;
  __p1007 = v1004;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1008 = this1006;
  char* t1009 = __p1007;
  t1008->_M_dataplus._M_p = t1009;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1010, unsigned long v1011) {
bb1012:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1013;
  unsigned long __capacity1014;
  this1013 = v1010;
  __capacity1014 = v1011;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1015 = this1013;
  unsigned long t1016 = __capacity1014;
  t1015->field2._M_allocated_capacity = t1016;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1017, unsigned long v1018, unsigned long v1019, char* v1020, unsigned long v1021) {
bb1022:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1023;
  unsigned long __pos1024;
  unsigned long __len11025;
  char* __s1026;
  unsigned long __len21027;
  unsigned long __how_much1028;
  unsigned long __new_capacity1029;
  char* __r1030;
  this1023 = v1017;
  __pos1024 = v1018;
  __len11025 = v1019;
  __s1026 = v1020;
  __len21027 = v1021;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1031 = this1023;
  unsigned long r1032 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t1031);
  unsigned long t1033 = __pos1024;
  unsigned long b1034 = r1032 - t1033;
  unsigned long t1035 = __len11025;
  unsigned long b1036 = b1034 - t1035;
  __how_much1028 = b1036;
  unsigned long r1037 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t1031);
  unsigned long t1038 = __len21027;
  unsigned long b1039 = r1037 + t1038;
  unsigned long t1040 = __len11025;
  unsigned long b1041 = b1039 - t1040;
  __new_capacity1029 = b1041;
  unsigned long r1042 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t1031);
  char* r1043 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1031, &__new_capacity1029, r1042);
  __r1030 = r1043;
    unsigned long t1044 = __pos1024;
    _Bool cast1045 = (_Bool)t1044;
    if (cast1045) {
      char* t1046 = __r1030;
      char* r1047 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1031);
      unsigned long t1048 = __pos1024;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1046, r1047, t1048);
    }
    char* t1049 = __s1026;
    _Bool cast1050 = (_Bool)t1049;
    _Bool ternary1051;
    if (cast1050) {
      unsigned long t1052 = __len21027;
      _Bool cast1053 = (_Bool)t1052;
      ternary1051 = (_Bool)cast1053;
    } else {
      _Bool c1054 = 0;
      ternary1051 = (_Bool)c1054;
    }
    if (ternary1051) {
      char* t1055 = __r1030;
      unsigned long t1056 = __pos1024;
      char* ptr1057 = &(t1055)[t1056];
      char* t1058 = __s1026;
      unsigned long t1059 = __len21027;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr1057, t1058, t1059);
    }
    unsigned long t1060 = __how_much1028;
    _Bool cast1061 = (_Bool)t1060;
    if (cast1061) {
      char* t1062 = __r1030;
      unsigned long t1063 = __pos1024;
      char* ptr1064 = &(t1062)[t1063];
      unsigned long t1065 = __len21027;
      char* ptr1066 = &(ptr1064)[t1065];
      char* r1067 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1031);
      unsigned long t1068 = __pos1024;
      char* ptr1069 = &(r1067)[t1068];
      unsigned long t1070 = __len11025;
      char* ptr1071 = &(ptr1069)[t1070];
      unsigned long t1072 = __how_much1028;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr1066, ptr1071, t1072);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1031);
  char* t1073 = __r1030;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1031, t1073);
  unsigned long t1074 = __new_capacity1029;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1031, t1074);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1075, unsigned long v1076, unsigned long v1077, char* v1078, unsigned long v1079) {
bb1080:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1081;
  unsigned long __pos1082;
  unsigned long __len11083;
  char* __s1084;
  unsigned long __len21085;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1086;
  unsigned long __old_size1087;
  unsigned long __new_size1088;
  this1081 = v1075;
  __pos1082 = v1076;
  __len11083 = v1077;
  __s1084 = v1078;
  __len21085 = v1079;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1089 = this1081;
  unsigned long t1090 = __len11083;
  unsigned long t1091 = __len21085;
  char* cast1092 = (char*)&(_str_3);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t1089, t1090, t1091, cast1092);
  unsigned long r1093 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1089);
  __old_size1087 = r1093;
  unsigned long t1094 = __old_size1087;
  unsigned long t1095 = __len21085;
  unsigned long b1096 = t1094 + t1095;
  unsigned long t1097 = __len11083;
  unsigned long b1098 = b1096 - t1097;
  __new_size1088 = b1098;
    unsigned long t1099 = __new_size1088;
    unsigned long r1100 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t1089);
    _Bool c1101 = ((t1099 <= r1100)) ? 1 : 0;
    if (c1101) {
      char* __p1102;
      unsigned long __how_much1103;
      char* r1104 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1089);
      unsigned long t1105 = __pos1082;
      char* ptr1106 = &(r1104)[t1105];
      __p1102 = ptr1106;
      unsigned long t1107 = __old_size1087;
      unsigned long t1108 = __pos1082;
      unsigned long b1109 = t1107 - t1108;
      unsigned long t1110 = __len11083;
      unsigned long b1111 = b1109 - t1110;
      __how_much1103 = b1111;
        _Bool r1112 = std__is_constant_evaluated();
        if (r1112) {
          char* __newp1113;
          struct std__allocator_char_* r1114 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1089);
          unsigned long t1115 = __new_size1088;
          char* r1116 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1114, t1115);
          __newp1113 = r1116;
          char* t1117 = __newp1113;
          char* r1118 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1089);
          unsigned long t1119 = __pos1082;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1117, r1118, t1119);
          char* t1120 = __newp1113;
          unsigned long t1121 = __pos1082;
          char* ptr1122 = &(t1120)[t1121];
          char* t1123 = __s1084;
          unsigned long t1124 = __len21085;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr1122, t1123, t1124);
          char* t1125 = __newp1113;
          unsigned long t1126 = __pos1082;
          char* ptr1127 = &(t1125)[t1126];
          unsigned long t1128 = __len21085;
          char* ptr1129 = &(ptr1127)[t1128];
          char* t1130 = __p1102;
          unsigned long t1131 = __len11083;
          char* ptr1132 = &(t1130)[t1131];
          unsigned long t1133 = __how_much1103;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr1129, ptr1132, t1133);
          char* r1134 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1089);
          char* t1135 = __newp1113;
          unsigned long t1136 = __new_size1088;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1134, t1135, t1136);
          struct std__allocator_char_* r1137 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1089);
          char* t1138 = __newp1113;
          unsigned long t1139 = __new_size1088;
          std__allocator_char___deallocate(r1137, t1138, t1139);
        } else {
            char* t1140 = __s1084;
            _Bool r1141 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(t1089, t1140);
            if (r1141) {
                unsigned long t1142 = __how_much1103;
                _Bool cast1143 = (_Bool)t1142;
                _Bool ternary1144;
                if (cast1143) {
                  unsigned long t1145 = __len11083;
                  unsigned long t1146 = __len21085;
                  _Bool c1147 = ((t1145 != t1146)) ? 1 : 0;
                  ternary1144 = (_Bool)c1147;
                } else {
                  _Bool c1148 = 0;
                  ternary1144 = (_Bool)c1148;
                }
                if (ternary1144) {
                  char* t1149 = __p1102;
                  unsigned long t1150 = __len21085;
                  char* ptr1151 = &(t1149)[t1150];
                  char* t1152 = __p1102;
                  unsigned long t1153 = __len11083;
                  char* ptr1154 = &(t1152)[t1153];
                  unsigned long t1155 = __how_much1103;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr1151, ptr1154, t1155);
                }
                unsigned long t1156 = __len21085;
                _Bool cast1157 = (_Bool)t1156;
                if (cast1157) {
                  char* t1158 = __p1102;
                  char* t1159 = __s1084;
                  unsigned long t1160 = __len21085;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1158, t1159, t1160);
                }
            } else {
              char* t1161 = __p1102;
              unsigned long t1162 = __len11083;
              char* t1163 = __s1084;
              unsigned long t1164 = __len21085;
              unsigned long t1165 = __how_much1103;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(t1089, t1161, t1162, t1163, t1164, t1165);
            }
        }
    } else {
      unsigned long t1166 = __pos1082;
      unsigned long t1167 = __len11083;
      char* t1168 = __s1084;
      unsigned long t1169 = __len21085;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t1089, t1166, t1167, t1168, t1169);
    }
  unsigned long t1170 = __new_size1088;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1089, t1170);
  __retval1086 = t1089;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1171 = __retval1086;
  return t1171;
}

// function: _ZSt12__niter_baseIPcET_S1_
char* char__std____niter_base_char__(char* v1172) {
bb1173:
  char* __it1174;
  char* __retval1175;
  __it1174 = v1172;
  char* t1176 = __it1174;
  __retval1175 = t1176;
  char* t1177 = __retval1175;
  return t1177;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignIPcvEERS4_T_S8_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_char___void_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1178, char* v1179, char* v1180) {
bb1181:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1182;
  char* __first1183;
  char* __last1184;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1185;
  this1182 = v1178;
  __first1183 = v1179;
  __last1184 = v1180;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1186 = this1182;
    unsigned long c1187 = 0;
    unsigned long r1188 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1186);
    char* t1189 = __first1183;
    char* r1190 = char__std____niter_base_char__(t1189);
    char* t1191 = __last1184;
    char* t1192 = __first1183;
    long diff1193 = t1191 - t1192;
    unsigned long cast1194 = (unsigned long)diff1193;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1195 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t1186, c1187, r1188, r1190, cast1194);
    __retval1185 = r1195;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1196 = __retval1185;
    return t1196;
  abort();
}

// function: _ZNKSt15basic_streambufIcSt11char_traitsIcEE5pbaseEv
char* std__basic_streambuf_char__std__char_traits_char_____pbase___const(struct std__basic_streambuf_char__std__char_traits_char__* v1197) {
bb1198:
  struct std__basic_streambuf_char__std__char_traits_char__* this1199;
  char* __retval1200;
  this1199 = v1197;
  struct std__basic_streambuf_char__std__char_traits_char__* t1201 = this1199;
  char* t1202 = t1201->_M_out_beg;
  __retval1200 = t1202;
  char* t1203 = __retval1200;
  return t1203;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_copy_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_copy_assign() {
bb1204:
  _Bool __retval1205;
  _Bool t1206 = _ZNSt17integral_constantIbLb0EE5valueE;
  __retval1205 = t1206;
  _Bool t1207 = __retval1205;
  return t1207;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE15_S_always_equalEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_always_equal() {
bb1208:
  _Bool __retval1209;
  _Bool t1210 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval1209 = t1210;
  _Bool t1211 = __retval1209;
  return t1211;
}

// function: _ZSteqRKSaIcES1_
_Bool std__operator__(struct std__allocator_char_* v1212, struct std__allocator_char_* v1213) {
bb1214:
  struct std__allocator_char_* unnamed1215;
  struct std__allocator_char_* unnamed1216;
  _Bool __retval1217;
  unnamed1215 = v1212;
  unnamed1216 = v1213;
  _Bool c1218 = 1;
  __retval1217 = c1218;
  _Bool t1219 = __retval1217;
  return t1219;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1220) {
bb1221:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1222;
  char* __retval1223;
  this1222 = v1220;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1224 = this1222;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1224);
  char* r1225 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t1224);
  __retval1223 = r1225;
  char* t1226 = __retval1223;
  return t1226;
}

// function: _ZSt15__alloc_on_copyISaIcEEvRT_RKS1_
void void_std____alloc_on_copy_std__allocator_char___(struct std__allocator_char_* v1227, struct std__allocator_char_* v1228) {
bb1229:
  struct std__allocator_char_* __one1230;
  struct std__allocator_char_* __two1231;
  __one1230 = v1227;
  __two1231 = v1228;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1232, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1233) {
bb1234:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1235;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1236;
  this1235 = v1232;
  __str1236 = v1233;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1237 = this1235;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1238 = __str1236;
    _Bool c1239 = ((t1237 != t1238)) ? 1 : 0;
    if (c1239) {
      unsigned long __rsize1240;
      unsigned long __capacity1241;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1242 = __str1236;
      unsigned long r1243 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t1242);
      __rsize1240 = r1243;
      unsigned long r1244 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t1237);
      __capacity1241 = r1244;
        unsigned long t1245 = __rsize1240;
        unsigned long t1246 = __capacity1241;
        _Bool c1247 = ((t1245 > t1246)) ? 1 : 0;
        if (c1247) {
          unsigned long __new_capacity1248;
          char* __tmp1249;
          unsigned long t1250 = __rsize1240;
          __new_capacity1248 = t1250;
          unsigned long t1251 = __capacity1241;
          char* r1252 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1237, &__new_capacity1248, t1251);
          __tmp1249 = r1252;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1237);
          char* t1253 = __tmp1249;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1237, t1253);
          unsigned long t1254 = __new_capacity1248;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1237, t1254);
        }
        unsigned long t1255 = __rsize1240;
        _Bool cast1256 = (_Bool)t1255;
        if (cast1256) {
          char* r1257 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1237);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1258 = __str1236;
          char* r1259 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1258);
          unsigned long t1260 = __rsize1240;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1257, r1259, t1260);
        }
      unsigned long t1261 = __rsize1240;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1237, t1261);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignERKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1262, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1263) {
bb1264:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1265;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1266;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1267;
  this1265 = v1262;
  __str1266 = v1263;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1268 = this1265;
    _Bool r1269 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_copy_assign();
    if (r1269) {
        _Bool r1270 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_always_equal();
        _Bool u1271 = !r1270;
        _Bool ternary1272;
        if (u1271) {
          _Bool r1273 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1268);
          _Bool u1274 = !r1273;
          ternary1272 = (_Bool)u1274;
        } else {
          _Bool c1275 = 0;
          ternary1272 = (_Bool)c1275;
        }
        _Bool ternary1276;
        if (ternary1272) {
          struct std__allocator_char_* r1277 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1268);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1278 = __str1266;
          struct std__allocator_char_* r1279 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1278);
          _Bool r1280 = std__operator__(r1277, r1279);
          _Bool u1281 = !r1280;
          ternary1276 = (_Bool)u1281;
        } else {
          _Bool c1282 = 0;
          ternary1276 = (_Bool)c1282;
        }
        if (ternary1276) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1283 = __str1266;
            unsigned long r1284 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1283);
            unsigned long c1285 = 15;
            _Bool c1286 = ((r1284 <= c1285)) ? 1 : 0;
            if (c1286) {
              unsigned long t1287 = t1268->field2._M_allocated_capacity;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1268, t1287);
              char* r1288 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t1268);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1268, r1288);
              unsigned long c1289 = 0;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1268, c1289);
            } else {
              unsigned long __len1290;
              struct std__allocator_char_ __alloc1291;
              char* __ptr1292;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1293 = __str1266;
              unsigned long r1294 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1293);
              __len1290 = r1294;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1295 = __str1266;
              struct std__allocator_char_* r1296 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1295);
              std__allocator_char___allocator(&__alloc1291, r1296);
              unsigned long t1297 = __len1290;
              unsigned long c1298 = 1;
              unsigned long b1299 = t1297 + c1298;
              char* r1300 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(&__alloc1291, b1299);
              __ptr1292 = r1300;
              unsigned long t1301 = t1268->field2._M_allocated_capacity;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1268, t1301);
              char* t1302 = __ptr1292;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1268, t1302);
              unsigned long t1303 = __len1290;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1268, t1303);
              unsigned long t1304 = __len1290;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1268, t1304);
            }
        }
      struct std__allocator_char_* r1305 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1268);
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1306 = __str1266;
      struct std__allocator_char_* r1307 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1306);
      void_std____alloc_on_copy_std__allocator_char___(r1305, r1307);
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1308 = __str1266;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t1268, t1308);
  __retval1267 = t1268;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1309 = __retval1267;
  return t1309;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSERKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1310, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1311) {
bb1312:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1313;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1314;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1315;
  this1313 = v1310;
  __str1314 = v1311;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1316 = this1313;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1317 = __str1314;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1318 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(t1316, t1317);
  __retval1315 = r1318;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1319 = __retval1315;
  return t1319;
}

// function: _ZNKRSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEE3strEv
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char_____str___const__(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* v1320) {
bb1321:
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* this1322;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval1323;
  _Bool nrvo1324;
  struct std__allocator_char_ ref_tmp01325;
  this1322 = v1320;
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* t1326 = this1322;
  _Bool c1327 = 0;
  nrvo1324 = c1327;
  struct std__allocator_char_ r1328 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(&t1326->_M_string);
  ref_tmp01325 = r1328;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&__retval1323, &ref_tmp01325);
  {
    std__allocator_char____allocator(&ref_tmp01325);
  }
      char* __hi1329;
      char* r1330 = std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______M_high_mark___const(t1326);
      __hi1329 = r1330;
      char* t1331 = __hi1329;
      _Bool cast1332 = (_Bool)t1331;
      if (cast1332) {
        struct std__basic_streambuf_char__std__char_traits_char__* base1333 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t1326 + 0);
        char* r1334 = std__basic_streambuf_char__std__char_traits_char_____pbase___const(base1333);
        char* t1335 = __hi1329;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1336 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_char___void_(&__retval1323, r1334, t1335);
      } else {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1337 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&__retval1323, &t1326->_M_string);
      }
    _Bool c1338 = 1;
    nrvo1324 = c1338;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1339 = __retval1323;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ret_val1340 = t1339;
    {
      _Bool t1341 = nrvo1324;
      _Bool u1342 = !t1341;
      if (u1342) {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&__retval1323);
      }
    }
    return ret_val1340;
  abort();
}

// function: _ZNKRSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEE3strEv
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____str___const__(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* v1343) {
bb1344:
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* this1345;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval1346;
  this1345 = v1343;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* t1347 = this1345;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1348 = std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char_____str___const__(&t1347->_M_stringbuf);
  __retval1346 = r1348;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1349 = __retval1346;
  return t1349;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1350) {
bb1351:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1352;
  this1352 = v1350;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1353 = this1352;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1353);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1353->_M_dataplus);
  }
  return;
}

// function: _ZNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream_2(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* v1354, void** v1355) {
bb1356:
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* this1357;
  void** vtt1358;
  this1357 = v1354;
  vtt1358 = v1355;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* t1359 = this1357;
  void** t1360 = vtt1358;
    {
      std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______basic_stringbuf(&t1359->_M_stringbuf);
    }
  {
    struct std__basic_iostream_char__std__char_traits_char__* base1361 = (struct std__basic_iostream_char__std__char_traits_char__*)((char *)t1359 + 0);
    static void *vtt_slot1362 = 0;
    void** vtt1363 = (void**)&vtt_slot1362;
    std__basic_iostream_char__std__char_traits_char______basic_iostream(base1361, vtt1363);
  }
  return;
}

// function: _ZNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEED1Ev
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* v1364) {
bb1365:
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* this1366;
  this1366 = v1364;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* t1367 = this1366;
    static void *vtt_slot1368 = 0;
    void** vtt1369 = (void**)&vtt_slot1368;
    std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream_2(t1367, vtt1369);
  {
    struct std__basic_ios_char__std__char_traits_char__* base1370 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1367 + 128);
    std__basic_ios_char__std__char_traits_char______basic_ios(base1370);
  }
  return;
}

// function: main
int main() {
bb1371:
  int __retval1372;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__ oss1373;
  _Bool val1374;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp01375;
  int c1376 = 0;
  __retval1372 = c1376;
  std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____basic_stringstream(&oss1373);
    _Bool c1377 = 1;
    val1374 = c1377;
    struct std__basic_ostream_char__std__char_traits_char__* base1378 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(oss1373) + 16);
    _Bool t1379 = val1374;
    struct std__basic_ostream_char__std__char_traits_char__* r1380 = std__ostream__operator__(base1378, t1379);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1381 = std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____str___const__(&oss1373);
    ref_tmp01375 = r1381;
      char* cast1382 = (char*)&(_str);
      _Bool r1383 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&ref_tmp01375, cast1382);
      if (r1383) {
      } else {
        char* cast1384 = (char*)&(_str_1);
        char* c1385 = _str_2;
        unsigned int c1386 = 21;
        char* cast1387 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast1384, c1385, c1386, cast1387);
      }
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp01375);
    }
    int c1388 = 0;
    __retval1372 = c1388;
    int t1389 = __retval1372;
    int ret_val1390 = t1389;
    {
      std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(&oss1373);
    }
    return ret_val1390;
  int t1391 = __retval1372;
  return t1391;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1392) {
bb1393:
  char* __r1394;
  char* __retval1395;
  __r1394 = v1392;
  char* t1396 = __r1394;
  __retval1395 = t1396;
  char* t1397 = __retval1395;
  return t1397;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1398) {
bb1399:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1400;
  char* __retval1401;
  this1400 = v1398;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1402 = this1400;
  char* cast1403 = (char*)&(t1402->field2._M_local_buf);
  char* r1404 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1403);
  __retval1401 = r1404;
  char* t1405 = __retval1401;
  return t1405;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1406) {
bb1407:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1408;
  _Bool __retval1409;
  this1408 = v1406;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1410 = this1408;
    char* r1411 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1410);
    char* r1412 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1410);
    _Bool c1413 = ((r1411 == r1412)) ? 1 : 0;
    if (c1413) {
        unsigned long t1414 = t1410->_M_string_length;
        unsigned long c1415 = 15;
        _Bool c1416 = ((t1414 > c1415)) ? 1 : 0;
        if (c1416) {
          __builtin_unreachable();
        }
      _Bool c1417 = 1;
      __retval1409 = c1417;
      _Bool t1418 = __retval1409;
      return t1418;
    }
  _Bool c1419 = 0;
  __retval1409 = c1419;
  _Bool t1420 = __retval1409;
  return t1420;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1421, char* v1422, unsigned long v1423) {
bb1424:
  struct std____new_allocator_char_* this1425;
  char* __p1426;
  unsigned long __n1427;
  this1425 = v1421;
  __p1426 = v1422;
  __n1427 = v1423;
  struct std____new_allocator_char_* t1428 = this1425;
    unsigned long c1429 = 1;
    unsigned long c1430 = 16;
    _Bool c1431 = ((c1429 > c1430)) ? 1 : 0;
    if (c1431) {
      char* t1432 = __p1426;
      void* cast1433 = (void*)t1432;
      unsigned long t1434 = __n1427;
      unsigned long c1435 = 1;
      unsigned long b1436 = t1434 * c1435;
      unsigned long c1437 = 1;
      operator_delete_3(cast1433, b1436, c1437);
      return;
    }
  char* t1438 = __p1426;
  void* cast1439 = (void*)t1438;
  unsigned long t1440 = __n1427;
  unsigned long c1441 = 1;
  unsigned long b1442 = t1440 * c1441;
  operator_delete_2(cast1439, b1442);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1443, char* v1444, unsigned long v1445) {
bb1446:
  struct std__allocator_char_* this1447;
  char* __p1448;
  unsigned long __n1449;
  this1447 = v1443;
  __p1448 = v1444;
  __n1449 = v1445;
  struct std__allocator_char_* t1450 = this1447;
    _Bool r1451 = std____is_constant_evaluated();
    if (r1451) {
      char* t1452 = __p1448;
      void* cast1453 = (void*)t1452;
      operator_delete(cast1453);
      return;
    }
  struct std____new_allocator_char_* base1454 = (struct std____new_allocator_char_*)((char *)t1450 + 0);
  char* t1455 = __p1448;
  unsigned long t1456 = __n1449;
  std____new_allocator_char___deallocate(base1454, t1455, t1456);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1457, char* v1458, unsigned long v1459) {
bb1460:
  struct std__allocator_char_* __a1461;
  char* __p1462;
  unsigned long __n1463;
  __a1461 = v1457;
  __p1462 = v1458;
  __n1463 = v1459;
  struct std__allocator_char_* t1464 = __a1461;
  char* t1465 = __p1462;
  unsigned long t1466 = __n1463;
  std__allocator_char___deallocate(t1464, t1465, t1466);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1467) {
bb1468:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1469;
  struct std__allocator_char_* __retval1470;
  this1469 = v1467;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1471 = this1469;
  struct std__allocator_char_* base1472 = (struct std__allocator_char_*)((char *)&(t1471->_M_dataplus) + 0);
  __retval1470 = base1472;
  struct std__allocator_char_* t1473 = __retval1470;
  return t1473;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1474, unsigned long v1475) {
bb1476:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1477;
  unsigned long __size1478;
  this1477 = v1474;
  __size1478 = v1475;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1479 = this1477;
  struct std__allocator_char_* r1480 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1479);
  char* r1481 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1479);
  unsigned long t1482 = __size1478;
  unsigned long c1483 = 1;
  unsigned long b1484 = t1482 + c1483;
  std__allocator_traits_std__allocator_char_____deallocate(r1480, r1481, b1484);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1485) {
bb1486:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1487;
  this1487 = v1485;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1488 = this1487;
    _Bool r1489 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1488);
    _Bool u1490 = !r1489;
    if (u1490) {
      unsigned long t1491 = t1488->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1488, t1491);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1492) {
bb1493:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1494;
  this1494 = v1492;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1495 = this1494;
  {
    struct std__allocator_char_* base1496 = (struct std__allocator_char_*)((char *)t1495 + 0);
    std__allocator_char____allocator(base1496);
  }
  return;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEEC2Ev
void std__basic_streambuf_char__std__char_traits_char_____basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v1497) {
bb1498:
  struct std__basic_streambuf_char__std__char_traits_char__* this1499;
  this1499 = v1497;
  struct std__basic_streambuf_char__std__char_traits_char__* t1500 = this1499;
  void* v1501 = (void*)&_ZTVSt15basic_streambufIcSt11char_traitsIcEE[2];
  void** v1502 = (void**)t1500;
  *(void**)(v1502) = (void*)v1501;
  char* c1503 = ((void*)0);
  t1500->_M_in_beg = c1503;
  char* c1504 = ((void*)0);
  t1500->_M_in_cur = c1504;
  char* c1505 = ((void*)0);
  t1500->_M_in_end = c1505;
  char* c1506 = ((void*)0);
  t1500->_M_out_beg = c1506;
  char* c1507 = ((void*)0);
  t1500->_M_out_cur = c1507;
  char* c1508 = ((void*)0);
  t1500->_M_out_end = c1508;
  std__locale__locale(&t1500->_M_buf_locale);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1509) {
bb1510:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1511;
  struct std__allocator_char_ ref_tmp01512;
  this1511 = v1509;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1513 = this1511;
  char* r1514 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t1513);
  std__allocator_char___allocator_2(&ref_tmp01512);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t1513->_M_dataplus, r1514, &ref_tmp01512);
  {
    std__allocator_char____allocator(&ref_tmp01512);
  }
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1513);
    unsigned long c1515 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1513, c1515);
  return;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v1516) {
bb1517:
  struct std__basic_streambuf_char__std__char_traits_char__* this1518;
  this1518 = v1516;
  struct std__basic_streambuf_char__std__char_traits_char__* t1519 = this1518;
  {
    std__locale___locale(&t1519->_M_buf_locale);
  }
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1520) {
bb1521:
  char* __r1522;
  char* __retval1523;
  __r1522 = v1520;
  char* t1524 = __r1522;
  __retval1523 = t1524;
  char* t1525 = __retval1523;
  return t1525;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1526) {
bb1527:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1528;
  char* __retval1529;
  this1528 = v1526;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1530 = this1528;
  char* cast1531 = (char*)&(t1530->field2._M_local_buf);
  char* r1532 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1531);
  __retval1529 = r1532;
  char* t1533 = __retval1529;
  return t1533;
}

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v1534) {
bb1535:
  struct std__allocator_char_* this1536;
  this1536 = v1534;
  struct std__allocator_char_* t1537 = this1536;
  struct std____new_allocator_char_* base1538 = (struct std____new_allocator_char_*)((char *)t1537 + 0);
  std____new_allocator_char_____new_allocator_2(base1538);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1539, char* v1540, struct std__allocator_char_* v1541) {
bb1542:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1543;
  char* __dat1544;
  struct std__allocator_char_* __a1545;
  this1543 = v1539;
  __dat1544 = v1540;
  __a1545 = v1541;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1546 = this1543;
  struct std__allocator_char_* base1547 = (struct std__allocator_char_*)((char *)t1546 + 0);
  struct std__allocator_char_* t1548 = __a1545;
  std__allocator_char___allocator(base1547, t1548);
    char* t1549 = __dat1544;
    t1546->_M_p = t1549;
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v1550) {
bb1551:
  struct std__allocator_char_* this1552;
  this1552 = v1550;
  struct std__allocator_char_* t1553 = this1552;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1554:
  _Bool __retval1555;
    _Bool c1556 = 0;
    __retval1555 = c1556;
    _Bool t1557 = __retval1555;
    return t1557;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1558) {
bb1559:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1560;
  this1560 = v1558;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1561 = this1560;
    _Bool r1562 = std__is_constant_evaluated();
    if (r1562) {
        unsigned long __i1563;
        unsigned long c1564 = 0;
        __i1563 = c1564;
        while (1) {
          unsigned long t1566 = __i1563;
          unsigned long c1567 = 15;
          _Bool c1568 = ((t1566 <= c1567)) ? 1 : 0;
          if (!c1568) break;
          char c1569 = 0;
          unsigned long t1570 = __i1563;
          t1561->field2._M_local_buf[t1570] = c1569;
        for_step1565: ;
          unsigned long t1571 = __i1563;
          unsigned long u1572 = t1571 + 1;
          __i1563 = u1572;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1573, unsigned long v1574) {
bb1575:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1576;
  unsigned long __length1577;
  this1576 = v1573;
  __length1577 = v1574;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1578 = this1576;
  unsigned long t1579 = __length1577;
  t1578->_M_string_length = t1579;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1580, char* v1581) {
bb1582:
  char* __location1583;
  char* __args1584;
  char* __retval1585;
  void* __loc1586;
  __location1583 = v1580;
  __args1584 = v1581;
  char* t1587 = __location1583;
  void* cast1588 = (void*)t1587;
  __loc1586 = cast1588;
    void* t1589 = __loc1586;
    char* cast1590 = (char*)t1589;
    char* t1591 = __args1584;
    char t1592 = *t1591;
    *cast1590 = t1592;
    __retval1585 = cast1590;
    char* t1593 = __retval1585;
    return t1593;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1594, char* v1595) {
bb1596:
  char* __c11597;
  char* __c21598;
  __c11597 = v1594;
  __c21598 = v1595;
    _Bool r1599 = std____is_constant_evaluated();
    if (r1599) {
      char* t1600 = __c11597;
      char* t1601 = __c21598;
      char* r1602 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1600, t1601);
    } else {
      char* t1603 = __c21598;
      char t1604 = *t1603;
      char* t1605 = __c11597;
      *t1605 = t1604;
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1606, unsigned long v1607) {
bb1608:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1609;
  unsigned long __n1610;
  char ref_tmp01611;
  this1609 = v1606;
  __n1610 = v1607;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1612 = this1609;
  unsigned long t1613 = __n1610;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1612, t1613);
  unsigned long t1614 = __n1610;
  char* r1615 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1612);
  char* ptr1616 = &(r1615)[t1614];
  char c1617 = 0;
  ref_tmp01611 = c1617;
  std__char_traits_char___assign(ptr1616, &ref_tmp01611);
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1618) {
bb1619:
  struct std____new_allocator_char_* this1620;
  this1620 = v1618;
  struct std____new_allocator_char_* t1621 = this1620;
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1622, struct std____new_allocator_char_* v1623) {
bb1624:
  struct std____new_allocator_char_* this1625;
  struct std____new_allocator_char_* unnamed1626;
  this1625 = v1622;
  unnamed1626 = v1623;
  struct std____new_allocator_char_* t1627 = this1625;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1628, char* v1629, struct std__allocator_char_* v1630) {
bb1631:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1632;
  char* __dat1633;
  struct std__allocator_char_* __a1634;
  this1632 = v1628;
  __dat1633 = v1629;
  __a1634 = v1630;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1635 = this1632;
  struct std__allocator_char_* base1636 = (struct std__allocator_char_*)((char *)t1635 + 0);
  struct std__allocator_char_* t1637 = __a1634;
  std__allocator_char___allocator(base1636, t1637);
    char* t1638 = __dat1633;
    t1635->_M_p = t1638;
  return;
}

