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
struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__ { struct std___Deque_iterator_int__int____int___ _M_first; struct std___Deque_iterator_int__int____int___* _M_cur; struct std__allocator_int_* _M_alloc; };
struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_ { struct std___Deque_iterator_int__int____int___ _M_first; struct std___Deque_iterator_int__int____int___* _M_cur; };
struct std____detail____move_iter_cat_std___Deque_iterator_int__int____int____;
struct std____new_allocator_int_;
struct std____new_allocator_int___;
struct std__allocator_int_;
struct std__allocator_int___ { unsigned char __field0; };
struct std__move_iterator_std___Deque_iterator_int__int____int____ { struct std___Deque_iterator_int__int____int___ _M_current; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____imove___IterMove { unsigned char __field0; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl_data { int** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_int__int____int___ _M_start; struct std___Deque_iterator_int__int____int___ _M_finish; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Deque_base_int__std__allocator_int_____Deque_impl { struct std___Deque_base_int__std__allocator_int_____Deque_impl_data __field0; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std___Deque_base_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int_____Deque_impl _M_impl; };
struct std__deque_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[20] = "mydeque.size() == 9";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_resize/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[16] = "mydeque[0] == 1";
char _str_3[20] = "mydeque.size() == 5";
char _str_4[20] = "mydeque.size() == 8";
char _str_5[18] = "mydeque[5] == 100";
char _str_6[21] = "mydeque.size() == 12";
char _str_7[17] = "mydeque[10] == 0";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_8[18] = "mydeque contains:";
char _str_9[48] = "cannot create std::deque larger than max_size()";
char _str_10[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv[76] = "reference std::deque<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_11[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEEixEm[91] = "reference std::deque<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_12[19] = "__n < this->size()";
char _str_13[31] = "deque::_M_new_elements_at_back";
char _str_14[32] = "deque::_M_new_elements_at_front";
struct std__ranges____imove___IterMove _ZNSt6ranges4_Cpo9iter_moveE;
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__deque_int__std__allocator_int__ mydeque2;
  struct std___Deque_iterator_int__int____int___ it3;
  unsigned int i4;
  int ref_tmp15;
  int c6 = 0;
  __retval1 = c6;
  // externalized std:: op: std::deque<int, std::allocator<int> >::deque()
  __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
    // externalized std:: op: std::_Deque_iterator<int, int&, int*>::_Deque_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
      int ref_tmp07;
      unsigned int c8 = 1;
      i4 = c8;
      while (1) {
        unsigned int t10 = i4;
        unsigned int c11 = 10;
        _Bool c12 = ((t10 < c11)) ? 1 : 0;
        if (!c12) break;
        unsigned int t13 = i4;
        int cast14 = (int)t13;
        ref_tmp07 = cast14;
        // externalized std:: op: std::deque<int, std::allocator<int> >::push_back(int&&)
        __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
        __VERIFIER_nondet_memory(&ref_tmp07, sizeof(ref_tmp07));
      for_step9: ;
        unsigned int t15 = i4;
        unsigned int u16 = t15 + 1;
        i4 = u16;
      }
    unsigned long std17 = __VERIFIER_nondet_unsigned_long();
    unsigned long c18 = 9;
    _Bool c19 = ((std17 == c18)) ? 1 : 0;
    if (c19) {
    } else {
      char* cast20 = (char*)&(_str);
      char* c21 = _str_1;
      unsigned int c22 = 24;
      char* cast23 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast20, c21, c22, cast23);
    }
    unsigned long c24 = 0;
    int* std25;
    __VERIFIER_nondet_memory(&std25, sizeof(std25));
    int t26 = *std25;
    int c27 = 1;
    _Bool c28 = ((t26 == c27)) ? 1 : 0;
    if (c28) {
    } else {
      char* cast29 = (char*)&(_str_2);
      char* c30 = _str_1;
      unsigned int c31 = 25;
      char* cast32 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast29, c30, c31, cast32);
    }
    unsigned long c33 = 5;
    // externalized std:: op: std::deque<int, std::allocator<int> >::resize(unsigned long)
    __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
    unsigned long std34 = __VERIFIER_nondet_unsigned_long();
    unsigned long c35 = 5;
    _Bool c36 = ((std34 == c35)) ? 1 : 0;
    if (c36) {
    } else {
      char* cast37 = (char*)&(_str_3);
      char* c38 = _str_1;
      unsigned int c39 = 29;
      char* cast40 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast37, c38, c39, cast40);
    }
    unsigned long c41 = 8;
    int c42 = 100;
    ref_tmp15 = c42;
    // externalized std:: op: std::deque<int, std::allocator<int> >::resize(unsigned long, int const&)
    __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    unsigned long std43 = __VERIFIER_nondet_unsigned_long();
    unsigned long c44 = 8;
    _Bool c45 = ((std43 == c44)) ? 1 : 0;
    if (c45) {
    } else {
      char* cast46 = (char*)&(_str_4);
      char* c47 = _str_1;
      unsigned int c48 = 33;
      char* cast49 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast46, c47, c48, cast49);
    }
    unsigned long c50 = 5;
    int* std51;
    __VERIFIER_nondet_memory(&std51, sizeof(std51));
    int t52 = *std51;
    int c53 = 100;
    _Bool c54 = ((t52 == c53)) ? 1 : 0;
    if (c54) {
    } else {
      char* cast55 = (char*)&(_str_5);
      char* c56 = _str_1;
      unsigned int c57 = 34;
      char* cast58 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast55, c56, c57, cast58);
    }
    unsigned long c59 = 12;
    // externalized std:: op: std::deque<int, std::allocator<int> >::resize(unsigned long)
    __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
    unsigned long std60 = __VERIFIER_nondet_unsigned_long();
    unsigned long c61 = 12;
    _Bool c62 = ((std60 == c61)) ? 1 : 0;
    if (c62) {
    } else {
      char* cast63 = (char*)&(_str_6);
      char* c64 = _str_1;
      unsigned int c65 = 38;
      char* cast66 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast63, c64, c65, cast66);
    }
    unsigned long c67 = 10;
    int* std68;
    __VERIFIER_nondet_memory(&std68, sizeof(std68));
    int t69 = *std68;
    int c70 = 0;
    _Bool c71 = ((t69 == c70)) ? 1 : 0;
    if (c71) {
    } else {
      char* cast72 = (char*)&(_str_7);
      char* c73 = _str_1;
      unsigned int c74 = 39;
      char* cast75 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast72, c73, c74, cast75);
    }
    char* cast76 = (char*)&(_str_8);
    struct std__basic_ostream_char__std__char_traits_char__* std77;
    __VERIFIER_nondet_memory(&std77, sizeof(std77));
    struct std__basic_ostream_char__std__char_traits_char__* std78;
    __VERIFIER_nondet_memory(&std78, sizeof(std78));
    int c79 = 0;
    __retval1 = c79;
    int t80 = __retval1;
    int ret_val81 = t80;
    {
      // externalized std:: op: std::deque<int, std::allocator<int> >::~deque()
      __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
    }
    return ret_val81;
  int t82 = __retval1;
  return t82;
}

