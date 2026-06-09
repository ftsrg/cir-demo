// Struct definitions (auto-parsed)
struct CreateAndDestroy { unsigned char __field0; };

long _ZGVZ4mainE6second __attribute__((aligned(8))) = 0;
char _str[26] = "(local automatic in main)";
struct CreateAndDestroy _ZZ4mainE6second;
extern void __cxa_guard_release(long* p0);
extern int __cxa_guard_acquire(long* p0);
extern void CreateAndDestroy__CreateAndDestroy(struct CreateAndDestroy* p0, int p1, char* p2);
int main();

// function: main
int main() {
bb0:
  int __retval1;
  int c2 = 0;
  __retval1 = c2;
  char* cast3 = (char*)&_ZGVZ4mainE6second;
  char t4 = *cast3;
  char c5 = 0;
  _Bool c6 = ((t4 == c5)) ? 1 : 0;
  if (c6) {
    int r7 = __cxa_guard_acquire(&_ZGVZ4mainE6second);
    int c8 = 0;
    _Bool c9 = ((r7 != c8)) ? 1 : 0;
    if (c9) {
      int c10 = 2;
      char* cast11 = (char*)&(_str);
      CreateAndDestroy__CreateAndDestroy(&_ZZ4mainE6second, c10, cast11);
      __cxa_guard_release(&_ZGVZ4mainE6second);
    }
  }
  int c12 = 0;
  __retval1 = c12;
  int t13 = __retval1;
  return t13;
}

