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
struct __gnu_cxx____aligned_membuf_std__pair_const_int__double__ { unsigned char _M_storage[16]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Rb_tree_const_iterator_std__pair_const_int__double__ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_int__std__pair_const_int__double___std___Select1st_std__pair_const_int__double____std__less_int___std__allocator_std__pair_const_int__double______Alloc_node { struct std___Rb_tree_int__std__pair_const_int__double___std___Select1st_std__pair_const_int__double____std__less_int___std__allocator_std__pair_const_int__double___* _M_t; };
struct std___Rb_tree_iterator_std__pair_const_int__double__ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_std__less_int__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_std__pair_const_int__double__;
struct std___Select1st_std__pair_const_int__double__ { unsigned char __field0; };
struct std____new_allocator_std___Rb_tree_node_std__pair_const_int__double___;
struct std____pair_base_const_int__double_;
struct std____pair_base_std___Rb_tree_const_iterator_std__pair_const_int__double____std___Rb_tree_const_iterator_std__pair_const_int__double___;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_std__pair_const_int__double___;
struct std__bidirectional_iterator_tag { unsigned char __field0; };
struct std__input_iterator_tag { unsigned char __field0; };
struct std__less_int_;
struct std__pair_const_int__double_ { int first; double second; };
struct std__pair_std___Rb_tree_const_iterator_std__pair_const_int__double____std___Rb_tree_const_iterator_std__pair_const_int__double___ { struct std___Rb_tree_const_iterator_std__pair_const_int__double__ first; struct std___Rb_tree_const_iterator_std__pair_const_int__double__ second; };
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__std__pair_const_int__double___std___Select1st_std__pair_const_int__double____std__less_int___std__allocator_std__pair_const_int__double______Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Rb_tree_int__std__pair_const_int__double___std___Select1st_std__pair_const_int__double____std__less_int___std__allocator_std__pair_const_int__double___ { struct std___Rb_tree_int__std__pair_const_int__double___std___Select1st_std__pair_const_int__double____std__less_int___std__allocator_std__pair_const_int__double______Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__multimap_int__double__std__less_int___std__allocator_std__pair_const_int__double___ { struct std___Rb_tree_int__std__pair_const_int__double___std___Select1st_std__pair_const_int__double____std__less_int___std__allocator_std__pair_const_int__double___ _M_t; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[21] = "There are currently ";
char _str_1[36] = " pairs with key 15 in the multimap\n";
char _str_2[26] = "After inserts, there are ";
char _str_3[21] = " pairs with key 15\n\n";
char _str_4[36] = "Multimap pairs contains:\nKey\tValue\n";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__multimap_int__double__std__less_int___std__allocator_std__pair_const_int__double___ pairs2;
  int ref_tmp03;
  struct std__pair_const_int__double_ ref_tmp14;
  int ref_tmp25;
  double ref_tmp36;
  struct std___Rb_tree_iterator_std__pair_const_int__double__ agg_tmp07;
  struct std__pair_const_int__double_ ref_tmp48;
  int ref_tmp59;
  double ref_tmp610;
  struct std___Rb_tree_iterator_std__pair_const_int__double__ agg_tmp111;
  int ref_tmp712;
  struct std__pair_const_int__double_ ref_tmp813;
  int ref_tmp914;
  double ref_tmp1015;
  struct std___Rb_tree_iterator_std__pair_const_int__double__ agg_tmp216;
  struct std__pair_const_int__double_ ref_tmp1117;
  int ref_tmp1218;
  double ref_tmp1319;
  struct std___Rb_tree_iterator_std__pair_const_int__double__ agg_tmp320;
  struct std__pair_const_int__double_ ref_tmp1421;
  int ref_tmp1522;
  double ref_tmp1623;
  struct std___Rb_tree_iterator_std__pair_const_int__double__ agg_tmp424;
  struct std__pair_const_int__double_ ref_tmp1725;
  int ref_tmp1826;
  double ref_tmp1927;
  struct std___Rb_tree_iterator_std__pair_const_int__double__ agg_tmp528;
  struct std__pair_const_int__double_ ref_tmp2029;
  int ref_tmp2130;
  double ref_tmp2231;
  struct std___Rb_tree_iterator_std__pair_const_int__double__ agg_tmp632;
  int c33 = 0;
  __retval1 = c33;
  // externalized std:: op: std::multimap<int, double, std::less<int>, std::allocator<std::pair<int const, double> > >::multimap()
  __VERIFIER_nondet_memory(&pairs2, sizeof(pairs2));
    char* cast34 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std35;
    __VERIFIER_nondet_memory(&std35, sizeof(std35));
    int c36 = 15;
    ref_tmp03 = c36;
    unsigned long std37 = __VERIFIER_nondet_unsigned_long();
    struct std__basic_ostream_char__std__char_traits_char__* std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    char* cast39 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    int c41 = 15;
    ref_tmp25 = c41;
    double c42 = 0x1.599999999999ap1;
    ref_tmp36 = c42;
    // externalized std:: op: _ZNSt4pairIKidEC2IidQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS3_S4_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
    __VERIFIER_nondet_memory(&ref_tmp25, sizeof(ref_tmp25));
    __VERIFIER_nondet_memory(&ref_tmp36, sizeof(ref_tmp36));
    struct std___Rb_tree_iterator_std__pair_const_int__double__ std43;
    __VERIFIER_nondet_memory(&std43, sizeof(std43));
    agg_tmp07 = std43;
    int c44 = 15;
    ref_tmp59 = c44;
    double c45 = 0x1.8d33333333333p6;
    ref_tmp610 = c45;
    // externalized std:: op: _ZNSt4pairIKidEC2IidQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS3_S4_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp48, sizeof(ref_tmp48));
    __VERIFIER_nondet_memory(&ref_tmp59, sizeof(ref_tmp59));
    __VERIFIER_nondet_memory(&ref_tmp610, sizeof(ref_tmp610));
    struct std___Rb_tree_iterator_std__pair_const_int__double__ std46;
    __VERIFIER_nondet_memory(&std46, sizeof(std46));
    agg_tmp111 = std46;
    char* cast47 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std48;
    __VERIFIER_nondet_memory(&std48, sizeof(std48));
    int c49 = 15;
    ref_tmp712 = c49;
    unsigned long std50 = __VERIFIER_nondet_unsigned_long();
    struct std__basic_ostream_char__std__char_traits_char__* std51;
    __VERIFIER_nondet_memory(&std51, sizeof(std51));
    char* cast52 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std53;
    __VERIFIER_nondet_memory(&std53, sizeof(std53));
    int c54 = 30;
    ref_tmp914 = c54;
    double c55 = 0x1.bc70a3d70a3d7p6;
    ref_tmp1015 = c55;
    // externalized std:: op: _ZNSt4pairIKidEC2IidQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS3_S4_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp813, sizeof(ref_tmp813));
    __VERIFIER_nondet_memory(&ref_tmp914, sizeof(ref_tmp914));
    __VERIFIER_nondet_memory(&ref_tmp1015, sizeof(ref_tmp1015));
    struct std___Rb_tree_iterator_std__pair_const_int__double__ std56;
    __VERIFIER_nondet_memory(&std56, sizeof(std56));
    agg_tmp216 = std56;
    int c57 = 10;
    ref_tmp1218 = c57;
    double c58 = 0x1.63851eb851eb8p4;
    ref_tmp1319 = c58;
    // externalized std:: op: _ZNSt4pairIKidEC2IidQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS3_S4_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp1117, sizeof(ref_tmp1117));
    __VERIFIER_nondet_memory(&ref_tmp1218, sizeof(ref_tmp1218));
    __VERIFIER_nondet_memory(&ref_tmp1319, sizeof(ref_tmp1319));
    struct std___Rb_tree_iterator_std__pair_const_int__double__ std59;
    __VERIFIER_nondet_memory(&std59, sizeof(std59));
    agg_tmp320 = std59;
    int c60 = 25;
    ref_tmp1522 = c60;
    double c61 = 0x1.0aa9fbe76c8b4p5;
    ref_tmp1623 = c61;
    // externalized std:: op: _ZNSt4pairIKidEC2IidQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS3_S4_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp1421, sizeof(ref_tmp1421));
    __VERIFIER_nondet_memory(&ref_tmp1522, sizeof(ref_tmp1522));
    __VERIFIER_nondet_memory(&ref_tmp1623, sizeof(ref_tmp1623));
    struct std___Rb_tree_iterator_std__pair_const_int__double__ std62;
    __VERIFIER_nondet_memory(&std62, sizeof(std62));
    agg_tmp424 = std62;
    int c63 = 20;
    ref_tmp1826 = c63;
    double c64 = 0x1.2b0a3d70a3d71p3;
    ref_tmp1927 = c64;
    // externalized std:: op: _ZNSt4pairIKidEC2IidQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS3_S4_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp1725, sizeof(ref_tmp1725));
    __VERIFIER_nondet_memory(&ref_tmp1826, sizeof(ref_tmp1826));
    __VERIFIER_nondet_memory(&ref_tmp1927, sizeof(ref_tmp1927));
    struct std___Rb_tree_iterator_std__pair_const_int__double__ std65;
    __VERIFIER_nondet_memory(&std65, sizeof(std65));
    agg_tmp528 = std65;
    int c66 = 5;
    ref_tmp2130 = c66;
    double c67 = 0x1.3628f5c28f5c3p6;
    ref_tmp2231 = c67;
    // externalized std:: op: _ZNSt4pairIKidEC2IidQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS3_S4_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp2029, sizeof(ref_tmp2029));
    __VERIFIER_nondet_memory(&ref_tmp2130, sizeof(ref_tmp2130));
    __VERIFIER_nondet_memory(&ref_tmp2231, sizeof(ref_tmp2231));
    struct std___Rb_tree_iterator_std__pair_const_int__double__ std68;
    __VERIFIER_nondet_memory(&std68, sizeof(std68));
    agg_tmp632 = std68;
    char* cast69 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std70;
    __VERIFIER_nondet_memory(&std70, sizeof(std70));
      struct std___Rb_tree_const_iterator_std__pair_const_int__double__ iter71;
      struct std___Rb_tree_iterator_std__pair_const_int__double__ ref_tmp2372;
      struct std___Rb_tree_const_iterator_std__pair_const_int__double__ ref_tmp2473;
      struct std___Rb_tree_iterator_std__pair_const_int__double__ ref_tmp2574;
      struct std___Rb_tree_iterator_std__pair_const_int__double__ std75;
      __VERIFIER_nondet_memory(&std75, sizeof(std75));
      ref_tmp2372 = std75;
      // externalized std:: op: std::_Rb_tree_const_iterator<std::pair<int const, double> >::_Rb_tree_const_iterator(std::_Rb_tree_iterator<std::pair<int const, double> > const&)
      __VERIFIER_nondet_memory(&iter71, sizeof(iter71));
      __VERIFIER_nondet_memory(&ref_tmp2372, sizeof(ref_tmp2372));
      while (1) {
        struct std___Rb_tree_iterator_std__pair_const_int__double__ std77;
        __VERIFIER_nondet_memory(&std77, sizeof(std77));
        ref_tmp2574 = std77;
        // externalized std:: op: std::_Rb_tree_const_iterator<std::pair<int const, double> >::_Rb_tree_const_iterator(std::_Rb_tree_iterator<std::pair<int const, double> > const&)
        __VERIFIER_nondet_memory(&ref_tmp2473, sizeof(ref_tmp2473));
        __VERIFIER_nondet_memory(&ref_tmp2574, sizeof(ref_tmp2574));
        _Bool std78;
        __VERIFIER_nondet_memory(&std78, sizeof(std78));
        _Bool u79 = !std78;
        if (!u79) break;
        struct std__pair_const_int__double_* std80;
        __VERIFIER_nondet_memory(&std80, sizeof(std80));
        int t81 = std80->first;
        struct std__basic_ostream_char__std__char_traits_char__* std82;
        __VERIFIER_nondet_memory(&std82, sizeof(std82));
        char c83 = 9;
        struct std__basic_ostream_char__std__char_traits_char__* std84;
        __VERIFIER_nondet_memory(&std84, sizeof(std84));
        struct std__pair_const_int__double_* std85;
        __VERIFIER_nondet_memory(&std85, sizeof(std85));
        double t86 = std85->second;
        struct std__basic_ostream_char__std__char_traits_char__* std87;
        __VERIFIER_nondet_memory(&std87, sizeof(std87));
        char c88 = 10;
        struct std__basic_ostream_char__std__char_traits_char__* std89;
        __VERIFIER_nondet_memory(&std89, sizeof(std89));
      for_step76: ;
        struct std___Rb_tree_const_iterator_std__pair_const_int__double__* std90;
        __VERIFIER_nondet_memory(&std90, sizeof(std90));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std91;
    __VERIFIER_nondet_memory(&std91, sizeof(std91));
    int c92 = 0;
    __retval1 = c92;
    int t93 = __retval1;
    int ret_val94 = t93;
    {
      // externalized std:: op: std::multimap<int, double, std::less<int>, std::allocator<std::pair<int const, double> > >::~multimap()
      __VERIFIER_nondet_memory(&pairs2, sizeof(pairs2));
    }
    return ret_val94;
  int t95 = __retval1;
  return t95;
}

