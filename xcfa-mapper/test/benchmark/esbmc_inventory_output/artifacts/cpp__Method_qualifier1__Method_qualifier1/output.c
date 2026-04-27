// Struct definitions (auto-parsed)
struct my_class { unsigned char __placeholder; };

char _str[18] = "zz.my_method()==1";
char _str_1[96] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/Method_qualifier1/main.cpp";
char _str_2[11] = "int main()";
char _str_3[24] = "zz_const.my_method()==2";
char _str_4[27] = "zz_volatile.my_method()==3";
char _str_5[33] = "zz_const_volatile.my_method()==4";
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

// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

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
  int __retval41;
  struct my_class zz42;
  struct my_class* zz_const43;
  struct my_class* zz_volatile44;
  struct my_class* zz_const_volatile45;
  zz_const43 = &zz42;
  zz_volatile44 = &zz42;
  zz_const_volatile45 = &zz42;
  int r46 = my_class__my_method(&zz42);
  int c47 = 1;
  _Bool c48 = (r46 == c47) ? 1 : 0;
  if (c48) goto bb29; else goto bb30;
bb29:
  int c49 = 0;
  goto bb31;
bb30:
  char* cast50 = (char*)_str;
