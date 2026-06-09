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
char _str_5[36] = "str == \"this is an example string.\"";
char _str_6[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_replace_5/main.cpp";
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
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_17[50] = "basic_string: construction from null is not valid";
char _str_18[24] = "basic_string::_M_create";
char _str_19[22] = "basic_string::replace";
char _str_20[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_21[25] = "basic_string::_M_replace";
char _str_22[29] = "basic_string::_M_replace_aux";
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
  int c11 = 0;
  __retval1 = c11;
  char* cast12 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&base2, sizeof(base2));
    __VERIFIER_nondet_memory(cast12, sizeof(*cast12));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    char* cast13 = (char*)&(_str_1);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&str24, sizeof(str24));
      __VERIFIER_nondet_memory(cast13, sizeof(*cast13));
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    }
      char* cast14 = (char*)&(_str_2);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&str36, sizeof(str36));
        __VERIFIER_nondet_memory(cast14, sizeof(*cast14));
        __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      }
        char* cast15 = (char*)&(_str_3);
        // externalized std:: op: std::allocator<char>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
          __VERIFIER_nondet_memory(&str48, sizeof(str48));
          __VERIFIER_nondet_memory(cast15, sizeof(*cast15));
          __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
        {
          // externalized std:: op: std::allocator<char>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
        }
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
          __VERIFIER_nondet_memory(&str10, sizeof(str10));
          __VERIFIER_nondet_memory(&base2, sizeof(base2));
            unsigned long c16 = 9;
            unsigned long c17 = 5;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std18;
            __VERIFIER_nondet_memory(&std18, sizeof(std18));
            char* cast19 = (char*)&(_str_4);
            _Bool std20;
            __VERIFIER_nondet_memory(&std20, sizeof(std20));
            if (std20) {
            } else {
              char* cast21 = (char*)&(_str_5);
              char* c22 = _str_6;
              unsigned int c23 = 27;
              char* cast24 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast21, c22, c23, cast24);
            }
            unsigned long c25 = 19;
            unsigned long c26 = 6;
            unsigned long c27 = 7;
            unsigned long c28 = 6;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std29;
            __VERIFIER_nondet_memory(&std29, sizeof(std29));
            char* cast30 = (char*)&(_str_7);
            _Bool std31;
            __VERIFIER_nondet_memory(&std31, sizeof(std31));
            if (std31) {
            } else {
              char* cast32 = (char*)&(_str_8);
              char* c33 = _str_6;
              unsigned int c34 = 30;
              char* cast35 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast32, c33, c34, cast35);
            }
            unsigned long c36 = 8;
            unsigned long c37 = 10;
            char* cast38 = (char*)&(_str_9);
            unsigned long c39 = 6;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std40;
            __VERIFIER_nondet_memory(&std40, sizeof(std40));
            char* cast41 = (char*)&(_str_10);
            _Bool std42;
            __VERIFIER_nondet_memory(&std42, sizeof(std42));
            if (std42) {
            } else {
              char* cast43 = (char*)&(_str_11);
              char* c44 = _str_6;
              unsigned int c45 = 33;
              char* cast46 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast43, c44, c45, cast46);
            }
            unsigned long c47 = 8;
            unsigned long c48 = 6;
            char* cast49 = (char*)&(_str_12);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std50;
            __VERIFIER_nondet_memory(&std50, sizeof(std50));
            char* cast51 = (char*)&(_str_13);
            _Bool std52;
            __VERIFIER_nondet_memory(&std52, sizeof(std52));
            if (std52) {
            } else {
              char* cast53 = (char*)&(_str_14);
              char* c54 = _str_6;
              unsigned int c55 = 36;
              char* cast56 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast53, c54, c55, cast56);
            }
            unsigned long c57 = 22;
            unsigned long c58 = 1;
            unsigned long c59 = 3;
            char c60 = 33;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std61;
            __VERIFIER_nondet_memory(&std61, sizeof(std61));
            char* cast62 = (char*)&(_str_15);
            _Bool std63;
            __VERIFIER_nondet_memory(&std63, sizeof(std63));
            if (std63) {
            } else {
              char* cast64 = (char*)&(_str_16);
              char* c65 = _str_6;
              unsigned int c66 = 39;
              char* cast67 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast64, c65, c66, cast67);
            }
            struct std__basic_ostream_char__std__char_traits_char__* std68;
            __VERIFIER_nondet_memory(&std68, sizeof(std68));
            struct std__basic_ostream_char__std__char_traits_char__* std69;
            __VERIFIER_nondet_memory(&std69, sizeof(std69));
            int c70 = 0;
            __retval1 = c70;
            int t71 = __retval1;
            int ret_val72 = t71;
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
            return ret_val72;
  int t73 = __retval1;
  return t73;
}

