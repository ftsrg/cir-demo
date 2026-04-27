// Struct definitions (auto-parsed)
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[19];
struct std::basic_istream<char> _ZSt3cin;
char _str_1[11] = "Fibonacci(";
char _str_2[5] = ") = ";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSirsERm
struct std::basic_istream<char>* std__istream__operator__(struct std::basic_istream<char>*, unsigned long long*);

// function: _Z9fibonaccim
unsigned long long fibonacci(unsigned long long v0) {
  _Bool v1;
  _Bool v2;
bb3:
  unsigned long long n15;
  unsigned long long __retval16;
  n15 = v0;
  goto bb4;
bb4:
  unsigned long long t17 = n15;
  int c18 = 0;
  unsigned long long cast19 = (unsigned long long)c18;
  _Bool c20 = (t17 == cast19) ? 1 : 0;
  if (c20) goto bb5; else goto bb6;
bb5:
  _Bool c21 = 1;
  v2 = c21;
  goto bb10;
bb6:
  unsigned long long t22 = n15;
  int c23 = 1;
  unsigned long long cast24 = (unsigned long long)c23;
  _Bool c25 = (t22 == cast24) ? 1 : 0;
  if (c25) goto bb7; else goto bb8;
bb7:
  _Bool c26 = 1;
  v1 = c26;
  goto bb9;
bb8:
  _Bool c27 = 0;
  v1 = c27;
  goto bb9;
bb9:
  v2 = v1;
  goto bb10;
bb10:
  if (v2) goto bb11; else goto bb12;
bb11:
  unsigned long long t28 = n15;
  __retval16 = t28;
  unsigned long long t29 = __retval16;
  return t29;
bb12:
  unsigned long long t30 = n15;
  int c31 = 1;
  unsigned long long cast32 = (unsigned long long)c31;
  unsigned long long b33 = t30 - cast32;
  unsigned long long r34 = fibonacci(b33);
  unsigned long long t35 = n15;
  int c36 = 2;
  unsigned long long cast37 = (unsigned long long)c36;
  unsigned long long b38 = t35 - cast37;
  unsigned long long r39 = fibonacci(b38);
  unsigned long long b40 = r34 + r39;
  __retval16 = b40;
  unsigned long long t41 = __retval16;
  return t41;
bb13:
  goto bb14;
bb14:
