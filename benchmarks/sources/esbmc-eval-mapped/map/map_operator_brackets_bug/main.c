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
struct __gnu_cxx____aligned_membuf_std__pair_const_char__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____ { unsigned char _M_storage[40]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std___Head_base_0UL__char_____false_ { char* _M_head_impl; };
struct std___Index_tuple_0UL_ { unsigned char __field0; };
struct std___Index_tuple__ { unsigned char __field0; };
struct std___Rb_tree_char__std__pair_const_char__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____std___Select1st_std__pair_const_char__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______std__less_char___std__allocator_std__pair_const_char__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char________Auto_node { struct std___Rb_tree_char__std__pair_const_char__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____std___Select1st_std__pair_const_char__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______std__less_char___std__allocator_std__pair_const_char__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____* _M_t; struct std___Rb_tree_node_std__pair_const_char__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____* _M_node; };
struct std___Rb_tree_const_iterator_std__pair_const_char__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_iterator_std__pair_const_char__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_std__less_char__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_std__pair_const_char__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____;
struct std___Select1st_std__pair_const_char__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____ { unsigned char __field0; };
struct std___Tuple_impl_0UL__char____ { struct std___Head_base_0UL__char_____false_ __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std____new_allocator_std___Rb_tree_node_std__pair_const_char__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____;
struct std____pair_base_const_char__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_char_ { unsigned char __field0; };
struct std__allocator_std___Rb_tree_node_std__pair_const_char__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____;
struct std__less_char_ { unsigned char __field0; };
struct std__less_const_char___ { unsigned char __field0; };
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std__piecewise_construct_t { unsigned char __field0; };
struct std__tuple__ { unsigned char __field0; };
struct std__tuple_char____ { struct std___Tuple_impl_0UL__char____ __field0; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__ctype_char_;
struct std__ios_base;
struct std__pair_const_char__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___;
struct std___Rb_tree_char__std__pair_const_char__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____std___Select1st_std__pair_const_char__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______std__less_char___std__allocator_std__pair_const_char__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char________Rb_tree_impl_std__less_char___true_ { struct std___Rb_tree_key_compare_std__less_char__ __field0; struct std___Rb_tree_header __field1; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std___Rb_tree_char__std__pair_const_char__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____std___Select1st_std__pair_const_char__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______std__less_char___std__allocator_std__pair_const_char__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____ { struct std___Rb_tree_char__std__pair_const_char__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____std___Select1st_std__pair_const_char__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______std__less_char___std__allocator_std__pair_const_char__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char________Rb_tree_impl_std__less_char___true_ _M_impl; };
struct std__map_char__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__less_char___std__allocator_std__pair_const_char__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____ { struct std___Rb_tree_char__std__pair_const_char__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____std___Select1st_std__pair_const_char__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______std__less_char___std__allocator_std__pair_const_char__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____ _M_t; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[11] = "an element";
char _str_1[16] = "another element";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[15] = "mymap['a'] is ";
char _str_3[15] = "mymap['b'] is ";
char _str_4[15] = "mymap['c'] is ";
char _str_5[15] = "mymap['d'] is ";
char _str_6[25] = "mymap['a']==\"an element\"";
char _str_7[117] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/map/map_operator_brackets_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_8[30] = "mymap['b']==\"another element\"";
char _str_9[23] = "mymap['c']!=mymap['b']";
char _str_10[21] = "mymap['d']!=string()";
char _str_11[20] = "mymap now contains ";
char _str_12[11] = " elements.";
char _str_13[25] = "basic_string::_M_replace";
char _str_14[24] = "basic_string::_M_create";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
struct std__piecewise_construct_t _ZSt19piecewise_construct;
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__map_char__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__less_char___std__allocator_std__pair_const_char__std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____ mymap2;
  char ref_tmp03;
  char ref_tmp14;
  char ref_tmp25;
  char ref_tmp36;
  char ref_tmp47;
  char ref_tmp58;
  char ref_tmp69;
  char ref_tmp710;
  char ref_tmp811;
  char ref_tmp912;
  char ref_tmp1013;
  char ref_tmp1114;
  char ref_tmp1215;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp1316;
  int c17 = 0;
  __retval1 = c17;
  // externalized std:: op: std::map<char, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::less<char>, std::allocator<std::pair<char const, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >::map()
  __VERIFIER_nondet_memory(&mymap2, sizeof(mymap2));
    char* cast18 = (char*)&(_str);
    char c19 = 97;
    ref_tmp03 = c19;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std20;
    __VERIFIER_nondet_memory(&std20, sizeof(std20));
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std21;
    __VERIFIER_nondet_memory(&std21, sizeof(std21));
    char* cast22 = (char*)&(_str_1);
    char c23 = 98;
    ref_tmp14 = c23;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std24;
    __VERIFIER_nondet_memory(&std24, sizeof(std24));
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std25;
    __VERIFIER_nondet_memory(&std25, sizeof(std25));
    char c26 = 98;
    ref_tmp25 = c26;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    char c28 = 99;
    ref_tmp36 = c28;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
    char* cast31 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    char c33 = 97;
    ref_tmp47 = c33;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std34;
    __VERIFIER_nondet_memory(&std34, sizeof(std34));
    struct std__basic_ostream_char__std__char_traits_char__* std35;
    __VERIFIER_nondet_memory(&std35, sizeof(std35));
    struct std__basic_ostream_char__std__char_traits_char__* std36;
    __VERIFIER_nondet_memory(&std36, sizeof(std36));
    char* cast37 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    char c39 = 98;
    ref_tmp58 = c39;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    struct std__basic_ostream_char__std__char_traits_char__* std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
    struct std__basic_ostream_char__std__char_traits_char__* std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    char* cast43 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std44;
    __VERIFIER_nondet_memory(&std44, sizeof(std44));
    char c45 = 99;
    ref_tmp69 = c45;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std46;
    __VERIFIER_nondet_memory(&std46, sizeof(std46));
    struct std__basic_ostream_char__std__char_traits_char__* std47;
    __VERIFIER_nondet_memory(&std47, sizeof(std47));
    struct std__basic_ostream_char__std__char_traits_char__* std48;
    __VERIFIER_nondet_memory(&std48, sizeof(std48));
    char* cast49 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* std50;
    __VERIFIER_nondet_memory(&std50, sizeof(std50));
    char c51 = 100;
    ref_tmp710 = c51;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std52;
    __VERIFIER_nondet_memory(&std52, sizeof(std52));
    struct std__basic_ostream_char__std__char_traits_char__* std53;
    __VERIFIER_nondet_memory(&std53, sizeof(std53));
    struct std__basic_ostream_char__std__char_traits_char__* std54;
    __VERIFIER_nondet_memory(&std54, sizeof(std54));
    char c55 = 97;
    ref_tmp811 = c55;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std56;
    __VERIFIER_nondet_memory(&std56, sizeof(std56));
    char* cast57 = (char*)&(_str);
    _Bool std58;
    __VERIFIER_nondet_memory(&std58, sizeof(std58));
    if (std58) {
    } else {
      char* cast59 = (char*)&(_str_6);
      char* c60 = _str_7;
      unsigned int c61 = 28;
      char* cast62 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast59, c60, c61, cast62);
    }
    char c63 = 98;
    ref_tmp912 = c63;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std64;
    __VERIFIER_nondet_memory(&std64, sizeof(std64));
    char* cast65 = (char*)&(_str_1);
    _Bool std66;
    __VERIFIER_nondet_memory(&std66, sizeof(std66));
    if (std66) {
    } else {
      char* cast67 = (char*)&(_str_8);
      char* c68 = _str_7;
      unsigned int c69 = 29;
      char* cast70 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast67, c68, c69, cast70);
    }
    char c71 = 99;
    ref_tmp1013 = c71;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std72;
    __VERIFIER_nondet_memory(&std72, sizeof(std72));
    char c73 = 98;
    ref_tmp1114 = c73;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std74;
    __VERIFIER_nondet_memory(&std74, sizeof(std74));
    _Bool std75;
    __VERIFIER_nondet_memory(&std75, sizeof(std75));
    _Bool u76 = !std75;
    if (u76) {
    } else {
      char* cast77 = (char*)&(_str_9);
      char* c78 = _str_7;
      unsigned int c79 = 30;
      char* cast80 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast77, c78, c79, cast80);
    }
    char c81 = 100;
    ref_tmp1215 = c81;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std82;
    __VERIFIER_nondet_memory(&std82, sizeof(std82));
    // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
    __VERIFIER_nondet_memory(&ref_tmp1316, sizeof(ref_tmp1316));
      _Bool std83;
      __VERIFIER_nondet_memory(&std83, sizeof(std83));
      _Bool u84 = !std83;
      if (u84) {
      } else {
        char* cast85 = (char*)&(_str_10);
        char* c86 = _str_7;
        unsigned int c87 = 31;
        char* cast88 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast85, c86, c87, cast88);
      }
    {
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
      __VERIFIER_nondet_memory(&ref_tmp1316, sizeof(ref_tmp1316));
    }
    char* cast89 = (char*)&(_str_11);
    struct std__basic_ostream_char__std__char_traits_char__* std90;
    __VERIFIER_nondet_memory(&std90, sizeof(std90));
    unsigned long std91 = __VERIFIER_nondet_unsigned_long();
    int cast92 = (int)std91;
    struct std__basic_ostream_char__std__char_traits_char__* std93;
    __VERIFIER_nondet_memory(&std93, sizeof(std93));
    char* cast94 = (char*)&(_str_12);
    struct std__basic_ostream_char__std__char_traits_char__* std95;
    __VERIFIER_nondet_memory(&std95, sizeof(std95));
    struct std__basic_ostream_char__std__char_traits_char__* std96;
    __VERIFIER_nondet_memory(&std96, sizeof(std96));
    int c97 = 0;
    __retval1 = c97;
    int t98 = __retval1;
    int ret_val99 = t98;
    {
      // externalized std:: op: std::map<char, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::less<char>, std::allocator<std::pair<char const, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >::~map()
      __VERIFIER_nondet_memory(&mymap2, sizeof(mymap2));
    }
    return ret_val99;
  int t100 = __retval1;
  return t100;
}

