/*
 * Copyright 2025 Budapest University of Technology and Economics
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

extern void abort(void);
// Struct definitions (auto-parsed)
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

int __const_main_deck[4][13];
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base4leftE_const __attribute__((aligned(4))) = 32;
int _ZNSt8ios_base11adjustfieldE_const __attribute__((aligned(4))) = 176;
int _ZNSt8ios_base5rightE_const __attribute__((aligned(4))) = 128;
char _str[7] = "Hearts";
char _str_1[9] = "Diamonds";
char _str_2[6] = "Clubs";
char _str_3[7] = "Spades";
char _str_4[4] = "Ace";
char _str_5[6] = "Deuce";
char _str_6[6] = "Three";
char _str_7[5] = "Four";
char _str_8[5] = "Five";
char _str_9[4] = "Six";
char _str_10[6] = "Seven";
char _str_11[6] = "Eight";
char _str_12[5] = "Nine";
char _str_13[4] = "Ten";
char _str_14[5] = "Jack";
char _str_15[6] = "Queen";
char _str_16[5] = "King";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_17[5] = " of ";
extern void srand(unsigned int p0);
extern long time(long* p0);
extern int rand();
void shuffle_int_(int* p0);
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
struct std___Setw std__setw(int p0);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
int* std__operator__(int* p0, int p1);
int std__operator__2(int p0);
int std__operator__4(int p0, int p1);
int* std__operator___2(int* p0, int p1);
int std__operator_(int p0, int p1);
int std__ios_base__setf(struct std__ios_base* p0, int p1, int p2);
struct std__ios_base* std__right(struct std__ios_base* p0);
struct std__ios_base* std__left(struct std__ios_base* p0);
void deal_int_const_(int* p0, char** p1, char** p2);
int main();

char* __const_main_face[13] = {(char*)(_str_4), (char*)(_str_5), (char*)(_str_6), (char*)(_str_7), (char*)(_str_8), (char*)(_str_9), (char*)(_str_10), (char*)(_str_11), (char*)(_str_12), (char*)(_str_13), (char*)(_str_14), (char*)(_str_15), (char*)(_str_16)};
char* __const_main_suit[4] = {(char*)(_str), (char*)(_str_1), (char*)(_str_2), (char*)(_str_3)};
// function: _Z7shufflePA13_i
void shuffle_int_(int* v0) {
bb1:
  int* wDeck2;
  int row3;
  int column4;
  wDeck2 = v0;
    int card5;
    int c6 = 1;
    card5 = c6;
    while (1) {
      int t8 = card5;
      int c9 = 52;
      _Bool c10 = ((t8 <= c9)) ? 1 : 0;
      if (!c10) break;
          do {
              int r11 = rand();
              int c12 = 4;
              int b13 = r11 % c12;
              row3 = b13;
              int r14 = rand();
              int c15 = 13;
              int b16 = r14 % c15;
              column4 = b16;
            int t17 = column4;
            long cast18 = (long)t17;
            int t19 = row3;
            long cast20 = (long)t19;
            int* t21 = wDeck2;
            int* ptr22 = &(t21)[(cast20) * 13];
            int t23 = ptr22[cast18];
            int c24 = 0;
            _Bool c25 = ((t23 != c24)) ? 1 : 0;
            if (!c25) break;
          } while (1);
        int t26 = card5;
        int t27 = column4;
        long cast28 = (long)t27;
        int t29 = row3;
        long cast30 = (long)t29;
        int* t31 = wDeck2;
        int* ptr32 = &(t31)[(cast30) * 13];
        ptr32[cast28] = t26;
    for_step7: ;
      int t33 = card5;
      int u34 = t33 + 1;
      card5 = u34;
    }
  return;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v35) {
bb36:
  struct std__ios_base* this37;
  long __retval38;
  this37 = v35;
  struct std__ios_base* t39 = this37;
  long t40 = t39->_M_width;
  __retval38 = t40;
  long t41 = __retval38;
  return t41;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v42, char v43) {
bb44:
  struct std__basic_ostream_char__std__char_traits_char__* __out45;
  char __c46;
  struct std__basic_ostream_char__std__char_traits_char__* __retval47;
  __out45 = v42;
  __c46 = v43;
    struct std__basic_ostream_char__std__char_traits_char__* t48 = __out45;
    void** v49 = (void**)t48;
    void* v50 = *((void**)v49);
    unsigned char* cast51 = (unsigned char*)v50;
    long c52 = -24;
    unsigned char* ptr53 = &(cast51)[c52];
    long* cast54 = (long*)ptr53;
    long t55 = *cast54;
    unsigned char* cast56 = (unsigned char*)t48;
    unsigned char* ptr57 = &(cast56)[t55];
    struct std__basic_ostream_char__std__char_traits_char__* cast58 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr57;
    struct std__ios_base* cast59 = (struct std__ios_base*)cast58;
    long r60 = std__ios_base__width___const(cast59);
    long c61 = 0;
    _Bool c62 = ((r60 != c61)) ? 1 : 0;
    if (c62) {
      struct std__basic_ostream_char__std__char_traits_char__* t63 = __out45;
      long c64 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r65 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t63, &__c46, c64);
      __retval47 = r65;
      struct std__basic_ostream_char__std__char_traits_char__* t66 = __retval47;
      return t66;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t67 = __out45;
  char t68 = __c46;
  struct std__basic_ostream_char__std__char_traits_char__* r69 = std__ostream__put(t67, t68);
  struct std__basic_ostream_char__std__char_traits_char__* t70 = __out45;
  __retval47 = t70;
  struct std__basic_ostream_char__std__char_traits_char__* t71 = __retval47;
  return t71;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__3(int v72, int v73) {
bb74:
  int __a75;
  int __b76;
  int __retval77;
  __a75 = v72;
  __b76 = v73;
  int t78 = __a75;
  int t79 = __b76;
  int b80 = t78 | t79;
  __retval77 = b80;
  int t81 = __retval77;
  return t81;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v82) {
bb83:
  struct std__basic_ios_char__std__char_traits_char__* this84;
  int __retval85;
  this84 = v82;
  struct std__basic_ios_char__std__char_traits_char__* t86 = this84;
  struct std__ios_base* base87 = (struct std__ios_base*)((char *)t86 + 0);
  int t88 = base87->_M_streambuf_state;
  __retval85 = t88;
  int t89 = __retval85;
  return t89;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v90, int v91) {
bb92:
  struct std__basic_ios_char__std__char_traits_char__* this93;
  int __state94;
  this93 = v90;
  __state94 = v91;
  struct std__basic_ios_char__std__char_traits_char__* t95 = this93;
  int r96 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t95);
  int t97 = __state94;
  int r98 = std__operator__3(r96, t97);
  std__basic_ios_char__std__char_traits_char_____clear(t95, r98);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb99:
  _Bool __retval100;
    _Bool c101 = 0;
    __retval100 = c101;
    _Bool t102 = __retval100;
    return t102;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v103, char* v104) {
bb105:
  char* __c1106;
  char* __c2107;
  _Bool __retval108;
  __c1106 = v103;
  __c2107 = v104;
  char* t109 = __c1106;
  char t110 = *t109;
  int cast111 = (int)t110;
  char* t112 = __c2107;
  char t113 = *t112;
  int cast114 = (int)t113;
  _Bool c115 = ((cast111 == cast114)) ? 1 : 0;
  __retval108 = c115;
  _Bool t116 = __retval108;
  return t116;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v117) {
bb118:
  char* __p119;
  unsigned long __retval120;
  unsigned long __i121;
  __p119 = v117;
  unsigned long c122 = 0;
  __i121 = c122;
    char ref_tmp0123;
    while (1) {
      unsigned long t124 = __i121;
      char* t125 = __p119;
      char* ptr126 = &(t125)[t124];
      char c127 = 0;
      ref_tmp0123 = c127;
      _Bool r128 = __gnu_cxx__char_traits_char___eq(ptr126, &ref_tmp0123);
      _Bool u129 = !r128;
      if (!u129) break;
      unsigned long t130 = __i121;
      unsigned long u131 = t130 + 1;
      __i121 = u131;
    }
  unsigned long t132 = __i121;
  __retval120 = t132;
  unsigned long t133 = __retval120;
  return t133;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v134) {
bb135:
  char* __s136;
  unsigned long __retval137;
  __s136 = v134;
    _Bool r138 = std____is_constant_evaluated();
    if (r138) {
      char* t139 = __s136;
      unsigned long r140 = __gnu_cxx__char_traits_char___length(t139);
      __retval137 = r140;
      unsigned long t141 = __retval137;
      return t141;
    }
  char* t142 = __s136;
  unsigned long r143 = strlen(t142);
  __retval137 = r143;
  unsigned long t144 = __retval137;
  return t144;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v145, char* v146) {
bb147:
  struct std__basic_ostream_char__std__char_traits_char__* __out148;
  char* __s149;
  struct std__basic_ostream_char__std__char_traits_char__* __retval150;
  __out148 = v145;
  __s149 = v146;
    char* t151 = __s149;
    _Bool cast152 = (_Bool)t151;
    _Bool u153 = !cast152;
    if (u153) {
      struct std__basic_ostream_char__std__char_traits_char__* t154 = __out148;
      void** v155 = (void**)t154;
      void* v156 = *((void**)v155);
      unsigned char* cast157 = (unsigned char*)v156;
      long c158 = -24;
      unsigned char* ptr159 = &(cast157)[c158];
      long* cast160 = (long*)ptr159;
      long t161 = *cast160;
      unsigned char* cast162 = (unsigned char*)t154;
      unsigned char* ptr163 = &(cast162)[t161];
      struct std__basic_ostream_char__std__char_traits_char__* cast164 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr163;
      struct std__basic_ios_char__std__char_traits_char__* cast165 = (struct std__basic_ios_char__std__char_traits_char__*)cast164;
      int t166 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast165, t166);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t167 = __out148;
      char* t168 = __s149;
      char* t169 = __s149;
      unsigned long r170 = std__char_traits_char___length(t169);
      long cast171 = (long)r170;
      struct std__basic_ostream_char__std__char_traits_char__* r172 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t167, t168, cast171);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t173 = __out148;
  __retval150 = t173;
  struct std__basic_ostream_char__std__char_traits_char__* t174 = __retval150;
  return t174;
}

// function: _ZNSt8ios_base5widthEl
long std__ios_base__width(struct std__ios_base* v175, long v176) {
bb177:
  struct std__ios_base* this178;
  long __wide179;
  long __retval180;
  long __old181;
  this178 = v175;
  __wide179 = v176;
  struct std__ios_base* t182 = this178;
  long t183 = t182->_M_width;
  __old181 = t183;
  long t184 = __wide179;
  t182->_M_width = t184;
  long t185 = __old181;
  __retval180 = t185;
  long t186 = __retval180;
  return t186;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v187, struct std___Setw v188) {
bb189:
  struct std__basic_ostream_char__std__char_traits_char__* __os190;
  struct std___Setw __f191;
  struct std__basic_ostream_char__std__char_traits_char__* __retval192;
  __os190 = v187;
  __f191 = v188;
  struct std__basic_ostream_char__std__char_traits_char__* t193 = __os190;
  void** v194 = (void**)t193;
  void* v195 = *((void**)v194);
  unsigned char* cast196 = (unsigned char*)v195;
  long c197 = -24;
  unsigned char* ptr198 = &(cast196)[c197];
  long* cast199 = (long*)ptr198;
  long t200 = *cast199;
  unsigned char* cast201 = (unsigned char*)t193;
  unsigned char* ptr202 = &(cast201)[t200];
  struct std__basic_ostream_char__std__char_traits_char__* cast203 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr202;
  struct std__ios_base* cast204 = (struct std__ios_base*)cast203;
  int t205 = __f191._M_n;
  long cast206 = (long)t205;
  long r207 = std__ios_base__width(cast204, cast206);
  struct std__basic_ostream_char__std__char_traits_char__* t208 = __os190;
  __retval192 = t208;
  struct std__basic_ostream_char__std__char_traits_char__* t209 = __retval192;
  return t209;
}

// function: _ZSt4setwi
struct std___Setw std__setw(int v210) {
bb211:
  int __n212;
  struct std___Setw __retval213;
  __n212 = v210;
  int t214 = __n212;
  __retval213._M_n = t214;
  struct std___Setw t215 = __retval213;
  return t215;
}

// function: _ZNSolsEPFRSt8ios_baseS0_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* v216, void* v217) {
bb218:
  struct std__basic_ostream_char__std__char_traits_char__* this219;
  void* __pf220;
  struct std__basic_ostream_char__std__char_traits_char__* __retval221;
  this219 = v216;
  __pf220 = v217;
  struct std__basic_ostream_char__std__char_traits_char__* t222 = this219;
  void* t223 = __pf220;
  void** v224 = (void**)t222;
  void* v225 = *((void**)v224);
  unsigned char* cast226 = (unsigned char*)v225;
  long c227 = -24;
  unsigned char* ptr228 = &(cast226)[c227];
  long* cast229 = (long*)ptr228;
  long t230 = *cast229;
  unsigned char* cast231 = (unsigned char*)t222;
  unsigned char* ptr232 = &(cast231)[t230];
  struct std__basic_ostream_char__std__char_traits_char__* cast233 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr232;
  struct std__ios_base* cast234 = (struct std__ios_base*)cast233;
  struct std__ios_base* r235 = ((struct std__ios_base* (*)(struct std__ios_base*))t223)(cast234);
  __retval221 = t222;
  struct std__basic_ostream_char__std__char_traits_char__* t236 = __retval221;
  return t236;
}

// function: _ZStaNRSt13_Ios_FmtflagsS_
int* std__operator__(int* v237, int v238) {
bb239:
  int* __a240;
  int __b241;
  int* __retval242;
  __a240 = v237;
  __b241 = v238;
  int* t243 = __a240;
  int t244 = *t243;
  int t245 = __b241;
  int r246 = std__operator_(t244, t245);
  int* t247 = __a240;
  *t247 = r246;
  __retval242 = t247;
  int* t248 = __retval242;
  return t248;
}

// function: _ZStcoSt13_Ios_Fmtflags
int std__operator__2(int v249) {
bb250:
  int __a251;
  int __retval252;
  __a251 = v249;
  int t253 = __a251;
  int u254 = ~t253;
  __retval252 = u254;
  int t255 = __retval252;
  return t255;
}

// function: _ZStorSt13_Ios_FmtflagsS_
int std__operator__4(int v256, int v257) {
bb258:
  int __a259;
  int __b260;
  int __retval261;
  __a259 = v256;
  __b260 = v257;
  int t262 = __a259;
  int t263 = __b260;
  int b264 = t262 | t263;
  __retval261 = b264;
  int t265 = __retval261;
  return t265;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* std__operator___2(int* v266, int v267) {
bb268:
  int* __a269;
  int __b270;
  int* __retval271;
  __a269 = v266;
  __b270 = v267;
  int* t272 = __a269;
  int t273 = *t272;
  int t274 = __b270;
  int r275 = std__operator__4(t273, t274);
  int* t276 = __a269;
  *t276 = r275;
  __retval271 = t276;
  int* t277 = __retval271;
  return t277;
}

// function: _ZStanSt13_Ios_FmtflagsS_
int std__operator_(int v278, int v279) {
bb280:
  int __a281;
  int __b282;
  int __retval283;
  __a281 = v278;
  __b282 = v279;
  int t284 = __a281;
  int t285 = __b282;
  int b286 = t284 & t285;
  __retval283 = b286;
  int t287 = __retval283;
  return t287;
}

// function: _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
int std__ios_base__setf(struct std__ios_base* v288, int v289, int v290) {
bb291:
  struct std__ios_base* this292;
  int __fmtfl293;
  int __mask294;
  int __retval295;
  int __old296;
  this292 = v288;
  __fmtfl293 = v289;
  __mask294 = v290;
  struct std__ios_base* t297 = this292;
  int t298 = t297->_M_flags;
  __old296 = t298;
  int t299 = __mask294;
  int r300 = std__operator__2(t299);
  int* r301 = std__operator__(&t297->_M_flags, r300);
  int t302 = __fmtfl293;
  int t303 = __mask294;
  int r304 = std__operator_(t302, t303);
  int* r305 = std__operator___2(&t297->_M_flags, r304);
  int t306 = __old296;
  __retval295 = t306;
  int t307 = __retval295;
  return t307;
}

// function: _ZSt5rightRSt8ios_base
struct std__ios_base* std__right(struct std__ios_base* v308) {
bb309:
  struct std__ios_base* __base310;
  struct std__ios_base* __retval311;
  __base310 = v308;
  struct std__ios_base* t312 = __base310;
  int t313 = _ZNSt8ios_base5rightE_const;
  int t314 = _ZNSt8ios_base11adjustfieldE_const;
  int r315 = std__ios_base__setf(t312, t313, t314);
  struct std__ios_base* t316 = __base310;
  __retval311 = t316;
  struct std__ios_base* t317 = __retval311;
  return t317;
}

// function: _ZSt4leftRSt8ios_base
struct std__ios_base* std__left(struct std__ios_base* v318) {
bb319:
  struct std__ios_base* __base320;
  struct std__ios_base* __retval321;
  __base320 = v318;
  struct std__ios_base* t322 = __base320;
  int t323 = _ZNSt8ios_base4leftE_const;
  int t324 = _ZNSt8ios_base11adjustfieldE_const;
  int r325 = std__ios_base__setf(t322, t323, t324);
  struct std__ios_base* t326 = __base320;
  __retval321 = t326;
  struct std__ios_base* t327 = __retval321;
  return t327;
}

// function: _Z4dealPA13_KiPPKcS4_
void deal_int_const_(int* v328, char** v329, char** v330) {
bb331:
  int* wDeck332;
  char** wFace333;
  char** wSuit334;
  wDeck332 = v328;
  wFace333 = v329;
  wSuit334 = v330;
    int card335;
    int c336 = 1;
    card335 = c336;
    while (1) {
      int t338 = card335;
      int c339 = 52;
      _Bool c340 = ((t338 <= c339)) ? 1 : 0;
      if (!c340) break;
        int row341;
        int c342 = 0;
        row341 = c342;
        while (1) {
          int t344 = row341;
          int c345 = 3;
          _Bool c346 = ((t344 <= c345)) ? 1 : 0;
          if (!c346) break;
            int column347;
            int c348 = 0;
            column347 = c348;
            while (1) {
              int t350 = column347;
              int c351 = 12;
              _Bool c352 = ((t350 <= c351)) ? 1 : 0;
              if (!c352) break;
                int t353 = column347;
                long cast354 = (long)t353;
                int t355 = row341;
                long cast356 = (long)t355;
                int* t357 = wDeck332;
                int* ptr358 = &(t357)[(cast356) * 13];
                int t359 = ptr358[cast354];
                int t360 = card335;
                _Bool c361 = ((t359 == t360)) ? 1 : 0;
                if (c361) {
                  struct std___Setw agg_tmp0362;
                  struct std___Setw agg_tmp1363;
                  int c364 = 5;
                  struct std___Setw r365 = std__setw(c364);
                  agg_tmp0362 = r365;
                  struct std___Setw t366 = agg_tmp0362;
                  struct std__basic_ostream_char__std__char_traits_char__* r367 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(&_ZSt4cout, t366);
                  struct std__basic_ostream_char__std__char_traits_char__* r368 = std__ostream__operator___std__ios_base_____(r367, &std__right);
                  int t369 = column347;
                  long cast370 = (long)t369;
                  char** t371 = wFace333;
                  char** ptr372 = &(t371)[cast370];
                  char* t373 = *ptr372;
                  struct std__basic_ostream_char__std__char_traits_char__* r374 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r368, t373);
                  char* cast375 = (char*)&(_str_17);
                  struct std__basic_ostream_char__std__char_traits_char__* r376 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r374, cast375);
                  int c377 = 8;
                  struct std___Setw r378 = std__setw(c377);
                  agg_tmp1363 = r378;
                  struct std___Setw t379 = agg_tmp1363;
                  struct std__basic_ostream_char__std__char_traits_char__* r380 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r376, t379);
                  struct std__basic_ostream_char__std__char_traits_char__* r381 = std__ostream__operator___std__ios_base_____(r380, &std__left);
                  int t382 = row341;
                  long cast383 = (long)t382;
                  char** t384 = wSuit334;
                  char** ptr385 = &(t384)[cast383];
                  char* t386 = *ptr385;
                  struct std__basic_ostream_char__std__char_traits_char__* r387 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r381, t386);
                  int t388 = card335;
                  int c389 = 2;
                  int b390 = t388 % c389;
                  int c391 = 0;
                  _Bool c392 = ((b390 == c391)) ? 1 : 0;
                  char c393 = 10;
                  char c394 = 9;
                  char sel395 = c392 ? c393 : c394;
                  struct std__basic_ostream_char__std__char_traits_char__* r396 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r387, sel395);
                }
            for_step349: ;
              int t397 = column347;
              int u398 = t397 + 1;
              column347 = u398;
            }
        for_step343: ;
          int t399 = row341;
          int u400 = t399 + 1;
          row341 = u400;
        }
    for_step337: ;
      int t401 = card335;
      int u402 = t401 + 1;
      card335 = u402;
    }
  return;
}

// function: main
int main() {
bb403:
  int __retval404;
  char* suit405[4];
  char* face406[13];
  int deck407[4][13];
  int c408 = 0;
  __retval404 = c408;
  // array copy
  __builtin_memcpy(suit405, __const_main_suit, (unsigned long)4 * sizeof(__const_main_suit[0]));
  // array copy
  __builtin_memcpy(face406, __const_main_face, (unsigned long)13 * sizeof(__const_main_face[0]));
  // array copy
  __builtin_memcpy(deck407, __const_main_deck, (unsigned long)4 * sizeof(__const_main_deck[0]));
  long* c409 = ((void*)0);
  long r410 = time(c409);
  unsigned int cast411 = (unsigned int)r410;
  srand(cast411);
  int* cast412 = (int*)&(deck407);
  shuffle_int_(cast412);
  int* cast413 = (int*)&(deck407);
  char** cast414 = (char**)&(face406);
  char** cast415 = (char**)&(suit405);
  deal_int_const_(cast413, cast414, cast415);
  int c416 = 0;
  __retval404 = c416;
  int t417 = __retval404;
  return t417;
}

