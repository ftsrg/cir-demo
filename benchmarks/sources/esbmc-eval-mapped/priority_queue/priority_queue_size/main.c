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
struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__ { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_comp_val_std__less_int__ { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_;
struct std__less_int_ { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };
struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__ { struct std__vector_int__std__allocator_int__ c; unsigned char __field1[8]; } __attribute__((packed));

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[10] = "0. size: ";
char _str_1[19] = "myints.size() == 0";
char _str_2[122] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/priority_queue/priority_queue_size/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[10] = "1. size: ";
char _str_4[19] = "myints.size() == 5";
char _str_5[10] = "2. size: ";
char _str_6[19] = "myints.size() == 4";
char _str_7[26] = "vector::_M_realloc_append";
char _str_8[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_queue.h";
char __PRETTY_FUNCTION____ZNSt14priority_queueIiSt6vectorIiSaIiEESt4lessIiEE3popEv[106] = "void std::priority_queue<int>::pop() [_Tp = int, _Sequence = std::vector<int>, _Compare = std::less<int>]";
char _str_9[15] = "!this->empty()";
char _str_10[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_heap.h";
char __PRETTY_FUNCTION____ZSt8pop_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEESt4lessIiEEvT_S9_T0_[182] = "void std::pop_heap(_RandomAccessIterator, _RandomAccessIterator, _Compare) [_RandomAccessIterator = __gnu_cxx::__normal_iterator<int *, std::vector<int>>, _Compare = std::less<int>]";
char _str_11[18] = "__first != __last";
char _str_12[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE8pop_backEv[76] = "void std::vector<int>::pop_back() [_Tp = int, _Alloc = std::allocator<int>]";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__ myints2;
  int c3 = 0;
  __retval1 = c3;
  // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, std::less<int> >::priority_queue<std::vector<int, std::allocator<int> >, void>()
  __VERIFIER_nondet_memory(&myints2, sizeof(myints2));
    char* cast4 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std5;
    __VERIFIER_nondet_memory(&std5, sizeof(std5));
    unsigned long std6 = __VERIFIER_nondet_unsigned_long();
    int cast7 = (int)std6;
    struct std__basic_ostream_char__std__char_traits_char__* std8;
    __VERIFIER_nondet_memory(&std8, sizeof(std8));
    struct std__basic_ostream_char__std__char_traits_char__* std9;
    __VERIFIER_nondet_memory(&std9, sizeof(std9));
    unsigned long std10 = __VERIFIER_nondet_unsigned_long();
    unsigned long c11 = 0;
    _Bool c12 = ((std10 == c11)) ? 1 : 0;
    if (c12) {
    } else {
      char* cast13 = (char*)&(_str_1);
      char* c14 = _str_2;
      unsigned int c15 = 18;
      char* cast16 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast13, c14, c15, cast16);
    }
      int i17;
      int c18 = 0;
      i17 = c18;
      while (1) {
        int t20 = i17;
        int c21 = 5;
        _Bool c22 = ((t20 < c21)) ? 1 : 0;
        if (!c22) break;
        // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, std::less<int> >::push(int const&)
        __VERIFIER_nondet_memory(&myints2, sizeof(myints2));
        __VERIFIER_nondet_memory(&i17, sizeof(i17));
      for_step19: ;
        int t23 = i17;
        int u24 = t23 + 1;
        i17 = u24;
      }
    char* cast25 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    unsigned long std27 = __VERIFIER_nondet_unsigned_long();
    int cast28 = (int)std27;
    struct std__basic_ostream_char__std__char_traits_char__* std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    struct std__basic_ostream_char__std__char_traits_char__* std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
    unsigned long std31 = __VERIFIER_nondet_unsigned_long();
    unsigned long c32 = 5;
    _Bool c33 = ((std31 == c32)) ? 1 : 0;
    if (c33) {
    } else {
      char* cast34 = (char*)&(_str_4);
      char* c35 = _str_2;
      unsigned int c36 = 21;
      char* cast37 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast34, c35, c36, cast37);
    }
    // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, std::less<int> >::pop()
    __VERIFIER_nondet_memory(&myints2, sizeof(myints2));
    char* cast38 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* std39;
    __VERIFIER_nondet_memory(&std39, sizeof(std39));
    unsigned long std40 = __VERIFIER_nondet_unsigned_long();
    int cast41 = (int)std40;
    struct std__basic_ostream_char__std__char_traits_char__* std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    struct std__basic_ostream_char__std__char_traits_char__* std43;
    __VERIFIER_nondet_memory(&std43, sizeof(std43));
    unsigned long std44 = __VERIFIER_nondet_unsigned_long();
    unsigned long c45 = 4;
    _Bool c46 = ((std44 == c45)) ? 1 : 0;
    if (c46) {
    } else {
      char* cast47 = (char*)&(_str_6);
      char* c48 = _str_2;
      unsigned int c49 = 24;
      char* cast50 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast47, c48, c49, cast50);
    }
    int c51 = 0;
    __retval1 = c51;
    int t52 = __retval1;
    int ret_val53 = t52;
    {
      // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, std::less<int> >::~priority_queue()
      __VERIFIER_nondet_memory(&myints2, sizeof(myints2));
    }
    return ret_val53;
  int t54 = __retval1;
  return t54;
}

