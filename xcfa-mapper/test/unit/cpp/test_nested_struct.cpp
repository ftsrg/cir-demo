struct Inner {
  int v;
};

struct Outer {
  Inner in;
  int k;
};

int read_outer(Outer *o) {
  return o->in.v + o->k;
}
