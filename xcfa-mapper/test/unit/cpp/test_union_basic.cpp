union Number {
  int i;
  float f;
};

int use_union_int(Number *n) {
  n->i = 42;
  return n->i;
}
