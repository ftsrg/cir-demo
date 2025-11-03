extern void reach_error();
extern int __VERIFIER_nondet_int();

int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

int main() {
    int x = __VERIFIER_nondet_int();
    if (x < 0) x = -x;
    int r = fib(x % 6);
    if (r == 5) reach_error();
    return 0;
}
