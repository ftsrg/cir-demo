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
struct std___Deque_iterator_int_int___int___ { int* _M_cur; int* _M_first; int* _M_last; int** _M_node; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__ { struct std___Deque_iterator_int__int____int___ _M_first; struct std___Deque_iterator_int__int____int___* _M_cur; struct std__allocator_int_* _M_alloc; };
struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_ { struct std___Deque_iterator_int__int____int___ _M_first; struct std___Deque_iterator_int__int____int___* _M_cur; };
struct std____detail____move_iter_cat_std___Deque_iterator_int__int____int____;
struct std____new_allocator_int_;
struct std____new_allocator_int___;
struct std__allocator_int_ { unsigned char __field0; };
struct std__allocator_int___ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__integral_constant_bool__true_ { unsigned char __field0; };
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

struct std__deque_int__std__allocator_int__ __const_main_ref_tmp2;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[14] = "first[0] == 0";
char _str_1[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_operator_assign/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[15] = "second[4] == 0";
char _str_3[16] = "second == first";
char _str_4[18] = "first.size() == 0";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[16] = "Size of first: ";
char _str_6[17] = "Size of second: ";
char _str_7[48] = "cannot create std::deque larger than max_size()";
char _str_8[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEEixEm[91] = "reference std::deque<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_9[19] = "__n < this->size()";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
char _str_10[32] = "deque::_M_new_elements_at_front";
char _str_11[31] = "deque::_M_new_elements_at_back";
struct std__ranges____imove___IterMove _ZNSt6ranges4_Cpo9iter_moveE;
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__deque_int__std__allocator_int__ first2;
  struct std__allocator_int_ ref_tmp03;
  struct std__deque_int__std__allocator_int__ second4;
  struct std__allocator_int_ ref_tmp15;
  struct std__deque_int__std__allocator_int__ ref_tmp26;
  struct std__deque_int__std__allocator_int__* tmp_exprcleanup7;
  int c8 = 0;
  __retval1 = c8;
  unsigned long c9 = 3;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::deque<int, std::allocator<int> >::deque(unsigned long, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&first2, sizeof(first2));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    unsigned long c10 = 5;
    // externalized std:: op: std::allocator<int>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
      // externalized std:: op: std::deque<int, std::allocator<int> >::deque(unsigned long, std::allocator<int> const&)
      __VERIFIER_nondet_memory(&second4, sizeof(second4));
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    {
      // externalized std:: op: std::allocator<int>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    }
      unsigned long c11 = 0;
      int* std12;
      __VERIFIER_nondet_memory(&std12, sizeof(std12));
      int t13 = *std12;
      int c14 = 0;
      _Bool c15 = ((t13 == c14)) ? 1 : 0;
      if (c15) {
      } else {
        char* cast16 = (char*)&(_str);
        char* c17 = _str_1;
        unsigned int c18 = 19;
        char* cast19 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast16, c17, c18, cast19);
      }
      unsigned long c20 = 4;
      int* std21;
      __VERIFIER_nondet_memory(&std21, sizeof(std21));
      int t22 = *std21;
      int c23 = 0;
      _Bool c24 = ((t22 == c23)) ? 1 : 0;
      if (c24) {
      } else {
        char* cast25 = (char*)&(_str_2);
        char* c26 = _str_1;
        unsigned int c27 = 20;
        char* cast28 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast25, c26, c27, cast28);
      }
      struct std__deque_int__std__allocator_int__* std29;
      __VERIFIER_nondet_memory(&std29, sizeof(std29));
      _Bool std30;
      __VERIFIER_nondet_memory(&std30, sizeof(std30));
      if (std30) {
      } else {
        char* cast31 = (char*)&(_str_3);
        char* c32 = _str_1;
        unsigned int c33 = 23;
        char* cast34 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast31, c32, c33, cast34);
      }
      ref_tmp26 = *&__const_main_ref_tmp2; // copy
      // externalized std:: op: std::deque<int, std::allocator<int> >::deque()
      __VERIFIER_nondet_memory(&ref_tmp26, sizeof(ref_tmp26));
        struct std__deque_int__std__allocator_int__* std35;
        __VERIFIER_nondet_memory(&std35, sizeof(std35));
        tmp_exprcleanup7 = std35;
      {
        // externalized std:: op: std::deque<int, std::allocator<int> >::~deque()
        __VERIFIER_nondet_memory(&ref_tmp26, sizeof(ref_tmp26));
      }
      struct std__deque_int__std__allocator_int__* t36 = tmp_exprcleanup7;
      unsigned long std37 = __VERIFIER_nondet_unsigned_long();
      unsigned long c38 = 0;
      _Bool c39 = ((std37 == c38)) ? 1 : 0;
      if (c39) {
      } else {
        char* cast40 = (char*)&(_str_4);
        char* c41 = _str_1;
        unsigned int c42 = 26;
        char* cast43 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast40, c41, c42, cast43);
      }
      char* cast44 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* std45;
      __VERIFIER_nondet_memory(&std45, sizeof(std45));
      unsigned long std46 = __VERIFIER_nondet_unsigned_long();
      int cast47 = (int)std46;
      struct std__basic_ostream_char__std__char_traits_char__* std48;
      __VERIFIER_nondet_memory(&std48, sizeof(std48));
      struct std__basic_ostream_char__std__char_traits_char__* std49;
      __VERIFIER_nondet_memory(&std49, sizeof(std49));
      char* cast50 = (char*)&(_str_6);
      struct std__basic_ostream_char__std__char_traits_char__* std51;
      __VERIFIER_nondet_memory(&std51, sizeof(std51));
      unsigned long std52 = __VERIFIER_nondet_unsigned_long();
      int cast53 = (int)std52;
      struct std__basic_ostream_char__std__char_traits_char__* std54;
      __VERIFIER_nondet_memory(&std54, sizeof(std54));
      struct std__basic_ostream_char__std__char_traits_char__* std55;
      __VERIFIER_nondet_memory(&std55, sizeof(std55));
      int c56 = 0;
      __retval1 = c56;
      int t57 = __retval1;
      int ret_val58 = t57;
      {
        // externalized std:: op: std::deque<int, std::allocator<int> >::~deque()
        __VERIFIER_nondet_memory(&second4, sizeof(second4));
      }
      {
        // externalized std:: op: std::deque<int, std::allocator<int> >::~deque()
        __VERIFIER_nondet_memory(&first2, sizeof(first2));
      }
      return ret_val58;
  int t59 = __retval1;
  return t59;
}

