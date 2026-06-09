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
struct anon_struct_0 { unsigned char* __field0[5]; unsigned char* __field1[5]; unsigned char* __field2[5]; };
struct anon_struct_1 { unsigned char* __field0[4]; };
struct anon_struct_2 { unsigned char* __field0[5]; unsigned char* __field1[5]; };
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
struct std__fpos___mbstate_t_ { long _M_off; struct __mbstate_t _M_state; };
struct std__ios_base { void* __field0; long _M_precision; long _M_width; int _M_flags; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_filebuf_char__std__char_traits_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; union pthread_mutex_t __field1; struct std____basic_file_char_ _M_file; int __field3; struct __mbstate_t __field4; struct __mbstate_t __field5; struct __mbstate_t __field6; char* __field7; unsigned long __field8; _Bool __field9; _Bool __field10; _Bool __field11; char __field12; char* __field13; char* __field14; _Bool __field15; struct std__codecvt_char__char____mbstate_t_* __field16; char* __field17; long __field18; char* __field19; char* __field20; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long _M_gcount; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__basic_iostream_char__std__char_traits_char__ { struct std__basic_istream_char__std__char_traits_char__ __field0; struct std__basic_ostream_char__std__char_traits_char__ __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ofstream_char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__ __field0; struct std__basic_filebuf_char__std__char_traits_char__ _M_filebuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_fstream_char__std__char_traits_char__ { struct std__basic_iostream_char__std__char_traits_char__ __field0; struct std__basic_filebuf_char__std__char_traits_char__ _M_filebuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVSt13basic_fstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void *_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[];
int _ZNSt8ios_base6eofbitE_const __attribute__((aligned(4))) = 2;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base9showpointE_const __attribute__((aligned(4))) = 1024;
int _ZNSt8ios_base10floatfieldE_const __attribute__((aligned(4))) = 260;
int _ZNSt8ios_base5fixedE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base5rightE_const __attribute__((aligned(4))) = 128;
int _ZNSt8ios_base11adjustfieldE_const __attribute__((aligned(4))) = 176;
int _ZNSt8ios_base4leftE_const __attribute__((aligned(4))) = 32;
int _ZNSt8ios_base7goodbitE_const __attribute__((aligned(4))) = 0;
int _ZNSt8ios_base3outE_const __attribute__((aligned(4))) = 16;
int _ZNSt8ios_base2inE_const __attribute__((aligned(4))) = 8;
char _str[11] = "credit.dat";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cerr __attribute__((aligned(8)));
char _str_1[26] = "File could not be opened.";
char _str_2[17] = "Incorrect choice";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[19] = "\nEnter your choice";
char _str_4[44] = "1 - store a formatted text file of accounts";
char _str_5[36] = "    called \"print.txt\" for printing";
char _str_6[22] = "2 - update an account";
char _str_7[22] = "3 - add a new account";
char _str_8[22] = "4 - delete an account";
char _str_9[19] = "5 - end program\n? ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_10[10] = "print.txt";
char _str_11[27] = "File could not be created.";
char _str_12[8] = "Account";
char _str_13[10] = "Last Name";
char _str_14[11] = "First Name";
char _str_15[8] = "Balance";
char _str_16[1];
char _str_17[24] = "Enter account to update";
char _str_18[35] = "\nEnter charge (+) or payment (-): ";
char _str_19[10] = "Account #";
char _str_20[21] = " has no information.";
char _str_21[25] = "Enter new account number";
char _str_22[38] = "Enter lastname, firstname, balance\n? ";
char _str_23[31] = " already contains information.";
char _str_24[24] = "Enter account to delete";
char _str_25[11] = " deleted.\n";
char _str_26[12] = " is empty.\n";
char _str_27[13] = " (1 - 100): ";
char _str_28[50] = "basic_string: construction from null is not valid";
char _str_29[24] = "basic_string::_M_create";
extern void *_ZTVSt13basic_fstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void *_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[];
extern void exit(int p0);
int enterChoice();
extern void ClientData__ClientData(struct ClientData* p0, int p1, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ p3, double p4);
extern int ClientData__getAccountNumber___const(struct ClientData* p0);
extern struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ClientData__getLastName_abi_cxx11____const(struct ClientData* p0);
extern struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ClientData__getFirstName_abi_cxx11____const(struct ClientData* p0);
void outputLine(struct std__basic_ostream_char__std__char_traits_char__* p0, struct ClientData* p1);
void printRecord(struct std__basic_fstream_char__std__char_traits_char__* p0);
int getAccount(char* p0);
extern double ClientData__getBalance___const(struct ClientData* p0);
extern void ClientData__setBalance(struct ClientData* p0, double p1);
void updateRecord(struct std__basic_fstream_char__std__char_traits_char__* p0);
extern void ClientData__setLastName(struct ClientData* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ p1);
extern void ClientData__setFirstName(struct ClientData* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ p1);
extern void ClientData__setAccountNumber(struct ClientData* p0, int p1);
void newRecord(struct std__basic_fstream_char__std__char_traits_char__* p0);
void deleteRecord(struct std__basic_fstream_char__std__char_traits_char__* p0);
int main();

extern unsigned char* _ZTTSt13basic_fstreamIcSt11char_traitsIcEE[10] __attribute__((aligned(8)));
extern unsigned char* _ZTTSt14basic_ofstreamIcSt11char_traitsIcEE[4] __attribute__((aligned(8)));

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern int __VERIFIER_nondet_int(void);
// function: _Z11enterChoicev
int enterChoice() {
bb0:
  int __retval1;
  int menuChoice2;
  char* cast3 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std4;
  __VERIFIER_nondet_memory(&std4, sizeof(std4));
  struct std__basic_ostream_char__std__char_traits_char__* std5;
  __VERIFIER_nondet_memory(&std5, sizeof(std5));
  char* cast6 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std7;
  __VERIFIER_nondet_memory(&std7, sizeof(std7));
  struct std__basic_ostream_char__std__char_traits_char__* std8;
  __VERIFIER_nondet_memory(&std8, sizeof(std8));
  char* cast9 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std10;
  __VERIFIER_nondet_memory(&std10, sizeof(std10));
  struct std__basic_ostream_char__std__char_traits_char__* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  char* cast12 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std13;
  __VERIFIER_nondet_memory(&std13, sizeof(std13));
  struct std__basic_ostream_char__std__char_traits_char__* std14;
  __VERIFIER_nondet_memory(&std14, sizeof(std14));
  char* cast15 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std16;
  __VERIFIER_nondet_memory(&std16, sizeof(std16));
  struct std__basic_ostream_char__std__char_traits_char__* std17;
  __VERIFIER_nondet_memory(&std17, sizeof(std17));
  char* cast18 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
  struct std__basic_ostream_char__std__char_traits_char__* std20;
  __VERIFIER_nondet_memory(&std20, sizeof(std20));
  char* cast21 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* std22;
  __VERIFIER_nondet_memory(&std22, sizeof(std22));
  struct std__basic_istream_char__std__char_traits_char__* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  int t24 = menuChoice2;
  __retval1 = t24;
  int t25 = __retval1;
  return t25;
}

// function: _Z10outputLineRSoRK10ClientData
void outputLine(struct std__basic_ostream_char__std__char_traits_char__* v26, struct ClientData* v27) {
bb28:
  struct std__basic_ostream_char__std__char_traits_char__* output29;
  struct ClientData* record30;
  struct std___Setw agg_tmp031;
  struct std___Setw agg_tmp132;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp033;
  struct std___Setw agg_tmp234;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp135;
  struct std___Setw agg_tmp336;
  struct std___Setprecision agg_tmp437;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup38;
  output29 = v26;
  record30 = v27;
  struct std__basic_ostream_char__std__char_traits_char__* t39 = output29;
  struct std__basic_ostream_char__std__char_traits_char__* std40;
  __VERIFIER_nondet_memory(&std40, sizeof(std40));
  int c41 = 10;
  struct std___Setw std42;
  __VERIFIER_nondet_memory(&std42, sizeof(std42));
  agg_tmp031 = std42;
  struct std___Setw t43 = agg_tmp031;
  struct std__basic_ostream_char__std__char_traits_char__* std44;
  __VERIFIER_nondet_memory(&std44, sizeof(std44));
  struct ClientData* t45 = record30;
  int r46 = ClientData__getAccountNumber___const(t45);
  if (__cir_exc_active) {
    return;
  }
  struct std__basic_ostream_char__std__char_traits_char__* std47;
  __VERIFIER_nondet_memory(&std47, sizeof(std47));
  int c48 = 16;
  struct std___Setw std49;
  __VERIFIER_nondet_memory(&std49, sizeof(std49));
  agg_tmp132 = std49;
  struct std___Setw t50 = agg_tmp132;
  struct std__basic_ostream_char__std__char_traits_char__* std51;
  __VERIFIER_nondet_memory(&std51, sizeof(std51));
  struct ClientData* t52 = record30;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r53 = ClientData__getLastName_abi_cxx11____const(t52);
  if (__cir_exc_active) {
    return;
  }
  ref_tmp033 = r53;
    char* std54;
    __VERIFIER_nondet_memory(&std54, sizeof(std54));
    struct std__basic_ostream_char__std__char_traits_char__* std55;
    __VERIFIER_nondet_memory(&std55, sizeof(std55));
    int c56 = 11;
    struct std___Setw std57;
    __VERIFIER_nondet_memory(&std57, sizeof(std57));
    agg_tmp234 = std57;
    struct std___Setw t58 = agg_tmp234;
    struct std__basic_ostream_char__std__char_traits_char__* std59;
    __VERIFIER_nondet_memory(&std59, sizeof(std59));
    struct ClientData* t60 = record30;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r61 = ClientData__getFirstName_abi_cxx11____const(t60);
    if (__cir_exc_active) {
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&ref_tmp033, sizeof(ref_tmp033));
      }
      return;
    }
    ref_tmp135 = r61;
      char* std62;
      __VERIFIER_nondet_memory(&std62, sizeof(std62));
      struct std__basic_ostream_char__std__char_traits_char__* std63;
      __VERIFIER_nondet_memory(&std63, sizeof(std63));
      int c64 = 10;
      struct std___Setw std65;
      __VERIFIER_nondet_memory(&std65, sizeof(std65));
      agg_tmp336 = std65;
      struct std___Setw t66 = agg_tmp336;
      struct std__basic_ostream_char__std__char_traits_char__* std67;
      __VERIFIER_nondet_memory(&std67, sizeof(std67));
      int c68 = 2;
      struct std___Setprecision std69;
      __VERIFIER_nondet_memory(&std69, sizeof(std69));
      agg_tmp437 = std69;
      struct std___Setprecision t70 = agg_tmp437;
      struct std__basic_ostream_char__std__char_traits_char__* std71;
      __VERIFIER_nondet_memory(&std71, sizeof(std71));
      struct std__basic_ostream_char__std__char_traits_char__* std72;
      __VERIFIER_nondet_memory(&std72, sizeof(std72));
      struct std__basic_ostream_char__std__char_traits_char__* std73;
      __VERIFIER_nondet_memory(&std73, sizeof(std73));
      struct std__basic_ostream_char__std__char_traits_char__* std74;
      __VERIFIER_nondet_memory(&std74, sizeof(std74));
      struct ClientData* t75 = record30;
      double r76 = ClientData__getBalance___const(t75);
      if (__cir_exc_active) {
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&ref_tmp135, sizeof(ref_tmp135));
        }
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&ref_tmp033, sizeof(ref_tmp033));
        }
        return;
      }
      struct std__basic_ostream_char__std__char_traits_char__* std77;
      __VERIFIER_nondet_memory(&std77, sizeof(std77));
      struct std__basic_ostream_char__std__char_traits_char__* std78;
      __VERIFIER_nondet_memory(&std78, sizeof(std78));
      tmp_exprcleanup38 = std78;
    {
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
      __VERIFIER_nondet_memory(&ref_tmp135, sizeof(ref_tmp135));
    }
  {
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
    __VERIFIER_nondet_memory(&ref_tmp033, sizeof(ref_tmp033));
  }
  struct std__basic_ostream_char__std__char_traits_char__* t79 = tmp_exprcleanup38;
  return;
}

// function: _Z11printRecordRSt13basic_fstreamIcSt11char_traitsIcEE
void printRecord(struct std__basic_fstream_char__std__char_traits_char__* v80) {
bb81:
  struct std__basic_fstream_char__std__char_traits_char__* readFromFile82;
  struct std__basic_ofstream_char__std__char_traits_char__ outPrintFile83;
  struct std___Setw agg_tmp084;
  struct std___Setw agg_tmp185;
  struct std___Setw agg_tmp286;
  struct std___Setw agg_tmp387;
  struct std__fpos___mbstate_t_ agg_tmp488;
  struct ClientData client89;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp590;
  struct std__allocator_char_ ref_tmp091;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp692;
  struct std__allocator_char_ ref_tmp193;
  readFromFile82 = v80;
  char* cast94 = (char*)&(_str_10);
  int t95 = _ZNSt8ios_base3outE_const;
  // externalized std:: op: std::basic_ofstream<char, std::char_traits<char> >::basic_ofstream(char const*, std::_Ios_Openmode)
  __VERIFIER_nondet_memory(&outPrintFile83, sizeof(outPrintFile83));
  __VERIFIER_nondet_memory(cast94, sizeof(*cast94));
      void** v96 = (void**)&(outPrintFile83);
      void* v97 = *((void**)v96);
      unsigned char* cast98 = (unsigned char*)v97;
      long c99 = -24;
      unsigned char* ptr100 = &(cast98)[c99];
      long* cast101 = (long*)ptr100;
      long t102 = *cast101;
      unsigned char* cast103 = (unsigned char*)&(outPrintFile83);
      unsigned char* ptr104 = &(cast103)[t102];
      struct std__basic_ofstream_char__std__char_traits_char__* cast105 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr104;
      struct std__basic_ios_char__std__char_traits_char__* cast106 = (struct std__basic_ios_char__std__char_traits_char__*)cast105;
      _Bool std107;
      __VERIFIER_nondet_memory(&std107, sizeof(std107));
      if (std107) {
        char* cast108 = (char*)&(_str_11);
        struct std__basic_ostream_char__std__char_traits_char__* std109;
        __VERIFIER_nondet_memory(&std109, sizeof(std109));
        struct std__basic_ostream_char__std__char_traits_char__* std110;
        __VERIFIER_nondet_memory(&std110, sizeof(std110));
        int c111 = 1;
        exit(c111);
      }
    struct std__basic_ostream_char__std__char_traits_char__* base112 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(outPrintFile83) + 0);
    struct std__basic_ostream_char__std__char_traits_char__* std113;
    __VERIFIER_nondet_memory(&std113, sizeof(std113));
    int c114 = 10;
    struct std___Setw std115;
    __VERIFIER_nondet_memory(&std115, sizeof(std115));
    agg_tmp084 = std115;
    struct std___Setw t116 = agg_tmp084;
    struct std__basic_ostream_char__std__char_traits_char__* std117;
    __VERIFIER_nondet_memory(&std117, sizeof(std117));
    char* cast118 = (char*)&(_str_12);
    struct std__basic_ostream_char__std__char_traits_char__* std119;
    __VERIFIER_nondet_memory(&std119, sizeof(std119));
    int c120 = 16;
    struct std___Setw std121;
    __VERIFIER_nondet_memory(&std121, sizeof(std121));
    agg_tmp185 = std121;
    struct std___Setw t122 = agg_tmp185;
    struct std__basic_ostream_char__std__char_traits_char__* std123;
    __VERIFIER_nondet_memory(&std123, sizeof(std123));
    char* cast124 = (char*)&(_str_13);
    struct std__basic_ostream_char__std__char_traits_char__* std125;
    __VERIFIER_nondet_memory(&std125, sizeof(std125));
    int c126 = 11;
    struct std___Setw std127;
    __VERIFIER_nondet_memory(&std127, sizeof(std127));
    agg_tmp286 = std127;
    struct std___Setw t128 = agg_tmp286;
    struct std__basic_ostream_char__std__char_traits_char__* std129;
    __VERIFIER_nondet_memory(&std129, sizeof(std129));
    char* cast130 = (char*)&(_str_14);
    struct std__basic_ostream_char__std__char_traits_char__* std131;
    __VERIFIER_nondet_memory(&std131, sizeof(std131));
    struct std__basic_ostream_char__std__char_traits_char__* std132;
    __VERIFIER_nondet_memory(&std132, sizeof(std132));
    int c133 = 10;
    struct std___Setw std134;
    __VERIFIER_nondet_memory(&std134, sizeof(std134));
    agg_tmp387 = std134;
    struct std___Setw t135 = agg_tmp387;
    struct std__basic_ostream_char__std__char_traits_char__* std136;
    __VERIFIER_nondet_memory(&std136, sizeof(std136));
    char* cast137 = (char*)&(_str_15);
    struct std__basic_ostream_char__std__char_traits_char__* std138;
    __VERIFIER_nondet_memory(&std138, sizeof(std138));
    struct std__basic_ostream_char__std__char_traits_char__* std139;
    __VERIFIER_nondet_memory(&std139, sizeof(std139));
    struct std__basic_fstream_char__std__char_traits_char__* t140 = readFromFile82;
    struct std__basic_istream_char__std__char_traits_char__* base141 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t140 + 0);
    long c142 = 0;
    // externalized std:: op: std::fpos<__mbstate_t>::fpos(long)
    __VERIFIER_nondet_memory(&agg_tmp488, sizeof(agg_tmp488));
    struct std__fpos___mbstate_t_ t143 = agg_tmp488;
    struct std__basic_istream_char__std__char_traits_char__* std144;
    __VERIFIER_nondet_memory(&std144, sizeof(std144));
    int c145 = 0;
    char* cast146 = (char*)&(_str_16);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp091, sizeof(ref_tmp091));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&agg_tmp590, sizeof(agg_tmp590));
      __VERIFIER_nondet_memory(cast146, sizeof(*cast146));
      __VERIFIER_nondet_memory(&ref_tmp091, sizeof(ref_tmp091));
        char* cast147 = (char*)&(_str_16);
        // externalized std:: op: std::allocator<char>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp193, sizeof(ref_tmp193));
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
          __VERIFIER_nondet_memory(&agg_tmp692, sizeof(agg_tmp692));
          __VERIFIER_nondet_memory(cast147, sizeof(*cast147));
          __VERIFIER_nondet_memory(&ref_tmp193, sizeof(ref_tmp193));
            double c148 = 0x0p0;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t149 = agg_tmp590;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t150 = agg_tmp692;
            ClientData__ClientData(&client89, c145, t149, t150, c148);
            if (__cir_exc_active) {
              {
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                __VERIFIER_nondet_memory(&agg_tmp692, sizeof(agg_tmp692));
              }
              {
                // externalized std:: op: std::allocator<char>::~allocator()
                __VERIFIER_nondet_memory(&ref_tmp193, sizeof(ref_tmp193));
              }
              {
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                __VERIFIER_nondet_memory(&agg_tmp590, sizeof(agg_tmp590));
              }
              {
                // externalized std:: op: std::allocator<char>::~allocator()
                __VERIFIER_nondet_memory(&ref_tmp091, sizeof(ref_tmp091));
              }
              {
                // externalized std:: op: std::basic_ofstream<char, std::char_traits<char> >::~basic_ofstream()
                __VERIFIER_nondet_memory(&outPrintFile83, sizeof(outPrintFile83));
              }
              return;
            }
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&agg_tmp692, sizeof(agg_tmp692));
          }
        {
          // externalized std:: op: std::allocator<char>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp193, sizeof(ref_tmp193));
        }
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&agg_tmp590, sizeof(agg_tmp590));
      }
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp091, sizeof(ref_tmp091));
    }
    struct std__basic_fstream_char__std__char_traits_char__* t151 = readFromFile82;
    struct std__basic_istream_char__std__char_traits_char__* base152 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t151 + 0);
    char* cast153 = (char*)&(client89);
    long c154 = 40;
    struct std__basic_istream_char__std__char_traits_char__* std155;
    __VERIFIER_nondet_memory(&std155, sizeof(std155));
      while (1) {
        struct std__basic_fstream_char__std__char_traits_char__* t156 = readFromFile82;
        void** v157 = (void**)t156;
        void* v158 = *((void**)v157);
        unsigned char* cast159 = (unsigned char*)v158;
        long c160 = -24;
        unsigned char* ptr161 = &(cast159)[c160];
        long* cast162 = (long*)ptr161;
        long t163 = *cast162;
        unsigned char* cast164 = (unsigned char*)t156;
        unsigned char* ptr165 = &(cast164)[t163];
        struct std__basic_fstream_char__std__char_traits_char__* cast166 = (struct std__basic_fstream_char__std__char_traits_char__*)ptr165;
        struct std__basic_ios_char__std__char_traits_char__* cast167 = (struct std__basic_ios_char__std__char_traits_char__*)cast166;
        _Bool std168;
        __VERIFIER_nondet_memory(&std168, sizeof(std168));
        _Bool u169 = !std168;
        if (!u169) break;
            int r170 = ClientData__getAccountNumber___const(&client89);
            if (__cir_exc_active) {
              {
                // externalized std:: op: std::basic_ofstream<char, std::char_traits<char> >::~basic_ofstream()
                __VERIFIER_nondet_memory(&outPrintFile83, sizeof(outPrintFile83));
              }
              return;
            }
            int c171 = 0;
            _Bool c172 = ((r170 != c171)) ? 1 : 0;
            if (c172) {
              struct std__basic_ostream_char__std__char_traits_char__* base173 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(outPrintFile83) + 0);
              outputLine(base173, &client89);
              if (__cir_exc_active) {
                {
                  // externalized std:: op: std::basic_ofstream<char, std::char_traits<char> >::~basic_ofstream()
                  __VERIFIER_nondet_memory(&outPrintFile83, sizeof(outPrintFile83));
                }
                return;
              }
            }
          struct std__basic_fstream_char__std__char_traits_char__* t174 = readFromFile82;
          struct std__basic_istream_char__std__char_traits_char__* base175 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t174 + 0);
          char* cast176 = (char*)&(client89);
          long c177 = 40;
          struct std__basic_istream_char__std__char_traits_char__* std178;
          __VERIFIER_nondet_memory(&std178, sizeof(std178));
      }
  {
    // externalized std:: op: std::basic_ofstream<char, std::char_traits<char> >::~basic_ofstream()
    __VERIFIER_nondet_memory(&outPrintFile83, sizeof(outPrintFile83));
  }
  return;
}

// function: _Z10getAccountPKc
int getAccount(char* v179) {
bb180:
  char* prompt181;
  int __retval182;
  int accountNumber183;
  prompt181 = v179;
    do {
        char* t184 = prompt181;
        struct std__basic_ostream_char__std__char_traits_char__* std185;
        __VERIFIER_nondet_memory(&std185, sizeof(std185));
        char* cast186 = (char*)&(_str_27);
        struct std__basic_ostream_char__std__char_traits_char__* std187;
        __VERIFIER_nondet_memory(&std187, sizeof(std187));
        struct std__basic_istream_char__std__char_traits_char__* std188;
        __VERIFIER_nondet_memory(&std188, sizeof(std188));
      int t189 = accountNumber183;
      int c190 = 1;
      _Bool c191 = ((t189 < c190)) ? 1 : 0;
      _Bool ternary192;
      if (c191) {
        _Bool c193 = 1;
        ternary192 = (_Bool)c193;
      } else {
        int t194 = accountNumber183;
        int c195 = 100;
        _Bool c196 = ((t194 > c195)) ? 1 : 0;
        ternary192 = (_Bool)c196;
      }
      if (!ternary192) break;
    } while (1);
  int t197 = accountNumber183;
  __retval182 = t197;
  int t198 = __retval182;
  return t198;
}

// function: _Z12updateRecordRSt13basic_fstreamIcSt11char_traitsIcEE
void updateRecord(struct std__basic_fstream_char__std__char_traits_char__* v199) {
bb200:
  struct std__basic_fstream_char__std__char_traits_char__* updateFile201;
  int accountNumber202;
  struct std__fpos___mbstate_t_ agg_tmp0203;
  struct ClientData client204;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp1205;
  struct std__allocator_char_ ref_tmp0206;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp2207;
  struct std__allocator_char_ ref_tmp1208;
  updateFile201 = v199;
  char* cast209 = (char*)&(_str_17);
  int r210 = getAccount(cast209);
  if (__cir_exc_active) {
    return;
  }
  accountNumber202 = r210;
  struct std__basic_fstream_char__std__char_traits_char__* t211 = updateFile201;
  struct std__basic_istream_char__std__char_traits_char__* base212 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t211 + 0);
  int t213 = accountNumber202;
  int c214 = 1;
  int b215 = t213 - c214;
  unsigned long cast216 = (unsigned long)b215;
  unsigned long c217 = 40;
  unsigned long b218 = cast216 * c217;
  long cast219 = (long)b218;
  // externalized std:: op: std::fpos<__mbstate_t>::fpos(long)
  __VERIFIER_nondet_memory(&agg_tmp0203, sizeof(agg_tmp0203));
  struct std__fpos___mbstate_t_ t220 = agg_tmp0203;
  struct std__basic_istream_char__std__char_traits_char__* std221;
  __VERIFIER_nondet_memory(&std221, sizeof(std221));
  int c222 = 0;
  char* cast223 = (char*)&(_str_16);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp0206, sizeof(ref_tmp0206));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&agg_tmp1205, sizeof(agg_tmp1205));
    __VERIFIER_nondet_memory(cast223, sizeof(*cast223));
    __VERIFIER_nondet_memory(&ref_tmp0206, sizeof(ref_tmp0206));
      char* cast224 = (char*)&(_str_16);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp1208, sizeof(ref_tmp1208));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&agg_tmp2207, sizeof(agg_tmp2207));
        __VERIFIER_nondet_memory(cast224, sizeof(*cast224));
        __VERIFIER_nondet_memory(&ref_tmp1208, sizeof(ref_tmp1208));
          double c225 = 0x0p0;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t226 = agg_tmp1205;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t227 = agg_tmp2207;
          ClientData__ClientData(&client204, c222, t226, t227, c225);
          if (__cir_exc_active) {
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&agg_tmp2207, sizeof(agg_tmp2207));
            }
            {
              // externalized std:: op: std::allocator<char>::~allocator()
              __VERIFIER_nondet_memory(&ref_tmp1208, sizeof(ref_tmp1208));
            }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&agg_tmp1205, sizeof(agg_tmp1205));
            }
            {
              // externalized std:: op: std::allocator<char>::~allocator()
              __VERIFIER_nondet_memory(&ref_tmp0206, sizeof(ref_tmp0206));
            }
            return;
          }
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&agg_tmp2207, sizeof(agg_tmp2207));
        }
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp1208, sizeof(ref_tmp1208));
      }
    {
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
      __VERIFIER_nondet_memory(&agg_tmp1205, sizeof(agg_tmp1205));
    }
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp0206, sizeof(ref_tmp0206));
  }
  struct std__basic_fstream_char__std__char_traits_char__* t228 = updateFile201;
  struct std__basic_istream_char__std__char_traits_char__* base229 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t228 + 0);
  char* cast230 = (char*)&(client204);
  long c231 = 40;
  struct std__basic_istream_char__std__char_traits_char__* std232;
  __VERIFIER_nondet_memory(&std232, sizeof(std232));
    int r233 = ClientData__getAccountNumber___const(&client204);
    if (__cir_exc_active) {
      return;
    }
    int c234 = 0;
    _Bool c235 = ((r233 != c234)) ? 1 : 0;
    if (c235) {
      double transaction236;
      double oldBalance237;
      struct std__fpos___mbstate_t_ agg_tmp3238;
      outputLine(&_ZSt4cout, &client204);
      if (__cir_exc_active) {
        return;
      }
      char* cast239 = (char*)&(_str_18);
      struct std__basic_ostream_char__std__char_traits_char__* std240;
      __VERIFIER_nondet_memory(&std240, sizeof(std240));
      struct std__basic_istream_char__std__char_traits_char__* std241;
      __VERIFIER_nondet_memory(&std241, sizeof(std241));
      double r242 = ClientData__getBalance___const(&client204);
      if (__cir_exc_active) {
        return;
      }
      oldBalance237 = r242;
      double t243 = oldBalance237;
      double t244 = transaction236;
      double b245 = t243 + t244;
      ClientData__setBalance(&client204, b245);
      if (__cir_exc_active) {
        return;
      }
      outputLine(&_ZSt4cout, &client204);
      if (__cir_exc_active) {
        return;
      }
      struct std__basic_fstream_char__std__char_traits_char__* t246 = updateFile201;
      struct std__basic_ostream_char__std__char_traits_char__* base247 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t246 + 16);
      int t248 = accountNumber202;
      int c249 = 1;
      int b250 = t248 - c249;
      unsigned long cast251 = (unsigned long)b250;
      unsigned long c252 = 40;
      unsigned long b253 = cast251 * c252;
      long cast254 = (long)b253;
      // externalized std:: op: std::fpos<__mbstate_t>::fpos(long)
      __VERIFIER_nondet_memory(&agg_tmp3238, sizeof(agg_tmp3238));
      struct std__fpos___mbstate_t_ t255 = agg_tmp3238;
      struct std__basic_ostream_char__std__char_traits_char__* std256;
      __VERIFIER_nondet_memory(&std256, sizeof(std256));
      struct std__basic_fstream_char__std__char_traits_char__* t257 = updateFile201;
      struct std__basic_ostream_char__std__char_traits_char__* base258 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t257 + 16);
      char* cast259 = (char*)&(client204);
      long c260 = 40;
      struct std__basic_ostream_char__std__char_traits_char__* std261;
      __VERIFIER_nondet_memory(&std261, sizeof(std261));
    } else {
      char* cast262 = (char*)&(_str_19);
      struct std__basic_ostream_char__std__char_traits_char__* std263;
      __VERIFIER_nondet_memory(&std263, sizeof(std263));
      int t264 = accountNumber202;
      struct std__basic_ostream_char__std__char_traits_char__* std265;
      __VERIFIER_nondet_memory(&std265, sizeof(std265));
      char* cast266 = (char*)&(_str_20);
      struct std__basic_ostream_char__std__char_traits_char__* std267;
      __VERIFIER_nondet_memory(&std267, sizeof(std267));
      struct std__basic_ostream_char__std__char_traits_char__* std268;
      __VERIFIER_nondet_memory(&std268, sizeof(std268));
    }
  return;
}

// function: _Z9newRecordRSt13basic_fstreamIcSt11char_traitsIcEE
void newRecord(struct std__basic_fstream_char__std__char_traits_char__* v269) {
bb270:
  struct std__basic_fstream_char__std__char_traits_char__* insertInFile271;
  int accountNumber272;
  struct std__fpos___mbstate_t_ agg_tmp0273;
  struct ClientData client274;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp1275;
  struct std__allocator_char_ ref_tmp0276;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp2277;
  struct std__allocator_char_ ref_tmp1278;
  insertInFile271 = v269;
  char* cast279 = (char*)&(_str_21);
  int r280 = getAccount(cast279);
  if (__cir_exc_active) {
    return;
  }
  accountNumber272 = r280;
  struct std__basic_fstream_char__std__char_traits_char__* t281 = insertInFile271;
  struct std__basic_istream_char__std__char_traits_char__* base282 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t281 + 0);
  int t283 = accountNumber272;
  int c284 = 1;
  int b285 = t283 - c284;
  unsigned long cast286 = (unsigned long)b285;
  unsigned long c287 = 40;
  unsigned long b288 = cast286 * c287;
  long cast289 = (long)b288;
  // externalized std:: op: std::fpos<__mbstate_t>::fpos(long)
  __VERIFIER_nondet_memory(&agg_tmp0273, sizeof(agg_tmp0273));
  struct std__fpos___mbstate_t_ t290 = agg_tmp0273;
  struct std__basic_istream_char__std__char_traits_char__* std291;
  __VERIFIER_nondet_memory(&std291, sizeof(std291));
  int c292 = 0;
  char* cast293 = (char*)&(_str_16);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp0276, sizeof(ref_tmp0276));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&agg_tmp1275, sizeof(agg_tmp1275));
    __VERIFIER_nondet_memory(cast293, sizeof(*cast293));
    __VERIFIER_nondet_memory(&ref_tmp0276, sizeof(ref_tmp0276));
      char* cast294 = (char*)&(_str_16);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp1278, sizeof(ref_tmp1278));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&agg_tmp2277, sizeof(agg_tmp2277));
        __VERIFIER_nondet_memory(cast294, sizeof(*cast294));
        __VERIFIER_nondet_memory(&ref_tmp1278, sizeof(ref_tmp1278));
          double c295 = 0x0p0;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t296 = agg_tmp1275;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t297 = agg_tmp2277;
          ClientData__ClientData(&client274, c292, t296, t297, c295);
          if (__cir_exc_active) {
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&agg_tmp2277, sizeof(agg_tmp2277));
            }
            {
              // externalized std:: op: std::allocator<char>::~allocator()
              __VERIFIER_nondet_memory(&ref_tmp1278, sizeof(ref_tmp1278));
            }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&agg_tmp1275, sizeof(agg_tmp1275));
            }
            {
              // externalized std:: op: std::allocator<char>::~allocator()
              __VERIFIER_nondet_memory(&ref_tmp0276, sizeof(ref_tmp0276));
            }
            return;
          }
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&agg_tmp2277, sizeof(agg_tmp2277));
        }
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp1278, sizeof(ref_tmp1278));
      }
    {
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
      __VERIFIER_nondet_memory(&agg_tmp1275, sizeof(agg_tmp1275));
    }
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp0276, sizeof(ref_tmp0276));
  }
  struct std__basic_fstream_char__std__char_traits_char__* t298 = insertInFile271;
  struct std__basic_istream_char__std__char_traits_char__* base299 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t298 + 0);
  char* cast300 = (char*)&(client274);
  long c301 = 40;
  struct std__basic_istream_char__std__char_traits_char__* std302;
  __VERIFIER_nondet_memory(&std302, sizeof(std302));
    int r303 = ClientData__getAccountNumber___const(&client274);
    if (__cir_exc_active) {
      return;
    }
    int c304 = 0;
    _Bool c305 = ((r303 == c304)) ? 1 : 0;
    if (c305) {
      char lastName306[15];
      char firstName307[10];
      double balance308;
      struct std___Setw agg_tmp3309;
      struct std___Setw agg_tmp4310;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp5311;
      struct std__allocator_char_ ref_tmp2312;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp6313;
      struct std__allocator_char_ ref_tmp3314;
      struct std__fpos___mbstate_t_ agg_tmp7315;
      char* cast316 = (char*)&(_str_22);
      struct std__basic_ostream_char__std__char_traits_char__* std317;
      __VERIFIER_nondet_memory(&std317, sizeof(std317));
      int c318 = 15;
      struct std___Setw std319;
      __VERIFIER_nondet_memory(&std319, sizeof(std319));
      agg_tmp3309 = std319;
      struct std___Setw t320 = agg_tmp3309;
      struct std__basic_istream_char__std__char_traits_char__* std321;
      __VERIFIER_nondet_memory(&std321, sizeof(std321));
      struct std__basic_istream_char__std__char_traits_char__* std322;
      __VERIFIER_nondet_memory(&std322, sizeof(std322));
      int c323 = 10;
      struct std___Setw std324;
      __VERIFIER_nondet_memory(&std324, sizeof(std324));
      agg_tmp4310 = std324;
      struct std___Setw t325 = agg_tmp4310;
      struct std__basic_istream_char__std__char_traits_char__* std326;
      __VERIFIER_nondet_memory(&std326, sizeof(std326));
      struct std__basic_istream_char__std__char_traits_char__* std327;
      __VERIFIER_nondet_memory(&std327, sizeof(std327));
      struct std__basic_istream_char__std__char_traits_char__* std328;
      __VERIFIER_nondet_memory(&std328, sizeof(std328));
      char* cast329 = (char*)&(lastName306);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp2312, sizeof(ref_tmp2312));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&agg_tmp5311, sizeof(agg_tmp5311));
        __VERIFIER_nondet_memory(cast329, sizeof(*cast329));
        __VERIFIER_nondet_memory(&ref_tmp2312, sizeof(ref_tmp2312));
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t330 = agg_tmp5311;
          ClientData__setLastName(&client274, t330);
          if (__cir_exc_active) {
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&agg_tmp5311, sizeof(agg_tmp5311));
            }
            {
              // externalized std:: op: std::allocator<char>::~allocator()
              __VERIFIER_nondet_memory(&ref_tmp2312, sizeof(ref_tmp2312));
            }
            return;
          }
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&agg_tmp5311, sizeof(agg_tmp5311));
        }
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp2312, sizeof(ref_tmp2312));
      }
      char* cast331 = (char*)&(firstName307);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp3314, sizeof(ref_tmp3314));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&agg_tmp6313, sizeof(agg_tmp6313));
        __VERIFIER_nondet_memory(cast331, sizeof(*cast331));
        __VERIFIER_nondet_memory(&ref_tmp3314, sizeof(ref_tmp3314));
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t332 = agg_tmp6313;
          ClientData__setFirstName(&client274, t332);
          if (__cir_exc_active) {
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&agg_tmp6313, sizeof(agg_tmp6313));
            }
            {
              // externalized std:: op: std::allocator<char>::~allocator()
              __VERIFIER_nondet_memory(&ref_tmp3314, sizeof(ref_tmp3314));
            }
            return;
          }
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&agg_tmp6313, sizeof(agg_tmp6313));
        }
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp3314, sizeof(ref_tmp3314));
      }
      double t333 = balance308;
      ClientData__setBalance(&client274, t333);
      if (__cir_exc_active) {
        return;
      }
      int t334 = accountNumber272;
      ClientData__setAccountNumber(&client274, t334);
      if (__cir_exc_active) {
        return;
      }
      struct std__basic_fstream_char__std__char_traits_char__* t335 = insertInFile271;
      struct std__basic_ostream_char__std__char_traits_char__* base336 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t335 + 16);
      int t337 = accountNumber272;
      int c338 = 1;
      int b339 = t337 - c338;
      unsigned long cast340 = (unsigned long)b339;
      unsigned long c341 = 40;
      unsigned long b342 = cast340 * c341;
      long cast343 = (long)b342;
      // externalized std:: op: std::fpos<__mbstate_t>::fpos(long)
      __VERIFIER_nondet_memory(&agg_tmp7315, sizeof(agg_tmp7315));
      struct std__fpos___mbstate_t_ t344 = agg_tmp7315;
      struct std__basic_ostream_char__std__char_traits_char__* std345;
      __VERIFIER_nondet_memory(&std345, sizeof(std345));
      struct std__basic_fstream_char__std__char_traits_char__* t346 = insertInFile271;
      struct std__basic_ostream_char__std__char_traits_char__* base347 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t346 + 16);
      char* cast348 = (char*)&(client274);
      long c349 = 40;
      struct std__basic_ostream_char__std__char_traits_char__* std350;
      __VERIFIER_nondet_memory(&std350, sizeof(std350));
    } else {
      char* cast351 = (char*)&(_str_19);
      struct std__basic_ostream_char__std__char_traits_char__* std352;
      __VERIFIER_nondet_memory(&std352, sizeof(std352));
      int t353 = accountNumber272;
      struct std__basic_ostream_char__std__char_traits_char__* std354;
      __VERIFIER_nondet_memory(&std354, sizeof(std354));
      char* cast355 = (char*)&(_str_23);
      struct std__basic_ostream_char__std__char_traits_char__* std356;
      __VERIFIER_nondet_memory(&std356, sizeof(std356));
      struct std__basic_ostream_char__std__char_traits_char__* std357;
      __VERIFIER_nondet_memory(&std357, sizeof(std357));
    }
  return;
}

// function: _Z12deleteRecordRSt13basic_fstreamIcSt11char_traitsIcEE
void deleteRecord(struct std__basic_fstream_char__std__char_traits_char__* v358) {
bb359:
  struct std__basic_fstream_char__std__char_traits_char__* deleteFromFile360;
  int accountNumber361;
  struct std__fpos___mbstate_t_ agg_tmp0362;
  struct ClientData client363;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp1364;
  struct std__allocator_char_ ref_tmp0365;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp2366;
  struct std__allocator_char_ ref_tmp1367;
  deleteFromFile360 = v358;
  char* cast368 = (char*)&(_str_24);
  int r369 = getAccount(cast368);
  if (__cir_exc_active) {
    return;
  }
  accountNumber361 = r369;
  struct std__basic_fstream_char__std__char_traits_char__* t370 = deleteFromFile360;
  struct std__basic_istream_char__std__char_traits_char__* base371 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t370 + 0);
  int t372 = accountNumber361;
  int c373 = 1;
  int b374 = t372 - c373;
  unsigned long cast375 = (unsigned long)b374;
  unsigned long c376 = 40;
  unsigned long b377 = cast375 * c376;
  long cast378 = (long)b377;
  // externalized std:: op: std::fpos<__mbstate_t>::fpos(long)
  __VERIFIER_nondet_memory(&agg_tmp0362, sizeof(agg_tmp0362));
  struct std__fpos___mbstate_t_ t379 = agg_tmp0362;
  struct std__basic_istream_char__std__char_traits_char__* std380;
  __VERIFIER_nondet_memory(&std380, sizeof(std380));
  int c381 = 0;
  char* cast382 = (char*)&(_str_16);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp0365, sizeof(ref_tmp0365));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&agg_tmp1364, sizeof(agg_tmp1364));
    __VERIFIER_nondet_memory(cast382, sizeof(*cast382));
    __VERIFIER_nondet_memory(&ref_tmp0365, sizeof(ref_tmp0365));
      char* cast383 = (char*)&(_str_16);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp1367, sizeof(ref_tmp1367));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&agg_tmp2366, sizeof(agg_tmp2366));
        __VERIFIER_nondet_memory(cast383, sizeof(*cast383));
        __VERIFIER_nondet_memory(&ref_tmp1367, sizeof(ref_tmp1367));
          double c384 = 0x0p0;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t385 = agg_tmp1364;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t386 = agg_tmp2366;
          ClientData__ClientData(&client363, c381, t385, t386, c384);
          if (__cir_exc_active) {
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&agg_tmp2366, sizeof(agg_tmp2366));
            }
            {
              // externalized std:: op: std::allocator<char>::~allocator()
              __VERIFIER_nondet_memory(&ref_tmp1367, sizeof(ref_tmp1367));
            }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&agg_tmp1364, sizeof(agg_tmp1364));
            }
            {
              // externalized std:: op: std::allocator<char>::~allocator()
              __VERIFIER_nondet_memory(&ref_tmp0365, sizeof(ref_tmp0365));
            }
            return;
          }
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&agg_tmp2366, sizeof(agg_tmp2366));
        }
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp1367, sizeof(ref_tmp1367));
      }
    {
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
      __VERIFIER_nondet_memory(&agg_tmp1364, sizeof(agg_tmp1364));
    }
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp0365, sizeof(ref_tmp0365));
  }
  struct std__basic_fstream_char__std__char_traits_char__* t387 = deleteFromFile360;
  struct std__basic_istream_char__std__char_traits_char__* base388 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t387 + 0);
  char* cast389 = (char*)&(client363);
  long c390 = 40;
  struct std__basic_istream_char__std__char_traits_char__* std391;
  __VERIFIER_nondet_memory(&std391, sizeof(std391));
    int r392 = ClientData__getAccountNumber___const(&client363);
    if (__cir_exc_active) {
      return;
    }
    int c393 = 0;
    _Bool c394 = ((r392 != c393)) ? 1 : 0;
    if (c394) {
      struct ClientData blankClient395;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp3396;
      struct std__allocator_char_ ref_tmp2397;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp4398;
      struct std__allocator_char_ ref_tmp3399;
      struct std__fpos___mbstate_t_ agg_tmp5400;
      int c401 = 0;
      char* cast402 = (char*)&(_str_16);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp2397, sizeof(ref_tmp2397));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&agg_tmp3396, sizeof(agg_tmp3396));
        __VERIFIER_nondet_memory(cast402, sizeof(*cast402));
        __VERIFIER_nondet_memory(&ref_tmp2397, sizeof(ref_tmp2397));
          char* cast403 = (char*)&(_str_16);
          // externalized std:: op: std::allocator<char>::allocator()
          __VERIFIER_nondet_memory(&ref_tmp3399, sizeof(ref_tmp3399));
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
            __VERIFIER_nondet_memory(&agg_tmp4398, sizeof(agg_tmp4398));
            __VERIFIER_nondet_memory(cast403, sizeof(*cast403));
            __VERIFIER_nondet_memory(&ref_tmp3399, sizeof(ref_tmp3399));
              double c404 = 0x0p0;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t405 = agg_tmp3396;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t406 = agg_tmp4398;
              ClientData__ClientData(&blankClient395, c401, t405, t406, c404);
              if (__cir_exc_active) {
                {
                  // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                  __VERIFIER_nondet_memory(&agg_tmp4398, sizeof(agg_tmp4398));
                }
                {
                  // externalized std:: op: std::allocator<char>::~allocator()
                  __VERIFIER_nondet_memory(&ref_tmp3399, sizeof(ref_tmp3399));
                }
                {
                  // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                  __VERIFIER_nondet_memory(&agg_tmp3396, sizeof(agg_tmp3396));
                }
                {
                  // externalized std:: op: std::allocator<char>::~allocator()
                  __VERIFIER_nondet_memory(&ref_tmp2397, sizeof(ref_tmp2397));
                }
                return;
              }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&agg_tmp4398, sizeof(agg_tmp4398));
            }
          {
            // externalized std:: op: std::allocator<char>::~allocator()
            __VERIFIER_nondet_memory(&ref_tmp3399, sizeof(ref_tmp3399));
          }
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&agg_tmp3396, sizeof(agg_tmp3396));
        }
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp2397, sizeof(ref_tmp2397));
      }
      struct std__basic_fstream_char__std__char_traits_char__* t407 = deleteFromFile360;
      struct std__basic_ostream_char__std__char_traits_char__* base408 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t407 + 16);
      int t409 = accountNumber361;
      int c410 = 1;
      int b411 = t409 - c410;
      unsigned long cast412 = (unsigned long)b411;
      unsigned long c413 = 40;
      unsigned long b414 = cast412 * c413;
      long cast415 = (long)b414;
      // externalized std:: op: std::fpos<__mbstate_t>::fpos(long)
      __VERIFIER_nondet_memory(&agg_tmp5400, sizeof(agg_tmp5400));
      struct std__fpos___mbstate_t_ t416 = agg_tmp5400;
      struct std__basic_ostream_char__std__char_traits_char__* std417;
      __VERIFIER_nondet_memory(&std417, sizeof(std417));
      struct std__basic_fstream_char__std__char_traits_char__* t418 = deleteFromFile360;
      struct std__basic_ostream_char__std__char_traits_char__* base419 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t418 + 16);
      char* cast420 = (char*)&(blankClient395);
      long c421 = 40;
      struct std__basic_ostream_char__std__char_traits_char__* std422;
      __VERIFIER_nondet_memory(&std422, sizeof(std422));
      char* cast423 = (char*)&(_str_19);
      struct std__basic_ostream_char__std__char_traits_char__* std424;
      __VERIFIER_nondet_memory(&std424, sizeof(std424));
      int t425 = accountNumber361;
      struct std__basic_ostream_char__std__char_traits_char__* std426;
      __VERIFIER_nondet_memory(&std426, sizeof(std426));
      char* cast427 = (char*)&(_str_25);
      struct std__basic_ostream_char__std__char_traits_char__* std428;
      __VERIFIER_nondet_memory(&std428, sizeof(std428));
    } else {
      char* cast429 = (char*)&(_str_19);
      struct std__basic_ostream_char__std__char_traits_char__* std430;
      __VERIFIER_nondet_memory(&std430, sizeof(std430));
      int t431 = accountNumber361;
      struct std__basic_ostream_char__std__char_traits_char__* std432;
      __VERIFIER_nondet_memory(&std432, sizeof(std432));
      char* cast433 = (char*)&(_str_26);
      struct std__basic_ostream_char__std__char_traits_char__* std434;
      __VERIFIER_nondet_memory(&std434, sizeof(std434));
    }
  return;
}

// function: main
int main() {
bb435:
  int __retval436;
  struct std__basic_fstream_char__std__char_traits_char__ inOutCredit437;
  int choice438;
  int c439 = 0;
  __retval436 = c439;
  char* cast440 = (char*)&(_str);
  int t441 = _ZNSt8ios_base2inE_const;
  int t442 = _ZNSt8ios_base3outE_const;
  int std443 = __VERIFIER_nondet_int();
  // externalized std:: op: std::basic_fstream<char, std::char_traits<char> >::basic_fstream(char const*, std::_Ios_Openmode)
  __VERIFIER_nondet_memory(&inOutCredit437, sizeof(inOutCredit437));
  __VERIFIER_nondet_memory(cast440, sizeof(*cast440));
      void** v444 = (void**)&(inOutCredit437);
      void* v445 = *((void**)v444);
      unsigned char* cast446 = (unsigned char*)v445;
      long c447 = -24;
      unsigned char* ptr448 = &(cast446)[c447];
      long* cast449 = (long*)ptr448;
      long t450 = *cast449;
      unsigned char* cast451 = (unsigned char*)&(inOutCredit437);
      unsigned char* ptr452 = &(cast451)[t450];
      struct std__basic_fstream_char__std__char_traits_char__* cast453 = (struct std__basic_fstream_char__std__char_traits_char__*)ptr452;
      struct std__basic_ios_char__std__char_traits_char__* cast454 = (struct std__basic_ios_char__std__char_traits_char__*)cast453;
      _Bool std455;
      __VERIFIER_nondet_memory(&std455, sizeof(std455));
      if (std455) {
        char* cast456 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std457;
        __VERIFIER_nondet_memory(&std457, sizeof(std457));
        struct std__basic_ostream_char__std__char_traits_char__* std458;
        __VERIFIER_nondet_memory(&std458, sizeof(std458));
        int c459 = 1;
        exit(c459);
      }
      while (1) {
        int r460 = enterChoice();
        if (__cir_exc_active) {
          {
            // externalized std:: op: std::basic_fstream<char, std::char_traits<char> >::~basic_fstream()
            __VERIFIER_nondet_memory(&inOutCredit437, sizeof(inOutCredit437));
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        choice438 = r460;
        int c461 = 5;
        _Bool c462 = ((r460 != c461)) ? 1 : 0;
        if (!c462) break;
            int t463 = choice438;
            switch (t463) {
            case 1:
              printRecord(&inOutCredit437);
              if (__cir_exc_active) {
                {
                  // externalized std:: op: std::basic_fstream<char, std::char_traits<char> >::~basic_fstream()
                  __VERIFIER_nondet_memory(&inOutCredit437, sizeof(inOutCredit437));
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              break;
            case 2:
              updateRecord(&inOutCredit437);
              if (__cir_exc_active) {
                {
                  // externalized std:: op: std::basic_fstream<char, std::char_traits<char> >::~basic_fstream()
                  __VERIFIER_nondet_memory(&inOutCredit437, sizeof(inOutCredit437));
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              break;
            case 3:
              newRecord(&inOutCredit437);
              if (__cir_exc_active) {
                {
                  // externalized std:: op: std::basic_fstream<char, std::char_traits<char> >::~basic_fstream()
                  __VERIFIER_nondet_memory(&inOutCredit437, sizeof(inOutCredit437));
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              break;
            case 4:
              deleteRecord(&inOutCredit437);
              if (__cir_exc_active) {
                {
                  // externalized std:: op: std::basic_fstream<char, std::char_traits<char> >::~basic_fstream()
                  __VERIFIER_nondet_memory(&inOutCredit437, sizeof(inOutCredit437));
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              break;
            default:
              char* cast464 = (char*)&(_str_2);
              struct std__basic_ostream_char__std__char_traits_char__* std465;
              __VERIFIER_nondet_memory(&std465, sizeof(std465));
              struct std__basic_ostream_char__std__char_traits_char__* std466;
              __VERIFIER_nondet_memory(&std466, sizeof(std466));
              break;
            }
          void** v467 = (void**)&(inOutCredit437);
          void* v468 = *((void**)v467);
          unsigned char* cast469 = (unsigned char*)v468;
          long c470 = -24;
          unsigned char* ptr471 = &(cast469)[c470];
          long* cast472 = (long*)ptr471;
          long t473 = *cast472;
          unsigned char* cast474 = (unsigned char*)&(inOutCredit437);
          unsigned char* ptr475 = &(cast474)[t473];
          struct std__basic_fstream_char__std__char_traits_char__* cast476 = (struct std__basic_fstream_char__std__char_traits_char__*)ptr475;
          struct std__basic_ios_char__std__char_traits_char__* cast477 = (struct std__basic_ios_char__std__char_traits_char__*)cast476;
          int t478 = _ZNSt8ios_base7goodbitE_const;
          // externalized std:: op: std::basic_ios<char, std::char_traits<char> >::clear(std::_Ios_Iostate)
          __VERIFIER_nondet_memory(cast477, sizeof(*cast477));
      }
    int c479 = 0;
    __retval436 = c479;
    int t480 = __retval436;
    int ret_val481 = t480;
    {
      // externalized std:: op: std::basic_fstream<char, std::char_traits<char> >::~basic_fstream()
      __VERIFIER_nondet_memory(&inOutCredit437, sizeof(inOutCredit437));
    }
    return ret_val481;
  int t482 = __retval436;
  return t482;
}

