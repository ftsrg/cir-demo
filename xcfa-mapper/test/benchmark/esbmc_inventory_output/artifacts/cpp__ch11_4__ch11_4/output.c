// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

char __const_main_c[6] = "HELLO";
double __const_main_b[7];
int __const_main_a[5];
struct std::basic_ostream<char> _ZSt4cout;
char _str[18];
char _str_3[2] = "0";
char _str_4[85] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_4/main.cpp";
char _str_5[48] = "void printArray(const T *, const int) [T = int]";
char _str_6[2] = " ";
char _str_1[18];
char _str_7[51] = "void printArray(const T *, const int) [T = double]";
char _str_2[18];
char _str_8[49] = "void printArray(const T *, const int) [T = char]";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* _ZNSolsEi(struct std::basic_ostream<char>*, int);

// function: _Z10printArrayIiEvPKT_i
void void_printArray_int_(int* v0, int v1) {
bb2:
  int i11;
  int* array12;
  int count13;
  array12 = v0;
  count13 = v1;
  goto bb3;
bb3:
  int c14 = 0;
  i11 = c14;
  goto bb4;
bb4:
  int t15 = i11;
  int t16 = count13;
  _Bool c17 = (t15 <= t16) ? 1 : 0;
  if (c17) goto bb5; else goto bb9;
bb5:
  goto bb6;
bb6:
  char* cast18 = (char*)_str_3;
