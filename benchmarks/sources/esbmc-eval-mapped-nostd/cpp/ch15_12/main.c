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
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* _M_in_beg; char* _M_in_cur; char* _M_in_end; char* _M_out_beg; char* _M_out_cur; char* _M_out_end; struct std__locale _M_buf_locale; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; int _M_mode; struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ _M_string; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long _M_gcount; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std____cxx11__basic_istringstream_char__std__char_traits_char___std__allocator_char__ { struct std__basic_istream_char__std__char_traits_char__ __field0; struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__ _M_stringbuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVNSt7__cxx1119basic_istringstreamIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void *_ZTVNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt15basic_streambufIcSt11char_traitsIcEE[];
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base3appE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base3ateE_const __attribute__((aligned(4))) = 2;
int _ZNSt8ios_base2inE_const __attribute__((aligned(4))) = 8;
char _str[21] = "Input test 123 4.7 A";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[36] = "The following items were extracted\n";
char _str_2[31] = "from the istringstream object:";
char _str_3[10] = "\nstring: ";
char _str_4[10] = "\n   int: ";
char _str_5[10] = "\ndouble: ";
char _str_6[10] = "\n  char: ";
char _str_7[18] = "\n\nlong value is: ";
char _str_8[23] = "\n\ninputString is empty";
char _str_9[50] = "basic_string: construction from null is not valid";
char _str_10[24] = "basic_string::_M_create";
extern void *_ZTVNSt7__cxx1119basic_istringstreamIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void *_ZTVNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt15basic_streambufIcSt11char_traitsIcEE[];
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
extern void std__ios_base__ios_base(struct std__ios_base* p0);
void std__ios_base___ios_base(struct std__ios_base* p0) {}
void std__basic_ios_char__std__char_traits_char_____basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_istream_char__std__char_traits_char_____basic_istream(struct std__basic_istream_char__std__char_traits_char__* p0, void** p1);
int std__operator__3(int p0, int p1);
void std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char_____basic_stringbuf(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1, int p2);
extern void std__basic_ios_char__std__char_traits_char_____init(struct std__basic_ios_char__std__char_traits_char__* p0, struct std__basic_streambuf_char__std__char_traits_char__* p1);
void std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______basic_stringbuf(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* p0);
void std__basic_istream_char__std__char_traits_char______basic_istream(struct std__basic_istream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std____cxx11__basic_istringstream_char__std__char_traits_char___std__allocator_char_____basic_istringstream(struct std____cxx11__basic_istringstream_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1, int p2);
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1);
extern struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___std__allocator_char___(struct std__basic_istream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__operator___2(struct std__basic_istream_char__std__char_traits_char__* p0, int* p1);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__std__istream___M_extract_double_(struct std__basic_istream_char__std__char_traits_char__* p0, double* p1);
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* p0, double* p1);
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__2(int p0, int p1);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_double_(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__std__istream___M_extract_long_(struct std__basic_istream_char__std__char_traits_char__* p0, long* p1);
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator___3(struct std__basic_istream_char__std__char_traits_char__* p0, long* p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
_Bool std__basic_ios_char__std__char_traits_char_____good___const(struct std__basic_ios_char__std__char_traits_char__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_long_(struct std__basic_ostream_char__std__char_traits_char__* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___3(struct std__basic_ostream_char__std__char_traits_char__* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_istringstream_char__std__char_traits_char___std__allocator_char______basic_istringstream_2(struct std____cxx11__basic_istringstream_char__std__char_traits_char___std__allocator_char__* p0, void** p1);
void std____cxx11__basic_istringstream_char__std__char_traits_char___std__allocator_char______basic_istringstream(struct std____cxx11__basic_istringstream_char__std__char_traits_char___std__allocator_char__* p0);
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
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
extern void std__locale__locale(struct std__locale* p0);
void std__locale___locale(struct std__locale* p0) {}
void std__basic_streambuf_char__std__char_traits_char_____basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, struct std__allocator_char_* p3);
int std__operator_(int p0, int p1);
extern void std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______M_sync(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, unsigned long p3);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______M_stringbuf_init(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* p0, int p1);
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* p0);

extern unsigned char* _ZTTNSt7__cxx1119basic_istringstreamIcSt11char_traitsIcESaIcEEE[4] __attribute__((aligned(8)));

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v0) {
bb1:
  struct std__allocator_char_* this2;
  this2 = v0;
  struct std__allocator_char_* t3 = this2;
  struct std____new_allocator_char_* base4 = (struct std____new_allocator_char_*)((char *)t3 + 0);
  std____new_allocator_char_____new_allocator_2(base4);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEPKcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v5, char* v6, struct std__allocator_char_* v7) {
bb8:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this9;
  char* __s10;
  struct std__allocator_char_* __a11;
  char* __end12;
  struct std__forward_iterator_tag agg_tmp013;
  this9 = v5;
  __s10 = v6;
  __a11 = v7;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t14 = this9;
  char* r15 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t14);
  struct std__allocator_char_* t16 = __a11;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t14->_M_dataplus, r15, t16);
      char* t17 = __s10;
      char* c18 = ((void*)0);
      _Bool c19 = ((t17 == c18)) ? 1 : 0;
      if (c19) {
        char* cast20 = (char*)&(_str_9);
        std____throw_logic_error(cast20);
      }
    char* t21 = __s10;
    char* t22 = __s10;
    unsigned long r23 = std__char_traits_char___length(t22);
    char* ptr24 = &(t21)[r23];
    __end12 = ptr24;
    char* t25 = __s10;
    char* t26 = __end12;
    struct std__forward_iterator_tag t27 = agg_tmp013;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t14, t25, t26, t27);
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v28) {
bb29:
  struct std__allocator_char_* this30;
  this30 = v28;
  struct std__allocator_char_* t31 = this30;
  return;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEEC2Ev
void std__basic_ios_char__std__char_traits_char_____basic_ios(struct std__basic_ios_char__std__char_traits_char__* v32) {
bb33:
  struct std__basic_ios_char__std__char_traits_char__* this34;
  this34 = v32;
  struct std__basic_ios_char__std__char_traits_char__* t35 = this34;
  struct std__ios_base* base36 = (struct std__ios_base*)((char *)t35 + 0);
  std__ios_base__ios_base(base36);
    void* v37 = (void*)&_ZTVSt9basic_iosIcSt11char_traitsIcEE[2];
    void** v38 = (void**)t35;
    *(void**)(v38) = (void*)v37;
    struct std__basic_ostream_char__std__char_traits_char__* c39 = ((void*)0);
    t35->_M_tie = c39;
    char c40 = 0;
    t35->_M_fill = c40;
    _Bool c41 = 0;
    t35->_M_fill_init = c41;
    struct std__basic_streambuf_char__std__char_traits_char__* c42 = ((void*)0);
    t35->_M_streambuf = c42;
    struct std__ctype_char_* c43 = ((void*)0);
    t35->_M_ctype = c43;
    struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* c44 = ((void*)0);
    t35->_M_num_put = c44;
    struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* c45 = ((void*)0);
    t35->_M_num_get = c45;
  return;
}

// function: _ZNSiC2Ev
void std__basic_istream_char__std__char_traits_char_____basic_istream(struct std__basic_istream_char__std__char_traits_char__* v46, void** v47) {
bb48:
  struct std__basic_istream_char__std__char_traits_char__* this49;
  void** vtt50;
  this49 = v46;
  vtt50 = v47;
  struct std__basic_istream_char__std__char_traits_char__* t51 = this49;
  void** t52 = vtt50;
  static void *vtt_slot53 = 0;
  void** vtt54 = (void**)&vtt_slot53;
  void** cast55 = (void**)vtt54;
  void* t56 = *cast55;
  void** v57 = (void**)t51;
  *(void**)(v57) = (void*)t56;
  static void *vtt_slot58 = 0;
  void** vtt59 = (void**)&vtt_slot58;
  void** cast60 = (void**)vtt59;
  void* t61 = *cast60;
  void** v62 = (void**)t51;
  void* v63 = *((void**)v62);
  unsigned char* cast64 = (unsigned char*)v63;
  long c65 = -24;
  unsigned char* ptr66 = &(cast64)[c65];
  long* cast67 = (long*)ptr66;
  long t68 = *cast67;
  unsigned char* cast69 = (unsigned char*)t51;
  unsigned char* ptr70 = &(cast69)[t68];
  struct std__basic_istream_char__std__char_traits_char__* cast71 = (struct std__basic_istream_char__std__char_traits_char__*)ptr70;
  void** v72 = (void**)cast71;
  *(void**)(v72) = (void*)t61;
  long c73 = 0;
  t51->_M_gcount = c73;
  void** v74 = (void**)t51;
  void* v75 = *((void**)v74);
  unsigned char* cast76 = (unsigned char*)v75;
  long c77 = -24;
  unsigned char* ptr78 = &(cast76)[c77];
  long* cast79 = (long*)ptr78;
  long t80 = *cast79;
  unsigned char* cast81 = (unsigned char*)t51;
  unsigned char* ptr82 = &(cast81)[t80];
  struct std__basic_istream_char__std__char_traits_char__* cast83 = (struct std__basic_istream_char__std__char_traits_char__*)ptr82;
  struct std__basic_ios_char__std__char_traits_char__* cast84 = (struct std__basic_ios_char__std__char_traits_char__*)cast83;
  struct std__basic_streambuf_char__std__char_traits_char__* c85 = ((void*)0);
  std__basic_ios_char__std__char_traits_char_____init(cast84, c85);
  return;
}

// function: _ZStorSt13_Ios_OpenmodeS_
int std__operator__3(int v86, int v87) {
bb88:
  int __a89;
  int __b90;
  int __retval91;
  __a89 = v86;
  __b90 = v87;
  int t92 = __a89;
  int t93 = __b90;
  int b94 = t92 | t93;
  __retval91 = b94;
  int t95 = __retval91;
  return t95;
}

// function: _ZNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEEC2ERKNS_12basic_stringIcS2_S3_EESt13_Ios_Openmode
void std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char_____basic_stringbuf(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* v96, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v97, int v98) {
bb99:
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* this100;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str101;
  int __mode102;
  struct std__allocator_char_ ref_tmp0103;
  this100 = v96;
  __str101 = v97;
  __mode102 = v98;
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* t104 = this100;
  struct std__basic_streambuf_char__std__char_traits_char__* base105 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t104 + 0);
  std__basic_streambuf_char__std__char_traits_char_____basic_streambuf(base105);
    void* v106 = (void*)&_ZTVNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEEE[2];
    void** v107 = (void**)t104;
    *(void**)(v107) = (void*)v106;
    int c108 = 0;
    t104->_M_mode = c108;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t109 = __str101;
    char* r110 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t109);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t111 = __str101;
    unsigned long r112 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t111);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t113 = __str101;
    struct std__allocator_char_ r114 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(t113);
    ref_tmp0103 = r114;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&t104->_M_string, r110, r112, &ref_tmp0103);
    {
      std__allocator_char____allocator(&ref_tmp0103);
    }
      int t115 = __mode102;
      std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______M_stringbuf_init(t104, t115);
  return;
}

// function: _ZNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______basic_stringbuf(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* v116) {
bb117:
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* this118;
  this118 = v116;
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* t119 = this118;
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&t119->_M_string);
    }
  {
    struct std__basic_streambuf_char__std__char_traits_char__* base120 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t119 + 0);
    std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base120);
  }
  return;
}

// function: _ZNSiD2Ev
void std__basic_istream_char__std__char_traits_char______basic_istream(struct std__basic_istream_char__std__char_traits_char__* v121, void** v122) {
bb123:
  struct std__basic_istream_char__std__char_traits_char__* this124;
  void** vtt125;
  this124 = v121;
  vtt125 = v122;
  struct std__basic_istream_char__std__char_traits_char__* t126 = this124;
  void** t127 = vtt125;
  long c128 = 0;
  t126->_M_gcount = c128;
  return;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEED2Ev
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* v129) {
bb130:
  struct std__basic_ios_char__std__char_traits_char__* this131;
  this131 = v129;
  struct std__basic_ios_char__std__char_traits_char__* t132 = this131;
  {
    struct std__ios_base* base133 = (struct std__ios_base*)((char *)t132 + 0);
    std__ios_base___ios_base(base133);
  }
  return;
}

// function: _ZNSt7__cxx1119basic_istringstreamIcSt11char_traitsIcESaIcEEC1ERKNS_12basic_stringIcS2_S3_EESt13_Ios_Openmode
void std____cxx11__basic_istringstream_char__std__char_traits_char___std__allocator_char_____basic_istringstream(struct std____cxx11__basic_istringstream_char__std__char_traits_char___std__allocator_char__* v134, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v135, int v136) {
bb137:
  struct std____cxx11__basic_istringstream_char__std__char_traits_char___std__allocator_char__* this138;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str139;
  int __mode140;
  this138 = v134;
  __str139 = v135;
  __mode140 = v136;
  struct std____cxx11__basic_istringstream_char__std__char_traits_char___std__allocator_char__* t141 = this138;
  struct std__basic_ios_char__std__char_traits_char__* base142 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t141 + 120);
  std__basic_ios_char__std__char_traits_char_____basic_ios(base142);
    struct std__basic_istream_char__std__char_traits_char__* base143 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t141 + 0);
    static void *vtt_slot144 = 0;
    void** vtt145 = (void**)&vtt_slot144;
    std__basic_istream_char__std__char_traits_char_____basic_istream(base143, vtt145);
      void* v146 = (void*)&_ZTVNSt7__cxx1119basic_istringstreamIcSt11char_traitsIcESaIcEEE[3];
      void** v147 = (void**)t141;
      *(void**)(v147) = (void*)v146;
      void* v148 = (void*)&_ZTVNSt7__cxx1119basic_istringstreamIcSt11char_traitsIcESaIcEEE[3];
      struct std__basic_ios_char__std__char_traits_char__* base149 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t141 + 120);
      void** v150 = (void**)base149;
      *(void**)(v150) = (void*)v148;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t151 = __str139;
      int t152 = __mode140;
      int t153 = _ZNSt8ios_base2inE_const;
      int r154 = std__operator__3(t152, t153);
      std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char_____basic_stringbuf(&t141->_M_stringbuf, t151, r154);
        void** v155 = (void**)t141;
        void* v156 = *((void**)v155);
        unsigned char* cast157 = (unsigned char*)v156;
        long c158 = -24;
        unsigned char* ptr159 = &(cast157)[c158];
        long* cast160 = (long*)ptr159;
        long t161 = *cast160;
        unsigned char* cast162 = (unsigned char*)t141;
        unsigned char* ptr163 = &(cast162)[t161];
        struct std____cxx11__basic_istringstream_char__std__char_traits_char___std__allocator_char__* cast164 = (struct std____cxx11__basic_istringstream_char__std__char_traits_char___std__allocator_char__*)ptr163;
        struct std__basic_ios_char__std__char_traits_char__* cast165 = (struct std__basic_ios_char__std__char_traits_char__*)cast164;
        struct std__basic_streambuf_char__std__char_traits_char__* base166 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)&(t141->_M_stringbuf) + 0);
        std__basic_ios_char__std__char_traits_char_____init(cast165, base166);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v167) {
bb168:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this169;
  struct std__allocator_char_ ref_tmp0170;
  this169 = v167;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t171 = this169;
  char* r172 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t171);
  std__allocator_char___allocator_2(&ref_tmp0170);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t171->_M_dataplus, r172, &ref_tmp0170);
  {
    std__allocator_char____allocator(&ref_tmp0170);
  }
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t171);
    unsigned long c173 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t171, c173);
  return;
}

// function: _ZNSirsERd
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* v174, double* v175) {
bb176:
  struct std__basic_istream_char__std__char_traits_char__* this177;
  double* __f178;
  struct std__basic_istream_char__std__char_traits_char__* __retval179;
  this177 = v174;
  __f178 = v175;
  struct std__basic_istream_char__std__char_traits_char__* t180 = this177;
  double* t181 = __f178;
  struct std__basic_istream_char__std__char_traits_char__* r182 = std__istream__std__istream___M_extract_double_(t180, t181);
  __retval179 = r182;
  struct std__basic_istream_char__std__char_traits_char__* t183 = __retval179;
  return t183;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v184) {
bb185:
  struct std__ios_base* this186;
  long __retval187;
  this186 = v184;
  struct std__ios_base* t188 = this186;
  long t189 = t188->_M_width;
  __retval187 = t189;
  long t190 = __retval187;
  return t190;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v191, char v192) {
bb193:
  struct std__basic_ostream_char__std__char_traits_char__* __out194;
  char __c195;
  struct std__basic_ostream_char__std__char_traits_char__* __retval196;
  __out194 = v191;
  __c195 = v192;
    struct std__basic_ostream_char__std__char_traits_char__* t197 = __out194;
    void** v198 = (void**)t197;
    void* v199 = *((void**)v198);
    unsigned char* cast200 = (unsigned char*)v199;
    long c201 = -24;
    unsigned char* ptr202 = &(cast200)[c201];
    long* cast203 = (long*)ptr202;
    long t204 = *cast203;
    unsigned char* cast205 = (unsigned char*)t197;
    unsigned char* ptr206 = &(cast205)[t204];
    struct std__basic_ostream_char__std__char_traits_char__* cast207 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr206;
    struct std__ios_base* cast208 = (struct std__ios_base*)cast207;
    long r209 = std__ios_base__width___const(cast208);
    long c210 = 0;
    _Bool c211 = ((r209 != c210)) ? 1 : 0;
    if (c211) {
      struct std__basic_ostream_char__std__char_traits_char__* t212 = __out194;
      long c213 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r214 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t212, &__c195, c213);
      __retval196 = r214;
      struct std__basic_ostream_char__std__char_traits_char__* t215 = __retval196;
      return t215;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t216 = __out194;
  char t217 = __c195;
  struct std__basic_ostream_char__std__char_traits_char__* r218 = std__ostream__put(t216, t217);
  struct std__basic_ostream_char__std__char_traits_char__* t219 = __out194;
  __retval196 = t219;
  struct std__basic_ostream_char__std__char_traits_char__* t220 = __retval196;
  return t220;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v221, int v222) {
bb223:
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

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v231, int v232) {
bb233:
  struct std__basic_ios_char__std__char_traits_char__* this234;
  int __state235;
  this234 = v231;
  __state235 = v232;
  struct std__basic_ios_char__std__char_traits_char__* t236 = this234;
  int r237 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t236);
  int t238 = __state235;
  int r239 = std__operator__2(r237, t238);
  std__basic_ios_char__std__char_traits_char_____clear(t236, r239);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v240, char* v241) {
bb242:
  struct std__basic_ostream_char__std__char_traits_char__* __out243;
  char* __s244;
  struct std__basic_ostream_char__std__char_traits_char__* __retval245;
  __out243 = v240;
  __s244 = v241;
    char* t246 = __s244;
    _Bool cast247 = (_Bool)t246;
    _Bool u248 = !cast247;
    if (u248) {
      struct std__basic_ostream_char__std__char_traits_char__* t249 = __out243;
      void** v250 = (void**)t249;
      void* v251 = *((void**)v250);
      unsigned char* cast252 = (unsigned char*)v251;
      long c253 = -24;
      unsigned char* ptr254 = &(cast252)[c253];
      long* cast255 = (long*)ptr254;
      long t256 = *cast255;
      unsigned char* cast257 = (unsigned char*)t249;
      unsigned char* ptr258 = &(cast257)[t256];
      struct std__basic_ostream_char__std__char_traits_char__* cast259 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr258;
      struct std__basic_ios_char__std__char_traits_char__* cast260 = (struct std__basic_ios_char__std__char_traits_char__*)cast259;
      int t261 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast260, t261);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t262 = __out243;
      char* t263 = __s244;
      char* t264 = __s244;
      unsigned long r265 = std__char_traits_char___length(t264);
      long cast266 = (long)r265;
      struct std__basic_ostream_char__std__char_traits_char__* r267 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t262, t263, cast266);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t268 = __out243;
  __retval245 = t268;
  struct std__basic_ostream_char__std__char_traits_char__* t269 = __retval245;
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

// function: _ZNSolsEd
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v284, double v285) {
bb286:
  struct std__basic_ostream_char__std__char_traits_char__* this287;
  double __f288;
  struct std__basic_ostream_char__std__char_traits_char__* __retval289;
  this287 = v284;
  __f288 = v285;
  struct std__basic_ostream_char__std__char_traits_char__* t290 = this287;
  double t291 = __f288;
  struct std__basic_ostream_char__std__char_traits_char__* r292 = std__ostream__std__ostream___M_insert_double_(t290, t291);
  __retval289 = r292;
  struct std__basic_ostream_char__std__char_traits_char__* t293 = __retval289;
  return t293;
}

// function: _ZNSirsERl
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator___3(struct std__basic_istream_char__std__char_traits_char__* v294, long* v295) {
bb296:
  struct std__basic_istream_char__std__char_traits_char__* this297;
  long* __n298;
  struct std__basic_istream_char__std__char_traits_char__* __retval299;
  this297 = v294;
  __n298 = v295;
  struct std__basic_istream_char__std__char_traits_char__* t300 = this297;
  long* t301 = __n298;
  struct std__basic_istream_char__std__char_traits_char__* r302 = std__istream__std__istream___M_extract_long_(t300, t301);
  __retval299 = r302;
  struct std__basic_istream_char__std__char_traits_char__* t303 = __retval299;
  return t303;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v304) {
bb305:
  struct std__basic_ios_char__std__char_traits_char__* this306;
  int __retval307;
  this306 = v304;
  struct std__basic_ios_char__std__char_traits_char__* t308 = this306;
  struct std__ios_base* base309 = (struct std__ios_base*)((char *)t308 + 0);
  int t310 = base309->_M_streambuf_state;
  __retval307 = t310;
  int t311 = __retval307;
  return t311;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE4goodEv
_Bool std__basic_ios_char__std__char_traits_char_____good___const(struct std__basic_ios_char__std__char_traits_char__* v312) {
bb313:
  struct std__basic_ios_char__std__char_traits_char__* this314;
  _Bool __retval315;
  this314 = v312;
  struct std__basic_ios_char__std__char_traits_char__* t316 = this314;
  int r317 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t316);
  int c318 = 0;
  _Bool c319 = ((r317 == c318)) ? 1 : 0;
  __retval315 = c319;
  _Bool t320 = __retval315;
  return t320;
}

// function: _ZNSolsEl
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___3(struct std__basic_ostream_char__std__char_traits_char__* v321, long v322) {
bb323:
  struct std__basic_ostream_char__std__char_traits_char__* this324;
  long __n325;
  struct std__basic_ostream_char__std__char_traits_char__* __retval326;
  this324 = v321;
  __n325 = v322;
  struct std__basic_ostream_char__std__char_traits_char__* t327 = this324;
  long t328 = __n325;
  struct std__basic_ostream_char__std__char_traits_char__* r329 = std__ostream__std__ostream___M_insert_long_(t327, t328);
  __retval326 = r329;
  struct std__basic_ostream_char__std__char_traits_char__* t330 = __retval326;
  return t330;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v331, void* v332) {
bb333:
  struct std__basic_ostream_char__std__char_traits_char__* this334;
  void* __pf335;
  struct std__basic_ostream_char__std__char_traits_char__* __retval336;
  this334 = v331;
  __pf335 = v332;
  struct std__basic_ostream_char__std__char_traits_char__* t337 = this334;
  void* t338 = __pf335;
  struct std__basic_ostream_char__std__char_traits_char__* r339 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t338)(t337);
  __retval336 = r339;
  struct std__basic_ostream_char__std__char_traits_char__* t340 = __retval336;
  return t340;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v341) {
bb342:
  struct std__basic_ostream_char__std__char_traits_char__* __os343;
  struct std__basic_ostream_char__std__char_traits_char__* __retval344;
  __os343 = v341;
  struct std__basic_ostream_char__std__char_traits_char__* t345 = __os343;
  struct std__basic_ostream_char__std__char_traits_char__* r346 = std__ostream__flush(t345);
  __retval344 = r346;
  struct std__basic_ostream_char__std__char_traits_char__* t347 = __retval344;
  return t347;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v348) {
bb349:
  struct std__ctype_char_* __f350;
  struct std__ctype_char_* __retval351;
  __f350 = v348;
    struct std__ctype_char_* t352 = __f350;
    _Bool cast353 = (_Bool)t352;
    _Bool u354 = !cast353;
    if (u354) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t355 = __f350;
  __retval351 = t355;
  struct std__ctype_char_* t356 = __retval351;
  return t356;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v357, char v358) {
bb359:
  struct std__ctype_char_* this360;
  char __c361;
  char __retval362;
  this360 = v357;
  __c361 = v358;
  struct std__ctype_char_* t363 = this360;
    char t364 = t363->_M_widen_ok;
    _Bool cast365 = (_Bool)t364;
    if (cast365) {
      char t366 = __c361;
      unsigned char cast367 = (unsigned char)t366;
      unsigned long cast368 = (unsigned long)cast367;
      char t369 = t363->_M_widen[cast368];
      __retval362 = t369;
      char t370 = __retval362;
      return t370;
    }
  std__ctype_char____M_widen_init___const(t363);
  char t371 = __c361;
  void** v372 = (void**)t363;
  void* v373 = *((void**)v372);
  char vcall376 = (char)__VERIFIER_virtual_call_char_char(t363, 6, t371);
  __retval362 = vcall376;
  char t377 = __retval362;
  return t377;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v378, char v379) {
bb380:
  struct std__basic_ios_char__std__char_traits_char__* this381;
  char __c382;
  char __retval383;
  this381 = v378;
  __c382 = v379;
  struct std__basic_ios_char__std__char_traits_char__* t384 = this381;
  struct std__ctype_char_* t385 = t384->_M_ctype;
  struct std__ctype_char_* r386 = std__ctype_char__const__std____check_facet_std__ctype_char___(t385);
  char t387 = __c382;
  char r388 = std__ctype_char___widen_char__const(r386, t387);
  __retval383 = r388;
  char t389 = __retval383;
  return t389;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v390) {
bb391:
  struct std__basic_ostream_char__std__char_traits_char__* __os392;
  struct std__basic_ostream_char__std__char_traits_char__* __retval393;
  __os392 = v390;
  struct std__basic_ostream_char__std__char_traits_char__* t394 = __os392;
  struct std__basic_ostream_char__std__char_traits_char__* t395 = __os392;
  void** v396 = (void**)t395;
  void* v397 = *((void**)v396);
  unsigned char* cast398 = (unsigned char*)v397;
  long c399 = -24;
  unsigned char* ptr400 = &(cast398)[c399];
  long* cast401 = (long*)ptr400;
  long t402 = *cast401;
  unsigned char* cast403 = (unsigned char*)t395;
  unsigned char* ptr404 = &(cast403)[t402];
  struct std__basic_ostream_char__std__char_traits_char__* cast405 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr404;
  struct std__basic_ios_char__std__char_traits_char__* cast406 = (struct std__basic_ios_char__std__char_traits_char__*)cast405;
  char c407 = 10;
  char r408 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast406, c407);
  struct std__basic_ostream_char__std__char_traits_char__* r409 = std__ostream__put(t394, r408);
  struct std__basic_ostream_char__std__char_traits_char__* r410 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r409);
  __retval393 = r410;
  struct std__basic_ostream_char__std__char_traits_char__* t411 = __retval393;
  return t411;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v412) {
bb413:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this414;
  this414 = v412;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t415 = this414;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t415);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t415->_M_dataplus);
  }
  return;
}

// function: _ZNSt7__cxx1119basic_istringstreamIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_istringstream_char__std__char_traits_char___std__allocator_char______basic_istringstream_2(struct std____cxx11__basic_istringstream_char__std__char_traits_char___std__allocator_char__* v416, void** v417) {
bb418:
  struct std____cxx11__basic_istringstream_char__std__char_traits_char___std__allocator_char__* this419;
  void** vtt420;
  this419 = v416;
  vtt420 = v417;
  struct std____cxx11__basic_istringstream_char__std__char_traits_char___std__allocator_char__* t421 = this419;
  void** t422 = vtt420;
    {
      std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______basic_stringbuf(&t421->_M_stringbuf);
    }
  {
    struct std__basic_istream_char__std__char_traits_char__* base423 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t421 + 0);
    static void *vtt_slot424 = 0;
    void** vtt425 = (void**)&vtt_slot424;
    std__basic_istream_char__std__char_traits_char______basic_istream(base423, vtt425);
  }
  return;
}

// function: _ZNSt7__cxx1119basic_istringstreamIcSt11char_traitsIcESaIcEED1Ev
void std____cxx11__basic_istringstream_char__std__char_traits_char___std__allocator_char______basic_istringstream(struct std____cxx11__basic_istringstream_char__std__char_traits_char___std__allocator_char__* v426) {
bb427:
  struct std____cxx11__basic_istringstream_char__std__char_traits_char___std__allocator_char__* this428;
  this428 = v426;
  struct std____cxx11__basic_istringstream_char__std__char_traits_char___std__allocator_char__* t429 = this428;
    static void *vtt_slot430 = 0;
    void** vtt431 = (void**)&vtt_slot430;
    std____cxx11__basic_istringstream_char__std__char_traits_char___std__allocator_char______basic_istringstream_2(t429, vtt431);
  {
    struct std__basic_ios_char__std__char_traits_char__* base432 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t429 + 120);
    std__basic_ios_char__std__char_traits_char______basic_ios(base432);
  }
  return;
}

// function: main
int main() {
bb433:
  int __retval434;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ input435;
  struct std__allocator_char_ ref_tmp0436;
  struct std____cxx11__basic_istringstream_char__std__char_traits_char___std__allocator_char__ inputString437;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string1438;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string2439;
  int integer440;
  double double1441;
  char character442;
  long value443;
  int c444 = 0;
  __retval434 = c444;
  char* cast445 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0436);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&input435, cast445, &ref_tmp0436);
  {
    std__allocator_char____allocator(&ref_tmp0436);
  }
    int t446 = _ZNSt8ios_base2inE_const;
    std____cxx11__basic_istringstream_char__std__char_traits_char___std__allocator_char_____basic_istringstream(&inputString437, &input435, t446);
      _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&string1438);
        _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&string2439);
          struct std__basic_istream_char__std__char_traits_char__* base447 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(inputString437) + 0);
          struct std__basic_istream_char__std__char_traits_char__* r448 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___std__allocator_char___(base447, &string1438);
          struct std__basic_istream_char__std__char_traits_char__* r449 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___std__allocator_char___(r448, &string2439);
          struct std__basic_istream_char__std__char_traits_char__* r450 = std__istream__operator___2(r449, &integer440);
          struct std__basic_istream_char__std__char_traits_char__* r451 = std__istream__operator__(r450, &double1441);
          struct std__basic_istream_char__std__char_traits_char__* r452 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(r451, &character442);
          char* cast453 = (char*)&(_str_1);
          struct std__basic_ostream_char__std__char_traits_char__* r454 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast453);
          char* cast455 = (char*)&(_str_2);
          struct std__basic_ostream_char__std__char_traits_char__* r456 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r454, cast455);
          char* cast457 = (char*)&(_str_3);
          struct std__basic_ostream_char__std__char_traits_char__* r458 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r456, cast457);
          struct std__basic_ostream_char__std__char_traits_char__* r459 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r458, &string1438);
          char* cast460 = (char*)&(_str_3);
          struct std__basic_ostream_char__std__char_traits_char__* r461 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r459, cast460);
          struct std__basic_ostream_char__std__char_traits_char__* r462 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r461, &string2439);
          char* cast463 = (char*)&(_str_4);
          struct std__basic_ostream_char__std__char_traits_char__* r464 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r462, cast463);
          int t465 = integer440;
          struct std__basic_ostream_char__std__char_traits_char__* r466 = std__ostream__operator___2(r464, t465);
          char* cast467 = (char*)&(_str_5);
          struct std__basic_ostream_char__std__char_traits_char__* r468 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r466, cast467);
          double t469 = double1441;
          struct std__basic_ostream_char__std__char_traits_char__* r470 = std__ostream__operator__(r468, t469);
          char* cast471 = (char*)&(_str_6);
          struct std__basic_ostream_char__std__char_traits_char__* r472 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r470, cast471);
          char t473 = character442;
          struct std__basic_ostream_char__std__char_traits_char__* r474 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r472, t473);
          struct std__basic_istream_char__std__char_traits_char__* base475 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(inputString437) + 0);
          struct std__basic_istream_char__std__char_traits_char__* r476 = std__istream__operator___3(base475, &value443);
            void** v477 = (void**)&(inputString437);
            void* v478 = *((void**)v477);
            unsigned char* cast479 = (unsigned char*)v478;
            long c480 = -24;
            unsigned char* ptr481 = &(cast479)[c480];
            long* cast482 = (long*)ptr481;
            long t483 = *cast482;
            unsigned char* cast484 = (unsigned char*)&(inputString437);
            unsigned char* ptr485 = &(cast484)[t483];
            struct std____cxx11__basic_istringstream_char__std__char_traits_char___std__allocator_char__* cast486 = (struct std____cxx11__basic_istringstream_char__std__char_traits_char___std__allocator_char__*)ptr485;
            struct std__basic_ios_char__std__char_traits_char__* cast487 = (struct std__basic_ios_char__std__char_traits_char__*)cast486;
            _Bool r488 = std__basic_ios_char__std__char_traits_char_____good___const(cast487);
            if (r488) {
              char* cast489 = (char*)&(_str_7);
              struct std__basic_ostream_char__std__char_traits_char__* r490 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast489);
              long t491 = value443;
              struct std__basic_ostream_char__std__char_traits_char__* r492 = std__ostream__operator___3(r490, t491);
              struct std__basic_ostream_char__std__char_traits_char__* r493 = std__ostream__operator___std__ostream_____(r492, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            } else {
              char* cast494 = (char*)&(_str_8);
              struct std__basic_ostream_char__std__char_traits_char__* r495 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast494);
              struct std__basic_ostream_char__std__char_traits_char__* r496 = std__ostream__operator___std__ostream_____(r495, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            }
          int c497 = 0;
          __retval434 = c497;
          int t498 = __retval434;
          int ret_val499 = t498;
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&string2439);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&string1438);
          }
          {
            std____cxx11__basic_istringstream_char__std__char_traits_char___std__allocator_char______basic_istringstream(&inputString437);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&input435);
          }
          return ret_val499;
  int t500 = __retval434;
  return t500;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v501) {
bb502:
  struct std____new_allocator_char_* this503;
  this503 = v501;
  struct std____new_allocator_char_* t504 = this503;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v505) {
bb506:
  char* __r507;
  char* __retval508;
  __r507 = v505;
  char* t509 = __r507;
  __retval508 = t509;
  char* t510 = __retval508;
  return t510;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v511) {
bb512:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this513;
  char* __retval514;
  this513 = v511;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t515 = this513;
  char* cast516 = (char*)&(t515->field2._M_local_buf);
  char* r517 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast516);
  __retval514 = r517;
  char* t518 = __retval514;
  return t518;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v519, char* v520, struct std__allocator_char_* v521) {
bb522:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this523;
  char* __dat524;
  struct std__allocator_char_* __a525;
  this523 = v519;
  __dat524 = v520;
  __a525 = v521;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t526 = this523;
  struct std__allocator_char_* base527 = (struct std__allocator_char_*)((char *)t526 + 0);
  struct std__allocator_char_* t528 = __a525;
  std__allocator_char___allocator(base527, t528);
    char* t529 = __dat524;
    t526->_M_p = t529;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb530:
  _Bool __retval531;
    _Bool c532 = 0;
    __retval531 = c532;
    _Bool t533 = __retval531;
    return t533;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v534, char* v535) {
bb536:
  char* __c1537;
  char* __c2538;
  _Bool __retval539;
  __c1537 = v534;
  __c2538 = v535;
  char* t540 = __c1537;
  char t541 = *t540;
  int cast542 = (int)t541;
  char* t543 = __c2538;
  char t544 = *t543;
  int cast545 = (int)t544;
  _Bool c546 = ((cast542 == cast545)) ? 1 : 0;
  __retval539 = c546;
  _Bool t547 = __retval539;
  return t547;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v548) {
bb549:
  char* __p550;
  unsigned long __retval551;
  unsigned long __i552;
  __p550 = v548;
  unsigned long c553 = 0;
  __i552 = c553;
    char ref_tmp0554;
    while (1) {
      unsigned long t555 = __i552;
      char* t556 = __p550;
      char* ptr557 = &(t556)[t555];
      char c558 = 0;
      ref_tmp0554 = c558;
      _Bool r559 = __gnu_cxx__char_traits_char___eq(ptr557, &ref_tmp0554);
      _Bool u560 = !r559;
      if (!u560) break;
      unsigned long t561 = __i552;
      unsigned long u562 = t561 + 1;
      __i552 = u562;
    }
  unsigned long t563 = __i552;
  __retval551 = t563;
  unsigned long t564 = __retval551;
  return t564;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v565) {
bb566:
  char* __s567;
  unsigned long __retval568;
  __s567 = v565;
    _Bool r569 = std____is_constant_evaluated();
    if (r569) {
      char* t570 = __s567;
      unsigned long r571 = __gnu_cxx__char_traits_char___length(t570);
      __retval568 = r571;
      unsigned long t572 = __retval568;
      return t572;
    }
  char* t573 = __s567;
  unsigned long r574 = strlen(t573);
  __retval568 = r574;
  unsigned long t575 = __retval568;
  return t575;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v576, char* v577, struct std__random_access_iterator_tag v578) {
bb579:
  char* __first580;
  char* __last581;
  struct std__random_access_iterator_tag unnamed582;
  long __retval583;
  __first580 = v576;
  __last581 = v577;
  unnamed582 = v578;
  char* t584 = __last581;
  char* t585 = __first580;
  long diff586 = t584 - t585;
  __retval583 = diff586;
  long t587 = __retval583;
  return t587;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v588) {
bb589:
  char** unnamed590;
  struct std__random_access_iterator_tag __retval591;
  unnamed590 = v588;
  struct std__random_access_iterator_tag t592 = __retval591;
  return t592;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v593, char* v594) {
bb595:
  char* __first596;
  char* __last597;
  long __retval598;
  struct std__random_access_iterator_tag agg_tmp0599;
  __first596 = v593;
  __last597 = v594;
  char* t600 = __first596;
  char* t601 = __last597;
  struct std__random_access_iterator_tag r602 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first596);
  agg_tmp0599 = r602;
  struct std__random_access_iterator_tag t603 = agg_tmp0599;
  long r604 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t600, t601, t603);
  __retval598 = r604;
  long t605 = __retval598;
  return t605;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v606, char* v607) {
bb608:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this609;
  char* __p610;
  this609 = v606;
  __p610 = v607;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t611 = this609;
  char* t612 = __p610;
  t611->_M_dataplus._M_p = t612;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v613) {
bb614:
  struct std__allocator_char_* __a615;
  unsigned long __retval616;
  __a615 = v613;
  unsigned long c617 = -1;
  unsigned long c618 = 1;
  unsigned long b619 = c617 / c618;
  __retval616 = b619;
  unsigned long t620 = __retval616;
  return t620;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v621) {
bb622:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this623;
  struct std__allocator_char_* __retval624;
  this623 = v621;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t625 = this623;
  struct std__allocator_char_* base626 = (struct std__allocator_char_*)((char *)&(t625->_M_dataplus) + 0);
  __retval624 = base626;
  struct std__allocator_char_* t627 = __retval624;
  return t627;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v628, unsigned long* v629) {
bb630:
  unsigned long* __a631;
  unsigned long* __b632;
  unsigned long* __retval633;
  __a631 = v628;
  __b632 = v629;
    unsigned long* t634 = __b632;
    unsigned long t635 = *t634;
    unsigned long* t636 = __a631;
    unsigned long t637 = *t636;
    _Bool c638 = ((t635 < t637)) ? 1 : 0;
    if (c638) {
      unsigned long* t639 = __b632;
      __retval633 = t639;
      unsigned long* t640 = __retval633;
      return t640;
    }
  unsigned long* t641 = __a631;
  __retval633 = t641;
  unsigned long* t642 = __retval633;
  return t642;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v643) {
bb644:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this645;
  unsigned long __retval646;
  unsigned long __diffmax647;
  unsigned long __allocmax648;
  this645 = v643;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t649 = this645;
  unsigned long c650 = 9223372036854775807;
  __diffmax647 = c650;
  struct std__allocator_char_* r651 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t649);
  unsigned long r652 = std__allocator_traits_std__allocator_char_____max_size(r651);
  __allocmax648 = r652;
  unsigned long* r653 = unsigned_long_const__std__min_unsigned_long_(&__diffmax647, &__allocmax648);
  unsigned long t654 = *r653;
  unsigned long c655 = 1;
  unsigned long b656 = t654 - c655;
  __retval646 = b656;
  unsigned long t657 = __retval646;
  return t657;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v658) {
bb659:
  struct std____new_allocator_char_* this660;
  unsigned long __retval661;
  this660 = v658;
  struct std____new_allocator_char_* t662 = this660;
  unsigned long c663 = 9223372036854775807;
  unsigned long c664 = 1;
  unsigned long b665 = c663 / c664;
  __retval661 = b665;
  unsigned long t666 = __retval661;
  return t666;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v667, unsigned long v668, void* v669) {
bb670:
  struct std____new_allocator_char_* this671;
  unsigned long __n672;
  void* unnamed673;
  char* __retval674;
  this671 = v667;
  __n672 = v668;
  unnamed673 = v669;
  struct std____new_allocator_char_* t675 = this671;
    unsigned long t676 = __n672;
    unsigned long r677 = std____new_allocator_char____M_max_size___const(t675);
    _Bool c678 = ((t676 > r677)) ? 1 : 0;
    if (c678) {
        unsigned long t679 = __n672;
        unsigned long c680 = -1;
        unsigned long c681 = 1;
        unsigned long b682 = c680 / c681;
        _Bool c683 = ((t679 > b682)) ? 1 : 0;
        if (c683) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c684 = 1;
    unsigned long c685 = 16;
    _Bool c686 = ((c684 > c685)) ? 1 : 0;
    if (c686) {
      unsigned long __al687;
      unsigned long c688 = 1;
      __al687 = c688;
      unsigned long t689 = __n672;
      unsigned long c690 = 1;
      unsigned long b691 = t689 * c690;
      unsigned long t692 = __al687;
      void* r693 = operator_new_2(b691, t692);
      char* cast694 = (char*)r693;
      __retval674 = cast694;
      char* t695 = __retval674;
      return t695;
    }
  unsigned long t696 = __n672;
  unsigned long c697 = 1;
  unsigned long b698 = t696 * c697;
  void* r699 = operator_new(b698);
  char* cast700 = (char*)r699;
  __retval674 = cast700;
  char* t701 = __retval674;
  return t701;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v702, unsigned long v703) {
bb704:
  struct std__allocator_char_* this705;
  unsigned long __n706;
  char* __retval707;
  this705 = v702;
  __n706 = v703;
  struct std__allocator_char_* t708 = this705;
    _Bool r709 = std____is_constant_evaluated();
    if (r709) {
        unsigned long t710 = __n706;
        unsigned long c711 = 1;
        unsigned long ovr712;
        _Bool ovf713 = __builtin_mul_overflow(t710, c711, &ovr712);
        __n706 = ovr712;
        if (ovf713) {
          std____throw_bad_array_new_length();
        }
      unsigned long t714 = __n706;
      void* r715 = operator_new(t714);
      char* cast716 = (char*)r715;
      __retval707 = cast716;
      char* t717 = __retval707;
      return t717;
    }
  struct std____new_allocator_char_* base718 = (struct std____new_allocator_char_*)((char *)t708 + 0);
  unsigned long t719 = __n706;
  void* c720 = ((void*)0);
  char* r721 = std____new_allocator_char___allocate(base718, t719, c720);
  __retval707 = r721;
  char* t722 = __retval707;
  return t722;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v723, unsigned long v724) {
bb725:
  struct std__allocator_char_* __a726;
  unsigned long __n727;
  char* __retval728;
  __a726 = v723;
  __n727 = v724;
  struct std__allocator_char_* t729 = __a726;
  unsigned long t730 = __n727;
  char* r731 = std__allocator_char___allocate(t729, t730);
  __retval728 = r731;
  char* t732 = __retval728;
  return t732;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v733, unsigned long v734) {
bb735:
  struct std__allocator_char_* __a736;
  unsigned long __n737;
  char* __retval738;
  char* __p739;
  __a736 = v733;
  __n737 = v734;
  struct std__allocator_char_* t740 = __a736;
  unsigned long t741 = __n737;
  char* r742 = std__allocator_traits_std__allocator_char_____allocate(t740, t741);
  __p739 = r742;
  char* t743 = __p739;
  __retval738 = t743;
  char* t744 = __retval738;
  return t744;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v745) {
bb746:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this747;
  struct std__allocator_char_* __retval748;
  this747 = v745;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t749 = this747;
  struct std__allocator_char_* base750 = (struct std__allocator_char_*)((char *)&(t749->_M_dataplus) + 0);
  __retval748 = base750;
  struct std__allocator_char_* t751 = __retval748;
  return t751;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v752, unsigned long* v753, unsigned long v754) {
bb755:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this756;
  unsigned long* __capacity757;
  unsigned long __old_capacity758;
  char* __retval759;
  this756 = v752;
  __capacity757 = v753;
  __old_capacity758 = v754;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t760 = this756;
    unsigned long* t761 = __capacity757;
    unsigned long t762 = *t761;
    unsigned long r763 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t760);
    _Bool c764 = ((t762 > r763)) ? 1 : 0;
    if (c764) {
      char* cast765 = (char*)&(_str_10);
      std____throw_length_error(cast765);
    }
    unsigned long* t766 = __capacity757;
    unsigned long t767 = *t766;
    unsigned long t768 = __old_capacity758;
    _Bool c769 = ((t767 > t768)) ? 1 : 0;
    _Bool ternary770;
    if (c769) {
      unsigned long* t771 = __capacity757;
      unsigned long t772 = *t771;
      unsigned long c773 = 2;
      unsigned long t774 = __old_capacity758;
      unsigned long b775 = c773 * t774;
      _Bool c776 = ((t772 < b775)) ? 1 : 0;
      ternary770 = (_Bool)c776;
    } else {
      _Bool c777 = 0;
      ternary770 = (_Bool)c777;
    }
    if (ternary770) {
      unsigned long c778 = 2;
      unsigned long t779 = __old_capacity758;
      unsigned long b780 = c778 * t779;
      unsigned long* t781 = __capacity757;
      *t781 = b780;
        unsigned long* t782 = __capacity757;
        unsigned long t783 = *t782;
        unsigned long r784 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t760);
        _Bool c785 = ((t783 > r784)) ? 1 : 0;
        if (c785) {
          unsigned long r786 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t760);
          unsigned long* t787 = __capacity757;
          *t787 = r786;
        }
    }
  struct std__allocator_char_* r788 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t760);
  unsigned long* t789 = __capacity757;
  unsigned long t790 = *t789;
  unsigned long c791 = 1;
  unsigned long b792 = t790 + c791;
  char* r793 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r788, b792);
  __retval759 = r793;
  char* t794 = __retval759;
  return t794;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v795, unsigned long v796) {
bb797:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this798;
  unsigned long __capacity799;
  this798 = v795;
  __capacity799 = v796;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t800 = this798;
  unsigned long t801 = __capacity799;
  t800->field2._M_allocated_capacity = t801;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb802:
  _Bool __retval803;
    _Bool c804 = 0;
    __retval803 = c804;
    _Bool t805 = __retval803;
    return t805;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v806) {
bb807:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this808;
  this808 = v806;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t809 = this808;
    _Bool r810 = std__is_constant_evaluated();
    if (r810) {
        unsigned long __i811;
        unsigned long c812 = 0;
        __i811 = c812;
        while (1) {
          unsigned long t814 = __i811;
          unsigned long c815 = 15;
          _Bool c816 = ((t814 <= c815)) ? 1 : 0;
          if (!c816) break;
          char c817 = 0;
          unsigned long t818 = __i811;
          t809->field2._M_local_buf[t818] = c817;
        for_step813: ;
          unsigned long t819 = __i811;
          unsigned long u820 = t819 + 1;
          __i811 = u820;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v821, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v822) {
bb823:
  struct _Guard* this824;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s825;
  this824 = v821;
  __s825 = v822;
  struct _Guard* t826 = this824;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t827 = __s825;
  t826->_M_guarded = t827;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v828, char* v829) {
bb830:
  char* __location831;
  char* __args832;
  char* __retval833;
  void* __loc834;
  __location831 = v828;
  __args832 = v829;
  char* t835 = __location831;
  void* cast836 = (void*)t835;
  __loc834 = cast836;
    void* t837 = __loc834;
    char* cast838 = (char*)t837;
    char* t839 = __args832;
    char t840 = *t839;
    *cast838 = t840;
    __retval833 = cast838;
    char* t841 = __retval833;
    return t841;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v842, char* v843) {
bb844:
  char* __c1845;
  char* __c2846;
  __c1845 = v842;
  __c2846 = v843;
    _Bool r847 = std____is_constant_evaluated();
    if (r847) {
      char* t848 = __c1845;
      char* t849 = __c2846;
      char* r850 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t848, t849);
    } else {
      char* t851 = __c2846;
      char t852 = *t851;
      char* t853 = __c1845;
      *t853 = t852;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v854, char* v855, unsigned long v856) {
bb857:
  char* __s1858;
  char* __s2859;
  unsigned long __n860;
  char* __retval861;
  __s1858 = v854;
  __s2859 = v855;
  __n860 = v856;
    unsigned long t862 = __n860;
    unsigned long c863 = 0;
    _Bool c864 = ((t862 == c863)) ? 1 : 0;
    if (c864) {
      char* t865 = __s1858;
      __retval861 = t865;
      char* t866 = __retval861;
      return t866;
    }
    _Bool r867 = std____is_constant_evaluated();
    if (r867) {
        unsigned long __i868;
        unsigned long c869 = 0;
        __i868 = c869;
        while (1) {
          unsigned long t871 = __i868;
          unsigned long t872 = __n860;
          _Bool c873 = ((t871 < t872)) ? 1 : 0;
          if (!c873) break;
          char* t874 = __s1858;
          unsigned long t875 = __i868;
          char* ptr876 = &(t874)[t875];
          unsigned long t877 = __i868;
          char* t878 = __s2859;
          char* ptr879 = &(t878)[t877];
          char* r880 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr876, ptr879);
        for_step870: ;
          unsigned long t881 = __i868;
          unsigned long u882 = t881 + 1;
          __i868 = u882;
        }
      char* t883 = __s1858;
      __retval861 = t883;
      char* t884 = __retval861;
      return t884;
    }
  char* t885 = __s1858;
  void* cast886 = (void*)t885;
  char* t887 = __s2859;
  void* cast888 = (void*)t887;
  unsigned long t889 = __n860;
  unsigned long c890 = 1;
  unsigned long b891 = t889 * c890;
  void* r892 = memcpy(cast886, cast888, b891);
  char* t893 = __s1858;
  __retval861 = t893;
  char* t894 = __retval861;
  return t894;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v895, char* v896, unsigned long v897) {
bb898:
  char* __s1899;
  char* __s2900;
  unsigned long __n901;
  char* __retval902;
  __s1899 = v895;
  __s2900 = v896;
  __n901 = v897;
    unsigned long t903 = __n901;
    unsigned long c904 = 0;
    _Bool c905 = ((t903 == c904)) ? 1 : 0;
    if (c905) {
      char* t906 = __s1899;
      __retval902 = t906;
      char* t907 = __retval902;
      return t907;
    }
    _Bool r908 = std____is_constant_evaluated();
    if (r908) {
      char* t909 = __s1899;
      char* t910 = __s2900;
      unsigned long t911 = __n901;
      char* r912 = __gnu_cxx__char_traits_char___copy(t909, t910, t911);
      __retval902 = r912;
      char* t913 = __retval902;
      return t913;
    }
  char* t914 = __s1899;
  void* cast915 = (void*)t914;
  char* t916 = __s2900;
  void* cast917 = (void*)t916;
  unsigned long t918 = __n901;
  void* r919 = memcpy(cast915, cast917, t918);
  char* cast920 = (char*)r919;
  __retval902 = cast920;
  char* t921 = __retval902;
  return t921;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v922, char* v923, unsigned long v924) {
bb925:
  char* __d926;
  char* __s927;
  unsigned long __n928;
  __d926 = v922;
  __s927 = v923;
  __n928 = v924;
    unsigned long t929 = __n928;
    unsigned long c930 = 1;
    _Bool c931 = ((t929 == c930)) ? 1 : 0;
    if (c931) {
      char* t932 = __d926;
      char* t933 = __s927;
      std__char_traits_char___assign(t932, t933);
    } else {
      char* t934 = __d926;
      char* t935 = __s927;
      unsigned long t936 = __n928;
      char* r937 = std__char_traits_char___copy(t934, t935, t936);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v938) {
bb939:
  char* __it940;
  char* __retval941;
  __it940 = v938;
  char* t942 = __it940;
  __retval941 = t942;
  char* t943 = __retval941;
  return t943;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v944, char* v945, char* v946) {
bb947:
  char* __p948;
  char* __k1949;
  char* __k2950;
  __p948 = v944;
  __k1949 = v945;
  __k2950 = v946;
    char* t951 = __p948;
    char* t952 = __k1949;
    char* r953 = char_const__std____niter_base_char_const__(t952);
    char* t954 = __k2950;
    char* t955 = __k1949;
    long diff956 = t954 - t955;
    unsigned long cast957 = (unsigned long)diff956;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t951, r953, cast957);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v958) {
bb959:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this960;
  char* __retval961;
  this960 = v958;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t962 = this960;
  char* t963 = t962->_M_dataplus._M_p;
  __retval961 = t963;
  char* t964 = __retval961;
  return t964;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v965, unsigned long v966) {
bb967:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this968;
  unsigned long __length969;
  this968 = v965;
  __length969 = v966;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t970 = this968;
  unsigned long t971 = __length969;
  t970->_M_string_length = t971;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v972, unsigned long v973) {
bb974:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this975;
  unsigned long __n976;
  char ref_tmp0977;
  this975 = v972;
  __n976 = v973;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t978 = this975;
  unsigned long t979 = __n976;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t978, t979);
  unsigned long t980 = __n976;
  char* r981 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t978);
  char* ptr982 = &(r981)[t980];
  char c983 = 0;
  ref_tmp0977 = c983;
  std__char_traits_char___assign(ptr982, &ref_tmp0977);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v984) {
bb985:
  struct _Guard* this986;
  this986 = v984;
  struct _Guard* t987 = this986;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t988 = t987->_M_guarded;
    _Bool cast989 = (_Bool)t988;
    if (cast989) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t990 = t987->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t990);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v991, char* v992, char* v993, struct std__forward_iterator_tag v994) {
bb995:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this996;
  char* __beg997;
  char* __end998;
  struct std__forward_iterator_tag unnamed999;
  unsigned long __dnew1000;
  struct _Guard __guard1001;
  this996 = v991;
  __beg997 = v992;
  __end998 = v993;
  unnamed999 = v994;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1002 = this996;
  char* t1003 = __beg997;
  char* t1004 = __end998;
  long r1005 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1003, t1004);
  unsigned long cast1006 = (unsigned long)r1005;
  __dnew1000 = cast1006;
    unsigned long t1007 = __dnew1000;
    unsigned long c1008 = 15;
    _Bool c1009 = ((t1007 > c1008)) ? 1 : 0;
    if (c1009) {
      unsigned long c1010 = 0;
      char* r1011 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1002, &__dnew1000, c1010);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1002, r1011);
      unsigned long t1012 = __dnew1000;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1002, t1012);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1002);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1001, t1002);
    char* r1013 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1002);
    char* t1014 = __beg997;
    char* t1015 = __end998;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1013, t1014, t1015);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1016 = ((void*)0);
    __guard1001._M_guarded = c1016;
    unsigned long t1017 = __dnew1000;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1002, t1017);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1001);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1018) {
bb1019:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1020;
  this1020 = v1018;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1021 = this1020;
  {
    struct std__allocator_char_* base1022 = (struct std__allocator_char_*)((char *)t1021 + 0);
    std__allocator_char____allocator(base1022);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1023, struct std____new_allocator_char_* v1024) {
bb1025:
  struct std____new_allocator_char_* this1026;
  struct std____new_allocator_char_* unnamed1027;
  this1026 = v1023;
  unnamed1027 = v1024;
  struct std____new_allocator_char_* t1028 = this1026;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1029) {
bb1030:
  char* __r1031;
  char* __retval1032;
  __r1031 = v1029;
  char* t1033 = __r1031;
  __retval1032 = t1033;
  char* t1034 = __retval1032;
  return t1034;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1035) {
bb1036:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1037;
  char* __retval1038;
  this1037 = v1035;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1039 = this1037;
  char* cast1040 = (char*)&(t1039->field2._M_local_buf);
  char* r1041 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1040);
  __retval1038 = r1041;
  char* t1042 = __retval1038;
  return t1042;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1043) {
bb1044:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1045;
  _Bool __retval1046;
  this1045 = v1043;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1047 = this1045;
    char* r1048 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1047);
    char* r1049 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1047);
    _Bool c1050 = ((r1048 == r1049)) ? 1 : 0;
    if (c1050) {
        unsigned long t1051 = t1047->_M_string_length;
        unsigned long c1052 = 15;
        _Bool c1053 = ((t1051 > c1052)) ? 1 : 0;
        if (c1053) {
          __builtin_unreachable();
        }
      _Bool c1054 = 1;
      __retval1046 = c1054;
      _Bool t1055 = __retval1046;
      return t1055;
    }
  _Bool c1056 = 0;
  __retval1046 = c1056;
  _Bool t1057 = __retval1046;
  return t1057;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1058, char* v1059, unsigned long v1060) {
bb1061:
  struct std____new_allocator_char_* this1062;
  char* __p1063;
  unsigned long __n1064;
  this1062 = v1058;
  __p1063 = v1059;
  __n1064 = v1060;
  struct std____new_allocator_char_* t1065 = this1062;
    unsigned long c1066 = 1;
    unsigned long c1067 = 16;
    _Bool c1068 = ((c1066 > c1067)) ? 1 : 0;
    if (c1068) {
      char* t1069 = __p1063;
      void* cast1070 = (void*)t1069;
      unsigned long t1071 = __n1064;
      unsigned long c1072 = 1;
      unsigned long b1073 = t1071 * c1072;
      unsigned long c1074 = 1;
      operator_delete_3(cast1070, b1073, c1074);
      return;
    }
  char* t1075 = __p1063;
  void* cast1076 = (void*)t1075;
  unsigned long t1077 = __n1064;
  unsigned long c1078 = 1;
  unsigned long b1079 = t1077 * c1078;
  operator_delete_2(cast1076, b1079);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1080, char* v1081, unsigned long v1082) {
bb1083:
  struct std__allocator_char_* this1084;
  char* __p1085;
  unsigned long __n1086;
  this1084 = v1080;
  __p1085 = v1081;
  __n1086 = v1082;
  struct std__allocator_char_* t1087 = this1084;
    _Bool r1088 = std____is_constant_evaluated();
    if (r1088) {
      char* t1089 = __p1085;
      void* cast1090 = (void*)t1089;
      operator_delete(cast1090);
      return;
    }
  struct std____new_allocator_char_* base1091 = (struct std____new_allocator_char_*)((char *)t1087 + 0);
  char* t1092 = __p1085;
  unsigned long t1093 = __n1086;
  std____new_allocator_char___deallocate(base1091, t1092, t1093);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1094, char* v1095, unsigned long v1096) {
bb1097:
  struct std__allocator_char_* __a1098;
  char* __p1099;
  unsigned long __n1100;
  __a1098 = v1094;
  __p1099 = v1095;
  __n1100 = v1096;
  struct std__allocator_char_* t1101 = __a1098;
  char* t1102 = __p1099;
  unsigned long t1103 = __n1100;
  std__allocator_char___deallocate(t1101, t1102, t1103);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1104, unsigned long v1105) {
bb1106:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1107;
  unsigned long __size1108;
  this1107 = v1104;
  __size1108 = v1105;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1109 = this1107;
  struct std__allocator_char_* r1110 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1109);
  char* r1111 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1109);
  unsigned long t1112 = __size1108;
  unsigned long c1113 = 1;
  unsigned long b1114 = t1112 + c1113;
  std__allocator_traits_std__allocator_char_____deallocate(r1110, r1111, b1114);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1115) {
bb1116:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1117;
  this1117 = v1115;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1118 = this1117;
    _Bool r1119 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1118);
    _Bool u1120 = !r1119;
    if (u1120) {
      unsigned long t1121 = t1118->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1118, t1121);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1122, char* v1123, struct std__allocator_char_* v1124) {
bb1125:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1126;
  char* __dat1127;
  struct std__allocator_char_* __a1128;
  this1126 = v1122;
  __dat1127 = v1123;
  __a1128 = v1124;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1129 = this1126;
  struct std__allocator_char_* base1130 = (struct std__allocator_char_*)((char *)t1129 + 0);
  struct std__allocator_char_* t1131 = __a1128;
  std__allocator_char___allocator(base1130, t1131);
    char* t1132 = __dat1127;
    t1129->_M_p = t1132;
  return;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEEC2Ev
void std__basic_streambuf_char__std__char_traits_char_____basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v1133) {
bb1134:
  struct std__basic_streambuf_char__std__char_traits_char__* this1135;
  this1135 = v1133;
  struct std__basic_streambuf_char__std__char_traits_char__* t1136 = this1135;
  void* v1137 = (void*)&_ZTVSt15basic_streambufIcSt11char_traitsIcEE[2];
  void** v1138 = (void**)t1136;
  *(void**)(v1138) = (void*)v1137;
  char* c1139 = ((void*)0);
  t1136->_M_in_beg = c1139;
  char* c1140 = ((void*)0);
  t1136->_M_in_cur = c1140;
  char* c1141 = ((void*)0);
  t1136->_M_in_end = c1141;
  char* c1142 = ((void*)0);
  t1136->_M_out_beg = c1142;
  char* c1143 = ((void*)0);
  t1136->_M_out_cur = c1143;
  char* c1144 = ((void*)0);
  t1136->_M_out_end = c1144;
  std__locale__locale(&t1136->_M_buf_locale);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1145) {
bb1146:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1147;
  char* __retval1148;
  this1147 = v1145;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1149 = this1147;
  char* r1150 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1149);
  __retval1148 = r1150;
  char* t1151 = __retval1148;
  return t1151;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1152) {
bb1153:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1154;
  unsigned long __retval1155;
  unsigned long __sz1156;
  this1154 = v1152;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1157 = this1154;
  unsigned long t1158 = t1157->_M_string_length;
  __sz1156 = t1158;
    unsigned long t1159 = __sz1156;
    unsigned long r1160 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1157);
    _Bool c1161 = ((t1159 > r1160)) ? 1 : 0;
    if (c1161) {
      __builtin_unreachable();
    }
  unsigned long t1162 = __sz1156;
  __retval1155 = t1162;
  unsigned long t1163 = __retval1155;
  return t1163;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1164, struct std__allocator_char_* v1165) {
bb1166:
  struct std__allocator_char_* this1167;
  struct std__allocator_char_* __a1168;
  this1167 = v1164;
  __a1168 = v1165;
  struct std__allocator_char_* t1169 = this1167;
  struct std____new_allocator_char_* base1170 = (struct std____new_allocator_char_*)((char *)t1169 + 0);
  struct std__allocator_char_* t1171 = __a1168;
  struct std____new_allocator_char_* base1172 = (struct std____new_allocator_char_*)((char *)t1171 + 0);
  std____new_allocator_char_____new_allocator(base1170, base1172);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13get_allocatorEv
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1173) {
bb1174:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1175;
  struct std__allocator_char_ __retval1176;
  this1175 = v1173;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1177 = this1175;
  struct std__allocator_char_* r1178 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1177);
  std__allocator_char___allocator(&__retval1176, r1178);
  struct std__allocator_char_ t1179 = __retval1176;
  return t1179;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EPKcmRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1180, char* v1181, unsigned long v1182, struct std__allocator_char_* v1183) {
bb1184:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1185;
  char* __s1186;
  unsigned long __n1187;
  struct std__allocator_char_* __a1188;
  struct std__forward_iterator_tag agg_tmp01189;
  this1185 = v1180;
  __s1186 = v1181;
  __n1187 = v1182;
  __a1188 = v1183;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1190 = this1185;
  char* r1191 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t1190);
  struct std__allocator_char_* t1192 = __a1188;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t1190->_M_dataplus, r1191, t1192);
      char* t1193 = __s1186;
      char* c1194 = ((void*)0);
      _Bool c1195 = ((t1193 == c1194)) ? 1 : 0;
      _Bool ternary1196;
      if (c1195) {
        unsigned long t1197 = __n1187;
        unsigned long c1198 = 0;
        _Bool c1199 = ((t1197 > c1198)) ? 1 : 0;
        ternary1196 = (_Bool)c1199;
      } else {
        _Bool c1200 = 0;
        ternary1196 = (_Bool)c1200;
      }
      if (ternary1196) {
        char* cast1201 = (char*)&(_str_9);
        std____throw_logic_error(cast1201);
      }
    char* t1202 = __s1186;
    char* t1203 = __s1186;
    unsigned long t1204 = __n1187;
    char* ptr1205 = &(t1203)[t1204];
    struct std__forward_iterator_tag t1206 = agg_tmp01189;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t1190, t1202, ptr1205, t1206);
  return;
}

// function: _ZStanSt13_Ios_OpenmodeS_
int std__operator_(int v1207, int v1208) {
bb1209:
  int __a1210;
  int __b1211;
  int __retval1212;
  __a1210 = v1207;
  __b1211 = v1208;
  int t1213 = __a1210;
  int t1214 = __b1211;
  int b1215 = t1213 & t1214;
  __retval1212 = b1215;
  int t1216 = __retval1212;
  return t1216;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1217) {
bb1218:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1219;
  char* __retval1220;
  this1219 = v1217;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1221 = this1219;
  char* r1222 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1221);
  __retval1220 = r1222;
  char* t1223 = __retval1220;
  return t1223;
}

// function: _ZNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEE17_M_stringbuf_initESt13_Ios_Openmode
void std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______M_stringbuf_init(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* v1224, int v1225) {
bb1226:
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* this1227;
  int __mode1228;
  unsigned long __len1229;
  this1227 = v1224;
  __mode1228 = v1225;
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* t1230 = this1227;
  int t1231 = __mode1228;
  t1230->_M_mode = t1231;
  unsigned long c1232 = 0;
  __len1229 = c1232;
    int t1233 = t1230->_M_mode;
    int t1234 = _ZNSt8ios_base3ateE_const;
    int t1235 = _ZNSt8ios_base3appE_const;
    int r1236 = std__operator__3(t1234, t1235);
    int r1237 = std__operator_(t1233, r1236);
    _Bool cast1238 = (_Bool)r1237;
    if (cast1238) {
      unsigned long r1239 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(&t1230->_M_string);
      __len1229 = r1239;
    }
  char* r1240 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data(&t1230->_M_string);
  unsigned long c1241 = 0;
  unsigned long t1242 = __len1229;
  std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______M_sync(t1230, r1240, c1241, t1242);
  return;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v1243) {
bb1244:
  struct std__basic_streambuf_char__std__char_traits_char__* this1245;
  this1245 = v1243;
  struct std__basic_streambuf_char__std__char_traits_char__* t1246 = this1245;
  {
    std__locale___locale(&t1246->_M_buf_locale);
  }
  return;
}

