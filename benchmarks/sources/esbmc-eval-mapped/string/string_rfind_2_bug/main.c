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

char _str[18] = "T six sd six hck.";
char _str_1[4] = "six";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
char _str_2[11] = "found == 9";
char _str_3[113] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_rfind_2_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[3] = "se";
char _str_5[17] = "T six sd se hck.";
char _str_6[26] = "str != \"T six sd se hck.\"";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_7[50] = "basic_string: construction from null is not valid";
char _str_8[24] = "basic_string::_M_create";
char _str_9[22] = "basic_string::replace";
char _str_10[25] = "basic_string::_M_replace";
char _str_11[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
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
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ key4;
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
      __VERIFIER_nondet_memory(&key4, sizeof(key4));
      __VERIFIER_nondet_memory(cast9, sizeof(*cast9));
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    }
      unsigned long t10 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
      unsigned long std11 = __VERIFIER_nondet_unsigned_long();
      found6 = std11;
      unsigned long t12 = found6;
      unsigned long c13 = 9;
      _Bool c14 = ((t12 == c13)) ? 1 : 0;
      if (c14) {
      } else {
        char* cast15 = (char*)&(_str_2);
        char* c16 = _str_3;
        unsigned int c17 = 23;
        char* cast18 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast15, c16, c17, cast18);
      }
        unsigned long t19 = found6;
        unsigned long t20 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
        _Bool c21 = ((t19 != t20)) ? 1 : 0;
        if (c21) {
          unsigned long t22 = found6;
          unsigned long std23 = __VERIFIER_nondet_unsigned_long();
          char* cast24 = (char*)&(_str_4);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std25;
          __VERIFIER_nondet_memory(&std25, sizeof(std25));
        }
      char* cast26 = (char*)&(_str_5);
      _Bool std27;
      __VERIFIER_nondet_memory(&std27, sizeof(std27));
      _Bool u28 = !std27;
      if (u28) {
      } else {
        char* cast29 = (char*)&(_str_6);
        char* c30 = _str_3;
        unsigned int c31 = 28;
        char* cast32 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast29, c30, c31, cast32);
      }
      struct std__basic_ostream_char__std__char_traits_char__* std33;
      __VERIFIER_nondet_memory(&std33, sizeof(std33));
      struct std__basic_ostream_char__std__char_traits_char__* std34;
      __VERIFIER_nondet_memory(&std34, sizeof(std34));
      int c35 = 0;
      __retval1 = c35;
      int t36 = __retval1;
      int ret_val37 = t36;
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&key4, sizeof(key4));
      }
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&str2, sizeof(str2));
      }
      return ret_val37;
  int t38 = __retval1;
  return t38;
}

