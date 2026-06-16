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
struct std____pair_base_std___Rb_tree_const_iterator_int___bool_;
struct std____pair_base_std___Rb_tree_iterator_int___bool_;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_int__;
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__less_int_;
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__pair_std___Rb_tree_const_iterator_int___bool_ { struct std___Rb_tree_const_iterator_int_ first; _Bool second; unsigned char __field2[7]; } __attribute__((packed));
struct std__pair_std___Rb_tree_iterator_int___bool_ { struct std___Rb_tree_iterator_int_ first; _Bool second; unsigned char __field2[7]; } __attribute__((packed));
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__set_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "myset.size() == 9";
char _str_1[107] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-lower_bound/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[13] = "*itlow == 30";
char _str_3[12] = "*itup == 70";
char _str_4[18] = "myset.size() == 5";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[16] = "myset contains:";
char _str_6[2] = " ";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0: ;
  int __retval1;
  struct std__set_int__std__less_int___std__allocator_int__ myset2;
  struct std___Rb_tree_const_iterator_int_ it3;
  struct std___Rb_tree_const_iterator_int_ itlow4;
  struct std___Rb_tree_const_iterator_int_ itup5;
  struct std___Rb_tree_const_iterator_int_ ref_tmp16;
  int ref_tmp27;
  struct std___Rb_tree_const_iterator_int_ ref_tmp38;
  int ref_tmp49;
  struct std___Rb_tree_const_iterator_int_ agg_tmp110;
  struct std___Rb_tree_const_iterator_int_ agg_tmp211;
  struct std___Rb_tree_const_iterator_int_ agg_tmp312;
  int c13 = 0;
  __retval1 = c13;
  // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::set()
  __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    // externalized std:: op: std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator()
    __VERIFIER_nondet_memory(&it3, sizeof(it3));
    // externalized std:: op: std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator()
    __VERIFIER_nondet_memory(&itlow4, sizeof(itlow4));
    // externalized std:: op: std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator()
    __VERIFIER_nondet_memory(&itup5, sizeof(itup5));
      int i14;
      int ref_tmp015;
      struct std__pair_std___Rb_tree_const_iterator_int___bool_ agg_tmp016;
      int c17 = 1;
      i14 = c17;
      while (1) {
        int t19 = i14;
        int c20 = 10;
        _Bool c21 = ((t19 < c20)) ? 1 : 0;
        if (!c21) break;
        int t22 = i14;
        int c23 = 10;
        int b24 = t22 * c23;
        ref_tmp015 = b24;
        struct std__pair_std___Rb_tree_const_iterator_int___bool_ std25;
        __VERIFIER_nondet_memory(&std25, sizeof(std25));
        agg_tmp016 = std25;
      for_step18: ;
        int t26 = i14;
        int u27 = t26 + 1;
        i14 = u27;
      }
    unsigned long std28 = __VERIFIER_nondet_unsigned_long();
    unsigned long c29 = 9;
    _Bool c30 = ((std28 == c29)) ? 1 : 0;
    if (c30) {
    } else {
      char* cast31 = (char*)&(_str);
      char* c32 = (char*)_str_1;
      unsigned int c33 = 19;
      char* cast34 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast31, c32, c33, cast34);
    }
    int c35 = 30;
    ref_tmp27 = c35;
    struct std___Rb_tree_const_iterator_int_ std36;
    __VERIFIER_nondet_memory(&std36, sizeof(std36));
    ref_tmp16 = std36;
    struct std___Rb_tree_const_iterator_int_* std37;
    __VERIFIER_nondet_memory(&std37, sizeof(std37));
    int* std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    int t39 = *std38;
    int c40 = 30;
    _Bool c41 = ((t39 == c40)) ? 1 : 0;
    if (c41) {
    } else {
      char* cast42 = (char*)&(_str_2);
      char* c43 = (char*)_str_1;
      unsigned int c44 = 21;
      char* cast45 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast42, c43, c44, cast45);
    }
    int c46 = 60;
    ref_tmp49 = c46;
    struct std___Rb_tree_const_iterator_int_ std47;
    __VERIFIER_nondet_memory(&std47, sizeof(std47));
    ref_tmp38 = std47;
    struct std___Rb_tree_const_iterator_int_* std48;
    __VERIFIER_nondet_memory(&std48, sizeof(std48));
    int* std49;
    __VERIFIER_nondet_memory(&std49, sizeof(std49));
    int t50 = *std49;
    int c51 = 70;
    _Bool c52 = ((t50 == c51)) ? 1 : 0;
    if (c52) {
    } else {
      char* cast53 = (char*)&(_str_3);
      char* c54 = (char*)_str_1;
      unsigned int c55 = 23;
      char* cast56 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast53, c54, c55, cast56);
    }
    agg_tmp110 = itlow4; // copy
    agg_tmp211 = itup5; // copy
    struct std___Rb_tree_const_iterator_int_ t57 = agg_tmp110;
    struct std___Rb_tree_const_iterator_int_ t58 = agg_tmp211;
    struct std___Rb_tree_const_iterator_int_ std59;
    __VERIFIER_nondet_memory(&std59, sizeof(std59));
    agg_tmp312 = std59;
    unsigned long std60 = __VERIFIER_nondet_unsigned_long();
    unsigned long c61 = 5;
    _Bool c62 = ((std60 == c61)) ? 1 : 0;
    if (c62) {
    } else {
      char* cast63 = (char*)&(_str_4);
      char* c64 = (char*)_str_1;
      unsigned int c65 = 25;
      char* cast66 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast63, c64, c65, cast66);
    }
    char* cast67 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* std68;
    __VERIFIER_nondet_memory(&std68, sizeof(std68));
      struct std___Rb_tree_const_iterator_int_ ref_tmp569;
      struct std___Rb_tree_const_iterator_int_ ref_tmp670;
      struct std___Rb_tree_const_iterator_int_ agg_tmp471;
      struct std___Rb_tree_const_iterator_int_ std72;
      __VERIFIER_nondet_memory(&std72, sizeof(std72));
      ref_tmp569 = std72;
      struct std___Rb_tree_const_iterator_int_* std73;
      __VERIFIER_nondet_memory(&std73, sizeof(std73));
      while (1) {
        struct std___Rb_tree_const_iterator_int_ std75;
        __VERIFIER_nondet_memory(&std75, sizeof(std75));
        ref_tmp670 = std75;
        _Bool std76;
        __VERIFIER_nondet_memory(&std76, sizeof(std76));
        _Bool u77 = !std76;
        if (!u77) break;
        char* cast78 = (char*)&(_str_6);
        struct std__basic_ostream_char__std__char_traits_char__* std79;
        __VERIFIER_nondet_memory(&std79, sizeof(std79));
        int* std80;
        __VERIFIER_nondet_memory(&std80, sizeof(std80));
        int t81 = *std80;
        struct std__basic_ostream_char__std__char_traits_char__* std82;
        __VERIFIER_nondet_memory(&std82, sizeof(std82));
      for_step74: ;
        int c83 = 0;
        struct std___Rb_tree_const_iterator_int_ std84;
        __VERIFIER_nondet_memory(&std84, sizeof(std84));
        agg_tmp471 = std84;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std85;
    __VERIFIER_nondet_memory(&std85, sizeof(std85));
    int c86 = 0;
    __retval1 = c86;
    int t87 = __retval1;
    int ret_val88 = t87;
    {
      // externalized std:: op: std::set<int, std::less<int>, std::allocator<int> >::~set()
      __VERIFIER_nondet_memory(&myset2, sizeof(myset2));
    }
    return ret_val88;
  int t89 = __retval1;
  return t89;
}

