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
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[7] = "There.";
char _str_1[7] = "needle";
char _str_2[15] = "int(found)==51";
char _str_3[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_find_final_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[18] = "Period found at: ";
char _str_5[50] = "basic_string: construction from null is not valid";
char _str_6[24] = "basic_string::_M_create";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2;
  struct std__allocator_char_ ref_tmp03;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str24;
  struct std__allocator_char_ ref_tmp15;
  unsigned long found6;
  int c7 = 0;
  __retval1 = c7;
  char* cast8 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&str2, sizeof(str2));
    __VERIFIER_nondet_memory(cast8, sizeof(*cast8));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    char* cast9 = (char*)&(_str_1);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&str24, sizeof(str24));
      __VERIFIER_nondet_memory(cast9, sizeof(*cast9));
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    }
      char c10 = 46;
      unsigned long c11 = 0;
      unsigned long std12 = __VERIFIER_nondet_unsigned_long();
      found6 = std12;
      unsigned long t13 = found6;
      int cast14 = (int)t13;
      int c15 = 51;
      _Bool c16 = ((cast14 == c15)) ? 1 : 0;
      if (c16) {
      } else {
        char* cast17 = (char*)&(_str_2);
        char* c18 = _str_3;
        unsigned int c19 = 22;
        char* cast20 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast17, c18, c19, cast20);
      }
        unsigned long t21 = found6;
        unsigned long t22 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
        _Bool c23 = ((t21 != t22)) ? 1 : 0;
        if (c23) {
          char* cast24 = (char*)&(_str_4);
          struct std__basic_ostream_char__std__char_traits_char__* std25;
          __VERIFIER_nondet_memory(&std25, sizeof(std25));
          unsigned long t26 = found6;
          int cast27 = (int)t26;
          struct std__basic_ostream_char__std__char_traits_char__* std28;
          __VERIFIER_nondet_memory(&std28, sizeof(std28));
          struct std__basic_ostream_char__std__char_traits_char__* std29;
          __VERIFIER_nondet_memory(&std29, sizeof(std29));
        }
      int c30 = 0;
      __retval1 = c30;
      int t31 = __retval1;
      int ret_val32 = t31;
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&str24, sizeof(str24));
      }
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&str2, sizeof(str2));
      }
      return ret_val32;
  int t33 = __retval1;
  return t33;
}

