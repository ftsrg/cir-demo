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
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

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

extern void __VERIFIER_nondet_memory(void*, unsigned long);
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

// function: _ZNK10DerivedOne5printEv
void DerivedOne__print___const(struct DerivedOne* v156) {
bb157:
  struct DerivedOne* this158;
  this158 = v156;
  struct DerivedOne* t159 = this158;
  char* cast160 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std161;
  __VERIFIER_nondet_memory(&std161, sizeof(std161));
  return;
}

// function: _ZNK10DerivedTwo5printEv
void DerivedTwo__print___const(struct DerivedTwo* v162) {
bb163:
  struct DerivedTwo* this164;
  this164 = v162;
  struct DerivedTwo* t165 = this164;
  char* cast166 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std167;
  __VERIFIER_nondet_memory(&std167, sizeof(std167));
  return;
}

// function: _ZTv0_n24_NK10DerivedTwo5printEv
void virtual_thunk_to_DerivedTwo__print___const(struct DerivedTwo* v168) {
bb169:
  struct DerivedTwo* this170;
  this170 = v168;
  struct DerivedTwo* t171 = this170;
  unsigned char* cast172 = (unsigned char*)t171;
  void** v173 = (void**)cast172;
  void* v174 = *((void**)v173);
  unsigned char* cast175 = (unsigned char*)v174;
  long c176 = -24;
  unsigned char* ptr177 = &(cast175)[c176];
  long* cast178 = (long*)ptr177;
  long t179 = *cast178;
  unsigned char* ptr180 = &(cast172)[t179];
  struct DerivedTwo* cast181 = (struct DerivedTwo*)ptr180;
  DerivedTwo__print___const(cast181);
  return;
}

// function: _ZNK8Multiple5printEv
void Multiple__print___const(struct Multiple* v182) {
bb183:
  struct Multiple* this184;
  this184 = v182;
  struct Multiple* t185 = this184;
  struct DerivedTwo* base186 = (struct DerivedTwo*)((char *)t185 + 8);
  DerivedTwo__print___const(base186);
  return;
}

// function: _ZThn8_NK8Multiple5printEv
void non_virtual_thunk_to_Multiple__print___const(struct Multiple* v187) {
bb188:
  struct Multiple* this189;
  this189 = v187;
  struct Multiple* t190 = this189;
  unsigned char* cast191 = (unsigned char*)t190;
  long c192 = -8;
  unsigned char* ptr193 = &(cast191)[c192];
  struct Multiple* cast194 = (struct Multiple*)ptr193;
  Multiple__print___const(cast194);
  return;
}

