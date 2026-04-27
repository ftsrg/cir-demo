// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

int __const_main_a[10];
struct std::basic_ostream<char> _ZSt4cout;
char _str[11] = "Result is ";
// function: _Z10whatIsThisPii
int whatIsThis(int* v0, int v1) {
bb2:
  int* b8;
  int size9;
  int __retval10;
  b8 = v0;
  size9 = v1;
  goto bb3;
bb3:
  int t11 = size9;
  int c12 = 1;
  _Bool c13 = (t11 == c12) ? 1 : 0;
  if (c13) goto bb4; else goto bb5;
bb4:
  int* t14 = b8;
  int c15 = 0;
  int* ptr16 = t14 + c15;
  int t17 = *ptr16;
  __retval10 = t17;
  int t18 = __retval10;
  return t18;
bb5:
  int* t19 = b8;
  int t20 = size9;
  int c21 = 1;
  int b22 = t20 - c21;
  int* ptr23 = t19 + b22;
  int t24 = *ptr23;
  int* t25 = b8;
  int t26 = size9;
  int c27 = 1;
  int b28 = t26 - c27;
  int r29 = whatIsThis(t25, b28);
  int b30 = t24 + r29;
  __retval10 = b30;
  int t31 = __retval10;
  return t31;
bb6:
  goto bb7;
bb7:
