// Struct definitions (auto-parsed)
struct Sum { int res; };

int N = 0;
char _str[25] = "s.res==N*a || s.res == 0";
char _str_1[96] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cpp_sum_class_bug/main.cpp";
char _str_2[11] = "int main()";
// function: _Z10nondet_intv
int nondet_int();

// function: __cxx_global_var_init
void __cxx_global_var_init() {
bb0:
  int* g1 = &N;
  int r2 = nondet_int();
  *g1 = r2;
  return;
}

// function: _ZN3SumC2Ei
void Sum__Sum(struct Sum* v3, int v4) {
bb5:
  struct Sum* this16;
  int N17;
  int i18;
  int n19;
  int sn20;
  this16 = v3;
  N17 = v4;
  struct Sum* t21 = this16;
  int t22 = N17;
  n19 = t22;
  int c23 = 0;
  sn20 = c23;
  goto bb6;
bb6:
  int c24 = 1;
  i18 = c24;
  goto bb7;
bb7:
  int t25 = i18;
  int t26 = n19;
  _Bool c27 = (t25 <= t26) ? 1 : 0;
  if (c27) goto bb8; else goto bb14;
bb8:
  goto bb9;
bb9:
  int t28 = i18;
  int c29 = 20;
  _Bool c30 = (t28 < c29) ? 1 : 0;
  if (c30) goto bb10; else goto bb11;
bb10:
  int t31 = sn20;
  int c32 = 2;
  int b33 = t31 + c32;
  sn20 = b33;
  goto bb11;
bb11:
  goto bb12;
bb12:
  goto bb13;
bb13:
  int t34 = i18;
  int u35 = ++t34;
  i18 = u35;
  goto bb7;
bb14:
  goto bb15;
bb15:
  int t36 = sn20;
  *t21->res = t36;
  return;
}

// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: main
int main() {
  _Bool v37;
  _Bool v38;
bb39:
  int __retval49;
  struct Sum s50;
  int* g51 = &N;
  int t52 = *g51;
  Sum__Sum(&s50, t52);
  int t53 = s50.res;
  int* g54 = &N;
  int t55 = *g54;
  int c56 = 2;
  int b57 = t55 * c56;
  _Bool c58 = (t53 == b57) ? 1 : 0;
  if (c58) goto bb40; else goto bb41;
bb40:
  _Bool c59 = 1;
  v38 = c59;
  goto bb45;
bb41:
  int t60 = s50.res;
  int c61 = 0;
  _Bool c62 = (t60 == c61) ? 1 : 0;
  if (c62) goto bb42; else goto bb43;
bb42:
  _Bool c63 = 1;
  v37 = c63;
  goto bb44;
bb43:
  _Bool c64 = 0;
  v37 = c64;
  goto bb44;
bb44:
  v38 = v37;
  goto bb45;
bb45:
  if (v38) goto bb46; else goto bb47;
bb46:
  int c65 = 0;
  goto bb48;
bb47:
  char* cast66 = (char*)_str;
