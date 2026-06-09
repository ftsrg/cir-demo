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
char _str_3[7] = "Exit!\n";
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

// function: _ZN9RectangleC2Eii
void Rectangle__Rectangle(struct Rectangle* v0, int v1, int v2) {
bb3:
  struct Rectangle* this4;
  int len5;
  int width6;
  this4 = v0;
  len5 = v1;
  width6 = v2;
  struct Rectangle* t7 = this4;
  struct Shape* base8 = (struct Shape*)((char *)t7 + 0);
  Shape__Shape(base8);
  if (__cir_exc_active) {
    return;
  }
    int t9 = len5;
    t7->l = t9;
    int t10 = width6;
    t7->w = t10;
  return;
}

// function: _ZN6SquareC2Ei
void Square__Square(struct Square* v11, int v12) {
bb13:
  struct Square* this14;
  int s15;
  this14 = v11;
  s15 = v12;
  struct Square* t16 = this14;
  struct Shape* base17 = (struct Shape*)((char *)t16 + 0);
  Shape__Shape(base17);
  if (__cir_exc_active) {
    return;
  }
    int t18 = s15;
    t16->e = t18;
  return;
}

// function: _ZN5PointC2Eii
void Point__Point(struct Point* v19, int v20, int v21) {
bb22:
  struct Point* this23;
  int px24;
  int py25;
  this23 = v19;
  px24 = v20;
  py25 = v21;
  struct Point* t26 = this23;
  struct Shape* base27 = (struct Shape*)((char *)t26 + 0);
  Shape__Shape(base27);
  if (__cir_exc_active) {
    return;
  }
    int t28 = px24;
    t26->x = t28;
    int t29 = py25;
    t26->y = t29;
  return;
}

// function: _ZN8TriangleC2Eiii
void Triangle__Triangle(struct Triangle* v30, int v31, int v32, int v33) {
bb34:
  struct Triangle* this35;
  int s136;
  int s237;
  int s338;
  this35 = v30;
  s136 = v31;
  s237 = v32;
  s338 = v33;
  struct Triangle* t39 = this35;
  struct Shape* base40 = (struct Shape*)((char *)t39 + 0);
  Shape__Shape(base40);
  if (__cir_exc_active) {
    return;
  }
    int t41 = s136;
    t39->a = t41;
    int t42 = s237;
    t39->b = t42;
    int t43 = s338;
    t39->c = t43;
  return;
}

// function: _ZN8Triangle8reshapeTEv
void Triangle__reshapeT(struct Triangle* v44) {
bb45:
  struct Triangle* this46;
  this46 = v44;
  struct Triangle* t47 = this46;
  return;
}

// function: _ZN13PolyExceptionC2Ev
void PolyException__PolyException(struct PolyException* v48) {
bb49:
  struct PolyException* this51;
  this51 = v48;
  struct PolyException* t52 = this51;
  goto ERROR;
bb50:
ERROR: ;
  return;
}

// function: _ZN8TriangleD2Ev
void Triangle___Triangle(struct Triangle* v53) {
bb54:
  struct Triangle* this55;
  this55 = v53;
  struct Triangle* t56 = this55;
  {
    struct Shape* base57 = (struct Shape*)((char *)t56 + 0);
    Shape___Shape(base57);
  }
  return;
}

// function: _ZN5Point8reshapePEv
void Point__reshapeP(struct Point* v58) {
bb59:
  struct Point* this60;
  this60 = v58;
  struct Point* t61 = this60;
  return;
}

// function: _ZN14PointExceptionC2Ev
void PointException__PointException(struct PointException* v62) {
bb63:
  struct PointException* this65;
  this65 = v62;
  struct PointException* t66 = this65;
  goto ERROR;
bb64:
ERROR: ;
  return;
}

// function: _ZN5PointD2Ev
void Point___Point(struct Point* v67) {
bb68:
  struct Point* this69;
  this69 = v67;
  struct Point* t70 = this69;
  {
    struct Shape* base71 = (struct Shape*)((char *)t70 + 0);
    Shape___Shape(base71);
  }
  return;
}

// function: _ZN6Square8reshapeSEv
void Square__reshapeS(struct Square* v72) {
bb73:
  struct Square* this74;
  this74 = v72;
  struct Square* t75 = this74;
  return;
}

// function: _ZN6SquareD2Ev
void Square___Square(struct Square* v76) {
bb77:
  struct Square* this78;
  this78 = v76;
  struct Square* t79 = this78;
  {
    struct Shape* base80 = (struct Shape*)((char *)t79 + 0);
    Shape___Shape(base80);
  }
  return;
}

// function: _ZN9Rectangle8reshapeREv
void Rectangle__reshapeR(struct Rectangle* v81) {
bb82:
  struct Rectangle* this83;
  this83 = v81;
  struct Rectangle* t84 = this83;
  return;
}

// function: _ZN9RectangleD2Ev
void Rectangle___Rectangle(struct Rectangle* v85) {
bb86:
  struct Rectangle* this87;
  this87 = v85;
  struct Rectangle* t88 = this87;
  {
    struct Shape* base89 = (struct Shape*)((char *)t88 + 0);
    Shape___Shape(base89);
  }
  return;
}

// function: main
int main() {
bb90:
  int __retval91;
  int i92;
  int j93;
  int k94;
  int c95 = 0;
  __retval91 = c95;
    struct Rectangle* r96;
    struct Rectangle* __new_result97;
    struct PointException* epp98;
      unsigned long c100 = 8;
      void* r101 = operator_new(c100);
      if (__cir_exc_active) {
        goto cir_try_dispatch99;
      }
        struct Rectangle* cast102 = (struct Rectangle*)r101;
        __new_result97 = cast102;
        int c103 = 10;
        int c104 = 3;
        Rectangle__Rectangle(cast102, c103, c104);
        if (__cir_exc_active) {
          {
            operator_delete(r101, c100);
          }
          goto cir_try_dispatch99;
        }
      struct Rectangle* t105 = __new_result97;
      r96 = t105;
        int i106;
        int c107 = 0;
        i106 = c107;
        while (1) {
          int t109 = i106;
          int c110 = 2;
          _Bool c111 = ((t109 < c110)) ? 1 : 0;
          if (!c111) break;
            struct Square* s112;
            struct Square* __new_result113;
            unsigned long c114 = 4;
            void* r115 = operator_new(c114);
            if (__cir_exc_active) {
              goto cir_try_dispatch99;
            }
              struct Square* cast116 = (struct Square*)r115;
              __new_result113 = cast116;
              int c117 = 3;
              Square__Square(cast116, c117);
              if (__cir_exc_active) {
                {
                  operator_delete(r115, c114);
                }
                goto cir_try_dispatch99;
              }
            struct Square* t118 = __new_result113;
            s112 = t118;
              struct PointException* ep119;
                  int j121;
                  int c122 = 0;
                  j121 = c122;
                  while (1) {
                    int t124 = j121;
                    int c125 = 2;
                    _Bool c126 = ((t124 < c125)) ? 1 : 0;
                    if (!c126) break;
                      struct Point* p127;
                      struct Point* __new_result128;
                      unsigned long c129 = 8;
                      void* r130 = operator_new(c129);
                      if (__cir_exc_active) {
                        goto cir_try_dispatch120;
                      }
                        struct Point* cast131 = (struct Point*)r130;
                        __new_result128 = cast131;
                        int c132 = 4;
                        int c133 = 5;
                        Point__Point(cast131, c132, c133);
                        if (__cir_exc_active) {
                          {
                            operator_delete(r130, c129);
                          }
                          goto cir_try_dispatch120;
                        }
                      struct Point* t134 = __new_result128;
                      p127 = t134;
                        struct PolyException* ep135;
                            int c137 = 0;
                            k94 = c137;
                            while (1) {
                              int t139 = k94;
                              int c140 = 2;
                              _Bool c141 = ((t139 < c140)) ? 1 : 0;
                              if (!c141) break;
                                struct Triangle* t142;
                                struct Triangle* __new_result143;
                                unsigned long c144 = 12;
                                void* r145 = operator_new(c144);
                                if (__cir_exc_active) {
                                  goto cir_try_dispatch136;
                                }
                                  struct Triangle* cast146 = (struct Triangle*)r145;
                                  __new_result143 = cast146;
                                  int t147 = i106;
                                  int t148 = j121;
                                  int t149 = k94;
                                  Triangle__Triangle(cast146, t147, t148, t149);
                                  if (__cir_exc_active) {
                                    {
                                      operator_delete(r145, c144);
                                    }
                                    goto cir_try_dispatch136;
                                  }
                                struct Triangle* t150 = __new_result143;
                                t142 = t150;
                                struct Triangle* t151 = t142;
                                Triangle__reshapeT(t151);
                                if (__cir_exc_active) {
                                  goto cir_try_dispatch136;
                                }
                                  struct Triangle* t152 = t142;
                                  int t153 = t152->a;
                                  struct Triangle* t154 = t142;
                                  int t155 = t154->b;
                                  _Bool c156 = ((t153 < t155)) ? 1 : 0;
                                  if (c156) {
                                    static char exc_buf157[1] = {0};
                                    struct PolyException* exc158 = (struct PolyException*)exc_buf157;
                                    PolyException__PolyException(exc158);
                                    if (__cir_exc_active) {
                                      goto cir_try_dispatch136;
                                    }
                                    __cir_exc_ptr = (void*)exc158;
                                    __cir_exc_dtor = (void*)0;
                                    __cir_exc_type = (const void*)__cir_eh_type__ZTI13PolyException;
                                    __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI13PolyException;
                                    __cir_exc_active = 1;
                                    goto cir_try_dispatch136;
                                    __builtin_unreachable();
                                  } else {
                                      struct Triangle* t159 = t142;
                                      int t160 = t159->a;
                                      struct Triangle* t161 = t142;
                                      int t162 = t161->b;
                                      _Bool c163 = ((t160 == t162)) ? 1 : 0;
                                      if (c163) {
                                        break;
                                      }
                                  }
                                struct Triangle* t164 = t142;
                                struct Triangle* c165 = ((void*)0);
                                _Bool c166 = ((t164 != c165)) ? 1 : 0;
                                if (c166) {
                                    Triangle___Triangle(t164);
                                  {
                                    void* cast167 = (void*)t164;
                                    unsigned long c168 = 12;
                                    operator_delete(cast167, c168);
                                  }
                                }
                            for_step138: ;
                              int t169 = k94;
                              int u170 = t169 + 1;
                              k94 = u170;
                            }
                        cir_try_dispatch136: ;
                        if (__cir_exc_active) {
                        if (__cir_exc_type == (const void*)__cir_eh_type__ZTI13PolyException) {
                          int ca_tok171 = 0;
                          void* ca_exn172 = (void*)__cir_exc_ptr;
                          __cir_exc_active = 0;
                            ep135 = (struct PolyException*)__cir_exc_ptr;
                            char* cast173 = (char*)&(_str);
                            int r174 = printf(cast173);
                            if (__cir_exc_active) {
                              {
                                if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                              }
                              goto cir_try_dispatch120;
                            }
                          {
                            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                          }
                        }
                        else {
                          __cir_exc_active = 1;
                          goto cir_try_dispatch120;
                        goto cir_try_dispatch120;
                        }
                        }
                      struct Point* t175 = p127;
                      Point__reshapeP(t175);
                      if (__cir_exc_active) {
                        goto cir_try_dispatch120;
                      }
                        struct Point* t176 = p127;
                        int t177 = t176->x;
                        struct Point* t178 = p127;
                        int t179 = t178->y;
                        _Bool c180 = ((t177 < t179)) ? 1 : 0;
                        if (c180) {
                          static char exc_buf181[1] = {0};
                          struct PointException* exc182 = (struct PointException*)exc_buf181;
                          PointException__PointException(exc182);
                          if (__cir_exc_active) {
                            goto cir_try_dispatch120;
                          }
                          __cir_exc_ptr = (void*)exc182;
                          __cir_exc_dtor = (void*)0;
                          __cir_exc_type = (const void*)__cir_eh_type__ZTI14PointException;
                          __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI14PointException;
                          __cir_exc_active = 1;
                          goto cir_try_dispatch120;
                          __builtin_unreachable();
                        } else {
                            struct Point* t183 = p127;
                            int t184 = t183->x;
                            struct Point* t185 = p127;
                            int t186 = t185->y;
                            _Bool c187 = ((t184 == t186)) ? 1 : 0;
                            if (c187) {
                              goto for_step123;
                            }
                        }
                      struct Point* t188 = p127;
                      struct Point* c189 = ((void*)0);
                      _Bool c190 = ((t188 != c189)) ? 1 : 0;
                      if (c190) {
                          Point___Point(t188);
                        {
                          void* cast191 = (void*)t188;
                          unsigned long c192 = 8;
                          operator_delete(cast191, c192);
                        }
                      }
                  for_step123: ;
                    int t193 = j121;
                    int u194 = t193 + 1;
                    j121 = u194;
                  }
              cir_try_dispatch120: ;
              if (__cir_exc_active) {
              if (__cir_exc_type == (const void*)__cir_eh_type__ZTI14PointException) {
                int ca_tok195 = 0;
                void* ca_exn196 = (void*)__cir_exc_ptr;
                __cir_exc_active = 0;
                  ep119 = (struct PointException*)__cir_exc_ptr;
                  char* cast197 = (char*)&(_str_1);
                  int r198 = printf(cast197);
                  if (__cir_exc_active) {
                    {
                      if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                    }
                    goto cir_try_dispatch99;
                  }
                {
                  if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                }
              }
              else {
                __cir_exc_active = 1;
                goto cir_try_dispatch99;
              goto cir_try_dispatch99;
              }
              }
            struct Square* t199 = s112;
            Square__reshapeS(t199);
            if (__cir_exc_active) {
              goto cir_try_dispatch99;
            }
            struct Square* t200 = s112;
            struct Square* c201 = ((void*)0);
            _Bool c202 = ((t200 != c201)) ? 1 : 0;
            if (c202) {
                Square___Square(t200);
              {
                void* cast203 = (void*)t200;
                unsigned long c204 = 4;
                operator_delete(cast203, c204);
              }
            }
        for_step108: ;
          int t205 = i106;
          int u206 = t205 + 1;
          i106 = u206;
        }
      struct Rectangle* t207 = r96;
      Rectangle__reshapeR(t207);
      if (__cir_exc_active) {
        goto cir_try_dispatch99;
      }
      struct Rectangle* t208 = r96;
      struct Rectangle* c209 = ((void*)0);
      _Bool c210 = ((t208 != c209)) ? 1 : 0;
      if (c210) {
          Rectangle___Rectangle(t208);
        {
          void* cast211 = (void*)t208;
          unsigned long c212 = 8;
          operator_delete(cast211, c212);
        }
      }
    cir_try_dispatch99: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI14PointException) {
      int ca_tok213 = 0;
      void* ca_exn214 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        epp98 = (struct PointException*)__cir_exc_ptr;
        char* cast215 = (char*)&(_str_1);
        int r216 = printf(cast215);
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
      int ca_tok217 = 0;
      void* ca_exn218 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        char* cast219 = (char*)&(_str_2);
        int r220 = printf(cast219);
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
  char* cast221 = (char*)&(_str_3);
  int r222 = printf(cast221);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  int c223 = 0;
  __retval91 = c223;
  int t224 = __retval91;
  return t224;
}

// function: _ZN5ShapeC2Ev
void Shape__Shape(struct Shape* v225) {
bb226:
  struct Shape* this227;
  this227 = v225;
  struct Shape* t228 = this227;
  return;
}

// function: _ZN5ShapeD2Ev
void Shape___Shape(struct Shape* v229) {
bb230:
  struct Shape* this231;
  this231 = v229;
  struct Shape* t232 = this231;
  return;
}

