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
char _str[43] = "Caught a polygon exception ... rethrowing\n";
char _ZTS14PointException[17] = "14PointException";
char _str_1[41] = "Caught a point exception ... rethrowing\n";
char _str_2[26] = "Caught a point exception\n";
char _str_3[22] = "Caught a polygon int\n";
char _str_4[26] = "Unknown exception caught\n";
char _str_5[7] = "Exit!\n";
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
    struct PolyException* ep99;
      unsigned long c101 = 8;
      void* r102 = operator_new(c101);
      if (__cir_exc_active) {
        goto cir_try_dispatch100;
      }
        struct Rectangle* cast103 = (struct Rectangle*)r102;
        __new_result97 = cast103;
        int c104 = 10;
        int c105 = 3;
        Rectangle__Rectangle(cast103, c104, c105);
        if (__cir_exc_active) {
          {
            operator_delete(r102, c101);
          }
          goto cir_try_dispatch100;
        }
      struct Rectangle* t106 = __new_result97;
      r96 = t106;
        int i107;
        int c108 = 0;
        i107 = c108;
        while (1) {
          int t110 = i107;
          int c111 = 2;
          _Bool c112 = ((t110 < c111)) ? 1 : 0;
          if (!c112) break;
            struct Square* s113;
            struct Square* __new_result114;
            unsigned long c115 = 4;
            void* r116 = operator_new(c115);
            if (__cir_exc_active) {
              goto cir_try_dispatch100;
            }
              struct Square* cast117 = (struct Square*)r116;
              __new_result114 = cast117;
              int c118 = 3;
              Square__Square(cast117, c118);
              if (__cir_exc_active) {
                {
                  operator_delete(r116, c115);
                }
                goto cir_try_dispatch100;
              }
            struct Square* t119 = __new_result114;
            s113 = t119;
              struct PointException* ep120;
                  int j122;
                  int c123 = 0;
                  j122 = c123;
                  while (1) {
                    int t125 = j122;
                    int c126 = 2;
                    _Bool c127 = ((t125 < c126)) ? 1 : 0;
                    if (!c127) break;
                      struct Point* p128;
                      struct Point* __new_result129;
                      unsigned long c130 = 8;
                      void* r131 = operator_new(c130);
                      if (__cir_exc_active) {
                        goto cir_try_dispatch121;
                      }
                        struct Point* cast132 = (struct Point*)r131;
                        __new_result129 = cast132;
                        int c133 = 4;
                        int c134 = 5;
                        Point__Point(cast132, c133, c134);
                        if (__cir_exc_active) {
                          {
                            operator_delete(r131, c130);
                          }
                          goto cir_try_dispatch121;
                        }
                      struct Point* t135 = __new_result129;
                      p128 = t135;
                        struct PolyException* ep136;
                            int c138 = 0;
                            k94 = c138;
                            while (1) {
                              int t140 = k94;
                              int c141 = 2;
                              _Bool c142 = ((t140 < c141)) ? 1 : 0;
                              if (!c142) break;
                                struct Triangle* t143;
                                struct Triangle* __new_result144;
                                unsigned long c145 = 12;
                                void* r146 = operator_new(c145);
                                if (__cir_exc_active) {
                                  goto cir_try_dispatch137;
                                }
                                  struct Triangle* cast147 = (struct Triangle*)r146;
                                  __new_result144 = cast147;
                                  int t148 = i107;
                                  int t149 = j122;
                                  int t150 = k94;
                                  Triangle__Triangle(cast147, t148, t149, t150);
                                  if (__cir_exc_active) {
                                    {
                                      operator_delete(r146, c145);
                                    }
                                    goto cir_try_dispatch137;
                                  }
                                struct Triangle* t151 = __new_result144;
                                t143 = t151;
                                struct Triangle* t152 = t143;
                                Triangle__reshapeT(t152);
                                if (__cir_exc_active) {
                                  goto cir_try_dispatch137;
                                }
                                  struct Triangle* t153 = t143;
                                  int t154 = t153->a;
                                  struct Triangle* t155 = t143;
                                  int t156 = t155->b;
                                  _Bool c157 = ((t154 < t156)) ? 1 : 0;
                                  if (c157) {
                                    static char exc_buf158[1] = {0};
                                    struct PolyException* exc159 = (struct PolyException*)exc_buf158;
                                    PolyException__PolyException(exc159);
                                    if (__cir_exc_active) {
                                      goto cir_try_dispatch137;
                                    }
                                    __cir_exc_ptr = (void*)exc159;
                                    __cir_exc_dtor = (void*)0;
                                    __cir_exc_type = (const void*)__cir_eh_type__ZTI13PolyException;
                                    __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI13PolyException;
                                    __cir_exc_active = 1;
                                    goto cir_try_dispatch137;
                                    __builtin_unreachable();
                                  }
                                struct Triangle* t160 = t143;
                                struct Triangle* c161 = ((void*)0);
                                _Bool c162 = ((t160 != c161)) ? 1 : 0;
                                if (c162) {
                                    Triangle___Triangle(t160);
                                  {
                                    void* cast163 = (void*)t160;
                                    unsigned long c164 = 12;
                                    operator_delete(cast163, c164);
                                  }
                                }
                            for_step139: ;
                              int t165 = k94;
                              int u166 = t165 + 1;
                              k94 = u166;
                            }
                        cir_try_dispatch137: ;
                        if (__cir_exc_active) {
                        if (__cir_exc_type == (const void*)__cir_eh_type__ZTI13PolyException) {
                          int ca_tok167 = 0;
                          void* ca_exn168 = (void*)__cir_exc_ptr;
                          __cir_exc_active = 0;
                            ep136 = (struct PolyException*)__cir_exc_ptr;
                            char* cast169 = (char*)&(_str);
                            int r170 = printf(cast169);
                            if (__cir_exc_active) {
                              {
                                if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                              }
                              goto cir_try_dispatch121;
                            }
                            __cir_exc_active = 1;
                            {
                              if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                            }
                            goto cir_try_dispatch121;
                            __builtin_unreachable();
                        }
                        else {
                          __cir_exc_active = 1;
                          goto cir_try_dispatch121;
                        goto cir_try_dispatch121;
                        }
                        }
                      struct Point* t171 = p128;
                      Point__reshapeP(t171);
                      if (__cir_exc_active) {
                        goto cir_try_dispatch121;
                      }
                        struct Point* t172 = p128;
                        int t173 = t172->x;
                        struct Point* t174 = p128;
                        int t175 = t174->y;
                        _Bool c176 = ((t173 < t175)) ? 1 : 0;
                        if (c176) {
                          static char exc_buf177[1] = {0};
                          struct PointException* exc178 = (struct PointException*)exc_buf177;
                          PointException__PointException(exc178);
                          if (__cir_exc_active) {
                            goto cir_try_dispatch121;
                          }
                          __cir_exc_ptr = (void*)exc178;
                          __cir_exc_dtor = (void*)0;
                          __cir_exc_type = (const void*)__cir_eh_type__ZTI14PointException;
                          __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI14PointException;
                          __cir_exc_active = 1;
                          goto cir_try_dispatch121;
                          __builtin_unreachable();
                        } else {
                            struct Point* t179 = p128;
                            int t180 = t179->x;
                            struct Point* t181 = p128;
                            int t182 = t181->y;
                            _Bool c183 = ((t180 == t182)) ? 1 : 0;
                            if (c183) {
                              goto for_step124;
                            }
                        }
                      struct Point* t184 = p128;
                      struct Point* c185 = ((void*)0);
                      _Bool c186 = ((t184 != c185)) ? 1 : 0;
                      if (c186) {
                          Point___Point(t184);
                        {
                          void* cast187 = (void*)t184;
                          unsigned long c188 = 8;
                          operator_delete(cast187, c188);
                        }
                      }
                  for_step124: ;
                    int t189 = j122;
                    int u190 = t189 + 1;
                    j122 = u190;
                  }
              cir_try_dispatch121: ;
              if (__cir_exc_active) {
              if (__cir_exc_type == (const void*)__cir_eh_type__ZTI14PointException) {
                int ca_tok191 = 0;
                void* ca_exn192 = (void*)__cir_exc_ptr;
                __cir_exc_active = 0;
                  ep120 = (struct PointException*)__cir_exc_ptr;
                  char* cast193 = (char*)&(_str_1);
                  int r194 = printf(cast193);
                  if (__cir_exc_active) {
                    {
                      if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                    }
                    goto cir_try_dispatch100;
                  }
                  __cir_exc_active = 1;
                  {
                    if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                  }
                  goto cir_try_dispatch100;
                  __builtin_unreachable();
              }
              else {
                __cir_exc_active = 1;
                goto cir_try_dispatch100;
              goto cir_try_dispatch100;
              }
              }
            struct Square* t195 = s113;
            Square__reshapeS(t195);
            if (__cir_exc_active) {
              goto cir_try_dispatch100;
            }
            struct Square* t196 = s113;
            struct Square* c197 = ((void*)0);
            _Bool c198 = ((t196 != c197)) ? 1 : 0;
            if (c198) {
                Square___Square(t196);
              {
                void* cast199 = (void*)t196;
                unsigned long c200 = 4;
                operator_delete(cast199, c200);
              }
            }
        for_step109: ;
          int t201 = i107;
          int u202 = t201 + 1;
          i107 = u202;
        }
      struct Rectangle* t203 = r96;
      Rectangle__reshapeR(t203);
      if (__cir_exc_active) {
        goto cir_try_dispatch100;
      }
      struct Rectangle* t204 = r96;
      struct Rectangle* c205 = ((void*)0);
      _Bool c206 = ((t204 != c205)) ? 1 : 0;
      if (c206) {
          Rectangle___Rectangle(t204);
        {
          void* cast207 = (void*)t204;
          unsigned long c208 = 8;
          operator_delete(cast207, c208);
        }
      }
    cir_try_dispatch100: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI14PointException) {
      int ca_tok209 = 0;
      void* ca_exn210 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        epp98 = (struct PointException*)__cir_exc_ptr;
        char* cast211 = (char*)&(_str_2);
        int r212 = printf(cast211);
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
    else if (__cir_exc_type == (const void*)__cir_eh_type__ZTI13PolyException) {
      int ca_tok213 = 0;
      void* ca_exn214 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        ep99 = (struct PolyException*)__cir_exc_ptr;
        char* cast215 = (char*)&(_str_3);
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
        char* cast219 = (char*)&(_str_4);
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
  char* cast221 = (char*)&(_str_5);
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

