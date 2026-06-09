// Struct definitions (auto-parsed)
struct mycontainer_char_ { char element; };
struct mycontainer_float_ { float element; };
struct mycontainer_int_ { int element; };

char _str[22] = "myint.increase() == 8";
char _str_1[121] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/llbmc_template_specialization/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[26] = "mychar.uppercase() == 'J'";
char _str_3[23] = "myfloat.test() == 3.0f";
void mycontainer_int___mycontainer(struct mycontainer_int_* p0, int p1);
void mycontainer_char___mycontainer(struct mycontainer_char_* p0, char p1);
void mycontainer_float___mycontainer(struct mycontainer_float_* p0, float p1);
int mycontainer_int___increase(struct mycontainer_int_* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
char mycontainer_char___uppercase(struct mycontainer_char_* p0);
float mycontainer_float___test(struct mycontainer_float_* p0);
int main();

// function: _ZN11mycontainerIiEC2Ei
void mycontainer_int___mycontainer(struct mycontainer_int_* v0, int v1) {
bb2:
  struct mycontainer_int_* this3;
  int arg4;
  this3 = v0;
  arg4 = v1;
  struct mycontainer_int_* t5 = this3;
  int t6 = arg4;
  t5->element = t6;
  return;
}

// function: _ZN11mycontainerIcEC2Ec
void mycontainer_char___mycontainer(struct mycontainer_char_* v7, char v8) {
bb9:
  struct mycontainer_char_* this10;
  char arg11;
  this10 = v7;
  arg11 = v8;
  struct mycontainer_char_* t12 = this10;
  char t13 = arg11;
  t12->element = t13;
  return;
}

// function: _ZN11mycontainerIfEC2Ef
void mycontainer_float___mycontainer(struct mycontainer_float_* v14, float v15) {
bb16:
  struct mycontainer_float_* this17;
  float arg18;
  this17 = v14;
  arg18 = v15;
  struct mycontainer_float_* t19 = this17;
  float t20 = arg18;
  t19->element = t20;
  return;
}

// function: _ZN11mycontainerIiE8increaseEv
int mycontainer_int___increase(struct mycontainer_int_* v21) {
bb22:
  struct mycontainer_int_* this23;
  int __retval24;
  this23 = v21;
  struct mycontainer_int_* t25 = this23;
  int t26 = t25->element;
  int u27 = t26 + 1;
  t25->element = u27;
  __retval24 = u27;
  int t28 = __retval24;
  return t28;
}

// function: _ZN11mycontainerIcE9uppercaseEv
char mycontainer_char___uppercase(struct mycontainer_char_* v29) {
bb30:
  struct mycontainer_char_* this31;
  char __retval32;
  this31 = v29;
  struct mycontainer_char_* t33 = this31;
    char t34 = t33->element;
    int cast35 = (int)t34;
    int c36 = 97;
    _Bool c37 = ((cast35 >= c36)) ? 1 : 0;
    _Bool ternary38;
    if (c37) {
      char t39 = t33->element;
      int cast40 = (int)t39;
      int c41 = 122;
      _Bool c42 = ((cast40 <= c41)) ? 1 : 0;
      ternary38 = (_Bool)c42;
    } else {
      _Bool c43 = 0;
      ternary38 = (_Bool)c43;
    }
    if (ternary38) {
      int c44 = 65;
      int c45 = 97;
      int b46 = c44 - c45;
      char t47 = t33->element;
      int cast48 = (int)t47;
      int b49 = cast48 + b46;
      char cast50 = (char)b49;
      t33->element = cast50;
    }
  char t51 = t33->element;
  __retval32 = t51;
  char t52 = __retval32;
  return t52;
}

// function: _ZN11mycontainerIfE4testEv
float mycontainer_float___test(struct mycontainer_float_* v53) {
bb54:
  struct mycontainer_float_* this55;
  float __retval56;
  this55 = v53;
  struct mycontainer_float_* t57 = this55;
  float t58 = t57->element;
  int c59 = 2;
  float cast60 = (float)c59;
  float b61 = t58 + cast60;
  __retval56 = b61;
  float t62 = __retval56;
  return t62;
}

// function: main
int main() {
bb63:
  int __retval64;
  struct mycontainer_int_ myint65;
  struct mycontainer_char_ mychar66;
  struct mycontainer_float_ myfloat67;
  int c68 = 0;
  __retval64 = c68;
  int c69 = 7;
  mycontainer_int___mycontainer(&myint65, c69);
  char c70 = 106;
  mycontainer_char___mycontainer(&mychar66, c70);
  float c71 = 0x1p0f;
  mycontainer_float___mycontainer(&myfloat67, c71);
  int r72 = mycontainer_int___increase(&myint65);
  int c73 = 8;
  _Bool c74 = ((r72 == c73)) ? 1 : 0;
  if (c74) {
  } else {
    char* cast75 = (char*)&(_str);
    char* c76 = _str_1;
    unsigned int c77 = 49;
    char* cast78 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast75, c76, c77, cast78);
  }
  char r79 = mycontainer_char___uppercase(&mychar66);
  int cast80 = (int)r79;
  int c81 = 74;
  _Bool c82 = ((cast80 == c81)) ? 1 : 0;
  if (c82) {
  } else {
    char* cast83 = (char*)&(_str_2);
    char* c84 = _str_1;
    unsigned int c85 = 50;
    char* cast86 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast83, c84, c85, cast86);
  }
  float r87 = mycontainer_float___test(&myfloat67);
  float c88 = 0x1.8p1f;
  _Bool c89 = ((r87 == c88)) ? 1 : 0;
  if (c89) {
  } else {
    char* cast90 = (char*)&(_str_3);
    char* c91 = _str_1;
    unsigned int c92 = 51;
    char* cast93 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast90, c91, c92, cast93);
  }
  int c94 = 0;
  __retval64 = c94;
  int t95 = __retval64;
  return t95;
}

