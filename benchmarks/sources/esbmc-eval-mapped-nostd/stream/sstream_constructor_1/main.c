extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
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
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* _M_in_beg; char* _M_in_cur; char* _M_in_end; char* _M_out_beg; char* _M_out_cur; char* _M_out_end; struct std__locale _M_buf_locale; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
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
char _str[20] = "120 42 377 6 5 2000";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
extern void *_ZTVNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void *_ZTVNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt15basic_streambufIcSt11char_traitsIcEE[];
int _ZNSt8ios_base3outE_const __attribute__((aligned(4))) = 16;
int _ZNSt8ios_base2inE_const __attribute__((aligned(4))) = 8;
int std__operator__2(int p0, int p1);
extern void std__ios_base__ios_base(struct std__ios_base* p0);
void std__ios_base___ios_base(struct std__ios_base* p0) {}
void std__basic_ios_char__std__char_traits_char_____basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_istream_char__std__char_traits_char_____basic_istream(struct std__basic_istream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ostream_char__std__char_traits_char_____basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ostream_char__std__char_traits_char______basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* p0, void** p1);
void std__basic_istream_char__std__char_traits_char______basic_istream(struct std__basic_istream_char__std__char_traits_char__* p0, void** p1);
void std__basic_iostream_char__std__char_traits_char_____basic_iostream(struct std__basic_iostream_char__std__char_traits_char__* p0, void** p1);
void std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char_____basic_stringbuf(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* p0, int p1);
extern void std__basic_ios_char__std__char_traits_char_____init(struct std__basic_ios_char__std__char_traits_char__* p0, struct std__basic_streambuf_char__std__char_traits_char__* p1);
void std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______basic_stringbuf(struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__* p0);
void std__basic_iostream_char__std__char_traits_char______basic_iostream(struct std__basic_iostream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____basic_stringstream(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* p0, int p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* p0, int* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
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
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream_2(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* p0, void** p1);
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* p0);
int main();
extern void std__locale__locale(struct std__locale* p0);
void std__locale___locale(struct std__locale* p0) {}
void std__basic_streambuf_char__std__char_traits_char_____basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* p0);
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* p0);
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

extern unsigned char* _ZTTNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEE[10] __attribute__((aligned(8)));

// function: _ZStorSt13_Ios_OpenmodeS_
int std__operator__2(int v0, int v1) {
bb2:
  int __a3;
  int __b4;
  int __retval5;
  __a3 = v0;
  __b4 = v1;
  int t6 = __a3;
  int t7 = __b4;
  int b8 = t6 | t7;
  __retval5 = b8;
  int t9 = __retval5;
  return t9;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEEC2Ev
void std__basic_ios_char__std__char_traits_char_____basic_ios(struct std__basic_ios_char__std__char_traits_char__* v10) {
bb11:
  struct std__basic_ios_char__std__char_traits_char__* this12;
  this12 = v10;
  struct std__basic_ios_char__std__char_traits_char__* t13 = this12;
  struct std__ios_base* base14 = (struct std__ios_base*)((char *)t13 + 0);
  std__ios_base__ios_base(base14);
    void* v15 = (void*)&_ZTVSt9basic_iosIcSt11char_traitsIcEE[2];
    void** v16 = (void**)t13;
    *(void**)(v16) = (void*)v15;
    struct std__basic_ostream_char__std__char_traits_char__* c17 = ((void*)0);
    t13->_M_tie = c17;
    char c18 = 0;
    t13->_M_fill = c18;
    _Bool c19 = 0;
    t13->_M_fill_init = c19;
    struct std__basic_streambuf_char__std__char_traits_char__* c20 = ((void*)0);
    t13->_M_streambuf = c20;
    struct std__ctype_char_* c21 = ((void*)0);
    t13->_M_ctype = c21;
    struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* c22 = ((void*)0);
    t13->_M_num_put = c22;
    struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* c23 = ((void*)0);
    t13->_M_num_get = c23;
  return;
}

// function: _ZNSiC2Ev
void std__basic_istream_char__std__char_traits_char_____basic_istream(struct std__basic_istream_char__std__char_traits_char__* v24, void** v25) {
bb26:
  struct std__basic_istream_char__std__char_traits_char__* this27;
  void** vtt28;
  this27 = v24;
  vtt28 = v25;
  struct std__basic_istream_char__std__char_traits_char__* t29 = this27;
  void** t30 = vtt28;
  static void *vtt_slot31 = 0;
  void** vtt32 = (void**)&vtt_slot31;
  void** cast33 = (void**)vtt32;
  void* t34 = *cast33;
  void** v35 = (void**)t29;
  *(void**)(v35) = (void*)t34;
  static void *vtt_slot36 = 0;
  void** vtt37 = (void**)&vtt_slot36;
  void** cast38 = (void**)vtt37;
  void* t39 = *cast38;
  void** v40 = (void**)t29;
  void* v41 = *((void**)v40);
  unsigned char* cast42 = (unsigned char*)v41;
  long c43 = -24;
  unsigned char* ptr44 = &(cast42)[c43];
  long* cast45 = (long*)ptr44;
  long t46 = *cast45;
  unsigned char* cast47 = (unsigned char*)t29;
  unsigned char* ptr48 = &(cast47)[t46];
  struct std__basic_istream_char__std__char_traits_char__* cast49 = (struct std__basic_istream_char__std__char_traits_char__*)ptr48;
  void** v50 = (void**)cast49;
  *(void**)(v50) = (void*)t39;
  long c51 = 0;
  t29->_M_gcount = c51;
  void** v52 = (void**)t29;
  void* v53 = *((void**)v52);
  unsigned char* cast54 = (unsigned char*)v53;
  long c55 = -24;
  unsigned char* ptr56 = &(cast54)[c55];
  long* cast57 = (long*)ptr56;
  long t58 = *cast57;
  unsigned char* cast59 = (unsigned char*)t29;
  unsigned char* ptr60 = &(cast59)[t58];
  struct std__basic_istream_char__std__char_traits_char__* cast61 = (struct std__basic_istream_char__std__char_traits_char__*)ptr60;
  struct std__basic_ios_char__std__char_traits_char__* cast62 = (struct std__basic_ios_char__std__char_traits_char__*)cast61;
  struct std__basic_streambuf_char__std__char_traits_char__* c63 = ((void*)0);
  std__basic_ios_char__std__char_traits_char_____init(cast62, c63);
  return;
}

// function: _ZNSoC2Ev
void std__basic_ostream_char__std__char_traits_char_____basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* v64, void** v65) {
bb66:
  struct std__basic_ostream_char__std__char_traits_char__* this67;
  void** vtt68;
  this67 = v64;
  vtt68 = v65;
  struct std__basic_ostream_char__std__char_traits_char__* t69 = this67;
  void** t70 = vtt68;
  static void *vtt_slot71 = 0;
  void** vtt72 = (void**)&vtt_slot71;
  void** cast73 = (void**)vtt72;
  void* t74 = *cast73;
  void** v75 = (void**)t69;
  *(void**)(v75) = (void*)t74;
  static void *vtt_slot76 = 0;
  void** vtt77 = (void**)&vtt_slot76;
  void** cast78 = (void**)vtt77;
  void* t79 = *cast78;
  void** v80 = (void**)t69;
  void* v81 = *((void**)v80);
  unsigned char* cast82 = (unsigned char*)v81;
  long c83 = -24;
  unsigned char* ptr84 = &(cast82)[c83];
  long* cast85 = (long*)ptr84;
  long t86 = *cast85;
  unsigned char* cast87 = (unsigned char*)t69;
  unsigned char* ptr88 = &(cast87)[t86];
  struct std__basic_ostream_char__std__char_traits_char__* cast89 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr88;
  void** v90 = (void**)cast89;
  *(void**)(v90) = (void*)t79;
  void** v91 = (void**)t69;
  void* v92 = *((void**)v91);
  unsigned char* cast93 = (unsigned char*)v92;
  long c94 = -24;
  unsigned char* ptr95 = &(cast93)[c94];
  long* cast96 = (long*)ptr95;
  long t97 = *cast96;
  unsigned char* cast98 = (unsigned char*)t69;
  unsigned char* ptr99 = &(cast98)[t97];
  struct std__basic_ostream_char__std__char_traits_char__* cast100 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr99;
  struct std__basic_ios_char__std__char_traits_char__* cast101 = (struct std__basic_ios_char__std__char_traits_char__*)cast100;
  struct std__basic_streambuf_char__std__char_traits_char__* c102 = ((void*)0);
  std__basic_ios_char__std__char_traits_char_____init(cast101, c102);
  return;
}

// function: _ZNSoD2Ev
void std__basic_ostream_char__std__char_traits_char______basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* v103, void** v104) {
bb105:
  struct std__basic_ostream_char__std__char_traits_char__* this106;
  void** vtt107;
  this106 = v103;
  vtt107 = v104;
  struct std__basic_ostream_char__std__char_traits_char__* t108 = this106;
  void** t109 = vtt107;
  return;
}

// function: _ZNSiD2Ev
void std__basic_istream_char__std__char_traits_char______basic_istream(struct std__basic_istream_char__std__char_traits_char__* v110, void** v111) {
bb112:
  struct std__basic_istream_char__std__char_traits_char__* this113;
  void** vtt114;
  this113 = v110;
  vtt114 = v111;
  struct std__basic_istream_char__std__char_traits_char__* t115 = this113;
  void** t116 = vtt114;
  long c117 = 0;
  t115->_M_gcount = c117;
  return;
}

// function: _ZNSdC2Ev
void std__basic_iostream_char__std__char_traits_char_____basic_iostream(struct std__basic_iostream_char__std__char_traits_char__* v118, void** v119) {
bb120:
  struct std__basic_iostream_char__std__char_traits_char__* this121;
  void** vtt122;
  this121 = v118;
  vtt122 = v119;
  struct std__basic_iostream_char__std__char_traits_char__* t123 = this121;
  void** t124 = vtt122;
  struct std__basic_istream_char__std__char_traits_char__* base125 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t123 + 0);
  static void *vtt_slot126 = 0;
  void** vtt127 = (void**)&vtt_slot126;
  std__basic_istream_char__std__char_traits_char_____basic_istream(base125, vtt127);
    struct std__basic_ostream_char__std__char_traits_char__* base128 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t123 + 16);
    static void *vtt_slot129 = 0;
    void** vtt130 = (void**)&vtt_slot129;
    std__basic_ostream_char__std__char_traits_char_____basic_ostream(base128, vtt130);
      static void *vtt_slot131 = 0;
      void** vtt132 = (void**)&vtt_slot131;
      void** cast133 = (void**)vtt132;
      void* t134 = *cast133;
      void** v135 = (void**)t123;
      *(void**)(v135) = (void*)t134;
      static void *vtt_slot136 = 0;
      void** vtt137 = (void**)&vtt_slot136;
      void** cast138 = (void**)vtt137;
      void* t139 = *cast138;
      void** v140 = (void**)t123;
      void* v141 = *((void**)v140);
      unsigned char* cast142 = (unsigned char*)v141;
      long c143 = -24;
      unsigned char* ptr144 = &(cast142)[c143];
      long* cast145 = (long*)ptr144;
      long t146 = *cast145;
      unsigned char* cast147 = (unsigned char*)t123;
      unsigned char* ptr148 = &(cast147)[t146];
      struct std__basic_iostream_char__std__char_traits_char__* cast149 = (struct std__basic_iostream_char__std__char_traits_char__*)ptr148;
      void** v150 = (void**)cast149;
      *(void**)(v150) = (void*)t139;
      static void *vtt_slot151 = 0;
      void** vtt152 = (void**)&vtt_slot151;
      void** cast153 = (void**)vtt152;
      void* t154 = *cast153;
      struct std__basic_ostream_char__std__char_traits_char__* base155 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t123 + 16);
      void** v156 = (void**)base155;
      *(void**)(v156) = (void*)t154;
  return;
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

// function: _ZNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEC1ESt13_Ios_Openmode
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____basic_stringstream(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* v190, int v191) {
bb192:
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* this193;
  int __m194;
  this193 = v190;
  __m194 = v191;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* t195 = this193;
  struct std__basic_ios_char__std__char_traits_char__* base196 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t195 + 128);
  std__basic_ios_char__std__char_traits_char_____basic_ios(base196);
    struct std__basic_iostream_char__std__char_traits_char__* base197 = (struct std__basic_iostream_char__std__char_traits_char__*)((char *)t195 + 0);
    static void *vtt_slot198 = 0;
    void** vtt199 = (void**)&vtt_slot198;
    std__basic_iostream_char__std__char_traits_char_____basic_iostream(base197, vtt199);
      void* v200 = (void*)&_ZTVNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEE[3];
      void** v201 = (void**)t195;
      *(void**)(v201) = (void*)v200;
      void* v202 = (void*)&_ZTVNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEE[3];
      struct std__basic_ios_char__std__char_traits_char__* base203 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t195 + 128);
      void** v204 = (void**)base203;
      *(void**)(v204) = (void*)v202;
      void* v205 = (void*)&_ZTVNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEE[3];
      struct std__basic_ostream_char__std__char_traits_char__* base206 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t195 + 16);
      void** v207 = (void**)base206;
      *(void**)(v207) = (void*)v205;
      int t208 = __m194;
      std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char_____basic_stringbuf(&t195->_M_stringbuf, t208);
        void** v209 = (void**)t195;
        void* v210 = *((void**)v209);
        unsigned char* cast211 = (unsigned char*)v210;
        long c212 = -24;
        unsigned char* ptr213 = &(cast211)[c212];
        long* cast214 = (long*)ptr213;
        long t215 = *cast214;
        unsigned char* cast216 = (unsigned char*)t195;
        unsigned char* ptr217 = &(cast216)[t215];
        struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* cast218 = (struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__*)ptr217;
        struct std__basic_ios_char__std__char_traits_char__* cast219 = (struct std__basic_ios_char__std__char_traits_char__*)cast218;
        struct std__basic_streambuf_char__std__char_traits_char__* base220 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)&(t195->_M_stringbuf) + 0);
        std__basic_ios_char__std__char_traits_char_____init(cast219, base220);
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v221, int v222) {
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

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v231) {
bb232:
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
bb241:
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

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v248, char* v249) {
bb250:
  char* __c1251;
  char* __c2252;
  _Bool __retval253;
  __c1251 = v248;
  __c2252 = v249;
  char* t254 = __c1251;
  char t255 = *t254;
  int cast256 = (int)t255;
  char* t257 = __c2252;
  char t258 = *t257;
  int cast259 = (int)t258;
  _Bool c260 = ((cast256 == cast259)) ? 1 : 0;
  __retval253 = c260;
  _Bool t261 = __retval253;
  return t261;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v262) {
bb263:
  char* __p264;
  unsigned long __retval265;
  unsigned long __i266;
  __p264 = v262;
  unsigned long c267 = 0;
  __i266 = c267;
    char ref_tmp0268;
    while (1) {
      unsigned long t269 = __i266;
      char* t270 = __p264;
      char* ptr271 = &(t270)[t269];
      char c272 = 0;
      ref_tmp0268 = c272;
      _Bool r273 = __gnu_cxx__char_traits_char___eq(ptr271, &ref_tmp0268);
      _Bool u274 = !r273;
      if (!u274) break;
      unsigned long t275 = __i266;
      unsigned long u276 = t275 + 1;
      __i266 = u276;
    }
  unsigned long t277 = __i266;
  __retval265 = t277;
  unsigned long t278 = __retval265;
  return t278;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v279) {
bb280:
  char* __s281;
  unsigned long __retval282;
  __s281 = v279;
    _Bool r283 = std____is_constant_evaluated();
    if (r283) {
      char* t284 = __s281;
      unsigned long r285 = __gnu_cxx__char_traits_char___length(t284);
      __retval282 = r285;
      unsigned long t286 = __retval282;
      return t286;
    }
  char* t287 = __s281;
  unsigned long r288 = strlen(t287);
  __retval282 = r288;
  unsigned long t289 = __retval282;
  return t289;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v290, char* v291) {
bb292:
  struct std__basic_ostream_char__std__char_traits_char__* __out293;
  char* __s294;
  struct std__basic_ostream_char__std__char_traits_char__* __retval295;
  __out293 = v290;
  __s294 = v291;
    char* t296 = __s294;
    _Bool cast297 = (_Bool)t296;
    _Bool u298 = !cast297;
    if (u298) {
      struct std__basic_ostream_char__std__char_traits_char__* t299 = __out293;
      void** v300 = (void**)t299;
      void* v301 = *((void**)v300);
      unsigned char* cast302 = (unsigned char*)v301;
      long c303 = -24;
      unsigned char* ptr304 = &(cast302)[c303];
      long* cast305 = (long*)ptr304;
      long t306 = *cast305;
      unsigned char* cast307 = (unsigned char*)t299;
      unsigned char* ptr308 = &(cast307)[t306];
      struct std__basic_ostream_char__std__char_traits_char__* cast309 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr308;
      struct std__basic_ios_char__std__char_traits_char__* cast310 = (struct std__basic_ios_char__std__char_traits_char__*)cast309;
      int t311 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast310, t311);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t312 = __out293;
      char* t313 = __s294;
      char* t314 = __s294;
      unsigned long r315 = std__char_traits_char___length(t314);
      long cast316 = (long)r315;
      struct std__basic_ostream_char__std__char_traits_char__* r317 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t312, t313, cast316);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t318 = __out293;
  __retval295 = t318;
  struct std__basic_ostream_char__std__char_traits_char__* t319 = __retval295;
  return t319;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v320, void* v321) {
bb322:
  struct std__basic_ostream_char__std__char_traits_char__* this323;
  void* __pf324;
  struct std__basic_ostream_char__std__char_traits_char__* __retval325;
  this323 = v320;
  __pf324 = v321;
  struct std__basic_ostream_char__std__char_traits_char__* t326 = this323;
  void* t327 = __pf324;
  struct std__basic_ostream_char__std__char_traits_char__* r328 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t327)(t326);
  __retval325 = r328;
  struct std__basic_ostream_char__std__char_traits_char__* t329 = __retval325;
  return t329;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v330) {
bb331:
  struct std__basic_ostream_char__std__char_traits_char__* __os332;
  struct std__basic_ostream_char__std__char_traits_char__* __retval333;
  __os332 = v330;
  struct std__basic_ostream_char__std__char_traits_char__* t334 = __os332;
  struct std__basic_ostream_char__std__char_traits_char__* r335 = std__ostream__flush(t334);
  __retval333 = r335;
  struct std__basic_ostream_char__std__char_traits_char__* t336 = __retval333;
  return t336;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v337) {
bb338:
  struct std__ctype_char_* __f339;
  struct std__ctype_char_* __retval340;
  __f339 = v337;
    struct std__ctype_char_* t341 = __f339;
    _Bool cast342 = (_Bool)t341;
    _Bool u343 = !cast342;
    if (u343) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t344 = __f339;
  __retval340 = t344;
  struct std__ctype_char_* t345 = __retval340;
  return t345;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v346, char v347) {
bb348:
  struct std__ctype_char_* this349;
  char __c350;
  char __retval351;
  this349 = v346;
  __c350 = v347;
  struct std__ctype_char_* t352 = this349;
    char t353 = t352->_M_widen_ok;
    _Bool cast354 = (_Bool)t353;
    if (cast354) {
      char t355 = __c350;
      unsigned char cast356 = (unsigned char)t355;
      unsigned long cast357 = (unsigned long)cast356;
      char t358 = t352->_M_widen[cast357];
      __retval351 = t358;
      char t359 = __retval351;
      return t359;
    }
  std__ctype_char____M_widen_init___const(t352);
  char t360 = __c350;
  void** v361 = (void**)t352;
  void* v362 = *((void**)v361);
  char vcall365 = (char)__VERIFIER_virtual_call_char_char(t352, 6, t360);
  __retval351 = vcall365;
  char t366 = __retval351;
  return t366;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v367, char v368) {
bb369:
  struct std__basic_ios_char__std__char_traits_char__* this370;
  char __c371;
  char __retval372;
  this370 = v367;
  __c371 = v368;
  struct std__basic_ios_char__std__char_traits_char__* t373 = this370;
  struct std__ctype_char_* t374 = t373->_M_ctype;
  struct std__ctype_char_* r375 = std__ctype_char__const__std____check_facet_std__ctype_char___(t374);
  char t376 = __c371;
  char r377 = std__ctype_char___widen_char__const(r375, t376);
  __retval372 = r377;
  char t378 = __retval372;
  return t378;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v379) {
bb380:
  struct std__basic_ostream_char__std__char_traits_char__* __os381;
  struct std__basic_ostream_char__std__char_traits_char__* __retval382;
  __os381 = v379;
  struct std__basic_ostream_char__std__char_traits_char__* t383 = __os381;
  struct std__basic_ostream_char__std__char_traits_char__* t384 = __os381;
  void** v385 = (void**)t384;
  void* v386 = *((void**)v385);
  unsigned char* cast387 = (unsigned char*)v386;
  long c388 = -24;
  unsigned char* ptr389 = &(cast387)[c388];
  long* cast390 = (long*)ptr389;
  long t391 = *cast390;
  unsigned char* cast392 = (unsigned char*)t384;
  unsigned char* ptr393 = &(cast392)[t391];
  struct std__basic_ostream_char__std__char_traits_char__* cast394 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr393;
  struct std__basic_ios_char__std__char_traits_char__* cast395 = (struct std__basic_ios_char__std__char_traits_char__*)cast394;
  char c396 = 10;
  char r397 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast395, c396);
  struct std__basic_ostream_char__std__char_traits_char__* r398 = std__ostream__put(t383, r397);
  struct std__basic_ostream_char__std__char_traits_char__* r399 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r398);
  __retval382 = r399;
  struct std__basic_ostream_char__std__char_traits_char__* t400 = __retval382;
  return t400;
}

// function: _ZNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream_2(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* v401, void** v402) {
bb403:
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* this404;
  void** vtt405;
  this404 = v401;
  vtt405 = v402;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* t406 = this404;
  void** t407 = vtt405;
    {
      std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char______basic_stringbuf(&t406->_M_stringbuf);
    }
  {
    struct std__basic_iostream_char__std__char_traits_char__* base408 = (struct std__basic_iostream_char__std__char_traits_char__*)((char *)t406 + 0);
    static void *vtt_slot409 = 0;
    void** vtt410 = (void**)&vtt_slot409;
    std__basic_iostream_char__std__char_traits_char______basic_iostream(base408, vtt410);
  }
  return;
}

// function: _ZNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEED1Ev
void std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* v411) {
bb412:
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* this413;
  this413 = v411;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* t414 = this413;
    static void *vtt_slot415 = 0;
    void** vtt416 = (void**)&vtt_slot415;
    std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream_2(t414, vtt416);
  {
    struct std__basic_ios_char__std__char_traits_char__* base417 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t414 + 128);
    std__basic_ios_char__std__char_traits_char______basic_ios(base417);
  }
  return;
}

// function: main
int main() {
bb418:
  int __retval419;
  int val420;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__ ss421;
  int c422 = 0;
  __retval419 = c422;
  int t423 = _ZNSt8ios_base2inE_const;
  int t424 = _ZNSt8ios_base3outE_const;
  int r425 = std__operator__2(t423, t424);
  std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char_____basic_stringstream(&ss421, r425);
    struct std__basic_ostream_char__std__char_traits_char__* base426 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(ss421) + 16);
    char* cast427 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r428 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(base426, cast427);
      int n429;
      int c430 = 0;
      n429 = c430;
      while (1) {
        int t432 = n429;
        int c433 = 6;
        _Bool c434 = ((t432 < c433)) ? 1 : 0;
        if (!c434) break;
          struct std__basic_istream_char__std__char_traits_char__* base435 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(ss421) + 0);
          struct std__basic_istream_char__std__char_traits_char__* r436 = std__istream__operator__(base435, &val420);
          int t437 = val420;
          int c438 = 2;
          int b439 = t437 * c438;
          struct std__basic_ostream_char__std__char_traits_char__* r440 = std__ostream__operator__(&_ZSt4cout, b439);
          struct std__basic_ostream_char__std__char_traits_char__* r441 = std__ostream__operator___std__ostream_____(r440, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      for_step431: ;
        int t442 = n429;
        int u443 = t442 + 1;
        n429 = u443;
      }
    int c444 = 0;
    __retval419 = c444;
    int t445 = __retval419;
    int ret_val446 = t445;
    {
      std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char______basic_stringstream(&ss421);
    }
    return ret_val446;
  int t447 = __retval419;
  return t447;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEEC2Ev
void std__basic_streambuf_char__std__char_traits_char_____basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v448) {
bb449:
  struct std__basic_streambuf_char__std__char_traits_char__* this450;
  this450 = v448;
  struct std__basic_streambuf_char__std__char_traits_char__* t451 = this450;
  void* v452 = (void*)&_ZTVSt15basic_streambufIcSt11char_traitsIcEE[2];
  void** v453 = (void**)t451;
  *(void**)(v453) = (void*)v452;
  char* c454 = ((void*)0);
  t451->_M_in_beg = c454;
  char* c455 = ((void*)0);
  t451->_M_in_cur = c455;
  char* c456 = ((void*)0);
  t451->_M_in_end = c456;
  char* c457 = ((void*)0);
  t451->_M_out_beg = c457;
  char* c458 = ((void*)0);
  t451->_M_out_cur = c458;
  char* c459 = ((void*)0);
  t451->_M_out_end = c459;
  std__locale__locale(&t451->_M_buf_locale);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v460) {
bb461:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this462;
  struct std__allocator_char_ ref_tmp0463;
  this462 = v460;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t464 = this462;
  char* r465 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t464);
  std__allocator_char___allocator_2(&ref_tmp0463);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t464->_M_dataplus, r465, &ref_tmp0463);
  {
    std__allocator_char____allocator(&ref_tmp0463);
  }
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t464);
    unsigned long c466 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t464, c466);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v467) {
bb468:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this469;
  this469 = v467;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t470 = this469;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t470);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t470->_M_dataplus);
  }
  return;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v471) {
bb472:
  struct std__basic_streambuf_char__std__char_traits_char__* this473;
  this473 = v471;
  struct std__basic_streambuf_char__std__char_traits_char__* t474 = this473;
  {
    std__locale___locale(&t474->_M_buf_locale);
  }
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v475) {
bb476:
  char* __r477;
  char* __retval478;
  __r477 = v475;
  char* t479 = __r477;
  __retval478 = t479;
  char* t480 = __retval478;
  return t480;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v481) {
bb482:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this483;
  char* __retval484;
  this483 = v481;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t485 = this483;
  char* cast486 = (char*)&(t485->field2._M_local_buf);
  char* r487 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast486);
  __retval484 = r487;
  char* t488 = __retval484;
  return t488;
}

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v489) {
bb490:
  struct std__allocator_char_* this491;
  this491 = v489;
  struct std__allocator_char_* t492 = this491;
  struct std____new_allocator_char_* base493 = (struct std____new_allocator_char_*)((char *)t492 + 0);
  std____new_allocator_char_____new_allocator_2(base493);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v494, char* v495, struct std__allocator_char_* v496) {
bb497:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this498;
  char* __dat499;
  struct std__allocator_char_* __a500;
  this498 = v494;
  __dat499 = v495;
  __a500 = v496;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t501 = this498;
  struct std__allocator_char_* base502 = (struct std__allocator_char_*)((char *)t501 + 0);
  struct std__allocator_char_* t503 = __a500;
  std__allocator_char___allocator(base502, t503);
    char* t504 = __dat499;
    t501->_M_p = t504;
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v505) {
bb506:
  struct std__allocator_char_* this507;
  this507 = v505;
  struct std__allocator_char_* t508 = this507;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb509:
  _Bool __retval510;
    _Bool c511 = 0;
    __retval510 = c511;
    _Bool t512 = __retval510;
    return t512;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v513) {
bb514:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this515;
  this515 = v513;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t516 = this515;
    _Bool r517 = std__is_constant_evaluated();
    if (r517) {
        unsigned long __i518;
        unsigned long c519 = 0;
        __i518 = c519;
        while (1) {
          unsigned long t521 = __i518;
          unsigned long c522 = 15;
          _Bool c523 = ((t521 <= c522)) ? 1 : 0;
          if (!c523) break;
          char c524 = 0;
          unsigned long t525 = __i518;
          t516->field2._M_local_buf[t525] = c524;
        for_step520: ;
          unsigned long t526 = __i518;
          unsigned long u527 = t526 + 1;
          __i518 = u527;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v528, unsigned long v529) {
bb530:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this531;
  unsigned long __length532;
  this531 = v528;
  __length532 = v529;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t533 = this531;
  unsigned long t534 = __length532;
  t533->_M_string_length = t534;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb535:
  _Bool __retval536;
    _Bool c537 = 0;
    __retval536 = c537;
    _Bool t538 = __retval536;
    return t538;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v539, char* v540) {
bb541:
  char* __location542;
  char* __args543;
  char* __retval544;
  void* __loc545;
  __location542 = v539;
  __args543 = v540;
  char* t546 = __location542;
  void* cast547 = (void*)t546;
  __loc545 = cast547;
    void* t548 = __loc545;
    char* cast549 = (char*)t548;
    char* t550 = __args543;
    char t551 = *t550;
    *cast549 = t551;
    __retval544 = cast549;
    char* t552 = __retval544;
    return t552;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v553, char* v554) {
bb555:
  char* __c1556;
  char* __c2557;
  __c1556 = v553;
  __c2557 = v554;
    _Bool r558 = std____is_constant_evaluated();
    if (r558) {
      char* t559 = __c1556;
      char* t560 = __c2557;
      char* r561 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t559, t560);
    } else {
      char* t562 = __c2557;
      char t563 = *t562;
      char* t564 = __c1556;
      *t564 = t563;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v565) {
bb566:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this567;
  char* __retval568;
  this567 = v565;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t569 = this567;
  char* t570 = t569->_M_dataplus._M_p;
  __retval568 = t570;
  char* t571 = __retval568;
  return t571;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v572, unsigned long v573) {
bb574:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this575;
  unsigned long __n576;
  char ref_tmp0577;
  this575 = v572;
  __n576 = v573;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t578 = this575;
  unsigned long t579 = __n576;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t578, t579);
  unsigned long t580 = __n576;
  char* r581 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t578);
  char* ptr582 = &(r581)[t580];
  char c583 = 0;
  ref_tmp0577 = c583;
  std__char_traits_char___assign(ptr582, &ref_tmp0577);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v584) {
bb585:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this586;
  this586 = v584;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t587 = this586;
  {
    struct std__allocator_char_* base588 = (struct std__allocator_char_*)((char *)t587 + 0);
    std__allocator_char____allocator(base588);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v589) {
bb590:
  struct std____new_allocator_char_* this591;
  this591 = v589;
  struct std____new_allocator_char_* t592 = this591;
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v593, struct std____new_allocator_char_* v594) {
bb595:
  struct std____new_allocator_char_* this596;
  struct std____new_allocator_char_* unnamed597;
  this596 = v593;
  unnamed597 = v594;
  struct std____new_allocator_char_* t598 = this596;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v599, struct std__allocator_char_* v600) {
bb601:
  struct std__allocator_char_* this602;
  struct std__allocator_char_* __a603;
  this602 = v599;
  __a603 = v600;
  struct std__allocator_char_* t604 = this602;
  struct std____new_allocator_char_* base605 = (struct std____new_allocator_char_*)((char *)t604 + 0);
  struct std__allocator_char_* t606 = __a603;
  struct std____new_allocator_char_* base607 = (struct std____new_allocator_char_*)((char *)t606 + 0);
  std____new_allocator_char_____new_allocator(base605, base607);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v608) {
bb609:
  char* __r610;
  char* __retval611;
  __r610 = v608;
  char* t612 = __r610;
  __retval611 = t612;
  char* t613 = __retval611;
  return t613;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v614) {
bb615:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this616;
  char* __retval617;
  this616 = v614;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t618 = this616;
  char* cast619 = (char*)&(t618->field2._M_local_buf);
  char* r620 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast619);
  __retval617 = r620;
  char* t621 = __retval617;
  return t621;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v622) {
bb623:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this624;
  _Bool __retval625;
  this624 = v622;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t626 = this624;
    char* r627 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t626);
    char* r628 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t626);
    _Bool c629 = ((r627 == r628)) ? 1 : 0;
    if (c629) {
        unsigned long t630 = t626->_M_string_length;
        unsigned long c631 = 15;
        _Bool c632 = ((t630 > c631)) ? 1 : 0;
        if (c632) {
          __builtin_unreachable();
        }
      _Bool c633 = 1;
      __retval625 = c633;
      _Bool t634 = __retval625;
      return t634;
    }
  _Bool c635 = 0;
  __retval625 = c635;
  _Bool t636 = __retval625;
  return t636;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v637, char* v638, unsigned long v639) {
bb640:
  struct std____new_allocator_char_* this641;
  char* __p642;
  unsigned long __n643;
  this641 = v637;
  __p642 = v638;
  __n643 = v639;
  struct std____new_allocator_char_* t644 = this641;
    unsigned long c645 = 1;
    unsigned long c646 = 16;
    _Bool c647 = ((c645 > c646)) ? 1 : 0;
    if (c647) {
      char* t648 = __p642;
      void* cast649 = (void*)t648;
      unsigned long t650 = __n643;
      unsigned long c651 = 1;
      unsigned long b652 = t650 * c651;
      unsigned long c653 = 1;
      operator_delete_3(cast649, b652, c653);
      return;
    }
  char* t654 = __p642;
  void* cast655 = (void*)t654;
  unsigned long t656 = __n643;
  unsigned long c657 = 1;
  unsigned long b658 = t656 * c657;
  operator_delete_2(cast655, b658);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v659, char* v660, unsigned long v661) {
bb662:
  struct std__allocator_char_* this663;
  char* __p664;
  unsigned long __n665;
  this663 = v659;
  __p664 = v660;
  __n665 = v661;
  struct std__allocator_char_* t666 = this663;
    _Bool r667 = std____is_constant_evaluated();
    if (r667) {
      char* t668 = __p664;
      void* cast669 = (void*)t668;
      operator_delete(cast669);
      return;
    }
  struct std____new_allocator_char_* base670 = (struct std____new_allocator_char_*)((char *)t666 + 0);
  char* t671 = __p664;
  unsigned long t672 = __n665;
  std____new_allocator_char___deallocate(base670, t671, t672);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v673, char* v674, unsigned long v675) {
bb676:
  struct std__allocator_char_* __a677;
  char* __p678;
  unsigned long __n679;
  __a677 = v673;
  __p678 = v674;
  __n679 = v675;
  struct std__allocator_char_* t680 = __a677;
  char* t681 = __p678;
  unsigned long t682 = __n679;
  std__allocator_char___deallocate(t680, t681, t682);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v683) {
bb684:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this685;
  struct std__allocator_char_* __retval686;
  this685 = v683;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t687 = this685;
  struct std__allocator_char_* base688 = (struct std__allocator_char_*)((char *)&(t687->_M_dataplus) + 0);
  __retval686 = base688;
  struct std__allocator_char_* t689 = __retval686;
  return t689;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v690, unsigned long v691) {
bb692:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this693;
  unsigned long __size694;
  this693 = v690;
  __size694 = v691;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t695 = this693;
  struct std__allocator_char_* r696 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t695);
  char* r697 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t695);
  unsigned long t698 = __size694;
  unsigned long c699 = 1;
  unsigned long b700 = t698 + c699;
  std__allocator_traits_std__allocator_char_____deallocate(r696, r697, b700);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v701) {
bb702:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this703;
  this703 = v701;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t704 = this703;
    _Bool r705 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t704);
    _Bool u706 = !r705;
    if (u706) {
      unsigned long t707 = t704->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t704, t707);
    }
  return;
}

