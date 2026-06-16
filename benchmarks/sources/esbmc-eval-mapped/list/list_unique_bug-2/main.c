extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Struct definitions (auto-parsed)
struct __gnu_cxx____aligned_membuf_double_ { unsigned char _M_storage[8]; };
struct std___List_const_iterator_double_ { struct std____detail___List_node_base* _M_node; };
struct std___List_iterator_double_ { struct std____detail___List_node_base* _M_node; };
struct std____allocated_ptr_std__allocator_std___List_node_double___ { struct std__allocator_std___List_node_double__* _M_alloc; struct std___List_node_double_* _M_ptr; };
struct std____detail___List_node_base { struct std____detail___List_node_base* _M_next; struct std____detail___List_node_base* _M_prev; };
struct std____detail___List_size { unsigned long _M_size; };
struct std____false_type { unsigned char __field0; };
struct std____list___Scratch_list_std____detail___List_node_base_ { struct std____detail___List_node_base __field0; };
struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_double___void_ { unsigned char __field0; };
struct std____new_allocator_double_;
struct std____new_allocator_std___List_node_double__;
struct std__allocator_double_ { unsigned char __field0; };
struct std__allocator_std___List_node_double__ { unsigned char __field0; };
struct std___List_node_double_ { struct std____detail___List_node_base __field0; struct __gnu_cxx____aligned_membuf_double_ _M_storage; };
struct std____allocated_obj_std__allocator_std___List_node_double___ { struct std____allocated_ptr_std__allocator_std___List_node_double___ __field0; };
struct std____detail___List_node_header { struct std____detail___List_node_base __field0; struct std____detail___List_size __field1; };
struct std____cxx11___List_base_double__std__allocator_double_____List_impl { struct std____detail___List_node_header _M_node; };
struct std____cxx11___List_base_double__std__allocator_double__ { struct std____cxx11___List_base_double__std__allocator_double_____List_impl _M_impl; };
struct std____cxx11__list_double__std__allocator_double__ { struct std____cxx11___List_base_double__std__allocator_double__ __field0; };

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
double __const_main_mydoubles[10] = {0x1.84ccccccccccdp3, 0x1.5c28f5c28f5c3p1, 0x1.24p6, 0x1.98a3d70a3d70ap3, 0x1.91eb851eb851fp1, 0x1.98a3d70a3d70ap3, 0x1.2566666666666p6, 0x1.21p6, 0x1.e99999999999ap3, 0x1.21p6};
char _str[19] = "mylist.size() == 8";
char _str_1[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_unique_bug-2/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[12] = "*it == 2.72";
char _str_3[12] = "*it == 3.14";
char _str_4[13] = "*it == 12.15";
char _str_5[13] = "*it == 12.77";
char _str_6[12] = "*it == 15.3";
char _str_7[13] = "*it == 72.25";
char _str_8[12] = "*it == 73.0";
char _str_9[13] = "*it == 73.35";
char _str_10[12] = "*it != 3.14";
char _str_11[13] = "*it != 72.25";
char _str_12[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIdSaIdEE4backEv[84] = "reference std::list<double>::back() [_Tp = double, _Alloc = std::allocator<double>]";
char _str_13[15] = "!this->empty()";
_Bool same_integral_part(double p0, double p1);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: _Z18same_integral_partdd
_Bool same_integral_part(double v0, double v1) {
bb2: ;
  double first3;
  double second4;
  _Bool __retval5;
  first3 = v0;
  second4 = v1;
  double t6 = first3;
  int cast7 = (int)t6;
  double t8 = second4;
  int cast9 = (int)t8;
  _Bool c10 = ((cast7 == cast9)) ? 1 : 0;
  __retval5 = c10;
  _Bool t11 = __retval5;
  return t11;
}

// function: main
int main() {
bb12: ;
  int __retval13;
  double mydoubles14[10];
  struct std____cxx11__list_double__std__allocator_double__ mylist15;
  struct std__allocator_double_ ref_tmp016;
  struct std___List_iterator_double_ it17;
  struct std___List_iterator_double_ agg_tmp018;
  struct std___List_iterator_double_ agg_tmp119;
  struct std___List_iterator_double_ agg_tmp220;
  struct std___List_iterator_double_ agg_tmp321;
  struct std___List_iterator_double_ agg_tmp422;
  struct std___List_iterator_double_ agg_tmp523;
  struct std___List_iterator_double_ agg_tmp624;
  struct std___List_iterator_double_ ref_tmp125;
  struct std___List_iterator_double_ agg_tmp726;
  struct std___List_iterator_double_ agg_tmp827;
  struct std___List_iterator_double_ agg_tmp928;
  struct std___List_iterator_double_ agg_tmp1029;
  struct std___List_iterator_double_ agg_tmp1130;
  struct std___List_iterator_double_ agg_tmp1231;
  int c32 = 0;
  __retval13 = c32;
  // array copy
  __builtin_memcpy(mydoubles14, __const_main_mydoubles, (unsigned long)10 * sizeof(__const_main_mydoubles[0]));
  double* cast33 = (double*)&(mydoubles14);
  double* cast34 = (double*)&(mydoubles14);
  int c35 = 10;
  double* ptr36 = &(cast34)[c35];
  // externalized std:: op: std::allocator<double>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp016, sizeof(ref_tmp016));
    // externalized std:: op: std::__cxx11::list<double, std::allocator<double> >::list<double*, void>(double*, double*, std::allocator<double> const&)
    __VERIFIER_nondet_memory(&mylist15, sizeof(mylist15));
    __VERIFIER_nondet_memory(cast33, sizeof(*cast33));
    __VERIFIER_nondet_memory(ptr36, sizeof(*ptr36));
    __VERIFIER_nondet_memory(&ref_tmp016, sizeof(ref_tmp016));
  {
    // externalized std:: op: std::allocator<double>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp016, sizeof(ref_tmp016));
  }
    // externalized std:: op: std::__cxx11::list<double, std::allocator<double> >::sort()
    __VERIFIER_nondet_memory(&mylist15, sizeof(mylist15));
    unsigned long std37 = __VERIFIER_nondet_unsigned_long();
    unsigned long std38 = __VERIFIER_nondet_unsigned_long();
    unsigned long c39 = 8;
    _Bool c40 = ((std38 == c39)) ? 1 : 0;
    if (c40) {
    } else {
      char* cast41 = (char*)&(_str);
      char* c42 = (char*)_str_1;
      unsigned int c43 = 38;
      char* cast44 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast41, c42, c43, cast44);
    }
    struct std___List_iterator_double_ std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
    it17 = std45;
    double* std46;
    __VERIFIER_nondet_memory(&std46, sizeof(std46));
    double t47 = *std46;
    double c48 = 0x1.5c28f5c28f5c3p1;
    _Bool c49 = ((t47 == c48)) ? 1 : 0;
    if (c49) {
    } else {
      char* cast50 = (char*)&(_str_2);
      char* c51 = (char*)_str_1;
      unsigned int c52 = 40;
      char* cast53 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast50, c51, c52, cast53);
    }
    int c54 = 0;
    struct std___List_iterator_double_ std55;
    __VERIFIER_nondet_memory(&std55, sizeof(std55));
    agg_tmp018 = std55;
    double* std56;
    __VERIFIER_nondet_memory(&std56, sizeof(std56));
    double t57 = *std56;
    double c58 = 0x1.91eb851eb851fp1;
    _Bool c59 = ((t57 == c58)) ? 1 : 0;
    if (c59) {
    } else {
      char* cast60 = (char*)&(_str_3);
      char* c61 = (char*)_str_1;
      unsigned int c62 = 41;
      char* cast63 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast60, c61, c62, cast63);
    }
    int c64 = 0;
    struct std___List_iterator_double_ std65;
    __VERIFIER_nondet_memory(&std65, sizeof(std65));
    agg_tmp119 = std65;
    double* std66;
    __VERIFIER_nondet_memory(&std66, sizeof(std66));
    double t67 = *std66;
    double c68 = 0x1.84ccccccccccdp3;
    _Bool c69 = ((t67 == c68)) ? 1 : 0;
    if (c69) {
    } else {
      char* cast70 = (char*)&(_str_4);
      char* c71 = (char*)_str_1;
      unsigned int c72 = 42;
      char* cast73 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast70, c71, c72, cast73);
    }
    int c74 = 0;
    struct std___List_iterator_double_ std75;
    __VERIFIER_nondet_memory(&std75, sizeof(std75));
    agg_tmp220 = std75;
    double* std76;
    __VERIFIER_nondet_memory(&std76, sizeof(std76));
    double t77 = *std76;
    double c78 = 0x1.98a3d70a3d70ap3;
    _Bool c79 = ((t77 == c78)) ? 1 : 0;
    if (c79) {
    } else {
      char* cast80 = (char*)&(_str_5);
      char* c81 = (char*)_str_1;
      unsigned int c82 = 43;
      char* cast83 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast80, c81, c82, cast83);
    }
    int c84 = 0;
    struct std___List_iterator_double_ std85;
    __VERIFIER_nondet_memory(&std85, sizeof(std85));
    agg_tmp321 = std85;
    double* std86;
    __VERIFIER_nondet_memory(&std86, sizeof(std86));
    double t87 = *std86;
    double c88 = 0x1.e99999999999ap3;
    _Bool c89 = ((t87 == c88)) ? 1 : 0;
    if (c89) {
    } else {
      char* cast90 = (char*)&(_str_6);
      char* c91 = (char*)_str_1;
      unsigned int c92 = 44;
      char* cast93 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast90, c91, c92, cast93);
    }
    int c94 = 0;
    struct std___List_iterator_double_ std95;
    __VERIFIER_nondet_memory(&std95, sizeof(std95));
    agg_tmp422 = std95;
    double* std96;
    __VERIFIER_nondet_memory(&std96, sizeof(std96));
    double t97 = *std96;
    double c98 = 0x1.21p6;
    _Bool c99 = ((t97 == c98)) ? 1 : 0;
    if (c99) {
    } else {
      char* cast100 = (char*)&(_str_7);
      char* c101 = (char*)_str_1;
      unsigned int c102 = 45;
      char* cast103 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast100, c101, c102, cast103);
    }
    int c104 = 0;
    struct std___List_iterator_double_ std105;
    __VERIFIER_nondet_memory(&std105, sizeof(std105));
    agg_tmp523 = std105;
    double* std106;
    __VERIFIER_nondet_memory(&std106, sizeof(std106));
    double t107 = *std106;
    double c108 = 0x1.24p6;
    _Bool c109 = ((t107 == c108)) ? 1 : 0;
    if (c109) {
    } else {
      char* cast110 = (char*)&(_str_8);
      char* c111 = (char*)_str_1;
      unsigned int c112 = 46;
      char* cast113 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast110, c111, c112, cast113);
    }
    int c114 = 0;
    struct std___List_iterator_double_ std115;
    __VERIFIER_nondet_memory(&std115, sizeof(std115));
    agg_tmp624 = std115;
    double* std116;
    __VERIFIER_nondet_memory(&std116, sizeof(std116));
    double t117 = *std116;
    double c118 = 0x1.2566666666666p6;
    _Bool c119 = ((t117 == c118)) ? 1 : 0;
    if (c119) {
    } else {
      char* cast120 = (char*)&(_str_9);
      char* c121 = (char*)_str_1;
      unsigned int c122 = 47;
      char* cast123 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast120, c121, c122, cast123);
    }
    unsigned long std124 = __VERIFIER_nondet_unsigned_long();
    struct std___List_iterator_double_ std125;
    __VERIFIER_nondet_memory(&std125, sizeof(std125));
    ref_tmp125 = std125;
    struct std___List_iterator_double_* std126;
    __VERIFIER_nondet_memory(&std126, sizeof(std126));
    double* std127;
    __VERIFIER_nondet_memory(&std127, sizeof(std127));
    double t128 = *std127;
    double c129 = 0x1.5c28f5c28f5c3p1;
    _Bool c130 = ((t128 == c129)) ? 1 : 0;
    if (c130) {
    } else {
      char* cast131 = (char*)&(_str_2);
      char* c132 = (char*)_str_1;
      unsigned int c133 = 52;
      char* cast134 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast131, c132, c133, cast134);
    }
    int c135 = 0;
    struct std___List_iterator_double_ std136;
    __VERIFIER_nondet_memory(&std136, sizeof(std136));
    agg_tmp726 = std136;
    double* std137;
    __VERIFIER_nondet_memory(&std137, sizeof(std137));
    double t138 = *std137;
    double c139 = 0x1.91eb851eb851fp1;
    _Bool c140 = ((t138 != c139)) ? 1 : 0;
    if (c140) {
    } else {
      char* cast141 = (char*)&(_str_10);
      char* c142 = (char*)_str_1;
      unsigned int c143 = 53;
      char* cast144 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast141, c142, c143, cast144);
    }
    int c145 = 0;
    struct std___List_iterator_double_ std146;
    __VERIFIER_nondet_memory(&std146, sizeof(std146));
    agg_tmp827 = std146;
    double* std147;
    __VERIFIER_nondet_memory(&std147, sizeof(std147));
    double t148 = *std147;
    double c149 = 0x1.84ccccccccccdp3;
    _Bool c150 = ((t148 == c149)) ? 1 : 0;
    if (c150) {
    } else {
      char* cast151 = (char*)&(_str_4);
      char* c152 = (char*)_str_1;
      unsigned int c153 = 54;
      char* cast154 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast151, c152, c153, cast154);
    }
    int c155 = 0;
    struct std___List_iterator_double_ std156;
    __VERIFIER_nondet_memory(&std156, sizeof(std156));
    agg_tmp928 = std156;
    double* std157;
    __VERIFIER_nondet_memory(&std157, sizeof(std157));
    double t158 = *std157;
    double c159 = 0x1.e99999999999ap3;
    _Bool c160 = ((t158 == c159)) ? 1 : 0;
    if (c160) {
    } else {
      char* cast161 = (char*)&(_str_6);
      char* c162 = (char*)_str_1;
      unsigned int c163 = 55;
      char* cast164 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast161, c162, c163, cast164);
    }
    int c165 = 0;
    struct std___List_iterator_double_ std166;
    __VERIFIER_nondet_memory(&std166, sizeof(std166));
    agg_tmp1029 = std166;
    double* std167;
    __VERIFIER_nondet_memory(&std167, sizeof(std167));
    double t168 = *std167;
    double c169 = 0x1.21p6;
    _Bool c170 = ((t168 != c169)) ? 1 : 0;
    if (c170) {
    } else {
      char* cast171 = (char*)&(_str_11);
      char* c172 = (char*)_str_1;
      unsigned int c173 = 56;
      char* cast174 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast171, c172, c173, cast174);
    }
    int c175 = 0;
    struct std___List_iterator_double_ std176;
    __VERIFIER_nondet_memory(&std176, sizeof(std176));
    agg_tmp1130 = std176;
    double* std177;
    __VERIFIER_nondet_memory(&std177, sizeof(std177));
    double t178 = *std177;
    double c179 = 0x1.24p6;
    _Bool c180 = ((t178 == c179)) ? 1 : 0;
    if (c180) {
    } else {
      char* cast181 = (char*)&(_str_8);
      char* c182 = (char*)_str_1;
      unsigned int c183 = 57;
      char* cast184 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast181, c182, c183, cast184);
    }
    int c185 = 0;
    struct std___List_iterator_double_ std186;
    __VERIFIER_nondet_memory(&std186, sizeof(std186));
    agg_tmp1231 = std186;
    int c187 = 0;
    __retval13 = c187;
    int t188 = __retval13;
    int ret_val189 = t188;
    {
      // externalized std:: op: std::__cxx11::list<double, std::allocator<double> >::~list()
      __VERIFIER_nondet_memory(&mylist15, sizeof(mylist15));
    }
    return ret_val189;
  int t190 = __retval13;
  return t190;
}

