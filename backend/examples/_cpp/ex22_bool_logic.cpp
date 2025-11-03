extern void reach_error();
extern bool __VERIFIER_nondet_bool();

int main() {
    bool a = __VERIFIER_nondet_bool();
    bool b = __VERIFIER_nondet_bool();
    if ((a || b) && (!a || !b)) {
        reach_error();
    }
    return 0;
}
