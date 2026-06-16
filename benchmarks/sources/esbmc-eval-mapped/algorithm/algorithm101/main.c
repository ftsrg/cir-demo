extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____ops___Iter_less_iter { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_less_val { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____cmp_cat____unspec { unsigned char __field0; };
struct std____detail___Synth3way { unsigned char __field0; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__ranges____distance_fn { unsigned char __field0; };
struct std__strong_ordering { char _M_value; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

int __const_main_myints[5] = {5, 4, 3, 2, 1};
struct std____cmp_cat____unspec __const__ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_S9_T0__agg_tmp3;
struct __gnu_cxx____ops___Iter_less_val __const__ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops15_Iter_less_iterEEvT_T0_SA_T1_T2____cmp;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[17] = "myvector[0] == 1";
char _str_1[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm101/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[17] = "myvector[1] == 2";
char _str_3[17] = "myvector[2] == 3";
char _str_4[17] = "myvector[3] != 5";
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
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z10myfunctionii
_Bool myfunction(int v0, int v1) {
bb2: ;
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
bb10: ;
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
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    agg_tmp016 = std26;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    ref_tmp118 = std27;
    long c28 = 3;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    agg_tmp117 = std29;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
    agg_tmp219 = std30;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t31 = agg_tmp016;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t32 = agg_tmp117;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t33 = agg_tmp219;
    // externalized std:: op: void std::partial_sort<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >)
    unsigned long c34 = 0;
    int* std35;
    __VERIFIER_nondet_memory(&std35, sizeof(std35));
    int t36 = *std35;
    int c37 = 1;
    _Bool c38 = ((t36 == c37)) ? 1 : 0;
    if (c38) {
    } else {
      char* cast39 = (char*)&(_str);
      char* c40 = (char*)_str_1;
      unsigned int c41 = 24;
      char* cast42 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast39, c40, c41, cast42);
    }
    unsigned long c43 = 1;
    int* std44;
    __VERIFIER_nondet_memory(&std44, sizeof(std44));
    int t45 = *std44;
    int c46 = 2;
    _Bool c47 = ((t45 == c46)) ? 1 : 0;
    if (c47) {
    } else {
      char* cast48 = (char*)&(_str_2);
      char* c49 = (char*)_str_1;
      unsigned int c50 = 25;
      char* cast51 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast48, c49, c50, cast51);
    }
    unsigned long c52 = 2;
    int* std53;
    __VERIFIER_nondet_memory(&std53, sizeof(std53));
    int t54 = *std53;
    int c55 = 3;
    _Bool c56 = ((t54 == c55)) ? 1 : 0;
    if (c56) {
    } else {
      char* cast57 = (char*)&(_str_3);
      char* c58 = (char*)_str_1;
      unsigned int c59 = 26;
      char* cast60 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast57, c58, c59, cast60);
    }
    unsigned long c61 = 3;
    int* std62;
    __VERIFIER_nondet_memory(&std62, sizeof(std62));
    int t63 = *std62;
    int c64 = 5;
    _Bool c65 = ((t63 != c64)) ? 1 : 0;
    if (c65) {
    } else {
      char* cast66 = (char*)&(_str_4);
      char* c67 = (char*)_str_1;
      unsigned int c68 = 27;
      char* cast69 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast66, c67, c68, cast69);
    }
    unsigned long c70 = 4;
    int* std71;
    __VERIFIER_nondet_memory(&std71, sizeof(std71));
    int t72 = *std71;
    int c73 = 4;
    _Bool c74 = ((t72 == c73)) ? 1 : 0;
    if (c74) {
    } else {
      char* cast75 = (char*)&(_str_5);
      char* c76 = (char*)_str_1;
      unsigned int c77 = 28;
      char* cast78 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast75, c76, c77, cast78);
    }
    struct std__basic_ostream_char__std__char_traits_char__* std79;
    __VERIFIER_nondet_memory(&std79, sizeof(std79));
    char* cast80 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* std81;
    __VERIFIER_nondet_memory(&std81, sizeof(std81));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp282;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp383;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std84;
      __VERIFIER_nondet_memory(&std84, sizeof(std84));
      ref_tmp282 = std84;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std85;
      __VERIFIER_nondet_memory(&std85, sizeof(std85));
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std87;
        __VERIFIER_nondet_memory(&std87, sizeof(std87));
        ref_tmp383 = std87;
        _Bool std88;
        __VERIFIER_nondet_memory(&std88, sizeof(std88));
        _Bool u89 = !std88;
        if (!u89) break;
        char* cast90 = (char*)&(_str_7);
        struct std__basic_ostream_char__std__char_traits_char__* std91;
        __VERIFIER_nondet_memory(&std91, sizeof(std91));
        int* std92;
        __VERIFIER_nondet_memory(&std92, sizeof(std92));
        int t93 = *std92;
        struct std__basic_ostream_char__std__char_traits_char__* std94;
        __VERIFIER_nondet_memory(&std94, sizeof(std94));
      for_step86: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std95;
        __VERIFIER_nondet_memory(&std95, sizeof(std95));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std96;
    __VERIFIER_nondet_memory(&std96, sizeof(std96));
    int c97 = 0;
    __retval11 = c97;
    int t98 = __retval11;
    int ret_val99 = t98;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector13, sizeof(myvector13));
    }
    return ret_val99;
  int t100 = __retval11;
  return t100;
}

