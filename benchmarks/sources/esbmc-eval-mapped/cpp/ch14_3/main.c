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
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___;
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___;
struct __mbstate_t { int __field0; union anon_0 __field1; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale _M_buf_locale; };
struct std__ctype_char_;
struct std__ios_base { void* __field0; long _M_precision; long _M_width; int _M_flags; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_filebuf_char__std__char_traits_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; union pthread_mutex_t __field1; struct std____basic_file_char_ _M_file; int __field3; struct __mbstate_t __field4; struct __mbstate_t __field5; struct __mbstate_t __field6; char* __field7; unsigned long __field8; _Bool __field9; _Bool __field10; _Bool __field11; char __field12; char* __field13; char* __field14; _Bool __field15; struct std__codecvt_char__char____mbstate_t_* __field16; char* __field17; long __field18; char* __field19; char* __field20; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long _M_gcount; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__;
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
extern void exit(int p0);
void outputLine(int p0, char* p1, double p2);
int main();

extern unsigned char* _ZTTSt14basic_ifstreamIcSt11char_traitsIcEE[4] __attribute__((aligned(8)));

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z10outputLineiPKcd
void outputLine(int v0, char* v1, double v2) {
bb3:
  int account4;
  char* name5;
  double balance6;
  struct std___Setw agg_tmp07;
  struct std___Setw agg_tmp18;
  struct std___Setw agg_tmp29;
  struct std___Setprecision agg_tmp310;
  account4 = v0;
  name5 = v1;
  balance6 = v2;
  struct std__basic_ostream_char__std__char_traits_char__* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  int c12 = 10;
  struct std___Setw std13;
  __VERIFIER_nondet_memory(&std13, sizeof(std13));
  agg_tmp07 = std13;
  struct std___Setw t14 = agg_tmp07;
  struct std__basic_ostream_char__std__char_traits_char__* std15;
  __VERIFIER_nondet_memory(&std15, sizeof(std15));
  int t16 = account4;
  struct std__basic_ostream_char__std__char_traits_char__* std17;
  __VERIFIER_nondet_memory(&std17, sizeof(std17));
  int c18 = 13;
  struct std___Setw std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
  agg_tmp18 = std19;
  struct std___Setw t20 = agg_tmp18;
  struct std__basic_ostream_char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  char* t22 = name5;
  struct std__basic_ostream_char__std__char_traits_char__* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  int c24 = 7;
  struct std___Setw std25;
  __VERIFIER_nondet_memory(&std25, sizeof(std25));
  agg_tmp29 = std25;
  struct std___Setw t26 = agg_tmp29;
  struct std__basic_ostream_char__std__char_traits_char__* std27;
  __VERIFIER_nondet_memory(&std27, sizeof(std27));
  int c28 = 2;
  struct std___Setprecision std29;
  __VERIFIER_nondet_memory(&std29, sizeof(std29));
  agg_tmp310 = std29;
  struct std___Setprecision t30 = agg_tmp310;
  struct std__basic_ostream_char__std__char_traits_char__* std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
  struct std__basic_ostream_char__std__char_traits_char__* std32;
  __VERIFIER_nondet_memory(&std32, sizeof(std32));
  double t33 = balance6;
  struct std__basic_ostream_char__std__char_traits_char__* std34;
  __VERIFIER_nondet_memory(&std34, sizeof(std34));
  struct std__basic_ostream_char__std__char_traits_char__* std35;
  __VERIFIER_nondet_memory(&std35, sizeof(std35));
  return;
}

// function: main
int main() {
bb36:
  int __retval37;
  struct std__basic_ifstream_char__std__char_traits_char__ inClientFile38;
  int account39;
  char name40[30];
  double balance41;
  struct std___Setw agg_tmp042;
  struct std___Setw agg_tmp143;
  int c44 = 0;
  __retval37 = c44;
  char* cast45 = (char*)&(_str);
  int t46 = _ZNSt8ios_base2inE_const;
  // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::basic_ifstream(char const*, std::_Ios_Openmode)
  __VERIFIER_nondet_memory(&inClientFile38, sizeof(inClientFile38));
  __VERIFIER_nondet_memory(cast45, sizeof(*cast45));
      void** v47 = (void**)&(inClientFile38);
      void* v48 = *((void**)v47);
      unsigned char* cast49 = (unsigned char*)v48;
      long c50 = -24;
      unsigned char* ptr51 = &(cast49)[c50];
      long* cast52 = (long*)ptr51;
      long t53 = *cast52;
      unsigned char* cast54 = (unsigned char*)&(inClientFile38);
      unsigned char* ptr55 = &(cast54)[t53];
      struct std__basic_ifstream_char__std__char_traits_char__* cast56 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr55;
      struct std__basic_ios_char__std__char_traits_char__* cast57 = (struct std__basic_ios_char__std__char_traits_char__*)cast56;
      _Bool std58;
      __VERIFIER_nondet_memory(&std58, sizeof(std58));
      if (std58) {
        char* cast59 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std60;
        __VERIFIER_nondet_memory(&std60, sizeof(std60));
        struct std__basic_ostream_char__std__char_traits_char__* std61;
        __VERIFIER_nondet_memory(&std61, sizeof(std61));
        int c62 = 1;
        exit(c62);
      }
    struct std__basic_ostream_char__std__char_traits_char__* std63;
    __VERIFIER_nondet_memory(&std63, sizeof(std63));
    int c64 = 10;
    struct std___Setw std65;
    __VERIFIER_nondet_memory(&std65, sizeof(std65));
    agg_tmp042 = std65;
    struct std___Setw t66 = agg_tmp042;
    struct std__basic_ostream_char__std__char_traits_char__* std67;
    __VERIFIER_nondet_memory(&std67, sizeof(std67));
    char* cast68 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std69;
    __VERIFIER_nondet_memory(&std69, sizeof(std69));
    int c70 = 13;
    struct std___Setw std71;
    __VERIFIER_nondet_memory(&std71, sizeof(std71));
    agg_tmp143 = std71;
    struct std___Setw t72 = agg_tmp143;
    struct std__basic_ostream_char__std__char_traits_char__* std73;
    __VERIFIER_nondet_memory(&std73, sizeof(std73));
    char* cast74 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std75;
    __VERIFIER_nondet_memory(&std75, sizeof(std75));
    char* cast76 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std77;
    __VERIFIER_nondet_memory(&std77, sizeof(std77));
    struct std__basic_ostream_char__std__char_traits_char__* std78;
    __VERIFIER_nondet_memory(&std78, sizeof(std78));
    struct std__basic_ostream_char__std__char_traits_char__* std79;
    __VERIFIER_nondet_memory(&std79, sizeof(std79));
    struct std__basic_ostream_char__std__char_traits_char__* std80;
    __VERIFIER_nondet_memory(&std80, sizeof(std80));
      while (1) {
        struct std__basic_istream_char__std__char_traits_char__* base81 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(inClientFile38) + 0);
        struct std__basic_istream_char__std__char_traits_char__* std82;
        __VERIFIER_nondet_memory(&std82, sizeof(std82));
        struct std__basic_istream_char__std__char_traits_char__* std83;
        __VERIFIER_nondet_memory(&std83, sizeof(std83));
        struct std__basic_istream_char__std__char_traits_char__* std84;
        __VERIFIER_nondet_memory(&std84, sizeof(std84));
        void** v85 = (void**)std84;
        void* v86 = *((void**)v85);
        unsigned char* cast87 = (unsigned char*)v86;
        long c88 = -24;
        unsigned char* ptr89 = &(cast87)[c88];
        long* cast90 = (long*)ptr89;
        long t91 = *cast90;
        unsigned char* cast92 = (unsigned char*)std84;
        unsigned char* ptr93 = &(cast92)[t91];
        struct std__basic_istream_char__std__char_traits_char__* cast94 = (struct std__basic_istream_char__std__char_traits_char__*)ptr93;
        struct std__basic_ios_char__std__char_traits_char__* cast95 = (struct std__basic_ios_char__std__char_traits_char__*)cast94;
        _Bool std96;
        __VERIFIER_nondet_memory(&std96, sizeof(std96));
        if (!std96) break;
        int t97 = account39;
        char* cast98 = (char*)&(name40);
        double t99 = balance41;
        outputLine(t97, cast98, t99);
        if (__cir_exc_active) {
          {
            // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::~basic_ifstream()
            __VERIFIER_nondet_memory(&inClientFile38, sizeof(inClientFile38));
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      }
    int c100 = 0;
    __retval37 = c100;
    int t101 = __retval37;
    int ret_val102 = t101;
    {
      // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::~basic_ifstream()
      __VERIFIER_nondet_memory(&inClientFile38, sizeof(inClientFile38));
    }
    return ret_val102;
  int t103 = __retval37;
  return t103;
}

