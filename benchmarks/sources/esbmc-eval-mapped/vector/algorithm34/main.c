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
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
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

int __const_main_myints[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[17] = "myvector[i] == k";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm34/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[19] = "myvector contains:";
char _str_3[2] = " ";
char _str_4[26] = "vector::_M_default_append";
char _str_5[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[19] = "__n < this->size()";
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______reverse_copy_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z12reverse_copyIiN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEET0_PT_S9_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______reverse_copy_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* v0, int* v1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v2) {
bb3:
  int* first4;
  int* last5;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ dest6;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval7;
  first4 = v0;
  last5 = v1;
  dest6 = v2;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp08;
    while (1) {
      int* t9 = first4;
      int* t10 = last5;
      _Bool c11 = ((t9 != t10)) ? 1 : 0;
      if (!c11) break;
      int* t12 = last5;
      int c13 = -1;
      int* ptr14 = &(t12)[c13];
      last5 = ptr14;
      int t15 = *ptr14;
      int c16 = 0;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std17;
      __VERIFIER_nondet_memory(&std17, sizeof(std17));
      ref_tmp08 = std17;
      int* std18;
      __VERIFIER_nondet_memory(&std18, sizeof(std18));
      *std18 = t15;
    }
  __retval7 = dest6; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t19 = __retval7;
  return t19;
}

// function: main
int main() {
bb20:
  int __retval21;
  int myints22[9];
  struct std__vector_int__std__allocator_int__ myvector23;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it24;
  int i25;
  int k26;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp027;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp128;
  int c29 = 0;
  __retval21 = c29;
  // array copy
  __builtin_memcpy(myints22, __const_main_myints, (unsigned long)9 * sizeof(__const_main_myints[0]));
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&myvector23, sizeof(myvector23));
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it24, sizeof(it24));
    unsigned long c30 = 9;
    // externalized std:: op: std::vector<int, std::allocator<int> >::resize(unsigned long)
    __VERIFIER_nondet_memory(&myvector23, sizeof(myvector23));
    int* cast31 = (int*)&(myints22);
    int* cast32 = (int*)&(myints22);
    int c33 = 9;
    int* ptr34 = &(cast32)[c33];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std35;
    __VERIFIER_nondet_memory(&std35, sizeof(std35));
    agg_tmp027 = std35;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t36 = agg_tmp027;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r37 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______reverse_copy_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(cast31, ptr34, t36);
    agg_tmp128 = r37;
      int c38 = 0;
      i25 = c38;
      int c39 = 9;
      k26 = c39;
      while (1) {
        int t41 = i25;
        int c42 = 9;
        _Bool c43 = ((t41 < c42)) ? 1 : 0;
        if (!c43) break;
        int t44 = i25;
        unsigned long cast45 = (unsigned long)t44;
        int* std46;
        __VERIFIER_nondet_memory(&std46, sizeof(std46));
        int t47 = *std46;
        int t48 = k26;
        _Bool c49 = ((t47 == t48)) ? 1 : 0;
        if (c49) {
        } else {
          char* cast50 = (char*)&(_str);
          char* c51 = _str_1;
          unsigned int c52 = 37;
          char* cast53 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast50, c51, c52, cast53);
        }
      for_step40: ;
        int t54 = i25;
        int u55 = t54 + 1;
        i25 = u55;
        int t56 = k26;
        int u57 = t56 - 1;
        k26 = u57;
      }
    char* cast58 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std59;
    __VERIFIER_nondet_memory(&std59, sizeof(std59));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp060;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp161;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std62;
      __VERIFIER_nondet_memory(&std62, sizeof(std62));
      ref_tmp060 = std62;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std63;
      __VERIFIER_nondet_memory(&std63, sizeof(std63));
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std65;
        __VERIFIER_nondet_memory(&std65, sizeof(std65));
        ref_tmp161 = std65;
        _Bool std66;
        __VERIFIER_nondet_memory(&std66, sizeof(std66));
        _Bool u67 = !std66;
        if (!u67) break;
        char* cast68 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std69;
        __VERIFIER_nondet_memory(&std69, sizeof(std69));
        int* std70;
        __VERIFIER_nondet_memory(&std70, sizeof(std70));
        int t71 = *std70;
        struct std__basic_ostream_char__std__char_traits_char__* std72;
        __VERIFIER_nondet_memory(&std72, sizeof(std72));
      for_step64: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std73;
        __VERIFIER_nondet_memory(&std73, sizeof(std73));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std74;
    __VERIFIER_nondet_memory(&std74, sizeof(std74));
    int c75 = 0;
    __retval21 = c75;
    int t76 = __retval21;
    int ret_val77 = t76;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector23, sizeof(myvector23));
    }
    return ret_val77;
  int t78 = __retval21;
  return t78;
}

