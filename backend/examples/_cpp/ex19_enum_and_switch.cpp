extern void reach_error();
extern int __VERIFIER_nondet_int();

enum Color { RED, GREEN, BLUE };

int main() {
    int x = __VERIFIER_nondet_int();
    Color c = static_cast<Color>(x % 3);
    switch (c) {
        case RED: if (x == 7) reach_error(); break;
        case GREEN: if (x == 8) reach_error(); break;
        case BLUE: if (x == 9) reach_error(); break;
    }
    return 0;
}
