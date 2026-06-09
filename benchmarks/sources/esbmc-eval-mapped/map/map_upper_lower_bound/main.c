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

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[22] = "(*itlow).first == 'b'";
char _str_1[113] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/map/map_upper_lower_bound/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[21] = "(*itup).first == 'e'";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[5] = " => ";
char _str_4[18] = "mymap.size() == 2";
struct std__piecewise_construct_t _ZSt19piecewise_construct;
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__map_char__int__std__less_char___std__allocator_std__pair_const_char__int___ mymap2;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ it3;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ itlow4;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ itup5;
  char ref_tmp06;
  char ref_tmp17;
  char ref_tmp28;
  char ref_tmp39;
  char ref_tmp410;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp511;
  char ref_tmp612;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp713;
  char ref_tmp814;
  struct std___Rb_tree_const_iterator_std__pair_const_char__int__ agg_tmp015;
  struct std___Rb_tree_const_iterator_std__pair_const_char__int__ agg_tmp116;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp217;
  int c18 = 0;
  __retval1 = c18;
  // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::map()
  __VERIFIER_nondet_memory(&mymap2, sizeof(mymap2));
    // externalized std:: op: std::_Rb_tree_iterator<std::pair<char const, int> >::_Rb_tree_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    // externalized std:: op: std::_Rb_tree_iterator<std::pair<char const, int> >::_Rb_tree_iterator()
    __VERIFIER_nondet_memory(&itlow4, sizeof(itlow4));
    // externalized std:: op: std::_Rb_tree_iterator<std::pair<char const, int> >::_Rb_tree_iterator()
    __VERIFIER_nondet_memory(&itup5, sizeof(itup5));
    int c19 = 20;
    char c20 = 97;
    ref_tmp06 = c20;
    int* std21;
    __VERIFIER_nondet_memory(&std21, sizeof(std21));
    *std21 = c19;
    int c22 = 40;
    char c23 = 98;
    ref_tmp17 = c23;
    int* std24;
    __VERIFIER_nondet_memory(&std24, sizeof(std24));
    *std24 = c22;
    int c25 = 60;
    char c26 = 99;
    ref_tmp28 = c26;
    int* std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    *std27 = c25;
    int c28 = 80;
    char c29 = 100;
    ref_tmp39 = c29;
    int* std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
    *std30 = c28;
    int c31 = 100;
    char c32 = 101;
    ref_tmp410 = c32;
    int* std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    *std33 = c31;
    char c34 = 98;
    ref_tmp612 = c34;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std35;
    __VERIFIER_nondet_memory(&std35, sizeof(std35));
    ref_tmp511 = std35;
    struct std___Rb_tree_iterator_std__pair_const_char__int__* std36;
    __VERIFIER_nondet_memory(&std36, sizeof(std36));
    struct std__pair_const_char__int_* std37;
    __VERIFIER_nondet_memory(&std37, sizeof(std37));
    char t38 = std37->first;
    int cast39 = (int)t38;
    int c40 = 98;
    _Bool c41 = ((cast39 == c40)) ? 1 : 0;
    if (c41) {
    } else {
      char* cast42 = (char*)&(_str);
      char* c43 = _str_1;
      unsigned int c44 = 26;
      char* cast45 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast42, c43, c44, cast45);
    }
    char c46 = 100;
    ref_tmp814 = c46;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std47;
    __VERIFIER_nondet_memory(&std47, sizeof(std47));
    ref_tmp713 = std47;
    struct std___Rb_tree_iterator_std__pair_const_char__int__* std48;
    __VERIFIER_nondet_memory(&std48, sizeof(std48));
    struct std__pair_const_char__int_* std49;
    __VERIFIER_nondet_memory(&std49, sizeof(std49));
    char t50 = std49->first;
    int cast51 = (int)t50;
    int c52 = 101;
    _Bool c53 = ((cast51 == c52)) ? 1 : 0;
    if (c53) {
    } else {
      char* cast54 = (char*)&(_str_2);
      char* c55 = _str_1;
      unsigned int c56 = 28;
      char* cast57 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast54, c55, c56, cast57);
    }
    // externalized std:: op: std::_Rb_tree_const_iterator<std::pair<char const, int> >::_Rb_tree_const_iterator(std::_Rb_tree_iterator<std::pair<char const, int> > const&)
    __VERIFIER_nondet_memory(&agg_tmp015, sizeof(agg_tmp015));
    __VERIFIER_nondet_memory(&itlow4, sizeof(itlow4));
    // externalized std:: op: std::_Rb_tree_const_iterator<std::pair<char const, int> >::_Rb_tree_const_iterator(std::_Rb_tree_iterator<std::pair<char const, int> > const&)
    __VERIFIER_nondet_memory(&agg_tmp116, sizeof(agg_tmp116));
    __VERIFIER_nondet_memory(&itup5, sizeof(itup5));
    struct std___Rb_tree_const_iterator_std__pair_const_char__int__ t58 = agg_tmp015;
    struct std___Rb_tree_const_iterator_std__pair_const_char__int__ t59 = agg_tmp116;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std60;
    __VERIFIER_nondet_memory(&std60, sizeof(std60));
    agg_tmp217 = std60;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp961;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp1062;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp363;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ std64;
      __VERIFIER_nondet_memory(&std64, sizeof(std64));
      ref_tmp961 = std64;
      struct std___Rb_tree_iterator_std__pair_const_char__int__* std65;
      __VERIFIER_nondet_memory(&std65, sizeof(std65));
      while (1) {
        struct std___Rb_tree_iterator_std__pair_const_char__int__ std67;
        __VERIFIER_nondet_memory(&std67, sizeof(std67));
        ref_tmp1062 = std67;
        _Bool std68;
        __VERIFIER_nondet_memory(&std68, sizeof(std68));
        _Bool u69 = !std68;
        if (!u69) break;
        struct std__pair_const_char__int_* std70;
        __VERIFIER_nondet_memory(&std70, sizeof(std70));
        char t71 = std70->first;
        struct std__basic_ostream_char__std__char_traits_char__* std72;
        __VERIFIER_nondet_memory(&std72, sizeof(std72));
        char* cast73 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std74;
        __VERIFIER_nondet_memory(&std74, sizeof(std74));
        struct std__pair_const_char__int_* std75;
        __VERIFIER_nondet_memory(&std75, sizeof(std75));
        int t76 = std75->second;
        struct std__basic_ostream_char__std__char_traits_char__* std77;
        __VERIFIER_nondet_memory(&std77, sizeof(std77));
        struct std__basic_ostream_char__std__char_traits_char__* std78;
        __VERIFIER_nondet_memory(&std78, sizeof(std78));
      for_step66: ;
        int c79 = 0;
        struct std___Rb_tree_iterator_std__pair_const_char__int__ std80;
        __VERIFIER_nondet_memory(&std80, sizeof(std80));
        agg_tmp363 = std80;
      }
    unsigned long std81 = __VERIFIER_nondet_unsigned_long();
    unsigned long c82 = 2;
    _Bool c83 = ((std81 == c82)) ? 1 : 0;
    if (c83) {
    } else {
      char* cast84 = (char*)&(_str_4);
      char* c85 = _str_1;
      unsigned int c86 = 34;
      char* cast87 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast84, c85, c86, cast87);
    }
    int c88 = 0;
    __retval1 = c88;
    int t89 = __retval1;
    int ret_val90 = t89;
    {
      // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~map()
      __VERIFIER_nondet_memory(&mymap2, sizeof(mymap2));
    }
    return ret_val90;
  int t91 = __retval1;
  return t91;
}

