extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct myclass { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_;
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[2] = " ";
struct myclass myobject;
char _str_1[19] = "myvector contains:";
char _str_2[20] = "\nmyvector contains:";
char _str_3[26] = "vector::_M_realloc_append";
char _str_4[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_5[15] = "!this->empty()";
void myfunction(int p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z10myfunctioni
void myfunction(int v0) {
bb1:
  int i2;
  i2 = v0;
  char* cast3 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std4;
  __VERIFIER_nondet_memory(&std4, sizeof(std4));
  int t5 = i2;
  struct std__basic_ostream_char__std__char_traits_char__* std6;
  __VERIFIER_nondet_memory(&std6, sizeof(std6));
  return;
}

// function: main
int main() {
bb7:
  int __retval8;
  struct std__vector_int__std__allocator_int__ myvector9;
  int ref_tmp010;
  int ref_tmp111;
  int ref_tmp212;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp013;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp114;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp215;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp316;
  struct myclass agg_tmp417;
  struct myclass agg_tmp518;
  int c19 = 0;
  __retval8 = c19;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&myvector9, sizeof(myvector9));
    int c20 = 10;
    ref_tmp010 = c20;
    // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&myvector9, sizeof(myvector9));
    __VERIFIER_nondet_memory(&ref_tmp010, sizeof(ref_tmp010));
    int c21 = 20;
    ref_tmp111 = c21;
    // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&myvector9, sizeof(myvector9));
    __VERIFIER_nondet_memory(&ref_tmp111, sizeof(ref_tmp111));
    int c22 = 30;
    ref_tmp212 = c22;
    // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&myvector9, sizeof(myvector9));
    __VERIFIER_nondet_memory(&ref_tmp212, sizeof(ref_tmp212));
    char* cast23 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std24;
    __VERIFIER_nondet_memory(&std24, sizeof(std24));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std25;
    __VERIFIER_nondet_memory(&std25, sizeof(std25));
    agg_tmp013 = std25;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    agg_tmp114 = std26;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t27 = agg_tmp013;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t28 = agg_tmp114;
    void* std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    char* cast30 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    agg_tmp215 = std32;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    agg_tmp316 = std33;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t34 = agg_tmp215;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t35 = agg_tmp316;
    struct myclass t36 = agg_tmp417;
    struct myclass std37;
    __VERIFIER_nondet_memory(&std37, sizeof(std37));
    agg_tmp518 = std37;
    struct std__basic_ostream_char__std__char_traits_char__* std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    int c39 = 0;
    __retval8 = c39;
    int t40 = __retval8;
    int ret_val41 = t40;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector9, sizeof(myvector9));
    }
    return ret_val41;
  int t42 = __retval8;
  return t42;
}

