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
char _str[5] = "Test";
char _str_1[19] = "str1.length() == 4";
char _str_2[124] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_operator_greater_4_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[19] = "str2.length() == 2";
char _str_4[12] = "str1 > str2";
char _str_5[50] = "basic_string: construction from null is not valid";
char _str_6[24] = "basic_string::_M_create";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
char _str_7[27] = "basic_string::basic_string";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
char _str_8[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
int _ZN9__gnu_cxx24__numeric_traits_integerIiE5__maxE __attribute__((aligned(4))) = 2147483647;
int _ZN9__gnu_cxx24__numeric_traits_integerIiE5__minE __attribute__((aligned(4))) = -2147483648;
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str12;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str23;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp04;
  struct std__allocator_char_ ref_tmp15;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup6;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp27;
  struct std__allocator_char_ ref_tmp38;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup9;
  struct std__strong_ordering agg_tmp010;
  struct std____cmp_cat____unspec agg_tmp111;
  int c12 = 0;
  __retval1 = c12;
  // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
  __VERIFIER_nondet_memory(&str12, sizeof(str12));
    // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
    __VERIFIER_nondet_memory(&str23, sizeof(str23));
      char* cast13 = (char*)&(_str);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
        __VERIFIER_nondet_memory(cast13, sizeof(*cast13));
        __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std14;
          __VERIFIER_nondet_memory(&std14, sizeof(std14));
          tmp_exprcleanup6 = std14;
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
        }
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
      }
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t15 = tmp_exprcleanup6;
      unsigned long std16 = __VERIFIER_nondet_unsigned_long();
      unsigned long c17 = 4;
      _Bool c18 = ((std16 == c17)) ? 1 : 0;
      if (c18) {
      } else {
        char* cast19 = (char*)&(_str_1);
        char* c20 = _str_2;
        unsigned int c21 = 16;
        char* cast22 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast19, c20, c21, cast22);
      }
      unsigned long c23 = 2;
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp38, sizeof(ref_tmp38));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, unsigned long, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
        __VERIFIER_nondet_memory(&str12, sizeof(str12));
        __VERIFIER_nondet_memory(&ref_tmp38, sizeof(ref_tmp38));
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std24;
          __VERIFIER_nondet_memory(&std24, sizeof(std24));
          tmp_exprcleanup9 = std24;
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
        }
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp38, sizeof(ref_tmp38));
      }
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t25 = tmp_exprcleanup9;
      unsigned long std26 = __VERIFIER_nondet_unsigned_long();
      unsigned long c27 = 2;
      _Bool c28 = ((std26 == c27)) ? 1 : 0;
      if (c28) {
      } else {
        char* cast29 = (char*)&(_str_3);
        char* c30 = _str_2;
        unsigned int c31 = 18;
        char* cast32 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast29, c30, c31, cast32);
      }
      struct std__strong_ordering std33;
      __VERIFIER_nondet_memory(&std33, sizeof(std33));
      agg_tmp010 = std33;
      agg_tmp111 = *&__const_main_agg_tmp1; // copy
      struct std__strong_ordering t34 = agg_tmp010;
      struct std____cmp_cat____unspec t35 = agg_tmp111;
      _Bool std36;
      __VERIFIER_nondet_memory(&std36, sizeof(std36));
      if (std36) {
      } else {
        char* cast37 = (char*)&(_str_4);
        char* c38 = _str_2;
        unsigned int c39 = 19;
        char* cast40 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast37, c38, c39, cast40);
      }
    {
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
      __VERIFIER_nondet_memory(&str23, sizeof(str23));
    }
  {
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
    __VERIFIER_nondet_memory(&str12, sizeof(str12));
  }
  int t41 = __retval1;
  return t41;
}

