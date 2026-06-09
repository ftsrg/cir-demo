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
struct std____new_allocator_char_ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct __mbstate_t { int __field0; union anon_0 __field1; };
struct std____codecvt_abstract_base_char__char____mbstate_t_ { struct std__locale__facet __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_1 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale _M_buf_locale; };
struct std__codecvt_char__char____mbstate_t_ { struct std____codecvt_abstract_base_char__char____mbstate_t_ __field0; struct __locale_struct* __field1; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
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
int std__operator__6(int p0, int p1);
extern void std__ios_base__ios_base(struct std__ios_base* p0);
void std__ios_base___ios_base(struct std__ios_base* p0) {}
void std__basic_ios_char__std__char_traits_char_____basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_istream_char__std__char_traits_char_____basic_istream(struct std__basic_istream_char__std__char_traits_char__* p0, void** p1, struct std__basic_streambuf_char__std__char_traits_char__* p2);
void std__basic_ostream_char__std__char_traits_char_____basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* p0, void** p1, struct std__basic_streambuf_char__std__char_traits_char__* p2);
void std__basic_ostream_char__std__char_traits_char______basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* p0, void** p1);
void std__basic_istream_char__std__char_traits_char______basic_istream(struct std__basic_istream_char__std__char_traits_char__* p0, void** p1);
void std__basic_iostream_char__std__char_traits_char_____basic_iostream(struct std__basic_iostream_char__std__char_traits_char__* p0, void** p1, struct std__basic_streambuf_char__std__char_traits_char__* p2);
extern void std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* p0);
extern void std__basic_ios_char__std__char_traits_char_____init(struct std__basic_ios_char__std__char_traits_char__* p0, struct std__basic_streambuf_char__std__char_traits_char__* p1);
extern struct std__basic_filebuf_char__std__char_traits_char__* std__basic_filebuf_char__std__char_traits_char_____open(struct std__basic_filebuf_char__std__char_traits_char__* p0, char* p1, int p2);
int std__operator__4(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
void std__basic_fstream_char__std__char_traits_char_____open(struct std__basic_fstream_char__std__char_traits_char__* p0, char* p1, int p2);
void std__basic_filebuf_char__std__char_traits_char______basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* p0);
void std__basic_iostream_char__std__char_traits_char______basic_iostream(struct std__basic_iostream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_fstream_char__std__char_traits_char_____basic_fstream(struct std__basic_fstream_char__std__char_traits_char__* p0, char* p1, int p2);
int std__operator_(int p0, int p1);
_Bool std__basic_ios_char__std__char_traits_char_____fail___const(struct std__basic_ios_char__std__char_traits_char__* p0);
_Bool std__basic_ios_char__std__char_traits_char_____operator____const(struct std__basic_ios_char__std__char_traits_char__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
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
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__operator___2(struct std__basic_istream_char__std__char_traits_char__* p0, int* p1);
int enterChoice();
void std__basic_ostream_char__std__char_traits_char_____basic_ostream_2(struct std__basic_ostream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ofstream_char__std__char_traits_char_____open(struct std__basic_ofstream_char__std__char_traits_char__* p0, char* p1, int p2);
void std__basic_ofstream_char__std__char_traits_char_____basic_ofstream(struct std__basic_ofstream_char__std__char_traits_char__* p0, char* p1, int p2);
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
struct std__ios_base* std__right(struct std__ios_base* p0);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__seekg(struct std__basic_istream_char__std__char_traits_char__* p0, struct std__fpos___mbstate_t_ p1);
void std__fpos___mbstate_t___fpos(struct std__fpos___mbstate_t_* p0, long p1);
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
extern void ClientData__ClientData(struct ClientData* p0, int p1, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ p3, double p4);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__read(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool std__basic_ios_char__std__char_traits_char_____eof___const(struct std__basic_ios_char__std__char_traits_char__* p0);
extern int ClientData__getAccountNumber___const(struct ClientData* p0);
long std__ios_base__precision(struct std__ios_base* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setprecision p1);
extern struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ClientData__getLastName_abi_cxx11____const(struct ClientData* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ClientData__getFirstName_abi_cxx11____const(struct ClientData* p0);
struct std___Setprecision std__setprecision(int p0);
struct std__ios_base* std__fixed(struct std__ios_base* p0);
int std__ios_base__setf(struct std__ios_base* p0, int p1);
struct std__ios_base* std__showpoint(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_double_(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
void outputLine(struct std__basic_ostream_char__std__char_traits_char__* p0, struct ClientData* p1);
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream_2(struct std__basic_ofstream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream(struct std__basic_ofstream_char__std__char_traits_char__* p0);
void printRecord(struct std__basic_fstream_char__std__char_traits_char__* p0);
int getAccount(char* p0);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__std__istream___M_extract_double_(struct std__basic_istream_char__std__char_traits_char__* p0, double* p1);
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* p0, double* p1);
extern double ClientData__getBalance___const(struct ClientData* p0);
extern void ClientData__setBalance(struct ClientData* p0, double p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__seekp(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std__fpos___mbstate_t_ p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__write(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
void updateRecord(struct std__basic_fstream_char__std__char_traits_char__* p0);
extern void std____istream_extract(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___15ul__std__basic_istream_char__std__char_traits_char______char_(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1);
struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(struct std__basic_istream_char__std__char_traits_char__* p0, struct std___Setw p1);
struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___10ul__std__basic_istream_char__std__char_traits_char______char_(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1);
extern void ClientData__setLastName(struct ClientData* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ p1);
extern void ClientData__setFirstName(struct ClientData* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ p1);
extern void ClientData__setAccountNumber(struct ClientData* p0, int p1);
void newRecord(struct std__basic_fstream_char__std__char_traits_char__* p0);
void deleteRecord(struct std__basic_fstream_char__std__char_traits_char__* p0);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
void std__basic_fstream_char__std__char_traits_char______basic_fstream_2(struct std__basic_fstream_char__std__char_traits_char__* p0, void** p1);
void std__basic_fstream_char__std__char_traits_char______basic_fstream(struct std__basic_fstream_char__std__char_traits_char__* p0);
int main();
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
extern void std____throw_logic_error(char* p0);
_Bool std____is_constant_evaluated();
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* p0, char* p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** p0);
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* p0, char* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* p0);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std____throw_length_error(char* p0);
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* p0, unsigned long p1, void* p2);
char* std__allocator_char___allocate(struct std__allocator_char_* p0, unsigned long p1);
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* p0, unsigned long p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* p0, unsigned long p1);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
_Bool std__is_constant_evaluated();
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* p0, char* p1);
void std__char_traits_char___assign(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* p0, char* p1, unsigned long p2);
char* char_const__std____niter_base_char_const__(char* p0);
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* p0, char* p1, char* p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* p0);
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, char* p2, struct std__forward_iterator_tag p3);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0);
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_char___deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern int __gxx_personality_v0();
extern struct std__basic_filebuf_char__std__char_traits_char__* std__basic_filebuf_char__std__char_traits_char_____close(struct std__basic_filebuf_char__std__char_traits_char__* p0);
void std____basic_file_char______basic_file(struct std____basic_file_char_* p0) {}
void std__locale___locale(struct std__locale* p0) {}
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* p0);

extern unsigned char* _ZTTSt13basic_fstreamIcSt11char_traitsIcEE[10] __attribute__((aligned(8)));
extern unsigned char* _ZTTSt14basic_ofstreamIcSt11char_traitsIcEE[4] __attribute__((aligned(8)));

// function: _ZStorSt13_Ios_OpenmodeS_
int std__operator__6(int v0, int v1) {
bb2:
  int __a3;
  int __b4;
  int __retval5;
  __a3 = v0;
  __b4 = v1;
  int t6 = __a3;
  int t7 = __b4;
  int b8 = t6 | t7;
  __retval5 = b8;
  int t9 = __retval5;
  return t9;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEEC2Ev
void std__basic_ios_char__std__char_traits_char_____basic_ios(struct std__basic_ios_char__std__char_traits_char__* v10) {
bb11:
  struct std__basic_ios_char__std__char_traits_char__* this12;
  this12 = v10;
  struct std__basic_ios_char__std__char_traits_char__* t13 = this12;
  struct std__ios_base* base14 = (struct std__ios_base*)((char *)t13 + 0);
  std__ios_base__ios_base(base14);
    void* v15 = (void*)&_ZTVSt9basic_iosIcSt11char_traitsIcEE[2];
    void** v16 = (void**)t13;
    *(void**)(v16) = (void*)v15;
    struct std__basic_ostream_char__std__char_traits_char__* c17 = ((void*)0);
    t13->_M_tie = c17;
    char c18 = 0;
    t13->_M_fill = c18;
    _Bool c19 = 0;
    t13->_M_fill_init = c19;
    struct std__basic_streambuf_char__std__char_traits_char__* c20 = ((void*)0);
    t13->_M_streambuf = c20;
    struct std__ctype_char_* c21 = ((void*)0);
    t13->_M_ctype = c21;
    struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* c22 = ((void*)0);
    t13->_M_num_put = c22;
    struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* c23 = ((void*)0);
    t13->_M_num_get = c23;
  return;
}

// function: _ZNSiC2EPSt15basic_streambufIcSt11char_traitsIcEE
void std__basic_istream_char__std__char_traits_char_____basic_istream(struct std__basic_istream_char__std__char_traits_char__* v24, void** v25, struct std__basic_streambuf_char__std__char_traits_char__* v26) {
bb27:
  struct std__basic_istream_char__std__char_traits_char__* this28;
  void** vtt29;
  struct std__basic_streambuf_char__std__char_traits_char__* __sb30;
  this28 = v24;
  vtt29 = v25;
  __sb30 = v26;
  struct std__basic_istream_char__std__char_traits_char__* t31 = this28;
  void** t32 = vtt29;
  static void *vtt_slot33 = 0;
  void** vtt34 = (void**)&vtt_slot33;
  void** cast35 = (void**)vtt34;
  void* t36 = *cast35;
  void** v37 = (void**)t31;
  *(void**)(v37) = (void*)t36;
  static void *vtt_slot38 = 0;
  void** vtt39 = (void**)&vtt_slot38;
  void** cast40 = (void**)vtt39;
  void* t41 = *cast40;
  void** v42 = (void**)t31;
  void* v43 = *((void**)v42);
  unsigned char* cast44 = (unsigned char*)v43;
  long c45 = -24;
  unsigned char* ptr46 = &(cast44)[c45];
  long* cast47 = (long*)ptr46;
  long t48 = *cast47;
  unsigned char* cast49 = (unsigned char*)t31;
  unsigned char* ptr50 = &(cast49)[t48];
  struct std__basic_istream_char__std__char_traits_char__* cast51 = (struct std__basic_istream_char__std__char_traits_char__*)ptr50;
  void** v52 = (void**)cast51;
  *(void**)(v52) = (void*)t41;
  long c53 = 0;
  t31->_M_gcount = c53;
  void** v54 = (void**)t31;
  void* v55 = *((void**)v54);
  unsigned char* cast56 = (unsigned char*)v55;
  long c57 = -24;
  unsigned char* ptr58 = &(cast56)[c57];
  long* cast59 = (long*)ptr58;
  long t60 = *cast59;
  unsigned char* cast61 = (unsigned char*)t31;
  unsigned char* ptr62 = &(cast61)[t60];
  struct std__basic_istream_char__std__char_traits_char__* cast63 = (struct std__basic_istream_char__std__char_traits_char__*)ptr62;
  struct std__basic_ios_char__std__char_traits_char__* cast64 = (struct std__basic_ios_char__std__char_traits_char__*)cast63;
  struct std__basic_streambuf_char__std__char_traits_char__* t65 = __sb30;
  std__basic_ios_char__std__char_traits_char_____init(cast64, t65);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSoC2EPSt15basic_streambufIcSt11char_traitsIcEE
void std__basic_ostream_char__std__char_traits_char_____basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* v66, void** v67, struct std__basic_streambuf_char__std__char_traits_char__* v68) {
bb69:
  struct std__basic_ostream_char__std__char_traits_char__* this70;
  void** vtt71;
  struct std__basic_streambuf_char__std__char_traits_char__* __sb72;
  this70 = v66;
  vtt71 = v67;
  __sb72 = v68;
  struct std__basic_ostream_char__std__char_traits_char__* t73 = this70;
  void** t74 = vtt71;
  static void *vtt_slot75 = 0;
  void** vtt76 = (void**)&vtt_slot75;
  void** cast77 = (void**)vtt76;
  void* t78 = *cast77;
  void** v79 = (void**)t73;
  *(void**)(v79) = (void*)t78;
  static void *vtt_slot80 = 0;
  void** vtt81 = (void**)&vtt_slot80;
  void** cast82 = (void**)vtt81;
  void* t83 = *cast82;
  void** v84 = (void**)t73;
  void* v85 = *((void**)v84);
  unsigned char* cast86 = (unsigned char*)v85;
  long c87 = -24;
  unsigned char* ptr88 = &(cast86)[c87];
  long* cast89 = (long*)ptr88;
  long t90 = *cast89;
  unsigned char* cast91 = (unsigned char*)t73;
  unsigned char* ptr92 = &(cast91)[t90];
  struct std__basic_ostream_char__std__char_traits_char__* cast93 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr92;
  void** v94 = (void**)cast93;
  *(void**)(v94) = (void*)t83;
  void** v95 = (void**)t73;
  void* v96 = *((void**)v95);
  unsigned char* cast97 = (unsigned char*)v96;
  long c98 = -24;
  unsigned char* ptr99 = &(cast97)[c98];
  long* cast100 = (long*)ptr99;
  long t101 = *cast100;
  unsigned char* cast102 = (unsigned char*)t73;
  unsigned char* ptr103 = &(cast102)[t101];
  struct std__basic_ostream_char__std__char_traits_char__* cast104 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr103;
  struct std__basic_ios_char__std__char_traits_char__* cast105 = (struct std__basic_ios_char__std__char_traits_char__*)cast104;
  struct std__basic_streambuf_char__std__char_traits_char__* t106 = __sb72;
  std__basic_ios_char__std__char_traits_char_____init(cast105, t106);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSoD2Ev
void std__basic_ostream_char__std__char_traits_char______basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* v107, void** v108) {
bb109:
  struct std__basic_ostream_char__std__char_traits_char__* this110;
  void** vtt111;
  this110 = v107;
  vtt111 = v108;
  struct std__basic_ostream_char__std__char_traits_char__* t112 = this110;
  void** t113 = vtt111;
  return;
}

// function: _ZNSiD2Ev
void std__basic_istream_char__std__char_traits_char______basic_istream(struct std__basic_istream_char__std__char_traits_char__* v114, void** v115) {
bb116:
  struct std__basic_istream_char__std__char_traits_char__* this117;
  void** vtt118;
  this117 = v114;
  vtt118 = v115;
  struct std__basic_istream_char__std__char_traits_char__* t119 = this117;
  void** t120 = vtt118;
  long c121 = 0;
  t119->_M_gcount = c121;
  return;
}

// function: _ZNSdC2EPSt15basic_streambufIcSt11char_traitsIcEE
void std__basic_iostream_char__std__char_traits_char_____basic_iostream(struct std__basic_iostream_char__std__char_traits_char__* v122, void** v123, struct std__basic_streambuf_char__std__char_traits_char__* v124) {
bb125:
  struct std__basic_iostream_char__std__char_traits_char__* this126;
  void** vtt127;
  struct std__basic_streambuf_char__std__char_traits_char__* __sb128;
  this126 = v122;
  vtt127 = v123;
  __sb128 = v124;
  struct std__basic_iostream_char__std__char_traits_char__* t129 = this126;
  void** t130 = vtt127;
  struct std__basic_istream_char__std__char_traits_char__* base131 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t129 + 0);
  struct std__basic_streambuf_char__std__char_traits_char__* t132 = __sb128;
  static void *vtt_slot133 = 0;
  void** vtt134 = (void**)&vtt_slot133;
  std__basic_istream_char__std__char_traits_char_____basic_istream(base131, vtt134, t132);
  if (__cir_exc_active) {
    return;
  }
    struct std__basic_ostream_char__std__char_traits_char__* base135 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t129 + 16);
    struct std__basic_streambuf_char__std__char_traits_char__* t136 = __sb128;
    static void *vtt_slot137 = 0;
    void** vtt138 = (void**)&vtt_slot137;
    std__basic_ostream_char__std__char_traits_char_____basic_ostream(base135, vtt138, t136);
    if (__cir_exc_active) {
      {
        struct std__basic_istream_char__std__char_traits_char__* base139 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t129 + 0);
        static void *vtt_slot140 = 0;
        void** vtt141 = (void**)&vtt_slot140;
        std__basic_istream_char__std__char_traits_char______basic_istream(base139, vtt141);
      }
      return;
    }
      static void *vtt_slot142 = 0;
      void** vtt143 = (void**)&vtt_slot142;
      void** cast144 = (void**)vtt143;
      void* t145 = *cast144;
      void** v146 = (void**)t129;
      *(void**)(v146) = (void*)t145;
      static void *vtt_slot147 = 0;
      void** vtt148 = (void**)&vtt_slot147;
      void** cast149 = (void**)vtt148;
      void* t150 = *cast149;
      void** v151 = (void**)t129;
      void* v152 = *((void**)v151);
      unsigned char* cast153 = (unsigned char*)v152;
      long c154 = -24;
      unsigned char* ptr155 = &(cast153)[c154];
      long* cast156 = (long*)ptr155;
      long t157 = *cast156;
      unsigned char* cast158 = (unsigned char*)t129;
      unsigned char* ptr159 = &(cast158)[t157];
      struct std__basic_iostream_char__std__char_traits_char__* cast160 = (struct std__basic_iostream_char__std__char_traits_char__*)ptr159;
      void** v161 = (void**)cast160;
      *(void**)(v161) = (void*)t150;
      static void *vtt_slot162 = 0;
      void** vtt163 = (void**)&vtt_slot162;
      void** cast164 = (void**)vtt163;
      void* t165 = *cast164;
      struct std__basic_ostream_char__std__char_traits_char__* base166 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t129 + 16);
      void** v167 = (void**)base166;
      *(void**)(v167) = (void*)t165;
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__4(int v168, int v169) {
bb170:
  int __a171;
  int __b172;
  int __retval173;
  __a171 = v168;
  __b172 = v169;
  int t174 = __a171;
  int t175 = __b172;
  int b176 = t174 | t175;
  __retval173 = b176;
  int t177 = __retval173;
  return t177;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v178) {
bb179:
  struct std__basic_ios_char__std__char_traits_char__* this180;
  int __retval181;
  this180 = v178;
  struct std__basic_ios_char__std__char_traits_char__* t182 = this180;
  struct std__ios_base* base183 = (struct std__ios_base*)((char *)t182 + 0);
  int t184 = base183->_M_streambuf_state;
  __retval181 = t184;
  int t185 = __retval181;
  return t185;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v186, int v187) {
bb188:
  struct std__basic_ios_char__std__char_traits_char__* this189;
  int __state190;
  this189 = v186;
  __state190 = v187;
  struct std__basic_ios_char__std__char_traits_char__* t191 = this189;
  int r192 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t191);
  if (__cir_exc_active) {
    return;
  }
  int t193 = __state190;
  int r194 = std__operator__4(r192, t193);
  std__basic_ios_char__std__char_traits_char_____clear(t191, r194);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt13basic_fstreamIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode
void std__basic_fstream_char__std__char_traits_char_____open(struct std__basic_fstream_char__std__char_traits_char__* v195, char* v196, int v197) {
bb198:
  struct std__basic_fstream_char__std__char_traits_char__* this199;
  char* __s200;
  int __mode201;
  this199 = v195;
  __s200 = v196;
  __mode201 = v197;
  struct std__basic_fstream_char__std__char_traits_char__* t202 = this199;
    char* t203 = __s200;
    int t204 = __mode201;
    struct std__basic_filebuf_char__std__char_traits_char__* r205 = std__basic_filebuf_char__std__char_traits_char_____open(&t202->_M_filebuf, t203, t204);
    if (__cir_exc_active) {
      return;
    }
    _Bool cast206 = (_Bool)r205;
    _Bool u207 = !cast206;
    if (u207) {
      void** v208 = (void**)t202;
      void* v209 = *((void**)v208);
      unsigned char* cast210 = (unsigned char*)v209;
      long c211 = -24;
      unsigned char* ptr212 = &(cast210)[c211];
      long* cast213 = (long*)ptr212;
      long t214 = *cast213;
      unsigned char* cast215 = (unsigned char*)t202;
      unsigned char* ptr216 = &(cast215)[t214];
      struct std__basic_fstream_char__std__char_traits_char__* cast217 = (struct std__basic_fstream_char__std__char_traits_char__*)ptr216;
      struct std__basic_ios_char__std__char_traits_char__* cast218 = (struct std__basic_ios_char__std__char_traits_char__*)cast217;
      int t219 = _ZNSt8ios_base7failbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast218, t219);
      if (__cir_exc_active) {
        return;
      }
    } else {
      void** v220 = (void**)t202;
      void* v221 = *((void**)v220);
      unsigned char* cast222 = (unsigned char*)v221;
      long c223 = -24;
      unsigned char* ptr224 = &(cast222)[c223];
      long* cast225 = (long*)ptr224;
      long t226 = *cast225;
      unsigned char* cast227 = (unsigned char*)t202;
      unsigned char* ptr228 = &(cast227)[t226];
      struct std__basic_fstream_char__std__char_traits_char__* cast229 = (struct std__basic_fstream_char__std__char_traits_char__*)ptr228;
      struct std__basic_ios_char__std__char_traits_char__* cast230 = (struct std__basic_ios_char__std__char_traits_char__*)cast229;
      int t231 = _ZNSt8ios_base7goodbitE_const;
      std__basic_ios_char__std__char_traits_char_____clear(cast230, t231);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt13basic_filebufIcSt11char_traitsIcEED2Ev
void std__basic_filebuf_char__std__char_traits_char______basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* v232) {
bb233:
  struct std__basic_filebuf_char__std__char_traits_char__* this234;
  this234 = v232;
  struct std__basic_filebuf_char__std__char_traits_char__* t235 = this234;
          struct std__basic_filebuf_char__std__char_traits_char__* r237 = std__basic_filebuf_char__std__char_traits_char_____close(t235);
          if (__cir_exc_active) {
            {
              std____basic_file_char______basic_file(&t235->_M_file);
            }
            {
              struct std__basic_streambuf_char__std__char_traits_char__* base238 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t235 + 0);
              std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base238);
            }
            goto cir_try_dispatch236;
          }
        cir_try_dispatch236: ;
        if (__cir_exc_active) {
        {
          int ca_tok239 = 0;
          void* ca_exn240 = (void*)__cir_exc_ptr;
          __cir_exc_active = 0;
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
        }
        }
    {
      std____basic_file_char______basic_file(&t235->_M_file);
    }
  {
    struct std__basic_streambuf_char__std__char_traits_char__* base241 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t235 + 0);
    std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base241);
  }
  return;
}

// function: _ZNSdD2Ev
void std__basic_iostream_char__std__char_traits_char______basic_iostream(struct std__basic_iostream_char__std__char_traits_char__* v242, void** v243) {
bb244:
  struct std__basic_iostream_char__std__char_traits_char__* this245;
  void** vtt246;
  this245 = v242;
  vtt246 = v243;
  struct std__basic_iostream_char__std__char_traits_char__* t247 = this245;
  void** t248 = vtt246;
    {
      struct std__basic_ostream_char__std__char_traits_char__* base249 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t247 + 16);
      static void *vtt_slot250 = 0;
      void** vtt251 = (void**)&vtt_slot250;
      std__basic_ostream_char__std__char_traits_char______basic_ostream(base249, vtt251);
    }
  {
    struct std__basic_istream_char__std__char_traits_char__* base252 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t247 + 0);
    static void *vtt_slot253 = 0;
    void** vtt254 = (void**)&vtt_slot253;
    std__basic_istream_char__std__char_traits_char______basic_istream(base252, vtt254);
  }
  return;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEED2Ev
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* v255) {
bb256:
  struct std__basic_ios_char__std__char_traits_char__* this257;
  this257 = v255;
  struct std__basic_ios_char__std__char_traits_char__* t258 = this257;
  {
    struct std__ios_base* base259 = (struct std__ios_base*)((char *)t258 + 0);
    std__ios_base___ios_base(base259);
  }
  return;
}

// function: _ZNSt13basic_fstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode
void std__basic_fstream_char__std__char_traits_char_____basic_fstream(struct std__basic_fstream_char__std__char_traits_char__* v260, char* v261, int v262) {
bb263:
  struct std__basic_fstream_char__std__char_traits_char__* this264;
  char* __s265;
  int __mode266;
  this264 = v260;
  __s265 = v261;
  __mode266 = v262;
  struct std__basic_fstream_char__std__char_traits_char__* t267 = this264;
  struct std__basic_ios_char__std__char_traits_char__* base268 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t267 + 264);
  std__basic_ios_char__std__char_traits_char_____basic_ios(base268);
  if (__cir_exc_active) {
    return;
  }
    struct std__basic_iostream_char__std__char_traits_char__* base269 = (struct std__basic_iostream_char__std__char_traits_char__*)((char *)t267 + 0);
    struct std__basic_streambuf_char__std__char_traits_char__* c270 = ((void*)0);
    static void *vtt_slot271 = 0;
    void** vtt272 = (void**)&vtt_slot271;
    std__basic_iostream_char__std__char_traits_char_____basic_iostream(base269, vtt272, c270);
    if (__cir_exc_active) {
      {
        struct std__basic_ios_char__std__char_traits_char__* base273 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t267 + 264);
        std__basic_ios_char__std__char_traits_char______basic_ios(base273);
      }
      return;
    }
      void* v274 = (void*)&_ZTVSt13basic_fstreamIcSt11char_traitsIcEE[3];
      void** v275 = (void**)t267;
      *(void**)(v275) = (void*)v274;
      void* v276 = (void*)&_ZTVSt13basic_fstreamIcSt11char_traitsIcEE[3];
      struct std__basic_ios_char__std__char_traits_char__* base277 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t267 + 264);
      void** v278 = (void**)base277;
      *(void**)(v278) = (void*)v276;
      void* v279 = (void*)&_ZTVSt13basic_fstreamIcSt11char_traitsIcEE[3];
      struct std__basic_ostream_char__std__char_traits_char__* base280 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t267 + 16);
      void** v281 = (void**)base280;
      *(void**)(v281) = (void*)v279;
      std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(&t267->_M_filebuf);
      if (__cir_exc_active) {
        {
          struct std__basic_iostream_char__std__char_traits_char__* base282 = (struct std__basic_iostream_char__std__char_traits_char__*)((char *)t267 + 0);
          static void *vtt_slot283 = 0;
          void** vtt284 = (void**)&vtt_slot283;
          std__basic_iostream_char__std__char_traits_char______basic_iostream(base282, vtt284);
        }
        {
          struct std__basic_ios_char__std__char_traits_char__* base285 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t267 + 264);
          std__basic_ios_char__std__char_traits_char______basic_ios(base285);
        }
        return;
      }
        void** v286 = (void**)t267;
        void* v287 = *((void**)v286);
        unsigned char* cast288 = (unsigned char*)v287;
        long c289 = -24;
        unsigned char* ptr290 = &(cast288)[c289];
        long* cast291 = (long*)ptr290;
        long t292 = *cast291;
        unsigned char* cast293 = (unsigned char*)t267;
        unsigned char* ptr294 = &(cast293)[t292];
        struct std__basic_fstream_char__std__char_traits_char__* cast295 = (struct std__basic_fstream_char__std__char_traits_char__*)ptr294;
        struct std__basic_ios_char__std__char_traits_char__* cast296 = (struct std__basic_ios_char__std__char_traits_char__*)cast295;
        struct std__basic_streambuf_char__std__char_traits_char__* base297 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)&(t267->_M_filebuf) + 0);
        std__basic_ios_char__std__char_traits_char_____init(cast296, base297);
        if (__cir_exc_active) {
          {
            std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t267->_M_filebuf);
          }
          {
            struct std__basic_iostream_char__std__char_traits_char__* base298 = (struct std__basic_iostream_char__std__char_traits_char__*)((char *)t267 + 0);
            static void *vtt_slot299 = 0;
            void** vtt300 = (void**)&vtt_slot299;
            std__basic_iostream_char__std__char_traits_char______basic_iostream(base298, vtt300);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base301 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t267 + 264);
            std__basic_ios_char__std__char_traits_char______basic_ios(base301);
          }
          return;
        }
        char* t302 = __s265;
        int t303 = __mode266;
        std__basic_fstream_char__std__char_traits_char_____open(t267, t302, t303);
        if (__cir_exc_active) {
          {
            std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t267->_M_filebuf);
          }
          {
            struct std__basic_iostream_char__std__char_traits_char__* base304 = (struct std__basic_iostream_char__std__char_traits_char__*)((char *)t267 + 0);
            static void *vtt_slot305 = 0;
            void** vtt306 = (void**)&vtt_slot305;
            std__basic_iostream_char__std__char_traits_char______basic_iostream(base304, vtt306);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base307 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t267 + 264);
            std__basic_ios_char__std__char_traits_char______basic_ios(base307);
          }
          return;
        }
  return;
}

// function: _ZStanSt12_Ios_IostateS_
int std__operator_(int v308, int v309) {
bb310:
  int __a311;
  int __b312;
  int __retval313;
  __a311 = v308;
  __b312 = v309;
  int t314 = __a311;
  int t315 = __b312;
  int b316 = t314 & t315;
  __retval313 = b316;
  int t317 = __retval313;
  return t317;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE4failEv
_Bool std__basic_ios_char__std__char_traits_char_____fail___const(struct std__basic_ios_char__std__char_traits_char__* v318) {
bb319:
  struct std__basic_ios_char__std__char_traits_char__* this320;
  _Bool __retval321;
  this320 = v318;
  struct std__basic_ios_char__std__char_traits_char__* t322 = this320;
  int r323 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t322);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  int t324 = _ZNSt8ios_base6badbitE_const;
  int t325 = _ZNSt8ios_base7failbitE_const;
  int r326 = std__operator__4(t324, t325);
  int r327 = std__operator_(r323, r326);
  int c328 = 0;
  _Bool c329 = ((r327 != c328)) ? 1 : 0;
  __retval321 = c329;
  _Bool t330 = __retval321;
  return t330;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEEntEv
_Bool std__basic_ios_char__std__char_traits_char_____operator____const(struct std__basic_ios_char__std__char_traits_char__* v331) {
bb332:
  struct std__basic_ios_char__std__char_traits_char__* this333;
  _Bool __retval334;
  this333 = v331;
  struct std__basic_ios_char__std__char_traits_char__* t335 = this333;
  _Bool r336 = std__basic_ios_char__std__char_traits_char_____fail___const(t335);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  __retval334 = r336;
  _Bool t337 = __retval334;
  return t337;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v338, char* v339) {
bb340:
  struct std__basic_ostream_char__std__char_traits_char__* __out341;
  char* __s342;
  struct std__basic_ostream_char__std__char_traits_char__* __retval343;
  __out341 = v338;
  __s342 = v339;
    char* t344 = __s342;
    _Bool cast345 = (_Bool)t344;
    _Bool u346 = !cast345;
    if (u346) {
      struct std__basic_ostream_char__std__char_traits_char__* t347 = __out341;
      void** v348 = (void**)t347;
      void* v349 = *((void**)v348);
      unsigned char* cast350 = (unsigned char*)v349;
      long c351 = -24;
      unsigned char* ptr352 = &(cast350)[c351];
      long* cast353 = (long*)ptr352;
      long t354 = *cast353;
      unsigned char* cast355 = (unsigned char*)t347;
      unsigned char* ptr356 = &(cast355)[t354];
      struct std__basic_ostream_char__std__char_traits_char__* cast357 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr356;
      struct std__basic_ios_char__std__char_traits_char__* cast358 = (struct std__basic_ios_char__std__char_traits_char__*)cast357;
      int t359 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast358, t359);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t360 = __out341;
      char* t361 = __s342;
      char* t362 = __s342;
      unsigned long r363 = std__char_traits_char___length(t362);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast364 = (long)r363;
      struct std__basic_ostream_char__std__char_traits_char__* r365 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t360, t361, cast364);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t366 = __out341;
  __retval343 = t366;
  struct std__basic_ostream_char__std__char_traits_char__* t367 = __retval343;
  return t367;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v368, void* v369) {
bb370:
  struct std__basic_ostream_char__std__char_traits_char__* this371;
  void* __pf372;
  struct std__basic_ostream_char__std__char_traits_char__* __retval373;
  this371 = v368;
  __pf372 = v369;
  struct std__basic_ostream_char__std__char_traits_char__* t374 = this371;
  void* t375 = __pf372;
  struct std__basic_ostream_char__std__char_traits_char__* r376 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t375)(t374);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval373 = r376;
  struct std__basic_ostream_char__std__char_traits_char__* t377 = __retval373;
  return t377;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v378) {
bb379:
  struct std__basic_ostream_char__std__char_traits_char__* __os380;
  struct std__basic_ostream_char__std__char_traits_char__* __retval381;
  __os380 = v378;
  struct std__basic_ostream_char__std__char_traits_char__* t382 = __os380;
  struct std__basic_ostream_char__std__char_traits_char__* r383 = std__ostream__flush(t382);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval381 = r383;
  struct std__basic_ostream_char__std__char_traits_char__* t384 = __retval381;
  return t384;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v385) {
bb386:
  struct std__ctype_char_* __f387;
  struct std__ctype_char_* __retval388;
  __f387 = v385;
    struct std__ctype_char_* t389 = __f387;
    _Bool cast390 = (_Bool)t389;
    _Bool u391 = !cast390;
    if (u391) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t392 = __f387;
  __retval388 = t392;
  struct std__ctype_char_* t393 = __retval388;
  return t393;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v394, char v395) {
bb396:
  struct std__ctype_char_* this397;
  char __c398;
  char __retval399;
  this397 = v394;
  __c398 = v395;
  struct std__ctype_char_* t400 = this397;
    char t401 = t400->_M_widen_ok;
    _Bool cast402 = (_Bool)t401;
    if (cast402) {
      char t403 = __c398;
      unsigned char cast404 = (unsigned char)t403;
      unsigned long cast405 = (unsigned long)cast404;
      char t406 = t400->_M_widen[cast405];
      __retval399 = t406;
      char t407 = __retval399;
      return t407;
    }
  std__ctype_char____M_widen_init___const(t400);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t408 = __c398;
  void** v409 = (void**)t400;
  void* v410 = *((void**)v409);
  char vcall413 = (char)__VERIFIER_virtual_call_char_char(t400, 6, t408);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval399 = vcall413;
  char t414 = __retval399;
  return t414;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v415, char v416) {
bb417:
  struct std__basic_ios_char__std__char_traits_char__* this418;
  char __c419;
  char __retval420;
  this418 = v415;
  __c419 = v416;
  struct std__basic_ios_char__std__char_traits_char__* t421 = this418;
  struct std__ctype_char_* t422 = t421->_M_ctype;
  struct std__ctype_char_* r423 = std__ctype_char__const__std____check_facet_std__ctype_char___(t422);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t424 = __c419;
  char r425 = std__ctype_char___widen_char__const(r423, t424);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval420 = r425;
  char t426 = __retval420;
  return t426;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v427) {
bb428:
  struct std__basic_ostream_char__std__char_traits_char__* __os429;
  struct std__basic_ostream_char__std__char_traits_char__* __retval430;
  __os429 = v427;
  struct std__basic_ostream_char__std__char_traits_char__* t431 = __os429;
  struct std__basic_ostream_char__std__char_traits_char__* t432 = __os429;
  void** v433 = (void**)t432;
  void* v434 = *((void**)v433);
  unsigned char* cast435 = (unsigned char*)v434;
  long c436 = -24;
  unsigned char* ptr437 = &(cast435)[c436];
  long* cast438 = (long*)ptr437;
  long t439 = *cast438;
  unsigned char* cast440 = (unsigned char*)t432;
  unsigned char* ptr441 = &(cast440)[t439];
  struct std__basic_ostream_char__std__char_traits_char__* cast442 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr441;
  struct std__basic_ios_char__std__char_traits_char__* cast443 = (struct std__basic_ios_char__std__char_traits_char__*)cast442;
  char c444 = 10;
  char r445 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast443, c444);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r446 = std__ostream__put(t431, r445);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r447 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r446);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval430 = r447;
  struct std__basic_ostream_char__std__char_traits_char__* t448 = __retval430;
  return t448;
}

// function: _Z11enterChoicev
int enterChoice() {
bb449:
  int __retval450;
  int menuChoice451;
  char* cast452 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r453 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast452);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r454 = std__ostream__operator___std__ostream_____(r453, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  char* cast455 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r456 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r454, cast455);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r457 = std__ostream__operator___std__ostream_____(r456, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  char* cast458 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r459 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r457, cast458);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r460 = std__ostream__operator___std__ostream_____(r459, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  char* cast461 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* r462 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r460, cast461);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r463 = std__ostream__operator___std__ostream_____(r462, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  char* cast464 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* r465 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r463, cast464);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r466 = std__ostream__operator___std__ostream_____(r465, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  char* cast467 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* r468 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r466, cast467);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r469 = std__ostream__operator___std__ostream_____(r468, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  char* cast470 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* r471 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r469, cast470);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  struct std__basic_istream_char__std__char_traits_char__* r472 = std__istream__operator___2(&_ZSt3cin, &menuChoice451);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  int t473 = menuChoice451;
  __retval450 = t473;
  int t474 = __retval450;
  return t474;
}

// function: _ZNSoC2Ev
void std__basic_ostream_char__std__char_traits_char_____basic_ostream_2(struct std__basic_ostream_char__std__char_traits_char__* v475, void** v476) {
bb477:
  struct std__basic_ostream_char__std__char_traits_char__* this478;
  void** vtt479;
  this478 = v475;
  vtt479 = v476;
  struct std__basic_ostream_char__std__char_traits_char__* t480 = this478;
  void** t481 = vtt479;
  static void *vtt_slot482 = 0;
  void** vtt483 = (void**)&vtt_slot482;
  void** cast484 = (void**)vtt483;
  void* t485 = *cast484;
  void** v486 = (void**)t480;
  *(void**)(v486) = (void*)t485;
  static void *vtt_slot487 = 0;
  void** vtt488 = (void**)&vtt_slot487;
  void** cast489 = (void**)vtt488;
  void* t490 = *cast489;
  void** v491 = (void**)t480;
  void* v492 = *((void**)v491);
  unsigned char* cast493 = (unsigned char*)v492;
  long c494 = -24;
  unsigned char* ptr495 = &(cast493)[c494];
  long* cast496 = (long*)ptr495;
  long t497 = *cast496;
  unsigned char* cast498 = (unsigned char*)t480;
  unsigned char* ptr499 = &(cast498)[t497];
  struct std__basic_ostream_char__std__char_traits_char__* cast500 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr499;
  void** v501 = (void**)cast500;
  *(void**)(v501) = (void*)t490;
  void** v502 = (void**)t480;
  void* v503 = *((void**)v502);
  unsigned char* cast504 = (unsigned char*)v503;
  long c505 = -24;
  unsigned char* ptr506 = &(cast504)[c505];
  long* cast507 = (long*)ptr506;
  long t508 = *cast507;
  unsigned char* cast509 = (unsigned char*)t480;
  unsigned char* ptr510 = &(cast509)[t508];
  struct std__basic_ostream_char__std__char_traits_char__* cast511 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr510;
  struct std__basic_ios_char__std__char_traits_char__* cast512 = (struct std__basic_ios_char__std__char_traits_char__*)cast511;
  struct std__basic_streambuf_char__std__char_traits_char__* c513 = ((void*)0);
  std__basic_ios_char__std__char_traits_char_____init(cast512, c513);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode
void std__basic_ofstream_char__std__char_traits_char_____open(struct std__basic_ofstream_char__std__char_traits_char__* v514, char* v515, int v516) {
bb517:
  struct std__basic_ofstream_char__std__char_traits_char__* this518;
  char* __s519;
  int __mode520;
  this518 = v514;
  __s519 = v515;
  __mode520 = v516;
  struct std__basic_ofstream_char__std__char_traits_char__* t521 = this518;
    char* t522 = __s519;
    int t523 = __mode520;
    int t524 = _ZNSt8ios_base3outE_const;
    int r525 = std__operator__6(t523, t524);
    struct std__basic_filebuf_char__std__char_traits_char__* r526 = std__basic_filebuf_char__std__char_traits_char_____open(&t521->_M_filebuf, t522, r525);
    if (__cir_exc_active) {
      return;
    }
    _Bool cast527 = (_Bool)r526;
    _Bool u528 = !cast527;
    if (u528) {
      void** v529 = (void**)t521;
      void* v530 = *((void**)v529);
      unsigned char* cast531 = (unsigned char*)v530;
      long c532 = -24;
      unsigned char* ptr533 = &(cast531)[c532];
      long* cast534 = (long*)ptr533;
      long t535 = *cast534;
      unsigned char* cast536 = (unsigned char*)t521;
      unsigned char* ptr537 = &(cast536)[t535];
      struct std__basic_ofstream_char__std__char_traits_char__* cast538 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr537;
      struct std__basic_ios_char__std__char_traits_char__* cast539 = (struct std__basic_ios_char__std__char_traits_char__*)cast538;
      int t540 = _ZNSt8ios_base7failbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast539, t540);
      if (__cir_exc_active) {
        return;
      }
    } else {
      void** v541 = (void**)t521;
      void* v542 = *((void**)v541);
      unsigned char* cast543 = (unsigned char*)v542;
      long c544 = -24;
      unsigned char* ptr545 = &(cast543)[c544];
      long* cast546 = (long*)ptr545;
      long t547 = *cast546;
      unsigned char* cast548 = (unsigned char*)t521;
      unsigned char* ptr549 = &(cast548)[t547];
      struct std__basic_ofstream_char__std__char_traits_char__* cast550 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr549;
      struct std__basic_ios_char__std__char_traits_char__* cast551 = (struct std__basic_ios_char__std__char_traits_char__*)cast550;
      int t552 = _ZNSt8ios_base7goodbitE_const;
      std__basic_ios_char__std__char_traits_char_____clear(cast551, t552);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode
void std__basic_ofstream_char__std__char_traits_char_____basic_ofstream(struct std__basic_ofstream_char__std__char_traits_char__* v553, char* v554, int v555) {
bb556:
  struct std__basic_ofstream_char__std__char_traits_char__* this557;
  char* __s558;
  int __mode559;
  this557 = v553;
  __s558 = v554;
  __mode559 = v555;
  struct std__basic_ofstream_char__std__char_traits_char__* t560 = this557;
  struct std__basic_ios_char__std__char_traits_char__* base561 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t560 + 248);
  std__basic_ios_char__std__char_traits_char_____basic_ios(base561);
  if (__cir_exc_active) {
    return;
  }
    struct std__basic_ostream_char__std__char_traits_char__* base562 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t560 + 0);
    static void *vtt_slot563 = 0;
    void** vtt564 = (void**)&vtt_slot563;
    std__basic_ostream_char__std__char_traits_char_____basic_ostream_2(base562, vtt564);
    if (__cir_exc_active) {
      {
        struct std__basic_ios_char__std__char_traits_char__* base565 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t560 + 248);
        std__basic_ios_char__std__char_traits_char______basic_ios(base565);
      }
      return;
    }
      void* v566 = (void*)&_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[3];
      void** v567 = (void**)t560;
      *(void**)(v567) = (void*)v566;
      void* v568 = (void*)&_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[3];
      struct std__basic_ios_char__std__char_traits_char__* base569 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t560 + 248);
      void** v570 = (void**)base569;
      *(void**)(v570) = (void*)v568;
      std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(&t560->_M_filebuf);
      if (__cir_exc_active) {
        {
          struct std__basic_ostream_char__std__char_traits_char__* base571 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t560 + 0);
          static void *vtt_slot572 = 0;
          void** vtt573 = (void**)&vtt_slot572;
          std__basic_ostream_char__std__char_traits_char______basic_ostream(base571, vtt573);
        }
        {
          struct std__basic_ios_char__std__char_traits_char__* base574 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t560 + 248);
          std__basic_ios_char__std__char_traits_char______basic_ios(base574);
        }
        return;
      }
        void** v575 = (void**)t560;
        void* v576 = *((void**)v575);
        unsigned char* cast577 = (unsigned char*)v576;
        long c578 = -24;
        unsigned char* ptr579 = &(cast577)[c578];
        long* cast580 = (long*)ptr579;
        long t581 = *cast580;
        unsigned char* cast582 = (unsigned char*)t560;
        unsigned char* ptr583 = &(cast582)[t581];
        struct std__basic_ofstream_char__std__char_traits_char__* cast584 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr583;
        struct std__basic_ios_char__std__char_traits_char__* cast585 = (struct std__basic_ios_char__std__char_traits_char__*)cast584;
        struct std__basic_streambuf_char__std__char_traits_char__* base586 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)&(t560->_M_filebuf) + 0);
        std__basic_ios_char__std__char_traits_char_____init(cast585, base586);
        if (__cir_exc_active) {
          {
            std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t560->_M_filebuf);
          }
          {
            struct std__basic_ostream_char__std__char_traits_char__* base587 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t560 + 0);
            static void *vtt_slot588 = 0;
            void** vtt589 = (void**)&vtt_slot588;
            std__basic_ostream_char__std__char_traits_char______basic_ostream(base587, vtt589);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base590 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t560 + 248);
            std__basic_ios_char__std__char_traits_char______basic_ios(base590);
          }
          return;
        }
        char* t591 = __s558;
        int t592 = __mode559;
        std__basic_ofstream_char__std__char_traits_char_____open(t560, t591, t592);
        if (__cir_exc_active) {
          {
            std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t560->_M_filebuf);
          }
          {
            struct std__basic_ostream_char__std__char_traits_char__* base593 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t560 + 0);
            static void *vtt_slot594 = 0;
            void** vtt595 = (void**)&vtt_slot594;
            std__basic_ostream_char__std__char_traits_char______basic_ostream(base593, vtt595);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base596 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t560 + 248);
            std__basic_ios_char__std__char_traits_char______basic_ios(base596);
          }
          return;
        }
  return;
}

// function: _ZNSt8ios_base5widthEl
long std__ios_base__width(struct std__ios_base* v597, long v598) {
bb599:
  struct std__ios_base* this600;
  long __wide601;
  long __retval602;
  long __old603;
  this600 = v597;
  __wide601 = v598;
  struct std__ios_base* t604 = this600;
  long t605 = t604->_M_width;
  __old603 = t605;
  long t606 = __wide601;
  t604->_M_width = t606;
  long t607 = __old603;
  __retval602 = t607;
  long t608 = __retval602;
  return t608;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v609, struct std___Setw v610) {
bb611:
  struct std__basic_ostream_char__std__char_traits_char__* __os612;
  struct std___Setw __f613;
  struct std__basic_ostream_char__std__char_traits_char__* __retval614;
  __os612 = v609;
  __f613 = v610;
  struct std__basic_ostream_char__std__char_traits_char__* t615 = __os612;
  void** v616 = (void**)t615;
  void* v617 = *((void**)v616);
  unsigned char* cast618 = (unsigned char*)v617;
  long c619 = -24;
  unsigned char* ptr620 = &(cast618)[c619];
  long* cast621 = (long*)ptr620;
  long t622 = *cast621;
  unsigned char* cast623 = (unsigned char*)t615;
  unsigned char* ptr624 = &(cast623)[t622];
  struct std__basic_ostream_char__std__char_traits_char__* cast625 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr624;
  struct std__ios_base* cast626 = (struct std__ios_base*)cast625;
  int t627 = __f613._M_n;
  long cast628 = (long)t627;
  long r629 = std__ios_base__width(cast626, cast628);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* t630 = __os612;
  __retval614 = t630;
  struct std__basic_ostream_char__std__char_traits_char__* t631 = __retval614;
  return t631;
}

// function: _ZNSolsEPFRSt8ios_baseS0_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* v632, void* v633) {
bb634:
  struct std__basic_ostream_char__std__char_traits_char__* this635;
  void* __pf636;
  struct std__basic_ostream_char__std__char_traits_char__* __retval637;
  this635 = v632;
  __pf636 = v633;
  struct std__basic_ostream_char__std__char_traits_char__* t638 = this635;
  void* t639 = __pf636;
  void** v640 = (void**)t638;
  void* v641 = *((void**)v640);
  unsigned char* cast642 = (unsigned char*)v641;
  long c643 = -24;
  unsigned char* ptr644 = &(cast642)[c643];
  long* cast645 = (long*)ptr644;
  long t646 = *cast645;
  unsigned char* cast647 = (unsigned char*)t638;
  unsigned char* ptr648 = &(cast647)[t646];
  struct std__basic_ostream_char__std__char_traits_char__* cast649 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr648;
  struct std__ios_base* cast650 = (struct std__ios_base*)cast649;
  struct std__ios_base* r651 = ((struct std__ios_base* (*)(struct std__ios_base*))t639)(cast650);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval637 = t638;
  struct std__basic_ostream_char__std__char_traits_char__* t652 = __retval637;
  return t652;
}

// function: _ZStaNRSt13_Ios_FmtflagsS_
int* std__operator__(int* v653, int v654) {
bb655:
  int* __a656;
  int __b657;
  int* __retval658;
  __a656 = v653;
  __b657 = v654;
  int* t659 = __a656;
  int t660 = *t659;
  int t661 = __b657;
  int r662 = std__operator__2(t660, t661);
  int* t663 = __a656;
  *t663 = r662;
  __retval658 = t663;
  int* t664 = __retval658;
  return t664;
}

// function: _ZStcoSt13_Ios_Fmtflags
int std__operator__3(int v665) {
bb666:
  int __a667;
  int __retval668;
  __a667 = v665;
  int t669 = __a667;
  int u670 = ~t669;
  __retval668 = u670;
  int t671 = __retval668;
  return t671;
}

// function: _ZStorSt13_Ios_FmtflagsS_
int std__operator__5(int v672, int v673) {
bb674:
  int __a675;
  int __b676;
  int __retval677;
  __a675 = v672;
  __b676 = v673;
  int t678 = __a675;
  int t679 = __b676;
  int b680 = t678 | t679;
  __retval677 = b680;
  int t681 = __retval677;
  return t681;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* std__operator___2(int* v682, int v683) {
bb684:
  int* __a685;
  int __b686;
  int* __retval687;
  __a685 = v682;
  __b686 = v683;
  int* t688 = __a685;
  int t689 = *t688;
  int t690 = __b686;
  int r691 = std__operator__5(t689, t690);
  int* t692 = __a685;
  *t692 = r691;
  __retval687 = t692;
  int* t693 = __retval687;
  return t693;
}

// function: _ZStanSt13_Ios_FmtflagsS_
int std__operator__2(int v694, int v695) {
bb696:
  int __a697;
  int __b698;
  int __retval699;
  __a697 = v694;
  __b698 = v695;
  int t700 = __a697;
  int t701 = __b698;
  int b702 = t700 & t701;
  __retval699 = b702;
  int t703 = __retval699;
  return t703;
}

// function: _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
int std__ios_base__setf_2(struct std__ios_base* v704, int v705, int v706) {
bb707:
  struct std__ios_base* this708;
  int __fmtfl709;
  int __mask710;
  int __retval711;
  int __old712;
  this708 = v704;
  __fmtfl709 = v705;
  __mask710 = v706;
  struct std__ios_base* t713 = this708;
  int t714 = t713->_M_flags;
  __old712 = t714;
  int t715 = __mask710;
  int r716 = std__operator__3(t715);
  int* r717 = std__operator__(&t713->_M_flags, r716);
  int t718 = __fmtfl709;
  int t719 = __mask710;
  int r720 = std__operator__2(t718, t719);
  int* r721 = std__operator___2(&t713->_M_flags, r720);
  int t722 = __old712;
  __retval711 = t722;
  int t723 = __retval711;
  return t723;
}

// function: _ZSt4leftRSt8ios_base
struct std__ios_base* std__left(struct std__ios_base* v724) {
bb725:
  struct std__ios_base* __base726;
  struct std__ios_base* __retval727;
  __base726 = v724;
  struct std__ios_base* t728 = __base726;
  int t729 = _ZNSt8ios_base4leftE_const;
  int t730 = _ZNSt8ios_base11adjustfieldE_const;
  int r731 = std__ios_base__setf_2(t728, t729, t730);
  if (__cir_exc_active) {
    struct std__ios_base* __cir_eh_ret = (struct std__ios_base*)0;
    return __cir_eh_ret;
  }
  struct std__ios_base* t732 = __base726;
  __retval727 = t732;
  struct std__ios_base* t733 = __retval727;
  return t733;
}

// function: _ZSt4setwi
struct std___Setw std__setw(int v734) {
bb735:
  int __n736;
  struct std___Setw __retval737;
  __n736 = v734;
  int t738 = __n736;
  __retval737._M_n = t738;
  struct std___Setw t739 = __retval737;
  return t739;
}

// function: _ZSt5rightRSt8ios_base
struct std__ios_base* std__right(struct std__ios_base* v740) {
bb741:
  struct std__ios_base* __base742;
  struct std__ios_base* __retval743;
  __base742 = v740;
  struct std__ios_base* t744 = __base742;
  int t745 = _ZNSt8ios_base5rightE_const;
  int t746 = _ZNSt8ios_base11adjustfieldE_const;
  int r747 = std__ios_base__setf_2(t744, t745, t746);
  if (__cir_exc_active) {
    struct std__ios_base* __cir_eh_ret = (struct std__ios_base*)0;
    return __cir_eh_ret;
  }
  struct std__ios_base* t748 = __base742;
  __retval743 = t748;
  struct std__ios_base* t749 = __retval743;
  return t749;
}

// function: _ZNSt4fposI11__mbstate_tEC2El
void std__fpos___mbstate_t___fpos(struct std__fpos___mbstate_t_* v750, long v751) {
bb752:
  struct std__fpos___mbstate_t_* this753;
  long __off754;
  this753 = v750;
  __off754 = v751;
  struct std__fpos___mbstate_t_* t755 = this753;
  long t756 = __off754;
  t755->_M_off = t756;
  struct __mbstate_t c757 = {0};
  t755->_M_state = c757;
  return;
}

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v758) {
bb759:
  struct std__allocator_char_* this760;
  this760 = v758;
  struct std__allocator_char_* t761 = this760;
  struct std____new_allocator_char_* base762 = (struct std____new_allocator_char_*)((char *)t761 + 0);
  std____new_allocator_char_____new_allocator_2(base762);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEPKcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v763, char* v764, struct std__allocator_char_* v765) {
bb766:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this767;
  char* __s768;
  struct std__allocator_char_* __a769;
  char* __end770;
  struct std__forward_iterator_tag agg_tmp0771;
  this767 = v763;
  __s768 = v764;
  __a769 = v765;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t772 = this767;
  char* r773 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t772);
  if (__cir_exc_active) {
    return;
  }
  struct std__allocator_char_* t774 = __a769;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t772->_M_dataplus, r773, t774);
  if (__cir_exc_active) {
    return;
  }
      char* t775 = __s768;
      char* c776 = ((void*)0);
      _Bool c777 = ((t775 == c776)) ? 1 : 0;
      if (c777) {
        char* cast778 = (char*)&(_str_28);
        std____throw_logic_error(cast778);
        if (__cir_exc_active) {
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t772->_M_dataplus);
          }
          return;
        }
      }
    char* t779 = __s768;
    char* t780 = __s768;
    unsigned long r781 = std__char_traits_char___length(t780);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t772->_M_dataplus);
      }
      return;
    }
    char* ptr782 = &(t779)[r781];
    __end770 = ptr782;
    char* t783 = __s768;
    char* t784 = __end770;
    struct std__forward_iterator_tag t785 = agg_tmp0771;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t772, t783, t784, t785);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t772->_M_dataplus);
      }
      return;
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v786) {
bb787:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this788;
  this788 = v786;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t789 = this788;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t789);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t789->_M_dataplus);
      }
      return;
    }
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t789->_M_dataplus);
  }
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v790) {
bb791:
  struct std__allocator_char_* this792;
  this792 = v790;
  struct std__allocator_char_* t793 = this792;
  return;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE3eofEv
_Bool std__basic_ios_char__std__char_traits_char_____eof___const(struct std__basic_ios_char__std__char_traits_char__* v794) {
bb795:
  struct std__basic_ios_char__std__char_traits_char__* this796;
  _Bool __retval797;
  this796 = v794;
  struct std__basic_ios_char__std__char_traits_char__* t798 = this796;
  int r799 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t798);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  int t800 = _ZNSt8ios_base6eofbitE_const;
  int r801 = std__operator_(r799, t800);
  int c802 = 0;
  _Bool c803 = ((r801 != c802)) ? 1 : 0;
  __retval797 = c803;
  _Bool t804 = __retval797;
  return t804;
}

// function: _ZNSt8ios_base9precisionEl
long std__ios_base__precision(struct std__ios_base* v805, long v806) {
bb807:
  struct std__ios_base* this808;
  long __prec809;
  long __retval810;
  long __old811;
  this808 = v805;
  __prec809 = v806;
  struct std__ios_base* t812 = this808;
  long t813 = t812->_M_precision;
  __old811 = t813;
  long t814 = __prec809;
  t812->_M_precision = t814;
  long t815 = __old811;
  __retval810 = t815;
  long t816 = __retval810;
  return t816;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v817, struct std___Setprecision v818) {
bb819:
  struct std__basic_ostream_char__std__char_traits_char__* __os820;
  struct std___Setprecision __f821;
  struct std__basic_ostream_char__std__char_traits_char__* __retval822;
  __os820 = v817;
  __f821 = v818;
  struct std__basic_ostream_char__std__char_traits_char__* t823 = __os820;
  void** v824 = (void**)t823;
  void* v825 = *((void**)v824);
  unsigned char* cast826 = (unsigned char*)v825;
  long c827 = -24;
  unsigned char* ptr828 = &(cast826)[c827];
  long* cast829 = (long*)ptr828;
  long t830 = *cast829;
  unsigned char* cast831 = (unsigned char*)t823;
  unsigned char* ptr832 = &(cast831)[t830];
  struct std__basic_ostream_char__std__char_traits_char__* cast833 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr832;
  struct std__ios_base* cast834 = (struct std__ios_base*)cast833;
  int t835 = __f821._M_n;
  long cast836 = (long)t835;
  long r837 = std__ios_base__precision(cast834, cast836);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* t838 = __os820;
  __retval822 = t838;
  struct std__basic_ostream_char__std__char_traits_char__* t839 = __retval822;
  return t839;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v840) {
bb841:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this842;
  char* __retval843;
  this842 = v840;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t844 = this842;
  char* r845 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t844);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __retval843 = r845;
  char* t846 = __retval843;
  return t846;
}

// function: _ZSt12setprecisioni
struct std___Setprecision std__setprecision(int v847) {
bb848:
  int __n849;
  struct std___Setprecision __retval850;
  __n849 = v847;
  int t851 = __n849;
  __retval850._M_n = t851;
  struct std___Setprecision t852 = __retval850;
  return t852;
}

// function: _ZSt5fixedRSt8ios_base
struct std__ios_base* std__fixed(struct std__ios_base* v853) {
bb854:
  struct std__ios_base* __base855;
  struct std__ios_base* __retval856;
  __base855 = v853;
  struct std__ios_base* t857 = __base855;
  int t858 = _ZNSt8ios_base5fixedE_const;
  int t859 = _ZNSt8ios_base10floatfieldE_const;
  int r860 = std__ios_base__setf_2(t857, t858, t859);
  if (__cir_exc_active) {
    struct std__ios_base* __cir_eh_ret = (struct std__ios_base*)0;
    return __cir_eh_ret;
  }
  struct std__ios_base* t861 = __base855;
  __retval856 = t861;
  struct std__ios_base* t862 = __retval856;
  return t862;
}

// function: _ZNSt8ios_base4setfESt13_Ios_Fmtflags
int std__ios_base__setf(struct std__ios_base* v863, int v864) {
bb865:
  struct std__ios_base* this866;
  int __fmtfl867;
  int __retval868;
  int __old869;
  this866 = v863;
  __fmtfl867 = v864;
  struct std__ios_base* t870 = this866;
  int t871 = t870->_M_flags;
  __old869 = t871;
  int t872 = __fmtfl867;
  int* r873 = std__operator___2(&t870->_M_flags, t872);
  int t874 = __old869;
  __retval868 = t874;
  int t875 = __retval868;
  return t875;
}

// function: _ZSt9showpointRSt8ios_base
struct std__ios_base* std__showpoint(struct std__ios_base* v876) {
bb877:
  struct std__ios_base* __base878;
  struct std__ios_base* __retval879;
  __base878 = v876;
  struct std__ios_base* t880 = __base878;
  int t881 = _ZNSt8ios_base9showpointE_const;
  int r882 = std__ios_base__setf(t880, t881);
  if (__cir_exc_active) {
    struct std__ios_base* __cir_eh_ret = (struct std__ios_base*)0;
    return __cir_eh_ret;
  }
  struct std__ios_base* t883 = __base878;
  __retval879 = t883;
  struct std__ios_base* t884 = __retval879;
  return t884;
}

// function: _ZNSolsEd
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v885, double v886) {
bb887:
  struct std__basic_ostream_char__std__char_traits_char__* this888;
  double __f889;
  struct std__basic_ostream_char__std__char_traits_char__* __retval890;
  this888 = v885;
  __f889 = v886;
  struct std__basic_ostream_char__std__char_traits_char__* t891 = this888;
  double t892 = __f889;
  struct std__basic_ostream_char__std__char_traits_char__* r893 = std__ostream__std__ostream___M_insert_double_(t891, t892);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval890 = r893;
  struct std__basic_ostream_char__std__char_traits_char__* t894 = __retval890;
  return t894;
}

// function: _Z10outputLineRSoRK10ClientData
void outputLine(struct std__basic_ostream_char__std__char_traits_char__* v895, struct ClientData* v896) {
bb897:
  struct std__basic_ostream_char__std__char_traits_char__* output898;
  struct ClientData* record899;
  struct std___Setw agg_tmp0900;
  struct std___Setw agg_tmp1901;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp0902;
  struct std___Setw agg_tmp2903;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp1904;
  struct std___Setw agg_tmp3905;
  struct std___Setprecision agg_tmp4906;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup907;
  output898 = v895;
  record899 = v896;
  struct std__basic_ostream_char__std__char_traits_char__* t908 = output898;
  struct std__basic_ostream_char__std__char_traits_char__* r909 = std__ostream__operator___std__ios_base_____(t908, &std__left);
  if (__cir_exc_active) {
    return;
  }
  int c910 = 10;
  struct std___Setw r911 = std__setw(c910);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp0900 = r911;
  struct std___Setw t912 = agg_tmp0900;
  struct std__basic_ostream_char__std__char_traits_char__* r913 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(r909, t912);
  if (__cir_exc_active) {
    return;
  }
  struct ClientData* t914 = record899;
  int r915 = ClientData__getAccountNumber___const(t914);
  if (__cir_exc_active) {
    return;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r916 = std__ostream__operator___2(r913, r915);
  if (__cir_exc_active) {
    return;
  }
  int c917 = 16;
  struct std___Setw r918 = std__setw(c917);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp1901 = r918;
  struct std___Setw t919 = agg_tmp1901;
  struct std__basic_ostream_char__std__char_traits_char__* r920 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(r916, t919);
  if (__cir_exc_active) {
    return;
  }
  struct ClientData* t921 = record899;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r922 = ClientData__getLastName_abi_cxx11____const(t921);
  if (__cir_exc_active) {
    return;
  }
  ref_tmp0902 = r922;
    char* r923 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data(&ref_tmp0902);
    struct std__basic_ostream_char__std__char_traits_char__* r924 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r920, r923);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0902);
      }
      return;
    }
    int c925 = 11;
    struct std___Setw r926 = std__setw(c925);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0902);
      }
      return;
    }
    agg_tmp2903 = r926;
    struct std___Setw t927 = agg_tmp2903;
    struct std__basic_ostream_char__std__char_traits_char__* r928 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(r924, t927);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0902);
      }
      return;
    }
    struct ClientData* t929 = record899;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r930 = ClientData__getFirstName_abi_cxx11____const(t929);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0902);
      }
      return;
    }
    ref_tmp1904 = r930;
      char* r931 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data(&ref_tmp1904);
      struct std__basic_ostream_char__std__char_traits_char__* r932 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r928, r931);
      if (__cir_exc_active) {
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp1904);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0902);
        }
        return;
      }
      int c933 = 10;
      struct std___Setw r934 = std__setw(c933);
      if (__cir_exc_active) {
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp1904);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0902);
        }
        return;
      }
      agg_tmp3905 = r934;
      struct std___Setw t935 = agg_tmp3905;
      struct std__basic_ostream_char__std__char_traits_char__* r936 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(r932, t935);
      if (__cir_exc_active) {
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp1904);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0902);
        }
        return;
      }
      int c937 = 2;
      struct std___Setprecision r938 = std__setprecision(c937);
      if (__cir_exc_active) {
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp1904);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0902);
        }
        return;
      }
      agg_tmp4906 = r938;
      struct std___Setprecision t939 = agg_tmp4906;
      struct std__basic_ostream_char__std__char_traits_char__* r940 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r936, t939);
      if (__cir_exc_active) {
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp1904);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0902);
        }
        return;
      }
      struct std__basic_ostream_char__std__char_traits_char__* r941 = std__ostream__operator___std__ios_base_____(r940, &std__right);
      if (__cir_exc_active) {
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp1904);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0902);
        }
        return;
      }
      struct std__basic_ostream_char__std__char_traits_char__* r942 = std__ostream__operator___std__ios_base_____(r941, &std__fixed);
      if (__cir_exc_active) {
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp1904);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0902);
        }
        return;
      }
      struct std__basic_ostream_char__std__char_traits_char__* r943 = std__ostream__operator___std__ios_base_____(r942, &std__showpoint);
      if (__cir_exc_active) {
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp1904);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0902);
        }
        return;
      }
      struct ClientData* t944 = record899;
      double r945 = ClientData__getBalance___const(t944);
      if (__cir_exc_active) {
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp1904);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0902);
        }
        return;
      }
      struct std__basic_ostream_char__std__char_traits_char__* r946 = std__ostream__operator__(r943, r945);
      if (__cir_exc_active) {
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp1904);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0902);
        }
        return;
      }
      struct std__basic_ostream_char__std__char_traits_char__* r947 = std__ostream__operator___std__ostream_____(r946, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      if (__cir_exc_active) {
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp1904);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0902);
        }
        return;
      }
      tmp_exprcleanup907 = r947;
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp1904);
    }
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0902);
  }
  struct std__basic_ostream_char__std__char_traits_char__* t948 = tmp_exprcleanup907;
  return;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEED2Ev
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream_2(struct std__basic_ofstream_char__std__char_traits_char__* v949, void** v950) {
bb951:
  struct std__basic_ofstream_char__std__char_traits_char__* this952;
  void** vtt953;
  this952 = v949;
  vtt953 = v950;
  struct std__basic_ofstream_char__std__char_traits_char__* t954 = this952;
  void** t955 = vtt953;
    {
      std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t954->_M_filebuf);
    }
  {
    struct std__basic_ostream_char__std__char_traits_char__* base956 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t954 + 0);
    static void *vtt_slot957 = 0;
    void** vtt958 = (void**)&vtt_slot957;
    std__basic_ostream_char__std__char_traits_char______basic_ostream(base956, vtt958);
  }
  return;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream(struct std__basic_ofstream_char__std__char_traits_char__* v959) {
bb960:
  struct std__basic_ofstream_char__std__char_traits_char__* this961;
  this961 = v959;
  struct std__basic_ofstream_char__std__char_traits_char__* t962 = this961;
    static void *vtt_slot963 = 0;
    void** vtt964 = (void**)&vtt_slot963;
    std__basic_ofstream_char__std__char_traits_char______basic_ofstream_2(t962, vtt964);
  {
    struct std__basic_ios_char__std__char_traits_char__* base965 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t962 + 248);
    std__basic_ios_char__std__char_traits_char______basic_ios(base965);
  }
  return;
}

// function: _Z11printRecordRSt13basic_fstreamIcSt11char_traitsIcEE
void printRecord(struct std__basic_fstream_char__std__char_traits_char__* v966) {
bb967:
  struct std__basic_fstream_char__std__char_traits_char__* readFromFile968;
  struct std__basic_ofstream_char__std__char_traits_char__ outPrintFile969;
  struct std___Setw agg_tmp0970;
  struct std___Setw agg_tmp1971;
  struct std___Setw agg_tmp2972;
  struct std___Setw agg_tmp3973;
  struct std__fpos___mbstate_t_ agg_tmp4974;
  struct ClientData client975;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp5976;
  struct std__allocator_char_ ref_tmp0977;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp6978;
  struct std__allocator_char_ ref_tmp1979;
  readFromFile968 = v966;
  char* cast980 = (char*)&(_str_10);
  int t981 = _ZNSt8ios_base3outE_const;
  std__basic_ofstream_char__std__char_traits_char_____basic_ofstream(&outPrintFile969, cast980, t981);
  if (__cir_exc_active) {
    return;
  }
      void** v982 = (void**)&(outPrintFile969);
      void* v983 = *((void**)v982);
      unsigned char* cast984 = (unsigned char*)v983;
      long c985 = -24;
      unsigned char* ptr986 = &(cast984)[c985];
      long* cast987 = (long*)ptr986;
      long t988 = *cast987;
      unsigned char* cast989 = (unsigned char*)&(outPrintFile969);
      unsigned char* ptr990 = &(cast989)[t988];
      struct std__basic_ofstream_char__std__char_traits_char__* cast991 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr990;
      struct std__basic_ios_char__std__char_traits_char__* cast992 = (struct std__basic_ios_char__std__char_traits_char__*)cast991;
      _Bool r993 = std__basic_ios_char__std__char_traits_char_____operator____const(cast992);
      if (__cir_exc_active) {
        {
          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outPrintFile969);
        }
        return;
      }
      if (r993) {
        char* cast994 = (char*)&(_str_11);
        struct std__basic_ostream_char__std__char_traits_char__* r995 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cerr, cast994);
        if (__cir_exc_active) {
          {
            std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outPrintFile969);
          }
          return;
        }
        struct std__basic_ostream_char__std__char_traits_char__* r996 = std__ostream__operator___std__ostream_____(r995, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        if (__cir_exc_active) {
          {
            std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outPrintFile969);
          }
          return;
        }
        int c997 = 1;
        exit(c997);
      }
    struct std__basic_ostream_char__std__char_traits_char__* base998 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(outPrintFile969) + 0);
    struct std__basic_ostream_char__std__char_traits_char__* r999 = std__ostream__operator___std__ios_base_____(base998, &std__left);
    if (__cir_exc_active) {
      {
        std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outPrintFile969);
      }
      return;
    }
    int c1000 = 10;
    struct std___Setw r1001 = std__setw(c1000);
    if (__cir_exc_active) {
      {
        std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outPrintFile969);
      }
      return;
    }
    agg_tmp0970 = r1001;
    struct std___Setw t1002 = agg_tmp0970;
    struct std__basic_ostream_char__std__char_traits_char__* r1003 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(r999, t1002);
    if (__cir_exc_active) {
      {
        std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outPrintFile969);
      }
      return;
    }
    char* cast1004 = (char*)&(_str_12);
    struct std__basic_ostream_char__std__char_traits_char__* r1005 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1003, cast1004);
    if (__cir_exc_active) {
      {
        std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outPrintFile969);
      }
      return;
    }
    int c1006 = 16;
    struct std___Setw r1007 = std__setw(c1006);
    if (__cir_exc_active) {
      {
        std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outPrintFile969);
      }
      return;
    }
    agg_tmp1971 = r1007;
    struct std___Setw t1008 = agg_tmp1971;
    struct std__basic_ostream_char__std__char_traits_char__* r1009 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(r1005, t1008);
    if (__cir_exc_active) {
      {
        std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outPrintFile969);
      }
      return;
    }
    char* cast1010 = (char*)&(_str_13);
    struct std__basic_ostream_char__std__char_traits_char__* r1011 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1009, cast1010);
    if (__cir_exc_active) {
      {
        std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outPrintFile969);
      }
      return;
    }
    int c1012 = 11;
    struct std___Setw r1013 = std__setw(c1012);
    if (__cir_exc_active) {
      {
        std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outPrintFile969);
      }
      return;
    }
    agg_tmp2972 = r1013;
    struct std___Setw t1014 = agg_tmp2972;
    struct std__basic_ostream_char__std__char_traits_char__* r1015 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(r1011, t1014);
    if (__cir_exc_active) {
      {
        std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outPrintFile969);
      }
      return;
    }
    char* cast1016 = (char*)&(_str_14);
    struct std__basic_ostream_char__std__char_traits_char__* r1017 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1015, cast1016);
    if (__cir_exc_active) {
      {
        std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outPrintFile969);
      }
      return;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1018 = std__ostream__operator___std__ios_base_____(r1017, &std__right);
    if (__cir_exc_active) {
      {
        std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outPrintFile969);
      }
      return;
    }
    int c1019 = 10;
    struct std___Setw r1020 = std__setw(c1019);
    if (__cir_exc_active) {
      {
        std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outPrintFile969);
      }
      return;
    }
    agg_tmp3973 = r1020;
    struct std___Setw t1021 = agg_tmp3973;
    struct std__basic_ostream_char__std__char_traits_char__* r1022 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char____2(r1018, t1021);
    if (__cir_exc_active) {
      {
        std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outPrintFile969);
      }
      return;
    }
    char* cast1023 = (char*)&(_str_15);
    struct std__basic_ostream_char__std__char_traits_char__* r1024 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1022, cast1023);
    if (__cir_exc_active) {
      {
        std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outPrintFile969);
      }
      return;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1025 = std__ostream__operator___std__ostream_____(r1024, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outPrintFile969);
      }
      return;
    }
    struct std__basic_fstream_char__std__char_traits_char__* t1026 = readFromFile968;
    struct std__basic_istream_char__std__char_traits_char__* base1027 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t1026 + 0);
    long c1028 = 0;
    std__fpos___mbstate_t___fpos(&agg_tmp4974, c1028);
    if (__cir_exc_active) {
      {
        std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outPrintFile969);
      }
      return;
    }
    struct std__fpos___mbstate_t_ t1029 = agg_tmp4974;
    struct std__basic_istream_char__std__char_traits_char__* r1030 = std__istream__seekg(base1027, t1029);
    if (__cir_exc_active) {
      {
        std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outPrintFile969);
      }
      return;
    }
    int c1031 = 0;
    char* cast1032 = (char*)&(_str_16);
    std__allocator_char___allocator_2(&ref_tmp0977);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&agg_tmp5976, cast1032, &ref_tmp0977);
      if (__cir_exc_active) {
        {
          std__allocator_char____allocator(&ref_tmp0977);
        }
        {
          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outPrintFile969);
        }
        return;
      }
        char* cast1033 = (char*)&(_str_16);
        std__allocator_char___allocator_2(&ref_tmp1979);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&agg_tmp6978, cast1033, &ref_tmp1979);
          if (__cir_exc_active) {
            {
              std__allocator_char____allocator(&ref_tmp1979);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp5976);
            }
            {
              std__allocator_char____allocator(&ref_tmp0977);
            }
            {
              std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outPrintFile969);
            }
            return;
          }
            double c1034 = 0x0p0;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1035 = agg_tmp5976;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1036 = agg_tmp6978;
            ClientData__ClientData(&client975, c1031, t1035, t1036, c1034);
            if (__cir_exc_active) {
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp6978);
              }
              {
                std__allocator_char____allocator(&ref_tmp1979);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp5976);
              }
              {
                std__allocator_char____allocator(&ref_tmp0977);
              }
              {
                std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outPrintFile969);
              }
              return;
            }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp6978);
          }
        {
          std__allocator_char____allocator(&ref_tmp1979);
        }
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp5976);
      }
    {
      std__allocator_char____allocator(&ref_tmp0977);
    }
    struct std__basic_fstream_char__std__char_traits_char__* t1037 = readFromFile968;
    struct std__basic_istream_char__std__char_traits_char__* base1038 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t1037 + 0);
    char* cast1039 = (char*)&(client975);
    long c1040 = 40;
    struct std__basic_istream_char__std__char_traits_char__* r1041 = std__istream__read(base1038, cast1039, c1040);
    if (__cir_exc_active) {
      {
        std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outPrintFile969);
      }
      return;
    }
      while (1) {
        struct std__basic_fstream_char__std__char_traits_char__* t1042 = readFromFile968;
        void** v1043 = (void**)t1042;
        void* v1044 = *((void**)v1043);
        unsigned char* cast1045 = (unsigned char*)v1044;
        long c1046 = -24;
        unsigned char* ptr1047 = &(cast1045)[c1046];
        long* cast1048 = (long*)ptr1047;
        long t1049 = *cast1048;
        unsigned char* cast1050 = (unsigned char*)t1042;
        unsigned char* ptr1051 = &(cast1050)[t1049];
        struct std__basic_fstream_char__std__char_traits_char__* cast1052 = (struct std__basic_fstream_char__std__char_traits_char__*)ptr1051;
        struct std__basic_ios_char__std__char_traits_char__* cast1053 = (struct std__basic_ios_char__std__char_traits_char__*)cast1052;
        _Bool r1054 = std__basic_ios_char__std__char_traits_char_____eof___const(cast1053);
        if (__cir_exc_active) {
          {
            std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outPrintFile969);
          }
          return;
        }
        _Bool u1055 = !r1054;
        if (!u1055) break;
            int r1056 = ClientData__getAccountNumber___const(&client975);
            if (__cir_exc_active) {
              {
                std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outPrintFile969);
              }
              return;
            }
            int c1057 = 0;
            _Bool c1058 = ((r1056 != c1057)) ? 1 : 0;
            if (c1058) {
              struct std__basic_ostream_char__std__char_traits_char__* base1059 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(outPrintFile969) + 0);
              outputLine(base1059, &client975);
              if (__cir_exc_active) {
                {
                  std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outPrintFile969);
                }
                return;
              }
            }
          struct std__basic_fstream_char__std__char_traits_char__* t1060 = readFromFile968;
          struct std__basic_istream_char__std__char_traits_char__* base1061 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t1060 + 0);
          char* cast1062 = (char*)&(client975);
          long c1063 = 40;
          struct std__basic_istream_char__std__char_traits_char__* r1064 = std__istream__read(base1061, cast1062, c1063);
          if (__cir_exc_active) {
            {
              std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outPrintFile969);
            }
            return;
          }
      }
  {
    std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outPrintFile969);
  }
  return;
}

// function: _Z10getAccountPKc
int getAccount(char* v1065) {
bb1066:
  char* prompt1067;
  int __retval1068;
  int accountNumber1069;
  prompt1067 = v1065;
    do {
        char* t1070 = prompt1067;
        struct std__basic_ostream_char__std__char_traits_char__* r1071 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, t1070);
        if (__cir_exc_active) {
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        char* cast1072 = (char*)&(_str_27);
        struct std__basic_ostream_char__std__char_traits_char__* r1073 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1071, cast1072);
        if (__cir_exc_active) {
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        struct std__basic_istream_char__std__char_traits_char__* r1074 = std__istream__operator___2(&_ZSt3cin, &accountNumber1069);
        if (__cir_exc_active) {
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      int t1075 = accountNumber1069;
      int c1076 = 1;
      _Bool c1077 = ((t1075 < c1076)) ? 1 : 0;
      _Bool ternary1078;
      if (c1077) {
        _Bool c1079 = 1;
        ternary1078 = (_Bool)c1079;
      } else {
        int t1080 = accountNumber1069;
        int c1081 = 100;
        _Bool c1082 = ((t1080 > c1081)) ? 1 : 0;
        ternary1078 = (_Bool)c1082;
      }
      if (!ternary1078) break;
    } while (1);
  int t1083 = accountNumber1069;
  __retval1068 = t1083;
  int t1084 = __retval1068;
  return t1084;
}

// function: _ZNSirsERd
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* v1085, double* v1086) {
bb1087:
  struct std__basic_istream_char__std__char_traits_char__* this1088;
  double* __f1089;
  struct std__basic_istream_char__std__char_traits_char__* __retval1090;
  this1088 = v1085;
  __f1089 = v1086;
  struct std__basic_istream_char__std__char_traits_char__* t1091 = this1088;
  double* t1092 = __f1089;
  struct std__basic_istream_char__std__char_traits_char__* r1093 = std__istream__std__istream___M_extract_double_(t1091, t1092);
  if (__cir_exc_active) {
    struct std__basic_istream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_istream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval1090 = r1093;
  struct std__basic_istream_char__std__char_traits_char__* t1094 = __retval1090;
  return t1094;
}

// function: _Z12updateRecordRSt13basic_fstreamIcSt11char_traitsIcEE
void updateRecord(struct std__basic_fstream_char__std__char_traits_char__* v1095) {
bb1096:
  struct std__basic_fstream_char__std__char_traits_char__* updateFile1097;
  int accountNumber1098;
  struct std__fpos___mbstate_t_ agg_tmp01099;
  struct ClientData client1100;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp11101;
  struct std__allocator_char_ ref_tmp01102;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp21103;
  struct std__allocator_char_ ref_tmp11104;
  updateFile1097 = v1095;
  char* cast1105 = (char*)&(_str_17);
  int r1106 = getAccount(cast1105);
  if (__cir_exc_active) {
    return;
  }
  accountNumber1098 = r1106;
  struct std__basic_fstream_char__std__char_traits_char__* t1107 = updateFile1097;
  struct std__basic_istream_char__std__char_traits_char__* base1108 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t1107 + 0);
  int t1109 = accountNumber1098;
  int c1110 = 1;
  int b1111 = t1109 - c1110;
  unsigned long cast1112 = (unsigned long)b1111;
  unsigned long c1113 = 40;
  unsigned long b1114 = cast1112 * c1113;
  long cast1115 = (long)b1114;
  std__fpos___mbstate_t___fpos(&agg_tmp01099, cast1115);
  if (__cir_exc_active) {
    return;
  }
  struct std__fpos___mbstate_t_ t1116 = agg_tmp01099;
  struct std__basic_istream_char__std__char_traits_char__* r1117 = std__istream__seekg(base1108, t1116);
  if (__cir_exc_active) {
    return;
  }
  int c1118 = 0;
  char* cast1119 = (char*)&(_str_16);
  std__allocator_char___allocator_2(&ref_tmp01102);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&agg_tmp11101, cast1119, &ref_tmp01102);
    if (__cir_exc_active) {
      {
        std__allocator_char____allocator(&ref_tmp01102);
      }
      return;
    }
      char* cast1120 = (char*)&(_str_16);
      std__allocator_char___allocator_2(&ref_tmp11104);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&agg_tmp21103, cast1120, &ref_tmp11104);
        if (__cir_exc_active) {
          {
            std__allocator_char____allocator(&ref_tmp11104);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp11101);
          }
          {
            std__allocator_char____allocator(&ref_tmp01102);
          }
          return;
        }
          double c1121 = 0x0p0;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1122 = agg_tmp11101;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1123 = agg_tmp21103;
          ClientData__ClientData(&client1100, c1118, t1122, t1123, c1121);
          if (__cir_exc_active) {
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp21103);
            }
            {
              std__allocator_char____allocator(&ref_tmp11104);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp11101);
            }
            {
              std__allocator_char____allocator(&ref_tmp01102);
            }
            return;
          }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp21103);
        }
      {
        std__allocator_char____allocator(&ref_tmp11104);
      }
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp11101);
    }
  {
    std__allocator_char____allocator(&ref_tmp01102);
  }
  struct std__basic_fstream_char__std__char_traits_char__* t1124 = updateFile1097;
  struct std__basic_istream_char__std__char_traits_char__* base1125 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t1124 + 0);
  char* cast1126 = (char*)&(client1100);
  long c1127 = 40;
  struct std__basic_istream_char__std__char_traits_char__* r1128 = std__istream__read(base1125, cast1126, c1127);
  if (__cir_exc_active) {
    return;
  }
    int r1129 = ClientData__getAccountNumber___const(&client1100);
    if (__cir_exc_active) {
      return;
    }
    int c1130 = 0;
    _Bool c1131 = ((r1129 != c1130)) ? 1 : 0;
    if (c1131) {
      double transaction1132;
      double oldBalance1133;
      struct std__fpos___mbstate_t_ agg_tmp31134;
      outputLine(&_ZSt4cout, &client1100);
      if (__cir_exc_active) {
        return;
      }
      char* cast1135 = (char*)&(_str_18);
      struct std__basic_ostream_char__std__char_traits_char__* r1136 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1135);
      if (__cir_exc_active) {
        return;
      }
      struct std__basic_istream_char__std__char_traits_char__* r1137 = std__istream__operator__(&_ZSt3cin, &transaction1132);
      if (__cir_exc_active) {
        return;
      }
      double r1138 = ClientData__getBalance___const(&client1100);
      if (__cir_exc_active) {
        return;
      }
      oldBalance1133 = r1138;
      double t1139 = oldBalance1133;
      double t1140 = transaction1132;
      double b1141 = t1139 + t1140;
      ClientData__setBalance(&client1100, b1141);
      if (__cir_exc_active) {
        return;
      }
      outputLine(&_ZSt4cout, &client1100);
      if (__cir_exc_active) {
        return;
      }
      struct std__basic_fstream_char__std__char_traits_char__* t1142 = updateFile1097;
      struct std__basic_ostream_char__std__char_traits_char__* base1143 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t1142 + 16);
      int t1144 = accountNumber1098;
      int c1145 = 1;
      int b1146 = t1144 - c1145;
      unsigned long cast1147 = (unsigned long)b1146;
      unsigned long c1148 = 40;
      unsigned long b1149 = cast1147 * c1148;
      long cast1150 = (long)b1149;
      std__fpos___mbstate_t___fpos(&agg_tmp31134, cast1150);
      if (__cir_exc_active) {
        return;
      }
      struct std__fpos___mbstate_t_ t1151 = agg_tmp31134;
      struct std__basic_ostream_char__std__char_traits_char__* r1152 = std__ostream__seekp(base1143, t1151);
      if (__cir_exc_active) {
        return;
      }
      struct std__basic_fstream_char__std__char_traits_char__* t1153 = updateFile1097;
      struct std__basic_ostream_char__std__char_traits_char__* base1154 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t1153 + 16);
      char* cast1155 = (char*)&(client1100);
      long c1156 = 40;
      struct std__basic_ostream_char__std__char_traits_char__* r1157 = std__ostream__write(base1154, cast1155, c1156);
      if (__cir_exc_active) {
        return;
      }
    } else {
      char* cast1158 = (char*)&(_str_19);
      struct std__basic_ostream_char__std__char_traits_char__* r1159 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cerr, cast1158);
      if (__cir_exc_active) {
        return;
      }
      int t1160 = accountNumber1098;
      struct std__basic_ostream_char__std__char_traits_char__* r1161 = std__ostream__operator___2(r1159, t1160);
      if (__cir_exc_active) {
        return;
      }
      char* cast1162 = (char*)&(_str_20);
      struct std__basic_ostream_char__std__char_traits_char__* r1163 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1161, cast1162);
      if (__cir_exc_active) {
        return;
      }
      struct std__basic_ostream_char__std__char_traits_char__* r1164 = std__ostream__operator___std__ostream_____(r1163, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZStrsIcSt11char_traitsIcELm15EERSt13basic_istreamIT_T0_ES6_RAT1__S3_
struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___15ul__std__basic_istream_char__std__char_traits_char______char_(struct std__basic_istream_char__std__char_traits_char__* v1165, char* v1166) {
bb1167:
  struct std__basic_istream_char__std__char_traits_char__* __in1168;
  char* __s1169;
  struct std__basic_istream_char__std__char_traits_char__* __retval1170;
  __in1168 = v1165;
  __s1169 = v1166;
  struct std__basic_istream_char__std__char_traits_char__* t1171 = __in1168;
  char* t1172 = __s1169;
  char* cast1173 = (char*)t1172;
  long c1174 = 15;
  std____istream_extract(t1171, cast1173, c1174);
  if (__cir_exc_active) {
    struct std__basic_istream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_istream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_istream_char__std__char_traits_char__* t1175 = __in1168;
  __retval1170 = t1175;
  struct std__basic_istream_char__std__char_traits_char__* t1176 = __retval1170;
  return t1176;
}

// function: _ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_St5_Setw
struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(struct std__basic_istream_char__std__char_traits_char__* v1177, struct std___Setw v1178) {
bb1179:
  struct std__basic_istream_char__std__char_traits_char__* __is1180;
  struct std___Setw __f1181;
  struct std__basic_istream_char__std__char_traits_char__* __retval1182;
  __is1180 = v1177;
  __f1181 = v1178;
  struct std__basic_istream_char__std__char_traits_char__* t1183 = __is1180;
  void** v1184 = (void**)t1183;
  void* v1185 = *((void**)v1184);
  unsigned char* cast1186 = (unsigned char*)v1185;
  long c1187 = -24;
  unsigned char* ptr1188 = &(cast1186)[c1187];
  long* cast1189 = (long*)ptr1188;
  long t1190 = *cast1189;
  unsigned char* cast1191 = (unsigned char*)t1183;
  unsigned char* ptr1192 = &(cast1191)[t1190];
  struct std__basic_istream_char__std__char_traits_char__* cast1193 = (struct std__basic_istream_char__std__char_traits_char__*)ptr1192;
  struct std__ios_base* cast1194 = (struct std__ios_base*)cast1193;
  int t1195 = __f1181._M_n;
  long cast1196 = (long)t1195;
  long r1197 = std__ios_base__width(cast1194, cast1196);
  if (__cir_exc_active) {
    struct std__basic_istream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_istream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_istream_char__std__char_traits_char__* t1198 = __is1180;
  __retval1182 = t1198;
  struct std__basic_istream_char__std__char_traits_char__* t1199 = __retval1182;
  return t1199;
}

// function: _ZStrsIcSt11char_traitsIcELm10EERSt13basic_istreamIT_T0_ES6_RAT1__S3_
struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___10ul__std__basic_istream_char__std__char_traits_char______char_(struct std__basic_istream_char__std__char_traits_char__* v1200, char* v1201) {
bb1202:
  struct std__basic_istream_char__std__char_traits_char__* __in1203;
  char* __s1204;
  struct std__basic_istream_char__std__char_traits_char__* __retval1205;
  __in1203 = v1200;
  __s1204 = v1201;
  struct std__basic_istream_char__std__char_traits_char__* t1206 = __in1203;
  char* t1207 = __s1204;
  char* cast1208 = (char*)t1207;
  long c1209 = 10;
  std____istream_extract(t1206, cast1208, c1209);
  if (__cir_exc_active) {
    struct std__basic_istream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_istream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_istream_char__std__char_traits_char__* t1210 = __in1203;
  __retval1205 = t1210;
  struct std__basic_istream_char__std__char_traits_char__* t1211 = __retval1205;
  return t1211;
}

// function: _Z9newRecordRSt13basic_fstreamIcSt11char_traitsIcEE
void newRecord(struct std__basic_fstream_char__std__char_traits_char__* v1212) {
bb1213:
  struct std__basic_fstream_char__std__char_traits_char__* insertInFile1214;
  int accountNumber1215;
  struct std__fpos___mbstate_t_ agg_tmp01216;
  struct ClientData client1217;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp11218;
  struct std__allocator_char_ ref_tmp01219;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp21220;
  struct std__allocator_char_ ref_tmp11221;
  insertInFile1214 = v1212;
  char* cast1222 = (char*)&(_str_21);
  int r1223 = getAccount(cast1222);
  if (__cir_exc_active) {
    return;
  }
  accountNumber1215 = r1223;
  struct std__basic_fstream_char__std__char_traits_char__* t1224 = insertInFile1214;
  struct std__basic_istream_char__std__char_traits_char__* base1225 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t1224 + 0);
  int t1226 = accountNumber1215;
  int c1227 = 1;
  int b1228 = t1226 - c1227;
  unsigned long cast1229 = (unsigned long)b1228;
  unsigned long c1230 = 40;
  unsigned long b1231 = cast1229 * c1230;
  long cast1232 = (long)b1231;
  std__fpos___mbstate_t___fpos(&agg_tmp01216, cast1232);
  if (__cir_exc_active) {
    return;
  }
  struct std__fpos___mbstate_t_ t1233 = agg_tmp01216;
  struct std__basic_istream_char__std__char_traits_char__* r1234 = std__istream__seekg(base1225, t1233);
  if (__cir_exc_active) {
    return;
  }
  int c1235 = 0;
  char* cast1236 = (char*)&(_str_16);
  std__allocator_char___allocator_2(&ref_tmp01219);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&agg_tmp11218, cast1236, &ref_tmp01219);
    if (__cir_exc_active) {
      {
        std__allocator_char____allocator(&ref_tmp01219);
      }
      return;
    }
      char* cast1237 = (char*)&(_str_16);
      std__allocator_char___allocator_2(&ref_tmp11221);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&agg_tmp21220, cast1237, &ref_tmp11221);
        if (__cir_exc_active) {
          {
            std__allocator_char____allocator(&ref_tmp11221);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp11218);
          }
          {
            std__allocator_char____allocator(&ref_tmp01219);
          }
          return;
        }
          double c1238 = 0x0p0;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1239 = agg_tmp11218;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1240 = agg_tmp21220;
          ClientData__ClientData(&client1217, c1235, t1239, t1240, c1238);
          if (__cir_exc_active) {
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp21220);
            }
            {
              std__allocator_char____allocator(&ref_tmp11221);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp11218);
            }
            {
              std__allocator_char____allocator(&ref_tmp01219);
            }
            return;
          }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp21220);
        }
      {
        std__allocator_char____allocator(&ref_tmp11221);
      }
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp11218);
    }
  {
    std__allocator_char____allocator(&ref_tmp01219);
  }
  struct std__basic_fstream_char__std__char_traits_char__* t1241 = insertInFile1214;
  struct std__basic_istream_char__std__char_traits_char__* base1242 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t1241 + 0);
  char* cast1243 = (char*)&(client1217);
  long c1244 = 40;
  struct std__basic_istream_char__std__char_traits_char__* r1245 = std__istream__read(base1242, cast1243, c1244);
  if (__cir_exc_active) {
    return;
  }
    int r1246 = ClientData__getAccountNumber___const(&client1217);
    if (__cir_exc_active) {
      return;
    }
    int c1247 = 0;
    _Bool c1248 = ((r1246 == c1247)) ? 1 : 0;
    if (c1248) {
      char lastName1249[15];
      char firstName1250[10];
      double balance1251;
      struct std___Setw agg_tmp31252;
      struct std___Setw agg_tmp41253;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp51254;
      struct std__allocator_char_ ref_tmp21255;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp61256;
      struct std__allocator_char_ ref_tmp31257;
      struct std__fpos___mbstate_t_ agg_tmp71258;
      char* cast1259 = (char*)&(_str_22);
      struct std__basic_ostream_char__std__char_traits_char__* r1260 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1259);
      if (__cir_exc_active) {
        return;
      }
      int c1261 = 15;
      struct std___Setw r1262 = std__setw(c1261);
      if (__cir_exc_active) {
        return;
      }
      agg_tmp31252 = r1262;
      struct std___Setw t1263 = agg_tmp31252;
      struct std__basic_istream_char__std__char_traits_char__* r1264 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(&_ZSt3cin, t1263);
      if (__cir_exc_active) {
        return;
      }
      struct std__basic_istream_char__std__char_traits_char__* r1265 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___15ul__std__basic_istream_char__std__char_traits_char______char_(r1264, lastName1249);
      if (__cir_exc_active) {
        return;
      }
      int c1266 = 10;
      struct std___Setw r1267 = std__setw(c1266);
      if (__cir_exc_active) {
        return;
      }
      agg_tmp41253 = r1267;
      struct std___Setw t1268 = agg_tmp41253;
      struct std__basic_istream_char__std__char_traits_char__* r1269 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(&_ZSt3cin, t1268);
      if (__cir_exc_active) {
        return;
      }
      struct std__basic_istream_char__std__char_traits_char__* r1270 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___10ul__std__basic_istream_char__std__char_traits_char______char_(r1269, firstName1250);
      if (__cir_exc_active) {
        return;
      }
      struct std__basic_istream_char__std__char_traits_char__* r1271 = std__istream__operator__(&_ZSt3cin, &balance1251);
      if (__cir_exc_active) {
        return;
      }
      char* cast1272 = (char*)&(lastName1249);
      std__allocator_char___allocator_2(&ref_tmp21255);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&agg_tmp51254, cast1272, &ref_tmp21255);
        if (__cir_exc_active) {
          {
            std__allocator_char____allocator(&ref_tmp21255);
          }
          return;
        }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1273 = agg_tmp51254;
          ClientData__setLastName(&client1217, t1273);
          if (__cir_exc_active) {
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp51254);
            }
            {
              std__allocator_char____allocator(&ref_tmp21255);
            }
            return;
          }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp51254);
        }
      {
        std__allocator_char____allocator(&ref_tmp21255);
      }
      char* cast1274 = (char*)&(firstName1250);
      std__allocator_char___allocator_2(&ref_tmp31257);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&agg_tmp61256, cast1274, &ref_tmp31257);
        if (__cir_exc_active) {
          {
            std__allocator_char____allocator(&ref_tmp31257);
          }
          return;
        }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1275 = agg_tmp61256;
          ClientData__setFirstName(&client1217, t1275);
          if (__cir_exc_active) {
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp61256);
            }
            {
              std__allocator_char____allocator(&ref_tmp31257);
            }
            return;
          }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp61256);
        }
      {
        std__allocator_char____allocator(&ref_tmp31257);
      }
      double t1276 = balance1251;
      ClientData__setBalance(&client1217, t1276);
      if (__cir_exc_active) {
        return;
      }
      int t1277 = accountNumber1215;
      ClientData__setAccountNumber(&client1217, t1277);
      if (__cir_exc_active) {
        return;
      }
      struct std__basic_fstream_char__std__char_traits_char__* t1278 = insertInFile1214;
      struct std__basic_ostream_char__std__char_traits_char__* base1279 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t1278 + 16);
      int t1280 = accountNumber1215;
      int c1281 = 1;
      int b1282 = t1280 - c1281;
      unsigned long cast1283 = (unsigned long)b1282;
      unsigned long c1284 = 40;
      unsigned long b1285 = cast1283 * c1284;
      long cast1286 = (long)b1285;
      std__fpos___mbstate_t___fpos(&agg_tmp71258, cast1286);
      if (__cir_exc_active) {
        return;
      }
      struct std__fpos___mbstate_t_ t1287 = agg_tmp71258;
      struct std__basic_ostream_char__std__char_traits_char__* r1288 = std__ostream__seekp(base1279, t1287);
      if (__cir_exc_active) {
        return;
      }
      struct std__basic_fstream_char__std__char_traits_char__* t1289 = insertInFile1214;
      struct std__basic_ostream_char__std__char_traits_char__* base1290 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t1289 + 16);
      char* cast1291 = (char*)&(client1217);
      long c1292 = 40;
      struct std__basic_ostream_char__std__char_traits_char__* r1293 = std__ostream__write(base1290, cast1291, c1292);
      if (__cir_exc_active) {
        return;
      }
    } else {
      char* cast1294 = (char*)&(_str_19);
      struct std__basic_ostream_char__std__char_traits_char__* r1295 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cerr, cast1294);
      if (__cir_exc_active) {
        return;
      }
      int t1296 = accountNumber1215;
      struct std__basic_ostream_char__std__char_traits_char__* r1297 = std__ostream__operator___2(r1295, t1296);
      if (__cir_exc_active) {
        return;
      }
      char* cast1298 = (char*)&(_str_23);
      struct std__basic_ostream_char__std__char_traits_char__* r1299 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1297, cast1298);
      if (__cir_exc_active) {
        return;
      }
      struct std__basic_ostream_char__std__char_traits_char__* r1300 = std__ostream__operator___std__ostream_____(r1299, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _Z12deleteRecordRSt13basic_fstreamIcSt11char_traitsIcEE
void deleteRecord(struct std__basic_fstream_char__std__char_traits_char__* v1301) {
bb1302:
  struct std__basic_fstream_char__std__char_traits_char__* deleteFromFile1303;
  int accountNumber1304;
  struct std__fpos___mbstate_t_ agg_tmp01305;
  struct ClientData client1306;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp11307;
  struct std__allocator_char_ ref_tmp01308;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp21309;
  struct std__allocator_char_ ref_tmp11310;
  deleteFromFile1303 = v1301;
  char* cast1311 = (char*)&(_str_24);
  int r1312 = getAccount(cast1311);
  if (__cir_exc_active) {
    return;
  }
  accountNumber1304 = r1312;
  struct std__basic_fstream_char__std__char_traits_char__* t1313 = deleteFromFile1303;
  struct std__basic_istream_char__std__char_traits_char__* base1314 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t1313 + 0);
  int t1315 = accountNumber1304;
  int c1316 = 1;
  int b1317 = t1315 - c1316;
  unsigned long cast1318 = (unsigned long)b1317;
  unsigned long c1319 = 40;
  unsigned long b1320 = cast1318 * c1319;
  long cast1321 = (long)b1320;
  std__fpos___mbstate_t___fpos(&agg_tmp01305, cast1321);
  if (__cir_exc_active) {
    return;
  }
  struct std__fpos___mbstate_t_ t1322 = agg_tmp01305;
  struct std__basic_istream_char__std__char_traits_char__* r1323 = std__istream__seekg(base1314, t1322);
  if (__cir_exc_active) {
    return;
  }
  int c1324 = 0;
  char* cast1325 = (char*)&(_str_16);
  std__allocator_char___allocator_2(&ref_tmp01308);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&agg_tmp11307, cast1325, &ref_tmp01308);
    if (__cir_exc_active) {
      {
        std__allocator_char____allocator(&ref_tmp01308);
      }
      return;
    }
      char* cast1326 = (char*)&(_str_16);
      std__allocator_char___allocator_2(&ref_tmp11310);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&agg_tmp21309, cast1326, &ref_tmp11310);
        if (__cir_exc_active) {
          {
            std__allocator_char____allocator(&ref_tmp11310);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp11307);
          }
          {
            std__allocator_char____allocator(&ref_tmp01308);
          }
          return;
        }
          double c1327 = 0x0p0;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1328 = agg_tmp11307;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1329 = agg_tmp21309;
          ClientData__ClientData(&client1306, c1324, t1328, t1329, c1327);
          if (__cir_exc_active) {
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp21309);
            }
            {
              std__allocator_char____allocator(&ref_tmp11310);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp11307);
            }
            {
              std__allocator_char____allocator(&ref_tmp01308);
            }
            return;
          }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp21309);
        }
      {
        std__allocator_char____allocator(&ref_tmp11310);
      }
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp11307);
    }
  {
    std__allocator_char____allocator(&ref_tmp01308);
  }
  struct std__basic_fstream_char__std__char_traits_char__* t1330 = deleteFromFile1303;
  struct std__basic_istream_char__std__char_traits_char__* base1331 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t1330 + 0);
  char* cast1332 = (char*)&(client1306);
  long c1333 = 40;
  struct std__basic_istream_char__std__char_traits_char__* r1334 = std__istream__read(base1331, cast1332, c1333);
  if (__cir_exc_active) {
    return;
  }
    int r1335 = ClientData__getAccountNumber___const(&client1306);
    if (__cir_exc_active) {
      return;
    }
    int c1336 = 0;
    _Bool c1337 = ((r1335 != c1336)) ? 1 : 0;
    if (c1337) {
      struct ClientData blankClient1338;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp31339;
      struct std__allocator_char_ ref_tmp21340;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp41341;
      struct std__allocator_char_ ref_tmp31342;
      struct std__fpos___mbstate_t_ agg_tmp51343;
      int c1344 = 0;
      char* cast1345 = (char*)&(_str_16);
      std__allocator_char___allocator_2(&ref_tmp21340);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&agg_tmp31339, cast1345, &ref_tmp21340);
        if (__cir_exc_active) {
          {
            std__allocator_char____allocator(&ref_tmp21340);
          }
          return;
        }
          char* cast1346 = (char*)&(_str_16);
          std__allocator_char___allocator_2(&ref_tmp31342);
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&agg_tmp41341, cast1346, &ref_tmp31342);
            if (__cir_exc_active) {
              {
                std__allocator_char____allocator(&ref_tmp31342);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp31339);
              }
              {
                std__allocator_char____allocator(&ref_tmp21340);
              }
              return;
            }
              double c1347 = 0x0p0;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1348 = agg_tmp31339;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1349 = agg_tmp41341;
              ClientData__ClientData(&blankClient1338, c1344, t1348, t1349, c1347);
              if (__cir_exc_active) {
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp41341);
                }
                {
                  std__allocator_char____allocator(&ref_tmp31342);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp31339);
                }
                {
                  std__allocator_char____allocator(&ref_tmp21340);
                }
                return;
              }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp41341);
            }
          {
            std__allocator_char____allocator(&ref_tmp31342);
          }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp31339);
        }
      {
        std__allocator_char____allocator(&ref_tmp21340);
      }
      struct std__basic_fstream_char__std__char_traits_char__* t1350 = deleteFromFile1303;
      struct std__basic_ostream_char__std__char_traits_char__* base1351 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t1350 + 16);
      int t1352 = accountNumber1304;
      int c1353 = 1;
      int b1354 = t1352 - c1353;
      unsigned long cast1355 = (unsigned long)b1354;
      unsigned long c1356 = 40;
      unsigned long b1357 = cast1355 * c1356;
      long cast1358 = (long)b1357;
      std__fpos___mbstate_t___fpos(&agg_tmp51343, cast1358);
      if (__cir_exc_active) {
        return;
      }
      struct std__fpos___mbstate_t_ t1359 = agg_tmp51343;
      struct std__basic_ostream_char__std__char_traits_char__* r1360 = std__ostream__seekp(base1351, t1359);
      if (__cir_exc_active) {
        return;
      }
      struct std__basic_fstream_char__std__char_traits_char__* t1361 = deleteFromFile1303;
      struct std__basic_ostream_char__std__char_traits_char__* base1362 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t1361 + 16);
      char* cast1363 = (char*)&(blankClient1338);
      long c1364 = 40;
      struct std__basic_ostream_char__std__char_traits_char__* r1365 = std__ostream__write(base1362, cast1363, c1364);
      if (__cir_exc_active) {
        return;
      }
      char* cast1366 = (char*)&(_str_19);
      struct std__basic_ostream_char__std__char_traits_char__* r1367 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1366);
      if (__cir_exc_active) {
        return;
      }
      int t1368 = accountNumber1304;
      struct std__basic_ostream_char__std__char_traits_char__* r1369 = std__ostream__operator___2(r1367, t1368);
      if (__cir_exc_active) {
        return;
      }
      char* cast1370 = (char*)&(_str_25);
      struct std__basic_ostream_char__std__char_traits_char__* r1371 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1369, cast1370);
      if (__cir_exc_active) {
        return;
      }
    } else {
      char* cast1372 = (char*)&(_str_19);
      struct std__basic_ostream_char__std__char_traits_char__* r1373 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cerr, cast1372);
      if (__cir_exc_active) {
        return;
      }
      int t1374 = accountNumber1304;
      struct std__basic_ostream_char__std__char_traits_char__* r1375 = std__ostream__operator___2(r1373, t1374);
      if (__cir_exc_active) {
        return;
      }
      char* cast1376 = (char*)&(_str_26);
      struct std__basic_ostream_char__std__char_traits_char__* r1377 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1375, cast1376);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt13basic_fstreamIcSt11char_traitsIcEED2Ev
void std__basic_fstream_char__std__char_traits_char______basic_fstream_2(struct std__basic_fstream_char__std__char_traits_char__* v1378, void** v1379) {
bb1380:
  struct std__basic_fstream_char__std__char_traits_char__* this1381;
  void** vtt1382;
  this1381 = v1378;
  vtt1382 = v1379;
  struct std__basic_fstream_char__std__char_traits_char__* t1383 = this1381;
  void** t1384 = vtt1382;
    {
      std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t1383->_M_filebuf);
    }
  {
    struct std__basic_iostream_char__std__char_traits_char__* base1385 = (struct std__basic_iostream_char__std__char_traits_char__*)((char *)t1383 + 0);
    static void *vtt_slot1386 = 0;
    void** vtt1387 = (void**)&vtt_slot1386;
    std__basic_iostream_char__std__char_traits_char______basic_iostream(base1385, vtt1387);
  }
  return;
}

// function: _ZNSt13basic_fstreamIcSt11char_traitsIcEED1Ev
void std__basic_fstream_char__std__char_traits_char______basic_fstream(struct std__basic_fstream_char__std__char_traits_char__* v1388) {
bb1389:
  struct std__basic_fstream_char__std__char_traits_char__* this1390;
  this1390 = v1388;
  struct std__basic_fstream_char__std__char_traits_char__* t1391 = this1390;
    static void *vtt_slot1392 = 0;
    void** vtt1393 = (void**)&vtt_slot1392;
    std__basic_fstream_char__std__char_traits_char______basic_fstream_2(t1391, vtt1393);
  {
    struct std__basic_ios_char__std__char_traits_char__* base1394 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1391 + 264);
    std__basic_ios_char__std__char_traits_char______basic_ios(base1394);
  }
  return;
}

// function: main
int main() {
bb1395:
  int __retval1396;
  struct std__basic_fstream_char__std__char_traits_char__ inOutCredit1397;
  int choice1398;
  int c1399 = 0;
  __retval1396 = c1399;
  char* cast1400 = (char*)&(_str);
  int t1401 = _ZNSt8ios_base2inE_const;
  int t1402 = _ZNSt8ios_base3outE_const;
  int r1403 = std__operator__6(t1401, t1402);
  std__basic_fstream_char__std__char_traits_char_____basic_fstream(&inOutCredit1397, cast1400, r1403);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
      void** v1404 = (void**)&(inOutCredit1397);
      void* v1405 = *((void**)v1404);
      unsigned char* cast1406 = (unsigned char*)v1405;
      long c1407 = -24;
      unsigned char* ptr1408 = &(cast1406)[c1407];
      long* cast1409 = (long*)ptr1408;
      long t1410 = *cast1409;
      unsigned char* cast1411 = (unsigned char*)&(inOutCredit1397);
      unsigned char* ptr1412 = &(cast1411)[t1410];
      struct std__basic_fstream_char__std__char_traits_char__* cast1413 = (struct std__basic_fstream_char__std__char_traits_char__*)ptr1412;
      struct std__basic_ios_char__std__char_traits_char__* cast1414 = (struct std__basic_ios_char__std__char_traits_char__*)cast1413;
      _Bool r1415 = std__basic_ios_char__std__char_traits_char_____operator____const(cast1414);
      if (__cir_exc_active) {
        {
          std__basic_fstream_char__std__char_traits_char______basic_fstream(&inOutCredit1397);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      if (r1415) {
        char* cast1416 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r1417 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cerr, cast1416);
        if (__cir_exc_active) {
          {
            std__basic_fstream_char__std__char_traits_char______basic_fstream(&inOutCredit1397);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        struct std__basic_ostream_char__std__char_traits_char__* r1418 = std__ostream__operator___std__ostream_____(r1417, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        if (__cir_exc_active) {
          {
            std__basic_fstream_char__std__char_traits_char______basic_fstream(&inOutCredit1397);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        int c1419 = 1;
        exit(c1419);
      }
      while (1) {
        int r1420 = enterChoice();
        if (__cir_exc_active) {
          {
            std__basic_fstream_char__std__char_traits_char______basic_fstream(&inOutCredit1397);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        choice1398 = r1420;
        int c1421 = 5;
        _Bool c1422 = ((r1420 != c1421)) ? 1 : 0;
        if (!c1422) break;
            int t1423 = choice1398;
            switch (t1423) {
            case 1:
              printRecord(&inOutCredit1397);
              if (__cir_exc_active) {
                {
                  std__basic_fstream_char__std__char_traits_char______basic_fstream(&inOutCredit1397);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              break;
            case 2:
              updateRecord(&inOutCredit1397);
              if (__cir_exc_active) {
                {
                  std__basic_fstream_char__std__char_traits_char______basic_fstream(&inOutCredit1397);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              break;
            case 3:
              newRecord(&inOutCredit1397);
              if (__cir_exc_active) {
                {
                  std__basic_fstream_char__std__char_traits_char______basic_fstream(&inOutCredit1397);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              break;
            case 4:
              deleteRecord(&inOutCredit1397);
              if (__cir_exc_active) {
                {
                  std__basic_fstream_char__std__char_traits_char______basic_fstream(&inOutCredit1397);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              break;
            default:
              char* cast1424 = (char*)&(_str_2);
              struct std__basic_ostream_char__std__char_traits_char__* r1425 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cerr, cast1424);
              if (__cir_exc_active) {
                {
                  std__basic_fstream_char__std__char_traits_char______basic_fstream(&inOutCredit1397);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              struct std__basic_ostream_char__std__char_traits_char__* r1426 = std__ostream__operator___std__ostream_____(r1425, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
              if (__cir_exc_active) {
                {
                  std__basic_fstream_char__std__char_traits_char______basic_fstream(&inOutCredit1397);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              break;
            }
          void** v1427 = (void**)&(inOutCredit1397);
          void* v1428 = *((void**)v1427);
          unsigned char* cast1429 = (unsigned char*)v1428;
          long c1430 = -24;
          unsigned char* ptr1431 = &(cast1429)[c1430];
          long* cast1432 = (long*)ptr1431;
          long t1433 = *cast1432;
          unsigned char* cast1434 = (unsigned char*)&(inOutCredit1397);
          unsigned char* ptr1435 = &(cast1434)[t1433];
          struct std__basic_fstream_char__std__char_traits_char__* cast1436 = (struct std__basic_fstream_char__std__char_traits_char__*)ptr1435;
          struct std__basic_ios_char__std__char_traits_char__* cast1437 = (struct std__basic_ios_char__std__char_traits_char__*)cast1436;
          int t1438 = _ZNSt8ios_base7goodbitE_const;
          std__basic_ios_char__std__char_traits_char_____clear(cast1437, t1438);
          if (__cir_exc_active) {
            {
              std__basic_fstream_char__std__char_traits_char______basic_fstream(&inOutCredit1397);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
      }
    int c1439 = 0;
    __retval1396 = c1439;
    int t1440 = __retval1396;
    int ret_val1441 = t1440;
    {
      std__basic_fstream_char__std__char_traits_char______basic_fstream(&inOutCredit1397);
    }
    return ret_val1441;
  int t1442 = __retval1396;
  return t1442;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1443) {
bb1444:
  struct std____new_allocator_char_* this1445;
  this1445 = v1443;
  struct std____new_allocator_char_* t1446 = this1445;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1447) {
bb1448:
  char* __r1449;
  char* __retval1450;
  __r1449 = v1447;
  char* t1451 = __r1449;
  __retval1450 = t1451;
  char* t1452 = __retval1450;
  return t1452;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1453) {
bb1454:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1455;
  char* __retval1456;
  this1455 = v1453;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1457 = this1455;
  char* cast1458 = (char*)&(t1457->field2._M_local_buf);
  char* r1459 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1458);
  __retval1456 = r1459;
  char* t1460 = __retval1456;
  return t1460;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1461, char* v1462, struct std__allocator_char_* v1463) {
bb1464:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1465;
  char* __dat1466;
  struct std__allocator_char_* __a1467;
  this1465 = v1461;
  __dat1466 = v1462;
  __a1467 = v1463;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1468 = this1465;
  struct std__allocator_char_* base1469 = (struct std__allocator_char_*)((char *)t1468 + 0);
  struct std__allocator_char_* t1470 = __a1467;
  std__allocator_char___allocator(base1469, t1470);
    char* t1471 = __dat1466;
    t1468->_M_p = t1471;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1472:
  _Bool __retval1473;
    _Bool c1474 = 0;
    __retval1473 = c1474;
    _Bool t1475 = __retval1473;
    return t1475;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1476, char* v1477) {
bb1478:
  char* __c11479;
  char* __c21480;
  _Bool __retval1481;
  __c11479 = v1476;
  __c21480 = v1477;
  char* t1482 = __c11479;
  char t1483 = *t1482;
  int cast1484 = (int)t1483;
  char* t1485 = __c21480;
  char t1486 = *t1485;
  int cast1487 = (int)t1486;
  _Bool c1488 = ((cast1484 == cast1487)) ? 1 : 0;
  __retval1481 = c1488;
  _Bool t1489 = __retval1481;
  return t1489;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1490) {
bb1491:
  char* __p1492;
  unsigned long __retval1493;
  unsigned long __i1494;
  __p1492 = v1490;
  unsigned long c1495 = 0;
  __i1494 = c1495;
    char ref_tmp01496;
    while (1) {
      unsigned long t1497 = __i1494;
      char* t1498 = __p1492;
      char* ptr1499 = &(t1498)[t1497];
      char c1500 = 0;
      ref_tmp01496 = c1500;
      _Bool r1501 = __gnu_cxx__char_traits_char___eq(ptr1499, &ref_tmp01496);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u1502 = !r1501;
      if (!u1502) break;
      unsigned long t1503 = __i1494;
      unsigned long u1504 = t1503 + 1;
      __i1494 = u1504;
    }
  unsigned long t1505 = __i1494;
  __retval1493 = t1505;
  unsigned long t1506 = __retval1493;
  return t1506;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1507) {
bb1508:
  char* __s1509;
  unsigned long __retval1510;
  __s1509 = v1507;
    _Bool r1511 = std____is_constant_evaluated();
    if (r1511) {
      char* t1512 = __s1509;
      unsigned long r1513 = __gnu_cxx__char_traits_char___length(t1512);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval1510 = r1513;
      unsigned long t1514 = __retval1510;
      return t1514;
    }
  char* t1515 = __s1509;
  unsigned long r1516 = strlen(t1515);
  __retval1510 = r1516;
  unsigned long t1517 = __retval1510;
  return t1517;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v1518, char* v1519, struct std__random_access_iterator_tag v1520) {
bb1521:
  char* __first1522;
  char* __last1523;
  struct std__random_access_iterator_tag unnamed1524;
  long __retval1525;
  __first1522 = v1518;
  __last1523 = v1519;
  unnamed1524 = v1520;
  char* t1526 = __last1523;
  char* t1527 = __first1522;
  long diff1528 = t1526 - t1527;
  __retval1525 = diff1528;
  long t1529 = __retval1525;
  return t1529;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v1530) {
bb1531:
  char** unnamed1532;
  struct std__random_access_iterator_tag __retval1533;
  unnamed1532 = v1530;
  struct std__random_access_iterator_tag t1534 = __retval1533;
  return t1534;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v1535, char* v1536) {
bb1537:
  char* __first1538;
  char* __last1539;
  long __retval1540;
  struct std__random_access_iterator_tag agg_tmp01541;
  __first1538 = v1535;
  __last1539 = v1536;
  char* t1542 = __first1538;
  char* t1543 = __last1539;
  struct std__random_access_iterator_tag r1544 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first1538);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp01541 = r1544;
  struct std__random_access_iterator_tag t1545 = agg_tmp01541;
  long r1546 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t1542, t1543, t1545);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval1540 = r1546;
  long t1547 = __retval1540;
  return t1547;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1548, char* v1549) {
bb1550:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1551;
  char* __p1552;
  this1551 = v1548;
  __p1552 = v1549;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1553 = this1551;
  char* t1554 = __p1552;
  t1553->_M_dataplus._M_p = t1554;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v1555) {
bb1556:
  struct std__allocator_char_* __a1557;
  unsigned long __retval1558;
  __a1557 = v1555;
  unsigned long c1559 = -1;
  unsigned long c1560 = 1;
  unsigned long b1561 = c1559 / c1560;
  __retval1558 = b1561;
  unsigned long t1562 = __retval1558;
  return t1562;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1563) {
bb1564:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1565;
  struct std__allocator_char_* __retval1566;
  this1565 = v1563;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1567 = this1565;
  struct std__allocator_char_* base1568 = (struct std__allocator_char_*)((char *)&(t1567->_M_dataplus) + 0);
  __retval1566 = base1568;
  struct std__allocator_char_* t1569 = __retval1566;
  return t1569;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1570, unsigned long* v1571) {
bb1572:
  unsigned long* __a1573;
  unsigned long* __b1574;
  unsigned long* __retval1575;
  __a1573 = v1570;
  __b1574 = v1571;
    unsigned long* t1576 = __b1574;
    unsigned long t1577 = *t1576;
    unsigned long* t1578 = __a1573;
    unsigned long t1579 = *t1578;
    _Bool c1580 = ((t1577 < t1579)) ? 1 : 0;
    if (c1580) {
      unsigned long* t1581 = __b1574;
      __retval1575 = t1581;
      unsigned long* t1582 = __retval1575;
      return t1582;
    }
  unsigned long* t1583 = __a1573;
  __retval1575 = t1583;
  unsigned long* t1584 = __retval1575;
  return t1584;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1585) {
bb1586:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1587;
  unsigned long __retval1588;
  unsigned long __diffmax1589;
  unsigned long __allocmax1590;
  this1587 = v1585;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1591 = this1587;
  unsigned long c1592 = 9223372036854775807;
  __diffmax1589 = c1592;
  struct std__allocator_char_* r1593 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1591);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long r1594 = std__allocator_traits_std__allocator_char_____max_size(r1593);
  __allocmax1590 = r1594;
  unsigned long* r1595 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1589, &__allocmax1590);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t1596 = *r1595;
  unsigned long c1597 = 1;
  unsigned long b1598 = t1596 - c1597;
  __retval1588 = b1598;
  unsigned long t1599 = __retval1588;
  return t1599;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v1600) {
bb1601:
  struct std____new_allocator_char_* this1602;
  unsigned long __retval1603;
  this1602 = v1600;
  struct std____new_allocator_char_* t1604 = this1602;
  unsigned long c1605 = 9223372036854775807;
  unsigned long c1606 = 1;
  unsigned long b1607 = c1605 / c1606;
  __retval1603 = b1607;
  unsigned long t1608 = __retval1603;
  return t1608;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v1609, unsigned long v1610, void* v1611) {
bb1612:
  struct std____new_allocator_char_* this1613;
  unsigned long __n1614;
  void* unnamed1615;
  char* __retval1616;
  this1613 = v1609;
  __n1614 = v1610;
  unnamed1615 = v1611;
  struct std____new_allocator_char_* t1617 = this1613;
    unsigned long t1618 = __n1614;
    unsigned long r1619 = std____new_allocator_char____M_max_size___const(t1617);
    _Bool c1620 = ((t1618 > r1619)) ? 1 : 0;
    if (c1620) {
        unsigned long t1621 = __n1614;
        unsigned long c1622 = -1;
        unsigned long c1623 = 1;
        unsigned long b1624 = c1622 / c1623;
        _Bool c1625 = ((t1621 > b1624)) ? 1 : 0;
        if (c1625) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            char* __cir_eh_ret = (char*)0;
            return __cir_eh_ret;
          }
        }
      std____throw_bad_alloc();
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
    }
    unsigned long c1626 = 1;
    unsigned long c1627 = 16;
    _Bool c1628 = ((c1626 > c1627)) ? 1 : 0;
    if (c1628) {
      unsigned long __al1629;
      unsigned long c1630 = 1;
      __al1629 = c1630;
      unsigned long t1631 = __n1614;
      unsigned long c1632 = 1;
      unsigned long b1633 = t1631 * c1632;
      unsigned long t1634 = __al1629;
      void* r1635 = operator_new_2(b1633, t1634);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
      char* cast1636 = (char*)r1635;
      __retval1616 = cast1636;
      char* t1637 = __retval1616;
      return t1637;
    }
  unsigned long t1638 = __n1614;
  unsigned long c1639 = 1;
  unsigned long b1640 = t1638 * c1639;
  void* r1641 = operator_new(b1640);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  char* cast1642 = (char*)r1641;
  __retval1616 = cast1642;
  char* t1643 = __retval1616;
  return t1643;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1644, unsigned long v1645) {
bb1646:
  struct std__allocator_char_* this1647;
  unsigned long __n1648;
  char* __retval1649;
  this1647 = v1644;
  __n1648 = v1645;
  struct std__allocator_char_* t1650 = this1647;
    _Bool r1651 = std____is_constant_evaluated();
    if (r1651) {
        unsigned long t1652 = __n1648;
        unsigned long c1653 = 1;
        unsigned long ovr1654;
        _Bool ovf1655 = __builtin_mul_overflow(t1652, c1653, &ovr1654);
        __n1648 = ovr1654;
        if (ovf1655) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            char* __cir_eh_ret = (char*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1656 = __n1648;
      void* r1657 = operator_new(t1656);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
      char* cast1658 = (char*)r1657;
      __retval1649 = cast1658;
      char* t1659 = __retval1649;
      return t1659;
    }
  struct std____new_allocator_char_* base1660 = (struct std____new_allocator_char_*)((char *)t1650 + 0);
  unsigned long t1661 = __n1648;
  void* c1662 = ((void*)0);
  char* r1663 = std____new_allocator_char___allocate(base1660, t1661, c1662);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __retval1649 = r1663;
  char* t1664 = __retval1649;
  return t1664;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1665, unsigned long v1666) {
bb1667:
  struct std__allocator_char_* __a1668;
  unsigned long __n1669;
  char* __retval1670;
  __a1668 = v1665;
  __n1669 = v1666;
  struct std__allocator_char_* t1671 = __a1668;
  unsigned long t1672 = __n1669;
  char* r1673 = std__allocator_char___allocate(t1671, t1672);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __retval1670 = r1673;
  char* t1674 = __retval1670;
  return t1674;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1675, unsigned long v1676) {
bb1677:
  struct std__allocator_char_* __a1678;
  unsigned long __n1679;
  char* __retval1680;
  char* __p1681;
  __a1678 = v1675;
  __n1679 = v1676;
  struct std__allocator_char_* t1682 = __a1678;
  unsigned long t1683 = __n1679;
  char* r1684 = std__allocator_traits_std__allocator_char_____allocate(t1682, t1683);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __p1681 = r1684;
  char* t1685 = __p1681;
  __retval1680 = t1685;
  char* t1686 = __retval1680;
  return t1686;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1687) {
bb1688:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1689;
  struct std__allocator_char_* __retval1690;
  this1689 = v1687;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1691 = this1689;
  struct std__allocator_char_* base1692 = (struct std__allocator_char_*)((char *)&(t1691->_M_dataplus) + 0);
  __retval1690 = base1692;
  struct std__allocator_char_* t1693 = __retval1690;
  return t1693;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1694, unsigned long* v1695, unsigned long v1696) {
bb1697:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1698;
  unsigned long* __capacity1699;
  unsigned long __old_capacity1700;
  char* __retval1701;
  this1698 = v1694;
  __capacity1699 = v1695;
  __old_capacity1700 = v1696;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1702 = this1698;
    unsigned long* t1703 = __capacity1699;
    unsigned long t1704 = *t1703;
    unsigned long r1705 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1702);
    _Bool c1706 = ((t1704 > r1705)) ? 1 : 0;
    if (c1706) {
      char* cast1707 = (char*)&(_str_29);
      std____throw_length_error(cast1707);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
    }
    unsigned long* t1708 = __capacity1699;
    unsigned long t1709 = *t1708;
    unsigned long t1710 = __old_capacity1700;
    _Bool c1711 = ((t1709 > t1710)) ? 1 : 0;
    _Bool ternary1712;
    if (c1711) {
      unsigned long* t1713 = __capacity1699;
      unsigned long t1714 = *t1713;
      unsigned long c1715 = 2;
      unsigned long t1716 = __old_capacity1700;
      unsigned long b1717 = c1715 * t1716;
      _Bool c1718 = ((t1714 < b1717)) ? 1 : 0;
      ternary1712 = (_Bool)c1718;
    } else {
      _Bool c1719 = 0;
      ternary1712 = (_Bool)c1719;
    }
    if (ternary1712) {
      unsigned long c1720 = 2;
      unsigned long t1721 = __old_capacity1700;
      unsigned long b1722 = c1720 * t1721;
      unsigned long* t1723 = __capacity1699;
      *t1723 = b1722;
        unsigned long* t1724 = __capacity1699;
        unsigned long t1725 = *t1724;
        unsigned long r1726 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1702);
        _Bool c1727 = ((t1725 > r1726)) ? 1 : 0;
        if (c1727) {
          unsigned long r1728 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1702);
          unsigned long* t1729 = __capacity1699;
          *t1729 = r1728;
        }
    }
  struct std__allocator_char_* r1730 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1702);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  unsigned long* t1731 = __capacity1699;
  unsigned long t1732 = *t1731;
  unsigned long c1733 = 1;
  unsigned long b1734 = t1732 + c1733;
  char* r1735 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1730, b1734);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __retval1701 = r1735;
  char* t1736 = __retval1701;
  return t1736;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1737, unsigned long v1738) {
bb1739:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1740;
  unsigned long __capacity1741;
  this1740 = v1737;
  __capacity1741 = v1738;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1742 = this1740;
  unsigned long t1743 = __capacity1741;
  t1742->field2._M_allocated_capacity = t1743;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1744:
  _Bool __retval1745;
    _Bool c1746 = 0;
    __retval1745 = c1746;
    _Bool t1747 = __retval1745;
    return t1747;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1748) {
bb1749:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1750;
  this1750 = v1748;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1751 = this1750;
    _Bool r1752 = std__is_constant_evaluated();
    if (r1752) {
        unsigned long __i1753;
        unsigned long c1754 = 0;
        __i1753 = c1754;
        while (1) {
          unsigned long t1756 = __i1753;
          unsigned long c1757 = 15;
          _Bool c1758 = ((t1756 <= c1757)) ? 1 : 0;
          if (!c1758) break;
          char c1759 = 0;
          unsigned long t1760 = __i1753;
          t1751->field2._M_local_buf[t1760] = c1759;
        for_step1755: ;
          unsigned long t1761 = __i1753;
          unsigned long u1762 = t1761 + 1;
          __i1753 = u1762;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1763, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1764) {
bb1765:
  struct _Guard* this1766;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1767;
  this1766 = v1763;
  __s1767 = v1764;
  struct _Guard* t1768 = this1766;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1769 = __s1767;
  t1768->_M_guarded = t1769;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1770, char* v1771) {
bb1772:
  char* __location1773;
  char* __args1774;
  char* __retval1775;
  void* __loc1776;
  __location1773 = v1770;
  __args1774 = v1771;
  char* t1777 = __location1773;
  void* cast1778 = (void*)t1777;
  __loc1776 = cast1778;
    void* t1779 = __loc1776;
    char* cast1780 = (char*)t1779;
    char* t1781 = __args1774;
    char t1782 = *t1781;
    *cast1780 = t1782;
    __retval1775 = cast1780;
    char* t1783 = __retval1775;
    return t1783;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1784, char* v1785) {
bb1786:
  char* __c11787;
  char* __c21788;
  __c11787 = v1784;
  __c21788 = v1785;
    _Bool r1789 = std____is_constant_evaluated();
    if (r1789) {
      char* t1790 = __c11787;
      char* t1791 = __c21788;
      char* r1792 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1790, t1791);
    } else {
      char* t1793 = __c21788;
      char t1794 = *t1793;
      char* t1795 = __c11787;
      *t1795 = t1794;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1796, char* v1797, unsigned long v1798) {
bb1799:
  char* __s11800;
  char* __s21801;
  unsigned long __n1802;
  char* __retval1803;
  __s11800 = v1796;
  __s21801 = v1797;
  __n1802 = v1798;
    unsigned long t1804 = __n1802;
    unsigned long c1805 = 0;
    _Bool c1806 = ((t1804 == c1805)) ? 1 : 0;
    if (c1806) {
      char* t1807 = __s11800;
      __retval1803 = t1807;
      char* t1808 = __retval1803;
      return t1808;
    }
    _Bool r1809 = std____is_constant_evaluated();
    if (r1809) {
        unsigned long __i1810;
        unsigned long c1811 = 0;
        __i1810 = c1811;
        while (1) {
          unsigned long t1813 = __i1810;
          unsigned long t1814 = __n1802;
          _Bool c1815 = ((t1813 < t1814)) ? 1 : 0;
          if (!c1815) break;
          char* t1816 = __s11800;
          unsigned long t1817 = __i1810;
          char* ptr1818 = &(t1816)[t1817];
          unsigned long t1819 = __i1810;
          char* t1820 = __s21801;
          char* ptr1821 = &(t1820)[t1819];
          char* r1822 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1818, ptr1821);
        for_step1812: ;
          unsigned long t1823 = __i1810;
          unsigned long u1824 = t1823 + 1;
          __i1810 = u1824;
        }
      char* t1825 = __s11800;
      __retval1803 = t1825;
      char* t1826 = __retval1803;
      return t1826;
    }
  char* t1827 = __s11800;
  void* cast1828 = (void*)t1827;
  char* t1829 = __s21801;
  void* cast1830 = (void*)t1829;
  unsigned long t1831 = __n1802;
  unsigned long c1832 = 1;
  unsigned long b1833 = t1831 * c1832;
  void* r1834 = memcpy(cast1828, cast1830, b1833);
  char* t1835 = __s11800;
  __retval1803 = t1835;
  char* t1836 = __retval1803;
  return t1836;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1837, char* v1838, unsigned long v1839) {
bb1840:
  char* __s11841;
  char* __s21842;
  unsigned long __n1843;
  char* __retval1844;
  __s11841 = v1837;
  __s21842 = v1838;
  __n1843 = v1839;
    unsigned long t1845 = __n1843;
    unsigned long c1846 = 0;
    _Bool c1847 = ((t1845 == c1846)) ? 1 : 0;
    if (c1847) {
      char* t1848 = __s11841;
      __retval1844 = t1848;
      char* t1849 = __retval1844;
      return t1849;
    }
    _Bool r1850 = std____is_constant_evaluated();
    if (r1850) {
      char* t1851 = __s11841;
      char* t1852 = __s21842;
      unsigned long t1853 = __n1843;
      char* r1854 = __gnu_cxx__char_traits_char___copy(t1851, t1852, t1853);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
      __retval1844 = r1854;
      char* t1855 = __retval1844;
      return t1855;
    }
  char* t1856 = __s11841;
  void* cast1857 = (void*)t1856;
  char* t1858 = __s21842;
  void* cast1859 = (void*)t1858;
  unsigned long t1860 = __n1843;
  void* r1861 = memcpy(cast1857, cast1859, t1860);
  char* cast1862 = (char*)r1861;
  __retval1844 = cast1862;
  char* t1863 = __retval1844;
  return t1863;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1864, char* v1865, unsigned long v1866) {
bb1867:
  char* __d1868;
  char* __s1869;
  unsigned long __n1870;
  __d1868 = v1864;
  __s1869 = v1865;
  __n1870 = v1866;
    unsigned long t1871 = __n1870;
    unsigned long c1872 = 1;
    _Bool c1873 = ((t1871 == c1872)) ? 1 : 0;
    if (c1873) {
      char* t1874 = __d1868;
      char* t1875 = __s1869;
      std__char_traits_char___assign(t1874, t1875);
    } else {
      char* t1876 = __d1868;
      char* t1877 = __s1869;
      unsigned long t1878 = __n1870;
      char* r1879 = std__char_traits_char___copy(t1876, t1877, t1878);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1880) {
bb1881:
  char* __it1882;
  char* __retval1883;
  __it1882 = v1880;
  char* t1884 = __it1882;
  __retval1883 = t1884;
  char* t1885 = __retval1883;
  return t1885;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1886, char* v1887, char* v1888) {
bb1889:
  char* __p1890;
  char* __k11891;
  char* __k21892;
  __p1890 = v1886;
  __k11891 = v1887;
  __k21892 = v1888;
    char* t1893 = __p1890;
    char* t1894 = __k11891;
    char* r1895 = char_const__std____niter_base_char_const__(t1894);
    char* t1896 = __k21892;
    char* t1897 = __k11891;
    long diff1898 = t1896 - t1897;
    unsigned long cast1899 = (unsigned long)diff1898;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1893, r1895, cast1899);
    if (__cir_exc_active) {
      return;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1900) {
bb1901:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1902;
  char* __retval1903;
  this1902 = v1900;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1904 = this1902;
  char* t1905 = t1904->_M_dataplus._M_p;
  __retval1903 = t1905;
  char* t1906 = __retval1903;
  return t1906;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1907, unsigned long v1908) {
bb1909:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1910;
  unsigned long __length1911;
  this1910 = v1907;
  __length1911 = v1908;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1912 = this1910;
  unsigned long t1913 = __length1911;
  t1912->_M_string_length = t1913;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1914, unsigned long v1915) {
bb1916:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1917;
  unsigned long __n1918;
  char ref_tmp01919;
  this1917 = v1914;
  __n1918 = v1915;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1920 = this1917;
  unsigned long t1921 = __n1918;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1920, t1921);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t1922 = __n1918;
  char* r1923 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1920);
  if (__cir_exc_active) {
    return;
  }
  char* ptr1924 = &(r1923)[t1922];
  char c1925 = 0;
  ref_tmp01919 = c1925;
  std__char_traits_char___assign(ptr1924, &ref_tmp01919);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1926) {
bb1927:
  struct _Guard* this1928;
  this1928 = v1926;
  struct _Guard* t1929 = this1928;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1930 = t1929->_M_guarded;
    _Bool cast1931 = (_Bool)t1930;
    if (cast1931) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1932 = t1929->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1932);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1933, char* v1934, char* v1935, struct std__forward_iterator_tag v1936) {
bb1937:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1938;
  char* __beg1939;
  char* __end1940;
  struct std__forward_iterator_tag unnamed1941;
  unsigned long __dnew1942;
  struct _Guard __guard1943;
  this1938 = v1933;
  __beg1939 = v1934;
  __end1940 = v1935;
  unnamed1941 = v1936;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1944 = this1938;
  char* t1945 = __beg1939;
  char* t1946 = __end1940;
  long r1947 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1945, t1946);
  if (__cir_exc_active) {
    return;
  }
  unsigned long cast1948 = (unsigned long)r1947;
  __dnew1942 = cast1948;
    unsigned long t1949 = __dnew1942;
    unsigned long c1950 = 15;
    _Bool c1951 = ((t1949 > c1950)) ? 1 : 0;
    if (c1951) {
      unsigned long c1952 = 0;
      char* r1953 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1944, &__dnew1942, c1952);
      if (__cir_exc_active) {
        return;
      }
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1944, r1953);
      if (__cir_exc_active) {
        return;
      }
      unsigned long t1954 = __dnew1942;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1944, t1954);
      if (__cir_exc_active) {
        return;
      }
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1944);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1943, t1944);
  if (__cir_exc_active) {
    return;
  }
    char* r1955 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1944);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1943);
      }
      return;
    }
    char* t1956 = __beg1939;
    char* t1957 = __end1940;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1955, t1956, t1957);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1943);
      }
      return;
    }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1958 = ((void*)0);
    __guard1943._M_guarded = c1958;
    unsigned long t1959 = __dnew1942;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1944, t1959);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1943);
      }
      return;
    }
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1943);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1960) {
bb1961:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1962;
  this1962 = v1960;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1963 = this1962;
  {
    struct std__allocator_char_* base1964 = (struct std__allocator_char_*)((char *)t1963 + 0);
    std__allocator_char____allocator(base1964);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1965, struct std____new_allocator_char_* v1966) {
bb1967:
  struct std____new_allocator_char_* this1968;
  struct std____new_allocator_char_* unnamed1969;
  this1968 = v1965;
  unnamed1969 = v1966;
  struct std____new_allocator_char_* t1970 = this1968;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1971, struct std__allocator_char_* v1972) {
bb1973:
  struct std__allocator_char_* this1974;
  struct std__allocator_char_* __a1975;
  this1974 = v1971;
  __a1975 = v1972;
  struct std__allocator_char_* t1976 = this1974;
  struct std____new_allocator_char_* base1977 = (struct std____new_allocator_char_*)((char *)t1976 + 0);
  struct std__allocator_char_* t1978 = __a1975;
  struct std____new_allocator_char_* base1979 = (struct std____new_allocator_char_*)((char *)t1978 + 0);
  std____new_allocator_char_____new_allocator(base1977, base1979);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1980) {
bb1981:
  char* __r1982;
  char* __retval1983;
  __r1982 = v1980;
  char* t1984 = __r1982;
  __retval1983 = t1984;
  char* t1985 = __retval1983;
  return t1985;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1986) {
bb1987:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1988;
  char* __retval1989;
  this1988 = v1986;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1990 = this1988;
  char* cast1991 = (char*)&(t1990->field2._M_local_buf);
  char* r1992 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1991);
  __retval1989 = r1992;
  char* t1993 = __retval1989;
  return t1993;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1994) {
bb1995:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1996;
  _Bool __retval1997;
  this1996 = v1994;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1998 = this1996;
    char* r1999 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1998);
    if (__cir_exc_active) {
      _Bool __cir_eh_ret = (_Bool)0;
      return __cir_eh_ret;
    }
    char* r2000 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1998);
    if (__cir_exc_active) {
      _Bool __cir_eh_ret = (_Bool)0;
      return __cir_eh_ret;
    }
    _Bool c2001 = ((r1999 == r2000)) ? 1 : 0;
    if (c2001) {
        unsigned long t2002 = t1998->_M_string_length;
        unsigned long c2003 = 15;
        _Bool c2004 = ((t2002 > c2003)) ? 1 : 0;
        if (c2004) {
          __builtin_unreachable();
        }
      _Bool c2005 = 1;
      __retval1997 = c2005;
      _Bool t2006 = __retval1997;
      return t2006;
    }
  _Bool c2007 = 0;
  __retval1997 = c2007;
  _Bool t2008 = __retval1997;
  return t2008;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v2009, char* v2010, unsigned long v2011) {
bb2012:
  struct std____new_allocator_char_* this2013;
  char* __p2014;
  unsigned long __n2015;
  this2013 = v2009;
  __p2014 = v2010;
  __n2015 = v2011;
  struct std____new_allocator_char_* t2016 = this2013;
    unsigned long c2017 = 1;
    unsigned long c2018 = 16;
    _Bool c2019 = ((c2017 > c2018)) ? 1 : 0;
    if (c2019) {
      char* t2020 = __p2014;
      void* cast2021 = (void*)t2020;
      unsigned long t2022 = __n2015;
      unsigned long c2023 = 1;
      unsigned long b2024 = t2022 * c2023;
      unsigned long c2025 = 1;
      operator_delete_3(cast2021, b2024, c2025);
      return;
    }
  char* t2026 = __p2014;
  void* cast2027 = (void*)t2026;
  unsigned long t2028 = __n2015;
  unsigned long c2029 = 1;
  unsigned long b2030 = t2028 * c2029;
  operator_delete_2(cast2027, b2030);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v2031, char* v2032, unsigned long v2033) {
bb2034:
  struct std__allocator_char_* this2035;
  char* __p2036;
  unsigned long __n2037;
  this2035 = v2031;
  __p2036 = v2032;
  __n2037 = v2033;
  struct std__allocator_char_* t2038 = this2035;
    _Bool r2039 = std____is_constant_evaluated();
    if (r2039) {
      char* t2040 = __p2036;
      void* cast2041 = (void*)t2040;
      operator_delete(cast2041);
      return;
    }
  struct std____new_allocator_char_* base2042 = (struct std____new_allocator_char_*)((char *)t2038 + 0);
  char* t2043 = __p2036;
  unsigned long t2044 = __n2037;
  std____new_allocator_char___deallocate(base2042, t2043, t2044);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v2045, char* v2046, unsigned long v2047) {
bb2048:
  struct std__allocator_char_* __a2049;
  char* __p2050;
  unsigned long __n2051;
  __a2049 = v2045;
  __p2050 = v2046;
  __n2051 = v2047;
  struct std__allocator_char_* t2052 = __a2049;
  char* t2053 = __p2050;
  unsigned long t2054 = __n2051;
  std__allocator_char___deallocate(t2052, t2053, t2054);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2055, unsigned long v2056) {
bb2057:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2058;
  unsigned long __size2059;
  this2058 = v2055;
  __size2059 = v2056;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2060 = this2058;
  struct std__allocator_char_* r2061 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t2060);
  if (__cir_exc_active) {
    return;
  }
  char* r2062 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t2060);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t2063 = __size2059;
  unsigned long c2064 = 1;
  unsigned long b2065 = t2063 + c2064;
  std__allocator_traits_std__allocator_char_____deallocate(r2061, r2062, b2065);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2066) {
bb2067:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2068;
  this2068 = v2066;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2069 = this2068;
    _Bool r2070 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t2069);
    if (__cir_exc_active) {
      return;
    }
    _Bool u2071 = !r2070;
    if (u2071) {
      unsigned long t2072 = t2069->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t2069, t2072);
    }
  return;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v2073) {
bb2074:
  struct std__basic_streambuf_char__std__char_traits_char__* this2075;
  this2075 = v2073;
  struct std__basic_streambuf_char__std__char_traits_char__* t2076 = this2075;
  {
    std__locale___locale(&t2076->_M_buf_locale);
  }
  return;
}

