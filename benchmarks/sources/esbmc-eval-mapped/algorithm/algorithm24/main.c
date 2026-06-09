extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "myvector[0] == 20";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm24/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "myvector[1] == 20";
char _str_3[18] = "myvector[2] == 20";
char _str_4[18] = "myvector[3] == 20";
char _str_5[18] = "myvector[3] == 33";
char _str_6[18] = "myvector[4] == 33";
char _str_7[18] = "myvector[5] == 33";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_8[19] = "myvector contains:";
char _str_9[2] = " ";
char _str_10[49] = "cannot create std::vector larger than max_size()";
char _str_11[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_12[9] = "__n >= 0";
char _str_13[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_14[19] = "__n < this->size()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__vector_int__std__allocator_int__ myvector2;
  int ref_tmp03;
  struct std__allocator_int_ ref_tmp14;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp05;
  int ref_tmp26;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp17;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp28;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp39;
  int ref_tmp410;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp311;
  int c12 = 0;
  __retval1 = c12;
  unsigned long c13 = 8;
  int c14 = 10;
  ref_tmp03 = c14;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, int const&, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
  }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std15;
    __VERIFIER_nondet_memory(&std15, sizeof(std15));
    agg_tmp05 = std15;
    int c16 = 4;
    int c17 = 20;
    ref_tmp26 = c17;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t18 = agg_tmp05;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std19;
    __VERIFIER_nondet_memory(&std19, sizeof(std19));
    agg_tmp17 = std19;
    unsigned long c20 = 0;
    int* std21;
    __VERIFIER_nondet_memory(&std21, sizeof(std21));
    int t22 = *std21;
    int c23 = 20;
    _Bool c24 = ((t22 == c23)) ? 1 : 0;
    if (c24) {
    } else {
      char* cast25 = (char*)&(_str);
      char* c26 = _str_1;
      unsigned int c27 = 20;
      char* cast28 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast25, c26, c27, cast28);
    }
    unsigned long c29 = 1;
    int* std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
    int t31 = *std30;
    int c32 = 20;
    _Bool c33 = ((t31 == c32)) ? 1 : 0;
    if (c33) {
    } else {
      char* cast34 = (char*)&(_str_2);
      char* c35 = _str_1;
      unsigned int c36 = 21;
      char* cast37 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast34, c35, c36, cast37);
    }
    unsigned long c38 = 2;
    int* std39;
    __VERIFIER_nondet_memory(&std39, sizeof(std39));
    int t40 = *std39;
    int c41 = 20;
    _Bool c42 = ((t40 == c41)) ? 1 : 0;
    if (c42) {
    } else {
      char* cast43 = (char*)&(_str_3);
      char* c44 = _str_1;
      unsigned int c45 = 22;
      char* cast46 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast43, c44, c45, cast46);
    }
    unsigned long c47 = 3;
    int* std48;
    __VERIFIER_nondet_memory(&std48, sizeof(std48));
    int t49 = *std48;
    int c50 = 20;
    _Bool c51 = ((t49 == c50)) ? 1 : 0;
    if (c51) {
    } else {
      char* cast52 = (char*)&(_str_4);
      char* c53 = _str_1;
      unsigned int c54 = 23;
      char* cast55 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast52, c53, c54, cast55);
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std56;
    __VERIFIER_nondet_memory(&std56, sizeof(std56));
    ref_tmp39 = std56;
    long c57 = 3;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std58;
    __VERIFIER_nondet_memory(&std58, sizeof(std58));
    agg_tmp28 = std58;
    int c59 = 3;
    int c60 = 33;
    ref_tmp410 = c60;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t61 = agg_tmp28;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std62;
    __VERIFIER_nondet_memory(&std62, sizeof(std62));
    agg_tmp311 = std62;
    unsigned long c63 = 3;
    int* std64;
    __VERIFIER_nondet_memory(&std64, sizeof(std64));
    int t65 = *std64;
    int c66 = 33;
    _Bool c67 = ((t65 == c66)) ? 1 : 0;
    if (c67) {
    } else {
      char* cast68 = (char*)&(_str_5);
      char* c69 = _str_1;
      unsigned int c70 = 27;
      char* cast71 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast68, c69, c70, cast71);
    }
    unsigned long c72 = 4;
    int* std73;
    __VERIFIER_nondet_memory(&std73, sizeof(std73));
    int t74 = *std73;
    int c75 = 33;
    _Bool c76 = ((t74 == c75)) ? 1 : 0;
    if (c76) {
    } else {
      char* cast77 = (char*)&(_str_6);
      char* c78 = _str_1;
      unsigned int c79 = 28;
      char* cast80 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast77, c78, c79, cast80);
    }
    unsigned long c81 = 5;
    int* std82;
    __VERIFIER_nondet_memory(&std82, sizeof(std82));
    int t83 = *std82;
    int c84 = 33;
    _Bool c85 = ((t83 == c84)) ? 1 : 0;
    if (c85) {
    } else {
      char* cast86 = (char*)&(_str_7);
      char* c87 = _str_1;
      unsigned int c88 = 29;
      char* cast89 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast86, c87, c88, cast89);
    }
    char* cast90 = (char*)&(_str_8);
    struct std__basic_ostream_char__std__char_traits_char__* std91;
    __VERIFIER_nondet_memory(&std91, sizeof(std91));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it92;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp593;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std94;
      __VERIFIER_nondet_memory(&std94, sizeof(std94));
      it92 = std94;
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std96;
        __VERIFIER_nondet_memory(&std96, sizeof(std96));
        ref_tmp593 = std96;
        _Bool std97;
        __VERIFIER_nondet_memory(&std97, sizeof(std97));
        _Bool u98 = !std97;
        if (!u98) break;
        char* cast99 = (char*)&(_str_9);
        struct std__basic_ostream_char__std__char_traits_char__* std100;
        __VERIFIER_nondet_memory(&std100, sizeof(std100));
        int* std101;
        __VERIFIER_nondet_memory(&std101, sizeof(std101));
        int t102 = *std101;
        struct std__basic_ostream_char__std__char_traits_char__* std103;
        __VERIFIER_nondet_memory(&std103, sizeof(std103));
      for_step95: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std104;
        __VERIFIER_nondet_memory(&std104, sizeof(std104));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std105;
    __VERIFIER_nondet_memory(&std105, sizeof(std105));
    int c106 = 0;
    __retval1 = c106;
    int t107 = __retval1;
    int ret_val108 = t107;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    }
    return ret_val108;
  int t109 = __retval1;
  return t109;
}

