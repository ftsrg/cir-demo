// Struct definitions (auto-parsed)
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ { void* _M_comp; };
struct __gnu_cxx____ops___Iter_less_iter { unsigned char __field0; };

int __const_main_continent[4] = {10, 20, 30, 40};
int __const_main_container[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
char _str[55] = "includes(container,container+10,continent,continent+4)";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm51/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[67] = "includes(container,container+10,continent,continent+4, myfunction)";
_Bool myfunction(int p0, int p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z10myfunctionii
_Bool myfunction(int v0, int v1) {
bb2:
  int i3;
  int j4;
  _Bool __retval5;
  i3 = v0;
  j4 = v1;
  int t6 = i3;
  int t7 = j4;
  _Bool c8 = ((t6 < t7)) ? 1 : 0;
  __retval5 = c8;
  _Bool t9 = __retval5;
  return t9;
}

// function: main
int main() {
bb10:
  int __retval11;
  int container12[10];
  int continent13[4];
  int c14 = 0;
  __retval11 = c14;
  // array copy
  __builtin_memcpy(container12, __const_main_container, (unsigned long)10 * sizeof(__const_main_container[0]));
  // array copy
  __builtin_memcpy(continent13, __const_main_continent, (unsigned long)4 * sizeof(__const_main_continent[0]));
  int* cast15 = (int*)&(container12);
  int* cast16 = (int*)&(container12);
  int c17 = 10;
  int* ptr18 = &(cast16)[c17];
  int* cast19 = (int*)&(continent13);
  int* cast20 = (int*)&(continent13);
  int c21 = 4;
  int* ptr22 = &(cast20)[c21];
  _Bool std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  if (std23) {
  } else {
    char* cast24 = (char*)&(_str);
    char* c25 = _str_1;
    unsigned int c26 = 23;
    char* cast27 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast24, c25, c26, cast27);
  }
  int* cast28 = (int*)&(container12);
  int* cast29 = (int*)&(container12);
  int c30 = 10;
  int* ptr31 = &(cast29)[c30];
  int* cast32 = (int*)&(continent13);
  int* cast33 = (int*)&(continent13);
  int c34 = 4;
  int* ptr35 = &(cast33)[c34];
  _Bool std36;
  __VERIFIER_nondet_memory(&std36, sizeof(std36));
  if (std36) {
  } else {
    char* cast37 = (char*)&(_str_2);
    char* c38 = _str_1;
    unsigned int c39 = 24;
    char* cast40 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast37, c38, c39, cast40);
  }
  int c41 = 0;
  __retval11 = c41;
  int t42 = __retval11;
  return t42;
}

