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
struct __gnu_cxx____aligned_membuf_int_ { unsigned char _M_storage[4]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Identity_int_ { unsigned char __field0; };
struct std___Rb_tree_const_iterator_int_ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* _M_t; };
struct std___Rb_tree_iterator_int_ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_std__less_int__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_int_;
struct std____new_allocator_std___Rb_tree_node_int__;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_int__;
struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___;
struct std__less_int_;
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ { struct std___Rb_tree_const_iterator_int_ current; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__set_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int __const_main_myints[5] = {21, 64, 17, 78, 49};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[11] = "*rit != 78";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-rbegin-bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[16] = "myset contains:";
char _str_3[2] = " ";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int myints2[5];
  struct std__set_int__std__less_int___std__allocator_int__ myset3;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ rit4;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ ref_tmp05;
  int c6 = 0;
  __retval1 = c6;
  // array copy
  __builtin_memcpy(myints2, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
  int* cast7 = (int*)&(myints2);
  int* cast8 = (int*)&(myints2);
  int c9 = 5;
  int* ptr10 = &(cast8)[c9];
  // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::set<int*>(int*, int*)
  __VERIFIER_nondet_memory(&myset3, sizeof(myset3));
  __VERIFIER_nondet_memory(cast7, sizeof(*cast7));
  __VERIFIER_nondet_memory(ptr10, sizeof(*ptr10));
    // externalized std:: op: std::reverse_iterator<std::_Rb_tree_const_iterator<int> >::reverse_iterator()
    __VERIFIER_nondet_memory(&rit4, sizeof(rit4));
    struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ std11;
    __VERIFIER_nondet_memory(&std11, sizeof(std11));
    ref_tmp05 = std11;
    struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* std12;
    __VERIFIER_nondet_memory(&std12, sizeof(std12));
    int* std13;
    __VERIFIER_nondet_memory(&std13, sizeof(std13));
    int t14 = *std13;
    int c15 = 78;
    _Bool c16 = ((t14 != c15)) ? 1 : 0;
    if (c16) {
    } else {
      char* cast17 = (char*)&(_str);
      char* c18 = _str_1;
      unsigned int c19 = 20;
      char* cast20 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast17, c18, c19, cast20);
    }
    char* cast21 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std22;
    __VERIFIER_nondet_memory(&std22, sizeof(std22));
    char* cast23 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std24;
    __VERIFIER_nondet_memory(&std24, sizeof(std24));
    int* std25;
    __VERIFIER_nondet_memory(&std25, sizeof(std25));
    int t26 = *std25;
    struct std__basic_ostream_char__std__char_traits_char__* std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    struct std__basic_ostream_char__std__char_traits_char__* std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    int c29 = 0;
    __retval1 = c29;
    int t30 = __retval1;
    int ret_val31 = t30;
    {
      // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::~set()
      __VERIFIER_nondet_memory(&myset3, sizeof(myset3));
    }
    return ret_val31;
  int t32 = __retval1;
  return t32;
}

