// Struct definitions (auto-parsed)
struct Foo { int value; };

char _str[13] = "Executing...";
// function: printf
int printf(char*);

// function: _ZN3Foo7ExecuteEv
void Foo__Execute(struct Foo* v0) {
bb1:
  struct Foo* this2;
  this2 = v0;
  struct Foo* t3 = this2;
  char* cast4 = (char*)_str;
  int r5 = printf(cast4);
  return;
}

// function: _ZN3Foo9IncrementEv
void Foo__Increment(struct Foo* v6) {
bb7:
  struct Foo* this8;
  this8 = v6;
  struct Foo* t9 = this8;
  int t10 = *t9->value;
  int u11 = ++t10;
  *t9->value = u11;
  return;
}

// function: _Znwm
void* operator_new(unsigned long long);

// function: _ZN3FooC2Ev
void Foo__Foo(struct Foo* v12) {
bb13:
  struct Foo* this14;
  this14 = v12;
  struct Foo* t15 = this14;
  int c16 = 0;
  *t15->value = c16;
  return;
}

// function: _ZdlPvm
void operator_delete(void*, unsigned long long);

// function: main
int main() {
  void* v17;
  unsigned int v18;
bb19:
  int __retval25;
  struct Foo* foo26;
  unsigned long long c27 = 4;
  void* r28 = operator_new(c27);
  struct Foo* cast29 = (struct Foo*)r28;
  goto bb20;
bb20:
