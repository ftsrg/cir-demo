extern void reach_error();
extern int __VERIFIER_nondet_int();

int main() {
    int a[5];
    int b[5];
    for (int i = 0; i < 5; ++i) a[i] = __VERIFIER_nondet_int();
    for (int i = 0; i < 5; ++i) b[i] = a[i];
    if (b[2] == 12345) reach_error();
    return 0;
}
