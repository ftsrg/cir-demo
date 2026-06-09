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
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_match[3] = {65, 66, 67};
int __const_main_mychars[6] = {97, 98, 99, 65, 66, 67};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[10] = "*it == 65";
char _str_1[105] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm5/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[17] = "first match is: ";
char _str_3[10] = "*it == 97";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_4[49] = "cannot create std::vector larger than max_size()";
extern int tolower(int p0);
_Bool comp_case_insensitive(char p0, char p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______find_first_of___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2, int* p3);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______find_first_of___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__bool_____char__char_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___int___bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2, int* p3, void* p4);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z21comp_case_insensitivecc
_Bool comp_case_insensitive(char v0, char v1) {
bb2:
  char c13;
  char c24;
  _Bool __retval5;
  c13 = v0;
  c24 = v1;
  char t6 = c13;
  int cast7 = (int)t6;
  int r8 = tolower(cast7);
  char t9 = c24;
  int cast10 = (int)t9;
  int r11 = tolower(cast10);
  _Bool c12 = ((r8 == r11)) ? 1 : 0;
  __retval5 = c12;
  _Bool t13 = __retval5;
  return t13;
}

// function: _Z13find_first_ofIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiET_S7_S7_PT0_S9_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______find_first_of___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v14, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v15, int* v16, int* v17) {
bb18:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ first119;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ last120;
  int* first221;
  int* last222;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval23;
  first119 = v14;
  last120 = v15;
  first221 = v16;
  last222 = v17;
    while (1) {
      _Bool std25;
      __VERIFIER_nondet_memory(&std25, sizeof(std25));
      _Bool u26 = !std25;
      if (!u26) break;
        int* it27;
        int* t28 = first221;
        it27 = t28;
        while (1) {
          int* t30 = it27;
          int* t31 = last222;
          _Bool c32 = ((t30 != t31)) ? 1 : 0;
          if (!c32) break;
            int* t33 = it27;
            int t34 = *t33;
            int* std35;
            __VERIFIER_nondet_memory(&std35, sizeof(std35));
            int t36 = *std35;
            _Bool c37 = ((t34 == t36)) ? 1 : 0;
            if (c37) {
              __retval23 = first119; // copy
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t38 = __retval23;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ret_val39 = t38;
              return ret_val39;
            }
        for_step29: ;
          int* t40 = it27;
          int c41 = 1;
          int* ptr42 = &(t40)[c41];
          it27 = ptr42;
        }
    for_step24: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std43;
      __VERIFIER_nondet_memory(&std43, sizeof(std43));
    }
  __retval23 = last120; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t44 = __retval23;
  return t44;
}

// function: _Z13find_first_ofIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiPFbccEET_S9_S9_PT0_SB_T1_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______find_first_of___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__bool_____char__char_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___int___bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v45, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v46, int* v47, int* v48, void* v49) {
bb50:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ first151;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ last152;
  int* first253;
  int* last254;
  void* pred55;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval56;
  first151 = v45;
  last152 = v46;
  first253 = v47;
  last254 = v48;
  pred55 = v49;
    while (1) {
      _Bool std58;
      __VERIFIER_nondet_memory(&std58, sizeof(std58));
      _Bool u59 = !std58;
      if (!u59) break;
        int* it60;
        int* t61 = first253;
        it60 = t61;
        while (1) {
          int* t63 = it60;
          int* t64 = last254;
          _Bool c65 = ((t63 != t64)) ? 1 : 0;
          if (!c65) break;
            void* t66 = pred55;
            int* t67 = it60;
            int t68 = *t67;
            char cast69 = (char)t68;
            int* std70;
            __VERIFIER_nondet_memory(&std70, sizeof(std70));
            int t71 = *std70;
            char cast72 = (char)t71;
            _Bool r73 = ((_Bool (*)(char, char))t66)(cast69, cast72);
            if (r73) {
              __retval56 = first151; // copy
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t74 = __retval56;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ret_val75 = t74;
              return ret_val75;
            }
        for_step62: ;
          int* t76 = it60;
          int c77 = 1;
          int* ptr78 = &(t76)[c77];
          it60 = ptr78;
        }
    for_step57: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std79;
      __VERIFIER_nondet_memory(&std79, sizeof(std79));
    }
  __retval56 = last152; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t80 = __retval56;
  return t80;
}

// function: main
int main() {
bb81:
  int __retval82;
  int mychars83[6];
  struct std__vector_int__std__allocator_int__ myvector84;
  struct std__allocator_int_ ref_tmp085;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it86;
  int match87[3];
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp188;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp089;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp190;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp391;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp292;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp393;
  int c94 = 0;
  __retval82 = c94;
  // array copy
  __builtin_memcpy(mychars83, __const_main_mychars, (unsigned long)6 * sizeof(__const_main_mychars[0]));
  int* cast95 = (int*)&(mychars83);
  int* cast96 = (int*)&(mychars83);
  int c97 = 6;
  int* ptr98 = &(cast96)[c97];
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp085, sizeof(ref_tmp085));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&myvector84, sizeof(myvector84));
    __VERIFIER_nondet_memory(cast95, sizeof(*cast95));
    __VERIFIER_nondet_memory(ptr98, sizeof(*ptr98));
    __VERIFIER_nondet_memory(&ref_tmp085, sizeof(ref_tmp085));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp085, sizeof(ref_tmp085));
  }
    // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
    __VERIFIER_nondet_memory(&it86, sizeof(it86));
    // array copy
    __builtin_memcpy(match87, __const_main_match, (unsigned long)3 * sizeof(__const_main_match[0]));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std99;
    __VERIFIER_nondet_memory(&std99, sizeof(std99));
    agg_tmp089 = std99;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std100;
    __VERIFIER_nondet_memory(&std100, sizeof(std100));
    agg_tmp190 = std100;
    int* cast101 = (int*)&(match87);
    int* cast102 = (int*)&(match87);
    int c103 = 3;
    int* ptr104 = &(cast102)[c103];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t105 = agg_tmp089;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t106 = agg_tmp190;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r107 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______find_first_of___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t105, t106, cast101, ptr104);
    ref_tmp188 = r107;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std108;
    __VERIFIER_nondet_memory(&std108, sizeof(std108));
    int* std109;
    __VERIFIER_nondet_memory(&std109, sizeof(std109));
    int t110 = *std109;
    int c111 = 65;
    _Bool c112 = ((t110 == c111)) ? 1 : 0;
    if (c112) {
    } else {
      char* cast113 = (char*)&(_str);
      char* c114 = _str_1;
      unsigned int c115 = 67;
      char* cast116 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast113, c114, c115, cast116);
    }
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2117;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std118;
      __VERIFIER_nondet_memory(&std118, sizeof(std118));
      ref_tmp2117 = std118;
      _Bool std119;
      __VERIFIER_nondet_memory(&std119, sizeof(std119));
      _Bool u120 = !std119;
      if (u120) {
        char* cast121 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* std122;
        __VERIFIER_nondet_memory(&std122, sizeof(std122));
        int* std123;
        __VERIFIER_nondet_memory(&std123, sizeof(std123));
        int t124 = *std123;
        struct std__basic_ostream_char__std__char_traits_char__* std125;
        __VERIFIER_nondet_memory(&std125, sizeof(std125));
        struct std__basic_ostream_char__std__char_traits_char__* std126;
        __VERIFIER_nondet_memory(&std126, sizeof(std126));
      }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std127;
    __VERIFIER_nondet_memory(&std127, sizeof(std127));
    agg_tmp292 = std127;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std128;
    __VERIFIER_nondet_memory(&std128, sizeof(std128));
    agg_tmp393 = std128;
    int* cast129 = (int*)&(match87);
    int* cast130 = (int*)&(match87);
    int c131 = 3;
    int* ptr132 = &(cast130)[c131];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t133 = agg_tmp292;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t134 = agg_tmp393;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r135 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______find_first_of___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__bool_____char__char_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___int___bool____(t133, t134, cast129, ptr132, &comp_case_insensitive);
    ref_tmp391 = r135;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std136;
    __VERIFIER_nondet_memory(&std136, sizeof(std136));
    int* std137;
    __VERIFIER_nondet_memory(&std137, sizeof(std137));
    int t138 = *std137;
    int c139 = 97;
    _Bool c140 = ((t138 == c139)) ? 1 : 0;
    if (c140) {
    } else {
      char* cast141 = (char*)&(_str_3);
      char* c142 = _str_1;
      unsigned int c143 = 74;
      char* cast144 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast141, c142, c143, cast144);
    }
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp4145;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std146;
      __VERIFIER_nondet_memory(&std146, sizeof(std146));
      ref_tmp4145 = std146;
      _Bool std147;
      __VERIFIER_nondet_memory(&std147, sizeof(std147));
      _Bool u148 = !std147;
      if (u148) {
        char* cast149 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* std150;
        __VERIFIER_nondet_memory(&std150, sizeof(std150));
        int* std151;
        __VERIFIER_nondet_memory(&std151, sizeof(std151));
        int t152 = *std151;
        struct std__basic_ostream_char__std__char_traits_char__* std153;
        __VERIFIER_nondet_memory(&std153, sizeof(std153));
        struct std__basic_ostream_char__std__char_traits_char__* std154;
        __VERIFIER_nondet_memory(&std154, sizeof(std154));
      }
    int c155 = 0;
    __retval82 = c155;
    int t156 = __retval82;
    int ret_val157 = t156;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&myvector84, sizeof(myvector84));
    }
    return ret_val157;
  int t158 = __retval82;
  return t158;
}

