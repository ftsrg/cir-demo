extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct Time { int hour; int minute; int second; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Setfill_char_ { char _M_c; };
struct std___Setw { int _M_n; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[24] = "Dinner will be held at ";
char _str_1[27] = " universal time,\nwhich is ";
char _str_2[17] = " standard time.\n";
char _str_3[28] = "\nTime with invalid values: ";
char _str_4[2] = ":";
char _str_5[4] = " AM";
char _str_6[4] = " PM";
void printUniversal(struct Time* p0);
void printStandard(struct Time* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z14printUniversalRK4Time
void printUniversal(struct Time* v0) {
bb1:
  struct Time* t2;
  struct std___Setfill_char_ agg_tmp03;
  struct std___Setw agg_tmp14;
  struct std___Setw agg_tmp25;
  struct std___Setw agg_tmp36;
  t2 = v0;
  char c7 = 48;
  struct std___Setfill_char_ std8;
  __VERIFIER_nondet_memory(&std8, sizeof(std8));
  agg_tmp03 = std8;
  struct std___Setfill_char_ t9 = agg_tmp03;
  struct std__basic_ostream_char__std__char_traits_char__* std10;
  __VERIFIER_nondet_memory(&std10, sizeof(std10));
  int c11 = 2;
  struct std___Setw std12;
  __VERIFIER_nondet_memory(&std12, sizeof(std12));
  agg_tmp14 = std12;
  struct std___Setw t13 = agg_tmp14;
  struct std__basic_ostream_char__std__char_traits_char__* std14;
  __VERIFIER_nondet_memory(&std14, sizeof(std14));
  struct Time* t15 = t2;
  int t16 = t15->hour;
  struct std__basic_ostream_char__std__char_traits_char__* std17;
  __VERIFIER_nondet_memory(&std17, sizeof(std17));
  char* cast18 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
  int c20 = 2;
  struct std___Setw std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  agg_tmp25 = std21;
  struct std___Setw t22 = agg_tmp25;
  struct std__basic_ostream_char__std__char_traits_char__* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  struct Time* t24 = t2;
  int t25 = t24->minute;
  struct std__basic_ostream_char__std__char_traits_char__* std26;
  __VERIFIER_nondet_memory(&std26, sizeof(std26));
  char* cast27 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std28;
  __VERIFIER_nondet_memory(&std28, sizeof(std28));
  int c29 = 2;
  struct std___Setw std30;
  __VERIFIER_nondet_memory(&std30, sizeof(std30));
  agg_tmp36 = std30;
  struct std___Setw t31 = agg_tmp36;
  struct std__basic_ostream_char__std__char_traits_char__* std32;
  __VERIFIER_nondet_memory(&std32, sizeof(std32));
  struct Time* t33 = t2;
  int t34 = t33->second;
  struct std__basic_ostream_char__std__char_traits_char__* std35;
  __VERIFIER_nondet_memory(&std35, sizeof(std35));
  return;
}

// function: _Z13printStandardRK4Time
void printStandard(struct Time* v36) {
bb37:
  struct Time* t38;
  struct std___Setfill_char_ agg_tmp039;
  struct std___Setw agg_tmp140;
  struct std___Setw agg_tmp241;
  t38 = v36;
  struct Time* t42 = t38;
  int t43 = t42->hour;
  int c44 = 0;
  _Bool c45 = ((t43 == c44)) ? 1 : 0;
  _Bool ternary46;
  if (c45) {
    _Bool c47 = 1;
    ternary46 = (_Bool)c47;
  } else {
    struct Time* t48 = t38;
    int t49 = t48->hour;
    int c50 = 12;
    _Bool c51 = ((t49 == c50)) ? 1 : 0;
    ternary46 = (_Bool)c51;
  }
  int ternary52;
  if (ternary46) {
    int c53 = 12;
    ternary52 = (int)c53;
  } else {
    struct Time* t54 = t38;
    int t55 = t54->hour;
    int c56 = 12;
    int b57 = t55 % c56;
    ternary52 = (int)b57;
  }
  struct std__basic_ostream_char__std__char_traits_char__* std58;
  __VERIFIER_nondet_memory(&std58, sizeof(std58));
  char* cast59 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std60;
  __VERIFIER_nondet_memory(&std60, sizeof(std60));
  char c61 = 48;
  struct std___Setfill_char_ std62;
  __VERIFIER_nondet_memory(&std62, sizeof(std62));
  agg_tmp039 = std62;
  struct std___Setfill_char_ t63 = agg_tmp039;
  struct std__basic_ostream_char__std__char_traits_char__* std64;
  __VERIFIER_nondet_memory(&std64, sizeof(std64));
  int c65 = 2;
  struct std___Setw std66;
  __VERIFIER_nondet_memory(&std66, sizeof(std66));
  agg_tmp140 = std66;
  struct std___Setw t67 = agg_tmp140;
  struct std__basic_ostream_char__std__char_traits_char__* std68;
  __VERIFIER_nondet_memory(&std68, sizeof(std68));
  struct Time* t69 = t38;
  int t70 = t69->minute;
  struct std__basic_ostream_char__std__char_traits_char__* std71;
  __VERIFIER_nondet_memory(&std71, sizeof(std71));
  char* cast72 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std73;
  __VERIFIER_nondet_memory(&std73, sizeof(std73));
  int c74 = 2;
  struct std___Setw std75;
  __VERIFIER_nondet_memory(&std75, sizeof(std75));
  agg_tmp241 = std75;
  struct std___Setw t76 = agg_tmp241;
  struct std__basic_ostream_char__std__char_traits_char__* std77;
  __VERIFIER_nondet_memory(&std77, sizeof(std77));
  struct Time* t78 = t38;
  int t79 = t78->second;
  struct std__basic_ostream_char__std__char_traits_char__* std80;
  __VERIFIER_nondet_memory(&std80, sizeof(std80));
  struct Time* t81 = t38;
  int t82 = t81->hour;
  int c83 = 12;
  _Bool c84 = ((t82 < c83)) ? 1 : 0;
  char* ternary85;
  if (c84) {
    ternary85 = (char*)_str_5;
  } else {
    ternary85 = (char*)_str_6;
  }
  char* cast86 = (char*)ternary85;
  struct std__basic_ostream_char__std__char_traits_char__* std87;
  __VERIFIER_nondet_memory(&std87, sizeof(std87));
  return;
}

// function: main
int main() {
bb88:
  int __retval89;
  struct Time dinnerTime90;
  int c91 = 0;
  __retval89 = c91;
  int c92 = 18;
  dinnerTime90.hour = c92;
  int c93 = 30;
  dinnerTime90.minute = c93;
  int c94 = 0;
  dinnerTime90.second = c94;
  char* cast95 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std96;
  __VERIFIER_nondet_memory(&std96, sizeof(std96));
  printUniversal(&dinnerTime90);
  char* cast97 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std98;
  __VERIFIER_nondet_memory(&std98, sizeof(std98));
  printStandard(&dinnerTime90);
  char* cast99 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std100;
  __VERIFIER_nondet_memory(&std100, sizeof(std100));
  int c101 = 10;
  dinnerTime90.hour = c101;
  int c102 = 73;
  dinnerTime90.minute = c102;
  char* cast103 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std104;
  __VERIFIER_nondet_memory(&std104, sizeof(std104));
  printUniversal(&dinnerTime90);
  struct std__basic_ostream_char__std__char_traits_char__* std105;
  __VERIFIER_nondet_memory(&std105, sizeof(std105));
  int c106 = 0;
  __retval89 = c106;
  int t107 = __retval89;
  return t107;
}

