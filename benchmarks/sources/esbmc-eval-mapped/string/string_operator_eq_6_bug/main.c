extern void abort(void);
// Struct definitions (auto-parsed)
struct _Guard { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* _M_guarded; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };

char _str[6] = "Test1";
char _str_1[12] = "str1 == aux";
char _str_2[119] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_operator_eq_6_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[24] = "basic_string::_M_create";
char _str_4[50] = "basic_string: construction from null is not valid";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str12;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ aux3;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str24;
  struct std__allocator_char_ ref_tmp05;
  int c6 = 0;
  __retval1 = c6;
  // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
  __VERIFIER_nondet_memory(&str12, sizeof(str12));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
    __VERIFIER_nondet_memory(&aux3, sizeof(aux3));
    __VERIFIER_nondet_memory(&str12, sizeof(str12));
      char* cast7 = (char*)&(_str);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&str24, sizeof(str24));
        __VERIFIER_nondet_memory(cast7, sizeof(*cast7));
        __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
      }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std8;
        __VERIFIER_nondet_memory(&std8, sizeof(std8));
        _Bool std9;
        __VERIFIER_nondet_memory(&std9, sizeof(std9));
        if (std9) {
        } else {
          char* cast10 = (char*)&(_str_1);
          char* c11 = _str_2;
          unsigned int c12 = 18;
          char* cast13 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast10, c11, c12, cast13);
        }
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&str24, sizeof(str24));
      }
    {
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
      __VERIFIER_nondet_memory(&aux3, sizeof(aux3));
    }
  {
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
    __VERIFIER_nondet_memory(&str12, sizeof(str12));
  }
  int t14 = __retval1;
  return t14;
}

