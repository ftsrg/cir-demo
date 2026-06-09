extern void abort(void);
// Struct definitions (auto-parsed)
struct Card { char* face; char* suit; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Setw { int _M_n; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long _M_width; int _M_flags; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base4leftE_const __attribute__((aligned(4))) = 32;
int _ZNSt8ios_base11adjustfieldE_const __attribute__((aligned(4))) = 176;
int _ZNSt8ios_base5rightE_const __attribute__((aligned(4))) = 128;
char _str[4] = "Ace";
char _str_1[6] = "Deuce";
char _str_2[6] = "Three";
char _str_3[5] = "Four";
char _str_4[5] = "Five";
char _str_5[4] = "Six";
char _str_6[6] = "Seven";
char _str_7[6] = "Eight";
char _str_8[5] = "Nine";
char _str_9[4] = "Ten";
char _str_10[5] = "Jack";
char _str_11[6] = "Queen";
char _str_12[5] = "King";
char _str_13[7] = "Hearts";
char _str_14[9] = "Diamonds";
char _str_15[6] = "Clubs";
char _str_16[7] = "Spades";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_17[5] = " of ";
extern void srand(unsigned int p0);
extern long time(long* p0);
void fillDeck(struct Card* p0, char** p1, char** p2);
extern int rand();
struct Card* Card__operator_(struct Card* p0, struct Card* p1);
void shuffle(struct Card* p0);
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__3(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool std____is_constant_evaluated();
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
long std__ios_base__width(struct std__ios_base* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setw p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
int* std__operator__(int* p0, int p1);
int std__operator__2(int p0);
int std__operator__4(int p0, int p1);
int* std__operator___2(int* p0, int p1);
int std__operator_(int p0, int p1);
int std__ios_base__setf(struct std__ios_base* p0, int p1, int p2);
struct std__ios_base* std__right(struct std__ios_base* p0);
struct std___Setw std__setw(int p0);
struct std__ios_base* std__left(struct std__ios_base* p0);
void deal(struct Card* p0);
int main();

char* __const_main_suit[4] = {(char*)(_str_13), (char*)(_str_14), (char*)(_str_15), (char*)(_str_16)};
char* __const_main_face[13] = {(char*)(_str), (char*)(_str_1), (char*)(_str_2), (char*)(_str_3), (char*)(_str_4), (char*)(_str_5), (char*)(_str_6), (char*)(_str_7), (char*)(_str_8), (char*)(_str_9), (char*)(_str_10), (char*)(_str_11), (char*)(_str_12)};
// function: _Z8fillDeckP4CardPPcS2_
void fillDeck(struct Card* v0, char** v1, char** v2) {
bb3:
  struct Card* wDeck4;
  char** wFace5;
  char** wSuit6;
  wDeck4 = v0;
  wFace5 = v1;
  wSuit6 = v2;
    int i7;
    int c8 = 0;
    i7 = c8;
    while (1) {
      int t10 = i7;
      int c11 = 52;
      _Bool c12 = ((t10 < c11)) ? 1 : 0;
      if (!c12) break;
        int t13 = i7;
        int c14 = 13;
        int b15 = t13 % c14;
        long cast16 = (long)b15;
        char** t17 = wFace5;
        char** ptr18 = &(t17)[cast16];
        char* t19 = *ptr18;
        int t20 = i7;
        long cast21 = (long)t20;
        struct Card* t22 = wDeck4;
        struct Card* ptr23 = &(t22)[cast21];
        ptr23->face = t19;
        int t24 = i7;
        int c25 = 13;
        int b26 = t24 / c25;
        long cast27 = (long)b26;
        char** t28 = wSuit6;
        char** ptr29 = &(t28)[cast27];
        char* t30 = *ptr29;
        int t31 = i7;
        long cast32 = (long)t31;
        struct Card* t33 = wDeck4;
        struct Card* ptr34 = &(t33)[cast32];
        ptr34->suit = t30;
    for_step9: ;
      int t35 = i7;
      int u36 = t35 + 1;
      i7 = u36;
    }
  return;
}

// function: _ZN4CardaSERKS_
struct Card* Card__operator_(struct Card* v37, struct Card* v38) {
bb39:
  struct Card* this40;
  struct Card* unnamed41;
  struct Card* __retval42;
  this40 = v37;
  unnamed41 = v38;
  struct Card* t43 = this40;
  struct Card* t44 = unnamed41;
  char* t45 = t44->face;
  t43->face = t45;
  struct Card* t46 = unnamed41;
  char* t47 = t46->suit;
  t43->suit = t47;
  __retval42 = t43;
  struct Card* t48 = __retval42;
  return t48;
}

// function: _Z7shuffleP4Card
void shuffle(struct Card* v49) {
bb50:
  struct Card* wDeck51;
  wDeck51 = v49;
    int i52;
    int c53 = 0;
    i52 = c53;
    while (1) {
      int t55 = i52;
      int c56 = 52;
      _Bool c57 = ((t55 < c56)) ? 1 : 0;
      if (!c57) break;
        int j58;
        struct Card temp59;
        int r60 = rand();
        int c61 = 52;
        int b62 = r60 % c61;
        j58 = b62;
        int t63 = i52;
        long cast64 = (long)t63;
        struct Card* t65 = wDeck51;
        struct Card* ptr66 = &(t65)[cast64];
        temp59 = *ptr66; // copy
        int t67 = j58;
        long cast68 = (long)t67;
        struct Card* t69 = wDeck51;
        struct Card* ptr70 = &(t69)[cast68];
        int t71 = i52;
        long cast72 = (long)t71;
        struct Card* t73 = wDeck51;
        struct Card* ptr74 = &(t73)[cast72];
        struct Card* r75 = Card__operator_(ptr74, ptr70);
        int t76 = j58;
        long cast77 = (long)t76;
        struct Card* t78 = wDeck51;
        struct Card* ptr79 = &(t78)[cast77];
        struct Card* r80 = Card__operator_(ptr79, &temp59);
    for_step54: ;
      int t81 = i52;
      int u82 = t81 + 1;
      i52 = u82;
    }
  return;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v83) {
bb84:
  struct std__ios_base* this85;
  long __retval86;
  this85 = v83;
  struct std__ios_base* t87 = this85;
  long t88 = t87->_M_width;
  __retval86 = t88;
  long t89 = __retval86;
  return t89;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v90, char v91) {
bb92:
  struct std__basic_ostream_char__std__char_traits_char__* __out93;
  char __c94;
  struct std__basic_ostream_char__std__char_traits_char__* __retval95;
  __out93 = v90;
  __c94 = v91;
    struct std__basic_ostream_char__std__char_traits_char__* t96 = __out93;
    void** v97 = (void**)t96;
    void* v98 = *((void**)v97);
    unsigned char* cast99 = (unsigned char*)v98;
    long c100 = -24;
    unsigned char* ptr101 = &(cast99)[c100];
    long* cast102 = (long*)ptr101;
    long t103 = *cast102;
    unsigned char* cast104 = (unsigned char*)t96;
    unsigned char* ptr105 = &(cast104)[t103];
    struct std__basic_ostream_char__std__char_traits_char__* cast106 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr105;
    struct std__ios_base* cast107 = (struct std__ios_base*)cast106;
    long r108 = std__ios_base__width___const(cast107);
    long c109 = 0;
    _Bool c110 = ((r108 != c109)) ? 1 : 0;
    if (c110) {
      struct std__basic_ostream_char__std__char_traits_char__* t111 = __out93;
      long c112 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r113 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t111, &__c94, c112);
      __retval95 = r113;
      struct std__basic_ostream_char__std__char_traits_char__* t114 = __retval95;
      return t114;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t115 = __out93;
  char t116 = __c94;
  struct std__basic_ostream_char__std__char_traits_char__* r117 = std__ostream__put(t115, t116);
  struct std__basic_ostream_char__std__char_traits_char__* t118 = __out93;
  __retval95 = t118;
  struct std__basic_ostream_char__std__char_traits_char__* t119 = __retval95;
  return t119;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__3(int v120, int v121) {
bb122:
  int __a123;
  int __b124;
  int __retval125;
  __a123 = v120;
  __b124 = v121;
  int t126 = __a123;
  int t127 = __b124;
  int b128 = t126 | t127;
  __retval125 = b128;
  int t129 = __retval125;
  return t129;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v130) {
bb131:
  struct std__basic_ios_char__std__char_traits_char__* this132;
  int __retval133;
  this132 = v130;
  struct std__basic_ios_char__std__char_traits_char__* t134 = this132;
  struct std__ios_base* base135 = (struct std__ios_base*)((char *)t134 + 0);
  int t136 = base135->_M_streambuf_state;
  __retval133 = t136;
  int t137 = __retval133;
  return t137;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v138, int v139) {
bb140:
  struct std__basic_ios_char__std__char_traits_char__* this141;
  int __state142;
  this141 = v138;
  __state142 = v139;
  struct std__basic_ios_char__std__char_traits_char__* t143 = this141;
  int r144 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t143);
  int t145 = __state142;
  int r146 = std__operator__3(r144, t145);
  std__basic_ios_char__std__char_traits_char_____clear(t143, r146);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb147:
  _Bool __retval148;
    _Bool c149 = 0;
    __retval148 = c149;
    _Bool t150 = __retval148;
    return t150;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v151, char* v152) {
bb153:
  char* __c1154;
  char* __c2155;
  _Bool __retval156;
  __c1154 = v151;
  __c2155 = v152;
  char* t157 = __c1154;
  char t158 = *t157;
  int cast159 = (int)t158;
  char* t160 = __c2155;
  char t161 = *t160;
  int cast162 = (int)t161;
  _Bool c163 = ((cast159 == cast162)) ? 1 : 0;
  __retval156 = c163;
  _Bool t164 = __retval156;
  return t164;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v165) {
bb166:
  char* __p167;
  unsigned long __retval168;
  unsigned long __i169;
  __p167 = v165;
  unsigned long c170 = 0;
  __i169 = c170;
    char ref_tmp0171;
    while (1) {
      unsigned long t172 = __i169;
      char* t173 = __p167;
      char* ptr174 = &(t173)[t172];
      char c175 = 0;
      ref_tmp0171 = c175;
      _Bool r176 = __gnu_cxx__char_traits_char___eq(ptr174, &ref_tmp0171);
      _Bool u177 = !r176;
      if (!u177) break;
      unsigned long t178 = __i169;
      unsigned long u179 = t178 + 1;
      __i169 = u179;
    }
  unsigned long t180 = __i169;
  __retval168 = t180;
  unsigned long t181 = __retval168;
  return t181;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v182) {
bb183:
  char* __s184;
  unsigned long __retval185;
  __s184 = v182;
    _Bool r186 = std____is_constant_evaluated();
    if (r186) {
      char* t187 = __s184;
      unsigned long r188 = __gnu_cxx__char_traits_char___length(t187);
      __retval185 = r188;
      unsigned long t189 = __retval185;
      return t189;
    }
  char* t190 = __s184;
  unsigned long r191 = strlen(t190);
  __retval185 = r191;
  unsigned long t192 = __retval185;
  return t192;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v193, char* v194) {
bb195:
  struct std__basic_ostream_char__std__char_traits_char__* __out196;
  char* __s197;
  struct std__basic_ostream_char__std__char_traits_char__* __retval198;
  __out196 = v193;
  __s197 = v194;
    char* t199 = __s197;
    _Bool cast200 = (_Bool)t199;
    _Bool u201 = !cast200;
    if (u201) {
      struct std__basic_ostream_char__std__char_traits_char__* t202 = __out196;
      void** v203 = (void**)t202;
      void* v204 = *((void**)v203);
      unsigned char* cast205 = (unsigned char*)v204;
      long c206 = -24;
      unsigned char* ptr207 = &(cast205)[c206];
      long* cast208 = (long*)ptr207;
      long t209 = *cast208;
      unsigned char* cast210 = (unsigned char*)t202;
      unsigned char* ptr211 = &(cast210)[t209];
      struct std__basic_ostream_char__std__char_traits_char__* cast212 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr211;
      struct std__basic_ios_char__std__char_traits_char__* cast213 = (struct std__basic_ios_char__std__char_traits_char__*)cast212;
      int t214 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast213, t214);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t215 = __out196;
      char* t216 = __s197;
      char* t217 = __s197;
      unsigned long r218 = std__char_traits_char___length(t217);
      long cast219 = (long)r218;
      struct std__basic_ostream_char__std__char_traits_char__* r220 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t215, t216, cast219);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t221 = __out196;
  __retval198 = t221;
  struct std__basic_ostream_char__std__char_traits_char__* t222 = __retval198;
  return t222;
}

// function: _ZNSt8ios_base5widthEl
long std__ios_base__width(struct std__ios_base* v223, long v224) {
bb225:
  struct std__ios_base* this226;
  long __wide227;
  long __retval228;
  long __old229;
  this226 = v223;
  __wide227 = v224;
  struct std__ios_base* t230 = this226;
  long t231 = t230->_M_width;
  __old229 = t231;
  long t232 = __wide227;
  t230->_M_width = t232;
  long t233 = __old229;
  __retval228 = t233;
  long t234 = __retval228;
  return t234;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v235, struct std___Setw v236) {
bb237:
  struct std__basic_ostream_char__std__char_traits_char__* __os238;
  struct std___Setw __f239;
  struct std__basic_ostream_char__std__char_traits_char__* __retval240;
  __os238 = v235;
  __f239 = v236;
  struct std__basic_ostream_char__std__char_traits_char__* t241 = __os238;
  void** v242 = (void**)t241;
  void* v243 = *((void**)v242);
  unsigned char* cast244 = (unsigned char*)v243;
  long c245 = -24;
  unsigned char* ptr246 = &(cast244)[c245];
  long* cast247 = (long*)ptr246;
  long t248 = *cast247;
  unsigned char* cast249 = (unsigned char*)t241;
  unsigned char* ptr250 = &(cast249)[t248];
  struct std__basic_ostream_char__std__char_traits_char__* cast251 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr250;
  struct std__ios_base* cast252 = (struct std__ios_base*)cast251;
  int t253 = __f239._M_n;
  long cast254 = (long)t253;
  long r255 = std__ios_base__width(cast252, cast254);
  struct std__basic_ostream_char__std__char_traits_char__* t256 = __os238;
  __retval240 = t256;
  struct std__basic_ostream_char__std__char_traits_char__* t257 = __retval240;
  return t257;
}

// function: _ZNSolsEPFRSt8ios_baseS0_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* v258, void* v259) {
bb260:
  struct std__basic_ostream_char__std__char_traits_char__* this261;
  void* __pf262;
  struct std__basic_ostream_char__std__char_traits_char__* __retval263;
  this261 = v258;
  __pf262 = v259;
  struct std__basic_ostream_char__std__char_traits_char__* t264 = this261;
  void* t265 = __pf262;
  void** v266 = (void**)t264;
  void* v267 = *((void**)v266);
  unsigned char* cast268 = (unsigned char*)v267;
  long c269 = -24;
  unsigned char* ptr270 = &(cast268)[c269];
  long* cast271 = (long*)ptr270;
  long t272 = *cast271;
  unsigned char* cast273 = (unsigned char*)t264;
  unsigned char* ptr274 = &(cast273)[t272];
  struct std__basic_ostream_char__std__char_traits_char__* cast275 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr274;
  struct std__ios_base* cast276 = (struct std__ios_base*)cast275;
  struct std__ios_base* r277 = ((struct std__ios_base* (*)(struct std__ios_base*))t265)(cast276);
  __retval263 = t264;
  struct std__basic_ostream_char__std__char_traits_char__* t278 = __retval263;
  return t278;
}

// function: _ZStaNRSt13_Ios_FmtflagsS_
int* std__operator__(int* v279, int v280) {
bb281:
  int* __a282;
  int __b283;
  int* __retval284;
  __a282 = v279;
  __b283 = v280;
  int* t285 = __a282;
  int t286 = *t285;
  int t287 = __b283;
  int r288 = std__operator_(t286, t287);
  int* t289 = __a282;
  *t289 = r288;
  __retval284 = t289;
  int* t290 = __retval284;
  return t290;
}

// function: _ZStcoSt13_Ios_Fmtflags
int std__operator__2(int v291) {
bb292:
  int __a293;
  int __retval294;
  __a293 = v291;
  int t295 = __a293;
  int u296 = ~t295;
  __retval294 = u296;
  int t297 = __retval294;
  return t297;
}

// function: _ZStorSt13_Ios_FmtflagsS_
int std__operator__4(int v298, int v299) {
bb300:
  int __a301;
  int __b302;
  int __retval303;
  __a301 = v298;
  __b302 = v299;
  int t304 = __a301;
  int t305 = __b302;
  int b306 = t304 | t305;
  __retval303 = b306;
  int t307 = __retval303;
  return t307;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* std__operator___2(int* v308, int v309) {
bb310:
  int* __a311;
  int __b312;
  int* __retval313;
  __a311 = v308;
  __b312 = v309;
  int* t314 = __a311;
  int t315 = *t314;
  int t316 = __b312;
  int r317 = std__operator__4(t315, t316);
  int* t318 = __a311;
  *t318 = r317;
  __retval313 = t318;
  int* t319 = __retval313;
  return t319;
}

// function: _ZStanSt13_Ios_FmtflagsS_
int std__operator_(int v320, int v321) {
bb322:
  int __a323;
  int __b324;
  int __retval325;
  __a323 = v320;
  __b324 = v321;
  int t326 = __a323;
  int t327 = __b324;
  int b328 = t326 & t327;
  __retval325 = b328;
  int t329 = __retval325;
  return t329;
}

// function: _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
int std__ios_base__setf(struct std__ios_base* v330, int v331, int v332) {
bb333:
  struct std__ios_base* this334;
  int __fmtfl335;
  int __mask336;
  int __retval337;
  int __old338;
  this334 = v330;
  __fmtfl335 = v331;
  __mask336 = v332;
  struct std__ios_base* t339 = this334;
  int t340 = t339->_M_flags;
  __old338 = t340;
  int t341 = __mask336;
  int r342 = std__operator__2(t341);
  int* r343 = std__operator__(&t339->_M_flags, r342);
  int t344 = __fmtfl335;
  int t345 = __mask336;
  int r346 = std__operator_(t344, t345);
  int* r347 = std__operator___2(&t339->_M_flags, r346);
  int t348 = __old338;
  __retval337 = t348;
  int t349 = __retval337;
  return t349;
}

// function: _ZSt5rightRSt8ios_base
struct std__ios_base* std__right(struct std__ios_base* v350) {
bb351:
  struct std__ios_base* __base352;
  struct std__ios_base* __retval353;
  __base352 = v350;
  struct std__ios_base* t354 = __base352;
  int t355 = _ZNSt8ios_base5rightE_const;
  int t356 = _ZNSt8ios_base11adjustfieldE_const;
  int r357 = std__ios_base__setf(t354, t355, t356);
  struct std__ios_base* t358 = __base352;
  __retval353 = t358;
  struct std__ios_base* t359 = __retval353;
  return t359;
}

// function: _ZSt4setwi
struct std___Setw std__setw(int v360) {
bb361:
  int __n362;
  struct std___Setw __retval363;
  __n362 = v360;
  int t364 = __n362;
  __retval363._M_n = t364;
  struct std___Setw t365 = __retval363;
  return t365;
}

// function: _ZSt4leftRSt8ios_base
struct std__ios_base* std__left(struct std__ios_base* v366) {
bb367:
  struct std__ios_base* __base368;
  struct std__ios_base* __retval369;
  __base368 = v366;
  struct std__ios_base* t370 = __base368;
  int t371 = _ZNSt8ios_base4leftE_const;
  int t372 = _ZNSt8ios_base11adjustfieldE_const;
  int r373 = std__ios_base__setf(t370, t371, t372);
  struct std__ios_base* t374 = __base368;
  __retval369 = t374;
  struct std__ios_base* t375 = __retval369;
  return t375;
}

// function: _Z4dealP4Card
void deal(struct Card* v376) {
bb377:
  struct Card* wDeck378;
  wDeck378 = v376;
    int i379;
    struct std___Setw agg_tmp0380;
    struct std___Setw agg_tmp1381;
    int c382 = 0;
    i379 = c382;
    while (1) {
      int t384 = i379;
      int c385 = 52;
      _Bool c386 = ((t384 < c385)) ? 1 : 0;
      if (!c386) break;
      struct std__basic_ostream_char__std__char_traits_char__* r387 = std__ostream__operator___std__ios_base_____(&_ZSt4cout, &std__right);
      int c388 = 5;
      struct std___Setw r389 = std__setw(c388);
      agg_tmp0380 = r389;
      struct std___Setw t390 = agg_tmp0380;
      struct std__basic_ostream_char__std__char_traits_char__* r391 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r387, t390);
      int t392 = i379;
      long cast393 = (long)t392;
      struct Card* t394 = wDeck378;
      struct Card* ptr395 = &(t394)[cast393];
      char* t396 = ptr395->face;
      struct std__basic_ostream_char__std__char_traits_char__* r397 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r391, t396);
      char* cast398 = (char*)&(_str_17);
      struct std__basic_ostream_char__std__char_traits_char__* r399 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r397, cast398);
      struct std__basic_ostream_char__std__char_traits_char__* r400 = std__ostream__operator___std__ios_base_____(r399, &std__left);
      int c401 = 8;
      struct std___Setw r402 = std__setw(c401);
      agg_tmp1381 = r402;
      struct std___Setw t403 = agg_tmp1381;
      struct std__basic_ostream_char__std__char_traits_char__* r404 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r400, t403);
      int t405 = i379;
      long cast406 = (long)t405;
      struct Card* t407 = wDeck378;
      struct Card* ptr408 = &(t407)[cast406];
      char* t409 = ptr408->suit;
      struct std__basic_ostream_char__std__char_traits_char__* r410 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r404, t409);
      int t411 = i379;
      int c412 = 1;
      int b413 = t411 + c412;
      int c414 = 2;
      int b415 = b413 % c414;
      _Bool cast416 = (_Bool)b415;
      char c417 = 9;
      char c418 = 10;
      char sel419 = cast416 ? c417 : c418;
      struct std__basic_ostream_char__std__char_traits_char__* r420 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r410, sel419);
    for_step383: ;
      int t421 = i379;
      int u422 = t421 + 1;
      i379 = u422;
    }
  return;
}

// function: main
int main() {
bb423:
  int __retval424;
  struct Card deck425[52];
  char* face426[13];
  char* suit427[4];
  int c428 = 0;
  __retval424 = c428;
  // array copy
  __builtin_memcpy(face426, __const_main_face, (unsigned long)13 * sizeof(__const_main_face[0]));
  // array copy
  __builtin_memcpy(suit427, __const_main_suit, (unsigned long)4 * sizeof(__const_main_suit[0]));
  long* c429 = ((void*)0);
  long r430 = time(c429);
  unsigned int cast431 = (unsigned int)r430;
  srand(cast431);
  struct Card* cast432 = (struct Card*)&(deck425);
  char** cast433 = (char**)&(face426);
  char** cast434 = (char**)&(suit427);
  fillDeck(cast432, cast433, cast434);
  struct Card* cast435 = (struct Card*)&(deck425);
  shuffle(cast435);
  struct Card* cast436 = (struct Card*)&(deck425);
  deal(cast436);
  int c437 = 0;
  __retval424 = c437;
  int t438 = __retval424;
  return t438;
}

