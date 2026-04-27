// Struct definitions (auto-parsed)
struct PaintCost { unsigned char __placeholder; };
struct Rectangle { unsigned char __placeholder; };
struct Shape { int width; int height; };

char _str[10] = "cost == 0";
char _str_1[113] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/inheritance_bringup/inheritance01_fail/main.cpp";
char _str_2[11] = "int main()";
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

// function: _ZN9Rectangle7getAreaEv
int Rectangle__getArea(struct Rectangle* v14) {
bb15:
  struct Rectangle* this16;
  int __retval17;
  this16 = v14;
  struct Rectangle* t18 = this16;
