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

int __const_main_arrae[4] = {100, 40, 30, 25};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[24] = "Popping out elements...";
char _str_1[2] = " ";
char _str_2[25] = "mypq.top() != arrae[i++]";
char _str_3[126] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/priority_queue/priority_queue_push_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[26] = "vector::_M_realloc_append";
char _str_5[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[15] = "!this->empty()";
char _str_7[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_queue.h";
char __PRETTY_FUNCTION____ZNKSt14priority_queueIiSt6vectorIiSaIiEESt4lessIiEE3topEv[123] = "const_reference std::priority_queue<int>::top() const [_Tp = int, _Sequence = std::vector<int>, _Compare = std::less<int>]";
char __PRETTY_FUNCTION____ZNKSt6vectorIiSaIiEE5frontEv[90] = "const_reference std::vector<int>::front() const [_Tp = int, _Alloc = std::allocator<int>]";
char __PRETTY_FUNCTION____ZNSt14priority_queueIiSt6vectorIiSaIiEESt4lessIiEE3popEv[106] = "void std::priority_queue<int>::pop() [_Tp = int, _Sequence = std::vector<int>, _Compare = std::less<int>]";
char _str_8[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_heap.h";
char __PRETTY_FUNCTION____ZSt8pop_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEESt4lessIiEEvT_S9_T0_[182] = "void std::pop_heap(_RandomAccessIterator, _RandomAccessIterator, _Compare) [_RandomAccessIterator = __gnu_cxx::__normal_iterator<int *, std::vector<int>>, _Compare = std::less<int>]";
char _str_9[18] = "__first != __last";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE8pop_backEv[76] = "void std::vector<int>::pop_back() [_Tp = int, _Alloc = std::allocator<int>]";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__ mypq2;
  int arrae3[4];
  int i4;
  int ref_tmp05;
  int ref_tmp16;
  int ref_tmp27;
  int ref_tmp38;
  int c9 = 0;
  __retval1 = c9;
  // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, std::less<int> >::priority_queue<std::vector<int, std::allocator<int> >, void>()
  __VERIFIER_nondet_memory(&mypq2, sizeof(mypq2));
    // array copy
    __builtin_memcpy(arrae3, __const_main_arrae, (unsigned long)4 * sizeof(__const_main_arrae[0]));
    int c10 = 0;
    i4 = c10;
    int c11 = 30;
    ref_tmp05 = c11;
    // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, std::less<int> >::push(int&&)
    __VERIFIER_nondet_memory(&mypq2, sizeof(mypq2));
    __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
    int c12 = 100;
    ref_tmp16 = c12;
    // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, std::less<int> >::push(int&&)
    __VERIFIER_nondet_memory(&mypq2, sizeof(mypq2));
    __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
    int c13 = 25;
    ref_tmp27 = c13;
    // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, std::less<int> >::push(int&&)
    __VERIFIER_nondet_memory(&mypq2, sizeof(mypq2));
    __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
    int c14 = 40;
    ref_tmp38 = c14;
    // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, std::less<int> >::push(int&&)
    __VERIFIER_nondet_memory(&mypq2, sizeof(mypq2));
    __VERIFIER_nondet_memory(&ref_tmp38, sizeof(ref_tmp38));
    char* cast15 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std16;
    __VERIFIER_nondet_memory(&std16, sizeof(std16));
      while (1) {
        _Bool std17;
        __VERIFIER_nondet_memory(&std17, sizeof(std17));
        _Bool u18 = !std17;
        if (!u18) break;
          char* cast19 = (char*)&(_str_1);
          struct std__basic_ostream_char__std__char_traits_char__* std20;
          __VERIFIER_nondet_memory(&std20, sizeof(std20));
          int* std21;
          __VERIFIER_nondet_memory(&std21, sizeof(std21));
          int t22 = *std21;
          struct std__basic_ostream_char__std__char_traits_char__* std23;
          __VERIFIER_nondet_memory(&std23, sizeof(std23));
          int* std24;
          __VERIFIER_nondet_memory(&std24, sizeof(std24));
          int t25 = *std24;
          int t26 = i4;
          int u27 = t26 + 1;
          i4 = u27;
          long cast28 = (long)t26;
          int t29 = arrae3[cast28];
          _Bool c30 = ((t25 != t29)) ? 1 : 0;
          if (c30) {
          } else {
            char* cast31 = (char*)&(_str_2);
            char* c32 = _str_3;
            unsigned int c33 = 28;
            char* cast34 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast31, c32, c33, cast34);
          }
          // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, std::less<int> >::pop()
          __VERIFIER_nondet_memory(&mypq2, sizeof(mypq2));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std35;
    __VERIFIER_nondet_memory(&std35, sizeof(std35));
    int c36 = 0;
    __retval1 = c36;
    int t37 = __retval1;
    int ret_val38 = t37;
    {
      // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, std::less<int> >::~priority_queue()
      __VERIFIER_nondet_memory(&mypq2, sizeof(mypq2));
    }
    return ret_val38;
  int t39 = __retval1;
  return t39;
}

