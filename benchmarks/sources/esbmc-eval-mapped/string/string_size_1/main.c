extern void abort(void);
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
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[12] = "Test string";
char _str_1[8] = "i == 11";
char _str_2[108] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_size_1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[20] = "The size of str is ";
char _str_4[14] = " characters.\n";
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
  int i4;
  int c5 = 0;
  __retval1 = c5;
  char* cast6 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&str2, sizeof(str2));
    __VERIFIER_nondet_memory(cast6, sizeof(*cast6));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    unsigned long std7 = __VERIFIER_nondet_unsigned_long();
    int cast8 = (int)std7;
    i4 = cast8;
    int t9 = i4;
    int c10 = 11;
    _Bool c11 = ((t9 == c10)) ? 1 : 0;
    if (c11) {
    } else {
      char* cast12 = (char*)&(_str_1);
      char* c13 = _str_2;
      unsigned int c14 = 18;
      char* cast15 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast12, c13, c14, cast15);
    }
    char* cast16 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std17;
    __VERIFIER_nondet_memory(&std17, sizeof(std17));
    unsigned long std18 = __VERIFIER_nondet_unsigned_long();
    struct std__basic_ostream_char__std__char_traits_char__* std19;
    __VERIFIER_nondet_memory(&std19, sizeof(std19));
    char* cast20 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std21;
    __VERIFIER_nondet_memory(&std21, sizeof(std21));
    int c22 = 0;
    __retval1 = c22;
    int t23 = __retval1;
    int ret_val24 = t23;
    {
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
      __VERIFIER_nondet_memory(&str2, sizeof(str2));
    }
    return ret_val24;
  int t25 = __retval1;
  return t25;
}

