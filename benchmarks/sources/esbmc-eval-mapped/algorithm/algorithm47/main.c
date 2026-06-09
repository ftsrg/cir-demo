extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____ops___Iter_comp_val_bool_____int__int__ { void* _M_comp; };
struct __gnu_cxx____ops___Iter_less_val { unsigned char __field0; };
struct __gnu_cxx____ops___Val_comp_iter_bool_____int__int__ { void* _M_comp; };
struct __gnu_cxx____ops___Val_less_iter { unsigned char __field0; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std____pair_base___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____;
struct std__allocator_int_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ { struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ first; struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ second; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints2[8] = {30, 30, 20, 20, 20, 10, 10, 10};
int __const_main_myints1[8] = {10, 10, 10, 20, 20, 20, 30, 30};
int __const_main_myints[8] = {10, 20, 30, 30, 20, 10, 10, 20};
char _str[28] = "bounds.first == v.begin()+2";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm47/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[29] = "bounds.second == v.begin()+5";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_3[49] = "cannot create std::vector larger than max_size()";
_Bool mygreater(int p0, int p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z9mygreaterii
_Bool mygreater(int v0, int v1) {
bb2:
  int i3;
  int j4;
  _Bool __retval5;
  i3 = v0;
  j4 = v1;
  int t6 = i3;
  int t7 = j4;
  _Bool c8 = ((t6 > t7)) ? 1 : 0;
  __retval5 = c8;
  _Bool t9 = __retval5;
  return t9;
}

// function: main
int main() {
bb10:
  int __retval11;
  int myints12[8];
  int myints113[8];
  int myints214[8];
  struct std__vector_int__std__allocator_int__ v15;
  struct std__allocator_int_ ref_tmp016;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ bounds17;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ ref_tmp118;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp019;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp120;
  int ref_tmp221;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ ref_tmp322;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp223;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp324;
  int ref_tmp425;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp526;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp627;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp728;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp829;
  int c30 = 0;
  __retval11 = c30;
  // array copy
  __builtin_memcpy(myints12, __const_main_myints, (unsigned long)8 * sizeof(__const_main_myints[0]));
  // array copy
  __builtin_memcpy(myints113, __const_main_myints1, (unsigned long)8 * sizeof(__const_main_myints1[0]));
  // array copy
  __builtin_memcpy(myints214, __const_main_myints2, (unsigned long)8 * sizeof(__const_main_myints2[0]));
  int* cast31 = (int*)&(myints12);
  int* cast32 = (int*)&(myints12);
  int c33 = 8;
  int* ptr34 = &(cast32)[c33];
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp016, sizeof(ref_tmp016));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&v15, sizeof(v15));
    __VERIFIER_nondet_memory(cast31, sizeof(*cast31));
    __VERIFIER_nondet_memory(ptr34, sizeof(*ptr34));
    __VERIFIER_nondet_memory(&ref_tmp016, sizeof(ref_tmp016));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp016, sizeof(ref_tmp016));
  }
    // externalized std:: op: _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E
    __VERIFIER_nondet_memory(&bounds17, sizeof(bounds17));
    int* cast35 = (int*)&(myints113);
    int* cast36 = (int*)&(myints113);
    int c37 = 8;
    int* ptr38 = &(cast36)[c37];
    // externalized std:: op: void std::vector<int, std::allocator<int> >::assign<int*, void>(int*, int*)
    __VERIFIER_nondet_memory(&v15, sizeof(v15));
    __VERIFIER_nondet_memory(cast35, sizeof(*cast35));
    __VERIFIER_nondet_memory(ptr38, sizeof(*ptr38));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std39;
    __VERIFIER_nondet_memory(&std39, sizeof(std39));
    agg_tmp019 = std39;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    agg_tmp120 = std40;
    int c41 = 20;
    ref_tmp221 = c41;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t42 = agg_tmp019;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t43 = agg_tmp120;
    struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ std44;
    __VERIFIER_nondet_memory(&std44, sizeof(std44));
    ref_tmp118 = std44;
    struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
    int* cast46 = (int*)&(myints214);
    int* cast47 = (int*)&(myints214);
    int c48 = 8;
    int* ptr49 = &(cast47)[c48];
    // externalized std:: op: void std::vector<int, std::allocator<int> >::assign<int*, void>(int*, int*)
    __VERIFIER_nondet_memory(&v15, sizeof(v15));
    __VERIFIER_nondet_memory(cast46, sizeof(*cast46));
    __VERIFIER_nondet_memory(ptr49, sizeof(*ptr49));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std50;
    __VERIFIER_nondet_memory(&std50, sizeof(std50));
    agg_tmp223 = std50;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std51;
    __VERIFIER_nondet_memory(&std51, sizeof(std51));
    agg_tmp324 = std51;
    int c52 = 20;
    ref_tmp425 = c52;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t53 = agg_tmp223;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t54 = agg_tmp324;
    struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ std55;
    __VERIFIER_nondet_memory(&std55, sizeof(std55));
    ref_tmp322 = std55;
    struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* std56;
    __VERIFIER_nondet_memory(&std56, sizeof(std56));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std57;
    __VERIFIER_nondet_memory(&std57, sizeof(std57));
    ref_tmp627 = std57;
    long c58 = 2;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std59;
    __VERIFIER_nondet_memory(&std59, sizeof(std59));
    ref_tmp526 = std59;
    _Bool std60;
    __VERIFIER_nondet_memory(&std60, sizeof(std60));
    if (std60) {
    } else {
      char* cast61 = (char*)&(_str);
      char* c62 = _str_1;
      unsigned int c63 = 31;
      char* cast64 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast61, c62, c63, cast64);
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std65;
    __VERIFIER_nondet_memory(&std65, sizeof(std65));
    ref_tmp829 = std65;
    long c66 = 5;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std67;
    __VERIFIER_nondet_memory(&std67, sizeof(std67));
    ref_tmp728 = std67;
    _Bool std68;
    __VERIFIER_nondet_memory(&std68, sizeof(std68));
    if (std68) {
    } else {
      char* cast69 = (char*)&(_str_2);
      char* c70 = _str_1;
      unsigned int c71 = 32;
      char* cast72 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast69, c70, c71, cast72);
    }
    int c73 = 0;
    __retval11 = c73;
    int t74 = __retval11;
    int ret_val75 = t74;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&v15, sizeof(v15));
    }
    return ret_val75;
  int t76 = __retval11;
  return t76;
}

