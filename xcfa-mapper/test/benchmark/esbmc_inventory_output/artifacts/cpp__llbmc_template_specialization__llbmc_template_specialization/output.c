// Struct definitions (auto-parsed)
struct mycontainer<char> { char element; };
struct mycontainer<float> { float element; };
struct mycontainer<int> { int element; };

char _str[22] = "myint.increase() == 8";
char _str_1[108] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/llbmc_template_specialization/main.cpp";
char _str_2[11] = "int main()";
char _str_3[26] = "mychar.uppercase() == 'J'";
char _str_4[23] = "myfloat.test() == 3.0f";
// function: _ZN11mycontainerIiEC2Ei
void mycontainer_int___mycontainer(struct mycontainer<int>* v0, int v1) {
bb2:
  struct mycontainer<int>* this3;
  int arg4;
  this3 = v0;
  arg4 = v1;
  struct mycontainer<int>* t5 = this3;
  int t6 = arg4;
  *t5->element = t6;
  return;
}

// function: _ZN11mycontainerIcEC2Ec
void mycontainer_char___mycontainer(struct mycontainer<char>* v7, char v8) {
bb9:
  struct mycontainer<char>* this10;
  char arg11;
  this10 = v7;
  arg11 = v8;
  struct mycontainer<char>* t12 = this10;
  char t13 = arg11;
  *t12->element = t13;
  return;
}

// function: _ZN11mycontainerIfEC2Ef
void mycontainer_float___mycontainer(struct mycontainer<float>* v14, float v15) {
bb16:
  struct mycontainer<float>* this17;
  float arg18;
  this17 = v14;
  arg18 = v15;
  struct mycontainer<float>* t19 = this17;
  float t20 = arg18;
  *t19->element = t20;
  return;
}

// function: _ZN11mycontainerIiE8increaseEv
int mycontainer_int___increase(struct mycontainer<int>* v21) {
bb22:
  struct mycontainer<int>* this23;
  int __retval24;
  this23 = v21;
  struct mycontainer<int>* t25 = this23;
  int t26 = *t25->element;
  int u27 = ++t26;
  *t25->element = u27;
  __retval24 = u27;
  int t28 = __retval24;
  return t28;
}

// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: _ZN11mycontainerIcE9uppercaseEv
char mycontainer_char___uppercase(struct mycontainer<char>* v29) {
  _Bool v30;
  _Bool v31;
bb32:
  struct mycontainer<char>* this43;
  char __retval44;
  this43 = v29;
  struct mycontainer<char>* t45 = this43;
  goto bb33;
bb33:
  char t46 = *t45->element;
  int cast47 = (int)t46;
  char c48 = 97;
  int cast49 = (int)c48;
  _Bool c50 = (cast47 >= cast49) ? 1 : 0;
  if (c50) goto bb34; else goto bb38;
bb34:
  char t51 = *t45->element;
  int cast52 = (int)t51;
  char c53 = 122;
  int cast54 = (int)c53;
  _Bool c55 = (cast52 <= cast54) ? 1 : 0;
  if (c55) goto bb35; else goto bb36;
bb35:
  _Bool c56 = 1;
  v30 = c56;
  goto bb37;
bb36:
  _Bool c57 = 0;
  v30 = c57;
  goto bb37;
bb37:
  v31 = v30;
  goto bb39;
bb38:
  _Bool c58 = 0;
  v31 = c58;
  goto bb39;
bb39:
  if (v31) goto bb40; else goto bb41;
bb40:
  char c59 = 65;
  int cast60 = (int)c59;
  char c61 = 97;
  int cast62 = (int)c61;
  int b63 = cast60 - cast62;
  char t64 = *t45->element;
  int cast65 = (int)t64;
  int b66 = cast65 + b63;
  char cast67 = (char)b66;
  *t45->element = cast67;
  goto bb41;
bb41:
  goto bb42;
bb42:
  char t68 = *t45->element;
  __retval44 = t68;
  char t69 = __retval44;
  return t69;
}

// function: _ZN11mycontainerIfE4testEv
float mycontainer_float___test(struct mycontainer<float>* v70) {
bb71:
  struct mycontainer<float>* this72;
  float __retval73;
  this72 = v70;
  struct mycontainer<float>* t74 = this72;
  float t75 = *t74->element;
  int c76 = 2;
  float cast77 = (float)c76;
  float b78 = t75 + cast77;
  __retval73 = b78;
  float t79 = __retval73;
  return t79;
}

// function: main
int main() {
bb80:
  int __retval90;
  struct mycontainer<int> myint91;
  struct mycontainer<char> mychar92;
  struct mycontainer<float> myfloat93;
  int c94 = 7;
  mycontainer_int___mycontainer(&myint91, c94);
  char c95 = 106;
  mycontainer_char___mycontainer(&mychar92, c95);
  float c96 = 1;
  mycontainer_float___mycontainer(&myfloat93, c96);
  int r97 = mycontainer_int___increase(&myint91);
  int c98 = 8;
  _Bool c99 = (r97 == c98) ? 1 : 0;
  if (c99) goto bb81; else goto bb82;
bb81:
  int c100 = 0;
  goto bb83;
bb82:
  char* cast101 = (char*)_str;
