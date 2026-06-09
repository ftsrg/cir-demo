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
char _str_1[11] = "v[0] == 30";
char _str_2[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm56/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[11] = "v[1] == 20";
char _str_4[11] = "v[2] == 10";
char _str_5[10] = "v[3] == 5";
char _str_6[11] = "v[4] == 15";
char _str_7[21] = "final sorted range :";
char _str_8[2] = " ";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_9[49] = "cannot create std::vector larger than max_size()";
char _str_10[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE5frontEv[78] = "reference std::vector<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_11[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_12[19] = "__n < this->size()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
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
  int c8 = 0;
  __retval1 = c8;
  // array copy
  __builtin_memcpy(myints2, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
  int* cast9 = (int*)&(myints2);
  int* cast10 = (int*)&(myints2);
  int c11 = 5;
  int* ptr12 = &(cast10)[c11];
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&v3, sizeof(v3));
    __VERIFIER_nondet_memory(cast9, sizeof(*cast9));
    __VERIFIER_nondet_memory(ptr12, sizeof(*ptr12));
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
  }
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it5, sizeof(it5));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std13;
    __VERIFIER_nondet_memory(&std13, sizeof(std13));
    agg_tmp06 = std13;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std14;
    __VERIFIER_nondet_memory(&std14, sizeof(std14));
    agg_tmp17 = std14;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t15 = agg_tmp06;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t16 = agg_tmp17;
    // externalized std:: op: void std::make_heap<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >)
    char* cast17 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std18;
    __VERIFIER_nondet_memory(&std18, sizeof(std18));
    int* std19;
    __VERIFIER_nondet_memory(&std19, sizeof(std19));
    int t20 = *std19;
    struct std__basic_ostream_char__std__char_traits_char__* std21;
    __VERIFIER_nondet_memory(&std21, sizeof(std21));
    struct std__basic_ostream_char__std__char_traits_char__* std22;
    __VERIFIER_nondet_memory(&std22, sizeof(std22));
    unsigned long c23 = 0;
    int* std24;
    __VERIFIER_nondet_memory(&std24, sizeof(std24));
    int t25 = *std24;
    int c26 = 30;
    _Bool c27 = ((t25 == c26)) ? 1 : 0;
    if (c27) {
    } else {
      char* cast28 = (char*)&(_str_1);
      char* c29 = _str_2;
      unsigned int c30 = 22;
      char* cast31 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast28, c29, c30, cast31);
    }
    unsigned long c32 = 1;
    int* std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    int t34 = *std33;
    int c35 = 20;
    _Bool c36 = ((t34 == c35)) ? 1 : 0;
    if (c36) {
    } else {
      char* cast37 = (char*)&(_str_3);
      char* c38 = _str_2;
      unsigned int c39 = 23;
      char* cast40 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast37, c38, c39, cast40);
    }
    unsigned long c41 = 2;
    int* std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    int t43 = *std42;
    int c44 = 10;
    _Bool c45 = ((t43 == c44)) ? 1 : 0;
    if (c45) {
    } else {
      char* cast46 = (char*)&(_str_4);
      char* c47 = _str_2;
      unsigned int c48 = 24;
      char* cast49 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast46, c47, c48, cast49);
    }
    unsigned long c50 = 3;
    int* std51;
    __VERIFIER_nondet_memory(&std51, sizeof(std51));
    int t52 = *std51;
    int c53 = 5;
    _Bool c54 = ((t52 == c53)) ? 1 : 0;
    if (c54) {
    } else {
      char* cast55 = (char*)&(_str_5);
      char* c56 = _str_2;
      unsigned int c57 = 25;
      char* cast58 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast55, c56, c57, cast58);
    }
    unsigned long c59 = 4;
    int* std60;
    __VERIFIER_nondet_memory(&std60, sizeof(std60));
    int t61 = *std60;
    int c62 = 15;
    _Bool c63 = ((t61 == c62)) ? 1 : 0;
    if (c63) {
    } else {
      char* cast64 = (char*)&(_str_6);
      char* c65 = _str_2;
      unsigned int c66 = 26;
      char* cast67 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast64, c65, c66, cast67);
    }
    char* cast68 = (char*)&(_str_7);
    struct std__basic_ostream_char__std__char_traits_char__* std69;
    __VERIFIER_nondet_memory(&std69, sizeof(std69));
      unsigned int i70;
      unsigned int c71 = 0;
      i70 = c71;
      while (1) {
        unsigned int t73 = i70;
        unsigned long cast74 = (unsigned long)t73;
        unsigned long std75 = __VERIFIER_nondet_unsigned_long();
        _Bool c76 = ((cast74 < std75)) ? 1 : 0;
        if (!c76) break;
        char* cast77 = (char*)&(_str_8);
        struct std__basic_ostream_char__std__char_traits_char__* std78;
        __VERIFIER_nondet_memory(&std78, sizeof(std78));
        unsigned int t79 = i70;
        unsigned long cast80 = (unsigned long)t79;
        int* std81;
        __VERIFIER_nondet_memory(&std81, sizeof(std81));
        int t82 = *std81;
        struct std__basic_ostream_char__std__char_traits_char__* std83;
        __VERIFIER_nondet_memory(&std83, sizeof(std83));
      for_step72: ;
        unsigned int t84 = i70;
        unsigned int u85 = t84 + 1;
        i70 = u85;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std86;
    __VERIFIER_nondet_memory(&std86, sizeof(std86));
    int c87 = 0;
    __retval1 = c87;
    int t88 = __retval1;
    int ret_val89 = t88;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&v3, sizeof(v3));
    }
    return ret_val89;
  int t90 = __retval1;
  return t90;
}

