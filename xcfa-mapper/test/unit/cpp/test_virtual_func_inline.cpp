// In this example, when f3 is called, we don't know at compile-time
// whether it's Base or Derived
struct Base {
  virtual int f1();
  virtual int f2();
};
struct Derived : public Base {
  int f1() override { return 1; };
  int f2() override { return 2; };
};
void f3(Base *b) {
  b->f2();
}

int main() {
  Derived d;
  f3(&d);
}