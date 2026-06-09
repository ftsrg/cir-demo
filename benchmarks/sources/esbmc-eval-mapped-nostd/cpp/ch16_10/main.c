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
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_filebuf_char__std__char_traits_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; union pthread_mutex_t __field1; struct std____basic_file_char_ _M_file; int __field3; struct __mbstate_t __field4; struct __mbstate_t __field5; struct __mbstate_t __field6; char* __field7; unsigned long __field8; _Bool __field9; _Bool __field10; _Bool __field11; char __field12; char* __field13; char* __field14; _Bool __field15; struct std__codecvt_char__char____mbstate_t_* __field16; char* __field17; long __field18; char* __field19; char* __field20; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long _M_gcount; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__basic_ifstream_char__std__char_traits_char__ { struct std__basic_istream_char__std__char_traits_char__ __field0; struct std__basic_filebuf_char__std__char_traits_char__ _M_filebuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ofstream_char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__ __field0; struct std__basic_filebuf_char__std__char_traits_char__ _M_filebuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void *_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[];
char __const_main_query[1024];
int _ZNSt8ios_base3outE_const __attribute__((aligned(4))) = 16;
int _ZNSt8ios_base7goodbitE_const __attribute__((aligned(4))) = 0;
int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base3appE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base2inE_const __attribute__((aligned(4))) = 8;
char _str[1];
char _str_1[15] = "CONTENT_LENGTH";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_2[6] = "user=";
char _str_3[2] = "&";
char _str_4[10] = "password=";
char _str_5[5] = "&new";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_6[21] = "<p>Please login.</p>";
char _str_7[23] = "<form method = \"post\" ";
char _str_8[34] = "action = \"/cgi-bin/login.cgi\"><p>";
char _str_9[12] = "User Name: ";
char _str_10[42] = "<input type = \"text\" name = \"user\"/><br/>";
char _str_11[11] = "Password: ";
char _str_12[26] = "<input type = \"password\" ";
char _str_13[25] = "name = \"password\"/><br/>";
char _str_14[30] = "New? <input type = \"checkbox\"";
char _str_15[15] = " name = \"new\" ";
char _str_16[18] = "value = \"1\"/></p>";
char _str_17[41] = "<input type = \"submit\" value = \"login\"/>";
char _str_18[8] = "</form>";
char _str_19[13] = "userdata.txt";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cerr __attribute__((aligned(8)));
char _str_20[25] = "Could not open database.";
char _str_21[41] = "<p>This name has already been taken.</p>";
char _str_22[30] = "<a href=\"/cgi-bin/login.cgi\">";
char _str_23[14] = "Try Again</a>";
char _str_24[2] = "\n";
char _str_25[40] = "<p>Your information has been processed.";
char _str_26[29] = "<a href=\"/cgi-bin/shop.cgi\">";
char _str_27[23] = "Start Shopping</a></p>";
char _str_28[29] = "<p>Thank you for returning, ";
char _str_29[6] = "!</p>";
char _str_30[19] = "Start Shopping</a>";
char _str_31[34] = "<p>You have entered an incorrect ";
char _str_32[32] = "password. Please try again.</p>";
char _str_33[18] = "Back to login</a>";
char _str_34[38] = "<p>You are not a registered user.</p>";
char _str_35[13] = "Register</a>";
char _str_36[17] = "</body>\n</html>\n";
char _str_37[26] = "Content-type: text/html\n\n";
char _str_38[24] = "<?xml version = \"1.0\"?>";
char _str_39[46] = "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 ";
char _str_40[47] = "Transitional//EN\" \"http://www.w3.org/TR/xhtml1";
char _str_41[31] = "/DTD/xhtml1-transitional.dtd\">";
char _str_42[46] = "<html xmlns = \"http://www.w3.org/1999/xhtml\">";
char _str_43[39] = "<head><title>Login Page</title></head>";
char _str_44[7] = "<body>";
char _str_45[31] = "Friday, 14-MAY-04 16:00:00 GMT";
char _str_46[28] = "set-cookie: CART=; expires=";
char _str_47[9] = "; path=\n";
char _str_48[50] = "basic_string: construction from null is not valid";
char _str_49[24] = "basic_string::_M_create";
char _str_50[25] = "basic_string::_M_replace";
char _str_51[21] = "basic_string::substr";
char _str_52[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_53[27] = "basic_string::basic_string";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void *_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[];
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
extern char* getenv(char* p0);
extern int atoi(char* p0);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__read(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1, long p2);
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
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* __gnu_cxx__char_traits_char___find(char* p0, unsigned long p1, char* p2);
char* std__char_traits_char___find(char* p0, unsigned long p1, char* p2);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, unsigned long p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1, unsigned long p2, unsigned long p3);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void header();
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__2(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
extern void std__ios_base__ios_base(struct std__ios_base* p0);
void std__ios_base___ios_base(struct std__ios_base* p0) {}
void std__basic_ios_char__std__char_traits_char_____basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_istream_char__std__char_traits_char_____basic_istream(struct std__basic_istream_char__std__char_traits_char__* p0, void** p1);
extern void std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* p0);
extern void std__basic_ios_char__std__char_traits_char_____init(struct std__basic_ios_char__std__char_traits_char__* p0, struct std__basic_streambuf_char__std__char_traits_char__* p1);
extern struct std__basic_filebuf_char__std__char_traits_char__* std__basic_filebuf_char__std__char_traits_char_____open(struct std__basic_filebuf_char__std__char_traits_char__* p0, char* p1, int p2);
int std__operator__3(int p0, int p1);
void std__basic_ifstream_char__std__char_traits_char_____open(struct std__basic_ifstream_char__std__char_traits_char__* p0, char* p1, int p2);
void std__basic_filebuf_char__std__char_traits_char______basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* p0);
void std__basic_istream_char__std__char_traits_char______basic_istream(struct std__basic_istream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* p0, char* p1, int p2);
int std__operator_(int p0, int p1);
_Bool std__basic_ios_char__std__char_traits_char_____fail___const(struct std__basic_ios_char__std__char_traits_char__* p0);
_Bool std__basic_ios_char__std__char_traits_char_____operator____const(struct std__basic_ios_char__std__char_traits_char__* p0);
extern void exit(int p0);
extern struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___std__allocator_char___(struct std__basic_istream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
_Bool std__basic_ios_char__std__char_traits_char_____operator_bool___const(struct std__basic_ios_char__std__char_traits_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char____2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void writeCookie();
void std__basic_ostream_char__std__char_traits_char_____basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ofstream_char__std__char_traits_char_____open(struct std__basic_ofstream_char__std__char_traits_char__* p0, char* p1, int p2);
void std__basic_ostream_char__std__char_traits_char______basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ofstream_char__std__char_traits_char_____basic_ofstream(struct std__basic_ofstream_char__std__char_traits_char__* p0, char* p1, int p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream_2(struct std__basic_ofstream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream(struct std__basic_ofstream_char__std__char_traits_char__* p0);
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream_2(struct std__basic_ifstream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* p0);
int main();
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
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
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
extern int __gxx_personality_v0();
extern struct std__basic_filebuf_char__std__char_traits_char__* std__basic_filebuf_char__std__char_traits_char_____close(struct std__basic_filebuf_char__std__char_traits_char__* p0);
void std____basic_file_char______basic_file(struct std____basic_file_char_* p0) {}
void std__locale___locale(struct std__locale* p0) {}
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* p0);

extern unsigned char* _ZTTSt14basic_ifstreamIcSt11char_traitsIcEE[4] __attribute__((aligned(8)));
extern unsigned char* _ZTTSt14basic_ofstreamIcSt11char_traitsIcEE[4] __attribute__((aligned(8)));

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
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t14->_M_dataplus, r15, t16);
  if (__cir_exc_active) {
    return;
  }
      char* t17 = __s10;
      char* c18 = ((void*)0);
      _Bool c19 = ((t17 == c18)) ? 1 : 0;
      if (c19) {
        char* cast20 = (char*)&(_str_48);
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

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v32, unsigned long v33, unsigned long v34, char* v35) {
bb36:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this37;
  unsigned long __n138;
  unsigned long __n239;
  char* __s40;
  this37 = v32;
  __n138 = v33;
  __n239 = v34;
  __s40 = v35;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t41 = this37;
    unsigned long r42 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t41);
    unsigned long r43 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t41);
    unsigned long t44 = __n138;
    unsigned long b45 = r43 - t44;
    unsigned long b46 = r42 - b45;
    unsigned long t47 = __n239;
    _Bool c48 = ((b46 < t47)) ? 1 : 0;
    if (c48) {
      char* t49 = __s40;
      std____throw_length_error(t49);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v50) {
bb51:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this52;
  unsigned long __retval53;
  unsigned long __sz54;
  this52 = v50;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t55 = this52;
  _Bool r56 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t55);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long ternary57;
  if (r56) {
    unsigned long c58 = 15;
    ternary57 = (unsigned long)c58;
  } else {
    unsigned long t59 = t55->field2._M_allocated_capacity;
    ternary57 = (unsigned long)t59;
  }
  __sz54 = ternary57;
    unsigned long t60 = __sz54;
    unsigned long c61 = 15;
    _Bool c62 = ((t60 < c61)) ? 1 : 0;
    _Bool ternary63;
    if (c62) {
      _Bool c64 = 1;
      ternary63 = (_Bool)c64;
    } else {
      unsigned long t65 = __sz54;
      unsigned long r66 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t55);
      _Bool c67 = ((t65 > r66)) ? 1 : 0;
      ternary63 = (_Bool)c67;
    }
    if (ternary63) {
      __builtin_unreachable();
    }
  unsigned long t68 = __sz54;
  __retval53 = t68;
  unsigned long t69 = __retval53;
  return t69;
}

// function: _ZNKSt4lessIPKcEclES1_S1_
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* v70, char* v71, char* v72) {
bb73:
  struct std__less_const_char___* this74;
  char* __x75;
  char* __y76;
  _Bool __retval77;
  this74 = v70;
  __x75 = v71;
  __y76 = v72;
  struct std__less_const_char___* t78 = this74;
    _Bool r79 = std____is_constant_evaluated();
    if (r79) {
      char* t80 = __x75;
      char* t81 = __y76;
      _Bool c82 = ((t80 < t81)) ? 1 : 0;
      __retval77 = c82;
      _Bool t83 = __retval77;
      return t83;
    }
  char* t84 = __x75;
  unsigned long cast85 = (unsigned long)t84;
  char* t86 = __y76;
  unsigned long cast87 = (unsigned long)t86;
  _Bool c88 = ((cast85 < cast87)) ? 1 : 0;
  __retval77 = c88;
  _Bool t89 = __retval77;
  return t89;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_disjunctEPKc
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v90, char* v91) {
bb92:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this93;
  char* __s94;
  _Bool __retval95;
  struct std__less_const_char___ ref_tmp096;
  this93 = v90;
  __s94 = v91;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t97 = this93;
  char* t98 = __s94;
  char* r99 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t97);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  _Bool r100 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp096, t98, r99);
  _Bool ternary101;
  if (r100) {
    _Bool c102 = 1;
    ternary101 = (_Bool)c102;
  } else {
    struct std__less_const_char___ ref_tmp1103;
    char* r104 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t97);
    if (__cir_exc_active) {
      _Bool __cir_eh_ret = (_Bool)0;
      return __cir_eh_ret;
    }
    unsigned long r105 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t97);
    char* ptr106 = &(r104)[r105];
    char* t107 = __s94;
    _Bool r108 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp1103, ptr106, t107);
    ternary101 = (_Bool)r108;
  }
  __retval95 = ternary101;
  _Bool t109 = __retval95;
  return t109;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign(char* v110, char* v111) {
bb112:
  char* __c1113;
  char* __c2114;
  __c1113 = v110;
  __c2114 = v111;
    _Bool r115 = std____is_constant_evaluated();
    if (r115) {
      char* t116 = __c1113;
      char* t117 = __c2114;
      char* r118 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t116, t117);
    } else {
      char* t119 = __c2114;
      char t120 = *t119;
      char* t121 = __c1113;
      *t121 = t120;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v122, char* v123, unsigned long v124) {
bb125:
  char* __s1126;
  char* __s2127;
  unsigned long __n128;
  char* __retval129;
  __s1126 = v122;
  __s2127 = v123;
  __n128 = v124;
    unsigned long t130 = __n128;
    unsigned long c131 = 0;
    _Bool c132 = ((t130 == c131)) ? 1 : 0;
    if (c132) {
      char* t133 = __s1126;
      __retval129 = t133;
      char* t134 = __retval129;
      return t134;
    }
    _Bool r135 = std____is_constant_evaluated();
    if (r135) {
        char* t136 = __s2127;
        char* t137 = __s1126;
        _Bool c138 = ((t136 < t137)) ? 1 : 0;
        _Bool isconst139 = 0;
        _Bool ternary140;
        if (isconst139) {
          char* t141 = __s1126;
          char* t142 = __s2127;
          _Bool c143 = ((t141 > t142)) ? 1 : 0;
          ternary140 = (_Bool)c143;
        } else {
          _Bool c144 = 0;
          ternary140 = (_Bool)c144;
        }
        _Bool ternary145;
        if (ternary140) {
          char* t146 = __s1126;
          char* t147 = __s2127;
          unsigned long t148 = __n128;
          char* ptr149 = &(t147)[t148];
          _Bool c150 = ((t146 < ptr149)) ? 1 : 0;
          ternary145 = (_Bool)c150;
        } else {
          _Bool c151 = 0;
          ternary145 = (_Bool)c151;
        }
        if (ternary145) {
            do {
                unsigned long t152 = __n128;
                unsigned long u153 = t152 - 1;
                __n128 = u153;
                unsigned long t154 = __n128;
                char* t155 = __s1126;
                char* ptr156 = &(t155)[t154];
                unsigned long t157 = __n128;
                char* t158 = __s2127;
                char* ptr159 = &(t158)[t157];
                __gnu_cxx__char_traits_char___assign(ptr156, ptr159);
                if (__cir_exc_active) {
                  char* __cir_eh_ret = (char*)0;
                  return __cir_eh_ret;
                }
              unsigned long t160 = __n128;
              unsigned long c161 = 0;
              _Bool c162 = ((t160 > c161)) ? 1 : 0;
              if (!c162) break;
            } while (1);
        } else {
          char* t163 = __s1126;
          char* t164 = __s2127;
          unsigned long t165 = __n128;
          char* r166 = __gnu_cxx__char_traits_char___copy(t163, t164, t165);
          if (__cir_exc_active) {
            char* __cir_eh_ret = (char*)0;
            return __cir_eh_ret;
          }
        }
      char* t167 = __s1126;
      __retval129 = t167;
      char* t168 = __retval129;
      return t168;
    }
  char* t169 = __s1126;
  void* cast170 = (void*)t169;
  char* t171 = __s2127;
  void* cast172 = (void*)t171;
  unsigned long t173 = __n128;
  unsigned long c174 = 1;
  unsigned long b175 = t173 * c174;
  void* r176 = memmove(cast170, cast172, b175);
  char* t177 = __s1126;
  __retval129 = t177;
  char* t178 = __retval129;
  return t178;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v179, char* v180, unsigned long v181) {
bb182:
  char* __s1183;
  char* __s2184;
  unsigned long __n185;
  char* __retval186;
  __s1183 = v179;
  __s2184 = v180;
  __n185 = v181;
    unsigned long t187 = __n185;
    unsigned long c188 = 0;
    _Bool c189 = ((t187 == c188)) ? 1 : 0;
    if (c189) {
      char* t190 = __s1183;
      __retval186 = t190;
      char* t191 = __retval186;
      return t191;
    }
    _Bool r192 = std____is_constant_evaluated();
    if (r192) {
      char* t193 = __s1183;
      char* t194 = __s2184;
      unsigned long t195 = __n185;
      char* r196 = __gnu_cxx__char_traits_char___move(t193, t194, t195);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
      __retval186 = r196;
      char* t197 = __retval186;
      return t197;
    }
  char* t198 = __s1183;
  void* cast199 = (void*)t198;
  char* t200 = __s2184;
  void* cast201 = (void*)t200;
  unsigned long t202 = __n185;
  void* r203 = memmove(cast199, cast201, t202);
  char* cast204 = (char*)r203;
  __retval186 = cast204;
  char* t205 = __retval186;
  return t205;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v206, char* v207, unsigned long v208) {
bb209:
  char* __d210;
  char* __s211;
  unsigned long __n212;
  __d210 = v206;
  __s211 = v207;
  __n212 = v208;
    unsigned long t213 = __n212;
    unsigned long c214 = 1;
    _Bool c215 = ((t213 == c214)) ? 1 : 0;
    if (c215) {
      char* t216 = __d210;
      char* t217 = __s211;
      std__char_traits_char___assign(t216, t217);
    } else {
      char* t218 = __d210;
      char* t219 = __s211;
      unsigned long t220 = __n212;
      char* r221 = std__char_traits_char___move(t218, t219, t220);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_replace_coldEPcmPKcmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v222, char* v223, unsigned long v224, char* v225, unsigned long v226, unsigned long v227) {
bb228:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this229;
  char* __p230;
  unsigned long __len1231;
  char* __s232;
  unsigned long __len2233;
  unsigned long __how_much234;
  this229 = v222;
  __p230 = v223;
  __len1231 = v224;
  __s232 = v225;
  __len2233 = v226;
  __how_much234 = v227;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t235 = this229;
    unsigned long t236 = __len2233;
    _Bool cast237 = (_Bool)t236;
    _Bool ternary238;
    if (cast237) {
      unsigned long t239 = __len2233;
      unsigned long t240 = __len1231;
      _Bool c241 = ((t239 <= t240)) ? 1 : 0;
      ternary238 = (_Bool)c241;
    } else {
      _Bool c242 = 0;
      ternary238 = (_Bool)c242;
    }
    if (ternary238) {
      char* t243 = __p230;
      char* t244 = __s232;
      unsigned long t245 = __len2233;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t243, t244, t245);
      if (__cir_exc_active) {
        return;
      }
    }
    unsigned long t246 = __how_much234;
    _Bool cast247 = (_Bool)t246;
    _Bool ternary248;
    if (cast247) {
      unsigned long t249 = __len1231;
      unsigned long t250 = __len2233;
      _Bool c251 = ((t249 != t250)) ? 1 : 0;
      ternary248 = (_Bool)c251;
    } else {
      _Bool c252 = 0;
      ternary248 = (_Bool)c252;
    }
    if (ternary248) {
      char* t253 = __p230;
      unsigned long t254 = __len2233;
      char* ptr255 = &(t253)[t254];
      char* t256 = __p230;
      unsigned long t257 = __len1231;
      char* ptr258 = &(t256)[t257];
      unsigned long t259 = __how_much234;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr255, ptr258, t259);
      if (__cir_exc_active) {
        return;
      }
    }
    unsigned long t260 = __len2233;
    unsigned long t261 = __len1231;
    _Bool c262 = ((t260 > t261)) ? 1 : 0;
    if (c262) {
        char* t263 = __s232;
        unsigned long t264 = __len2233;
        char* ptr265 = &(t263)[t264];
        char* t266 = __p230;
        unsigned long t267 = __len1231;
        char* ptr268 = &(t266)[t267];
        _Bool c269 = ((ptr265 <= ptr268)) ? 1 : 0;
        if (c269) {
          char* t270 = __p230;
          char* t271 = __s232;
          unsigned long t272 = __len2233;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t270, t271, t272);
          if (__cir_exc_active) {
            return;
          }
        } else {
            char* t273 = __s232;
            char* t274 = __p230;
            unsigned long t275 = __len1231;
            char* ptr276 = &(t274)[t275];
            _Bool c277 = ((t273 >= ptr276)) ? 1 : 0;
            if (c277) {
              unsigned long __poff278;
              char* t279 = __s232;
              char* t280 = __p230;
              long diff281 = t279 - t280;
              unsigned long cast282 = (unsigned long)diff281;
              unsigned long t283 = __len2233;
              unsigned long t284 = __len1231;
              unsigned long b285 = t283 - t284;
              unsigned long b286 = cast282 + b285;
              __poff278 = b286;
              char* t287 = __p230;
              char* t288 = __p230;
              unsigned long t289 = __poff278;
              char* ptr290 = &(t288)[t289];
              unsigned long t291 = __len2233;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t287, ptr290, t291);
              if (__cir_exc_active) {
                return;
              }
            } else {
              unsigned long __nleft292;
              char* t293 = __p230;
              unsigned long t294 = __len1231;
              char* ptr295 = &(t293)[t294];
              char* t296 = __s232;
              long diff297 = ptr295 - t296;
              unsigned long cast298 = (unsigned long)diff297;
              __nleft292 = cast298;
              char* t299 = __p230;
              char* t300 = __s232;
              unsigned long t301 = __nleft292;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t299, t300, t301);
              if (__cir_exc_active) {
                return;
              }
              char* t302 = __p230;
              unsigned long t303 = __nleft292;
              char* ptr304 = &(t302)[t303];
              char* t305 = __p230;
              unsigned long t306 = __len2233;
              char* ptr307 = &(t305)[t306];
              unsigned long t308 = __len2233;
              unsigned long t309 = __nleft292;
              unsigned long b310 = t308 - t309;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr304, ptr307, b310);
              if (__cir_exc_active) {
                return;
              }
            }
        }
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v311) {
bb312:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this313;
  unsigned long __retval314;
  this313 = v311;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t315 = this313;
  unsigned long r316 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t315);
  __retval314 = r316;
  unsigned long t317 = __retval314;
  return t317;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v318, unsigned long v319, unsigned long v320, char* v321, unsigned long v322) {
bb323:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this324;
  unsigned long __pos325;
  unsigned long __len1326;
  char* __s327;
  unsigned long __len2328;
  unsigned long __how_much329;
  unsigned long __new_capacity330;
  char* __r331;
  this324 = v318;
  __pos325 = v319;
  __len1326 = v320;
  __s327 = v321;
  __len2328 = v322;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t332 = this324;
  unsigned long r333 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t332);
  unsigned long t334 = __pos325;
  unsigned long b335 = r333 - t334;
  unsigned long t336 = __len1326;
  unsigned long b337 = b335 - t336;
  __how_much329 = b337;
  unsigned long r338 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t332);
  unsigned long t339 = __len2328;
  unsigned long b340 = r338 + t339;
  unsigned long t341 = __len1326;
  unsigned long b342 = b340 - t341;
  __new_capacity330 = b342;
  unsigned long r343 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t332);
  char* r344 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t332, &__new_capacity330, r343);
  if (__cir_exc_active) {
    return;
  }
  __r331 = r344;
    unsigned long t345 = __pos325;
    _Bool cast346 = (_Bool)t345;
    if (cast346) {
      char* t347 = __r331;
      char* r348 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t332);
      if (__cir_exc_active) {
        return;
      }
      unsigned long t349 = __pos325;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t347, r348, t349);
      if (__cir_exc_active) {
        return;
      }
    }
    char* t350 = __s327;
    _Bool cast351 = (_Bool)t350;
    _Bool ternary352;
    if (cast351) {
      unsigned long t353 = __len2328;
      _Bool cast354 = (_Bool)t353;
      ternary352 = (_Bool)cast354;
    } else {
      _Bool c355 = 0;
      ternary352 = (_Bool)c355;
    }
    if (ternary352) {
      char* t356 = __r331;
      unsigned long t357 = __pos325;
      char* ptr358 = &(t356)[t357];
      char* t359 = __s327;
      unsigned long t360 = __len2328;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr358, t359, t360);
      if (__cir_exc_active) {
        return;
      }
    }
    unsigned long t361 = __how_much329;
    _Bool cast362 = (_Bool)t361;
    if (cast362) {
      char* t363 = __r331;
      unsigned long t364 = __pos325;
      char* ptr365 = &(t363)[t364];
      unsigned long t366 = __len2328;
      char* ptr367 = &(ptr365)[t366];
      char* r368 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t332);
      if (__cir_exc_active) {
        return;
      }
      unsigned long t369 = __pos325;
      char* ptr370 = &(r368)[t369];
      unsigned long t371 = __len1326;
      char* ptr372 = &(ptr370)[t371];
      unsigned long t373 = __how_much329;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr367, ptr372, t373);
      if (__cir_exc_active) {
        return;
      }
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t332);
  if (__cir_exc_active) {
    return;
  }
  char* t374 = __r331;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t332, t374);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t375 = __new_capacity330;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t332, t375);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v376, unsigned long v377, unsigned long v378, char* v379, unsigned long v380) {
bb381:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this382;
  unsigned long __pos383;
  unsigned long __len1384;
  char* __s385;
  unsigned long __len2386;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval387;
  unsigned long __old_size388;
  unsigned long __new_size389;
  this382 = v376;
  __pos383 = v377;
  __len1384 = v378;
  __s385 = v379;
  __len2386 = v380;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t390 = this382;
  unsigned long t391 = __len1384;
  unsigned long t392 = __len2386;
  char* cast393 = (char*)&(_str_50);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t390, t391, t392, cast393);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
    return __cir_eh_ret;
  }
  unsigned long r394 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t390);
  __old_size388 = r394;
  unsigned long t395 = __old_size388;
  unsigned long t396 = __len2386;
  unsigned long b397 = t395 + t396;
  unsigned long t398 = __len1384;
  unsigned long b399 = b397 - t398;
  __new_size389 = b399;
    unsigned long t400 = __new_size389;
    unsigned long r401 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t390);
    _Bool c402 = ((t400 <= r401)) ? 1 : 0;
    if (c402) {
      char* __p403;
      unsigned long __how_much404;
      char* r405 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t390);
      if (__cir_exc_active) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
        return __cir_eh_ret;
      }
      unsigned long t406 = __pos383;
      char* ptr407 = &(r405)[t406];
      __p403 = ptr407;
      unsigned long t408 = __old_size388;
      unsigned long t409 = __pos383;
      unsigned long b410 = t408 - t409;
      unsigned long t411 = __len1384;
      unsigned long b412 = b410 - t411;
      __how_much404 = b412;
        _Bool r413 = std__is_constant_evaluated();
        if (r413) {
          char* __newp414;
          struct std__allocator_char_* r415 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t390);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          unsigned long t416 = __new_size389;
          char* r417 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r415, t416);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          __newp414 = r417;
          char* t418 = __newp414;
          char* r419 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t390);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          unsigned long t420 = __pos383;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t418, r419, t420);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          char* t421 = __newp414;
          unsigned long t422 = __pos383;
          char* ptr423 = &(t421)[t422];
          char* t424 = __s385;
          unsigned long t425 = __len2386;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr423, t424, t425);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          char* t426 = __newp414;
          unsigned long t427 = __pos383;
          char* ptr428 = &(t426)[t427];
          unsigned long t429 = __len2386;
          char* ptr430 = &(ptr428)[t429];
          char* t431 = __p403;
          unsigned long t432 = __len1384;
          char* ptr433 = &(t431)[t432];
          unsigned long t434 = __how_much404;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr430, ptr433, t434);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          char* r435 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t390);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          char* t436 = __newp414;
          unsigned long t437 = __new_size389;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r435, t436, t437);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          struct std__allocator_char_* r438 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t390);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          char* t439 = __newp414;
          unsigned long t440 = __new_size389;
          std__allocator_char___deallocate(r438, t439, t440);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
        } else {
            char* t441 = __s385;
            _Bool r442 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(t390, t441);
            if (r442) {
                unsigned long t443 = __how_much404;
                _Bool cast444 = (_Bool)t443;
                _Bool ternary445;
                if (cast444) {
                  unsigned long t446 = __len1384;
                  unsigned long t447 = __len2386;
                  _Bool c448 = ((t446 != t447)) ? 1 : 0;
                  ternary445 = (_Bool)c448;
                } else {
                  _Bool c449 = 0;
                  ternary445 = (_Bool)c449;
                }
                if (ternary445) {
                  char* t450 = __p403;
                  unsigned long t451 = __len2386;
                  char* ptr452 = &(t450)[t451];
                  char* t453 = __p403;
                  unsigned long t454 = __len1384;
                  char* ptr455 = &(t453)[t454];
                  unsigned long t456 = __how_much404;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr452, ptr455, t456);
                  if (__cir_exc_active) {
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
                    return __cir_eh_ret;
                  }
                }
                unsigned long t457 = __len2386;
                _Bool cast458 = (_Bool)t457;
                if (cast458) {
                  char* t459 = __p403;
                  char* t460 = __s385;
                  unsigned long t461 = __len2386;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t459, t460, t461);
                  if (__cir_exc_active) {
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
                    return __cir_eh_ret;
                  }
                }
            } else {
              char* t462 = __p403;
              unsigned long t463 = __len1384;
              char* t464 = __s385;
              unsigned long t465 = __len2386;
              unsigned long t466 = __how_much404;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(t390, t462, t463, t464, t465, t466);
              if (__cir_exc_active) {
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
                return __cir_eh_ret;
              }
            }
        }
    } else {
      unsigned long t467 = __pos383;
      unsigned long t468 = __len1384;
      char* t469 = __s385;
      unsigned long t470 = __len2386;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t390, t467, t468, t469, t470);
      if (__cir_exc_active) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
        return __cir_eh_ret;
      }
    }
  unsigned long t471 = __new_size389;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t390, t471);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
    return __cir_eh_ret;
  }
  __retval387 = t390;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t472 = __retval387;
  return t472;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v473) {
bb474:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this475;
  unsigned long __retval476;
  unsigned long __sz477;
  this475 = v473;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t478 = this475;
  unsigned long t479 = t478->_M_string_length;
  __sz477 = t479;
    unsigned long t480 = __sz477;
    unsigned long r481 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t478);
    _Bool c482 = ((t480 > r481)) ? 1 : 0;
    if (c482) {
      __builtin_unreachable();
    }
  unsigned long t483 = __sz477;
  __retval476 = t483;
  unsigned long t484 = __retval476;
  return t484;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v485, char* v486) {
bb487:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this488;
  char* __s489;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval490;
  this488 = v485;
  __s489 = v486;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t491 = this488;
  unsigned long c492 = 0;
  unsigned long r493 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t491);
  char* t494 = __s489;
  char* t495 = __s489;
  unsigned long r496 = std__char_traits_char___length(t495);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
    return __cir_eh_ret;
  }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r497 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t491, c492, r493, t494, r496);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
    return __cir_eh_ret;
  }
  __retval490 = r497;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t498 = __retval490;
  return t498;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v499, char* v500) {
bb501:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this502;
  char* __s503;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval504;
  this502 = v499;
  __s503 = v500;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t505 = this502;
  char* t506 = __s503;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r507 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(t505, t506);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
    return __cir_eh_ret;
  }
  __retval504 = r507;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t508 = __retval504;
  return t508;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v509) {
bb510:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this511;
  char* __retval512;
  this511 = v509;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t513 = this511;
  char* r514 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t513);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __retval512 = r514;
  char* t515 = __retval512;
  return t515;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4findEPKcmRS2_
char* __gnu_cxx__char_traits_char___find(char* v516, unsigned long v517, char* v518) {
bb519:
  char* __s520;
  unsigned long __n521;
  char* __a522;
  char* __retval523;
  __s520 = v516;
  __n521 = v517;
  __a522 = v518;
    unsigned long __i524;
    unsigned long c525 = 0;
    __i524 = c525;
    while (1) {
      unsigned long t527 = __i524;
      unsigned long t528 = __n521;
      _Bool c529 = ((t527 < t528)) ? 1 : 0;
      if (!c529) break;
        unsigned long t530 = __i524;
        char* t531 = __s520;
        char* ptr532 = &(t531)[t530];
        char* t533 = __a522;
        _Bool r534 = __gnu_cxx__char_traits_char___eq(ptr532, t533);
        if (__cir_exc_active) {
          char* __cir_eh_ret = (char*)0;
          return __cir_eh_ret;
        }
        if (r534) {
          char* t535 = __s520;
          unsigned long t536 = __i524;
          char* ptr537 = &(t535)[t536];
          __retval523 = ptr537;
          char* t538 = __retval523;
          char* ret_val539 = t538;
          return ret_val539;
        }
    for_step526: ;
      unsigned long t540 = __i524;
      unsigned long u541 = t540 + 1;
      __i524 = u541;
    }
  char* c542 = ((void*)0);
  __retval523 = c542;
  char* t543 = __retval523;
  return t543;
}

// function: _ZNSt11char_traitsIcE4findEPKcmRS1_
char* std__char_traits_char___find(char* v544, unsigned long v545, char* v546) {
bb547:
  char* __s548;
  unsigned long __n549;
  char* __a550;
  char* __retval551;
  __s548 = v544;
  __n549 = v545;
  __a550 = v546;
    unsigned long t552 = __n549;
    unsigned long c553 = 0;
    _Bool c554 = ((t552 == c553)) ? 1 : 0;
    if (c554) {
      char* c555 = ((void*)0);
      __retval551 = c555;
      char* t556 = __retval551;
      return t556;
    }
    _Bool r557 = std____is_constant_evaluated();
    if (r557) {
      char* t558 = __s548;
      unsigned long t559 = __n549;
      char* t560 = __a550;
      char* r561 = __gnu_cxx__char_traits_char___find(t558, t559, t560);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
      __retval551 = r561;
      char* t562 = __retval551;
      return t562;
    }
  char* t563 = __s548;
  void* cast564 = (void*)t563;
  char* t565 = __a550;
  char t566 = *t565;
  int cast567 = (int)t566;
  unsigned long t568 = __n549;
  void* memchr569 = (void*)__builtin_memchr(cast564, cast567, t568);
  char* cast570 = (char*)memchr569;
  __retval551 = cast570;
  char* t571 = __retval551;
  return t571;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v572, char* v573) {
bb574:
  char* __c1575;
  char* __c2576;
  _Bool __retval577;
  __c1575 = v572;
  __c2576 = v573;
  char* t578 = __c1575;
  char t579 = *t578;
  unsigned char cast580 = (unsigned char)t579;
  int cast581 = (int)cast580;
  char* t582 = __c2576;
  char t583 = *t582;
  unsigned char cast584 = (unsigned char)t583;
  int cast585 = (int)cast584;
  _Bool c586 = ((cast581 < cast585)) ? 1 : 0;
  __retval577 = c586;
  _Bool t587 = __retval577;
  return t587;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v588, char* v589, unsigned long v590) {
bb591:
  char* __s1592;
  char* __s2593;
  unsigned long __n594;
  int __retval595;
  __s1592 = v588;
  __s2593 = v589;
  __n594 = v590;
    unsigned long t596 = __n594;
    unsigned long c597 = 0;
    _Bool c598 = ((t596 == c597)) ? 1 : 0;
    if (c598) {
      int c599 = 0;
      __retval595 = c599;
      int t600 = __retval595;
      return t600;
    }
    _Bool r601 = std____is_constant_evaluated();
    if (r601) {
        unsigned long __i602;
        unsigned long c603 = 0;
        __i602 = c603;
        while (1) {
          unsigned long t605 = __i602;
          unsigned long t606 = __n594;
          _Bool c607 = ((t605 < t606)) ? 1 : 0;
          if (!c607) break;
            unsigned long t608 = __i602;
            char* t609 = __s1592;
            char* ptr610 = &(t609)[t608];
            unsigned long t611 = __i602;
            char* t612 = __s2593;
            char* ptr613 = &(t612)[t611];
            _Bool r614 = std__char_traits_char___lt(ptr610, ptr613);
            if (r614) {
              int c615 = -1;
              __retval595 = c615;
              int t616 = __retval595;
              int ret_val617 = t616;
              return ret_val617;
            } else {
                unsigned long t618 = __i602;
                char* t619 = __s2593;
                char* ptr620 = &(t619)[t618];
                unsigned long t621 = __i602;
                char* t622 = __s1592;
                char* ptr623 = &(t622)[t621];
                _Bool r624 = std__char_traits_char___lt(ptr620, ptr623);
                if (r624) {
                  int c625 = 1;
                  __retval595 = c625;
                  int t626 = __retval595;
                  int ret_val627 = t626;
                  return ret_val627;
                }
            }
        for_step604: ;
          unsigned long t628 = __i602;
          unsigned long u629 = t628 + 1;
          __i602 = u629;
        }
      int c630 = 0;
      __retval595 = c630;
      int t631 = __retval595;
      return t631;
    }
  char* t632 = __s1592;
  void* cast633 = (void*)t632;
  char* t634 = __s2593;
  void* cast635 = (void*)t634;
  unsigned long t636 = __n594;
  int r637 = memcmp(cast633, cast635, t636);
  __retval595 = r637;
  int t638 = __retval595;
  return t638;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4findEPKcmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v639, char* v640, unsigned long v641, unsigned long v642) {
bb643:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this644;
  char* __s645;
  unsigned long __pos646;
  unsigned long __n647;
  unsigned long __retval648;
  unsigned long __size649;
  char __elem0650;
  char* __data651;
  char* __first652;
  char* __last653;
  unsigned long __len654;
  this644 = v639;
  __s645 = v640;
  __pos646 = v641;
  __n647 = v642;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t655 = this644;
  unsigned long r656 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t655);
  __size649 = r656;
    unsigned long t657 = __n647;
    unsigned long c658 = 0;
    _Bool c659 = ((t657 == c658)) ? 1 : 0;
    if (c659) {
      unsigned long t660 = __pos646;
      unsigned long t661 = __size649;
      _Bool c662 = ((t660 <= t661)) ? 1 : 0;
      unsigned long ternary663;
      if (c662) {
        unsigned long t664 = __pos646;
        ternary663 = (unsigned long)t664;
      } else {
        unsigned long t665 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
        ternary663 = (unsigned long)t665;
      }
      __retval648 = ternary663;
      unsigned long t666 = __retval648;
      return t666;
    }
    unsigned long t667 = __pos646;
    unsigned long t668 = __size649;
    _Bool c669 = ((t667 >= t668)) ? 1 : 0;
    if (c669) {
      unsigned long t670 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
      __retval648 = t670;
      unsigned long t671 = __retval648;
      return t671;
    }
  long c672 = 0;
  char* t673 = __s645;
  char* ptr674 = &(t673)[c672];
  char t675 = *ptr674;
  __elem0650 = t675;
  char* r676 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t655);
  __data651 = r676;
  char* t677 = __data651;
  unsigned long t678 = __pos646;
  char* ptr679 = &(t677)[t678];
  __first652 = ptr679;
  char* t680 = __data651;
  unsigned long t681 = __size649;
  char* ptr682 = &(t680)[t681];
  __last653 = ptr682;
  unsigned long t683 = __size649;
  unsigned long t684 = __pos646;
  unsigned long b685 = t683 - t684;
  __len654 = b685;
    while (1) {
      unsigned long t686 = __len654;
      unsigned long t687 = __n647;
      _Bool c688 = ((t686 >= t687)) ? 1 : 0;
      if (!c688) break;
        char* t689 = __first652;
        unsigned long t690 = __len654;
        unsigned long t691 = __n647;
        unsigned long b692 = t690 - t691;
        unsigned long c693 = 1;
        unsigned long b694 = b692 + c693;
        char* r695 = std__char_traits_char___find(t689, b694, &__elem0650);
        if (__cir_exc_active) {
          unsigned long __cir_eh_ret = (unsigned long)0;
          return __cir_eh_ret;
        }
        __first652 = r695;
          char* t696 = __first652;
          _Bool cast697 = (_Bool)t696;
          _Bool u698 = !cast697;
          if (u698) {
            unsigned long t699 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
            __retval648 = t699;
            unsigned long t700 = __retval648;
            unsigned long ret_val701 = t700;
            return ret_val701;
          }
          char* t702 = __first652;
          char* t703 = __s645;
          unsigned long t704 = __n647;
          int r705 = std__char_traits_char___compare(t702, t703, t704);
          if (__cir_exc_active) {
            unsigned long __cir_eh_ret = (unsigned long)0;
            return __cir_eh_ret;
          }
          int c706 = 0;
          _Bool c707 = ((r705 == c706)) ? 1 : 0;
          if (c707) {
            char* t708 = __first652;
            char* t709 = __data651;
            long diff710 = t708 - t709;
            unsigned long cast711 = (unsigned long)diff710;
            __retval648 = cast711;
            unsigned long t712 = __retval648;
            unsigned long ret_val713 = t712;
            return ret_val713;
          }
        char* t714 = __last653;
        char* t715 = __first652;
        int c716 = 1;
        char* ptr717 = &(t715)[c716];
        __first652 = ptr717;
        long diff718 = t714 - ptr717;
        unsigned long cast719 = (unsigned long)diff718;
        __len654 = cast719;
    }
  unsigned long t720 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
  __retval648 = t720;
  unsigned long t721 = __retval648;
  return t721;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4findEPKcm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v722, char* v723, unsigned long v724) {
bb725:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this726;
  char* __s727;
  unsigned long __pos728;
  unsigned long __retval729;
  this726 = v722;
  __s727 = v723;
  __pos728 = v724;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t730 = this726;
  char* t731 = __s727;
  unsigned long t732 = __pos728;
  char* t733 = __s727;
  unsigned long r734 = std__char_traits_char___length(t733);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long r735 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__unsigned_long__const(t730, t731, t732, r734);
  __retval729 = r735;
  unsigned long t736 = __retval729;
  return t736;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v737, unsigned long v738, char* v739) {
bb740:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this741;
  unsigned long __pos742;
  char* __s743;
  unsigned long __retval744;
  this741 = v737;
  __pos742 = v738;
  __s743 = v739;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t745 = this741;
    unsigned long t746 = __pos742;
    unsigned long r747 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t745);
    _Bool c748 = ((t746 > r747)) ? 1 : 0;
    if (c748) {
      char* cast749 = (char*)&(_str_52);
      char* t750 = __s743;
      unsigned long t751 = __pos742;
      unsigned long r752 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t745);
      std____throw_out_of_range_fmt(cast749, t750, t751, r752);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
    }
  unsigned long t753 = __pos742;
  __retval744 = t753;
  unsigned long t754 = __retval744;
  return t754;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS4_mm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v755, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v756, unsigned long v757, unsigned long v758) {
bb759:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this760;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str761;
  unsigned long __pos762;
  unsigned long __n763;
  struct std__allocator_char_ ref_tmp0764;
  char* __start765;
  struct std__forward_iterator_tag agg_tmp0766;
  this760 = v755;
  __str761 = v756;
  __pos762 = v757;
  __n763 = v758;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t767 = this760;
  char* r768 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t767);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_char___allocator_2(&ref_tmp0764);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t767->_M_dataplus, r768, &ref_tmp0764);
    if (__cir_exc_active) {
      {
        std__allocator_char____allocator(&ref_tmp0764);
      }
      return;
    }
  {
    std__allocator_char____allocator(&ref_tmp0764);
  }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t769 = __str761;
    char* r770 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t769);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t767->_M_dataplus);
      }
      return;
    }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t771 = __str761;
    unsigned long t772 = __pos762;
    char* cast773 = (char*)&(_str_53);
    unsigned long r774 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t771, t772, cast773);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t767->_M_dataplus);
      }
      return;
    }
    char* ptr775 = &(r770)[r774];
    __start765 = ptr775;
    char* t776 = __start765;
    char* t777 = __start765;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t778 = __str761;
    unsigned long t779 = __pos762;
    unsigned long t780 = __n763;
    unsigned long r781 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t778, t779, t780);
    char* ptr782 = &(t777)[r781];
    struct std__forward_iterator_tag t783 = agg_tmp0766;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t767, t776, ptr782, t783);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t767->_M_dataplus);
      }
      return;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6substrEmm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v784, unsigned long v785, unsigned long v786) {
bb787:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this788;
  unsigned long __pos789;
  unsigned long __n790;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval791;
  this788 = v784;
  __pos789 = v785;
  __n790 = v786;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t792 = this788;
  unsigned long t793 = __pos789;
  char* cast794 = (char*)&(_str_51);
  unsigned long r795 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t792, t793, cast794);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  unsigned long t796 = __n790;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&__retval791, t792, r795, t796);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t797 = __retval791;
  return t797;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_move_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign() {
bb798:
  _Bool __retval799;
  _Bool t800 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval799 = t800;
  _Bool t801 = __retval799;
  return t801;
}

// function: _ZNSt15__new_allocatorIcEaSERKS0_
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* v802, struct std____new_allocator_char_* v803) {
bb804:
  struct std____new_allocator_char_* this805;
  struct std____new_allocator_char_* unnamed806;
  struct std____new_allocator_char_* __retval807;
  this805 = v802;
  unnamed806 = v803;
  struct std____new_allocator_char_* t808 = this805;
  __retval807 = t808;
  struct std____new_allocator_char_* t809 = __retval807;
  return t809;
}

// function: _ZNSaIcEaSERKS_
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* v810, struct std__allocator_char_* v811) {
bb812:
  struct std__allocator_char_* this813;
  struct std__allocator_char_* unnamed814;
  struct std__allocator_char_* __retval815;
  this813 = v810;
  unnamed814 = v811;
  struct std__allocator_char_* t816 = this813;
  struct std____new_allocator_char_* base817 = (struct std____new_allocator_char_*)((char *)t816 + 0);
  struct std__allocator_char_* t818 = unnamed814;
  struct std____new_allocator_char_* base819 = (struct std____new_allocator_char_*)((char *)t818 + 0);
  struct std____new_allocator_char_* r820 = std____new_allocator_char___operator_(base817, base819);
  __retval815 = t816;
  struct std__allocator_char_* t821 = __retval815;
  return t821;
}

// function: _ZSt15__alloc_on_moveISaIcEEvRT_S2_
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* v822, struct std__allocator_char_* v823) {
bb824:
  struct std__allocator_char_* __one825;
  struct std__allocator_char_* __two826;
  __one825 = v822;
  __two826 = v823;
    struct std__allocator_char_* t827 = __two826;
    struct std__allocator_char_* t828 = __one825;
    struct std__allocator_char_* r829 = std__allocator_char___operator_(t828, t827);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v830) {
bb831:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this832;
  char* __retval833;
  this832 = v830;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t834 = this832;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t834);
  char* r835 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t834);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __retval833 = r835;
  char* t836 = __retval833;
  return t836;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v837, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v838) {
bb839:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this840;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str841;
  this840 = v837;
  __str841 = v838;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t842 = this840;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t843 = __str841;
    _Bool c844 = ((t842 != t843)) ? 1 : 0;
    if (c844) {
      unsigned long __rsize845;
      unsigned long __capacity846;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t847 = __str841;
      unsigned long r848 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t847);
      __rsize845 = r848;
      unsigned long r849 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t842);
      __capacity846 = r849;
        unsigned long t850 = __rsize845;
        unsigned long t851 = __capacity846;
        _Bool c852 = ((t850 > t851)) ? 1 : 0;
        if (c852) {
          unsigned long __new_capacity853;
          char* __tmp854;
          unsigned long t855 = __rsize845;
          __new_capacity853 = t855;
          unsigned long t856 = __capacity846;
          char* r857 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t842, &__new_capacity853, t856);
          if (__cir_exc_active) {
            return;
          }
          __tmp854 = r857;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t842);
          if (__cir_exc_active) {
            return;
          }
          char* t858 = __tmp854;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t842, t858);
          if (__cir_exc_active) {
            return;
          }
          unsigned long t859 = __new_capacity853;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t842, t859);
          if (__cir_exc_active) {
            return;
          }
        }
        unsigned long t860 = __rsize845;
        _Bool cast861 = (_Bool)t860;
        if (cast861) {
          char* r862 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t842);
          if (__cir_exc_active) {
            return;
          }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t863 = __str841;
          char* r864 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t863);
          if (__cir_exc_active) {
            return;
          }
          unsigned long t865 = __rsize845;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r862, r864, t865);
          if (__cir_exc_active) {
            return;
          }
        }
      unsigned long t866 = __rsize845;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t842, t866);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5clearEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v867) {
bb868:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this869;
  this869 = v867;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t870 = this869;
  unsigned long c871 = 0;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t870, c871);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEOS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v872, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v873) {
bb874:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this875;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str876;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval877;
  _Bool __equal_allocs878;
  this875 = v872;
  __str876 = v873;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t879 = this875;
  _Bool c880 = 1;
  __equal_allocs878 = c880;
    _Bool r881 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t879);
    if (__cir_exc_active) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
      return __cir_eh_ret;
    }
    _Bool u882 = !r881;
    _Bool ternary883;
    if (u882) {
      _Bool r884 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
      if (__cir_exc_active) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
        return __cir_eh_ret;
      }
      ternary883 = (_Bool)r884;
    } else {
      _Bool c885 = 0;
      ternary883 = (_Bool)c885;
    }
    _Bool ternary886;
    if (ternary883) {
      _Bool t887 = __equal_allocs878;
      _Bool u888 = !t887;
      ternary886 = (_Bool)u888;
    } else {
      _Bool c889 = 0;
      ternary886 = (_Bool)c889;
    }
    if (ternary886) {
      unsigned long t890 = t879->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t879, t890);
      char* r891 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t879);
      if (__cir_exc_active) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
        return __cir_eh_ret;
      }
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t879, r891);
      if (__cir_exc_active) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
        return __cir_eh_ret;
      }
      unsigned long c892 = 0;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t879, c892);
      if (__cir_exc_active) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__allocator_char_* r893 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t879);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
    return __cir_eh_ret;
  }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t894 = __str876;
  struct std__allocator_char_* r895 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t894);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
    return __cir_eh_ret;
  }
  void_std____alloc_on_move_std__allocator_char___(r893, r895);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
    return __cir_eh_ret;
  }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t896 = __str876;
    _Bool r897 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t896);
    if (__cir_exc_active) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
      return __cir_eh_ret;
    }
    if (r897) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t898 = __str876;
        _Bool c899 = ((t898 != t879)) ? 1 : 0;
        if (c899) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t900 = __str876;
            unsigned long r901 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t900);
            _Bool cast902 = (_Bool)r901;
            if (cast902) {
              char* r903 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t879);
              if (__cir_exc_active) {
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
                return __cir_eh_ret;
              }
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t904 = __str876;
              char* r905 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t904);
              if (__cir_exc_active) {
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
                return __cir_eh_ret;
              }
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t906 = __str876;
              unsigned long r907 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t906);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r903, r905, r907);
              if (__cir_exc_active) {
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
                return __cir_eh_ret;
              }
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t908 = __str876;
          unsigned long r909 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t908);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t879, r909);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
        }
    } else {
        _Bool r910 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
        if (__cir_exc_active) {
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
          return __cir_eh_ret;
        }
        _Bool ternary911;
        if (r910) {
          _Bool c912 = 1;
          ternary911 = (_Bool)c912;
        } else {
          _Bool t913 = __equal_allocs878;
          ternary911 = (_Bool)t913;
        }
        if (ternary911) {
          char* __data914;
          unsigned long __capacity915;
          char* c916 = ((void*)0);
          __data914 = c916;
            _Bool r917 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t879);
            if (__cir_exc_active) {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
              return __cir_eh_ret;
            }
            _Bool u918 = !r917;
            if (u918) {
                _Bool t919 = __equal_allocs878;
                if (t919) {
                  char* r920 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t879);
                  if (__cir_exc_active) {
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
                    return __cir_eh_ret;
                  }
                  __data914 = r920;
                  unsigned long t921 = t879->field2._M_allocated_capacity;
                  __capacity915 = t921;
                } else {
                  unsigned long t922 = t879->field2._M_allocated_capacity;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t879, t922);
                }
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t923 = __str876;
          char* r924 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t923);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t879, r924);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t925 = __str876;
          unsigned long r926 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t925);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t879, r926);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t927 = __str876;
          unsigned long t928 = t927->field2._M_allocated_capacity;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t879, t928);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
            char* t929 = __data914;
            _Bool cast930 = (_Bool)t929;
            if (cast930) {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t931 = __str876;
              char* t932 = __data914;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t931, t932);
              if (__cir_exc_active) {
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
                return __cir_eh_ret;
              }
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t933 = __str876;
              unsigned long t934 = __capacity915;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t933, t934);
              if (__cir_exc_active) {
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
                return __cir_eh_ret;
              }
            } else {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t935 = __str876;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t936 = __str876;
              char* r937 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t936);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t935, r937);
              if (__cir_exc_active) {
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
                return __cir_eh_ret;
              }
            }
        } else {
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t938 = __str876;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t879, t938);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
        }
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t939 = __str876;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(t939);
  __retval877 = t879;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t940 = __retval877;
  return t940;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v941) {
bb942:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this943;
  this943 = v941;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t944 = this943;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t944);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t944->_M_dataplus);
      }
      return;
    }
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t944->_M_dataplus);
  }
  return;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v945, char* v946) {
bb947:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs948;
  char* __rhs949;
  _Bool __retval950;
  __lhs948 = v945;
  __rhs949 = v946;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t951 = __lhs948;
  unsigned long r952 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t951);
  char* t953 = __rhs949;
  unsigned long r954 = std__char_traits_char___length(t953);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  _Bool c955 = ((r952 == r954)) ? 1 : 0;
  _Bool ternary956;
  if (c955) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t957 = __lhs948;
    char* r958 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t957);
    char* t959 = __rhs949;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t960 = __lhs948;
    unsigned long r961 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t960);
    int r962 = std__char_traits_char___compare(r958, t959, r961);
    if (__cir_exc_active) {
      _Bool __cir_eh_ret = (_Bool)0;
      return __cir_eh_ret;
    }
    _Bool cast963 = (_Bool)r962;
    _Bool u964 = !cast963;
    ternary956 = (_Bool)u964;
  } else {
    _Bool c965 = 0;
    ternary956 = (_Bool)c965;
  }
  __retval950 = ternary956;
  _Bool t966 = __retval950;
  return t966;
}

// function: _Z6headerv
void header() {
bb967:
  char* cast968 = (char*)&(_str_37);
  struct std__basic_ostream_char__std__char_traits_char__* r969 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast968);
  if (__cir_exc_active) {
    return;
  }
  char* cast970 = (char*)&(_str_38);
  struct std__basic_ostream_char__std__char_traits_char__* r971 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast970);
  if (__cir_exc_active) {
    return;
  }
  char* cast972 = (char*)&(_str_39);
  struct std__basic_ostream_char__std__char_traits_char__* r973 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r971, cast972);
  if (__cir_exc_active) {
    return;
  }
  char* cast974 = (char*)&(_str_40);
  struct std__basic_ostream_char__std__char_traits_char__* r975 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r973, cast974);
  if (__cir_exc_active) {
    return;
  }
  char* cast976 = (char*)&(_str_41);
  struct std__basic_ostream_char__std__char_traits_char__* r977 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r975, cast976);
  if (__cir_exc_active) {
    return;
  }
  char* cast978 = (char*)&(_str_42);
  struct std__basic_ostream_char__std__char_traits_char__* r979 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast978);
  if (__cir_exc_active) {
    return;
  }
  char* cast980 = (char*)&(_str_43);
  struct std__basic_ostream_char__std__char_traits_char__* r981 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r979, cast980);
  if (__cir_exc_active) {
    return;
  }
  char* cast982 = (char*)&(_str_44);
  struct std__basic_ostream_char__std__char_traits_char__* r983 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r981, cast982);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v984, int v985) {
bb986:
  int __a987;
  int __b988;
  int __retval989;
  __a987 = v984;
  __b988 = v985;
  int t990 = __a987;
  int t991 = __b988;
  int b992 = t990 | t991;
  __retval989 = b992;
  int t993 = __retval989;
  return t993;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v994) {
bb995:
  struct std__basic_ios_char__std__char_traits_char__* this996;
  int __retval997;
  this996 = v994;
  struct std__basic_ios_char__std__char_traits_char__* t998 = this996;
  struct std__ios_base* base999 = (struct std__ios_base*)((char *)t998 + 0);
  int t1000 = base999->_M_streambuf_state;
  __retval997 = t1000;
  int t1001 = __retval997;
  return t1001;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v1002, int v1003) {
bb1004:
  struct std__basic_ios_char__std__char_traits_char__* this1005;
  int __state1006;
  this1005 = v1002;
  __state1006 = v1003;
  struct std__basic_ios_char__std__char_traits_char__* t1007 = this1005;
  int r1008 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t1007);
  if (__cir_exc_active) {
    return;
  }
  int t1009 = __state1006;
  int r1010 = std__operator__2(r1008, t1009);
  std__basic_ios_char__std__char_traits_char_____clear(t1007, r1010);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1011, char* v1012) {
bb1013:
  struct std__basic_ostream_char__std__char_traits_char__* __out1014;
  char* __s1015;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1016;
  __out1014 = v1011;
  __s1015 = v1012;
    char* t1017 = __s1015;
    _Bool cast1018 = (_Bool)t1017;
    _Bool u1019 = !cast1018;
    if (u1019) {
      struct std__basic_ostream_char__std__char_traits_char__* t1020 = __out1014;
      void** v1021 = (void**)t1020;
      void* v1022 = *((void**)v1021);
      unsigned char* cast1023 = (unsigned char*)v1022;
      long c1024 = -24;
      unsigned char* ptr1025 = &(cast1023)[c1024];
      long* cast1026 = (long*)ptr1025;
      long t1027 = *cast1026;
      unsigned char* cast1028 = (unsigned char*)t1020;
      unsigned char* ptr1029 = &(cast1028)[t1027];
      struct std__basic_ostream_char__std__char_traits_char__* cast1030 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1029;
      struct std__basic_ios_char__std__char_traits_char__* cast1031 = (struct std__basic_ios_char__std__char_traits_char__*)cast1030;
      int t1032 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast1031, t1032);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t1033 = __out1014;
      char* t1034 = __s1015;
      char* t1035 = __s1015;
      unsigned long r1036 = std__char_traits_char___length(t1035);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast1037 = (long)r1036;
      struct std__basic_ostream_char__std__char_traits_char__* r1038 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1033, t1034, cast1037);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t1039 = __out1014;
  __retval1016 = t1039;
  struct std__basic_ostream_char__std__char_traits_char__* t1040 = __retval1016;
  return t1040;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEEC2Ev
void std__basic_ios_char__std__char_traits_char_____basic_ios(struct std__basic_ios_char__std__char_traits_char__* v1041) {
bb1042:
  struct std__basic_ios_char__std__char_traits_char__* this1043;
  this1043 = v1041;
  struct std__basic_ios_char__std__char_traits_char__* t1044 = this1043;
  struct std__ios_base* base1045 = (struct std__ios_base*)((char *)t1044 + 0);
  std__ios_base__ios_base(base1045);
    void* v1046 = (void*)&_ZTVSt9basic_iosIcSt11char_traitsIcEE[2];
    void** v1047 = (void**)t1044;
    *(void**)(v1047) = (void*)v1046;
    struct std__basic_ostream_char__std__char_traits_char__* c1048 = ((void*)0);
    t1044->_M_tie = c1048;
    char c1049 = 0;
    t1044->_M_fill = c1049;
    _Bool c1050 = 0;
    t1044->_M_fill_init = c1050;
    struct std__basic_streambuf_char__std__char_traits_char__* c1051 = ((void*)0);
    t1044->_M_streambuf = c1051;
    struct std__ctype_char_* c1052 = ((void*)0);
    t1044->_M_ctype = c1052;
    struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* c1053 = ((void*)0);
    t1044->_M_num_put = c1053;
    struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* c1054 = ((void*)0);
    t1044->_M_num_get = c1054;
  return;
}

// function: _ZNSiC2Ev
void std__basic_istream_char__std__char_traits_char_____basic_istream(struct std__basic_istream_char__std__char_traits_char__* v1055, void** v1056) {
bb1057:
  struct std__basic_istream_char__std__char_traits_char__* this1058;
  void** vtt1059;
  this1058 = v1055;
  vtt1059 = v1056;
  struct std__basic_istream_char__std__char_traits_char__* t1060 = this1058;
  void** t1061 = vtt1059;
  static void *vtt_slot1062 = 0;
  void** vtt1063 = (void**)&vtt_slot1062;
  void** cast1064 = (void**)vtt1063;
  void* t1065 = *cast1064;
  void** v1066 = (void**)t1060;
  *(void**)(v1066) = (void*)t1065;
  static void *vtt_slot1067 = 0;
  void** vtt1068 = (void**)&vtt_slot1067;
  void** cast1069 = (void**)vtt1068;
  void* t1070 = *cast1069;
  void** v1071 = (void**)t1060;
  void* v1072 = *((void**)v1071);
  unsigned char* cast1073 = (unsigned char*)v1072;
  long c1074 = -24;
  unsigned char* ptr1075 = &(cast1073)[c1074];
  long* cast1076 = (long*)ptr1075;
  long t1077 = *cast1076;
  unsigned char* cast1078 = (unsigned char*)t1060;
  unsigned char* ptr1079 = &(cast1078)[t1077];
  struct std__basic_istream_char__std__char_traits_char__* cast1080 = (struct std__basic_istream_char__std__char_traits_char__*)ptr1079;
  void** v1081 = (void**)cast1080;
  *(void**)(v1081) = (void*)t1070;
  long c1082 = 0;
  t1060->_M_gcount = c1082;
  void** v1083 = (void**)t1060;
  void* v1084 = *((void**)v1083);
  unsigned char* cast1085 = (unsigned char*)v1084;
  long c1086 = -24;
  unsigned char* ptr1087 = &(cast1085)[c1086];
  long* cast1088 = (long*)ptr1087;
  long t1089 = *cast1088;
  unsigned char* cast1090 = (unsigned char*)t1060;
  unsigned char* ptr1091 = &(cast1090)[t1089];
  struct std__basic_istream_char__std__char_traits_char__* cast1092 = (struct std__basic_istream_char__std__char_traits_char__*)ptr1091;
  struct std__basic_ios_char__std__char_traits_char__* cast1093 = (struct std__basic_ios_char__std__char_traits_char__*)cast1092;
  struct std__basic_streambuf_char__std__char_traits_char__* c1094 = ((void*)0);
  std__basic_ios_char__std__char_traits_char_____init(cast1093, c1094);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZStorSt13_Ios_OpenmodeS_
int std__operator__3(int v1095, int v1096) {
bb1097:
  int __a1098;
  int __b1099;
  int __retval1100;
  __a1098 = v1095;
  __b1099 = v1096;
  int t1101 = __a1098;
  int t1102 = __b1099;
  int b1103 = t1101 | t1102;
  __retval1100 = b1103;
  int t1104 = __retval1100;
  return t1104;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode
void std__basic_ifstream_char__std__char_traits_char_____open(struct std__basic_ifstream_char__std__char_traits_char__* v1105, char* v1106, int v1107) {
bb1108:
  struct std__basic_ifstream_char__std__char_traits_char__* this1109;
  char* __s1110;
  int __mode1111;
  this1109 = v1105;
  __s1110 = v1106;
  __mode1111 = v1107;
  struct std__basic_ifstream_char__std__char_traits_char__* t1112 = this1109;
    char* t1113 = __s1110;
    int t1114 = __mode1111;
    int t1115 = _ZNSt8ios_base2inE_const;
    int r1116 = std__operator__3(t1114, t1115);
    struct std__basic_filebuf_char__std__char_traits_char__* r1117 = std__basic_filebuf_char__std__char_traits_char_____open(&t1112->_M_filebuf, t1113, r1116);
    if (__cir_exc_active) {
      return;
    }
    _Bool cast1118 = (_Bool)r1117;
    _Bool u1119 = !cast1118;
    if (u1119) {
      void** v1120 = (void**)t1112;
      void* v1121 = *((void**)v1120);
      unsigned char* cast1122 = (unsigned char*)v1121;
      long c1123 = -24;
      unsigned char* ptr1124 = &(cast1122)[c1123];
      long* cast1125 = (long*)ptr1124;
      long t1126 = *cast1125;
      unsigned char* cast1127 = (unsigned char*)t1112;
      unsigned char* ptr1128 = &(cast1127)[t1126];
      struct std__basic_ifstream_char__std__char_traits_char__* cast1129 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr1128;
      struct std__basic_ios_char__std__char_traits_char__* cast1130 = (struct std__basic_ios_char__std__char_traits_char__*)cast1129;
      int t1131 = _ZNSt8ios_base7failbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast1130, t1131);
      if (__cir_exc_active) {
        return;
      }
    } else {
      void** v1132 = (void**)t1112;
      void* v1133 = *((void**)v1132);
      unsigned char* cast1134 = (unsigned char*)v1133;
      long c1135 = -24;
      unsigned char* ptr1136 = &(cast1134)[c1135];
      long* cast1137 = (long*)ptr1136;
      long t1138 = *cast1137;
      unsigned char* cast1139 = (unsigned char*)t1112;
      unsigned char* ptr1140 = &(cast1139)[t1138];
      struct std__basic_ifstream_char__std__char_traits_char__* cast1141 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr1140;
      struct std__basic_ios_char__std__char_traits_char__* cast1142 = (struct std__basic_ios_char__std__char_traits_char__*)cast1141;
      int t1143 = _ZNSt8ios_base7goodbitE_const;
      std__basic_ios_char__std__char_traits_char_____clear(cast1142, t1143);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt13basic_filebufIcSt11char_traitsIcEED2Ev
void std__basic_filebuf_char__std__char_traits_char______basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* v1144) {
bb1145:
  struct std__basic_filebuf_char__std__char_traits_char__* this1146;
  this1146 = v1144;
  struct std__basic_filebuf_char__std__char_traits_char__* t1147 = this1146;
          struct std__basic_filebuf_char__std__char_traits_char__* r1149 = std__basic_filebuf_char__std__char_traits_char_____close(t1147);
          if (__cir_exc_active) {
            {
              std____basic_file_char______basic_file(&t1147->_M_file);
            }
            {
              struct std__basic_streambuf_char__std__char_traits_char__* base1150 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t1147 + 0);
              std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base1150);
            }
            goto cir_try_dispatch1148;
          }
        cir_try_dispatch1148: ;
        if (__cir_exc_active) {
        {
          int ca_tok1151 = 0;
          void* ca_exn1152 = (void*)__cir_exc_ptr;
          __cir_exc_active = 0;
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
        }
        }
    {
      std____basic_file_char______basic_file(&t1147->_M_file);
    }
  {
    struct std__basic_streambuf_char__std__char_traits_char__* base1153 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t1147 + 0);
    std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base1153);
  }
  return;
}

// function: _ZNSiD2Ev
void std__basic_istream_char__std__char_traits_char______basic_istream(struct std__basic_istream_char__std__char_traits_char__* v1154, void** v1155) {
bb1156:
  struct std__basic_istream_char__std__char_traits_char__* this1157;
  void** vtt1158;
  this1157 = v1154;
  vtt1158 = v1155;
  struct std__basic_istream_char__std__char_traits_char__* t1159 = this1157;
  void** t1160 = vtt1158;
  long c1161 = 0;
  t1159->_M_gcount = c1161;
  return;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEED2Ev
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* v1162) {
bb1163:
  struct std__basic_ios_char__std__char_traits_char__* this1164;
  this1164 = v1162;
  struct std__basic_ios_char__std__char_traits_char__* t1165 = this1164;
  {
    struct std__ios_base* base1166 = (struct std__ios_base*)((char *)t1165 + 0);
    std__ios_base___ios_base(base1166);
  }
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode
void std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* v1167, char* v1168, int v1169) {
bb1170:
  struct std__basic_ifstream_char__std__char_traits_char__* this1171;
  char* __s1172;
  int __mode1173;
  this1171 = v1167;
  __s1172 = v1168;
  __mode1173 = v1169;
  struct std__basic_ifstream_char__std__char_traits_char__* t1174 = this1171;
  struct std__basic_ios_char__std__char_traits_char__* base1175 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1174 + 256);
  std__basic_ios_char__std__char_traits_char_____basic_ios(base1175);
  if (__cir_exc_active) {
    return;
  }
    struct std__basic_istream_char__std__char_traits_char__* base1176 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t1174 + 0);
    static void *vtt_slot1177 = 0;
    void** vtt1178 = (void**)&vtt_slot1177;
    std__basic_istream_char__std__char_traits_char_____basic_istream(base1176, vtt1178);
    if (__cir_exc_active) {
      {
        struct std__basic_ios_char__std__char_traits_char__* base1179 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1174 + 256);
        std__basic_ios_char__std__char_traits_char______basic_ios(base1179);
      }
      return;
    }
      void* v1180 = (void*)&_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[3];
      void** v1181 = (void**)t1174;
      *(void**)(v1181) = (void*)v1180;
      void* v1182 = (void*)&_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[3];
      struct std__basic_ios_char__std__char_traits_char__* base1183 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1174 + 256);
      void** v1184 = (void**)base1183;
      *(void**)(v1184) = (void*)v1182;
      std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(&t1174->_M_filebuf);
      if (__cir_exc_active) {
        {
          struct std__basic_istream_char__std__char_traits_char__* base1185 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t1174 + 0);
          static void *vtt_slot1186 = 0;
          void** vtt1187 = (void**)&vtt_slot1186;
          std__basic_istream_char__std__char_traits_char______basic_istream(base1185, vtt1187);
        }
        {
          struct std__basic_ios_char__std__char_traits_char__* base1188 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1174 + 256);
          std__basic_ios_char__std__char_traits_char______basic_ios(base1188);
        }
        return;
      }
        void** v1189 = (void**)t1174;
        void* v1190 = *((void**)v1189);
        unsigned char* cast1191 = (unsigned char*)v1190;
        long c1192 = -24;
        unsigned char* ptr1193 = &(cast1191)[c1192];
        long* cast1194 = (long*)ptr1193;
        long t1195 = *cast1194;
        unsigned char* cast1196 = (unsigned char*)t1174;
        unsigned char* ptr1197 = &(cast1196)[t1195];
        struct std__basic_ifstream_char__std__char_traits_char__* cast1198 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr1197;
        struct std__basic_ios_char__std__char_traits_char__* cast1199 = (struct std__basic_ios_char__std__char_traits_char__*)cast1198;
        struct std__basic_streambuf_char__std__char_traits_char__* base1200 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)&(t1174->_M_filebuf) + 0);
        std__basic_ios_char__std__char_traits_char_____init(cast1199, base1200);
        if (__cir_exc_active) {
          {
            std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t1174->_M_filebuf);
          }
          {
            struct std__basic_istream_char__std__char_traits_char__* base1201 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t1174 + 0);
            static void *vtt_slot1202 = 0;
            void** vtt1203 = (void**)&vtt_slot1202;
            std__basic_istream_char__std__char_traits_char______basic_istream(base1201, vtt1203);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base1204 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1174 + 256);
            std__basic_ios_char__std__char_traits_char______basic_ios(base1204);
          }
          return;
        }
        char* t1205 = __s1172;
        int t1206 = __mode1173;
        std__basic_ifstream_char__std__char_traits_char_____open(t1174, t1205, t1206);
        if (__cir_exc_active) {
          {
            std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t1174->_M_filebuf);
          }
          {
            struct std__basic_istream_char__std__char_traits_char__* base1207 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t1174 + 0);
            static void *vtt_slot1208 = 0;
            void** vtt1209 = (void**)&vtt_slot1208;
            std__basic_istream_char__std__char_traits_char______basic_istream(base1207, vtt1209);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base1210 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1174 + 256);
            std__basic_ios_char__std__char_traits_char______basic_ios(base1210);
          }
          return;
        }
  return;
}

// function: _ZStanSt12_Ios_IostateS_
int std__operator_(int v1211, int v1212) {
bb1213:
  int __a1214;
  int __b1215;
  int __retval1216;
  __a1214 = v1211;
  __b1215 = v1212;
  int t1217 = __a1214;
  int t1218 = __b1215;
  int b1219 = t1217 & t1218;
  __retval1216 = b1219;
  int t1220 = __retval1216;
  return t1220;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE4failEv
_Bool std__basic_ios_char__std__char_traits_char_____fail___const(struct std__basic_ios_char__std__char_traits_char__* v1221) {
bb1222:
  struct std__basic_ios_char__std__char_traits_char__* this1223;
  _Bool __retval1224;
  this1223 = v1221;
  struct std__basic_ios_char__std__char_traits_char__* t1225 = this1223;
  int r1226 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t1225);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  int t1227 = _ZNSt8ios_base6badbitE_const;
  int t1228 = _ZNSt8ios_base7failbitE_const;
  int r1229 = std__operator__2(t1227, t1228);
  int r1230 = std__operator_(r1226, r1229);
  int c1231 = 0;
  _Bool c1232 = ((r1230 != c1231)) ? 1 : 0;
  __retval1224 = c1232;
  _Bool t1233 = __retval1224;
  return t1233;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEEntEv
_Bool std__basic_ios_char__std__char_traits_char_____operator____const(struct std__basic_ios_char__std__char_traits_char__* v1234) {
bb1235:
  struct std__basic_ios_char__std__char_traits_char__* this1236;
  _Bool __retval1237;
  this1236 = v1234;
  struct std__basic_ios_char__std__char_traits_char__* t1238 = this1236;
  _Bool r1239 = std__basic_ios_char__std__char_traits_char_____fail___const(t1238);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  __retval1237 = r1239;
  _Bool t1240 = __retval1237;
  return t1240;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEEcvbEv
_Bool std__basic_ios_char__std__char_traits_char_____operator_bool___const(struct std__basic_ios_char__std__char_traits_char__* v1241) {
bb1242:
  struct std__basic_ios_char__std__char_traits_char__* this1243;
  _Bool __retval1244;
  this1243 = v1241;
  struct std__basic_ios_char__std__char_traits_char__* t1245 = this1243;
  _Bool r1246 = std__basic_ios_char__std__char_traits_char_____fail___const(t1245);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  _Bool u1247 = !r1246;
  __retval1244 = u1247;
  _Bool t1248 = __retval1244;
  return t1248;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EESA_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char____2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1249, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1250) {
bb1251:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs1252;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __rhs1253;
  _Bool __retval1254;
  __lhs1252 = v1249;
  __rhs1253 = v1250;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1255 = __lhs1252;
  unsigned long r1256 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1255);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1257 = __rhs1253;
  unsigned long r1258 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1257);
  _Bool c1259 = ((r1256 == r1258)) ? 1 : 0;
  _Bool ternary1260;
  if (c1259) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1261 = __lhs1252;
    char* r1262 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t1261);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1263 = __rhs1253;
    char* r1264 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t1263);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1265 = __lhs1252;
    unsigned long r1266 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1265);
    int r1267 = std__char_traits_char___compare(r1262, r1264, r1266);
    if (__cir_exc_active) {
      _Bool __cir_eh_ret = (_Bool)0;
      return __cir_eh_ret;
    }
    _Bool cast1268 = (_Bool)r1267;
    _Bool u1269 = !cast1268;
    ternary1260 = (_Bool)u1269;
  } else {
    _Bool c1270 = 0;
    ternary1260 = (_Bool)c1270;
  }
  __retval1254 = ternary1260;
  _Bool t1271 = __retval1254;
  return t1271;
}

// function: _Z11writeCookiev
void writeCookie() {
bb1272:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ expires1273;
  struct std__allocator_char_ ref_tmp01274;
  char* cast1275 = (char*)&(_str_45);
  std__allocator_char___allocator_2(&ref_tmp01274);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&expires1273, cast1275, &ref_tmp01274);
    if (__cir_exc_active) {
      {
        std__allocator_char____allocator(&ref_tmp01274);
      }
      return;
    }
  {
    std__allocator_char____allocator(&ref_tmp01274);
  }
    char* cast1276 = (char*)&(_str_46);
    struct std__basic_ostream_char__std__char_traits_char__* r1277 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1276);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&expires1273);
      }
      return;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1278 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1277, &expires1273);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&expires1273);
      }
      return;
    }
    char* cast1279 = (char*)&(_str_47);
    struct std__basic_ostream_char__std__char_traits_char__* r1280 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1278, cast1279);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&expires1273);
      }
      return;
    }
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&expires1273);
  }
  return;
}

// function: _ZNSoC2Ev
void std__basic_ostream_char__std__char_traits_char_____basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* v1281, void** v1282) {
bb1283:
  struct std__basic_ostream_char__std__char_traits_char__* this1284;
  void** vtt1285;
  this1284 = v1281;
  vtt1285 = v1282;
  struct std__basic_ostream_char__std__char_traits_char__* t1286 = this1284;
  void** t1287 = vtt1285;
  static void *vtt_slot1288 = 0;
  void** vtt1289 = (void**)&vtt_slot1288;
  void** cast1290 = (void**)vtt1289;
  void* t1291 = *cast1290;
  void** v1292 = (void**)t1286;
  *(void**)(v1292) = (void*)t1291;
  static void *vtt_slot1293 = 0;
  void** vtt1294 = (void**)&vtt_slot1293;
  void** cast1295 = (void**)vtt1294;
  void* t1296 = *cast1295;
  void** v1297 = (void**)t1286;
  void* v1298 = *((void**)v1297);
  unsigned char* cast1299 = (unsigned char*)v1298;
  long c1300 = -24;
  unsigned char* ptr1301 = &(cast1299)[c1300];
  long* cast1302 = (long*)ptr1301;
  long t1303 = *cast1302;
  unsigned char* cast1304 = (unsigned char*)t1286;
  unsigned char* ptr1305 = &(cast1304)[t1303];
  struct std__basic_ostream_char__std__char_traits_char__* cast1306 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1305;
  void** v1307 = (void**)cast1306;
  *(void**)(v1307) = (void*)t1296;
  void** v1308 = (void**)t1286;
  void* v1309 = *((void**)v1308);
  unsigned char* cast1310 = (unsigned char*)v1309;
  long c1311 = -24;
  unsigned char* ptr1312 = &(cast1310)[c1311];
  long* cast1313 = (long*)ptr1312;
  long t1314 = *cast1313;
  unsigned char* cast1315 = (unsigned char*)t1286;
  unsigned char* ptr1316 = &(cast1315)[t1314];
  struct std__basic_ostream_char__std__char_traits_char__* cast1317 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1316;
  struct std__basic_ios_char__std__char_traits_char__* cast1318 = (struct std__basic_ios_char__std__char_traits_char__*)cast1317;
  struct std__basic_streambuf_char__std__char_traits_char__* c1319 = ((void*)0);
  std__basic_ios_char__std__char_traits_char_____init(cast1318, c1319);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode
void std__basic_ofstream_char__std__char_traits_char_____open(struct std__basic_ofstream_char__std__char_traits_char__* v1320, char* v1321, int v1322) {
bb1323:
  struct std__basic_ofstream_char__std__char_traits_char__* this1324;
  char* __s1325;
  int __mode1326;
  this1324 = v1320;
  __s1325 = v1321;
  __mode1326 = v1322;
  struct std__basic_ofstream_char__std__char_traits_char__* t1327 = this1324;
    char* t1328 = __s1325;
    int t1329 = __mode1326;
    int t1330 = _ZNSt8ios_base3outE_const;
    int r1331 = std__operator__3(t1329, t1330);
    struct std__basic_filebuf_char__std__char_traits_char__* r1332 = std__basic_filebuf_char__std__char_traits_char_____open(&t1327->_M_filebuf, t1328, r1331);
    if (__cir_exc_active) {
      return;
    }
    _Bool cast1333 = (_Bool)r1332;
    _Bool u1334 = !cast1333;
    if (u1334) {
      void** v1335 = (void**)t1327;
      void* v1336 = *((void**)v1335);
      unsigned char* cast1337 = (unsigned char*)v1336;
      long c1338 = -24;
      unsigned char* ptr1339 = &(cast1337)[c1338];
      long* cast1340 = (long*)ptr1339;
      long t1341 = *cast1340;
      unsigned char* cast1342 = (unsigned char*)t1327;
      unsigned char* ptr1343 = &(cast1342)[t1341];
      struct std__basic_ofstream_char__std__char_traits_char__* cast1344 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr1343;
      struct std__basic_ios_char__std__char_traits_char__* cast1345 = (struct std__basic_ios_char__std__char_traits_char__*)cast1344;
      int t1346 = _ZNSt8ios_base7failbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast1345, t1346);
      if (__cir_exc_active) {
        return;
      }
    } else {
      void** v1347 = (void**)t1327;
      void* v1348 = *((void**)v1347);
      unsigned char* cast1349 = (unsigned char*)v1348;
      long c1350 = -24;
      unsigned char* ptr1351 = &(cast1349)[c1350];
      long* cast1352 = (long*)ptr1351;
      long t1353 = *cast1352;
      unsigned char* cast1354 = (unsigned char*)t1327;
      unsigned char* ptr1355 = &(cast1354)[t1353];
      struct std__basic_ofstream_char__std__char_traits_char__* cast1356 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr1355;
      struct std__basic_ios_char__std__char_traits_char__* cast1357 = (struct std__basic_ios_char__std__char_traits_char__*)cast1356;
      int t1358 = _ZNSt8ios_base7goodbitE_const;
      std__basic_ios_char__std__char_traits_char_____clear(cast1357, t1358);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSoD2Ev
void std__basic_ostream_char__std__char_traits_char______basic_ostream(struct std__basic_ostream_char__std__char_traits_char__* v1359, void** v1360) {
bb1361:
  struct std__basic_ostream_char__std__char_traits_char__* this1362;
  void** vtt1363;
  this1362 = v1359;
  vtt1363 = v1360;
  struct std__basic_ostream_char__std__char_traits_char__* t1364 = this1362;
  void** t1365 = vtt1363;
  return;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode
void std__basic_ofstream_char__std__char_traits_char_____basic_ofstream(struct std__basic_ofstream_char__std__char_traits_char__* v1366, char* v1367, int v1368) {
bb1369:
  struct std__basic_ofstream_char__std__char_traits_char__* this1370;
  char* __s1371;
  int __mode1372;
  this1370 = v1366;
  __s1371 = v1367;
  __mode1372 = v1368;
  struct std__basic_ofstream_char__std__char_traits_char__* t1373 = this1370;
  struct std__basic_ios_char__std__char_traits_char__* base1374 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1373 + 248);
  std__basic_ios_char__std__char_traits_char_____basic_ios(base1374);
  if (__cir_exc_active) {
    return;
  }
    struct std__basic_ostream_char__std__char_traits_char__* base1375 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t1373 + 0);
    static void *vtt_slot1376 = 0;
    void** vtt1377 = (void**)&vtt_slot1376;
    std__basic_ostream_char__std__char_traits_char_____basic_ostream(base1375, vtt1377);
    if (__cir_exc_active) {
      {
        struct std__basic_ios_char__std__char_traits_char__* base1378 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1373 + 248);
        std__basic_ios_char__std__char_traits_char______basic_ios(base1378);
      }
      return;
    }
      void* v1379 = (void*)&_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[3];
      void** v1380 = (void**)t1373;
      *(void**)(v1380) = (void*)v1379;
      void* v1381 = (void*)&_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[3];
      struct std__basic_ios_char__std__char_traits_char__* base1382 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1373 + 248);
      void** v1383 = (void**)base1382;
      *(void**)(v1383) = (void*)v1381;
      std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(&t1373->_M_filebuf);
      if (__cir_exc_active) {
        {
          struct std__basic_ostream_char__std__char_traits_char__* base1384 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t1373 + 0);
          static void *vtt_slot1385 = 0;
          void** vtt1386 = (void**)&vtt_slot1385;
          std__basic_ostream_char__std__char_traits_char______basic_ostream(base1384, vtt1386);
        }
        {
          struct std__basic_ios_char__std__char_traits_char__* base1387 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1373 + 248);
          std__basic_ios_char__std__char_traits_char______basic_ios(base1387);
        }
        return;
      }
        void** v1388 = (void**)t1373;
        void* v1389 = *((void**)v1388);
        unsigned char* cast1390 = (unsigned char*)v1389;
        long c1391 = -24;
        unsigned char* ptr1392 = &(cast1390)[c1391];
        long* cast1393 = (long*)ptr1392;
        long t1394 = *cast1393;
        unsigned char* cast1395 = (unsigned char*)t1373;
        unsigned char* ptr1396 = &(cast1395)[t1394];
        struct std__basic_ofstream_char__std__char_traits_char__* cast1397 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr1396;
        struct std__basic_ios_char__std__char_traits_char__* cast1398 = (struct std__basic_ios_char__std__char_traits_char__*)cast1397;
        struct std__basic_streambuf_char__std__char_traits_char__* base1399 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)&(t1373->_M_filebuf) + 0);
        std__basic_ios_char__std__char_traits_char_____init(cast1398, base1399);
        if (__cir_exc_active) {
          {
            std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t1373->_M_filebuf);
          }
          {
            struct std__basic_ostream_char__std__char_traits_char__* base1400 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t1373 + 0);
            static void *vtt_slot1401 = 0;
            void** vtt1402 = (void**)&vtt_slot1401;
            std__basic_ostream_char__std__char_traits_char______basic_ostream(base1400, vtt1402);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base1403 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1373 + 248);
            std__basic_ios_char__std__char_traits_char______basic_ios(base1403);
          }
          return;
        }
        char* t1404 = __s1371;
        int t1405 = __mode1372;
        std__basic_ofstream_char__std__char_traits_char_____open(t1373, t1404, t1405);
        if (__cir_exc_active) {
          {
            std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t1373->_M_filebuf);
          }
          {
            struct std__basic_ostream_char__std__char_traits_char__* base1406 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t1373 + 0);
            static void *vtt_slot1407 = 0;
            void** vtt1408 = (void**)&vtt_slot1407;
            std__basic_ostream_char__std__char_traits_char______basic_ostream(base1406, vtt1408);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base1409 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1373 + 248);
            std__basic_ios_char__std__char_traits_char______basic_ios(base1409);
          }
          return;
        }
  return;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v1410, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1411) {
bb1412:
  struct std__basic_ostream_char__std__char_traits_char__* __os1413;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1414;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1415;
  __os1413 = v1410;
  __str1414 = v1411;
  struct std__basic_ostream_char__std__char_traits_char__* t1416 = __os1413;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1417 = __str1414;
  char* r1418 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t1417);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1419 = __str1414;
  unsigned long r1420 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1419);
  long cast1421 = (long)r1420;
  struct std__basic_ostream_char__std__char_traits_char__* r1422 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1416, r1418, cast1421);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval1415 = r1422;
  struct std__basic_ostream_char__std__char_traits_char__* t1423 = __retval1415;
  return t1423;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEED2Ev
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream_2(struct std__basic_ofstream_char__std__char_traits_char__* v1424, void** v1425) {
bb1426:
  struct std__basic_ofstream_char__std__char_traits_char__* this1427;
  void** vtt1428;
  this1427 = v1424;
  vtt1428 = v1425;
  struct std__basic_ofstream_char__std__char_traits_char__* t1429 = this1427;
  void** t1430 = vtt1428;
    {
      std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t1429->_M_filebuf);
    }
  {
    struct std__basic_ostream_char__std__char_traits_char__* base1431 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)t1429 + 0);
    static void *vtt_slot1432 = 0;
    void** vtt1433 = (void**)&vtt_slot1432;
    std__basic_ostream_char__std__char_traits_char______basic_ostream(base1431, vtt1433);
  }
  return;
}

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream(struct std__basic_ofstream_char__std__char_traits_char__* v1434) {
bb1435:
  struct std__basic_ofstream_char__std__char_traits_char__* this1436;
  this1436 = v1434;
  struct std__basic_ofstream_char__std__char_traits_char__* t1437 = this1436;
    static void *vtt_slot1438 = 0;
    void** vtt1439 = (void**)&vtt_slot1438;
    std__basic_ofstream_char__std__char_traits_char______basic_ofstream_2(t1437, vtt1439);
  {
    struct std__basic_ios_char__std__char_traits_char__* base1440 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1437 + 248);
    std__basic_ios_char__std__char_traits_char______basic_ios(base1440);
  }
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEED2Ev
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream_2(struct std__basic_ifstream_char__std__char_traits_char__* v1441, void** v1442) {
bb1443:
  struct std__basic_ifstream_char__std__char_traits_char__* this1444;
  void** vtt1445;
  this1444 = v1441;
  vtt1445 = v1442;
  struct std__basic_ifstream_char__std__char_traits_char__* t1446 = this1444;
  void** t1447 = vtt1445;
    {
      std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t1446->_M_filebuf);
    }
  {
    struct std__basic_istream_char__std__char_traits_char__* base1448 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t1446 + 0);
    static void *vtt_slot1449 = 0;
    void** vtt1450 = (void**)&vtt_slot1449;
    std__basic_istream_char__std__char_traits_char______basic_istream(base1448, vtt1450);
  }
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* v1451) {
bb1452:
  struct std__basic_ifstream_char__std__char_traits_char__* this1453;
  this1453 = v1451;
  struct std__basic_ifstream_char__std__char_traits_char__* t1454 = this1453;
    static void *vtt_slot1455 = 0;
    void** vtt1456 = (void**)&vtt_slot1455;
    std__basic_ifstream_char__std__char_traits_char______basic_ifstream_2(t1454, vtt1456);
  {
    struct std__basic_ios_char__std__char_traits_char__* base1457 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1454 + 256);
    std__basic_ios_char__std__char_traits_char______basic_ios(base1457);
  }
  return;
}

// function: main
int main() {
bb1458:
  int __retval1459;
  char query1460[1024];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ dataString1461;
  struct std__allocator_char_ ref_tmp01462;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ userName1463;
  struct std__allocator_char_ ref_tmp11464;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ passWord1465;
  struct std__allocator_char_ ref_tmp21466;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ newCheck1467;
  struct std__allocator_char_ ref_tmp31468;
  int contentLength1469;
  int endPassword1470;
  int c1471 = 0;
  __retval1459 = c1471;
  // array copy
  __builtin_memcpy(query1460, __const_main_query, (unsigned long)1024 * sizeof(__const_main_query[0]));
  char* cast1472 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp01462);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&dataString1461, cast1472, &ref_tmp01462);
    if (__cir_exc_active) {
      {
        std__allocator_char____allocator(&ref_tmp01462);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  {
    std__allocator_char____allocator(&ref_tmp01462);
  }
    char* cast1473 = (char*)&(_str);
    std__allocator_char___allocator_2(&ref_tmp11464);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&userName1463, cast1473, &ref_tmp11464);
      if (__cir_exc_active) {
        {
          std__allocator_char____allocator(&ref_tmp11464);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
    {
      std__allocator_char____allocator(&ref_tmp11464);
    }
      char* cast1474 = (char*)&(_str);
      std__allocator_char___allocator_2(&ref_tmp21466);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&passWord1465, cast1474, &ref_tmp21466);
        if (__cir_exc_active) {
          {
            std__allocator_char____allocator(&ref_tmp21466);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      {
        std__allocator_char____allocator(&ref_tmp21466);
      }
        char* cast1475 = (char*)&(_str);
        std__allocator_char___allocator_2(&ref_tmp31468);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&newCheck1467, cast1475, &ref_tmp31468);
          if (__cir_exc_active) {
            {
              std__allocator_char____allocator(&ref_tmp31468);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
        {
          std__allocator_char____allocator(&ref_tmp31468);
        }
          int c1476 = 0;
          contentLength1469 = c1476;
          int c1477 = 0;
          endPassword1470 = c1477;
            char* cast1478 = (char*)&(_str_1);
            char* r1479 = getenv(cast1478);
            _Bool cast1480 = (_Bool)r1479;
            if (cast1480) {
              int userLocation1481;
              int endUser1482;
              int passwordLocation1483;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp61484;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup1485;
              char* cast1486 = (char*)&(_str_1);
              char* r1487 = getenv(cast1486);
              int r1488 = atoi(r1487);
              contentLength1469 = r1488;
              char* cast1489 = (char*)&(query1460);
              int t1490 = contentLength1469;
              long cast1491 = (long)t1490;
              struct std__basic_istream_char__std__char_traits_char__* r1492 = std__istream__read(&_ZSt3cin, cast1489, cast1491);
              if (__cir_exc_active) {
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              char* cast1493 = (char*)&(query1460);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1494 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(&dataString1461, cast1493);
              if (__cir_exc_active) {
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              char* cast1495 = (char*)&(_str_2);
              unsigned long c1496 = 0;
              unsigned long r1497 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1461, cast1495, c1496);
              unsigned long c1498 = 5;
              unsigned long b1499 = r1497 + c1498;
              int cast1500 = (int)b1499;
              userLocation1481 = cast1500;
              char* cast1501 = (char*)&(_str_3);
              unsigned long c1502 = 0;
              unsigned long r1503 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1461, cast1501, c1502);
              int cast1504 = (int)r1503;
              endUser1482 = cast1504;
              char* cast1505 = (char*)&(_str_4);
              unsigned long c1506 = 0;
              unsigned long r1507 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1461, cast1505, c1506);
              unsigned long c1508 = 9;
              unsigned long b1509 = r1507 + c1508;
              int cast1510 = (int)b1509;
              passwordLocation1483 = cast1510;
              char* cast1511 = (char*)&(_str_5);
              unsigned long c1512 = 0;
              unsigned long r1513 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1461, cast1511, c1512);
              int cast1514 = (int)r1513;
              endPassword1470 = cast1514;
                int t1515 = endPassword1470;
                int c1516 = 0;
                _Bool c1517 = ((t1515 > c1516)) ? 1 : 0;
                if (c1517) {
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp41518;
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup1519;
                  int t1520 = passwordLocation1483;
                  unsigned long cast1521 = (unsigned long)t1520;
                  int t1522 = endPassword1470;
                  int t1523 = passwordLocation1483;
                  int b1524 = t1522 - t1523;
                  unsigned long cast1525 = (unsigned long)b1524;
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1526 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&dataString1461, cast1521, cast1525);
                  if (__cir_exc_active) {
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                    }
                    int __cir_eh_ret = (int)0;
                    return __cir_eh_ret;
                  }
                  ref_tmp41518 = r1526;
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1527 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&passWord1465, &ref_tmp41518);
                    tmp_exprcleanup1519 = r1527;
                  {
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp41518);
                  }
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1528 = tmp_exprcleanup1519;
                } else {
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp51529;
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup1530;
                  int t1531 = passwordLocation1483;
                  unsigned long cast1532 = (unsigned long)t1531;
                  unsigned long t1533 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1534 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&dataString1461, cast1532, t1533);
                  if (__cir_exc_active) {
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                    }
                    int __cir_eh_ret = (int)0;
                    return __cir_eh_ret;
                  }
                  ref_tmp51529 = r1534;
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1535 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&passWord1465, &ref_tmp51529);
                    tmp_exprcleanup1530 = r1535;
                  {
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp51529);
                  }
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1536 = tmp_exprcleanup1530;
                }
              int t1537 = userLocation1481;
              unsigned long cast1538 = (unsigned long)t1537;
              int t1539 = endUser1482;
              int t1540 = userLocation1481;
              int b1541 = t1539 - t1540;
              unsigned long cast1542 = (unsigned long)b1541;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1543 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&dataString1461, cast1538, cast1542);
              if (__cir_exc_active) {
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              ref_tmp61484 = r1543;
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1544 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&userName1463, &ref_tmp61484);
                tmp_exprcleanup1485 = r1544;
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp61484);
              }
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1545 = tmp_exprcleanup1485;
            }
            char* cast1546 = (char*)&(_str);
            _Bool r1547 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&dataString1461, cast1546);
            if (__cir_exc_active) {
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
            if (r1547) {
              header();
              if (__cir_exc_active) {
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              char* cast1548 = (char*)&(_str_6);
              struct std__basic_ostream_char__std__char_traits_char__* r1549 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1548);
              if (__cir_exc_active) {
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              char* cast1550 = (char*)&(_str_7);
              struct std__basic_ostream_char__std__char_traits_char__* r1551 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1550);
              if (__cir_exc_active) {
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              char* cast1552 = (char*)&(_str_8);
              struct std__basic_ostream_char__std__char_traits_char__* r1553 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1551, cast1552);
              if (__cir_exc_active) {
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              char* cast1554 = (char*)&(_str_9);
              struct std__basic_ostream_char__std__char_traits_char__* r1555 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1553, cast1554);
              if (__cir_exc_active) {
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              char* cast1556 = (char*)&(_str_10);
              struct std__basic_ostream_char__std__char_traits_char__* r1557 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1555, cast1556);
              if (__cir_exc_active) {
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              char* cast1558 = (char*)&(_str_11);
              struct std__basic_ostream_char__std__char_traits_char__* r1559 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1557, cast1558);
              if (__cir_exc_active) {
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              char* cast1560 = (char*)&(_str_12);
              struct std__basic_ostream_char__std__char_traits_char__* r1561 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1559, cast1560);
              if (__cir_exc_active) {
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              char* cast1562 = (char*)&(_str_13);
              struct std__basic_ostream_char__std__char_traits_char__* r1563 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1561, cast1562);
              if (__cir_exc_active) {
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              char* cast1564 = (char*)&(_str_14);
              struct std__basic_ostream_char__std__char_traits_char__* r1565 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1563, cast1564);
              if (__cir_exc_active) {
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              char* cast1566 = (char*)&(_str_15);
              struct std__basic_ostream_char__std__char_traits_char__* r1567 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1565, cast1566);
              if (__cir_exc_active) {
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              char* cast1568 = (char*)&(_str_16);
              struct std__basic_ostream_char__std__char_traits_char__* r1569 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1567, cast1568);
              if (__cir_exc_active) {
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              char* cast1570 = (char*)&(_str_17);
              struct std__basic_ostream_char__std__char_traits_char__* r1571 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1569, cast1570);
              if (__cir_exc_active) {
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              char* cast1572 = (char*)&(_str_18);
              struct std__basic_ostream_char__std__char_traits_char__* r1573 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1571, cast1572);
              if (__cir_exc_active) {
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
            } else {
                int t1574 = endPassword1470;
                int c1575 = 0;
                _Bool c1576 = ((t1574 > c1575)) ? 1 : 0;
                if (c1576) {
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ fileUsername1577;
                  struct std__allocator_char_ ref_tmp71578;
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ filePassword1579;
                  struct std__allocator_char_ ref_tmp81580;
                  _Bool nameTaken1581;
                  struct std__basic_ifstream_char__std__char_traits_char__ userData1582;
                  char* cast1583 = (char*)&(_str);
                  std__allocator_char___allocator_2(&ref_tmp71578);
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&fileUsername1577, cast1583, &ref_tmp71578);
                    if (__cir_exc_active) {
                      {
                        std__allocator_char____allocator(&ref_tmp71578);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                      }
                      int __cir_eh_ret = (int)0;
                      return __cir_eh_ret;
                    }
                  {
                    std__allocator_char____allocator(&ref_tmp71578);
                  }
                    char* cast1584 = (char*)&(_str);
                    std__allocator_char___allocator_2(&ref_tmp81580);
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&filePassword1579, cast1584, &ref_tmp81580);
                      if (__cir_exc_active) {
                        {
                          std__allocator_char____allocator(&ref_tmp81580);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1577);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                    {
                      std__allocator_char____allocator(&ref_tmp81580);
                    }
                      _Bool c1585 = 0;
                      nameTaken1581 = c1585;
                      char* cast1586 = (char*)&(_str_19);
                      int t1587 = _ZNSt8ios_base2inE_const;
                      std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(&userData1582, cast1586, t1587);
                      if (__cir_exc_active) {
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1579);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1577);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                          void** v1588 = (void**)&(userData1582);
                          void* v1589 = *((void**)v1588);
                          unsigned char* cast1590 = (unsigned char*)v1589;
                          long c1591 = -24;
                          unsigned char* ptr1592 = &(cast1590)[c1591];
                          long* cast1593 = (long*)ptr1592;
                          long t1594 = *cast1593;
                          unsigned char* cast1595 = (unsigned char*)&(userData1582);
                          unsigned char* ptr1596 = &(cast1595)[t1594];
                          struct std__basic_ifstream_char__std__char_traits_char__* cast1597 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr1596;
                          struct std__basic_ios_char__std__char_traits_char__* cast1598 = (struct std__basic_ios_char__std__char_traits_char__*)cast1597;
                          _Bool r1599 = std__basic_ios_char__std__char_traits_char_____operator____const(cast1598);
                          if (__cir_exc_active) {
                            {
                              std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1582);
                            }
                            {
                              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1579);
                            }
                            {
                              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1577);
                            }
                            {
                              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                            }
                            {
                              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                            }
                            {
                              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                            }
                            {
                              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                            }
                            int __cir_eh_ret = (int)0;
                            return __cir_eh_ret;
                          }
                          if (r1599) {
                            char* cast1600 = (char*)&(_str_20);
                            struct std__basic_ostream_char__std__char_traits_char__* r1601 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cerr, cast1600);
                            if (__cir_exc_active) {
                              {
                                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1582);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1579);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1577);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                              }
                              int __cir_eh_ret = (int)0;
                              return __cir_eh_ret;
                            }
                            int c1602 = 1;
                            exit(c1602);
                          }
                          while (1) {
                            struct std__basic_istream_char__std__char_traits_char__* base1603 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(userData1582) + 0);
                            struct std__basic_istream_char__std__char_traits_char__* r1604 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___std__allocator_char___(base1603, &fileUsername1577);
                            if (__cir_exc_active) {
                              {
                                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1582);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1579);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1577);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                              }
                              int __cir_eh_ret = (int)0;
                              return __cir_eh_ret;
                            }
                            struct std__basic_istream_char__std__char_traits_char__* r1605 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___std__allocator_char___(r1604, &filePassword1579);
                            if (__cir_exc_active) {
                              {
                                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1582);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1579);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1577);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                              }
                              int __cir_eh_ret = (int)0;
                              return __cir_eh_ret;
                            }
                            void** v1606 = (void**)r1605;
                            void* v1607 = *((void**)v1606);
                            unsigned char* cast1608 = (unsigned char*)v1607;
                            long c1609 = -24;
                            unsigned char* ptr1610 = &(cast1608)[c1609];
                            long* cast1611 = (long*)ptr1610;
                            long t1612 = *cast1611;
                            unsigned char* cast1613 = (unsigned char*)r1605;
                            unsigned char* ptr1614 = &(cast1613)[t1612];
                            struct std__basic_istream_char__std__char_traits_char__* cast1615 = (struct std__basic_istream_char__std__char_traits_char__*)ptr1614;
                            struct std__basic_ios_char__std__char_traits_char__* cast1616 = (struct std__basic_ios_char__std__char_traits_char__*)cast1615;
                            _Bool r1617 = std__basic_ios_char__std__char_traits_char_____operator_bool___const(cast1616);
                            if (__cir_exc_active) {
                              {
                                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1582);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1579);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1577);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                              }
                              int __cir_eh_ret = (int)0;
                              return __cir_eh_ret;
                            }
                            if (!r1617) break;
                                _Bool r1618 = bool_std__operator___char__std__char_traits_char___std__allocator_char____2(&userName1463, &fileUsername1577);
                                if (r1618) {
                                  _Bool c1619 = 1;
                                  nameTaken1581 = c1619;
                                }
                          }
                          _Bool t1620 = nameTaken1581;
                          if (t1620) {
                            header();
                            if (__cir_exc_active) {
                              {
                                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1582);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1579);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1577);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                              }
                              int __cir_eh_ret = (int)0;
                              return __cir_eh_ret;
                            }
                            char* cast1621 = (char*)&(_str_21);
                            struct std__basic_ostream_char__std__char_traits_char__* r1622 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1621);
                            if (__cir_exc_active) {
                              {
                                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1582);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1579);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1577);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                              }
                              int __cir_eh_ret = (int)0;
                              return __cir_eh_ret;
                            }
                            char* cast1623 = (char*)&(_str_22);
                            struct std__basic_ostream_char__std__char_traits_char__* r1624 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1622, cast1623);
                            if (__cir_exc_active) {
                              {
                                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1582);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1579);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1577);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                              }
                              int __cir_eh_ret = (int)0;
                              return __cir_eh_ret;
                            }
                            char* cast1625 = (char*)&(_str_23);
                            struct std__basic_ostream_char__std__char_traits_char__* r1626 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1624, cast1625);
                            if (__cir_exc_active) {
                              {
                                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1582);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1579);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1577);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                              }
                              int __cir_eh_ret = (int)0;
                              return __cir_eh_ret;
                            }
                          } else {
                            struct std__basic_ofstream_char__std__char_traits_char__ userData1627;
                            writeCookie();
                            if (__cir_exc_active) {
                              {
                                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1582);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1579);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1577);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                              }
                              int __cir_eh_ret = (int)0;
                              return __cir_eh_ret;
                            }
                            header();
                            if (__cir_exc_active) {
                              {
                                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1582);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1579);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1577);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                              }
                              int __cir_eh_ret = (int)0;
                              return __cir_eh_ret;
                            }
                            char* cast1628 = (char*)&(_str_19);
                            int t1629 = _ZNSt8ios_base3appE_const;
                            std__basic_ofstream_char__std__char_traits_char_____basic_ofstream(&userData1627, cast1628, t1629);
                            if (__cir_exc_active) {
                              {
                                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1582);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1579);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1577);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                              }
                              int __cir_eh_ret = (int)0;
                              return __cir_eh_ret;
                            }
                                void** v1630 = (void**)&(userData1627);
                                void* v1631 = *((void**)v1630);
                                unsigned char* cast1632 = (unsigned char*)v1631;
                                long c1633 = -24;
                                unsigned char* ptr1634 = &(cast1632)[c1633];
                                long* cast1635 = (long*)ptr1634;
                                long t1636 = *cast1635;
                                unsigned char* cast1637 = (unsigned char*)&(userData1627);
                                unsigned char* ptr1638 = &(cast1637)[t1636];
                                struct std__basic_ofstream_char__std__char_traits_char__* cast1639 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr1638;
                                struct std__basic_ios_char__std__char_traits_char__* cast1640 = (struct std__basic_ios_char__std__char_traits_char__*)cast1639;
                                _Bool r1641 = std__basic_ios_char__std__char_traits_char_____operator____const(cast1640);
                                if (__cir_exc_active) {
                                  {
                                    std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&userData1627);
                                  }
                                  {
                                    std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1582);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1579);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1577);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                                  }
                                  int __cir_eh_ret = (int)0;
                                  return __cir_eh_ret;
                                }
                                if (r1641) {
                                  char* cast1642 = (char*)&(_str_20);
                                  struct std__basic_ostream_char__std__char_traits_char__* r1643 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cerr, cast1642);
                                  if (__cir_exc_active) {
                                    {
                                      std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&userData1627);
                                    }
                                    {
                                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1582);
                                    }
                                    {
                                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1579);
                                    }
                                    {
                                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1577);
                                    }
                                    {
                                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                                    }
                                    {
                                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                                    }
                                    {
                                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                                    }
                                    {
                                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                                    }
                                    int __cir_eh_ret = (int)0;
                                    return __cir_eh_ret;
                                  }
                                  int c1644 = 1;
                                  exit(c1644);
                                }
                              struct std__basic_ostream_char__std__char_traits_char__* base1645 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(userData1627) + 0);
                              char* cast1646 = (char*)&(_str_24);
                              struct std__basic_ostream_char__std__char_traits_char__* r1647 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(base1645, cast1646);
                              if (__cir_exc_active) {
                                {
                                  std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&userData1627);
                                }
                                {
                                  std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1582);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1579);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1577);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                                }
                                int __cir_eh_ret = (int)0;
                                return __cir_eh_ret;
                              }
                              struct std__basic_ostream_char__std__char_traits_char__* r1648 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1647, &userName1463);
                              if (__cir_exc_active) {
                                {
                                  std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&userData1627);
                                }
                                {
                                  std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1582);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1579);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1577);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                                }
                                int __cir_eh_ret = (int)0;
                                return __cir_eh_ret;
                              }
                              char* cast1649 = (char*)&(_str_24);
                              struct std__basic_ostream_char__std__char_traits_char__* r1650 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1648, cast1649);
                              if (__cir_exc_active) {
                                {
                                  std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&userData1627);
                                }
                                {
                                  std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1582);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1579);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1577);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                                }
                                int __cir_eh_ret = (int)0;
                                return __cir_eh_ret;
                              }
                              struct std__basic_ostream_char__std__char_traits_char__* r1651 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1650, &passWord1465);
                              if (__cir_exc_active) {
                                {
                                  std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&userData1627);
                                }
                                {
                                  std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1582);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1579);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1577);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                                }
                                int __cir_eh_ret = (int)0;
                                return __cir_eh_ret;
                              }
                              char* cast1652 = (char*)&(_str_25);
                              struct std__basic_ostream_char__std__char_traits_char__* r1653 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1652);
                              if (__cir_exc_active) {
                                {
                                  std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&userData1627);
                                }
                                {
                                  std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1582);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1579);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1577);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                                }
                                int __cir_eh_ret = (int)0;
                                return __cir_eh_ret;
                              }
                              char* cast1654 = (char*)&(_str_26);
                              struct std__basic_ostream_char__std__char_traits_char__* r1655 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1653, cast1654);
                              if (__cir_exc_active) {
                                {
                                  std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&userData1627);
                                }
                                {
                                  std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1582);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1579);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1577);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                                }
                                int __cir_eh_ret = (int)0;
                                return __cir_eh_ret;
                              }
                              char* cast1656 = (char*)&(_str_27);
                              struct std__basic_ostream_char__std__char_traits_char__* r1657 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1655, cast1656);
                              if (__cir_exc_active) {
                                {
                                  std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&userData1627);
                                }
                                {
                                  std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1582);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1579);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1577);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                                }
                                {
                                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                                }
                                int __cir_eh_ret = (int)0;
                                return __cir_eh_ret;
                              }
                            {
                              std__basic_ofstream_char__std__char_traits_char______basic_ofstream(&userData1627);
                            }
                          }
                      {
                        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1582);
                      }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1579);
                    }
                  {
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1577);
                  }
                } else {
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ fileUsername1658;
                  struct std__allocator_char_ ref_tmp91659;
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ filePassword1660;
                  struct std__allocator_char_ ref_tmp101661;
                  _Bool authenticated1662;
                  _Bool userFound1663;
                  struct std__basic_ifstream_char__std__char_traits_char__ userData1664;
                  char* cast1665 = (char*)&(_str);
                  std__allocator_char___allocator_2(&ref_tmp91659);
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&fileUsername1658, cast1665, &ref_tmp91659);
                    if (__cir_exc_active) {
                      {
                        std__allocator_char____allocator(&ref_tmp91659);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                      }
                      int __cir_eh_ret = (int)0;
                      return __cir_eh_ret;
                    }
                  {
                    std__allocator_char____allocator(&ref_tmp91659);
                  }
                    char* cast1666 = (char*)&(_str);
                    std__allocator_char___allocator_2(&ref_tmp101661);
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&filePassword1660, cast1666, &ref_tmp101661);
                      if (__cir_exc_active) {
                        {
                          std__allocator_char____allocator(&ref_tmp101661);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1658);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                    {
                      std__allocator_char____allocator(&ref_tmp101661);
                    }
                      _Bool c1667 = 0;
                      authenticated1662 = c1667;
                      _Bool c1668 = 0;
                      userFound1663 = c1668;
                      char* cast1669 = (char*)&(_str_19);
                      int t1670 = _ZNSt8ios_base2inE_const;
                      std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(&userData1664, cast1669, t1670);
                      if (__cir_exc_active) {
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1660);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1658);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                        }
                        int __cir_eh_ret = (int)0;
                        return __cir_eh_ret;
                      }
                          void** v1671 = (void**)&(userData1664);
                          void* v1672 = *((void**)v1671);
                          unsigned char* cast1673 = (unsigned char*)v1672;
                          long c1674 = -24;
                          unsigned char* ptr1675 = &(cast1673)[c1674];
                          long* cast1676 = (long*)ptr1675;
                          long t1677 = *cast1676;
                          unsigned char* cast1678 = (unsigned char*)&(userData1664);
                          unsigned char* ptr1679 = &(cast1678)[t1677];
                          struct std__basic_ifstream_char__std__char_traits_char__* cast1680 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr1679;
                          struct std__basic_ios_char__std__char_traits_char__* cast1681 = (struct std__basic_ios_char__std__char_traits_char__*)cast1680;
                          _Bool r1682 = std__basic_ios_char__std__char_traits_char_____operator____const(cast1681);
                          if (__cir_exc_active) {
                            {
                              std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1664);
                            }
                            {
                              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1660);
                            }
                            {
                              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1658);
                            }
                            {
                              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                            }
                            {
                              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                            }
                            {
                              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                            }
                            {
                              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                            }
                            int __cir_eh_ret = (int)0;
                            return __cir_eh_ret;
                          }
                          if (r1682) {
                            char* cast1683 = (char*)&(_str_20);
                            struct std__basic_ostream_char__std__char_traits_char__* r1684 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cerr, cast1683);
                            if (__cir_exc_active) {
                              {
                                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1664);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1660);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1658);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                              }
                              int __cir_eh_ret = (int)0;
                              return __cir_eh_ret;
                            }
                            int c1685 = 1;
                            exit(c1685);
                          }
                          while (1) {
                            struct std__basic_istream_char__std__char_traits_char__* base1686 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(userData1664) + 0);
                            struct std__basic_istream_char__std__char_traits_char__* r1687 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___std__allocator_char___(base1686, &fileUsername1658);
                            if (__cir_exc_active) {
                              {
                                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1664);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1660);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1658);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                              }
                              int __cir_eh_ret = (int)0;
                              return __cir_eh_ret;
                            }
                            struct std__basic_istream_char__std__char_traits_char__* r1688 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___std__allocator_char___(r1687, &filePassword1660);
                            if (__cir_exc_active) {
                              {
                                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1664);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1660);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1658);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                              }
                              int __cir_eh_ret = (int)0;
                              return __cir_eh_ret;
                            }
                            void** v1689 = (void**)r1688;
                            void* v1690 = *((void**)v1689);
                            unsigned char* cast1691 = (unsigned char*)v1690;
                            long c1692 = -24;
                            unsigned char* ptr1693 = &(cast1691)[c1692];
                            long* cast1694 = (long*)ptr1693;
                            long t1695 = *cast1694;
                            unsigned char* cast1696 = (unsigned char*)r1688;
                            unsigned char* ptr1697 = &(cast1696)[t1695];
                            struct std__basic_istream_char__std__char_traits_char__* cast1698 = (struct std__basic_istream_char__std__char_traits_char__*)ptr1697;
                            struct std__basic_ios_char__std__char_traits_char__* cast1699 = (struct std__basic_ios_char__std__char_traits_char__*)cast1698;
                            _Bool r1700 = std__basic_ios_char__std__char_traits_char_____operator_bool___const(cast1699);
                            if (__cir_exc_active) {
                              {
                                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1664);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1660);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1658);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                              }
                              int __cir_eh_ret = (int)0;
                              return __cir_eh_ret;
                            }
                            if (!r1700) break;
                                _Bool r1701 = bool_std__operator___char__std__char_traits_char___std__allocator_char____2(&userName1463, &fileUsername1658);
                                _Bool ternary1702;
                                if (r1701) {
                                  _Bool r1703 = bool_std__operator___char__std__char_traits_char___std__allocator_char____2(&passWord1465, &filePassword1660);
                                  ternary1702 = (_Bool)r1703;
                                } else {
                                  _Bool c1704 = 0;
                                  ternary1702 = (_Bool)c1704;
                                }
                                if (ternary1702) {
                                  _Bool c1705 = 1;
                                  authenticated1662 = c1705;
                                }
                                _Bool r1706 = bool_std__operator___char__std__char_traits_char___std__allocator_char____2(&userName1463, &fileUsername1658);
                                if (r1706) {
                                  _Bool c1707 = 1;
                                  userFound1663 = c1707;
                                }
                          }
                          _Bool t1708 = authenticated1662;
                          if (t1708) {
                            writeCookie();
                            if (__cir_exc_active) {
                              {
                                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1664);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1660);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1658);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                              }
                              int __cir_eh_ret = (int)0;
                              return __cir_eh_ret;
                            }
                            header();
                            if (__cir_exc_active) {
                              {
                                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1664);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1660);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1658);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                              }
                              int __cir_eh_ret = (int)0;
                              return __cir_eh_ret;
                            }
                            char* cast1709 = (char*)&(_str_28);
                            struct std__basic_ostream_char__std__char_traits_char__* r1710 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1709);
                            if (__cir_exc_active) {
                              {
                                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1664);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1660);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1658);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                              }
                              int __cir_eh_ret = (int)0;
                              return __cir_eh_ret;
                            }
                            struct std__basic_ostream_char__std__char_traits_char__* r1711 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1710, &userName1463);
                            if (__cir_exc_active) {
                              {
                                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1664);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1660);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1658);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                              }
                              int __cir_eh_ret = (int)0;
                              return __cir_eh_ret;
                            }
                            char* cast1712 = (char*)&(_str_29);
                            struct std__basic_ostream_char__std__char_traits_char__* r1713 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1711, cast1712);
                            if (__cir_exc_active) {
                              {
                                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1664);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1660);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1658);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                              }
                              int __cir_eh_ret = (int)0;
                              return __cir_eh_ret;
                            }
                            char* cast1714 = (char*)&(_str_26);
                            struct std__basic_ostream_char__std__char_traits_char__* r1715 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1713, cast1714);
                            if (__cir_exc_active) {
                              {
                                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1664);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1660);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1658);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                              }
                              int __cir_eh_ret = (int)0;
                              return __cir_eh_ret;
                            }
                            char* cast1716 = (char*)&(_str_30);
                            struct std__basic_ostream_char__std__char_traits_char__* r1717 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1715, cast1716);
                            if (__cir_exc_active) {
                              {
                                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1664);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1660);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1658);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                              }
                              int __cir_eh_ret = (int)0;
                              return __cir_eh_ret;
                            }
                          } else {
                            header();
                            if (__cir_exc_active) {
                              {
                                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1664);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1660);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1658);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                              }
                              {
                                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                              }
                              int __cir_eh_ret = (int)0;
                              return __cir_eh_ret;
                            }
                              _Bool t1718 = userFound1663;
                              if (t1718) {
                                char* cast1719 = (char*)&(_str_31);
                                struct std__basic_ostream_char__std__char_traits_char__* r1720 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1719);
                                if (__cir_exc_active) {
                                  {
                                    std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1664);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1660);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1658);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                                  }
                                  int __cir_eh_ret = (int)0;
                                  return __cir_eh_ret;
                                }
                                char* cast1721 = (char*)&(_str_32);
                                struct std__basic_ostream_char__std__char_traits_char__* r1722 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1720, cast1721);
                                if (__cir_exc_active) {
                                  {
                                    std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1664);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1660);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1658);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                                  }
                                  int __cir_eh_ret = (int)0;
                                  return __cir_eh_ret;
                                }
                                char* cast1723 = (char*)&(_str_22);
                                struct std__basic_ostream_char__std__char_traits_char__* r1724 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1722, cast1723);
                                if (__cir_exc_active) {
                                  {
                                    std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1664);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1660);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1658);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                                  }
                                  int __cir_eh_ret = (int)0;
                                  return __cir_eh_ret;
                                }
                                char* cast1725 = (char*)&(_str_33);
                                struct std__basic_ostream_char__std__char_traits_char__* r1726 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1724, cast1725);
                                if (__cir_exc_active) {
                                  {
                                    std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1664);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1660);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1658);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                                  }
                                  int __cir_eh_ret = (int)0;
                                  return __cir_eh_ret;
                                }
                              } else {
                                char* cast1727 = (char*)&(_str_34);
                                struct std__basic_ostream_char__std__char_traits_char__* r1728 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1727);
                                if (__cir_exc_active) {
                                  {
                                    std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1664);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1660);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1658);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                                  }
                                  int __cir_eh_ret = (int)0;
                                  return __cir_eh_ret;
                                }
                                char* cast1729 = (char*)&(_str_22);
                                struct std__basic_ostream_char__std__char_traits_char__* r1730 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1728, cast1729);
                                if (__cir_exc_active) {
                                  {
                                    std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1664);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1660);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1658);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                                  }
                                  int __cir_eh_ret = (int)0;
                                  return __cir_eh_ret;
                                }
                                char* cast1731 = (char*)&(_str_35);
                                struct std__basic_ostream_char__std__char_traits_char__* r1732 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1730, cast1731);
                                if (__cir_exc_active) {
                                  {
                                    std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1664);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1660);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1658);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
                                  }
                                  {
                                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
                                  }
                                  int __cir_eh_ret = (int)0;
                                  return __cir_eh_ret;
                                }
                              }
                          }
                      {
                        std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1664);
                      }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&filePassword1660);
                    }
                  {
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&fileUsername1658);
                  }
                }
            }
          char* cast1733 = (char*)&(_str_36);
          struct std__basic_ostream_char__std__char_traits_char__* r1734 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1733);
          if (__cir_exc_active) {
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int c1735 = 0;
          __retval1459 = c1735;
          int t1736 = __retval1459;
          int ret_val1737 = t1736;
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&newCheck1467);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&passWord1465);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&userName1463);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1461);
          }
          return ret_val1737;
  int t1738 = __retval1459;
  return t1738;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1739) {
bb1740:
  struct std____new_allocator_char_* this1741;
  this1741 = v1739;
  struct std____new_allocator_char_* t1742 = this1741;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1743) {
bb1744:
  char* __r1745;
  char* __retval1746;
  __r1745 = v1743;
  char* t1747 = __r1745;
  __retval1746 = t1747;
  char* t1748 = __retval1746;
  return t1748;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1749) {
bb1750:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1751;
  char* __retval1752;
  this1751 = v1749;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1753 = this1751;
  char* cast1754 = (char*)&(t1753->field2._M_local_buf);
  char* r1755 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1754);
  __retval1752 = r1755;
  char* t1756 = __retval1752;
  return t1756;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1757, char* v1758, struct std__allocator_char_* v1759) {
bb1760:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1761;
  char* __dat1762;
  struct std__allocator_char_* __a1763;
  this1761 = v1757;
  __dat1762 = v1758;
  __a1763 = v1759;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1764 = this1761;
  struct std__allocator_char_* base1765 = (struct std__allocator_char_*)((char *)t1764 + 0);
  struct std__allocator_char_* t1766 = __a1763;
  std__allocator_char___allocator(base1765, t1766);
    char* t1767 = __dat1762;
    t1764->_M_p = t1767;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1768:
  _Bool __retval1769;
    _Bool c1770 = 0;
    __retval1769 = c1770;
    _Bool t1771 = __retval1769;
    return t1771;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1772, char* v1773) {
bb1774:
  char* __c11775;
  char* __c21776;
  _Bool __retval1777;
  __c11775 = v1772;
  __c21776 = v1773;
  char* t1778 = __c11775;
  char t1779 = *t1778;
  int cast1780 = (int)t1779;
  char* t1781 = __c21776;
  char t1782 = *t1781;
  int cast1783 = (int)t1782;
  _Bool c1784 = ((cast1780 == cast1783)) ? 1 : 0;
  __retval1777 = c1784;
  _Bool t1785 = __retval1777;
  return t1785;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1786) {
bb1787:
  char* __p1788;
  unsigned long __retval1789;
  unsigned long __i1790;
  __p1788 = v1786;
  unsigned long c1791 = 0;
  __i1790 = c1791;
    char ref_tmp01792;
    while (1) {
      unsigned long t1793 = __i1790;
      char* t1794 = __p1788;
      char* ptr1795 = &(t1794)[t1793];
      char c1796 = 0;
      ref_tmp01792 = c1796;
      _Bool r1797 = __gnu_cxx__char_traits_char___eq(ptr1795, &ref_tmp01792);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u1798 = !r1797;
      if (!u1798) break;
      unsigned long t1799 = __i1790;
      unsigned long u1800 = t1799 + 1;
      __i1790 = u1800;
    }
  unsigned long t1801 = __i1790;
  __retval1789 = t1801;
  unsigned long t1802 = __retval1789;
  return t1802;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1803) {
bb1804:
  char* __s1805;
  unsigned long __retval1806;
  __s1805 = v1803;
    _Bool r1807 = std____is_constant_evaluated();
    if (r1807) {
      char* t1808 = __s1805;
      unsigned long r1809 = __gnu_cxx__char_traits_char___length(t1808);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval1806 = r1809;
      unsigned long t1810 = __retval1806;
      return t1810;
    }
  char* t1811 = __s1805;
  unsigned long r1812 = strlen(t1811);
  __retval1806 = r1812;
  unsigned long t1813 = __retval1806;
  return t1813;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v1814, char* v1815, struct std__random_access_iterator_tag v1816) {
bb1817:
  char* __first1818;
  char* __last1819;
  struct std__random_access_iterator_tag unnamed1820;
  long __retval1821;
  __first1818 = v1814;
  __last1819 = v1815;
  unnamed1820 = v1816;
  char* t1822 = __last1819;
  char* t1823 = __first1818;
  long diff1824 = t1822 - t1823;
  __retval1821 = diff1824;
  long t1825 = __retval1821;
  return t1825;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v1826) {
bb1827:
  char** unnamed1828;
  struct std__random_access_iterator_tag __retval1829;
  unnamed1828 = v1826;
  struct std__random_access_iterator_tag t1830 = __retval1829;
  return t1830;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v1831, char* v1832) {
bb1833:
  char* __first1834;
  char* __last1835;
  long __retval1836;
  struct std__random_access_iterator_tag agg_tmp01837;
  __first1834 = v1831;
  __last1835 = v1832;
  char* t1838 = __first1834;
  char* t1839 = __last1835;
  struct std__random_access_iterator_tag r1840 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first1834);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp01837 = r1840;
  struct std__random_access_iterator_tag t1841 = agg_tmp01837;
  long r1842 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t1838, t1839, t1841);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval1836 = r1842;
  long t1843 = __retval1836;
  return t1843;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1844, char* v1845) {
bb1846:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1847;
  char* __p1848;
  this1847 = v1844;
  __p1848 = v1845;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1849 = this1847;
  char* t1850 = __p1848;
  t1849->_M_dataplus._M_p = t1850;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v1851) {
bb1852:
  struct std__allocator_char_* __a1853;
  unsigned long __retval1854;
  __a1853 = v1851;
  unsigned long c1855 = -1;
  unsigned long c1856 = 1;
  unsigned long b1857 = c1855 / c1856;
  __retval1854 = b1857;
  unsigned long t1858 = __retval1854;
  return t1858;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1859) {
bb1860:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1861;
  struct std__allocator_char_* __retval1862;
  this1861 = v1859;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1863 = this1861;
  struct std__allocator_char_* base1864 = (struct std__allocator_char_*)((char *)&(t1863->_M_dataplus) + 0);
  __retval1862 = base1864;
  struct std__allocator_char_* t1865 = __retval1862;
  return t1865;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1866, unsigned long* v1867) {
bb1868:
  unsigned long* __a1869;
  unsigned long* __b1870;
  unsigned long* __retval1871;
  __a1869 = v1866;
  __b1870 = v1867;
    unsigned long* t1872 = __b1870;
    unsigned long t1873 = *t1872;
    unsigned long* t1874 = __a1869;
    unsigned long t1875 = *t1874;
    _Bool c1876 = ((t1873 < t1875)) ? 1 : 0;
    if (c1876) {
      unsigned long* t1877 = __b1870;
      __retval1871 = t1877;
      unsigned long* t1878 = __retval1871;
      return t1878;
    }
  unsigned long* t1879 = __a1869;
  __retval1871 = t1879;
  unsigned long* t1880 = __retval1871;
  return t1880;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1881) {
bb1882:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1883;
  unsigned long __retval1884;
  unsigned long __diffmax1885;
  unsigned long __allocmax1886;
  this1883 = v1881;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1887 = this1883;
  unsigned long c1888 = 9223372036854775807;
  __diffmax1885 = c1888;
  struct std__allocator_char_* r1889 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1887);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long r1890 = std__allocator_traits_std__allocator_char_____max_size(r1889);
  __allocmax1886 = r1890;
  unsigned long* r1891 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1885, &__allocmax1886);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t1892 = *r1891;
  unsigned long c1893 = 1;
  unsigned long b1894 = t1892 - c1893;
  __retval1884 = b1894;
  unsigned long t1895 = __retval1884;
  return t1895;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v1896) {
bb1897:
  struct std____new_allocator_char_* this1898;
  unsigned long __retval1899;
  this1898 = v1896;
  struct std____new_allocator_char_* t1900 = this1898;
  unsigned long c1901 = 9223372036854775807;
  unsigned long c1902 = 1;
  unsigned long b1903 = c1901 / c1902;
  __retval1899 = b1903;
  unsigned long t1904 = __retval1899;
  return t1904;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v1905, unsigned long v1906, void* v1907) {
bb1908:
  struct std____new_allocator_char_* this1909;
  unsigned long __n1910;
  void* unnamed1911;
  char* __retval1912;
  this1909 = v1905;
  __n1910 = v1906;
  unnamed1911 = v1907;
  struct std____new_allocator_char_* t1913 = this1909;
    unsigned long t1914 = __n1910;
    unsigned long r1915 = std____new_allocator_char____M_max_size___const(t1913);
    _Bool c1916 = ((t1914 > r1915)) ? 1 : 0;
    if (c1916) {
        unsigned long t1917 = __n1910;
        unsigned long c1918 = -1;
        unsigned long c1919 = 1;
        unsigned long b1920 = c1918 / c1919;
        _Bool c1921 = ((t1917 > b1920)) ? 1 : 0;
        if (c1921) {
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
    unsigned long c1922 = 1;
    unsigned long c1923 = 16;
    _Bool c1924 = ((c1922 > c1923)) ? 1 : 0;
    if (c1924) {
      unsigned long __al1925;
      unsigned long c1926 = 1;
      __al1925 = c1926;
      unsigned long t1927 = __n1910;
      unsigned long c1928 = 1;
      unsigned long b1929 = t1927 * c1928;
      unsigned long t1930 = __al1925;
      void* r1931 = operator_new_2(b1929, t1930);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
      char* cast1932 = (char*)r1931;
      __retval1912 = cast1932;
      char* t1933 = __retval1912;
      return t1933;
    }
  unsigned long t1934 = __n1910;
  unsigned long c1935 = 1;
  unsigned long b1936 = t1934 * c1935;
  void* r1937 = operator_new(b1936);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  char* cast1938 = (char*)r1937;
  __retval1912 = cast1938;
  char* t1939 = __retval1912;
  return t1939;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1940, unsigned long v1941) {
bb1942:
  struct std__allocator_char_* this1943;
  unsigned long __n1944;
  char* __retval1945;
  this1943 = v1940;
  __n1944 = v1941;
  struct std__allocator_char_* t1946 = this1943;
    _Bool r1947 = std____is_constant_evaluated();
    if (r1947) {
        unsigned long t1948 = __n1944;
        unsigned long c1949 = 1;
        unsigned long ovr1950;
        _Bool ovf1951 = __builtin_mul_overflow(t1948, c1949, &ovr1950);
        __n1944 = ovr1950;
        if (ovf1951) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            char* __cir_eh_ret = (char*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1952 = __n1944;
      void* r1953 = operator_new(t1952);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
      char* cast1954 = (char*)r1953;
      __retval1945 = cast1954;
      char* t1955 = __retval1945;
      return t1955;
    }
  struct std____new_allocator_char_* base1956 = (struct std____new_allocator_char_*)((char *)t1946 + 0);
  unsigned long t1957 = __n1944;
  void* c1958 = ((void*)0);
  char* r1959 = std____new_allocator_char___allocate(base1956, t1957, c1958);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __retval1945 = r1959;
  char* t1960 = __retval1945;
  return t1960;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1961, unsigned long v1962) {
bb1963:
  struct std__allocator_char_* __a1964;
  unsigned long __n1965;
  char* __retval1966;
  __a1964 = v1961;
  __n1965 = v1962;
  struct std__allocator_char_* t1967 = __a1964;
  unsigned long t1968 = __n1965;
  char* r1969 = std__allocator_char___allocate(t1967, t1968);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __retval1966 = r1969;
  char* t1970 = __retval1966;
  return t1970;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1971, unsigned long v1972) {
bb1973:
  struct std__allocator_char_* __a1974;
  unsigned long __n1975;
  char* __retval1976;
  char* __p1977;
  __a1974 = v1971;
  __n1975 = v1972;
  struct std__allocator_char_* t1978 = __a1974;
  unsigned long t1979 = __n1975;
  char* r1980 = std__allocator_traits_std__allocator_char_____allocate(t1978, t1979);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __p1977 = r1980;
  char* t1981 = __p1977;
  __retval1976 = t1981;
  char* t1982 = __retval1976;
  return t1982;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1983) {
bb1984:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1985;
  struct std__allocator_char_* __retval1986;
  this1985 = v1983;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1987 = this1985;
  struct std__allocator_char_* base1988 = (struct std__allocator_char_*)((char *)&(t1987->_M_dataplus) + 0);
  __retval1986 = base1988;
  struct std__allocator_char_* t1989 = __retval1986;
  return t1989;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1990, unsigned long* v1991, unsigned long v1992) {
bb1993:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1994;
  unsigned long* __capacity1995;
  unsigned long __old_capacity1996;
  char* __retval1997;
  this1994 = v1990;
  __capacity1995 = v1991;
  __old_capacity1996 = v1992;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1998 = this1994;
    unsigned long* t1999 = __capacity1995;
    unsigned long t2000 = *t1999;
    unsigned long r2001 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1998);
    _Bool c2002 = ((t2000 > r2001)) ? 1 : 0;
    if (c2002) {
      char* cast2003 = (char*)&(_str_49);
      std____throw_length_error(cast2003);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
    }
    unsigned long* t2004 = __capacity1995;
    unsigned long t2005 = *t2004;
    unsigned long t2006 = __old_capacity1996;
    _Bool c2007 = ((t2005 > t2006)) ? 1 : 0;
    _Bool ternary2008;
    if (c2007) {
      unsigned long* t2009 = __capacity1995;
      unsigned long t2010 = *t2009;
      unsigned long c2011 = 2;
      unsigned long t2012 = __old_capacity1996;
      unsigned long b2013 = c2011 * t2012;
      _Bool c2014 = ((t2010 < b2013)) ? 1 : 0;
      ternary2008 = (_Bool)c2014;
    } else {
      _Bool c2015 = 0;
      ternary2008 = (_Bool)c2015;
    }
    if (ternary2008) {
      unsigned long c2016 = 2;
      unsigned long t2017 = __old_capacity1996;
      unsigned long b2018 = c2016 * t2017;
      unsigned long* t2019 = __capacity1995;
      *t2019 = b2018;
        unsigned long* t2020 = __capacity1995;
        unsigned long t2021 = *t2020;
        unsigned long r2022 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1998);
        _Bool c2023 = ((t2021 > r2022)) ? 1 : 0;
        if (c2023) {
          unsigned long r2024 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1998);
          unsigned long* t2025 = __capacity1995;
          *t2025 = r2024;
        }
    }
  struct std__allocator_char_* r2026 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1998);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  unsigned long* t2027 = __capacity1995;
  unsigned long t2028 = *t2027;
  unsigned long c2029 = 1;
  unsigned long b2030 = t2028 + c2029;
  char* r2031 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r2026, b2030);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __retval1997 = r2031;
  char* t2032 = __retval1997;
  return t2032;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2033, unsigned long v2034) {
bb2035:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2036;
  unsigned long __capacity2037;
  this2036 = v2033;
  __capacity2037 = v2034;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2038 = this2036;
  unsigned long t2039 = __capacity2037;
  t2038->field2._M_allocated_capacity = t2039;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb2040:
  _Bool __retval2041;
    _Bool c2042 = 0;
    __retval2041 = c2042;
    _Bool t2043 = __retval2041;
    return t2043;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2044) {
bb2045:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2046;
  this2046 = v2044;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2047 = this2046;
    _Bool r2048 = std__is_constant_evaluated();
    if (r2048) {
        unsigned long __i2049;
        unsigned long c2050 = 0;
        __i2049 = c2050;
        while (1) {
          unsigned long t2052 = __i2049;
          unsigned long c2053 = 15;
          _Bool c2054 = ((t2052 <= c2053)) ? 1 : 0;
          if (!c2054) break;
          char c2055 = 0;
          unsigned long t2056 = __i2049;
          t2047->field2._M_local_buf[t2056] = c2055;
        for_step2051: ;
          unsigned long t2057 = __i2049;
          unsigned long u2058 = t2057 + 1;
          __i2049 = u2058;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v2059, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2060) {
bb2061:
  struct _Guard* this2062;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s2063;
  this2062 = v2059;
  __s2063 = v2060;
  struct _Guard* t2064 = this2062;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2065 = __s2063;
  t2064->_M_guarded = t2065;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v2066, char* v2067) {
bb2068:
  char* __location2069;
  char* __args2070;
  char* __retval2071;
  void* __loc2072;
  __location2069 = v2066;
  __args2070 = v2067;
  char* t2073 = __location2069;
  void* cast2074 = (void*)t2073;
  __loc2072 = cast2074;
    void* t2075 = __loc2072;
    char* cast2076 = (char*)t2075;
    char* t2077 = __args2070;
    char t2078 = *t2077;
    *cast2076 = t2078;
    __retval2071 = cast2076;
    char* t2079 = __retval2071;
    return t2079;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v2080, char* v2081) {
bb2082:
  char* __c12083;
  char* __c22084;
  __c12083 = v2080;
  __c22084 = v2081;
    _Bool r2085 = std____is_constant_evaluated();
    if (r2085) {
      char* t2086 = __c12083;
      char* t2087 = __c22084;
      char* r2088 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t2086, t2087);
    } else {
      char* t2089 = __c22084;
      char t2090 = *t2089;
      char* t2091 = __c12083;
      *t2091 = t2090;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v2092, char* v2093, unsigned long v2094) {
bb2095:
  char* __s12096;
  char* __s22097;
  unsigned long __n2098;
  char* __retval2099;
  __s12096 = v2092;
  __s22097 = v2093;
  __n2098 = v2094;
    unsigned long t2100 = __n2098;
    unsigned long c2101 = 0;
    _Bool c2102 = ((t2100 == c2101)) ? 1 : 0;
    if (c2102) {
      char* t2103 = __s12096;
      __retval2099 = t2103;
      char* t2104 = __retval2099;
      return t2104;
    }
    _Bool r2105 = std____is_constant_evaluated();
    if (r2105) {
        unsigned long __i2106;
        unsigned long c2107 = 0;
        __i2106 = c2107;
        while (1) {
          unsigned long t2109 = __i2106;
          unsigned long t2110 = __n2098;
          _Bool c2111 = ((t2109 < t2110)) ? 1 : 0;
          if (!c2111) break;
          char* t2112 = __s12096;
          unsigned long t2113 = __i2106;
          char* ptr2114 = &(t2112)[t2113];
          unsigned long t2115 = __i2106;
          char* t2116 = __s22097;
          char* ptr2117 = &(t2116)[t2115];
          char* r2118 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr2114, ptr2117);
        for_step2108: ;
          unsigned long t2119 = __i2106;
          unsigned long u2120 = t2119 + 1;
          __i2106 = u2120;
        }
      char* t2121 = __s12096;
      __retval2099 = t2121;
      char* t2122 = __retval2099;
      return t2122;
    }
  char* t2123 = __s12096;
  void* cast2124 = (void*)t2123;
  char* t2125 = __s22097;
  void* cast2126 = (void*)t2125;
  unsigned long t2127 = __n2098;
  unsigned long c2128 = 1;
  unsigned long b2129 = t2127 * c2128;
  void* r2130 = memcpy(cast2124, cast2126, b2129);
  char* t2131 = __s12096;
  __retval2099 = t2131;
  char* t2132 = __retval2099;
  return t2132;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v2133, char* v2134, unsigned long v2135) {
bb2136:
  char* __s12137;
  char* __s22138;
  unsigned long __n2139;
  char* __retval2140;
  __s12137 = v2133;
  __s22138 = v2134;
  __n2139 = v2135;
    unsigned long t2141 = __n2139;
    unsigned long c2142 = 0;
    _Bool c2143 = ((t2141 == c2142)) ? 1 : 0;
    if (c2143) {
      char* t2144 = __s12137;
      __retval2140 = t2144;
      char* t2145 = __retval2140;
      return t2145;
    }
    _Bool r2146 = std____is_constant_evaluated();
    if (r2146) {
      char* t2147 = __s12137;
      char* t2148 = __s22138;
      unsigned long t2149 = __n2139;
      char* r2150 = __gnu_cxx__char_traits_char___copy(t2147, t2148, t2149);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
      __retval2140 = r2150;
      char* t2151 = __retval2140;
      return t2151;
    }
  char* t2152 = __s12137;
  void* cast2153 = (void*)t2152;
  char* t2154 = __s22138;
  void* cast2155 = (void*)t2154;
  unsigned long t2156 = __n2139;
  void* r2157 = memcpy(cast2153, cast2155, t2156);
  char* cast2158 = (char*)r2157;
  __retval2140 = cast2158;
  char* t2159 = __retval2140;
  return t2159;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v2160, char* v2161, unsigned long v2162) {
bb2163:
  char* __d2164;
  char* __s2165;
  unsigned long __n2166;
  __d2164 = v2160;
  __s2165 = v2161;
  __n2166 = v2162;
    unsigned long t2167 = __n2166;
    unsigned long c2168 = 1;
    _Bool c2169 = ((t2167 == c2168)) ? 1 : 0;
    if (c2169) {
      char* t2170 = __d2164;
      char* t2171 = __s2165;
      std__char_traits_char___assign(t2170, t2171);
    } else {
      char* t2172 = __d2164;
      char* t2173 = __s2165;
      unsigned long t2174 = __n2166;
      char* r2175 = std__char_traits_char___copy(t2172, t2173, t2174);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v2176) {
bb2177:
  char* __it2178;
  char* __retval2179;
  __it2178 = v2176;
  char* t2180 = __it2178;
  __retval2179 = t2180;
  char* t2181 = __retval2179;
  return t2181;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v2182, char* v2183, char* v2184) {
bb2185:
  char* __p2186;
  char* __k12187;
  char* __k22188;
  __p2186 = v2182;
  __k12187 = v2183;
  __k22188 = v2184;
    char* t2189 = __p2186;
    char* t2190 = __k12187;
    char* r2191 = char_const__std____niter_base_char_const__(t2190);
    char* t2192 = __k22188;
    char* t2193 = __k12187;
    long diff2194 = t2192 - t2193;
    unsigned long cast2195 = (unsigned long)diff2194;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t2189, r2191, cast2195);
    if (__cir_exc_active) {
      return;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2196) {
bb2197:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2198;
  char* __retval2199;
  this2198 = v2196;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2200 = this2198;
  char* t2201 = t2200->_M_dataplus._M_p;
  __retval2199 = t2201;
  char* t2202 = __retval2199;
  return t2202;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2203, unsigned long v2204) {
bb2205:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2206;
  unsigned long __length2207;
  this2206 = v2203;
  __length2207 = v2204;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2208 = this2206;
  unsigned long t2209 = __length2207;
  t2208->_M_string_length = t2209;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2210, unsigned long v2211) {
bb2212:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2213;
  unsigned long __n2214;
  char ref_tmp02215;
  this2213 = v2210;
  __n2214 = v2211;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2216 = this2213;
  unsigned long t2217 = __n2214;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t2216, t2217);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t2218 = __n2214;
  char* r2219 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t2216);
  if (__cir_exc_active) {
    return;
  }
  char* ptr2220 = &(r2219)[t2218];
  char c2221 = 0;
  ref_tmp02215 = c2221;
  std__char_traits_char___assign(ptr2220, &ref_tmp02215);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v2222) {
bb2223:
  struct _Guard* this2224;
  this2224 = v2222;
  struct _Guard* t2225 = this2224;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2226 = t2225->_M_guarded;
    _Bool cast2227 = (_Bool)t2226;
    if (cast2227) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2228 = t2225->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t2228);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2229, char* v2230, char* v2231, struct std__forward_iterator_tag v2232) {
bb2233:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2234;
  char* __beg2235;
  char* __end2236;
  struct std__forward_iterator_tag unnamed2237;
  unsigned long __dnew2238;
  struct _Guard __guard2239;
  this2234 = v2229;
  __beg2235 = v2230;
  __end2236 = v2231;
  unnamed2237 = v2232;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2240 = this2234;
  char* t2241 = __beg2235;
  char* t2242 = __end2236;
  long r2243 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t2241, t2242);
  if (__cir_exc_active) {
    return;
  }
  unsigned long cast2244 = (unsigned long)r2243;
  __dnew2238 = cast2244;
    unsigned long t2245 = __dnew2238;
    unsigned long c2246 = 15;
    _Bool c2247 = ((t2245 > c2246)) ? 1 : 0;
    if (c2247) {
      unsigned long c2248 = 0;
      char* r2249 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t2240, &__dnew2238, c2248);
      if (__cir_exc_active) {
        return;
      }
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t2240, r2249);
      if (__cir_exc_active) {
        return;
      }
      unsigned long t2250 = __dnew2238;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t2240, t2250);
      if (__cir_exc_active) {
        return;
      }
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t2240);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard2239, t2240);
  if (__cir_exc_active) {
    return;
  }
    char* r2251 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t2240);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard2239);
      }
      return;
    }
    char* t2252 = __beg2235;
    char* t2253 = __end2236;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r2251, t2252, t2253);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard2239);
      }
      return;
    }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c2254 = ((void*)0);
    __guard2239._M_guarded = c2254;
    unsigned long t2255 = __dnew2238;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t2240, t2255);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard2239);
      }
      return;
    }
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard2239);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v2256) {
bb2257:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this2258;
  this2258 = v2256;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t2259 = this2258;
  {
    struct std__allocator_char_* base2260 = (struct std__allocator_char_*)((char *)t2259 + 0);
    std__allocator_char____allocator(base2260);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v2261, struct std____new_allocator_char_* v2262) {
bb2263:
  struct std____new_allocator_char_* this2264;
  struct std____new_allocator_char_* unnamed2265;
  this2264 = v2261;
  unnamed2265 = v2262;
  struct std____new_allocator_char_* t2266 = this2264;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v2267, struct std__allocator_char_* v2268) {
bb2269:
  struct std__allocator_char_* this2270;
  struct std__allocator_char_* __a2271;
  this2270 = v2267;
  __a2271 = v2268;
  struct std__allocator_char_* t2272 = this2270;
  struct std____new_allocator_char_* base2273 = (struct std____new_allocator_char_*)((char *)t2272 + 0);
  struct std__allocator_char_* t2274 = __a2271;
  struct std____new_allocator_char_* base2275 = (struct std____new_allocator_char_*)((char *)t2274 + 0);
  std____new_allocator_char_____new_allocator(base2273, base2275);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v2276) {
bb2277:
  char* __r2278;
  char* __retval2279;
  __r2278 = v2276;
  char* t2280 = __r2278;
  __retval2279 = t2280;
  char* t2281 = __retval2279;
  return t2281;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2282) {
bb2283:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2284;
  char* __retval2285;
  this2284 = v2282;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2286 = this2284;
  char* cast2287 = (char*)&(t2286->field2._M_local_buf);
  char* r2288 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast2287);
  __retval2285 = r2288;
  char* t2289 = __retval2285;
  return t2289;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2290) {
bb2291:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2292;
  _Bool __retval2293;
  this2292 = v2290;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2294 = this2292;
    char* r2295 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t2294);
    if (__cir_exc_active) {
      _Bool __cir_eh_ret = (_Bool)0;
      return __cir_eh_ret;
    }
    char* r2296 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t2294);
    if (__cir_exc_active) {
      _Bool __cir_eh_ret = (_Bool)0;
      return __cir_eh_ret;
    }
    _Bool c2297 = ((r2295 == r2296)) ? 1 : 0;
    if (c2297) {
        unsigned long t2298 = t2294->_M_string_length;
        unsigned long c2299 = 15;
        _Bool c2300 = ((t2298 > c2299)) ? 1 : 0;
        if (c2300) {
          __builtin_unreachable();
        }
      _Bool c2301 = 1;
      __retval2293 = c2301;
      _Bool t2302 = __retval2293;
      return t2302;
    }
  _Bool c2303 = 0;
  __retval2293 = c2303;
  _Bool t2304 = __retval2293;
  return t2304;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v2305, char* v2306, unsigned long v2307) {
bb2308:
  struct std____new_allocator_char_* this2309;
  char* __p2310;
  unsigned long __n2311;
  this2309 = v2305;
  __p2310 = v2306;
  __n2311 = v2307;
  struct std____new_allocator_char_* t2312 = this2309;
    unsigned long c2313 = 1;
    unsigned long c2314 = 16;
    _Bool c2315 = ((c2313 > c2314)) ? 1 : 0;
    if (c2315) {
      char* t2316 = __p2310;
      void* cast2317 = (void*)t2316;
      unsigned long t2318 = __n2311;
      unsigned long c2319 = 1;
      unsigned long b2320 = t2318 * c2319;
      unsigned long c2321 = 1;
      operator_delete_3(cast2317, b2320, c2321);
      return;
    }
  char* t2322 = __p2310;
  void* cast2323 = (void*)t2322;
  unsigned long t2324 = __n2311;
  unsigned long c2325 = 1;
  unsigned long b2326 = t2324 * c2325;
  operator_delete_2(cast2323, b2326);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v2327, char* v2328, unsigned long v2329) {
bb2330:
  struct std__allocator_char_* this2331;
  char* __p2332;
  unsigned long __n2333;
  this2331 = v2327;
  __p2332 = v2328;
  __n2333 = v2329;
  struct std__allocator_char_* t2334 = this2331;
    _Bool r2335 = std____is_constant_evaluated();
    if (r2335) {
      char* t2336 = __p2332;
      void* cast2337 = (void*)t2336;
      operator_delete(cast2337);
      return;
    }
  struct std____new_allocator_char_* base2338 = (struct std____new_allocator_char_*)((char *)t2334 + 0);
  char* t2339 = __p2332;
  unsigned long t2340 = __n2333;
  std____new_allocator_char___deallocate(base2338, t2339, t2340);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v2341, char* v2342, unsigned long v2343) {
bb2344:
  struct std__allocator_char_* __a2345;
  char* __p2346;
  unsigned long __n2347;
  __a2345 = v2341;
  __p2346 = v2342;
  __n2347 = v2343;
  struct std__allocator_char_* t2348 = __a2345;
  char* t2349 = __p2346;
  unsigned long t2350 = __n2347;
  std__allocator_char___deallocate(t2348, t2349, t2350);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2351, unsigned long v2352) {
bb2353:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2354;
  unsigned long __size2355;
  this2354 = v2351;
  __size2355 = v2352;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2356 = this2354;
  struct std__allocator_char_* r2357 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t2356);
  if (__cir_exc_active) {
    return;
  }
  char* r2358 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t2356);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t2359 = __size2355;
  unsigned long c2360 = 1;
  unsigned long b2361 = t2359 + c2360;
  std__allocator_traits_std__allocator_char_____deallocate(r2357, r2358, b2361);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2362) {
bb2363:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2364;
  this2364 = v2362;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2365 = this2364;
    _Bool r2366 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t2365);
    if (__cir_exc_active) {
      return;
    }
    _Bool u2367 = !r2366;
    if (u2367) {
      unsigned long t2368 = t2365->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t2365, t2368);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v2369, char* v2370, struct std__allocator_char_* v2371) {
bb2372:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this2373;
  char* __dat2374;
  struct std__allocator_char_* __a2375;
  this2373 = v2369;
  __dat2374 = v2370;
  __a2375 = v2371;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t2376 = this2373;
  struct std__allocator_char_* base2377 = (struct std__allocator_char_*)((char *)t2376 + 0);
  struct std__allocator_char_* t2378 = __a2375;
  std__allocator_char___allocator(base2377, t2378);
    char* t2379 = __dat2374;
    t2376->_M_p = t2379;
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2380, unsigned long v2381, unsigned long v2382) {
bb2383:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2384;
  unsigned long __pos2385;
  unsigned long __off2386;
  unsigned long __retval2387;
  _Bool __testoff2388;
  this2384 = v2380;
  __pos2385 = v2381;
  __off2386 = v2382;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2389 = this2384;
  unsigned long t2390 = __off2386;
  unsigned long r2391 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t2389);
  unsigned long t2392 = __pos2385;
  unsigned long b2393 = r2391 - t2392;
  _Bool c2394 = ((t2390 < b2393)) ? 1 : 0;
  __testoff2388 = c2394;
  _Bool t2395 = __testoff2388;
  unsigned long ternary2396;
  if (t2395) {
    unsigned long t2397 = __off2386;
    ternary2396 = (unsigned long)t2397;
  } else {
    unsigned long r2398 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t2389);
    unsigned long t2399 = __pos2385;
    unsigned long b2400 = r2398 - t2399;
    ternary2396 = (unsigned long)b2400;
  }
  __retval2387 = ternary2396;
  unsigned long t2401 = __retval2387;
  return t2401;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v2402) {
bb2403:
  struct std__basic_streambuf_char__std__char_traits_char__* this2404;
  this2404 = v2402;
  struct std__basic_streambuf_char__std__char_traits_char__* t2405 = this2404;
  {
    std__locale___locale(&t2405->_M_buf_locale);
  }
  return;
}

