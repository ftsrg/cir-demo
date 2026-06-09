char _str[8] = "a and b";
char _str_1[99] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/ch22_12/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[13] = "(a and b)==0";
char _str_3[7] = "a or b";
char _str_4[12] = "(a or b)==0";
char _str_5[11] = "a not_eq b";
char _str_6[16] = "(a not_eq b)==0";
char _str_7[11] = "a bitand b";
char _str_8[16] = "(a bitand b)==0";
char _str_9[10] = "a bitor b";
char _str_10[15] = "(a bitor b)==0";
char _str_11[8] = "compl a";
char _str_12[12] = "(compl a)<0";
char _str_13[8] = "a xor b";
char _str_14[13] = "(a xor b)==0";
char _str_15[11] = "a and_eq b";
char _str_16[16] = "(a and_eq b)==0";
char _str_17[10] = "a or_eq b";
char _str_18[15] = "(a or_eq b)==0";
char _str_19[11] = "a xor_eq b";
char _str_20[16] = "(a xor_eq b)==0";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

// function: main
int main() {
bb0:
  int __retval1;
  int a2;
  int b3;
  int c4 = 0;
  __retval1 = c4;
  int c5 = 2;
  a2 = c5;
  int c6 = 3;
  b3 = c6;
  int t7 = a2;
  _Bool cast8 = (_Bool)t7;
  _Bool ternary9;
  if (cast8) {
    int t10 = b3;
    _Bool cast11 = (_Bool)t10;
    ternary9 = (_Bool)cast11;
  } else {
    _Bool c12 = 0;
    ternary9 = (_Bool)c12;
  }
  if (ternary9) {
  } else {
    char* cast13 = (char*)&(_str);
    char* c14 = _str_1;
    unsigned int c15 = 19;
    char* cast16 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast13, c14, c15, cast16);
  }
  int c17 = 2;
  a2 = c17;
  int c18 = 0;
  b3 = c18;
  int t19 = a2;
  _Bool cast20 = (_Bool)t19;
  _Bool ternary21;
  if (cast20) {
    int t22 = b3;
    _Bool cast23 = (_Bool)t22;
    ternary21 = (_Bool)cast23;
  } else {
    _Bool c24 = 0;
    ternary21 = (_Bool)c24;
  }
  int cast25 = (int)ternary21;
  int c26 = 0;
  _Bool c27 = ((cast25 == c26)) ? 1 : 0;
  if (c27) {
  } else {
    char* cast28 = (char*)&(_str_2);
    char* c29 = _str_1;
    unsigned int c30 = 21;
    char* cast31 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast28, c29, c30, cast31);
  }
  int c32 = 2;
  a2 = c32;
  int c33 = 3;
  b3 = c33;
  int t34 = a2;
  _Bool cast35 = (_Bool)t34;
  _Bool ternary36;
  if (cast35) {
    _Bool c37 = 1;
    ternary36 = (_Bool)c37;
  } else {
    int t38 = b3;
    _Bool cast39 = (_Bool)t38;
    ternary36 = (_Bool)cast39;
  }
  if (ternary36) {
  } else {
    char* cast40 = (char*)&(_str_3);
    char* c41 = _str_1;
    unsigned int c42 = 24;
    char* cast43 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast40, c41, c42, cast43);
  }
  int c44 = 0;
  a2 = c44;
  int c45 = 0;
  b3 = c45;
  int t46 = a2;
  _Bool cast47 = (_Bool)t46;
  _Bool ternary48;
  if (cast47) {
    _Bool c49 = 1;
    ternary48 = (_Bool)c49;
  } else {
    int t50 = b3;
    _Bool cast51 = (_Bool)t50;
    ternary48 = (_Bool)cast51;
  }
  int cast52 = (int)ternary48;
  int c53 = 0;
  _Bool c54 = ((cast52 == c53)) ? 1 : 0;
  if (c54) {
  } else {
    char* cast55 = (char*)&(_str_4);
    char* c56 = _str_1;
    unsigned int c57 = 26;
    char* cast58 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast55, c56, c57, cast58);
  }
  int c59 = 2;
  a2 = c59;
  int c60 = 3;
  b3 = c60;
  int t61 = a2;
  int t62 = b3;
  _Bool c63 = ((t61 != t62)) ? 1 : 0;
  if (c63) {
  } else {
    char* cast64 = (char*)&(_str_5);
    char* c65 = _str_1;
    unsigned int c66 = 29;
    char* cast67 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast64, c65, c66, cast67);
  }
  int c68 = 3;
  a2 = c68;
  int c69 = 3;
  b3 = c69;
  int t70 = a2;
  int t71 = b3;
  _Bool c72 = ((t70 != t71)) ? 1 : 0;
  int cast73 = (int)c72;
  int c74 = 0;
  _Bool c75 = ((cast73 == c74)) ? 1 : 0;
  if (c75) {
  } else {
    char* cast76 = (char*)&(_str_6);
    char* c77 = _str_1;
    unsigned int c78 = 31;
    char* cast79 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast76, c77, c78, cast79);
  }
  int c80 = 3;
  a2 = c80;
  int c81 = 3;
  b3 = c81;
  int t82 = a2;
  int t83 = b3;
  int b84 = t82 & t83;
  _Bool cast85 = (_Bool)b84;
  if (cast85) {
  } else {
    char* cast86 = (char*)&(_str_7);
    char* c87 = _str_1;
    unsigned int c88 = 34;
    char* cast89 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast86, c87, c88, cast89);
  }
  int c90 = 3;
  a2 = c90;
  int c91 = 0;
  b3 = c91;
  int t92 = a2;
  int t93 = b3;
  int b94 = t92 & t93;
  int c95 = 0;
  _Bool c96 = ((b94 == c95)) ? 1 : 0;
  if (c96) {
  } else {
    char* cast97 = (char*)&(_str_8);
    char* c98 = _str_1;
    unsigned int c99 = 36;
    char* cast100 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast97, c98, c99, cast100);
  }
  int c101 = 2;
  a2 = c101;
  int c102 = 3;
  b3 = c102;
  int t103 = a2;
  int t104 = b3;
  int b105 = t103 | t104;
  _Bool cast106 = (_Bool)b105;
  if (cast106) {
  } else {
    char* cast107 = (char*)&(_str_9);
    char* c108 = _str_1;
    unsigned int c109 = 39;
    char* cast110 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast107, c108, c109, cast110);
  }
  int c111 = 0;
  a2 = c111;
  int c112 = 0;
  b3 = c112;
  int t113 = a2;
  int t114 = b3;
  int b115 = t113 | t114;
  int c116 = 0;
  _Bool c117 = ((b115 == c116)) ? 1 : 0;
  if (c117) {
  } else {
    char* cast118 = (char*)&(_str_10);
    char* c119 = _str_1;
    unsigned int c120 = 41;
    char* cast121 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast118, c119, c120, cast121);
  }
  int c122 = 2;
  a2 = c122;
  int c123 = 3;
  b3 = c123;
  int t124 = a2;
  int u125 = ~t124;
  _Bool cast126 = (_Bool)u125;
  if (cast126) {
  } else {
    char* cast127 = (char*)&(_str_11);
    char* c128 = _str_1;
    unsigned int c129 = 44;
    char* cast130 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast127, c128, c129, cast130);
  }
  int c131 = 1;
  a2 = c131;
  int t132 = a2;
  int u133 = ~t132;
  int c134 = 0;
  _Bool c135 = ((u133 < c134)) ? 1 : 0;
  if (c135) {
  } else {
    char* cast136 = (char*)&(_str_12);
    char* c137 = _str_1;
    unsigned int c138 = 46;
    char* cast139 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast136, c137, c138, cast139);
  }
  int t140 = a2;
  int t141 = b3;
  int b142 = t140 ^ t141;
  _Bool cast143 = (_Bool)b142;
  if (cast143) {
  } else {
    char* cast144 = (char*)&(_str_13);
    char* c145 = _str_1;
    unsigned int c146 = 48;
    char* cast147 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast144, c145, c146, cast147);
  }
  int c148 = 1;
  a2 = c148;
  int c149 = 1;
  b3 = c149;
  int t150 = a2;
  int t151 = b3;
  int b152 = t150 ^ t151;
  int c153 = 0;
  _Bool c154 = ((b152 == c153)) ? 1 : 0;
  if (c154) {
  } else {
    char* cast155 = (char*)&(_str_14);
    char* c156 = _str_1;
    unsigned int c157 = 50;
    char* cast158 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast155, c156, c157, cast158);
  }
  int c159 = 2;
  a2 = c159;
  int c160 = 3;
  b3 = c160;
  int t161 = b3;
  int t162 = a2;
  int b163 = t162 & t161;
  a2 = b163;
  _Bool cast164 = (_Bool)b163;
  if (cast164) {
  } else {
    char* cast165 = (char*)&(_str_15);
    char* c166 = _str_1;
    unsigned int c167 = 53;
    char* cast168 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast165, c166, c167, cast168);
  }
  int c169 = 0;
  a2 = c169;
  int c170 = 0;
  b3 = c170;
  int t171 = b3;
  int t172 = a2;
  int b173 = t172 & t171;
  a2 = b173;
  int c174 = 0;
  _Bool c175 = ((b173 == c174)) ? 1 : 0;
  if (c175) {
  } else {
    char* cast176 = (char*)&(_str_16);
    char* c177 = _str_1;
    unsigned int c178 = 55;
    char* cast179 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast176, c177, c178, cast179);
  }
  int c180 = 2;
  a2 = c180;
  int c181 = 3;
  b3 = c181;
  int t182 = b3;
  int t183 = a2;
  int b184 = t183 | t182;
  a2 = b184;
  _Bool cast185 = (_Bool)b184;
  if (cast185) {
  } else {
    char* cast186 = (char*)&(_str_17);
    char* c187 = _str_1;
    unsigned int c188 = 58;
    char* cast189 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast186, c187, c188, cast189);
  }
  int c190 = 0;
  a2 = c190;
  int c191 = 0;
  b3 = c191;
  int t192 = b3;
  int t193 = a2;
  int b194 = t193 | t192;
  a2 = b194;
  int c195 = 0;
  _Bool c196 = ((b194 == c195)) ? 1 : 0;
  if (c196) {
  } else {
    char* cast197 = (char*)&(_str_18);
    char* c198 = _str_1;
    unsigned int c199 = 60;
    char* cast200 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast197, c198, c199, cast200);
  }
  int c201 = 2;
  a2 = c201;
  int c202 = 3;
  b3 = c202;
  int t203 = b3;
  int t204 = a2;
  int b205 = t204 ^ t203;
  a2 = b205;
  _Bool cast206 = (_Bool)b205;
  if (cast206) {
  } else {
    char* cast207 = (char*)&(_str_19);
    char* c208 = _str_1;
    unsigned int c209 = 63;
    char* cast210 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast207, c208, c209, cast210);
  }
  int c211 = 0;
  a2 = c211;
  int c212 = 0;
  b3 = c212;
  int t213 = b3;
  int t214 = a2;
  int b215 = t214 ^ t213;
  a2 = b215;
  int c216 = 0;
  _Bool c217 = ((b215 == c216)) ? 1 : 0;
  if (c217) {
  } else {
    char* cast218 = (char*)&(_str_20);
    char* c219 = _str_1;
    unsigned int c220 = 65;
    char* cast221 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast218, c219, c220, cast221);
  }
  int c222 = 0;
  __retval1 = c222;
  int t223 = __retval1;
  return t223;
}

