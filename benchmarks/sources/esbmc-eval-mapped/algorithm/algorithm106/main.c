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
char _str[47] = "(*bounds.first != 20) ||(*bounds.second != 10)";
char _str_1[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm106/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_2[49] = "cannot create std::vector larger than max_size()";
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
  int c26 = 0;
  __retval11 = c26;
  // array copy
  __builtin_memcpy(myints12, __const_main_myints, (unsigned long)8 * sizeof(__const_main_myints[0]));
  // array copy
  __builtin_memcpy(myints113, __const_main_myints1, (unsigned long)8 * sizeof(__const_main_myints1[0]));
  // array copy
  __builtin_memcpy(myints214, __const_main_myints2, (unsigned long)8 * sizeof(__const_main_myints2[0]));
  int* cast27 = (int*)&(myints12);
  int* cast28 = (int*)&(myints12);
  int c29 = 8;
  int* ptr30 = &(cast28)[c29];
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp016, sizeof(ref_tmp016));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&v15, sizeof(v15));
    __VERIFIER_nondet_memory(cast27, sizeof(*cast27));
    __VERIFIER_nondet_memory(ptr30, sizeof(*ptr30));
    __VERIFIER_nondet_memory(&ref_tmp016, sizeof(ref_tmp016));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp016, sizeof(ref_tmp016));
  }
    // externalized std:: op: _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E
    __VERIFIER_nondet_memory(&bounds17, sizeof(bounds17));
    int* cast31 = (int*)&(myints113);
    int* cast32 = (int*)&(myints113);
    int c33 = 8;
    int* ptr34 = &(cast32)[c33];
    // externalized std:: op: void std::vector<int, std::allocator<int> >::assign<int*, void>(int*, int*)
    __VERIFIER_nondet_memory(&v15, sizeof(v15));
    __VERIFIER_nondet_memory(cast31, sizeof(*cast31));
    __VERIFIER_nondet_memory(ptr34, sizeof(*ptr34));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std35;
    __VERIFIER_nondet_memory(&std35, sizeof(std35));
    agg_tmp019 = std35;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std36;
    __VERIFIER_nondet_memory(&std36, sizeof(std36));
    agg_tmp120 = std36;
    int c37 = 20;
    ref_tmp221 = c37;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t38 = agg_tmp019;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t39 = agg_tmp120;
    struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    ref_tmp118 = std40;
    struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
    int* cast42 = (int*)&(myints214);
    int* cast43 = (int*)&(myints214);
    int c44 = 8;
    int* ptr45 = &(cast43)[c44];
    // externalized std:: op: void std::vector<int, std::allocator<int> >::assign<int*, void>(int*, int*)
    __VERIFIER_nondet_memory(&v15, sizeof(v15));
    __VERIFIER_nondet_memory(cast42, sizeof(*cast42));
    __VERIFIER_nondet_memory(ptr45, sizeof(*ptr45));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std46;
    __VERIFIER_nondet_memory(&std46, sizeof(std46));
    agg_tmp223 = std46;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std47;
    __VERIFIER_nondet_memory(&std47, sizeof(std47));
    agg_tmp324 = std47;
    int c48 = 20;
    ref_tmp425 = c48;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t49 = agg_tmp223;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t50 = agg_tmp324;
    struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ std51;
    __VERIFIER_nondet_memory(&std51, sizeof(std51));
    ref_tmp322 = std51;
    struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* std52;
    __VERIFIER_nondet_memory(&std52, sizeof(std52));
    int* std53;
    __VERIFIER_nondet_memory(&std53, sizeof(std53));
    int t54 = *std53;
    int c55 = 20;
    _Bool c56 = ((t54 != c55)) ? 1 : 0;
    _Bool ternary57;
    if (c56) {
      _Bool c58 = 1;
      ternary57 = (_Bool)c58;
    } else {
      int* std59;
      __VERIFIER_nondet_memory(&std59, sizeof(std59));
      int t60 = *std59;
      int c61 = 10;
      _Bool c62 = ((t60 != c61)) ? 1 : 0;
      ternary57 = (_Bool)c62;
    }
    if (ternary57) {
    } else {
      char* cast63 = (char*)&(_str);
      char* c64 = _str_1;
      unsigned int c65 = 31;
      char* cast66 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast63, c64, c65, cast66);
    }
    int c67 = 0;
    __retval11 = c67;
    int t68 = __retval11;
    int ret_val69 = t68;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&v15, sizeof(v15));
    }
    return ret_val69;
  int t70 = __retval11;
  return t70;
}

