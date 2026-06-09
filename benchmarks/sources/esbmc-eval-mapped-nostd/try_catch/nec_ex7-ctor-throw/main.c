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
static const char __cir_eh_type__ZTI20InvalidSideException[] = "_ZTI20InvalidSideException";
static const char __cir_eh_type__ZTI27TriangleInequalityException[] = "_ZTI27TriangleInequalityException";

// Struct definitions (auto-parsed)
struct InvalidSideException { unsigned char __field0; };
struct Point { int __field0; };
struct Shape { unsigned char __field0; };
struct Triangle { int base; int left; int right; unsigned char __field3[4]; struct Point* points; int np; unsigned char __field6[4]; } __attribute__((packed));
struct TriangleInequalityException { unsigned char __field0; };
struct anon_struct_0 { unsigned char* __field0; unsigned char* __field1; };

extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern unsigned char _ZTI27TriangleInequalityException[];
extern unsigned char _ZTI20InvalidSideException[];
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS27TriangleInequalityException[30] = "27TriangleInequalityException";
char _ZTS20InvalidSideException[23] = "20InvalidSideException";
char _str[42] = "Loop TriangleInequalityException caught!\n";
char _str_1[35] = "Loop InvalidSideException caught!\n";
char _str_2[37] = "TriangleInequalityException caught!\n";
char _str_3[30] = "InvalidSideException caught!\n";
char _str_4[29] = "Triangle constructor called\n";
char _str_5[27] = "Triangle constructor done\n";
extern int __gxx_personality_v0();
void Triangle__Triangle(struct Triangle* p0, int p1, int p2, int p3);
int Triangle__printTriangle(struct Triangle* p0);
void Triangle___Triangle(struct Triangle* p0);
void Point__Point(struct Point* p0);
extern int printf(char* p0, ...);
void Point___Point(struct Point* p0);
int main();
void Shape__Shape(struct Shape* p0);
void InvalidSideException__InvalidSideException(struct InvalidSideException* p0);
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new__(unsigned long p0) { return malloc(p0); }
void operator_delete__(void* p0, unsigned long p1) { free(p0); }
void TriangleInequalityException__TriangleInequalityException(struct TriangleInequalityException* p0);
void Shape___Shape(struct Shape* p0);

// function: _ZN8TriangleC2Eiii
void Triangle__Triangle(struct Triangle* v0, int v1, int v2, int v3) {
bb4:
  struct Triangle* this5;
  int b6;
  int l7;
  int r8;
  int s9;
  struct Point* __new_result10;
  this5 = v0;
  b6 = v1;
  l7 = v2;
  r8 = v3;
  struct Triangle* t11 = this5;
  struct Shape* base12 = (struct Shape*)((char *)t11 + 0);
  Shape__Shape(base12);
  if (__cir_exc_active) {
    return;
  }
    char* cast13 = (char*)&(_str_4);
    int r14 = printf(cast13);
    if (__cir_exc_active) {
      {
        struct Shape* base15 = (struct Shape*)((char *)t11 + 0);
        Shape___Shape(base15);
      }
      return;
    }
    int t16 = b6;
    t11->base = t16;
    int t17 = l7;
    t11->left = t17;
    int t18 = r8;
    t11->right = t18;
      int t19 = t11->base;
      int c20 = 0;
      _Bool c21 = ((t19 <= c20)) ? 1 : 0;
      _Bool ternary22;
      if (c21) {
        _Bool c23 = 1;
        ternary22 = (_Bool)c23;
      } else {
        int t24 = t11->left;
        int c25 = 0;
        _Bool c26 = ((t24 <= c25)) ? 1 : 0;
        ternary22 = (_Bool)c26;
      }
      _Bool ternary27;
      if (ternary22) {
        _Bool c28 = 1;
        ternary27 = (_Bool)c28;
      } else {
        int t29 = t11->right;
        int c30 = 0;
        _Bool c31 = ((t29 <= c30)) ? 1 : 0;
        ternary27 = (_Bool)c31;
      }
      if (ternary27) {
        static char exc_buf32[1] = {0};
        struct InvalidSideException* exc33 = (struct InvalidSideException*)exc_buf32;
        InvalidSideException__InvalidSideException(exc33);
        if (__cir_exc_active) {
          {
            struct Shape* base34 = (struct Shape*)((char *)t11 + 0);
            Shape___Shape(base34);
          }
          return;
        }
        __cir_exc_ptr = (void*)exc33;
        __cir_exc_dtor = (void*)0;
        __cir_exc_type = (const void*)__cir_eh_type__ZTI20InvalidSideException;
        __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI20InvalidSideException;
        __cir_exc_active = 1;
        {
          struct Shape* base35 = (struct Shape*)((char *)t11 + 0);
          Shape___Shape(base35);
        }
        return;
        __builtin_unreachable();
      }
    int t36 = t11->base;
    int t37 = t11->left;
    int b38 = t36 + t37;
    int t39 = t11->right;
    int b40 = b38 + t39;
    int c41 = 2;
    int b42 = b40 / c41;
    s9 = b42;
    int t43 = t11->base;
    t11->np = t43;
    int t44 = t11->base;
    unsigned long cast45 = (unsigned long)t44;
    unsigned long c46 = 4;
    unsigned long ovr47;
    _Bool ovf48 = __builtin_mul_overflow(cast45, c46, &ovr47);
    unsigned long c49 = 8;
    unsigned long ovr50;
    _Bool ovf51 = __builtin_add_overflow(ovr47, c49, &ovr50);
    _Bool b52 = ovf48 | ovf51;
    unsigned long c53 = -1;
    unsigned long sel54 = b52 ? c53 : ovr50;
    void* r55 = operator_new__(sel54);
    if (__cir_exc_active) {
      return;
    }
      unsigned char* cast56 = (unsigned char*)r55;
      unsigned long* cast57 = (unsigned long*)cast56;
      *cast57 = cast45;
      int c58 = 8;
      unsigned char* ptr59 = &(cast56)[c58];
      void* cast60 = (void*)ptr59;
      struct Point* cast61 = (struct Point*)cast60;
      __new_result10 = cast61;
      struct Point* cast62 = (struct Point*)cast61;
      struct Point* cast63 = (struct Point*)cast62;
      struct Point* ptr64 = &(cast63)[cast45];
      unsigned long c65 = 0;
      _Bool c66 = ((cast45 != c65)) ? 1 : 0;
      if (c66) {
        struct Point* __array_idx67;
        __array_idx67 = cast63;
          do {
            struct Point* t68 = __array_idx67;
            Point__Point(t68);
            if (__cir_exc_active) {
              {
                struct Point* t69 = __array_idx67;
                _Bool c70 = ((t69 != cast63)) ? 1 : 0;
                if (c70) {
                  do {
                    struct Point* t71 = __array_idx67;
                    long c72 = -1;
                    struct Point* ptr73 = &(t71)[c72];
                    __array_idx67 = ptr73;
                    Point___Point(ptr73);
                    struct Point* t74 = __array_idx67;
                    _Bool c75 = ((t74 != cast63)) ? 1 : 0;
                    if (!c75) break;
                  } while (1);
                }
              }
              {
                operator_delete__(r55, sel54);
              }
              return;
            }
            unsigned long c76 = 1;
            struct Point* ptr77 = &(t68)[c76];
            __array_idx67 = ptr77;
            struct Point* t78 = __array_idx67;
            _Bool c79 = ((t78 != ptr64)) ? 1 : 0;
            if (!c79) break;
          } while (1);
      }
    struct Point* t80 = __new_result10;
    t11->points = t80;
      int t81 = t11->base;
      int t82 = t11->left;
      int b83 = t81 + t82;
      int t84 = t11->right;
      _Bool c85 = ((b83 <= t84)) ? 1 : 0;
      _Bool ternary86;
      if (c85) {
        _Bool c87 = 1;
        ternary86 = (_Bool)c87;
      } else {
        int t88 = t11->base;
        int t89 = t11->right;
        int b90 = t88 + t89;
        int t91 = t11->left;
        _Bool c92 = ((b90 <= t91)) ? 1 : 0;
        ternary86 = (_Bool)c92;
      }
      _Bool ternary93;
      if (ternary86) {
        _Bool c94 = 1;
        ternary93 = (_Bool)c94;
      } else {
        int t95 = t11->left;
        int t96 = t11->right;
        int b97 = t95 + t96;
        int t98 = t11->base;
        _Bool c99 = ((b97 <= t98)) ? 1 : 0;
        ternary93 = (_Bool)c99;
      }
      if (ternary93) {
        static char exc_buf100[1] = {0};
        struct TriangleInequalityException* exc101 = (struct TriangleInequalityException*)exc_buf100;
        TriangleInequalityException__TriangleInequalityException(exc101);
        if (__cir_exc_active) {
          return;
        }
        __cir_exc_ptr = (void*)exc101;
        __cir_exc_dtor = (void*)0;
        __cir_exc_type = (const void*)__cir_eh_type__ZTI27TriangleInequalityException;
        __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI27TriangleInequalityException;
        __cir_exc_active = 1;
        return;
        __builtin_unreachable();
      }
    char* cast102 = (char*)&(_str_5);
    int r103 = printf(cast102);
    if (__cir_exc_active) {
      return;
    }
  return;
}

// function: _ZN8Triangle13printTriangleEv
int Triangle__printTriangle(struct Triangle* v104) {
bb105:
  struct Triangle* this106;
  int __retval107;
  this106 = v104;
  struct Triangle* t108 = this106;
  abort();
}

// function: _ZN8TriangleD2Ev
void Triangle___Triangle(struct Triangle* v109) {
bb110:
  struct Triangle* this111;
  this111 = v109;
  struct Triangle* t112 = this111;
    struct Point* t113 = t112->points;
    struct Point* c114 = ((void*)0);
    _Bool c115 = ((t113 != c114)) ? 1 : 0;
    if (c115) {
      unsigned char* cast116 = (unsigned char*)t113;
      long c117 = -8;
      unsigned char* ptr118 = &(cast116)[c117];
      void* cast119 = (void*)ptr118;
      unsigned long* cast120 = (unsigned long*)ptr118;
      unsigned long t121 = *cast120;
        struct Point* ptr122 = &(t113)[t121];
        _Bool c123 = ((ptr122 != t113)) ? 1 : 0;
        if (c123) {
          struct Point* __array_idx124;
          __array_idx124 = ptr122;
          do {
            struct Point* t125 = __array_idx124;
            long c126 = -1;
            struct Point* ptr127 = &(t125)[c126];
            __array_idx124 = ptr127;
            Point___Point(ptr127);
            struct Point* t128 = __array_idx124;
            _Bool c129 = ((t128 != t113)) ? 1 : 0;
            if (!c129) break;
          } while (1);
        }
      {
        unsigned long c130 = 4;
        unsigned long b131 = c130 * t121;
        unsigned long c132 = 8;
        unsigned long b133 = b131 + c132;
        operator_delete__(cast119, b133);
      }
    }
  {
    struct Shape* base134 = (struct Shape*)((char *)t112 + 0);
    Shape___Shape(base134);
  }
  return;
}

// function: _ZN5PointC2Ev
void Point__Point(struct Point* v135) {
bb136:
  struct Point* this137;
  this137 = v135;
  struct Point* t138 = this137;
  return;
}

// function: _ZN5PointD2Ev
void Point___Point(struct Point* v139) {
bb140:
  struct Point* this141;
  this141 = v139;
  struct Point* t142 = this141;
  return;
}

// function: main
int main() {
bb143:
  int __retval144;
  int c145 = 0;
  __retval144 = c145;
    struct Triangle t1146;
    struct Triangle t2147;
    struct TriangleInequalityException* ex1148;
    struct Point x149;
    struct InvalidSideException* s150;
    struct Point x151;
      int c153 = 4;
      int c154 = 2;
      int c155 = 4;
      Triangle__Triangle(&t1146, c153, c154, c155);
      if (__cir_exc_active) {
        goto cir_try_dispatch152;
      }
        int c156 = 6;
        int c157 = 8;
        int c158 = 4;
        Triangle__Triangle(&t2147, c156, c157, c158);
        if (__cir_exc_active) {
          {
            Triangle___Triangle(&t1146);
          }
          goto cir_try_dispatch152;
        }
            int i159;
            int c160 = 3;
            i159 = c160;
            while (1) {
              int t162 = i159;
              int c163 = 0;
              _Bool c164 = ((t162 >= c163)) ? 1 : 0;
              if (!c164) break;
                  struct Triangle t3165;
                  struct TriangleInequalityException* ex1166;
                  struct Point x167;
                  struct InvalidSideException* s168;
                  struct Point x169;
                    int t171 = i159;
                    int c172 = 2;
                    int t173 = i159;
                    int b174 = c172 * t173;
                    int c175 = 3;
                    int t176 = i159;
                    int b177 = c175 * t176;
                    int c178 = 2;
                    int b179 = b177 + c178;
                    Triangle__Triangle(&t3165, t171, b174, b179);
                    if (__cir_exc_active) {
                      {
                        Triangle___Triangle(&t2147);
                      }
                      {
                        Triangle___Triangle(&t1146);
                      }
                      goto cir_try_dispatch170;
                    }
                      int r180 = Triangle__printTriangle(&t3165);
                      if (__cir_exc_active) {
                        {
                          Triangle___Triangle(&t3165);
                        }
                        {
                          Triangle___Triangle(&t2147);
                        }
                        {
                          Triangle___Triangle(&t1146);
                        }
                        goto cir_try_dispatch170;
                      }
                    {
                      Triangle___Triangle(&t3165);
                    }
                  cir_try_dispatch170: ;
                  if (__cir_exc_active) {
                  if (__cir_exc_type == (const void*)__cir_eh_type__ZTI27TriangleInequalityException) {
                    int ca_tok181 = 0;
                    void* ca_exn182 = (void*)__cir_exc_ptr;
                    __cir_exc_active = 0;
                      ex1166 = (struct TriangleInequalityException*)__cir_exc_ptr;
                      Point__Point(&x167);
                      if (__cir_exc_active) {
                        {
                          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                        }
                        {
                          Triangle___Triangle(&t2147);
                        }
                        {
                          Triangle___Triangle(&t1146);
                        }
                        goto cir_try_dispatch152;
                      }
                        char* cast183 = (char*)&(_str);
                        int r184 = printf(cast183);
                        if (__cir_exc_active) {
                          {
                            Point___Point(&x167);
                          }
                          {
                            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                          }
                          {
                            Triangle___Triangle(&t2147);
                          }
                          {
                            Triangle___Triangle(&t1146);
                          }
                          goto cir_try_dispatch152;
                        }
                      {
                        Point___Point(&x167);
                      }
                    {
                      if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                    }
                  }
                  else if (__cir_exc_type == (const void*)__cir_eh_type__ZTI20InvalidSideException) {
                    int ca_tok185 = 0;
                    void* ca_exn186 = (void*)__cir_exc_ptr;
                    __cir_exc_active = 0;
                      s168 = (struct InvalidSideException*)__cir_exc_ptr;
                      Point__Point(&x169);
                      if (__cir_exc_active) {
                        {
                          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                        }
                        {
                          Triangle___Triangle(&t2147);
                        }
                        {
                          Triangle___Triangle(&t1146);
                        }
                        goto cir_try_dispatch152;
                      }
                        char* cast187 = (char*)&(_str_1);
                        int r188 = printf(cast187);
                        if (__cir_exc_active) {
                          {
                            Point___Point(&x169);
                          }
                          {
                            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                          }
                          {
                            Triangle___Triangle(&t2147);
                          }
                          {
                            Triangle___Triangle(&t1146);
                          }
                          goto cir_try_dispatch152;
                        }
                      {
                        Point___Point(&x169);
                      }
                    {
                      if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                    }
                  }
                  else {
                    __cir_exc_active = 1;
                    goto cir_try_dispatch152;
                  goto cir_try_dispatch152;
                  }
                  }
            for_step161: ;
              int t189 = i159;
              int u190 = t189 - 1;
              i159 = u190;
            }
        {
          Triangle___Triangle(&t2147);
        }
      {
        Triangle___Triangle(&t1146);
      }
    cir_try_dispatch152: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI27TriangleInequalityException) {
      int ca_tok191 = 0;
      void* ca_exn192 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        ex1148 = (struct TriangleInequalityException*)__cir_exc_ptr;
        Point__Point(&x149);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
          char* cast193 = (char*)&(_str_2);
          int r194 = printf(cast193);
          if (__cir_exc_active) {
            {
              Point___Point(&x149);
            }
            {
              if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
        {
          Point___Point(&x149);
        }
      {
        if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
      }
    }
    else if (__cir_exc_type == (const void*)__cir_eh_type__ZTI20InvalidSideException) {
      int ca_tok195 = 0;
      void* ca_exn196 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        s150 = (struct InvalidSideException*)__cir_exc_ptr;
        Point__Point(&x151);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
          char* cast197 = (char*)&(_str_3);
          int r198 = printf(cast197);
          if (__cir_exc_active) {
            {
              Point___Point(&x151);
            }
            {
              if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
        {
          Point___Point(&x151);
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
  int t199 = __retval144;
  return t199;
}

// function: _ZN5ShapeC2Ev
void Shape__Shape(struct Shape* v200) {
bb201:
  struct Shape* this202;
  this202 = v200;
  struct Shape* t203 = this202;
  return;
}

// function: _ZN20InvalidSideExceptionC2Ev
void InvalidSideException__InvalidSideException(struct InvalidSideException* v204) {
bb205:
  struct InvalidSideException* this207;
  this207 = v204;
  struct InvalidSideException* t208 = this207;
  goto ERROR;
bb206:
ERROR: ;
  return;
}

// function: _ZN27TriangleInequalityExceptionC2Ev
void TriangleInequalityException__TriangleInequalityException(struct TriangleInequalityException* v209) {
bb210:
  struct TriangleInequalityException* this212;
  this212 = v209;
  struct TriangleInequalityException* t213 = this212;
  goto ERROR;
bb211:
ERROR: ;
  return;
}

// function: _ZN5ShapeD2Ev
void Shape___Shape(struct Shape* v214) {
bb215:
  struct Shape* this216;
  this216 = v214;
  struct Shape* t217 = this216;
  return;
}

