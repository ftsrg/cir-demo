extern void abort(void);
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
struct std__basic_ostream_char__std__char_traits_char__;

char _str[17] = "Test string test";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[7] = "string";
char _str_2[17] = "str2 != \"string\"";
char _str_3[114] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_substr_3_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[50] = "basic_string: construction from null is not valid";
char _str_5[24] = "basic_string::_M_create";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
char _str_6[21] = "basic_string::substr";
char _str_7[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_8[27] = "basic_string::basic_string";
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
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp05;
  struct std__allocator_char_ ref_tmp16;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup7;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp28;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup9;
  int c10 = 0;
  __retval1 = c10;
  // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
  __VERIFIER_nondet_memory(&str12, sizeof(str12));
    // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
    __VERIFIER_nondet_memory(&str23, sizeof(str23));
      // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
      __VERIFIER_nondet_memory(&str34, sizeof(str34));
        char* cast11 = (char*)&(_str);
        // externalized std:: op: std::allocator<char>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
          __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
          __VERIFIER_nondet_memory(cast11, sizeof(*cast11));
          __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std12;
            __VERIFIER_nondet_memory(&std12, sizeof(std12));
            tmp_exprcleanup7 = std12;
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
          }
        {
          // externalized std:: op: std::allocator<char>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t13 = tmp_exprcleanup7;
        unsigned long c14 = 5;
        unsigned long c15 = 6;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std16;
        __VERIFIER_nondet_memory(&std16, sizeof(std16));
        ref_tmp28 = std16;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std17;
          __VERIFIER_nondet_memory(&std17, sizeof(std17));
          tmp_exprcleanup9 = std17;
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&ref_tmp28, sizeof(ref_tmp28));
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t18 = tmp_exprcleanup9;
        struct std__basic_ostream_char__std__char_traits_char__* std19;
        __VERIFIER_nondet_memory(&std19, sizeof(std19));
        char* cast20 = (char*)&(_str_1);
        _Bool std21;
        __VERIFIER_nondet_memory(&std21, sizeof(std21));
        _Bool u22 = !std21;
        if (u22) {
        } else {
          char* cast23 = (char*)&(_str_2);
          char* c24 = _str_3;
          unsigned int c25 = 22;
          char* cast26 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast23, c24, c25, cast26);
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
  int t27 = __retval1;
  return t27;
}

