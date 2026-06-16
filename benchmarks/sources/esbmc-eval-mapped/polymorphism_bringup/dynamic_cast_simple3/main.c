// Struct definitions (auto-parsed)
struct CPolygon { void* __field0; int width; int height; };
struct CRectangle { struct CPolygon __field0; };
struct anon_struct_0 { unsigned char* __field0[3]; };
struct anon_struct_1 { unsigned char* __field0; unsigned char* __field1; };
struct anon_struct_2 { unsigned char* __field0; unsigned char* __field1; unsigned char* __field2; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) int __VERIFIER_virtual_call_int(void* __obj, int __slot) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((int(*)(void*))__fn)(__obj);
}

extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern unsigned char _ZTI8CPolygon[];
extern unsigned char _ZTI10CRectangle[];
char _str[19] = "rec->area() == 100";
char _str_1[129] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/polymorphism_bringup/dynamic_cast_simple3/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
char _ZTS10CRectangle[13] = "10CRectangle";
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS8CPolygon[10] = "8CPolygon";
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
void CRectangle__CRectangle(struct CRectangle* p0, int p1, int p2);
void operator_delete(void* p0, unsigned long p1) { free(p0); }
void CPolygon__set_values(struct CPolygon* p0, int p1, int p2);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();
void CPolygon__CPolygon(struct CPolygon* p0);
int CRectangle__area(struct CRectangle* p0);
__attribute__((weak)) void __cxa_pure_virtual(void) { __builtin_trap(); }

void *_ZTV10CRectangle[] = { (void*)0, (void*)0, (void*)&CRectangle__area };
void *_ZTV8CPolygon[] = { (void*)0, (void*)0, (void*)&__cxa_pure_virtual };

// function: _ZN10CRectangleC2Eii
void CRectangle__CRectangle(struct CRectangle* v0, int v1, int v2) {
bb3: ;
  struct CRectangle* this4;
  int w5;
  int h6;
  this4 = v0;
  w5 = v1;
  h6 = v2;
  struct CRectangle* t7 = this4;
  struct CPolygon* base8 = (struct CPolygon*)((char *)t7 + 0);
  CPolygon__CPolygon(base8);
  void* v9 = (void*)&_ZTV10CRectangle[2];
  void** v10 = (void**)t7;
  *(void**)(v10) = (void*)v9;
  int t11 = w5;
  struct CPolygon* base12 = (struct CPolygon*)((char *)t7 + 0);
  base12->width = t11;
  int t13 = h6;
  struct CPolygon* base14 = (struct CPolygon*)((char *)t7 + 0);
  base14->height = t13;
  return;
}

// function: _ZN8CPolygon10set_valuesEii
void CPolygon__set_values(struct CPolygon* v15, int v16, int v17) {
bb18: ;
  struct CPolygon* this19;
  int a20;
  int b21;
  this19 = v15;
  a20 = v16;
  b21 = v17;
  struct CPolygon* t22 = this19;
  int t23 = a20;
  t22->width = t23;
  int t24 = b21;
  t22->height = t24;
  return;
}

// function: main
int main() {
bb25: ;
  int __retval26;
  struct CRectangle* polygons27;
  struct CRectangle* __new_result28;
  struct CPolygon* rec29;
  int c30 = 0;
  __retval26 = c30;
  unsigned long c31 = 16;
  void* r32 = operator_new(c31);
    struct CRectangle* cast33 = (struct CRectangle*)r32;
    __new_result28 = cast33;
    int c34 = 20;
    int c35 = 30;
    CRectangle__CRectangle(cast33, c34, c35);
  struct CRectangle* t36 = __new_result28;
  polygons27 = t36;
  struct CRectangle* t37 = polygons27;
  struct CPolygon* base38 = (struct CPolygon*)((char *)t37 + 0);
  rec29 = base38;
    struct CPolygon* t39 = rec29;
    struct CPolygon* c40 = ((void*)0);
    _Bool c41 = ((t39 != c40)) ? 1 : 0;
    if (c41) {
      struct CPolygon* t42 = rec29;
      int c43 = 10;
      int c44 = 10;
      CPolygon__set_values(t42, c43, c44);
      struct CPolygon* t45 = rec29;
      void** v46 = (void**)t45;
      void* v47 = *((void**)v46);
      int vcall50 = (int)__VERIFIER_virtual_call_int(t45, 0);
      int c51 = 100;
      _Bool c52 = ((vcall50 == c51)) ? 1 : 0;
      if (c52) {
      } else {
        char* cast53 = (char*)&(_str);
        char* c54 = (char*)_str_1;
        unsigned int c55 = 43;
        char* cast56 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast53, c54, c55, cast56);
      }
    }
  int c57 = 0;
  __retval26 = c57;
  int t58 = __retval26;
  return t58;
}

// function: _ZN8CPolygonC2Ev
void CPolygon__CPolygon(struct CPolygon* v59) {
bb60: ;
  struct CPolygon* this61;
  this61 = v59;
  struct CPolygon* t62 = this61;
  void* v63 = (void*)&_ZTV8CPolygon[2];
  void** v64 = (void**)t62;
  *(void**)(v64) = (void*)v63;
  return;
}

// function: _ZN10CRectangle4areaEv
int CRectangle__area(struct CRectangle* v65) {
bb66: ;
  struct CRectangle* this67;
  int __retval68;
  this67 = v65;
  struct CRectangle* t69 = this67;
  struct CPolygon* base70 = (struct CPolygon*)((char *)t69 + 0);
  int t71 = base70->width;
  struct CPolygon* base72 = (struct CPolygon*)((char *)t69 + 0);
  int t73 = base72->height;
  int b74 = t71 * t73;
  __retval68 = b74;
  int t75 = __retval68;
  return t75;
}

