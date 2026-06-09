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
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Alloc_node { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___* _M_t; };
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
struct std__less_char_ { unsigned char __field0; };
struct std__pair_const_char__int_;
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std__piecewise_construct_t { unsigned char __field0; };
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

int __const_main_intarray[4] = {100, 300, 400, 200};
char __const_main_chararray[4] = {97, 98, 99, 122};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[17] = "mymap contains:\n";
char _str_1[5] = " => ";
char _str_2[28] = "(*it).first == chararray[i]";
char _str_3[107] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/map/map_insert3_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[28] = "(*it).second == intarray[i]";
char _str_5[22] = "anothermap contains:\n";
char _str_6[28] = "(*it).second != intarray[i]";
struct std__piecewise_construct_t _ZSt19piecewise_construct;
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__map_char__int__std__less_char___std__allocator_std__pair_const_char__int___ mymap2;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ it3;
  char ref_tmp04;
  char ref_tmp15;
  char ref_tmp26;
  char ref_tmp37;
  char chararray8[4];
  int intarray9[4];
  struct std__map_char__int__std__less_char___std__allocator_std__pair_const_char__int___ anothermap10;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp011;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp112;
  char ref_tmp413;
  int i14;
  int c15 = 0;
  __retval1 = c15;
  // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::map()
  __VERIFIER_nondet_memory(&mymap2, sizeof(mymap2));
    // externalized std:: op: std::_Rb_tree_iterator<std::pair<char const, int> >::_Rb_tree_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    int c16 = 100;
    char c17 = 97;
    ref_tmp04 = c17;
    int* std18;
    __VERIFIER_nondet_memory(&std18, sizeof(std18));
    *std18 = c16;
    int c19 = 300;
    char c20 = 98;
    ref_tmp15 = c20;
    int* std21;
    __VERIFIER_nondet_memory(&std21, sizeof(std21));
    *std21 = c19;
    int c22 = 400;
    char c23 = 99;
    ref_tmp26 = c23;
    int* std24;
    __VERIFIER_nondet_memory(&std24, sizeof(std24));
    *std24 = c22;
    int c25 = 200;
    char c26 = 122;
    ref_tmp37 = c26;
    int* std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    *std27 = c25;
    // array copy
    __builtin_memcpy(chararray8, __const_main_chararray, (unsigned long)4 * sizeof(__const_main_chararray[0]));
    // array copy
    __builtin_memcpy(intarray9, __const_main_intarray, (unsigned long)4 * sizeof(__const_main_intarray[0]));
    // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::map()
    __VERIFIER_nondet_memory(&anothermap10, sizeof(anothermap10));
      struct std___Rb_tree_iterator_std__pair_const_char__int__ std28;
      __VERIFIER_nondet_memory(&std28, sizeof(std28));
      agg_tmp011 = std28;
      char c29 = 99;
      ref_tmp413 = c29;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ std30;
      __VERIFIER_nondet_memory(&std30, sizeof(std30));
      agg_tmp112 = std30;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ t31 = agg_tmp011;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ t32 = agg_tmp112;
      // externalized std:: op: void std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::insert<std::_Rb_tree_iterator<std::pair<char const, int> > >(std::_Rb_tree_iterator<std::pair<char const, int> >, std::_Rb_tree_iterator<std::pair<char const, int> >)
      __VERIFIER_nondet_memory(&anothermap10, sizeof(anothermap10));
      int c33 = 0;
      i14 = c33;
      char* cast34 = (char*)&(_str);
      struct std__basic_ostream_char__std__char_traits_char__* std35;
      __VERIFIER_nondet_memory(&std35, sizeof(std35));
        struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp536;
        struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp637;
        struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp238;
        struct std___Rb_tree_iterator_std__pair_const_char__int__ std39;
        __VERIFIER_nondet_memory(&std39, sizeof(std39));
        ref_tmp536 = std39;
        struct std___Rb_tree_iterator_std__pair_const_char__int__* std40;
        __VERIFIER_nondet_memory(&std40, sizeof(std40));
        while (1) {
          struct std___Rb_tree_iterator_std__pair_const_char__int__ std42;
          __VERIFIER_nondet_memory(&std42, sizeof(std42));
          ref_tmp637 = std42;
          _Bool std43;
          __VERIFIER_nondet_memory(&std43, sizeof(std43));
          _Bool u44 = !std43;
          if (!u44) break;
            struct std__pair_const_char__int_* std45;
            __VERIFIER_nondet_memory(&std45, sizeof(std45));
            char t46 = std45->first;
            struct std__basic_ostream_char__std__char_traits_char__* std47;
            __VERIFIER_nondet_memory(&std47, sizeof(std47));
            char* cast48 = (char*)&(_str_1);
            struct std__basic_ostream_char__std__char_traits_char__* std49;
            __VERIFIER_nondet_memory(&std49, sizeof(std49));
            struct std__pair_const_char__int_* std50;
            __VERIFIER_nondet_memory(&std50, sizeof(std50));
            int t51 = std50->second;
            struct std__basic_ostream_char__std__char_traits_char__* std52;
            __VERIFIER_nondet_memory(&std52, sizeof(std52));
            struct std__basic_ostream_char__std__char_traits_char__* std53;
            __VERIFIER_nondet_memory(&std53, sizeof(std53));
            struct std__pair_const_char__int_* std54;
            __VERIFIER_nondet_memory(&std54, sizeof(std54));
            char t55 = std54->first;
            int cast56 = (int)t55;
            int t57 = i14;
            long cast58 = (long)t57;
            char t59 = chararray8[cast58];
            int cast60 = (int)t59;
            _Bool c61 = ((cast56 == cast60)) ? 1 : 0;
            if (c61) {
            } else {
              char* cast62 = (char*)&(_str_2);
              char* c63 = _str_3;
              unsigned int c64 = 35;
              char* cast65 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast62, c63, c64, cast65);
            }
            struct std__pair_const_char__int_* std66;
            __VERIFIER_nondet_memory(&std66, sizeof(std66));
            int t67 = std66->second;
            int t68 = i14;
            long cast69 = (long)t68;
            int t70 = intarray9[cast69];
            _Bool c71 = ((t67 == t70)) ? 1 : 0;
            if (c71) {
            } else {
              char* cast72 = (char*)&(_str_4);
              char* c73 = _str_3;
              unsigned int c74 = 36;
              char* cast75 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast72, c73, c74, cast75);
            }
            int t76 = i14;
            int u77 = t76 + 1;
            i14 = u77;
        for_step41: ;
          int c78 = 0;
          struct std___Rb_tree_iterator_std__pair_const_char__int__ std79;
          __VERIFIER_nondet_memory(&std79, sizeof(std79));
          agg_tmp238 = std79;
        }
      int c80 = 0;
      i14 = c80;
      char* cast81 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* std82;
      __VERIFIER_nondet_memory(&std82, sizeof(std82));
        struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp783;
        struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp884;
        struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp385;
        struct std___Rb_tree_iterator_std__pair_const_char__int__ std86;
        __VERIFIER_nondet_memory(&std86, sizeof(std86));
        ref_tmp783 = std86;
        struct std___Rb_tree_iterator_std__pair_const_char__int__* std87;
        __VERIFIER_nondet_memory(&std87, sizeof(std87));
        while (1) {
          struct std___Rb_tree_iterator_std__pair_const_char__int__ std89;
          __VERIFIER_nondet_memory(&std89, sizeof(std89));
          ref_tmp884 = std89;
          _Bool std90;
          __VERIFIER_nondet_memory(&std90, sizeof(std90));
          _Bool u91 = !std90;
          if (!u91) break;
            struct std__pair_const_char__int_* std92;
            __VERIFIER_nondet_memory(&std92, sizeof(std92));
            char t93 = std92->first;
            struct std__basic_ostream_char__std__char_traits_char__* std94;
            __VERIFIER_nondet_memory(&std94, sizeof(std94));
            char* cast95 = (char*)&(_str_1);
            struct std__basic_ostream_char__std__char_traits_char__* std96;
            __VERIFIER_nondet_memory(&std96, sizeof(std96));
            struct std__pair_const_char__int_* std97;
            __VERIFIER_nondet_memory(&std97, sizeof(std97));
            int t98 = std97->second;
            struct std__basic_ostream_char__std__char_traits_char__* std99;
            __VERIFIER_nondet_memory(&std99, sizeof(std99));
            struct std__basic_ostream_char__std__char_traits_char__* std100;
            __VERIFIER_nondet_memory(&std100, sizeof(std100));
            struct std__pair_const_char__int_* std101;
            __VERIFIER_nondet_memory(&std101, sizeof(std101));
            char t102 = std101->first;
            int cast103 = (int)t102;
            int t104 = i14;
            long cast105 = (long)t104;
            char t106 = chararray8[cast105];
            int cast107 = (int)t106;
            _Bool c108 = ((cast103 == cast107)) ? 1 : 0;
            if (c108) {
            } else {
              char* cast109 = (char*)&(_str_2);
              char* c110 = _str_3;
              unsigned int c111 = 43;
              char* cast112 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast109, c110, c111, cast112);
            }
            struct std__pair_const_char__int_* std113;
            __VERIFIER_nondet_memory(&std113, sizeof(std113));
            int t114 = std113->second;
            int t115 = i14;
            long cast116 = (long)t115;
            int t117 = intarray9[cast116];
            _Bool c118 = ((t114 != t117)) ? 1 : 0;
            if (c118) {
            } else {
              char* cast119 = (char*)&(_str_6);
              char* c120 = _str_3;
              unsigned int c121 = 44;
              char* cast122 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast119, c120, c121, cast122);
            }
            int t123 = i14;
            int u124 = t123 + 1;
            i14 = u124;
        for_step88: ;
          int c125 = 0;
          struct std___Rb_tree_iterator_std__pair_const_char__int__ std126;
          __VERIFIER_nondet_memory(&std126, sizeof(std126));
          agg_tmp385 = std126;
        }
      int c127 = 0;
      __retval1 = c127;
      int t128 = __retval1;
      int ret_val129 = t128;
      {
        // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~map()
        __VERIFIER_nondet_memory(&anothermap10, sizeof(anothermap10));
      }
      {
        // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~map()
        __VERIFIER_nondet_memory(&mymap2, sizeof(mymap2));
      }
      return ret_val129;
  int t130 = __retval1;
  return t130;
}

