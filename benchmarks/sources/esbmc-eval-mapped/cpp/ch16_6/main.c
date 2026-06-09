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
char _str_2[9] = "namebox=";
char _str_3[2] = "&";
char _str_4[13] = "passwordbox=";
char _str_5[8] = "&button";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_6[26] = "Content-type: text/html\n\n";
char _str_7[24] = "<?xml version = \"1.0\"?>";
char _str_8[46] = "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 ";
char _str_9[47] = "Transitional//EN\" \"http://www.w3.org/TR/xhtml1";
char _str_10[31] = "/DTD/xhtml1-transitional.dtd\">";
char _str_11[46] = "<html xmlns = \"http://www.w3.org/1999/xhtml\">";
char _str_12[43] = "<head><title>Bug2Bug Travel</title></head>";
char _str_13[7] = "<body>";
char _str_14[13] = "<h1>Welcome ";
char _str_15[7] = "!</h1>";
char _str_16[37] = "<p>Here are our weekly specials:</p>";
char _str_17[37] = "<ul><li>Boston to Taiwan ($875)</li>";
char _str_18[39] = "<li>San Diego to Hong Kong ($750)</li>";
char _str_19[44] = "<li>Chicago to Mexico City ($568)</li></ul>";
char _str_20[12] = "coast2coast";
char _str_21[34] = "<hr /><p>Current member special: ";
char _str_22[28] = "Seattle to Tokyo ($400)</p>";
char _str_23[41] = "<p>Sorry. You have entered an incorrect ";
char _str_24[13] = "password</p>";
char _str_25[15] = "</body></html>";
char _str_26[50] = "basic_string: construction from null is not valid";
char _str_27[24] = "basic_string::_M_create";
char _str_28[25] = "basic_string::_M_replace";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
char _str_29[21] = "basic_string::substr";
char _str_30[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_31[27] = "basic_string::basic_string";
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
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ passwordString7;
  struct std__allocator_char_ ref_tmp28;
  int contentLength9;
  int namelocation10;
  int endNamelocation11;
  int password12;
  int endPassword13;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp314;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup15;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp416;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup17;
  int c18 = 0;
  __retval1 = c18;
  // array copy
  __builtin_memcpy(postString2, __const_main_postString, (unsigned long)1024 * sizeof(__const_main_postString[0]));
  char* cast19 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&dataString3, sizeof(dataString3));
    __VERIFIER_nondet_memory(cast19, sizeof(*cast19));
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
  }
    char* cast20 = (char*)&(_str);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&nameString5, sizeof(nameString5));
      __VERIFIER_nondet_memory(cast20, sizeof(*cast20));
      __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
    }
      char* cast21 = (char*)&(_str);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp28, sizeof(ref_tmp28));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&passwordString7, sizeof(passwordString7));
        __VERIFIER_nondet_memory(cast21, sizeof(*cast21));
        __VERIFIER_nondet_memory(&ref_tmp28, sizeof(ref_tmp28));
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp28, sizeof(ref_tmp28));
      }
        int c22 = 0;
        contentLength9 = c22;
          char* cast23 = (char*)&(_str_1);
          char* r24 = getenv(cast23);
          _Bool cast25 = (_Bool)r24;
          if (cast25) {
            char* cast26 = (char*)&(_str_1);
            char* r27 = getenv(cast26);
            int r28 = atoi(r27);
            contentLength9 = r28;
          }
        char* cast29 = (char*)&(postString2);
        int t30 = contentLength9;
        long cast31 = (long)t30;
        struct std__basic_istream_char__std__char_traits_char__* std32;
        __VERIFIER_nondet_memory(&std32, sizeof(std32));
        char* cast33 = (char*)&(postString2);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std34;
        __VERIFIER_nondet_memory(&std34, sizeof(std34));
        char* cast35 = (char*)&(_str_2);
        unsigned long c36 = 0;
        unsigned long std37 = __VERIFIER_nondet_unsigned_long();
        unsigned long c38 = 8;
        unsigned long b39 = std37 + c38;
        int cast40 = (int)b39;
        namelocation10 = cast40;
        char* cast41 = (char*)&(_str_3);
        unsigned long c42 = 0;
        unsigned long std43 = __VERIFIER_nondet_unsigned_long();
        int cast44 = (int)std43;
        endNamelocation11 = cast44;
        char* cast45 = (char*)&(_str_4);
        unsigned long c46 = 0;
        unsigned long std47 = __VERIFIER_nondet_unsigned_long();
        unsigned long c48 = 12;
        unsigned long b49 = std47 + c48;
        int cast50 = (int)b49;
        password12 = cast50;
        char* cast51 = (char*)&(_str_5);
        unsigned long c52 = 0;
        unsigned long std53 = __VERIFIER_nondet_unsigned_long();
        int cast54 = (int)std53;
        endPassword13 = cast54;
        int t55 = namelocation10;
        unsigned long cast56 = (unsigned long)t55;
        int t57 = endNamelocation11;
        int t58 = namelocation10;
        int b59 = t57 - t58;
        unsigned long cast60 = (unsigned long)b59;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std61;
        __VERIFIER_nondet_memory(&std61, sizeof(std61));
        ref_tmp314 = std61;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std62;
          __VERIFIER_nondet_memory(&std62, sizeof(std62));
          tmp_exprcleanup15 = std62;
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&ref_tmp314, sizeof(ref_tmp314));
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t63 = tmp_exprcleanup15;
        int t64 = password12;
        unsigned long cast65 = (unsigned long)t64;
        int t66 = endPassword13;
        int t67 = password12;
        int b68 = t66 - t67;
        unsigned long cast69 = (unsigned long)b68;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std70;
        __VERIFIER_nondet_memory(&std70, sizeof(std70));
        ref_tmp416 = std70;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std71;
          __VERIFIER_nondet_memory(&std71, sizeof(std71));
          tmp_exprcleanup17 = std71;
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&ref_tmp416, sizeof(ref_tmp416));
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t72 = tmp_exprcleanup17;
        char* cast73 = (char*)&(_str_6);
        struct std__basic_ostream_char__std__char_traits_char__* std74;
        __VERIFIER_nondet_memory(&std74, sizeof(std74));
        char* cast75 = (char*)&(_str_7);
        struct std__basic_ostream_char__std__char_traits_char__* std76;
        __VERIFIER_nondet_memory(&std76, sizeof(std76));
        char* cast77 = (char*)&(_str_8);
        struct std__basic_ostream_char__std__char_traits_char__* std78;
        __VERIFIER_nondet_memory(&std78, sizeof(std78));
        char* cast79 = (char*)&(_str_9);
        struct std__basic_ostream_char__std__char_traits_char__* std80;
        __VERIFIER_nondet_memory(&std80, sizeof(std80));
        char* cast81 = (char*)&(_str_10);
        struct std__basic_ostream_char__std__char_traits_char__* std82;
        __VERIFIER_nondet_memory(&std82, sizeof(std82));
        char* cast83 = (char*)&(_str_11);
        struct std__basic_ostream_char__std__char_traits_char__* std84;
        __VERIFIER_nondet_memory(&std84, sizeof(std84));
        char* cast85 = (char*)&(_str_12);
        struct std__basic_ostream_char__std__char_traits_char__* std86;
        __VERIFIER_nondet_memory(&std86, sizeof(std86));
        char* cast87 = (char*)&(_str_13);
        struct std__basic_ostream_char__std__char_traits_char__* std88;
        __VERIFIER_nondet_memory(&std88, sizeof(std88));
        char* cast89 = (char*)&(_str_14);
        struct std__basic_ostream_char__std__char_traits_char__* std90;
        __VERIFIER_nondet_memory(&std90, sizeof(std90));
        struct std__basic_ostream_char__std__char_traits_char__* std91;
        __VERIFIER_nondet_memory(&std91, sizeof(std91));
        char* cast92 = (char*)&(_str_15);
        struct std__basic_ostream_char__std__char_traits_char__* std93;
        __VERIFIER_nondet_memory(&std93, sizeof(std93));
        char* cast94 = (char*)&(_str_16);
        struct std__basic_ostream_char__std__char_traits_char__* std95;
        __VERIFIER_nondet_memory(&std95, sizeof(std95));
        char* cast96 = (char*)&(_str_17);
        struct std__basic_ostream_char__std__char_traits_char__* std97;
        __VERIFIER_nondet_memory(&std97, sizeof(std97));
        char* cast98 = (char*)&(_str_18);
        struct std__basic_ostream_char__std__char_traits_char__* std99;
        __VERIFIER_nondet_memory(&std99, sizeof(std99));
        char* cast100 = (char*)&(_str_19);
        struct std__basic_ostream_char__std__char_traits_char__* std101;
        __VERIFIER_nondet_memory(&std101, sizeof(std101));
          char* cast102 = (char*)&(_str_20);
          _Bool std103;
          __VERIFIER_nondet_memory(&std103, sizeof(std103));
          if (std103) {
            char* cast104 = (char*)&(_str_21);
            struct std__basic_ostream_char__std__char_traits_char__* std105;
            __VERIFIER_nondet_memory(&std105, sizeof(std105));
            char* cast106 = (char*)&(_str_22);
            struct std__basic_ostream_char__std__char_traits_char__* std107;
            __VERIFIER_nondet_memory(&std107, sizeof(std107));
          } else {
            char* cast108 = (char*)&(_str_23);
            struct std__basic_ostream_char__std__char_traits_char__* std109;
            __VERIFIER_nondet_memory(&std109, sizeof(std109));
            char* cast110 = (char*)&(_str_24);
            struct std__basic_ostream_char__std__char_traits_char__* std111;
            __VERIFIER_nondet_memory(&std111, sizeof(std111));
          }
        char* cast112 = (char*)&(_str_25);
        struct std__basic_ostream_char__std__char_traits_char__* std113;
        __VERIFIER_nondet_memory(&std113, sizeof(std113));
        int c114 = 0;
        __retval1 = c114;
        int t115 = __retval1;
        int ret_val116 = t115;
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&passwordString7, sizeof(passwordString7));
        }
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&nameString5, sizeof(nameString5));
        }
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&dataString3, sizeof(dataString3));
        }
        return ret_val116;
  int t117 = __retval1;
  return t117;
}

