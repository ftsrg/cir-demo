// cir.scope case 5: for-loop with init variable.
// `i` is scoped to the loop, so CIR emits a cir.scope holding the alloca for i
// and the cir.for together.
void body(int);
void for_init() {
    for (int i = 0; i < 10; ++i) {
        body(i);
    }
}
