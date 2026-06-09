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
struct _Guard_0 { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* _M_guarded; };
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ { char* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[15] = "Initial string";
char _str_1[21] = "A character sequence";
char _str_2[27] = "Another character sequence";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[5] = "s1: ";
char _str_4[6] = "\ns2: ";
char _str_5[6] = "\ns3: ";
char _str_6[6] = "\ns4: ";
char _str_7[6] = "\ns5: ";
char _str_8[6] = "\ns6: ";
char _str_9[7] = "\ns7a: ";
char _str_10[7] = "\ns7b: ";
char _str_11[50] = "basic_string: construction from null is not valid";
char _str_12[24] = "basic_string::_M_create";
char _str_13[27] = "basic_string::basic_string";
char _str_14[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ s02;
  struct std__allocator_char_ ref_tmp03;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ s14;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ s25;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ s36;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ s47;
  struct std__allocator_char_ ref_tmp18;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ s59;
  struct std__allocator_char_ ref_tmp210;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ s611;
  struct std__allocator_char_ ref_tmp312;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ s7a13;
  struct std__allocator_char_ ref_tmp414;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ s7b15;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp016;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp117;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp518;
  struct std__allocator_char_ ref_tmp619;
  int c20 = 0;
  __retval1 = c20;
  char* cast21 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&s02, sizeof(s02));
    __VERIFIER_nondet_memory(cast21, sizeof(*cast21));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
    __VERIFIER_nondet_memory(&s14, sizeof(s14));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
      __VERIFIER_nondet_memory(&s25, sizeof(s25));
      __VERIFIER_nondet_memory(&s02, sizeof(s02));
        unsigned long c22 = 8;
        unsigned long c23 = 3;
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, unsigned long, unsigned long)
        __VERIFIER_nondet_memory(&s36, sizeof(s36));
        __VERIFIER_nondet_memory(&s02, sizeof(s02));
          char* cast24 = (char*)&(_str_1);
          unsigned long c25 = 6;
          // externalized std:: op: std::allocator<char>::allocator()
          __VERIFIER_nondet_memory(&ref_tmp18, sizeof(ref_tmp18));
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, unsigned long, std::allocator<char> const&)
            __VERIFIER_nondet_memory(&s47, sizeof(s47));
            __VERIFIER_nondet_memory(cast24, sizeof(*cast24));
            __VERIFIER_nondet_memory(&ref_tmp18, sizeof(ref_tmp18));
          {
            // externalized std:: op: std::allocator<char>::~allocator()
            __VERIFIER_nondet_memory(&ref_tmp18, sizeof(ref_tmp18));
          }
            char* cast26 = (char*)&(_str_2);
            // externalized std:: op: std::allocator<char>::allocator()
            __VERIFIER_nondet_memory(&ref_tmp210, sizeof(ref_tmp210));
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
              __VERIFIER_nondet_memory(&s59, sizeof(s59));
              __VERIFIER_nondet_memory(cast26, sizeof(*cast26));
              __VERIFIER_nondet_memory(&ref_tmp210, sizeof(ref_tmp210));
            {
              // externalized std:: op: std::allocator<char>::~allocator()
              __VERIFIER_nondet_memory(&ref_tmp210, sizeof(ref_tmp210));
            }
              unsigned long c27 = 10;
              char c28 = 120;
              // externalized std:: op: std::allocator<char>::allocator()
              __VERIFIER_nondet_memory(&ref_tmp312, sizeof(ref_tmp312));
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(unsigned long, char, std::allocator<char> const&)
                __VERIFIER_nondet_memory(&s611, sizeof(s611));
                __VERIFIER_nondet_memory(&ref_tmp312, sizeof(ref_tmp312));
              {
                // externalized std:: op: std::allocator<char>::~allocator()
                __VERIFIER_nondet_memory(&ref_tmp312, sizeof(ref_tmp312));
              }
                unsigned long c29 = 10;
                char c30 = 42;
                // externalized std:: op: std::allocator<char>::allocator()
                __VERIFIER_nondet_memory(&ref_tmp414, sizeof(ref_tmp414));
                  // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(unsigned long, char, std::allocator<char> const&)
                  __VERIFIER_nondet_memory(&s7a13, sizeof(s7a13));
                  __VERIFIER_nondet_memory(&ref_tmp414, sizeof(ref_tmp414));
                {
                  // externalized std:: op: std::allocator<char>::~allocator()
                  __VERIFIER_nondet_memory(&ref_tmp414, sizeof(ref_tmp414));
                }
                  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std31;
                  __VERIFIER_nondet_memory(&std31, sizeof(std31));
                  agg_tmp016 = std31;
                  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std32;
                  __VERIFIER_nondet_memory(&std32, sizeof(std32));
                  ref_tmp518 = std32;
                  long c33 = 7;
                  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std34;
                  __VERIFIER_nondet_memory(&std34, sizeof(std34));
                  agg_tmp117 = std34;
                  // externalized std:: op: std::allocator<char>::allocator()
                  __VERIFIER_nondet_memory(&ref_tmp619, sizeof(ref_tmp619));
                    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t35 = agg_tmp016;
                    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t36 = agg_tmp117;
                    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<__gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, void>(__gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, __gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<char> const&)
                    __VERIFIER_nondet_memory(&s7b15, sizeof(s7b15));
                    __VERIFIER_nondet_memory(&ref_tmp619, sizeof(ref_tmp619));
                  {
                    // externalized std:: op: std::allocator<char>::~allocator()
                    __VERIFIER_nondet_memory(&ref_tmp619, sizeof(ref_tmp619));
                  }
                    char* cast37 = (char*)&(_str_3);
                    struct std__basic_ostream_char__std__char_traits_char__* std38;
                    __VERIFIER_nondet_memory(&std38, sizeof(std38));
                    struct std__basic_ostream_char__std__char_traits_char__* std39;
                    __VERIFIER_nondet_memory(&std39, sizeof(std39));
                    char* cast40 = (char*)&(_str_4);
                    struct std__basic_ostream_char__std__char_traits_char__* std41;
                    __VERIFIER_nondet_memory(&std41, sizeof(std41));
                    struct std__basic_ostream_char__std__char_traits_char__* std42;
                    __VERIFIER_nondet_memory(&std42, sizeof(std42));
                    char* cast43 = (char*)&(_str_5);
                    struct std__basic_ostream_char__std__char_traits_char__* std44;
                    __VERIFIER_nondet_memory(&std44, sizeof(std44));
                    struct std__basic_ostream_char__std__char_traits_char__* std45;
                    __VERIFIER_nondet_memory(&std45, sizeof(std45));
                    char* cast46 = (char*)&(_str_6);
                    struct std__basic_ostream_char__std__char_traits_char__* std47;
                    __VERIFIER_nondet_memory(&std47, sizeof(std47));
                    struct std__basic_ostream_char__std__char_traits_char__* std48;
                    __VERIFIER_nondet_memory(&std48, sizeof(std48));
                    char* cast49 = (char*)&(_str_7);
                    struct std__basic_ostream_char__std__char_traits_char__* std50;
                    __VERIFIER_nondet_memory(&std50, sizeof(std50));
                    struct std__basic_ostream_char__std__char_traits_char__* std51;
                    __VERIFIER_nondet_memory(&std51, sizeof(std51));
                    char* cast52 = (char*)&(_str_8);
                    struct std__basic_ostream_char__std__char_traits_char__* std53;
                    __VERIFIER_nondet_memory(&std53, sizeof(std53));
                    struct std__basic_ostream_char__std__char_traits_char__* std54;
                    __VERIFIER_nondet_memory(&std54, sizeof(std54));
                    char* cast55 = (char*)&(_str_9);
                    struct std__basic_ostream_char__std__char_traits_char__* std56;
                    __VERIFIER_nondet_memory(&std56, sizeof(std56));
                    struct std__basic_ostream_char__std__char_traits_char__* std57;
                    __VERIFIER_nondet_memory(&std57, sizeof(std57));
                    char* cast58 = (char*)&(_str_10);
                    struct std__basic_ostream_char__std__char_traits_char__* std59;
                    __VERIFIER_nondet_memory(&std59, sizeof(std59));
                    struct std__basic_ostream_char__std__char_traits_char__* std60;
                    __VERIFIER_nondet_memory(&std60, sizeof(std60));
                    struct std__basic_ostream_char__std__char_traits_char__* std61;
                    __VERIFIER_nondet_memory(&std61, sizeof(std61));
                    int c62 = 0;
                    __retval1 = c62;
                    int t63 = __retval1;
                    int ret_val64 = t63;
                    {
                      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                      __VERIFIER_nondet_memory(&s7b15, sizeof(s7b15));
                    }
                    {
                      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                      __VERIFIER_nondet_memory(&s7a13, sizeof(s7a13));
                    }
                    {
                      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                      __VERIFIER_nondet_memory(&s611, sizeof(s611));
                    }
                    {
                      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                      __VERIFIER_nondet_memory(&s59, sizeof(s59));
                    }
                    {
                      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                      __VERIFIER_nondet_memory(&s47, sizeof(s47));
                    }
                    {
                      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                      __VERIFIER_nondet_memory(&s36, sizeof(s36));
                    }
                    {
                      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                      __VERIFIER_nondet_memory(&s25, sizeof(s25));
                    }
                    {
                      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                      __VERIFIER_nondet_memory(&s14, sizeof(s14));
                    }
                    {
                      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                      __VERIFIER_nondet_memory(&s02, sizeof(s02));
                    }
                    return ret_val64;
  int t65 = __retval1;
  return t65;
}

