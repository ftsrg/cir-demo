extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __gnu_cxx____ops___Iter_equal_to_iter { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_equals_iter_int___ { int* _M_it1; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_;
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_match1[2] = {20, 30};
char _str[10] = "*it != 20";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm74/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[26] = "vector::_M_realloc_append";
char _str_3[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_4[15] = "!this->empty()";
_Bool mypredicate(int p0, int p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z11mypredicateii
_Bool mypredicate(int v0, int v1) {
bb2:
  int i3;
  int j4;
  _Bool __retval5;
  i3 = v0;
  j4 = v1;
  int t6 = i3;
  int t7 = j4;
  _Bool c8 = ((t6 == t7)) ? 1 : 0;
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
  int match114[2];
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp115;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp016;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp117;
  int c18 = 0;
  __retval11 = c18;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&myvector12, sizeof(myvector12));
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it13, sizeof(it13));
      int i19;
      int ref_tmp020;
      int c21 = 1;
      i19 = c21;
      while (1) {
        int t23 = i19;
        int c24 = 5;
        _Bool c25 = ((t23 < c24)) ? 1 : 0;
        if (!c25) break;
        int t26 = i19;
        int c27 = 10;
        int b28 = t26 * c27;
        ref_tmp020 = b28;
        // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
        __VERIFIER_nondet_memory(&myvector12, sizeof(myvector12));
        __VERIFIER_nondet_memory(&ref_tmp020, sizeof(ref_tmp020));
      for_step22: ;
        int t29 = i19;
        int u30 = t29 + 1;
        i19 = u30;
      }
    // array copy
    __builtin_memcpy(match114, __const_main_match1, (unsigned long)2 * sizeof(__const_main_match1[0]));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    agg_tmp016 = std31;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    agg_tmp117 = std32;
    int* cast33 = (int*)&(match114);
    int* cast34 = (int*)&(match114);
    int c35 = 2;
    int* ptr36 = &(cast34)[c35];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t37 = agg_tmp016;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t38 = agg_tmp117;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std39;
    __VERIFIER_nondet_memory(&std39, sizeof(std39));
    ref_tmp115 = std39;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    int* std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
    int t42 = *std41;
    int c43 = 20;
    _Bool c44 = ((t42 != c43)) ? 1 : 0;
    if (c44) {
    } else {
      char* cast45 = (char*)&(_str);
      char* c46 = _str_1;
      unsigned int c47 = 31;
      char* cast48 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast45, c46, c47, cast48);
    }
    int c49 = 0;
    __retval11 = c49;
    int t50 = __retval11;
    int ret_val51 = t50;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector12, sizeof(myvector12));
    }
    return ret_val51;
  int t52 = __retval11;
  return t52;
}

