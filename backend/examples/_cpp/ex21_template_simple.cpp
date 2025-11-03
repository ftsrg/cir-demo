extern void reach_error();
extern int __VERIFIER_nondet_int();

template<typename T>
T twice(T x) { return x + x; }

int main() {
    int a = __VERIFIER_nondet_int();
    int b = twice(a);
    if (b == 0) reach_error();
    return 0;
}
