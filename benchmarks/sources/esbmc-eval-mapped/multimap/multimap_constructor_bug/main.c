extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Struct definitions (auto-parsed)
struct __gnu_cxx____aligned_membuf_std__pair_const_char__int__ { unsigned char _M_storage[8]; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Alloc_node { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___* _M_t; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Auto_node { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___* _M_t; struct std___Rb_tree_node_std__pair_const_char__int__* _M_node; };
struct std___Rb_tree_const_iterator_std__pair_const_char__int__ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_iterator_std__pair_const_char__int__ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_bool_____char__char__ { void* _M_key_compare; };
struct std___Rb_tree_key_compare_classcomp_ { unsigned char __field0; };
struct std___Rb_tree_key_compare_std__less_char__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_std__pair_const_char__int__ { struct std___Rb_tree_node_base __field0; struct __gnu_cxx____aligned_membuf_std__pair_const_char__int__ _M_storage; };
struct std___Select1st_std__pair_const_char__int__ { unsigned char __field0; };
struct std____new_allocator_std___Rb_tree_node_std__pair_const_char__int___;
struct std____new_allocator_std__pair_const_char__int__;
struct std____pair_base_char__int_;
struct std____pair_base_const_char__int_;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_std__pair_const_char__int___ { unsigned char __field0; };
struct std__allocator_std__pair_const_char__int__ { unsigned char __field0; };
struct std__less_char_;
struct std__pair_char__int_ { char first; int second; };
struct std__pair_const_char__int_ { char first; int second; };
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____bool_____char__char___std__allocator_std__pair_const_char__int______Rb_tree_impl_bool_____char__char___true_ { struct std___Rb_tree_key_compare_bool_____char__char__ __field0; struct std___Rb_tree_header __field1; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____classcomp__std__allocator_std__pair_const_char__int______Rb_tree_impl_classcomp__true_ { struct std___Rb_tree_key_compare_classcomp_ __field0; struct std___Rb_tree_header __field1; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ { struct std___Rb_tree_key_compare_std__less_char__ __field0; struct std___Rb_tree_header __field1; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____bool_____char__char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____bool_____char__char___std__allocator_std__pair_const_char__int______Rb_tree_impl_bool_____char__char___true_ _M_impl; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____classcomp__std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____classcomp__std__allocator_std__pair_const_char__int______Rb_tree_impl_classcomp__true_ _M_impl; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ _M_impl; };
struct std__multimap_char__int__bool_____char__char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____bool_____char__char___std__allocator_std__pair_const_char__int___ _M_t; };
struct std__multimap_char__int__classcomp__std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____classcomp__std__allocator_std__pair_const_char__int___ _M_t; };
struct std__multimap_char__int__std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ _M_t; };

char _str[21] = "it->second == number";
char _str_1[121] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multimap/multimap_constructor_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "first.size() == 4";
char _str_3[19] = "second.size() == 4";
char _str_4[21] = "it->second != number";
char _str_5[18] = "third.size() == 4";
_Bool fncomp(char p0, char p1);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: _Z6fncompcc
_Bool fncomp(char v0, char v1) {
bb2: ;
  char lhs3;
  char rhs4;
  _Bool __retval5;
  lhs3 = v0;
  rhs4 = v1;
  char t6 = lhs3;
  int cast7 = (int)t6;
  char t8 = rhs4;
  int cast9 = (int)t8;
  _Bool c10 = ((cast7 < cast9)) ? 1 : 0;
  __retval5 = c10;
  _Bool t11 = __retval5;
  return t11;
}

// function: main
int main() {
bb12: ;
  int __retval13;
  struct std__multimap_char__int__std__less_char___std__allocator_std__pair_const_char__int___ first14;
  int number15;
  struct std__pair_char__int_ ref_tmp016;
  char ref_tmp117;
  int ref_tmp218;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp019;
  struct std__pair_char__int_ ref_tmp320;
  char ref_tmp421;
  int ref_tmp522;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp123;
  struct std__pair_char__int_ ref_tmp624;
  char ref_tmp725;
  int ref_tmp826;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp227;
  struct std__pair_char__int_ ref_tmp928;
  char ref_tmp1029;
  int ref_tmp1130;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp331;
  struct std__multimap_char__int__std__less_char___std__allocator_std__pair_const_char__int___ second32;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp533;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp634;
  struct std__multimap_char__int__std__less_char___std__allocator_std__pair_const_char__int___ third35;
  struct std__multimap_char__int__classcomp__std__allocator_std__pair_const_char__int___ fourth36;
  void* fn_pt37;
  struct std__multimap_char__int__bool_____char__char___std__allocator_std__pair_const_char__int___ fifth38;
  struct std__allocator_std__pair_const_char__int__ ref_tmp1539;
  int c40 = 0;
  __retval13 = c40;
  // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::multimap()
  __VERIFIER_nondet_memory(&first14, sizeof(first14));
    char c41 = 97;
    ref_tmp117 = c41;
    int c42 = 10;
    ref_tmp218 = c42;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp016, sizeof(ref_tmp016));
    __VERIFIER_nondet_memory(&ref_tmp117, sizeof(ref_tmp117));
    __VERIFIER_nondet_memory(&ref_tmp218, sizeof(ref_tmp218));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std43;
    __VERIFIER_nondet_memory(&std43, sizeof(std43));
    agg_tmp019 = std43;
    char c44 = 98;
    ref_tmp421 = c44;
    int c45 = 15;
    ref_tmp522 = c45;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp320, sizeof(ref_tmp320));
    __VERIFIER_nondet_memory(&ref_tmp421, sizeof(ref_tmp421));
    __VERIFIER_nondet_memory(&ref_tmp522, sizeof(ref_tmp522));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std46;
    __VERIFIER_nondet_memory(&std46, sizeof(std46));
    agg_tmp123 = std46;
    char c47 = 98;
    ref_tmp725 = c47;
    int c48 = 20;
    ref_tmp826 = c48;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp624, sizeof(ref_tmp624));
    __VERIFIER_nondet_memory(&ref_tmp725, sizeof(ref_tmp725));
    __VERIFIER_nondet_memory(&ref_tmp826, sizeof(ref_tmp826));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std49;
    __VERIFIER_nondet_memory(&std49, sizeof(std49));
    agg_tmp227 = std49;
    char c50 = 99;
    ref_tmp1029 = c50;
    int c51 = 25;
    ref_tmp1130 = c51;
    // externalized std:: op: _ZNSt4pairIciEC2IciQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS2_S3_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp928, sizeof(ref_tmp928));
    __VERIFIER_nondet_memory(&ref_tmp1029, sizeof(ref_tmp1029));
    __VERIFIER_nondet_memory(&ref_tmp1130, sizeof(ref_tmp1130));
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std52;
    __VERIFIER_nondet_memory(&std52, sizeof(std52));
    agg_tmp331 = std52;
    int c53 = 10;
    number15 = c53;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ it54;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp1255;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp456;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ std57;
      __VERIFIER_nondet_memory(&std57, sizeof(std57));
      it54 = std57;
      while (1) {
        struct std___Rb_tree_iterator_std__pair_const_char__int__ std59;
        __VERIFIER_nondet_memory(&std59, sizeof(std59));
        ref_tmp1255 = std59;
        _Bool std60;
        __VERIFIER_nondet_memory(&std60, sizeof(std60));
        _Bool u61 = !std60;
        if (!u61) break;
          struct std__pair_const_char__int_* std62;
          __VERIFIER_nondet_memory(&std62, sizeof(std62));
          int t63 = std62->second;
          int t64 = number15;
          _Bool c65 = ((t63 == t64)) ? 1 : 0;
          if (c65) {
          } else {
            char* cast66 = (char*)&(_str);
            char* c67 = (char*)_str_1;
            unsigned int c68 = 32;
            char* cast69 = (char*)&(__PRETTY_FUNCTION___main);
            reach_error();
            __assert_fail(cast66, c67, c68, cast69);
          }
      for_step58: ;
        int c70 = 0;
        struct std___Rb_tree_iterator_std__pair_const_char__int__ std71;
        __VERIFIER_nondet_memory(&std71, sizeof(std71));
        agg_tmp456 = std71;
        int t72 = number15;
        int c73 = 5;
        int b74 = t72 + c73;
        number15 = b74;
      }
    unsigned long std75 = __VERIFIER_nondet_unsigned_long();
    unsigned long c76 = 4;
    _Bool c77 = ((std75 == c76)) ? 1 : 0;
    if (c77) {
    } else {
      char* cast78 = (char*)&(_str_2);
      char* c79 = (char*)_str_1;
      unsigned int c80 = 34;
      char* cast81 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast78, c79, c80, cast81);
    }
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std82;
    __VERIFIER_nondet_memory(&std82, sizeof(std82));
    agg_tmp533 = std82;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std83;
    __VERIFIER_nondet_memory(&std83, sizeof(std83));
    agg_tmp634 = std83;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ t84 = agg_tmp533;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ t85 = agg_tmp634;
    // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::multimap<std::_Rb_tree_iterator<std::pair<char const, int> > >(std::_Rb_tree_iterator<std::pair<char const, int> >, std::_Rb_tree_iterator<std::pair<char const, int> >)
    __VERIFIER_nondet_memory(&second32, sizeof(second32));
      int c86 = 10;
      number15 = c86;
        struct std___Rb_tree_iterator_std__pair_const_char__int__ it87;
        struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp1388;
        struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp789;
        struct std___Rb_tree_iterator_std__pair_const_char__int__ std90;
        __VERIFIER_nondet_memory(&std90, sizeof(std90));
        it87 = std90;
        while (1) {
          struct std___Rb_tree_iterator_std__pair_const_char__int__ std92;
          __VERIFIER_nondet_memory(&std92, sizeof(std92));
          ref_tmp1388 = std92;
          _Bool std93;
          __VERIFIER_nondet_memory(&std93, sizeof(std93));
          _Bool u94 = !std93;
          if (!u94) break;
            struct std__pair_const_char__int_* std95;
            __VERIFIER_nondet_memory(&std95, sizeof(std95));
            int t96 = std95->second;
            int t97 = number15;
            _Bool c98 = ((t96 == t97)) ? 1 : 0;
            if (c98) {
            } else {
              char* cast99 = (char*)&(_str);
              char* c100 = (char*)_str_1;
              unsigned int c101 = 40;
              char* cast102 = (char*)&(__PRETTY_FUNCTION___main);
              reach_error();
              __assert_fail(cast99, c100, c101, cast102);
            }
        for_step91: ;
          int c103 = 0;
          struct std___Rb_tree_iterator_std__pair_const_char__int__ std104;
          __VERIFIER_nondet_memory(&std104, sizeof(std104));
          agg_tmp789 = std104;
          int t105 = number15;
          int c106 = 5;
          int b107 = t105 + c106;
          number15 = b107;
        }
      unsigned long std108 = __VERIFIER_nondet_unsigned_long();
      unsigned long c109 = 4;
      _Bool c110 = ((std108 == c109)) ? 1 : 0;
      if (c110) {
      } else {
        char* cast111 = (char*)&(_str_3);
        char* c112 = (char*)_str_1;
        unsigned int c113 = 42;
        char* cast114 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast111, c112, c113, cast114);
      }
      // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::multimap(std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > > const&)
      __VERIFIER_nondet_memory(&third35, sizeof(third35));
      __VERIFIER_nondet_memory(&second32, sizeof(second32));
        int c115 = 10;
        number15 = c115;
          struct std___Rb_tree_iterator_std__pair_const_char__int__ it116;
          struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp14117;
          struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp8118;
          struct std___Rb_tree_iterator_std__pair_const_char__int__ std119;
          __VERIFIER_nondet_memory(&std119, sizeof(std119));
          it116 = std119;
          while (1) {
            struct std___Rb_tree_iterator_std__pair_const_char__int__ std121;
            __VERIFIER_nondet_memory(&std121, sizeof(std121));
            ref_tmp14117 = std121;
            _Bool std122;
            __VERIFIER_nondet_memory(&std122, sizeof(std122));
            _Bool u123 = !std122;
            if (!u123) break;
              struct std__pair_const_char__int_* std124;
              __VERIFIER_nondet_memory(&std124, sizeof(std124));
              int t125 = std124->second;
              int t126 = number15;
              _Bool c127 = ((t125 != t126)) ? 1 : 0;
              if (c127) {
              } else {
                char* cast128 = (char*)&(_str_4);
                char* c129 = (char*)_str_1;
                unsigned int c130 = 48;
                char* cast131 = (char*)&(__PRETTY_FUNCTION___main);
                reach_error();
                __assert_fail(cast128, c129, c130, cast131);
              }
          for_step120: ;
            int c132 = 0;
            struct std___Rb_tree_iterator_std__pair_const_char__int__ std133;
            __VERIFIER_nondet_memory(&std133, sizeof(std133));
            agg_tmp8118 = std133;
            int t134 = number15;
            int c135 = 5;
            int b136 = t134 + c135;
            number15 = b136;
          }
        unsigned long std137 = __VERIFIER_nondet_unsigned_long();
        unsigned long c138 = 4;
        _Bool c139 = ((std137 == c138)) ? 1 : 0;
        if (c139) {
        } else {
          char* cast140 = (char*)&(_str_5);
          char* c141 = (char*)_str_1;
          unsigned int c142 = 50;
          char* cast143 = (char*)&(__PRETTY_FUNCTION___main);
          reach_error();
          __assert_fail(cast140, c141, c142, cast143);
        }
        // externalized std:: op: std::multimap<char, int, classcomp, std::allocator<std::pair<char const, int> > >::multimap()
        __VERIFIER_nondet_memory(&fourth36, sizeof(fourth36));
          fn_pt37 = &fncomp;
          // externalized std:: op: std::allocator<std::pair<char const, int> >::allocator()
          __VERIFIER_nondet_memory(&ref_tmp1539, sizeof(ref_tmp1539));
            // externalized std:: op: std::multimap<char, int, bool (*)(char, char), std::allocator<std::pair<char const, int> > >::multimap(bool (* const&)(char, char), std::allocator<std::pair<char const, int> > const&)
            __VERIFIER_nondet_memory(&fifth38, sizeof(fifth38));
            __VERIFIER_nondet_memory(&fn_pt37, sizeof(fn_pt37));
            __VERIFIER_nondet_memory(&ref_tmp1539, sizeof(ref_tmp1539));
          {
            // externalized std:: op: std::allocator<std::pair<char const, int> >::~allocator()
            __VERIFIER_nondet_memory(&ref_tmp1539, sizeof(ref_tmp1539));
          }
            int c144 = 0;
            __retval13 = c144;
            int t145 = __retval13;
            int ret_val146 = t145;
            {
              // externalized std:: op: std::multimap<char, int, bool (*)(char, char), std::allocator<std::pair<char const, int> > >::~multimap()
              __VERIFIER_nondet_memory(&fifth38, sizeof(fifth38));
            }
            {
              // externalized std:: op: std::multimap<char, int, classcomp, std::allocator<std::pair<char const, int> > >::~multimap()
              __VERIFIER_nondet_memory(&fourth36, sizeof(fourth36));
            }
            {
              // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~multimap()
              __VERIFIER_nondet_memory(&third35, sizeof(third35));
            }
            {
              // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~multimap()
              __VERIFIER_nondet_memory(&second32, sizeof(second32));
            }
            {
              // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~multimap()
              __VERIFIER_nondet_memory(&first14, sizeof(first14));
            }
            return ret_val146;
  int t147 = __retval13;
  return t147;
}

