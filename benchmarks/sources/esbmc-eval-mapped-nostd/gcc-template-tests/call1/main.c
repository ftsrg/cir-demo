// Struct definitions (auto-parsed)
struct A_int_ { unsigned char __field0; };

void A_int___A(struct A_int_* p0);
int main(int p0, char** p1);
void A_int___foo();

// function: _ZN1AIiEC2Ev
void A_int___A(struct A_int_* v0) {
bb1:
  struct A_int_* this2;
  void* a3;
  this2 = v0;
  struct A_int_* t4 = this2;
  a3 = &A_int___foo;
  return;
}

// function: main
int main(int v5, char** v6) {
bb7:
  int argc8;
  char** argv9;
  int __retval10;
  struct A_int_ a11;
  argc8 = v5;
  argv9 = v6;
  int c12 = 0;
  __retval10 = c12;
  A_int___A(&a11);
  int t13 = __retval10;
  return t13;
}

// function: _ZN1AIiE3fooEv
void A_int___foo() {
bb14:
  return;
}

