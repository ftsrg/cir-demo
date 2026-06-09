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
static const char __cir_eh_type__ZTI16ReshapeException[] = "_ZTI16ReshapeException";
static const char __cir_eh_type__ZTI21PointReshapeException[] = "_ZTI21PointReshapeException";
static const char __cir_eh_type__ZTI22SquareReshapeException[] = "_ZTI22SquareReshapeException";
static const char __cir_eh_type__ZTI24TriangleReshapeException[] = "_ZTI24TriangleReshapeException";
static const char __cir_eh_type__ZTI25RectangleReshapeException[] = "_ZTI25RectangleReshapeException";

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) void __VERIFIER_virtual_call_void(void* __obj, int __slot) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  ((void(*)(void*))__fn)(__obj);
}

// Struct definitions (auto-parsed)
struct PointReshapeException { unsigned char __field0; };
struct RectangleReshapeException { unsigned char __field0; };
struct ReshapeException { unsigned char __field0; };
struct Shape { void* __field0; };
struct Square { struct Shape __field0; int e; unsigned char __field2[4]; } __attribute__((packed));
struct SquareReshapeException { unsigned char __field0; };
struct Triangle { struct Shape __field0; int a; int b; int c; unsigned char __field4[4]; } __attribute__((packed));
struct TriangleReshapeException { unsigned char __field0; };
struct anon_struct_0 { unsigned char* __field0; unsigned char* __field1; };
struct anon_struct_1 { unsigned char* __field0[3]; };
struct anon_struct_2 { unsigned char* __field0; unsigned char* __field1; unsigned char* __field2; };
struct Point { struct Shape __field0; int x; int y; };
struct Rectangle { struct Shape __field0; int l; int w; };

extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
extern unsigned char _ZTI21PointReshapeException[];
extern unsigned char _ZTI25RectangleReshapeException[];
extern unsigned char _ZTI24TriangleReshapeException[];
extern unsigned char _ZTI16ReshapeException[];
extern unsigned char _ZTI5Shape[];
extern unsigned char _ZTI5Point[];
extern unsigned char _ZTI8Triangle[];
extern unsigned char _ZTI9Rectangle[];
extern unsigned char _ZTI6Square[];
extern unsigned char _ZTI22SquareReshapeException[];
struct Shape* __const_main_shapes[4];
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS21PointReshapeException[24] = "21PointReshapeException";
char _ZTS25RectangleReshapeException[28] = "25RectangleReshapeException";
char _ZTS24TriangleReshapeException[27] = "24TriangleReshapeException";
char _ZTS16ReshapeException[19] = "16ReshapeException";
char _str[34] = "Caught a Point reshape exception\n";
char _str_1[38] = "Caught a Rectangle reshape exception\n";
char _str_2[28] = "Caught a reshape exception\n";
char _str_3[26] = "Unknown exception caught\n";
extern void *_ZTVN10__cxxabiv120__si_class_type_infoE[];
char _ZTS5Point[7] = "5Point";
char _ZTS5Shape[7] = "5Shape";
char _ZTS8Triangle[10] = "8Triangle";
char _ZTS9Rectangle[11] = "9Rectangle";
char _ZTS6Square[8] = "6Square";
char _ZTS22SquareReshapeException[25] = "22SquareReshapeException";
extern long random();
int hrandom();
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
extern int printf(char* p0, ...);
void reShape(struct Shape** p0);
void Shape___Shape(struct Shape* p0);
void deleteShapes(struct Shape** p0);
int main();
void Shape__Shape(struct Shape* p0);
void PointReshapeException__PointReshapeException(struct PointReshapeException* p0);
void Point__reshape(struct Point* p0);
void ReshapeException__ReshapeException(struct ReshapeException* p0);
void Shape__reshape(struct Shape* p0);
void TriangleReshapeException__TriangleReshapeException(struct TriangleReshapeException* p0);
void Triangle__reshape(struct Triangle* p0);
void RectangleReshapeException__RectangleReshapeException(struct RectangleReshapeException* p0);
void Rectangle__reshape(struct Rectangle* p0);
void SquareReshapeException__SquareReshapeException(struct SquareReshapeException* p0);
void Square__reshape(struct Square* p0);

void *_ZTV5Point[] = { (void*)0, (void*)0, (void*)&Point__reshape };
void *_ZTV5Shape[] = { (void*)0, (void*)0, (void*)&Shape__reshape };
void *_ZTV8Triangle[] = { (void*)0, (void*)0, (void*)&Triangle__reshape };
void *_ZTV9Rectangle[] = { (void*)0, (void*)0, (void*)&Rectangle__reshape };
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
    void* v16 = (void*)&_ZTV5Point[2];
    void** v17 = (void**)t14;
    *(void**)(v17) = (void*)v16;
    int t18 = px12;
    t14->x = t18;
    int t19 = py13;
    t14->y = t19;
  return;
}

// function: _ZN8TriangleC2Eiii
void Triangle__Triangle(struct Triangle* v20, int v21, int v22, int v23) {
bb24:
  struct Triangle* this25;
  int s126;
  int s227;
  int s328;
  this25 = v20;
  s126 = v21;
  s227 = v22;
  s328 = v23;
  struct Triangle* t29 = this25;
  struct Shape* base30 = (struct Shape*)((char *)t29 + 0);
  Shape__Shape(base30);
  if (__cir_exc_active) {
    return;
  }
    void* v31 = (void*)&_ZTV8Triangle[2];
    void** v32 = (void**)t29;
    *(void**)(v32) = (void*)v31;
    int t33 = s126;
    t29->a = t33;
    int t34 = s227;
    t29->b = t34;
    int t35 = s328;
    t29->c = t35;
  return;
}

// function: _ZN9RectangleC2Eii
void Rectangle__Rectangle(struct Rectangle* v36, int v37, int v38) {
bb39:
  struct Rectangle* this40;
  int len41;
  int width42;
  this40 = v36;
  len41 = v37;
  width42 = v38;
  struct Rectangle* t43 = this40;
  struct Shape* base44 = (struct Shape*)((char *)t43 + 0);
  Shape__Shape(base44);
  if (__cir_exc_active) {
    return;
  }
    void* v45 = (void*)&_ZTV9Rectangle[2];
    void** v46 = (void**)t43;
    *(void**)(v46) = (void*)v45;
    int t47 = len41;
    t43->l = t47;
    int t48 = width42;
    t43->w = t48;
  return;
}

// function: _ZN6SquareC2Ei
void Square__Square(struct Square* v49, int v50) {
bb51:
  struct Square* this52;
  int s53;
  this52 = v49;
  s53 = v50;
  struct Square* t54 = this52;
  struct Shape* base55 = (struct Shape*)((char *)t54 + 0);
  Shape__Shape(base55);
  if (__cir_exc_active) {
    return;
  }
    void* v56 = (void*)&_ZTV6Square[2];
    void** v57 = (void**)t54;
    *(void**)(v57) = (void*)v56;
    int t58 = s53;
    t54->e = t58;
  return;
}

// function: _Z12createShapesPP5Shape
void createShapes(struct Shape** v59) {
bb60:
  struct Shape** shapes61;
  struct Point* __new_result62;
  struct Triangle* __new_result63;
  struct Rectangle* __new_result64;
  struct Square* __new_result65;
  shapes61 = v59;
  unsigned long c66 = 16;
  void* r67 = operator_new(c66);
  if (__cir_exc_active) {
    return;
  }
    struct Point* cast68 = (struct Point*)r67;
    __new_result62 = cast68;
    int c69 = 1;
    int c70 = 2;
    Point__Point(cast68, c69, c70);
    if (__cir_exc_active) {
      {
        operator_delete(r67, c66);
      }
      return;
    }
  struct Point* t71 = __new_result62;
  struct Shape* base72 = (struct Shape*)((char *)t71 + 0);
  long c73 = 0;
  struct Shape** t74 = shapes61;
  struct Shape** ptr75 = &(t74)[c73];
  *ptr75 = base72;
  unsigned long c76 = 24;
  void* r77 = operator_new(c76);
  if (__cir_exc_active) {
    return;
  }
    struct Triangle* cast78 = (struct Triangle*)r77;
    __new_result63 = cast78;
    int c79 = 2;
    int c80 = 3;
    int c81 = 4;
    Triangle__Triangle(cast78, c79, c80, c81);
    if (__cir_exc_active) {
      {
        operator_delete(r77, c76);
      }
      return;
    }
  struct Triangle* t82 = __new_result63;
  struct Shape* base83 = (struct Shape*)((char *)t82 + 0);
  long c84 = 1;
  struct Shape** t85 = shapes61;
  struct Shape** ptr86 = &(t85)[c84];
  *ptr86 = base83;
  unsigned long c87 = 16;
  void* r88 = operator_new(c87);
  if (__cir_exc_active) {
    return;
  }
    struct Rectangle* cast89 = (struct Rectangle*)r88;
    __new_result64 = cast89;
    int c90 = 3;
    int c91 = 4;
    Rectangle__Rectangle(cast89, c90, c91);
    if (__cir_exc_active) {
      {
        operator_delete(r88, c87);
      }
      return;
    }
  struct Rectangle* t92 = __new_result64;
  struct Shape* base93 = (struct Shape*)((char *)t92 + 0);
  long c94 = 2;
  struct Shape** t95 = shapes61;
  struct Shape** ptr96 = &(t95)[c94];
  *ptr96 = base93;
  unsigned long c97 = 16;
  void* r98 = operator_new(c97);
  if (__cir_exc_active) {
    return;
  }
    struct Square* cast99 = (struct Square*)r98;
    __new_result65 = cast99;
    int c100 = 4;
    Square__Square(cast99, c100);
    if (__cir_exc_active) {
      {
        operator_delete(r98, c97);
      }
      return;
    }
  struct Square* t101 = __new_result65;
  struct Shape* base102 = (struct Shape*)((char *)t101 + 0);
  long c103 = 3;
  struct Shape** t104 = shapes61;
  struct Shape** ptr105 = &(t104)[c103];
  *ptr105 = base102;
  return;
}

// function: _Z7reShapePP5Shape
void reShape(struct Shape** v106) {
bb107:
  struct Shape** shapes108;
  shapes108 = v106;
    struct PointReshapeException* s109;
    struct RectangleReshapeException* s110;
    struct TriangleReshapeException* r111;
    struct ReshapeException* s112;
      long c114 = 0;
      struct Shape** t115 = shapes108;
      struct Shape** ptr116 = &(t115)[c114];
      struct Shape* t117 = *ptr116;
      void** v118 = (void**)t117;
      void* v119 = *((void**)v118);
      __VERIFIER_virtual_call_void(t117, 0);
      if (__cir_exc_active) {
        goto cir_try_dispatch113;
      }
      long c122 = 1;
      struct Shape** t123 = shapes108;
      struct Shape** ptr124 = &(t123)[c122];
      struct Shape* t125 = *ptr124;
      void** v126 = (void**)t125;
      void* v127 = *((void**)v126);
      __VERIFIER_virtual_call_void(t125, 0);
      if (__cir_exc_active) {
        goto cir_try_dispatch113;
      }
      long c130 = 2;
      struct Shape** t131 = shapes108;
      struct Shape** ptr132 = &(t131)[c130];
      struct Shape* t133 = *ptr132;
      void** v134 = (void**)t133;
      void* v135 = *((void**)v134);
      __VERIFIER_virtual_call_void(t133, 0);
      if (__cir_exc_active) {
        goto cir_try_dispatch113;
      }
      long c138 = 3;
      struct Shape** t139 = shapes108;
      struct Shape** ptr140 = &(t139)[c138];
      struct Shape* t141 = *ptr140;
      void** v142 = (void**)t141;
      void* v143 = *((void**)v142);
      __VERIFIER_virtual_call_void(t141, 0);
      if (__cir_exc_active) {
        goto cir_try_dispatch113;
      }
    cir_try_dispatch113: ;
    if (__cir_exc_active) {
    if (__cir_exc_type == (const void*)__cir_eh_type__ZTI21PointReshapeException) {
      int ca_tok146 = 0;
      void* ca_exn147 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        s109 = (struct PointReshapeException*)__cir_exc_ptr;
        char* cast148 = (char*)&(_str);
        int r149 = printf(cast148);
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
    else if (__cir_exc_type == (const void*)__cir_eh_type__ZTI25RectangleReshapeException) {
      int ca_tok150 = 0;
      void* ca_exn151 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        s110 = (struct RectangleReshapeException*)__cir_exc_ptr;
        char* cast152 = (char*)&(_str_1);
        int r153 = printf(cast152);
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
    else if (__cir_exc_type == (const void*)__cir_eh_type__ZTI24TriangleReshapeException) {
      int ca_tok154 = 0;
      void* ca_exn155 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        r111 = (struct TriangleReshapeException*)__cir_exc_ptr;
        char* cast156 = (char*)&(_str);
        int r157 = printf(cast156);
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
    else if (__cir_exc_type == (const void*)__cir_eh_type__ZTI16ReshapeException) {
      int ca_tok158 = 0;
      void* ca_exn159 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        s112 = (struct ReshapeException*)__cir_exc_ptr;
        char* cast160 = (char*)&(_str_2);
        int r161 = printf(cast160);
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

// function: _ZN5ShapeD2Ev
void Shape___Shape(struct Shape* v162) {
bb163:
  struct Shape* this164;
  this164 = v162;
  struct Shape* t165 = this164;
  return;
}

// function: _Z12deleteShapesPP5Shape
void deleteShapes(struct Shape** v166) {
bb167:
  struct Shape** shapes168;
  shapes168 = v166;
  long c169 = 0;
  struct Shape** t170 = shapes168;
  struct Shape** ptr171 = &(t170)[c169];
  struct Shape* t172 = *ptr171;
  struct Shape* c173 = ((void*)0);
  _Bool c174 = ((t172 != c173)) ? 1 : 0;
  if (c174) {
      Shape___Shape(t172);
    {
      void* cast175 = (void*)t172;
      unsigned long c176 = 8;
      operator_delete(cast175, c176);
    }
  }
  long c177 = 1;
  struct Shape** t178 = shapes168;
  struct Shape** ptr179 = &(t178)[c177];
  struct Shape* t180 = *ptr179;
  struct Shape* c181 = ((void*)0);
  _Bool c182 = ((t180 != c181)) ? 1 : 0;
  if (c182) {
      Shape___Shape(t180);
    {
      void* cast183 = (void*)t180;
      unsigned long c184 = 8;
      operator_delete(cast183, c184);
    }
  }
  long c185 = 2;
  struct Shape** t186 = shapes168;
  struct Shape** ptr187 = &(t186)[c185];
  struct Shape* t188 = *ptr187;
  struct Shape* c189 = ((void*)0);
  _Bool c190 = ((t188 != c189)) ? 1 : 0;
  if (c190) {
      Shape___Shape(t188);
    {
      void* cast191 = (void*)t188;
      unsigned long c192 = 8;
      operator_delete(cast191, c192);
    }
  }
  long c193 = 3;
  struct Shape** t194 = shapes168;
  struct Shape** ptr195 = &(t194)[c193];
  struct Shape* t196 = *ptr195;
  struct Shape* c197 = ((void*)0);
  _Bool c198 = ((t196 != c197)) ? 1 : 0;
  if (c198) {
      Shape___Shape(t196);
    {
      void* cast199 = (void*)t196;
      unsigned long c200 = 8;
      operator_delete(cast199, c200);
    }
  }
  return;
}

// function: main
int main() {
bb201:
  int __retval202;
  struct Shape* shapes203[4];
  int c204 = 0;
  __retval202 = c204;
  // array copy
  __builtin_memcpy(shapes203, __const_main_shapes, (unsigned long)4 * sizeof(__const_main_shapes[0]));
      struct Shape** cast206 = (struct Shape**)&(shapes203);
      createShapes(cast206);
      if (__cir_exc_active) {
        goto cir_try_dispatch205;
      }
      struct Shape** cast207 = (struct Shape**)&(shapes203);
      reShape(cast207);
      if (__cir_exc_active) {
        goto cir_try_dispatch205;
      }
      struct Shape** cast208 = (struct Shape**)&(shapes203);
      deleteShapes(cast208);
      if (__cir_exc_active) {
        goto cir_try_dispatch205;
      }
    cir_try_dispatch205: ;
    if (__cir_exc_active) {
    {
      int ca_tok209 = 0;
      void* ca_exn210 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        char* cast211 = (char*)&(_str_3);
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
    }
  int c213 = 0;
  __retval202 = c213;
  int t214 = __retval202;
  return t214;
}

// function: _ZN5ShapeC2Ev
void Shape__Shape(struct Shape* v215) {
bb216:
  struct Shape* this217;
  this217 = v215;
  struct Shape* t218 = this217;
  void* v219 = (void*)&_ZTV5Shape[2];
  void** v220 = (void**)t218;
  *(void**)(v220) = (void*)v219;
  return;
}

// function: _ZN21PointReshapeExceptionC2Ev
void PointReshapeException__PointReshapeException(struct PointReshapeException* v221) {
bb222:
  struct PointReshapeException* this224;
  this224 = v221;
  struct PointReshapeException* t225 = this224;
  goto ERROR;
bb223:
ERROR: ;
  return;
}

// function: _ZN5Point7reshapeEv
void Point__reshape(struct Point* v226) {
bb227:
  struct Point* this228;
  this228 = v226;
  struct Point* t229 = this228;
    int r230 = hrandom();
    if (__cir_exc_active) {
      return;
    }
    _Bool cast231 = (_Bool)r230;
    if (cast231) {
      static char exc_buf232[1] = {0};
      struct PointReshapeException* exc233 = (struct PointReshapeException*)exc_buf232;
      PointReshapeException__PointReshapeException(exc233);
      if (__cir_exc_active) {
        return;
      }
      __cir_exc_ptr = (void*)exc233;
      __cir_exc_dtor = (void*)0;
      __cir_exc_type = (const void*)__cir_eh_type__ZTI21PointReshapeException;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI21PointReshapeException;
      __cir_exc_active = 1;
      return;
      __builtin_unreachable();
    }
  return;
}

// function: _ZN16ReshapeExceptionC2Ev
void ReshapeException__ReshapeException(struct ReshapeException* v234) {
bb235:
  struct ReshapeException* this237;
  this237 = v234;
  struct ReshapeException* t238 = this237;
  goto ERROR;
bb236:
ERROR: ;
  return;
}

// function: _ZN5Shape7reshapeEv
void Shape__reshape(struct Shape* v239) {
bb240:
  struct Shape* this241;
  this241 = v239;
  struct Shape* t242 = this241;
    int r243 = hrandom();
    if (__cir_exc_active) {
      return;
    }
    _Bool cast244 = (_Bool)r243;
    if (cast244) {
      static char exc_buf245[1] = {0};
      struct ReshapeException* exc246 = (struct ReshapeException*)exc_buf245;
      ReshapeException__ReshapeException(exc246);
      if (__cir_exc_active) {
        return;
      }
      __cir_exc_ptr = (void*)exc246;
      __cir_exc_dtor = (void*)0;
      __cir_exc_type = (const void*)__cir_eh_type__ZTI16ReshapeException;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI16ReshapeException;
      __cir_exc_active = 1;
      return;
      __builtin_unreachable();
    }
  return;
}

// function: _ZN24TriangleReshapeExceptionC2Ev
void TriangleReshapeException__TriangleReshapeException(struct TriangleReshapeException* v247) {
bb248:
  struct TriangleReshapeException* this250;
  this250 = v247;
  struct TriangleReshapeException* t251 = this250;
  goto ERROR;
bb249:
ERROR: ;
  return;
}

// function: _ZN8Triangle7reshapeEv
void Triangle__reshape(struct Triangle* v252) {
bb253:
  struct Triangle* this254;
  this254 = v252;
  struct Triangle* t255 = this254;
    int r256 = hrandom();
    if (__cir_exc_active) {
      return;
    }
    _Bool cast257 = (_Bool)r256;
    if (cast257) {
      static char exc_buf258[1] = {0};
      struct TriangleReshapeException* exc259 = (struct TriangleReshapeException*)exc_buf258;
      TriangleReshapeException__TriangleReshapeException(exc259);
      if (__cir_exc_active) {
        return;
      }
      __cir_exc_ptr = (void*)exc259;
      __cir_exc_dtor = (void*)0;
      __cir_exc_type = (const void*)__cir_eh_type__ZTI24TriangleReshapeException;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI24TriangleReshapeException;
      __cir_exc_active = 1;
      return;
      __builtin_unreachable();
    }
  return;
}

// function: _ZN25RectangleReshapeExceptionC2Ev
void RectangleReshapeException__RectangleReshapeException(struct RectangleReshapeException* v260) {
bb261:
  struct RectangleReshapeException* this263;
  this263 = v260;
  struct RectangleReshapeException* t264 = this263;
  goto ERROR;
bb262:
ERROR: ;
  return;
}

// function: _ZN9Rectangle7reshapeEv
void Rectangle__reshape(struct Rectangle* v265) {
bb266:
  struct Rectangle* this267;
  this267 = v265;
  struct Rectangle* t268 = this267;
    int r269 = hrandom();
    if (__cir_exc_active) {
      return;
    }
    _Bool cast270 = (_Bool)r269;
    if (cast270) {
      static char exc_buf271[1] = {0};
      struct RectangleReshapeException* exc272 = (struct RectangleReshapeException*)exc_buf271;
      RectangleReshapeException__RectangleReshapeException(exc272);
      if (__cir_exc_active) {
        return;
      }
      __cir_exc_ptr = (void*)exc272;
      __cir_exc_dtor = (void*)0;
      __cir_exc_type = (const void*)__cir_eh_type__ZTI25RectangleReshapeException;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI25RectangleReshapeException;
      __cir_exc_active = 1;
      return;
      __builtin_unreachable();
    }
  return;
}

// function: _ZN22SquareReshapeExceptionC2Ev
void SquareReshapeException__SquareReshapeException(struct SquareReshapeException* v273) {
bb274:
  struct SquareReshapeException* this276;
  this276 = v273;
  struct SquareReshapeException* t277 = this276;
  goto ERROR;
bb275:
ERROR: ;
  return;
}

// function: _ZN6Square7reshapeEv
void Square__reshape(struct Square* v278) {
bb279:
  struct Square* this280;
  this280 = v278;
  struct Square* t281 = this280;
    int r282 = hrandom();
    if (__cir_exc_active) {
      return;
    }
    _Bool cast283 = (_Bool)r282;
    if (cast283) {
      static char exc_buf284[1] = {0};
      struct SquareReshapeException* exc285 = (struct SquareReshapeException*)exc_buf284;
      SquareReshapeException__SquareReshapeException(exc285);
      if (__cir_exc_active) {
        return;
      }
      __cir_exc_ptr = (void*)exc285;
      __cir_exc_dtor = (void*)0;
      __cir_exc_type = (const void*)__cir_eh_type__ZTI22SquareReshapeException;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI22SquareReshapeException;
      __cir_exc_active = 1;
      return;
      __builtin_unreachable();
    }
  return;
}

