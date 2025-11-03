extern void reach_error();
extern int __VERIFIER_nondet_int();

int foo(int x) {
    if (x < 0) return -1;
    if (x == 0) return 0;
    return 1;
}

int main() {
    int v = foo(__VERIFIER_nondet_int());
    if (v == -1) reach_error();
    return 0;
}
