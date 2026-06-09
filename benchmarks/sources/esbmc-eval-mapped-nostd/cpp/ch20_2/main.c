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
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_filebuf_char__std__char_traits_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; union pthread_mutex_t __field1; struct std____basic_file_char_ _M_file; int __field3; struct __mbstate_t __field4; struct __mbstate_t __field5; struct __mbstate_t __field6; char* __field7; unsigned long __field8; _Bool __field9; _Bool __field10; _Bool __field11; char __field12; char* __field13; char* __field14; _Bool __field15; struct std__codecvt_char__char____mbstate_t_* __field16; char* __field17; long __field18; char* __field19; char* __field20; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long _M_gcount; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__basic_ifstream_char__std__char_traits_char__ { struct std__basic_istream_char__std__char_traits_char__ __field0; struct std__basic_filebuf_char__std__char_traits_char__ _M_filebuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ofstream_char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__ __field0; struct std__basic_filebuf_char__std__char_traits_char__ _M_filebuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void *_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[];
int _ZNSt8ios_base7goodbitE_const __attribute__((aligned(4))) = 0;
int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base3outE_const __attribute__((aligned(4))) = 16;
int _ZNSt8ios_base2inE_const __attribute__((aligned(4))) = 8;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[41] = "Usage: copyFile infile_name outfile_name";
char _str_1[21] = " could not be opened";
extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void *_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[];
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__2(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
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
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern void std__ios_base__ios_base(struct std__ios_base* p0);
void std__ios_base___ios_base(struct std__ios_base* p0) {}
void std__basic_ios_char__std__char_traits_char_____basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_istream_char__std__char_traits_char_____basic_istream(struct std__basic_istream_char__std__char_traits_char__* p0, void** p1);
extern void std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* p0);
extern void std__basic_ios_char__std__char_traits_char_____init(struct std__basic_ios_char__std__char_traits_char__* p0, struct std__basic_streambuf_char__std__char_traits_char__* p1);
extern struct std__basic_filebuf_char__std__char_traits_char__* std__basic_filebuf_char__std__char_traits_char_____open(struct std__basic_filebuf_char__std__char_traits_char__* p0, char* p1, int p2);
int std__operator__3(int p0, int p1);
void std__basic_ifstream_char__std__char_traits_char_____open(struct std__basic_ifstream_char__std__char_traits_char__* p0, char* p1, int p2);
void std__basic_filebuf_char__std__char_traits_char______basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* p0);
void std__basic_istream_char__std__char_traits_char______basic_istream(struct std__basic_istream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* p0, char* p1, int p2);
int std__operator_(int p0, int p1);
_Bool std__basic_ios_char__std__char_traits_char_____fail___const(struct std__basic_ios_char__std__char_traits_char__* p0);
_Bool std__basic_ios_char__std__char_traits_char_____operator____const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ostream_char__std__char_traits_char_____basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ofstream_char__std__char_traits_char_____open(struct std__basic_ofstream_char__std__char_traits_char__* p0, char* p1, int p2);
void std__basic_ostream_char__std__char_traits_char______basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ofstream_char__std__char_traits_char_____basic_ofstream(struct std__basic_ofstream_char__std__char_traits_char__* p0, char* p1, int p2);
void std__basic_ifstream_char__std__char_traits_char_____close(struct std__basic_ifstream_char__std__char_traits_char__* p0);
extern int std__istream__get(struct std__basic_istream_char__std__char_traits_char__* p0);
_Bool std__basic_ios_char__std__char_traits_char_____operator_bool___const(struct std__basic_ios_char__std__char_traits_char__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream_2(struct std__basic_ofstream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream(struct std__basic_ofstream_char__std__char_traits_char__* p0);
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream_2(struct std__basic_ifstream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* p0);
int main(int p0, char** p1);
extern int __gxx_personality_v0();
extern struct std__basic_filebuf_char__std__char_traits_char__* std__basic_filebuf_char__std__char_traits_char_____close(struct std__basic_filebuf_char__std__char_traits_char__* p0);
void std____basic_file_char______basic_file(struct std____basic_file_char_* p0) {}
void std__locale___locale(struct std__locale* p0) {}
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* p0);

extern unsigned char* _ZTTSt14basic_ifstreamIcSt11char_traitsIcEE[4] __attribute__((aligned(8)));
extern unsigned char* _ZTTSt14basic_ofstreamIcSt11char_traitsIcEE[4] __attribute__((aligned(8)));

// function: _ZStorSt12_Ios_IostateS_
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

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v10) {
bb11:
  struct std__basic_ios_char__std__char_traits_char__* this12;
  int __retval13;
  this12 = v10;
  struct std__basic_ios_char__std__char_traits_char__* t14 = this12;
  struct std__ios_base* base15 = (struct std__ios_base*)((char *)t14 + 0);
  int t16 = base15->_M_streambuf_state;
  __retval13 = t16;
  int t17 = __retval13;
  return t17;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v18, int v19) {
bb20:
  struct std__basic_ios_char__std__char_traits_char__* this21;
  int __state22;
  this21 = v18;
  __state22 = v19;
  struct std__basic_ios_char__std__char_traits_char__* t23 = this21;
  int r24 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t23);
  if (__cir_exc_active) {
    return;
  }
  int t25 = __state22;
  int r26 = std__operator__2(r24, t25);
  std__basic_ios_char__std__char_traits_char_____clear(t23, r26);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb27:
  _Bool __retval28;
    _Bool c29 = 0;
    __retval28 = c29;
    _Bool t30 = __retval28;
    return t30;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v31, char* v32) {
bb33:
  char* __c134;
  char* __c235;
  _Bool __retval36;
  __c134 = v31;
  __c235 = v32;
  char* t37 = __c134;
  char t38 = *t37;
  int cast39 = (int)t38;
  char* t40 = __c235;
  char t41 = *t40;
  int cast42 = (int)t41;
  _Bool c43 = ((cast39 == cast42)) ? 1 : 0;
  __retval36 = c43;
  _Bool t44 = __retval36;
  return t44;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v45) {
bb46:
  char* __p47;
  unsigned long __retval48;
  unsigned long __i49;
  __p47 = v45;
  unsigned long c50 = 0;
  __i49 = c50;
    char ref_tmp051;
    while (1) {
      unsigned long t52 = __i49;
      char* t53 = __p47;
      char* ptr54 = &(t53)[t52];
      char c55 = 0;
      ref_tmp051 = c55;
      _Bool r56 = __gnu_cxx__char_traits_char___eq(ptr54, &ref_tmp051);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u57 = !r56;
      if (!u57) break;
      unsigned long t58 = __i49;
      unsigned long u59 = t58 + 1;
      __i49 = u59;
    }
  unsigned long t60 = __i49;
  __retval48 = t60;
  unsigned long t61 = __retval48;
  return t61;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v62) {
bb63:
  char* __s64;
  unsigned long __retval65;
  __s64 = v62;
    _Bool r66 = std____is_constant_evaluated();
    if (r66) {
      char* t67 = __s64;
      unsigned long r68 = __gnu_cxx__char_traits_char___length(t67);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval65 = r68;
      unsigned long t69 = __retval65;
      return t69;
    }
  char* t70 = __s64;
  unsigned long r71 = strlen(t70);
  __retval65 = r71;
  unsigned long t72 = __retval65;
  return t72;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v73, char* v74) {
bb75:
  struct std__basic_ostream_char__std__char_traits_char__* __out76;
  char* __s77;
  struct std__basic_ostream_char__std__char_traits_char__* __retval78;
  __out76 = v73;
  __s77 = v74;
    char* t79 = __s77;
    _Bool cast80 = (_Bool)t79;
    _Bool u81 = !cast80;
    if (u81) {
      struct std__basic_ostream_char__std__char_traits_char__* t82 = __out76;
      void** v83 = (void**)t82;
      void* v84 = *((void**)v83);
      unsigned char* cast85 = (unsigned char*)v84;
      long c86 = -24;
      unsigned char* ptr87 = &(cast85)[c86];
      long* cast88 = (long*)ptr87;
      long t89 = *cast88;
      unsigned char* cast90 = (unsigned char*)t82;
      unsigned char* ptr91 = &(cast90)[t89];
      struct std__basic_ostream_char__std__char_traits_char__* cast92 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr91;
      struct std__basic_ios_char__std__char_traits_char__* cast93 = (struct std__basic_ios_char__std__char_traits_char__*)cast92;
      int t94 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast93, t94);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t95 = __out76;
      char* t96 = __s77;
      char* t97 = __s77;
      unsigned long r98 = std__char_traits_char___length(t97);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast99 = (long)r98;
      struct std__basic_ostream_char__std__char_traits_char__* r100 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t95, t96, cast99);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t101 = __out76;
  __retval78 = t101;
  struct std__basic_ostream_char__std__char_traits_char__* t102 = __retval78;
  return t102;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v103, void* v104) {
bb105:
  struct std__basic_ostream_char__std__char_traits_char__* this106;
  void* __pf107;
  struct std__basic_ostream_char__std__char_traits_char__* __retval108;
  this106 = v103;
  __pf107 = v104;
  struct std__basic_ostream_char__std__char_traits_char__* t109 = this106;
  void* t110 = __pf107;
  struct std__basic_ostream_char__std__char_traits_char__* r111 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t110)(t109);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval108 = r111;
  struct std__basic_ostream_char__std__char_traits_char__* t112 = __retval108;
  return t112;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v113) {
bb114:
  struct std__basic_ostream_char__std__char_traits_char__* __os115;
  struct std__basic_ostream_char__std__char_traits_char__* __retval116;
  __os115 = v113;
  struct std__basic_ostream_char__std__char_traits_char__* t117 = __os115;
  struct std__basic_ostream_char__std__char_traits_char__* r118 = std__ostream__flush(t117);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval116 = r118;
  struct std__basic_ostream_char__std__char_traits_char__* t119 = __retval116;
  return t119;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v120) {
bb121:
  struct std__ctype_char_* __f122;
  struct std__ctype_char_* __retval123;
  __f122 = v120;
    struct std__ctype_char_* t124 = __f122;
    _Bool cast125 = (_Bool)t124;
    _Bool u126 = !cast125;
    if (u126) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t127 = __f122;
  __retval123 = t127;
  struct std__ctype_char_* t128 = __retval123;
  return t128;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v129, char v130) {
bb131:
  struct std__ctype_char_* this132;
  char __c133;
  char __retval134;
  this132 = v129;
  __c133 = v130;
  struct std__ctype_char_* t135 = this132;
    char t136 = t135->_M_widen_ok;
    _Bool cast137 = (_Bool)t136;
    if (cast137) {
      char t138 = __c133;
      unsigned char cast139 = (unsigned char)t138;
      unsigned long cast140 = (unsigned long)cast139;
      char t141 = t135->_M_widen[cast140];
      __retval134 = t141;
      char t142 = __retval134;
      return t142;
    }
  std__ctype_char____M_widen_init___const(t135);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t143 = __c133;
  void** v144 = (void**)t135;
  void* v145 = *((void**)v144);
  char vcall148 = (char)__VERIFIER_virtual_call_char_char(t135, 6, t143);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval134 = vcall148;
  char t149 = __retval134;
  return t149;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v150, char v151) {
bb152:
  struct std__basic_ios_char__std__char_traits_char__* this153;
  char __c154;
  char __retval155;
  this153 = v150;
  __c154 = v151;
  struct std__basic_ios_char__std__char_traits_char__* t156 = this153;
  struct std__ctype_char_* t157 = t156->_M_ctype;
  struct std__ctype_char_* r158 = std__ctype_char__const__std____check_facet_std__ctype_char___(t157);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t159 = __c154;
  char r160 = std__ctype_char___widen_char__const(r158, t159);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval155 = r160;
  char t161 = __retval155;
  return t161;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v162) {
bb163:
  struct std__basic_ostream_char__std__char_traits_char__* __os164;
  struct std__basic_ostream_char__std__char_traits_char__* __retval165;
  __os164 = v162;
  struct std__basic_ostream_char__std__char_traits_char__* t166 = __os164;
  struct std__basic_ostream_char__std__char_traits_char__* t167 = __os164;
  void** v168 = (void**)t167;
  void* v169 = *((void**)v168);
  unsigned char* cast170 = (unsigned char*)v169;
  long c171 = -24;
  unsigned char* ptr172 = &(cast170)[c171];
  long* cast173 = (long*)ptr172;
  long t174 = *cast173;
  unsigned char* cast175 = (unsigned char*)t167;
  unsigned char* ptr176 = &(cast175)[t174];
  struct std__basic_ostream_char__std__char_traits_char__* cast177 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr176;
  struct std__basic_ios_char__std__char_traits_char__* cast178 = (struct std__basic_ios_char__std__char_traits_char__*)cast177;
  char c179 = 10;
  char r180 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast178, c179);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r181 = std__ostream__put(t166, r180);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r182 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r181);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval165 = r182;
  struct std__basic_ostream_char__std__char_traits_char__* t183 = __retval165;
  return t183;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEEC2Ev
void std__basic_ios_char__std__char_traits_char_____basic_ios(struct std__basic_ios_char__std__char_traits_char__* v184) {
bb185:
  struct std__basic_ios_char__std__char_traits_char__* this186;
  this186 = v184;
  struct std__basic_ios_char__std__char_traits_char__* t187 = this186;
  struct std__ios_base* base188 = (struct std__ios_base*)((char *)t187 + 0);
  std__ios_base__ios_base(base188);
    void* v189 = (void*)&_ZTVSt9basic_iosIcSt11char_traitsIcEE[2];
    void** v190 = (void**)t187;
    *(void**)(v190) = (void*)v189;
    struct std__basic_ostream_char__std__char_traits_char__* c191 = ((void*)0);
    t187->_M_tie = c191;
    char c192 = 0;
    t187->_M_fill = c192;
    _Bool c193 = 0;
    t187->_M_fill_init = c193;
    struct std__basic_streambuf_char__std__char_traits_char__* c194 = ((void*)0);
    t187->_M_streambuf = c194;
    struct std__ctype_char_* c195 = ((void*)0);
    t187->_M_ctype = c195;
    struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* c196 = ((void*)0);
    t187->_M_num_put = c196;
    struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* c197 = ((void*)0);
    t187->_M_num_get = c197;
  return;
}

// function: _ZNSiC2Ev
void std__basic_istream_char__std__char_traits_char_____basic_istream(struct std__basic_istream_char__std__char_traits_char__* v198, void** v199) {
bb200:
  struct std__basic_istream_char__std__char_traits_char__* this201;
  void** vtt202;
  this201 = v198;
  vtt202 = v199;
  struct std__basic_istream_char__std__char_traits_char__* t203 = this201;
  void** t204 = vtt202;
  static void *vtt_slot205 = 0;
  void** vtt206 = (void**)&vtt_slot205;
  void** cast207 = (void**)vtt206;
  void* t208 = *cast207;
  void** v209 = (void**)t203;
  *(void**)(v209) = (void*)t208;
  static void *vtt_slot210 = 0;
  void** vtt211 = (void**)&vtt_slot210;
  void** cast212 = (void**)vtt211;
  void* t213 = *cast212;
  void** v214 = (void**)t203;
  void* v215 = *((void**)v214);
  unsigned char* cast216 = (unsigned char*)v215;
  long c217 = -24;
  unsigned char* ptr218 = &(cast216)[c217];
  long* cast219 = (long*)ptr218;
  long t220 = *cast219;
  unsigned char* cast221 = (unsigned char*)t203;
  unsigned char* ptr222 = &(cast221)[t220];
  struct std__basic_istream_char__std__char_traits_char__* cast223 = (struct std__basic_istream_char__std__char_traits_char__*)ptr222;
  void** v224 = (void**)cast223;
  *(void**)(v224) = (void*)t213;
  long c225 = 0;
  t203->_M_gcount = c225;
  void** v226 = (void**)t203;
  void* v227 = *((void**)v226);
  unsigned char* cast228 = (unsigned char*)v227;
  long c229 = -24;
  unsigned char* ptr230 = &(cast228)[c229];
  long* cast231 = (long*)ptr230;
  long t232 = *cast231;
  unsigned char* cast233 = (unsigned char*)t203;
  unsigned char* ptr234 = &(cast233)[t232];
  struct std__basic_istream_char__std__char_traits_char__* cast235 = (struct std__basic_istream_char__std__char_traits_char__*)ptr234;
  struct std__basic_ios_char__std__char_traits_char__* cast236 = (struct std__basic_ios_char__std__char_traits_char__*)cast235;
  struct std__basic_streambuf_char__std__char_traits_char__* c237 = ((void*)0);
  std__basic_ios_char__std__char_traits_char_____init(cast236, c237);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZStorSt13_Ios_OpenmodeS_
int std__operator__3(int v238, int v239) {
bb240:
  int __a241;
  int __b242;
  int __retval243;
  __a241 = v238;
  __b242 = v239;
  int t244 = __a241;
  int t245 = __b242;
  int b246 = t244 | t245;
  __retval243 = b246;
  int t247 = __retval243;
  return t247;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode
void std__basic_ifstream_char__std__char_traits_char_____open(struct std__basic_ifstream_char__std__char_traits_char__* v248, char* v249, int v250) {
bb251:
  struct std__basic_ifstream_char__std__char_traits_char__* this252;
  char* __s253;
  int __mode254;
  this252 = v248;
  __s253 = v249;
  __mode254 = v250;
  struct std__basic_ifstream_char__std__char_traits_char__* t255 = this252;
    char* t256 = __s253;
    int t257 = __mode254;
    int t258 = _ZNSt8ios_base2inE_const;
    int r259 = std__operator__3(t257, t258);
    struct std__basic_filebuf_char__std__char_traits_char__* r260 = std__basic_filebuf_char__std__char_traits_char_____open(&t255->_M_filebuf, t256, r259);
    if (__cir_exc_active) {
      return;
    }
    _Bool cast261 = (_Bool)r260;
    _Bool u262 = !cast261;
    if (u262) {
      void** v263 = (void**)t255;
      void* v264 = *((void**)v263);
      unsigned char* cast265 = (unsigned char*)v264;
      long c266 = -24;
      unsigned char* ptr267 = &(cast265)[c266];
      long* cast268 = (long*)ptr267;
      long t269 = *cast268;
      unsigned char* cast270 = (unsigned char*)t255;
      unsigned char* ptr271 = &(cast270)[t269];
      struct std__basic_ifstream_char__std__char_traits_char__* cast272 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr271;
      struct std__basic_ios_char__std__char_traits_char__* cast273 = (struct std__basic_ios_char__std__char_traits_char__*)cast272;
      int t274 = _ZNSt8ios_base7failbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast273, t274);
      if (__cir_exc_active) {
        return;
      }
    } else {
      void** v275 = (void**)t255;
      void* v276 = *((void**)v275);
      unsigned char* cast277 = (unsigned char*)v276;
      long c278 = -24;
      unsigned char* ptr279 = &(cast277)[c278];
      long* cast280 = (long*)ptr279;
      long t281 = *cast280;
      unsigned char* cast282 = (unsigned char*)t255;
      unsigned char* ptr283 = &(cast282)[t281];
      struct std__basic_ifstream_char__std__char_traits_char__* cast284 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr283;
      struct std__basic_ios_char__std__char_traits_char__* cast285 = (struct std__basic_ios_char__std__char_traits_char__*)cast284;
      int t286 = _ZNSt8ios_base7goodbitE_const;
      std__basic_ios_char__std__char_traits_char_____clear(cast285, t286);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt13basic_filebufIcSt11char_traitsIcEED2Ev
void std__basic_filebuf_char__std__char_traits_char______basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* v287) {
bb288:
  struct std__basic_filebuf_char__std__char_traits_char__* this289;
  this289 = v287;
  struct std__basic_filebuf_char__std__char_traits_char__* t290 = this289;
          struct std__basic_filebuf_char__std__char_traits_char__* r292 = std__basic_filebuf_char__std__char_traits_char_____close(t290);
          if (__cir_exc_active) {
            {
              std____basic_file_char______basic_file(&t290->_M_file);
            }
            {
              struct std__basic_streambuf_char__std__char_traits_char__* base293 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t290 + 0);
              std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base293);
            }
            goto cir_try_dispatch291;
          }
        cir_try_dispatch291: ;
        if (__cir_exc_active) {
        {
          int ca_tok294 = 0;
          void* ca_exn295 = (void*)__cir_exc_ptr;
          __cir_exc_active = 0;
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
        }
        }
    {
      std____basic_file_char______basic_file(&t290->_M_file);
    }
  {
    struct std__basic_streambuf_char__std__char_traits_char__* base296 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t290 + 0);
    std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base296);
  }
  return;
}

// function: _ZNSiD2Ev
void std__basic_istream_char__std__char_traits_char______basic_istream(struct std__basic_istream_char__std__char_traits_char__* v297, void** v298) {
bb299:
  struct std__basic_istream_char__std__char_traits_char__* this300;
  void** vtt301;
  this300 = v297;
  vtt301 = v298;
  struct std__basic_istream_char__std__char_traits_char__* t302 = this300;
  void** t303 = vtt301;
  long c304 = 0;
  t302->_M_gcount = c304;
  return;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEED2Ev
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* v305) {
bb306:
  struct std__basic_ios_char__std__char_traits_char__* this307;
  this307 = v305;
  struct std__basic_ios_char__std__char_traits_char__* t308 = this307;
  {
    struct std__ios_base* base309 = (struct std__ios_base*)((char *)t308 + 0);
    std__ios_base___ios_base(base309);
  }
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode
void std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* v310, char* v311, int v312) {
bb313:
  struct std__basic_ifstream_char__std__char_traits_char__* this314;
  char* __s315;
  int __mode316;
  this314 = v310;
  __s315 = v311;
  __mode316 = v312;
  struct std__basic_ifstream_char__std__char_traits_char__* t317 = this314;
  struct std__basic_ios_char__std__char_traits_char__* base318 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t317 + 256);
  std__basic_ios_char__std__char_traits_char_____basic_ios(base318);
  if (__cir_exc_active) {
    return;
  }
    struct std__basic_istream_char__std__char_traits_char__* base319 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t317 + 0);
    static void *vtt_slot320 = 0;
    void** vtt321 = (void**)&vtt_slot320;
    std__basic_istream_char__std__char_traits_char_____basic_istream(base319, vtt321);
    if (__cir_exc_active) {
      {
        struct std__basic_ios_char__std__char_traits_char__* base322 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t317 + 256);
        std__basic_ios_char__std__char_traits_char______basic_ios(base322);
      }
      return;
    }
      void* v323 = (void*)&_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[3];
      void** v324 = (void**)t317;
      *(void**)(v324) = (void*)v323;
      void* v325 = (void*)&_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[3];
      struct std__basic_ios_char__std__char_traits_char__* base326 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t317 + 256);
      void** v327 = (void**)base326;
      *(void**)(v327) = (void*)v325;
      std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(&t317->_M_filebuf);
      if (__cir_exc_active) {
        {
          struct std__basic_istream_char__std__char_traits_char__* base328 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t317 + 0);
          static void *vtt_slot329 = 0;
          void** vtt330 = (void**)&vtt_slot329;
          std__basic_istream_char__std__char_traits_char______basic_istream(base328, vtt330);
        }
        {
          struct std__basic_ios_char__std__char_traits_char__* base331 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t317 + 256);
          std__basic_ios_char__std__char_traits_char______basic_ios(base331);
        }
        return;
      }
        void** v332 = (void**)t317;
        void* v333 = *((void**)v332);
        unsigned char* cast334 = (unsigned char*)v333;
        long c335 = -24;
        unsigned char* ptr336 = &(cast334)[c335];
        long* cast337 = (long*)ptr336;
        long t338 = *cast337;
        unsigned char* cast339 = (unsigned char*)t317;
        unsigned char* ptr340 = &(cast339)[t338];
        struct std__basic_ifstream_char__std__char_traits_char__* cast341 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr340;
        struct std__basic_ios_char__std__char_traits_char__* cast342 = (struct std__basic_ios_char__std__char_traits_char__*)cast341;
        struct std__basic_streambuf_char__std__char_traits_char__* base343 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)&(t317->_M_filebuf) + 0);
        std__basic_ios_char__std__char_traits_char_____init(cast342, base343);
        if (__cir_exc_active) {
          {
            std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t317->_M_filebuf);
          }
          {
            struct std__basic_istream_char__std__char_traits_char__* base344 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t317 + 0);
            static void *vtt_slot345 = 0;
            void** vtt346 = (void**)&vtt_slot345;
            std__basic_istream_char__std__char_traits_char______basic_istream(base344, vtt346);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base347 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t317 + 256);
            std__basic_ios_char__std__char_traits_char______basic_ios(base347);
          }
          return;
        }
        char* t348 = __s315;
        int t349 = __mode316;
        std__basic_ifstream_char__std__char_traits_char_____open(t317, t348, t349);
        if (__cir_exc_active) {
          {
            std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t317->_M_filebuf);
          }
          {
            struct std__basic_istream_char__std__char_traits_char__* base350 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t317 + 0);
            static void *vtt_slot351 = 0;
            void** vtt352 = (void**)&vtt_slot351;
            std__basic_istream_char__std__char_traits_char______basic_istream(base350, vtt352);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base353 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t317 + 256);
            std__basic_ios_char__std__char_traits_char______basic_ios(base353);
          }
          return;
        }
  return;
}

// function: _ZStanSt12_Ios_IostateS_
int std__operator_(int v354, int v355) {
bb356:
  int __a357;
  int __b358;
  int __retval359;
  __a357 = v354;
  __b358 = v355;
  int t360 = __a357;
  int t361 = __b358;
  int b362 = t360 & t361;
  __retval359 = b362;
  int t363 = __retval359;
  return t363;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE4failEv
_Bool std__basic_ios_char__std__char_traits_char_____fail___const(struct std__basic_ios_char__std__char_traits_char__* v364) {
bb365:
  struct std__basic_ios_char__std__char_traits_char__* this366;
  _Bool __retval367;
  this366 = v364;
  struct std__basic_ios_char__std__char_traits_char__* t368 = this366;
  int r369 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t368);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  int t370 = _ZNSt8ios_base6badbitE_const;
  int t371 = _ZNSt8ios_base7failbitE_const;
  int r372 = std__operator__2(t370, t371);
  int r373 = std__operator_(r369, r372);
  int c374 = 0;
  _Bool c375 = ((r373 != c374)) ? 1 : 0;
  __retval367 = c375;
  _Bool t376 = __retval367;
  return t376;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEEntEv
_Bool std__basic_ios_char__std__char_traits_char_____operator____const(struct std__basic_ios_char__std__char_traits_char__* v377) {
bb378:
  struct std__basic_ios_char__std__char_traits_char__* this379;
  _Bool __retval380;
  this379 = v377;
  struct std__basic_ios_char__std__char_traits_char__* t381 = this379;
  _Bool r382 = std__basic_ios_char__std__char_traits_char_____fail___const(t381);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  __retval380 = r382;
  _Bool t383 = __retval380;
  return t383;
}

// function: _ZNSoC2Ev
void std__basic_ostream_char__std__char_traits_char_____basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* v384, void** v385) {
bb386:
  struct std__basic_ostream_char__std__char_traits_char__* this387;
  void** vtt388;
  this387 = v384;
  vtt388 = v385;
  struct std__basic_ostream_char__std__char_traits_char__* t389 = this387;
  void** t390 = vtt388;
  static void *vtt_slot391 = 0;
  void** vtt392 = (void**)&vtt_slot391;
  void** cast393 = (void**)vtt392;
  void* t394 = *cast393;
  void** v395 = (void**)t389;
  *(void**)(v395) = (void*)t394;
  static void *vtt_slot396 = 0;
  void** vtt397 = (void**)&vtt_slot396;
  void** cast398 = (void**)vtt397;
  void* t399 = *cast398;
  void** v400 = (void**)t389;
  void* v401 = *((void**)v400);
  unsigned char* cast402 = (unsigned char*)v401;
  long c403 = -24;
  unsigned char* ptr404 = &(cast402)[c403];
  long* cast405 = (long*)ptr404;
  long t406 = *cast405;
  unsigned char* cast407 = (unsigned char*)t389;
  unsigned char* ptr408 = &(cast407)[t406];
  struct std__basic_ostream_char__std__char_traits_char__* cast409 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr408;
  void** v410 = (void**)cast409;
  *(void**)(v410) = (void*)t399;
  void** v411 = (void**)t389;
  void* v412 = *((void**)v411);
  unsigned char* cast413 = (unsigned char*)v412;
  long c414 = -24;
  unsigned char* ptr415 = &(cast413)[c414];
  long* cast416 = (long*)ptr415;
  long t417 = *cast416;
  unsigned char* cast418 = (unsigned char*)t389;
  unsigned char* ptr419 = &(cast418)[t417];
  struct std__basic_ostream_char__std__char_traits_char__* cast420 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr419;
  struct std__basic_ios_char__std__char_traits_char__* cast421 = (struct std__basic_ios_char__std__char_traits_char__*)cast420;
  struct std__basic_streambuf_char__std__char_traits_char__* c422 = ((void*)0);
  std__basic_ios_char__std__char_traits_char_____init(cast421, c422);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode
void std__basic_ofstream_char__std__char_traits_char_____open(struct std__basic_ofstream_char__std__char_traits_char__* v423, char* v424, int v425) {
bb426:
  struct std__basic_ofstream_char__std__char_traits_char__* this427;
  char* __s428;
  int __mode429;
  this427 = v423;
  __s428 = v424;
  __mode429 = v425;
  struct std__basic_ofstream_char__std__char_traits_char__* t430 = this427;
    char* t431 = __s428;
    int t432 = __mode429;
    int t433 = _ZNSt8ios_base3outE_const;
    int r434 = std__operator__3(t432, t433);
    struct std__basic_filebuf_char__std__char_traits_char__* r435 = std__basic_filebuf_char__std__char_traits_char_____open(&t430->_M_filebuf, t431, r434);
    if (__cir_exc_active) {
      return;
    }
    _Bool cast436 = (_Bool)r435;
    _Bool u437 = !cast436;
    if (u437) {
      void** v438 = (void**)t430;
      void* v439 = *((void**)v438);
      unsigned char* cast440 = (unsigned char*)v439;
      long c441 = -24;
      unsigned char* ptr442 = &(cast440)[c441];
      long* cast443 = (long*)ptr442;
      long t444 = *cast443;
      unsigned char* cast445 = (unsigned char*)t430;
      unsigned char* ptr446 = &(cast445)[t444];
      struct std__basic_ofstream_char__std__char_traits_char__* cast447 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr446;
      struct std__basic_ios_char__std__char_traits_char__* cast448 = (struct std__basic_ios_char__std__char_traits_char__*)cast447;
      int t449 = _ZNSt8ios_base7failbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast448, t449);
      if (__cir_exc_active) {
        return;
      }
    } else {
      void** v450 = (void**)t430;
      void* v451 = *((void**)v450);
      unsigned char* cast452 = (unsigned char*)v451;
      long c453 = -24;
      unsigned char* ptr454 = &(cast452)[c453];
      long* cast455 = (long*)ptr454;
      long t456 = *cast455;
      unsigned char* cast457 = (unsigned char*)t430;
      unsigned char* ptr458 = &(cast457)[t456];
      struct std__basic_ofstream_char__std__char_traits_char__* cast459 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr458;
      struct std__basic_ios_char__std__char_traits_char__* cast460 = (struct std__basic_ios_char__std__char_traits_char__*)cast459;
      int t461 = _ZNSt8ios_base7goodbitE_const;
      std__basic_ios_char__std__char_traits_char_____clear(cast460, t461);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSoD2Ev
void std__basic_ostream_char__std__char_traits_char______basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* v462, void** v463) {
bb464:
  struct std__basic_ostream_char__std__char_traits_char__* this465;
  void** vtt466;
  this465 = v462;
  vtt466 = v463;
  struct std__basic_ostream_char__std__char_traits_char__* t467 = this465;
  void** t468 = vtt466;
  return;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode
void std__basic_ofstream_char__std__char_traits_char_____basic_ofstream(struct std__basic_ofstream_char__std__char_traits_char__* v469, char* v470, int v471) {
bb472:
  struct std__basic_ofstream_char__std__char_traits_char__* this473;
  char* __s474;
  int __mode475;
  this473 = v469;
  __s474 = v470;
  __mode475 = v471;
  struct std__basic_ofstream_char__std__char_traits_char__* t476 = this473;
  struct std__basic_ios_char__std__char_traits_char__* base477 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t476 + 248);
  std__basic_ios_char__std__char_traits_char_____basic_ios(base477);
  if (__cir_exc_active) {
    return;
  }
    struct std__basic_ostream_char__std__char_traits_char__* base478 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t476 + 0);
    static void *vtt_slot479 = 0;
    void** vtt480 = (void**)&vtt_slot479;
    std__basic_ostream_char__std__char_traits_char_____basic_ostream(base478, vtt480);
    if (__cir_exc_active) {
      {
        struct std__basic_ios_char__std__char_traits_char__* base481 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t476 + 248);
        std__basic_ios_char__std__char_traits_char______basic_ios(base481);
      }
      return;
    }
      void* v482 = (void*)&_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[3];
      void** v483 = (void**)t476;
      *(void**)(v483) = (void*)v482;
      void* v484 = (void*)&_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[3];
      struct std__basic_ios_char__std__char_traits_char__* base485 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t476 + 248);
      void** v486 = (void**)base485;
      *(void**)(v486) = (void*)v484;
      std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(&t476->_M_filebuf);
      if (__cir_exc_active) {
        {
          struct std__basic_ostream_char__std__char_traits_char__* base487 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t476 + 0);
          static void *vtt_slot488 = 0;
          void** vtt489 = (void**)&vtt_slot488;
          std__basic_ostream_char__std__char_traits_char______basic_ostream(base487, vtt489);
        }
        {
          struct std__basic_ios_char__std__char_traits_char__* base490 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t476 + 248);
          std__basic_ios_char__std__char_traits_char______basic_ios(base490);
        }
        return;
      }
        void** v491 = (void**)t476;
        void* v492 = *((void**)v491);
        unsigned char* cast493 = (unsigned char*)v492;
        long c494 = -24;
        unsigned char* ptr495 = &(cast493)[c494];
        long* cast496 = (long*)ptr495;
        long t497 = *cast496;
        unsigned char* cast498 = (unsigned char*)t476;
        unsigned char* ptr499 = &(cast498)[t497];
        struct std__basic_ofstream_char__std__char_traits_char__* cast500 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr499;
        struct std__basic_ios_char__std__char_traits_char__* cast501 = (struct std__basic_ios_char__std__char_traits_char__*)cast500;
        struct std__basic_streambuf_char__std__char_traits_char__* base502 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)&(t476->_M_filebuf) + 0);
        std__basic_ios_char__std__char_traits_char_____init(cast501, base502);
        if (__cir_exc_active) {
          {
            std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t476->_M_filebuf);
          }
          {
            struct std__basic_ostream_char__std__char_traits_char__* base503 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t476 + 0);
            static void *vtt_slot504 = 0;
            void** vtt505 = (void**)&vtt_slot504;
            std__basic_ostream_char__std__char_traits_char______basic_ostream(base503, vtt505);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base506 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t476 + 248);
            std__basic_ios_char__std__char_traits_char______basic_ios(base506);
          }
          return;
        }
        char* t507 = __s474;
        int t508 = __mode475;
        std__basic_ofstream_char__std__char_traits_char_____open(t476, t507, t508);
        if (__cir_exc_active) {
          {
            std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t476->_M_filebuf);
          }
          {
            struct std__basic_ostream_char__std__char_traits_char__* base509 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t476 + 0);
            static void *vtt_slot510 = 0;
            void** vtt511 = (void**)&vtt_slot510;
            std__basic_ostream_char__std__char_traits_char______basic_ostream(base509, vtt511);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base512 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t476 + 248);
            std__basic_ios_char__std__char_traits_char______basic_ios(base512);
          }
          return;
        }
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEE5closeEv
void std__basic_ifstream_char__std__char_traits_char_____close(struct std__basic_ifstream_char__std__char_traits_char__* v513) {
bb514:
  struct std__basic_ifstream_char__std__char_traits_char__* this515;
  this515 = v513;
  struct std__basic_ifstream_char__std__char_traits_char__* t516 = this515;
    struct std__basic_filebuf_char__std__char_traits_char__* r517 = std__basic_filebuf_char__std__char_traits_char_____close(&t516->_M_filebuf);
    if (__cir_exc_active) {
      return;
    }
    _Bool cast518 = (_Bool)r517;
    _Bool u519 = !cast518;
    if (u519) {
      void** v520 = (void**)t516;
      void* v521 = *((void**)v520);
      unsigned char* cast522 = (unsigned char*)v521;
      long c523 = -24;
      unsigned char* ptr524 = &(cast522)[c523];
      long* cast525 = (long*)ptr524;
      long t526 = *cast525;
      unsigned char* cast527 = (unsigned char*)t516;
      unsigned char* ptr528 = &(cast527)[t526];
      struct std__basic_ifstream_char__std__char_traits_char__* cast529 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr528;
      struct std__basic_ios_char__std__char_traits_char__* cast530 = (struct std__basic_ios_char__std__char_traits_char__*)cast529;
      int t531 = _ZNSt8ios_base7failbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast530, t531);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEEcvbEv
_Bool std__basic_ios_char__std__char_traits_char_____operator_bool___const(struct std__basic_ios_char__std__char_traits_char__* v532) {
bb533:
  struct std__basic_ios_char__std__char_traits_char__* this534;
  _Bool __retval535;
  this534 = v532;
  struct std__basic_ios_char__std__char_traits_char__* t536 = this534;
  _Bool r537 = std__basic_ios_char__std__char_traits_char_____fail___const(t536);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  _Bool u538 = !r537;
  __retval535 = u538;
  _Bool t539 = __retval535;
  return t539;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEED2Ev
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream_2(struct std__basic_ofstream_char__std__char_traits_char__* v540, void** v541) {
bb542:
  struct std__basic_ofstream_char__std__char_traits_char__* this543;
  void** vtt544;
  this543 = v540;
  vtt544 = v541;
  struct std__basic_ofstream_char__std__char_traits_char__* t545 = this543;
  void** t546 = vtt544;
    {
      std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t545->_M_filebuf);
    }
  {
    struct std__basic_ostream_char__std__char_traits_char__* base547 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t545 + 0);
    static void *vtt_slot548 = 0;
    void** vtt549 = (void**)&vtt_slot548;
    std__basic_ostream_char__std__char_traits_char______basic_ostream(base547, vtt549);
  }
  return;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream(struct std__basic_ofstream_char__std__char_traits_char__* v550) {
bb551:
  struct std__basic_ofstream_char__std__char_traits_char__* this552;
  this552 = v550;
  struct std__basic_ofstream_char__std__char_traits_char__* t553 = this552;
    static void *vtt_slot554 = 0;
    void** vtt555 = (void**)&vtt_slot554;
    std__basic_ofstream_char__std__char_traits_char______basic_ofstream_2(t553, vtt555);
  {
    struct std__basic_ios_char__std__char_traits_char__* base556 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t553 + 248);
    std__basic_ios_char__std__char_traits_char______basic_ios(base556);
  }
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEED2Ev
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream_2(struct std__basic_ifstream_char__std__char_traits_char__* v557, void** v558) {
bb559:
  struct std__basic_ifstream_char__std__char_traits_char__* this560;
  void** vtt561;
  this560 = v557;
  vtt561 = v558;
  struct std__basic_ifstream_char__std__char_traits_char__* t562 = this560;
  void** t563 = vtt561;
    {
      std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t562->_M_filebuf);
    }
  {
    struct std__basic_istream_char__std__char_traits_char__* base564 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t562 + 0);
    static void *vtt_slot565 = 0;
    void** vtt566 = (void**)&vtt_slot565;
    std__basic_istream_char__std__char_traits_char______basic_istream(base564, vtt566);
  }
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* v567) {
bb568:
  struct std__basic_ifstream_char__std__char_traits_char__* this569;
  this569 = v567;
  struct std__basic_ifstream_char__std__char_traits_char__* t570 = this569;
    static void *vtt_slot571 = 0;
    void** vtt572 = (void**)&vtt_slot571;
    std__basic_ifstream_char__std__char_traits_char______basic_ifstream_2(t570, vtt572);
  {
    struct std__basic_ios_char__std__char_traits_char__* base573 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t570 + 256);
    std__basic_ios_char__std__char_traits_char______basic_ios(base573);
  }
  return;
}

// function: main
int main(int v574, char** v575) {
bb576:
  int argc577;
  char** argv578;
  int __retval579;
  argc577 = v574;
  argv578 = v575;
  int c580 = 0;
  __retval579 = c580;
    int t581 = argc577;
    int c582 = 3;
    _Bool c583 = ((t581 != c582)) ? 1 : 0;
    if (c583) {
      char* cast584 = (char*)&(_str);
      struct std__basic_ostream_char__std__char_traits_char__* r585 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast584);
      if (__cir_exc_active) {
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      struct std__basic_ostream_char__std__char_traits_char__* r586 = std__ostream__operator___std__ostream_____(r585, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      if (__cir_exc_active) {
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ifstream_char__std__char_traits_char__ inFile587;
      struct std__basic_ofstream_char__std__char_traits_char__ outFile588;
      char c589;
      long c590 = 1;
      char** t591 = argv578;
      char** ptr592 = &(t591)[c590];
      char* t593 = *ptr592;
      int t594 = _ZNSt8ios_base2inE_const;
      std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(&inFile587, t593, t594);
      if (__cir_exc_active) {
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
          void** v595 = (void**)&(inFile587);
          void* v596 = *((void**)v595);
          unsigned char* cast597 = (unsigned char*)v596;
          long c598 = -24;
          unsigned char* ptr599 = &(cast597)[c598];
          long* cast600 = (long*)ptr599;
          long t601 = *cast600;
          unsigned char* cast602 = (unsigned char*)&(inFile587);
          unsigned char* ptr603 = &(cast602)[t601];
          struct std__basic_ifstream_char__std__char_traits_char__* cast604 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr603;
          struct std__basic_ios_char__std__char_traits_char__* cast605 = (struct std__basic_ios_char__std__char_traits_char__*)cast604;
          _Bool r606 = std__basic_ios_char__std__char_traits_char_____operator____const(cast605);
          if (__cir_exc_active) {
            {
              std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inFile587);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          if (r606) {
            long c607 = 1;
            char** t608 = argv578;
            char** ptr609 = &(t608)[c607];
            char* t610 = *ptr609;
            struct std__basic_ostream_char__std__char_traits_char__* r611 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, t610);
            if (__cir_exc_active) {
              {
                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inFile587);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
            char* cast612 = (char*)&(_str_1);
            struct std__basic_ostream_char__std__char_traits_char__* r613 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r611, cast612);
            if (__cir_exc_active) {
              {
                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inFile587);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
            struct std__basic_ostream_char__std__char_traits_char__* r614 = std__ostream__operator___std__ostream_____(r613, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            if (__cir_exc_active) {
              {
                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inFile587);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
            int c615 = -1;
            __retval579 = c615;
            int t616 = __retval579;
            int ret_val617 = t616;
            {
              std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inFile587);
            }
            return ret_val617;
          }
        long c618 = 2;
        char** t619 = argv578;
        char** ptr620 = &(t619)[c618];
        char* t621 = *ptr620;
        int t622 = _ZNSt8ios_base3outE_const;
        std__basic_ofstream_char__std__char_traits_char_____basic_ofstream(&outFile588, t621, t622);
        if (__cir_exc_active) {
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
            void** v623 = (void**)&(outFile588);
            void* v624 = *((void**)v623);
            unsigned char* cast625 = (unsigned char*)v624;
            long c626 = -24;
            unsigned char* ptr627 = &(cast625)[c626];
            long* cast628 = (long*)ptr627;
            long t629 = *cast628;
            unsigned char* cast630 = (unsigned char*)&(outFile588);
            unsigned char* ptr631 = &(cast630)[t629];
            struct std__basic_ofstream_char__std__char_traits_char__* cast632 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr631;
            struct std__basic_ios_char__std__char_traits_char__* cast633 = (struct std__basic_ios_char__std__char_traits_char__*)cast632;
            _Bool r634 = std__basic_ios_char__std__char_traits_char_____operator____const(cast633);
            if (__cir_exc_active) {
              {
                std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile588);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
            if (r634) {
              long c635 = 2;
              char** t636 = argv578;
              char** ptr637 = &(t636)[c635];
              char* t638 = *ptr637;
              struct std__basic_ostream_char__std__char_traits_char__* r639 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, t638);
              if (__cir_exc_active) {
                {
                  std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile588);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              char* cast640 = (char*)&(_str_1);
              struct std__basic_ostream_char__std__char_traits_char__* r641 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r639, cast640);
              if (__cir_exc_active) {
                {
                  std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile588);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              struct std__basic_ostream_char__std__char_traits_char__* r642 = std__ostream__operator___std__ostream_____(r641, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
              if (__cir_exc_active) {
                {
                  std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile588);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              std__basic_ifstream_char__std__char_traits_char_____close(&inFile587);
              if (__cir_exc_active) {
                {
                  std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile588);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              int c643 = -2;
              __retval579 = c643;
              int t644 = __retval579;
              int ret_val645 = t644;
              {
                std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outFile588);
              }
              return ret_val645;
            }
          struct std__basic_istream_char__std__char_traits_char__* base646 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(inFile587) + 0);
          int r647 = std__istream__get(base646);
          if (__cir_exc_active) {
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          char cast648 = (char)r647;
          c589 = cast648;
            while (1) {
              void** v649 = (void**)&(inFile587);
              void* v650 = *((void**)v649);
              unsigned char* cast651 = (unsigned char*)v650;
              long c652 = -24;
              unsigned char* ptr653 = &(cast651)[c652];
              long* cast654 = (long*)ptr653;
              long t655 = *cast654;
              unsigned char* cast656 = (unsigned char*)&(inFile587);
              unsigned char* ptr657 = &(cast656)[t655];
              struct std__basic_ifstream_char__std__char_traits_char__* cast658 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr657;
              struct std__basic_ios_char__std__char_traits_char__* cast659 = (struct std__basic_ios_char__std__char_traits_char__*)cast658;
              _Bool r660 = std__basic_ios_char__std__char_traits_char_____operator_bool___const(cast659);
              if (__cir_exc_active) {
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              if (!r660) break;
                struct std__basic_ostream_char__std__char_traits_char__* base661 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(outFile588) + 0);
                char t662 = c589;
                struct std__basic_ostream_char__std__char_traits_char__* r663 = std__ostream__put(base661, t662);
                if (__cir_exc_active) {
                  int __cir_eh_ret = (int)0;
                  return __cir_eh_ret;
                }
                struct std__basic_istream_char__std__char_traits_char__* base664 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(inFile587) + 0);
                int r665 = std__istream__get(base664);
                if (__cir_exc_active) {
                  int __cir_eh_ret = (int)0;
                  return __cir_eh_ret;
                }
                char cast666 = (char)r665;
                c589 = cast666;
            }
    }
  int c667 = 0;
  __retval579 = c667;
  int t668 = __retval579;
  return t668;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v669) {
bb670:
  struct std__basic_streambuf_char__std__char_traits_char__* this671;
  this671 = v669;
  struct std__basic_streambuf_char__std__char_traits_char__* t672 = this671;
  {
    std__locale___locale(&t672->_M_buf_locale);
  }
  return;
}

