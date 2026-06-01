// cir.scope nested case: RAII object in an inner block inside a loop, with an
// early `break` crossing the cleanup boundary. The Guard dtor must run at the
// end of the inner block on every iteration AND before the break exits.
struct Guard { int* p; Guard(int* x):p(x){ (*p)++; } ~Guard(){ (*p)--; } };
void nested(int* c, int n) {
    for (int i = 0; i < n; ++i) {
        { Guard g(c); if (i == 3) break; }
    }
}
