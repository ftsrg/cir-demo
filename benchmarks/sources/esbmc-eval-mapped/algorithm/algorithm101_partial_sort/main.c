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
struct __gnu_cxx____ops___Iter_comp_val_bool_____int__int__ { void* _M_comp; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____cmp_cat____unspec { unsigned char __field0; };
struct std____detail___Synth3way { unsigned char __field0; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std__strong_ordering { char _M_value; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints[5] = {5, 4, 3, 2, 1};
struct std____cmp_cat____unspec __const__ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterIPFbiiEEEEvT_SC_SC_T0__agg_tmp3;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[17] = "myvector[0] == 1";
char _str_1[123] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm101_partial_sort/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[17] = "myvector[1] != 2";
char _str_3[17] = "myvector[2] == 3";
char _str_4[17] = "myvector[3] == 5";
char _str_5[17] = "myvector[4] == 4";
char _str_6[19] = "myvector contains:";
char _str_7[2] = " ";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_8[49] = "cannot create std::vector larger than max_size()";
struct std____detail___Synth3way _ZNSt8__detail11__synth3wayE;
char _str_9[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_10[19] = "__n < this->size()";
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
  int myints12[5];
  struct std__vector_int__std__allocator_int__ myvector13;
  struct std__allocator_int_ ref_tmp014;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it15;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp016;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp117;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp118;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp219;
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
    struct std__basic_ostream_char__std__char_traits_char__* std25;
    __VERIFIER_nondet_memory(&std25, sizeof(std25));
    struct std__basic_ostream_char__std__char_traits_char__* std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    int* cast27 = (int*)&(myints12);
    int* cast28 = (int*)&(myints12);
    int c29 = 5;
    int* ptr30 = &(cast28)[c29];
    // externalized std:: op: void std::vector<int, std::allocator<int> >::assign<int*, void>(int*, int*)
    __VERIFIER_nondet_memory(&myvector13, sizeof(myvector13));
    __VERIFIER_nondet_memory(cast27, sizeof(*cast27));
    __VERIFIER_nondet_memory(ptr30, sizeof(*ptr30));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    agg_tmp016 = std31;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    ref_tmp118 = std32;
    long c33 = 3;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std34;
    __VERIFIER_nondet_memory(&std34, sizeof(std34));
    agg_tmp117 = std34;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std35;
    __VERIFIER_nondet_memory(&std35, sizeof(std35));
    agg_tmp219 = std35;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t36 = agg_tmp016;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t37 = agg_tmp117;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t38 = agg_tmp219;
    // externalized std:: op: void std::partial_sort<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, bool (*)(int, int)>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, bool (*)(int, int))
    unsigned long c39 = 0;
    int* std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    int t41 = *std40;
    int c42 = 1;
    _Bool c43 = ((t41 == c42)) ? 1 : 0;
    if (c43) {
    } else {
      char* cast44 = (char*)&(_str);
      char* c45 = _str_1;
      unsigned int c46 = 37;
      char* cast47 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast44, c45, c46, cast47);
    }
    unsigned long c48 = 1;
    int* std49;
    __VERIFIER_nondet_memory(&std49, sizeof(std49));
    int t50 = *std49;
    int c51 = 2;
    _Bool c52 = ((t50 != c51)) ? 1 : 0;
    if (c52) {
    } else {
      char* cast53 = (char*)&(_str_2);
      char* c54 = _str_1;
      unsigned int c55 = 38;
      char* cast56 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast53, c54, c55, cast56);
    }
    unsigned long c57 = 2;
    int* std58;
    __VERIFIER_nondet_memory(&std58, sizeof(std58));
    int t59 = *std58;
    int c60 = 3;
    _Bool c61 = ((t59 == c60)) ? 1 : 0;
    if (c61) {
    } else {
      char* cast62 = (char*)&(_str_3);
      char* c63 = _str_1;
      unsigned int c64 = 39;
      char* cast65 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast62, c63, c64, cast65);
    }
    unsigned long c66 = 3;
    int* std67;
    __VERIFIER_nondet_memory(&std67, sizeof(std67));
    int t68 = *std67;
    int c69 = 5;
    _Bool c70 = ((t68 == c69)) ? 1 : 0;
    if (c70) {
    } else {
      char* cast71 = (char*)&(_str_4);
      char* c72 = _str_1;
      unsigned int c73 = 40;
      char* cast74 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast71, c72, c73, cast74);
    }
    unsigned long c75 = 4;
    int* std76;
    __VERIFIER_nondet_memory(&std76, sizeof(std76));
    int t77 = *std76;
    int c78 = 4;
    _Bool c79 = ((t77 == c78)) ? 1 : 0;
    if (c79) {
    } else {
      char* cast80 = (char*)&(_str_5);
      char* c81 = _str_1;
      unsigned int c82 = 41;
      char* cast83 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast80, c81, c82, cast83);
    }
    struct std__basic_ostream_char__std__char_traits_char__* std84;
    __VERIFIER_nondet_memory(&std84, sizeof(std84));
    char* cast85 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* std86;
    __VERIFIER_nondet_memory(&std86, sizeof(std86));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp287;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp388;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std89;
      __VERIFIER_nondet_memory(&std89, sizeof(std89));
      ref_tmp287 = std89;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std90;
      __VERIFIER_nondet_memory(&std90, sizeof(std90));
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std92;
        __VERIFIER_nondet_memory(&std92, sizeof(std92));
        ref_tmp388 = std92;
        _Bool std93;
        __VERIFIER_nondet_memory(&std93, sizeof(std93));
        _Bool u94 = !std93;
        if (!u94) break;
        char* cast95 = (char*)&(_str_7);
        struct std__basic_ostream_char__std__char_traits_char__* std96;
        __VERIFIER_nondet_memory(&std96, sizeof(std96));
        int* std97;
        __VERIFIER_nondet_memory(&std97, sizeof(std97));
        int t98 = *std97;
        struct std__basic_ostream_char__std__char_traits_char__* std99;
        __VERIFIER_nondet_memory(&std99, sizeof(std99));
      for_step91: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std100;
        __VERIFIER_nondet_memory(&std100, sizeof(std100));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std101;
    __VERIFIER_nondet_memory(&std101, sizeof(std101));
    int c102 = 0;
    __retval11 = c102;
    int t103 = __retval11;
    int ret_val104 = t103;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector13, sizeof(myvector13));
    }
    return ret_val104;
  int t105 = __retval11;
  return t105;
}

