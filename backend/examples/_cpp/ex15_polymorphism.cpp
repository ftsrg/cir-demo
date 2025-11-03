extern void reach_error();
extern int __VERIFIER_nondet_int();

class I { public: virtual int op(int) = 0; };
class A : public I { public: int op(int x) override { return x-1; } };
class B : public I { public: int op(int x) override { return x+2; } };

int main(){
  I *i = (__VERIFIER_nondet_int() % 2) ? static_cast<I*>(new A()) : static_cast<I*>(new B());
  int r = i->op(__VERIFIER_nondet_int());
  if (r == -1) reach_error();
  delete i;
  return 0;
}
