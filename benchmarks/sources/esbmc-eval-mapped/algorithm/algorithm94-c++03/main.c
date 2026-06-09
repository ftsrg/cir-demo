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
char _str[17] = "myvector[0] != 4";
char _str_1[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm94-c++03/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[19] = "myvector contains:";
char _str_3[2] = " ";
char _str_4[26] = "vector::_M_realloc_append";
char _str_5[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[19] = "__n < this->size()";
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
        int c14 = 6;
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
    _Bool c31 = ((t29 != c30)) ? 1 : 0;
    if (c31) {
    } else {
      char* cast32 = (char*)&(_str);
      char* c33 = _str_1;
      unsigned int c34 = 24;
      char* cast35 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast32, c33, c34, cast35);
    }
    char* cast36 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std37;
    __VERIFIER_nondet_memory(&std37, sizeof(std37));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp138;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp239;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std40;
      __VERIFIER_nondet_memory(&std40, sizeof(std40));
      ref_tmp138 = std40;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std41;
      __VERIFIER_nondet_memory(&std41, sizeof(std41));
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std43;
        __VERIFIER_nondet_memory(&std43, sizeof(std43));
        ref_tmp239 = std43;
        _Bool std44;
        __VERIFIER_nondet_memory(&std44, sizeof(std44));
        _Bool u45 = !std44;
        if (!u45) break;
        char* cast46 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std47;
        __VERIFIER_nondet_memory(&std47, sizeof(std47));
        int* std48;
        __VERIFIER_nondet_memory(&std48, sizeof(std48));
        int t49 = *std48;
        struct std__basic_ostream_char__std__char_traits_char__* std50;
        __VERIFIER_nondet_memory(&std50, sizeof(std50));
      for_step42: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std51;
        __VERIFIER_nondet_memory(&std51, sizeof(std51));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std52;
    __VERIFIER_nondet_memory(&std52, sizeof(std52));
    int c53 = 0;
    __retval1 = c53;
    int t54 = __retval1;
    int ret_val55 = t54;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    }
    return ret_val55;
  int t56 = __retval1;
  return t56;
}

