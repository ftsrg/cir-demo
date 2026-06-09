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
struct std__less_const_char___ { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__ctype_char_;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

char _str[43] = "The quick brown fox jumps over a lazy dog.";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[18] = "pangrams are cool";
char _str_2[9] = "c-string";
char _str_3[11] = "**********";
char _str_4[20] = "str == \"**********\"";
char _str_5[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_assign_5/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_6[50] = "basic_string: construction from null is not valid";
char _str_7[24] = "basic_string::_M_create";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
char _str_8[21] = "basic_string::assign";
char _str_9[25] = "basic_string::_M_replace";
char _str_10[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_11[29] = "basic_string::_M_replace_aux";
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
      unsigned long c10 = 10;
      unsigned long c11 = 9;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std12;
      __VERIFIER_nondet_memory(&std12, sizeof(std12));
      struct std__basic_ostream_char__std__char_traits_char__* std13;
      __VERIFIER_nondet_memory(&std13, sizeof(std13));
      struct std__basic_ostream_char__std__char_traits_char__* std14;
      __VERIFIER_nondet_memory(&std14, sizeof(std14));
      char* cast15 = (char*)&(_str_1);
      unsigned long c16 = 7;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std17;
      __VERIFIER_nondet_memory(&std17, sizeof(std17));
      struct std__basic_ostream_char__std__char_traits_char__* std18;
      __VERIFIER_nondet_memory(&std18, sizeof(std18));
      struct std__basic_ostream_char__std__char_traits_char__* std19;
      __VERIFIER_nondet_memory(&std19, sizeof(std19));
      char* cast20 = (char*)&(_str_2);
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std21;
      __VERIFIER_nondet_memory(&std21, sizeof(std21));
      struct std__basic_ostream_char__std__char_traits_char__* std22;
      __VERIFIER_nondet_memory(&std22, sizeof(std22));
      struct std__basic_ostream_char__std__char_traits_char__* std23;
      __VERIFIER_nondet_memory(&std23, sizeof(std23));
      unsigned long c24 = 10;
      char c25 = 42;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std26;
      __VERIFIER_nondet_memory(&std26, sizeof(std26));
      struct std__basic_ostream_char__std__char_traits_char__* std27;
      __VERIFIER_nondet_memory(&std27, sizeof(std27));
      struct std__basic_ostream_char__std__char_traits_char__* std28;
      __VERIFIER_nondet_memory(&std28, sizeof(std28));
      char* cast29 = (char*)&(_str_3);
      _Bool std30;
      __VERIFIER_nondet_memory(&std30, sizeof(std30));
      if (std30) {
      } else {
        char* cast31 = (char*)&(_str_4);
        char* c32 = _str_5;
        unsigned int c33 = 37;
        char* cast34 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast31, c32, c33, cast34);
      }
      int c35 = 0;
      __retval1 = c35;
      int t36 = __retval1;
      int ret_val37 = t36;
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&base3, sizeof(base3));
      }
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&str2, sizeof(str2));
      }
      return ret_val37;
  int t38 = __retval1;
  return t38;
}

