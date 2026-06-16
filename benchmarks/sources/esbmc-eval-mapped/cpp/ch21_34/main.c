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
struct std__stack_int__std__deque_int__std__allocator_int___ { struct std__deque_int__std__allocator_int__ c; };

char _str[18] = "mystack.top()==20";
char _str_1[99] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/ch21_34/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[48] = "cannot create std::deque larger than max_size()";
char _str_3[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv[76] = "reference std::deque<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_4[15] = "!this->empty()";
char _str_5[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_stack.h";
char __PRETTY_FUNCTION____ZNSt5stackIiSt5dequeIiSaIiEEE3topEv[74] = "reference std::stack<int>::top() [_Tp = int, _Sequence = std::deque<int>]";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0: ;
  int __retval1;
  struct std__stack_int__std__deque_int__std__allocator_int___ mystack2;
  int ref_tmp03;
  int ref_tmp14;
  int c5 = 0;
  __retval1 = c5;
  // externalized std:: op: std::stack<int, std::deque<int, std::allocator<int> > >::stack<std::deque<int, std::allocator<int> >, void>()
  __VERIFIER_nondet_memory(&mystack2, sizeof(mystack2));
    int c6 = 10;
    ref_tmp03 = c6;
    // externalized std:: op: std::stack<int, std::deque<int, std::allocator<int> > >::push(int&&)
    __VERIFIER_nondet_memory(&mystack2, sizeof(mystack2));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    int c7 = 20;
    ref_tmp14 = c7;
    // externalized std:: op: std::stack<int, std::deque<int, std::allocator<int> > >::push(int&&)
    __VERIFIER_nondet_memory(&mystack2, sizeof(mystack2));
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
    int* std8;
    __VERIFIER_nondet_memory(&std8, sizeof(std8));
    int t9 = *std8;
    int c10 = 20;
    _Bool c11 = ((t9 == c10)) ? 1 : 0;
    if (c11) {
    } else {
      char* cast12 = (char*)&(_str);
      char* c13 = (char*)_str_1;
      unsigned int c14 = 21;
      char* cast15 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast12, c13, c14, cast15);
    }
    int c16 = 0;
    __retval1 = c16;
    int t17 = __retval1;
    int ret_val18 = t17;
    {
      // externalized std:: op: std::stack<int, std::deque<int, std::allocator<int> > >::~stack()
      __VERIFIER_nondet_memory(&mystack2, sizeof(mystack2));
    }
    return ret_val18;
  int t19 = __retval1;
  return t19;
}

