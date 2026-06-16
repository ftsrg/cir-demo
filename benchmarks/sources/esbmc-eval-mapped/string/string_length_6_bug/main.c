extern void abort(void);
// Struct definitions (auto-parsed)
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std__less_const_char___ { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };

char _str[6] = "Test ";
char _str_1[7] = "string";
char _str_2[20] = "str3.length() != 11";
char _str_3[114] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_length_6_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[25] = "basic_string::_M_replace";
char _str_5[24] = "basic_string::_M_create";
char _str_6[21] = "basic_string::append";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0: ;
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str12;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str23;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str34;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp05;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup6;
  int c7 = 0;
  __retval1 = c7;
  // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
  __VERIFIER_nondet_memory(&str12, sizeof(str12));
    // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
    __VERIFIER_nondet_memory(&str23, sizeof(str23));
      // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
      __VERIFIER_nondet_memory(&str34, sizeof(str34));
        char* cast8 = (char*)&(_str);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std9;
        __VERIFIER_nondet_memory(&std9, sizeof(std9));
        char* cast10 = (char*)&(_str_1);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std11;
        __VERIFIER_nondet_memory(&std11, sizeof(std11));
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std12;
        __VERIFIER_nondet_memory(&std12, sizeof(std12));
        ref_tmp05 = std12;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std13;
          __VERIFIER_nondet_memory(&std13, sizeof(std13));
          tmp_exprcleanup6 = std13;
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t14 = tmp_exprcleanup6;
        unsigned long std15 = __VERIFIER_nondet_unsigned_long();
        unsigned long c16 = 11;
        _Bool c17 = ((std15 != c16)) ? 1 : 0;
        if (c17) {
        } else {
          char* cast18 = (char*)&(_str_2);
          char* c19 = (char*)_str_3;
          unsigned int c20 = 19;
          char* cast21 = (char*)&(__PRETTY_FUNCTION___main);
          reach_error();
          __assert_fail(cast18, c19, c20, cast21);
        }
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
  int t22 = __retval1;
  return t22;
}

