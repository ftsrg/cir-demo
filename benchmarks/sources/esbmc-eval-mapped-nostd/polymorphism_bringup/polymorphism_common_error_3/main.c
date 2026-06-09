// Struct definitions (auto-parsed)
struct Shape { void* __field0; };
struct anon_struct_0 { unsigned char* __field0[4]; };

extern void *_ZTV5Shape[];
extern void *_ZTV5Shape[];
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
void Shape__Shape(struct Shape* p0);
void operator_delete(void* p0, unsigned long p1) { free(p0); }
int main();

// function: _ZN5ShapeC2Ev
void Shape__Shape(struct Shape* v0) {
bb1:
  struct Shape* this2;
  this2 = v0;
  struct Shape* t3 = this2;
  void* v4 = (void*)&_ZTV5Shape[2];
  void** v5 = (void**)t3;
  *(void**)(v5) = (void*)v4;
  return;
}

// function: main
int main() {
bb6:
  int __retval7;
  struct Shape* sh8;
  struct Shape* __new_result9;
  int c10 = 0;
  __retval7 = c10;
  unsigned long c11 = 8;
  void* r12 = operator_new(c11);
    struct Shape* cast13 = (struct Shape*)r12;
    __new_result9 = cast13;
    Shape__Shape(cast13);
  struct Shape* t14 = __new_result9;
  sh8 = t14;
  int c15 = 0;
  __retval7 = c15;
  int t16 = __retval7;
  return t16;
}

