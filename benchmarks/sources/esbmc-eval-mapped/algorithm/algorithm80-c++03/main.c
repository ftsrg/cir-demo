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
char _str[18] = "myvector[2] != 40";
char _str_1[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm80-c++03/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[19] = "myvector contains:";
char _str_3[2] = " ";
char _str_4[49] = "cannot create std::vector larger than max_size()";
char _str_5[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_6[9] = "__n >= 0";
char _str_7[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_8[19] = "__n < this->size()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int myints2[5];
  struct std__vector_int__std__allocator_int__ myvector3;
  int ref_tmp04;
  struct std__allocator_int_ ref_tmp15;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp06;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp17;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp28;
  int c9 = 0;
  __retval1 = c9;
  // array copy
  __builtin_memcpy(myints2, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
  unsigned long c10 = 4;
  int c11 = 99;
  ref_tmp04 = c11;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, int const&, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&myvector3, sizeof(myvector3));
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
  }
    int* cast12 = (int*)&(myints2);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std13;
    __VERIFIER_nondet_memory(&std13, sizeof(std13));
    agg_tmp06 = std13;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t14 = agg_tmp06;
    // externalized std:: op: void std::iter_swap<int*, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(int*, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >)
    __VERIFIER_nondet_memory(cast12, sizeof(*cast12));
    int* cast15 = (int*)&(myints2);
    int c16 = 3;
    int* ptr17 = &(cast15)[c16];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std18;
    __VERIFIER_nondet_memory(&std18, sizeof(std18));
    ref_tmp28 = std18;
    long c19 = 2;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std20;
    __VERIFIER_nondet_memory(&std20, sizeof(std20));
    agg_tmp17 = std20;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t21 = agg_tmp17;
    // externalized std:: op: void std::iter_swap<int*, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(int*, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >)
    __VERIFIER_nondet_memory(ptr17, sizeof(*ptr17));
    unsigned long c22 = 2;
    int* std23;
    __VERIFIER_nondet_memory(&std23, sizeof(std23));
    int t24 = *std23;
    int c25 = 40;
    _Bool c26 = ((t24 != c25)) ? 1 : 0;
    if (c26) {
    } else {
      char* cast27 = (char*)&(_str);
      char* c28 = _str_1;
      unsigned int c29 = 26;
      char* cast30 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast27, c28, c29, cast30);
    }
    char* cast31 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it33;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp334;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std35;
      __VERIFIER_nondet_memory(&std35, sizeof(std35));
      it33 = std35;
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std37;
        __VERIFIER_nondet_memory(&std37, sizeof(std37));
        ref_tmp334 = std37;
        _Bool std38;
        __VERIFIER_nondet_memory(&std38, sizeof(std38));
        _Bool u39 = !std38;
        if (!u39) break;
        char* cast40 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std41;
        __VERIFIER_nondet_memory(&std41, sizeof(std41));
        int* std42;
        __VERIFIER_nondet_memory(&std42, sizeof(std42));
        int t43 = *std42;
        struct std__basic_ostream_char__std__char_traits_char__* std44;
        __VERIFIER_nondet_memory(&std44, sizeof(std44));
      for_step36: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std45;
        __VERIFIER_nondet_memory(&std45, sizeof(std45));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std46;
    __VERIFIER_nondet_memory(&std46, sizeof(std46));
    int c47 = 0;
    __retval1 = c47;
    int t48 = __retval1;
    int ret_val49 = t48;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector3, sizeof(myvector3));
    }
    return ret_val49;
  int t50 = __retval1;
  return t50;
}

