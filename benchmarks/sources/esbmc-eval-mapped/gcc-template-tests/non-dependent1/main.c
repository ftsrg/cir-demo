// Struct definitions (auto-parsed)
struct Foo { unsigned char __field0; };

void void_Foo__func_int_(struct Foo* p0);
void void_Bar_int_(struct Foo* p0);
int main();

// function: _ZN3Foo4funcIiEEvv
void void_Foo__func_int_(struct Foo* v0) {
bb1:
  struct Foo* this2;
  this2 = v0;
  struct Foo* t3 = this2;
  return;
}

// function: _Z3BarIiEvP3Foo
void void_Bar_int_(struct Foo* v4) {
bb5:
  struct Foo* p6;
  p6 = v4;
  struct Foo* t7 = p6;
  void_Foo__func_int_(t7);
  return;
}

// function: main
int main() {
bb8:
  int __retval9;
  struct Foo c10;
  int c11 = 0;
  __retval9 = c11;
  void_Bar_int_(&c10);
  int t12 = __retval9;
  return t12;
}

