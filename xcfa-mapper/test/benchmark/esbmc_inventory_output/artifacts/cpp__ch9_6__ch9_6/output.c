// Struct definitions (auto-parsed)
struct Point { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[17] = "X coordinate is ";
char _str_1[18] = "\\0AY coordinate is ";
char _str_2[32] = "\\0A\\0AThe new location of point is ";
// function: _ZN5PointC1Eii
void Point__Point(struct Point*, int, int);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZNK5Point4getXEv
int Point__getX___const(struct Point*);

// function: _ZNK5Point4getYEv
int Point__getY___const(struct Point*);

// function: _ZN5Point4setXEi
void Point__setX(struct Point*, int);

// function: _ZN5Point4setYEi
void Point__setY(struct Point*, int);

// function: _ZNK5Point5printEv
void Point__print___const(struct Point*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb0:
  int __retval1;
  struct Point point2;
  int c3 = 72;
  int c4 = 115;
  Point__Point(&point2, c3, c4);
  struct std::basic_ostream<char>* g5 = &_ZSt4cout;
  char* cast6 = (char*)_str;
  struct std::basic_ostream<char>* r7 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g5, cast6);
  int r8 = Point__getX___const(&point2);
  struct std::basic_ostream<char>* r9 = std__ostream__operator__(r7, r8);
  char* cast10 = (char*)_str_1;
  struct std::basic_ostream<char>* r11 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r9, cast10);
  int r12 = Point__getY___const(&point2);
  struct std::basic_ostream<char>* r13 = std__ostream__operator__(r11, r12);
  int c14 = 10;
  Point__setX(&point2, c14);
  int c15 = 10;
  Point__setY(&point2, c15);
  struct std::basic_ostream<char>* g16 = &_ZSt4cout;
  char* cast17 = (char*)_str_2;
  struct std::basic_ostream<char>* r18 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g16, cast17);
  Point__print___const(&point2);
  struct std::basic_ostream<char>* g19 = &_ZSt4cout;
  void* g20 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r21 = std__ostream__operator___std__ostream_____(g19, g20);
  int c22 = 0;
  __retval1 = c22;
  int t23 = __retval1;
  return t23;
}

