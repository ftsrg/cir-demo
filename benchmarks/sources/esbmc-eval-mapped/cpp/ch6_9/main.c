extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct Time { int __field0; int __field1; int __field2; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[37] = "Result of setting all valid values:\n";
char _str_1[9] = "  Hour: ";
char _str_2[11] = "  Minute: ";
char _str_3[11] = "  Second: ";
char _str_4[47] = "\n\nResult of attempting to set invalid hour and";
char _str_5[18] = " second:\n  Hour: ";
char _str_6[3] = "\n\n";
char _str_7[21] = "Incrementing minute ";
char _str_8[21] = " times:\nStart time: ";
char _str_9[14] = "\nminute + 1: ";
extern void Time__Time(struct Time* p0, int p1, int p2, int p3);
extern void Time__setHour(struct Time* p0, int p1);
extern void Time__setMinute(struct Time* p0, int p1);
extern void Time__setSecond(struct Time* p0, int p1);
extern int Time__getHour(struct Time* p0);
extern int Time__getMinute(struct Time* p0);
extern int Time__getSecond(struct Time* p0);
extern void Time__setTime(struct Time* p0, int p1, int p2, int p3);
extern void Time__printStandard(struct Time* p0);
void incrementMinutes(struct Time* p0, int p1);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z16incrementMinutesR4Timei
void incrementMinutes(struct Time* v0, int v1) {
bb2:
  struct Time* tt3;
  int count4;
  tt3 = v0;
  count4 = v1;
  char* cast5 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std6;
  __VERIFIER_nondet_memory(&std6, sizeof(std6));
  int t7 = count4;
  struct std__basic_ostream_char__std__char_traits_char__* std8;
  __VERIFIER_nondet_memory(&std8, sizeof(std8));
  char* cast9 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* std10;
  __VERIFIER_nondet_memory(&std10, sizeof(std10));
  struct Time* t11 = tt3;
  Time__printStandard(t11);
    int i12;
    int c13 = 0;
    i12 = c13;
    while (1) {
      int t15 = i12;
      int t16 = count4;
      _Bool c17 = ((t15 < t16)) ? 1 : 0;
      if (!c17) break;
        struct Time* t18 = tt3;
        struct Time* t19 = tt3;
        int r20 = Time__getMinute(t19);
        int c21 = 1;
        int b22 = r20 + c21;
        int c23 = 60;
        int b24 = b22 % c23;
        Time__setMinute(t18, b24);
          struct Time* t25 = tt3;
          int r26 = Time__getMinute(t25);
          int c27 = 0;
          _Bool c28 = ((r26 == c27)) ? 1 : 0;
          if (c28) {
            struct Time* t29 = tt3;
            struct Time* t30 = tt3;
            int r31 = Time__getHour(t30);
            int c32 = 1;
            int b33 = r31 + c32;
            int c34 = 24;
            int b35 = b33 % c34;
            Time__setHour(t29, b35);
          }
        char* cast36 = (char*)&(_str_9);
        struct std__basic_ostream_char__std__char_traits_char__* std37;
        __VERIFIER_nondet_memory(&std37, sizeof(std37));
        struct Time* t38 = tt3;
        Time__printStandard(t38);
    for_step14: ;
      int t39 = i12;
      int u40 = t39 + 1;
      i12 = u40;
    }
  struct std__basic_ostream_char__std__char_traits_char__* std41;
  __VERIFIER_nondet_memory(&std41, sizeof(std41));
  return;
}

// function: main
int main() {
bb42:
  int __retval43;
  struct Time t44;
  int c45 = 0;
  __retval43 = c45;
  int c46 = 0;
  int c47 = 0;
  int c48 = 0;
  Time__Time(&t44, c46, c47, c48);
  int c49 = 17;
  Time__setHour(&t44, c49);
  int c50 = 34;
  Time__setMinute(&t44, c50);
  int c51 = 25;
  Time__setSecond(&t44, c51);
  char* cast52 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std53;
  __VERIFIER_nondet_memory(&std53, sizeof(std53));
  char* cast54 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std55;
  __VERIFIER_nondet_memory(&std55, sizeof(std55));
  int r56 = Time__getHour(&t44);
  struct std__basic_ostream_char__std__char_traits_char__* std57;
  __VERIFIER_nondet_memory(&std57, sizeof(std57));
  char* cast58 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std59;
  __VERIFIER_nondet_memory(&std59, sizeof(std59));
  int r60 = Time__getMinute(&t44);
  struct std__basic_ostream_char__std__char_traits_char__* std61;
  __VERIFIER_nondet_memory(&std61, sizeof(std61));
  char* cast62 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std63;
  __VERIFIER_nondet_memory(&std63, sizeof(std63));
  int r64 = Time__getSecond(&t44);
  struct std__basic_ostream_char__std__char_traits_char__* std65;
  __VERIFIER_nondet_memory(&std65, sizeof(std65));
  int c66 = 234;
  Time__setHour(&t44, c66);
  int c67 = 43;
  Time__setMinute(&t44, c67);
  int c68 = 6373;
  Time__setSecond(&t44, c68);
  char* cast69 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std70;
  __VERIFIER_nondet_memory(&std70, sizeof(std70));
  char* cast71 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std72;
  __VERIFIER_nondet_memory(&std72, sizeof(std72));
  int r73 = Time__getHour(&t44);
  struct std__basic_ostream_char__std__char_traits_char__* std74;
  __VERIFIER_nondet_memory(&std74, sizeof(std74));
  char* cast75 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std76;
  __VERIFIER_nondet_memory(&std76, sizeof(std76));
  int r77 = Time__getMinute(&t44);
  struct std__basic_ostream_char__std__char_traits_char__* std78;
  __VERIFIER_nondet_memory(&std78, sizeof(std78));
  char* cast79 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std80;
  __VERIFIER_nondet_memory(&std80, sizeof(std80));
  int r81 = Time__getSecond(&t44);
  struct std__basic_ostream_char__std__char_traits_char__* std82;
  __VERIFIER_nondet_memory(&std82, sizeof(std82));
  char* cast83 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std84;
  __VERIFIER_nondet_memory(&std84, sizeof(std84));
  int c85 = 11;
  int c86 = 58;
  int c87 = 0;
  Time__setTime(&t44, c85, c86, c87);
  int c88 = 3;
  incrementMinutes(&t44, c88);
  int c89 = 0;
  __retval43 = c89;
  int t90 = __retval43;
  return t90;
}

