// Integration test: Shift operations (shift)
int test_left_shift() {
    int x = 1;
    int y = x << 3;  // 1 << 3 = 8
    return y;
}

int test_right_shift() {
    int x = 16;
    int y = x >> 2;  // 16 >> 2 = 4
    return y;
}

int test_shift_operations() {
    int a = 4;
    int b = a << 1;  // 8
    int c = b >> 1;  // 4
    int d = c << 2;  // 16
    return d;
}
