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
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[25] = "Ther wo needles this haw";
char _str_1[7] = "needle";
char _str_2[15] = "int(found)!=14";
char _str_3[112] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_find_6_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[26] = "first 'needle' found at: ";
char _str_5[10] = "needles a";
char _str_6[15] = "int(found)!=44";
char _str_7[27] = "second 'needle' found at: ";
char _str_8[3] = "ha";
char _str_9[15] = "int(found)==30";
char _str_10[27] = "'haystack' also found at: ";
char _str_11[50] = "basic_string: construction from null is not valid";
char _str_12[24] = "basic_string::_M_create";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0: ;
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2;
  struct std__allocator_char_ ref_tmp03;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str24;
  struct std__allocator_char_ ref_tmp15;
  unsigned long found6;
  int c7 = 0;
  __retval1 = c7;
  char* cast8 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&str2, sizeof(str2));
    __VERIFIER_nondet_memory(cast8, sizeof(*cast8));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    char* cast9 = (char*)&(_str_1);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&str24, sizeof(str24));
      __VERIFIER_nondet_memory(cast9, sizeof(*cast9));
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    }
      unsigned long c10 = 0;
      unsigned long std11 = __VERIFIER_nondet_unsigned_long();
      found6 = std11;
      unsigned long t12 = found6;
      int cast13 = (int)t12;
      int c14 = 14;
      _Bool c15 = ((cast13 != c14)) ? 1 : 0;
      if (c15) {
      } else {
        char* cast16 = (char*)&(_str_2);
        char* c17 = (char*)_str_3;
        unsigned int c18 = 24;
        char* cast19 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast16, c17, c18, cast19);
      }
        unsigned long t20 = found6;
        unsigned long t21 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
        _Bool c22 = ((t20 != t21)) ? 1 : 0;
        if (c22) {
          char* cast23 = (char*)&(_str_4);
          struct std__basic_ostream_char__std__char_traits_char__* std24;
          __VERIFIER_nondet_memory(&std24, sizeof(std24));
          unsigned long t25 = found6;
          int cast26 = (int)t25;
          struct std__basic_ostream_char__std__char_traits_char__* std27;
          __VERIFIER_nondet_memory(&std27, sizeof(std27));
          struct std__basic_ostream_char__std__char_traits_char__* std28;
          __VERIFIER_nondet_memory(&std28, sizeof(std28));
        }
      char* cast29 = (char*)&(_str_5);
      unsigned long t30 = found6;
      unsigned long c31 = 1;
      unsigned long b32 = t30 + c31;
      unsigned long c33 = 6;
      unsigned long std34 = __VERIFIER_nondet_unsigned_long();
      found6 = std34;
      unsigned long t35 = found6;
      int cast36 = (int)t35;
      int c37 = 44;
      _Bool c38 = ((cast36 != c37)) ? 1 : 0;
      if (c38) {
      } else {
        char* cast39 = (char*)&(_str_6);
        char* c40 = (char*)_str_3;
        unsigned int c41 = 29;
        char* cast42 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast39, c40, c41, cast42);
      }
        unsigned long t43 = found6;
        unsigned long t44 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
        _Bool c45 = ((t43 != t44)) ? 1 : 0;
        if (c45) {
          char* cast46 = (char*)&(_str_7);
          struct std__basic_ostream_char__std__char_traits_char__* std47;
          __VERIFIER_nondet_memory(&std47, sizeof(std47));
          unsigned long t48 = found6;
          int cast49 = (int)t48;
          struct std__basic_ostream_char__std__char_traits_char__* std50;
          __VERIFIER_nondet_memory(&std50, sizeof(std50));
          struct std__basic_ostream_char__std__char_traits_char__* std51;
          __VERIFIER_nondet_memory(&std51, sizeof(std51));
        }
      char* cast52 = (char*)&(_str_8);
      unsigned long c53 = 0;
      unsigned long std54 = __VERIFIER_nondet_unsigned_long();
      found6 = std54;
      unsigned long t55 = found6;
      int cast56 = (int)t55;
      int c57 = 30;
      _Bool c58 = ((cast56 == c57)) ? 1 : 0;
      if (c58) {
      } else {
        char* cast59 = (char*)&(_str_9);
        char* c60 = (char*)_str_3;
        unsigned int c61 = 34;
        char* cast62 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast59, c60, c61, cast62);
      }
        unsigned long t63 = found6;
        unsigned long t64 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
        _Bool c65 = ((t63 != t64)) ? 1 : 0;
        if (c65) {
          char* cast66 = (char*)&(_str_10);
          struct std__basic_ostream_char__std__char_traits_char__* std67;
          __VERIFIER_nondet_memory(&std67, sizeof(std67));
          unsigned long t68 = found6;
          int cast69 = (int)t68;
          struct std__basic_ostream_char__std__char_traits_char__* std70;
          __VERIFIER_nondet_memory(&std70, sizeof(std70));
          struct std__basic_ostream_char__std__char_traits_char__* std71;
          __VERIFIER_nondet_memory(&std71, sizeof(std71));
        }
      int c72 = 0;
      __retval1 = c72;
      int t73 = __retval1;
      int ret_val74 = t73;
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&str24, sizeof(str24));
      }
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&str2, sizeof(str2));
      }
      return ret_val74;
  int t75 = __retval1;
  return t75;
}

