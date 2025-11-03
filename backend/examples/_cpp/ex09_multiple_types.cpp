extern void reach_error();
extern bool __VERIFIER_nondet_bool();
extern char __VERIFIER_nondet_char();
extern short __VERIFIER_nondet_short();
extern long __VERIFIER_nondet_long();

int main() {
    bool b = __VERIFIER_nondet_bool();
    char c = __VERIFIER_nondet_char();
    short s = __VERIFIER_nondet_short();
    long l = __VERIFIER_nondet_long();
    if (b && (c == 'X') && (s > 100) && (l % 2 == 0)) reach_error();
    return 0;
}
