// Struct definitions (auto-parsed)
struct PaintCost { unsigned char __placeholder; };
struct Rectangle { unsigned char __placeholder; };
struct Shape { int width; int height; int number; };

char _str[22] = "Rect.getNumber() == 2";
char _str_1[108] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/inheritance_bringup/inheritance07/main.cpp";
char _str_2[11] = "int main()";
char _str_3[11] = "area == 35";
char _str_4[18] = "totalCost == 4900";
// function: _ZN5Shape8setWidthEi
void Shape__setWidth(struct Shape* v0, int v1) {
bb2:
  struct Shape* this3;
  int w4;
  this3 = v0;
  w4 = v1;
  struct Shape* t5 = this3;
  int t6 = w4;
  *t5->width = t6;
  return;
}

// function: _ZN5Shape9setHeightEi
void Shape__setHeight(struct Shape* v7, int v8) {
bb9:
  struct Shape* this10;
  int h11;
  this10 = v7;
  h11 = v8;
  struct Shape* t12 = this10;
  int t13 = h11;
  *t12->height = t13;
  return;
}

// function: _ZN5Shape9setNumberEv
void Shape__setNumber(struct Shape* v14) {
bb15:
  struct Shape* this16;
  this16 = v14;
  struct Shape* t17 = this16;
  int c18 = 2;
  *t17->number = c18;
  return;
}

// function: _ZN5Shape9getNumberEv
int Shape__getNumber(struct Shape* v19) {
bb20:
  struct Shape* this21;
  int __retval22;
  this21 = v19;
  struct Shape* t23 = this21;
  int t24 = *t23->number;
  __retval22 = t24;
  int t25 = __retval22;
  return t25;
}

// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: _ZN9Rectangle7getAreaEv
int Rectangle__getArea(struct Rectangle* v26) {
bb27:
  struct Rectangle* this28;
  int __retval29;
  this28 = v26;
  struct Rectangle* t30 = this28;
