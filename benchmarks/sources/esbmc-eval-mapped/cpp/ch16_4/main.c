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
char _str[1];
char _str_1[13] = "QUERY_STRING";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[26] = "Content-type: text/html\n\n";
char _str_3[24] = "<?xml version = \"1.0\"?>";
char _str_4[46] = "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 ";
char _str_5[47] = "Transitional//EN\" \"http://www.w3.org/TR/xhtml1";
char _str_6[31] = "/DTD/xhtml1-transitional.dtd\">";
char _str_7[46] = "<html xmlns = \"http://www.w3.org/1999/xhtml\">";
char _str_8[49] = "<head><title>Using GET with Forms</title></head>";
char _str_9[7] = "<body>";
char _str_10[46] = "<p>Enter one of your favorite words here:</p>";
char _str_11[46] = "<form method = \"get\" action = \"getquery.cgi\">";
char _str_12[37] = "<input type = \"text\" name = \"word\"/>";
char _str_13[47] = "<input type = \"submit\" value = \"Submit Word\"/>";
char _str_14[8] = "</form>";
char _str_15[28] = "<p>Please enter a word.</p>";
char _str_16[6] = "word=";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
char _str_17[18] = "<p>Your word is: ";
char _str_18[5] = "</p>";
char _str_19[15] = "</body></html>";
char _str_20[50] = "basic_string: construction from null is not valid";
char _str_21[24] = "basic_string::_M_create";
char _str_22[21] = "basic_string::substr";
char _str_23[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_24[27] = "basic_string::basic_string";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
extern char* getenv(char* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ nameString2;
  struct std__allocator_char_ ref_tmp03;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ wordString4;
  struct std__allocator_char_ ref_tmp15;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ query6;
  struct std__allocator_char_ ref_tmp27;
  int c8 = 0;
  __retval1 = c8;
  char* cast9 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&nameString2, sizeof(nameString2));
    __VERIFIER_nondet_memory(cast9, sizeof(*cast9));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    char* cast10 = (char*)&(_str);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&wordString4, sizeof(wordString4));
      __VERIFIER_nondet_memory(cast10, sizeof(*cast10));
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    }
      char* cast11 = (char*)&(_str_1);
      char* r12 = getenv(cast11);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&query6, sizeof(query6));
        __VERIFIER_nondet_memory(r12, sizeof(*r12));
        __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      }
        char* cast13 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* std14;
        __VERIFIER_nondet_memory(&std14, sizeof(std14));
        char* cast15 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std16;
        __VERIFIER_nondet_memory(&std16, sizeof(std16));
        char* cast17 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* std18;
        __VERIFIER_nondet_memory(&std18, sizeof(std18));
        char* cast19 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* std20;
        __VERIFIER_nondet_memory(&std20, sizeof(std20));
        char* cast21 = (char*)&(_str_6);
        struct std__basic_ostream_char__std__char_traits_char__* std22;
        __VERIFIER_nondet_memory(&std22, sizeof(std22));
        char* cast23 = (char*)&(_str_7);
        struct std__basic_ostream_char__std__char_traits_char__* std24;
        __VERIFIER_nondet_memory(&std24, sizeof(std24));
        char* cast25 = (char*)&(_str_8);
        struct std__basic_ostream_char__std__char_traits_char__* std26;
        __VERIFIER_nondet_memory(&std26, sizeof(std26));
        char* cast27 = (char*)&(_str_9);
        struct std__basic_ostream_char__std__char_traits_char__* std28;
        __VERIFIER_nondet_memory(&std28, sizeof(std28));
        char* cast29 = (char*)&(_str_10);
        struct std__basic_ostream_char__std__char_traits_char__* std30;
        __VERIFIER_nondet_memory(&std30, sizeof(std30));
        char* cast31 = (char*)&(_str_11);
        struct std__basic_ostream_char__std__char_traits_char__* std32;
        __VERIFIER_nondet_memory(&std32, sizeof(std32));
        char* cast33 = (char*)&(_str_12);
        struct std__basic_ostream_char__std__char_traits_char__* std34;
        __VERIFIER_nondet_memory(&std34, sizeof(std34));
        char* cast35 = (char*)&(_str_13);
        struct std__basic_ostream_char__std__char_traits_char__* std36;
        __VERIFIER_nondet_memory(&std36, sizeof(std36));
        char* cast37 = (char*)&(_str_14);
        struct std__basic_ostream_char__std__char_traits_char__* std38;
        __VERIFIER_nondet_memory(&std38, sizeof(std38));
          char* cast39 = (char*)&(_str);
          _Bool std40;
          __VERIFIER_nondet_memory(&std40, sizeof(std40));
          if (std40) {
            char* cast41 = (char*)&(_str_15);
            struct std__basic_ostream_char__std__char_traits_char__* std42;
            __VERIFIER_nondet_memory(&std42, sizeof(std42));
          } else {
            int wordLocation43;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp344;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup45;
            char* cast46 = (char*)&(_str_16);
            unsigned long c47 = 0;
            unsigned long std48 = __VERIFIER_nondet_unsigned_long();
            unsigned long c49 = 5;
            unsigned long b50 = std48 + c49;
            int cast51 = (int)b50;
            wordLocation43 = cast51;
            int t52 = wordLocation43;
            unsigned long cast53 = (unsigned long)t52;
            unsigned long t54 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std55;
            __VERIFIER_nondet_memory(&std55, sizeof(std55));
            ref_tmp344 = std55;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std56;
              __VERIFIER_nondet_memory(&std56, sizeof(std56));
              tmp_exprcleanup45 = std56;
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&ref_tmp344, sizeof(ref_tmp344));
            }
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t57 = tmp_exprcleanup45;
              char* cast58 = (char*)&(_str);
              _Bool std59;
              __VERIFIER_nondet_memory(&std59, sizeof(std59));
              if (std59) {
                char* cast60 = (char*)&(_str_15);
                struct std__basic_ostream_char__std__char_traits_char__* std61;
                __VERIFIER_nondet_memory(&std61, sizeof(std61));
              } else {
                char* cast62 = (char*)&(_str_17);
                struct std__basic_ostream_char__std__char_traits_char__* std63;
                __VERIFIER_nondet_memory(&std63, sizeof(std63));
                struct std__basic_ostream_char__std__char_traits_char__* std64;
                __VERIFIER_nondet_memory(&std64, sizeof(std64));
                char* cast65 = (char*)&(_str_18);
                struct std__basic_ostream_char__std__char_traits_char__* std66;
                __VERIFIER_nondet_memory(&std66, sizeof(std66));
              }
          }
        char* cast67 = (char*)&(_str_19);
        struct std__basic_ostream_char__std__char_traits_char__* std68;
        __VERIFIER_nondet_memory(&std68, sizeof(std68));
        int c69 = 0;
        __retval1 = c69;
        int t70 = __retval1;
        int ret_val71 = t70;
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&query6, sizeof(query6));
        }
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&wordString4, sizeof(wordString4));
        }
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&nameString2, sizeof(nameString2));
        }
        return ret_val71;
  int t72 = __retval1;
  return t72;
}

