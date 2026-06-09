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
struct std___List_node_double_;
struct std____allocated_obj_std__allocator_std___List_node_double___ { struct std____allocated_ptr_std__allocator_std___List_node_double___ __field0; };
struct std____detail___List_node_header { struct std____detail___List_node_base __field0; struct std____detail___List_size __field1; };
struct std____cxx11___List_base_double__std__allocator_double_____List_impl { struct std____detail___List_node_header _M_node; };
struct std____cxx11___List_base_double__std__allocator_double__ { struct std____cxx11___List_base_double__std__allocator_double_____List_impl _M_impl; };
struct std____cxx11__list_double__std__allocator_double__ { struct std____cxx11___List_base_double__std__allocator_double__ __field0; };

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
double __const_main_mydoubles[10] = {0x1.84ccccccccccdp3, 0x1.5c28f5c28f5c3p1, 0x1.24p6, 0x1.98a3d70a3d70ap3, 0x1.91eb851eb851fp1, 0x1.98a3d70a3d70ap3, 0x1.2566666666666p6, 0x1.21p6, 0x1.e99999999999ap3, 0x1.21p6};
char _str[19] = "mylist.size() == 8";
char _str_1[108] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_unique_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[12] = "*it == 2.72";
char _str_3[12] = "*it == 3.14";
char _str_4[13] = "*it != 12.15";
char _str_5[13] = "*it == 12.77";
char _str_6[12] = "*it == 15.3";
char _str_7[13] = "*it != 72.25";
char _str_8[12] = "*it == 73.0";
char _str_9[13] = "*it == 73.35";
char _str_10[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIdSaIdEE4backEv[84] = "reference std::list<double>::back() [_Tp = double, _Alloc = std::allocator<double>]";
char _str_11[15] = "!this->empty()";
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
  int c25 = 0;
  __retval13 = c25;
  // array copy
  __builtin_memcpy(mydoubles14, __const_main_mydoubles, (unsigned long)10 * sizeof(__const_main_mydoubles[0]));
  double* cast26 = (double*)&(mydoubles14);
  double* cast27 = (double*)&(mydoubles14);
  int c28 = 10;
  double* ptr29 = &(cast27)[c28];
  // externalized std:: op: std::allocator<double>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp016, sizeof(ref_tmp016));
    // externalized std:: op: std::__cxx11::list<double, std::allocator<double> >::list<double*, void>(double*, double*, std::allocator<double> const&)
    __VERIFIER_nondet_memory(&mylist15, sizeof(mylist15));
    __VERIFIER_nondet_memory(cast26, sizeof(*cast26));
    __VERIFIER_nondet_memory(ptr29, sizeof(*ptr29));
    __VERIFIER_nondet_memory(&ref_tmp016, sizeof(ref_tmp016));
  {
    // externalized std:: op: std::allocator<double>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp016, sizeof(ref_tmp016));
  }
    // externalized std:: op: std::__cxx11::list<double, std::allocator<double> >::sort()
    __VERIFIER_nondet_memory(&mylist15, sizeof(mylist15));
    unsigned long std30 = __VERIFIER_nondet_unsigned_long();
    unsigned long std31 = __VERIFIER_nondet_unsigned_long();
    unsigned long c32 = 8;
    _Bool c33 = ((std31 == c32)) ? 1 : 0;
    if (c33) {
    } else {
      char* cast34 = (char*)&(_str);
      char* c35 = _str_1;
      unsigned int c36 = 38;
      char* cast37 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast34, c35, c36, cast37);
    }
    struct std___List_iterator_double_ std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    it17 = std38;
    double* std39;
    __VERIFIER_nondet_memory(&std39, sizeof(std39));
    double t40 = *std39;
    double c41 = 0x1.5c28f5c28f5c3p1;
    _Bool c42 = ((t40 == c41)) ? 1 : 0;
    if (c42) {
    } else {
      char* cast43 = (char*)&(_str_2);
      char* c44 = _str_1;
      unsigned int c45 = 40;
      char* cast46 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast43, c44, c45, cast46);
    }
    int c47 = 0;
    struct std___List_iterator_double_ std48;
    __VERIFIER_nondet_memory(&std48, sizeof(std48));
    agg_tmp018 = std48;
    double* std49;
    __VERIFIER_nondet_memory(&std49, sizeof(std49));
    double t50 = *std49;
    double c51 = 0x1.91eb851eb851fp1;
    _Bool c52 = ((t50 == c51)) ? 1 : 0;
    if (c52) {
    } else {
      char* cast53 = (char*)&(_str_3);
      char* c54 = _str_1;
      unsigned int c55 = 41;
      char* cast56 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast53, c54, c55, cast56);
    }
    int c57 = 0;
    struct std___List_iterator_double_ std58;
    __VERIFIER_nondet_memory(&std58, sizeof(std58));
    agg_tmp119 = std58;
    double* std59;
    __VERIFIER_nondet_memory(&std59, sizeof(std59));
    double t60 = *std59;
    double c61 = 0x1.84ccccccccccdp3;
    _Bool c62 = ((t60 != c61)) ? 1 : 0;
    if (c62) {
    } else {
      char* cast63 = (char*)&(_str_4);
      char* c64 = _str_1;
      unsigned int c65 = 42;
      char* cast66 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast63, c64, c65, cast66);
    }
    int c67 = 0;
    struct std___List_iterator_double_ std68;
    __VERIFIER_nondet_memory(&std68, sizeof(std68));
    agg_tmp220 = std68;
    double* std69;
    __VERIFIER_nondet_memory(&std69, sizeof(std69));
    double t70 = *std69;
    double c71 = 0x1.98a3d70a3d70ap3;
    _Bool c72 = ((t70 == c71)) ? 1 : 0;
    if (c72) {
    } else {
      char* cast73 = (char*)&(_str_5);
      char* c74 = _str_1;
      unsigned int c75 = 43;
      char* cast76 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast73, c74, c75, cast76);
    }
    int c77 = 0;
    struct std___List_iterator_double_ std78;
    __VERIFIER_nondet_memory(&std78, sizeof(std78));
    agg_tmp321 = std78;
    double* std79;
    __VERIFIER_nondet_memory(&std79, sizeof(std79));
    double t80 = *std79;
    double c81 = 0x1.e99999999999ap3;
    _Bool c82 = ((t80 == c81)) ? 1 : 0;
    if (c82) {
    } else {
      char* cast83 = (char*)&(_str_6);
      char* c84 = _str_1;
      unsigned int c85 = 44;
      char* cast86 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast83, c84, c85, cast86);
    }
    int c87 = 0;
    struct std___List_iterator_double_ std88;
    __VERIFIER_nondet_memory(&std88, sizeof(std88));
    agg_tmp422 = std88;
    double* std89;
    __VERIFIER_nondet_memory(&std89, sizeof(std89));
    double t90 = *std89;
    double c91 = 0x1.21p6;
    _Bool c92 = ((t90 != c91)) ? 1 : 0;
    if (c92) {
    } else {
      char* cast93 = (char*)&(_str_7);
      char* c94 = _str_1;
      unsigned int c95 = 45;
      char* cast96 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast93, c94, c95, cast96);
    }
    int c97 = 0;
    struct std___List_iterator_double_ std98;
    __VERIFIER_nondet_memory(&std98, sizeof(std98));
    agg_tmp523 = std98;
    double* std99;
    __VERIFIER_nondet_memory(&std99, sizeof(std99));
    double t100 = *std99;
    double c101 = 0x1.24p6;
    _Bool c102 = ((t100 == c101)) ? 1 : 0;
    if (c102) {
    } else {
      char* cast103 = (char*)&(_str_8);
      char* c104 = _str_1;
      unsigned int c105 = 46;
      char* cast106 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast103, c104, c105, cast106);
    }
    int c107 = 0;
    struct std___List_iterator_double_ std108;
    __VERIFIER_nondet_memory(&std108, sizeof(std108));
    agg_tmp624 = std108;
    double* std109;
    __VERIFIER_nondet_memory(&std109, sizeof(std109));
    double t110 = *std109;
    double c111 = 0x1.2566666666666p6;
    _Bool c112 = ((t110 == c111)) ? 1 : 0;
    if (c112) {
    } else {
      char* cast113 = (char*)&(_str_9);
      char* c114 = _str_1;
      unsigned int c115 = 47;
      char* cast116 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast113, c114, c115, cast116);
    }
    int c117 = 0;
    __retval13 = c117;
    int t118 = __retval13;
    int ret_val119 = t118;
    {
      // externalized std:: op: std::__cxx11::list<double, std::allocator<double> >::~list()
      __VERIFIER_nondet_memory(&mylist15, sizeof(mylist15));
    }
    return ret_val119;
  int t120 = __retval13;
  return t120;
}

