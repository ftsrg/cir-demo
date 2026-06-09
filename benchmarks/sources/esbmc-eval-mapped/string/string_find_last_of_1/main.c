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
char _str_2[16] = "Splitting one: ";
char _str_3[16] = "Splitting two: ";
char _str_4[3] = "/\\";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
char _str_5[16] = "int(found) == 8";
char _str_6[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_find_last_of_1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_7[10] = " folder: ";
char _str_8[8] = " file: ";
char _str_9[12] = "Splitting: ";
char _str_10[17] = "int(found) == 10";
char _str_11[50] = "basic_string: construction from null is not valid";
char _str_12[24] = "basic_string::_M_create";
char _str_13[21] = "basic_string::substr";
char _str_14[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_15[27] = "basic_string::basic_string";
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
      struct std__basic_ostream_char__std__char_traits_char__* std23;
      __VERIFIER_nondet_memory(&std23, sizeof(std23));
      struct std__basic_ostream_char__std__char_traits_char__* std24;
      __VERIFIER_nondet_memory(&std24, sizeof(std24));
      struct std__basic_ostream_char__std__char_traits_char__* std25;
      __VERIFIER_nondet_memory(&std25, sizeof(std25));
      char* cast26 = (char*)&(_str_4);
      unsigned long t27 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
      unsigned long std28 = __VERIFIER_nondet_unsigned_long();
      found6 = std28;
      unsigned long t29 = found6;
      int cast30 = (int)t29;
      int c31 = 8;
      _Bool c32 = ((cast30 == c31)) ? 1 : 0;
      if (c32) {
      } else {
        char* cast33 = (char*)&(_str_5);
        char* c34 = _str_6;
        unsigned int c35 = 25;
        char* cast36 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast33, c34, c35, cast36);
      }
      char* cast37 = (char*)&(_str_7);
      struct std__basic_ostream_char__std__char_traits_char__* std38;
      __VERIFIER_nondet_memory(&std38, sizeof(std38));
      unsigned long c39 = 0;
      unsigned long t40 = found6;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std41;
      __VERIFIER_nondet_memory(&std41, sizeof(std41));
      ref_tmp27 = std41;
        struct std__basic_ostream_char__std__char_traits_char__* std42;
        __VERIFIER_nondet_memory(&std42, sizeof(std42));
        struct std__basic_ostream_char__std__char_traits_char__* std43;
        __VERIFIER_nondet_memory(&std43, sizeof(std43));
        tmp_exprcleanup8 = std43;
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      }
      struct std__basic_ostream_char__std__char_traits_char__* t44 = tmp_exprcleanup8;
      char* cast45 = (char*)&(_str_8);
      struct std__basic_ostream_char__std__char_traits_char__* std46;
      __VERIFIER_nondet_memory(&std46, sizeof(std46));
      unsigned long t47 = found6;
      unsigned long c48 = 1;
      unsigned long b49 = t47 + c48;
      unsigned long t50 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std51;
      __VERIFIER_nondet_memory(&std51, sizeof(std51));
      ref_tmp39 = std51;
        struct std__basic_ostream_char__std__char_traits_char__* std52;
        __VERIFIER_nondet_memory(&std52, sizeof(std52));
        struct std__basic_ostream_char__std__char_traits_char__* std53;
        __VERIFIER_nondet_memory(&std53, sizeof(std53));
        tmp_exprcleanup10 = std53;
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
      }
      struct std__basic_ostream_char__std__char_traits_char__* t54 = tmp_exprcleanup10;
      char* cast55 = (char*)&(_str_9);
      struct std__basic_ostream_char__std__char_traits_char__* std56;
      __VERIFIER_nondet_memory(&std56, sizeof(std56));
      struct std__basic_ostream_char__std__char_traits_char__* std57;
      __VERIFIER_nondet_memory(&std57, sizeof(std57));
      struct std__basic_ostream_char__std__char_traits_char__* std58;
      __VERIFIER_nondet_memory(&std58, sizeof(std58));
      char* cast59 = (char*)&(_str_4);
      unsigned long t60 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
      unsigned long std61 = __VERIFIER_nondet_unsigned_long();
      found6 = std61;
      unsigned long t62 = found6;
      int cast63 = (int)t62;
      int c64 = 10;
      _Bool c65 = ((cast63 == c64)) ? 1 : 0;
      if (c65) {
      } else {
        char* cast66 = (char*)&(_str_10);
        char* c67 = _str_6;
        unsigned int c68 = 32;
        char* cast69 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast66, c67, c68, cast69);
      }
      char* cast70 = (char*)&(_str_7);
      struct std__basic_ostream_char__std__char_traits_char__* std71;
      __VERIFIER_nondet_memory(&std71, sizeof(std71));
      unsigned long c72 = 0;
      unsigned long t73 = found6;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std74;
      __VERIFIER_nondet_memory(&std74, sizeof(std74));
      ref_tmp411 = std74;
        struct std__basic_ostream_char__std__char_traits_char__* std75;
        __VERIFIER_nondet_memory(&std75, sizeof(std75));
        struct std__basic_ostream_char__std__char_traits_char__* std76;
        __VERIFIER_nondet_memory(&std76, sizeof(std76));
        tmp_exprcleanup12 = std76;
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&ref_tmp411, sizeof(ref_tmp411));
      }
      struct std__basic_ostream_char__std__char_traits_char__* t77 = tmp_exprcleanup12;
      char* cast78 = (char*)&(_str_8);
      struct std__basic_ostream_char__std__char_traits_char__* std79;
      __VERIFIER_nondet_memory(&std79, sizeof(std79));
      unsigned long t80 = found6;
      unsigned long c81 = 1;
      unsigned long b82 = t80 + c81;
      unsigned long t83 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std84;
      __VERIFIER_nondet_memory(&std84, sizeof(std84));
      ref_tmp513 = std84;
        struct std__basic_ostream_char__std__char_traits_char__* std85;
        __VERIFIER_nondet_memory(&std85, sizeof(std85));
        struct std__basic_ostream_char__std__char_traits_char__* std86;
        __VERIFIER_nondet_memory(&std86, sizeof(std86));
        tmp_exprcleanup14 = std86;
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&ref_tmp513, sizeof(ref_tmp513));
      }
      struct std__basic_ostream_char__std__char_traits_char__* t87 = tmp_exprcleanup14;
      int c88 = 0;
      __retval1 = c88;
      int t89 = __retval1;
      int ret_val90 = t89;
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&str24, sizeof(str24));
      }
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&str12, sizeof(str12));
      }
      return ret_val90;
  int t91 = __retval1;
  return t91;
}

