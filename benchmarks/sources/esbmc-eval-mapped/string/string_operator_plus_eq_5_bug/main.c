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
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

char _str[14] = "Test string: ";
char _str_1[6] = ", y, ";
char _str_2[21] = "Test string: x, y, z";
char _str_3[31] = "str1 != \"Test string: x, y, z\"";
char _str_4[124] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_operator_plus_eq_5_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[25] = "basic_string::_M_replace";
char _str_6[24] = "basic_string::_M_create";
char _str_7[29] = "basic_string::_M_replace_aux";
char _str_8[21] = "basic_string::append";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str12;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str23;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str34;
  int c5 = 0;
  __retval1 = c5;
  // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
  __VERIFIER_nondet_memory(&str12, sizeof(str12));
    // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
    __VERIFIER_nondet_memory(&str23, sizeof(str23));
      // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
      __VERIFIER_nondet_memory(&str34, sizeof(str34));
        char* cast6 = (char*)&(_str);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std7;
        __VERIFIER_nondet_memory(&std7, sizeof(std7));
        char c8 = 120;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std9;
        __VERIFIER_nondet_memory(&std9, sizeof(std9));
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std10;
        __VERIFIER_nondet_memory(&std10, sizeof(std10));
        char* cast11 = (char*)&(_str_1);
        int c12 = 122;
        char* ptr13 = &(cast11)[c12];
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std14;
        __VERIFIER_nondet_memory(&std14, sizeof(std14));
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std15;
        __VERIFIER_nondet_memory(&std15, sizeof(std15));
        char* cast16 = (char*)&(_str_2);
        _Bool std17;
        __VERIFIER_nondet_memory(&std17, sizeof(std17));
        _Bool u18 = !std17;
        if (u18) {
        } else {
          char* cast19 = (char*)&(_str_3);
          char* c20 = _str_4;
          unsigned int c21 = 25;
          char* cast22 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast19, c20, c21, cast22);
        }
        struct std__basic_ostream_char__std__char_traits_char__* std23;
        __VERIFIER_nondet_memory(&std23, sizeof(std23));
        struct std__basic_ostream_char__std__char_traits_char__* std24;
        __VERIFIER_nondet_memory(&std24, sizeof(std24));
        int c25 = 0;
        __retval1 = c25;
        int t26 = __retval1;
        int ret_val27 = t26;
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&str34, sizeof(str34));
        }
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&str23, sizeof(str23));
        }
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&str12, sizeof(str12));
        }
        return ret_val27;
  int t28 = __retval1;
  return t28;
}

