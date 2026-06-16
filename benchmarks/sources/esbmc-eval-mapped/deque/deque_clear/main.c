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
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl_data { int** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_int__int____int___ _M_start; struct std___Deque_iterator_int__int____int___ _M_finish; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl { struct std___Deque_base_int__std__allocator_int_____Deque_impl_data __field0; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std___Deque_base_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int_____Deque_impl _M_impl; };
struct std__deque_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int__ __field0; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[18] = "mydeque contains:";
char _str_1[2] = " ";
char _str_2[16] = "mydeque.empty()";
char _str_3[105] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_clear/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[20] = "mydeque.size() == 2";
char _str_5[19] = "\nmydeque contains:";
char _str_6[48] = "cannot create std::deque larger than max_size()";
char _str_7[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv[76] = "reference std::deque<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_8[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEEixEm[91] = "reference std::deque<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_9[19] = "__n < this->size()";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0: ;
  int __retval1;
  unsigned int i2;
  struct std__deque_int__std__allocator_int__ mydeque3;
  int ref_tmp04;
  int ref_tmp15;
  int ref_tmp26;
  int ref_tmp37;
  int ref_tmp48;
  int c9 = 0;
  __retval1 = c9;
  // externalized std:: op: std::deque<int, std::allocator<int> >::deque()
  __VERIFIER_nondet_memory(&mydeque3, sizeof(mydeque3));
    int c10 = 100;
    ref_tmp04 = c10;
    // externalized std:: op: std::deque<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mydeque3, sizeof(mydeque3));
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    int c11 = 200;
    ref_tmp15 = c11;
    // externalized std:: op: std::deque<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mydeque3, sizeof(mydeque3));
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    int c12 = 300;
    ref_tmp26 = c12;
    // externalized std:: op: std::deque<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mydeque3, sizeof(mydeque3));
    __VERIFIER_nondet_memory(&ref_tmp26, sizeof(ref_tmp26));
    char* cast13 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std14;
    __VERIFIER_nondet_memory(&std14, sizeof(std14));
      unsigned int c15 = 0;
      i2 = c15;
      while (1) {
        unsigned int t17 = i2;
        unsigned long cast18 = (unsigned long)t17;
        unsigned long std19 = __VERIFIER_nondet_unsigned_long();
        _Bool c20 = ((cast18 < std19)) ? 1 : 0;
        if (!c20) break;
        char* cast21 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std22;
        __VERIFIER_nondet_memory(&std22, sizeof(std22));
        unsigned int t23 = i2;
        unsigned long cast24 = (unsigned long)t23;
        int* std25;
        __VERIFIER_nondet_memory(&std25, sizeof(std25));
        int t26 = *std25;
        struct std__basic_ostream_char__std__char_traits_char__* std27;
        __VERIFIER_nondet_memory(&std27, sizeof(std27));
      for_step16: ;
        unsigned int t28 = i2;
        unsigned int u29 = t28 + 1;
        i2 = u29;
      }
    // externalized std:: op: std::deque<int, std::allocator<int> >::clear()
    __VERIFIER_nondet_memory(&mydeque3, sizeof(mydeque3));
    _Bool std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
    if (std30) {
    } else {
      char* cast31 = (char*)&(_str_2);
      char* c32 = (char*)_str_3;
      unsigned int c33 = 26;
      char* cast34 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast31, c32, c33, cast34);
    }
    int c35 = 1101;
    ref_tmp37 = c35;
    // externalized std:: op: std::deque<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mydeque3, sizeof(mydeque3));
    __VERIFIER_nondet_memory(&ref_tmp37, sizeof(ref_tmp37));
    int c36 = 2202;
    ref_tmp48 = c36;
    // externalized std:: op: std::deque<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&mydeque3, sizeof(mydeque3));
    __VERIFIER_nondet_memory(&ref_tmp48, sizeof(ref_tmp48));
    unsigned long std37 = __VERIFIER_nondet_unsigned_long();
    unsigned long c38 = 2;
    _Bool c39 = ((std37 == c38)) ? 1 : 0;
    if (c39) {
    } else {
      char* cast40 = (char*)&(_str_4);
      char* c41 = (char*)_str_3;
      unsigned int c42 = 29;
      char* cast43 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast40, c41, c42, cast43);
    }
    char* cast44 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
      unsigned int c46 = 0;
      i2 = c46;
      while (1) {
        unsigned int t48 = i2;
        unsigned long cast49 = (unsigned long)t48;
        unsigned long std50 = __VERIFIER_nondet_unsigned_long();
        _Bool c51 = ((cast49 < std50)) ? 1 : 0;
        if (!c51) break;
        char* cast52 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std53;
        __VERIFIER_nondet_memory(&std53, sizeof(std53));
        unsigned int t54 = i2;
        unsigned long cast55 = (unsigned long)t54;
        int* std56;
        __VERIFIER_nondet_memory(&std56, sizeof(std56));
        int t57 = *std56;
        struct std__basic_ostream_char__std__char_traits_char__* std58;
        __VERIFIER_nondet_memory(&std58, sizeof(std58));
      for_step47: ;
        unsigned int t59 = i2;
        unsigned int u60 = t59 + 1;
        i2 = u60;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std61;
    __VERIFIER_nondet_memory(&std61, sizeof(std61));
    int c62 = 0;
    __retval1 = c62;
    int t63 = __retval1;
    int ret_val64 = t63;
    {
      // externalized std:: op: std::deque<int, std::allocator<int> >::~deque()
      __VERIFIER_nondet_memory(&mydeque3, sizeof(mydeque3));
    }
    return ret_val64;
  int t65 = __retval1;
  return t65;
}

