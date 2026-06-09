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

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[15] = "first[2] == 33";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm16/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[16] = "second[2] == 10";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[17] = " first contains:";
char _str_4[2] = " ";
char _str_5[18] = "\nsecond contains:";
char _str_6[49] = "cannot create std::vector larger than max_size()";
char _str_7[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_8[9] = "__n >= 0";
char _str_9[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_10[19] = "__n < this->size()";
void void_swap_esbmc_int_(int* p0, int* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______swap_ranges_esbmc___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
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

// function: _Z17swap_ranges_esbmcIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_ET0_T_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______swap_ranges_esbmc___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v13, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v14, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v15) {
bb16:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ first117;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ last118;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ last219;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval20;
  first117 = v13;
  last118 = v14;
  last219 = v15;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp021;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp122;
    while (1) {
      _Bool std23;
      __VERIFIER_nondet_memory(&std23, sizeof(std23));
      _Bool u24 = !std23;
      if (!u24) break;
      int c25 = 0;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std26;
      __VERIFIER_nondet_memory(&std26, sizeof(std26));
      ref_tmp021 = std26;
      int* std27;
      __VERIFIER_nondet_memory(&std27, sizeof(std27));
      int c28 = 0;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std29;
      __VERIFIER_nondet_memory(&std29, sizeof(std29));
      ref_tmp122 = std29;
      int* std30;
      __VERIFIER_nondet_memory(&std30, sizeof(std30));
      void_swap_esbmc_int_(std27, std30);
    }
  __retval20 = last219; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t31 = __retval20;
  return t31;
}

// function: main
int main() {
bb32:
  int __retval33;
  struct std__vector_int__std__allocator_int__ first34;
  int ref_tmp035;
  struct std__allocator_int_ ref_tmp136;
  struct std__vector_int__std__allocator_int__ second37;
  int ref_tmp238;
  struct std__allocator_int_ ref_tmp339;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it40;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp041;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp442;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp143;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp544;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp245;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp346;
  int c47 = 0;
  __retval33 = c47;
  unsigned long c48 = 5;
  int c49 = 10;
  ref_tmp035 = c49;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp136, sizeof(ref_tmp136));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, int const&, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&first34, sizeof(first34));
    __VERIFIER_nondet_memory(&ref_tmp035, sizeof(ref_tmp035));
    __VERIFIER_nondet_memory(&ref_tmp136, sizeof(ref_tmp136));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp136, sizeof(ref_tmp136));
  }
    unsigned long c50 = 5;
    int c51 = 33;
    ref_tmp238 = c51;
    // externalized std:: op: std::allocator<int>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp339, sizeof(ref_tmp339));
      // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, int const&, std::allocator<int> const&)
      __VERIFIER_nondet_memory(&second37, sizeof(second37));
      __VERIFIER_nondet_memory(&ref_tmp238, sizeof(ref_tmp238));
      __VERIFIER_nondet_memory(&ref_tmp339, sizeof(ref_tmp339));
    {
      // externalized std:: op: std::allocator<int>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp339, sizeof(ref_tmp339));
    }
      // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
      __VERIFIER_nondet_memory(&it40, sizeof(it40));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std52;
      __VERIFIER_nondet_memory(&std52, sizeof(std52));
      ref_tmp442 = std52;
      long c53 = 1;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std54;
      __VERIFIER_nondet_memory(&std54, sizeof(std54));
      agg_tmp041 = std54;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std55;
      __VERIFIER_nondet_memory(&std55, sizeof(std55));
      ref_tmp544 = std55;
      long c56 = 1;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std57;
      __VERIFIER_nondet_memory(&std57, sizeof(std57));
      agg_tmp143 = std57;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std58;
      __VERIFIER_nondet_memory(&std58, sizeof(std58));
      agg_tmp245 = std58;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t59 = agg_tmp041;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t60 = agg_tmp143;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t61 = agg_tmp245;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r62 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______swap_ranges_esbmc___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t59, t60, t61);
      agg_tmp346 = r62;
      unsigned long c63 = 2;
      int* std64;
      __VERIFIER_nondet_memory(&std64, sizeof(std64));
      int t65 = *std64;
      int c66 = 33;
      _Bool c67 = ((t65 == c66)) ? 1 : 0;
      if (c67) {
      } else {
        char* cast68 = (char*)&(_str);
        char* c69 = _str_1;
        unsigned int c70 = 34;
        char* cast71 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast68, c69, c70, cast71);
      }
      unsigned long c72 = 2;
      int* std73;
      __VERIFIER_nondet_memory(&std73, sizeof(std73));
      int t74 = *std73;
      int c75 = 10;
      _Bool c76 = ((t74 == c75)) ? 1 : 0;
      if (c76) {
      } else {
        char* cast77 = (char*)&(_str_2);
        char* c78 = _str_1;
        unsigned int c79 = 35;
        char* cast80 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast77, c78, c79, cast80);
      }
      char* cast81 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* std82;
      __VERIFIER_nondet_memory(&std82, sizeof(std82));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp683;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp784;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std85;
        __VERIFIER_nondet_memory(&std85, sizeof(std85));
        ref_tmp683 = std85;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std86;
        __VERIFIER_nondet_memory(&std86, sizeof(std86));
        while (1) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std88;
          __VERIFIER_nondet_memory(&std88, sizeof(std88));
          ref_tmp784 = std88;
          _Bool std89;
          __VERIFIER_nondet_memory(&std89, sizeof(std89));
          _Bool u90 = !std89;
          if (!u90) break;
          char* cast91 = (char*)&(_str_4);
          struct std__basic_ostream_char__std__char_traits_char__* std92;
          __VERIFIER_nondet_memory(&std92, sizeof(std92));
          int* std93;
          __VERIFIER_nondet_memory(&std93, sizeof(std93));
          int t94 = *std93;
          struct std__basic_ostream_char__std__char_traits_char__* std95;
          __VERIFIER_nondet_memory(&std95, sizeof(std95));
        for_step87: ;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std96;
          __VERIFIER_nondet_memory(&std96, sizeof(std96));
        }
      char* cast97 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* std98;
      __VERIFIER_nondet_memory(&std98, sizeof(std98));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp899;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp9100;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std101;
        __VERIFIER_nondet_memory(&std101, sizeof(std101));
        ref_tmp899 = std101;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std102;
        __VERIFIER_nondet_memory(&std102, sizeof(std102));
        while (1) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std104;
          __VERIFIER_nondet_memory(&std104, sizeof(std104));
          ref_tmp9100 = std104;
          _Bool std105;
          __VERIFIER_nondet_memory(&std105, sizeof(std105));
          _Bool u106 = !std105;
          if (!u106) break;
          char* cast107 = (char*)&(_str_4);
          struct std__basic_ostream_char__std__char_traits_char__* std108;
          __VERIFIER_nondet_memory(&std108, sizeof(std108));
          int* std109;
          __VERIFIER_nondet_memory(&std109, sizeof(std109));
          int t110 = *std109;
          struct std__basic_ostream_char__std__char_traits_char__* std111;
          __VERIFIER_nondet_memory(&std111, sizeof(std111));
        for_step103: ;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std112;
          __VERIFIER_nondet_memory(&std112, sizeof(std112));
        }
      struct std__basic_ostream_char__std__char_traits_char__* std113;
      __VERIFIER_nondet_memory(&std113, sizeof(std113));
      int c114 = 0;
      __retval33 = c114;
      int t115 = __retval33;
      int ret_val116 = t115;
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&second37, sizeof(second37));
      }
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&first34, sizeof(first34));
      }
      return ret_val116;
  int t117 = __retval33;
  return t117;
}

