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
char _str[23] = "myvector.front() == 62";
char _str_1[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/vector41/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[25] = "myvector.front() is now ";
char _str_3[26] = "vector::_M_realloc_append";
char _str_4[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_5[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE5frontEv[78] = "reference std::vector<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__vector_int__std__allocator_int__ myvector2;
  int ref_tmp03;
  int ref_tmp14;
  int c5 = 0;
  __retval1 = c5;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    int c6 = 78;
    ref_tmp03 = c6;
    // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    int c7 = 16;
    ref_tmp14 = c7;
    // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
    int* std8;
    __VERIFIER_nondet_memory(&std8, sizeof(std8));
    int t9 = *std8;
    int* std10;
    __VERIFIER_nondet_memory(&std10, sizeof(std10));
    int t11 = *std10;
    int b12 = t11 - t9;
    *std10 = b12;
    int* std13;
    __VERIFIER_nondet_memory(&std13, sizeof(std13));
    int t14 = *std13;
    int c15 = 62;
    _Bool c16 = ((t14 == c15)) ? 1 : 0;
    if (c16) {
    } else {
      char* cast17 = (char*)&(_str);
      char* c18 = _str_1;
      unsigned int c19 = 25;
      char* cast20 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast17, c18, c19, cast20);
    }
    char* cast21 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std22;
    __VERIFIER_nondet_memory(&std22, sizeof(std22));
    int* std23;
    __VERIFIER_nondet_memory(&std23, sizeof(std23));
    int t24 = *std23;
    struct std__basic_ostream_char__std__char_traits_char__* std25;
    __VERIFIER_nondet_memory(&std25, sizeof(std25));
    struct std__basic_ostream_char__std__char_traits_char__* std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    int c27 = 0;
    __retval1 = c27;
    int t28 = __retval1;
    int ret_val29 = t28;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector2, sizeof(myvector2));
    }
    return ret_val29;
  int t30 = __retval1;
  return t30;
}

