extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____ops___Iter_pred_bool_____int__ { void* _M_pred; };
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
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int __const_main_myints[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[15] = "myints[0] == 2";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm28/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[15] = "myints[1] == 4";
char _str_3[15] = "myints[2] == 6";
char _str_4[15] = "myints[3] == 8";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[16] = "range contains:";
char _str_6[2] = " ";
_Bool IsOdd(int p0);
int* int__std____find_if_int_____gnu_cxx____ops___Iter_pred_bool_____int_____int___int_____gnu_cxx____ops___Iter_pred_bool____(int* p0, int* p1, struct __gnu_cxx____ops___Iter_pred_bool_____int__ p2);
_Bool bool___gnu_cxx____ops___Iter_pred_bool_____int____operator___int__(struct __gnu_cxx____ops___Iter_pred_bool_____int__* p0, int* p1);
int* int__std____remove_if_int_____gnu_cxx____ops___Iter_pred_bool_____int_____int___int_____gnu_cxx____ops___Iter_pred_bool____(int* p0, int* p1, struct __gnu_cxx____ops___Iter_pred_bool_____int__ p2);
void __gnu_cxx____ops___Iter_pred_bool_____int_____Iter_pred_bool____(struct __gnu_cxx____ops___Iter_pred_bool_____int__* p0, void* p1);
struct __gnu_cxx____ops___Iter_pred_bool_____int__ __gnu_cxx____ops___Iter_pred_bool_____int_____gnu_cxx____ops____pred_iter_bool_____int___bool____(void* p0);
int* int__std__remove_if_int___bool_____int___int___int___bool____(int* p0, int* p1, void* p2);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
int main();

// function: _Z5IsOddi
_Bool IsOdd(int v0) {
bb1:
  int i2;
  _Bool __retval3;
  i2 = v0;
  int t4 = i2;
  int c5 = 2;
  int b6 = t4 % c5;
  int c7 = 1;
  _Bool c8 = ((b6 == c7)) ? 1 : 0;
  __retval3 = c8;
  _Bool t9 = __retval3;
  return t9;
}

// function: _ZSt9__find_ifIPiN9__gnu_cxx5__ops10_Iter_predIPFbiEEEET_S7_S7_T0_
int* int__std____find_if_int_____gnu_cxx____ops___Iter_pred_bool_____int_____int___int_____gnu_cxx____ops___Iter_pred_bool____(int* v10, int* v11, struct __gnu_cxx____ops___Iter_pred_bool_____int__ v12) {
bb13:
  int* __first14;
  int* __last15;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ __pred16;
  int* __retval17;
  __first14 = v10;
  __last15 = v11;
  __pred16 = v12;
    while (1) {
      int* t18 = __first14;
      int* t19 = __last15;
      _Bool c20 = ((t18 != t19)) ? 1 : 0;
      _Bool ternary21;
      if (c20) {
        int* t22 = __first14;
        _Bool r23 = bool___gnu_cxx____ops___Iter_pred_bool_____int____operator___int__(&__pred16, t22);
        _Bool u24 = !r23;
        ternary21 = (_Bool)u24;
      } else {
        _Bool c25 = 0;
        ternary21 = (_Bool)c25;
      }
      if (!ternary21) break;
      int* t26 = __first14;
      int c27 = 1;
      int* ptr28 = &(t26)[c27];
      __first14 = ptr28;
    }
  int* t29 = __first14;
  __retval17 = t29;
  int* t30 = __retval17;
  return t30;
}

// function: _ZN9__gnu_cxx5__ops10_Iter_predIPFbiEEclIPiEEbT_
_Bool bool___gnu_cxx____ops___Iter_pred_bool_____int____operator___int__(struct __gnu_cxx____ops___Iter_pred_bool_____int__* v31, int* v32) {
bb33:
  struct __gnu_cxx____ops___Iter_pred_bool_____int__* this34;
  int* __it35;
  _Bool __retval36;
  this34 = v31;
  __it35 = v32;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__* t37 = this34;
  void* t38 = t37->_M_pred;
  int* t39 = __it35;
  int t40 = *t39;
  _Bool r41 = ((_Bool (*)(int))t38)(t40);
  __retval36 = r41;
  _Bool t42 = __retval36;
  return t42;
}

// function: _ZSt11__remove_ifIPiN9__gnu_cxx5__ops10_Iter_predIPFbiEEEET_S7_S7_T0_
int* int__std____remove_if_int_____gnu_cxx____ops___Iter_pred_bool_____int_____int___int_____gnu_cxx____ops___Iter_pred_bool____(int* v43, int* v44, struct __gnu_cxx____ops___Iter_pred_bool_____int__ v45) {
bb46:
  int* __first47;
  int* __last48;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ __pred49;
  int* __retval50;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ agg_tmp051;
  int* __result52;
  __first47 = v43;
  __last48 = v44;
  __pred49 = v45;
  int* t53 = __first47;
  int* t54 = __last48;
  agg_tmp051 = __pred49; // copy
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ t55 = agg_tmp051;
  int* r56 = int__std____find_if_int_____gnu_cxx____ops___Iter_pred_bool_____int_____int___int_____gnu_cxx____ops___Iter_pred_bool____(t53, t54, t55);
  __first47 = r56;
    int* t57 = __first47;
    int* t58 = __last48;
    _Bool c59 = ((t57 == t58)) ? 1 : 0;
    if (c59) {
      int* t60 = __first47;
      __retval50 = t60;
      int* t61 = __retval50;
      return t61;
    }
  int* t62 = __first47;
  __result52 = t62;
  int* t63 = __first47;
  int c64 = 1;
  int* ptr65 = &(t63)[c64];
  __first47 = ptr65;
    while (1) {
      int* t67 = __first47;
      int* t68 = __last48;
      _Bool c69 = ((t67 != t68)) ? 1 : 0;
      if (!c69) break;
        int* t70 = __first47;
        _Bool r71 = bool___gnu_cxx____ops___Iter_pred_bool_____int____operator___int__(&__pred49, t70);
        _Bool u72 = !r71;
        if (u72) {
          int* t73 = __first47;
          int t74 = *t73;
          int* t75 = __result52;
          *t75 = t74;
          int* t76 = __result52;
          int c77 = 1;
          int* ptr78 = &(t76)[c77];
          __result52 = ptr78;
        }
    for_step66: ;
      int* t79 = __first47;
      int c80 = 1;
      int* ptr81 = &(t79)[c80];
      __first47 = ptr81;
    }
  int* t82 = __result52;
  __retval50 = t82;
  int* t83 = __retval50;
  return t83;
}

// function: _ZN9__gnu_cxx5__ops10_Iter_predIPFbiEEC2ES3_
void __gnu_cxx____ops___Iter_pred_bool_____int_____Iter_pred_bool____(struct __gnu_cxx____ops___Iter_pred_bool_____int__* v84, void* v85) {
bb86:
  struct __gnu_cxx____ops___Iter_pred_bool_____int__* this87;
  void* __pred88;
  this87 = v84;
  __pred88 = v85;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__* t89 = this87;
  void* t90 = __pred88;
  t89->_M_pred = t90;
  return;
}

// function: _ZN9__gnu_cxx5__ops11__pred_iterIPFbiEEENS0_10_Iter_predIT_EES5_
struct __gnu_cxx____ops___Iter_pred_bool_____int__ __gnu_cxx____ops___Iter_pred_bool_____int_____gnu_cxx____ops____pred_iter_bool_____int___bool____(void* v91) {
bb92:
  void* __pred93;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ __retval94;
  __pred93 = v91;
  void* t95 = __pred93;
  __gnu_cxx____ops___Iter_pred_bool_____int_____Iter_pred_bool____(&__retval94, t95);
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ t96 = __retval94;
  return t96;
}

// function: _ZSt9remove_ifIPiPFbiEET_S3_S3_T0_
int* int__std__remove_if_int___bool_____int___int___int___bool____(int* v97, int* v98, void* v99) {
bb100:
  int* __first101;
  int* __last102;
  void* __pred103;
  int* __retval104;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ agg_tmp0105;
  __first101 = v97;
  __last102 = v98;
  __pred103 = v99;
  int* t106 = __first101;
  int* t107 = __last102;
  void* t108 = __pred103;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ r109 = __gnu_cxx____ops___Iter_pred_bool_____int_____gnu_cxx____ops____pred_iter_bool_____int___bool____(t108);
  agg_tmp0105 = r109;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ t110 = agg_tmp0105;
  int* r111 = int__std____remove_if_int_____gnu_cxx____ops___Iter_pred_bool_____int_____int___int_____gnu_cxx____ops___Iter_pred_bool____(t106, t107, t110);
  __retval104 = r111;
  int* t112 = __retval104;
  return t112;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v113, int v114) {
bb115:
  int __a116;
  int __b117;
  int __retval118;
  __a116 = v113;
  __b117 = v114;
  int t119 = __a116;
  int t120 = __b117;
  int b121 = t119 | t120;
  __retval118 = b121;
  int t122 = __retval118;
  return t122;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v123) {
bb124:
  struct std__basic_ios_char__std__char_traits_char__* this125;
  int __retval126;
  this125 = v123;
  struct std__basic_ios_char__std__char_traits_char__* t127 = this125;
  struct std__ios_base* base128 = (struct std__ios_base*)((char *)t127 + 0);
  int t129 = base128->_M_streambuf_state;
  __retval126 = t129;
  int t130 = __retval126;
  return t130;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v131, int v132) {
bb133:
  struct std__basic_ios_char__std__char_traits_char__* this134;
  int __state135;
  this134 = v131;
  __state135 = v132;
  struct std__basic_ios_char__std__char_traits_char__* t136 = this134;
  int r137 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t136);
  int t138 = __state135;
  int r139 = std__operator_(r137, t138);
  std__basic_ios_char__std__char_traits_char_____clear(t136, r139);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb140:
  _Bool __retval141;
    _Bool c142 = 0;
    __retval141 = c142;
    _Bool t143 = __retval141;
    return t143;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v144, char* v145) {
bb146:
  char* __c1147;
  char* __c2148;
  _Bool __retval149;
  __c1147 = v144;
  __c2148 = v145;
  char* t150 = __c1147;
  char t151 = *t150;
  int cast152 = (int)t151;
  char* t153 = __c2148;
  char t154 = *t153;
  int cast155 = (int)t154;
  _Bool c156 = ((cast152 == cast155)) ? 1 : 0;
  __retval149 = c156;
  _Bool t157 = __retval149;
  return t157;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v158) {
bb159:
  char* __p160;
  unsigned long __retval161;
  unsigned long __i162;
  __p160 = v158;
  unsigned long c163 = 0;
  __i162 = c163;
    char ref_tmp0164;
    while (1) {
      unsigned long t165 = __i162;
      char* t166 = __p160;
      char* ptr167 = &(t166)[t165];
      char c168 = 0;
      ref_tmp0164 = c168;
      _Bool r169 = __gnu_cxx__char_traits_char___eq(ptr167, &ref_tmp0164);
      _Bool u170 = !r169;
      if (!u170) break;
      unsigned long t171 = __i162;
      unsigned long u172 = t171 + 1;
      __i162 = u172;
    }
  unsigned long t173 = __i162;
  __retval161 = t173;
  unsigned long t174 = __retval161;
  return t174;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v175) {
bb176:
  char* __s177;
  unsigned long __retval178;
  __s177 = v175;
    _Bool r179 = std____is_constant_evaluated();
    if (r179) {
      char* t180 = __s177;
      unsigned long r181 = __gnu_cxx__char_traits_char___length(t180);
      __retval178 = r181;
      unsigned long t182 = __retval178;
      return t182;
    }
  char* t183 = __s177;
  unsigned long r184 = strlen(t183);
  __retval178 = r184;
  unsigned long t185 = __retval178;
  return t185;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v186, char* v187) {
bb188:
  struct std__basic_ostream_char__std__char_traits_char__* __out189;
  char* __s190;
  struct std__basic_ostream_char__std__char_traits_char__* __retval191;
  __out189 = v186;
  __s190 = v187;
    char* t192 = __s190;
    _Bool cast193 = (_Bool)t192;
    _Bool u194 = !cast193;
    if (u194) {
      struct std__basic_ostream_char__std__char_traits_char__* t195 = __out189;
      void** v196 = (void**)t195;
      void* v197 = *((void**)v196);
      unsigned char* cast198 = (unsigned char*)v197;
      long c199 = -24;
      unsigned char* ptr200 = &(cast198)[c199];
      long* cast201 = (long*)ptr200;
      long t202 = *cast201;
      unsigned char* cast203 = (unsigned char*)t195;
      unsigned char* ptr204 = &(cast203)[t202];
      struct std__basic_ostream_char__std__char_traits_char__* cast205 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr204;
      struct std__basic_ios_char__std__char_traits_char__* cast206 = (struct std__basic_ios_char__std__char_traits_char__*)cast205;
      int t207 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast206, t207);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t208 = __out189;
      char* t209 = __s190;
      char* t210 = __s190;
      unsigned long r211 = std__char_traits_char___length(t210);
      long cast212 = (long)r211;
      struct std__basic_ostream_char__std__char_traits_char__* r213 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t208, t209, cast212);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t214 = __out189;
  __retval191 = t214;
  struct std__basic_ostream_char__std__char_traits_char__* t215 = __retval191;
  return t215;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v216, void* v217) {
bb218:
  struct std__basic_ostream_char__std__char_traits_char__* this219;
  void* __pf220;
  struct std__basic_ostream_char__std__char_traits_char__* __retval221;
  this219 = v216;
  __pf220 = v217;
  struct std__basic_ostream_char__std__char_traits_char__* t222 = this219;
  void* t223 = __pf220;
  struct std__basic_ostream_char__std__char_traits_char__* r224 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t223)(t222);
  __retval221 = r224;
  struct std__basic_ostream_char__std__char_traits_char__* t225 = __retval221;
  return t225;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v226) {
bb227:
  struct std__basic_ostream_char__std__char_traits_char__* __os228;
  struct std__basic_ostream_char__std__char_traits_char__* __retval229;
  __os228 = v226;
  struct std__basic_ostream_char__std__char_traits_char__* t230 = __os228;
  struct std__basic_ostream_char__std__char_traits_char__* r231 = std__ostream__flush(t230);
  __retval229 = r231;
  struct std__basic_ostream_char__std__char_traits_char__* t232 = __retval229;
  return t232;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v233) {
bb234:
  struct std__ctype_char_* __f235;
  struct std__ctype_char_* __retval236;
  __f235 = v233;
    struct std__ctype_char_* t237 = __f235;
    _Bool cast238 = (_Bool)t237;
    _Bool u239 = !cast238;
    if (u239) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t240 = __f235;
  __retval236 = t240;
  struct std__ctype_char_* t241 = __retval236;
  return t241;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v242, char v243) {
bb244:
  struct std__ctype_char_* this245;
  char __c246;
  char __retval247;
  this245 = v242;
  __c246 = v243;
  struct std__ctype_char_* t248 = this245;
    char t249 = t248->_M_widen_ok;
    _Bool cast250 = (_Bool)t249;
    if (cast250) {
      char t251 = __c246;
      unsigned char cast252 = (unsigned char)t251;
      unsigned long cast253 = (unsigned long)cast252;
      char t254 = t248->_M_widen[cast253];
      __retval247 = t254;
      char t255 = __retval247;
      return t255;
    }
  std__ctype_char____M_widen_init___const(t248);
  char t256 = __c246;
  void** v257 = (void**)t248;
  void* v258 = *((void**)v257);
  char vcall261 = (char)__VERIFIER_virtual_call_char_char(t248, 6, t256);
  __retval247 = vcall261;
  char t262 = __retval247;
  return t262;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v263, char v264) {
bb265:
  struct std__basic_ios_char__std__char_traits_char__* this266;
  char __c267;
  char __retval268;
  this266 = v263;
  __c267 = v264;
  struct std__basic_ios_char__std__char_traits_char__* t269 = this266;
  struct std__ctype_char_* t270 = t269->_M_ctype;
  struct std__ctype_char_* r271 = std__ctype_char__const__std____check_facet_std__ctype_char___(t270);
  char t272 = __c267;
  char r273 = std__ctype_char___widen_char__const(r271, t272);
  __retval268 = r273;
  char t274 = __retval268;
  return t274;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v275) {
bb276:
  struct std__basic_ostream_char__std__char_traits_char__* __os277;
  struct std__basic_ostream_char__std__char_traits_char__* __retval278;
  __os277 = v275;
  struct std__basic_ostream_char__std__char_traits_char__* t279 = __os277;
  struct std__basic_ostream_char__std__char_traits_char__* t280 = __os277;
  void** v281 = (void**)t280;
  void* v282 = *((void**)v281);
  unsigned char* cast283 = (unsigned char*)v282;
  long c284 = -24;
  unsigned char* ptr285 = &(cast283)[c284];
  long* cast286 = (long*)ptr285;
  long t287 = *cast286;
  unsigned char* cast288 = (unsigned char*)t280;
  unsigned char* ptr289 = &(cast288)[t287];
  struct std__basic_ostream_char__std__char_traits_char__* cast290 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr289;
  struct std__basic_ios_char__std__char_traits_char__* cast291 = (struct std__basic_ios_char__std__char_traits_char__*)cast290;
  char c292 = 10;
  char r293 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast291, c292);
  struct std__basic_ostream_char__std__char_traits_char__* r294 = std__ostream__put(t279, r293);
  struct std__basic_ostream_char__std__char_traits_char__* r295 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r294);
  __retval278 = r295;
  struct std__basic_ostream_char__std__char_traits_char__* t296 = __retval278;
  return t296;
}

// function: main
int main() {
bb297:
  int __retval298;
  int myints299[9];
  int* pbegin300;
  int* pend301;
  int c302 = 0;
  __retval298 = c302;
  // array copy
  __builtin_memcpy(myints299, __const_main_myints, (unsigned long)9 * sizeof(__const_main_myints[0]));
  int* cast303 = (int*)&(myints299);
  pbegin300 = cast303;
  int* cast304 = (int*)&(myints299);
  unsigned long c305 = 36;
  unsigned long c306 = 4;
  unsigned long b307 = c305 / c306;
  int* ptr308 = &(cast304)[b307];
  pend301 = ptr308;
  int* t309 = pbegin300;
  int* t310 = pend301;
  int* r311 = int__std__remove_if_int___bool_____int___int___int___bool____(t309, t310, &IsOdd);
  pend301 = r311;
  long c312 = 0;
  int t313 = myints299[c312];
  int c314 = 2;
  _Bool c315 = ((t313 == c314)) ? 1 : 0;
  if (c315) {
  } else {
    char* cast316 = (char*)&(_str);
    char* c317 = _str_1;
    unsigned int c318 = 25;
    char* cast319 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast316, c317, c318, cast319);
  }
  long c320 = 1;
  int t321 = myints299[c320];
  int c322 = 4;
  _Bool c323 = ((t321 == c322)) ? 1 : 0;
  if (c323) {
  } else {
    char* cast324 = (char*)&(_str_2);
    char* c325 = _str_1;
    unsigned int c326 = 26;
    char* cast327 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast324, c325, c326, cast327);
  }
  long c328 = 2;
  int t329 = myints299[c328];
  int c330 = 6;
  _Bool c331 = ((t329 == c330)) ? 1 : 0;
  if (c331) {
  } else {
    char* cast332 = (char*)&(_str_3);
    char* c333 = _str_1;
    unsigned int c334 = 27;
    char* cast335 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast332, c333, c334, cast335);
  }
  long c336 = 3;
  int t337 = myints299[c336];
  int c338 = 8;
  _Bool c339 = ((t337 == c338)) ? 1 : 0;
  if (c339) {
  } else {
    char* cast340 = (char*)&(_str_4);
    char* c341 = _str_1;
    unsigned int c342 = 28;
    char* cast343 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast340, c341, c342, cast343);
  }
  char* cast344 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r345 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast344);
    int* p346;
    int* t347 = pbegin300;
    p346 = t347;
    while (1) {
      int* t349 = p346;
      int* t350 = pend301;
      _Bool c351 = ((t349 != t350)) ? 1 : 0;
      if (!c351) break;
      char* cast352 = (char*)&(_str_6);
      struct std__basic_ostream_char__std__char_traits_char__* r353 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast352);
      int* t354 = p346;
      int t355 = *t354;
      struct std__basic_ostream_char__std__char_traits_char__* r356 = std__ostream__operator__(r353, t355);
    for_step348: ;
      int* t357 = p346;
      int c358 = 1;
      int* ptr359 = &(t357)[c358];
      p346 = ptr359;
    }
  struct std__basic_ostream_char__std__char_traits_char__* r360 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c361 = 0;
  __retval298 = c361;
  int t362 = __retval298;
  return t362;
}

