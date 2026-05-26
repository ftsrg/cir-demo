// C++ input
extern int foo();
extern void abort();

int main() {
    int i = foo();
    try {
        if(i) throw 42;
    } catch (int e) { abort(); }
}
