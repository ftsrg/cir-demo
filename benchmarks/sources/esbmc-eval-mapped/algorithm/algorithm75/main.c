extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____ops___Iter_equals_val_const_int_ { int* _M_value; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints[5] = {10, 20, 30, 30, 20};
char _str[10] = "*it != 30";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm75/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_2[49] = "cannot create std::vector larger than max_size()";
_Bool mypredicate(int p0, int p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z11mypredicateii
_Bool mypredicate(int v0, int v1) {
bb2:
  int i3;
  int j4;
  _Bool __retval5;
  i3 = v0;
  j4 = v1;
  int t6 = i3;
  int t7 = j4;
  _Bool c8 = ((t6 == t7)) ? 1 : 0;
  __retval5 = c8;
  _Bool t9 = __retval5;
  return t9;
}

// function: main
int main() {
bb10:
  int __retval11;
  int myints12[5];
  struct std__vector_int__std__allocator_int__ myvector13;
  struct std__allocator_int_ ref_tmp014;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it15;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp116;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp017;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp118;
  int ref_tmp219;
  int c20 = 0;
  __retval11 = c20;
  // array copy
  __builtin_memcpy(myints12, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
  int* cast21 = (int*)&(myints12);
  int* cast22 = (int*)&(myints12);
  int c23 = 5;
  int* ptr24 = &(cast22)[c23];
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp014, sizeof(ref_tmp014));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&myvector13, sizeof(myvector13));
    __VERIFIER_nondet_memory(cast21, sizeof(*cast21));
    __VERIFIER_nondet_memory(ptr24, sizeof(*ptr24));
    __VERIFIER_nondet_memory(&ref_tmp014, sizeof(ref_tmp014));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp014, sizeof(ref_tmp014));
  }
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it15, sizeof(it15));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std25;
    __VERIFIER_nondet_memory(&std25, sizeof(std25));
    agg_tmp017 = std25;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    agg_tmp118 = std26;
    int c27 = 2;
    int c28 = 30;
    ref_tmp219 = c28;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t29 = agg_tmp017;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t30 = agg_tmp118;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    ref_tmp116 = std31;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    int* std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    int t34 = *std33;
    int c35 = 30;
    _Bool c36 = ((t34 != c35)) ? 1 : 0;
    if (c36) {
    } else {
      char* cast37 = (char*)&(_str);
      char* c38 = _str_1;
      unsigned int c39 = 28;
      char* cast40 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast37, c38, c39, cast40);
    }
    int c41 = 0;
    __retval11 = c41;
    int t42 = __retval11;
    int ret_val43 = t42;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector13, sizeof(myvector13));
    }
    return ret_val43;
  int t44 = __retval11;
  return t44;
}

