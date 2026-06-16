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
char _str_1[9] = "TestTest";
char _str_2[11] = "TeTestTest";
char _str_3[21] = "str3 == \"TeTestTest\"";
char _str_4[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_operator_eq_7/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_5[50] = "basic_string: construction from null is not valid";
char _str_6[24] = "basic_string::_M_create";
char _str_7[21] = "basic_string::append";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0: ;
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str12;
  struct std__allocator_char_ ref_tmp03;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str24;
  struct std__allocator_char_ ref_tmp15;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str36;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ strN7;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp28;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp39;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup10;
  int c11 = 0;
  __retval1 = c11;
  char* cast12 = (char*)&(_str);
  unsigned long c13 = 2;
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, unsigned long, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&str12, sizeof(str12));
    __VERIFIER_nondet_memory(cast12, sizeof(*cast12));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    char* cast14 = (char*)&(_str_1);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&str24, sizeof(str24));
      __VERIFIER_nondet_memory(cast14, sizeof(*cast14));
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    }
      // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
      __VERIFIER_nondet_memory(&str36, sizeof(str36));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
        __VERIFIER_nondet_memory(&strN7, sizeof(strN7));
        __VERIFIER_nondet_memory(&str36, sizeof(str36));
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std15;
          __VERIFIER_nondet_memory(&std15, sizeof(std15));
          ref_tmp39 = std15;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std16;
            __VERIFIER_nondet_memory(&std16, sizeof(std16));
            ref_tmp28 = std16;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std17;
              __VERIFIER_nondet_memory(&std17, sizeof(std17));
              tmp_exprcleanup10 = std17;
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&ref_tmp28, sizeof(ref_tmp28));
            }
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
          }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t18 = tmp_exprcleanup10;
          char* cast19 = (char*)&(_str_2);
          _Bool std20;
          __VERIFIER_nondet_memory(&std20, sizeof(std20));
          if (std20) {
          } else {
            char* cast21 = (char*)&(_str_3);
            char* c22 = (char*)_str_4;
            unsigned int c23 = 21;
            char* cast24 = (char*)&(__PRETTY_FUNCTION___main);
            reach_error();
            __assert_fail(cast21, c22, c23, cast24);
          }
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&strN7, sizeof(strN7));
        }
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&str36, sizeof(str36));
      }
    {
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
      __VERIFIER_nondet_memory(&str24, sizeof(str24));
    }
  {
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
    __VERIFIER_nondet_memory(&str12, sizeof(str12));
  }
  int t25 = __retval1;
  return t25;
}

