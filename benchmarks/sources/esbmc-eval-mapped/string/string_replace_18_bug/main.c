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
char _str_6[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_replace_18_bug/main.cpp";
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
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_25[50] = "basic_string: construction from null is not valid";
char _str_26[24] = "basic_string::_M_create";
char _str_27[22] = "basic_string::replace";
char _str_28[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_29[25] = "basic_string::_M_replace";
char _str_30[29] = "basic_string::_M_replace_aux";
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
  int c22 = 0;
  __retval1 = c22;
  char* cast23 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&base2, sizeof(base2));
    __VERIFIER_nondet_memory(cast23, sizeof(*cast23));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    char* cast24 = (char*)&(_str_1);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&str24, sizeof(str24));
      __VERIFIER_nondet_memory(cast24, sizeof(*cast24));
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    }
      char* cast25 = (char*)&(_str_2);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&str36, sizeof(str36));
        __VERIFIER_nondet_memory(cast25, sizeof(*cast25));
        __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      }
        char* cast26 = (char*)&(_str_3);
        // externalized std:: op: std::allocator<char>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
          __VERIFIER_nondet_memory(&str48, sizeof(str48));
          __VERIFIER_nondet_memory(cast26, sizeof(*cast26));
          __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
        {
          // externalized std:: op: std::allocator<char>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
        }
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
          __VERIFIER_nondet_memory(&str10, sizeof(str10));
          __VERIFIER_nondet_memory(&base2, sizeof(base2));
            unsigned long c27 = 9;
            unsigned long c28 = 5;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std29;
            __VERIFIER_nondet_memory(&std29, sizeof(std29));
            char* cast30 = (char*)&(_str_4);
            _Bool std31;
            __VERIFIER_nondet_memory(&std31, sizeof(std31));
            _Bool u32 = !std31;
            if (u32) {
            } else {
              char* cast33 = (char*)&(_str_5);
              char* c34 = (char*)_str_6;
              unsigned int c35 = 25;
              char* cast36 = (char*)&(__PRETTY_FUNCTION___main);
              reach_error();
              __assert_fail(cast33, c34, c35, cast36);
            }
            unsigned long c37 = 19;
            unsigned long c38 = 6;
            unsigned long c39 = 7;
            unsigned long c40 = 6;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std41;
            __VERIFIER_nondet_memory(&std41, sizeof(std41));
            char* cast42 = (char*)&(_str_7);
            _Bool std43;
            __VERIFIER_nondet_memory(&std43, sizeof(std43));
            _Bool u44 = !std43;
            if (u44) {
            } else {
              char* cast45 = (char*)&(_str_8);
              char* c46 = (char*)_str_6;
              unsigned int c47 = 28;
              char* cast48 = (char*)&(__PRETTY_FUNCTION___main);
              reach_error();
              __assert_fail(cast45, c46, c47, cast48);
            }
            unsigned long c49 = 8;
            unsigned long c50 = 10;
            char* cast51 = (char*)&(_str_9);
            unsigned long c52 = 6;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std53;
            __VERIFIER_nondet_memory(&std53, sizeof(std53));
            char* cast54 = (char*)&(_str_10);
            _Bool std55;
            __VERIFIER_nondet_memory(&std55, sizeof(std55));
            _Bool u56 = !std55;
            if (u56) {
            } else {
              char* cast57 = (char*)&(_str_11);
              char* c58 = (char*)_str_6;
              unsigned int c59 = 31;
              char* cast60 = (char*)&(__PRETTY_FUNCTION___main);
              reach_error();
              __assert_fail(cast57, c58, c59, cast60);
            }
            unsigned long c61 = 8;
            unsigned long c62 = 6;
            char* cast63 = (char*)&(_str_12);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std64;
            __VERIFIER_nondet_memory(&std64, sizeof(std64));
            char* cast65 = (char*)&(_str_13);
            _Bool std66;
            __VERIFIER_nondet_memory(&std66, sizeof(std66));
            _Bool u67 = !std66;
            if (u67) {
            } else {
              char* cast68 = (char*)&(_str_14);
              char* c69 = (char*)_str_6;
              unsigned int c70 = 34;
              char* cast71 = (char*)&(__PRETTY_FUNCTION___main);
              reach_error();
              __assert_fail(cast68, c69, c70, cast71);
            }
            unsigned long c72 = 22;
            unsigned long c73 = 1;
            unsigned long c74 = 3;
            char c75 = 33;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std76;
            __VERIFIER_nondet_memory(&std76, sizeof(std76));
            char* cast77 = (char*)&(_str_15);
            _Bool std78;
            __VERIFIER_nondet_memory(&std78, sizeof(std78));
            _Bool u79 = !std78;
            if (u79) {
            } else {
              char* cast80 = (char*)&(_str_16);
              char* c81 = (char*)_str_6;
              unsigned int c82 = 37;
              char* cast83 = (char*)&(__PRETTY_FUNCTION___main);
              reach_error();
              __assert_fail(cast80, c81, c82, cast83);
            }
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std84;
            __VERIFIER_nondet_memory(&std84, sizeof(std84));
            it11 = std84;
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp012, sizeof(agg_tmp012));
            __VERIFIER_nondet_memory(&it11, sizeof(it11));
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std85;
            __VERIFIER_nondet_memory(&std85, sizeof(std85));
            ref_tmp515 = std85;
            long c86 = 3;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std87;
            __VERIFIER_nondet_memory(&std87, sizeof(std87));
            ref_tmp414 = std87;
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp113, sizeof(agg_tmp113));
            __VERIFIER_nondet_memory(&ref_tmp414, sizeof(ref_tmp414));
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t88 = agg_tmp012;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t89 = agg_tmp113;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std90;
            __VERIFIER_nondet_memory(&std90, sizeof(std90));
            char* cast91 = (char*)&(_str_17);
            _Bool std92;
            __VERIFIER_nondet_memory(&std92, sizeof(std92));
            _Bool u93 = !std92;
            if (u93) {
            } else {
              char* cast94 = (char*)&(_str_18);
              char* c95 = (char*)_str_6;
              unsigned int c96 = 42;
              char* cast97 = (char*)&(__PRETTY_FUNCTION___main);
              reach_error();
              __assert_fail(cast94, c95, c96, cast97);
            }
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp216, sizeof(agg_tmp216));
            __VERIFIER_nondet_memory(&it11, sizeof(it11));
            long c98 = 6;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std99;
            __VERIFIER_nondet_memory(&std99, sizeof(std99));
            ref_tmp618 = std99;
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp317, sizeof(agg_tmp317));
            __VERIFIER_nondet_memory(&ref_tmp618, sizeof(ref_tmp618));
            char* cast100 = (char*)&(_str_19);
            unsigned long c101 = 7;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t102 = agg_tmp216;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t103 = agg_tmp317;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std104;
            __VERIFIER_nondet_memory(&std104, sizeof(std104));
            char* cast105 = (char*)&(_str_20);
            _Bool std106;
            __VERIFIER_nondet_memory(&std106, sizeof(std106));
            _Bool u107 = !std106;
            if (u107) {
            } else {
              char* cast108 = (char*)&(_str_21);
              char* c109 = (char*)_str_6;
              unsigned int c110 = 45;
              char* cast111 = (char*)&(__PRETTY_FUNCTION___main);
              reach_error();
              __assert_fail(cast108, c109, c110, cast111);
            }
            long c112 = 8;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* std113;
            __VERIFIER_nondet_memory(&std113, sizeof(std113));
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp419, sizeof(agg_tmp419));
            __VERIFIER_nondet_memory(&it11, sizeof(it11));
            long c114 = 6;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std115;
            __VERIFIER_nondet_memory(&std115, sizeof(std115));
            ref_tmp721 = std115;
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp520, sizeof(agg_tmp520));
            __VERIFIER_nondet_memory(&ref_tmp721, sizeof(ref_tmp721));
            char* cast116 = (char*)&(_str_22);
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t117 = agg_tmp419;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t118 = agg_tmp520;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std119;
            __VERIFIER_nondet_memory(&std119, sizeof(std119));
            char* cast120 = (char*)&(_str_23);
            _Bool std121;
            __VERIFIER_nondet_memory(&std121, sizeof(std121));
            _Bool u122 = !std121;
            if (u122) {
            } else {
              char* cast123 = (char*)&(_str_24);
              char* c124 = (char*)_str_6;
              unsigned int c125 = 49;
              char* cast126 = (char*)&(__PRETTY_FUNCTION___main);
              reach_error();
              __assert_fail(cast123, c124, c125, cast126);
            }
            struct std__basic_ostream_char__std__char_traits_char__* std127;
            __VERIFIER_nondet_memory(&std127, sizeof(std127));
            struct std__basic_ostream_char__std__char_traits_char__* std128;
            __VERIFIER_nondet_memory(&std128, sizeof(std128));
            int c129 = 0;
            __retval1 = c129;
            int t130 = __retval1;
            int ret_val131 = t130;
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
            return ret_val131;
  int t132 = __retval1;
  return t132;
}

