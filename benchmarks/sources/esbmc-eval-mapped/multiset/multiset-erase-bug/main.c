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
struct std____pair_base_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_int__;
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__less_int_;
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ { struct std___Rb_tree_iterator_int_ first; struct std___Rb_tree_iterator_int_ second; };
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
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

int __const_main_b[9] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
char _str[10] = "*it == 20";
char _str_1[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multiset/multiset-erase-bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[10] = "*it == 30";
char _str_3[8] = "*it==10";
char _str_4[8] = "*it==30";
char _str_5[8] = "*it!=50";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_6[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_tree.h";
char __PRETTY_FUNCTION____ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiE[210] = "iterator std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>>::erase(const_iterator) [_Key = int, _Val = int, _KeyOfValue = std::_Identity<int>, _Compare = std::less<int>, _Alloc = std::allocator<int>]";
char _str_7[20] = "__position != end()";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0: ;
  int __retval1;
  int b2[9];
  struct std__multiset_int__std__less_int___std__allocator_int__ myset3;
  struct std___Rb_tree_const_iterator_int_ it4;
  int i5;
  struct std___Rb_tree_const_iterator_int_ ref_tmp06;
  struct std___Rb_tree_const_iterator_int_ agg_tmp07;
  struct std___Rb_tree_const_iterator_int_ agg_tmp18;
  struct std___Rb_tree_const_iterator_int_ agg_tmp29;
  struct std___Rb_tree_const_iterator_int_ ref_tmp110;
  struct std___Rb_tree_const_iterator_int_ agg_tmp311;
  int ref_tmp212;
  struct std___Rb_tree_const_iterator_int_ ref_tmp313;
  int ref_tmp414;
  struct std___Rb_tree_const_iterator_int_ agg_tmp415;
  struct std___Rb_tree_const_iterator_int_ agg_tmp516;
  struct std___Rb_tree_const_iterator_int_ agg_tmp617;
  struct std___Rb_tree_const_iterator_int_ ref_tmp518;
  struct std___Rb_tree_const_iterator_int_ agg_tmp719;
  struct std___Rb_tree_const_iterator_int_ agg_tmp820;
  int c21 = 0;
  __retval1 = c21;
  // array copy
  __builtin_memcpy(b2, __const_main_b, (unsigned long)9 * sizeof(__const_main_b[0]));
  int* cast22 = (int*)&(b2);
  int* cast23 = (int*)&(b2);
  int c24 = 9;
  int* ptr25 = &(cast23)[c24];
  // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::multiset<int*>(int*, int*)
  __VERIFIER_nondet_memory(&myset3, sizeof(myset3));
  __VERIFIER_nondet_memory(cast22, sizeof(*cast22));
  __VERIFIER_nondet_memory(ptr25, sizeof(*ptr25));
    // externalized std:: op: std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator()
    __VERIFIER_nondet_memory(&it4, sizeof(it4));
    struct std___Rb_tree_const_iterator_int_ std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    ref_tmp06 = std26;
    struct std___Rb_tree_const_iterator_int_* std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    int c28 = 0;
    struct std___Rb_tree_const_iterator_int_ std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    agg_tmp07 = std29;
    int* std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
    int t31 = *std30;
    int c32 = 20;
    _Bool c33 = ((t31 == c32)) ? 1 : 0;
    if (c33) {
    } else {
      char* cast34 = (char*)&(_str);
      char* c35 = (char*)_str_1;
      unsigned int c36 = 22;
      char* cast37 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast34, c35, c36, cast37);
    }
    agg_tmp18 = it4; // copy
    struct std___Rb_tree_const_iterator_int_ t38 = agg_tmp18;
    struct std___Rb_tree_const_iterator_int_ std39;
    __VERIFIER_nondet_memory(&std39, sizeof(std39));
    agg_tmp29 = std39;
    struct std___Rb_tree_const_iterator_int_ std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    ref_tmp110 = std40;
    struct std___Rb_tree_const_iterator_int_* std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
    int c42 = 0;
    struct std___Rb_tree_const_iterator_int_ std43;
    __VERIFIER_nondet_memory(&std43, sizeof(std43));
    agg_tmp311 = std43;
    int* std44;
    __VERIFIER_nondet_memory(&std44, sizeof(std44));
    int t45 = *std44;
    int c46 = 30;
    _Bool c47 = ((t45 == c46)) ? 1 : 0;
    if (c47) {
    } else {
      char* cast48 = (char*)&(_str_2);
      char* c49 = (char*)_str_1;
      unsigned int c50 = 26;
      char* cast51 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast48, c49, c50, cast51);
    }
    int c52 = 40;
    ref_tmp212 = c52;
    unsigned long std53 = __VERIFIER_nondet_unsigned_long();
    int c54 = 60;
    ref_tmp414 = c54;
    struct std___Rb_tree_const_iterator_int_ std55;
    __VERIFIER_nondet_memory(&std55, sizeof(std55));
    ref_tmp313 = std55;
    struct std___Rb_tree_const_iterator_int_* std56;
    __VERIFIER_nondet_memory(&std56, sizeof(std56));
    agg_tmp415 = it4; // copy
    struct std___Rb_tree_const_iterator_int_ std57;
    __VERIFIER_nondet_memory(&std57, sizeof(std57));
    agg_tmp516 = std57;
    struct std___Rb_tree_const_iterator_int_ t58 = agg_tmp415;
    struct std___Rb_tree_const_iterator_int_ t59 = agg_tmp516;
    struct std___Rb_tree_const_iterator_int_ std60;
    __VERIFIER_nondet_memory(&std60, sizeof(std60));
    agg_tmp617 = std60;
    struct std___Rb_tree_const_iterator_int_ std61;
    __VERIFIER_nondet_memory(&std61, sizeof(std61));
    ref_tmp518 = std61;
    struct std___Rb_tree_const_iterator_int_* std62;
    __VERIFIER_nondet_memory(&std62, sizeof(std62));
    int* std63;
    __VERIFIER_nondet_memory(&std63, sizeof(std63));
    int t64 = *std63;
    int c65 = 10;
    _Bool c66 = ((t64 == c65)) ? 1 : 0;
    if (c66) {
    } else {
      char* cast67 = (char*)&(_str_3);
      char* c68 = (char*)_str_1;
      unsigned int c69 = 33;
      char* cast70 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast67, c68, c69, cast70);
    }
    int c71 = 0;
    struct std___Rb_tree_const_iterator_int_ std72;
    __VERIFIER_nondet_memory(&std72, sizeof(std72));
    agg_tmp719 = std72;
    int* std73;
    __VERIFIER_nondet_memory(&std73, sizeof(std73));
    int t74 = *std73;
    int c75 = 30;
    _Bool c76 = ((t74 == c75)) ? 1 : 0;
    if (c76) {
    } else {
      char* cast77 = (char*)&(_str_4);
      char* c78 = (char*)_str_1;
      unsigned int c79 = 35;
      char* cast80 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast77, c78, c79, cast80);
    }
    int c81 = 0;
    struct std___Rb_tree_const_iterator_int_ std82;
    __VERIFIER_nondet_memory(&std82, sizeof(std82));
    agg_tmp820 = std82;
    int* std83;
    __VERIFIER_nondet_memory(&std83, sizeof(std83));
    int t84 = *std83;
    int c85 = 50;
    _Bool c86 = ((t84 != c85)) ? 1 : 0;
    if (c86) {
    } else {
      char* cast87 = (char*)&(_str_5);
      char* c88 = (char*)_str_1;
      unsigned int c89 = 37;
      char* cast90 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast87, c88, c89, cast90);
    }
    struct std__basic_ostream_char__std__char_traits_char__* std91;
    __VERIFIER_nondet_memory(&std91, sizeof(std91));
    int c92 = 0;
    __retval1 = c92;
    int t93 = __retval1;
    int ret_val94 = t93;
    {
      // externalized std:: op: std::multiset<int, std::less<int>, std::allocator<int> >::~multiset()
      __VERIFIER_nondet_memory(&myset3, sizeof(myset3));
    }
    return ret_val94;
  int t95 = __retval1;
  return t95;
}

