// Integration test: Basic operations (alloca, const, load, store, return)
int test_basic() {
    int x = 42;
    int y = x;
    return y;
}

int test_multiple_vars() {
    int a = 10;
    int b = 20;
    int c = 30;
    return a + b + c;
}
