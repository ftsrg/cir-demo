// Integration test: Control flow (br, brcond, switch, select)
int test_if_else(int x) {
    if (x > 0) {
        return 1;
    } else {
        return -1;
    }
}

int test_switch(int x) {
    switch (x) {
        case 1:
            return 10;
        case 2:
            return 20;
        case 3:
            return 30;
        default:
            return 0;
    }
}

int test_ternary(int x) {
    int result = (x > 0) ? 1 : -1;  // select
    return result;
}

int test_loops() {
    int sum = 0;
    int i = 0;
    while (i < 10) {
        sum = sum + i;
        i = i + 1;
    }
    return sum;
}
