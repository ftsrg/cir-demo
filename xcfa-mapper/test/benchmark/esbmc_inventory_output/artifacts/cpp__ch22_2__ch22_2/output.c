// Struct definitions (auto-parsed)
struct Array { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[30];
char _str_1[3] = "\\0A\\0A";
// function: _ZN5ArrayC1Ei
void Array__Array(struct Array*, int);

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _ZlsRSoRK5Array
struct std::basic_ostream<char>* operator__(struct std::basic_ostream<char>*, struct Array*);

// function: _Z11outputArrayRK5Array
void outputArray(struct Array* v0) {
bb1:
  struct Array* arrayToOutput2;
  arrayToOutput2 = v0;
  struct std::basic_ostream<char>* g3 = &_ZSt4cout;
  char* cast4 = (char*)_str;
  struct std::basic_ostream<char>* r5 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g3, cast4);
  struct Array* t6 = arrayToOutput2;
  struct std::basic_ostream<char>* r7 = operator__(r5, t6);
  char* cast8 = (char*)_str_1;
  struct std::basic_ostream<char>* r9 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r7, cast8);
  return;
}

// function: _ZN5ArrayD1Ev
void Array___Array(struct Array*);

// function: main
int main() {
  void* v10;
  unsigned int v11;
  void* v12;
  unsigned int v13;
  void* v14;
  unsigned int v15;
bb16:
  struct Array ref.tmp034;
  int __retval35;
  struct Array integers136;
  int c37 = 7;
  Array__Array(&integers136, c37);
  goto bb17;
bb17:
