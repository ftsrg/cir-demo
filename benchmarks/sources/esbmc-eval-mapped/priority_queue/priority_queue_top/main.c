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
char _str[17] = "mypq.top() == 20";
char _str_1[121] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/priority_queue/priority_queue_top/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[19] = "mypq.top() is now ";
char _str_3[26] = "vector::_M_realloc_append";
char _str_4[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_5[15] = "!this->empty()";
char _str_6[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_queue.h";
char __PRETTY_FUNCTION____ZNKSt14priority_queueIiSt6vectorIiSaIiEESt4lessIiEE3topEv[123] = "const_reference std::priority_queue<int>::top() const [_Tp = int, _Sequence = std::vector<int>, _Compare = std::less<int>]";
char __PRETTY_FUNCTION____ZNKSt6vectorIiSaIiEE5frontEv[90] = "const_reference std::vector<int>::front() const [_Tp = int, _Alloc = std::allocator<int>]";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__ mypq2;
  int ref_tmp03;
  int ref_tmp14;
  int ref_tmp25;
  int c6 = 0;
  __retval1 = c6;
  // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, std::less<int> >::priority_queue<std::vector<int, std::allocator<int> >, void>()
  __VERIFIER_nondet_memory(&mypq2, sizeof(mypq2));
    int c7 = 10;
    ref_tmp03 = c7;
    // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, std::less<int> >::push(int&&)
    __VERIFIER_nondet_memory(&mypq2, sizeof(mypq2));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    int c8 = 20;
    ref_tmp14 = c8;
    // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, std::less<int> >::push(int&&)
    __VERIFIER_nondet_memory(&mypq2, sizeof(mypq2));
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
    int c9 = 15;
    ref_tmp25 = c9;
    // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, std::less<int> >::push(int&&)
    __VERIFIER_nondet_memory(&mypq2, sizeof(mypq2));
    __VERIFIER_nondet_memory(&ref_tmp25, sizeof(ref_tmp25));
    int* std10;
    __VERIFIER_nondet_memory(&std10, sizeof(std10));
    int t11 = *std10;
    int c12 = 20;
    _Bool c13 = ((t11 == c12)) ? 1 : 0;
    if (c13) {
    } else {
      char* cast14 = (char*)&(_str);
      char* c15 = _str_1;
      unsigned int c16 = 21;
      char* cast17 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast14, c15, c16, cast17);
    }
    char* cast18 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std19;
    __VERIFIER_nondet_memory(&std19, sizeof(std19));
    int* std20;
    __VERIFIER_nondet_memory(&std20, sizeof(std20));
    int t21 = *std20;
    struct std__basic_ostream_char__std__char_traits_char__* std22;
    __VERIFIER_nondet_memory(&std22, sizeof(std22));
    struct std__basic_ostream_char__std__char_traits_char__* std23;
    __VERIFIER_nondet_memory(&std23, sizeof(std23));
    int c24 = 0;
    __retval1 = c24;
    int t25 = __retval1;
    int ret_val26 = t25;
    {
      // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, std::less<int> >::~priority_queue()
      __VERIFIER_nondet_memory(&mypq2, sizeof(mypq2));
    }
    return ret_val26;
  int t27 = __retval1;
  return t27;
}

