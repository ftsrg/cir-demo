// Diamond (virtual) inheritance: Left and Right both virtually inherit Base,
// Diamond inherits both. Tests the VTT mechanism and the single shared Base
// subobject. The verifier must handle that call_base(&d) can only resolve to
// Diamond::f() even though the static type is Base*.
struct Base {
  virtual int f() { return 0; }
};
struct Left : public virtual Base {
  int f() override { return 1; }
};
struct Right : public virtual Base {
  int f() override { return 2; }
};
struct Diamond : public Left, public Right {
  int f() override { return 3; }
};

void call_base(Base *b) { b->f(); }

int main() {
  Diamond d;
  call_base(&d);
}
