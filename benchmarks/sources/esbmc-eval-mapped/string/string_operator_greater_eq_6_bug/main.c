extern void abort(void);
// Struct definitions (auto-parsed)
struct _Guard { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* _M_guarded; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cmp_cat____unspec { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__strong_ordering { char _M_value; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };

struct std____cmp_cat____unspec __const_main_agg_tmp3;
struct std____cmp_cat____unspec __const_main_agg_tmp1;
char _str[5] = "Test";
char _str_1[29] = "(str2 >= aux)&&(aux >= str1)";
char _str_2[127] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_operator_greater_eq_6_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[50] = "basic_string: construction from null is not valid";
char _str_4[24] = "basic_string::_M_create";
char _str_5[29] = "basic_string::_M_replace_aux";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
int _ZN9__gnu_cxx24__numeric_traits_integerIiE5__maxE __attribute__((aligned(4))) = 2147483647;
int _ZN9__gnu_cxx24__numeric_traits_integerIiE5__minE __attribute__((aligned(4))) = -2147483648;
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ aux2;
  struct std__allocator_char_ ref_tmp03;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str14;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str25;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp16;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup7;
  struct std__strong_ordering agg_tmp08;
  struct std____cmp_cat____unspec agg_tmp19;
  int c10 = 0;
  __retval1 = c10;
  char* cast11 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&aux2, sizeof(aux2));
    __VERIFIER_nondet_memory(cast11, sizeof(*cast11));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
    __VERIFIER_nondet_memory(&str14, sizeof(str14));
      // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
      __VERIFIER_nondet_memory(&str25, sizeof(str25));
        char c12 = 68;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std13;
        __VERIFIER_nondet_memory(&std13, sizeof(std13));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
        __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
        __VERIFIER_nondet_memory(&str14, sizeof(str14));
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std14;
          __VERIFIER_nondet_memory(&std14, sizeof(std14));
          tmp_exprcleanup7 = std14;
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t15 = tmp_exprcleanup7;
        struct std__strong_ordering std16;
        __VERIFIER_nondet_memory(&std16, sizeof(std16));
        agg_tmp08 = std16;
        agg_tmp19 = *&__const_main_agg_tmp1; // copy
        struct std__strong_ordering t17 = agg_tmp08;
        struct std____cmp_cat____unspec t18 = agg_tmp19;
        _Bool std19;
        __VERIFIER_nondet_memory(&std19, sizeof(std19));
        _Bool ternary20;
        if (std19) {
          struct std__strong_ordering agg_tmp221;
          struct std____cmp_cat____unspec agg_tmp322;
          struct std__strong_ordering std23;
          __VERIFIER_nondet_memory(&std23, sizeof(std23));
          agg_tmp221 = std23;
          agg_tmp322 = *&__const_main_agg_tmp3; // copy
          struct std__strong_ordering t24 = agg_tmp221;
          struct std____cmp_cat____unspec t25 = agg_tmp322;
          _Bool std26;
          __VERIFIER_nondet_memory(&std26, sizeof(std26));
          ternary20 = (_Bool)std26;
        } else {
          _Bool c27 = 0;
          ternary20 = (_Bool)c27;
        }
        if (ternary20) {
        } else {
          char* cast28 = (char*)&(_str_1);
          char* c29 = _str_2;
          unsigned int c30 = 18;
          char* cast31 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast28, c29, c30, cast31);
        }
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&str25, sizeof(str25));
      }
    {
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
      __VERIFIER_nondet_memory(&str14, sizeof(str14));
    }
  {
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
    __VERIFIER_nondet_memory(&aux2, sizeof(aux2));
  }
  int t32 = __retval1;
  return t32;
}

