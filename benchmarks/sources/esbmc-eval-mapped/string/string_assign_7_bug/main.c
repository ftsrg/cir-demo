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

char _str[20] = "The quick brown fox";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[29] = "str != \"The quick brown fox\"";
char _str_2[114] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_assign_7_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[50] = "basic_string: construction from null is not valid";
char _str_4[24] = "basic_string::_M_create";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ base3;
  struct std__allocator_char_ ref_tmp04;
  int c5 = 0;
  __retval1 = c5;
  // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
  __VERIFIER_nondet_memory(&str2, sizeof(str2));
    char* cast6 = (char*)&(_str);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&base3, sizeof(base3));
      __VERIFIER_nondet_memory(cast6, sizeof(*cast6));
      __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    }
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std7;
      __VERIFIER_nondet_memory(&std7, sizeof(std7));
      struct std__basic_ostream_char__std__char_traits_char__* std8;
      __VERIFIER_nondet_memory(&std8, sizeof(std8));
      struct std__basic_ostream_char__std__char_traits_char__* std9;
      __VERIFIER_nondet_memory(&std9, sizeof(std9));
      char* cast10 = (char*)&(_str);
      _Bool std11;
      __VERIFIER_nondet_memory(&std11, sizeof(std11));
      _Bool u12 = !std11;
      if (u12) {
      } else {
        char* cast13 = (char*)&(_str_1);
        char* c14 = _str_2;
        unsigned int c15 = 25;
        char* cast16 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast13, c14, c15, cast16);
      }
      int c17 = 0;
      __retval1 = c17;
      int t18 = __retval1;
      int ret_val19 = t18;
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&base3, sizeof(base3));
      }
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&str2, sizeof(str2));
      }
      return ret_val19;
  int t20 = __retval1;
  return t20;
}

