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
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_filebuf_char__std__char_traits_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; union pthread_mutex_t __field1; struct std____basic_file_char_ _M_file; int __field3; struct __mbstate_t __field4; struct __mbstate_t __field5; struct __mbstate_t __field6; char* __field7; unsigned long __field8; _Bool __field9; _Bool __field10; _Bool __field11; char __field12; char* __field13; char* __field14; _Bool __field15; struct std__codecvt_char__char____mbstate_t_* __field16; char* __field17; long __field18; char* __field19; char* __field20; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long _M_gcount; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__basic_ifstream_char__std__char_traits_char__ { struct std__basic_istream_char__std__char_traits_char__ __field0; struct std__basic_filebuf_char__std__char_traits_char__ _M_filebuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void std__ios_base__ios_base(struct std__ios_base* p0);
void std__ios_base___ios_base(struct std__ios_base* p0) {}
void std__basic_ios_char__std__char_traits_char_____basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_istream_char__std__char_traits_char_____basic_istream(struct std__basic_istream_char__std__char_traits_char__* p0, void** p1);
extern void std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* p0);
extern void std__basic_ios_char__std__char_traits_char_____init(struct std__basic_ios_char__std__char_traits_char__* p0, struct std__basic_streambuf_char__std__char_traits_char__* p1);
void std__basic_filebuf_char__std__char_traits_char______basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* p0);
void std__basic_istream_char__std__char_traits_char______basic_istream(struct std__basic_istream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* p0);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__get_2(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1, long p2, char p3);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_istream_char__std__char_traits_char__* std__istream__get(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1, long p2);
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream_2(struct std__basic_ifstream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* p0);
int main();
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

// function: _ZNSt13basic_filebufIcSt11char_traitsIcEED2Ev
void std__basic_filebuf_char__std__char_traits_char______basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* v54) {
bb55:
  struct std__basic_filebuf_char__std__char_traits_char__* this56;
  this56 = v54;
  struct std__basic_filebuf_char__std__char_traits_char__* t57 = this56;
          struct std__basic_filebuf_char__std__char_traits_char__* r59 = std__basic_filebuf_char__std__char_traits_char_____close(t57);
          if (__cir_exc_active) {
            {
              std____basic_file_char______basic_file(&t57->_M_file);
            }
            {
              struct std__basic_streambuf_char__std__char_traits_char__* base60 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t57 + 0);
              std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base60);
            }
            goto cir_try_dispatch58;
          }
        cir_try_dispatch58: ;
        if (__cir_exc_active) {
        {
          int ca_tok61 = 0;
          void* ca_exn62 = (void*)__cir_exc_ptr;
          __cir_exc_active = 0;
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
        }
        }
    {
      std____basic_file_char______basic_file(&t57->_M_file);
    }
  {
    struct std__basic_streambuf_char__std__char_traits_char__* base63 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t57 + 0);
    std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base63);
  }
  return;
}

// function: _ZNSiD2Ev
void std__basic_istream_char__std__char_traits_char______basic_istream(struct std__basic_istream_char__std__char_traits_char__* v64, void** v65) {
bb66:
  struct std__basic_istream_char__std__char_traits_char__* this67;
  void** vtt68;
  this67 = v64;
  vtt68 = v65;
  struct std__basic_istream_char__std__char_traits_char__* t69 = this67;
  void** t70 = vtt68;
  long c71 = 0;
  t69->_M_gcount = c71;
  return;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEED2Ev
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* v72) {
bb73:
  struct std__basic_ios_char__std__char_traits_char__* this74;
  this74 = v72;
  struct std__basic_ios_char__std__char_traits_char__* t75 = this74;
  {
    struct std__ios_base* base76 = (struct std__ios_base*)((char *)t75 + 0);
    std__ios_base___ios_base(base76);
  }
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEEC1Ev
void std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* v77) {
bb78:
  struct std__basic_ifstream_char__std__char_traits_char__* this79;
  this79 = v77;
  struct std__basic_ifstream_char__std__char_traits_char__* t80 = this79;
  struct std__basic_ios_char__std__char_traits_char__* base81 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t80 + 256);
  std__basic_ios_char__std__char_traits_char_____basic_ios(base81);
  if (__cir_exc_active) {
    return;
  }
    struct std__basic_istream_char__std__char_traits_char__* base82 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t80 + 0);
    static void *vtt_slot83 = 0;
    void** vtt84 = (void**)&vtt_slot83;
    std__basic_istream_char__std__char_traits_char_____basic_istream(base82, vtt84);
    if (__cir_exc_active) {
      {
        struct std__basic_ios_char__std__char_traits_char__* base85 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t80 + 256);
        std__basic_ios_char__std__char_traits_char______basic_ios(base85);
      }
      return;
    }
      void* v86 = (void*)&_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[3];
      void** v87 = (void**)t80;
      *(void**)(v87) = (void*)v86;
      void* v88 = (void*)&_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[3];
      struct std__basic_ios_char__std__char_traits_char__* base89 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t80 + 256);
      void** v90 = (void**)base89;
      *(void**)(v90) = (void*)v88;
      std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(&t80->_M_filebuf);
      if (__cir_exc_active) {
        {
          struct std__basic_istream_char__std__char_traits_char__* base91 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t80 + 0);
          static void *vtt_slot92 = 0;
          void** vtt93 = (void**)&vtt_slot92;
          std__basic_istream_char__std__char_traits_char______basic_istream(base91, vtt93);
        }
        {
          struct std__basic_ios_char__std__char_traits_char__* base94 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t80 + 256);
          std__basic_ios_char__std__char_traits_char______basic_ios(base94);
        }
        return;
      }
        void** v95 = (void**)t80;
        void* v96 = *((void**)v95);
        unsigned char* cast97 = (unsigned char*)v96;
        long c98 = -24;
        unsigned char* ptr99 = &(cast97)[c98];
        long* cast100 = (long*)ptr99;
        long t101 = *cast100;
        unsigned char* cast102 = (unsigned char*)t80;
        unsigned char* ptr103 = &(cast102)[t101];
        struct std__basic_ifstream_char__std__char_traits_char__* cast104 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr103;
        struct std__basic_ios_char__std__char_traits_char__* cast105 = (struct std__basic_ios_char__std__char_traits_char__*)cast104;
        struct std__basic_streambuf_char__std__char_traits_char__* base106 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)&(t80->_M_filebuf) + 0);
        std__basic_ios_char__std__char_traits_char_____init(cast105, base106);
        if (__cir_exc_active) {
          {
            std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t80->_M_filebuf);
          }
          {
            struct std__basic_istream_char__std__char_traits_char__* base107 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t80 + 0);
            static void *vtt_slot108 = 0;
            void** vtt109 = (void**)&vtt_slot108;
            std__basic_istream_char__std__char_traits_char______basic_istream(base107, vtt109);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base110 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t80 + 256);
            std__basic_ios_char__std__char_traits_char______basic_ios(base110);
          }
          return;
        }
  return;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v111) {
bb112:
  struct std__ctype_char_* __f113;
  struct std__ctype_char_* __retval114;
  __f113 = v111;
    struct std__ctype_char_* t115 = __f113;
    _Bool cast116 = (_Bool)t115;
    _Bool u117 = !cast116;
    if (u117) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t118 = __f113;
  __retval114 = t118;
  struct std__ctype_char_* t119 = __retval114;
  return t119;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v120, char v121) {
bb122:
  struct std__ctype_char_* this123;
  char __c124;
  char __retval125;
  this123 = v120;
  __c124 = v121;
  struct std__ctype_char_* t126 = this123;
    char t127 = t126->_M_widen_ok;
    _Bool cast128 = (_Bool)t127;
    if (cast128) {
      char t129 = __c124;
      unsigned char cast130 = (unsigned char)t129;
      unsigned long cast131 = (unsigned long)cast130;
      char t132 = t126->_M_widen[cast131];
      __retval125 = t132;
      char t133 = __retval125;
      return t133;
    }
  std__ctype_char____M_widen_init___const(t126);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t134 = __c124;
  void** v135 = (void**)t126;
  void* v136 = *((void**)v135);
  char vcall139 = (char)__VERIFIER_virtual_call_char_char(t126, 6, t134);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval125 = vcall139;
  char t140 = __retval125;
  return t140;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v141, char v142) {
bb143:
  struct std__basic_ios_char__std__char_traits_char__* this144;
  char __c145;
  char __retval146;
  this144 = v141;
  __c145 = v142;
  struct std__basic_ios_char__std__char_traits_char__* t147 = this144;
  struct std__ctype_char_* t148 = t147->_M_ctype;
  struct std__ctype_char_* r149 = std__ctype_char__const__std____check_facet_std__ctype_char___(t148);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t150 = __c145;
  char r151 = std__ctype_char___widen_char__const(r149, t150);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval146 = r151;
  char t152 = __retval146;
  return t152;
}

// function: _ZNSi3getEPcl
struct std__basic_istream_char__std__char_traits_char__* std__istream__get(struct std__basic_istream_char__std__char_traits_char__* v153, char* v154, long v155) {
bb156:
  struct std__basic_istream_char__std__char_traits_char__* this157;
  char* __s158;
  long __n159;
  struct std__basic_istream_char__std__char_traits_char__* __retval160;
  this157 = v153;
  __s158 = v154;
  __n159 = v155;
  struct std__basic_istream_char__std__char_traits_char__* t161 = this157;
  char* t162 = __s158;
  long t163 = __n159;
  void** v164 = (void**)t161;
  void* v165 = *((void**)v164);
  unsigned char* cast166 = (unsigned char*)v165;
  long c167 = -24;
  unsigned char* ptr168 = &(cast166)[c167];
  long* cast169 = (long*)ptr168;
  long t170 = *cast169;
  unsigned char* cast171 = (unsigned char*)t161;
  unsigned char* ptr172 = &(cast171)[t170];
  struct std__basic_istream_char__std__char_traits_char__* cast173 = (struct std__basic_istream_char__std__char_traits_char__*)ptr172;
  struct std__basic_ios_char__std__char_traits_char__* cast174 = (struct std__basic_ios_char__std__char_traits_char__*)cast173;
  char c175 = 10;
  char r176 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast174, c175);
  if (__cir_exc_active) {
    struct std__basic_istream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_istream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_istream_char__std__char_traits_char__* r177 = std__istream__get_2(t161, t162, t163, r176);
  if (__cir_exc_active) {
    struct std__basic_istream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_istream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval160 = r177;
  struct std__basic_istream_char__std__char_traits_char__* t178 = __retval160;
  return t178;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEED2Ev
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream_2(struct std__basic_ifstream_char__std__char_traits_char__* v179, void** v180) {
bb181:
  struct std__basic_ifstream_char__std__char_traits_char__* this182;
  void** vtt183;
  this182 = v179;
  vtt183 = v180;
  struct std__basic_ifstream_char__std__char_traits_char__* t184 = this182;
  void** t185 = vtt183;
    {
      std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t184->_M_filebuf);
    }
  {
    struct std__basic_istream_char__std__char_traits_char__* base186 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t184 + 0);
    static void *vtt_slot187 = 0;
    void** vtt188 = (void**)&vtt_slot187;
    std__basic_istream_char__std__char_traits_char______basic_istream(base186, vtt188);
  }
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* v189) {
bb190:
  struct std__basic_ifstream_char__std__char_traits_char__* this191;
  this191 = v189;
  struct std__basic_ifstream_char__std__char_traits_char__* t192 = this191;
    static void *vtt_slot193 = 0;
    void** vtt194 = (void**)&vtt_slot193;
    std__basic_ifstream_char__std__char_traits_char______basic_ifstream_2(t192, vtt194);
  {
    struct std__basic_ios_char__std__char_traits_char__* base195 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t192 + 256);
    std__basic_ios_char__std__char_traits_char______basic_ios(base195);
  }
  return;
}

// function: main
int main() {
bb196:
  int __retval197;
  char c198;
  char str199[256];
  struct std__basic_ifstream_char__std__char_traits_char__ is200;
  int c201 = 0;
  __retval197 = c201;
  std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(&is200);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    char* cast202 = (char*)&(str199);
    long c203 = 256;
    struct std__basic_istream_char__std__char_traits_char__* r204 = std__istream__get(&_ZSt3cin, cast202, c203);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&is200);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c205 = 0;
    __retval197 = c205;
    int t206 = __retval197;
    int ret_val207 = t206;
    {
      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&is200);
    }
    return ret_val207;
  int t208 = __retval197;
  return t208;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v209) {
bb210:
  struct std__basic_streambuf_char__std__char_traits_char__* this211;
  this211 = v209;
  struct std__basic_streambuf_char__std__char_traits_char__* t212 = this211;
  {
    std__locale___locale(&t212->_M_buf_locale);
  }
  return;
}

