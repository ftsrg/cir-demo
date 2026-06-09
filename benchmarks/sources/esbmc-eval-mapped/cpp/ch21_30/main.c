extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Deque_iterator_int__int____int___ { int* _M_cur; int* _M_first; int* _M_last; int** _M_node; };
struct std____new_allocator_int_;
struct std____new_allocator_int___;
struct std__allocator_int_;
struct std__allocator_int___ { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl_data { int** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_int__int____int___ _M_start; struct std___Deque_iterator_int__int____int___ _M_finish; };
struct std__ios_base;
struct std___Deque_base_int__std__allocator_int_____Deque_impl { struct std___Deque_base_int__std__allocator_int_____Deque_impl_data __field0; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_istream_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std___Deque_base_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int_____Deque_impl _M_impl; };
struct std__deque_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int__ __field0; };
struct std__queue_int__std__deque_int__std__allocator_int___ { struct std__deque_int__std__allocator_int__ c; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[46] = "Please enter some integers (enter 0 to end):\n";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[19] = "myqueue contains: ";
char _str_2[2] = " ";
char _str_3[48] = "cannot create std::deque larger than max_size()";
char _str_4[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_queue.h";
char __PRETTY_FUNCTION____ZNSt5queueIiSt5dequeIiSaIiEEE5frontEv[76] = "reference std::queue<int>::front() [_Tp = int, _Sequence = std::deque<int>]";
char _str_5[15] = "!this->empty()";
char _str_6[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE5frontEv[77] = "reference std::deque<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
char __PRETTY_FUNCTION____ZNSt5queueIiSt5dequeIiSaIiEEE3popEv[69] = "void std::queue<int>::pop() [_Tp = int, _Sequence = std::deque<int>]";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE9pop_frontEv[76] = "void std::deque<int>::pop_front() [_Tp = int, _Alloc = std::allocator<int>]";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__queue_int__std__deque_int__std__allocator_int___ myqueue2;
  int myint3;
  int c4 = 0;
  __retval1 = c4;
  // externalized std:: op: std::queue<int, std::deque<int, std::allocator<int> > >::queue<std::deque<int, std::allocator<int> >, void>()
  __VERIFIER_nondet_memory(&myqueue2, sizeof(myqueue2));
    char* cast5 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std6;
    __VERIFIER_nondet_memory(&std6, sizeof(std6));
      do {
          struct std__basic_istream_char__std__char_traits_char__* std7;
          __VERIFIER_nondet_memory(&std7, sizeof(std7));
          // externalized std:: op: std::queue<int, std::deque<int, std::allocator<int> > >::push(int const&)
          __VERIFIER_nondet_memory(&myqueue2, sizeof(myqueue2));
          __VERIFIER_nondet_memory(&myint3, sizeof(myint3));
        int t8 = myint3;
        _Bool cast9 = (_Bool)t8;
        if (!cast9) break;
      } while (1);
    char* cast10 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std11;
    __VERIFIER_nondet_memory(&std11, sizeof(std11));
      while (1) {
        _Bool std12;
        __VERIFIER_nondet_memory(&std12, sizeof(std12));
        _Bool u13 = !std12;
        if (!u13) break;
          char* cast14 = (char*)&(_str_2);
          struct std__basic_ostream_char__std__char_traits_char__* std15;
          __VERIFIER_nondet_memory(&std15, sizeof(std15));
          int* std16;
          __VERIFIER_nondet_memory(&std16, sizeof(std16));
          int t17 = *std16;
          struct std__basic_ostream_char__std__char_traits_char__* std18;
          __VERIFIER_nondet_memory(&std18, sizeof(std18));
          // externalized std:: op: std::queue<int, std::deque<int, std::allocator<int> > >::pop()
          __VERIFIER_nondet_memory(&myqueue2, sizeof(myqueue2));
      }
    int c19 = 0;
    __retval1 = c19;
    int t20 = __retval1;
    int ret_val21 = t20;
    {
      // externalized std:: op: std::queue<int, std::deque<int, std::allocator<int> > >::~queue()
      __VERIFIER_nondet_memory(&myqueue2, sizeof(myqueue2));
    }
    return ret_val21;
  int t22 = __retval1;
  return t22;
}

