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

char _str[5] = "Test";
char _str_1[13] = "str1.empty()";
char _str_2[113] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_empty_4_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[50] = "basic_string: construction from null is not valid";
char _str_4[24] = "basic_string::_M_create";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str12;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp03;
  struct std__allocator_char_ ref_tmp14;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup5;
  int c6 = 0;
  __retval1 = c6;
  // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
  __VERIFIER_nondet_memory(&str12, sizeof(str12));
    char* cast7 = (char*)&(_str);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
      __VERIFIER_nondet_memory(cast7, sizeof(*cast7));
      __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std8;
        __VERIFIER_nondet_memory(&std8, sizeof(std8));
        tmp_exprcleanup5 = std8;
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
      }
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
    }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t9 = tmp_exprcleanup5;
    _Bool std10;
    __VERIFIER_nondet_memory(&std10, sizeof(std10));
    if (std10) {
    } else {
      char* cast11 = (char*)&(_str_1);
      char* c12 = _str_2;
      unsigned int c13 = 15;
      char* cast14 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast11, c12, c13, cast14);
    }
  {
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
    __VERIFIER_nondet_memory(&str12, sizeof(str12));
  }
  int t15 = __retval1;
  return t15;
}

