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

char _str[2] = "x";
char _str_1[3] = "f(";
char _str_2[3] = ") ";
char _str_3[3] = "= ";
char _str_4[9] = "f(x) = x";
char _str_5[19] = "str2 != \"f(x) = x\"";
char _str_6[123] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_operator_assign_6_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_7[25] = "basic_string::_M_replace";
char _str_8[24] = "basic_string::_M_create";
char _str_9[21] = "basic_string::append";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str12;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str23;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp04;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp15;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp26;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp37;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup8;
  int c9 = 0;
  __retval1 = c9;
  // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
  __VERIFIER_nondet_memory(&str12, sizeof(str12));
    // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
    __VERIFIER_nondet_memory(&str23, sizeof(str23));
      char* cast10 = (char*)&(_str);
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std11;
      __VERIFIER_nondet_memory(&std11, sizeof(std11));
      char* cast12 = (char*)&(_str_1);
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std13;
      __VERIFIER_nondet_memory(&std13, sizeof(std13));
      ref_tmp37 = std13;
        char* cast14 = (char*)&(_str_2);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std15;
        __VERIFIER_nondet_memory(&std15, sizeof(std15));
        ref_tmp26 = std15;
          char* cast16 = (char*)&(_str_3);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std17;
          __VERIFIER_nondet_memory(&std17, sizeof(std17));
          ref_tmp15 = std17;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std18;
            __VERIFIER_nondet_memory(&std18, sizeof(std18));
            ref_tmp04 = std18;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std19;
              __VERIFIER_nondet_memory(&std19, sizeof(std19));
              tmp_exprcleanup8 = std19;
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
            }
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
          }
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&ref_tmp26, sizeof(ref_tmp26));
        }
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&ref_tmp37, sizeof(ref_tmp37));
      }
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t20 = tmp_exprcleanup8;
      char* cast21 = (char*)&(_str_4);
      _Bool std22;
      __VERIFIER_nondet_memory(&std22, sizeof(std22));
      _Bool u23 = !std22;
      if (u23) {
      } else {
        char* cast24 = (char*)&(_str_5);
        char* c25 = _str_6;
        unsigned int c26 = 20;
        char* cast27 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast24, c25, c26, cast27);
      }
      struct std__basic_ostream_char__std__char_traits_char__* std28;
      __VERIFIER_nondet_memory(&std28, sizeof(std28));
      struct std__basic_ostream_char__std__char_traits_char__* std29;
      __VERIFIER_nondet_memory(&std29, sizeof(std29));
      int c30 = 0;
      __retval1 = c30;
      int t31 = __retval1;
      int ret_val32 = t31;
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&str23, sizeof(str23));
      }
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&str12, sizeof(str12));
      }
      return ret_val32;
  int t33 = __retval1;
  return t33;
}

