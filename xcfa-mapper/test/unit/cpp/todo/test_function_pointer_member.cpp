// Limitation example: function-pointer members.
// Mapper currently simplifies pointer-to-function types to void*.

using Fn = int(*)(int);

int inc(int x) { return x + 1; }

struct Cb {
  Fn fn;
};

int apply(Cb cb, int v) {
  return cb.fn(v);
}

int main() {
  Cb cb{&inc};
  return apply(cb, 10);
}
