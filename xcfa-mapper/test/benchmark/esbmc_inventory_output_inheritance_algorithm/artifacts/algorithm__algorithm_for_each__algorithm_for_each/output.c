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
char _str_3[26];
char _str_4[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char _str_5[77];
char _str_6[15] = "!this->empty()";
char _str_1[19];
char _str_2[20];
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _Z10myfunctioni
void myfunction(int v0) {
bb1:
  int i2;
  i2 = v0;
  struct std::basic_ostream<char>* g3 = &_ZSt4cout;
  char* cast4 = (char*)_str;
  struct std::basic_ostream<char>* r5 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g3, cast4);
  int t6 = i2;
  struct std::basic_ostream<char>* r7 = std__ostream__operator__(r5, t6);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector(struct std::vector<int>* v8) {
bb9:
  struct std::vector<int>* this10;
  this10 = v8;
  struct std::vector<int>* t11 = this10;
  struct std::_Vector_base<int, std::allocator<int>>* base12 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t11 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base(base12);
  return;
}

// function: _ZNSt15__new_allocatorIiE9constructIiJiEEEvPT_DpOT0_
void void_std____new_allocator_int___construct_int__int_(struct std::__new_allocator<int>* v13, int* v14, int* v15) {
bb16:
  struct std::__new_allocator<int>* this17;
  int* __p18;
  int* __args19;
  this17 = v13;
  __p18 = v14;
  __args19 = v15;
  struct std::__new_allocator<int>* t20 = this17;
  unsigned long long c21 = 4;
  int* t22 = __p18;
  void* cast23 = (void*)t22;
  int* cast24 = (int*)cast23;
  int* t25 = __args19;
  int t26 = *t25;
  *cast24 = t26;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std::allocator<int>* v27, int* v28, int* v29) {
bb30:
  struct std::allocator<int>* __a31;
  int* __p32;
  int* __args33;
  __a31 = v27;
  __p32 = v28;
  __args33 = v29;
  struct std::allocator<int>* t34 = __a31;
  struct std::__new_allocator<int>* base35 = (struct std::__new_allocator<int>*)((char *)t34 + 0);
  int* t36 = __p32;
  int* t37 = __args33;
  void_std____new_allocator_int___construct_int__int_(base35, t36, t37);
  return;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long long std____new_allocator_int____M_max_size___const(struct std::__new_allocator<int>* v38) {
bb39:
  struct std::__new_allocator<int>* this40;
  unsigned long long __retval41;
  this40 = v38;
  struct std::__new_allocator<int>* t42 = this40;
  long long c43 = 9223372036854775807;
  unsigned long long cast44 = (unsigned long long)c43;
  unsigned long long c45 = 4;
  unsigned long long b46 = cast44 / c45;
  __retval41 = b46;
  unsigned long long t47 = __retval41;
  return t47;
}

// function: _ZNKSt15__new_allocatorIiE8max_sizeEv
unsigned long long std____new_allocator_int___max_size___const(struct std::__new_allocator<int>* v48) {
bb49:
  struct std::__new_allocator<int>* this50;
  unsigned long long __retval51;
  this50 = v48;
  struct std::__new_allocator<int>* t52 = this50;
  unsigned long long r53 = std____new_allocator_int____M_max_size___const(t52);
  __retval51 = r53;
  unsigned long long t54 = __retval51;
  return t54;
}

// function: _ZNSt16allocator_traitsISaIiEE8max_sizeERKS0_
unsigned long long std__allocator_traits_std__allocator_int_____max_size(struct std::allocator<int>* v55) {
bb56:
  struct std::allocator<int>* __a57;
  unsigned long long __retval58;
  __a57 = v55;
  struct std::allocator<int>* t59 = __a57;
  struct std::__new_allocator<int>* base60 = (struct std::__new_allocator<int>*)((char *)t59 + 0);
  unsigned long long r61 = std____new_allocator_int___max_size___const(base60);
  __retval58 = r61;
  unsigned long long t62 = __retval58;
  return t62;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long long* unsigned_long_const__std__min_unsigned_long_(unsigned long long* v63, unsigned long long* v64) {
bb65:
  unsigned long long* __a70;
  unsigned long long* __b71;
  unsigned long long* __retval72;
  __a70 = v63;
  __b71 = v64;
  goto bb66;
bb66:
  unsigned long long* t73 = __b71;
  unsigned long long t74 = *t73;
  unsigned long long* t75 = __a70;
  unsigned long long t76 = *t75;
  _Bool c77 = (t74 < t76) ? 1 : 0;
  if (c77) goto bb67; else goto bb68;
bb67:
  unsigned long long* t78 = __b71;
  __retval72 = t78;
  unsigned long long* t79 = __retval72;
  return t79;
bb68:
  goto bb69;
bb69:
  unsigned long long* t80 = __a70;
  __retval72 = t80;
  unsigned long long* t81 = __retval72;
  return t81;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long long std__vector_int__std__allocator_int______S_max_size(struct std::allocator<int>* v82) {
bb83:
  struct std::allocator<int>* __a84;
  unsigned long long __retval85;
  unsigned long long __diffmax86;
  unsigned long long __allocmax87;
  __a84 = v82;
  unsigned long long c88 = 2305843009213693951;
  __diffmax86 = c88;
  struct std::allocator<int>* t89 = __a84;
  unsigned long long r90 = std__allocator_traits_std__allocator_int_____max_size(t89);
  __allocmax87 = r90;
  unsigned long long* r91 = unsigned_long_const__std__min_unsigned_long_(&__diffmax86, &__allocmax87);
  unsigned long long t92 = *r91;
  __retval85 = t92;
  unsigned long long t93 = __retval85;
  return t93;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std::allocator<int>* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std::_Vector_base<int, std::allocator<int>>* v94) {
bb95:
  struct std::_Vector_base<int, std::allocator<int>>* this96;
  struct std::allocator<int>* __retval97;
  this96 = v94;
  struct std::_Vector_base<int, std::allocator<int>>* t98 = this96;
  struct std::allocator<int>* base99 = (struct std::allocator<int>*)((char *)t98->_M_impl + 0);
  __retval97 = base99;
  struct std::allocator<int>* t100 = __retval97;
  return t100;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long long std__vector_int__std__allocator_int_____max_size___const(struct std::vector<int>* v101) {
bb102:
  struct std::vector<int>* this103;
  unsigned long long __retval104;
  this103 = v101;
  struct std::vector<int>* t105 = this103;
  struct std::_Vector_base<int, std::allocator<int>>* base106 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t105 + 0);
  struct std::allocator<int>* r107 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base106);
  unsigned long long r108 = std__vector_int__std__allocator_int______S_max_size(r107);
  __retval104 = r108;
  unsigned long long t109 = __retval104;
  return t109;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long long std__vector_int__std__allocator_int_____size___const(struct std::vector<int>* v110) {
bb111:
  struct std::vector<int>* this116;
  unsigned long long __retval117;
  long long __dif118;
  this116 = v110;
  struct std::vector<int>* t119 = this116;
  struct std::_Vector_base<int, std::allocator<int>>* base120 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t119 + 0);
  struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data* base121 = (struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data*)((char *)base120->_M_impl + 0);
  int* t122 = base121->_M_finish;
  struct std::_Vector_base<int, std::allocator<int>>* base123 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t119 + 0);
  struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data* base124 = (struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data*)((char *)base123->_M_impl + 0);
  int* t125 = base124->_M_start;
  long long diff126 = t122 - t125;
  __dif118 = diff126;
  goto bb112;
bb112:
  long long t127 = __dif118;
  int c128 = 0;
  long long cast129 = (long long)c128;
  _Bool c130 = (t127 < cast129) ? 1 : 0;
  if (c130) goto bb113; else goto bb114;
bb113:
