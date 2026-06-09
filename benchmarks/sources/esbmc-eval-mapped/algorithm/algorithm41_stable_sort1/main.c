extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ { double* _M_current; };
struct __gnu_cxx____ops___Iter_comp_iter_bool_____double__double__ { void* _M_comp; };
struct __gnu_cxx____ops___Iter_comp_val_bool_____double__double__ { void* _M_comp; };
struct __gnu_cxx____ops___Val_comp_iter_bool_____double__double__ { void* _M_comp; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Temporary_buffer___gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double_____double____Impl { long _M_len; double* _M_buffer; };
struct std___UninitDestroyGuard_double____void_ { double* _M_first; double** _M_cur; };
struct std___Vector_base_double__std__allocator_double_____Vector_impl_data { double* _M_start; double* _M_finish; double* _M_end_of_storage; };
struct std____new_allocator_double_;
struct std____pair_base_double____long_;
struct std__allocator_double_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__nothrow_t { unsigned char __field0; };
struct std__pair_double____long_ { double* first; long second; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__vector_double__std__allocator_double_____Guard_alloc { double* _M_storage; unsigned long _M_len; struct std___Vector_base_double__std__allocator_double__* _M_vect; };
struct std___Temporary_buffer___gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double_____double_ { long _M_original_len; struct std___Temporary_buffer___gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double_____double____Impl _M_impl; };
struct std___Vector_base_double__std__allocator_double_____Vector_impl { struct std___Vector_base_double__std__allocator_double_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_double__std__allocator_double__ { struct std___Vector_base_double__std__allocator_double_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_double__std__allocator_double__ { struct std___Vector_base_double__std__allocator_double__ __field0; };

double __const_main_mydoubles[4] = {0x1.68f5c28f5c28fp0, 0x1.bae147ae147aep0, 0x1.51eb851eb851fp0, 0x1.9eb851eb851ecp0};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[26] = "using default comparison:";
char _str_1[27] = "\nusing 'compare_as_ints' :";
char _str_2[20] = "myvector[0] == 1.41";
char _str_3[122] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm41_stable_sort1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[20] = "myvector[1] == 1.73";
char _str_5[20] = "myvector[2] == 1.32";
char _str_6[20] = "myvector[3] == 1.62";
char _str_7[49] = "cannot create std::vector larger than max_size()";
char _str_8[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIdSaIdEEixEm[101] = "reference std::vector<double>::operator[](size_type) [_Tp = double, _Alloc = std::allocator<double>]";
char _str_9[19] = "__n < this->size()";
_Bool compare_as_ints(double p0, double p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z15compare_as_intsdd
_Bool compare_as_ints(double v0, double v1) {
bb2:
  double i3;
  double j4;
  _Bool __retval5;
  i3 = v0;
  j4 = v1;
  double t6 = i3;
  int cast7 = (int)t6;
  double t8 = j4;
  int cast9 = (int)t8;
  _Bool c10 = ((cast7 < cast9)) ? 1 : 0;
  __retval5 = c10;
  _Bool t11 = __retval5;
  return t11;
}

// function: main
int main() {
bb12:
  int __retval13;
  double mydoubles14[4];
  struct std__vector_double__std__allocator_double__ myvector15;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ it16;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ agg_tmp017;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ agg_tmp118;
  int c19 = 0;
  __retval13 = c19;
  // array copy
  __builtin_memcpy(mydoubles14, __const_main_mydoubles, (unsigned long)4 * sizeof(__const_main_mydoubles[0]));
  // externalized std:: op: std::vector<double, std::allocator<double> >::vector()
  __VERIFIER_nondet_memory(&myvector15, sizeof(myvector15));
    // externalized std:: op: __gnu_cxx::__normal_iterator<double*, std::vector<double, std::allocator<double> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it16, sizeof(it16));
    double* cast20 = (double*)&(mydoubles14);
    double* cast21 = (double*)&(mydoubles14);
    int c22 = 4;
    double* ptr23 = &(cast21)[c22];
    // externalized std:: op: void std::vector<double, std::allocator<double> >::assign<double*, void>(double*, double*)
    __VERIFIER_nondet_memory(&myvector15, sizeof(myvector15));
    __VERIFIER_nondet_memory(cast20, sizeof(*cast20));
    __VERIFIER_nondet_memory(ptr23, sizeof(*ptr23));
    char* cast24 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std25;
    __VERIFIER_nondet_memory(&std25, sizeof(std25));
    char* cast26 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    agg_tmp017 = std28;
    struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    agg_tmp118 = std29;
    struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ t30 = agg_tmp017;
    struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ t31 = agg_tmp118;
    // externalized std:: op: void std::stable_sort<__gnu_cxx::__normal_iterator<double*, std::vector<double, std::allocator<double> > >, bool (*)(double, double)>(__gnu_cxx::__normal_iterator<double*, std::vector<double, std::allocator<double> > >, __gnu_cxx::__normal_iterator<double*, std::vector<double, std::allocator<double> > >, bool (*)(double, double))
    unsigned long c32 = 0;
    double* std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    double t34 = *std33;
    double c35 = 0x1.68f5c28f5c28fp0;
    _Bool c36 = ((t34 == c35)) ? 1 : 0;
    if (c36) {
    } else {
      char* cast37 = (char*)&(_str_2);
      char* c38 = _str_3;
      unsigned int c39 = 41;
      char* cast40 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast37, c38, c39, cast40);
    }
    unsigned long c41 = 1;
    double* std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    double t43 = *std42;
    double c44 = 0x1.bae147ae147aep0;
    _Bool c45 = ((t43 == c44)) ? 1 : 0;
    if (c45) {
    } else {
      char* cast46 = (char*)&(_str_4);
      char* c47 = _str_3;
      unsigned int c48 = 42;
      char* cast49 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast46, c47, c48, cast49);
    }
    unsigned long c50 = 2;
    double* std51;
    __VERIFIER_nondet_memory(&std51, sizeof(std51));
    double t52 = *std51;
    double c53 = 0x1.51eb851eb851fp0;
    _Bool c54 = ((t52 == c53)) ? 1 : 0;
    if (c54) {
    } else {
      char* cast55 = (char*)&(_str_5);
      char* c56 = _str_3;
      unsigned int c57 = 43;
      char* cast58 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast55, c56, c57, cast58);
    }
    unsigned long c59 = 3;
    double* std60;
    __VERIFIER_nondet_memory(&std60, sizeof(std60));
    double t61 = *std60;
    double c62 = 0x1.9eb851eb851ecp0;
    _Bool c63 = ((t61 == c62)) ? 1 : 0;
    if (c63) {
    } else {
      char* cast64 = (char*)&(_str_6);
      char* c65 = _str_3;
      unsigned int c66 = 44;
      char* cast67 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast64, c65, c66, cast67);
    }
    struct std__basic_ostream_char__std__char_traits_char__* std68;
    __VERIFIER_nondet_memory(&std68, sizeof(std68));
    int c69 = 0;
    __retval13 = c69;
    int t70 = __retval13;
    int ret_val71 = t70;
    {
      // externalized std:: op: std::vector<double, std::allocator<double> >::~vector()
      __VERIFIER_nondet_memory(&myvector15, sizeof(myvector15));
    }
    return ret_val71;
  int t72 = __retval13;
  return t72;
}

