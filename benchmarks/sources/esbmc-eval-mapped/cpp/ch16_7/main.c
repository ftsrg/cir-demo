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
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[1];
char _str_1[12] = "HTTP_COOKIE";
char _str_2[6] = "Name=";
char _str_3[5] = "age:";
char _str_4[7] = "color:";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[26] = "Content-Type: text/html\n\n";
char _str_6[24] = "<?xml version = \"1.0\"?>";
char _str_7[46] = "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 ";
char _str_8[47] = "Transitional//EN\" \"http://www.w3.org/TR/xhtml1";
char _str_9[31] = "/DTD/xhtml1-transitional.dtd\">";
char _str_10[46] = "<html xmlns = \"http://www.w3.org/1999/xhtml\">";
char _str_11[41] = "<head><title>Read Cookies</title></head>";
char _str_12[7] = "<body>";
char _str_13[47] = "<h3>The following data is saved in a cookie on";
char _str_14[20] = " your computer</h3>";
char _str_15[10] = "<p>Name: ";
char _str_16[10] = "<br/></p>";
char _str_17[9] = "<p>Age: ";
char _str_18[11] = "<p>Color: ";
char _str_19[23] = "<p>No cookie data.</p>";
char _str_20[15] = "</body></html>";
char _str_21[50] = "basic_string: construction from null is not valid";
char _str_22[24] = "basic_string::_M_create";
char _str_23[25] = "basic_string::_M_replace";
char _str_24[21] = "basic_string::substr";
char _str_25[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_26[27] = "basic_string::basic_string";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
extern char* getenv(char* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ dataString2;
  struct std__allocator_char_ ref_tmp03;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ nameString4;
  struct std__allocator_char_ ref_tmp15;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ageString6;
  struct std__allocator_char_ ref_tmp27;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ colorString8;
  struct std__allocator_char_ ref_tmp39;
  int nameLocation10;
  int endName11;
  int ageLocation12;
  int endAge13;
  int colorLocation14;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp415;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup16;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp517;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup18;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp619;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup20;
  int c21 = 0;
  __retval1 = c21;
  char* cast22 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&dataString2, sizeof(dataString2));
    __VERIFIER_nondet_memory(cast22, sizeof(*cast22));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    char* cast23 = (char*)&(_str);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&nameString4, sizeof(nameString4));
      __VERIFIER_nondet_memory(cast23, sizeof(*cast23));
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    }
      char* cast24 = (char*)&(_str);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&ageString6, sizeof(ageString6));
        __VERIFIER_nondet_memory(cast24, sizeof(*cast24));
        __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      }
        char* cast25 = (char*)&(_str);
        // externalized std:: op: std::allocator<char>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
          __VERIFIER_nondet_memory(&colorString8, sizeof(colorString8));
          __VERIFIER_nondet_memory(cast25, sizeof(*cast25));
          __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
        {
          // externalized std:: op: std::allocator<char>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
        }
          char* cast26 = (char*)&(_str_1);
          char* r27 = getenv(cast26);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std28;
          __VERIFIER_nondet_memory(&std28, sizeof(std28));
          char* cast29 = (char*)&(_str_2);
          unsigned long c30 = 0;
          unsigned long std31 = __VERIFIER_nondet_unsigned_long();
          unsigned long c32 = 5;
          unsigned long b33 = std31 + c32;
          int cast34 = (int)b33;
          nameLocation10 = cast34;
          char* cast35 = (char*)&(_str_3);
          unsigned long c36 = 0;
          unsigned long std37 = __VERIFIER_nondet_unsigned_long();
          int cast38 = (int)std37;
          endName11 = cast38;
          char* cast39 = (char*)&(_str_3);
          unsigned long c40 = 0;
          unsigned long std41 = __VERIFIER_nondet_unsigned_long();
          unsigned long c42 = 4;
          unsigned long b43 = std41 + c42;
          int cast44 = (int)b43;
          ageLocation12 = cast44;
          char* cast45 = (char*)&(_str_4);
          unsigned long c46 = 0;
          unsigned long std47 = __VERIFIER_nondet_unsigned_long();
          int cast48 = (int)std47;
          endAge13 = cast48;
          char* cast49 = (char*)&(_str_4);
          unsigned long c50 = 0;
          unsigned long std51 = __VERIFIER_nondet_unsigned_long();
          unsigned long c52 = 6;
          unsigned long b53 = std51 + c52;
          int cast54 = (int)b53;
          colorLocation14 = cast54;
          int t55 = nameLocation10;
          unsigned long cast56 = (unsigned long)t55;
          int t57 = endName11;
          int t58 = nameLocation10;
          int b59 = t57 - t58;
          unsigned long cast60 = (unsigned long)b59;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std61;
          __VERIFIER_nondet_memory(&std61, sizeof(std61));
          ref_tmp415 = std61;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std62;
            __VERIFIER_nondet_memory(&std62, sizeof(std62));
            tmp_exprcleanup16 = std62;
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&ref_tmp415, sizeof(ref_tmp415));
          }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t63 = tmp_exprcleanup16;
          int t64 = ageLocation12;
          unsigned long cast65 = (unsigned long)t64;
          int t66 = endAge13;
          int t67 = ageLocation12;
          int b68 = t66 - t67;
          unsigned long cast69 = (unsigned long)b68;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std70;
          __VERIFIER_nondet_memory(&std70, sizeof(std70));
          ref_tmp517 = std70;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std71;
            __VERIFIER_nondet_memory(&std71, sizeof(std71));
            tmp_exprcleanup18 = std71;
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&ref_tmp517, sizeof(ref_tmp517));
          }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t72 = tmp_exprcleanup18;
          int t73 = colorLocation14;
          unsigned long cast74 = (unsigned long)t73;
          unsigned long t75 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std76;
          __VERIFIER_nondet_memory(&std76, sizeof(std76));
          ref_tmp619 = std76;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std77;
            __VERIFIER_nondet_memory(&std77, sizeof(std77));
            tmp_exprcleanup20 = std77;
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&ref_tmp619, sizeof(ref_tmp619));
          }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t78 = tmp_exprcleanup20;
          char* cast79 = (char*)&(_str_5);
          struct std__basic_ostream_char__std__char_traits_char__* std80;
          __VERIFIER_nondet_memory(&std80, sizeof(std80));
          char* cast81 = (char*)&(_str_6);
          struct std__basic_ostream_char__std__char_traits_char__* std82;
          __VERIFIER_nondet_memory(&std82, sizeof(std82));
          char* cast83 = (char*)&(_str_7);
          struct std__basic_ostream_char__std__char_traits_char__* std84;
          __VERIFIER_nondet_memory(&std84, sizeof(std84));
          char* cast85 = (char*)&(_str_8);
          struct std__basic_ostream_char__std__char_traits_char__* std86;
          __VERIFIER_nondet_memory(&std86, sizeof(std86));
          char* cast87 = (char*)&(_str_9);
          struct std__basic_ostream_char__std__char_traits_char__* std88;
          __VERIFIER_nondet_memory(&std88, sizeof(std88));
          char* cast89 = (char*)&(_str_10);
          struct std__basic_ostream_char__std__char_traits_char__* std90;
          __VERIFIER_nondet_memory(&std90, sizeof(std90));
          char* cast91 = (char*)&(_str_11);
          struct std__basic_ostream_char__std__char_traits_char__* std92;
          __VERIFIER_nondet_memory(&std92, sizeof(std92));
          char* cast93 = (char*)&(_str_12);
          struct std__basic_ostream_char__std__char_traits_char__* std94;
          __VERIFIER_nondet_memory(&std94, sizeof(std94));
            char* cast95 = (char*)&(_str);
            _Bool std96;
            __VERIFIER_nondet_memory(&std96, sizeof(std96));
            _Bool u97 = !std96;
            if (u97) {
              char* cast98 = (char*)&(_str_13);
              struct std__basic_ostream_char__std__char_traits_char__* std99;
              __VERIFIER_nondet_memory(&std99, sizeof(std99));
              char* cast100 = (char*)&(_str_14);
              struct std__basic_ostream_char__std__char_traits_char__* std101;
              __VERIFIER_nondet_memory(&std101, sizeof(std101));
              char* cast102 = (char*)&(_str_15);
              struct std__basic_ostream_char__std__char_traits_char__* std103;
              __VERIFIER_nondet_memory(&std103, sizeof(std103));
              struct std__basic_ostream_char__std__char_traits_char__* std104;
              __VERIFIER_nondet_memory(&std104, sizeof(std104));
              char* cast105 = (char*)&(_str_16);
              struct std__basic_ostream_char__std__char_traits_char__* std106;
              __VERIFIER_nondet_memory(&std106, sizeof(std106));
              char* cast107 = (char*)&(_str_17);
              struct std__basic_ostream_char__std__char_traits_char__* std108;
              __VERIFIER_nondet_memory(&std108, sizeof(std108));
              struct std__basic_ostream_char__std__char_traits_char__* std109;
              __VERIFIER_nondet_memory(&std109, sizeof(std109));
              char* cast110 = (char*)&(_str_16);
              struct std__basic_ostream_char__std__char_traits_char__* std111;
              __VERIFIER_nondet_memory(&std111, sizeof(std111));
              char* cast112 = (char*)&(_str_18);
              struct std__basic_ostream_char__std__char_traits_char__* std113;
              __VERIFIER_nondet_memory(&std113, sizeof(std113));
              struct std__basic_ostream_char__std__char_traits_char__* std114;
              __VERIFIER_nondet_memory(&std114, sizeof(std114));
              char* cast115 = (char*)&(_str_16);
              struct std__basic_ostream_char__std__char_traits_char__* std116;
              __VERIFIER_nondet_memory(&std116, sizeof(std116));
            } else {
              char* cast117 = (char*)&(_str_19);
              struct std__basic_ostream_char__std__char_traits_char__* std118;
              __VERIFIER_nondet_memory(&std118, sizeof(std118));
            }
          char* cast119 = (char*)&(_str_20);
          struct std__basic_ostream_char__std__char_traits_char__* std120;
          __VERIFIER_nondet_memory(&std120, sizeof(std120));
          int c121 = 0;
          __retval1 = c121;
          int t122 = __retval1;
          int ret_val123 = t122;
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&colorString8, sizeof(colorString8));
          }
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&ageString6, sizeof(ageString6));
          }
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&nameString4, sizeof(nameString4));
          }
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&dataString2, sizeof(dataString2));
          }
          return ret_val123;
  int t124 = __retval1;
  return t124;
}

