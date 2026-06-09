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
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__less_const_char___ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___;
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___;
struct std__random_access_iterator_tag { unsigned char __field0; };
struct __mbstate_t { int __field0; union anon_1 __field1; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale _M_buf_locale; };
struct std__ctype_char_;
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_filebuf_char__std__char_traits_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; union pthread_mutex_t __field1; struct std____basic_file_char_ _M_file; int __field3; struct __mbstate_t __field4; struct __mbstate_t __field5; struct __mbstate_t __field6; char* __field7; unsigned long __field8; _Bool __field9; _Bool __field10; _Bool __field11; char __field12; char* __field13; char* __field14; _Bool __field15; struct std__codecvt_char__char____mbstate_t_* __field16; char* __field17; long __field18; char* __field19; char* __field20; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long _M_gcount; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__;
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
extern char* getenv(char* p0);
extern int atoi(char* p0);
extern void exit(int p0);
void outputBooks(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
int main();

extern unsigned char* _ZTTSt14basic_ifstreamIcSt11char_traitsIcEE[4] __attribute__((aligned(8)));

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: _Z11outputBooksRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6_
void outputBooks(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1) {
bb2:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* cookieRef3;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* isbnRef4;
  char book5[50];
  char year6[50];
  char isbn7[50];
  char price8[50];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ bookString9;
  struct std__allocator_char_ ref_tmp010;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ yearString11;
  struct std__allocator_char_ ref_tmp112;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ isbnString13;
  struct std__allocator_char_ ref_tmp214;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ priceString15;
  struct std__allocator_char_ ref_tmp316;
  struct std__basic_ifstream_char__std__char_traits_char__ userData17;
  cookieRef3 = v0;
  isbnRef4 = v1;
  // array copy
  __builtin_memcpy(book5, __const__Z11outputBooksRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6__book, (unsigned long)50 * sizeof(__const__Z11outputBooksRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6__book[0]));
  // array copy
  __builtin_memcpy(year6, __const__Z11outputBooksRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6__year, (unsigned long)50 * sizeof(__const__Z11outputBooksRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6__year[0]));
  // array copy
  __builtin_memcpy(isbn7, __const__Z11outputBooksRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6__isbn, (unsigned long)50 * sizeof(__const__Z11outputBooksRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6__isbn[0]));
  // array copy
  __builtin_memcpy(price8, __const__Z11outputBooksRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6__price, (unsigned long)50 * sizeof(__const__Z11outputBooksRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6__price[0]));
  char* cast18 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp010, sizeof(ref_tmp010));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&bookString9, sizeof(bookString9));
    __VERIFIER_nondet_memory(cast18, sizeof(*cast18));
    __VERIFIER_nondet_memory(&ref_tmp010, sizeof(ref_tmp010));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp010, sizeof(ref_tmp010));
  }
    char* cast19 = (char*)&(_str);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp112, sizeof(ref_tmp112));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&yearString11, sizeof(yearString11));
      __VERIFIER_nondet_memory(cast19, sizeof(*cast19));
      __VERIFIER_nondet_memory(&ref_tmp112, sizeof(ref_tmp112));
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp112, sizeof(ref_tmp112));
    }
      char* cast20 = (char*)&(_str);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp214, sizeof(ref_tmp214));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&isbnString13, sizeof(isbnString13));
        __VERIFIER_nondet_memory(cast20, sizeof(*cast20));
        __VERIFIER_nondet_memory(&ref_tmp214, sizeof(ref_tmp214));
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp214, sizeof(ref_tmp214));
      }
        char* cast21 = (char*)&(_str);
        // externalized std:: op: std::allocator<char>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp316, sizeof(ref_tmp316));
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
          __VERIFIER_nondet_memory(&priceString15, sizeof(priceString15));
          __VERIFIER_nondet_memory(cast21, sizeof(*cast21));
          __VERIFIER_nondet_memory(&ref_tmp316, sizeof(ref_tmp316));
        {
          // externalized std:: op: std::allocator<char>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp316, sizeof(ref_tmp316));
        }
          char* cast22 = (char*)&(_str_22);
          int t23 = _ZNSt8ios_base2inE_const;
          // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::basic_ifstream(char const*, std::_Ios_Openmode)
          __VERIFIER_nondet_memory(&userData17, sizeof(userData17));
          __VERIFIER_nondet_memory(cast22, sizeof(*cast22));
              void** v24 = (void**)&(userData17);
              void* v25 = *((void**)v24);
              unsigned char* cast26 = (unsigned char*)v25;
              long c27 = -24;
              unsigned char* ptr28 = &(cast26)[c27];
              long* cast29 = (long*)ptr28;
              long t30 = *cast29;
              unsigned char* cast31 = (unsigned char*)&(userData17);
              unsigned char* ptr32 = &(cast31)[t30];
              struct std__basic_ifstream_char__std__char_traits_char__* cast33 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr32;
              struct std__basic_ios_char__std__char_traits_char__* cast34 = (struct std__basic_ios_char__std__char_traits_char__*)cast33;
              _Bool std35;
              __VERIFIER_nondet_memory(&std35, sizeof(std35));
              if (std35) {
                char* cast36 = (char*)&(_str_23);
                struct std__basic_ostream_char__std__char_traits_char__* std37;
                __VERIFIER_nondet_memory(&std37, sizeof(std37));
                int c38 = 1;
                exit(c38);
              }
            char* cast39 = (char*)&(_str_24);
            struct std__basic_ostream_char__std__char_traits_char__* std40;
            __VERIFIER_nondet_memory(&std40, sizeof(std40));
            char* cast41 = (char*)&(_str_25);
            struct std__basic_ostream_char__std__char_traits_char__* std42;
            __VERIFIER_nondet_memory(&std42, sizeof(std42));
            char* cast43 = (char*)&(_str_26);
            struct std__basic_ostream_char__std__char_traits_char__* std44;
            __VERIFIER_nondet_memory(&std44, sizeof(std44));
              while (1) {
                void** v45 = (void**)&(userData17);
                void* v46 = *((void**)v45);
                unsigned char* cast47 = (unsigned char*)v46;
                long c48 = -24;
                unsigned char* ptr49 = &(cast47)[c48];
                long* cast50 = (long*)ptr49;
                long t51 = *cast50;
                unsigned char* cast52 = (unsigned char*)&(userData17);
                unsigned char* ptr53 = &(cast52)[t51];
                struct std__basic_ifstream_char__std__char_traits_char__* cast54 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr53;
                struct std__basic_ios_char__std__char_traits_char__* cast55 = (struct std__basic_ios_char__std__char_traits_char__*)cast54;
                _Bool std56;
                __VERIFIER_nondet_memory(&std56, sizeof(std56));
                if (!std56) break;
                  int match57;
                  struct std__basic_istream_char__std__char_traits_char__* base58 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(userData17) + 0);
                  char* cast59 = (char*)&(book5);
                  long c60 = 50;
                  struct std__basic_istream_char__std__char_traits_char__* std61;
                  __VERIFIER_nondet_memory(&std61, sizeof(std61));
                  char* cast62 = (char*)&(book5);
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std63;
                  __VERIFIER_nondet_memory(&std63, sizeof(std63));
                  struct std__basic_istream_char__std__char_traits_char__* base64 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(userData17) + 0);
                  char* cast65 = (char*)&(year6);
                  long c66 = 50;
                  struct std__basic_istream_char__std__char_traits_char__* std67;
                  __VERIFIER_nondet_memory(&std67, sizeof(std67));
                  char* cast68 = (char*)&(year6);
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std69;
                  __VERIFIER_nondet_memory(&std69, sizeof(std69));
                  struct std__basic_istream_char__std__char_traits_char__* base70 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(userData17) + 0);
                  char* cast71 = (char*)&(isbn7);
                  long c72 = 50;
                  struct std__basic_istream_char__std__char_traits_char__* std73;
                  __VERIFIER_nondet_memory(&std73, sizeof(std73));
                  char* cast74 = (char*)&(isbn7);
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std75;
                  __VERIFIER_nondet_memory(&std75, sizeof(std75));
                  struct std__basic_istream_char__std__char_traits_char__* base76 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(userData17) + 0);
                  char* cast77 = (char*)&(price8);
                  long c78 = 50;
                  struct std__basic_istream_char__std__char_traits_char__* std79;
                  __VERIFIER_nondet_memory(&std79, sizeof(std79));
                  char* cast80 = (char*)&(price8);
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std81;
                  __VERIFIER_nondet_memory(&std81, sizeof(std81));
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t82 = cookieRef3;
                  char* cast83 = (char*)&(isbn7);
                  unsigned long c84 = 0;
                  unsigned long std85 = __VERIFIER_nondet_unsigned_long();
                  int cast86 = (int)std85;
                  match57 = cast86;
                    int t87 = match57;
                    int c88 = 0;
                    _Bool c89 = ((t87 > c88)) ? 1 : 0;
                    _Bool ternary90;
                    if (c89) {
                      _Bool c91 = 1;
                      ternary90 = (_Bool)c91;
                    } else {
                      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t92 = isbnRef4;
                      _Bool std93;
                      __VERIFIER_nondet_memory(&std93, sizeof(std93));
                      ternary90 = (_Bool)std93;
                    }
                    if (ternary90) {
                      char* cast94 = (char*)&(_str_27);
                      struct std__basic_ostream_char__std__char_traits_char__* std95;
                      __VERIFIER_nondet_memory(&std95, sizeof(std95));
                      char* cast96 = (char*)&(_str_28);
                      struct std__basic_ostream_char__std__char_traits_char__* std97;
                      __VERIFIER_nondet_memory(&std97, sizeof(std97));
                      char* cast98 = (char*)&(_str_29);
                      struct std__basic_ostream_char__std__char_traits_char__* std99;
                      __VERIFIER_nondet_memory(&std99, sizeof(std99));
                      char* cast100 = (char*)&(_str_30);
                      struct std__basic_ostream_char__std__char_traits_char__* std101;
                      __VERIFIER_nondet_memory(&std101, sizeof(std101));
                      struct std__basic_ostream_char__std__char_traits_char__* std102;
                      __VERIFIER_nondet_memory(&std102, sizeof(std102));
                      char* cast103 = (char*)&(_str_31);
                      struct std__basic_ostream_char__std__char_traits_char__* std104;
                      __VERIFIER_nondet_memory(&std104, sizeof(std104));
                      char* cast105 = (char*)&(_str_30);
                      struct std__basic_ostream_char__std__char_traits_char__* std106;
                      __VERIFIER_nondet_memory(&std106, sizeof(std106));
                      struct std__basic_ostream_char__std__char_traits_char__* std107;
                      __VERIFIER_nondet_memory(&std107, sizeof(std107));
                      char* cast108 = (char*)&(_str_31);
                      struct std__basic_ostream_char__std__char_traits_char__* std109;
                      __VERIFIER_nondet_memory(&std109, sizeof(std109));
                      char* cast110 = (char*)&(_str_30);
                      struct std__basic_ostream_char__std__char_traits_char__* std111;
                      __VERIFIER_nondet_memory(&std111, sizeof(std111));
                      struct std__basic_ostream_char__std__char_traits_char__* std112;
                      __VERIFIER_nondet_memory(&std112, sizeof(std112));
                      char* cast113 = (char*)&(_str_31);
                      struct std__basic_ostream_char__std__char_traits_char__* std114;
                      __VERIFIER_nondet_memory(&std114, sizeof(std114));
                      char* cast115 = (char*)&(_str_30);
                      struct std__basic_ostream_char__std__char_traits_char__* std116;
                      __VERIFIER_nondet_memory(&std116, sizeof(std116));
                      struct std__basic_ostream_char__std__char_traits_char__* std117;
                      __VERIFIER_nondet_memory(&std117, sizeof(std117));
                      char* cast118 = (char*)&(_str_31);
                      struct std__basic_ostream_char__std__char_traits_char__* std119;
                      __VERIFIER_nondet_memory(&std119, sizeof(std119));
                    }
                  char* cast120 = (char*)&(_str_32);
                  struct std__basic_ostream_char__std__char_traits_char__* std121;
                  __VERIFIER_nondet_memory(&std121, sizeof(std121));
              }
            char* cast122 = (char*)&(_str_33);
            struct std__basic_ostream_char__std__char_traits_char__* std123;
            __VERIFIER_nondet_memory(&std123, sizeof(std123));
          {
            // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::~basic_ifstream()
            __VERIFIER_nondet_memory(&userData17, sizeof(userData17));
          }
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&priceString15, sizeof(priceString15));
        }
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&isbnString13, sizeof(isbnString13));
      }
    {
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
      __VERIFIER_nondet_memory(&yearString11, sizeof(yearString11));
    }
  {
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
    __VERIFIER_nondet_memory(&bookString9, sizeof(bookString9));
  }
  return;
}

// function: main
int main() {
bb124:
  int __retval125;
  char query126[1024];
  char* cartData127;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ dataString128;
  struct std__allocator_char_ ref_tmp0129;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ cookieString130;
  struct std__allocator_char_ ref_tmp1131;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ isbnEntered132;
  struct std__allocator_char_ ref_tmp2133;
  int contentLength134;
  int c135 = 0;
  __retval125 = c135;
  // array copy
  __builtin_memcpy(query126, __const_main_query, (unsigned long)1024 * sizeof(__const_main_query[0]));
  char* cast136 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp0129, sizeof(ref_tmp0129));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&dataString128, sizeof(dataString128));
    __VERIFIER_nondet_memory(cast136, sizeof(*cast136));
    __VERIFIER_nondet_memory(&ref_tmp0129, sizeof(ref_tmp0129));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp0129, sizeof(ref_tmp0129));
  }
    char* cast137 = (char*)&(_str);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp1131, sizeof(ref_tmp1131));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&cookieString130, sizeof(cookieString130));
      __VERIFIER_nondet_memory(cast137, sizeof(*cast137));
      __VERIFIER_nondet_memory(&ref_tmp1131, sizeof(ref_tmp1131));
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp1131, sizeof(ref_tmp1131));
    }
      char* cast138 = (char*)&(_str);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp2133, sizeof(ref_tmp2133));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&isbnEntered132, sizeof(isbnEntered132));
        __VERIFIER_nondet_memory(cast138, sizeof(*cast138));
        __VERIFIER_nondet_memory(&ref_tmp2133, sizeof(ref_tmp2133));
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp2133, sizeof(ref_tmp2133));
      }
        int c139 = 0;
        contentLength134 = c139;
          char* cast140 = (char*)&(_str_1);
          char* r141 = getenv(cast140);
          _Bool cast142 = (_Bool)r141;
          if (cast142) {
            char* cast143 = (char*)&(_str_1);
            char* r144 = getenv(cast143);
            cartData127 = r144;
            char* t145 = cartData127;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std146;
            __VERIFIER_nondet_memory(&std146, sizeof(std146));
          }
          char* cast147 = (char*)&(_str_2);
          char* r148 = getenv(cast147);
          _Bool cast149 = (_Bool)r148;
          if (cast149) {
            int addLocation150;
            int endAdd151;
            int isbnLocation152;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp3153;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup154;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ expires155;
            struct std__allocator_char_ ref_tmp4156;
            int cartLocation157;
            char* cast158 = (char*)&(_str_2);
            char* r159 = getenv(cast158);
            int r160 = atoi(r159);
            contentLength134 = r160;
            char* cast161 = (char*)&(query126);
            int t162 = contentLength134;
            long cast163 = (long)t162;
            struct std__basic_istream_char__std__char_traits_char__* std164;
            __VERIFIER_nondet_memory(&std164, sizeof(std164));
            char* cast165 = (char*)&(query126);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std166;
            __VERIFIER_nondet_memory(&std166, sizeof(std166));
            char* cast167 = (char*)&(_str_3);
            unsigned long c168 = 0;
            unsigned long std169 = __VERIFIER_nondet_unsigned_long();
            unsigned long c170 = 4;
            unsigned long b171 = std169 + c170;
            int cast172 = (int)b171;
            addLocation150 = cast172;
            char* cast173 = (char*)&(_str_4);
            unsigned long c174 = 0;
            unsigned long std175 = __VERIFIER_nondet_unsigned_long();
            int cast176 = (int)std175;
            endAdd151 = cast176;
            char* cast177 = (char*)&(_str_5);
            unsigned long c178 = 0;
            unsigned long std179 = __VERIFIER_nondet_unsigned_long();
            unsigned long c180 = 5;
            unsigned long b181 = std179 + c180;
            int cast182 = (int)b181;
            isbnLocation152 = cast182;
            int t183 = isbnLocation152;
            unsigned long cast184 = (unsigned long)t183;
            unsigned long t185 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std186;
            __VERIFIER_nondet_memory(&std186, sizeof(std186));
            ref_tmp3153 = std186;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std187;
              __VERIFIER_nondet_memory(&std187, sizeof(std187));
              tmp_exprcleanup154 = std187;
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&ref_tmp3153, sizeof(ref_tmp3153));
            }
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t188 = tmp_exprcleanup154;
            char* cast189 = (char*)&(_str_6);
            // externalized std:: op: std::allocator<char>::allocator()
            __VERIFIER_nondet_memory(&ref_tmp4156, sizeof(ref_tmp4156));
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
              __VERIFIER_nondet_memory(&expires155, sizeof(expires155));
              __VERIFIER_nondet_memory(cast189, sizeof(*cast189));
              __VERIFIER_nondet_memory(&ref_tmp4156, sizeof(ref_tmp4156));
            {
              // externalized std:: op: std::allocator<char>::~allocator()
              __VERIFIER_nondet_memory(&ref_tmp4156, sizeof(ref_tmp4156));
            }
              char* cast190 = (char*)&(_str_7);
              unsigned long c191 = 0;
              unsigned long std192 = __VERIFIER_nondet_unsigned_long();
              unsigned long c193 = 5;
              unsigned long b194 = std192 + c193;
              int cast195 = (int)b194;
              cartLocation157 = cast195;
                int t196 = cartLocation157;
                int c197 = 0;
                _Bool c198 = ((t196 > c197)) ? 1 : 0;
                if (c198) {
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp5199;
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup200;
                  int t201 = cartLocation157;
                  unsigned long cast202 = (unsigned long)t201;
                  unsigned long t203 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std204;
                  __VERIFIER_nondet_memory(&std204, sizeof(std204));
                  ref_tmp5199 = std204;
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std205;
                    __VERIFIER_nondet_memory(&std205, sizeof(std205));
                    tmp_exprcleanup200 = std205;
                  {
                    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                    __VERIFIER_nondet_memory(&ref_tmp5199, sizeof(ref_tmp5199));
                  }
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t206 = tmp_exprcleanup200;
                }
                char* cast207 = (char*)&(_str);
                _Bool std208;
                __VERIFIER_nondet_memory(&std208, sizeof(std208));
                if (std208) {
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std209;
                  __VERIFIER_nondet_memory(&std209, sizeof(std209));
                } else {
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp6210;
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp7211;
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup212;
                  char* cast213 = (char*)&(_str_8);
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std214;
                  __VERIFIER_nondet_memory(&std214, sizeof(std214));
                  ref_tmp7211 = std214;
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std215;
                    __VERIFIER_nondet_memory(&std215, sizeof(std215));
                    ref_tmp6210 = std215;
                      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std216;
                      __VERIFIER_nondet_memory(&std216, sizeof(std216));
                      tmp_exprcleanup212 = std216;
                    {
                      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                      __VERIFIER_nondet_memory(&ref_tmp6210, sizeof(ref_tmp6210));
                    }
                  {
                    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                    __VERIFIER_nondet_memory(&ref_tmp7211, sizeof(ref_tmp7211));
                  }
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t217 = tmp_exprcleanup212;
                }
              char* cast218 = (char*)&(_str_9);
              struct std__basic_ostream_char__std__char_traits_char__* std219;
              __VERIFIER_nondet_memory(&std219, sizeof(std219));
              struct std__basic_ostream_char__std__char_traits_char__* std220;
              __VERIFIER_nondet_memory(&std220, sizeof(std220));
              char* cast221 = (char*)&(_str_10);
              struct std__basic_ostream_char__std__char_traits_char__* std222;
              __VERIFIER_nondet_memory(&std222, sizeof(std222));
              struct std__basic_ostream_char__std__char_traits_char__* std223;
              __VERIFIER_nondet_memory(&std223, sizeof(std223));
              char* cast224 = (char*)&(_str_11);
              struct std__basic_ostream_char__std__char_traits_char__* std225;
              __VERIFIER_nondet_memory(&std225, sizeof(std225));
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&expires155, sizeof(expires155));
            }
          }
        char* cast226 = (char*)&(_str_12);
        struct std__basic_ostream_char__std__char_traits_char__* std227;
        __VERIFIER_nondet_memory(&std227, sizeof(std227));
        char* cast228 = (char*)&(_str_13);
        struct std__basic_ostream_char__std__char_traits_char__* std229;
        __VERIFIER_nondet_memory(&std229, sizeof(std229));
        char* cast230 = (char*)&(_str_14);
        struct std__basic_ostream_char__std__char_traits_char__* std231;
        __VERIFIER_nondet_memory(&std231, sizeof(std231));
        char* cast232 = (char*)&(_str_15);
        struct std__basic_ostream_char__std__char_traits_char__* std233;
        __VERIFIER_nondet_memory(&std233, sizeof(std233));
        char* cast234 = (char*)&(_str_16);
        struct std__basic_ostream_char__std__char_traits_char__* std235;
        __VERIFIER_nondet_memory(&std235, sizeof(std235));
        char* cast236 = (char*)&(_str_17);
        struct std__basic_ostream_char__std__char_traits_char__* std237;
        __VERIFIER_nondet_memory(&std237, sizeof(std237));
        char* cast238 = (char*)&(_str_18);
        struct std__basic_ostream_char__std__char_traits_char__* std239;
        __VERIFIER_nondet_memory(&std239, sizeof(std239));
        char* cast240 = (char*)&(_str_19);
        struct std__basic_ostream_char__std__char_traits_char__* std241;
        __VERIFIER_nondet_memory(&std241, sizeof(std241));
        char* cast242 = (char*)&(_str_20);
        struct std__basic_ostream_char__std__char_traits_char__* std243;
        __VERIFIER_nondet_memory(&std243, sizeof(std243));
          char* cast244 = (char*)&(_str);
          _Bool std245;
          __VERIFIER_nondet_memory(&std245, sizeof(std245));
          _Bool u246 = !std245;
          if (u246) {
            outputBooks(&cookieString130, &isbnEntered132);
            if (__cir_exc_active) {
              {
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                __VERIFIER_nondet_memory(&isbnEntered132, sizeof(isbnEntered132));
              }
              {
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                __VERIFIER_nondet_memory(&cookieString130, sizeof(cookieString130));
              }
              {
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                __VERIFIER_nondet_memory(&dataString128, sizeof(dataString128));
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
          }
        char* cast247 = (char*)&(_str_21);
        struct std__basic_ostream_char__std__char_traits_char__* std248;
        __VERIFIER_nondet_memory(&std248, sizeof(std248));
        int c249 = 0;
        __retval125 = c249;
        int t250 = __retval125;
        int ret_val251 = t250;
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&isbnEntered132, sizeof(isbnEntered132));
        }
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&cookieString130, sizeof(cookieString130));
        }
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&dataString128, sizeof(dataString128));
        }
        return ret_val251;
  int t252 = __retval125;
  return t252;
}

