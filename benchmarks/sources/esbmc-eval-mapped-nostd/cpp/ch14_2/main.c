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
struct anon_struct_0 { unsigned char* __field0[5]; unsigned char* __field1[5]; };
struct anon_struct_1 { unsigned char* __field0[4]; };
union pthread_mutex_t { struct __pthread_mutex_s __field0; char __field1[40]; long __field2; };
struct std____basic_file_char_ { struct _IO_FILE* __field0; _Bool __field1; unsigned char __field2[7]; } __attribute__((packed));
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct __mbstate_t { int __field0; union anon_0 __field1; };
struct std____codecvt_abstract_base_char__char____mbstate_t_ { struct std__locale__facet __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale _M_buf_locale; };
struct std__codecvt_char__char____mbstate_t_ { struct std____codecvt_abstract_base_char__char____mbstate_t_ __field0; struct __locale_struct* __field1; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_filebuf_char__std__char_traits_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; union pthread_mutex_t __field1; struct std____basic_file_char_ _M_file; int __field3; struct __mbstate_t __field4; struct __mbstate_t __field5; struct __mbstate_t __field6; char* __field7; unsigned long __field8; _Bool __field9; _Bool __field10; _Bool __field11; char __field12; char* __field13; char* __field14; _Bool __field15; struct std__codecvt_char__char____mbstate_t_* __field16; char* __field17; long __field18; char* __field19; char* __field20; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__basic_ofstream_char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__ __field0; struct std__basic_filebuf_char__std__char_traits_char__ _M_filebuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base7goodbitE_const __attribute__((aligned(4))) = 0;
int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base3outE_const __attribute__((aligned(4))) = 16;
char _str[12] = "clients.dat";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cerr __attribute__((aligned(8)));
char _str_1[25] = "File could not be opened";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[38] = "Enter the account, name, and balance.";
char _str_3[35] = "Enter end-of-file to end input.\n? ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_4[3] = "? ";
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
_Bool std____is_constant_evaluated();
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
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
extern void std____istream_extract(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___30ul__std__basic_istream_char__std__char_traits_char______char_(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__operator___2(struct std__basic_istream_char__std__char_traits_char__* p0, int* p1);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__std__istream___M_extract_double_(struct std__basic_istream_char__std__char_traits_char__* p0, double* p1);
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* p0, double* p1);
_Bool std__basic_ios_char__std__char_traits_char_____operator_bool___const(struct std__basic_ios_char__std__char_traits_char__* p0);
long std__ios_base__width___const(struct std__ios_base* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_double_(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream_2(struct std__basic_ofstream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream(struct std__basic_ofstream_char__std__char_traits_char__* p0);
int main();
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

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb225:
  _Bool __retval226;
    _Bool c227 = 0;
    __retval226 = c227;
    _Bool t228 = __retval226;
    return t228;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v229, char* v230) {
bb231:
  char* __c1232;
  char* __c2233;
  _Bool __retval234;
  __c1232 = v229;
  __c2233 = v230;
  char* t235 = __c1232;
  char t236 = *t235;
  int cast237 = (int)t236;
  char* t238 = __c2233;
  char t239 = *t238;
  int cast240 = (int)t239;
  _Bool c241 = ((cast237 == cast240)) ? 1 : 0;
  __retval234 = c241;
  _Bool t242 = __retval234;
  return t242;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v243) {
bb244:
  char* __p245;
  unsigned long __retval246;
  unsigned long __i247;
  __p245 = v243;
  unsigned long c248 = 0;
  __i247 = c248;
    char ref_tmp0249;
    while (1) {
      unsigned long t250 = __i247;
      char* t251 = __p245;
      char* ptr252 = &(t251)[t250];
      char c253 = 0;
      ref_tmp0249 = c253;
      _Bool r254 = __gnu_cxx__char_traits_char___eq(ptr252, &ref_tmp0249);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u255 = !r254;
      if (!u255) break;
      unsigned long t256 = __i247;
      unsigned long u257 = t256 + 1;
      __i247 = u257;
    }
  unsigned long t258 = __i247;
  __retval246 = t258;
  unsigned long t259 = __retval246;
  return t259;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v260) {
bb261:
  char* __s262;
  unsigned long __retval263;
  __s262 = v260;
    _Bool r264 = std____is_constant_evaluated();
    if (r264) {
      char* t265 = __s262;
      unsigned long r266 = __gnu_cxx__char_traits_char___length(t265);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval263 = r266;
      unsigned long t267 = __retval263;
      return t267;
    }
  char* t268 = __s262;
  unsigned long r269 = strlen(t268);
  __retval263 = r269;
  unsigned long t270 = __retval263;
  return t270;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v271, char* v272) {
bb273:
  struct std__basic_ostream_char__std__char_traits_char__* __out274;
  char* __s275;
  struct std__basic_ostream_char__std__char_traits_char__* __retval276;
  __out274 = v271;
  __s275 = v272;
    char* t277 = __s275;
    _Bool cast278 = (_Bool)t277;
    _Bool u279 = !cast278;
    if (u279) {
      struct std__basic_ostream_char__std__char_traits_char__* t280 = __out274;
      void** v281 = (void**)t280;
      void* v282 = *((void**)v281);
      unsigned char* cast283 = (unsigned char*)v282;
      long c284 = -24;
      unsigned char* ptr285 = &(cast283)[c284];
      long* cast286 = (long*)ptr285;
      long t287 = *cast286;
      unsigned char* cast288 = (unsigned char*)t280;
      unsigned char* ptr289 = &(cast288)[t287];
      struct std__basic_ostream_char__std__char_traits_char__* cast290 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr289;
      struct std__basic_ios_char__std__char_traits_char__* cast291 = (struct std__basic_ios_char__std__char_traits_char__*)cast290;
      int t292 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast291, t292);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t293 = __out274;
      char* t294 = __s275;
      char* t295 = __s275;
      unsigned long r296 = std__char_traits_char___length(t295);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast297 = (long)r296;
      struct std__basic_ostream_char__std__char_traits_char__* r298 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t293, t294, cast297);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t299 = __out274;
  __retval276 = t299;
  struct std__basic_ostream_char__std__char_traits_char__* t300 = __retval276;
  return t300;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v301, void* v302) {
bb303:
  struct std__basic_ostream_char__std__char_traits_char__* this304;
  void* __pf305;
  struct std__basic_ostream_char__std__char_traits_char__* __retval306;
  this304 = v301;
  __pf305 = v302;
  struct std__basic_ostream_char__std__char_traits_char__* t307 = this304;
  void* t308 = __pf305;
  struct std__basic_ostream_char__std__char_traits_char__* r309 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t308)(t307);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval306 = r309;
  struct std__basic_ostream_char__std__char_traits_char__* t310 = __retval306;
  return t310;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v311) {
bb312:
  struct std__basic_ostream_char__std__char_traits_char__* __os313;
  struct std__basic_ostream_char__std__char_traits_char__* __retval314;
  __os313 = v311;
  struct std__basic_ostream_char__std__char_traits_char__* t315 = __os313;
  struct std__basic_ostream_char__std__char_traits_char__* r316 = std__ostream__flush(t315);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval314 = r316;
  struct std__basic_ostream_char__std__char_traits_char__* t317 = __retval314;
  return t317;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v318) {
bb319:
  struct std__ctype_char_* __f320;
  struct std__ctype_char_* __retval321;
  __f320 = v318;
    struct std__ctype_char_* t322 = __f320;
    _Bool cast323 = (_Bool)t322;
    _Bool u324 = !cast323;
    if (u324) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t325 = __f320;
  __retval321 = t325;
  struct std__ctype_char_* t326 = __retval321;
  return t326;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v327, char v328) {
bb329:
  struct std__ctype_char_* this330;
  char __c331;
  char __retval332;
  this330 = v327;
  __c331 = v328;
  struct std__ctype_char_* t333 = this330;
    char t334 = t333->_M_widen_ok;
    _Bool cast335 = (_Bool)t334;
    if (cast335) {
      char t336 = __c331;
      unsigned char cast337 = (unsigned char)t336;
      unsigned long cast338 = (unsigned long)cast337;
      char t339 = t333->_M_widen[cast338];
      __retval332 = t339;
      char t340 = __retval332;
      return t340;
    }
  std__ctype_char____M_widen_init___const(t333);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t341 = __c331;
  void** v342 = (void**)t333;
  void* v343 = *((void**)v342);
  char vcall346 = (char)__VERIFIER_virtual_call_char_char(t333, 6, t341);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval332 = vcall346;
  char t347 = __retval332;
  return t347;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v348, char v349) {
bb350:
  struct std__basic_ios_char__std__char_traits_char__* this351;
  char __c352;
  char __retval353;
  this351 = v348;
  __c352 = v349;
  struct std__basic_ios_char__std__char_traits_char__* t354 = this351;
  struct std__ctype_char_* t355 = t354->_M_ctype;
  struct std__ctype_char_* r356 = std__ctype_char__const__std____check_facet_std__ctype_char___(t355);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t357 = __c352;
  char r358 = std__ctype_char___widen_char__const(r356, t357);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval353 = r358;
  char t359 = __retval353;
  return t359;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v360) {
bb361:
  struct std__basic_ostream_char__std__char_traits_char__* __os362;
  struct std__basic_ostream_char__std__char_traits_char__* __retval363;
  __os362 = v360;
  struct std__basic_ostream_char__std__char_traits_char__* t364 = __os362;
  struct std__basic_ostream_char__std__char_traits_char__* t365 = __os362;
  void** v366 = (void**)t365;
  void* v367 = *((void**)v366);
  unsigned char* cast368 = (unsigned char*)v367;
  long c369 = -24;
  unsigned char* ptr370 = &(cast368)[c369];
  long* cast371 = (long*)ptr370;
  long t372 = *cast371;
  unsigned char* cast373 = (unsigned char*)t365;
  unsigned char* ptr374 = &(cast373)[t372];
  struct std__basic_ostream_char__std__char_traits_char__* cast375 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr374;
  struct std__basic_ios_char__std__char_traits_char__* cast376 = (struct std__basic_ios_char__std__char_traits_char__*)cast375;
  char c377 = 10;
  char r378 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast376, c377);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r379 = std__ostream__put(t364, r378);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r380 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r379);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval363 = r380;
  struct std__basic_ostream_char__std__char_traits_char__* t381 = __retval363;
  return t381;
}

// function: _ZStrsIcSt11char_traitsIcELm30EERSt13basic_istreamIT_T0_ES6_RAT1__S3_
struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___30ul__std__basic_istream_char__std__char_traits_char______char_(struct std__basic_istream_char__std__char_traits_char__* v382, char* v383) {
bb384:
  struct std__basic_istream_char__std__char_traits_char__* __in385;
  char* __s386;
  struct std__basic_istream_char__std__char_traits_char__* __retval387;
  __in385 = v382;
  __s386 = v383;
  struct std__basic_istream_char__std__char_traits_char__* t388 = __in385;
  char* t389 = __s386;
  char* cast390 = (char*)t389;
  long c391 = 30;
  std____istream_extract(t388, cast390, c391);
  if (__cir_exc_active) {
    struct std__basic_istream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_istream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_istream_char__std__char_traits_char__* t392 = __in385;
  __retval387 = t392;
  struct std__basic_istream_char__std__char_traits_char__* t393 = __retval387;
  return t393;
}

// function: _ZNSirsERd
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* v394, double* v395) {
bb396:
  struct std__basic_istream_char__std__char_traits_char__* this397;
  double* __f398;
  struct std__basic_istream_char__std__char_traits_char__* __retval399;
  this397 = v394;
  __f398 = v395;
  struct std__basic_istream_char__std__char_traits_char__* t400 = this397;
  double* t401 = __f398;
  struct std__basic_istream_char__std__char_traits_char__* r402 = std__istream__std__istream___M_extract_double_(t400, t401);
  if (__cir_exc_active) {
    struct std__basic_istream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_istream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval399 = r402;
  struct std__basic_istream_char__std__char_traits_char__* t403 = __retval399;
  return t403;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEEcvbEv
_Bool std__basic_ios_char__std__char_traits_char_____operator_bool___const(struct std__basic_ios_char__std__char_traits_char__* v404) {
bb405:
  struct std__basic_ios_char__std__char_traits_char__* this406;
  _Bool __retval407;
  this406 = v404;
  struct std__basic_ios_char__std__char_traits_char__* t408 = this406;
  _Bool r409 = std__basic_ios_char__std__char_traits_char_____fail___const(t408);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  _Bool u410 = !r409;
  __retval407 = u410;
  _Bool t411 = __retval407;
  return t411;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v412) {
bb413:
  struct std__ios_base* this414;
  long __retval415;
  this414 = v412;
  struct std__ios_base* t416 = this414;
  long t417 = t416->_M_width;
  __retval415 = t417;
  long t418 = __retval415;
  return t418;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v419, char v420) {
bb421:
  struct std__basic_ostream_char__std__char_traits_char__* __out422;
  char __c423;
  struct std__basic_ostream_char__std__char_traits_char__* __retval424;
  __out422 = v419;
  __c423 = v420;
    struct std__basic_ostream_char__std__char_traits_char__* t425 = __out422;
    void** v426 = (void**)t425;
    void* v427 = *((void**)v426);
    unsigned char* cast428 = (unsigned char*)v427;
    long c429 = -24;
    unsigned char* ptr430 = &(cast428)[c429];
    long* cast431 = (long*)ptr430;
    long t432 = *cast431;
    unsigned char* cast433 = (unsigned char*)t425;
    unsigned char* ptr434 = &(cast433)[t432];
    struct std__basic_ostream_char__std__char_traits_char__* cast435 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr434;
    struct std__ios_base* cast436 = (struct std__ios_base*)cast435;
    long r437 = std__ios_base__width___const(cast436);
    if (__cir_exc_active) {
      struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
      return __cir_eh_ret;
    }
    long c438 = 0;
    _Bool c439 = ((r437 != c438)) ? 1 : 0;
    if (c439) {
      struct std__basic_ostream_char__std__char_traits_char__* t440 = __out422;
      long c441 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r442 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t440, &__c423, c441);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      __retval424 = r442;
      struct std__basic_ostream_char__std__char_traits_char__* t443 = __retval424;
      return t443;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t444 = __out422;
  char t445 = __c423;
  struct std__basic_ostream_char__std__char_traits_char__* r446 = std__ostream__put(t444, t445);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* t447 = __out422;
  __retval424 = t447;
  struct std__basic_ostream_char__std__char_traits_char__* t448 = __retval424;
  return t448;
}

// function: _ZNSolsEd
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v449, double v450) {
bb451:
  struct std__basic_ostream_char__std__char_traits_char__* this452;
  double __f453;
  struct std__basic_ostream_char__std__char_traits_char__* __retval454;
  this452 = v449;
  __f453 = v450;
  struct std__basic_ostream_char__std__char_traits_char__* t455 = this452;
  double t456 = __f453;
  struct std__basic_ostream_char__std__char_traits_char__* r457 = std__ostream__std__ostream___M_insert_double_(t455, t456);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval454 = r457;
  struct std__basic_ostream_char__std__char_traits_char__* t458 = __retval454;
  return t458;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEED2Ev
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream_2(struct std__basic_ofstream_char__std__char_traits_char__* v459, void** v460) {
bb461:
  struct std__basic_ofstream_char__std__char_traits_char__* this462;
  void** vtt463;
  this462 = v459;
  vtt463 = v460;
  struct std__basic_ofstream_char__std__char_traits_char__* t464 = this462;
  void** t465 = vtt463;
    {
      std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t464->_M_filebuf);
    }
  {
    struct std__basic_ostream_char__std__char_traits_char__* base466 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t464 + 0);
    static void *vtt_slot467 = 0;
    void** vtt468 = (void**)&vtt_slot467;
    std__basic_ostream_char__std__char_traits_char______basic_ostream(base466, vtt468);
  }
  return;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream(struct std__basic_ofstream_char__std__char_traits_char__* v469) {
bb470:
  struct std__basic_ofstream_char__std__char_traits_char__* this471;
  this471 = v469;
  struct std__basic_ofstream_char__std__char_traits_char__* t472 = this471;
    static void *vtt_slot473 = 0;
    void** vtt474 = (void**)&vtt_slot473;
    std__basic_ofstream_char__std__char_traits_char______basic_ofstream_2(t472, vtt474);
  {
    struct std__basic_ios_char__std__char_traits_char__* base475 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t472 + 248);
    std__basic_ios_char__std__char_traits_char______basic_ios(base475);
  }
  return;
}

// function: main
int main() {
bb476:
  int __retval477;
  struct std__basic_ofstream_char__std__char_traits_char__ outClientFile478;
  int account479;
  char name480[30];
  double balance481;
  int c482 = 0;
  __retval477 = c482;
  char* cast483 = (char*)&(_str);
  int t484 = _ZNSt8ios_base3outE_const;
  std__basic_ofstream_char__std__char_traits_char_____basic_ofstream(&outClientFile478, cast483, t484);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
      void** v485 = (void**)&(outClientFile478);
      void* v486 = *((void**)v485);
      unsigned char* cast487 = (unsigned char*)v486;
      long c488 = -24;
      unsigned char* ptr489 = &(cast487)[c488];
      long* cast490 = (long*)ptr489;
      long t491 = *cast490;
      unsigned char* cast492 = (unsigned char*)&(outClientFile478);
      unsigned char* ptr493 = &(cast492)[t491];
      struct std__basic_ofstream_char__std__char_traits_char__* cast494 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr493;
      struct std__basic_ios_char__std__char_traits_char__* cast495 = (struct std__basic_ios_char__std__char_traits_char__*)cast494;
      _Bool r496 = std__basic_ios_char__std__char_traits_char_____operator____const(cast495);
      if (__cir_exc_active) {
        {
          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outClientFile478);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      if (r496) {
        char* cast497 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r498 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cerr, cast497);
        if (__cir_exc_active) {
          {
            std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outClientFile478);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        struct std__basic_ostream_char__std__char_traits_char__* r499 = std__ostream__operator___std__ostream_____(r498, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        if (__cir_exc_active) {
          {
            std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outClientFile478);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        int c500 = 1;
        exit(c500);
      }
    char* cast501 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r502 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast501);
    if (__cir_exc_active) {
      {
        std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outClientFile478);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r503 = std__ostream__operator___std__ostream_____(r502, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outClientFile478);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast504 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r505 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r503, cast504);
    if (__cir_exc_active) {
      {
        std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outClientFile478);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      while (1) {
        struct std__basic_istream_char__std__char_traits_char__* r506 = std__istream__operator___2(&_ZSt3cin, &account479);
        if (__cir_exc_active) {
          {
            std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outClientFile478);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        struct std__basic_istream_char__std__char_traits_char__* r507 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___30ul__std__basic_istream_char__std__char_traits_char______char_(r506, name480);
        if (__cir_exc_active) {
          {
            std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outClientFile478);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        struct std__basic_istream_char__std__char_traits_char__* r508 = std__istream__operator__(r507, &balance481);
        if (__cir_exc_active) {
          {
            std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outClientFile478);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        void** v509 = (void**)r508;
        void* v510 = *((void**)v509);
        unsigned char* cast511 = (unsigned char*)v510;
        long c512 = -24;
        unsigned char* ptr513 = &(cast511)[c512];
        long* cast514 = (long*)ptr513;
        long t515 = *cast514;
        unsigned char* cast516 = (unsigned char*)r508;
        unsigned char* ptr517 = &(cast516)[t515];
        struct std__basic_istream_char__std__char_traits_char__* cast518 = (struct std__basic_istream_char__std__char_traits_char__*)ptr517;
        struct std__basic_ios_char__std__char_traits_char__* cast519 = (struct std__basic_ios_char__std__char_traits_char__*)cast518;
        _Bool r520 = std__basic_ios_char__std__char_traits_char_____operator_bool___const(cast519);
        if (__cir_exc_active) {
          {
            std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outClientFile478);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        if (!r520) break;
          struct std__basic_ostream_char__std__char_traits_char__* base521 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(outClientFile478) + 0);
          int t522 = account479;
          struct std__basic_ostream_char__std__char_traits_char__* r523 = std__ostream__operator___2(base521, t522);
          if (__cir_exc_active) {
            {
              std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outClientFile478);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          char c524 = 32;
          struct std__basic_ostream_char__std__char_traits_char__* r525 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r523, c524);
          if (__cir_exc_active) {
            {
              std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outClientFile478);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          char* cast526 = (char*)&(name480);
          struct std__basic_ostream_char__std__char_traits_char__* r527 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r525, cast526);
          if (__cir_exc_active) {
            {
              std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outClientFile478);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          char c528 = 32;
          struct std__basic_ostream_char__std__char_traits_char__* r529 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r527, c528);
          if (__cir_exc_active) {
            {
              std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outClientFile478);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          double t530 = balance481;
          struct std__basic_ostream_char__std__char_traits_char__* r531 = std__ostream__operator__(r529, t530);
          if (__cir_exc_active) {
            {
              std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outClientFile478);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          struct std__basic_ostream_char__std__char_traits_char__* r532 = std__ostream__operator___std__ostream_____(r531, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
          if (__cir_exc_active) {
            {
              std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outClientFile478);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          char* cast533 = (char*)&(_str_4);
          struct std__basic_ostream_char__std__char_traits_char__* r534 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast533);
          if (__cir_exc_active) {
            {
              std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outClientFile478);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
      }
    int c535 = 0;
    __retval477 = c535;
    int t536 = __retval477;
    int ret_val537 = t536;
    {
      std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outClientFile478);
    }
    return ret_val537;
  int t538 = __retval477;
  return t538;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v539) {
bb540:
  struct std__basic_streambuf_char__std__char_traits_char__* this541;
  this541 = v539;
  struct std__basic_streambuf_char__std__char_traits_char__* t542 = this541;
  {
    std__locale___locale(&t542->_M_buf_locale);
  }
  return;
}

