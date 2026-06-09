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
struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ { unsigned int* _M_cur; unsigned int* _M_first; unsigned int* _M_last; unsigned int** _M_node; };
struct std___Deque_iterator_unsigned_int_unsigned_int___unsigned_int___ { unsigned int* _M_cur; unsigned int* _M_first; unsigned int* _M_last; unsigned int** _M_node; };
struct std____new_allocator_unsigned_int_;
struct std____new_allocator_unsigned_int___;
struct std__allocator_unsigned_int_;
struct std__allocator_unsigned_int___ { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data { unsigned int** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ _M_start; struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ _M_finish; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl { struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl_data __field0; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__ { struct std___Deque_base_unsigned_int__std__allocator_unsigned_int_____Deque_impl _M_impl; };
struct std__deque_unsigned_int__std__allocator_unsigned_int__ { struct std___Deque_base_unsigned_int__std__allocator_unsigned_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[16] = "mydeque[5] != 7";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_erase_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[21] = "mydeque.front() != 4";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[18] = "mydeque contains:";
char _str_4[2] = " ";
char _str_5[48] = "cannot create std::deque larger than max_size()";
char _str_6[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIjSaIjEE9pop_frontEv[103] = "void std::deque<unsigned int>::pop_front() [_Tp = unsigned int, _Alloc = std::allocator<unsigned int>]";
char _str_7[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt5dequeIjSaIjEE8pop_backEv[102] = "void std::deque<unsigned int>::pop_back() [_Tp = unsigned int, _Alloc = std::allocator<unsigned int>]";
char __PRETTY_FUNCTION____ZNSt5dequeIjSaIjEEixEm[118] = "reference std::deque<unsigned int>::operator[](size_type) [_Tp = unsigned int, _Alloc = std::allocator<unsigned int>]";
char _str_8[19] = "__n < this->size()";
char __PRETTY_FUNCTION____ZNSt5dequeIjSaIjEE5frontEv[104] = "reference std::deque<unsigned int>::front() [_Tp = unsigned int, _Alloc = std::allocator<unsigned int>]";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  unsigned int i2;
  struct std__deque_unsigned_int__std__allocator_unsigned_int__ mydeque3;
  struct std___Deque_iterator_unsigned_int_unsigned_int___unsigned_int___ agg_tmp04;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ ref_tmp05;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ ref_tmp16;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp17;
  struct std___Deque_iterator_unsigned_int_unsigned_int___unsigned_int___ agg_tmp28;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ ref_tmp29;
  struct std___Deque_iterator_unsigned_int_unsigned_int___unsigned_int___ agg_tmp310;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ ref_tmp311;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ ref_tmp412;
  struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ agg_tmp413;
  int c14 = 0;
  __retval1 = c14;
  // externalized std:: op: std::deque<unsigned int, std::allocator<unsigned int> >::deque()
  __VERIFIER_nondet_memory(&mydeque3, sizeof(mydeque3));
      unsigned int c15 = 1;
      i2 = c15;
      while (1) {
        unsigned int t17 = i2;
        unsigned int c18 = 10;
        _Bool c19 = ((t17 <= c18)) ? 1 : 0;
        if (!c19) break;
        // externalized std:: op: std::deque<unsigned int, std::allocator<unsigned int> >::push_back(unsigned int const&)
        __VERIFIER_nondet_memory(&mydeque3, sizeof(mydeque3));
        __VERIFIER_nondet_memory(&i2, sizeof(i2));
      for_step16: ;
        unsigned int t20 = i2;
        unsigned int u21 = t20 + 1;
        i2 = u21;
      }
    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std22;
    __VERIFIER_nondet_memory(&std22, sizeof(std22));
    ref_tmp16 = std22;
    long c23 = 5;
    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std24;
    __VERIFIER_nondet_memory(&std24, sizeof(std24));
    ref_tmp05 = std24;
    // externalized std:: op: std::_Deque_iterator<unsigned int, unsigned int const&, unsigned int const*>::_Deque_iterator<std::_Deque_iterator<unsigned int, unsigned int&, unsigned int*>, void>(std::_Deque_iterator<unsigned int, unsigned int&, unsigned int*> const&)
    __VERIFIER_nondet_memory(&agg_tmp04, sizeof(agg_tmp04));
    __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
    struct std___Deque_iterator_unsigned_int_unsigned_int___unsigned_int___ t25 = agg_tmp04;
    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    agg_tmp17 = std26;
    unsigned long c27 = 5;
    unsigned int* std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    unsigned int t29 = *std28;
    unsigned int c30 = 7;
    _Bool c31 = ((t29 != c30)) ? 1 : 0;
    if (c31) {
    } else {
      char* cast32 = (char*)&(_str);
      char* c33 = _str_1;
      unsigned int c34 = 24;
      char* cast35 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast32, c33, c34, cast35);
    }
    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std36;
    __VERIFIER_nondet_memory(&std36, sizeof(std36));
    ref_tmp29 = std36;
    // externalized std:: op: std::_Deque_iterator<unsigned int, unsigned int const&, unsigned int const*>::_Deque_iterator<std::_Deque_iterator<unsigned int, unsigned int&, unsigned int*>, void>(std::_Deque_iterator<unsigned int, unsigned int&, unsigned int*> const&)
    __VERIFIER_nondet_memory(&agg_tmp28, sizeof(agg_tmp28));
    __VERIFIER_nondet_memory(&ref_tmp29, sizeof(ref_tmp29));
    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std37;
    __VERIFIER_nondet_memory(&std37, sizeof(std37));
    ref_tmp412 = std37;
    long c38 = 3;
    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std39;
    __VERIFIER_nondet_memory(&std39, sizeof(std39));
    ref_tmp311 = std39;
    // externalized std:: op: std::_Deque_iterator<unsigned int, unsigned int const&, unsigned int const*>::_Deque_iterator<std::_Deque_iterator<unsigned int, unsigned int&, unsigned int*>, void>(std::_Deque_iterator<unsigned int, unsigned int&, unsigned int*> const&)
    __VERIFIER_nondet_memory(&agg_tmp310, sizeof(agg_tmp310));
    __VERIFIER_nondet_memory(&ref_tmp311, sizeof(ref_tmp311));
    struct std___Deque_iterator_unsigned_int_unsigned_int___unsigned_int___ t40 = agg_tmp28;
    struct std___Deque_iterator_unsigned_int_unsigned_int___unsigned_int___ t41 = agg_tmp310;
    struct std___Deque_iterator_unsigned_int__unsigned_int____unsigned_int___ std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    agg_tmp413 = std42;
    unsigned int* std43;
    __VERIFIER_nondet_memory(&std43, sizeof(std43));
    unsigned int t44 = *std43;
    unsigned int c45 = 4;
    _Bool c46 = ((t44 != c45)) ? 1 : 0;
    if (c46) {
    } else {
      char* cast47 = (char*)&(_str_2);
      char* c48 = _str_1;
      unsigned int c49 = 28;
      char* cast50 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast47, c48, c49, cast50);
    }
    char* cast51 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std52;
    __VERIFIER_nondet_memory(&std52, sizeof(std52));
      unsigned int c53 = 0;
      i2 = c53;
      while (1) {
        unsigned int t55 = i2;
        unsigned long cast56 = (unsigned long)t55;
        unsigned long std57 = __VERIFIER_nondet_unsigned_long();
        _Bool c58 = ((cast56 < std57)) ? 1 : 0;
        if (!c58) break;
        char* cast59 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* std60;
        __VERIFIER_nondet_memory(&std60, sizeof(std60));
        unsigned int t61 = i2;
        unsigned long cast62 = (unsigned long)t61;
        unsigned int* std63;
        __VERIFIER_nondet_memory(&std63, sizeof(std63));
        unsigned int t64 = *std63;
        struct std__basic_ostream_char__std__char_traits_char__* std65;
        __VERIFIER_nondet_memory(&std65, sizeof(std65));
      for_step54: ;
        unsigned int t66 = i2;
        unsigned int u67 = t66 + 1;
        i2 = u67;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std68;
    __VERIFIER_nondet_memory(&std68, sizeof(std68));
    int c69 = 0;
    __retval1 = c69;
    int t70 = __retval1;
    int ret_val71 = t70;
    {
      // externalized std:: op: std::deque<unsigned int, std::allocator<unsigned int> >::~deque()
      __VERIFIER_nondet_memory(&mydeque3, sizeof(mydeque3));
    }
    return ret_val71;
  int t72 = __retval1;
  return t72;
}

