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
struct ClientData { int __field0; char __field1[15]; char __field2[10]; double __field3; };
struct _Guard { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* _M_guarded; };
struct _IO_FILE { int __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; char* __field7; char* __field8; char* __field9; char* __field10; char* __field11; struct _IO_marker* __field12; struct _IO_FILE* __field13; int __field14; unsigned char __field15[3]; char __field16[1]; long __field17; unsigned short __field18; char __field19; char __field20[1]; void* __field21; long __field22; struct _IO_codecvt* __field23; struct _IO_wide_data* __field24; struct _IO_FILE* __field25; void* __field26; struct _IO_FILE** __field27; int __field28; int __field29; unsigned long __field30; char __field31[8]; };
struct _IO_codecvt { unsigned char __placeholder; };
struct _IO_marker { unsigned char __placeholder; };
struct _IO_wide_data { unsigned char __placeholder; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct __pthread_internal_list { struct __pthread_internal_list* __field0; struct __pthread_internal_list* __field1; };
struct __pthread_mutex_s { int __field0; unsigned int __field1; int __field2; unsigned int __field3; int __field4; short __field5; short __field6; struct __pthread_internal_list __field7; };
union anon_0 { unsigned int __field0; char __field1[4]; };
union anon_1 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct anon_struct_0 { unsigned char* __field0[5]; unsigned char* __field1[5]; };
struct anon_struct_1 { unsigned char* __field0[4]; };
union pthread_mutex_t { struct __pthread_mutex_s __field0; char __field1[40]; long __field2; };
struct std___Setprecision { int _M_n; };
struct std___Setw { int _M_n; };
struct std____basic_file_char_ { struct _IO_FILE* __field0; _Bool __field1; unsigned char __field2[7]; } __attribute__((packed));
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___;
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___;
struct std__random_access_iterator_tag { unsigned char __field0; };
struct __mbstate_t { int __field0; union anon_0 __field1; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_1 field2; };
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
int _ZNSt8ios_base6eofbitE_const __attribute__((aligned(4))) = 2;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base7goodbitE_const __attribute__((aligned(4))) = 0;
int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base9showpointE_const __attribute__((aligned(4))) = 1024;
int _ZNSt8ios_base10floatfieldE_const __attribute__((aligned(4))) = 260;
int _ZNSt8ios_base5fixedE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base5rightE_const __attribute__((aligned(4))) = 128;
int _ZNSt8ios_base11adjustfieldE_const __attribute__((aligned(4))) = 176;
int _ZNSt8ios_base4leftE_const __attribute__((aligned(4))) = 32;
int _ZNSt8ios_base2inE_const __attribute__((aligned(4))) = 8;
char _str[11] = "credit.dat";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cerr __attribute__((aligned(8)));
char _str_1[26] = "File could not be opened.";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[8] = "Account";
char _str_3[10] = "Last Name";
char _str_4[11] = "First Name";
char _str_5[8] = "Balance";
char _str_6[1];
char _str_7[50] = "basic_string: construction from null is not valid";
char _str_8[24] = "basic_string::_M_create";
extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void exit(int p0);
extern void ClientData__ClientData(struct ClientData* p0, int p1, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ p3, double p4);
extern int ClientData__getAccountNumber___const(struct ClientData* p0);
extern struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ClientData__getLastName_abi_cxx11____const(struct ClientData* p0);
extern struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ClientData__getFirstName_abi_cxx11____const(struct ClientData* p0);
extern double ClientData__getBalance___const(struct ClientData* p0);
void outputLine(struct std__basic_ostream_char__std__char_traits_char__* p0, struct ClientData* p1);
int main();

extern unsigned char* _ZTTSt14basic_ifstreamIcSt11char_traitsIcEE[4] __attribute__((aligned(8)));

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z10outputLineRSoRK10ClientData
void outputLine(struct std__basic_ostream_char__std__char_traits_char__* v0, struct ClientData* v1) {
bb2:
  struct std__basic_ostream_char__std__char_traits_char__* output3;
  struct ClientData* record4;
  struct std___Setw agg_tmp05;
  struct std___Setw agg_tmp16;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp07;
  struct std___Setw agg_tmp28;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp19;
  struct std___Setw agg_tmp310;
  struct std___Setprecision agg_tmp411;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup12;
  output3 = v0;
  record4 = v1;
  struct std__basic_ostream_char__std__char_traits_char__* t13 = output3;
  struct std__basic_ostream_char__std__char_traits_char__* std14;
  __VERIFIER_nondet_memory(&std14, sizeof(std14));
  int c15 = 10;
  struct std___Setw std16;
  __VERIFIER_nondet_memory(&std16, sizeof(std16));
  agg_tmp05 = std16;
  struct std___Setw t17 = agg_tmp05;
  struct std__basic_ostream_char__std__char_traits_char__* std18;
  __VERIFIER_nondet_memory(&std18, sizeof(std18));
  struct ClientData* t19 = record4;
  int r20 = ClientData__getAccountNumber___const(t19);
  if (__cir_exc_active) {
    return;
  }
  struct std__basic_ostream_char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  int c22 = 16;
  struct std___Setw std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  agg_tmp16 = std23;
  struct std___Setw t24 = agg_tmp16;
  struct std__basic_ostream_char__std__char_traits_char__* std25;
  __VERIFIER_nondet_memory(&std25, sizeof(std25));
  struct ClientData* t26 = record4;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r27 = ClientData__getLastName_abi_cxx11____const(t26);
  if (__cir_exc_active) {
    return;
  }
  ref_tmp07 = r27;
    char* std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    struct std__basic_ostream_char__std__char_traits_char__* std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    int c30 = 11;
    struct std___Setw std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    agg_tmp28 = std31;
    struct std___Setw t32 = agg_tmp28;
    struct std__basic_ostream_char__std__char_traits_char__* std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    struct ClientData* t34 = record4;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r35 = ClientData__getFirstName_abi_cxx11____const(t34);
    if (__cir_exc_active) {
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&ref_tmp07, sizeof(ref_tmp07));
      }
      return;
    }
    ref_tmp19 = r35;
      char* std36;
      __VERIFIER_nondet_memory(&std36, sizeof(std36));
      struct std__basic_ostream_char__std__char_traits_char__* std37;
      __VERIFIER_nondet_memory(&std37, sizeof(std37));
      int c38 = 10;
      struct std___Setw std39;
      __VERIFIER_nondet_memory(&std39, sizeof(std39));
      agg_tmp310 = std39;
      struct std___Setw t40 = agg_tmp310;
      struct std__basic_ostream_char__std__char_traits_char__* std41;
      __VERIFIER_nondet_memory(&std41, sizeof(std41));
      int c42 = 2;
      struct std___Setprecision std43;
      __VERIFIER_nondet_memory(&std43, sizeof(std43));
      agg_tmp411 = std43;
      struct std___Setprecision t44 = agg_tmp411;
      struct std__basic_ostream_char__std__char_traits_char__* std45;
      __VERIFIER_nondet_memory(&std45, sizeof(std45));
      struct std__basic_ostream_char__std__char_traits_char__* std46;
      __VERIFIER_nondet_memory(&std46, sizeof(std46));
      struct std__basic_ostream_char__std__char_traits_char__* std47;
      __VERIFIER_nondet_memory(&std47, sizeof(std47));
      struct std__basic_ostream_char__std__char_traits_char__* std48;
      __VERIFIER_nondet_memory(&std48, sizeof(std48));
      struct ClientData* t49 = record4;
      double r50 = ClientData__getBalance___const(t49);
      if (__cir_exc_active) {
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&ref_tmp19, sizeof(ref_tmp19));
        }
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&ref_tmp07, sizeof(ref_tmp07));
        }
        return;
      }
      struct std__basic_ostream_char__std__char_traits_char__* std51;
      __VERIFIER_nondet_memory(&std51, sizeof(std51));
      struct std__basic_ostream_char__std__char_traits_char__* std52;
      __VERIFIER_nondet_memory(&std52, sizeof(std52));
      tmp_exprcleanup12 = std52;
    {
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
      __VERIFIER_nondet_memory(&ref_tmp19, sizeof(ref_tmp19));
    }
  {
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
    __VERIFIER_nondet_memory(&ref_tmp07, sizeof(ref_tmp07));
  }
  struct std__basic_ostream_char__std__char_traits_char__* t53 = tmp_exprcleanup12;
  return;
}

// function: main
int main() {
bb54:
  int __retval55;
  struct std__basic_ifstream_char__std__char_traits_char__ inCredit56;
  struct std___Setw agg_tmp057;
  struct std___Setw agg_tmp158;
  struct std___Setw agg_tmp259;
  struct std___Setw agg_tmp360;
  struct ClientData client61;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp462;
  struct std__allocator_char_ ref_tmp063;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp564;
  struct std__allocator_char_ ref_tmp165;
  int c66 = 0;
  __retval55 = c66;
  char* cast67 = (char*)&(_str);
  int t68 = _ZNSt8ios_base2inE_const;
  // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::basic_ifstream(char const*, std::_Ios_Openmode)
  __VERIFIER_nondet_memory(&inCredit56, sizeof(inCredit56));
  __VERIFIER_nondet_memory(cast67, sizeof(*cast67));
      void** v69 = (void**)&(inCredit56);
      void* v70 = *((void**)v69);
      unsigned char* cast71 = (unsigned char*)v70;
      long c72 = -24;
      unsigned char* ptr73 = &(cast71)[c72];
      long* cast74 = (long*)ptr73;
      long t75 = *cast74;
      unsigned char* cast76 = (unsigned char*)&(inCredit56);
      unsigned char* ptr77 = &(cast76)[t75];
      struct std__basic_ifstream_char__std__char_traits_char__* cast78 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr77;
      struct std__basic_ios_char__std__char_traits_char__* cast79 = (struct std__basic_ios_char__std__char_traits_char__*)cast78;
      _Bool std80;
      __VERIFIER_nondet_memory(&std80, sizeof(std80));
      if (std80) {
        char* cast81 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std82;
        __VERIFIER_nondet_memory(&std82, sizeof(std82));
        struct std__basic_ostream_char__std__char_traits_char__* std83;
        __VERIFIER_nondet_memory(&std83, sizeof(std83));
        int c84 = 1;
        exit(c84);
      }
    struct std__basic_ostream_char__std__char_traits_char__* std85;
    __VERIFIER_nondet_memory(&std85, sizeof(std85));
    int c86 = 10;
    struct std___Setw std87;
    __VERIFIER_nondet_memory(&std87, sizeof(std87));
    agg_tmp057 = std87;
    struct std___Setw t88 = agg_tmp057;
    struct std__basic_ostream_char__std__char_traits_char__* std89;
    __VERIFIER_nondet_memory(&std89, sizeof(std89));
    char* cast90 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std91;
    __VERIFIER_nondet_memory(&std91, sizeof(std91));
    int c92 = 16;
    struct std___Setw std93;
    __VERIFIER_nondet_memory(&std93, sizeof(std93));
    agg_tmp158 = std93;
    struct std___Setw t94 = agg_tmp158;
    struct std__basic_ostream_char__std__char_traits_char__* std95;
    __VERIFIER_nondet_memory(&std95, sizeof(std95));
    char* cast96 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std97;
    __VERIFIER_nondet_memory(&std97, sizeof(std97));
    int c98 = 11;
    struct std___Setw std99;
    __VERIFIER_nondet_memory(&std99, sizeof(std99));
    agg_tmp259 = std99;
    struct std___Setw t100 = agg_tmp259;
    struct std__basic_ostream_char__std__char_traits_char__* std101;
    __VERIFIER_nondet_memory(&std101, sizeof(std101));
    char* cast102 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std103;
    __VERIFIER_nondet_memory(&std103, sizeof(std103));
    struct std__basic_ostream_char__std__char_traits_char__* std104;
    __VERIFIER_nondet_memory(&std104, sizeof(std104));
    int c105 = 10;
    struct std___Setw std106;
    __VERIFIER_nondet_memory(&std106, sizeof(std106));
    agg_tmp360 = std106;
    struct std___Setw t107 = agg_tmp360;
    struct std__basic_ostream_char__std__char_traits_char__* std108;
    __VERIFIER_nondet_memory(&std108, sizeof(std108));
    struct std__basic_ostream_char__std__char_traits_char__* std109;
    __VERIFIER_nondet_memory(&std109, sizeof(std109));
    char* cast110 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* std111;
    __VERIFIER_nondet_memory(&std111, sizeof(std111));
    struct std__basic_ostream_char__std__char_traits_char__* std112;
    __VERIFIER_nondet_memory(&std112, sizeof(std112));
    int c113 = 0;
    char* cast114 = (char*)&(_str_6);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp063, sizeof(ref_tmp063));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&agg_tmp462, sizeof(agg_tmp462));
      __VERIFIER_nondet_memory(cast114, sizeof(*cast114));
      __VERIFIER_nondet_memory(&ref_tmp063, sizeof(ref_tmp063));
        char* cast115 = (char*)&(_str_6);
        // externalized std:: op: std::allocator<char>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp165, sizeof(ref_tmp165));
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
          __VERIFIER_nondet_memory(&agg_tmp564, sizeof(agg_tmp564));
          __VERIFIER_nondet_memory(cast115, sizeof(*cast115));
          __VERIFIER_nondet_memory(&ref_tmp165, sizeof(ref_tmp165));
            double c116 = 0x0p0;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t117 = agg_tmp462;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t118 = agg_tmp564;
            ClientData__ClientData(&client61, c113, t117, t118, c116);
            if (__cir_exc_active) {
              {
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                __VERIFIER_nondet_memory(&agg_tmp564, sizeof(agg_tmp564));
              }
              {
                // externalized std:: op: std::allocator<char>::~allocator()
                __VERIFIER_nondet_memory(&ref_tmp165, sizeof(ref_tmp165));
              }
              {
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                __VERIFIER_nondet_memory(&agg_tmp462, sizeof(agg_tmp462));
              }
              {
                // externalized std:: op: std::allocator<char>::~allocator()
                __VERIFIER_nondet_memory(&ref_tmp063, sizeof(ref_tmp063));
              }
              {
                // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::~basic_ifstream()
                __VERIFIER_nondet_memory(&inCredit56, sizeof(inCredit56));
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&agg_tmp564, sizeof(agg_tmp564));
          }
        {
          // externalized std:: op: std::allocator<char>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp165, sizeof(ref_tmp165));
        }
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&agg_tmp462, sizeof(agg_tmp462));
      }
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp063, sizeof(ref_tmp063));
    }
    struct std__basic_istream_char__std__char_traits_char__* base119 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(inCredit56) + 0);
    char* cast120 = (char*)&(client61);
    long c121 = 40;
    struct std__basic_istream_char__std__char_traits_char__* std122;
    __VERIFIER_nondet_memory(&std122, sizeof(std122));
      while (1) {
        void** v123 = (void**)&(inCredit56);
        void* v124 = *((void**)v123);
        unsigned char* cast125 = (unsigned char*)v124;
        long c126 = -24;
        unsigned char* ptr127 = &(cast125)[c126];
        long* cast128 = (long*)ptr127;
        long t129 = *cast128;
        unsigned char* cast130 = (unsigned char*)&(inCredit56);
        unsigned char* ptr131 = &(cast130)[t129];
        struct std__basic_ifstream_char__std__char_traits_char__* cast132 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr131;
        struct std__basic_ios_char__std__char_traits_char__* cast133 = (struct std__basic_ios_char__std__char_traits_char__*)cast132;
        _Bool std134;
        __VERIFIER_nondet_memory(&std134, sizeof(std134));
        _Bool ternary135;
        if (std134) {
          void** v136 = (void**)&(inCredit56);
          void* v137 = *((void**)v136);
          unsigned char* cast138 = (unsigned char*)v137;
          long c139 = -24;
          unsigned char* ptr140 = &(cast138)[c139];
          long* cast141 = (long*)ptr140;
          long t142 = *cast141;
          unsigned char* cast143 = (unsigned char*)&(inCredit56);
          unsigned char* ptr144 = &(cast143)[t142];
          struct std__basic_ifstream_char__std__char_traits_char__* cast145 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr144;
          struct std__basic_ios_char__std__char_traits_char__* cast146 = (struct std__basic_ios_char__std__char_traits_char__*)cast145;
          _Bool std147;
          __VERIFIER_nondet_memory(&std147, sizeof(std147));
          _Bool u148 = !std147;
          ternary135 = (_Bool)u148;
        } else {
          _Bool c149 = 0;
          ternary135 = (_Bool)c149;
        }
        if (!ternary135) break;
            int r150 = ClientData__getAccountNumber___const(&client61);
            if (__cir_exc_active) {
              {
                // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::~basic_ifstream()
                __VERIFIER_nondet_memory(&inCredit56, sizeof(inCredit56));
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
            int c151 = 0;
            _Bool c152 = ((r150 != c151)) ? 1 : 0;
            if (c152) {
              outputLine(&_ZSt4cout, &client61);
              if (__cir_exc_active) {
                {
                  // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::~basic_ifstream()
                  __VERIFIER_nondet_memory(&inCredit56, sizeof(inCredit56));
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
            }
          struct std__basic_istream_char__std__char_traits_char__* base153 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(inCredit56) + 0);
          char* cast154 = (char*)&(client61);
          long c155 = 40;
          struct std__basic_istream_char__std__char_traits_char__* std156;
          __VERIFIER_nondet_memory(&std156, sizeof(std156));
      }
    int c157 = 0;
    __retval55 = c157;
    int t158 = __retval55;
    int ret_val159 = t158;
    {
      // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::~basic_ifstream()
      __VERIFIER_nondet_memory(&inCredit56, sizeof(inCredit56));
    }
    return ret_val159;
  int t160 = __retval55;
  return t160;
}

