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
static const char __cir_eh_type__ZTISt8bad_cast[] = "_ZTISt8bad_cast";

// Struct definitions (auto-parsed)
struct Shape { void* __field0; };
struct Square { struct Shape __field0; int e; unsigned char __field2[4]; } __attribute__((packed));
struct Triangle { struct Shape __field0; int a; int b; int c; unsigned char __field4[4]; } __attribute__((packed));
struct anon_struct_0 { unsigned char* __field0; unsigned char* __field1; };
struct anon_struct_1 { unsigned char* __field0; unsigned char* __field1; unsigned char* __field2; };
struct anon_struct_2 { unsigned char* __field0[3]; };
struct Point { struct Shape __field0; int x; int y; };
struct Rectangle { struct Shape __field0; int l; int w; };
struct std__bad_cast;

extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
extern unsigned char _ZTI5Shape[];
extern unsigned char _ZTI5Point[];
extern unsigned char _ZTI8Triangle[];
extern unsigned char _ZTI9Rectangle[];
extern unsigned char _ZTI6Square[];
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS5Shape[7] = "5Shape";
extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
char _ZTS5Point[7] = "5Point";
static const char _ZTISt8bad_cast__n_[] = "_ZTISt8bad_cast";
static void* _ZTISt8bad_cast[2] = {(void*)0, (void*)_ZTISt8bad_cast__n_};
char _str[17] = "Caught bad cast\n";
char _str_1[26] = "Unknown exception caught\n";
char _ZTS8Triangle[10] = "8Triangle";
char _ZTS9Rectangle[11] = "9Rectangle";
char _ZTS6Square[8] = "6Square";
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
void Point__Point(struct Point* p0, int p1, int p2);
void operator_delete(void* p0, unsigned long p1) { free(p0); }
void Triangle__Triangle(struct Triangle* p0, int p1, int p2, int p3);
void Rectangle__Rectangle(struct Rectangle* p0, int p1, int p2);
void Square__Square(struct Square* p0, int p1);
void createShapes(struct Shape** p0);
extern int __gxx_personality_v0();
extern void* __dynamic_cast(void* p0, unsigned char* p1, unsigned char* p2, long p3);
extern void __cxa_bad_cast();
void Point___Point(struct Point* p0);
extern int printf(char* p0, ...);
void reShapePoint(struct Shape* p0);
void Square___Square(struct Square* p0);
void Rectangle___Rectangle(struct Rectangle* p0);
void Triangle___Triangle(struct Triangle* p0);
int main();
void Shape__Shape(struct Shape* p0);
void Shape___Shape(struct Shape* p0);
void Point__reshape(struct Point* p0);
void Shape__reshape(struct Shape* p0);
void Triangle__reshape(struct Triangle* p0);
void Rectangle__reshape(struct Rectangle* p0);
void Square__reshape(struct Square* p0);

void *_ZTV5Point[] = { (void*)0, (void*)0, (void*)&Point__reshape };
void *_ZTV5Shape[] = { (void*)0, (void*)0, (void*)&Shape__reshape };
void *_ZTV8Triangle[] = { (void*)0, (void*)0, (void*)&Triangle__reshape };
void *_ZTV9Rectangle[] = { (void*)0, (void*)0, (void*)&Rectangle__reshape };
void *_ZTV6Square[] = { (void*)0, (void*)0, (void*)&Square__reshape };

// function: _ZN5PointC2Eii
void Point__Point(struct Point* v0, int v1, int v2) {
bb3:
  struct Point* this4;
  int px5;
  int py6;
  this4 = v0;
  px5 = v1;
  py6 = v2;
  struct Point* t7 = this4;
  struct Shape* base8 = (struct Shape*)((char *)t7 + 0);
  Shape__Shape(base8);
  if (__cir_exc_active) {
    return;
  }
    void* v9 = (void*)&_ZTV5Point[2];
    void** v10 = (void**)t7;
    *(void**)(v10) = (void*)v9;
    int t11 = px5;
    t7->x = t11;
    int t12 = py6;
    t7->y = t12;
  return;
}

// function: _ZN8TriangleC2Eiii
void Triangle__Triangle(struct Triangle* v13, int v14, int v15, int v16) {
bb17:
  struct Triangle* this18;
  int s119;
  int s220;
  int s321;
  this18 = v13;
  s119 = v14;
  s220 = v15;
  s321 = v16;
  struct Triangle* t22 = this18;
  struct Shape* base23 = (struct Shape*)((char *)t22 + 0);
  Shape__Shape(base23);
  if (__cir_exc_active) {
    return;
  }
    void* v24 = (void*)&_ZTV8Triangle[2];
    void** v25 = (void**)t22;
    *(void**)(v25) = (void*)v24;
    int t26 = s119;
    t22->a = t26;
    int t27 = s220;
    t22->b = t27;
    int t28 = s321;
    t22->c = t28;
  return;
}

// function: _ZN9RectangleC2Eii
void Rectangle__Rectangle(struct Rectangle* v29, int v30, int v31) {
bb32:
  struct Rectangle* this33;
  int len34;
  int width35;
  this33 = v29;
  len34 = v30;
  width35 = v31;
  struct Rectangle* t36 = this33;
  struct Shape* base37 = (struct Shape*)((char *)t36 + 0);
  Shape__Shape(base37);
  if (__cir_exc_active) {
    return;
  }
    void* v38 = (void*)&_ZTV9Rectangle[2];
    void** v39 = (void**)t36;
    *(void**)(v39) = (void*)v38;
    int t40 = len34;
    t36->l = t40;
    int t41 = width35;
    t36->w = t41;
  return;
}

// function: _ZN6SquareC2Ei
void Square__Square(struct Square* v42, int v43) {
bb44:
  struct Square* this45;
  int s46;
  this45 = v42;
  s46 = v43;
  struct Square* t47 = this45;
  struct Shape* base48 = (struct Shape*)((char *)t47 + 0);
  Shape__Shape(base48);
  if (__cir_exc_active) {
    return;
  }
    void* v49 = (void*)&_ZTV6Square[2];
    void** v50 = (void**)t47;
    *(void**)(v50) = (void*)v49;
    int t51 = s46;
    t47->e = t51;
  return;
}

// function: _Z12createShapesPP5Shape
void createShapes(struct Shape** v52) {
bb53:
  struct Shape** shapes54;
  struct Point* __new_result55;
  struct Triangle* __new_result56;
  struct Rectangle* __new_result57;
  struct Square* __new_result58;
  shapes54 = v52;
  unsigned long c59 = 16;
  void* r60 = operator_new(c59);
  if (__cir_exc_active) {
    return;
  }
    struct Point* cast61 = (struct Point*)r60;
    __new_result55 = cast61;
    int c62 = 1;
    int c63 = 2;
    Point__Point(cast61, c62, c63);
    if (__cir_exc_active) {
      {
        operator_delete(r60, c59);
      }
      return;
    }
  struct Point* t64 = __new_result55;
  struct Shape* base65 = (struct Shape*)((char *)t64 + 0);
  long c66 = 0;
  struct Shape** t67 = shapes54;
  struct Shape** ptr68 = &(t67)[c66];
  *ptr68 = base65;
  unsigned long c69 = 24;
  void* r70 = operator_new(c69);
  if (__cir_exc_active) {
    return;
  }
    struct Triangle* cast71 = (struct Triangle*)r70;
    __new_result56 = cast71;
    int c72 = 2;
    int c73 = 3;
    int c74 = 4;
    Triangle__Triangle(cast71, c72, c73, c74);
    if (__cir_exc_active) {
      {
        operator_delete(r70, c69);
      }
      return;
    }
  struct Triangle* t75 = __new_result56;
  struct Shape* base76 = (struct Shape*)((char *)t75 + 0);
  long c77 = 1;
  struct Shape** t78 = shapes54;
  struct Shape** ptr79 = &(t78)[c77];
  *ptr79 = base76;
  unsigned long c80 = 16;
  void* r81 = operator_new(c80);
  if (__cir_exc_active) {
    return;
  }
    struct Rectangle* cast82 = (struct Rectangle*)r81;
    __new_result57 = cast82;
    int c83 = 3;
    int c84 = 4;
    Rectangle__Rectangle(cast82, c83, c84);
    if (__cir_exc_active) {
      {
        operator_delete(r81, c80);
      }
      return;
    }
  struct Rectangle* t85 = __new_result57;
  struct Shape* base86 = (struct Shape*)((char *)t85 + 0);
  long c87 = 2;
  struct Shape** t88 = shapes54;
  struct Shape** ptr89 = &(t88)[c87];
  *ptr89 = base86;
  unsigned long c90 = 16;
  void* r91 = operator_new(c90);
  if (__cir_exc_active) {
    return;
  }
    struct Square* cast92 = (struct Square*)r91;
    __new_result58 = cast92;
    int c93 = 4;
    Square__Square(cast92, c93);
    if (__cir_exc_active) {
      {
        operator_delete(r91, c90);
      }
      return;
    }
  struct Square* t94 = __new_result58;
  struct Shape* base95 = (struct Shape*)((char *)t94 + 0);
  long c96 = 3;
  struct Shape** t97 = shapes54;
  struct Shape** ptr98 = &(t97)[c96];
  *ptr98 = base95;
  return;
}

// function: _ZN5PointD2Ev
void Point___Point(struct Point* v99) {
bb100:
  struct Point* this101;
  this101 = v99;
  struct Point* t102 = this101;
  {
    struct Shape* base103 = (struct Shape*)((char *)t102 + 0);
    Shape___Shape(base103);
  }
  return;
}

// function: _Z12reShapePointR5Shape
void reShapePoint(struct Shape* v104) {
bb105:
  struct Shape* shape106;
  shape106 = v104;
    struct Point* tmp107;
    struct Point* __new_result108;
    struct Point* p109;
    struct std__bad_cast* e110;
      unsigned long c112 = 16;
      void* r113 = operator_new(c112);
      if (__cir_exc_active) {
        goto cir_try_dispatch111;
      }
        struct Point* cast114 = (struct Point*)r113;
        __new_result108 = cast114;
        int c115 = 8;
        int c116 = 10;
        Point__Point(cast114, c115, c116);
        if (__cir_exc_active) {
          {
            operator_delete(r113, c112);
          }
          goto cir_try_dispatch111;
        }
      struct Point* t117 = __new_result108;
      tmp107 = t117;
      struct Shape* t118 = shape106;
      void* cast119 = (void*)t118;
      unsigned char* c120 = _ZTI5Shape;
      unsigned char* c121 = _ZTI5Point;
      long c122 = 0;
      void* r123 = __dynamic_cast(cast119, c120, c121, c122);
      if (__cir_exc_active) {
        goto cir_try_dispatch111;
      }
      void* c124 = ((void*)0);
      _Bool c125 = ((r123 == c124)) ? 1 : 0;
      if (c125) {
        __cxa_bad_cast();
        if (__cir_exc_active) {
          goto cir_try_dispatch111;
        }
        __builtin_unreachable();
      }
      struct Point* cast126 = (struct Point*)r123;
      p109 = cast126;
      struct Point* t127 = tmp107;
      int t128 = t127->x;
      struct Point* t129 = p109;
      t129->x = t128;
      struct Point* t130 = tmp107;
      int t131 = t130->y;
      struct Point* t132 = p109;
      t132->y = t131;
      struct Point* t133 = tmp107;
      struct Point* c134 = ((void*)0);
      _Bool c135 = ((t133 != c134)) ? 1 : 0;
      if (c135) {
          Point___Point(t133);
        {
          void* cast136 = (void*)t133;
          unsigned long c137 = 16;
          operator_delete(cast136, c137);
        }
      }
    cir_try_dispatch111: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTISt8bad_cast) {
      int ca_tok138 = 0;
      void* ca_exn139 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        e110 = (struct std__bad_cast*)__cir_exc_ptr;
        char* cast140 = (char*)&(_str);
        int r141 = printf(cast140);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          return;
        }
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        goto ERROR;
      bb142:
      ERROR: ;
    }
    else {
      __cir_exc_active = 1;
      return;
    return;
    }
    }
  return;
}

// function: _ZN6SquareD2Ev
void Square___Square(struct Square* v143) {
bb144:
  struct Square* this145;
  this145 = v143;
  struct Square* t146 = this145;
  {
    struct Shape* base147 = (struct Shape*)((char *)t146 + 0);
    Shape___Shape(base147);
  }
  return;
}

// function: _ZN9RectangleD2Ev
void Rectangle___Rectangle(struct Rectangle* v148) {
bb149:
  struct Rectangle* this150;
  this150 = v148;
  struct Rectangle* t151 = this150;
  {
    struct Shape* base152 = (struct Shape*)((char *)t151 + 0);
    Shape___Shape(base152);
  }
  return;
}

// function: _ZN8TriangleD2Ev
void Triangle___Triangle(struct Triangle* v153) {
bb154:
  struct Triangle* this155;
  this155 = v153;
  struct Triangle* t156 = this155;
  {
    struct Shape* base157 = (struct Shape*)((char *)t156 + 0);
    Shape___Shape(base157);
  }
  return;
}

// function: main
int main() {
bb158:
  int __retval159;
  struct Point p160;
  struct Triangle t161;
  struct Rectangle r162;
  struct Square s163;
  int c164 = 0;
  __retval159 = c164;
  int c165 = 1;
  int c166 = 2;
  Point__Point(&p160, c165, c166);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    int c167 = 2;
    int c168 = 3;
    int c169 = 4;
    Triangle__Triangle(&t161, c167, c168, c169);
    if (__cir_exc_active) {
      {
        Point___Point(&p160);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      int c170 = 3;
      int c171 = 4;
      Rectangle__Rectangle(&r162, c170, c171);
      if (__cir_exc_active) {
        {
          Triangle___Triangle(&t161);
        }
        {
          Point___Point(&p160);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
        int c172 = 4;
        Square__Square(&s163, c172);
        if (__cir_exc_active) {
          {
            Rectangle___Rectangle(&r162);
          }
          {
            Triangle___Triangle(&t161);
          }
          {
            Point___Point(&p160);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
              struct Shape* base174 = (struct Shape*)((char *)&(p160) + 0);
              reShapePoint(base174);
              if (__cir_exc_active) {
                {
                  Square___Square(&s163);
                }
                {
                  Rectangle___Rectangle(&r162);
                }
                {
                  Triangle___Triangle(&t161);
                }
                {
                  Point___Point(&p160);
                }
                goto cir_try_dispatch173;
              }
              struct Shape* base175 = (struct Shape*)((char *)&(t161) + 0);
              reShapePoint(base175);
              if (__cir_exc_active) {
                {
                  Square___Square(&s163);
                }
                {
                  Rectangle___Rectangle(&r162);
                }
                {
                  Triangle___Triangle(&t161);
                }
                {
                  Point___Point(&p160);
                }
                goto cir_try_dispatch173;
              }
              struct Shape* base176 = (struct Shape*)((char *)&(r162) + 0);
              reShapePoint(base176);
              if (__cir_exc_active) {
                {
                  Square___Square(&s163);
                }
                {
                  Rectangle___Rectangle(&r162);
                }
                {
                  Triangle___Triangle(&t161);
                }
                {
                  Point___Point(&p160);
                }
                goto cir_try_dispatch173;
              }
              struct Shape* base177 = (struct Shape*)((char *)&(s163) + 0);
              reShapePoint(base177);
              if (__cir_exc_active) {
                {
                  Square___Square(&s163);
                }
                {
                  Rectangle___Rectangle(&r162);
                }
                {
                  Triangle___Triangle(&t161);
                }
                {
                  Point___Point(&p160);
                }
                goto cir_try_dispatch173;
              }
            cir_try_dispatch173: ;
            if (__cir_exc_active) {
            {
              int ca_tok178 = 0;
              void* ca_exn179 = (void*)__cir_exc_ptr;
              __cir_exc_active = 0;
                char* cast180 = (char*)&(_str_1);
                int r181 = printf(cast180);
                if (__cir_exc_active) {
                  {
                    if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                  }
                  {
                    Square___Square(&s163);
                  }
                  {
                    Rectangle___Rectangle(&r162);
                  }
                  {
                    Triangle___Triangle(&t161);
                  }
                  {
                    Point___Point(&p160);
                  }
                  int __cir_eh_ret = (int)0;
                  return __cir_eh_ret;
                }
              {
                if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
              }
            }
            }
          int c182 = 0;
          __retval159 = c182;
          int t183 = __retval159;
          int ret_val184 = t183;
          {
            Square___Square(&s163);
          }
          {
            Rectangle___Rectangle(&r162);
          }
          {
            Triangle___Triangle(&t161);
          }
          {
            Point___Point(&p160);
          }
          return ret_val184;
  int t185 = __retval159;
  return t185;
}

// function: _ZN5ShapeC2Ev
void Shape__Shape(struct Shape* v186) {
bb187:
  struct Shape* this188;
  this188 = v186;
  struct Shape* t189 = this188;
  void* v190 = (void*)&_ZTV5Shape[2];
  void** v191 = (void**)t189;
  *(void**)(v191) = (void*)v190;
  return;
}

// function: _ZN5ShapeD2Ev
void Shape___Shape(struct Shape* v192) {
bb193:
  struct Shape* this194;
  this194 = v192;
  struct Shape* t195 = this194;
  return;
}

// function: _ZN5Point7reshapeEv
void Point__reshape(struct Point* v196) {
bb197:
  struct Point* this198;
  this198 = v196;
  struct Point* t199 = this198;
  return;
}

// function: _ZN5Shape7reshapeEv
void Shape__reshape(struct Shape* v200) {
bb201:
  struct Shape* this202;
  this202 = v200;
  struct Shape* t203 = this202;
  return;
}

// function: _ZN8Triangle7reshapeEv
void Triangle__reshape(struct Triangle* v204) {
bb205:
  struct Triangle* this206;
  this206 = v204;
  struct Triangle* t207 = this206;
  return;
}

// function: _ZN9Rectangle7reshapeEv
void Rectangle__reshape(struct Rectangle* v208) {
bb209:
  struct Rectangle* this210;
  this210 = v208;
  struct Rectangle* t211 = this210;
  return;
}

// function: _ZN6Square7reshapeEv
void Square__reshape(struct Square* v212) {
bb213:
  struct Square* this214;
  this214 = v212;
  struct Square* t215 = this214;
  return;
}

