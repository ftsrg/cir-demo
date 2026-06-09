char __const_main_str[24] = "This is a sample string";
extern char* strchr(char* p0, int p1);
int main();

// function: main
int main() {
bb0:
  int __retval1;
  char str2[24];
  char* pch3;
  int c4 = 0;
  __retval1 = c4;
  // array copy
  __builtin_memcpy(str2, __const_main_str, (unsigned long)24 * sizeof(__const_main_str[0]));
  char* cast5 = (char*)&(str2);
  int c6 = 115;
  char* r7 = strchr(cast5, c6);
  pch3 = r7;
    while (1) {
      char* t8 = pch3;
      char* c9 = ((void*)0);
      _Bool c10 = ((t8 != c9)) ? 1 : 0;
      if (!c10) break;
        char* t11 = pch3;
        int c12 = 1;
        char* ptr13 = &(t11)[c12];
        int c14 = 115;
        char* r15 = strchr(ptr13, c14);
        pch3 = r15;
    }
  int c16 = 0;
  __retval1 = c16;
  int t17 = __retval1;
  return t17;
}

