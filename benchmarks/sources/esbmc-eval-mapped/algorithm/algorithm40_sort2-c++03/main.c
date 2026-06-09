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
struct __gnu_cxx____ops___Iter_comp_iter_myclass_ { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_comp_val_myclass_ { unsigned char __field0; };
struct __gnu_cxx____ops___Val_comp_iter_myclass_ { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct myclass { unsigned char __field0; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____cmp_cat____unspec { unsigned char __field0; };
struct std____detail___Synth3way { unsigned char __field0; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std__strong_ordering { char _M_value; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints1[3] = {12, 32, 71};
int __const_main_myints[3] = {32, 71, 12};
struct std____cmp_cat____unspec __const__ZSt21__unguarded_partitionIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI7myclassEEET_SB_SB_SB_T0__agg_tmp5;
struct std____cmp_cat____unspec __const__ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI7myclassEEEvT_SB_SB_T0__agg_tmp3;
struct myclass myobject;
char _str[18] = "myvector[0] == 12";
char _str_1[121] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm40_sort2-c++03/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "myvector[1] == 32";
char _str_3[18] = "myvector[2] == 71";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_4[49] = "cannot create std::vector larger than max_size()";
struct std____detail___Synth3way _ZNSt8__detail11__synth3wayE;
char _str_5[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[19] = "__n < this->size()";
_Bool myfunction(int p0, int p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z10myfunctionii
_Bool myfunction(int v0, int v1) {
bb2:
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
bb10:
  int __retval11;
  int myints12[3];
  int myints113[3];
  struct std__vector_int__std__allocator_int__ myvector14;
  struct std__allocator_int_ ref_tmp015;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it16;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp017;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp118;
  struct myclass agg_tmp219;
  int c20 = 0;
  __retval11 = c20;
  // array copy
  __builtin_memcpy(myints12, __const_main_myints, (unsigned long)3 * sizeof(__const_main_myints[0]));
  // array copy
  __builtin_memcpy(myints113, __const_main_myints1, (unsigned long)3 * sizeof(__const_main_myints1[0]));
  int* cast21 = (int*)&(myints12);
  int* cast22 = (int*)&(myints12);
  int c23 = 3;
  int* ptr24 = &(cast22)[c23];
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp015, sizeof(ref_tmp015));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&myvector14, sizeof(myvector14));
    __VERIFIER_nondet_memory(cast21, sizeof(*cast21));
    __VERIFIER_nondet_memory(ptr24, sizeof(*ptr24));
    __VERIFIER_nondet_memory(&ref_tmp015, sizeof(ref_tmp015));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp015, sizeof(ref_tmp015));
  }
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it16, sizeof(it16));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std25;
    __VERIFIER_nondet_memory(&std25, sizeof(std25));
    agg_tmp017 = std25;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    agg_tmp118 = std26;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t27 = agg_tmp017;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t28 = agg_tmp118;
    struct myclass t29 = agg_tmp219;
    // externalized std:: op: void std::sort<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, myclass>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, myclass)
    unsigned long c30 = 0;
    int* std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    int t32 = *std31;
    int c33 = 12;
    _Bool c34 = ((t32 == c33)) ? 1 : 0;
    if (c34) {
    } else {
      char* cast35 = (char*)&(_str);
      char* c36 = _str_1;
      unsigned int c37 = 36;
      char* cast38 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast35, c36, c37, cast38);
    }
    unsigned long c39 = 1;
    int* std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    int t41 = *std40;
    int c42 = 32;
    _Bool c43 = ((t41 == c42)) ? 1 : 0;
    if (c43) {
    } else {
      char* cast44 = (char*)&(_str_2);
      char* c45 = _str_1;
      unsigned int c46 = 37;
      char* cast47 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast44, c45, c46, cast47);
    }
    unsigned long c48 = 2;
    int* std49;
    __VERIFIER_nondet_memory(&std49, sizeof(std49));
    int t50 = *std49;
    int c51 = 71;
    _Bool c52 = ((t50 == c51)) ? 1 : 0;
    if (c52) {
    } else {
      char* cast53 = (char*)&(_str_3);
      char* c54 = _str_1;
      unsigned int c55 = 38;
      char* cast56 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast53, c54, c55, cast56);
    }
    struct std__basic_ostream_char__std__char_traits_char__* std57;
    __VERIFIER_nondet_memory(&std57, sizeof(std57));
    int c58 = 0;
    __retval11 = c58;
    int t59 = __retval11;
    int ret_val60 = t59;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector14, sizeof(myvector14));
    }
    return ret_val60;
  int t61 = __retval11;
  return t61;
}

