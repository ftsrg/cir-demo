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
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std____new_allocator_int_;
struct std____new_allocator_int___;
struct std__allocator_int_ { unsigned char __field0; };
struct std__allocator_int___ { unsigned char __field0; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
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
char _str_1[18] = "mydeque[i] != 9-i";
char _str_2[121] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_operator_brackets_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[48] = "cannot create std::deque larger than max_size()";
char _str_4[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEEixEm[91] = "reference std::deque<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_5[19] = "__n < this->size()";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0: ;
  int __retval1;
  struct std__deque_int__std__allocator_int__ mydeque2;
  struct std__allocator_int_ ref_tmp03;
  unsigned int i4;
  unsigned long sz5;
  int c6 = 0;
  __retval1 = c6;
  unsigned long c7 = 10;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::deque<int, std::allocator<int> >::deque(unsigned long, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    unsigned long std8 = __VERIFIER_nondet_unsigned_long();
    sz5 = std8;
      unsigned int c9 = 0;
      i4 = c9;
      while (1) {
        unsigned int t11 = i4;
        unsigned long cast12 = (unsigned long)t11;
        unsigned long t13 = sz5;
        _Bool c14 = ((cast12 < t13)) ? 1 : 0;
        if (!c14) break;
        unsigned int t15 = i4;
        int cast16 = (int)t15;
        unsigned int t17 = i4;
        unsigned long cast18 = (unsigned long)t17;
        int* std19;
        __VERIFIER_nondet_memory(&std19, sizeof(std19));
        *std19 = cast16;
      for_step10: ;
        unsigned int t20 = i4;
        unsigned int u21 = t20 + 1;
        i4 = u21;
      }
      unsigned int c22 = 0;
      i4 = c22;
      while (1) {
        unsigned int t24 = i4;
        unsigned long cast25 = (unsigned long)t24;
        unsigned long t26 = sz5;
        unsigned long c27 = 2;
        unsigned long b28 = t26 / c27;
        _Bool c29 = ((cast25 < b28)) ? 1 : 0;
        if (!c29) break;
          int temp30;
          unsigned long t31 = sz5;
          unsigned long c32 = 1;
          unsigned long b33 = t31 - c32;
          unsigned int t34 = i4;
          unsigned long cast35 = (unsigned long)t34;
          unsigned long b36 = b33 - cast35;
          int* std37;
          __VERIFIER_nondet_memory(&std37, sizeof(std37));
          int t38 = *std37;
          temp30 = t38;
          unsigned int t39 = i4;
          unsigned long cast40 = (unsigned long)t39;
          int* std41;
          __VERIFIER_nondet_memory(&std41, sizeof(std41));
          int t42 = *std41;
          unsigned long t43 = sz5;
          unsigned long c44 = 1;
          unsigned long b45 = t43 - c44;
          unsigned int t46 = i4;
          unsigned long cast47 = (unsigned long)t46;
          unsigned long b48 = b45 - cast47;
          int* std49;
          __VERIFIER_nondet_memory(&std49, sizeof(std49));
          *std49 = t42;
          int t50 = temp30;
          unsigned int t51 = i4;
          unsigned long cast52 = (unsigned long)t51;
          int* std53;
          __VERIFIER_nondet_memory(&std53, sizeof(std53));
          *std53 = t50;
      for_step23: ;
        unsigned int t54 = i4;
        unsigned int u55 = t54 + 1;
        i4 = u55;
      }
    char* cast56 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std57;
    __VERIFIER_nondet_memory(&std57, sizeof(std57));
      unsigned int c58 = 0;
      i4 = c58;
      while (1) {
        unsigned int t60 = i4;
        unsigned long cast61 = (unsigned long)t60;
        unsigned long t62 = sz5;
        _Bool c63 = ((cast61 < t62)) ? 1 : 0;
        if (!c63) break;
        unsigned int t64 = i4;
        unsigned long cast65 = (unsigned long)t64;
        int* std66;
        __VERIFIER_nondet_memory(&std66, sizeof(std66));
        int t67 = *std66;
        unsigned int cast68 = (unsigned int)t67;
        unsigned int c69 = 9;
        unsigned int t70 = i4;
        unsigned int b71 = c69 - t70;
        _Bool c72 = ((cast68 != b71)) ? 1 : 0;
        if (c72) {
        } else {
          char* cast73 = (char*)&(_str_1);
          char* c74 = (char*)_str_2;
          unsigned int c75 = 36;
          char* cast76 = (char*)&(__PRETTY_FUNCTION___main);
          reach_error();
          __assert_fail(cast73, c74, c75, cast76);
        }
      for_step59: ;
        unsigned int t77 = i4;
        unsigned int u78 = t77 + 1;
        i4 = u78;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std79;
    __VERIFIER_nondet_memory(&std79, sizeof(std79));
    int c80 = 0;
    __retval1 = c80;
    int t81 = __retval1;
    int ret_val82 = t81;
    {
      // externalized std:: op: std::deque<int, std::allocator<int> >::~deque()
      __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
    }
    return ret_val82;
  int t83 = __retval1;
  return t83;
}

