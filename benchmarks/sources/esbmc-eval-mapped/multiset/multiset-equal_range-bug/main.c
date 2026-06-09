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
struct __gnu_cxx____aligned_membuf_int_ { unsigned char _M_storage[4]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Identity_int_ { unsigned char __field0; };
struct std___Rb_tree_const_iterator_int_ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* _M_t; };
struct std___Rb_tree_iterator_int_ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_std__less_int__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_int_;
struct std____new_allocator_std___Rb_tree_node_int__;
struct std____pair_base_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__;
struct std____pair_base_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_int__;
struct std__less_int_;
struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ { struct std___Rb_tree_const_iterator_int_ first; struct std___Rb_tree_const_iterator_int_ second; };
struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ { struct std___Rb_tree_iterator_int_ first; struct std___Rb_tree_iterator_int_ second; };
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__multiset_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int __const_main_b[5] = {10, 20, 30, 40, 50};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[17] = "*ret.first == 30";
char _str_1[121] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multiset/multiset-equal_range-bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "*ret.second != 40";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[24] = "lower bound points to: ";
char _str_4[24] = "upper bound points to: ";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int b2[5];
  struct std__multiset_int__std__less_int___std__allocator_int__ myset3;
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ ret4;
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ ref_tmp05;
  int ref_tmp16;
  int c7 = 0;
  __retval1 = c7;
  // array copy
  __builtin_memcpy(b2, __const_main_b, (unsigned long)5 * sizeof(__const_main_b[0]));
  int* cast8 = (int*)&(b2);
  int* cast9 = (int*)&(b2);
  int c10 = 5;
  int* ptr11 = &(cast9)[c10];
  // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::multiset<int*>(int*, int*)
  __VERIFIER_nondet_memory(&myset3, sizeof(myset3));
  __VERIFIER_nondet_memory(cast8, sizeof(*cast8));
  __VERIFIER_nondet_memory(ptr11, sizeof(*ptr11));
    // externalized std:: op: _ZNSt4pairISt23_Rb_tree_const_iteratorIiES1_EC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E
    __VERIFIER_nondet_memory(&ret4, sizeof(ret4));
    int c12 = 30;
    ref_tmp16 = c12;
    struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ std13;
    __VERIFIER_nondet_memory(&std13, sizeof(std13));
    ref_tmp05 = std13;
    struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* std14;
    __VERIFIER_nondet_memory(&std14, sizeof(std14));
    int* std15;
    __VERIFIER_nondet_memory(&std15, sizeof(std15));
    int t16 = *std15;
    int c17 = 30;
    _Bool c18 = ((t16 == c17)) ? 1 : 0;
    if (c18) {
    } else {
      char* cast19 = (char*)&(_str);
      char* c20 = _str_1;
      unsigned int c21 = 21;
      char* cast22 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast19, c20, c21, cast22);
    }
    int* std23;
    __VERIFIER_nondet_memory(&std23, sizeof(std23));
    int t24 = *std23;
    int c25 = 40;
    _Bool c26 = ((t24 != c25)) ? 1 : 0;
    if (c26) {
    } else {
      char* cast27 = (char*)&(_str_2);
      char* c28 = _str_1;
      unsigned int c29 = 22;
      char* cast30 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast27, c28, c29, cast30);
    }
    char* cast31 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    int* std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    int t34 = *std33;
    struct std__basic_ostream_char__std__char_traits_char__* std35;
    __VERIFIER_nondet_memory(&std35, sizeof(std35));
    struct std__basic_ostream_char__std__char_traits_char__* std36;
    __VERIFIER_nondet_memory(&std36, sizeof(std36));
    char* cast37 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    int* std39;
    __VERIFIER_nondet_memory(&std39, sizeof(std39));
    int t40 = *std39;
    struct std__basic_ostream_char__std__char_traits_char__* std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
    struct std__basic_ostream_char__std__char_traits_char__* std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    int c43 = 0;
    __retval1 = c43;
    int t44 = __retval1;
    int ret_val45 = t44;
    {
      // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::~multiset()
      __VERIFIER_nondet_memory(&myset3, sizeof(myset3));
    }
    return ret_val45;
  int t46 = __retval1;
  return t46;
}

