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

char _str[15] = "Test string: x";
char _str_1[6] = "Test ";
char _str_2[7] = "Test s";
char _str_3[8] = "Test st";
char _str_4[63] = "(str2 == \"Test \") && (str3 == \"Test s\") && (str4 == \"Test st\")";
char _str_5[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_at_5/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_6[50] = "basic_string: construction from null is not valid";
char _str_7[24] = "basic_string::_M_create";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
char _str_8[68] = "basic_string::at: __n (which is %zu) >= this->size() (which is %zu)";
char _str_9[29] = "basic_string::_M_replace_aux";
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
              int c27 = 0;
              i7 = c27;
              while (1) {
                int t29 = i7;
                int c30 = 6;
                _Bool c31 = ((t29 < c30)) ? 1 : 0;
                if (!c31) break;
                int c32 = 6;
                int t33 = i7;
                int b34 = c32 - t33;
                unsigned long cast35 = (unsigned long)b34;
                char* std36;
                __VERIFIER_nondet_memory(&std36, sizeof(std36));
                char t37 = *std36;
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std38;
                __VERIFIER_nondet_memory(&std38, sizeof(std38));
              for_step28: ;
                int t39 = i7;
                int u40 = t39 + 1;
                i7 = u40;
              }
              int c41 = 0;
              i7 = c41;
              while (1) {
                int t43 = i7;
                int c44 = 7;
                _Bool c45 = ((t43 < c44)) ? 1 : 0;
                if (!c45) break;
                int c46 = 7;
                int t47 = i7;
                int b48 = c46 - t47;
                unsigned long cast49 = (unsigned long)b48;
                char* std50;
                __VERIFIER_nondet_memory(&std50, sizeof(std50));
                char t51 = *std50;
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std52;
                __VERIFIER_nondet_memory(&std52, sizeof(std52));
              for_step42: ;
                int t53 = i7;
                int u54 = t53 + 1;
                i7 = u54;
              }
            char* cast55 = (char*)&(_str_1);
            _Bool std56;
            __VERIFIER_nondet_memory(&std56, sizeof(std56));
            _Bool ternary57;
            if (std56) {
              char* cast58 = (char*)&(_str_2);
              _Bool std59;
              __VERIFIER_nondet_memory(&std59, sizeof(std59));
              ternary57 = (_Bool)std59;
            } else {
              _Bool c60 = 0;
              ternary57 = (_Bool)c60;
            }
            _Bool ternary61;
            if (ternary57) {
              char* cast62 = (char*)&(_str_3);
              _Bool std63;
              __VERIFIER_nondet_memory(&std63, sizeof(std63));
              ternary61 = (_Bool)std63;
            } else {
              _Bool c64 = 0;
              ternary61 = (_Bool)c64;
            }
            if (ternary61) {
            } else {
              char* cast65 = (char*)&(_str_4);
              char* c66 = (char*)_str_5;
              unsigned int c67 = 29;
              char* cast68 = (char*)&(__PRETTY_FUNCTION___main);
              reach_error();
              __assert_fail(cast65, c66, c67, cast68);
            }
            struct std__basic_ostream_char__std__char_traits_char__* std69;
            __VERIFIER_nondet_memory(&std69, sizeof(std69));
            struct std__basic_ostream_char__std__char_traits_char__* std70;
            __VERIFIER_nondet_memory(&std70, sizeof(std70));
            int c71 = 0;
            __retval1 = c71;
            int t72 = __retval1;
            int ret_val73 = t72;
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
            return ret_val73;
  int t74 = __retval1;
  return t74;
}

