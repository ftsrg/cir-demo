// Multiple inheritance: C inherits from both A and B, each with their own
// virtual method. Tests the two separate vtable sections and the this-pointer
// adjustment when calling through a B* pointer.
struct A {
  virtual int fa() { return 1; }
};
struct B {
  virtual int fb() { return 2; }
};
struct C : public A, public B {
  int fa() override { return 3; }
  int fb() override { return 4; }
};

void call_a(A *a) { a->fa(); }
void call_b(B *b) { b->fb(); }

int main() {
  C c;
  call_a(&c);
  call_b(&c);  // &c needs to be adjusted to the B subobject
}
