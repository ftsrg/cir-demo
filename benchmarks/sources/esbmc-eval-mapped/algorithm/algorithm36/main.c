extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_;
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__random_access_iterator_tag { unsigned char __field0; };
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

int __const_main_myints[7] = {10, 20, 30, 40, 50, 60, 70};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "myvector[0] == 40";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm36/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "myvector[1] == 50";
char _str_3[18] = "myvector[2] == 60";
char _str_4[18] = "myvector[3] == 70";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[19] = "myvector contains:";
char _str_6[2] = " ";
char _str_7[26] = "vector::_M_default_append";
char _str_8[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_9[19] = "__n < this->size()";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0: ;
  int __retval1;
  int myints2[7];
  struct std__vector_int__std__allocator_int__ myvector3;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it4;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp05;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp16;
  int c7 = 0;
  __retval1 = c7;
  // array copy
  __builtin_memcpy(myints2, __const_main_myints, (unsigned long)7 * sizeof(__const_main_myints[0]));
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&myvector3, sizeof(myvector3));
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it4, sizeof(it4));
    unsigned long c8 = 7;
    // externalized std:: op: std::vector<int, std::allocator<int> >::resize(unsigned long)
    __VERIFIER_nondet_memory(&myvector3, sizeof(myvector3));
    int* cast9 = (int*)&(myints2);
    int* cast10 = (int*)&(myints2);
    int c11 = 3;
    int* ptr12 = &(cast10)[c11];
    int* cast13 = (int*)&(myints2);
    int c14 = 7;
    int* ptr15 = &(cast13)[c14];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std16;
    __VERIFIER_nondet_memory(&std16, sizeof(std16));
    agg_tmp05 = std16;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t17 = agg_tmp05;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std18;
    __VERIFIER_nondet_memory(&std18, sizeof(std18));
    agg_tmp16 = std18;
    unsigned long c19 = 0;
    int* std20;
    __VERIFIER_nondet_memory(&std20, sizeof(std20));
    int t21 = *std20;
    int c22 = 40;
    _Bool c23 = ((t21 == c22)) ? 1 : 0;
    if (c23) {
    } else {
      char* cast24 = (char*)&(_str);
      char* c25 = (char*)_str_1;
      unsigned int c26 = 24;
      char* cast27 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast24, c25, c26, cast27);
    }
    unsigned long c28 = 1;
    int* std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    int t30 = *std29;
    int c31 = 50;
    _Bool c32 = ((t30 == c31)) ? 1 : 0;
    if (c32) {
    } else {
      char* cast33 = (char*)&(_str_2);
      char* c34 = (char*)_str_1;
      unsigned int c35 = 25;
      char* cast36 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast33, c34, c35, cast36);
    }
    unsigned long c37 = 2;
    int* std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    int t39 = *std38;
    int c40 = 60;
    _Bool c41 = ((t39 == c40)) ? 1 : 0;
    if (c41) {
    } else {
      char* cast42 = (char*)&(_str_3);
      char* c43 = (char*)_str_1;
      unsigned int c44 = 26;
      char* cast45 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast42, c43, c44, cast45);
    }
    unsigned long c46 = 3;
    int* std47;
    __VERIFIER_nondet_memory(&std47, sizeof(std47));
    int t48 = *std47;
    int c49 = 70;
    _Bool c50 = ((t48 == c49)) ? 1 : 0;
    if (c50) {
    } else {
      char* cast51 = (char*)&(_str_4);
      char* c52 = (char*)_str_1;
      unsigned int c53 = 27;
      char* cast54 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast51, c52, c53, cast54);
    }
    char* cast55 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* std56;
    __VERIFIER_nondet_memory(&std56, sizeof(std56));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp057;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp158;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std59;
      __VERIFIER_nondet_memory(&std59, sizeof(std59));
      ref_tmp057 = std59;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std60;
      __VERIFIER_nondet_memory(&std60, sizeof(std60));
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std62;
        __VERIFIER_nondet_memory(&std62, sizeof(std62));
        ref_tmp158 = std62;
        _Bool std63;
        __VERIFIER_nondet_memory(&std63, sizeof(std63));
        _Bool u64 = !std63;
        if (!u64) break;
        char* cast65 = (char*)&(_str_6);
        struct std__basic_ostream_char__std__char_traits_char__* std66;
        __VERIFIER_nondet_memory(&std66, sizeof(std66));
        int* std67;
        __VERIFIER_nondet_memory(&std67, sizeof(std67));
        int t68 = *std67;
        struct std__basic_ostream_char__std__char_traits_char__* std69;
        __VERIFIER_nondet_memory(&std69, sizeof(std69));
      for_step61: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std70;
        __VERIFIER_nondet_memory(&std70, sizeof(std70));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std71;
    __VERIFIER_nondet_memory(&std71, sizeof(std71));
    int c72 = 0;
    __retval1 = c72;
    int t73 = __retval1;
    int ret_val74 = t73;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector3, sizeof(myvector3));
    }
    return ret_val74;
  int t75 = __retval1;
  return t75;
}

