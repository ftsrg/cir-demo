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
char _str[13] = "/usr/bin/man";
char _str_1[23] = "c:\\windows\\winhelp.exe";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[12] = "Splitting: ";
char _str_3[3] = "/\\";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
char _str_4[16] = "int(found) != 8";
char _str_5[120] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_find_last_of_2_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_6[10] = " folder: ";
char _str_7[8] = " file: ";
char _str_8[17] = "int(found) != 10";
char _str_9[50] = "basic_string: construction from null is not valid";
char _str_10[24] = "basic_string::_M_create";
char _str_11[21] = "basic_string::substr";
char _str_12[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_13[27] = "basic_string::basic_string";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str12;
  struct std__allocator_char_ ref_tmp03;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str24;
  struct std__allocator_char_ ref_tmp15;
  unsigned long found6;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp27;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup8;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp39;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup10;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp411;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup12;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp513;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup14;
  int c15 = 0;
  __retval1 = c15;
  char* cast16 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&str12, sizeof(str12));
    __VERIFIER_nondet_memory(cast16, sizeof(*cast16));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    char* cast17 = (char*)&(_str_1);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&str24, sizeof(str24));
      __VERIFIER_nondet_memory(cast17, sizeof(*cast17));
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    }
      char* cast18 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* std19;
      __VERIFIER_nondet_memory(&std19, sizeof(std19));
      struct std__basic_ostream_char__std__char_traits_char__* std20;
      __VERIFIER_nondet_memory(&std20, sizeof(std20));
      struct std__basic_ostream_char__std__char_traits_char__* std21;
      __VERIFIER_nondet_memory(&std21, sizeof(std21));
      char* cast22 = (char*)&(_str_3);
      unsigned long t23 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
      unsigned long std24 = __VERIFIER_nondet_unsigned_long();
      found6 = std24;
      unsigned long t25 = found6;
      int cast26 = (int)t25;
      int c27 = 8;
      _Bool c28 = ((cast26 != c27)) ? 1 : 0;
      if (c28) {
      } else {
        char* cast29 = (char*)&(_str_4);
        char* c30 = _str_5;
        unsigned int c31 = 24;
        char* cast32 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast29, c30, c31, cast32);
      }
      char* cast33 = (char*)&(_str_6);
      struct std__basic_ostream_char__std__char_traits_char__* std34;
      __VERIFIER_nondet_memory(&std34, sizeof(std34));
      unsigned long c35 = 0;
      unsigned long t36 = found6;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std37;
      __VERIFIER_nondet_memory(&std37, sizeof(std37));
      ref_tmp27 = std37;
        struct std__basic_ostream_char__std__char_traits_char__* std38;
        __VERIFIER_nondet_memory(&std38, sizeof(std38));
        struct std__basic_ostream_char__std__char_traits_char__* std39;
        __VERIFIER_nondet_memory(&std39, sizeof(std39));
        tmp_exprcleanup8 = std39;
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      }
      struct std__basic_ostream_char__std__char_traits_char__* t40 = tmp_exprcleanup8;
      char* cast41 = (char*)&(_str_7);
      struct std__basic_ostream_char__std__char_traits_char__* std42;
      __VERIFIER_nondet_memory(&std42, sizeof(std42));
      unsigned long t43 = found6;
      unsigned long c44 = 1;
      unsigned long b45 = t43 + c44;
      unsigned long t46 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std47;
      __VERIFIER_nondet_memory(&std47, sizeof(std47));
      ref_tmp39 = std47;
        struct std__basic_ostream_char__std__char_traits_char__* std48;
        __VERIFIER_nondet_memory(&std48, sizeof(std48));
        struct std__basic_ostream_char__std__char_traits_char__* std49;
        __VERIFIER_nondet_memory(&std49, sizeof(std49));
        tmp_exprcleanup10 = std49;
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
      }
      struct std__basic_ostream_char__std__char_traits_char__* t50 = tmp_exprcleanup10;
      char* cast51 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* std52;
      __VERIFIER_nondet_memory(&std52, sizeof(std52));
      struct std__basic_ostream_char__std__char_traits_char__* std53;
      __VERIFIER_nondet_memory(&std53, sizeof(std53));
      struct std__basic_ostream_char__std__char_traits_char__* std54;
      __VERIFIER_nondet_memory(&std54, sizeof(std54));
      char* cast55 = (char*)&(_str_3);
      unsigned long t56 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
      unsigned long std57 = __VERIFIER_nondet_unsigned_long();
      found6 = std57;
      unsigned long t58 = found6;
      int cast59 = (int)t58;
      int c60 = 10;
      _Bool c61 = ((cast59 != c60)) ? 1 : 0;
      if (c61) {
      } else {
        char* cast62 = (char*)&(_str_8);
        char* c63 = _str_5;
        unsigned int c64 = 30;
        char* cast65 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast62, c63, c64, cast65);
      }
      char* cast66 = (char*)&(_str_6);
      struct std__basic_ostream_char__std__char_traits_char__* std67;
      __VERIFIER_nondet_memory(&std67, sizeof(std67));
      unsigned long c68 = 0;
      unsigned long t69 = found6;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std70;
      __VERIFIER_nondet_memory(&std70, sizeof(std70));
      ref_tmp411 = std70;
        struct std__basic_ostream_char__std__char_traits_char__* std71;
        __VERIFIER_nondet_memory(&std71, sizeof(std71));
        struct std__basic_ostream_char__std__char_traits_char__* std72;
        __VERIFIER_nondet_memory(&std72, sizeof(std72));
        tmp_exprcleanup12 = std72;
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&ref_tmp411, sizeof(ref_tmp411));
      }
      struct std__basic_ostream_char__std__char_traits_char__* t73 = tmp_exprcleanup12;
      char* cast74 = (char*)&(_str_7);
      struct std__basic_ostream_char__std__char_traits_char__* std75;
      __VERIFIER_nondet_memory(&std75, sizeof(std75));
      unsigned long t76 = found6;
      unsigned long c77 = 1;
      unsigned long b78 = t76 + c77;
      unsigned long t79 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std80;
      __VERIFIER_nondet_memory(&std80, sizeof(std80));
      ref_tmp513 = std80;
        struct std__basic_ostream_char__std__char_traits_char__* std81;
        __VERIFIER_nondet_memory(&std81, sizeof(std81));
        struct std__basic_ostream_char__std__char_traits_char__* std82;
        __VERIFIER_nondet_memory(&std82, sizeof(std82));
        tmp_exprcleanup14 = std82;
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&ref_tmp513, sizeof(ref_tmp513));
      }
      struct std__basic_ostream_char__std__char_traits_char__* t83 = tmp_exprcleanup14;
      int c84 = 0;
      __retval1 = c84;
      int t85 = __retval1;
      int ret_val86 = t85;
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&str24, sizeof(str24));
      }
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&str12, sizeof(str12));
      }
      return ret_val86;
  int t87 = __retval1;
  return t87;
}

