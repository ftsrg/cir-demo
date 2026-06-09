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

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[16] = "mydeque.empty()";
char _str_1[105] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_empty/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[20] = "mydeque.size() == 0";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[8] = "total: ";
char _str_4[48] = "cannot create std::deque larger than max_size()";
char _str_5[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE5frontEv[77] = "reference std::deque<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE9pop_frontEv[76] = "void std::deque<int>::pop_front() [_Tp = int, _Alloc = std::allocator<int>]";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__deque_int__std__allocator_int__ mydeque2;
  int sum3;
  int c4 = 0;
  __retval1 = c4;
  // externalized std:: op: std::deque<int, std::allocator<int> >::deque()
  __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
    int c5 = 0;
    sum3 = c5;
      int i6;
      int c7 = 1;
      i6 = c7;
      while (1) {
        int t9 = i6;
        int c10 = 10;
        _Bool c11 = ((t9 <= c10)) ? 1 : 0;
        if (!c11) break;
        // externalized std:: op: std::deque<int, std::allocator<int> >::push_back(int const&)
        __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
        __VERIFIER_nondet_memory(&i6, sizeof(i6));
      for_step8: ;
        int t12 = i6;
        int u13 = t12 + 1;
        i6 = u13;
      }
      while (1) {
        _Bool std14;
        __VERIFIER_nondet_memory(&std14, sizeof(std14));
        _Bool u15 = !std14;
        if (!u15) break;
          int* std16;
          __VERIFIER_nondet_memory(&std16, sizeof(std16));
          int t17 = *std16;
          int t18 = sum3;
          int b19 = t18 + t17;
          sum3 = b19;
          // externalized std:: op: std::deque<int, std::allocator<int> >::pop_front()
          __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
      }
    _Bool std20;
    __VERIFIER_nondet_memory(&std20, sizeof(std20));
    if (std20) {
    } else {
      char* cast21 = (char*)&(_str);
      char* c22 = _str_1;
      unsigned int c23 = 26;
      char* cast24 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast21, c22, c23, cast24);
    }
    unsigned long std25 = __VERIFIER_nondet_unsigned_long();
    unsigned long c26 = 0;
    _Bool c27 = ((std25 == c26)) ? 1 : 0;
    if (c27) {
    } else {
      char* cast28 = (char*)&(_str_2);
      char* c29 = _str_1;
      unsigned int c30 = 27;
      char* cast31 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast28, c29, c30, cast31);
    }
    char* cast32 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    int t34 = sum3;
    struct std__basic_ostream_char__std__char_traits_char__* std35;
    __VERIFIER_nondet_memory(&std35, sizeof(std35));
    struct std__basic_ostream_char__std__char_traits_char__* std36;
    __VERIFIER_nondet_memory(&std36, sizeof(std36));
    int c37 = 0;
    __retval1 = c37;
    int t38 = __retval1;
    int ret_val39 = t38;
    {
      // externalized std:: op: std::deque<int, std::allocator<int> >::~deque()
      __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
    }
    return ret_val39;
  int t40 = __retval1;
  return t40;
}

