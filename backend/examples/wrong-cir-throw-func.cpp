// C++ input

int bar() {
    throw 42;
}

int foo() {
    bar();
}
extern void abort();

int main() {
    try {
        if(foo()) throw 42;
    } catch (int e) { abort(); }
}
