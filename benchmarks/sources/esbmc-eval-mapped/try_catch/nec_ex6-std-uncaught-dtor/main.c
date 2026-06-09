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
static const char __cir_eh_type__ZTI14HouseException[] = "_ZTI14HouseException";
static const char __cir_eh_type__ZTI20InvalidDoorException[] = "_ZTI20InvalidDoorException";
static const char __cir_eh_type__ZTI20InvalidRoomException[] = "_ZTI20InvalidRoomException";
static const char __cir_eh_type__ZTI20NotOccupiedException[] = "_ZTI20NotOccupiedException";
static const char __cir_eh_type__ZTI22NonEmptyHouseException[] = "_ZTI22NonEmptyHouseException";
static const char __cir_eh_type__ZTI24AlreadyOccupiedException[] = "_ZTI24AlreadyOccupiedException";
static const char __cir_eh_type__ZTI24IndexOutOfBoundException[] = "_ZTI24IndexOutOfBoundException";
static const char __cir_eh_type__ZTI25InvalidRectangleException[] = "_ZTI25InvalidRectangleException";

// Struct definitions (auto-parsed)
struct AlreadyOccupiedException { unsigned char __field0; };
struct Door { struct Rectangle* r; };
struct House { int numRooms; unsigned char __field1[4]; struct Room** rooms; _Bool isOccupied; unsigned char __field4[7]; } __attribute__((packed));
struct HouseException { unsigned char __field0; };
struct IndexOutOfBoundException { unsigned char __field0; };
struct InvalidDoorException { unsigned char __field0; };
struct InvalidRectangleException { unsigned char __field0; };
struct InvalidRoomException { unsigned char __field0; };
struct NonEmptyHouseException { unsigned char __field0; };
struct NotOccupiedException { unsigned char __field0; };
struct Rectangle { int x; int y; int* cells; };
struct Room { struct Door* r; };
struct anon_struct_0 { unsigned char* __field0; unsigned char* __field1; };

extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern unsigned char _ZTI22NonEmptyHouseException[];
extern unsigned char _ZTI24IndexOutOfBoundException[];
extern unsigned char _ZTI24AlreadyOccupiedException[];
extern unsigned char _ZTI14HouseException[];
extern unsigned char _ZTI20InvalidRoomException[];
extern unsigned char _ZTI20InvalidDoorException[];
extern unsigned char _ZTI25InvalidRectangleException[];
extern unsigned char _ZTI20NotOccupiedException[];
char _str[34] = "More than 2 houses not supported\n";
char _str_1[18] = "Exception Caught\n";
char _str_2[22] = "Constructed Rectange\n";
char _str_3[18] = "Constructed Door\n";
char _str_4[18] = "Constructed Room\n";
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS22NonEmptyHouseException[25] = "22NonEmptyHouseException";
char _str_5[19] = "Constructed House\n";
char _ZTS24IndexOutOfBoundException[27] = "24IndexOutOfBoundException";
char _ZTS24AlreadyOccupiedException[27] = "24AlreadyOccupiedException";
char _str_6[25] = "Dtr: Stack Unwind phase\n";
char _ZTS14HouseException[17] = "14HouseException";
char _str_7[17] = "Destroyed House\n";
char _ZTS20InvalidRoomException[23] = "20InvalidRoomException";
char _str_8[16] = "Destroyed Room\n";
char _ZTS20InvalidDoorException[23] = "20InvalidDoorException";
char _str_9[16] = "Destroyed Door\n";
char _ZTS25InvalidRectangleException[28] = "25InvalidRectangleException";
char _str_10[20] = "Destroyed Rectange\n";
char _ZTS20NotOccupiedException[23] = "20NotOccupiedException";
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
void Rectangle__Rectangle(struct Rectangle* p0);
void operator_delete(void* p0, unsigned long p1) { free(p0); }
void Door__Door(struct Door* p0, struct Rectangle* p1);
void Room__Room(struct Room* p0, struct Door* p1);
void NonEmptyHouseException__NonEmptyHouseException(struct NonEmptyHouseException* p0);
void* operator_new__(unsigned long p0) { return malloc(p0); }
void operator_delete__(void* p0, unsigned long p1) { free(p0); }
void House__create(struct House* p0, int p1);
void IndexOutOfBoundException__IndexOutOfBoundException(struct IndexOutOfBoundException* p0);
void House__assignRoom(struct House* p0, int p1, struct Room* p2);
int createSmallHouse(struct House* p0);
int createBigHouse(struct House* p0);
extern long random();
int hrandom();
extern int __gxx_personality_v0();
void House__House(struct House* p0);
void AlreadyOccupiedException__AlreadyOccupiedException(struct AlreadyOccupiedException* p0);
void House__occupy(struct House* p0);
void House___House(struct House* p0);
void NotOccupiedException__NotOccupiedException(struct NotOccupiedException* p0);
void House__leave(struct House* p0);
extern int printf(char* p0, ...);
int main();
void HouseException__HouseException(struct HouseException* p0);
void Room___Room(struct Room* p0);
void InvalidRoomException__InvalidRoomException(struct InvalidRoomException* p0);
void Door___Door(struct Door* p0);
void InvalidDoorException__InvalidDoorException(struct InvalidDoorException* p0);
void Rectangle___Rectangle(struct Rectangle* p0);
void InvalidRectangleException__InvalidRectangleException(struct InvalidRectangleException* p0);

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _ZN9RectangleC2Ev
void Rectangle__Rectangle(struct Rectangle* v0) {
bb1:
  struct Rectangle* this2;
  this2 = v0;
  struct Rectangle* t3 = this2;
  char* cast4 = (char*)&(_str_2);
  int r5 = printf(cast4);
  if (__cir_exc_active) {
    return;
  }
  int c6 = -1;
  t3->x = c6;
  int c7 = -1;
  t3->y = c7;
  int* c8 = ((void*)0);
  t3->cells = c8;
  return;
}

// function: _ZN4DoorC2EP9Rectangle
void Door__Door(struct Door* v9, struct Rectangle* v10) {
bb11:
  struct Door* this12;
  struct Rectangle* pr13;
  this12 = v9;
  pr13 = v10;
  struct Door* t14 = this12;
  char* cast15 = (char*)&(_str_3);
  int r16 = printf(cast15);
  if (__cir_exc_active) {
    return;
  }
  struct Rectangle* t17 = pr13;
  t14->r = t17;
  return;
}

// function: _ZN4RoomC2EP4Door
void Room__Room(struct Room* v18, struct Door* v19) {
bb20:
  struct Room* this21;
  struct Door* pr22;
  this21 = v18;
  pr22 = v19;
  struct Room* t23 = this21;
  char* cast24 = (char*)&(_str_4);
  int r25 = printf(cast24);
  if (__cir_exc_active) {
    return;
  }
  struct Door* t26 = pr22;
  t23->r = t26;
  return;
}

// function: _ZN22NonEmptyHouseExceptionC2Ev
void NonEmptyHouseException__NonEmptyHouseException(struct NonEmptyHouseException* v27) {
bb28:
  struct NonEmptyHouseException* this30;
  this30 = v27;
  struct NonEmptyHouseException* t31 = this30;
  goto ERROR;
bb29:
ERROR: ;
  return;
}

// function: _ZN5House6createEi
void House__create(struct House* v32, int v33) {
bb34:
  struct House* this35;
  int numR36;
  struct Room** __new_result37;
  this35 = v32;
  numR36 = v33;
  struct House* t38 = this35;
    int t39 = t38->numRooms;
    int c40 = 0;
    _Bool c41 = ((t39 != c40)) ? 1 : 0;
    if (c41) {
      static char exc_buf42[1] = {0};
      struct NonEmptyHouseException* exc43 = (struct NonEmptyHouseException*)exc_buf42;
      NonEmptyHouseException__NonEmptyHouseException(exc43);
      if (__cir_exc_active) {
        return;
      }
      __cir_exc_ptr = (void*)exc43;
      __cir_exc_dtor = (void*)0;
      __cir_exc_type = (const void*)__cir_eh_type__ZTI22NonEmptyHouseException;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI22NonEmptyHouseException;
      __cir_exc_active = 1;
      return;
      __builtin_unreachable();
    }
  int t44 = numR36;
  t38->numRooms = t44;
  int t45 = t38->numRooms;
  unsigned long cast46 = (unsigned long)t45;
  unsigned long c47 = 8;
  unsigned long ovr48;
  _Bool ovf49 = __builtin_mul_overflow(cast46, c47, &ovr48);
  unsigned long c50 = -1;
  unsigned long sel51 = ovf49 ? c50 : ovr48;
  void* r52 = operator_new__(sel51);
  if (__cir_exc_active) {
    return;
  }
    struct Room** cast53 = (struct Room**)r52;
    __new_result37 = cast53;
  struct Room** t54 = __new_result37;
  t38->rooms = t54;
  _Bool c55 = 0;
  t38->isOccupied = c55;
  char* cast56 = (char*)&(_str_5);
  int r57 = printf(cast56);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN24IndexOutOfBoundExceptionC2Ev
void IndexOutOfBoundException__IndexOutOfBoundException(struct IndexOutOfBoundException* v58) {
bb59:
  struct IndexOutOfBoundException* this61;
  this61 = v58;
  struct IndexOutOfBoundException* t62 = this61;
  goto ERROR;
bb60:
ERROR: ;
  return;
}

// function: _ZN5House10assignRoomEiP4Room
void House__assignRoom(struct House* v63, int v64, struct Room* v65) {
bb66:
  struct House* this67;
  int index68;
  struct Room* r69;
  this67 = v63;
  index68 = v64;
  r69 = v65;
  struct House* t70 = this67;
    int t71 = index68;
    int t72 = t70->numRooms;
    _Bool c73 = ((t71 > t72)) ? 1 : 0;
    _Bool ternary74;
    if (c73) {
      _Bool c75 = 1;
      ternary74 = (_Bool)c75;
    } else {
      int t76 = index68;
      int c77 = 0;
      _Bool c78 = ((t76 < c77)) ? 1 : 0;
      ternary74 = (_Bool)c78;
    }
    if (ternary74) {
      static char exc_buf79[1] = {0};
      struct IndexOutOfBoundException* exc80 = (struct IndexOutOfBoundException*)exc_buf79;
      IndexOutOfBoundException__IndexOutOfBoundException(exc80);
      if (__cir_exc_active) {
        return;
      }
      __cir_exc_ptr = (void*)exc80;
      __cir_exc_dtor = (void*)0;
      __cir_exc_type = (const void*)__cir_eh_type__ZTI24IndexOutOfBoundException;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI24IndexOutOfBoundException;
      __cir_exc_active = 1;
      return;
      __builtin_unreachable();
    }
  struct Room* t81 = r69;
  int t82 = index68;
  long cast83 = (long)t82;
  struct Room** t84 = t70->rooms;
  struct Room** ptr85 = &(t84)[cast83];
  *ptr85 = t81;
  return;
}

// function: _Z16createSmallHouseR5House
int createSmallHouse(struct House* v86) {
bb87:
  struct House* h88;
  int __retval89;
  struct Rectangle* r190;
  struct Rectangle* r291;
  struct Rectangle* r392;
  struct Rectangle* __new_result93;
  struct Rectangle* __new_result94;
  struct Rectangle* __new_result95;
  struct Door* d196;
  struct Door* __new_result97;
  struct Door* d298;
  struct Door* __new_result99;
  struct Door* d3100;
  struct Door* __new_result101;
  struct Room* ro1102;
  struct Room* __new_result103;
  struct Room* ro2104;
  struct Room* __new_result105;
  struct Room* ro3106;
  struct Room* __new_result107;
  h88 = v86;
  struct Rectangle* c108 = ((void*)0);
  r190 = c108;
  struct Rectangle* c109 = ((void*)0);
  r291 = c109;
  struct Rectangle* c110 = ((void*)0);
  r392 = c110;
  unsigned long c111 = 16;
  void* r112 = operator_new(c111);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    struct Rectangle* cast113 = (struct Rectangle*)r112;
    __new_result93 = cast113;
    Rectangle__Rectangle(cast113);
    if (__cir_exc_active) {
      {
        operator_delete(r112, c111);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  struct Rectangle* t114 = __new_result93;
  r190 = t114;
  int c115 = 4;
  struct Rectangle* t116 = r190;
  t116->x = c115;
  int c117 = 5;
  struct Rectangle* t118 = r190;
  t118->y = c117;
  unsigned long c119 = 16;
  void* r120 = operator_new(c119);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    struct Rectangle* cast121 = (struct Rectangle*)r120;
    __new_result94 = cast121;
    Rectangle__Rectangle(cast121);
    if (__cir_exc_active) {
      {
        operator_delete(r120, c119);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  struct Rectangle* t122 = __new_result94;
  r291 = t122;
  int c123 = 8;
  struct Rectangle* t124 = r291;
  t124->x = c123;
  int c125 = 9;
  struct Rectangle* t126 = r291;
  t126->y = c125;
  unsigned long c127 = 16;
  void* r128 = operator_new(c127);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    struct Rectangle* cast129 = (struct Rectangle*)r128;
    __new_result95 = cast129;
    Rectangle__Rectangle(cast129);
    if (__cir_exc_active) {
      {
        operator_delete(r128, c127);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  struct Rectangle* t130 = __new_result95;
  r392 = t130;
  int c131 = 10;
  struct Rectangle* t132 = r392;
  t132->x = c131;
  int c133 = 11;
  struct Rectangle* t134 = r392;
  t134->y = c133;
  unsigned long c135 = 8;
  void* r136 = operator_new(c135);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    struct Door* cast137 = (struct Door*)r136;
    __new_result97 = cast137;
    struct Rectangle* t138 = r190;
    Door__Door(cast137, t138);
    if (__cir_exc_active) {
      {
        operator_delete(r136, c135);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  struct Door* t139 = __new_result97;
  d196 = t139;
  unsigned long c140 = 8;
  void* r141 = operator_new(c140);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    struct Door* cast142 = (struct Door*)r141;
    __new_result99 = cast142;
    struct Rectangle* t143 = r291;
    Door__Door(cast142, t143);
    if (__cir_exc_active) {
      {
        operator_delete(r141, c140);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  struct Door* t144 = __new_result99;
  d298 = t144;
  unsigned long c145 = 8;
  void* r146 = operator_new(c145);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    struct Door* cast147 = (struct Door*)r146;
    __new_result101 = cast147;
    struct Rectangle* t148 = r392;
    Door__Door(cast147, t148);
    if (__cir_exc_active) {
      {
        operator_delete(r146, c145);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  struct Door* t149 = __new_result101;
  d3100 = t149;
  unsigned long c150 = 8;
  void* r151 = operator_new(c150);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    struct Room* cast152 = (struct Room*)r151;
    __new_result103 = cast152;
    struct Door* t153 = d196;
    Room__Room(cast152, t153);
    if (__cir_exc_active) {
      {
        operator_delete(r151, c150);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  struct Room* t154 = __new_result103;
  ro1102 = t154;
  unsigned long c155 = 8;
  void* r156 = operator_new(c155);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    struct Room* cast157 = (struct Room*)r156;
    __new_result105 = cast157;
    struct Door* t158 = d298;
    Room__Room(cast157, t158);
    if (__cir_exc_active) {
      {
        operator_delete(r156, c155);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  struct Room* t159 = __new_result105;
  ro2104 = t159;
  unsigned long c160 = 8;
  void* r161 = operator_new(c160);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    struct Room* cast162 = (struct Room*)r161;
    __new_result107 = cast162;
    struct Door* t163 = d3100;
    Room__Room(cast162, t163);
    if (__cir_exc_active) {
      {
        operator_delete(r161, c160);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  struct Room* t164 = __new_result107;
  ro3106 = t164;
  struct House* t165 = h88;
  int c166 = 3;
  House__create(t165, c166);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  struct House* t167 = h88;
  int c168 = 0;
  struct Room* t169 = ro1102;
  House__assignRoom(t167, c168, t169);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  struct House* t170 = h88;
  int c171 = 1;
  struct Room* t172 = ro2104;
  House__assignRoom(t170, c171, t172);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  struct House* t173 = h88;
  int c174 = 2;
  struct Room* t175 = ro3106;
  House__assignRoom(t173, c174, t175);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  abort();
}

// function: _Z14createBigHouseR5House
int createBigHouse(struct House* v176) {
bb177:
  struct House* h178;
  int __retval179;
  struct Rectangle* r1180;
  struct Rectangle* r2181;
  struct Rectangle* r3182;
  struct Rectangle* __new_result183;
  struct Rectangle* __new_result184;
  struct Door* d1185;
  struct Door* __new_result186;
  struct Door* d2187;
  struct Door* __new_result188;
  struct Door* d3189;
  struct Door* __new_result190;
  struct Room* ro1191;
  struct Room* __new_result192;
  struct Room* ro2193;
  struct Room* __new_result194;
  struct Room* ro3195;
  struct Room* __new_result196;
  h178 = v176;
  struct Rectangle* c197 = ((void*)0);
  r1180 = c197;
  struct Rectangle* c198 = ((void*)0);
  r2181 = c198;
  struct Rectangle* c199 = ((void*)0);
  r3182 = c199;
  unsigned long c200 = 16;
  void* r201 = operator_new(c200);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    struct Rectangle* cast202 = (struct Rectangle*)r201;
    __new_result183 = cast202;
    Rectangle__Rectangle(cast202);
    if (__cir_exc_active) {
      {
        operator_delete(r201, c200);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  struct Rectangle* t203 = __new_result183;
  r1180 = t203;
  int c204 = 49;
  struct Rectangle* t205 = r1180;
  t205->x = c204;
  int c206 = 53;
  struct Rectangle* t207 = r1180;
  t207->y = c206;
  unsigned long c208 = 16;
  void* r209 = operator_new(c208);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    struct Rectangle* cast210 = (struct Rectangle*)r209;
    __new_result184 = cast210;
    Rectangle__Rectangle(cast210);
    if (__cir_exc_active) {
      {
        operator_delete(r209, c208);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  struct Rectangle* t211 = __new_result184;
  r2181 = t211;
  int c212 = 82;
  struct Rectangle* t213 = r2181;
  t213->x = c212;
  int c214 = 94;
  struct Rectangle* t215 = r2181;
  t215->y = c214;
  unsigned long c216 = 8;
  void* r217 = operator_new(c216);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    struct Door* cast218 = (struct Door*)r217;
    __new_result186 = cast218;
    struct Rectangle* t219 = r1180;
    Door__Door(cast218, t219);
    if (__cir_exc_active) {
      {
        operator_delete(r217, c216);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  struct Door* t220 = __new_result186;
  d1185 = t220;
  unsigned long c221 = 8;
  void* r222 = operator_new(c221);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    struct Door* cast223 = (struct Door*)r222;
    __new_result188 = cast223;
    struct Rectangle* t224 = r2181;
    Door__Door(cast223, t224);
    if (__cir_exc_active) {
      {
        operator_delete(r222, c221);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  struct Door* t225 = __new_result188;
  d2187 = t225;
  unsigned long c226 = 8;
  void* r227 = operator_new(c226);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    struct Door* cast228 = (struct Door*)r227;
    __new_result190 = cast228;
    struct Rectangle* t229 = r3182;
    Door__Door(cast228, t229);
    if (__cir_exc_active) {
      {
        operator_delete(r227, c226);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  struct Door* t230 = __new_result190;
  d3189 = t230;
  unsigned long c231 = 8;
  void* r232 = operator_new(c231);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    struct Room* cast233 = (struct Room*)r232;
    __new_result192 = cast233;
    struct Door* t234 = d1185;
    Room__Room(cast233, t234);
    if (__cir_exc_active) {
      {
        operator_delete(r232, c231);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  struct Room* t235 = __new_result192;
  ro1191 = t235;
  unsigned long c236 = 8;
  void* r237 = operator_new(c236);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    struct Room* cast238 = (struct Room*)r237;
    __new_result194 = cast238;
    struct Door* t239 = d2187;
    Room__Room(cast238, t239);
    if (__cir_exc_active) {
      {
        operator_delete(r237, c236);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  struct Room* t240 = __new_result194;
  ro2193 = t240;
  unsigned long c241 = 8;
  void* r242 = operator_new(c241);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    struct Room* cast243 = (struct Room*)r242;
    __new_result196 = cast243;
    struct Door* t244 = d3189;
    Room__Room(cast243, t244);
    if (__cir_exc_active) {
      {
        operator_delete(r242, c241);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  struct Room* t245 = __new_result196;
  ro3195 = t245;
  struct House* t246 = h178;
  int c247 = 3;
  House__create(t246, c247);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  struct House* t248 = h178;
  int c249 = 0;
  struct Room* t250 = ro1191;
  House__assignRoom(t248, c249, t250);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  struct House* t251 = h178;
  int c252 = 1;
  struct Room* t253 = ro2193;
  House__assignRoom(t251, c252, t253);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  struct House* t254 = h178;
  int c255 = 2;
  struct Room* t256 = ro3195;
  House__assignRoom(t254, c255, t256);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  abort();
}

// function: _Z7hrandomv
int hrandom() {
bb257:
  int __retval258;
  long r259 = random();
  long c260 = 2;
  long b261 = r259 % c260;
  int cast262 = (int)b261;
  __retval258 = cast262;
  int t263 = __retval258;
  return t263;
}

// function: _ZN5HouseC2Ev
void House__House(struct House* v264) {
bb265:
  struct House* this266;
  this266 = v264;
  struct House* t267 = this266;
  char* cast268 = (char*)&(_str_5);
  int r269 = printf(cast268);
  if (__cir_exc_active) {
    return;
  }
  struct Room** c270 = ((void*)0);
  t267->rooms = c270;
  int c271 = 0;
  t267->numRooms = c271;
  _Bool c272 = 0;
  t267->isOccupied = c272;
  return;
}

// function: _ZN24AlreadyOccupiedExceptionC2Ev
void AlreadyOccupiedException__AlreadyOccupiedException(struct AlreadyOccupiedException* v273) {
bb274:
  struct AlreadyOccupiedException* this276;
  this276 = v273;
  struct AlreadyOccupiedException* t277 = this276;
  goto ERROR;
bb275:
ERROR: ;
  return;
}

// function: _ZN5House6occupyEv
void House__occupy(struct House* v278) {
bb279:
  struct House* this280;
  this280 = v278;
  struct House* t281 = this280;
    _Bool t282 = t281->isOccupied;
    if (t282) {
      static char exc_buf283[1] = {0};
      struct AlreadyOccupiedException* exc284 = (struct AlreadyOccupiedException*)exc_buf283;
      AlreadyOccupiedException__AlreadyOccupiedException(exc284);
      if (__cir_exc_active) {
        return;
      }
      __cir_exc_ptr = (void*)exc284;
      __cir_exc_dtor = (void*)0;
      __cir_exc_type = (const void*)__cir_eh_type__ZTI24AlreadyOccupiedException;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI24AlreadyOccupiedException;
      __cir_exc_active = 1;
      return;
      __builtin_unreachable();
    }
  _Bool c285 = 1;
  t281->isOccupied = c285;
  return;
}

// function: _ZN5HouseD2Ev
void House___House(struct House* v286) {
bb287:
  struct House* this288;
  this288 = v286;
  struct House* t289 = this288;
    struct Room** t290 = t289->rooms;
    _Bool cast291 = (_Bool)t290;
    _Bool u292 = !cast291;
    if (u292) {
        _Bool std293;
        __VERIFIER_nondet_memory(&std293, sizeof(std293));
        if (std293) {
          char* cast294 = (char*)&(_str_6);
          int r295 = printf(cast294);
          if (__cir_exc_active) {
            return;
          }
        } else {
          static char exc_buf296[1] = {0};
          struct HouseException* exc297 = (struct HouseException*)exc_buf296;
          HouseException__HouseException(exc297);
          if (__cir_exc_active) {
            return;
          }
          __cir_exc_ptr = (void*)exc297;
          __cir_exc_dtor = (void*)0;
          __cir_exc_type = (const void*)__cir_eh_type__ZTI14HouseException;
          __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI14HouseException;
          __cir_exc_active = 1;
          return;
          __builtin_unreachable();
        }
    }
    int i298;
    int c299 = 0;
    i298 = c299;
    while (1) {
      int t301 = i298;
      int t302 = t289->numRooms;
      _Bool c303 = ((t301 < t302)) ? 1 : 0;
      if (!c303) break;
        struct Room* r304;
        int t305 = i298;
        long cast306 = (long)t305;
        struct Room** t307 = t289->rooms;
        struct Room** ptr308 = &(t307)[cast306];
        struct Room* t309 = *ptr308;
        r304 = t309;
          struct Room* t310 = r304;
          _Bool cast311 = (_Bool)t310;
          if (cast311) {
            struct Room* t312 = r304;
            struct Room* c313 = ((void*)0);
            _Bool c314 = ((t312 != c313)) ? 1 : 0;
            if (c314) {
                Room___Room(t312);
              {
                void* cast315 = (void*)t312;
                unsigned long c316 = 8;
                operator_delete(cast315, c316);
              }
            }
          }
    for_step300: ;
      int t317 = i298;
      int u318 = t317 + 1;
      i298 = u318;
    }
  char* cast319 = (char*)&(_str_7);
  int r320 = printf(cast319);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN20NotOccupiedExceptionC2Ev
void NotOccupiedException__NotOccupiedException(struct NotOccupiedException* v321) {
bb322:
  struct NotOccupiedException* this324;
  this324 = v321;
  struct NotOccupiedException* t325 = this324;
  goto ERROR;
bb323:
ERROR: ;
  return;
}

// function: _ZN5House5leaveEv
void House__leave(struct House* v326) {
bb327:
  struct House* this328;
  this328 = v326;
  struct House* t329 = this328;
    _Bool t330 = t329->isOccupied;
    _Bool u331 = !t330;
    if (u331) {
      static char exc_buf332[1] = {0};
      struct NotOccupiedException* exc333 = (struct NotOccupiedException*)exc_buf332;
      NotOccupiedException__NotOccupiedException(exc333);
      if (__cir_exc_active) {
        return;
      }
      __cir_exc_ptr = (void*)exc333;
      __cir_exc_dtor = (void*)0;
      __cir_exc_type = (const void*)__cir_eh_type__ZTI20NotOccupiedException;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI20NotOccupiedException;
      __cir_exc_active = 1;
      return;
      __builtin_unreachable();
    }
  _Bool c334 = 0;
  t329->isOccupied = c334;
  return;
}

// function: main
int main() {
bb335:
  int __retval336;
  int numHouses337;
  int c338 = 0;
  __retval336 = c338;
  int c339 = 2;
  numHouses337 = c339;
        int t341 = numHouses337;
        int c342 = 2;
        _Bool c343 = ((t341 == c342)) ? 1 : 0;
        if (c343) {
          struct House h1344;
          House__House(&h1344);
          if (__cir_exc_active) {
            goto cir_try_dispatch340;
          }
                int r345 = hrandom();
                if (__cir_exc_active) {
                  {
                    House___House(&h1344);
                  }
                  goto cir_try_dispatch340;
                }
                _Bool cast346 = (_Bool)r345;
                if (cast346) {
                  struct House h2347;
                  House__House(&h2347);
                  if (__cir_exc_active) {
                    {
                      House___House(&h1344);
                    }
                    goto cir_try_dispatch340;
                  }
                    int r348 = createBigHouse(&h1344);
                    if (__cir_exc_active) {
                      {
                        House___House(&h2347);
                      }
                      {
                        House___House(&h1344);
                      }
                      goto cir_try_dispatch340;
                    }
                    int r349 = createSmallHouse(&h2347);
                    if (__cir_exc_active) {
                      {
                        House___House(&h2347);
                      }
                      {
                        House___House(&h1344);
                      }
                      goto cir_try_dispatch340;
                    }
                    House__occupy(&h2347);
                    if (__cir_exc_active) {
                      {
                        House___House(&h2347);
                      }
                      {
                        House___House(&h1344);
                      }
                      goto cir_try_dispatch340;
                    }
                    House__occupy(&h2347);
                    if (__cir_exc_active) {
                      {
                        House___House(&h2347);
                      }
                      {
                        House___House(&h1344);
                      }
                      goto cir_try_dispatch340;
                    }
                  {
                    House___House(&h2347);
                  }
                } else {
                  struct House h2350;
                  House__House(&h2350);
                  if (__cir_exc_active) {
                    {
                      House___House(&h1344);
                    }
                    goto cir_try_dispatch340;
                  }
                    int r351 = createBigHouse(&h1344);
                    if (__cir_exc_active) {
                      {
                        House___House(&h2350);
                      }
                      {
                        House___House(&h1344);
                      }
                      goto cir_try_dispatch340;
                    }
                    House__occupy(&h1344);
                    if (__cir_exc_active) {
                      {
                        House___House(&h2350);
                      }
                      {
                        House___House(&h1344);
                      }
                      goto cir_try_dispatch340;
                    }
                    int r352 = createSmallHouse(&h2350);
                    if (__cir_exc_active) {
                      {
                        House___House(&h2350);
                      }
                      {
                        House___House(&h1344);
                      }
                      goto cir_try_dispatch340;
                    }
                    House__occupy(&h2350);
                    if (__cir_exc_active) {
                      {
                        House___House(&h2350);
                      }
                      {
                        House___House(&h1344);
                      }
                      goto cir_try_dispatch340;
                    }
                    House__leave(&h2350);
                    if (__cir_exc_active) {
                      {
                        House___House(&h2350);
                      }
                      {
                        House___House(&h1344);
                      }
                      goto cir_try_dispatch340;
                    }
                  {
                    House___House(&h2350);
                  }
                }
              House__leave(&h1344);
              if (__cir_exc_active) {
                {
                  House___House(&h1344);
                }
                goto cir_try_dispatch340;
              }
          {
            House___House(&h1344);
          }
        } else {
          char* cast353 = (char*)&(_str);
          int r354 = printf(cast353);
          if (__cir_exc_active) {
            goto cir_try_dispatch340;
          }
        }
    cir_try_dispatch340: ;
    if (__cir_exc_active) {
    {
      int ca_tok355 = 0;
      void* ca_exn356 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        char* cast357 = (char*)&(_str_1);
        int r358 = printf(cast357);
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
  int t359 = __retval336;
  return t359;
}

// function: _ZN14HouseExceptionC2Ev
void HouseException__HouseException(struct HouseException* v360) {
bb361:
  struct HouseException* this363;
  this363 = v360;
  struct HouseException* t364 = this363;
  goto ERROR;
bb362:
ERROR: ;
  return;
}

// function: _ZN4RoomD2Ev
void Room___Room(struct Room* v365) {
bb366:
  struct Room* this367;
  this367 = v365;
  struct Room* t368 = this367;
    struct Door* t369 = t368->r;
    _Bool cast370 = (_Bool)t369;
    _Bool u371 = !cast370;
    if (u371) {
        _Bool std372;
        __VERIFIER_nondet_memory(&std372, sizeof(std372));
        if (std372) {
          char* cast373 = (char*)&(_str_6);
          int r374 = printf(cast373);
          if (__cir_exc_active) {
            return;
          }
        } else {
          static char exc_buf375[1] = {0};
          struct InvalidRoomException* exc376 = (struct InvalidRoomException*)exc_buf375;
          InvalidRoomException__InvalidRoomException(exc376);
          if (__cir_exc_active) {
            return;
          }
          __cir_exc_ptr = (void*)exc376;
          __cir_exc_dtor = (void*)0;
          __cir_exc_type = (const void*)__cir_eh_type__ZTI20InvalidRoomException;
          __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI20InvalidRoomException;
          __cir_exc_active = 1;
          return;
          __builtin_unreachable();
        }
    }
    struct Door* t377 = t368->r;
    _Bool cast378 = (_Bool)t377;
    if (cast378) {
      struct Door* t379 = t368->r;
      struct Door* c380 = ((void*)0);
      _Bool c381 = ((t379 != c380)) ? 1 : 0;
      if (c381) {
          Door___Door(t379);
        {
          void* cast382 = (void*)t379;
          unsigned long c383 = 8;
          operator_delete(cast382, c383);
        }
      }
    }
  char* cast384 = (char*)&(_str_8);
  int r385 = printf(cast384);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN20InvalidRoomExceptionC2Ev
void InvalidRoomException__InvalidRoomException(struct InvalidRoomException* v386) {
bb387:
  struct InvalidRoomException* this389;
  this389 = v386;
  struct InvalidRoomException* t390 = this389;
  goto ERROR;
bb388:
ERROR: ;
  return;
}

// function: _ZN4DoorD2Ev
void Door___Door(struct Door* v391) {
bb392:
  struct Door* this393;
  this393 = v391;
  struct Door* t394 = this393;
    struct Rectangle* t395 = t394->r;
    _Bool cast396 = (_Bool)t395;
    _Bool u397 = !cast396;
    if (u397) {
        _Bool std398;
        __VERIFIER_nondet_memory(&std398, sizeof(std398));
        if (std398) {
          char* cast399 = (char*)&(_str_6);
          int r400 = printf(cast399);
          if (__cir_exc_active) {
            return;
          }
        } else {
          static char exc_buf401[1] = {0};
          struct InvalidDoorException* exc402 = (struct InvalidDoorException*)exc_buf401;
          InvalidDoorException__InvalidDoorException(exc402);
          if (__cir_exc_active) {
            return;
          }
          __cir_exc_ptr = (void*)exc402;
          __cir_exc_dtor = (void*)0;
          __cir_exc_type = (const void*)__cir_eh_type__ZTI20InvalidDoorException;
          __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI20InvalidDoorException;
          __cir_exc_active = 1;
          return;
          __builtin_unreachable();
        }
    }
    struct Rectangle* t403 = t394->r;
    _Bool cast404 = (_Bool)t403;
    if (cast404) {
      struct Rectangle* t405 = t394->r;
      struct Rectangle* c406 = ((void*)0);
      _Bool c407 = ((t405 != c406)) ? 1 : 0;
      if (c407) {
          Rectangle___Rectangle(t405);
        {
          void* cast408 = (void*)t405;
          unsigned long c409 = 16;
          operator_delete(cast408, c409);
        }
      }
    }
  char* cast410 = (char*)&(_str_9);
  int r411 = printf(cast410);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN20InvalidDoorExceptionC2Ev
void InvalidDoorException__InvalidDoorException(struct InvalidDoorException* v412) {
bb413:
  struct InvalidDoorException* this415;
  this415 = v412;
  struct InvalidDoorException* t416 = this415;
  goto ERROR;
bb414:
ERROR: ;
  return;
}

// function: _ZN9RectangleD2Ev
void Rectangle___Rectangle(struct Rectangle* v417) {
bb418:
  struct Rectangle* this419;
  this419 = v417;
  struct Rectangle* t420 = this419;
    int t421 = t420->x;
    int c422 = 0;
    _Bool c423 = ((t421 < c422)) ? 1 : 0;
    _Bool ternary424;
    if (c423) {
      _Bool c425 = 1;
      ternary424 = (_Bool)c425;
    } else {
      int t426 = t420->y;
      int c427 = 0;
      _Bool c428 = ((t426 < c427)) ? 1 : 0;
      ternary424 = (_Bool)c428;
    }
    if (ternary424) {
        _Bool std429;
        __VERIFIER_nondet_memory(&std429, sizeof(std429));
        if (std429) {
          char* cast430 = (char*)&(_str_6);
          int r431 = printf(cast430);
          if (__cir_exc_active) {
            return;
          }
        } else {
          static char exc_buf432[1] = {0};
          struct InvalidRectangleException* exc433 = (struct InvalidRectangleException*)exc_buf432;
          InvalidRectangleException__InvalidRectangleException(exc433);
          if (__cir_exc_active) {
            return;
          }
          __cir_exc_ptr = (void*)exc433;
          __cir_exc_dtor = (void*)0;
          __cir_exc_type = (const void*)__cir_eh_type__ZTI25InvalidRectangleException;
          __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI25InvalidRectangleException;
          __cir_exc_active = 1;
          return;
          __builtin_unreachable();
        }
    }
  char* cast434 = (char*)&(_str_10);
  int r435 = printf(cast434);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN25InvalidRectangleExceptionC2Ev
void InvalidRectangleException__InvalidRectangleException(struct InvalidRectangleException* v436) {
bb437:
  struct InvalidRectangleException* this439;
  this439 = v436;
  struct InvalidRectangleException* t440 = this439;
  goto ERROR;
bb438:
ERROR: ;
  return;
}

