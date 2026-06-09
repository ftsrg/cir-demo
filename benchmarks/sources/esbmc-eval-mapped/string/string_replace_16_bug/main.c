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
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ { char* _M_current; };
struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ { char* _M_current; };
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
struct std__ctype_char_;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

char _str[23] = "this is a test string.";
char _str_1[10] = "n example";
char _str_2[14] = "sample phrase";
char _str_3[8] = "useful.";
char _str_4[27] = "this is an example string.";
char _str_5[36] = "str != \"this is an example string.\"";
char _str_6[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_replace_16_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_7[27] = "this is an example phrase.";
char _str_8[36] = "str != \"this is an example phrase.\"";
char _str_9[9] = "just all";
char _str_10[23] = "this is just a phrase.";
char _str_11[32] = "str != \"this is just a phrase.\"";
char _str_12[8] = "a short";
char _str_13[24] = "this is a short phrase.";
char _str_14[33] = "str != \"this is a short phrase.\"";
char _str_15[26] = "this is a short phrase!!!";
char _str_16[35] = "str != \"this is a short phrase!!!\"";
char _str_17[17] = "sample phrase!!!";
char _str_18[26] = "str != \"sample phrase!!!\"";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_19[50] = "basic_string: construction from null is not valid";
char _str_20[24] = "basic_string::_M_create";
char _str_21[22] = "basic_string::replace";
char _str_22[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_23[25] = "basic_string::_M_replace";
char _str_24[29] = "basic_string::_M_replace_aux";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ base2;
  struct std__allocator_char_ ref_tmp03;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str24;
  struct std__allocator_char_ ref_tmp15;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str36;
  struct std__allocator_char_ ref_tmp27;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str48;
  struct std__allocator_char_ ref_tmp39;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str10;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ it11;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp012;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp113;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp414;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp515;
  int c16 = 0;
  __retval1 = c16;
  char* cast17 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&base2, sizeof(base2));
    __VERIFIER_nondet_memory(cast17, sizeof(*cast17));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    char* cast18 = (char*)&(_str_1);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&str24, sizeof(str24));
      __VERIFIER_nondet_memory(cast18, sizeof(*cast18));
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    }
      char* cast19 = (char*)&(_str_2);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&str36, sizeof(str36));
        __VERIFIER_nondet_memory(cast19, sizeof(*cast19));
        __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      }
        char* cast20 = (char*)&(_str_3);
        // externalized std:: op: std::allocator<char>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
          __VERIFIER_nondet_memory(&str48, sizeof(str48));
          __VERIFIER_nondet_memory(cast20, sizeof(*cast20));
          __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
        {
          // externalized std:: op: std::allocator<char>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
        }
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
          __VERIFIER_nondet_memory(&str10, sizeof(str10));
          __VERIFIER_nondet_memory(&base2, sizeof(base2));
            unsigned long c21 = 9;
            unsigned long c22 = 5;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std23;
            __VERIFIER_nondet_memory(&std23, sizeof(std23));
            char* cast24 = (char*)&(_str_4);
            _Bool std25;
            __VERIFIER_nondet_memory(&std25, sizeof(std25));
            _Bool u26 = !std25;
            if (u26) {
            } else {
              char* cast27 = (char*)&(_str_5);
              char* c28 = _str_6;
              unsigned int c29 = 26;
              char* cast30 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast27, c28, c29, cast30);
            }
            unsigned long c31 = 19;
            unsigned long c32 = 6;
            unsigned long c33 = 7;
            unsigned long c34 = 6;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std35;
            __VERIFIER_nondet_memory(&std35, sizeof(std35));
            char* cast36 = (char*)&(_str_7);
            _Bool std37;
            __VERIFIER_nondet_memory(&std37, sizeof(std37));
            _Bool u38 = !std37;
            if (u38) {
            } else {
              char* cast39 = (char*)&(_str_8);
              char* c40 = _str_6;
              unsigned int c41 = 29;
              char* cast42 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast39, c40, c41, cast42);
            }
            unsigned long c43 = 8;
            unsigned long c44 = 10;
            char* cast45 = (char*)&(_str_9);
            unsigned long c46 = 6;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std47;
            __VERIFIER_nondet_memory(&std47, sizeof(std47));
            char* cast48 = (char*)&(_str_10);
            _Bool std49;
            __VERIFIER_nondet_memory(&std49, sizeof(std49));
            _Bool u50 = !std49;
            if (u50) {
            } else {
              char* cast51 = (char*)&(_str_11);
              char* c52 = _str_6;
              unsigned int c53 = 32;
              char* cast54 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast51, c52, c53, cast54);
            }
            unsigned long c55 = 8;
            unsigned long c56 = 6;
            char* cast57 = (char*)&(_str_12);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std58;
            __VERIFIER_nondet_memory(&std58, sizeof(std58));
            char* cast59 = (char*)&(_str_13);
            _Bool std60;
            __VERIFIER_nondet_memory(&std60, sizeof(std60));
            _Bool u61 = !std60;
            if (u61) {
            } else {
              char* cast62 = (char*)&(_str_14);
              char* c63 = _str_6;
              unsigned int c64 = 35;
              char* cast65 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast62, c63, c64, cast65);
            }
            unsigned long c66 = 22;
            unsigned long c67 = 1;
            unsigned long c68 = 3;
            char c69 = 33;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std70;
            __VERIFIER_nondet_memory(&std70, sizeof(std70));
            char* cast71 = (char*)&(_str_15);
            _Bool std72;
            __VERIFIER_nondet_memory(&std72, sizeof(std72));
            _Bool u73 = !std72;
            if (u73) {
            } else {
              char* cast74 = (char*)&(_str_16);
              char* c75 = _str_6;
              unsigned int c76 = 38;
              char* cast77 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast74, c75, c76, cast77);
            }
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std78;
            __VERIFIER_nondet_memory(&std78, sizeof(std78));
            it11 = std78;
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp012, sizeof(agg_tmp012));
            __VERIFIER_nondet_memory(&it11, sizeof(it11));
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std79;
            __VERIFIER_nondet_memory(&std79, sizeof(std79));
            ref_tmp515 = std79;
            long c80 = 3;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std81;
            __VERIFIER_nondet_memory(&std81, sizeof(std81));
            ref_tmp414 = std81;
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp113, sizeof(agg_tmp113));
            __VERIFIER_nondet_memory(&ref_tmp414, sizeof(ref_tmp414));
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t82 = agg_tmp012;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t83 = agg_tmp113;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std84;
            __VERIFIER_nondet_memory(&std84, sizeof(std84));
            char* cast85 = (char*)&(_str_17);
            _Bool std86;
            __VERIFIER_nondet_memory(&std86, sizeof(std86));
            _Bool u87 = !std86;
            if (u87) {
            } else {
              char* cast88 = (char*)&(_str_18);
              char* c89 = _str_6;
              unsigned int c90 = 43;
              char* cast91 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast88, c89, c90, cast91);
            }
            struct std__basic_ostream_char__std__char_traits_char__* std92;
            __VERIFIER_nondet_memory(&std92, sizeof(std92));
            struct std__basic_ostream_char__std__char_traits_char__* std93;
            __VERIFIER_nondet_memory(&std93, sizeof(std93));
            int c94 = 0;
            __retval1 = c94;
            int t95 = __retval1;
            int ret_val96 = t95;
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&str10, sizeof(str10));
            }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&str48, sizeof(str48));
            }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&str36, sizeof(str36));
            }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&str24, sizeof(str24));
            }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&base2, sizeof(base2));
            }
            return ret_val96;
  int t97 = __retval1;
  return t97;
}

