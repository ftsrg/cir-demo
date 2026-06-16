extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____ops___Iter_pred_bool_____int__ { void* _M_pred; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__random_access_iterator_tag { unsigned char __field0; };
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

int __const_main_myints[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[17] = "myvector[0] == 2";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm30/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[17] = "myvector[1] == 4";
char _str_3[17] = "myvector[2] == 6";
char _str_4[17] = "myvector[3] == 8";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[19] = "myvector contains:";
char _str_6[2] = " ";
char _str_7[49] = "cannot create std::vector larger than max_size()";
char _str_8[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_9[19] = "__n < this->size()";
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
  int myints12[9];
  struct std__vector_int__std__allocator_int__ myvector13;
  struct std__allocator_int_ ref_tmp014;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it15;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp016;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp117;
  int c18 = 0;
  __retval11 = c18;
  // array copy
  __builtin_memcpy(myints12, __const_main_myints, (unsigned long)9 * sizeof(__const_main_myints[0]));
  unsigned long c19 = 9;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp014, sizeof(ref_tmp014));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&myvector13, sizeof(myvector13));
    __VERIFIER_nondet_memory(&ref_tmp014, sizeof(ref_tmp014));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp014, sizeof(ref_tmp014));
  }
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it15, sizeof(it15));
    int* cast20 = (int*)&(myints12);
    int* cast21 = (int*)&(myints12);
    int c22 = 9;
    int* ptr23 = &(cast21)[c22];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std24;
    __VERIFIER_nondet_memory(&std24, sizeof(std24));
    agg_tmp016 = std24;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t25 = agg_tmp016;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    agg_tmp117 = std26;
    unsigned long c27 = 0;
    int* std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    int t29 = *std28;
    int c30 = 2;
    _Bool c31 = ((t29 == c30)) ? 1 : 0;
    if (c31) {
    } else {
      char* cast32 = (char*)&(_str);
      char* c33 = (char*)_str_1;
      unsigned int c34 = 23;
      char* cast35 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast32, c33, c34, cast35);
    }
    unsigned long c36 = 1;
    int* std37;
    __VERIFIER_nondet_memory(&std37, sizeof(std37));
    int t38 = *std37;
    int c39 = 4;
    _Bool c40 = ((t38 == c39)) ? 1 : 0;
    if (c40) {
    } else {
      char* cast41 = (char*)&(_str_2);
      char* c42 = (char*)_str_1;
      unsigned int c43 = 24;
      char* cast44 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast41, c42, c43, cast44);
    }
    unsigned long c45 = 2;
    int* std46;
    __VERIFIER_nondet_memory(&std46, sizeof(std46));
    int t47 = *std46;
    int c48 = 6;
    _Bool c49 = ((t47 == c48)) ? 1 : 0;
    if (c49) {
    } else {
      char* cast50 = (char*)&(_str_3);
      char* c51 = (char*)_str_1;
      unsigned int c52 = 25;
      char* cast53 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast50, c51, c52, cast53);
    }
    unsigned long c54 = 3;
    int* std55;
    __VERIFIER_nondet_memory(&std55, sizeof(std55));
    int t56 = *std55;
    int c57 = 8;
    _Bool c58 = ((t56 == c57)) ? 1 : 0;
    if (c58) {
    } else {
      char* cast59 = (char*)&(_str_4);
      char* c60 = (char*)_str_1;
      unsigned int c61 = 26;
      char* cast62 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast59, c60, c61, cast62);
    }
    char* cast63 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* std64;
    __VERIFIER_nondet_memory(&std64, sizeof(std64));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp165;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp266;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std67;
      __VERIFIER_nondet_memory(&std67, sizeof(std67));
      ref_tmp165 = std67;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std68;
      __VERIFIER_nondet_memory(&std68, sizeof(std68));
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std70;
        __VERIFIER_nondet_memory(&std70, sizeof(std70));
        ref_tmp266 = std70;
        _Bool std71;
        __VERIFIER_nondet_memory(&std71, sizeof(std71));
        _Bool u72 = !std71;
        if (!u72) break;
        char* cast73 = (char*)&(_str_6);
        struct std__basic_ostream_char__std__char_traits_char__* std74;
        __VERIFIER_nondet_memory(&std74, sizeof(std74));
        int* std75;
        __VERIFIER_nondet_memory(&std75, sizeof(std75));
        int t76 = *std75;
        struct std__basic_ostream_char__std__char_traits_char__* std77;
        __VERIFIER_nondet_memory(&std77, sizeof(std77));
      for_step69: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std78;
        __VERIFIER_nondet_memory(&std78, sizeof(std78));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std79;
    __VERIFIER_nondet_memory(&std79, sizeof(std79));
    int c80 = 0;
    __retval11 = c80;
    int t81 = __retval11;
    int ret_val82 = t81;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector13, sizeof(myvector13));
    }
    return ret_val82;
  int t83 = __retval11;
  return t83;
}

