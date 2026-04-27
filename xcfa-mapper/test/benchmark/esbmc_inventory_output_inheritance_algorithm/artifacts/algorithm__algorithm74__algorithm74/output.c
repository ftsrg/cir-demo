// Struct definitions (auto-parsed)
struct __gnu_cxx::__normal_iterator<const int *, std::vector<int>> { int* _M_current; };
struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> { int* _M_current; };
struct __gnu_cxx::__ops::_Iter_equal_to_iter { unsigned char __field0; };
struct __gnu_cxx::__ops::_Iter_equals_iter<int *> { int* _M_it1; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl { struct std3A3A_Vector_base3Cint2C_std3A3Aallocator3Cint3E3E3A3A_Vector_impl_data __field0; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data { int* _M_finish; int* _M_start; int* _M_end_of_storage; };
struct std::__new_allocator<int> { unsigned char __field0; };
struct std::allocator<int> { unsigned char __field0; };
struct std::vector<int> { struct std3A3A_Vector_base3Cint2C_std3A3Aallocator3Cint3E3E __field0; };
struct std::vector<int>::_Guard_alloc { int* _M_storage; unsigned long long _M_len; struct std::_Vector_base<int, std::allocator<int>>* _M_vect; };
struct std::_Vector_base<int, std::allocator<int>> { struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl _M_impl; };

int __const_main_match1[2];
char _str_3[26];
char _str_4[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char _str_5[77];
char _str_6[15] = "!this->empty()";
char _str[10] = "*it != 20";
char _str_1[96] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm74/main.cpp";
char _str_2[11] = "int main()";
// function: _Z11mypredicateii
_Bool mypredicate(int v0, int v1) {
bb2:
  int i3;
  int j4;
  _Bool __retval5;
  i3 = v0;
  j4 = v1;
  int t6 = i3;
  int t7 = j4;
  _Bool c8 = (t6 == t7) ? 1 : 0;
  __retval5 = c8;
  _Bool t9 = __retval5;
  return t9;
}

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector(struct std::vector<int>* v10) {
bb11:
  struct std::vector<int>* this12;
  this12 = v10;
  struct std::vector<int>* t13 = this12;
  struct std::_Vector_base<int, std::allocator<int>>* base14 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t13 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base(base14);
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev(struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* v15) {
bb16:
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* this17;
  this17 = v15;
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* t18 = this17;
  int* c19 = NULL;
  t18->_M_current = c19;
  return;
}

// function: _ZNSt15__new_allocatorIiE9constructIiJiEEEvPT_DpOT0_
void void_std____new_allocator_int___construct_int__int_(struct std::__new_allocator<int>* v20, int* v21, int* v22) {
bb23:
  struct std::__new_allocator<int>* this24;
  int* __p25;
  int* __args26;
  this24 = v20;
  __p25 = v21;
  __args26 = v22;
  struct std::__new_allocator<int>* t27 = this24;
  unsigned long long c28 = 4;
  int* t29 = __p25;
  void* cast30 = (void*)t29;
  int* cast31 = (int*)cast30;
  int* t32 = __args26;
  int t33 = *t32;
  *cast31 = t33;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std::allocator<int>* v34, int* v35, int* v36) {
bb37:
  struct std::allocator<int>* __a38;
  int* __p39;
  int* __args40;
  __a38 = v34;
  __p39 = v35;
  __args40 = v36;
  struct std::allocator<int>* t41 = __a38;
  struct std::__new_allocator<int>* base42 = (struct std::__new_allocator<int>*)((char *)t41 + 0);
  int* t43 = __p39;
  int* t44 = __args40;
  void_std____new_allocator_int___construct_int__int_(base42, t43, t44);
  return;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long long std____new_allocator_int____M_max_size___const(struct std::__new_allocator<int>* v45) {
bb46:
  struct std::__new_allocator<int>* this47;
  unsigned long long __retval48;
  this47 = v45;
  struct std::__new_allocator<int>* t49 = this47;
  long long c50 = 9223372036854775807;
  unsigned long long cast51 = (unsigned long long)c50;
  unsigned long long c52 = 4;
  unsigned long long b53 = cast51 / c52;
  __retval48 = b53;
  unsigned long long t54 = __retval48;
  return t54;
}

// function: _ZNKSt15__new_allocatorIiE8max_sizeEv
unsigned long long std____new_allocator_int___max_size___const(struct std::__new_allocator<int>* v55) {
bb56:
  struct std::__new_allocator<int>* this57;
  unsigned long long __retval58;
  this57 = v55;
  struct std::__new_allocator<int>* t59 = this57;
  unsigned long long r60 = std____new_allocator_int____M_max_size___const(t59);
  __retval58 = r60;
  unsigned long long t61 = __retval58;
  return t61;
}

// function: _ZNSt16allocator_traitsISaIiEE8max_sizeERKS0_
unsigned long long std__allocator_traits_std__allocator_int_____max_size(struct std::allocator<int>* v62) {
bb63:
  struct std::allocator<int>* __a64;
  unsigned long long __retval65;
  __a64 = v62;
  struct std::allocator<int>* t66 = __a64;
  struct std::__new_allocator<int>* base67 = (struct std::__new_allocator<int>*)((char *)t66 + 0);
  unsigned long long r68 = std____new_allocator_int___max_size___const(base67);
  __retval65 = r68;
  unsigned long long t69 = __retval65;
  return t69;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long long* unsigned_long_const__std__min_unsigned_long_(unsigned long long* v70, unsigned long long* v71) {
bb72:
  unsigned long long* __a77;
  unsigned long long* __b78;
  unsigned long long* __retval79;
  __a77 = v70;
  __b78 = v71;
  goto bb73;
bb73:
  unsigned long long* t80 = __b78;
  unsigned long long t81 = *t80;
  unsigned long long* t82 = __a77;
  unsigned long long t83 = *t82;
  _Bool c84 = (t81 < t83) ? 1 : 0;
  if (c84) goto bb74; else goto bb75;
bb74:
  unsigned long long* t85 = __b78;
  __retval79 = t85;
  unsigned long long* t86 = __retval79;
  return t86;
bb75:
  goto bb76;
bb76:
  unsigned long long* t87 = __a77;
  __retval79 = t87;
  unsigned long long* t88 = __retval79;
  return t88;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long long std__vector_int__std__allocator_int______S_max_size(struct std::allocator<int>* v89) {
bb90:
  struct std::allocator<int>* __a91;
  unsigned long long __retval92;
  unsigned long long __diffmax93;
  unsigned long long __allocmax94;
  __a91 = v89;
  unsigned long long c95 = 2305843009213693951;
  __diffmax93 = c95;
  struct std::allocator<int>* t96 = __a91;
  unsigned long long r97 = std__allocator_traits_std__allocator_int_____max_size(t96);
  __allocmax94 = r97;
  unsigned long long* r98 = unsigned_long_const__std__min_unsigned_long_(&__diffmax93, &__allocmax94);
  unsigned long long t99 = *r98;
  __retval92 = t99;
  unsigned long long t100 = __retval92;
  return t100;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std::allocator<int>* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std::_Vector_base<int, std::allocator<int>>* v101) {
bb102:
  struct std::_Vector_base<int, std::allocator<int>>* this103;
  struct std::allocator<int>* __retval104;
  this103 = v101;
  struct std::_Vector_base<int, std::allocator<int>>* t105 = this103;
  struct std::allocator<int>* base106 = (struct std::allocator<int>*)((char *)t105->_M_impl + 0);
  __retval104 = base106;
  struct std::allocator<int>* t107 = __retval104;
  return t107;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long long std__vector_int__std__allocator_int_____max_size___const(struct std::vector<int>* v108) {
bb109:
  struct std::vector<int>* this110;
  unsigned long long __retval111;
  this110 = v108;
  struct std::vector<int>* t112 = this110;
  struct std::_Vector_base<int, std::allocator<int>>* base113 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t112 + 0);
  struct std::allocator<int>* r114 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base113);
  unsigned long long r115 = std__vector_int__std__allocator_int______S_max_size(r114);
  __retval111 = r115;
  unsigned long long t116 = __retval111;
  return t116;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long long std__vector_int__std__allocator_int_____size___const(struct std::vector<int>* v117) {
bb118:
  struct std::vector<int>* this123;
  unsigned long long __retval124;
  long long __dif125;
  this123 = v117;
  struct std::vector<int>* t126 = this123;
  struct std::_Vector_base<int, std::allocator<int>>* base127 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t126 + 0);
  struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data* base128 = (struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data*)((char *)base127->_M_impl + 0);
  int* t129 = base128->_M_finish;
  struct std::_Vector_base<int, std::allocator<int>>* base130 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t126 + 0);
  struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data* base131 = (struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data*)((char *)base130->_M_impl + 0);
  int* t132 = base131->_M_start;
  long long diff133 = t129 - t132;
  __dif125 = diff133;
  goto bb119;
bb119:
  long long t134 = __dif125;
  int c135 = 0;
  long long cast136 = (long long)c135;
  _Bool c137 = (t134 < cast136) ? 1 : 0;
  if (c137) goto bb120; else goto bb121;
bb120:
