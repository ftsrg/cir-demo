// Struct definitions (auto-parsed)
struct std::basic_ios<char> { unsigned char __placeholder; };
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ofstream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

char _str[12] = "clients.dat";
struct std::basic_ostream<char> _ZSt4cerr;
char _str_1[25] = "File could not be opened";
struct std::basic_ostream<char> _ZSt4cout;
char _str_2[38] = "Enter the account, name, and balance.";
char _str_3[35] = "Enter end-of-file to end input.\\0A? ";
struct std::basic_istream<char> _ZSt3cin;
char _str_4[3] = "? ";
// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode
void std__basic_ofstream_char__std__char_traits_char_____basic_ofstream(struct std::basic_ofstream<char>*, char*, int);

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEEntEv
_Bool std__basic_ios_char__std__char_traits_char_____operator____const(struct std::basic_ios<char>*);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: exit
void exit(int);

// function: _ZSt17__istream_extractRSiPcl
void std____istream_extract(struct std::basic_istream<char>*, char*, long long);

// function: _ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_PS3_
struct std::basic_istream<char>* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___(struct std::basic_istream<char>* v0, char* v1) {
bb2:
  long long __n5;
  int __in6[8];
  char* __s7;
  int __retval8[8];
  __in6 = v0;
  __s7 = v1;
  goto bb3;
bb3:
  long long c9 = 9223372036854775807;
  __n5 = c9;
  unsigned long long c10 = 1;
  long long t11 = __n5;
  unsigned long long cast12 = (unsigned long long)t11;
  unsigned long long b13 = cast12 / c10;
  long long cast14 = (long long)b13;
  __n5 = cast14;
  struct std::basic_istream<char>* t15 = __in6;
  char* t16 = __s7;
  long long t17 = __n5;
  std____istream_extract(t15, t16, t17);
  goto bb4;
bb4:
  struct std::basic_istream<char>* t18 = __in6;
  __retval8 = t18;
  struct std::basic_istream<char>* t19 = __retval8;
  return t19;
}

// function: _ZNSirsERi
struct std::basic_istream<char>* _ZNSirsERi(struct std::basic_istream<char>*, int*);

// function: _ZNSirsERd
struct std::basic_istream<char>* _ZNSirsERd(struct std::basic_istream<char>*, double*);

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEEcvbEv
_Bool std__basic_ios_char__std__char_traits_char_____operator_bool___const(struct std::basic_ios<char>*);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: _ZNSolsEi
struct std::basic_ostream<char>* _ZNSolsEi(struct std::basic_ostream<char>*, int);

// function: _ZNSolsEd
struct std::basic_ostream<char>* _ZNSolsEd(struct std::basic_ostream<char>*, double);

// function: _ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev
void std__basic_ofstream_char__std__char_traits_char______basic_ofstream(struct std::basic_ofstream<char>*);

// function: main
int main() {
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
  void* v30;
  unsigned int v31;
  void* v32;
  unsigned int v33;
  void* v34;
  unsigned int v35;
  void* v36;
  unsigned int v37;
  void* v38;
  unsigned int v39;
  void* v40;
  unsigned int v41;
  void* v42;
  unsigned int v43;
  void* v44;
  unsigned int v45;
  void* v46;
  unsigned int v47;
  void* v48;
  unsigned int v49;
  void* v50;
  unsigned int v51;
  void* v52;
  unsigned int v53;
bb54:
  _Bool tmp.try.call.res151;
  int tmp.try.call.res152[8];
  int tmp.try.call.res153[8];
  int tmp.try.call.res154[8];
  int tmp.try.call.res155[8];
  int tmp.try.call.res156[8];
  _Bool tmp.try.call.res157;
  int tmp.try.call.res158[8];
  int tmp.try.call.res159[8];
  int tmp.try.call.res160[8];
  int tmp.try.call.res161[8];
  int tmp.try.call.res162[8];
  int tmp.try.call.res163[8];
  int tmp.try.call.res164[8];
  int __retval165;
  struct std::basic_ofstream<char> outClientFile166;
  int tmp.try.call.res167[8];
  int tmp.try.call.res168[8];
  int tmp.try.call.res169[8];
  int account170;
  int name171[30];
  double balance172;
  char* cast173 = (char*)_str;
  int c174 = 16;
  std__basic_ofstream_char__std__char_traits_char_____basic_ofstream(&outClientFile166, cast173, c174);
  goto bb55;
bb55:
