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
struct anon_struct_2 { unsigned char* __field0[5]; unsigned char* __field1[5]; unsigned char* __field2[5]; };
struct anon_struct_3 { unsigned char* __field0[16]; };
union pthread_mutex_t { struct __pthread_mutex_s __field0; char __field1[40]; long __field2; };
struct std____basic_file_char_ { struct _IO_FILE* __field0; _Bool __field1; unsigned char __field2[7]; } __attribute__((packed));
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct __mbstate_t { int __field0; union anon_0 __field1; };
struct std____codecvt_abstract_base_char__char____mbstate_t_ { struct std__locale__facet __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_1 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* _M_in_beg; char* _M_in_cur; char* _M_in_end; char* _M_out_beg; char* _M_out_cur; char* _M_out_end; struct std__locale _M_buf_locale; };
struct std__codecvt_char__char____mbstate_t_ { struct std____codecvt_abstract_base_char__char____mbstate_t_ __field0; struct __locale_struct* __field1; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; int _M_mode; struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ _M_string; };
struct std__basic_filebuf_char__std__char_traits_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; union pthread_mutex_t __field1; struct std____basic_file_char_ _M_file; int __field3; struct __mbstate_t __field4; struct __mbstate_t __field5; struct __mbstate_t __field6; char* __field7; unsigned long __field8; _Bool __field9; _Bool __field10; _Bool __field11; char __field12; char* __field13; char* __field14; _Bool __field15; struct std__codecvt_char__char____mbstate_t_* __field16; char* __field17; long __field18; char* __field19; char* __field20; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long _M_gcount; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__basic_ifstream_char__std__char_traits_char__ { struct std__basic_istream_char__std__char_traits_char__ __field0; struct std__basic_filebuf_char__std__char_traits_char__ _M_filebuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_iostream_char__std__char_traits_char__ { struct std__basic_istream_char__std__char_traits_char__ __field0; struct std__basic_ostream_char__std__char_traits_char__ __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__ { struct std__basic_iostream_char__std__char_traits_char__ __field0; struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__ _M_stringbuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void *_ZTVNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt15basic_streambufIcSt11char_traitsIcEE[];
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base3outE_const __attribute__((aligned(4))) = 16;
int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base7goodbitE_const __attribute__((aligned(4))) = 0;
int _ZNSt8ios_base2inE_const __attribute__((aligned(4))) = 8;
char _str[6] = "input";
int _ZL4ROWS __attribute__((aligned(4))) = 6;
int _ZL8BUFFSIZE __attribute__((aligned(4))) = 80;
int _ZL4COLS __attribute__((aligned(4))) = 5;
char _str_1[1];
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[2] = " ";
extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void *_ZTVNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt15basic_streambufIcSt11char_traitsIcEE[];
extern void std__ios_base__ios_base(struct std__ios_base* p0);
void std__ios_base___ios_base(struct std__ios_base* p0) {}
void std__basic_ios_char__std__char_traits_char_____basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_istream_char__std__char_traits_char_____basic_istream(struct std__basic_istream_char__std__char_traits_char__* p0, void** p1);
extern void std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* p0);
extern void std__basic_ios_char__std__char_traits_char_____init(struct std__basic_ios_char__std__char_traits_char__* p0, struct std__basic_streambuf_char__std__char_traits_char__* p1);
extern struct std__basic_filebuf_char__std__char_traits_char__* std__basic_filebuf_char__std__char_traits_char_____open(struct std__basic_filebuf_char__std__char_traits_char__* p0, char* p1, int p2);
int std__operator__2(int p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
void std__basic_ifstream_char__std__char_traits_char_____open(struct std__basic_ifstream_char__std__char_traits_char__* p0, char* p1, int p2);
void std__basic_filebuf_char__std__char_traits_char______basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* p0);
void std__basic_istream_char__std__char_traits_char______basic_istream(struct std__basic_istream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* p0, char* p1, int p2);
void std__basic_ostream_char__std__char_traits_char_____basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ostream_char__std__char_traits_char______basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* p0, void** p1);
void std__basic_iostream_char__std__char_traits_char_____basic_iostream(struct std__basic_iostream_char__std__char_traits_char__* p0, void** p1);
void std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char_____basic_stringbuf(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* p0, int p1);
void std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______basic_stringbuf(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* p0);
void std__basic_iostream_char__std__char_traits_char______basic_iostream(struct std__basic_iostream_char__std__char_traits_char__* p0, void** p1);
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____basic_stringstream(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* p0);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_istream_char__std__char_traits_char__* std__istream__getline(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1, long p2);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__getline_2(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1, long p2, char p3);
extern int atoi(char* p0);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
void std__basic_ifstream_char__std__char_traits_char_____close(struct std__basic_ifstream_char__std__char_traits_char__* p0);
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream_2(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* p0, void** p1);
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* p0);
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream_2(struct std__basic_ifstream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* p0);
int main();
extern int __gxx_personality_v0();
extern struct std__basic_filebuf_char__std__char_traits_char__* std__basic_filebuf_char__std__char_traits_char_____close(struct std__basic_filebuf_char__std__char_traits_char__* p0);
void std____basic_file_char______basic_file(struct std____basic_file_char_* p0) {}
void std__locale___locale(struct std__locale* p0) {}
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* p0);
extern void std__locale__locale(struct std__locale* p0);
void std__basic_streambuf_char__std__char_traits_char_____basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* p0);
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
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
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void *malloc(unsigned long);
extern void free(void*);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_char___deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);

extern unsigned char* _ZTTSt14basic_ifstreamIcSt11char_traitsIcEE[4] __attribute__((aligned(8)));
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
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZStorSt13_Ios_OpenmodeS_
int std__operator__2(int v54, int v55) {
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
int std__operator_(int v64, int v65) {
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
  int r90 = std__operator_(r88, t89);
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
    int r102 = std__operator__2(t100, t101);
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

// function: _ZNSoC2Ev
void std__basic_ostream_char__std__char_traits_char_____basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* v197, void** v198) {
bb199:
  struct std__basic_ostream_char__std__char_traits_char__* this200;
  void** vtt201;
  this200 = v197;
  vtt201 = v198;
  struct std__basic_ostream_char__std__char_traits_char__* t202 = this200;
  void** t203 = vtt201;
  static void *vtt_slot204 = 0;
  void** vtt205 = (void**)&vtt_slot204;
  void** cast206 = (void**)vtt205;
  void* t207 = *cast206;
  void** v208 = (void**)t202;
  *(void**)(v208) = (void*)t207;
  static void *vtt_slot209 = 0;
  void** vtt210 = (void**)&vtt_slot209;
  void** cast211 = (void**)vtt210;
  void* t212 = *cast211;
  void** v213 = (void**)t202;
  void* v214 = *((void**)v213);
  unsigned char* cast215 = (unsigned char*)v214;
  long c216 = -24;
  unsigned char* ptr217 = &(cast215)[c216];
  long* cast218 = (long*)ptr217;
  long t219 = *cast218;
  unsigned char* cast220 = (unsigned char*)t202;
  unsigned char* ptr221 = &(cast220)[t219];
  struct std__basic_ostream_char__std__char_traits_char__* cast222 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr221;
  void** v223 = (void**)cast222;
  *(void**)(v223) = (void*)t212;
  void** v224 = (void**)t202;
  void* v225 = *((void**)v224);
  unsigned char* cast226 = (unsigned char*)v225;
  long c227 = -24;
  unsigned char* ptr228 = &(cast226)[c227];
  long* cast229 = (long*)ptr228;
  long t230 = *cast229;
  unsigned char* cast231 = (unsigned char*)t202;
  unsigned char* ptr232 = &(cast231)[t230];
  struct std__basic_ostream_char__std__char_traits_char__* cast233 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr232;
  struct std__basic_ios_char__std__char_traits_char__* cast234 = (struct std__basic_ios_char__std__char_traits_char__*)cast233;
  struct std__basic_streambuf_char__std__char_traits_char__* c235 = ((void*)0);
  std__basic_ios_char__std__char_traits_char_____init(cast234, c235);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSoD2Ev
void std__basic_ostream_char__std__char_traits_char______basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* v236, void** v237) {
bb238:
  struct std__basic_ostream_char__std__char_traits_char__* this239;
  void** vtt240;
  this239 = v236;
  vtt240 = v237;
  struct std__basic_ostream_char__std__char_traits_char__* t241 = this239;
  void** t242 = vtt240;
  return;
}

// function: _ZNSdC2Ev
void std__basic_iostream_char__std__char_traits_char_____basic_iostream(struct std__basic_iostream_char__std__char_traits_char__* v243, void** v244) {
bb245:
  struct std__basic_iostream_char__std__char_traits_char__* this246;
  void** vtt247;
  this246 = v243;
  vtt247 = v244;
  struct std__basic_iostream_char__std__char_traits_char__* t248 = this246;
  void** t249 = vtt247;
  struct std__basic_istream_char__std__char_traits_char__* base250 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t248 + 0);
  static void *vtt_slot251 = 0;
  void** vtt252 = (void**)&vtt_slot251;
  std__basic_istream_char__std__char_traits_char_____basic_istream(base250, vtt252);
  if (__cir_exc_active) {
    return;
  }
    struct std__basic_ostream_char__std__char_traits_char__* base253 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t248 + 16);
    static void *vtt_slot254 = 0;
    void** vtt255 = (void**)&vtt_slot254;
    std__basic_ostream_char__std__char_traits_char_____basic_ostream(base253, vtt255);
    if (__cir_exc_active) {
      {
        struct std__basic_istream_char__std__char_traits_char__* base256 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t248 + 0);
        static void *vtt_slot257 = 0;
        void** vtt258 = (void**)&vtt_slot257;
        std__basic_istream_char__std__char_traits_char______basic_istream(base256, vtt258);
      }
      return;
    }
      static void *vtt_slot259 = 0;
      void** vtt260 = (void**)&vtt_slot259;
      void** cast261 = (void**)vtt260;
      void* t262 = *cast261;
      void** v263 = (void**)t248;
      *(void**)(v263) = (void*)t262;
      static void *vtt_slot264 = 0;
      void** vtt265 = (void**)&vtt_slot264;
      void** cast266 = (void**)vtt265;
      void* t267 = *cast266;
      void** v268 = (void**)t248;
      void* v269 = *((void**)v268);
      unsigned char* cast270 = (unsigned char*)v269;
      long c271 = -24;
      unsigned char* ptr272 = &(cast270)[c271];
      long* cast273 = (long*)ptr272;
      long t274 = *cast273;
      unsigned char* cast275 = (unsigned char*)t248;
      unsigned char* ptr276 = &(cast275)[t274];
      struct std__basic_iostream_char__std__char_traits_char__* cast277 = (struct std__basic_iostream_char__std__char_traits_char__*)ptr276;
      void** v278 = (void**)cast277;
      *(void**)(v278) = (void*)t267;
      static void *vtt_slot279 = 0;
      void** vtt280 = (void**)&vtt_slot279;
      void** cast281 = (void**)vtt280;
      void* t282 = *cast281;
      struct std__basic_ostream_char__std__char_traits_char__* base283 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t248 + 16);
      void** v284 = (void**)base283;
      *(void**)(v284) = (void*)t282;
  return;
}

// function: _ZNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEEC2ESt13_Ios_Openmode
void std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char_____basic_stringbuf(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* v285, int v286) {
bb287:
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* this288;
  int __mode289;
  this288 = v285;
  __mode289 = v286;
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* t290 = this288;
  struct std__basic_streambuf_char__std__char_traits_char__* base291 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t290 + 0);
  std__basic_streambuf_char__std__char_traits_char_____basic_streambuf(base291);
  if (__cir_exc_active) {
    return;
  }
    void* v292 = (void*)&_ZTVNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEEE[2];
    void** v293 = (void**)t290;
    *(void**)(v293) = (void*)v292;
    int t294 = __mode289;
    t290->_M_mode = t294;
    _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&t290->_M_string);
  return;
}

// function: _ZNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______basic_stringbuf(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* v295) {
bb296:
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* this297;
  this297 = v295;
  struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* t298 = this297;
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&t298->_M_string);
    }
  {
    struct std__basic_streambuf_char__std__char_traits_char__* base299 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t298 + 0);
    std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base299);
  }
  return;
}

// function: _ZNSdD2Ev
void std__basic_iostream_char__std__char_traits_char______basic_iostream(struct std__basic_iostream_char__std__char_traits_char__* v300, void** v301) {
bb302:
  struct std__basic_iostream_char__std__char_traits_char__* this303;
  void** vtt304;
  this303 = v300;
  vtt304 = v301;
  struct std__basic_iostream_char__std__char_traits_char__* t305 = this303;
  void** t306 = vtt304;
    {
      struct std__basic_ostream_char__std__char_traits_char__* base307 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t305 + 16);
      static void *vtt_slot308 = 0;
      void** vtt309 = (void**)&vtt_slot308;
      std__basic_ostream_char__std__char_traits_char______basic_ostream(base307, vtt309);
    }
  {
    struct std__basic_istream_char__std__char_traits_char__* base310 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t305 + 0);
    static void *vtt_slot311 = 0;
    void** vtt312 = (void**)&vtt_slot311;
    std__basic_istream_char__std__char_traits_char______basic_istream(base310, vtt312);
  }
  return;
}

// function: _ZNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEC1Ev
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____basic_stringstream(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* v313) {
bb314:
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* this315;
  this315 = v313;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* t316 = this315;
  struct std__basic_ios_char__std__char_traits_char__* base317 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t316 + 128);
  std__basic_ios_char__std__char_traits_char_____basic_ios(base317);
  if (__cir_exc_active) {
    return;
  }
    struct std__basic_iostream_char__std__char_traits_char__* base318 = (struct std__basic_iostream_char__std__char_traits_char__*)((char *)t316 + 0);
    static void *vtt_slot319 = 0;
    void** vtt320 = (void**)&vtt_slot319;
    std__basic_iostream_char__std__char_traits_char_____basic_iostream(base318, vtt320);
    if (__cir_exc_active) {
      {
        struct std__basic_ios_char__std__char_traits_char__* base321 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t316 + 128);
        std__basic_ios_char__std__char_traits_char______basic_ios(base321);
      }
      return;
    }
      void* v322 = (void*)&_ZTVNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEE[3];
      void** v323 = (void**)t316;
      *(void**)(v323) = (void*)v322;
      void* v324 = (void*)&_ZTVNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEE[3];
      struct std__basic_ios_char__std__char_traits_char__* base325 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t316 + 128);
      void** v326 = (void**)base325;
      *(void**)(v326) = (void*)v324;
      void* v327 = (void*)&_ZTVNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEE[3];
      struct std__basic_ostream_char__std__char_traits_char__* base328 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t316 + 16);
      void** v329 = (void**)base328;
      *(void**)(v329) = (void*)v327;
      int t330 = _ZNSt8ios_base3outE_const;
      int t331 = _ZNSt8ios_base2inE_const;
      int r332 = std__operator__2(t330, t331);
      std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char_____basic_stringbuf(&t316->_M_stringbuf, r332);
      if (__cir_exc_active) {
        {
          struct std__basic_iostream_char__std__char_traits_char__* base333 = (struct std__basic_iostream_char__std__char_traits_char__*)((char *)t316 + 0);
          static void *vtt_slot334 = 0;
          void** vtt335 = (void**)&vtt_slot334;
          std__basic_iostream_char__std__char_traits_char______basic_iostream(base333, vtt335);
        }
        {
          struct std__basic_ios_char__std__char_traits_char__* base336 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t316 + 128);
          std__basic_ios_char__std__char_traits_char______basic_ios(base336);
        }
        return;
      }
        void** v337 = (void**)t316;
        void* v338 = *((void**)v337);
        unsigned char* cast339 = (unsigned char*)v338;
        long c340 = -24;
        unsigned char* ptr341 = &(cast339)[c340];
        long* cast342 = (long*)ptr341;
        long t343 = *cast342;
        unsigned char* cast344 = (unsigned char*)t316;
        unsigned char* ptr345 = &(cast344)[t343];
        struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* cast346 = (struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__*)ptr345;
        struct std__basic_ios_char__std__char_traits_char__* cast347 = (struct std__basic_ios_char__std__char_traits_char__*)cast346;
        struct std__basic_streambuf_char__std__char_traits_char__* base348 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)&(t316->_M_stringbuf) + 0);
        std__basic_ios_char__std__char_traits_char_____init(cast347, base348);
        if (__cir_exc_active) {
          {
            std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______basic_stringbuf(&t316->_M_stringbuf);
          }
          {
            struct std__basic_iostream_char__std__char_traits_char__* base349 = (struct std__basic_iostream_char__std__char_traits_char__*)((char *)t316 + 0);
            static void *vtt_slot350 = 0;
            void** vtt351 = (void**)&vtt_slot350;
            std__basic_iostream_char__std__char_traits_char______basic_iostream(base349, vtt351);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base352 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t316 + 128);
            std__basic_ios_char__std__char_traits_char______basic_ios(base352);
          }
          return;
        }
  return;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v353) {
bb354:
  struct std__ctype_char_* __f355;
  struct std__ctype_char_* __retval356;
  __f355 = v353;
    struct std__ctype_char_* t357 = __f355;
    _Bool cast358 = (_Bool)t357;
    _Bool u359 = !cast358;
    if (u359) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t360 = __f355;
  __retval356 = t360;
  struct std__ctype_char_* t361 = __retval356;
  return t361;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v362, char v363) {
bb364:
  struct std__ctype_char_* this365;
  char __c366;
  char __retval367;
  this365 = v362;
  __c366 = v363;
  struct std__ctype_char_* t368 = this365;
    char t369 = t368->_M_widen_ok;
    _Bool cast370 = (_Bool)t369;
    if (cast370) {
      char t371 = __c366;
      unsigned char cast372 = (unsigned char)t371;
      unsigned long cast373 = (unsigned long)cast372;
      char t374 = t368->_M_widen[cast373];
      __retval367 = t374;
      char t375 = __retval367;
      return t375;
    }
  std__ctype_char____M_widen_init___const(t368);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t376 = __c366;
  void** v377 = (void**)t368;
  void* v378 = *((void**)v377);
  char vcall381 = (char)__VERIFIER_virtual_call_char_char(t368, 6, t376);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval367 = vcall381;
  char t382 = __retval367;
  return t382;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v383, char v384) {
bb385:
  struct std__basic_ios_char__std__char_traits_char__* this386;
  char __c387;
  char __retval388;
  this386 = v383;
  __c387 = v384;
  struct std__basic_ios_char__std__char_traits_char__* t389 = this386;
  struct std__ctype_char_* t390 = t389->_M_ctype;
  struct std__ctype_char_* r391 = std__ctype_char__const__std____check_facet_std__ctype_char___(t390);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t392 = __c387;
  char r393 = std__ctype_char___widen_char__const(r391, t392);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval388 = r393;
  char t394 = __retval388;
  return t394;
}

// function: _ZNSi7getlineEPcl
struct std__basic_istream_char__std__char_traits_char__* std__istream__getline(struct std__basic_istream_char__std__char_traits_char__* v395, char* v396, long v397) {
bb398:
  struct std__basic_istream_char__std__char_traits_char__* this399;
  char* __s400;
  long __n401;
  struct std__basic_istream_char__std__char_traits_char__* __retval402;
  this399 = v395;
  __s400 = v396;
  __n401 = v397;
  struct std__basic_istream_char__std__char_traits_char__* t403 = this399;
  char* t404 = __s400;
  long t405 = __n401;
  void** v406 = (void**)t403;
  void* v407 = *((void**)v406);
  unsigned char* cast408 = (unsigned char*)v407;
  long c409 = -24;
  unsigned char* ptr410 = &(cast408)[c409];
  long* cast411 = (long*)ptr410;
  long t412 = *cast411;
  unsigned char* cast413 = (unsigned char*)t403;
  unsigned char* ptr414 = &(cast413)[t412];
  struct std__basic_istream_char__std__char_traits_char__* cast415 = (struct std__basic_istream_char__std__char_traits_char__*)ptr414;
  struct std__basic_ios_char__std__char_traits_char__* cast416 = (struct std__basic_ios_char__std__char_traits_char__*)cast415;
  char c417 = 10;
  char r418 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast416, c417);
  if (__cir_exc_active) {
    struct std__basic_istream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_istream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_istream_char__std__char_traits_char__* r419 = std__istream__getline_2(t403, t404, t405, r418);
  if (__cir_exc_active) {
    struct std__basic_istream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_istream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval402 = r419;
  struct std__basic_istream_char__std__char_traits_char__* t420 = __retval402;
  return t420;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v421, char* v422) {
bb423:
  char* __c1424;
  char* __c2425;
  _Bool __retval426;
  __c1424 = v421;
  __c2425 = v422;
  char* t427 = __c1424;
  char t428 = *t427;
  int cast429 = (int)t428;
  char* t430 = __c2425;
  char t431 = *t430;
  int cast432 = (int)t431;
  _Bool c433 = ((cast429 == cast432)) ? 1 : 0;
  __retval426 = c433;
  _Bool t434 = __retval426;
  return t434;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v435) {
bb436:
  char* __p437;
  unsigned long __retval438;
  unsigned long __i439;
  __p437 = v435;
  unsigned long c440 = 0;
  __i439 = c440;
    char ref_tmp0441;
    while (1) {
      unsigned long t442 = __i439;
      char* t443 = __p437;
      char* ptr444 = &(t443)[t442];
      char c445 = 0;
      ref_tmp0441 = c445;
      _Bool r446 = __gnu_cxx__char_traits_char___eq(ptr444, &ref_tmp0441);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u447 = !r446;
      if (!u447) break;
      unsigned long t448 = __i439;
      unsigned long u449 = t448 + 1;
      __i439 = u449;
    }
  unsigned long t450 = __i439;
  __retval438 = t450;
  unsigned long t451 = __retval438;
  return t451;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v452) {
bb453:
  char* __s454;
  unsigned long __retval455;
  __s454 = v452;
    _Bool r456 = std____is_constant_evaluated();
    if (r456) {
      char* t457 = __s454;
      unsigned long r458 = __gnu_cxx__char_traits_char___length(t457);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval455 = r458;
      unsigned long t459 = __retval455;
      return t459;
    }
  char* t460 = __s454;
  unsigned long r461 = strlen(t460);
  __retval455 = r461;
  unsigned long t462 = __retval455;
  return t462;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v463, char* v464) {
bb465:
  struct std__basic_ostream_char__std__char_traits_char__* __out466;
  char* __s467;
  struct std__basic_ostream_char__std__char_traits_char__* __retval468;
  __out466 = v463;
  __s467 = v464;
    char* t469 = __s467;
    _Bool cast470 = (_Bool)t469;
    _Bool u471 = !cast470;
    if (u471) {
      struct std__basic_ostream_char__std__char_traits_char__* t472 = __out466;
      void** v473 = (void**)t472;
      void* v474 = *((void**)v473);
      unsigned char* cast475 = (unsigned char*)v474;
      long c476 = -24;
      unsigned char* ptr477 = &(cast475)[c476];
      long* cast478 = (long*)ptr477;
      long t479 = *cast478;
      unsigned char* cast480 = (unsigned char*)t472;
      unsigned char* ptr481 = &(cast480)[t479];
      struct std__basic_ostream_char__std__char_traits_char__* cast482 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr481;
      struct std__basic_ios_char__std__char_traits_char__* cast483 = (struct std__basic_ios_char__std__char_traits_char__*)cast482;
      int t484 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast483, t484);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t485 = __out466;
      char* t486 = __s467;
      char* t487 = __s467;
      unsigned long r488 = std__char_traits_char___length(t487);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast489 = (long)r488;
      struct std__basic_ostream_char__std__char_traits_char__* r490 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t485, t486, cast489);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t491 = __out466;
  __retval468 = t491;
  struct std__basic_ostream_char__std__char_traits_char__* t492 = __retval468;
  return t492;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v493, void* v494) {
bb495:
  struct std__basic_ostream_char__std__char_traits_char__* this496;
  void* __pf497;
  struct std__basic_ostream_char__std__char_traits_char__* __retval498;
  this496 = v493;
  __pf497 = v494;
  struct std__basic_ostream_char__std__char_traits_char__* t499 = this496;
  void* t500 = __pf497;
  struct std__basic_ostream_char__std__char_traits_char__* r501 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t500)(t499);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval498 = r501;
  struct std__basic_ostream_char__std__char_traits_char__* t502 = __retval498;
  return t502;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v503) {
bb504:
  struct std__basic_ostream_char__std__char_traits_char__* __os505;
  struct std__basic_ostream_char__std__char_traits_char__* __retval506;
  __os505 = v503;
  struct std__basic_ostream_char__std__char_traits_char__* t507 = __os505;
  struct std__basic_ostream_char__std__char_traits_char__* r508 = std__ostream__flush(t507);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval506 = r508;
  struct std__basic_ostream_char__std__char_traits_char__* t509 = __retval506;
  return t509;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v510) {
bb511:
  struct std__basic_ostream_char__std__char_traits_char__* __os512;
  struct std__basic_ostream_char__std__char_traits_char__* __retval513;
  __os512 = v510;
  struct std__basic_ostream_char__std__char_traits_char__* t514 = __os512;
  struct std__basic_ostream_char__std__char_traits_char__* t515 = __os512;
  void** v516 = (void**)t515;
  void* v517 = *((void**)v516);
  unsigned char* cast518 = (unsigned char*)v517;
  long c519 = -24;
  unsigned char* ptr520 = &(cast518)[c519];
  long* cast521 = (long*)ptr520;
  long t522 = *cast521;
  unsigned char* cast523 = (unsigned char*)t515;
  unsigned char* ptr524 = &(cast523)[t522];
  struct std__basic_ostream_char__std__char_traits_char__* cast525 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr524;
  struct std__basic_ios_char__std__char_traits_char__* cast526 = (struct std__basic_ios_char__std__char_traits_char__*)cast525;
  char c527 = 10;
  char r528 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast526, c527);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r529 = std__ostream__put(t514, r528);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r530 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r529);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval513 = r530;
  struct std__basic_ostream_char__std__char_traits_char__* t531 = __retval513;
  return t531;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEE5closeEv
void std__basic_ifstream_char__std__char_traits_char_____close(struct std__basic_ifstream_char__std__char_traits_char__* v532) {
bb533:
  struct std__basic_ifstream_char__std__char_traits_char__* this534;
  this534 = v532;
  struct std__basic_ifstream_char__std__char_traits_char__* t535 = this534;
    struct std__basic_filebuf_char__std__char_traits_char__* r536 = std__basic_filebuf_char__std__char_traits_char_____close(&t535->_M_filebuf);
    if (__cir_exc_active) {
      return;
    }
    _Bool cast537 = (_Bool)r536;
    _Bool u538 = !cast537;
    if (u538) {
      void** v539 = (void**)t535;
      void* v540 = *((void**)v539);
      unsigned char* cast541 = (unsigned char*)v540;
      long c542 = -24;
      unsigned char* ptr543 = &(cast541)[c542];
      long* cast544 = (long*)ptr543;
      long t545 = *cast544;
      unsigned char* cast546 = (unsigned char*)t535;
      unsigned char* ptr547 = &(cast546)[t545];
      struct std__basic_ifstream_char__std__char_traits_char__* cast548 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr547;
      struct std__basic_ios_char__std__char_traits_char__* cast549 = (struct std__basic_ios_char__std__char_traits_char__*)cast548;
      int t550 = _ZNSt8ios_base7failbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast549, t550);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream_2(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* v551, void** v552) {
bb553:
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* this554;
  void** vtt555;
  this554 = v551;
  vtt555 = v552;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* t556 = this554;
  void** t557 = vtt555;
    {
      std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______basic_stringbuf(&t556->_M_stringbuf);
    }
  {
    struct std__basic_iostream_char__std__char_traits_char__* base558 = (struct std__basic_iostream_char__std__char_traits_char__*)((char *)t556 + 0);
    static void *vtt_slot559 = 0;
    void** vtt560 = (void**)&vtt_slot559;
    std__basic_iostream_char__std__char_traits_char______basic_iostream(base558, vtt560);
  }
  return;
}

// function: _ZNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEED1Ev
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* v561) {
bb562:
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* this563;
  this563 = v561;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* t564 = this563;
    static void *vtt_slot565 = 0;
    void** vtt566 = (void**)&vtt_slot565;
    std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream_2(t564, vtt566);
  {
    struct std__basic_ios_char__std__char_traits_char__* base567 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t564 + 128);
    std__basic_ios_char__std__char_traits_char______basic_ios(base567);
  }
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEED2Ev
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream_2(struct std__basic_ifstream_char__std__char_traits_char__* v568, void** v569) {
bb570:
  struct std__basic_ifstream_char__std__char_traits_char__* this571;
  void** vtt572;
  this571 = v568;
  vtt572 = v569;
  struct std__basic_ifstream_char__std__char_traits_char__* t573 = this571;
  void** t574 = vtt572;
    {
      std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t573->_M_filebuf);
    }
  {
    struct std__basic_istream_char__std__char_traits_char__* base575 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t573 + 0);
    static void *vtt_slot576 = 0;
    void** vtt577 = (void**)&vtt_slot576;
    std__basic_istream_char__std__char_traits_char______basic_istream(base575, vtt577);
  }
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* v578) {
bb579:
  struct std__basic_ifstream_char__std__char_traits_char__* this580;
  this580 = v578;
  struct std__basic_ifstream_char__std__char_traits_char__* t581 = this580;
    static void *vtt_slot582 = 0;
    void** vtt583 = (void**)&vtt_slot582;
    std__basic_ifstream_char__std__char_traits_char______basic_ifstream_2(t581, vtt583);
  {
    struct std__basic_ios_char__std__char_traits_char__* base584 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t581 + 256);
    std__basic_ios_char__std__char_traits_char______basic_ios(base584);
  }
  return;
}

// function: main
int main() {
bb585:
  int __retval586;
  int array587[6][5];
  char buff588[80];
  struct std__basic_ifstream_char__std__char_traits_char__ infile589;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__ ss590;
  int c591 = 0;
  __retval586 = c591;
  char* cast592 = (char*)&(_str);
  int t593 = _ZNSt8ios_base2inE_const;
  std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(&infile589, cast592, t593);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____basic_stringstream(&ss590);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&infile589);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
        int row594;
        int c595 = 0;
        row594 = c595;
        while (1) {
          int t597 = row594;
          int t598 = _ZL4ROWS;
          _Bool c599 = ((t597 < t598)) ? 1 : 0;
          if (!c599) break;
            struct std__basic_istream_char__std__char_traits_char__* base600 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(infile589) + 0);
            char* cast601 = (char*)&(buff588);
            int t602 = _ZL8BUFFSIZE;
            long cast603 = (long)t602;
            struct std__basic_istream_char__std__char_traits_char__* r604 = std__istream__getline(base600, cast601, cast603);
            if (__cir_exc_active) {
              {
                std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(&ss590);
              }
              {
                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&infile589);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
            struct std__basic_ostream_char__std__char_traits_char__* base605 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(ss590) + 16);
            char* cast606 = (char*)&(buff588);
            struct std__basic_ostream_char__std__char_traits_char__* r607 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(base605, cast606);
            if (__cir_exc_active) {
              {
                std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(&ss590);
              }
              {
                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&infile589);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
              int col608;
              int c609 = 0;
              col608 = c609;
              while (1) {
                int t611 = col608;
                int t612 = _ZL4COLS;
                _Bool c613 = ((t611 < t612)) ? 1 : 0;
                if (!c613) break;
                  struct std__basic_istream_char__std__char_traits_char__* base614 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(ss590) + 0);
                  char* cast615 = (char*)&(buff588);
                  long c616 = 6;
                  char c617 = 44;
                  struct std__basic_istream_char__std__char_traits_char__* r618 = std__istream__getline_2(base614, cast615, c616, c617);
                  if (__cir_exc_active) {
                    {
                      std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(&ss590);
                    }
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&infile589);
                    }
                    int __cir_eh_ret = (int)0;
                    return __cir_eh_ret;
                  }
                  char* cast619 = (char*)&(buff588);
                  int r620 = atoi(cast619);
                  int t621 = col608;
                  long cast622 = (long)t621;
                  int t623 = row594;
                  long cast624 = (long)t623;
                  array587[cast624][cast622] = r620;
              for_step610: ;
                int t625 = col608;
                int u626 = t625 + 1;
                col608 = u626;
              }
            struct std__basic_ostream_char__std__char_traits_char__* base627 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(ss590) + 16);
            char* cast628 = (char*)&(_str_1);
            struct std__basic_ostream_char__std__char_traits_char__* r629 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(base627, cast628);
            if (__cir_exc_active) {
              {
                std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(&ss590);
              }
              {
                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&infile589);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
            void** v630 = (void**)&(ss590);
            void* v631 = *((void**)v630);
            unsigned char* cast632 = (unsigned char*)v631;
            long c633 = -24;
            unsigned char* ptr634 = &(cast632)[c633];
            long* cast635 = (long*)ptr634;
            long t636 = *cast635;
            unsigned char* cast637 = (unsigned char*)&(ss590);
            unsigned char* ptr638 = &(cast637)[t636];
            struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* cast639 = (struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__*)ptr638;
            struct std__basic_ios_char__std__char_traits_char__* cast640 = (struct std__basic_ios_char__std__char_traits_char__*)cast639;
            int t641 = _ZNSt8ios_base7goodbitE_const;
            std__basic_ios_char__std__char_traits_char_____clear(cast640, t641);
            if (__cir_exc_active) {
              {
                std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(&ss590);
              }
              {
                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&infile589);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
        for_step596: ;
          int t642 = row594;
          int u643 = t642 + 1;
          row594 = u643;
        }
        int row644;
        int c645 = 0;
        row644 = c645;
        while (1) {
          int t647 = row644;
          int t648 = _ZL4ROWS;
          _Bool c649 = ((t647 < t648)) ? 1 : 0;
          if (!c649) break;
              int col650;
              int c651 = 0;
              col650 = c651;
              while (1) {
                int t653 = col650;
                int t654 = _ZL4COLS;
                _Bool c655 = ((t653 < t654)) ? 1 : 0;
                if (!c655) break;
                  int t656 = col650;
                  long cast657 = (long)t656;
                  int t658 = row644;
                  long cast659 = (long)t658;
                  int t660 = array587[cast659][cast657];
                  struct std__basic_ostream_char__std__char_traits_char__* r661 = std__ostream__operator__(&_ZSt4cout, t660);
                  if (__cir_exc_active) {
                    {
                      std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(&ss590);
                    }
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&infile589);
                    }
                    int __cir_eh_ret = (int)0;
                    return __cir_eh_ret;
                  }
                  char* cast662 = (char*)&(_str_2);
                  struct std__basic_ostream_char__std__char_traits_char__* r663 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r661, cast662);
                  if (__cir_exc_active) {
                    {
                      std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(&ss590);
                    }
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&infile589);
                    }
                    int __cir_eh_ret = (int)0;
                    return __cir_eh_ret;
                  }
              for_step652: ;
                int t664 = col650;
                int u665 = t664 + 1;
                col650 = u665;
              }
            struct std__basic_ostream_char__std__char_traits_char__* r666 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            if (__cir_exc_active) {
              {
                std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(&ss590);
              }
              {
                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&infile589);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
        for_step646: ;
          int t667 = row644;
          int u668 = t667 + 1;
          row644 = u668;
        }
      std__basic_ifstream_char__std__char_traits_char_____close(&infile589);
      if (__cir_exc_active) {
        {
          std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(&ss590);
        }
        {
          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&infile589);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
    {
      std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(&ss590);
    }
  {
    std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&infile589);
  }
  int t669 = __retval586;
  return t669;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v670) {
bb671:
  struct std__basic_streambuf_char__std__char_traits_char__* this672;
  this672 = v670;
  struct std__basic_streambuf_char__std__char_traits_char__* t673 = this672;
  {
    std__locale___locale(&t673->_M_buf_locale);
  }
  return;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEEC2Ev
void std__basic_streambuf_char__std__char_traits_char_____basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v674) {
bb675:
  struct std__basic_streambuf_char__std__char_traits_char__* this676;
  this676 = v674;
  struct std__basic_streambuf_char__std__char_traits_char__* t677 = this676;
  void* v678 = (void*)&_ZTVSt15basic_streambufIcSt11char_traitsIcEE[2];
  void** v679 = (void**)t677;
  *(void**)(v679) = (void*)v678;
  char* c680 = ((void*)0);
  t677->_M_in_beg = c680;
  char* c681 = ((void*)0);
  t677->_M_in_cur = c681;
  char* c682 = ((void*)0);
  t677->_M_in_end = c682;
  char* c683 = ((void*)0);
  t677->_M_out_beg = c683;
  char* c684 = ((void*)0);
  t677->_M_out_cur = c684;
  char* c685 = ((void*)0);
  t677->_M_out_end = c685;
  std__locale__locale(&t677->_M_buf_locale);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v686) {
bb687:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this688;
  struct std__allocator_char_ ref_tmp0689;
  this688 = v686;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t690 = this688;
  char* r691 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t690);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_char___allocator_2(&ref_tmp0689);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t690->_M_dataplus, r691, &ref_tmp0689);
    if (__cir_exc_active) {
      {
        std__allocator_char____allocator(&ref_tmp0689);
      }
      return;
    }
  {
    std__allocator_char____allocator(&ref_tmp0689);
  }
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t690);
    unsigned long c692 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t690, c692);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t690->_M_dataplus);
      }
      return;
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v693) {
bb694:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this695;
  this695 = v693;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t696 = this695;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t696);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t696->_M_dataplus);
      }
      return;
    }
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t696->_M_dataplus);
  }
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v697) {
bb698:
  char* __r699;
  char* __retval700;
  __r699 = v697;
  char* t701 = __r699;
  __retval700 = t701;
  char* t702 = __retval700;
  return t702;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v703) {
bb704:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this705;
  char* __retval706;
  this705 = v703;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t707 = this705;
  char* cast708 = (char*)&(t707->field2._M_local_buf);
  char* r709 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast708);
  __retval706 = r709;
  char* t710 = __retval706;
  return t710;
}

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v711) {
bb712:
  struct std__allocator_char_* this713;
  this713 = v711;
  struct std__allocator_char_* t714 = this713;
  struct std____new_allocator_char_* base715 = (struct std____new_allocator_char_*)((char *)t714 + 0);
  std____new_allocator_char_____new_allocator_2(base715);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v716, char* v717, struct std__allocator_char_* v718) {
bb719:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this720;
  char* __dat721;
  struct std__allocator_char_* __a722;
  this720 = v716;
  __dat721 = v717;
  __a722 = v718;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t723 = this720;
  struct std__allocator_char_* base724 = (struct std__allocator_char_*)((char *)t723 + 0);
  struct std__allocator_char_* t725 = __a722;
  std__allocator_char___allocator(base724, t725);
    char* t726 = __dat721;
    t723->_M_p = t726;
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v727) {
bb728:
  struct std__allocator_char_* this729;
  this729 = v727;
  struct std__allocator_char_* t730 = this729;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb731:
  _Bool __retval732;
    _Bool c733 = 0;
    __retval732 = c733;
    _Bool t734 = __retval732;
    return t734;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v735) {
bb736:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this737;
  this737 = v735;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t738 = this737;
    _Bool r739 = std__is_constant_evaluated();
    if (r739) {
        unsigned long __i740;
        unsigned long c741 = 0;
        __i740 = c741;
        while (1) {
          unsigned long t743 = __i740;
          unsigned long c744 = 15;
          _Bool c745 = ((t743 <= c744)) ? 1 : 0;
          if (!c745) break;
          char c746 = 0;
          unsigned long t747 = __i740;
          t738->field2._M_local_buf[t747] = c746;
        for_step742: ;
          unsigned long t748 = __i740;
          unsigned long u749 = t748 + 1;
          __i740 = u749;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v750, unsigned long v751) {
bb752:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this753;
  unsigned long __length754;
  this753 = v750;
  __length754 = v751;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t755 = this753;
  unsigned long t756 = __length754;
  t755->_M_string_length = t756;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb757:
  _Bool __retval758;
    _Bool c759 = 0;
    __retval758 = c759;
    _Bool t760 = __retval758;
    return t760;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v761, char* v762) {
bb763:
  char* __location764;
  char* __args765;
  char* __retval766;
  void* __loc767;
  __location764 = v761;
  __args765 = v762;
  char* t768 = __location764;
  void* cast769 = (void*)t768;
  __loc767 = cast769;
    void* t770 = __loc767;
    char* cast771 = (char*)t770;
    char* t772 = __args765;
    char t773 = *t772;
    *cast771 = t773;
    __retval766 = cast771;
    char* t774 = __retval766;
    return t774;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v775, char* v776) {
bb777:
  char* __c1778;
  char* __c2779;
  __c1778 = v775;
  __c2779 = v776;
    _Bool r780 = std____is_constant_evaluated();
    if (r780) {
      char* t781 = __c1778;
      char* t782 = __c2779;
      char* r783 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t781, t782);
    } else {
      char* t784 = __c2779;
      char t785 = *t784;
      char* t786 = __c1778;
      *t786 = t785;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v787) {
bb788:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this789;
  char* __retval790;
  this789 = v787;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t791 = this789;
  char* t792 = t791->_M_dataplus._M_p;
  __retval790 = t792;
  char* t793 = __retval790;
  return t793;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v794, unsigned long v795) {
bb796:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this797;
  unsigned long __n798;
  char ref_tmp0799;
  this797 = v794;
  __n798 = v795;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t800 = this797;
  unsigned long t801 = __n798;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t800, t801);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t802 = __n798;
  char* r803 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t800);
  if (__cir_exc_active) {
    return;
  }
  char* ptr804 = &(r803)[t802];
  char c805 = 0;
  ref_tmp0799 = c805;
  std__char_traits_char___assign(ptr804, &ref_tmp0799);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v806) {
bb807:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this808;
  this808 = v806;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t809 = this808;
  {
    struct std__allocator_char_* base810 = (struct std__allocator_char_*)((char *)t809 + 0);
    std__allocator_char____allocator(base810);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v811) {
bb812:
  struct std____new_allocator_char_* this813;
  this813 = v811;
  struct std____new_allocator_char_* t814 = this813;
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v815, struct std____new_allocator_char_* v816) {
bb817:
  struct std____new_allocator_char_* this818;
  struct std____new_allocator_char_* unnamed819;
  this818 = v815;
  unnamed819 = v816;
  struct std____new_allocator_char_* t820 = this818;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v821, struct std__allocator_char_* v822) {
bb823:
  struct std__allocator_char_* this824;
  struct std__allocator_char_* __a825;
  this824 = v821;
  __a825 = v822;
  struct std__allocator_char_* t826 = this824;
  struct std____new_allocator_char_* base827 = (struct std____new_allocator_char_*)((char *)t826 + 0);
  struct std__allocator_char_* t828 = __a825;
  struct std____new_allocator_char_* base829 = (struct std____new_allocator_char_*)((char *)t828 + 0);
  std____new_allocator_char_____new_allocator(base827, base829);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v830) {
bb831:
  char* __r832;
  char* __retval833;
  __r832 = v830;
  char* t834 = __r832;
  __retval833 = t834;
  char* t835 = __retval833;
  return t835;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v836) {
bb837:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this838;
  char* __retval839;
  this838 = v836;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t840 = this838;
  char* cast841 = (char*)&(t840->field2._M_local_buf);
  char* r842 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast841);
  __retval839 = r842;
  char* t843 = __retval839;
  return t843;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v844) {
bb845:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this846;
  _Bool __retval847;
  this846 = v844;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t848 = this846;
    char* r849 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t848);
    if (__cir_exc_active) {
      _Bool __cir_eh_ret = (_Bool)0;
      return __cir_eh_ret;
    }
    char* r850 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t848);
    if (__cir_exc_active) {
      _Bool __cir_eh_ret = (_Bool)0;
      return __cir_eh_ret;
    }
    _Bool c851 = ((r849 == r850)) ? 1 : 0;
    if (c851) {
        unsigned long t852 = t848->_M_string_length;
        unsigned long c853 = 15;
        _Bool c854 = ((t852 > c853)) ? 1 : 0;
        if (c854) {
          __builtin_unreachable();
        }
      _Bool c855 = 1;
      __retval847 = c855;
      _Bool t856 = __retval847;
      return t856;
    }
  _Bool c857 = 0;
  __retval847 = c857;
  _Bool t858 = __retval847;
  return t858;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v859, char* v860, unsigned long v861) {
bb862:
  struct std____new_allocator_char_* this863;
  char* __p864;
  unsigned long __n865;
  this863 = v859;
  __p864 = v860;
  __n865 = v861;
  struct std____new_allocator_char_* t866 = this863;
    unsigned long c867 = 1;
    unsigned long c868 = 16;
    _Bool c869 = ((c867 > c868)) ? 1 : 0;
    if (c869) {
      char* t870 = __p864;
      void* cast871 = (void*)t870;
      unsigned long t872 = __n865;
      unsigned long c873 = 1;
      unsigned long b874 = t872 * c873;
      unsigned long c875 = 1;
      operator_delete_3(cast871, b874, c875);
      return;
    }
  char* t876 = __p864;
  void* cast877 = (void*)t876;
  unsigned long t878 = __n865;
  unsigned long c879 = 1;
  unsigned long b880 = t878 * c879;
  operator_delete_2(cast877, b880);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v881, char* v882, unsigned long v883) {
bb884:
  struct std__allocator_char_* this885;
  char* __p886;
  unsigned long __n887;
  this885 = v881;
  __p886 = v882;
  __n887 = v883;
  struct std__allocator_char_* t888 = this885;
    _Bool r889 = std____is_constant_evaluated();
    if (r889) {
      char* t890 = __p886;
      void* cast891 = (void*)t890;
      operator_delete(cast891);
      return;
    }
  struct std____new_allocator_char_* base892 = (struct std____new_allocator_char_*)((char *)t888 + 0);
  char* t893 = __p886;
  unsigned long t894 = __n887;
  std____new_allocator_char___deallocate(base892, t893, t894);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v895, char* v896, unsigned long v897) {
bb898:
  struct std__allocator_char_* __a899;
  char* __p900;
  unsigned long __n901;
  __a899 = v895;
  __p900 = v896;
  __n901 = v897;
  struct std__allocator_char_* t902 = __a899;
  char* t903 = __p900;
  unsigned long t904 = __n901;
  std__allocator_char___deallocate(t902, t903, t904);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v905) {
bb906:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this907;
  struct std__allocator_char_* __retval908;
  this907 = v905;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t909 = this907;
  struct std__allocator_char_* base910 = (struct std__allocator_char_*)((char *)&(t909->_M_dataplus) + 0);
  __retval908 = base910;
  struct std__allocator_char_* t911 = __retval908;
  return t911;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v912, unsigned long v913) {
bb914:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this915;
  unsigned long __size916;
  this915 = v912;
  __size916 = v913;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t917 = this915;
  struct std__allocator_char_* r918 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t917);
  if (__cir_exc_active) {
    return;
  }
  char* r919 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t917);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t920 = __size916;
  unsigned long c921 = 1;
  unsigned long b922 = t920 + c921;
  std__allocator_traits_std__allocator_char_____deallocate(r918, r919, b922);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v923) {
bb924:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this925;
  this925 = v923;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t926 = this925;
    _Bool r927 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t926);
    if (__cir_exc_active) {
      return;
    }
    _Bool u928 = !r927;
    if (u928) {
      unsigned long t929 = t926->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t926, t929);
    }
  return;
}

