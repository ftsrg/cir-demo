// Integration test: Floating point operations (float, double, fp)
float test_float_ops() {
    float a = 3.14f;
    float b = 2.71f;
    float c = a + b;
    float d = c * 2.0f;
    return d;
}

double test_double_ops() {
    double x = 1.5;
    double y = 2.5;
    double z = x * y;
    return z;
}

int test_float_comparison() {
    float a = 1.5f;
    float b = 2.5f;
    if (a < b) {
        return 1;
    }
    return 0;
}
