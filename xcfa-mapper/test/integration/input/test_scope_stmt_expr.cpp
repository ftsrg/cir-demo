// cir.scope value-yielding case: GNU statement expression ({ ...; expr; }).
// The cir.scope yields a value via `cir.yield %v`; the mapper must propagate
// that value to the scope's SSA result.
int stmt_expr(int x) {
    int v = ({ int t = x * 2; t + 1; });
    return v;
}
