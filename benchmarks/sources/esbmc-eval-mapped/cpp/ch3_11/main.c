extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[10] = "Point is ";
char _str_1[12] = "Player wins";
char _str_2[13] = "Player loses";
char _str_3[15] = "Player rolled ";
char _str_4[4] = " + ";
char _str_5[4] = " = ";
extern void srand(unsigned int p0);
extern long time(long* p0);
extern int rand();
int rollDice();
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z8rollDicev
int rollDice() {
bb0:
  int __retval1;
  int die12;
  int die23;
  int workSum4;
  int c5 = 1;
  int r6 = rand();
  int c7 = 6;
  int b8 = r6 % c7;
  int b9 = c5 + b8;
  die12 = b9;
  int c10 = 1;
  int r11 = rand();
  int c12 = 6;
  int b13 = r11 % c12;
  int b14 = c10 + b13;
  die23 = b14;
  int t15 = die12;
  int t16 = die23;
  int b17 = t15 + t16;
  workSum4 = b17;
  char* cast18 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
  int t20 = die12;
  struct std__basic_ostream_char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  char* cast22 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  int t24 = die23;
  struct std__basic_ostream_char__std__char_traits_char__* std25;
  __VERIFIER_nondet_memory(&std25, sizeof(std25));
  char* cast26 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std27;
  __VERIFIER_nondet_memory(&std27, sizeof(std27));
  int t28 = workSum4;
  struct std__basic_ostream_char__std__char_traits_char__* std29;
  __VERIFIER_nondet_memory(&std29, sizeof(std29));
  struct std__basic_ostream_char__std__char_traits_char__* std30;
  __VERIFIER_nondet_memory(&std30, sizeof(std30));
  int t31 = workSum4;
  __retval1 = t31;
  int t32 = __retval1;
  return t32;
}

// function: main
int main() {
bb33:
  int __retval34;
  int sum35;
  int myPoint36;
  unsigned int gameStatus37;
  int c38 = 0;
  __retval34 = c38;
  long* c39 = ((void*)0);
  long r40 = time(c39);
  unsigned int cast41 = (unsigned int)r40;
  srand(cast41);
  int r42 = rollDice();
  sum35 = r42;
    int t43 = sum35;
    switch (t43) {
    case 7:
    case 11:
      unsigned int c44 = 1;
      gameStatus37 = c44;
      break;
    case 2:
    case 3:
    case 12:
      unsigned int c45 = 2;
      gameStatus37 = c45;
      break;
    default:
      unsigned int c46 = 0;
      gameStatus37 = c46;
      int t47 = sum35;
      myPoint36 = t47;
      char* cast48 = (char*)&(_str);
      struct std__basic_ostream_char__std__char_traits_char__* std49;
      __VERIFIER_nondet_memory(&std49, sizeof(std49));
      int t50 = myPoint36;
      struct std__basic_ostream_char__std__char_traits_char__* std51;
      __VERIFIER_nondet_memory(&std51, sizeof(std51));
      struct std__basic_ostream_char__std__char_traits_char__* std52;
      __VERIFIER_nondet_memory(&std52, sizeof(std52));
      break;
    }
    while (1) {
      unsigned int t53 = gameStatus37;
      int cast54 = (int)t53;
      int c55 = 0;
      _Bool c56 = ((cast54 == c55)) ? 1 : 0;
      if (!c56) break;
        int r57 = rollDice();
        sum35 = r57;
          int t58 = sum35;
          int t59 = myPoint36;
          _Bool c60 = ((t58 == t59)) ? 1 : 0;
          if (c60) {
            unsigned int c61 = 1;
            gameStatus37 = c61;
          } else {
              int t62 = sum35;
              int c63 = 7;
              _Bool c64 = ((t62 == c63)) ? 1 : 0;
              if (c64) {
                unsigned int c65 = 2;
                gameStatus37 = c65;
              }
          }
    }
    unsigned int t66 = gameStatus37;
    int cast67 = (int)t66;
    int c68 = 1;
    _Bool c69 = ((cast67 == c68)) ? 1 : 0;
    if (c69) {
      char* cast70 = (char*)&(_str_1);
      struct std__basic_ostream_char__std__char_traits_char__* std71;
      __VERIFIER_nondet_memory(&std71, sizeof(std71));
      struct std__basic_ostream_char__std__char_traits_char__* std72;
      __VERIFIER_nondet_memory(&std72, sizeof(std72));
    } else {
      char* cast73 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* std74;
      __VERIFIER_nondet_memory(&std74, sizeof(std74));
      struct std__basic_ostream_char__std__char_traits_char__* std75;
      __VERIFIER_nondet_memory(&std75, sizeof(std75));
    }
  int c76 = 0;
  __retval34 = c76;
  int t77 = __retval34;
  return t77;
}

