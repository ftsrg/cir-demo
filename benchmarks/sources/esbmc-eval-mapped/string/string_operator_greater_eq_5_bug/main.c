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

struct std____cmp_cat____unspec __const_main_agg_tmp1;
char _str[3] = "DD";
char _str_1[2] = "D";
char _str_2[15] = "!(aux >= str2)";
char _str_3[127] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_operator_greater_eq_5_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[50] = "basic_string: construction from null is not valid";
char _str_5[24] = "basic_string::_M_create";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
int _ZN9__gnu_cxx24__numeric_traits_integerIiE5__maxE __attribute__((aligned(4))) = 2147483647;
int _ZN9__gnu_cxx24__numeric_traits_integerIiE5__minE __attribute__((aligned(4))) = -2147483648;
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0: ;
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ aux2;
  struct std__allocator_char_ ref_tmp03;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str14;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str25;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp16;
  struct std__allocator_char_ ref_tmp27;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup8;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp39;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup10;
  struct std__strong_ordering agg_tmp011;
  struct std____cmp_cat____unspec agg_tmp112;
  int c13 = 0;
  __retval1 = c13;
  char* cast14 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&aux2, sizeof(aux2));
    __VERIFIER_nondet_memory(cast14, sizeof(*cast14));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
    __VERIFIER_nondet_memory(&str14, sizeof(str14));
      // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
      __VERIFIER_nondet_memory(&str25, sizeof(str25));
        char* cast15 = (char*)&(_str_1);
        // externalized std:: op: std::allocator<char>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
          __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
          __VERIFIER_nondet_memory(cast15, sizeof(*cast15));
          __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std16;
            __VERIFIER_nondet_memory(&std16, sizeof(std16));
            tmp_exprcleanup8 = std16;
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
          }
        {
          // externalized std:: op: std::allocator<char>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t17 = tmp_exprcleanup8;
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
        __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
        __VERIFIER_nondet_memory(&str14, sizeof(str14));
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std18;
          __VERIFIER_nondet_memory(&std18, sizeof(std18));
          tmp_exprcleanup10 = std18;
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t19 = tmp_exprcleanup10;
        struct std__strong_ordering std20;
        __VERIFIER_nondet_memory(&std20, sizeof(std20));
        agg_tmp011 = std20;
        agg_tmp112 = *&__const_main_agg_tmp1; // copy
        struct std__strong_ordering t21 = agg_tmp011;
        struct std____cmp_cat____unspec t22 = agg_tmp112;
        _Bool std23;
        __VERIFIER_nondet_memory(&std23, sizeof(std23));
        _Bool u24 = !std23;
        if (u24) {
        } else {
          char* cast25 = (char*)&(_str_2);
          char* c26 = (char*)_str_3;
          unsigned int c27 = 18;
          char* cast28 = (char*)&(__PRETTY_FUNCTION___main);
          reach_error();
          __assert_fail(cast25, c26, c27, cast28);
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
  int t29 = __retval1;
  return t29;
}

