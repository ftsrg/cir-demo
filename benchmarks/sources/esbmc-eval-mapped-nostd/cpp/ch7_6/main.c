// Struct definitions (auto-parsed)
struct Count { int x; };

void cannotSetX(struct Count* p0, int p1);
void Count__Count(struct Count* p0);
int main();

// function: _Z10cannotSetXR5Counti
void cannotSetX(struct Count* v0, int v1) {
bb2:
  struct Count* c3;
  int val4;
  c3 = v0;
  val4 = v1;
  int t5 = val4;
  struct Count* t6 = c3;
  t6->x = t5;
  return;
}

// function: _ZN5CountC2Ev
void Count__Count(struct Count* v7) {
bb8:
  struct Count* this9;
  this9 = v7;
  struct Count* t10 = this9;
  int c11 = 0;
  t10->x = c11;
  return;
}

// function: main
int main() {
bb12:
  int __retval13;
  struct Count counter14;
  int c15 = 0;
  __retval13 = c15;
  Count__Count(&counter14);
  int c16 = 3;
  cannotSetX(&counter14, c16);
  int c17 = 0;
  __retval13 = c17;
  int t18 = __retval13;
  return t18;
}

