// Struct definitions (auto-parsed)
struct X_void_ { unsigned char __field0; };

unsigned long _ZL7current __attribute__((aligned(8))) = 0;
_Bool _ZL5error;
char _str[16] = "0 == ( current)";
char _str_1[114] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/gcc-template-tests/pretty1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[26] = "X<T>::X() [with T = void]";
char _str_3[27] = "X<T>::~X() [with T = void]";
char __PRETTY_FUNCTION____ZN1XIvEC2Ev[24] = "X<void>::X() [T = void]";
char __PRETTY_FUNCTION____ZN1XIvED2Ev[25] = "X<void>::~X() [T = void]";
extern int strcmp(char* p0, char* p1);
void Verify(char* p0);
void X_void___X(struct X_void_* p0);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void X_void____X(struct X_void_* p0);
int main();

char* _ZL5names[3] __attribute__((aligned(16))) = {(char*)(_str_2), (char*)(_str_3), 0};
// function: _Z6VerifyPKc
void Verify(char* v0) {
bb1: ;
  char* ptr2;
  ptr2 = v0;
  char* t3 = ptr2;
  unsigned long t4 = _ZL7current;
  unsigned long u5 = t4 + 1;
  *&_ZL7current = u5;
  char* t6 = _ZL5names[t4];
  int r7 = strcmp(t3, t6);
  _Bool cast8 = (_Bool)r7;
  *&_ZL5error = cast8;
  return;
}

// function: _ZN1XIvEC2Ev
void X_void___X(struct X_void_* v9) {
bb10: ;
  struct X_void_* this11;
  this11 = v9;
  struct X_void_* t12 = this11;
  char* cast13 = (char*)&(__PRETTY_FUNCTION____ZN1XIvEC2Ev);
  Verify(cast13);
  return;
}

// function: _ZN1XIvED2Ev
void X_void____X(struct X_void_* v14) {
bb15: ;
  struct X_void_* this16;
  this16 = v14;
  struct X_void_* t17 = this16;
  char* cast18 = (char*)&(__PRETTY_FUNCTION____ZN1XIvED2Ev);
  Verify(cast18);
  return;
}

// function: main
int main() {
bb19: ;
  int __retval20;
  int c21 = 0;
  __retval20 = c21;
    struct X_void_ x22;
    X_void___X(&x22);
        _Bool t23 = _ZL5error;
        if (t23) {
          unsigned long c24 = 0;
          unsigned long t25 = _ZL7current;
          _Bool c26 = ((c24 == t25)) ? 1 : 0;
          if (c26) {
          } else {
            char* cast27 = (char*)&(_str);
            char* c28 = (char*)_str_1;
            unsigned int c29 = 46;
            char* cast30 = (char*)&(__PRETTY_FUNCTION___main);
            reach_error();
            __assert_fail(cast27, c28, c29, cast30);
          }
        }
    {
      X_void____X(&x22);
    }
    _Bool t31 = _ZL5error;
    if (t31) {
      unsigned long c32 = 0;
      unsigned long t33 = _ZL7current;
      _Bool c34 = ((c32 == t33)) ? 1 : 0;
      if (c34) {
      } else {
        char* cast35 = (char*)&(_str);
        char* c36 = (char*)_str_1;
        unsigned int c37 = 49;
        char* cast38 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast35, c36, c37, cast38);
      }
    }
  int c39 = 0;
  __retval20 = c39;
  int t40 = __retval20;
  return t40;
}

