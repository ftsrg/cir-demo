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
struct __gnu_cxx____aligned_membuf_std__pair_const_char__int__ { unsigned char _M_storage[8]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Head_base_0UL__char_____false_ { char* _M_head_impl; };
struct std___Index_tuple_0UL_ { unsigned char __field0; };
struct std___Index_tuple__ { unsigned char __field0; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Auto_node { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___* _M_t; struct std___Rb_tree_node_std__pair_const_char__int__* _M_node; };
struct std___Rb_tree_const_iterator_std__pair_const_char__int__ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_iterator_std__pair_const_char__int__ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_std__less_char__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_std__pair_const_char__int__;
struct std___Select1st_std__pair_const_char__int__ { unsigned char __field0; };
struct std___Tuple_impl_0UL__char____ { struct std___Head_base_0UL__char_____false_ __field0; };
struct std____new_allocator_std___Rb_tree_node_std__pair_const_char__int___;
struct std____pair_base_const_char__int_;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_std__pair_const_char__int___;
struct std__iterator_std__bidirectional_iterator_tag__std__pair_const_char__int___long__std__pair_const_char__int_____std__pair_const_char__int____;
struct std__less_char_ { unsigned char __field0; };
struct std__pair_const_char__int_;
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std__piecewise_construct_t { unsigned char __field0; };
struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ { struct std___Rb_tree_iterator_std__pair_const_char__int__ current; };
struct std__tuple__ { unsigned char __field0; };
struct std__tuple_char____ { struct std___Tuple_impl_0UL__char____ __field0; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ { struct std___Rb_tree_key_compare_std__less_char__ __field0; struct std___Rb_tree_header __field1; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ _M_impl; };
struct std__map_char__int__std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ _M_t; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "rit->first != 'z'";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/map/map_rbegin_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[19] = "rit->second != 300";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[5] = " => ";
struct std__piecewise_construct_t _ZSt19piecewise_construct;
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__map_char__int__std__less_char___std__allocator_std__pair_const_char__int___ mymap2;
  struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ rit3;
  char ref_tmp04;
  char ref_tmp15;
  char ref_tmp26;
  struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ ref_tmp37;
  int c8 = 0;
  __retval1 = c8;
  // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::map()
  __VERIFIER_nondet_memory(&mymap2, sizeof(mymap2));
    // externalized std:: op: std::reverse_iterator<std::_Rb_tree_iterator<std::pair<char const, int> > >::reverse_iterator()
    __VERIFIER_nondet_memory(&rit3, sizeof(rit3));
    int c9 = 100;
    char c10 = 120;
    ref_tmp04 = c10;
    int* std11;
    __VERIFIER_nondet_memory(&std11, sizeof(std11));
    *std11 = c9;
    int c12 = 200;
    char c13 = 121;
    ref_tmp15 = c13;
    int* std14;
    __VERIFIER_nondet_memory(&std14, sizeof(std14));
    *std14 = c12;
    int c15 = 300;
    char c16 = 122;
    ref_tmp26 = c16;
    int* std17;
    __VERIFIER_nondet_memory(&std17, sizeof(std17));
    *std17 = c15;
    struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ std18;
    __VERIFIER_nondet_memory(&std18, sizeof(std18));
    ref_tmp37 = std18;
    struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___* std19;
    __VERIFIER_nondet_memory(&std19, sizeof(std19));
    struct std__pair_const_char__int_* std20;
    __VERIFIER_nondet_memory(&std20, sizeof(std20));
    char t21 = std20->first;
    int cast22 = (int)t21;
    int c23 = 122;
    _Bool c24 = ((cast22 != c23)) ? 1 : 0;
    if (c24) {
    } else {
      char* cast25 = (char*)&(_str);
      char* c26 = _str_1;
      unsigned int c27 = 24;
      char* cast28 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast25, c26, c27, cast28);
    }
    struct std__pair_const_char__int_* std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    int t30 = std29->second;
    int c31 = 300;
    _Bool c32 = ((t30 != c31)) ? 1 : 0;
    if (c32) {
    } else {
      char* cast33 = (char*)&(_str_2);
      char* c34 = _str_1;
      unsigned int c35 = 25;
      char* cast36 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast33, c34, c35, cast36);
    }
    struct std__pair_const_char__int_* std37;
    __VERIFIER_nondet_memory(&std37, sizeof(std37));
    char t38 = std37->first;
    struct std__basic_ostream_char__std__char_traits_char__* std39;
    __VERIFIER_nondet_memory(&std39, sizeof(std39));
    char* cast40 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
    struct std__pair_const_char__int_* std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    int t43 = std42->second;
    struct std__basic_ostream_char__std__char_traits_char__* std44;
    __VERIFIER_nondet_memory(&std44, sizeof(std44));
    struct std__basic_ostream_char__std__char_traits_char__* std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
      struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ ref_tmp446;
      struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ ref_tmp547;
      struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ agg_tmp048;
      struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ std49;
      __VERIFIER_nondet_memory(&std49, sizeof(std49));
      ref_tmp446 = std49;
      struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___* std50;
      __VERIFIER_nondet_memory(&std50, sizeof(std50));
      while (1) {
        struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ std52;
        __VERIFIER_nondet_memory(&std52, sizeof(std52));
        ref_tmp547 = std52;
        _Bool std53;
        __VERIFIER_nondet_memory(&std53, sizeof(std53));
        _Bool u54 = !std53;
        if (!u54) break;
        struct std__pair_const_char__int_* std55;
        __VERIFIER_nondet_memory(&std55, sizeof(std55));
        char t56 = std55->first;
        struct std__basic_ostream_char__std__char_traits_char__* std57;
        __VERIFIER_nondet_memory(&std57, sizeof(std57));
        char* cast58 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std59;
        __VERIFIER_nondet_memory(&std59, sizeof(std59));
        struct std__pair_const_char__int_* std60;
        __VERIFIER_nondet_memory(&std60, sizeof(std60));
        int t61 = std60->second;
        struct std__basic_ostream_char__std__char_traits_char__* std62;
        __VERIFIER_nondet_memory(&std62, sizeof(std62));
        struct std__basic_ostream_char__std__char_traits_char__* std63;
        __VERIFIER_nondet_memory(&std63, sizeof(std63));
      for_step51: ;
        int c64 = 0;
        struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ std65;
        __VERIFIER_nondet_memory(&std65, sizeof(std65));
        agg_tmp048 = std65;
      }
    int c66 = 0;
    __retval1 = c66;
    int t67 = __retval1;
    int ret_val68 = t67;
    {
      // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~map()
      __VERIFIER_nondet_memory(&mymap2, sizeof(mymap2));
    }
    return ret_val68;
  int t69 = __retval1;
  return t69;
}

