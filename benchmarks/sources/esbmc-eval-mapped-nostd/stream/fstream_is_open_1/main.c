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
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base7goodbitE_const __attribute__((aligned(4))) = 0;
int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base3outE_const __attribute__((aligned(4))) = 16;
int _ZNSt8ios_base2inE_const __attribute__((aligned(4))) = 8;
char _str[5] = "test";
char _str_1[18] = "filestr.is_open()";
char _str_2[112] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stream/fstream_is_open_1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[23] = "File successfully open";
char _str_4[21] = "!(filestr.is_open())";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[19] = "Error opening file";
extern void *_ZTVSt13basic_fstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void std__ios_base__ios_base(struct std__ios_base* p0);
void std__ios_base___ios_base(struct std__ios_base* p0) {}
void std__basic_ios_char__std__char_traits_char_____basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_istream_char__std__char_traits_char_____basic_istream(struct std__basic_istream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ostream_char__std__char_traits_char_____basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ostream_char__std__char_traits_char______basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* p0, void** p1);
void std__basic_istream_char__std__char_traits_char______basic_istream(struct std__basic_istream_char__std__char_traits_char__* p0, void** p1);
void std__basic_iostream_char__std__char_traits_char_____basic_iostream(struct std__basic_iostream_char__std__char_traits_char__* p0, void** p1);
extern void std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* p0);
extern void std__basic_ios_char__std__char_traits_char_____init(struct std__basic_ios_char__std__char_traits_char__* p0, struct std__basic_streambuf_char__std__char_traits_char__* p1);
void std__basic_filebuf_char__std__char_traits_char______basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* p0);
void std__basic_iostream_char__std__char_traits_char______basic_iostream(struct std__basic_iostream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_fstream_char__std__char_traits_char_____basic_fstream(struct std__basic_fstream_char__std__char_traits_char__* p0);
extern struct std__basic_filebuf_char__std__char_traits_char__* std__basic_filebuf_char__std__char_traits_char_____open(struct std__basic_filebuf_char__std__char_traits_char__* p0, char* p1, int p2);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
void std__basic_fstream_char__std__char_traits_char_____open(struct std__basic_fstream_char__std__char_traits_char__* p0, char* p1, int p2);
int std__operator__2(int p0, int p1);
extern _Bool std____basic_file_char___is_open___const(struct std____basic_file_char_* p0);
_Bool std__basic_filebuf_char__std__char_traits_char_____is_open___const(struct std__basic_filebuf_char__std__char_traits_char__* p0);
_Bool std__basic_fstream_char__std__char_traits_char_____is_open(struct std__basic_fstream_char__std__char_traits_char__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool std____is_constant_evaluated();
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
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

// function: _ZNSoC2Ev
void std__basic_ostream_char__std__char_traits_char_____basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* v54, void** v55) {
bb56:
  struct std__basic_ostream_char__std__char_traits_char__* this57;
  void** vtt58;
  this57 = v54;
  vtt58 = v55;
  struct std__basic_ostream_char__std__char_traits_char__* t59 = this57;
  void** t60 = vtt58;
  static void *vtt_slot61 = 0;
  void** vtt62 = (void**)&vtt_slot61;
  void** cast63 = (void**)vtt62;
  void* t64 = *cast63;
  void** v65 = (void**)t59;
  *(void**)(v65) = (void*)t64;
  static void *vtt_slot66 = 0;
  void** vtt67 = (void**)&vtt_slot66;
  void** cast68 = (void**)vtt67;
  void* t69 = *cast68;
  void** v70 = (void**)t59;
  void* v71 = *((void**)v70);
  unsigned char* cast72 = (unsigned char*)v71;
  long c73 = -24;
  unsigned char* ptr74 = &(cast72)[c73];
  long* cast75 = (long*)ptr74;
  long t76 = *cast75;
  unsigned char* cast77 = (unsigned char*)t59;
  unsigned char* ptr78 = &(cast77)[t76];
  struct std__basic_ostream_char__std__char_traits_char__* cast79 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr78;
  void** v80 = (void**)cast79;
  *(void**)(v80) = (void*)t69;
  void** v81 = (void**)t59;
  void* v82 = *((void**)v81);
  unsigned char* cast83 = (unsigned char*)v82;
  long c84 = -24;
  unsigned char* ptr85 = &(cast83)[c84];
  long* cast86 = (long*)ptr85;
  long t87 = *cast86;
  unsigned char* cast88 = (unsigned char*)t59;
  unsigned char* ptr89 = &(cast88)[t87];
  struct std__basic_ostream_char__std__char_traits_char__* cast90 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr89;
  struct std__basic_ios_char__std__char_traits_char__* cast91 = (struct std__basic_ios_char__std__char_traits_char__*)cast90;
  struct std__basic_streambuf_char__std__char_traits_char__* c92 = ((void*)0);
  std__basic_ios_char__std__char_traits_char_____init(cast91, c92);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSoD2Ev
void std__basic_ostream_char__std__char_traits_char______basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* v93, void** v94) {
bb95:
  struct std__basic_ostream_char__std__char_traits_char__* this96;
  void** vtt97;
  this96 = v93;
  vtt97 = v94;
  struct std__basic_ostream_char__std__char_traits_char__* t98 = this96;
  void** t99 = vtt97;
  return;
}

// function: _ZNSiD2Ev
void std__basic_istream_char__std__char_traits_char______basic_istream(struct std__basic_istream_char__std__char_traits_char__* v100, void** v101) {
bb102:
  struct std__basic_istream_char__std__char_traits_char__* this103;
  void** vtt104;
  this103 = v100;
  vtt104 = v101;
  struct std__basic_istream_char__std__char_traits_char__* t105 = this103;
  void** t106 = vtt104;
  long c107 = 0;
  t105->_M_gcount = c107;
  return;
}

// function: _ZNSdC2Ev
void std__basic_iostream_char__std__char_traits_char_____basic_iostream(struct std__basic_iostream_char__std__char_traits_char__* v108, void** v109) {
bb110:
  struct std__basic_iostream_char__std__char_traits_char__* this111;
  void** vtt112;
  this111 = v108;
  vtt112 = v109;
  struct std__basic_iostream_char__std__char_traits_char__* t113 = this111;
  void** t114 = vtt112;
  struct std__basic_istream_char__std__char_traits_char__* base115 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t113 + 0);
  static void *vtt_slot116 = 0;
  void** vtt117 = (void**)&vtt_slot116;
  std__basic_istream_char__std__char_traits_char_____basic_istream(base115, vtt117);
  if (__cir_exc_active) {
    return;
  }
    struct std__basic_ostream_char__std__char_traits_char__* base118 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t113 + 16);
    static void *vtt_slot119 = 0;
    void** vtt120 = (void**)&vtt_slot119;
    std__basic_ostream_char__std__char_traits_char_____basic_ostream(base118, vtt120);
    if (__cir_exc_active) {
      {
        struct std__basic_istream_char__std__char_traits_char__* base121 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t113 + 0);
        static void *vtt_slot122 = 0;
        void** vtt123 = (void**)&vtt_slot122;
        std__basic_istream_char__std__char_traits_char______basic_istream(base121, vtt123);
      }
      return;
    }
      static void *vtt_slot124 = 0;
      void** vtt125 = (void**)&vtt_slot124;
      void** cast126 = (void**)vtt125;
      void* t127 = *cast126;
      void** v128 = (void**)t113;
      *(void**)(v128) = (void*)t127;
      static void *vtt_slot129 = 0;
      void** vtt130 = (void**)&vtt_slot129;
      void** cast131 = (void**)vtt130;
      void* t132 = *cast131;
      void** v133 = (void**)t113;
      void* v134 = *((void**)v133);
      unsigned char* cast135 = (unsigned char*)v134;
      long c136 = -24;
      unsigned char* ptr137 = &(cast135)[c136];
      long* cast138 = (long*)ptr137;
      long t139 = *cast138;
      unsigned char* cast140 = (unsigned char*)t113;
      unsigned char* ptr141 = &(cast140)[t139];
      struct std__basic_iostream_char__std__char_traits_char__* cast142 = (struct std__basic_iostream_char__std__char_traits_char__*)ptr141;
      void** v143 = (void**)cast142;
      *(void**)(v143) = (void*)t132;
      static void *vtt_slot144 = 0;
      void** vtt145 = (void**)&vtt_slot144;
      void** cast146 = (void**)vtt145;
      void* t147 = *cast146;
      struct std__basic_ostream_char__std__char_traits_char__* base148 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t113 + 16);
      void** v149 = (void**)base148;
      *(void**)(v149) = (void*)t147;
  return;
}

// function: _ZNSt13basic_filebufIcSt11char_traitsIcEED2Ev
void std__basic_filebuf_char__std__char_traits_char______basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* v150) {
bb151:
  struct std__basic_filebuf_char__std__char_traits_char__* this152;
  this152 = v150;
  struct std__basic_filebuf_char__std__char_traits_char__* t153 = this152;
          struct std__basic_filebuf_char__std__char_traits_char__* r155 = std__basic_filebuf_char__std__char_traits_char_____close(t153);
          if (__cir_exc_active) {
            {
              std____basic_file_char______basic_file(&t153->_M_file);
            }
            {
              struct std__basic_streambuf_char__std__char_traits_char__* base156 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t153 + 0);
              std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base156);
            }
            goto cir_try_dispatch154;
          }
        cir_try_dispatch154: ;
        if (__cir_exc_active) {
        {
          int ca_tok157 = 0;
          void* ca_exn158 = (void*)__cir_exc_ptr;
          __cir_exc_active = 0;
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
        }
        }
    {
      std____basic_file_char______basic_file(&t153->_M_file);
    }
  {
    struct std__basic_streambuf_char__std__char_traits_char__* base159 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t153 + 0);
    std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base159);
  }
  return;
}

// function: _ZNSdD2Ev
void std__basic_iostream_char__std__char_traits_char______basic_iostream(struct std__basic_iostream_char__std__char_traits_char__* v160, void** v161) {
bb162:
  struct std__basic_iostream_char__std__char_traits_char__* this163;
  void** vtt164;
  this163 = v160;
  vtt164 = v161;
  struct std__basic_iostream_char__std__char_traits_char__* t165 = this163;
  void** t166 = vtt164;
    {
      struct std__basic_ostream_char__std__char_traits_char__* base167 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t165 + 16);
      static void *vtt_slot168 = 0;
      void** vtt169 = (void**)&vtt_slot168;
      std__basic_ostream_char__std__char_traits_char______basic_ostream(base167, vtt169);
    }
  {
    struct std__basic_istream_char__std__char_traits_char__* base170 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t165 + 0);
    static void *vtt_slot171 = 0;
    void** vtt172 = (void**)&vtt_slot171;
    std__basic_istream_char__std__char_traits_char______basic_istream(base170, vtt172);
  }
  return;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEED2Ev
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* v173) {
bb174:
  struct std__basic_ios_char__std__char_traits_char__* this175;
  this175 = v173;
  struct std__basic_ios_char__std__char_traits_char__* t176 = this175;
  {
    struct std__ios_base* base177 = (struct std__ios_base*)((char *)t176 + 0);
    std__ios_base___ios_base(base177);
  }
  return;
}

// function: _ZNSt13basic_fstreamIcSt11char_traitsIcEEC1Ev
void std__basic_fstream_char__std__char_traits_char_____basic_fstream(struct std__basic_fstream_char__std__char_traits_char__* v178) {
bb179:
  struct std__basic_fstream_char__std__char_traits_char__* this180;
  this180 = v178;
  struct std__basic_fstream_char__std__char_traits_char__* t181 = this180;
  struct std__basic_ios_char__std__char_traits_char__* base182 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t181 + 264);
  std__basic_ios_char__std__char_traits_char_____basic_ios(base182);
  if (__cir_exc_active) {
    return;
  }
    struct std__basic_iostream_char__std__char_traits_char__* base183 = (struct std__basic_iostream_char__std__char_traits_char__*)((char *)t181 + 0);
    static void *vtt_slot184 = 0;
    void** vtt185 = (void**)&vtt_slot184;
    std__basic_iostream_char__std__char_traits_char_____basic_iostream(base183, vtt185);
    if (__cir_exc_active) {
      {
        struct std__basic_ios_char__std__char_traits_char__* base186 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t181 + 264);
        std__basic_ios_char__std__char_traits_char______basic_ios(base186);
      }
      return;
    }
      void* v187 = (void*)&_ZTVSt13basic_fstreamIcSt11char_traitsIcEE[3];
      void** v188 = (void**)t181;
      *(void**)(v188) = (void*)v187;
      void* v189 = (void*)&_ZTVSt13basic_fstreamIcSt11char_traitsIcEE[3];
      struct std__basic_ios_char__std__char_traits_char__* base190 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t181 + 264);
      void** v191 = (void**)base190;
      *(void**)(v191) = (void*)v189;
      void* v192 = (void*)&_ZTVSt13basic_fstreamIcSt11char_traitsIcEE[3];
      struct std__basic_ostream_char__std__char_traits_char__* base193 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t181 + 16);
      void** v194 = (void**)base193;
      *(void**)(v194) = (void*)v192;
      std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(&t181->_M_filebuf);
      if (__cir_exc_active) {
        {
          struct std__basic_iostream_char__std__char_traits_char__* base195 = (struct std__basic_iostream_char__std__char_traits_char__*)((char *)t181 + 0);
          static void *vtt_slot196 = 0;
          void** vtt197 = (void**)&vtt_slot196;
          std__basic_iostream_char__std__char_traits_char______basic_iostream(base195, vtt197);
        }
        {
          struct std__basic_ios_char__std__char_traits_char__* base198 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t181 + 264);
          std__basic_ios_char__std__char_traits_char______basic_ios(base198);
        }
        return;
      }
        void** v199 = (void**)t181;
        void* v200 = *((void**)v199);
        unsigned char* cast201 = (unsigned char*)v200;
        long c202 = -24;
        unsigned char* ptr203 = &(cast201)[c202];
        long* cast204 = (long*)ptr203;
        long t205 = *cast204;
        unsigned char* cast206 = (unsigned char*)t181;
        unsigned char* ptr207 = &(cast206)[t205];
        struct std__basic_fstream_char__std__char_traits_char__* cast208 = (struct std__basic_fstream_char__std__char_traits_char__*)ptr207;
        struct std__basic_ios_char__std__char_traits_char__* cast209 = (struct std__basic_ios_char__std__char_traits_char__*)cast208;
        struct std__basic_streambuf_char__std__char_traits_char__* base210 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)&(t181->_M_filebuf) + 0);
        std__basic_ios_char__std__char_traits_char_____init(cast209, base210);
        if (__cir_exc_active) {
          {
            std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t181->_M_filebuf);
          }
          {
            struct std__basic_iostream_char__std__char_traits_char__* base211 = (struct std__basic_iostream_char__std__char_traits_char__*)((char *)t181 + 0);
            static void *vtt_slot212 = 0;
            void** vtt213 = (void**)&vtt_slot212;
            std__basic_iostream_char__std__char_traits_char______basic_iostream(base211, vtt213);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base214 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t181 + 264);
            std__basic_ios_char__std__char_traits_char______basic_ios(base214);
          }
          return;
        }
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v215, int v216) {
bb217:
  int __a218;
  int __b219;
  int __retval220;
  __a218 = v215;
  __b219 = v216;
  int t221 = __a218;
  int t222 = __b219;
  int b223 = t221 | t222;
  __retval220 = b223;
  int t224 = __retval220;
  return t224;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v225) {
bb226:
  struct std__basic_ios_char__std__char_traits_char__* this227;
  int __retval228;
  this227 = v225;
  struct std__basic_ios_char__std__char_traits_char__* t229 = this227;
  struct std__ios_base* base230 = (struct std__ios_base*)((char *)t229 + 0);
  int t231 = base230->_M_streambuf_state;
  __retval228 = t231;
  int t232 = __retval228;
  return t232;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v233, int v234) {
bb235:
  struct std__basic_ios_char__std__char_traits_char__* this236;
  int __state237;
  this236 = v233;
  __state237 = v234;
  struct std__basic_ios_char__std__char_traits_char__* t238 = this236;
  int r239 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t238);
  if (__cir_exc_active) {
    return;
  }
  int t240 = __state237;
  int r241 = std__operator_(r239, t240);
  std__basic_ios_char__std__char_traits_char_____clear(t238, r241);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt13basic_fstreamIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode
void std__basic_fstream_char__std__char_traits_char_____open(struct std__basic_fstream_char__std__char_traits_char__* v242, char* v243, int v244) {
bb245:
  struct std__basic_fstream_char__std__char_traits_char__* this246;
  char* __s247;
  int __mode248;
  this246 = v242;
  __s247 = v243;
  __mode248 = v244;
  struct std__basic_fstream_char__std__char_traits_char__* t249 = this246;
    char* t250 = __s247;
    int t251 = __mode248;
    struct std__basic_filebuf_char__std__char_traits_char__* r252 = std__basic_filebuf_char__std__char_traits_char_____open(&t249->_M_filebuf, t250, t251);
    if (__cir_exc_active) {
      return;
    }
    _Bool cast253 = (_Bool)r252;
    _Bool u254 = !cast253;
    if (u254) {
      void** v255 = (void**)t249;
      void* v256 = *((void**)v255);
      unsigned char* cast257 = (unsigned char*)v256;
      long c258 = -24;
      unsigned char* ptr259 = &(cast257)[c258];
      long* cast260 = (long*)ptr259;
      long t261 = *cast260;
      unsigned char* cast262 = (unsigned char*)t249;
      unsigned char* ptr263 = &(cast262)[t261];
      struct std__basic_fstream_char__std__char_traits_char__* cast264 = (struct std__basic_fstream_char__std__char_traits_char__*)ptr263;
      struct std__basic_ios_char__std__char_traits_char__* cast265 = (struct std__basic_ios_char__std__char_traits_char__*)cast264;
      int t266 = _ZNSt8ios_base7failbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast265, t266);
      if (__cir_exc_active) {
        return;
      }
    } else {
      void** v267 = (void**)t249;
      void* v268 = *((void**)v267);
      unsigned char* cast269 = (unsigned char*)v268;
      long c270 = -24;
      unsigned char* ptr271 = &(cast269)[c270];
      long* cast272 = (long*)ptr271;
      long t273 = *cast272;
      unsigned char* cast274 = (unsigned char*)t249;
      unsigned char* ptr275 = &(cast274)[t273];
      struct std__basic_fstream_char__std__char_traits_char__* cast276 = (struct std__basic_fstream_char__std__char_traits_char__*)ptr275;
      struct std__basic_ios_char__std__char_traits_char__* cast277 = (struct std__basic_ios_char__std__char_traits_char__*)cast276;
      int t278 = _ZNSt8ios_base7goodbitE_const;
      std__basic_ios_char__std__char_traits_char_____clear(cast277, t278);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZStorSt13_Ios_OpenmodeS_
int std__operator__2(int v279, int v280) {
bb281:
  int __a282;
  int __b283;
  int __retval284;
  __a282 = v279;
  __b283 = v280;
  int t285 = __a282;
  int t286 = __b283;
  int b287 = t285 | t286;
  __retval284 = b287;
  int t288 = __retval284;
  return t288;
}

// function: _ZNKSt13basic_filebufIcSt11char_traitsIcEE7is_openEv
_Bool std__basic_filebuf_char__std__char_traits_char_____is_open___const(struct std__basic_filebuf_char__std__char_traits_char__* v289) {
bb290:
  struct std__basic_filebuf_char__std__char_traits_char__* this291;
  _Bool __retval292;
  this291 = v289;
  struct std__basic_filebuf_char__std__char_traits_char__* t293 = this291;
  _Bool r294 = std____basic_file_char___is_open___const(&t293->_M_file);
  __retval292 = r294;
  _Bool t295 = __retval292;
  return t295;
}

// function: _ZNSt13basic_fstreamIcSt11char_traitsIcEE7is_openEv
_Bool std__basic_fstream_char__std__char_traits_char_____is_open(struct std__basic_fstream_char__std__char_traits_char__* v296) {
bb297:
  struct std__basic_fstream_char__std__char_traits_char__* this298;
  _Bool __retval299;
  this298 = v296;
  struct std__basic_fstream_char__std__char_traits_char__* t300 = this298;
  _Bool r301 = std__basic_filebuf_char__std__char_traits_char_____is_open___const(&t300->_M_filebuf);
  __retval299 = r301;
  _Bool t302 = __retval299;
  return t302;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb303:
  _Bool __retval304;
    _Bool c305 = 0;
    __retval304 = c305;
    _Bool t306 = __retval304;
    return t306;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v307, char* v308) {
bb309:
  char* __c1310;
  char* __c2311;
  _Bool __retval312;
  __c1310 = v307;
  __c2311 = v308;
  char* t313 = __c1310;
  char t314 = *t313;
  int cast315 = (int)t314;
  char* t316 = __c2311;
  char t317 = *t316;
  int cast318 = (int)t317;
  _Bool c319 = ((cast315 == cast318)) ? 1 : 0;
  __retval312 = c319;
  _Bool t320 = __retval312;
  return t320;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v321) {
bb322:
  char* __p323;
  unsigned long __retval324;
  unsigned long __i325;
  __p323 = v321;
  unsigned long c326 = 0;
  __i325 = c326;
    char ref_tmp0327;
    while (1) {
      unsigned long t328 = __i325;
      char* t329 = __p323;
      char* ptr330 = &(t329)[t328];
      char c331 = 0;
      ref_tmp0327 = c331;
      _Bool r332 = __gnu_cxx__char_traits_char___eq(ptr330, &ref_tmp0327);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u333 = !r332;
      if (!u333) break;
      unsigned long t334 = __i325;
      unsigned long u335 = t334 + 1;
      __i325 = u335;
    }
  unsigned long t336 = __i325;
  __retval324 = t336;
  unsigned long t337 = __retval324;
  return t337;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v338) {
bb339:
  char* __s340;
  unsigned long __retval341;
  __s340 = v338;
    _Bool r342 = std____is_constant_evaluated();
    if (r342) {
      char* t343 = __s340;
      unsigned long r344 = __gnu_cxx__char_traits_char___length(t343);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval341 = r344;
      unsigned long t345 = __retval341;
      return t345;
    }
  char* t346 = __s340;
  unsigned long r347 = strlen(t346);
  __retval341 = r347;
  unsigned long t348 = __retval341;
  return t348;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v349, char* v350) {
bb351:
  struct std__basic_ostream_char__std__char_traits_char__* __out352;
  char* __s353;
  struct std__basic_ostream_char__std__char_traits_char__* __retval354;
  __out352 = v349;
  __s353 = v350;
    char* t355 = __s353;
    _Bool cast356 = (_Bool)t355;
    _Bool u357 = !cast356;
    if (u357) {
      struct std__basic_ostream_char__std__char_traits_char__* t358 = __out352;
      void** v359 = (void**)t358;
      void* v360 = *((void**)v359);
      unsigned char* cast361 = (unsigned char*)v360;
      long c362 = -24;
      unsigned char* ptr363 = &(cast361)[c362];
      long* cast364 = (long*)ptr363;
      long t365 = *cast364;
      unsigned char* cast366 = (unsigned char*)t358;
      unsigned char* ptr367 = &(cast366)[t365];
      struct std__basic_ostream_char__std__char_traits_char__* cast368 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr367;
      struct std__basic_ios_char__std__char_traits_char__* cast369 = (struct std__basic_ios_char__std__char_traits_char__*)cast368;
      int t370 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast369, t370);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t371 = __out352;
      char* t372 = __s353;
      char* t373 = __s353;
      unsigned long r374 = std__char_traits_char___length(t373);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast375 = (long)r374;
      struct std__basic_ostream_char__std__char_traits_char__* r376 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t371, t372, cast375);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t377 = __out352;
  __retval354 = t377;
  struct std__basic_ostream_char__std__char_traits_char__* t378 = __retval354;
  return t378;
}

// function: _ZNSt13basic_fstreamIcSt11char_traitsIcEE5closeEv
void std__basic_fstream_char__std__char_traits_char_____close(struct std__basic_fstream_char__std__char_traits_char__* v379) {
bb380:
  struct std__basic_fstream_char__std__char_traits_char__* this381;
  this381 = v379;
  struct std__basic_fstream_char__std__char_traits_char__* t382 = this381;
    struct std__basic_filebuf_char__std__char_traits_char__* r383 = std__basic_filebuf_char__std__char_traits_char_____close(&t382->_M_filebuf);
    if (__cir_exc_active) {
      return;
    }
    _Bool cast384 = (_Bool)r383;
    _Bool u385 = !cast384;
    if (u385) {
      void** v386 = (void**)t382;
      void* v387 = *((void**)v386);
      unsigned char* cast388 = (unsigned char*)v387;
      long c389 = -24;
      unsigned char* ptr390 = &(cast388)[c389];
      long* cast391 = (long*)ptr390;
      long t392 = *cast391;
      unsigned char* cast393 = (unsigned char*)t382;
      unsigned char* ptr394 = &(cast393)[t392];
      struct std__basic_fstream_char__std__char_traits_char__* cast395 = (struct std__basic_fstream_char__std__char_traits_char__*)ptr394;
      struct std__basic_ios_char__std__char_traits_char__* cast396 = (struct std__basic_ios_char__std__char_traits_char__*)cast395;
      int t397 = _ZNSt8ios_base7failbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast396, t397);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt13basic_fstreamIcSt11char_traitsIcEED2Ev
void std__basic_fstream_char__std__char_traits_char______basic_fstream_2(struct std__basic_fstream_char__std__char_traits_char__* v398, void** v399) {
bb400:
  struct std__basic_fstream_char__std__char_traits_char__* this401;
  void** vtt402;
  this401 = v398;
  vtt402 = v399;
  struct std__basic_fstream_char__std__char_traits_char__* t403 = this401;
  void** t404 = vtt402;
    {
      std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t403->_M_filebuf);
    }
  {
    struct std__basic_iostream_char__std__char_traits_char__* base405 = (struct std__basic_iostream_char__std__char_traits_char__*)((char *)t403 + 0);
    static void *vtt_slot406 = 0;
    void** vtt407 = (void**)&vtt_slot406;
    std__basic_iostream_char__std__char_traits_char______basic_iostream(base405, vtt407);
  }
  return;
}

// function: _ZNSt13basic_fstreamIcSt11char_traitsIcEED1Ev
void std__basic_fstream_char__std__char_traits_char______basic_fstream(struct std__basic_fstream_char__std__char_traits_char__* v408) {
bb409:
  struct std__basic_fstream_char__std__char_traits_char__* this410;
  this410 = v408;
  struct std__basic_fstream_char__std__char_traits_char__* t411 = this410;
    static void *vtt_slot412 = 0;
    void** vtt413 = (void**)&vtt_slot412;
    std__basic_fstream_char__std__char_traits_char______basic_fstream_2(t411, vtt413);
  {
    struct std__basic_ios_char__std__char_traits_char__* base414 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t411 + 264);
    std__basic_ios_char__std__char_traits_char______basic_ios(base414);
  }
  return;
}

// function: main
int main() {
bb415:
  int __retval416;
  struct std__basic_fstream_char__std__char_traits_char__ filestr417;
  int c418 = 0;
  __retval416 = c418;
  std__basic_fstream_char__std__char_traits_char_____basic_fstream(&filestr417);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    char* cast419 = (char*)&(_str);
    int t420 = _ZNSt8ios_base2inE_const;
    int t421 = _ZNSt8ios_base3outE_const;
    int r422 = std__operator__2(t420, t421);
    std__basic_fstream_char__std__char_traits_char_____open(&filestr417, cast419, r422);
    if (__cir_exc_active) {
      {
        std__basic_fstream_char__std__char_traits_char______basic_fstream(&filestr417);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    _Bool r423 = std__basic_fstream_char__std__char_traits_char_____is_open(&filestr417);
    if (__cir_exc_active) {
      {
        std__basic_fstream_char__std__char_traits_char______basic_fstream(&filestr417);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    if (r423) {
    } else {
      char* cast424 = (char*)&(_str_1);
      char* c425 = _str_2;
      unsigned int c426 = 18;
      char* cast427 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast424, c425, c426, cast427);
    }
      _Bool r428 = std__basic_fstream_char__std__char_traits_char_____is_open(&filestr417);
      if (__cir_exc_active) {
        {
          std__basic_fstream_char__std__char_traits_char______basic_fstream(&filestr417);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      if (r428) {
        struct std__basic_ostream_char__std__char_traits_char__* base429 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(filestr417) + 16);
        char* cast430 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r431 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(base429, cast430);
        if (__cir_exc_active) {
          {
            std__basic_fstream_char__std__char_traits_char______basic_fstream(&filestr417);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        std__basic_fstream_char__std__char_traits_char_____close(&filestr417);
        if (__cir_exc_active) {
          {
            std__basic_fstream_char__std__char_traits_char______basic_fstream(&filestr417);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        _Bool r432 = std__basic_fstream_char__std__char_traits_char_____is_open(&filestr417);
        if (__cir_exc_active) {
          {
            std__basic_fstream_char__std__char_traits_char______basic_fstream(&filestr417);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        _Bool u433 = !r432;
        if (u433) {
        } else {
          char* cast434 = (char*)&(_str_4);
          char* c435 = _str_2;
          unsigned int c436 = 23;
          char* cast437 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast434, c435, c436, cast437);
        }
      } else {
        char* cast438 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* r439 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast438);
        if (__cir_exc_active) {
          {
            std__basic_fstream_char__std__char_traits_char______basic_fstream(&filestr417);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      }
    int c440 = 0;
    __retval416 = c440;
    int t441 = __retval416;
    int ret_val442 = t441;
    {
      std__basic_fstream_char__std__char_traits_char______basic_fstream(&filestr417);
    }
    return ret_val442;
  int t443 = __retval416;
  return t443;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v444) {
bb445:
  struct std__basic_streambuf_char__std__char_traits_char__* this446;
  this446 = v444;
  struct std__basic_streambuf_char__std__char_traits_char__* t447 = this446;
  {
    std__locale___locale(&t447->_M_buf_locale);
  }
  return;
}

