// cir.scope early-return case: a function-scoped RAII object with an early
// `return` inside the cleanup region. The dtor must run on BOTH return paths;
// in CIR the cir.return ops sit inside the cir.cleanup.scope body, so the
// cleanup must be threaded before each return.
struct Res { int* p; Res(int* x):p(x){*p=1;} ~Res(){*p=0;} };
int early(int* flag, int cond) {
    Res r(flag);
    if (cond) {
        return 1;   // dtor must run on this path
    }
    return 0;       // and on this path
}
