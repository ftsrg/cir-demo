extern void abort(void);
// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int __const_main_b[4] = {10, 20, 30, 40};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[24] = "Array b printed with:\n\n";
char _str_1[26] = "Array subscript notation\n";
char _str_2[3] = "b[";
char _str_3[5] = "] = ";
char _str_4[32] = "\nPointer/offset notation where ";
char _str_5[31] = "the pointer is the array name\n";
char _str_6[7] = "*(b + ";
char _str_7[5] = ") = ";
char _str_8[29] = "\nPointer subscript notation\n";
char _str_9[6] = "bPtr[";
char _str_10[26] = "\nPointer/offset notation\n";
char _str_11[10] = "*(bPtr + ";
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool std____is_constant_evaluated();
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int main();

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v0, int v1) {
bb2:
  int __a3;
  int __b4;
  int __retval5;
  __a3 = v0;
  __b4 = v1;
  int t6 = __a3;
  int t7 = __b4;
  int b8 = t6 | t7;
  __retval5 = b8;
  int t9 = __retval5;
  return t9;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v10) {
bb11:
  struct std__basic_ios_char__std__char_traits_char__* this12;
  int __retval13;
  this12 = v10;
  struct std__basic_ios_char__std__char_traits_char__* t14 = this12;
  struct std__ios_base* base15 = (struct std__ios_base*)((char *)t14 + 0);
  int t16 = base15->_M_streambuf_state;
  __retval13 = t16;
  int t17 = __retval13;
  return t17;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v18, int v19) {
bb20:
  struct std__basic_ios_char__std__char_traits_char__* this21;
  int __state22;
  this21 = v18;
  __state22 = v19;
  struct std__basic_ios_char__std__char_traits_char__* t23 = this21;
  int r24 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t23);
  int t25 = __state22;
  int r26 = std__operator_(r24, t25);
  std__basic_ios_char__std__char_traits_char_____clear(t23, r26);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb27:
  _Bool __retval28;
    _Bool c29 = 0;
    __retval28 = c29;
    _Bool t30 = __retval28;
    return t30;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v31, char* v32) {
bb33:
  char* __c134;
  char* __c235;
  _Bool __retval36;
  __c134 = v31;
  __c235 = v32;
  char* t37 = __c134;
  char t38 = *t37;
  int cast39 = (int)t38;
  char* t40 = __c235;
  char t41 = *t40;
  int cast42 = (int)t41;
  _Bool c43 = ((cast39 == cast42)) ? 1 : 0;
  __retval36 = c43;
  _Bool t44 = __retval36;
  return t44;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v45) {
bb46:
  char* __p47;
  unsigned long __retval48;
  unsigned long __i49;
  __p47 = v45;
  unsigned long c50 = 0;
  __i49 = c50;
    char ref_tmp051;
    while (1) {
      unsigned long t52 = __i49;
      char* t53 = __p47;
      char* ptr54 = &(t53)[t52];
      char c55 = 0;
      ref_tmp051 = c55;
      _Bool r56 = __gnu_cxx__char_traits_char___eq(ptr54, &ref_tmp051);
      _Bool u57 = !r56;
      if (!u57) break;
      unsigned long t58 = __i49;
      unsigned long u59 = t58 + 1;
      __i49 = u59;
    }
  unsigned long t60 = __i49;
  __retval48 = t60;
  unsigned long t61 = __retval48;
  return t61;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v62) {
bb63:
  char* __s64;
  unsigned long __retval65;
  __s64 = v62;
    _Bool r66 = std____is_constant_evaluated();
    if (r66) {
      char* t67 = __s64;
      unsigned long r68 = __gnu_cxx__char_traits_char___length(t67);
      __retval65 = r68;
      unsigned long t69 = __retval65;
      return t69;
    }
  char* t70 = __s64;
  unsigned long r71 = strlen(t70);
  __retval65 = r71;
  unsigned long t72 = __retval65;
  return t72;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v73, char* v74) {
bb75:
  struct std__basic_ostream_char__std__char_traits_char__* __out76;
  char* __s77;
  struct std__basic_ostream_char__std__char_traits_char__* __retval78;
  __out76 = v73;
  __s77 = v74;
    char* t79 = __s77;
    _Bool cast80 = (_Bool)t79;
    _Bool u81 = !cast80;
    if (u81) {
      struct std__basic_ostream_char__std__char_traits_char__* t82 = __out76;
      void** v83 = (void**)t82;
      void* v84 = *((void**)v83);
      unsigned char* cast85 = (unsigned char*)v84;
      long c86 = -24;
      unsigned char* ptr87 = &(cast85)[c86];
      long* cast88 = (long*)ptr87;
      long t89 = *cast88;
      unsigned char* cast90 = (unsigned char*)t82;
      unsigned char* ptr91 = &(cast90)[t89];
      struct std__basic_ostream_char__std__char_traits_char__* cast92 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr91;
      struct std__basic_ios_char__std__char_traits_char__* cast93 = (struct std__basic_ios_char__std__char_traits_char__*)cast92;
      int t94 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast93, t94);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t95 = __out76;
      char* t96 = __s77;
      char* t97 = __s77;
      unsigned long r98 = std__char_traits_char___length(t97);
      long cast99 = (long)r98;
      struct std__basic_ostream_char__std__char_traits_char__* r100 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t95, t96, cast99);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t101 = __out76;
  __retval78 = t101;
  struct std__basic_ostream_char__std__char_traits_char__* t102 = __retval78;
  return t102;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v103) {
bb104:
  struct std__ios_base* this105;
  long __retval106;
  this105 = v103;
  struct std__ios_base* t107 = this105;
  long t108 = t107->_M_width;
  __retval106 = t108;
  long t109 = __retval106;
  return t109;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v110, char v111) {
bb112:
  struct std__basic_ostream_char__std__char_traits_char__* __out113;
  char __c114;
  struct std__basic_ostream_char__std__char_traits_char__* __retval115;
  __out113 = v110;
  __c114 = v111;
    struct std__basic_ostream_char__std__char_traits_char__* t116 = __out113;
    void** v117 = (void**)t116;
    void* v118 = *((void**)v117);
    unsigned char* cast119 = (unsigned char*)v118;
    long c120 = -24;
    unsigned char* ptr121 = &(cast119)[c120];
    long* cast122 = (long*)ptr121;
    long t123 = *cast122;
    unsigned char* cast124 = (unsigned char*)t116;
    unsigned char* ptr125 = &(cast124)[t123];
    struct std__basic_ostream_char__std__char_traits_char__* cast126 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr125;
    struct std__ios_base* cast127 = (struct std__ios_base*)cast126;
    long r128 = std__ios_base__width___const(cast127);
    long c129 = 0;
    _Bool c130 = ((r128 != c129)) ? 1 : 0;
    if (c130) {
      struct std__basic_ostream_char__std__char_traits_char__* t131 = __out113;
      long c132 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r133 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t131, &__c114, c132);
      __retval115 = r133;
      struct std__basic_ostream_char__std__char_traits_char__* t134 = __retval115;
      return t134;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t135 = __out113;
  char t136 = __c114;
  struct std__basic_ostream_char__std__char_traits_char__* r137 = std__ostream__put(t135, t136);
  struct std__basic_ostream_char__std__char_traits_char__* t138 = __out113;
  __retval115 = t138;
  struct std__basic_ostream_char__std__char_traits_char__* t139 = __retval115;
  return t139;
}

// function: main
int main() {
bb140:
  int __retval141;
  int b142[4];
  int* bPtr143;
  int c144 = 0;
  __retval141 = c144;
  // array copy
  __builtin_memcpy(b142, __const_main_b, (unsigned long)4 * sizeof(__const_main_b[0]));
  int* cast145 = (int*)&(b142);
  bPtr143 = cast145;
  char* cast146 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r147 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast146);
  char* cast148 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r149 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r147, cast148);
    int i150;
    int c151 = 0;
    i150 = c151;
    while (1) {
      int t153 = i150;
      int c154 = 4;
      _Bool c155 = ((t153 < c154)) ? 1 : 0;
      if (!c155) break;
      char* cast156 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* r157 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast156);
      int t158 = i150;
      struct std__basic_ostream_char__std__char_traits_char__* r159 = std__ostream__operator__(r157, t158);
      char* cast160 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* r161 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r159, cast160);
      int t162 = i150;
      long cast163 = (long)t162;
      int t164 = b142[cast163];
      struct std__basic_ostream_char__std__char_traits_char__* r165 = std__ostream__operator__(r161, t164);
      char c166 = 10;
      struct std__basic_ostream_char__std__char_traits_char__* r167 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r165, c166);
    for_step152: ;
      int t168 = i150;
      int u169 = t168 + 1;
      i150 = u169;
    }
  char* cast170 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r171 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast170);
  char* cast172 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r173 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r171, cast172);
    int offset1174;
    int c175 = 0;
    offset1174 = c175;
    while (1) {
      int t177 = offset1174;
      int c178 = 4;
      _Bool c179 = ((t177 < c178)) ? 1 : 0;
      if (!c179) break;
      char* cast180 = (char*)&(_str_6);
      struct std__basic_ostream_char__std__char_traits_char__* r181 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast180);
      int t182 = offset1174;
      struct std__basic_ostream_char__std__char_traits_char__* r183 = std__ostream__operator__(r181, t182);
      char* cast184 = (char*)&(_str_7);
      struct std__basic_ostream_char__std__char_traits_char__* r185 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r183, cast184);
      int* cast186 = (int*)&(b142);
      int t187 = offset1174;
      int* ptr188 = &(cast186)[t187];
      int t189 = *ptr188;
      struct std__basic_ostream_char__std__char_traits_char__* r190 = std__ostream__operator__(r185, t189);
      char c191 = 10;
      struct std__basic_ostream_char__std__char_traits_char__* r192 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r190, c191);
    for_step176: ;
      int t193 = offset1174;
      int u194 = t193 + 1;
      offset1174 = u194;
    }
  char* cast195 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* r196 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast195);
    int j197;
    int c198 = 0;
    j197 = c198;
    while (1) {
      int t200 = j197;
      int c201 = 4;
      _Bool c202 = ((t200 < c201)) ? 1 : 0;
      if (!c202) break;
      char* cast203 = (char*)&(_str_9);
      struct std__basic_ostream_char__std__char_traits_char__* r204 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast203);
      int t205 = j197;
      struct std__basic_ostream_char__std__char_traits_char__* r206 = std__ostream__operator__(r204, t205);
      char* cast207 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* r208 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r206, cast207);
      int t209 = j197;
      long cast210 = (long)t209;
      int* t211 = bPtr143;
      int* ptr212 = &(t211)[cast210];
      int t213 = *ptr212;
      struct std__basic_ostream_char__std__char_traits_char__* r214 = std__ostream__operator__(r208, t213);
      char c215 = 10;
      struct std__basic_ostream_char__std__char_traits_char__* r216 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r214, c215);
    for_step199: ;
      int t217 = j197;
      int u218 = t217 + 1;
      j197 = u218;
    }
  char* cast219 = (char*)&(_str_10);
  struct std__basic_ostream_char__std__char_traits_char__* r220 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast219);
    int offset2221;
    int c222 = 0;
    offset2221 = c222;
    while (1) {
      int t224 = offset2221;
      int c225 = 4;
      _Bool c226 = ((t224 < c225)) ? 1 : 0;
      if (!c226) break;
      char* cast227 = (char*)&(_str_11);
      struct std__basic_ostream_char__std__char_traits_char__* r228 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast227);
      int t229 = offset2221;
      struct std__basic_ostream_char__std__char_traits_char__* r230 = std__ostream__operator__(r228, t229);
      char* cast231 = (char*)&(_str_7);
      struct std__basic_ostream_char__std__char_traits_char__* r232 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r230, cast231);
      int* t233 = bPtr143;
      int t234 = offset2221;
      int* ptr235 = &(t233)[t234];
      int t236 = *ptr235;
      struct std__basic_ostream_char__std__char_traits_char__* r237 = std__ostream__operator__(r232, t236);
      char c238 = 10;
      struct std__basic_ostream_char__std__char_traits_char__* r239 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r237, c238);
    for_step223: ;
      int t240 = offset2221;
      int u241 = t240 + 1;
      offset2221 = u241;
    }
  int c242 = 0;
  __retval141 = c242;
  int t243 = __retval141;
  return t243;
}

