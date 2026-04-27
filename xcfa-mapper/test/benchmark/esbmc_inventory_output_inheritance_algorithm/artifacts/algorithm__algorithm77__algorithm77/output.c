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

char _str_5[26];
char _str_6[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char _str_7[77];
char _str_8[15] = "!this->empty()";
char _str_9[26];
char _str_10[92];
char _str_11[19] = "__n < this->size()";
char _str[18] = "myvector[5] != 30";
char _str_1[96] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm77/main.cpp";
char _str_2[11] = "int main()";
struct std::basic_ostream<char> _ZSt4cout;
char _str_3[19];
char _str_4[2] = " ";
// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector(struct std::vector<int>* v0) {
bb1:
  struct std::vector<int>* this2;
  this2 = v0;
  struct std::vector<int>* t3 = this2;
  struct std::_Vector_base<int, std::allocator<int>>* base4 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t3 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base(base4);
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev(struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* v5) {
bb6:
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* this7;
  this7 = v5;
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* t8 = this7;
  int* c9 = NULL;
  t8->_M_current = c9;
  return;
}

// function: _ZNSt15__new_allocatorIiE9constructIiJiEEEvPT_DpOT0_
void void_std____new_allocator_int___construct_int__int_(struct std::__new_allocator<int>* v10, int* v11, int* v12) {
bb13:
  struct std::__new_allocator<int>* this14;
  int* __p15;
  int* __args16;
  this14 = v10;
  __p15 = v11;
  __args16 = v12;
  struct std::__new_allocator<int>* t17 = this14;
  unsigned long long c18 = 4;
  int* t19 = __p15;
  void* cast20 = (void*)t19;
  int* cast21 = (int*)cast20;
  int* t22 = __args16;
  int t23 = *t22;
  *cast21 = t23;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std::allocator<int>* v24, int* v25, int* v26) {
bb27:
  struct std::allocator<int>* __a28;
  int* __p29;
  int* __args30;
  __a28 = v24;
  __p29 = v25;
  __args30 = v26;
  struct std::allocator<int>* t31 = __a28;
  struct std::__new_allocator<int>* base32 = (struct std::__new_allocator<int>*)((char *)t31 + 0);
  int* t33 = __p29;
  int* t34 = __args30;
  void_std____new_allocator_int___construct_int__int_(base32, t33, t34);
  return;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long long std____new_allocator_int____M_max_size___const(struct std::__new_allocator<int>* v35) {
bb36:
  struct std::__new_allocator<int>* this37;
  unsigned long long __retval38;
  this37 = v35;
  struct std::__new_allocator<int>* t39 = this37;
  long long c40 = 9223372036854775807;
  unsigned long long cast41 = (unsigned long long)c40;
  unsigned long long c42 = 4;
  unsigned long long b43 = cast41 / c42;
  __retval38 = b43;
  unsigned long long t44 = __retval38;
  return t44;
}

// function: _ZNKSt15__new_allocatorIiE8max_sizeEv
unsigned long long std____new_allocator_int___max_size___const(struct std::__new_allocator<int>* v45) {
bb46:
  struct std::__new_allocator<int>* this47;
  unsigned long long __retval48;
  this47 = v45;
  struct std::__new_allocator<int>* t49 = this47;
  unsigned long long r50 = std____new_allocator_int____M_max_size___const(t49);
  __retval48 = r50;
  unsigned long long t51 = __retval48;
  return t51;
}

// function: _ZNSt16allocator_traitsISaIiEE8max_sizeERKS0_
unsigned long long std__allocator_traits_std__allocator_int_____max_size(struct std::allocator<int>* v52) {
bb53:
  struct std::allocator<int>* __a54;
  unsigned long long __retval55;
  __a54 = v52;
  struct std::allocator<int>* t56 = __a54;
  struct std::__new_allocator<int>* base57 = (struct std::__new_allocator<int>*)((char *)t56 + 0);
  unsigned long long r58 = std____new_allocator_int___max_size___const(base57);
  __retval55 = r58;
  unsigned long long t59 = __retval55;
  return t59;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long long* unsigned_long_const__std__min_unsigned_long_(unsigned long long* v60, unsigned long long* v61) {
bb62:
  unsigned long long* __a67;
  unsigned long long* __b68;
  unsigned long long* __retval69;
  __a67 = v60;
  __b68 = v61;
  goto bb63;
bb63:
  unsigned long long* t70 = __b68;
  unsigned long long t71 = *t70;
  unsigned long long* t72 = __a67;
  unsigned long long t73 = *t72;
  _Bool c74 = (t71 < t73) ? 1 : 0;
  if (c74) goto bb64; else goto bb65;
bb64:
  unsigned long long* t75 = __b68;
  __retval69 = t75;
  unsigned long long* t76 = __retval69;
  return t76;
bb65:
  goto bb66;
bb66:
  unsigned long long* t77 = __a67;
  __retval69 = t77;
  unsigned long long* t78 = __retval69;
  return t78;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long long std__vector_int__std__allocator_int______S_max_size(struct std::allocator<int>* v79) {
bb80:
  struct std::allocator<int>* __a81;
  unsigned long long __retval82;
  unsigned long long __diffmax83;
  unsigned long long __allocmax84;
  __a81 = v79;
  unsigned long long c85 = 2305843009213693951;
  __diffmax83 = c85;
  struct std::allocator<int>* t86 = __a81;
  unsigned long long r87 = std__allocator_traits_std__allocator_int_____max_size(t86);
  __allocmax84 = r87;
  unsigned long long* r88 = unsigned_long_const__std__min_unsigned_long_(&__diffmax83, &__allocmax84);
  unsigned long long t89 = *r88;
  __retval82 = t89;
  unsigned long long t90 = __retval82;
  return t90;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std::allocator<int>* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std::_Vector_base<int, std::allocator<int>>* v91) {
bb92:
  struct std::_Vector_base<int, std::allocator<int>>* this93;
  struct std::allocator<int>* __retval94;
  this93 = v91;
  struct std::_Vector_base<int, std::allocator<int>>* t95 = this93;
  struct std::allocator<int>* base96 = (struct std::allocator<int>*)((char *)t95->_M_impl + 0);
  __retval94 = base96;
  struct std::allocator<int>* t97 = __retval94;
  return t97;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long long std__vector_int__std__allocator_int_____max_size___const(struct std::vector<int>* v98) {
bb99:
  struct std::vector<int>* this100;
  unsigned long long __retval101;
  this100 = v98;
  struct std::vector<int>* t102 = this100;
  struct std::_Vector_base<int, std::allocator<int>>* base103 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t102 + 0);
  struct std::allocator<int>* r104 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base103);
  unsigned long long r105 = std__vector_int__std__allocator_int______S_max_size(r104);
  __retval101 = r105;
  unsigned long long t106 = __retval101;
  return t106;
}

// function: _ZSt20__throw_length_errorPKc
void std____throw_length_error(char*);

// function: _ZSt3maxImERKT_S2_S2_
unsigned long long* unsigned_long_const__std__max_unsigned_long_(unsigned long long* v107, unsigned long long* v108) {
bb109:
  unsigned long long* __a114;
  unsigned long long* __b115;
  unsigned long long* __retval116;
  __a114 = v107;
  __b115 = v108;
  goto bb110;
bb110:
  unsigned long long* t117 = __a114;
  unsigned long long t118 = *t117;
  unsigned long long* t119 = __b115;
  unsigned long long t120 = *t119;
  _Bool c121 = (t118 < t120) ? 1 : 0;
  if (c121) goto bb111; else goto bb112;
bb111:
  unsigned long long* t122 = __b115;
  __retval116 = t122;
  unsigned long long* t123 = __retval116;
  return t123;
bb112:
  goto bb113;
bb113:
  unsigned long long* t124 = __a114;
  __retval116 = t124;
  unsigned long long* t125 = __retval116;
  return t125;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std::vector<int>* v126, unsigned long long v127, char* v128) {
  unsigned long long v129;
  _Bool v130;
  _Bool v131;
  unsigned long long v132;
bb133:
  unsigned long long ref.tmp0149;
  struct std::vector<int>* this150;
  unsigned long long __n151;
  char* __s152;
  unsigned long long __retval153;
  unsigned long long __len154;
  this150 = v126;
  __n151 = v127;
  __s152 = v128;
  struct std::vector<int>* t155 = this150;
  goto bb134;
bb134:
  unsigned long long r156 = std__vector_int__std__allocator_int_____max_size___const(t155);
  unsigned long long r157 = std__vector_int__std__allocator_int_____size___const(t155);
  unsigned long long b158 = r156 - r157;
  unsigned long long t159 = __n151;
  _Bool c160 = (b158 < t159) ? 1 : 0;
  if (c160) goto bb135; else goto bb136;
bb135:
  char* t161 = __s152;
  std____throw_length_error(t161);
  goto bb136;
bb136:
  goto bb137;
bb137:
  goto bb138;
bb138:
  unsigned long long r162 = std__vector_int__std__allocator_int_____size___const(t155);
  unsigned long long r163 = std__vector_int__std__allocator_int_____size___const(t155);
  ref.tmp0149 = r163;
  unsigned long long* r164 = unsigned_long_const__std__max_unsigned_long_(&ref.tmp0149, &__n151);
  unsigned long long t165 = *r164;
  unsigned long long b166 = r162 + t165;
  v129 = b166;
  goto bb139;
bb139:
  __len154 = v129;
  unsigned long long t167 = __len154;
  unsigned long long r168 = std__vector_int__std__allocator_int_____size___const(t155);
  _Bool c169 = (t167 < r168) ? 1 : 0;
  if (c169) goto bb140; else goto bb141;
bb140:
  _Bool c170 = 1;
  v131 = c170;
  goto bb145;
bb141:
  unsigned long long t171 = __len154;
  unsigned long long r172 = std__vector_int__std__allocator_int_____max_size___const(t155);
  _Bool c173 = (t171 > r172) ? 1 : 0;
  if (c173) goto bb142; else goto bb143;
bb142:
  _Bool c174 = 1;
  v130 = c174;
  goto bb144;
bb143:
  _Bool c175 = 0;
  v130 = c175;
  goto bb144;
bb144:
  v131 = v130;
  goto bb145;
bb145:
  if (v131) goto bb146; else goto bb147;
bb146:
  unsigned long long r176 = std__vector_int__std__allocator_int_____max_size___const(t155);
  v132 = r176;
  goto bb148;
bb147:
  unsigned long long t177 = __len154;
  v132 = t177;
  goto bb148;
bb148:
  __retval153 = v132;
  unsigned long long t178 = __retval153;
  return t178;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* v179, struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* v180) {
bb181:
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* __lhs182;
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* __rhs183;
  long long __retval184;
  __lhs182 = v179;
  __rhs183 = v180;
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* t185 = __lhs182;
  int** r186 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t185);
  int* t187 = *r186;
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* t188 = __rhs183;
  int** r189 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t188);
  int* t190 = *r189;
  long long diff191 = t187 - t190;
  __retval184 = diff191;
  long long t192 = __retval184;
  return t192;
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
int* std____new_allocator_int___allocate(struct std::__new_allocator<int>* v193, unsigned long long v194, void* v195) {
bb196:
  unsigned long long __al209;
  struct std::__new_allocator<int>* this210;
  unsigned long long __n211;
