// Struct definitions (auto-parsed)
struct Employee { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[45] = "Number of employees before instantiation is ";
char _str_1[6] = "Susan";
char _str_2[6] = "Baker";
char _str_3[7] = "Robert";
char _str_4[6] = "Jones";
char _str_5[44] = "Number of employees after instantiation is ";
char _str_6[15];
char _str_7[2] = " ";
char _str_8[14];
char _str_9[3] = "\\0A\\0A";
char _str_10[39] = "Number of employees after deletion is ";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZN8Employee8getCountEv
int Employee__getCount();

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _Znwm
void* operator_new(unsigned long long);

// function: _ZN8EmployeeC1EPKcS1_
void Employee__Employee(struct Employee*, char*, char*);

// function: _ZdlPvm
void operator_delete(void*, unsigned long long);

// function: _ZNK8Employee12getFirstNameEv
char* Employee__getFirstName___const(struct Employee*);

// function: _ZNK8Employee11getLastNameEv
char* Employee__getLastName___const(struct Employee*);

// function: _ZN8EmployeeD1Ev
void Employee___Employee(struct Employee*);

// function: main
int main() {
  void* v0;
  unsigned int v1;
  void* v2;
  unsigned int v3;
bb4:
  int __retval15;
  struct Employee* e1Ptr16;
  struct Employee* e2Ptr17;
  struct std::basic_ostream<char>* g18 = &_ZSt4cout;
  char* cast19 = (char*)_str;
  struct std::basic_ostream<char>* r20 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g18, cast19);
  int r21 = Employee__getCount();
  struct std::basic_ostream<char>* r22 = std__ostream__operator__(r20, r21);
  void* g23 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r24 = std__ostream__operator___std__ostream_____(r22, g23);
  unsigned long long c25 = 16;
  void* r26 = operator_new(c25);
  struct Employee* cast27 = (struct Employee*)r26;
  char* cast28 = (char*)_str_1;
  char* cast29 = (char*)_str_2;
  goto bb5;
bb5:
