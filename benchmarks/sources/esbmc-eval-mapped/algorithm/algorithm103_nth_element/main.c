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
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ { void* _M_comp; };
struct __gnu_cxx____ops___Iter_comp_val_bool_____int__int__ { void* _M_comp; };
struct __gnu_cxx____ops___Val_comp_iter_bool_____int__int__ { void* _M_comp; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____cmp_cat____unspec { unsigned char __field0; };
struct std____detail___Synth3way { unsigned char __field0; };
struct std____new_allocator_int_;
struct std__allocator_int_;
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__strong_ordering { char _M_value; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

struct std____cmp_cat____unspec __const__ZSt13__introselectIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEElNS0_5__ops15_Iter_comp_iterIPFbiiEEEEvT_SC_SC_T0_T1__agg_tmp10;
struct std____cmp_cat____unspec __const__ZSt21__unguarded_partitionIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterIPFbiiEEEET_SC_SC_SC_T0__agg_tmp5;
struct std____cmp_cat____unspec __const__ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterIPFbiiEEEEvT_SC_SC_T0__agg_tmp3;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[17] = "myvector[5] != 6";
char _str_1[122] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm103_nth_element/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[17] = "myvector[4] <= 6";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[19] = "myvector contains:";
char _str_4[2] = " ";
char _str_5[26] = "vector::_M_realloc_append";
struct std____detail___Synth3way _ZNSt8__detail11__synth3wayE;
char _str_6[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_7[19] = "__n < this->size()";
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
  struct std__vector_int__std__allocator_int__ myvector12;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it13;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp014;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp115;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp016;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp217;
  int c18 = 0;
  __retval11 = c18;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&myvector12, sizeof(myvector12));
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it13, sizeof(it13));
      int i19;
      int c20 = 1;
      i19 = c20;
      while (1) {
        int t22 = i19;
        int c23 = 10;
        _Bool c24 = ((t22 < c23)) ? 1 : 0;
        if (!c24) break;
        // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int const&)
        __VERIFIER_nondet_memory(&myvector12, sizeof(myvector12));
        __VERIFIER_nondet_memory(&i19, sizeof(i19));
      for_step21: ;
        int t25 = i19;
        int u26 = t25 + 1;
        i19 = u26;
      }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    agg_tmp014 = std27;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    ref_tmp016 = std28;
    long c29 = 5;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
    agg_tmp115 = std30;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    agg_tmp217 = std31;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t32 = agg_tmp014;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t33 = agg_tmp115;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t34 = agg_tmp217;
    // externalized std:: op: void std::nth_element<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, bool (*)(int, int)>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, bool (*)(int, int))
    unsigned long c35 = 5;
    int* std36;
    __VERIFIER_nondet_memory(&std36, sizeof(std36));
    int t37 = *std36;
    int c38 = 6;
    _Bool c39 = ((t37 != c38)) ? 1 : 0;
    if (c39) {
    } else {
      char* cast40 = (char*)&(_str);
      char* c41 = _str_1;
      unsigned int c42 = 32;
      char* cast43 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast40, c41, c42, cast43);
    }
    unsigned long c44 = 4;
    int* std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
    int t46 = *std45;
    int c47 = 6;
    _Bool c48 = ((t46 <= c47)) ? 1 : 0;
    if (c48) {
    } else {
      char* cast49 = (char*)&(_str_2);
      char* c50 = _str_1;
      unsigned int c51 = 33;
      char* cast52 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast49, c50, c51, cast52);
    }
    char* cast53 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std54;
    __VERIFIER_nondet_memory(&std54, sizeof(std54));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp155;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp256;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std57;
      __VERIFIER_nondet_memory(&std57, sizeof(std57));
      ref_tmp155 = std57;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std58;
      __VERIFIER_nondet_memory(&std58, sizeof(std58));
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std60;
        __VERIFIER_nondet_memory(&std60, sizeof(std60));
        ref_tmp256 = std60;
        _Bool std61;
        __VERIFIER_nondet_memory(&std61, sizeof(std61));
        _Bool u62 = !std61;
        if (!u62) break;
        char* cast63 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* std64;
        __VERIFIER_nondet_memory(&std64, sizeof(std64));
        int* std65;
        __VERIFIER_nondet_memory(&std65, sizeof(std65));
        int t66 = *std65;
        struct std__basic_ostream_char__std__char_traits_char__* std67;
        __VERIFIER_nondet_memory(&std67, sizeof(std67));
      for_step59: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std68;
        __VERIFIER_nondet_memory(&std68, sizeof(std68));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std69;
    __VERIFIER_nondet_memory(&std69, sizeof(std69));
    int c70 = 0;
    __retval11 = c70;
    int t71 = __retval11;
    int ret_val72 = t71;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector12, sizeof(myvector12));
    }
    return ret_val72;
  int t73 = __retval11;
  return t73;
}

