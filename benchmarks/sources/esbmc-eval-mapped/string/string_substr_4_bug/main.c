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

char _str[13] = "We ge, live.";
char _str_1[5] = "live";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[13] = "generalities";
char _str_3[16] = "live in details";
char _str_4[54] = "(str2 == \"generalities\")&&(str3 != \"live in details\")";
char _str_5[114] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_substr_4_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_6[50] = "basic_string: construction from null is not valid";
char _str_7[24] = "basic_string::_M_create";
char _str_8[21] = "basic_string::substr";
char _str_9[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_10[27] = "basic_string::basic_string";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2;
  struct std__allocator_char_ ref_tmp03;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str24;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str35;
  int pos6;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp17;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup8;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp29;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup10;
  int c11 = 0;
  __retval1 = c11;
  char* cast12 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&str2, sizeof(str2));
    __VERIFIER_nondet_memory(cast12, sizeof(*cast12));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
    __VERIFIER_nondet_memory(&str24, sizeof(str24));
      // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
      __VERIFIER_nondet_memory(&str35, sizeof(str35));
        unsigned long c13 = 3;
        unsigned long c14 = 2;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std15;
        __VERIFIER_nondet_memory(&std15, sizeof(std15));
        ref_tmp17 = std15;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std16;
          __VERIFIER_nondet_memory(&std16, sizeof(std16));
          tmp_exprcleanup8 = std16;
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&ref_tmp17, sizeof(ref_tmp17));
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t17 = tmp_exprcleanup8;
        char* cast18 = (char*)&(_str_1);
        unsigned long c19 = 0;
        unsigned long std20 = __VERIFIER_nondet_unsigned_long();
        int cast21 = (int)std20;
        pos6 = cast21;
        int t22 = pos6;
        unsigned long cast23 = (unsigned long)t22;
        unsigned long t24 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std25;
        __VERIFIER_nondet_memory(&std25, sizeof(std25));
        ref_tmp29 = std25;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std26;
          __VERIFIER_nondet_memory(&std26, sizeof(std26));
          tmp_exprcleanup10 = std26;
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&ref_tmp29, sizeof(ref_tmp29));
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t27 = tmp_exprcleanup10;
        struct std__basic_ostream_char__std__char_traits_char__* std28;
        __VERIFIER_nondet_memory(&std28, sizeof(std28));
        char c29 = 32;
        struct std__basic_ostream_char__std__char_traits_char__* std30;
        __VERIFIER_nondet_memory(&std30, sizeof(std30));
        struct std__basic_ostream_char__std__char_traits_char__* std31;
        __VERIFIER_nondet_memory(&std31, sizeof(std31));
        struct std__basic_ostream_char__std__char_traits_char__* std32;
        __VERIFIER_nondet_memory(&std32, sizeof(std32));
        char* cast33 = (char*)&(_str_2);
        _Bool std34;
        __VERIFIER_nondet_memory(&std34, sizeof(std34));
        _Bool ternary35;
        if (std34) {
          char* cast36 = (char*)&(_str_3);
          _Bool std37;
          __VERIFIER_nondet_memory(&std37, sizeof(std37));
          _Bool u38 = !std37;
          ternary35 = (_Bool)u38;
        } else {
          _Bool c39 = 0;
          ternary35 = (_Bool)c39;
        }
        if (ternary35) {
        } else {
          char* cast40 = (char*)&(_str_4);
          char* c41 = _str_5;
          unsigned int c42 = 30;
          char* cast43 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast40, c41, c42, cast43);
        }
        int c44 = 0;
        __retval1 = c44;
        int t45 = __retval1;
        int ret_val46 = t45;
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&str35, sizeof(str35));
        }
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&str24, sizeof(str24));
        }
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&str2, sizeof(str2));
        }
        return ret_val46;
  int t47 = __retval1;
  return t47;
}

