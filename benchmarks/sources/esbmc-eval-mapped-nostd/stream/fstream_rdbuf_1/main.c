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
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_filebuf_char__std__char_traits_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; union pthread_mutex_t __field1; struct std____basic_file_char_ _M_file; int __field3; struct __mbstate_t __field4; struct __mbstate_t __field5; struct __mbstate_t __field6; char* __field7; unsigned long __field8; _Bool __field9; _Bool __field10; _Bool __field11; char __field12; char* __field13; char* __field14; _Bool __field15; struct std__codecvt_char__char____mbstate_t_* __field16; char* __field17; long __field18; char* __field19; char* __field20; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long _M_gcount; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__basic_iostream_char__std__char_traits_char__ { struct std__basic_istream_char__std__char_traits_char__ __field0; struct std__basic_ostream_char__std__char_traits_char__ __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_fstream_char__std__char_traits_char__ { struct std__basic_iostream_char__std__char_traits_char__ __field0; struct std__basic_filebuf_char__std__char_traits_char__ _M_filebuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVSt13basic_fstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
int _ZNSt8ios_base3outE_const __attribute__((aligned(4))) = 16;
int _ZNSt8ios_base2inE_const __attribute__((aligned(4))) = 8;
char _str[5] = "test";
char _str_1[16] = "pbuf->is_open()";
char _str_2[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stream/fstream_rdbuf_1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
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
struct std__basic_filebuf_char__std__char_traits_char__* std__basic_fstream_char__std__char_traits_char_____rdbuf___const(struct std__basic_fstream_char__std__char_traits_char__* p0);
extern struct std__basic_filebuf_char__std__char_traits_char__* std__basic_filebuf_char__std__char_traits_char_____open(struct std__basic_filebuf_char__std__char_traits_char__* p0, char* p1, int p2);
int std__operator_(int p0, int p1);
extern _Bool std____basic_file_char___is_open___const(struct std____basic_file_char_* p0);
_Bool std__basic_filebuf_char__std__char_traits_char_____is_open___const(struct std__basic_filebuf_char__std__char_traits_char__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern struct std__basic_filebuf_char__std__char_traits_char__* std__basic_filebuf_char__std__char_traits_char_____close(struct std__basic_filebuf_char__std__char_traits_char__* p0);
void std__basic_fstream_char__std__char_traits_char______basic_fstream_2(struct std__basic_fstream_char__std__char_traits_char__* p0, void** p1);
void std__basic_fstream_char__std__char_traits_char______basic_fstream(struct std__basic_fstream_char__std__char_traits_char__* p0);
int main();
extern int __gxx_personality_v0();
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

// function: _ZNKSt13basic_fstreamIcSt11char_traitsIcEE5rdbufEv
struct std__basic_filebuf_char__std__char_traits_char__* std__basic_fstream_char__std__char_traits_char_____rdbuf___const(struct std__basic_fstream_char__std__char_traits_char__* v215) {
bb216:
  struct std__basic_fstream_char__std__char_traits_char__* this217;
  struct std__basic_filebuf_char__std__char_traits_char__* __retval218;
  this217 = v215;
  struct std__basic_fstream_char__std__char_traits_char__* t219 = this217;
  __retval218 = &t219->_M_filebuf;
  struct std__basic_filebuf_char__std__char_traits_char__* t220 = __retval218;
  return t220;
}

// function: _ZStorSt13_Ios_OpenmodeS_
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

// function: _ZNKSt13basic_filebufIcSt11char_traitsIcEE7is_openEv
_Bool std__basic_filebuf_char__std__char_traits_char_____is_open___const(struct std__basic_filebuf_char__std__char_traits_char__* v231) {
bb232:
  struct std__basic_filebuf_char__std__char_traits_char__* this233;
  _Bool __retval234;
  this233 = v231;
  struct std__basic_filebuf_char__std__char_traits_char__* t235 = this233;
  _Bool r236 = std____basic_file_char___is_open___const(&t235->_M_file);
  __retval234 = r236;
  _Bool t237 = __retval234;
  return t237;
}

// function: _ZNSt13basic_fstreamIcSt11char_traitsIcEED2Ev
void std__basic_fstream_char__std__char_traits_char______basic_fstream_2(struct std__basic_fstream_char__std__char_traits_char__* v238, void** v239) {
bb240:
  struct std__basic_fstream_char__std__char_traits_char__* this241;
  void** vtt242;
  this241 = v238;
  vtt242 = v239;
  struct std__basic_fstream_char__std__char_traits_char__* t243 = this241;
  void** t244 = vtt242;
    {
      std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t243->_M_filebuf);
    }
  {
    struct std__basic_iostream_char__std__char_traits_char__* base245 = (struct std__basic_iostream_char__std__char_traits_char__*)((char *)t243 + 0);
    static void *vtt_slot246 = 0;
    void** vtt247 = (void**)&vtt_slot246;
    std__basic_iostream_char__std__char_traits_char______basic_iostream(base245, vtt247);
  }
  return;
}

// function: _ZNSt13basic_fstreamIcSt11char_traitsIcEED1Ev
void std__basic_fstream_char__std__char_traits_char______basic_fstream(struct std__basic_fstream_char__std__char_traits_char__* v248) {
bb249:
  struct std__basic_fstream_char__std__char_traits_char__* this250;
  this250 = v248;
  struct std__basic_fstream_char__std__char_traits_char__* t251 = this250;
    static void *vtt_slot252 = 0;
    void** vtt253 = (void**)&vtt_slot252;
    std__basic_fstream_char__std__char_traits_char______basic_fstream_2(t251, vtt253);
  {
    struct std__basic_ios_char__std__char_traits_char__* base254 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t251 + 264);
    std__basic_ios_char__std__char_traits_char______basic_ios(base254);
  }
  return;
}

// function: main
int main() {
bb255:
  int __retval256;
  char ch257;
  struct std__basic_fstream_char__std__char_traits_char__ filestr258;
  struct std__basic_filebuf_char__std__char_traits_char__* pbuf259;
  int c260 = 0;
  __retval256 = c260;
  std__basic_fstream_char__std__char_traits_char_____basic_fstream(&filestr258);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    struct std__basic_filebuf_char__std__char_traits_char__* r261 = std__basic_fstream_char__std__char_traits_char_____rdbuf___const(&filestr258);
    if (__cir_exc_active) {
      {
        std__basic_fstream_char__std__char_traits_char______basic_fstream(&filestr258);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    pbuf259 = r261;
    struct std__basic_filebuf_char__std__char_traits_char__* t262 = pbuf259;
    char* cast263 = (char*)&(_str);
    int t264 = _ZNSt8ios_base2inE_const;
    int t265 = _ZNSt8ios_base3outE_const;
    int r266 = std__operator_(t264, t265);
    struct std__basic_filebuf_char__std__char_traits_char__* r267 = std__basic_filebuf_char__std__char_traits_char_____open(t262, cast263, r266);
    if (__cir_exc_active) {
      {
        std__basic_fstream_char__std__char_traits_char______basic_fstream(&filestr258);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_filebuf_char__std__char_traits_char__* t268 = pbuf259;
    _Bool r269 = std__basic_filebuf_char__std__char_traits_char_____is_open___const(t268);
    if (r269) {
    } else {
      char* cast270 = (char*)&(_str_1);
      char* c271 = _str_2;
      unsigned int c272 = 21;
      char* cast273 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast270, c271, c272, cast273);
    }
    struct std__basic_filebuf_char__std__char_traits_char__* t274 = pbuf259;
    struct std__basic_filebuf_char__std__char_traits_char__* r275 = std__basic_filebuf_char__std__char_traits_char_____close(t274);
    if (__cir_exc_active) {
      {
        std__basic_fstream_char__std__char_traits_char______basic_fstream(&filestr258);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c276 = 0;
    __retval256 = c276;
    int t277 = __retval256;
    int ret_val278 = t277;
    {
      std__basic_fstream_char__std__char_traits_char______basic_fstream(&filestr258);
    }
    return ret_val278;
  int t279 = __retval256;
  return t279;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v280) {
bb281:
  struct std__basic_streambuf_char__std__char_traits_char__* this282;
  this282 = v280;
  struct std__basic_streambuf_char__std__char_traits_char__* t283 = this282;
  {
    std__locale___locale(&t283->_M_buf_locale);
  }
  return;
}

