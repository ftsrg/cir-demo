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
struct _Guard { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* _M_guarded; };
struct _IO_FILE { int __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; char* __field7; char* __field8; char* __field9; char* __field10; char* __field11; struct _IO_marker* __field12; struct _IO_FILE* __field13; int __field14; unsigned char __field15[3]; char __field16[1]; long __field17; unsigned short __field18; char __field19; char __field20[1]; void* __field21; long __field22; struct _IO_codecvt* __field23; struct _IO_wide_data* __field24; struct _IO_FILE* __field25; void* __field26; struct _IO_FILE** __field27; int __field28; int __field29; unsigned long __field30; char __field31[8]; };
struct _IO_codecvt { unsigned char __placeholder; };
struct _IO_marker { unsigned char __placeholder; };
struct _IO_wide_data { unsigned char __placeholder; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct __pthread_internal_list { struct __pthread_internal_list* __field0; struct __pthread_internal_list* __field1; };
struct __pthread_mutex_s { int __field0; unsigned int __field1; int __field2; unsigned int __field3; int __field4; short __field5; short __field6; struct __pthread_internal_list __field7; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
union anon_1 { unsigned int __field0; char __field1[4]; };
struct anon_struct_0 { unsigned char* __field0[5]; unsigned char* __field1[5]; };
struct anon_struct_1 { unsigned char* __field0[4]; };
union pthread_mutex_t { struct __pthread_mutex_s __field0; char __field1[40]; long __field2; };
struct std____basic_file_char_ { struct _IO_FILE* __field0; _Bool __field1; unsigned char __field2[7]; } __attribute__((packed));
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__less_const_char___ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct __mbstate_t { int __field0; union anon_1 __field1; };
struct std____codecvt_abstract_base_char__char____mbstate_t_ { struct std__locale__facet __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale _M_buf_locale; };
struct std__codecvt_char__char____mbstate_t_ { struct std____codecvt_abstract_base_char__char____mbstate_t_ __field0; struct __locale_struct* __field1; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_filebuf_char__std__char_traits_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; union pthread_mutex_t __field1; struct std____basic_file_char_ _M_file; int __field3; struct __mbstate_t __field4; struct __mbstate_t __field5; struct __mbstate_t __field6; char* __field7; unsigned long __field8; _Bool __field9; _Bool __field10; _Bool __field11; char __field12; char* __field13; char* __field14; _Bool __field15; struct std__codecvt_char__char____mbstate_t_* __field16; char* __field17; long __field18; char* __field19; char* __field20; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long _M_gcount; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__basic_ifstream_char__std__char_traits_char__ { struct std__basic_istream_char__std__char_traits_char__ __field0; struct std__basic_filebuf_char__std__char_traits_char__ _M_filebuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
char __const_main_price[50];
char __const_main_isbn[50];
char __const_main_year[50];
char __const_main_book[50];
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base7goodbitE_const __attribute__((aligned(4))) = 0;
int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base2inE_const __attribute__((aligned(4))) = 8;
char _str[1];
char _str_1[12] = "catalog.txt";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cerr __attribute__((aligned(8)));
char _str_2[25] = "Could not open database.";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[43] = "<center><br/>Books available for sale<br/>";
char _str_4[39] = "<a href=\"/cgi-bin/logout.cgi\">Sign Out";
char _str_5[15] = "</a><br/><br/>";
char _str_6[40] = "<table border = \"1\" cellpadding = \"7\" >";
char _str_7[5] = "<tr>";
char _str_8[5] = "<td>";
char _str_9[6] = "</td>";
char _str_10[25] = "<td><form method=\"post\" ";
char _str_11[32] = "action=\"/cgi-bin/viewcart.cgi\">";
char _str_12[32] = "<input type=\"hidden\" name=\"add\"";
char _str_13[15] = "value=\"true\"/>";
char _str_14[33] = "<input type=\"hidden\" name=\"isbn\"";
char _str_15[8] = "value=\"";
char _str_16[4] = "\"/>";
char _str_17[21] = "<input type=\"submit\"";
char _str_18[15] = "value=\"Buy\"/>\n";
char _str_19[14] = "</form></td>\n";
char _str_20[7] = "</tr>\n";
char _str_21[32] = "</table></center></body></html>";
char _str_22[26] = "Content-type: text/html\n\n";
char _str_23[24] = "<?xml version = \"1.0\"?>";
char _str_24[46] = "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 ";
char _str_25[47] = "Transitional//EN\" \"http://www.w3.org/TR/xhtml1";
char _str_26[31] = "/DTD/xhtml1-transitional.dtd\">";
char _str_27[46] = "<html xmlns = \"http://www.w3.org/1999/xhtml\">";
char _str_28[39] = "<head><title>Login Page</title></head>";
char _str_29[7] = "<body>";
char _str_30[50] = "basic_string: construction from null is not valid";
char _str_31[24] = "basic_string::_M_create";
char _str_32[25] = "basic_string::_M_replace";
extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
extern void std__ios_base__ios_base(struct std__ios_base* p0);
void std__ios_base___ios_base(struct std__ios_base* p0) {}
void std__basic_ios_char__std__char_traits_char_____basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_istream_char__std__char_traits_char_____basic_istream(struct std__basic_istream_char__std__char_traits_char__* p0, void** p1);
extern void std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* p0);
extern void std__basic_ios_char__std__char_traits_char_____init(struct std__basic_ios_char__std__char_traits_char__* p0, struct std__basic_streambuf_char__std__char_traits_char__* p1);
extern struct std__basic_filebuf_char__std__char_traits_char__* std__basic_filebuf_char__std__char_traits_char_____open(struct std__basic_filebuf_char__std__char_traits_char__* p0, char* p1, int p2);
int std__operator__3(int p0, int p1);
int std__operator__2(int p0, int p1);
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
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
extern void exit(int p0);
void header();
_Bool std__basic_ios_char__std__char_traits_char_____operator_bool___const(struct std__basic_ios_char__std__char_traits_char__* p0);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__getline_2(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1, long p2, char p3);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_istream_char__std__char_traits_char__* std__istream__getline(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1, long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* p0, char* p1, char* p2);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void __gnu_cxx__char_traits_char___assign(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___move(char* p0, char* p1, unsigned long p2);
extern void* memmove(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, char* p3, unsigned long p4, unsigned long p5);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream_2(struct std__basic_ifstream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
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

extern unsigned char* _ZTTSt14basic_ifstreamIcSt11char_traitsIcEE[4] __attribute__((aligned(8)));

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v0) {
bb1:
  struct std__allocator_char_* this2;
  this2 = v0;
  struct std__allocator_char_* t3 = this2;
  struct std____new_allocator_char_* base4 = (struct std____new_allocator_char_*)((char *)t3 + 0);
  std____new_allocator_char_____new_allocator_2(base4);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEPKcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v5, char* v6, struct std__allocator_char_* v7) {
bb8:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this9;
  char* __s10;
  struct std__allocator_char_* __a11;
  char* __end12;
  struct std__forward_iterator_tag agg_tmp013;
  this9 = v5;
  __s10 = v6;
  __a11 = v7;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t14 = this9;
  char* r15 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t14);
  if (__cir_exc_active) {
    return;
  }
  struct std__allocator_char_* t16 = __a11;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t14->_M_dataplus, r15, t16);
  if (__cir_exc_active) {
    return;
  }
      char* t17 = __s10;
      char* c18 = ((void*)0);
      _Bool c19 = ((t17 == c18)) ? 1 : 0;
      if (c19) {
        char* cast20 = (char*)&(_str_30);
        std____throw_logic_error(cast20);
        if (__cir_exc_active) {
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t14->_M_dataplus);
          }
          return;
        }
      }
    char* t21 = __s10;
    char* t22 = __s10;
    unsigned long r23 = std__char_traits_char___length(t22);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t14->_M_dataplus);
      }
      return;
    }
    char* ptr24 = &(t21)[r23];
    __end12 = ptr24;
    char* t25 = __s10;
    char* t26 = __end12;
    struct std__forward_iterator_tag t27 = agg_tmp013;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t14, t25, t26, t27);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t14->_M_dataplus);
      }
      return;
    }
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v28) {
bb29:
  struct std__allocator_char_* this30;
  this30 = v28;
  struct std__allocator_char_* t31 = this30;
  return;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEEC2Ev
void std__basic_ios_char__std__char_traits_char_____basic_ios(struct std__basic_ios_char__std__char_traits_char__* v32) {
bb33:
  struct std__basic_ios_char__std__char_traits_char__* this34;
  this34 = v32;
  struct std__basic_ios_char__std__char_traits_char__* t35 = this34;
  struct std__ios_base* base36 = (struct std__ios_base*)((char *)t35 + 0);
  std__ios_base__ios_base(base36);
    void* v37 = (void*)&_ZTVSt9basic_iosIcSt11char_traitsIcEE[2];
    void** v38 = (void**)t35;
    *(void**)(v38) = (void*)v37;
    struct std__basic_ostream_char__std__char_traits_char__* c39 = ((void*)0);
    t35->_M_tie = c39;
    char c40 = 0;
    t35->_M_fill = c40;
    _Bool c41 = 0;
    t35->_M_fill_init = c41;
    struct std__basic_streambuf_char__std__char_traits_char__* c42 = ((void*)0);
    t35->_M_streambuf = c42;
    struct std__ctype_char_* c43 = ((void*)0);
    t35->_M_ctype = c43;
    struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* c44 = ((void*)0);
    t35->_M_num_put = c44;
    struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* c45 = ((void*)0);
    t35->_M_num_get = c45;
  return;
}

// function: _ZNSiC2Ev
void std__basic_istream_char__std__char_traits_char_____basic_istream(struct std__basic_istream_char__std__char_traits_char__* v46, void** v47) {
bb48:
  struct std__basic_istream_char__std__char_traits_char__* this49;
  void** vtt50;
  this49 = v46;
  vtt50 = v47;
  struct std__basic_istream_char__std__char_traits_char__* t51 = this49;
  void** t52 = vtt50;
  static void *vtt_slot53 = 0;
  void** vtt54 = (void**)&vtt_slot53;
  void** cast55 = (void**)vtt54;
  void* t56 = *cast55;
  void** v57 = (void**)t51;
  *(void**)(v57) = (void*)t56;
  static void *vtt_slot58 = 0;
  void** vtt59 = (void**)&vtt_slot58;
  void** cast60 = (void**)vtt59;
  void* t61 = *cast60;
  void** v62 = (void**)t51;
  void* v63 = *((void**)v62);
  unsigned char* cast64 = (unsigned char*)v63;
  long c65 = -24;
  unsigned char* ptr66 = &(cast64)[c65];
  long* cast67 = (long*)ptr66;
  long t68 = *cast67;
  unsigned char* cast69 = (unsigned char*)t51;
  unsigned char* ptr70 = &(cast69)[t68];
  struct std__basic_istream_char__std__char_traits_char__* cast71 = (struct std__basic_istream_char__std__char_traits_char__*)ptr70;
  void** v72 = (void**)cast71;
  *(void**)(v72) = (void*)t61;
  long c73 = 0;
  t51->_M_gcount = c73;
  void** v74 = (void**)t51;
  void* v75 = *((void**)v74);
  unsigned char* cast76 = (unsigned char*)v75;
  long c77 = -24;
  unsigned char* ptr78 = &(cast76)[c77];
  long* cast79 = (long*)ptr78;
  long t80 = *cast79;
  unsigned char* cast81 = (unsigned char*)t51;
  unsigned char* ptr82 = &(cast81)[t80];
  struct std__basic_istream_char__std__char_traits_char__* cast83 = (struct std__basic_istream_char__std__char_traits_char__*)ptr82;
  struct std__basic_ios_char__std__char_traits_char__* cast84 = (struct std__basic_ios_char__std__char_traits_char__*)cast83;
  struct std__basic_streambuf_char__std__char_traits_char__* c85 = ((void*)0);
  std__basic_ios_char__std__char_traits_char_____init(cast84, c85);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZStorSt13_Ios_OpenmodeS_
int std__operator__3(int v86, int v87) {
bb88:
  int __a89;
  int __b90;
  int __retval91;
  __a89 = v86;
  __b90 = v87;
  int t92 = __a89;
  int t93 = __b90;
  int b94 = t92 | t93;
  __retval91 = b94;
  int t95 = __retval91;
  return t95;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v96, int v97) {
bb98:
  int __a99;
  int __b100;
  int __retval101;
  __a99 = v96;
  __b100 = v97;
  int t102 = __a99;
  int t103 = __b100;
  int b104 = t102 | t103;
  __retval101 = b104;
  int t105 = __retval101;
  return t105;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v106) {
bb107:
  struct std__basic_ios_char__std__char_traits_char__* this108;
  int __retval109;
  this108 = v106;
  struct std__basic_ios_char__std__char_traits_char__* t110 = this108;
  struct std__ios_base* base111 = (struct std__ios_base*)((char *)t110 + 0);
  int t112 = base111->_M_streambuf_state;
  __retval109 = t112;
  int t113 = __retval109;
  return t113;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v114, int v115) {
bb116:
  struct std__basic_ios_char__std__char_traits_char__* this117;
  int __state118;
  this117 = v114;
  __state118 = v115;
  struct std__basic_ios_char__std__char_traits_char__* t119 = this117;
  int r120 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t119);
  if (__cir_exc_active) {
    return;
  }
  int t121 = __state118;
  int r122 = std__operator__2(r120, t121);
  std__basic_ios_char__std__char_traits_char_____clear(t119, r122);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode
void std__basic_ifstream_char__std__char_traits_char_____open(struct std__basic_ifstream_char__std__char_traits_char__* v123, char* v124, int v125) {
bb126:
  struct std__basic_ifstream_char__std__char_traits_char__* this127;
  char* __s128;
  int __mode129;
  this127 = v123;
  __s128 = v124;
  __mode129 = v125;
  struct std__basic_ifstream_char__std__char_traits_char__* t130 = this127;
    char* t131 = __s128;
    int t132 = __mode129;
    int t133 = _ZNSt8ios_base2inE_const;
    int r134 = std__operator__3(t132, t133);
    struct std__basic_filebuf_char__std__char_traits_char__* r135 = std__basic_filebuf_char__std__char_traits_char_____open(&t130->_M_filebuf, t131, r134);
    if (__cir_exc_active) {
      return;
    }
    _Bool cast136 = (_Bool)r135;
    _Bool u137 = !cast136;
    if (u137) {
      void** v138 = (void**)t130;
      void* v139 = *((void**)v138);
      unsigned char* cast140 = (unsigned char*)v139;
      long c141 = -24;
      unsigned char* ptr142 = &(cast140)[c141];
      long* cast143 = (long*)ptr142;
      long t144 = *cast143;
      unsigned char* cast145 = (unsigned char*)t130;
      unsigned char* ptr146 = &(cast145)[t144];
      struct std__basic_ifstream_char__std__char_traits_char__* cast147 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr146;
      struct std__basic_ios_char__std__char_traits_char__* cast148 = (struct std__basic_ios_char__std__char_traits_char__*)cast147;
      int t149 = _ZNSt8ios_base7failbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast148, t149);
      if (__cir_exc_active) {
        return;
      }
    } else {
      void** v150 = (void**)t130;
      void* v151 = *((void**)v150);
      unsigned char* cast152 = (unsigned char*)v151;
      long c153 = -24;
      unsigned char* ptr154 = &(cast152)[c153];
      long* cast155 = (long*)ptr154;
      long t156 = *cast155;
      unsigned char* cast157 = (unsigned char*)t130;
      unsigned char* ptr158 = &(cast157)[t156];
      struct std__basic_ifstream_char__std__char_traits_char__* cast159 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr158;
      struct std__basic_ios_char__std__char_traits_char__* cast160 = (struct std__basic_ios_char__std__char_traits_char__*)cast159;
      int t161 = _ZNSt8ios_base7goodbitE_const;
      std__basic_ios_char__std__char_traits_char_____clear(cast160, t161);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt13basic_filebufIcSt11char_traitsIcEED2Ev
void std__basic_filebuf_char__std__char_traits_char______basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* v162) {
bb163:
  struct std__basic_filebuf_char__std__char_traits_char__* this164;
  this164 = v162;
  struct std__basic_filebuf_char__std__char_traits_char__* t165 = this164;
          struct std__basic_filebuf_char__std__char_traits_char__* r167 = std__basic_filebuf_char__std__char_traits_char_____close(t165);
          if (__cir_exc_active) {
            {
              std____basic_file_char______basic_file(&t165->_M_file);
            }
            {
              struct std__basic_streambuf_char__std__char_traits_char__* base168 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t165 + 0);
              std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base168);
            }
            goto cir_try_dispatch166;
          }
        cir_try_dispatch166: ;
        if (__cir_exc_active) {
        {
          int ca_tok169 = 0;
          void* ca_exn170 = (void*)__cir_exc_ptr;
          __cir_exc_active = 0;
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
        }
        }
    {
      std____basic_file_char______basic_file(&t165->_M_file);
    }
  {
    struct std__basic_streambuf_char__std__char_traits_char__* base171 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t165 + 0);
    std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base171);
  }
  return;
}

// function: _ZNSiD2Ev
void std__basic_istream_char__std__char_traits_char______basic_istream(struct std__basic_istream_char__std__char_traits_char__* v172, void** v173) {
bb174:
  struct std__basic_istream_char__std__char_traits_char__* this175;
  void** vtt176;
  this175 = v172;
  vtt176 = v173;
  struct std__basic_istream_char__std__char_traits_char__* t177 = this175;
  void** t178 = vtt176;
  long c179 = 0;
  t177->_M_gcount = c179;
  return;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEED2Ev
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* v180) {
bb181:
  struct std__basic_ios_char__std__char_traits_char__* this182;
  this182 = v180;
  struct std__basic_ios_char__std__char_traits_char__* t183 = this182;
  {
    struct std__ios_base* base184 = (struct std__ios_base*)((char *)t183 + 0);
    std__ios_base___ios_base(base184);
  }
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode
void std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* v185, char* v186, int v187) {
bb188:
  struct std__basic_ifstream_char__std__char_traits_char__* this189;
  char* __s190;
  int __mode191;
  this189 = v185;
  __s190 = v186;
  __mode191 = v187;
  struct std__basic_ifstream_char__std__char_traits_char__* t192 = this189;
  struct std__basic_ios_char__std__char_traits_char__* base193 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t192 + 256);
  std__basic_ios_char__std__char_traits_char_____basic_ios(base193);
  if (__cir_exc_active) {
    return;
  }
    struct std__basic_istream_char__std__char_traits_char__* base194 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t192 + 0);
    static void *vtt_slot195 = 0;
    void** vtt196 = (void**)&vtt_slot195;
    std__basic_istream_char__std__char_traits_char_____basic_istream(base194, vtt196);
    if (__cir_exc_active) {
      {
        struct std__basic_ios_char__std__char_traits_char__* base197 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t192 + 256);
        std__basic_ios_char__std__char_traits_char______basic_ios(base197);
      }
      return;
    }
      void* v198 = (void*)&_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[3];
      void** v199 = (void**)t192;
      *(void**)(v199) = (void*)v198;
      void* v200 = (void*)&_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[3];
      struct std__basic_ios_char__std__char_traits_char__* base201 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t192 + 256);
      void** v202 = (void**)base201;
      *(void**)(v202) = (void*)v200;
      std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(&t192->_M_filebuf);
      if (__cir_exc_active) {
        {
          struct std__basic_istream_char__std__char_traits_char__* base203 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t192 + 0);
          static void *vtt_slot204 = 0;
          void** vtt205 = (void**)&vtt_slot204;
          std__basic_istream_char__std__char_traits_char______basic_istream(base203, vtt205);
        }
        {
          struct std__basic_ios_char__std__char_traits_char__* base206 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t192 + 256);
          std__basic_ios_char__std__char_traits_char______basic_ios(base206);
        }
        return;
      }
        void** v207 = (void**)t192;
        void* v208 = *((void**)v207);
        unsigned char* cast209 = (unsigned char*)v208;
        long c210 = -24;
        unsigned char* ptr211 = &(cast209)[c210];
        long* cast212 = (long*)ptr211;
        long t213 = *cast212;
        unsigned char* cast214 = (unsigned char*)t192;
        unsigned char* ptr215 = &(cast214)[t213];
        struct std__basic_ifstream_char__std__char_traits_char__* cast216 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr215;
        struct std__basic_ios_char__std__char_traits_char__* cast217 = (struct std__basic_ios_char__std__char_traits_char__*)cast216;
        struct std__basic_streambuf_char__std__char_traits_char__* base218 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)&(t192->_M_filebuf) + 0);
        std__basic_ios_char__std__char_traits_char_____init(cast217, base218);
        if (__cir_exc_active) {
          {
            std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t192->_M_filebuf);
          }
          {
            struct std__basic_istream_char__std__char_traits_char__* base219 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t192 + 0);
            static void *vtt_slot220 = 0;
            void** vtt221 = (void**)&vtt_slot220;
            std__basic_istream_char__std__char_traits_char______basic_istream(base219, vtt221);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base222 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t192 + 256);
            std__basic_ios_char__std__char_traits_char______basic_ios(base222);
          }
          return;
        }
        char* t223 = __s190;
        int t224 = __mode191;
        std__basic_ifstream_char__std__char_traits_char_____open(t192, t223, t224);
        if (__cir_exc_active) {
          {
            std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t192->_M_filebuf);
          }
          {
            struct std__basic_istream_char__std__char_traits_char__* base225 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t192 + 0);
            static void *vtt_slot226 = 0;
            void** vtt227 = (void**)&vtt_slot226;
            std__basic_istream_char__std__char_traits_char______basic_istream(base225, vtt227);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base228 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t192 + 256);
            std__basic_ios_char__std__char_traits_char______basic_ios(base228);
          }
          return;
        }
  return;
}

// function: _ZStanSt12_Ios_IostateS_
int std__operator_(int v229, int v230) {
bb231:
  int __a232;
  int __b233;
  int __retval234;
  __a232 = v229;
  __b233 = v230;
  int t235 = __a232;
  int t236 = __b233;
  int b237 = t235 & t236;
  __retval234 = b237;
  int t238 = __retval234;
  return t238;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE4failEv
_Bool std__basic_ios_char__std__char_traits_char_____fail___const(struct std__basic_ios_char__std__char_traits_char__* v239) {
bb240:
  struct std__basic_ios_char__std__char_traits_char__* this241;
  _Bool __retval242;
  this241 = v239;
  struct std__basic_ios_char__std__char_traits_char__* t243 = this241;
  int r244 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t243);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  int t245 = _ZNSt8ios_base6badbitE_const;
  int t246 = _ZNSt8ios_base7failbitE_const;
  int r247 = std__operator__2(t245, t246);
  int r248 = std__operator_(r244, r247);
  int c249 = 0;
  _Bool c250 = ((r248 != c249)) ? 1 : 0;
  __retval242 = c250;
  _Bool t251 = __retval242;
  return t251;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEEntEv
_Bool std__basic_ios_char__std__char_traits_char_____operator____const(struct std__basic_ios_char__std__char_traits_char__* v252) {
bb253:
  struct std__basic_ios_char__std__char_traits_char__* this254;
  _Bool __retval255;
  this254 = v252;
  struct std__basic_ios_char__std__char_traits_char__* t256 = this254;
  _Bool r257 = std__basic_ios_char__std__char_traits_char_____fail___const(t256);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  __retval255 = r257;
  _Bool t258 = __retval255;
  return t258;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v259, char* v260) {
bb261:
  struct std__basic_ostream_char__std__char_traits_char__* __out262;
  char* __s263;
  struct std__basic_ostream_char__std__char_traits_char__* __retval264;
  __out262 = v259;
  __s263 = v260;
    char* t265 = __s263;
    _Bool cast266 = (_Bool)t265;
    _Bool u267 = !cast266;
    if (u267) {
      struct std__basic_ostream_char__std__char_traits_char__* t268 = __out262;
      void** v269 = (void**)t268;
      void* v270 = *((void**)v269);
      unsigned char* cast271 = (unsigned char*)v270;
      long c272 = -24;
      unsigned char* ptr273 = &(cast271)[c272];
      long* cast274 = (long*)ptr273;
      long t275 = *cast274;
      unsigned char* cast276 = (unsigned char*)t268;
      unsigned char* ptr277 = &(cast276)[t275];
      struct std__basic_ostream_char__std__char_traits_char__* cast278 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr277;
      struct std__basic_ios_char__std__char_traits_char__* cast279 = (struct std__basic_ios_char__std__char_traits_char__*)cast278;
      int t280 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast279, t280);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t281 = __out262;
      char* t282 = __s263;
      char* t283 = __s263;
      unsigned long r284 = std__char_traits_char___length(t283);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast285 = (long)r284;
      struct std__basic_ostream_char__std__char_traits_char__* r286 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t281, t282, cast285);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t287 = __out262;
  __retval264 = t287;
  struct std__basic_ostream_char__std__char_traits_char__* t288 = __retval264;
  return t288;
}

// function: _Z6headerv
void header() {
bb289:
  char* cast290 = (char*)&(_str_22);
  struct std__basic_ostream_char__std__char_traits_char__* r291 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast290);
  if (__cir_exc_active) {
    return;
  }
  char* cast292 = (char*)&(_str_23);
  struct std__basic_ostream_char__std__char_traits_char__* r293 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast292);
  if (__cir_exc_active) {
    return;
  }
  char* cast294 = (char*)&(_str_24);
  struct std__basic_ostream_char__std__char_traits_char__* r295 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r293, cast294);
  if (__cir_exc_active) {
    return;
  }
  char* cast296 = (char*)&(_str_25);
  struct std__basic_ostream_char__std__char_traits_char__* r297 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r295, cast296);
  if (__cir_exc_active) {
    return;
  }
  char* cast298 = (char*)&(_str_26);
  struct std__basic_ostream_char__std__char_traits_char__* r299 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r297, cast298);
  if (__cir_exc_active) {
    return;
  }
  char* cast300 = (char*)&(_str_27);
  struct std__basic_ostream_char__std__char_traits_char__* r301 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast300);
  if (__cir_exc_active) {
    return;
  }
  char* cast302 = (char*)&(_str_28);
  struct std__basic_ostream_char__std__char_traits_char__* r303 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r301, cast302);
  if (__cir_exc_active) {
    return;
  }
  char* cast304 = (char*)&(_str_29);
  struct std__basic_ostream_char__std__char_traits_char__* r305 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r303, cast304);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEEcvbEv
_Bool std__basic_ios_char__std__char_traits_char_____operator_bool___const(struct std__basic_ios_char__std__char_traits_char__* v306) {
bb307:
  struct std__basic_ios_char__std__char_traits_char__* this308;
  _Bool __retval309;
  this308 = v306;
  struct std__basic_ios_char__std__char_traits_char__* t310 = this308;
  _Bool r311 = std__basic_ios_char__std__char_traits_char_____fail___const(t310);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  _Bool u312 = !r311;
  __retval309 = u312;
  _Bool t313 = __retval309;
  return t313;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v314) {
bb315:
  struct std__ctype_char_* __f316;
  struct std__ctype_char_* __retval317;
  __f316 = v314;
    struct std__ctype_char_* t318 = __f316;
    _Bool cast319 = (_Bool)t318;
    _Bool u320 = !cast319;
    if (u320) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t321 = __f316;
  __retval317 = t321;
  struct std__ctype_char_* t322 = __retval317;
  return t322;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v323, char v324) {
bb325:
  struct std__ctype_char_* this326;
  char __c327;
  char __retval328;
  this326 = v323;
  __c327 = v324;
  struct std__ctype_char_* t329 = this326;
    char t330 = t329->_M_widen_ok;
    _Bool cast331 = (_Bool)t330;
    if (cast331) {
      char t332 = __c327;
      unsigned char cast333 = (unsigned char)t332;
      unsigned long cast334 = (unsigned long)cast333;
      char t335 = t329->_M_widen[cast334];
      __retval328 = t335;
      char t336 = __retval328;
      return t336;
    }
  std__ctype_char____M_widen_init___const(t329);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t337 = __c327;
  void** v338 = (void**)t329;
  void* v339 = *((void**)v338);
  char vcall342 = (char)__VERIFIER_virtual_call_char_char(t329, 6, t337);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval328 = vcall342;
  char t343 = __retval328;
  return t343;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v344, char v345) {
bb346:
  struct std__basic_ios_char__std__char_traits_char__* this347;
  char __c348;
  char __retval349;
  this347 = v344;
  __c348 = v345;
  struct std__basic_ios_char__std__char_traits_char__* t350 = this347;
  struct std__ctype_char_* t351 = t350->_M_ctype;
  struct std__ctype_char_* r352 = std__ctype_char__const__std____check_facet_std__ctype_char___(t351);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t353 = __c348;
  char r354 = std__ctype_char___widen_char__const(r352, t353);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval349 = r354;
  char t355 = __retval349;
  return t355;
}

// function: _ZNSi7getlineEPcl
struct std__basic_istream_char__std__char_traits_char__* std__istream__getline(struct std__basic_istream_char__std__char_traits_char__* v356, char* v357, long v358) {
bb359:
  struct std__basic_istream_char__std__char_traits_char__* this360;
  char* __s361;
  long __n362;
  struct std__basic_istream_char__std__char_traits_char__* __retval363;
  this360 = v356;
  __s361 = v357;
  __n362 = v358;
  struct std__basic_istream_char__std__char_traits_char__* t364 = this360;
  char* t365 = __s361;
  long t366 = __n362;
  void** v367 = (void**)t364;
  void* v368 = *((void**)v367);
  unsigned char* cast369 = (unsigned char*)v368;
  long c370 = -24;
  unsigned char* ptr371 = &(cast369)[c370];
  long* cast372 = (long*)ptr371;
  long t373 = *cast372;
  unsigned char* cast374 = (unsigned char*)t364;
  unsigned char* ptr375 = &(cast374)[t373];
  struct std__basic_istream_char__std__char_traits_char__* cast376 = (struct std__basic_istream_char__std__char_traits_char__*)ptr375;
  struct std__basic_ios_char__std__char_traits_char__* cast377 = (struct std__basic_ios_char__std__char_traits_char__*)cast376;
  char c378 = 10;
  char r379 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast377, c378);
  if (__cir_exc_active) {
    struct std__basic_istream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_istream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_istream_char__std__char_traits_char__* r380 = std__istream__getline_2(t364, t365, t366, r379);
  if (__cir_exc_active) {
    struct std__basic_istream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_istream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval363 = r380;
  struct std__basic_istream_char__std__char_traits_char__* t381 = __retval363;
  return t381;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v382, unsigned long v383, unsigned long v384, char* v385) {
bb386:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this387;
  unsigned long __n1388;
  unsigned long __n2389;
  char* __s390;
  this387 = v382;
  __n1388 = v383;
  __n2389 = v384;
  __s390 = v385;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t391 = this387;
    unsigned long r392 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t391);
    unsigned long r393 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t391);
    unsigned long t394 = __n1388;
    unsigned long b395 = r393 - t394;
    unsigned long b396 = r392 - b395;
    unsigned long t397 = __n2389;
    _Bool c398 = ((b396 < t397)) ? 1 : 0;
    if (c398) {
      char* t399 = __s390;
      std____throw_length_error(t399);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v400) {
bb401:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this402;
  unsigned long __retval403;
  unsigned long __sz404;
  this402 = v400;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t405 = this402;
  _Bool r406 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t405);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long ternary407;
  if (r406) {
    unsigned long c408 = 15;
    ternary407 = (unsigned long)c408;
  } else {
    unsigned long t409 = t405->field2._M_allocated_capacity;
    ternary407 = (unsigned long)t409;
  }
  __sz404 = ternary407;
    unsigned long t410 = __sz404;
    unsigned long c411 = 15;
    _Bool c412 = ((t410 < c411)) ? 1 : 0;
    _Bool ternary413;
    if (c412) {
      _Bool c414 = 1;
      ternary413 = (_Bool)c414;
    } else {
      unsigned long t415 = __sz404;
      unsigned long r416 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t405);
      _Bool c417 = ((t415 > r416)) ? 1 : 0;
      ternary413 = (_Bool)c417;
    }
    if (ternary413) {
      __builtin_unreachable();
    }
  unsigned long t418 = __sz404;
  __retval403 = t418;
  unsigned long t419 = __retval403;
  return t419;
}

// function: _ZNKSt4lessIPKcEclES1_S1_
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* v420, char* v421, char* v422) {
bb423:
  struct std__less_const_char___* this424;
  char* __x425;
  char* __y426;
  _Bool __retval427;
  this424 = v420;
  __x425 = v421;
  __y426 = v422;
  struct std__less_const_char___* t428 = this424;
    _Bool r429 = std____is_constant_evaluated();
    if (r429) {
      char* t430 = __x425;
      char* t431 = __y426;
      _Bool c432 = ((t430 < t431)) ? 1 : 0;
      __retval427 = c432;
      _Bool t433 = __retval427;
      return t433;
    }
  char* t434 = __x425;
  unsigned long cast435 = (unsigned long)t434;
  char* t436 = __y426;
  unsigned long cast437 = (unsigned long)t436;
  _Bool c438 = ((cast435 < cast437)) ? 1 : 0;
  __retval427 = c438;
  _Bool t439 = __retval427;
  return t439;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_disjunctEPKc
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v440, char* v441) {
bb442:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this443;
  char* __s444;
  _Bool __retval445;
  struct std__less_const_char___ ref_tmp0446;
  this443 = v440;
  __s444 = v441;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t447 = this443;
  char* t448 = __s444;
  char* r449 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t447);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  _Bool r450 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp0446, t448, r449);
  _Bool ternary451;
  if (r450) {
    _Bool c452 = 1;
    ternary451 = (_Bool)c452;
  } else {
    struct std__less_const_char___ ref_tmp1453;
    char* r454 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t447);
    if (__cir_exc_active) {
      _Bool __cir_eh_ret = (_Bool)0;
      return __cir_eh_ret;
    }
    unsigned long r455 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t447);
    char* ptr456 = &(r454)[r455];
    char* t457 = __s444;
    _Bool r458 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp1453, ptr456, t457);
    ternary451 = (_Bool)r458;
  }
  __retval445 = ternary451;
  _Bool t459 = __retval445;
  return t459;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign(char* v460, char* v461) {
bb462:
  char* __c1463;
  char* __c2464;
  __c1463 = v460;
  __c2464 = v461;
    _Bool r465 = std____is_constant_evaluated();
    if (r465) {
      char* t466 = __c1463;
      char* t467 = __c2464;
      char* r468 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t466, t467);
    } else {
      char* t469 = __c2464;
      char t470 = *t469;
      char* t471 = __c1463;
      *t471 = t470;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v472, char* v473, unsigned long v474) {
bb475:
  char* __s1476;
  char* __s2477;
  unsigned long __n478;
  char* __retval479;
  __s1476 = v472;
  __s2477 = v473;
  __n478 = v474;
    unsigned long t480 = __n478;
    unsigned long c481 = 0;
    _Bool c482 = ((t480 == c481)) ? 1 : 0;
    if (c482) {
      char* t483 = __s1476;
      __retval479 = t483;
      char* t484 = __retval479;
      return t484;
    }
    _Bool r485 = std____is_constant_evaluated();
    if (r485) {
        char* t486 = __s2477;
        char* t487 = __s1476;
        _Bool c488 = ((t486 < t487)) ? 1 : 0;
        _Bool isconst489 = 0;
        _Bool ternary490;
        if (isconst489) {
          char* t491 = __s1476;
          char* t492 = __s2477;
          _Bool c493 = ((t491 > t492)) ? 1 : 0;
          ternary490 = (_Bool)c493;
        } else {
          _Bool c494 = 0;
          ternary490 = (_Bool)c494;
        }
        _Bool ternary495;
        if (ternary490) {
          char* t496 = __s1476;
          char* t497 = __s2477;
          unsigned long t498 = __n478;
          char* ptr499 = &(t497)[t498];
          _Bool c500 = ((t496 < ptr499)) ? 1 : 0;
          ternary495 = (_Bool)c500;
        } else {
          _Bool c501 = 0;
          ternary495 = (_Bool)c501;
        }
        if (ternary495) {
            do {
                unsigned long t502 = __n478;
                unsigned long u503 = t502 - 1;
                __n478 = u503;
                unsigned long t504 = __n478;
                char* t505 = __s1476;
                char* ptr506 = &(t505)[t504];
                unsigned long t507 = __n478;
                char* t508 = __s2477;
                char* ptr509 = &(t508)[t507];
                __gnu_cxx__char_traits_char___assign(ptr506, ptr509);
                if (__cir_exc_active) {
                  char* __cir_eh_ret = (char*)0;
                  return __cir_eh_ret;
                }
              unsigned long t510 = __n478;
              unsigned long c511 = 0;
              _Bool c512 = ((t510 > c511)) ? 1 : 0;
              if (!c512) break;
            } while (1);
        } else {
          char* t513 = __s1476;
          char* t514 = __s2477;
          unsigned long t515 = __n478;
          char* r516 = __gnu_cxx__char_traits_char___copy(t513, t514, t515);
          if (__cir_exc_active) {
            char* __cir_eh_ret = (char*)0;
            return __cir_eh_ret;
          }
        }
      char* t517 = __s1476;
      __retval479 = t517;
      char* t518 = __retval479;
      return t518;
    }
  char* t519 = __s1476;
  void* cast520 = (void*)t519;
  char* t521 = __s2477;
  void* cast522 = (void*)t521;
  unsigned long t523 = __n478;
  unsigned long c524 = 1;
  unsigned long b525 = t523 * c524;
  void* r526 = memmove(cast520, cast522, b525);
  char* t527 = __s1476;
  __retval479 = t527;
  char* t528 = __retval479;
  return t528;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v529, char* v530, unsigned long v531) {
bb532:
  char* __s1533;
  char* __s2534;
  unsigned long __n535;
  char* __retval536;
  __s1533 = v529;
  __s2534 = v530;
  __n535 = v531;
    unsigned long t537 = __n535;
    unsigned long c538 = 0;
    _Bool c539 = ((t537 == c538)) ? 1 : 0;
    if (c539) {
      char* t540 = __s1533;
      __retval536 = t540;
      char* t541 = __retval536;
      return t541;
    }
    _Bool r542 = std____is_constant_evaluated();
    if (r542) {
      char* t543 = __s1533;
      char* t544 = __s2534;
      unsigned long t545 = __n535;
      char* r546 = __gnu_cxx__char_traits_char___move(t543, t544, t545);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
      __retval536 = r546;
      char* t547 = __retval536;
      return t547;
    }
  char* t548 = __s1533;
  void* cast549 = (void*)t548;
  char* t550 = __s2534;
  void* cast551 = (void*)t550;
  unsigned long t552 = __n535;
  void* r553 = memmove(cast549, cast551, t552);
  char* cast554 = (char*)r553;
  __retval536 = cast554;
  char* t555 = __retval536;
  return t555;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v556, char* v557, unsigned long v558) {
bb559:
  char* __d560;
  char* __s561;
  unsigned long __n562;
  __d560 = v556;
  __s561 = v557;
  __n562 = v558;
    unsigned long t563 = __n562;
    unsigned long c564 = 1;
    _Bool c565 = ((t563 == c564)) ? 1 : 0;
    if (c565) {
      char* t566 = __d560;
      char* t567 = __s561;
      std__char_traits_char___assign(t566, t567);
    } else {
      char* t568 = __d560;
      char* t569 = __s561;
      unsigned long t570 = __n562;
      char* r571 = std__char_traits_char___move(t568, t569, t570);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_replace_coldEPcmPKcmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v572, char* v573, unsigned long v574, char* v575, unsigned long v576, unsigned long v577) {
bb578:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this579;
  char* __p580;
  unsigned long __len1581;
  char* __s582;
  unsigned long __len2583;
  unsigned long __how_much584;
  this579 = v572;
  __p580 = v573;
  __len1581 = v574;
  __s582 = v575;
  __len2583 = v576;
  __how_much584 = v577;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t585 = this579;
    unsigned long t586 = __len2583;
    _Bool cast587 = (_Bool)t586;
    _Bool ternary588;
    if (cast587) {
      unsigned long t589 = __len2583;
      unsigned long t590 = __len1581;
      _Bool c591 = ((t589 <= t590)) ? 1 : 0;
      ternary588 = (_Bool)c591;
    } else {
      _Bool c592 = 0;
      ternary588 = (_Bool)c592;
    }
    if (ternary588) {
      char* t593 = __p580;
      char* t594 = __s582;
      unsigned long t595 = __len2583;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t593, t594, t595);
      if (__cir_exc_active) {
        return;
      }
    }
    unsigned long t596 = __how_much584;
    _Bool cast597 = (_Bool)t596;
    _Bool ternary598;
    if (cast597) {
      unsigned long t599 = __len1581;
      unsigned long t600 = __len2583;
      _Bool c601 = ((t599 != t600)) ? 1 : 0;
      ternary598 = (_Bool)c601;
    } else {
      _Bool c602 = 0;
      ternary598 = (_Bool)c602;
    }
    if (ternary598) {
      char* t603 = __p580;
      unsigned long t604 = __len2583;
      char* ptr605 = &(t603)[t604];
      char* t606 = __p580;
      unsigned long t607 = __len1581;
      char* ptr608 = &(t606)[t607];
      unsigned long t609 = __how_much584;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr605, ptr608, t609);
      if (__cir_exc_active) {
        return;
      }
    }
    unsigned long t610 = __len2583;
    unsigned long t611 = __len1581;
    _Bool c612 = ((t610 > t611)) ? 1 : 0;
    if (c612) {
        char* t613 = __s582;
        unsigned long t614 = __len2583;
        char* ptr615 = &(t613)[t614];
        char* t616 = __p580;
        unsigned long t617 = __len1581;
        char* ptr618 = &(t616)[t617];
        _Bool c619 = ((ptr615 <= ptr618)) ? 1 : 0;
        if (c619) {
          char* t620 = __p580;
          char* t621 = __s582;
          unsigned long t622 = __len2583;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t620, t621, t622);
          if (__cir_exc_active) {
            return;
          }
        } else {
            char* t623 = __s582;
            char* t624 = __p580;
            unsigned long t625 = __len1581;
            char* ptr626 = &(t624)[t625];
            _Bool c627 = ((t623 >= ptr626)) ? 1 : 0;
            if (c627) {
              unsigned long __poff628;
              char* t629 = __s582;
              char* t630 = __p580;
              long diff631 = t629 - t630;
              unsigned long cast632 = (unsigned long)diff631;
              unsigned long t633 = __len2583;
              unsigned long t634 = __len1581;
              unsigned long b635 = t633 - t634;
              unsigned long b636 = cast632 + b635;
              __poff628 = b636;
              char* t637 = __p580;
              char* t638 = __p580;
              unsigned long t639 = __poff628;
              char* ptr640 = &(t638)[t639];
              unsigned long t641 = __len2583;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t637, ptr640, t641);
              if (__cir_exc_active) {
                return;
              }
            } else {
              unsigned long __nleft642;
              char* t643 = __p580;
              unsigned long t644 = __len1581;
              char* ptr645 = &(t643)[t644];
              char* t646 = __s582;
              long diff647 = ptr645 - t646;
              unsigned long cast648 = (unsigned long)diff647;
              __nleft642 = cast648;
              char* t649 = __p580;
              char* t650 = __s582;
              unsigned long t651 = __nleft642;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t649, t650, t651);
              if (__cir_exc_active) {
                return;
              }
              char* t652 = __p580;
              unsigned long t653 = __nleft642;
              char* ptr654 = &(t652)[t653];
              char* t655 = __p580;
              unsigned long t656 = __len2583;
              char* ptr657 = &(t655)[t656];
              unsigned long t658 = __len2583;
              unsigned long t659 = __nleft642;
              unsigned long b660 = t658 - t659;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr654, ptr657, b660);
              if (__cir_exc_active) {
                return;
              }
            }
        }
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v661) {
bb662:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this663;
  unsigned long __retval664;
  this663 = v661;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t665 = this663;
  unsigned long r666 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t665);
  __retval664 = r666;
  unsigned long t667 = __retval664;
  return t667;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v668, unsigned long v669, unsigned long v670, char* v671, unsigned long v672) {
bb673:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this674;
  unsigned long __pos675;
  unsigned long __len1676;
  char* __s677;
  unsigned long __len2678;
  unsigned long __how_much679;
  unsigned long __new_capacity680;
  char* __r681;
  this674 = v668;
  __pos675 = v669;
  __len1676 = v670;
  __s677 = v671;
  __len2678 = v672;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t682 = this674;
  unsigned long r683 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t682);
  unsigned long t684 = __pos675;
  unsigned long b685 = r683 - t684;
  unsigned long t686 = __len1676;
  unsigned long b687 = b685 - t686;
  __how_much679 = b687;
  unsigned long r688 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t682);
  unsigned long t689 = __len2678;
  unsigned long b690 = r688 + t689;
  unsigned long t691 = __len1676;
  unsigned long b692 = b690 - t691;
  __new_capacity680 = b692;
  unsigned long r693 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t682);
  char* r694 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t682, &__new_capacity680, r693);
  if (__cir_exc_active) {
    return;
  }
  __r681 = r694;
    unsigned long t695 = __pos675;
    _Bool cast696 = (_Bool)t695;
    if (cast696) {
      char* t697 = __r681;
      char* r698 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t682);
      if (__cir_exc_active) {
        return;
      }
      unsigned long t699 = __pos675;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t697, r698, t699);
      if (__cir_exc_active) {
        return;
      }
    }
    char* t700 = __s677;
    _Bool cast701 = (_Bool)t700;
    _Bool ternary702;
    if (cast701) {
      unsigned long t703 = __len2678;
      _Bool cast704 = (_Bool)t703;
      ternary702 = (_Bool)cast704;
    } else {
      _Bool c705 = 0;
      ternary702 = (_Bool)c705;
    }
    if (ternary702) {
      char* t706 = __r681;
      unsigned long t707 = __pos675;
      char* ptr708 = &(t706)[t707];
      char* t709 = __s677;
      unsigned long t710 = __len2678;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr708, t709, t710);
      if (__cir_exc_active) {
        return;
      }
    }
    unsigned long t711 = __how_much679;
    _Bool cast712 = (_Bool)t711;
    if (cast712) {
      char* t713 = __r681;
      unsigned long t714 = __pos675;
      char* ptr715 = &(t713)[t714];
      unsigned long t716 = __len2678;
      char* ptr717 = &(ptr715)[t716];
      char* r718 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t682);
      if (__cir_exc_active) {
        return;
      }
      unsigned long t719 = __pos675;
      char* ptr720 = &(r718)[t719];
      unsigned long t721 = __len1676;
      char* ptr722 = &(ptr720)[t721];
      unsigned long t723 = __how_much679;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr717, ptr722, t723);
      if (__cir_exc_active) {
        return;
      }
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t682);
  if (__cir_exc_active) {
    return;
  }
  char* t724 = __r681;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t682, t724);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t725 = __new_capacity680;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t682, t725);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v726, unsigned long v727, unsigned long v728, char* v729, unsigned long v730) {
bb731:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this732;
  unsigned long __pos733;
  unsigned long __len1734;
  char* __s735;
  unsigned long __len2736;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval737;
  unsigned long __old_size738;
  unsigned long __new_size739;
  this732 = v726;
  __pos733 = v727;
  __len1734 = v728;
  __s735 = v729;
  __len2736 = v730;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t740 = this732;
  unsigned long t741 = __len1734;
  unsigned long t742 = __len2736;
  char* cast743 = (char*)&(_str_32);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t740, t741, t742, cast743);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
    return __cir_eh_ret;
  }
  unsigned long r744 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t740);
  __old_size738 = r744;
  unsigned long t745 = __old_size738;
  unsigned long t746 = __len2736;
  unsigned long b747 = t745 + t746;
  unsigned long t748 = __len1734;
  unsigned long b749 = b747 - t748;
  __new_size739 = b749;
    unsigned long t750 = __new_size739;
    unsigned long r751 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t740);
    _Bool c752 = ((t750 <= r751)) ? 1 : 0;
    if (c752) {
      char* __p753;
      unsigned long __how_much754;
      char* r755 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t740);
      if (__cir_exc_active) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
        return __cir_eh_ret;
      }
      unsigned long t756 = __pos733;
      char* ptr757 = &(r755)[t756];
      __p753 = ptr757;
      unsigned long t758 = __old_size738;
      unsigned long t759 = __pos733;
      unsigned long b760 = t758 - t759;
      unsigned long t761 = __len1734;
      unsigned long b762 = b760 - t761;
      __how_much754 = b762;
        _Bool r763 = std__is_constant_evaluated();
        if (r763) {
          char* __newp764;
          struct std__allocator_char_* r765 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t740);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          unsigned long t766 = __new_size739;
          char* r767 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r765, t766);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          __newp764 = r767;
          char* t768 = __newp764;
          char* r769 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t740);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          unsigned long t770 = __pos733;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t768, r769, t770);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          char* t771 = __newp764;
          unsigned long t772 = __pos733;
          char* ptr773 = &(t771)[t772];
          char* t774 = __s735;
          unsigned long t775 = __len2736;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr773, t774, t775);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          char* t776 = __newp764;
          unsigned long t777 = __pos733;
          char* ptr778 = &(t776)[t777];
          unsigned long t779 = __len2736;
          char* ptr780 = &(ptr778)[t779];
          char* t781 = __p753;
          unsigned long t782 = __len1734;
          char* ptr783 = &(t781)[t782];
          unsigned long t784 = __how_much754;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr780, ptr783, t784);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          char* r785 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t740);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          char* t786 = __newp764;
          unsigned long t787 = __new_size739;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r785, t786, t787);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          struct std__allocator_char_* r788 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t740);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          char* t789 = __newp764;
          unsigned long t790 = __new_size739;
          std__allocator_char___deallocate(r788, t789, t790);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
        } else {
            char* t791 = __s735;
            _Bool r792 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(t740, t791);
            if (r792) {
                unsigned long t793 = __how_much754;
                _Bool cast794 = (_Bool)t793;
                _Bool ternary795;
                if (cast794) {
                  unsigned long t796 = __len1734;
                  unsigned long t797 = __len2736;
                  _Bool c798 = ((t796 != t797)) ? 1 : 0;
                  ternary795 = (_Bool)c798;
                } else {
                  _Bool c799 = 0;
                  ternary795 = (_Bool)c799;
                }
                if (ternary795) {
                  char* t800 = __p753;
                  unsigned long t801 = __len2736;
                  char* ptr802 = &(t800)[t801];
                  char* t803 = __p753;
                  unsigned long t804 = __len1734;
                  char* ptr805 = &(t803)[t804];
                  unsigned long t806 = __how_much754;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr802, ptr805, t806);
                  if (__cir_exc_active) {
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
                    return __cir_eh_ret;
                  }
                }
                unsigned long t807 = __len2736;
                _Bool cast808 = (_Bool)t807;
                if (cast808) {
                  char* t809 = __p753;
                  char* t810 = __s735;
                  unsigned long t811 = __len2736;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t809, t810, t811);
                  if (__cir_exc_active) {
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
                    return __cir_eh_ret;
                  }
                }
            } else {
              char* t812 = __p753;
              unsigned long t813 = __len1734;
              char* t814 = __s735;
              unsigned long t815 = __len2736;
              unsigned long t816 = __how_much754;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(t740, t812, t813, t814, t815, t816);
              if (__cir_exc_active) {
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
                return __cir_eh_ret;
              }
            }
        }
    } else {
      unsigned long t817 = __pos733;
      unsigned long t818 = __len1734;
      char* t819 = __s735;
      unsigned long t820 = __len2736;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t740, t817, t818, t819, t820);
      if (__cir_exc_active) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
        return __cir_eh_ret;
      }
    }
  unsigned long t821 = __new_size739;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t740, t821);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
    return __cir_eh_ret;
  }
  __retval737 = t740;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t822 = __retval737;
  return t822;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v823) {
bb824:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this825;
  unsigned long __retval826;
  unsigned long __sz827;
  this825 = v823;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t828 = this825;
  unsigned long t829 = t828->_M_string_length;
  __sz827 = t829;
    unsigned long t830 = __sz827;
    unsigned long r831 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t828);
    _Bool c832 = ((t830 > r831)) ? 1 : 0;
    if (c832) {
      __builtin_unreachable();
    }
  unsigned long t833 = __sz827;
  __retval826 = t833;
  unsigned long t834 = __retval826;
  return t834;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v835, char* v836) {
bb837:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this838;
  char* __s839;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval840;
  this838 = v835;
  __s839 = v836;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t841 = this838;
  unsigned long c842 = 0;
  unsigned long r843 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t841);
  char* t844 = __s839;
  char* t845 = __s839;
  unsigned long r846 = std__char_traits_char___length(t845);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
    return __cir_eh_ret;
  }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r847 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t841, c842, r843, t844, r846);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
    return __cir_eh_ret;
  }
  __retval840 = r847;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t848 = __retval840;
  return t848;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v849, char* v850) {
bb851:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this852;
  char* __s853;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval854;
  this852 = v849;
  __s853 = v850;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t855 = this852;
  char* t856 = __s853;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r857 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(t855, t856);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
    return __cir_eh_ret;
  }
  __retval854 = r857;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t858 = __retval854;
  return t858;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v859) {
bb860:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this861;
  char* __retval862;
  this861 = v859;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t863 = this861;
  char* r864 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t863);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __retval862 = r864;
  char* t865 = __retval862;
  return t865;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v866, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v867) {
bb868:
  struct std__basic_ostream_char__std__char_traits_char__* __os869;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str870;
  struct std__basic_ostream_char__std__char_traits_char__* __retval871;
  __os869 = v866;
  __str870 = v867;
  struct std__basic_ostream_char__std__char_traits_char__* t872 = __os869;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t873 = __str870;
  char* r874 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t873);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t875 = __str870;
  unsigned long r876 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t875);
  long cast877 = (long)r876;
  struct std__basic_ostream_char__std__char_traits_char__* r878 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t872, r874, cast877);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval871 = r878;
  struct std__basic_ostream_char__std__char_traits_char__* t879 = __retval871;
  return t879;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEED2Ev
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream_2(struct std__basic_ifstream_char__std__char_traits_char__* v880, void** v881) {
bb882:
  struct std__basic_ifstream_char__std__char_traits_char__* this883;
  void** vtt884;
  this883 = v880;
  vtt884 = v881;
  struct std__basic_ifstream_char__std__char_traits_char__* t885 = this883;
  void** t886 = vtt884;
    {
      std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t885->_M_filebuf);
    }
  {
    struct std__basic_istream_char__std__char_traits_char__* base887 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t885 + 0);
    static void *vtt_slot888 = 0;
    void** vtt889 = (void**)&vtt_slot888;
    std__basic_istream_char__std__char_traits_char______basic_istream(base887, vtt889);
  }
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* v890) {
bb891:
  struct std__basic_ifstream_char__std__char_traits_char__* this892;
  this892 = v890;
  struct std__basic_ifstream_char__std__char_traits_char__* t893 = this892;
    static void *vtt_slot894 = 0;
    void** vtt895 = (void**)&vtt_slot894;
    std__basic_ifstream_char__std__char_traits_char______basic_ifstream_2(t893, vtt895);
  {
    struct std__basic_ios_char__std__char_traits_char__* base896 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t893 + 256);
    std__basic_ios_char__std__char_traits_char______basic_ios(base896);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v897) {
bb898:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this899;
  this899 = v897;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t900 = this899;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t900);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t900->_M_dataplus);
      }
      return;
    }
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t900->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb901:
  int __retval902;
  char book903[50];
  char year904[50];
  char isbn905[50];
  char price906[50];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ bookString907;
  struct std__allocator_char_ ref_tmp0908;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ yearString909;
  struct std__allocator_char_ ref_tmp1910;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ isbnString911;
  struct std__allocator_char_ ref_tmp2912;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ priceString913;
  struct std__allocator_char_ ref_tmp3914;
  _Bool nameTaken915;
  struct std__basic_ifstream_char__std__char_traits_char__ userData916;
  int c917 = 0;
  __retval902 = c917;
  // array copy
  __builtin_memcpy(book903, __const_main_book, (unsigned long)50 * sizeof(__const_main_book[0]));
  // array copy
  __builtin_memcpy(year904, __const_main_year, (unsigned long)50 * sizeof(__const_main_year[0]));
  // array copy
  __builtin_memcpy(isbn905, __const_main_isbn, (unsigned long)50 * sizeof(__const_main_isbn[0]));
  // array copy
  __builtin_memcpy(price906, __const_main_price, (unsigned long)50 * sizeof(__const_main_price[0]));
  char* cast918 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0908);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&bookString907, cast918, &ref_tmp0908);
    if (__cir_exc_active) {
      {
        std__allocator_char____allocator(&ref_tmp0908);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  {
    std__allocator_char____allocator(&ref_tmp0908);
  }
    char* cast919 = (char*)&(_str);
    std__allocator_char___allocator_2(&ref_tmp1910);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&yearString909, cast919, &ref_tmp1910);
      if (__cir_exc_active) {
        {
          std__allocator_char____allocator(&ref_tmp1910);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
    {
      std__allocator_char____allocator(&ref_tmp1910);
    }
      char* cast920 = (char*)&(_str);
      std__allocator_char___allocator_2(&ref_tmp2912);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&isbnString911, cast920, &ref_tmp2912);
        if (__cir_exc_active) {
          {
            std__allocator_char____allocator(&ref_tmp2912);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      {
        std__allocator_char____allocator(&ref_tmp2912);
      }
        char* cast921 = (char*)&(_str);
        std__allocator_char___allocator_2(&ref_tmp3914);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&priceString913, cast921, &ref_tmp3914);
          if (__cir_exc_active) {
            {
              std__allocator_char____allocator(&ref_tmp3914);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
        {
          std__allocator_char____allocator(&ref_tmp3914);
        }
          _Bool c922 = 0;
          nameTaken915 = c922;
          char* cast923 = (char*)&(_str_1);
          int t924 = _ZNSt8ios_base2inE_const;
          std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(&userData916, cast923, t924);
          if (__cir_exc_active) {
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
              void** v925 = (void**)&(userData916);
              void* v926 = *((void**)v925);
              unsigned char* cast927 = (unsigned char*)v926;
              long c928 = -24;
              unsigned char* ptr929 = &(cast927)[c928];
              long* cast930 = (long*)ptr929;
              long t931 = *cast930;
              unsigned char* cast932 = (unsigned char*)&(userData916);
              unsigned char* ptr933 = &(cast932)[t931];
              struct std__basic_ifstream_char__std__char_traits_char__* cast934 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr933;
              struct std__basic_ios_char__std__char_traits_char__* cast935 = (struct std__basic_ios_char__std__char_traits_char__*)cast934;
              _Bool r936 = std__basic_ios_char__std__char_traits_char_____operator____const(cast935);
              if (__cir_exc_active) {
                {
                  std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              if (r936) {
                char* cast937 = (char*)&(_str_2);
                struct std__basic_ostream_char__std__char_traits_char__* r938 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cerr, cast937);
                if (__cir_exc_active) {
                  {
                    std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                  }
                  {
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                  }
                  {
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                  }
                  {
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                  }
                  {
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                  }
                  int __cir_eh_ret = (int)0;
                  return __cir_eh_ret;
                }
                int c939 = 1;
                exit(c939);
              }
            header();
            if (__cir_exc_active) {
              {
                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
            char* cast940 = (char*)&(_str_3);
            struct std__basic_ostream_char__std__char_traits_char__* r941 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast940);
            if (__cir_exc_active) {
              {
                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
            char* cast942 = (char*)&(_str_4);
            struct std__basic_ostream_char__std__char_traits_char__* r943 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r941, cast942);
            if (__cir_exc_active) {
              {
                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
            char* cast944 = (char*)&(_str_5);
            struct std__basic_ostream_char__std__char_traits_char__* r945 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r943, cast944);
            if (__cir_exc_active) {
              {
                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
            char* cast946 = (char*)&(_str_6);
            struct std__basic_ostream_char__std__char_traits_char__* r947 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r945, cast946);
            if (__cir_exc_active) {
              {
                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
              while (1) {
                void** v948 = (void**)&(userData916);
                void* v949 = *((void**)v948);
                unsigned char* cast950 = (unsigned char*)v949;
                long c951 = -24;
                unsigned char* ptr952 = &(cast950)[c951];
                long* cast953 = (long*)ptr952;
                long t954 = *cast953;
                unsigned char* cast955 = (unsigned char*)&(userData916);
                unsigned char* ptr956 = &(cast955)[t954];
                struct std__basic_ifstream_char__std__char_traits_char__* cast957 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr956;
                struct std__basic_ios_char__std__char_traits_char__* cast958 = (struct std__basic_ios_char__std__char_traits_char__*)cast957;
                _Bool r959 = std__basic_ios_char__std__char_traits_char_____operator_bool___const(cast958);
                if (__cir_exc_active) {
                  {
                    std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                  }
                  {
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                  }
                  {
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                  }
                  {
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                  }
                  {
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                  }
                  int __cir_eh_ret = (int)0;
                  return __cir_eh_ret;
                }
                if (!r959) break;
                  struct std__basic_istream_char__std__char_traits_char__* base960 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(userData916) + 0);
                  char* cast961 = (char*)&(book903);
                  long c962 = 50;
                  struct std__basic_istream_char__std__char_traits_char__* r963 = std__istream__getline(base960, cast961, c962);
                  if (__cir_exc_active) {
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                    }
                    int __cir_eh_ret = (int)0;
                    return __cir_eh_ret;
                  }
                  char* cast964 = (char*)&(book903);
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r965 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&bookString907, cast964);
                  if (__cir_exc_active) {
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                    }
                    int __cir_eh_ret = (int)0;
                    return __cir_eh_ret;
                  }
                  struct std__basic_istream_char__std__char_traits_char__* base966 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(userData916) + 0);
                  char* cast967 = (char*)&(year904);
                  long c968 = 50;
                  struct std__basic_istream_char__std__char_traits_char__* r969 = std__istream__getline(base966, cast967, c968);
                  if (__cir_exc_active) {
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                    }
                    int __cir_eh_ret = (int)0;
                    return __cir_eh_ret;
                  }
                  char* cast970 = (char*)&(year904);
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r971 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&yearString909, cast970);
                  if (__cir_exc_active) {
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                    }
                    int __cir_eh_ret = (int)0;
                    return __cir_eh_ret;
                  }
                  struct std__basic_istream_char__std__char_traits_char__* base972 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(userData916) + 0);
                  char* cast973 = (char*)&(isbn905);
                  long c974 = 50;
                  struct std__basic_istream_char__std__char_traits_char__* r975 = std__istream__getline(base972, cast973, c974);
                  if (__cir_exc_active) {
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                    }
                    int __cir_eh_ret = (int)0;
                    return __cir_eh_ret;
                  }
                  char* cast976 = (char*)&(isbn905);
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r977 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&isbnString911, cast976);
                  if (__cir_exc_active) {
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                    }
                    int __cir_eh_ret = (int)0;
                    return __cir_eh_ret;
                  }
                  struct std__basic_istream_char__std__char_traits_char__* base978 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(userData916) + 0);
                  char* cast979 = (char*)&(price906);
                  long c980 = 50;
                  struct std__basic_istream_char__std__char_traits_char__* r981 = std__istream__getline(base978, cast979, c980);
                  if (__cir_exc_active) {
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                    }
                    int __cir_eh_ret = (int)0;
                    return __cir_eh_ret;
                  }
                  char* cast982 = (char*)&(price906);
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r983 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&priceString913, cast982);
                  if (__cir_exc_active) {
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                    }
                    int __cir_eh_ret = (int)0;
                    return __cir_eh_ret;
                  }
                  char* cast984 = (char*)&(_str_7);
                  struct std__basic_ostream_char__std__char_traits_char__* r985 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast984);
                  if (__cir_exc_active) {
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                    }
                    int __cir_eh_ret = (int)0;
                    return __cir_eh_ret;
                  }
                  char* cast986 = (char*)&(_str_8);
                  struct std__basic_ostream_char__std__char_traits_char__* r987 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r985, cast986);
                  if (__cir_exc_active) {
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                    }
                    int __cir_eh_ret = (int)0;
                    return __cir_eh_ret;
                  }
                  struct std__basic_ostream_char__std__char_traits_char__* r988 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r987, &bookString907);
                  if (__cir_exc_active) {
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                    }
                    int __cir_eh_ret = (int)0;
                    return __cir_eh_ret;
                  }
                  char* cast989 = (char*)&(_str_9);
                  struct std__basic_ostream_char__std__char_traits_char__* r990 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r988, cast989);
                  if (__cir_exc_active) {
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                    }
                    int __cir_eh_ret = (int)0;
                    return __cir_eh_ret;
                  }
                  char* cast991 = (char*)&(_str_8);
                  struct std__basic_ostream_char__std__char_traits_char__* r992 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r990, cast991);
                  if (__cir_exc_active) {
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                    }
                    int __cir_eh_ret = (int)0;
                    return __cir_eh_ret;
                  }
                  struct std__basic_ostream_char__std__char_traits_char__* r993 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r992, &yearString909);
                  if (__cir_exc_active) {
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                    }
                    int __cir_eh_ret = (int)0;
                    return __cir_eh_ret;
                  }
                  char* cast994 = (char*)&(_str_9);
                  struct std__basic_ostream_char__std__char_traits_char__* r995 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r993, cast994);
                  if (__cir_exc_active) {
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                    }
                    int __cir_eh_ret = (int)0;
                    return __cir_eh_ret;
                  }
                  char* cast996 = (char*)&(_str_8);
                  struct std__basic_ostream_char__std__char_traits_char__* r997 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r995, cast996);
                  if (__cir_exc_active) {
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                    }
                    int __cir_eh_ret = (int)0;
                    return __cir_eh_ret;
                  }
                  struct std__basic_ostream_char__std__char_traits_char__* r998 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r997, &isbnString911);
                  if (__cir_exc_active) {
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                    }
                    int __cir_eh_ret = (int)0;
                    return __cir_eh_ret;
                  }
                  char* cast999 = (char*)&(_str_9);
                  struct std__basic_ostream_char__std__char_traits_char__* r1000 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r998, cast999);
                  if (__cir_exc_active) {
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                    }
                    int __cir_eh_ret = (int)0;
                    return __cir_eh_ret;
                  }
                  char* cast1001 = (char*)&(_str_8);
                  struct std__basic_ostream_char__std__char_traits_char__* r1002 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1000, cast1001);
                  if (__cir_exc_active) {
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                    }
                    int __cir_eh_ret = (int)0;
                    return __cir_eh_ret;
                  }
                  struct std__basic_ostream_char__std__char_traits_char__* r1003 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1002, &priceString913);
                  if (__cir_exc_active) {
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                    }
                    int __cir_eh_ret = (int)0;
                    return __cir_eh_ret;
                  }
                  char* cast1004 = (char*)&(_str_9);
                  struct std__basic_ostream_char__std__char_traits_char__* r1005 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1003, cast1004);
                  if (__cir_exc_active) {
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                    }
                    int __cir_eh_ret = (int)0;
                    return __cir_eh_ret;
                  }
                    void** v1006 = (void**)&(userData916);
                    void* v1007 = *((void**)v1006);
                    unsigned char* cast1008 = (unsigned char*)v1007;
                    long c1009 = -24;
                    unsigned char* ptr1010 = &(cast1008)[c1009];
                    long* cast1011 = (long*)ptr1010;
                    long t1012 = *cast1011;
                    unsigned char* cast1013 = (unsigned char*)&(userData916);
                    unsigned char* ptr1014 = &(cast1013)[t1012];
                    struct std__basic_ifstream_char__std__char_traits_char__* cast1015 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr1014;
                    struct std__basic_ios_char__std__char_traits_char__* cast1016 = (struct std__basic_ios_char__std__char_traits_char__*)cast1015;
                    _Bool r1017 = std__basic_ios_char__std__char_traits_char_____operator_bool___const(cast1016);
                    if (__cir_exc_active) {
                      {
                        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                      }
                      int __cir_eh_ret = (int)0;
                      return __cir_eh_ret;
                    }
                    if (r1017) {
                      char* cast1018 = (char*)&(_str_10);
                      struct std__basic_ostream_char__std__char_traits_char__* r1019 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1018);
                      if (__cir_exc_active) {
                        {
                          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1020 = (char*)&(_str_11);
                      struct std__basic_ostream_char__std__char_traits_char__* r1021 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1019, cast1020);
                      if (__cir_exc_active) {
                        {
                          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1022 = (char*)&(_str_12);
                      struct std__basic_ostream_char__std__char_traits_char__* r1023 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1021, cast1022);
                      if (__cir_exc_active) {
                        {
                          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1024 = (char*)&(_str_13);
                      struct std__basic_ostream_char__std__char_traits_char__* r1025 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1023, cast1024);
                      if (__cir_exc_active) {
                        {
                          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1026 = (char*)&(_str_14);
                      struct std__basic_ostream_char__std__char_traits_char__* r1027 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1025, cast1026);
                      if (__cir_exc_active) {
                        {
                          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1028 = (char*)&(_str_15);
                      struct std__basic_ostream_char__std__char_traits_char__* r1029 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1027, cast1028);
                      if (__cir_exc_active) {
                        {
                          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      struct std__basic_ostream_char__std__char_traits_char__* r1030 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1029, &isbnString911);
                      if (__cir_exc_active) {
                        {
                          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1031 = (char*)&(_str_16);
                      struct std__basic_ostream_char__std__char_traits_char__* r1032 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1030, cast1031);
                      if (__cir_exc_active) {
                        {
                          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1033 = (char*)&(_str_17);
                      struct std__basic_ostream_char__std__char_traits_char__* r1034 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1032, cast1033);
                      if (__cir_exc_active) {
                        {
                          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1035 = (char*)&(_str_18);
                      struct std__basic_ostream_char__std__char_traits_char__* r1036 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1034, cast1035);
                      if (__cir_exc_active) {
                        {
                          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                      char* cast1037 = (char*)&(_str_19);
                      struct std__basic_ostream_char__std__char_traits_char__* r1038 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1036, cast1037);
                      if (__cir_exc_active) {
                        {
                          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                    }
                  char* cast1039 = (char*)&(_str_20);
                  struct std__basic_ostream_char__std__char_traits_char__* r1040 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1039);
                  if (__cir_exc_active) {
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
                    }
                    int __cir_eh_ret = (int)0;
                    return __cir_eh_ret;
                  }
              }
            char* cast1041 = (char*)&(_str_21);
            struct std__basic_ostream_char__std__char_traits_char__* r1042 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1041);
            if (__cir_exc_active) {
              {
                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
            int c1043 = 0;
            __retval902 = c1043;
            int t1044 = __retval902;
            int ret_val1045 = t1044;
            {
              std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData916);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString913);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString911);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString909);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString907);
            }
            return ret_val1045;
  int t1046 = __retval902;
  return t1046;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1047) {
bb1048:
  struct std____new_allocator_char_* this1049;
  this1049 = v1047;
  struct std____new_allocator_char_* t1050 = this1049;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1051) {
bb1052:
  char* __r1053;
  char* __retval1054;
  __r1053 = v1051;
  char* t1055 = __r1053;
  __retval1054 = t1055;
  char* t1056 = __retval1054;
  return t1056;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1057) {
bb1058:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1059;
  char* __retval1060;
  this1059 = v1057;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1061 = this1059;
  char* cast1062 = (char*)&(t1061->field2._M_local_buf);
  char* r1063 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1062);
  __retval1060 = r1063;
  char* t1064 = __retval1060;
  return t1064;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1065, char* v1066, struct std__allocator_char_* v1067) {
bb1068:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1069;
  char* __dat1070;
  struct std__allocator_char_* __a1071;
  this1069 = v1065;
  __dat1070 = v1066;
  __a1071 = v1067;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1072 = this1069;
  struct std__allocator_char_* base1073 = (struct std__allocator_char_*)((char *)t1072 + 0);
  struct std__allocator_char_* t1074 = __a1071;
  std__allocator_char___allocator(base1073, t1074);
    char* t1075 = __dat1070;
    t1072->_M_p = t1075;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1076:
  _Bool __retval1077;
    _Bool c1078 = 0;
    __retval1077 = c1078;
    _Bool t1079 = __retval1077;
    return t1079;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1080, char* v1081) {
bb1082:
  char* __c11083;
  char* __c21084;
  _Bool __retval1085;
  __c11083 = v1080;
  __c21084 = v1081;
  char* t1086 = __c11083;
  char t1087 = *t1086;
  int cast1088 = (int)t1087;
  char* t1089 = __c21084;
  char t1090 = *t1089;
  int cast1091 = (int)t1090;
  _Bool c1092 = ((cast1088 == cast1091)) ? 1 : 0;
  __retval1085 = c1092;
  _Bool t1093 = __retval1085;
  return t1093;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1094) {
bb1095:
  char* __p1096;
  unsigned long __retval1097;
  unsigned long __i1098;
  __p1096 = v1094;
  unsigned long c1099 = 0;
  __i1098 = c1099;
    char ref_tmp01100;
    while (1) {
      unsigned long t1101 = __i1098;
      char* t1102 = __p1096;
      char* ptr1103 = &(t1102)[t1101];
      char c1104 = 0;
      ref_tmp01100 = c1104;
      _Bool r1105 = __gnu_cxx__char_traits_char___eq(ptr1103, &ref_tmp01100);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u1106 = !r1105;
      if (!u1106) break;
      unsigned long t1107 = __i1098;
      unsigned long u1108 = t1107 + 1;
      __i1098 = u1108;
    }
  unsigned long t1109 = __i1098;
  __retval1097 = t1109;
  unsigned long t1110 = __retval1097;
  return t1110;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1111) {
bb1112:
  char* __s1113;
  unsigned long __retval1114;
  __s1113 = v1111;
    _Bool r1115 = std____is_constant_evaluated();
    if (r1115) {
      char* t1116 = __s1113;
      unsigned long r1117 = __gnu_cxx__char_traits_char___length(t1116);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval1114 = r1117;
      unsigned long t1118 = __retval1114;
      return t1118;
    }
  char* t1119 = __s1113;
  unsigned long r1120 = strlen(t1119);
  __retval1114 = r1120;
  unsigned long t1121 = __retval1114;
  return t1121;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v1122, char* v1123, struct std__random_access_iterator_tag v1124) {
bb1125:
  char* __first1126;
  char* __last1127;
  struct std__random_access_iterator_tag unnamed1128;
  long __retval1129;
  __first1126 = v1122;
  __last1127 = v1123;
  unnamed1128 = v1124;
  char* t1130 = __last1127;
  char* t1131 = __first1126;
  long diff1132 = t1130 - t1131;
  __retval1129 = diff1132;
  long t1133 = __retval1129;
  return t1133;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v1134) {
bb1135:
  char** unnamed1136;
  struct std__random_access_iterator_tag __retval1137;
  unnamed1136 = v1134;
  struct std__random_access_iterator_tag t1138 = __retval1137;
  return t1138;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v1139, char* v1140) {
bb1141:
  char* __first1142;
  char* __last1143;
  long __retval1144;
  struct std__random_access_iterator_tag agg_tmp01145;
  __first1142 = v1139;
  __last1143 = v1140;
  char* t1146 = __first1142;
  char* t1147 = __last1143;
  struct std__random_access_iterator_tag r1148 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first1142);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp01145 = r1148;
  struct std__random_access_iterator_tag t1149 = agg_tmp01145;
  long r1150 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t1146, t1147, t1149);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval1144 = r1150;
  long t1151 = __retval1144;
  return t1151;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1152, char* v1153) {
bb1154:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1155;
  char* __p1156;
  this1155 = v1152;
  __p1156 = v1153;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1157 = this1155;
  char* t1158 = __p1156;
  t1157->_M_dataplus._M_p = t1158;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v1159) {
bb1160:
  struct std__allocator_char_* __a1161;
  unsigned long __retval1162;
  __a1161 = v1159;
  unsigned long c1163 = -1;
  unsigned long c1164 = 1;
  unsigned long b1165 = c1163 / c1164;
  __retval1162 = b1165;
  unsigned long t1166 = __retval1162;
  return t1166;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1167) {
bb1168:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1169;
  struct std__allocator_char_* __retval1170;
  this1169 = v1167;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1171 = this1169;
  struct std__allocator_char_* base1172 = (struct std__allocator_char_*)((char *)&(t1171->_M_dataplus) + 0);
  __retval1170 = base1172;
  struct std__allocator_char_* t1173 = __retval1170;
  return t1173;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1174, unsigned long* v1175) {
bb1176:
  unsigned long* __a1177;
  unsigned long* __b1178;
  unsigned long* __retval1179;
  __a1177 = v1174;
  __b1178 = v1175;
    unsigned long* t1180 = __b1178;
    unsigned long t1181 = *t1180;
    unsigned long* t1182 = __a1177;
    unsigned long t1183 = *t1182;
    _Bool c1184 = ((t1181 < t1183)) ? 1 : 0;
    if (c1184) {
      unsigned long* t1185 = __b1178;
      __retval1179 = t1185;
      unsigned long* t1186 = __retval1179;
      return t1186;
    }
  unsigned long* t1187 = __a1177;
  __retval1179 = t1187;
  unsigned long* t1188 = __retval1179;
  return t1188;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1189) {
bb1190:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1191;
  unsigned long __retval1192;
  unsigned long __diffmax1193;
  unsigned long __allocmax1194;
  this1191 = v1189;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1195 = this1191;
  unsigned long c1196 = 9223372036854775807;
  __diffmax1193 = c1196;
  struct std__allocator_char_* r1197 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1195);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long r1198 = std__allocator_traits_std__allocator_char_____max_size(r1197);
  __allocmax1194 = r1198;
  unsigned long* r1199 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1193, &__allocmax1194);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t1200 = *r1199;
  unsigned long c1201 = 1;
  unsigned long b1202 = t1200 - c1201;
  __retval1192 = b1202;
  unsigned long t1203 = __retval1192;
  return t1203;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v1204) {
bb1205:
  struct std____new_allocator_char_* this1206;
  unsigned long __retval1207;
  this1206 = v1204;
  struct std____new_allocator_char_* t1208 = this1206;
  unsigned long c1209 = 9223372036854775807;
  unsigned long c1210 = 1;
  unsigned long b1211 = c1209 / c1210;
  __retval1207 = b1211;
  unsigned long t1212 = __retval1207;
  return t1212;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v1213, unsigned long v1214, void* v1215) {
bb1216:
  struct std____new_allocator_char_* this1217;
  unsigned long __n1218;
  void* unnamed1219;
  char* __retval1220;
  this1217 = v1213;
  __n1218 = v1214;
  unnamed1219 = v1215;
  struct std____new_allocator_char_* t1221 = this1217;
    unsigned long t1222 = __n1218;
    unsigned long r1223 = std____new_allocator_char____M_max_size___const(t1221);
    _Bool c1224 = ((t1222 > r1223)) ? 1 : 0;
    if (c1224) {
        unsigned long t1225 = __n1218;
        unsigned long c1226 = -1;
        unsigned long c1227 = 1;
        unsigned long b1228 = c1226 / c1227;
        _Bool c1229 = ((t1225 > b1228)) ? 1 : 0;
        if (c1229) {
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
    unsigned long c1230 = 1;
    unsigned long c1231 = 16;
    _Bool c1232 = ((c1230 > c1231)) ? 1 : 0;
    if (c1232) {
      unsigned long __al1233;
      unsigned long c1234 = 1;
      __al1233 = c1234;
      unsigned long t1235 = __n1218;
      unsigned long c1236 = 1;
      unsigned long b1237 = t1235 * c1236;
      unsigned long t1238 = __al1233;
      void* r1239 = operator_new_2(b1237, t1238);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
      char* cast1240 = (char*)r1239;
      __retval1220 = cast1240;
      char* t1241 = __retval1220;
      return t1241;
    }
  unsigned long t1242 = __n1218;
  unsigned long c1243 = 1;
  unsigned long b1244 = t1242 * c1243;
  void* r1245 = operator_new(b1244);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  char* cast1246 = (char*)r1245;
  __retval1220 = cast1246;
  char* t1247 = __retval1220;
  return t1247;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1248, unsigned long v1249) {
bb1250:
  struct std__allocator_char_* this1251;
  unsigned long __n1252;
  char* __retval1253;
  this1251 = v1248;
  __n1252 = v1249;
  struct std__allocator_char_* t1254 = this1251;
    _Bool r1255 = std____is_constant_evaluated();
    if (r1255) {
        unsigned long t1256 = __n1252;
        unsigned long c1257 = 1;
        unsigned long ovr1258;
        _Bool ovf1259 = __builtin_mul_overflow(t1256, c1257, &ovr1258);
        __n1252 = ovr1258;
        if (ovf1259) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            char* __cir_eh_ret = (char*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1260 = __n1252;
      void* r1261 = operator_new(t1260);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
      char* cast1262 = (char*)r1261;
      __retval1253 = cast1262;
      char* t1263 = __retval1253;
      return t1263;
    }
  struct std____new_allocator_char_* base1264 = (struct std____new_allocator_char_*)((char *)t1254 + 0);
  unsigned long t1265 = __n1252;
  void* c1266 = ((void*)0);
  char* r1267 = std____new_allocator_char___allocate(base1264, t1265, c1266);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __retval1253 = r1267;
  char* t1268 = __retval1253;
  return t1268;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1269, unsigned long v1270) {
bb1271:
  struct std__allocator_char_* __a1272;
  unsigned long __n1273;
  char* __retval1274;
  __a1272 = v1269;
  __n1273 = v1270;
  struct std__allocator_char_* t1275 = __a1272;
  unsigned long t1276 = __n1273;
  char* r1277 = std__allocator_char___allocate(t1275, t1276);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __retval1274 = r1277;
  char* t1278 = __retval1274;
  return t1278;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1279, unsigned long v1280) {
bb1281:
  struct std__allocator_char_* __a1282;
  unsigned long __n1283;
  char* __retval1284;
  char* __p1285;
  __a1282 = v1279;
  __n1283 = v1280;
  struct std__allocator_char_* t1286 = __a1282;
  unsigned long t1287 = __n1283;
  char* r1288 = std__allocator_traits_std__allocator_char_____allocate(t1286, t1287);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __p1285 = r1288;
  char* t1289 = __p1285;
  __retval1284 = t1289;
  char* t1290 = __retval1284;
  return t1290;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1291) {
bb1292:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1293;
  struct std__allocator_char_* __retval1294;
  this1293 = v1291;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1295 = this1293;
  struct std__allocator_char_* base1296 = (struct std__allocator_char_*)((char *)&(t1295->_M_dataplus) + 0);
  __retval1294 = base1296;
  struct std__allocator_char_* t1297 = __retval1294;
  return t1297;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1298, unsigned long* v1299, unsigned long v1300) {
bb1301:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1302;
  unsigned long* __capacity1303;
  unsigned long __old_capacity1304;
  char* __retval1305;
  this1302 = v1298;
  __capacity1303 = v1299;
  __old_capacity1304 = v1300;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1306 = this1302;
    unsigned long* t1307 = __capacity1303;
    unsigned long t1308 = *t1307;
    unsigned long r1309 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1306);
    _Bool c1310 = ((t1308 > r1309)) ? 1 : 0;
    if (c1310) {
      char* cast1311 = (char*)&(_str_31);
      std____throw_length_error(cast1311);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
    }
    unsigned long* t1312 = __capacity1303;
    unsigned long t1313 = *t1312;
    unsigned long t1314 = __old_capacity1304;
    _Bool c1315 = ((t1313 > t1314)) ? 1 : 0;
    _Bool ternary1316;
    if (c1315) {
      unsigned long* t1317 = __capacity1303;
      unsigned long t1318 = *t1317;
      unsigned long c1319 = 2;
      unsigned long t1320 = __old_capacity1304;
      unsigned long b1321 = c1319 * t1320;
      _Bool c1322 = ((t1318 < b1321)) ? 1 : 0;
      ternary1316 = (_Bool)c1322;
    } else {
      _Bool c1323 = 0;
      ternary1316 = (_Bool)c1323;
    }
    if (ternary1316) {
      unsigned long c1324 = 2;
      unsigned long t1325 = __old_capacity1304;
      unsigned long b1326 = c1324 * t1325;
      unsigned long* t1327 = __capacity1303;
      *t1327 = b1326;
        unsigned long* t1328 = __capacity1303;
        unsigned long t1329 = *t1328;
        unsigned long r1330 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1306);
        _Bool c1331 = ((t1329 > r1330)) ? 1 : 0;
        if (c1331) {
          unsigned long r1332 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1306);
          unsigned long* t1333 = __capacity1303;
          *t1333 = r1332;
        }
    }
  struct std__allocator_char_* r1334 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1306);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  unsigned long* t1335 = __capacity1303;
  unsigned long t1336 = *t1335;
  unsigned long c1337 = 1;
  unsigned long b1338 = t1336 + c1337;
  char* r1339 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1334, b1338);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __retval1305 = r1339;
  char* t1340 = __retval1305;
  return t1340;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1341, unsigned long v1342) {
bb1343:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1344;
  unsigned long __capacity1345;
  this1344 = v1341;
  __capacity1345 = v1342;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1346 = this1344;
  unsigned long t1347 = __capacity1345;
  t1346->field2._M_allocated_capacity = t1347;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1348:
  _Bool __retval1349;
    _Bool c1350 = 0;
    __retval1349 = c1350;
    _Bool t1351 = __retval1349;
    return t1351;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1352) {
bb1353:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1354;
  this1354 = v1352;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1355 = this1354;
    _Bool r1356 = std__is_constant_evaluated();
    if (r1356) {
        unsigned long __i1357;
        unsigned long c1358 = 0;
        __i1357 = c1358;
        while (1) {
          unsigned long t1360 = __i1357;
          unsigned long c1361 = 15;
          _Bool c1362 = ((t1360 <= c1361)) ? 1 : 0;
          if (!c1362) break;
          char c1363 = 0;
          unsigned long t1364 = __i1357;
          t1355->field2._M_local_buf[t1364] = c1363;
        for_step1359: ;
          unsigned long t1365 = __i1357;
          unsigned long u1366 = t1365 + 1;
          __i1357 = u1366;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1367, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1368) {
bb1369:
  struct _Guard* this1370;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1371;
  this1370 = v1367;
  __s1371 = v1368;
  struct _Guard* t1372 = this1370;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1373 = __s1371;
  t1372->_M_guarded = t1373;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1374, char* v1375) {
bb1376:
  char* __location1377;
  char* __args1378;
  char* __retval1379;
  void* __loc1380;
  __location1377 = v1374;
  __args1378 = v1375;
  char* t1381 = __location1377;
  void* cast1382 = (void*)t1381;
  __loc1380 = cast1382;
    void* t1383 = __loc1380;
    char* cast1384 = (char*)t1383;
    char* t1385 = __args1378;
    char t1386 = *t1385;
    *cast1384 = t1386;
    __retval1379 = cast1384;
    char* t1387 = __retval1379;
    return t1387;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1388, char* v1389) {
bb1390:
  char* __c11391;
  char* __c21392;
  __c11391 = v1388;
  __c21392 = v1389;
    _Bool r1393 = std____is_constant_evaluated();
    if (r1393) {
      char* t1394 = __c11391;
      char* t1395 = __c21392;
      char* r1396 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1394, t1395);
    } else {
      char* t1397 = __c21392;
      char t1398 = *t1397;
      char* t1399 = __c11391;
      *t1399 = t1398;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1400, char* v1401, unsigned long v1402) {
bb1403:
  char* __s11404;
  char* __s21405;
  unsigned long __n1406;
  char* __retval1407;
  __s11404 = v1400;
  __s21405 = v1401;
  __n1406 = v1402;
    unsigned long t1408 = __n1406;
    unsigned long c1409 = 0;
    _Bool c1410 = ((t1408 == c1409)) ? 1 : 0;
    if (c1410) {
      char* t1411 = __s11404;
      __retval1407 = t1411;
      char* t1412 = __retval1407;
      return t1412;
    }
    _Bool r1413 = std____is_constant_evaluated();
    if (r1413) {
        unsigned long __i1414;
        unsigned long c1415 = 0;
        __i1414 = c1415;
        while (1) {
          unsigned long t1417 = __i1414;
          unsigned long t1418 = __n1406;
          _Bool c1419 = ((t1417 < t1418)) ? 1 : 0;
          if (!c1419) break;
          char* t1420 = __s11404;
          unsigned long t1421 = __i1414;
          char* ptr1422 = &(t1420)[t1421];
          unsigned long t1423 = __i1414;
          char* t1424 = __s21405;
          char* ptr1425 = &(t1424)[t1423];
          char* r1426 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1422, ptr1425);
        for_step1416: ;
          unsigned long t1427 = __i1414;
          unsigned long u1428 = t1427 + 1;
          __i1414 = u1428;
        }
      char* t1429 = __s11404;
      __retval1407 = t1429;
      char* t1430 = __retval1407;
      return t1430;
    }
  char* t1431 = __s11404;
  void* cast1432 = (void*)t1431;
  char* t1433 = __s21405;
  void* cast1434 = (void*)t1433;
  unsigned long t1435 = __n1406;
  unsigned long c1436 = 1;
  unsigned long b1437 = t1435 * c1436;
  void* r1438 = memcpy(cast1432, cast1434, b1437);
  char* t1439 = __s11404;
  __retval1407 = t1439;
  char* t1440 = __retval1407;
  return t1440;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1441, char* v1442, unsigned long v1443) {
bb1444:
  char* __s11445;
  char* __s21446;
  unsigned long __n1447;
  char* __retval1448;
  __s11445 = v1441;
  __s21446 = v1442;
  __n1447 = v1443;
    unsigned long t1449 = __n1447;
    unsigned long c1450 = 0;
    _Bool c1451 = ((t1449 == c1450)) ? 1 : 0;
    if (c1451) {
      char* t1452 = __s11445;
      __retval1448 = t1452;
      char* t1453 = __retval1448;
      return t1453;
    }
    _Bool r1454 = std____is_constant_evaluated();
    if (r1454) {
      char* t1455 = __s11445;
      char* t1456 = __s21446;
      unsigned long t1457 = __n1447;
      char* r1458 = __gnu_cxx__char_traits_char___copy(t1455, t1456, t1457);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
      __retval1448 = r1458;
      char* t1459 = __retval1448;
      return t1459;
    }
  char* t1460 = __s11445;
  void* cast1461 = (void*)t1460;
  char* t1462 = __s21446;
  void* cast1463 = (void*)t1462;
  unsigned long t1464 = __n1447;
  void* r1465 = memcpy(cast1461, cast1463, t1464);
  char* cast1466 = (char*)r1465;
  __retval1448 = cast1466;
  char* t1467 = __retval1448;
  return t1467;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1468, char* v1469, unsigned long v1470) {
bb1471:
  char* __d1472;
  char* __s1473;
  unsigned long __n1474;
  __d1472 = v1468;
  __s1473 = v1469;
  __n1474 = v1470;
    unsigned long t1475 = __n1474;
    unsigned long c1476 = 1;
    _Bool c1477 = ((t1475 == c1476)) ? 1 : 0;
    if (c1477) {
      char* t1478 = __d1472;
      char* t1479 = __s1473;
      std__char_traits_char___assign(t1478, t1479);
    } else {
      char* t1480 = __d1472;
      char* t1481 = __s1473;
      unsigned long t1482 = __n1474;
      char* r1483 = std__char_traits_char___copy(t1480, t1481, t1482);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1484) {
bb1485:
  char* __it1486;
  char* __retval1487;
  __it1486 = v1484;
  char* t1488 = __it1486;
  __retval1487 = t1488;
  char* t1489 = __retval1487;
  return t1489;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1490, char* v1491, char* v1492) {
bb1493:
  char* __p1494;
  char* __k11495;
  char* __k21496;
  __p1494 = v1490;
  __k11495 = v1491;
  __k21496 = v1492;
    char* t1497 = __p1494;
    char* t1498 = __k11495;
    char* r1499 = char_const__std____niter_base_char_const__(t1498);
    char* t1500 = __k21496;
    char* t1501 = __k11495;
    long diff1502 = t1500 - t1501;
    unsigned long cast1503 = (unsigned long)diff1502;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1497, r1499, cast1503);
    if (__cir_exc_active) {
      return;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1504) {
bb1505:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1506;
  char* __retval1507;
  this1506 = v1504;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1508 = this1506;
  char* t1509 = t1508->_M_dataplus._M_p;
  __retval1507 = t1509;
  char* t1510 = __retval1507;
  return t1510;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1511, unsigned long v1512) {
bb1513:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1514;
  unsigned long __length1515;
  this1514 = v1511;
  __length1515 = v1512;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1516 = this1514;
  unsigned long t1517 = __length1515;
  t1516->_M_string_length = t1517;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1518, unsigned long v1519) {
bb1520:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1521;
  unsigned long __n1522;
  char ref_tmp01523;
  this1521 = v1518;
  __n1522 = v1519;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1524 = this1521;
  unsigned long t1525 = __n1522;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1524, t1525);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t1526 = __n1522;
  char* r1527 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1524);
  if (__cir_exc_active) {
    return;
  }
  char* ptr1528 = &(r1527)[t1526];
  char c1529 = 0;
  ref_tmp01523 = c1529;
  std__char_traits_char___assign(ptr1528, &ref_tmp01523);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1530) {
bb1531:
  struct _Guard* this1532;
  this1532 = v1530;
  struct _Guard* t1533 = this1532;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1534 = t1533->_M_guarded;
    _Bool cast1535 = (_Bool)t1534;
    if (cast1535) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1536 = t1533->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1536);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1537, char* v1538, char* v1539, struct std__forward_iterator_tag v1540) {
bb1541:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1542;
  char* __beg1543;
  char* __end1544;
  struct std__forward_iterator_tag unnamed1545;
  unsigned long __dnew1546;
  struct _Guard __guard1547;
  this1542 = v1537;
  __beg1543 = v1538;
  __end1544 = v1539;
  unnamed1545 = v1540;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1548 = this1542;
  char* t1549 = __beg1543;
  char* t1550 = __end1544;
  long r1551 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1549, t1550);
  if (__cir_exc_active) {
    return;
  }
  unsigned long cast1552 = (unsigned long)r1551;
  __dnew1546 = cast1552;
    unsigned long t1553 = __dnew1546;
    unsigned long c1554 = 15;
    _Bool c1555 = ((t1553 > c1554)) ? 1 : 0;
    if (c1555) {
      unsigned long c1556 = 0;
      char* r1557 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1548, &__dnew1546, c1556);
      if (__cir_exc_active) {
        return;
      }
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1548, r1557);
      if (__cir_exc_active) {
        return;
      }
      unsigned long t1558 = __dnew1546;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1548, t1558);
      if (__cir_exc_active) {
        return;
      }
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1548);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1547, t1548);
  if (__cir_exc_active) {
    return;
  }
    char* r1559 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1548);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1547);
      }
      return;
    }
    char* t1560 = __beg1543;
    char* t1561 = __end1544;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1559, t1560, t1561);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1547);
      }
      return;
    }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1562 = ((void*)0);
    __guard1547._M_guarded = c1562;
    unsigned long t1563 = __dnew1546;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1548, t1563);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1547);
      }
      return;
    }
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1547);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1564) {
bb1565:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1566;
  this1566 = v1564;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1567 = this1566;
  {
    struct std__allocator_char_* base1568 = (struct std__allocator_char_*)((char *)t1567 + 0);
    std__allocator_char____allocator(base1568);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1569, struct std____new_allocator_char_* v1570) {
bb1571:
  struct std____new_allocator_char_* this1572;
  struct std____new_allocator_char_* unnamed1573;
  this1572 = v1569;
  unnamed1573 = v1570;
  struct std____new_allocator_char_* t1574 = this1572;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1575, struct std__allocator_char_* v1576) {
bb1577:
  struct std__allocator_char_* this1578;
  struct std__allocator_char_* __a1579;
  this1578 = v1575;
  __a1579 = v1576;
  struct std__allocator_char_* t1580 = this1578;
  struct std____new_allocator_char_* base1581 = (struct std____new_allocator_char_*)((char *)t1580 + 0);
  struct std__allocator_char_* t1582 = __a1579;
  struct std____new_allocator_char_* base1583 = (struct std____new_allocator_char_*)((char *)t1582 + 0);
  std____new_allocator_char_____new_allocator(base1581, base1583);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1584) {
bb1585:
  char* __r1586;
  char* __retval1587;
  __r1586 = v1584;
  char* t1588 = __r1586;
  __retval1587 = t1588;
  char* t1589 = __retval1587;
  return t1589;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1590) {
bb1591:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1592;
  char* __retval1593;
  this1592 = v1590;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1594 = this1592;
  char* cast1595 = (char*)&(t1594->field2._M_local_buf);
  char* r1596 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1595);
  __retval1593 = r1596;
  char* t1597 = __retval1593;
  return t1597;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1598) {
bb1599:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1600;
  _Bool __retval1601;
  this1600 = v1598;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1602 = this1600;
    char* r1603 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1602);
    if (__cir_exc_active) {
      _Bool __cir_eh_ret = (_Bool)0;
      return __cir_eh_ret;
    }
    char* r1604 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1602);
    if (__cir_exc_active) {
      _Bool __cir_eh_ret = (_Bool)0;
      return __cir_eh_ret;
    }
    _Bool c1605 = ((r1603 == r1604)) ? 1 : 0;
    if (c1605) {
        unsigned long t1606 = t1602->_M_string_length;
        unsigned long c1607 = 15;
        _Bool c1608 = ((t1606 > c1607)) ? 1 : 0;
        if (c1608) {
          __builtin_unreachable();
        }
      _Bool c1609 = 1;
      __retval1601 = c1609;
      _Bool t1610 = __retval1601;
      return t1610;
    }
  _Bool c1611 = 0;
  __retval1601 = c1611;
  _Bool t1612 = __retval1601;
  return t1612;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1613, char* v1614, unsigned long v1615) {
bb1616:
  struct std____new_allocator_char_* this1617;
  char* __p1618;
  unsigned long __n1619;
  this1617 = v1613;
  __p1618 = v1614;
  __n1619 = v1615;
  struct std____new_allocator_char_* t1620 = this1617;
    unsigned long c1621 = 1;
    unsigned long c1622 = 16;
    _Bool c1623 = ((c1621 > c1622)) ? 1 : 0;
    if (c1623) {
      char* t1624 = __p1618;
      void* cast1625 = (void*)t1624;
      unsigned long t1626 = __n1619;
      unsigned long c1627 = 1;
      unsigned long b1628 = t1626 * c1627;
      unsigned long c1629 = 1;
      operator_delete_3(cast1625, b1628, c1629);
      return;
    }
  char* t1630 = __p1618;
  void* cast1631 = (void*)t1630;
  unsigned long t1632 = __n1619;
  unsigned long c1633 = 1;
  unsigned long b1634 = t1632 * c1633;
  operator_delete_2(cast1631, b1634);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1635, char* v1636, unsigned long v1637) {
bb1638:
  struct std__allocator_char_* this1639;
  char* __p1640;
  unsigned long __n1641;
  this1639 = v1635;
  __p1640 = v1636;
  __n1641 = v1637;
  struct std__allocator_char_* t1642 = this1639;
    _Bool r1643 = std____is_constant_evaluated();
    if (r1643) {
      char* t1644 = __p1640;
      void* cast1645 = (void*)t1644;
      operator_delete(cast1645);
      return;
    }
  struct std____new_allocator_char_* base1646 = (struct std____new_allocator_char_*)((char *)t1642 + 0);
  char* t1647 = __p1640;
  unsigned long t1648 = __n1641;
  std____new_allocator_char___deallocate(base1646, t1647, t1648);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1649, char* v1650, unsigned long v1651) {
bb1652:
  struct std__allocator_char_* __a1653;
  char* __p1654;
  unsigned long __n1655;
  __a1653 = v1649;
  __p1654 = v1650;
  __n1655 = v1651;
  struct std__allocator_char_* t1656 = __a1653;
  char* t1657 = __p1654;
  unsigned long t1658 = __n1655;
  std__allocator_char___deallocate(t1656, t1657, t1658);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1659, unsigned long v1660) {
bb1661:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1662;
  unsigned long __size1663;
  this1662 = v1659;
  __size1663 = v1660;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1664 = this1662;
  struct std__allocator_char_* r1665 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1664);
  if (__cir_exc_active) {
    return;
  }
  char* r1666 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1664);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t1667 = __size1663;
  unsigned long c1668 = 1;
  unsigned long b1669 = t1667 + c1668;
  std__allocator_traits_std__allocator_char_____deallocate(r1665, r1666, b1669);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1670) {
bb1671:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1672;
  this1672 = v1670;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1673 = this1672;
    _Bool r1674 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1673);
    if (__cir_exc_active) {
      return;
    }
    _Bool u1675 = !r1674;
    if (u1675) {
      unsigned long t1676 = t1673->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1673, t1676);
    }
  return;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v1677) {
bb1678:
  struct std__basic_streambuf_char__std__char_traits_char__* this1679;
  this1679 = v1677;
  struct std__basic_streambuf_char__std__char_traits_char__* t1680 = this1679;
  {
    std__locale___locale(&t1680->_M_buf_locale);
  }
  return;
}

