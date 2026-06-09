extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____ops___Iter_less_iter { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_less_val { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints[5] = {10, 20, 30, 5, 15};
struct __gnu_cxx____ops___Iter_less_val __const__ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops15_Iter_less_iterEEvT_T0_SA_T1_T2____cmp;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[22] = "initial max heap   : ";
char _str_1[22] = "max heap after pop : ";
char _str_2[11] = "v[0] == 20";
char _str_3[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm57/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[11] = "v[1] == 15";
char _str_5[11] = "v[2] == 10";
char _str_6[10] = "v[3] == 5";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_7[49] = "cannot create std::vector larger than max_size()";
char _str_8[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE5frontEv[78] = "reference std::vector<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_9[15] = "!this->empty()";
char _str_10[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_heap.h";
char __PRETTY_FUNCTION____ZSt8pop_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_[145] = "void std::pop_heap(_RandomAccessIterator, _RandomAccessIterator) [_RandomAccessIterator = __gnu_cxx::__normal_iterator<int *, std::vector<int>>]";
char _str_11[18] = "__first != __last";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE8pop_backEv[76] = "void std::vector<int>::pop_back() [_Tp = int, _Alloc = std::allocator<int>]";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_12[19] = "__n < this->size()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int myints2[5];
  struct std__vector_int__std__allocator_int__ v3;
  struct std__allocator_int_ ref_tmp04;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it5;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp06;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp17;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp28;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp39;
  int c10 = 0;
  __retval1 = c10;
  // array copy
  __builtin_memcpy(myints2, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
  int* cast11 = (int*)&(myints2);
  int* cast12 = (int*)&(myints2);
  int c13 = 5;
  int* ptr14 = &(cast12)[c13];
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&v3, sizeof(v3));
    __VERIFIER_nondet_memory(cast11, sizeof(*cast11));
    __VERIFIER_nondet_memory(ptr14, sizeof(*ptr14));
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
  }
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it5, sizeof(it5));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std15;
    __VERIFIER_nondet_memory(&std15, sizeof(std15));
    agg_tmp06 = std15;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std16;
    __VERIFIER_nondet_memory(&std16, sizeof(std16));
    agg_tmp17 = std16;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t17 = agg_tmp06;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t18 = agg_tmp17;
    // externalized std:: op: void std::make_heap<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >)
    char* cast19 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std20;
    __VERIFIER_nondet_memory(&std20, sizeof(std20));
    int* std21;
    __VERIFIER_nondet_memory(&std21, sizeof(std21));
    int t22 = *std21;
    struct std__basic_ostream_char__std__char_traits_char__* std23;
    __VERIFIER_nondet_memory(&std23, sizeof(std23));
    struct std__basic_ostream_char__std__char_traits_char__* std24;
    __VERIFIER_nondet_memory(&std24, sizeof(std24));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std25;
    __VERIFIER_nondet_memory(&std25, sizeof(std25));
    agg_tmp28 = std25;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    agg_tmp39 = std26;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t27 = agg_tmp28;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t28 = agg_tmp39;
    // externalized std:: op: void std::pop_heap<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >)
    // externalized std:: op: std::vector<int, std::allocator<int> >::pop_back()
    __VERIFIER_nondet_memory(&v3, sizeof(v3));
    char* cast29 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
    int* std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    int t32 = *std31;
    struct std__basic_ostream_char__std__char_traits_char__* std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    struct std__basic_ostream_char__std__char_traits_char__* std34;
    __VERIFIER_nondet_memory(&std34, sizeof(std34));
    unsigned long c35 = 0;
    int* std36;
    __VERIFIER_nondet_memory(&std36, sizeof(std36));
    int t37 = *std36;
    int c38 = 20;
    _Bool c39 = ((t37 == c38)) ? 1 : 0;
    if (c39) {
    } else {
      char* cast40 = (char*)&(_str_2);
      char* c41 = _str_3;
      unsigned int c42 = 26;
      char* cast43 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast40, c41, c42, cast43);
    }
    unsigned long c44 = 1;
    int* std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
    int t46 = *std45;
    int c47 = 15;
    _Bool c48 = ((t46 == c47)) ? 1 : 0;
    if (c48) {
    } else {
      char* cast49 = (char*)&(_str_4);
      char* c50 = _str_3;
      unsigned int c51 = 27;
      char* cast52 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast49, c50, c51, cast52);
    }
    unsigned long c53 = 2;
    int* std54;
    __VERIFIER_nondet_memory(&std54, sizeof(std54));
    int t55 = *std54;
    int c56 = 10;
    _Bool c57 = ((t55 == c56)) ? 1 : 0;
    if (c57) {
    } else {
      char* cast58 = (char*)&(_str_5);
      char* c59 = _str_3;
      unsigned int c60 = 28;
      char* cast61 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast58, c59, c60, cast61);
    }
    unsigned long c62 = 3;
    int* std63;
    __VERIFIER_nondet_memory(&std63, sizeof(std63));
    int t64 = *std63;
    int c65 = 5;
    _Bool c66 = ((t64 == c65)) ? 1 : 0;
    if (c66) {
    } else {
      char* cast67 = (char*)&(_str_6);
      char* c68 = _str_3;
      unsigned int c69 = 29;
      char* cast70 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast67, c68, c69, cast70);
    }
    struct std__basic_ostream_char__std__char_traits_char__* std71;
    __VERIFIER_nondet_memory(&std71, sizeof(std71));
    int c72 = 0;
    __retval1 = c72;
    int t73 = __retval1;
    int ret_val74 = t73;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&v3, sizeof(v3));
    }
    return ret_val74;
  int t75 = __retval1;
  return t75;
}

