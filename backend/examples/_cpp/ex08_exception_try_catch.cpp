extern void reach_error();
extern int __VERIFIER_nondet_int();

struct E {};

int may_throw(int x) {
    if (x == 13) throw E();
    return x*2;
}

int main() {
    int v = __VERIFIER_nondet_int();
    try {
        int r = may_throw(v);
        if (r == 26) reach_error();
    } catch (E &e) {
        // handled
    }
    return 0;
}
