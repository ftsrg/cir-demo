// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[9] = "Welcome ";
char _str_1[9] = "to C++!\\0A";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: main
int main() {
bb0:
  int __retval1;
  struct std::basic_ostream<char>* g2 = &_ZSt4cout;
  char* cast3 = (char*)_str;
  struct std::basic_ostream<char>* r4 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g2, cast3);
  struct std::basic_ostream<char>* g5 = &_ZSt4cout;
  char* cast6 = (char*)_str_1;
  struct std::basic_ostream<char>* r7 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g5, cast6);
  int c8 = 0;
  __retval1 = c8;
  int t9 = __retval1;
  return t9;
}

