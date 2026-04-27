// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct tm { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[26];
char _str_1[24] = "<?xml version = \\221.0\\22?>";
char _str_2[46] = "<!DOCTYPE html PUBLIC \\22-//W3C//DTD XHTML 1.0 ";
char _str_3[47];
char _str_4[31] = "/DTD/xhtml1-transitional.dtd\\22>";
char _str_5[46];
char _str_6[50] = "<head><title>Current date and time</title></head>";
char _str_7[10] = "<body><p>";
char _str_8[19] = "</p></body></html>";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: time
long long time(long long*);

// function: asctime
char* asctime(struct tm*);

// function: localtime
struct tm* localtime(long long*);

// function: main
int main() {
bb0:
  int __retval1;
  long long currentTime2;
  struct std::basic_ostream<char>* g3 = &_ZSt4cout;
  char* cast4 = (char*)_str;
  struct std::basic_ostream<char>* r5 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g3, cast4);
  struct std::basic_ostream<char>* g6 = &_ZSt4cout;
  char* cast7 = (char*)_str_1;
  struct std::basic_ostream<char>* r8 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g6, cast7);
  char* cast9 = (char*)_str_2;
  struct std::basic_ostream<char>* r10 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r8, cast9);
  char* cast11 = (char*)_str_3;
  struct std::basic_ostream<char>* r12 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r10, cast11);
  char* cast13 = (char*)_str_4;
  struct std::basic_ostream<char>* r14 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r12, cast13);
  long long r15 = time(&currentTime2);
  struct std::basic_ostream<char>* g16 = &_ZSt4cout;
  char* cast17 = (char*)_str_5;
  struct std::basic_ostream<char>* r18 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g16, cast17);
  char* cast19 = (char*)_str_6;
  struct std::basic_ostream<char>* r20 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r18, cast19);
  char* cast21 = (char*)_str_7;
  struct std::basic_ostream<char>* r22 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r20, cast21);
  struct tm* r23 = localtime(&currentTime2);
  char* r24 = asctime(r23);
  struct std::basic_ostream<char>* r25 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r22, r24);
  char* cast26 = (char*)_str_8;
  struct std::basic_ostream<char>* r27 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r25, cast26);
  int c28 = 0;
  __retval1 = c28;
  int t29 = __retval1;
  return t29;
}

