// Struct definitions (auto-parsed)
struct std::basic_ifstream<char> { unsigned char __placeholder; };
struct std::basic_ios<char> { unsigned char __placeholder; };
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ofstream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[41];
char _str_1[21] = " could not be opened";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode
void std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(struct std::basic_ifstream<char>*, char*, int);

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEEntEv
_Bool std__basic_ios_char__std__char_traits_char_____operator____const(struct std::basic_ios<char>*);

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode
void std__basic_ofstream_char__std__char_traits_char_____basic_ofstream(struct std::basic_ofstream<char>*, char*, int);

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEE5closeEv
void std__basic_ifstream_char__std__char_traits_char_____close(struct std::basic_ifstream<char>*);

// function: _ZNSi3getEv
int std__istream__get(struct std::basic_istream<char>*);

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEEcvbEv
_Bool std__basic_ios_char__std__char_traits_char_____operator_bool___const(struct std::basic_ios<char>*);

// function: _ZNSo3putEc
struct std::basic_ostream<char>* std__ostream__put(struct std::basic_ostream<char>*, char);

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream(struct std::basic_ofstream<char>*);

// function: _ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev
void std__basic_ifstream_char__std__char_traits_char______basic_ifstream(struct std::basic_ifstream<char>*);

// function: main
int main(int v0, char** v1) {
  void* v2;
  unsigned int v3;
  void* v4;
  unsigned int v5;
  void* v6;
  unsigned int v7;
  void* v8;
  unsigned int v9;
  void* v10;
  unsigned int v11;
  void* v12;
  unsigned int v13;
  void* v14;
  unsigned int v15;
  void* v16;
  unsigned int v17;
  void* v18;
  unsigned int v19;
  void* v20;
  unsigned int v21;
  void* v22;
  unsigned int v23;
  void* v24;
  unsigned int v25;
  void* v26;
  unsigned int v27;
  void* v28;
  unsigned int v29;
bb30:
  struct std::basic_ifstream<char> inFile121;
  struct std::basic_ofstream<char> outFile122;
  char c123;
  int tmp.try.call.res124;
  _Bool tmp.try.call.res125;
  int tmp.try.call.res126[8];
  int tmp.try.call.res127[8];
  int tmp.try.call.res128[8];
  _Bool tmp.try.call.res129;
  int tmp.try.call.res130[8];
  int tmp.try.call.res131[8];
  int tmp.try.call.res132[8];
  _Bool tmp.try.call.res133;
  int tmp.try.call.res134[8];
  int tmp.try.call.res135;
  int argc136;
  char** argv137;
  int __retval138;
  argc136 = v0;
  argv137 = v1;
  goto bb31;
bb31:
  int t139 = argc136;
  int c140 = 3;
  _Bool c141 = (t139 != c140) ? 1 : 0;
  if (c141) goto bb32; else goto bb33;
bb32:
  struct std::basic_ostream<char>* g142 = &_ZSt4cout;
  char* cast143 = (char*)_str;
  struct std::basic_ostream<char>* r144 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g142, cast143);
  void* g145 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r146 = std__ostream__operator___std__ostream_____(r144, g145);
  goto bb119;
bb33:
  char** t147 = argv137;
  int c148 = 1;
  char** ptr149 = t147 + c148;
  char* t150 = *ptr149;
  int c151 = 8;
  std__basic_ifstream_char__std__char_traits_char_____basic_ifstream(&inFile121, t150, c151);
  goto bb34;
bb34:
