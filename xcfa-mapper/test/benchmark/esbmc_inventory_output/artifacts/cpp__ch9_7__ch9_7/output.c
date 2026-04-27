// Struct definitions (auto-parsed)
struct Building { unsigned char __placeholder; };
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[17];
struct std::basic_istream<char> _ZSt3cin;
char _str_1[35] = "*** ELEVATOR SIMULATION BEGINS ***";
char _str_2[33] = "*** ELEVATOR SIMULATION ENDS ***";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSirsERi
struct std::basic_istream<char>* std__istream__operator__(struct std::basic_istream<char>*, int*);

// function: _ZNSi6ignoreEv
struct std::basic_istream<char>* std__istream__ignore(struct std::basic_istream<char>*);

// function: _ZN8BuildingC1Ev
void Building__Building(struct Building*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZN8Building13runSimulationEi
void Building__runSimulation(struct Building*, int);

// function: _ZN8BuildingD1Ev
void Building___Building(struct Building*);

// function: main
int main() {
  void* v0;
  unsigned int v1;
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
bb14:
  int __retval50;
  int duration51;
  struct Building building52;
  int tmp.try.call.res53[8];
  int tmp.try.call.res54[8];
  int tmp.try.call.res55[8];
  int tmp.try.call.res56[8];
  int tmp.try.call.res57[8];
  int tmp.try.call.res58[8];
  struct std::basic_ostream<char>* g59 = &_ZSt4cout;
  char* cast60 = (char*)_str;
  struct std::basic_ostream<char>* r61 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g59, cast60);
  struct std::basic_istream<char>* g62 = &_ZSt3cin;
  struct std::basic_istream<char>* r63 = std__istream__operator__(g62, &duration51);
  struct std::basic_istream<char>* g64 = &_ZSt3cin;
  struct std::basic_istream<char>* r65 = std__istream__ignore(g64);
  Building__Building(&building52);
  struct std::basic_ostream<char>* g66 = &_ZSt4cout;
  void* g67 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  goto bb15;
bb15:
