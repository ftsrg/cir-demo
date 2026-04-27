// Struct definitions (auto-parsed)
struct Integer { int value; };
struct std::auto_ptr<Integer> { struct Integer* _M_ptr; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[47] = "Creating an auto_ptr object that points to an ";
char _str_1[9] = "Integer\\0A";
char _str_2[47] = "\\0AUsing the auto_ptr to manipulate the Integer\\0A";
char _str_7[93] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h";
char _str_8[73];
char _str_9[12] = "_M_ptr != 0";
char _str_3[27];
char _str_10[72];
char _str_4[22] = "\\0A\\0ATerminating program";
char _str_5[25] = "Constructor for Integer ";
char _str_6[24] = "Destructor for Integer ";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std::basic_ostream<char>*, char*);

// function: _Znwm
void* operator_new(unsigned long long);

// function: _ZN7IntegerC2Ei
void Integer__Integer(struct Integer* v0, int v1) {
bb2:
  struct Integer* this3;
  int i4;
  this3 = v0;
  i4 = v1;
  struct Integer* t5 = this3;
  int t6 = i4;
  *t5->value = t6;
  struct std::basic_ostream<char>* g7 = &_ZSt4cout;
  char* cast8 = (char*)_str_5;
  struct std::basic_ostream<char>* r9 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g7, cast8);
  int t10 = *t5->value;
  struct std::basic_ostream<char>* r11 = std__ostream__operator__(r9, t10);
  void* g12 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r13 = std__ostream__operator___std__ostream_____(r11, g12);
  return;
}

// function: _ZdlPvm
void operator_delete(void*, unsigned long long);

// function: _ZNSt8auto_ptrI7IntegerEC2EPS0_
void std__auto_ptr_Integer___auto_ptr(struct std::auto_ptr<Integer>* v14, struct Integer* v15) {
bb16:
  struct std::auto_ptr<Integer>* this17;
  struct Integer* __p18;
  this17 = v14;
  __p18 = v15;
  struct std::auto_ptr<Integer>* t19 = this17;
  struct Integer* t20 = __p18;
  *t19->_M_ptr = t20;
  return;
}

// function: _ZSt21__glibcxx_assert_failPKciS0_S0_
void std____glibcxx_assert_fail(char*, int, char*, char*);

// function: _ZNKSt8auto_ptrI7IntegerEptEv
struct Integer* std__auto_ptr_Integer___operator_____const(struct std::auto_ptr<Integer>* v21) {
bb22:
  struct std::auto_ptr<Integer>* this34;
  struct Integer* __retval35;
  this34 = v21;
  struct std::auto_ptr<Integer>* t36 = this34;
  goto bb23;
bb23:
  goto bb25;
bb24:
  _Bool c37 = 0;
  if (c37) goto bb25; else goto bb32;
bb25:
  goto bb26;
bb26:
  goto bb27;
bb27:
  struct Integer* t38 = *t36->_M_ptr;
  struct Integer* c39 = NULL;
  _Bool c40 = (t38 != c39) ? 1 : 0;
  _Bool u41 = !c40;
  if (u41) goto bb28; else goto bb29;
bb28:
  char* cast42 = (char*)_str_7;
  int c43 = 202;
  char* cast44 = (char*)_str_8;
  char* cast45 = (char*)_str_9;
  std____glibcxx_assert_fail(cast42, c43, cast44, cast45);
  goto bb29;
bb29:
  goto bb30;
bb30:
  goto bb31;
bb31:
  goto bb24;
bb32:
  goto bb33;
bb33:
  struct Integer* t46 = *t36->_M_ptr;
  __retval35 = t46;
  struct Integer* t47 = __retval35;
  return t47;
}

// function: _ZN7Integer10setIntegerEi
void Integer__setInteger(struct Integer* v48, int v49) {
bb50:
  struct Integer* this51;
  int i52;
  this51 = v48;
  i52 = v49;
  struct Integer* t53 = this51;
  int t54 = i52;
  *t53->value = t54;
  return;
}

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZNKSt8auto_ptrI7IntegerEdeEv
struct Integer* std__auto_ptr_Integer___operator____const(struct std::auto_ptr<Integer>* v55) {
bb56:
  struct std::auto_ptr<Integer>* this68;
  struct Integer* __retval69;
  this68 = v55;
  struct std::auto_ptr<Integer>* t70 = this68;
  goto bb57;
bb57:
  goto bb59;
bb58:
  _Bool c71 = 0;
  if (c71) goto bb59; else goto bb66;
bb59:
  goto bb60;
bb60:
  goto bb61;
bb61:
  struct Integer* t72 = *t70->_M_ptr;
  struct Integer* c73 = NULL;
  _Bool c74 = (t72 != c73) ? 1 : 0;
  _Bool u75 = !c74;
  if (u75) goto bb62; else goto bb63;
bb62:
  char* cast76 = (char*)_str_7;
  int c77 = 189;
  char* cast78 = (char*)_str_10;
  char* cast79 = (char*)_str_9;
  std____glibcxx_assert_fail(cast76, c77, cast78, cast79);
  goto bb63;
bb63:
  goto bb64;
bb64:
  goto bb65;
bb65:
  goto bb58;
bb66:
  goto bb67;
bb67:
  struct Integer* t80 = *t70->_M_ptr;
  __retval69 = t80;
  struct Integer* t81 = __retval69;
  return t81;
}

// function: _ZNK7Integer10getIntegerEv
int Integer__getInteger___const(struct Integer* v82) {
bb83:
  struct Integer* this84;
  int __retval85;
  this84 = v82;
  struct Integer* t86 = this84;
  int t87 = *t86->value;
  __retval85 = t87;
  int t88 = __retval85;
  return t88;
}

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: _ZNSt8auto_ptrI7IntegerED2Ev
void std__auto_ptr_Integer____auto_ptr(struct std::auto_ptr<Integer>* v89) {
bb90:
  struct std::auto_ptr<Integer>* this91;
  this91 = v89;
  struct std::auto_ptr<Integer>* t92 = this91;
  struct Integer* t93 = *t92->_M_ptr;
  Integer___Integer(t93);
  void* cast94 = (void*)t93;
  unsigned long long c95 = 4;
  operator_delete(cast94, c95);
  return;
}

// function: main
int main() {
  void* v96;
  unsigned int v97;
  void* v98;
  unsigned int v99;
  void* v100;
  unsigned int v101;
  void* v102;
  unsigned int v103;
  void* v104;
  unsigned int v105;
  void* v106;
  unsigned int v107;
  void* v108;
  unsigned int v109;
  void* v110;
  unsigned int v111;
bb112:
  int __retval153;
  struct std::auto_ptr<Integer> ptrToInteger154;
  int tmp.try.call.res155[8];
  int tmp.try.call.res156[8];
  int tmp.try.call.res157;
  int tmp.try.call.res158[8];
  int tmp.try.call.res159[8];
  int tmp.try.call.res160[8];
  struct std::basic_ostream<char>* g161 = &_ZSt4cout;
  char* cast162 = (char*)_str;
  struct std::basic_ostream<char>* r163 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(g161, cast162);
  char* cast164 = (char*)_str_1;
  struct std::basic_ostream<char>* r165 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r163, cast164);
  unsigned long long c166 = 4;
  void* r167 = operator_new(c166);
  struct Integer* cast168 = (struct Integer*)r167;
  int c169 = 7;
  goto bb113;
bb113:
