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
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std____new_allocator_int_;
struct std____new_allocator_int___;
struct std__allocator_int_ { unsigned char __field0; };
struct std__allocator_int___ { unsigned char __field0; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl_data { int** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_int__int____int___ _M_start; struct std___Deque_iterator_int__int____int___ _M_finish; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Deque_base_int__std__allocator_int_____Deque_impl { struct std___Deque_base_int__std__allocator_int_____Deque_impl_data __field0; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std___Deque_base_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int_____Deque_impl _M_impl; };
struct std__deque_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[18] = "mydeque contains:";
char _str_1[2] = " ";
char _str_2[48] = "cannot create std::deque larger than max_size()";
char _str_3[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEEixEm[91] = "reference std::deque<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_4[19] = "__n < this->size()";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
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
    unsigned long c9 = 3;
    unsigned long t10 = sz5;
    unsigned long b11 = t10 + c9;
    sz5 = b11;
      unsigned int c12 = 0;
      i4 = c12;
      while (1) {
        unsigned int t14 = i4;
        unsigned long cast15 = (unsigned long)t14;
        unsigned long t16 = sz5;
        _Bool c17 = ((cast15 < t16)) ? 1 : 0;
        if (!c17) break;
        unsigned int t18 = i4;
        int cast19 = (int)t18;
        unsigned int t20 = i4;
        unsigned long cast21 = (unsigned long)t20;
        int* std22;
        __VERIFIER_nondet_memory(&std22, sizeof(std22));
        *std22 = cast19;
      for_step13: ;
        unsigned int t23 = i4;
        unsigned int u24 = t23 + 1;
        i4 = u24;
      }
      unsigned int c25 = 0;
      i4 = c25;
      while (1) {
        unsigned int t27 = i4;
        unsigned long cast28 = (unsigned long)t27;
        unsigned long t29 = sz5;
        unsigned long c30 = 2;
        unsigned long b31 = t29 / c30;
        _Bool c32 = ((cast28 < b31)) ? 1 : 0;
        if (!c32) break;
          int temp33;
          unsigned long t34 = sz5;
          unsigned long c35 = 1;
          unsigned long b36 = t34 - c35;
          unsigned int t37 = i4;
          unsigned long cast38 = (unsigned long)t37;
          unsigned long b39 = b36 - cast38;
          int* std40;
          __VERIFIER_nondet_memory(&std40, sizeof(std40));
          int t41 = *std40;
          temp33 = t41;
          unsigned int t42 = i4;
          unsigned long cast43 = (unsigned long)t42;
          int* std44;
          __VERIFIER_nondet_memory(&std44, sizeof(std44));
          int t45 = *std44;
          unsigned long t46 = sz5;
          unsigned long c47 = 1;
          unsigned long b48 = t46 - c47;
          unsigned int t49 = i4;
          unsigned long cast50 = (unsigned long)t49;
          unsigned long b51 = b48 - cast50;
          int* std52;
          __VERIFIER_nondet_memory(&std52, sizeof(std52));
          *std52 = t45;
          int t53 = temp33;
          unsigned int t54 = i4;
          unsigned long cast55 = (unsigned long)t54;
          int* std56;
          __VERIFIER_nondet_memory(&std56, sizeof(std56));
          *std56 = t53;
      for_step26: ;
        unsigned int t57 = i4;
        unsigned int u58 = t57 + 1;
        i4 = u58;
      }
    char* cast59 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std60;
    __VERIFIER_nondet_memory(&std60, sizeof(std60));
      unsigned int c61 = 0;
      i4 = c61;
      while (1) {
        unsigned int t63 = i4;
        unsigned long cast64 = (unsigned long)t63;
        unsigned long t65 = sz5;
        _Bool c66 = ((cast64 < t65)) ? 1 : 0;
        if (!c66) break;
        char* cast67 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std68;
        __VERIFIER_nondet_memory(&std68, sizeof(std68));
        unsigned int t69 = i4;
        unsigned long cast70 = (unsigned long)t69;
        int* std71;
        __VERIFIER_nondet_memory(&std71, sizeof(std71));
        int t72 = *std71;
        struct std__basic_ostream_char__std__char_traits_char__* std73;
        __VERIFIER_nondet_memory(&std73, sizeof(std73));
      for_step62: ;
        unsigned int t74 = i4;
        unsigned int u75 = t74 + 1;
        i4 = u75;
      }
    int c76 = 2;
    unsigned long c77 = 25;
    int* std78;
    __VERIFIER_nondet_memory(&std78, sizeof(std78));
    *std78 = c76;
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

