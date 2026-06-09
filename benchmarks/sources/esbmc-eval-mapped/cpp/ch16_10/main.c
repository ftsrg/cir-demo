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
extern char* getenv(char* p0);
extern int atoi(char* p0);
void header();
extern void exit(int p0);
void writeCookie();
int main();

extern unsigned char* _ZTTSt14basic_ifstreamIcSt11char_traitsIcEE[4] __attribute__((aligned(8)));
extern unsigned char* _ZTTSt14basic_ofstreamIcSt11char_traitsIcEE[4] __attribute__((aligned(8)));

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: _Z6headerv
void header() {
bb0:
  char* cast1 = (char*)&(_str_37);
  struct std__basic_ostream_char__std__char_traits_char__* std2;
  __VERIFIER_nondet_memory(&std2, sizeof(std2));
  char* cast3 = (char*)&(_str_38);
  struct std__basic_ostream_char__std__char_traits_char__* std4;
  __VERIFIER_nondet_memory(&std4, sizeof(std4));
  char* cast5 = (char*)&(_str_39);
  struct std__basic_ostream_char__std__char_traits_char__* std6;
  __VERIFIER_nondet_memory(&std6, sizeof(std6));
  char* cast7 = (char*)&(_str_40);
  struct std__basic_ostream_char__std__char_traits_char__* std8;
  __VERIFIER_nondet_memory(&std8, sizeof(std8));
  char* cast9 = (char*)&(_str_41);
  struct std__basic_ostream_char__std__char_traits_char__* std10;
  __VERIFIER_nondet_memory(&std10, sizeof(std10));
  char* cast11 = (char*)&(_str_42);
  struct std__basic_ostream_char__std__char_traits_char__* std12;
  __VERIFIER_nondet_memory(&std12, sizeof(std12));
  char* cast13 = (char*)&(_str_43);
  struct std__basic_ostream_char__std__char_traits_char__* std14;
  __VERIFIER_nondet_memory(&std14, sizeof(std14));
  char* cast15 = (char*)&(_str_44);
  struct std__basic_ostream_char__std__char_traits_char__* std16;
  __VERIFIER_nondet_memory(&std16, sizeof(std16));
  return;
}

// function: _Z11writeCookiev
void writeCookie() {
bb17:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ expires18;
  struct std__allocator_char_ ref_tmp019;
  char* cast20 = (char*)&(_str_45);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp019, sizeof(ref_tmp019));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&expires18, sizeof(expires18));
    __VERIFIER_nondet_memory(cast20, sizeof(*cast20));
    __VERIFIER_nondet_memory(&ref_tmp019, sizeof(ref_tmp019));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp019, sizeof(ref_tmp019));
  }
    char* cast21 = (char*)&(_str_46);
    struct std__basic_ostream_char__std__char_traits_char__* std22;
    __VERIFIER_nondet_memory(&std22, sizeof(std22));
    struct std__basic_ostream_char__std__char_traits_char__* std23;
    __VERIFIER_nondet_memory(&std23, sizeof(std23));
    char* cast24 = (char*)&(_str_47);
    struct std__basic_ostream_char__std__char_traits_char__* std25;
    __VERIFIER_nondet_memory(&std25, sizeof(std25));
  {
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
    __VERIFIER_nondet_memory(&expires18, sizeof(expires18));
  }
  return;
}

// function: main
int main() {
bb26:
  int __retval27;
  char query28[1024];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ dataString29;
  struct std__allocator_char_ ref_tmp030;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ userName31;
  struct std__allocator_char_ ref_tmp132;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ passWord33;
  struct std__allocator_char_ ref_tmp234;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ newCheck35;
  struct std__allocator_char_ ref_tmp336;
  int contentLength37;
  int endPassword38;
  int c39 = 0;
  __retval27 = c39;
  // array copy
  __builtin_memcpy(query28, __const_main_query, (unsigned long)1024 * sizeof(__const_main_query[0]));
  char* cast40 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp030, sizeof(ref_tmp030));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&dataString29, sizeof(dataString29));
    __VERIFIER_nondet_memory(cast40, sizeof(*cast40));
    __VERIFIER_nondet_memory(&ref_tmp030, sizeof(ref_tmp030));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp030, sizeof(ref_tmp030));
  }
    char* cast41 = (char*)&(_str);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp132, sizeof(ref_tmp132));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&userName31, sizeof(userName31));
      __VERIFIER_nondet_memory(cast41, sizeof(*cast41));
      __VERIFIER_nondet_memory(&ref_tmp132, sizeof(ref_tmp132));
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp132, sizeof(ref_tmp132));
    }
      char* cast42 = (char*)&(_str);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp234, sizeof(ref_tmp234));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&passWord33, sizeof(passWord33));
        __VERIFIER_nondet_memory(cast42, sizeof(*cast42));
        __VERIFIER_nondet_memory(&ref_tmp234, sizeof(ref_tmp234));
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp234, sizeof(ref_tmp234));
      }
        char* cast43 = (char*)&(_str);
        // externalized std:: op: std::allocator<char>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp336, sizeof(ref_tmp336));
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
          __VERIFIER_nondet_memory(&newCheck35, sizeof(newCheck35));
          __VERIFIER_nondet_memory(cast43, sizeof(*cast43));
          __VERIFIER_nondet_memory(&ref_tmp336, sizeof(ref_tmp336));
        {
          // externalized std:: op: std::allocator<char>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp336, sizeof(ref_tmp336));
        }
          int c44 = 0;
          contentLength37 = c44;
          int c45 = 0;
          endPassword38 = c45;
            char* cast46 = (char*)&(_str_1);
            char* r47 = getenv(cast46);
            _Bool cast48 = (_Bool)r47;
            if (cast48) {
              int userLocation49;
              int endUser50;
              int passwordLocation51;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp652;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup53;
              char* cast54 = (char*)&(_str_1);
              char* r55 = getenv(cast54);
              int r56 = atoi(r55);
              contentLength37 = r56;
              char* cast57 = (char*)&(query28);
              int t58 = contentLength37;
              long cast59 = (long)t58;
              struct std__basic_istream_char__std__char_traits_char__* std60;
              __VERIFIER_nondet_memory(&std60, sizeof(std60));
              char* cast61 = (char*)&(query28);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std62;
              __VERIFIER_nondet_memory(&std62, sizeof(std62));
              char* cast63 = (char*)&(_str_2);
              unsigned long c64 = 0;
              unsigned long std65 = __VERIFIER_nondet_unsigned_long();
              unsigned long c66 = 5;
              unsigned long b67 = std65 + c66;
              int cast68 = (int)b67;
              userLocation49 = cast68;
              char* cast69 = (char*)&(_str_3);
              unsigned long c70 = 0;
              unsigned long std71 = __VERIFIER_nondet_unsigned_long();
              int cast72 = (int)std71;
              endUser50 = cast72;
              char* cast73 = (char*)&(_str_4);
              unsigned long c74 = 0;
              unsigned long std75 = __VERIFIER_nondet_unsigned_long();
              unsigned long c76 = 9;
              unsigned long b77 = std75 + c76;
              int cast78 = (int)b77;
              passwordLocation51 = cast78;
              char* cast79 = (char*)&(_str_5);
              unsigned long c80 = 0;
              unsigned long std81 = __VERIFIER_nondet_unsigned_long();
              int cast82 = (int)std81;
              endPassword38 = cast82;
                int t83 = endPassword38;
                int c84 = 0;
                _Bool c85 = ((t83 > c84)) ? 1 : 0;
                if (c85) {
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp486;
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup87;
                  int t88 = passwordLocation51;
                  unsigned long cast89 = (unsigned long)t88;
                  int t90 = endPassword38;
                  int t91 = passwordLocation51;
                  int b92 = t90 - t91;
                  unsigned long cast93 = (unsigned long)b92;
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std94;
                  __VERIFIER_nondet_memory(&std94, sizeof(std94));
                  ref_tmp486 = std94;
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std95;
                    __VERIFIER_nondet_memory(&std95, sizeof(std95));
                    tmp_exprcleanup87 = std95;
                  {
                    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                    __VERIFIER_nondet_memory(&ref_tmp486, sizeof(ref_tmp486));
                  }
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t96 = tmp_exprcleanup87;
                } else {
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp597;
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup98;
                  int t99 = passwordLocation51;
                  unsigned long cast100 = (unsigned long)t99;
                  unsigned long t101 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std102;
                  __VERIFIER_nondet_memory(&std102, sizeof(std102));
                  ref_tmp597 = std102;
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std103;
                    __VERIFIER_nondet_memory(&std103, sizeof(std103));
                    tmp_exprcleanup98 = std103;
                  {
                    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                    __VERIFIER_nondet_memory(&ref_tmp597, sizeof(ref_tmp597));
                  }
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t104 = tmp_exprcleanup98;
                }
              int t105 = userLocation49;
              unsigned long cast106 = (unsigned long)t105;
              int t107 = endUser50;
              int t108 = userLocation49;
              int b109 = t107 - t108;
              unsigned long cast110 = (unsigned long)b109;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std111;
              __VERIFIER_nondet_memory(&std111, sizeof(std111));
              ref_tmp652 = std111;
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std112;
                __VERIFIER_nondet_memory(&std112, sizeof(std112));
                tmp_exprcleanup53 = std112;
              {
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                __VERIFIER_nondet_memory(&ref_tmp652, sizeof(ref_tmp652));
              }
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t113 = tmp_exprcleanup53;
            }
            char* cast114 = (char*)&(_str);
            _Bool std115;
            __VERIFIER_nondet_memory(&std115, sizeof(std115));
            if (std115) {
              header();
              if (__cir_exc_active) {
                {
                  // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                  __VERIFIER_nondet_memory(&newCheck35, sizeof(newCheck35));
                }
                {
                  // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                  __VERIFIER_nondet_memory(&passWord33, sizeof(passWord33));
                }
                {
                  // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                  __VERIFIER_nondet_memory(&userName31, sizeof(userName31));
                }
                {
                  // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                  __VERIFIER_nondet_memory(&dataString29, sizeof(dataString29));
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              char* cast116 = (char*)&(_str_6);
              struct std__basic_ostream_char__std__char_traits_char__* std117;
              __VERIFIER_nondet_memory(&std117, sizeof(std117));
              char* cast118 = (char*)&(_str_7);
              struct std__basic_ostream_char__std__char_traits_char__* std119;
              __VERIFIER_nondet_memory(&std119, sizeof(std119));
              char* cast120 = (char*)&(_str_8);
              struct std__basic_ostream_char__std__char_traits_char__* std121;
              __VERIFIER_nondet_memory(&std121, sizeof(std121));
              char* cast122 = (char*)&(_str_9);
              struct std__basic_ostream_char__std__char_traits_char__* std123;
              __VERIFIER_nondet_memory(&std123, sizeof(std123));
              char* cast124 = (char*)&(_str_10);
              struct std__basic_ostream_char__std__char_traits_char__* std125;
              __VERIFIER_nondet_memory(&std125, sizeof(std125));
              char* cast126 = (char*)&(_str_11);
              struct std__basic_ostream_char__std__char_traits_char__* std127;
              __VERIFIER_nondet_memory(&std127, sizeof(std127));
              char* cast128 = (char*)&(_str_12);
              struct std__basic_ostream_char__std__char_traits_char__* std129;
              __VERIFIER_nondet_memory(&std129, sizeof(std129));
              char* cast130 = (char*)&(_str_13);
              struct std__basic_ostream_char__std__char_traits_char__* std131;
              __VERIFIER_nondet_memory(&std131, sizeof(std131));
              char* cast132 = (char*)&(_str_14);
              struct std__basic_ostream_char__std__char_traits_char__* std133;
              __VERIFIER_nondet_memory(&std133, sizeof(std133));
              char* cast134 = (char*)&(_str_15);
              struct std__basic_ostream_char__std__char_traits_char__* std135;
              __VERIFIER_nondet_memory(&std135, sizeof(std135));
              char* cast136 = (char*)&(_str_16);
              struct std__basic_ostream_char__std__char_traits_char__* std137;
              __VERIFIER_nondet_memory(&std137, sizeof(std137));
              char* cast138 = (char*)&(_str_17);
              struct std__basic_ostream_char__std__char_traits_char__* std139;
              __VERIFIER_nondet_memory(&std139, sizeof(std139));
              char* cast140 = (char*)&(_str_18);
              struct std__basic_ostream_char__std__char_traits_char__* std141;
              __VERIFIER_nondet_memory(&std141, sizeof(std141));
            } else {
                int t142 = endPassword38;
                int c143 = 0;
                _Bool c144 = ((t142 > c143)) ? 1 : 0;
                if (c144) {
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ fileUsername145;
                  struct std__allocator_char_ ref_tmp7146;
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ filePassword147;
                  struct std__allocator_char_ ref_tmp8148;
                  _Bool nameTaken149;
                  struct std__basic_ifstream_char__std__char_traits_char__ userData150;
                  char* cast151 = (char*)&(_str);
                  // externalized std:: op: std::allocator<char>::allocator()
                  __VERIFIER_nondet_memory(&ref_tmp7146, sizeof(ref_tmp7146));
                    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
                    __VERIFIER_nondet_memory(&fileUsername145, sizeof(fileUsername145));
                    __VERIFIER_nondet_memory(cast151, sizeof(*cast151));
                    __VERIFIER_nondet_memory(&ref_tmp7146, sizeof(ref_tmp7146));
                  {
                    // externalized std:: op: std::allocator<char>::~allocator()
                    __VERIFIER_nondet_memory(&ref_tmp7146, sizeof(ref_tmp7146));
                  }
                    char* cast152 = (char*)&(_str);
                    // externalized std:: op: std::allocator<char>::allocator()
                    __VERIFIER_nondet_memory(&ref_tmp8148, sizeof(ref_tmp8148));
                      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
                      __VERIFIER_nondet_memory(&filePassword147, sizeof(filePassword147));
                      __VERIFIER_nondet_memory(cast152, sizeof(*cast152));
                      __VERIFIER_nondet_memory(&ref_tmp8148, sizeof(ref_tmp8148));
                    {
                      // externalized std:: op: std::allocator<char>::~allocator()
                      __VERIFIER_nondet_memory(&ref_tmp8148, sizeof(ref_tmp8148));
                    }
                      _Bool c153 = 0;
                      nameTaken149 = c153;
                      char* cast154 = (char*)&(_str_19);
                      int t155 = _ZNSt8ios_base2inE_const;
                      // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::basic_ifstream(char const*, std::_Ios_Openmode)
                      __VERIFIER_nondet_memory(&userData150, sizeof(userData150));
                      __VERIFIER_nondet_memory(cast154, sizeof(*cast154));
                          void** v156 = (void**)&(userData150);
                          void* v157 = *((void**)v156);
                          unsigned char* cast158 = (unsigned char*)v157;
                          long c159 = -24;
                          unsigned char* ptr160 = &(cast158)[c159];
                          long* cast161 = (long*)ptr160;
                          long t162 = *cast161;
                          unsigned char* cast163 = (unsigned char*)&(userData150);
                          unsigned char* ptr164 = &(cast163)[t162];
                          struct std__basic_ifstream_char__std__char_traits_char__* cast165 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr164;
                          struct std__basic_ios_char__std__char_traits_char__* cast166 = (struct std__basic_ios_char__std__char_traits_char__*)cast165;
                          _Bool std167;
                          __VERIFIER_nondet_memory(&std167, sizeof(std167));
                          if (std167) {
                            char* cast168 = (char*)&(_str_20);
                            struct std__basic_ostream_char__std__char_traits_char__* std169;
                            __VERIFIER_nondet_memory(&std169, sizeof(std169));
                            int c170 = 1;
                            exit(c170);
                          }
                          while (1) {
                            struct std__basic_istream_char__std__char_traits_char__* base171 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(userData150) + 0);
                            struct std__basic_istream_char__std__char_traits_char__* std172;
                            __VERIFIER_nondet_memory(&std172, sizeof(std172));
                            struct std__basic_istream_char__std__char_traits_char__* std173;
                            __VERIFIER_nondet_memory(&std173, sizeof(std173));
                            void** v174 = (void**)std173;
                            void* v175 = *((void**)v174);
                            unsigned char* cast176 = (unsigned char*)v175;
                            long c177 = -24;
                            unsigned char* ptr178 = &(cast176)[c177];
                            long* cast179 = (long*)ptr178;
                            long t180 = *cast179;
                            unsigned char* cast181 = (unsigned char*)std173;
                            unsigned char* ptr182 = &(cast181)[t180];
                            struct std__basic_istream_char__std__char_traits_char__* cast183 = (struct std__basic_istream_char__std__char_traits_char__*)ptr182;
                            struct std__basic_ios_char__std__char_traits_char__* cast184 = (struct std__basic_ios_char__std__char_traits_char__*)cast183;
                            _Bool std185;
                            __VERIFIER_nondet_memory(&std185, sizeof(std185));
                            if (!std185) break;
                                _Bool std186;
                                __VERIFIER_nondet_memory(&std186, sizeof(std186));
                                if (std186) {
                                  _Bool c187 = 1;
                                  nameTaken149 = c187;
                                }
                          }
                          _Bool t188 = nameTaken149;
                          if (t188) {
                            header();
                            if (__cir_exc_active) {
                              {
                                // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::~basic_ifstream()
                                __VERIFIER_nondet_memory(&userData150, sizeof(userData150));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&filePassword147, sizeof(filePassword147));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&fileUsername145, sizeof(fileUsername145));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&newCheck35, sizeof(newCheck35));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&passWord33, sizeof(passWord33));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&userName31, sizeof(userName31));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&dataString29, sizeof(dataString29));
                              }
                              int __cir_eh_ret = (int)0;
                              return __cir_eh_ret;
                            }
                            char* cast189 = (char*)&(_str_21);
                            struct std__basic_ostream_char__std__char_traits_char__* std190;
                            __VERIFIER_nondet_memory(&std190, sizeof(std190));
                            char* cast191 = (char*)&(_str_22);
                            struct std__basic_ostream_char__std__char_traits_char__* std192;
                            __VERIFIER_nondet_memory(&std192, sizeof(std192));
                            char* cast193 = (char*)&(_str_23);
                            struct std__basic_ostream_char__std__char_traits_char__* std194;
                            __VERIFIER_nondet_memory(&std194, sizeof(std194));
                          } else {
                            struct std__basic_ofstream_char__std__char_traits_char__ userData195;
                            writeCookie();
                            if (__cir_exc_active) {
                              {
                                // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::~basic_ifstream()
                                __VERIFIER_nondet_memory(&userData150, sizeof(userData150));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&filePassword147, sizeof(filePassword147));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&fileUsername145, sizeof(fileUsername145));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&newCheck35, sizeof(newCheck35));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&passWord33, sizeof(passWord33));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&userName31, sizeof(userName31));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&dataString29, sizeof(dataString29));
                              }
                              int __cir_eh_ret = (int)0;
                              return __cir_eh_ret;
                            }
                            header();
                            if (__cir_exc_active) {
                              {
                                // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::~basic_ifstream()
                                __VERIFIER_nondet_memory(&userData150, sizeof(userData150));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&filePassword147, sizeof(filePassword147));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&fileUsername145, sizeof(fileUsername145));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&newCheck35, sizeof(newCheck35));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&passWord33, sizeof(passWord33));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&userName31, sizeof(userName31));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&dataString29, sizeof(dataString29));
                              }
                              int __cir_eh_ret = (int)0;
                              return __cir_eh_ret;
                            }
                            char* cast196 = (char*)&(_str_19);
                            int t197 = _ZNSt8ios_base3appE_const;
                            // externalized std:: op: std::basic_ofstream<char, std::char_traits<char> >::basic_ofstream(char const*, std::_Ios_Openmode)
                            __VERIFIER_nondet_memory(&userData195, sizeof(userData195));
                            __VERIFIER_nondet_memory(cast196, sizeof(*cast196));
                                void** v198 = (void**)&(userData195);
                                void* v199 = *((void**)v198);
                                unsigned char* cast200 = (unsigned char*)v199;
                                long c201 = -24;
                                unsigned char* ptr202 = &(cast200)[c201];
                                long* cast203 = (long*)ptr202;
                                long t204 = *cast203;
                                unsigned char* cast205 = (unsigned char*)&(userData195);
                                unsigned char* ptr206 = &(cast205)[t204];
                                struct std__basic_ofstream_char__std__char_traits_char__* cast207 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr206;
                                struct std__basic_ios_char__std__char_traits_char__* cast208 = (struct std__basic_ios_char__std__char_traits_char__*)cast207;
                                _Bool std209;
                                __VERIFIER_nondet_memory(&std209, sizeof(std209));
                                if (std209) {
                                  char* cast210 = (char*)&(_str_20);
                                  struct std__basic_ostream_char__std__char_traits_char__* std211;
                                  __VERIFIER_nondet_memory(&std211, sizeof(std211));
                                  int c212 = 1;
                                  exit(c212);
                                }
                              struct std__basic_ostream_char__std__char_traits_char__* base213 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(userData195) + 0);
                              char* cast214 = (char*)&(_str_24);
                              struct std__basic_ostream_char__std__char_traits_char__* std215;
                              __VERIFIER_nondet_memory(&std215, sizeof(std215));
                              struct std__basic_ostream_char__std__char_traits_char__* std216;
                              __VERIFIER_nondet_memory(&std216, sizeof(std216));
                              char* cast217 = (char*)&(_str_24);
                              struct std__basic_ostream_char__std__char_traits_char__* std218;
                              __VERIFIER_nondet_memory(&std218, sizeof(std218));
                              struct std__basic_ostream_char__std__char_traits_char__* std219;
                              __VERIFIER_nondet_memory(&std219, sizeof(std219));
                              char* cast220 = (char*)&(_str_25);
                              struct std__basic_ostream_char__std__char_traits_char__* std221;
                              __VERIFIER_nondet_memory(&std221, sizeof(std221));
                              char* cast222 = (char*)&(_str_26);
                              struct std__basic_ostream_char__std__char_traits_char__* std223;
                              __VERIFIER_nondet_memory(&std223, sizeof(std223));
                              char* cast224 = (char*)&(_str_27);
                              struct std__basic_ostream_char__std__char_traits_char__* std225;
                              __VERIFIER_nondet_memory(&std225, sizeof(std225));
                            {
                              // externalized std:: op: std::basic_ofstream<char, std::char_traits<char> >::~basic_ofstream()
                              __VERIFIER_nondet_memory(&userData195, sizeof(userData195));
                            }
                          }
                      {
                        // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::~basic_ifstream()
                        __VERIFIER_nondet_memory(&userData150, sizeof(userData150));
                      }
                    {
                      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                      __VERIFIER_nondet_memory(&filePassword147, sizeof(filePassword147));
                    }
                  {
                    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                    __VERIFIER_nondet_memory(&fileUsername145, sizeof(fileUsername145));
                  }
                } else {
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ fileUsername226;
                  struct std__allocator_char_ ref_tmp9227;
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ filePassword228;
                  struct std__allocator_char_ ref_tmp10229;
                  _Bool authenticated230;
                  _Bool userFound231;
                  struct std__basic_ifstream_char__std__char_traits_char__ userData232;
                  char* cast233 = (char*)&(_str);
                  // externalized std:: op: std::allocator<char>::allocator()
                  __VERIFIER_nondet_memory(&ref_tmp9227, sizeof(ref_tmp9227));
                    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
                    __VERIFIER_nondet_memory(&fileUsername226, sizeof(fileUsername226));
                    __VERIFIER_nondet_memory(cast233, sizeof(*cast233));
                    __VERIFIER_nondet_memory(&ref_tmp9227, sizeof(ref_tmp9227));
                  {
                    // externalized std:: op: std::allocator<char>::~allocator()
                    __VERIFIER_nondet_memory(&ref_tmp9227, sizeof(ref_tmp9227));
                  }
                    char* cast234 = (char*)&(_str);
                    // externalized std:: op: std::allocator<char>::allocator()
                    __VERIFIER_nondet_memory(&ref_tmp10229, sizeof(ref_tmp10229));
                      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
                      __VERIFIER_nondet_memory(&filePassword228, sizeof(filePassword228));
                      __VERIFIER_nondet_memory(cast234, sizeof(*cast234));
                      __VERIFIER_nondet_memory(&ref_tmp10229, sizeof(ref_tmp10229));
                    {
                      // externalized std:: op: std::allocator<char>::~allocator()
                      __VERIFIER_nondet_memory(&ref_tmp10229, sizeof(ref_tmp10229));
                    }
                      _Bool c235 = 0;
                      authenticated230 = c235;
                      _Bool c236 = 0;
                      userFound231 = c236;
                      char* cast237 = (char*)&(_str_19);
                      int t238 = _ZNSt8ios_base2inE_const;
                      // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::basic_ifstream(char const*, std::_Ios_Openmode)
                      __VERIFIER_nondet_memory(&userData232, sizeof(userData232));
                      __VERIFIER_nondet_memory(cast237, sizeof(*cast237));
                          void** v239 = (void**)&(userData232);
                          void* v240 = *((void**)v239);
                          unsigned char* cast241 = (unsigned char*)v240;
                          long c242 = -24;
                          unsigned char* ptr243 = &(cast241)[c242];
                          long* cast244 = (long*)ptr243;
                          long t245 = *cast244;
                          unsigned char* cast246 = (unsigned char*)&(userData232);
                          unsigned char* ptr247 = &(cast246)[t245];
                          struct std__basic_ifstream_char__std__char_traits_char__* cast248 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr247;
                          struct std__basic_ios_char__std__char_traits_char__* cast249 = (struct std__basic_ios_char__std__char_traits_char__*)cast248;
                          _Bool std250;
                          __VERIFIER_nondet_memory(&std250, sizeof(std250));
                          if (std250) {
                            char* cast251 = (char*)&(_str_20);
                            struct std__basic_ostream_char__std__char_traits_char__* std252;
                            __VERIFIER_nondet_memory(&std252, sizeof(std252));
                            int c253 = 1;
                            exit(c253);
                          }
                          while (1) {
                            struct std__basic_istream_char__std__char_traits_char__* base254 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(userData232) + 0);
                            struct std__basic_istream_char__std__char_traits_char__* std255;
                            __VERIFIER_nondet_memory(&std255, sizeof(std255));
                            struct std__basic_istream_char__std__char_traits_char__* std256;
                            __VERIFIER_nondet_memory(&std256, sizeof(std256));
                            void** v257 = (void**)std256;
                            void* v258 = *((void**)v257);
                            unsigned char* cast259 = (unsigned char*)v258;
                            long c260 = -24;
                            unsigned char* ptr261 = &(cast259)[c260];
                            long* cast262 = (long*)ptr261;
                            long t263 = *cast262;
                            unsigned char* cast264 = (unsigned char*)std256;
                            unsigned char* ptr265 = &(cast264)[t263];
                            struct std__basic_istream_char__std__char_traits_char__* cast266 = (struct std__basic_istream_char__std__char_traits_char__*)ptr265;
                            struct std__basic_ios_char__std__char_traits_char__* cast267 = (struct std__basic_ios_char__std__char_traits_char__*)cast266;
                            _Bool std268;
                            __VERIFIER_nondet_memory(&std268, sizeof(std268));
                            if (!std268) break;
                                _Bool std269;
                                __VERIFIER_nondet_memory(&std269, sizeof(std269));
                                _Bool ternary270;
                                if (std269) {
                                  _Bool std271;
                                  __VERIFIER_nondet_memory(&std271, sizeof(std271));
                                  ternary270 = (_Bool)std271;
                                } else {
                                  _Bool c272 = 0;
                                  ternary270 = (_Bool)c272;
                                }
                                if (ternary270) {
                                  _Bool c273 = 1;
                                  authenticated230 = c273;
                                }
                                _Bool std274;
                                __VERIFIER_nondet_memory(&std274, sizeof(std274));
                                if (std274) {
                                  _Bool c275 = 1;
                                  userFound231 = c275;
                                }
                          }
                          _Bool t276 = authenticated230;
                          if (t276) {
                            writeCookie();
                            if (__cir_exc_active) {
                              {
                                // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::~basic_ifstream()
                                __VERIFIER_nondet_memory(&userData232, sizeof(userData232));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&filePassword228, sizeof(filePassword228));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&fileUsername226, sizeof(fileUsername226));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&newCheck35, sizeof(newCheck35));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&passWord33, sizeof(passWord33));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&userName31, sizeof(userName31));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&dataString29, sizeof(dataString29));
                              }
                              int __cir_eh_ret = (int)0;
                              return __cir_eh_ret;
                            }
                            header();
                            if (__cir_exc_active) {
                              {
                                // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::~basic_ifstream()
                                __VERIFIER_nondet_memory(&userData232, sizeof(userData232));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&filePassword228, sizeof(filePassword228));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&fileUsername226, sizeof(fileUsername226));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&newCheck35, sizeof(newCheck35));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&passWord33, sizeof(passWord33));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&userName31, sizeof(userName31));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&dataString29, sizeof(dataString29));
                              }
                              int __cir_eh_ret = (int)0;
                              return __cir_eh_ret;
                            }
                            char* cast277 = (char*)&(_str_28);
                            struct std__basic_ostream_char__std__char_traits_char__* std278;
                            __VERIFIER_nondet_memory(&std278, sizeof(std278));
                            struct std__basic_ostream_char__std__char_traits_char__* std279;
                            __VERIFIER_nondet_memory(&std279, sizeof(std279));
                            char* cast280 = (char*)&(_str_29);
                            struct std__basic_ostream_char__std__char_traits_char__* std281;
                            __VERIFIER_nondet_memory(&std281, sizeof(std281));
                            char* cast282 = (char*)&(_str_26);
                            struct std__basic_ostream_char__std__char_traits_char__* std283;
                            __VERIFIER_nondet_memory(&std283, sizeof(std283));
                            char* cast284 = (char*)&(_str_30);
                            struct std__basic_ostream_char__std__char_traits_char__* std285;
                            __VERIFIER_nondet_memory(&std285, sizeof(std285));
                          } else {
                            header();
                            if (__cir_exc_active) {
                              {
                                // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::~basic_ifstream()
                                __VERIFIER_nondet_memory(&userData232, sizeof(userData232));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&filePassword228, sizeof(filePassword228));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&fileUsername226, sizeof(fileUsername226));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&newCheck35, sizeof(newCheck35));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&passWord33, sizeof(passWord33));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&userName31, sizeof(userName31));
                              }
                              {
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                                __VERIFIER_nondet_memory(&dataString29, sizeof(dataString29));
                              }
                              int __cir_eh_ret = (int)0;
                              return __cir_eh_ret;
                            }
                              _Bool t286 = userFound231;
                              if (t286) {
                                char* cast287 = (char*)&(_str_31);
                                struct std__basic_ostream_char__std__char_traits_char__* std288;
                                __VERIFIER_nondet_memory(&std288, sizeof(std288));
                                char* cast289 = (char*)&(_str_32);
                                struct std__basic_ostream_char__std__char_traits_char__* std290;
                                __VERIFIER_nondet_memory(&std290, sizeof(std290));
                                char* cast291 = (char*)&(_str_22);
                                struct std__basic_ostream_char__std__char_traits_char__* std292;
                                __VERIFIER_nondet_memory(&std292, sizeof(std292));
                                char* cast293 = (char*)&(_str_33);
                                struct std__basic_ostream_char__std__char_traits_char__* std294;
                                __VERIFIER_nondet_memory(&std294, sizeof(std294));
                              } else {
                                char* cast295 = (char*)&(_str_34);
                                struct std__basic_ostream_char__std__char_traits_char__* std296;
                                __VERIFIER_nondet_memory(&std296, sizeof(std296));
                                char* cast297 = (char*)&(_str_22);
                                struct std__basic_ostream_char__std__char_traits_char__* std298;
                                __VERIFIER_nondet_memory(&std298, sizeof(std298));
                                char* cast299 = (char*)&(_str_35);
                                struct std__basic_ostream_char__std__char_traits_char__* std300;
                                __VERIFIER_nondet_memory(&std300, sizeof(std300));
                              }
                          }
                      {
                        // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::~basic_ifstream()
                        __VERIFIER_nondet_memory(&userData232, sizeof(userData232));
                      }
                    {
                      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                      __VERIFIER_nondet_memory(&filePassword228, sizeof(filePassword228));
                    }
                  {
                    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                    __VERIFIER_nondet_memory(&fileUsername226, sizeof(fileUsername226));
                  }
                }
            }
          char* cast301 = (char*)&(_str_36);
          struct std__basic_ostream_char__std__char_traits_char__* std302;
          __VERIFIER_nondet_memory(&std302, sizeof(std302));
          int c303 = 0;
          __retval27 = c303;
          int t304 = __retval27;
          int ret_val305 = t304;
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&newCheck35, sizeof(newCheck35));
          }
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&passWord33, sizeof(passWord33));
          }
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&userName31, sizeof(userName31));
          }
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&dataString29, sizeof(dataString29));
          }
          return ret_val305;
  int t306 = __retval27;
  return t306;
}

