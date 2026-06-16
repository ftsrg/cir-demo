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
struct std____detail____move_iter_cat_int___;
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__move_iterator_int___ { int* _M_current; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____imove___IterMove { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
union std__vector_int__std__allocator_int_____Temporary_value___Storage { unsigned char _M_byte; int _M_val; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__vector_int__std__allocator_int_____Temporary_value { struct std__vector_int__std__allocator_int__* _M_this; union std__vector_int__std__allocator_int_____Temporary_value___Storage _M_storage; unsigned char __field2[4]; } __attribute__((packed));
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myarray[3] = {501, 502, 503};
char _str[2] = "0";
char _str_1[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/vector35/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[49] = "cannot create std::vector larger than max_size()";
char _str_3[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_4[9] = "__n >= 0";
char _str_5[26] = "vector::_M_realloc_insert";
char _str_6[23] = "vector::_M_fill_insert";
char _str_7[23] = "vector::_M_fill_append";
struct std__ranges____imove___IterMove _ZNSt6ranges4_Cpo9iter_moveE;
char _str_8[24] = "vector::_M_range_insert";
char _str_9[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_10[19] = "__n < this->size()";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0: ;
  int __retval1;
  struct std__vector_int__std__allocator_int__ myvector2;
  int ref_tmp03;
  struct std__allocator_int_ ref_tmp14;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it5;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp26;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp37;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp08;
  int ref_tmp49;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp110;
  int ref_tmp511;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp212;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp613;
  struct std__vector_int__std__allocator_int__ anothervector14;
  int ref_tmp715;
  struct std__allocator_int_ ref_tmp816;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp317;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp918;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp419;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp520;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp621;
  int myarray22[3];
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp723;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1024;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp825;
  int c26 = 0;
  __retval1 = c26;
  unsigned long c27 = 3;
  int c28 = 100;
  ref_tmp03 = c28;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, int const&, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
  }
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it5, sizeof(it5));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    ref_tmp26 = std29;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
    // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE
    __VERIFIER_nondet_memory(&agg_tmp08, sizeof(agg_tmp08));
    __VERIFIER_nondet_memory(&it5, sizeof(it5));
    int c31 = 200;
    ref_tmp49 = c31;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t32 = agg_tmp08;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    ref_tmp37 = std33;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std34;
    __VERIFIER_nondet_memory(&std34, sizeof(std34));
    // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE
    __VERIFIER_nondet_memory(&agg_tmp110, sizeof(agg_tmp110));
    __VERIFIER_nondet_memory(&it5, sizeof(it5));
    unsigned long c35 = 2;
    int c36 = 300;
    ref_tmp511 = c36;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t37 = agg_tmp110;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    agg_tmp212 = std38;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std39;
    __VERIFIER_nondet_memory(&std39, sizeof(std39));
    ref_tmp613 = std39;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    unsigned long c41 = 2;
    int c42 = 400;
    ref_tmp715 = c42;
    // externalized std:: op: std::allocator<int>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp816, sizeof(ref_tmp816));
      // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, int const&, std::allocator<int> const&)
      __VERIFIER_nondet_memory(&anothervector14, sizeof(anothervector14));
      __VERIFIER_nondet_memory(&ref_tmp715, sizeof(ref_tmp715));
      __VERIFIER_nondet_memory(&ref_tmp816, sizeof(ref_tmp816));
    {
      // externalized std:: op: std::allocator<int>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp816, sizeof(ref_tmp816));
    }
      long c43 = 2;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std44;
      __VERIFIER_nondet_memory(&std44, sizeof(std44));
      ref_tmp918 = std44;
      // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE
      __VERIFIER_nondet_memory(&agg_tmp317, sizeof(agg_tmp317));
      __VERIFIER_nondet_memory(&ref_tmp918, sizeof(ref_tmp918));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std45;
      __VERIFIER_nondet_memory(&std45, sizeof(std45));
      agg_tmp419 = std45;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std46;
      __VERIFIER_nondet_memory(&std46, sizeof(std46));
      agg_tmp520 = std46;
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t47 = agg_tmp317;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t48 = agg_tmp419;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t49 = agg_tmp520;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std50;
      __VERIFIER_nondet_memory(&std50, sizeof(std50));
      agg_tmp621 = std50;
      // array copy
      __builtin_memcpy(myarray22, __const_main_myarray, (unsigned long)3 * sizeof(__const_main_myarray[0]));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std51;
      __VERIFIER_nondet_memory(&std51, sizeof(std51));
      ref_tmp1024 = std51;
      // externalized std:: op: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE
      __VERIFIER_nondet_memory(&agg_tmp723, sizeof(agg_tmp723));
      __VERIFIER_nondet_memory(&ref_tmp1024, sizeof(ref_tmp1024));
      int* cast52 = (int*)&(myarray22);
      int* cast53 = (int*)&(myarray22);
      int c54 = 3;
      int* ptr55 = &(cast53)[c54];
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t56 = agg_tmp723;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std57;
      __VERIFIER_nondet_memory(&std57, sizeof(std57));
      agg_tmp825 = std57;
        unsigned long c58 = 2;
        int* std59;
        __VERIFIER_nondet_memory(&std59, sizeof(std59));
        int t60 = *std59;
        int c61 = 503;
        _Bool c62 = ((t60 != c61)) ? 1 : 0;
        if (c62) {
          char* cast63 = (char*)&(_str);
          char* c64 = (char*)_str_1;
          unsigned int c65 = 32;
          char* cast66 = (char*)&(__PRETTY_FUNCTION___main);
          reach_error();
          __assert_fail(cast63, c64, c65, cast66);
        }
      int c67 = 0;
      __retval1 = c67;
      int t68 = __retval1;
      int ret_val69 = t68;
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&anothervector14, sizeof(anothervector14));
      }
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
      }
      return ret_val69;
  int t70 = __retval1;
  return t70;
}

