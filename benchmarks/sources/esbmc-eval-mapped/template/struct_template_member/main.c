// Struct definitions (auto-parsed)
struct Foo { unsigned char __field0; };

int int_Foo__bar_int_(struct Foo* p0);
int main();

// function: _ZN3Foo3barIiEET_v
int int_Foo__bar_int_(struct Foo* v0) {
bb1:
  struct Foo* this2;
  int __retval3;
  this2 = v0;
  struct Foo* t4 = this2;
  int c5 = 0;
  __retval3 = c5;
  int t6 = __retval3;
  return t6;
}

// function: main
int main() {
bb7:
  int __retval8;
  struct Foo f9;
  int c10 = 0;
  __retval8 = c10;
  int r11 = int_Foo__bar_int_(&f9);
  int c12 = 0;
  __retval8 = c12;
  int t13 = __retval8;
  return t13;
}

