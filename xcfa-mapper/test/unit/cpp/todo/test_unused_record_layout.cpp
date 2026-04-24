// Record return/value-flow example.
// This exercises struct reconstruction, zero-initialization, and return-by-value.

struct S {
  int a;
  double b;
};

S make_s();

S make_s() {
  S s{};
  s.a = 1;
  s.b = 2.0;
  return s;
}

int main() {
  S s = make_s();
  return (s.a == 1 && s.b > 1.5) ? 0 : 1;
}
