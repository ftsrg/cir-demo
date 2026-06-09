char _ZN1BIiE1cE[1];
char _ZN1BIfE1cE[1];
char _ZN1DIiE1cE[1];
char _ZN1DIfE1cE[1];
int main();

char* _ZN1AIXadsoKcL_ZN1BIiE1cEEEEE1pE __attribute__((aligned(8))) = (char*)(_ZN1BIiE1cE);
char* _ZN1AIXadsoKcL_ZN1BIfE1cEEEEE1pE __attribute__((aligned(8))) = (char*)(_ZN1BIfE1cE);
char* _ZN1AIXadsoKcL_ZN1DIiE1cEEEEE1pE __attribute__((aligned(8))) = (char*)(_ZN1DIiE1cE);
char* _ZN1AIXadsoKcL_ZN1DIfE1cEEEEE1pE __attribute__((aligned(8))) = (char*)(_ZN1DIfE1cE);
// function: main
int main() {
bb0:
  int __retval1;
  int c2 = 0;
  __retval1 = c2;
    char* t3 = _ZN1AIXadsoKcL_ZN1BIiE1cEEEEE1pE;
    char* cast4 = (char*)&(_ZN1BIiE1cE);
    _Bool c5 = ((t3 == cast4)) ? 1 : 0;
    _Bool u6 = !c5;
    if (u6) {
      int c7 = 1;
      __retval1 = c7;
      int t8 = __retval1;
      return t8;
    }
    char* t9 = _ZN1AIXadsoKcL_ZN1BIfE1cEEEEE1pE;
    char* cast10 = (char*)&(_ZN1BIfE1cE);
    _Bool c11 = ((t9 == cast10)) ? 1 : 0;
    _Bool u12 = !c11;
    if (u12) {
      int c13 = 1;
      __retval1 = c13;
      int t14 = __retval1;
      return t14;
    }
    char* t15 = _ZN1AIXadsoKcL_ZN1BIfE1cEEEEE1pE;
    char* cast16 = (char*)&(_ZN1BIiE1cE);
    _Bool c17 = ((t15 != cast16)) ? 1 : 0;
    _Bool u18 = !c17;
    if (u18) {
      int c19 = 1;
      __retval1 = c19;
      int t20 = __retval1;
      return t20;
    }
    char* t21 = _ZN1AIXadsoKcL_ZN1DIiE1cEEEEE1pE;
    char* cast22 = (char*)&(_ZN1DIiE1cE);
    _Bool c23 = ((t21 == cast22)) ? 1 : 0;
    _Bool u24 = !c23;
    if (u24) {
      int c25 = 1;
      __retval1 = c25;
      int t26 = __retval1;
      return t26;
    }
    char* t27 = _ZN1AIXadsoKcL_ZN1DIfE1cEEEEE1pE;
    char* cast28 = (char*)&(_ZN1DIfE1cE);
    _Bool c29 = ((t27 == cast28)) ? 1 : 0;
    _Bool u30 = !c29;
    if (u30) {
      int c31 = 1;
      __retval1 = c31;
      int t32 = __retval1;
      return t32;
    }
    char* t33 = _ZN1AIXadsoKcL_ZN1DIfE1cEEEEE1pE;
    char* cast34 = (char*)&(_ZN1DIiE1cE);
    _Bool c35 = ((t33 != cast34)) ? 1 : 0;
    _Bool u36 = !c35;
    if (u36) {
      int c37 = 1;
      __retval1 = c37;
      int t38 = __retval1;
      return t38;
    }
  int t39 = __retval1;
  return t39;
}

