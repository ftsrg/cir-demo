// Integration test: Structures (record, get_member)
struct Point {
    int x;
    int y;
};

int test_struct_access() {
    struct Point p;
    p.x = 10;
    p.y = 20;
    return p.x + p.y;
}

struct Rectangle {
    struct Point top_left;
    struct Point bottom_right;
};

int test_nested_struct() {
    struct Rectangle r;
    r.top_left.x = 0;
    r.top_left.y = 0;
    r.bottom_right.x = 100;
    r.bottom_right.y = 50;
    return r.bottom_right.x + r.bottom_right.y;
}
