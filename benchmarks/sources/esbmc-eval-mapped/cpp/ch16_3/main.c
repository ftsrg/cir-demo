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
char _str[13] = "QUERY_STRING";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[26] = "Content-type: text/html\n\n";
char _str_2[24] = "<?xml version = \"1.0\"?>";
char _str_3[46] = "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 ";
char _str_4[47] = "Transitional//EN\" \"http://www.w3.org/TR/xhtml1";
char _str_5[31] = "/DTD/xhtml1-transitional.dtd\">";
char _str_6[46] = "<html xmlns = \"http://www.w3.org/1999/xhtml\">";
char _str_7[45] = "<head><title>Name/Value Pairs</title></head>";
char _str_8[7] = "<body>";
char _str_9[26] = "<h2>Name/Value Pairs</h2>";
char _str_10[1];
char _str_11[45] = "Please add some name-value pairs to the URL ";
char _str_12[19] = "above.<br/>Or try ";
char _str_13[43] = "<a href=\"querystring.cgi?name=Joe&age=29\">";
char _str_14[10] = "this</a>.";
char _str_15[25] = "<p>The query string is: ";
char _str_16[5] = "</p>";
char _str_17[15] = "</body></html>";
char _str_18[50] = "basic_string: construction from null is not valid";
char _str_19[24] = "basic_string::_M_create";
extern char* getenv(char* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ query2;
  struct std__allocator_char_ ref_tmp03;
  int c4 = 0;
  __retval1 = c4;
  char* cast5 = (char*)&(_str);
  char* r6 = getenv(cast5);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&query2, sizeof(query2));
    __VERIFIER_nondet_memory(r6, sizeof(*r6));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    char* cast7 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std8;
    __VERIFIER_nondet_memory(&std8, sizeof(std8));
    char* cast9 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std10;
    __VERIFIER_nondet_memory(&std10, sizeof(std10));
    char* cast11 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std12;
    __VERIFIER_nondet_memory(&std12, sizeof(std12));
    char* cast13 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std14;
    __VERIFIER_nondet_memory(&std14, sizeof(std14));
    char* cast15 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* std16;
    __VERIFIER_nondet_memory(&std16, sizeof(std16));
    char* cast17 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* std18;
    __VERIFIER_nondet_memory(&std18, sizeof(std18));
    char* cast19 = (char*)&(_str_7);
    struct std__basic_ostream_char__std__char_traits_char__* std20;
    __VERIFIER_nondet_memory(&std20, sizeof(std20));
    char* cast21 = (char*)&(_str_8);
    struct std__basic_ostream_char__std__char_traits_char__* std22;
    __VERIFIER_nondet_memory(&std22, sizeof(std22));
    char* cast23 = (char*)&(_str_9);
    struct std__basic_ostream_char__std__char_traits_char__* std24;
    __VERIFIER_nondet_memory(&std24, sizeof(std24));
      char* cast25 = (char*)&(_str_10);
      _Bool std26;
      __VERIFIER_nondet_memory(&std26, sizeof(std26));
      if (std26) {
        char* cast27 = (char*)&(_str_11);
        struct std__basic_ostream_char__std__char_traits_char__* std28;
        __VERIFIER_nondet_memory(&std28, sizeof(std28));
        char* cast29 = (char*)&(_str_12);
        struct std__basic_ostream_char__std__char_traits_char__* std30;
        __VERIFIER_nondet_memory(&std30, sizeof(std30));
        char* cast31 = (char*)&(_str_13);
        struct std__basic_ostream_char__std__char_traits_char__* std32;
        __VERIFIER_nondet_memory(&std32, sizeof(std32));
        char* cast33 = (char*)&(_str_14);
        struct std__basic_ostream_char__std__char_traits_char__* std34;
        __VERIFIER_nondet_memory(&std34, sizeof(std34));
      } else {
        char* cast35 = (char*)&(_str_15);
        struct std__basic_ostream_char__std__char_traits_char__* std36;
        __VERIFIER_nondet_memory(&std36, sizeof(std36));
        struct std__basic_ostream_char__std__char_traits_char__* std37;
        __VERIFIER_nondet_memory(&std37, sizeof(std37));
        char* cast38 = (char*)&(_str_16);
        struct std__basic_ostream_char__std__char_traits_char__* std39;
        __VERIFIER_nondet_memory(&std39, sizeof(std39));
      }
    char* cast40 = (char*)&(_str_17);
    struct std__basic_ostream_char__std__char_traits_char__* std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
    int c42 = 0;
    __retval1 = c42;
    int t43 = __retval1;
    int ret_val44 = t43;
    {
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
      __VERIFIER_nondet_memory(&query2, sizeof(query2));
    }
    return ret_val44;
  int t45 = __retval1;
  return t45;
}

