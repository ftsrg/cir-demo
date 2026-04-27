// Struct definitions (auto-parsed)
struct Sum { int res; };

int N = 0;
char _str[25] = "s.res==N*a || s.res == 0";
char _str_1[92] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cpp_sum_class/main.cpp";
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
  struct Sum* this12;
  int N13;
  int i14;
  int n15;
  int sn16;
  this12 = v3;
  N13 = v4;
  struct Sum* t17 = this12;
  int t18 = N13;
  n15 = t18;
  int c19 = 0;
  sn16 = c19;
  goto bb6;
bb6:
  int c20 = 1;
  i14 = c20;
  goto bb7;
bb7:
  int t21 = i14;
  int t22 = n15;
  _Bool c23 = (t21 <= t22) ? 1 : 0;
  if (c23) goto bb8; else goto bb10;
bb8:
  int t24 = sn16;
  int c25 = 2;
  int b26 = t24 + c25;
  sn16 = b26;
  goto bb9;
bb9:
  int t27 = i14;
  int u28 = ++t27;
  i14 = u28;
  goto bb7;
bb10:
  goto bb11;
bb11:
  int t29 = sn16;
  *t17->res = t29;
  return;
}

// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: main
int main() {
  _Bool v30;
  _Bool v31;
bb32:
  int __retval42;
  struct Sum s43;
  int* g44 = &N;
  int t45 = *g44;
  Sum__Sum(&s43, t45);
  int t46 = s43.res;
  int* g47 = &N;
  int t48 = *g47;
  int c49 = 2;
  int b50 = t48 * c49;
  _Bool c51 = (t46 == b50) ? 1 : 0;
  if (c51) goto bb33; else goto bb34;
bb33:
  _Bool c52 = 1;
  v31 = c52;
  goto bb38;
bb34:
  int t53 = s43.res;
  int c54 = 0;
  _Bool c55 = (t53 == c54) ? 1 : 0;
  if (c55) goto bb35; else goto bb36;
bb35:
  _Bool c56 = 1;
  v30 = c56;
  goto bb37;
bb36:
  _Bool c57 = 0;
  v30 = c57;
  goto bb37;
bb37:
  v31 = v30;
  goto bb38;
bb38:
  if (v31) goto bb39; else goto bb40;
bb39:
  int c58 = 0;
  goto bb41;
bb40:
  char* cast59 = (char*)_str;
