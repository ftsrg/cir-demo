/*
 * Copyright 2025 Budapest University of Technology and Economics
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

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
struct is_near { unsigned char __field0; };
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
struct std___List_node_double_;
struct std____allocated_obj_std__allocator_std___List_node_double___ { struct std____allocated_ptr_std__allocator_std___List_node_double___ __field0; };
struct std____detail___List_node_header { struct std____detail___List_node_base __field0; struct std____detail___List_size __field1; };
struct std__ctype_char_;
struct std__ios_base;
struct std____cxx11___List_base_double__std__allocator_double_____List_impl { struct std____detail___List_node_header _M_node; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std____cxx11___List_base_double__std__allocator_double__ { struct std____cxx11___List_base_double__std__allocator_double_____List_impl _M_impl; };
struct std____cxx11__list_double__std__allocator_double__ { struct std____cxx11___List_base_double__std__allocator_double__ __field0; };

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
double __const_main_mydoubles[10] = {0x1.84ccccccccccdp3, 0x1.5c28f5c28f5c3p1, 0x1.24p6, 0x1.98a3d70a3d70ap3, 0x1.91eb851eb851fp1, 0x1.98a3d70a3d70ap3, 0x1.2566666666666p6, 0x1.21p6, 0x1.e99999999999ap3, 0x1.21p6};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[19] = "mylist.size() == 8";
char _str_1[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_unique_bug-3/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[12] = "*it == 2.72";
char _str_3[12] = "*it == 3.14";
char _str_4[13] = "*it == 12.15";
char _str_5[13] = "*it == 12.77";
char _str_6[12] = "*it == 15.3";
char _str_7[13] = "*it == 72.25";
char _str_8[12] = "*it == 73.0";
char _str_9[13] = "*it == 73.35";
char _str_10[13] = "*it != 12.15";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_11[17] = "mylist contains:";
char _str_12[2] = " ";
char _str_13[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIdSaIdEE4backEv[84] = "reference std::list<double>::back() [_Tp = double, _Alloc = std::allocator<double>]";
char _str_14[15] = "!this->empty()";
_Bool same_integral_part(double p0, double p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: _Z18same_integral_partdd
_Bool same_integral_part(double v0, double v1) {
bb2:
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
bb12:
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
  struct is_near agg_tmp1332;
  struct std___List_iterator_double_ ref_tmp233;
  struct std___List_iterator_double_ agg_tmp1434;
  struct std___List_iterator_double_ agg_tmp1535;
  struct std___List_iterator_double_ agg_tmp1636;
  int c37 = 0;
  __retval13 = c37;
  // array copy
  __builtin_memcpy(mydoubles14, __const_main_mydoubles, (unsigned long)10 * sizeof(__const_main_mydoubles[0]));
  double* cast38 = (double*)&(mydoubles14);
  double* cast39 = (double*)&(mydoubles14);
  int c40 = 10;
  double* ptr41 = &(cast39)[c40];
  // externalized std:: op: std::allocator<double>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp016, sizeof(ref_tmp016));
    // externalized std:: op: std::__cxx11::list<double, std::allocator<double> >::list<double*, void>(double*, double*, std::allocator<double> const&)
    __VERIFIER_nondet_memory(&mylist15, sizeof(mylist15));
    __VERIFIER_nondet_memory(cast38, sizeof(*cast38));
    __VERIFIER_nondet_memory(ptr41, sizeof(*ptr41));
    __VERIFIER_nondet_memory(&ref_tmp016, sizeof(ref_tmp016));
  {
    // externalized std:: op: std::allocator<double>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp016, sizeof(ref_tmp016));
  }
    // externalized std:: op: std::__cxx11::list<double, std::allocator<double> >::sort()
    __VERIFIER_nondet_memory(&mylist15, sizeof(mylist15));
    unsigned long std42 = __VERIFIER_nondet_unsigned_long();
    unsigned long std43 = __VERIFIER_nondet_unsigned_long();
    unsigned long c44 = 8;
    _Bool c45 = ((std43 == c44)) ? 1 : 0;
    if (c45) {
    } else {
      char* cast46 = (char*)&(_str);
      char* c47 = _str_1;
      unsigned int c48 = 38;
      char* cast49 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast46, c47, c48, cast49);
    }
    struct std___List_iterator_double_ std50;
    __VERIFIER_nondet_memory(&std50, sizeof(std50));
    it17 = std50;
    double* std51;
    __VERIFIER_nondet_memory(&std51, sizeof(std51));
    double t52 = *std51;
    double c53 = 0x1.5c28f5c28f5c3p1;
    _Bool c54 = ((t52 == c53)) ? 1 : 0;
    if (c54) {
    } else {
      char* cast55 = (char*)&(_str_2);
      char* c56 = _str_1;
      unsigned int c57 = 40;
      char* cast58 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast55, c56, c57, cast58);
    }
    int c59 = 0;
    struct std___List_iterator_double_ std60;
    __VERIFIER_nondet_memory(&std60, sizeof(std60));
    agg_tmp018 = std60;
    double* std61;
    __VERIFIER_nondet_memory(&std61, sizeof(std61));
    double t62 = *std61;
    double c63 = 0x1.91eb851eb851fp1;
    _Bool c64 = ((t62 == c63)) ? 1 : 0;
    if (c64) {
    } else {
      char* cast65 = (char*)&(_str_3);
      char* c66 = _str_1;
      unsigned int c67 = 41;
      char* cast68 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast65, c66, c67, cast68);
    }
    int c69 = 0;
    struct std___List_iterator_double_ std70;
    __VERIFIER_nondet_memory(&std70, sizeof(std70));
    agg_tmp119 = std70;
    double* std71;
    __VERIFIER_nondet_memory(&std71, sizeof(std71));
    double t72 = *std71;
    double c73 = 0x1.84ccccccccccdp3;
    _Bool c74 = ((t72 == c73)) ? 1 : 0;
    if (c74) {
    } else {
      char* cast75 = (char*)&(_str_4);
      char* c76 = _str_1;
      unsigned int c77 = 42;
      char* cast78 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast75, c76, c77, cast78);
    }
    int c79 = 0;
    struct std___List_iterator_double_ std80;
    __VERIFIER_nondet_memory(&std80, sizeof(std80));
    agg_tmp220 = std80;
    double* std81;
    __VERIFIER_nondet_memory(&std81, sizeof(std81));
    double t82 = *std81;
    double c83 = 0x1.98a3d70a3d70ap3;
    _Bool c84 = ((t82 == c83)) ? 1 : 0;
    if (c84) {
    } else {
      char* cast85 = (char*)&(_str_5);
      char* c86 = _str_1;
      unsigned int c87 = 43;
      char* cast88 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast85, c86, c87, cast88);
    }
    int c89 = 0;
    struct std___List_iterator_double_ std90;
    __VERIFIER_nondet_memory(&std90, sizeof(std90));
    agg_tmp321 = std90;
    double* std91;
    __VERIFIER_nondet_memory(&std91, sizeof(std91));
    double t92 = *std91;
    double c93 = 0x1.e99999999999ap3;
    _Bool c94 = ((t92 == c93)) ? 1 : 0;
    if (c94) {
    } else {
      char* cast95 = (char*)&(_str_6);
      char* c96 = _str_1;
      unsigned int c97 = 44;
      char* cast98 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast95, c96, c97, cast98);
    }
    int c99 = 0;
    struct std___List_iterator_double_ std100;
    __VERIFIER_nondet_memory(&std100, sizeof(std100));
    agg_tmp422 = std100;
    double* std101;
    __VERIFIER_nondet_memory(&std101, sizeof(std101));
    double t102 = *std101;
    double c103 = 0x1.21p6;
    _Bool c104 = ((t102 == c103)) ? 1 : 0;
    if (c104) {
    } else {
      char* cast105 = (char*)&(_str_7);
      char* c106 = _str_1;
      unsigned int c107 = 45;
      char* cast108 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast105, c106, c107, cast108);
    }
    int c109 = 0;
    struct std___List_iterator_double_ std110;
    __VERIFIER_nondet_memory(&std110, sizeof(std110));
    agg_tmp523 = std110;
    double* std111;
    __VERIFIER_nondet_memory(&std111, sizeof(std111));
    double t112 = *std111;
    double c113 = 0x1.24p6;
    _Bool c114 = ((t112 == c113)) ? 1 : 0;
    if (c114) {
    } else {
      char* cast115 = (char*)&(_str_8);
      char* c116 = _str_1;
      unsigned int c117 = 46;
      char* cast118 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast115, c116, c117, cast118);
    }
    int c119 = 0;
    struct std___List_iterator_double_ std120;
    __VERIFIER_nondet_memory(&std120, sizeof(std120));
    agg_tmp624 = std120;
    double* std121;
    __VERIFIER_nondet_memory(&std121, sizeof(std121));
    double t122 = *std121;
    double c123 = 0x1.2566666666666p6;
    _Bool c124 = ((t122 == c123)) ? 1 : 0;
    if (c124) {
    } else {
      char* cast125 = (char*)&(_str_9);
      char* c126 = _str_1;
      unsigned int c127 = 47;
      char* cast128 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast125, c126, c127, cast128);
    }
    unsigned long std129 = __VERIFIER_nondet_unsigned_long();
    struct std___List_iterator_double_ std130;
    __VERIFIER_nondet_memory(&std130, sizeof(std130));
    ref_tmp125 = std130;
    struct std___List_iterator_double_* std131;
    __VERIFIER_nondet_memory(&std131, sizeof(std131));
    double* std132;
    __VERIFIER_nondet_memory(&std132, sizeof(std132));
    double t133 = *std132;
    double c134 = 0x1.5c28f5c28f5c3p1;
    _Bool c135 = ((t133 == c134)) ? 1 : 0;
    if (c135) {
    } else {
      char* cast136 = (char*)&(_str_2);
      char* c137 = _str_1;
      unsigned int c138 = 52;
      char* cast139 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast136, c137, c138, cast139);
    }
    int c140 = 0;
    struct std___List_iterator_double_ std141;
    __VERIFIER_nondet_memory(&std141, sizeof(std141));
    agg_tmp726 = std141;
    double* std142;
    __VERIFIER_nondet_memory(&std142, sizeof(std142));
    double t143 = *std142;
    double c144 = 0x1.91eb851eb851fp1;
    _Bool c145 = ((t143 == c144)) ? 1 : 0;
    if (c145) {
    } else {
      char* cast146 = (char*)&(_str_3);
      char* c147 = _str_1;
      unsigned int c148 = 53;
      char* cast149 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast146, c147, c148, cast149);
    }
    int c150 = 0;
    struct std___List_iterator_double_ std151;
    __VERIFIER_nondet_memory(&std151, sizeof(std151));
    agg_tmp827 = std151;
    double* std152;
    __VERIFIER_nondet_memory(&std152, sizeof(std152));
    double t153 = *std152;
    double c154 = 0x1.84ccccccccccdp3;
    _Bool c155 = ((t153 == c154)) ? 1 : 0;
    if (c155) {
    } else {
      char* cast156 = (char*)&(_str_4);
      char* c157 = _str_1;
      unsigned int c158 = 54;
      char* cast159 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast156, c157, c158, cast159);
    }
    int c160 = 0;
    struct std___List_iterator_double_ std161;
    __VERIFIER_nondet_memory(&std161, sizeof(std161));
    agg_tmp928 = std161;
    double* std162;
    __VERIFIER_nondet_memory(&std162, sizeof(std162));
    double t163 = *std162;
    double c164 = 0x1.e99999999999ap3;
    _Bool c165 = ((t163 == c164)) ? 1 : 0;
    if (c165) {
    } else {
      char* cast166 = (char*)&(_str_6);
      char* c167 = _str_1;
      unsigned int c168 = 55;
      char* cast169 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast166, c167, c168, cast169);
    }
    int c170 = 0;
    struct std___List_iterator_double_ std171;
    __VERIFIER_nondet_memory(&std171, sizeof(std171));
    agg_tmp1029 = std171;
    double* std172;
    __VERIFIER_nondet_memory(&std172, sizeof(std172));
    double t173 = *std172;
    double c174 = 0x1.21p6;
    _Bool c175 = ((t173 == c174)) ? 1 : 0;
    if (c175) {
    } else {
      char* cast176 = (char*)&(_str_7);
      char* c177 = _str_1;
      unsigned int c178 = 56;
      char* cast179 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast176, c177, c178, cast179);
    }
    int c180 = 0;
    struct std___List_iterator_double_ std181;
    __VERIFIER_nondet_memory(&std181, sizeof(std181));
    agg_tmp1130 = std181;
    double* std182;
    __VERIFIER_nondet_memory(&std182, sizeof(std182));
    double t183 = *std182;
    double c184 = 0x1.24p6;
    _Bool c185 = ((t183 == c184)) ? 1 : 0;
    if (c185) {
    } else {
      char* cast186 = (char*)&(_str_8);
      char* c187 = _str_1;
      unsigned int c188 = 57;
      char* cast189 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast186, c187, c188, cast189);
    }
    int c190 = 0;
    struct std___List_iterator_double_ std191;
    __VERIFIER_nondet_memory(&std191, sizeof(std191));
    agg_tmp1231 = std191;
    struct is_near t192 = agg_tmp1332;
    unsigned long std193 = __VERIFIER_nondet_unsigned_long();
    struct std___List_iterator_double_ std194;
    __VERIFIER_nondet_memory(&std194, sizeof(std194));
    ref_tmp233 = std194;
    struct std___List_iterator_double_* std195;
    __VERIFIER_nondet_memory(&std195, sizeof(std195));
    double* std196;
    __VERIFIER_nondet_memory(&std196, sizeof(std196));
    double t197 = *std196;
    double c198 = 0x1.5c28f5c28f5c3p1;
    _Bool c199 = ((t197 == c198)) ? 1 : 0;
    if (c199) {
    } else {
      char* cast200 = (char*)&(_str_2);
      char* c201 = _str_1;
      unsigned int c202 = 62;
      char* cast203 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast200, c201, c202, cast203);
    }
    int c204 = 0;
    struct std___List_iterator_double_ std205;
    __VERIFIER_nondet_memory(&std205, sizeof(std205));
    agg_tmp1434 = std205;
    double* std206;
    __VERIFIER_nondet_memory(&std206, sizeof(std206));
    double t207 = *std206;
    double c208 = 0x1.84ccccccccccdp3;
    _Bool c209 = ((t207 != c208)) ? 1 : 0;
    if (c209) {
    } else {
      char* cast210 = (char*)&(_str_10);
      char* c211 = _str_1;
      unsigned int c212 = 63;
      char* cast213 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast210, c211, c212, cast213);
    }
    int c214 = 0;
    struct std___List_iterator_double_ std215;
    __VERIFIER_nondet_memory(&std215, sizeof(std215));
    agg_tmp1535 = std215;
    double* std216;
    __VERIFIER_nondet_memory(&std216, sizeof(std216));
    double t217 = *std216;
    double c218 = 0x1.21p6;
    _Bool c219 = ((t217 == c218)) ? 1 : 0;
    if (c219) {
    } else {
      char* cast220 = (char*)&(_str_7);
      char* c221 = _str_1;
      unsigned int c222 = 64;
      char* cast223 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast220, c221, c222, cast223);
    }
    int c224 = 0;
    struct std___List_iterator_double_ std225;
    __VERIFIER_nondet_memory(&std225, sizeof(std225));
    agg_tmp1636 = std225;
    char* cast226 = (char*)&(_str_11);
    struct std__basic_ostream_char__std__char_traits_char__* std227;
    __VERIFIER_nondet_memory(&std227, sizeof(std227));
      struct std___List_iterator_double_ it228;
      struct std___List_iterator_double_ ref_tmp3229;
      struct std___List_iterator_double_ std230;
      __VERIFIER_nondet_memory(&std230, sizeof(std230));
      it228 = std230;
      while (1) {
        struct std___List_iterator_double_ std232;
        __VERIFIER_nondet_memory(&std232, sizeof(std232));
        ref_tmp3229 = std232;
        _Bool std233;
        __VERIFIER_nondet_memory(&std233, sizeof(std233));
        _Bool u234 = !std233;
        if (!u234) break;
        char* cast235 = (char*)&(_str_12);
        struct std__basic_ostream_char__std__char_traits_char__* std236;
        __VERIFIER_nondet_memory(&std236, sizeof(std236));
        double* std237;
        __VERIFIER_nondet_memory(&std237, sizeof(std237));
        double t238 = *std237;
        struct std__basic_ostream_char__std__char_traits_char__* std239;
        __VERIFIER_nondet_memory(&std239, sizeof(std239));
      for_step231: ;
        struct std___List_iterator_double_* std240;
        __VERIFIER_nondet_memory(&std240, sizeof(std240));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std241;
    __VERIFIER_nondet_memory(&std241, sizeof(std241));
    int c242 = 0;
    __retval13 = c242;
    int t243 = __retval13;
    int ret_val244 = t243;
    {
      // externalized std:: op: std::__cxx11::list<double, std::allocator<double> >::~list()
      __VERIFIER_nondet_memory(&mylist15, sizeof(mylist15));
    }
    return ret_val244;
  int t245 = __retval13;
  return t245;
}

