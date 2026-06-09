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
// Struct definitions (auto-parsed)
struct _Guard { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* _M_guarded; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[8] = "COMSPEC";
char _str_1[14] = "DOCUMENT_ROOT";
char _str_2[18] = "GATEWAY_INTERFACE";
char _str_3[12] = "HTTP_ACCEPT";
char _str_4[21] = "HTTP_ACCEPT_ENCODING";
char _str_5[21] = "HTTP_ACCEPT_LANGUAGE";
char _str_6[16] = "HTTP_CONNECTION";
char _str_7[10] = "HTTP_HOST";
char _str_8[16] = "HTTP_USER_AGENT";
char _str_9[5] = "PATH";
char _str_10[13] = "QUERY_STRING";
char _str_11[12] = "REMOTE_ADDR";
char _str_12[12] = "REMOTE_PORT";
char _str_13[15] = "REQUEST_METHOD";
char _str_14[12] = "REQUEST_URI";
char _str_15[16] = "SCRIPT_FILENAME";
char _str_16[12] = "SCRIPT_NAME";
char _str_17[12] = "SERVER_ADDR";
char _str_18[13] = "SERVER_ADMIN";
char _str_19[12] = "SERVER_NAME";
char _str_20[12] = "SERVER_PORT";
char _str_21[16] = "SERVER_PROTOCOL";
char _str_22[17] = "SERVER_SIGNATURE";
char _str_23[16] = "SERVER_SOFTWARE";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_24[26] = "Content-type: text/html\n\n";
char _str_25[24] = "<?xml version = \"1.0\"?>";
char _str_26[46] = "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 ";
char _str_27[47] = "Transitional//EN\" \"http://www.w3.org/TR/xhtml1";
char _str_28[31] = "/DTD/xhtml1-transitional.dtd\">";
char _str_29[46] = "<html xmlns = \"http://www.w3.org/1999/xhtml\">";
char _str_30[50] = "<head><title>Environment Variables</title></head>";
char _str_31[7] = "<body>";
char _str_32[39] = "<table border = \"0\" cellspacing = \"2\">";
char _str_33[9] = "<tr><td>";
char _str_34[10] = "</td><td>";
char _str_35[11] = "</td></tr>";
char _str_36[23] = "</table></body></html>";
char _str_37[50] = "basic_string: construction from null is not valid";
char _str_38[24] = "basic_string::_M_create";
extern char* getenv(char* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ environmentVariables2[24];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* arrayinit_endOfInit3;
  struct std__allocator_char_ ref_tmp04;
  struct std__allocator_char_ ref_tmp15;
  struct std__allocator_char_ ref_tmp26;
  struct std__allocator_char_ ref_tmp37;
  struct std__allocator_char_ ref_tmp48;
  struct std__allocator_char_ ref_tmp59;
  struct std__allocator_char_ ref_tmp610;
  struct std__allocator_char_ ref_tmp711;
  struct std__allocator_char_ ref_tmp812;
  struct std__allocator_char_ ref_tmp913;
  struct std__allocator_char_ ref_tmp1014;
  struct std__allocator_char_ ref_tmp1115;
  struct std__allocator_char_ ref_tmp1216;
  struct std__allocator_char_ ref_tmp1317;
  struct std__allocator_char_ ref_tmp1418;
  struct std__allocator_char_ ref_tmp1519;
  struct std__allocator_char_ ref_tmp1620;
  struct std__allocator_char_ ref_tmp1721;
  struct std__allocator_char_ ref_tmp1822;
  struct std__allocator_char_ ref_tmp1923;
  struct std__allocator_char_ ref_tmp2024;
  struct std__allocator_char_ ref_tmp2125;
  struct std__allocator_char_ ref_tmp2226;
  struct std__allocator_char_ ref_tmp2327;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __array_idx28;
  int c29 = 0;
  __retval1 = c29;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* cast30 = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)&(environmentVariables2);
  arrayinit_endOfInit3 = cast30;
    char* cast31 = (char*)&(_str);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(cast30, sizeof(*cast30));
      __VERIFIER_nondet_memory(cast31, sizeof(*cast31));
      __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
      long c32 = 1;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr33 = &(cast30)[c32];
      arrayinit_endOfInit3 = ptr33;
      char* cast34 = (char*)&(_str_1);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(ptr33, sizeof(*ptr33));
        __VERIFIER_nondet_memory(cast34, sizeof(*cast34));
        __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
        long c35 = 2;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr36 = &(cast30)[c35];
        arrayinit_endOfInit3 = ptr36;
        char* cast37 = (char*)&(_str_2);
        // externalized std:: op: std::allocator<char>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp26, sizeof(ref_tmp26));
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
          __VERIFIER_nondet_memory(ptr36, sizeof(*ptr36));
          __VERIFIER_nondet_memory(cast37, sizeof(*cast37));
          __VERIFIER_nondet_memory(&ref_tmp26, sizeof(ref_tmp26));
          long c38 = 3;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr39 = &(cast30)[c38];
          arrayinit_endOfInit3 = ptr39;
          char* cast40 = (char*)&(_str_3);
          // externalized std:: op: std::allocator<char>::allocator()
          __VERIFIER_nondet_memory(&ref_tmp37, sizeof(ref_tmp37));
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
            __VERIFIER_nondet_memory(ptr39, sizeof(*ptr39));
            __VERIFIER_nondet_memory(cast40, sizeof(*cast40));
            __VERIFIER_nondet_memory(&ref_tmp37, sizeof(ref_tmp37));
            long c41 = 4;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr42 = &(cast30)[c41];
            arrayinit_endOfInit3 = ptr42;
            char* cast43 = (char*)&(_str_4);
            // externalized std:: op: std::allocator<char>::allocator()
            __VERIFIER_nondet_memory(&ref_tmp48, sizeof(ref_tmp48));
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
              __VERIFIER_nondet_memory(ptr42, sizeof(*ptr42));
              __VERIFIER_nondet_memory(cast43, sizeof(*cast43));
              __VERIFIER_nondet_memory(&ref_tmp48, sizeof(ref_tmp48));
              long c44 = 5;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr45 = &(cast30)[c44];
              arrayinit_endOfInit3 = ptr45;
              char* cast46 = (char*)&(_str_5);
              // externalized std:: op: std::allocator<char>::allocator()
              __VERIFIER_nondet_memory(&ref_tmp59, sizeof(ref_tmp59));
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
                __VERIFIER_nondet_memory(ptr45, sizeof(*ptr45));
                __VERIFIER_nondet_memory(cast46, sizeof(*cast46));
                __VERIFIER_nondet_memory(&ref_tmp59, sizeof(ref_tmp59));
                long c47 = 6;
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr48 = &(cast30)[c47];
                arrayinit_endOfInit3 = ptr48;
                char* cast49 = (char*)&(_str_6);
                // externalized std:: op: std::allocator<char>::allocator()
                __VERIFIER_nondet_memory(&ref_tmp610, sizeof(ref_tmp610));
                  // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
                  __VERIFIER_nondet_memory(ptr48, sizeof(*ptr48));
                  __VERIFIER_nondet_memory(cast49, sizeof(*cast49));
                  __VERIFIER_nondet_memory(&ref_tmp610, sizeof(ref_tmp610));
                  long c50 = 7;
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr51 = &(cast30)[c50];
                  arrayinit_endOfInit3 = ptr51;
                  char* cast52 = (char*)&(_str_7);
                  // externalized std:: op: std::allocator<char>::allocator()
                  __VERIFIER_nondet_memory(&ref_tmp711, sizeof(ref_tmp711));
                    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
                    __VERIFIER_nondet_memory(ptr51, sizeof(*ptr51));
                    __VERIFIER_nondet_memory(cast52, sizeof(*cast52));
                    __VERIFIER_nondet_memory(&ref_tmp711, sizeof(ref_tmp711));
                    long c53 = 8;
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr54 = &(cast30)[c53];
                    arrayinit_endOfInit3 = ptr54;
                    char* cast55 = (char*)&(_str_8);
                    // externalized std:: op: std::allocator<char>::allocator()
                    __VERIFIER_nondet_memory(&ref_tmp812, sizeof(ref_tmp812));
                      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
                      __VERIFIER_nondet_memory(ptr54, sizeof(*ptr54));
                      __VERIFIER_nondet_memory(cast55, sizeof(*cast55));
                      __VERIFIER_nondet_memory(&ref_tmp812, sizeof(ref_tmp812));
                      long c56 = 9;
                      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr57 = &(cast30)[c56];
                      arrayinit_endOfInit3 = ptr57;
                      char* cast58 = (char*)&(_str_9);
                      // externalized std:: op: std::allocator<char>::allocator()
                      __VERIFIER_nondet_memory(&ref_tmp913, sizeof(ref_tmp913));
                        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
                        __VERIFIER_nondet_memory(ptr57, sizeof(*ptr57));
                        __VERIFIER_nondet_memory(cast58, sizeof(*cast58));
                        __VERIFIER_nondet_memory(&ref_tmp913, sizeof(ref_tmp913));
                        long c59 = 10;
                        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr60 = &(cast30)[c59];
                        arrayinit_endOfInit3 = ptr60;
                        char* cast61 = (char*)&(_str_10);
                        // externalized std:: op: std::allocator<char>::allocator()
                        __VERIFIER_nondet_memory(&ref_tmp1014, sizeof(ref_tmp1014));
                          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
                          __VERIFIER_nondet_memory(ptr60, sizeof(*ptr60));
                          __VERIFIER_nondet_memory(cast61, sizeof(*cast61));
                          __VERIFIER_nondet_memory(&ref_tmp1014, sizeof(ref_tmp1014));
                          long c62 = 11;
                          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr63 = &(cast30)[c62];
                          arrayinit_endOfInit3 = ptr63;
                          char* cast64 = (char*)&(_str_11);
                          // externalized std:: op: std::allocator<char>::allocator()
                          __VERIFIER_nondet_memory(&ref_tmp1115, sizeof(ref_tmp1115));
                            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
                            __VERIFIER_nondet_memory(ptr63, sizeof(*ptr63));
                            __VERIFIER_nondet_memory(cast64, sizeof(*cast64));
                            __VERIFIER_nondet_memory(&ref_tmp1115, sizeof(ref_tmp1115));
                            long c65 = 12;
                            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr66 = &(cast30)[c65];
                            arrayinit_endOfInit3 = ptr66;
                            char* cast67 = (char*)&(_str_12);
                            // externalized std:: op: std::allocator<char>::allocator()
                            __VERIFIER_nondet_memory(&ref_tmp1216, sizeof(ref_tmp1216));
                              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
                              __VERIFIER_nondet_memory(ptr66, sizeof(*ptr66));
                              __VERIFIER_nondet_memory(cast67, sizeof(*cast67));
                              __VERIFIER_nondet_memory(&ref_tmp1216, sizeof(ref_tmp1216));
                              long c68 = 13;
                              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr69 = &(cast30)[c68];
                              arrayinit_endOfInit3 = ptr69;
                              char* cast70 = (char*)&(_str_13);
                              // externalized std:: op: std::allocator<char>::allocator()
                              __VERIFIER_nondet_memory(&ref_tmp1317, sizeof(ref_tmp1317));
                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
                                __VERIFIER_nondet_memory(ptr69, sizeof(*ptr69));
                                __VERIFIER_nondet_memory(cast70, sizeof(*cast70));
                                __VERIFIER_nondet_memory(&ref_tmp1317, sizeof(ref_tmp1317));
                                long c71 = 14;
                                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr72 = &(cast30)[c71];
                                arrayinit_endOfInit3 = ptr72;
                                char* cast73 = (char*)&(_str_14);
                                // externalized std:: op: std::allocator<char>::allocator()
                                __VERIFIER_nondet_memory(&ref_tmp1418, sizeof(ref_tmp1418));
                                  // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
                                  __VERIFIER_nondet_memory(ptr72, sizeof(*ptr72));
                                  __VERIFIER_nondet_memory(cast73, sizeof(*cast73));
                                  __VERIFIER_nondet_memory(&ref_tmp1418, sizeof(ref_tmp1418));
                                  long c74 = 15;
                                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr75 = &(cast30)[c74];
                                  arrayinit_endOfInit3 = ptr75;
                                  char* cast76 = (char*)&(_str_15);
                                  // externalized std:: op: std::allocator<char>::allocator()
                                  __VERIFIER_nondet_memory(&ref_tmp1519, sizeof(ref_tmp1519));
                                    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
                                    __VERIFIER_nondet_memory(ptr75, sizeof(*ptr75));
                                    __VERIFIER_nondet_memory(cast76, sizeof(*cast76));
                                    __VERIFIER_nondet_memory(&ref_tmp1519, sizeof(ref_tmp1519));
                                    long c77 = 16;
                                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr78 = &(cast30)[c77];
                                    arrayinit_endOfInit3 = ptr78;
                                    char* cast79 = (char*)&(_str_16);
                                    // externalized std:: op: std::allocator<char>::allocator()
                                    __VERIFIER_nondet_memory(&ref_tmp1620, sizeof(ref_tmp1620));
                                      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
                                      __VERIFIER_nondet_memory(ptr78, sizeof(*ptr78));
                                      __VERIFIER_nondet_memory(cast79, sizeof(*cast79));
                                      __VERIFIER_nondet_memory(&ref_tmp1620, sizeof(ref_tmp1620));
                                      long c80 = 17;
                                      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr81 = &(cast30)[c80];
                                      arrayinit_endOfInit3 = ptr81;
                                      char* cast82 = (char*)&(_str_17);
                                      // externalized std:: op: std::allocator<char>::allocator()
                                      __VERIFIER_nondet_memory(&ref_tmp1721, sizeof(ref_tmp1721));
                                        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
                                        __VERIFIER_nondet_memory(ptr81, sizeof(*ptr81));
                                        __VERIFIER_nondet_memory(cast82, sizeof(*cast82));
                                        __VERIFIER_nondet_memory(&ref_tmp1721, sizeof(ref_tmp1721));
                                        long c83 = 18;
                                        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr84 = &(cast30)[c83];
                                        arrayinit_endOfInit3 = ptr84;
                                        char* cast85 = (char*)&(_str_18);
                                        // externalized std:: op: std::allocator<char>::allocator()
                                        __VERIFIER_nondet_memory(&ref_tmp1822, sizeof(ref_tmp1822));
                                          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
                                          __VERIFIER_nondet_memory(ptr84, sizeof(*ptr84));
                                          __VERIFIER_nondet_memory(cast85, sizeof(*cast85));
                                          __VERIFIER_nondet_memory(&ref_tmp1822, sizeof(ref_tmp1822));
                                          long c86 = 19;
                                          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr87 = &(cast30)[c86];
                                          arrayinit_endOfInit3 = ptr87;
                                          char* cast88 = (char*)&(_str_19);
                                          // externalized std:: op: std::allocator<char>::allocator()
                                          __VERIFIER_nondet_memory(&ref_tmp1923, sizeof(ref_tmp1923));
                                            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
                                            __VERIFIER_nondet_memory(ptr87, sizeof(*ptr87));
                                            __VERIFIER_nondet_memory(cast88, sizeof(*cast88));
                                            __VERIFIER_nondet_memory(&ref_tmp1923, sizeof(ref_tmp1923));
                                            long c89 = 20;
                                            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr90 = &(cast30)[c89];
                                            arrayinit_endOfInit3 = ptr90;
                                            char* cast91 = (char*)&(_str_20);
                                            // externalized std:: op: std::allocator<char>::allocator()
                                            __VERIFIER_nondet_memory(&ref_tmp2024, sizeof(ref_tmp2024));
                                              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
                                              __VERIFIER_nondet_memory(ptr90, sizeof(*ptr90));
                                              __VERIFIER_nondet_memory(cast91, sizeof(*cast91));
                                              __VERIFIER_nondet_memory(&ref_tmp2024, sizeof(ref_tmp2024));
                                              long c92 = 21;
                                              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr93 = &(cast30)[c92];
                                              arrayinit_endOfInit3 = ptr93;
                                              char* cast94 = (char*)&(_str_21);
                                              // externalized std:: op: std::allocator<char>::allocator()
                                              __VERIFIER_nondet_memory(&ref_tmp2125, sizeof(ref_tmp2125));
                                                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
                                                __VERIFIER_nondet_memory(ptr93, sizeof(*ptr93));
                                                __VERIFIER_nondet_memory(cast94, sizeof(*cast94));
                                                __VERIFIER_nondet_memory(&ref_tmp2125, sizeof(ref_tmp2125));
                                                long c95 = 22;
                                                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr96 = &(cast30)[c95];
                                                arrayinit_endOfInit3 = ptr96;
                                                char* cast97 = (char*)&(_str_22);
                                                // externalized std:: op: std::allocator<char>::allocator()
                                                __VERIFIER_nondet_memory(&ref_tmp2226, sizeof(ref_tmp2226));
                                                  // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
                                                  __VERIFIER_nondet_memory(ptr96, sizeof(*ptr96));
                                                  __VERIFIER_nondet_memory(cast97, sizeof(*cast97));
                                                  __VERIFIER_nondet_memory(&ref_tmp2226, sizeof(ref_tmp2226));
                                                  long c98 = 23;
                                                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr99 = &(cast30)[c98];
                                                  arrayinit_endOfInit3 = ptr99;
                                                  char* cast100 = (char*)&(_str_23);
                                                  // externalized std:: op: std::allocator<char>::allocator()
                                                  __VERIFIER_nondet_memory(&ref_tmp2327, sizeof(ref_tmp2327));
                                                    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
                                                    __VERIFIER_nondet_memory(ptr99, sizeof(*ptr99));
                                                    __VERIFIER_nondet_memory(cast100, sizeof(*cast100));
                                                    __VERIFIER_nondet_memory(&ref_tmp2327, sizeof(ref_tmp2327));
                                                  {
                                                    // externalized std:: op: std::allocator<char>::~allocator()
                                                    __VERIFIER_nondet_memory(&ref_tmp2327, sizeof(ref_tmp2327));
                                                  }
                                                {
                                                  // externalized std:: op: std::allocator<char>::~allocator()
                                                  __VERIFIER_nondet_memory(&ref_tmp2226, sizeof(ref_tmp2226));
                                                }
                                              {
                                                // externalized std:: op: std::allocator<char>::~allocator()
                                                __VERIFIER_nondet_memory(&ref_tmp2125, sizeof(ref_tmp2125));
                                              }
                                            {
                                              // externalized std:: op: std::allocator<char>::~allocator()
                                              __VERIFIER_nondet_memory(&ref_tmp2024, sizeof(ref_tmp2024));
                                            }
                                          {
                                            // externalized std:: op: std::allocator<char>::~allocator()
                                            __VERIFIER_nondet_memory(&ref_tmp1923, sizeof(ref_tmp1923));
                                          }
                                        {
                                          // externalized std:: op: std::allocator<char>::~allocator()
                                          __VERIFIER_nondet_memory(&ref_tmp1822, sizeof(ref_tmp1822));
                                        }
                                      {
                                        // externalized std:: op: std::allocator<char>::~allocator()
                                        __VERIFIER_nondet_memory(&ref_tmp1721, sizeof(ref_tmp1721));
                                      }
                                    {
                                      // externalized std:: op: std::allocator<char>::~allocator()
                                      __VERIFIER_nondet_memory(&ref_tmp1620, sizeof(ref_tmp1620));
                                    }
                                  {
                                    // externalized std:: op: std::allocator<char>::~allocator()
                                    __VERIFIER_nondet_memory(&ref_tmp1519, sizeof(ref_tmp1519));
                                  }
                                {
                                  // externalized std:: op: std::allocator<char>::~allocator()
                                  __VERIFIER_nondet_memory(&ref_tmp1418, sizeof(ref_tmp1418));
                                }
                              {
                                // externalized std:: op: std::allocator<char>::~allocator()
                                __VERIFIER_nondet_memory(&ref_tmp1317, sizeof(ref_tmp1317));
                              }
                            {
                              // externalized std:: op: std::allocator<char>::~allocator()
                              __VERIFIER_nondet_memory(&ref_tmp1216, sizeof(ref_tmp1216));
                            }
                          {
                            // externalized std:: op: std::allocator<char>::~allocator()
                            __VERIFIER_nondet_memory(&ref_tmp1115, sizeof(ref_tmp1115));
                          }
                        {
                          // externalized std:: op: std::allocator<char>::~allocator()
                          __VERIFIER_nondet_memory(&ref_tmp1014, sizeof(ref_tmp1014));
                        }
                      {
                        // externalized std:: op: std::allocator<char>::~allocator()
                        __VERIFIER_nondet_memory(&ref_tmp913, sizeof(ref_tmp913));
                      }
                    {
                      // externalized std:: op: std::allocator<char>::~allocator()
                      __VERIFIER_nondet_memory(&ref_tmp812, sizeof(ref_tmp812));
                    }
                  {
                    // externalized std:: op: std::allocator<char>::~allocator()
                    __VERIFIER_nondet_memory(&ref_tmp711, sizeof(ref_tmp711));
                  }
                {
                  // externalized std:: op: std::allocator<char>::~allocator()
                  __VERIFIER_nondet_memory(&ref_tmp610, sizeof(ref_tmp610));
                }
              {
                // externalized std:: op: std::allocator<char>::~allocator()
                __VERIFIER_nondet_memory(&ref_tmp59, sizeof(ref_tmp59));
              }
            {
              // externalized std:: op: std::allocator<char>::~allocator()
              __VERIFIER_nondet_memory(&ref_tmp48, sizeof(ref_tmp48));
            }
          {
            // externalized std:: op: std::allocator<char>::~allocator()
            __VERIFIER_nondet_memory(&ref_tmp37, sizeof(ref_tmp37));
          }
        {
          // externalized std:: op: std::allocator<char>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp26, sizeof(ref_tmp26));
        }
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
      }
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    }
    char* cast101 = (char*)&(_str_24);
    struct std__basic_ostream_char__std__char_traits_char__* std102;
    __VERIFIER_nondet_memory(&std102, sizeof(std102));
    char* cast103 = (char*)&(_str_25);
    struct std__basic_ostream_char__std__char_traits_char__* std104;
    __VERIFIER_nondet_memory(&std104, sizeof(std104));
    char* cast105 = (char*)&(_str_26);
    struct std__basic_ostream_char__std__char_traits_char__* std106;
    __VERIFIER_nondet_memory(&std106, sizeof(std106));
    char* cast107 = (char*)&(_str_27);
    struct std__basic_ostream_char__std__char_traits_char__* std108;
    __VERIFIER_nondet_memory(&std108, sizeof(std108));
    char* cast109 = (char*)&(_str_28);
    struct std__basic_ostream_char__std__char_traits_char__* std110;
    __VERIFIER_nondet_memory(&std110, sizeof(std110));
    char* cast111 = (char*)&(_str_29);
    struct std__basic_ostream_char__std__char_traits_char__* std112;
    __VERIFIER_nondet_memory(&std112, sizeof(std112));
    char* cast113 = (char*)&(_str_30);
    struct std__basic_ostream_char__std__char_traits_char__* std114;
    __VERIFIER_nondet_memory(&std114, sizeof(std114));
    char* cast115 = (char*)&(_str_31);
    struct std__basic_ostream_char__std__char_traits_char__* std116;
    __VERIFIER_nondet_memory(&std116, sizeof(std116));
    char* cast117 = (char*)&(_str_32);
    struct std__basic_ostream_char__std__char_traits_char__* std118;
    __VERIFIER_nondet_memory(&std118, sizeof(std118));
      int i119;
      int c120 = 0;
      i119 = c120;
      while (1) {
        int t122 = i119;
        int c123 = 24;
        _Bool c124 = ((t122 < c123)) ? 1 : 0;
        if (!c124) break;
        char* cast125 = (char*)&(_str_33);
        struct std__basic_ostream_char__std__char_traits_char__* std126;
        __VERIFIER_nondet_memory(&std126, sizeof(std126));
        int t127 = i119;
        long cast128 = (long)t127;
        struct std__basic_ostream_char__std__char_traits_char__* std129;
        __VERIFIER_nondet_memory(&std129, sizeof(std129));
        char* cast130 = (char*)&(_str_34);
        struct std__basic_ostream_char__std__char_traits_char__* std131;
        __VERIFIER_nondet_memory(&std131, sizeof(std131));
        int t132 = i119;
        long cast133 = (long)t132;
        char* std134;
        __VERIFIER_nondet_memory(&std134, sizeof(std134));
        char* r135 = getenv(std134);
        struct std__basic_ostream_char__std__char_traits_char__* std136;
        __VERIFIER_nondet_memory(&std136, sizeof(std136));
        char* cast137 = (char*)&(_str_35);
        struct std__basic_ostream_char__std__char_traits_char__* std138;
        __VERIFIER_nondet_memory(&std138, sizeof(std138));
      for_step121: ;
        int t139 = i119;
        int u140 = t139 + 1;
        i119 = u140;
      }
    char* cast141 = (char*)&(_str_36);
    struct std__basic_ostream_char__std__char_traits_char__* std142;
    __VERIFIER_nondet_memory(&std142, sizeof(std142));
    int c143 = 0;
    __retval1 = c143;
    int t144 = __retval1;
    int ret_val145 = t144;
    {
      unsigned long c146 = 24;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* cast147 = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)&(environmentVariables2);
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr148 = &(cast147)[c146];
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __array_idx149;
      __array_idx149 = ptr148;
      do {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t150 = __array_idx149;
        long c151 = -1;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* ptr152 = &(t150)[c151];
        __array_idx149 = ptr152;
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(ptr152, sizeof(*ptr152));
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t153 = __array_idx149;
        _Bool c154 = ((t153 != cast147)) ? 1 : 0;
        if (!c154) break;
      } while (1);
    }
    return ret_val145;
  int t155 = __retval1;
  return t155;
}

