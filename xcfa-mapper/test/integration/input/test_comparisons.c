// Integration test: Comparison operations (cmp)
int test_comparisons() {
    int a = 10;
    int b = 20;
    
    if (a < b) {   // lt
        return 1;
    }
    return 0;
}

int test_equality() {
    int x = 5;
    int y = 5;
    
    if (x == y) {  // eq
        return 1;
    }
    if (x != y) {  // ne
        return 0;
    }
    return 2;
}

int test_all_comparisons() {
    int a = 10;
    int b = 20;
    int result = 0;
    
    if (a < b) result = result + 1;   // lt
    if (a <= b) result = result + 2;  // le
    if (a > b) result = result + 4;   // gt
    if (a >= b) result = result + 8;  // ge
    if (a == b) result = result + 16; // eq
    if (a != b) result = result + 32; // ne
    
    return result;
}
