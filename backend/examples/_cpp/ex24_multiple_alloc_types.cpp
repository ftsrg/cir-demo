extern void reach_error();
extern int __VERIFIER_nondet_int();
extern double __VERIFIER_nondet_double();

int main() {
    int *pi = new int[__VERIFIER_nondet_int() > 0 ? 3 : 1];
    double *pd = new double[2];
    pi[0] = __VERIFIER_nondet_int();
    pd[1] = __VERIFIER_nondet_double();
    if (pi[0] == (int)pd[1]) reach_error();
    delete [] pi;
    delete [] pd;
    return 0;
}
