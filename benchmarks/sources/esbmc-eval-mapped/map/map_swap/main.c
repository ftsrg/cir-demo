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
struct std___Head_base_0UL__char_____false_ { char* _M_head_impl; };
struct std___Index_tuple_0UL_ { unsigned char __field0; };
struct std___Index_tuple__ { unsigned char __field0; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Auto_node { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___* _M_t; struct std___Rb_tree_node_std__pair_const_char__int__* _M_node; };
struct std___Rb_tree_const_iterator_std__pair_const_char__int__ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_iterator_std__pair_const_char__int__ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_std__less_char__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_std__pair_const_char__int__ { struct std___Rb_tree_node_base __field0; struct __gnu_cxx____aligned_membuf_std__pair_const_char__int__ _M_storage; };
struct std___Select1st_std__pair_const_char__int__ { unsigned char __field0; };
struct std___Tuple_impl_0UL__char____ { struct std___Head_base_0UL__char_____false_ __field0; };
struct std____new_allocator_std___Rb_tree_node_std__pair_const_char__int___;
struct std____pair_base_const_char__int_;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_std__pair_const_char__int___;
struct std__binary_function_char__char__bool_;
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__less_char_ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__pair_const_char__int_ { char first; int second; };
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std__piecewise_construct_t { unsigned char __field0; };
struct std__tuple__ { unsigned char __field0; };
struct std__tuple_char____ { struct std___Tuple_impl_0UL__char____ __field0; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ { struct std___Rb_tree_key_compare_std__less_char__ __field0; struct std___Rb_tree_header __field1; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ _M_impl; };
struct std__map_char__int__std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ _M_t; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[15] = "foo contains:\n";
char _str_1[5] = " => ";
char _str_2[15] = "bar contains:\n";
char _str_3[14] = "bar['x']==100";
char _str_4[100] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/map/map_swap/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_5[14] = "bar['y']==200";
char _str_6[13] = "foo['a']==11";
char _str_7[13] = "foo['b']==22";
char _str_8[13] = "foo['c']==33";
struct std__piecewise_construct_t _ZSt19piecewise_construct;
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0: ;
  int __retval1;
  struct std__map_char__int__std__less_char___std__allocator_std__pair_const_char__int___ foo2;
  struct std__map_char__int__std__less_char___std__allocator_std__pair_const_char__int___ bar3;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ it4;
  char ref_tmp05;
  char ref_tmp16;
  char ref_tmp27;
  char ref_tmp38;
  char ref_tmp49;
  char ref_tmp910;
  char ref_tmp1011;
  char ref_tmp1112;
  char ref_tmp1213;
  char ref_tmp1314;
  int c15 = 0;
  __retval1 = c15;
  // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::map()
  __VERIFIER_nondet_memory(&foo2, sizeof(foo2));
    // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::map()
    __VERIFIER_nondet_memory(&bar3, sizeof(bar3));
      // externalized std:: op: std::_Rb_tree_iterator<std::pair<char const, int> >::_Rb_tree_iterator()
      __VERIFIER_nondet_memory(&it4, sizeof(it4));
      int c16 = 100;
      char c17 = 120;
      ref_tmp05 = c17;
      int* std18;
      __VERIFIER_nondet_memory(&std18, sizeof(std18));
      *std18 = c16;
      int c19 = 200;
      char c20 = 121;
      ref_tmp16 = c20;
      int* std21;
      __VERIFIER_nondet_memory(&std21, sizeof(std21));
      *std21 = c19;
      int c22 = 11;
      char c23 = 97;
      ref_tmp27 = c23;
      int* std24;
      __VERIFIER_nondet_memory(&std24, sizeof(std24));
      *std24 = c22;
      int c25 = 22;
      char c26 = 98;
      ref_tmp38 = c26;
      int* std27;
      __VERIFIER_nondet_memory(&std27, sizeof(std27));
      *std27 = c25;
      int c28 = 33;
      char c29 = 99;
      ref_tmp49 = c29;
      int* std30;
      __VERIFIER_nondet_memory(&std30, sizeof(std30));
      *std30 = c28;
      // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::swap(std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >&)
      __VERIFIER_nondet_memory(&foo2, sizeof(foo2));
      __VERIFIER_nondet_memory(&bar3, sizeof(bar3));
      char* cast31 = (char*)&(_str);
      struct std__basic_ostream_char__std__char_traits_char__* std32;
      __VERIFIER_nondet_memory(&std32, sizeof(std32));
        struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp533;
        struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp634;
        struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp035;
        struct std___Rb_tree_iterator_std__pair_const_char__int__ std36;
        __VERIFIER_nondet_memory(&std36, sizeof(std36));
        ref_tmp533 = std36;
        struct std___Rb_tree_iterator_std__pair_const_char__int__* std37;
        __VERIFIER_nondet_memory(&std37, sizeof(std37));
        while (1) {
          struct std___Rb_tree_iterator_std__pair_const_char__int__ std39;
          __VERIFIER_nondet_memory(&std39, sizeof(std39));
          ref_tmp634 = std39;
          _Bool std40;
          __VERIFIER_nondet_memory(&std40, sizeof(std40));
          _Bool u41 = !std40;
          if (!u41) break;
          struct std__pair_const_char__int_* std42;
          __VERIFIER_nondet_memory(&std42, sizeof(std42));
          char t43 = std42->first;
          struct std__basic_ostream_char__std__char_traits_char__* std44;
          __VERIFIER_nondet_memory(&std44, sizeof(std44));
          char* cast45 = (char*)&(_str_1);
          struct std__basic_ostream_char__std__char_traits_char__* std46;
          __VERIFIER_nondet_memory(&std46, sizeof(std46));
          struct std__pair_const_char__int_* std47;
          __VERIFIER_nondet_memory(&std47, sizeof(std47));
          int t48 = std47->second;
          struct std__basic_ostream_char__std__char_traits_char__* std49;
          __VERIFIER_nondet_memory(&std49, sizeof(std49));
          struct std__basic_ostream_char__std__char_traits_char__* std50;
          __VERIFIER_nondet_memory(&std50, sizeof(std50));
        for_step38: ;
          int c51 = 0;
          struct std___Rb_tree_iterator_std__pair_const_char__int__ std52;
          __VERIFIER_nondet_memory(&std52, sizeof(std52));
          agg_tmp035 = std52;
        }
      char* cast53 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* std54;
      __VERIFIER_nondet_memory(&std54, sizeof(std54));
        struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp755;
        struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp856;
        struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp157;
        struct std___Rb_tree_iterator_std__pair_const_char__int__ std58;
        __VERIFIER_nondet_memory(&std58, sizeof(std58));
        ref_tmp755 = std58;
        struct std___Rb_tree_iterator_std__pair_const_char__int__* std59;
        __VERIFIER_nondet_memory(&std59, sizeof(std59));
        while (1) {
          struct std___Rb_tree_iterator_std__pair_const_char__int__ std61;
          __VERIFIER_nondet_memory(&std61, sizeof(std61));
          ref_tmp856 = std61;
          _Bool std62;
          __VERIFIER_nondet_memory(&std62, sizeof(std62));
          _Bool u63 = !std62;
          if (!u63) break;
          struct std__pair_const_char__int_* std64;
          __VERIFIER_nondet_memory(&std64, sizeof(std64));
          char t65 = std64->first;
          struct std__basic_ostream_char__std__char_traits_char__* std66;
          __VERIFIER_nondet_memory(&std66, sizeof(std66));
          char* cast67 = (char*)&(_str_1);
          struct std__basic_ostream_char__std__char_traits_char__* std68;
          __VERIFIER_nondet_memory(&std68, sizeof(std68));
          struct std__pair_const_char__int_* std69;
          __VERIFIER_nondet_memory(&std69, sizeof(std69));
          int t70 = std69->second;
          struct std__basic_ostream_char__std__char_traits_char__* std71;
          __VERIFIER_nondet_memory(&std71, sizeof(std71));
          struct std__basic_ostream_char__std__char_traits_char__* std72;
          __VERIFIER_nondet_memory(&std72, sizeof(std72));
        for_step60: ;
          int c73 = 0;
          struct std___Rb_tree_iterator_std__pair_const_char__int__ std74;
          __VERIFIER_nondet_memory(&std74, sizeof(std74));
          agg_tmp157 = std74;
        }
      char c75 = 120;
      ref_tmp910 = c75;
      int* std76;
      __VERIFIER_nondet_memory(&std76, sizeof(std76));
      int t77 = *std76;
      int c78 = 100;
      _Bool c79 = ((t77 == c78)) ? 1 : 0;
      if (c79) {
      } else {
        char* cast80 = (char*)&(_str_3);
        char* c81 = (char*)_str_4;
        unsigned int c82 = 37;
        char* cast83 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast80, c81, c82, cast83);
      }
      char c84 = 121;
      ref_tmp1011 = c84;
      int* std85;
      __VERIFIER_nondet_memory(&std85, sizeof(std85));
      int t86 = *std85;
      int c87 = 200;
      _Bool c88 = ((t86 == c87)) ? 1 : 0;
      if (c88) {
      } else {
        char* cast89 = (char*)&(_str_5);
        char* c90 = (char*)_str_4;
        unsigned int c91 = 38;
        char* cast92 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast89, c90, c91, cast92);
      }
      char c93 = 97;
      ref_tmp1112 = c93;
      int* std94;
      __VERIFIER_nondet_memory(&std94, sizeof(std94));
      int t95 = *std94;
      int c96 = 11;
      _Bool c97 = ((t95 == c96)) ? 1 : 0;
      if (c97) {
      } else {
        char* cast98 = (char*)&(_str_6);
        char* c99 = (char*)_str_4;
        unsigned int c100 = 40;
        char* cast101 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast98, c99, c100, cast101);
      }
      char c102 = 98;
      ref_tmp1213 = c102;
      int* std103;
      __VERIFIER_nondet_memory(&std103, sizeof(std103));
      int t104 = *std103;
      int c105 = 22;
      _Bool c106 = ((t104 == c105)) ? 1 : 0;
      if (c106) {
      } else {
        char* cast107 = (char*)&(_str_7);
        char* c108 = (char*)_str_4;
        unsigned int c109 = 41;
        char* cast110 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast107, c108, c109, cast110);
      }
      char c111 = 99;
      ref_tmp1314 = c111;
      int* std112;
      __VERIFIER_nondet_memory(&std112, sizeof(std112));
      int t113 = *std112;
      int c114 = 33;
      _Bool c115 = ((t113 == c114)) ? 1 : 0;
      if (c115) {
      } else {
        char* cast116 = (char*)&(_str_8);
        char* c117 = (char*)_str_4;
        unsigned int c118 = 42;
        char* cast119 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast116, c117, c118, cast119);
      }
      int c120 = 0;
      __retval1 = c120;
      int t121 = __retval1;
      int ret_val122 = t121;
      {
        // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~map()
        __VERIFIER_nondet_memory(&bar3, sizeof(bar3));
      }
      {
        // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~map()
        __VERIFIER_nondet_memory(&foo2, sizeof(foo2));
      }
      return ret_val122;
  int t123 = __retval1;
  return t123;
}

