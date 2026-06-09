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
struct std____basic_file_char_ { struct _IO_FILE* __field0; _Bool __field1; unsigned char __field2[7]; } __attribute__((packed));
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___;
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___;
struct __mbstate_t { int __field0; union anon_0 __field1; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale _M_buf_locale; };
struct std__ctype_char_;
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_filebuf_char__std__char_traits_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; union pthread_mutex_t __field1; struct std____basic_file_char_ _M_file; int __field3; struct __mbstate_t __field4; struct __mbstate_t __field5; struct __mbstate_t __field6; char* __field7; unsigned long __field8; _Bool __field9; _Bool __field10; _Bool __field11; char __field12; char* __field13; char* __field14; _Bool __field15; struct std__codecvt_char__char____mbstate_t_* __field16; char* __field17; long __field18; char* __field19; char* __field20; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_istream_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__basic_ofstream_char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__ __field0; struct std__basic_filebuf_char__std__char_traits_char__ _M_filebuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base7goodbitE_const __attribute__((aligned(4))) = 0;
int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base3outE_const __attribute__((aligned(4))) = 16;
char _str[12] = "clients.dat";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cerr __attribute__((aligned(8)));
char _str_1[25] = "File could not be opened";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[38] = "Enter the account, name, and balance.";
char _str_3[35] = "Enter end-of-file to end input.\n? ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_4[3] = "? ";
extern void *_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void exit(int p0);
int main();

extern unsigned char* _ZTTSt14basic_ofstreamIcSt11char_traitsIcEE[4] __attribute__((aligned(8)));

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__basic_ofstream_char__std__char_traits_char__ outClientFile2;
  int account3;
  char name4[30];
  double balance5;
  int c6 = 0;
  __retval1 = c6;
  char* cast7 = (char*)&(_str);
  int t8 = _ZNSt8ios_base3outE_const;
  // externalized std:: op: std::basic_ofstream<char, std::char_traits<char> >::basic_ofstream(char const*, std::_Ios_Openmode)
  __VERIFIER_nondet_memory(&outClientFile2, sizeof(outClientFile2));
  __VERIFIER_nondet_memory(cast7, sizeof(*cast7));
      void** v9 = (void**)&(outClientFile2);
      void* v10 = *((void**)v9);
      unsigned char* cast11 = (unsigned char*)v10;
      long c12 = -24;
      unsigned char* ptr13 = &(cast11)[c12];
      long* cast14 = (long*)ptr13;
      long t15 = *cast14;
      unsigned char* cast16 = (unsigned char*)&(outClientFile2);
      unsigned char* ptr17 = &(cast16)[t15];
      struct std__basic_ofstream_char__std__char_traits_char__* cast18 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr17;
      struct std__basic_ios_char__std__char_traits_char__* cast19 = (struct std__basic_ios_char__std__char_traits_char__*)cast18;
      _Bool std20;
      __VERIFIER_nondet_memory(&std20, sizeof(std20));
      if (std20) {
        char* cast21 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std22;
        __VERIFIER_nondet_memory(&std22, sizeof(std22));
        struct std__basic_ostream_char__std__char_traits_char__* std23;
        __VERIFIER_nondet_memory(&std23, sizeof(std23));
        int c24 = 1;
        exit(c24);
      }
    char* cast25 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    struct std__basic_ostream_char__std__char_traits_char__* std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    char* cast28 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
      while (1) {
        struct std__basic_istream_char__std__char_traits_char__* std30;
        __VERIFIER_nondet_memory(&std30, sizeof(std30));
        struct std__basic_istream_char__std__char_traits_char__* std31;
        __VERIFIER_nondet_memory(&std31, sizeof(std31));
        struct std__basic_istream_char__std__char_traits_char__* std32;
        __VERIFIER_nondet_memory(&std32, sizeof(std32));
        void** v33 = (void**)std32;
        void* v34 = *((void**)v33);
        unsigned char* cast35 = (unsigned char*)v34;
        long c36 = -24;
        unsigned char* ptr37 = &(cast35)[c36];
        long* cast38 = (long*)ptr37;
        long t39 = *cast38;
        unsigned char* cast40 = (unsigned char*)std32;
        unsigned char* ptr41 = &(cast40)[t39];
        struct std__basic_istream_char__std__char_traits_char__* cast42 = (struct std__basic_istream_char__std__char_traits_char__*)ptr41;
        struct std__basic_ios_char__std__char_traits_char__* cast43 = (struct std__basic_ios_char__std__char_traits_char__*)cast42;
        _Bool std44;
        __VERIFIER_nondet_memory(&std44, sizeof(std44));
        if (!std44) break;
          struct std__basic_ostream_char__std__char_traits_char__* base45 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(outClientFile2) + 0);
          int t46 = account3;
          struct std__basic_ostream_char__std__char_traits_char__* std47;
          __VERIFIER_nondet_memory(&std47, sizeof(std47));
          char c48 = 32;
          struct std__basic_ostream_char__std__char_traits_char__* std49;
          __VERIFIER_nondet_memory(&std49, sizeof(std49));
          char* cast50 = (char*)&(name4);
          struct std__basic_ostream_char__std__char_traits_char__* std51;
          __VERIFIER_nondet_memory(&std51, sizeof(std51));
          char c52 = 32;
          struct std__basic_ostream_char__std__char_traits_char__* std53;
          __VERIFIER_nondet_memory(&std53, sizeof(std53));
          double t54 = balance5;
          struct std__basic_ostream_char__std__char_traits_char__* std55;
          __VERIFIER_nondet_memory(&std55, sizeof(std55));
          struct std__basic_ostream_char__std__char_traits_char__* std56;
          __VERIFIER_nondet_memory(&std56, sizeof(std56));
          char* cast57 = (char*)&(_str_4);
          struct std__basic_ostream_char__std__char_traits_char__* std58;
          __VERIFIER_nondet_memory(&std58, sizeof(std58));
      }
    int c59 = 0;
    __retval1 = c59;
    int t60 = __retval1;
    int ret_val61 = t60;
    {
      // externalized std:: op: std::basic_ofstream<char, std::char_traits<char> >::~basic_ofstream()
      __VERIFIER_nondet_memory(&outClientFile2, sizeof(outClientFile2));
    }
    return ret_val61;
  int t62 = __retval1;
  return t62;
}

