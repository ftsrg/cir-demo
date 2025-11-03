extern void reach_error();
extern int __VERIFIER_nondet_int();

int main() {
    int x = __VERIFIER_nondet_int();
    int y = __VERIFIER_nondet_int();
    if (x > 0) {
        if (y < 0) {
            if (x + y == 0) reach_error();
        }
    } else if (x == 0) {
        if (y == 1) reach_error();
    }
    return 0;
}
