// cir.scope case 1: plain inner compound statement.
// A bare { } block demarcating a local's lifetime, no RAII type involved.
int plain_block(int x) {
    int r = x;
    {
        int y = x + 2;
        r = y;
    }
    return r;
}
