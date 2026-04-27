// Struct definitions (auto-parsed)
struct std::basic_ios<char> { unsigned char __placeholder; };
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::istream_iterator<int> { struct std::basic_istream<char>* _M_stream; _Bool _M_ok; int _M_value; };
struct std::iterator<std::input_iterator_tag, int, long, const int *, const int &> { unsigned char __placeholder; };
struct std::iterator<std::output_iterator_tag, void, void, void, void> { unsigned char __placeholder; };
struct std::ostream_iterator<int> { struct std::basic_ostream<char>* _M_stream; char* _M_string; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[21];
struct std::basic_istream<char> _ZSt3cin;
char _str_1[13];
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZNSt16istream_iteratorIicSt11char_traitsIcElEC2ERSi
void std__istream_iterator_int__char__std__char_traits_char___long___istream_iterator(struct std::istream_iterator<int>* v0, struct std::basic_istream<char>* v1) {
bb2:
  int this3[8];
  int __s4[8];
  this3 = v0;
  __s4 = v1;
  struct std::istream_iterator<int>* t5 = this3;
