extern void reach_error();
extern int __VERIFIER_nondet_int();

struct S { int a; int b; int sum() { return a + b; } };

int main() {
    S s; s.a = __VERIFIER_nondet_int(); s.b = __VERIFIER_nondet_int();
    int (S::*pm)() = &S::sum;
    int r = (s.*pm)();
    if (r == 0) reach_error();
    return 0;
}
