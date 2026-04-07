// Limitation example: inheritance + virtual dispatch
// Current mapper does not fully reconstruct base-subobject layout,
// vptr/vtable details, or C++ virtual semantics.

struct Base {
  int x;
  virtual int f() { return x; }
  virtual ~Base() = default;
};

struct Derived : Base {
  int y;
  int f() override { return x + y; }
};

int use_virtual(Base* b) {
  return b->f();
}

int main() {
  Derived d;
  d.x = 2;
  d.y = 3;
  return use_virtual(&d);
}
