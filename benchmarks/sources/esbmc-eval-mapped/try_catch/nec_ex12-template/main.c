extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;
// Per-RTTI address tags: each thrown/caught type symbol gets a
// distinct storage location so catch dispatch is a pointer compare.
static const char __cir_eh_type__ZTI9ExceptionI5PointE[] = "_ZTI9ExceptionI5PointE";
static const char __cir_eh_type__ZTI9ExceptionI6SquareE[] = "_ZTI9ExceptionI6SquareE";
static const char __cir_eh_type__ZTI9ExceptionI8TriangleE[] = "_ZTI9ExceptionI8TriangleE";
static const char __cir_eh_type__ZTI9ExceptionI9RectangleE[] = "_ZTI9ExceptionI9RectangleE";

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) void __VERIFIER_virtual_call_void(void* __obj, int __slot) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  ((void(*)(void*))__fn)(__obj);
}

// Struct definitions (auto-parsed)
struct Exception_Point_ { unsigned char __field0; };
struct Exception_Rectangle_ { unsigned char __field0; };
struct Exception_Square_ { unsigned char __field0; };
struct Exception_Triangle_ { unsigned char __field0; };
struct Point { int x; int y; };
struct Rectangle { int l; int w; };
struct Shape { unsigned char __field0; };
struct Square { void* __field0; int e; unsigned char __field2[4]; } __attribute__((packed));
struct Triangle { int a; int b; int c; };
struct anon_struct_0 { unsigned char* __field0; unsigned char* __field1; };
struct anon_struct_1 { unsigned char* __field0[3]; };
struct anon_struct_2 { unsigned char* __field0; unsigned char* __field1; unsigned char* __field2; };

extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
extern unsigned char _ZTI9ExceptionI5PointE[];
extern unsigned char _ZTI9ExceptionI8TriangleE[];
extern unsigned char _ZTI9ExceptionI9RectangleE[];
extern unsigned char _ZTI5Shape[];
extern unsigned char _ZTI6Square[];
extern unsigned char _ZTI9ExceptionI6SquareE[];
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS9ExceptionI5PointE[19] = "9ExceptionI5PointE";
char _ZTS9ExceptionI8TriangleE[22] = "9ExceptionI8TriangleE";
char _ZTS9ExceptionI9RectangleE[23] = "9ExceptionI9RectangleE";
char _str[16] = "Caught a Point\n";
char _str_1[19] = "Caught a Triangle\n";
char _str_2[20] = "Caught a rectangle\n";
extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
char _ZTS6Square[8] = "6Square";
char _ZTS5Shape[7] = "5Shape";
char _ZTS9ExceptionI6SquareE[20] = "9ExceptionI6SquareE";
extern long random();
int hrandom();
extern int __gxx_personality_v0();
void Point__Point(struct Point* p0, int p1, int p2);
void Triangle__Triangle(struct Triangle* p0, int p1, int p2, int p3);
void Rectangle__Rectangle(struct Rectangle* p0, int p1, int p2);
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
void Square__Square(struct Square* p0, int p1);
void operator_delete(void* p0, unsigned long p1) { free(p0); }
void Exception_Point___Exception(struct Exception_Point_* p0);
void Point__reshape(struct Point* p0);
void Exception_Triangle___Exception(struct Exception_Triangle_* p0);
void Triangle__reshape(struct Triangle* p0);
void Exception_Rectangle___Exception(struct Exception_Rectangle_* p0);
void Rectangle__reshape(struct Rectangle* p0);
void Square___Square(struct Square* p0);
void Rectangle___Rectangle(struct Rectangle* p0);
void Triangle___Triangle(struct Triangle* p0);
void Point___Point(struct Point* p0);
extern int printf(char* p0, ...);
int main();
void Shape__Shape(struct Shape* p0);
void Shape___Shape(struct Shape* p0);
void Exception_Square___Exception(struct Exception_Square_* p0);
void Square__reshape(struct Square* p0);

void *_ZTV6Square[] = { (void*)0, (void*)0, (void*)&Square__reshape };

// function: _Z7hrandomv
int hrandom() {
bb0:
  int __retval1;
  long r2 = random();
  long c3 = 2;
  long b4 = r2 % c3;
  int cast5 = (int)b4;
  __retval1 = cast5;
  int t6 = __retval1;
  return t6;
}

// function: _ZN5PointC2Eii
void Point__Point(struct Point* v7, int v8, int v9) {
bb10:
  struct Point* this11;
  int px12;
  int py13;
  this11 = v7;
  px12 = v8;
  py13 = v9;
  struct Point* t14 = this11;
  struct Shape* base15 = (struct Shape*)((char *)t14 + 0);
  Shape__Shape(base15);
  if (__cir_exc_active) {
    return;
  }
    int t16 = px12;
    t14->x = t16;
    int t17 = py13;
    t14->y = t17;
  return;
}

// function: _ZN8TriangleC2Eiii
void Triangle__Triangle(struct Triangle* v18, int v19, int v20, int v21) {
bb22:
  struct Triangle* this23;
  int s124;
  int s225;
  int s326;
  this23 = v18;
  s124 = v19;
  s225 = v20;
  s326 = v21;
  struct Triangle* t27 = this23;
  struct Shape* base28 = (struct Shape*)((char *)t27 + 0);
  Shape__Shape(base28);
  if (__cir_exc_active) {
    return;
  }
    int t29 = s124;
    t27->a = t29;
    int t30 = s225;
    t27->b = t30;
    int t31 = s326;
    t27->c = t31;
  return;
}

// function: _ZN9RectangleC2Eii
void Rectangle__Rectangle(struct Rectangle* v32, int v33, int v34) {
bb35:
  struct Rectangle* this36;
  int len37;
  int width38;
  this36 = v32;
  len37 = v33;
  width38 = v34;
  struct Rectangle* t39 = this36;
  struct Shape* base40 = (struct Shape*)((char *)t39 + 0);
  Shape__Shape(base40);
  if (__cir_exc_active) {
    return;
  }
    int t41 = len37;
    t39->l = t41;
    int t42 = width38;
    t39->w = t42;
  return;
}

// function: _ZN6SquareC2Ei
void Square__Square(struct Square* v43, int v44) {
bb45:
  struct Square* this46;
  int s47;
  this46 = v43;
  s47 = v44;
  struct Square* t48 = this46;
  struct Shape* base49 = (struct Shape*)((char *)t48 + 0);
  Shape__Shape(base49);
  if (__cir_exc_active) {
    return;
  }
    void* v50 = (void*)&_ZTV6Square[2];
    void** v51 = (void**)t48;
    *(void**)(v51) = (void*)v50;
    int t52 = s47;
    t48->e = t52;
  return;
}

// function: _ZN9ExceptionI5PointEC2Ev
void Exception_Point___Exception(struct Exception_Point_* v53) {
bb54:
  struct Exception_Point_* this56;
  this56 = v53;
  struct Exception_Point_* t57 = this56;
  goto ERROR;
bb55:
ERROR: ;
  return;
}

// function: _ZN5Point7reshapeEv
void Point__reshape(struct Point* v58) {
bb59:
  struct Point* this60;
  int x61;
  this60 = v58;
  struct Point* t62 = this60;
  int r63 = hrandom();
  if (__cir_exc_active) {
    return;
  }
  x61 = r63;
    int t64 = x61;
    _Bool cast65 = (_Bool)t64;
    if (cast65) {
      static char exc_buf66[1] = {0};
      struct Exception_Point_* exc67 = (struct Exception_Point_*)exc_buf66;
      Exception_Point___Exception(exc67);
      if (__cir_exc_active) {
        return;
      }
      __cir_exc_ptr = (void*)exc67;
      __cir_exc_dtor = (void*)0;
      __cir_exc_type = (const void*)__cir_eh_type__ZTI9ExceptionI5PointE;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI9ExceptionI5PointE;
      __cir_exc_active = 1;
      return;
      __builtin_unreachable();
    }
  return;
}

// function: _ZN9ExceptionI8TriangleEC2Ev
void Exception_Triangle___Exception(struct Exception_Triangle_* v68) {
bb69:
  struct Exception_Triangle_* this71;
  this71 = v68;
  struct Exception_Triangle_* t72 = this71;
  goto ERROR;
bb70:
ERROR: ;
  return;
}

// function: _ZN8Triangle7reshapeEv
void Triangle__reshape(struct Triangle* v73) {
bb74:
  struct Triangle* this75;
  int x76;
  this75 = v73;
  struct Triangle* t77 = this75;
  int r78 = hrandom();
  if (__cir_exc_active) {
    return;
  }
  x76 = r78;
    int t79 = x76;
    _Bool cast80 = (_Bool)t79;
    if (cast80) {
      static char exc_buf81[1] = {0};
      struct Exception_Triangle_* exc82 = (struct Exception_Triangle_*)exc_buf81;
      Exception_Triangle___Exception(exc82);
      if (__cir_exc_active) {
        return;
      }
      __cir_exc_ptr = (void*)exc82;
      __cir_exc_dtor = (void*)0;
      __cir_exc_type = (const void*)__cir_eh_type__ZTI9ExceptionI8TriangleE;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI9ExceptionI8TriangleE;
      __cir_exc_active = 1;
      return;
      __builtin_unreachable();
    }
  return;
}

// function: _ZN9ExceptionI9RectangleEC2Ev
void Exception_Rectangle___Exception(struct Exception_Rectangle_* v83) {
bb84:
  struct Exception_Rectangle_* this86;
  this86 = v83;
  struct Exception_Rectangle_* t87 = this86;
  goto ERROR;
bb85:
ERROR: ;
  return;
}

// function: _ZN9Rectangle7reshapeEv
void Rectangle__reshape(struct Rectangle* v88) {
bb89:
  struct Rectangle* this90;
  int x91;
  this90 = v88;
  struct Rectangle* t92 = this90;
  int r93 = hrandom();
  if (__cir_exc_active) {
    return;
  }
  x91 = r93;
    int t94 = x91;
    _Bool cast95 = (_Bool)t94;
    if (cast95) {
      static char exc_buf96[1] = {0};
      struct Exception_Rectangle_* exc97 = (struct Exception_Rectangle_*)exc_buf96;
      Exception_Rectangle___Exception(exc97);
      if (__cir_exc_active) {
        return;
      }
      __cir_exc_ptr = (void*)exc97;
      __cir_exc_dtor = (void*)0;
      __cir_exc_type = (const void*)__cir_eh_type__ZTI9ExceptionI9RectangleE;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI9ExceptionI9RectangleE;
      __cir_exc_active = 1;
      return;
      __builtin_unreachable();
    }
  return;
}

// function: _ZN6SquareD2Ev
void Square___Square(struct Square* v98) {
bb99:
  struct Square* this100;
  this100 = v98;
  struct Square* t101 = this100;
  {
    struct Shape* base102 = (struct Shape*)((char *)t101 + 0);
    Shape___Shape(base102);
  }
  return;
}

// function: _ZN9RectangleD2Ev
void Rectangle___Rectangle(struct Rectangle* v103) {
bb104:
  struct Rectangle* this105;
  this105 = v103;
  struct Rectangle* t106 = this105;
  {
    struct Shape* base107 = (struct Shape*)((char *)t106 + 0);
    Shape___Shape(base107);
  }
  return;
}

// function: _ZN8TriangleD2Ev
void Triangle___Triangle(struct Triangle* v108) {
bb109:
  struct Triangle* this110;
  this110 = v108;
  struct Triangle* t111 = this110;
  {
    struct Shape* base112 = (struct Shape*)((char *)t111 + 0);
    Shape___Shape(base112);
  }
  return;
}

// function: _ZN5PointD2Ev
void Point___Point(struct Point* v113) {
bb114:
  struct Point* this115;
  this115 = v113;
  struct Point* t116 = this115;
  {
    struct Shape* base117 = (struct Shape*)((char *)t116 + 0);
    Shape___Shape(base117);
  }
  return;
}

// function: main
int main() {
bb118:
  int __retval119;
  int c120 = 0;
  __retval119 = c120;
    struct Point p121;
    struct Triangle t122;
    struct Rectangle r123;
    struct Square* s125;
    struct Square* __new_result126;
    struct Exception_Point_* ep127;
    struct Exception_Triangle_* et128;
    struct Exception_Rectangle_* er129;
      int c131 = 1;
      int c132 = 10;
      Point__Point(&p121, c131, c132);
      if (__cir_exc_active) {
        goto cir_try_dispatch130;
      }
        int c133 = 3;
        int c134 = 4;
        int c135 = 5;
        Triangle__Triangle(&t122, c133, c134, c135);
        if (__cir_exc_active) {
          {
            Point___Point(&p121);
          }
          goto cir_try_dispatch130;
        }
          int c136 = 4;
          int c137 = 5;
          Rectangle__Rectangle(&r123, c136, c137);
          if (__cir_exc_active) {
            {
              Triangle___Triangle(&t122);
            }
            {
              Point___Point(&p121);
            }
            goto cir_try_dispatch130;
          }
            unsigned long c138 = 16;
            void* r139 = operator_new(c138);
            if (__cir_exc_active) {
              {
                Rectangle___Rectangle(&r123);
              }
              {
                Triangle___Triangle(&t122);
              }
              {
                Point___Point(&p121);
              }
              goto cir_try_dispatch130;
            }
              struct Square* cast140 = (struct Square*)r139;
              __new_result126 = cast140;
              int c141 = 4;
              Square__Square(cast140, c141);
              if (__cir_exc_active) {
                {
                  operator_delete(r139, c138);
                }
                {
                  Rectangle___Rectangle(&r123);
                }
                {
                  Triangle___Triangle(&t122);
                }
                {
                  Point___Point(&p121);
                }
                goto cir_try_dispatch130;
              }
            struct Square* t142 = __new_result126;
            s125 = t142;
            Point__reshape(&p121);
            if (__cir_exc_active) {
              {
                Rectangle___Rectangle(&r123);
              }
              {
                Triangle___Triangle(&t122);
              }
              {
                Point___Point(&p121);
              }
              goto cir_try_dispatch130;
            }
            Triangle__reshape(&t122);
            if (__cir_exc_active) {
              {
                Rectangle___Rectangle(&r123);
              }
              {
                Triangle___Triangle(&t122);
              }
              {
                Point___Point(&p121);
              }
              goto cir_try_dispatch130;
            }
            Rectangle__reshape(&r123);
            if (__cir_exc_active) {
              {
                Rectangle___Rectangle(&r123);
              }
              {
                Triangle___Triangle(&t122);
              }
              {
                Point___Point(&p121);
              }
              goto cir_try_dispatch130;
            }
            struct Square* t143 = s125;
            void** v144 = (void**)t143;
            void* v145 = *((void**)v144);
            __VERIFIER_virtual_call_void(t143, 0);
            if (__cir_exc_active) {
              {
                Rectangle___Rectangle(&r123);
              }
              {
                Triangle___Triangle(&t122);
              }
              {
                Point___Point(&p121);
              }
              goto cir_try_dispatch130;
            }
            struct Square* t148 = s125;
            struct Square* c149 = ((void*)0);
            _Bool c150 = ((t148 != c149)) ? 1 : 0;
            if (c150) {
                Square___Square(t148);
              {
                void* cast151 = (void*)t148;
                unsigned long c152 = 16;
                operator_delete(cast151, c152);
              }
            }
          {
            Rectangle___Rectangle(&r123);
          }
        {
          Triangle___Triangle(&t122);
        }
      {
        Point___Point(&p121);
      }
    cir_try_dispatch130: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI9ExceptionI5PointE) {
      int ca_tok153 = 0;
      void* ca_exn154 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        ep127 = (struct Exception_Point_*)__cir_exc_ptr;
        char* cast155 = (char*)&(_str);
        int r156 = printf(cast155);
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
    else if (__cir_exc_type == (const void*)__cir_eh_type__ZTI9ExceptionI8TriangleE) {
      int ca_tok157 = 0;
      void* ca_exn158 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        et128 = (struct Exception_Triangle_*)__cir_exc_ptr;
        char* cast159 = (char*)&(_str_1);
        int r160 = printf(cast159);
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
    else if (__cir_exc_type == (const void*)__cir_eh_type__ZTI9ExceptionI9RectangleE) {
      int ca_tok161 = 0;
      void* ca_exn162 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        er129 = (struct Exception_Rectangle_*)__cir_exc_ptr;
        char* cast163 = (char*)&(_str_2);
        int r164 = printf(cast163);
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
  int c165 = 0;
  __retval119 = c165;
  int t166 = __retval119;
  return t166;
}

// function: _ZN5ShapeC2Ev
void Shape__Shape(struct Shape* v167) {
bb168:
  struct Shape* this169;
  this169 = v167;
  struct Shape* t170 = this169;
  return;
}

// function: _ZN5ShapeD2Ev
void Shape___Shape(struct Shape* v171) {
bb172:
  struct Shape* this173;
  this173 = v171;
  struct Shape* t174 = this173;
  return;
}

// function: _ZN9ExceptionI6SquareEC2Ev
void Exception_Square___Exception(struct Exception_Square_* v175) {
bb176:
  struct Exception_Square_* this178;
  this178 = v175;
  struct Exception_Square_* t179 = this178;
  goto ERROR;
bb177:
ERROR: ;
  return;
}

// function: _ZN6Square7reshapeEv
void Square__reshape(struct Square* v180) {
bb181:
  struct Square* this182;
  int x183;
  this182 = v180;
  struct Square* t184 = this182;
  int r185 = hrandom();
  if (__cir_exc_active) {
    return;
  }
  x183 = r185;
    int t186 = x183;
    _Bool cast187 = (_Bool)t186;
    if (cast187) {
      static char exc_buf188[1] = {0};
      struct Exception_Square_* exc189 = (struct Exception_Square_*)exc_buf188;
      Exception_Square___Exception(exc189);
      if (__cir_exc_active) {
        return;
      }
      __cir_exc_ptr = (void*)exc189;
      __cir_exc_dtor = (void*)0;
      __cir_exc_type = (const void*)__cir_eh_type__ZTI9ExceptionI6SquareE;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI9ExceptionI6SquareE;
      __cir_exc_active = 1;
      return;
      __builtin_unreachable();
    }
  return;
}

