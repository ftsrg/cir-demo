// Struct definitions (auto-parsed)
struct fgasdf_char_ { char qux; };

void fgasdf_char___fgasdf_int_(struct fgasdf_char_* p0, int* p1);
int main();

// function: _ZN6fgasdfIcEC2IiEERKT_
void fgasdf_char___fgasdf_int_(struct fgasdf_char_* v0, int* v1) {
bb2:
  struct fgasdf_char_* this3;
  int* b4;
  char huuurrr5;
  this3 = v0;
  b4 = v1;
  struct fgasdf_char_* t6 = this3;
  char c7 = 97;
  huuurrr5 = c7;
  int* t8 = b4;
  int t9 = *t8;
  char cast10 = (char)t9;
  t6->qux = cast10;
  return;
}

// function: main
int main() {
bb11:
  int __retval12;
  int wuwuwuwu13;
  struct fgasdf_char_ tralala14;
  int c15 = 0;
  __retval12 = c15;
  int c16 = 5168;
  wuwuwuwu13 = c16;
  fgasdf_char___fgasdf_int_(&tralala14, &wuwuwuwu13);
  int c17 = 0;
  __retval12 = c17;
  int t18 = __retval12;
  return t18;
}

