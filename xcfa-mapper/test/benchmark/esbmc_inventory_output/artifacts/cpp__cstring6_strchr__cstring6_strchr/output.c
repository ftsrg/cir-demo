char __const_main_str[24] = "This is a sample string";
// function: strchr
char* strchr(char*, int);

// function: main
int main() {
bb0:
  int __retval8;
  int str9[24];
  char* pch10;
  // array copy
  for (int i = 0; i < 24; ++i) { __const_main_str[i] = str9[i]; }
  char* cast11 = (char*)str9;
  char c12 = 115;
  int cast13 = (int)c12;
  char* r14 = strchr(cast11, cast13);
  pch10 = r14;
  goto bb1;
bb1:
  goto bb2;
bb2:
  char* t15 = pch10;
  char* c16 = NULL;
  _Bool c17 = (t15 != c16) ? 1 : 0;
  if (c17) goto bb3; else goto bb6;
bb3:
  goto bb4;
bb4:
  char* t18 = pch10;
  int c19 = 1;
  char* ptr20 = t18 + c19;
  char c21 = 115;
  int cast22 = (int)c21;
  char* r23 = strchr(ptr20, cast22);
  pch10 = r23;
  goto bb5;
bb5:
  goto bb2;
bb6:
  goto bb7;
bb7:
  int c24 = 0;
  __retval8 = c24;
  int t25 = __retval8;
  return t25;
}

