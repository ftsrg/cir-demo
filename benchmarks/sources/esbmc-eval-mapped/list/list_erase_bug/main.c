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
struct __gnu_cxx____aligned_membuf_unsigned_int_ { unsigned char _M_storage[4]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___List_const_iterator_unsigned_int_ { struct std____detail___List_node_base* _M_node; };
struct std___List_iterator_unsigned_int_ { struct std____detail___List_node_base* _M_node; };
struct std____allocated_ptr_std__allocator_std___List_node_unsigned_int___ { struct std__allocator_std___List_node_unsigned_int__* _M_alloc; struct std___List_node_unsigned_int_* _M_ptr; };
struct std____detail___List_node_base { struct std____detail___List_node_base* _M_next; struct std____detail___List_node_base* _M_prev; };
struct std____detail___List_size { unsigned long _M_size; };
struct std____new_allocator_std___List_node_unsigned_int__;
struct std__allocator_std___List_node_unsigned_int__;
struct std__bidirectional_iterator_tag { unsigned char __field0; };
struct std___List_node_unsigned_int_;
struct std____allocated_obj_std__allocator_std___List_node_unsigned_int___ { struct std____allocated_ptr_std__allocator_std___List_node_unsigned_int___ __field0; };
struct std____detail___List_node_header { struct std____detail___List_node_base __field0; struct std____detail___List_size __field1; };
struct std__ctype_char_;
struct std__ios_base;
struct std____cxx11___List_base_unsigned_int__std__allocator_unsigned_int_____List_impl { struct std____detail___List_node_header _M_node; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std____cxx11___List_base_unsigned_int__std__allocator_unsigned_int__ { struct std____cxx11___List_base_unsigned_int__std__allocator_unsigned_int_____List_impl _M_impl; };
struct std____cxx11__list_unsigned_int__std__allocator_unsigned_int__ { struct std____cxx11___List_base_unsigned_int__std__allocator_unsigned_int__ __field0; };

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[11] = "*it2 != 70";
char _str_1[107] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_erase_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[11] = "*it1 != 30";
char _str_3[19] = "mylist.size() == 8";
char _str_4[11] = "*it2 != 80";
char _str_5[19] = "mylist.size() == 7";
char _str_6[19] = "mylist.size() == 5";
char _str_7[11] = "*it2 != 60";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_8[17] = "mylist contains:";
char _str_9[2] = " ";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  unsigned int i2;
  struct std____cxx11__list_unsigned_int__std__allocator_unsigned_int__ mylist3;
  struct std___List_iterator_unsigned_int_ it14;
  struct std___List_iterator_unsigned_int_ it25;
  struct std___List_iterator_unsigned_int_ ref_tmp16;
  struct std___List_iterator_unsigned_int_ ref_tmp27;
  struct std___List_const_iterator_unsigned_int_ agg_tmp08;
  struct std___List_iterator_unsigned_int_ ref_tmp39;
  struct std___List_const_iterator_unsigned_int_ agg_tmp110;
  struct std___List_const_iterator_unsigned_int_ agg_tmp211;
  struct std___List_const_iterator_unsigned_int_ agg_tmp312;
  struct std___List_iterator_unsigned_int_ agg_tmp413;
  int c14 = 0;
  __retval1 = c14;
  // externalized std:: op: std::__cxx11::list<unsigned int, std::allocator<unsigned int> >::list()
  __VERIFIER_nondet_memory(&mylist3, sizeof(mylist3));
    // externalized std:: op: std::_List_iterator<unsigned int>::_List_iterator()
    __VERIFIER_nondet_memory(&it14, sizeof(it14));
    // externalized std:: op: std::_List_iterator<unsigned int>::_List_iterator()
    __VERIFIER_nondet_memory(&it25, sizeof(it25));
      unsigned int ref_tmp015;
      unsigned int c16 = 1;
      i2 = c16;
      while (1) {
        unsigned int t18 = i2;
        unsigned int c19 = 10;
        _Bool c20 = ((t18 < c19)) ? 1 : 0;
        if (!c20) break;
        unsigned int t21 = i2;
        unsigned int c22 = 10;
        unsigned int b23 = t21 * c22;
        ref_tmp015 = b23;
        // externalized std:: op: std::__cxx11::list<unsigned int, std::allocator<unsigned int> >::push_back(unsigned int&&)
        __VERIFIER_nondet_memory(&mylist3, sizeof(mylist3));
        __VERIFIER_nondet_memory(&ref_tmp015, sizeof(ref_tmp015));
      for_step17: ;
        unsigned int t24 = i2;
        unsigned int u25 = t24 + 1;
        i2 = u25;
      }
    struct std___List_iterator_unsigned_int_ std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    ref_tmp16 = std26;
    struct std___List_iterator_unsigned_int_* std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    struct std___List_iterator_unsigned_int_* std28;
    __VERIFIER_nondet_memory(&std28, sizeof(std28));
    int c29 = 6;
    // externalized std:: op: void std::advance<std::_List_iterator<unsigned int>, int>(std::_List_iterator<unsigned int>&, int)
    __VERIFIER_nondet_memory(&it25, sizeof(it25));
    unsigned int* std30;
    __VERIFIER_nondet_memory(&std30, sizeof(std30));
    unsigned int t31 = *std30;
    unsigned int c32 = 70;
    _Bool c33 = ((t31 != c32)) ? 1 : 0;
    if (c33) {
    } else {
      char* cast34 = (char*)&(_str);
      char* c35 = _str_1;
      unsigned int c36 = 26;
      char* cast37 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast34, c35, c36, cast37);
    }
    struct std___List_iterator_unsigned_int_* std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    // externalized std:: op: std::_List_const_iterator<unsigned int>::_List_const_iterator(std::_List_iterator<unsigned int> const&)
    __VERIFIER_nondet_memory(&agg_tmp08, sizeof(agg_tmp08));
    __VERIFIER_nondet_memory(&it14, sizeof(it14));
    struct std___List_const_iterator_unsigned_int_ t39 = agg_tmp08;
    struct std___List_iterator_unsigned_int_ std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    ref_tmp27 = std40;
    struct std___List_iterator_unsigned_int_* std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
    unsigned int* std42;
    __VERIFIER_nondet_memory(&std42, sizeof(std42));
    unsigned int t43 = *std42;
    unsigned int c44 = 30;
    _Bool c45 = ((t43 != c44)) ? 1 : 0;
    if (c45) {
    } else {
      char* cast46 = (char*)&(_str_2);
      char* c47 = _str_1;
      unsigned int c48 = 30;
      char* cast49 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast46, c47, c48, cast49);
    }
    unsigned long std50 = __VERIFIER_nondet_unsigned_long();
    unsigned long c51 = 8;
    _Bool c52 = ((std50 == c51)) ? 1 : 0;
    if (c52) {
    } else {
      char* cast53 = (char*)&(_str_3);
      char* c54 = _str_1;
      unsigned int c55 = 31;
      char* cast56 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast53, c54, c55, cast56);
    }
    // externalized std:: op: std::_List_const_iterator<unsigned int>::_List_const_iterator(std::_List_iterator<unsigned int> const&)
    __VERIFIER_nondet_memory(&agg_tmp110, sizeof(agg_tmp110));
    __VERIFIER_nondet_memory(&it25, sizeof(it25));
    struct std___List_const_iterator_unsigned_int_ t57 = agg_tmp110;
    struct std___List_iterator_unsigned_int_ std58;
    __VERIFIER_nondet_memory(&std58, sizeof(std58));
    ref_tmp39 = std58;
    struct std___List_iterator_unsigned_int_* std59;
    __VERIFIER_nondet_memory(&std59, sizeof(std59));
    unsigned int* std60;
    __VERIFIER_nondet_memory(&std60, sizeof(std60));
    unsigned int t61 = *std60;
    unsigned int c62 = 80;
    _Bool c63 = ((t61 != c62)) ? 1 : 0;
    if (c63) {
    } else {
      char* cast64 = (char*)&(_str_4);
      char* c65 = _str_1;
      unsigned int c66 = 36;
      char* cast67 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast64, c65, c66, cast67);
    }
    unsigned long std68 = __VERIFIER_nondet_unsigned_long();
    unsigned long c69 = 7;
    _Bool c70 = ((std68 == c69)) ? 1 : 0;
    if (c70) {
    } else {
      char* cast71 = (char*)&(_str_5);
      char* c72 = _str_1;
      unsigned int c73 = 37;
      char* cast74 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast71, c72, c73, cast74);
    }
    struct std___List_iterator_unsigned_int_* std75;
    __VERIFIER_nondet_memory(&std75, sizeof(std75));
    struct std___List_iterator_unsigned_int_* std76;
    __VERIFIER_nondet_memory(&std76, sizeof(std76));
    // externalized std:: op: std::_List_const_iterator<unsigned int>::_List_const_iterator(std::_List_iterator<unsigned int> const&)
    __VERIFIER_nondet_memory(&agg_tmp211, sizeof(agg_tmp211));
    __VERIFIER_nondet_memory(&it14, sizeof(it14));
    // externalized std:: op: std::_List_const_iterator<unsigned int>::_List_const_iterator(std::_List_iterator<unsigned int> const&)
    __VERIFIER_nondet_memory(&agg_tmp312, sizeof(agg_tmp312));
    __VERIFIER_nondet_memory(&it25, sizeof(it25));
    struct std___List_const_iterator_unsigned_int_ t77 = agg_tmp211;
    struct std___List_const_iterator_unsigned_int_ t78 = agg_tmp312;
    struct std___List_iterator_unsigned_int_ std79;
    __VERIFIER_nondet_memory(&std79, sizeof(std79));
    agg_tmp413 = std79;
    unsigned long std80 = __VERIFIER_nondet_unsigned_long();
    unsigned long c81 = 5;
    _Bool c82 = ((std80 == c81)) ? 1 : 0;
    if (c82) {
    } else {
      char* cast83 = (char*)&(_str_6);
      char* c84 = _str_1;
      unsigned int c85 = 44;
      char* cast86 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast83, c84, c85, cast86);
    }
    unsigned int* std87;
    __VERIFIER_nondet_memory(&std87, sizeof(std87));
    unsigned int t88 = *std87;
    unsigned int c89 = 60;
    _Bool c90 = ((t88 != c89)) ? 1 : 0;
    if (c90) {
    } else {
      char* cast91 = (char*)&(_str_7);
      char* c92 = _str_1;
      unsigned int c93 = 46;
      char* cast94 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast91, c92, c93, cast94);
    }
    char* cast95 = (char*)&(_str_8);
    struct std__basic_ostream_char__std__char_traits_char__* std96;
    __VERIFIER_nondet_memory(&std96, sizeof(std96));
      struct std___List_iterator_unsigned_int_ ref_tmp497;
      struct std___List_iterator_unsigned_int_ ref_tmp598;
      struct std___List_iterator_unsigned_int_ std99;
      __VERIFIER_nondet_memory(&std99, sizeof(std99));
      ref_tmp497 = std99;
      struct std___List_iterator_unsigned_int_* std100;
      __VERIFIER_nondet_memory(&std100, sizeof(std100));
      while (1) {
        struct std___List_iterator_unsigned_int_ std102;
        __VERIFIER_nondet_memory(&std102, sizeof(std102));
        ref_tmp598 = std102;
        _Bool std103;
        __VERIFIER_nondet_memory(&std103, sizeof(std103));
        _Bool u104 = !std103;
        if (!u104) break;
        char* cast105 = (char*)&(_str_9);
        struct std__basic_ostream_char__std__char_traits_char__* std106;
        __VERIFIER_nondet_memory(&std106, sizeof(std106));
        unsigned int* std107;
        __VERIFIER_nondet_memory(&std107, sizeof(std107));
        unsigned int t108 = *std107;
        struct std__basic_ostream_char__std__char_traits_char__* std109;
        __VERIFIER_nondet_memory(&std109, sizeof(std109));
      for_step101: ;
        struct std___List_iterator_unsigned_int_* std110;
        __VERIFIER_nondet_memory(&std110, sizeof(std110));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std111;
    __VERIFIER_nondet_memory(&std111, sizeof(std111));
    int c112 = 0;
    __retval1 = c112;
    int t113 = __retval1;
    int ret_val114 = t113;
    {
      // externalized std:: op: std::__cxx11::list<unsigned int, std::allocator<unsigned int> >::~list()
      __VERIFIER_nondet_memory(&mylist3, sizeof(mylist3));
    }
    return ret_val114;
  int t115 = __retval1;
  return t115;
}

