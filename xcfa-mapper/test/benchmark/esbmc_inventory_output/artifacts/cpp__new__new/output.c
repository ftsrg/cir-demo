char _str[5] = "test";
char _str_1[24] = "strcmp(first,\\22test\\22)==0";
char _str_2[82] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/new/main.cpp";
char _str_3[11] = "int main()";
// function: strcpy
char* strcpy(char*, char*);

// function: strlen
unsigned long long strlen(char*);

// function: _Znam
void* operator_new__(unsigned long long);

// function: strcmp
int strcmp(char*, char*);

// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: main
int main() {
bb0:
  int __retval4;
  int first5[10];
  char* firstName6;
  char* cast7 = (char*)first5;
  char* cast8 = (char*)_str;
  char* r9 = strcpy(cast7, cast8);
  char* cast10 = (char*)first5;
  unsigned long long r11 = strlen(cast10);
  int c12 = 1;
  unsigned long long cast13 = (unsigned long long)c12;
  unsigned long long b14 = r11 + cast13;
  void* r15 = operator_new__(b14);
  char* cast16 = (char*)r15;
  firstName6 = cast16;
  char* t17 = firstName6;
  char* cast18 = (char*)first5;
  char* r19 = strcpy(t17, cast18);
  char* cast20 = (char*)first5;
  char* cast21 = (char*)_str;
  int r22 = strcmp(cast20, cast21);
  int c23 = 0;
  _Bool c24 = (r22 == c23) ? 1 : 0;
  if (c24) goto bb1; else goto bb2;
bb1:
  int c25 = 0;
  goto bb3;
bb2:
  char* cast26 = (char*)_str_1;
