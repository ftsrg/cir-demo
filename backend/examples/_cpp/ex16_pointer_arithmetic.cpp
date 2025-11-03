extern void reach_error();
extern int __VERIFIER_nondet_int();

int main() {
    int n = __VERIFIER_nondet_int();
    if (n <= 0) n = 3;
    int *arr = new int[n];
    for (int i = 0; i < n; ++i) arr[i] = i;
    int *p = arr + (n/2);
    if (*(p) == 7) reach_error();
    delete [] arr;
    return 0;
}
