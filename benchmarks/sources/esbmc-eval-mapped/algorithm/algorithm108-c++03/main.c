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
struct __gnu_cxx____ops___Iter_less_iter { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_less_val { unsigned char __field0; };
struct __gnu_cxx____ops___Val_less_iter { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_second[3] = {50, 10, 30};
int __const_main_first[3] = {5, 20, 25};
struct __gnu_cxx____ops___Iter_less_val __const__ZSt13__adjust_heapIPiliN9__gnu_cxx5__ops15_Iter_less_iterEEvT_T0_S5_T1_T2____cmp;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[10] = "v[0] == 5";
char _str_1[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm108-c++03/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[11] = "v[5] != 50";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[31] = "The resulting vector contains:";
char _str_4[2] = " ";
char _str_5[49] = "cannot create std::vector larger than max_size()";
char _str_6[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_7[19] = "__n < this->size()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int first2[3];
  int second3[3];
  struct std__vector_int__std__allocator_int__ v4;
  struct std__allocator_int_ ref_tmp05;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it6;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp07;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp18;
  int c9 = 0;
  __retval1 = c9;
  // array copy
  __builtin_memcpy(first2, __const_main_first, (unsigned long)3 * sizeof(__const_main_first[0]));
  // array copy
  __builtin_memcpy(second3, __const_main_second, (unsigned long)3 * sizeof(__const_main_second[0]));
  unsigned long c10 = 6;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&v4, sizeof(v4));
    __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
  }
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it6, sizeof(it6));
    int* cast11 = (int*)&(first2);
    int* cast12 = (int*)&(first2);
    int c13 = 3;
    int* ptr14 = &(cast12)[c13];
    // externalized std:: op: void std::sort<int*>(int*, int*)
    __VERIFIER_nondet_memory(cast11, sizeof(*cast11));
    __VERIFIER_nondet_memory(ptr14, sizeof(*ptr14));
    int* cast15 = (int*)&(second3);
    int* cast16 = (int*)&(second3);
    int c17 = 3;
    int* ptr18 = &(cast16)[c17];
    // externalized std:: op: void std::sort<int*>(int*, int*)
    __VERIFIER_nondet_memory(cast15, sizeof(*cast15));
    __VERIFIER_nondet_memory(ptr18, sizeof(*ptr18));
    int* cast19 = (int*)&(first2);
    int* cast20 = (int*)&(first2);
    int c21 = 3;
    int* ptr22 = &(cast20)[c21];
    int* cast23 = (int*)&(second3);
    int* cast24 = (int*)&(second3);
    int c25 = 3;
    int* ptr26 = &(cast24)[c25];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    agg_tmp07 = std27;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t28 = agg_tmp07;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    agg_tmp18 = std29;
    unsigned long c30 = 0;
    int* std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    int t32 = *std31;
    int c33 = 5;
    _Bool c34 = ((t32 == c33)) ? 1 : 0;
    if (c34) {
    } else {
      char* cast35 = (char*)&(_str);
      char* c36 = _str_1;
      unsigned int c37 = 24;
      char* cast38 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast35, c36, c37, cast38);
    }
    unsigned long c39 = 5;
    int* std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    int t41 = *std40;
    int c42 = 50;
    _Bool c43 = ((t41 != c42)) ? 1 : 0;
    if (c43) {
    } else {
      char* cast44 = (char*)&(_str_2);
      char* c45 = _str_1;
      unsigned int c46 = 25;
      char* cast47 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast44, c45, c46, cast47);
    }
    char* cast48 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std49;
    __VERIFIER_nondet_memory(&std49, sizeof(std49));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp150;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp251;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std52;
      __VERIFIER_nondet_memory(&std52, sizeof(std52));
      ref_tmp150 = std52;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std53;
      __VERIFIER_nondet_memory(&std53, sizeof(std53));
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std55;
        __VERIFIER_nondet_memory(&std55, sizeof(std55));
        ref_tmp251 = std55;
        _Bool std56;
        __VERIFIER_nondet_memory(&std56, sizeof(std56));
        _Bool u57 = !std56;
        if (!u57) break;
        char* cast58 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* std59;
        __VERIFIER_nondet_memory(&std59, sizeof(std59));
        int* std60;
        __VERIFIER_nondet_memory(&std60, sizeof(std60));
        int t61 = *std60;
        struct std__basic_ostream_char__std__char_traits_char__* std62;
        __VERIFIER_nondet_memory(&std62, sizeof(std62));
      for_step54: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std63;
        __VERIFIER_nondet_memory(&std63, sizeof(std63));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std64;
    __VERIFIER_nondet_memory(&std64, sizeof(std64));
    int c65 = 0;
    __retval1 = c65;
    int t66 = __retval1;
    int ret_val67 = t66;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&v4, sizeof(v4));
    }
    return ret_val67;
  int t68 = __retval1;
  return t68;
}

