extern void reach_error();
extern int __VERIFIER_nondet_int();

struct P { int x; int y; };

void update(P &p) { p.x += p.y; }

int main() {
    P p; p.x = __VERIFIER_nondet_int(); p.y = __VERIFIER_nondet_int();
    update(p);
    if (p.x == p.y) reach_error();
    return 0;
}
