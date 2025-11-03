extern void reach_error();
extern int __VERIFIER_nondet_int();
extern void* __VERIFIER_nondet_ptr();

int main() {
    int val = __VERIFIER_nondet_int();
    void *p = __VERIFIER_nondet_ptr();
    int *ip = nullptr;
    if (p) ip = reinterpret_cast<int*>(p);
    if (ip) {
        if (*ip == val) reach_error();
    } else {
        // null path
        if (val == 0) reach_error();
    }
    return 0;
}
