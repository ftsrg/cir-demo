extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) long __VERIFIER_virtual_call_long_char_ptr_long(void* __obj, int __slot, char* __a0, long __a1) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((long(*)(void*, char*, long))__fn)(__obj, __a0, __a1);
}

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
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
extern void *_ZTVNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void *_ZTVNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt15basic_streambufIcSt11char_traitsIcEE[];
char _str_1[25] = "basic_string::_M_replace";
char _str_2[24] = "basic_string::_M_create";
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
struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____rdbuf___const(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* p0);
long std__basic_streambuf_char__std__char_traits_char_____sputn(struct std__basic_streambuf_char__std__char_traits_char__* p0, char* p1, long p2);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std__allocator_char_* p1);
char* std__basic_streambuf_char__std__char_traits_char_____pptr___const(struct std__basic_streambuf_char__std__char_traits_char__* p0);
char* std__basic_streambuf_char__std__char_traits_char_____egptr___const(struct std__basic_streambuf_char__std__char_traits_char__* p0);
char* std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______M_high_mark___const(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
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
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
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
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream_2(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* p0, void** p1);
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* p0);
int main();
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std____is_constant_evaluated();
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

// function: _ZNKSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEE5rdbufEv
struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____rdbuf___const(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* v221) {
bb222:
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* this223;
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* __retval224;
  this223 = v221;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* t225 = this223;
  __retval224 = &t225->_M_stringbuf;
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* t226 = __retval224;
  return t226;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEE5sputnEPKcl
long std__basic_streambuf_char__std__char_traits_char_____sputn(struct std__basic_streambuf_char__std__char_traits_char__* v227, char* v228, long v229) {
bb230:
  struct std__basic_streambuf_char__std__char_traits_char__* this231;
  char* __s232;
  long __n233;
  long __retval234;
  this231 = v227;
  __s232 = v228;
  __n233 = v229;
  struct std__basic_streambuf_char__std__char_traits_char__* t235 = this231;
  char* t236 = __s232;
  long t237 = __n233;
  void** v238 = (void**)t235;
  void* v239 = *((void**)v238);
  long vcall242 = (long)__VERIFIER_virtual_call_long_char_ptr_long(t235, 12, t236, t237);
  __retval234 = vcall242;
  long t243 = __retval234;
  return t243;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v244) {
bb245:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this246;
  char* __retval247;
  this246 = v244;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t248 = this246;
  char* r249 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t248);
  __retval247 = r249;
  char* t250 = __retval247;
  return t250;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v251, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v252) {
bb253:
  struct std__basic_ostream_char__std__char_traits_char__* __os254;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str255;
  struct std__basic_ostream_char__std__char_traits_char__* __retval256;
  __os254 = v251;
  __str255 = v252;
  struct std__basic_ostream_char__std__char_traits_char__* t257 = __os254;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t258 = __str255;
  char* r259 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t258);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t260 = __str255;
  unsigned long r261 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t260);
  long cast262 = (long)r261;
  struct std__basic_ostream_char__std__char_traits_char__* r263 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t257, r259, cast262);
  __retval256 = r263;
  struct std__basic_ostream_char__std__char_traits_char__* t264 = __retval256;
  return t264;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v265) {
bb266:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this267;
  struct std__allocator_char_* __retval268;
  this267 = v265;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t269 = this267;
  struct std__allocator_char_* base270 = (struct std__allocator_char_*)((char *)&(t269->_M_dataplus) + 0);
  __retval268 = base270;
  struct std__allocator_char_* t271 = __retval268;
  return t271;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v272, struct std__allocator_char_* v273) {
bb274:
  struct std__allocator_char_* this275;
  struct std__allocator_char_* __a276;
  this275 = v272;
  __a276 = v273;
  struct std__allocator_char_* t277 = this275;
  struct std____new_allocator_char_* base278 = (struct std____new_allocator_char_*)((char *)t277 + 0);
  struct std__allocator_char_* t279 = __a276;
  struct std____new_allocator_char_* base280 = (struct std____new_allocator_char_*)((char *)t279 + 0);
  std____new_allocator_char_____new_allocator(base278, base280);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13get_allocatorEv
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v281) {
bb282:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this283;
  struct std__allocator_char_ __retval284;
  this283 = v281;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t285 = this283;
  struct std__allocator_char_* r286 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t285);
  std__allocator_char___allocator(&__retval284, r286);
  struct std__allocator_char_ t287 = __retval284;
  return t287;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v288, struct std__allocator_char_* v289) {
bb290:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this291;
  struct std__allocator_char_* __a292;
  this291 = v288;
  __a292 = v289;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t293 = this291;
  char* r294 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t293);
  struct std__allocator_char_* t295 = __a292;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t293->_M_dataplus, r294, t295);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t293);
    unsigned long c296 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t293, c296);
  return;
}

// function: _ZNKSt15basic_streambufIcSt11char_traitsIcEE4pptrEv
char* std__basic_streambuf_char__std__char_traits_char_____pptr___const(struct std__basic_streambuf_char__std__char_traits_char__* v297) {
bb298:
  struct std__basic_streambuf_char__std__char_traits_char__* this299;
  char* __retval300;
  this299 = v297;
  struct std__basic_streambuf_char__std__char_traits_char__* t301 = this299;
  char* t302 = t301->_M_out_cur;
  __retval300 = t302;
  char* t303 = __retval300;
  return t303;
}

// function: _ZNKSt15basic_streambufIcSt11char_traitsIcEE5egptrEv
char* std__basic_streambuf_char__std__char_traits_char_____egptr___const(struct std__basic_streambuf_char__std__char_traits_char__* v304) {
bb305:
  struct std__basic_streambuf_char__std__char_traits_char__* this306;
  char* __retval307;
  this306 = v304;
  struct std__basic_streambuf_char__std__char_traits_char__* t308 = this306;
  char* t309 = t308->_M_in_end;
  __retval307 = t309;
  char* t310 = __retval307;
  return t310;
}

// function: _ZNKSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEE12_M_high_markEv
char* std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______M_high_mark___const(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* v311) {
bb312:
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* this313;
  char* __retval314;
  this313 = v311;
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* t315 = this313;
    char* __pptr316;
    struct std__basic_streambuf_char__std__char_traits_char__* base317 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t315 + 0);
    char* r318 = std__basic_streambuf_char__std__char_traits_char_____pptr___const(base317);
    __pptr316 = r318;
    char* t319 = __pptr316;
    _Bool cast320 = (_Bool)t319;
    if (cast320) {
      char* __egptr321;
      struct std__basic_streambuf_char__std__char_traits_char__* base322 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t315 + 0);
      char* r323 = std__basic_streambuf_char__std__char_traits_char_____egptr___const(base322);
      __egptr321 = r323;
        char* t324 = __egptr321;
        _Bool cast325 = (_Bool)t324;
        _Bool u326 = !cast325;
        _Bool ternary327;
        if (u326) {
          _Bool c328 = 1;
          ternary327 = (_Bool)c328;
        } else {
          char* t329 = __pptr316;
          char* t330 = __egptr321;
          _Bool c331 = ((t329 > t330)) ? 1 : 0;
          ternary327 = (_Bool)c331;
        }
        if (ternary327) {
          char* t332 = __pptr316;
          __retval314 = t332;
          char* t333 = __retval314;
          return t333;
        } else {
          char* t334 = __egptr321;
          __retval314 = t334;
          char* t335 = __retval314;
          return t335;
        }
    }
  char* c336 = ((void*)0);
  __retval314 = c336;
  char* t337 = __retval314;
  return t337;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v338) {
bb339:
  struct std__allocator_char_* __a340;
  unsigned long __retval341;
  __a340 = v338;
  unsigned long c342 = -1;
  unsigned long c343 = 1;
  unsigned long b344 = c342 / c343;
  __retval341 = b344;
  unsigned long t345 = __retval341;
  return t345;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v346, unsigned long* v347) {
bb348:
  unsigned long* __a349;
  unsigned long* __b350;
  unsigned long* __retval351;
  __a349 = v346;
  __b350 = v347;
    unsigned long* t352 = __b350;
    unsigned long t353 = *t352;
    unsigned long* t354 = __a349;
    unsigned long t355 = *t354;
    _Bool c356 = ((t353 < t355)) ? 1 : 0;
    if (c356) {
      unsigned long* t357 = __b350;
      __retval351 = t357;
      unsigned long* t358 = __retval351;
      return t358;
    }
  unsigned long* t359 = __a349;
  __retval351 = t359;
  unsigned long* t360 = __retval351;
  return t360;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v361) {
bb362:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this363;
  unsigned long __retval364;
  unsigned long __diffmax365;
  unsigned long __allocmax366;
  this363 = v361;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t367 = this363;
  unsigned long c368 = 9223372036854775807;
  __diffmax365 = c368;
  struct std__allocator_char_* r369 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t367);
  unsigned long r370 = std__allocator_traits_std__allocator_char_____max_size(r369);
  __allocmax366 = r370;
  unsigned long* r371 = unsigned_long_const__std__min_unsigned_long_(&__diffmax365, &__allocmax366);
  unsigned long t372 = *r371;
  unsigned long c373 = 1;
  unsigned long b374 = t372 - c373;
  __retval364 = b374;
  unsigned long t375 = __retval364;
  return t375;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v376, unsigned long v377, unsigned long v378, char* v379) {
bb380:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this381;
  unsigned long __n1382;
  unsigned long __n2383;
  char* __s384;
  this381 = v376;
  __n1382 = v377;
  __n2383 = v378;
  __s384 = v379;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t385 = this381;
    unsigned long r386 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t385);
    unsigned long r387 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t385);
    unsigned long t388 = __n1382;
    unsigned long b389 = r387 - t388;
    unsigned long b390 = r386 - b389;
    unsigned long t391 = __n2383;
    _Bool c392 = ((b390 < t391)) ? 1 : 0;
    if (c392) {
      char* t393 = __s384;
      std____throw_length_error(t393);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v394) {
bb395:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this396;
  unsigned long __retval397;
  unsigned long __sz398;
  this396 = v394;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t399 = this396;
  _Bool r400 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t399);
  unsigned long ternary401;
  if (r400) {
    unsigned long c402 = 15;
    ternary401 = (unsigned long)c402;
  } else {
    unsigned long t403 = t399->field2._M_allocated_capacity;
    ternary401 = (unsigned long)t403;
  }
  __sz398 = ternary401;
    unsigned long t404 = __sz398;
    unsigned long c405 = 15;
    _Bool c406 = ((t404 < c405)) ? 1 : 0;
    _Bool ternary407;
    if (c406) {
      _Bool c408 = 1;
      ternary407 = (_Bool)c408;
    } else {
      unsigned long t409 = __sz398;
      unsigned long r410 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t399);
      _Bool c411 = ((t409 > r410)) ? 1 : 0;
      ternary407 = (_Bool)c411;
    }
    if (ternary407) {
      __builtin_unreachable();
    }
  unsigned long t412 = __sz398;
  __retval397 = t412;
  unsigned long t413 = __retval397;
  return t413;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v414) {
bb415:
  struct std____new_allocator_char_* this416;
  unsigned long __retval417;
  this416 = v414;
  struct std____new_allocator_char_* t418 = this416;
  unsigned long c419 = 9223372036854775807;
  unsigned long c420 = 1;
  unsigned long b421 = c419 / c420;
  __retval417 = b421;
  unsigned long t422 = __retval417;
  return t422;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v423, unsigned long v424, void* v425) {
bb426:
  struct std____new_allocator_char_* this427;
  unsigned long __n428;
  void* unnamed429;
  char* __retval430;
  this427 = v423;
  __n428 = v424;
  unnamed429 = v425;
  struct std____new_allocator_char_* t431 = this427;
    unsigned long t432 = __n428;
    unsigned long r433 = std____new_allocator_char____M_max_size___const(t431);
    _Bool c434 = ((t432 > r433)) ? 1 : 0;
    if (c434) {
        unsigned long t435 = __n428;
        unsigned long c436 = -1;
        unsigned long c437 = 1;
        unsigned long b438 = c436 / c437;
        _Bool c439 = ((t435 > b438)) ? 1 : 0;
        if (c439) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c440 = 1;
    unsigned long c441 = 16;
    _Bool c442 = ((c440 > c441)) ? 1 : 0;
    if (c442) {
      unsigned long __al443;
      unsigned long c444 = 1;
      __al443 = c444;
      unsigned long t445 = __n428;
      unsigned long c446 = 1;
      unsigned long b447 = t445 * c446;
      unsigned long t448 = __al443;
      void* r449 = operator_new_2(b447, t448);
      char* cast450 = (char*)r449;
      __retval430 = cast450;
      char* t451 = __retval430;
      return t451;
    }
  unsigned long t452 = __n428;
  unsigned long c453 = 1;
  unsigned long b454 = t452 * c453;
  void* r455 = operator_new(b454);
  char* cast456 = (char*)r455;
  __retval430 = cast456;
  char* t457 = __retval430;
  return t457;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v458, unsigned long v459) {
bb460:
  struct std__allocator_char_* this461;
  unsigned long __n462;
  char* __retval463;
  this461 = v458;
  __n462 = v459;
  struct std__allocator_char_* t464 = this461;
    _Bool r465 = std____is_constant_evaluated();
    if (r465) {
        unsigned long t466 = __n462;
        unsigned long c467 = 1;
        unsigned long ovr468;
        _Bool ovf469 = __builtin_mul_overflow(t466, c467, &ovr468);
        __n462 = ovr468;
        if (ovf469) {
          std____throw_bad_array_new_length();
        }
      unsigned long t470 = __n462;
      void* r471 = operator_new(t470);
      char* cast472 = (char*)r471;
      __retval463 = cast472;
      char* t473 = __retval463;
      return t473;
    }
  struct std____new_allocator_char_* base474 = (struct std____new_allocator_char_*)((char *)t464 + 0);
  unsigned long t475 = __n462;
  void* c476 = ((void*)0);
  char* r477 = std____new_allocator_char___allocate(base474, t475, c476);
  __retval463 = r477;
  char* t478 = __retval463;
  return t478;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v479, unsigned long v480) {
bb481:
  struct std__allocator_char_* __a482;
  unsigned long __n483;
  char* __retval484;
  __a482 = v479;
  __n483 = v480;
  struct std__allocator_char_* t485 = __a482;
  unsigned long t486 = __n483;
  char* r487 = std__allocator_char___allocate(t485, t486);
  __retval484 = r487;
  char* t488 = __retval484;
  return t488;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v489, unsigned long v490) {
bb491:
  struct std__allocator_char_* __a492;
  unsigned long __n493;
  char* __retval494;
  char* __p495;
  __a492 = v489;
  __n493 = v490;
  struct std__allocator_char_* t496 = __a492;
  unsigned long t497 = __n493;
  char* r498 = std__allocator_traits_std__allocator_char_____allocate(t496, t497);
  __p495 = r498;
  char* t499 = __p495;
  __retval494 = t499;
  char* t500 = __retval494;
  return t500;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v501, char* v502, unsigned long v503) {
bb504:
  char* __s1505;
  char* __s2506;
  unsigned long __n507;
  char* __retval508;
  __s1505 = v501;
  __s2506 = v502;
  __n507 = v503;
    unsigned long t509 = __n507;
    unsigned long c510 = 0;
    _Bool c511 = ((t509 == c510)) ? 1 : 0;
    if (c511) {
      char* t512 = __s1505;
      __retval508 = t512;
      char* t513 = __retval508;
      return t513;
    }
    _Bool r514 = std____is_constant_evaluated();
    if (r514) {
        unsigned long __i515;
        unsigned long c516 = 0;
        __i515 = c516;
        while (1) {
          unsigned long t518 = __i515;
          unsigned long t519 = __n507;
          _Bool c520 = ((t518 < t519)) ? 1 : 0;
          if (!c520) break;
          char* t521 = __s1505;
          unsigned long t522 = __i515;
          char* ptr523 = &(t521)[t522];
          unsigned long t524 = __i515;
          char* t525 = __s2506;
          char* ptr526 = &(t525)[t524];
          char* r527 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr523, ptr526);
        for_step517: ;
          unsigned long t528 = __i515;
          unsigned long u529 = t528 + 1;
          __i515 = u529;
        }
      char* t530 = __s1505;
      __retval508 = t530;
      char* t531 = __retval508;
      return t531;
    }
  char* t532 = __s1505;
  void* cast533 = (void*)t532;
  char* t534 = __s2506;
  void* cast535 = (void*)t534;
  unsigned long t536 = __n507;
  unsigned long c537 = 1;
  unsigned long b538 = t536 * c537;
  void* r539 = memcpy(cast533, cast535, b538);
  char* t540 = __s1505;
  __retval508 = t540;
  char* t541 = __retval508;
  return t541;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v542, char* v543, unsigned long v544) {
bb545:
  char* __s1546;
  char* __s2547;
  unsigned long __n548;
  char* __retval549;
  __s1546 = v542;
  __s2547 = v543;
  __n548 = v544;
    unsigned long t550 = __n548;
    unsigned long c551 = 0;
    _Bool c552 = ((t550 == c551)) ? 1 : 0;
    if (c552) {
      char* t553 = __s1546;
      __retval549 = t553;
      char* t554 = __retval549;
      return t554;
    }
    _Bool r555 = std____is_constant_evaluated();
    if (r555) {
      char* t556 = __s1546;
      char* t557 = __s2547;
      unsigned long t558 = __n548;
      char* r559 = __gnu_cxx__char_traits_char___copy(t556, t557, t558);
      __retval549 = r559;
      char* t560 = __retval549;
      return t560;
    }
  char* t561 = __s1546;
  void* cast562 = (void*)t561;
  char* t563 = __s2547;
  void* cast564 = (void*)t563;
  unsigned long t565 = __n548;
  void* r566 = memcpy(cast562, cast564, t565);
  char* cast567 = (char*)r566;
  __retval549 = cast567;
  char* t568 = __retval549;
  return t568;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v569, char* v570, unsigned long v571) {
bb572:
  char* __d573;
  char* __s574;
  unsigned long __n575;
  __d573 = v569;
  __s574 = v570;
  __n575 = v571;
    unsigned long t576 = __n575;
    unsigned long c577 = 1;
    _Bool c578 = ((t576 == c577)) ? 1 : 0;
    if (c578) {
      char* t579 = __d573;
      char* t580 = __s574;
      std__char_traits_char___assign(t579, t580);
    } else {
      char* t581 = __d573;
      char* t582 = __s574;
      unsigned long t583 = __n575;
      char* r584 = std__char_traits_char___copy(t581, t582, t583);
    }
  return;
}

// function: _ZNKSt4lessIPKcEclES1_S1_
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* v585, char* v586, char* v587) {
bb588:
  struct std__less_const_char___* this589;
  char* __x590;
  char* __y591;
  _Bool __retval592;
  this589 = v585;
  __x590 = v586;
  __y591 = v587;
  struct std__less_const_char___* t593 = this589;
    _Bool r594 = std____is_constant_evaluated();
    if (r594) {
      char* t595 = __x590;
      char* t596 = __y591;
      _Bool c597 = ((t595 < t596)) ? 1 : 0;
      __retval592 = c597;
      _Bool t598 = __retval592;
      return t598;
    }
  char* t599 = __x590;
  unsigned long cast600 = (unsigned long)t599;
  char* t601 = __y591;
  unsigned long cast602 = (unsigned long)t601;
  _Bool c603 = ((cast600 < cast602)) ? 1 : 0;
  __retval592 = c603;
  _Bool t604 = __retval592;
  return t604;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_disjunctEPKc
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v605, char* v606) {
bb607:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this608;
  char* __s609;
  _Bool __retval610;
  struct std__less_const_char___ ref_tmp0611;
  this608 = v605;
  __s609 = v606;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t612 = this608;
  char* t613 = __s609;
  char* r614 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t612);
  _Bool r615 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp0611, t613, r614);
  _Bool ternary616;
  if (r615) {
    _Bool c617 = 1;
    ternary616 = (_Bool)c617;
  } else {
    struct std__less_const_char___ ref_tmp1618;
    char* r619 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t612);
    unsigned long r620 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t612);
    char* ptr621 = &(r619)[r620];
    char* t622 = __s609;
    _Bool r623 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp1618, ptr621, t622);
    ternary616 = (_Bool)r623;
  }
  __retval610 = ternary616;
  _Bool t624 = __retval610;
  return t624;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign(char* v625, char* v626) {
bb627:
  char* __c1628;
  char* __c2629;
  __c1628 = v625;
  __c2629 = v626;
    _Bool r630 = std____is_constant_evaluated();
    if (r630) {
      char* t631 = __c1628;
      char* t632 = __c2629;
      char* r633 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t631, t632);
    } else {
      char* t634 = __c2629;
      char t635 = *t634;
      char* t636 = __c1628;
      *t636 = t635;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v637, char* v638, unsigned long v639) {
bb640:
  char* __s1641;
  char* __s2642;
  unsigned long __n643;
  char* __retval644;
  __s1641 = v637;
  __s2642 = v638;
  __n643 = v639;
    unsigned long t645 = __n643;
    unsigned long c646 = 0;
    _Bool c647 = ((t645 == c646)) ? 1 : 0;
    if (c647) {
      char* t648 = __s1641;
      __retval644 = t648;
      char* t649 = __retval644;
      return t649;
    }
    _Bool r650 = std____is_constant_evaluated();
    if (r650) {
        char* t651 = __s2642;
        char* t652 = __s1641;
        _Bool c653 = ((t651 < t652)) ? 1 : 0;
        _Bool isconst654 = 0;
        _Bool ternary655;
        if (isconst654) {
          char* t656 = __s1641;
          char* t657 = __s2642;
          _Bool c658 = ((t656 > t657)) ? 1 : 0;
          ternary655 = (_Bool)c658;
        } else {
          _Bool c659 = 0;
          ternary655 = (_Bool)c659;
        }
        _Bool ternary660;
        if (ternary655) {
          char* t661 = __s1641;
          char* t662 = __s2642;
          unsigned long t663 = __n643;
          char* ptr664 = &(t662)[t663];
          _Bool c665 = ((t661 < ptr664)) ? 1 : 0;
          ternary660 = (_Bool)c665;
        } else {
          _Bool c666 = 0;
          ternary660 = (_Bool)c666;
        }
        if (ternary660) {
            do {
                unsigned long t667 = __n643;
                unsigned long u668 = t667 - 1;
                __n643 = u668;
                unsigned long t669 = __n643;
                char* t670 = __s1641;
                char* ptr671 = &(t670)[t669];
                unsigned long t672 = __n643;
                char* t673 = __s2642;
                char* ptr674 = &(t673)[t672];
                __gnu_cxx__char_traits_char___assign(ptr671, ptr674);
              unsigned long t675 = __n643;
              unsigned long c676 = 0;
              _Bool c677 = ((t675 > c676)) ? 1 : 0;
              if (!c677) break;
            } while (1);
        } else {
          char* t678 = __s1641;
          char* t679 = __s2642;
          unsigned long t680 = __n643;
          char* r681 = __gnu_cxx__char_traits_char___copy(t678, t679, t680);
        }
      char* t682 = __s1641;
      __retval644 = t682;
      char* t683 = __retval644;
      return t683;
    }
  char* t684 = __s1641;
  void* cast685 = (void*)t684;
  char* t686 = __s2642;
  void* cast687 = (void*)t686;
  unsigned long t688 = __n643;
  unsigned long c689 = 1;
  unsigned long b690 = t688 * c689;
  void* r691 = memmove(cast685, cast687, b690);
  char* t692 = __s1641;
  __retval644 = t692;
  char* t693 = __retval644;
  return t693;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v694, char* v695, unsigned long v696) {
bb697:
  char* __s1698;
  char* __s2699;
  unsigned long __n700;
  char* __retval701;
  __s1698 = v694;
  __s2699 = v695;
  __n700 = v696;
    unsigned long t702 = __n700;
    unsigned long c703 = 0;
    _Bool c704 = ((t702 == c703)) ? 1 : 0;
    if (c704) {
      char* t705 = __s1698;
      __retval701 = t705;
      char* t706 = __retval701;
      return t706;
    }
    _Bool r707 = std____is_constant_evaluated();
    if (r707) {
      char* t708 = __s1698;
      char* t709 = __s2699;
      unsigned long t710 = __n700;
      char* r711 = __gnu_cxx__char_traits_char___move(t708, t709, t710);
      __retval701 = r711;
      char* t712 = __retval701;
      return t712;
    }
  char* t713 = __s1698;
  void* cast714 = (void*)t713;
  char* t715 = __s2699;
  void* cast716 = (void*)t715;
  unsigned long t717 = __n700;
  void* r718 = memmove(cast714, cast716, t717);
  char* cast719 = (char*)r718;
  __retval701 = cast719;
  char* t720 = __retval701;
  return t720;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v721, char* v722, unsigned long v723) {
bb724:
  char* __d725;
  char* __s726;
  unsigned long __n727;
  __d725 = v721;
  __s726 = v722;
  __n727 = v723;
    unsigned long t728 = __n727;
    unsigned long c729 = 1;
    _Bool c730 = ((t728 == c729)) ? 1 : 0;
    if (c730) {
      char* t731 = __d725;
      char* t732 = __s726;
      std__char_traits_char___assign(t731, t732);
    } else {
      char* t733 = __d725;
      char* t734 = __s726;
      unsigned long t735 = __n727;
      char* r736 = std__char_traits_char___move(t733, t734, t735);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_replace_coldEPcmPKcmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v737, char* v738, unsigned long v739, char* v740, unsigned long v741, unsigned long v742) {
bb743:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this744;
  char* __p745;
  unsigned long __len1746;
  char* __s747;
  unsigned long __len2748;
  unsigned long __how_much749;
  this744 = v737;
  __p745 = v738;
  __len1746 = v739;
  __s747 = v740;
  __len2748 = v741;
  __how_much749 = v742;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t750 = this744;
    unsigned long t751 = __len2748;
    _Bool cast752 = (_Bool)t751;
    _Bool ternary753;
    if (cast752) {
      unsigned long t754 = __len2748;
      unsigned long t755 = __len1746;
      _Bool c756 = ((t754 <= t755)) ? 1 : 0;
      ternary753 = (_Bool)c756;
    } else {
      _Bool c757 = 0;
      ternary753 = (_Bool)c757;
    }
    if (ternary753) {
      char* t758 = __p745;
      char* t759 = __s747;
      unsigned long t760 = __len2748;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t758, t759, t760);
    }
    unsigned long t761 = __how_much749;
    _Bool cast762 = (_Bool)t761;
    _Bool ternary763;
    if (cast762) {
      unsigned long t764 = __len1746;
      unsigned long t765 = __len2748;
      _Bool c766 = ((t764 != t765)) ? 1 : 0;
      ternary763 = (_Bool)c766;
    } else {
      _Bool c767 = 0;
      ternary763 = (_Bool)c767;
    }
    if (ternary763) {
      char* t768 = __p745;
      unsigned long t769 = __len2748;
      char* ptr770 = &(t768)[t769];
      char* t771 = __p745;
      unsigned long t772 = __len1746;
      char* ptr773 = &(t771)[t772];
      unsigned long t774 = __how_much749;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr770, ptr773, t774);
    }
    unsigned long t775 = __len2748;
    unsigned long t776 = __len1746;
    _Bool c777 = ((t775 > t776)) ? 1 : 0;
    if (c777) {
        char* t778 = __s747;
        unsigned long t779 = __len2748;
        char* ptr780 = &(t778)[t779];
        char* t781 = __p745;
        unsigned long t782 = __len1746;
        char* ptr783 = &(t781)[t782];
        _Bool c784 = ((ptr780 <= ptr783)) ? 1 : 0;
        if (c784) {
          char* t785 = __p745;
          char* t786 = __s747;
          unsigned long t787 = __len2748;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t785, t786, t787);
        } else {
            char* t788 = __s747;
            char* t789 = __p745;
            unsigned long t790 = __len1746;
            char* ptr791 = &(t789)[t790];
            _Bool c792 = ((t788 >= ptr791)) ? 1 : 0;
            if (c792) {
              unsigned long __poff793;
              char* t794 = __s747;
              char* t795 = __p745;
              long diff796 = t794 - t795;
              unsigned long cast797 = (unsigned long)diff796;
              unsigned long t798 = __len2748;
              unsigned long t799 = __len1746;
              unsigned long b800 = t798 - t799;
              unsigned long b801 = cast797 + b800;
              __poff793 = b801;
              char* t802 = __p745;
              char* t803 = __p745;
              unsigned long t804 = __poff793;
              char* ptr805 = &(t803)[t804];
              unsigned long t806 = __len2748;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t802, ptr805, t806);
            } else {
              unsigned long __nleft807;
              char* t808 = __p745;
              unsigned long t809 = __len1746;
              char* ptr810 = &(t808)[t809];
              char* t811 = __s747;
              long diff812 = ptr810 - t811;
              unsigned long cast813 = (unsigned long)diff812;
              __nleft807 = cast813;
              char* t814 = __p745;
              char* t815 = __s747;
              unsigned long t816 = __nleft807;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t814, t815, t816);
              char* t817 = __p745;
              unsigned long t818 = __nleft807;
              char* ptr819 = &(t817)[t818];
              char* t820 = __p745;
              unsigned long t821 = __len2748;
              char* ptr822 = &(t820)[t821];
              unsigned long t823 = __len2748;
              unsigned long t824 = __nleft807;
              unsigned long b825 = t823 - t824;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr819, ptr822, b825);
            }
        }
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v826) {
bb827:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this828;
  unsigned long __retval829;
  this828 = v826;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t830 = this828;
  unsigned long r831 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t830);
  __retval829 = r831;
  unsigned long t832 = __retval829;
  return t832;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v833, unsigned long* v834, unsigned long v835) {
bb836:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this837;
  unsigned long* __capacity838;
  unsigned long __old_capacity839;
  char* __retval840;
  this837 = v833;
  __capacity838 = v834;
  __old_capacity839 = v835;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t841 = this837;
    unsigned long* t842 = __capacity838;
    unsigned long t843 = *t842;
    unsigned long r844 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t841);
    _Bool c845 = ((t843 > r844)) ? 1 : 0;
    if (c845) {
      char* cast846 = (char*)&(_str_2);
      std____throw_length_error(cast846);
    }
    unsigned long* t847 = __capacity838;
    unsigned long t848 = *t847;
    unsigned long t849 = __old_capacity839;
    _Bool c850 = ((t848 > t849)) ? 1 : 0;
    _Bool ternary851;
    if (c850) {
      unsigned long* t852 = __capacity838;
      unsigned long t853 = *t852;
      unsigned long c854 = 2;
      unsigned long t855 = __old_capacity839;
      unsigned long b856 = c854 * t855;
      _Bool c857 = ((t853 < b856)) ? 1 : 0;
      ternary851 = (_Bool)c857;
    } else {
      _Bool c858 = 0;
      ternary851 = (_Bool)c858;
    }
    if (ternary851) {
      unsigned long c859 = 2;
      unsigned long t860 = __old_capacity839;
      unsigned long b861 = c859 * t860;
      unsigned long* t862 = __capacity838;
      *t862 = b861;
        unsigned long* t863 = __capacity838;
        unsigned long t864 = *t863;
        unsigned long r865 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t841);
        _Bool c866 = ((t864 > r865)) ? 1 : 0;
        if (c866) {
          unsigned long r867 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t841);
          unsigned long* t868 = __capacity838;
          *t868 = r867;
        }
    }
  struct std__allocator_char_* r869 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t841);
  unsigned long* t870 = __capacity838;
  unsigned long t871 = *t870;
  unsigned long c872 = 1;
  unsigned long b873 = t871 + c872;
  char* r874 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r869, b873);
  __retval840 = r874;
  char* t875 = __retval840;
  return t875;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v876, char* v877) {
bb878:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this879;
  char* __p880;
  this879 = v876;
  __p880 = v877;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t881 = this879;
  char* t882 = __p880;
  t881->_M_dataplus._M_p = t882;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v883, unsigned long v884) {
bb885:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this886;
  unsigned long __capacity887;
  this886 = v883;
  __capacity887 = v884;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t888 = this886;
  unsigned long t889 = __capacity887;
  t888->field2._M_allocated_capacity = t889;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v890, unsigned long v891, unsigned long v892, char* v893, unsigned long v894) {
bb895:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this896;
  unsigned long __pos897;
  unsigned long __len1898;
  char* __s899;
  unsigned long __len2900;
  unsigned long __how_much901;
  unsigned long __new_capacity902;
  char* __r903;
  this896 = v890;
  __pos897 = v891;
  __len1898 = v892;
  __s899 = v893;
  __len2900 = v894;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t904 = this896;
  unsigned long r905 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t904);
  unsigned long t906 = __pos897;
  unsigned long b907 = r905 - t906;
  unsigned long t908 = __len1898;
  unsigned long b909 = b907 - t908;
  __how_much901 = b909;
  unsigned long r910 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t904);
  unsigned long t911 = __len2900;
  unsigned long b912 = r910 + t911;
  unsigned long t913 = __len1898;
  unsigned long b914 = b912 - t913;
  __new_capacity902 = b914;
  unsigned long r915 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t904);
  char* r916 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t904, &__new_capacity902, r915);
  __r903 = r916;
    unsigned long t917 = __pos897;
    _Bool cast918 = (_Bool)t917;
    if (cast918) {
      char* t919 = __r903;
      char* r920 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t904);
      unsigned long t921 = __pos897;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t919, r920, t921);
    }
    char* t922 = __s899;
    _Bool cast923 = (_Bool)t922;
    _Bool ternary924;
    if (cast923) {
      unsigned long t925 = __len2900;
      _Bool cast926 = (_Bool)t925;
      ternary924 = (_Bool)cast926;
    } else {
      _Bool c927 = 0;
      ternary924 = (_Bool)c927;
    }
    if (ternary924) {
      char* t928 = __r903;
      unsigned long t929 = __pos897;
      char* ptr930 = &(t928)[t929];
      char* t931 = __s899;
      unsigned long t932 = __len2900;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr930, t931, t932);
    }
    unsigned long t933 = __how_much901;
    _Bool cast934 = (_Bool)t933;
    if (cast934) {
      char* t935 = __r903;
      unsigned long t936 = __pos897;
      char* ptr937 = &(t935)[t936];
      unsigned long t938 = __len2900;
      char* ptr939 = &(ptr937)[t938];
      char* r940 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t904);
      unsigned long t941 = __pos897;
      char* ptr942 = &(r940)[t941];
      unsigned long t943 = __len1898;
      char* ptr944 = &(ptr942)[t943];
      unsigned long t945 = __how_much901;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr939, ptr944, t945);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t904);
  char* t946 = __r903;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t904, t946);
  unsigned long t947 = __new_capacity902;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t904, t947);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v948, unsigned long v949, unsigned long v950, char* v951, unsigned long v952) {
bb953:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this954;
  unsigned long __pos955;
  unsigned long __len1956;
  char* __s957;
  unsigned long __len2958;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval959;
  unsigned long __old_size960;
  unsigned long __new_size961;
  this954 = v948;
  __pos955 = v949;
  __len1956 = v950;
  __s957 = v951;
  __len2958 = v952;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t962 = this954;
  unsigned long t963 = __len1956;
  unsigned long t964 = __len2958;
  char* cast965 = (char*)&(_str_1);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t962, t963, t964, cast965);
  unsigned long r966 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t962);
  __old_size960 = r966;
  unsigned long t967 = __old_size960;
  unsigned long t968 = __len2958;
  unsigned long b969 = t967 + t968;
  unsigned long t970 = __len1956;
  unsigned long b971 = b969 - t970;
  __new_size961 = b971;
    unsigned long t972 = __new_size961;
    unsigned long r973 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t962);
    _Bool c974 = ((t972 <= r973)) ? 1 : 0;
    if (c974) {
      char* __p975;
      unsigned long __how_much976;
      char* r977 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t962);
      unsigned long t978 = __pos955;
      char* ptr979 = &(r977)[t978];
      __p975 = ptr979;
      unsigned long t980 = __old_size960;
      unsigned long t981 = __pos955;
      unsigned long b982 = t980 - t981;
      unsigned long t983 = __len1956;
      unsigned long b984 = b982 - t983;
      __how_much976 = b984;
        _Bool r985 = std__is_constant_evaluated();
        if (r985) {
          char* __newp986;
          struct std__allocator_char_* r987 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t962);
          unsigned long t988 = __new_size961;
          char* r989 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r987, t988);
          __newp986 = r989;
          char* t990 = __newp986;
          char* r991 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t962);
          unsigned long t992 = __pos955;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t990, r991, t992);
          char* t993 = __newp986;
          unsigned long t994 = __pos955;
          char* ptr995 = &(t993)[t994];
          char* t996 = __s957;
          unsigned long t997 = __len2958;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr995, t996, t997);
          char* t998 = __newp986;
          unsigned long t999 = __pos955;
          char* ptr1000 = &(t998)[t999];
          unsigned long t1001 = __len2958;
          char* ptr1002 = &(ptr1000)[t1001];
          char* t1003 = __p975;
          unsigned long t1004 = __len1956;
          char* ptr1005 = &(t1003)[t1004];
          unsigned long t1006 = __how_much976;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr1002, ptr1005, t1006);
          char* r1007 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t962);
          char* t1008 = __newp986;
          unsigned long t1009 = __new_size961;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1007, t1008, t1009);
          struct std__allocator_char_* r1010 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t962);
          char* t1011 = __newp986;
          unsigned long t1012 = __new_size961;
          std__allocator_char___deallocate(r1010, t1011, t1012);
        } else {
            char* t1013 = __s957;
            _Bool r1014 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(t962, t1013);
            if (r1014) {
                unsigned long t1015 = __how_much976;
                _Bool cast1016 = (_Bool)t1015;
                _Bool ternary1017;
                if (cast1016) {
                  unsigned long t1018 = __len1956;
                  unsigned long t1019 = __len2958;
                  _Bool c1020 = ((t1018 != t1019)) ? 1 : 0;
                  ternary1017 = (_Bool)c1020;
                } else {
                  _Bool c1021 = 0;
                  ternary1017 = (_Bool)c1021;
                }
                if (ternary1017) {
                  char* t1022 = __p975;
                  unsigned long t1023 = __len2958;
                  char* ptr1024 = &(t1022)[t1023];
                  char* t1025 = __p975;
                  unsigned long t1026 = __len1956;
                  char* ptr1027 = &(t1025)[t1026];
                  unsigned long t1028 = __how_much976;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr1024, ptr1027, t1028);
                }
                unsigned long t1029 = __len2958;
                _Bool cast1030 = (_Bool)t1029;
                if (cast1030) {
                  char* t1031 = __p975;
                  char* t1032 = __s957;
                  unsigned long t1033 = __len2958;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1031, t1032, t1033);
                }
            } else {
              char* t1034 = __p975;
              unsigned long t1035 = __len1956;
              char* t1036 = __s957;
              unsigned long t1037 = __len2958;
              unsigned long t1038 = __how_much976;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(t962, t1034, t1035, t1036, t1037, t1038);
            }
        }
    } else {
      unsigned long t1039 = __pos955;
      unsigned long t1040 = __len1956;
      char* t1041 = __s957;
      unsigned long t1042 = __len2958;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t962, t1039, t1040, t1041, t1042);
    }
  unsigned long t1043 = __new_size961;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t962, t1043);
  __retval959 = t962;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1044 = __retval959;
  return t1044;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1045) {
bb1046:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1047;
  unsigned long __retval1048;
  unsigned long __sz1049;
  this1047 = v1045;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1050 = this1047;
  unsigned long t1051 = t1050->_M_string_length;
  __sz1049 = t1051;
    unsigned long t1052 = __sz1049;
    unsigned long r1053 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1050);
    _Bool c1054 = ((t1052 > r1053)) ? 1 : 0;
    if (c1054) {
      __builtin_unreachable();
    }
  unsigned long t1055 = __sz1049;
  __retval1048 = t1055;
  unsigned long t1056 = __retval1048;
  return t1056;
}

// function: _ZSt12__niter_baseIPcET_S1_
char* char__std____niter_base_char__(char* v1057) {
bb1058:
  char* __it1059;
  char* __retval1060;
  __it1059 = v1057;
  char* t1061 = __it1059;
  __retval1060 = t1061;
  char* t1062 = __retval1060;
  return t1062;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignIPcvEERS4_T_S8_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_char___void_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1063, char* v1064, char* v1065) {
bb1066:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1067;
  char* __first1068;
  char* __last1069;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1070;
  this1067 = v1063;
  __first1068 = v1064;
  __last1069 = v1065;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1071 = this1067;
    unsigned long c1072 = 0;
    unsigned long r1073 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1071);
    char* t1074 = __first1068;
    char* r1075 = char__std____niter_base_char__(t1074);
    char* t1076 = __last1069;
    char* t1077 = __first1068;
    long diff1078 = t1076 - t1077;
    unsigned long cast1079 = (unsigned long)diff1078;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1080 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t1071, c1072, r1073, r1075, cast1079);
    __retval1070 = r1080;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1081 = __retval1070;
    return t1081;
  abort();
}

// function: _ZNKSt15basic_streambufIcSt11char_traitsIcEE5pbaseEv
char* std__basic_streambuf_char__std__char_traits_char_____pbase___const(struct std__basic_streambuf_char__std__char_traits_char__* v1082) {
bb1083:
  struct std__basic_streambuf_char__std__char_traits_char__* this1084;
  char* __retval1085;
  this1084 = v1082;
  struct std__basic_streambuf_char__std__char_traits_char__* t1086 = this1084;
  char* t1087 = t1086->_M_out_beg;
  __retval1085 = t1087;
  char* t1088 = __retval1085;
  return t1088;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_copy_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_copy_assign() {
bb1089:
  _Bool __retval1090;
  _Bool t1091 = _ZNSt17integral_constantIbLb0EE5valueE;
  __retval1090 = t1091;
  _Bool t1092 = __retval1090;
  return t1092;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE15_S_always_equalEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_always_equal() {
bb1093:
  _Bool __retval1094;
  _Bool t1095 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval1094 = t1095;
  _Bool t1096 = __retval1094;
  return t1096;
}

// function: _ZSteqRKSaIcES1_
_Bool std__operator__(struct std__allocator_char_* v1097, struct std__allocator_char_* v1098) {
bb1099:
  struct std__allocator_char_* unnamed1100;
  struct std__allocator_char_* unnamed1101;
  _Bool __retval1102;
  unnamed1100 = v1097;
  unnamed1101 = v1098;
  _Bool c1103 = 1;
  __retval1102 = c1103;
  _Bool t1104 = __retval1102;
  return t1104;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1105) {
bb1106:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1107;
  char* __retval1108;
  this1107 = v1105;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1109 = this1107;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1109);
  char* r1110 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t1109);
  __retval1108 = r1110;
  char* t1111 = __retval1108;
  return t1111;
}

// function: _ZSt15__alloc_on_copyISaIcEEvRT_RKS1_
void void_std____alloc_on_copy_std__allocator_char___(struct std__allocator_char_* v1112, struct std__allocator_char_* v1113) {
bb1114:
  struct std__allocator_char_* __one1115;
  struct std__allocator_char_* __two1116;
  __one1115 = v1112;
  __two1116 = v1113;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1117, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1118) {
bb1119:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1120;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1121;
  this1120 = v1117;
  __str1121 = v1118;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1122 = this1120;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1123 = __str1121;
    _Bool c1124 = ((t1122 != t1123)) ? 1 : 0;
    if (c1124) {
      unsigned long __rsize1125;
      unsigned long __capacity1126;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1127 = __str1121;
      unsigned long r1128 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t1127);
      __rsize1125 = r1128;
      unsigned long r1129 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t1122);
      __capacity1126 = r1129;
        unsigned long t1130 = __rsize1125;
        unsigned long t1131 = __capacity1126;
        _Bool c1132 = ((t1130 > t1131)) ? 1 : 0;
        if (c1132) {
          unsigned long __new_capacity1133;
          char* __tmp1134;
          unsigned long t1135 = __rsize1125;
          __new_capacity1133 = t1135;
          unsigned long t1136 = __capacity1126;
          char* r1137 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1122, &__new_capacity1133, t1136);
          __tmp1134 = r1137;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1122);
          char* t1138 = __tmp1134;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1122, t1138);
          unsigned long t1139 = __new_capacity1133;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1122, t1139);
        }
        unsigned long t1140 = __rsize1125;
        _Bool cast1141 = (_Bool)t1140;
        if (cast1141) {
          char* r1142 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1122);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1143 = __str1121;
          char* r1144 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1143);
          unsigned long t1145 = __rsize1125;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1142, r1144, t1145);
        }
      unsigned long t1146 = __rsize1125;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1122, t1146);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignERKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1147, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1148) {
bb1149:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1150;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1151;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1152;
  this1150 = v1147;
  __str1151 = v1148;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1153 = this1150;
    _Bool r1154 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_copy_assign();
    if (r1154) {
        _Bool r1155 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_always_equal();
        _Bool u1156 = !r1155;
        _Bool ternary1157;
        if (u1156) {
          _Bool r1158 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1153);
          _Bool u1159 = !r1158;
          ternary1157 = (_Bool)u1159;
        } else {
          _Bool c1160 = 0;
          ternary1157 = (_Bool)c1160;
        }
        _Bool ternary1161;
        if (ternary1157) {
          struct std__allocator_char_* r1162 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1153);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1163 = __str1151;
          struct std__allocator_char_* r1164 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1163);
          _Bool r1165 = std__operator__(r1162, r1164);
          _Bool u1166 = !r1165;
          ternary1161 = (_Bool)u1166;
        } else {
          _Bool c1167 = 0;
          ternary1161 = (_Bool)c1167;
        }
        if (ternary1161) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1168 = __str1151;
            unsigned long r1169 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1168);
            unsigned long c1170 = 15;
            _Bool c1171 = ((r1169 <= c1170)) ? 1 : 0;
            if (c1171) {
              unsigned long t1172 = t1153->field2._M_allocated_capacity;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1153, t1172);
              char* r1173 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t1153);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1153, r1173);
              unsigned long c1174 = 0;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1153, c1174);
            } else {
              unsigned long __len1175;
              struct std__allocator_char_ __alloc1176;
              char* __ptr1177;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1178 = __str1151;
              unsigned long r1179 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1178);
              __len1175 = r1179;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1180 = __str1151;
              struct std__allocator_char_* r1181 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1180);
              std__allocator_char___allocator(&__alloc1176, r1181);
              unsigned long t1182 = __len1175;
              unsigned long c1183 = 1;
              unsigned long b1184 = t1182 + c1183;
              char* r1185 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(&__alloc1176, b1184);
              __ptr1177 = r1185;
              unsigned long t1186 = t1153->field2._M_allocated_capacity;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1153, t1186);
              char* t1187 = __ptr1177;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1153, t1187);
              unsigned long t1188 = __len1175;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1153, t1188);
              unsigned long t1189 = __len1175;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1153, t1189);
            }
        }
      struct std__allocator_char_* r1190 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1153);
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1191 = __str1151;
      struct std__allocator_char_* r1192 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1191);
      void_std____alloc_on_copy_std__allocator_char___(r1190, r1192);
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1193 = __str1151;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t1153, t1193);
  __retval1152 = t1153;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1194 = __retval1152;
  return t1194;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSERKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1195, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1196) {
bb1197:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1198;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1199;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1200;
  this1198 = v1195;
  __str1199 = v1196;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1201 = this1198;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1202 = __str1199;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1203 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(t1201, t1202);
  __retval1200 = r1203;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1204 = __retval1200;
  return t1204;
}

// function: _ZNKRSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEE3strEv
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char_____str___const__(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* v1205) {
bb1206:
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* this1207;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval1208;
  _Bool nrvo1209;
  struct std__allocator_char_ ref_tmp01210;
  this1207 = v1205;
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* t1211 = this1207;
  _Bool c1212 = 0;
  nrvo1209 = c1212;
  struct std__allocator_char_ r1213 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(&t1211->_M_string);
  ref_tmp01210 = r1213;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&__retval1208, &ref_tmp01210);
  {
    std__allocator_char____allocator(&ref_tmp01210);
  }
      char* __hi1214;
      char* r1215 = std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______M_high_mark___const(t1211);
      __hi1214 = r1215;
      char* t1216 = __hi1214;
      _Bool cast1217 = (_Bool)t1216;
      if (cast1217) {
        struct std__basic_streambuf_char__std__char_traits_char__* base1218 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t1211 + 0);
        char* r1219 = std__basic_streambuf_char__std__char_traits_char_____pbase___const(base1218);
        char* t1220 = __hi1214;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1221 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_char___void_(&__retval1208, r1219, t1220);
      } else {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1222 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&__retval1208, &t1211->_M_string);
      }
    _Bool c1223 = 1;
    nrvo1209 = c1223;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1224 = __retval1208;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ret_val1225 = t1224;
    {
      _Bool t1226 = nrvo1209;
      _Bool u1227 = !t1226;
      if (u1227) {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&__retval1208);
      }
    }
    return ret_val1225;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1228) {
bb1229:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1230;
  this1230 = v1228;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1231 = this1230;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1231);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1231->_M_dataplus);
  }
  return;
}

// function: _ZNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream_2(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* v1232, void** v1233) {
bb1234:
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* this1235;
  void** vtt1236;
  this1235 = v1232;
  vtt1236 = v1233;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* t1237 = this1235;
  void** t1238 = vtt1236;
    {
      std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______basic_stringbuf(&t1237->_M_stringbuf);
    }
  {
    struct std__basic_iostream_char__std__char_traits_char__* base1239 = (struct std__basic_iostream_char__std__char_traits_char__*)((char *)t1237 + 0);
    static void *vtt_slot1240 = 0;
    void** vtt1241 = (void**)&vtt_slot1240;
    std__basic_iostream_char__std__char_traits_char______basic_iostream(base1239, vtt1241);
  }
  return;
}

// function: _ZNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEED1Ev
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* v1242) {
bb1243:
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* this1244;
  this1244 = v1242;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* t1245 = this1244;
    static void *vtt_slot1246 = 0;
    void** vtt1247 = (void**)&vtt_slot1246;
    std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream_2(t1245, vtt1247);
  {
    struct std__basic_ios_char__std__char_traits_char__* base1248 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1245 + 128);
    std__basic_ios_char__std__char_traits_char______basic_ios(base1248);
  }
  return;
}

// function: main
int main() {
bb1249:
  int __retval1250;
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* pbuf1251;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__ ss1252;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp01253;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup1254;
  int c1255 = 0;
  __retval1250 = c1255;
  std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____basic_stringstream(&ss1252);
    struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* r1256 = std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____rdbuf___const(&ss1252);
    pbuf1251 = r1256;
    struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* t1257 = pbuf1251;
    struct std__basic_streambuf_char__std__char_traits_char__* base1258 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t1257 + 0);
    char* cast1259 = (char*)&(_str);
    long c1260 = 13;
    long r1261 = std__basic_streambuf_char__std__char_traits_char_____sputn(base1258, cast1259, c1260);
    struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* t1262 = pbuf1251;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1263 = std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char_____str___const__(t1262);
    ref_tmp01253 = r1263;
      struct std__basic_ostream_char__std__char_traits_char__* r1264 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &ref_tmp01253);
      tmp_exprcleanup1254 = r1264;
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp01253);
    }
    struct std__basic_ostream_char__std__char_traits_char__* t1265 = tmp_exprcleanup1254;
    int c1266 = 0;
    __retval1250 = c1266;
    int t1267 = __retval1250;
    int ret_val1268 = t1267;
    {
      std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(&ss1252);
    }
    return ret_val1268;
  int t1269 = __retval1250;
  return t1269;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1270) {
bb1271:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1272;
  char* __retval1273;
  this1272 = v1270;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1274 = this1272;
  char* t1275 = t1274->_M_dataplus._M_p;
  __retval1273 = t1275;
  char* t1276 = __retval1273;
  return t1276;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1277) {
bb1278:
  char* __r1279;
  char* __retval1280;
  __r1279 = v1277;
  char* t1281 = __r1279;
  __retval1280 = t1281;
  char* t1282 = __retval1280;
  return t1282;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1283) {
bb1284:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1285;
  char* __retval1286;
  this1285 = v1283;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1287 = this1285;
  char* cast1288 = (char*)&(t1287->field2._M_local_buf);
  char* r1289 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1288);
  __retval1286 = r1289;
  char* t1290 = __retval1286;
  return t1290;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1291) {
bb1292:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1293;
  _Bool __retval1294;
  this1293 = v1291;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1295 = this1293;
    char* r1296 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1295);
    char* r1297 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1295);
    _Bool c1298 = ((r1296 == r1297)) ? 1 : 0;
    if (c1298) {
        unsigned long t1299 = t1295->_M_string_length;
        unsigned long c1300 = 15;
        _Bool c1301 = ((t1299 > c1300)) ? 1 : 0;
        if (c1301) {
          __builtin_unreachable();
        }
      _Bool c1302 = 1;
      __retval1294 = c1302;
      _Bool t1303 = __retval1294;
      return t1303;
    }
  _Bool c1304 = 0;
  __retval1294 = c1304;
  _Bool t1305 = __retval1294;
  return t1305;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1306:
  _Bool __retval1307;
    _Bool c1308 = 0;
    __retval1307 = c1308;
    _Bool t1309 = __retval1307;
    return t1309;
  abort();
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1310, char* v1311, unsigned long v1312) {
bb1313:
  struct std____new_allocator_char_* this1314;
  char* __p1315;
  unsigned long __n1316;
  this1314 = v1310;
  __p1315 = v1311;
  __n1316 = v1312;
  struct std____new_allocator_char_* t1317 = this1314;
    unsigned long c1318 = 1;
    unsigned long c1319 = 16;
    _Bool c1320 = ((c1318 > c1319)) ? 1 : 0;
    if (c1320) {
      char* t1321 = __p1315;
      void* cast1322 = (void*)t1321;
      unsigned long t1323 = __n1316;
      unsigned long c1324 = 1;
      unsigned long b1325 = t1323 * c1324;
      unsigned long c1326 = 1;
      operator_delete_3(cast1322, b1325, c1326);
      return;
    }
  char* t1327 = __p1315;
  void* cast1328 = (void*)t1327;
  unsigned long t1329 = __n1316;
  unsigned long c1330 = 1;
  unsigned long b1331 = t1329 * c1330;
  operator_delete_2(cast1328, b1331);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1332, char* v1333, unsigned long v1334) {
bb1335:
  struct std__allocator_char_* this1336;
  char* __p1337;
  unsigned long __n1338;
  this1336 = v1332;
  __p1337 = v1333;
  __n1338 = v1334;
  struct std__allocator_char_* t1339 = this1336;
    _Bool r1340 = std____is_constant_evaluated();
    if (r1340) {
      char* t1341 = __p1337;
      void* cast1342 = (void*)t1341;
      operator_delete(cast1342);
      return;
    }
  struct std____new_allocator_char_* base1343 = (struct std____new_allocator_char_*)((char *)t1339 + 0);
  char* t1344 = __p1337;
  unsigned long t1345 = __n1338;
  std____new_allocator_char___deallocate(base1343, t1344, t1345);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1346, char* v1347, unsigned long v1348) {
bb1349:
  struct std__allocator_char_* __a1350;
  char* __p1351;
  unsigned long __n1352;
  __a1350 = v1346;
  __p1351 = v1347;
  __n1352 = v1348;
  struct std__allocator_char_* t1353 = __a1350;
  char* t1354 = __p1351;
  unsigned long t1355 = __n1352;
  std__allocator_char___deallocate(t1353, t1354, t1355);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1356) {
bb1357:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1358;
  struct std__allocator_char_* __retval1359;
  this1358 = v1356;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1360 = this1358;
  struct std__allocator_char_* base1361 = (struct std__allocator_char_*)((char *)&(t1360->_M_dataplus) + 0);
  __retval1359 = base1361;
  struct std__allocator_char_* t1362 = __retval1359;
  return t1362;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1363, unsigned long v1364) {
bb1365:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1366;
  unsigned long __size1367;
  this1366 = v1363;
  __size1367 = v1364;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1368 = this1366;
  struct std__allocator_char_* r1369 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1368);
  char* r1370 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1368);
  unsigned long t1371 = __size1367;
  unsigned long c1372 = 1;
  unsigned long b1373 = t1371 + c1372;
  std__allocator_traits_std__allocator_char_____deallocate(r1369, r1370, b1373);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1374) {
bb1375:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1376;
  this1376 = v1374;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1377 = this1376;
    _Bool r1378 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1377);
    _Bool u1379 = !r1378;
    if (u1379) {
      unsigned long t1380 = t1377->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1377, t1380);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1381) {
bb1382:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1383;
  this1383 = v1381;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1384 = this1383;
  {
    struct std__allocator_char_* base1385 = (struct std__allocator_char_*)((char *)t1384 + 0);
    std__allocator_char____allocator(base1385);
  }
  return;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEEC2Ev
void std__basic_streambuf_char__std__char_traits_char_____basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v1386) {
bb1387:
  struct std__basic_streambuf_char__std__char_traits_char__* this1388;
  this1388 = v1386;
  struct std__basic_streambuf_char__std__char_traits_char__* t1389 = this1388;
  void* v1390 = (void*)&_ZTVSt15basic_streambufIcSt11char_traitsIcEE[2];
  void** v1391 = (void**)t1389;
  *(void**)(v1391) = (void*)v1390;
  char* c1392 = ((void*)0);
  t1389->_M_in_beg = c1392;
  char* c1393 = ((void*)0);
  t1389->_M_in_cur = c1393;
  char* c1394 = ((void*)0);
  t1389->_M_in_end = c1394;
  char* c1395 = ((void*)0);
  t1389->_M_out_beg = c1395;
  char* c1396 = ((void*)0);
  t1389->_M_out_cur = c1396;
  char* c1397 = ((void*)0);
  t1389->_M_out_end = c1397;
  std__locale__locale(&t1389->_M_buf_locale);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1398) {
bb1399:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1400;
  struct std__allocator_char_ ref_tmp01401;
  this1400 = v1398;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1402 = this1400;
  char* r1403 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t1402);
  std__allocator_char___allocator_2(&ref_tmp01401);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t1402->_M_dataplus, r1403, &ref_tmp01401);
  {
    std__allocator_char____allocator(&ref_tmp01401);
  }
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1402);
    unsigned long c1404 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1402, c1404);
  return;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v1405) {
bb1406:
  struct std__basic_streambuf_char__std__char_traits_char__* this1407;
  this1407 = v1405;
  struct std__basic_streambuf_char__std__char_traits_char__* t1408 = this1407;
  {
    std__locale___locale(&t1408->_M_buf_locale);
  }
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1409) {
bb1410:
  char* __r1411;
  char* __retval1412;
  __r1411 = v1409;
  char* t1413 = __r1411;
  __retval1412 = t1413;
  char* t1414 = __retval1412;
  return t1414;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1415) {
bb1416:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1417;
  char* __retval1418;
  this1417 = v1415;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1419 = this1417;
  char* cast1420 = (char*)&(t1419->field2._M_local_buf);
  char* r1421 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1420);
  __retval1418 = r1421;
  char* t1422 = __retval1418;
  return t1422;
}

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v1423) {
bb1424:
  struct std__allocator_char_* this1425;
  this1425 = v1423;
  struct std__allocator_char_* t1426 = this1425;
  struct std____new_allocator_char_* base1427 = (struct std____new_allocator_char_*)((char *)t1426 + 0);
  std____new_allocator_char_____new_allocator_2(base1427);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1428, char* v1429, struct std__allocator_char_* v1430) {
bb1431:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1432;
  char* __dat1433;
  struct std__allocator_char_* __a1434;
  this1432 = v1428;
  __dat1433 = v1429;
  __a1434 = v1430;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1435 = this1432;
  struct std__allocator_char_* base1436 = (struct std__allocator_char_*)((char *)t1435 + 0);
  struct std__allocator_char_* t1437 = __a1434;
  std__allocator_char___allocator(base1436, t1437);
    char* t1438 = __dat1433;
    t1435->_M_p = t1438;
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v1439) {
bb1440:
  struct std__allocator_char_* this1441;
  this1441 = v1439;
  struct std__allocator_char_* t1442 = this1441;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1443:
  _Bool __retval1444;
    _Bool c1445 = 0;
    __retval1444 = c1445;
    _Bool t1446 = __retval1444;
    return t1446;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1447) {
bb1448:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1449;
  this1449 = v1447;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1450 = this1449;
    _Bool r1451 = std__is_constant_evaluated();
    if (r1451) {
        unsigned long __i1452;
        unsigned long c1453 = 0;
        __i1452 = c1453;
        while (1) {
          unsigned long t1455 = __i1452;
          unsigned long c1456 = 15;
          _Bool c1457 = ((t1455 <= c1456)) ? 1 : 0;
          if (!c1457) break;
          char c1458 = 0;
          unsigned long t1459 = __i1452;
          t1450->field2._M_local_buf[t1459] = c1458;
        for_step1454: ;
          unsigned long t1460 = __i1452;
          unsigned long u1461 = t1460 + 1;
          __i1452 = u1461;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1462, unsigned long v1463) {
bb1464:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1465;
  unsigned long __length1466;
  this1465 = v1462;
  __length1466 = v1463;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1467 = this1465;
  unsigned long t1468 = __length1466;
  t1467->_M_string_length = t1468;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1469, char* v1470) {
bb1471:
  char* __location1472;
  char* __args1473;
  char* __retval1474;
  void* __loc1475;
  __location1472 = v1469;
  __args1473 = v1470;
  char* t1476 = __location1472;
  void* cast1477 = (void*)t1476;
  __loc1475 = cast1477;
    void* t1478 = __loc1475;
    char* cast1479 = (char*)t1478;
    char* t1480 = __args1473;
    char t1481 = *t1480;
    *cast1479 = t1481;
    __retval1474 = cast1479;
    char* t1482 = __retval1474;
    return t1482;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1483, char* v1484) {
bb1485:
  char* __c11486;
  char* __c21487;
  __c11486 = v1483;
  __c21487 = v1484;
    _Bool r1488 = std____is_constant_evaluated();
    if (r1488) {
      char* t1489 = __c11486;
      char* t1490 = __c21487;
      char* r1491 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1489, t1490);
    } else {
      char* t1492 = __c21487;
      char t1493 = *t1492;
      char* t1494 = __c11486;
      *t1494 = t1493;
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1495, unsigned long v1496) {
bb1497:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1498;
  unsigned long __n1499;
  char ref_tmp01500;
  this1498 = v1495;
  __n1499 = v1496;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1501 = this1498;
  unsigned long t1502 = __n1499;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1501, t1502);
  unsigned long t1503 = __n1499;
  char* r1504 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1501);
  char* ptr1505 = &(r1504)[t1503];
  char c1506 = 0;
  ref_tmp01500 = c1506;
  std__char_traits_char___assign(ptr1505, &ref_tmp01500);
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1507) {
bb1508:
  struct std____new_allocator_char_* this1509;
  this1509 = v1507;
  struct std____new_allocator_char_* t1510 = this1509;
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1511, struct std____new_allocator_char_* v1512) {
bb1513:
  struct std____new_allocator_char_* this1514;
  struct std____new_allocator_char_* unnamed1515;
  this1514 = v1511;
  unnamed1515 = v1512;
  struct std____new_allocator_char_* t1516 = this1514;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1517, char* v1518, struct std__allocator_char_* v1519) {
bb1520:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1521;
  char* __dat1522;
  struct std__allocator_char_* __a1523;
  this1521 = v1517;
  __dat1522 = v1518;
  __a1523 = v1519;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1524 = this1521;
  struct std__allocator_char_* base1525 = (struct std__allocator_char_*)((char *)t1524 + 0);
  struct std__allocator_char_* t1526 = __a1523;
  std__allocator_char___allocator(base1525, t1526);
    char* t1527 = __dat1522;
    t1524->_M_p = t1527;
  return;
}

