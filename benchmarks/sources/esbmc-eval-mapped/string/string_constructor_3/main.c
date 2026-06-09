extern void abort(void);
// Struct definitions (auto-parsed)
struct _Guard { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* _M_guarded; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__less_const_char___ { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };

char _str[8] = "Testing";
char _str_1[14] = "Testing again";
char _str_2[7] = "T != S";
char _str_3[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_constructor_3/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[50] = "basic_string: construction from null is not valid";
char _str_5[24] = "basic_string::_M_create";
char _str_6[25] = "basic_string::_M_replace";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ S2;
  struct std__allocator_char_ ref_tmp03;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ T4;
  int c5 = 0;
  __retval1 = c5;
  char* cast6 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&S2, sizeof(S2));
    __VERIFIER_nondet_memory(cast6, sizeof(*cast6));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
    __VERIFIER_nondet_memory(&T4, sizeof(T4));
      char* cast7 = (char*)&(_str_1);
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std8;
      __VERIFIER_nondet_memory(&std8, sizeof(std8));
      _Bool std9;
      __VERIFIER_nondet_memory(&std9, sizeof(std9));
      _Bool u10 = !std9;
      if (u10) {
      } else {
        char* cast11 = (char*)&(_str_2);
        char* c12 = _str_3;
        unsigned int c13 = 17;
        char* cast14 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast11, c12, c13, cast14);
      }
    {
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
      __VERIFIER_nondet_memory(&T4, sizeof(T4));
    }
  {
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
    __VERIFIER_nondet_memory(&S2, sizeof(S2));
  }
  int t15 = __retval1;
  return t15;
}

