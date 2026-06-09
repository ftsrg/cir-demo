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

char _str[50] = "We think in generalities, but we live in details.";
char _str_1[5] = "live";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[50] = "basic_string: construction from null is not valid";
char _str_3[24] = "basic_string::_M_create";
char _str_4[21] = "basic_string::substr";
char _str_5[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_6[27] = "basic_string::basic_string";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
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
  unsigned long pos6;
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
        unsigned long c13 = 12;
        unsigned long c14 = 12;
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
        pos6 = std20;
        unsigned long t21 = pos6;
        unsigned long t22 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std23;
        __VERIFIER_nondet_memory(&std23, sizeof(std23));
        ref_tmp29 = std23;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std24;
          __VERIFIER_nondet_memory(&std24, sizeof(std24));
          tmp_exprcleanup10 = std24;
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&ref_tmp29, sizeof(ref_tmp29));
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t25 = tmp_exprcleanup10;
        struct std__basic_ostream_char__std__char_traits_char__* std26;
        __VERIFIER_nondet_memory(&std26, sizeof(std26));
        char c27 = 32;
        struct std__basic_ostream_char__std__char_traits_char__* std28;
        __VERIFIER_nondet_memory(&std28, sizeof(std28));
        struct std__basic_ostream_char__std__char_traits_char__* std29;
        __VERIFIER_nondet_memory(&std29, sizeof(std29));
        struct std__basic_ostream_char__std__char_traits_char__* std30;
        __VERIFIER_nondet_memory(&std30, sizeof(std30));
        int c31 = 0;
        __retval1 = c31;
        int t32 = __retval1;
        int ret_val33 = t32;
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
        return ret_val33;
  int t34 = __retval1;
  return t34;
}

