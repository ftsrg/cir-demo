// Struct definitions (auto-parsed)
struct std::_Setw { int _M_n; };
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

char _str[2] = "0";
char _str_1[85] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_8/main.cpp";
char _str_2[24] = "void signalHandler(int)";
char _str_3[20] = "\\0AInterrupt signal (";
char _str_4[13] = ") received.\\0A";
char _str_5[46] = "Do you wish to continue (1 = yes or 2 = no)? ";
struct std::basic_istream<char> _ZSt3cin;
char _str_6[22] = "(1 = yes or 2 = no)? ";
struct std::basic_ostream<char> _ZSt4cout;
// function: signal
void* signal(int, void*);

// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSirsERi
struct std::basic_istream<char>* std__istream__operator__(struct std::basic_istream<char>*, int*);

// function: exit
void exit(int);

// function: _Z13signalHandleri
void signalHandler(int v0) {
  _Bool v1;
  _Bool v2;
bb3:
  int signalValue21;
  int response22;
  signalValue21 = v0;
  char* cast23 = (char*)_str;
