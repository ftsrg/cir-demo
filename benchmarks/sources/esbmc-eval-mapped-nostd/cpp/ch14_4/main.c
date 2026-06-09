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
struct std__fpos___mbstate_t_ { long _M_off; struct __mbstate_t _M_state; };
struct std__ios_base { void* __field0; long _M_precision; long _M_width; int _M_flags; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_filebuf_char__std__char_traits_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; union pthread_mutex_t __field1; struct std____basic_file_char_ _M_file; int __field3; struct __mbstate_t __field4; struct __mbstate_t __field5; struct __mbstate_t __field6; char* __field7; unsigned long __field8; _Bool __field9; _Bool __field10; _Bool __field11; char __field12; char* __field13; char* __field14; _Bool __field15; struct std__codecvt_char__char____mbstate_t_* __field16; char* __field17; long __field18; char* __field19; char* __field20; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long _M_gcount; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__basic_ifstream_char__std__char_traits_char__ { struct std__basic_istream_char__std__char_traits_char__ __field0; struct std__basic_filebuf_char__std__char_traits_char__ _M_filebuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
int _ZNSt8ios_base6eofbitE_const __attribute__((aligned(4))) = 2;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base5rightE_const __attribute__((aligned(4))) = 128;
int _ZNSt8ios_base11adjustfieldE_const __attribute__((aligned(4))) = 176;
int _ZNSt8ios_base4leftE_const __attribute__((aligned(4))) = 32;
int _ZNSt8ios_base9showpointE_const __attribute__((aligned(4))) = 1024;
int _ZNSt8ios_base10floatfieldE_const __attribute__((aligned(4))) = 260;
int _ZNSt8ios_base5fixedE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base7goodbitE_const __attribute__((aligned(4))) = 0;
int _ZNSt8ios_base2inE_const __attribute__((aligned(4))) = 8;
char _str[12] = "clients.dat";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cerr __attribute__((aligned(8)));
char _str_1[25] = "File could not be opened";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[31] = "\nAccounts with zero balances:\n";
char _str_3[33] = "\nAccounts with credit balances:\n";
char _str_4[32] = "\nAccounts with debit balances:\n";
char _str_5[12] = "End of run.";
char _str_6[15] = "\nEnter request";
char _str_7[38] = " 1 - List accounts with zero balances";
char _str_8[40] = " 2 - List accounts with credit balances";
char _str_9[39] = " 3 - List accounts with debit balances";
char _str_10[16] = " 4 - End of run";
char _str_11[4] = "\n? ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
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
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
int* std__operator__(int* p0, int p1);
int std__operator__3(int p0);
int std__operator__5(int p0, int p1);
int* std__operator___2(int* p0, int p1);
int std__operator__2(int p0, int p1);
int std__ios_base__setf_2(struct std__ios_base* p0, int p1, int p2);
struct std__ios_base* std__fixed(struct std__ios_base* p0);
int std__ios_base__setf(struct std__ios_base* p0, int p1);
struct std__ios_base* std__showpoint(struct std__ios_base* p0);
int getRequest();
extern void std____istream_extract(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___30ul__std__basic_istream_char__std__char_traits_char______char_(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__operator___2(struct std__basic_istream_char__std__char_traits_char__* p0, int* p1);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__std__istream___M_extract_double_(struct std__basic_istream_char__std__char_traits_char__* p0, double* p1);
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* p0, double* p1);
_Bool std__basic_ios_char__std__char_traits_char_____eof___const(struct std__basic_ios_char__std__char_traits_char__* p0);
_Bool shouldDisplay(int p0, double p1);
long std__ios_base__precision(struct std__ios_base* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setprecision p1);
long std__ios_base__width(struct std__ios_base* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setw p1);
struct std__ios_base* std__left(struct std__ios_base* p0);
struct std___Setw std__setw(int p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
struct std___Setprecision std__setprecision(int p0);
struct std__ios_base* std__right(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_double_(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
void outputLine(int p0, char* p1, double p2);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__seekg(struct std__basic_istream_char__std__char_traits_char__* p0, struct std__fpos___mbstate_t_ p1);
void std__fpos___mbstate_t___fpos(struct std__fpos___mbstate_t_* p0, long p1);
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

// function: _ZNSolsEPFRSt8ios_baseS0_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* v384, void* v385) {
bb386:
  struct std__basic_ostream_char__std__char_traits_char__* this387;
  void* __pf388;
  struct std__basic_ostream_char__std__char_traits_char__* __retval389;
  this387 = v384;
  __pf388 = v385;
  struct std__basic_ostream_char__std__char_traits_char__* t390 = this387;
  void* t391 = __pf388;
  void** v392 = (void**)t390;
  void* v393 = *((void**)v392);
  unsigned char* cast394 = (unsigned char*)v393;
  long c395 = -24;
  unsigned char* ptr396 = &(cast394)[c395];
  long* cast397 = (long*)ptr396;
  long t398 = *cast397;
  unsigned char* cast399 = (unsigned char*)t390;
  unsigned char* ptr400 = &(cast399)[t398];
  struct std__basic_ostream_char__std__char_traits_char__* cast401 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr400;
  struct std__ios_base* cast402 = (struct std__ios_base*)cast401;
  struct std__ios_base* r403 = ((struct std__ios_base* (*)(struct std__ios_base*))t391)(cast402);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval389 = t390;
  struct std__basic_ostream_char__std__char_traits_char__* t404 = __retval389;
  return t404;
}

// function: _ZStaNRSt13_Ios_FmtflagsS_
int* std__operator__(int* v405, int v406) {
bb407:
  int* __a408;
  int __b409;
  int* __retval410;
  __a408 = v405;
  __b409 = v406;
  int* t411 = __a408;
  int t412 = *t411;
  int t413 = __b409;
  int r414 = std__operator__2(t412, t413);
  int* t415 = __a408;
  *t415 = r414;
  __retval410 = t415;
  int* t416 = __retval410;
  return t416;
}

// function: _ZStcoSt13_Ios_Fmtflags
int std__operator__3(int v417) {
bb418:
  int __a419;
  int __retval420;
  __a419 = v417;
  int t421 = __a419;
  int u422 = ~t421;
  __retval420 = u422;
  int t423 = __retval420;
  return t423;
}

// function: _ZStorSt13_Ios_FmtflagsS_
int std__operator__5(int v424, int v425) {
bb426:
  int __a427;
  int __b428;
  int __retval429;
  __a427 = v424;
  __b428 = v425;
  int t430 = __a427;
  int t431 = __b428;
  int b432 = t430 | t431;
  __retval429 = b432;
  int t433 = __retval429;
  return t433;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* std__operator___2(int* v434, int v435) {
bb436:
  int* __a437;
  int __b438;
  int* __retval439;
  __a437 = v434;
  __b438 = v435;
  int* t440 = __a437;
  int t441 = *t440;
  int t442 = __b438;
  int r443 = std__operator__5(t441, t442);
  int* t444 = __a437;
  *t444 = r443;
  __retval439 = t444;
  int* t445 = __retval439;
  return t445;
}

// function: _ZStanSt13_Ios_FmtflagsS_
int std__operator__2(int v446, int v447) {
bb448:
  int __a449;
  int __b450;
  int __retval451;
  __a449 = v446;
  __b450 = v447;
  int t452 = __a449;
  int t453 = __b450;
  int b454 = t452 & t453;
  __retval451 = b454;
  int t455 = __retval451;
  return t455;
}

// function: _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
int std__ios_base__setf_2(struct std__ios_base* v456, int v457, int v458) {
bb459:
  struct std__ios_base* this460;
  int __fmtfl461;
  int __mask462;
  int __retval463;
  int __old464;
  this460 = v456;
  __fmtfl461 = v457;
  __mask462 = v458;
  struct std__ios_base* t465 = this460;
  int t466 = t465->_M_flags;
  __old464 = t466;
  int t467 = __mask462;
  int r468 = std__operator__3(t467);
  int* r469 = std__operator__(&t465->_M_flags, r468);
  int t470 = __fmtfl461;
  int t471 = __mask462;
  int r472 = std__operator__2(t470, t471);
  int* r473 = std__operator___2(&t465->_M_flags, r472);
  int t474 = __old464;
  __retval463 = t474;
  int t475 = __retval463;
  return t475;
}

// function: _ZSt5fixedRSt8ios_base
struct std__ios_base* std__fixed(struct std__ios_base* v476) {
bb477:
  struct std__ios_base* __base478;
  struct std__ios_base* __retval479;
  __base478 = v476;
  struct std__ios_base* t480 = __base478;
  int t481 = _ZNSt8ios_base5fixedE_const;
  int t482 = _ZNSt8ios_base10floatfieldE_const;
  int r483 = std__ios_base__setf_2(t480, t481, t482);
  if (__cir_exc_active) {
    struct std__ios_base* __cir_eh_ret = (struct std__ios_base*)0;
    return __cir_eh_ret;
  }
  struct std__ios_base* t484 = __base478;
  __retval479 = t484;
  struct std__ios_base* t485 = __retval479;
  return t485;
}

// function: _ZNSt8ios_base4setfESt13_Ios_Fmtflags
int std__ios_base__setf(struct std__ios_base* v486, int v487) {
bb488:
  struct std__ios_base* this489;
  int __fmtfl490;
  int __retval491;
  int __old492;
  this489 = v486;
  __fmtfl490 = v487;
  struct std__ios_base* t493 = this489;
  int t494 = t493->_M_flags;
  __old492 = t494;
  int t495 = __fmtfl490;
  int* r496 = std__operator___2(&t493->_M_flags, t495);
  int t497 = __old492;
  __retval491 = t497;
  int t498 = __retval491;
  return t498;
}

// function: _ZSt9showpointRSt8ios_base
struct std__ios_base* std__showpoint(struct std__ios_base* v499) {
bb500:
  struct std__ios_base* __base501;
  struct std__ios_base* __retval502;
  __base501 = v499;
  struct std__ios_base* t503 = __base501;
  int t504 = _ZNSt8ios_base9showpointE_const;
  int r505 = std__ios_base__setf(t503, t504);
  if (__cir_exc_active) {
    struct std__ios_base* __cir_eh_ret = (struct std__ios_base*)0;
    return __cir_eh_ret;
  }
  struct std__ios_base* t506 = __base501;
  __retval502 = t506;
  struct std__ios_base* t507 = __retval502;
  return t507;
}

// function: _Z10getRequestv
int getRequest() {
bb508:
  int __retval509;
  int request510;
  char* cast511 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* r512 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast511);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r513 = std__ostream__operator___std__ostream_____(r512, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  char* cast514 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* r515 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r513, cast514);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r516 = std__ostream__operator___std__ostream_____(r515, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  char* cast517 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* r518 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r516, cast517);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r519 = std__ostream__operator___std__ostream_____(r518, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  char* cast520 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* r521 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r519, cast520);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r522 = std__ostream__operator___std__ostream_____(r521, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  char* cast523 = (char*)&(_str_10);
  struct std__basic_ostream_char__std__char_traits_char__* r524 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r522, cast523);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r525 = std__ostream__operator___std__ios_base_____(r524, &std__fixed);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r526 = std__ostream__operator___std__ios_base_____(r525, &std__showpoint);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    do {
        char* cast527 = (char*)&(_str_11);
        struct std__basic_ostream_char__std__char_traits_char__* r528 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast527);
        if (__cir_exc_active) {
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        struct std__basic_istream_char__std__char_traits_char__* r529 = std__istream__operator___2(&_ZSt3cin, &request510);
        if (__cir_exc_active) {
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      int t530 = request510;
      int c531 = 1;
      _Bool c532 = ((t530 < c531)) ? 1 : 0;
      _Bool ternary533;
      if (c532) {
        int t534 = request510;
        int c535 = 4;
        _Bool c536 = ((t534 > c535)) ? 1 : 0;
        ternary533 = (_Bool)c536;
      } else {
        _Bool c537 = 0;
        ternary533 = (_Bool)c537;
      }
      if (!ternary533) break;
    } while (1);
  int t538 = request510;
  __retval509 = t538;
  int t539 = __retval509;
  return t539;
}

// function: _ZStrsIcSt11char_traitsIcELm30EERSt13basic_istreamIT_T0_ES6_RAT1__S3_
struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___30ul__std__basic_istream_char__std__char_traits_char______char_(struct std__basic_istream_char__std__char_traits_char__* v540, char* v541) {
bb542:
  struct std__basic_istream_char__std__char_traits_char__* __in543;
  char* __s544;
  struct std__basic_istream_char__std__char_traits_char__* __retval545;
  __in543 = v540;
  __s544 = v541;
  struct std__basic_istream_char__std__char_traits_char__* t546 = __in543;
  char* t547 = __s544;
  char* cast548 = (char*)t547;
  long c549 = 30;
  std____istream_extract(t546, cast548, c549);
  if (__cir_exc_active) {
    struct std__basic_istream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_istream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_istream_char__std__char_traits_char__* t550 = __in543;
  __retval545 = t550;
  struct std__basic_istream_char__std__char_traits_char__* t551 = __retval545;
  return t551;
}

// function: _ZNSirsERd
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* v552, double* v553) {
bb554:
  struct std__basic_istream_char__std__char_traits_char__* this555;
  double* __f556;
  struct std__basic_istream_char__std__char_traits_char__* __retval557;
  this555 = v552;
  __f556 = v553;
  struct std__basic_istream_char__std__char_traits_char__* t558 = this555;
  double* t559 = __f556;
  struct std__basic_istream_char__std__char_traits_char__* r560 = std__istream__std__istream___M_extract_double_(t558, t559);
  if (__cir_exc_active) {
    struct std__basic_istream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_istream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval557 = r560;
  struct std__basic_istream_char__std__char_traits_char__* t561 = __retval557;
  return t561;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE3eofEv
_Bool std__basic_ios_char__std__char_traits_char_____eof___const(struct std__basic_ios_char__std__char_traits_char__* v562) {
bb563:
  struct std__basic_ios_char__std__char_traits_char__* this564;
  _Bool __retval565;
  this564 = v562;
  struct std__basic_ios_char__std__char_traits_char__* t566 = this564;
  int r567 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t566);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  int t568 = _ZNSt8ios_base6eofbitE_const;
  int r569 = std__operator_(r567, t568);
  int c570 = 0;
  _Bool c571 = ((r569 != c570)) ? 1 : 0;
  __retval565 = c571;
  _Bool t572 = __retval565;
  return t572;
}

// function: _Z13shouldDisplayid
_Bool shouldDisplay(int v573, double v574) {
bb575:
  int type576;
  double balance577;
  _Bool __retval578;
  type576 = v573;
  balance577 = v574;
    int t579 = type576;
    int c580 = 2;
    _Bool c581 = ((t579 == c580)) ? 1 : 0;
    _Bool ternary582;
    if (c581) {
      double t583 = balance577;
      int c584 = 0;
      double cast585 = (double)c584;
      _Bool c586 = ((t583 < cast585)) ? 1 : 0;
      ternary582 = (_Bool)c586;
    } else {
      _Bool c587 = 0;
      ternary582 = (_Bool)c587;
    }
    if (ternary582) {
      _Bool c588 = 1;
      __retval578 = c588;
      _Bool t589 = __retval578;
      return t589;
    }
    int t590 = type576;
    int c591 = 3;
    _Bool c592 = ((t590 == c591)) ? 1 : 0;
    _Bool ternary593;
    if (c592) {
      double t594 = balance577;
      int c595 = 0;
      double cast596 = (double)c595;
      _Bool c597 = ((t594 > cast596)) ? 1 : 0;
      ternary593 = (_Bool)c597;
    } else {
      _Bool c598 = 0;
      ternary593 = (_Bool)c598;
    }
    if (ternary593) {
      _Bool c599 = 1;
      __retval578 = c599;
      _Bool t600 = __retval578;
      return t600;
    }
    int t601 = type576;
    int c602 = 1;
    _Bool c603 = ((t601 == c602)) ? 1 : 0;
    _Bool ternary604;
    if (c603) {
      double t605 = balance577;
      int c606 = 0;
      double cast607 = (double)c606;
      _Bool c608 = ((t605 == cast607)) ? 1 : 0;
      ternary604 = (_Bool)c608;
    } else {
      _Bool c609 = 0;
      ternary604 = (_Bool)c609;
    }
    if (ternary604) {
      _Bool c610 = 1;
      __retval578 = c610;
      _Bool t611 = __retval578;
      return t611;
    }
  _Bool c612 = 0;
  __retval578 = c612;
  _Bool t613 = __retval578;
  return t613;
}

// function: _ZNSt8ios_base9precisionEl
long std__ios_base__precision(struct std__ios_base* v614, long v615) {
bb616:
  struct std__ios_base* this617;
  long __prec618;
  long __retval619;
  long __old620;
  this617 = v614;
  __prec618 = v615;
  struct std__ios_base* t621 = this617;
  long t622 = t621->_M_precision;
  __old620 = t622;
  long t623 = __prec618;
  t621->_M_precision = t623;
  long t624 = __old620;
  __retval619 = t624;
  long t625 = __retval619;
  return t625;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v626, struct std___Setprecision v627) {
bb628:
  struct std__basic_ostream_char__std__char_traits_char__* __os629;
  struct std___Setprecision __f630;
  struct std__basic_ostream_char__std__char_traits_char__* __retval631;
  __os629 = v626;
  __f630 = v627;
  struct std__basic_ostream_char__std__char_traits_char__* t632 = __os629;
  void** v633 = (void**)t632;
  void* v634 = *((void**)v633);
  unsigned char* cast635 = (unsigned char*)v634;
  long c636 = -24;
  unsigned char* ptr637 = &(cast635)[c636];
  long* cast638 = (long*)ptr637;
  long t639 = *cast638;
  unsigned char* cast640 = (unsigned char*)t632;
  unsigned char* ptr641 = &(cast640)[t639];
  struct std__basic_ostream_char__std__char_traits_char__* cast642 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr641;
  struct std__ios_base* cast643 = (struct std__ios_base*)cast642;
  int t644 = __f630._M_n;
  long cast645 = (long)t644;
  long r646 = std__ios_base__precision(cast643, cast645);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* t647 = __os629;
  __retval631 = t647;
  struct std__basic_ostream_char__std__char_traits_char__* t648 = __retval631;
  return t648;
}

// function: _ZNSt8ios_base5widthEl
long std__ios_base__width(struct std__ios_base* v649, long v650) {
bb651:
  struct std__ios_base* this652;
  long __wide653;
  long __retval654;
  long __old655;
  this652 = v649;
  __wide653 = v650;
  struct std__ios_base* t656 = this652;
  long t657 = t656->_M_width;
  __old655 = t657;
  long t658 = __wide653;
  t656->_M_width = t658;
  long t659 = __old655;
  __retval654 = t659;
  long t660 = __retval654;
  return t660;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v661, struct std___Setw v662) {
bb663:
  struct std__basic_ostream_char__std__char_traits_char__* __os664;
  struct std___Setw __f665;
  struct std__basic_ostream_char__std__char_traits_char__* __retval666;
  __os664 = v661;
  __f665 = v662;
  struct std__basic_ostream_char__std__char_traits_char__* t667 = __os664;
  void** v668 = (void**)t667;
  void* v669 = *((void**)v668);
  unsigned char* cast670 = (unsigned char*)v669;
  long c671 = -24;
  unsigned char* ptr672 = &(cast670)[c671];
  long* cast673 = (long*)ptr672;
  long t674 = *cast673;
  unsigned char* cast675 = (unsigned char*)t667;
  unsigned char* ptr676 = &(cast675)[t674];
  struct std__basic_ostream_char__std__char_traits_char__* cast677 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr676;
  struct std__ios_base* cast678 = (struct std__ios_base*)cast677;
  int t679 = __f665._M_n;
  long cast680 = (long)t679;
  long r681 = std__ios_base__width(cast678, cast680);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* t682 = __os664;
  __retval666 = t682;
  struct std__basic_ostream_char__std__char_traits_char__* t683 = __retval666;
  return t683;
}

// function: _ZSt4leftRSt8ios_base
struct std__ios_base* std__left(struct std__ios_base* v684) {
bb685:
  struct std__ios_base* __base686;
  struct std__ios_base* __retval687;
  __base686 = v684;
  struct std__ios_base* t688 = __base686;
  int t689 = _ZNSt8ios_base4leftE_const;
  int t690 = _ZNSt8ios_base11adjustfieldE_const;
  int r691 = std__ios_base__setf_2(t688, t689, t690);
  if (__cir_exc_active) {
    struct std__ios_base* __cir_eh_ret = (struct std__ios_base*)0;
    return __cir_eh_ret;
  }
  struct std__ios_base* t692 = __base686;
  __retval687 = t692;
  struct std__ios_base* t693 = __retval687;
  return t693;
}

// function: _ZSt4setwi
struct std___Setw std__setw(int v694) {
bb695:
  int __n696;
  struct std___Setw __retval697;
  __n696 = v694;
  int t698 = __n696;
  __retval697._M_n = t698;
  struct std___Setw t699 = __retval697;
  return t699;
}

// function: _ZSt12setprecisioni
struct std___Setprecision std__setprecision(int v700) {
bb701:
  int __n702;
  struct std___Setprecision __retval703;
  __n702 = v700;
  int t704 = __n702;
  __retval703._M_n = t704;
  struct std___Setprecision t705 = __retval703;
  return t705;
}

// function: _ZSt5rightRSt8ios_base
struct std__ios_base* std__right(struct std__ios_base* v706) {
bb707:
  struct std__ios_base* __base708;
  struct std__ios_base* __retval709;
  __base708 = v706;
  struct std__ios_base* t710 = __base708;
  int t711 = _ZNSt8ios_base5rightE_const;
  int t712 = _ZNSt8ios_base11adjustfieldE_const;
  int r713 = std__ios_base__setf_2(t710, t711, t712);
  if (__cir_exc_active) {
    struct std__ios_base* __cir_eh_ret = (struct std__ios_base*)0;
    return __cir_eh_ret;
  }
  struct std__ios_base* t714 = __base708;
  __retval709 = t714;
  struct std__ios_base* t715 = __retval709;
  return t715;
}

// function: _ZNSolsEd
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v716, double v717) {
bb718:
  struct std__basic_ostream_char__std__char_traits_char__* this719;
  double __f720;
  struct std__basic_ostream_char__std__char_traits_char__* __retval721;
  this719 = v716;
  __f720 = v717;
  struct std__basic_ostream_char__std__char_traits_char__* t722 = this719;
  double t723 = __f720;
  struct std__basic_ostream_char__std__char_traits_char__* r724 = std__ostream__std__ostream___M_insert_double_(t722, t723);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval721 = r724;
  struct std__basic_ostream_char__std__char_traits_char__* t725 = __retval721;
  return t725;
}

// function: _Z10outputLineiPKcd
void outputLine(int v726, char* v727, double v728) {
bb729:
  int account730;
  char* name731;
  double balance732;
  struct std___Setw agg_tmp0733;
  struct std___Setw agg_tmp1734;
  struct std___Setw agg_tmp2735;
  struct std___Setprecision agg_tmp3736;
  account730 = v726;
  name731 = v727;
  balance732 = v728;
  struct std__basic_ostream_char__std__char_traits_char__* r737 = std__ostream__operator___std__ios_base_____(&_ZSt4cout, &std__left);
  if (__cir_exc_active) {
    return;
  }
  int c738 = 10;
  struct std___Setw r739 = std__setw(c738);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp0733 = r739;
  struct std___Setw t740 = agg_tmp0733;
  struct std__basic_ostream_char__std__char_traits_char__* r741 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(r737, t740);
  if (__cir_exc_active) {
    return;
  }
  int t742 = account730;
  struct std__basic_ostream_char__std__char_traits_char__* r743 = std__ostream__operator___2(r741, t742);
  if (__cir_exc_active) {
    return;
  }
  int c744 = 13;
  struct std___Setw r745 = std__setw(c744);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp1734 = r745;
  struct std___Setw t746 = agg_tmp1734;
  struct std__basic_ostream_char__std__char_traits_char__* r747 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(r743, t746);
  if (__cir_exc_active) {
    return;
  }
  char* t748 = name731;
  struct std__basic_ostream_char__std__char_traits_char__* r749 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r747, t748);
  if (__cir_exc_active) {
    return;
  }
  int c750 = 7;
  struct std___Setw r751 = std__setw(c750);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp2735 = r751;
  struct std___Setw t752 = agg_tmp2735;
  struct std__basic_ostream_char__std__char_traits_char__* r753 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(r749, t752);
  if (__cir_exc_active) {
    return;
  }
  int c754 = 2;
  struct std___Setprecision r755 = std__setprecision(c754);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp3736 = r755;
  struct std___Setprecision t756 = agg_tmp3736;
  struct std__basic_ostream_char__std__char_traits_char__* r757 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r753, t756);
  if (__cir_exc_active) {
    return;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r758 = std__ostream__operator___std__ios_base_____(r757, &std__right);
  if (__cir_exc_active) {
    return;
  }
  double t759 = balance732;
  struct std__basic_ostream_char__std__char_traits_char__* r760 = std__ostream__operator__(r758, t759);
  if (__cir_exc_active) {
    return;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r761 = std__ostream__operator___std__ostream_____(r760, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt4fposI11__mbstate_tEC2El
void std__fpos___mbstate_t___fpos(struct std__fpos___mbstate_t_* v762, long v763) {
bb764:
  struct std__fpos___mbstate_t_* this765;
  long __off766;
  this765 = v762;
  __off766 = v763;
  struct std__fpos___mbstate_t_* t767 = this765;
  long t768 = __off766;
  t767->_M_off = t768;
  struct __mbstate_t c769 = {0};
  t767->_M_state = c769;
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEED2Ev
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream_2(struct std__basic_ifstream_char__std__char_traits_char__* v770, void** v771) {
bb772:
  struct std__basic_ifstream_char__std__char_traits_char__* this773;
  void** vtt774;
  this773 = v770;
  vtt774 = v771;
  struct std__basic_ifstream_char__std__char_traits_char__* t775 = this773;
  void** t776 = vtt774;
    {
      std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t775->_M_filebuf);
    }
  {
    struct std__basic_istream_char__std__char_traits_char__* base777 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t775 + 0);
    static void *vtt_slot778 = 0;
    void** vtt779 = (void**)&vtt_slot778;
    std__basic_istream_char__std__char_traits_char______basic_istream(base777, vtt779);
  }
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* v780) {
bb781:
  struct std__basic_ifstream_char__std__char_traits_char__* this782;
  this782 = v780;
  struct std__basic_ifstream_char__std__char_traits_char__* t783 = this782;
    static void *vtt_slot784 = 0;
    void** vtt785 = (void**)&vtt_slot784;
    std__basic_ifstream_char__std__char_traits_char______basic_ifstream_2(t783, vtt785);
  {
    struct std__basic_ios_char__std__char_traits_char__* base786 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t783 + 256);
    std__basic_ios_char__std__char_traits_char______basic_ios(base786);
  }
  return;
}

// function: main
int main() {
bb787:
  int __retval788;
  struct std__basic_ifstream_char__std__char_traits_char__ inClientFile789;
  int request790;
  int account791;
  char name792[30];
  double balance793;
  int c794 = 0;
  __retval788 = c794;
  char* cast795 = (char*)&(_str);
  int t796 = _ZNSt8ios_base2inE_const;
  std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(&inClientFile789, cast795, t796);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
      void** v797 = (void**)&(inClientFile789);
      void* v798 = *((void**)v797);
      unsigned char* cast799 = (unsigned char*)v798;
      long c800 = -24;
      unsigned char* ptr801 = &(cast799)[c800];
      long* cast802 = (long*)ptr801;
      long t803 = *cast802;
      unsigned char* cast804 = (unsigned char*)&(inClientFile789);
      unsigned char* ptr805 = &(cast804)[t803];
      struct std__basic_ifstream_char__std__char_traits_char__* cast806 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr805;
      struct std__basic_ios_char__std__char_traits_char__* cast807 = (struct std__basic_ios_char__std__char_traits_char__*)cast806;
      _Bool r808 = std__basic_ios_char__std__char_traits_char_____operator____const(cast807);
      if (__cir_exc_active) {
        {
          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile789);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      if (r808) {
        char* cast809 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r810 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cerr, cast809);
        if (__cir_exc_active) {
          {
            std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile789);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        struct std__basic_ostream_char__std__char_traits_char__* r811 = std__ostream__operator___std__ostream_____(r810, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        if (__cir_exc_active) {
          {
            std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile789);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        int c812 = 1;
        exit(c812);
      }
    int r813 = getRequest();
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile789);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    request790 = r813;
      while (1) {
        int t814 = request790;
        int c815 = 4;
        _Bool c816 = ((t814 != c815)) ? 1 : 0;
        if (!c816) break;
          struct std__fpos___mbstate_t_ agg_tmp0817;
            int t818 = request790;
            switch (t818) {
            case 1:
              char* cast819 = (char*)&(_str_2);
              struct std__basic_ostream_char__std__char_traits_char__* r820 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast819);
              if (__cir_exc_active) {
                {
                  std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile789);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              break;
            case 2:
              char* cast821 = (char*)&(_str_3);
              struct std__basic_ostream_char__std__char_traits_char__* r822 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast821);
              if (__cir_exc_active) {
                {
                  std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile789);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              break;
            case 3:
              char* cast823 = (char*)&(_str_4);
              struct std__basic_ostream_char__std__char_traits_char__* r824 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast823);
              if (__cir_exc_active) {
                {
                  std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile789);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              break;
            }
          struct std__basic_istream_char__std__char_traits_char__* base825 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(inClientFile789) + 0);
          struct std__basic_istream_char__std__char_traits_char__* r826 = std__istream__operator___2(base825, &account791);
          if (__cir_exc_active) {
            {
              std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile789);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          struct std__basic_istream_char__std__char_traits_char__* r827 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___30ul__std__basic_istream_char__std__char_traits_char______char_(r826, name792);
          if (__cir_exc_active) {
            {
              std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile789);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          struct std__basic_istream_char__std__char_traits_char__* r828 = std__istream__operator__(r827, &balance793);
          if (__cir_exc_active) {
            {
              std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile789);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
            while (1) {
              void** v829 = (void**)&(inClientFile789);
              void* v830 = *((void**)v829);
              unsigned char* cast831 = (unsigned char*)v830;
              long c832 = -24;
              unsigned char* ptr833 = &(cast831)[c832];
              long* cast834 = (long*)ptr833;
              long t835 = *cast834;
              unsigned char* cast836 = (unsigned char*)&(inClientFile789);
              unsigned char* ptr837 = &(cast836)[t835];
              struct std__basic_ifstream_char__std__char_traits_char__* cast838 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr837;
              struct std__basic_ios_char__std__char_traits_char__* cast839 = (struct std__basic_ios_char__std__char_traits_char__*)cast838;
              _Bool r840 = std__basic_ios_char__std__char_traits_char_____eof___const(cast839);
              if (__cir_exc_active) {
                {
                  std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile789);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              _Bool u841 = !r840;
              if (!u841) break;
                  int t842 = request790;
                  double t843 = balance793;
                  _Bool r844 = shouldDisplay(t842, t843);
                  if (__cir_exc_active) {
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile789);
                    }
                    int __cir_eh_ret = (int)0;
                    return __cir_eh_ret;
                  }
                  if (r844) {
                    int t845 = account791;
                    char* cast846 = (char*)&(name792);
                    double t847 = balance793;
                    outputLine(t845, cast846, t847);
                    if (__cir_exc_active) {
                      {
                        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile789);
                      }
                      int __cir_eh_ret = (int)0;
                      return __cir_eh_ret;
                    }
                  }
                struct std__basic_istream_char__std__char_traits_char__* base848 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(inClientFile789) + 0);
                struct std__basic_istream_char__std__char_traits_char__* r849 = std__istream__operator___2(base848, &account791);
                if (__cir_exc_active) {
                  {
                    std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile789);
                  }
                  int __cir_eh_ret = (int)0;
                  return __cir_eh_ret;
                }
                struct std__basic_istream_char__std__char_traits_char__* r850 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___30ul__std__basic_istream_char__std__char_traits_char______char_(r849, name792);
                if (__cir_exc_active) {
                  {
                    std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile789);
                  }
                  int __cir_eh_ret = (int)0;
                  return __cir_eh_ret;
                }
                struct std__basic_istream_char__std__char_traits_char__* r851 = std__istream__operator__(r850, &balance793);
                if (__cir_exc_active) {
                  {
                    std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile789);
                  }
                  int __cir_eh_ret = (int)0;
                  return __cir_eh_ret;
                }
            }
          void** v852 = (void**)&(inClientFile789);
          void* v853 = *((void**)v852);
          unsigned char* cast854 = (unsigned char*)v853;
          long c855 = -24;
          unsigned char* ptr856 = &(cast854)[c855];
          long* cast857 = (long*)ptr856;
          long t858 = *cast857;
          unsigned char* cast859 = (unsigned char*)&(inClientFile789);
          unsigned char* ptr860 = &(cast859)[t858];
          struct std__basic_ifstream_char__std__char_traits_char__* cast861 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr860;
          struct std__basic_ios_char__std__char_traits_char__* cast862 = (struct std__basic_ios_char__std__char_traits_char__*)cast861;
          int t863 = _ZNSt8ios_base7goodbitE_const;
          std__basic_ios_char__std__char_traits_char_____clear(cast862, t863);
          if (__cir_exc_active) {
            {
              std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile789);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          struct std__basic_istream_char__std__char_traits_char__* base864 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(inClientFile789) + 0);
          long c865 = 0;
          std__fpos___mbstate_t___fpos(&agg_tmp0817, c865);
          if (__cir_exc_active) {
            {
              std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile789);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          struct std__fpos___mbstate_t_ t866 = agg_tmp0817;
          struct std__basic_istream_char__std__char_traits_char__* r867 = std__istream__seekg(base864, t866);
          if (__cir_exc_active) {
            {
              std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile789);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int r868 = getRequest();
          if (__cir_exc_active) {
            {
              std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile789);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          request790 = r868;
      }
    char* cast869 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* r870 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast869);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile789);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r871 = std__ostream__operator___std__ostream_____(r870, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile789);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c872 = 0;
    __retval788 = c872;
    int t873 = __retval788;
    int ret_val874 = t873;
    {
      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&inClientFile789);
    }
    return ret_val874;
  int t875 = __retval788;
  return t875;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v876) {
bb877:
  struct std__basic_streambuf_char__std__char_traits_char__* this878;
  this878 = v876;
  struct std__basic_streambuf_char__std__char_traits_char__* t879 = this878;
  {
    std__locale___locale(&t879->_M_buf_locale);
  }
  return;
}

