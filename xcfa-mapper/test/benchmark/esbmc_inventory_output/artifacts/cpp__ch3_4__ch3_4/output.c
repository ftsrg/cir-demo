// Struct definitions (auto-parsed)
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_istream<char> _ZSt3cin;
struct std::basic_ostream<char> _ZSt4cout;
// function: _ZNSi3getEv
int std__istream__get(struct std::basic_istream<char>*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: main
int main() {
bb0:
  int __retval5;
  int c6;
  goto bb1;
bb1:
  struct std::basic_istream<char>* g7 = &_ZSt3cin;
  int r8 = std__istream__get(g7);
  c6 = r8;
  int c9 = 1;
  int u10 = -c9;
  _Bool c11 = (r8 != u10) ? 1 : 0;
  if (c11) goto bb2; else goto bb3;
bb2:
  int r12 = main();
  struct std::basic_ostream<char>* g13 = &_ZSt4cout;
  int t14 = c6;
  struct std::basic_ostream<char>* r15 = std__ostream__operator__(g13, t14);
  goto bb3;
bb3:
  goto bb4;
bb4:
  int c16 = 0;
  __retval5 = c16;
  int t17 = __retval5;
  return t17;
}

