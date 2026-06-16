extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____cmp_cat____unspec { unsigned char __field0; };
struct std____detail___Synth3way { unsigned char __field0; };
struct std____detail____move_iter_cat_int___;
struct std____new_allocator_int_;
struct std__allocator_int_;
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__move_iterator_int___ { int* _M_current; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____imove___IterMove { unsigned char __field0; };
struct std__strong_ordering { char _M_value; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

struct std____cmp_cat____unspec __const_main_agg_tmp7;
int __const_main_myarray[3] = {501, 502, 503};
char _str[15] = "myvector[3]!=2";
char _str_1[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/vector55_insert/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[19] = "myvector[2] != 503";
char _str_3[26] = "vector::_M_realloc_append";
char _str_4[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_5[15] = "!this->empty()";
char _str_6[24] = "vector::_M_range_insert";
struct std__ranges____imove___IterMove _ZNSt6ranges4_Cpo9iter_moveE;
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_7[19] = "__n < this->size()";
struct std____detail___Synth3way _ZNSt8__detail11__synth3wayE;
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0: ;
  int __retval1;
  struct std__vector_int__std__allocator_int__ myvector2;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it3;
  int ref_tmp04;
  int ref_tmp15;
  int ref_tmp26;
  int ref_tmp37;
  int ref_tmp48;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp59;
  struct std__vector_int__std__allocator_int__ anothervector10;
  int ref_tmp611;
  int ref_tmp712;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp013;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp814;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp115;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp216;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp317;
  int myarray18[3];
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp419;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp920;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp521;
  int c22 = 0;
  __retval1 = c22;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    int c23 = 300;
    ref_tmp04 = c23;
    // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    int c24 = 300;
    ref_tmp15 = c24;
    // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    int c25 = 200;
    ref_tmp26 = c25;
    // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    __VERIFIER_nondet_memory(&ref_tmp26, sizeof(ref_tmp26));
    int c26 = 100;
    ref_tmp37 = c26;
    // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    __VERIFIER_nondet_memory(&ref_tmp37, sizeof(ref_tmp37));
    int c27 = 100;
    ref_tmp48 = c27;
    // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    __VERIFIER_nondet_memory(&ref_tmp48, sizeof(ref_tmp48));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    ref_tmp59 = std28;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
    __VERIFIER_nondet_memory(&anothervector10, sizeof(anothervector10));
      int c30 = 1;
      ref_tmp611 = c30;
      // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
      __VERIFIER_nondet_memory(&anothervector10, sizeof(anothervector10));
      __VERIFIER_nondet_memory(&ref_tmp611, sizeof(ref_tmp611));
      int c31 = 2;
      ref_tmp712 = c31;
      // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
      __VERIFIER_nondet_memory(&anothervector10, sizeof(anothervector10));
      __VERIFIER_nondet_memory(&ref_tmp712, sizeof(ref_tmp712));
      long c32 = 2;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std33;
      __VERIFIER_nondet_memory(&std33, sizeof(std33));
      ref_tmp814 = std33;
      // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE
      __VERIFIER_nondet_memory(&agg_tmp013, sizeof(agg_tmp013));
      __VERIFIER_nondet_memory(&ref_tmp814, sizeof(ref_tmp814));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std34;
      __VERIFIER_nondet_memory(&std34, sizeof(std34));
      agg_tmp115 = std34;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std35;
      __VERIFIER_nondet_memory(&std35, sizeof(std35));
      agg_tmp216 = std35;
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t36 = agg_tmp013;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t37 = agg_tmp115;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t38 = agg_tmp216;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std39;
      __VERIFIER_nondet_memory(&std39, sizeof(std39));
      agg_tmp317 = std39;
      unsigned long c40 = 3;
      int* std41;
      __VERIFIER_nondet_memory(&std41, sizeof(std41));
      int t42 = *std41;
      int c43 = 2;
      _Bool c44 = ((t42 != c43)) ? 1 : 0;
      if (c44) {
      } else {
        char* cast45 = (char*)&(_str);
        char* c46 = (char*)_str_1;
        unsigned int c47 = 32;
        char* cast48 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast45, c46, c47, cast48);
      }
      // array copy
      __builtin_memcpy(myarray18, __const_main_myarray, (unsigned long)3 * sizeof(__const_main_myarray[0]));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std49;
      __VERIFIER_nondet_memory(&std49, sizeof(std49));
      ref_tmp920 = std49;
      // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE
      __VERIFIER_nondet_memory(&agg_tmp419, sizeof(agg_tmp419));
      __VERIFIER_nondet_memory(&ref_tmp920, sizeof(ref_tmp920));
      int* cast50 = (int*)&(myarray18);
      int* cast51 = (int*)&(myarray18);
      int c52 = 3;
      int* ptr53 = &(cast51)[c52];
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t54 = agg_tmp419;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std55;
      __VERIFIER_nondet_memory(&std55, sizeof(std55));
      agg_tmp521 = std55;
      unsigned long c56 = 2;
      int* std57;
      __VERIFIER_nondet_memory(&std57, sizeof(std57));
      int t58 = *std57;
      int c59 = 503;
      _Bool c60 = ((t58 != c59)) ? 1 : 0;
      if (c60) {
      } else {
        char* cast61 = (char*)&(_str_2);
        char* c62 = (char*)_str_1;
        unsigned int c63 = 36;
        char* cast64 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast61, c62, c63, cast64);
      }
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1065;
        struct std__strong_ordering agg_tmp666;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1167;
        struct std____cmp_cat____unspec agg_tmp768;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp869;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std70;
        __VERIFIER_nondet_memory(&std70, sizeof(std70));
        ref_tmp1065 = std70;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std71;
        __VERIFIER_nondet_memory(&std71, sizeof(std71));
        while (1) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std73;
          __VERIFIER_nondet_memory(&std73, sizeof(std73));
          ref_tmp1167 = std73;
          struct std__strong_ordering std74;
          __VERIFIER_nondet_memory(&std74, sizeof(std74));
          agg_tmp666 = std74;
          agg_tmp768 = *&__const_main_agg_tmp7; // copy
          struct std__strong_ordering t75 = agg_tmp666;
          struct std____cmp_cat____unspec t76 = agg_tmp768;
          _Bool std77;
          __VERIFIER_nondet_memory(&std77, sizeof(std77));
          if (!std77) break;
        for_step72: ;
          int c78 = 0;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std79;
          __VERIFIER_nondet_memory(&std79, sizeof(std79));
          agg_tmp869 = std79;
        }
      int c80 = 0;
      __retval1 = c80;
      int t81 = __retval1;
      int ret_val82 = t81;
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&anothervector10, sizeof(anothervector10));
      }
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
      }
      return ret_val82;
  int t83 = __retval1;
  return t83;
}

