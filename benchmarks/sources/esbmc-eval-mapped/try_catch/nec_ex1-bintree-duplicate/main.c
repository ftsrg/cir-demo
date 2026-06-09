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
static const char __cir_eh_type__ZTI15InsertException[] = "_ZTI15InsertException";

// Struct definitions (auto-parsed)
struct BinaryNode { struct Customer* element; struct BinaryNode* left; struct BinaryNode* right; };
struct BinarySearchTree { struct BinaryNode* root; struct Customer* ITEM_NOT_FOUND; };
struct Customer { long ssn; };
struct InsertException { struct Customer* a; };
struct anon_struct_0 { unsigned char* __field0; unsigned char* __field1; };

extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern unsigned char _ZTI15InsertException[];
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS15InsertException[18] = "15InsertException";
char _str[13] = "Inserted %d\n";
char _str_1[30] = "Could not create Customer:%d\n";
void Customer__Customer_4(struct Customer* p0);
void Customer__Customer_3(struct Customer* p0, long p1);
void Customer__Customer(struct Customer* p0, long p1) { Customer__Customer_3(p0, p1); }
_Bool Customer__operator_(struct Customer* p0, struct Customer* p1);
_Bool lessthan(struct Customer* p0, struct Customer* p1);
extern void *malloc(unsigned long);
extern void free(void*);
void operator_delete(void* p0, unsigned long p1) { free(p0); }
void destroy(struct Customer* p0);
void BinarySearchTree__BinarySearchTree_3(struct BinarySearchTree* p0, struct Customer* p1);
void BinarySearchTree__BinarySearchTree(struct BinarySearchTree* p0, struct Customer* p1) { BinarySearchTree__BinarySearchTree_3(p0, p1); }
struct BinaryNode* BinarySearchTree__clone(struct BinarySearchTree* p0, struct BinaryNode** p1);
struct BinarySearchTree* BinarySearchTree__operator_(struct BinarySearchTree* p0, struct BinarySearchTree* p1);
void BinarySearchTree__BinarySearchTree_4(struct BinarySearchTree* p0, struct BinarySearchTree* p1);
void BinarySearchTree__makeEmptyInternal(struct BinarySearchTree* p0, struct BinaryNode** p1);
void BinarySearchTree__makeEmpty(struct BinarySearchTree* p0);
void BinarySearchTree___BinarySearchTree_2(struct BinarySearchTree* p0);
void BinarySearchTree___BinarySearchTree(struct BinarySearchTree* p0) { BinarySearchTree___BinarySearchTree_2(p0); }
void* operator_new(unsigned long p0) { return malloc(p0); }
void BinaryNode__BinaryNode(struct BinaryNode* p0, struct Customer* p1, struct BinaryNode* p2, struct BinaryNode* p3);
void InsertException__InsertException(struct InsertException* p0, struct Customer* p1);
void InsertException___InsertException(struct InsertException* p0);
void BinarySearchTree__insertInternal(struct BinarySearchTree* p0, struct Customer* p1, struct BinaryNode** p2);
void BinarySearchTree__insert(struct BinarySearchTree* p0, struct Customer* p1);
void BinaryNode___BinaryNode(struct BinaryNode* p0);
void BinarySearchTree__removeInternal(struct BinarySearchTree* p0, struct Customer* p1, struct BinaryNode** p2);
void BinarySearchTree__remove(struct BinarySearchTree* p0, struct Customer* p1);
struct Customer* BinarySearchTree__elementAt(struct BinarySearchTree* p0, struct BinaryNode* p1);
struct BinaryNode* BinarySearchTree__findMin(struct BinarySearchTree* p0, struct BinaryNode* p1);
struct Customer* BinarySearchTree__findMin_2(struct BinarySearchTree* p0);
struct BinaryNode* BinarySearchTree__findMax(struct BinarySearchTree* p0, struct BinaryNode* p1);
struct Customer* BinarySearchTree__findMax_2(struct BinarySearchTree* p0);
struct BinaryNode* BinarySearchTree__find_2(struct BinarySearchTree* p0, struct Customer* p1, struct BinaryNode* p2);
struct Customer* BinarySearchTree__find(struct BinarySearchTree* p0, struct Customer* p1);
_Bool BinarySearchTree__isEmpty(struct BinarySearchTree* p0);
void BinarySearchTree__printTreeInternal(struct BinarySearchTree* p0, struct BinaryNode* p1);
void BinarySearchTree__printTree(struct BinarySearchTree* p0);
extern int __gxx_personality_v0();
extern int printf(char* p0, ...);
int main();

// function: _ZN8CustomerC2Ev
void Customer__Customer_4(struct Customer* v0) {
bb1:
  struct Customer* this2;
  this2 = v0;
  struct Customer* t3 = this2;
  long c4 = -1;
  t3->ssn = c4;
  return;
}

// function: _ZN8CustomerC2El
void Customer__Customer_3(struct Customer* v5, long v6) {
bb7:
  struct Customer* this8;
  long s9;
  this8 = v5;
  s9 = v6;
  struct Customer* t10 = this8;
  long t11 = s9;
  t10->ssn = t11;
  return;
}

// function: _ZN8CustomerltERS_
_Bool Customer__operator_(struct Customer* v12, struct Customer* v13) {
bb14:
  struct Customer* this15;
  struct Customer* rhs16;
  _Bool __retval17;
  this15 = v12;
  rhs16 = v13;
  struct Customer* t18 = this15;
  long t19 = t18->ssn;
  struct Customer* t20 = rhs16;
  long t21 = t20->ssn;
  _Bool c22 = ((t19 < t21)) ? 1 : 0;
  __retval17 = c22;
  _Bool t23 = __retval17;
  return t23;
}

// function: _Z8lessthanP8CustomerS0_
_Bool lessthan(struct Customer* v24, struct Customer* v25) {
bb26:
  struct Customer* lhs27;
  struct Customer* rhs28;
  _Bool __retval29;
  lhs27 = v24;
  rhs28 = v25;
    struct Customer* t30 = lhs27;
    struct Customer* c31 = ((void*)0);
    _Bool c32 = ((t30 == c31)) ? 1 : 0;
    _Bool ternary33;
    if (c32) {
      struct Customer* t34 = rhs28;
      struct Customer* c35 = ((void*)0);
      _Bool c36 = ((t34 != c35)) ? 1 : 0;
      ternary33 = (_Bool)c36;
    } else {
      _Bool c37 = 0;
      ternary33 = (_Bool)c37;
    }
    if (ternary33) {
      _Bool c38 = 1;
      __retval29 = c38;
      _Bool t39 = __retval29;
      return t39;
    } else {
        struct Customer* t40 = lhs27;
        struct Customer* c41 = ((void*)0);
        _Bool c42 = ((t40 != c41)) ? 1 : 0;
        _Bool ternary43;
        if (c42) {
          struct Customer* t44 = rhs28;
          struct Customer* c45 = ((void*)0);
          _Bool c46 = ((t44 == c45)) ? 1 : 0;
          ternary43 = (_Bool)c46;
        } else {
          _Bool c47 = 0;
          ternary43 = (_Bool)c47;
        }
        if (ternary43) {
          _Bool c48 = 0;
          __retval29 = c48;
          _Bool t49 = __retval29;
          return t49;
        } else {
            struct Customer* t50 = lhs27;
            struct Customer* t51 = rhs28;
            _Bool c52 = ((t50 == t51)) ? 1 : 0;
            _Bool ternary53;
            if (c52) {
              struct Customer* t54 = lhs27;
              struct Customer* c55 = ((void*)0);
              _Bool c56 = ((t54 == c55)) ? 1 : 0;
              ternary53 = (_Bool)c56;
            } else {
              _Bool c57 = 0;
              ternary53 = (_Bool)c57;
            }
            if (ternary53) {
              _Bool c58 = 0;
              __retval29 = c58;
              _Bool t59 = __retval29;
              return t59;
            }
        }
    }
  struct Customer* t60 = lhs27;
  long t61 = t60->ssn;
  struct Customer* t62 = rhs28;
  long t63 = t62->ssn;
  _Bool c64 = ((t61 < t63)) ? 1 : 0;
  __retval29 = c64;
  _Bool t65 = __retval29;
  return t65;
}

// function: _Z7destroyP8Customer
void destroy(struct Customer* v66) {
bb67:
  struct Customer* c68;
  c68 = v66;
  struct Customer* t69 = c68;
  struct Customer* c70 = ((void*)0);
  _Bool c71 = ((t69 != c70)) ? 1 : 0;
  if (c71) {
    {
      void* cast72 = (void*)t69;
      unsigned long c73 = 8;
      operator_delete(cast72, c73);
    }
  }
  return;
}

// function: _ZN16BinarySearchTreeC2EP8Customer
void BinarySearchTree__BinarySearchTree_3(struct BinarySearchTree* v74, struct Customer* v75) {
bb76:
  struct BinarySearchTree* this77;
  struct Customer* notFound78;
  this77 = v74;
  notFound78 = v75;
  struct BinarySearchTree* t79 = this77;
  struct BinaryNode* c80 = ((void*)0);
  t79->root = c80;
  struct Customer* t81 = notFound78;
  t79->ITEM_NOT_FOUND = t81;
  return;
}

// function: _ZN16BinarySearchTree5cloneERP10BinaryNode
struct BinaryNode* BinarySearchTree__clone(struct BinarySearchTree* v82, struct BinaryNode** v83) {
bb84:
  struct BinarySearchTree* this85;
  struct BinaryNode** t86;
  struct BinaryNode* __retval87;
  this85 = v82;
  t86 = v83;
  struct BinarySearchTree* t88 = this85;
    struct BinaryNode** t89 = t86;
    struct BinaryNode* t90 = *t89;
    struct BinaryNode* c91 = ((void*)0);
    _Bool c92 = ((t90 == c91)) ? 1 : 0;
    if (c92) {
      struct BinaryNode* c93 = ((void*)0);
      __retval87 = c93;
      struct BinaryNode* t94 = __retval87;
      return t94;
    } else {
      struct BinaryNode* __new_result95;
      unsigned long c96 = 24;
      void* r97 = operator_new(c96);
      if (__cir_exc_active) {
        struct BinaryNode* __cir_eh_ret = (struct BinaryNode*)0;
        return __cir_eh_ret;
      }
        struct BinaryNode* cast98 = (struct BinaryNode*)r97;
        __new_result95 = cast98;
        struct BinaryNode** t99 = t86;
        struct BinaryNode* t100 = *t99;
        struct Customer* t101 = t100->element;
        struct BinaryNode** t102 = t86;
        struct BinaryNode* t103 = *t102;
        struct BinaryNode* r104 = BinarySearchTree__clone(t88, &t103->left);
        if (__cir_exc_active) {
          {
            operator_delete(r97, c96);
          }
          struct BinaryNode* __cir_eh_ret = (struct BinaryNode*)0;
          return __cir_eh_ret;
        }
        struct BinaryNode** t105 = t86;
        struct BinaryNode* t106 = *t105;
        struct BinaryNode* r107 = BinarySearchTree__clone(t88, &t106->right);
        if (__cir_exc_active) {
          {
            operator_delete(r97, c96);
          }
          struct BinaryNode* __cir_eh_ret = (struct BinaryNode*)0;
          return __cir_eh_ret;
        }
        BinaryNode__BinaryNode(cast98, t101, r104, r107);
        if (__cir_exc_active) {
          {
            operator_delete(r97, c96);
          }
          struct BinaryNode* __cir_eh_ret = (struct BinaryNode*)0;
          return __cir_eh_ret;
        }
      struct BinaryNode* t108 = __new_result95;
      __retval87 = t108;
      struct BinaryNode* t109 = __retval87;
      return t109;
    }
  abort();
}

// function: _ZN16BinarySearchTreeaSERS_
struct BinarySearchTree* BinarySearchTree__operator_(struct BinarySearchTree* v110, struct BinarySearchTree* v111) {
bb112:
  struct BinarySearchTree* this113;
  struct BinarySearchTree* rhs114;
  struct BinarySearchTree* __retval115;
  this113 = v110;
  rhs114 = v111;
  struct BinarySearchTree* t116 = this113;
    struct BinarySearchTree* t117 = rhs114;
    _Bool c118 = ((t116 != t117)) ? 1 : 0;
    if (c118) {
      BinarySearchTree__makeEmpty(t116);
      if (__cir_exc_active) {
        struct BinarySearchTree* __cir_eh_ret = (struct BinarySearchTree*)0;
        return __cir_eh_ret;
      }
      struct BinarySearchTree* t119 = rhs114;
      struct BinaryNode* r120 = BinarySearchTree__clone(t116, &t119->root);
      if (__cir_exc_active) {
        struct BinarySearchTree* __cir_eh_ret = (struct BinarySearchTree*)0;
        return __cir_eh_ret;
      }
      t116->root = r120;
    }
  __retval115 = t116;
  struct BinarySearchTree* t121 = __retval115;
  return t121;
}

// function: _ZN16BinarySearchTreeC2ERS_
void BinarySearchTree__BinarySearchTree_4(struct BinarySearchTree* v122, struct BinarySearchTree* v123) {
bb124:
  struct BinarySearchTree* this125;
  struct BinarySearchTree* rhs126;
  this125 = v122;
  rhs126 = v123;
  struct BinarySearchTree* t127 = this125;
  struct BinaryNode* c128 = ((void*)0);
  t127->root = c128;
  struct BinarySearchTree* t129 = rhs126;
  struct Customer* t130 = t129->ITEM_NOT_FOUND;
  t127->ITEM_NOT_FOUND = t130;
  struct BinarySearchTree* t131 = rhs126;
  struct BinarySearchTree* r132 = BinarySearchTree__operator_(t127, t131);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN16BinarySearchTree17makeEmptyInternalERP10BinaryNode
void BinarySearchTree__makeEmptyInternal(struct BinarySearchTree* v133, struct BinaryNode** v134) {
bb135:
  struct BinarySearchTree* this136;
  struct BinaryNode** t137;
  this136 = v133;
  t137 = v134;
  struct BinarySearchTree* t138 = this136;
    struct BinaryNode** t139 = t137;
    struct BinaryNode* t140 = *t139;
    struct BinaryNode* c141 = ((void*)0);
    _Bool c142 = ((t140 != c141)) ? 1 : 0;
    if (c142) {
      struct BinaryNode** t143 = t137;
      struct BinaryNode* t144 = *t143;
      BinarySearchTree__makeEmptyInternal(t138, &t144->left);
      if (__cir_exc_active) {
        return;
      }
      struct BinaryNode** t145 = t137;
      struct BinaryNode* t146 = *t145;
      BinarySearchTree__makeEmptyInternal(t138, &t146->right);
      if (__cir_exc_active) {
        return;
      }
      struct BinaryNode** t147 = t137;
      struct BinaryNode* t148 = *t147;
      struct BinaryNode* c149 = ((void*)0);
      _Bool c150 = ((t148 != c149)) ? 1 : 0;
      if (c150) {
          BinaryNode___BinaryNode(t148);
        {
          void* cast151 = (void*)t148;
          unsigned long c152 = 24;
          operator_delete(cast151, c152);
        }
      }
    }
  struct BinaryNode* c153 = ((void*)0);
  struct BinaryNode** t154 = t137;
  *t154 = c153;
  return;
}

// function: _ZN16BinarySearchTree9makeEmptyEv
void BinarySearchTree__makeEmpty(struct BinarySearchTree* v155) {
bb156:
  struct BinarySearchTree* this157;
  this157 = v155;
  struct BinarySearchTree* t158 = this157;
  BinarySearchTree__makeEmptyInternal(t158, &t158->root);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN16BinarySearchTreeD2Ev
void BinarySearchTree___BinarySearchTree_2(struct BinarySearchTree* v159) {
bb160:
  struct BinarySearchTree* this161;
  this161 = v159;
  struct BinarySearchTree* t162 = this161;
  BinarySearchTree__makeEmpty(t162);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN10BinaryNodeC2EP8CustomerPS_S2_
void BinaryNode__BinaryNode(struct BinaryNode* v163, struct Customer* v164, struct BinaryNode* v165, struct BinaryNode* v166) {
bb167:
  struct BinaryNode* this168;
  struct Customer* theElement169;
  struct BinaryNode* lt170;
  struct BinaryNode* rt171;
  this168 = v163;
  theElement169 = v164;
  lt170 = v165;
  rt171 = v166;
  struct BinaryNode* t172 = this168;
  struct Customer* t173 = theElement169;
  t172->element = t173;
  struct BinaryNode* t174 = lt170;
  t172->left = t174;
  struct BinaryNode* t175 = rt171;
  t172->right = t175;
  return;
}

// function: _ZN15InsertExceptionC2EP8Customer
void InsertException__InsertException(struct InsertException* v176, struct Customer* v177) {
bb178:
  struct InsertException* this180;
  struct Customer* x181;
  this180 = v176;
  x181 = v177;
  struct InsertException* t182 = this180;
  struct Customer* t183 = x181;
  t182->a = t183;
  goto ERROR;
bb179:
ERROR: ;
  return;
}

// function: _ZN15InsertExceptionD2Ev
void InsertException___InsertException(struct InsertException* v184) {
bb185:
  struct InsertException* this186;
  this186 = v184;
  struct InsertException* t187 = this186;
  return;
}

// function: _ZN16BinarySearchTree14insertInternalEP8CustomerRP10BinaryNode
void BinarySearchTree__insertInternal(struct BinarySearchTree* v188, struct Customer* v189, struct BinaryNode** v190) {
bb191:
  struct BinarySearchTree* this192;
  struct Customer* x193;
  struct BinaryNode** t194;
  this192 = v188;
  x193 = v189;
  t194 = v190;
  struct BinarySearchTree* t195 = this192;
    struct BinaryNode** t196 = t194;
    struct BinaryNode* t197 = *t196;
    struct BinaryNode* c198 = ((void*)0);
    _Bool c199 = ((t197 == c198)) ? 1 : 0;
    if (c199) {
      struct BinaryNode* __new_result200;
      unsigned long c201 = 24;
      void* r202 = operator_new(c201);
      if (__cir_exc_active) {
        return;
      }
        struct BinaryNode* cast203 = (struct BinaryNode*)r202;
        __new_result200 = cast203;
        struct Customer* t204 = x193;
        struct BinaryNode* c205 = ((void*)0);
        struct BinaryNode* c206 = ((void*)0);
        BinaryNode__BinaryNode(cast203, t204, c205, c206);
        if (__cir_exc_active) {
          {
            operator_delete(r202, c201);
          }
          return;
        }
      struct BinaryNode* t207 = __new_result200;
      struct BinaryNode** t208 = t194;
      *t208 = t207;
    } else {
        struct Customer* t209 = x193;
        struct BinaryNode** t210 = t194;
        struct BinaryNode* t211 = *t210;
        struct Customer* t212 = t211->element;
        _Bool r213 = lessthan(t209, t212);
        if (__cir_exc_active) {
          return;
        }
        if (r213) {
          struct Customer* t214 = x193;
          struct BinaryNode** t215 = t194;
          struct BinaryNode* t216 = *t215;
          BinarySearchTree__insertInternal(t195, t214, &t216->left);
          if (__cir_exc_active) {
            return;
          }
        } else {
            struct BinaryNode** t217 = t194;
            struct BinaryNode* t218 = *t217;
            struct Customer* t219 = t218->element;
            struct Customer* t220 = x193;
            _Bool r221 = lessthan(t219, t220);
            if (__cir_exc_active) {
              return;
            }
            if (r221) {
              struct Customer* t222 = x193;
              struct BinaryNode** t223 = t194;
              struct BinaryNode* t224 = *t223;
              BinarySearchTree__insertInternal(t195, t222, &t224->right);
              if (__cir_exc_active) {
                return;
              }
            } else {
              static char exc_buf225[8] = {0};
              struct InsertException* exc226 = (struct InsertException*)exc_buf225;
              struct Customer* t227 = x193;
              InsertException__InsertException(exc226, t227);
              if (__cir_exc_active) {
                return;
              }
              __cir_exc_ptr = (void*)exc226;
              __cir_exc_dtor = (void*)&InsertException___InsertException;
              __cir_exc_type = (const void*)__cir_eh_type__ZTI15InsertException;
              __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI15InsertException;
              __cir_exc_active = 1;
              return;
              __builtin_unreachable();
            }
        }
    }
  return;
}

// function: _ZN16BinarySearchTree6insertEP8Customer
void BinarySearchTree__insert(struct BinarySearchTree* v228, struct Customer* v229) {
bb230:
  struct BinarySearchTree* this231;
  struct Customer* x232;
  this231 = v228;
  x232 = v229;
  struct BinarySearchTree* t233 = this231;
  struct Customer* t234 = x232;
  BinarySearchTree__insertInternal(t233, t234, &t233->root);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN10BinaryNodeD2Ev
void BinaryNode___BinaryNode(struct BinaryNode* v235) {
bb236:
  struct BinaryNode* this237;
  this237 = v235;
  struct BinaryNode* t238 = this237;
  struct Customer* t239 = t238->element;
  destroy(t239);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN16BinarySearchTree14removeInternalEP8CustomerRP10BinaryNode
void BinarySearchTree__removeInternal(struct BinarySearchTree* v240, struct Customer* v241, struct BinaryNode** v242) {
bb243:
  struct BinarySearchTree* this244;
  struct Customer* x245;
  struct BinaryNode** t246;
  this244 = v240;
  x245 = v241;
  t246 = v242;
  struct BinarySearchTree* t247 = this244;
    struct BinaryNode** t248 = t246;
    struct BinaryNode* t249 = *t248;
    struct BinaryNode* c250 = ((void*)0);
    _Bool c251 = ((t249 == c250)) ? 1 : 0;
    if (c251) {
      return;
    }
    struct Customer* t252 = x245;
    struct BinaryNode** t253 = t246;
    struct BinaryNode* t254 = *t253;
    struct Customer* t255 = t254->element;
    _Bool c256 = ((t252 < t255)) ? 1 : 0;
    if (c256) {
      struct Customer* t257 = x245;
      struct BinaryNode** t258 = t246;
      struct BinaryNode* t259 = *t258;
      BinarySearchTree__removeInternal(t247, t257, &t259->left);
      if (__cir_exc_active) {
        return;
      }
    } else {
        struct BinaryNode** t260 = t246;
        struct BinaryNode* t261 = *t260;
        struct Customer* t262 = t261->element;
        struct Customer* t263 = x245;
        _Bool c264 = ((t262 < t263)) ? 1 : 0;
        if (c264) {
          struct Customer* t265 = x245;
          struct BinaryNode** t266 = t246;
          struct BinaryNode* t267 = *t266;
          BinarySearchTree__removeInternal(t247, t265, &t267->right);
          if (__cir_exc_active) {
            return;
          }
        } else {
            struct BinaryNode** t268 = t246;
            struct BinaryNode* t269 = *t268;
            struct BinaryNode* t270 = t269->left;
            struct BinaryNode* c271 = ((void*)0);
            _Bool c272 = ((t270 != c271)) ? 1 : 0;
            _Bool ternary273;
            if (c272) {
              struct BinaryNode** t274 = t246;
              struct BinaryNode* t275 = *t274;
              struct BinaryNode* t276 = t275->right;
              struct BinaryNode* c277 = ((void*)0);
              _Bool c278 = ((t276 != c277)) ? 1 : 0;
              ternary273 = (_Bool)c278;
            } else {
              _Bool c279 = 0;
              ternary273 = (_Bool)c279;
            }
            if (ternary273) {
              struct BinaryNode** t280 = t246;
              struct BinaryNode* t281 = *t280;
              struct BinaryNode* t282 = t281->right;
              struct BinaryNode* r283 = BinarySearchTree__findMin(t247, t282);
              if (__cir_exc_active) {
                return;
              }
              struct Customer* t284 = r283->element;
              struct BinaryNode** t285 = t246;
              struct BinaryNode* t286 = *t285;
              t286->element = t284;
              struct BinaryNode** t287 = t246;
              struct BinaryNode* t288 = *t287;
              struct Customer* t289 = t288->element;
              struct BinaryNode** t290 = t246;
              struct BinaryNode* t291 = *t290;
              BinarySearchTree__removeInternal(t247, t289, &t291->right);
              if (__cir_exc_active) {
                return;
              }
            } else {
              struct BinaryNode* oldNode292;
              struct BinaryNode** t293 = t246;
              struct BinaryNode* t294 = *t293;
              oldNode292 = t294;
              struct BinaryNode** t295 = t246;
              struct BinaryNode* t296 = *t295;
              struct BinaryNode* t297 = t296->left;
              struct BinaryNode* c298 = ((void*)0);
              _Bool c299 = ((t297 != c298)) ? 1 : 0;
              struct BinaryNode* ternary300;
              if (c299) {
                struct BinaryNode** t301 = t246;
                struct BinaryNode* t302 = *t301;
                struct BinaryNode* t303 = t302->left;
                ternary300 = (struct BinaryNode*)t303;
              } else {
                struct BinaryNode** t304 = t246;
                struct BinaryNode* t305 = *t304;
                struct BinaryNode* t306 = t305->right;
                ternary300 = (struct BinaryNode*)t306;
              }
              struct BinaryNode** t307 = t246;
              *t307 = ternary300;
              struct BinaryNode* t308 = oldNode292;
              struct BinaryNode* c309 = ((void*)0);
              _Bool c310 = ((t308 != c309)) ? 1 : 0;
              if (c310) {
                  BinaryNode___BinaryNode(t308);
                {
                  void* cast311 = (void*)t308;
                  unsigned long c312 = 24;
                  operator_delete(cast311, c312);
                }
              }
            }
        }
    }
  return;
}

// function: _ZN16BinarySearchTree6removeEP8Customer
void BinarySearchTree__remove(struct BinarySearchTree* v313, struct Customer* v314) {
bb315:
  struct BinarySearchTree* this316;
  struct Customer* x317;
  this316 = v313;
  x317 = v314;
  struct BinarySearchTree* t318 = this316;
  struct Customer* t319 = x317;
  BinarySearchTree__removeInternal(t318, t319, &t318->root);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN16BinarySearchTree9elementAtEP10BinaryNode
struct Customer* BinarySearchTree__elementAt(struct BinarySearchTree* v320, struct BinaryNode* v321) {
bb322:
  struct BinarySearchTree* this323;
  struct BinaryNode* t324;
  struct Customer* __retval325;
  this323 = v320;
  t324 = v321;
  struct BinarySearchTree* t326 = this323;
    struct BinaryNode* t327 = t324;
    struct BinaryNode* c328 = ((void*)0);
    _Bool c329 = ((t327 == c328)) ? 1 : 0;
    if (c329) {
      struct Customer* t330 = t326->ITEM_NOT_FOUND;
      __retval325 = t330;
      struct Customer* t331 = __retval325;
      return t331;
    } else {
      struct BinaryNode* t332 = t324;
      struct Customer* t333 = t332->element;
      __retval325 = t333;
      struct Customer* t334 = __retval325;
      return t334;
    }
  abort();
}

// function: _ZN16BinarySearchTree7findMinEP10BinaryNode
struct BinaryNode* BinarySearchTree__findMin(struct BinarySearchTree* v335, struct BinaryNode* v336) {
bb337:
  struct BinarySearchTree* this338;
  struct BinaryNode* t339;
  struct BinaryNode* __retval340;
  this338 = v335;
  t339 = v336;
  struct BinarySearchTree* t341 = this338;
    struct BinaryNode* t342 = t339;
    struct BinaryNode* c343 = ((void*)0);
    _Bool c344 = ((t342 == c343)) ? 1 : 0;
    if (c344) {
      struct BinaryNode* c345 = ((void*)0);
      __retval340 = c345;
      struct BinaryNode* t346 = __retval340;
      return t346;
    }
    struct BinaryNode* t347 = t339;
    struct BinaryNode* t348 = t347->left;
    struct BinaryNode* c349 = ((void*)0);
    _Bool c350 = ((t348 == c349)) ? 1 : 0;
    if (c350) {
      struct BinaryNode* t351 = t339;
      __retval340 = t351;
      struct BinaryNode* t352 = __retval340;
      return t352;
    }
  struct BinaryNode* t353 = t339;
  struct BinaryNode* t354 = t353->left;
  struct BinaryNode* r355 = BinarySearchTree__findMin(t341, t354);
  if (__cir_exc_active) {
    struct BinaryNode* __cir_eh_ret = (struct BinaryNode*)0;
    return __cir_eh_ret;
  }
  __retval340 = r355;
  struct BinaryNode* t356 = __retval340;
  return t356;
}

// function: _ZN16BinarySearchTree7findMinEv
struct Customer* BinarySearchTree__findMin_2(struct BinarySearchTree* v357) {
bb358:
  struct BinarySearchTree* this359;
  struct Customer* __retval360;
  this359 = v357;
  struct BinarySearchTree* t361 = this359;
  struct BinaryNode* t362 = t361->root;
  struct BinaryNode* r363 = BinarySearchTree__findMin(t361, t362);
  if (__cir_exc_active) {
    struct Customer* __cir_eh_ret = (struct Customer*)0;
    return __cir_eh_ret;
  }
  struct Customer* r364 = BinarySearchTree__elementAt(t361, r363);
  if (__cir_exc_active) {
    struct Customer* __cir_eh_ret = (struct Customer*)0;
    return __cir_eh_ret;
  }
  __retval360 = r364;
  struct Customer* t365 = __retval360;
  return t365;
}

// function: _ZN16BinarySearchTree7findMaxEP10BinaryNode
struct BinaryNode* BinarySearchTree__findMax(struct BinarySearchTree* v366, struct BinaryNode* v367) {
bb368:
  struct BinarySearchTree* this369;
  struct BinaryNode* t370;
  struct BinaryNode* __retval371;
  this369 = v366;
  t370 = v367;
  struct BinarySearchTree* t372 = this369;
    struct BinaryNode* t373 = t370;
    struct BinaryNode* c374 = ((void*)0);
    _Bool c375 = ((t373 != c374)) ? 1 : 0;
    if (c375) {
        while (1) {
          struct BinaryNode* t376 = t370;
          struct BinaryNode* t377 = t376->right;
          struct BinaryNode* c378 = ((void*)0);
          _Bool c379 = ((t377 != c378)) ? 1 : 0;
          if (!c379) break;
          struct BinaryNode* t380 = t370;
          struct BinaryNode* t381 = t380->right;
          t370 = t381;
        }
    }
  struct BinaryNode* t382 = t370;
  __retval371 = t382;
  struct BinaryNode* t383 = __retval371;
  return t383;
}

// function: _ZN16BinarySearchTree7findMaxEv
struct Customer* BinarySearchTree__findMax_2(struct BinarySearchTree* v384) {
bb385:
  struct BinarySearchTree* this386;
  struct Customer* __retval387;
  this386 = v384;
  struct BinarySearchTree* t388 = this386;
  struct BinaryNode* t389 = t388->root;
  struct BinaryNode* r390 = BinarySearchTree__findMax(t388, t389);
  if (__cir_exc_active) {
    struct Customer* __cir_eh_ret = (struct Customer*)0;
    return __cir_eh_ret;
  }
  struct Customer* r391 = BinarySearchTree__elementAt(t388, r390);
  if (__cir_exc_active) {
    struct Customer* __cir_eh_ret = (struct Customer*)0;
    return __cir_eh_ret;
  }
  __retval387 = r391;
  struct Customer* t392 = __retval387;
  return t392;
}

// function: _ZN16BinarySearchTree4findEP8CustomerP10BinaryNode
struct BinaryNode* BinarySearchTree__find_2(struct BinarySearchTree* v393, struct Customer* v394, struct BinaryNode* v395) {
bb396:
  struct BinarySearchTree* this397;
  struct Customer* x398;
  struct BinaryNode* t399;
  struct BinaryNode* __retval400;
  this397 = v393;
  x398 = v394;
  t399 = v395;
  struct BinarySearchTree* t401 = this397;
    struct BinaryNode* t402 = t399;
    struct BinaryNode* c403 = ((void*)0);
    _Bool c404 = ((t402 == c403)) ? 1 : 0;
    if (c404) {
      struct BinaryNode* c405 = ((void*)0);
      __retval400 = c405;
      struct BinaryNode* t406 = __retval400;
      return t406;
    } else {
        struct Customer* t407 = x398;
        struct BinaryNode* t408 = t399;
        struct Customer* t409 = t408->element;
        _Bool c410 = ((t407 < t409)) ? 1 : 0;
        if (c410) {
          struct Customer* t411 = x398;
          struct BinaryNode* t412 = t399;
          struct BinaryNode* t413 = t412->left;
          struct BinaryNode* r414 = BinarySearchTree__find_2(t401, t411, t413);
          if (__cir_exc_active) {
            struct BinaryNode* __cir_eh_ret = (struct BinaryNode*)0;
            return __cir_eh_ret;
          }
          __retval400 = r414;
          struct BinaryNode* t415 = __retval400;
          return t415;
        } else {
            struct BinaryNode* t416 = t399;
            struct Customer* t417 = t416->element;
            struct Customer* t418 = x398;
            _Bool c419 = ((t417 < t418)) ? 1 : 0;
            if (c419) {
              struct Customer* t420 = x398;
              struct BinaryNode* t421 = t399;
              struct BinaryNode* t422 = t421->right;
              struct BinaryNode* r423 = BinarySearchTree__find_2(t401, t420, t422);
              if (__cir_exc_active) {
                struct BinaryNode* __cir_eh_ret = (struct BinaryNode*)0;
                return __cir_eh_ret;
              }
              __retval400 = r423;
              struct BinaryNode* t424 = __retval400;
              return t424;
            } else {
              struct BinaryNode* t425 = t399;
              __retval400 = t425;
              struct BinaryNode* t426 = __retval400;
              return t426;
            }
        }
    }
  abort();
}

// function: _ZN16BinarySearchTree4findEP8Customer
struct Customer* BinarySearchTree__find(struct BinarySearchTree* v427, struct Customer* v428) {
bb429:
  struct BinarySearchTree* this430;
  struct Customer* x431;
  struct Customer* __retval432;
  this430 = v427;
  x431 = v428;
  struct BinarySearchTree* t433 = this430;
  struct Customer* t434 = x431;
  struct BinaryNode* t435 = t433->root;
  struct BinaryNode* r436 = BinarySearchTree__find_2(t433, t434, t435);
  if (__cir_exc_active) {
    struct Customer* __cir_eh_ret = (struct Customer*)0;
    return __cir_eh_ret;
  }
  struct Customer* r437 = BinarySearchTree__elementAt(t433, r436);
  if (__cir_exc_active) {
    struct Customer* __cir_eh_ret = (struct Customer*)0;
    return __cir_eh_ret;
  }
  __retval432 = r437;
  struct Customer* t438 = __retval432;
  return t438;
}

// function: _ZN16BinarySearchTree7isEmptyEv
_Bool BinarySearchTree__isEmpty(struct BinarySearchTree* v439) {
bb440:
  struct BinarySearchTree* this441;
  _Bool __retval442;
  this441 = v439;
  struct BinarySearchTree* t443 = this441;
  struct BinaryNode* t444 = t443->root;
  struct BinaryNode* c445 = ((void*)0);
  _Bool c446 = ((t444 == c445)) ? 1 : 0;
  __retval442 = c446;
  _Bool t447 = __retval442;
  return t447;
}

// function: _ZN16BinarySearchTree17printTreeInternalEP10BinaryNode
void BinarySearchTree__printTreeInternal(struct BinarySearchTree* v448, struct BinaryNode* v449) {
bb450:
  struct BinarySearchTree* this451;
  struct BinaryNode* t452;
  this451 = v448;
  t452 = v449;
  struct BinarySearchTree* t453 = this451;
    struct BinaryNode* t454 = t452;
    struct BinaryNode* c455 = ((void*)0);
    _Bool c456 = ((t454 != c455)) ? 1 : 0;
    if (c456) {
      struct BinaryNode* t457 = t452;
      struct BinaryNode* t458 = t457->left;
      BinarySearchTree__printTreeInternal(t453, t458);
      if (__cir_exc_active) {
        return;
      }
      struct BinaryNode* t459 = t452;
      struct BinaryNode* t460 = t459->right;
      BinarySearchTree__printTreeInternal(t453, t460);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZN16BinarySearchTree9printTreeEv
void BinarySearchTree__printTree(struct BinarySearchTree* v461) {
bb462:
  struct BinarySearchTree* this463;
  this463 = v461;
  struct BinarySearchTree* t464 = this463;
    _Bool r465 = BinarySearchTree__isEmpty(t464);
    if (__cir_exc_active) {
      return;
    }
    if (r465) {
    } else {
      struct BinaryNode* t466 = t464->root;
      BinarySearchTree__printTreeInternal(t464, t466);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: main
int main() {
bb467:
  int __retval468;
  struct BinarySearchTree t469;
  int NUMS470;
  int GAP471;
  int i472;
  int c473 = 0;
  __retval468 = c473;
  struct Customer* c474 = ((void*)0);
  BinarySearchTree__BinarySearchTree(&t469, c474);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    int c475 = 400;
    NUMS470 = c475;
    int c476 = 37;
    GAP471 = c476;
      long ssn1477;
      struct Customer* c478;
      struct Customer* __new_result479;
      long ssn2480;
      struct Customer* __new_result481;
      long ssn3482;
      struct Customer* __new_result483;
      struct InsertException x484;
        long c486 = 10243;
        ssn1477 = c486;
        unsigned long c487 = 8;
        void* r488 = operator_new(c487);
        if (__cir_exc_active) {
          {
            BinarySearchTree___BinarySearchTree(&t469);
          }
          goto cir_try_dispatch485;
        }
          struct Customer* cast489 = (struct Customer*)r488;
          __new_result479 = cast489;
          long t490 = ssn1477;
          Customer__Customer(cast489, t490);
          if (__cir_exc_active) {
            {
              operator_delete(r488, c487);
            }
            {
              BinarySearchTree___BinarySearchTree(&t469);
            }
            goto cir_try_dispatch485;
          }
        struct Customer* t491 = __new_result479;
        c478 = t491;
        struct Customer* t492 = c478;
        BinarySearchTree__insert(&t469, t492);
        if (__cir_exc_active) {
          {
            BinarySearchTree___BinarySearchTree(&t469);
          }
          goto cir_try_dispatch485;
        }
        char* cast493 = (char*)&(_str);
        long t494 = ssn1477;
        int r495 = printf(cast493, t494);
        if (__cir_exc_active) {
          {
            BinarySearchTree___BinarySearchTree(&t469);
          }
          goto cir_try_dispatch485;
        }
        long c496 = 10244;
        ssn2480 = c496;
        unsigned long c497 = 8;
        void* r498 = operator_new(c497);
        if (__cir_exc_active) {
          {
            BinarySearchTree___BinarySearchTree(&t469);
          }
          goto cir_try_dispatch485;
        }
          struct Customer* cast499 = (struct Customer*)r498;
          __new_result481 = cast499;
          long t500 = ssn2480;
          Customer__Customer(cast499, t500);
          if (__cir_exc_active) {
            {
              operator_delete(r498, c497);
            }
            {
              BinarySearchTree___BinarySearchTree(&t469);
            }
            goto cir_try_dispatch485;
          }
        struct Customer* t501 = __new_result481;
        c478 = t501;
        struct Customer* t502 = c478;
        BinarySearchTree__insert(&t469, t502);
        if (__cir_exc_active) {
          {
            BinarySearchTree___BinarySearchTree(&t469);
          }
          goto cir_try_dispatch485;
        }
        char* cast503 = (char*)&(_str);
        long t504 = ssn2480;
        int r505 = printf(cast503, t504);
        if (__cir_exc_active) {
          {
            BinarySearchTree___BinarySearchTree(&t469);
          }
          goto cir_try_dispatch485;
        }
        long c506 = 10244;
        ssn3482 = c506;
        unsigned long c507 = 8;
        void* r508 = operator_new(c507);
        if (__cir_exc_active) {
          {
            BinarySearchTree___BinarySearchTree(&t469);
          }
          goto cir_try_dispatch485;
        }
          struct Customer* cast509 = (struct Customer*)r508;
          __new_result483 = cast509;
          long t510 = ssn3482;
          Customer__Customer(cast509, t510);
          if (__cir_exc_active) {
            {
              operator_delete(r508, c507);
            }
            {
              BinarySearchTree___BinarySearchTree(&t469);
            }
            goto cir_try_dispatch485;
          }
        struct Customer* t511 = __new_result483;
        c478 = t511;
        struct Customer* t512 = c478;
        BinarySearchTree__insert(&t469, t512);
        if (__cir_exc_active) {
          {
            BinarySearchTree___BinarySearchTree(&t469);
          }
          goto cir_try_dispatch485;
        }
        char* cast513 = (char*)&(_str);
        long t514 = ssn3482;
        int r515 = printf(cast513, t514);
        if (__cir_exc_active) {
          {
            BinarySearchTree___BinarySearchTree(&t469);
          }
          goto cir_try_dispatch485;
        }
      cir_try_dispatch485: ;
      if (__cir_exc_active) {
      if (__cir_exc_type == (const void*)__cir_eh_type__ZTI15InsertException) {
        int ca_tok516 = 0;
        void* ca_exn517 = (void*)__cir_exc_ptr;
        __cir_exc_active = 0;
          x484 = *(struct InsertException*)__cir_exc_ptr;
            char* cast518 = (char*)&(_str_1);
            struct Customer* t519 = x484.a;
            long t520 = t519->ssn;
            int r521 = printf(cast518, t520);
            if (__cir_exc_active) {
              {
                InsertException___InsertException(&x484);
              }
              {
                if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
              }
              {
                BinarySearchTree___BinarySearchTree(&t469);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
          {
            InsertException___InsertException(&x484);
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
    BinarySearchTree__makeEmpty(&t469);
    if (__cir_exc_active) {
      {
        BinarySearchTree___BinarySearchTree(&t469);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c522 = 0;
    __retval468 = c522;
    int t523 = __retval468;
    int ret_val524 = t523;
    {
      BinarySearchTree___BinarySearchTree(&t469);
    }
    return ret_val524;
  int t525 = __retval468;
  return t525;
}

