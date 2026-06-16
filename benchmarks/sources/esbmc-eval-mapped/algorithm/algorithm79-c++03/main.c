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
char _str[15] = "first[2] != 33";
char _str_1[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm79-c++03/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[17] = " first contains:";
char _str_3[2] = " ";
char _str_4[18] = "\nsecond contains:";
char _str_5[49] = "cannot create std::vector larger than max_size()";
char _str_6[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_7[9] = "__n >= 0";
char _str_8[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_9[19] = "__n < this->size()";
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
      unsigned long c31 = 2;
      int* std32;
      __VERIFIER_nondet_memory(&std32, sizeof(std32));
      int t33 = *std32;
      int c34 = 33;
      _Bool c35 = ((t33 != c34)) ? 1 : 0;
      if (c35) {
      } else {
        char* cast36 = (char*)&(_str);
        char* c37 = (char*)_str_1;
        unsigned int c38 = 22;
        char* cast39 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast36, c37, c38, cast39);
      }
      char* cast40 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* std41;
      __VERIFIER_nondet_memory(&std41, sizeof(std41));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp642;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp743;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std44;
        __VERIFIER_nondet_memory(&std44, sizeof(std44));
        ref_tmp642 = std44;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std45;
        __VERIFIER_nondet_memory(&std45, sizeof(std45));
        while (1) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std47;
          __VERIFIER_nondet_memory(&std47, sizeof(std47));
          ref_tmp743 = std47;
          _Bool std48;
          __VERIFIER_nondet_memory(&std48, sizeof(std48));
          _Bool u49 = !std48;
          if (!u49) break;
          char* cast50 = (char*)&(_str_3);
          struct std__basic_ostream_char__std__char_traits_char__* std51;
          __VERIFIER_nondet_memory(&std51, sizeof(std51));
          int* std52;
          __VERIFIER_nondet_memory(&std52, sizeof(std52));
          int t53 = *std52;
          struct std__basic_ostream_char__std__char_traits_char__* std54;
          __VERIFIER_nondet_memory(&std54, sizeof(std54));
        for_step46: ;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std55;
          __VERIFIER_nondet_memory(&std55, sizeof(std55));
        }
      char* cast56 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* std57;
      __VERIFIER_nondet_memory(&std57, sizeof(std57));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp858;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp959;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std60;
        __VERIFIER_nondet_memory(&std60, sizeof(std60));
        ref_tmp858 = std60;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std61;
        __VERIFIER_nondet_memory(&std61, sizeof(std61));
        while (1) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std63;
          __VERIFIER_nondet_memory(&std63, sizeof(std63));
          ref_tmp959 = std63;
          _Bool std64;
          __VERIFIER_nondet_memory(&std64, sizeof(std64));
          _Bool u65 = !std64;
          if (!u65) break;
          char* cast66 = (char*)&(_str_3);
          struct std__basic_ostream_char__std__char_traits_char__* std67;
          __VERIFIER_nondet_memory(&std67, sizeof(std67));
          int* std68;
          __VERIFIER_nondet_memory(&std68, sizeof(std68));
          int t69 = *std68;
          struct std__basic_ostream_char__std__char_traits_char__* std70;
          __VERIFIER_nondet_memory(&std70, sizeof(std70));
        for_step62: ;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std71;
          __VERIFIER_nondet_memory(&std71, sizeof(std71));
        }
      struct std__basic_ostream_char__std__char_traits_char__* std72;
      __VERIFIER_nondet_memory(&std72, sizeof(std72));
      int c73 = 0;
      __retval1 = c73;
      int t74 = __retval1;
      int ret_val75 = t74;
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&second5, sizeof(second5));
      }
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&first2, sizeof(first2));
      }
      return ret_val75;
  int t76 = __retval1;
  return t76;
}

