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
struct std__fpos___mbstate_t_ { long _M_off; struct __mbstate_t _M_state; };
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
int _ZNSt8ios_base3outE_const __attribute__((aligned(4))) = 16;
int _ZNSt8ios_base7goodbitE_const __attribute__((aligned(4))) = 0;
int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base2inE_const __attribute__((aligned(4))) = 8;
unsigned int _ZNSt8ios_base3endE_const __attribute__((aligned(4))) = 2;
int _ZNSt8ios_base6binaryE_const __attribute__((aligned(4))) = 4;
char _str[5] = "test";
char _str_1[4] = "new";
char _str_2[17] = "infile.is_open()";
char _str_3[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stream/ostream_write_1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[18] = "outfile.is_open()";
char _str_5[20] = "!(infile.is_open())";
char _str_6[21] = "!(outfile.is_open())";
extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void *_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[];
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
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
void std__basic_ifstream_char__std__char_traits_char_____open(struct std__basic_ifstream_char__std__char_traits_char__* p0, char* p1, int p2);
void std__basic_filebuf_char__std__char_traits_char______basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* p0);
void std__basic_istream_char__std__char_traits_char______basic_istream(struct std__basic_istream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* p0, char* p1, int p2);
void std__basic_ostream_char__std__char_traits_char_____basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ofstream_char__std__char_traits_char_____open(struct std__basic_ofstream_char__std__char_traits_char__* p0, char* p1, int p2);
void std__basic_ostream_char__std__char_traits_char______basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ofstream_char__std__char_traits_char_____basic_ofstream(struct std__basic_ofstream_char__std__char_traits_char__* p0, char* p1, int p2);
extern _Bool std____basic_file_char___is_open___const(struct std____basic_file_char_* p0);
_Bool std__basic_filebuf_char__std__char_traits_char_____is_open___const(struct std__basic_filebuf_char__std__char_traits_char__* p0);
_Bool std__basic_ifstream_char__std__char_traits_char_____is_open(struct std__basic_ifstream_char__std__char_traits_char__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
_Bool std__basic_ofstream_char__std__char_traits_char_____is_open(struct std__basic_ofstream_char__std__char_traits_char__* p0);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__seekg_2(struct std__basic_istream_char__std__char_traits_char__* p0, long p1, unsigned int p2);
extern struct std__fpos___mbstate_t_ std__istream__tellg(struct std__basic_istream_char__std__char_traits_char__* p0);
long std__fpos___mbstate_t___operator_long___const(struct std__fpos___mbstate_t_* p0);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__seekg(struct std__basic_istream_char__std__char_traits_char__* p0, struct std__fpos___mbstate_t_ p1);
void std__fpos___mbstate_t___fpos(struct std__fpos___mbstate_t_* p0, long p1);
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new__(unsigned long p0) { return malloc(p0); }
void operator_delete___2(void* p0, unsigned long p1) { free(p0); }
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__read(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1, long p2);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__write(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
void operator_delete__(void* p0) { free(p0); }
void std__basic_ofstream_char__std__char_traits_char_____close(struct std__basic_ofstream_char__std__char_traits_char__* p0);
void std__basic_ifstream_char__std__char_traits_char_____close(struct std__basic_ifstream_char__std__char_traits_char__* p0);
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream_2(struct std__basic_ofstream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream(struct std__basic_ofstream_char__std__char_traits_char__* p0);
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream_2(struct std__basic_ifstream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* p0);
int main();
extern int __gxx_personality_v0();
extern struct std__basic_filebuf_char__std__char_traits_char__* std__basic_filebuf_char__std__char_traits_char_____close(struct std__basic_filebuf_char__std__char_traits_char__* p0);
void std____basic_file_char______basic_file(struct std____basic_file_char_* p0) {}
void std__locale___locale(struct std__locale* p0) {}
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* p0);

extern unsigned char* _ZTTSt14basic_ifstreamIcSt11char_traitsIcEE[4] __attribute__((aligned(8)));
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

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode
void std__basic_ofstream_char__std__char_traits_char_____open(struct std__basic_ofstream_char__std__char_traits_char__* v236, char* v237, int v238) {
bb239:
  struct std__basic_ofstream_char__std__char_traits_char__* this240;
  char* __s241;
  int __mode242;
  this240 = v236;
  __s241 = v237;
  __mode242 = v238;
  struct std__basic_ofstream_char__std__char_traits_char__* t243 = this240;
    char* t244 = __s241;
    int t245 = __mode242;
    int t246 = _ZNSt8ios_base3outE_const;
    int r247 = std__operator__2(t245, t246);
    struct std__basic_filebuf_char__std__char_traits_char__* r248 = std__basic_filebuf_char__std__char_traits_char_____open(&t243->_M_filebuf, t244, r247);
    if (__cir_exc_active) {
      return;
    }
    _Bool cast249 = (_Bool)r248;
    _Bool u250 = !cast249;
    if (u250) {
      void** v251 = (void**)t243;
      void* v252 = *((void**)v251);
      unsigned char* cast253 = (unsigned char*)v252;
      long c254 = -24;
      unsigned char* ptr255 = &(cast253)[c254];
      long* cast256 = (long*)ptr255;
      long t257 = *cast256;
      unsigned char* cast258 = (unsigned char*)t243;
      unsigned char* ptr259 = &(cast258)[t257];
      struct std__basic_ofstream_char__std__char_traits_char__* cast260 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr259;
      struct std__basic_ios_char__std__char_traits_char__* cast261 = (struct std__basic_ios_char__std__char_traits_char__*)cast260;
      int t262 = _ZNSt8ios_base7failbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast261, t262);
      if (__cir_exc_active) {
        return;
      }
    } else {
      void** v263 = (void**)t243;
      void* v264 = *((void**)v263);
      unsigned char* cast265 = (unsigned char*)v264;
      long c266 = -24;
      unsigned char* ptr267 = &(cast265)[c266];
      long* cast268 = (long*)ptr267;
      long t269 = *cast268;
      unsigned char* cast270 = (unsigned char*)t243;
      unsigned char* ptr271 = &(cast270)[t269];
      struct std__basic_ofstream_char__std__char_traits_char__* cast272 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr271;
      struct std__basic_ios_char__std__char_traits_char__* cast273 = (struct std__basic_ios_char__std__char_traits_char__*)cast272;
      int t274 = _ZNSt8ios_base7goodbitE_const;
      std__basic_ios_char__std__char_traits_char_____clear(cast273, t274);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSoD2Ev
void std__basic_ostream_char__std__char_traits_char______basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* v275, void** v276) {
bb277:
  struct std__basic_ostream_char__std__char_traits_char__* this278;
  void** vtt279;
  this278 = v275;
  vtt279 = v276;
  struct std__basic_ostream_char__std__char_traits_char__* t280 = this278;
  void** t281 = vtt279;
  return;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode
void std__basic_ofstream_char__std__char_traits_char_____basic_ofstream(struct std__basic_ofstream_char__std__char_traits_char__* v282, char* v283, int v284) {
bb285:
  struct std__basic_ofstream_char__std__char_traits_char__* this286;
  char* __s287;
  int __mode288;
  this286 = v282;
  __s287 = v283;
  __mode288 = v284;
  struct std__basic_ofstream_char__std__char_traits_char__* t289 = this286;
  struct std__basic_ios_char__std__char_traits_char__* base290 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t289 + 248);
  std__basic_ios_char__std__char_traits_char_____basic_ios(base290);
  if (__cir_exc_active) {
    return;
  }
    struct std__basic_ostream_char__std__char_traits_char__* base291 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t289 + 0);
    static void *vtt_slot292 = 0;
    void** vtt293 = (void**)&vtt_slot292;
    std__basic_ostream_char__std__char_traits_char_____basic_ostream(base291, vtt293);
    if (__cir_exc_active) {
      {
        struct std__basic_ios_char__std__char_traits_char__* base294 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t289 + 248);
        std__basic_ios_char__std__char_traits_char______basic_ios(base294);
      }
      return;
    }
      void* v295 = (void*)&_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[3];
      void** v296 = (void**)t289;
      *(void**)(v296) = (void*)v295;
      void* v297 = (void*)&_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[3];
      struct std__basic_ios_char__std__char_traits_char__* base298 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t289 + 248);
      void** v299 = (void**)base298;
      *(void**)(v299) = (void*)v297;
      std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(&t289->_M_filebuf);
      if (__cir_exc_active) {
        {
          struct std__basic_ostream_char__std__char_traits_char__* base300 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t289 + 0);
          static void *vtt_slot301 = 0;
          void** vtt302 = (void**)&vtt_slot301;
          std__basic_ostream_char__std__char_traits_char______basic_ostream(base300, vtt302);
        }
        {
          struct std__basic_ios_char__std__char_traits_char__* base303 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t289 + 248);
          std__basic_ios_char__std__char_traits_char______basic_ios(base303);
        }
        return;
      }
        void** v304 = (void**)t289;
        void* v305 = *((void**)v304);
        unsigned char* cast306 = (unsigned char*)v305;
        long c307 = -24;
        unsigned char* ptr308 = &(cast306)[c307];
        long* cast309 = (long*)ptr308;
        long t310 = *cast309;
        unsigned char* cast311 = (unsigned char*)t289;
        unsigned char* ptr312 = &(cast311)[t310];
        struct std__basic_ofstream_char__std__char_traits_char__* cast313 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr312;
        struct std__basic_ios_char__std__char_traits_char__* cast314 = (struct std__basic_ios_char__std__char_traits_char__*)cast313;
        struct std__basic_streambuf_char__std__char_traits_char__* base315 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)&(t289->_M_filebuf) + 0);
        std__basic_ios_char__std__char_traits_char_____init(cast314, base315);
        if (__cir_exc_active) {
          {
            std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t289->_M_filebuf);
          }
          {
            struct std__basic_ostream_char__std__char_traits_char__* base316 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t289 + 0);
            static void *vtt_slot317 = 0;
            void** vtt318 = (void**)&vtt_slot317;
            std__basic_ostream_char__std__char_traits_char______basic_ostream(base316, vtt318);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base319 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t289 + 248);
            std__basic_ios_char__std__char_traits_char______basic_ios(base319);
          }
          return;
        }
        char* t320 = __s287;
        int t321 = __mode288;
        std__basic_ofstream_char__std__char_traits_char_____open(t289, t320, t321);
        if (__cir_exc_active) {
          {
            std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t289->_M_filebuf);
          }
          {
            struct std__basic_ostream_char__std__char_traits_char__* base322 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t289 + 0);
            static void *vtt_slot323 = 0;
            void** vtt324 = (void**)&vtt_slot323;
            std__basic_ostream_char__std__char_traits_char______basic_ostream(base322, vtt324);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base325 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t289 + 248);
            std__basic_ios_char__std__char_traits_char______basic_ios(base325);
          }
          return;
        }
  return;
}

// function: _ZNKSt13basic_filebufIcSt11char_traitsIcEE7is_openEv
_Bool std__basic_filebuf_char__std__char_traits_char_____is_open___const(struct std__basic_filebuf_char__std__char_traits_char__* v326) {
bb327:
  struct std__basic_filebuf_char__std__char_traits_char__* this328;
  _Bool __retval329;
  this328 = v326;
  struct std__basic_filebuf_char__std__char_traits_char__* t330 = this328;
  _Bool r331 = std____basic_file_char___is_open___const(&t330->_M_file);
  __retval329 = r331;
  _Bool t332 = __retval329;
  return t332;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEE7is_openEv
_Bool std__basic_ifstream_char__std__char_traits_char_____is_open(struct std__basic_ifstream_char__std__char_traits_char__* v333) {
bb334:
  struct std__basic_ifstream_char__std__char_traits_char__* this335;
  _Bool __retval336;
  this335 = v333;
  struct std__basic_ifstream_char__std__char_traits_char__* t337 = this335;
  _Bool r338 = std__basic_filebuf_char__std__char_traits_char_____is_open___const(&t337->_M_filebuf);
  __retval336 = r338;
  _Bool t339 = __retval336;
  return t339;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEE7is_openEv
_Bool std__basic_ofstream_char__std__char_traits_char_____is_open(struct std__basic_ofstream_char__std__char_traits_char__* v340) {
bb341:
  struct std__basic_ofstream_char__std__char_traits_char__* this342;
  _Bool __retval343;
  this342 = v340;
  struct std__basic_ofstream_char__std__char_traits_char__* t344 = this342;
  _Bool r345 = std__basic_filebuf_char__std__char_traits_char_____is_open___const(&t344->_M_filebuf);
  __retval343 = r345;
  _Bool t346 = __retval343;
  return t346;
}

// function: _ZNKSt4fposI11__mbstate_tEcvlEv
long std__fpos___mbstate_t___operator_long___const(struct std__fpos___mbstate_t_* v347) {
bb348:
  struct std__fpos___mbstate_t_* this349;
  long __retval350;
  this349 = v347;
  struct std__fpos___mbstate_t_* t351 = this349;
  long t352 = t351->_M_off;
  __retval350 = t352;
  long t353 = __retval350;
  return t353;
}

// function: _ZNSt4fposI11__mbstate_tEC2El
void std__fpos___mbstate_t___fpos(struct std__fpos___mbstate_t_* v354, long v355) {
bb356:
  struct std__fpos___mbstate_t_* this357;
  long __off358;
  this357 = v354;
  __off358 = v355;
  struct std__fpos___mbstate_t_* t359 = this357;
  long t360 = __off358;
  t359->_M_off = t360;
  struct __mbstate_t c361 = {0};
  t359->_M_state = c361;
  return;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEE5closeEv
void std__basic_ofstream_char__std__char_traits_char_____close(struct std__basic_ofstream_char__std__char_traits_char__* v362) {
bb363:
  struct std__basic_ofstream_char__std__char_traits_char__* this364;
  this364 = v362;
  struct std__basic_ofstream_char__std__char_traits_char__* t365 = this364;
    struct std__basic_filebuf_char__std__char_traits_char__* r366 = std__basic_filebuf_char__std__char_traits_char_____close(&t365->_M_filebuf);
    if (__cir_exc_active) {
      return;
    }
    _Bool cast367 = (_Bool)r366;
    _Bool u368 = !cast367;
    if (u368) {
      void** v369 = (void**)t365;
      void* v370 = *((void**)v369);
      unsigned char* cast371 = (unsigned char*)v370;
      long c372 = -24;
      unsigned char* ptr373 = &(cast371)[c372];
      long* cast374 = (long*)ptr373;
      long t375 = *cast374;
      unsigned char* cast376 = (unsigned char*)t365;
      unsigned char* ptr377 = &(cast376)[t375];
      struct std__basic_ofstream_char__std__char_traits_char__* cast378 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr377;
      struct std__basic_ios_char__std__char_traits_char__* cast379 = (struct std__basic_ios_char__std__char_traits_char__*)cast378;
      int t380 = _ZNSt8ios_base7failbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast379, t380);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEE5closeEv
void std__basic_ifstream_char__std__char_traits_char_____close(struct std__basic_ifstream_char__std__char_traits_char__* v381) {
bb382:
  struct std__basic_ifstream_char__std__char_traits_char__* this383;
  this383 = v381;
  struct std__basic_ifstream_char__std__char_traits_char__* t384 = this383;
    struct std__basic_filebuf_char__std__char_traits_char__* r385 = std__basic_filebuf_char__std__char_traits_char_____close(&t384->_M_filebuf);
    if (__cir_exc_active) {
      return;
    }
    _Bool cast386 = (_Bool)r385;
    _Bool u387 = !cast386;
    if (u387) {
      void** v388 = (void**)t384;
      void* v389 = *((void**)v388);
      unsigned char* cast390 = (unsigned char*)v389;
      long c391 = -24;
      unsigned char* ptr392 = &(cast390)[c391];
      long* cast393 = (long*)ptr392;
      long t394 = *cast393;
      unsigned char* cast395 = (unsigned char*)t384;
      unsigned char* ptr396 = &(cast395)[t394];
      struct std__basic_ifstream_char__std__char_traits_char__* cast397 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr396;
      struct std__basic_ios_char__std__char_traits_char__* cast398 = (struct std__basic_ios_char__std__char_traits_char__*)cast397;
      int t399 = _ZNSt8ios_base7failbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast398, t399);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEED2Ev
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream_2(struct std__basic_ofstream_char__std__char_traits_char__* v400, void** v401) {
bb402:
  struct std__basic_ofstream_char__std__char_traits_char__* this403;
  void** vtt404;
  this403 = v400;
  vtt404 = v401;
  struct std__basic_ofstream_char__std__char_traits_char__* t405 = this403;
  void** t406 = vtt404;
    {
      std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t405->_M_filebuf);
    }
  {
    struct std__basic_ostream_char__std__char_traits_char__* base407 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t405 + 0);
    static void *vtt_slot408 = 0;
    void** vtt409 = (void**)&vtt_slot408;
    std__basic_ostream_char__std__char_traits_char______basic_ostream(base407, vtt409);
  }
  return;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream(struct std__basic_ofstream_char__std__char_traits_char__* v410) {
bb411:
  struct std__basic_ofstream_char__std__char_traits_char__* this412;
  this412 = v410;
  struct std__basic_ofstream_char__std__char_traits_char__* t413 = this412;
    static void *vtt_slot414 = 0;
    void** vtt415 = (void**)&vtt_slot414;
    std__basic_ofstream_char__std__char_traits_char______basic_ofstream_2(t413, vtt415);
  {
    struct std__basic_ios_char__std__char_traits_char__* base416 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t413 + 248);
    std__basic_ios_char__std__char_traits_char______basic_ios(base416);
  }
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEED2Ev
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream_2(struct std__basic_ifstream_char__std__char_traits_char__* v417, void** v418) {
bb419:
  struct std__basic_ifstream_char__std__char_traits_char__* this420;
  void** vtt421;
  this420 = v417;
  vtt421 = v418;
  struct std__basic_ifstream_char__std__char_traits_char__* t422 = this420;
  void** t423 = vtt421;
    {
      std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t422->_M_filebuf);
    }
  {
    struct std__basic_istream_char__std__char_traits_char__* base424 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t422 + 0);
    static void *vtt_slot425 = 0;
    void** vtt426 = (void**)&vtt_slot425;
    std__basic_istream_char__std__char_traits_char______basic_istream(base424, vtt426);
  }
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* v427) {
bb428:
  struct std__basic_ifstream_char__std__char_traits_char__* this429;
  this429 = v427;
  struct std__basic_ifstream_char__std__char_traits_char__* t430 = this429;
    static void *vtt_slot431 = 0;
    void** vtt432 = (void**)&vtt_slot431;
    std__basic_ifstream_char__std__char_traits_char______basic_ifstream_2(t430, vtt432);
  {
    struct std__basic_ios_char__std__char_traits_char__* base433 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t430 + 256);
    std__basic_ios_char__std__char_traits_char______basic_ios(base433);
  }
  return;
}

// function: main
int main() {
bb434:
  int __retval435;
  char* buffer436;
  long size437;
  struct std__basic_ifstream_char__std__char_traits_char__ infile438;
  struct std__basic_ofstream_char__std__char_traits_char__ outfile439;
  struct std__fpos___mbstate_t_ ref_tmp0440;
  struct std__fpos___mbstate_t_ agg_tmp0441;
  char* __new_result442;
  int c443 = 0;
  __retval435 = c443;
  char* cast444 = (char*)&(_str);
  int t445 = _ZNSt8ios_base6binaryE_const;
  std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(&infile438, cast444, t445);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    char* cast446 = (char*)&(_str_1);
    int t447 = _ZNSt8ios_base6binaryE_const;
    std__basic_ofstream_char__std__char_traits_char_____basic_ofstream(&outfile439, cast446, t447);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&infile438);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      _Bool r448 = std__basic_ifstream_char__std__char_traits_char_____is_open(&infile438);
      if (__cir_exc_active) {
        {
          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outfile439);
        }
        {
          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&infile438);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      if (r448) {
      } else {
        char* cast449 = (char*)&(_str_2);
        char* c450 = _str_3;
        unsigned int c451 = 21;
        char* cast452 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast449, c450, c451, cast452);
      }
      _Bool r453 = std__basic_ofstream_char__std__char_traits_char_____is_open(&outfile439);
      if (__cir_exc_active) {
        {
          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outfile439);
        }
        {
          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&infile438);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      if (r453) {
      } else {
        char* cast454 = (char*)&(_str_4);
        char* c455 = _str_3;
        unsigned int c456 = 22;
        char* cast457 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast454, c455, c456, cast457);
      }
      struct std__basic_istream_char__std__char_traits_char__* base458 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(infile438) + 0);
      long c459 = 0;
      unsigned int t460 = _ZNSt8ios_base3endE_const;
      struct std__basic_istream_char__std__char_traits_char__* r461 = std__istream__seekg_2(base458, c459, t460);
      if (__cir_exc_active) {
        {
          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outfile439);
        }
        {
          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&infile438);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      struct std__basic_istream_char__std__char_traits_char__* base462 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(infile438) + 0);
      struct std__fpos___mbstate_t_ r463 = std__istream__tellg(base462);
      if (__cir_exc_active) {
        {
          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outfile439);
        }
        {
          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&infile438);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      ref_tmp0440 = r463;
      long r464 = std__fpos___mbstate_t___operator_long___const(&ref_tmp0440);
      if (__cir_exc_active) {
        {
          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outfile439);
        }
        {
          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&infile438);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      size437 = r464;
      struct std__basic_istream_char__std__char_traits_char__* base465 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(infile438) + 0);
      long c466 = 0;
      std__fpos___mbstate_t___fpos(&agg_tmp0441, c466);
      if (__cir_exc_active) {
        {
          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outfile439);
        }
        {
          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&infile438);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      struct std__fpos___mbstate_t_ t467 = agg_tmp0441;
      struct std__basic_istream_char__std__char_traits_char__* r468 = std__istream__seekg(base465, t467);
      if (__cir_exc_active) {
        {
          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outfile439);
        }
        {
          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&infile438);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      long t469 = size437;
      unsigned long cast470 = (unsigned long)t469;
      void* r471 = operator_new__(cast470);
      if (__cir_exc_active) {
        {
          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outfile439);
        }
        {
          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&infile438);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
        char* cast472 = (char*)r471;
        __new_result442 = cast472;
      char* t473 = __new_result442;
      buffer436 = t473;
      struct std__basic_istream_char__std__char_traits_char__* base474 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(infile438) + 0);
      char* t475 = buffer436;
      long t476 = size437;
      struct std__basic_istream_char__std__char_traits_char__* r477 = std__istream__read(base474, t475, t476);
      if (__cir_exc_active) {
        {
          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outfile439);
        }
        {
          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&infile438);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      struct std__basic_ostream_char__std__char_traits_char__* base478 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(outfile439) + 0);
      char* t479 = buffer436;
      long t480 = size437;
      struct std__basic_ostream_char__std__char_traits_char__* r481 = std__ostream__write(base478, t479, t480);
      if (__cir_exc_active) {
        {
          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outfile439);
        }
        {
          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&infile438);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      char* t482 = buffer436;
      char* c483 = ((void*)0);
      _Bool c484 = ((t482 != c483)) ? 1 : 0;
      if (c484) {
        void* cast485 = (void*)t482;
        {
          operator_delete__(cast485);
        }
      }
      std__basic_ofstream_char__std__char_traits_char_____close(&outfile439);
      if (__cir_exc_active) {
        {
          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outfile439);
        }
        {
          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&infile438);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      std__basic_ifstream_char__std__char_traits_char_____close(&infile438);
      if (__cir_exc_active) {
        {
          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outfile439);
        }
        {
          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&infile438);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      _Bool r486 = std__basic_ifstream_char__std__char_traits_char_____is_open(&infile438);
      if (__cir_exc_active) {
        {
          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outfile439);
        }
        {
          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&infile438);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      _Bool u487 = !r486;
      if (u487) {
      } else {
        char* cast488 = (char*)&(_str_5);
        char* c489 = _str_3;
        unsigned int c490 = 44;
        char* cast491 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast488, c489, c490, cast491);
      }
      _Bool r492 = std__basic_ofstream_char__std__char_traits_char_____is_open(&outfile439);
      if (__cir_exc_active) {
        {
          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outfile439);
        }
        {
          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&infile438);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      _Bool u493 = !r492;
      if (u493) {
      } else {
        char* cast494 = (char*)&(_str_6);
        char* c495 = _str_3;
        unsigned int c496 = 45;
        char* cast497 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast494, c495, c496, cast497);
      }
      int c498 = 0;
      __retval435 = c498;
      int t499 = __retval435;
      int ret_val500 = t499;
      {
        std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outfile439);
      }
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&infile438);
      }
      return ret_val500;
  int t501 = __retval435;
  return t501;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v502) {
bb503:
  struct std__basic_streambuf_char__std__char_traits_char__* this504;
  this504 = v502;
  struct std__basic_streambuf_char__std__char_traits_char__* t505 = this504;
  {
    std__locale___locale(&t505->_M_buf_locale);
  }
  return;
}

