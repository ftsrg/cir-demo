// Limitation example: nested/anonymous union in a struct.
// Anonymous member naming and exact reconstruction may be incomplete.

struct Outer {
  union {
    int i;
    float f;
  };
};

int main() {
  Outer o{};
  o.i = 1065353216; // bit pattern for ~1.0f on IEEE-754
  return (o.f > 0.9f && o.f < 1.1f) ? 0 : 1;
}
