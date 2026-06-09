extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) void __VERIFIER_virtual_call_void(void* __obj, int __slot) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  ((void(*)(void*))__fn)(__obj);
}

// Struct definitions (auto-parsed)
struct Base { void* __field0; };
struct DerivedOne { struct Base __field0; };
struct DerivedTwo { struct Base __field0; };
struct Multiple { struct DerivedOne __field0; struct DerivedTwo __field1; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct anon_struct_0 { unsigned char* __field0[5]; unsigned char* __field1[5]; };
struct anon_struct_1 { unsigned char* __field0[5]; };
struct anon_struct_2 { unsigned char* __field0; unsigned char* __field1; };
struct anon_struct_3 { unsigned char* __field0; unsigned char* __field1; unsigned int __field2; unsigned int __field3; unsigned char* __field4; long __field5; };
struct anon_struct_4 { unsigned char* __field0[5]; unsigned char* __field1[4]; };
struct anon_struct_5 { unsigned char* __field0; unsigned char* __field1; unsigned int __field2; unsigned int __field3; unsigned char* __field4; long __field5; unsigned char* __field6; long __field7; };
struct anon_struct_6 { unsigned char* __field0[3]; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

extern void *_ZTVN10__cxxabiv121__vmi_class_type_infoE[];
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern unsigned char _ZTI4Base[];
extern unsigned char _ZTI10DerivedOne[];
extern unsigned char _ZTI10DerivedTwo[];
extern unsigned char _ZTI8Multiple[];
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern void *_ZTVN10__cxxabiv121__vmi_class_type_infoE[];
char _ZTS10DerivedOne[13] = "10DerivedOne";
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS4Base[6] = "4Base";
char _ZTS10DerivedTwo[13] = "10DerivedTwo";
char _ZTS8Multiple[10] = "8Multiple";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[12] = "DerivedOne\n";
char _str_1[12] = "DerivedTwo\n";
void Base__Base(struct Base* p0);
void DerivedOne__DerivedOne_2(struct DerivedOne* p0, void** p1);
void DerivedTwo__DerivedTwo_2(struct DerivedTwo* p0, void** p1);
void Multiple__Multiple(struct Multiple* p0);
void DerivedOne__DerivedOne(struct DerivedOne* p0);
void DerivedTwo__DerivedTwo(struct DerivedTwo* p0);
int main();
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
void DerivedOne__print___const(struct DerivedOne* p0);
void DerivedTwo__print___const(struct DerivedTwo* p0);
void virtual_thunk_to_DerivedTwo__print___const(struct DerivedTwo* p0);
void Multiple__print___const(struct Multiple* p0);
void non_virtual_thunk_to_Multiple__print___const(struct Multiple* p0);
__attribute__((weak)) void __cxa_pure_virtual(void) { __builtin_trap(); }

void *_ZTV8Multiple[] = { (void*)0, (void*)0, (void*)0, (void*)0, (void*)&Multiple__print___const, (void*)0, (void*)0, (void*)0, (void*)0, (void*)&non_virtual_thunk_to_Multiple__print___const };
void *_ZTC8Multiple0_10DerivedOne[] = { (void*)0, (void*)0, (void*)0, (void*)0, (void*)&DerivedOne__print___const };
void *_ZTC8Multiple8_10DerivedTwo[] = { (void*)0, (void*)0, (void*)0, (void*)0, (void*)&DerivedTwo__print___const, (void*)0, (void*)0, (void*)0, (void*)&virtual_thunk_to_DerivedTwo__print___const };
void *_ZTV4Base[] = { (void*)0, (void*)0, (void*)&__cxa_pure_virtual };
void *_ZTV10DerivedOne[] = { (void*)0, (void*)0, (void*)0, (void*)0, (void*)&DerivedOne__print___const };
void *_ZTV10DerivedTwo[] = { (void*)0, (void*)0, (void*)0, (void*)0, (void*)&DerivedTwo__print___const };
unsigned char* _ZTT8Multiple[7] __attribute__((aligned(8))) = {(unsigned char*)(&_ZTV8Multiple[4]), (unsigned char*)(&_ZTC8Multiple0_10DerivedOne[4]), (unsigned char*)(&_ZTC8Multiple0_10DerivedOne[4]), (unsigned char*)(&_ZTC8Multiple8_10DerivedTwo[4]), (unsigned char*)(&_ZTC8Multiple8_10DerivedTwo[8]), (unsigned char*)(&_ZTV8Multiple[4]), (unsigned char*)(&_ZTV8Multiple[9])};
unsigned char* _ZTT10DerivedOne[2] __attribute__((aligned(8))) = {(unsigned char*)(&_ZTV10DerivedOne[4]), (unsigned char*)(&_ZTV10DerivedOne[4])};
unsigned char* _ZTT10DerivedTwo[2] __attribute__((aligned(8))) = {(unsigned char*)(&_ZTV10DerivedTwo[4]), (unsigned char*)(&_ZTV10DerivedTwo[4])};

// function: _ZN4BaseC2Ev
void Base__Base(struct Base* v0) {
bb1:
  struct Base* this2;
  this2 = v0;
  struct Base* t3 = this2;
  void* v4 = (void*)&_ZTV4Base[2];
  void** v5 = (void**)t3;
  *(void**)(v5) = (void*)v4;
  return;
}

// function: _ZN10DerivedOneC2Ev
void DerivedOne__DerivedOne_2(struct DerivedOne* v6, void** v7) {
bb8:
  struct DerivedOne* this9;
  void** vtt10;
  this9 = v6;
  vtt10 = v7;
  struct DerivedOne* t11 = this9;
  void** t12 = vtt10;
  static void *vtt_slot13 = 0;
  void** vtt14 = (void**)&vtt_slot13;
  void** cast15 = (void**)vtt14;
  void* t16 = *cast15;
  void** v17 = (void**)t11;
  *(void**)(v17) = (void*)t16;
  static void *vtt_slot18 = 0;
  void** vtt19 = (void**)&vtt_slot18;
  void** cast20 = (void**)vtt19;
  void* t21 = *cast20;
  void** v22 = (void**)t11;
  void* v23 = *((void**)v22);
  unsigned char* cast24 = (unsigned char*)v23;
  long c25 = -32;
  unsigned char* ptr26 = &(cast24)[c25];
  long* cast27 = (long*)ptr26;
  long t28 = *cast27;
  unsigned char* cast29 = (unsigned char*)t11;
  unsigned char* ptr30 = &(cast29)[t28];
  struct DerivedOne* cast31 = (struct DerivedOne*)ptr30;
  void** v32 = (void**)cast31;
  *(void**)(v32) = (void*)t21;
  return;
}

// function: _ZN10DerivedTwoC2Ev
void DerivedTwo__DerivedTwo_2(struct DerivedTwo* v33, void** v34) {
bb35:
  struct DerivedTwo* this36;
  void** vtt37;
  this36 = v33;
  vtt37 = v34;
  struct DerivedTwo* t38 = this36;
  void** t39 = vtt37;
  static void *vtt_slot40 = 0;
  void** vtt41 = (void**)&vtt_slot40;
  void** cast42 = (void**)vtt41;
  void* t43 = *cast42;
  void** v44 = (void**)t38;
  *(void**)(v44) = (void*)t43;
  static void *vtt_slot45 = 0;
  void** vtt46 = (void**)&vtt_slot45;
  void** cast47 = (void**)vtt46;
  void* t48 = *cast47;
  void** v49 = (void**)t38;
  void* v50 = *((void**)v49);
  unsigned char* cast51 = (unsigned char*)v50;
  long c52 = -32;
  unsigned char* ptr53 = &(cast51)[c52];
  long* cast54 = (long*)ptr53;
  long t55 = *cast54;
  unsigned char* cast56 = (unsigned char*)t38;
  unsigned char* ptr57 = &(cast56)[t55];
  struct DerivedTwo* cast58 = (struct DerivedTwo*)ptr57;
  void** v59 = (void**)cast58;
  *(void**)(v59) = (void*)t48;
  return;
}

// function: _ZN8MultipleC1Ev
void Multiple__Multiple(struct Multiple* v60) {
bb61:
  struct Multiple* this62;
  this62 = v60;
  struct Multiple* t63 = this62;
  struct Base* base64 = (struct Base*)((char *)t63 + 0);
  Base__Base(base64);
  struct DerivedOne* base65 = (struct DerivedOne*)((char *)t63 + 0);
  static void *vtt_slot66 = 0;
  void** vtt67 = (void**)&vtt_slot66;
  DerivedOne__DerivedOne_2(base65, vtt67);
  struct DerivedTwo* base68 = (struct DerivedTwo*)((char *)t63 + 8);
  static void *vtt_slot69 = 0;
  void** vtt70 = (void**)&vtt_slot69;
  DerivedTwo__DerivedTwo_2(base68, vtt70);
  void* v71 = (void*)&_ZTV8Multiple[4];
  void** v72 = (void**)t63;
  *(void**)(v72) = (void*)v71;
  void* v73 = (void*)&_ZTV8Multiple[4];
  void** v74 = (void**)t63;
  *(void**)(v74) = (void*)v73;
  void* v75 = (void*)&_ZTV8Multiple[9];
  struct DerivedTwo* base76 = (struct DerivedTwo*)((char *)t63 + 8);
  void** v77 = (void**)base76;
  *(void**)(v77) = (void*)v75;
  return;
}

// function: _ZN10DerivedOneC1Ev
void DerivedOne__DerivedOne(struct DerivedOne* v78) {
bb79:
  struct DerivedOne* this80;
  this80 = v78;
  struct DerivedOne* t81 = this80;
  struct Base* base82 = (struct Base*)((char *)t81 + 0);
  Base__Base(base82);
  void* v83 = (void*)&_ZTV10DerivedOne[4];
  void** v84 = (void**)t81;
  *(void**)(v84) = (void*)v83;
  void* v85 = (void*)&_ZTV10DerivedOne[4];
  void** v86 = (void**)t81;
  *(void**)(v86) = (void*)v85;
  return;
}

// function: _ZN10DerivedTwoC1Ev
void DerivedTwo__DerivedTwo(struct DerivedTwo* v87) {
bb88:
  struct DerivedTwo* this89;
  this89 = v87;
  struct DerivedTwo* t90 = this89;
  struct Base* base91 = (struct Base*)((char *)t90 + 0);
  Base__Base(base91);
  void* v92 = (void*)&_ZTV10DerivedTwo[4];
  void** v93 = (void**)t90;
  *(void**)(v93) = (void*)v92;
  void* v94 = (void*)&_ZTV10DerivedTwo[4];
  void** v95 = (void**)t90;
  *(void**)(v95) = (void*)v94;
  return;
}

// function: main
int main() {
bb96:
  int __retval97;
  struct Multiple both98;
  struct DerivedOne one99;
  struct DerivedTwo two100;
  struct Base* array101[3];
  int c102 = 0;
  __retval97 = c102;
  Multiple__Multiple(&both98);
  DerivedOne__DerivedOne(&one99);
  DerivedTwo__DerivedTwo(&two100);
  void** v103 = (void**)&(both98);
  void* v104 = *((void**)v103);
  unsigned char* cast105 = (unsigned char*)v104;
  long c106 = -32;
  unsigned char* ptr107 = &(cast105)[c106];
  long* cast108 = (long*)ptr107;
  long t109 = *cast108;
  unsigned char* cast110 = (unsigned char*)&(both98);
  unsigned char* ptr111 = &(cast110)[t109];
  struct Multiple* cast112 = (struct Multiple*)ptr111;
  struct Base* cast113 = (struct Base*)cast112;
  long c114 = 0;
  array101[c114] = cast113;
  void** v115 = (void**)&(one99);
  void* v116 = *((void**)v115);
  unsigned char* cast117 = (unsigned char*)v116;
  long c118 = -32;
  unsigned char* ptr119 = &(cast117)[c118];
  long* cast120 = (long*)ptr119;
  long t121 = *cast120;
  unsigned char* cast122 = (unsigned char*)&(one99);
  unsigned char* ptr123 = &(cast122)[t121];
  struct DerivedOne* cast124 = (struct DerivedOne*)ptr123;
  struct Base* cast125 = (struct Base*)cast124;
  long c126 = 1;
  array101[c126] = cast125;
  void** v127 = (void**)&(two100);
  void* v128 = *((void**)v127);
  unsigned char* cast129 = (unsigned char*)v128;
  long c130 = -32;
  unsigned char* ptr131 = &(cast129)[c130];
  long* cast132 = (long*)ptr131;
  long t133 = *cast132;
  unsigned char* cast134 = (unsigned char*)&(two100);
  unsigned char* ptr135 = &(cast134)[t133];
  struct DerivedTwo* cast136 = (struct DerivedTwo*)ptr135;
  struct Base* cast137 = (struct Base*)cast136;
  long c138 = 2;
  array101[c138] = cast137;
    int i139;
    int c140 = 0;
    i139 = c140;
    while (1) {
      int t142 = i139;
      int c143 = 3;
      _Bool c144 = ((t142 < c143)) ? 1 : 0;
      if (!c144) break;
      int t145 = i139;
      long cast146 = (long)t145;
      struct Base* t147 = array101[cast146];
      void** v148 = (void**)t147;
      void* v149 = *((void**)v148);
      __VERIFIER_virtual_call_void(t147, 0);
    for_step141: ;
      int t152 = i139;
      int u153 = t152 + 1;
      i139 = u153;
    }
  int c154 = 0;
  __retval97 = c154;
  int t155 = __retval97;
  return t155;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v156, int v157) {
bb158:
  int __a159;
  int __b160;
  int __retval161;
  __a159 = v156;
  __b160 = v157;
  int t162 = __a159;
  int t163 = __b160;
  int b164 = t162 | t163;
  __retval161 = b164;
  int t165 = __retval161;
  return t165;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v166) {
bb167:
  struct std__basic_ios_char__std__char_traits_char__* this168;
  int __retval169;
  this168 = v166;
  struct std__basic_ios_char__std__char_traits_char__* t170 = this168;
  struct std__ios_base* base171 = (struct std__ios_base*)((char *)t170 + 0);
  int t172 = base171->_M_streambuf_state;
  __retval169 = t172;
  int t173 = __retval169;
  return t173;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v174, int v175) {
bb176:
  struct std__basic_ios_char__std__char_traits_char__* this177;
  int __state178;
  this177 = v174;
  __state178 = v175;
  struct std__basic_ios_char__std__char_traits_char__* t179 = this177;
  int r180 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t179);
  int t181 = __state178;
  int r182 = std__operator_(r180, t181);
  std__basic_ios_char__std__char_traits_char_____clear(t179, r182);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb183:
  _Bool __retval184;
    _Bool c185 = 0;
    __retval184 = c185;
    _Bool t186 = __retval184;
    return t186;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v187, char* v188) {
bb189:
  char* __c1190;
  char* __c2191;
  _Bool __retval192;
  __c1190 = v187;
  __c2191 = v188;
  char* t193 = __c1190;
  char t194 = *t193;
  int cast195 = (int)t194;
  char* t196 = __c2191;
  char t197 = *t196;
  int cast198 = (int)t197;
  _Bool c199 = ((cast195 == cast198)) ? 1 : 0;
  __retval192 = c199;
  _Bool t200 = __retval192;
  return t200;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v201) {
bb202:
  char* __p203;
  unsigned long __retval204;
  unsigned long __i205;
  __p203 = v201;
  unsigned long c206 = 0;
  __i205 = c206;
    char ref_tmp0207;
    while (1) {
      unsigned long t208 = __i205;
      char* t209 = __p203;
      char* ptr210 = &(t209)[t208];
      char c211 = 0;
      ref_tmp0207 = c211;
      _Bool r212 = __gnu_cxx__char_traits_char___eq(ptr210, &ref_tmp0207);
      _Bool u213 = !r212;
      if (!u213) break;
      unsigned long t214 = __i205;
      unsigned long u215 = t214 + 1;
      __i205 = u215;
    }
  unsigned long t216 = __i205;
  __retval204 = t216;
  unsigned long t217 = __retval204;
  return t217;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v218) {
bb219:
  char* __s220;
  unsigned long __retval221;
  __s220 = v218;
    _Bool r222 = std____is_constant_evaluated();
    if (r222) {
      char* t223 = __s220;
      unsigned long r224 = __gnu_cxx__char_traits_char___length(t223);
      __retval221 = r224;
      unsigned long t225 = __retval221;
      return t225;
    }
  char* t226 = __s220;
  unsigned long r227 = strlen(t226);
  __retval221 = r227;
  unsigned long t228 = __retval221;
  return t228;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v229, char* v230) {
bb231:
  struct std__basic_ostream_char__std__char_traits_char__* __out232;
  char* __s233;
  struct std__basic_ostream_char__std__char_traits_char__* __retval234;
  __out232 = v229;
  __s233 = v230;
    char* t235 = __s233;
    _Bool cast236 = (_Bool)t235;
    _Bool u237 = !cast236;
    if (u237) {
      struct std__basic_ostream_char__std__char_traits_char__* t238 = __out232;
      void** v239 = (void**)t238;
      void* v240 = *((void**)v239);
      unsigned char* cast241 = (unsigned char*)v240;
      long c242 = -24;
      unsigned char* ptr243 = &(cast241)[c242];
      long* cast244 = (long*)ptr243;
      long t245 = *cast244;
      unsigned char* cast246 = (unsigned char*)t238;
      unsigned char* ptr247 = &(cast246)[t245];
      struct std__basic_ostream_char__std__char_traits_char__* cast248 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr247;
      struct std__basic_ios_char__std__char_traits_char__* cast249 = (struct std__basic_ios_char__std__char_traits_char__*)cast248;
      int t250 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast249, t250);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t251 = __out232;
      char* t252 = __s233;
      char* t253 = __s233;
      unsigned long r254 = std__char_traits_char___length(t253);
      long cast255 = (long)r254;
      struct std__basic_ostream_char__std__char_traits_char__* r256 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t251, t252, cast255);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t257 = __out232;
  __retval234 = t257;
  struct std__basic_ostream_char__std__char_traits_char__* t258 = __retval234;
  return t258;
}

// function: _ZNK10DerivedOne5printEv
void DerivedOne__print___const(struct DerivedOne* v259) {
bb260:
  struct DerivedOne* this261;
  this261 = v259;
  struct DerivedOne* t262 = this261;
  char* cast263 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r264 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast263);
  return;
}

// function: _ZNK10DerivedTwo5printEv
void DerivedTwo__print___const(struct DerivedTwo* v265) {
bb266:
  struct DerivedTwo* this267;
  this267 = v265;
  struct DerivedTwo* t268 = this267;
  char* cast269 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r270 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast269);
  return;
}

// function: _ZTv0_n24_NK10DerivedTwo5printEv
void virtual_thunk_to_DerivedTwo__print___const(struct DerivedTwo* v271) {
bb272:
  struct DerivedTwo* this273;
  this273 = v271;
  struct DerivedTwo* t274 = this273;
  unsigned char* cast275 = (unsigned char*)t274;
  void** v276 = (void**)cast275;
  void* v277 = *((void**)v276);
  unsigned char* cast278 = (unsigned char*)v277;
  long c279 = -24;
  unsigned char* ptr280 = &(cast278)[c279];
  long* cast281 = (long*)ptr280;
  long t282 = *cast281;
  unsigned char* ptr283 = &(cast275)[t282];
  struct DerivedTwo* cast284 = (struct DerivedTwo*)ptr283;
  DerivedTwo__print___const(cast284);
  return;
}

// function: _ZNK8Multiple5printEv
void Multiple__print___const(struct Multiple* v285) {
bb286:
  struct Multiple* this287;
  this287 = v285;
  struct Multiple* t288 = this287;
  struct DerivedTwo* base289 = (struct DerivedTwo*)((char *)t288 + 8);
  DerivedTwo__print___const(base289);
  return;
}

// function: _ZThn8_NK8Multiple5printEv
void non_virtual_thunk_to_Multiple__print___const(struct Multiple* v290) {
bb291:
  struct Multiple* this292;
  this292 = v290;
  struct Multiple* t293 = this292;
  unsigned char* cast294 = (unsigned char*)t293;
  long c295 = -8;
  unsigned char* ptr296 = &(cast294)[c295];
  struct Multiple* cast297 = (struct Multiple*)ptr296;
  Multiple__print___const(cast297);
  return;
}

