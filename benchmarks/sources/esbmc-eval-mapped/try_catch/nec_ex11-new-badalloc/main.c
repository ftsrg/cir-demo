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
static const char __cir_eh_type__ZTISt9bad_alloc[] = "_ZTISt9bad_alloc";

// Struct definitions (auto-parsed)
struct Shape { void* __field0; };
struct Square { struct Shape __field0; int e; unsigned char __field2[4]; } __attribute__((packed));
struct Triangle { struct Shape __field0; int a; int b; int c; unsigned char __field4[4]; } __attribute__((packed));
struct anon_struct_0 { unsigned char* __field0[3]; };
struct anon_struct_1 { unsigned char* __field0; unsigned char* __field1; };
struct anon_struct_2 { unsigned char* __field0; unsigned char* __field1; unsigned char* __field2; };
struct Point { struct Shape __field0; int x; int y; };
struct Rectangle { struct Shape __field0; int l; int w; };
struct std__bad_alloc;

extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern unsigned char _ZTI5Shape[];
extern unsigned char _ZTI5Point[];
extern unsigned char _ZTI8Triangle[];
extern unsigned char _ZTI9Rectangle[];
extern unsigned char _ZTI6Square[];
static const char _ZTISt9bad_alloc__n_[] = "_ZTISt9bad_alloc";
static void* _ZTISt9bad_alloc[2] = {(void*)0, (void*)_ZTISt9bad_alloc__n_};
char _str[18] = "Caught bad alloc\n";
char _str_1[12] = "from here \n";
char _str_2[11] = "end here \n";
char _str_3[26] = "Unknown exception caught\n";
extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
char _ZTS5Point[7] = "5Point";
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS5Shape[7] = "5Shape";
char _str_4[24] = "consr of Shape called \n";
char _ZTS8Triangle[10] = "8Triangle";
char _ZTS9Rectangle[11] = "9Rectangle";
char _ZTS6Square[8] = "6Square";
char _str_5[24] = "consr of Point called \n";
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
void Point___Point(struct Point* p0);
extern int printf(char* p0, ...);
void reShapePoints(struct Point* p0, int p1);
void* operator_new__(unsigned long p0) { return malloc(p0); }
void Point__Point_2(struct Point* p0);
void operator_delete__(void* p0, unsigned long p1) { free(p0); }
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

// function: _Z13reShapePointsP5Pointi
void reShapePoints(struct Point* v104, int v105) {
bb106:
  struct Point* shape107;
  int n108;
  shape107 = v104;
  n108 = v105;
    int i109;
    int c110 = 0;
    i109 = c110;
    while (1) {
      int t112 = i109;
      int t113 = n108;
      _Bool c114 = ((t112 < t113)) ? 1 : 0;
      if (!c114) break;
          struct Point* tmp1115;
          struct Point* __new_result116;
          struct Point* tmp2117;
          struct Point* __new_result118;
          struct Point* p119;
          struct std__bad_alloc* ba120;
            unsigned long c122 = 16;
            void* r123 = operator_new(c122);
            if (__cir_exc_active) {
              goto cir_try_dispatch121;
            }
              struct Point* cast124 = (struct Point*)r123;
              __new_result116 = cast124;
              int c125 = 8;
              int c126 = 10;
              Point__Point(cast124, c125, c126);
              if (__cir_exc_active) {
                {
                  operator_delete(r123, c122);
                }
                goto cir_try_dispatch121;
              }
            struct Point* t127 = __new_result116;
            tmp1115 = t127;
            unsigned long c128 = 16;
            void* r129 = operator_new(c128);
            if (__cir_exc_active) {
              goto cir_try_dispatch121;
            }
              struct Point* cast130 = (struct Point*)r129;
              __new_result118 = cast130;
              int c131 = 28;
              int c132 = 2;
              Point__Point(cast130, c131, c132);
              if (__cir_exc_active) {
                {
                  operator_delete(r129, c128);
                }
                goto cir_try_dispatch121;
              }
            struct Point* t133 = __new_result118;
            tmp2117 = t133;
            int t134 = i109;
            long cast135 = (long)t134;
            struct Point* t136 = shape107;
            struct Point* ptr137 = &(t136)[cast135];
            p119 = ptr137;
            struct Point* t138 = tmp1115;
            int t139 = t138->x;
            struct Point* t140 = tmp2117;
            int t141 = t140->x;
            int b142 = t139 + t141;
            struct Point* t143 = p119;
            t143->x = b142;
            struct Point* t144 = tmp1115;
            int t145 = t144->y;
            struct Point* t146 = tmp2117;
            int t147 = t146->y;
            int b148 = t145 + t147;
            struct Point* t149 = p119;
            t149->y = b148;
            struct Point* t150 = tmp1115;
            struct Point* c151 = ((void*)0);
            _Bool c152 = ((t150 != c151)) ? 1 : 0;
            if (c152) {
                Point___Point(t150);
              {
                void* cast153 = (void*)t150;
                unsigned long c154 = 16;
                operator_delete(cast153, c154);
              }
            }
            struct Point* t155 = tmp2117;
            struct Point* c156 = ((void*)0);
            _Bool c157 = ((t155 != c156)) ? 1 : 0;
            if (c157) {
                Point___Point(t155);
              {
                void* cast158 = (void*)t155;
                unsigned long c159 = 16;
                operator_delete(cast158, c159);
              }
            }
          cir_try_dispatch121: ;
          if (__cir_exc_active) {
          if (__cir_exc_type == (const void*)__cir_eh_type__ZTISt9bad_alloc) {
            int ca_tok160 = 0;
            void* ca_exn161 = (void*)__cir_exc_ptr;
            __cir_exc_active = 0;
              ba120 = (struct std__bad_alloc*)__cir_exc_ptr;
              char* cast162 = (char*)&(_str);
              int r163 = printf(cast162);
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
            bb164:
            ERROR: ;
          }
          else {
            __cir_exc_active = 1;
            return;
          return;
          }
          }
    for_step111: ;
      int t165 = i109;
      int u166 = t165 + 1;
      i109 = u166;
    }
  return;
}

// function: _ZN5PointC2Ev
void Point__Point_2(struct Point* v167) {
bb168:
  struct Point* this169;
  this169 = v167;
  struct Point* t170 = this169;
  struct Shape* base171 = (struct Shape*)((char *)t170 + 0);
  Shape__Shape(base171);
  if (__cir_exc_active) {
    return;
  }
    void* v172 = (void*)&_ZTV5Point[2];
    void** v173 = (void**)t170;
    *(void**)(v173) = (void*)v172;
    char* cast174 = (char*)&(_str_5);
    int r175 = printf(cast174);
    if (__cir_exc_active) {
      {
        struct Shape* base176 = (struct Shape*)((char *)t170 + 0);
        Shape___Shape(base176);
      }
      return;
    }
    int c177 = -1;
    t170->y = c177;
    t170->x = c177;
  return;
}

// function: main
int main() {
bb178:
  int __retval179;
  struct Point* p180;
  struct Point* __new_result181;
  int c182 = 0;
  __retval179 = c182;
  char* cast183 = (char*)&(_str_1);
  int r184 = printf(cast183);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  unsigned long c185 = 2;
  unsigned long c186 = 40;
  void* r187 = operator_new__(c186);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    unsigned char* cast188 = (unsigned char*)r187;
    unsigned long* cast189 = (unsigned long*)cast188;
    *cast189 = c185;
    int c190 = 8;
    unsigned char* ptr191 = &(cast188)[c190];
    void* cast192 = (void*)ptr191;
    struct Point* cast193 = (struct Point*)cast192;
    __new_result181 = cast193;
    struct Point* cast194 = (struct Point*)cast193;
    unsigned long c195 = 2;
    struct Point* cast196 = (struct Point*)cast194;
    struct Point* ptr197 = &(cast196)[c195];
    struct Point* __array_idx198;
    __array_idx198 = cast196;
      do {
        struct Point* t199 = __array_idx198;
        Point__Point_2(t199);
        if (__cir_exc_active) {
          {
            struct Point* t200 = __array_idx198;
            _Bool c201 = ((t200 != cast196)) ? 1 : 0;
            if (c201) {
              do {
                struct Point* t202 = __array_idx198;
                long c203 = -1;
                struct Point* ptr204 = &(t202)[c203];
                __array_idx198 = ptr204;
                Point___Point(ptr204);
                struct Point* t205 = __array_idx198;
                _Bool c206 = ((t205 != cast196)) ? 1 : 0;
                if (!c206) break;
              } while (1);
            }
          }
          {
            operator_delete__(r187, c186);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        unsigned long c207 = 1;
        struct Point* ptr208 = &(t199)[c207];
        __array_idx198 = ptr208;
        struct Point* t209 = __array_idx198;
        _Bool c210 = ((t209 != ptr197)) ? 1 : 0;
        if (!c210) break;
      } while (1);
  struct Point* t211 = __new_result181;
  p180 = t211;
  char* cast212 = (char*)&(_str_2);
  int r213 = printf(cast212);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
      struct Point* t215 = p180;
      int c216 = 2;
      reShapePoints(t215, c216);
      if (__cir_exc_active) {
        goto cir_try_dispatch214;
      }
    cir_try_dispatch214: ;
    if (__cir_exc_active) {
    {
      int ca_tok217 = 0;
      void* ca_exn218 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        char* cast219 = (char*)&(_str_3);
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
        goto ERROR;
      bb221:
      ERROR: ;
    }
    }
  struct Point* t222 = p180;
  struct Point* c223 = ((void*)0);
  _Bool c224 = ((t222 != c223)) ? 1 : 0;
  if (c224) {
    unsigned char* cast225 = (unsigned char*)t222;
    long c226 = -8;
    unsigned char* ptr227 = &(cast225)[c226];
    void* cast228 = (void*)ptr227;
    unsigned long* cast229 = (unsigned long*)ptr227;
    unsigned long t230 = *cast229;
      struct Point* ptr231 = &(t222)[t230];
      _Bool c232 = ((ptr231 != t222)) ? 1 : 0;
      if (c232) {
        struct Point* __array_idx233;
        __array_idx233 = ptr231;
        do {
          struct Point* t234 = __array_idx233;
          long c235 = -1;
          struct Point* ptr236 = &(t234)[c235];
          __array_idx233 = ptr236;
          Point___Point(ptr236);
          struct Point* t237 = __array_idx233;
          _Bool c238 = ((t237 != t222)) ? 1 : 0;
          if (!c238) break;
        } while (1);
      }
    {
      unsigned long c239 = 16;
      unsigned long b240 = c239 * t230;
      unsigned long c241 = 8;
      unsigned long b242 = b240 + c241;
      operator_delete__(cast228, b242);
    }
  }
  int c243 = 0;
  __retval179 = c243;
  int t244 = __retval179;
  return t244;
}

// function: _ZN5ShapeC2Ev
void Shape__Shape(struct Shape* v245) {
bb246:
  struct Shape* this247;
  this247 = v245;
  struct Shape* t248 = this247;
  void* v249 = (void*)&_ZTV5Shape[2];
  void** v250 = (void**)t248;
  *(void**)(v250) = (void*)v249;
  char* cast251 = (char*)&(_str_4);
  int r252 = printf(cast251);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN5ShapeD2Ev
void Shape___Shape(struct Shape* v253) {
bb254:
  struct Shape* this255;
  this255 = v253;
  struct Shape* t256 = this255;
  return;
}

// function: _ZN5Point7reshapeEv
void Point__reshape(struct Point* v257) {
bb258:
  struct Point* this259;
  this259 = v257;
  struct Point* t260 = this259;
  return;
}

// function: _ZN5Shape7reshapeEv
void Shape__reshape(struct Shape* v261) {
bb262:
  struct Shape* this263;
  this263 = v261;
  struct Shape* t264 = this263;
  return;
}

// function: _ZN8Triangle7reshapeEv
void Triangle__reshape(struct Triangle* v265) {
bb266:
  struct Triangle* this267;
  this267 = v265;
  struct Triangle* t268 = this267;
  return;
}

// function: _ZN9Rectangle7reshapeEv
void Rectangle__reshape(struct Rectangle* v269) {
bb270:
  struct Rectangle* this271;
  this271 = v269;
  struct Rectangle* t272 = this271;
  return;
}

// function: _ZN6Square7reshapeEv
void Square__reshape(struct Square* v273) {
bb274:
  struct Square* this275;
  this275 = v273;
  struct Square* t276 = this275;
  return;
}

