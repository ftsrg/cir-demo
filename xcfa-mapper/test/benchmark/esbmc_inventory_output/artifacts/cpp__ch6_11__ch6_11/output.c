// Struct definitions (auto-parsed)
struct Date { int month; int day; int year; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[9] = "date1 = ";
char _str_1[10] = "\\0Adate2 = ";
char _str_2[48] = "\\0A\\0AAfter default memberwise assignment, date2 = ";
// function: _ZN4DateC2Eiii
void _ZN4DateC2Eiii(struct Date* v0, int v1, int v2, int v3) {
bb4:
  struct Date* this5;
  int m6;
  int d7;
  int y8;
  this5 = v0;
  m6 = v1;
  d7 = v2;
  y8 = v3;
  struct Date* t9 = this5;
  int t10 = m6;
  *t9->month = t10;
  int t11 = d7;
  *t9->day = t11;
  int t12 = y8;
  *t9->year = t12;
  return;
}

// function: _ZN4DateC1Eiii
void _ZN4DateC1Eiii(struct Date*, int, int, int);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZN4Date5printEv
void Date__print(struct Date* v13) {
bb14:
  struct Date* this15;
  this15 = v13;
  struct Date* t16 = this15;
  struct std::basic_ostream<char>* g17 = &_ZSt4cout;
  int t18 = *t16->month;
  struct std::basic_ostream<char>* r19 = std__ostream__operator__(g17, t18);
  char c20 = 45;
  struct std::basic_ostream<char>* r21 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r19, c20);
  int t22 = *t16->day;
  struct std::basic_ostream<char>* r23 = std__ostream__operator__(r21, t22);
  char c24 = 45;
  struct std::basic_ostream<char>* r25 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r23, c24);
  int t26 = *t16->year;
  struct std::basic_ostream<char>* r27 = std__ostream__operator__(r25, t26);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: _ZN4DateaSERKS_
struct Date* Date__operator_(struct Date* v28, struct Date* v29) {
bb30:
  struct Date* this31;
