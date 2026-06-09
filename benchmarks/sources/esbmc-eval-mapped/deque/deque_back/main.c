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
char _str[22] = "mydeque.back() == n--";
char _str_1[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_back/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[18] = "mydeque contains:";
char _str_3[2] = " ";
char _str_4[48] = "cannot create std::deque larger than max_size()";
char _str_5[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv[76] = "reference std::deque<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEEixEm[91] = "reference std::deque<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_7[19] = "__n < this->size()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__deque_int__std__allocator_int__ mydeque2;
  int ref_tmp03;
  int n4;
  int c5 = 0;
  __retval1 = c5;
  // externalized std:: op: std::deque<int, std::allocator<int> >::deque()
  __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
    int c6 = 10;
    ref_tmp03 = c6;
    // externalized std:: op: std::deque<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    int c7 = 10;
    n4 = c7;
      while (1) {
        int* std8;
        __VERIFIER_nondet_memory(&std8, sizeof(std8));
        int t9 = *std8;
        int c10 = 0;
        _Bool c11 = ((t9 != c10)) ? 1 : 0;
        if (!c11) break;
          int ref_tmp112;
          int* std13;
          __VERIFIER_nondet_memory(&std13, sizeof(std13));
          int t14 = *std13;
          int t15 = n4;
          int u16 = t15 - 1;
          n4 = u16;
          _Bool c17 = ((t14 == t15)) ? 1 : 0;
          if (c17) {
          } else {
            char* cast18 = (char*)&(_str);
            char* c19 = _str_1;
            unsigned int c20 = 22;
            char* cast21 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast18, c19, c20, cast21);
          }
          int* std22;
          __VERIFIER_nondet_memory(&std22, sizeof(std22));
          int t23 = *std22;
          int c24 = 1;
          int b25 = t23 - c24;
          ref_tmp112 = b25;
          // externalized std:: op: std::deque<int, std::allocator<int> >::push_back(int&&)
          __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
          __VERIFIER_nondet_memory(&ref_tmp112, sizeof(ref_tmp112));
      }
    char* cast26 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
      unsigned int i28;
      unsigned int c29 = 0;
      i28 = c29;
      while (1) {
        unsigned int t31 = i28;
        unsigned long cast32 = (unsigned long)t31;
        unsigned long std33 = __VERIFIER_nondet_unsigned_long();
        _Bool c34 = ((cast32 < std33)) ? 1 : 0;
        if (!c34) break;
        char* cast35 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std36;
        __VERIFIER_nondet_memory(&std36, sizeof(std36));
        unsigned int t37 = i28;
        unsigned long cast38 = (unsigned long)t37;
        int* std39;
        __VERIFIER_nondet_memory(&std39, sizeof(std39));
        int t40 = *std39;
        struct std__basic_ostream_char__std__char_traits_char__* std41;
        __VERIFIER_nondet_memory(&std41, sizeof(std41));
      for_step30: ;
        unsigned int t42 = i28;
        unsigned int u43 = t42 + 1;
        i28 = u43;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std44;
    __VERIFIER_nondet_memory(&std44, sizeof(std44));
    int c45 = 0;
    __retval1 = c45;
    int t46 = __retval1;
    int ret_val47 = t46;
    {
      // externalized std:: op: std::deque<int, std::allocator<int> >::~deque()
      __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
    }
    return ret_val47;
  int t48 = __retval1;
  return t48;
}

