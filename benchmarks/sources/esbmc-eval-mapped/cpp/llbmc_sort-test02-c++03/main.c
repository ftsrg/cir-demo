extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Struct definitions (auto-parsed)
struct MyClass { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_comp_iter_MyClass_ { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_comp_val_MyClass_ { unsigned char __field0; };
struct __gnu_cxx____ops___Val_comp_iter_MyClass_ { unsigned char __field0; };
struct std___Deque_iterator_int__int____int___ { int* _M_cur; int* _M_first; int* _M_last; int** _M_node; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std____cmp_cat____unspec { unsigned char __field0; };
struct std____new_allocator_int_;
struct std____new_allocator_int___;
struct std__allocator_int_ { unsigned char __field0; };
struct std__allocator_int___ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__strong_ordering { char _M_value; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl_data { int** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_int__int____int___ _M_start; struct std___Deque_iterator_int__int____int___ _M_finish; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl { struct std___Deque_base_int__std__allocator_int_____Deque_impl_data __field0; };
struct std___Deque_base_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int_____Deque_impl _M_impl; };
struct std__deque_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int__ __field0; };

int __const_main_myints[4] = {32, 71, 12, 45};
struct std____cmp_cat____unspec __const__ZSt21__unguarded_partitionISt15_Deque_iteratorIiRiPiEN9__gnu_cxx5__ops15_Iter_comp_iterI7MyClassEEET_S9_S9_S9_T0__agg_tmp5;
struct std____cmp_cat____unspec __const__ZSt13__heap_selectISt15_Deque_iteratorIiRiPiEN9__gnu_cxx5__ops15_Iter_comp_iterI7MyClassEEEvT_S9_S9_T0__agg_tmp3;
struct std____cmp_cat____unspec __const__ZStssRKSt15_Deque_iteratorIiRiPiES4__agg_tmp1;
struct MyClass MyLess;
char _str[18] = "d[i] == myints[i]";
char _str_1[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/llbmc_sort-test02-c++03/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[48] = "cannot create std::deque larger than max_size()";
char _str_3[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEEixEm[91] = "reference std::deque<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_4[19] = "__n < this->size()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int myints2[4];
  struct std__deque_int__std__allocator_int__ d3;
  struct std__allocator_int_ ref_tmp04;
  struct std___Deque_iterator_int__int____int___ agg_tmp05;
  struct std___Deque_iterator_int__int____int___ agg_tmp16;
  struct MyClass agg_tmp27;
  int c8 = 0;
  __retval1 = c8;
  // array copy
  __builtin_memcpy(myints2, __const_main_myints, (unsigned long)4 * sizeof(__const_main_myints[0]));
  int* cast9 = (int*)&(myints2);
  int* cast10 = (int*)&(myints2);
  int c11 = 4;
  int* ptr12 = &(cast10)[c11];
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    // externalized std:: op: std::deque<int, std::allocator<int> >::deque<int*, void>(int*, int*, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&d3, sizeof(d3));
    __VERIFIER_nondet_memory(cast9, sizeof(*cast9));
    __VERIFIER_nondet_memory(ptr12, sizeof(*ptr12));
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
  }
    struct std___Deque_iterator_int__int____int___ std13;
    __VERIFIER_nondet_memory(&std13, sizeof(std13));
    agg_tmp05 = std13;
    struct std___Deque_iterator_int__int____int___ std14;
    __VERIFIER_nondet_memory(&std14, sizeof(std14));
    agg_tmp16 = std14;
    struct std___Deque_iterator_int__int____int___ t15 = agg_tmp05;
    struct std___Deque_iterator_int__int____int___ t16 = agg_tmp16;
    struct MyClass t17 = agg_tmp27;
    // externalized std:: op: void std::sort<std::_Deque_iterator<int, int&, int*>, MyClass>(std::_Deque_iterator<int, int&, int*>, std::_Deque_iterator<int, int&, int*>, MyClass)
      unsigned int i18;
      unsigned int c19 = 0;
      i18 = c19;
      while (1) {
        unsigned int t21 = i18;
        unsigned int c22 = 3;
        _Bool c23 = ((t21 < c22)) ? 1 : 0;
        if (!c23) break;
          unsigned int t24 = i18;
          unsigned long cast25 = (unsigned long)t24;
          int* std26;
          __VERIFIER_nondet_memory(&std26, sizeof(std26));
          int t27 = *std26;
          unsigned int t28 = i18;
          unsigned long cast29 = (unsigned long)t28;
          int t30 = myints2[cast29];
          _Bool c31 = ((t27 == t30)) ? 1 : 0;
          if (c31) {
          } else {
            char* cast32 = (char*)&(_str);
            char* c33 = _str_1;
            unsigned int c34 = 28;
            char* cast35 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast32, c33, c34, cast35);
          }
      for_step20: ;
        unsigned int t36 = i18;
        unsigned int u37 = t36 + 1;
        i18 = u37;
      }
    int c38 = 0;
    __retval1 = c38;
    int t39 = __retval1;
    int ret_val40 = t39;
    {
      // externalized std:: op: std::deque<int, std::allocator<int> >::~deque()
      __VERIFIER_nondet_memory(&d3, sizeof(d3));
    }
    return ret_val40;
  int t41 = __retval1;
  return t41;
}

