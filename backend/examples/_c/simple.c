extern void reach_error();
extern int __VERIFIER_nondet_int();
int main() {
    int i = __VERIFIER_nondet_int();
    if(i < 0) {
        if (i > 1) {
            reach_error();
        }
    }

}