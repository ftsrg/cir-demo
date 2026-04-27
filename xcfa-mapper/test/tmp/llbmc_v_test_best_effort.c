// Struct definitions (auto-parsed)
struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> { int* _M_current; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl { unsigned char __placeholder; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data { int* _M_finish; int* _M_start; int* _M_end_of_storage; };
struct std::__new_allocator<int> { unsigned char __placeholder; };
struct std::allocator<int> { unsigned char __placeholder; };
struct std::vector<int> { unsigned char __placeholder; };
struct std::vector<int>::_Guard_alloc { int* _M_storage; unsigned long long _M_len; struct std::_Vector_base<int, std::allocator<int>>* _M_vect; };
struct std::_Vector_base<int, std::allocator<int>> { struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl _M_impl; };

char _str_3[26];
char _str_4[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char _str_5[92];
char _str_6[19] = "__n < this->size()";
char _str[10] = "v[i] == i";
char _str_1[91] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/llbmc_v-test/main.cpp";
char _str_2[11] = "int main()";
// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector(struct std::vector<int>* v0) {
bb1:
  struct std::vector<int>* this2;
  this2 = v0;
  struct std::vector<int>* t3 = this2;
  // %v4  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  std___Vector_base_int__std__allocator_int______Vector_base(v4);
  return;
}

// function: _ZNSt15__new_allocatorIiE9constructIiJRKiEEEvPT_DpOT0_
void void_std____new_allocator_int___construct_int__int_const__(struct std::__new_allocator<int>* v5, int* v6, int* v7) {
bb8:
  struct std::__new_allocator<int>* this9;
  int* __p10;
  int* __args11;
  this9 = v5;
  __p10 = v6;
  __args11 = v7;
  struct std::__new_allocator<int>* t12 = this9;
  unsigned long long c13 = 4;
  int* t14 = __p10;
  void* cast15 = (void*)t14;
  int* cast16 = (int*)cast15;
  int* t17 = __args11;
  int t18 = *t17;
  *cast16 = t18;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std::allocator<int>* v19, int* v20, int* v21) {
bb22:
  struct std::allocator<int>* __a23;
  int* __p24;
  int* __args25;
  __a23 = v19;
  __p24 = v20;
  __args25 = v21;
  struct std::allocator<int>* t26 = __a23;
  // %v27  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  int* t28 = __p24;
  int* t29 = __args25;
  void_std____new_allocator_int___construct_int__int_const__(v27, t28, t29);
  return;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long long std____new_allocator_int____M_max_size___const(struct std::__new_allocator<int>* v30) {
bb31:
  struct std::__new_allocator<int>* this32;
  unsigned long long __retval33;
  this32 = v30;
  struct std::__new_allocator<int>* t34 = this32;
  long long c35 = 9223372036854775807;
  unsigned long long cast36 = (unsigned long long)c35;
  unsigned long long c37 = 4;
  unsigned long long b38 = cast36 / c37;
  __retval33 = b38;
  unsigned long long t39 = __retval33;
  return t39;
}

// function: _ZNKSt15__new_allocatorIiE8max_sizeEv
unsigned long long std____new_allocator_int___max_size___const(struct std::__new_allocator<int>* v40) {
bb41:
  struct std::__new_allocator<int>* this42;
  unsigned long long __retval43;
  this42 = v40;
  struct std::__new_allocator<int>* t44 = this42;
  unsigned long long r45 = std____new_allocator_int____M_max_size___const(t44);
  __retval43 = r45;
  unsigned long long t46 = __retval43;
  return t46;
}

// function: _ZNSt16allocator_traitsISaIiEE8max_sizeERKS0_
unsigned long long std__allocator_traits_std__allocator_int_____max_size(struct std::allocator<int>* v47) {
bb48:
  struct std::allocator<int>* __a49;
  unsigned long long __retval50;
  __a49 = v47;
  struct std::allocator<int>* t51 = __a49;
  // %v52  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  unsigned long long r53 = std____new_allocator_int___max_size___const(v52);
  __retval50 = r53;
  unsigned long long t54 = __retval50;
  return t54;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long long* unsigned_long_const__std__min_unsigned_long_(unsigned long long* v55, unsigned long long* v56) {
bb57:
  unsigned long long* __a62;
  unsigned long long* __b63;
  unsigned long long* __retval64;
  __a62 = v55;
  __b63 = v56;
  goto bb58;
bb58:
  unsigned long long* t65 = __b63;
  unsigned long long t66 = *t65;
  unsigned long long* t67 = __a62;
  unsigned long long t68 = *t67;
  _Bool c69 = (t66 < t68) ? 1 : 0;
  if (c69) goto bb59; else goto bb60;
bb59:
  unsigned long long* t70 = __b63;
  __retval64 = t70;
  unsigned long long* t71 = __retval64;
  return t71;
bb60:
  goto bb61;
bb61:
  unsigned long long* t72 = __a62;
  __retval64 = t72;
  unsigned long long* t73 = __retval64;
  return t73;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long long std__vector_int__std__allocator_int______S_max_size(struct std::allocator<int>* v74) {
bb75:
  struct std::allocator<int>* __a76;
  unsigned long long __retval77;
  unsigned long long __diffmax78;
  unsigned long long __allocmax79;
  __a76 = v74;
  unsigned long long c80 = 2305843009213693951;
  __diffmax78 = c80;
  struct std::allocator<int>* t81 = __a76;
  unsigned long long r82 = std__allocator_traits_std__allocator_int_____max_size(t81);
  __allocmax79 = r82;
  unsigned long long* r83 = unsigned_long_const__std__min_unsigned_long_(&__diffmax78, &__allocmax79);
  unsigned long long t84 = *r83;
  __retval77 = t84;
  unsigned long long t85 = __retval77;
  return t85;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std::allocator<int>* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std::_Vector_base<int, std::allocator<int>>* v86) {
bb87:
  struct std::_Vector_base<int, std::allocator<int>>* this88;
  struct std::allocator<int>* __retval89;
  this88 = v86;
  struct std::_Vector_base<int, std::allocator<int>>* t90 = this88;
  // %v91  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  __retval89 = v91;
  struct std::allocator<int>* t92 = __retval89;
  return t92;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long long std__vector_int__std__allocator_int_____max_size___const(struct std::vector<int>* v93) {
bb94:
  struct std::vector<int>* this95;
  unsigned long long __retval96;
  this95 = v93;
  struct std::vector<int>* t97 = this95;
  // %v98  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  struct std::allocator<int>* r99 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(v98);
  unsigned long long r100 = std__vector_int__std__allocator_int______S_max_size(r99);
  __retval96 = r100;
  unsigned long long t101 = __retval96;
  return t101;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long long std__vector_int__std__allocator_int_____size___const(struct std::vector<int>* v102) {
bb103:
  struct std::vector<int>* this108;
  unsigned long long __retval109;
  long long __dif110;
  this108 = v102;
  struct std::vector<int>* t111 = this108;
  // %v112  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  // %v113  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  int* t114 = *v113->_M_finish;
  // %v115  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  // %v116  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  int* t117 = *v116->_M_start;
  long long diff118 = t114 - t117;
  __dif110 = diff118;
  goto bb104;
bb104:
  long long t119 = __dif110;
  int c120 = 0;
  long long cast121 = (long long)c120;
  _Bool c122 = (t119 < cast121) ? 1 : 0;
  if (c122) goto bb105; else goto bb106;
bb105:
bb106:
  goto bb107;
bb107:
  long long t123 = __dif110;
  unsigned long long cast124 = (unsigned long long)t123;
  __retval109 = cast124;
  unsigned long long t125 = __retval109;
  return t125;
}

// function: _ZSt20__throw_length_errorPKc
void std____throw_length_error(char*);

// function: _ZSt3maxImERKT_S2_S2_
unsigned long long* unsigned_long_const__std__max_unsigned_long_(unsigned long long* v126, unsigned long long* v127) {
bb128:
  unsigned long long* __a133;
  unsigned long long* __b134;
  unsigned long long* __retval135;
  __a133 = v126;
  __b134 = v127;
  goto bb129;
bb129:
  unsigned long long* t136 = __a133;
  unsigned long long t137 = *t136;
  unsigned long long* t138 = __b134;
  unsigned long long t139 = *t138;
  _Bool c140 = (t137 < t139) ? 1 : 0;
  if (c140) goto bb130; else goto bb131;
bb130:
  unsigned long long* t141 = __b134;
  __retval135 = t141;
  unsigned long long* t142 = __retval135;
  return t142;
bb131:
  goto bb132;
bb132:
  unsigned long long* t143 = __a133;
  __retval135 = t143;
  unsigned long long* t144 = __retval135;
  return t144;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std::vector<int>* v145, unsigned long long v146, char* v147) {
  unsigned long long v148;
  _Bool v149;
  _Bool v150;
  unsigned long long v151;
bb152:
  unsigned long long ref.tmp0168;
  struct std::vector<int>* this169;
  unsigned long long __n170;
  char* __s171;
  unsigned long long __retval172;
  unsigned long long __len173;
  this169 = v145;
  __n170 = v146;
  __s171 = v147;
  struct std::vector<int>* t174 = this169;
  goto bb153;
bb153:
  unsigned long long r175 = std__vector_int__std__allocator_int_____max_size___const(t174);
  unsigned long long r176 = std__vector_int__std__allocator_int_____size___const(t174);
  unsigned long long b177 = r175 - r176;
  unsigned long long t178 = __n170;
  _Bool c179 = (b177 < t178) ? 1 : 0;
  if (c179) goto bb154; else goto bb155;
bb154:
  char* t180 = __s171;
  std____throw_length_error(t180);
  goto bb155;
bb155:
  goto bb156;
bb156:
  goto bb157;
bb157:
  unsigned long long r181 = std__vector_int__std__allocator_int_____size___const(t174);
  unsigned long long r182 = std__vector_int__std__allocator_int_____size___const(t174);
  ref.tmp0168 = r182;
  unsigned long long* r183 = unsigned_long_const__std__max_unsigned_long_(&ref.tmp0168, &__n170);
  unsigned long long t184 = *r183;
  unsigned long long b185 = r181 + t184;
  v148 = b185;
  goto bb158;
bb158:
  __len173 = v148;
  unsigned long long t186 = __len173;
  unsigned long long r187 = std__vector_int__std__allocator_int_____size___const(t174);
  _Bool c188 = (t186 < r187) ? 1 : 0;
  if (c188) goto bb159; else goto bb160;
bb159:
  _Bool c189 = 1;
  v150 = c189;
  goto bb164;
bb160:
  unsigned long long t190 = __len173;
  unsigned long long r191 = std__vector_int__std__allocator_int_____max_size___const(t174);
  _Bool c192 = (t190 > r191) ? 1 : 0;
  if (c192) goto bb161; else goto bb162;
bb161:
  _Bool c193 = 1;
  v149 = c193;
  goto bb163;
bb162:
  _Bool c194 = 0;
  v149 = c194;
  goto bb163;
bb163:
  v150 = v149;
  goto bb164;
bb164:
  if (v150) goto bb165; else goto bb166;
bb165:
  unsigned long long r195 = std__vector_int__std__allocator_int_____max_size___const(t174);
  v151 = r195;
  goto bb167;
bb166:
  unsigned long long t196 = __len173;
  v151 = t196;
  goto bb167;
bb167:
  __retval172 = v151;
  unsigned long long t197 = __retval172;
  return t197;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* v198) {
bb199:
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* this200;
  int** __retval201;
  this200 = v198;
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* t202 = this200;
  __retval201 = t202->_M_current;
  int** t203 = __retval201;
  return t203;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* v204, struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* v205) {
bb206:
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* __lhs207;
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* __rhs208;
  long long __retval209;
  __lhs207 = v204;
  __rhs208 = v205;
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* t210 = __lhs207;
  int** r211 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t210);
  int* t212 = *r211;
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* t213 = __rhs208;
  int** r214 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t213);
  int* t215 = *r214;
  long long diff216 = t212 - t215;
  __retval209 = diff216;
  long long t217 = __retval209;
  return t217;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* v218, int** v219) {
bb220:
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* this221;
  int** __i222;
  this221 = v218;
  __i222 = v219;
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>>* t223 = this221;
  int** t224 = __i222;
  int* t225 = *t224;
  *t223->_M_current = t225;
  return;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> std__vector_int__std__allocator_int_____end(struct std::vector<int>* v226) {
bb227:
  struct std::vector<int>* this228;
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> __retval229;
  this228 = v226;
  struct std::vector<int>* t230 = this228;
  // %v231  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  // %v232  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval229, v232->_M_finish);
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> t233 = __retval229;
  return t233;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> std__vector_int__std__allocator_int_____begin(struct std::vector<int>* v234) {
bb235:
  struct std::vector<int>* this236;
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> __retval237;
  this236 = v234;
  struct std::vector<int>* t238 = this236;
  // %v239  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  // %v240  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval237, v240->_M_start);
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> t241 = __retval237;
  return t241;
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
int* std____new_allocator_int___allocate(struct std::__new_allocator<int>* v242, unsigned long long v243, void* v244) {
bb245:
  unsigned long long __al258;
  struct std::__new_allocator<int>* this259;
  unsigned long long __n260;
  // Alloca: unable to determine a precise name for allocation
  void* a261262;
  int* __retval263;
  this259 = v242;
  __n260 = v243;
  a261262 = v244;
  struct std::__new_allocator<int>* t264 = this259;
  goto bb246;
bb246:
  unsigned long long t265 = __n260;
  unsigned long long r266 = std____new_allocator_int____M_max_size___const(t264);
  _Bool c267 = (t265 > r266) ? 1 : 0;
  if (c267) goto bb247; else goto bb252;
bb247:
  goto bb248;
bb248:
  unsigned long long t268 = __n260;
  int c269 = 1;
  int u270 = -c269;
  unsigned long long cast271 = (unsigned long long)u270;
  unsigned long long c272 = 4;
  unsigned long long b273 = cast271 / c272;
  _Bool c274 = (t268 > b273) ? 1 : 0;
  if (c274) goto bb249; else goto bb250;
bb249:
  std____throw_bad_array_new_length();
  goto bb250;
bb250:
  goto bb251;
bb251:
  std____throw_bad_alloc();
  goto bb252;
bb252:
  goto bb253;
bb253:
  goto bb254;
bb254:
  unsigned long long c275 = 4;
  unsigned long long c276 = 16;
  _Bool c277 = (c275 > c276) ? 1 : 0;
  if (c277) goto bb255; else goto bb256;
bb255:
  unsigned long long c278 = 4;
  __al258 = c278;
  unsigned long long t279 = __n260;
  unsigned long long c280 = 4;
  unsigned long long b281 = t279 * c280;
  unsigned long long t282 = __al258;
  void* r283 = _ZnwmSt11align_val_t(b281, t282);
  int* cast284 = (int*)r283;
  __retval263 = cast284;
  int* t285 = __retval263;
  return t285;
bb256:
  goto bb257;
bb257:
  unsigned long long t286 = __n260;
  unsigned long long c287 = 4;
  unsigned long long b288 = t286 * c287;
  void* r289 = _Znwm(b288);
  int* cast290 = (int*)r289;
  __retval263 = cast290;
  int* t291 = __retval263;
  return t291;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std::allocator<int>* v292, unsigned long long v293) {
bb294:
  struct std::allocator<int>* __a295;
  unsigned long long __n296;
  int* __retval297;
  __a295 = v292;
  __n296 = v293;
  struct std::allocator<int>* t298 = __a295;
  // %v299  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  unsigned long long t300 = __n296;
  void* c301 = NULL;
  int* r302 = std____new_allocator_int___allocate(v299, t300, c301);
  __retval297 = r302;
  int* t303 = __retval297;
  return t303;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std::_Vector_base<int, std::allocator<int>>* v304, unsigned long long v305) {
  int* v306;
bb307:
  struct std::_Vector_base<int, std::allocator<int>>* this311;
  unsigned long long __n312;
  int* __retval313;
  this311 = v304;
  __n312 = v305;
  struct std::_Vector_base<int, std::allocator<int>>* t314 = this311;
  unsigned long long t315 = __n312;
  int c316 = 0;
  unsigned long long cast317 = (unsigned long long)c316;
  _Bool c318 = (t315 != cast317) ? 1 : 0;
  if (c318) goto bb308; else goto bb309;
bb308:
  // %v319  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  unsigned long long t320 = __n312;
  int* r321 = std__allocator_traits_std__allocator_int_____allocate(v319, t320);
  v306 = r321;
  goto bb310;
bb309:
  int* c322 = NULL;
  v306 = c322;
  goto bb310;
bb310:
  __retval313 = v306;
  int* t323 = __retval313;
  return t323;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std::vector<int>::_Guard_alloc* v324, int* v325, unsigned long long v326, struct std::_Vector_base<int, std::allocator<int>>* v327) {
bb328:
  struct std::vector<int>::_Guard_alloc* this329;
  int* __s330;
  unsigned long long __l331;
  struct std::_Vector_base<int, std::allocator<int>>* __vect332;
  this329 = v324;
  __s330 = v325;
  __l331 = v326;
  __vect332 = v327;
  struct std::vector<int>::_Guard_alloc* t333 = this329;
  int* t334 = __s330;
  *t333->_M_storage = t334;
  unsigned long long t335 = __l331;
  *t333->_M_len = t335;
  struct std::_Vector_base<int, std::allocator<int>>* t336 = __vect332;
  *t333->_M_vect = t336;
  return;
}

// function: _ZSt12__to_addressIiEPT_S1_
int* int__std____to_address_int_(int* v337) {
bb338:
  int* __ptr339;
  int* __retval340;
  __ptr339 = v337;
  int* t341 = __ptr339;
  __retval340 = t341;
  int* t342 = __retval340;
  return t342;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v343, int* v344, int* v345, struct std::allocator<int>* v346) {
bb347:
  int* __first352;
  int* __last353;
  int* __result354;
  struct std::allocator<int>* __alloc355;
  int* __retval356;
  long long __count357;
  __first352 = v343;
  __last353 = v344;
  __result354 = v345;
  __alloc355 = v346;
  int* t358 = __last353;
  int* t359 = __first352;
  long long diff360 = t358 - t359;
  __count357 = diff360;
  goto bb348;
bb348:
  long long t361 = __count357;
  int c362 = 0;
  long long cast363 = (long long)c362;
  _Bool c364 = (t361 > cast363) ? 1 : 0;
  if (c364) goto bb349; else goto bb350;
bb349:
  int* t365 = __result354;
  void* cast366 = (void*)t365;
  int* t367 = __first352;
  void* cast368 = (void*)t367;
  long long t369 = __count357;
  unsigned long long cast370 = (unsigned long long)t369;
  unsigned long long c371 = 4;
  unsigned long long b372 = cast370 * c371;
  goto bb350;
bb350:
  goto bb351;
bb351:
  int* t373 = __result354;
  long long t374 = __count357;
  int* ptr375 = t373 + t374;
  __retval356 = ptr375;
  int* t376 = __retval356;
  return t376;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v377) {
bb378:
  int* __it379;
  int* __retval380;
  __it379 = v377;
  int* t381 = __it379;
  __retval380 = t381;
  int* t382 = __retval380;
  return t382;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v383, int* v384, int* v385, struct std::allocator<int>* v386) {
bb387:
  int* __first388;
  int* __last389;
  int* __result390;
  struct std::allocator<int>* __alloc391;
  int* __retval392;
  __first388 = v383;
  __last389 = v384;
  __result390 = v385;
  __alloc391 = v386;
  int* t393 = __first388;
  int* r394 = int__std____niter_base_int__(t393);
  int* t395 = __last389;
  int* r396 = int__std____niter_base_int__(t395);
  int* t397 = __result390;
  int* r398 = int__std____niter_base_int__(t397);
  struct std::allocator<int>* t399 = __alloc391;
  int* r400 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r394, r396, r398, t399);
  __retval392 = r400;
  int* t401 = __retval392;
  return t401;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v402, int* v403, int* v404, struct std::allocator<int>* v405) {
bb406:
  int* __first407;
  int* __last408;
  int* __result409;
  struct std::allocator<int>* __alloc410;
  int* __retval411;
  __first407 = v402;
  __last408 = v403;
  __result409 = v404;
  __alloc410 = v405;
  int* t412 = __first407;
  int* t413 = __last408;
  int* t414 = __result409;
  struct std::allocator<int>* t415 = __alloc410;
  int* r416 = int__std____relocate_a_int___int___std__allocator_int___(t412, t413, t414, t415);
  __retval411 = r416;
  int* t417 = __retval411;
  return t417;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std::vector<int>::_Guard_alloc* v418) {
bb419:
  struct std::vector<int>::_Guard_alloc* this424;
  this424 = v418;
  struct std::vector<int>::_Guard_alloc* t425 = this424;
  goto bb420;
bb420:
  int* t426 = *t425->_M_storage;
  _Bool cast427 = (_Bool)t426;
  if (cast427) goto bb421; else goto bb422;
bb421:
  struct std::_Vector_base<int, std::allocator<int>>* t428 = *t425->_M_vect;
  int* t429 = *t425->_M_storage;
  unsigned long long t430 = *t425->_M_len;
  std___Vector_base_int__std__allocator_int______M_deallocate(t428, t429, t430);
  goto bb422;
bb422:
  goto bb423;
bb423:
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_realloc_appendIJRKiEEEvDpOT_
void void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(struct std::vector<int>* v431, int* v432) {
  unsigned long long v433;
bb434:
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> ref.tmp0445;
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> ref.tmp1446;
  struct std::vector<int>::_Guard_alloc __guard447;
  struct std::vector<int>* this448;
  int* __args449;
  unsigned long long __len450;
  int* __old_start451;
  int* __old_finish452;
  unsigned long long __elems453;
  int* __new_start454;
  int* __new_finish455;
  this448 = v431;
  __args449 = v432;
  struct std::vector<int>* t456 = this448;
  unsigned int c457 = 1;
  unsigned long long cast458 = (unsigned long long)c457;
  char* cast459 = (char*)_str_3;
  unsigned long long r460 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t456, cast458, cast459);
  __len450 = r460;
  goto bb435;
bb435:
  unsigned long long t461 = __len450;
  int c462 = 0;
  unsigned long long cast463 = (unsigned long long)c462;
  _Bool c464 = (t461 <= cast463) ? 1 : 0;
  if (c464) goto bb436; else goto bb437;
bb436:
bb437:
  goto bb438;
bb438:
  // %v465  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  // %v466  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  int* t467 = *v466->_M_start;
  __old_start451 = t467;
  // %v468  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  // %v469  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  int* t470 = *v469->_M_finish;
  __old_finish452 = t470;
  goto bb439;
bb439:
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> r471 = std__vector_int__std__allocator_int_____end(t456);
  ref.tmp0445 = r471;
  struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> r472 = std__vector_int__std__allocator_int_____begin(t456);
  ref.tmp1446 = r472;
  long long r473 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref.tmp0445, &ref.tmp1446);
  unsigned long long cast474 = (unsigned long long)r473;
  v433 = cast474;
  goto bb440;
bb440:
  __elems453 = v433;
  // %v475  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  unsigned long long t476 = __len450;
  int* r477 = std___Vector_base_int__std__allocator_int______M_allocate(v475, t476);
  __new_start454 = r477;
  int* t478 = __new_start454;
  __new_finish455 = t478;
  goto bb441;
bb441:
  int* t479 = __new_start454;
  unsigned long long t480 = __len450;
  // %v481  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard447, t479, t480, v481);
  // %v482  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  // %v483  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  int* t484 = __new_start454;
  unsigned long long t485 = __elems453;
  int* ptr486 = t484 + t485;
  int* r487 = int__std____to_address_int_(ptr486);
  int* t488 = __args449;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(v483, r487, t488);
  goto bb442;
bb442:
  int* t489 = __old_start451;
  int* t490 = __old_finish452;
  int* t491 = __new_start454;
  // %v492  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  struct std::allocator<int>* r493 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(v492);
  int* r494 = std__vector_int__std__allocator_int______S_relocate(t489, t490, t491, r493);
  __new_finish455 = r494;
  int* t495 = __new_finish455;
  int c496 = 1;
  int* ptr497 = t495 + c496;
  __new_finish455 = ptr497;
  goto bb443;
bb443:
  int* t498 = __old_start451;
  __guard447._M_storage = t498;
  // %v499  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  // %v500  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  int* t501 = *v500->_M_end_of_storage;
  int* t502 = __old_start451;
  long long diff503 = t501 - t502;
  unsigned long long cast504 = (unsigned long long)diff503;
  __guard447._M_len = cast504;
  std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard447);
  goto bb444;
bb444:
  int* t505 = __new_start454;
  // %v506  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  // %v507  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  *v507->_M_start = t505;
  int* t508 = __new_finish455;
  // %v509  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  // %v510  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  *v510->_M_finish = t508;
  int* t511 = __new_start454;
  unsigned long long t512 = __len450;
  int* ptr513 = t511 + t512;
  // %v514  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  // %v515  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  *v515->_M_end_of_storage = ptr513;
  return;
}

// function: _ZNSt6vectorIiSaIiEE9push_backERKi
void std__vector_int__std__allocator_int_____push_back(struct std::vector<int>* v516, int* v517) {
bb518:
  struct std::vector<int>* this524;
  int* __x525;
  this524 = v516;
  __x525 = v517;
  struct std::vector<int>* t526 = this524;
  goto bb519;
bb519:
  // %v527  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  // %v528  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  int* t529 = *v528->_M_finish;
  // %v530  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  // %v531  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  int* t532 = *v531->_M_end_of_storage;
  _Bool c533 = (t529 != t532) ? 1 : 0;
  if (c533) goto bb520; else goto bb521;
bb520:
  // %v534  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  // %v535  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  // %v536  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  // %v537  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  int* t538 = *v537->_M_finish;
  int* t539 = __x525;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(v535, t538, t539);
  // %v540  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  // %v541  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  int* t542 = *v541->_M_finish;
  int c543 = 1;
  int* ptr544 = t542 + c543;
  *v541->_M_finish = ptr544;
  goto bb522;
bb521:
  int* t545 = __x525;
  void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(t526, t545);
  goto bb522;
bb522:
  goto bb523;
bb523:
  return;
}

// function: _ZSt21__glibcxx_assert_failPKciS0_S0_
void std____glibcxx_assert_fail(char*, int, char*, char*);

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std::vector<int>* v546, unsigned long long v547) {
bb548:
  struct std::vector<int>* this560;
  unsigned long long __n561;
  int* __retval562;
  this560 = v546;
  __n561 = v547;
  struct std::vector<int>* t563 = this560;
  goto bb549;
bb549:
  goto bb551;
bb550:
  _Bool c564 = 0;
  if (c564) goto bb551; else goto bb558;
bb551:
  goto bb552;
bb552:
  goto bb553;
bb553:
  unsigned long long t565 = __n561;
  unsigned long long r566 = std__vector_int__std__allocator_int_____size___const(t563);
  _Bool c567 = (t565 < r566) ? 1 : 0;
  _Bool u568 = !c567;
  if (u568) goto bb554; else goto bb555;
bb554:
  char* cast569 = (char*)_str_4;
  int c570 = 1263;
  char* cast571 = (char*)_str_5;
  char* cast572 = (char*)_str_6;
  std____glibcxx_assert_fail(cast569, c570, cast571, cast572);
  goto bb555;
bb555:
  goto bb556;
bb556:
  goto bb557;
bb557:
  goto bb550;
bb558:
  goto bb559;
bb559:
  // %v573  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  // %v574  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  int* t575 = *v574->_M_start;
  unsigned long long t576 = __n561;
  int* ptr577 = t575 + t576;
  __retval562 = ptr577;
  int* t578 = __retval562;
  return t578;
}

// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std::vector<int>* v579) {
  void* v580;
  unsigned int v581;
bb582:
  struct std::vector<int>* this588;
  this588 = v579;
  struct std::vector<int>* t589 = this588;
  // %v590  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  // %v591  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  int* t592 = *v591->_M_start;
  // %v593  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  // %v594  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  int* t595 = *v594->_M_finish;
  // %v596  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  struct std::allocator<int>* r597 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(v596);
  goto bb583;
bb583:
  // attrs:
  //   callee = @_ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
  //   calling_conv = 1 : i32
  //   extra_attrs = #cir<extra({})>
  //   operandSegmentSizes = array<i32: 0, 0, 3>
  //   side_effect = 0 : i32
bb584:
  goto bb587;
bb585:
  // %v598  (produced by: cir.eh.inflight_exception)
  // %v599  (produced by: cir.eh.inflight_exception)
  // attrs:
  //   cleanup = unit
  // %v600  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  std___Vector_base_int__std__allocator_int_______Vector_base(v600);
  v580 = v598;
  v581 = v599;
  goto bb586;
bb586:
bb587:
  // %v601  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  std___Vector_base_int__std__allocator_int_______Vector_base(v601);
  return;
}

// function: main
int main() {
  void* v602;
  unsigned int v603;
bb604:
  int i629;
  int i630;
  int __retval631;
  struct std::vector<int> v632;
  std__vector_int__std__allocator_int_____vector(&v632);
  goto bb605;
bb605:
  int c633 = 0;
  i629 = c633;
  goto bb606;
bb606:
  int t634 = i629;
  int c635 = 10;
  _Bool c636 = (t634 < c635) ? 1 : 0;
  if (c636) goto bb607; else goto bb616;
bb607:
  goto bb608;
bb608:
  goto bb609;
bb609:
  // attrs:
  //   callee = @_ZNSt6vectorIiSaIiEE9push_backERKi
  //   calling_conv = 1 : i32
  //   extra_attrs = #cir<extra({})>
  //   operandSegmentSizes = array<i32: 0, 0, 2>
  //   side_effect = 0 : i32
bb610:
  goto bb613;
bb611:
  // %v637  (produced by: cir.eh.inflight_exception)
  // %v638  (produced by: cir.eh.inflight_exception)
  // attrs:
  //   cleanup = unit
  std__vector_int__std__allocator_int______vector(&v632);
  v602 = v637;
  v603 = v638;
  goto bb612;
bb612:
bb613:
  goto bb614;
bb614:
  goto bb615;
bb615:
  int t639 = i629;
  int u640 = ++t639;
  i629 = u640;
  goto bb606;
bb616:
  goto bb617;
bb617:
  goto bb618;
bb618:
  int c641 = 0;
  i630 = c641;
  goto bb619;
bb619:
  int t642 = i630;
  int c643 = 10;
  _Bool c644 = (t642 < c643) ? 1 : 0;
  if (c644) goto bb620; else goto bb627;
bb620:
  goto bb621;
bb621:
  int t645 = i630;
  unsigned long long cast646 = (unsigned long long)t645;
  int* r647 = std__vector_int__std__allocator_int_____operator__(&v632, cast646);
  int t648 = *r647;
  int t649 = i630;
  _Bool c650 = (t648 == t649) ? 1 : 0;
  if (c650) goto bb622; else goto bb623;
bb622:
  int c651 = 0;
  goto bb624;
bb623:
  char* cast652 = (char*)_str;
  // Constant: no literal value found for cir.const
  char* c653 = 0;
  unsigned int c654 = 20;
  char* cast655 = (char*)_str_2;
  __assert_fail(cast652, c653, c654, cast655);
  goto bb624;
bb624:
  goto bb625;
bb625:
  goto bb626;
bb626:
  int t656 = i630;
  int u657 = ++t656;
  i630 = u657;
  goto bb619;
bb627:
  goto bb628;
bb628:
  int c658 = 0;
  __retval631 = c658;
  std__vector_int__std__allocator_int______vector(&v632);
  int t659 = __retval631;
  return t659;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl* v660) {
bb661:
  struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl* this662;
  this662 = v660;
  struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl* t663 = this662;
  // %v664  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  std__allocator_int___allocator(v664);
  // %v665  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(v665);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std::_Vector_base<int, std::allocator<int>>* v666) {
bb667:
  struct std::_Vector_base<int, std::allocator<int>>* this668;
  this668 = v666;
  struct std::_Vector_base<int, std::allocator<int>>* t669 = this668;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(t669->_M_impl);
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std::__new_allocator<int>* v670) {
bb671:
  struct std::__new_allocator<int>* this672;
  this672 = v670;
  struct std::__new_allocator<int>* t673 = this672;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std::allocator<int>* v674) {
bb675:
  struct std::allocator<int>* this676;
  this676 = v674;
  struct std::allocator<int>* t677 = this676;
  // %v678  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  std____new_allocator_int_____new_allocator(v678);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data* v679) {
bb680:
  struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data* this681;
  this681 = v679;
  struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data* t682 = this681;
  int* c683 = NULL;
  *t682->_M_start = c683;
  int* c684 = NULL;
  *t682->_M_finish = c684;
  int* c685 = NULL;
  *t682->_M_end_of_storage = c685;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v686, int* v687) {
bb688:
  int* __first689;
  int* __last690;
  __first689 = v686;
  __last690 = v687;
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v691, int* v692, struct std::allocator<int>* v693) {
bb694:
  int* __first695;
  int* __last696;
  // Alloca: unable to determine a precise name for allocation
  struct std::allocator<int>* a697698;
  __first695 = v691;
  __last696 = v692;
  a697698 = v693;
  int* t699 = __first695;
  int* t700 = __last696;
  void_std___Destroy_int__(t699, t700);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std::allocator<int>* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std::_Vector_base<int, std::allocator<int>>* v701) {
bb702:
  struct std::_Vector_base<int, std::allocator<int>>* this703;
  struct std::allocator<int>* __retval704;
  this703 = v701;
  struct std::_Vector_base<int, std::allocator<int>>* t705 = this703;
  // %v706  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  __retval704 = v706;
  struct std::allocator<int>* t707 = __retval704;
  return t707;
}

// function: _ZdlPvmSt11align_val_t
void _ZdlPvmSt11align_val_t(void*, unsigned long long, unsigned long long);

// function: _ZdlPvm
void _ZdlPvm(void*, unsigned long long);

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std::__new_allocator<int>* v708, int* v709, unsigned long long v710) {
bb711:
  struct std::__new_allocator<int>* this716;
  int* __p717;
  unsigned long long __n718;
  this716 = v708;
  __p717 = v709;
  __n718 = v710;
  struct std::__new_allocator<int>* t719 = this716;
  goto bb712;
bb712:
  unsigned long long c720 = 4;
  unsigned long long c721 = 16;
  _Bool c722 = (c720 > c721) ? 1 : 0;
  if (c722) goto bb713; else goto bb714;
bb713:
  int* t723 = __p717;
  void* cast724 = (void*)t723;
  unsigned long long t725 = __n718;
  unsigned long long c726 = 4;
  unsigned long long b727 = t725 * c726;
  unsigned long long c728 = 4;
  _ZdlPvmSt11align_val_t(cast724, b727, c728);
  return;
bb714:
  goto bb715;
bb715:
  int* t729 = __p717;
  void* cast730 = (void*)t729;
  unsigned long long t731 = __n718;
  unsigned long long c732 = 4;
  unsigned long long b733 = t731 * c732;
  _ZdlPvm(cast730, b733);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std::allocator<int>* v734, int* v735, unsigned long long v736) {
bb737:
  struct std::allocator<int>* __a738;
  int* __p739;
  unsigned long long __n740;
  __a738 = v734;
  __p739 = v735;
  __n740 = v736;
  struct std::allocator<int>* t741 = __a738;
  // %v742  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  int* t743 = __p739;
  unsigned long long t744 = __n740;
  std____new_allocator_int___deallocate(v742, t743, t744);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std::_Vector_base<int, std::allocator<int>>* v745, int* v746, unsigned long long v747) {
bb748:
  struct std::_Vector_base<int, std::allocator<int>>* this753;
  int* __p754;
  unsigned long long __n755;
  this753 = v745;
  __p754 = v746;
  __n755 = v747;
  struct std::_Vector_base<int, std::allocator<int>>* t756 = this753;
  goto bb749;
bb749:
  int* t757 = __p754;
  _Bool cast758 = (_Bool)t757;
  if (cast758) goto bb750; else goto bb751;
bb750:
  // %v759  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  int* t760 = __p754;
  unsigned long long t761 = __n755;
  std__allocator_traits_std__allocator_int_____deallocate(v759, t760, t761);
  goto bb751;
bb751:
  goto bb752;
bb752:
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl* v762) {
bb763:
  struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl* this764;
  this764 = v762;
  struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl* t765 = this764;
  // %v766  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  std__allocator_int____allocator(v766);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std::_Vector_base<int, std::allocator<int>>* v767) {
  void* v768;
  unsigned int v769;
bb770:
  struct std::_Vector_base<int, std::allocator<int>>* this776;
  this776 = v767;
  struct std::_Vector_base<int, std::allocator<int>>* t777 = this776;
  // %v778  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  int* t779 = *v778->_M_start;
  // %v780  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  int* t781 = *v780->_M_end_of_storage;
  // %v782  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  int* t783 = *v782->_M_start;
  long long diff784 = t781 - t783;
  unsigned long long cast785 = (unsigned long long)diff784;
  goto bb771;
bb771:
  // attrs:
  //   callee = @_ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
  //   calling_conv = 1 : i32
  //   extra_attrs = #cir<extra({})>
  //   operandSegmentSizes = array<i32: 0, 0, 3>
  //   side_effect = 0 : i32
bb772:
  goto bb775;
bb773:
  // %v786  (produced by: cir.eh.inflight_exception)
  // %v787  (produced by: cir.eh.inflight_exception)
  // attrs:
  //   cleanup = unit
  std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(t777->_M_impl);
  v768 = v786;
  v769 = v787;
  goto bb774;
bb774:
bb775:
  std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(t777->_M_impl);
  return;
}

// function: _ZNSt15__new_allocatorIiED2Ev
void std____new_allocator_int______new_allocator(struct std::__new_allocator<int>* v788) {
bb789:
  struct std::__new_allocator<int>* this790;
  this790 = v788;
  struct std::__new_allocator<int>* t791 = this790;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std::allocator<int>* v792) {
bb793:
  struct std::allocator<int>* this794;
  this794 = v792;
  struct std::allocator<int>* t795 = this794;
  // %v796  (produced by: cir.base_class_addr)
  // attrs:
  //   assume_not_null = unit
  //   offset = 0 : index
  std____new_allocator_int______new_allocator(v796);
  return;
}

