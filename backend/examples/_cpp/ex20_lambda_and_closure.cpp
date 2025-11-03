extern void reach_error();
extern int __VERIFIER_nondet_int();

int main() {
    int x = __VERIFIER_nondet_int();
    auto incr = [&](int d)->int { x += d; return x; };
    int v = incr(1);
    if (v == 100) reach_error();
    return 0;
}
