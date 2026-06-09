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
static const char __cir_eh_type__ZTI13PolyException[] = "_ZTI13PolyException";
static const char __cir_eh_type__ZTI14PointException[] = "_ZTI14PointException";

// Struct definitions (auto-parsed)
struct Point { int x; int y; };
struct PointException { unsigned char __field0; };
struct PolyException { unsigned char __field0; };
struct Rectangle { int l; int w; };
struct Shape { unsigned char __field0; };
struct Square { int e; };
struct Triangle { int a; int b; int c; };
struct anon_struct_0 { unsigned char* __field0; unsigned char* __field1; };

extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern unsigned char _ZTI13PolyException[];
extern unsigned char _ZTI14PointException[];
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS13PolyException[16] = "13PolyException";
char _str[22] = "Caught a polygon int\n";
char _ZTS14PointException[17] = "14PointException";
char _str_1[26] = "Caught a point exception\n";
char _str_2[26] = "Unknown exception caught\n";
int random(_Bool p0);
extern int __gxx_personality_v0();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
void Rectangle__Rectangle(struct Rectangle* p0, int p1, int p2);
void operator_delete(void* p0, unsigned long p1) { free(p0); }
void Square__Square(struct Square* p0, int p1);
void Point__Point(struct Point* p0, int p1, int p2);
void Triangle__Triangle(struct Triangle* p0, int p1, int p2, int p3);
void Triangle__reshapeT(struct Triangle* p0);
void PolyException__PolyException(struct PolyException* p0);
void Triangle___Triangle(struct Triangle* p0);
extern int printf(char* p0, ...);
void Point__reshapeP(struct Point* p0);
void PointException__PointException(struct PointException* p0);
void Point___Point(struct Point* p0);
void Square__reshapeS(struct Square* p0);
void Square___Square(struct Square* p0);
void Rectangle__reshapeR(struct Rectangle* p0);
void Rectangle___Rectangle(struct Rectangle* p0);
int main();
void Shape__Shape(struct Shape* p0);
void Shape___Shape(struct Shape* p0);

// function: _Z6randomb
int random(_Bool v0) {
bb1:
  _Bool t2;
  int __retval3;
  t2 = v0;
    _Bool t4 = t2;
    if (t4) {
      _Bool c5 = 1;
      int cast6 = (int)c5;
      __retval3 = cast6;
      int t7 = __retval3;
      return t7;
    } else {
      _Bool c8 = 0;
      int cast9 = (int)c8;
      __retval3 = cast9;
      int t10 = __retval3;
      return t10;
    }
  abort();
}

// function: _ZN9RectangleC2Eii
void Rectangle__Rectangle(struct Rectangle* v11, int v12, int v13) {
bb14:
  struct Rectangle* this15;
  int len16;
  int width17;
  this15 = v11;
  len16 = v12;
  width17 = v13;
  struct Rectangle* t18 = this15;
  struct Shape* base19 = (struct Shape*)((char *)t18 + 0);
  Shape__Shape(base19);
  if (__cir_exc_active) {
    return;
  }
    int t20 = len16;
    t18->l = t20;
    int t21 = width17;
    t18->w = t21;
  return;
}

// function: _ZN6SquareC2Ei
void Square__Square(struct Square* v22, int v23) {
bb24:
  struct Square* this25;
  int s26;
  this25 = v22;
  s26 = v23;
  struct Square* t27 = this25;
  struct Shape* base28 = (struct Shape*)((char *)t27 + 0);
  Shape__Shape(base28);
  if (__cir_exc_active) {
    return;
  }
    int t29 = s26;
    t27->e = t29;
  return;
}

// function: _ZN5PointC2Eii
void Point__Point(struct Point* v30, int v31, int v32) {
bb33:
  struct Point* this34;
  int px35;
  int py36;
  this34 = v30;
  px35 = v31;
  py36 = v32;
  struct Point* t37 = this34;
  struct Shape* base38 = (struct Shape*)((char *)t37 + 0);
  Shape__Shape(base38);
  if (__cir_exc_active) {
    return;
  }
    int t39 = px35;
    t37->x = t39;
    int t40 = py36;
    t37->y = t40;
  return;
}

// function: _ZN8TriangleC2Eiii
void Triangle__Triangle(struct Triangle* v41, int v42, int v43, int v44) {
bb45:
  struct Triangle* this46;
  int s147;
  int s248;
  int s349;
  this46 = v41;
  s147 = v42;
  s248 = v43;
  s349 = v44;
  struct Triangle* t50 = this46;
  struct Shape* base51 = (struct Shape*)((char *)t50 + 0);
  Shape__Shape(base51);
  if (__cir_exc_active) {
    return;
  }
    int t52 = s147;
    t50->a = t52;
    int t53 = s248;
    t50->b = t53;
    int t54 = s349;
    t50->c = t54;
  return;
}

// function: _ZN8Triangle8reshapeTEv
void Triangle__reshapeT(struct Triangle* v55) {
bb56:
  struct Triangle* this57;
  this57 = v55;
  struct Triangle* t58 = this57;
  return;
}

// function: _ZN13PolyExceptionC2Ev
void PolyException__PolyException(struct PolyException* v59) {
bb60:
  struct PolyException* this62;
  this62 = v59;
  struct PolyException* t63 = this62;
  goto ERROR;
bb61:
ERROR: ;
  return;
}

// function: _ZN8TriangleD2Ev
void Triangle___Triangle(struct Triangle* v64) {
bb65:
  struct Triangle* this66;
  this66 = v64;
  struct Triangle* t67 = this66;
  {
    struct Shape* base68 = (struct Shape*)((char *)t67 + 0);
    Shape___Shape(base68);
  }
  return;
}

// function: _ZN5Point8reshapePEv
void Point__reshapeP(struct Point* v69) {
bb70:
  struct Point* this71;
  this71 = v69;
  struct Point* t72 = this71;
  return;
}

// function: _ZN14PointExceptionC2Ev
void PointException__PointException(struct PointException* v73) {
bb74:
  struct PointException* this76;
  this76 = v73;
  struct PointException* t77 = this76;
  goto ERROR;
bb75:
ERROR: ;
  return;
}

// function: _ZN5PointD2Ev
void Point___Point(struct Point* v78) {
bb79:
  struct Point* this80;
  this80 = v78;
  struct Point* t81 = this80;
  {
    struct Shape* base82 = (struct Shape*)((char *)t81 + 0);
    Shape___Shape(base82);
  }
  return;
}

// function: _ZN6Square8reshapeSEv
void Square__reshapeS(struct Square* v83) {
bb84:
  struct Square* this85;
  this85 = v83;
  struct Square* t86 = this85;
  return;
}

// function: _ZN6SquareD2Ev
void Square___Square(struct Square* v87) {
bb88:
  struct Square* this89;
  this89 = v87;
  struct Square* t90 = this89;
  {
    struct Shape* base91 = (struct Shape*)((char *)t90 + 0);
    Shape___Shape(base91);
  }
  return;
}

// function: _ZN9Rectangle8reshapeREv
void Rectangle__reshapeR(struct Rectangle* v92) {
bb93:
  struct Rectangle* this94;
  this94 = v92;
  struct Rectangle* t95 = this94;
  return;
}

// function: _ZN9RectangleD2Ev
void Rectangle___Rectangle(struct Rectangle* v96) {
bb97:
  struct Rectangle* this98;
  this98 = v96;
  struct Rectangle* t99 = this98;
  {
    struct Shape* base100 = (struct Shape*)((char *)t99 + 0);
    Shape___Shape(base100);
  }
  return;
}

// function: main
int main() {
bb101:
  int __retval102;
  int i103;
  int j104;
  int k105;
  int c106 = 0;
  __retval102 = c106;
    struct Rectangle* r107;
    struct Rectangle* __new_result108;
    struct PointException* epp109;
      unsigned long c111 = 8;
      void* r112 = operator_new(c111);
      if (__cir_exc_active) {
        goto cir_try_dispatch110;
      }
        struct Rectangle* cast113 = (struct Rectangle*)r112;
        __new_result108 = cast113;
        int c114 = 10;
        int c115 = 3;
        Rectangle__Rectangle(cast113, c114, c115);
        if (__cir_exc_active) {
          {
            operator_delete(r112, c111);
          }
          goto cir_try_dispatch110;
        }
      struct Rectangle* t116 = __new_result108;
      r107 = t116;
        int i117;
        int c118 = 0;
        i117 = c118;
        while (1) {
          int t120 = i117;
          int c121 = 2;
          _Bool c122 = ((t120 < c121)) ? 1 : 0;
          if (!c122) break;
            struct Square* s123;
            struct Square* __new_result124;
            unsigned long c125 = 4;
            void* r126 = operator_new(c125);
            if (__cir_exc_active) {
              goto cir_try_dispatch110;
            }
              struct Square* cast127 = (struct Square*)r126;
              __new_result124 = cast127;
              int c128 = 3;
              Square__Square(cast127, c128);
              if (__cir_exc_active) {
                {
                  operator_delete(r126, c125);
                }
                goto cir_try_dispatch110;
              }
            struct Square* t129 = __new_result124;
            s123 = t129;
              struct PointException* ep130;
                  int j132;
                  int c133 = 0;
                  j132 = c133;
                  while (1) {
                    int t135 = j132;
                    int c136 = 2;
                    _Bool c137 = ((t135 < c136)) ? 1 : 0;
                    if (!c137) break;
                      struct Point* p138;
                      struct Point* __new_result139;
                      unsigned long c140 = 8;
                      void* r141 = operator_new(c140);
                      if (__cir_exc_active) {
                        goto cir_try_dispatch131;
                      }
                        struct Point* cast142 = (struct Point*)r141;
                        __new_result139 = cast142;
                        int c143 = 4;
                        int c144 = 5;
                        Point__Point(cast142, c143, c144);
                        if (__cir_exc_active) {
                          {
                            operator_delete(r141, c140);
                          }
                          goto cir_try_dispatch131;
                        }
                      struct Point* t145 = __new_result139;
                      p138 = t145;
                        struct PolyException* ep146;
                            int c148 = 0;
                            k105 = c148;
                            while (1) {
                              int t150 = k105;
                              int c151 = 2;
                              _Bool c152 = ((t150 < c151)) ? 1 : 0;
                              if (!c152) break;
                                struct Triangle* t153;
                                struct Triangle* __new_result154;
                                unsigned long c155 = 12;
                                void* r156 = operator_new(c155);
                                if (__cir_exc_active) {
                                  goto cir_try_dispatch147;
                                }
                                  struct Triangle* cast157 = (struct Triangle*)r156;
                                  __new_result154 = cast157;
                                  int c158 = 4;
                                  int c159 = 5;
                                  int c160 = 6;
                                  Triangle__Triangle(cast157, c158, c159, c160);
                                  if (__cir_exc_active) {
                                    {
                                      operator_delete(r156, c155);
                                    }
                                    goto cir_try_dispatch147;
                                  }
                                struct Triangle* t161 = __new_result154;
                                t153 = t161;
                                struct Triangle* t162 = t153;
                                Triangle__reshapeT(t162);
                                if (__cir_exc_active) {
                                  goto cir_try_dispatch147;
                                }
                                  struct Triangle* t163 = t153;
                                  int t164 = t163->a;
                                  struct Triangle* t165 = t153;
                                  int t166 = t165->b;
                                  _Bool c167 = ((t164 < t166)) ? 1 : 0;
                                  if (c167) {
                                    static char exc_buf168[1] = {0};
                                    struct PolyException* exc169 = (struct PolyException*)exc_buf168;
                                    PolyException__PolyException(exc169);
                                    if (__cir_exc_active) {
                                      goto cir_try_dispatch147;
                                    }
                                    __cir_exc_ptr = (void*)exc169;
                                    __cir_exc_dtor = (void*)0;
                                    __cir_exc_type = (const void*)__cir_eh_type__ZTI13PolyException;
                                    __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI13PolyException;
                                    __cir_exc_active = 1;
                                    goto cir_try_dispatch147;
                                    __builtin_unreachable();
                                  }
                                struct Triangle* t170 = t153;
                                struct Triangle* c171 = ((void*)0);
                                _Bool c172 = ((t170 != c171)) ? 1 : 0;
                                if (c172) {
                                    Triangle___Triangle(t170);
                                  {
                                    void* cast173 = (void*)t170;
                                    unsigned long c174 = 12;
                                    operator_delete(cast173, c174);
                                  }
                                }
                            for_step149: ;
                              int t175 = k105;
                              int u176 = t175 + 1;
                              k105 = u176;
                            }
                        cir_try_dispatch147: ;
                        if (__cir_exc_active) {
                        if (__cir_exc_type == (const void*)__cir_eh_type__ZTI13PolyException) {
                          int ca_tok177 = 0;
                          void* ca_exn178 = (void*)__cir_exc_ptr;
                          __cir_exc_active = 0;
                            ep146 = (struct PolyException*)__cir_exc_ptr;
                            char* cast179 = (char*)&(_str);
                            int r180 = printf(cast179);
                            if (__cir_exc_active) {
                              {
                                if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                              }
                              goto cir_try_dispatch131;
                            }
                          {
                            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                          }
                        }
                        else {
                          __cir_exc_active = 1;
                          goto cir_try_dispatch131;
                        goto cir_try_dispatch131;
                        }
                        }
                      struct Point* t181 = p138;
                      Point__reshapeP(t181);
                      if (__cir_exc_active) {
                        goto cir_try_dispatch131;
                      }
                        struct Point* t182 = p138;
                        int t183 = t182->x;
                        struct Point* t184 = p138;
                        int t185 = t184->y;
                        _Bool c186 = ((t183 < t185)) ? 1 : 0;
                        if (c186) {
                          static char exc_buf187[1] = {0};
                          struct PointException* exc188 = (struct PointException*)exc_buf187;
                          PointException__PointException(exc188);
                          if (__cir_exc_active) {
                            goto cir_try_dispatch131;
                          }
                          __cir_exc_ptr = (void*)exc188;
                          __cir_exc_dtor = (void*)0;
                          __cir_exc_type = (const void*)__cir_eh_type__ZTI14PointException;
                          __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI14PointException;
                          __cir_exc_active = 1;
                          goto cir_try_dispatch131;
                          __builtin_unreachable();
                        }
                      struct Point* t189 = p138;
                      struct Point* c190 = ((void*)0);
                      _Bool c191 = ((t189 != c190)) ? 1 : 0;
                      if (c191) {
                          Point___Point(t189);
                        {
                          void* cast192 = (void*)t189;
                          unsigned long c193 = 8;
                          operator_delete(cast192, c193);
                        }
                      }
                  for_step134: ;
                    int t194 = j132;
                    int u195 = t194 + 1;
                    j132 = u195;
                  }
              cir_try_dispatch131: ;
              if (__cir_exc_active) {
              if (__cir_exc_type == (const void*)__cir_eh_type__ZTI14PointException) {
                int ca_tok196 = 0;
                void* ca_exn197 = (void*)__cir_exc_ptr;
                __cir_exc_active = 0;
                  ep130 = (struct PointException*)__cir_exc_ptr;
                  char* cast198 = (char*)&(_str_1);
                  int r199 = printf(cast198);
                  if (__cir_exc_active) {
                    {
                      if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                    }
                    goto cir_try_dispatch110;
                  }
                {
                  if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                }
              }
              else {
                __cir_exc_active = 1;
                goto cir_try_dispatch110;
              goto cir_try_dispatch110;
              }
              }
            struct Square* t200 = s123;
            Square__reshapeS(t200);
            if (__cir_exc_active) {
              goto cir_try_dispatch110;
            }
            struct Square* t201 = s123;
            struct Square* c202 = ((void*)0);
            _Bool c203 = ((t201 != c202)) ? 1 : 0;
            if (c203) {
                Square___Square(t201);
              {
                void* cast204 = (void*)t201;
                unsigned long c205 = 4;
                operator_delete(cast204, c205);
              }
            }
        for_step119: ;
          int t206 = i117;
          int u207 = t206 + 1;
          i117 = u207;
        }
      struct Rectangle* t208 = r107;
      Rectangle__reshapeR(t208);
      if (__cir_exc_active) {
        goto cir_try_dispatch110;
      }
      struct Rectangle* t209 = r107;
      struct Rectangle* c210 = ((void*)0);
      _Bool c211 = ((t209 != c210)) ? 1 : 0;
      if (c211) {
          Rectangle___Rectangle(t209);
        {
          void* cast212 = (void*)t209;
          unsigned long c213 = 8;
          operator_delete(cast212, c213);
        }
      }
    cir_try_dispatch110: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI14PointException) {
      int ca_tok214 = 0;
      void* ca_exn215 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        epp109 = (struct PointException*)__cir_exc_ptr;
        char* cast216 = (char*)&(_str_1);
        int r217 = printf(cast216);
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
      int ca_tok218 = 0;
      void* ca_exn219 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        char* cast220 = (char*)&(_str_2);
        int r221 = printf(cast220);
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
    }
  int c222 = 0;
  __retval102 = c222;
  int t223 = __retval102;
  return t223;
}

// function: _ZN5ShapeC2Ev
void Shape__Shape(struct Shape* v224) {
bb225:
  struct Shape* this226;
  this226 = v224;
  struct Shape* t227 = this226;
  return;
}

// function: _ZN5ShapeD2Ev
void Shape___Shape(struct Shape* v228) {
bb229:
  struct Shape* this230;
  this230 = v228;
  struct Shape* t231 = this230;
  return;
}

