extern void abort(void);
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
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__less_int_ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };
struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__ { struct std__vector_int__std__allocator_int__ c; unsigned char __field1[8]; } __attribute__((packed));

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[24] = "Popping out elements...";
char _str_1[19] = "mypq.size() != i--";
char _str_2[125] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/priority_queue/priority_queue_pop_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[2] = " ";
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
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0: ;
  int __retval1;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__ mypq2;
  int i3;
  int ref_tmp04;
  int ref_tmp15;
  int ref_tmp26;
  int ref_tmp37;
  int c8 = 0;
  __retval1 = c8;
  // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, std::less<int> >::priority_queue<std::vector<int, std::allocator<int> >, void>()
  __VERIFIER_nondet_memory(&mypq2, sizeof(mypq2));
    int c9 = 4;
    i3 = c9;
    int c10 = 30;
    ref_tmp04 = c10;
    // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, std::less<int> >::push(int&&)
    __VERIFIER_nondet_memory(&mypq2, sizeof(mypq2));
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    int c11 = 100;
    ref_tmp15 = c11;
    // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, std::less<int> >::push(int&&)
    __VERIFIER_nondet_memory(&mypq2, sizeof(mypq2));
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    int c12 = 25;
    ref_tmp26 = c12;
    // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, std::less<int> >::push(int&&)
    __VERIFIER_nondet_memory(&mypq2, sizeof(mypq2));
    __VERIFIER_nondet_memory(&ref_tmp26, sizeof(ref_tmp26));
    int c13 = 40;
    ref_tmp37 = c13;
    // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, std::less<int> >::push(int&&)
    __VERIFIER_nondet_memory(&mypq2, sizeof(mypq2));
    __VERIFIER_nondet_memory(&ref_tmp37, sizeof(ref_tmp37));
    char* cast14 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std15;
    __VERIFIER_nondet_memory(&std15, sizeof(std15));
      while (1) {
        _Bool std16;
        __VERIFIER_nondet_memory(&std16, sizeof(std16));
        _Bool u17 = !std16;
        if (!u17) break;
          unsigned long std18 = __VERIFIER_nondet_unsigned_long();
          int t19 = i3;
          int u20 = t19 - 1;
          i3 = u20;
          unsigned long cast21 = (unsigned long)t19;
          _Bool c22 = ((std18 != cast21)) ? 1 : 0;
          if (c22) {
          } else {
            char* cast23 = (char*)&(_str_1);
            char* c24 = (char*)_str_2;
            unsigned int c25 = 26;
            char* cast26 = (char*)&(__PRETTY_FUNCTION___main);
            reach_error();
            __assert_fail(cast23, c24, c25, cast26);
          }
          char* cast27 = (char*)&(_str_3);
          struct std__basic_ostream_char__std__char_traits_char__* std28;
          __VERIFIER_nondet_memory(&std28, sizeof(std28));
          int* std29;
          __VERIFIER_nondet_memory(&std29, sizeof(std29));
          int t30 = *std29;
          struct std__basic_ostream_char__std__char_traits_char__* std31;
          __VERIFIER_nondet_memory(&std31, sizeof(std31));
          // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, std::less<int> >::pop()
          __VERIFIER_nondet_memory(&mypq2, sizeof(mypq2));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    int c33 = 0;
    __retval1 = c33;
    int t34 = __retval1;
    int ret_val35 = t34;
    {
      // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, std::less<int> >::~priority_queue()
      __VERIFIER_nondet_memory(&mypq2, sizeof(mypq2));
    }
    return ret_val35;
  int t36 = __retval1;
  return t36;
}

