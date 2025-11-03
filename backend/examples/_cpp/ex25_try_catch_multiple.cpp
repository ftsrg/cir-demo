extern void reach_error();
extern int __VERIFIER_nondet_int();

struct MyEx { int code; };

int may(int x) {
    if (x == 0) throw MyEx{42};
    if (x < 0) throw -1;
    return x;
}

int main() {
    int v = __VERIFIER_nondet_int();
    try {
        int r = may(v);
        if (r == 999) reach_error();
    } catch (MyEx &e) {
        if (e.code == 42) reach_error();
    } catch (...) {
        // generic catch
    }
    return 0;
}
