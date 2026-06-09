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
char _str[38] = "look for non-alphabetic characters...";
char _str_1[28] = "abcdefghijklmnopqrstuvwxyz ";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[35] = "First non-alphabetic character is ";
char _str_3[14] = " at position ";
char _str_4[18] = "str[found] != '-'";
char _str_5[125] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_find_first_not_of_2_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_6[17] = "int(found) != 12";
char _str_7[50] = "basic_string: construction from null is not valid";
char _str_8[24] = "basic_string::_M_create";
char _str_9[93] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/basic_string.h";
char __PRETTY_FUNCTION____ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm[138] = "reference std::basic_string<char>::operator[](size_type) [_CharT = char, _Traits = std::char_traits<char>, _Alloc = std::allocator<char>]";
char _str_10[16] = "__pos <= size()";
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
  unsigned long found4;
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
    char* cast7 = (char*)&(_str_1);
    unsigned long c8 = 0;
    unsigned long std9 = __VERIFIER_nondet_unsigned_long();
    found4 = std9;
      unsigned long t10 = found4;
      unsigned long t11 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
      _Bool c12 = ((t10 != t11)) ? 1 : 0;
      if (c12) {
        char* cast13 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* std14;
        __VERIFIER_nondet_memory(&std14, sizeof(std14));
        unsigned long t15 = found4;
        char* std16;
        __VERIFIER_nondet_memory(&std16, sizeof(std16));
        char t17 = *std16;
        struct std__basic_ostream_char__std__char_traits_char__* std18;
        __VERIFIER_nondet_memory(&std18, sizeof(std18));
        char* cast19 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std20;
        __VERIFIER_nondet_memory(&std20, sizeof(std20));
        unsigned long t21 = found4;
        int cast22 = (int)t21;
        struct std__basic_ostream_char__std__char_traits_char__* std23;
        __VERIFIER_nondet_memory(&std23, sizeof(std23));
        struct std__basic_ostream_char__std__char_traits_char__* std24;
        __VERIFIER_nondet_memory(&std24, sizeof(std24));
      }
    unsigned long t25 = found4;
    char* std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    char t27 = *std26;
    int cast28 = (int)t27;
    int c29 = 45;
    _Bool c30 = ((cast28 != c29)) ? 1 : 0;
    if (c30) {
    } else {
      char* cast31 = (char*)&(_str_4);
      char* c32 = _str_5;
      unsigned int c33 = 26;
      char* cast34 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast31, c32, c33, cast34);
    }
    unsigned long t35 = found4;
    int cast36 = (int)t35;
    int c37 = 12;
    _Bool c38 = ((cast36 != c37)) ? 1 : 0;
    if (c38) {
    } else {
      char* cast39 = (char*)&(_str_6);
      char* c40 = _str_5;
      unsigned int c41 = 27;
      char* cast42 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast39, c40, c41, cast42);
    }
    int c43 = 0;
    __retval1 = c43;
    int t44 = __retval1;
    int ret_val45 = t44;
    {
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
      __VERIFIER_nondet_memory(&str2, sizeof(str2));
    }
    return ret_val45;
  int t46 = __retval1;
  return t46;
}

