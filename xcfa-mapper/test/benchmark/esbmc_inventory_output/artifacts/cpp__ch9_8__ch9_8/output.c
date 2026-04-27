// Struct definitions (auto-parsed)
struct Point { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[17] = "X coordinate is ";
char _str_1[18] = "\\0AY coordinate is ";
char _str_2[32] = "\\0A\\0AThe new location of point is ";
char _str_3[19] = "point.getX() == 10";
char _str_4[84] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_8/main.cpp";
char _str_5[11] = "int main()";
char _str_6[19] = "point.getY() == 10";
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
  int __retval7;
  struct Point point8;
  int c9 = 72;
  int c10 = 115;
  Point__Point(&point8, c9, c10);
  struct std::basic_ostream<char>* g11 = &_ZSt4cout;
  char* cast12 = (char*)_str;
  struct std::basic_ostream<char>* r13 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g11, cast12);
  int r14 = Point__getX___const(&point8);
  struct std::basic_ostream<char>* r15 = std__ostream__operator__(r13, r14);
  char* cast16 = (char*)_str_1;
  struct std::basic_ostream<char>* r17 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r15, cast16);
  int r18 = Point__getY___const(&point8);
  struct std::basic_ostream<char>* r19 = std__ostream__operator__(r17, r18);
  int c20 = 10;
  Point__setX(&point8, c20);
  int c21 = 10;
  Point__setY(&point8, c21);
  struct std::basic_ostream<char>* g22 = &_ZSt4cout;
  char* cast23 = (char*)_str_2;
  struct std::basic_ostream<char>* r24 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g22, cast23);
  Point__print___const(&point8);
  struct std::basic_ostream<char>* g25 = &_ZSt4cout;
  void* g26 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r27 = std__ostream__operator___std__ostream_____(g25, g26);
  int r28 = Point__getX___const(&point8);
  int c29 = 10;
  _Bool c30 = (r28 == c29) ? 1 : 0;
  if (c30) goto bb1; else goto bb2;
bb1:
  int c31 = 0;
  goto bb3;
bb2:
  char* cast32 = (char*)_str_3;
