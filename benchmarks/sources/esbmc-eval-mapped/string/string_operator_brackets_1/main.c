extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std__less_const_char___ { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

char _str[12] = "Test string";
char _str_1[16] = "str1[2] == str2";
char _str_2[121] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_operator_brackets_1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[25] = "basic_string::_M_replace";
char _str_4[24] = "basic_string::_M_create";
char _str_5[93] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/basic_string.h";
char __PRETTY_FUNCTION____ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm[138] = "reference std::basic_string<char>::operator[](size_type) [_CharT = char, _Traits = std::char_traits<char>, _Alloc = std::allocator<char>]";
char _str_6[16] = "__pos <= size()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str12;
  char str23;
  int c4 = 0;
  __retval1 = c4;
  // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
  __VERIFIER_nondet_memory(&str12, sizeof(str12));
    char* cast5 = (char*)&(_str);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std6;
    __VERIFIER_nondet_memory(&std6, sizeof(std6));
    char c7 = 115;
    str23 = c7;
    unsigned long c8 = 2;
    char* std9;
    __VERIFIER_nondet_memory(&std9, sizeof(std9));
    char t10 = *std9;
    int cast11 = (int)t10;
    char t12 = str23;
    int cast13 = (int)t12;
    _Bool c14 = ((cast11 == cast13)) ? 1 : 0;
    if (c14) {
    } else {
      char* cast15 = (char*)&(_str_1);
      char* c16 = _str_2;
      unsigned int c17 = 20;
      char* cast18 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast15, c16, c17, cast18);
    }
    char t19 = str23;
    struct std__basic_ostream_char__std__char_traits_char__* std20;
    __VERIFIER_nondet_memory(&std20, sizeof(std20));
    struct std__basic_ostream_char__std__char_traits_char__* std21;
    __VERIFIER_nondet_memory(&std21, sizeof(std21));
    int c22 = 0;
    __retval1 = c22;
    int t23 = __retval1;
    int ret_val24 = t23;
    {
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
      __VERIFIER_nondet_memory(&str12, sizeof(str12));
    }
    return ret_val24;
  int t25 = __retval1;
  return t25;
}

