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

char _str[15] = "to be question";
char _str_1[5] = "the ";
char _str_2[13] = "or not to be";
char _str_3[19] = "to be the question";
char _str_4[28] = "str != \"to be the question\"";
char _str_5[118] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_insert_final_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_6[23] = "to be not the question";
char _str_7[32] = "str != \"to be not the question\"";
char _str_8[13] = "that is cool";
char _str_9[31] = "to be not that is the question";
char _str_10[40] = "str != \"to be not that is the question\"";
char _str_11[7] = "to be ";
char _str_12[37] = "to be not to be that is the question";
char _str_13[46] = "str != \"to be not to be that is the question\"";
char _str_14[38] = "to be not to be: that is the question";
char _str_15[47] = "str != \"to be not to be: that is the question\"";
char _str_16[39] = "to be, not to be: that is the question";
char _str_17[48] = "str != \"to be, not to be: that is the question\"";
char _str_18[42] = "to be, not to be: that is the question...";
char _str_19[51] = "str != \"to be, not to be: that is the question...\"";
char _str_20[45] = "to be, or not to be: that is the question...";
char _str_21[54] = "str != \"to be, or not to be: that is the question...\"";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_22[50] = "basic_string: construction from null is not valid";
char _str_23[24] = "basic_string::_M_create";
char _str_24[22] = "basic_string::replace";
char _str_25[25] = "basic_string::_M_replace";
char _str_26[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_27[21] = "basic_string::insert";
char _str_28[29] = "basic_string::_M_replace_aux";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2;
  struct std__allocator_char_ ref_tmp03;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str24;
  struct std__allocator_char_ ref_tmp15;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str36;
  struct std__allocator_char_ ref_tmp27;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ it8;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp39;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp010;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp411;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp512;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp113;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp614;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp215;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp316;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp717;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp418;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp519;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp820;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp621;
  int c22 = 0;
  __retval1 = c22;
  char* cast23 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&str2, sizeof(str2));
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
        // externalized std:: op: __gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >::__normal_iterator()
        __VERIFIER_nondet_memory(&it8, sizeof(it8));
        unsigned long c26 = 6;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std27;
        __VERIFIER_nondet_memory(&std27, sizeof(std27));
        char* cast28 = (char*)&(_str_3);
        _Bool std29;
        __VERIFIER_nondet_memory(&std29, sizeof(std29));
        _Bool u30 = !std29;
        if (u30) {
        } else {
          char* cast31 = (char*)&(_str_4);
          char* c32 = _str_5;
          unsigned int c33 = 24;
          char* cast34 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast31, c32, c33, cast34);
        }
        unsigned long c35 = 6;
        unsigned long c36 = 3;
        unsigned long c37 = 4;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std38;
        __VERIFIER_nondet_memory(&std38, sizeof(std38));
        char* cast39 = (char*)&(_str_6);
        _Bool std40;
        __VERIFIER_nondet_memory(&std40, sizeof(std40));
        _Bool u41 = !std40;
        if (u41) {
        } else {
          char* cast42 = (char*)&(_str_7);
          char* c43 = _str_5;
          unsigned int c44 = 27;
          char* cast45 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast42, c43, c44, cast45);
        }
        unsigned long c46 = 10;
        char* cast47 = (char*)&(_str_8);
        unsigned long c48 = 8;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std49;
        __VERIFIER_nondet_memory(&std49, sizeof(std49));
        char* cast50 = (char*)&(_str_9);
        _Bool std51;
        __VERIFIER_nondet_memory(&std51, sizeof(std51));
        _Bool u52 = !std51;
        if (u52) {
        } else {
          char* cast53 = (char*)&(_str_10);
          char* c54 = _str_5;
          unsigned int c55 = 30;
          char* cast56 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast53, c54, c55, cast56);
        }
        unsigned long c57 = 10;
        char* cast58 = (char*)&(_str_11);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std59;
        __VERIFIER_nondet_memory(&std59, sizeof(std59));
        char* cast60 = (char*)&(_str_12);
        _Bool std61;
        __VERIFIER_nondet_memory(&std61, sizeof(std61));
        _Bool u62 = !std61;
        if (u62) {
        } else {
          char* cast63 = (char*)&(_str_13);
          char* c64 = _str_5;
          unsigned int c65 = 33;
          char* cast66 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast63, c64, c65, cast66);
        }
        unsigned long c67 = 15;
        unsigned long c68 = 1;
        char c69 = 58;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std70;
        __VERIFIER_nondet_memory(&std70, sizeof(std70));
        char* cast71 = (char*)&(_str_14);
        _Bool std72;
        __VERIFIER_nondet_memory(&std72, sizeof(std72));
        _Bool u73 = !std72;
        if (u73) {
        } else {
          char* cast74 = (char*)&(_str_15);
          char* c75 = _str_5;
          unsigned int c76 = 36;
          char* cast77 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast74, c75, c76, cast77);
        }
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std78;
        __VERIFIER_nondet_memory(&std78, sizeof(std78));
        ref_tmp512 = std78;
        long c79 = 5;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std80;
        __VERIFIER_nondet_memory(&std80, sizeof(std80));
        ref_tmp411 = std80;
        // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
        __VERIFIER_nondet_memory(&agg_tmp010, sizeof(agg_tmp010));
        __VERIFIER_nondet_memory(&ref_tmp411, sizeof(ref_tmp411));
        char c81 = 44;
        struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t82 = agg_tmp010;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std83;
        __VERIFIER_nondet_memory(&std83, sizeof(std83));
        ref_tmp39 = std83;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* std84;
        __VERIFIER_nondet_memory(&std84, sizeof(std84));
        char* cast85 = (char*)&(_str_16);
        _Bool std86;
        __VERIFIER_nondet_memory(&std86, sizeof(std86));
        _Bool u87 = !std86;
        if (u87) {
        } else {
          char* cast88 = (char*)&(_str_17);
          char* c89 = _str_5;
          unsigned int c90 = 39;
          char* cast91 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast88, c89, c90, cast91);
        }
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std92;
        __VERIFIER_nondet_memory(&std92, sizeof(std92));
        ref_tmp614 = std92;
        // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
        __VERIFIER_nondet_memory(&agg_tmp113, sizeof(agg_tmp113));
        __VERIFIER_nondet_memory(&ref_tmp614, sizeof(ref_tmp614));
        unsigned long c93 = 3;
        char c94 = 46;
        struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t95 = agg_tmp113;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std96;
        __VERIFIER_nondet_memory(&std96, sizeof(std96));
        agg_tmp215 = std96;
        char* cast97 = (char*)&(_str_18);
        _Bool std98;
        __VERIFIER_nondet_memory(&std98, sizeof(std98));
        _Bool u99 = !std98;
        if (u99) {
        } else {
          char* cast100 = (char*)&(_str_19);
          char* c101 = _str_5;
          unsigned int c102 = 42;
          char* cast103 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast100, c101, c102, cast103);
        }
        long c104 = 2;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std105;
        __VERIFIER_nondet_memory(&std105, sizeof(std105));
        ref_tmp717 = std105;
        // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
        __VERIFIER_nondet_memory(&agg_tmp316, sizeof(agg_tmp316));
        __VERIFIER_nondet_memory(&ref_tmp717, sizeof(ref_tmp717));
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std106;
        __VERIFIER_nondet_memory(&std106, sizeof(std106));
        agg_tmp418 = std106;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std107;
        __VERIFIER_nondet_memory(&std107, sizeof(std107));
        ref_tmp820 = std107;
        long c108 = 3;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std109;
        __VERIFIER_nondet_memory(&std109, sizeof(std109));
        agg_tmp519 = std109;
        struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t110 = agg_tmp316;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t111 = agg_tmp418;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t112 = agg_tmp519;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std113;
        __VERIFIER_nondet_memory(&std113, sizeof(std113));
        agg_tmp621 = std113;
        char* cast114 = (char*)&(_str_20);
        _Bool std115;
        __VERIFIER_nondet_memory(&std115, sizeof(std115));
        _Bool u116 = !std115;
        if (u116) {
        } else {
          char* cast117 = (char*)&(_str_21);
          char* c118 = _str_5;
          unsigned int c119 = 45;
          char* cast120 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast117, c118, c119, cast120);
        }
        struct std__basic_ostream_char__std__char_traits_char__* std121;
        __VERIFIER_nondet_memory(&std121, sizeof(std121));
        struct std__basic_ostream_char__std__char_traits_char__* std122;
        __VERIFIER_nondet_memory(&std122, sizeof(std122));
        int c123 = 0;
        __retval1 = c123;
        int t124 = __retval1;
        int ret_val125 = t124;
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
          __VERIFIER_nondet_memory(&str2, sizeof(str2));
        }
        return ret_val125;
  int t126 = __retval1;
  return t126;
}

