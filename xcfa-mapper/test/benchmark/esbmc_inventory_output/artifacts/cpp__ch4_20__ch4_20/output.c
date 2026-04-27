// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

int __const_main_array3[2];
int __const_main_array2[2];
int __const_main_array1[2];
struct std::basic_ostream<char> _ZSt4cout;
char _str[29];
char _str_1[29];
char _str_2[29];
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _Z10printArrayPA3_i
void printArray_int_(int* v0) {
bb1:
  int i16;
  int j17;
  int a18[3];
  a18 = v0;
  goto bb2;
bb2:
  int c19 = 0;
  i16 = c19;
  goto bb3;
bb3:
  int t20 = i16;
  int c21 = 2;
  _Bool c22 = (t20 < c21) ? 1 : 0;
  if (c22) goto bb4; else goto bb14;
bb4:
  goto bb5;
bb5:
  goto bb6;
bb6:
  int c23 = 0;
  j17 = c23;
  goto bb7;
bb7:
  int t24 = j17;
  int c25 = 3;
  _Bool c26 = (t24 < c25) ? 1 : 0;
  if (c26) goto bb8; else goto bb10;
bb8:
  struct std::basic_ostream<char>* g27 = &_ZSt4cout;
  int* t28 = a18;
  int t29 = i16;
  int* ptr30 = t28 + t29;
  int t31 = j17;
  int t32 = *ptr30[t31];
  struct std::basic_ostream<char>* r33 = std__ostream__operator__(g27, t32);
  char c34 = 32;
  struct std::basic_ostream<char>* r35 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r33, c34);
  goto bb9;
bb9:
  int t36 = j17;
  int u37 = ++t36;
  j17 = u37;
  goto bb7;
bb10:
  goto bb11;
bb11:
  struct std::basic_ostream<char>* g38 = &_ZSt4cout;
  void* g39 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r40 = std__ostream__operator___std__ostream_____(g38, g39);
  goto bb12;
bb12:
  goto bb13;
bb13:
  int t41 = i16;
  int u42 = ++t41;
  i16 = u42;
  goto bb3;
bb14:
  goto bb15;
bb15:
  return;
}

// function: main
int main() {
bb43:
  int __retval44;
  int array145[3];
  int array246[3];
  int array347[3];
  // array copy
  for (int i = 0; i < 2; ++i) { __const_main_array1[i] = array145[i]; }
  // array copy
  for (int i = 0; i < 2; ++i) { __const_main_array2[i] = array246[i]; }
  // array copy
  for (int i = 0; i < 2; ++i) { __const_main_array3[i] = array347[i]; }
  struct std::basic_ostream<char>* g48 = &_ZSt4cout;
  char* cast49 = (char*)_str;
  struct std::basic_ostream<char>* r50 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g48, cast49);
  void* g51 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r52 = std__ostream__operator___std__ostream_____(r50, g51);
  int* cast53 = (int*)array145;
  printArray_int_(cast53);
  struct std::basic_ostream<char>* g54 = &_ZSt4cout;
  char* cast55 = (char*)_str_1;
  struct std::basic_ostream<char>* r56 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g54, cast55);
  void* g57 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r58 = std__ostream__operator___std__ostream_____(r56, g57);
  int* cast59 = (int*)array246;
  printArray_int_(cast59);
  struct std::basic_ostream<char>* g60 = &_ZSt4cout;
  char* cast61 = (char*)_str_2;
  struct std::basic_ostream<char>* r62 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g60, cast61);
  void* g63 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r64 = std__ostream__operator___std__ostream_____(r62, g63);
  int* cast65 = (int*)array347;
  printArray_int_(cast65);
  int c66 = 0;
  __retval44 = c66;
  int t67 = __retval44;
  return t67;
}

