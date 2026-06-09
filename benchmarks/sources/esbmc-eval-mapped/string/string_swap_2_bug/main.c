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
char _str[6] = "money";
char _str_1[6] = "goods";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[24] = "Before swap, buyer has ";
char _str_3[17] = " and seller has ";
char _str_4[18] = "seller != \"money\"";
char _str_5[112] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_swap_2_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_6[17] = "buyer != \"goods\"";
char _str_7[24] = " After swap, buyer has ";
char _str_8[50] = "basic_string: construction from null is not valid";
char _str_9[24] = "basic_string::_M_create";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ buyer2;
  struct std__allocator_char_ ref_tmp03;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ seller4;
  struct std__allocator_char_ ref_tmp15;
  int c6 = 0;
  __retval1 = c6;
  char* cast7 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&buyer2, sizeof(buyer2));
    __VERIFIER_nondet_memory(cast7, sizeof(*cast7));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    char* cast8 = (char*)&(_str_1);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&seller4, sizeof(seller4));
      __VERIFIER_nondet_memory(cast8, sizeof(*cast8));
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    }
      char* cast9 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* std10;
      __VERIFIER_nondet_memory(&std10, sizeof(std10));
      struct std__basic_ostream_char__std__char_traits_char__* std11;
      __VERIFIER_nondet_memory(&std11, sizeof(std11));
      char* cast12 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* std13;
      __VERIFIER_nondet_memory(&std13, sizeof(std13));
      struct std__basic_ostream_char__std__char_traits_char__* std14;
      __VERIFIER_nondet_memory(&std14, sizeof(std14));
      struct std__basic_ostream_char__std__char_traits_char__* std15;
      __VERIFIER_nondet_memory(&std15, sizeof(std15));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::swap(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
      __VERIFIER_nondet_memory(&seller4, sizeof(seller4));
      __VERIFIER_nondet_memory(&buyer2, sizeof(buyer2));
      char* cast16 = (char*)&(_str);
      _Bool std17;
      __VERIFIER_nondet_memory(&std17, sizeof(std17));
      _Bool u18 = !std17;
      if (u18) {
      } else {
        char* cast19 = (char*)&(_str_4);
        char* c20 = _str_5;
        unsigned int c21 = 25;
        char* cast22 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast19, c20, c21, cast22);
      }
      char* cast23 = (char*)&(_str_1);
      _Bool std24;
      __VERIFIER_nondet_memory(&std24, sizeof(std24));
      _Bool u25 = !std24;
      if (u25) {
      } else {
        char* cast26 = (char*)&(_str_6);
        char* c27 = _str_5;
        unsigned int c28 = 26;
        char* cast29 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast26, c27, c28, cast29);
      }
      char* cast30 = (char*)&(_str_7);
      struct std__basic_ostream_char__std__char_traits_char__* std31;
      __VERIFIER_nondet_memory(&std31, sizeof(std31));
      struct std__basic_ostream_char__std__char_traits_char__* std32;
      __VERIFIER_nondet_memory(&std32, sizeof(std32));
      char* cast33 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* std34;
      __VERIFIER_nondet_memory(&std34, sizeof(std34));
      struct std__basic_ostream_char__std__char_traits_char__* std35;
      __VERIFIER_nondet_memory(&std35, sizeof(std35));
      struct std__basic_ostream_char__std__char_traits_char__* std36;
      __VERIFIER_nondet_memory(&std36, sizeof(std36));
      int c37 = 0;
      __retval1 = c37;
      int t38 = __retval1;
      int ret_val39 = t38;
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&seller4, sizeof(seller4));
      }
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&buyer2, sizeof(buyer2));
      }
      return ret_val39;
  int t40 = __retval1;
  return t40;
}

