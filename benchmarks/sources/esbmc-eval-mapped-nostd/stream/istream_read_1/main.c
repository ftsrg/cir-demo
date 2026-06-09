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
struct std__fpos___mbstate_t_ { long _M_off; struct __mbstate_t __field1; };
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_filebuf_char__std__char_traits_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; union pthread_mutex_t __field1; struct std____basic_file_char_ _M_file; int __field3; struct __mbstate_t __field4; struct __mbstate_t __field5; struct __mbstate_t __field6; char* __field7; unsigned long __field8; _Bool __field9; _Bool __field10; _Bool __field11; char __field12; char* __field13; char* __field14; _Bool __field15; struct std__codecvt_char__char____mbstate_t_* __field16; char* __field17; long __field18; char* __field19; char* __field20; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long _M_gcount; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__basic_ifstream_char__std__char_traits_char__ { struct std__basic_istream_char__std__char_traits_char__ __field0; struct std__basic_filebuf_char__std__char_traits_char__ _M_filebuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
int _ZNSt8ios_base7goodbitE_const __attribute__((aligned(4))) = 0;
int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base2inE_const __attribute__((aligned(4))) = 8;
unsigned int _ZNSt8ios_base3begE_const __attribute__((aligned(4))) = 0;
unsigned int _ZNSt8ios_base3endE_const __attribute__((aligned(4))) = 2;
int _ZNSt8ios_base6binaryE_const __attribute__((aligned(4))) = 4;
char _str[5] = "test";
char _str_1[27] = "length == (int)is.gcount()";
char _str_2[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stream/istream_read_1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
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
extern struct std__basic_filebuf_char__std__char_traits_char__* std__basic_filebuf_char__std__char_traits_char_____open(struct std__basic_filebuf_char__std__char_traits_char__* p0, char* p1, int p2);
int std__operator__2(int p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
void std__basic_ifstream_char__std__char_traits_char_____open(struct std__basic_ifstream_char__std__char_traits_char__* p0, char* p1, int p2);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__seekg(struct std__basic_istream_char__std__char_traits_char__* p0, long p1, unsigned int p2);
extern struct std__fpos___mbstate_t_ std__istream__tellg(struct std__basic_istream_char__std__char_traits_char__* p0);
long std__fpos___mbstate_t___operator_long___const(struct std__fpos___mbstate_t_* p0);
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new__(unsigned long p0) { return malloc(p0); }
void operator_delete___2(void* p0, unsigned long p1) { free(p0); }
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__read(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1, long p2);
long std__istream__gcount___const(struct std__basic_istream_char__std__char_traits_char__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void std__basic_ifstream_char__std__char_traits_char_____close(struct std__basic_ifstream_char__std__char_traits_char__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__write(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
void operator_delete__(void* p0) { free(p0); }
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

// function: _ZStorSt13_Ios_OpenmodeS_
int std__operator__2(int v111, int v112) {
bb113:
  int __a114;
  int __b115;
  int __retval116;
  __a114 = v111;
  __b115 = v112;
  int t117 = __a114;
  int t118 = __b115;
  int b119 = t117 | t118;
  __retval116 = b119;
  int t120 = __retval116;
  return t120;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v121, int v122) {
bb123:
  int __a124;
  int __b125;
  int __retval126;
  __a124 = v121;
  __b125 = v122;
  int t127 = __a124;
  int t128 = __b125;
  int b129 = t127 | t128;
  __retval126 = b129;
  int t130 = __retval126;
  return t130;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v131) {
bb132:
  struct std__basic_ios_char__std__char_traits_char__* this133;
  int __retval134;
  this133 = v131;
  struct std__basic_ios_char__std__char_traits_char__* t135 = this133;
  struct std__ios_base* base136 = (struct std__ios_base*)((char *)t135 + 0);
  int t137 = base136->_M_streambuf_state;
  __retval134 = t137;
  int t138 = __retval134;
  return t138;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v139, int v140) {
bb141:
  struct std__basic_ios_char__std__char_traits_char__* this142;
  int __state143;
  this142 = v139;
  __state143 = v140;
  struct std__basic_ios_char__std__char_traits_char__* t144 = this142;
  int r145 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t144);
  if (__cir_exc_active) {
    return;
  }
  int t146 = __state143;
  int r147 = std__operator_(r145, t146);
  std__basic_ios_char__std__char_traits_char_____clear(t144, r147);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode
void std__basic_ifstream_char__std__char_traits_char_____open(struct std__basic_ifstream_char__std__char_traits_char__* v148, char* v149, int v150) {
bb151:
  struct std__basic_ifstream_char__std__char_traits_char__* this152;
  char* __s153;
  int __mode154;
  this152 = v148;
  __s153 = v149;
  __mode154 = v150;
  struct std__basic_ifstream_char__std__char_traits_char__* t155 = this152;
    char* t156 = __s153;
    int t157 = __mode154;
    int t158 = _ZNSt8ios_base2inE_const;
    int r159 = std__operator__2(t157, t158);
    struct std__basic_filebuf_char__std__char_traits_char__* r160 = std__basic_filebuf_char__std__char_traits_char_____open(&t155->_M_filebuf, t156, r159);
    if (__cir_exc_active) {
      return;
    }
    _Bool cast161 = (_Bool)r160;
    _Bool u162 = !cast161;
    if (u162) {
      void** v163 = (void**)t155;
      void* v164 = *((void**)v163);
      unsigned char* cast165 = (unsigned char*)v164;
      long c166 = -24;
      unsigned char* ptr167 = &(cast165)[c166];
      long* cast168 = (long*)ptr167;
      long t169 = *cast168;
      unsigned char* cast170 = (unsigned char*)t155;
      unsigned char* ptr171 = &(cast170)[t169];
      struct std__basic_ifstream_char__std__char_traits_char__* cast172 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr171;
      struct std__basic_ios_char__std__char_traits_char__* cast173 = (struct std__basic_ios_char__std__char_traits_char__*)cast172;
      int t174 = _ZNSt8ios_base7failbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast173, t174);
      if (__cir_exc_active) {
        return;
      }
    } else {
      void** v175 = (void**)t155;
      void* v176 = *((void**)v175);
      unsigned char* cast177 = (unsigned char*)v176;
      long c178 = -24;
      unsigned char* ptr179 = &(cast177)[c178];
      long* cast180 = (long*)ptr179;
      long t181 = *cast180;
      unsigned char* cast182 = (unsigned char*)t155;
      unsigned char* ptr183 = &(cast182)[t181];
      struct std__basic_ifstream_char__std__char_traits_char__* cast184 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr183;
      struct std__basic_ios_char__std__char_traits_char__* cast185 = (struct std__basic_ios_char__std__char_traits_char__*)cast184;
      int t186 = _ZNSt8ios_base7goodbitE_const;
      std__basic_ios_char__std__char_traits_char_____clear(cast185, t186);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNKSt4fposI11__mbstate_tEcvlEv
long std__fpos___mbstate_t___operator_long___const(struct std__fpos___mbstate_t_* v187) {
bb188:
  struct std__fpos___mbstate_t_* this189;
  long __retval190;
  this189 = v187;
  struct std__fpos___mbstate_t_* t191 = this189;
  long t192 = t191->_M_off;
  __retval190 = t192;
  long t193 = __retval190;
  return t193;
}

// function: _ZNKSi6gcountEv
long std__istream__gcount___const(struct std__basic_istream_char__std__char_traits_char__* v194) {
bb195:
  struct std__basic_istream_char__std__char_traits_char__* this196;
  long __retval197;
  this196 = v194;
  struct std__basic_istream_char__std__char_traits_char__* t198 = this196;
  long t199 = t198->_M_gcount;
  __retval197 = t199;
  long t200 = __retval197;
  return t200;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEE5closeEv
void std__basic_ifstream_char__std__char_traits_char_____close(struct std__basic_ifstream_char__std__char_traits_char__* v201) {
bb202:
  struct std__basic_ifstream_char__std__char_traits_char__* this203;
  this203 = v201;
  struct std__basic_ifstream_char__std__char_traits_char__* t204 = this203;
    struct std__basic_filebuf_char__std__char_traits_char__* r205 = std__basic_filebuf_char__std__char_traits_char_____close(&t204->_M_filebuf);
    if (__cir_exc_active) {
      return;
    }
    _Bool cast206 = (_Bool)r205;
    _Bool u207 = !cast206;
    if (u207) {
      void** v208 = (void**)t204;
      void* v209 = *((void**)v208);
      unsigned char* cast210 = (unsigned char*)v209;
      long c211 = -24;
      unsigned char* ptr212 = &(cast210)[c211];
      long* cast213 = (long*)ptr212;
      long t214 = *cast213;
      unsigned char* cast215 = (unsigned char*)t204;
      unsigned char* ptr216 = &(cast215)[t214];
      struct std__basic_ifstream_char__std__char_traits_char__* cast217 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr216;
      struct std__basic_ios_char__std__char_traits_char__* cast218 = (struct std__basic_ios_char__std__char_traits_char__*)cast217;
      int t219 = _ZNSt8ios_base7failbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast218, t219);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEED2Ev
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream_2(struct std__basic_ifstream_char__std__char_traits_char__* v220, void** v221) {
bb222:
  struct std__basic_ifstream_char__std__char_traits_char__* this223;
  void** vtt224;
  this223 = v220;
  vtt224 = v221;
  struct std__basic_ifstream_char__std__char_traits_char__* t225 = this223;
  void** t226 = vtt224;
    {
      std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t225->_M_filebuf);
    }
  {
    struct std__basic_istream_char__std__char_traits_char__* base227 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t225 + 0);
    static void *vtt_slot228 = 0;
    void** vtt229 = (void**)&vtt_slot228;
    std__basic_istream_char__std__char_traits_char______basic_istream(base227, vtt229);
  }
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* v230) {
bb231:
  struct std__basic_ifstream_char__std__char_traits_char__* this232;
  this232 = v230;
  struct std__basic_ifstream_char__std__char_traits_char__* t233 = this232;
    static void *vtt_slot234 = 0;
    void** vtt235 = (void**)&vtt_slot234;
    std__basic_ifstream_char__std__char_traits_char______basic_ifstream_2(t233, vtt235);
  {
    struct std__basic_ios_char__std__char_traits_char__* base236 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t233 + 256);
    std__basic_ios_char__std__char_traits_char______basic_ios(base236);
  }
  return;
}

// function: main
int main() {
bb237:
  int __retval238;
  int length239;
  char* buffer240;
  struct std__basic_ifstream_char__std__char_traits_char__ is241;
  struct std__fpos___mbstate_t_ ref_tmp0242;
  char* __new_result243;
  int c244 = 0;
  __retval238 = c244;
  std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(&is241);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    char* cast245 = (char*)&(_str);
    int t246 = _ZNSt8ios_base6binaryE_const;
    std__basic_ifstream_char__std__char_traits_char_____open(&is241, cast245, t246);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&is241);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_istream_char__std__char_traits_char__* base247 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(is241) + 0);
    long c248 = 0;
    unsigned int t249 = _ZNSt8ios_base3endE_const;
    struct std__basic_istream_char__std__char_traits_char__* r250 = std__istream__seekg(base247, c248, t249);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&is241);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_istream_char__std__char_traits_char__* base251 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(is241) + 0);
    struct std__fpos___mbstate_t_ r252 = std__istream__tellg(base251);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&is241);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    ref_tmp0242 = r252;
    long r253 = std__fpos___mbstate_t___operator_long___const(&ref_tmp0242);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&is241);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int cast254 = (int)r253;
    length239 = cast254;
    struct std__basic_istream_char__std__char_traits_char__* base255 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(is241) + 0);
    long c256 = 0;
    unsigned int t257 = _ZNSt8ios_base3begE_const;
    struct std__basic_istream_char__std__char_traits_char__* r258 = std__istream__seekg(base255, c256, t257);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&is241);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int t259 = length239;
    unsigned long cast260 = (unsigned long)t259;
    void* r261 = operator_new__(cast260);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&is241);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      char* cast262 = (char*)r261;
      __new_result243 = cast262;
    char* t263 = __new_result243;
    buffer240 = t263;
    struct std__basic_istream_char__std__char_traits_char__* base264 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(is241) + 0);
    char* t265 = buffer240;
    int t266 = length239;
    long cast267 = (long)t266;
    struct std__basic_istream_char__std__char_traits_char__* r268 = std__istream__read(base264, t265, cast267);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&is241);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int t269 = length239;
    struct std__basic_istream_char__std__char_traits_char__* base270 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(is241) + 0);
    long r271 = std__istream__gcount___const(base270);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&is241);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int cast272 = (int)r271;
    _Bool c273 = ((t269 == cast272)) ? 1 : 0;
    if (c273) {
    } else {
      char* cast274 = (char*)&(_str_1);
      char* c275 = _str_2;
      unsigned int c276 = 31;
      char* cast277 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast274, c275, c276, cast277);
    }
    std__basic_ifstream_char__std__char_traits_char_____close(&is241);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&is241);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* t278 = buffer240;
    int t279 = length239;
    long cast280 = (long)t279;
    struct std__basic_ostream_char__std__char_traits_char__* r281 = std__ostream__write(&_ZSt4cout, t278, cast280);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&is241);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* t282 = buffer240;
    char* c283 = ((void*)0);
    _Bool c284 = ((t282 != c283)) ? 1 : 0;
    if (c284) {
      void* cast285 = (void*)t282;
      {
        operator_delete__(cast285);
      }
    }
    int c286 = 0;
    __retval238 = c286;
    int t287 = __retval238;
    int ret_val288 = t287;
    {
      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&is241);
    }
    return ret_val288;
  int t289 = __retval238;
  return t289;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v290) {
bb291:
  struct std__basic_streambuf_char__std__char_traits_char__* this292;
  this292 = v290;
  struct std__basic_streambuf_char__std__char_traits_char__* t293 = this292;
  {
    std__locale___locale(&t293->_M_buf_locale);
  }
  return;
}

