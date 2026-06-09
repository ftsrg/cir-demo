extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_;
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[16] = "second[0] == 11";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm18/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[16] = "second[1] == 21";
char _str_3[16] = "second[2] == 31";
char _str_4[16] = "second[3] == 41";
char _str_5[16] = "second[4] == 51";
char _str_6[15] = "first[0] == 21";
char _str_7[15] = "first[1] == 41";
char _str_8[15] = "first[2] == 61";
char _str_9[15] = "first[3] == 81";
char _str_10[16] = "first[4] == 101";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_11[16] = "first contains:";
char _str_12[2] = " ";
char _str_13[26] = "vector::_M_realloc_append";
char _str_14[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_15[15] = "!this->empty()";
char _str_16[26] = "vector::_M_default_append";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_17[19] = "__n < this->size()";
int op_increase(int p0);
int op_sum(int p0, int p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: _Z11op_increasei
int op_increase(int v0) {
bb1:
  int i2;
  int __retval3;
  i2 = v0;
  int t4 = i2;
  int u5 = t4 + 1;
  i2 = u5;
  __retval3 = u5;
  int t6 = __retval3;
  return t6;
}

// function: _Z6op_sumii
int op_sum(int v7, int v8) {
bb9:
  int i10;
  int j11;
  int __retval12;
  i10 = v7;
  j11 = v8;
  int t13 = i10;
  int t14 = j11;
  int b15 = t13 + t14;
  __retval12 = b15;
  int t16 = __retval12;
  return t16;
}

// function: main
int main() {
bb17:
  int __retval18;
  struct std__vector_int__std__allocator_int__ first19;
  struct std__vector_int__std__allocator_int__ second20;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it21;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp022;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp123;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp224;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp325;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp426;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp527;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp628;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp729;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp830;
  int c31 = 0;
  __retval18 = c31;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&first19, sizeof(first19));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
    __VERIFIER_nondet_memory(&second20, sizeof(second20));
      // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
      __VERIFIER_nondet_memory(&it21, sizeof(it21));
        int i32;
        int ref_tmp033;
        int c34 = 1;
        i32 = c34;
        while (1) {
          int t36 = i32;
          int c37 = 6;
          _Bool c38 = ((t36 < c37)) ? 1 : 0;
          if (!c38) break;
          int t39 = i32;
          int c40 = 10;
          int b41 = t39 * c40;
          ref_tmp033 = b41;
          // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
          __VERIFIER_nondet_memory(&first19, sizeof(first19));
          __VERIFIER_nondet_memory(&ref_tmp033, sizeof(ref_tmp033));
        for_step35: ;
          int t42 = i32;
          int u43 = t42 + 1;
          i32 = u43;
        }
      unsigned long std44 = __VERIFIER_nondet_unsigned_long();
      // externalized std:: op: std::vector<int, std::allocator<int> >::resize(unsigned long)
      __VERIFIER_nondet_memory(&second20, sizeof(second20));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std45;
      __VERIFIER_nondet_memory(&std45, sizeof(std45));
      agg_tmp022 = std45;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std46;
      __VERIFIER_nondet_memory(&std46, sizeof(std46));
      agg_tmp123 = std46;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std47;
      __VERIFIER_nondet_memory(&std47, sizeof(std47));
      agg_tmp224 = std47;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t48 = agg_tmp022;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t49 = agg_tmp123;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t50 = agg_tmp224;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std51;
      __VERIFIER_nondet_memory(&std51, sizeof(std51));
      agg_tmp325 = std51;
      unsigned long c52 = 0;
      int* std53;
      __VERIFIER_nondet_memory(&std53, sizeof(std53));
      int t54 = *std53;
      int c55 = 11;
      _Bool c56 = ((t54 == c55)) ? 1 : 0;
      if (c56) {
      } else {
        char* cast57 = (char*)&(_str);
        char* c58 = _str_1;
        unsigned int c59 = 29;
        char* cast60 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast57, c58, c59, cast60);
      }
      unsigned long c61 = 1;
      int* std62;
      __VERIFIER_nondet_memory(&std62, sizeof(std62));
      int t63 = *std62;
      int c64 = 21;
      _Bool c65 = ((t63 == c64)) ? 1 : 0;
      if (c65) {
      } else {
        char* cast66 = (char*)&(_str_2);
        char* c67 = _str_1;
        unsigned int c68 = 30;
        char* cast69 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast66, c67, c68, cast69);
      }
      unsigned long c70 = 2;
      int* std71;
      __VERIFIER_nondet_memory(&std71, sizeof(std71));
      int t72 = *std71;
      int c73 = 31;
      _Bool c74 = ((t72 == c73)) ? 1 : 0;
      if (c74) {
      } else {
        char* cast75 = (char*)&(_str_3);
        char* c76 = _str_1;
        unsigned int c77 = 31;
        char* cast78 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast75, c76, c77, cast78);
      }
      unsigned long c79 = 3;
      int* std80;
      __VERIFIER_nondet_memory(&std80, sizeof(std80));
      int t81 = *std80;
      int c82 = 41;
      _Bool c83 = ((t81 == c82)) ? 1 : 0;
      if (c83) {
      } else {
        char* cast84 = (char*)&(_str_4);
        char* c85 = _str_1;
        unsigned int c86 = 32;
        char* cast87 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast84, c85, c86, cast87);
      }
      unsigned long c88 = 4;
      int* std89;
      __VERIFIER_nondet_memory(&std89, sizeof(std89));
      int t90 = *std89;
      int c91 = 51;
      _Bool c92 = ((t90 == c91)) ? 1 : 0;
      if (c92) {
      } else {
        char* cast93 = (char*)&(_str_5);
        char* c94 = _str_1;
        unsigned int c95 = 33;
        char* cast96 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast93, c94, c95, cast96);
      }
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std97;
      __VERIFIER_nondet_memory(&std97, sizeof(std97));
      agg_tmp426 = std97;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std98;
      __VERIFIER_nondet_memory(&std98, sizeof(std98));
      agg_tmp527 = std98;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std99;
      __VERIFIER_nondet_memory(&std99, sizeof(std99));
      agg_tmp628 = std99;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std100;
      __VERIFIER_nondet_memory(&std100, sizeof(std100));
      agg_tmp729 = std100;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t101 = agg_tmp426;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t102 = agg_tmp527;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t103 = agg_tmp628;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t104 = agg_tmp729;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std105;
      __VERIFIER_nondet_memory(&std105, sizeof(std105));
      agg_tmp830 = std105;
      unsigned long c106 = 0;
      int* std107;
      __VERIFIER_nondet_memory(&std107, sizeof(std107));
      int t108 = *std107;
      int c109 = 21;
      _Bool c110 = ((t108 == c109)) ? 1 : 0;
      if (c110) {
      } else {
        char* cast111 = (char*)&(_str_6);
        char* c112 = _str_1;
        unsigned int c113 = 37;
        char* cast114 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast111, c112, c113, cast114);
      }
      unsigned long c115 = 1;
      int* std116;
      __VERIFIER_nondet_memory(&std116, sizeof(std116));
      int t117 = *std116;
      int c118 = 41;
      _Bool c119 = ((t117 == c118)) ? 1 : 0;
      if (c119) {
      } else {
        char* cast120 = (char*)&(_str_7);
        char* c121 = _str_1;
        unsigned int c122 = 38;
        char* cast123 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast120, c121, c122, cast123);
      }
      unsigned long c124 = 2;
      int* std125;
      __VERIFIER_nondet_memory(&std125, sizeof(std125));
      int t126 = *std125;
      int c127 = 61;
      _Bool c128 = ((t126 == c127)) ? 1 : 0;
      if (c128) {
      } else {
        char* cast129 = (char*)&(_str_8);
        char* c130 = _str_1;
        unsigned int c131 = 39;
        char* cast132 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast129, c130, c131, cast132);
      }
      unsigned long c133 = 3;
      int* std134;
      __VERIFIER_nondet_memory(&std134, sizeof(std134));
      int t135 = *std134;
      int c136 = 81;
      _Bool c137 = ((t135 == c136)) ? 1 : 0;
      if (c137) {
      } else {
        char* cast138 = (char*)&(_str_9);
        char* c139 = _str_1;
        unsigned int c140 = 40;
        char* cast141 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast138, c139, c140, cast141);
      }
      unsigned long c142 = 4;
      int* std143;
      __VERIFIER_nondet_memory(&std143, sizeof(std143));
      int t144 = *std143;
      int c145 = 101;
      _Bool c146 = ((t144 == c145)) ? 1 : 0;
      if (c146) {
      } else {
        char* cast147 = (char*)&(_str_10);
        char* c148 = _str_1;
        unsigned int c149 = 41;
        char* cast150 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast147, c148, c149, cast150);
      }
      char* cast151 = (char*)&(_str_11);
      struct std__basic_ostream_char__std__char_traits_char__* std152;
      __VERIFIER_nondet_memory(&std152, sizeof(std152));
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1153;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2154;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std155;
        __VERIFIER_nondet_memory(&std155, sizeof(std155));
        ref_tmp1153 = std155;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std156;
        __VERIFIER_nondet_memory(&std156, sizeof(std156));
        while (1) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std158;
          __VERIFIER_nondet_memory(&std158, sizeof(std158));
          ref_tmp2154 = std158;
          _Bool std159;
          __VERIFIER_nondet_memory(&std159, sizeof(std159));
          _Bool u160 = !std159;
          if (!u160) break;
          char* cast161 = (char*)&(_str_12);
          struct std__basic_ostream_char__std__char_traits_char__* std162;
          __VERIFIER_nondet_memory(&std162, sizeof(std162));
          int* std163;
          __VERIFIER_nondet_memory(&std163, sizeof(std163));
          int t164 = *std163;
          struct std__basic_ostream_char__std__char_traits_char__* std165;
          __VERIFIER_nondet_memory(&std165, sizeof(std165));
        for_step157: ;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std166;
          __VERIFIER_nondet_memory(&std166, sizeof(std166));
        }
      struct std__basic_ostream_char__std__char_traits_char__* std167;
      __VERIFIER_nondet_memory(&std167, sizeof(std167));
      int c168 = 0;
      __retval18 = c168;
      int t169 = __retval18;
      int ret_val170 = t169;
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&second20, sizeof(second20));
      }
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&first19, sizeof(first19));
      }
      return ret_val170;
  int t171 = __retval18;
  return t171;
}

