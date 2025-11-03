/* Expected C output (approximate) for sample.mlir */
int __VERIFIER_nondet_int();
void __VERIFIER_reach_error();

int main() {
  int __retval;
  int i;
  int c0 = __VERIFIER_nondet_int();
  i = c0;
  // block
  int t0 = i;
  int c1 = 0;
  int c2 = (t0 < c1) ? 1 : 0;
  if (c2) {
    // ... inner blocks ...
    int t1 = i;
    int c3 = 1;
    int c4 = (t1 > c3) ? 1 : 0;
    if (c4) {
      __VERIFIER_reach_error();
    }
  }
  return __retval;
}
