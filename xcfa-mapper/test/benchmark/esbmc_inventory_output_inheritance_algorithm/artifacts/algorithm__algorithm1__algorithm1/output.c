// Struct definitions (auto-parsed)
struct __gnu_cxx::__normal_iterator<const int *, std::vector<int>> { int* _M_current; };
struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> { int* _M_current; };
struct __locale_struct { unsigned char __placeholder; };
struct myclass { unsigned char __field0; };
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

struct std::basic_ostream<char> _ZSt4cout;
char _str[2] = " ";
struct myclass myobject;
char _str_11[26];
char _str_12[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char _str_13[77];
char _str_14[15] = "!this->empty()";
char _str_1[19];
char _str_15[92];
char _str_16[19] = "__n < this->size()";
char _str_2[18] = "myvector[0] == 11";
char _str_3[95] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm1/main.cpp";
char _str_4[11] = "int main()";
char _str_5[18] = "myvector[1] == 21";
char _str_6[18] = "myvector[2] == 31";
char _str_7[20];
char _str_8[18] = "myvector[0] == 10";
char _str_9[18] = "myvector[1] == 20";
char _str_10[18] = "myvector[2] == 30";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _Z10myfunctionRi
void myfunction(int* v0) {
bb1:
  int* i2;
  i2 = v0;
  int* t3 = i2;
  int t4 = *t3;
  int u5 = ++t4;
  *t3 = u5;
  struct std::basic_ostream<char>* g6 = &_ZSt4cout;
  char* cast7 = (char*)_str;
  struct std::basic_ostream<char>* r8 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g6, cast7);
  int* t9 = i2;
  int t10 = *t9;
  struct std::basic_ostream<char>* r11 = std__ostream__operator__(r8, t10);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector(struct std::vector<int>* v12) {
bb13:
  struct std::vector<int>* this14;
  this14 = v12;
  struct std::vector<int>* t15 = this14;
  struct std::_Vector_base<int, std::allocator<int>>* base16 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t15 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base(base16);
  return;
}

// function: _ZNSt15__new_allocatorIiE9constructIiJiEEEvPT_DpOT0_
void void_std____new_allocator_int___construct_int__int_(struct std::__new_allocator<int>* v17, int* v18, int* v19) {
bb20:
  struct std::__new_allocator<int>* this21;
  int* __p22;
  int* __args23;
  this21 = v17;
  __p22 = v18;
  __args23 = v19;
  struct std::__new_allocator<int>* t24 = this21;
  unsigned long long c25 = 4;
  int* t26 = __p22;
  void* cast27 = (void*)t26;
  int* cast28 = (int*)cast27;
  int* t29 = __args23;
  int t30 = *t29;
  *cast28 = t30;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std::allocator<int>* v31, int* v32, int* v33) {
bb34:
  struct std::allocator<int>* __a35;
  int* __p36;
  int* __args37;
  __a35 = v31;
  __p36 = v32;
  __args37 = v33;
  struct std::allocator<int>* t38 = __a35;
  struct std::__new_allocator<int>* base39 = (struct std::__new_allocator<int>*)((char *)t38 + 0);
  int* t40 = __p36;
  int* t41 = __args37;
  void_std____new_allocator_int___construct_int__int_(base39, t40, t41);
  return;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long long std____new_allocator_int____M_max_size___const(struct std::__new_allocator<int>* v42) {
bb43:
  struct std::__new_allocator<int>* this44;
  unsigned long long __retval45;
  this44 = v42;
  struct std::__new_allocator<int>* t46 = this44;
  long long c47 = 9223372036854775807;
  unsigned long long cast48 = (unsigned long long)c47;
  unsigned long long c49 = 4;
  unsigned long long b50 = cast48 / c49;
  __retval45 = b50;
  unsigned long long t51 = __retval45;
  return t51;
}

// function: _ZNKSt15__new_allocatorIiE8max_sizeEv
unsigned long long std____new_allocator_int___max_size___const(struct std::__new_allocator<int>* v52) {
bb53:
  struct std::__new_allocator<int>* this54;
  unsigned long long __retval55;
  this54 = v52;
  struct std::__new_allocator<int>* t56 = this54;
  unsigned long long r57 = std____new_allocator_int____M_max_size___const(t56);
  __retval55 = r57;
  unsigned long long t58 = __retval55;
  return t58;
}

// function: _ZNSt16allocator_traitsISaIiEE8max_sizeERKS0_
unsigned long long std__allocator_traits_std__allocator_int_____max_size(struct std::allocator<int>* v59) {
bb60:
  struct std::allocator<int>* __a61;
  unsigned long long __retval62;
  __a61 = v59;
  struct std::allocator<int>* t63 = __a61;
  struct std::__new_allocator<int>* base64 = (struct std::__new_allocator<int>*)((char *)t63 + 0);
  unsigned long long r65 = std____new_allocator_int___max_size___const(base64);
  __retval62 = r65;
  unsigned long long t66 = __retval62;
  return t66;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long long* unsigned_long_const__std__min_unsigned_long_(unsigned long long* v67, unsigned long long* v68) {
bb69:
  unsigned long long* __a74;
  unsigned long long* __b75;
  unsigned long long* __retval76;
  __a74 = v67;
  __b75 = v68;
  goto bb70;
bb70:
  unsigned long long* t77 = __b75;
  unsigned long long t78 = *t77;
  unsigned long long* t79 = __a74;
  unsigned long long t80 = *t79;
  _Bool c81 = (t78 < t80) ? 1 : 0;
  if (c81) goto bb71; else goto bb72;
bb71:
  unsigned long long* t82 = __b75;
  __retval76 = t82;
  unsigned long long* t83 = __retval76;
  return t83;
bb72:
  goto bb73;
bb73:
  unsigned long long* t84 = __a74;
  __retval76 = t84;
  unsigned long long* t85 = __retval76;
  return t85;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long long std__vector_int__std__allocator_int______S_max_size(struct std::allocator<int>* v86) {
bb87:
  struct std::allocator<int>* __a88;
  unsigned long long __retval89;
  unsigned long long __diffmax90;
  unsigned long long __allocmax91;
  __a88 = v86;
  unsigned long long c92 = 2305843009213693951;
  __diffmax90 = c92;
  struct std::allocator<int>* t93 = __a88;
  unsigned long long r94 = std__allocator_traits_std__allocator_int_____max_size(t93);
  __allocmax91 = r94;
  unsigned long long* r95 = unsigned_long_const__std__min_unsigned_long_(&__diffmax90, &__allocmax91);
  unsigned long long t96 = *r95;
  __retval89 = t96;
  unsigned long long t97 = __retval89;
  return t97;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std::allocator<int>* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std::_Vector_base<int, std::allocator<int>>* v98) {
bb99:
  struct std::_Vector_base<int, std::allocator<int>>* this100;
  struct std::allocator<int>* __retval101;
  this100 = v98;
  struct std::_Vector_base<int, std::allocator<int>>* t102 = this100;
  struct std::allocator<int>* base103 = (struct std::allocator<int>*)((char *)t102->_M_impl + 0);
  __retval101 = base103;
  struct std::allocator<int>* t104 = __retval101;
  return t104;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long long std__vector_int__std__allocator_int_____max_size___const(struct std::vector<int>* v105) {
bb106:
  struct std::vector<int>* this107;
  unsigned long long __retval108;
  this107 = v105;
  struct std::vector<int>* t109 = this107;
  struct std::_Vector_base<int, std::allocator<int>>* base110 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t109 + 0);
  struct std::allocator<int>* r111 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base110);
  unsigned long long r112 = std__vector_int__std__allocator_int______S_max_size(r111);
  __retval108 = r112;
  unsigned long long t113 = __retval108;
  return t113;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long long std__vector_int__std__allocator_int_____size___const(struct std::vector<int>* v114) {
bb115:
  struct std::vector<int>* this120;
  unsigned long long __retval121;
  long long __dif122;
  this120 = v114;
  struct std::vector<int>* t123 = this120;
  struct std::_Vector_base<int, std::allocator<int>>* base124 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t123 + 0);
  struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data* base125 = (struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data*)((char *)base124->_M_impl + 0);
  int* t126 = base125->_M_finish;
  struct std::_Vector_base<int, std::allocator<int>>* base127 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t123 + 0);
  struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data* base128 = (struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data*)((char *)base127->_M_impl + 0);
  int* t129 = base128->_M_start;
  long long diff130 = t126 - t129;
  __dif122 = diff130;
  goto bb116;
bb116:
  long long t131 = __dif122;
  int c132 = 0;
  long long cast133 = (long long)c132;
  _Bool c134 = (t131 < cast133) ? 1 : 0;
  if (c134) goto bb117; else goto bb118;
bb117:
