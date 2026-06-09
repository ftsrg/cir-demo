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
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_filebuf_char__std__char_traits_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; union pthread_mutex_t __field1; struct std____basic_file_char_ _M_file; int __field3; struct __mbstate_t __field4; struct __mbstate_t __field5; struct __mbstate_t __field6; char* __field7; unsigned long __field8; _Bool __field9; _Bool __field10; _Bool __field11; char __field12; char* __field13; char* __field14; _Bool __field15; struct std__codecvt_char__char____mbstate_t_* __field16; char* __field17; long __field18; char* __field19; char* __field20; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__basic_ofstream_char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__ __field0; struct std__basic_filebuf_char__std__char_traits_char__ _M_filebuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base7goodbitE_const __attribute__((aligned(4))) = 0;
int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base3outE_const __attribute__((aligned(4))) = 16;
int _ZNSt8ios_base6binaryE_const __attribute__((aligned(4))) = 4;
char _str[11] = "credit.dat";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cerr __attribute__((aligned(8)));
char _str_1[26] = "File could not be opened.";
char _str_2[1];
char _str_3[50] = "basic_string: construction from null is not valid";
char _str_4[24] = "basic_string::_M_create";
extern void *_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void std__ios_base__ios_base(struct std__ios_base* p0);
void std__ios_base___ios_base(struct std__ios_base* p0) {}
void std__basic_ios_char__std__char_traits_char_____basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ostream_char__std__char_traits_char_____basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* p0, void** p1);
extern void std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* p0);
extern void std__basic_ios_char__std__char_traits_char_____init(struct std__basic_ios_char__std__char_traits_char__* p0, struct std__basic_streambuf_char__std__char_traits_char__* p1);
extern struct std__basic_filebuf_char__std__char_traits_char__* std__basic_filebuf_char__std__char_traits_char_____open(struct std__basic_filebuf_char__std__char_traits_char__* p0, char* p1, int p2);
int std__operator__3(int p0, int p1);
int std__operator__2(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
void std__basic_ofstream_char__std__char_traits_char_____open(struct std__basic_ofstream_char__std__char_traits_char__* p0, char* p1, int p2);
void std__basic_filebuf_char__std__char_traits_char______basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* p0);
void std__basic_ostream_char__std__char_traits_char______basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ofstream_char__std__char_traits_char_____basic_ofstream(struct std__basic_ofstream_char__std__char_traits_char__* p0, char* p1, int p2);
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
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
extern void ClientData__ClientData(struct ClientData* p0, int p1, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ p3, double p4);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__write(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream_2(struct std__basic_ofstream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream(struct std__basic_ofstream_char__std__char_traits_char__* p0);
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

extern unsigned char* _ZTTSt14basic_ofstreamIcSt11char_traitsIcEE[4] __attribute__((aligned(8)));

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

// function: _ZNSoC2Ev
void std__basic_ostream_char__std__char_traits_char_____basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* v14, void** v15) {
bb16:
  struct std__basic_ostream_char__std__char_traits_char__* this17;
  void** vtt18;
  this17 = v14;
  vtt18 = v15;
  struct std__basic_ostream_char__std__char_traits_char__* t19 = this17;
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
  struct std__basic_ostream_char__std__char_traits_char__* cast39 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr38;
  void** v40 = (void**)cast39;
  *(void**)(v40) = (void*)t29;
  void** v41 = (void**)t19;
  void* v42 = *((void**)v41);
  unsigned char* cast43 = (unsigned char*)v42;
  long c44 = -24;
  unsigned char* ptr45 = &(cast43)[c44];
  long* cast46 = (long*)ptr45;
  long t47 = *cast46;
  unsigned char* cast48 = (unsigned char*)t19;
  unsigned char* ptr49 = &(cast48)[t47];
  struct std__basic_ostream_char__std__char_traits_char__* cast50 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr49;
  struct std__basic_ios_char__std__char_traits_char__* cast51 = (struct std__basic_ios_char__std__char_traits_char__*)cast50;
  struct std__basic_streambuf_char__std__char_traits_char__* c52 = ((void*)0);
  std__basic_ios_char__std__char_traits_char_____init(cast51, c52);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZStorSt13_Ios_OpenmodeS_
int std__operator__3(int v53, int v54) {
bb55:
  int __a56;
  int __b57;
  int __retval58;
  __a56 = v53;
  __b57 = v54;
  int t59 = __a56;
  int t60 = __b57;
  int b61 = t59 | t60;
  __retval58 = b61;
  int t62 = __retval58;
  return t62;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v63, int v64) {
bb65:
  int __a66;
  int __b67;
  int __retval68;
  __a66 = v63;
  __b67 = v64;
  int t69 = __a66;
  int t70 = __b67;
  int b71 = t69 | t70;
  __retval68 = b71;
  int t72 = __retval68;
  return t72;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v73) {
bb74:
  struct std__basic_ios_char__std__char_traits_char__* this75;
  int __retval76;
  this75 = v73;
  struct std__basic_ios_char__std__char_traits_char__* t77 = this75;
  struct std__ios_base* base78 = (struct std__ios_base*)((char *)t77 + 0);
  int t79 = base78->_M_streambuf_state;
  __retval76 = t79;
  int t80 = __retval76;
  return t80;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v81, int v82) {
bb83:
  struct std__basic_ios_char__std__char_traits_char__* this84;
  int __state85;
  this84 = v81;
  __state85 = v82;
  struct std__basic_ios_char__std__char_traits_char__* t86 = this84;
  int r87 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t86);
  if (__cir_exc_active) {
    return;
  }
  int t88 = __state85;
  int r89 = std__operator__2(r87, t88);
  std__basic_ios_char__std__char_traits_char_____clear(t86, r89);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode
void std__basic_ofstream_char__std__char_traits_char_____open(struct std__basic_ofstream_char__std__char_traits_char__* v90, char* v91, int v92) {
bb93:
  struct std__basic_ofstream_char__std__char_traits_char__* this94;
  char* __s95;
  int __mode96;
  this94 = v90;
  __s95 = v91;
  __mode96 = v92;
  struct std__basic_ofstream_char__std__char_traits_char__* t97 = this94;
    char* t98 = __s95;
    int t99 = __mode96;
    int t100 = _ZNSt8ios_base3outE_const;
    int r101 = std__operator__3(t99, t100);
    struct std__basic_filebuf_char__std__char_traits_char__* r102 = std__basic_filebuf_char__std__char_traits_char_____open(&t97->_M_filebuf, t98, r101);
    if (__cir_exc_active) {
      return;
    }
    _Bool cast103 = (_Bool)r102;
    _Bool u104 = !cast103;
    if (u104) {
      void** v105 = (void**)t97;
      void* v106 = *((void**)v105);
      unsigned char* cast107 = (unsigned char*)v106;
      long c108 = -24;
      unsigned char* ptr109 = &(cast107)[c108];
      long* cast110 = (long*)ptr109;
      long t111 = *cast110;
      unsigned char* cast112 = (unsigned char*)t97;
      unsigned char* ptr113 = &(cast112)[t111];
      struct std__basic_ofstream_char__std__char_traits_char__* cast114 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr113;
      struct std__basic_ios_char__std__char_traits_char__* cast115 = (struct std__basic_ios_char__std__char_traits_char__*)cast114;
      int t116 = _ZNSt8ios_base7failbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast115, t116);
      if (__cir_exc_active) {
        return;
      }
    } else {
      void** v117 = (void**)t97;
      void* v118 = *((void**)v117);
      unsigned char* cast119 = (unsigned char*)v118;
      long c120 = -24;
      unsigned char* ptr121 = &(cast119)[c120];
      long* cast122 = (long*)ptr121;
      long t123 = *cast122;
      unsigned char* cast124 = (unsigned char*)t97;
      unsigned char* ptr125 = &(cast124)[t123];
      struct std__basic_ofstream_char__std__char_traits_char__* cast126 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr125;
      struct std__basic_ios_char__std__char_traits_char__* cast127 = (struct std__basic_ios_char__std__char_traits_char__*)cast126;
      int t128 = _ZNSt8ios_base7goodbitE_const;
      std__basic_ios_char__std__char_traits_char_____clear(cast127, t128);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt13basic_filebufIcSt11char_traitsIcEED2Ev
void std__basic_filebuf_char__std__char_traits_char______basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* v129) {
bb130:
  struct std__basic_filebuf_char__std__char_traits_char__* this131;
  this131 = v129;
  struct std__basic_filebuf_char__std__char_traits_char__* t132 = this131;
          struct std__basic_filebuf_char__std__char_traits_char__* r134 = std__basic_filebuf_char__std__char_traits_char_____close(t132);
          if (__cir_exc_active) {
            {
              std____basic_file_char______basic_file(&t132->_M_file);
            }
            {
              struct std__basic_streambuf_char__std__char_traits_char__* base135 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t132 + 0);
              std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base135);
            }
            goto cir_try_dispatch133;
          }
        cir_try_dispatch133: ;
        if (__cir_exc_active) {
        {
          int ca_tok136 = 0;
          void* ca_exn137 = (void*)__cir_exc_ptr;
          __cir_exc_active = 0;
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
        }
        }
    {
      std____basic_file_char______basic_file(&t132->_M_file);
    }
  {
    struct std__basic_streambuf_char__std__char_traits_char__* base138 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t132 + 0);
    std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base138);
  }
  return;
}

// function: _ZNSoD2Ev
void std__basic_ostream_char__std__char_traits_char______basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* v139, void** v140) {
bb141:
  struct std__basic_ostream_char__std__char_traits_char__* this142;
  void** vtt143;
  this142 = v139;
  vtt143 = v140;
  struct std__basic_ostream_char__std__char_traits_char__* t144 = this142;
  void** t145 = vtt143;
  return;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEED2Ev
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* v146) {
bb147:
  struct std__basic_ios_char__std__char_traits_char__* this148;
  this148 = v146;
  struct std__basic_ios_char__std__char_traits_char__* t149 = this148;
  {
    struct std__ios_base* base150 = (struct std__ios_base*)((char *)t149 + 0);
    std__ios_base___ios_base(base150);
  }
  return;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode
void std__basic_ofstream_char__std__char_traits_char_____basic_ofstream(struct std__basic_ofstream_char__std__char_traits_char__* v151, char* v152, int v153) {
bb154:
  struct std__basic_ofstream_char__std__char_traits_char__* this155;
  char* __s156;
  int __mode157;
  this155 = v151;
  __s156 = v152;
  __mode157 = v153;
  struct std__basic_ofstream_char__std__char_traits_char__* t158 = this155;
  struct std__basic_ios_char__std__char_traits_char__* base159 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t158 + 248);
  std__basic_ios_char__std__char_traits_char_____basic_ios(base159);
  if (__cir_exc_active) {
    return;
  }
    struct std__basic_ostream_char__std__char_traits_char__* base160 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t158 + 0);
    static void *vtt_slot161 = 0;
    void** vtt162 = (void**)&vtt_slot161;
    std__basic_ostream_char__std__char_traits_char_____basic_ostream(base160, vtt162);
    if (__cir_exc_active) {
      {
        struct std__basic_ios_char__std__char_traits_char__* base163 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t158 + 248);
        std__basic_ios_char__std__char_traits_char______basic_ios(base163);
      }
      return;
    }
      void* v164 = (void*)&_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[3];
      void** v165 = (void**)t158;
      *(void**)(v165) = (void*)v164;
      void* v166 = (void*)&_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[3];
      struct std__basic_ios_char__std__char_traits_char__* base167 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t158 + 248);
      void** v168 = (void**)base167;
      *(void**)(v168) = (void*)v166;
      std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(&t158->_M_filebuf);
      if (__cir_exc_active) {
        {
          struct std__basic_ostream_char__std__char_traits_char__* base169 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t158 + 0);
          static void *vtt_slot170 = 0;
          void** vtt171 = (void**)&vtt_slot170;
          std__basic_ostream_char__std__char_traits_char______basic_ostream(base169, vtt171);
        }
        {
          struct std__basic_ios_char__std__char_traits_char__* base172 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t158 + 248);
          std__basic_ios_char__std__char_traits_char______basic_ios(base172);
        }
        return;
      }
        void** v173 = (void**)t158;
        void* v174 = *((void**)v173);
        unsigned char* cast175 = (unsigned char*)v174;
        long c176 = -24;
        unsigned char* ptr177 = &(cast175)[c176];
        long* cast178 = (long*)ptr177;
        long t179 = *cast178;
        unsigned char* cast180 = (unsigned char*)t158;
        unsigned char* ptr181 = &(cast180)[t179];
        struct std__basic_ofstream_char__std__char_traits_char__* cast182 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr181;
        struct std__basic_ios_char__std__char_traits_char__* cast183 = (struct std__basic_ios_char__std__char_traits_char__*)cast182;
        struct std__basic_streambuf_char__std__char_traits_char__* base184 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)&(t158->_M_filebuf) + 0);
        std__basic_ios_char__std__char_traits_char_____init(cast183, base184);
        if (__cir_exc_active) {
          {
            std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t158->_M_filebuf);
          }
          {
            struct std__basic_ostream_char__std__char_traits_char__* base185 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t158 + 0);
            static void *vtt_slot186 = 0;
            void** vtt187 = (void**)&vtt_slot186;
            std__basic_ostream_char__std__char_traits_char______basic_ostream(base185, vtt187);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base188 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t158 + 248);
            std__basic_ios_char__std__char_traits_char______basic_ios(base188);
          }
          return;
        }
        char* t189 = __s156;
        int t190 = __mode157;
        std__basic_ofstream_char__std__char_traits_char_____open(t158, t189, t190);
        if (__cir_exc_active) {
          {
            std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t158->_M_filebuf);
          }
          {
            struct std__basic_ostream_char__std__char_traits_char__* base191 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t158 + 0);
            static void *vtt_slot192 = 0;
            void** vtt193 = (void**)&vtt_slot192;
            std__basic_ostream_char__std__char_traits_char______basic_ostream(base191, vtt193);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base194 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t158 + 248);
            std__basic_ios_char__std__char_traits_char______basic_ios(base194);
          }
          return;
        }
  return;
}

// function: _ZStanSt12_Ios_IostateS_
int std__operator_(int v195, int v196) {
bb197:
  int __a198;
  int __b199;
  int __retval200;
  __a198 = v195;
  __b199 = v196;
  int t201 = __a198;
  int t202 = __b199;
  int b203 = t201 & t202;
  __retval200 = b203;
  int t204 = __retval200;
  return t204;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE4failEv
_Bool std__basic_ios_char__std__char_traits_char_____fail___const(struct std__basic_ios_char__std__char_traits_char__* v205) {
bb206:
  struct std__basic_ios_char__std__char_traits_char__* this207;
  _Bool __retval208;
  this207 = v205;
  struct std__basic_ios_char__std__char_traits_char__* t209 = this207;
  int r210 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t209);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  int t211 = _ZNSt8ios_base6badbitE_const;
  int t212 = _ZNSt8ios_base7failbitE_const;
  int r213 = std__operator__2(t211, t212);
  int r214 = std__operator_(r210, r213);
  int c215 = 0;
  _Bool c216 = ((r214 != c215)) ? 1 : 0;
  __retval208 = c216;
  _Bool t217 = __retval208;
  return t217;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEEntEv
_Bool std__basic_ios_char__std__char_traits_char_____operator____const(struct std__basic_ios_char__std__char_traits_char__* v218) {
bb219:
  struct std__basic_ios_char__std__char_traits_char__* this220;
  _Bool __retval221;
  this220 = v218;
  struct std__basic_ios_char__std__char_traits_char__* t222 = this220;
  _Bool r223 = std__basic_ios_char__std__char_traits_char_____fail___const(t222);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  __retval221 = r223;
  _Bool t224 = __retval221;
  return t224;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v225, char* v226) {
bb227:
  struct std__basic_ostream_char__std__char_traits_char__* __out228;
  char* __s229;
  struct std__basic_ostream_char__std__char_traits_char__* __retval230;
  __out228 = v225;
  __s229 = v226;
    char* t231 = __s229;
    _Bool cast232 = (_Bool)t231;
    _Bool u233 = !cast232;
    if (u233) {
      struct std__basic_ostream_char__std__char_traits_char__* t234 = __out228;
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
      struct std__basic_ios_char__std__char_traits_char__* cast245 = (struct std__basic_ios_char__std__char_traits_char__*)cast244;
      int t246 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast245, t246);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t247 = __out228;
      char* t248 = __s229;
      char* t249 = __s229;
      unsigned long r250 = std__char_traits_char___length(t249);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast251 = (long)r250;
      struct std__basic_ostream_char__std__char_traits_char__* r252 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t247, t248, cast251);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t253 = __out228;
  __retval230 = t253;
  struct std__basic_ostream_char__std__char_traits_char__* t254 = __retval230;
  return t254;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v255, void* v256) {
bb257:
  struct std__basic_ostream_char__std__char_traits_char__* this258;
  void* __pf259;
  struct std__basic_ostream_char__std__char_traits_char__* __retval260;
  this258 = v255;
  __pf259 = v256;
  struct std__basic_ostream_char__std__char_traits_char__* t261 = this258;
  void* t262 = __pf259;
  struct std__basic_ostream_char__std__char_traits_char__* r263 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t262)(t261);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval260 = r263;
  struct std__basic_ostream_char__std__char_traits_char__* t264 = __retval260;
  return t264;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v265) {
bb266:
  struct std__basic_ostream_char__std__char_traits_char__* __os267;
  struct std__basic_ostream_char__std__char_traits_char__* __retval268;
  __os267 = v265;
  struct std__basic_ostream_char__std__char_traits_char__* t269 = __os267;
  struct std__basic_ostream_char__std__char_traits_char__* r270 = std__ostream__flush(t269);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval268 = r270;
  struct std__basic_ostream_char__std__char_traits_char__* t271 = __retval268;
  return t271;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v272) {
bb273:
  struct std__ctype_char_* __f274;
  struct std__ctype_char_* __retval275;
  __f274 = v272;
    struct std__ctype_char_* t276 = __f274;
    _Bool cast277 = (_Bool)t276;
    _Bool u278 = !cast277;
    if (u278) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t279 = __f274;
  __retval275 = t279;
  struct std__ctype_char_* t280 = __retval275;
  return t280;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v281, char v282) {
bb283:
  struct std__ctype_char_* this284;
  char __c285;
  char __retval286;
  this284 = v281;
  __c285 = v282;
  struct std__ctype_char_* t287 = this284;
    char t288 = t287->_M_widen_ok;
    _Bool cast289 = (_Bool)t288;
    if (cast289) {
      char t290 = __c285;
      unsigned char cast291 = (unsigned char)t290;
      unsigned long cast292 = (unsigned long)cast291;
      char t293 = t287->_M_widen[cast292];
      __retval286 = t293;
      char t294 = __retval286;
      return t294;
    }
  std__ctype_char____M_widen_init___const(t287);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t295 = __c285;
  void** v296 = (void**)t287;
  void* v297 = *((void**)v296);
  char vcall300 = (char)__VERIFIER_virtual_call_char_char(t287, 6, t295);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval286 = vcall300;
  char t301 = __retval286;
  return t301;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v302, char v303) {
bb304:
  struct std__basic_ios_char__std__char_traits_char__* this305;
  char __c306;
  char __retval307;
  this305 = v302;
  __c306 = v303;
  struct std__basic_ios_char__std__char_traits_char__* t308 = this305;
  struct std__ctype_char_* t309 = t308->_M_ctype;
  struct std__ctype_char_* r310 = std__ctype_char__const__std____check_facet_std__ctype_char___(t309);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t311 = __c306;
  char r312 = std__ctype_char___widen_char__const(r310, t311);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval307 = r312;
  char t313 = __retval307;
  return t313;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v314) {
bb315:
  struct std__basic_ostream_char__std__char_traits_char__* __os316;
  struct std__basic_ostream_char__std__char_traits_char__* __retval317;
  __os316 = v314;
  struct std__basic_ostream_char__std__char_traits_char__* t318 = __os316;
  struct std__basic_ostream_char__std__char_traits_char__* t319 = __os316;
  void** v320 = (void**)t319;
  void* v321 = *((void**)v320);
  unsigned char* cast322 = (unsigned char*)v321;
  long c323 = -24;
  unsigned char* ptr324 = &(cast322)[c323];
  long* cast325 = (long*)ptr324;
  long t326 = *cast325;
  unsigned char* cast327 = (unsigned char*)t319;
  unsigned char* ptr328 = &(cast327)[t326];
  struct std__basic_ostream_char__std__char_traits_char__* cast329 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr328;
  struct std__basic_ios_char__std__char_traits_char__* cast330 = (struct std__basic_ios_char__std__char_traits_char__*)cast329;
  char c331 = 10;
  char r332 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast330, c331);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r333 = std__ostream__put(t318, r332);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r334 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r333);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval317 = r334;
  struct std__basic_ostream_char__std__char_traits_char__* t335 = __retval317;
  return t335;
}

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v336) {
bb337:
  struct std__allocator_char_* this338;
  this338 = v336;
  struct std__allocator_char_* t339 = this338;
  struct std____new_allocator_char_* base340 = (struct std____new_allocator_char_*)((char *)t339 + 0);
  std____new_allocator_char_____new_allocator_2(base340);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEPKcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v341, char* v342, struct std__allocator_char_* v343) {
bb344:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this345;
  char* __s346;
  struct std__allocator_char_* __a347;
  char* __end348;
  struct std__forward_iterator_tag agg_tmp0349;
  this345 = v341;
  __s346 = v342;
  __a347 = v343;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t350 = this345;
  char* r351 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t350);
  if (__cir_exc_active) {
    return;
  }
  struct std__allocator_char_* t352 = __a347;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t350->_M_dataplus, r351, t352);
  if (__cir_exc_active) {
    return;
  }
      char* t353 = __s346;
      char* c354 = ((void*)0);
      _Bool c355 = ((t353 == c354)) ? 1 : 0;
      if (c355) {
        char* cast356 = (char*)&(_str_3);
        std____throw_logic_error(cast356);
        if (__cir_exc_active) {
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t350->_M_dataplus);
          }
          return;
        }
      }
    char* t357 = __s346;
    char* t358 = __s346;
    unsigned long r359 = std__char_traits_char___length(t358);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t350->_M_dataplus);
      }
      return;
    }
    char* ptr360 = &(t357)[r359];
    __end348 = ptr360;
    char* t361 = __s346;
    char* t362 = __end348;
    struct std__forward_iterator_tag t363 = agg_tmp0349;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t350, t361, t362, t363);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t350->_M_dataplus);
      }
      return;
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v364) {
bb365:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this366;
  this366 = v364;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t367 = this366;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t367);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t367->_M_dataplus);
      }
      return;
    }
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t367->_M_dataplus);
  }
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v368) {
bb369:
  struct std__allocator_char_* this370;
  this370 = v368;
  struct std__allocator_char_* t371 = this370;
  return;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEED2Ev
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream_2(struct std__basic_ofstream_char__std__char_traits_char__* v372, void** v373) {
bb374:
  struct std__basic_ofstream_char__std__char_traits_char__* this375;
  void** vtt376;
  this375 = v372;
  vtt376 = v373;
  struct std__basic_ofstream_char__std__char_traits_char__* t377 = this375;
  void** t378 = vtt376;
    {
      std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t377->_M_filebuf);
    }
  {
    struct std__basic_ostream_char__std__char_traits_char__* base379 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t377 + 0);
    static void *vtt_slot380 = 0;
    void** vtt381 = (void**)&vtt_slot380;
    std__basic_ostream_char__std__char_traits_char______basic_ostream(base379, vtt381);
  }
  return;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream(struct std__basic_ofstream_char__std__char_traits_char__* v382) {
bb383:
  struct std__basic_ofstream_char__std__char_traits_char__* this384;
  this384 = v382;
  struct std__basic_ofstream_char__std__char_traits_char__* t385 = this384;
    static void *vtt_slot386 = 0;
    void** vtt387 = (void**)&vtt_slot386;
    std__basic_ofstream_char__std__char_traits_char______basic_ofstream_2(t385, vtt387);
  {
    struct std__basic_ios_char__std__char_traits_char__* base388 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t385 + 248);
    std__basic_ios_char__std__char_traits_char______basic_ios(base388);
  }
  return;
}

// function: main
int main() {
bb389:
  int __retval390;
  struct std__basic_ofstream_char__std__char_traits_char__ outCredit391;
  struct ClientData blankClient392;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp0393;
  struct std__allocator_char_ ref_tmp0394;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp1395;
  struct std__allocator_char_ ref_tmp1396;
  int c397 = 0;
  __retval390 = c397;
  char* cast398 = (char*)&(_str);
  int t399 = _ZNSt8ios_base6binaryE_const;
  std__basic_ofstream_char__std__char_traits_char_____basic_ofstream(&outCredit391, cast398, t399);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
      void** v400 = (void**)&(outCredit391);
      void* v401 = *((void**)v400);
      unsigned char* cast402 = (unsigned char*)v401;
      long c403 = -24;
      unsigned char* ptr404 = &(cast402)[c403];
      long* cast405 = (long*)ptr404;
      long t406 = *cast405;
      unsigned char* cast407 = (unsigned char*)&(outCredit391);
      unsigned char* ptr408 = &(cast407)[t406];
      struct std__basic_ofstream_char__std__char_traits_char__* cast409 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr408;
      struct std__basic_ios_char__std__char_traits_char__* cast410 = (struct std__basic_ios_char__std__char_traits_char__*)cast409;
      _Bool r411 = std__basic_ios_char__std__char_traits_char_____operator____const(cast410);
      if (__cir_exc_active) {
        {
          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit391);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      if (r411) {
        char* cast412 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r413 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cerr, cast412);
        if (__cir_exc_active) {
          {
            std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit391);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        struct std__basic_ostream_char__std__char_traits_char__* r414 = std__ostream__operator___std__ostream_____(r413, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        if (__cir_exc_active) {
          {
            std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit391);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        int c415 = 1;
        exit(c415);
      }
    int c416 = 0;
    char* cast417 = (char*)&(_str_2);
    std__allocator_char___allocator_2(&ref_tmp0394);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&agg_tmp0393, cast417, &ref_tmp0394);
      if (__cir_exc_active) {
        {
          std__allocator_char____allocator(&ref_tmp0394);
        }
        {
          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit391);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
        char* cast418 = (char*)&(_str_2);
        std__allocator_char___allocator_2(&ref_tmp1396);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&agg_tmp1395, cast418, &ref_tmp1396);
          if (__cir_exc_active) {
            {
              std__allocator_char____allocator(&ref_tmp1396);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp0393);
            }
            {
              std__allocator_char____allocator(&ref_tmp0394);
            }
            {
              std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit391);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
            double c419 = 0x0p0;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t420 = agg_tmp0393;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t421 = agg_tmp1395;
            ClientData__ClientData(&blankClient392, c416, t420, t421, c419);
            if (__cir_exc_active) {
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp1395);
              }
              {
                std__allocator_char____allocator(&ref_tmp1396);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp0393);
              }
              {
                std__allocator_char____allocator(&ref_tmp0394);
              }
              {
                std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit391);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp1395);
          }
        {
          std__allocator_char____allocator(&ref_tmp1396);
        }
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp0393);
      }
    {
      std__allocator_char____allocator(&ref_tmp0394);
    }
      int i422;
      int c423 = 0;
      i422 = c423;
      while (1) {
        int t425 = i422;
        int c426 = 100;
        _Bool c427 = ((t425 < c426)) ? 1 : 0;
        if (!c427) break;
        struct std__basic_ostream_char__std__char_traits_char__* base428 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(outCredit391) + 0);
        char* cast429 = (char*)&(blankClient392);
        long c430 = 40;
        struct std__basic_ostream_char__std__char_traits_char__* r431 = std__ostream__write(base428, cast429, c430);
        if (__cir_exc_active) {
          {
            std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit391);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      for_step424: ;
        int t432 = i422;
        int u433 = t432 + 1;
        i422 = u433;
      }
    int c434 = 0;
    __retval390 = c434;
    int t435 = __retval390;
    int ret_val436 = t435;
    {
      std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit391);
    }
    return ret_val436;
  int t437 = __retval390;
  return t437;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v438) {
bb439:
  struct std____new_allocator_char_* this440;
  this440 = v438;
  struct std____new_allocator_char_* t441 = this440;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v442) {
bb443:
  char* __r444;
  char* __retval445;
  __r444 = v442;
  char* t446 = __r444;
  __retval445 = t446;
  char* t447 = __retval445;
  return t447;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v448) {
bb449:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this450;
  char* __retval451;
  this450 = v448;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t452 = this450;
  char* cast453 = (char*)&(t452->field2._M_local_buf);
  char* r454 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast453);
  __retval451 = r454;
  char* t455 = __retval451;
  return t455;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v456, char* v457, struct std__allocator_char_* v458) {
bb459:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this460;
  char* __dat461;
  struct std__allocator_char_* __a462;
  this460 = v456;
  __dat461 = v457;
  __a462 = v458;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t463 = this460;
  struct std__allocator_char_* base464 = (struct std__allocator_char_*)((char *)t463 + 0);
  struct std__allocator_char_* t465 = __a462;
  std__allocator_char___allocator(base464, t465);
    char* t466 = __dat461;
    t463->_M_p = t466;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb467:
  _Bool __retval468;
    _Bool c469 = 0;
    __retval468 = c469;
    _Bool t470 = __retval468;
    return t470;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v471, char* v472) {
bb473:
  char* __c1474;
  char* __c2475;
  _Bool __retval476;
  __c1474 = v471;
  __c2475 = v472;
  char* t477 = __c1474;
  char t478 = *t477;
  int cast479 = (int)t478;
  char* t480 = __c2475;
  char t481 = *t480;
  int cast482 = (int)t481;
  _Bool c483 = ((cast479 == cast482)) ? 1 : 0;
  __retval476 = c483;
  _Bool t484 = __retval476;
  return t484;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v485) {
bb486:
  char* __p487;
  unsigned long __retval488;
  unsigned long __i489;
  __p487 = v485;
  unsigned long c490 = 0;
  __i489 = c490;
    char ref_tmp0491;
    while (1) {
      unsigned long t492 = __i489;
      char* t493 = __p487;
      char* ptr494 = &(t493)[t492];
      char c495 = 0;
      ref_tmp0491 = c495;
      _Bool r496 = __gnu_cxx__char_traits_char___eq(ptr494, &ref_tmp0491);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u497 = !r496;
      if (!u497) break;
      unsigned long t498 = __i489;
      unsigned long u499 = t498 + 1;
      __i489 = u499;
    }
  unsigned long t500 = __i489;
  __retval488 = t500;
  unsigned long t501 = __retval488;
  return t501;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v502) {
bb503:
  char* __s504;
  unsigned long __retval505;
  __s504 = v502;
    _Bool r506 = std____is_constant_evaluated();
    if (r506) {
      char* t507 = __s504;
      unsigned long r508 = __gnu_cxx__char_traits_char___length(t507);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval505 = r508;
      unsigned long t509 = __retval505;
      return t509;
    }
  char* t510 = __s504;
  unsigned long r511 = strlen(t510);
  __retval505 = r511;
  unsigned long t512 = __retval505;
  return t512;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v513, char* v514, struct std__random_access_iterator_tag v515) {
bb516:
  char* __first517;
  char* __last518;
  struct std__random_access_iterator_tag unnamed519;
  long __retval520;
  __first517 = v513;
  __last518 = v514;
  unnamed519 = v515;
  char* t521 = __last518;
  char* t522 = __first517;
  long diff523 = t521 - t522;
  __retval520 = diff523;
  long t524 = __retval520;
  return t524;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v525) {
bb526:
  char** unnamed527;
  struct std__random_access_iterator_tag __retval528;
  unnamed527 = v525;
  struct std__random_access_iterator_tag t529 = __retval528;
  return t529;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v530, char* v531) {
bb532:
  char* __first533;
  char* __last534;
  long __retval535;
  struct std__random_access_iterator_tag agg_tmp0536;
  __first533 = v530;
  __last534 = v531;
  char* t537 = __first533;
  char* t538 = __last534;
  struct std__random_access_iterator_tag r539 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first533);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp0536 = r539;
  struct std__random_access_iterator_tag t540 = agg_tmp0536;
  long r541 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t537, t538, t540);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval535 = r541;
  long t542 = __retval535;
  return t542;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v543, char* v544) {
bb545:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this546;
  char* __p547;
  this546 = v543;
  __p547 = v544;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t548 = this546;
  char* t549 = __p547;
  t548->_M_dataplus._M_p = t549;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v550) {
bb551:
  struct std__allocator_char_* __a552;
  unsigned long __retval553;
  __a552 = v550;
  unsigned long c554 = -1;
  unsigned long c555 = 1;
  unsigned long b556 = c554 / c555;
  __retval553 = b556;
  unsigned long t557 = __retval553;
  return t557;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v558) {
bb559:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this560;
  struct std__allocator_char_* __retval561;
  this560 = v558;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t562 = this560;
  struct std__allocator_char_* base563 = (struct std__allocator_char_*)((char *)&(t562->_M_dataplus) + 0);
  __retval561 = base563;
  struct std__allocator_char_* t564 = __retval561;
  return t564;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v565, unsigned long* v566) {
bb567:
  unsigned long* __a568;
  unsigned long* __b569;
  unsigned long* __retval570;
  __a568 = v565;
  __b569 = v566;
    unsigned long* t571 = __b569;
    unsigned long t572 = *t571;
    unsigned long* t573 = __a568;
    unsigned long t574 = *t573;
    _Bool c575 = ((t572 < t574)) ? 1 : 0;
    if (c575) {
      unsigned long* t576 = __b569;
      __retval570 = t576;
      unsigned long* t577 = __retval570;
      return t577;
    }
  unsigned long* t578 = __a568;
  __retval570 = t578;
  unsigned long* t579 = __retval570;
  return t579;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v580) {
bb581:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this582;
  unsigned long __retval583;
  unsigned long __diffmax584;
  unsigned long __allocmax585;
  this582 = v580;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t586 = this582;
  unsigned long c587 = 9223372036854775807;
  __diffmax584 = c587;
  struct std__allocator_char_* r588 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t586);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long r589 = std__allocator_traits_std__allocator_char_____max_size(r588);
  __allocmax585 = r589;
  unsigned long* r590 = unsigned_long_const__std__min_unsigned_long_(&__diffmax584, &__allocmax585);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t591 = *r590;
  unsigned long c592 = 1;
  unsigned long b593 = t591 - c592;
  __retval583 = b593;
  unsigned long t594 = __retval583;
  return t594;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v595) {
bb596:
  struct std____new_allocator_char_* this597;
  unsigned long __retval598;
  this597 = v595;
  struct std____new_allocator_char_* t599 = this597;
  unsigned long c600 = 9223372036854775807;
  unsigned long c601 = 1;
  unsigned long b602 = c600 / c601;
  __retval598 = b602;
  unsigned long t603 = __retval598;
  return t603;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v604, unsigned long v605, void* v606) {
bb607:
  struct std____new_allocator_char_* this608;
  unsigned long __n609;
  void* unnamed610;
  char* __retval611;
  this608 = v604;
  __n609 = v605;
  unnamed610 = v606;
  struct std____new_allocator_char_* t612 = this608;
    unsigned long t613 = __n609;
    unsigned long r614 = std____new_allocator_char____M_max_size___const(t612);
    _Bool c615 = ((t613 > r614)) ? 1 : 0;
    if (c615) {
        unsigned long t616 = __n609;
        unsigned long c617 = -1;
        unsigned long c618 = 1;
        unsigned long b619 = c617 / c618;
        _Bool c620 = ((t616 > b619)) ? 1 : 0;
        if (c620) {
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
    unsigned long c621 = 1;
    unsigned long c622 = 16;
    _Bool c623 = ((c621 > c622)) ? 1 : 0;
    if (c623) {
      unsigned long __al624;
      unsigned long c625 = 1;
      __al624 = c625;
      unsigned long t626 = __n609;
      unsigned long c627 = 1;
      unsigned long b628 = t626 * c627;
      unsigned long t629 = __al624;
      void* r630 = operator_new_2(b628, t629);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
      char* cast631 = (char*)r630;
      __retval611 = cast631;
      char* t632 = __retval611;
      return t632;
    }
  unsigned long t633 = __n609;
  unsigned long c634 = 1;
  unsigned long b635 = t633 * c634;
  void* r636 = operator_new(b635);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  char* cast637 = (char*)r636;
  __retval611 = cast637;
  char* t638 = __retval611;
  return t638;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v639, unsigned long v640) {
bb641:
  struct std__allocator_char_* this642;
  unsigned long __n643;
  char* __retval644;
  this642 = v639;
  __n643 = v640;
  struct std__allocator_char_* t645 = this642;
    _Bool r646 = std____is_constant_evaluated();
    if (r646) {
        unsigned long t647 = __n643;
        unsigned long c648 = 1;
        unsigned long ovr649;
        _Bool ovf650 = __builtin_mul_overflow(t647, c648, &ovr649);
        __n643 = ovr649;
        if (ovf650) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            char* __cir_eh_ret = (char*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t651 = __n643;
      void* r652 = operator_new(t651);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
      char* cast653 = (char*)r652;
      __retval644 = cast653;
      char* t654 = __retval644;
      return t654;
    }
  struct std____new_allocator_char_* base655 = (struct std____new_allocator_char_*)((char *)t645 + 0);
  unsigned long t656 = __n643;
  void* c657 = ((void*)0);
  char* r658 = std____new_allocator_char___allocate(base655, t656, c657);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __retval644 = r658;
  char* t659 = __retval644;
  return t659;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v660, unsigned long v661) {
bb662:
  struct std__allocator_char_* __a663;
  unsigned long __n664;
  char* __retval665;
  __a663 = v660;
  __n664 = v661;
  struct std__allocator_char_* t666 = __a663;
  unsigned long t667 = __n664;
  char* r668 = std__allocator_char___allocate(t666, t667);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __retval665 = r668;
  char* t669 = __retval665;
  return t669;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v670, unsigned long v671) {
bb672:
  struct std__allocator_char_* __a673;
  unsigned long __n674;
  char* __retval675;
  char* __p676;
  __a673 = v670;
  __n674 = v671;
  struct std__allocator_char_* t677 = __a673;
  unsigned long t678 = __n674;
  char* r679 = std__allocator_traits_std__allocator_char_____allocate(t677, t678);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __p676 = r679;
  char* t680 = __p676;
  __retval675 = t680;
  char* t681 = __retval675;
  return t681;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v682) {
bb683:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this684;
  struct std__allocator_char_* __retval685;
  this684 = v682;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t686 = this684;
  struct std__allocator_char_* base687 = (struct std__allocator_char_*)((char *)&(t686->_M_dataplus) + 0);
  __retval685 = base687;
  struct std__allocator_char_* t688 = __retval685;
  return t688;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v689, unsigned long* v690, unsigned long v691) {
bb692:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this693;
  unsigned long* __capacity694;
  unsigned long __old_capacity695;
  char* __retval696;
  this693 = v689;
  __capacity694 = v690;
  __old_capacity695 = v691;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t697 = this693;
    unsigned long* t698 = __capacity694;
    unsigned long t699 = *t698;
    unsigned long r700 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t697);
    _Bool c701 = ((t699 > r700)) ? 1 : 0;
    if (c701) {
      char* cast702 = (char*)&(_str_4);
      std____throw_length_error(cast702);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
    }
    unsigned long* t703 = __capacity694;
    unsigned long t704 = *t703;
    unsigned long t705 = __old_capacity695;
    _Bool c706 = ((t704 > t705)) ? 1 : 0;
    _Bool ternary707;
    if (c706) {
      unsigned long* t708 = __capacity694;
      unsigned long t709 = *t708;
      unsigned long c710 = 2;
      unsigned long t711 = __old_capacity695;
      unsigned long b712 = c710 * t711;
      _Bool c713 = ((t709 < b712)) ? 1 : 0;
      ternary707 = (_Bool)c713;
    } else {
      _Bool c714 = 0;
      ternary707 = (_Bool)c714;
    }
    if (ternary707) {
      unsigned long c715 = 2;
      unsigned long t716 = __old_capacity695;
      unsigned long b717 = c715 * t716;
      unsigned long* t718 = __capacity694;
      *t718 = b717;
        unsigned long* t719 = __capacity694;
        unsigned long t720 = *t719;
        unsigned long r721 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t697);
        _Bool c722 = ((t720 > r721)) ? 1 : 0;
        if (c722) {
          unsigned long r723 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t697);
          unsigned long* t724 = __capacity694;
          *t724 = r723;
        }
    }
  struct std__allocator_char_* r725 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t697);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  unsigned long* t726 = __capacity694;
  unsigned long t727 = *t726;
  unsigned long c728 = 1;
  unsigned long b729 = t727 + c728;
  char* r730 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r725, b729);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __retval696 = r730;
  char* t731 = __retval696;
  return t731;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v732, unsigned long v733) {
bb734:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this735;
  unsigned long __capacity736;
  this735 = v732;
  __capacity736 = v733;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t737 = this735;
  unsigned long t738 = __capacity736;
  t737->field2._M_allocated_capacity = t738;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb739:
  _Bool __retval740;
    _Bool c741 = 0;
    __retval740 = c741;
    _Bool t742 = __retval740;
    return t742;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v743) {
bb744:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this745;
  this745 = v743;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t746 = this745;
    _Bool r747 = std__is_constant_evaluated();
    if (r747) {
        unsigned long __i748;
        unsigned long c749 = 0;
        __i748 = c749;
        while (1) {
          unsigned long t751 = __i748;
          unsigned long c752 = 15;
          _Bool c753 = ((t751 <= c752)) ? 1 : 0;
          if (!c753) break;
          char c754 = 0;
          unsigned long t755 = __i748;
          t746->field2._M_local_buf[t755] = c754;
        for_step750: ;
          unsigned long t756 = __i748;
          unsigned long u757 = t756 + 1;
          __i748 = u757;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v758, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v759) {
bb760:
  struct _Guard* this761;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s762;
  this761 = v758;
  __s762 = v759;
  struct _Guard* t763 = this761;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t764 = __s762;
  t763->_M_guarded = t764;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v765, char* v766) {
bb767:
  char* __location768;
  char* __args769;
  char* __retval770;
  void* __loc771;
  __location768 = v765;
  __args769 = v766;
  char* t772 = __location768;
  void* cast773 = (void*)t772;
  __loc771 = cast773;
    void* t774 = __loc771;
    char* cast775 = (char*)t774;
    char* t776 = __args769;
    char t777 = *t776;
    *cast775 = t777;
    __retval770 = cast775;
    char* t778 = __retval770;
    return t778;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v779, char* v780) {
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

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v791, char* v792, unsigned long v793) {
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
        unsigned long __i805;
        unsigned long c806 = 0;
        __i805 = c806;
        while (1) {
          unsigned long t808 = __i805;
          unsigned long t809 = __n797;
          _Bool c810 = ((t808 < t809)) ? 1 : 0;
          if (!c810) break;
          char* t811 = __s1795;
          unsigned long t812 = __i805;
          char* ptr813 = &(t811)[t812];
          unsigned long t814 = __i805;
          char* t815 = __s2796;
          char* ptr816 = &(t815)[t814];
          char* r817 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr813, ptr816);
        for_step807: ;
          unsigned long t818 = __i805;
          unsigned long u819 = t818 + 1;
          __i805 = u819;
        }
      char* t820 = __s1795;
      __retval798 = t820;
      char* t821 = __retval798;
      return t821;
    }
  char* t822 = __s1795;
  void* cast823 = (void*)t822;
  char* t824 = __s2796;
  void* cast825 = (void*)t824;
  unsigned long t826 = __n797;
  unsigned long c827 = 1;
  unsigned long b828 = t826 * c827;
  void* r829 = memcpy(cast823, cast825, b828);
  char* t830 = __s1795;
  __retval798 = t830;
  char* t831 = __retval798;
  return t831;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v832, char* v833, unsigned long v834) {
bb835:
  char* __s1836;
  char* __s2837;
  unsigned long __n838;
  char* __retval839;
  __s1836 = v832;
  __s2837 = v833;
  __n838 = v834;
    unsigned long t840 = __n838;
    unsigned long c841 = 0;
    _Bool c842 = ((t840 == c841)) ? 1 : 0;
    if (c842) {
      char* t843 = __s1836;
      __retval839 = t843;
      char* t844 = __retval839;
      return t844;
    }
    _Bool r845 = std____is_constant_evaluated();
    if (r845) {
      char* t846 = __s1836;
      char* t847 = __s2837;
      unsigned long t848 = __n838;
      char* r849 = __gnu_cxx__char_traits_char___copy(t846, t847, t848);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
      __retval839 = r849;
      char* t850 = __retval839;
      return t850;
    }
  char* t851 = __s1836;
  void* cast852 = (void*)t851;
  char* t853 = __s2837;
  void* cast854 = (void*)t853;
  unsigned long t855 = __n838;
  void* r856 = memcpy(cast852, cast854, t855);
  char* cast857 = (char*)r856;
  __retval839 = cast857;
  char* t858 = __retval839;
  return t858;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v859, char* v860, unsigned long v861) {
bb862:
  char* __d863;
  char* __s864;
  unsigned long __n865;
  __d863 = v859;
  __s864 = v860;
  __n865 = v861;
    unsigned long t866 = __n865;
    unsigned long c867 = 1;
    _Bool c868 = ((t866 == c867)) ? 1 : 0;
    if (c868) {
      char* t869 = __d863;
      char* t870 = __s864;
      std__char_traits_char___assign(t869, t870);
    } else {
      char* t871 = __d863;
      char* t872 = __s864;
      unsigned long t873 = __n865;
      char* r874 = std__char_traits_char___copy(t871, t872, t873);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v875) {
bb876:
  char* __it877;
  char* __retval878;
  __it877 = v875;
  char* t879 = __it877;
  __retval878 = t879;
  char* t880 = __retval878;
  return t880;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v881, char* v882, char* v883) {
bb884:
  char* __p885;
  char* __k1886;
  char* __k2887;
  __p885 = v881;
  __k1886 = v882;
  __k2887 = v883;
    char* t888 = __p885;
    char* t889 = __k1886;
    char* r890 = char_const__std____niter_base_char_const__(t889);
    char* t891 = __k2887;
    char* t892 = __k1886;
    long diff893 = t891 - t892;
    unsigned long cast894 = (unsigned long)diff893;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t888, r890, cast894);
    if (__cir_exc_active) {
      return;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v895) {
bb896:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this897;
  char* __retval898;
  this897 = v895;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t899 = this897;
  char* t900 = t899->_M_dataplus._M_p;
  __retval898 = t900;
  char* t901 = __retval898;
  return t901;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v902, unsigned long v903) {
bb904:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this905;
  unsigned long __length906;
  this905 = v902;
  __length906 = v903;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t907 = this905;
  unsigned long t908 = __length906;
  t907->_M_string_length = t908;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v909, unsigned long v910) {
bb911:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this912;
  unsigned long __n913;
  char ref_tmp0914;
  this912 = v909;
  __n913 = v910;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t915 = this912;
  unsigned long t916 = __n913;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t915, t916);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t917 = __n913;
  char* r918 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t915);
  if (__cir_exc_active) {
    return;
  }
  char* ptr919 = &(r918)[t917];
  char c920 = 0;
  ref_tmp0914 = c920;
  std__char_traits_char___assign(ptr919, &ref_tmp0914);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v921) {
bb922:
  struct _Guard* this923;
  this923 = v921;
  struct _Guard* t924 = this923;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t925 = t924->_M_guarded;
    _Bool cast926 = (_Bool)t925;
    if (cast926) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t927 = t924->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t927);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v928, char* v929, char* v930, struct std__forward_iterator_tag v931) {
bb932:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this933;
  char* __beg934;
  char* __end935;
  struct std__forward_iterator_tag unnamed936;
  unsigned long __dnew937;
  struct _Guard __guard938;
  this933 = v928;
  __beg934 = v929;
  __end935 = v930;
  unnamed936 = v931;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t939 = this933;
  char* t940 = __beg934;
  char* t941 = __end935;
  long r942 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t940, t941);
  if (__cir_exc_active) {
    return;
  }
  unsigned long cast943 = (unsigned long)r942;
  __dnew937 = cast943;
    unsigned long t944 = __dnew937;
    unsigned long c945 = 15;
    _Bool c946 = ((t944 > c945)) ? 1 : 0;
    if (c946) {
      unsigned long c947 = 0;
      char* r948 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t939, &__dnew937, c947);
      if (__cir_exc_active) {
        return;
      }
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t939, r948);
      if (__cir_exc_active) {
        return;
      }
      unsigned long t949 = __dnew937;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t939, t949);
      if (__cir_exc_active) {
        return;
      }
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t939);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard938, t939);
  if (__cir_exc_active) {
    return;
  }
    char* r950 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t939);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard938);
      }
      return;
    }
    char* t951 = __beg934;
    char* t952 = __end935;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r950, t951, t952);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard938);
      }
      return;
    }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c953 = ((void*)0);
    __guard938._M_guarded = c953;
    unsigned long t954 = __dnew937;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t939, t954);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard938);
      }
      return;
    }
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard938);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v955) {
bb956:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this957;
  this957 = v955;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t958 = this957;
  {
    struct std__allocator_char_* base959 = (struct std__allocator_char_*)((char *)t958 + 0);
    std__allocator_char____allocator(base959);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v960, struct std____new_allocator_char_* v961) {
bb962:
  struct std____new_allocator_char_* this963;
  struct std____new_allocator_char_* unnamed964;
  this963 = v960;
  unnamed964 = v961;
  struct std____new_allocator_char_* t965 = this963;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v966, struct std__allocator_char_* v967) {
bb968:
  struct std__allocator_char_* this969;
  struct std__allocator_char_* __a970;
  this969 = v966;
  __a970 = v967;
  struct std__allocator_char_* t971 = this969;
  struct std____new_allocator_char_* base972 = (struct std____new_allocator_char_*)((char *)t971 + 0);
  struct std__allocator_char_* t973 = __a970;
  struct std____new_allocator_char_* base974 = (struct std____new_allocator_char_*)((char *)t973 + 0);
  std____new_allocator_char_____new_allocator(base972, base974);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v975) {
bb976:
  char* __r977;
  char* __retval978;
  __r977 = v975;
  char* t979 = __r977;
  __retval978 = t979;
  char* t980 = __retval978;
  return t980;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v981) {
bb982:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this983;
  char* __retval984;
  this983 = v981;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t985 = this983;
  char* cast986 = (char*)&(t985->field2._M_local_buf);
  char* r987 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast986);
  __retval984 = r987;
  char* t988 = __retval984;
  return t988;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v989) {
bb990:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this991;
  _Bool __retval992;
  this991 = v989;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t993 = this991;
    char* r994 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t993);
    if (__cir_exc_active) {
      _Bool __cir_eh_ret = (_Bool)0;
      return __cir_eh_ret;
    }
    char* r995 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t993);
    if (__cir_exc_active) {
      _Bool __cir_eh_ret = (_Bool)0;
      return __cir_eh_ret;
    }
    _Bool c996 = ((r994 == r995)) ? 1 : 0;
    if (c996) {
        unsigned long t997 = t993->_M_string_length;
        unsigned long c998 = 15;
        _Bool c999 = ((t997 > c998)) ? 1 : 0;
        if (c999) {
          __builtin_unreachable();
        }
      _Bool c1000 = 1;
      __retval992 = c1000;
      _Bool t1001 = __retval992;
      return t1001;
    }
  _Bool c1002 = 0;
  __retval992 = c1002;
  _Bool t1003 = __retval992;
  return t1003;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1004, char* v1005, unsigned long v1006) {
bb1007:
  struct std____new_allocator_char_* this1008;
  char* __p1009;
  unsigned long __n1010;
  this1008 = v1004;
  __p1009 = v1005;
  __n1010 = v1006;
  struct std____new_allocator_char_* t1011 = this1008;
    unsigned long c1012 = 1;
    unsigned long c1013 = 16;
    _Bool c1014 = ((c1012 > c1013)) ? 1 : 0;
    if (c1014) {
      char* t1015 = __p1009;
      void* cast1016 = (void*)t1015;
      unsigned long t1017 = __n1010;
      unsigned long c1018 = 1;
      unsigned long b1019 = t1017 * c1018;
      unsigned long c1020 = 1;
      operator_delete_3(cast1016, b1019, c1020);
      return;
    }
  char* t1021 = __p1009;
  void* cast1022 = (void*)t1021;
  unsigned long t1023 = __n1010;
  unsigned long c1024 = 1;
  unsigned long b1025 = t1023 * c1024;
  operator_delete_2(cast1022, b1025);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1026, char* v1027, unsigned long v1028) {
bb1029:
  struct std__allocator_char_* this1030;
  char* __p1031;
  unsigned long __n1032;
  this1030 = v1026;
  __p1031 = v1027;
  __n1032 = v1028;
  struct std__allocator_char_* t1033 = this1030;
    _Bool r1034 = std____is_constant_evaluated();
    if (r1034) {
      char* t1035 = __p1031;
      void* cast1036 = (void*)t1035;
      operator_delete(cast1036);
      return;
    }
  struct std____new_allocator_char_* base1037 = (struct std____new_allocator_char_*)((char *)t1033 + 0);
  char* t1038 = __p1031;
  unsigned long t1039 = __n1032;
  std____new_allocator_char___deallocate(base1037, t1038, t1039);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1040, char* v1041, unsigned long v1042) {
bb1043:
  struct std__allocator_char_* __a1044;
  char* __p1045;
  unsigned long __n1046;
  __a1044 = v1040;
  __p1045 = v1041;
  __n1046 = v1042;
  struct std__allocator_char_* t1047 = __a1044;
  char* t1048 = __p1045;
  unsigned long t1049 = __n1046;
  std__allocator_char___deallocate(t1047, t1048, t1049);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1050, unsigned long v1051) {
bb1052:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1053;
  unsigned long __size1054;
  this1053 = v1050;
  __size1054 = v1051;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1055 = this1053;
  struct std__allocator_char_* r1056 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1055);
  if (__cir_exc_active) {
    return;
  }
  char* r1057 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1055);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t1058 = __size1054;
  unsigned long c1059 = 1;
  unsigned long b1060 = t1058 + c1059;
  std__allocator_traits_std__allocator_char_____deallocate(r1056, r1057, b1060);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1061) {
bb1062:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1063;
  this1063 = v1061;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1064 = this1063;
    _Bool r1065 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1064);
    if (__cir_exc_active) {
      return;
    }
    _Bool u1066 = !r1065;
    if (u1066) {
      unsigned long t1067 = t1064->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1064, t1067);
    }
  return;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v1068) {
bb1069:
  struct std__basic_streambuf_char__std__char_traits_char__* this1070;
  this1070 = v1068;
  struct std__basic_streambuf_char__std__char_traits_char__* t1071 = this1070;
  {
    std__locale___locale(&t1071->_M_buf_locale);
  }
  return;
}

