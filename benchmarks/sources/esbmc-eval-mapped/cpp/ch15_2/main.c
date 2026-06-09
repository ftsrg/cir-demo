extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct _Guard { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* _M_guarded; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cmp_cat____unspec { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__strong_ordering { char _M_value; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

struct std____cmp_cat____unspec __const_main_agg_tmp1;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[34] = "Testing the comparison functions.";
char _str_1[6] = "Hello";
char _str_2[8] = "stinger";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[10] = "string1: ";
char _str_4[11] = "\nstring2: ";
char _str_5[11] = "\nstring3: ";
char _str_6[11] = "\nstring4: ";
char _str_7[3] = "\n\n";
char _str_8[20] = "string1 == string4\n";
char _str_9[19] = "string1 > string4\n";
char _str_10[19] = "string1 < string4\n";
char _str_11[33] = "string1.compare( string2 ) == 0\n";
char _str_12[32] = "string1.compare( string2 ) > 0\n";
char _str_13[32] = "string1.compare( string2 ) < 0\n";
char _str_14[45] = "string1.compare( 2, 5, string3, 0, 5 ) == 0\n";
char _str_15[44] = "string1.compare( 2, 5, string3, 0, 5 ) > 0\n";
char _str_16[44] = "string1.compare( 2, 5, string3, 0, 5 ) < 0\n";
char _str_17[39] = "string4.compare( 0, string2.length(), ";
char _str_18[15] = "string2 ) == 0";
char _str_19[14] = "string2 ) > 0";
char _str_20[14] = "string2 ) < 0";
char _str_21[38] = "string2.compare( 0, 3, string4 ) == 0";
char _str_22[37] = "string2.compare( 0, 3, string4 ) > 0";
char _str_23[37] = "string2.compare( 0, 3, string4 ) < 0";
char _str_24[50] = "basic_string: construction from null is not valid";
char _str_25[24] = "basic_string::_M_create";
int _ZN9__gnu_cxx24__numeric_traits_integerIiE5__maxE __attribute__((aligned(4))) = 2147483647;
int _ZN9__gnu_cxx24__numeric_traits_integerIiE5__minE __attribute__((aligned(4))) = -2147483648;
char _str_26[22] = "basic_string::compare";
char _str_27[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern int __VERIFIER_nondet_int(void);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string12;
  struct std__allocator_char_ ref_tmp03;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string24;
  struct std__allocator_char_ ref_tmp15;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string36;
  struct std__allocator_char_ ref_tmp27;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string48;
  int result9;
  int c10 = 0;
  __retval1 = c10;
  char* cast11 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&string12, sizeof(string12));
    __VERIFIER_nondet_memory(cast11, sizeof(*cast11));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    char* cast12 = (char*)&(_str_1);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&string24, sizeof(string24));
      __VERIFIER_nondet_memory(cast12, sizeof(*cast12));
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    }
      char* cast13 = (char*)&(_str_2);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&string36, sizeof(string36));
        __VERIFIER_nondet_memory(cast13, sizeof(*cast13));
        __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      }
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
        __VERIFIER_nondet_memory(&string48, sizeof(string48));
        __VERIFIER_nondet_memory(&string24, sizeof(string24));
          char* cast14 = (char*)&(_str_3);
          struct std__basic_ostream_char__std__char_traits_char__* std15;
          __VERIFIER_nondet_memory(&std15, sizeof(std15));
          struct std__basic_ostream_char__std__char_traits_char__* std16;
          __VERIFIER_nondet_memory(&std16, sizeof(std16));
          char* cast17 = (char*)&(_str_4);
          struct std__basic_ostream_char__std__char_traits_char__* std18;
          __VERIFIER_nondet_memory(&std18, sizeof(std18));
          struct std__basic_ostream_char__std__char_traits_char__* std19;
          __VERIFIER_nondet_memory(&std19, sizeof(std19));
          char* cast20 = (char*)&(_str_5);
          struct std__basic_ostream_char__std__char_traits_char__* std21;
          __VERIFIER_nondet_memory(&std21, sizeof(std21));
          struct std__basic_ostream_char__std__char_traits_char__* std22;
          __VERIFIER_nondet_memory(&std22, sizeof(std22));
          char* cast23 = (char*)&(_str_6);
          struct std__basic_ostream_char__std__char_traits_char__* std24;
          __VERIFIER_nondet_memory(&std24, sizeof(std24));
          struct std__basic_ostream_char__std__char_traits_char__* std25;
          __VERIFIER_nondet_memory(&std25, sizeof(std25));
          char* cast26 = (char*)&(_str_7);
          struct std__basic_ostream_char__std__char_traits_char__* std27;
          __VERIFIER_nondet_memory(&std27, sizeof(std27));
            _Bool std28;
            __VERIFIER_nondet_memory(&std28, sizeof(std28));
            if (std28) {
              char* cast29 = (char*)&(_str_8);
              struct std__basic_ostream_char__std__char_traits_char__* std30;
              __VERIFIER_nondet_memory(&std30, sizeof(std30));
            } else {
                struct std__strong_ordering agg_tmp031;
                struct std____cmp_cat____unspec agg_tmp132;
                struct std__strong_ordering std33;
                __VERIFIER_nondet_memory(&std33, sizeof(std33));
                agg_tmp031 = std33;
                agg_tmp132 = *&__const_main_agg_tmp1; // copy
                struct std__strong_ordering t34 = agg_tmp031;
                struct std____cmp_cat____unspec t35 = agg_tmp132;
                _Bool std36;
                __VERIFIER_nondet_memory(&std36, sizeof(std36));
                if (std36) {
                  char* cast37 = (char*)&(_str_9);
                  struct std__basic_ostream_char__std__char_traits_char__* std38;
                  __VERIFIER_nondet_memory(&std38, sizeof(std38));
                } else {
                  char* cast39 = (char*)&(_str_10);
                  struct std__basic_ostream_char__std__char_traits_char__* std40;
                  __VERIFIER_nondet_memory(&std40, sizeof(std40));
                }
            }
          int std41 = __VERIFIER_nondet_int();
          result9 = std41;
            int t42 = result9;
            int c43 = 0;
            _Bool c44 = ((t42 == c43)) ? 1 : 0;
            if (c44) {
              char* cast45 = (char*)&(_str_11);
              struct std__basic_ostream_char__std__char_traits_char__* std46;
              __VERIFIER_nondet_memory(&std46, sizeof(std46));
            } else {
                int t47 = result9;
                int c48 = 0;
                _Bool c49 = ((t47 > c48)) ? 1 : 0;
                if (c49) {
                  char* cast50 = (char*)&(_str_12);
                  struct std__basic_ostream_char__std__char_traits_char__* std51;
                  __VERIFIER_nondet_memory(&std51, sizeof(std51));
                } else {
                  char* cast52 = (char*)&(_str_13);
                  struct std__basic_ostream_char__std__char_traits_char__* std53;
                  __VERIFIER_nondet_memory(&std53, sizeof(std53));
                }
            }
          unsigned long c54 = 2;
          unsigned long c55 = 5;
          unsigned long c56 = 0;
          unsigned long c57 = 5;
          int std58 = __VERIFIER_nondet_int();
          result9 = std58;
            int t59 = result9;
            int c60 = 0;
            _Bool c61 = ((t59 == c60)) ? 1 : 0;
            if (c61) {
              char* cast62 = (char*)&(_str_14);
              struct std__basic_ostream_char__std__char_traits_char__* std63;
              __VERIFIER_nondet_memory(&std63, sizeof(std63));
            } else {
                int t64 = result9;
                int c65 = 0;
                _Bool c66 = ((t64 > c65)) ? 1 : 0;
                if (c66) {
                  char* cast67 = (char*)&(_str_15);
                  struct std__basic_ostream_char__std__char_traits_char__* std68;
                  __VERIFIER_nondet_memory(&std68, sizeof(std68));
                } else {
                  char* cast69 = (char*)&(_str_16);
                  struct std__basic_ostream_char__std__char_traits_char__* std70;
                  __VERIFIER_nondet_memory(&std70, sizeof(std70));
                }
            }
          unsigned long c71 = 0;
          unsigned long std72 = __VERIFIER_nondet_unsigned_long();
          int std73 = __VERIFIER_nondet_int();
          result9 = std73;
            int t74 = result9;
            int c75 = 0;
            _Bool c76 = ((t74 == c75)) ? 1 : 0;
            if (c76) {
              char* cast77 = (char*)&(_str_17);
              struct std__basic_ostream_char__std__char_traits_char__* std78;
              __VERIFIER_nondet_memory(&std78, sizeof(std78));
              char* cast79 = (char*)&(_str_18);
              struct std__basic_ostream_char__std__char_traits_char__* std80;
              __VERIFIER_nondet_memory(&std80, sizeof(std80));
              struct std__basic_ostream_char__std__char_traits_char__* std81;
              __VERIFIER_nondet_memory(&std81, sizeof(std81));
            } else {
                int t82 = result9;
                int c83 = 0;
                _Bool c84 = ((t82 > c83)) ? 1 : 0;
                if (c84) {
                  char* cast85 = (char*)&(_str_17);
                  struct std__basic_ostream_char__std__char_traits_char__* std86;
                  __VERIFIER_nondet_memory(&std86, sizeof(std86));
                  char* cast87 = (char*)&(_str_19);
                  struct std__basic_ostream_char__std__char_traits_char__* std88;
                  __VERIFIER_nondet_memory(&std88, sizeof(std88));
                  struct std__basic_ostream_char__std__char_traits_char__* std89;
                  __VERIFIER_nondet_memory(&std89, sizeof(std89));
                } else {
                  char* cast90 = (char*)&(_str_17);
                  struct std__basic_ostream_char__std__char_traits_char__* std91;
                  __VERIFIER_nondet_memory(&std91, sizeof(std91));
                  char* cast92 = (char*)&(_str_20);
                  struct std__basic_ostream_char__std__char_traits_char__* std93;
                  __VERIFIER_nondet_memory(&std93, sizeof(std93));
                  struct std__basic_ostream_char__std__char_traits_char__* std94;
                  __VERIFIER_nondet_memory(&std94, sizeof(std94));
                }
            }
          unsigned long c95 = 0;
          unsigned long c96 = 3;
          int std97 = __VERIFIER_nondet_int();
          result9 = std97;
            int t98 = result9;
            int c99 = 0;
            _Bool c100 = ((t98 == c99)) ? 1 : 0;
            if (c100) {
              char* cast101 = (char*)&(_str_21);
              struct std__basic_ostream_char__std__char_traits_char__* std102;
              __VERIFIER_nondet_memory(&std102, sizeof(std102));
              struct std__basic_ostream_char__std__char_traits_char__* std103;
              __VERIFIER_nondet_memory(&std103, sizeof(std103));
            } else {
                int t104 = result9;
                int c105 = 0;
                _Bool c106 = ((t104 > c105)) ? 1 : 0;
                if (c106) {
                  char* cast107 = (char*)&(_str_22);
                  struct std__basic_ostream_char__std__char_traits_char__* std108;
                  __VERIFIER_nondet_memory(&std108, sizeof(std108));
                  struct std__basic_ostream_char__std__char_traits_char__* std109;
                  __VERIFIER_nondet_memory(&std109, sizeof(std109));
                } else {
                  char* cast110 = (char*)&(_str_23);
                  struct std__basic_ostream_char__std__char_traits_char__* std111;
                  __VERIFIER_nondet_memory(&std111, sizeof(std111));
                  struct std__basic_ostream_char__std__char_traits_char__* std112;
                  __VERIFIER_nondet_memory(&std112, sizeof(std112));
                }
            }
          int c113 = 0;
          __retval1 = c113;
          int t114 = __retval1;
          int ret_val115 = t114;
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&string48, sizeof(string48));
          }
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&string36, sizeof(string36));
          }
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&string24, sizeof(string24));
          }
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&string12, sizeof(string12));
          }
          return ret_val115;
  int t116 = __retval1;
  return t116;
}

