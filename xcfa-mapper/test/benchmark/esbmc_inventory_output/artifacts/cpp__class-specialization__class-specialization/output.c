// Struct definitions (auto-parsed)
struct mycontainer<char> { char element; };
struct mycontainer<int> { int element; };

// function: _ZN11mycontainerIiEC2Ei
void mycontainer_int___mycontainer(struct mycontainer<int>* v0, int v1) {
bb2:
  struct mycontainer<int>* this3;
  int arg4;
  this3 = v0;
  arg4 = v1;
  struct mycontainer<int>* t5 = this3;
  int t6 = arg4;
  *t5->element = t6;
  return;
}

// function: _ZN11mycontainerIcEC2Ec
void mycontainer_char___mycontainer(struct mycontainer<char>* v7, char v8) {
bb9:
  struct mycontainer<char>* this10;
  char arg11;
  this10 = v7;
  arg11 = v8;
  struct mycontainer<char>* t12 = this10;
  char t13 = arg11;
  *t12->element = t13;
  return;
}

// function: main
int main() {
bb14:
  int __retval15;
  struct mycontainer<int> myint16;
  struct mycontainer<char> mychar17;
  int c18 = 7;
  mycontainer_int___mycontainer(&myint16, c18);
  char c19 = 106;
  mycontainer_char___mycontainer(&mychar17, c19);
  int c20 = 0;
  __retval15 = c20;
  int t21 = __retval15;
  return t21;
}

