// Struct definitions (auto-parsed)
struct Base { unsigned char __placeholder; };
struct Derived { unsigned char __placeholder; };

char _str[8] = "r == 21";
char _str_1[103] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/llbmc_simple_inheritance/main.cpp";
char _str_2[11] = "int main()";
// function: _Znwm
void* operator_new(unsigned long long);

// function: _ZN7DerivedC1Ev
void Derived__Derived(struct Derived*);

// function: _ZN4Base1fEv
int Base__f(struct Base* v0) {
bb1:
  struct Base* this2;
  int __retval3;
  this2 = v0;
  struct Base* t4 = this2;
  int c5 = 21;
  __retval3 = c5;
  int t6 = __retval3;
  return t6;
}

// function: _ZdlPvm
void operator_delete(void*, unsigned long long);

// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: main
int main() {
bb7:
  int __retval11;
  struct Base* o12;
  int r13;
  unsigned long long c14 = 4;
  void* r15 = operator_new(c14);
  struct Derived* cast16 = (struct Derived*)r15;
  struct Derived c17 = {0};
  *cast16 = c17;
