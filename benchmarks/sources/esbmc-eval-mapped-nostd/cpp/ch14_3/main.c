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
struct std___Setprecision { int _M_n; };
struct std___Setw { int _M_n; };
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
struct std__ios_base { void* __field0; long _M_precision; long _M_width; int _M_flags; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_filebuf_char__std__char_traits_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; union pthread_mutex_t __field1; struct std____basic_file_char_ _M_file; int __field3; struct __mbstate_t __field4; struct __mbstate_t __field5; struct __mbstate_t __field6; char* __field7; unsigned long __field8; _Bool __field9; _Bool __field10; _Bool __field11; char __field12; char* __field13; char* __field14; _Bool __field15; struct std__codecvt_char__char____mbstate_t_* __field16; char* __field17; long __field18; char* __field19; char* __field20; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long _M_gcount; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__basic_ifstream_char__std__char_traits_char__ { struct std__basic_istream_char__std__char_traits_char__ __field0; struct std__basic_filebuf_char__std__char_traits_char__ _M_filebuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base7goodbitE_const __attribute__((aligned(4))) = 0;
int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base5rightE_const __attribute__((aligned(4))) = 128;
int _ZNSt8ios_base9showpointE_const __attribute__((aligned(4))) = 1024;
int _ZNSt8ios_base10floatfieldE_const __attribute__((aligned(4))) = 260;
int _ZNSt8ios_base5fixedE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base11adjustfieldE_const __attribute__((aligned(4))) = 176;
int _ZNSt8ios_base4leftE_const __attribute__((aligned(4))) = 32;
int _ZNSt8ios_base2inE_const __attribute__((aligned(4))) = 8;
char _str[12] = "clients.dat";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cerr __attribute__((aligned(8)));
char _str_1[25] = "File could not be opened";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[8] = "Account";
char _str_3[5] = "Name";
char _str_4[8] = "Balance";
extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void std__ios_base__ios_base(struct std__ios_base* p0);
void std__ios_base___ios_base(struct std__ios_base* p0) {}
void std__basic_ios_char__std__char_traits_char_____basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_istream_char__std__char_traits_char_____basic_istream(struct std__basic_istream_char__std__char_traits_char__* p0, void** p1);
extern void std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* p0);
extern void std__basic_ios_char__std__char_traits_char_____init(struct std__basic_ios_char__std__char_traits_char__* p0, struct std__basic_streambuf_char__std__char_traits_char__* p1);
extern struct std__basic_filebuf_char__std__char_traits_char__* std__basic_filebuf_char__std__char_traits_char_____open(struct std__basic_filebuf_char__std__char_traits_char__* p0, char* p1, int p2);
int std__operator__6(int p0, int p1);
int std__operator__4(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
void std__basic_ifstream_char__std__char_traits_char_____open(struct std__basic_ifstream_char__std__char_traits_char__* p0, char* p1, int p2);
void std__basic_filebuf_char__std__char_traits_char______basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* p0);
void std__basic_istream_char__std__char_traits_char______basic_istream(struct std__basic_istream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* p0, char* p1, int p2);
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
long std__ios_base__width(struct std__ios_base* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setw p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
int* std__operator__(int* p0, int p1);
int std__operator__3(int p0);
int std__operator__5(int p0, int p1);
int* std__operator___2(int* p0, int p1);
int std__operator__2(int p0, int p1);
int std__ios_base__setf_2(struct std__ios_base* p0, int p1, int p2);
struct std__ios_base* std__left(struct std__ios_base* p0);
struct std___Setw std__setw(int p0);
struct std__ios_base* std__fixed(struct std__ios_base* p0);
int std__ios_base__setf(struct std__ios_base* p0, int p1);
struct std__ios_base* std__showpoint(struct std__ios_base* p0);
extern void std____istream_extract(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___30ul__std__basic_istream_char__std__char_traits_char______char_(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__operator___2(struct std__basic_istream_char__std__char_traits_char__* p0, int* p1);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__std__istream___M_extract_double_(struct std__basic_istream_char__std__char_traits_char__* p0, double* p1);
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* p0, double* p1);
_Bool std__basic_ios_char__std__char_traits_char_____operator_bool___const(struct std__basic_ios_char__std__char_traits_char__* p0);
long std__ios_base__precision(struct std__ios_base* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setprecision p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
struct std___Setprecision std__setprecision(int p0);
struct std__ios_base* std__right(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_double_(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
void outputLine(int p0, char* p1, double p2);
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

// function: _ZStorSt13_Ios_OpenmodeS_
int std__operator__6(int v54, int v55) {
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
int std__operator__4(int v64, int v65) {
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
  int r90 = std__operator__4(r88, t89);
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
    int r102 = std__operator__6(t100, t101);
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

// function: _ZStanSt12_Ios_IostateS_
int std__operator_(int v197, int v198) {
bb199:
  int __a200;
  int __b201;
  int __retval202;
  __a200 = v197;
  __b201 = v198;
  int t203 = __a200;
  int t204 = __b201;
  int b205 = t203 & t204;
  __retval202 = b205;
  int t206 = __retval202;
  return t206;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE4failEv
_Bool std__basic_ios_char__std__char_traits_char_____fail___const(struct std__basic_ios_char__std__char_traits_char__* v207) {
bb208:
  struct std__basic_ios_char__std__char_traits_char__* this209;
  _Bool __retval210;
  this209 = v207;
  struct std__basic_ios_char__std__char_traits_char__* t211 = this209;
  int r212 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t211);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  int t213 = _ZNSt8ios_base6badbitE_const;
  int t214 = _ZNSt8ios_base7failbitE_const;
  int r215 = std__operator__4(t213, t214);
  int r216 = std__operator_(r212, r215);
  int c217 = 0;
  _Bool c218 = ((r216 != c217)) ? 1 : 0;
  __retval210 = c218;
  _Bool t219 = __retval210;
  return t219;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEEntEv
_Bool std__basic_ios_char__std__char_traits_char_____operator____const(struct std__basic_ios_char__std__char_traits_char__* v220) {
bb221:
  struct std__basic_ios_char__std__char_traits_char__* this222;
  _Bool __retval223;
  this222 = v220;
  struct std__basic_ios_char__std__char_traits_char__* t224 = this222;
  _Bool r225 = std__basic_ios_char__std__char_traits_char_____fail___const(t224);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  __retval223 = r225;
  _Bool t226 = __retval223;
  return t226;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb227:
  _Bool __retval228;
    _Bool c229 = 0;
    __retval228 = c229;
    _Bool t230 = __retval228;
    return t230;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v231, char* v232) {
bb233:
  char* __c1234;
  char* __c2235;
  _Bool __retval236;
  __c1234 = v231;
  __c2235 = v232;
  char* t237 = __c1234;
  char t238 = *t237;
  int cast239 = (int)t238;
  char* t240 = __c2235;
  char t241 = *t240;
  int cast242 = (int)t241;
  _Bool c243 = ((cast239 == cast242)) ? 1 : 0;
  __retval236 = c243;
  _Bool t244 = __retval236;
  return t244;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v245) {
bb246:
  char* __p247;
  unsigned long __retval248;
  unsigned long __i249;
  __p247 = v245;
  unsigned long c250 = 0;
  __i249 = c250;
    char ref_tmp0251;
    while (1) {
      unsigned long t252 = __i249;
      char* t253 = __p247;
      char* ptr254 = &(t253)[t252];
      char c255 = 0;
      ref_tmp0251 = c255;
      _Bool r256 = __gnu_cxx__char_traits_char___eq(ptr254, &ref_tmp0251);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u257 = !r256;
      if (!u257) break;
      unsigned long t258 = __i249;
      unsigned long u259 = t258 + 1;
      __i249 = u259;
    }
  unsigned long t260 = __i249;
  __retval248 = t260;
  unsigned long t261 = __retval248;
  return t261;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v262) {
bb263:
  char* __s264;
  unsigned long __retval265;
  __s264 = v262;
    _Bool r266 = std____is_constant_evaluated();
    if (r266) {
      char* t267 = __s264;
      unsigned long r268 = __gnu_cxx__char_traits_char___length(t267);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval265 = r268;
      unsigned long t269 = __retval265;
      return t269;
    }
  char* t270 = __s264;
  unsigned long r271 = strlen(t270);
  __retval265 = r271;
  unsigned long t272 = __retval265;
  return t272;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v273, char* v274) {
bb275:
  struct std__basic_ostream_char__std__char_traits_char__* __out276;
  char* __s277;
  struct std__basic_ostream_char__std__char_traits_char__* __retval278;
  __out276 = v273;
  __s277 = v274;
    char* t279 = __s277;
    _Bool cast280 = (_Bool)t279;
    _Bool u281 = !cast280;
    if (u281) {
      struct std__basic_ostream_char__std__char_traits_char__* t282 = __out276;
      void** v283 = (void**)t282;
      void* v284 = *((void**)v283);
      unsigned char* cast285 = (unsigned char*)v284;
      long c286 = -24;
      unsigned char* ptr287 = &(cast285)[c286];
      long* cast288 = (long*)ptr287;
      long t289 = *cast288;
      unsigned char* cast290 = (unsigned char*)t282;
      unsigned char* ptr291 = &(cast290)[t289];
      struct std__basic_ostream_char__std__char_traits_char__* cast292 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr291;
      struct std__basic_ios_char__std__char_traits_char__* cast293 = (struct std__basic_ios_char__std__char_traits_char__*)cast292;
      int t294 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast293, t294);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t295 = __out276;
      char* t296 = __s277;
      char* t297 = __s277;
      unsigned long r298 = std__char_traits_char___length(t297);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast299 = (long)r298;
      struct std__basic_ostream_char__std__char_traits_char__* r300 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t295, t296, cast299);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t301 = __out276;
  __retval278 = t301;
  struct std__basic_ostream_char__std__char_traits_char__* t302 = __retval278;
  return t302;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v303, void* v304) {
bb305:
  struct std__basic_ostream_char__std__char_traits_char__* this306;
  void* __pf307;
  struct std__basic_ostream_char__std__char_traits_char__* __retval308;
  this306 = v303;
  __pf307 = v304;
  struct std__basic_ostream_char__std__char_traits_char__* t309 = this306;
  void* t310 = __pf307;
  struct std__basic_ostream_char__std__char_traits_char__* r311 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t310)(t309);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval308 = r311;
  struct std__basic_ostream_char__std__char_traits_char__* t312 = __retval308;
  return t312;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v313) {
bb314:
  struct std__basic_ostream_char__std__char_traits_char__* __os315;
  struct std__basic_ostream_char__std__char_traits_char__* __retval316;
  __os315 = v313;
  struct std__basic_ostream_char__std__char_traits_char__* t317 = __os315;
  struct std__basic_ostream_char__std__char_traits_char__* r318 = std__ostream__flush(t317);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval316 = r318;
  struct std__basic_ostream_char__std__char_traits_char__* t319 = __retval316;
  return t319;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v320) {
bb321:
  struct std__ctype_char_* __f322;
  struct std__ctype_char_* __retval323;
  __f322 = v320;
    struct std__ctype_char_* t324 = __f322;
    _Bool cast325 = (_Bool)t324;
    _Bool u326 = !cast325;
    if (u326) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t327 = __f322;
  __retval323 = t327;
  struct std__ctype_char_* t328 = __retval323;
  return t328;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v329, char v330) {
bb331:
  struct std__ctype_char_* this332;
  char __c333;
  char __retval334;
  this332 = v329;
  __c333 = v330;
  struct std__ctype_char_* t335 = this332;
    char t336 = t335->_M_widen_ok;
    _Bool cast337 = (_Bool)t336;
    if (cast337) {
      char t338 = __c333;
      unsigned char cast339 = (unsigned char)t338;
      unsigned long cast340 = (unsigned long)cast339;
      char t341 = t335->_M_widen[cast340];
      __retval334 = t341;
      char t342 = __retval334;
      return t342;
    }
  std__ctype_char____M_widen_init___const(t335);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t343 = __c333;
  void** v344 = (void**)t335;
  void* v345 = *((void**)v344);
  char vcall348 = (char)__VERIFIER_virtual_call_char_char(t335, 6, t343);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval334 = vcall348;
  char t349 = __retval334;
  return t349;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v350, char v351) {
bb352:
  struct std__basic_ios_char__std__char_traits_char__* this353;
  char __c354;
  char __retval355;
  this353 = v350;
  __c354 = v351;
  struct std__basic_ios_char__std__char_traits_char__* t356 = this353;
  struct std__ctype_char_* t357 = t356->_M_ctype;
  struct std__ctype_char_* r358 = std__ctype_char__const__std____check_facet_std__ctype_char___(t357);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t359 = __c354;
  char r360 = std__ctype_char___widen_char__const(r358, t359);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval355 = r360;
  char t361 = __retval355;
  return t361;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v362) {
bb363:
  struct std__basic_ostream_char__std__char_traits_char__* __os364;
  struct std__basic_ostream_char__std__char_traits_char__* __retval365;
  __os364 = v362;
  struct std__basic_ostream_char__std__char_traits_char__* t366 = __os364;
  struct std__basic_ostream_char__std__char_traits_char__* t367 = __os364;
  void** v368 = (void**)t367;
  void* v369 = *((void**)v368);
  unsigned char* cast370 = (unsigned char*)v369;
  long c371 = -24;
  unsigned char* ptr372 = &(cast370)[c371];
  long* cast373 = (long*)ptr372;
  long t374 = *cast373;
  unsigned char* cast375 = (unsigned char*)t367;
  unsigned char* ptr376 = &(cast375)[t374];
  struct std__basic_ostream_char__std__char_traits_char__* cast377 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr376;
  struct std__basic_ios_char__std__char_traits_char__* cast378 = (struct std__basic_ios_char__std__char_traits_char__*)cast377;
  char c379 = 10;
  char r380 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast378, c379);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r381 = std__ostream__put(t366, r380);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r382 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r381);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval365 = r382;
  struct std__basic_ostream_char__std__char_traits_char__* t383 = __retval365;
  return t383;
}

// function: _ZNSt8ios_base5widthEl
long std__ios_base__width(struct std__ios_base* v384, long v385) {
bb386:
  struct std__ios_base* this387;
  long __wide388;
  long __retval389;
  long __old390;
  this387 = v384;
  __wide388 = v385;
  struct std__ios_base* t391 = this387;
  long t392 = t391->_M_width;
  __old390 = t392;
  long t393 = __wide388;
  t391->_M_width = t393;
  long t394 = __old390;
  __retval389 = t394;
  long t395 = __retval389;
  return t395;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v396, struct std___Setw v397) {
bb398:
  struct std__basic_ostream_char__std__char_traits_char__* __os399;
  struct std___Setw __f400;
  struct std__basic_ostream_char__std__char_traits_char__* __retval401;
  __os399 = v396;
  __f400 = v397;
  struct std__basic_ostream_char__std__char_traits_char__* t402 = __os399;
  void** v403 = (void**)t402;
  void* v404 = *((void**)v403);
  unsigned char* cast405 = (unsigned char*)v404;
  long c406 = -24;
  unsigned char* ptr407 = &(cast405)[c406];
  long* cast408 = (long*)ptr407;
  long t409 = *cast408;
  unsigned char* cast410 = (unsigned char*)t402;
  unsigned char* ptr411 = &(cast410)[t409];
  struct std__basic_ostream_char__std__char_traits_char__* cast412 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr411;
  struct std__ios_base* cast413 = (struct std__ios_base*)cast412;
  int t414 = __f400._M_n;
  long cast415 = (long)t414;
  long r416 = std__ios_base__width(cast413, cast415);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* t417 = __os399;
  __retval401 = t417;
  struct std__basic_ostream_char__std__char_traits_char__* t418 = __retval401;
  return t418;
}

// function: _ZNSolsEPFRSt8ios_baseS0_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* v419, void* v420) {
bb421:
  struct std__basic_ostream_char__std__char_traits_char__* this422;
  void* __pf423;
  struct std__basic_ostream_char__std__char_traits_char__* __retval424;
  this422 = v419;
  __pf423 = v420;
  struct std__basic_ostream_char__std__char_traits_char__* t425 = this422;
  void* t426 = __pf423;
  void** v427 = (void**)t425;
  void* v428 = *((void**)v427);
  unsigned char* cast429 = (unsigned char*)v428;
  long c430 = -24;
  unsigned char* ptr431 = &(cast429)[c430];
  long* cast432 = (long*)ptr431;
  long t433 = *cast432;
  unsigned char* cast434 = (unsigned char*)t425;
  unsigned char* ptr435 = &(cast434)[t433];
  struct std__basic_ostream_char__std__char_traits_char__* cast436 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr435;
  struct std__ios_base* cast437 = (struct std__ios_base*)cast436;
  struct std__ios_base* r438 = ((struct std__ios_base* (*)(struct std__ios_base*))t426)(cast437);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval424 = t425;
  struct std__basic_ostream_char__std__char_traits_char__* t439 = __retval424;
  return t439;
}

// function: _ZStaNRSt13_Ios_FmtflagsS_
int* std__operator__(int* v440, int v441) {
bb442:
  int* __a443;
  int __b444;
  int* __retval445;
  __a443 = v440;
  __b444 = v441;
  int* t446 = __a443;
  int t447 = *t446;
  int t448 = __b444;
  int r449 = std__operator__2(t447, t448);
  int* t450 = __a443;
  *t450 = r449;
  __retval445 = t450;
  int* t451 = __retval445;
  return t451;
}

// function: _ZStcoSt13_Ios_Fmtflags
int std__operator__3(int v452) {
bb453:
  int __a454;
  int __retval455;
  __a454 = v452;
  int t456 = __a454;
  int u457 = ~t456;
  __retval455 = u457;
  int t458 = __retval455;
  return t458;
}

// function: _ZStorSt13_Ios_FmtflagsS_
int std__operator__5(int v459, int v460) {
bb461:
  int __a462;
  int __b463;
  int __retval464;
  __a462 = v459;
  __b463 = v460;
  int t465 = __a462;
  int t466 = __b463;
  int b467 = t465 | t466;
  __retval464 = b467;
  int t468 = __retval464;
  return t468;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* std__operator___2(int* v469, int v470) {
bb471:
  int* __a472;
  int __b473;
  int* __retval474;
  __a472 = v469;
  __b473 = v470;
  int* t475 = __a472;
  int t476 = *t475;
  int t477 = __b473;
  int r478 = std__operator__5(t476, t477);
  int* t479 = __a472;
  *t479 = r478;
  __retval474 = t479;
  int* t480 = __retval474;
  return t480;
}

// function: _ZStanSt13_Ios_FmtflagsS_
int std__operator__2(int v481, int v482) {
bb483:
  int __a484;
  int __b485;
  int __retval486;
  __a484 = v481;
  __b485 = v482;
  int t487 = __a484;
  int t488 = __b485;
  int b489 = t487 & t488;
  __retval486 = b489;
  int t490 = __retval486;
  return t490;
}

// function: _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
int std__ios_base__setf_2(struct std__ios_base* v491, int v492, int v493) {
bb494:
  struct std__ios_base* this495;
  int __fmtfl496;
  int __mask497;
  int __retval498;
  int __old499;
  this495 = v491;
  __fmtfl496 = v492;
  __mask497 = v493;
  struct std__ios_base* t500 = this495;
  int t501 = t500->_M_flags;
  __old499 = t501;
  int t502 = __mask497;
  int r503 = std__operator__3(t502);
  int* r504 = std__operator__(&t500->_M_flags, r503);
  int t505 = __fmtfl496;
  int t506 = __mask497;
  int r507 = std__operator__2(t505, t506);
  int* r508 = std__operator___2(&t500->_M_flags, r507);
  int t509 = __old499;
  __retval498 = t509;
  int t510 = __retval498;
  return t510;
}

// function: _ZSt4leftRSt8ios_base
struct std__ios_base* std__left(struct std__ios_base* v511) {
bb512:
  struct std__ios_base* __base513;
  struct std__ios_base* __retval514;
  __base513 = v511;
  struct std__ios_base* t515 = __base513;
  int t516 = _ZNSt8ios_base4leftE_const;
  int t517 = _ZNSt8ios_base11adjustfieldE_const;
  int r518 = std__ios_base__setf_2(t515, t516, t517);
  if (__cir_exc_active) {
    struct std__ios_base* __cir_eh_ret = (struct std__ios_base*)0;
    return __cir_eh_ret;
  }
  struct std__ios_base* t519 = __base513;
  __retval514 = t519;
  struct std__ios_base* t520 = __retval514;
  return t520;
}

// function: _ZSt4setwi
struct std___Setw std__setw(int v521) {
bb522:
  int __n523;
  struct std___Setw __retval524;
  __n523 = v521;
  int t525 = __n523;
  __retval524._M_n = t525;
  struct std___Setw t526 = __retval524;
  return t526;
}

// function: _ZSt5fixedRSt8ios_base
struct std__ios_base* std__fixed(struct std__ios_base* v527) {
bb528:
  struct std__ios_base* __base529;
  struct std__ios_base* __retval530;
  __base529 = v527;
  struct std__ios_base* t531 = __base529;
  int t532 = _ZNSt8ios_base5fixedE_const;
  int t533 = _ZNSt8ios_base10floatfieldE_const;
  int r534 = std__ios_base__setf_2(t531, t532, t533);
  if (__cir_exc_active) {
    struct std__ios_base* __cir_eh_ret = (struct std__ios_base*)0;
    return __cir_eh_ret;
  }
  struct std__ios_base* t535 = __base529;
  __retval530 = t535;
  struct std__ios_base* t536 = __retval530;
  return t536;
}

// function: _ZNSt8ios_base4setfESt13_Ios_Fmtflags
int std__ios_base__setf(struct std__ios_base* v537, int v538) {
bb539:
  struct std__ios_base* this540;
  int __fmtfl541;
  int __retval542;
  int __old543;
  this540 = v537;
  __fmtfl541 = v538;
  struct std__ios_base* t544 = this540;
  int t545 = t544->_M_flags;
  __old543 = t545;
  int t546 = __fmtfl541;
  int* r547 = std__operator___2(&t544->_M_flags, t546);
  int t548 = __old543;
  __retval542 = t548;
  int t549 = __retval542;
  return t549;
}

// function: _ZSt9showpointRSt8ios_base
struct std__ios_base* std__showpoint(struct std__ios_base* v550) {
bb551:
  struct std__ios_base* __base552;
  struct std__ios_base* __retval553;
  __base552 = v550;
  struct std__ios_base* t554 = __base552;
  int t555 = _ZNSt8ios_base9showpointE_const;
  int r556 = std__ios_base__setf(t554, t555);
  if (__cir_exc_active) {
    struct std__ios_base* __cir_eh_ret = (struct std__ios_base*)0;
    return __cir_eh_ret;
  }
  struct std__ios_base* t557 = __base552;
  __retval553 = t557;
  struct std__ios_base* t558 = __retval553;
  return t558;
}

// function: _ZStrsIcSt11char_traitsIcELm30EERSt13basic_istreamIT_T0_ES6_RAT1__S3_
struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___30ul__std__basic_istream_char__std__char_traits_char______char_(struct std__basic_istream_char__std__char_traits_char__* v559, char* v560) {
bb561:
  struct std__basic_istream_char__std__char_traits_char__* __in562;
  char* __s563;
  struct std__basic_istream_char__std__char_traits_char__* __retval564;
  __in562 = v559;
  __s563 = v560;
  struct std__basic_istream_char__std__char_traits_char__* t565 = __in562;
  char* t566 = __s563;
  char* cast567 = (char*)t566;
  long c568 = 30;
  std____istream_extract(t565, cast567, c568);
  if (__cir_exc_active) {
    struct std__basic_istream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_istream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_istream_char__std__char_traits_char__* t569 = __in562;
  __retval564 = t569;
  struct std__basic_istream_char__std__char_traits_char__* t570 = __retval564;
  return t570;
}

// function: _ZNSirsERd
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* v571, double* v572) {
bb573:
  struct std__basic_istream_char__std__char_traits_char__* this574;
  double* __f575;
  struct std__basic_istream_char__std__char_traits_char__* __retval576;
  this574 = v571;
  __f575 = v572;
  struct std__basic_istream_char__std__char_traits_char__* t577 = this574;
  double* t578 = __f575;
  struct std__basic_istream_char__std__char_traits_char__* r579 = std__istream__std__istream___M_extract_double_(t577, t578);
  if (__cir_exc_active) {
    struct std__basic_istream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_istream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval576 = r579;
  struct std__basic_istream_char__std__char_traits_char__* t580 = __retval576;
  return t580;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEEcvbEv
_Bool std__basic_ios_char__std__char_traits_char_____operator_bool___const(struct std__basic_ios_char__std__char_traits_char__* v581) {
bb582:
  struct std__basic_ios_char__std__char_traits_char__* this583;
  _Bool __retval584;
  this583 = v581;
  struct std__basic_ios_char__std__char_traits_char__* t585 = this583;
  _Bool r586 = std__basic_ios_char__std__char_traits_char_____fail___const(t585);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  _Bool u587 = !r586;
  __retval584 = u587;
  _Bool t588 = __retval584;
  return t588;
}

// function: _ZNSt8ios_base9precisionEl
long std__ios_base__precision(struct std__ios_base* v589, long v590) {
bb591:
  struct std__ios_base* this592;
  long __prec593;
  long __retval594;
  long __old595;
  this592 = v589;
  __prec593 = v590;
  struct std__ios_base* t596 = this592;
  long t597 = t596->_M_precision;
  __old595 = t597;
  long t598 = __prec593;
  t596->_M_precision = t598;
  long t599 = __old595;
  __retval594 = t599;
  long t600 = __retval594;
  return t600;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v601, struct std___Setprecision v602) {
bb603:
  struct std__basic_ostream_char__std__char_traits_char__* __os604;
  struct std___Setprecision __f605;
  struct std__basic_ostream_char__std__char_traits_char__* __retval606;
  __os604 = v601;
  __f605 = v602;
  struct std__basic_ostream_char__std__char_traits_char__* t607 = __os604;
  void** v608 = (void**)t607;
  void* v609 = *((void**)v608);
  unsigned char* cast610 = (unsigned char*)v609;
  long c611 = -24;
  unsigned char* ptr612 = &(cast610)[c611];
  long* cast613 = (long*)ptr612;
  long t614 = *cast613;
  unsigned char* cast615 = (unsigned char*)t607;
  unsigned char* ptr616 = &(cast615)[t614];
  struct std__basic_ostream_char__std__char_traits_char__* cast617 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr616;
  struct std__ios_base* cast618 = (struct std__ios_base*)cast617;
  int t619 = __f605._M_n;
  long cast620 = (long)t619;
  long r621 = std__ios_base__precision(cast618, cast620);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* t622 = __os604;
  __retval606 = t622;
  struct std__basic_ostream_char__std__char_traits_char__* t623 = __retval606;
  return t623;
}

// function: _ZSt12setprecisioni
struct std___Setprecision std__setprecision(int v624) {
bb625:
  int __n626;
  struct std___Setprecision __retval627;
  __n626 = v624;
  int t628 = __n626;
  __retval627._M_n = t628;
  struct std___Setprecision t629 = __retval627;
  return t629;
}

// function: _ZSt5rightRSt8ios_base
struct std__ios_base* std__right(struct std__ios_base* v630) {
bb631:
  struct std__ios_base* __base632;
  struct std__ios_base* __retval633;
  __base632 = v630;
  struct std__ios_base* t634 = __base632;
  int t635 = _ZNSt8ios_base5rightE_const;
  int t636 = _ZNSt8ios_base11adjustfieldE_const;
  int r637 = std__ios_base__setf_2(t634, t635, t636);
  if (__cir_exc_active) {
    struct std__ios_base* __cir_eh_ret = (struct std__ios_base*)0;
    return __cir_eh_ret;
  }
  struct std__ios_base* t638 = __base632;
  __retval633 = t638;
  struct std__ios_base* t639 = __retval633;
  return t639;
}

// function: _ZNSolsEd
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v640, double v641) {
bb642:
  struct std__basic_ostream_char__std__char_traits_char__* this643;
  double __f644;
  struct std__basic_ostream_char__std__char_traits_char__* __retval645;
  this643 = v640;
  __f644 = v641;
  struct std__basic_ostream_char__std__char_traits_char__* t646 = this643;
  double t647 = __f644;
  struct std__basic_ostream_char__std__char_traits_char__* r648 = std__ostream__std__ostream___M_insert_double_(t646, t647);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval645 = r648;
  struct std__basic_ostream_char__std__char_traits_char__* t649 = __retval645;
  return t649;
}

// function: _Z10outputLineiPKcd
void outputLine(int v650, char* v651, double v652) {
bb653:
  int account654;
  char* name655;
  double balance656;
  struct std___Setw agg_tmp0657;
  struct std___Setw agg_tmp1658;
  struct std___Setw agg_tmp2659;
  struct std___Setprecision agg_tmp3660;
  account654 = v650;
  name655 = v651;
  balance656 = v652;
  struct std__basic_ostream_char__std__char_traits_char__* r661 = std__ostream__operator___std__ios_base_____(&_ZSt4cout, &std__left);
  if (__cir_exc_active) {
    return;
  }
  int c662 = 10;
  struct std___Setw r663 = std__setw(c662);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp0657 = r663;
  struct std___Setw t664 = agg_tmp0657;
  struct std__basic_ostream_char__std__char_traits_char__* r665 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(r661, t664);
  if (__cir_exc_active) {
    return;
  }
  int t666 = account654;
  struct std__basic_ostream_char__std__char_traits_char__* r667 = std__ostream__operator___2(r665, t666);
  if (__cir_exc_active) {
    return;
  }
  int c668 = 13;
  struct std___Setw r669 = std__setw(c668);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp1658 = r669;
  struct std___Setw t670 = agg_tmp1658;
  struct std__basic_ostream_char__std__char_traits_char__* r671 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(r667, t670);
  if (__cir_exc_active) {
    return;
  }
  char* t672 = name655;
  struct std__basic_ostream_char__std__char_traits_char__* r673 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r671, t672);
  if (__cir_exc_active) {
    return;
  }
  int c674 = 7;
  struct std___Setw r675 = std__setw(c674);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp2659 = r675;
  struct std___Setw t676 = agg_tmp2659;
  struct std__basic_ostream_char__std__char_traits_char__* r677 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(r673, t676);
  if (__cir_exc_active) {
    return;
  }
  int c678 = 2;
  struct std___Setprecision r679 = std__setprecision(c678);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp3660 = r679;
  struct std___Setprecision t680 = agg_tmp3660;
  struct std__basic_ostream_char__std__char_traits_char__* r681 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r677, t680);
  if (__cir_exc_active) {
    return;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r682 = std__ostream__operator___std__ios_base_____(r681, &std__right);
  if (__cir_exc_active) {
    return;
  }
  double t683 = balance656;
  struct std__basic_ostream_char__std__char_traits_char__* r684 = std__ostream__operator__(r682, t683);
  if (__cir_exc_active) {
    return;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r685 = std__ostream__operator___std__ostream_____(r684, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEED2Ev
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream_2(struct std__basic_ifstream_char__std__char_traits_char__* v686, void** v687) {
bb688:
  struct std__basic_ifstream_char__std__char_traits_char__* this689;
  void** vtt690;
  this689 = v686;
  vtt690 = v687;
  struct std__basic_ifstream_char__std__char_traits_char__* t691 = this689;
  void** t692 = vtt690;
    {
      std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t691->_M_filebuf);
    }
  {
    struct std__basic_istream_char__std__char_traits_char__* base693 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t691 + 0);
    static void *vtt_slot694 = 0;
    void** vtt695 = (void**)&vtt_slot694;
    std__basic_istream_char__std__char_traits_char______basic_istream(base693, vtt695);
  }
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* v696) {
bb697:
  struct std__basic_ifstream_char__std__char_traits_char__* this698;
  this698 = v696;
  struct std__basic_ifstream_char__std__char_traits_char__* t699 = this698;
    static void *vtt_slot700 = 0;
    void** vtt701 = (void**)&vtt_slot700;
    std__basic_ifstream_char__std__char_traits_char______basic_ifstream_2(t699, vtt701);
  {
    struct std__basic_ios_char__std__char_traits_char__* base702 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t699 + 256);
    std__basic_ios_char__std__char_traits_char______basic_ios(base702);
  }
  return;
}

// function: main
int main() {
bb703:
  int __retval704;
  struct std__basic_ifstream_char__std__char_traits_char__ inClientFile705;
  int account706;
  char name707[30];
  double balance708;
  struct std___Setw agg_tmp0709;
  struct std___Setw agg_tmp1710;
  int c711 = 0;
  __retval704 = c711;
  char* cast712 = (char*)&(_str);
  int t713 = _ZNSt8ios_base2inE_const;
  std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(&inClientFile705, cast712, t713);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
      void** v714 = (void**)&(inClientFile705);
      void* v715 = *((void**)v714);
      unsigned char* cast716 = (unsigned char*)v715;
      long c717 = -24;
      unsigned char* ptr718 = &(cast716)[c717];
      long* cast719 = (long*)ptr718;
      long t720 = *cast719;
      unsigned char* cast721 = (unsigned char*)&(inClientFile705);
      unsigned char* ptr722 = &(cast721)[t720];
      struct std__basic_ifstream_char__std__char_traits_char__* cast723 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr722;
      struct std__basic_ios_char__std__char_traits_char__* cast724 = (struct std__basic_ios_char__std__char_traits_char__*)cast723;
      _Bool r725 = std__basic_ios_char__std__char_traits_char_____operator____const(cast724);
      if (__cir_exc_active) {
        {
          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile705);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      if (r725) {
        char* cast726 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r727 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cerr, cast726);
        if (__cir_exc_active) {
          {
            std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile705);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        struct std__basic_ostream_char__std__char_traits_char__* r728 = std__ostream__operator___std__ostream_____(r727, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        if (__cir_exc_active) {
          {
            std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile705);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        int c729 = 1;
        exit(c729);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r730 = std__ostream__operator___std__ios_base_____(&_ZSt4cout, &std__left);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile705);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c731 = 10;
    struct std___Setw r732 = std__setw(c731);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile705);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp0709 = r732;
    struct std___Setw t733 = agg_tmp0709;
    struct std__basic_ostream_char__std__char_traits_char__* r734 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(r730, t733);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile705);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast735 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r736 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r734, cast735);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile705);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c737 = 13;
    struct std___Setw r738 = std__setw(c737);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile705);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp1710 = r738;
    struct std___Setw t739 = agg_tmp1710;
    struct std__basic_ostream_char__std__char_traits_char__* r740 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(r736, t739);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile705);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast741 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r742 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r740, cast741);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile705);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast743 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r744 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r742, cast743);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile705);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r745 = std__ostream__operator___std__ostream_____(r744, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile705);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r746 = std__ostream__operator___std__ios_base_____(r745, &std__fixed);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile705);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r747 = std__ostream__operator___std__ios_base_____(r746, &std__showpoint);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile705);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      while (1) {
        struct std__basic_istream_char__std__char_traits_char__* base748 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(inClientFile705) + 0);
        struct std__basic_istream_char__std__char_traits_char__* r749 = std__istream__operator___2(base748, &account706);
        if (__cir_exc_active) {
          {
            std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile705);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        struct std__basic_istream_char__std__char_traits_char__* r750 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___30ul__std__basic_istream_char__std__char_traits_char______char_(r749, name707);
        if (__cir_exc_active) {
          {
            std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile705);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        struct std__basic_istream_char__std__char_traits_char__* r751 = std__istream__operator__(r750, &balance708);
        if (__cir_exc_active) {
          {
            std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile705);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        void** v752 = (void**)r751;
        void* v753 = *((void**)v752);
        unsigned char* cast754 = (unsigned char*)v753;
        long c755 = -24;
        unsigned char* ptr756 = &(cast754)[c755];
        long* cast757 = (long*)ptr756;
        long t758 = *cast757;
        unsigned char* cast759 = (unsigned char*)r751;
        unsigned char* ptr760 = &(cast759)[t758];
        struct std__basic_istream_char__std__char_traits_char__* cast761 = (struct std__basic_istream_char__std__char_traits_char__*)ptr760;
        struct std__basic_ios_char__std__char_traits_char__* cast762 = (struct std__basic_ios_char__std__char_traits_char__*)cast761;
        _Bool r763 = std__basic_ios_char__std__char_traits_char_____operator_bool___const(cast762);
        if (__cir_exc_active) {
          {
            std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile705);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        if (!r763) break;
        int t764 = account706;
        char* cast765 = (char*)&(name707);
        double t766 = balance708;
        outputLine(t764, cast765, t766);
        if (__cir_exc_active) {
          {
            std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile705);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      }
    int c767 = 0;
    __retval704 = c767;
    int t768 = __retval704;
    int ret_val769 = t768;
    {
      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile705);
    }
    return ret_val769;
  int t770 = __retval704;
  return t770;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v771) {
bb772:
  struct std__basic_streambuf_char__std__char_traits_char__* this773;
  this773 = v771;
  struct std__basic_streambuf_char__std__char_traits_char__* t774 = this773;
  {
    std__locale___locale(&t774->_M_buf_locale);
  }
  return;
}

