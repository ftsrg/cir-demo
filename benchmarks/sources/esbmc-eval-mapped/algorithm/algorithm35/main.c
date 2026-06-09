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
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_;
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[17] = "myvector[0] == 4";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm35/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[17] = "myvector[1] == 5";
char _str_3[17] = "myvector[2] == 6";
char _str_4[17] = "myvector[3] == 7";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[19] = "myvector contains:";
char _str_6[2] = " ";
char _str_7[26] = "vector::_M_realloc_append";
char _str_8[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_9[19] = "__n < this->size()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__vector_int__std__allocator_int__ myvector2;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it3;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp04;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp15;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp06;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp27;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp38;
  int c9 = 0;
  __retval1 = c9;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
      int i10;
      int c11 = 1;
      i10 = c11;
      while (1) {
        int t13 = i10;
        int c14 = 10;
        _Bool c15 = ((t13 < c14)) ? 1 : 0;
        if (!c15) break;
        // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int const&)
        __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
        __VERIFIER_nondet_memory(&i10, sizeof(i10));
      for_step12: ;
        int t16 = i10;
        int u17 = t16 + 1;
        i10 = u17;
      }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std18;
    __VERIFIER_nondet_memory(&std18, sizeof(std18));
    agg_tmp04 = std18;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std19;
    __VERIFIER_nondet_memory(&std19, sizeof(std19));
    ref_tmp06 = std19;
    long c20 = 3;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std21;
    __VERIFIER_nondet_memory(&std21, sizeof(std21));
    agg_tmp15 = std21;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std22;
    __VERIFIER_nondet_memory(&std22, sizeof(std22));
    agg_tmp27 = std22;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t23 = agg_tmp04;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t24 = agg_tmp15;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t25 = agg_tmp27;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    agg_tmp38 = std26;
    unsigned long c27 = 0;
    int* std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    int t29 = *std28;
    int c30 = 4;
    _Bool c31 = ((t29 == c30)) ? 1 : 0;
    if (c31) {
    } else {
      char* cast32 = (char*)&(_str);
      char* c33 = _str_1;
      unsigned int c34 = 24;
      char* cast35 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast32, c33, c34, cast35);
    }
    unsigned long c36 = 1;
    int* std37;
    __VERIFIER_nondet_memory(&std37, sizeof(std37));
    int t38 = *std37;
    int c39 = 5;
    _Bool c40 = ((t38 == c39)) ? 1 : 0;
    if (c40) {
    } else {
      char* cast41 = (char*)&(_str_2);
      char* c42 = _str_1;
      unsigned int c43 = 25;
      char* cast44 = (char*)&(__PRETTY_FUNCTION___main);
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
      char* c51 = _str_1;
      unsigned int c52 = 26;
      char* cast53 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast50, c51, c52, cast53);
    }
    unsigned long c54 = 3;
    int* std55;
    __VERIFIER_nondet_memory(&std55, sizeof(std55));
    int t56 = *std55;
    int c57 = 7;
    _Bool c58 = ((t56 == c57)) ? 1 : 0;
    if (c58) {
    } else {
      char* cast59 = (char*)&(_str_4);
      char* c60 = _str_1;
      unsigned int c61 = 27;
      char* cast62 = (char*)&(__PRETTY_FUNCTION___main);
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
    __retval1 = c80;
    int t81 = __retval1;
    int ret_val82 = t81;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    }
    return ret_val82;
  int t83 = __retval1;
  return t83;
}

