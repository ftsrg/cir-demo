extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

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
struct std___Rb_tree_node_int_ { struct std___Rb_tree_node_base __field0; struct __gnu_cxx____aligned_membuf_int_ _M_storage; unsigned char __field2[4]; } __attribute__((packed));
struct std____new_allocator_std___Rb_tree_node_int__;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_int__;
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__less_int_;
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__multiset_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "myset.size() == 0";
char _str_1[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multiset/multiset-find/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "myset.size() == 5";
char _str_3[10] = "*it == 20";
char _str_4[10] = "*it == 50";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[16] = "myset contains:";
char _str_6[2] = " ";
char _str_7[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_tree.h";
char __PRETTY_FUNCTION____ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiE[210] = "iterator std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>>::erase(const_iterator) [_Key = int, _Val = int, _KeyOfValue = std::_Identity<int>, _Compare = std::less<int>, _Alloc = std::allocator<int>]";
char _str_8[20] = "__position != end()";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0: ;
  int __retval1;
  struct std__multiset_int__std__less_int___std__allocator_int__ myset2;
  struct std___Rb_tree_const_iterator_int_ it3;
  int i4;
  struct std___Rb_tree_const_iterator_int_ ref_tmp15;
  int ref_tmp26;
  struct std___Rb_tree_const_iterator_int_ agg_tmp17;
  struct std___Rb_tree_const_iterator_int_ agg_tmp28;
  struct std___Rb_tree_const_iterator_int_ agg_tmp39;
  int ref_tmp310;
  struct std___Rb_tree_const_iterator_int_ agg_tmp411;
  struct std___Rb_tree_const_iterator_int_ ref_tmp412;
  struct std___Rb_tree_const_iterator_int_ agg_tmp513;
  struct std___Rb_tree_const_iterator_int_ agg_tmp614;
  int c15 = 0;
  __retval1 = c15;
  // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::multiset()
  __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    // externalized std:: op: std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    unsigned long std16 = __VERIFIER_nondet_unsigned_long();
    unsigned long c17 = 0;
    _Bool c18 = ((std16 == c17)) ? 1 : 0;
    if (c18) {
    } else {
      char* cast19 = (char*)&(_str);
      char* c20 = (char*)_str_1;
      unsigned int c21 = 18;
      char* cast22 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast19, c20, c21, cast22);
    }
      int ref_tmp023;
      struct std___Rb_tree_const_iterator_int_ agg_tmp024;
      int c25 = 1;
      i4 = c25;
      while (1) {
        int t27 = i4;
        int c28 = 5;
        _Bool c29 = ((t27 <= c28)) ? 1 : 0;
        if (!c29) break;
        int t30 = i4;
        int c31 = 10;
        int b32 = t30 * c31;
        ref_tmp023 = b32;
        struct std___Rb_tree_const_iterator_int_ std33;
        __VERIFIER_nondet_memory(&std33, sizeof(std33));
        agg_tmp024 = std33;
      for_step26: ;
        int t34 = i4;
        int u35 = t34 + 1;
        i4 = u35;
      }
    unsigned long std36 = __VERIFIER_nondet_unsigned_long();
    unsigned long c37 = 5;
    _Bool c38 = ((std36 == c37)) ? 1 : 0;
    if (c38) {
    } else {
      char* cast39 = (char*)&(_str_2);
      char* c40 = (char*)_str_1;
      unsigned int c41 = 21;
      char* cast42 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast39, c40, c41, cast42);
    }
    int c43 = 20;
    ref_tmp26 = c43;
    struct std___Rb_tree_const_iterator_int_ std44;
    __VERIFIER_nondet_memory(&std44, sizeof(std44));
    ref_tmp15 = std44;
    struct std___Rb_tree_const_iterator_int_* std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
    int* std46;
    __VERIFIER_nondet_memory(&std46, sizeof(std46));
    int t47 = *std46;
    int c48 = 20;
    _Bool c49 = ((t47 == c48)) ? 1 : 0;
    if (c49) {
    } else {
      char* cast50 = (char*)&(_str_3);
      char* c51 = (char*)_str_1;
      unsigned int c52 = 23;
      char* cast53 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast50, c51, c52, cast53);
    }
    agg_tmp17 = it3; // copy
    struct std___Rb_tree_const_iterator_int_ t54 = agg_tmp17;
    struct std___Rb_tree_const_iterator_int_ std55;
    __VERIFIER_nondet_memory(&std55, sizeof(std55));
    agg_tmp28 = std55;
    int c56 = 40;
    ref_tmp310 = c56;
    struct std___Rb_tree_const_iterator_int_ std57;
    __VERIFIER_nondet_memory(&std57, sizeof(std57));
    agg_tmp39 = std57;
    struct std___Rb_tree_const_iterator_int_ t58 = agg_tmp39;
    struct std___Rb_tree_const_iterator_int_ std59;
    __VERIFIER_nondet_memory(&std59, sizeof(std59));
    agg_tmp411 = std59;
    struct std___Rb_tree_const_iterator_int_ std60;
    __VERIFIER_nondet_memory(&std60, sizeof(std60));
    ref_tmp412 = std60;
    struct std___Rb_tree_const_iterator_int_* std61;
    __VERIFIER_nondet_memory(&std61, sizeof(std61));
    int c62 = 0;
    struct std___Rb_tree_const_iterator_int_ std63;
    __VERIFIER_nondet_memory(&std63, sizeof(std63));
    agg_tmp513 = std63;
    int c64 = 0;
    struct std___Rb_tree_const_iterator_int_ std65;
    __VERIFIER_nondet_memory(&std65, sizeof(std65));
    agg_tmp614 = std65;
    int* std66;
    __VERIFIER_nondet_memory(&std66, sizeof(std66));
    int t67 = *std66;
    int c68 = 50;
    _Bool c69 = ((t67 == c68)) ? 1 : 0;
    if (c69) {
    } else {
      char* cast70 = (char*)&(_str_4);
      char* c71 = (char*)_str_1;
      unsigned int c72 = 28;
      char* cast73 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast70, c71, c72, cast73);
    }
    char* cast74 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* std75;
    __VERIFIER_nondet_memory(&std75, sizeof(std75));
      struct std___Rb_tree_const_iterator_int_ ref_tmp576;
      struct std___Rb_tree_const_iterator_int_ ref_tmp677;
      struct std___Rb_tree_const_iterator_int_ agg_tmp778;
      struct std___Rb_tree_const_iterator_int_ std79;
      __VERIFIER_nondet_memory(&std79, sizeof(std79));
      ref_tmp576 = std79;
      struct std___Rb_tree_const_iterator_int_* std80;
      __VERIFIER_nondet_memory(&std80, sizeof(std80));
      while (1) {
        struct std___Rb_tree_const_iterator_int_ std82;
        __VERIFIER_nondet_memory(&std82, sizeof(std82));
        ref_tmp677 = std82;
        _Bool std83;
        __VERIFIER_nondet_memory(&std83, sizeof(std83));
        _Bool u84 = !std83;
        if (!u84) break;
        char* cast85 = (char*)&(_str_6);
        struct std__basic_ostream_char__std__char_traits_char__* std86;
        __VERIFIER_nondet_memory(&std86, sizeof(std86));
        int* std87;
        __VERIFIER_nondet_memory(&std87, sizeof(std87));
        int t88 = *std87;
        struct std__basic_ostream_char__std__char_traits_char__* std89;
        __VERIFIER_nondet_memory(&std89, sizeof(std89));
      for_step81: ;
        int c90 = 0;
        struct std___Rb_tree_const_iterator_int_ std91;
        __VERIFIER_nondet_memory(&std91, sizeof(std91));
        agg_tmp778 = std91;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std92;
    __VERIFIER_nondet_memory(&std92, sizeof(std92));
    int c93 = 0;
    __retval1 = c93;
    int t94 = __retval1;
    int ret_val95 = t94;
    {
      // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::~multiset()
      __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    }
    return ret_val95;
  int t96 = __retval1;
  return t96;
}

