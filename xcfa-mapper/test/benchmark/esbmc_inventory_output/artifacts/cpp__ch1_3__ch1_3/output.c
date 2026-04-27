// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[18] = "Welcome\\0Ato\\0A\\0AC++!\\0A";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: main
int main() {
bb0:
  int __retval1;
  struct std::basic_ostream<char>* g2 = &_ZSt4cout;
  char* cast3 = (char*)_str;
  struct std::basic_ostream<char>* r4 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g2, cast3);
  int c5 = 0;
  __retval1 = c5;
  int t6 = __retval1;
  return t6;
}

