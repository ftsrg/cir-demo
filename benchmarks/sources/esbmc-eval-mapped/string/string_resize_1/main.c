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
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

char _str[20] = "I like to code in C";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[14] = "int(sz) == 19";
char _str_2[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_resize_1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[50] = "basic_string: construction from null is not valid";
char _str_4[24] = "basic_string::_M_create";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  unsigned long sz2;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str3;
  struct std__allocator_char_ ref_tmp04;
  int c5 = 0;
  __retval1 = c5;
  char* cast6 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&str3, sizeof(str3));
    __VERIFIER_nondet_memory(cast6, sizeof(*cast6));
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
  }
    struct std__basic_ostream_char__std__char_traits_char__* std7;
    __VERIFIER_nondet_memory(&std7, sizeof(std7));
    struct std__basic_ostream_char__std__char_traits_char__* std8;
    __VERIFIER_nondet_memory(&std8, sizeof(std8));
    unsigned long std9 = __VERIFIER_nondet_unsigned_long();
    sz2 = std9;
    unsigned long t10 = sz2;
    int cast11 = (int)t10;
    int c12 = 19;
    _Bool c13 = ((cast11 == c12)) ? 1 : 0;
    if (c13) {
    } else {
      char* cast14 = (char*)&(_str_1);
      char* c15 = _str_2;
      unsigned int c16 = 21;
      char* cast17 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast14, c15, c16, cast17);
    }
    int c18 = 0;
    __retval1 = c18;
    int t19 = __retval1;
    int ret_val20 = t19;
    {
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
      __VERIFIER_nondet_memory(&str3, sizeof(str3));
    }
    return ret_val20;
  int t21 = __retval1;
  return t21;
}

