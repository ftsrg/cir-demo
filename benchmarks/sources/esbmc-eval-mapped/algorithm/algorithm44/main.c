extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ { void* _M_comp; };
struct __gnu_cxx____ops___Iter_comp_val_bool_____int__int__ { void* _M_comp; };
struct __gnu_cxx____ops___Iter_less_iter { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_less_val { unsigned char __field0; };
struct __gnu_cxx____ops___Val_comp_iter_bool_____int__int__ { void* _M_comp; };
struct __gnu_cxx____ops___Val_less_iter { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____cmp_cat____unspec { unsigned char __field0; };
struct std____detail___Synth3way { unsigned char __field0; };
struct std____new_allocator_int_;
struct std__allocator_int_;
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__strong_ordering { char _M_value; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

struct std____cmp_cat____unspec __const__ZSt13__introselectIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEElNS0_5__ops15_Iter_comp_iterIPFbiiEEEEvT_SC_SC_T0_T1__agg_tmp10;
struct std____cmp_cat____unspec __const__ZSt21__unguarded_partitionIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterIPFbiiEEEET_SC_SC_SC_T0__agg_tmp5;
struct std____cmp_cat____unspec __const__ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterIPFbiiEEEEvT_SC_SC_T0__agg_tmp3;
struct std____cmp_cat____unspec __const__ZSt13__introselectIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEElNS0_5__ops15_Iter_less_iterEEvT_S9_S9_T0_T1__agg_tmp10;
struct std____cmp_cat____unspec __const__ZSt21__unguarded_partitionIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEET_S9_S9_S9_T0__agg_tmp5;
struct std____cmp_cat____unspec __const__ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_S9_T0__agg_tmp3;
struct __gnu_cxx____ops___Iter_less_val __const__ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops15_Iter_less_iterEEvT_T0_SA_T1_T2____cmp;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[17] = "myvector[0] == 5";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm44/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[17] = "myvector[1] == 2";
char _str_3[17] = "myvector[2] == 3";
char _str_4[17] = "myvector[3] == 4";
char _str_5[17] = "myvector[4] == 1";
char _str_6[17] = "myvector[5] == 6";
char _str_7[17] = "myvector[6] == 7";
char _str_8[17] = "myvector[7] == 8";
char _str_9[17] = "myvector[8] == 9";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_10[19] = "myvector contains:";
char _str_11[2] = " ";
char _str_12[26] = "vector::_M_realloc_append";
struct std____detail___Synth3way _ZNSt8__detail11__synth3wayE;
char _str_13[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_14[19] = "__n < this->size()";
_Bool myfunction(int p0, int p1);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z10myfunctionii
_Bool myfunction(int v0, int v1) {
bb2: ;
  int i3;
  int j4;
  _Bool __retval5;
  i3 = v0;
  j4 = v1;
  int t6 = i3;
  int t7 = j4;
  _Bool c8 = ((t6 < t7)) ? 1 : 0;
  __retval5 = c8;
  _Bool t9 = __retval5;
  return t9;
}

// function: main
int main() {
bb10: ;
  int __retval11;
  struct std__vector_int__std__allocator_int__ myvector12;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it13;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp014;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp115;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp016;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp217;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp318;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp419;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp120;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp521;
  int c22 = 0;
  __retval11 = c22;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&myvector12, sizeof(myvector12));
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it13, sizeof(it13));
      int i23;
      int c24 = 1;
      i23 = c24;
      while (1) {
        int t26 = i23;
        int c27 = 10;
        _Bool c28 = ((t26 < c27)) ? 1 : 0;
        if (!c28) break;
        // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int const&)
        __VERIFIER_nondet_memory(&myvector12, sizeof(myvector12));
        __VERIFIER_nondet_memory(&i23, sizeof(i23));
      for_step25: ;
        int t29 = i23;
        int u30 = t29 + 1;
        i23 = u30;
      }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    agg_tmp014 = std31;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    ref_tmp016 = std32;
    long c33 = 5;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std34;
    __VERIFIER_nondet_memory(&std34, sizeof(std34));
    agg_tmp115 = std34;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std35;
    __VERIFIER_nondet_memory(&std35, sizeof(std35));
    agg_tmp217 = std35;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t36 = agg_tmp014;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t37 = agg_tmp115;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t38 = agg_tmp217;
    // externalized std:: op: void std::nth_element<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >)
    unsigned long c39 = 0;
    int* std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    int t41 = *std40;
    int c42 = 5;
    _Bool c43 = ((t41 == c42)) ? 1 : 0;
    if (c43) {
    } else {
      char* cast44 = (char*)&(_str);
      char* c45 = (char*)_str_1;
      unsigned int c46 = 28;
      char* cast47 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast44, c45, c46, cast47);
    }
    unsigned long c48 = 1;
    int* std49;
    __VERIFIER_nondet_memory(&std49, sizeof(std49));
    int t50 = *std49;
    int c51 = 2;
    _Bool c52 = ((t50 == c51)) ? 1 : 0;
    if (c52) {
    } else {
      char* cast53 = (char*)&(_str_2);
      char* c54 = (char*)_str_1;
      unsigned int c55 = 29;
      char* cast56 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast53, c54, c55, cast56);
    }
    unsigned long c57 = 2;
    int* std58;
    __VERIFIER_nondet_memory(&std58, sizeof(std58));
    int t59 = *std58;
    int c60 = 3;
    _Bool c61 = ((t59 == c60)) ? 1 : 0;
    if (c61) {
    } else {
      char* cast62 = (char*)&(_str_3);
      char* c63 = (char*)_str_1;
      unsigned int c64 = 30;
      char* cast65 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast62, c63, c64, cast65);
    }
    unsigned long c66 = 3;
    int* std67;
    __VERIFIER_nondet_memory(&std67, sizeof(std67));
    int t68 = *std67;
    int c69 = 4;
    _Bool c70 = ((t68 == c69)) ? 1 : 0;
    if (c70) {
    } else {
      char* cast71 = (char*)&(_str_4);
      char* c72 = (char*)_str_1;
      unsigned int c73 = 31;
      char* cast74 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast71, c72, c73, cast74);
    }
    unsigned long c75 = 4;
    int* std76;
    __VERIFIER_nondet_memory(&std76, sizeof(std76));
    int t77 = *std76;
    int c78 = 1;
    _Bool c79 = ((t77 == c78)) ? 1 : 0;
    if (c79) {
    } else {
      char* cast80 = (char*)&(_str_5);
      char* c81 = (char*)_str_1;
      unsigned int c82 = 32;
      char* cast83 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast80, c81, c82, cast83);
    }
    unsigned long c84 = 5;
    int* std85;
    __VERIFIER_nondet_memory(&std85, sizeof(std85));
    int t86 = *std85;
    int c87 = 6;
    _Bool c88 = ((t86 == c87)) ? 1 : 0;
    if (c88) {
    } else {
      char* cast89 = (char*)&(_str_6);
      char* c90 = (char*)_str_1;
      unsigned int c91 = 33;
      char* cast92 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast89, c90, c91, cast92);
    }
    unsigned long c93 = 6;
    int* std94;
    __VERIFIER_nondet_memory(&std94, sizeof(std94));
    int t95 = *std94;
    int c96 = 7;
    _Bool c97 = ((t95 == c96)) ? 1 : 0;
    if (c97) {
    } else {
      char* cast98 = (char*)&(_str_7);
      char* c99 = (char*)_str_1;
      unsigned int c100 = 34;
      char* cast101 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast98, c99, c100, cast101);
    }
    unsigned long c102 = 7;
    int* std103;
    __VERIFIER_nondet_memory(&std103, sizeof(std103));
    int t104 = *std103;
    int c105 = 8;
    _Bool c106 = ((t104 == c105)) ? 1 : 0;
    if (c106) {
    } else {
      char* cast107 = (char*)&(_str_8);
      char* c108 = (char*)_str_1;
      unsigned int c109 = 35;
      char* cast110 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast107, c108, c109, cast110);
    }
    unsigned long c111 = 8;
    int* std112;
    __VERIFIER_nondet_memory(&std112, sizeof(std112));
    int t113 = *std112;
    int c114 = 9;
    _Bool c115 = ((t113 == c114)) ? 1 : 0;
    if (c115) {
    } else {
      char* cast116 = (char*)&(_str_9);
      char* c117 = (char*)_str_1;
      unsigned int c118 = 36;
      char* cast119 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast116, c117, c118, cast119);
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std120;
    __VERIFIER_nondet_memory(&std120, sizeof(std120));
    agg_tmp318 = std120;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std121;
    __VERIFIER_nondet_memory(&std121, sizeof(std121));
    ref_tmp120 = std121;
    long c122 = 5;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std123;
    __VERIFIER_nondet_memory(&std123, sizeof(std123));
    agg_tmp419 = std123;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std124;
    __VERIFIER_nondet_memory(&std124, sizeof(std124));
    agg_tmp521 = std124;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t125 = agg_tmp318;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t126 = agg_tmp419;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t127 = agg_tmp521;
    // externalized std:: op: void std::nth_element<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, bool (*)(int, int)>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, bool (*)(int, int))
    char* cast128 = (char*)&(_str_10);
    struct std__basic_ostream_char__std__char_traits_char__* std129;
    __VERIFIER_nondet_memory(&std129, sizeof(std129));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2130;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3131;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std132;
      __VERIFIER_nondet_memory(&std132, sizeof(std132));
      ref_tmp2130 = std132;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std133;
      __VERIFIER_nondet_memory(&std133, sizeof(std133));
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std135;
        __VERIFIER_nondet_memory(&std135, sizeof(std135));
        ref_tmp3131 = std135;
        _Bool std136;
        __VERIFIER_nondet_memory(&std136, sizeof(std136));
        _Bool u137 = !std136;
        if (!u137) break;
        char* cast138 = (char*)&(_str_11);
        struct std__basic_ostream_char__std__char_traits_char__* std139;
        __VERIFIER_nondet_memory(&std139, sizeof(std139));
        int* std140;
        __VERIFIER_nondet_memory(&std140, sizeof(std140));
        int t141 = *std140;
        struct std__basic_ostream_char__std__char_traits_char__* std142;
        __VERIFIER_nondet_memory(&std142, sizeof(std142));
      for_step134: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std143;
        __VERIFIER_nondet_memory(&std143, sizeof(std143));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std144;
    __VERIFIER_nondet_memory(&std144, sizeof(std144));
    int c145 = 0;
    __retval11 = c145;
    int t146 = __retval11;
    int ret_val147 = t146;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector12, sizeof(myvector12));
    }
    return ret_val147;
  int t148 = __retval11;
  return t148;
}

