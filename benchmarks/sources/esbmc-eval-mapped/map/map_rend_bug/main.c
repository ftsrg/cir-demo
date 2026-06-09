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
char _str[18] = "rit->first == 'z'";
char _str_1[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/map/map_rend_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[19] = "rit->second == 300";
char _str_3[18] = "rit->first == 'x'";
char _str_4[19] = "rit->second != 100";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[5] = " => ";
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
  struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ agg_tmp08;
  struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ ref_tmp49;
  struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ agg_tmp110;
  int c11 = 0;
  __retval1 = c11;
  // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::map()
  __VERIFIER_nondet_memory(&mymap2, sizeof(mymap2));
    // externalized std:: op: std::reverse_iterator<std::_Rb_tree_iterator<std::pair<char const, int> > >::reverse_iterator()
    __VERIFIER_nondet_memory(&rit3, sizeof(rit3));
    int c12 = 100;
    char c13 = 120;
    ref_tmp04 = c13;
    int* std14;
    __VERIFIER_nondet_memory(&std14, sizeof(std14));
    *std14 = c12;
    int c15 = 200;
    char c16 = 121;
    ref_tmp15 = c16;
    int* std17;
    __VERIFIER_nondet_memory(&std17, sizeof(std17));
    *std17 = c15;
    int c18 = 300;
    char c19 = 122;
    ref_tmp26 = c19;
    int* std20;
    __VERIFIER_nondet_memory(&std20, sizeof(std20));
    *std20 = c18;
    struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ std21;
    __VERIFIER_nondet_memory(&std21, sizeof(std21));
    ref_tmp37 = std21;
    struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___* std22;
    __VERIFIER_nondet_memory(&std22, sizeof(std22));
    int c23 = 0;
    struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ std24;
    __VERIFIER_nondet_memory(&std24, sizeof(std24));
    agg_tmp08 = std24;
    struct std__pair_const_char__int_* std25;
    __VERIFIER_nondet_memory(&std25, sizeof(std25));
    char t26 = std25->first;
    int cast27 = (int)t26;
    int c28 = 122;
    _Bool c29 = ((cast27 == c28)) ? 1 : 0;
    if (c29) {
    } else {
      char* cast30 = (char*)&(_str);
      char* c31 = _str_1;
      unsigned int c32 = 24;
      char* cast33 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast30, c31, c32, cast33);
    }
    struct std__pair_const_char__int_* std34;
    __VERIFIER_nondet_memory(&std34, sizeof(std34));
    int t35 = std34->second;
    int c36 = 300;
    _Bool c37 = ((t35 == c36)) ? 1 : 0;
    if (c37) {
    } else {
      char* cast38 = (char*)&(_str_2);
      char* c39 = _str_1;
      unsigned int c40 = 25;
      char* cast41 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast38, c39, c40, cast41);
    }
    struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    ref_tmp49 = std42;
    struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___* std43;
    __VERIFIER_nondet_memory(&std43, sizeof(std43));
    int c44 = 0;
    struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
    agg_tmp110 = std45;
    struct std__pair_const_char__int_* std46;
    __VERIFIER_nondet_memory(&std46, sizeof(std46));
    char t47 = std46->first;
    int cast48 = (int)t47;
    int c49 = 120;
    _Bool c50 = ((cast48 == c49)) ? 1 : 0;
    if (c50) {
    } else {
      char* cast51 = (char*)&(_str_3);
      char* c52 = _str_1;
      unsigned int c53 = 28;
      char* cast54 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast51, c52, c53, cast54);
    }
    struct std__pair_const_char__int_* std55;
    __VERIFIER_nondet_memory(&std55, sizeof(std55));
    int t56 = std55->second;
    int c57 = 100;
    _Bool c58 = ((t56 != c57)) ? 1 : 0;
    if (c58) {
    } else {
      char* cast59 = (char*)&(_str_4);
      char* c60 = _str_1;
      unsigned int c61 = 29;
      char* cast62 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast59, c60, c61, cast62);
    }
      struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ ref_tmp563;
      struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ ref_tmp664;
      struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ agg_tmp265;
      struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ std66;
      __VERIFIER_nondet_memory(&std66, sizeof(std66));
      ref_tmp563 = std66;
      struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___* std67;
      __VERIFIER_nondet_memory(&std67, sizeof(std67));
      while (1) {
        struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ std69;
        __VERIFIER_nondet_memory(&std69, sizeof(std69));
        ref_tmp664 = std69;
        _Bool std70;
        __VERIFIER_nondet_memory(&std70, sizeof(std70));
        _Bool u71 = !std70;
        if (!u71) break;
        struct std__pair_const_char__int_* std72;
        __VERIFIER_nondet_memory(&std72, sizeof(std72));
        char t73 = std72->first;
        struct std__basic_ostream_char__std__char_traits_char__* std74;
        __VERIFIER_nondet_memory(&std74, sizeof(std74));
        char* cast75 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* std76;
        __VERIFIER_nondet_memory(&std76, sizeof(std76));
        struct std__pair_const_char__int_* std77;
        __VERIFIER_nondet_memory(&std77, sizeof(std77));
        int t78 = std77->second;
        struct std__basic_ostream_char__std__char_traits_char__* std79;
        __VERIFIER_nondet_memory(&std79, sizeof(std79));
        struct std__basic_ostream_char__std__char_traits_char__* std80;
        __VERIFIER_nondet_memory(&std80, sizeof(std80));
      for_step68: ;
        int c81 = 0;
        struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ std82;
        __VERIFIER_nondet_memory(&std82, sizeof(std82));
        agg_tmp265 = std82;
      }
    int c83 = 0;
    __retval1 = c83;
    int t84 = __retval1;
    int ret_val85 = t84;
    {
      // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~map()
      __VERIFIER_nondet_memory(&mymap2, sizeof(mymap2));
    }
    return ret_val85;
  int t86 = __retval1;
  return t86;
}

