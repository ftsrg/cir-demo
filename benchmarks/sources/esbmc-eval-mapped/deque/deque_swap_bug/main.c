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
char _str[16] = "first[2] == 100";
char _str_1[108] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_swap_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[17] = "second[4] == 200";
char _str_3[16] = "first[4] != 200";
char _str_4[17] = "second[2] != 100";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[16] = "first contains:";
char _str_6[2] = " ";
char _str_7[18] = "\nsecond contains:";
char _str_8[48] = "cannot create std::deque larger than max_size()";
char _str_9[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEEixEm[91] = "reference std::deque<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_10[19] = "__n < this->size()";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4swapERS1_[91] = "void std::deque<int>::swap(deque<_Tp, _Alloc> &) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_11[104] = "_Alloc_traits::propagate_on_container_swap::value || _M_get_Tp_allocator() == __x._M_get_Tp_allocator()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  unsigned int i2;
  struct std__deque_int__std__allocator_int__ first3;
  int ref_tmp04;
  struct std__allocator_int_ ref_tmp15;
  struct std__deque_int__std__allocator_int__ second6;
  int ref_tmp27;
  struct std__allocator_int_ ref_tmp38;
  int c9 = 0;
  __retval1 = c9;
  unsigned long c10 = 3;
  int c11 = 100;
  ref_tmp04 = c11;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    // externalized std:: op: std::deque<int, std::allocator<int> >::deque(unsigned long, int const&, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&first3, sizeof(first3));
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
  }
    unsigned long c12 = 5;
    int c13 = 200;
    ref_tmp27 = c13;
    // externalized std:: op: std::allocator<int>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp38, sizeof(ref_tmp38));
      // externalized std:: op: std::deque<int, std::allocator<int> >::deque(unsigned long, int const&, std::allocator<int> const&)
      __VERIFIER_nondet_memory(&second6, sizeof(second6));
      __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      __VERIFIER_nondet_memory(&ref_tmp38, sizeof(ref_tmp38));
    {
      // externalized std:: op: std::allocator<int>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp38, sizeof(ref_tmp38));
    }
      unsigned long c14 = 2;
      int* std15;
      __VERIFIER_nondet_memory(&std15, sizeof(std15));
      int t16 = *std15;
      int c17 = 100;
      _Bool c18 = ((t16 == c17)) ? 1 : 0;
      if (c18) {
      } else {
        char* cast19 = (char*)&(_str);
        char* c20 = _str_1;
        unsigned int c21 = 20;
        char* cast22 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast19, c20, c21, cast22);
      }
      unsigned long c23 = 4;
      int* std24;
      __VERIFIER_nondet_memory(&std24, sizeof(std24));
      int t25 = *std24;
      int c26 = 200;
      _Bool c27 = ((t25 == c26)) ? 1 : 0;
      if (c27) {
      } else {
        char* cast28 = (char*)&(_str_2);
        char* c29 = _str_1;
        unsigned int c30 = 21;
        char* cast31 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast28, c29, c30, cast31);
      }
      // externalized std:: op: std::deque<int, std::allocator<int> >::swap(std::deque<int, std::allocator<int> >&)
      __VERIFIER_nondet_memory(&first3, sizeof(first3));
      __VERIFIER_nondet_memory(&second6, sizeof(second6));
      unsigned long c32 = 4;
      int* std33;
      __VERIFIER_nondet_memory(&std33, sizeof(std33));
      int t34 = *std33;
      int c35 = 200;
      _Bool c36 = ((t34 != c35)) ? 1 : 0;
      if (c36) {
      } else {
        char* cast37 = (char*)&(_str_3);
        char* c38 = _str_1;
        unsigned int c39 = 25;
        char* cast40 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast37, c38, c39, cast40);
      }
      unsigned long c41 = 2;
      int* std42;
      __VERIFIER_nondet_memory(&std42, sizeof(std42));
      int t43 = *std42;
      int c44 = 100;
      _Bool c45 = ((t43 != c44)) ? 1 : 0;
      if (c45) {
      } else {
        char* cast46 = (char*)&(_str_4);
        char* c47 = _str_1;
        unsigned int c48 = 26;
        char* cast49 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast46, c47, c48, cast49);
      }
      char* cast50 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* std51;
      __VERIFIER_nondet_memory(&std51, sizeof(std51));
        unsigned int c52 = 0;
        i2 = c52;
        while (1) {
          unsigned int t54 = i2;
          unsigned long cast55 = (unsigned long)t54;
          unsigned long std56 = __VERIFIER_nondet_unsigned_long();
          _Bool c57 = ((cast55 < std56)) ? 1 : 0;
          if (!c57) break;
          char* cast58 = (char*)&(_str_6);
          struct std__basic_ostream_char__std__char_traits_char__* std59;
          __VERIFIER_nondet_memory(&std59, sizeof(std59));
          unsigned int t60 = i2;
          unsigned long cast61 = (unsigned long)t60;
          int* std62;
          __VERIFIER_nondet_memory(&std62, sizeof(std62));
          int t63 = *std62;
          struct std__basic_ostream_char__std__char_traits_char__* std64;
          __VERIFIER_nondet_memory(&std64, sizeof(std64));
        for_step53: ;
          unsigned int t65 = i2;
          unsigned int u66 = t65 + 1;
          i2 = u66;
        }
      char* cast67 = (char*)&(_str_7);
      struct std__basic_ostream_char__std__char_traits_char__* std68;
      __VERIFIER_nondet_memory(&std68, sizeof(std68));
        unsigned int c69 = 0;
        i2 = c69;
        while (1) {
          unsigned int t71 = i2;
          unsigned long cast72 = (unsigned long)t71;
          unsigned long std73 = __VERIFIER_nondet_unsigned_long();
          _Bool c74 = ((cast72 < std73)) ? 1 : 0;
          if (!c74) break;
          char* cast75 = (char*)&(_str_6);
          struct std__basic_ostream_char__std__char_traits_char__* std76;
          __VERIFIER_nondet_memory(&std76, sizeof(std76));
          unsigned int t77 = i2;
          unsigned long cast78 = (unsigned long)t77;
          int* std79;
          __VERIFIER_nondet_memory(&std79, sizeof(std79));
          int t80 = *std79;
          struct std__basic_ostream_char__std__char_traits_char__* std81;
          __VERIFIER_nondet_memory(&std81, sizeof(std81));
        for_step70: ;
          unsigned int t82 = i2;
          unsigned int u83 = t82 + 1;
          i2 = u83;
        }
      struct std__basic_ostream_char__std__char_traits_char__* std84;
      __VERIFIER_nondet_memory(&std84, sizeof(std84));
      int c85 = 0;
      __retval1 = c85;
      int t86 = __retval1;
      int ret_val87 = t86;
      {
        // externalized std:: op: std::deque<int, std::allocator<int> >::~deque()
        __VERIFIER_nondet_memory(&second6, sizeof(second6));
      }
      {
        // externalized std:: op: std::deque<int, std::allocator<int> >::~deque()
        __VERIFIER_nondet_memory(&first3, sizeof(first3));
      }
      return ret_val87;
  int t88 = __retval1;
  return t88;
}

