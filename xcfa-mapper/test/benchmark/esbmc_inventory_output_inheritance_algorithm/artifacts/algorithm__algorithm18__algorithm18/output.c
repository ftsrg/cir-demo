// Struct definitions (auto-parsed)
struct __gnu_cxx::__normal_iterator<const int *, std::vector<int>> { int* _M_current; };
struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> { int* _M_current; };
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

char _str_14[26];
char _str_15[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char _str_16[77];
char _str_17[15] = "!this->empty()";
char _str_18[26];
char _str_19[92];
char _str_20[19] = "__n < this->size()";
char _str[16] = "second[0] == 11";
char _str_1[96] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm18/main.cpp";
char _str_2[11] = "int main()";
char _str_3[16] = "second[1] == 21";
char _str_4[16] = "second[2] == 31";
char _str_5[16] = "second[3] == 41";
char _str_6[16] = "second[4] == 51";
char _str_7[15] = "first[0] == 21";
char _str_8[15] = "first[1] == 41";
char _str_9[15] = "first[2] == 61";
char _str_10[15] = "first[3] == 81";
char _str_11[16] = "first[4] == 101";
struct std::basic_ostream<char> _ZSt4cout;
char _str_12[16];
char _str_13[2] = " ";
// function: _Z11op_increasei
int op_increase(int v0) {
bb1:
  int i2;
  int __retval3;
  i2 = v0;
  int t4 = i2;
  int u5 = ++t4;
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

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector(struct std::vector<int>* v17) {
bb18:
  struct std::vector<int>* this19;
  this19 = v17;
  struct std::vector<int>* t20 = this19;
  struct std::_Vector_base<int, std::allocator<int>>* base21 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t20 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base(base21);
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev(struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* v22) {
bb23:
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* this24;
  this24 = v22;
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* t25 = this24;
  int* c26 = NULL;
  t25->_M_current = c26;
  return;
}

// function: _ZNSt15__new_allocatorIiE9constructIiJiEEEvPT_DpOT0_
void void_std____new_allocator_int___construct_int__int_(struct std::__new_allocator<int>* v27, int* v28, int* v29) {
bb30:
  struct std::__new_allocator<int>* this31;
  int* __p32;
  int* __args33;
  this31 = v27;
  __p32 = v28;
  __args33 = v29;
  struct std::__new_allocator<int>* t34 = this31;
  unsigned long long c35 = 4;
  int* t36 = __p32;
  void* cast37 = (void*)t36;
  int* cast38 = (int*)cast37;
  int* t39 = __args33;
  int t40 = *t39;
  *cast38 = t40;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std::allocator<int>* v41, int* v42, int* v43) {
bb44:
  struct std::allocator<int>* __a45;
  int* __p46;
  int* __args47;
  __a45 = v41;
  __p46 = v42;
  __args47 = v43;
  struct std::allocator<int>* t48 = __a45;
  struct std::__new_allocator<int>* base49 = (struct std::__new_allocator<int>*)((char *)t48 + 0);
  int* t50 = __p46;
  int* t51 = __args47;
  void_std____new_allocator_int___construct_int__int_(base49, t50, t51);
  return;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long long std____new_allocator_int____M_max_size___const(struct std::__new_allocator<int>* v52) {
bb53:
  struct std::__new_allocator<int>* this54;
  unsigned long long __retval55;
  this54 = v52;
  struct std::__new_allocator<int>* t56 = this54;
  long long c57 = 9223372036854775807;
  unsigned long long cast58 = (unsigned long long)c57;
  unsigned long long c59 = 4;
  unsigned long long b60 = cast58 / c59;
  __retval55 = b60;
  unsigned long long t61 = __retval55;
  return t61;
}

// function: _ZNKSt15__new_allocatorIiE8max_sizeEv
unsigned long long std____new_allocator_int___max_size___const(struct std::__new_allocator<int>* v62) {
bb63:
  struct std::__new_allocator<int>* this64;
  unsigned long long __retval65;
  this64 = v62;
  struct std::__new_allocator<int>* t66 = this64;
  unsigned long long r67 = std____new_allocator_int____M_max_size___const(t66);
  __retval65 = r67;
  unsigned long long t68 = __retval65;
  return t68;
}

// function: _ZNSt16allocator_traitsISaIiEE8max_sizeERKS0_
unsigned long long std__allocator_traits_std__allocator_int_____max_size(struct std::allocator<int>* v69) {
bb70:
  struct std::allocator<int>* __a71;
  unsigned long long __retval72;
  __a71 = v69;
  struct std::allocator<int>* t73 = __a71;
  struct std::__new_allocator<int>* base74 = (struct std::__new_allocator<int>*)((char *)t73 + 0);
  unsigned long long r75 = std____new_allocator_int___max_size___const(base74);
  __retval72 = r75;
  unsigned long long t76 = __retval72;
  return t76;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long long* unsigned_long_const__std__min_unsigned_long_(unsigned long long* v77, unsigned long long* v78) {
bb79:
  unsigned long long* __a84;
  unsigned long long* __b85;
  unsigned long long* __retval86;
  __a84 = v77;
  __b85 = v78;
  goto bb80;
bb80:
  unsigned long long* t87 = __b85;
  unsigned long long t88 = *t87;
  unsigned long long* t89 = __a84;
  unsigned long long t90 = *t89;
  _Bool c91 = (t88 < t90) ? 1 : 0;
  if (c91) goto bb81; else goto bb82;
bb81:
  unsigned long long* t92 = __b85;
  __retval86 = t92;
  unsigned long long* t93 = __retval86;
  return t93;
bb82:
  goto bb83;
bb83:
  unsigned long long* t94 = __a84;
  __retval86 = t94;
  unsigned long long* t95 = __retval86;
  return t95;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long long std__vector_int__std__allocator_int______S_max_size(struct std::allocator<int>* v96) {
bb97:
  struct std::allocator<int>* __a98;
  unsigned long long __retval99;
  unsigned long long __diffmax100;
  unsigned long long __allocmax101;
  __a98 = v96;
  unsigned long long c102 = 2305843009213693951;
  __diffmax100 = c102;
  struct std::allocator<int>* t103 = __a98;
  unsigned long long r104 = std__allocator_traits_std__allocator_int_____max_size(t103);
  __allocmax101 = r104;
  unsigned long long* r105 = unsigned_long_const__std__min_unsigned_long_(&__diffmax100, &__allocmax101);
  unsigned long long t106 = *r105;
  __retval99 = t106;
  unsigned long long t107 = __retval99;
  return t107;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std::allocator<int>* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std::_Vector_base<int, std::allocator<int>>* v108) {
bb109:
  struct std::_Vector_base<int, std::allocator<int>>* this110;
  struct std::allocator<int>* __retval111;
  this110 = v108;
  struct std::_Vector_base<int, std::allocator<int>>* t112 = this110;
  struct std::allocator<int>* base113 = (struct std::allocator<int>*)((char *)t112->_M_impl + 0);
  __retval111 = base113;
  struct std::allocator<int>* t114 = __retval111;
  return t114;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long long std__vector_int__std__allocator_int_____max_size___const(struct std::vector<int>* v115) {
bb116:
  struct std::vector<int>* this117;
  unsigned long long __retval118;
  this117 = v115;
  struct std::vector<int>* t119 = this117;
  struct std::_Vector_base<int, std::allocator<int>>* base120 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t119 + 0);
  struct std::allocator<int>* r121 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base120);
  unsigned long long r122 = std__vector_int__std__allocator_int______S_max_size(r121);
  __retval118 = r122;
  unsigned long long t123 = __retval118;
  return t123;
}

// function: _ZSt20__throw_length_errorPKc
void std____throw_length_error(char*);

// function: _ZSt3maxImERKT_S2_S2_
unsigned long long* unsigned_long_const__std__max_unsigned_long_(unsigned long long* v124, unsigned long long* v125) {
bb126:
  unsigned long long* __a131;
  unsigned long long* __b132;
  unsigned long long* __retval133;
  __a131 = v124;
  __b132 = v125;
  goto bb127;
bb127:
  unsigned long long* t134 = __a131;
  unsigned long long t135 = *t134;
  unsigned long long* t136 = __b132;
  unsigned long long t137 = *t136;
  _Bool c138 = (t135 < t137) ? 1 : 0;
  if (c138) goto bb128; else goto bb129;
bb128:
  unsigned long long* t139 = __b132;
  __retval133 = t139;
  unsigned long long* t140 = __retval133;
  return t140;
bb129:
  goto bb130;
bb130:
  unsigned long long* t141 = __a131;
  __retval133 = t141;
  unsigned long long* t142 = __retval133;
  return t142;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std::vector<int>* v143, unsigned long long v144, char* v145) {
  unsigned long long v146;
  _Bool v147;
  _Bool v148;
  unsigned long long v149;
bb150:
  unsigned long long ref.tmp0166;
  struct std::vector<int>* this167;
  unsigned long long __n168;
  char* __s169;
  unsigned long long __retval170;
  unsigned long long __len171;
  this167 = v143;
  __n168 = v144;
  __s169 = v145;
  struct std::vector<int>* t172 = this167;
  goto bb151;
bb151:
  unsigned long long r173 = std__vector_int__std__allocator_int_____max_size___const(t172);
  unsigned long long r174 = std__vector_int__std__allocator_int_____size___const(t172);
  unsigned long long b175 = r173 - r174;
  unsigned long long t176 = __n168;
  _Bool c177 = (b175 < t176) ? 1 : 0;
  if (c177) goto bb152; else goto bb153;
bb152:
  char* t178 = __s169;
  std____throw_length_error(t178);
  goto bb153;
bb153:
  goto bb154;
bb154:
  goto bb155;
bb155:
  unsigned long long r179 = std__vector_int__std__allocator_int_____size___const(t172);
  unsigned long long r180 = std__vector_int__std__allocator_int_____size___const(t172);
  ref.tmp0166 = r180;
  unsigned long long* r181 = unsigned_long_const__std__max_unsigned_long_(&ref.tmp0166, &__n168);
  unsigned long long t182 = *r181;
  unsigned long long b183 = r179 + t182;
  v146 = b183;
  goto bb156;
bb156:
  __len171 = v146;
  unsigned long long t184 = __len171;
  unsigned long long r185 = std__vector_int__std__allocator_int_____size___const(t172);
  _Bool c186 = (t184 < r185) ? 1 : 0;
  if (c186) goto bb157; else goto bb158;
bb157:
  _Bool c187 = 1;
  v148 = c187;
  goto bb162;
bb158:
  unsigned long long t188 = __len171;
  unsigned long long r189 = std__vector_int__std__allocator_int_____max_size___const(t172);
  _Bool c190 = (t188 > r189) ? 1 : 0;
  if (c190) goto bb159; else goto bb160;
bb159:
  _Bool c191 = 1;
  v147 = c191;
  goto bb161;
bb160:
  _Bool c192 = 0;
  v147 = c192;
  goto bb161;
bb161:
  v148 = v147;
  goto bb162;
bb162:
  if (v148) goto bb163; else goto bb164;
bb163:
  unsigned long long r193 = std__vector_int__std__allocator_int_____max_size___const(t172);
  v149 = r193;
  goto bb165;
bb164:
  unsigned long long t194 = __len171;
  v149 = t194;
  goto bb165;
bb165:
  __retval170 = v149;
  unsigned long long t195 = __retval170;
  return t195;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* v196, struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* v197) {
bb198:
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* __lhs199;
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* __rhs200;
  long long __retval201;
  __lhs199 = v196;
  __rhs200 = v197;
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* t202 = __lhs199;
  int** r203 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t202);
  int* t204 = *r203;
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* t205 = __rhs200;
  int** r206 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t205);
  int* t207 = *r206;
  long long diff208 = t204 - t207;
  __retval201 = diff208;
  long long t209 = __retval201;
  return t209;
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
int* std____new_allocator_int___allocate(struct std::__new_allocator<int>* v210, unsigned long long v211, void* v212) {
bb213:
  unsigned long long __al226;
  struct std::__new_allocator<int>* this227;
  unsigned long long __n228;
