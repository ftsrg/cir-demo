extern void abort(void);
// Struct definitions (auto-parsed)
union pthread_attr_t { char __field0[56]; long __field1; };

int x __attribute__((aligned(4))) = 0;
void* t1(void* p0);
void* t2(void* p0);
extern int pthread_create(unsigned long* p0, union pthread_attr_t* p1, void* p2, void* p3);
int main();

// function: _Z2t1Pv
void* t1(void* v0) {
bb1:
  void* arg2;
  void* __retval3;
  arg2 = v0;
  int t4 = x;
  int u5 = t4 + 1;
  *&x = u5;
  int t6 = x;
  int u7 = t6 + 1;
  *&x = u7;
  abort();
}

// function: _Z2t2Pv
void* t2(void* v8) {
bb9:
  void* arg10;
  void* __retval11;
  arg10 = v8;
  int t12 = x;
  int u13 = t12 + 1;
  *&x = u13;
  int t14 = x;
  int u15 = t14 + 1;
  *&x = u15;
  abort();
}

// function: main
int main() {
bb16:
  int __retval17;
  unsigned long id118;
  unsigned long id219;
  int c20 = 0;
  __retval17 = c20;
  union pthread_attr_t* c21 = ((void*)0);
  void* c22 = ((void*)0);
  int r23 = pthread_create(&id118, c21, &t1, c22);
  union pthread_attr_t* c24 = ((void*)0);
  void* c25 = ((void*)0);
  int r26 = pthread_create(&id219, c24, &t2, c25);
  int c27 = 0;
  __retval17 = c27;
  int t28 = __retval17;
  return t28;
}

