extern void abort(void);
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
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__less_const_char___ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

char _str[23] = "this is a test string.";
char _str_1[10] = "n example";
char _str_2[14] = "sample phrase";
char _str_3[8] = "useful.";
char _str_4[27] = "this is an example string.";
char _str_5[36] = "str != \"this is an example string.\"";
char _str_6[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_replace_20_bug/main.cpp";
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
char _str_19[11] = "replace it";
char _str_20[18] = "replace phrase!!!";
char _str_21[27] = "str != \"replace phrase!!!\"";
char _str_22[8] = "is cool";
char _str_23[19] = "replace is cool!!!";
char _str_24[28] = "str != \"replace is cool!!!\"";
char _str_25[21] = "replace is cooool!!!";
char _str_26[30] = "str != \"replace is cooool!!!\"";
char _str_27[19] = "replace is useful.";
char _str_28[28] = "str != \"replace is useful.\"";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_29[50] = "basic_string: construction from null is not valid";
char _str_30[24] = "basic_string::_M_create";
char _str_31[22] = "basic_string::replace";
char _str_32[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_33[25] = "basic_string::_M_replace";
char _str_34[29] = "basic_string::_M_replace_aux";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0: ;
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
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp216;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp317;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp618;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp419;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp520;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp721;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp622;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp823;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp724;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp925;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp1026;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp827;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp928;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp1129;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp1030;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp1131;
  int c32 = 0;
  __retval1 = c32;
  char* cast33 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&base2, sizeof(base2));
    __VERIFIER_nondet_memory(cast33, sizeof(*cast33));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    char* cast34 = (char*)&(_str_1);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&str24, sizeof(str24));
      __VERIFIER_nondet_memory(cast34, sizeof(*cast34));
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    }
      char* cast35 = (char*)&(_str_2);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&str36, sizeof(str36));
        __VERIFIER_nondet_memory(cast35, sizeof(*cast35));
        __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      }
        char* cast36 = (char*)&(_str_3);
        // externalized std:: op: std::allocator<char>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
          __VERIFIER_nondet_memory(&str48, sizeof(str48));
          __VERIFIER_nondet_memory(cast36, sizeof(*cast36));
          __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
        {
          // externalized std:: op: std::allocator<char>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
        }
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
          __VERIFIER_nondet_memory(&str10, sizeof(str10));
          __VERIFIER_nondet_memory(&base2, sizeof(base2));
            unsigned long c37 = 9;
            unsigned long c38 = 5;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std39;
            __VERIFIER_nondet_memory(&std39, sizeof(std39));
            char* cast40 = (char*)&(_str_4);
            _Bool std41;
            __VERIFIER_nondet_memory(&std41, sizeof(std41));
            _Bool u42 = !std41;
            if (u42) {
            } else {
              char* cast43 = (char*)&(_str_5);
              char* c44 = (char*)_str_6;
              unsigned int c45 = 25;
              char* cast46 = (char*)&(__PRETTY_FUNCTION___main);
              reach_error();
              __assert_fail(cast43, c44, c45, cast46);
            }
            unsigned long c47 = 19;
            unsigned long c48 = 6;
            unsigned long c49 = 7;
            unsigned long c50 = 6;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std51;
            __VERIFIER_nondet_memory(&std51, sizeof(std51));
            char* cast52 = (char*)&(_str_7);
            _Bool std53;
            __VERIFIER_nondet_memory(&std53, sizeof(std53));
            _Bool u54 = !std53;
            if (u54) {
            } else {
              char* cast55 = (char*)&(_str_8);
              char* c56 = (char*)_str_6;
              unsigned int c57 = 28;
              char* cast58 = (char*)&(__PRETTY_FUNCTION___main);
              reach_error();
              __assert_fail(cast55, c56, c57, cast58);
            }
            unsigned long c59 = 8;
            unsigned long c60 = 10;
            char* cast61 = (char*)&(_str_9);
            unsigned long c62 = 6;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std63;
            __VERIFIER_nondet_memory(&std63, sizeof(std63));
            char* cast64 = (char*)&(_str_10);
            _Bool std65;
            __VERIFIER_nondet_memory(&std65, sizeof(std65));
            _Bool u66 = !std65;
            if (u66) {
            } else {
              char* cast67 = (char*)&(_str_11);
              char* c68 = (char*)_str_6;
              unsigned int c69 = 31;
              char* cast70 = (char*)&(__PRETTY_FUNCTION___main);
              reach_error();
              __assert_fail(cast67, c68, c69, cast70);
            }
            unsigned long c71 = 8;
            unsigned long c72 = 6;
            char* cast73 = (char*)&(_str_12);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std74;
            __VERIFIER_nondet_memory(&std74, sizeof(std74));
            char* cast75 = (char*)&(_str_13);
            _Bool std76;
            __VERIFIER_nondet_memory(&std76, sizeof(std76));
            _Bool u77 = !std76;
            if (u77) {
            } else {
              char* cast78 = (char*)&(_str_14);
              char* c79 = (char*)_str_6;
              unsigned int c80 = 34;
              char* cast81 = (char*)&(__PRETTY_FUNCTION___main);
              reach_error();
              __assert_fail(cast78, c79, c80, cast81);
            }
            unsigned long c82 = 22;
            unsigned long c83 = 1;
            unsigned long c84 = 3;
            char c85 = 33;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std86;
            __VERIFIER_nondet_memory(&std86, sizeof(std86));
            char* cast87 = (char*)&(_str_15);
            _Bool std88;
            __VERIFIER_nondet_memory(&std88, sizeof(std88));
            _Bool u89 = !std88;
            if (u89) {
            } else {
              char* cast90 = (char*)&(_str_16);
              char* c91 = (char*)_str_6;
              unsigned int c92 = 37;
              char* cast93 = (char*)&(__PRETTY_FUNCTION___main);
              reach_error();
              __assert_fail(cast90, c91, c92, cast93);
            }
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std94;
            __VERIFIER_nondet_memory(&std94, sizeof(std94));
            it11 = std94;
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp012, sizeof(agg_tmp012));
            __VERIFIER_nondet_memory(&it11, sizeof(it11));
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std95;
            __VERIFIER_nondet_memory(&std95, sizeof(std95));
            ref_tmp515 = std95;
            long c96 = 3;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std97;
            __VERIFIER_nondet_memory(&std97, sizeof(std97));
            ref_tmp414 = std97;
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp113, sizeof(agg_tmp113));
            __VERIFIER_nondet_memory(&ref_tmp414, sizeof(ref_tmp414));
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t98 = agg_tmp012;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t99 = agg_tmp113;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std100;
            __VERIFIER_nondet_memory(&std100, sizeof(std100));
            char* cast101 = (char*)&(_str_17);
            _Bool std102;
            __VERIFIER_nondet_memory(&std102, sizeof(std102));
            _Bool u103 = !std102;
            if (u103) {
            } else {
              char* cast104 = (char*)&(_str_18);
              char* c105 = (char*)_str_6;
              unsigned int c106 = 42;
              char* cast107 = (char*)&(__PRETTY_FUNCTION___main);
              reach_error();
              __assert_fail(cast104, c105, c106, cast107);
            }
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp216, sizeof(agg_tmp216));
            __VERIFIER_nondet_memory(&it11, sizeof(it11));
            long c108 = 6;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std109;
            __VERIFIER_nondet_memory(&std109, sizeof(std109));
            ref_tmp618 = std109;
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp317, sizeof(agg_tmp317));
            __VERIFIER_nondet_memory(&ref_tmp618, sizeof(ref_tmp618));
            char* cast110 = (char*)&(_str_19);
            unsigned long c111 = 7;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t112 = agg_tmp216;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t113 = agg_tmp317;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std114;
            __VERIFIER_nondet_memory(&std114, sizeof(std114));
            char* cast115 = (char*)&(_str_20);
            _Bool std116;
            __VERIFIER_nondet_memory(&std116, sizeof(std116));
            _Bool u117 = !std116;
            if (u117) {
            } else {
              char* cast118 = (char*)&(_str_21);
              char* c119 = (char*)_str_6;
              unsigned int c120 = 45;
              char* cast121 = (char*)&(__PRETTY_FUNCTION___main);
              reach_error();
              __assert_fail(cast118, c119, c120, cast121);
            }
            long c122 = 8;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* std123;
            __VERIFIER_nondet_memory(&std123, sizeof(std123));
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp419, sizeof(agg_tmp419));
            __VERIFIER_nondet_memory(&it11, sizeof(it11));
            long c124 = 6;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std125;
            __VERIFIER_nondet_memory(&std125, sizeof(std125));
            ref_tmp721 = std125;
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp520, sizeof(agg_tmp520));
            __VERIFIER_nondet_memory(&ref_tmp721, sizeof(ref_tmp721));
            char* cast126 = (char*)&(_str_22);
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t127 = agg_tmp419;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t128 = agg_tmp520;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std129;
            __VERIFIER_nondet_memory(&std129, sizeof(std129));
            char* cast130 = (char*)&(_str_23);
            _Bool std131;
            __VERIFIER_nondet_memory(&std131, sizeof(std131));
            _Bool u132 = !std131;
            if (u132) {
            } else {
              char* cast133 = (char*)&(_str_24);
              char* c134 = (char*)_str_6;
              unsigned int c135 = 49;
              char* cast136 = (char*)&(__PRETTY_FUNCTION___main);
              reach_error();
              __assert_fail(cast133, c134, c135, cast136);
            }
            long c137 = 4;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std138;
            __VERIFIER_nondet_memory(&std138, sizeof(std138));
            ref_tmp823 = std138;
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp622, sizeof(agg_tmp622));
            __VERIFIER_nondet_memory(&ref_tmp823, sizeof(ref_tmp823));
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std139;
            __VERIFIER_nondet_memory(&std139, sizeof(std139));
            ref_tmp1026 = std139;
            long c140 = 4;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std141;
            __VERIFIER_nondet_memory(&std141, sizeof(std141));
            ref_tmp925 = std141;
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp724, sizeof(agg_tmp724));
            __VERIFIER_nondet_memory(&ref_tmp925, sizeof(ref_tmp925));
            unsigned long c142 = 4;
            char c143 = 111;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t144 = agg_tmp622;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t145 = agg_tmp724;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std146;
            __VERIFIER_nondet_memory(&std146, sizeof(std146));
            char* cast147 = (char*)&(_str_25);
            _Bool std148;
            __VERIFIER_nondet_memory(&std148, sizeof(std148));
            _Bool u149 = !std148;
            if (u149) {
            } else {
              char* cast150 = (char*)&(_str_26);
              char* c151 = (char*)_str_6;
              unsigned int c152 = 52;
              char* cast153 = (char*)&(__PRETTY_FUNCTION___main);
              reach_error();
              __assert_fail(cast150, c151, c152, cast153);
            }
            long c154 = 3;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* std155;
            __VERIFIER_nondet_memory(&std155, sizeof(std155));
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp827, sizeof(agg_tmp827));
            __VERIFIER_nondet_memory(&it11, sizeof(it11));
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std156;
            __VERIFIER_nondet_memory(&std156, sizeof(std156));
            ref_tmp1129 = std156;
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp928, sizeof(agg_tmp928));
            __VERIFIER_nondet_memory(&ref_tmp1129, sizeof(ref_tmp1129));
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std157;
            __VERIFIER_nondet_memory(&std157, sizeof(std157));
            agg_tmp1030 = std157;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std158;
            __VERIFIER_nondet_memory(&std158, sizeof(std158));
            agg_tmp1131 = std158;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t159 = agg_tmp827;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t160 = agg_tmp928;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t161 = agg_tmp1030;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t162 = agg_tmp1131;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std163;
            __VERIFIER_nondet_memory(&std163, sizeof(std163));
            char* cast164 = (char*)&(_str_27);
            _Bool std165;
            __VERIFIER_nondet_memory(&std165, sizeof(std165));
            _Bool u166 = !std165;
            if (u166) {
            } else {
              char* cast167 = (char*)&(_str_28);
              char* c168 = (char*)_str_6;
              unsigned int c169 = 56;
              char* cast170 = (char*)&(__PRETTY_FUNCTION___main);
              reach_error();
              __assert_fail(cast167, c168, c169, cast170);
            }
            struct std__basic_ostream_char__std__char_traits_char__* std171;
            __VERIFIER_nondet_memory(&std171, sizeof(std171));
            struct std__basic_ostream_char__std__char_traits_char__* std172;
            __VERIFIER_nondet_memory(&std172, sizeof(std172));
            int c173 = 0;
            __retval1 = c173;
            int t174 = __retval1;
            int ret_val175 = t174;
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
            return ret_val175;
  int t176 = __retval1;
  return t176;
}

