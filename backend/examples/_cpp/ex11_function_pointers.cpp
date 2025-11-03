extern void reach_error();
extern int __VERIFIER_nondet_int();

int add1(int x) { return x+1; }
int mul2(int x) { return x*2; }

int main() {
    int sel = __VERIFIER_nondet_int();
    int (*fp)(int) = (sel % 2 == 0) ? add1 : mul2;
    int v = fp(__VERIFIER_nondet_int());
    if (v == 0) reach_error();
    return 0;
}
