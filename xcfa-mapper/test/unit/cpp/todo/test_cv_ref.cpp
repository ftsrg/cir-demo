// Limitation example: const/volatile/reference-rich signatures.
// Mapper mostly erases cv/ref qualifiers in type lowering.

struct T {
  int value;
};

int g(const T& t, volatile int* p) {
  int v = t.value;
  if (p) {
    *const_cast<int*>(p) = v;
  }
  return v;
}

int main() {
  T t{42};
  volatile int out = 0;
  return g(t, &out) - static_cast<int>(out);
}
