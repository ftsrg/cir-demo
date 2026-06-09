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
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[12] = "Test string";
char _str_1[28] = "strcmp(cstr, \"Test string\")";
char _str_2[112] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_data_4_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[25] = "basic_string::_M_replace";
char _str_4[24] = "basic_string::_M_create";
extern char* strcpy(char* p0, char* p1);
extern int strcmp(char* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2;
  char cstr3[11];
  int c4 = 0;
  __retval1 = c4;
  // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
  __VERIFIER_nondet_memory(&str2, sizeof(str2));
    char* cast5 = (char*)&(_str);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std6;
    __VERIFIER_nondet_memory(&std6, sizeof(std6));
    char* cast7 = (char*)&(cstr3);
    char* std8;
    __VERIFIER_nondet_memory(&std8, sizeof(std8));
    char* r9 = strcpy(cast7, std8);
    char* cast10 = (char*)&(cstr3);
    char* cast11 = (char*)&(_str);
    int r12 = strcmp(cast10, cast11);
    _Bool cast13 = (_Bool)r12;
    if (cast13) {
    } else {
      char* cast14 = (char*)&(_str_1);
      char* c15 = _str_2;
      unsigned int c16 = 21;
      char* cast17 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast14, c15, c16, cast17);
    }
    char* cast18 = (char*)&(cstr3);
    struct std__basic_ostream_char__std__char_traits_char__* std19;
    __VERIFIER_nondet_memory(&std19, sizeof(std19));
    struct std__basic_ostream_char__std__char_traits_char__* std20;
    __VERIFIER_nondet_memory(&std20, sizeof(std20));
  {
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
    __VERIFIER_nondet_memory(&str2, sizeof(str2));
  }
  int t21 = __retval1;
  return t21;
}

