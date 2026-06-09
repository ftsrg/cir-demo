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
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints[5] = {10, 20, 30, 40, 50};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "myvector[0] == 10";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm17/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "myvector[1] == 99";
char _str_3[18] = "myvector[2] == 40";
char _str_4[18] = "myvector[3] == 99";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[19] = "myvector contains:";
char _str_6[2] = " ";
char _str_7[49] = "cannot create std::vector larger than max_size()";
char _str_8[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_9[9] = "__n >= 0";
char _str_10[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_11[19] = "__n < this->size()";
void void_swap_esbmc_int_(int* p0, int* p1);
void void_iter_swap_esbmc_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z10swap_esbmcIiEvRT_S1_
void void_swap_esbmc_int_(int* v0, int* v1) {
bb2:
  int* a3;
  int* b4;
  int c5;
  a3 = v0;
  b4 = v1;
  int* t6 = a3;
  int t7 = *t6;
  c5 = t7;
  int* t8 = b4;
  int t9 = *t8;
  int* t10 = a3;
  *t10 = t9;
  int t11 = c5;
  int* t12 = b4;
  *t12 = t11;
  return;
}

// function: _Z15iter_swap_esbmcIiN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvPT_T0_
void void_iter_swap_esbmc_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* v13, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v14) {
bb15:
  int* a16;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ b17;
  a16 = v13;
  b17 = v14;
  int* t18 = a16;
  int* std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
  void_swap_esbmc_int_(t18, std19);
  return;
}

// function: main
int main() {
bb20:
  int __retval21;
  int myints22[5];
  struct std__vector_int__std__allocator_int__ myvector23;
  int ref_tmp024;
  struct std__allocator_int_ ref_tmp125;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp026;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp127;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp228;
  int c29 = 0;
  __retval21 = c29;
  // array copy
  __builtin_memcpy(myints22, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
  unsigned long c30 = 4;
  int c31 = 99;
  ref_tmp024 = c31;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp125, sizeof(ref_tmp125));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, int const&, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&myvector23, sizeof(myvector23));
    __VERIFIER_nondet_memory(&ref_tmp024, sizeof(ref_tmp024));
    __VERIFIER_nondet_memory(&ref_tmp125, sizeof(ref_tmp125));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp125, sizeof(ref_tmp125));
  }
    int* cast32 = (int*)&(myints22);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    agg_tmp026 = std33;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t34 = agg_tmp026;
    void_iter_swap_esbmc_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(cast32, t34);
    int* cast35 = (int*)&(myints22);
    int c36 = 3;
    int* ptr37 = &(cast35)[c36];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    ref_tmp228 = std38;
    long c39 = 2;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    agg_tmp127 = std40;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t41 = agg_tmp127;
    void_iter_swap_esbmc_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(ptr37, t41);
    unsigned long c42 = 0;
    int* std43;
    __VERIFIER_nondet_memory(&std43, sizeof(std43));
    int t44 = *std43;
    int c45 = 10;
    _Bool c46 = ((t44 == c45)) ? 1 : 0;
    if (c46) {
    } else {
      char* cast47 = (char*)&(_str);
      char* c48 = _str_1;
      unsigned int c49 = 42;
      char* cast50 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast47, c48, c49, cast50);
    }
    unsigned long c51 = 1;
    int* std52;
    __VERIFIER_nondet_memory(&std52, sizeof(std52));
    int t53 = *std52;
    int c54 = 99;
    _Bool c55 = ((t53 == c54)) ? 1 : 0;
    if (c55) {
    } else {
      char* cast56 = (char*)&(_str_2);
      char* c57 = _str_1;
      unsigned int c58 = 43;
      char* cast59 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast56, c57, c58, cast59);
    }
    unsigned long c60 = 2;
    int* std61;
    __VERIFIER_nondet_memory(&std61, sizeof(std61));
    int t62 = *std61;
    int c63 = 40;
    _Bool c64 = ((t62 == c63)) ? 1 : 0;
    if (c64) {
    } else {
      char* cast65 = (char*)&(_str_3);
      char* c66 = _str_1;
      unsigned int c67 = 44;
      char* cast68 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast65, c66, c67, cast68);
    }
    unsigned long c69 = 3;
    int* std70;
    __VERIFIER_nondet_memory(&std70, sizeof(std70));
    int t71 = *std70;
    int c72 = 99;
    _Bool c73 = ((t71 == c72)) ? 1 : 0;
    if (c73) {
    } else {
      char* cast74 = (char*)&(_str_4);
      char* c75 = _str_1;
      unsigned int c76 = 45;
      char* cast77 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast74, c75, c76, cast77);
    }
    char* cast78 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* std79;
    __VERIFIER_nondet_memory(&std79, sizeof(std79));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it80;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp381;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std82;
      __VERIFIER_nondet_memory(&std82, sizeof(std82));
      it80 = std82;
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std84;
        __VERIFIER_nondet_memory(&std84, sizeof(std84));
        ref_tmp381 = std84;
        _Bool std85;
        __VERIFIER_nondet_memory(&std85, sizeof(std85));
        _Bool u86 = !std85;
        if (!u86) break;
        char* cast87 = (char*)&(_str_6);
        struct std__basic_ostream_char__std__char_traits_char__* std88;
        __VERIFIER_nondet_memory(&std88, sizeof(std88));
        int* std89;
        __VERIFIER_nondet_memory(&std89, sizeof(std89));
        int t90 = *std89;
        struct std__basic_ostream_char__std__char_traits_char__* std91;
        __VERIFIER_nondet_memory(&std91, sizeof(std91));
      for_step83: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std92;
        __VERIFIER_nondet_memory(&std92, sizeof(std92));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std93;
    __VERIFIER_nondet_memory(&std93, sizeof(std93));
    int c94 = 0;
    __retval21 = c94;
    int t95 = __retval21;
    int ret_val96 = t95;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector23, sizeof(myvector23));
    }
    return ret_val96;
  int t97 = __retval21;
  return t97;
}

