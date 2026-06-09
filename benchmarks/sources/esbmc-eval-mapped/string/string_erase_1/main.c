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
struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ { char* _M_current; };
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

char _str[27] = "This is an example phrase.";
char _str_1[19] = "This is an phrase.";
char _str_2[28] = "str == \"This is an phrase.\"";
char _str_3[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_erase_1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[50] = "basic_string: construction from null is not valid";
char _str_5[24] = "basic_string::_M_create";
char _str_6[20] = "basic_string::erase";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
char _str_7[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2;
  struct std__allocator_char_ ref_tmp03;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ it4;
  int c5 = 0;
  __retval1 = c5;
  char* cast6 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&str2, sizeof(str2));
    __VERIFIER_nondet_memory(cast6, sizeof(*cast6));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    // externalized std:: op: __gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it4, sizeof(it4));
    unsigned long c7 = 10;
    unsigned long c8 = 8;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std9;
    __VERIFIER_nondet_memory(&std9, sizeof(std9));
    char* cast10 = (char*)&(_str_1);
    _Bool std11;
    __VERIFIER_nondet_memory(&std11, sizeof(std11));
    if (std11) {
    } else {
      char* cast12 = (char*)&(_str_2);
      char* c13 = _str_3;
      unsigned int c14 = 21;
      char* cast15 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast12, c13, c14, cast15);
    }
    struct std__basic_ostream_char__std__char_traits_char__* std16;
    __VERIFIER_nondet_memory(&std16, sizeof(std16));
    struct std__basic_ostream_char__std__char_traits_char__* std17;
    __VERIFIER_nondet_memory(&std17, sizeof(std17));
    int c18 = 0;
    __retval1 = c18;
    int t19 = __retval1;
    int ret_val20 = t19;
    {
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
      __VERIFIER_nondet_memory(&str2, sizeof(str2));
    }
    return ret_val20;
  int t21 = __retval1;
  return t21;
}

