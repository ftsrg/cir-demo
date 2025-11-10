// Integration test: Boolean operations (bool)
int test_bool_logic() {
    int a = 1;
    int b = 0;
    int c = a && b;  // logical and
    int d = a || b;  // logical or
    int e = !a;      // logical not
    return c + d + e;
}

int test_bool_comparison() {
    int x = 10;
    int y = 20;
    int less = x < y;
    int greater = x > y;
    int equal = x == y;
    return less + greater + equal;
}
