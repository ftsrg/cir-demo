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
struct __gnu_cxx____ops___Iter_less_iter { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_less_val { unsigned char __field0; };
struct __gnu_cxx____ops___Val_less_iter { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Temporary_buffer___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int____Impl { long _M_len; int* _M_buffer; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std____pair_base_int____long_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__nothrow_t { unsigned char __field0; };
struct std__pair_int____long_ { int* first; long second; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Temporary_buffer___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int_ { long _M_original_len; struct std___Temporary_buffer___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_____int____Impl _M_impl; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_second[5] = {10, 20, 30, 40, 50};
int __const_main_first[5] = {5, 10, 15, 20, 25};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[10] = "v[0] == 5";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm50/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[11] = "v[1] == 10";
char _str_3[11] = "v[2] == 10";
char _str_4[11] = "v[3] == 15";
char _str_5[11] = "v[4] == 20";
char _str_6[11] = "v[5] == 20";
char _str_7[11] = "v[6] == 25";
char _str_8[11] = "v[7] == 30";
char _str_9[11] = "v[8] == 40";
char _str_10[11] = "v[9] == 50";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_11[31] = "The resulting vector contains:";
char _str_12[2] = " ";
char _str_13[49] = "cannot create std::vector larger than max_size()";
char _str_14[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_15[19] = "__n < this->size()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int first2[5];
  int second3[5];
  struct std__vector_int__std__allocator_int__ v4;
  struct std__allocator_int_ ref_tmp05;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it6;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp07;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp18;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp29;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp110;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp311;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp412;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp513;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp214;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp615;
  int c16 = 0;
  __retval1 = c16;
  // array copy
  __builtin_memcpy(first2, __const_main_first, (unsigned long)5 * sizeof(__const_main_first[0]));
  // array copy
  __builtin_memcpy(second3, __const_main_second, (unsigned long)5 * sizeof(__const_main_second[0]));
  unsigned long c17 = 10;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&v4, sizeof(v4));
    __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
  }
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it6, sizeof(it6));
    int* cast18 = (int*)&(first2);
    int* cast19 = (int*)&(first2);
    int c20 = 5;
    int* ptr21 = &(cast19)[c20];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std22;
    __VERIFIER_nondet_memory(&std22, sizeof(std22));
    agg_tmp07 = std22;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t23 = agg_tmp07;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std24;
    __VERIFIER_nondet_memory(&std24, sizeof(std24));
    agg_tmp18 = std24;
    int* cast25 = (int*)&(second3);
    int* cast26 = (int*)&(second3);
    int c27 = 5;
    int* ptr28 = &(cast26)[c27];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    ref_tmp110 = std29;
    long c30 = 5;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    agg_tmp29 = std31;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t32 = agg_tmp29;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    agg_tmp311 = std33;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std34;
    __VERIFIER_nondet_memory(&std34, sizeof(std34));
    agg_tmp412 = std34;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std35;
    __VERIFIER_nondet_memory(&std35, sizeof(std35));
    ref_tmp214 = std35;
    long c36 = 5;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std37;
    __VERIFIER_nondet_memory(&std37, sizeof(std37));
    agg_tmp513 = std37;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    agg_tmp615 = std38;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t39 = agg_tmp412;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t40 = agg_tmp513;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t41 = agg_tmp615;
    // externalized std:: op: void std::inplace_merge<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >)
    unsigned long c42 = 0;
    int* std43;
    __VERIFIER_nondet_memory(&std43, sizeof(std43));
    int t44 = *std43;
    int c45 = 5;
    _Bool c46 = ((t44 == c45)) ? 1 : 0;
    if (c46) {
    } else {
      char* cast47 = (char*)&(_str);
      char* c48 = _str_1;
      unsigned int c49 = 26;
      char* cast50 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast47, c48, c49, cast50);
    }
    unsigned long c51 = 1;
    int* std52;
    __VERIFIER_nondet_memory(&std52, sizeof(std52));
    int t53 = *std52;
    int c54 = 10;
    _Bool c55 = ((t53 == c54)) ? 1 : 0;
    if (c55) {
    } else {
      char* cast56 = (char*)&(_str_2);
      char* c57 = _str_1;
      unsigned int c58 = 27;
      char* cast59 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast56, c57, c58, cast59);
    }
    unsigned long c60 = 2;
    int* std61;
    __VERIFIER_nondet_memory(&std61, sizeof(std61));
    int t62 = *std61;
    int c63 = 10;
    _Bool c64 = ((t62 == c63)) ? 1 : 0;
    if (c64) {
    } else {
      char* cast65 = (char*)&(_str_3);
      char* c66 = _str_1;
      unsigned int c67 = 28;
      char* cast68 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast65, c66, c67, cast68);
    }
    unsigned long c69 = 3;
    int* std70;
    __VERIFIER_nondet_memory(&std70, sizeof(std70));
    int t71 = *std70;
    int c72 = 15;
    _Bool c73 = ((t71 == c72)) ? 1 : 0;
    if (c73) {
    } else {
      char* cast74 = (char*)&(_str_4);
      char* c75 = _str_1;
      unsigned int c76 = 29;
      char* cast77 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast74, c75, c76, cast77);
    }
    unsigned long c78 = 4;
    int* std79;
    __VERIFIER_nondet_memory(&std79, sizeof(std79));
    int t80 = *std79;
    int c81 = 20;
    _Bool c82 = ((t80 == c81)) ? 1 : 0;
    if (c82) {
    } else {
      char* cast83 = (char*)&(_str_5);
      char* c84 = _str_1;
      unsigned int c85 = 30;
      char* cast86 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast83, c84, c85, cast86);
    }
    unsigned long c87 = 5;
    int* std88;
    __VERIFIER_nondet_memory(&std88, sizeof(std88));
    int t89 = *std88;
    int c90 = 20;
    _Bool c91 = ((t89 == c90)) ? 1 : 0;
    if (c91) {
    } else {
      char* cast92 = (char*)&(_str_6);
      char* c93 = _str_1;
      unsigned int c94 = 31;
      char* cast95 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast92, c93, c94, cast95);
    }
    unsigned long c96 = 6;
    int* std97;
    __VERIFIER_nondet_memory(&std97, sizeof(std97));
    int t98 = *std97;
    int c99 = 25;
    _Bool c100 = ((t98 == c99)) ? 1 : 0;
    if (c100) {
    } else {
      char* cast101 = (char*)&(_str_7);
      char* c102 = _str_1;
      unsigned int c103 = 32;
      char* cast104 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast101, c102, c103, cast104);
    }
    unsigned long c105 = 7;
    int* std106;
    __VERIFIER_nondet_memory(&std106, sizeof(std106));
    int t107 = *std106;
    int c108 = 30;
    _Bool c109 = ((t107 == c108)) ? 1 : 0;
    if (c109) {
    } else {
      char* cast110 = (char*)&(_str_8);
      char* c111 = _str_1;
      unsigned int c112 = 33;
      char* cast113 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast110, c111, c112, cast113);
    }
    unsigned long c114 = 8;
    int* std115;
    __VERIFIER_nondet_memory(&std115, sizeof(std115));
    int t116 = *std115;
    int c117 = 40;
    _Bool c118 = ((t116 == c117)) ? 1 : 0;
    if (c118) {
    } else {
      char* cast119 = (char*)&(_str_9);
      char* c120 = _str_1;
      unsigned int c121 = 34;
      char* cast122 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast119, c120, c121, cast122);
    }
    unsigned long c123 = 9;
    int* std124;
    __VERIFIER_nondet_memory(&std124, sizeof(std124));
    int t125 = *std124;
    int c126 = 50;
    _Bool c127 = ((t125 == c126)) ? 1 : 0;
    if (c127) {
    } else {
      char* cast128 = (char*)&(_str_10);
      char* c129 = _str_1;
      unsigned int c130 = 35;
      char* cast131 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast128, c129, c130, cast131);
    }
    char* cast132 = (char*)&(_str_11);
    struct std__basic_ostream_char__std__char_traits_char__* std133;
    __VERIFIER_nondet_memory(&std133, sizeof(std133));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3134;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp4135;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std136;
      __VERIFIER_nondet_memory(&std136, sizeof(std136));
      ref_tmp3134 = std136;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std137;
      __VERIFIER_nondet_memory(&std137, sizeof(std137));
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std139;
        __VERIFIER_nondet_memory(&std139, sizeof(std139));
        ref_tmp4135 = std139;
        _Bool std140;
        __VERIFIER_nondet_memory(&std140, sizeof(std140));
        _Bool u141 = !std140;
        if (!u141) break;
        char* cast142 = (char*)&(_str_12);
        struct std__basic_ostream_char__std__char_traits_char__* std143;
        __VERIFIER_nondet_memory(&std143, sizeof(std143));
        int* std144;
        __VERIFIER_nondet_memory(&std144, sizeof(std144));
        int t145 = *std144;
        struct std__basic_ostream_char__std__char_traits_char__* std146;
        __VERIFIER_nondet_memory(&std146, sizeof(std146));
      for_step138: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std147;
        __VERIFIER_nondet_memory(&std147, sizeof(std147));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std148;
    __VERIFIER_nondet_memory(&std148, sizeof(std148));
    int c149 = 0;
    __retval1 = c149;
    int t150 = __retval1;
    int ret_val151 = t150;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&v4, sizeof(v4));
    }
    return ret_val151;
  int t152 = __retval1;
  return t152;
}

