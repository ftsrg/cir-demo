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
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[12] = "Test string";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[8] = "Test ==";
char _str_2[10] = "Test s ==";
char _str_3[11] = "Test st ==";
char _str_4[6] = "Test ";
char _str_5[7] = "Test s";
char _str_6[8] = "Test st";
char _str_7[63] = "(str2 != \"Test \") && (str3 != \"Test s\") && (str4 != \"Test st\")";
char _str_8[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_at_6_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_9[50] = "basic_string: construction from null is not valid";
char _str_10[24] = "basic_string::_M_create";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
char _str_11[68] = "basic_string::at: __n (which is %zu) >= this->size() (which is %zu)";
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
  int c11 = 0;
  __retval1 = c11;
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
            char* cast12 = (char*)&(_str);
            // externalized std:: op: std::allocator<char>::allocator()
            __VERIFIER_nondet_memory(&ref_tmp19, sizeof(ref_tmp19));
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
              __VERIFIER_nondet_memory(&ref_tmp08, sizeof(ref_tmp08));
              __VERIFIER_nondet_memory(cast12, sizeof(*cast12));
              __VERIFIER_nondet_memory(&ref_tmp19, sizeof(ref_tmp19));
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std13;
                __VERIFIER_nondet_memory(&std13, sizeof(std13));
                tmp_exprcleanup10 = std13;
              {
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                __VERIFIER_nondet_memory(&ref_tmp08, sizeof(ref_tmp08));
              }
            {
              // externalized std:: op: std::allocator<char>::~allocator()
              __VERIFIER_nondet_memory(&ref_tmp19, sizeof(ref_tmp19));
            }
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t14 = tmp_exprcleanup10;
              int c15 = 0;
              i7 = c15;
              while (1) {
                int t17 = i7;
                int c18 = 5;
                _Bool c19 = ((t17 < c18)) ? 1 : 0;
                if (!c19) break;
                int t20 = i7;
                unsigned long cast21 = (unsigned long)t20;
                char* std22;
                __VERIFIER_nondet_memory(&std22, sizeof(std22));
                char t23 = *std22;
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std24;
                __VERIFIER_nondet_memory(&std24, sizeof(std24));
              for_step16: ;
                int t25 = i7;
                int u26 = t25 + 1;
                i7 = u26;
              }
            char* cast27 = (char*)&(_str_1);
            struct std__basic_ostream_char__std__char_traits_char__* std28;
            __VERIFIER_nondet_memory(&std28, sizeof(std28));
            struct std__basic_ostream_char__std__char_traits_char__* std29;
            __VERIFIER_nondet_memory(&std29, sizeof(std29));
            struct std__basic_ostream_char__std__char_traits_char__* std30;
            __VERIFIER_nondet_memory(&std30, sizeof(std30));
              int c31 = 0;
              i7 = c31;
              while (1) {
                int t33 = i7;
                int c34 = 6;
                _Bool c35 = ((t33 < c34)) ? 1 : 0;
                if (!c35) break;
                int c36 = 6;
                int t37 = i7;
                int b38 = c36 - t37;
                unsigned long cast39 = (unsigned long)b38;
                char* std40;
                __VERIFIER_nondet_memory(&std40, sizeof(std40));
                char t41 = *std40;
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std42;
                __VERIFIER_nondet_memory(&std42, sizeof(std42));
              for_step32: ;
                int t43 = i7;
                int u44 = t43 + 1;
                i7 = u44;
              }
            char* cast45 = (char*)&(_str_2);
            struct std__basic_ostream_char__std__char_traits_char__* std46;
            __VERIFIER_nondet_memory(&std46, sizeof(std46));
            struct std__basic_ostream_char__std__char_traits_char__* std47;
            __VERIFIER_nondet_memory(&std47, sizeof(std47));
            struct std__basic_ostream_char__std__char_traits_char__* std48;
            __VERIFIER_nondet_memory(&std48, sizeof(std48));
              int c49 = 0;
              i7 = c49;
              while (1) {
                int t51 = i7;
                int c52 = 7;
                _Bool c53 = ((t51 < c52)) ? 1 : 0;
                if (!c53) break;
                int c54 = 7;
                int t55 = i7;
                int b56 = c54 - t55;
                unsigned long cast57 = (unsigned long)b56;
                char* std58;
                __VERIFIER_nondet_memory(&std58, sizeof(std58));
                char t59 = *std58;
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std60;
                __VERIFIER_nondet_memory(&std60, sizeof(std60));
              for_step50: ;
                int t61 = i7;
                int u62 = t61 + 1;
                i7 = u62;
              }
            char* cast63 = (char*)&(_str_3);
            struct std__basic_ostream_char__std__char_traits_char__* std64;
            __VERIFIER_nondet_memory(&std64, sizeof(std64));
            struct std__basic_ostream_char__std__char_traits_char__* std65;
            __VERIFIER_nondet_memory(&std65, sizeof(std65));
            struct std__basic_ostream_char__std__char_traits_char__* std66;
            __VERIFIER_nondet_memory(&std66, sizeof(std66));
            char* cast67 = (char*)&(_str_4);
            _Bool std68;
            __VERIFIER_nondet_memory(&std68, sizeof(std68));
            _Bool u69 = !std68;
            _Bool ternary70;
            if (u69) {
              char* cast71 = (char*)&(_str_5);
              _Bool std72;
              __VERIFIER_nondet_memory(&std72, sizeof(std72));
              _Bool u73 = !std72;
              ternary70 = (_Bool)u73;
            } else {
              _Bool c74 = 0;
              ternary70 = (_Bool)c74;
            }
            _Bool ternary75;
            if (ternary70) {
              char* cast76 = (char*)&(_str_6);
              _Bool std77;
              __VERIFIER_nondet_memory(&std77, sizeof(std77));
              _Bool u78 = !std77;
              ternary75 = (_Bool)u78;
            } else {
              _Bool c79 = 0;
              ternary75 = (_Bool)c79;
            }
            if (ternary75) {
            } else {
              char* cast80 = (char*)&(_str_7);
              char* c81 = _str_8;
              unsigned int c82 = 35;
              char* cast83 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast80, c81, c82, cast83);
            }
            struct std__basic_ostream_char__std__char_traits_char__* std84;
            __VERIFIER_nondet_memory(&std84, sizeof(std84));
            struct std__basic_ostream_char__std__char_traits_char__* std85;
            __VERIFIER_nondet_memory(&std85, sizeof(std85));
            int c86 = 0;
            __retval1 = c86;
            int t87 = __retval1;
            int ret_val88 = t87;
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
            return ret_val88;
  int t89 = __retval1;
  return t89;
}

