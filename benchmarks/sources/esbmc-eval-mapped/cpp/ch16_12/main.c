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

char __const_main_query[1024];
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[1];
char _str_1[31] = "Friday, 14-MAY-04 16:00:00 GMT";
char _str_2[15] = "CONTENT_LENGTH";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_3[6] = "name=";
char _str_4[2] = "&";
char _str_5[5] = "age=";
char _str_6[7] = "&color";
char _str_7[7] = "color=";
char _str_8[8] = "&button";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_9[18] = "Set-cookie: Name=";
char _str_10[5] = "age:";
char _str_11[7] = "color:";
char _str_12[11] = "; expires=";
char _str_13[9] = "; path=\n";
char _str_14[26] = "Content-type: text/html\n\n";
char _str_15[24] = "<?xml version = \"1.0\"?>";
char _str_16[46] = "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 ";
char _str_17[47] = "Transitional//EN\" \"http://www.w3.org/TR/xhtml1";
char _str_18[31] = "/DTD/xhtml1-transitional.dtd\">";
char _str_19[46] = "<html xmlns = \"http://www.w3.org/1999/xhtml\">";
char _str_20[41] = "<head><title>Cookie Saved</title></head>";
char _str_21[7] = "<body>";
char _str_22[48] = "<p>The cookies have been set with the following";
char _str_23[11] = " data:</p>";
char _str_24[10] = "<p>Name: ";
char _str_25[10] = "<br/></p>";
char _str_26[8] = "<p>Age:";
char _str_27[10] = "<p>Color:";
char _str_28[44] = "<p>Click <a href=\"/cgi-bin/readcookie.cgi\">";
char _str_29[40] = "here</a> to read saved cookie data:</p>";
char _str_30[15] = "</body></html>";
char _str_31[50] = "basic_string: construction from null is not valid";
char _str_32[24] = "basic_string::_M_create";
char _str_33[25] = "basic_string::_M_replace";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
char _str_34[21] = "basic_string::substr";
char _str_35[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_36[27] = "basic_string::basic_string";
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
  char query2[1024];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ dataString3;
  struct std__allocator_char_ ref_tmp04;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ nameString5;
  struct std__allocator_char_ ref_tmp16;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ageString7;
  struct std__allocator_char_ ref_tmp28;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ colorString9;
  struct std__allocator_char_ ref_tmp310;
  int contentLength11;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ expires12;
  struct std__allocator_char_ ref_tmp413;
  int c14 = 0;
  __retval1 = c14;
  // array copy
  __builtin_memcpy(query2, __const_main_query, (unsigned long)1024 * sizeof(__const_main_query[0]));
  char* cast15 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&dataString3, sizeof(dataString3));
    __VERIFIER_nondet_memory(cast15, sizeof(*cast15));
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
  }
    char* cast16 = (char*)&(_str);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&nameString5, sizeof(nameString5));
      __VERIFIER_nondet_memory(cast16, sizeof(*cast16));
      __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
    }
      char* cast17 = (char*)&(_str);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp28, sizeof(ref_tmp28));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&ageString7, sizeof(ageString7));
        __VERIFIER_nondet_memory(cast17, sizeof(*cast17));
        __VERIFIER_nondet_memory(&ref_tmp28, sizeof(ref_tmp28));
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp28, sizeof(ref_tmp28));
      }
        char* cast18 = (char*)&(_str);
        // externalized std:: op: std::allocator<char>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp310, sizeof(ref_tmp310));
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
          __VERIFIER_nondet_memory(&colorString9, sizeof(colorString9));
          __VERIFIER_nondet_memory(cast18, sizeof(*cast18));
          __VERIFIER_nondet_memory(&ref_tmp310, sizeof(ref_tmp310));
        {
          // externalized std:: op: std::allocator<char>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp310, sizeof(ref_tmp310));
        }
          int c19 = 0;
          contentLength11 = c19;
          char* cast20 = (char*)&(_str_1);
          // externalized std:: op: std::allocator<char>::allocator()
          __VERIFIER_nondet_memory(&ref_tmp413, sizeof(ref_tmp413));
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
            __VERIFIER_nondet_memory(&expires12, sizeof(expires12));
            __VERIFIER_nondet_memory(cast20, sizeof(*cast20));
            __VERIFIER_nondet_memory(&ref_tmp413, sizeof(ref_tmp413));
          {
            // externalized std:: op: std::allocator<char>::~allocator()
            __VERIFIER_nondet_memory(&ref_tmp413, sizeof(ref_tmp413));
          }
              char* cast21 = (char*)&(_str_2);
              char* r22 = getenv(cast21);
              _Bool cast23 = (_Bool)r22;
              if (cast23) {
                int nameLocation24;
                int endName25;
                int ageLocation26;
                int endAge27;
                int colorLocation28;
                int endColor29;
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp530;
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup31;
                char* cast32 = (char*)&(_str_2);
                char* r33 = getenv(cast32);
                int r34 = atoi(r33);
                contentLength11 = r34;
                char* cast35 = (char*)&(query2);
                int t36 = contentLength11;
                long cast37 = (long)t36;
                struct std__basic_istream_char__std__char_traits_char__* std38;
                __VERIFIER_nondet_memory(&std38, sizeof(std38));
                char* cast39 = (char*)&(query2);
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std40;
                __VERIFIER_nondet_memory(&std40, sizeof(std40));
                char* cast41 = (char*)&(_str_3);
                unsigned long c42 = 0;
                unsigned long std43 = __VERIFIER_nondet_unsigned_long();
                unsigned long c44 = 5;
                unsigned long b45 = std43 + c44;
                int cast46 = (int)b45;
                nameLocation24 = cast46;
                char* cast47 = (char*)&(_str_4);
                unsigned long c48 = 0;
                unsigned long std49 = __VERIFIER_nondet_unsigned_long();
                int cast50 = (int)std49;
                endName25 = cast50;
                char* cast51 = (char*)&(_str_5);
                unsigned long c52 = 0;
                unsigned long std53 = __VERIFIER_nondet_unsigned_long();
                unsigned long c54 = 4;
                unsigned long b55 = std53 + c54;
                int cast56 = (int)b55;
                ageLocation26 = cast56;
                char* cast57 = (char*)&(_str_6);
                unsigned long c58 = 0;
                unsigned long std59 = __VERIFIER_nondet_unsigned_long();
                int cast60 = (int)std59;
                endAge27 = cast60;
                char* cast61 = (char*)&(_str_7);
                unsigned long c62 = 0;
                unsigned long std63 = __VERIFIER_nondet_unsigned_long();
                unsigned long c64 = 6;
                unsigned long b65 = std63 + c64;
                int cast66 = (int)b65;
                colorLocation28 = cast66;
                char* cast67 = (char*)&(_str_8);
                unsigned long c68 = 0;
                unsigned long std69 = __VERIFIER_nondet_unsigned_long();
                int cast70 = (int)std69;
                endColor29 = cast70;
                int t71 = nameLocation24;
                unsigned long cast72 = (unsigned long)t71;
                int t73 = endName25;
                int t74 = nameLocation24;
                int b75 = t73 - t74;
                unsigned long cast76 = (unsigned long)b75;
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std77;
                __VERIFIER_nondet_memory(&std77, sizeof(std77));
                ref_tmp530 = std77;
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std78;
                  __VERIFIER_nondet_memory(&std78, sizeof(std78));
                  tmp_exprcleanup31 = std78;
                {
                  // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                  __VERIFIER_nondet_memory(&ref_tmp530, sizeof(ref_tmp530));
                }
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t79 = tmp_exprcleanup31;
                  int t80 = ageLocation26;
                  int c81 = 0;
                  _Bool c82 = ((t80 > c81)) ? 1 : 0;
                  if (c82) {
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp683;
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup84;
                    int t85 = ageLocation26;
                    unsigned long cast86 = (unsigned long)t85;
                    int t87 = endAge27;
                    int t88 = ageLocation26;
                    int b89 = t87 - t88;
                    unsigned long cast90 = (unsigned long)b89;
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std91;
                    __VERIFIER_nondet_memory(&std91, sizeof(std91));
                    ref_tmp683 = std91;
                      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std92;
                      __VERIFIER_nondet_memory(&std92, sizeof(std92));
                      tmp_exprcleanup84 = std92;
                    {
                      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                      __VERIFIER_nondet_memory(&ref_tmp683, sizeof(ref_tmp683));
                    }
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t93 = tmp_exprcleanup84;
                  }
                  int t94 = colorLocation28;
                  int c95 = 0;
                  _Bool c96 = ((t94 > c95)) ? 1 : 0;
                  if (c96) {
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp797;
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup98;
                    int t99 = colorLocation28;
                    unsigned long cast100 = (unsigned long)t99;
                    int t101 = endColor29;
                    int t102 = colorLocation28;
                    int b103 = t101 - t102;
                    unsigned long cast104 = (unsigned long)b103;
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std105;
                    __VERIFIER_nondet_memory(&std105, sizeof(std105));
                    ref_tmp797 = std105;
                      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std106;
                      __VERIFIER_nondet_memory(&std106, sizeof(std106));
                      tmp_exprcleanup98 = std106;
                    {
                      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                      __VERIFIER_nondet_memory(&ref_tmp797, sizeof(ref_tmp797));
                    }
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t107 = tmp_exprcleanup98;
                  }
                char* cast108 = (char*)&(_str_9);
                struct std__basic_ostream_char__std__char_traits_char__* std109;
                __VERIFIER_nondet_memory(&std109, sizeof(std109));
                struct std__basic_ostream_char__std__char_traits_char__* std110;
                __VERIFIER_nondet_memory(&std110, sizeof(std110));
                char* cast111 = (char*)&(_str_10);
                struct std__basic_ostream_char__std__char_traits_char__* std112;
                __VERIFIER_nondet_memory(&std112, sizeof(std112));
                struct std__basic_ostream_char__std__char_traits_char__* std113;
                __VERIFIER_nondet_memory(&std113, sizeof(std113));
                char* cast114 = (char*)&(_str_11);
                struct std__basic_ostream_char__std__char_traits_char__* std115;
                __VERIFIER_nondet_memory(&std115, sizeof(std115));
                struct std__basic_ostream_char__std__char_traits_char__* std116;
                __VERIFIER_nondet_memory(&std116, sizeof(std116));
                char* cast117 = (char*)&(_str_12);
                struct std__basic_ostream_char__std__char_traits_char__* std118;
                __VERIFIER_nondet_memory(&std118, sizeof(std118));
                struct std__basic_ostream_char__std__char_traits_char__* std119;
                __VERIFIER_nondet_memory(&std119, sizeof(std119));
                char* cast120 = (char*)&(_str_13);
                struct std__basic_ostream_char__std__char_traits_char__* std121;
                __VERIFIER_nondet_memory(&std121, sizeof(std121));
              }
            char* cast122 = (char*)&(_str_14);
            struct std__basic_ostream_char__std__char_traits_char__* std123;
            __VERIFIER_nondet_memory(&std123, sizeof(std123));
            char* cast124 = (char*)&(_str_15);
            struct std__basic_ostream_char__std__char_traits_char__* std125;
            __VERIFIER_nondet_memory(&std125, sizeof(std125));
            char* cast126 = (char*)&(_str_16);
            struct std__basic_ostream_char__std__char_traits_char__* std127;
            __VERIFIER_nondet_memory(&std127, sizeof(std127));
            char* cast128 = (char*)&(_str_17);
            struct std__basic_ostream_char__std__char_traits_char__* std129;
            __VERIFIER_nondet_memory(&std129, sizeof(std129));
            char* cast130 = (char*)&(_str_18);
            struct std__basic_ostream_char__std__char_traits_char__* std131;
            __VERIFIER_nondet_memory(&std131, sizeof(std131));
            char* cast132 = (char*)&(_str_19);
            struct std__basic_ostream_char__std__char_traits_char__* std133;
            __VERIFIER_nondet_memory(&std133, sizeof(std133));
            char* cast134 = (char*)&(_str_20);
            struct std__basic_ostream_char__std__char_traits_char__* std135;
            __VERIFIER_nondet_memory(&std135, sizeof(std135));
            char* cast136 = (char*)&(_str_21);
            struct std__basic_ostream_char__std__char_traits_char__* std137;
            __VERIFIER_nondet_memory(&std137, sizeof(std137));
            char* cast138 = (char*)&(_str_22);
            struct std__basic_ostream_char__std__char_traits_char__* std139;
            __VERIFIER_nondet_memory(&std139, sizeof(std139));
            char* cast140 = (char*)&(_str_23);
            struct std__basic_ostream_char__std__char_traits_char__* std141;
            __VERIFIER_nondet_memory(&std141, sizeof(std141));
            char* cast142 = (char*)&(_str_24);
            struct std__basic_ostream_char__std__char_traits_char__* std143;
            __VERIFIER_nondet_memory(&std143, sizeof(std143));
            struct std__basic_ostream_char__std__char_traits_char__* std144;
            __VERIFIER_nondet_memory(&std144, sizeof(std144));
            char* cast145 = (char*)&(_str_25);
            struct std__basic_ostream_char__std__char_traits_char__* std146;
            __VERIFIER_nondet_memory(&std146, sizeof(std146));
            char* cast147 = (char*)&(_str_26);
            struct std__basic_ostream_char__std__char_traits_char__* std148;
            __VERIFIER_nondet_memory(&std148, sizeof(std148));
            struct std__basic_ostream_char__std__char_traits_char__* std149;
            __VERIFIER_nondet_memory(&std149, sizeof(std149));
            char* cast150 = (char*)&(_str_25);
            struct std__basic_ostream_char__std__char_traits_char__* std151;
            __VERIFIER_nondet_memory(&std151, sizeof(std151));
            char* cast152 = (char*)&(_str_27);
            struct std__basic_ostream_char__std__char_traits_char__* std153;
            __VERIFIER_nondet_memory(&std153, sizeof(std153));
            struct std__basic_ostream_char__std__char_traits_char__* std154;
            __VERIFIER_nondet_memory(&std154, sizeof(std154));
            char* cast155 = (char*)&(_str_25);
            struct std__basic_ostream_char__std__char_traits_char__* std156;
            __VERIFIER_nondet_memory(&std156, sizeof(std156));
            char* cast157 = (char*)&(_str_28);
            struct std__basic_ostream_char__std__char_traits_char__* std158;
            __VERIFIER_nondet_memory(&std158, sizeof(std158));
            char* cast159 = (char*)&(_str_29);
            struct std__basic_ostream_char__std__char_traits_char__* std160;
            __VERIFIER_nondet_memory(&std160, sizeof(std160));
            char* cast161 = (char*)&(_str_30);
            struct std__basic_ostream_char__std__char_traits_char__* std162;
            __VERIFIER_nondet_memory(&std162, sizeof(std162));
            int c163 = 0;
            __retval1 = c163;
            int t164 = __retval1;
            int ret_val165 = t164;
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&expires12, sizeof(expires12));
            }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&colorString9, sizeof(colorString9));
            }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&ageString7, sizeof(ageString7));
            }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&nameString5, sizeof(nameString5));
            }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&dataString3, sizeof(dataString3));
            }
            return ret_val165;
  int t166 = __retval1;
  return t166;
}

