extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct String { int __field0; char* __field1; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[6] = "happy";
char _str_1[10] = " birthday";
char _str_2[1];
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[8] = "s1 is \"";
char _str_4[11] = "\"; s2 is \"";
char _str_5[11] = "\"; s3 is \"";
char _str_6[38] = "\n\nThe results of comparing s2 and s1:";
char _str_7[18] = "\ns2 == s1 yields ";
char _str_8[5] = "true";
char _str_9[6] = "false";
char _str_10[18] = "\ns2 != s1 yields ";
char _str_11[18] = "\ns2 >  s1 yields ";
char _str_12[18] = "\ns2 <  s1 yields ";
char _str_13[18] = "\ns2 >= s1 yields ";
char _str_14[18] = "\ns2 <= s1 yields ";
char _str_15[16] = "\n\nTesting !s3:\n";
char _str_16[34] = "s3 is empty; assigning s1 to s3;\n";
char _str_17[8] = "s3 is \"";
char _str_18[2] = "\"";
char _str_19[24] = "\n\ns1 += s2 yields s1 = ";
char _str_20[7] = "s1==s2";
char _str_21[98] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/cpp/ch8_11/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_22[26] = "\n\ns1 += \" to you\" yields\n";
char _str_23[8] = " to you";
char _str_24[6] = "s1 = ";
char _str_25[3] = "\n\n";
char _str_26[33] = "The substring of s1 starting at\n";
char _str_27[46] = "location 0 for 14 characters, s1(0, 14), is:\n";
char _str_28[29] = "location 15, s1(15, 0), is: ";
char _str_29[11] = "\n*s4Ptr = ";
char _str_30[28] = "assigning *s4Ptr to *s4Ptr\n";
char _str_31[10] = "*s4Ptr = ";
char _str_32[43] = "\ns1 after s1[0] = 'H' and s1[6] = 'B' is: ";
char _str_33[40] = "Attempt to assign 'd' to s1[30] yields:";
extern void String__String(struct String* p0, char* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, struct String* p1);
extern _Bool String__operator___String_const___const(struct String* p0, struct String* p1);
_Bool String__operator___String_const___const_4(struct String* p0, struct String* p1);
_Bool String__operator__String_const___const(struct String* p0, struct String* p1);
extern _Bool String__operator__String_const___const_2(struct String* p0, struct String* p1);
_Bool String__operator___String_const___const_2(struct String* p0, struct String* p1);
_Bool String__operator___String_const___const_3(struct String* p0, struct String* p1);
extern _Bool String__operator____const(struct String* p0);
extern struct String* String__operator_(struct String* p0, struct String* p1);
extern struct String* String__operator___3(struct String* p0, struct String* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void String___String(struct String* p0) {}
extern struct String String__operator__(struct String* p0, int p1, int p2);
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
extern void String__String_2(struct String* p0, struct String* p1);
void operator_delete(void* p0, unsigned long p1) { free(p0); }
extern char* String__operator___2(struct String* p0, int p1);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _ZNK6StringneERKS_
_Bool String__operator___String_const___const_4(struct String* v0, struct String* v1) {
bb2:
  struct String* this3;
  struct String* right4;
  _Bool __retval5;
  this3 = v0;
  right4 = v1;
  struct String* t6 = this3;
  struct String* t7 = right4;
  _Bool r8 = String__operator___String_const___const(t6, t7);
  _Bool u9 = !r8;
  __retval5 = u9;
  _Bool t10 = __retval5;
  return t10;
}

// function: _ZNK6StringgtERKS_
_Bool String__operator__String_const___const(struct String* v11, struct String* v12) {
bb13:
  struct String* this14;
  struct String* right15;
  _Bool __retval16;
  this14 = v11;
  right15 = v12;
  struct String* t17 = this14;
  struct String* t18 = right15;
  _Bool r19 = String__operator__String_const___const_2(t18, t17);
  __retval16 = r19;
  _Bool t20 = __retval16;
  return t20;
}

// function: _ZNK6StringgeERKS_
_Bool String__operator___String_const___const_2(struct String* v21, struct String* v22) {
bb23:
  struct String* this24;
  struct String* right25;
  _Bool __retval26;
  this24 = v21;
  right25 = v22;
  struct String* t27 = this24;
  struct String* t28 = right25;
  _Bool r29 = String__operator__String_const___const_2(t27, t28);
  _Bool u30 = !r29;
  __retval26 = u30;
  _Bool t31 = __retval26;
  return t31;
}

// function: _ZNK6StringleERKS_
_Bool String__operator___String_const___const_3(struct String* v32, struct String* v33) {
bb34:
  struct String* this35;
  struct String* right36;
  _Bool __retval37;
  this35 = v32;
  right36 = v33;
  struct String* t38 = this35;
  struct String* t39 = right36;
  _Bool r40 = String__operator__String_const___const_2(t39, t38);
  _Bool u41 = !r40;
  __retval37 = u41;
  _Bool t42 = __retval37;
  return t42;
}

// function: main
int main() {
bb43:
  int __retval44;
  struct String s145;
  struct String s246;
  struct String s347;
  struct String ref_tmp048;
  struct String* tmp_exprcleanup49;
  struct String ref_tmp150;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup51;
  struct String ref_tmp252;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup53;
  struct String* s4Ptr54;
  struct String* __new_result55;
  int c56 = 0;
  __retval44 = c56;
  char* cast57 = (char*)&(_str);
  String__String(&s145, cast57);
    char* cast58 = (char*)&(_str_1);
    String__String(&s246, cast58);
      char* cast59 = (char*)&(_str_2);
      String__String(&s347, cast59);
        char* cast60 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std61;
        __VERIFIER_nondet_memory(&std61, sizeof(std61));
        struct std__basic_ostream_char__std__char_traits_char__* r62 = operator__(std61, &s145);
        char* cast63 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* std64;
        __VERIFIER_nondet_memory(&std64, sizeof(std64));
        struct std__basic_ostream_char__std__char_traits_char__* r65 = operator__(std64, &s246);
        char* cast66 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* std67;
        __VERIFIER_nondet_memory(&std67, sizeof(std67));
        struct std__basic_ostream_char__std__char_traits_char__* r68 = operator__(std67, &s347);
        char c69 = 34;
        struct std__basic_ostream_char__std__char_traits_char__* std70;
        __VERIFIER_nondet_memory(&std70, sizeof(std70));
        char* cast71 = (char*)&(_str_6);
        struct std__basic_ostream_char__std__char_traits_char__* std72;
        __VERIFIER_nondet_memory(&std72, sizeof(std72));
        char* cast73 = (char*)&(_str_7);
        struct std__basic_ostream_char__std__char_traits_char__* std74;
        __VERIFIER_nondet_memory(&std74, sizeof(std74));
        _Bool r75 = String__operator___String_const___const(&s246, &s145);
        char* cast76 = (char*)&(_str_8);
        char* cast77 = (char*)&(_str_9);
        char* sel78 = r75 ? cast76 : cast77;
        struct std__basic_ostream_char__std__char_traits_char__* std79;
        __VERIFIER_nondet_memory(&std79, sizeof(std79));
        char* cast80 = (char*)&(_str_10);
        struct std__basic_ostream_char__std__char_traits_char__* std81;
        __VERIFIER_nondet_memory(&std81, sizeof(std81));
        _Bool r82 = String__operator___String_const___const_4(&s246, &s145);
        char* cast83 = (char*)&(_str_8);
        char* cast84 = (char*)&(_str_9);
        char* sel85 = r82 ? cast83 : cast84;
        struct std__basic_ostream_char__std__char_traits_char__* std86;
        __VERIFIER_nondet_memory(&std86, sizeof(std86));
        char* cast87 = (char*)&(_str_11);
        struct std__basic_ostream_char__std__char_traits_char__* std88;
        __VERIFIER_nondet_memory(&std88, sizeof(std88));
        _Bool r89 = String__operator__String_const___const(&s246, &s145);
        char* cast90 = (char*)&(_str_8);
        char* cast91 = (char*)&(_str_9);
        char* sel92 = r89 ? cast90 : cast91;
        struct std__basic_ostream_char__std__char_traits_char__* std93;
        __VERIFIER_nondet_memory(&std93, sizeof(std93));
        char* cast94 = (char*)&(_str_12);
        struct std__basic_ostream_char__std__char_traits_char__* std95;
        __VERIFIER_nondet_memory(&std95, sizeof(std95));
        _Bool r96 = String__operator__String_const___const_2(&s246, &s145);
        char* cast97 = (char*)&(_str_8);
        char* cast98 = (char*)&(_str_9);
        char* sel99 = r96 ? cast97 : cast98;
        struct std__basic_ostream_char__std__char_traits_char__* std100;
        __VERIFIER_nondet_memory(&std100, sizeof(std100));
        char* cast101 = (char*)&(_str_13);
        struct std__basic_ostream_char__std__char_traits_char__* std102;
        __VERIFIER_nondet_memory(&std102, sizeof(std102));
        _Bool r103 = String__operator___String_const___const_2(&s246, &s145);
        char* cast104 = (char*)&(_str_8);
        char* cast105 = (char*)&(_str_9);
        char* sel106 = r103 ? cast104 : cast105;
        struct std__basic_ostream_char__std__char_traits_char__* std107;
        __VERIFIER_nondet_memory(&std107, sizeof(std107));
        char* cast108 = (char*)&(_str_14);
        struct std__basic_ostream_char__std__char_traits_char__* std109;
        __VERIFIER_nondet_memory(&std109, sizeof(std109));
        _Bool r110 = String__operator___String_const___const_3(&s246, &s145);
        char* cast111 = (char*)&(_str_8);
        char* cast112 = (char*)&(_str_9);
        char* sel113 = r110 ? cast111 : cast112;
        struct std__basic_ostream_char__std__char_traits_char__* std114;
        __VERIFIER_nondet_memory(&std114, sizeof(std114));
        char* cast115 = (char*)&(_str_15);
        struct std__basic_ostream_char__std__char_traits_char__* std116;
        __VERIFIER_nondet_memory(&std116, sizeof(std116));
          _Bool r117 = String__operator____const(&s347);
          if (r117) {
            char* cast118 = (char*)&(_str_16);
            struct std__basic_ostream_char__std__char_traits_char__* std119;
            __VERIFIER_nondet_memory(&std119, sizeof(std119));
            struct String* r120 = String__operator_(&s347, &s145);
            char* cast121 = (char*)&(_str_17);
            struct std__basic_ostream_char__std__char_traits_char__* std122;
            __VERIFIER_nondet_memory(&std122, sizeof(std122));
            struct std__basic_ostream_char__std__char_traits_char__* r123 = operator__(std122, &s347);
            char* cast124 = (char*)&(_str_18);
            struct std__basic_ostream_char__std__char_traits_char__* std125;
            __VERIFIER_nondet_memory(&std125, sizeof(std125));
          }
        char* cast126 = (char*)&(_str_19);
        struct std__basic_ostream_char__std__char_traits_char__* std127;
        __VERIFIER_nondet_memory(&std127, sizeof(std127));
        struct String* r128 = String__operator___3(&s145, &s246);
        struct std__basic_ostream_char__std__char_traits_char__* r129 = operator__(&_ZSt4cout, &s145);
        _Bool r130 = String__operator___String_const___const(&s145, &s246);
        if (r130) {
        } else {
          char* cast131 = (char*)&(_str_20);
          char* c132 = _str_21;
          unsigned int c133 = 54;
          char* cast134 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast131, c132, c133, cast134);
        }
        char* cast135 = (char*)&(_str_22);
        struct std__basic_ostream_char__std__char_traits_char__* std136;
        __VERIFIER_nondet_memory(&std136, sizeof(std136));
        char* cast137 = (char*)&(_str_23);
        String__String(&ref_tmp048, cast137);
          struct String* r138 = String__operator___3(&s145, &ref_tmp048);
          tmp_exprcleanup49 = r138;
        {
          String___String(&ref_tmp048);
        }
        struct String* t139 = tmp_exprcleanup49;
        char* cast140 = (char*)&(_str_24);
        struct std__basic_ostream_char__std__char_traits_char__* std141;
        __VERIFIER_nondet_memory(&std141, sizeof(std141));
        struct std__basic_ostream_char__std__char_traits_char__* r142 = operator__(std141, &s145);
        char* cast143 = (char*)&(_str_25);
        struct std__basic_ostream_char__std__char_traits_char__* std144;
        __VERIFIER_nondet_memory(&std144, sizeof(std144));
        char* cast145 = (char*)&(_str_26);
        struct std__basic_ostream_char__std__char_traits_char__* std146;
        __VERIFIER_nondet_memory(&std146, sizeof(std146));
        char* cast147 = (char*)&(_str_27);
        struct std__basic_ostream_char__std__char_traits_char__* std148;
        __VERIFIER_nondet_memory(&std148, sizeof(std148));
        int c149 = 0;
        int c150 = 14;
        struct String r151 = String__operator__(&s145, c149, c150);
        ref_tmp150 = r151;
          struct std__basic_ostream_char__std__char_traits_char__* r152 = operator__(std148, &ref_tmp150);
          char* cast153 = (char*)&(_str_25);
          struct std__basic_ostream_char__std__char_traits_char__* std154;
          __VERIFIER_nondet_memory(&std154, sizeof(std154));
          tmp_exprcleanup51 = std154;
        {
          String___String(&ref_tmp150);
        }
        struct std__basic_ostream_char__std__char_traits_char__* t155 = tmp_exprcleanup51;
        char* cast156 = (char*)&(_str_26);
        struct std__basic_ostream_char__std__char_traits_char__* std157;
        __VERIFIER_nondet_memory(&std157, sizeof(std157));
        char* cast158 = (char*)&(_str_28);
        struct std__basic_ostream_char__std__char_traits_char__* std159;
        __VERIFIER_nondet_memory(&std159, sizeof(std159));
        int c160 = 15;
        int c161 = 0;
        struct String r162 = String__operator__(&s145, c160, c161);
        ref_tmp252 = r162;
          struct std__basic_ostream_char__std__char_traits_char__* r163 = operator__(std159, &ref_tmp252);
          char* cast164 = (char*)&(_str_25);
          struct std__basic_ostream_char__std__char_traits_char__* std165;
          __VERIFIER_nondet_memory(&std165, sizeof(std165));
          tmp_exprcleanup53 = std165;
        {
          String___String(&ref_tmp252);
        }
        struct std__basic_ostream_char__std__char_traits_char__* t166 = tmp_exprcleanup53;
        unsigned long c167 = 16;
        void* r168 = operator_new(c167);
          struct String* cast169 = (struct String*)r168;
          __new_result55 = cast169;
          String__String_2(cast169, &s145);
        struct String* t170 = __new_result55;
        s4Ptr54 = t170;
        char* cast171 = (char*)&(_str_29);
        struct std__basic_ostream_char__std__char_traits_char__* std172;
        __VERIFIER_nondet_memory(&std172, sizeof(std172));
        struct String* t173 = s4Ptr54;
        struct std__basic_ostream_char__std__char_traits_char__* r174 = operator__(std172, t173);
        char* cast175 = (char*)&(_str_25);
        struct std__basic_ostream_char__std__char_traits_char__* std176;
        __VERIFIER_nondet_memory(&std176, sizeof(std176));
        char* cast177 = (char*)&(_str_30);
        struct std__basic_ostream_char__std__char_traits_char__* std178;
        __VERIFIER_nondet_memory(&std178, sizeof(std178));
        struct String* t179 = s4Ptr54;
        struct String* t180 = s4Ptr54;
        struct String* r181 = String__operator_(t180, t179);
        char* cast182 = (char*)&(_str_31);
        struct std__basic_ostream_char__std__char_traits_char__* std183;
        __VERIFIER_nondet_memory(&std183, sizeof(std183));
        struct String* t184 = s4Ptr54;
        struct std__basic_ostream_char__std__char_traits_char__* r185 = operator__(std183, t184);
        char c186 = 10;
        struct std__basic_ostream_char__std__char_traits_char__* std187;
        __VERIFIER_nondet_memory(&std187, sizeof(std187));
        struct String* t188 = s4Ptr54;
        struct String* c189 = ((void*)0);
        _Bool c190 = ((t188 != c189)) ? 1 : 0;
        if (c190) {
            String___String(t188);
          {
            void* cast191 = (void*)t188;
            unsigned long c192 = 16;
            operator_delete(cast191, c192);
          }
        }
        char c193 = 72;
        int c194 = 0;
        char* r195 = String__operator___2(&s145, c194);
        *r195 = c193;
        char c196 = 66;
        int c197 = 6;
        char* r198 = String__operator___2(&s145, c197);
        *r198 = c196;
        char* cast199 = (char*)&(_str_32);
        struct std__basic_ostream_char__std__char_traits_char__* std200;
        __VERIFIER_nondet_memory(&std200, sizeof(std200));
        struct std__basic_ostream_char__std__char_traits_char__* r201 = operator__(std200, &s145);
        char* cast202 = (char*)&(_str_25);
        struct std__basic_ostream_char__std__char_traits_char__* std203;
        __VERIFIER_nondet_memory(&std203, sizeof(std203));
        char* cast204 = (char*)&(_str_33);
        struct std__basic_ostream_char__std__char_traits_char__* std205;
        __VERIFIER_nondet_memory(&std205, sizeof(std205));
        struct std__basic_ostream_char__std__char_traits_char__* std206;
        __VERIFIER_nondet_memory(&std206, sizeof(std206));
        char c207 = 100;
        int c208 = 30;
        char* r209 = String__operator___2(&s145, c208);
        *r209 = c207;
        int c210 = 0;
        __retval44 = c210;
        int t211 = __retval44;
        int ret_val212 = t211;
        {
          String___String(&s347);
        }
        {
          String___String(&s246);
        }
        {
          String___String(&s145);
        }
        return ret_val212;
  int t213 = __retval44;
  return t213;
}

