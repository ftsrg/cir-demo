extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

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
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_filebuf_char__std__char_traits_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; union pthread_mutex_t __field1; struct std____basic_file_char_ _M_file; int __field3; struct __mbstate_t __field4; struct __mbstate_t __field5; struct __mbstate_t __field6; char* __field7; unsigned long __field8; _Bool __field9; _Bool __field10; _Bool __field11; char __field12; char* __field13; char* __field14; _Bool __field15; struct std__codecvt_char__char____mbstate_t_* __field16; char* __field17; long __field18; char* __field19; char* __field20; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

extern void *_ZTVSo[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base3outE_const __attribute__((aligned(4))) = 16;
char _str[5] = "test";
char _str_1[15] = "Test sentence\n";
extern void *_ZTVSo[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* p0);
extern struct std__basic_filebuf_char__std__char_traits_char__* std__basic_filebuf_char__std__char_traits_char_____open(struct std__basic_filebuf_char__std__char_traits_char__* p0, char* p1, int p2);
extern void std__ios_base__ios_base(struct std__ios_base* p0);
void std__ios_base___ios_base(struct std__ios_base* p0) {}
void std__basic_ios_char__std__char_traits_char_____basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
extern void std__basic_ios_char__std__char_traits_char_____init(struct std__basic_ios_char__std__char_traits_char__* p0, struct std__basic_streambuf_char__std__char_traits_char__* p1);
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ostream_char__std__char_traits_char_____basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std__basic_streambuf_char__std__char_traits_char__* p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool std____is_constant_evaluated();
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
extern struct std__basic_filebuf_char__std__char_traits_char__* std__basic_filebuf_char__std__char_traits_char_____close(struct std__basic_filebuf_char__std__char_traits_char__* p0);
void std__basic_ostream_char__std__char_traits_char______basic_ostream_2(struct std__basic_ostream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ostream_char__std__char_traits_char______basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* p0);
void std__basic_filebuf_char__std__char_traits_char______basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* p0);
int main();
extern int __gxx_personality_v0();
void std____basic_file_char______basic_file(struct std____basic_file_char_* p0) {}
void std__locale___locale(struct std__locale* p0) {}
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* p0);

extern unsigned char* _ZTTSo[2] __attribute__((aligned(8)));

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

// function: _ZNSt9basic_iosIcSt11char_traitsIcEED2Ev
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* v14) {
bb15:
  struct std__basic_ios_char__std__char_traits_char__* this16;
  this16 = v14;
  struct std__basic_ios_char__std__char_traits_char__* t17 = this16;
  {
    struct std__ios_base* base18 = (struct std__ios_base*)((char *)t17 + 0);
    std__ios_base___ios_base(base18);
  }
  return;
}

// function: _ZNSoC1EPSt15basic_streambufIcSt11char_traitsIcEE
void std__basic_ostream_char__std__char_traits_char_____basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* v19, struct std__basic_streambuf_char__std__char_traits_char__* v20) {
bb21:
  struct std__basic_ostream_char__std__char_traits_char__* this22;
  struct std__basic_streambuf_char__std__char_traits_char__* __sb23;
  this22 = v19;
  __sb23 = v20;
  struct std__basic_ostream_char__std__char_traits_char__* t24 = this22;
  struct std__basic_ios_char__std__char_traits_char__* base25 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t24 + 8);
  std__basic_ios_char__std__char_traits_char_____basic_ios(base25);
  if (__cir_exc_active) {
    return;
  }
    void* v26 = (void*)&_ZTVSo[3];
    void** v27 = (void**)t24;
    *(void**)(v27) = (void*)v26;
    void* v28 = (void*)&_ZTVSo[3];
    struct std__basic_ios_char__std__char_traits_char__* base29 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t24 + 8);
    void** v30 = (void**)base29;
    *(void**)(v30) = (void*)v28;
    void** v31 = (void**)t24;
    void* v32 = *((void**)v31);
    unsigned char* cast33 = (unsigned char*)v32;
    long c34 = -24;
    unsigned char* ptr35 = &(cast33)[c34];
    long* cast36 = (long*)ptr35;
    long t37 = *cast36;
    unsigned char* cast38 = (unsigned char*)t24;
    unsigned char* ptr39 = &(cast38)[t37];
    struct std__basic_ostream_char__std__char_traits_char__* cast40 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr39;
    struct std__basic_ios_char__std__char_traits_char__* cast41 = (struct std__basic_ios_char__std__char_traits_char__*)cast40;
    struct std__basic_streambuf_char__std__char_traits_char__* t42 = __sb23;
    std__basic_ios_char__std__char_traits_char_____init(cast41, t42);
    if (__cir_exc_active) {
      {
        struct std__basic_ios_char__std__char_traits_char__* base43 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t24 + 8);
        std__basic_ios_char__std__char_traits_char______basic_ios(base43);
      }
      return;
    }
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v44, int v45) {
bb46:
  int __a47;
  int __b48;
  int __retval49;
  __a47 = v44;
  __b48 = v45;
  int t50 = __a47;
  int t51 = __b48;
  int b52 = t50 | t51;
  __retval49 = b52;
  int t53 = __retval49;
  return t53;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v54) {
bb55:
  struct std__basic_ios_char__std__char_traits_char__* this56;
  int __retval57;
  this56 = v54;
  struct std__basic_ios_char__std__char_traits_char__* t58 = this56;
  struct std__ios_base* base59 = (struct std__ios_base*)((char *)t58 + 0);
  int t60 = base59->_M_streambuf_state;
  __retval57 = t60;
  int t61 = __retval57;
  return t61;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v62, int v63) {
bb64:
  struct std__basic_ios_char__std__char_traits_char__* this65;
  int __state66;
  this65 = v62;
  __state66 = v63;
  struct std__basic_ios_char__std__char_traits_char__* t67 = this65;
  int r68 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t67);
  if (__cir_exc_active) {
    return;
  }
  int t69 = __state66;
  int r70 = std__operator_(r68, t69);
  std__basic_ios_char__std__char_traits_char_____clear(t67, r70);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb71:
  _Bool __retval72;
    _Bool c73 = 0;
    __retval72 = c73;
    _Bool t74 = __retval72;
    return t74;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v75, char* v76) {
bb77:
  char* __c178;
  char* __c279;
  _Bool __retval80;
  __c178 = v75;
  __c279 = v76;
  char* t81 = __c178;
  char t82 = *t81;
  int cast83 = (int)t82;
  char* t84 = __c279;
  char t85 = *t84;
  int cast86 = (int)t85;
  _Bool c87 = ((cast83 == cast86)) ? 1 : 0;
  __retval80 = c87;
  _Bool t88 = __retval80;
  return t88;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v89) {
bb90:
  char* __p91;
  unsigned long __retval92;
  unsigned long __i93;
  __p91 = v89;
  unsigned long c94 = 0;
  __i93 = c94;
    char ref_tmp095;
    while (1) {
      unsigned long t96 = __i93;
      char* t97 = __p91;
      char* ptr98 = &(t97)[t96];
      char c99 = 0;
      ref_tmp095 = c99;
      _Bool r100 = __gnu_cxx__char_traits_char___eq(ptr98, &ref_tmp095);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u101 = !r100;
      if (!u101) break;
      unsigned long t102 = __i93;
      unsigned long u103 = t102 + 1;
      __i93 = u103;
    }
  unsigned long t104 = __i93;
  __retval92 = t104;
  unsigned long t105 = __retval92;
  return t105;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v106) {
bb107:
  char* __s108;
  unsigned long __retval109;
  __s108 = v106;
    _Bool r110 = std____is_constant_evaluated();
    if (r110) {
      char* t111 = __s108;
      unsigned long r112 = __gnu_cxx__char_traits_char___length(t111);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval109 = r112;
      unsigned long t113 = __retval109;
      return t113;
    }
  char* t114 = __s108;
  unsigned long r115 = strlen(t114);
  __retval109 = r115;
  unsigned long t116 = __retval109;
  return t116;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v117, char* v118) {
bb119:
  struct std__basic_ostream_char__std__char_traits_char__* __out120;
  char* __s121;
  struct std__basic_ostream_char__std__char_traits_char__* __retval122;
  __out120 = v117;
  __s121 = v118;
    char* t123 = __s121;
    _Bool cast124 = (_Bool)t123;
    _Bool u125 = !cast124;
    if (u125) {
      struct std__basic_ostream_char__std__char_traits_char__* t126 = __out120;
      void** v127 = (void**)t126;
      void* v128 = *((void**)v127);
      unsigned char* cast129 = (unsigned char*)v128;
      long c130 = -24;
      unsigned char* ptr131 = &(cast129)[c130];
      long* cast132 = (long*)ptr131;
      long t133 = *cast132;
      unsigned char* cast134 = (unsigned char*)t126;
      unsigned char* ptr135 = &(cast134)[t133];
      struct std__basic_ostream_char__std__char_traits_char__* cast136 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr135;
      struct std__basic_ios_char__std__char_traits_char__* cast137 = (struct std__basic_ios_char__std__char_traits_char__*)cast136;
      int t138 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast137, t138);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t139 = __out120;
      char* t140 = __s121;
      char* t141 = __s121;
      unsigned long r142 = std__char_traits_char___length(t141);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast143 = (long)r142;
      struct std__basic_ostream_char__std__char_traits_char__* r144 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t139, t140, cast143);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t145 = __out120;
  __retval122 = t145;
  struct std__basic_ostream_char__std__char_traits_char__* t146 = __retval122;
  return t146;
}

// function: _ZNSoD2Ev
void std__basic_ostream_char__std__char_traits_char______basic_ostream_2(struct std__basic_ostream_char__std__char_traits_char__* v147, void** v148) {
bb149:
  struct std__basic_ostream_char__std__char_traits_char__* this150;
  void** vtt151;
  this150 = v147;
  vtt151 = v148;
  struct std__basic_ostream_char__std__char_traits_char__* t152 = this150;
  void** t153 = vtt151;
  return;
}

// function: _ZNSoD1Ev
void std__basic_ostream_char__std__char_traits_char______basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* v154) {
bb155:
  struct std__basic_ostream_char__std__char_traits_char__* this156;
  this156 = v154;
  struct std__basic_ostream_char__std__char_traits_char__* t157 = this156;
    static void *vtt_slot158 = 0;
    void** vtt159 = (void**)&vtt_slot158;
    std__basic_ostream_char__std__char_traits_char______basic_ostream_2(t157, vtt159);
  {
    struct std__basic_ios_char__std__char_traits_char__* base160 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t157 + 8);
    std__basic_ios_char__std__char_traits_char______basic_ios(base160);
  }
  return;
}

// function: _ZNSt13basic_filebufIcSt11char_traitsIcEED2Ev
void std__basic_filebuf_char__std__char_traits_char______basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* v161) {
bb162:
  struct std__basic_filebuf_char__std__char_traits_char__* this163;
  this163 = v161;
  struct std__basic_filebuf_char__std__char_traits_char__* t164 = this163;
          struct std__basic_filebuf_char__std__char_traits_char__* r166 = std__basic_filebuf_char__std__char_traits_char_____close(t164);
          if (__cir_exc_active) {
            {
              std____basic_file_char______basic_file(&t164->_M_file);
            }
            {
              struct std__basic_streambuf_char__std__char_traits_char__* base167 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t164 + 0);
              std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base167);
            }
            goto cir_try_dispatch165;
          }
        cir_try_dispatch165: ;
        if (__cir_exc_active) {
        {
          int ca_tok168 = 0;
          void* ca_exn169 = (void*)__cir_exc_ptr;
          __cir_exc_active = 0;
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
        }
        }
    {
      std____basic_file_char______basic_file(&t164->_M_file);
    }
  {
    struct std__basic_streambuf_char__std__char_traits_char__* base170 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t164 + 0);
    std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base170);
  }
  return;
}

// function: main
int main() {
bb171:
  int __retval172;
  struct std__basic_filebuf_char__std__char_traits_char__ fb173;
  struct std__basic_ostream_char__std__char_traits_char__ os174;
  int c175 = 0;
  __retval172 = c175;
  std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(&fb173);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    char* cast176 = (char*)&(_str);
    int t177 = _ZNSt8ios_base3outE_const;
    struct std__basic_filebuf_char__std__char_traits_char__* r178 = std__basic_filebuf_char__std__char_traits_char_____open(&fb173, cast176, t177);
    if (__cir_exc_active) {
      {
        std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&fb173);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_streambuf_char__std__char_traits_char__* base179 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)&(fb173) + 0);
    std__basic_ostream_char__std__char_traits_char_____basic_ostream(&os174, base179);
    if (__cir_exc_active) {
      {
        std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&fb173);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      char* cast180 = (char*)&(_str_1);
      struct std__basic_ostream_char__std__char_traits_char__* r181 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&os174, cast180);
      if (__cir_exc_active) {
        {
          std__basic_ostream_char__std__char_traits_char______basic_ostream(&os174);
        }
        {
          std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&fb173);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      struct std__basic_filebuf_char__std__char_traits_char__* r182 = std__basic_filebuf_char__std__char_traits_char_____close(&fb173);
      if (__cir_exc_active) {
        {
          std__basic_ostream_char__std__char_traits_char______basic_ostream(&os174);
        }
        {
          std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&fb173);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      int c183 = 0;
      __retval172 = c183;
      int t184 = __retval172;
      int ret_val185 = t184;
      {
        std__basic_ostream_char__std__char_traits_char______basic_ostream(&os174);
      }
      {
        std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&fb173);
      }
      return ret_val185;
  int t186 = __retval172;
  return t186;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v187) {
bb188:
  struct std__basic_streambuf_char__std__char_traits_char__* this189;
  this189 = v187;
  struct std__basic_streambuf_char__std__char_traits_char__* t190 = this189;
  {
    std__locale___locale(&t190->_M_buf_locale);
  }
  return;
}

