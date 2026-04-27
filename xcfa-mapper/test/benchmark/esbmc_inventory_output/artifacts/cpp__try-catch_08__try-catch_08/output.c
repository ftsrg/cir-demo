// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[35] = "Memory allocation failed for ptr[ ";
char _str_1[4] = " ]\\0A";
char _str_2[39] = "Allocated 50000000000 doubles in ptr[ ";
// function: _Znam
void* operator_new__(unsigned long long);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: main
int main() {
bb0:
  int i14;
  int __retval15;
  double ptr16[50];
  goto bb1;
bb1:
  int c17 = 0;
  i14 = c17;
  goto bb2;
bb2:
  int t18 = i14;
  int c19 = 50;
  _Bool c20 = (t18 < c19) ? 1 : 0;
  if (c20) goto bb3; else goto bb12;
bb3:
  goto bb4;
bb4:
  unsigned long long c21 = 50000000000;
  unsigned long long c22 = 400000000000;
  void* r23 = operator_new__(c22);
  double* cast24 = (double*)r23;
  int t25 = i14;
  ptr16[t25] = cast24;
  goto bb5;
bb5:
  int t26 = i14;
  double* t27 = ptr16[t26];
  double* c28 = NULL;
  _Bool c29 = (t27 == c28) ? 1 : 0;
  if (c29) goto bb6; else goto bb7;
bb6:
  struct std::basic_ostream<char>* g30 = &_ZSt4cout;
  char* cast31 = (char*)_str;
  struct std::basic_ostream<char>* r32 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g30, cast31);
  int t33 = i14;
  struct std::basic_ostream<char>* r34 = std__ostream__operator__(r32, t33);
  char* cast35 = (char*)_str_1;
  struct std::basic_ostream<char>* r36 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r34, cast35);
  goto bb12;
bb7:
  struct std::basic_ostream<char>* g37 = &_ZSt4cout;
  char* cast38 = (char*)_str_2;
  struct std::basic_ostream<char>* r39 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g37, cast38);
  int t40 = i14;
  struct std::basic_ostream<char>* r41 = std__ostream__operator__(r39, t40);
  char* cast42 = (char*)_str_1;
  struct std::basic_ostream<char>* r43 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r41, cast42);
  goto bb8;
bb8:
  goto bb9;
bb9:
  goto bb10;
bb10:
  goto bb11;
bb11:
  int t44 = i14;
  int u45 = ++t44;
  i14 = u45;
  goto bb2;
bb12:
  goto bb13;
bb13:
  int c46 = 0;
  __retval15 = c46;
  int t47 = __retval15;
  return t47;
}

