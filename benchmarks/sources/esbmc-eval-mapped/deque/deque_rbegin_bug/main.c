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
struct std____cmp_cat____unspec { unsigned char __field0; };
struct std____new_allocator_int_;
struct std____new_allocator_int___;
struct std__allocator_int_;
struct std__allocator_int___ { unsigned char __field0; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__iterator_std__random_access_iterator_tag__int__long__int____int___;
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__reverse_iterator_std___Deque_iterator_int__int____int____ { struct std___Deque_iterator_int__int____int___ current; };
struct std__strong_ordering { char _M_value; };
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

struct std____cmp_cat____unspec __const_main_agg_tmp1;
struct std____cmp_cat____unspec __const__ZStssRKSt15_Deque_iteratorIiRiPiES4__agg_tmp1;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[18] = "mydeque contains:";
char _str_1[10] = "*rit != 5";
char _str_2[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_rbegin_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[2] = " ";
char _str_4[10] = "*rit != n";
char _str_5[48] = "cannot create std::deque larger than max_size()";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0: ;
  int __retval1;
  struct std__deque_int__std__allocator_int__ mydeque2;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____ rit3;
  struct std__reverse_iterator_std___Deque_iterator_int__int____int____ ref_tmp04;
  int n5;
  int c6 = 0;
  __retval1 = c6;
  // externalized std:: op: std::deque<int, std::allocator<int> >::deque()
  __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
    // externalized std:: op: std::reverse_iterator<std::_Deque_iterator<int, int&, int*> >::reverse_iterator()
    __VERIFIER_nondet_memory(&rit3, sizeof(rit3));
      int i7;
      int c8 = 1;
      i7 = c8;
      while (1) {
        int t10 = i7;
        int c11 = 5;
        _Bool c12 = ((t10 <= c11)) ? 1 : 0;
        if (!c12) break;
        // externalized std:: op: std::deque<int, std::allocator<int> >::push_back(int const&)
        __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
        __VERIFIER_nondet_memory(&i7, sizeof(i7));
      for_step9: ;
        int t13 = i7;
        int u14 = t13 + 1;
        i7 = u14;
      }
    char* cast15 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std16;
    __VERIFIER_nondet_memory(&std16, sizeof(std16));
    struct std__reverse_iterator_std___Deque_iterator_int__int____int____ std17;
    __VERIFIER_nondet_memory(&std17, sizeof(std17));
    ref_tmp04 = std17;
    struct std__reverse_iterator_std___Deque_iterator_int__int____int____* std18;
    __VERIFIER_nondet_memory(&std18, sizeof(std18));
    int* std19;
    __VERIFIER_nondet_memory(&std19, sizeof(std19));
    int t20 = *std19;
    int c21 = 5;
    _Bool c22 = ((t20 != c21)) ? 1 : 0;
    if (c22) {
    } else {
      char* cast23 = (char*)&(_str_1);
      char* c24 = (char*)_str_2;
      unsigned int c25 = 23;
      char* cast26 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast23, c24, c25, cast26);
    }
    int c27 = 5;
    n5 = c27;
      struct std__strong_ordering agg_tmp028;
      struct std__reverse_iterator_std___Deque_iterator_int__int____int____ ref_tmp129;
      struct std____cmp_cat____unspec agg_tmp130;
      while (1) {
        struct std__reverse_iterator_std___Deque_iterator_int__int____int____ std31;
        __VERIFIER_nondet_memory(&std31, sizeof(std31));
        ref_tmp129 = std31;
        struct std__strong_ordering std32;
        __VERIFIER_nondet_memory(&std32, sizeof(std32));
        agg_tmp028 = std32;
        agg_tmp130 = *&__const_main_agg_tmp1; // copy
        struct std__strong_ordering t33 = agg_tmp028;
        struct std____cmp_cat____unspec t34 = agg_tmp130;
        _Bool std35;
        __VERIFIER_nondet_memory(&std35, sizeof(std35));
        if (!std35) break;
          char* cast36 = (char*)&(_str_3);
          struct std__basic_ostream_char__std__char_traits_char__* std37;
          __VERIFIER_nondet_memory(&std37, sizeof(std37));
          int* std38;
          __VERIFIER_nondet_memory(&std38, sizeof(std38));
          int t39 = *std38;
          struct std__basic_ostream_char__std__char_traits_char__* std40;
          __VERIFIER_nondet_memory(&std40, sizeof(std40));
          int* std41;
          __VERIFIER_nondet_memory(&std41, sizeof(std41));
          int t42 = *std41;
          int t43 = n5;
          _Bool c44 = ((t42 != t43)) ? 1 : 0;
          if (c44) {
          } else {
            char* cast45 = (char*)&(_str_4);
            char* c46 = (char*)_str_2;
            unsigned int c47 = 28;
            char* cast48 = (char*)&(__PRETTY_FUNCTION___main);
            reach_error();
            __assert_fail(cast45, c46, c47, cast48);
          }
          struct std__reverse_iterator_std___Deque_iterator_int__int____int____* std49;
          __VERIFIER_nondet_memory(&std49, sizeof(std49));
          int t50 = n5;
          int u51 = t50 - 1;
          n5 = u51;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std52;
    __VERIFIER_nondet_memory(&std52, sizeof(std52));
    int c53 = 0;
    __retval1 = c53;
    int t54 = __retval1;
    int ret_val55 = t54;
    {
      // externalized std:: op: std::deque<int, std::allocator<int> >::~deque()
      __VERIFIER_nondet_memory(&mydeque2, sizeof(mydeque2));
    }
    return ret_val55;
  int t56 = __retval1;
  return t56;
}

