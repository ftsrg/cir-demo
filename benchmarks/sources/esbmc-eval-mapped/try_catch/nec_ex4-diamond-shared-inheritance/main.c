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
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;
// Per-RTTI address tags: each thrown/caught type symbol gets a
// distinct storage location so catch dispatch is a pointer compare.
static const char __cir_eh_type__ZTI15streamexception[] = "_ZTI15streamexception";
static const char __cir_eh_type__ZTI17iostreamexception[] = "_ZTI17iostreamexception";
static const char __cir_eh_type__ZTI20inputstreamexception[] = "_ZTI20inputstreamexception";
static const char __cir_eh_type__ZTI21outputstreamexception[] = "_ZTI21outputstreamexception";

// Struct definitions (auto-parsed)
struct anon_struct_0 { unsigned char* __field0; unsigned char* __field1; };
struct anon_struct_1 { unsigned char* __field0; unsigned char* __field1; unsigned int __field2; unsigned int __field3; unsigned char* __field4; long __field5; };
struct anon_struct_2 { unsigned char* __field0; unsigned char* __field1; unsigned int __field2; unsigned int __field3; unsigned char* __field4; long __field5; unsigned char* __field6; long __field7; };
struct anon_struct_3 { unsigned char* __field0[3]; };
struct anon_struct_4 { unsigned char* __field0[3]; unsigned char* __field1[3]; };
struct inputstreamexception { void* __field0; };
struct outputstreamexception { void* __field0; };
struct streamexception { unsigned char __field0; };
struct iostreamexception { struct inputstreamexception __field0; struct outputstreamexception __field1; };

extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern void *_ZTVN10__cxxabiv121__vmi_class_type_infoE[];
extern unsigned char _ZTI15streamexception[];
extern unsigned char _ZTI21outputstreamexception[];
extern unsigned char _ZTI20inputstreamexception[];
extern unsigned char _ZTI17iostreamexception[];
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS15streamexception[18] = "15streamexception";
extern void *_ZTVN10__cxxabiv121__vmi_class_type_infoE[];
char _ZTS21outputstreamexception[24] = "21outputstreamexception";
char _ZTS20inputstreamexception[23] = "20inputstreamexception";
char _str[7] = "random";
char _str_1[2] = "r";
char _str_2[2] = "w";
char _ZTS17iostreamexception[20] = "17iostreamexception";
char _str_3[2] = "x";
char _str_4[2] = "y";
char _str_5[2] = "z";
char _str_6[26] = "Caught iostreamexception\n";
char _str_7[29] = "Caught inputstreamexception\n";
char _str_8[30] = "Caught outputstreamexception\n";
char _str_9[24] = "Caught streamexception\n";
char _str_10[3] = "f1";
char _str_11[3] = "f2";
int nondet();
int iooperation();
void streamexception__streamexception(struct streamexception* p0);
int open_file(char* p0, char* p1);
void outputstreamexception__outputstreamexception(struct outputstreamexception* p0);
int write_file(int p0, char* p1);
void inputstreamexception__inputstreamexception(struct inputstreamexception* p0);
char* read_file(int p0);
int close_file(int p0);
void inputstreamexception__inputstreamexception_2(struct inputstreamexception* p0, void** p1);
void outputstreamexception__outputstreamexception_2(struct outputstreamexception* p0, void** p1);
void iostreamexception__iostreamexception(struct iostreamexception* p0);
int copy_file(char* p0, char* p1);
int fopen_file(char* p0, char* p1);
int fwrite_file(int p0, char* p1);
char* fread_file(int p0);
int fclose_file(int p0);
int fcopy_file(int p0, int p1);
extern int __gxx_personality_v0();
extern int printf(char* p0, ...);
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
void operator_delete(void* p0, unsigned long p1) { free(p0); }
int main();

void *_ZTV21outputstreamexception[] = { (void*)0, (void*)0, (void*)0 };
void *_ZTV20inputstreamexception[] = { (void*)0, (void*)0, (void*)0 };
void *_ZTV17iostreamexception[] = { (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0 };
void *_ZTC17iostreamexception0_20inputstreamexception[] = { (void*)0, (void*)0, (void*)0 };
void *_ZTC17iostreamexception8_21outputstreamexception[] = { (void*)0, (void*)0, (void*)0 };
unsigned char* _ZTT21outputstreamexception[1] __attribute__((aligned(8))) = {(unsigned char*)(&_ZTV21outputstreamexception[3])};
unsigned char* _ZTT20inputstreamexception[1] __attribute__((aligned(8))) = {(unsigned char*)(&_ZTV20inputstreamexception[3])};
unsigned char* _ZTT17iostreamexception[4] __attribute__((aligned(8))) = {(unsigned char*)(&_ZTV17iostreamexception[3]), (unsigned char*)(&_ZTC17iostreamexception0_20inputstreamexception[3]), (unsigned char*)(&_ZTC17iostreamexception8_21outputstreamexception[3]), (unsigned char*)(&_ZTV17iostreamexception[6])};

// function: _Z6nondetv
int nondet() {
bb0:
  int __retval1;
  int c2 = 12;
  int c3 = 3;
  int b4 = c2 % c3;
  __retval1 = b4;
  int t5 = __retval1;
  return t5;
}

// function: _Z11iooperationv
int iooperation() {
bb6:
  int __retval7;
  int c8 = 0;
  __retval7 = c8;
  int t9 = __retval7;
  return t9;
}

// function: _ZN15streamexceptionC2Ev
void streamexception__streamexception(struct streamexception* v10) {
bb11:
  struct streamexception* this13;
  this13 = v10;
  struct streamexception* t14 = this13;
  goto ERROR;
bb12:
ERROR: ;
  return;
}

// function: _Z9open_filePcS_
int open_file(char* v15, char* v16) {
bb17:
  char* file18;
  char* mode19;
  int __retval20;
  int fd21;
  file18 = v15;
  mode19 = v16;
  int c22 = 1;
  fd21 = c22;
    int r23 = nondet();
    if (__cir_exc_active) {
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    _Bool cast24 = (_Bool)r23;
    if (cast24) {
      static char exc_buf25[1] = {0};
      struct streamexception* exc26 = (struct streamexception*)exc_buf25;
      streamexception__streamexception(exc26);
      if (__cir_exc_active) {
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      __cir_exc_ptr = (void*)exc26;
      __cir_exc_dtor = (void*)0;
      __cir_exc_type = (const void*)__cir_eh_type__ZTI15streamexception;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI15streamexception;
      __cir_exc_active = 1;
      { int __cir_eh_ret = (int)0; return __cir_eh_ret; }
      __builtin_unreachable();
    } else {
      int r27 = iooperation();
      if (__cir_exc_active) {
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
    }
  int t28 = fd21;
  __retval20 = t28;
  int t29 = __retval20;
  return t29;
}

// function: _ZN21outputstreamexceptionC1Ev
void outputstreamexception__outputstreamexception(struct outputstreamexception* v30) {
bb31:
  struct outputstreamexception* this32;
  this32 = v30;
  struct outputstreamexception* t33 = this32;
  struct streamexception* base34 = (struct streamexception*)((char *)t33 + 0);
  streamexception__streamexception(base34);
  if (__cir_exc_active) {
    return;
  }
  void* v35 = (void*)&_ZTV21outputstreamexception[3];
  void** v36 = (void**)t33;
  *(void**)(v36) = (void*)v35;
  return;
}

// function: _Z10write_fileiPc
int write_file(int v37, char* v38) {
bb39:
  int fd40;
  char* str41;
  int __retval42;
  fd40 = v37;
  str41 = v38;
    int r43 = nondet();
    if (__cir_exc_active) {
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    _Bool cast44 = (_Bool)r43;
    if (cast44) {
      static char exc_buf45[8] = {0};
      struct outputstreamexception* exc46 = (struct outputstreamexception*)exc_buf45;
      struct outputstreamexception c47 = {0};
      *exc46 = c47;
      outputstreamexception__outputstreamexception(exc46);
      if (__cir_exc_active) {
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      __cir_exc_ptr = (void*)exc46;
      __cir_exc_dtor = (void*)0;
      __cir_exc_type = (const void*)__cir_eh_type__ZTI21outputstreamexception;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI21outputstreamexception;
      __cir_exc_active = 1;
      { int __cir_eh_ret = (int)0; return __cir_eh_ret; }
      __builtin_unreachable();
    } else {
      int r48 = iooperation();
      if (__cir_exc_active) {
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
    }
  int c49 = 0;
  __retval42 = c49;
  int t50 = __retval42;
  return t50;
}

// function: _ZN20inputstreamexceptionC1Ev
void inputstreamexception__inputstreamexception(struct inputstreamexception* v51) {
bb52:
  struct inputstreamexception* this53;
  this53 = v51;
  struct inputstreamexception* t54 = this53;
  struct streamexception* base55 = (struct streamexception*)((char *)t54 + 0);
  streamexception__streamexception(base55);
  if (__cir_exc_active) {
    return;
  }
  void* v56 = (void*)&_ZTV20inputstreamexception[3];
  void** v57 = (void**)t54;
  *(void**)(v57) = (void*)v56;
  return;
}

// function: _Z9read_filei
char* read_file(int v58) {
bb59:
  int fd60;
  char* __retval61;
  fd60 = v58;
    int r62 = nondet();
    if (__cir_exc_active) {
      char* __cir_eh_ret = (char*)0;
      return __cir_eh_ret;
    }
    _Bool cast63 = (_Bool)r62;
    if (cast63) {
      static char exc_buf64[8] = {0};
      struct inputstreamexception* exc65 = (struct inputstreamexception*)exc_buf64;
      struct inputstreamexception c66 = {0};
      *exc65 = c66;
      inputstreamexception__inputstreamexception(exc65);
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
      __cir_exc_ptr = (void*)exc65;
      __cir_exc_dtor = (void*)0;
      __cir_exc_type = (const void*)__cir_eh_type__ZTI20inputstreamexception;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI20inputstreamexception;
      __cir_exc_active = 1;
      { char* __cir_eh_ret = (char*)0; return __cir_eh_ret; }
      __builtin_unreachable();
    } else {
      int r67 = iooperation();
      if (__cir_exc_active) {
        char* __cir_eh_ret = (char*)0;
        return __cir_eh_ret;
      }
    }
  char* cast68 = (char*)&(_str);
  __retval61 = cast68;
  char* t69 = __retval61;
  return t69;
}

// function: _Z10close_filei
int close_file(int v70) {
bb71:
  int fd72;
  int __retval73;
  fd72 = v70;
    int r74 = nondet();
    if (__cir_exc_active) {
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    _Bool cast75 = (_Bool)r74;
    if (cast75) {
      static char exc_buf76[1] = {0};
      struct streamexception* exc77 = (struct streamexception*)exc_buf76;
      streamexception__streamexception(exc77);
      if (__cir_exc_active) {
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      __cir_exc_ptr = (void*)exc77;
      __cir_exc_dtor = (void*)0;
      __cir_exc_type = (const void*)__cir_eh_type__ZTI15streamexception;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI15streamexception;
      __cir_exc_active = 1;
      { int __cir_eh_ret = (int)0; return __cir_eh_ret; }
      __builtin_unreachable();
    } else {
      int r78 = iooperation();
      if (__cir_exc_active) {
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
    }
  int c79 = 0;
  __retval73 = c79;
  int t80 = __retval73;
  return t80;
}

// function: _ZN20inputstreamexceptionC2Ev
void inputstreamexception__inputstreamexception_2(struct inputstreamexception* v81, void** v82) {
bb83:
  struct inputstreamexception* this84;
  void** vtt85;
  this84 = v81;
  vtt85 = v82;
  struct inputstreamexception* t86 = this84;
  void** t87 = vtt85;
  static void *vtt_slot88 = 0;
  void** vtt89 = (void**)&vtt_slot88;
  void** cast90 = (void**)vtt89;
  void* t91 = *cast90;
  void** v92 = (void**)t86;
  *(void**)(v92) = (void*)t91;
  return;
}

// function: _ZN21outputstreamexceptionC2Ev
void outputstreamexception__outputstreamexception_2(struct outputstreamexception* v93, void** v94) {
bb95:
  struct outputstreamexception* this96;
  void** vtt97;
  this96 = v93;
  vtt97 = v94;
  struct outputstreamexception* t98 = this96;
  void** t99 = vtt97;
  static void *vtt_slot100 = 0;
  void** vtt101 = (void**)&vtt_slot100;
  void** cast102 = (void**)vtt101;
  void* t103 = *cast102;
  void** v104 = (void**)t98;
  *(void**)(v104) = (void*)t103;
  return;
}

// function: _ZN17iostreamexceptionC1Ev
void iostreamexception__iostreamexception(struct iostreamexception* v105) {
bb106:
  struct iostreamexception* this107;
  this107 = v105;
  struct iostreamexception* t108 = this107;
  struct streamexception* base109 = (struct streamexception*)((char *)t108 + 0);
  streamexception__streamexception(base109);
  if (__cir_exc_active) {
    return;
  }
  struct inputstreamexception* base110 = (struct inputstreamexception*)((char *)t108 + 0);
  static void *vtt_slot111 = 0;
  void** vtt112 = (void**)&vtt_slot111;
  inputstreamexception__inputstreamexception_2(base110, vtt112);
  if (__cir_exc_active) {
    return;
  }
  struct outputstreamexception* base113 = (struct outputstreamexception*)((char *)t108 + 8);
  static void *vtt_slot114 = 0;
  void** vtt115 = (void**)&vtt_slot114;
  outputstreamexception__outputstreamexception_2(base113, vtt115);
  if (__cir_exc_active) {
    return;
  }
  void* v116 = (void*)&_ZTV17iostreamexception[3];
  void** v117 = (void**)t108;
  *(void**)(v117) = (void*)v116;
  void* v118 = (void*)&_ZTV17iostreamexception[6];
  struct outputstreamexception* base119 = (struct outputstreamexception*)((char *)t108 + 8);
  void** v120 = (void**)base119;
  *(void**)(v120) = (void*)v118;
  return;
}

// function: _Z9copy_filePcS_
int copy_file(char* v121, char* v122) {
bb123:
  char* file1124;
  char* file2125;
  int __retval126;
  int fd1127;
  int fd2128;
  char* rstr129;
  file1124 = v121;
  file2125 = v122;
  char* t130 = file1124;
  char* cast131 = (char*)&(_str_1);
  int r132 = open_file(t130, cast131);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  fd1127 = r132;
  char* t133 = file2125;
  char* cast134 = (char*)&(_str_2);
  int r135 = open_file(t133, cast134);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  fd2128 = r135;
    int r136 = nondet();
    if (__cir_exc_active) {
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    _Bool cast137 = (_Bool)r136;
    _Bool u138 = !cast137;
    if (u138) {
      static char exc_buf139[16] = {0};
      struct iostreamexception* exc140 = (struct iostreamexception*)exc_buf139;
      struct iostreamexception c141 = {0};
      *exc140 = c141;
      iostreamexception__iostreamexception(exc140);
      if (__cir_exc_active) {
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      __cir_exc_ptr = (void*)exc140;
      __cir_exc_dtor = (void*)0;
      __cir_exc_type = (const void*)__cir_eh_type__ZTI17iostreamexception;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI17iostreamexception;
      __cir_exc_active = 1;
      { int __cir_eh_ret = (int)0; return __cir_eh_ret; }
      __builtin_unreachable();
    }
  int t142 = fd1127;
  char* r143 = read_file(t142);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  rstr129 = r143;
  int t144 = fd2128;
  char* t145 = rstr129;
  int r146 = write_file(t144, t145);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  int t147 = fd1127;
  int r148 = close_file(t147);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  int t149 = fd2128;
  int r150 = close_file(t149);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  abort();
}

// function: _Z10fopen_filePcS_
int fopen_file(char* v151, char* v152) {
bb153:
  char* file154;
  char* mode155;
  int __retval156;
  int fd157;
  file154 = v151;
  mode155 = v152;
  int c158 = 1;
  fd157 = c158;
  int r159 = iooperation();
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  int t160 = fd157;
  __retval156 = t160;
  int t161 = __retval156;
  return t161;
}

// function: _Z11fwrite_fileiPc
int fwrite_file(int v162, char* v163) {
bb164:
  int fd165;
  char* str166;
  int __retval167;
  fd165 = v162;
  str166 = v163;
  int r168 = iooperation();
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  int c169 = -1;
  __retval167 = c169;
  int t170 = __retval167;
  return t170;
}

// function: _Z10fread_filei
char* fread_file(int v171) {
bb172:
  int fd173;
  char* __retval174;
  fd173 = v171;
  int r175 = iooperation();
  if (__cir_exc_active) {
    char* __cir_eh_ret = (char*)0;
    return __cir_eh_ret;
  }
  char* cast176 = (char*)&(_str);
  __retval174 = cast176;
  char* t177 = __retval174;
  return t177;
}

// function: _Z11fclose_filei
int fclose_file(int v178) {
bb179:
  int fd180;
  int __retval181;
  fd180 = v178;
  int r182 = iooperation();
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  int c183 = -1;
  __retval181 = c183;
  int t184 = __retval181;
  return t184;
}

// function: _Z10fcopy_fileii
int fcopy_file(int v185, int v186) {
bb187:
  int fd1188;
  int fd2189;
  int __retval190;
  fd1188 = v185;
  fd2189 = v186;
    int t191 = fd1188;
    int t192 = fd2189;
    _Bool c193 = ((t191 != t192)) ? 1 : 0;
    if (c193) {
      int c194 = -1;
      __retval190 = c194;
      int t195 = __retval190;
      return t195;
    } else {
      int c196 = 4;
      __retval190 = c196;
      int t197 = __retval190;
      return t197;
    }
  abort();
}

// function: main
int main() {
bb198:
  int __retval199;
  char* file1200;
  char* file2201;
  char* file3202;
  int c203 = 0;
  __retval199 = c203;
  char* cast204 = (char*)&(_str_3);
  file1200 = cast204;
  char* cast205 = (char*)&(_str_4);
  file2201 = cast205;
  char* cast206 = (char*)&(_str_5);
  file3202 = cast206;
    struct iostreamexception* ioexcep207;
    struct inputstreamexception* iexcep208;
    struct outputstreamexception* oexcep209;
    struct streamexception* sexcep210;
      char* t212 = file1200;
      char* t213 = file2201;
      int r214 = copy_file(t212, t213);
      if (__cir_exc_active) {
        goto cir_try_dispatch211;
      }
    cir_try_dispatch211: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI17iostreamexception) {
      int ca_tok215 = 0;
      void* ca_exn216 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        ioexcep207 = (struct iostreamexception*)__cir_exc_ptr;
        char* cast217 = (char*)&(_str_6);
        int r218 = printf(cast217);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        goto ERROR;
      bb219:
      ERROR: ;
    }
    else if (__cir_exc_type == (const void*)__cir_eh_type__ZTI20inputstreamexception) {
      int ca_tok220 = 0;
      void* ca_exn221 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        iexcep208 = (struct inputstreamexception*)__cir_exc_ptr;
        char* cast222 = (char*)&(_str_7);
        int r223 = printf(cast222);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      {
        if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
      }
    }
    else if (__cir_exc_type == (const void*)__cir_eh_type__ZTI21outputstreamexception) {
      int ca_tok224 = 0;
      void* ca_exn225 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        oexcep209 = (struct outputstreamexception*)__cir_exc_ptr;
        char* cast226 = (char*)&(_str_8);
        int r227 = printf(cast226);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      {
        if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
      }
    }
    else if (__cir_exc_type == (const void*)__cir_eh_type__ZTI15streamexception) {
      int ca_tok228 = 0;
      void* ca_exn229 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        sexcep210 = (struct streamexception*)__cir_exc_ptr;
        char* cast230 = (char*)&(_str_9);
        int r231 = printf(cast230);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      {
        if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
      }
    }
    else {
      __cir_exc_active = 1;
      { int __cir_eh_ret = (int)0; return __cir_eh_ret; }
    { int __cir_eh_ret = (int)0; return __cir_eh_ret; }
    }
    }
    int fd1232;
    int fd2233;
    int res234;
    int f1235;
    int f2236;
    struct iostreamexception* ioex237;
    struct inputstreamexception* iex238;
    struct outputstreamexception* oex239;
    struct streamexception* sexcep240;
      char* cast242 = (char*)&(_str_10);
      char* cast243 = (char*)&(_str_1);
      int r244 = fopen_file(cast242, cast243);
      if (__cir_exc_active) {
        goto cir_try_dispatch241;
      }
      fd1232 = r244;
        int t245 = fd1232;
        int c246 = 0;
        _Bool c247 = ((t245 < c246)) ? 1 : 0;
        if (c247) {
          struct inputstreamexception* tmp248;
          struct inputstreamexception* __new_result249;
          struct streamexception* ex250;
          unsigned long c251 = 8;
          void* r252 = operator_new(c251);
          if (__cir_exc_active) {
            goto cir_try_dispatch241;
          }
            struct inputstreamexception* cast253 = (struct inputstreamexception*)r252;
            __new_result249 = cast253;
            struct inputstreamexception c254 = {0};
            *cast253 = c254;
            inputstreamexception__inputstreamexception(cast253);
            if (__cir_exc_active) {
              {
                operator_delete(r252, c251);
              }
              goto cir_try_dispatch241;
            }
          struct inputstreamexception* t255 = __new_result249;
          tmp248 = t255;
          struct inputstreamexception* t256 = tmp248;
          void** v257 = (void**)t256;
          void* v258 = *((void**)v257);
          unsigned char* cast259 = (unsigned char*)v258;
          long c260 = -24;
          unsigned char* ptr261 = &(cast259)[c260];
          long* cast262 = (long*)ptr261;
          long t263 = *cast262;
          unsigned char* cast264 = (unsigned char*)t256;
          unsigned char* ptr265 = &(cast264)[t263];
          struct inputstreamexception* cast266 = (struct inputstreamexception*)ptr265;
          struct streamexception* cast267 = (struct streamexception*)cast266;
          ex250 = cast267;
          static char exc_buf268[1] = {0};
          struct streamexception* exc269 = (struct streamexception*)exc_buf268;
          struct streamexception* t270 = ex250;
          __cir_exc_ptr = (void*)exc269;
          __cir_exc_dtor = (void*)0;
          __cir_exc_type = (const void*)__cir_eh_type__ZTI15streamexception;
          __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI15streamexception;
          __cir_exc_active = 1;
          goto cir_try_dispatch241;
          __builtin_unreachable();
        }
      char* cast271 = (char*)&(_str_11);
      char* cast272 = (char*)&(_str_2);
      int r273 = fopen_file(cast271, cast272);
      if (__cir_exc_active) {
        goto cir_try_dispatch241;
      }
      fd2233 = r273;
        int t274 = fd2233;
        int c275 = 0;
        _Bool c276 = ((t274 < c275)) ? 1 : 0;
        if (c276) {
          struct outputstreamexception* tmp277;
          struct outputstreamexception* __new_result278;
          struct streamexception* ex279;
          unsigned long c280 = 8;
          void* r281 = operator_new(c280);
          if (__cir_exc_active) {
            goto cir_try_dispatch241;
          }
            struct outputstreamexception* cast282 = (struct outputstreamexception*)r281;
            __new_result278 = cast282;
            struct outputstreamexception c283 = {0};
            *cast282 = c283;
            outputstreamexception__outputstreamexception(cast282);
            if (__cir_exc_active) {
              {
                operator_delete(r281, c280);
              }
              goto cir_try_dispatch241;
            }
          struct outputstreamexception* t284 = __new_result278;
          tmp277 = t284;
          struct outputstreamexception* t285 = tmp277;
          void** v286 = (void**)t285;
          void* v287 = *((void**)v286);
          unsigned char* cast288 = (unsigned char*)v287;
          long c289 = -24;
          unsigned char* ptr290 = &(cast288)[c289];
          long* cast291 = (long*)ptr290;
          long t292 = *cast291;
          unsigned char* cast293 = (unsigned char*)t285;
          unsigned char* ptr294 = &(cast293)[t292];
          struct outputstreamexception* cast295 = (struct outputstreamexception*)ptr294;
          struct streamexception* cast296 = (struct streamexception*)cast295;
          ex279 = cast296;
          static char exc_buf297[1] = {0};
          struct streamexception* exc298 = (struct streamexception*)exc_buf297;
          struct streamexception* t299 = ex279;
          __cir_exc_ptr = (void*)exc298;
          __cir_exc_dtor = (void*)0;
          __cir_exc_type = (const void*)__cir_eh_type__ZTI15streamexception;
          __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI15streamexception;
          __cir_exc_active = 1;
          goto cir_try_dispatch241;
          __builtin_unreachable();
        }
      int t300 = fd1232;
      int t301 = fd2233;
      int r302 = fcopy_file(t300, t301);
      if (__cir_exc_active) {
        goto cir_try_dispatch241;
      }
      res234 = r302;
        int t303 = res234;
        int c304 = 0;
        _Bool c305 = ((t303 < c304)) ? 1 : 0;
        if (c305) {
          struct streamexception* tmp306;
          struct iostreamexception* __new_result307;
          struct streamexception* ex308;
          unsigned long c309 = 16;
          void* r310 = operator_new(c309);
          if (__cir_exc_active) {
            goto cir_try_dispatch241;
          }
            struct iostreamexception* cast311 = (struct iostreamexception*)r310;
            __new_result307 = cast311;
            struct iostreamexception c312 = {0};
            *cast311 = c312;
            iostreamexception__iostreamexception(cast311);
            if (__cir_exc_active) {
              {
                operator_delete(r310, c309);
              }
              goto cir_try_dispatch241;
            }
          struct iostreamexception* t313 = __new_result307;
          void** v314 = (void**)t313;
          void* v315 = *((void**)v314);
          unsigned char* cast316 = (unsigned char*)v315;
          long c317 = -24;
          unsigned char* ptr318 = &(cast316)[c317];
          long* cast319 = (long*)ptr318;
          long t320 = *cast319;
          unsigned char* cast321 = (unsigned char*)t313;
          unsigned char* ptr322 = &(cast321)[t320];
          struct iostreamexception* cast323 = (struct iostreamexception*)ptr322;
          struct streamexception* cast324 = (struct streamexception*)cast323;
          tmp306 = cast324;
          struct streamexception* t325 = tmp306;
          ex308 = t325;
          static char exc_buf326[1] = {0};
          struct streamexception* exc327 = (struct streamexception*)exc_buf326;
          struct streamexception* t328 = ex308;
          __cir_exc_ptr = (void*)exc327;
          __cir_exc_dtor = (void*)0;
          __cir_exc_type = (const void*)__cir_eh_type__ZTI15streamexception;
          __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI15streamexception;
          __cir_exc_active = 1;
          goto cir_try_dispatch241;
          __builtin_unreachable();
        }
      int t329 = fd1232;
      int r330 = fclose_file(t329);
      if (__cir_exc_active) {
        goto cir_try_dispatch241;
      }
      f1235 = r330;
        int t331 = f1235;
        int c332 = 0;
        _Bool c333 = ((t331 < c332)) ? 1 : 0;
        if (c333) {
          struct streamexception* tmp334;
          struct streamexception* __new_result335;
          struct streamexception* ex336;
          unsigned long c337 = 1;
          void* r338 = operator_new(c337);
          if (__cir_exc_active) {
            goto cir_try_dispatch241;
          }
            struct streamexception* cast339 = (struct streamexception*)r338;
            __new_result335 = cast339;
            streamexception__streamexception(cast339);
            if (__cir_exc_active) {
              {
                operator_delete(r338, c337);
              }
              goto cir_try_dispatch241;
            }
          struct streamexception* t340 = __new_result335;
          tmp334 = t340;
          struct streamexception* t341 = tmp334;
          ex336 = t341;
          static char exc_buf342[1] = {0};
          struct streamexception* exc343 = (struct streamexception*)exc_buf342;
          struct streamexception* t344 = ex336;
          __cir_exc_ptr = (void*)exc343;
          __cir_exc_dtor = (void*)0;
          __cir_exc_type = (const void*)__cir_eh_type__ZTI15streamexception;
          __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI15streamexception;
          __cir_exc_active = 1;
          goto cir_try_dispatch241;
          __builtin_unreachable();
        }
      int t345 = fd2233;
      int r346 = fclose_file(t345);
      if (__cir_exc_active) {
        goto cir_try_dispatch241;
      }
      f2236 = r346;
        int t347 = f2236;
        int c348 = 0;
        _Bool c349 = ((t347 < c348)) ? 1 : 0;
        if (c349) {
          struct streamexception* tmp350;
          struct streamexception* __new_result351;
          struct streamexception* ex352;
          unsigned long c353 = 1;
          void* r354 = operator_new(c353);
          if (__cir_exc_active) {
            goto cir_try_dispatch241;
          }
            struct streamexception* cast355 = (struct streamexception*)r354;
            __new_result351 = cast355;
            streamexception__streamexception(cast355);
            if (__cir_exc_active) {
              {
                operator_delete(r354, c353);
              }
              goto cir_try_dispatch241;
            }
          struct streamexception* t356 = __new_result351;
          tmp350 = t356;
          struct streamexception* t357 = tmp350;
          ex352 = t357;
          static char exc_buf358[1] = {0};
          struct streamexception* exc359 = (struct streamexception*)exc_buf358;
          struct streamexception* t360 = ex352;
          __cir_exc_ptr = (void*)exc359;
          __cir_exc_dtor = (void*)0;
          __cir_exc_type = (const void*)__cir_eh_type__ZTI15streamexception;
          __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI15streamexception;
          __cir_exc_active = 1;
          goto cir_try_dispatch241;
          __builtin_unreachable();
        }
    cir_try_dispatch241: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI17iostreamexception) {
      int ca_tok361 = 0;
      void* ca_exn362 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        ioex237 = (struct iostreamexception*)__cir_exc_ptr;
        char* cast363 = (char*)&(_str_6);
        int r364 = printf(cast363);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      {
        if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
      }
    }
    else if (__cir_exc_type == (const void*)__cir_eh_type__ZTI20inputstreamexception) {
      int ca_tok365 = 0;
      void* ca_exn366 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        iex238 = (struct inputstreamexception*)__cir_exc_ptr;
        char* cast367 = (char*)&(_str_7);
        int r368 = printf(cast367);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      {
        if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
      }
    }
    else if (__cir_exc_type == (const void*)__cir_eh_type__ZTI21outputstreamexception) {
      int ca_tok369 = 0;
      void* ca_exn370 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        oex239 = (struct outputstreamexception*)__cir_exc_ptr;
        char* cast371 = (char*)&(_str_8);
        int r372 = printf(cast371);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      {
        if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
      }
    }
    else if (__cir_exc_type == (const void*)__cir_eh_type__ZTI15streamexception) {
      int ca_tok373 = 0;
      void* ca_exn374 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        sexcep240 = (struct streamexception*)__cir_exc_ptr;
        char* cast375 = (char*)&(_str_9);
        int r376 = printf(cast375);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      {
        if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
      }
    }
    else {
      __cir_exc_active = 1;
      { int __cir_eh_ret = (int)0; return __cir_eh_ret; }
    { int __cir_eh_ret = (int)0; return __cir_eh_ret; }
    }
    }
  int t377 = __retval199;
  return t377;
}

