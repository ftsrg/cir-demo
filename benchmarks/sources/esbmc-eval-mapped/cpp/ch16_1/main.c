extern void abort(void);
// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct tm { int __field0; int __field1; int __field2; int __field3; int __field4; int __field5; int __field6; int __field7; int __field8; long __field9; char* __field10; };
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[26] = "Content-type: text/html\n\n";
char _str_1[24] = "<?xml version = \"1.0\"?>";
char _str_2[46] = "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 ";
char _str_3[47] = "Transitional//EN\" \"http://www.w3.org/TR/xhtml1";
char _str_4[31] = "/DTD/xhtml1-transitional.dtd\">";
char _str_5[46] = "<html xmlns = \"http://www.w3.org/1999/xhtml\">";
char _str_6[50] = "<head><title>Current date and time</title></head>";
char _str_7[10] = "<body><p>";
char _str_8[19] = "</p></body></html>";
extern long time(long* p0);
extern char* asctime(struct tm* p0);
extern struct tm* localtime(long* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  long currentTime2;
  int c3 = 0;
  __retval1 = c3;
  char* cast4 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std5;
  __VERIFIER_nondet_memory(&std5, sizeof(std5));
  char* cast6 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std7;
  __VERIFIER_nondet_memory(&std7, sizeof(std7));
  char* cast8 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std9;
  __VERIFIER_nondet_memory(&std9, sizeof(std9));
  char* cast10 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  char* cast12 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std13;
  __VERIFIER_nondet_memory(&std13, sizeof(std13));
  long r14 = time(&currentTime2);
  char* cast15 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std16;
  __VERIFIER_nondet_memory(&std16, sizeof(std16));
  char* cast17 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std18;
  __VERIFIER_nondet_memory(&std18, sizeof(std18));
  char* cast19 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std20;
  __VERIFIER_nondet_memory(&std20, sizeof(std20));
  struct tm* r21 = localtime(&currentTime2);
  char* r22 = asctime(r21);
  struct std__basic_ostream_char__std__char_traits_char__* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  char* cast24 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* std25;
  __VERIFIER_nondet_memory(&std25, sizeof(std25));
  int c26 = 0;
  __retval1 = c26;
  int t27 = __retval1;
  return t27;
}

