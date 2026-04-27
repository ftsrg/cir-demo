char _ZZ4mainE3src[3] = "ht";
char _str[13] = "dest[1]=='t'";
char _str_1[85] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/memcpy/main.cpp";
char _str_2[11] = "int main()";
// function: _Z6memcpyPvPKvi
void* memcpy(void* v0, void* v1, int v2) {
bb3:
  int i10;
  void* dst11;
  void* src12;
  int n13;
  void* __retval14;
  char* cdst15;
  char* csrc16;
  dst11 = v0;
  src12 = v1;
  n13 = v2;
  void* t17 = dst11;
  char* cast18 = (char*)t17;
  cdst15 = cast18;
  void* t19 = src12;
  char* cast20 = (char*)t19;
  csrc16 = cast20;
  goto bb4;
bb4:
  int c21 = 0;
  i10 = c21;
  goto bb5;
bb5:
  int t22 = i10;
  int t23 = n13;
  _Bool c24 = (t22 < t23) ? 1 : 0;
  if (c24) goto bb6; else goto bb8;
bb6:
  char* t25 = csrc16;
  int t26 = i10;
  char* ptr27 = t25 + t26;
  char t28 = *ptr27;
  char* t29 = cdst15;
  int t30 = i10;
  char* ptr31 = t29 + t30;
  *ptr31 = t28;
  goto bb7;
bb7:
  int t32 = i10;
  int u33 = ++t32;
  i10 = u33;
  goto bb5;
bb8:
  goto bb9;
bb9:
  void* t34 = dst11;
  __retval14 = t34;
  void* t35 = __retval14;
  return t35;
}

// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: main
int main() {
bb36:
  int __retval40;
  int dest41[3];
  char* cast42 = (char*)dest41;
  void* cast43 = (void*)cast42;
  char* cast44 = (char*)_ZZ4mainE3src;
  void* cast45 = (void*)cast44;
  int c46 = 3;
  void* r47 = memcpy(cast43, cast45, c46);
  int c48 = 1;
  char t49 = dest41[c48];
  int cast50 = (int)t49;
  char c51 = 116;
  int cast52 = (int)c51;
  _Bool c53 = (cast50 == cast52) ? 1 : 0;
  if (c53) goto bb37; else goto bb38;
bb37:
  int c54 = 0;
  goto bb39;
bb38:
  char* cast55 = (char*)_str;
