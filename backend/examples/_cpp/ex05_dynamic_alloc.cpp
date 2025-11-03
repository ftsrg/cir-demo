extern void reach_error();
extern int __VERIFIER_nondet_int();

int main() {
    int n = __VERIFIER_nondet_int();
    if (n <= 0) n = 1;
    int *arr = new int[n];
    for (int i = 0; i < n; ++i) arr[i] = i;
    if (arr[0] == 9999) reach_error();
    delete [] arr;
    return 0;
}
