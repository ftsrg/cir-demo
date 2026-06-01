// cir.scope case 2: C++17 if-init statement.
// `if (int n = f(); n > 0)` scopes n to the whole if; CIR wraps the alloca for
// n and the cir.if in one cir.scope.
int getValue();
int if_init(int a) {
    if (int n = getValue(); n > 0) {
        return n + a;
    }
    return a;
}
