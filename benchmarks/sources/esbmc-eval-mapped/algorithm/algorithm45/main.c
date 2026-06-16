extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____ops___Iter_less_val { unsigned char __field0; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints1[8] = {10, 10, 10, 20, 20, 20, 30, 30};
int __const_main_myints[8] = {10, 20, 30, 30, 20, 10, 10, 20};
char _str[11] = "*low == 20";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm45/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_2[49] = "cannot create std::vector larger than max_size()";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0: ;
  int __retval1;
  int myints2[8];
  int myints13[8];
  struct std__vector_int__std__allocator_int__ v4;
  struct std__allocator_int_ ref_tmp05;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ low6;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ up7;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp18;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp09;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp110;
  int ref_tmp211;
  int c12 = 0;
  __retval1 = c12;
  // array copy
  __builtin_memcpy(myints2, __const_main_myints, (unsigned long)8 * sizeof(__const_main_myints[0]));
  // array copy
  __builtin_memcpy(myints13, __const_main_myints1, (unsigned long)8 * sizeof(__const_main_myints1[0]));
  int* cast13 = (int*)&(myints2);
  int* cast14 = (int*)&(myints2);
  int c15 = 8;
  int* ptr16 = &(cast14)[c15];
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&v4, sizeof(v4));
    __VERIFIER_nondet_memory(cast13, sizeof(*cast13));
    __VERIFIER_nondet_memory(ptr16, sizeof(*ptr16));
    __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
  }
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&low6, sizeof(low6));
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&up7, sizeof(up7));
    int* cast17 = (int*)&(myints13);
    int* cast18 = (int*)&(myints13);
    int c19 = 8;
    int* ptr20 = &(cast18)[c19];
    // externalized std:: op: void std::vector<int, std::allocator<int> >::assign<int*, void>(int*, int*)
    __VERIFIER_nondet_memory(&v4, sizeof(v4));
    __VERIFIER_nondet_memory(cast17, sizeof(*cast17));
    __VERIFIER_nondet_memory(ptr20, sizeof(*ptr20));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std21;
    __VERIFIER_nondet_memory(&std21, sizeof(std21));
    agg_tmp09 = std21;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std22;
    __VERIFIER_nondet_memory(&std22, sizeof(std22));
    agg_tmp110 = std22;
    int c23 = 20;
    ref_tmp211 = c23;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t24 = agg_tmp09;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t25 = agg_tmp110;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    ref_tmp18 = std26;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    int* std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    int t29 = *std28;
    int c30 = 20;
    _Bool c31 = ((t29 == c30)) ? 1 : 0;
    if (c31) {
    } else {
      char* cast32 = (char*)&(_str);
      char* c33 = (char*)_str_1;
      unsigned int c34 = 24;
      char* cast35 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast32, c33, c34, cast35);
    }
    int c36 = 0;
    __retval1 = c36;
    int t37 = __retval1;
    int ret_val38 = t37;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&v4, sizeof(v4));
    }
    return ret_val38;
  int t39 = __retval1;
  return t39;
}

