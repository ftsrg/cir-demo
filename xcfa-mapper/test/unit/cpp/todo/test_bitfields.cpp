// Limitation example: bit-fields and packing semantics.
// Mapper does not preserve bit widths/packing in reconstructed C structs.

struct Flags {
  unsigned a : 1;
  unsigned b : 3;
  unsigned c : 4;
};

unsigned read_flags(const Flags& f) {
  return (f.a << 0) | (f.b << 1) | (f.c << 4);
}

int main() {
  Flags f{};
  f.a = 1;
  f.b = 5; // truncated to 3 bits in real C++ layout/semantics
  f.c = 7;
  return static_cast<int>(read_flags(f));
}
