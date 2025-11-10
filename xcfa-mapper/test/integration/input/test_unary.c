// Integration test: Unary operations (unary)
int test_unary_minus() {
    int x = 42;
    int y = -x;
    return y;
}

int test_unary_plus() {
    int x = 42;
    int y = +x;
    return y;
}

int test_bitwise_not() {
    int x = 0xF0;
    int y = ~x;
    return y;
}

int test_increment() {
    int x = 10;
    int y = ++x;
    int z = x++;
    return x + y + z;
}

int test_decrement() {
    int x = 10;
    int y = --x;
    int z = x--;
    return x + y + z;
}
