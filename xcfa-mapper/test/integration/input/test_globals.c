// Integration test: Global variables (global, get_global)
int global_var = 100;
int global_array[5] = {1, 2, 3, 4, 5};

int test_global_read() {
    return global_var;
}

int test_global_write() {
    global_var = 200;
    return global_var;
}

int test_global_array() {
    int sum = 0;
    int i = 0;
    while (i < 5) {
        sum = sum + global_array[i];
        i = i + 1;
    }
    return sum;
}
