extern void reach_error();
extern int __VERIFIER_nondet_int();

class Base { virtual void dummy() {} };
class Child : public Base {};

int main() {
    Base *b = (__VERIFIER_nondet_int() % 2) ? new Child() : new Base();
    if (typeid(*b) == typeid(Child)) {
        // do something
        if (__VERIFIER_nondet_int() == 0) reach_error();
    }
    delete b;
    return 0;
}
