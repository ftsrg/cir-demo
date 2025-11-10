// Integration test: Type conversions (cast)
int test_int_cast() {
    short s = 100;
    int i = (int)s;
    long l = (long)i;
    return (int)l;
}

int test_float_cast() {
    float f = 3.14f;
    int i = (int)f;
    return i;
}

int test_pointer_cast() {
    int x = 42;
    int *p = &x;
    long addr = (long)p;
    int *p2 = (int*)addr;
    return *p2;
}
