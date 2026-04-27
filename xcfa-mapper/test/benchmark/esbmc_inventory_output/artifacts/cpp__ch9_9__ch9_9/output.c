// Struct definitions (auto-parsed)
struct Point { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[17] = "X coordinate is ";
char _str_1[18] = "\\0AY coordinate is ";
char _str_2[32] = "\\0A\\0AThe new location of point is ";
char _str_3[19] = "point.getX() == 10";
char _str_4[84] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_9/main.cpp";
char _str_5[11] = "int main()";
char _str_6[19] = "point.getY() == 10";
char _str_7[19] = "point.getX() == 11";
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

// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: main
int main() {
bb0:
  int __retval10;
  struct Point point11;
  int c12 = 72;
  int c13 = 115;
  Point__Point(&point11, c12, c13);
  struct std::basic_ostream<char>* g14 = &_ZSt4cout;
  char* cast15 = (char*)_str;
  struct std::basic_ostream<char>* r16 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g14, cast15);
  int r17 = Point__getX___const(&point11);
  struct std::basic_ostream<char>* r18 = std__ostream__operator__(r16, r17);
  char* cast19 = (char*)_str_1;
  struct std::basic_ostream<char>* r20 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r18, cast19);
  int r21 = Point__getY___const(&point11);
  struct std::basic_ostream<char>* r22 = std__ostream__operator__(r20, r21);
  int c23 = 10;
  Point__setX(&point11, c23);
  int c24 = 10;
  Point__setY(&point11, c24);
  struct std::basic_ostream<char>* g25 = &_ZSt4cout;
  char* cast26 = (char*)_str_2;
  struct std::basic_ostream<char>* r27 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g25, cast26);
  Point__print___const(&point11);
  struct std::basic_ostream<char>* g28 = &_ZSt4cout;
  void* g29 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r30 = std__ostream__operator___std__ostream_____(g28, g29);
  int r31 = Point__getX___const(&point11);
  int c32 = 10;
  _Bool c33 = (r31 == c32) ? 1 : 0;
  if (c33) goto bb1; else goto bb2;
bb1:
  int c34 = 0;
  goto bb3;
bb2:
  char* cast35 = (char*)_str_3;
