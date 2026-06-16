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

char _str[15] = "to be question";
char _str_1[5] = "the ";
char _str_2[13] = "or not to be";
char _str_3[19] = "to be the question";
char _str_4[28] = "str != \"to be the question\"";
char _str_5[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_insert_14_bug/main.cpp";
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
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_20[50] = "basic_string: construction from null is not valid";
char _str_21[24] = "basic_string::_M_create";
char _str_22[22] = "basic_string::replace";
char _str_23[25] = "basic_string::_M_replace";
char _str_24[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_25[21] = "basic_string::insert";
char _str_26[29] = "basic_string::_M_replace_aux";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0: ;
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
  int c16 = 0;
  __retval1 = c16;
  char* cast17 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&str2, sizeof(str2));
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
        // externalized std:: op: __gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >::__normal_iterator()
        __VERIFIER_nondet_memory(&it8, sizeof(it8));
        unsigned long c20 = 6;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std21;
        __VERIFIER_nondet_memory(&std21, sizeof(std21));
        char* cast22 = (char*)&(_str_3);
        _Bool std23;
        __VERIFIER_nondet_memory(&std23, sizeof(std23));
        _Bool u24 = !std23;
        if (u24) {
        } else {
          char* cast25 = (char*)&(_str_4);
          char* c26 = (char*)_str_5;
          unsigned int c27 = 25;
          char* cast28 = (char*)&(__PRETTY_FUNCTION___main);
          reach_error();
          __assert_fail(cast25, c26, c27, cast28);
        }
        unsigned long c29 = 6;
        unsigned long c30 = 3;
        unsigned long c31 = 4;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std32;
        __VERIFIER_nondet_memory(&std32, sizeof(std32));
        char* cast33 = (char*)&(_str_6);
        _Bool std34;
        __VERIFIER_nondet_memory(&std34, sizeof(std34));
        _Bool u35 = !std34;
        if (u35) {
        } else {
          char* cast36 = (char*)&(_str_7);
          char* c37 = (char*)_str_5;
          unsigned int c38 = 28;
          char* cast39 = (char*)&(__PRETTY_FUNCTION___main);
          reach_error();
          __assert_fail(cast36, c37, c38, cast39);
        }
        unsigned long c40 = 10;
        char* cast41 = (char*)&(_str_8);
        unsigned long c42 = 8;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std43;
        __VERIFIER_nondet_memory(&std43, sizeof(std43));
        char* cast44 = (char*)&(_str_9);
        _Bool std45;
        __VERIFIER_nondet_memory(&std45, sizeof(std45));
        _Bool u46 = !std45;
        if (u46) {
        } else {
          char* cast47 = (char*)&(_str_10);
          char* c48 = (char*)_str_5;
          unsigned int c49 = 31;
          char* cast50 = (char*)&(__PRETTY_FUNCTION___main);
          reach_error();
          __assert_fail(cast47, c48, c49, cast50);
        }
        unsigned long c51 = 10;
        char* cast52 = (char*)&(_str_11);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std53;
        __VERIFIER_nondet_memory(&std53, sizeof(std53));
        char* cast54 = (char*)&(_str_12);
        _Bool std55;
        __VERIFIER_nondet_memory(&std55, sizeof(std55));
        _Bool u56 = !std55;
        if (u56) {
        } else {
          char* cast57 = (char*)&(_str_13);
          char* c58 = (char*)_str_5;
          unsigned int c59 = 34;
          char* cast60 = (char*)&(__PRETTY_FUNCTION___main);
          reach_error();
          __assert_fail(cast57, c58, c59, cast60);
        }
        unsigned long c61 = 15;
        unsigned long c62 = 1;
        char c63 = 58;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std64;
        __VERIFIER_nondet_memory(&std64, sizeof(std64));
        char* cast65 = (char*)&(_str_14);
        _Bool std66;
        __VERIFIER_nondet_memory(&std66, sizeof(std66));
        _Bool u67 = !std66;
        if (u67) {
        } else {
          char* cast68 = (char*)&(_str_15);
          char* c69 = (char*)_str_5;
          unsigned int c70 = 37;
          char* cast71 = (char*)&(__PRETTY_FUNCTION___main);
          reach_error();
          __assert_fail(cast68, c69, c70, cast71);
        }
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std72;
        __VERIFIER_nondet_memory(&std72, sizeof(std72));
        ref_tmp512 = std72;
        long c73 = 5;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std74;
        __VERIFIER_nondet_memory(&std74, sizeof(std74));
        ref_tmp411 = std74;
        // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
        __VERIFIER_nondet_memory(&agg_tmp010, sizeof(agg_tmp010));
        __VERIFIER_nondet_memory(&ref_tmp411, sizeof(ref_tmp411));
        char c75 = 44;
        struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t76 = agg_tmp010;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std77;
        __VERIFIER_nondet_memory(&std77, sizeof(std77));
        ref_tmp39 = std77;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* std78;
        __VERIFIER_nondet_memory(&std78, sizeof(std78));
        char* cast79 = (char*)&(_str_16);
        _Bool std80;
        __VERIFIER_nondet_memory(&std80, sizeof(std80));
        _Bool u81 = !std80;
        if (u81) {
        } else {
          char* cast82 = (char*)&(_str_17);
          char* c83 = (char*)_str_5;
          unsigned int c84 = 40;
          char* cast85 = (char*)&(__PRETTY_FUNCTION___main);
          reach_error();
          __assert_fail(cast82, c83, c84, cast85);
        }
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std86;
        __VERIFIER_nondet_memory(&std86, sizeof(std86));
        ref_tmp614 = std86;
        // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
        __VERIFIER_nondet_memory(&agg_tmp113, sizeof(agg_tmp113));
        __VERIFIER_nondet_memory(&ref_tmp614, sizeof(ref_tmp614));
        unsigned long c87 = 3;
        char c88 = 46;
        struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t89 = agg_tmp113;
        struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std90;
        __VERIFIER_nondet_memory(&std90, sizeof(std90));
        agg_tmp215 = std90;
        char* cast91 = (char*)&(_str_18);
        _Bool std92;
        __VERIFIER_nondet_memory(&std92, sizeof(std92));
        _Bool u93 = !std92;
        if (u93) {
        } else {
          char* cast94 = (char*)&(_str_19);
          char* c95 = (char*)_str_5;
          unsigned int c96 = 43;
          char* cast97 = (char*)&(__PRETTY_FUNCTION___main);
          reach_error();
          __assert_fail(cast94, c95, c96, cast97);
        }
        struct std__basic_ostream_char__std__char_traits_char__* std98;
        __VERIFIER_nondet_memory(&std98, sizeof(std98));
        struct std__basic_ostream_char__std__char_traits_char__* std99;
        __VERIFIER_nondet_memory(&std99, sizeof(std99));
        int c100 = 0;
        __retval1 = c100;
        int t101 = __retval1;
        int ret_val102 = t101;
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
        return ret_val102;
  int t103 = __retval1;
  return t103;
}

