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
char _str_1[16] = "v.front() == 30";
char _str_2[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm115/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[11] = "v[1] == 20";
char _str_4[11] = "v[2] == 10";
char _str_5[10] = "v[3] == 5";
char _str_6[11] = "v[4] != 15";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_7[49] = "cannot create std::vector larger than max_size()";
char _str_8[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE5frontEv[78] = "reference std::vector<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_9[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_10[19] = "__n < this->size()";
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
    int* std23;
    __VERIFIER_nondet_memory(&std23, sizeof(std23));
    int t24 = *std23;
    int c25 = 30;
    _Bool c26 = ((t24 == c25)) ? 1 : 0;
    if (c26) {
    } else {
      char* cast27 = (char*)&(_str_1);
      char* c28 = _str_2;
      unsigned int c29 = 23;
      char* cast30 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast27, c28, c29, cast30);
    }
    unsigned long c31 = 1;
    int* std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    int t33 = *std32;
    int c34 = 20;
    _Bool c35 = ((t33 == c34)) ? 1 : 0;
    if (c35) {
    } else {
      char* cast36 = (char*)&(_str_3);
      char* c37 = _str_2;
      unsigned int c38 = 24;
      char* cast39 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast36, c37, c38, cast39);
    }
    unsigned long c40 = 2;
    int* std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
    int t42 = *std41;
    int c43 = 10;
    _Bool c44 = ((t42 == c43)) ? 1 : 0;
    if (c44) {
    } else {
      char* cast45 = (char*)&(_str_4);
      char* c46 = _str_2;
      unsigned int c47 = 25;
      char* cast48 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast45, c46, c47, cast48);
    }
    unsigned long c49 = 3;
    int* std50;
    __VERIFIER_nondet_memory(&std50, sizeof(std50));
    int t51 = *std50;
    int c52 = 5;
    _Bool c53 = ((t51 == c52)) ? 1 : 0;
    if (c53) {
    } else {
      char* cast54 = (char*)&(_str_5);
      char* c55 = _str_2;
      unsigned int c56 = 26;
      char* cast57 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast54, c55, c56, cast57);
    }
    unsigned long c58 = 4;
    int* std59;
    __VERIFIER_nondet_memory(&std59, sizeof(std59));
    int t60 = *std59;
    int c61 = 15;
    _Bool c62 = ((t60 != c61)) ? 1 : 0;
    if (c62) {
    } else {
      char* cast63 = (char*)&(_str_6);
      char* c64 = _str_2;
      unsigned int c65 = 27;
      char* cast66 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast63, c64, c65, cast66);
    }
    struct std__basic_ostream_char__std__char_traits_char__* std67;
    __VERIFIER_nondet_memory(&std67, sizeof(std67));
    int c68 = 0;
    __retval1 = c68;
    int t69 = __retval1;
    int ret_val70 = t69;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&v3, sizeof(v3));
    }
    return ret_val70;
  int t71 = __retval1;
  return t71;
}

