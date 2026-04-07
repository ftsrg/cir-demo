// Limitation example: record type referenced but fields not member-accessed.
// Mapper may emit a placeholder-only struct when field discovery is incomplete.

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
