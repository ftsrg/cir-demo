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
struct anon_struct_0 { unsigned char* __field0[5]; unsigned char* __field1[5]; unsigned char* __field2[5]; };
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
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long _M_gcount; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__basic_iostream_char__std__char_traits_char__ { struct std__basic_istream_char__std__char_traits_char__ __field0; struct std__basic_ostream_char__std__char_traits_char__ __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_fstream_char__std__char_traits_char__ { struct std__basic_iostream_char__std__char_traits_char__ __field0; struct std__basic_filebuf_char__std__char_traits_char__ _M_filebuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVSt13basic_fstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
int _ZNSt8ios_base7goodbitE_const __attribute__((aligned(4))) = 0;
int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base3outE_const __attribute__((aligned(4))) = 16;
int _ZNSt8ios_base2inE_const __attribute__((aligned(4))) = 8;
char _str[5] = "test";
char _str_1[18] = "filestr.is_open()";
char _str_2[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stream/fstream_constructor_1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern void *_ZTVSt13basic_fstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
int std__operator__2(int p0, int p1);
extern void std__ios_base__ios_base(struct std__ios_base* p0);
void std__ios_base___ios_base(struct std__ios_base* p0) {}
void std__basic_ios_char__std__char_traits_char_____basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_istream_char__std__char_traits_char_____basic_istream(struct std__basic_istream_char__std__char_traits_char__* p0, void** p1, struct std__basic_streambuf_char__std__char_traits_char__* p2);
void std__basic_ostream_char__std__char_traits_char_____basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* p0, void** p1, struct std__basic_streambuf_char__std__char_traits_char__* p2);
void std__basic_ostream_char__std__char_traits_char______basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* p0, void** p1);
void std__basic_istream_char__std__char_traits_char______basic_istream(struct std__basic_istream_char__std__char_traits_char__* p0, void** p1);
void std__basic_iostream_char__std__char_traits_char_____basic_iostream(struct std__basic_iostream_char__std__char_traits_char__* p0, void** p1, struct std__basic_streambuf_char__std__char_traits_char__* p2);
extern void std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* p0);
extern void std__basic_ios_char__std__char_traits_char_____init(struct std__basic_ios_char__std__char_traits_char__* p0, struct std__basic_streambuf_char__std__char_traits_char__* p1);
extern struct std__basic_filebuf_char__std__char_traits_char__* std__basic_filebuf_char__std__char_traits_char_____open(struct std__basic_filebuf_char__std__char_traits_char__* p0, char* p1, int p2);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
void std__basic_fstream_char__std__char_traits_char_____open(struct std__basic_fstream_char__std__char_traits_char__* p0, char* p1, int p2);
void std__basic_filebuf_char__std__char_traits_char______basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* p0);
void std__basic_iostream_char__std__char_traits_char______basic_iostream(struct std__basic_iostream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_fstream_char__std__char_traits_char_____basic_fstream(struct std__basic_fstream_char__std__char_traits_char__* p0, char* p1, int p2);
extern _Bool std____basic_file_char___is_open___const(struct std____basic_file_char_* p0);
_Bool std__basic_filebuf_char__std__char_traits_char_____is_open___const(struct std__basic_filebuf_char__std__char_traits_char__* p0);
_Bool std__basic_fstream_char__std__char_traits_char_____is_open(struct std__basic_fstream_char__std__char_traits_char__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void std__basic_fstream_char__std__char_traits_char_____close(struct std__basic_fstream_char__std__char_traits_char__* p0);
void std__basic_fstream_char__std__char_traits_char______basic_fstream_2(struct std__basic_fstream_char__std__char_traits_char__* p0, void** p1);
void std__basic_fstream_char__std__char_traits_char______basic_fstream(struct std__basic_fstream_char__std__char_traits_char__* p0);
int main();
extern int __gxx_personality_v0();
extern struct std__basic_filebuf_char__std__char_traits_char__* std__basic_filebuf_char__std__char_traits_char_____close(struct std__basic_filebuf_char__std__char_traits_char__* p0);
void std____basic_file_char______basic_file(struct std____basic_file_char_* p0) {}
void std__locale___locale(struct std__locale* p0) {}
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* p0);

extern unsigned char* _ZTTSt13basic_fstreamIcSt11char_traitsIcEE[10] __attribute__((aligned(8)));

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

// function: _ZNSiC2EPSt15basic_streambufIcSt11char_traitsIcEE
void std__basic_istream_char__std__char_traits_char_____basic_istream(struct std__basic_istream_char__std__char_traits_char__* v24, void** v25, struct std__basic_streambuf_char__std__char_traits_char__* v26) {
bb27:
  struct std__basic_istream_char__std__char_traits_char__* this28;
  void** vtt29;
  struct std__basic_streambuf_char__std__char_traits_char__* __sb30;
  this28 = v24;
  vtt29 = v25;
  __sb30 = v26;
  struct std__basic_istream_char__std__char_traits_char__* t31 = this28;
  void** t32 = vtt29;
  static void *vtt_slot33 = 0;
  void** vtt34 = (void**)&vtt_slot33;
  void** cast35 = (void**)vtt34;
  void* t36 = *cast35;
  void** v37 = (void**)t31;
  *(void**)(v37) = (void*)t36;
  static void *vtt_slot38 = 0;
  void** vtt39 = (void**)&vtt_slot38;
  void** cast40 = (void**)vtt39;
  void* t41 = *cast40;
  void** v42 = (void**)t31;
  void* v43 = *((void**)v42);
  unsigned char* cast44 = (unsigned char*)v43;
  long c45 = -24;
  unsigned char* ptr46 = &(cast44)[c45];
  long* cast47 = (long*)ptr46;
  long t48 = *cast47;
  unsigned char* cast49 = (unsigned char*)t31;
  unsigned char* ptr50 = &(cast49)[t48];
  struct std__basic_istream_char__std__char_traits_char__* cast51 = (struct std__basic_istream_char__std__char_traits_char__*)ptr50;
  void** v52 = (void**)cast51;
  *(void**)(v52) = (void*)t41;
  long c53 = 0;
  t31->_M_gcount = c53;
  void** v54 = (void**)t31;
  void* v55 = *((void**)v54);
  unsigned char* cast56 = (unsigned char*)v55;
  long c57 = -24;
  unsigned char* ptr58 = &(cast56)[c57];
  long* cast59 = (long*)ptr58;
  long t60 = *cast59;
  unsigned char* cast61 = (unsigned char*)t31;
  unsigned char* ptr62 = &(cast61)[t60];
  struct std__basic_istream_char__std__char_traits_char__* cast63 = (struct std__basic_istream_char__std__char_traits_char__*)ptr62;
  struct std__basic_ios_char__std__char_traits_char__* cast64 = (struct std__basic_ios_char__std__char_traits_char__*)cast63;
  struct std__basic_streambuf_char__std__char_traits_char__* t65 = __sb30;
  std__basic_ios_char__std__char_traits_char_____init(cast64, t65);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSoC2EPSt15basic_streambufIcSt11char_traitsIcEE
void std__basic_ostream_char__std__char_traits_char_____basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* v66, void** v67, struct std__basic_streambuf_char__std__char_traits_char__* v68) {
bb69:
  struct std__basic_ostream_char__std__char_traits_char__* this70;
  void** vtt71;
  struct std__basic_streambuf_char__std__char_traits_char__* __sb72;
  this70 = v66;
  vtt71 = v67;
  __sb72 = v68;
  struct std__basic_ostream_char__std__char_traits_char__* t73 = this70;
  void** t74 = vtt71;
  static void *vtt_slot75 = 0;
  void** vtt76 = (void**)&vtt_slot75;
  void** cast77 = (void**)vtt76;
  void* t78 = *cast77;
  void** v79 = (void**)t73;
  *(void**)(v79) = (void*)t78;
  static void *vtt_slot80 = 0;
  void** vtt81 = (void**)&vtt_slot80;
  void** cast82 = (void**)vtt81;
  void* t83 = *cast82;
  void** v84 = (void**)t73;
  void* v85 = *((void**)v84);
  unsigned char* cast86 = (unsigned char*)v85;
  long c87 = -24;
  unsigned char* ptr88 = &(cast86)[c87];
  long* cast89 = (long*)ptr88;
  long t90 = *cast89;
  unsigned char* cast91 = (unsigned char*)t73;
  unsigned char* ptr92 = &(cast91)[t90];
  struct std__basic_ostream_char__std__char_traits_char__* cast93 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr92;
  void** v94 = (void**)cast93;
  *(void**)(v94) = (void*)t83;
  void** v95 = (void**)t73;
  void* v96 = *((void**)v95);
  unsigned char* cast97 = (unsigned char*)v96;
  long c98 = -24;
  unsigned char* ptr99 = &(cast97)[c98];
  long* cast100 = (long*)ptr99;
  long t101 = *cast100;
  unsigned char* cast102 = (unsigned char*)t73;
  unsigned char* ptr103 = &(cast102)[t101];
  struct std__basic_ostream_char__std__char_traits_char__* cast104 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr103;
  struct std__basic_ios_char__std__char_traits_char__* cast105 = (struct std__basic_ios_char__std__char_traits_char__*)cast104;
  struct std__basic_streambuf_char__std__char_traits_char__* t106 = __sb72;
  std__basic_ios_char__std__char_traits_char_____init(cast105, t106);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSoD2Ev
void std__basic_ostream_char__std__char_traits_char______basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* v107, void** v108) {
bb109:
  struct std__basic_ostream_char__std__char_traits_char__* this110;
  void** vtt111;
  this110 = v107;
  vtt111 = v108;
  struct std__basic_ostream_char__std__char_traits_char__* t112 = this110;
  void** t113 = vtt111;
  return;
}

// function: _ZNSiD2Ev
void std__basic_istream_char__std__char_traits_char______basic_istream(struct std__basic_istream_char__std__char_traits_char__* v114, void** v115) {
bb116:
  struct std__basic_istream_char__std__char_traits_char__* this117;
  void** vtt118;
  this117 = v114;
  vtt118 = v115;
  struct std__basic_istream_char__std__char_traits_char__* t119 = this117;
  void** t120 = vtt118;
  long c121 = 0;
  t119->_M_gcount = c121;
  return;
}

// function: _ZNSdC2EPSt15basic_streambufIcSt11char_traitsIcEE
void std__basic_iostream_char__std__char_traits_char_____basic_iostream(struct std__basic_iostream_char__std__char_traits_char__* v122, void** v123, struct std__basic_streambuf_char__std__char_traits_char__* v124) {
bb125:
  struct std__basic_iostream_char__std__char_traits_char__* this126;
  void** vtt127;
  struct std__basic_streambuf_char__std__char_traits_char__* __sb128;
  this126 = v122;
  vtt127 = v123;
  __sb128 = v124;
  struct std__basic_iostream_char__std__char_traits_char__* t129 = this126;
  void** t130 = vtt127;
  struct std__basic_istream_char__std__char_traits_char__* base131 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t129 + 0);
  struct std__basic_streambuf_char__std__char_traits_char__* t132 = __sb128;
  static void *vtt_slot133 = 0;
  void** vtt134 = (void**)&vtt_slot133;
  std__basic_istream_char__std__char_traits_char_____basic_istream(base131, vtt134, t132);
  if (__cir_exc_active) {
    return;
  }
    struct std__basic_ostream_char__std__char_traits_char__* base135 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t129 + 16);
    struct std__basic_streambuf_char__std__char_traits_char__* t136 = __sb128;
    static void *vtt_slot137 = 0;
    void** vtt138 = (void**)&vtt_slot137;
    std__basic_ostream_char__std__char_traits_char_____basic_ostream(base135, vtt138, t136);
    if (__cir_exc_active) {
      {
        struct std__basic_istream_char__std__char_traits_char__* base139 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t129 + 0);
        static void *vtt_slot140 = 0;
        void** vtt141 = (void**)&vtt_slot140;
        std__basic_istream_char__std__char_traits_char______basic_istream(base139, vtt141);
      }
      return;
    }
      static void *vtt_slot142 = 0;
      void** vtt143 = (void**)&vtt_slot142;
      void** cast144 = (void**)vtt143;
      void* t145 = *cast144;
      void** v146 = (void**)t129;
      *(void**)(v146) = (void*)t145;
      static void *vtt_slot147 = 0;
      void** vtt148 = (void**)&vtt_slot147;
      void** cast149 = (void**)vtt148;
      void* t150 = *cast149;
      void** v151 = (void**)t129;
      void* v152 = *((void**)v151);
      unsigned char* cast153 = (unsigned char*)v152;
      long c154 = -24;
      unsigned char* ptr155 = &(cast153)[c154];
      long* cast156 = (long*)ptr155;
      long t157 = *cast156;
      unsigned char* cast158 = (unsigned char*)t129;
      unsigned char* ptr159 = &(cast158)[t157];
      struct std__basic_iostream_char__std__char_traits_char__* cast160 = (struct std__basic_iostream_char__std__char_traits_char__*)ptr159;
      void** v161 = (void**)cast160;
      *(void**)(v161) = (void*)t150;
      static void *vtt_slot162 = 0;
      void** vtt163 = (void**)&vtt_slot162;
      void** cast164 = (void**)vtt163;
      void* t165 = *cast164;
      struct std__basic_ostream_char__std__char_traits_char__* base166 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t129 + 16);
      void** v167 = (void**)base166;
      *(void**)(v167) = (void*)t165;
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v168, int v169) {
bb170:
  int __a171;
  int __b172;
  int __retval173;
  __a171 = v168;
  __b172 = v169;
  int t174 = __a171;
  int t175 = __b172;
  int b176 = t174 | t175;
  __retval173 = b176;
  int t177 = __retval173;
  return t177;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v178) {
bb179:
  struct std__basic_ios_char__std__char_traits_char__* this180;
  int __retval181;
  this180 = v178;
  struct std__basic_ios_char__std__char_traits_char__* t182 = this180;
  struct std__ios_base* base183 = (struct std__ios_base*)((char *)t182 + 0);
  int t184 = base183->_M_streambuf_state;
  __retval181 = t184;
  int t185 = __retval181;
  return t185;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v186, int v187) {
bb188:
  struct std__basic_ios_char__std__char_traits_char__* this189;
  int __state190;
  this189 = v186;
  __state190 = v187;
  struct std__basic_ios_char__std__char_traits_char__* t191 = this189;
  int r192 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t191);
  if (__cir_exc_active) {
    return;
  }
  int t193 = __state190;
  int r194 = std__operator_(r192, t193);
  std__basic_ios_char__std__char_traits_char_____clear(t191, r194);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt13basic_fstreamIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode
void std__basic_fstream_char__std__char_traits_char_____open(struct std__basic_fstream_char__std__char_traits_char__* v195, char* v196, int v197) {
bb198:
  struct std__basic_fstream_char__std__char_traits_char__* this199;
  char* __s200;
  int __mode201;
  this199 = v195;
  __s200 = v196;
  __mode201 = v197;
  struct std__basic_fstream_char__std__char_traits_char__* t202 = this199;
    char* t203 = __s200;
    int t204 = __mode201;
    struct std__basic_filebuf_char__std__char_traits_char__* r205 = std__basic_filebuf_char__std__char_traits_char_____open(&t202->_M_filebuf, t203, t204);
    if (__cir_exc_active) {
      return;
    }
    _Bool cast206 = (_Bool)r205;
    _Bool u207 = !cast206;
    if (u207) {
      void** v208 = (void**)t202;
      void* v209 = *((void**)v208);
      unsigned char* cast210 = (unsigned char*)v209;
      long c211 = -24;
      unsigned char* ptr212 = &(cast210)[c211];
      long* cast213 = (long*)ptr212;
      long t214 = *cast213;
      unsigned char* cast215 = (unsigned char*)t202;
      unsigned char* ptr216 = &(cast215)[t214];
      struct std__basic_fstream_char__std__char_traits_char__* cast217 = (struct std__basic_fstream_char__std__char_traits_char__*)ptr216;
      struct std__basic_ios_char__std__char_traits_char__* cast218 = (struct std__basic_ios_char__std__char_traits_char__*)cast217;
      int t219 = _ZNSt8ios_base7failbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast218, t219);
      if (__cir_exc_active) {
        return;
      }
    } else {
      void** v220 = (void**)t202;
      void* v221 = *((void**)v220);
      unsigned char* cast222 = (unsigned char*)v221;
      long c223 = -24;
      unsigned char* ptr224 = &(cast222)[c223];
      long* cast225 = (long*)ptr224;
      long t226 = *cast225;
      unsigned char* cast227 = (unsigned char*)t202;
      unsigned char* ptr228 = &(cast227)[t226];
      struct std__basic_fstream_char__std__char_traits_char__* cast229 = (struct std__basic_fstream_char__std__char_traits_char__*)ptr228;
      struct std__basic_ios_char__std__char_traits_char__* cast230 = (struct std__basic_ios_char__std__char_traits_char__*)cast229;
      int t231 = _ZNSt8ios_base7goodbitE_const;
      std__basic_ios_char__std__char_traits_char_____clear(cast230, t231);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt13basic_filebufIcSt11char_traitsIcEED2Ev
void std__basic_filebuf_char__std__char_traits_char______basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* v232) {
bb233:
  struct std__basic_filebuf_char__std__char_traits_char__* this234;
  this234 = v232;
  struct std__basic_filebuf_char__std__char_traits_char__* t235 = this234;
          struct std__basic_filebuf_char__std__char_traits_char__* r237 = std__basic_filebuf_char__std__char_traits_char_____close(t235);
          if (__cir_exc_active) {
            {
              std____basic_file_char______basic_file(&t235->_M_file);
            }
            {
              struct std__basic_streambuf_char__std__char_traits_char__* base238 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t235 + 0);
              std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base238);
            }
            goto cir_try_dispatch236;
          }
        cir_try_dispatch236: ;
        if (__cir_exc_active) {
        {
          int ca_tok239 = 0;
          void* ca_exn240 = (void*)__cir_exc_ptr;
          __cir_exc_active = 0;
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
        }
        }
    {
      std____basic_file_char______basic_file(&t235->_M_file);
    }
  {
    struct std__basic_streambuf_char__std__char_traits_char__* base241 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t235 + 0);
    std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base241);
  }
  return;
}

// function: _ZNSdD2Ev
void std__basic_iostream_char__std__char_traits_char______basic_iostream(struct std__basic_iostream_char__std__char_traits_char__* v242, void** v243) {
bb244:
  struct std__basic_iostream_char__std__char_traits_char__* this245;
  void** vtt246;
  this245 = v242;
  vtt246 = v243;
  struct std__basic_iostream_char__std__char_traits_char__* t247 = this245;
  void** t248 = vtt246;
    {
      struct std__basic_ostream_char__std__char_traits_char__* base249 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t247 + 16);
      static void *vtt_slot250 = 0;
      void** vtt251 = (void**)&vtt_slot250;
      std__basic_ostream_char__std__char_traits_char______basic_ostream(base249, vtt251);
    }
  {
    struct std__basic_istream_char__std__char_traits_char__* base252 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t247 + 0);
    static void *vtt_slot253 = 0;
    void** vtt254 = (void**)&vtt_slot253;
    std__basic_istream_char__std__char_traits_char______basic_istream(base252, vtt254);
  }
  return;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEED2Ev
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* v255) {
bb256:
  struct std__basic_ios_char__std__char_traits_char__* this257;
  this257 = v255;
  struct std__basic_ios_char__std__char_traits_char__* t258 = this257;
  {
    struct std__ios_base* base259 = (struct std__ios_base*)((char *)t258 + 0);
    std__ios_base___ios_base(base259);
  }
  return;
}

// function: _ZNSt13basic_fstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode
void std__basic_fstream_char__std__char_traits_char_____basic_fstream(struct std__basic_fstream_char__std__char_traits_char__* v260, char* v261, int v262) {
bb263:
  struct std__basic_fstream_char__std__char_traits_char__* this264;
  char* __s265;
  int __mode266;
  this264 = v260;
  __s265 = v261;
  __mode266 = v262;
  struct std__basic_fstream_char__std__char_traits_char__* t267 = this264;
  struct std__basic_ios_char__std__char_traits_char__* base268 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t267 + 264);
  std__basic_ios_char__std__char_traits_char_____basic_ios(base268);
  if (__cir_exc_active) {
    return;
  }
    struct std__basic_iostream_char__std__char_traits_char__* base269 = (struct std__basic_iostream_char__std__char_traits_char__*)((char *)t267 + 0);
    struct std__basic_streambuf_char__std__char_traits_char__* c270 = ((void*)0);
    static void *vtt_slot271 = 0;
    void** vtt272 = (void**)&vtt_slot271;
    std__basic_iostream_char__std__char_traits_char_____basic_iostream(base269, vtt272, c270);
    if (__cir_exc_active) {
      {
        struct std__basic_ios_char__std__char_traits_char__* base273 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t267 + 264);
        std__basic_ios_char__std__char_traits_char______basic_ios(base273);
      }
      return;
    }
      void* v274 = (void*)&_ZTVSt13basic_fstreamIcSt11char_traitsIcEE[3];
      void** v275 = (void**)t267;
      *(void**)(v275) = (void*)v274;
      void* v276 = (void*)&_ZTVSt13basic_fstreamIcSt11char_traitsIcEE[3];
      struct std__basic_ios_char__std__char_traits_char__* base277 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t267 + 264);
      void** v278 = (void**)base277;
      *(void**)(v278) = (void*)v276;
      void* v279 = (void*)&_ZTVSt13basic_fstreamIcSt11char_traitsIcEE[3];
      struct std__basic_ostream_char__std__char_traits_char__* base280 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t267 + 16);
      void** v281 = (void**)base280;
      *(void**)(v281) = (void*)v279;
      std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(&t267->_M_filebuf);
      if (__cir_exc_active) {
        {
          struct std__basic_iostream_char__std__char_traits_char__* base282 = (struct std__basic_iostream_char__std__char_traits_char__*)((char *)t267 + 0);
          static void *vtt_slot283 = 0;
          void** vtt284 = (void**)&vtt_slot283;
          std__basic_iostream_char__std__char_traits_char______basic_iostream(base282, vtt284);
        }
        {
          struct std__basic_ios_char__std__char_traits_char__* base285 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t267 + 264);
          std__basic_ios_char__std__char_traits_char______basic_ios(base285);
        }
        return;
      }
        void** v286 = (void**)t267;
        void* v287 = *((void**)v286);
        unsigned char* cast288 = (unsigned char*)v287;
        long c289 = -24;
        unsigned char* ptr290 = &(cast288)[c289];
        long* cast291 = (long*)ptr290;
        long t292 = *cast291;
        unsigned char* cast293 = (unsigned char*)t267;
        unsigned char* ptr294 = &(cast293)[t292];
        struct std__basic_fstream_char__std__char_traits_char__* cast295 = (struct std__basic_fstream_char__std__char_traits_char__*)ptr294;
        struct std__basic_ios_char__std__char_traits_char__* cast296 = (struct std__basic_ios_char__std__char_traits_char__*)cast295;
        struct std__basic_streambuf_char__std__char_traits_char__* base297 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)&(t267->_M_filebuf) + 0);
        std__basic_ios_char__std__char_traits_char_____init(cast296, base297);
        if (__cir_exc_active) {
          {
            std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t267->_M_filebuf);
          }
          {
            struct std__basic_iostream_char__std__char_traits_char__* base298 = (struct std__basic_iostream_char__std__char_traits_char__*)((char *)t267 + 0);
            static void *vtt_slot299 = 0;
            void** vtt300 = (void**)&vtt_slot299;
            std__basic_iostream_char__std__char_traits_char______basic_iostream(base298, vtt300);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base301 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t267 + 264);
            std__basic_ios_char__std__char_traits_char______basic_ios(base301);
          }
          return;
        }
        char* t302 = __s265;
        int t303 = __mode266;
        std__basic_fstream_char__std__char_traits_char_____open(t267, t302, t303);
        if (__cir_exc_active) {
          {
            std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t267->_M_filebuf);
          }
          {
            struct std__basic_iostream_char__std__char_traits_char__* base304 = (struct std__basic_iostream_char__std__char_traits_char__*)((char *)t267 + 0);
            static void *vtt_slot305 = 0;
            void** vtt306 = (void**)&vtt_slot305;
            std__basic_iostream_char__std__char_traits_char______basic_iostream(base304, vtt306);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base307 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t267 + 264);
            std__basic_ios_char__std__char_traits_char______basic_ios(base307);
          }
          return;
        }
  return;
}

// function: _ZNKSt13basic_filebufIcSt11char_traitsIcEE7is_openEv
_Bool std__basic_filebuf_char__std__char_traits_char_____is_open___const(struct std__basic_filebuf_char__std__char_traits_char__* v308) {
bb309:
  struct std__basic_filebuf_char__std__char_traits_char__* this310;
  _Bool __retval311;
  this310 = v308;
  struct std__basic_filebuf_char__std__char_traits_char__* t312 = this310;
  _Bool r313 = std____basic_file_char___is_open___const(&t312->_M_file);
  __retval311 = r313;
  _Bool t314 = __retval311;
  return t314;
}

// function: _ZNSt13basic_fstreamIcSt11char_traitsIcEE7is_openEv
_Bool std__basic_fstream_char__std__char_traits_char_____is_open(struct std__basic_fstream_char__std__char_traits_char__* v315) {
bb316:
  struct std__basic_fstream_char__std__char_traits_char__* this317;
  _Bool __retval318;
  this317 = v315;
  struct std__basic_fstream_char__std__char_traits_char__* t319 = this317;
  _Bool r320 = std__basic_filebuf_char__std__char_traits_char_____is_open___const(&t319->_M_filebuf);
  __retval318 = r320;
  _Bool t321 = __retval318;
  return t321;
}

// function: _ZNSt13basic_fstreamIcSt11char_traitsIcEE5closeEv
void std__basic_fstream_char__std__char_traits_char_____close(struct std__basic_fstream_char__std__char_traits_char__* v322) {
bb323:
  struct std__basic_fstream_char__std__char_traits_char__* this324;
  this324 = v322;
  struct std__basic_fstream_char__std__char_traits_char__* t325 = this324;
    struct std__basic_filebuf_char__std__char_traits_char__* r326 = std__basic_filebuf_char__std__char_traits_char_____close(&t325->_M_filebuf);
    if (__cir_exc_active) {
      return;
    }
    _Bool cast327 = (_Bool)r326;
    _Bool u328 = !cast327;
    if (u328) {
      void** v329 = (void**)t325;
      void* v330 = *((void**)v329);
      unsigned char* cast331 = (unsigned char*)v330;
      long c332 = -24;
      unsigned char* ptr333 = &(cast331)[c332];
      long* cast334 = (long*)ptr333;
      long t335 = *cast334;
      unsigned char* cast336 = (unsigned char*)t325;
      unsigned char* ptr337 = &(cast336)[t335];
      struct std__basic_fstream_char__std__char_traits_char__* cast338 = (struct std__basic_fstream_char__std__char_traits_char__*)ptr337;
      struct std__basic_ios_char__std__char_traits_char__* cast339 = (struct std__basic_ios_char__std__char_traits_char__*)cast338;
      int t340 = _ZNSt8ios_base7failbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast339, t340);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt13basic_fstreamIcSt11char_traitsIcEED2Ev
void std__basic_fstream_char__std__char_traits_char______basic_fstream_2(struct std__basic_fstream_char__std__char_traits_char__* v341, void** v342) {
bb343:
  struct std__basic_fstream_char__std__char_traits_char__* this344;
  void** vtt345;
  this344 = v341;
  vtt345 = v342;
  struct std__basic_fstream_char__std__char_traits_char__* t346 = this344;
  void** t347 = vtt345;
    {
      std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t346->_M_filebuf);
    }
  {
    struct std__basic_iostream_char__std__char_traits_char__* base348 = (struct std__basic_iostream_char__std__char_traits_char__*)((char *)t346 + 0);
    static void *vtt_slot349 = 0;
    void** vtt350 = (void**)&vtt_slot349;
    std__basic_iostream_char__std__char_traits_char______basic_iostream(base348, vtt350);
  }
  return;
}

// function: _ZNSt13basic_fstreamIcSt11char_traitsIcEED1Ev
void std__basic_fstream_char__std__char_traits_char______basic_fstream(struct std__basic_fstream_char__std__char_traits_char__* v351) {
bb352:
  struct std__basic_fstream_char__std__char_traits_char__* this353;
  this353 = v351;
  struct std__basic_fstream_char__std__char_traits_char__* t354 = this353;
    static void *vtt_slot355 = 0;
    void** vtt356 = (void**)&vtt_slot355;
    std__basic_fstream_char__std__char_traits_char______basic_fstream_2(t354, vtt356);
  {
    struct std__basic_ios_char__std__char_traits_char__* base357 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t354 + 264);
    std__basic_ios_char__std__char_traits_char______basic_ios(base357);
  }
  return;
}

// function: main
int main() {
bb358:
  int __retval359;
  struct std__basic_fstream_char__std__char_traits_char__ filestr360;
  int c361 = 0;
  __retval359 = c361;
  char* cast362 = (char*)&(_str);
  int t363 = _ZNSt8ios_base2inE_const;
  int t364 = _ZNSt8ios_base3outE_const;
  int r365 = std__operator__2(t363, t364);
  std__basic_fstream_char__std__char_traits_char_____basic_fstream(&filestr360, cast362, r365);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    _Bool r366 = std__basic_fstream_char__std__char_traits_char_____is_open(&filestr360);
    if (__cir_exc_active) {
      {
        std__basic_fstream_char__std__char_traits_char______basic_fstream(&filestr360);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    if (r366) {
    } else {
      char* cast367 = (char*)&(_str_1);
      char* c368 = _str_2;
      unsigned int c369 = 18;
      char* cast370 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast367, c368, c369, cast370);
    }
    std__basic_fstream_char__std__char_traits_char_____close(&filestr360);
    if (__cir_exc_active) {
      {
        std__basic_fstream_char__std__char_traits_char______basic_fstream(&filestr360);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c371 = 0;
    __retval359 = c371;
    int t372 = __retval359;
    int ret_val373 = t372;
    {
      std__basic_fstream_char__std__char_traits_char______basic_fstream(&filestr360);
    }
    return ret_val373;
  int t374 = __retval359;
  return t374;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v375) {
bb376:
  struct std__basic_streambuf_char__std__char_traits_char__* this377;
  this377 = v375;
  struct std__basic_streambuf_char__std__char_traits_char__* t378 = this377;
  {
    std__locale___locale(&t378->_M_buf_locale);
  }
  return;
}

