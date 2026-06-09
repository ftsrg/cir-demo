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
char __const_main_query[1024];
char __const__Z11outputBooksRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6__price[50];
char __const__Z11outputBooksRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6__isbn[50];
char __const__Z11outputBooksRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6__year[50];
char __const__Z11outputBooksRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6__book[50];
int _ZNSt8ios_base7goodbitE_const __attribute__((aligned(4))) = 0;
int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base2inE_const __attribute__((aligned(4))) = 8;
char _str[1];
char _str_1[12] = "HTTP_COOKIE";
char _str_2[15] = "CONTENT_LENGTH";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_3[5] = "add=";
char _str_4[6] = "&isbn";
char _str_5[6] = "isbn=";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
char _str_6[31] = "Friday, 14-MAY-10 16:00:00 GMT";
char _str_7[6] = "CART=";
char _str_8[2] = ",";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_9[18] = "set-cookie: CART=";
char _str_10[11] = "; expires=";
char _str_11[9] = "; path=\n";
char _str_12[26] = "Content-type: text/html\n\n";
char _str_13[24] = "<?xml version = \"1.0\"?>";
char _str_14[46] = "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 ";
char _str_15[47] = "Transitional//EN\" \"http://www.w3.org/TR/xhtml1";
char _str_16[31] = "/DTD/xhtml1-transitional.dtd\">";
char _str_17[46] = "<html xmlns = \"http://www.w3.org/1999/xhtml\">";
char _str_18[42] = "<head><title>Shopping Cart</title></head>";
char _str_19[15] = "<body><center>";
char _str_20[35] = "<p>Here is your current order:</p>";
char _str_21[16] = "</body></html>\n";
char _str_22[12] = "catalog.txt";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cerr __attribute__((aligned(8)));
char _str_23[25] = "Could not open database.";
char _str_24[39] = "<a href=\"/cgi-bin/logout.cgi\">Sign Out";
char _str_25[13] = "</a><br><br>";
char _str_26[36] = "<table border = 1 cellpadding = 7 >";
char _str_27[5] = "<tr>";
char _str_28[20] = "<form method=\"post\"";
char _str_29[32] = "action=\"/cgi-bin/viewcart.cgi\">";
char _str_30[5] = "<td>";
char _str_31[6] = "</td>";
char _str_32[13] = "</form></tr>";
char _str_33[50] = "<a href=\"/cgi-bin/shop.cgi\">Back to book list</a>";
char _str_34[50] = "basic_string: construction from null is not valid";
char _str_35[24] = "basic_string::_M_create";
char _str_36[25] = "basic_string::_M_replace";
char _str_37[21] = "basic_string::substr";
char _str_38[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_39[27] = "basic_string::basic_string";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
char _str_40[21] = "basic_string::append";
extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
extern char* getenv(char* p0);
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
extern int atoi(char* p0);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__read(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1, long p2);
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
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1, unsigned long p2, unsigned long p3);
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
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_copy_assign();
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_always_equal();
_Bool std__operator__(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void void_std____alloc_on_copy_std__allocator_char___(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* p0);
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std__allocator_char_* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(char* p0, unsigned long p1, char* p2, unsigned long p3, struct std__allocator_char_* p4);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char____2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__2(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
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
_Bool std__basic_ios_char__std__char_traits_char_____operator_bool___const(struct std__basic_ios_char__std__char_traits_char__* p0);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__getline_2(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1, long p2, char p3);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_istream_char__std__char_traits_char__* std__istream__getline(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char____2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream_2(struct std__basic_ifstream_char__std__char_traits_char__* p0, void** p1);
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* p0);
void outputBooks(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
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
        char* cast20 = (char*)&(_str_34);
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
  char* cast393 = (char*)&(_str_36);
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
      char* cast749 = (char*)&(_str_38);
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
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v755, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v756, unsigned long v757, unsigned long v758) {
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
    char* cast773 = (char*)&(_str_39);
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
  char* cast794 = (char*)&(_str_37);
  unsigned long r795 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t792, t793, cast794);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  unsigned long t796 = __n790;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_3(&__retval791, t792, r795, t796);
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

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_copy_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_copy_assign() {
bb967:
  _Bool __retval968;
  _Bool t969 = _ZNSt17integral_constantIbLb0EE5valueE;
  __retval968 = t969;
  _Bool t970 = __retval968;
  return t970;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE15_S_always_equalEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_always_equal() {
bb971:
  _Bool __retval972;
  _Bool t973 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval972 = t973;
  _Bool t974 = __retval972;
  return t974;
}

// function: _ZSteqRKSaIcES1_
_Bool std__operator__(struct std__allocator_char_* v975, struct std__allocator_char_* v976) {
bb977:
  struct std__allocator_char_* unnamed978;
  struct std__allocator_char_* unnamed979;
  _Bool __retval980;
  unnamed978 = v975;
  unnamed979 = v976;
  _Bool c981 = 1;
  __retval980 = c981;
  _Bool t982 = __retval980;
  return t982;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v983, struct std__allocator_char_* v984) {
bb985:
  struct std__allocator_char_* this986;
  struct std__allocator_char_* __a987;
  this986 = v983;
  __a987 = v984;
  struct std__allocator_char_* t988 = this986;
  struct std____new_allocator_char_* base989 = (struct std____new_allocator_char_*)((char *)t988 + 0);
  struct std__allocator_char_* t990 = __a987;
  struct std____new_allocator_char_* base991 = (struct std____new_allocator_char_*)((char *)t990 + 0);
  std____new_allocator_char_____new_allocator(base989, base991);
  return;
}

// function: _ZSt15__alloc_on_copyISaIcEEvRT_RKS1_
void void_std____alloc_on_copy_std__allocator_char___(struct std__allocator_char_* v992, struct std__allocator_char_* v993) {
bb994:
  struct std__allocator_char_* __one995;
  struct std__allocator_char_* __two996;
  __one995 = v992;
  __two996 = v993;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignERKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v997, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v998) {
bb999:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1000;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1001;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1002;
  this1000 = v997;
  __str1001 = v998;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1003 = this1000;
    _Bool r1004 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_copy_assign();
    if (__cir_exc_active) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
      return __cir_eh_ret;
    }
    if (r1004) {
        _Bool r1005 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_always_equal();
        if (__cir_exc_active) {
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
          return __cir_eh_ret;
        }
        _Bool u1006 = !r1005;
        _Bool ternary1007;
        if (u1006) {
          _Bool r1008 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1003);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          _Bool u1009 = !r1008;
          ternary1007 = (_Bool)u1009;
        } else {
          _Bool c1010 = 0;
          ternary1007 = (_Bool)c1010;
        }
        _Bool ternary1011;
        if (ternary1007) {
          struct std__allocator_char_* r1012 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1003);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1013 = __str1001;
          struct std__allocator_char_* r1014 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1013);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          _Bool r1015 = std__operator__(r1012, r1014);
          _Bool u1016 = !r1015;
          ternary1011 = (_Bool)u1016;
        } else {
          _Bool c1017 = 0;
          ternary1011 = (_Bool)c1017;
        }
        if (ternary1011) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1018 = __str1001;
            unsigned long r1019 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1018);
            unsigned long c1020 = 15;
            _Bool c1021 = ((r1019 <= c1020)) ? 1 : 0;
            if (c1021) {
              unsigned long t1022 = t1003->field2._M_allocated_capacity;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1003, t1022);
              char* r1023 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t1003);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1003, r1023);
              if (__cir_exc_active) {
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
                return __cir_eh_ret;
              }
              unsigned long c1024 = 0;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1003, c1024);
              if (__cir_exc_active) {
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
                return __cir_eh_ret;
              }
            } else {
              unsigned long __len1025;
              struct std__allocator_char_ __alloc1026;
              char* __ptr1027;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1028 = __str1001;
              unsigned long r1029 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1028);
              __len1025 = r1029;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1030 = __str1001;
              struct std__allocator_char_* r1031 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1030);
              if (__cir_exc_active) {
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
                return __cir_eh_ret;
              }
              std__allocator_char___allocator(&__alloc1026, r1031);
              unsigned long t1032 = __len1025;
              unsigned long c1033 = 1;
              unsigned long b1034 = t1032 + c1033;
              char* r1035 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(&__alloc1026, b1034);
              if (__cir_exc_active) {
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
                return __cir_eh_ret;
              }
              __ptr1027 = r1035;
              unsigned long t1036 = t1003->field2._M_allocated_capacity;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1003, t1036);
              char* t1037 = __ptr1027;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1003, t1037);
              if (__cir_exc_active) {
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
                return __cir_eh_ret;
              }
              unsigned long t1038 = __len1025;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1003, t1038);
              if (__cir_exc_active) {
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
                return __cir_eh_ret;
              }
              unsigned long t1039 = __len1025;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1003, t1039);
              if (__cir_exc_active) {
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
                return __cir_eh_ret;
              }
            }
        }
      struct std__allocator_char_* r1040 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1003);
      if (__cir_exc_active) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
        return __cir_eh_ret;
      }
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1041 = __str1001;
      struct std__allocator_char_* r1042 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1041);
      if (__cir_exc_active) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
        return __cir_eh_ret;
      }
      void_std____alloc_on_copy_std__allocator_char___(r1040, r1042);
      if (__cir_exc_active) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1043 = __str1001;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t1003, t1043);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
    return __cir_eh_ret;
  }
  __retval1002 = t1003;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1044 = __retval1002;
  return t1044;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSERKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1045, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1046) {
bb1047:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1048;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1049;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1050;
  this1048 = v1045;
  __str1049 = v1046;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1051 = this1048;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1052 = __str1049;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1053 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign_2(t1051, t1052);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
    return __cir_eh_ret;
  }
  __retval1050 = r1053;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1054 = __retval1050;
  return t1054;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1055, char* v1056, unsigned long v1057) {
bb1058:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1059;
  char* __s1060;
  unsigned long __n1061;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1062;
  unsigned long __len1063;
  this1059 = v1055;
  __s1060 = v1056;
  __n1061 = v1057;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1064 = this1059;
  unsigned long t1065 = __n1061;
  unsigned long r1066 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1064);
  unsigned long b1067 = t1065 + r1066;
  __len1063 = b1067;
    unsigned long t1068 = __len1063;
    unsigned long r1069 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t1064);
    _Bool c1070 = ((t1068 <= r1069)) ? 1 : 0;
    if (c1070) {
        unsigned long t1071 = __n1061;
        _Bool cast1072 = (_Bool)t1071;
        if (cast1072) {
          char* r1073 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1064);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
          unsigned long r1074 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1064);
          char* ptr1075 = &(r1073)[r1074];
          char* t1076 = __s1060;
          unsigned long t1077 = __n1061;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr1075, t1076, t1077);
          if (__cir_exc_active) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
            return __cir_eh_ret;
          }
        }
    } else {
      unsigned long r1078 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1064);
      unsigned long c1079 = 0;
      char* t1080 = __s1060;
      unsigned long t1081 = __n1061;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t1064, r1078, c1079, t1080, t1081);
      if (__cir_exc_active) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
        return __cir_eh_ret;
      }
    }
  unsigned long t1082 = __len1063;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1064, t1082);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
    return __cir_eh_ret;
  }
  __retval1062 = t1064;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1083 = __retval1062;
  return t1083;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1084, char* v1085, unsigned long v1086) {
bb1087:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1088;
  char* __s1089;
  unsigned long __n1090;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1091;
  this1088 = v1084;
  __s1089 = v1085;
  __n1090 = v1086;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1092 = this1088;
  unsigned long c1093 = 0;
  unsigned long t1094 = __n1090;
  char* cast1095 = (char*)&(_str_40);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t1092, c1093, t1094, cast1095);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
    return __cir_eh_ret;
  }
  char* t1096 = __s1089;
  unsigned long t1097 = __n1090;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1098 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(t1092, t1096, t1097);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
    return __cir_eh_ret;
  }
  __retval1091 = r1098;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1099 = __retval1091;
  return t1099;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendERKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1100, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1101) {
bb1102:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1103;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1104;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1105;
  this1103 = v1100;
  __str1104 = v1101;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1106 = this1103;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1107 = __str1104;
  char* r1108 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1107);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
    return __cir_eh_ret;
  }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1109 = __str1104;
  unsigned long r1110 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1109);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1111 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(t1106, r1108, r1110);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __cir_eh_ret = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)0;
    return __cir_eh_ret;
  }
  __retval1105 = r1111;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1112 = __retval1105;
  return t1112;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EOS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1113, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1114) {
bb1115:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1116;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1117;
  this1116 = v1113;
  __str1117 = v1114;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1118 = this1116;
  char* r1119 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t1118);
  if (__cir_exc_active) {
    return;
  }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1120 = __str1117;
  struct std__allocator_char_* r1121 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1120);
  if (__cir_exc_active) {
    return;
  }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t1118->_M_dataplus, r1119, r1121);
  if (__cir_exc_active) {
    return;
  }
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1122 = __str1117;
      _Bool r1123 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1122);
      if (__cir_exc_active) {
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1118->_M_dataplus);
        }
        return;
      }
      if (r1123) {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1118);
        char* cast1124 = (char*)&(t1118->field2._M_local_buf);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1125 = __str1117;
        char* cast1126 = (char*)&(t1125->field2._M_local_buf);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1127 = __str1117;
        unsigned long r1128 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t1127);
        unsigned long c1129 = 1;
        unsigned long b1130 = r1128 + c1129;
        char* r1131 = std__char_traits_char___copy(cast1124, cast1126, b1130);
        if (__cir_exc_active) {
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1118->_M_dataplus);
          }
          return;
        }
      } else {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1132 = __str1117;
        char* r1133 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1132);
        if (__cir_exc_active) {
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1118->_M_dataplus);
          }
          return;
        }
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1118, r1133);
        if (__cir_exc_active) {
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1118->_M_dataplus);
          }
          return;
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1134 = __str1117;
        unsigned long t1135 = t1134->field2._M_allocated_capacity;
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1118, t1135);
        if (__cir_exc_active) {
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1118->_M_dataplus);
          }
          return;
        }
      }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1136 = __str1117;
    unsigned long r1137 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t1136);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1118, r1137);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1118->_M_dataplus);
      }
      return;
    }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1138 = __str1117;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1139 = __str1117;
    char* r1140 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t1139);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1138, r1140);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1118->_M_dataplus);
      }
      return;
    }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1141 = __str1117;
    unsigned long c1142 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1141, c1142);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1118->_M_dataplus);
      }
      return;
    }
  return;
}

// function: _ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEOS8_RKS8_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1143, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1144) {
bb1145:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs1146;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __rhs1147;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval1148;
  __lhs1146 = v1143;
  __rhs1147 = v1144;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1149 = __lhs1146;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1150 = __rhs1147;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1151 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append_2(t1149, t1150);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&__retval1148, r1151);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1152 = __retval1148;
  return t1152;
}

// function: _ZNSt16allocator_traitsISaIcEE37select_on_container_copy_constructionERKS0_
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* v1153) {
bb1154:
  struct std__allocator_char_* __rhs1155;
  struct std__allocator_char_ __retval1156;
  __rhs1155 = v1153;
  struct std__allocator_char_* t1157 = __rhs1155;
  std__allocator_char___allocator(&__retval1156, t1157);
  struct std__allocator_char_ t1158 = __retval1156;
  return t1158;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE17_S_select_on_copyERKS1_
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* v1159) {
bb1160:
  struct std__allocator_char_* __a1161;
  struct std__allocator_char_ __retval1162;
  __a1161 = v1159;
  struct std__allocator_char_* t1163 = __a1161;
  struct std__allocator_char_ r1164 = std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(t1163);
  if (__cir_exc_active) {
    struct std__allocator_char_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1162 = r1164;
  struct std__allocator_char_ t1165 = __retval1162;
  return t1165;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1166, struct std__allocator_char_* v1167) {
bb1168:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1169;
  struct std__allocator_char_* __a1170;
  this1169 = v1166;
  __a1170 = v1167;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1171 = this1169;
  char* r1172 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t1171);
  if (__cir_exc_active) {
    return;
  }
  struct std__allocator_char_* t1173 = __a1170;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t1171->_M_dataplus, r1172, t1173);
  if (__cir_exc_active) {
    return;
  }
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1171);
    unsigned long c1174 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1171, c1174);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1171->_M_dataplus);
      }
      return;
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7reserveEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1175, unsigned long v1176) {
bb1177:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1178;
  unsigned long __res1179;
  unsigned long __capacity1180;
  char* __tmp1181;
  this1178 = v1175;
  __res1179 = v1176;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1182 = this1178;
  unsigned long r1183 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t1182);
  __capacity1180 = r1183;
    unsigned long t1184 = __res1179;
    unsigned long t1185 = __capacity1180;
    _Bool c1186 = ((t1184 <= t1185)) ? 1 : 0;
    if (c1186) {
      return;
    }
  unsigned long t1187 = __capacity1180;
  char* r1188 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1182, &__res1179, t1187);
  if (__cir_exc_active) {
    return;
  }
  __tmp1181 = r1188;
  char* t1189 = __tmp1181;
  char* r1190 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1182);
  if (__cir_exc_active) {
    return;
  }
  unsigned long r1191 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t1182);
  unsigned long c1192 = 1;
  unsigned long b1193 = r1191 + c1192;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1189, r1190, b1193);
  if (__cir_exc_active) {
    return;
  }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1182);
  if (__cir_exc_active) {
    return;
  }
  char* t1194 = __tmp1181;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1182, t1194);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t1195 = __res1179;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1182, t1195);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt12__str_concatINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEET_PKNS6_10value_typeENS6_9size_typeES9_SA_RKNS6_14allocator_typeE
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(char* v1196, unsigned long v1197, char* v1198, unsigned long v1199, struct std__allocator_char_* v1200) {
bb1201:
  char* __lhs1202;
  unsigned long __lhs_len1203;
  char* __rhs1204;
  unsigned long __rhs_len1205;
  struct std__allocator_char_* __a1206;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval1207;
  _Bool nrvo1208;
  struct std__allocator_char_ ref_tmp01209;
  __lhs1202 = v1196;
  __lhs_len1203 = v1197;
  __rhs1204 = v1198;
  __rhs_len1205 = v1199;
  __a1206 = v1200;
  _Bool c1210 = 0;
  nrvo1208 = c1210;
  struct std__allocator_char_* t1211 = __a1206;
  struct std__allocator_char_ r1212 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(t1211);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp01209 = r1212;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_2(&__retval1207, &ref_tmp01209);
  {
    std__allocator_char____allocator(&ref_tmp01209);
  }
    unsigned long t1213 = __lhs_len1203;
    unsigned long t1214 = __rhs_len1205;
    unsigned long b1215 = t1213 + t1214;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(&__retval1207, b1215);
    if (__cir_exc_active) {
      {
        _Bool t1216 = nrvo1208;
        _Bool u1217 = !t1216;
        if (u1217) {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&__retval1207);
        }
      }
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    char* t1218 = __lhs1202;
    unsigned long t1219 = __lhs_len1203;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1220 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(&__retval1207, t1218, t1219);
    if (__cir_exc_active) {
      {
        _Bool t1221 = nrvo1208;
        _Bool u1222 = !t1221;
        if (u1222) {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&__retval1207);
        }
      }
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    char* t1223 = __rhs1204;
    unsigned long t1224 = __rhs_len1205;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1225 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(&__retval1207, t1223, t1224);
    if (__cir_exc_active) {
      {
        _Bool t1226 = nrvo1208;
        _Bool u1227 = !t1226;
        if (u1227) {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&__retval1207);
        }
      }
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool c1228 = 1;
    nrvo1208 = c1228;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1229 = __retval1207;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ret_val1230 = t1229;
    {
      _Bool t1231 = nrvo1208;
      _Bool u1232 = !t1231;
      if (u1232) {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&__retval1207);
      }
    }
    return ret_val1230;
  abort();
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5c_strEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1233) {
bb1234:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1235;
  char* __retval1236;
  this1235 = v1233;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1237 = this1235;
  char* r1238 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1237);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __retval1236 = r1238;
  char* t1239 = __retval1236;
  return t1239;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13get_allocatorEv
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1240) {
bb1241:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1242;
  struct std__allocator_char_ __retval1243;
  this1242 = v1240;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1244 = this1242;
  struct std__allocator_char_* r1245 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1244);
  if (__cir_exc_active) {
    struct std__allocator_char_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std__allocator_char___allocator(&__retval1243, r1245);
  struct std__allocator_char_ t1246 = __retval1243;
  return t1246;
}

// function: _ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_PKS5_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char____2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1247, char* v1248) {
bb1249:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs1250;
  char* __rhs1251;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval1252;
  struct std__allocator_char_ ref_tmp01253;
  __lhs1250 = v1247;
  __rhs1251 = v1248;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1254 = __lhs1250;
  char* r1255 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(t1254);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1256 = __lhs1250;
  unsigned long r1257 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1256);
  char* t1258 = __rhs1251;
  char* t1259 = __rhs1251;
  unsigned long r1260 = std__char_traits_char___length(t1259);
  if (__cir_exc_active) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1261 = __lhs1250;
  struct std__allocator_char_ r1262 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(t1261);
  ref_tmp01253 = r1262;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1263 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(r1255, r1257, t1258, r1260, &ref_tmp01253);
    if (__cir_exc_active) {
      {
        std__allocator_char____allocator(&ref_tmp01253);
      }
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    __retval1252 = r1263;
  {
    std__allocator_char____allocator(&ref_tmp01253);
  }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1264 = __retval1252;
  return t1264;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v1265, int v1266) {
bb1267:
  int __a1268;
  int __b1269;
  int __retval1270;
  __a1268 = v1265;
  __b1269 = v1266;
  int t1271 = __a1268;
  int t1272 = __b1269;
  int b1273 = t1271 | t1272;
  __retval1270 = b1273;
  int t1274 = __retval1270;
  return t1274;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v1275) {
bb1276:
  struct std__basic_ios_char__std__char_traits_char__* this1277;
  int __retval1278;
  this1277 = v1275;
  struct std__basic_ios_char__std__char_traits_char__* t1279 = this1277;
  struct std__ios_base* base1280 = (struct std__ios_base*)((char *)t1279 + 0);
  int t1281 = base1280->_M_streambuf_state;
  __retval1278 = t1281;
  int t1282 = __retval1278;
  return t1282;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v1283, int v1284) {
bb1285:
  struct std__basic_ios_char__std__char_traits_char__* this1286;
  int __state1287;
  this1286 = v1283;
  __state1287 = v1284;
  struct std__basic_ios_char__std__char_traits_char__* t1288 = this1286;
  int r1289 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t1288);
  if (__cir_exc_active) {
    return;
  }
  int t1290 = __state1287;
  int r1291 = std__operator__2(r1289, t1290);
  std__basic_ios_char__std__char_traits_char_____clear(t1288, r1291);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1292, char* v1293) {
bb1294:
  struct std__basic_ostream_char__std__char_traits_char__* __out1295;
  char* __s1296;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1297;
  __out1295 = v1292;
  __s1296 = v1293;
    char* t1298 = __s1296;
    _Bool cast1299 = (_Bool)t1298;
    _Bool u1300 = !cast1299;
    if (u1300) {
      struct std__basic_ostream_char__std__char_traits_char__* t1301 = __out1295;
      void** v1302 = (void**)t1301;
      void* v1303 = *((void**)v1302);
      unsigned char* cast1304 = (unsigned char*)v1303;
      long c1305 = -24;
      unsigned char* ptr1306 = &(cast1304)[c1305];
      long* cast1307 = (long*)ptr1306;
      long t1308 = *cast1307;
      unsigned char* cast1309 = (unsigned char*)t1301;
      unsigned char* ptr1310 = &(cast1309)[t1308];
      struct std__basic_ostream_char__std__char_traits_char__* cast1311 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1310;
      struct std__basic_ios_char__std__char_traits_char__* cast1312 = (struct std__basic_ios_char__std__char_traits_char__*)cast1311;
      int t1313 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast1312, t1313);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t1314 = __out1295;
      char* t1315 = __s1296;
      char* t1316 = __s1296;
      unsigned long r1317 = std__char_traits_char___length(t1316);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast1318 = (long)r1317;
      struct std__basic_ostream_char__std__char_traits_char__* r1319 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1314, t1315, cast1318);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t1320 = __out1295;
  __retval1297 = t1320;
  struct std__basic_ostream_char__std__char_traits_char__* t1321 = __retval1297;
  return t1321;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v1322, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1323) {
bb1324:
  struct std__basic_ostream_char__std__char_traits_char__* __os1325;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1326;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1327;
  __os1325 = v1322;
  __str1326 = v1323;
  struct std__basic_ostream_char__std__char_traits_char__* t1328 = __os1325;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1329 = __str1326;
  char* r1330 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t1329);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1331 = __str1326;
  unsigned long r1332 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1331);
  long cast1333 = (long)r1332;
  struct std__basic_ostream_char__std__char_traits_char__* r1334 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1328, r1330, cast1333);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval1327 = r1334;
  struct std__basic_ostream_char__std__char_traits_char__* t1335 = __retval1327;
  return t1335;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEEC2Ev
void std__basic_ios_char__std__char_traits_char_____basic_ios(struct std__basic_ios_char__std__char_traits_char__* v1336) {
bb1337:
  struct std__basic_ios_char__std__char_traits_char__* this1338;
  this1338 = v1336;
  struct std__basic_ios_char__std__char_traits_char__* t1339 = this1338;
  struct std__ios_base* base1340 = (struct std__ios_base*)((char *)t1339 + 0);
  std__ios_base__ios_base(base1340);
    void* v1341 = (void*)&_ZTVSt9basic_iosIcSt11char_traitsIcEE[2];
    void** v1342 = (void**)t1339;
    *(void**)(v1342) = (void*)v1341;
    struct std__basic_ostream_char__std__char_traits_char__* c1343 = ((void*)0);
    t1339->_M_tie = c1343;
    char c1344 = 0;
    t1339->_M_fill = c1344;
    _Bool c1345 = 0;
    t1339->_M_fill_init = c1345;
    struct std__basic_streambuf_char__std__char_traits_char__* c1346 = ((void*)0);
    t1339->_M_streambuf = c1346;
    struct std__ctype_char_* c1347 = ((void*)0);
    t1339->_M_ctype = c1347;
    struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* c1348 = ((void*)0);
    t1339->_M_num_put = c1348;
    struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* c1349 = ((void*)0);
    t1339->_M_num_get = c1349;
  return;
}

// function: _ZNSiC2Ev
void std__basic_istream_char__std__char_traits_char_____basic_istream(struct std__basic_istream_char__std__char_traits_char__* v1350, void** v1351) {
bb1352:
  struct std__basic_istream_char__std__char_traits_char__* this1353;
  void** vtt1354;
  this1353 = v1350;
  vtt1354 = v1351;
  struct std__basic_istream_char__std__char_traits_char__* t1355 = this1353;
  void** t1356 = vtt1354;
  static void *vtt_slot1357 = 0;
  void** vtt1358 = (void**)&vtt_slot1357;
  void** cast1359 = (void**)vtt1358;
  void* t1360 = *cast1359;
  void** v1361 = (void**)t1355;
  *(void**)(v1361) = (void*)t1360;
  static void *vtt_slot1362 = 0;
  void** vtt1363 = (void**)&vtt_slot1362;
  void** cast1364 = (void**)vtt1363;
  void* t1365 = *cast1364;
  void** v1366 = (void**)t1355;
  void* v1367 = *((void**)v1366);
  unsigned char* cast1368 = (unsigned char*)v1367;
  long c1369 = -24;
  unsigned char* ptr1370 = &(cast1368)[c1369];
  long* cast1371 = (long*)ptr1370;
  long t1372 = *cast1371;
  unsigned char* cast1373 = (unsigned char*)t1355;
  unsigned char* ptr1374 = &(cast1373)[t1372];
  struct std__basic_istream_char__std__char_traits_char__* cast1375 = (struct std__basic_istream_char__std__char_traits_char__*)ptr1374;
  void** v1376 = (void**)cast1375;
  *(void**)(v1376) = (void*)t1365;
  long c1377 = 0;
  t1355->_M_gcount = c1377;
  void** v1378 = (void**)t1355;
  void* v1379 = *((void**)v1378);
  unsigned char* cast1380 = (unsigned char*)v1379;
  long c1381 = -24;
  unsigned char* ptr1382 = &(cast1380)[c1381];
  long* cast1383 = (long*)ptr1382;
  long t1384 = *cast1383;
  unsigned char* cast1385 = (unsigned char*)t1355;
  unsigned char* ptr1386 = &(cast1385)[t1384];
  struct std__basic_istream_char__std__char_traits_char__* cast1387 = (struct std__basic_istream_char__std__char_traits_char__*)ptr1386;
  struct std__basic_ios_char__std__char_traits_char__* cast1388 = (struct std__basic_ios_char__std__char_traits_char__*)cast1387;
  struct std__basic_streambuf_char__std__char_traits_char__* c1389 = ((void*)0);
  std__basic_ios_char__std__char_traits_char_____init(cast1388, c1389);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZStorSt13_Ios_OpenmodeS_
int std__operator__3(int v1390, int v1391) {
bb1392:
  int __a1393;
  int __b1394;
  int __retval1395;
  __a1393 = v1390;
  __b1394 = v1391;
  int t1396 = __a1393;
  int t1397 = __b1394;
  int b1398 = t1396 | t1397;
  __retval1395 = b1398;
  int t1399 = __retval1395;
  return t1399;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode
void std__basic_ifstream_char__std__char_traits_char_____open(struct std__basic_ifstream_char__std__char_traits_char__* v1400, char* v1401, int v1402) {
bb1403:
  struct std__basic_ifstream_char__std__char_traits_char__* this1404;
  char* __s1405;
  int __mode1406;
  this1404 = v1400;
  __s1405 = v1401;
  __mode1406 = v1402;
  struct std__basic_ifstream_char__std__char_traits_char__* t1407 = this1404;
    char* t1408 = __s1405;
    int t1409 = __mode1406;
    int t1410 = _ZNSt8ios_base2inE_const;
    int r1411 = std__operator__3(t1409, t1410);
    struct std__basic_filebuf_char__std__char_traits_char__* r1412 = std__basic_filebuf_char__std__char_traits_char_____open(&t1407->_M_filebuf, t1408, r1411);
    if (__cir_exc_active) {
      return;
    }
    _Bool cast1413 = (_Bool)r1412;
    _Bool u1414 = !cast1413;
    if (u1414) {
      void** v1415 = (void**)t1407;
      void* v1416 = *((void**)v1415);
      unsigned char* cast1417 = (unsigned char*)v1416;
      long c1418 = -24;
      unsigned char* ptr1419 = &(cast1417)[c1418];
      long* cast1420 = (long*)ptr1419;
      long t1421 = *cast1420;
      unsigned char* cast1422 = (unsigned char*)t1407;
      unsigned char* ptr1423 = &(cast1422)[t1421];
      struct std__basic_ifstream_char__std__char_traits_char__* cast1424 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr1423;
      struct std__basic_ios_char__std__char_traits_char__* cast1425 = (struct std__basic_ios_char__std__char_traits_char__*)cast1424;
      int t1426 = _ZNSt8ios_base7failbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast1425, t1426);
      if (__cir_exc_active) {
        return;
      }
    } else {
      void** v1427 = (void**)t1407;
      void* v1428 = *((void**)v1427);
      unsigned char* cast1429 = (unsigned char*)v1428;
      long c1430 = -24;
      unsigned char* ptr1431 = &(cast1429)[c1430];
      long* cast1432 = (long*)ptr1431;
      long t1433 = *cast1432;
      unsigned char* cast1434 = (unsigned char*)t1407;
      unsigned char* ptr1435 = &(cast1434)[t1433];
      struct std__basic_ifstream_char__std__char_traits_char__* cast1436 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr1435;
      struct std__basic_ios_char__std__char_traits_char__* cast1437 = (struct std__basic_ios_char__std__char_traits_char__*)cast1436;
      int t1438 = _ZNSt8ios_base7goodbitE_const;
      std__basic_ios_char__std__char_traits_char_____clear(cast1437, t1438);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt13basic_filebufIcSt11char_traitsIcEED2Ev
void std__basic_filebuf_char__std__char_traits_char______basic_filebuf(struct std__basic_filebuf_char__std__char_traits_char__* v1439) {
bb1440:
  struct std__basic_filebuf_char__std__char_traits_char__* this1441;
  this1441 = v1439;
  struct std__basic_filebuf_char__std__char_traits_char__* t1442 = this1441;
          struct std__basic_filebuf_char__std__char_traits_char__* r1444 = std__basic_filebuf_char__std__char_traits_char_____close(t1442);
          if (__cir_exc_active) {
            {
              std____basic_file_char______basic_file(&t1442->_M_file);
            }
            {
              struct std__basic_streambuf_char__std__char_traits_char__* base1445 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t1442 + 0);
              std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base1445);
            }
            goto cir_try_dispatch1443;
          }
        cir_try_dispatch1443: ;
        if (__cir_exc_active) {
        {
          int ca_tok1446 = 0;
          void* ca_exn1447 = (void*)__cir_exc_ptr;
          __cir_exc_active = 0;
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
        }
        }
    {
      std____basic_file_char______basic_file(&t1442->_M_file);
    }
  {
    struct std__basic_streambuf_char__std__char_traits_char__* base1448 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)t1442 + 0);
    std__basic_streambuf_char__std__char_traits_char______basic_streambuf(base1448);
  }
  return;
}

// function: _ZNSiD2Ev
void std__basic_istream_char__std__char_traits_char______basic_istream(struct std__basic_istream_char__std__char_traits_char__* v1449, void** v1450) {
bb1451:
  struct std__basic_istream_char__std__char_traits_char__* this1452;
  void** vtt1453;
  this1452 = v1449;
  vtt1453 = v1450;
  struct std__basic_istream_char__std__char_traits_char__* t1454 = this1452;
  void** t1455 = vtt1453;
  long c1456 = 0;
  t1454->_M_gcount = c1456;
  return;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEED2Ev
void std__basic_ios_char__std__char_traits_char______basic_ios(struct std__basic_ios_char__std__char_traits_char__* v1457) {
bb1458:
  struct std__basic_ios_char__std__char_traits_char__* this1459;
  this1459 = v1457;
  struct std__basic_ios_char__std__char_traits_char__* t1460 = this1459;
  {
    struct std__ios_base* base1461 = (struct std__ios_base*)((char *)t1460 + 0);
    std__ios_base___ios_base(base1461);
  }
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode
void std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* v1462, char* v1463, int v1464) {
bb1465:
  struct std__basic_ifstream_char__std__char_traits_char__* this1466;
  char* __s1467;
  int __mode1468;
  this1466 = v1462;
  __s1467 = v1463;
  __mode1468 = v1464;
  struct std__basic_ifstream_char__std__char_traits_char__* t1469 = this1466;
  struct std__basic_ios_char__std__char_traits_char__* base1470 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1469 + 256);
  std__basic_ios_char__std__char_traits_char_____basic_ios(base1470);
  if (__cir_exc_active) {
    return;
  }
    struct std__basic_istream_char__std__char_traits_char__* base1471 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t1469 + 0);
    static void *vtt_slot1472 = 0;
    void** vtt1473 = (void**)&vtt_slot1472;
    std__basic_istream_char__std__char_traits_char_____basic_istream(base1471, vtt1473);
    if (__cir_exc_active) {
      {
        struct std__basic_ios_char__std__char_traits_char__* base1474 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1469 + 256);
        std__basic_ios_char__std__char_traits_char______basic_ios(base1474);
      }
      return;
    }
      void* v1475 = (void*)&_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[3];
      void** v1476 = (void**)t1469;
      *(void**)(v1476) = (void*)v1475;
      void* v1477 = (void*)&_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[3];
      struct std__basic_ios_char__std__char_traits_char__* base1478 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1469 + 256);
      void** v1479 = (void**)base1478;
      *(void**)(v1479) = (void*)v1477;
      std__basic_filebuf_char__std__char_traits_char_____basic_filebuf(&t1469->_M_filebuf);
      if (__cir_exc_active) {
        {
          struct std__basic_istream_char__std__char_traits_char__* base1480 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t1469 + 0);
          static void *vtt_slot1481 = 0;
          void** vtt1482 = (void**)&vtt_slot1481;
          std__basic_istream_char__std__char_traits_char______basic_istream(base1480, vtt1482);
        }
        {
          struct std__basic_ios_char__std__char_traits_char__* base1483 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1469 + 256);
          std__basic_ios_char__std__char_traits_char______basic_ios(base1483);
        }
        return;
      }
        void** v1484 = (void**)t1469;
        void* v1485 = *((void**)v1484);
        unsigned char* cast1486 = (unsigned char*)v1485;
        long c1487 = -24;
        unsigned char* ptr1488 = &(cast1486)[c1487];
        long* cast1489 = (long*)ptr1488;
        long t1490 = *cast1489;
        unsigned char* cast1491 = (unsigned char*)t1469;
        unsigned char* ptr1492 = &(cast1491)[t1490];
        struct std__basic_ifstream_char__std__char_traits_char__* cast1493 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr1492;
        struct std__basic_ios_char__std__char_traits_char__* cast1494 = (struct std__basic_ios_char__std__char_traits_char__*)cast1493;
        struct std__basic_streambuf_char__std__char_traits_char__* base1495 = (struct std__basic_streambuf_char__std__char_traits_char__*)((char *)&(t1469->_M_filebuf) + 0);
        std__basic_ios_char__std__char_traits_char_____init(cast1494, base1495);
        if (__cir_exc_active) {
          {
            std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t1469->_M_filebuf);
          }
          {
            struct std__basic_istream_char__std__char_traits_char__* base1496 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t1469 + 0);
            static void *vtt_slot1497 = 0;
            void** vtt1498 = (void**)&vtt_slot1497;
            std__basic_istream_char__std__char_traits_char______basic_istream(base1496, vtt1498);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base1499 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1469 + 256);
            std__basic_ios_char__std__char_traits_char______basic_ios(base1499);
          }
          return;
        }
        char* t1500 = __s1467;
        int t1501 = __mode1468;
        std__basic_ifstream_char__std__char_traits_char_____open(t1469, t1500, t1501);
        if (__cir_exc_active) {
          {
            std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t1469->_M_filebuf);
          }
          {
            struct std__basic_istream_char__std__char_traits_char__* base1502 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t1469 + 0);
            static void *vtt_slot1503 = 0;
            void** vtt1504 = (void**)&vtt_slot1503;
            std__basic_istream_char__std__char_traits_char______basic_istream(base1502, vtt1504);
          }
          {
            struct std__basic_ios_char__std__char_traits_char__* base1505 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1469 + 256);
            std__basic_ios_char__std__char_traits_char______basic_ios(base1505);
          }
          return;
        }
  return;
}

// function: _ZStanSt12_Ios_IostateS_
int std__operator_(int v1506, int v1507) {
bb1508:
  int __a1509;
  int __b1510;
  int __retval1511;
  __a1509 = v1506;
  __b1510 = v1507;
  int t1512 = __a1509;
  int t1513 = __b1510;
  int b1514 = t1512 & t1513;
  __retval1511 = b1514;
  int t1515 = __retval1511;
  return t1515;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE4failEv
_Bool std__basic_ios_char__std__char_traits_char_____fail___const(struct std__basic_ios_char__std__char_traits_char__* v1516) {
bb1517:
  struct std__basic_ios_char__std__char_traits_char__* this1518;
  _Bool __retval1519;
  this1518 = v1516;
  struct std__basic_ios_char__std__char_traits_char__* t1520 = this1518;
  int r1521 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t1520);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  int t1522 = _ZNSt8ios_base6badbitE_const;
  int t1523 = _ZNSt8ios_base7failbitE_const;
  int r1524 = std__operator__2(t1522, t1523);
  int r1525 = std__operator_(r1521, r1524);
  int c1526 = 0;
  _Bool c1527 = ((r1525 != c1526)) ? 1 : 0;
  __retval1519 = c1527;
  _Bool t1528 = __retval1519;
  return t1528;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEEntEv
_Bool std__basic_ios_char__std__char_traits_char_____operator____const(struct std__basic_ios_char__std__char_traits_char__* v1529) {
bb1530:
  struct std__basic_ios_char__std__char_traits_char__* this1531;
  _Bool __retval1532;
  this1531 = v1529;
  struct std__basic_ios_char__std__char_traits_char__* t1533 = this1531;
  _Bool r1534 = std__basic_ios_char__std__char_traits_char_____fail___const(t1533);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  __retval1532 = r1534;
  _Bool t1535 = __retval1532;
  return t1535;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEEcvbEv
_Bool std__basic_ios_char__std__char_traits_char_____operator_bool___const(struct std__basic_ios_char__std__char_traits_char__* v1536) {
bb1537:
  struct std__basic_ios_char__std__char_traits_char__* this1538;
  _Bool __retval1539;
  this1538 = v1536;
  struct std__basic_ios_char__std__char_traits_char__* t1540 = this1538;
  _Bool r1541 = std__basic_ios_char__std__char_traits_char_____fail___const(t1540);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  _Bool u1542 = !r1541;
  __retval1539 = u1542;
  _Bool t1543 = __retval1539;
  return t1543;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1544) {
bb1545:
  struct std__ctype_char_* __f1546;
  struct std__ctype_char_* __retval1547;
  __f1546 = v1544;
    struct std__ctype_char_* t1548 = __f1546;
    _Bool cast1549 = (_Bool)t1548;
    _Bool u1550 = !cast1549;
    if (u1550) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t1551 = __f1546;
  __retval1547 = t1551;
  struct std__ctype_char_* t1552 = __retval1547;
  return t1552;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1553, char v1554) {
bb1555:
  struct std__ctype_char_* this1556;
  char __c1557;
  char __retval1558;
  this1556 = v1553;
  __c1557 = v1554;
  struct std__ctype_char_* t1559 = this1556;
    char t1560 = t1559->_M_widen_ok;
    _Bool cast1561 = (_Bool)t1560;
    if (cast1561) {
      char t1562 = __c1557;
      unsigned char cast1563 = (unsigned char)t1562;
      unsigned long cast1564 = (unsigned long)cast1563;
      char t1565 = t1559->_M_widen[cast1564];
      __retval1558 = t1565;
      char t1566 = __retval1558;
      return t1566;
    }
  std__ctype_char____M_widen_init___const(t1559);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t1567 = __c1557;
  void** v1568 = (void**)t1559;
  void* v1569 = *((void**)v1568);
  char vcall1572 = (char)__VERIFIER_virtual_call_char_char(t1559, 6, t1567);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval1558 = vcall1572;
  char t1573 = __retval1558;
  return t1573;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1574, char v1575) {
bb1576:
  struct std__basic_ios_char__std__char_traits_char__* this1577;
  char __c1578;
  char __retval1579;
  this1577 = v1574;
  __c1578 = v1575;
  struct std__basic_ios_char__std__char_traits_char__* t1580 = this1577;
  struct std__ctype_char_* t1581 = t1580->_M_ctype;
  struct std__ctype_char_* r1582 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1581);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t1583 = __c1578;
  char r1584 = std__ctype_char___widen_char__const(r1582, t1583);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval1579 = r1584;
  char t1585 = __retval1579;
  return t1585;
}

// function: _ZNSi7getlineEPcl
struct std__basic_istream_char__std__char_traits_char__* std__istream__getline(struct std__basic_istream_char__std__char_traits_char__* v1586, char* v1587, long v1588) {
bb1589:
  struct std__basic_istream_char__std__char_traits_char__* this1590;
  char* __s1591;
  long __n1592;
  struct std__basic_istream_char__std__char_traits_char__* __retval1593;
  this1590 = v1586;
  __s1591 = v1587;
  __n1592 = v1588;
  struct std__basic_istream_char__std__char_traits_char__* t1594 = this1590;
  char* t1595 = __s1591;
  long t1596 = __n1592;
  void** v1597 = (void**)t1594;
  void* v1598 = *((void**)v1597);
  unsigned char* cast1599 = (unsigned char*)v1598;
  long c1600 = -24;
  unsigned char* ptr1601 = &(cast1599)[c1600];
  long* cast1602 = (long*)ptr1601;
  long t1603 = *cast1602;
  unsigned char* cast1604 = (unsigned char*)t1594;
  unsigned char* ptr1605 = &(cast1604)[t1603];
  struct std__basic_istream_char__std__char_traits_char__* cast1606 = (struct std__basic_istream_char__std__char_traits_char__*)ptr1605;
  struct std__basic_ios_char__std__char_traits_char__* cast1607 = (struct std__basic_ios_char__std__char_traits_char__*)cast1606;
  char c1608 = 10;
  char r1609 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1607, c1608);
  if (__cir_exc_active) {
    struct std__basic_istream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_istream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_istream_char__std__char_traits_char__* r1610 = std__istream__getline_2(t1594, t1595, t1596, r1609);
  if (__cir_exc_active) {
    struct std__basic_istream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_istream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval1593 = r1610;
  struct std__basic_istream_char__std__char_traits_char__* t1611 = __retval1593;
  return t1611;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EESA_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char____2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1612, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1613) {
bb1614:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs1615;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __rhs1616;
  _Bool __retval1617;
  __lhs1615 = v1612;
  __rhs1616 = v1613;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1618 = __lhs1615;
  unsigned long r1619 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1618);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1620 = __rhs1616;
  unsigned long r1621 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1620);
  _Bool c1622 = ((r1619 == r1621)) ? 1 : 0;
  _Bool ternary1623;
  if (c1622) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1624 = __lhs1615;
    char* r1625 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t1624);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1626 = __rhs1616;
    char* r1627 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t1626);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1628 = __lhs1615;
    unsigned long r1629 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1628);
    int r1630 = std__char_traits_char___compare(r1625, r1627, r1629);
    if (__cir_exc_active) {
      _Bool __cir_eh_ret = (_Bool)0;
      return __cir_eh_ret;
    }
    _Bool cast1631 = (_Bool)r1630;
    _Bool u1632 = !cast1631;
    ternary1623 = (_Bool)u1632;
  } else {
    _Bool c1633 = 0;
    ternary1623 = (_Bool)c1633;
  }
  __retval1617 = ternary1623;
  _Bool t1634 = __retval1617;
  return t1634;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEED2Ev
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream_2(struct std__basic_ifstream_char__std__char_traits_char__* v1635, void** v1636) {
bb1637:
  struct std__basic_ifstream_char__std__char_traits_char__* this1638;
  void** vtt1639;
  this1638 = v1635;
  vtt1639 = v1636;
  struct std__basic_ifstream_char__std__char_traits_char__* t1640 = this1638;
  void** t1641 = vtt1639;
    {
      std__basic_filebuf_char__std__char_traits_char______basic_filebuf(&t1640->_M_filebuf);
    }
  {
    struct std__basic_istream_char__std__char_traits_char__* base1642 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)t1640 + 0);
    static void *vtt_slot1643 = 0;
    void** vtt1644 = (void**)&vtt_slot1643;
    std__basic_istream_char__std__char_traits_char______basic_istream(base1642, vtt1644);
  }
  return;
}

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream(struct std__basic_ifstream_char__std__char_traits_char__* v1645) {
bb1646:
  struct std__basic_ifstream_char__std__char_traits_char__* this1647;
  this1647 = v1645;
  struct std__basic_ifstream_char__std__char_traits_char__* t1648 = this1647;
    static void *vtt_slot1649 = 0;
    void** vtt1650 = (void**)&vtt_slot1649;
    std__basic_ifstream_char__std__char_traits_char______basic_ifstream_2(t1648, vtt1650);
  {
    struct std__basic_ios_char__std__char_traits_char__* base1651 = (struct std__basic_ios_char__std__char_traits_char__*)((char *)t1648 + 256);
    std__basic_ios_char__std__char_traits_char______basic_ios(base1651);
  }
  return;
}

// function: _Z11outputBooksRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6_
void outputBooks(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1652, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1653) {
bb1654:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* cookieRef1655;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* isbnRef1656;
  char book1657[50];
  char year1658[50];
  char isbn1659[50];
  char price1660[50];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ bookString1661;
  struct std__allocator_char_ ref_tmp01662;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ yearString1663;
  struct std__allocator_char_ ref_tmp11664;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ isbnString1665;
  struct std__allocator_char_ ref_tmp21666;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ priceString1667;
  struct std__allocator_char_ ref_tmp31668;
  struct std__basic_ifstream_char__std__char_traits_char__ userData1669;
  cookieRef1655 = v1652;
  isbnRef1656 = v1653;
  // array copy
  __builtin_memcpy(book1657, __const__Z11outputBooksRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6__book, (unsigned long)50 * sizeof(__const__Z11outputBooksRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6__book[0]));
  // array copy
  __builtin_memcpy(year1658, __const__Z11outputBooksRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6__year, (unsigned long)50 * sizeof(__const__Z11outputBooksRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6__year[0]));
  // array copy
  __builtin_memcpy(isbn1659, __const__Z11outputBooksRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6__isbn, (unsigned long)50 * sizeof(__const__Z11outputBooksRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6__isbn[0]));
  // array copy
  __builtin_memcpy(price1660, __const__Z11outputBooksRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6__price, (unsigned long)50 * sizeof(__const__Z11outputBooksRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6__price[0]));
  char* cast1670 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp01662);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&bookString1661, cast1670, &ref_tmp01662);
    if (__cir_exc_active) {
      {
        std__allocator_char____allocator(&ref_tmp01662);
      }
      return;
    }
  {
    std__allocator_char____allocator(&ref_tmp01662);
  }
    char* cast1671 = (char*)&(_str);
    std__allocator_char___allocator_2(&ref_tmp11664);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&yearString1663, cast1671, &ref_tmp11664);
      if (__cir_exc_active) {
        {
          std__allocator_char____allocator(&ref_tmp11664);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
        }
        return;
      }
    {
      std__allocator_char____allocator(&ref_tmp11664);
    }
      char* cast1672 = (char*)&(_str);
      std__allocator_char___allocator_2(&ref_tmp21666);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&isbnString1665, cast1672, &ref_tmp21666);
        if (__cir_exc_active) {
          {
            std__allocator_char____allocator(&ref_tmp21666);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
          }
          return;
        }
      {
        std__allocator_char____allocator(&ref_tmp21666);
      }
        char* cast1673 = (char*)&(_str);
        std__allocator_char___allocator_2(&ref_tmp31668);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&priceString1667, cast1673, &ref_tmp31668);
          if (__cir_exc_active) {
            {
              std__allocator_char____allocator(&ref_tmp31668);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString1665);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
            }
            return;
          }
        {
          std__allocator_char____allocator(&ref_tmp31668);
        }
          char* cast1674 = (char*)&(_str_22);
          int t1675 = _ZNSt8ios_base2inE_const;
          std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(&userData1669, cast1674, t1675);
          if (__cir_exc_active) {
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString1667);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString1665);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
            }
            return;
          }
              void** v1676 = (void**)&(userData1669);
              void* v1677 = *((void**)v1676);
              unsigned char* cast1678 = (unsigned char*)v1677;
              long c1679 = -24;
              unsigned char* ptr1680 = &(cast1678)[c1679];
              long* cast1681 = (long*)ptr1680;
              long t1682 = *cast1681;
              unsigned char* cast1683 = (unsigned char*)&(userData1669);
              unsigned char* ptr1684 = &(cast1683)[t1682];
              struct std__basic_ifstream_char__std__char_traits_char__* cast1685 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr1684;
              struct std__basic_ios_char__std__char_traits_char__* cast1686 = (struct std__basic_ios_char__std__char_traits_char__*)cast1685;
              _Bool r1687 = std__basic_ios_char__std__char_traits_char_____operator____const(cast1686);
              if (__cir_exc_active) {
                {
                  std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1669);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString1667);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString1665);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
                }
                return;
              }
              if (r1687) {
                char* cast1688 = (char*)&(_str_23);
                struct std__basic_ostream_char__std__char_traits_char__* r1689 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cerr, cast1688);
                if (__cir_exc_active) {
                  {
                    std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1669);
                  }
                  {
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString1667);
                  }
                  {
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString1665);
                  }
                  {
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
                  }
                  {
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
                  }
                  return;
                }
                int c1690 = 1;
                exit(c1690);
              }
            char* cast1691 = (char*)&(_str_24);
            struct std__basic_ostream_char__std__char_traits_char__* r1692 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1691);
            if (__cir_exc_active) {
              {
                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1669);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString1667);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString1665);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
              }
              return;
            }
            char* cast1693 = (char*)&(_str_25);
            struct std__basic_ostream_char__std__char_traits_char__* r1694 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1693);
            if (__cir_exc_active) {
              {
                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1669);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString1667);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString1665);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
              }
              return;
            }
            char* cast1695 = (char*)&(_str_26);
            struct std__basic_ostream_char__std__char_traits_char__* r1696 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1695);
            if (__cir_exc_active) {
              {
                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1669);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString1667);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString1665);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
              }
              return;
            }
              while (1) {
                void** v1697 = (void**)&(userData1669);
                void* v1698 = *((void**)v1697);
                unsigned char* cast1699 = (unsigned char*)v1698;
                long c1700 = -24;
                unsigned char* ptr1701 = &(cast1699)[c1700];
                long* cast1702 = (long*)ptr1701;
                long t1703 = *cast1702;
                unsigned char* cast1704 = (unsigned char*)&(userData1669);
                unsigned char* ptr1705 = &(cast1704)[t1703];
                struct std__basic_ifstream_char__std__char_traits_char__* cast1706 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr1705;
                struct std__basic_ios_char__std__char_traits_char__* cast1707 = (struct std__basic_ios_char__std__char_traits_char__*)cast1706;
                _Bool r1708 = std__basic_ios_char__std__char_traits_char_____operator_bool___const(cast1707);
                if (__cir_exc_active) {
                  {
                    std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1669);
                  }
                  {
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString1667);
                  }
                  {
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString1665);
                  }
                  {
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
                  }
                  {
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
                  }
                  return;
                }
                if (!r1708) break;
                  int match1709;
                  struct std__basic_istream_char__std__char_traits_char__* base1710 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(userData1669) + 0);
                  char* cast1711 = (char*)&(book1657);
                  long c1712 = 50;
                  struct std__basic_istream_char__std__char_traits_char__* r1713 = std__istream__getline(base1710, cast1711, c1712);
                  if (__cir_exc_active) {
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1669);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString1667);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString1665);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
                    }
                    return;
                  }
                  char* cast1714 = (char*)&(book1657);
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1715 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(&bookString1661, cast1714);
                  if (__cir_exc_active) {
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1669);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString1667);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString1665);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
                    }
                    return;
                  }
                  struct std__basic_istream_char__std__char_traits_char__* base1716 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(userData1669) + 0);
                  char* cast1717 = (char*)&(year1658);
                  long c1718 = 50;
                  struct std__basic_istream_char__std__char_traits_char__* r1719 = std__istream__getline(base1716, cast1717, c1718);
                  if (__cir_exc_active) {
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1669);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString1667);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString1665);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
                    }
                    return;
                  }
                  char* cast1720 = (char*)&(year1658);
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1721 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(&yearString1663, cast1720);
                  if (__cir_exc_active) {
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1669);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString1667);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString1665);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
                    }
                    return;
                  }
                  struct std__basic_istream_char__std__char_traits_char__* base1722 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(userData1669) + 0);
                  char* cast1723 = (char*)&(isbn1659);
                  long c1724 = 50;
                  struct std__basic_istream_char__std__char_traits_char__* r1725 = std__istream__getline(base1722, cast1723, c1724);
                  if (__cir_exc_active) {
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1669);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString1667);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString1665);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
                    }
                    return;
                  }
                  char* cast1726 = (char*)&(isbn1659);
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1727 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(&isbnString1665, cast1726);
                  if (__cir_exc_active) {
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1669);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString1667);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString1665);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
                    }
                    return;
                  }
                  struct std__basic_istream_char__std__char_traits_char__* base1728 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(userData1669) + 0);
                  char* cast1729 = (char*)&(price1660);
                  long c1730 = 50;
                  struct std__basic_istream_char__std__char_traits_char__* r1731 = std__istream__getline(base1728, cast1729, c1730);
                  if (__cir_exc_active) {
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1669);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString1667);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString1665);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
                    }
                    return;
                  }
                  char* cast1732 = (char*)&(price1660);
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1733 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(&priceString1667, cast1732);
                  if (__cir_exc_active) {
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1669);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString1667);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString1665);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
                    }
                    return;
                  }
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1734 = cookieRef1655;
                  char* cast1735 = (char*)&(isbn1659);
                  unsigned long c1736 = 0;
                  unsigned long r1737 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(t1734, cast1735, c1736);
                  int cast1738 = (int)r1737;
                  match1709 = cast1738;
                    int t1739 = match1709;
                    int c1740 = 0;
                    _Bool c1741 = ((t1739 > c1740)) ? 1 : 0;
                    _Bool ternary1742;
                    if (c1741) {
                      _Bool c1743 = 1;
                      ternary1742 = (_Bool)c1743;
                    } else {
                      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1744 = isbnRef1656;
                      _Bool r1745 = bool_std__operator___char__std__char_traits_char___std__allocator_char____2(t1744, &isbnString1665);
                      ternary1742 = (_Bool)r1745;
                    }
                    if (ternary1742) {
                      char* cast1746 = (char*)&(_str_27);
                      struct std__basic_ostream_char__std__char_traits_char__* r1747 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1746);
                      if (__cir_exc_active) {
                        {
                          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1669);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString1667);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString1665);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
                        }
                        return;
                      }
                      char* cast1748 = (char*)&(_str_28);
                      struct std__basic_ostream_char__std__char_traits_char__* r1749 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1747, cast1748);
                      if (__cir_exc_active) {
                        {
                          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1669);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString1667);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString1665);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
                        }
                        return;
                      }
                      char* cast1750 = (char*)&(_str_29);
                      struct std__basic_ostream_char__std__char_traits_char__* r1751 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1749, cast1750);
                      if (__cir_exc_active) {
                        {
                          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1669);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString1667);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString1665);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
                        }
                        return;
                      }
                      char* cast1752 = (char*)&(_str_30);
                      struct std__basic_ostream_char__std__char_traits_char__* r1753 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1751, cast1752);
                      if (__cir_exc_active) {
                        {
                          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1669);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString1667);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString1665);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
                        }
                        return;
                      }
                      struct std__basic_ostream_char__std__char_traits_char__* r1754 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1753, &bookString1661);
                      if (__cir_exc_active) {
                        {
                          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1669);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString1667);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString1665);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
                        }
                        return;
                      }
                      char* cast1755 = (char*)&(_str_31);
                      struct std__basic_ostream_char__std__char_traits_char__* r1756 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1754, cast1755);
                      if (__cir_exc_active) {
                        {
                          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1669);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString1667);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString1665);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
                        }
                        return;
                      }
                      char* cast1757 = (char*)&(_str_30);
                      struct std__basic_ostream_char__std__char_traits_char__* r1758 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1756, cast1757);
                      if (__cir_exc_active) {
                        {
                          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1669);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString1667);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString1665);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
                        }
                        return;
                      }
                      struct std__basic_ostream_char__std__char_traits_char__* r1759 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1758, &yearString1663);
                      if (__cir_exc_active) {
                        {
                          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1669);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString1667);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString1665);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
                        }
                        return;
                      }
                      char* cast1760 = (char*)&(_str_31);
                      struct std__basic_ostream_char__std__char_traits_char__* r1761 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1759, cast1760);
                      if (__cir_exc_active) {
                        {
                          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1669);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString1667);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString1665);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
                        }
                        return;
                      }
                      char* cast1762 = (char*)&(_str_30);
                      struct std__basic_ostream_char__std__char_traits_char__* r1763 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1761, cast1762);
                      if (__cir_exc_active) {
                        {
                          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1669);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString1667);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString1665);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
                        }
                        return;
                      }
                      struct std__basic_ostream_char__std__char_traits_char__* r1764 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1763, &isbnString1665);
                      if (__cir_exc_active) {
                        {
                          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1669);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString1667);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString1665);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
                        }
                        return;
                      }
                      char* cast1765 = (char*)&(_str_31);
                      struct std__basic_ostream_char__std__char_traits_char__* r1766 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1764, cast1765);
                      if (__cir_exc_active) {
                        {
                          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1669);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString1667);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString1665);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
                        }
                        return;
                      }
                      char* cast1767 = (char*)&(_str_30);
                      struct std__basic_ostream_char__std__char_traits_char__* r1768 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1766, cast1767);
                      if (__cir_exc_active) {
                        {
                          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1669);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString1667);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString1665);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
                        }
                        return;
                      }
                      struct std__basic_ostream_char__std__char_traits_char__* r1769 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1768, &priceString1667);
                      if (__cir_exc_active) {
                        {
                          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1669);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString1667);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString1665);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
                        }
                        return;
                      }
                      char* cast1770 = (char*)&(_str_31);
                      struct std__basic_ostream_char__std__char_traits_char__* r1771 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1769, cast1770);
                      if (__cir_exc_active) {
                        {
                          std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1669);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString1667);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString1665);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
                        }
                        {
                          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
                        }
                        return;
                      }
                    }
                  char* cast1772 = (char*)&(_str_32);
                  struct std__basic_ostream_char__std__char_traits_char__* r1773 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1772);
                  if (__cir_exc_active) {
                    {
                      std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1669);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString1667);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString1665);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
                    }
                    return;
                  }
              }
            char* cast1774 = (char*)&(_str_33);
            struct std__basic_ostream_char__std__char_traits_char__* r1775 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1774);
            if (__cir_exc_active) {
              {
                std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1669);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString1667);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString1665);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
              }
              return;
            }
          {
            std__basic_ifstream_char__std__char_traits_char______basic_ifstream(&userData1669);
          }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&priceString1667);
        }
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnString1665);
      }
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&yearString1663);
    }
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&bookString1661);
  }
  return;
}

// function: main
int main() {
bb1776:
  int __retval1777;
  char query1778[1024];
  char* cartData1779;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ dataString1780;
  struct std__allocator_char_ ref_tmp01781;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ cookieString1782;
  struct std__allocator_char_ ref_tmp11783;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ isbnEntered1784;
  struct std__allocator_char_ ref_tmp21785;
  int contentLength1786;
  int c1787 = 0;
  __retval1777 = c1787;
  // array copy
  __builtin_memcpy(query1778, __const_main_query, (unsigned long)1024 * sizeof(__const_main_query[0]));
  char* cast1788 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp01781);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&dataString1780, cast1788, &ref_tmp01781);
    if (__cir_exc_active) {
      {
        std__allocator_char____allocator(&ref_tmp01781);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  {
    std__allocator_char____allocator(&ref_tmp01781);
  }
    char* cast1789 = (char*)&(_str);
    std__allocator_char___allocator_2(&ref_tmp11783);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&cookieString1782, cast1789, &ref_tmp11783);
      if (__cir_exc_active) {
        {
          std__allocator_char____allocator(&ref_tmp11783);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1780);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
    {
      std__allocator_char____allocator(&ref_tmp11783);
    }
      char* cast1790 = (char*)&(_str);
      std__allocator_char___allocator_2(&ref_tmp21785);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&isbnEntered1784, cast1790, &ref_tmp21785);
        if (__cir_exc_active) {
          {
            std__allocator_char____allocator(&ref_tmp21785);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&cookieString1782);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1780);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      {
        std__allocator_char____allocator(&ref_tmp21785);
      }
        int c1791 = 0;
        contentLength1786 = c1791;
          char* cast1792 = (char*)&(_str_1);
          char* r1793 = getenv(cast1792);
          _Bool cast1794 = (_Bool)r1793;
          if (cast1794) {
            char* cast1795 = (char*)&(_str_1);
            char* r1796 = getenv(cast1795);
            cartData1779 = r1796;
            char* t1797 = cartData1779;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1798 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(&cookieString1782, t1797);
            if (__cir_exc_active) {
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnEntered1784);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&cookieString1782);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1780);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
          }
          char* cast1799 = (char*)&(_str_2);
          char* r1800 = getenv(cast1799);
          _Bool cast1801 = (_Bool)r1800;
          if (cast1801) {
            int addLocation1802;
            int endAdd1803;
            int isbnLocation1804;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp31805;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup1806;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ expires1807;
            struct std__allocator_char_ ref_tmp41808;
            int cartLocation1809;
            char* cast1810 = (char*)&(_str_2);
            char* r1811 = getenv(cast1810);
            int r1812 = atoi(r1811);
            contentLength1786 = r1812;
            char* cast1813 = (char*)&(query1778);
            int t1814 = contentLength1786;
            long cast1815 = (long)t1814;
            struct std__basic_istream_char__std__char_traits_char__* r1816 = std__istream__read(&_ZSt3cin, cast1813, cast1815);
            if (__cir_exc_active) {
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnEntered1784);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&cookieString1782);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1780);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
            char* cast1817 = (char*)&(query1778);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1818 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(&dataString1780, cast1817);
            if (__cir_exc_active) {
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnEntered1784);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&cookieString1782);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1780);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
            char* cast1819 = (char*)&(_str_3);
            unsigned long c1820 = 0;
            unsigned long r1821 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1780, cast1819, c1820);
            unsigned long c1822 = 4;
            unsigned long b1823 = r1821 + c1822;
            int cast1824 = (int)b1823;
            addLocation1802 = cast1824;
            char* cast1825 = (char*)&(_str_4);
            unsigned long c1826 = 0;
            unsigned long r1827 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1780, cast1825, c1826);
            int cast1828 = (int)r1827;
            endAdd1803 = cast1828;
            char* cast1829 = (char*)&(_str_5);
            unsigned long c1830 = 0;
            unsigned long r1831 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&dataString1780, cast1829, c1830);
            unsigned long c1832 = 5;
            unsigned long b1833 = r1831 + c1832;
            int cast1834 = (int)b1833;
            isbnLocation1804 = cast1834;
            int t1835 = isbnLocation1804;
            unsigned long cast1836 = (unsigned long)t1835;
            unsigned long t1837 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1838 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&dataString1780, cast1836, t1837);
            if (__cir_exc_active) {
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnEntered1784);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&cookieString1782);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1780);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
            ref_tmp31805 = r1838;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1839 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&isbnEntered1784, &ref_tmp31805);
              tmp_exprcleanup1806 = r1839;
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp31805);
            }
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1840 = tmp_exprcleanup1806;
            char* cast1841 = (char*)&(_str_6);
            std__allocator_char___allocator_2(&ref_tmp41808);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&expires1807, cast1841, &ref_tmp41808);
              if (__cir_exc_active) {
                {
                  std__allocator_char____allocator(&ref_tmp41808);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnEntered1784);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&cookieString1782);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1780);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
            {
              std__allocator_char____allocator(&ref_tmp41808);
            }
              char* cast1842 = (char*)&(_str_7);
              unsigned long c1843 = 0;
              unsigned long r1844 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&cookieString1782, cast1842, c1843);
              unsigned long c1845 = 5;
              unsigned long b1846 = r1844 + c1845;
              int cast1847 = (int)b1846;
              cartLocation1809 = cast1847;
                int t1848 = cartLocation1809;
                int c1849 = 0;
                _Bool c1850 = ((t1848 > c1849)) ? 1 : 0;
                if (c1850) {
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp51851;
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup1852;
                  int t1853 = cartLocation1809;
                  unsigned long cast1854 = (unsigned long)t1853;
                  unsigned long t1855 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1856 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&cookieString1782, cast1854, t1855);
                  if (__cir_exc_active) {
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&expires1807);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnEntered1784);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&cookieString1782);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1780);
                    }
                    int __cir_eh_ret = (int)0;
                    return __cir_eh_ret;
                  }
                  ref_tmp51851 = r1856;
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1857 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&cookieString1782, &ref_tmp51851);
                    tmp_exprcleanup1852 = r1857;
                  {
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp51851);
                  }
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1858 = tmp_exprcleanup1852;
                }
                char* cast1859 = (char*)&(_str);
                _Bool r1860 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&cookieString1782, cast1859);
                if (__cir_exc_active) {
                  {
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&expires1807);
                  }
                  {
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnEntered1784);
                  }
                  {
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&cookieString1782);
                  }
                  {
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1780);
                  }
                  int __cir_eh_ret = (int)0;
                  return __cir_eh_ret;
                }
                if (r1860) {
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1861 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__3(&cookieString1782, &isbnEntered1784);
                  if (__cir_exc_active) {
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&expires1807);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnEntered1784);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&cookieString1782);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1780);
                    }
                    int __cir_eh_ret = (int)0;
                    return __cir_eh_ret;
                  }
                } else {
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp61862;
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp71863;
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup1864;
                  char* cast1865 = (char*)&(_str_8);
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1866 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char____2(&cookieString1782, cast1865);
                  if (__cir_exc_active) {
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&expires1807);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnEntered1784);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&cookieString1782);
                    }
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1780);
                    }
                    int __cir_eh_ret = (int)0;
                    return __cir_eh_ret;
                  }
                  ref_tmp71863 = r1866;
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1867 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(&ref_tmp71863, &isbnEntered1784);
                    if (__cir_exc_active) {
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp71863);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&expires1807);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnEntered1784);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&cookieString1782);
                      }
                      {
                        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1780);
                      }
                      int __cir_eh_ret = (int)0;
                      return __cir_eh_ret;
                    }
                    ref_tmp61862 = r1867;
                      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1868 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&cookieString1782, &ref_tmp61862);
                      tmp_exprcleanup1864 = r1868;
                    {
                      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp61862);
                    }
                  {
                    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp71863);
                  }
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1869 = tmp_exprcleanup1864;
                }
              char* cast1870 = (char*)&(_str_9);
              struct std__basic_ostream_char__std__char_traits_char__* r1871 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1870);
              if (__cir_exc_active) {
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&expires1807);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnEntered1784);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&cookieString1782);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1780);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              struct std__basic_ostream_char__std__char_traits_char__* r1872 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1871, &cookieString1782);
              if (__cir_exc_active) {
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&expires1807);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnEntered1784);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&cookieString1782);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1780);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              char* cast1873 = (char*)&(_str_10);
              struct std__basic_ostream_char__std__char_traits_char__* r1874 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1872, cast1873);
              if (__cir_exc_active) {
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&expires1807);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnEntered1784);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&cookieString1782);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1780);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              struct std__basic_ostream_char__std__char_traits_char__* r1875 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1874, &expires1807);
              if (__cir_exc_active) {
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&expires1807);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnEntered1784);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&cookieString1782);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1780);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              char* cast1876 = (char*)&(_str_11);
              struct std__basic_ostream_char__std__char_traits_char__* r1877 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1875, cast1876);
              if (__cir_exc_active) {
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&expires1807);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnEntered1784);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&cookieString1782);
                }
                {
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1780);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&expires1807);
            }
          }
        char* cast1878 = (char*)&(_str_12);
        struct std__basic_ostream_char__std__char_traits_char__* r1879 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1878);
        if (__cir_exc_active) {
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnEntered1784);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&cookieString1782);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1780);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        char* cast1880 = (char*)&(_str_13);
        struct std__basic_ostream_char__std__char_traits_char__* r1881 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1880);
        if (__cir_exc_active) {
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnEntered1784);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&cookieString1782);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1780);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        char* cast1882 = (char*)&(_str_14);
        struct std__basic_ostream_char__std__char_traits_char__* r1883 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1881, cast1882);
        if (__cir_exc_active) {
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnEntered1784);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&cookieString1782);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1780);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        char* cast1884 = (char*)&(_str_15);
        struct std__basic_ostream_char__std__char_traits_char__* r1885 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1883, cast1884);
        if (__cir_exc_active) {
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnEntered1784);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&cookieString1782);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1780);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        char* cast1886 = (char*)&(_str_16);
        struct std__basic_ostream_char__std__char_traits_char__* r1887 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1885, cast1886);
        if (__cir_exc_active) {
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnEntered1784);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&cookieString1782);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1780);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        char* cast1888 = (char*)&(_str_17);
        struct std__basic_ostream_char__std__char_traits_char__* r1889 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1888);
        if (__cir_exc_active) {
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnEntered1784);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&cookieString1782);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1780);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        char* cast1890 = (char*)&(_str_18);
        struct std__basic_ostream_char__std__char_traits_char__* r1891 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1889, cast1890);
        if (__cir_exc_active) {
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnEntered1784);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&cookieString1782);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1780);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        char* cast1892 = (char*)&(_str_19);
        struct std__basic_ostream_char__std__char_traits_char__* r1893 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1891, cast1892);
        if (__cir_exc_active) {
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnEntered1784);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&cookieString1782);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1780);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        char* cast1894 = (char*)&(_str_20);
        struct std__basic_ostream_char__std__char_traits_char__* r1895 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1893, cast1894);
        if (__cir_exc_active) {
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnEntered1784);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&cookieString1782);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1780);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
          char* cast1896 = (char*)&(_str);
          _Bool r1897 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&cookieString1782, cast1896);
          if (__cir_exc_active) {
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnEntered1784);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&cookieString1782);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1780);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          _Bool u1898 = !r1897;
          if (u1898) {
            outputBooks(&cookieString1782, &isbnEntered1784);
            if (__cir_exc_active) {
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnEntered1784);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&cookieString1782);
              }
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1780);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
          }
        char* cast1899 = (char*)&(_str_21);
        struct std__basic_ostream_char__std__char_traits_char__* r1900 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1899);
        if (__cir_exc_active) {
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnEntered1784);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&cookieString1782);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1780);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        int c1901 = 0;
        __retval1777 = c1901;
        int t1902 = __retval1777;
        int ret_val1903 = t1902;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&isbnEntered1784);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&cookieString1782);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&dataString1780);
        }
        return ret_val1903;
  int t1904 = __retval1777;
  return t1904;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1905) {
bb1906:
  struct std____new_allocator_char_* this1907;
  this1907 = v1905;
  struct std____new_allocator_char_* t1908 = this1907;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1909) {
bb1910:
  char* __r1911;
  char* __retval1912;
  __r1911 = v1909;
  char* t1913 = __r1911;
  __retval1912 = t1913;
  char* t1914 = __retval1912;
  return t1914;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1915) {
bb1916:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1917;
  char* __retval1918;
  this1917 = v1915;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1919 = this1917;
  char* cast1920 = (char*)&(t1919->field2._M_local_buf);
  char* r1921 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1920);
  __retval1918 = r1921;
  char* t1922 = __retval1918;
  return t1922;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1923, char* v1924, struct std__allocator_char_* v1925) {
bb1926:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1927;
  char* __dat1928;
  struct std__allocator_char_* __a1929;
  this1927 = v1923;
  __dat1928 = v1924;
  __a1929 = v1925;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1930 = this1927;
  struct std__allocator_char_* base1931 = (struct std__allocator_char_*)((char *)t1930 + 0);
  struct std__allocator_char_* t1932 = __a1929;
  std__allocator_char___allocator(base1931, t1932);
    char* t1933 = __dat1928;
    t1930->_M_p = t1933;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1934:
  _Bool __retval1935;
    _Bool c1936 = 0;
    __retval1935 = c1936;
    _Bool t1937 = __retval1935;
    return t1937;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1938, char* v1939) {
bb1940:
  char* __c11941;
  char* __c21942;
  _Bool __retval1943;
  __c11941 = v1938;
  __c21942 = v1939;
  char* t1944 = __c11941;
  char t1945 = *t1944;
  int cast1946 = (int)t1945;
  char* t1947 = __c21942;
  char t1948 = *t1947;
  int cast1949 = (int)t1948;
  _Bool c1950 = ((cast1946 == cast1949)) ? 1 : 0;
  __retval1943 = c1950;
  _Bool t1951 = __retval1943;
  return t1951;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1952) {
bb1953:
  char* __p1954;
  unsigned long __retval1955;
  unsigned long __i1956;
  __p1954 = v1952;
  unsigned long c1957 = 0;
  __i1956 = c1957;
    char ref_tmp01958;
    while (1) {
      unsigned long t1959 = __i1956;
      char* t1960 = __p1954;
      char* ptr1961 = &(t1960)[t1959];
      char c1962 = 0;
      ref_tmp01958 = c1962;
      _Bool r1963 = __gnu_cxx__char_traits_char___eq(ptr1961, &ref_tmp01958);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u1964 = !r1963;
      if (!u1964) break;
      unsigned long t1965 = __i1956;
      unsigned long u1966 = t1965 + 1;
      __i1956 = u1966;
    }
  unsigned long t1967 = __i1956;
  __retval1955 = t1967;
  unsigned long t1968 = __retval1955;
  return t1968;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1969) {
bb1970:
  char* __s1971;
  unsigned long __retval1972;
  __s1971 = v1969;
    _Bool r1973 = std____is_constant_evaluated();
    if (r1973) {
      char* t1974 = __s1971;
      unsigned long r1975 = __gnu_cxx__char_traits_char___length(t1974);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval1972 = r1975;
      unsigned long t1976 = __retval1972;
      return t1976;
    }
  char* t1977 = __s1971;
  unsigned long r1978 = strlen(t1977);
  __retval1972 = r1978;
  unsigned long t1979 = __retval1972;
  return t1979;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v1980, char* v1981, struct std__random_access_iterator_tag v1982) {
bb1983:
  char* __first1984;
  char* __last1985;
  struct std__random_access_iterator_tag unnamed1986;
  long __retval1987;
  __first1984 = v1980;
  __last1985 = v1981;
  unnamed1986 = v1982;
  char* t1988 = __last1985;
  char* t1989 = __first1984;
  long diff1990 = t1988 - t1989;
  __retval1987 = diff1990;
  long t1991 = __retval1987;
  return t1991;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v1992) {
bb1993:
  char** unnamed1994;
  struct std__random_access_iterator_tag __retval1995;
  unnamed1994 = v1992;
  struct std__random_access_iterator_tag t1996 = __retval1995;
  return t1996;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v1997, char* v1998) {
bb1999:
  char* __first2000;
  char* __last2001;
  long __retval2002;
  struct std__random_access_iterator_tag agg_tmp02003;
  __first2000 = v1997;
  __last2001 = v1998;
  char* t2004 = __first2000;
  char* t2005 = __last2001;
  struct std__random_access_iterator_tag r2006 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first2000);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp02003 = r2006;
  struct std__random_access_iterator_tag t2007 = agg_tmp02003;
  long r2008 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t2004, t2005, t2007);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval2002 = r2008;
  long t2009 = __retval2002;
  return t2009;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2010, char* v2011) {
bb2012:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2013;
  char* __p2014;
  this2013 = v2010;
  __p2014 = v2011;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2015 = this2013;
  char* t2016 = __p2014;
  t2015->_M_dataplus._M_p = t2016;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v2017) {
bb2018:
  struct std__allocator_char_* __a2019;
  unsigned long __retval2020;
  __a2019 = v2017;
  unsigned long c2021 = -1;
  unsigned long c2022 = 1;
  unsigned long b2023 = c2021 / c2022;
  __retval2020 = b2023;
  unsigned long t2024 = __retval2020;
  return t2024;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2025) {
bb2026:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2027;
  struct std__allocator_char_* __retval2028;
  this2027 = v2025;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2029 = this2027;
  struct std__allocator_char_* base2030 = (struct std__allocator_char_*)((char *)&(t2029->_M_dataplus) + 0);
  __retval2028 = base2030;
  struct std__allocator_char_* t2031 = __retval2028;
  return t2031;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v2032, unsigned long* v2033) {
bb2034:
  unsigned long* __a2035;
  unsigned long* __b2036;
  unsigned long* __retval2037;
  __a2035 = v2032;
  __b2036 = v2033;
    unsigned long* t2038 = __b2036;
    unsigned long t2039 = *t2038;
    unsigned long* t2040 = __a2035;
    unsigned long t2041 = *t2040;
    _Bool c2042 = ((t2039 < t2041)) ? 1 : 0;
    if (c2042) {
      unsigned long* t2043 = __b2036;
      __retval2037 = t2043;
      unsigned long* t2044 = __retval2037;
      return t2044;
    }
  unsigned long* t2045 = __a2035;
  __retval2037 = t2045;
  unsigned long* t2046 = __retval2037;
  return t2046;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2047) {
bb2048:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2049;
  unsigned long __retval2050;
  unsigned long __diffmax2051;
  unsigned long __allocmax2052;
  this2049 = v2047;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2053 = this2049;
  unsigned long c2054 = 9223372036854775807;
  __diffmax2051 = c2054;
  struct std__allocator_char_* r2055 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t2053);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long r2056 = std__allocator_traits_std__allocator_char_____max_size(r2055);
  __allocmax2052 = r2056;
  unsigned long* r2057 = unsigned_long_const__std__min_unsigned_long_(&__diffmax2051, &__allocmax2052);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t2058 = *r2057;
  unsigned long c2059 = 1;
  unsigned long b2060 = t2058 - c2059;
  __retval2050 = b2060;
  unsigned long t2061 = __retval2050;
  return t2061;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v2062) {
bb2063:
  struct std____new_allocator_char_* this2064;
  unsigned long __retval2065;
  this2064 = v2062;
  struct std____new_allocator_char_* t2066 = this2064;
  unsigned long c2067 = 9223372036854775807;
  unsigned long c2068 = 1;
  unsigned long b2069 = c2067 / c2068;
  __retval2065 = b2069;
  unsigned long t2070 = __retval2065;
  return t2070;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v2071, unsigned long v2072, void* v2073) {
bb2074:
  struct std____new_allocator_char_* this2075;
  unsigned long __n2076;
  void* unnamed2077;
  char* __retval2078;
  this2075 = v2071;
  __n2076 = v2072;
  unnamed2077 = v2073;
  struct std____new_allocator_char_* t2079 = this2075;
    unsigned long t2080 = __n2076;
    unsigned long r2081 = std____new_allocator_char____M_max_size___const(t2079);
    _Bool c2082 = ((t2080 > r2081)) ? 1 : 0;
    if (c2082) {
        unsigned long t2083 = __n2076;
        unsigned long c2084 = -1;
        unsigned long c2085 = 1;
        unsigned long b2086 = c2084 / c2085;
        _Bool c2087 = ((t2083 > b2086)) ? 1 : 0;
        if (c2087) {
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
    unsigned long c2088 = 1;
    unsigned long c2089 = 16;
    _Bool c2090 = ((c2088 > c2089)) ? 1 : 0;
    if (c2090) {
      unsigned long __al2091;
      unsigned long c2092 = 1;
      __al2091 = c2092;
      unsigned long t2093 = __n2076;
      unsigned long c2094 = 1;
      unsigned long b2095 = t2093 * c2094;
      unsigned long t2096 = __al2091;
      void* r2097 = operator_new_2(b2095, t2096);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
      char* cast2098 = (char*)r2097;
      __retval2078 = cast2098;
      char* t2099 = __retval2078;
      return t2099;
    }
  unsigned long t2100 = __n2076;
  unsigned long c2101 = 1;
  unsigned long b2102 = t2100 * c2101;
  void* r2103 = operator_new(b2102);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  char* cast2104 = (char*)r2103;
  __retval2078 = cast2104;
  char* t2105 = __retval2078;
  return t2105;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v2106, unsigned long v2107) {
bb2108:
  struct std__allocator_char_* this2109;
  unsigned long __n2110;
  char* __retval2111;
  this2109 = v2106;
  __n2110 = v2107;
  struct std__allocator_char_* t2112 = this2109;
    _Bool r2113 = std____is_constant_evaluated();
    if (r2113) {
        unsigned long t2114 = __n2110;
        unsigned long c2115 = 1;
        unsigned long ovr2116;
        _Bool ovf2117 = __builtin_mul_overflow(t2114, c2115, &ovr2116);
        __n2110 = ovr2116;
        if (ovf2117) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            char* __cir_eh_ret = (char*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t2118 = __n2110;
      void* r2119 = operator_new(t2118);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
      char* cast2120 = (char*)r2119;
      __retval2111 = cast2120;
      char* t2121 = __retval2111;
      return t2121;
    }
  struct std____new_allocator_char_* base2122 = (struct std____new_allocator_char_*)((char *)t2112 + 0);
  unsigned long t2123 = __n2110;
  void* c2124 = ((void*)0);
  char* r2125 = std____new_allocator_char___allocate(base2122, t2123, c2124);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __retval2111 = r2125;
  char* t2126 = __retval2111;
  return t2126;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v2127, unsigned long v2128) {
bb2129:
  struct std__allocator_char_* __a2130;
  unsigned long __n2131;
  char* __retval2132;
  __a2130 = v2127;
  __n2131 = v2128;
  struct std__allocator_char_* t2133 = __a2130;
  unsigned long t2134 = __n2131;
  char* r2135 = std__allocator_char___allocate(t2133, t2134);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __retval2132 = r2135;
  char* t2136 = __retval2132;
  return t2136;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v2137, unsigned long v2138) {
bb2139:
  struct std__allocator_char_* __a2140;
  unsigned long __n2141;
  char* __retval2142;
  char* __p2143;
  __a2140 = v2137;
  __n2141 = v2138;
  struct std__allocator_char_* t2144 = __a2140;
  unsigned long t2145 = __n2141;
  char* r2146 = std__allocator_traits_std__allocator_char_____allocate(t2144, t2145);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __p2143 = r2146;
  char* t2147 = __p2143;
  __retval2142 = t2147;
  char* t2148 = __retval2142;
  return t2148;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2149) {
bb2150:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2151;
  struct std__allocator_char_* __retval2152;
  this2151 = v2149;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2153 = this2151;
  struct std__allocator_char_* base2154 = (struct std__allocator_char_*)((char *)&(t2153->_M_dataplus) + 0);
  __retval2152 = base2154;
  struct std__allocator_char_* t2155 = __retval2152;
  return t2155;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2156, unsigned long* v2157, unsigned long v2158) {
bb2159:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2160;
  unsigned long* __capacity2161;
  unsigned long __old_capacity2162;
  char* __retval2163;
  this2160 = v2156;
  __capacity2161 = v2157;
  __old_capacity2162 = v2158;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2164 = this2160;
    unsigned long* t2165 = __capacity2161;
    unsigned long t2166 = *t2165;
    unsigned long r2167 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t2164);
    _Bool c2168 = ((t2166 > r2167)) ? 1 : 0;
    if (c2168) {
      char* cast2169 = (char*)&(_str_35);
      std____throw_length_error(cast2169);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
    }
    unsigned long* t2170 = __capacity2161;
    unsigned long t2171 = *t2170;
    unsigned long t2172 = __old_capacity2162;
    _Bool c2173 = ((t2171 > t2172)) ? 1 : 0;
    _Bool ternary2174;
    if (c2173) {
      unsigned long* t2175 = __capacity2161;
      unsigned long t2176 = *t2175;
      unsigned long c2177 = 2;
      unsigned long t2178 = __old_capacity2162;
      unsigned long b2179 = c2177 * t2178;
      _Bool c2180 = ((t2176 < b2179)) ? 1 : 0;
      ternary2174 = (_Bool)c2180;
    } else {
      _Bool c2181 = 0;
      ternary2174 = (_Bool)c2181;
    }
    if (ternary2174) {
      unsigned long c2182 = 2;
      unsigned long t2183 = __old_capacity2162;
      unsigned long b2184 = c2182 * t2183;
      unsigned long* t2185 = __capacity2161;
      *t2185 = b2184;
        unsigned long* t2186 = __capacity2161;
        unsigned long t2187 = *t2186;
        unsigned long r2188 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t2164);
        _Bool c2189 = ((t2187 > r2188)) ? 1 : 0;
        if (c2189) {
          unsigned long r2190 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t2164);
          unsigned long* t2191 = __capacity2161;
          *t2191 = r2190;
        }
    }
  struct std__allocator_char_* r2192 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t2164);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  unsigned long* t2193 = __capacity2161;
  unsigned long t2194 = *t2193;
  unsigned long c2195 = 1;
  unsigned long b2196 = t2194 + c2195;
  char* r2197 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r2192, b2196);
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  __retval2163 = r2197;
  char* t2198 = __retval2163;
  return t2198;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2199, unsigned long v2200) {
bb2201:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2202;
  unsigned long __capacity2203;
  this2202 = v2199;
  __capacity2203 = v2200;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2204 = this2202;
  unsigned long t2205 = __capacity2203;
  t2204->field2._M_allocated_capacity = t2205;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb2206:
  _Bool __retval2207;
    _Bool c2208 = 0;
    __retval2207 = c2208;
    _Bool t2209 = __retval2207;
    return t2209;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2210) {
bb2211:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2212;
  this2212 = v2210;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2213 = this2212;
    _Bool r2214 = std__is_constant_evaluated();
    if (r2214) {
        unsigned long __i2215;
        unsigned long c2216 = 0;
        __i2215 = c2216;
        while (1) {
          unsigned long t2218 = __i2215;
          unsigned long c2219 = 15;
          _Bool c2220 = ((t2218 <= c2219)) ? 1 : 0;
          if (!c2220) break;
          char c2221 = 0;
          unsigned long t2222 = __i2215;
          t2213->field2._M_local_buf[t2222] = c2221;
        for_step2217: ;
          unsigned long t2223 = __i2215;
          unsigned long u2224 = t2223 + 1;
          __i2215 = u2224;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v2225, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2226) {
bb2227:
  struct _Guard* this2228;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s2229;
  this2228 = v2225;
  __s2229 = v2226;
  struct _Guard* t2230 = this2228;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2231 = __s2229;
  t2230->_M_guarded = t2231;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v2232, char* v2233) {
bb2234:
  char* __location2235;
  char* __args2236;
  char* __retval2237;
  void* __loc2238;
  __location2235 = v2232;
  __args2236 = v2233;
  char* t2239 = __location2235;
  void* cast2240 = (void*)t2239;
  __loc2238 = cast2240;
    void* t2241 = __loc2238;
    char* cast2242 = (char*)t2241;
    char* t2243 = __args2236;
    char t2244 = *t2243;
    *cast2242 = t2244;
    __retval2237 = cast2242;
    char* t2245 = __retval2237;
    return t2245;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v2246, char* v2247) {
bb2248:
  char* __c12249;
  char* __c22250;
  __c12249 = v2246;
  __c22250 = v2247;
    _Bool r2251 = std____is_constant_evaluated();
    if (r2251) {
      char* t2252 = __c12249;
      char* t2253 = __c22250;
      char* r2254 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t2252, t2253);
    } else {
      char* t2255 = __c22250;
      char t2256 = *t2255;
      char* t2257 = __c12249;
      *t2257 = t2256;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v2258, char* v2259, unsigned long v2260) {
bb2261:
  char* __s12262;
  char* __s22263;
  unsigned long __n2264;
  char* __retval2265;
  __s12262 = v2258;
  __s22263 = v2259;
  __n2264 = v2260;
    unsigned long t2266 = __n2264;
    unsigned long c2267 = 0;
    _Bool c2268 = ((t2266 == c2267)) ? 1 : 0;
    if (c2268) {
      char* t2269 = __s12262;
      __retval2265 = t2269;
      char* t2270 = __retval2265;
      return t2270;
    }
    _Bool r2271 = std____is_constant_evaluated();
    if (r2271) {
        unsigned long __i2272;
        unsigned long c2273 = 0;
        __i2272 = c2273;
        while (1) {
          unsigned long t2275 = __i2272;
          unsigned long t2276 = __n2264;
          _Bool c2277 = ((t2275 < t2276)) ? 1 : 0;
          if (!c2277) break;
          char* t2278 = __s12262;
          unsigned long t2279 = __i2272;
          char* ptr2280 = &(t2278)[t2279];
          unsigned long t2281 = __i2272;
          char* t2282 = __s22263;
          char* ptr2283 = &(t2282)[t2281];
          char* r2284 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr2280, ptr2283);
        for_step2274: ;
          unsigned long t2285 = __i2272;
          unsigned long u2286 = t2285 + 1;
          __i2272 = u2286;
        }
      char* t2287 = __s12262;
      __retval2265 = t2287;
      char* t2288 = __retval2265;
      return t2288;
    }
  char* t2289 = __s12262;
  void* cast2290 = (void*)t2289;
  char* t2291 = __s22263;
  void* cast2292 = (void*)t2291;
  unsigned long t2293 = __n2264;
  unsigned long c2294 = 1;
  unsigned long b2295 = t2293 * c2294;
  void* r2296 = memcpy(cast2290, cast2292, b2295);
  char* t2297 = __s12262;
  __retval2265 = t2297;
  char* t2298 = __retval2265;
  return t2298;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v2299, char* v2300, unsigned long v2301) {
bb2302:
  char* __s12303;
  char* __s22304;
  unsigned long __n2305;
  char* __retval2306;
  __s12303 = v2299;
  __s22304 = v2300;
  __n2305 = v2301;
    unsigned long t2307 = __n2305;
    unsigned long c2308 = 0;
    _Bool c2309 = ((t2307 == c2308)) ? 1 : 0;
    if (c2309) {
      char* t2310 = __s12303;
      __retval2306 = t2310;
      char* t2311 = __retval2306;
      return t2311;
    }
    _Bool r2312 = std____is_constant_evaluated();
    if (r2312) {
      char* t2313 = __s12303;
      char* t2314 = __s22304;
      unsigned long t2315 = __n2305;
      char* r2316 = __gnu_cxx__char_traits_char___copy(t2313, t2314, t2315);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
      __retval2306 = r2316;
      char* t2317 = __retval2306;
      return t2317;
    }
  char* t2318 = __s12303;
  void* cast2319 = (void*)t2318;
  char* t2320 = __s22304;
  void* cast2321 = (void*)t2320;
  unsigned long t2322 = __n2305;
  void* r2323 = memcpy(cast2319, cast2321, t2322);
  char* cast2324 = (char*)r2323;
  __retval2306 = cast2324;
  char* t2325 = __retval2306;
  return t2325;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v2326, char* v2327, unsigned long v2328) {
bb2329:
  char* __d2330;
  char* __s2331;
  unsigned long __n2332;
  __d2330 = v2326;
  __s2331 = v2327;
  __n2332 = v2328;
    unsigned long t2333 = __n2332;
    unsigned long c2334 = 1;
    _Bool c2335 = ((t2333 == c2334)) ? 1 : 0;
    if (c2335) {
      char* t2336 = __d2330;
      char* t2337 = __s2331;
      std__char_traits_char___assign(t2336, t2337);
    } else {
      char* t2338 = __d2330;
      char* t2339 = __s2331;
      unsigned long t2340 = __n2332;
      char* r2341 = std__char_traits_char___copy(t2338, t2339, t2340);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v2342) {
bb2343:
  char* __it2344;
  char* __retval2345;
  __it2344 = v2342;
  char* t2346 = __it2344;
  __retval2345 = t2346;
  char* t2347 = __retval2345;
  return t2347;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v2348, char* v2349, char* v2350) {
bb2351:
  char* __p2352;
  char* __k12353;
  char* __k22354;
  __p2352 = v2348;
  __k12353 = v2349;
  __k22354 = v2350;
    char* t2355 = __p2352;
    char* t2356 = __k12353;
    char* r2357 = char_const__std____niter_base_char_const__(t2356);
    char* t2358 = __k22354;
    char* t2359 = __k12353;
    long diff2360 = t2358 - t2359;
    unsigned long cast2361 = (unsigned long)diff2360;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t2355, r2357, cast2361);
    if (__cir_exc_active) {
      return;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2362) {
bb2363:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2364;
  char* __retval2365;
  this2364 = v2362;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2366 = this2364;
  char* t2367 = t2366->_M_dataplus._M_p;
  __retval2365 = t2367;
  char* t2368 = __retval2365;
  return t2368;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2369, unsigned long v2370) {
bb2371:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2372;
  unsigned long __length2373;
  this2372 = v2369;
  __length2373 = v2370;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2374 = this2372;
  unsigned long t2375 = __length2373;
  t2374->_M_string_length = t2375;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2376, unsigned long v2377) {
bb2378:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2379;
  unsigned long __n2380;
  char ref_tmp02381;
  this2379 = v2376;
  __n2380 = v2377;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2382 = this2379;
  unsigned long t2383 = __n2380;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t2382, t2383);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t2384 = __n2380;
  char* r2385 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t2382);
  if (__cir_exc_active) {
    return;
  }
  char* ptr2386 = &(r2385)[t2384];
  char c2387 = 0;
  ref_tmp02381 = c2387;
  std__char_traits_char___assign(ptr2386, &ref_tmp02381);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v2388) {
bb2389:
  struct _Guard* this2390;
  this2390 = v2388;
  struct _Guard* t2391 = this2390;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2392 = t2391->_M_guarded;
    _Bool cast2393 = (_Bool)t2392;
    if (cast2393) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2394 = t2391->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t2394);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2395, char* v2396, char* v2397, struct std__forward_iterator_tag v2398) {
bb2399:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2400;
  char* __beg2401;
  char* __end2402;
  struct std__forward_iterator_tag unnamed2403;
  unsigned long __dnew2404;
  struct _Guard __guard2405;
  this2400 = v2395;
  __beg2401 = v2396;
  __end2402 = v2397;
  unnamed2403 = v2398;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2406 = this2400;
  char* t2407 = __beg2401;
  char* t2408 = __end2402;
  long r2409 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t2407, t2408);
  if (__cir_exc_active) {
    return;
  }
  unsigned long cast2410 = (unsigned long)r2409;
  __dnew2404 = cast2410;
    unsigned long t2411 = __dnew2404;
    unsigned long c2412 = 15;
    _Bool c2413 = ((t2411 > c2412)) ? 1 : 0;
    if (c2413) {
      unsigned long c2414 = 0;
      char* r2415 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t2406, &__dnew2404, c2414);
      if (__cir_exc_active) {
        return;
      }
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t2406, r2415);
      if (__cir_exc_active) {
        return;
      }
      unsigned long t2416 = __dnew2404;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t2406, t2416);
      if (__cir_exc_active) {
        return;
      }
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t2406);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard2405, t2406);
  if (__cir_exc_active) {
    return;
  }
    char* r2417 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t2406);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard2405);
      }
      return;
    }
    char* t2418 = __beg2401;
    char* t2419 = __end2402;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r2417, t2418, t2419);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard2405);
      }
      return;
    }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c2420 = ((void*)0);
    __guard2405._M_guarded = c2420;
    unsigned long t2421 = __dnew2404;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t2406, t2421);
    if (__cir_exc_active) {
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard2405);
      }
      return;
    }
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard2405);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v2422) {
bb2423:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this2424;
  this2424 = v2422;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t2425 = this2424;
  {
    struct std__allocator_char_* base2426 = (struct std__allocator_char_*)((char *)t2425 + 0);
    std__allocator_char____allocator(base2426);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v2427, struct std____new_allocator_char_* v2428) {
bb2429:
  struct std____new_allocator_char_* this2430;
  struct std____new_allocator_char_* unnamed2431;
  this2430 = v2427;
  unnamed2431 = v2428;
  struct std____new_allocator_char_* t2432 = this2430;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v2433) {
bb2434:
  char* __r2435;
  char* __retval2436;
  __r2435 = v2433;
  char* t2437 = __r2435;
  __retval2436 = t2437;
  char* t2438 = __retval2436;
  return t2438;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2439) {
bb2440:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2441;
  char* __retval2442;
  this2441 = v2439;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2443 = this2441;
  char* cast2444 = (char*)&(t2443->field2._M_local_buf);
  char* r2445 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast2444);
  __retval2442 = r2445;
  char* t2446 = __retval2442;
  return t2446;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2447) {
bb2448:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2449;
  _Bool __retval2450;
  this2449 = v2447;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2451 = this2449;
    char* r2452 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t2451);
    if (__cir_exc_active) {
      _Bool __cir_eh_ret = (_Bool)0;
      return __cir_eh_ret;
    }
    char* r2453 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t2451);
    if (__cir_exc_active) {
      _Bool __cir_eh_ret = (_Bool)0;
      return __cir_eh_ret;
    }
    _Bool c2454 = ((r2452 == r2453)) ? 1 : 0;
    if (c2454) {
        unsigned long t2455 = t2451->_M_string_length;
        unsigned long c2456 = 15;
        _Bool c2457 = ((t2455 > c2456)) ? 1 : 0;
        if (c2457) {
          __builtin_unreachable();
        }
      _Bool c2458 = 1;
      __retval2450 = c2458;
      _Bool t2459 = __retval2450;
      return t2459;
    }
  _Bool c2460 = 0;
  __retval2450 = c2460;
  _Bool t2461 = __retval2450;
  return t2461;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v2462, char* v2463, unsigned long v2464) {
bb2465:
  struct std____new_allocator_char_* this2466;
  char* __p2467;
  unsigned long __n2468;
  this2466 = v2462;
  __p2467 = v2463;
  __n2468 = v2464;
  struct std____new_allocator_char_* t2469 = this2466;
    unsigned long c2470 = 1;
    unsigned long c2471 = 16;
    _Bool c2472 = ((c2470 > c2471)) ? 1 : 0;
    if (c2472) {
      char* t2473 = __p2467;
      void* cast2474 = (void*)t2473;
      unsigned long t2475 = __n2468;
      unsigned long c2476 = 1;
      unsigned long b2477 = t2475 * c2476;
      unsigned long c2478 = 1;
      operator_delete_3(cast2474, b2477, c2478);
      return;
    }
  char* t2479 = __p2467;
  void* cast2480 = (void*)t2479;
  unsigned long t2481 = __n2468;
  unsigned long c2482 = 1;
  unsigned long b2483 = t2481 * c2482;
  operator_delete_2(cast2480, b2483);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v2484, char* v2485, unsigned long v2486) {
bb2487:
  struct std__allocator_char_* this2488;
  char* __p2489;
  unsigned long __n2490;
  this2488 = v2484;
  __p2489 = v2485;
  __n2490 = v2486;
  struct std__allocator_char_* t2491 = this2488;
    _Bool r2492 = std____is_constant_evaluated();
    if (r2492) {
      char* t2493 = __p2489;
      void* cast2494 = (void*)t2493;
      operator_delete(cast2494);
      return;
    }
  struct std____new_allocator_char_* base2495 = (struct std____new_allocator_char_*)((char *)t2491 + 0);
  char* t2496 = __p2489;
  unsigned long t2497 = __n2490;
  std____new_allocator_char___deallocate(base2495, t2496, t2497);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v2498, char* v2499, unsigned long v2500) {
bb2501:
  struct std__allocator_char_* __a2502;
  char* __p2503;
  unsigned long __n2504;
  __a2502 = v2498;
  __p2503 = v2499;
  __n2504 = v2500;
  struct std__allocator_char_* t2505 = __a2502;
  char* t2506 = __p2503;
  unsigned long t2507 = __n2504;
  std__allocator_char___deallocate(t2505, t2506, t2507);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2508, unsigned long v2509) {
bb2510:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2511;
  unsigned long __size2512;
  this2511 = v2508;
  __size2512 = v2509;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2513 = this2511;
  struct std__allocator_char_* r2514 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t2513);
  if (__cir_exc_active) {
    return;
  }
  char* r2515 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t2513);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t2516 = __size2512;
  unsigned long c2517 = 1;
  unsigned long b2518 = t2516 + c2517;
  std__allocator_traits_std__allocator_char_____deallocate(r2514, r2515, b2518);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2519) {
bb2520:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2521;
  this2521 = v2519;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2522 = this2521;
    _Bool r2523 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t2522);
    if (__cir_exc_active) {
      return;
    }
    _Bool u2524 = !r2523;
    if (u2524) {
      unsigned long t2525 = t2522->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t2522, t2525);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v2526, char* v2527, struct std__allocator_char_* v2528) {
bb2529:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this2530;
  char* __dat2531;
  struct std__allocator_char_* __a2532;
  this2530 = v2526;
  __dat2531 = v2527;
  __a2532 = v2528;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t2533 = this2530;
  struct std__allocator_char_* base2534 = (struct std__allocator_char_*)((char *)t2533 + 0);
  struct std__allocator_char_* t2535 = __a2532;
  std__allocator_char___allocator(base2534, t2535);
    char* t2536 = __dat2531;
    t2533->_M_p = t2536;
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v2537, unsigned long v2538, unsigned long v2539) {
bb2540:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2541;
  unsigned long __pos2542;
  unsigned long __off2543;
  unsigned long __retval2544;
  _Bool __testoff2545;
  this2541 = v2537;
  __pos2542 = v2538;
  __off2543 = v2539;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t2546 = this2541;
  unsigned long t2547 = __off2543;
  unsigned long r2548 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t2546);
  unsigned long t2549 = __pos2542;
  unsigned long b2550 = r2548 - t2549;
  _Bool c2551 = ((t2547 < b2550)) ? 1 : 0;
  __testoff2545 = c2551;
  _Bool t2552 = __testoff2545;
  unsigned long ternary2553;
  if (t2552) {
    unsigned long t2554 = __off2543;
    ternary2553 = (unsigned long)t2554;
  } else {
    unsigned long r2555 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t2546);
    unsigned long t2556 = __pos2542;
    unsigned long b2557 = r2555 - t2556;
    ternary2553 = (unsigned long)b2557;
  }
  __retval2544 = ternary2553;
  unsigned long t2558 = __retval2544;
  return t2558;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev
void std__basic_streambuf_char__std__char_traits_char______basic_streambuf(struct std__basic_streambuf_char__std__char_traits_char__* v2559) {
bb2560:
  struct std__basic_streambuf_char__std__char_traits_char__* this2561;
  this2561 = v2559;
  struct std__basic_streambuf_char__std__char_traits_char__* t2562 = this2561;
  {
    std__locale___locale(&t2562->_M_buf_locale);
  }
  return;
}

