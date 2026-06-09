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
struct __gnu_cxx____aligned_membuf_double_ { unsigned char _M_storage[8]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Identity_double_ { unsigned char __field0; };
struct std___Rb_tree_const_iterator_double_ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Alloc_node { struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* _M_t; };
struct std___Rb_tree_iterator_double_ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_std__less_double__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_double_;
struct std____new_allocator_std___Rb_tree_node_double__;
struct std____pair_base_std___Rb_tree_const_iterator_double___bool_;
struct std____pair_base_std___Rb_tree_iterator_double___bool_;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_double__;
struct std__iterator_std__output_iterator_tag__void__void__void__void_;
struct std__less_double_;
struct std__ostream_iterator_double__char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__* _M_stream; char* _M_string; };
struct std__pair_std___Rb_tree_const_iterator_double___bool_ { struct std___Rb_tree_const_iterator_double_ first; _Bool second; unsigned char __field2[7]; } __attribute__((packed));
struct std__pair_std___Rb_tree_iterator_double___bool_ { struct std___Rb_tree_iterator_double_ first; _Bool second; unsigned char __field2[7]; } __attribute__((packed));
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Rb_tree_impl_std__less_double___true_ { struct std___Rb_tree_key_compare_std__less_double__ __field0; struct std___Rb_tree_header __field1; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__ { struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Rb_tree_impl_std__less_double___true_ _M_impl; };
struct std__set_double__std__less_double___std__allocator_double__ { struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__ _M_t; };

double __const_main_a[5] = {0x1.0cccccccccccdp1, 0x1.0cccccccccccdp2, 0x1.3p3, 0x1.0cccccccccccdp1, 0x1.d99999999999ap1};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[2] = " ";
char _str_1[21] = "doubleSet contains: ";
char _str_2[3] = "\n\n";
char _str_3[5] = " was";
char _str_4[9] = " was not";
char _str_5[10] = " inserted";
char _str_6[22] = "\ndoubleSet contains: ";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int SIZE2;
  double a3[5];
  struct std__set_double__std__less_double___std__allocator_double__ doubleSet4;
  struct std__ostream_iterator_double__char__std__char_traits_char__ output5;
  struct std___Rb_tree_const_iterator_double_ agg_tmp06;
  struct std___Rb_tree_const_iterator_double_ agg_tmp17;
  struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp28;
  struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp39;
  struct std__pair_std___Rb_tree_const_iterator_double___bool_ p10;
  struct std__pair_std___Rb_tree_const_iterator_double___bool_ ref_tmp011;
  double ref_tmp112;
  struct std___Rb_tree_const_iterator_double_ agg_tmp413;
  struct std___Rb_tree_const_iterator_double_ agg_tmp514;
  struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp615;
  struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp716;
  struct std__pair_std___Rb_tree_const_iterator_double___bool_ ref_tmp217;
  double ref_tmp318;
  struct std___Rb_tree_const_iterator_double_ agg_tmp819;
  struct std___Rb_tree_const_iterator_double_ agg_tmp920;
  struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp1021;
  struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp1122;
  int c23 = 0;
  __retval1 = c23;
  int c24 = 5;
  SIZE2 = c24;
  // array copy
  __builtin_memcpy(a3, __const_main_a, (unsigned long)5 * sizeof(__const_main_a[0]));
  double* cast25 = (double*)&(a3);
  double* cast26 = (double*)&(a3);
  int t27 = SIZE2;
  double* ptr28 = &(cast26)[t27];
  // externalized std:: op: std::set<double, std::less<double>, std::allocator<double> >::set<double*>(double*, double*)
  __VERIFIER_nondet_memory(&doubleSet4, sizeof(doubleSet4));
  __VERIFIER_nondet_memory(cast25, sizeof(*cast25));
  __VERIFIER_nondet_memory(ptr28, sizeof(*ptr28));
    char* cast29 = (char*)&(_str);
    // externalized std:: op: std::ostream_iterator<double, char, std::char_traits<char> >::ostream_iterator(std::ostream&, char const*)
    __VERIFIER_nondet_memory(&output5, sizeof(output5));
    __VERIFIER_nondet_memory(&_ZSt4cout, sizeof(*&_ZSt4cout));
    __VERIFIER_nondet_memory(cast29, sizeof(*cast29));
    char* cast30 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    struct std___Rb_tree_const_iterator_double_ std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    agg_tmp06 = std32;
    struct std___Rb_tree_const_iterator_double_ std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    agg_tmp17 = std33;
    // externalized std:: op: std::ostream_iterator<double, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<double, char, std::char_traits<char> > const&)
    __VERIFIER_nondet_memory(&agg_tmp28, sizeof(agg_tmp28));
    __VERIFIER_nondet_memory(&output5, sizeof(output5));
    struct std___Rb_tree_const_iterator_double_ t34 = agg_tmp06;
    struct std___Rb_tree_const_iterator_double_ t35 = agg_tmp17;
    struct std__ostream_iterator_double__char__std__char_traits_char__ t36 = agg_tmp28;
    struct std__ostream_iterator_double__char__std__char_traits_char__ std37;
    __VERIFIER_nondet_memory(&std37, sizeof(std37));
    agg_tmp39 = std37;
    // externalized std:: op: _ZNSt4pairISt23_Rb_tree_const_iteratorIdEbEC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E
    __VERIFIER_nondet_memory(&p10, sizeof(p10));
    double c38 = 0x1.b99999999999ap3;
    ref_tmp112 = c38;
    struct std__pair_std___Rb_tree_const_iterator_double___bool_ std39;
    __VERIFIER_nondet_memory(&std39, sizeof(std39));
    ref_tmp011 = std39;
    struct std__pair_std___Rb_tree_const_iterator_double___bool_* std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    char* cast41 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    double* std43;
    __VERIFIER_nondet_memory(&std43, sizeof(std43));
    double t44 = *std43;
    struct std__basic_ostream_char__std__char_traits_char__* std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
    _Bool t46 = p10.second;
    char* cast47 = (char*)&(_str_3);
    char* cast48 = (char*)&(_str_4);
    char* sel49 = t46 ? cast47 : cast48;
    struct std__basic_ostream_char__std__char_traits_char__* std50;
    __VERIFIER_nondet_memory(&std50, sizeof(std50));
    char* cast51 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* std52;
    __VERIFIER_nondet_memory(&std52, sizeof(std52));
    char* cast53 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* std54;
    __VERIFIER_nondet_memory(&std54, sizeof(std54));
    struct std___Rb_tree_const_iterator_double_ std55;
    __VERIFIER_nondet_memory(&std55, sizeof(std55));
    agg_tmp413 = std55;
    struct std___Rb_tree_const_iterator_double_ std56;
    __VERIFIER_nondet_memory(&std56, sizeof(std56));
    agg_tmp514 = std56;
    // externalized std:: op: std::ostream_iterator<double, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<double, char, std::char_traits<char> > const&)
    __VERIFIER_nondet_memory(&agg_tmp615, sizeof(agg_tmp615));
    __VERIFIER_nondet_memory(&output5, sizeof(output5));
    struct std___Rb_tree_const_iterator_double_ t57 = agg_tmp413;
    struct std___Rb_tree_const_iterator_double_ t58 = agg_tmp514;
    struct std__ostream_iterator_double__char__std__char_traits_char__ t59 = agg_tmp615;
    struct std__ostream_iterator_double__char__std__char_traits_char__ std60;
    __VERIFIER_nondet_memory(&std60, sizeof(std60));
    agg_tmp716 = std60;
    double c61 = 0x1.3p3;
    ref_tmp318 = c61;
    struct std__pair_std___Rb_tree_const_iterator_double___bool_ std62;
    __VERIFIER_nondet_memory(&std62, sizeof(std62));
    ref_tmp217 = std62;
    struct std__pair_std___Rb_tree_const_iterator_double___bool_* std63;
    __VERIFIER_nondet_memory(&std63, sizeof(std63));
    char* cast64 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std65;
    __VERIFIER_nondet_memory(&std65, sizeof(std65));
    double* std66;
    __VERIFIER_nondet_memory(&std66, sizeof(std66));
    double t67 = *std66;
    struct std__basic_ostream_char__std__char_traits_char__* std68;
    __VERIFIER_nondet_memory(&std68, sizeof(std68));
    _Bool t69 = p10.second;
    char* cast70 = (char*)&(_str_3);
    char* cast71 = (char*)&(_str_4);
    char* sel72 = t69 ? cast70 : cast71;
    struct std__basic_ostream_char__std__char_traits_char__* std73;
    __VERIFIER_nondet_memory(&std73, sizeof(std73));
    char* cast74 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* std75;
    __VERIFIER_nondet_memory(&std75, sizeof(std75));
    char* cast76 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* std77;
    __VERIFIER_nondet_memory(&std77, sizeof(std77));
    struct std___Rb_tree_const_iterator_double_ std78;
    __VERIFIER_nondet_memory(&std78, sizeof(std78));
    agg_tmp819 = std78;
    struct std___Rb_tree_const_iterator_double_ std79;
    __VERIFIER_nondet_memory(&std79, sizeof(std79));
    agg_tmp920 = std79;
    // externalized std:: op: std::ostream_iterator<double, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<double, char, std::char_traits<char> > const&)
    __VERIFIER_nondet_memory(&agg_tmp1021, sizeof(agg_tmp1021));
    __VERIFIER_nondet_memory(&output5, sizeof(output5));
    struct std___Rb_tree_const_iterator_double_ t80 = agg_tmp819;
    struct std___Rb_tree_const_iterator_double_ t81 = agg_tmp920;
    struct std__ostream_iterator_double__char__std__char_traits_char__ t82 = agg_tmp1021;
    struct std__ostream_iterator_double__char__std__char_traits_char__ std83;
    __VERIFIER_nondet_memory(&std83, sizeof(std83));
    agg_tmp1122 = std83;
    struct std__basic_ostream_char__std__char_traits_char__* std84;
    __VERIFIER_nondet_memory(&std84, sizeof(std84));
    int c85 = 0;
    __retval1 = c85;
    int t86 = __retval1;
    int ret_val87 = t86;
    {
      // externalized std:: op: std::set<double, std::less<double>, std::allocator<double> >::~set()
      __VERIFIER_nondet_memory(&doubleSet4, sizeof(doubleSet4));
    }
    return ret_val87;
  int t88 = __retval1;
  return t88;
}

