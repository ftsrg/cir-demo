extern void reach_error();
extern void* __VERIFIER_nondet_ptr();

struct S { int a; double b; };

int main() {
    void *p = __VERIFIER_nondet_ptr();
    if (!p) return 0;
    S *sp = reinterpret_cast<S*>(p);
    if (sp->a == 0 && sp->b == 0.0) reach_error();
    return 0;
}
