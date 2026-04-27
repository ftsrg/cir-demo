// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cerr;
char _str[28] = "customNewHandler was called";
struct std::basic_ostream<char> _ZSt4cout;
char _str_1[35] = "Allocated 5000000 doubles in ptr[ ";
char _str_2[4] = " ]\\0A";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: abort
void abort();

// function: _Z16customNewHandlerv
void customNewHandler() {
bb0:
  struct std::basic_ostream<char>* g1 = &_ZSt4cerr;
  char* cast2 = (char*)_str;
  struct std::basic_ostream<char>* r3 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g1, cast2);
  abort();
  return;
}

// function: _ZSt15set_new_handlerPFvvE
void* std__set_new_handler_void____(void*);

// function: _Znam
void* operator_new__(unsigned long long);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: main
int main() {
bb4:
  int i13;
  int __retval14;
  double ptr15[5];
  void* g16 = &_Z16customNewHandlerv;
  void* r17 = std__set_new_handler_void____(g16);
  goto bb5;
bb5:
  int c18 = 0;
  i13 = c18;
  goto bb6;
bb6:
  int t19 = i13;
  int c20 = 5;
  _Bool c21 = (t19 < c20) ? 1 : 0;
  if (c21) goto bb7; else goto bb11;
bb7:
  goto bb8;
bb8:
  unsigned long long c22 = 5000000000000;
  unsigned long long c23 = 40000000000000;
  void* r24 = operator_new__(c23);
  double* cast25 = (double*)r24;
  int t26 = i13;
  ptr15[t26] = cast25;
  struct std::basic_ostream<char>* g27 = &_ZSt4cout;
  char* cast28 = (char*)_str_1;
  struct std::basic_ostream<char>* r29 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g27, cast28);
  int t30 = i13;
  struct std::basic_ostream<char>* r31 = std__ostream__operator__(r29, t30);
  char* cast32 = (char*)_str_2;
  struct std::basic_ostream<char>* r33 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r31, cast32);
  goto bb9;
bb9:
  goto bb10;
bb10:
  int t34 = i13;
  int u35 = ++t34;
  i13 = u35;
  goto bb6;
bb11:
  goto bb12;
bb12:
  int c36 = 0;
  __retval14 = c36;
  int t37 = __retval14;
  return t37;
}

