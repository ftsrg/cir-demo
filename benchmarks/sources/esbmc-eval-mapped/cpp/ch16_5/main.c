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
struct std__less_const_char___ { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_istream_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

char __const_main_postString[1024];
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[1];
char _str_1[15] = "CONTENT_LENGTH";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[26] = "Content-type: text/html\n\n";
char _str_3[24] = "<?xml version = \"1.0\"?>";
char _str_4[46] = "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 ";
char _str_5[47] = "Transitional//EN\" \"http://www.w3.org/TR/xhtml1";
char _str_6[31] = "/DTD/xhtml1-transitional.dtd\">";
char _str_7[46] = "<html xmlns = \"http://www.w3.org/1999/xhtml\">";
char _str_8[50] = "<head><title>Using POST with Forms</title></head>";
char _str_9[7] = "<body>";
char _str_10[46] = "<p>Enter one of your favorite words here:</p>";
char _str_11[43] = "<form method = \"post\" action = \"post.cgi\">";
char _str_12[38] = "<input type = \"text\" name = \"word\" />";
char _str_13[48] = "<input type = \"submit\" value = \"Submit Word\" />";
char _str_14[8] = "</form>";
char _str_15[6] = "word=";
char _str_16[2] = "&";
char _str_17[28] = "<p>Please enter a word.</p>";
char _str_18[18] = "<p>Your word is: ";
char _str_19[5] = "</p>";
char _str_20[15] = "</body></html>";
char _str_21[50] = "basic_string: construction from null is not valid";
char _str_22[24] = "basic_string::_M_create";
char _str_23[25] = "basic_string::_M_replace";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
char _str_24[21] = "basic_string::substr";
char _str_25[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_26[27] = "basic_string::basic_string";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
extern char* getenv(char* p0);
extern int atoi(char* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  char postString2[1024];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ dataString3;
  struct std__allocator_char_ ref_tmp04;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ nameString5;
  struct std__allocator_char_ ref_tmp16;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ wordString7;
  struct std__allocator_char_ ref_tmp28;
  int contentLength9;
  int c10 = 0;
  __retval1 = c10;
  // array copy
  __builtin_memcpy(postString2, __const_main_postString, (unsigned long)1024 * sizeof(__const_main_postString[0]));
  char* cast11 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&dataString3, sizeof(dataString3));
    __VERIFIER_nondet_memory(cast11, sizeof(*cast11));
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
  }
    char* cast12 = (char*)&(_str);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&nameString5, sizeof(nameString5));
      __VERIFIER_nondet_memory(cast12, sizeof(*cast12));
      __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
    }
      char* cast13 = (char*)&(_str);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp28, sizeof(ref_tmp28));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&wordString7, sizeof(wordString7));
        __VERIFIER_nondet_memory(cast13, sizeof(*cast13));
        __VERIFIER_nondet_memory(&ref_tmp28, sizeof(ref_tmp28));
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp28, sizeof(ref_tmp28));
      }
        int c14 = 0;
        contentLength9 = c14;
          char* cast15 = (char*)&(_str_1);
          char* r16 = getenv(cast15);
          _Bool cast17 = (_Bool)r16;
          if (cast17) {
            char* cast18 = (char*)&(_str_1);
            char* r19 = getenv(cast18);
            int r20 = atoi(r19);
            contentLength9 = r20;
          }
        char* cast21 = (char*)&(postString2);
        int t22 = contentLength9;
        long cast23 = (long)t22;
        struct std__basic_istream_char__std__char_traits_char__* std24;
        __VERIFIER_nondet_memory(&std24, sizeof(std24));
        char* cast25 = (char*)&(postString2);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std26;
        __VERIFIER_nondet_memory(&std26, sizeof(std26));
        char* cast27 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* std28;
        __VERIFIER_nondet_memory(&std28, sizeof(std28));
        char* cast29 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std30;
        __VERIFIER_nondet_memory(&std30, sizeof(std30));
        char* cast31 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* std32;
        __VERIFIER_nondet_memory(&std32, sizeof(std32));
        char* cast33 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* std34;
        __VERIFIER_nondet_memory(&std34, sizeof(std34));
        char* cast35 = (char*)&(_str_6);
        struct std__basic_ostream_char__std__char_traits_char__* std36;
        __VERIFIER_nondet_memory(&std36, sizeof(std36));
        char* cast37 = (char*)&(_str_7);
        struct std__basic_ostream_char__std__char_traits_char__* std38;
        __VERIFIER_nondet_memory(&std38, sizeof(std38));
        char* cast39 = (char*)&(_str_8);
        struct std__basic_ostream_char__std__char_traits_char__* std40;
        __VERIFIER_nondet_memory(&std40, sizeof(std40));
        char* cast41 = (char*)&(_str_9);
        struct std__basic_ostream_char__std__char_traits_char__* std42;
        __VERIFIER_nondet_memory(&std42, sizeof(std42));
        char* cast43 = (char*)&(_str_10);
        struct std__basic_ostream_char__std__char_traits_char__* std44;
        __VERIFIER_nondet_memory(&std44, sizeof(std44));
        char* cast45 = (char*)&(_str_11);
        struct std__basic_ostream_char__std__char_traits_char__* std46;
        __VERIFIER_nondet_memory(&std46, sizeof(std46));
        char* cast47 = (char*)&(_str_12);
        struct std__basic_ostream_char__std__char_traits_char__* std48;
        __VERIFIER_nondet_memory(&std48, sizeof(std48));
        char* cast49 = (char*)&(_str_13);
        struct std__basic_ostream_char__std__char_traits_char__* std50;
        __VERIFIER_nondet_memory(&std50, sizeof(std50));
        char* cast51 = (char*)&(_str_14);
        struct std__basic_ostream_char__std__char_traits_char__* std52;
        __VERIFIER_nondet_memory(&std52, sizeof(std52));
          int t53 = contentLength9;
          int c54 = 0;
          _Bool c55 = ((t53 > c54)) ? 1 : 0;
          if (c55) {
            int nameLocation56;
            int endLocation57;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp358;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup59;
            char* cast60 = (char*)&(_str_15);
            unsigned long c61 = 0;
            unsigned long std62 = __VERIFIER_nondet_unsigned_long();
            unsigned long c63 = 5;
            unsigned long b64 = std62 + c63;
            int cast65 = (int)b64;
            nameLocation56 = cast65;
            char* cast66 = (char*)&(_str_16);
            unsigned long c67 = 0;
            unsigned long std68 = __VERIFIER_nondet_unsigned_long();
            unsigned long c69 = 1;
            unsigned long b70 = std68 - c69;
            int cast71 = (int)b70;
            endLocation57 = cast71;
            int t72 = nameLocation56;
            unsigned long cast73 = (unsigned long)t72;
            int t74 = endLocation57;
            int t75 = nameLocation56;
            int b76 = t74 - t75;
            unsigned long cast77 = (unsigned long)b76;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std78;
            __VERIFIER_nondet_memory(&std78, sizeof(std78));
            ref_tmp358 = std78;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std79;
              __VERIFIER_nondet_memory(&std79, sizeof(std79));
              tmp_exprcleanup59 = std79;
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&ref_tmp358, sizeof(ref_tmp358));
            }
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t80 = tmp_exprcleanup59;
              char* cast81 = (char*)&(_str);
              _Bool std82;
              __VERIFIER_nondet_memory(&std82, sizeof(std82));
              if (std82) {
                char* cast83 = (char*)&(_str_17);
                struct std__basic_ostream_char__std__char_traits_char__* std84;
                __VERIFIER_nondet_memory(&std84, sizeof(std84));
              } else {
                char* cast85 = (char*)&(_str_18);
                struct std__basic_ostream_char__std__char_traits_char__* std86;
                __VERIFIER_nondet_memory(&std86, sizeof(std86));
                struct std__basic_ostream_char__std__char_traits_char__* std87;
                __VERIFIER_nondet_memory(&std87, sizeof(std87));
                char* cast88 = (char*)&(_str_19);
                struct std__basic_ostream_char__std__char_traits_char__* std89;
                __VERIFIER_nondet_memory(&std89, sizeof(std89));
              }
          } else {
            char* cast90 = (char*)&(_str_17);
            struct std__basic_ostream_char__std__char_traits_char__* std91;
            __VERIFIER_nondet_memory(&std91, sizeof(std91));
          }
        char* cast92 = (char*)&(_str_20);
        struct std__basic_ostream_char__std__char_traits_char__* std93;
        __VERIFIER_nondet_memory(&std93, sizeof(std93));
        int c94 = 0;
        __retval1 = c94;
        int t95 = __retval1;
        int ret_val96 = t95;
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&wordString7, sizeof(wordString7));
        }
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&nameString5, sizeof(nameString5));
        }
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&dataString3, sizeof(dataString3));
        }
        return ret_val96;
  int t97 = __retval1;
  return t97;
}

