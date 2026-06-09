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
struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ { char* _M_current; };
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
char _str_2[28] = "str != \"This is an phrase.\"";
char _str_3[117] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_erase_final_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[18] = "This is a phrase.";
char _str_5[27] = "str != \"This is a phrase.\"";
char _str_6[13] = "This phrase.";
char _str_7[22] = "str != \"This phrase.\"";
char _str_8[50] = "basic_string: construction from null is not valid";
char _str_9[24] = "basic_string::_M_create";
char _str_10[20] = "basic_string::erase";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
char _str_11[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
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
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp15;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp26;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp07;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp18;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp29;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp310;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp411;
  struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp312;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp513;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp614;
  struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp415;
  int c16 = 0;
  __retval1 = c16;
  char* cast17 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&str2, sizeof(str2));
    __VERIFIER_nondet_memory(cast17, sizeof(*cast17));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    // externalized std:: op: __gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it4, sizeof(it4));
    unsigned long c18 = 10;
    unsigned long c19 = 8;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std20;
    __VERIFIER_nondet_memory(&std20, sizeof(std20));
    char* cast21 = (char*)&(_str_1);
    _Bool std22;
    __VERIFIER_nondet_memory(&std22, sizeof(std22));
    _Bool u23 = !std22;
    if (u23) {
    } else {
      char* cast24 = (char*)&(_str_2);
      char* c25 = _str_3;
      unsigned int c26 = 22;
      char* cast27 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast24, c25, c26, cast27);
    }
    struct std__basic_ostream_char__std__char_traits_char__* std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    struct std__basic_ostream_char__std__char_traits_char__* std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
    ref_tmp26 = std30;
    long c31 = 9;
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    ref_tmp15 = std32;
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
    __VERIFIER_nondet_memory(&agg_tmp07, sizeof(agg_tmp07));
    __VERIFIER_nondet_memory(&it4, sizeof(it4));
    struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t34 = agg_tmp07;
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std35;
    __VERIFIER_nondet_memory(&std35, sizeof(std35));
    agg_tmp18 = std35;
    char* cast36 = (char*)&(_str_4);
    _Bool std37;
    __VERIFIER_nondet_memory(&std37, sizeof(std37));
    _Bool u38 = !std37;
    if (u38) {
    } else {
      char* cast39 = (char*)&(_str_5);
      char* c40 = _str_3;
      unsigned int c41 = 27;
      char* cast42 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast39, c40, c41, cast42);
    }
    struct std__basic_ostream_char__std__char_traits_char__* std43;
    __VERIFIER_nondet_memory(&std43, sizeof(std43));
    struct std__basic_ostream_char__std__char_traits_char__* std44;
    __VERIFIER_nondet_memory(&std44, sizeof(std44));
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
    ref_tmp411 = std45;
    long c46 = 5;
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std47;
    __VERIFIER_nondet_memory(&std47, sizeof(std47));
    ref_tmp310 = std47;
    // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
    __VERIFIER_nondet_memory(&agg_tmp29, sizeof(agg_tmp29));
    __VERIFIER_nondet_memory(&ref_tmp310, sizeof(ref_tmp310));
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std48;
    __VERIFIER_nondet_memory(&std48, sizeof(std48));
    ref_tmp614 = std48;
    long c49 = 7;
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std50;
    __VERIFIER_nondet_memory(&std50, sizeof(std50));
    ref_tmp513 = std50;
    // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2IPcQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISD_S8_EE
    __VERIFIER_nondet_memory(&agg_tmp312, sizeof(agg_tmp312));
    __VERIFIER_nondet_memory(&ref_tmp513, sizeof(ref_tmp513));
    struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t51 = agg_tmp29;
    struct __gnu_cxx____normal_iterator_const_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ t52 = agg_tmp312;
    struct __gnu_cxx____normal_iterator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std53;
    __VERIFIER_nondet_memory(&std53, sizeof(std53));
    agg_tmp415 = std53;
    char* cast54 = (char*)&(_str_6);
    _Bool std55;
    __VERIFIER_nondet_memory(&std55, sizeof(std55));
    _Bool u56 = !std55;
    if (u56) {
    } else {
      char* cast57 = (char*)&(_str_7);
      char* c58 = _str_3;
      unsigned int c59 = 31;
      char* cast60 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast57, c58, c59, cast60);
    }
    struct std__basic_ostream_char__std__char_traits_char__* std61;
    __VERIFIER_nondet_memory(&std61, sizeof(std61));
    struct std__basic_ostream_char__std__char_traits_char__* std62;
    __VERIFIER_nondet_memory(&std62, sizeof(std62));
    int c63 = 0;
    __retval1 = c63;
    int t64 = __retval1;
    int ret_val65 = t64;
    {
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
      __VERIFIER_nondet_memory(&str2, sizeof(str2));
    }
    return ret_val65;
  int t66 = __retval1;
  return t66;
}

