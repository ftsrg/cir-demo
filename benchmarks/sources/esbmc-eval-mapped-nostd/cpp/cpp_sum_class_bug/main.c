// Struct definitions (auto-parsed)
struct Sum { int res; };

int N __attribute__((aligned(4))) = 0;
char _str[25] = "s.res==N*a || s.res == 0";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/cpp_sum_class_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern int nondet_int();
void __cxx_global_var_init();
void Sum__Sum(struct Sum* p0, int p1);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();
__attribute__((constructor)) void _GLOBAL__sub_I_main_cpp();

// function: __cxx_global_var_init
void __cxx_global_var_init() {
bb0: ;
  int r1 = nondet_int();
  *&N = r1;
  return;
}

// function: _ZN3SumC2Ei
void Sum__Sum(struct Sum* v2, int v3) {
bb4: ;
  struct Sum* this5;
  int N6;
  int i7;
  int n8;
  int sn9;
  this5 = v2;
  N6 = v3;
  struct Sum* t10 = this5;
  int t11 = N6;
  n8 = t11;
  int c12 = 0;
  sn9 = c12;
    int c13 = 1;
    i7 = c13;
    while (1) {
      int t15 = i7;
      int t16 = n8;
      _Bool c17 = ((t15 <= t16)) ? 1 : 0;
      if (!c17) break;
        int t18 = i7;
        int c19 = 20;
        _Bool c20 = ((t18 < c19)) ? 1 : 0;
        if (c20) {
          int t21 = sn9;
          int c22 = 2;
          int b23 = t21 + c22;
          sn9 = b23;
        }
    for_step14: ;
      int t24 = i7;
      int u25 = t24 + 1;
      i7 = u25;
    }
  int t26 = sn9;
  t10->res = t26;
  return;
}

// function: main
int main() {
bb27: ;
  int __retval28;
  struct Sum s29;
  int c30 = 0;
  __retval28 = c30;
  int t31 = N;
  Sum__Sum(&s29, t31);
  int t32 = s29.res;
  int t33 = N;
  int c34 = 2;
  int b35 = t33 * c34;
  _Bool c36 = ((t32 == b35)) ? 1 : 0;
  _Bool ternary37;
  if (c36) {
    _Bool c38 = 1;
    ternary37 = (_Bool)c38;
  } else {
    int t39 = s29.res;
    int c40 = 0;
    _Bool c41 = ((t39 == c40)) ? 1 : 0;
    ternary37 = (_Bool)c41;
  }
  if (ternary37) {
  } else {
    char* cast42 = (char*)&(_str);
    char* c43 = (char*)_str_1;
    unsigned int c44 = 35;
    char* cast45 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast42, c43, c44, cast45);
  }
  int c46 = 0;
  __retval28 = c46;
  int t47 = __retval28;
  return t47;
}

// function: _GLOBAL__sub_I_main.cpp
__attribute__((constructor)) void _GLOBAL__sub_I_main_cpp() {
bb48: ;
  __cxx_global_var_init();
  return;
}

