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
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_int__;
struct std__less_int_;
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__multiset_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[16] = "myset contains:";
char _str_1[2] = " ";
char _str_2[18] = "myset.size() == 0";
char _str_3[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multiset/multiset-clear/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[12] = "*it == 1101";
char _str_5[18] = "myset.size() == 1";
char _str_6[18] = "myset.size() == 2";
char _str_7[12] = "*it == 2202";
char _str_8[17] = "\nmyset contains:";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__multiset_int__std__less_int___std__allocator_int__ myset2;
  struct std___Rb_tree_const_iterator_int_ it3;
  int ref_tmp04;
  struct std___Rb_tree_const_iterator_int_ agg_tmp05;
  int ref_tmp16;
  struct std___Rb_tree_const_iterator_int_ agg_tmp17;
  int ref_tmp28;
  struct std___Rb_tree_const_iterator_int_ agg_tmp29;
  int ref_tmp510;
  struct std___Rb_tree_const_iterator_int_ agg_tmp311;
  struct std___Rb_tree_const_iterator_int_ ref_tmp612;
  int ref_tmp713;
  struct std___Rb_tree_const_iterator_int_ agg_tmp414;
  struct std___Rb_tree_const_iterator_int_ agg_tmp515;
  int c16 = 0;
  __retval1 = c16;
  // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::multiset()
  __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    // externalized std:: op: std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    int c17 = 100;
    ref_tmp04 = c17;
    struct std___Rb_tree_const_iterator_int_ std18;
    __VERIFIER_nondet_memory(&std18, sizeof(std18));
    agg_tmp05 = std18;
    int c19 = 200;
    ref_tmp16 = c19;
    struct std___Rb_tree_const_iterator_int_ std20;
    __VERIFIER_nondet_memory(&std20, sizeof(std20));
    agg_tmp17 = std20;
    int c21 = 300;
    ref_tmp28 = c21;
    struct std___Rb_tree_const_iterator_int_ std22;
    __VERIFIER_nondet_memory(&std22, sizeof(std22));
    agg_tmp29 = std22;
    char* cast23 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std24;
    __VERIFIER_nondet_memory(&std24, sizeof(std24));
      struct std___Rb_tree_const_iterator_int_ ref_tmp325;
      struct std___Rb_tree_const_iterator_int_ ref_tmp426;
      struct std___Rb_tree_const_iterator_int_ std27;
      __VERIFIER_nondet_memory(&std27, sizeof(std27));
      ref_tmp325 = std27;
      struct std___Rb_tree_const_iterator_int_* std28;
      __VERIFIER_nondet_memory(&std28, sizeof(std28));
      while (1) {
        struct std___Rb_tree_const_iterator_int_ std30;
        __VERIFIER_nondet_memory(&std30, sizeof(std30));
        ref_tmp426 = std30;
        _Bool std31;
        __VERIFIER_nondet_memory(&std31, sizeof(std31));
        _Bool u32 = !std31;
        if (!u32) break;
        char* cast33 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std34;
        __VERIFIER_nondet_memory(&std34, sizeof(std34));
        int* std35;
        __VERIFIER_nondet_memory(&std35, sizeof(std35));
        int t36 = *std35;
        struct std__basic_ostream_char__std__char_traits_char__* std37;
        __VERIFIER_nondet_memory(&std37, sizeof(std37));
      for_step29: ;
        struct std___Rb_tree_const_iterator_int_* std38;
        __VERIFIER_nondet_memory(&std38, sizeof(std38));
      }
    // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::clear()
    __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    unsigned long std39 = __VERIFIER_nondet_unsigned_long();
    unsigned long c40 = 0;
    _Bool c41 = ((std39 == c40)) ? 1 : 0;
    if (c41) {
    } else {
      char* cast42 = (char*)&(_str_2);
      char* c43 = _str_3;
      unsigned int c44 = 27;
      char* cast45 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast42, c43, c44, cast45);
    }
    int c46 = 1101;
    ref_tmp510 = c46;
    struct std___Rb_tree_const_iterator_int_ std47;
    __VERIFIER_nondet_memory(&std47, sizeof(std47));
    agg_tmp311 = std47;
    struct std___Rb_tree_const_iterator_int_ std48;
    __VERIFIER_nondet_memory(&std48, sizeof(std48));
    ref_tmp612 = std48;
    struct std___Rb_tree_const_iterator_int_* std49;
    __VERIFIER_nondet_memory(&std49, sizeof(std49));
    int* std50;
    __VERIFIER_nondet_memory(&std50, sizeof(std50));
    int t51 = *std50;
    int c52 = 1101;
    _Bool c53 = ((t51 == c52)) ? 1 : 0;
    if (c53) {
    } else {
      char* cast54 = (char*)&(_str_4);
      char* c55 = _str_3;
      unsigned int c56 = 30;
      char* cast57 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast54, c55, c56, cast57);
    }
    unsigned long std58 = __VERIFIER_nondet_unsigned_long();
    unsigned long c59 = 1;
    _Bool c60 = ((std58 == c59)) ? 1 : 0;
    if (c60) {
    } else {
      char* cast61 = (char*)&(_str_5);
      char* c62 = _str_3;
      unsigned int c63 = 31;
      char* cast64 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast61, c62, c63, cast64);
    }
    int c65 = 2202;
    ref_tmp713 = c65;
    struct std___Rb_tree_const_iterator_int_ std66;
    __VERIFIER_nondet_memory(&std66, sizeof(std66));
    agg_tmp414 = std66;
    unsigned long std67 = __VERIFIER_nondet_unsigned_long();
    unsigned long c68 = 2;
    _Bool c69 = ((std67 == c68)) ? 1 : 0;
    if (c69) {
    } else {
      char* cast70 = (char*)&(_str_6);
      char* c71 = _str_3;
      unsigned int c72 = 33;
      char* cast73 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast70, c71, c72, cast73);
    }
    int* std74;
    __VERIFIER_nondet_memory(&std74, sizeof(std74));
    int t75 = *std74;
    int c76 = 1101;
    _Bool c77 = ((t75 == c76)) ? 1 : 0;
    if (c77) {
    } else {
      char* cast78 = (char*)&(_str_4);
      char* c79 = _str_3;
      unsigned int c80 = 34;
      char* cast81 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast78, c79, c80, cast81);
    }
    int c82 = 0;
    struct std___Rb_tree_const_iterator_int_ std83;
    __VERIFIER_nondet_memory(&std83, sizeof(std83));
    agg_tmp515 = std83;
    int* std84;
    __VERIFIER_nondet_memory(&std84, sizeof(std84));
    int t85 = *std84;
    int c86 = 2202;
    _Bool c87 = ((t85 == c86)) ? 1 : 0;
    if (c87) {
    } else {
      char* cast88 = (char*)&(_str_7);
      char* c89 = _str_3;
      unsigned int c90 = 36;
      char* cast91 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast88, c89, c90, cast91);
    }
    char* cast92 = (char*)&(_str_8);
    struct std__basic_ostream_char__std__char_traits_char__* std93;
    __VERIFIER_nondet_memory(&std93, sizeof(std93));
      struct std___Rb_tree_const_iterator_int_ ref_tmp894;
      struct std___Rb_tree_const_iterator_int_ ref_tmp995;
      struct std___Rb_tree_const_iterator_int_ std96;
      __VERIFIER_nondet_memory(&std96, sizeof(std96));
      ref_tmp894 = std96;
      struct std___Rb_tree_const_iterator_int_* std97;
      __VERIFIER_nondet_memory(&std97, sizeof(std97));
      while (1) {
        struct std___Rb_tree_const_iterator_int_ std99;
        __VERIFIER_nondet_memory(&std99, sizeof(std99));
        ref_tmp995 = std99;
        _Bool std100;
        __VERIFIER_nondet_memory(&std100, sizeof(std100));
        _Bool u101 = !std100;
        if (!u101) break;
        char* cast102 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std103;
        __VERIFIER_nondet_memory(&std103, sizeof(std103));
        int* std104;
        __VERIFIER_nondet_memory(&std104, sizeof(std104));
        int t105 = *std104;
        struct std__basic_ostream_char__std__char_traits_char__* std106;
        __VERIFIER_nondet_memory(&std106, sizeof(std106));
      for_step98: ;
        struct std___Rb_tree_const_iterator_int_* std107;
        __VERIFIER_nondet_memory(&std107, sizeof(std107));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std108;
    __VERIFIER_nondet_memory(&std108, sizeof(std108));
    int c109 = 0;
    __retval1 = c109;
    int t110 = __retval1;
    int ret_val111 = t110;
    {
      // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::~multiset()
      __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    }
    return ret_val111;
  int t112 = __retval1;
  return t112;
}

