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
struct __va_list_tag { unsigned int __field0; unsigned int __field1; void* __field2; void* __field3; };
struct std___Setprecision { int _M_n; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base10floatfieldE_const __attribute__((aligned(4))) = 260;
int _ZNSt8ios_base5fixedE_const __attribute__((aligned(4))) = 4;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[11] = "double1 = ";
char _str_1[12] = "\ndouble2 = ";
char _str_2[12] = "\ndouble3 = ";
char _str_3[12] = "\ndouble4 = ";
char _str_4[40] = "\nThe average of double1 and double2 is ";
char _str_5[50] = "\nThe average of double1, double2, and double3 is ";
char _str_6[42] = "\nThe average of double1, double2, double3";
char _str_7[17] = " and double4 is ";
double average(int p0, ...);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z7averageiz
double average(int v0, ...) {
bb1:
  int count2;
  double __retval3;
  double total4;
  struct __va_list_tag list5[1];
  count2 = v0;
  int c6 = 0;
  double cast7 = (double)c6;
  total4 = cast7;
  struct __va_list_tag* cast8 = (struct __va_list_tag*)&(list5);
  __builtin_va_start(*((__builtin_va_list *)(cast8)), v0);
    int i9;
    int c10 = 1;
    i9 = c10;
    while (1) {
      int t12 = i9;
      int t13 = count2;
      _Bool c14 = ((t12 <= t13)) ? 1 : 0;
      if (!c14) break;
      struct __va_list_tag* cast15 = (struct __va_list_tag*)&(list5);
      double va16 = __builtin_va_arg(*((__builtin_va_list *)(cast15)), double);
      double t17 = total4;
      double b18 = t17 + va16;
      total4 = b18;
    for_step11: ;
      int t19 = i9;
      int u20 = t19 + 1;
      i9 = u20;
    }
  struct __va_list_tag* cast21 = (struct __va_list_tag*)&(list5);
  __builtin_va_end(*((__builtin_va_list *)(cast21)));
  double t22 = total4;
  int t23 = count2;
  double cast24 = (double)t23;
  double b25 = t22 / cast24;
  __retval3 = b25;
  double t26 = __retval3;
  return t26;
}

// function: main
int main() {
bb27:
  int __retval28;
  double double129;
  double double230;
  double double331;
  double double432;
  struct std___Setprecision agg_tmp033;
  struct std___Setprecision agg_tmp134;
  int c35 = 0;
  __retval28 = c35;
  double c36 = 0x1.2cp5;
  double129 = c36;
  double c37 = 0x1.68p4;
  double230 = c37;
  double c38 = 0x1.b333333333333p0;
  double331 = c38;
  double c39 = 0x1.4666666666666p3;
  double432 = c39;
  struct std__basic_ostream_char__std__char_traits_char__* std40;
  __VERIFIER_nondet_memory(&std40, sizeof(std40));
  int c41 = 1;
  struct std___Setprecision std42;
  __VERIFIER_nondet_memory(&std42, sizeof(std42));
  agg_tmp033 = std42;
  struct std___Setprecision t43 = agg_tmp033;
  struct std__basic_ostream_char__std__char_traits_char__* std44;
  __VERIFIER_nondet_memory(&std44, sizeof(std44));
  char* cast45 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std46;
  __VERIFIER_nondet_memory(&std46, sizeof(std46));
  double t47 = double129;
  struct std__basic_ostream_char__std__char_traits_char__* std48;
  __VERIFIER_nondet_memory(&std48, sizeof(std48));
  char* cast49 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std50;
  __VERIFIER_nondet_memory(&std50, sizeof(std50));
  double t51 = double230;
  struct std__basic_ostream_char__std__char_traits_char__* std52;
  __VERIFIER_nondet_memory(&std52, sizeof(std52));
  char* cast53 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std54;
  __VERIFIER_nondet_memory(&std54, sizeof(std54));
  double t55 = double331;
  struct std__basic_ostream_char__std__char_traits_char__* std56;
  __VERIFIER_nondet_memory(&std56, sizeof(std56));
  char* cast57 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std58;
  __VERIFIER_nondet_memory(&std58, sizeof(std58));
  double t59 = double432;
  struct std__basic_ostream_char__std__char_traits_char__* std60;
  __VERIFIER_nondet_memory(&std60, sizeof(std60));
  struct std__basic_ostream_char__std__char_traits_char__* std61;
  __VERIFIER_nondet_memory(&std61, sizeof(std61));
  int c62 = 3;
  struct std___Setprecision std63;
  __VERIFIER_nondet_memory(&std63, sizeof(std63));
  agg_tmp134 = std63;
  struct std___Setprecision t64 = agg_tmp134;
  struct std__basic_ostream_char__std__char_traits_char__* std65;
  __VERIFIER_nondet_memory(&std65, sizeof(std65));
  char* cast66 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std67;
  __VERIFIER_nondet_memory(&std67, sizeof(std67));
  int c68 = 2;
  double t69 = double129;
  double t70 = double230;
  double r71 = average(c68, t69, t70);
  struct std__basic_ostream_char__std__char_traits_char__* std72;
  __VERIFIER_nondet_memory(&std72, sizeof(std72));
  char* cast73 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std74;
  __VERIFIER_nondet_memory(&std74, sizeof(std74));
  int c75 = 3;
  double t76 = double129;
  double t77 = double230;
  double t78 = double331;
  double r79 = average(c75, t76, t77, t78);
  struct std__basic_ostream_char__std__char_traits_char__* std80;
  __VERIFIER_nondet_memory(&std80, sizeof(std80));
  char* cast81 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std82;
  __VERIFIER_nondet_memory(&std82, sizeof(std82));
  char* cast83 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std84;
  __VERIFIER_nondet_memory(&std84, sizeof(std84));
  int c85 = 4;
  double t86 = double129;
  double t87 = double230;
  double t88 = double331;
  double t89 = double432;
  double r90 = average(c85, t86, t87, t88, t89);
  struct std__basic_ostream_char__std__char_traits_char__* std91;
  __VERIFIER_nondet_memory(&std91, sizeof(std91));
  struct std__basic_ostream_char__std__char_traits_char__* std92;
  __VERIFIER_nondet_memory(&std92, sizeof(std92));
  int c93 = 0;
  __retval28 = c93;
  int t94 = __retval28;
  return t94;
}

