// Integration test: Function calls (call, return)
int helper(int x) {
    return x + 1;
}

int helper2(int a, int b) {
    return a * b;
}

int test_simple_call() {
    int x = 10;
    int y = helper(x);
    return y;
}

int test_multiple_calls() {
    int a = helper(5);
    int b = helper(10);
    int c = helper2(a, b);
    return c;
}

int test_recursive(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * test_recursive(n - 1);
}
