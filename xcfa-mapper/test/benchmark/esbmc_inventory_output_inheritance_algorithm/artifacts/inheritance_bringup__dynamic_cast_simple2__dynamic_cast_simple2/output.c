// Struct definitions (auto-parsed)
struct CPolygon { int width; int height; };

char _str[19] = "rec->area() == 100";
char _str_1[115] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/inheritance_bringup/dynamic_cast_simple2/main.cpp";
char _str_2[11] = "int main()";
// function: _Znwm
void* operator_new(unsigned long long);

// function: _ZN8CPolygonC2Eii
void CPolygon__CPolygon(struct CPolygon* v0, int v1, int v2) {
bb3:
  struct CPolygon* this4;
  int w5;
  int h6;
  this4 = v0;
  w5 = v1;
  h6 = v2;
  struct CPolygon* t7 = this4;
  int t8 = w5;
  t7->width = t8;
  int t9 = h6;
  t7->height = t9;
  return;
}

// function: _ZdlPvm
void operator_delete(void*, unsigned long long);

// function: _ZN8CPolygon10set_valuesEii
void CPolygon__set_values(struct CPolygon* v10, int v11, int v12) {
bb13:
  struct CPolygon* this14;
  int a15;
  int b16;
  this14 = v10;
  a15 = v11;
  b16 = v12;
  struct CPolygon* t17 = this14;
  int t18 = a15;
  t17->width = t18;
  int t19 = b16;
  t17->height = t19;
  return;
}

// function: _ZN8CPolygon4areaEv
int CPolygon__area(struct CPolygon* v20) {
bb21:
  struct CPolygon* this22;
  int __retval23;
  this22 = v20;
  struct CPolygon* t24 = this22;
  int t25 = t24->width;
  int t26 = t24->height;
  int b27 = t25 * t26;
  __retval23 = b27;
  int t28 = __retval23;
  return t28;
}

// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: main
int main() {
  void* v29;
  unsigned int v30;
bb31:
  int __retval44;
  struct CPolygon* polygons45;
  struct CPolygon* rec46;
  unsigned long long c47 = 8;
  void* r48 = operator_new(c47);
  struct CPolygon* cast49 = (struct CPolygon*)r48;
  int c50 = 20;
  int c51 = 30;
  goto bb32;
bb32:
