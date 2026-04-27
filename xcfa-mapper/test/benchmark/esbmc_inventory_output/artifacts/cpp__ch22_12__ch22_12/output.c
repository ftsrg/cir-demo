char _str[8] = "a and b";
char _str_1[86] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_12/main.cpp";
char _str_2[11] = "int main()";
char _str_3[13] = "(a and b)==0";
char _str_4[7] = "a or b";
char _str_5[12] = "(a or b)==0";
char _str_6[11] = "a not_eq b";
char _str_7[16] = "(a not_eq b)==0";
char _str_8[11] = "a bitand b";
char _str_9[16] = "(a bitand b)==0";
char _str_10[10] = "a bitor b";
char _str_11[15] = "(a bitor b)==0";
char _str_12[8] = "compl a";
char _str_13[12] = "(compl a)<0";
char _str_14[8] = "a xor b";
char _str_15[13] = "(a xor b)==0";
char _str_16[11] = "a and_eq b";
char _str_17[16] = "(a and_eq b)==0";
char _str_18[10] = "a or_eq b";
char _str_19[15] = "(a or_eq b)==0";
char _str_20[11] = "a xor_eq b";
char _str_21[16] = "(a xor_eq b)==0";
// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: main
int main() {
  _Bool v0;
  _Bool v1;
  _Bool v2;
  _Bool v3;
  _Bool v4;
  _Bool v5;
  _Bool v6;
  _Bool v7;
bb8:
  int __retval93;
  int a94;
  int b95;
  int c96 = 2;
  a94 = c96;
  int c97 = 3;
  b95 = c97;
  int t98 = a94;
  _Bool cast99 = (_Bool)t98;
  if (cast99) goto bb9; else goto bb13;
bb9:
  int t100 = b95;
  _Bool cast101 = (_Bool)t100;
  if (cast101) goto bb10; else goto bb11;
bb10:
  _Bool c102 = 1;
  v0 = c102;
  goto bb12;
bb11:
  _Bool c103 = 0;
  v0 = c103;
  goto bb12;
bb12:
  v1 = v0;
  goto bb14;
bb13:
  _Bool c104 = 0;
  v1 = c104;
  goto bb14;
bb14:
  if (v1) goto bb15; else goto bb16;
bb15:
  int c105 = 0;
  goto bb17;
bb16:
  char* cast106 = (char*)_str;
