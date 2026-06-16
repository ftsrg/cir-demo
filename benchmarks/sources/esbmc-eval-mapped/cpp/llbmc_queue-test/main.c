extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Struct definitions (auto-parsed)
struct std___Deque_iterator_int__int____int___ { int* _M_cur; int* _M_first; int* _M_last; int** _M_node; };
struct std____new_allocator_int_;
struct std____new_allocator_int___;
struct std__allocator_int_;
struct std__allocator_int___ { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl_data { int** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_int__int____int___ _M_start; struct std___Deque_iterator_int__int____int___ _M_finish; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl { struct std___Deque_base_int__std__allocator_int_____Deque_impl_data __field0; };
struct std___Deque_base_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int_____Deque_impl _M_impl; };
struct std__deque_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int__ __field0; };
struct std__queue_int__std__deque_int__std__allocator_int___ { struct std__deque_int__std__allocator_int__ c; };

char _str[15] = "s.front() == i";
char _str_1[108] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/llbmc_queue-test/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[48] = "cannot create std::deque larger than max_size()";
char _str_3[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_queue.h";
char __PRETTY_FUNCTION____ZNSt5queueIiSt5dequeIiSaIiEEE5frontEv[76] = "reference std::queue<int>::front() [_Tp = int, _Sequence = std::deque<int>]";
char _str_4[15] = "!this->empty()";
char _str_5[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE5frontEv[77] = "reference std::deque<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
char __PRETTY_FUNCTION____ZNSt5queueIiSt5dequeIiSaIiEEE3popEv[69] = "void std::queue<int>::pop() [_Tp = int, _Sequence = std::deque<int>]";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE9pop_frontEv[76] = "void std::deque<int>::pop_front() [_Tp = int, _Alloc = std::allocator<int>]";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0: ;
  int __retval1;
  struct std__queue_int__std__deque_int__std__allocator_int___ s2;
  int c3 = 0;
  __retval1 = c3;
  // externalized std:: op: std::queue<int, std::deque<int, std::allocator<int> > >::queue<std::deque<int, std::allocator<int> >, void>()
  __VERIFIER_nondet_memory(&s2, sizeof(s2));
      int i4;
      int c5 = 0;
      i4 = c5;
      while (1) {
        int t7 = i4;
        int c8 = 10;
        _Bool c9 = ((t7 < c8)) ? 1 : 0;
        if (!c9) break;
          // externalized std:: op: std::queue<int, std::deque<int, std::allocator<int> > >::push(int const&)
          __VERIFIER_nondet_memory(&s2, sizeof(s2));
          __VERIFIER_nondet_memory(&i4, sizeof(i4));
      for_step6: ;
        int t10 = i4;
        int u11 = t10 + 1;
        i4 = u11;
      }
      int i12;
      int c13 = 0;
      i12 = c13;
      while (1) {
        int t15 = i12;
        int c16 = 10;
        _Bool c17 = ((t15 < c16)) ? 1 : 0;
        if (!c17) break;
          int* std18;
          __VERIFIER_nondet_memory(&std18, sizeof(std18));
          int t19 = *std18;
          int t20 = i12;
          _Bool c21 = ((t19 == t20)) ? 1 : 0;
          if (c21) {
          } else {
            char* cast22 = (char*)&(_str);
            char* c23 = (char*)_str_1;
            unsigned int c24 = 20;
            char* cast25 = (char*)&(__PRETTY_FUNCTION___main);
            reach_error();
            __assert_fail(cast22, c23, c24, cast25);
          }
          // externalized std:: op: std::queue<int, std::deque<int, std::allocator<int> > >::pop()
          __VERIFIER_nondet_memory(&s2, sizeof(s2));
      for_step14: ;
        int t26 = i12;
        int u27 = t26 + 1;
        i12 = u27;
      }
    int c28 = 0;
    __retval1 = c28;
    int t29 = __retval1;
    int ret_val30 = t29;
    {
      // externalized std:: op: std::queue<int, std::deque<int, std::allocator<int> > >::~queue()
      __VERIFIER_nondet_memory(&s2, sizeof(s2));
    }
    return ret_val30;
  int t31 = __retval1;
  return t31;
}

