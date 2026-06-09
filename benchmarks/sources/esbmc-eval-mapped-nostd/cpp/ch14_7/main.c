extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct ClientData { int __field0; char __field1[15]; char __field2[10]; double __field3; };
struct _Guard { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* _M_guarded; };
struct _IO_FILE { int __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; char* __field7; char* __field8; char* __field9; char* __field10; char* __field11; struct _IO_marker* __field12; struct _IO_FILE* __field13; int __field14; unsigned char __field15[3]; char __field16[1]; long __field17; unsigned short __field18; char __field19; char __field20[1]; void* __field21; long __field22; struct _IO_codecvt* __field23; struct _IO_wide_data* __field24; struct _IO_FILE* __field25; void* __field26; struct _IO_FILE** __field27; int __field28; int __field29; unsigned long __field30; char __field31[8]; };
struct _IO_codecvt { unsigned char __placeholder; };
struct _IO_marker { unsigned char __placeholder; };
struct _IO_wide_data { unsigned char __placeholder; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct __pthread_internal_list { struct __pthread_internal_list* __field0; struct __pthread_internal_list* __field1; };
struct __pthread_mutex_s { int __field0; unsigned int __field1; int __field2; unsigned int __field3; int __field4; short __field5; short __field6; struct __pthread_internal_list __field7; };
union anon_0 { unsigned int __field0; char __field1[4]; };
union anon_1 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct anon_struct_0 { unsigned char* __field0[5]; unsigned char* __field1[5]; };
struct anon_struct_1 { unsigned char* __field0[4]; };
union pthread_mutex_t { struct __pthread_mutex_s __field0; char __field1[40]; long __field2; };
struct std___Setprecision { int _M_n; };
struct std___Setw { int _M_n; };
struct std____basic_file_char_ { struct _IO_FILE* __field0; _Bool __field1; unsigned char __field2[7]; } __attribute__((packed));
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
struct __mbstate_t { int __field0; union anon_0 __field1; };
struct std____codecvt_abstract_base_char__char____mbstate_t_ { struct std__locale__facet __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_1 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale _M_buf_locale; };
struct std__codecvt_char__char____mbstate_t_ { struct std____codecvt_abstract_base_char__char____mbstate_t_ __field0; struct __locale_struct* __field1; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long _M_precision; long _M_width; int _M_flags; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_filebuf_char__std__char_traits_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; union pthread_mutex_t __field1; struct std____basic_file_char_ _M_file; int __field3; struct __mbstate_t __field4; struct __mbstate_t __field5; struct __mbstate_t __field6; char* __field7; unsigned long __field8; _Bool __field9; _Bool __field10; _Bool __field11; char __field12; char* __field13; char* __field14; _Bool __field15; struct std__codecvt_char__char____mbstate_t_* __field16; char* __field17; long __field18; char* __field19; char* __field20; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long _M_gcount; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__basic_ifstream_char__std__char_traits_char__ { struct std__basic_istream_char__std__char_traits_char__ __field0; struct std__basic_filebuf_char__std__char_traits_char__ _M_filebuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
int _ZNSt8ios_base6eofbitE_const __attribute__((aligned(4))) = 2;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base7goodbitE_const __attribute__((aligned(4))) = 0;
int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base9showpointE_const __attribute__((aligned(4))) = 1024;
int _ZNSt8ios_base10floatfieldE_const __attribute__((aligned(4))) = 260;
int _ZNSt8ios_base5fixedE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base5rightE_const __attribute__((aligned(4))) = 128;
int _ZNSt8ios_base11adjustfieldE_const __attribute__((aligned(4))) = 176;
int _ZNSt8ios_base4leftE_const __attribute__((aligned(4))) = 32;
int _ZNSt8ios_base2inE_const __attribute__((aligned(4))) = 8;
char _str[11] = "credit.dat";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cerr __attribute__((aligned(8)));
char _str_1[26] = "File could not be opened.";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[8] = "Account";
char _str_3[10] = "Last Name";
char _str_4[11] = "First Name";
char _str_5[8] = "Balance";
char _str_6[1];
char _str_7[50] = "basic_string: construction from null is not valid";
char _str_8[24] = "basic_string::_M_create";
extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void std__ios_base__ios_base(struct std__ios_base* p0);
void std__ios_base___ios_base(struct std__ios_base* p0) {}
void std__basic_ios_char__std__char_traits_char_____basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_istream_char__std__char_traits_char_____basic_istream(struct std__basic_istream_char__std__char_traits_char__* p0, void** p1);
extern void std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* p0);
extern void std__basic_ios_char__std__char_traits_char_____init(struct std__basic_ios_char__std__char_traits_char__* p0, struct std__basic_streambuf_char__std__char_traits_char__* p1);
extern struct std__basic_filebuf_char__std__char_traits_char__* std__basic_filebuf_char__std__char_traits_char_____open(struct std__basic_filebuf_char__std__char_traits_char__* p0, char* p1, int p2);
int std__operator__6(int p0, int p1);
int std__operator__4(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
void std__basic_ifstream_char__std__char_traits_char_____open(struct std__basic_ifstream_char__std__char_traits_char__* p0, char* p1, int p2);
void std__basic_filebuf_char__std__char_traits_char______basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* p0);
void std__basic_istream_char__std__char_traits_char______basic_istream(struct std__basic_istream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* p0, char* p1, int p2);
int std__operator_(int p0, int p1);
_Bool std__basic_ios_char__std__char_traits_char_____fail___const(struct std__basic_ios_char__std__char_traits_char__* p0);
_Bool std__basic_ios_char__std__char_traits_char_____operator____const(struct std__basic_ios_char__std__char_traits_char__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
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
extern void exit(int p0);
long std__ios_base__width(struct std__ios_base* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setw p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
int* std__operator__(int* p0, int p1);
int std__operator__3(int p0);
int std__operator__5(int p0, int p1);
int* std__operator___2(int* p0, int p1);
int std__operator__2(int p0, int p1);
int std__ios_base__setf_2(struct std__ios_base* p0, int p1, int p2);
struct std__ios_base* std__left(struct std__ios_base* p0);
struct std___Setw std__setw(int p0);
struct std__ios_base* std__right(struct std__ios_base* p0);
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
extern void ClientData__ClientData(struct ClientData* p0, int p1, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ p3, double p4);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__read(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool std__basic_ios_char__std__char_traits_char_____operator_bool___const(struct std__basic_ios_char__std__char_traits_char__* p0);
_Bool std__basic_ios_char__std__char_traits_char_____eof___const(struct std__basic_ios_char__std__char_traits_char__* p0);
extern int ClientData__getAccountNumber___const(struct ClientData* p0);
long std__ios_base__precision(struct std__ios_base* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setprecision p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
extern struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ClientData__getLastName_abi_cxx11____const(struct ClientData* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ClientData__getFirstName_abi_cxx11____const(struct ClientData* p0);
struct std___Setprecision std__setprecision(int p0);
struct std__ios_base* std__fixed(struct std__ios_base* p0);
int std__ios_base__setf(struct std__ios_base* p0, int p1);
struct std__ios_base* std__showpoint(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_double_(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
extern double ClientData__getBalance___const(struct ClientData* p0);
void outputLine(struct std__basic_ostream_char__std__char_traits_char__* p0, struct ClientData* p1);
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream_2(struct std__basic_ifstream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* p0);
int main();
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
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
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
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
extern int __gxx_personality_v0();
extern struct std__basic_filebuf_char__std__char_traits_char__* std__basic_filebuf_char__std__char_traits_char_____close(struct std__basic_filebuf_char__std__char_traits_char__* p0);
void std____basic_file_char______basic_file(struct std____basic_file_char_* p0) {}
void std__locale___locale(struct std__locale* p0) {}
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* p0);

extern unsigned char* _ZTTSt14basic_ifstreamIcSt11char_traitsIcEE[4] __attribute__((aligned(8)));

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
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZStorSt13_Ios_OpenmodeS_
int std__operator__6(int v54, int v55) {
bb56:
  int __a57;
  int __b58;
  int __retval59;
  __a57 = v54;
  __b58 = v55;
  int t60 = __a57;
  int t61 = __b58;
  int b62 = t60 | t61;
  __retval59 = b62;
  int t63 = __retval59;
  return t63;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__4(int v64, int v65) {
bb66:
  int __a67;
  int __b68;
  int __retval69;
  __a67 = v64;
  __b68 = v65;
  int t70 = __a67;
  int t71 = __b68;
  int b72 = t70 | t71;
  __retval69 = b72;
  int t73 = __retval69;
  return t73;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v74) {
bb75:
  struct std__basic_ios_char__std__char_traits_char__* this76;
  int __retval77;
  this76 = v74;
  struct std__basic_ios_char__std__char_traits_char__* t78 = this76;
  struct std__ios_base* base79 = (struct std__ios_base*)((char *)t78 + 0);
  int t80 = base79->_M_streambuf_state;
  __retval77 = t80;
  int t81 = __retval77;
  return t81;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v82, int v83) {
bb84:
  struct std__basic_ios_char__std__char_traits_char__* this85;
  int __state86;
  this85 = v82;
  __state86 = v83;
  struct std__basic_ios_char__std__char_traits_char__* t87 = this85;
  int r88 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t87);
  if (__cir_exc_active) {
    return;
  }
  int t89 = __state86;
  int r90 = std__operator__4(r88, t89);
  std__basic_ios_char__std__char_traits_char_____clear(t87, r90);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode
void std__basic_ifstream_char__std__char_traits_char_____open(struct std__basic_ifstream_char__std__char_traits_char__* v91, char* v92, int v93) {
bb94:
  struct std__basic_ifstream_char__std__char_traits_char__* this95;
  char* __s96;
  int __mode97;
  this95 = v91;
  __s96 = v92;
  __mode97 = v93;
  struct std__basic_ifstream_char__std__char_traits_char__* t98 = this95;
    char* t99 = __s96;
    int t100 = __mode97;
    int t101 = _ZNSt8ios_base2inE_const;
    int r102 = std__operator__6(t100, t101);
    struct std__basic_filebuf_char__std__char_traits_char__* r103 = std__basic_filebuf_char__std__char_traits_char_____open(&t98->_M_filebuf, t99, r102);
    if (__cir_exc_active) {
      return;
    }
    _Bool cast104 = (_Bool)r103;
    _Bool u105 = !cast104;
    if (u105) {
      void** v106 = (void**)t98;
      void* v107 = *((void**)v106);
      unsigned char* cast108 = (unsigned char*)v107;
      long c109 = -24;
      unsigned char* ptr110 = &(cast108)[c109];
      long* cast111 = (long*)ptr110;
      long t112 = *cast111;
      unsigned char* cast113 = (unsigned char*)t98;
      unsigned char* ptr114 = &(cast113)[t112];
      struct std__basic_ifstream_char__std__char_traits_char__* cast115 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr114;
      struct std__basic_ios_char__std__char_traits_char__* cast116 = (struct std__basic_ios_char__std__char_traits_char__*)cast115;
      int t117 = _ZNSt8ios_base7failbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast116, t117);
      if (__cir_exc_active) {
        return;
      }
    } else {
      void** v118 = (void**)t98;
      void* v119 = *((void**)v118);
      unsigned char* cast120 = (unsigned char*)v119;
      long c121 = -24;
      unsigned char* ptr122 = &(cast120)[c121];
      long* cast123 = (long*)ptr122;
      long t124 = *cast123;
      unsigned char* cast125 = (unsigned char*)t98;
      unsigned char* ptr126 = &(cast125)[t124];
      struct std__basic_ifstream_char__std__char_traits_char__* cast127 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr126;
      struct std__basic_ios_char__std__char_traits_char__* cast128 = (struct std__basic_ios_char__std__char_traits_char__*)cast127;
      int t129 = _ZNSt8ios_base7goodbitE_const;
      std__basic_ios_char__std__char_traits_char_____clear(cast128, t129);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt13basic_filebufIcSt11char_traitsIcEED2Ev
void std__basic_filebuf_char__std__char_traits_char______basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* v130) {
bb131:
  struct std__basic_filebuf_char__std__char_traits_char__* this132;
  this132 = v130;
  struct std__basic_filebuf_char__std__char_traits_char__* t133 = this132;
          struct std__basic_filebuf_char__std__char_traits_char__* r135 = std__basic_filebuf_char__std__char_traits_char_____close(t133);
          if (__cir_exc_active) {
            {
              std____basic_file_char______basic_file(&t133->_M_file);
            }
            {
              struct std__basic_streambuf_char__std__char_traits_char__* base136 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t133 + 0);
              std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base136);
            }
            goto cir_try_dispatch134;
          }
        cir_try_dispatch134: ;
        if (__cir_exc_active) {
        {
          int ca_tok137 = 0;
          void* ca_exn138 = (void*)__cir_exc_ptr;
          __cir_exc_active = 0;
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
        }
        }
    {
      std____basic_file_char______basic_file(&t133->_M_file);
    }
  {
    struct std__basic_streambuf_char__std__char_traits_char__* base139 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t133 + 0);
    std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base139);
  }
  return;
}

// function: _ZNSiD2Ev
void std__basic_istream_char__std__char_traits_char______basic_istream(struct std__basic_istream_char__std__char_traits_char__* v140, void** v141) {
bb142:
  struct std__basic_istream_char__std__char_traits_char__* this143;
  void** vtt144;
  this143 = v140;
  vtt144 = v141;
  struct std__basic_istream_char__std__char_traits_char__* t145 = this143;
  void** t146 = vtt144;
  long c147 = 0;
  t145->_M_gcount = c147;
  return;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEED2Ev
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* v148) {
bb149:
  struct std__basic_ios_char__std__char_traits_char__* this150;
  this150 = v148;
  struct std__basic_ios_char__std__char_traits_char__* t151 = this150;
  {
    struct std__ios_base* base152 = (struct std__ios_base*)((char *)t151 + 0);
    std__ios_base___ios_base(base152);
  }
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode
void std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* v153, char* v154, int v155) {
bb156:
  struct std__basic_ifstream_char__std__char_traits_char__* this157;
  char* __s158;
  int __mode159;
  this157 = v153;
  __s158 = v154;
  __mode159 = v155;
  struct std__basic_ifstream_char__std__char_traits_char__* t160 = this157;
  struct std__basic_ios_char__std__char_traits_char__* base161 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t160 + 256);
  std__basic_ios_char__std__char_traits_char_____basic_ios(base161);
  if (__cir_exc_active) {
    return;
  }
    struct std__basic_istream_char__std__char_traits_char__* base162 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t160 + 0);
    static void *vtt_slot163 = 0;
    void** vtt164 = (void**)&vtt_slot163;
    std__basic_istream_char__std__char_traits_char_____basic_istream(base162, vtt164);
    if (__cir_exc_active) {
      {
        struct std__basic_ios_char__std__char_traits_char__* base165 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t160 + 256);
        std__basic_ios_char__std__char_traits_char______basic_ios(base165);
      }
      return;
    }
      void* v166 = (void*)&_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[3];
      void** v167 = (void**)t160;
      *(void**)(v167) = (void*)v166;
      void* v168 = (void*)&_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[3];
      struct std__basic_ios_char__std__char_traits_char__* base169 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t160 + 256);
      void** v170 = (void**)base169;
      *(void**)(v170) = (void*)v168;
      std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(&t160->_M_filebuf);
      if (__cir_exc_active) {
        {
          struct std__basic_istream_char__std__char_traits_char__* base171 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t160 + 0);
          static void *vtt_slot172 = 0;
          void** vtt173 = (void**)&vtt_slot172;
          std__basic_istream_char__std__char_traits_char______basic_istream(base171, vtt173);
        }
        {
          struct std__basic_ios_char__std__char_traits_char__* base174 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t160 + 256);
          std__basic_ios_char__std__char_traits_char______basic_ios(base174);
        }
        return;
      }
        void** v175 = (void**)t160;
        void* v176 = *((void**)v175);
        unsigned char* cast177 = (unsigned char*)v176;
        long c178 = -24;
        unsigned char* ptr179 = &(cast177)[c178];
        long* cast180 = (long*)ptr179;
        long t181 = *cast180;
        unsigned char* cast182 = (unsigned char*)t160;
        unsigned char* ptr183 = &(cast182)[t181];
        struct std__basic_ifstream_char__std__char_traits_char__* cast184 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr183;
        struct std__basic_ios_char__std__char_traits_char__* cast185 = (struct std__basic_ios_char__std__char_traits_char__*)cast184;
        struct std__basic_streambuf_char__std__char_traits_char__* base186 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)&(t160->_M_filebuf) + 0);
        std__basic_ios_char__std__char_traits_char_____init(cast185, base186);
        if (__cir_exc_active) {
          {
            std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t160->_M_filebuf);
          }
          {
            struct std__basic_istream_char__std__char_traits_char__* base187 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t160 + 0);
            static void *vtt_slot188 = 0;
            void** vtt189 = (void**)&vtt_slot188;
            std__basic_istream_char__std__char_traits_char______basic_istream(base187, vtt189);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base190 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t160 + 256);
            std__basic_ios_char__std__char_traits_char______basic_ios(base190);
          }
          return;
        }
        char* t191 = __s158;
        int t192 = __mode159;
        std__basic_ifstream_char__std__char_traits_char_____open(t160, t191, t192);
        if (__cir_exc_active) {
          {
            std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t160->_M_filebuf);
          }
          {
            struct std__basic_istream_char__std__char_traits_char__* base193 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t160 + 0);
            static void *vtt_slot194 = 0;
            void** vtt195 = (void**)&vtt_slot194;
            std__basic_istream_char__std__char_traits_char______basic_istream(base193, vtt195);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base196 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t160 + 256);
            std__basic_ios_char__std__char_traits_char______basic_ios(base196);
          }
          return;
        }
  return;
}

// function: _ZStanSt12_Ios_IostateS_
int std__operator_(int v197, int v198) {
bb199:
  int __a200;
  int __b201;
  int __retval202;
  __a200 = v197;
  __b201 = v198;
  int t203 = __a200;
  int t204 = __b201;
  int b205 = t203 & t204;
  __retval202 = b205;
  int t206 = __retval202;
  return t206;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE4failEv
_Bool std__basic_ios_char__std__char_traits_char_____fail___const(struct std__basic_ios_char__std__char_traits_char__* v207) {
bb208:
  struct std__basic_ios_char__std__char_traits_char__* this209;
  _Bool __retval210;
  this209 = v207;
  struct std__basic_ios_char__std__char_traits_char__* t211 = this209;
  int r212 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t211);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  int t213 = _ZNSt8ios_base6badbitE_const;
  int t214 = _ZNSt8ios_base7failbitE_const;
  int r215 = std__operator__4(t213, t214);
  int r216 = std__operator_(r212, r215);
  int c217 = 0;
  _Bool c218 = ((r216 != c217)) ? 1 : 0;
  __retval210 = c218;
  _Bool t219 = __retval210;
  return t219;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEEntEv
_Bool std__basic_ios_char__std__char_traits_char_____operator____const(struct std__basic_ios_char__std__char_traits_char__* v220) {
bb221:
  struct std__basic_ios_char__std__char_traits_char__* this222;
  _Bool __retval223;
  this222 = v220;
  struct std__basic_ios_char__std__char_traits_char__* t224 = this222;
  _Bool r225 = std__basic_ios_char__std__char_traits_char_____fail___const(t224);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  __retval223 = r225;
  _Bool t226 = __retval223;
  return t226;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v227, char* v228) {
bb229:
  struct std__basic_ostream_char__std__char_traits_char__* __out230;
  char* __s231;
  struct std__basic_ostream_char__std__char_traits_char__* __retval232;
  __out230 = v227;
  __s231 = v228;
    char* t233 = __s231;
    _Bool cast234 = (_Bool)t233;
    _Bool u235 = !cast234;
    if (u235) {
      struct std__basic_ostream_char__std__char_traits_char__* t236 = __out230;
      void** v237 = (void**)t236;
      void* v238 = *((void**)v237);
      unsigned char* cast239 = (unsigned char*)v238;
      long c240 = -24;
      unsigned char* ptr241 = &(cast239)[c240];
      long* cast242 = (long*)ptr241;
      long t243 = *cast242;
      unsigned char* cast244 = (unsigned char*)t236;
      unsigned char* ptr245 = &(cast244)[t243];
      struct std__basic_ostream_char__std__char_traits_char__* cast246 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr245;
      struct std__basic_ios_char__std__char_traits_char__* cast247 = (struct std__basic_ios_char__std__char_traits_char__*)cast246;
      int t248 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast247, t248);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t249 = __out230;
      char* t250 = __s231;
      char* t251 = __s231;
      unsigned long r252 = std__char_traits_char___length(t251);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast253 = (long)r252;
      struct std__basic_ostream_char__std__char_traits_char__* r254 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t249, t250, cast253);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t255 = __out230;
  __retval232 = t255;
  struct std__basic_ostream_char__std__char_traits_char__* t256 = __retval232;
  return t256;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v257, void* v258) {
bb259:
  struct std__basic_ostream_char__std__char_traits_char__* this260;
  void* __pf261;
  struct std__basic_ostream_char__std__char_traits_char__* __retval262;
  this260 = v257;
  __pf261 = v258;
  struct std__basic_ostream_char__std__char_traits_char__* t263 = this260;
  void* t264 = __pf261;
  struct std__basic_ostream_char__std__char_traits_char__* r265 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t264)(t263);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval262 = r265;
  struct std__basic_ostream_char__std__char_traits_char__* t266 = __retval262;
  return t266;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v267) {
bb268:
  struct std__basic_ostream_char__std__char_traits_char__* __os269;
  struct std__basic_ostream_char__std__char_traits_char__* __retval270;
  __os269 = v267;
  struct std__basic_ostream_char__std__char_traits_char__* t271 = __os269;
  struct std__basic_ostream_char__std__char_traits_char__* r272 = std__ostream__flush(t271);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval270 = r272;
  struct std__basic_ostream_char__std__char_traits_char__* t273 = __retval270;
  return t273;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v274) {
bb275:
  struct std__ctype_char_* __f276;
  struct std__ctype_char_* __retval277;
  __f276 = v274;
    struct std__ctype_char_* t278 = __f276;
    _Bool cast279 = (_Bool)t278;
    _Bool u280 = !cast279;
    if (u280) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t281 = __f276;
  __retval277 = t281;
  struct std__ctype_char_* t282 = __retval277;
  return t282;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v283, char v284) {
bb285:
  struct std__ctype_char_* this286;
  char __c287;
  char __retval288;
  this286 = v283;
  __c287 = v284;
  struct std__ctype_char_* t289 = this286;
    char t290 = t289->_M_widen_ok;
    _Bool cast291 = (_Bool)t290;
    if (cast291) {
      char t292 = __c287;
      unsigned char cast293 = (unsigned char)t292;
      unsigned long cast294 = (unsigned long)cast293;
      char t295 = t289->_M_widen[cast294];
      __retval288 = t295;
      char t296 = __retval288;
      return t296;
    }
  std__ctype_char____M_widen_init___const(t289);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t297 = __c287;
  void** v298 = (void**)t289;
  void* v299 = *((void**)v298);
  char vcall302 = (char)__VERIFIER_virtual_call_char_char(t289, 6, t297);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval288 = vcall302;
  char t303 = __retval288;
  return t303;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v304, char v305) {
bb306:
  struct std__basic_ios_char__std__char_traits_char__* this307;
  char __c308;
  char __retval309;
  this307 = v304;
  __c308 = v305;
  struct std__basic_ios_char__std__char_traits_char__* t310 = this307;
  struct std__ctype_char_* t311 = t310->_M_ctype;
  struct std__ctype_char_* r312 = std__ctype_char__const__std____check_facet_std__ctype_char___(t311);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t313 = __c308;
  char r314 = std__ctype_char___widen_char__const(r312, t313);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval309 = r314;
  char t315 = __retval309;
  return t315;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v316) {
bb317:
  struct std__basic_ostream_char__std__char_traits_char__* __os318;
  struct std__basic_ostream_char__std__char_traits_char__* __retval319;
  __os318 = v316;
  struct std__basic_ostream_char__std__char_traits_char__* t320 = __os318;
  struct std__basic_ostream_char__std__char_traits_char__* t321 = __os318;
  void** v322 = (void**)t321;
  void* v323 = *((void**)v322);
  unsigned char* cast324 = (unsigned char*)v323;
  long c325 = -24;
  unsigned char* ptr326 = &(cast324)[c325];
  long* cast327 = (long*)ptr326;
  long t328 = *cast327;
  unsigned char* cast329 = (unsigned char*)t321;
  unsigned char* ptr330 = &(cast329)[t328];
  struct std__basic_ostream_char__std__char_traits_char__* cast331 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr330;
  struct std__basic_ios_char__std__char_traits_char__* cast332 = (struct std__basic_ios_char__std__char_traits_char__*)cast331;
  char c333 = 10;
  char r334 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast332, c333);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r335 = std__ostream__put(t320, r334);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r336 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r335);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval319 = r336;
  struct std__basic_ostream_char__std__char_traits_char__* t337 = __retval319;
  return t337;
}

// function: _ZNSt8ios_base5widthEl
long std__ios_base__width(struct std__ios_base* v338, long v339) {
bb340:
  struct std__ios_base* this341;
  long __wide342;
  long __retval343;
  long __old344;
  this341 = v338;
  __wide342 = v339;
  struct std__ios_base* t345 = this341;
  long t346 = t345->_M_width;
  __old344 = t346;
  long t347 = __wide342;
  t345->_M_width = t347;
  long t348 = __old344;
  __retval343 = t348;
  long t349 = __retval343;
  return t349;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v350, struct std___Setw v351) {
bb352:
  struct std__basic_ostream_char__std__char_traits_char__* __os353;
  struct std___Setw __f354;
  struct std__basic_ostream_char__std__char_traits_char__* __retval355;
  __os353 = v350;
  __f354 = v351;
  struct std__basic_ostream_char__std__char_traits_char__* t356 = __os353;
  void** v357 = (void**)t356;
  void* v358 = *((void**)v357);
  unsigned char* cast359 = (unsigned char*)v358;
  long c360 = -24;
  unsigned char* ptr361 = &(cast359)[c360];
  long* cast362 = (long*)ptr361;
  long t363 = *cast362;
  unsigned char* cast364 = (unsigned char*)t356;
  unsigned char* ptr365 = &(cast364)[t363];
  struct std__basic_ostream_char__std__char_traits_char__* cast366 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr365;
  struct std__ios_base* cast367 = (struct std__ios_base*)cast366;
  int t368 = __f354._M_n;
  long cast369 = (long)t368;
  long r370 = std__ios_base__width(cast367, cast369);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* t371 = __os353;
  __retval355 = t371;
  struct std__basic_ostream_char__std__char_traits_char__* t372 = __retval355;
  return t372;
}

// function: _ZNSolsEPFRSt8ios_baseS0_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* v373, void* v374) {
bb375:
  struct std__basic_ostream_char__std__char_traits_char__* this376;
  void* __pf377;
  struct std__basic_ostream_char__std__char_traits_char__* __retval378;
  this376 = v373;
  __pf377 = v374;
  struct std__basic_ostream_char__std__char_traits_char__* t379 = this376;
  void* t380 = __pf377;
  void** v381 = (void**)t379;
  void* v382 = *((void**)v381);
  unsigned char* cast383 = (unsigned char*)v382;
  long c384 = -24;
  unsigned char* ptr385 = &(cast383)[c384];
  long* cast386 = (long*)ptr385;
  long t387 = *cast386;
  unsigned char* cast388 = (unsigned char*)t379;
  unsigned char* ptr389 = &(cast388)[t387];
  struct std__basic_ostream_char__std__char_traits_char__* cast390 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr389;
  struct std__ios_base* cast391 = (struct std__ios_base*)cast390;
  struct std__ios_base* r392 = ((struct std__ios_base* (*)(struct std__ios_base*))t380)(cast391);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval378 = t379;
  struct std__basic_ostream_char__std__char_traits_char__* t393 = __retval378;
  return t393;
}

// function: _ZStaNRSt13_Ios_FmtflagsS_
int* std__operator__(int* v394, int v395) {
bb396:
  int* __a397;
  int __b398;
  int* __retval399;
  __a397 = v394;
  __b398 = v395;
  int* t400 = __a397;
  int t401 = *t400;
  int t402 = __b398;
  int r403 = std__operator__2(t401, t402);
  int* t404 = __a397;
  *t404 = r403;
  __retval399 = t404;
  int* t405 = __retval399;
  return t405;
}

// function: _ZStcoSt13_Ios_Fmtflags
int std__operator__3(int v406) {
bb407:
  int __a408;
  int __retval409;
  __a408 = v406;
  int t410 = __a408;
  int u411 = ~t410;
  __retval409 = u411;
  int t412 = __retval409;
  return t412;
}

// function: _ZStorSt13_Ios_FmtflagsS_
int std__operator__5(int v413, int v414) {
bb415:
  int __a416;
  int __b417;
  int __retval418;
  __a416 = v413;
  __b417 = v414;
  int t419 = __a416;
  int t420 = __b417;
  int b421 = t419 | t420;
  __retval418 = b421;
  int t422 = __retval418;
  return t422;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* std__operator___2(int* v423, int v424) {
bb425:
  int* __a426;
  int __b427;
  int* __retval428;
  __a426 = v423;
  __b427 = v424;
  int* t429 = __a426;
  int t430 = *t429;
  int t431 = __b427;
  int r432 = std__operator__5(t430, t431);
  int* t433 = __a426;
  *t433 = r432;
  __retval428 = t433;
  int* t434 = __retval428;
  return t434;
}

// function: _ZStanSt13_Ios_FmtflagsS_
int std__operator__2(int v435, int v436) {
bb437:
  int __a438;
  int __b439;
  int __retval440;
  __a438 = v435;
  __b439 = v436;
  int t441 = __a438;
  int t442 = __b439;
  int b443 = t441 & t442;
  __retval440 = b443;
  int t444 = __retval440;
  return t444;
}

// function: _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
int std__ios_base__setf_2(struct std__ios_base* v445, int v446, int v447) {
bb448:
  struct std__ios_base* this449;
  int __fmtfl450;
  int __mask451;
  int __retval452;
  int __old453;
  this449 = v445;
  __fmtfl450 = v446;
  __mask451 = v447;
  struct std__ios_base* t454 = this449;
  int t455 = t454->_M_flags;
  __old453 = t455;
  int t456 = __mask451;
  int r457 = std__operator__3(t456);
  int* r458 = std__operator__(&t454->_M_flags, r457);
  int t459 = __fmtfl450;
  int t460 = __mask451;
  int r461 = std__operator__2(t459, t460);
  int* r462 = std__operator___2(&t454->_M_flags, r461);
  int t463 = __old453;
  __retval452 = t463;
  int t464 = __retval452;
  return t464;
}

// function: _ZSt4leftRSt8ios_base
struct std__ios_base* std__left(struct std__ios_base* v465) {
bb466:
  struct std__ios_base* __base467;
  struct std__ios_base* __retval468;
  __base467 = v465;
  struct std__ios_base* t469 = __base467;
  int t470 = _ZNSt8ios_base4leftE_const;
  int t471 = _ZNSt8ios_base11adjustfieldE_const;
  int r472 = std__ios_base__setf_2(t469, t470, t471);
  if (__cir_exc_active) {
    struct std__ios_base* __cir_eh_ret = (struct std__ios_base*)0;
    return __cir_eh_ret;
  }
  struct std__ios_base* t473 = __base467;
  __retval468 = t473;
  struct std__ios_base* t474 = __retval468;
  return t474;
}

// function: _ZSt4setwi
struct std___Setw std__setw(int v475) {
bb476:
  int __n477;
  struct std___Setw __retval478;
  __n477 = v475;
  int t479 = __n477;
  __retval478._M_n = t479;
  struct std___Setw t480 = __retval478;
  return t480;
}

// function: _ZSt5rightRSt8ios_base
struct std__ios_base* std__right(struct std__ios_base* v481) {
bb482:
  struct std__ios_base* __base483;
  struct std__ios_base* __retval484;
  __base483 = v481;
  struct std__ios_base* t485 = __base483;
  int t486 = _ZNSt8ios_base5rightE_const;
  int t487 = _ZNSt8ios_base11adjustfieldE_const;
  int r488 = std__ios_base__setf_2(t485, t486, t487);
  if (__cir_exc_active) {
    struct std__ios_base* __cir_eh_ret = (struct std__ios_base*)0;
    return __cir_eh_ret;
  }
  struct std__ios_base* t489 = __base483;
  __retval484 = t489;
  struct std__ios_base* t490 = __retval484;
  return t490;
}

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v491) {
bb492:
  struct std__allocator_char_* this493;
  this493 = v491;
  struct std__allocator_char_* t494 = this493;
  struct std____new_allocator_char_* base495 = (struct std____new_allocator_char_*)((char *)t494 + 0);
  std____new_allocator_char_____new_allocator_2(base495);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEPKcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v496, char* v497, struct std__allocator_char_* v498) {
bb499:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this500;
  char* __s501;
  struct std__allocator_char_* __a502;
  char* __end503;
  struct std__forward_iterator_tag agg_tmp0504;
  this500 = v496;
  __s501 = v497;
  __a502 = v498;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t505 = this500;
  char* r506 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t505);
  if (__cir_exc_active) {
    return;
  }
  struct std__allocator_char_* t507 = __a502;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t505->_M_dataplus, r506, t507);
  if (__cir_exc_active) {
    return;
  }
      char* t508 = __s501;
      char* c509 = ((void*)0);
      _Bool c510 = ((t508 == c509)) ? 1 : 0;
      if (c510) {
        char* cast511 = (char*)&(_str_7);
        std____throw_logic_error(cast511);
        if (__cir_exc_active) {
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t505->_M_dataplus);
          }
          return;
        }
      }
    char* t512 = __s501;
    char* t513 = __s501;
    unsigned long r514 = std__char_traits_char___length(t513);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t505->_M_dataplus);
      }
      return;
    }
    char* ptr515 = &(t512)[r514];
    __end503 = ptr515;
    char* t516 = __s501;
    char* t517 = __end503;
    struct std__forward_iterator_tag t518 = agg_tmp0504;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t505, t516, t517, t518);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t505->_M_dataplus);
      }
      return;
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v519) {
bb520:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this521;
  this521 = v519;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t522 = this521;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t522);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t522->_M_dataplus);
      }
      return;
    }
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t522->_M_dataplus);
  }
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v523) {
bb524:
  struct std__allocator_char_* this525;
  this525 = v523;
  struct std__allocator_char_* t526 = this525;
  return;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEEcvbEv
_Bool std__basic_ios_char__std__char_traits_char_____operator_bool___const(struct std__basic_ios_char__std__char_traits_char__* v527) {
bb528:
  struct std__basic_ios_char__std__char_traits_char__* this529;
  _Bool __retval530;
  this529 = v527;
  struct std__basic_ios_char__std__char_traits_char__* t531 = this529;
  _Bool r532 = std__basic_ios_char__std__char_traits_char_____fail___const(t531);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  _Bool u533 = !r532;
  __retval530 = u533;
  _Bool t534 = __retval530;
  return t534;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE3eofEv
_Bool std__basic_ios_char__std__char_traits_char_____eof___const(struct std__basic_ios_char__std__char_traits_char__* v535) {
bb536:
  struct std__basic_ios_char__std__char_traits_char__* this537;
  _Bool __retval538;
  this537 = v535;
  struct std__basic_ios_char__std__char_traits_char__* t539 = this537;
  int r540 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t539);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  int t541 = _ZNSt8ios_base6eofbitE_const;
  int r542 = std__operator_(r540, t541);
  int c543 = 0;
  _Bool c544 = ((r542 != c543)) ? 1 : 0;
  __retval538 = c544;
  _Bool t545 = __retval538;
  return t545;
}

// function: _ZNSt8ios_base9precisionEl
long std__ios_base__precision(struct std__ios_base* v546, long v547) {
bb548:
  struct std__ios_base* this549;
  long __prec550;
  long __retval551;
  long __old552;
  this549 = v546;
  __prec550 = v547;
  struct std__ios_base* t553 = this549;
  long t554 = t553->_M_precision;
  __old552 = t554;
  long t555 = __prec550;
  t553->_M_precision = t555;
  long t556 = __old552;
  __retval551 = t556;
  long t557 = __retval551;
  return t557;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v558, struct std___Setprecision v559) {
bb560:
  struct std__basic_ostream_char__std__char_traits_char__* __os561;
  struct std___Setprecision __f562;
  struct std__basic_ostream_char__std__char_traits_char__* __retval563;
  __os561 = v558;
  __f562 = v559;
  struct std__basic_ostream_char__std__char_traits_char__* t564 = __os561;
  void** v565 = (void**)t564;
  void* v566 = *((void**)v565);
  unsigned char* cast567 = (unsigned char*)v566;
  long c568 = -24;
  unsigned char* ptr569 = &(cast567)[c568];
  long* cast570 = (long*)ptr569;
  long t571 = *cast570;
  unsigned char* cast572 = (unsigned char*)t564;
  unsigned char* ptr573 = &(cast572)[t571];
  struct std__basic_ostream_char__std__char_traits_char__* cast574 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr573;
  struct std__ios_base* cast575 = (struct std__ios_base*)cast574;
  int t576 = __f562._M_n;
  long cast577 = (long)t576;
  long r578 = std__ios_base__precision(cast575, cast577);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* t579 = __os561;
  __retval563 = t579;
  struct std__basic_ostream_char__std__char_traits_char__* t580 = __retval563;
  return t580;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v581) {
bb582:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this583;
  char* __retval584;
  this583 = v581;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t585 = this583;
  char* r586 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t585);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __retval584 = r586;
  char* t587 = __retval584;
  return t587;
}

// function: _ZSt12setprecisioni
struct std___Setprecision std__setprecision(int v588) {
bb589:
  int __n590;
  struct std___Setprecision __retval591;
  __n590 = v588;
  int t592 = __n590;
  __retval591._M_n = t592;
  struct std___Setprecision t593 = __retval591;
  return t593;
}

// function: _ZSt5fixedRSt8ios_base
struct std__ios_base* std__fixed(struct std__ios_base* v594) {
bb595:
  struct std__ios_base* __base596;
  struct std__ios_base* __retval597;
  __base596 = v594;
  struct std__ios_base* t598 = __base596;
  int t599 = _ZNSt8ios_base5fixedE_const;
  int t600 = _ZNSt8ios_base10floatfieldE_const;
  int r601 = std__ios_base__setf_2(t598, t599, t600);
  if (__cir_exc_active) {
    struct std__ios_base* __cir_eh_ret = (struct std__ios_base*)0;
    return __cir_eh_ret;
  }
  struct std__ios_base* t602 = __base596;
  __retval597 = t602;
  struct std__ios_base* t603 = __retval597;
  return t603;
}

// function: _ZNSt8ios_base4setfESt13_Ios_Fmtflags
int std__ios_base__setf(struct std__ios_base* v604, int v605) {
bb606:
  struct std__ios_base* this607;
  int __fmtfl608;
  int __retval609;
  int __old610;
  this607 = v604;
  __fmtfl608 = v605;
  struct std__ios_base* t611 = this607;
  int t612 = t611->_M_flags;
  __old610 = t612;
  int t613 = __fmtfl608;
  int* r614 = std__operator___2(&t611->_M_flags, t613);
  int t615 = __old610;
  __retval609 = t615;
  int t616 = __retval609;
  return t616;
}

// function: _ZSt9showpointRSt8ios_base
struct std__ios_base* std__showpoint(struct std__ios_base* v617) {
bb618:
  struct std__ios_base* __base619;
  struct std__ios_base* __retval620;
  __base619 = v617;
  struct std__ios_base* t621 = __base619;
  int t622 = _ZNSt8ios_base9showpointE_const;
  int r623 = std__ios_base__setf(t621, t622);
  if (__cir_exc_active) {
    struct std__ios_base* __cir_eh_ret = (struct std__ios_base*)0;
    return __cir_eh_ret;
  }
  struct std__ios_base* t624 = __base619;
  __retval620 = t624;
  struct std__ios_base* t625 = __retval620;
  return t625;
}

// function: _ZNSolsEd
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v626, double v627) {
bb628:
  struct std__basic_ostream_char__std__char_traits_char__* this629;
  double __f630;
  struct std__basic_ostream_char__std__char_traits_char__* __retval631;
  this629 = v626;
  __f630 = v627;
  struct std__basic_ostream_char__std__char_traits_char__* t632 = this629;
  double t633 = __f630;
  struct std__basic_ostream_char__std__char_traits_char__* r634 = std__ostream__std__ostream___M_insert_double_(t632, t633);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval631 = r634;
  struct std__basic_ostream_char__std__char_traits_char__* t635 = __retval631;
  return t635;
}

// function: _Z10outputLineRSoRK10ClientData
void outputLine(struct std__basic_ostream_char__std__char_traits_char__* v636, struct ClientData* v637) {
bb638:
  struct std__basic_ostream_char__std__char_traits_char__* output639;
  struct ClientData* record640;
  struct std___Setw agg_tmp0641;
  struct std___Setw agg_tmp1642;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp0643;
  struct std___Setw agg_tmp2644;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp1645;
  struct std___Setw agg_tmp3646;
  struct std___Setprecision agg_tmp4647;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup648;
  output639 = v636;
  record640 = v637;
  struct std__basic_ostream_char__std__char_traits_char__* t649 = output639;
  struct std__basic_ostream_char__std__char_traits_char__* r650 = std__ostream__operator___std__ios_base_____(t649, &std__left);
  if (__cir_exc_active) {
    return;
  }
  int c651 = 10;
  struct std___Setw r652 = std__setw(c651);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp0641 = r652;
  struct std___Setw t653 = agg_tmp0641;
  struct std__basic_ostream_char__std__char_traits_char__* r654 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(r650, t653);
  if (__cir_exc_active) {
    return;
  }
  struct ClientData* t655 = record640;
  int r656 = ClientData__getAccountNumber___const(t655);
  if (__cir_exc_active) {
    return;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r657 = std__ostream__operator___2(r654, r656);
  if (__cir_exc_active) {
    return;
  }
  int c658 = 16;
  struct std___Setw r659 = std__setw(c658);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp1642 = r659;
  struct std___Setw t660 = agg_tmp1642;
  struct std__basic_ostream_char__std__char_traits_char__* r661 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(r657, t660);
  if (__cir_exc_active) {
    return;
  }
  struct ClientData* t662 = record640;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r663 = ClientData__getLastName_abi_cxx11____const(t662);
  if (__cir_exc_active) {
    return;
  }
  ref_tmp0643 = r663;
    char* r664 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data(&ref_tmp0643);
    struct std__basic_ostream_char__std__char_traits_char__* r665 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r661, r664);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0643);
      }
      return;
    }
    int c666 = 11;
    struct std___Setw r667 = std__setw(c666);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0643);
      }
      return;
    }
    agg_tmp2644 = r667;
    struct std___Setw t668 = agg_tmp2644;
    struct std__basic_ostream_char__std__char_traits_char__* r669 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(r665, t668);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0643);
      }
      return;
    }
    struct ClientData* t670 = record640;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r671 = ClientData__getFirstName_abi_cxx11____const(t670);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0643);
      }
      return;
    }
    ref_tmp1645 = r671;
      char* r672 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data(&ref_tmp1645);
      struct std__basic_ostream_char__std__char_traits_char__* r673 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r669, r672);
      if (__cir_exc_active) {
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp1645);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0643);
        }
        return;
      }
      int c674 = 10;
      struct std___Setw r675 = std__setw(c674);
      if (__cir_exc_active) {
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp1645);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0643);
        }
        return;
      }
      agg_tmp3646 = r675;
      struct std___Setw t676 = agg_tmp3646;
      struct std__basic_ostream_char__std__char_traits_char__* r677 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(r673, t676);
      if (__cir_exc_active) {
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp1645);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0643);
        }
        return;
      }
      int c678 = 2;
      struct std___Setprecision r679 = std__setprecision(c678);
      if (__cir_exc_active) {
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp1645);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0643);
        }
        return;
      }
      agg_tmp4647 = r679;
      struct std___Setprecision t680 = agg_tmp4647;
      struct std__basic_ostream_char__std__char_traits_char__* r681 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r677, t680);
      if (__cir_exc_active) {
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp1645);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0643);
        }
        return;
      }
      struct std__basic_ostream_char__std__char_traits_char__* r682 = std__ostream__operator___std__ios_base_____(r681, &std__right);
      if (__cir_exc_active) {
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp1645);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0643);
        }
        return;
      }
      struct std__basic_ostream_char__std__char_traits_char__* r683 = std__ostream__operator___std__ios_base_____(r682, &std__fixed);
      if (__cir_exc_active) {
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp1645);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0643);
        }
        return;
      }
      struct std__basic_ostream_char__std__char_traits_char__* r684 = std__ostream__operator___std__ios_base_____(r683, &std__showpoint);
      if (__cir_exc_active) {
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp1645);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0643);
        }
        return;
      }
      struct ClientData* t685 = record640;
      double r686 = ClientData__getBalance___const(t685);
      if (__cir_exc_active) {
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp1645);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0643);
        }
        return;
      }
      struct std__basic_ostream_char__std__char_traits_char__* r687 = std__ostream__operator__(r684, r686);
      if (__cir_exc_active) {
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp1645);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0643);
        }
        return;
      }
      struct std__basic_ostream_char__std__char_traits_char__* r688 = std__ostream__operator___std__ostream_____(r687, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      if (__cir_exc_active) {
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp1645);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0643);
        }
        return;
      }
      tmp_exprcleanup648 = r688;
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp1645);
    }
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0643);
  }
  struct std__basic_ostream_char__std__char_traits_char__* t689 = tmp_exprcleanup648;
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEED2Ev
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream_2(struct std__basic_ifstream_char__std__char_traits_char__* v690, void** v691) {
bb692:
  struct std__basic_ifstream_char__std__char_traits_char__* this693;
  void** vtt694;
  this693 = v690;
  vtt694 = v691;
  struct std__basic_ifstream_char__std__char_traits_char__* t695 = this693;
  void** t696 = vtt694;
    {
      std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t695->_M_filebuf);
    }
  {
    struct std__basic_istream_char__std__char_traits_char__* base697 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t695 + 0);
    static void *vtt_slot698 = 0;
    void** vtt699 = (void**)&vtt_slot698;
    std__basic_istream_char__std__char_traits_char______basic_istream(base697, vtt699);
  }
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* v700) {
bb701:
  struct std__basic_ifstream_char__std__char_traits_char__* this702;
  this702 = v700;
  struct std__basic_ifstream_char__std__char_traits_char__* t703 = this702;
    static void *vtt_slot704 = 0;
    void** vtt705 = (void**)&vtt_slot704;
    std__basic_ifstream_char__std__char_traits_char______basic_ifstream_2(t703, vtt705);
  {
    struct std__basic_ios_char__std__char_traits_char__* base706 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t703 + 256);
    std__basic_ios_char__std__char_traits_char______basic_ios(base706);
  }
  return;
}

// function: main
int main() {
bb707:
  int __retval708;
  struct std__basic_ifstream_char__std__char_traits_char__ inCredit709;
  struct std___Setw agg_tmp0710;
  struct std___Setw agg_tmp1711;
  struct std___Setw agg_tmp2712;
  struct std___Setw agg_tmp3713;
  struct ClientData client714;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp4715;
  struct std__allocator_char_ ref_tmp0716;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp5717;
  struct std__allocator_char_ ref_tmp1718;
  int c719 = 0;
  __retval708 = c719;
  char* cast720 = (char*)&(_str);
  int t721 = _ZNSt8ios_base2inE_const;
  std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(&inCredit709, cast720, t721);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
      void** v722 = (void**)&(inCredit709);
      void* v723 = *((void**)v722);
      unsigned char* cast724 = (unsigned char*)v723;
      long c725 = -24;
      unsigned char* ptr726 = &(cast724)[c725];
      long* cast727 = (long*)ptr726;
      long t728 = *cast727;
      unsigned char* cast729 = (unsigned char*)&(inCredit709);
      unsigned char* ptr730 = &(cast729)[t728];
      struct std__basic_ifstream_char__std__char_traits_char__* cast731 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr730;
      struct std__basic_ios_char__std__char_traits_char__* cast732 = (struct std__basic_ios_char__std__char_traits_char__*)cast731;
      _Bool r733 = std__basic_ios_char__std__char_traits_char_____operator____const(cast732);
      if (__cir_exc_active) {
        {
          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inCredit709);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      if (r733) {
        char* cast734 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r735 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cerr, cast734);
        if (__cir_exc_active) {
          {
            std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inCredit709);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        struct std__basic_ostream_char__std__char_traits_char__* r736 = std__ostream__operator___std__ostream_____(r735, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        if (__cir_exc_active) {
          {
            std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inCredit709);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        int c737 = 1;
        exit(c737);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r738 = std__ostream__operator___std__ios_base_____(&_ZSt4cout, &std__left);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inCredit709);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c739 = 10;
    struct std___Setw r740 = std__setw(c739);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inCredit709);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp0710 = r740;
    struct std___Setw t741 = agg_tmp0710;
    struct std__basic_ostream_char__std__char_traits_char__* r742 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(r738, t741);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inCredit709);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast743 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r744 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r742, cast743);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inCredit709);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c745 = 16;
    struct std___Setw r746 = std__setw(c745);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inCredit709);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp1711 = r746;
    struct std___Setw t747 = agg_tmp1711;
    struct std__basic_ostream_char__std__char_traits_char__* r748 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(r744, t747);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inCredit709);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast749 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r750 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r748, cast749);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inCredit709);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c751 = 11;
    struct std___Setw r752 = std__setw(c751);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inCredit709);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp2712 = r752;
    struct std___Setw t753 = agg_tmp2712;
    struct std__basic_ostream_char__std__char_traits_char__* r754 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(r750, t753);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inCredit709);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast755 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r756 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r754, cast755);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inCredit709);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r757 = std__ostream__operator___std__ios_base_____(r756, &std__left);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inCredit709);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c758 = 10;
    struct std___Setw r759 = std__setw(c758);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inCredit709);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp3713 = r759;
    struct std___Setw t760 = agg_tmp3713;
    struct std__basic_ostream_char__std__char_traits_char__* r761 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(r757, t760);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inCredit709);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r762 = std__ostream__operator___std__ios_base_____(r761, &std__right);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inCredit709);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast763 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* r764 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r762, cast763);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inCredit709);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r765 = std__ostream__operator___std__ostream_____(r764, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inCredit709);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c766 = 0;
    char* cast767 = (char*)&(_str_6);
    std__allocator_char___allocator_2(&ref_tmp0716);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&agg_tmp4715, cast767, &ref_tmp0716);
      if (__cir_exc_active) {
        {
          std__allocator_char____allocator(&ref_tmp0716);
        }
        {
          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inCredit709);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
        char* cast768 = (char*)&(_str_6);
        std__allocator_char___allocator_2(&ref_tmp1718);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&agg_tmp5717, cast768, &ref_tmp1718);
          if (__cir_exc_active) {
            {
              std__allocator_char____allocator(&ref_tmp1718);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp4715);
            }
            {
              std__allocator_char____allocator(&ref_tmp0716);
            }
            {
              std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inCredit709);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
            double c769 = 0x0p0;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t770 = agg_tmp4715;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t771 = agg_tmp5717;
            ClientData__ClientData(&client714, c766, t770, t771, c769);
            if (__cir_exc_active) {
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp5717);
              }
              {
                std__allocator_char____allocator(&ref_tmp1718);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp4715);
              }
              {
                std__allocator_char____allocator(&ref_tmp0716);
              }
              {
                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inCredit709);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp5717);
          }
        {
          std__allocator_char____allocator(&ref_tmp1718);
        }
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp4715);
      }
    {
      std__allocator_char____allocator(&ref_tmp0716);
    }
    struct std__basic_istream_char__std__char_traits_char__* base772 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(inCredit709) + 0);
    char* cast773 = (char*)&(client714);
    long c774 = 40;
    struct std__basic_istream_char__std__char_traits_char__* r775 = std__istream__read(base772, cast773, c774);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inCredit709);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      while (1) {
        void** v776 = (void**)&(inCredit709);
        void* v777 = *((void**)v776);
        unsigned char* cast778 = (unsigned char*)v777;
        long c779 = -24;
        unsigned char* ptr780 = &(cast778)[c779];
        long* cast781 = (long*)ptr780;
        long t782 = *cast781;
        unsigned char* cast783 = (unsigned char*)&(inCredit709);
        unsigned char* ptr784 = &(cast783)[t782];
        struct std__basic_ifstream_char__std__char_traits_char__* cast785 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr784;
        struct std__basic_ios_char__std__char_traits_char__* cast786 = (struct std__basic_ios_char__std__char_traits_char__*)cast785;
        _Bool r787 = std__basic_ios_char__std__char_traits_char_____operator_bool___const(cast786);
        if (__cir_exc_active) {
          {
            std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inCredit709);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        _Bool ternary788;
        if (r787) {
          void** v789 = (void**)&(inCredit709);
          void* v790 = *((void**)v789);
          unsigned char* cast791 = (unsigned char*)v790;
          long c792 = -24;
          unsigned char* ptr793 = &(cast791)[c792];
          long* cast794 = (long*)ptr793;
          long t795 = *cast794;
          unsigned char* cast796 = (unsigned char*)&(inCredit709);
          unsigned char* ptr797 = &(cast796)[t795];
          struct std__basic_ifstream_char__std__char_traits_char__* cast798 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr797;
          struct std__basic_ios_char__std__char_traits_char__* cast799 = (struct std__basic_ios_char__std__char_traits_char__*)cast798;
          _Bool r800 = std__basic_ios_char__std__char_traits_char_____eof___const(cast799);
          if (__cir_exc_active) {
            {
              std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inCredit709);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          _Bool u801 = !r800;
          ternary788 = (_Bool)u801;
        } else {
          _Bool c802 = 0;
          ternary788 = (_Bool)c802;
        }
        if (!ternary788) break;
            int r803 = ClientData__getAccountNumber___const(&client714);
            if (__cir_exc_active) {
              {
                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inCredit709);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
            int c804 = 0;
            _Bool c805 = ((r803 != c804)) ? 1 : 0;
            if (c805) {
              outputLine(&_ZSt4cout, &client714);
              if (__cir_exc_active) {
                {
                  std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inCredit709);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
            }
          struct std__basic_istream_char__std__char_traits_char__* base806 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(inCredit709) + 0);
          char* cast807 = (char*)&(client714);
          long c808 = 40;
          struct std__basic_istream_char__std__char_traits_char__* r809 = std__istream__read(base806, cast807, c808);
          if (__cir_exc_active) {
            {
              std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inCredit709);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
      }
    int c810 = 0;
    __retval708 = c810;
    int t811 = __retval708;
    int ret_val812 = t811;
    {
      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inCredit709);
    }
    return ret_val812;
  int t813 = __retval708;
  return t813;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v814) {
bb815:
  struct std____new_allocator_char_* this816;
  this816 = v814;
  struct std____new_allocator_char_* t817 = this816;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v818) {
bb819:
  char* __r820;
  char* __retval821;
  __r820 = v818;
  char* t822 = __r820;
  __retval821 = t822;
  char* t823 = __retval821;
  return t823;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v824) {
bb825:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this826;
  char* __retval827;
  this826 = v824;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t828 = this826;
  char* cast829 = (char*)&(t828->field2._M_local_buf);
  char* r830 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast829);
  __retval827 = r830;
  char* t831 = __retval827;
  return t831;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v832, char* v833, struct std__allocator_char_* v834) {
bb835:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this836;
  char* __dat837;
  struct std__allocator_char_* __a838;
  this836 = v832;
  __dat837 = v833;
  __a838 = v834;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t839 = this836;
  struct std__allocator_char_* base840 = (struct std__allocator_char_*)((char *)t839 + 0);
  struct std__allocator_char_* t841 = __a838;
  std__allocator_char___allocator(base840, t841);
    char* t842 = __dat837;
    t839->_M_p = t842;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb843:
  _Bool __retval844;
    _Bool c845 = 0;
    __retval844 = c845;
    _Bool t846 = __retval844;
    return t846;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v847, char* v848) {
bb849:
  char* __c1850;
  char* __c2851;
  _Bool __retval852;
  __c1850 = v847;
  __c2851 = v848;
  char* t853 = __c1850;
  char t854 = *t853;
  int cast855 = (int)t854;
  char* t856 = __c2851;
  char t857 = *t856;
  int cast858 = (int)t857;
  _Bool c859 = ((cast855 == cast858)) ? 1 : 0;
  __retval852 = c859;
  _Bool t860 = __retval852;
  return t860;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v861) {
bb862:
  char* __p863;
  unsigned long __retval864;
  unsigned long __i865;
  __p863 = v861;
  unsigned long c866 = 0;
  __i865 = c866;
    char ref_tmp0867;
    while (1) {
      unsigned long t868 = __i865;
      char* t869 = __p863;
      char* ptr870 = &(t869)[t868];
      char c871 = 0;
      ref_tmp0867 = c871;
      _Bool r872 = __gnu_cxx__char_traits_char___eq(ptr870, &ref_tmp0867);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u873 = !r872;
      if (!u873) break;
      unsigned long t874 = __i865;
      unsigned long u875 = t874 + 1;
      __i865 = u875;
    }
  unsigned long t876 = __i865;
  __retval864 = t876;
  unsigned long t877 = __retval864;
  return t877;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v878) {
bb879:
  char* __s880;
  unsigned long __retval881;
  __s880 = v878;
    _Bool r882 = std____is_constant_evaluated();
    if (r882) {
      char* t883 = __s880;
      unsigned long r884 = __gnu_cxx__char_traits_char___length(t883);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval881 = r884;
      unsigned long t885 = __retval881;
      return t885;
    }
  char* t886 = __s880;
  unsigned long r887 = strlen(t886);
  __retval881 = r887;
  unsigned long t888 = __retval881;
  return t888;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v889, char* v890, struct std__random_access_iterator_tag v891) {
bb892:
  char* __first893;
  char* __last894;
  struct std__random_access_iterator_tag unnamed895;
  long __retval896;
  __first893 = v889;
  __last894 = v890;
  unnamed895 = v891;
  char* t897 = __last894;
  char* t898 = __first893;
  long diff899 = t897 - t898;
  __retval896 = diff899;
  long t900 = __retval896;
  return t900;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v901) {
bb902:
  char** unnamed903;
  struct std__random_access_iterator_tag __retval904;
  unnamed903 = v901;
  struct std__random_access_iterator_tag t905 = __retval904;
  return t905;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v906, char* v907) {
bb908:
  char* __first909;
  char* __last910;
  long __retval911;
  struct std__random_access_iterator_tag agg_tmp0912;
  __first909 = v906;
  __last910 = v907;
  char* t913 = __first909;
  char* t914 = __last910;
  struct std__random_access_iterator_tag r915 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first909);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp0912 = r915;
  struct std__random_access_iterator_tag t916 = agg_tmp0912;
  long r917 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t913, t914, t916);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval911 = r917;
  long t918 = __retval911;
  return t918;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v919, char* v920) {
bb921:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this922;
  char* __p923;
  this922 = v919;
  __p923 = v920;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t924 = this922;
  char* t925 = __p923;
  t924->_M_dataplus._M_p = t925;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v926) {
bb927:
  struct std__allocator_char_* __a928;
  unsigned long __retval929;
  __a928 = v926;
  unsigned long c930 = -1;
  unsigned long c931 = 1;
  unsigned long b932 = c930 / c931;
  __retval929 = b932;
  unsigned long t933 = __retval929;
  return t933;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v934) {
bb935:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this936;
  struct std__allocator_char_* __retval937;
  this936 = v934;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t938 = this936;
  struct std__allocator_char_* base939 = (struct std__allocator_char_*)((char *)&(t938->_M_dataplus) + 0);
  __retval937 = base939;
  struct std__allocator_char_* t940 = __retval937;
  return t940;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v941, unsigned long* v942) {
bb943:
  unsigned long* __a944;
  unsigned long* __b945;
  unsigned long* __retval946;
  __a944 = v941;
  __b945 = v942;
    unsigned long* t947 = __b945;
    unsigned long t948 = *t947;
    unsigned long* t949 = __a944;
    unsigned long t950 = *t949;
    _Bool c951 = ((t948 < t950)) ? 1 : 0;
    if (c951) {
      unsigned long* t952 = __b945;
      __retval946 = t952;
      unsigned long* t953 = __retval946;
      return t953;
    }
  unsigned long* t954 = __a944;
  __retval946 = t954;
  unsigned long* t955 = __retval946;
  return t955;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v956) {
bb957:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this958;
  unsigned long __retval959;
  unsigned long __diffmax960;
  unsigned long __allocmax961;
  this958 = v956;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t962 = this958;
  unsigned long c963 = 9223372036854775807;
  __diffmax960 = c963;
  struct std__allocator_char_* r964 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t962);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long r965 = std__allocator_traits_std__allocator_char_____max_size(r964);
  __allocmax961 = r965;
  unsigned long* r966 = unsigned_long_const__std__min_unsigned_long_(&__diffmax960, &__allocmax961);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t967 = *r966;
  unsigned long c968 = 1;
  unsigned long b969 = t967 - c968;
  __retval959 = b969;
  unsigned long t970 = __retval959;
  return t970;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v971) {
bb972:
  struct std____new_allocator_char_* this973;
  unsigned long __retval974;
  this973 = v971;
  struct std____new_allocator_char_* t975 = this973;
  unsigned long c976 = 9223372036854775807;
  unsigned long c977 = 1;
  unsigned long b978 = c976 / c977;
  __retval974 = b978;
  unsigned long t979 = __retval974;
  return t979;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v980, unsigned long v981, void* v982) {
bb983:
  struct std____new_allocator_char_* this984;
  unsigned long __n985;
  void* unnamed986;
  char* __retval987;
  this984 = v980;
  __n985 = v981;
  unnamed986 = v982;
  struct std____new_allocator_char_* t988 = this984;
    unsigned long t989 = __n985;
    unsigned long r990 = std____new_allocator_char____M_max_size___const(t988);
    _Bool c991 = ((t989 > r990)) ? 1 : 0;
    if (c991) {
        unsigned long t992 = __n985;
        unsigned long c993 = -1;
        unsigned long c994 = 1;
        unsigned long b995 = c993 / c994;
        _Bool c996 = ((t992 > b995)) ? 1 : 0;
        if (c996) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            char* __cir_eh_ret = (char*)0;
            return __cir_eh_ret;
          }
        }
      std____throw_bad_alloc();
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
    }
    unsigned long c997 = 1;
    unsigned long c998 = 16;
    _Bool c999 = ((c997 > c998)) ? 1 : 0;
    if (c999) {
      unsigned long __al1000;
      unsigned long c1001 = 1;
      __al1000 = c1001;
      unsigned long t1002 = __n985;
      unsigned long c1003 = 1;
      unsigned long b1004 = t1002 * c1003;
      unsigned long t1005 = __al1000;
      void* r1006 = operator_new_2(b1004, t1005);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
      char* cast1007 = (char*)r1006;
      __retval987 = cast1007;
      char* t1008 = __retval987;
      return t1008;
    }
  unsigned long t1009 = __n985;
  unsigned long c1010 = 1;
  unsigned long b1011 = t1009 * c1010;
  void* r1012 = operator_new(b1011);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  char* cast1013 = (char*)r1012;
  __retval987 = cast1013;
  char* t1014 = __retval987;
  return t1014;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1015, unsigned long v1016) {
bb1017:
  struct std__allocator_char_* this1018;
  unsigned long __n1019;
  char* __retval1020;
  this1018 = v1015;
  __n1019 = v1016;
  struct std__allocator_char_* t1021 = this1018;
    _Bool r1022 = std____is_constant_evaluated();
    if (r1022) {
        unsigned long t1023 = __n1019;
        unsigned long c1024 = 1;
        unsigned long ovr1025;
        _Bool ovf1026 = __builtin_mul_overflow(t1023, c1024, &ovr1025);
        __n1019 = ovr1025;
        if (ovf1026) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            char* __cir_eh_ret = (char*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1027 = __n1019;
      void* r1028 = operator_new(t1027);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
      char* cast1029 = (char*)r1028;
      __retval1020 = cast1029;
      char* t1030 = __retval1020;
      return t1030;
    }
  struct std____new_allocator_char_* base1031 = (struct std____new_allocator_char_*)((char *)t1021 + 0);
  unsigned long t1032 = __n1019;
  void* c1033 = ((void*)0);
  char* r1034 = std____new_allocator_char___allocate(base1031, t1032, c1033);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __retval1020 = r1034;
  char* t1035 = __retval1020;
  return t1035;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1036, unsigned long v1037) {
bb1038:
  struct std__allocator_char_* __a1039;
  unsigned long __n1040;
  char* __retval1041;
  __a1039 = v1036;
  __n1040 = v1037;
  struct std__allocator_char_* t1042 = __a1039;
  unsigned long t1043 = __n1040;
  char* r1044 = std__allocator_char___allocate(t1042, t1043);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __retval1041 = r1044;
  char* t1045 = __retval1041;
  return t1045;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1046, unsigned long v1047) {
bb1048:
  struct std__allocator_char_* __a1049;
  unsigned long __n1050;
  char* __retval1051;
  char* __p1052;
  __a1049 = v1046;
  __n1050 = v1047;
  struct std__allocator_char_* t1053 = __a1049;
  unsigned long t1054 = __n1050;
  char* r1055 = std__allocator_traits_std__allocator_char_____allocate(t1053, t1054);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __p1052 = r1055;
  char* t1056 = __p1052;
  __retval1051 = t1056;
  char* t1057 = __retval1051;
  return t1057;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1058) {
bb1059:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1060;
  struct std__allocator_char_* __retval1061;
  this1060 = v1058;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1062 = this1060;
  struct std__allocator_char_* base1063 = (struct std__allocator_char_*)((char *)&(t1062->_M_dataplus) + 0);
  __retval1061 = base1063;
  struct std__allocator_char_* t1064 = __retval1061;
  return t1064;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1065, unsigned long* v1066, unsigned long v1067) {
bb1068:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1069;
  unsigned long* __capacity1070;
  unsigned long __old_capacity1071;
  char* __retval1072;
  this1069 = v1065;
  __capacity1070 = v1066;
  __old_capacity1071 = v1067;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1073 = this1069;
    unsigned long* t1074 = __capacity1070;
    unsigned long t1075 = *t1074;
    unsigned long r1076 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1073);
    _Bool c1077 = ((t1075 > r1076)) ? 1 : 0;
    if (c1077) {
      char* cast1078 = (char*)&(_str_8);
      std____throw_length_error(cast1078);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
    }
    unsigned long* t1079 = __capacity1070;
    unsigned long t1080 = *t1079;
    unsigned long t1081 = __old_capacity1071;
    _Bool c1082 = ((t1080 > t1081)) ? 1 : 0;
    _Bool ternary1083;
    if (c1082) {
      unsigned long* t1084 = __capacity1070;
      unsigned long t1085 = *t1084;
      unsigned long c1086 = 2;
      unsigned long t1087 = __old_capacity1071;
      unsigned long b1088 = c1086 * t1087;
      _Bool c1089 = ((t1085 < b1088)) ? 1 : 0;
      ternary1083 = (_Bool)c1089;
    } else {
      _Bool c1090 = 0;
      ternary1083 = (_Bool)c1090;
    }
    if (ternary1083) {
      unsigned long c1091 = 2;
      unsigned long t1092 = __old_capacity1071;
      unsigned long b1093 = c1091 * t1092;
      unsigned long* t1094 = __capacity1070;
      *t1094 = b1093;
        unsigned long* t1095 = __capacity1070;
        unsigned long t1096 = *t1095;
        unsigned long r1097 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1073);
        _Bool c1098 = ((t1096 > r1097)) ? 1 : 0;
        if (c1098) {
          unsigned long r1099 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1073);
          unsigned long* t1100 = __capacity1070;
          *t1100 = r1099;
        }
    }
  struct std__allocator_char_* r1101 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1073);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  unsigned long* t1102 = __capacity1070;
  unsigned long t1103 = *t1102;
  unsigned long c1104 = 1;
  unsigned long b1105 = t1103 + c1104;
  char* r1106 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1101, b1105);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __retval1072 = r1106;
  char* t1107 = __retval1072;
  return t1107;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1108, unsigned long v1109) {
bb1110:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1111;
  unsigned long __capacity1112;
  this1111 = v1108;
  __capacity1112 = v1109;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1113 = this1111;
  unsigned long t1114 = __capacity1112;
  t1113->field2._M_allocated_capacity = t1114;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1115:
  _Bool __retval1116;
    _Bool c1117 = 0;
    __retval1116 = c1117;
    _Bool t1118 = __retval1116;
    return t1118;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1119) {
bb1120:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1121;
  this1121 = v1119;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1122 = this1121;
    _Bool r1123 = std__is_constant_evaluated();
    if (r1123) {
        unsigned long __i1124;
        unsigned long c1125 = 0;
        __i1124 = c1125;
        while (1) {
          unsigned long t1127 = __i1124;
          unsigned long c1128 = 15;
          _Bool c1129 = ((t1127 <= c1128)) ? 1 : 0;
          if (!c1129) break;
          char c1130 = 0;
          unsigned long t1131 = __i1124;
          t1122->field2._M_local_buf[t1131] = c1130;
        for_step1126: ;
          unsigned long t1132 = __i1124;
          unsigned long u1133 = t1132 + 1;
          __i1124 = u1133;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1134, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1135) {
bb1136:
  struct _Guard* this1137;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1138;
  this1137 = v1134;
  __s1138 = v1135;
  struct _Guard* t1139 = this1137;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1140 = __s1138;
  t1139->_M_guarded = t1140;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1141, char* v1142) {
bb1143:
  char* __location1144;
  char* __args1145;
  char* __retval1146;
  void* __loc1147;
  __location1144 = v1141;
  __args1145 = v1142;
  char* t1148 = __location1144;
  void* cast1149 = (void*)t1148;
  __loc1147 = cast1149;
    void* t1150 = __loc1147;
    char* cast1151 = (char*)t1150;
    char* t1152 = __args1145;
    char t1153 = *t1152;
    *cast1151 = t1153;
    __retval1146 = cast1151;
    char* t1154 = __retval1146;
    return t1154;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1155, char* v1156) {
bb1157:
  char* __c11158;
  char* __c21159;
  __c11158 = v1155;
  __c21159 = v1156;
    _Bool r1160 = std____is_constant_evaluated();
    if (r1160) {
      char* t1161 = __c11158;
      char* t1162 = __c21159;
      char* r1163 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1161, t1162);
    } else {
      char* t1164 = __c21159;
      char t1165 = *t1164;
      char* t1166 = __c11158;
      *t1166 = t1165;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1167, char* v1168, unsigned long v1169) {
bb1170:
  char* __s11171;
  char* __s21172;
  unsigned long __n1173;
  char* __retval1174;
  __s11171 = v1167;
  __s21172 = v1168;
  __n1173 = v1169;
    unsigned long t1175 = __n1173;
    unsigned long c1176 = 0;
    _Bool c1177 = ((t1175 == c1176)) ? 1 : 0;
    if (c1177) {
      char* t1178 = __s11171;
      __retval1174 = t1178;
      char* t1179 = __retval1174;
      return t1179;
    }
    _Bool r1180 = std____is_constant_evaluated();
    if (r1180) {
        unsigned long __i1181;
        unsigned long c1182 = 0;
        __i1181 = c1182;
        while (1) {
          unsigned long t1184 = __i1181;
          unsigned long t1185 = __n1173;
          _Bool c1186 = ((t1184 < t1185)) ? 1 : 0;
          if (!c1186) break;
          char* t1187 = __s11171;
          unsigned long t1188 = __i1181;
          char* ptr1189 = &(t1187)[t1188];
          unsigned long t1190 = __i1181;
          char* t1191 = __s21172;
          char* ptr1192 = &(t1191)[t1190];
          char* r1193 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1189, ptr1192);
        for_step1183: ;
          unsigned long t1194 = __i1181;
          unsigned long u1195 = t1194 + 1;
          __i1181 = u1195;
        }
      char* t1196 = __s11171;
      __retval1174 = t1196;
      char* t1197 = __retval1174;
      return t1197;
    }
  char* t1198 = __s11171;
  void* cast1199 = (void*)t1198;
  char* t1200 = __s21172;
  void* cast1201 = (void*)t1200;
  unsigned long t1202 = __n1173;
  unsigned long c1203 = 1;
  unsigned long b1204 = t1202 * c1203;
  void* r1205 = memcpy(cast1199, cast1201, b1204);
  char* t1206 = __s11171;
  __retval1174 = t1206;
  char* t1207 = __retval1174;
  return t1207;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1208, char* v1209, unsigned long v1210) {
bb1211:
  char* __s11212;
  char* __s21213;
  unsigned long __n1214;
  char* __retval1215;
  __s11212 = v1208;
  __s21213 = v1209;
  __n1214 = v1210;
    unsigned long t1216 = __n1214;
    unsigned long c1217 = 0;
    _Bool c1218 = ((t1216 == c1217)) ? 1 : 0;
    if (c1218) {
      char* t1219 = __s11212;
      __retval1215 = t1219;
      char* t1220 = __retval1215;
      return t1220;
    }
    _Bool r1221 = std____is_constant_evaluated();
    if (r1221) {
      char* t1222 = __s11212;
      char* t1223 = __s21213;
      unsigned long t1224 = __n1214;
      char* r1225 = __gnu_cxx__char_traits_char___copy(t1222, t1223, t1224);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
      __retval1215 = r1225;
      char* t1226 = __retval1215;
      return t1226;
    }
  char* t1227 = __s11212;
  void* cast1228 = (void*)t1227;
  char* t1229 = __s21213;
  void* cast1230 = (void*)t1229;
  unsigned long t1231 = __n1214;
  void* r1232 = memcpy(cast1228, cast1230, t1231);
  char* cast1233 = (char*)r1232;
  __retval1215 = cast1233;
  char* t1234 = __retval1215;
  return t1234;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1235, char* v1236, unsigned long v1237) {
bb1238:
  char* __d1239;
  char* __s1240;
  unsigned long __n1241;
  __d1239 = v1235;
  __s1240 = v1236;
  __n1241 = v1237;
    unsigned long t1242 = __n1241;
    unsigned long c1243 = 1;
    _Bool c1244 = ((t1242 == c1243)) ? 1 : 0;
    if (c1244) {
      char* t1245 = __d1239;
      char* t1246 = __s1240;
      std__char_traits_char___assign(t1245, t1246);
    } else {
      char* t1247 = __d1239;
      char* t1248 = __s1240;
      unsigned long t1249 = __n1241;
      char* r1250 = std__char_traits_char___copy(t1247, t1248, t1249);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1251) {
bb1252:
  char* __it1253;
  char* __retval1254;
  __it1253 = v1251;
  char* t1255 = __it1253;
  __retval1254 = t1255;
  char* t1256 = __retval1254;
  return t1256;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1257, char* v1258, char* v1259) {
bb1260:
  char* __p1261;
  char* __k11262;
  char* __k21263;
  __p1261 = v1257;
  __k11262 = v1258;
  __k21263 = v1259;
    char* t1264 = __p1261;
    char* t1265 = __k11262;
    char* r1266 = char_const__std____niter_base_char_const__(t1265);
    char* t1267 = __k21263;
    char* t1268 = __k11262;
    long diff1269 = t1267 - t1268;
    unsigned long cast1270 = (unsigned long)diff1269;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1264, r1266, cast1270);
    if (__cir_exc_active) {
      return;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1271) {
bb1272:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1273;
  char* __retval1274;
  this1273 = v1271;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1275 = this1273;
  char* t1276 = t1275->_M_dataplus._M_p;
  __retval1274 = t1276;
  char* t1277 = __retval1274;
  return t1277;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1278, unsigned long v1279) {
bb1280:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1281;
  unsigned long __length1282;
  this1281 = v1278;
  __length1282 = v1279;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1283 = this1281;
  unsigned long t1284 = __length1282;
  t1283->_M_string_length = t1284;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1285, unsigned long v1286) {
bb1287:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1288;
  unsigned long __n1289;
  char ref_tmp01290;
  this1288 = v1285;
  __n1289 = v1286;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1291 = this1288;
  unsigned long t1292 = __n1289;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1291, t1292);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t1293 = __n1289;
  char* r1294 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1291);
  if (__cir_exc_active) {
    return;
  }
  char* ptr1295 = &(r1294)[t1293];
  char c1296 = 0;
  ref_tmp01290 = c1296;
  std__char_traits_char___assign(ptr1295, &ref_tmp01290);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1297) {
bb1298:
  struct _Guard* this1299;
  this1299 = v1297;
  struct _Guard* t1300 = this1299;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1301 = t1300->_M_guarded;
    _Bool cast1302 = (_Bool)t1301;
    if (cast1302) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1303 = t1300->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1303);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1304, char* v1305, char* v1306, struct std__forward_iterator_tag v1307) {
bb1308:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1309;
  char* __beg1310;
  char* __end1311;
  struct std__forward_iterator_tag unnamed1312;
  unsigned long __dnew1313;
  struct _Guard __guard1314;
  this1309 = v1304;
  __beg1310 = v1305;
  __end1311 = v1306;
  unnamed1312 = v1307;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1315 = this1309;
  char* t1316 = __beg1310;
  char* t1317 = __end1311;
  long r1318 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1316, t1317);
  if (__cir_exc_active) {
    return;
  }
  unsigned long cast1319 = (unsigned long)r1318;
  __dnew1313 = cast1319;
    unsigned long t1320 = __dnew1313;
    unsigned long c1321 = 15;
    _Bool c1322 = ((t1320 > c1321)) ? 1 : 0;
    if (c1322) {
      unsigned long c1323 = 0;
      char* r1324 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1315, &__dnew1313, c1323);
      if (__cir_exc_active) {
        return;
      }
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1315, r1324);
      if (__cir_exc_active) {
        return;
      }
      unsigned long t1325 = __dnew1313;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1315, t1325);
      if (__cir_exc_active) {
        return;
      }
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1315);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1314, t1315);
  if (__cir_exc_active) {
    return;
  }
    char* r1326 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1315);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1314);
      }
      return;
    }
    char* t1327 = __beg1310;
    char* t1328 = __end1311;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1326, t1327, t1328);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1314);
      }
      return;
    }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1329 = ((void*)0);
    __guard1314._M_guarded = c1329;
    unsigned long t1330 = __dnew1313;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1315, t1330);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1314);
      }
      return;
    }
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1314);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1331) {
bb1332:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1333;
  this1333 = v1331;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1334 = this1333;
  {
    struct std__allocator_char_* base1335 = (struct std__allocator_char_*)((char *)t1334 + 0);
    std__allocator_char____allocator(base1335);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1336, struct std____new_allocator_char_* v1337) {
bb1338:
  struct std____new_allocator_char_* this1339;
  struct std____new_allocator_char_* unnamed1340;
  this1339 = v1336;
  unnamed1340 = v1337;
  struct std____new_allocator_char_* t1341 = this1339;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1342, struct std__allocator_char_* v1343) {
bb1344:
  struct std__allocator_char_* this1345;
  struct std__allocator_char_* __a1346;
  this1345 = v1342;
  __a1346 = v1343;
  struct std__allocator_char_* t1347 = this1345;
  struct std____new_allocator_char_* base1348 = (struct std____new_allocator_char_*)((char *)t1347 + 0);
  struct std__allocator_char_* t1349 = __a1346;
  struct std____new_allocator_char_* base1350 = (struct std____new_allocator_char_*)((char *)t1349 + 0);
  std____new_allocator_char_____new_allocator(base1348, base1350);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1351) {
bb1352:
  char* __r1353;
  char* __retval1354;
  __r1353 = v1351;
  char* t1355 = __r1353;
  __retval1354 = t1355;
  char* t1356 = __retval1354;
  return t1356;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1357) {
bb1358:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1359;
  char* __retval1360;
  this1359 = v1357;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1361 = this1359;
  char* cast1362 = (char*)&(t1361->field2._M_local_buf);
  char* r1363 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1362);
  __retval1360 = r1363;
  char* t1364 = __retval1360;
  return t1364;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1365) {
bb1366:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1367;
  _Bool __retval1368;
  this1367 = v1365;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1369 = this1367;
    char* r1370 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1369);
    if (__cir_exc_active) {
      _Bool __cir_eh_ret = (_Bool)0;
      return __cir_eh_ret;
    }
    char* r1371 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1369);
    if (__cir_exc_active) {
      _Bool __cir_eh_ret = (_Bool)0;
      return __cir_eh_ret;
    }
    _Bool c1372 = ((r1370 == r1371)) ? 1 : 0;
    if (c1372) {
        unsigned long t1373 = t1369->_M_string_length;
        unsigned long c1374 = 15;
        _Bool c1375 = ((t1373 > c1374)) ? 1 : 0;
        if (c1375) {
          __builtin_unreachable();
        }
      _Bool c1376 = 1;
      __retval1368 = c1376;
      _Bool t1377 = __retval1368;
      return t1377;
    }
  _Bool c1378 = 0;
  __retval1368 = c1378;
  _Bool t1379 = __retval1368;
  return t1379;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1380, char* v1381, unsigned long v1382) {
bb1383:
  struct std____new_allocator_char_* this1384;
  char* __p1385;
  unsigned long __n1386;
  this1384 = v1380;
  __p1385 = v1381;
  __n1386 = v1382;
  struct std____new_allocator_char_* t1387 = this1384;
    unsigned long c1388 = 1;
    unsigned long c1389 = 16;
    _Bool c1390 = ((c1388 > c1389)) ? 1 : 0;
    if (c1390) {
      char* t1391 = __p1385;
      void* cast1392 = (void*)t1391;
      unsigned long t1393 = __n1386;
      unsigned long c1394 = 1;
      unsigned long b1395 = t1393 * c1394;
      unsigned long c1396 = 1;
      operator_delete_3(cast1392, b1395, c1396);
      return;
    }
  char* t1397 = __p1385;
  void* cast1398 = (void*)t1397;
  unsigned long t1399 = __n1386;
  unsigned long c1400 = 1;
  unsigned long b1401 = t1399 * c1400;
  operator_delete_2(cast1398, b1401);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1402, char* v1403, unsigned long v1404) {
bb1405:
  struct std__allocator_char_* this1406;
  char* __p1407;
  unsigned long __n1408;
  this1406 = v1402;
  __p1407 = v1403;
  __n1408 = v1404;
  struct std__allocator_char_* t1409 = this1406;
    _Bool r1410 = std____is_constant_evaluated();
    if (r1410) {
      char* t1411 = __p1407;
      void* cast1412 = (void*)t1411;
      operator_delete(cast1412);
      return;
    }
  struct std____new_allocator_char_* base1413 = (struct std____new_allocator_char_*)((char *)t1409 + 0);
  char* t1414 = __p1407;
  unsigned long t1415 = __n1408;
  std____new_allocator_char___deallocate(base1413, t1414, t1415);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1416, char* v1417, unsigned long v1418) {
bb1419:
  struct std__allocator_char_* __a1420;
  char* __p1421;
  unsigned long __n1422;
  __a1420 = v1416;
  __p1421 = v1417;
  __n1422 = v1418;
  struct std__allocator_char_* t1423 = __a1420;
  char* t1424 = __p1421;
  unsigned long t1425 = __n1422;
  std__allocator_char___deallocate(t1423, t1424, t1425);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1426, unsigned long v1427) {
bb1428:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1429;
  unsigned long __size1430;
  this1429 = v1426;
  __size1430 = v1427;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1431 = this1429;
  struct std__allocator_char_* r1432 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1431);
  if (__cir_exc_active) {
    return;
  }
  char* r1433 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1431);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t1434 = __size1430;
  unsigned long c1435 = 1;
  unsigned long b1436 = t1434 + c1435;
  std__allocator_traits_std__allocator_char_____deallocate(r1432, r1433, b1436);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1437) {
bb1438:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1439;
  this1439 = v1437;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1440 = this1439;
    _Bool r1441 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1440);
    if (__cir_exc_active) {
      return;
    }
    _Bool u1442 = !r1441;
    if (u1442) {
      unsigned long t1443 = t1440->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1440, t1443);
    }
  return;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v1444) {
bb1445:
  struct std__basic_streambuf_char__std__char_traits_char__* this1446;
  this1446 = v1444;
  struct std__basic_streambuf_char__std__char_traits_char__* t1447 = this1446;
  {
    std__locale___locale(&t1447->_M_buf_locale);
  }
  return;
}

