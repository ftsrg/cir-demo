extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_;
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints[5] = {10, 20, 30, 40, 50};
char _str[18] = "myvector[4] != 50";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm76/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[26] = "vector::_M_default_append";
char _str_3[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_4[19] = "__n < this->size()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int myints2[5];
  struct std__vector_int__std__allocator_int__ myvector3;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it4;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp05;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp16;
  int c7 = 0;
  __retval1 = c7;
  // array copy
  __builtin_memcpy(myints2, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&myvector3, sizeof(myvector3));
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it4, sizeof(it4));
    unsigned long c8 = 5;
    // externalized std:: op: std::vector<int, std::allocator<int> >::resize(unsigned long)
    __VERIFIER_nondet_memory(&myvector3, sizeof(myvector3));
    int* cast9 = (int*)&(myints2);
    int* cast10 = (int*)&(myints2);
    int c11 = 5;
    int* ptr12 = &(cast10)[c11];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std13;
    __VERIFIER_nondet_memory(&std13, sizeof(std13));
    agg_tmp05 = std13;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t14 = agg_tmp05;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std15;
    __VERIFIER_nondet_memory(&std15, sizeof(std15));
    agg_tmp16 = std15;
    unsigned long c16 = 4;
    int* std17;
    __VERIFIER_nondet_memory(&std17, sizeof(std17));
    int t18 = *std17;
    int c19 = 50;
    _Bool c20 = ((t18 != c19)) ? 1 : 0;
    if (c20) {
    } else {
      char* cast21 = (char*)&(_str);
      char* c22 = _str_1;
      unsigned int c23 = 24;
      char* cast24 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast21, c22, c23, cast24);
    }
    int c25 = 0;
    __retval1 = c25;
    int t26 = __retval1;
    int ret_val27 = t26;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector3, sizeof(myvector3));
    }
    return ret_val27;
  int t28 = __retval1;
  return t28;
}

