extern void reach_error();
extern int __VERIFIER_nondet_int();

class Counter {
  int v;
public:
  Counter(int s): v(s) {}
  void inc() { v++; }
  int get() const { return v; }
};

int main() {
  Counter c(__VERIFIER_nondet_int());
  c.inc();
  if (c.get() == 7) reach_error();
  return 0;
}
