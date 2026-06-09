extern void abort(void);
// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std__less_const_char___ { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__basic_ostream_char__std__char_traits_char__;

char _str[12] = "Test string";
char _str_1[21] = "str.capacity() >= 11";
char _str_2[112] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_capacity_3/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[4] = ": x";
char _str_4[21] = "str.capacity() >= 13";
char _str_5[28] = "New test string: xyzabcdefg";
char _str_6[21] = "str.capacity() >= 26";
char _str_7[21] = "basic_string::append";
char _str_8[24] = "basic_string::_M_create";
char _str_9[25] = "basic_string::_M_replace";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2;
  int c3 = 0;
  __retval1 = c3;
  // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
  __VERIFIER_nondet_memory(&str2, sizeof(str2));
    char* cast4 = (char*)&(_str);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std5;
    __VERIFIER_nondet_memory(&std5, sizeof(std5));
    unsigned long std6 = __VERIFIER_nondet_unsigned_long();
    unsigned long c7 = 11;
    _Bool c8 = ((std6 >= c7)) ? 1 : 0;
    if (c8) {
    } else {
      char* cast9 = (char*)&(_str_1);
      char* c10 = _str_2;
      unsigned int c11 = 17;
      char* cast12 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast9, c10, c11, cast12);
    }
    unsigned long std13 = __VERIFIER_nondet_unsigned_long();
    struct std__basic_ostream_char__std__char_traits_char__* std14;
    __VERIFIER_nondet_memory(&std14, sizeof(std14));
    char* cast15 = (char*)&(_str_3);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std16;
    __VERIFIER_nondet_memory(&std16, sizeof(std16));
    unsigned long std17 = __VERIFIER_nondet_unsigned_long();
    unsigned long c18 = 13;
    _Bool c19 = ((std17 >= c18)) ? 1 : 0;
    if (c19) {
    } else {
      char* cast20 = (char*)&(_str_4);
      char* c21 = _str_2;
      unsigned int c22 = 20;
      char* cast23 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast20, c21, c22, cast23);
    }
    unsigned long std24 = __VERIFIER_nondet_unsigned_long();
    struct std__basic_ostream_char__std__char_traits_char__* std25;
    __VERIFIER_nondet_memory(&std25, sizeof(std25));
    char* cast26 = (char*)&(_str_5);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    unsigned long std28 = __VERIFIER_nondet_unsigned_long();
    unsigned long c29 = 26;
    _Bool c30 = ((std28 >= c29)) ? 1 : 0;
    if (c30) {
    } else {
      char* cast31 = (char*)&(_str_6);
      char* c32 = _str_2;
      unsigned int c33 = 23;
      char* cast34 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast31, c32, c33, cast34);
    }
    unsigned long std35 = __VERIFIER_nondet_unsigned_long();
    struct std__basic_ostream_char__std__char_traits_char__* std36;
    __VERIFIER_nondet_memory(&std36, sizeof(std36));
  {
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
    __VERIFIER_nondet_memory(&str2, sizeof(str2));
  }
  int t37 = __retval1;
  return t37;
}

