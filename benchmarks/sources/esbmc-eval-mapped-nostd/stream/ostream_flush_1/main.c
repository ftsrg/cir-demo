/*
 * Copyright 2025 Budapest University of Technology and Economics
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

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
struct std__basic_ofstream_char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__ __field0; struct std__basic_filebuf_char__std__char_traits_char__ _M_filebuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
int _ZNSt8ios_base7goodbitE_const __attribute__((aligned(4))) = 0;
int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base3outE_const __attribute__((aligned(4))) = 16;
char _str[5] = "test";
char _str_1[18] = "outfile.is_open()";
char _str_2[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stream/ostream_flush_1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern void *_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void std__ios_base__ios_base(struct std__ios_base* p0);
void std__ios_base___ios_base(struct std__ios_base* p0) {}
void std__basic_ios_char__std__char_traits_char_____basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ostream_char__std__char_traits_char_____basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* p0, void** p1);
extern void std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* p0);
extern void std__basic_ios_char__std__char_traits_char_____init(struct std__basic_ios_char__std__char_traits_char__* p0, struct std__basic_streambuf_char__std__char_traits_char__* p1);
extern struct std__basic_filebuf_char__std__char_traits_char__* std__basic_filebuf_char__std__char_traits_char_____open(struct std__basic_filebuf_char__std__char_traits_char__* p0, char* p1, int p2);
int std__operator__2(int p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
void std__basic_ofstream_char__std__char_traits_char_____open(struct std__basic_ofstream_char__std__char_traits_char__* p0, char* p1, int p2);
void std__basic_filebuf_char__std__char_traits_char______basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* p0);
void std__basic_ostream_char__std__char_traits_char______basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ofstream_char__std__char_traits_char_____basic_ofstream(struct std__basic_ofstream_char__std__char_traits_char__* p0, char* p1, int p2);
extern _Bool std____basic_file_char___is_open___const(struct std____basic_file_char_* p0);
_Bool std__basic_filebuf_char__std__char_traits_char_____is_open___const(struct std__basic_filebuf_char__std__char_traits_char__* p0);
_Bool std__basic_ofstream_char__std__char_traits_char_____is_open(struct std__basic_ofstream_char__std__char_traits_char__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
void std__basic_ofstream_char__std__char_traits_char_____close(struct std__basic_ofstream_char__std__char_traits_char__* p0);
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
int std__operator__2(int v53, int v54) {
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
int std__operator_(int v63, int v64) {
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
  int r89 = std__operator_(r87, t88);
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
    int r101 = std__operator__2(t99, t100);
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

// function: _ZNKSt13basic_filebufIcSt11char_traitsIcEE7is_openEv
_Bool std__basic_filebuf_char__std__char_traits_char_____is_open___const(struct std__basic_filebuf_char__std__char_traits_char__* v195) {
bb196:
  struct std__basic_filebuf_char__std__char_traits_char__* this197;
  _Bool __retval198;
  this197 = v195;
  struct std__basic_filebuf_char__std__char_traits_char__* t199 = this197;
  _Bool r200 = std____basic_file_char___is_open___const(&t199->_M_file);
  __retval198 = r200;
  _Bool t201 = __retval198;
  return t201;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEE7is_openEv
_Bool std__basic_ofstream_char__std__char_traits_char_____is_open(struct std__basic_ofstream_char__std__char_traits_char__* v202) {
bb203:
  struct std__basic_ofstream_char__std__char_traits_char__* this204;
  _Bool __retval205;
  this204 = v202;
  struct std__basic_ofstream_char__std__char_traits_char__* t206 = this204;
  _Bool r207 = std__basic_filebuf_char__std__char_traits_char_____is_open___const(&t206->_M_filebuf);
  __retval205 = r207;
  _Bool t208 = __retval205;
  return t208;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEE5closeEv
void std__basic_ofstream_char__std__char_traits_char_____close(struct std__basic_ofstream_char__std__char_traits_char__* v209) {
bb210:
  struct std__basic_ofstream_char__std__char_traits_char__* this211;
  this211 = v209;
  struct std__basic_ofstream_char__std__char_traits_char__* t212 = this211;
    struct std__basic_filebuf_char__std__char_traits_char__* r213 = std__basic_filebuf_char__std__char_traits_char_____close(&t212->_M_filebuf);
    if (__cir_exc_active) {
      return;
    }
    _Bool cast214 = (_Bool)r213;
    _Bool u215 = !cast214;
    if (u215) {
      void** v216 = (void**)t212;
      void* v217 = *((void**)v216);
      unsigned char* cast218 = (unsigned char*)v217;
      long c219 = -24;
      unsigned char* ptr220 = &(cast218)[c219];
      long* cast221 = (long*)ptr220;
      long t222 = *cast221;
      unsigned char* cast223 = (unsigned char*)t212;
      unsigned char* ptr224 = &(cast223)[t222];
      struct std__basic_ofstream_char__std__char_traits_char__* cast225 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr224;
      struct std__basic_ios_char__std__char_traits_char__* cast226 = (struct std__basic_ios_char__std__char_traits_char__*)cast225;
      int t227 = _ZNSt8ios_base7failbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast226, t227);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEED2Ev
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream_2(struct std__basic_ofstream_char__std__char_traits_char__* v228, void** v229) {
bb230:
  struct std__basic_ofstream_char__std__char_traits_char__* this231;
  void** vtt232;
  this231 = v228;
  vtt232 = v229;
  struct std__basic_ofstream_char__std__char_traits_char__* t233 = this231;
  void** t234 = vtt232;
    {
      std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t233->_M_filebuf);
    }
  {
    struct std__basic_ostream_char__std__char_traits_char__* base235 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t233 + 0);
    static void *vtt_slot236 = 0;
    void** vtt237 = (void**)&vtt_slot236;
    std__basic_ostream_char__std__char_traits_char______basic_ostream(base235, vtt237);
  }
  return;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream(struct std__basic_ofstream_char__std__char_traits_char__* v238) {
bb239:
  struct std__basic_ofstream_char__std__char_traits_char__* this240;
  this240 = v238;
  struct std__basic_ofstream_char__std__char_traits_char__* t241 = this240;
    static void *vtt_slot242 = 0;
    void** vtt243 = (void**)&vtt_slot242;
    std__basic_ofstream_char__std__char_traits_char______basic_ofstream_2(t241, vtt243);
  {
    struct std__basic_ios_char__std__char_traits_char__* base244 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t241 + 248);
    std__basic_ios_char__std__char_traits_char______basic_ios(base244);
  }
  return;
}

// function: main
int main() {
bb245:
  int __retval246;
  struct std__basic_ofstream_char__std__char_traits_char__ outfile247;
  int c248 = 0;
  __retval246 = c248;
  char* cast249 = (char*)&(_str);
  int t250 = _ZNSt8ios_base3outE_const;
  std__basic_ofstream_char__std__char_traits_char_____basic_ofstream(&outfile247, cast249, t250);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    _Bool r251 = std__basic_ofstream_char__std__char_traits_char_____is_open(&outfile247);
    if (__cir_exc_active) {
      {
        std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outfile247);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    if (r251) {
    } else {
      char* cast252 = (char*)&(_str_1);
      char* c253 = _str_2;
      unsigned int c254 = 16;
      char* cast255 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast252, c253, c254, cast255);
    }
      int n256;
      int c257 = 0;
      n256 = c257;
      while (1) {
        int t259 = n256;
        int c260 = 100;
        _Bool c261 = ((t259 < c260)) ? 1 : 0;
        if (!c261) break;
          struct std__basic_ostream_char__std__char_traits_char__* base262 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(outfile247) + 0);
          int t263 = n256;
          struct std__basic_ostream_char__std__char_traits_char__* r264 = std__ostream__operator__(base262, t263);
          if (__cir_exc_active) {
            {
              std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outfile247);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          struct std__basic_ostream_char__std__char_traits_char__* base265 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(outfile247) + 0);
          struct std__basic_ostream_char__std__char_traits_char__* r266 = std__ostream__flush(base265);
          if (__cir_exc_active) {
            {
              std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outfile247);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
      for_step258: ;
        int t267 = n256;
        int u268 = t267 + 1;
        n256 = u268;
      }
    std__basic_ofstream_char__std__char_traits_char_____close(&outfile247);
    if (__cir_exc_active) {
      {
        std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outfile247);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c269 = 0;
    __retval246 = c269;
    int t270 = __retval246;
    int ret_val271 = t270;
    {
      std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outfile247);
    }
    return ret_val271;
  int t272 = __retval246;
  return t272;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v273) {
bb274:
  struct std__basic_streambuf_char__std__char_traits_char__* this275;
  this275 = v273;
  struct std__basic_streambuf_char__std__char_traits_char__* t276 = this275;
  {
    std__locale___locale(&t276->_M_buf_locale);
  }
  return;
}

