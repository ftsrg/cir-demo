extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Struct definitions (auto-parsed)
struct __gnu_cxx____aligned_membuf_std__pair_const_char__int__ { unsigned char _M_storage[8]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Auto_node { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___* _M_t; struct std___Rb_tree_node_std__pair_const_char__int__* _M_node; };
struct std___Rb_tree_const_iterator_std__pair_const_char__int__ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_iterator_std__pair_const_char__int__ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_std__less_char__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_std__pair_const_char__int__ { struct std___Rb_tree_node_base __field0; struct __gnu_cxx____aligned_membuf_std__pair_const_char__int__ _M_storage; };
struct std___Select1st_std__pair_const_char__int__ { unsigned char __field0; };
struct std____new_allocator_std___Rb_tree_node_std__pair_const_char__int___;
struct std____pair_base_char__int_;
struct std____pair_base_const_char__int_;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_std__pair_const_char__int___;
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__less_char_;
struct std__locale { struct std__locale___Impl* __field0; };
struct std__pair_char__int_ { char first; int second; };
struct std__pair_const_char__int_ { char first; int second; };
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ { struct std___Rb_tree_key_compare_std__less_char__ __field0; struct std___Rb_tree_header __field1; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ _M_impl; };
struct std__multimap_char__int__std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ _M_t; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[19] = "mymultimap.empty()";
char _str_1[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multimap/multimap_empty_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[5] = " => ";
char _str_3[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_tree.h";
char __PRETTY_FUNCTION____ZNSt8_Rb_treeIcSt4pairIKciESt10_Select1stIS2_ESt4lessIcESaIS2_EE5eraseB5cxx11ESt17_Rb_tree_iteratorIS2_E[325] = "iterator std::_Rb_tree<char, std::pair<const char, int>, std::_Select1st<std::pair<const char, int>>, std::less<char>>::erase(iterator) [_Key = char, _Val = std::pair<const char, int>, _KeyOfValue = std::_Select1st<std::pair<const char, int>>, _Compare = std::less<char>, _Alloc = std::allocator<std::pair<const char, int>>]";
char _str_4[20] = "__position != end()";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0: ;
  int __retval1;
  struct std__multimap_char__int__std__less_char___std__allocator_std__pair_const_char__int___ mymultimap2;
  struct std__pair_char__int_ ref_tmp03;
  char ref_tmp14;
  int ref_tmp25;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp06;
  struct std__pair_char__int_ ref_tmp37;
  char ref_tmp48;
  int ref_tmp59;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp110;
  struct std__pair_char__int_ ref_tmp611;
  char ref_tmp712;
  int ref_tmp813;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp214;
  int c15 = 0;
  __retval1 = c15;
  // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::multimap()
  __VERIFIER_nondet_memory(&mymultimap2, sizeof(mymultimap2));
    char c16 = 98;
    ref_tmp14 = c16;
    int c17 = 101;
    ref_tmp25 = c17;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
    __VERIFIER_nondet_memory(&ref_tmp25, sizeof(ref_tmp25));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std18;
    __VERIFIER_nondet_memory(&std18, sizeof(std18));
    agg_tmp06 = std18;
    char c19 = 98;
    ref_tmp48 = c19;
    int c20 = 202;
    ref_tmp59 = c20;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp37, sizeof(ref_tmp37));
    __VERIFIER_nondet_memory(&ref_tmp48, sizeof(ref_tmp48));
    __VERIFIER_nondet_memory(&ref_tmp59, sizeof(ref_tmp59));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std21;
    __VERIFIER_nondet_memory(&std21, sizeof(std21));
    agg_tmp110 = std21;
    char c22 = 113;
    ref_tmp712 = c22;
    int c23 = 505;
    ref_tmp813 = c23;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp611, sizeof(ref_tmp611));
    __VERIFIER_nondet_memory(&ref_tmp712, sizeof(ref_tmp712));
    __VERIFIER_nondet_memory(&ref_tmp813, sizeof(ref_tmp813));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std24;
    __VERIFIER_nondet_memory(&std24, sizeof(std24));
    agg_tmp214 = std24;
    _Bool std25;
    __VERIFIER_nondet_memory(&std25, sizeof(std25));
    if (std25) {
    } else {
      char* cast26 = (char*)&(_str);
      char* c27 = (char*)_str_1;
      unsigned int c28 = 21;
      char* cast29 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast26, c27, c28, cast29);
    }
      while (1) {
        _Bool std30;
        __VERIFIER_nondet_memory(&std30, sizeof(std30));
        _Bool u31 = !std30;
        if (!u31) break;
          struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp932;
          struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp1033;
          struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp334;
          struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp435;
          struct std___Rb_tree_iterator_std__pair_const_char__int__ std36;
          __VERIFIER_nondet_memory(&std36, sizeof(std36));
          ref_tmp932 = std36;
          struct std__pair_const_char__int_* std37;
          __VERIFIER_nondet_memory(&std37, sizeof(std37));
          char t38 = std37->first;
          struct std__basic_ostream_char__std__char_traits_char__* std39;
          __VERIFIER_nondet_memory(&std39, sizeof(std39));
          char* cast40 = (char*)&(_str_2);
          struct std__basic_ostream_char__std__char_traits_char__* std41;
          __VERIFIER_nondet_memory(&std41, sizeof(std41));
          struct std___Rb_tree_iterator_std__pair_const_char__int__ std42;
          __VERIFIER_nondet_memory(&std42, sizeof(std42));
          ref_tmp1033 = std42;
          struct std__pair_const_char__int_* std43;
          __VERIFIER_nondet_memory(&std43, sizeof(std43));
          int t44 = std43->second;
          struct std__basic_ostream_char__std__char_traits_char__* std45;
          __VERIFIER_nondet_memory(&std45, sizeof(std45));
          char c46 = 10;
          struct std__basic_ostream_char__std__char_traits_char__* std47;
          __VERIFIER_nondet_memory(&std47, sizeof(std47));
          struct std___Rb_tree_iterator_std__pair_const_char__int__ std48;
          __VERIFIER_nondet_memory(&std48, sizeof(std48));
          agg_tmp334 = std48;
          struct std___Rb_tree_iterator_std__pair_const_char__int__ t49 = agg_tmp334;
          struct std___Rb_tree_iterator_std__pair_const_char__int__ std50;
          __VERIFIER_nondet_memory(&std50, sizeof(std50));
          agg_tmp435 = std50;
      }
    int c51 = 0;
    __retval1 = c51;
    int t52 = __retval1;
    int ret_val53 = t52;
    {
      // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~multimap()
      __VERIFIER_nondet_memory(&mymultimap2, sizeof(mymultimap2));
    }
    return ret_val53;
  int t54 = __retval1;
  return t54;
}

