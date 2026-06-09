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
struct std__basic_ostream_char__std__char_traits_char__;
struct std___Deque_base_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int_____Deque_impl _M_impl; };
struct std__deque_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[20] = "mydeque.back() == 0";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_push_back/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[21] = "mydeque.size() == 10";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[16] = "mydeque stores ";
char _str_4[11] = " numbers.\n";
char _str_5[48] = "cannot create std::deque larger than max_size()";
char _str_6[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv[76] = "reference std::deque<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_7[15] = "!this->empty()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__deque_int__std__allocator_int__ mydeque2;
  int myint3;
  int n4;
  int c5 = 0;
  __retval1 = c5;
  // externalized std:: op: std::deque<int, std::allocator<int> >::deque()
  __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
    int c6 = 10;
    n4 = c6;
      do {
          int t7 = n4;
          int u8 = t7 - 1;
          n4 = u8;
          myint3 = u8;
          // externalized std:: op: std::deque<int, std::allocator<int> >::push_back(int const&)
          __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
          __VERIFIER_nondet_memory(&myint3, sizeof(myint3));
        int t9 = myint3;
        _Bool cast10 = (_Bool)t9;
        if (!cast10) break;
      } while (1);
    int* std11;
    __VERIFIER_nondet_memory(&std11, sizeof(std11));
    int t12 = *std11;
    int c13 = 0;
    _Bool c14 = ((t12 == c13)) ? 1 : 0;
    if (c14) {
    } else {
      char* cast15 = (char*)&(_str);
      char* c16 = _str_1;
      unsigned int c17 = 26;
      char* cast18 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast15, c16, c17, cast18);
    }
    unsigned long std19 = __VERIFIER_nondet_unsigned_long();
    unsigned long c20 = 10;
    _Bool c21 = ((std19 == c20)) ? 1 : 0;
    if (c21) {
    } else {
      char* cast22 = (char*)&(_str_2);
      char* c23 = _str_1;
      unsigned int c24 = 27;
      char* cast25 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast22, c23, c24, cast25);
    }
    char* cast26 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    unsigned long std28 = __VERIFIER_nondet_unsigned_long();
    int cast29 = (int)std28;
    struct std__basic_ostream_char__std__char_traits_char__* std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
    char* cast31 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    int c33 = 0;
    __retval1 = c33;
    int t34 = __retval1;
    int ret_val35 = t34;
    {
      // externalized std:: op: std::deque<int, std::allocator<int> >::~deque()
      __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
    }
    return ret_val35;
  int t36 = __retval1;
  return t36;
}

