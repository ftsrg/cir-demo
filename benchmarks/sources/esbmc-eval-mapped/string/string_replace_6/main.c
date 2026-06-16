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
char _str_5[36] = "str == \"this is an example string.\"";
char _str_6[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_replace_6/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_7[27] = "this is an example phrase.";
char _str_8[36] = "str == \"this is an example phrase.\"";
char _str_9[9] = "just all";
char _str_10[23] = "this is just a phrase.";
char _str_11[32] = "str == \"this is just a phrase.\"";
char _str_12[8] = "a short";
char _str_13[24] = "this is a short phrase.";
char _str_14[33] = "str == \"this is a short phrase.\"";
char _str_15[26] = "this is a short phrase!!!";
char _str_16[35] = "str == \"this is a short phrase!!!\"";
char _str_17[17] = "sample phraseng.";
char _str_18[26] = "str == \"sample phraseng.\"";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_19[50] = "basic_string: construction from null is not valid";
char _str_20[24] = "basic_string::_M_create";
char _str_21[22] = "basic_string::replace";
char _str_22[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_23[25] = "basic_string::_M_replace";
char _str_24[29] = "basic_string::_M_replace_aux";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
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
            if (std25) {
            } else {
              char* cast26 = (char*)&(_str_5);
              char* c27 = (char*)_str_6;
              unsigned int c28 = 24;
              char* cast29 = (char*)&(__PRETTY_FUNCTION___main);
              reach_error();
              __assert_fail(cast26, c27, c28, cast29);
            }
            unsigned long c30 = 19;
            unsigned long c31 = 6;
            unsigned long c32 = 7;
            unsigned long c33 = 6;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std34;
            __VERIFIER_nondet_memory(&std34, sizeof(std34));
            char* cast35 = (char*)&(_str_7);
            _Bool std36;
            __VERIFIER_nondet_memory(&std36, sizeof(std36));
            if (std36) {
            } else {
              char* cast37 = (char*)&(_str_8);
              char* c38 = (char*)_str_6;
              unsigned int c39 = 27;
              char* cast40 = (char*)&(__PRETTY_FUNCTION___main);
              reach_error();
              __assert_fail(cast37, c38, c39, cast40);
            }
            unsigned long c41 = 8;
            unsigned long c42 = 10;
            char* cast43 = (char*)&(_str_9);
            unsigned long c44 = 6;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std45;
            __VERIFIER_nondet_memory(&std45, sizeof(std45));
            char* cast46 = (char*)&(_str_10);
            _Bool std47;
            __VERIFIER_nondet_memory(&std47, sizeof(std47));
            if (std47) {
            } else {
              char* cast48 = (char*)&(_str_11);
              char* c49 = (char*)_str_6;
              unsigned int c50 = 30;
              char* cast51 = (char*)&(__PRETTY_FUNCTION___main);
              reach_error();
              __assert_fail(cast48, c49, c50, cast51);
            }
            unsigned long c52 = 8;
            unsigned long c53 = 6;
            char* cast54 = (char*)&(_str_12);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std55;
            __VERIFIER_nondet_memory(&std55, sizeof(std55));
            char* cast56 = (char*)&(_str_13);
            _Bool std57;
            __VERIFIER_nondet_memory(&std57, sizeof(std57));
            if (std57) {
            } else {
              char* cast58 = (char*)&(_str_14);
              char* c59 = (char*)_str_6;
              unsigned int c60 = 33;
              char* cast61 = (char*)&(__PRETTY_FUNCTION___main);
              reach_error();
              __assert_fail(cast58, c59, c60, cast61);
            }
            unsigned long c62 = 22;
            unsigned long c63 = 1;
            unsigned long c64 = 3;
            char c65 = 33;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std66;
            __VERIFIER_nondet_memory(&std66, sizeof(std66));
            char* cast67 = (char*)&(_str_15);
            _Bool std68;
            __VERIFIER_nondet_memory(&std68, sizeof(std68));
            if (std68) {
            } else {
              char* cast69 = (char*)&(_str_16);
              char* c70 = (char*)_str_6;
              unsigned int c71 = 36;
              char* cast72 = (char*)&(__PRETTY_FUNCTION___main);
              reach_error();
              __assert_fail(cast69, c70, c71, cast72);
            }
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std73;
            __VERIFIER_nondet_memory(&std73, sizeof(std73));
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std74;
            __VERIFIER_nondet_memory(&std74, sizeof(std74));
            it11 = std74;
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp012, sizeof(agg_tmp012));
            __VERIFIER_nondet_memory(&it11, sizeof(it11));
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std75;
            __VERIFIER_nondet_memory(&std75, sizeof(std75));
            ref_tmp515 = std75;
            long c76 = 3;
            struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std77;
            __VERIFIER_nondet_memory(&std77, sizeof(std77));
            ref_tmp414 = std77;
            // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
            __VERIFIER_nondet_memory(&agg_tmp113, sizeof(agg_tmp113));
            __VERIFIER_nondet_memory(&ref_tmp414, sizeof(ref_tmp414));
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t78 = agg_tmp012;
            struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t79 = agg_tmp113;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std80;
            __VERIFIER_nondet_memory(&std80, sizeof(std80));
            char* cast81 = (char*)&(_str_17);
            _Bool std82;
            __VERIFIER_nondet_memory(&std82, sizeof(std82));
            if (std82) {
            } else {
              char* cast83 = (char*)&(_str_18);
              char* c84 = (char*)_str_6;
              unsigned int c85 = 42;
              char* cast86 = (char*)&(__PRETTY_FUNCTION___main);
              reach_error();
              __assert_fail(cast83, c84, c85, cast86);
            }
            struct std__basic_ostream_char__std__char_traits_char__* std87;
            __VERIFIER_nondet_memory(&std87, sizeof(std87));
            struct std__basic_ostream_char__std__char_traits_char__* std88;
            __VERIFIER_nondet_memory(&std88, sizeof(std88));
            int c89 = 0;
            __retval1 = c89;
            int t90 = __retval1;
            int ret_val91 = t90;
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
            return ret_val91;
  int t92 = __retval1;
  return t92;
}

