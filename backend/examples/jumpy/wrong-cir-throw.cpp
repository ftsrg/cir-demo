// C++ input
extern int foo();

int main() {
    int i = foo();
    try {
        if(i) throw 42;
    } catch (int e) { abort(); }
}
