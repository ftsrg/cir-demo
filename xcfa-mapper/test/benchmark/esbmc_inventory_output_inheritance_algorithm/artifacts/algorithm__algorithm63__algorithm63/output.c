// Struct definitions (auto-parsed)
struct __gnu_cxx::__ops::_Iter_less_iter { unsigned char __field0; };
struct __locale_struct { unsigned char __placeholder; };
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

int __const_main_myints[3];
struct std::basic_ostream<char> _ZSt4cout;
char _str[47];
char _str_1[2] = " ";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZNK9__gnu_cxx5__ops15_Iter_less_iterclIPiS3_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(struct __gnu_cxx::__ops::_Iter_less_iter* v0, int* v1, int* v2) {
bb3:
  struct __gnu_cxx::__ops::_Iter_less_iter* this4;
  int* __it15;
  int* __it26;
  _Bool __retval7;
  this4 = v0;
  __it15 = v1;
  __it26 = v2;
  struct __gnu_cxx::__ops::_Iter_less_iter* t8 = this4;
  int* t9 = __it15;
  int t10 = *t9;
  int* t11 = __it26;
  int t12 = *t11;
  _Bool c13 = (t10 < t12) ? 1 : 0;
  __retval7 = c13;
  _Bool t14 = __retval7;
  return t14;
}

// function: _ZSt4swapIiENSt9enable_ifIXsr6__and_ISt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS3_ESt18is_move_assignableIS3_EEE5valueEvE4typeERS3_SC_
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* v15, int* v16) {
bb17:
  int* __a18;
  int* __b19;
  int __tmp20;
  __a18 = v15;
  __b19 = v16;
  int* t21 = __a18;
  int t22 = *t21;
  __tmp20 = t22;
  int* t23 = __b19;
  int t24 = *t23;
  int* t25 = __a18;
  *t25 = t24;
  int t26 = __tmp20;
  int* t27 = __b19;
  *t27 = t26;
  return;
}

// function: _ZSt9iter_swapIPiS0_EvT_T0_
void void_std__iter_swap_int___int__(int* v28, int* v29) {
bb30:
  int* __a31;
  int* __b32;
  __a31 = v28;
  __b32 = v29;
  int* t33 = __a31;
  int* t34 = __b32;
  std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(t33, t34);
  return;
}

// function: _ZSt9__reverseIPiEvT_S1_St26random_access_iterator_tag
void void_std____reverse_int__(int* v35, int* v36, struct std::random_access_iterator_tag v37) {
bb38:
  int* __first50;
  int* __last51;
