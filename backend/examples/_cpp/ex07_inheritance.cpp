extern void reach_error();
extern int __VERIFIER_nondet_int();

class Base {
public:
  virtual int f(int x) { return x; }
};
class Derived : public Base {
public:
  int f(int x) override { return x + 1; }
};

int main() {
  Base *b = new Derived();
  int v = b->f(__VERIFIER_nondet_int());
  if (v < 0) reach_error();
  delete b;
  return 0;
}
