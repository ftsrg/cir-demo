extern void reach_error();
extern int __VERIFIER_nondet_int();
extern double __VERIFIER_nondet_double();

int main() {
    int a = __VERIFIER_nondet_int();
    double d = __VERIFIER_nondet_double();
    int b = (d > 0.0) ? (int)d : a;
    // static_cast example
    int c = static_cast<int>(d) + b;
    if (c == 1337) reach_error();
    return 0;
}
