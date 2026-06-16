extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_;
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
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

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[17] = "myvector[2] == 3";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm83/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[19] = "myvector contains:";
char _str_3[2] = " ";
char _str_4[26] = "vector::_M_realloc_append";
char _str_5[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[19] = "__n < this->size()";
_Bool IsOdd(int p0);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z5IsOddi
_Bool IsOdd(int v0) {
bb1: ;
  int i2;
  _Bool __retval3;
  i2 = v0;
  int t4 = i2;
  int c5 = 2;
  int b6 = t4 % c5;
  int c7 = 1;
  _Bool c8 = ((b6 == c7)) ? 1 : 0;
  __retval3 = c8;
  _Bool t9 = __retval3;
  return t9;
}

// function: main
int main() {
bb10: ;
  int __retval11;
  struct std__vector_int__std__allocator_int__ myvector12;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it13;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp014;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp115;
  int ref_tmp016;
  int c17 = 0;
  __retval11 = c17;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&myvector12, sizeof(myvector12));
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it13, sizeof(it13));
      int i18;
      int c19 = 1;
      i18 = c19;
      while (1) {
        int t21 = i18;
        int c22 = 6;
        _Bool c23 = ((t21 < c22)) ? 1 : 0;
        if (!c23) break;
        // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int const&)
        __VERIFIER_nondet_memory(&myvector12, sizeof(myvector12));
        __VERIFIER_nondet_memory(&i18, sizeof(i18));
      for_step20: ;
        int t24 = i18;
        int u25 = t24 + 1;
        i18 = u25;
      }
    unsigned long c26 = 2;
    int* std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    int t28 = *std27;
    int c29 = 3;
    _Bool c30 = ((t28 == c29)) ? 1 : 0;
    if (c30) {
    } else {
      char* cast31 = (char*)&(_str);
      char* c32 = (char*)_str_1;
      unsigned int c33 = 24;
      char* cast34 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast31, c32, c33, cast34);
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std35;
    __VERIFIER_nondet_memory(&std35, sizeof(std35));
    agg_tmp014 = std35;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std36;
    __VERIFIER_nondet_memory(&std36, sizeof(std36));
    agg_tmp115 = std36;
    int c37 = 0;
    ref_tmp016 = c37;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t38 = agg_tmp014;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t39 = agg_tmp115;
    // externalized std:: op: void std::replace_if<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, bool (*)(int), int>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, bool (*)(int), int const&)
    __VERIFIER_nondet_memory(&ref_tmp016, sizeof(ref_tmp016));
    unsigned long c40 = 2;
    int* std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
    int t42 = *std41;
    int c43 = 3;
    _Bool c44 = ((t42 == c43)) ? 1 : 0;
    if (c44) {
    } else {
      char* cast45 = (char*)&(_str);
      char* c46 = (char*)_str_1;
      unsigned int c47 = 28;
      char* cast48 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast45, c46, c47, cast48);
    }
    char* cast49 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std50;
    __VERIFIER_nondet_memory(&std50, sizeof(std50));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp151;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp252;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std53;
      __VERIFIER_nondet_memory(&std53, sizeof(std53));
      ref_tmp151 = std53;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std54;
      __VERIFIER_nondet_memory(&std54, sizeof(std54));
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std56;
        __VERIFIER_nondet_memory(&std56, sizeof(std56));
        ref_tmp252 = std56;
        _Bool std57;
        __VERIFIER_nondet_memory(&std57, sizeof(std57));
        _Bool u58 = !std57;
        if (!u58) break;
        char* cast59 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std60;
        __VERIFIER_nondet_memory(&std60, sizeof(std60));
        int* std61;
        __VERIFIER_nondet_memory(&std61, sizeof(std61));
        int t62 = *std61;
        struct std__basic_ostream_char__std__char_traits_char__* std63;
        __VERIFIER_nondet_memory(&std63, sizeof(std63));
      for_step55: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std64;
        __VERIFIER_nondet_memory(&std64, sizeof(std64));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std65;
    __VERIFIER_nondet_memory(&std65, sizeof(std65));
    int c66 = 0;
    __retval11 = c66;
    int t67 = __retval11;
    int ret_val68 = t67;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector12, sizeof(myvector12));
    }
    return ret_val68;
  int t69 = __retval11;
  return t69;
}

