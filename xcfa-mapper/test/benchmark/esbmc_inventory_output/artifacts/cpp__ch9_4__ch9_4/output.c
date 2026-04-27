// Struct definitions (auto-parsed)
struct Circle5 { unsigned char __placeholder; };
struct Point4 { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
// function: _ZN6Point4C1Eii
void Point4__Point4(struct Point4*, int, int);

// function: _ZN6Point4D1Ev
void Point4___Point4(struct Point4*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZN7Circle5C1Eiid
void Circle5__Circle5(struct Circle5*, int, int, double);

// function: _ZN7Circle5D1Ev
void Circle5___Circle5(struct Circle5*);

// function: main
int main() {
  void* v0;
  unsigned int v1;
  void* v2;
  unsigned int v3;
  void* v4;
  unsigned int v5;
bb6:
  struct Point4 point24;
  int __retval25;
  struct Circle5 circle126;
  int tmp.try.call.res27[8];
  struct Circle5 circle228;
  int tmp.try.call.res29[8];
  goto bb7;
bb7:
  int c30 = 11;
  int c31 = 22;
  Point4__Point4(&point24, c30, c31);
  Point4___Point4(&point24);
  goto bb8;
bb8:
  struct std::basic_ostream<char>* g32 = &_ZSt4cout;
  void* g33 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r34 = std__ostream__operator___std__ostream_____(g32, g33);
  int c35 = 72;
  int c36 = 29;
  double c37 = 4.5;
  Circle5__Circle5(&circle126, c35, c36, c37);
  struct std::basic_ostream<char>* g38 = &_ZSt4cout;
  void* g39 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  goto bb9;
bb9:
