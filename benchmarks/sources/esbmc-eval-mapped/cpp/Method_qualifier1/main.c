// Struct definitions (auto-parsed)
struct my_class { unsigned char __field0; };

char _str[18] = "zz.my_method()==1";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/Method_qualifier1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[24] = "zz_const.my_method()==2";
char _str_3[27] = "zz_volatile.my_method()==3";
char _str_4[33] = "zz_const_volatile.my_method()==4";
int my_class__my_method(struct my_class* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int my_class__my_method___const(struct my_class* p0);
int my_class__my_method___volatile(struct my_class* p0);
int my_class__my_method___const_volatile(struct my_class* p0);
int main();

// function: _ZN8my_class9my_methodEv
int my_class__my_method(struct my_class* v0) {
bb1:
  struct my_class* this2;
  int __retval3;
  this2 = v0;
  struct my_class* t4 = this2;
  int c5 = 1;
  __retval3 = c5;
  int t6 = __retval3;
  return t6;
}

// function: _ZNK8my_class9my_methodEv
int my_class__my_method___const(struct my_class* v7) {
bb8:
  struct my_class* this9;
  int __retval10;
  this9 = v7;
  struct my_class* t11 = this9;
  int c12 = 2;
  __retval10 = c12;
  int t13 = __retval10;
  return t13;
}

// function: _ZNV8my_class9my_methodEv
int my_class__my_method___volatile(struct my_class* v14) {
bb15:
  struct my_class* this16;
  int __retval17;
  this16 = v14;
  struct my_class* t18 = this16;
  int c19 = 3;
  __retval17 = c19;
  int t20 = __retval17;
  return t20;
}

// function: _ZNVK8my_class9my_methodEv
int my_class__my_method___const_volatile(struct my_class* v21) {
bb22:
  struct my_class* this23;
  int __retval24;
  this23 = v21;
  struct my_class* t25 = this23;
  int c26 = 4;
  __retval24 = c26;
  int t27 = __retval24;
  return t27;
}

// function: main
int main() {
bb28:
  int __retval29;
  struct my_class zz30;
  struct my_class* zz_const31;
  struct my_class* zz_volatile32;
  struct my_class* zz_const_volatile33;
  int c34 = 0;
  __retval29 = c34;
  zz_const31 = &zz30;
  zz_volatile32 = &zz30;
  zz_const_volatile33 = &zz30;
  int r35 = my_class__my_method(&zz30);
  int c36 = 1;
  _Bool c37 = ((r35 == c36)) ? 1 : 0;
  if (c37) {
  } else {
    char* cast38 = (char*)&(_str);
    char* c39 = _str_1;
    unsigned int c40 = 26;
    char* cast41 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast38, c39, c40, cast41);
  }
  struct my_class* t42 = zz_const31;
  int r43 = my_class__my_method___const(t42);
  int c44 = 2;
  _Bool c45 = ((r43 == c44)) ? 1 : 0;
  if (c45) {
  } else {
    char* cast46 = (char*)&(_str_2);
    char* c47 = _str_1;
    unsigned int c48 = 27;
    char* cast49 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast46, c47, c48, cast49);
  }
  struct my_class* t50 = zz_volatile32;
  int r51 = my_class__my_method___volatile(t50);
  int c52 = 3;
  _Bool c53 = ((r51 == c52)) ? 1 : 0;
  if (c53) {
  } else {
    char* cast54 = (char*)&(_str_3);
    char* c55 = _str_1;
    unsigned int c56 = 28;
    char* cast57 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast54, c55, c56, cast57);
  }
  struct my_class* t58 = zz_const_volatile33;
  int r59 = my_class__my_method___const_volatile(t58);
  int c60 = 4;
  _Bool c61 = ((r59 == c60)) ? 1 : 0;
  if (c61) {
  } else {
    char* cast62 = (char*)&(_str_4);
    char* c63 = _str_1;
    unsigned int c64 = 29;
    char* cast65 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast62, c63, c64, cast65);
  }
  int t66 = __retval29;
  return t66;
}

