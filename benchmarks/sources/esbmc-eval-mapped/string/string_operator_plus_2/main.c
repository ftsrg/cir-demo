extern void abort(void);
// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__less_const_char___ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
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

char _str[14] = "Test string: ";
char _str_1[24] = "str1 == \"Test string: \"";
char _str_2[117] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_operator_plus_2/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[2] = "x";
char _str_4[12] = "str2 == \"x\"";
char _str_5[15] = "Test string: x";
char _str_6[25] = "str3 == \"Test string: x\"";
char _str_7[6] = ", y, ";
char _str_8[20] = "Test string: x, y, ";
char _str_9[30] = "str3 == \"Test string: x, y, \"";
char _str_10[2] = "z";
char _str_11[21] = "Test string: x, y, z";
char _str_12[31] = "str3 == \"Test string: x, y, z\"";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_13[25] = "basic_string::_M_replace";
char _str_14[24] = "basic_string::_M_create";
char _str_15[21] = "basic_string::append";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
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
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp05;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup6;
  int c7 = 0;
  __retval1 = c7;
  // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
  __VERIFIER_nondet_memory(&str12, sizeof(str12));
    // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
    __VERIFIER_nondet_memory(&str23, sizeof(str23));
      // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
      __VERIFIER_nondet_memory(&str34, sizeof(str34));
        char* cast8 = (char*)&(_str);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std9;
        __VERIFIER_nondet_memory(&std9, sizeof(std9));
        char* cast10 = (char*)&(_str);
        _Bool std11;
        __VERIFIER_nondet_memory(&std11, sizeof(std11));
        if (std11) {
        } else {
          char* cast12 = (char*)&(_str_1);
          char* c13 = (char*)_str_2;
          unsigned int c14 = 19;
          char* cast15 = (char*)&(__PRETTY_FUNCTION___main);
          reach_error();
          __assert_fail(cast12, c13, c14, cast15);
        }
        char* cast16 = (char*)&(_str_3);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std17;
        __VERIFIER_nondet_memory(&std17, sizeof(std17));
        char* cast18 = (char*)&(_str_3);
        _Bool std19;
        __VERIFIER_nondet_memory(&std19, sizeof(std19));
        if (std19) {
        } else {
          char* cast20 = (char*)&(_str_4);
          char* c21 = (char*)_str_2;
          unsigned int c22 = 21;
          char* cast23 = (char*)&(__PRETTY_FUNCTION___main);
          reach_error();
          __assert_fail(cast20, c21, c22, cast23);
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std24;
        __VERIFIER_nondet_memory(&std24, sizeof(std24));
        ref_tmp05 = std24;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std25;
          __VERIFIER_nondet_memory(&std25, sizeof(std25));
          tmp_exprcleanup6 = std25;
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t26 = tmp_exprcleanup6;
        char* cast27 = (char*)&(_str_5);
        _Bool std28;
        __VERIFIER_nondet_memory(&std28, sizeof(std28));
        if (std28) {
        } else {
          char* cast29 = (char*)&(_str_6);
          char* c30 = (char*)_str_2;
          unsigned int c31 = 23;
          char* cast32 = (char*)&(__PRETTY_FUNCTION___main);
          reach_error();
          __assert_fail(cast29, c30, c31, cast32);
        }
        char* cast33 = (char*)&(_str_7);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std34;
        __VERIFIER_nondet_memory(&std34, sizeof(std34));
        char* cast35 = (char*)&(_str_8);
        _Bool std36;
        __VERIFIER_nondet_memory(&std36, sizeof(std36));
        if (std36) {
        } else {
          char* cast37 = (char*)&(_str_9);
          char* c38 = (char*)_str_2;
          unsigned int c39 = 26;
          char* cast40 = (char*)&(__PRETTY_FUNCTION___main);
          reach_error();
          __assert_fail(cast37, c38, c39, cast40);
        }
        char* cast41 = (char*)&(_str_10);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std42;
        __VERIFIER_nondet_memory(&std42, sizeof(std42));
        char* cast43 = (char*)&(_str_11);
        _Bool std44;
        __VERIFIER_nondet_memory(&std44, sizeof(std44));
        if (std44) {
        } else {
          char* cast45 = (char*)&(_str_12);
          char* c46 = (char*)_str_2;
          unsigned int c47 = 29;
          char* cast48 = (char*)&(__PRETTY_FUNCTION___main);
          reach_error();
          __assert_fail(cast45, c46, c47, cast48);
        }
        struct std__basic_ostream_char__std__char_traits_char__* std49;
        __VERIFIER_nondet_memory(&std49, sizeof(std49));
        struct std__basic_ostream_char__std__char_traits_char__* std50;
        __VERIFIER_nondet_memory(&std50, sizeof(std50));
        int c51 = 0;
        __retval1 = c51;
        int t52 = __retval1;
        int ret_val53 = t52;
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
        return ret_val53;
  int t54 = __retval1;
  return t54;
}

