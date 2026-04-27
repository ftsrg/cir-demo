// Struct definitions (auto-parsed)
struct Stack<double> { int size; int top; double* stackPtr; };
struct Stack<int> { int size; int top; int* stackPtr; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[35] = "Pushing elements onto doubleStack\\0A";
char _str_1[29] = "\\0AStack is full. Cannot push ";
char _str_2[37] = "\\0A\\0APopping elements from doubleStack\\0A";
char _str_3[29] = "\\0AStack is empty. Cannot pop\\0A";
char _str_4[33] = "\\0APushing elements onto intStack\\0A";
char _str_5[34] = "\\0A\\0APopping elements from intStack\\0A";
// function: _ZN5StackIdEC2Ei
void Stack_double___Stack(struct Stack<double>* v0, int v1) {
  int v2;
bb3:
  struct Stack<double>* this7;
  int s8;
  this7 = v0;
  s8 = v1;
  struct Stack<double>* t9 = this7;
  int t10 = s8;
  int c11 = 0;
  _Bool c12 = (t10 > c11) ? 1 : 0;
  if (c12) goto bb4; else goto bb5;
bb4:
  int t13 = s8;
  v2 = t13;
  goto bb6;
bb5:
  int c14 = 10;
  v2 = c14;
  goto bb6;
bb6:
  *t9->size = v2;
  int c15 = 1;
  int u16 = -c15;
  *t9->top = u16;
  int t17 = *t9->size;
  unsigned long long cast18 = (unsigned long long)t17;
  unsigned long long c19 = 8;
