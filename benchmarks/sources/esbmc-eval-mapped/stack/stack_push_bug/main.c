extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

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
struct std__ctype_char_;
struct std__ios_base;
struct std___Deque_base_int__std__allocator_int_____Deque_impl { struct std___Deque_base_int__std__allocator_int_____Deque_impl_data __field0; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std___Deque_base_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int_____Deque_impl _M_impl; };
struct std__deque_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int__ __field0; };
struct std__stack_int__std__deque_int__std__allocator_int___ { struct std__deque_int__std__allocator_int__ c; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[19] = "mystack.top() != i";
char _str_1[108] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stack/stack_push_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[24] = "Popping out elements...";
char _str_3[2] = " ";
char _str_4[48] = "cannot create std::deque larger than max_size()";
char _str_5[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_stack.h";
char __PRETTY_FUNCTION____ZNSt5stackIiSt5dequeIiSaIiEEE3topEv[74] = "reference std::stack<int>::top() [_Tp = int, _Sequence = std::deque<int>]";
char _str_6[15] = "!this->empty()";
char _str_7[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv[76] = "reference std::deque<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char __PRETTY_FUNCTION____ZNSt5stackIiSt5dequeIiSaIiEEE3popEv[69] = "void std::stack<int>::pop() [_Tp = int, _Sequence = std::deque<int>]";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE8pop_backEv[75] = "void std::deque<int>::pop_back() [_Tp = int, _Alloc = std::allocator<int>]";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__stack_int__std__deque_int__std__allocator_int___ mystack2;
  int c3 = 0;
  __retval1 = c3;
  // externalized std:: op: std::stack<int, std::deque<int, std::allocator<int> > >::stack<std::deque<int, std::allocator<int> >, void>()
  __VERIFIER_nondet_memory(&mystack2, sizeof(mystack2));
      int i4;
      int c5 = 0;
      i4 = c5;
      while (1) {
        int t7 = i4;
        int c8 = 5;
        _Bool c9 = ((t7 < c8)) ? 1 : 0;
        if (!c9) break;
          // externalized std:: op: std::stack<int, std::deque<int, std::allocator<int> > >::push(int const&)
          __VERIFIER_nondet_memory(&mystack2, sizeof(mystack2));
          __VERIFIER_nondet_memory(&i4, sizeof(i4));
          int* std10;
          __VERIFIER_nondet_memory(&std10, sizeof(std10));
          int t11 = *std10;
          int t12 = i4;
          _Bool c13 = ((t11 != t12)) ? 1 : 0;
          if (c13) {
          } else {
            char* cast14 = (char*)&(_str);
            char* c15 = _str_1;
            unsigned int c16 = 20;
            char* cast17 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast14, c15, c16, cast17);
          }
      for_step6: ;
        int t18 = i4;
        int u19 = t18 + 1;
        i4 = u19;
      }
    char* cast20 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std21;
    __VERIFIER_nondet_memory(&std21, sizeof(std21));
      while (1) {
        _Bool std22;
        __VERIFIER_nondet_memory(&std22, sizeof(std22));
        _Bool u23 = !std22;
        if (!u23) break;
          char* cast24 = (char*)&(_str_3);
          struct std__basic_ostream_char__std__char_traits_char__* std25;
          __VERIFIER_nondet_memory(&std25, sizeof(std25));
          int* std26;
          __VERIFIER_nondet_memory(&std26, sizeof(std26));
          int t27 = *std26;
          struct std__basic_ostream_char__std__char_traits_char__* std28;
          __VERIFIER_nondet_memory(&std28, sizeof(std28));
          // externalized std:: op: std::stack<int, std::deque<int, std::allocator<int> > >::pop()
          __VERIFIER_nondet_memory(&mystack2, sizeof(mystack2));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    int c30 = 0;
    __retval1 = c30;
    int t31 = __retval1;
    int ret_val32 = t31;
    {
      // externalized std:: op: std::stack<int, std::deque<int, std::allocator<int> > >::~stack()
      __VERIFIER_nondet_memory(&mystack2, sizeof(mystack2));
    }
    return ret_val32;
  int t33 = __retval1;
  return t33;
}

