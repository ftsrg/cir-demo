// Struct definitions (auto-parsed)
struct Sum { int res; };

int N __attribute__((aligned(4))) = 0;
char _str[25] = "s.res==N*a || s.res == 0";
char _str_1[105] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/cpp_sum_class/main.cpp";
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
      int t18 = sn9;
      int c19 = 2;
      int b20 = t18 + c19;
      sn9 = b20;
    for_step14: ;
      int t21 = i7;
      int u22 = t21 + 1;
      i7 = u22;
    }
  int t23 = sn9;
  t10->res = t23;
  return;
}

// function: main
int main() {
bb24: ;
  int __retval25;
  struct Sum s26;
  int c27 = 0;
  __retval25 = c27;
  int t28 = N;
  Sum__Sum(&s26, t28);
  int t29 = s26.res;
  int t30 = N;
  int c31 = 2;
  int b32 = t30 * c31;
  _Bool c33 = ((t29 == b32)) ? 1 : 0;
  _Bool ternary34;
  if (c33) {
    _Bool c35 = 1;
    ternary34 = (_Bool)c35;
  } else {
    int t36 = s26.res;
    int c37 = 0;
    _Bool c38 = ((t36 == c37)) ? 1 : 0;
    ternary34 = (_Bool)c38;
  }
  if (ternary34) {
  } else {
    char* cast39 = (char*)&(_str);
    char* c40 = (char*)_str_1;
    unsigned int c41 = 34;
    char* cast42 = (char*)&(__PRETTY_FUNCTION___main);
    reach_error();
    __assert_fail(cast39, c40, c41, cast42);
  }
  int c43 = 0;
  __retval25 = c43;
  int t44 = __retval25;
  return t44;
}

// function: _GLOBAL__sub_I_main.cpp
__attribute__((constructor)) void _GLOBAL__sub_I_main_cpp() {
bb45: ;
  __cxx_global_var_init();
  return;
}

