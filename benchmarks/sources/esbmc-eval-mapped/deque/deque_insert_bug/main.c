extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Deque_iterator_int__int____int___ { int* _M_cur; int* _M_first; int* _M_last; int** _M_node; };
struct std___Deque_iterator_int_int___int___ { int* _M_cur; int* _M_first; int* _M_last; int** _M_node; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____std__allocator_int__ { struct std___Deque_iterator_int__int____int___ _M_first; struct std___Deque_iterator_int__int____int___* _M_cur; struct std__allocator_int_* _M_alloc; };
struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_ { struct std___Deque_iterator_int__int____int___ _M_first; struct std___Deque_iterator_int__int____int___* _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____cmp_cat____unspec { unsigned char __field0; };
struct std____detail____move_iter_cat_std___Deque_iterator_int__int____int____;
struct std____new_allocator_int_;
struct std____new_allocator_int___;
struct std__allocator_int_ { unsigned char __field0; };
struct std__allocator_int___ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__move_iterator_std___Deque_iterator_int__int____int____ { struct std___Deque_iterator_int__int____int___ _M_current; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____imove___IterMove { unsigned char __field0; };
struct std__strong_ordering { char _M_value; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl_data { int** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_int__int____int___ _M_start; struct std___Deque_iterator_int__int____int___ _M_finish; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl { struct std___Deque_base_int__std__allocator_int_____Deque_impl_data __field0; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };
struct std___Deque_base_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int_____Deque_impl _M_impl; };
struct std__deque_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int__ __field0; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

struct std____cmp_cat____unspec __const_main_agg_tmp8;
struct std____cmp_cat____unspec __const__ZStssRKSt15_Deque_iteratorIiRiPiES4__agg_tmp1;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[10] = "*it != 10";
char _str_1[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_insert_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[17] = "mydeque[2] != 20";
char _str_3[17] = "mydeque[2] != 30";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[18] = "mydeque contains:";
char _str_5[2] = " ";
char _str_6[49] = "cannot create std::vector larger than max_size()";
char _str_7[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_8[9] = "__n >= 0";
char _str_9[48] = "cannot create std::deque larger than max_size()";
char _str_10[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE5frontEv[77] = "reference std::deque<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_11[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEE4backEv[76] = "reference std::deque<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_12[32] = "deque::_M_new_elements_at_front";
char _str_13[31] = "deque::_M_new_elements_at_back";
struct std__ranges____imove___IterMove _ZNSt6ranges4_Cpo9iter_moveE;
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEEixEm[91] = "reference std::deque<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_14[19] = "__n < this->size()";
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
  struct std___Deque_iterator_int__int____int___ ref_tmp04;
  struct std___Deque_iterator_int__int____int___ ref_tmp15;
  struct std___Deque_iterator_int_int___int___ agg_tmp06;
  int ref_tmp27;
  struct std___Deque_iterator_int_int___int___ agg_tmp18;
  int ref_tmp39;
  struct std___Deque_iterator_int__int____int___ agg_tmp210;
  struct std___Deque_iterator_int__int____int___ ref_tmp411;
  struct std___Deque_iterator_int__int____int___ ref_tmp512;
  struct std__vector_int__std__allocator_int__ myvector13;
  int ref_tmp614;
  struct std__allocator_int_ ref_tmp715;
  struct std___Deque_iterator_int_int___int___ agg_tmp316;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp417;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp518;
  struct std___Deque_iterator_int__int____int___ agg_tmp619;
  int c20 = 0;
  __retval1 = c20;
  // externalized std:: op: std::deque<int, std::allocator<int> >::deque()
  __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
    // externalized std:: op: std::_Deque_iterator<int, int&, int*>::_Deque_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
      int i21;
      int c22 = 1;
      i21 = c22;
      while (1) {
        int t24 = i21;
        int c25 = 6;
        _Bool c26 = ((t24 < c25)) ? 1 : 0;
        if (!c26) break;
        // externalized std:: op: std::deque<int, std::allocator<int> >::push_back(int const&)
        __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
        __VERIFIER_nondet_memory(&i21, sizeof(i21));
      for_step23: ;
        int t27 = i21;
        int u28 = t27 + 1;
        i21 = u28;
      }
    struct std___Deque_iterator_int__int____int___ std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    ref_tmp04 = std29;
    struct std___Deque_iterator_int__int____int___* std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
    struct std___Deque_iterator_int__int____int___* std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    // externalized std:: op: std::_Deque_iterator<int, int const&, int const*>::_Deque_iterator<std::_Deque_iterator<int, int&, int*>, void>(std::_Deque_iterator<int, int&, int*> const&)
    __VERIFIER_nondet_memory(&agg_tmp06, sizeof(agg_tmp06));
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    int c32 = 10;
    ref_tmp27 = c32;
    struct std___Deque_iterator_int_int___int___ t33 = agg_tmp06;
    struct std___Deque_iterator_int__int____int___ std34;
    __VERIFIER_nondet_memory(&std34, sizeof(std34));
    ref_tmp15 = std34;
    struct std___Deque_iterator_int__int____int___* std35;
    __VERIFIER_nondet_memory(&std35, sizeof(std35));
    int* std36;
    __VERIFIER_nondet_memory(&std36, sizeof(std36));
    int t37 = *std36;
    int c38 = 10;
    _Bool c39 = ((t37 != c38)) ? 1 : 0;
    if (c39) {
    } else {
      char* cast40 = (char*)&(_str);
      char* c41 = (char*)_str_1;
      unsigned int c42 = 27;
      char* cast43 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast40, c41, c42, cast43);
    }
    // externalized std:: op: std::_Deque_iterator<int, int const&, int const*>::_Deque_iterator<std::_Deque_iterator<int, int&, int*>, void>(std::_Deque_iterator<int, int&, int*> const&)
    __VERIFIER_nondet_memory(&agg_tmp18, sizeof(agg_tmp18));
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    unsigned long c44 = 2;
    int c45 = 20;
    ref_tmp39 = c45;
    struct std___Deque_iterator_int_int___int___ t46 = agg_tmp18;
    struct std___Deque_iterator_int__int____int___ std47;
    __VERIFIER_nondet_memory(&std47, sizeof(std47));
    agg_tmp210 = std47;
    unsigned long c48 = 2;
    int* std49;
    __VERIFIER_nondet_memory(&std49, sizeof(std49));
    int t50 = *std49;
    int c51 = 20;
    _Bool c52 = ((t50 != c51)) ? 1 : 0;
    if (c52) {
    } else {
      char* cast53 = (char*)&(_str_2);
      char* c54 = (char*)_str_1;
      unsigned int c55 = 31;
      char* cast56 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast53, c54, c55, cast56);
    }
    struct std___Deque_iterator_int__int____int___ std57;
    __VERIFIER_nondet_memory(&std57, sizeof(std57));
    ref_tmp512 = std57;
    long c58 = 2;
    struct std___Deque_iterator_int__int____int___ std59;
    __VERIFIER_nondet_memory(&std59, sizeof(std59));
    ref_tmp411 = std59;
    struct std___Deque_iterator_int__int____int___* std60;
    __VERIFIER_nondet_memory(&std60, sizeof(std60));
    unsigned long c61 = 2;
    int c62 = 30;
    ref_tmp614 = c62;
    // externalized std:: op: std::allocator<int>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp715, sizeof(ref_tmp715));
      // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, int const&, std::allocator<int> const&)
      __VERIFIER_nondet_memory(&myvector13, sizeof(myvector13));
      __VERIFIER_nondet_memory(&ref_tmp614, sizeof(ref_tmp614));
      __VERIFIER_nondet_memory(&ref_tmp715, sizeof(ref_tmp715));
    {
      // externalized std:: op: std::allocator<int>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp715, sizeof(ref_tmp715));
    }
      // externalized std:: op: std::_Deque_iterator<int, int const&, int const*>::_Deque_iterator<std::_Deque_iterator<int, int&, int*>, void>(std::_Deque_iterator<int, int&, int*> const&)
      __VERIFIER_nondet_memory(&agg_tmp316, sizeof(agg_tmp316));
      __VERIFIER_nondet_memory(&it3, sizeof(it3));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std63;
      __VERIFIER_nondet_memory(&std63, sizeof(std63));
      agg_tmp417 = std63;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std64;
      __VERIFIER_nondet_memory(&std64, sizeof(std64));
      agg_tmp518 = std64;
      struct std___Deque_iterator_int_int___int___ t65 = agg_tmp316;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t66 = agg_tmp417;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t67 = agg_tmp518;
      struct std___Deque_iterator_int__int____int___ std68;
      __VERIFIER_nondet_memory(&std68, sizeof(std68));
      agg_tmp619 = std68;
      unsigned long c69 = 2;
      int* std70;
      __VERIFIER_nondet_memory(&std70, sizeof(std70));
      int t71 = *std70;
      int c72 = 30;
      _Bool c73 = ((t71 != c72)) ? 1 : 0;
      if (c73) {
      } else {
        char* cast74 = (char*)&(_str_3);
        char* c75 = (char*)_str_1;
        unsigned int c76 = 38;
        char* cast77 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast74, c75, c76, cast77);
      }
      char* cast78 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* std79;
      __VERIFIER_nondet_memory(&std79, sizeof(std79));
        struct std___Deque_iterator_int__int____int___ ref_tmp880;
        struct std__strong_ordering agg_tmp781;
        struct std___Deque_iterator_int__int____int___ ref_tmp982;
        struct std____cmp_cat____unspec agg_tmp883;
        struct std___Deque_iterator_int__int____int___ std84;
        __VERIFIER_nondet_memory(&std84, sizeof(std84));
        ref_tmp880 = std84;
        struct std___Deque_iterator_int__int____int___* std85;
        __VERIFIER_nondet_memory(&std85, sizeof(std85));
        while (1) {
          struct std___Deque_iterator_int__int____int___ std87;
          __VERIFIER_nondet_memory(&std87, sizeof(std87));
          ref_tmp982 = std87;
          struct std__strong_ordering std88;
          __VERIFIER_nondet_memory(&std88, sizeof(std88));
          agg_tmp781 = std88;
          agg_tmp883 = *&__const_main_agg_tmp8; // copy
          struct std__strong_ordering t89 = agg_tmp781;
          struct std____cmp_cat____unspec t90 = agg_tmp883;
          _Bool std91;
          __VERIFIER_nondet_memory(&std91, sizeof(std91));
          if (!std91) break;
          char* cast92 = (char*)&(_str_5);
          struct std__basic_ostream_char__std__char_traits_char__* std93;
          __VERIFIER_nondet_memory(&std93, sizeof(std93));
          int* std94;
          __VERIFIER_nondet_memory(&std94, sizeof(std94));
          int t95 = *std94;
          struct std__basic_ostream_char__std__char_traits_char__* std96;
          __VERIFIER_nondet_memory(&std96, sizeof(std96));
        for_step86: ;
          struct std___Deque_iterator_int__int____int___* std97;
          __VERIFIER_nondet_memory(&std97, sizeof(std97));
        }
      struct std__basic_ostream_char__std__char_traits_char__* std98;
      __VERIFIER_nondet_memory(&std98, sizeof(std98));
      int c99 = 0;
      __retval1 = c99;
      int t100 = __retval1;
      int ret_val101 = t100;
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&myvector13, sizeof(myvector13));
      }
      {
        // externalized std:: op: std::deque<int, std::allocator<int> >::~deque()
        __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
      }
      return ret_val101;
  int t102 = __retval1;
  return t102;
}

