char _str[5] = "test";
char _str_1[24] = "strcmp(first,\"test\")==0";
char _str_2[95] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/new/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern char* strcpy(char* p0, char* p1);
extern unsigned long strlen(char* p0);
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new__(unsigned long p0) { return malloc(p0); }
void operator_delete__(void* p0, unsigned long p1) { free(p0); }
extern int strcmp(char* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: main
int main() {
bb0:
  int __retval1;
  char first2[10];
  char* firstName3;
  char* __new_result4;
  int c5 = 0;
  __retval1 = c5;
  char* cast6 = (char*)&(first2);
  char* cast7 = (char*)&(_str);
  char* r8 = strcpy(cast6, cast7);
  char* cast9 = (char*)&(first2);
  unsigned long r10 = strlen(cast9);
  unsigned long c11 = 1;
  unsigned long b12 = r10 + c11;
  void* r13 = operator_new__(b12);
    char* cast14 = (char*)r13;
    __new_result4 = cast14;
  char* t15 = __new_result4;
  firstName3 = t15;
  char* t16 = firstName3;
  char* cast17 = (char*)&(first2);
  char* r18 = strcpy(t16, cast17);
  char* cast19 = (char*)&(first2);
  char* cast20 = (char*)&(_str);
  int r21 = strcmp(cast19, cast20);
  int c22 = 0;
  _Bool c23 = ((r21 == c22)) ? 1 : 0;
  if (c23) {
  } else {
    char* cast24 = (char*)&(_str_1);
    char* c25 = _str_2;
    unsigned int c26 = 21;
    char* cast27 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast24, c25, c26, cast27);
  }
  int c28 = 0;
  __retval1 = c28;
  int t29 = __retval1;
  return t29;
}

