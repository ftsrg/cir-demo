// Integration test: Arithmetic operations (binop)
int test_arithmetic() {
    int a = 10;
    int b = 20;
    int c = a + b;   // add
    int d = c - a;   // sub
    int e = d * 2;   // mul
    int f = e / 5;   // div
    int g = f % 3;   // rem
    return g;
}

int test_bitwise() {
    int a = 15;
    int b = 7;
    int c = a & b;   // and
    int d = a | b;   // or
    int e = a ^ b;   // xor
    return e;
}
