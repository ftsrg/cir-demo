extern void reach_error();
extern int __VERIFIER_nondet_int();

int main() {
    int n = __VERIFIER_nondet_int();
    if (n < 0) n = -n;
    int i = 0;
    while (i < n) {
        if (i == 42) reach_error();
        i++;
    }
    return 0;
}
