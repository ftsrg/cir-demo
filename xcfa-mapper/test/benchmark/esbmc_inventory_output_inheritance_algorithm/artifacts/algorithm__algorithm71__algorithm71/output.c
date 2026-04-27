// Struct definitions (auto-parsed)
struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> { int* _M_current; };
struct __gnu_cxx::__ops::_Iter_pred<bool (*)(int)> { void* _M_pred; };
struct __locale_struct { unsigned char __placeholder; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl { struct std3A3A_Vector_base3Cint2C_std3A3Aallocator3Cint3E3E3A3A_Vector_impl_data __field0; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data { int* _M_finish; int* _M_start; int* _M_end_of_storage; };
struct std::__new_allocator<int> { unsigned char __field0; };
struct std::allocator<int> { unsigned char __field0; };
struct std::basic_ios<char> { struct std3A3Aios_base __field0; char __field2; _Bool __field3; };
struct std::basic_ostream<char> { struct std3A3Abasic_ios3Cchar3E __field1; };
struct std::basic_streambuf<char> { struct std3A3Alocale __field7; };
struct std::ctype<char> { struct std3A3Alocale3A3Afacet2Ebase __field0; _Bool __field3; char __field8; char __field11; };
struct std::ios_base { long long __field1; long long __field2; int __field3; int __field4; int __field5; struct std3A3Aios_base3A3A_Words __field7; int __field9; struct std3A3Alocale __field11; };
struct std::ios_base::_Callback_list { int __field2; int __field3; };
struct std::ios_base::_Words { long long __field1; };
struct std::locale { unsigned char __placeholder; };
struct std::locale::_Impl { int __field0; unsigned long long __field2; };
struct std::locale::facet { int __field1; };
struct std::locale::facet_base { int __field1; };
struct std::num_get<char> { struct std3A3Alocale3A3Afacet2Ebase __field0; };
struct std::num_put<char> { struct std3A3Alocale3A3Afacet2Ebase __field0; };
struct std::vector<int> { struct std3A3A_Vector_base3Cint2C_std3A3Aallocator3Cint3E3E __field0; };
struct std::vector<int>::_Guard_alloc { int* _M_storage; unsigned long long _M_len; struct std::_Vector_base<int, std::allocator<int>>* _M_vect; };
struct std::_Vector_base<int, std::allocator<int>> { struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl _M_impl; };

char _str_5[26];
char _str[13] = "mycount != 5";
char _str_1[96] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm71/main.cpp";
char _str_2[11] = "int main()";
struct std::basic_ostream<char> _ZSt4cout;
char _str_3[19] = "myvector contains ";
char _str_4[14] = " odd values.\\0A";
// function: _Z5IsOddi
_Bool IsOdd(int v0) {
bb1:
  int i2;
  _Bool __retval3;
  i2 = v0;
  int t4 = i2;
  int c5 = 2;
  int b6 = t4 % c5;
  int c7 = 1;
  _Bool c8 = (b6 == c7) ? 1 : 0;
  __retval3 = c8;
  _Bool t9 = __retval3;
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

// function: _ZNSt15__new_allocatorIiE9constructIiJRKiEEEvPT_DpOT0_
void void_std____new_allocator_int___construct_int__int_const__(struct std::__new_allocator<int>* v15, int* v16, int* v17) {
bb18:
  struct std::__new_allocator<int>* this19;
  int* __p20;
  int* __args21;
  this19 = v15;
  __p20 = v16;
  __args21 = v17;
  struct std::__new_allocator<int>* t22 = this19;
  unsigned long long c23 = 4;
  int* t24 = __p20;
  void* cast25 = (void*)t24;
  int* cast26 = (int*)cast25;
  int* t27 = __args21;
  int t28 = *t27;
  *cast26 = t28;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std::allocator<int>* v29, int* v30, int* v31) {
bb32:
  struct std::allocator<int>* __a33;
  int* __p34;
  int* __args35;
  __a33 = v29;
  __p34 = v30;
  __args35 = v31;
  struct std::allocator<int>* t36 = __a33;
  struct std::__new_allocator<int>* base37 = (struct std::__new_allocator<int>*)((char *)t36 + 0);
  int* t38 = __p34;
  int* t39 = __args35;
  void_std____new_allocator_int___construct_int__int_const__(base37, t38, t39);
  return;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long long std____new_allocator_int____M_max_size___const(struct std::__new_allocator<int>* v40) {
bb41:
  struct std::__new_allocator<int>* this42;
  unsigned long long __retval43;
  this42 = v40;
  struct std::__new_allocator<int>* t44 = this42;
  long long c45 = 9223372036854775807;
  unsigned long long cast46 = (unsigned long long)c45;
  unsigned long long c47 = 4;
  unsigned long long b48 = cast46 / c47;
  __retval43 = b48;
  unsigned long long t49 = __retval43;
  return t49;
}

// function: _ZNKSt15__new_allocatorIiE8max_sizeEv
unsigned long long std____new_allocator_int___max_size___const(struct std::__new_allocator<int>* v50) {
bb51:
  struct std::__new_allocator<int>* this52;
  unsigned long long __retval53;
  this52 = v50;
  struct std::__new_allocator<int>* t54 = this52;
  unsigned long long r55 = std____new_allocator_int____M_max_size___const(t54);
  __retval53 = r55;
  unsigned long long t56 = __retval53;
  return t56;
}

// function: _ZNSt16allocator_traitsISaIiEE8max_sizeERKS0_
unsigned long long std__allocator_traits_std__allocator_int_____max_size(struct std::allocator<int>* v57) {
bb58:
  struct std::allocator<int>* __a59;
  unsigned long long __retval60;
  __a59 = v57;
  struct std::allocator<int>* t61 = __a59;
  struct std::__new_allocator<int>* base62 = (struct std::__new_allocator<int>*)((char *)t61 + 0);
  unsigned long long r63 = std____new_allocator_int___max_size___const(base62);
  __retval60 = r63;
  unsigned long long t64 = __retval60;
  return t64;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long long* unsigned_long_const__std__min_unsigned_long_(unsigned long long* v65, unsigned long long* v66) {
bb67:
  unsigned long long* __a72;
  unsigned long long* __b73;
  unsigned long long* __retval74;
  __a72 = v65;
  __b73 = v66;
  goto bb68;
bb68:
  unsigned long long* t75 = __b73;
  unsigned long long t76 = *t75;
  unsigned long long* t77 = __a72;
  unsigned long long t78 = *t77;
  _Bool c79 = (t76 < t78) ? 1 : 0;
  if (c79) goto bb69; else goto bb70;
bb69:
  unsigned long long* t80 = __b73;
  __retval74 = t80;
  unsigned long long* t81 = __retval74;
  return t81;
bb70:
  goto bb71;
bb71:
  unsigned long long* t82 = __a72;
  __retval74 = t82;
  unsigned long long* t83 = __retval74;
  return t83;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long long std__vector_int__std__allocator_int______S_max_size(struct std::allocator<int>* v84) {
bb85:
  struct std::allocator<int>* __a86;
  unsigned long long __retval87;
  unsigned long long __diffmax88;
  unsigned long long __allocmax89;
  __a86 = v84;
  unsigned long long c90 = 2305843009213693951;
  __diffmax88 = c90;
  struct std::allocator<int>* t91 = __a86;
  unsigned long long r92 = std__allocator_traits_std__allocator_int_____max_size(t91);
  __allocmax89 = r92;
  unsigned long long* r93 = unsigned_long_const__std__min_unsigned_long_(&__diffmax88, &__allocmax89);
  unsigned long long t94 = *r93;
  __retval87 = t94;
  unsigned long long t95 = __retval87;
  return t95;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std::allocator<int>* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std::_Vector_base<int, std::allocator<int>>* v96) {
bb97:
  struct std::_Vector_base<int, std::allocator<int>>* this98;
  struct std::allocator<int>* __retval99;
  this98 = v96;
  struct std::_Vector_base<int, std::allocator<int>>* t100 = this98;
  struct std::allocator<int>* base101 = (struct std::allocator<int>*)((char *)t100->_M_impl + 0);
  __retval99 = base101;
  struct std::allocator<int>* t102 = __retval99;
  return t102;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long long std__vector_int__std__allocator_int_____max_size___const(struct std::vector<int>* v103) {
bb104:
  struct std::vector<int>* this105;
  unsigned long long __retval106;
  this105 = v103;
  struct std::vector<int>* t107 = this105;
  struct std::_Vector_base<int, std::allocator<int>>* base108 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t107 + 0);
  struct std::allocator<int>* r109 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base108);
  unsigned long long r110 = std__vector_int__std__allocator_int______S_max_size(r109);
  __retval106 = r110;
  unsigned long long t111 = __retval106;
  return t111;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long long std__vector_int__std__allocator_int_____size___const(struct std::vector<int>* v112) {
bb113:
  struct std::vector<int>* this118;
  unsigned long long __retval119;
  long long __dif120;
  this118 = v112;
  struct std::vector<int>* t121 = this118;
  struct std::_Vector_base<int, std::allocator<int>>* base122 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t121 + 0);
  struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data* base123 = (struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data*)((char *)base122->_M_impl + 0);
  int* t124 = base123->_M_finish;
  struct std::_Vector_base<int, std::allocator<int>>* base125 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t121 + 0);
  struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data* base126 = (struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data*)((char *)base125->_M_impl + 0);
  int* t127 = base126->_M_start;
  long long diff128 = t124 - t127;
  __dif120 = diff128;
  goto bb114;
bb114:
  long long t129 = __dif120;
  int c130 = 0;
  long long cast131 = (long long)c130;
  _Bool c132 = (t129 < cast131) ? 1 : 0;
  if (c132) goto bb115; else goto bb116;
bb115:
