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
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

char _str[5] = "Test";
char _str_1[8] = " String";
char _str_2[44] = "(str3 == str1 + 't') && (str4 == \" String\")";
char _str_3[125] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_operator_brackets_6_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[50] = "basic_string: construction from null is not valid";
char _str_5[24] = "basic_string::_M_create";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
char _str_6[93] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/basic_string.h";
char __PRETTY_FUNCTION____ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm[138] = "reference std::basic_string<char>::operator[](size_type) [_CharT = char, _Traits = std::char_traits<char>, _Alloc = std::allocator<char>]";
char _str_7[16] = "__pos <= size()";
char _str_8[21] = "basic_string::append";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0: ;
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str12;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str23;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str34;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str45;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str56;
  int i7;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp08;
  struct std__allocator_char_ ref_tmp19;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup10;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp211;
  struct std__allocator_char_ ref_tmp312;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup13;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp414;
  int c15 = 0;
  __retval1 = c15;
  // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
  __VERIFIER_nondet_memory(&str12, sizeof(str12));
    // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
    __VERIFIER_nondet_memory(&str23, sizeof(str23));
      // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
      __VERIFIER_nondet_memory(&str34, sizeof(str34));
        // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
        __VERIFIER_nondet_memory(&str45, sizeof(str45));
          // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
          __VERIFIER_nondet_memory(&str56, sizeof(str56));
            char* cast16 = (char*)&(_str);
            // externalized std:: op: std::allocator<char>::allocator()
            __VERIFIER_nondet_memory(&ref_tmp19, sizeof(ref_tmp19));
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
              __VERIFIER_nondet_memory(&ref_tmp08, sizeof(ref_tmp08));
              __VERIFIER_nondet_memory(cast16, sizeof(*cast16));
              __VERIFIER_nondet_memory(&ref_tmp19, sizeof(ref_tmp19));
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std17;
                __VERIFIER_nondet_memory(&std17, sizeof(std17));
                tmp_exprcleanup10 = std17;
              {
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                __VERIFIER_nondet_memory(&ref_tmp08, sizeof(ref_tmp08));
              }
            {
              // externalized std:: op: std::allocator<char>::~allocator()
              __VERIFIER_nondet_memory(&ref_tmp19, sizeof(ref_tmp19));
            }
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t18 = tmp_exprcleanup10;
            char* cast19 = (char*)&(_str_1);
            // externalized std:: op: std::allocator<char>::allocator()
            __VERIFIER_nondet_memory(&ref_tmp312, sizeof(ref_tmp312));
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
              __VERIFIER_nondet_memory(&ref_tmp211, sizeof(ref_tmp211));
              __VERIFIER_nondet_memory(cast19, sizeof(*cast19));
              __VERIFIER_nondet_memory(&ref_tmp312, sizeof(ref_tmp312));
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std20;
                __VERIFIER_nondet_memory(&std20, sizeof(std20));
                tmp_exprcleanup13 = std20;
              {
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                __VERIFIER_nondet_memory(&ref_tmp211, sizeof(ref_tmp211));
              }
            {
              // externalized std:: op: std::allocator<char>::~allocator()
              __VERIFIER_nondet_memory(&ref_tmp312, sizeof(ref_tmp312));
            }
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t21 = tmp_exprcleanup13;
              int c22 = 0;
              i7 = c22;
              while (1) {
                int t24 = i7;
                int c25 = 4;
                _Bool c26 = ((t24 < c25)) ? 1 : 0;
                if (!c26) break;
                  int t27 = i7;
                  unsigned long cast28 = (unsigned long)t27;
                  char* std29;
                  __VERIFIER_nondet_memory(&std29, sizeof(std29));
                  char t30 = *std29;
                  int t31 = i7;
                  unsigned long cast32 = (unsigned long)t31;
                  char* std33;
                  __VERIFIER_nondet_memory(&std33, sizeof(std33));
                  *std33 = t30;
                  int t34 = i7;
                  unsigned long cast35 = (unsigned long)t34;
                  char* std36;
                  __VERIFIER_nondet_memory(&std36, sizeof(std36));
                  char t37 = *std36;
                  int t38 = i7;
                  unsigned long cast39 = (unsigned long)t38;
                  char* std40;
                  __VERIFIER_nondet_memory(&std40, sizeof(std40));
                  *std40 = t37;
              for_step23: ;
                int t41 = i7;
                int u42 = t41 + 1;
                i7 = u42;
              }
            char c43 = 116;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std44;
            __VERIFIER_nondet_memory(&std44, sizeof(std44));
            ref_tmp414 = std44;
              _Bool std45;
              __VERIFIER_nondet_memory(&std45, sizeof(std45));
              _Bool ternary46;
              if (std45) {
                char* cast47 = (char*)&(_str_1);
                _Bool std48;
                __VERIFIER_nondet_memory(&std48, sizeof(std48));
                ternary46 = (_Bool)std48;
              } else {
                _Bool c49 = 0;
                ternary46 = (_Bool)c49;
              }
              if (ternary46) {
              } else {
                char* cast50 = (char*)&(_str_2);
                char* c51 = (char*)_str_3;
                unsigned int c52 = 26;
                char* cast53 = (char*)&(__PRETTY_FUNCTION___main);
                reach_error();
                __assert_fail(cast50, c51, c52, cast53);
              }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&ref_tmp414, sizeof(ref_tmp414));
            }
            struct std__basic_ostream_char__std__char_traits_char__* std54;
            __VERIFIER_nondet_memory(&std54, sizeof(std54));
            struct std__basic_ostream_char__std__char_traits_char__* std55;
            __VERIFIER_nondet_memory(&std55, sizeof(std55));
            int c56 = 0;
            __retval1 = c56;
            int t57 = __retval1;
            int ret_val58 = t57;
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&str56, sizeof(str56));
            }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&str45, sizeof(str45));
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
            return ret_val58;
  int t59 = __retval1;
  return t59;
}

