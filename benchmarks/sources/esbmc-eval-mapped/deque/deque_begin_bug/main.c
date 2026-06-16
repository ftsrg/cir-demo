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
char _str[20] = "mydeque[i] == i + 1";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_begin_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[18] = "mydeque contains:";
char _str_3[9] = "*it != 1";
char _str_4[2] = " ";
char _str_5[48] = "cannot create std::deque larger than max_size()";
char _str_6[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv[76] = "reference std::deque<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_7[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEEixEm[91] = "reference std::deque<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_8[19] = "__n < this->size()";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0: ;
  int __retval1;
  struct std__deque_int__std__allocator_int__ mydeque2;
  struct std___Deque_iterator_int__int____int___ it3;
  struct std___Deque_iterator_int__int____int___ ref_tmp14;
  int c5 = 0;
  __retval1 = c5;
  // externalized std:: op: std::deque<int, std::allocator<int> >::deque()
  __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
    // externalized std:: op: std::_Deque_iterator<int, int&, int*>::_Deque_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
      int i6;
      int c7 = 0;
      i6 = c7;
      while (1) {
        int t9 = i6;
        int c10 = 5;
        _Bool c11 = ((t9 < c10)) ? 1 : 0;
        if (!c11) break;
          int ref_tmp012;
          int t13 = i6;
          int c14 = 1;
          int b15 = t13 + c14;
          ref_tmp012 = b15;
          // externalized std:: op: std::deque<int, std::allocator<int> >::push_back(int&&)
          __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
          __VERIFIER_nondet_memory(&ref_tmp012, sizeof(ref_tmp012));
          int t16 = i6;
          unsigned long cast17 = (unsigned long)t16;
          int* std18;
          __VERIFIER_nondet_memory(&std18, sizeof(std18));
          int t19 = *std18;
          int t20 = i6;
          int c21 = 1;
          int b22 = t20 + c21;
          _Bool c23 = ((t19 == b22)) ? 1 : 0;
          if (c23) {
          } else {
            char* cast24 = (char*)&(_str);
            char* c25 = (char*)_str_1;
            unsigned int c26 = 23;
            char* cast27 = (char*)&(__PRETTY_FUNCTION___main);
            reach_error();
            __assert_fail(cast24, c25, c26, cast27);
          }
      for_step8: ;
        int t28 = i6;
        int u29 = t28 + 1;
        i6 = u29;
      }
    char* cast30 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    struct std___Deque_iterator_int__int____int___ std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    ref_tmp14 = std32;
    struct std___Deque_iterator_int__int____int___* std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    int* std34;
    __VERIFIER_nondet_memory(&std34, sizeof(std34));
    int t35 = *std34;
    int c36 = 1;
    _Bool c37 = ((t35 != c36)) ? 1 : 0;
    if (c37) {
    } else {
      char* cast38 = (char*)&(_str_3);
      char* c39 = (char*)_str_1;
      unsigned int c40 = 29;
      char* cast41 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast38, c39, c40, cast41);
    }
      struct std___Deque_iterator_int__int____int___ ref_tmp242;
      struct std___Deque_iterator_int__int____int___ ref_tmp343;
      while (1) {
        struct std___Deque_iterator_int__int____int___ std44;
        __VERIFIER_nondet_memory(&std44, sizeof(std44));
        ref_tmp242 = std44;
        _Bool std45;
        __VERIFIER_nondet_memory(&std45, sizeof(std45));
        _Bool u46 = !std45;
        if (!u46) break;
        char* cast47 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* std48;
        __VERIFIER_nondet_memory(&std48, sizeof(std48));
        int c49 = 0;
        struct std___Deque_iterator_int__int____int___ std50;
        __VERIFIER_nondet_memory(&std50, sizeof(std50));
        ref_tmp343 = std50;
        int* std51;
        __VERIFIER_nondet_memory(&std51, sizeof(std51));
        int t52 = *std51;
        struct std__basic_ostream_char__std__char_traits_char__* std53;
        __VERIFIER_nondet_memory(&std53, sizeof(std53));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std54;
    __VERIFIER_nondet_memory(&std54, sizeof(std54));
    int c55 = 0;
    __retval1 = c55;
    int t56 = __retval1;
    int ret_val57 = t56;
    {
      // externalized std:: op: std::deque<int, std::allocator<int> >::~deque()
      __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
    }
    return ret_val57;
  int t58 = __retval1;
  return t58;
}

