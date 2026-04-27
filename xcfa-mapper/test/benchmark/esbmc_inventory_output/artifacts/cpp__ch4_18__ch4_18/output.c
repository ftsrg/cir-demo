// Struct definitions (auto-parsed)
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[27];
struct std::basic_istream<char> _ZSt3cin;
char _str_1[24] = "Found value in element ";
char _str_2[16] = "Value not found";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSirsERi
struct std::basic_istream<char>* std__istream__operator__(struct std::basic_istream<char>*, int*);

// function: _Z12linearSearchPKiii
int linearSearch(int* v0, int v1, int v2) {
bb3:
  int j14;
  int* array15;
  int key16;
  int sizeOfArray17;
  int __retval18;
  array15 = v0;
  key16 = v1;
  sizeOfArray17 = v2;
  goto bb4;
bb4:
  int c19 = 0;
  j14 = c19;
  goto bb5;
bb5:
  int t20 = j14;
  int t21 = sizeOfArray17;
  _Bool c22 = (t20 < t21) ? 1 : 0;
  if (c22) goto bb6; else goto bb12;
bb6:
  goto bb7;
bb7:
  int* t23 = array15;
  int t24 = j14;
  int* ptr25 = t23 + t24;
  int t26 = *ptr25;
  int t27 = key16;
  _Bool c28 = (t26 == t27) ? 1 : 0;
  if (c28) goto bb8; else goto bb9;
bb8:
  int t29 = j14;
  __retval18 = t29;
  int t30 = __retval18;
  return t30;
bb9:
  goto bb10;
bb10:
  goto bb11;
bb11:
  int t31 = j14;
  int u32 = ++t31;
  j14 = u32;
  goto bb5;
bb12:
  goto bb13;
bb13:
  int c33 = 1;
  int u34 = -c33;
  __retval18 = u34;
  int t35 = __retval18;
  return t35;
}

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb36:
  int i48;
  int __retval49;
  int arraySize50;
  int a51[100];
  int searchKey52;
  int element53;
  int c54 = 100;
  arraySize50 = c54;
  goto bb37;
bb37:
  int c55 = 0;
  i48 = c55;
  goto bb38;
bb38:
  int t56 = i48;
  int c57 = 100;
  _Bool c58 = (t56 < c57) ? 1 : 0;
  if (c58) goto bb39; else goto bb41;
bb39:
  int c59 = 2;
  int t60 = i48;
  int b61 = c59 * t60;
  int t62 = i48;
  a51[t62] = b61;
  goto bb40;
bb40:
  int t63 = i48;
  int u64 = ++t63;
  i48 = u64;
  goto bb38;
bb41:
  goto bb42;
bb42:
  struct std::basic_ostream<char>* g65 = &_ZSt4cout;
  char* cast66 = (char*)_str;
  struct std::basic_ostream<char>* r67 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g65, cast66);
  struct std::basic_istream<char>* g68 = &_ZSt3cin;
  struct std::basic_istream<char>* r69 = std__istream__operator__(g68, &searchKey52);
  int* cast70 = (int*)a51;
  int t71 = searchKey52;
  int c72 = 100;
  int r73 = linearSearch(cast70, t71, c72);
  element53 = r73;
  goto bb43;
bb43:
  int t74 = element53;
  int c75 = 1;
  int u76 = -c75;
  _Bool c77 = (t74 != u76) ? 1 : 0;
  if (c77) goto bb44; else goto bb45;
bb44:
  struct std::basic_ostream<char>* g78 = &_ZSt4cout;
  char* cast79 = (char*)_str_1;
  struct std::basic_ostream<char>* r80 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g78, cast79);
  int t81 = element53;
  struct std::basic_ostream<char>* r82 = std__ostream__operator__(r80, t81);
  void* g83 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r84 = std__ostream__operator___std__ostream_____(r82, g83);
  goto bb46;
bb45:
  struct std::basic_ostream<char>* g85 = &_ZSt4cout;
  char* cast86 = (char*)_str_2;
  struct std::basic_ostream<char>* r87 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g85, cast86);
  void* g88 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r89 = std__ostream__operator___std__ostream_____(r87, g88);
  goto bb46;
bb46:
  goto bb47;
bb47:
  int c90 = 0;
  __retval49 = c90;
  int t91 = __retval49;
  return t91;
}

