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
static const char __cir_eh_type__ZTI19BlockParseException[] = "_ZTI19BlockParseException";
static const char __cir_eh_type__ZTI21VarDeclParseException[] = "_ZTI21VarDeclParseException";
static const char __cir_eh_type__ZTI24SingleStmtParseException[] = "_ZTI24SingleStmtParseException";
static const char __cir_eh_type__ZTI26CompoundStmtParseException[] = "_ZTI26CompoundStmtParseException";

// Struct definitions (auto-parsed)
struct Block { int numVarDecls; int numCompStmts; struct VarDecl** varDecls; struct CompoundStmt** compoundStmts; };
struct BlockParseException { unsigned char __field0; };
struct CompoundStmt { struct SingleStmt** stmts; int numStmts; unsigned char __field2[4]; } __attribute__((packed));
struct CompoundStmtParseException { unsigned char __field0; };
struct SingleStmt { _Bool isBlock; struct Block* b; };
struct SingleStmtParseException { unsigned char __field0; };
struct VarDecl { int __field0; };
struct VarDeclParseException { unsigned char __field0; };
struct anon_struct_0 { unsigned char* __field0; unsigned char* __field1; };

extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern unsigned char _ZTI19BlockParseException[];
extern unsigned char _ZTI21VarDeclParseException[];
extern unsigned char _ZTI24SingleStmtParseException[];
extern unsigned char _ZTI26CompoundStmtParseException[];
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS19BlockParseException[22] = "19BlockParseException";
char _ZTS21VarDeclParseException[24] = "21VarDeclParseException";
char _ZTS24SingleStmtParseException[27] = "24SingleStmtParseException";
char _str[30] = "Caught VariableDeclException\n";
char _str_1[33] = "Caught SingleStmtParseException\n";
char _ZTS26CompoundStmtParseException[29] = "26CompoundStmtParseException";
char _str_2[30] = "Caught Block Parse Exception\n";
char _str_3[35] = "Caught CompoundStmtParseException\n";
char _str_4[19] = "Created all stmts\n";
extern int __gxx_personality_v0();
void BlockParseException__BlockParseException(struct BlockParseException* p0);
void VarDeclParseException__VarDeclParseException(struct VarDeclParseException* p0);
void parseVarDecl(struct VarDecl* p0);
void CompoundStmtParseException__CompoundStmtParseException(struct CompoundStmtParseException* p0);
void SingleStmtParseException__SingleStmtParseException(struct SingleStmtParseException* p0);
void parseSingleStmt(struct SingleStmt* p0);
void parseCompoundStmt(struct CompoundStmt* p0);
extern int printf(char* p0, ...);
void parseBlock(struct Block* p0);
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
void Block__Block(struct Block* p0, int p1, int p2);
void operator_delete(void* p0, unsigned long p1) { free(p0); }
void SingleStmt__SingleStmt(struct SingleStmt* p0);
void CompoundStmt__CompoundStmt(struct CompoundStmt* p0, int p1);
void VarDecl___VarDecl(struct VarDecl* p0);
void Block___Block(struct Block* p0);
void SingleStmt___SingleStmt(struct SingleStmt* p0);
void CompoundStmt___CompoundStmt(struct CompoundStmt* p0);
int main();
void* operator_new__(unsigned long p0) { return malloc(p0); }
void operator_delete___2(void* p0, unsigned long p1) { free(p0); }
void operator_delete__(void* p0) { free(p0); }

// function: _ZN19BlockParseExceptionC2Ev
void BlockParseException__BlockParseException(struct BlockParseException* v0) {
bb1:
  struct BlockParseException* this3;
  this3 = v0;
  struct BlockParseException* t4 = this3;
  goto ERROR;
bb2:
ERROR: ;
  return;
}

// function: _ZN21VarDeclParseExceptionC2Ev
void VarDeclParseException__VarDeclParseException(struct VarDeclParseException* v5) {
bb6:
  struct VarDeclParseException* this8;
  this8 = v5;
  struct VarDeclParseException* t9 = this8;
  goto ERROR;
bb7:
ERROR: ;
  return;
}

// function: _Z12parseVarDeclP7VarDecl
void parseVarDecl(struct VarDecl* v10) {
bb11:
  struct VarDecl* v12;
  v12 = v10;
    struct VarDecl* t13 = v12;
    struct VarDecl* c14 = ((void*)0);
    _Bool c15 = ((t13 == c14)) ? 1 : 0;
    if (c15) {
      static char exc_buf16[1] = {0};
      struct VarDeclParseException* exc17 = (struct VarDeclParseException*)exc_buf16;
      VarDeclParseException__VarDeclParseException(exc17);
      if (__cir_exc_active) {
        return;
      }
      __cir_exc_ptr = (void*)exc17;
      __cir_exc_dtor = (void*)0;
      __cir_exc_type = (const void*)__cir_eh_type__ZTI21VarDeclParseException;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI21VarDeclParseException;
      __cir_exc_active = 1;
      return;
      __builtin_unreachable();
    }
  return;
}

// function: _ZN26CompoundStmtParseExceptionC2Ev
void CompoundStmtParseException__CompoundStmtParseException(struct CompoundStmtParseException* v18) {
bb19:
  struct CompoundStmtParseException* this21;
  this21 = v18;
  struct CompoundStmtParseException* t22 = this21;
  goto ERROR;
bb20:
ERROR: ;
  return;
}

// function: _ZN24SingleStmtParseExceptionC2Ev
void SingleStmtParseException__SingleStmtParseException(struct SingleStmtParseException* v23) {
bb24:
  struct SingleStmtParseException* this26;
  this26 = v23;
  struct SingleStmtParseException* t27 = this26;
  goto ERROR;
bb25:
ERROR: ;
  return;
}

// function: _Z15parseSingleStmtP10SingleStmt
void parseSingleStmt(struct SingleStmt* v28) {
bb29:
  struct SingleStmt* sStmt30;
  sStmt30 = v28;
    struct CompoundStmtParseException* e31;
        struct SingleStmt* t33 = sStmt30;
        struct SingleStmt* c34 = ((void*)0);
        _Bool c35 = ((t33 == c34)) ? 1 : 0;
        if (c35) {
          static char exc_buf36[1] = {0};
          struct SingleStmtParseException* exc37 = (struct SingleStmtParseException*)exc_buf36;
          SingleStmtParseException__SingleStmtParseException(exc37);
          if (__cir_exc_active) {
            goto cir_try_dispatch32;
          }
          __cir_exc_ptr = (void*)exc37;
          __cir_exc_dtor = (void*)0;
          __cir_exc_type = (const void*)__cir_eh_type__ZTI24SingleStmtParseException;
          __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI24SingleStmtParseException;
          __cir_exc_active = 1;
          goto cir_try_dispatch32;
          __builtin_unreachable();
        }
        struct SingleStmt* t38 = sStmt30;
        _Bool t39 = t38->isBlock;
        if (t39) {
          struct SingleStmt* t40 = sStmt30;
          struct Block* t41 = t40->b;
          parseBlock(t41);
          if (__cir_exc_active) {
            goto cir_try_dispatch32;
          }
        }
    cir_try_dispatch32: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI26CompoundStmtParseException) {
      int ca_tok42 = 0;
      void* ca_exn43 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        e31 = (struct CompoundStmtParseException*)__cir_exc_ptr;
        char* cast44 = (char*)&(_str_3);
        int r45 = printf(cast44);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          return;
        }
      {
        if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
      }
    }
    else {
      __cir_exc_active = 1;
      return;
    return;
    }
    }
  return;
}

// function: _Z17parseCompoundStmtP12CompoundStmt
void parseCompoundStmt(struct CompoundStmt* v46) {
bb47:
  struct CompoundStmt* cStmt48;
  cStmt48 = v46;
    struct BlockParseException* b49;
        struct CompoundStmt* t51 = cStmt48;
        struct CompoundStmt* c52 = ((void*)0);
        _Bool c53 = ((t51 == c52)) ? 1 : 0;
        if (c53) {
          static char exc_buf54[1] = {0};
          struct CompoundStmtParseException* exc55 = (struct CompoundStmtParseException*)exc_buf54;
          CompoundStmtParseException__CompoundStmtParseException(exc55);
          if (__cir_exc_active) {
            goto cir_try_dispatch50;
          }
          __cir_exc_ptr = (void*)exc55;
          __cir_exc_dtor = (void*)0;
          __cir_exc_type = (const void*)__cir_eh_type__ZTI26CompoundStmtParseException;
          __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI26CompoundStmtParseException;
          __cir_exc_active = 1;
          goto cir_try_dispatch50;
          __builtin_unreachable();
        }
        int i56;
        int c57 = 0;
        i56 = c57;
        while (1) {
          int t59 = i56;
          struct CompoundStmt* t60 = cStmt48;
          int t61 = t60->numStmts;
          _Bool c62 = ((t59 < t61)) ? 1 : 0;
          if (!c62) break;
            int t63 = i56;
            long cast64 = (long)t63;
            struct CompoundStmt* t65 = cStmt48;
            struct SingleStmt** t66 = t65->stmts;
            struct SingleStmt** ptr67 = &(t66)[cast64];
            struct SingleStmt* t68 = *ptr67;
            parseSingleStmt(t68);
            if (__cir_exc_active) {
              goto cir_try_dispatch50;
            }
        for_step58: ;
          int t69 = i56;
          int u70 = t69 + 1;
          i56 = u70;
        }
    cir_try_dispatch50: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI19BlockParseException) {
      int ca_tok71 = 0;
      void* ca_exn72 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        b49 = (struct BlockParseException*)__cir_exc_ptr;
        char* cast73 = (char*)&(_str_2);
        int r74 = printf(cast73);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          return;
        }
      {
        if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
      }
    }
    else {
      __cir_exc_active = 1;
      return;
    return;
    }
    }
  return;
}

// function: _Z10parseBlockP5Block
void parseBlock(struct Block* v75) {
bb76:
  struct Block* b77;
  b77 = v75;
    struct VarDeclParseException* v78;
    struct SingleStmtParseException* s79;
        struct Block* t81 = b77;
        struct Block* c82 = ((void*)0);
        _Bool c83 = ((t81 == c82)) ? 1 : 0;
        if (c83) {
          static char exc_buf84[1] = {0};
          struct BlockParseException* exc85 = (struct BlockParseException*)exc_buf84;
          BlockParseException__BlockParseException(exc85);
          if (__cir_exc_active) {
            goto cir_try_dispatch80;
          }
          __cir_exc_ptr = (void*)exc85;
          __cir_exc_dtor = (void*)0;
          __cir_exc_type = (const void*)__cir_eh_type__ZTI19BlockParseException;
          __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI19BlockParseException;
          __cir_exc_active = 1;
          goto cir_try_dispatch80;
          __builtin_unreachable();
        }
        int i86;
        int c87 = 0;
        i86 = c87;
        while (1) {
          int t89 = i86;
          struct Block* t90 = b77;
          int t91 = t90->numVarDecls;
          _Bool c92 = ((t89 < t91)) ? 1 : 0;
          if (!c92) break;
          int t93 = i86;
          long cast94 = (long)t93;
          struct Block* t95 = b77;
          struct VarDecl** t96 = t95->varDecls;
          struct VarDecl** ptr97 = &(t96)[cast94];
          struct VarDecl* t98 = *ptr97;
          parseVarDecl(t98);
          if (__cir_exc_active) {
            goto cir_try_dispatch80;
          }
        for_step88: ;
          int t99 = i86;
          int u100 = t99 + 1;
          i86 = u100;
        }
        int j101;
        int c102 = 0;
        j101 = c102;
        while (1) {
          int t104 = j101;
          struct Block* t105 = b77;
          int t106 = t105->numCompStmts;
          _Bool c107 = ((t104 < t106)) ? 1 : 0;
          if (!c107) break;
          int t108 = j101;
          long cast109 = (long)t108;
          struct Block* t110 = b77;
          struct CompoundStmt** t111 = t110->compoundStmts;
          struct CompoundStmt** ptr112 = &(t111)[cast109];
          struct CompoundStmt* t113 = *ptr112;
          parseCompoundStmt(t113);
          if (__cir_exc_active) {
            goto cir_try_dispatch80;
          }
        for_step103: ;
          int t114 = j101;
          int u115 = t114 + 1;
          j101 = u115;
        }
    cir_try_dispatch80: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI21VarDeclParseException) {
      int ca_tok116 = 0;
      void* ca_exn117 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        v78 = (struct VarDeclParseException*)__cir_exc_ptr;
        char* cast118 = (char*)&(_str);
        int r119 = printf(cast118);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          return;
        }
      {
        if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
      }
    }
    else if (__cir_exc_type == (const void*)__cir_eh_type__ZTI24SingleStmtParseException) {
      int ca_tok120 = 0;
      void* ca_exn121 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        s79 = (struct SingleStmtParseException*)__cir_exc_ptr;
        char* cast122 = (char*)&(_str_1);
        int r123 = printf(cast122);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          return;
        }
      {
        if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
      }
    }
    else {
      __cir_exc_active = 1;
      return;
    return;
    }
    }
  return;
}

// function: _ZN5BlockC2Eii
void Block__Block(struct Block* v124, int v125, int v126) {
bb127:
  struct Block* this128;
  int nV129;
  int nC130;
  struct VarDecl** __new_result131;
  struct CompoundStmt** __new_result132;
  this128 = v124;
  nV129 = v125;
  nC130 = v126;
  struct Block* t133 = this128;
  int t134 = nV129;
  t133->numVarDecls = t134;
  int t135 = nC130;
  t133->numCompStmts = t135;
  int t136 = nV129;
  unsigned long cast137 = (unsigned long)t136;
  unsigned long c138 = 8;
  unsigned long ovr139;
  _Bool ovf140 = __builtin_mul_overflow(cast137, c138, &ovr139);
  unsigned long c141 = -1;
  unsigned long sel142 = ovf140 ? c141 : ovr139;
  void* r143 = operator_new__(sel142);
  if (__cir_exc_active) {
    return;
  }
    struct VarDecl** cast144 = (struct VarDecl**)r143;
    __new_result131 = cast144;
  struct VarDecl** t145 = __new_result131;
  t133->varDecls = t145;
  int t146 = nC130;
  unsigned long cast147 = (unsigned long)t146;
  unsigned long c148 = 8;
  unsigned long ovr149;
  _Bool ovf150 = __builtin_mul_overflow(cast147, c148, &ovr149);
  unsigned long c151 = -1;
  unsigned long sel152 = ovf150 ? c151 : ovr149;
  void* r153 = operator_new__(sel152);
  if (__cir_exc_active) {
    return;
  }
    struct CompoundStmt** cast154 = (struct CompoundStmt**)r153;
    __new_result132 = cast154;
  struct CompoundStmt** t155 = __new_result132;
  t133->compoundStmts = t155;
  return;
}

// function: _ZN10SingleStmtC2Ev
void SingleStmt__SingleStmt(struct SingleStmt* v156) {
bb157:
  struct SingleStmt* this158;
  this158 = v156;
  struct SingleStmt* t159 = this158;
  _Bool c160 = 0;
  t159->isBlock = c160;
  return;
}

// function: _ZN12CompoundStmtC2Ei
void CompoundStmt__CompoundStmt(struct CompoundStmt* v161, int v162) {
bb163:
  struct CompoundStmt* this164;
  int ns165;
  struct SingleStmt** __new_result166;
  this164 = v161;
  ns165 = v162;
  struct CompoundStmt* t167 = this164;
  int t168 = ns165;
  t167->numStmts = t168;
  int t169 = t167->numStmts;
  unsigned long cast170 = (unsigned long)t169;
  unsigned long c171 = 8;
  unsigned long ovr172;
  _Bool ovf173 = __builtin_mul_overflow(cast170, c171, &ovr172);
  unsigned long c174 = -1;
  unsigned long sel175 = ovf173 ? c174 : ovr172;
  void* r176 = operator_new__(sel175);
  if (__cir_exc_active) {
    return;
  }
    struct SingleStmt** cast177 = (struct SingleStmt**)r176;
    __new_result166 = cast177;
  struct SingleStmt** t178 = __new_result166;
  t167->stmts = t178;
  return;
}

// function: _ZN7VarDeclD2Ev
void VarDecl___VarDecl(struct VarDecl* v179) {
bb180:
  struct VarDecl* this181;
  this181 = v179;
  struct VarDecl* t182 = this181;
  return;
}

// function: _ZN5BlockD2Ev
void Block___Block(struct Block* v183) {
bb184:
  struct Block* this185;
  this185 = v183;
  struct Block* t186 = this185;
  struct VarDecl** t187 = t186->varDecls;
  struct VarDecl** c188 = ((void*)0);
  _Bool c189 = ((t187 != c188)) ? 1 : 0;
  if (c189) {
    void* cast190 = (void*)t187;
    {
      operator_delete__(cast190);
    }
  }
  struct CompoundStmt** t191 = t186->compoundStmts;
  struct CompoundStmt** c192 = ((void*)0);
  _Bool c193 = ((t191 != c192)) ? 1 : 0;
  if (c193) {
    void* cast194 = (void*)t191;
    {
      operator_delete__(cast194);
    }
  }
  return;
}

// function: _ZN10SingleStmtD2Ev
void SingleStmt___SingleStmt(struct SingleStmt* v195) {
bb196:
  struct SingleStmt* this197;
  this197 = v195;
  struct SingleStmt* t198 = this197;
  return;
}

// function: _ZN12CompoundStmtD2Ev
void CompoundStmt___CompoundStmt(struct CompoundStmt* v199) {
bb200:
  struct CompoundStmt* this201;
  this201 = v199;
  struct CompoundStmt* t202 = this201;
  struct SingleStmt** t203 = t202->stmts;
  struct SingleStmt** c204 = ((void*)0);
  _Bool c205 = ((t203 != c204)) ? 1 : 0;
  if (c205) {
    void* cast206 = (void*)t203;
    {
      operator_delete__(cast206);
    }
  }
  return;
}

// function: main
int main() {
bb207:
  int __retval208;
  struct VarDecl* vd209;
  struct Block* b1210;
  struct Block* __new_result211;
  struct SingleStmt* ss212;
  struct SingleStmt* __new_result213;
  struct CompoundStmt* cStmt214;
  struct CompoundStmt* __new_result215;
  struct Block* b216;
  struct Block* __new_result217;
  int c218 = 0;
  __retval208 = c218;
  struct VarDecl* c219 = ((void*)0);
  vd209 = c219;
  unsigned long c220 = 24;
  void* r221 = operator_new(c220);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    struct Block* cast222 = (struct Block*)r221;
    __new_result211 = cast222;
    int c223 = 1;
    int c224 = 0;
    Block__Block(cast222, c223, c224);
    if (__cir_exc_active) {
      {
        operator_delete(r221, c220);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  struct Block* t225 = __new_result211;
  b1210 = t225;
  struct VarDecl* t226 = vd209;
  long c227 = 0;
  struct Block* t228 = b1210;
  struct VarDecl** t229 = t228->varDecls;
  struct VarDecl** ptr230 = &(t229)[c227];
  *ptr230 = t226;
  unsigned long c231 = 16;
  void* r232 = operator_new(c231);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    struct SingleStmt* cast233 = (struct SingleStmt*)r232;
    __new_result213 = cast233;
    SingleStmt__SingleStmt(cast233);
    if (__cir_exc_active) {
      {
        operator_delete(r232, c231);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  struct SingleStmt* t234 = __new_result213;
  ss212 = t234;
  _Bool c235 = 1;
  struct SingleStmt* t236 = ss212;
  t236->isBlock = c235;
  struct Block* t237 = b1210;
  struct SingleStmt* t238 = ss212;
  t238->b = t237;
  unsigned long c239 = 16;
  void* r240 = operator_new(c239);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    struct CompoundStmt* cast241 = (struct CompoundStmt*)r240;
    __new_result215 = cast241;
    int c242 = 1;
    CompoundStmt__CompoundStmt(cast241, c242);
    if (__cir_exc_active) {
      {
        operator_delete(r240, c239);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  struct CompoundStmt* t243 = __new_result215;
  cStmt214 = t243;
  struct SingleStmt* t244 = ss212;
  long c245 = 0;
  struct CompoundStmt* t246 = cStmt214;
  struct SingleStmt** t247 = t246->stmts;
  struct SingleStmt** ptr248 = &(t247)[c245];
  *ptr248 = t244;
  unsigned long c249 = 24;
  void* r250 = operator_new(c249);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    struct Block* cast251 = (struct Block*)r250;
    __new_result217 = cast251;
    int c252 = 0;
    int c253 = 1;
    Block__Block(cast251, c252, c253);
    if (__cir_exc_active) {
      {
        operator_delete(r250, c249);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  struct Block* t254 = __new_result217;
  b216 = t254;
  struct CompoundStmt* t255 = cStmt214;
  long c256 = 0;
  struct Block* t257 = b216;
  struct CompoundStmt** t258 = t257->compoundStmts;
  struct CompoundStmt** ptr259 = &(t258)[c256];
  *ptr259 = t255;
  struct Block* t260 = b216;
  parseBlock(t260);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  char* cast261 = (char*)&(_str_4);
  int r262 = printf(cast261);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  struct VarDecl* t263 = vd209;
  struct VarDecl* c264 = ((void*)0);
  _Bool c265 = ((t263 != c264)) ? 1 : 0;
  if (c265) {
      VarDecl___VarDecl(t263);
    {
      void* cast266 = (void*)t263;
      unsigned long c267 = 4;
      operator_delete(cast266, c267);
    }
  }
  struct Block* t268 = b1210;
  struct Block* c269 = ((void*)0);
  _Bool c270 = ((t268 != c269)) ? 1 : 0;
  if (c270) {
      Block___Block(t268);
    {
      void* cast271 = (void*)t268;
      unsigned long c272 = 24;
      operator_delete(cast271, c272);
    }
  }
  struct SingleStmt* t273 = ss212;
  struct SingleStmt* c274 = ((void*)0);
  _Bool c275 = ((t273 != c274)) ? 1 : 0;
  if (c275) {
      SingleStmt___SingleStmt(t273);
    {
      void* cast276 = (void*)t273;
      unsigned long c277 = 16;
      operator_delete(cast276, c277);
    }
  }
  struct CompoundStmt* t278 = cStmt214;
  struct CompoundStmt* c279 = ((void*)0);
  _Bool c280 = ((t278 != c279)) ? 1 : 0;
  if (c280) {
      CompoundStmt___CompoundStmt(t278);
    {
      void* cast281 = (void*)t278;
      unsigned long c282 = 16;
      operator_delete(cast281, c282);
    }
  }
  struct Block* t283 = b216;
  struct Block* c284 = ((void*)0);
  _Bool c285 = ((t283 != c284)) ? 1 : 0;
  if (c285) {
      Block___Block(t283);
    {
      void* cast286 = (void*)t283;
      unsigned long c287 = 24;
      operator_delete(cast286, c287);
    }
  }
  int c288 = 0;
  __retval208 = c288;
  int t289 = __retval208;
  return t289;
}

