extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

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
struct std__ctype_char_;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

char _str[5] = "Test";
char _str_1[8] = " String";
char _str_2[5] = " Str";
char _str_3[35] = "(str3 == str1) && (str4 == \" Str\")";
char _str_4[121] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_operator_brackets_5/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[50] = "basic_string: construction from null is not valid";
char _str_6[24] = "basic_string::_M_create";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
char _str_7[93] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/basic_string.h";
char __PRETTY_FUNCTION____ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm[138] = "reference std::basic_string<char>::operator[](size_type) [_CharT = char, _Traits = std::char_traits<char>, _Alloc = std::allocator<char>]";
char _str_8[16] = "__pos <= size()";
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
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str45;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str56;
  int i7;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp08;
  struct std__allocator_char_ ref_tmp19;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup10;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp211;
  struct std__allocator_char_ ref_tmp312;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup13;
  int c14 = 0;
  __retval1 = c14;
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
            char* cast15 = (char*)&(_str);
            // externalized std:: op: std::allocator<char>::allocator()
            __VERIFIER_nondet_memory(&ref_tmp19, sizeof(ref_tmp19));
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
              __VERIFIER_nondet_memory(&ref_tmp08, sizeof(ref_tmp08));
              __VERIFIER_nondet_memory(cast15, sizeof(*cast15));
              __VERIFIER_nondet_memory(&ref_tmp19, sizeof(ref_tmp19));
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std16;
                __VERIFIER_nondet_memory(&std16, sizeof(std16));
                tmp_exprcleanup10 = std16;
              {
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                __VERIFIER_nondet_memory(&ref_tmp08, sizeof(ref_tmp08));
              }
            {
              // externalized std:: op: std::allocator<char>::~allocator()
              __VERIFIER_nondet_memory(&ref_tmp19, sizeof(ref_tmp19));
            }
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t17 = tmp_exprcleanup10;
            char* cast18 = (char*)&(_str_1);
            // externalized std:: op: std::allocator<char>::allocator()
            __VERIFIER_nondet_memory(&ref_tmp312, sizeof(ref_tmp312));
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
              __VERIFIER_nondet_memory(&ref_tmp211, sizeof(ref_tmp211));
              __VERIFIER_nondet_memory(cast18, sizeof(*cast18));
              __VERIFIER_nondet_memory(&ref_tmp312, sizeof(ref_tmp312));
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std19;
                __VERIFIER_nondet_memory(&std19, sizeof(std19));
                tmp_exprcleanup13 = std19;
              {
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                __VERIFIER_nondet_memory(&ref_tmp211, sizeof(ref_tmp211));
              }
            {
              // externalized std:: op: std::allocator<char>::~allocator()
              __VERIFIER_nondet_memory(&ref_tmp312, sizeof(ref_tmp312));
            }
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t20 = tmp_exprcleanup13;
              int c21 = 0;
              i7 = c21;
              while (1) {
                int t23 = i7;
                int c24 = 4;
                _Bool c25 = ((t23 < c24)) ? 1 : 0;
                if (!c25) break;
                  int t26 = i7;
                  unsigned long cast27 = (unsigned long)t26;
                  char* std28;
                  __VERIFIER_nondet_memory(&std28, sizeof(std28));
                  char t29 = *std28;
                  int t30 = i7;
                  unsigned long cast31 = (unsigned long)t30;
                  char* std32;
                  __VERIFIER_nondet_memory(&std32, sizeof(std32));
                  *std32 = t29;
                  int t33 = i7;
                  unsigned long cast34 = (unsigned long)t33;
                  char* std35;
                  __VERIFIER_nondet_memory(&std35, sizeof(std35));
                  char t36 = *std35;
                  int t37 = i7;
                  unsigned long cast38 = (unsigned long)t37;
                  char* std39;
                  __VERIFIER_nondet_memory(&std39, sizeof(std39));
                  *std39 = t36;
              for_step22: ;
                int t40 = i7;
                int u41 = t40 + 1;
                i7 = u41;
              }
            _Bool std42;
            __VERIFIER_nondet_memory(&std42, sizeof(std42));
            _Bool ternary43;
            if (std42) {
              char* cast44 = (char*)&(_str_2);
              _Bool std45;
              __VERIFIER_nondet_memory(&std45, sizeof(std45));
              ternary43 = (_Bool)std45;
            } else {
              _Bool c46 = 0;
              ternary43 = (_Bool)c46;
            }
            if (ternary43) {
            } else {
              char* cast47 = (char*)&(_str_3);
              char* c48 = _str_4;
              unsigned int c49 = 25;
              char* cast50 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast47, c48, c49, cast50);
            }
            struct std__basic_ostream_char__std__char_traits_char__* std51;
            __VERIFIER_nondet_memory(&std51, sizeof(std51));
            struct std__basic_ostream_char__std__char_traits_char__* std52;
            __VERIFIER_nondet_memory(&std52, sizeof(std52));
            int c53 = 0;
            __retval1 = c53;
            int t54 = __retval1;
            int ret_val55 = t54;
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
            return ret_val55;
  int t56 = __retval1;
  return t56;
}

