// Integration test: Nested arrays in structs
#include <stddef.h>

struct Inner {
    char c;
    int arr[2][3];
    double d;
};

struct Outer {
    struct Inner inners[4];
    float f;
    signed long l;
};

int test_nested_arrays() {
    struct Outer o;
    o.inners[2].arr[1][1] = 42;
    o.inners[2].c = 'A';
    o.inners[2].d = 3.14;
    o.f = 2.71f;
    o.l = 123456789L;
    return o.inners[2].arr[1][1] + (int)o.f + (int)o.l + (int)o.inners[2].d + o.inners[2].c;
}
