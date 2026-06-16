extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
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

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[15] = "first[0] == 10";
char _str_1[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm16-c++03/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[15] = "first[1] == 33";
char _str_3[15] = "first[2] == 33";
char _str_4[15] = "first[3] == 33";
char _str_5[15] = "first[4] == 10";
char _str_6[16] = "second[0] == 10";
char _str_7[16] = "second[1] == 10";
char _str_8[16] = "second[2] == 10";
char _str_9[16] = "second[3] == 33";
char _str_10[16] = "second[4] == 33";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_11[17] = " first contains:";
char _str_12[2] = " ";
char _str_13[18] = "\nsecond contains:";
char _str_14[49] = "cannot create std::vector larger than max_size()";
char _str_15[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_16[9] = "__n >= 0";
char _str_17[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_18[19] = "__n < this->size()";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0: ;
  int __retval1;
  struct std__vector_int__std__allocator_int__ first2;
  int ref_tmp03;
  struct std__allocator_int_ ref_tmp14;
  struct std__vector_int__std__allocator_int__ second5;
  int ref_tmp26;
  struct std__allocator_int_ ref_tmp37;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it8;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp09;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp410;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp111;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp512;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp213;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp314;
  int c15 = 0;
  __retval1 = c15;
  unsigned long c16 = 5;
  int c17 = 10;
  ref_tmp03 = c17;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, int const&, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&first2, sizeof(first2));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
  }
    unsigned long c18 = 5;
    int c19 = 33;
    ref_tmp26 = c19;
    // externalized std:: op: std::allocator<int>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp37, sizeof(ref_tmp37));
      // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, int const&, std::allocator<int> const&)
      __VERIFIER_nondet_memory(&second5, sizeof(second5));
      __VERIFIER_nondet_memory(&ref_tmp26, sizeof(ref_tmp26));
      __VERIFIER_nondet_memory(&ref_tmp37, sizeof(ref_tmp37));
    {
      // externalized std:: op: std::allocator<int>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp37, sizeof(ref_tmp37));
    }
      // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
      __VERIFIER_nondet_memory(&it8, sizeof(it8));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std20;
      __VERIFIER_nondet_memory(&std20, sizeof(std20));
      ref_tmp410 = std20;
      long c21 = 1;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std22;
      __VERIFIER_nondet_memory(&std22, sizeof(std22));
      agg_tmp09 = std22;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std23;
      __VERIFIER_nondet_memory(&std23, sizeof(std23));
      ref_tmp512 = std23;
      long c24 = 1;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std25;
      __VERIFIER_nondet_memory(&std25, sizeof(std25));
      agg_tmp111 = std25;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std26;
      __VERIFIER_nondet_memory(&std26, sizeof(std26));
      agg_tmp213 = std26;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t27 = agg_tmp09;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t28 = agg_tmp111;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t29 = agg_tmp213;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std30;
      __VERIFIER_nondet_memory(&std30, sizeof(std30));
      agg_tmp314 = std30;
      unsigned long c31 = 0;
      int* std32;
      __VERIFIER_nondet_memory(&std32, sizeof(std32));
      int t33 = *std32;
      int c34 = 10;
      _Bool c35 = ((t33 == c34)) ? 1 : 0;
      if (c35) {
      } else {
        char* cast36 = (char*)&(_str);
        char* c37 = (char*)_str_1;
        unsigned int c38 = 24;
        char* cast39 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast36, c37, c38, cast39);
      }
      unsigned long c40 = 1;
      int* std41;
      __VERIFIER_nondet_memory(&std41, sizeof(std41));
      int t42 = *std41;
      int c43 = 33;
      _Bool c44 = ((t42 == c43)) ? 1 : 0;
      if (c44) {
      } else {
        char* cast45 = (char*)&(_str_2);
        char* c46 = (char*)_str_1;
        unsigned int c47 = 25;
        char* cast48 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast45, c46, c47, cast48);
      }
      unsigned long c49 = 2;
      int* std50;
      __VERIFIER_nondet_memory(&std50, sizeof(std50));
      int t51 = *std50;
      int c52 = 33;
      _Bool c53 = ((t51 == c52)) ? 1 : 0;
      if (c53) {
      } else {
        char* cast54 = (char*)&(_str_3);
        char* c55 = (char*)_str_1;
        unsigned int c56 = 26;
        char* cast57 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast54, c55, c56, cast57);
      }
      unsigned long c58 = 3;
      int* std59;
      __VERIFIER_nondet_memory(&std59, sizeof(std59));
      int t60 = *std59;
      int c61 = 33;
      _Bool c62 = ((t60 == c61)) ? 1 : 0;
      if (c62) {
      } else {
        char* cast63 = (char*)&(_str_4);
        char* c64 = (char*)_str_1;
        unsigned int c65 = 27;
        char* cast66 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast63, c64, c65, cast66);
      }
      unsigned long c67 = 4;
      int* std68;
      __VERIFIER_nondet_memory(&std68, sizeof(std68));
      int t69 = *std68;
      int c70 = 10;
      _Bool c71 = ((t69 == c70)) ? 1 : 0;
      if (c71) {
      } else {
        char* cast72 = (char*)&(_str_5);
        char* c73 = (char*)_str_1;
        unsigned int c74 = 28;
        char* cast75 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast72, c73, c74, cast75);
      }
      unsigned long c76 = 0;
      int* std77;
      __VERIFIER_nondet_memory(&std77, sizeof(std77));
      int t78 = *std77;
      int c79 = 10;
      _Bool c80 = ((t78 == c79)) ? 1 : 0;
      if (c80) {
      } else {
        char* cast81 = (char*)&(_str_6);
        char* c82 = (char*)_str_1;
        unsigned int c83 = 30;
        char* cast84 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast81, c82, c83, cast84);
      }
      unsigned long c85 = 1;
      int* std86;
      __VERIFIER_nondet_memory(&std86, sizeof(std86));
      int t87 = *std86;
      int c88 = 10;
      _Bool c89 = ((t87 == c88)) ? 1 : 0;
      if (c89) {
      } else {
        char* cast90 = (char*)&(_str_7);
        char* c91 = (char*)_str_1;
        unsigned int c92 = 31;
        char* cast93 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast90, c91, c92, cast93);
      }
      unsigned long c94 = 2;
      int* std95;
      __VERIFIER_nondet_memory(&std95, sizeof(std95));
      int t96 = *std95;
      int c97 = 10;
      _Bool c98 = ((t96 == c97)) ? 1 : 0;
      if (c98) {
      } else {
        char* cast99 = (char*)&(_str_8);
        char* c100 = (char*)_str_1;
        unsigned int c101 = 32;
        char* cast102 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast99, c100, c101, cast102);
      }
      unsigned long c103 = 3;
      int* std104;
      __VERIFIER_nondet_memory(&std104, sizeof(std104));
      int t105 = *std104;
      int c106 = 33;
      _Bool c107 = ((t105 == c106)) ? 1 : 0;
      if (c107) {
      } else {
        char* cast108 = (char*)&(_str_9);
        char* c109 = (char*)_str_1;
        unsigned int c110 = 33;
        char* cast111 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast108, c109, c110, cast111);
      }
      unsigned long c112 = 4;
      int* std113;
      __VERIFIER_nondet_memory(&std113, sizeof(std113));
      int t114 = *std113;
      int c115 = 33;
      _Bool c116 = ((t114 == c115)) ? 1 : 0;
      if (c116) {
      } else {
        char* cast117 = (char*)&(_str_10);
        char* c118 = (char*)_str_1;
        unsigned int c119 = 34;
        char* cast120 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast117, c118, c119, cast120);
      }
      char* cast121 = (char*)&(_str_11);
      struct std__basic_ostream_char__std__char_traits_char__* std122;
      __VERIFIER_nondet_memory(&std122, sizeof(std122));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp6123;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp7124;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std125;
        __VERIFIER_nondet_memory(&std125, sizeof(std125));
        ref_tmp6123 = std125;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std126;
        __VERIFIER_nondet_memory(&std126, sizeof(std126));
        while (1) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std128;
          __VERIFIER_nondet_memory(&std128, sizeof(std128));
          ref_tmp7124 = std128;
          _Bool std129;
          __VERIFIER_nondet_memory(&std129, sizeof(std129));
          _Bool u130 = !std129;
          if (!u130) break;
          char* cast131 = (char*)&(_str_12);
          struct std__basic_ostream_char__std__char_traits_char__* std132;
          __VERIFIER_nondet_memory(&std132, sizeof(std132));
          int* std133;
          __VERIFIER_nondet_memory(&std133, sizeof(std133));
          int t134 = *std133;
          struct std__basic_ostream_char__std__char_traits_char__* std135;
          __VERIFIER_nondet_memory(&std135, sizeof(std135));
        for_step127: ;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std136;
          __VERIFIER_nondet_memory(&std136, sizeof(std136));
        }
      char* cast137 = (char*)&(_str_13);
      struct std__basic_ostream_char__std__char_traits_char__* std138;
      __VERIFIER_nondet_memory(&std138, sizeof(std138));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp8139;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp9140;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std141;
        __VERIFIER_nondet_memory(&std141, sizeof(std141));
        ref_tmp8139 = std141;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std142;
        __VERIFIER_nondet_memory(&std142, sizeof(std142));
        while (1) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std144;
          __VERIFIER_nondet_memory(&std144, sizeof(std144));
          ref_tmp9140 = std144;
          _Bool std145;
          __VERIFIER_nondet_memory(&std145, sizeof(std145));
          _Bool u146 = !std145;
          if (!u146) break;
          char* cast147 = (char*)&(_str_12);
          struct std__basic_ostream_char__std__char_traits_char__* std148;
          __VERIFIER_nondet_memory(&std148, sizeof(std148));
          int* std149;
          __VERIFIER_nondet_memory(&std149, sizeof(std149));
          int t150 = *std149;
          struct std__basic_ostream_char__std__char_traits_char__* std151;
          __VERIFIER_nondet_memory(&std151, sizeof(std151));
        for_step143: ;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std152;
          __VERIFIER_nondet_memory(&std152, sizeof(std152));
        }
      struct std__basic_ostream_char__std__char_traits_char__* std153;
      __VERIFIER_nondet_memory(&std153, sizeof(std153));
      int c154 = 0;
      __retval1 = c154;
      int t155 = __retval1;
      int ret_val156 = t155;
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&second5, sizeof(second5));
      }
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&first2, sizeof(first2));
      }
      return ret_val156;
  int t157 = __retval1;
  return t157;
}

