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
struct std___Deque_iterator_double__double____double___ { double* _M_cur; double* _M_first; double* _M_last; double** _M_node; };
struct std____new_allocator_double_;
struct std____new_allocator_double___;
struct std__allocator_double_;
struct std__allocator_double___ { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Deque_base_double__std__allocator_double_____Deque_impl_data { double** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_double__double____double___ _M_start; struct std___Deque_iterator_double__double____double___ _M_finish; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Deque_base_double__std__allocator_double_____Deque_impl { struct std___Deque_base_double__std__allocator_double_____Deque_impl_data __field0; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std___Deque_base_double__std__allocator_double__ { struct std___Deque_base_double__std__allocator_double_____Deque_impl _M_impl; };
struct std__deque_double__std__allocator_double__ { struct std___Deque_base_double__std__allocator_double__ __field0; };
struct std__queue_double__std__deque_double__std__allocator_double___ { struct std__deque_double__std__allocator_double__ c; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[22] = "Popping from values: ";
char _str_1[48] = "cannot create std::deque larger than max_size()";
char _str_2[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIdSaIdEE4backEv[85] = "reference std::deque<double>::back() [_Tp = double, _Alloc = std::allocator<double>]";
char _str_3[15] = "!this->empty()";
char _str_4[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_queue.h";
char __PRETTY_FUNCTION____ZNSt5queueIdSt5dequeIdSaIdEEE5frontEv[85] = "reference std::queue<double>::front() [_Tp = double, _Sequence = std::deque<double>]";
char __PRETTY_FUNCTION____ZNSt5dequeIdSaIdEE5frontEv[86] = "reference std::deque<double>::front() [_Tp = double, _Alloc = std::allocator<double>]";
char __PRETTY_FUNCTION____ZNSt5queueIdSt5dequeIdSaIdEEE3popEv[78] = "void std::queue<double>::pop() [_Tp = double, _Sequence = std::deque<double>]";
char __PRETTY_FUNCTION____ZNSt5dequeIdSaIdEE9pop_frontEv[85] = "void std::deque<double>::pop_front() [_Tp = double, _Alloc = std::allocator<double>]";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__queue_double__std__deque_double__std__allocator_double___ values2;
  double ref_tmp03;
  double ref_tmp14;
  double ref_tmp25;
  int c6 = 0;
  __retval1 = c6;
  // externalized std:: op: std::queue<double, std::deque<double, std::allocator<double> > >::queue<std::deque<double, std::allocator<double> >, void>()
  __VERIFIER_nondet_memory(&values2, sizeof(values2));
    double c7 = 0x1.999999999999ap1;
    ref_tmp03 = c7;
    // externalized std:: op: std::queue<double, std::deque<double, std::allocator<double> > >::push(double&&)
    __VERIFIER_nondet_memory(&values2, sizeof(values2));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    double c8 = 0x1.399999999999ap3;
    ref_tmp14 = c8;
    // externalized std:: op: std::queue<double, std::deque<double, std::allocator<double> > >::push(double&&)
    __VERIFIER_nondet_memory(&values2, sizeof(values2));
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
    double c9 = 0x1.599999999999ap2;
    ref_tmp25 = c9;
    // externalized std:: op: std::queue<double, std::deque<double, std::allocator<double> > >::push(double&&)
    __VERIFIER_nondet_memory(&values2, sizeof(values2));
    __VERIFIER_nondet_memory(&ref_tmp25, sizeof(ref_tmp25));
    char* cast10 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std11;
    __VERIFIER_nondet_memory(&std11, sizeof(std11));
      while (1) {
        _Bool std12;
        __VERIFIER_nondet_memory(&std12, sizeof(std12));
        _Bool u13 = !std12;
        if (!u13) break;
          double* std14;
          __VERIFIER_nondet_memory(&std14, sizeof(std14));
          double t15 = *std14;
          struct std__basic_ostream_char__std__char_traits_char__* std16;
          __VERIFIER_nondet_memory(&std16, sizeof(std16));
          char c17 = 32;
          struct std__basic_ostream_char__std__char_traits_char__* std18;
          __VERIFIER_nondet_memory(&std18, sizeof(std18));
          // externalized std:: op: std::queue<double, std::deque<double, std::allocator<double> > >::pop()
          __VERIFIER_nondet_memory(&values2, sizeof(values2));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std19;
    __VERIFIER_nondet_memory(&std19, sizeof(std19));
    int c20 = 0;
    __retval1 = c20;
    int t21 = __retval1;
    int ret_val22 = t21;
    {
      // externalized std:: op: std::queue<double, std::deque<double, std::allocator<double> > >::~queue()
      __VERIFIER_nondet_memory(&values2, sizeof(values2));
    }
    return ret_val22;
  int t23 = __retval1;
  return t23;
}

