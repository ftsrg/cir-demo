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
struct std___Deque_iterator_double__double____double___ { double* _M_cur; double* _M_first; double* _M_last; double** _M_node; };
struct std____new_allocator_double_;
struct std____new_allocator_double___;
struct std__allocator_double_;
struct std__allocator_double___ { unsigned char __field0; };
struct std__iterator_std__output_iterator_tag__void__void__void__void_;
struct std__ostream_iterator_double__char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__* _M_stream; char* _M_string; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Deque_base_double__std__allocator_double_____Deque_impl_data { double** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_double__double____double___ _M_start; struct std___Deque_iterator_double__double____double___ _M_finish; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Deque_base_double__std__allocator_double_____Deque_impl { struct std___Deque_base_double__std__allocator_double_____Deque_impl_data __field0; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std___Deque_base_double__std__allocator_double__ { struct std___Deque_base_double__std__allocator_double_____Deque_impl _M_impl; };
struct std__deque_double__std__allocator_double__ { struct std___Deque_base_double__std__allocator_double__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[2] = " ";
char _str_1[18] = "values contains: ";
char _str_2[36] = "\nAfter pop_front, values contains: ";
char _str_3[44] = "\nAfter values[ 1 ] = 5.4, values contains: ";
char _str_4[48] = "cannot create std::deque larger than max_size()";
char _str_5[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIdSaIdEE5frontEv[86] = "reference std::deque<double>::front() [_Tp = double, _Alloc = std::allocator<double>]";
char _str_6[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt5dequeIdSaIdEE4backEv[85] = "reference std::deque<double>::back() [_Tp = double, _Alloc = std::allocator<double>]";
char __PRETTY_FUNCTION____ZNSt5dequeIdSaIdEEixEm[100] = "reference std::deque<double>::operator[](size_type) [_Tp = double, _Alloc = std::allocator<double>]";
char _str_7[19] = "__n < this->size()";
char __PRETTY_FUNCTION____ZNSt5dequeIdSaIdEE9pop_frontEv[85] = "void std::deque<double>::pop_front() [_Tp = double, _Alloc = std::allocator<double>]";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__deque_double__std__allocator_double__ values2;
  struct std__ostream_iterator_double__char__std__char_traits_char__ output3;
  double ref_tmp04;
  double ref_tmp15;
  double ref_tmp26;
  struct std___Deque_iterator_double__double____double___ agg_tmp07;
  struct std___Deque_iterator_double__double____double___ agg_tmp18;
  struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp29;
  struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp310;
  struct std___Deque_iterator_double__double____double___ agg_tmp411;
  struct std___Deque_iterator_double__double____double___ agg_tmp512;
  struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp613;
  struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp714;
  int c15 = 0;
  __retval1 = c15;
  // externalized std:: op: std::deque<double, std::allocator<double> >::deque()
  __VERIFIER_nondet_memory(&values2, sizeof(values2));
    char* cast16 = (char*)&(_str);
    // externalized std:: op: std::ostream_iterator<double, char, std::char_traits<char> >::ostream_iterator(std::ostream&, char const*)
    __VERIFIER_nondet_memory(&output3, sizeof(output3));
    __VERIFIER_nondet_memory(&_ZSt4cout, sizeof(*&_ZSt4cout));
    __VERIFIER_nondet_memory(cast16, sizeof(*cast16));
    double c17 = 0x1.199999999999ap1;
    ref_tmp04 = c17;
    // externalized std:: op: std::deque<double, std::allocator<double> >::push_front(double&&)
    __VERIFIER_nondet_memory(&values2, sizeof(values2));
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    double c18 = 0x1.cp1;
    ref_tmp15 = c18;
    // externalized std:: op: std::deque<double, std::allocator<double> >::push_front(double&&)
    __VERIFIER_nondet_memory(&values2, sizeof(values2));
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    double c19 = 0x1.199999999999ap0;
    ref_tmp26 = c19;
    // externalized std:: op: std::deque<double, std::allocator<double> >::push_back(double&&)
    __VERIFIER_nondet_memory(&values2, sizeof(values2));
    __VERIFIER_nondet_memory(&ref_tmp26, sizeof(ref_tmp26));
    char* cast20 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std21;
    __VERIFIER_nondet_memory(&std21, sizeof(std21));
      int i22;
      int c23 = 0;
      i22 = c23;
      while (1) {
        int t25 = i22;
        unsigned long cast26 = (unsigned long)t25;
        unsigned long std27 = __VERIFIER_nondet_unsigned_long();
        _Bool c28 = ((cast26 < std27)) ? 1 : 0;
        if (!c28) break;
        int t29 = i22;
        unsigned long cast30 = (unsigned long)t29;
        double* std31;
        __VERIFIER_nondet_memory(&std31, sizeof(std31));
        double t32 = *std31;
        struct std__basic_ostream_char__std__char_traits_char__* std33;
        __VERIFIER_nondet_memory(&std33, sizeof(std33));
        char c34 = 32;
        struct std__basic_ostream_char__std__char_traits_char__* std35;
        __VERIFIER_nondet_memory(&std35, sizeof(std35));
      for_step24: ;
        int t36 = i22;
        int u37 = t36 + 1;
        i22 = u37;
      }
    // externalized std:: op: std::deque<double, std::allocator<double> >::pop_front()
    __VERIFIER_nondet_memory(&values2, sizeof(values2));
    char* cast38 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std39;
    __VERIFIER_nondet_memory(&std39, sizeof(std39));
    struct std___Deque_iterator_double__double____double___ std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    agg_tmp07 = std40;
    struct std___Deque_iterator_double__double____double___ std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
    agg_tmp18 = std41;
    // externalized std:: op: std::ostream_iterator<double, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<double, char, std::char_traits<char> > const&)
    __VERIFIER_nondet_memory(&agg_tmp29, sizeof(agg_tmp29));
    __VERIFIER_nondet_memory(&output3, sizeof(output3));
    struct std___Deque_iterator_double__double____double___ t42 = agg_tmp07;
    struct std___Deque_iterator_double__double____double___ t43 = agg_tmp18;
    struct std__ostream_iterator_double__char__std__char_traits_char__ t44 = agg_tmp29;
    struct std__ostream_iterator_double__char__std__char_traits_char__ std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
    agg_tmp310 = std45;
    double c46 = 0x1.599999999999ap2;
    unsigned long c47 = 1;
    double* std48;
    __VERIFIER_nondet_memory(&std48, sizeof(std48));
    *std48 = c46;
    char* cast49 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std50;
    __VERIFIER_nondet_memory(&std50, sizeof(std50));
    struct std___Deque_iterator_double__double____double___ std51;
    __VERIFIER_nondet_memory(&std51, sizeof(std51));
    agg_tmp411 = std51;
    struct std___Deque_iterator_double__double____double___ std52;
    __VERIFIER_nondet_memory(&std52, sizeof(std52));
    agg_tmp512 = std52;
    // externalized std:: op: std::ostream_iterator<double, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<double, char, std::char_traits<char> > const&)
    __VERIFIER_nondet_memory(&agg_tmp613, sizeof(agg_tmp613));
    __VERIFIER_nondet_memory(&output3, sizeof(output3));
    struct std___Deque_iterator_double__double____double___ t53 = agg_tmp411;
    struct std___Deque_iterator_double__double____double___ t54 = agg_tmp512;
    struct std__ostream_iterator_double__char__std__char_traits_char__ t55 = agg_tmp613;
    struct std__ostream_iterator_double__char__std__char_traits_char__ std56;
    __VERIFIER_nondet_memory(&std56, sizeof(std56));
    agg_tmp714 = std56;
    struct std__basic_ostream_char__std__char_traits_char__* std57;
    __VERIFIER_nondet_memory(&std57, sizeof(std57));
    int c58 = 0;
    __retval1 = c58;
    int t59 = __retval1;
    int ret_val60 = t59;
    {
      // externalized std:: op: std::deque<double, std::allocator<double> >::~deque()
      __VERIFIER_nondet_memory(&values2, sizeof(values2));
    }
    return ret_val60;
  int t61 = __retval1;
  return t61;
}

