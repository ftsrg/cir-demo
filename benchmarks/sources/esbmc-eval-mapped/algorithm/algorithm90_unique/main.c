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
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ { void* _M_comp; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints1[5] = {10, 20, 30, 20, 10};
int __const_main_myints[9] = {10, 20, 20, 20, 30, 30, 20, 20, 10};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[21] = "it != myvector.end()";
char _str_1[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm90_unique/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[19] = "myvector contains:";
char _str_3[2] = " ";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_4[49] = "cannot create std::vector larger than max_size()";
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
  _Bool c8 = ((t6 == t7)) ? 1 : 0;
  __retval5 = c8;
  _Bool t9 = __retval5;
  return t9;
}

// function: main
int main() {
bb10:
  int __retval11;
  int myints12[9];
  int myints113[5];
  struct std__vector_int__std__allocator_int__ myvector14;
  struct std__allocator_int_ ref_tmp015;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it16;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it217;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp118;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp019;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp120;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp221;
  int c22 = 0;
  __retval11 = c22;
  // array copy
  __builtin_memcpy(myints12, __const_main_myints, (unsigned long)9 * sizeof(__const_main_myints[0]));
  // array copy
  __builtin_memcpy(myints113, __const_main_myints1, (unsigned long)5 * sizeof(__const_main_myints1[0]));
  int* cast23 = (int*)&(myints12);
  int* cast24 = (int*)&(myints12);
  int c25 = 9;
  int* ptr26 = &(cast24)[c25];
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp015, sizeof(ref_tmp015));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&myvector14, sizeof(myvector14));
    __VERIFIER_nondet_memory(cast23, sizeof(*cast23));
    __VERIFIER_nondet_memory(ptr26, sizeof(*ptr26));
    __VERIFIER_nondet_memory(&ref_tmp015, sizeof(ref_tmp015));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp015, sizeof(ref_tmp015));
  }
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it16, sizeof(it16));
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it217, sizeof(it217));
    int* cast27 = (int*)&(myints113);
    int* cast28 = (int*)&(myints113);
    int c29 = 5;
    int* ptr30 = &(cast28)[c29];
    // externalized std:: op: void std::vector<int, std::allocator<int> >::assign<int*, void>(int*, int*)
    __VERIFIER_nondet_memory(&myvector14, sizeof(myvector14));
    __VERIFIER_nondet_memory(cast27, sizeof(*cast27));
    __VERIFIER_nondet_memory(ptr30, sizeof(*ptr30));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    agg_tmp019 = std31;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    agg_tmp120 = std32;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t33 = agg_tmp019;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t34 = agg_tmp120;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std35;
    __VERIFIER_nondet_memory(&std35, sizeof(std35));
    ref_tmp118 = std35;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std36;
    __VERIFIER_nondet_memory(&std36, sizeof(std36));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std37;
    __VERIFIER_nondet_memory(&std37, sizeof(std37));
    ref_tmp221 = std37;
    _Bool std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    _Bool u39 = !std38;
    if (u39) {
    } else {
      char* cast40 = (char*)&(_str);
      char* c41 = _str_1;
      unsigned int c42 = 35;
      char* cast43 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast40, c41, c42, cast43);
    }
    char* cast44 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp346;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp447;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std48;
      __VERIFIER_nondet_memory(&std48, sizeof(std48));
      ref_tmp346 = std48;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std49;
      __VERIFIER_nondet_memory(&std49, sizeof(std49));
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std51;
        __VERIFIER_nondet_memory(&std51, sizeof(std51));
        ref_tmp447 = std51;
        _Bool std52;
        __VERIFIER_nondet_memory(&std52, sizeof(std52));
        _Bool u53 = !std52;
        if (!u53) break;
        char* cast54 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std55;
        __VERIFIER_nondet_memory(&std55, sizeof(std55));
        int* std56;
        __VERIFIER_nondet_memory(&std56, sizeof(std56));
        int t57 = *std56;
        struct std__basic_ostream_char__std__char_traits_char__* std58;
        __VERIFIER_nondet_memory(&std58, sizeof(std58));
      for_step50: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std59;
        __VERIFIER_nondet_memory(&std59, sizeof(std59));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std60;
    __VERIFIER_nondet_memory(&std60, sizeof(std60));
    int c61 = 0;
    __retval11 = c61;
    int t62 = __retval11;
    int ret_val63 = t62;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector14, sizeof(myvector14));
    }
    return ret_val63;
  int t64 = __retval11;
  return t64;
}

