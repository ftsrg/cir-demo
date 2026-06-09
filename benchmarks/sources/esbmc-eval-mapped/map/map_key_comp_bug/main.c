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
struct std__binary_function_char__char__bool_;
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
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[17] = "mymap contains:\n";
char _str_1[5] = " => ";
char _str_2[34] = "!(mycomp((*it++).first, highest))";
char _str_3[108] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/map/map_key_comp_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
struct std__piecewise_construct_t _ZSt19piecewise_construct;
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__map_char__int__std__less_char___std__allocator_std__pair_const_char__int___ mymap2;
  struct std__less_char_ mycomp3;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ it4;
  char highest5;
  struct std__less_char_ ref_tmp06;
  char ref_tmp17;
  char ref_tmp28;
  char ref_tmp39;
  struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ ref_tmp410;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp511;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp712;
  int c13 = 0;
  __retval1 = c13;
  // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::map()
  __VERIFIER_nondet_memory(&mymap2, sizeof(mymap2));
    // externalized std:: op: std::_Rb_tree_iterator<std::pair<char const, int> >::_Rb_tree_iterator()
    __VERIFIER_nondet_memory(&it4, sizeof(it4));
    struct std__less_char_ std14;
    __VERIFIER_nondet_memory(&std14, sizeof(std14));
    ref_tmp06 = std14;
    struct std__less_char_* std15;
    __VERIFIER_nondet_memory(&std15, sizeof(std15));
    int c16 = 100;
    char c17 = 97;
    ref_tmp17 = c17;
    int* std18;
    __VERIFIER_nondet_memory(&std18, sizeof(std18));
    *std18 = c16;
    int c19 = 200;
    char c20 = 98;
    ref_tmp28 = c20;
    int* std21;
    __VERIFIER_nondet_memory(&std21, sizeof(std21));
    *std21 = c19;
    int c22 = 300;
    char c23 = 99;
    ref_tmp39 = c23;
    int* std24;
    __VERIFIER_nondet_memory(&std24, sizeof(std24));
    *std24 = c22;
    char* cast25 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    struct std__reverse_iterator_std___Rb_tree_iterator_std__pair_const_char__int___ std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    ref_tmp410 = std27;
    struct std__pair_const_char__int_* std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    char t29 = std28->first;
    highest5 = t29;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
    ref_tmp511 = std30;
    struct std___Rb_tree_iterator_std__pair_const_char__int__* std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
      struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp632;
      do {
          struct std__pair_const_char__int_* std33;
          __VERIFIER_nondet_memory(&std33, sizeof(std33));
          char t34 = std33->first;
          struct std__basic_ostream_char__std__char_traits_char__* std35;
          __VERIFIER_nondet_memory(&std35, sizeof(std35));
          char* cast36 = (char*)&(_str_1);
          struct std__basic_ostream_char__std__char_traits_char__* std37;
          __VERIFIER_nondet_memory(&std37, sizeof(std37));
          struct std__pair_const_char__int_* std38;
          __VERIFIER_nondet_memory(&std38, sizeof(std38));
          int t39 = std38->second;
          struct std__basic_ostream_char__std__char_traits_char__* std40;
          __VERIFIER_nondet_memory(&std40, sizeof(std40));
          struct std__basic_ostream_char__std__char_traits_char__* std41;
          __VERIFIER_nondet_memory(&std41, sizeof(std41));
        int c42 = 0;
        struct std___Rb_tree_iterator_std__pair_const_char__int__ std43;
        __VERIFIER_nondet_memory(&std43, sizeof(std43));
        ref_tmp632 = std43;
        struct std__pair_const_char__int_* std44;
        __VERIFIER_nondet_memory(&std44, sizeof(std44));
        _Bool std45;
        __VERIFIER_nondet_memory(&std45, sizeof(std45));
        if (!std45) break;
      } while (1);
    int c46 = 0;
    struct std___Rb_tree_iterator_std__pair_const_char__int__ std47;
    __VERIFIER_nondet_memory(&std47, sizeof(std47));
    ref_tmp712 = std47;
    struct std__pair_const_char__int_* std48;
    __VERIFIER_nondet_memory(&std48, sizeof(std48));
    _Bool std49;
    __VERIFIER_nondet_memory(&std49, sizeof(std49));
    _Bool u50 = !std49;
    if (u50) {
    } else {
      char* cast51 = (char*)&(_str_2);
      char* c52 = _str_3;
      unsigned int c53 = 35;
      char* cast54 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast51, c52, c53, cast54);
    }
    struct std__basic_ostream_char__std__char_traits_char__* std55;
    __VERIFIER_nondet_memory(&std55, sizeof(std55));
    int c56 = 0;
    __retval1 = c56;
    int t57 = __retval1;
    int ret_val58 = t57;
    {
      // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~map()
      __VERIFIER_nondet_memory(&mymap2, sizeof(mymap2));
    }
    return ret_val58;
  int t59 = __retval1;
  return t59;
}

