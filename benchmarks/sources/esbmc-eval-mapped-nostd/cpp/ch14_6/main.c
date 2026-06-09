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
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_filebuf_char__std__char_traits_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; union pthread_mutex_t __field1; struct std____basic_file_char_ _M_file; int __field3; struct __mbstate_t __field4; struct __mbstate_t __field5; struct __mbstate_t __field6; char* __field7; unsigned long __field8; _Bool __field9; _Bool __field10; _Bool __field11; char __field12; char* __field13; char* __field14; _Bool __field15; struct std__codecvt_char__char____mbstate_t_* __field16; char* __field17; long __field18; char* __field19; char* __field20; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__basic_ofstream_char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__ __field0; struct std__basic_filebuf_char__std__char_traits_char__ _M_filebuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base7goodbitE_const __attribute__((aligned(4))) = 0;
int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base3outE_const __attribute__((aligned(4))) = 16;
int _ZNSt8ios_base6binaryE_const __attribute__((aligned(4))) = 4;
char _str[11] = "credit.dat";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cerr __attribute__((aligned(8)));
char _str_1[26] = "File could not be opened.";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[22] = "Enter account number ";
char _str_3[30] = "(1 to 100, 0 to end input)\n? ";
char _str_4[1];
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_5[38] = "Enter lastname, firstname, balance\n? ";
char _str_6[24] = "Enter account number\n? ";
char _str_7[50] = "basic_string: construction from null is not valid";
char _str_8[24] = "basic_string::_M_create";
extern void *_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void std__ios_base__ios_base(struct std__ios_base* p0);
void std__ios_base___ios_base(struct std__ios_base* p0) {}
void std__basic_ios_char__std__char_traits_char_____basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ostream_char__std__char_traits_char_____basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* p0, void** p1);
extern void std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* p0);
extern void std__basic_ios_char__std__char_traits_char_____init(struct std__basic_ios_char__std__char_traits_char__* p0, struct std__basic_streambuf_char__std__char_traits_char__* p1);
extern struct std__basic_filebuf_char__std__char_traits_char__* std__basic_filebuf_char__std__char_traits_char_____open(struct std__basic_filebuf_char__std__char_traits_char__* p0, char* p1, int p2);
int std__operator__3(int p0, int p1);
int std__operator__2(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
void std__basic_ofstream_char__std__char_traits_char_____open(struct std__basic_ofstream_char__std__char_traits_char__* p0, char* p1, int p2);
void std__basic_filebuf_char__std__char_traits_char______basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* p0);
void std__basic_ostream_char__std__char_traits_char______basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ofstream_char__std__char_traits_char_____basic_ofstream(struct std__basic_ofstream_char__std__char_traits_char__* p0, char* p1, int p2);
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
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
extern void ClientData__ClientData(struct ClientData* p0, int p1, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ p3, double p4);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__operator___2(struct std__basic_istream_char__std__char_traits_char__* p0, int* p1);
extern void ClientData__setAccountNumber(struct ClientData* p0, int p1);
extern int ClientData__getAccountNumber___const(struct ClientData* p0);
extern void std____istream_extract(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___15ul__std__basic_istream_char__std__char_traits_char______char_(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1);
long std__ios_base__width(struct std__ios_base* p0, long p1);
struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(struct std__basic_istream_char__std__char_traits_char__* p0, struct std___Setw p1);
struct std___Setw std__setw(int p0);
struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___10ul__std__basic_istream_char__std__char_traits_char______char_(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__std__istream___M_extract_double_(struct std__basic_istream_char__std__char_traits_char__* p0, double* p1);
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* p0, double* p1);
extern void ClientData__setLastName(struct ClientData* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ p1);
extern void ClientData__setFirstName(struct ClientData* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ p1);
extern void ClientData__setBalance(struct ClientData* p0, double p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__seekp(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std__fpos___mbstate_t_ p1);
void std__fpos___mbstate_t___fpos(struct std__fpos___mbstate_t_* p0, long p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__write(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream_2(struct std__basic_ofstream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream(struct std__basic_ofstream_char__std__char_traits_char__* p0);
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

extern unsigned char* _ZTTSt14basic_ofstreamIcSt11char_traitsIcEE[4] __attribute__((aligned(8)));

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

// function: _ZNSoC2Ev
void std__basic_ostream_char__std__char_traits_char_____basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* v14, void** v15) {
bb16:
  struct std__basic_ostream_char__std__char_traits_char__* this17;
  void** vtt18;
  this17 = v14;
  vtt18 = v15;
  struct std__basic_ostream_char__std__char_traits_char__* t19 = this17;
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
  struct std__basic_ostream_char__std__char_traits_char__* cast39 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr38;
  void** v40 = (void**)cast39;
  *(void**)(v40) = (void*)t29;
  void** v41 = (void**)t19;
  void* v42 = *((void**)v41);
  unsigned char* cast43 = (unsigned char*)v42;
  long c44 = -24;
  unsigned char* ptr45 = &(cast43)[c44];
  long* cast46 = (long*)ptr45;
  long t47 = *cast46;
  unsigned char* cast48 = (unsigned char*)t19;
  unsigned char* ptr49 = &(cast48)[t47];
  struct std__basic_ostream_char__std__char_traits_char__* cast50 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr49;
  struct std__basic_ios_char__std__char_traits_char__* cast51 = (struct std__basic_ios_char__std__char_traits_char__*)cast50;
  struct std__basic_streambuf_char__std__char_traits_char__* c52 = ((void*)0);
  std__basic_ios_char__std__char_traits_char_____init(cast51, c52);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZStorSt13_Ios_OpenmodeS_
int std__operator__3(int v53, int v54) {
bb55:
  int __a56;
  int __b57;
  int __retval58;
  __a56 = v53;
  __b57 = v54;
  int t59 = __a56;
  int t60 = __b57;
  int b61 = t59 | t60;
  __retval58 = b61;
  int t62 = __retval58;
  return t62;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v63, int v64) {
bb65:
  int __a66;
  int __b67;
  int __retval68;
  __a66 = v63;
  __b67 = v64;
  int t69 = __a66;
  int t70 = __b67;
  int b71 = t69 | t70;
  __retval68 = b71;
  int t72 = __retval68;
  return t72;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v73) {
bb74:
  struct std__basic_ios_char__std__char_traits_char__* this75;
  int __retval76;
  this75 = v73;
  struct std__basic_ios_char__std__char_traits_char__* t77 = this75;
  struct std__ios_base* base78 = (struct std__ios_base*)((char *)t77 + 0);
  int t79 = base78->_M_streambuf_state;
  __retval76 = t79;
  int t80 = __retval76;
  return t80;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v81, int v82) {
bb83:
  struct std__basic_ios_char__std__char_traits_char__* this84;
  int __state85;
  this84 = v81;
  __state85 = v82;
  struct std__basic_ios_char__std__char_traits_char__* t86 = this84;
  int r87 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t86);
  if (__cir_exc_active) {
    return;
  }
  int t88 = __state85;
  int r89 = std__operator__2(r87, t88);
  std__basic_ios_char__std__char_traits_char_____clear(t86, r89);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode
void std__basic_ofstream_char__std__char_traits_char_____open(struct std__basic_ofstream_char__std__char_traits_char__* v90, char* v91, int v92) {
bb93:
  struct std__basic_ofstream_char__std__char_traits_char__* this94;
  char* __s95;
  int __mode96;
  this94 = v90;
  __s95 = v91;
  __mode96 = v92;
  struct std__basic_ofstream_char__std__char_traits_char__* t97 = this94;
    char* t98 = __s95;
    int t99 = __mode96;
    int t100 = _ZNSt8ios_base3outE_const;
    int r101 = std__operator__3(t99, t100);
    struct std__basic_filebuf_char__std__char_traits_char__* r102 = std__basic_filebuf_char__std__char_traits_char_____open(&t97->_M_filebuf, t98, r101);
    if (__cir_exc_active) {
      return;
    }
    _Bool cast103 = (_Bool)r102;
    _Bool u104 = !cast103;
    if (u104) {
      void** v105 = (void**)t97;
      void* v106 = *((void**)v105);
      unsigned char* cast107 = (unsigned char*)v106;
      long c108 = -24;
      unsigned char* ptr109 = &(cast107)[c108];
      long* cast110 = (long*)ptr109;
      long t111 = *cast110;
      unsigned char* cast112 = (unsigned char*)t97;
      unsigned char* ptr113 = &(cast112)[t111];
      struct std__basic_ofstream_char__std__char_traits_char__* cast114 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr113;
      struct std__basic_ios_char__std__char_traits_char__* cast115 = (struct std__basic_ios_char__std__char_traits_char__*)cast114;
      int t116 = _ZNSt8ios_base7failbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast115, t116);
      if (__cir_exc_active) {
        return;
      }
    } else {
      void** v117 = (void**)t97;
      void* v118 = *((void**)v117);
      unsigned char* cast119 = (unsigned char*)v118;
      long c120 = -24;
      unsigned char* ptr121 = &(cast119)[c120];
      long* cast122 = (long*)ptr121;
      long t123 = *cast122;
      unsigned char* cast124 = (unsigned char*)t97;
      unsigned char* ptr125 = &(cast124)[t123];
      struct std__basic_ofstream_char__std__char_traits_char__* cast126 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr125;
      struct std__basic_ios_char__std__char_traits_char__* cast127 = (struct std__basic_ios_char__std__char_traits_char__*)cast126;
      int t128 = _ZNSt8ios_base7goodbitE_const;
      std__basic_ios_char__std__char_traits_char_____clear(cast127, t128);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt13basic_filebufIcSt11char_traitsIcEED2Ev
void std__basic_filebuf_char__std__char_traits_char______basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* v129) {
bb130:
  struct std__basic_filebuf_char__std__char_traits_char__* this131;
  this131 = v129;
  struct std__basic_filebuf_char__std__char_traits_char__* t132 = this131;
          struct std__basic_filebuf_char__std__char_traits_char__* r134 = std__basic_filebuf_char__std__char_traits_char_____close(t132);
          if (__cir_exc_active) {
            {
              std____basic_file_char______basic_file(&t132->_M_file);
            }
            {
              struct std__basic_streambuf_char__std__char_traits_char__* base135 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t132 + 0);
              std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base135);
            }
            goto cir_try_dispatch133;
          }
        cir_try_dispatch133: ;
        if (__cir_exc_active) {
        {
          int ca_tok136 = 0;
          void* ca_exn137 = (void*)__cir_exc_ptr;
          __cir_exc_active = 0;
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
        }
        }
    {
      std____basic_file_char______basic_file(&t132->_M_file);
    }
  {
    struct std__basic_streambuf_char__std__char_traits_char__* base138 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t132 + 0);
    std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base138);
  }
  return;
}

// function: _ZNSoD2Ev
void std__basic_ostream_char__std__char_traits_char______basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* v139, void** v140) {
bb141:
  struct std__basic_ostream_char__std__char_traits_char__* this142;
  void** vtt143;
  this142 = v139;
  vtt143 = v140;
  struct std__basic_ostream_char__std__char_traits_char__* t144 = this142;
  void** t145 = vtt143;
  return;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEED2Ev
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* v146) {
bb147:
  struct std__basic_ios_char__std__char_traits_char__* this148;
  this148 = v146;
  struct std__basic_ios_char__std__char_traits_char__* t149 = this148;
  {
    struct std__ios_base* base150 = (struct std__ios_base*)((char *)t149 + 0);
    std__ios_base___ios_base(base150);
  }
  return;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode
void std__basic_ofstream_char__std__char_traits_char_____basic_ofstream(struct std__basic_ofstream_char__std__char_traits_char__* v151, char* v152, int v153) {
bb154:
  struct std__basic_ofstream_char__std__char_traits_char__* this155;
  char* __s156;
  int __mode157;
  this155 = v151;
  __s156 = v152;
  __mode157 = v153;
  struct std__basic_ofstream_char__std__char_traits_char__* t158 = this155;
  struct std__basic_ios_char__std__char_traits_char__* base159 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t158 + 248);
  std__basic_ios_char__std__char_traits_char_____basic_ios(base159);
  if (__cir_exc_active) {
    return;
  }
    struct std__basic_ostream_char__std__char_traits_char__* base160 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t158 + 0);
    static void *vtt_slot161 = 0;
    void** vtt162 = (void**)&vtt_slot161;
    std__basic_ostream_char__std__char_traits_char_____basic_ostream(base160, vtt162);
    if (__cir_exc_active) {
      {
        struct std__basic_ios_char__std__char_traits_char__* base163 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t158 + 248);
        std__basic_ios_char__std__char_traits_char______basic_ios(base163);
      }
      return;
    }
      void* v164 = (void*)&_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[3];
      void** v165 = (void**)t158;
      *(void**)(v165) = (void*)v164;
      void* v166 = (void*)&_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[3];
      struct std__basic_ios_char__std__char_traits_char__* base167 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t158 + 248);
      void** v168 = (void**)base167;
      *(void**)(v168) = (void*)v166;
      std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(&t158->_M_filebuf);
      if (__cir_exc_active) {
        {
          struct std__basic_ostream_char__std__char_traits_char__* base169 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t158 + 0);
          static void *vtt_slot170 = 0;
          void** vtt171 = (void**)&vtt_slot170;
          std__basic_ostream_char__std__char_traits_char______basic_ostream(base169, vtt171);
        }
        {
          struct std__basic_ios_char__std__char_traits_char__* base172 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t158 + 248);
          std__basic_ios_char__std__char_traits_char______basic_ios(base172);
        }
        return;
      }
        void** v173 = (void**)t158;
        void* v174 = *((void**)v173);
        unsigned char* cast175 = (unsigned char*)v174;
        long c176 = -24;
        unsigned char* ptr177 = &(cast175)[c176];
        long* cast178 = (long*)ptr177;
        long t179 = *cast178;
        unsigned char* cast180 = (unsigned char*)t158;
        unsigned char* ptr181 = &(cast180)[t179];
        struct std__basic_ofstream_char__std__char_traits_char__* cast182 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr181;
        struct std__basic_ios_char__std__char_traits_char__* cast183 = (struct std__basic_ios_char__std__char_traits_char__*)cast182;
        struct std__basic_streambuf_char__std__char_traits_char__* base184 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)&(t158->_M_filebuf) + 0);
        std__basic_ios_char__std__char_traits_char_____init(cast183, base184);
        if (__cir_exc_active) {
          {
            std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t158->_M_filebuf);
          }
          {
            struct std__basic_ostream_char__std__char_traits_char__* base185 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t158 + 0);
            static void *vtt_slot186 = 0;
            void** vtt187 = (void**)&vtt_slot186;
            std__basic_ostream_char__std__char_traits_char______basic_ostream(base185, vtt187);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base188 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t158 + 248);
            std__basic_ios_char__std__char_traits_char______basic_ios(base188);
          }
          return;
        }
        char* t189 = __s156;
        int t190 = __mode157;
        std__basic_ofstream_char__std__char_traits_char_____open(t158, t189, t190);
        if (__cir_exc_active) {
          {
            std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t158->_M_filebuf);
          }
          {
            struct std__basic_ostream_char__std__char_traits_char__* base191 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t158 + 0);
            static void *vtt_slot192 = 0;
            void** vtt193 = (void**)&vtt_slot192;
            std__basic_ostream_char__std__char_traits_char______basic_ostream(base191, vtt193);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base194 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t158 + 248);
            std__basic_ios_char__std__char_traits_char______basic_ios(base194);
          }
          return;
        }
  return;
}

// function: _ZStanSt12_Ios_IostateS_
int std__operator_(int v195, int v196) {
bb197:
  int __a198;
  int __b199;
  int __retval200;
  __a198 = v195;
  __b199 = v196;
  int t201 = __a198;
  int t202 = __b199;
  int b203 = t201 & t202;
  __retval200 = b203;
  int t204 = __retval200;
  return t204;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE4failEv
_Bool std__basic_ios_char__std__char_traits_char_____fail___const(struct std__basic_ios_char__std__char_traits_char__* v205) {
bb206:
  struct std__basic_ios_char__std__char_traits_char__* this207;
  _Bool __retval208;
  this207 = v205;
  struct std__basic_ios_char__std__char_traits_char__* t209 = this207;
  int r210 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t209);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  int t211 = _ZNSt8ios_base6badbitE_const;
  int t212 = _ZNSt8ios_base7failbitE_const;
  int r213 = std__operator__2(t211, t212);
  int r214 = std__operator_(r210, r213);
  int c215 = 0;
  _Bool c216 = ((r214 != c215)) ? 1 : 0;
  __retval208 = c216;
  _Bool t217 = __retval208;
  return t217;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEEntEv
_Bool std__basic_ios_char__std__char_traits_char_____operator____const(struct std__basic_ios_char__std__char_traits_char__* v218) {
bb219:
  struct std__basic_ios_char__std__char_traits_char__* this220;
  _Bool __retval221;
  this220 = v218;
  struct std__basic_ios_char__std__char_traits_char__* t222 = this220;
  _Bool r223 = std__basic_ios_char__std__char_traits_char_____fail___const(t222);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  __retval221 = r223;
  _Bool t224 = __retval221;
  return t224;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v225, char* v226) {
bb227:
  struct std__basic_ostream_char__std__char_traits_char__* __out228;
  char* __s229;
  struct std__basic_ostream_char__std__char_traits_char__* __retval230;
  __out228 = v225;
  __s229 = v226;
    char* t231 = __s229;
    _Bool cast232 = (_Bool)t231;
    _Bool u233 = !cast232;
    if (u233) {
      struct std__basic_ostream_char__std__char_traits_char__* t234 = __out228;
      void** v235 = (void**)t234;
      void* v236 = *((void**)v235);
      unsigned char* cast237 = (unsigned char*)v236;
      long c238 = -24;
      unsigned char* ptr239 = &(cast237)[c238];
      long* cast240 = (long*)ptr239;
      long t241 = *cast240;
      unsigned char* cast242 = (unsigned char*)t234;
      unsigned char* ptr243 = &(cast242)[t241];
      struct std__basic_ostream_char__std__char_traits_char__* cast244 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr243;
      struct std__basic_ios_char__std__char_traits_char__* cast245 = (struct std__basic_ios_char__std__char_traits_char__*)cast244;
      int t246 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast245, t246);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t247 = __out228;
      char* t248 = __s229;
      char* t249 = __s229;
      unsigned long r250 = std__char_traits_char___length(t249);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast251 = (long)r250;
      struct std__basic_ostream_char__std__char_traits_char__* r252 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t247, t248, cast251);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t253 = __out228;
  __retval230 = t253;
  struct std__basic_ostream_char__std__char_traits_char__* t254 = __retval230;
  return t254;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v255, void* v256) {
bb257:
  struct std__basic_ostream_char__std__char_traits_char__* this258;
  void* __pf259;
  struct std__basic_ostream_char__std__char_traits_char__* __retval260;
  this258 = v255;
  __pf259 = v256;
  struct std__basic_ostream_char__std__char_traits_char__* t261 = this258;
  void* t262 = __pf259;
  struct std__basic_ostream_char__std__char_traits_char__* r263 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t262)(t261);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval260 = r263;
  struct std__basic_ostream_char__std__char_traits_char__* t264 = __retval260;
  return t264;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v265) {
bb266:
  struct std__basic_ostream_char__std__char_traits_char__* __os267;
  struct std__basic_ostream_char__std__char_traits_char__* __retval268;
  __os267 = v265;
  struct std__basic_ostream_char__std__char_traits_char__* t269 = __os267;
  struct std__basic_ostream_char__std__char_traits_char__* r270 = std__ostream__flush(t269);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval268 = r270;
  struct std__basic_ostream_char__std__char_traits_char__* t271 = __retval268;
  return t271;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v272) {
bb273:
  struct std__ctype_char_* __f274;
  struct std__ctype_char_* __retval275;
  __f274 = v272;
    struct std__ctype_char_* t276 = __f274;
    _Bool cast277 = (_Bool)t276;
    _Bool u278 = !cast277;
    if (u278) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t279 = __f274;
  __retval275 = t279;
  struct std__ctype_char_* t280 = __retval275;
  return t280;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v281, char v282) {
bb283:
  struct std__ctype_char_* this284;
  char __c285;
  char __retval286;
  this284 = v281;
  __c285 = v282;
  struct std__ctype_char_* t287 = this284;
    char t288 = t287->_M_widen_ok;
    _Bool cast289 = (_Bool)t288;
    if (cast289) {
      char t290 = __c285;
      unsigned char cast291 = (unsigned char)t290;
      unsigned long cast292 = (unsigned long)cast291;
      char t293 = t287->_M_widen[cast292];
      __retval286 = t293;
      char t294 = __retval286;
      return t294;
    }
  std__ctype_char____M_widen_init___const(t287);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t295 = __c285;
  void** v296 = (void**)t287;
  void* v297 = *((void**)v296);
  char vcall300 = (char)__VERIFIER_virtual_call_char_char(t287, 6, t295);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval286 = vcall300;
  char t301 = __retval286;
  return t301;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v302, char v303) {
bb304:
  struct std__basic_ios_char__std__char_traits_char__* this305;
  char __c306;
  char __retval307;
  this305 = v302;
  __c306 = v303;
  struct std__basic_ios_char__std__char_traits_char__* t308 = this305;
  struct std__ctype_char_* t309 = t308->_M_ctype;
  struct std__ctype_char_* r310 = std__ctype_char__const__std____check_facet_std__ctype_char___(t309);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t311 = __c306;
  char r312 = std__ctype_char___widen_char__const(r310, t311);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval307 = r312;
  char t313 = __retval307;
  return t313;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v314) {
bb315:
  struct std__basic_ostream_char__std__char_traits_char__* __os316;
  struct std__basic_ostream_char__std__char_traits_char__* __retval317;
  __os316 = v314;
  struct std__basic_ostream_char__std__char_traits_char__* t318 = __os316;
  struct std__basic_ostream_char__std__char_traits_char__* t319 = __os316;
  void** v320 = (void**)t319;
  void* v321 = *((void**)v320);
  unsigned char* cast322 = (unsigned char*)v321;
  long c323 = -24;
  unsigned char* ptr324 = &(cast322)[c323];
  long* cast325 = (long*)ptr324;
  long t326 = *cast325;
  unsigned char* cast327 = (unsigned char*)t319;
  unsigned char* ptr328 = &(cast327)[t326];
  struct std__basic_ostream_char__std__char_traits_char__* cast329 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr328;
  struct std__basic_ios_char__std__char_traits_char__* cast330 = (struct std__basic_ios_char__std__char_traits_char__*)cast329;
  char c331 = 10;
  char r332 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast330, c331);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r333 = std__ostream__put(t318, r332);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r334 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r333);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval317 = r334;
  struct std__basic_ostream_char__std__char_traits_char__* t335 = __retval317;
  return t335;
}

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v336) {
bb337:
  struct std__allocator_char_* this338;
  this338 = v336;
  struct std__allocator_char_* t339 = this338;
  struct std____new_allocator_char_* base340 = (struct std____new_allocator_char_*)((char *)t339 + 0);
  std____new_allocator_char_____new_allocator_2(base340);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEPKcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v341, char* v342, struct std__allocator_char_* v343) {
bb344:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this345;
  char* __s346;
  struct std__allocator_char_* __a347;
  char* __end348;
  struct std__forward_iterator_tag agg_tmp0349;
  this345 = v341;
  __s346 = v342;
  __a347 = v343;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t350 = this345;
  char* r351 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t350);
  if (__cir_exc_active) {
    return;
  }
  struct std__allocator_char_* t352 = __a347;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t350->_M_dataplus, r351, t352);
  if (__cir_exc_active) {
    return;
  }
      char* t353 = __s346;
      char* c354 = ((void*)0);
      _Bool c355 = ((t353 == c354)) ? 1 : 0;
      if (c355) {
        char* cast356 = (char*)&(_str_7);
        std____throw_logic_error(cast356);
        if (__cir_exc_active) {
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t350->_M_dataplus);
          }
          return;
        }
      }
    char* t357 = __s346;
    char* t358 = __s346;
    unsigned long r359 = std__char_traits_char___length(t358);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t350->_M_dataplus);
      }
      return;
    }
    char* ptr360 = &(t357)[r359];
    __end348 = ptr360;
    char* t361 = __s346;
    char* t362 = __end348;
    struct std__forward_iterator_tag t363 = agg_tmp0349;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t350, t361, t362, t363);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t350->_M_dataplus);
      }
      return;
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v364) {
bb365:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this366;
  this366 = v364;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t367 = this366;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t367);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t367->_M_dataplus);
      }
      return;
    }
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t367->_M_dataplus);
  }
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v368) {
bb369:
  struct std__allocator_char_* this370;
  this370 = v368;
  struct std__allocator_char_* t371 = this370;
  return;
}

// function: _ZStrsIcSt11char_traitsIcELm15EERSt13basic_istreamIT_T0_ES6_RAT1__S3_
struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___15ul__std__basic_istream_char__std__char_traits_char______char_(struct std__basic_istream_char__std__char_traits_char__* v372, char* v373) {
bb374:
  struct std__basic_istream_char__std__char_traits_char__* __in375;
  char* __s376;
  struct std__basic_istream_char__std__char_traits_char__* __retval377;
  __in375 = v372;
  __s376 = v373;
  struct std__basic_istream_char__std__char_traits_char__* t378 = __in375;
  char* t379 = __s376;
  char* cast380 = (char*)t379;
  long c381 = 15;
  std____istream_extract(t378, cast380, c381);
  if (__cir_exc_active) {
    struct std__basic_istream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_istream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_istream_char__std__char_traits_char__* t382 = __in375;
  __retval377 = t382;
  struct std__basic_istream_char__std__char_traits_char__* t383 = __retval377;
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

// function: _ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_St5_Setw
struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(struct std__basic_istream_char__std__char_traits_char__* v396, struct std___Setw v397) {
bb398:
  struct std__basic_istream_char__std__char_traits_char__* __is399;
  struct std___Setw __f400;
  struct std__basic_istream_char__std__char_traits_char__* __retval401;
  __is399 = v396;
  __f400 = v397;
  struct std__basic_istream_char__std__char_traits_char__* t402 = __is399;
  void** v403 = (void**)t402;
  void* v404 = *((void**)v403);
  unsigned char* cast405 = (unsigned char*)v404;
  long c406 = -24;
  unsigned char* ptr407 = &(cast405)[c406];
  long* cast408 = (long*)ptr407;
  long t409 = *cast408;
  unsigned char* cast410 = (unsigned char*)t402;
  unsigned char* ptr411 = &(cast410)[t409];
  struct std__basic_istream_char__std__char_traits_char__* cast412 = (struct std__basic_istream_char__std__char_traits_char__*)ptr411;
  struct std__ios_base* cast413 = (struct std__ios_base*)cast412;
  int t414 = __f400._M_n;
  long cast415 = (long)t414;
  long r416 = std__ios_base__width(cast413, cast415);
  if (__cir_exc_active) {
    struct std__basic_istream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_istream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_istream_char__std__char_traits_char__* t417 = __is399;
  __retval401 = t417;
  struct std__basic_istream_char__std__char_traits_char__* t418 = __retval401;
  return t418;
}

// function: _ZSt4setwi
struct std___Setw std__setw(int v419) {
bb420:
  int __n421;
  struct std___Setw __retval422;
  __n421 = v419;
  int t423 = __n421;
  __retval422._M_n = t423;
  struct std___Setw t424 = __retval422;
  return t424;
}

// function: _ZStrsIcSt11char_traitsIcELm10EERSt13basic_istreamIT_T0_ES6_RAT1__S3_
struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___10ul__std__basic_istream_char__std__char_traits_char______char_(struct std__basic_istream_char__std__char_traits_char__* v425, char* v426) {
bb427:
  struct std__basic_istream_char__std__char_traits_char__* __in428;
  char* __s429;
  struct std__basic_istream_char__std__char_traits_char__* __retval430;
  __in428 = v425;
  __s429 = v426;
  struct std__basic_istream_char__std__char_traits_char__* t431 = __in428;
  char* t432 = __s429;
  char* cast433 = (char*)t432;
  long c434 = 10;
  std____istream_extract(t431, cast433, c434);
  if (__cir_exc_active) {
    struct std__basic_istream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_istream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_istream_char__std__char_traits_char__* t435 = __in428;
  __retval430 = t435;
  struct std__basic_istream_char__std__char_traits_char__* t436 = __retval430;
  return t436;
}

// function: _ZNSirsERd
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* v437, double* v438) {
bb439:
  struct std__basic_istream_char__std__char_traits_char__* this440;
  double* __f441;
  struct std__basic_istream_char__std__char_traits_char__* __retval442;
  this440 = v437;
  __f441 = v438;
  struct std__basic_istream_char__std__char_traits_char__* t443 = this440;
  double* t444 = __f441;
  struct std__basic_istream_char__std__char_traits_char__* r445 = std__istream__std__istream___M_extract_double_(t443, t444);
  if (__cir_exc_active) {
    struct std__basic_istream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_istream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval442 = r445;
  struct std__basic_istream_char__std__char_traits_char__* t446 = __retval442;
  return t446;
}

// function: _ZNSt4fposI11__mbstate_tEC2El
void std__fpos___mbstate_t___fpos(struct std__fpos___mbstate_t_* v447, long v448) {
bb449:
  struct std__fpos___mbstate_t_* this450;
  long __off451;
  this450 = v447;
  __off451 = v448;
  struct std__fpos___mbstate_t_* t452 = this450;
  long t453 = __off451;
  t452->_M_off = t453;
  struct __mbstate_t c454 = {0};
  t452->_M_state = c454;
  return;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEED2Ev
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream_2(struct std__basic_ofstream_char__std__char_traits_char__* v455, void** v456) {
bb457:
  struct std__basic_ofstream_char__std__char_traits_char__* this458;
  void** vtt459;
  this458 = v455;
  vtt459 = v456;
  struct std__basic_ofstream_char__std__char_traits_char__* t460 = this458;
  void** t461 = vtt459;
    {
      std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t460->_M_filebuf);
    }
  {
    struct std__basic_ostream_char__std__char_traits_char__* base462 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t460 + 0);
    static void *vtt_slot463 = 0;
    void** vtt464 = (void**)&vtt_slot463;
    std__basic_ostream_char__std__char_traits_char______basic_ostream(base462, vtt464);
  }
  return;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream(struct std__basic_ofstream_char__std__char_traits_char__* v465) {
bb466:
  struct std__basic_ofstream_char__std__char_traits_char__* this467;
  this467 = v465;
  struct std__basic_ofstream_char__std__char_traits_char__* t468 = this467;
    static void *vtt_slot469 = 0;
    void** vtt470 = (void**)&vtt_slot469;
    std__basic_ofstream_char__std__char_traits_char______basic_ofstream_2(t468, vtt470);
  {
    struct std__basic_ios_char__std__char_traits_char__* base471 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t468 + 248);
    std__basic_ios_char__std__char_traits_char______basic_ios(base471);
  }
  return;
}

// function: main
int main() {
bb472:
  int __retval473;
  int accountNumber474;
  char lastName475[15];
  char firstName476[10];
  double balance477;
  struct std__basic_ofstream_char__std__char_traits_char__ outCredit478;
  struct ClientData client479;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp0480;
  struct std__allocator_char_ ref_tmp0481;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp1482;
  struct std__allocator_char_ ref_tmp1483;
  int c484 = 0;
  __retval473 = c484;
  char* cast485 = (char*)&(_str);
  int t486 = _ZNSt8ios_base6binaryE_const;
  std__basic_ofstream_char__std__char_traits_char_____basic_ofstream(&outCredit478, cast485, t486);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
      void** v487 = (void**)&(outCredit478);
      void* v488 = *((void**)v487);
      unsigned char* cast489 = (unsigned char*)v488;
      long c490 = -24;
      unsigned char* ptr491 = &(cast489)[c490];
      long* cast492 = (long*)ptr491;
      long t493 = *cast492;
      unsigned char* cast494 = (unsigned char*)&(outCredit478);
      unsigned char* ptr495 = &(cast494)[t493];
      struct std__basic_ofstream_char__std__char_traits_char__* cast496 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr495;
      struct std__basic_ios_char__std__char_traits_char__* cast497 = (struct std__basic_ios_char__std__char_traits_char__*)cast496;
      _Bool r498 = std__basic_ios_char__std__char_traits_char_____operator____const(cast497);
      if (__cir_exc_active) {
        {
          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit478);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      if (r498) {
        char* cast499 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r500 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cerr, cast499);
        if (__cir_exc_active) {
          {
            std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit478);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        struct std__basic_ostream_char__std__char_traits_char__* r501 = std__ostream__operator___std__ostream_____(r500, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        if (__cir_exc_active) {
          {
            std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit478);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        int c502 = 1;
        exit(c502);
      }
    char* cast503 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r504 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast503);
    if (__cir_exc_active) {
      {
        std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit478);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast505 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r506 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r504, cast505);
    if (__cir_exc_active) {
      {
        std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit478);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c507 = 0;
    char* cast508 = (char*)&(_str_4);
    std__allocator_char___allocator_2(&ref_tmp0481);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&agg_tmp0480, cast508, &ref_tmp0481);
      if (__cir_exc_active) {
        {
          std__allocator_char____allocator(&ref_tmp0481);
        }
        {
          std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit478);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
        char* cast509 = (char*)&(_str_4);
        std__allocator_char___allocator_2(&ref_tmp1483);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&agg_tmp1482, cast509, &ref_tmp1483);
          if (__cir_exc_active) {
            {
              std__allocator_char____allocator(&ref_tmp1483);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp0480);
            }
            {
              std__allocator_char____allocator(&ref_tmp0481);
            }
            {
              std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit478);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
            double c510 = 0x0p0;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t511 = agg_tmp0480;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t512 = agg_tmp1482;
            ClientData__ClientData(&client479, c507, t511, t512, c510);
            if (__cir_exc_active) {
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp1482);
              }
              {
                std__allocator_char____allocator(&ref_tmp1483);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp0480);
              }
              {
                std__allocator_char____allocator(&ref_tmp0481);
              }
              {
                std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit478);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp1482);
          }
        {
          std__allocator_char____allocator(&ref_tmp1483);
        }
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp0480);
      }
    {
      std__allocator_char____allocator(&ref_tmp0481);
    }
    struct std__basic_istream_char__std__char_traits_char__* r513 = std__istream__operator___2(&_ZSt3cin, &accountNumber474);
    if (__cir_exc_active) {
      {
        std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit478);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int t514 = accountNumber474;
    ClientData__setAccountNumber(&client479, t514);
    if (__cir_exc_active) {
      {
        std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit478);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      while (1) {
        int r515 = ClientData__getAccountNumber___const(&client479);
        if (__cir_exc_active) {
          {
            std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit478);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        int c516 = 0;
        _Bool c517 = ((r515 > c516)) ? 1 : 0;
        _Bool ternary518;
        if (c517) {
          int r519 = ClientData__getAccountNumber___const(&client479);
          if (__cir_exc_active) {
            {
              std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit478);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int c520 = 100;
          _Bool c521 = ((r519 <= c520)) ? 1 : 0;
          ternary518 = (_Bool)c521;
        } else {
          _Bool c522 = 0;
          ternary518 = (_Bool)c522;
        }
        if (!ternary518) break;
          struct std___Setw agg_tmp2523;
          struct std___Setw agg_tmp3524;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp4525;
          struct std__allocator_char_ ref_tmp2526;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp5527;
          struct std__allocator_char_ ref_tmp3528;
          struct std__fpos___mbstate_t_ agg_tmp6529;
          char* cast530 = (char*)&(_str_5);
          struct std__basic_ostream_char__std__char_traits_char__* r531 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast530);
          if (__cir_exc_active) {
            {
              std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit478);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int c532 = 15;
          struct std___Setw r533 = std__setw(c532);
          if (__cir_exc_active) {
            {
              std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit478);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          agg_tmp2523 = r533;
          struct std___Setw t534 = agg_tmp2523;
          struct std__basic_istream_char__std__char_traits_char__* r535 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(&_ZSt3cin, t534);
          if (__cir_exc_active) {
            {
              std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit478);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          struct std__basic_istream_char__std__char_traits_char__* r536 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___15ul__std__basic_istream_char__std__char_traits_char______char_(r535, lastName475);
          if (__cir_exc_active) {
            {
              std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit478);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int c537 = 10;
          struct std___Setw r538 = std__setw(c537);
          if (__cir_exc_active) {
            {
              std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit478);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          agg_tmp3524 = r538;
          struct std___Setw t539 = agg_tmp3524;
          struct std__basic_istream_char__std__char_traits_char__* r540 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(&_ZSt3cin, t539);
          if (__cir_exc_active) {
            {
              std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit478);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          struct std__basic_istream_char__std__char_traits_char__* r541 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___10ul__std__basic_istream_char__std__char_traits_char______char_(r540, firstName476);
          if (__cir_exc_active) {
            {
              std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit478);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          struct std__basic_istream_char__std__char_traits_char__* r542 = std__istream__operator__(&_ZSt3cin, &balance477);
          if (__cir_exc_active) {
            {
              std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit478);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          char* cast543 = (char*)&(lastName475);
          std__allocator_char___allocator_2(&ref_tmp2526);
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&agg_tmp4525, cast543, &ref_tmp2526);
            if (__cir_exc_active) {
              {
                std__allocator_char____allocator(&ref_tmp2526);
              }
              {
                std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit478);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t544 = agg_tmp4525;
              ClientData__setLastName(&client479, t544);
              if (__cir_exc_active) {
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp4525);
                }
                {
                  std__allocator_char____allocator(&ref_tmp2526);
                }
                {
                  std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit478);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp4525);
            }
          {
            std__allocator_char____allocator(&ref_tmp2526);
          }
          char* cast545 = (char*)&(firstName476);
          std__allocator_char___allocator_2(&ref_tmp3528);
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&agg_tmp5527, cast545, &ref_tmp3528);
            if (__cir_exc_active) {
              {
                std__allocator_char____allocator(&ref_tmp3528);
              }
              {
                std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit478);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t546 = agg_tmp5527;
              ClientData__setFirstName(&client479, t546);
              if (__cir_exc_active) {
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp5527);
                }
                {
                  std__allocator_char____allocator(&ref_tmp3528);
                }
                {
                  std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit478);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&agg_tmp5527);
            }
          {
            std__allocator_char____allocator(&ref_tmp3528);
          }
          double t547 = balance477;
          ClientData__setBalance(&client479, t547);
          if (__cir_exc_active) {
            {
              std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit478);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          struct std__basic_ostream_char__std__char_traits_char__* base548 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(outCredit478) + 0);
          int r549 = ClientData__getAccountNumber___const(&client479);
          if (__cir_exc_active) {
            {
              std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit478);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int c550 = 1;
          int b551 = r549 - c550;
          unsigned long cast552 = (unsigned long)b551;
          unsigned long c553 = 40;
          unsigned long b554 = cast552 * c553;
          long cast555 = (long)b554;
          std__fpos___mbstate_t___fpos(&agg_tmp6529, cast555);
          if (__cir_exc_active) {
            {
              std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit478);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          struct std__fpos___mbstate_t_ t556 = agg_tmp6529;
          struct std__basic_ostream_char__std__char_traits_char__* r557 = std__ostream__seekp(base548, t556);
          if (__cir_exc_active) {
            {
              std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit478);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          struct std__basic_ostream_char__std__char_traits_char__* base558 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(outCredit478) + 0);
          char* cast559 = (char*)&(client479);
          long c560 = 40;
          struct std__basic_ostream_char__std__char_traits_char__* r561 = std__ostream__write(base558, cast559, c560);
          if (__cir_exc_active) {
            {
              std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit478);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          char* cast562 = (char*)&(_str_6);
          struct std__basic_ostream_char__std__char_traits_char__* r563 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast562);
          if (__cir_exc_active) {
            {
              std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit478);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          struct std__basic_istream_char__std__char_traits_char__* r564 = std__istream__operator___2(&_ZSt3cin, &accountNumber474);
          if (__cir_exc_active) {
            {
              std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit478);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int t565 = accountNumber474;
          ClientData__setAccountNumber(&client479, t565);
          if (__cir_exc_active) {
            {
              std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit478);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
      }
    int c566 = 0;
    __retval473 = c566;
    int t567 = __retval473;
    int ret_val568 = t567;
    {
      std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&outCredit478);
    }
    return ret_val568;
  int t569 = __retval473;
  return t569;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v570) {
bb571:
  struct std____new_allocator_char_* this572;
  this572 = v570;
  struct std____new_allocator_char_* t573 = this572;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v574) {
bb575:
  char* __r576;
  char* __retval577;
  __r576 = v574;
  char* t578 = __r576;
  __retval577 = t578;
  char* t579 = __retval577;
  return t579;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v580) {
bb581:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this582;
  char* __retval583;
  this582 = v580;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t584 = this582;
  char* cast585 = (char*)&(t584->field2._M_local_buf);
  char* r586 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast585);
  __retval583 = r586;
  char* t587 = __retval583;
  return t587;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v588, char* v589, struct std__allocator_char_* v590) {
bb591:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this592;
  char* __dat593;
  struct std__allocator_char_* __a594;
  this592 = v588;
  __dat593 = v589;
  __a594 = v590;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t595 = this592;
  struct std__allocator_char_* base596 = (struct std__allocator_char_*)((char *)t595 + 0);
  struct std__allocator_char_* t597 = __a594;
  std__allocator_char___allocator(base596, t597);
    char* t598 = __dat593;
    t595->_M_p = t598;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb599:
  _Bool __retval600;
    _Bool c601 = 0;
    __retval600 = c601;
    _Bool t602 = __retval600;
    return t602;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v603, char* v604) {
bb605:
  char* __c1606;
  char* __c2607;
  _Bool __retval608;
  __c1606 = v603;
  __c2607 = v604;
  char* t609 = __c1606;
  char t610 = *t609;
  int cast611 = (int)t610;
  char* t612 = __c2607;
  char t613 = *t612;
  int cast614 = (int)t613;
  _Bool c615 = ((cast611 == cast614)) ? 1 : 0;
  __retval608 = c615;
  _Bool t616 = __retval608;
  return t616;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v617) {
bb618:
  char* __p619;
  unsigned long __retval620;
  unsigned long __i621;
  __p619 = v617;
  unsigned long c622 = 0;
  __i621 = c622;
    char ref_tmp0623;
    while (1) {
      unsigned long t624 = __i621;
      char* t625 = __p619;
      char* ptr626 = &(t625)[t624];
      char c627 = 0;
      ref_tmp0623 = c627;
      _Bool r628 = __gnu_cxx__char_traits_char___eq(ptr626, &ref_tmp0623);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u629 = !r628;
      if (!u629) break;
      unsigned long t630 = __i621;
      unsigned long u631 = t630 + 1;
      __i621 = u631;
    }
  unsigned long t632 = __i621;
  __retval620 = t632;
  unsigned long t633 = __retval620;
  return t633;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v634) {
bb635:
  char* __s636;
  unsigned long __retval637;
  __s636 = v634;
    _Bool r638 = std____is_constant_evaluated();
    if (r638) {
      char* t639 = __s636;
      unsigned long r640 = __gnu_cxx__char_traits_char___length(t639);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval637 = r640;
      unsigned long t641 = __retval637;
      return t641;
    }
  char* t642 = __s636;
  unsigned long r643 = strlen(t642);
  __retval637 = r643;
  unsigned long t644 = __retval637;
  return t644;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v645, char* v646, struct std__random_access_iterator_tag v647) {
bb648:
  char* __first649;
  char* __last650;
  struct std__random_access_iterator_tag unnamed651;
  long __retval652;
  __first649 = v645;
  __last650 = v646;
  unnamed651 = v647;
  char* t653 = __last650;
  char* t654 = __first649;
  long diff655 = t653 - t654;
  __retval652 = diff655;
  long t656 = __retval652;
  return t656;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v657) {
bb658:
  char** unnamed659;
  struct std__random_access_iterator_tag __retval660;
  unnamed659 = v657;
  struct std__random_access_iterator_tag t661 = __retval660;
  return t661;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v662, char* v663) {
bb664:
  char* __first665;
  char* __last666;
  long __retval667;
  struct std__random_access_iterator_tag agg_tmp0668;
  __first665 = v662;
  __last666 = v663;
  char* t669 = __first665;
  char* t670 = __last666;
  struct std__random_access_iterator_tag r671 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first665);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp0668 = r671;
  struct std__random_access_iterator_tag t672 = agg_tmp0668;
  long r673 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t669, t670, t672);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval667 = r673;
  long t674 = __retval667;
  return t674;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v675, char* v676) {
bb677:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this678;
  char* __p679;
  this678 = v675;
  __p679 = v676;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t680 = this678;
  char* t681 = __p679;
  t680->_M_dataplus._M_p = t681;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v682) {
bb683:
  struct std__allocator_char_* __a684;
  unsigned long __retval685;
  __a684 = v682;
  unsigned long c686 = -1;
  unsigned long c687 = 1;
  unsigned long b688 = c686 / c687;
  __retval685 = b688;
  unsigned long t689 = __retval685;
  return t689;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v690) {
bb691:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this692;
  struct std__allocator_char_* __retval693;
  this692 = v690;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t694 = this692;
  struct std__allocator_char_* base695 = (struct std__allocator_char_*)((char *)&(t694->_M_dataplus) + 0);
  __retval693 = base695;
  struct std__allocator_char_* t696 = __retval693;
  return t696;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v697, unsigned long* v698) {
bb699:
  unsigned long* __a700;
  unsigned long* __b701;
  unsigned long* __retval702;
  __a700 = v697;
  __b701 = v698;
    unsigned long* t703 = __b701;
    unsigned long t704 = *t703;
    unsigned long* t705 = __a700;
    unsigned long t706 = *t705;
    _Bool c707 = ((t704 < t706)) ? 1 : 0;
    if (c707) {
      unsigned long* t708 = __b701;
      __retval702 = t708;
      unsigned long* t709 = __retval702;
      return t709;
    }
  unsigned long* t710 = __a700;
  __retval702 = t710;
  unsigned long* t711 = __retval702;
  return t711;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v712) {
bb713:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this714;
  unsigned long __retval715;
  unsigned long __diffmax716;
  unsigned long __allocmax717;
  this714 = v712;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t718 = this714;
  unsigned long c719 = 9223372036854775807;
  __diffmax716 = c719;
  struct std__allocator_char_* r720 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t718);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long r721 = std__allocator_traits_std__allocator_char_____max_size(r720);
  __allocmax717 = r721;
  unsigned long* r722 = unsigned_long_const__std__min_unsigned_long_(&__diffmax716, &__allocmax717);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t723 = *r722;
  unsigned long c724 = 1;
  unsigned long b725 = t723 - c724;
  __retval715 = b725;
  unsigned long t726 = __retval715;
  return t726;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v727) {
bb728:
  struct std____new_allocator_char_* this729;
  unsigned long __retval730;
  this729 = v727;
  struct std____new_allocator_char_* t731 = this729;
  unsigned long c732 = 9223372036854775807;
  unsigned long c733 = 1;
  unsigned long b734 = c732 / c733;
  __retval730 = b734;
  unsigned long t735 = __retval730;
  return t735;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v736, unsigned long v737, void* v738) {
bb739:
  struct std____new_allocator_char_* this740;
  unsigned long __n741;
  void* unnamed742;
  char* __retval743;
  this740 = v736;
  __n741 = v737;
  unnamed742 = v738;
  struct std____new_allocator_char_* t744 = this740;
    unsigned long t745 = __n741;
    unsigned long r746 = std____new_allocator_char____M_max_size___const(t744);
    _Bool c747 = ((t745 > r746)) ? 1 : 0;
    if (c747) {
        unsigned long t748 = __n741;
        unsigned long c749 = -1;
        unsigned long c750 = 1;
        unsigned long b751 = c749 / c750;
        _Bool c752 = ((t748 > b751)) ? 1 : 0;
        if (c752) {
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
    unsigned long c753 = 1;
    unsigned long c754 = 16;
    _Bool c755 = ((c753 > c754)) ? 1 : 0;
    if (c755) {
      unsigned long __al756;
      unsigned long c757 = 1;
      __al756 = c757;
      unsigned long t758 = __n741;
      unsigned long c759 = 1;
      unsigned long b760 = t758 * c759;
      unsigned long t761 = __al756;
      void* r762 = operator_new_2(b760, t761);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
      char* cast763 = (char*)r762;
      __retval743 = cast763;
      char* t764 = __retval743;
      return t764;
    }
  unsigned long t765 = __n741;
  unsigned long c766 = 1;
  unsigned long b767 = t765 * c766;
  void* r768 = operator_new(b767);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  char* cast769 = (char*)r768;
  __retval743 = cast769;
  char* t770 = __retval743;
  return t770;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v771, unsigned long v772) {
bb773:
  struct std__allocator_char_* this774;
  unsigned long __n775;
  char* __retval776;
  this774 = v771;
  __n775 = v772;
  struct std__allocator_char_* t777 = this774;
    _Bool r778 = std____is_constant_evaluated();
    if (r778) {
        unsigned long t779 = __n775;
        unsigned long c780 = 1;
        unsigned long ovr781;
        _Bool ovf782 = __builtin_mul_overflow(t779, c780, &ovr781);
        __n775 = ovr781;
        if (ovf782) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            char* __cir_eh_ret = (char*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t783 = __n775;
      void* r784 = operator_new(t783);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
      char* cast785 = (char*)r784;
      __retval776 = cast785;
      char* t786 = __retval776;
      return t786;
    }
  struct std____new_allocator_char_* base787 = (struct std____new_allocator_char_*)((char *)t777 + 0);
  unsigned long t788 = __n775;
  void* c789 = ((void*)0);
  char* r790 = std____new_allocator_char___allocate(base787, t788, c789);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __retval776 = r790;
  char* t791 = __retval776;
  return t791;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v792, unsigned long v793) {
bb794:
  struct std__allocator_char_* __a795;
  unsigned long __n796;
  char* __retval797;
  __a795 = v792;
  __n796 = v793;
  struct std__allocator_char_* t798 = __a795;
  unsigned long t799 = __n796;
  char* r800 = std__allocator_char___allocate(t798, t799);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __retval797 = r800;
  char* t801 = __retval797;
  return t801;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v802, unsigned long v803) {
bb804:
  struct std__allocator_char_* __a805;
  unsigned long __n806;
  char* __retval807;
  char* __p808;
  __a805 = v802;
  __n806 = v803;
  struct std__allocator_char_* t809 = __a805;
  unsigned long t810 = __n806;
  char* r811 = std__allocator_traits_std__allocator_char_____allocate(t809, t810);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __p808 = r811;
  char* t812 = __p808;
  __retval807 = t812;
  char* t813 = __retval807;
  return t813;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v814) {
bb815:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this816;
  struct std__allocator_char_* __retval817;
  this816 = v814;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t818 = this816;
  struct std__allocator_char_* base819 = (struct std__allocator_char_*)((char *)&(t818->_M_dataplus) + 0);
  __retval817 = base819;
  struct std__allocator_char_* t820 = __retval817;
  return t820;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v821, unsigned long* v822, unsigned long v823) {
bb824:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this825;
  unsigned long* __capacity826;
  unsigned long __old_capacity827;
  char* __retval828;
  this825 = v821;
  __capacity826 = v822;
  __old_capacity827 = v823;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t829 = this825;
    unsigned long* t830 = __capacity826;
    unsigned long t831 = *t830;
    unsigned long r832 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t829);
    _Bool c833 = ((t831 > r832)) ? 1 : 0;
    if (c833) {
      char* cast834 = (char*)&(_str_8);
      std____throw_length_error(cast834);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
    }
    unsigned long* t835 = __capacity826;
    unsigned long t836 = *t835;
    unsigned long t837 = __old_capacity827;
    _Bool c838 = ((t836 > t837)) ? 1 : 0;
    _Bool ternary839;
    if (c838) {
      unsigned long* t840 = __capacity826;
      unsigned long t841 = *t840;
      unsigned long c842 = 2;
      unsigned long t843 = __old_capacity827;
      unsigned long b844 = c842 * t843;
      _Bool c845 = ((t841 < b844)) ? 1 : 0;
      ternary839 = (_Bool)c845;
    } else {
      _Bool c846 = 0;
      ternary839 = (_Bool)c846;
    }
    if (ternary839) {
      unsigned long c847 = 2;
      unsigned long t848 = __old_capacity827;
      unsigned long b849 = c847 * t848;
      unsigned long* t850 = __capacity826;
      *t850 = b849;
        unsigned long* t851 = __capacity826;
        unsigned long t852 = *t851;
        unsigned long r853 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t829);
        _Bool c854 = ((t852 > r853)) ? 1 : 0;
        if (c854) {
          unsigned long r855 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t829);
          unsigned long* t856 = __capacity826;
          *t856 = r855;
        }
    }
  struct std__allocator_char_* r857 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t829);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  unsigned long* t858 = __capacity826;
  unsigned long t859 = *t858;
  unsigned long c860 = 1;
  unsigned long b861 = t859 + c860;
  char* r862 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r857, b861);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __retval828 = r862;
  char* t863 = __retval828;
  return t863;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v864, unsigned long v865) {
bb866:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this867;
  unsigned long __capacity868;
  this867 = v864;
  __capacity868 = v865;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t869 = this867;
  unsigned long t870 = __capacity868;
  t869->field2._M_allocated_capacity = t870;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb871:
  _Bool __retval872;
    _Bool c873 = 0;
    __retval872 = c873;
    _Bool t874 = __retval872;
    return t874;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v875) {
bb876:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this877;
  this877 = v875;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t878 = this877;
    _Bool r879 = std__is_constant_evaluated();
    if (r879) {
        unsigned long __i880;
        unsigned long c881 = 0;
        __i880 = c881;
        while (1) {
          unsigned long t883 = __i880;
          unsigned long c884 = 15;
          _Bool c885 = ((t883 <= c884)) ? 1 : 0;
          if (!c885) break;
          char c886 = 0;
          unsigned long t887 = __i880;
          t878->field2._M_local_buf[t887] = c886;
        for_step882: ;
          unsigned long t888 = __i880;
          unsigned long u889 = t888 + 1;
          __i880 = u889;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v890, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v891) {
bb892:
  struct _Guard* this893;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s894;
  this893 = v890;
  __s894 = v891;
  struct _Guard* t895 = this893;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t896 = __s894;
  t895->_M_guarded = t896;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v897, char* v898) {
bb899:
  char* __location900;
  char* __args901;
  char* __retval902;
  void* __loc903;
  __location900 = v897;
  __args901 = v898;
  char* t904 = __location900;
  void* cast905 = (void*)t904;
  __loc903 = cast905;
    void* t906 = __loc903;
    char* cast907 = (char*)t906;
    char* t908 = __args901;
    char t909 = *t908;
    *cast907 = t909;
    __retval902 = cast907;
    char* t910 = __retval902;
    return t910;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v911, char* v912) {
bb913:
  char* __c1914;
  char* __c2915;
  __c1914 = v911;
  __c2915 = v912;
    _Bool r916 = std____is_constant_evaluated();
    if (r916) {
      char* t917 = __c1914;
      char* t918 = __c2915;
      char* r919 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t917, t918);
    } else {
      char* t920 = __c2915;
      char t921 = *t920;
      char* t922 = __c1914;
      *t922 = t921;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v923, char* v924, unsigned long v925) {
bb926:
  char* __s1927;
  char* __s2928;
  unsigned long __n929;
  char* __retval930;
  __s1927 = v923;
  __s2928 = v924;
  __n929 = v925;
    unsigned long t931 = __n929;
    unsigned long c932 = 0;
    _Bool c933 = ((t931 == c932)) ? 1 : 0;
    if (c933) {
      char* t934 = __s1927;
      __retval930 = t934;
      char* t935 = __retval930;
      return t935;
    }
    _Bool r936 = std____is_constant_evaluated();
    if (r936) {
        unsigned long __i937;
        unsigned long c938 = 0;
        __i937 = c938;
        while (1) {
          unsigned long t940 = __i937;
          unsigned long t941 = __n929;
          _Bool c942 = ((t940 < t941)) ? 1 : 0;
          if (!c942) break;
          char* t943 = __s1927;
          unsigned long t944 = __i937;
          char* ptr945 = &(t943)[t944];
          unsigned long t946 = __i937;
          char* t947 = __s2928;
          char* ptr948 = &(t947)[t946];
          char* r949 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr945, ptr948);
        for_step939: ;
          unsigned long t950 = __i937;
          unsigned long u951 = t950 + 1;
          __i937 = u951;
        }
      char* t952 = __s1927;
      __retval930 = t952;
      char* t953 = __retval930;
      return t953;
    }
  char* t954 = __s1927;
  void* cast955 = (void*)t954;
  char* t956 = __s2928;
  void* cast957 = (void*)t956;
  unsigned long t958 = __n929;
  unsigned long c959 = 1;
  unsigned long b960 = t958 * c959;
  void* r961 = memcpy(cast955, cast957, b960);
  char* t962 = __s1927;
  __retval930 = t962;
  char* t963 = __retval930;
  return t963;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v964, char* v965, unsigned long v966) {
bb967:
  char* __s1968;
  char* __s2969;
  unsigned long __n970;
  char* __retval971;
  __s1968 = v964;
  __s2969 = v965;
  __n970 = v966;
    unsigned long t972 = __n970;
    unsigned long c973 = 0;
    _Bool c974 = ((t972 == c973)) ? 1 : 0;
    if (c974) {
      char* t975 = __s1968;
      __retval971 = t975;
      char* t976 = __retval971;
      return t976;
    }
    _Bool r977 = std____is_constant_evaluated();
    if (r977) {
      char* t978 = __s1968;
      char* t979 = __s2969;
      unsigned long t980 = __n970;
      char* r981 = __gnu_cxx__char_traits_char___copy(t978, t979, t980);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
      __retval971 = r981;
      char* t982 = __retval971;
      return t982;
    }
  char* t983 = __s1968;
  void* cast984 = (void*)t983;
  char* t985 = __s2969;
  void* cast986 = (void*)t985;
  unsigned long t987 = __n970;
  void* r988 = memcpy(cast984, cast986, t987);
  char* cast989 = (char*)r988;
  __retval971 = cast989;
  char* t990 = __retval971;
  return t990;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v991, char* v992, unsigned long v993) {
bb994:
  char* __d995;
  char* __s996;
  unsigned long __n997;
  __d995 = v991;
  __s996 = v992;
  __n997 = v993;
    unsigned long t998 = __n997;
    unsigned long c999 = 1;
    _Bool c1000 = ((t998 == c999)) ? 1 : 0;
    if (c1000) {
      char* t1001 = __d995;
      char* t1002 = __s996;
      std__char_traits_char___assign(t1001, t1002);
    } else {
      char* t1003 = __d995;
      char* t1004 = __s996;
      unsigned long t1005 = __n997;
      char* r1006 = std__char_traits_char___copy(t1003, t1004, t1005);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1007) {
bb1008:
  char* __it1009;
  char* __retval1010;
  __it1009 = v1007;
  char* t1011 = __it1009;
  __retval1010 = t1011;
  char* t1012 = __retval1010;
  return t1012;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1013, char* v1014, char* v1015) {
bb1016:
  char* __p1017;
  char* __k11018;
  char* __k21019;
  __p1017 = v1013;
  __k11018 = v1014;
  __k21019 = v1015;
    char* t1020 = __p1017;
    char* t1021 = __k11018;
    char* r1022 = char_const__std____niter_base_char_const__(t1021);
    char* t1023 = __k21019;
    char* t1024 = __k11018;
    long diff1025 = t1023 - t1024;
    unsigned long cast1026 = (unsigned long)diff1025;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1020, r1022, cast1026);
    if (__cir_exc_active) {
      return;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1027) {
bb1028:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1029;
  char* __retval1030;
  this1029 = v1027;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1031 = this1029;
  char* t1032 = t1031->_M_dataplus._M_p;
  __retval1030 = t1032;
  char* t1033 = __retval1030;
  return t1033;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1034, unsigned long v1035) {
bb1036:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1037;
  unsigned long __length1038;
  this1037 = v1034;
  __length1038 = v1035;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1039 = this1037;
  unsigned long t1040 = __length1038;
  t1039->_M_string_length = t1040;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1041, unsigned long v1042) {
bb1043:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1044;
  unsigned long __n1045;
  char ref_tmp01046;
  this1044 = v1041;
  __n1045 = v1042;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1047 = this1044;
  unsigned long t1048 = __n1045;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1047, t1048);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t1049 = __n1045;
  char* r1050 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1047);
  if (__cir_exc_active) {
    return;
  }
  char* ptr1051 = &(r1050)[t1049];
  char c1052 = 0;
  ref_tmp01046 = c1052;
  std__char_traits_char___assign(ptr1051, &ref_tmp01046);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1053) {
bb1054:
  struct _Guard* this1055;
  this1055 = v1053;
  struct _Guard* t1056 = this1055;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1057 = t1056->_M_guarded;
    _Bool cast1058 = (_Bool)t1057;
    if (cast1058) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1059 = t1056->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1059);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1060, char* v1061, char* v1062, struct std__forward_iterator_tag v1063) {
bb1064:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1065;
  char* __beg1066;
  char* __end1067;
  struct std__forward_iterator_tag unnamed1068;
  unsigned long __dnew1069;
  struct _Guard __guard1070;
  this1065 = v1060;
  __beg1066 = v1061;
  __end1067 = v1062;
  unnamed1068 = v1063;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1071 = this1065;
  char* t1072 = __beg1066;
  char* t1073 = __end1067;
  long r1074 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1072, t1073);
  if (__cir_exc_active) {
    return;
  }
  unsigned long cast1075 = (unsigned long)r1074;
  __dnew1069 = cast1075;
    unsigned long t1076 = __dnew1069;
    unsigned long c1077 = 15;
    _Bool c1078 = ((t1076 > c1077)) ? 1 : 0;
    if (c1078) {
      unsigned long c1079 = 0;
      char* r1080 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1071, &__dnew1069, c1079);
      if (__cir_exc_active) {
        return;
      }
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1071, r1080);
      if (__cir_exc_active) {
        return;
      }
      unsigned long t1081 = __dnew1069;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1071, t1081);
      if (__cir_exc_active) {
        return;
      }
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1071);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1070, t1071);
  if (__cir_exc_active) {
    return;
  }
    char* r1082 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1071);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1070);
      }
      return;
    }
    char* t1083 = __beg1066;
    char* t1084 = __end1067;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1082, t1083, t1084);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1070);
      }
      return;
    }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1085 = ((void*)0);
    __guard1070._M_guarded = c1085;
    unsigned long t1086 = __dnew1069;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1071, t1086);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1070);
      }
      return;
    }
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1070);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1087) {
bb1088:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1089;
  this1089 = v1087;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1090 = this1089;
  {
    struct std__allocator_char_* base1091 = (struct std__allocator_char_*)((char *)t1090 + 0);
    std__allocator_char____allocator(base1091);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1092, struct std____new_allocator_char_* v1093) {
bb1094:
  struct std____new_allocator_char_* this1095;
  struct std____new_allocator_char_* unnamed1096;
  this1095 = v1092;
  unnamed1096 = v1093;
  struct std____new_allocator_char_* t1097 = this1095;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1098, struct std__allocator_char_* v1099) {
bb1100:
  struct std__allocator_char_* this1101;
  struct std__allocator_char_* __a1102;
  this1101 = v1098;
  __a1102 = v1099;
  struct std__allocator_char_* t1103 = this1101;
  struct std____new_allocator_char_* base1104 = (struct std____new_allocator_char_*)((char *)t1103 + 0);
  struct std__allocator_char_* t1105 = __a1102;
  struct std____new_allocator_char_* base1106 = (struct std____new_allocator_char_*)((char *)t1105 + 0);
  std____new_allocator_char_____new_allocator(base1104, base1106);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1107) {
bb1108:
  char* __r1109;
  char* __retval1110;
  __r1109 = v1107;
  char* t1111 = __r1109;
  __retval1110 = t1111;
  char* t1112 = __retval1110;
  return t1112;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1113) {
bb1114:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1115;
  char* __retval1116;
  this1115 = v1113;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1117 = this1115;
  char* cast1118 = (char*)&(t1117->field2._M_local_buf);
  char* r1119 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1118);
  __retval1116 = r1119;
  char* t1120 = __retval1116;
  return t1120;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1121) {
bb1122:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1123;
  _Bool __retval1124;
  this1123 = v1121;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1125 = this1123;
    char* r1126 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1125);
    if (__cir_exc_active) {
      _Bool __cir_eh_ret = (_Bool)0;
      return __cir_eh_ret;
    }
    char* r1127 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1125);
    if (__cir_exc_active) {
      _Bool __cir_eh_ret = (_Bool)0;
      return __cir_eh_ret;
    }
    _Bool c1128 = ((r1126 == r1127)) ? 1 : 0;
    if (c1128) {
        unsigned long t1129 = t1125->_M_string_length;
        unsigned long c1130 = 15;
        _Bool c1131 = ((t1129 > c1130)) ? 1 : 0;
        if (c1131) {
          __builtin_unreachable();
        }
      _Bool c1132 = 1;
      __retval1124 = c1132;
      _Bool t1133 = __retval1124;
      return t1133;
    }
  _Bool c1134 = 0;
  __retval1124 = c1134;
  _Bool t1135 = __retval1124;
  return t1135;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1136, char* v1137, unsigned long v1138) {
bb1139:
  struct std____new_allocator_char_* this1140;
  char* __p1141;
  unsigned long __n1142;
  this1140 = v1136;
  __p1141 = v1137;
  __n1142 = v1138;
  struct std____new_allocator_char_* t1143 = this1140;
    unsigned long c1144 = 1;
    unsigned long c1145 = 16;
    _Bool c1146 = ((c1144 > c1145)) ? 1 : 0;
    if (c1146) {
      char* t1147 = __p1141;
      void* cast1148 = (void*)t1147;
      unsigned long t1149 = __n1142;
      unsigned long c1150 = 1;
      unsigned long b1151 = t1149 * c1150;
      unsigned long c1152 = 1;
      operator_delete_3(cast1148, b1151, c1152);
      return;
    }
  char* t1153 = __p1141;
  void* cast1154 = (void*)t1153;
  unsigned long t1155 = __n1142;
  unsigned long c1156 = 1;
  unsigned long b1157 = t1155 * c1156;
  operator_delete_2(cast1154, b1157);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1158, char* v1159, unsigned long v1160) {
bb1161:
  struct std__allocator_char_* this1162;
  char* __p1163;
  unsigned long __n1164;
  this1162 = v1158;
  __p1163 = v1159;
  __n1164 = v1160;
  struct std__allocator_char_* t1165 = this1162;
    _Bool r1166 = std____is_constant_evaluated();
    if (r1166) {
      char* t1167 = __p1163;
      void* cast1168 = (void*)t1167;
      operator_delete(cast1168);
      return;
    }
  struct std____new_allocator_char_* base1169 = (struct std____new_allocator_char_*)((char *)t1165 + 0);
  char* t1170 = __p1163;
  unsigned long t1171 = __n1164;
  std____new_allocator_char___deallocate(base1169, t1170, t1171);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1172, char* v1173, unsigned long v1174) {
bb1175:
  struct std__allocator_char_* __a1176;
  char* __p1177;
  unsigned long __n1178;
  __a1176 = v1172;
  __p1177 = v1173;
  __n1178 = v1174;
  struct std__allocator_char_* t1179 = __a1176;
  char* t1180 = __p1177;
  unsigned long t1181 = __n1178;
  std__allocator_char___deallocate(t1179, t1180, t1181);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1182, unsigned long v1183) {
bb1184:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1185;
  unsigned long __size1186;
  this1185 = v1182;
  __size1186 = v1183;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1187 = this1185;
  struct std__allocator_char_* r1188 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1187);
  if (__cir_exc_active) {
    return;
  }
  char* r1189 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1187);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t1190 = __size1186;
  unsigned long c1191 = 1;
  unsigned long b1192 = t1190 + c1191;
  std__allocator_traits_std__allocator_char_____deallocate(r1188, r1189, b1192);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1193) {
bb1194:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1195;
  this1195 = v1193;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1196 = this1195;
    _Bool r1197 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1196);
    if (__cir_exc_active) {
      return;
    }
    _Bool u1198 = !r1197;
    if (u1198) {
      unsigned long t1199 = t1196->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1196, t1199);
    }
  return;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v1200) {
bb1201:
  struct std__basic_streambuf_char__std__char_traits_char__* this1202;
  this1202 = v1200;
  struct std__basic_streambuf_char__std__char_traits_char__* t1203 = this1202;
  {
    std__locale___locale(&t1203->_M_buf_locale);
  }
  return;
}

