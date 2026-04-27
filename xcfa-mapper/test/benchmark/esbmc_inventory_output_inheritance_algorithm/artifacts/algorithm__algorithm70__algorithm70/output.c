// Struct definitions (auto-parsed)
struct __gnu_cxx::__normal_iterator<int *, std::vector<int>> { int* _M_current; };
struct __gnu_cxx::__ops::_Iter_equals_val<const int> { int* _M_value; };
struct __locale_struct { unsigned char __placeholder; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl { struct std3A3A_Vector_base3Cint2C_std3A3Aallocator3Cint3E3E3A3A_Vector_impl_data __field0; };
struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std::__new_allocator<int> { unsigned char __field0; };
struct std::allocator<int> { unsigned char __field0; };
struct std::basic_ios<char> { struct std3A3Aios_base __field0; char __field2; _Bool __field3; };
struct std::basic_ostream<char> { struct std3A3Abasic_ios3Cchar3E __field1; };
struct std::basic_streambuf<char> { struct std3A3Alocale __field7; };
struct std::ctype<char> { struct std3A3Alocale3A3Afacet2Ebase __field0; _Bool __field3; char __field8; char __field11; };
struct std::forward_iterator_tag { unsigned char __field0; };
struct std::input_iterator_tag { unsigned char __field0; };
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
struct std::_Vector_base<int, std::allocator<int>> { struct std::_Vector_base<int, std::allocator<int>>::_Vector_impl _M_impl; };

int __const_main_myints[5];
struct std::basic_ostream<char> _ZSt4cout;
char _str[12] = "10 appears ";
char _str_1[9] = " times.\\0A";
char _str_2[13] = "mycount != 2";
char _str_3[96] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm70/main.cpp";
char _str_4[11] = "int main()";
char _str_5[12] = "20 appears ";
char _str_6[49];
// function: _ZN9__gnu_cxx5__ops16_Iter_equals_valIKiEclIPiEEbT_
_Bool bool___gnu_cxx____ops___Iter_equals_val_int_const___operator___int__(struct __gnu_cxx::__ops::_Iter_equals_val<const int>* v0, int* v1) {
bb2:
  struct __gnu_cxx::__ops::_Iter_equals_val<const int>* this3;
  int* __it4;
  _Bool __retval5;
  this3 = v0;
  __it4 = v1;
  struct __gnu_cxx::__ops::_Iter_equals_val<const int>* t6 = this3;
  int* t7 = __it4;
  int t8 = *t7;
  int* t9 = t6->_M_value;
  int t10 = *t9;
  _Bool c11 = (t8 == t10) ? 1 : 0;
  __retval5 = c11;
  _Bool t12 = __retval5;
  return t12;
}

// function: _ZSt10__count_ifIPiN9__gnu_cxx5__ops16_Iter_equals_valIKiEEENSt15iterator_traitsIT_E15difference_typeES7_S7_T0_
long long std__iterator_traits_int____difference_type_std____count_if_int_____gnu_cxx____ops___Iter_equals_val_int_const___(int* v13, int* v14, struct __gnu_cxx::__ops::_Iter_equals_val<const int> v15) {
bb16:
  int* __first27;
  int* __last28;
  struct __gnu_cxx::__ops::_Iter_equals_val<const int> __pred29;
  long long __retval30;
  long long __n31;
  __first27 = v13;
  __last28 = v14;
  __pred29 = v15;
  int c32 = 0;
  long long cast33 = (long long)c32;
  __n31 = cast33;
  goto bb17;
bb17:
  goto bb18;
bb18:
  int* t34 = __first27;
  int* t35 = __last28;
  _Bool c36 = (t34 != t35) ? 1 : 0;
  if (c36) goto bb19; else goto bb25;
bb19:
  goto bb20;
bb20:
  int* t37 = __first27;
  _Bool r38 = bool___gnu_cxx____ops___Iter_equals_val_int_const___operator___int__(&__pred29, t37);
  if (r38) goto bb21; else goto bb22;
bb21:
  long long t39 = __n31;
  long long u40 = ++t39;
  __n31 = u40;
  goto bb22;
bb22:
  goto bb23;
bb23:
  goto bb24;
bb24:
  int* t41 = __first27;
  int c42 = 1;
  int* ptr43 = t41 + c42;
  __first27 = ptr43;
  goto bb18;
bb25:
  goto bb26;
bb26:
  long long t44 = __n31;
  __retval30 = t44;
  long long t45 = __retval30;
  return t45;
}

// function: _ZN9__gnu_cxx5__ops16_Iter_equals_valIKiEC2ERS2_
void __gnu_cxx____ops___Iter_equals_val_int_const____Iter_equals_val(struct __gnu_cxx::__ops::_Iter_equals_val<const int>* v46, int* v47) {
bb48:
  struct __gnu_cxx::__ops::_Iter_equals_val<const int>* this49;
  int* __value50;
  this49 = v46;
  __value50 = v47;
  struct __gnu_cxx::__ops::_Iter_equals_val<const int>* t51 = this49;
  int* t52 = __value50;
  t51->_M_value = t52;
  return;
}

// function: _ZN9__gnu_cxx5__ops17__iter_equals_valIKiEENS0_16_Iter_equals_valIT_EERS4_
struct __gnu_cxx::__ops::_Iter_equals_val<const int> __gnu_cxx____ops___Iter_equals_val_int_const____gnu_cxx____ops____iter_equals_val_int_const_(int* v53) {
bb54:
  int* __val55;
  struct __gnu_cxx::__ops::_Iter_equals_val<const int> __retval56;
  __val55 = v53;
  int* t57 = __val55;
  __gnu_cxx____ops___Iter_equals_val_int_const____Iter_equals_val(&__retval56, t57);
  struct __gnu_cxx::__ops::_Iter_equals_val<const int> t58 = __retval56;
  return t58;
}

// function: _ZSt5countIPiiENSt15iterator_traitsIT_E15difference_typeES2_S2_RKT0_
long long std__iterator_traits_int____difference_type_std__count_int___int_(int* v59, int* v60, int* v61) {
bb62:
  int* __first63;
  int* __last64;
  int* __value65;
  long long __retval66;
  struct __gnu_cxx::__ops::_Iter_equals_val<const int> agg.tmp067;
  __first63 = v59;
  __last64 = v60;
  __value65 = v61;
  int* t68 = __first63;
  int* t69 = __last64;
  int* t70 = __value65;
  struct __gnu_cxx::__ops::_Iter_equals_val<const int> r71 = __gnu_cxx____ops___Iter_equals_val_int_const____gnu_cxx____ops____iter_equals_val_int_const_(t70);
  agg.tmp067 = r71;
  struct __gnu_cxx::__ops::_Iter_equals_val<const int> t72 = agg.tmp067;
  long long r73 = std__iterator_traits_int____difference_type_std____count_if_int_____gnu_cxx____ops___Iter_equals_val_int_const___(t68, t69, t72);
  __retval66 = r73;
  long long t74 = __retval66;
  return t74;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZNSaIiEC2Ev
void _ZNSaIiEC2Ev(struct std::allocator<int>* v75) {
bb76:
  struct std::allocator<int>* this77;
  this77 = v75;
  struct std::allocator<int>* t78 = this77;
  struct std::__new_allocator<int>* base79 = (struct std::__new_allocator<int>*)((char *)t78 + 0);
  _ZNSt15__new_allocatorIiEC2Ev(base79);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2IPivEET_S4_RKS0_
void std__vector_int__std__allocator_int_____vector_int___void_(struct std::vector<int>* v80, int* v81, int* v82, struct std::allocator<int>* v83) {
  void* v84;
  unsigned int v85;
  void* v86;
  unsigned int v87;
bb88:
  struct std::forward_iterator_tag agg.tmp0101;
  struct std::random_access_iterator_tag ref.tmp0102;
  struct std::vector<int>* this103;
  int* __first104;
  int* __last105;
  struct std::allocator<int>* __a106;
  this103 = v80;
  __first104 = v81;
  __last105 = v82;
  __a106 = v83;
  struct std::vector<int>* t107 = this103;
  struct std::_Vector_base<int, std::allocator<int>>* base108 = (struct std::_Vector_base<int, std::allocator<int>>*)((char *)t107 + 0);
  struct std::allocator<int>* t109 = __a106;
  std___Vector_base_int__std__allocator_int______Vector_base(base108, t109);
  goto bb89;
bb89:
  int* t110 = __first104;
  int* t111 = __last105;
  goto bb90;
bb90:
