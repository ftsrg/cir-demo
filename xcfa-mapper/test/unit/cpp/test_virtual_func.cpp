// In this example, when f3 is called, we don't know at compile-time
// whether it's Base or Derived
struct Base {
  virtual void f1();
  virtual void f2();
};
struct Derived : public Base {
  void f1() override;
  void f2() override;
};
void f3(Base *b) {
  b->f2();
}

int main() {
  Derived d;
  f3(&d);
}