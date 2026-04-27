// Struct definitions (auto-parsed)
struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> { int* _M_current; };
struct __gnu_cxx::__ops::_Iter_pred<bool (*)(int)> { void* _M_pred; };
struct __locale_struct { unsigned char __placeholder; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl { struct std3A3A_Vector_base3Cint2C_std3A3Aallocator3Cint3E3E3A3A_Vector_impl_data __field0; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
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
struct std::random_access_iterator_tag { unsigned char __field0; };
struct std::vector<int> { struct std3A3A_Vector_base3Cint2C_std3A3Aallocator3Cint3E3E __field0; };
struct std::vector<int>::_Guard_alloc { int* _M_storage; unsigned long long _M_len; struct std::_Vector_base<int, std::allocator<int>>* _M_vect; };
struct std::_Vector_base<int, std::allocator<int>> { struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl _M_impl; };

char _str_9[26];
char _str_10[26];
char _str_11[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char _str_12[92];
char _str_13[19] = "__n < this->size()";
char _str[15] = "second[0] == 0";
char _str_1[96] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm22/main.cpp";
char _str_2[11] = "int main()";
char _str_3[15] = "second[2] == 0";
char _str_4[15] = "second[4] == 0";
char _str_5[15] = "second[6] == 0";
char _str_6[15] = "second[8] == 0";
struct std::basic_ostream<char> _ZSt4cout;
char _str_7[17];
char _str_8[2] = " ";
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

// function: _ZNSt15__new_allocatorIiE9constructIiJRKiEEEvPT_DpOT0_
void void_std____new_allocator_int___construct_int__int_const__(struct std::__new_allocator<int>* v20, int* v21, int* v22) {
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

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std::allocator<int>* v34, int* v35, int* v36) {
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
  void_std____new_allocator_int___construct_int__int_const__(base42, t43, t44);
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

// function: _ZSt20__throw_length_errorPKc
void std____throw_length_error(char*);

// function: _ZSt3maxImERKT_S2_S2_
unsigned long long* unsigned_long_const__std__max_unsigned_long_(unsigned long long* v117, unsigned long long* v118) {
bb119:
  unsigned long long* __a124;
  unsigned long long* __b125;
  unsigned long long* __retval126;
  __a124 = v117;
  __b125 = v118;
  goto bb120;
bb120:
  unsigned long long* t127 = __a124;
  unsigned long long t128 = *t127;
  unsigned long long* t129 = __b125;
  unsigned long long t130 = *t129;
  _Bool c131 = (t128 < t130) ? 1 : 0;
  if (c131) goto bb121; else goto bb122;
bb121:
  unsigned long long* t132 = __b125;
  __retval126 = t132;
  unsigned long long* t133 = __retval126;
  return t133;
bb122:
  goto bb123;
bb123:
  unsigned long long* t134 = __a124;
  __retval126 = t134;
  unsigned long long* t135 = __retval126;
  return t135;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std::vector<int>* v136, unsigned long long v137, char* v138) {
  unsigned long long v139;
  _Bool v140;
  _Bool v141;
  unsigned long long v142;
bb143:
  unsigned long long ref.tmp0159;
  struct std::vector<int>* this160;
  unsigned long long __n161;
  char* __s162;
  unsigned long long __retval163;
  unsigned long long __len164;
  this160 = v136;
  __n161 = v137;
  __s162 = v138;
  struct std::vector<int>* t165 = this160;
  goto bb144;
bb144:
  unsigned long long r166 = std__vector_int__std__allocator_int_____max_size___const(t165);
  unsigned long long r167 = std__vector_int__std__allocator_int_____size___const(t165);
  unsigned long long b168 = r166 - r167;
  unsigned long long t169 = __n161;
  _Bool c170 = (b168 < t169) ? 1 : 0;
  if (c170) goto bb145; else goto bb146;
bb145:
  char* t171 = __s162;
  std____throw_length_error(t171);
  goto bb146;
bb146:
  goto bb147;
bb147:
  goto bb148;
bb148:
  unsigned long long r172 = std__vector_int__std__allocator_int_____size___const(t165);
  unsigned long long r173 = std__vector_int__std__allocator_int_____size___const(t165);
  ref.tmp0159 = r173;
  unsigned long long* r174 = unsigned_long_const__std__max_unsigned_long_(&ref.tmp0159, &__n161);
  unsigned long long t175 = *r174;
  unsigned long long b176 = r172 + t175;
  v139 = b176;
  goto bb149;
bb149:
  __len164 = v139;
  unsigned long long t177 = __len164;
  unsigned long long r178 = std__vector_int__std__allocator_int_____size___const(t165);
  _Bool c179 = (t177 < r178) ? 1 : 0;
  if (c179) goto bb150; else goto bb151;
bb150:
  _Bool c180 = 1;
  v141 = c180;
  goto bb155;
bb151:
  unsigned long long t181 = __len164;
  unsigned long long r182 = std__vector_int__std__allocator_int_____max_size___const(t165);
  _Bool c183 = (t181 > r182) ? 1 : 0;
  if (c183) goto bb152; else goto bb153;
bb152:
  _Bool c184 = 1;
  v140 = c184;
  goto bb154;
bb153:
  _Bool c185 = 0;
  v140 = c185;
  goto bb154;
bb154:
  v141 = v140;
  goto bb155;
bb155:
  if (v141) goto bb156; else goto bb157;
bb156:
  unsigned long long r186 = std__vector_int__std__allocator_int_____max_size___const(t165);
  v142 = r186;
  goto bb158;
bb157:
  unsigned long long t187 = __len164;
  v142 = t187;
  goto bb158;
bb158:
  __retval163 = v142;
  unsigned long long t188 = __retval163;
  return t188;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* v189, struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* v190) {
bb191:
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* __lhs192;
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* __rhs193;
  long long __retval194;
  __lhs192 = v189;
  __rhs193 = v190;
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* t195 = __lhs192;
  int** r196 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t195);
  int* t197 = *r196;
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* t198 = __rhs193;
  int** r199 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t198);
  int* t200 = *r199;
  long long diff201 = t197 - t200;
  __retval194 = diff201;
  long long t202 = __retval194;
  return t202;
}

// function: _ZSt28__throw_bad_array_new_lengthv
void std____throw_bad_array_new_length();

// function: _ZSt17__throw_bad_allocv
void std____throw_bad_alloc();

// function: _ZnwmSt11align_val_t
void* _ZnwmSt11align_val_t(unsigned long long, unsigned long long);

// function: _Znwm
void* _Znwm(unsigned long long);

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std::__new_allocator<int>* v203, unsigned long long v204, void* v205) {
bb206:
  unsigned long long __al219;
  struct std::__new_allocator<int>* this220;
  unsigned long long __n221;
